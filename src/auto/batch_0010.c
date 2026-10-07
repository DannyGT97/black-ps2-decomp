// ==== FUN_001783e8 @ 001783e8 ====

undefined4 FUN_001783e8(undefined4 *param_1)

{
  *param_1 = 0;
  return 1;
}


// ==== FUN_001783f8 @ 001783f8 ====

void FUN_001783f8(void)

{
  return;
}


// ==== FUN_00178400 @ 00178400 ====

undefined4 FUN_00178400(void)

{
  return 1;
}


// ==== FUN_00178408 @ 00178408 ====

undefined8 FUN_00178408(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  switch(*param_2) {
  case 0:
    uVar1 = FUN_001784f0(param_1);
    break;
  case 1:
    uVar1 = FUN_00178650(param_1);
    break;
  case 2:
    uVar1 = FUN_001785f0(param_1);
    break;
  case 3:
    uVar1 = FUN_001786b0(param_1);
    break;
  case 4:
    uVar1 = FUN_00178718(param_1);
    break;
  case 5:
    uVar1 = FUN_00178780(param_1);
    break;
  case 6:
    uVar1 = FUN_001787e8(param_1);
    break;
  case 7:
    uVar1 = FUN_00178840(param_1);
    break;
  case 8:
    uVar1 = FUN_001788a8(param_1);
    break;
  case 9:
    uVar1 = FUN_00178910(param_1);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_001784f0 @ 001784f0 ====

undefined4 FUN_001784f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *(int *)((int)param_2 + 4);
  if (param_4 == 0) {
    param_4 = *(long *)(iVar4 + 0x20);
  }
  lVar2 = FUN_00178ae8(param_1,0x1f,1,param_2,iVar4,param_3,param_4,0x5446127ad7970000);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar4 = 0;
    uVar6 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
    iVar8 = (int)lVar2;
    if (uVar6 != 0) {
      plVar3 = *(long **)(*DAT_0040f4e0 + 4);
      iVar7 = 0x1000000;
      do {
        uVar5 = (undefined1)iVar4;
        if (*plVar3 == 0x54461524b8230000) goto LAB_001785bc;
        plVar3 = plVar3 + 4;
        iVar4 = iVar7 >> 0x18;
        iVar7 = iVar7 + 0x1000000;
      } while (iVar4 < (int)uVar6);
    }
    uVar5 = 0xff;
LAB_001785bc:
    uVar1 = FUN_0015cef0(DAT_0040f4e0,*(undefined4 *)(iVar8 + 0x7c),uVar5,0);
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x7c) + 0x2a0) + 4) = uVar1;
    uVar1 = *(undefined4 *)(iVar8 + 0x7c);
  }
  return uVar1;
}


// ==== FUN_001785f0 @ 001785f0 ====

undefined4 FUN_001785f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)((int)param_2 + 4);
  if (param_4 == 0) {
    param_4 = *(long *)(iVar1 + 0x20);
  }
  lVar3 = FUN_00178ae8(param_1,0x1d,1,param_2,iVar1,param_3,param_4,0x5446127ad7970000);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)lVar3 + 0x7c);
  }
  return uVar2;
}


// ==== FUN_00178650 @ 00178650 ====

undefined4 FUN_00178650(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)((int)param_2 + 4);
  if (param_4 == 0) {
    param_4 = *(long *)(iVar1 + 0x20);
  }
  lVar3 = FUN_00178ae8(param_1,0x1e,1,param_2,iVar1,param_3,param_4,0x5446127ad7970000);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)lVar3 + 0x7c);
  }
  return uVar2;
}


// ==== FUN_001786b0 @ 001786b0 ====

undefined4
FUN_001786b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00178978(param_1,0x24,param_2,*(undefined4 *)((int)param_2 + 4),param_3,param_4,
                       *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2c8),param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)lVar2 + 0x7c);
  }
  return uVar1;
}


// ==== FUN_00178718 @ 00178718 ====

undefined4
FUN_00178718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00178978(param_1,0x25,param_2,*(undefined4 *)((int)param_2 + 4),param_3,param_4,
                       *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2d0),param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)lVar2 + 0x7c);
  }
  return uVar1;
}


// ==== FUN_00178780 @ 00178780 ====

undefined4
FUN_00178780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00178978(param_1,0x26,param_2,*(undefined4 *)((int)param_2 + 4),param_3,param_4,
                       *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2d8),param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)lVar2 + 0x7c);
  }
  return uVar1;
}


// ==== FUN_001787e8 @ 001787e8 ====

undefined4
FUN_001787e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)((int)param_2 + 4);
  lVar3 = FUN_00178978(param_1,0x27,param_2,iVar1,param_3,param_4,*(undefined8 *)(iVar1 + 0x28),
                       param_5);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)lVar3 + 0x7c);
  }
  return uVar2;
}


// ==== FUN_00178840 @ 00178840 ====

undefined4
FUN_00178840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00178978(param_1,0x28,param_2,*(undefined4 *)((int)param_2 + 4),param_3,param_4,
                       *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2e0),param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)lVar2 + 0x7c);
  }
  return uVar1;
}


// ==== FUN_001788a8 @ 001788a8 ====

undefined4
FUN_001788a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00178978(param_1,0x29,param_2,*(undefined4 *)((int)param_2 + 4),param_3,param_4,
                       *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2e8),param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)lVar2 + 0x7c);
  }
  return uVar1;
}


// ==== FUN_00178910 @ 00178910 ====

undefined4
FUN_00178910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00178978(param_1,0x2a,param_2,*(undefined4 *)((int)param_2 + 4),param_3,param_4,
                       *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2f0),param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)lVar2 + 0x7c);
  }
  return uVar1;
}


// ==== FUN_00178978 @ 00178978 ====

long FUN_00178978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar5 = (int)param_4;
  uVar1 = *(undefined1 *)(iVar5 + 0x57);
  lVar3 = FUN_001390f8(DAT_0040f514);
  lVar4 = 0;
  if (lVar3 != 0) {
    if (param_6 == 0) {
      param_6 = *(long *)(iVar5 + 0x20);
    }
    lVar4 = FUN_00178bc0(param_1,param_2,uVar1,param_6,param_3,param_4,param_7,1);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      iVar6 = (int)lVar4;
      FUN_00137b08(*(undefined4 *)(iVar6 + 0x7c),*(char *)(iVar5 + 0x5a) != '\0');
      if (*(byte *)(iVar5 + 0x54) == 0) {
        cVar2 = *(char *)(iVar5 + 0x53);
      }
      else {
        uVar7 = *(undefined4 *)(iVar5 + 0x34);
        *(uint *)(iVar6 + 0x1fc8) = (uint)*(byte *)(iVar5 + 0x54);
        *(undefined4 *)(iVar6 + 0x1fc4) = uVar7;
        cVar2 = *(char *)(iVar5 + 0x53);
      }
      if (cVar2 != '\0') {
        FUN_0016aba8(iVar6 + 0x1f90,*(undefined4 *)(iVar5 + 0x30),cVar2,
                     *(undefined4 *)(iVar6 + 0x7c));
      }
      if (*(char *)(iVar5 + 0x5d) != '\0') {
        uVar9 = *(undefined4 *)(iVar5 + 0x40);
        uVar7 = *(undefined4 *)(iVar5 + 0x44);
        uVar8 = *(undefined4 *)(iVar5 + 0x48);
        *(undefined1 *)(iVar6 + 0xcb4) = 1;
        *(undefined4 *)(iVar6 + 0xcb0) = uVar8;
        *(undefined4 *)(iVar6 + 0xca8) = uVar9;
        *(undefined4 *)(iVar6 + 0xcac) = uVar7;
        FUN_001551a0(*(int *)(iVar6 + 0x7c) + 0x280,*(undefined1 *)(iVar5 + 0x5c));
      }
    }
  }
  return lVar4;
}


// ==== FUN_00178ae8 @ 00178ae8 ====

long FUN_00178ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = FUN_001390f8(DAT_0040f514);
  if ((lVar1 != 0) &&
     (lVar1 = FUN_00178bc0(param_1,param_2,param_3,param_7,param_4,param_5,param_8,0), lVar1 != 0))
  {
    *(undefined4 *)(*(int *)((int)lVar1 + 0x7c) + 0x2f8) = DAT_003f5598;
    return lVar1;
  }
  return 0;
}


// ==== FUN_00178bc0 @ 00178bc0 ====

undefined8
FUN_00178bc0(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int param_5,
            int param_6,undefined8 param_7,long param_8,undefined4 param_9,undefined1 param_10,
            undefined4 param_11,undefined1 param_12)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 auStack_120 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  iStack_b0 = param_6;
  lVar2 = FUN_0016ddb0(DAT_0040f4d4);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0016ddc8(DAT_0040f4d4);
    auStack_120[0] = FUN_00138c40(DAT_0040f514,param_2);
    uStack_100 = *(undefined8 *)(param_5 + 8);
    uStack_110 = *(undefined4 *)(iStack_b0 + 0x10);
    uStack_10c = *(undefined4 *)(iStack_b0 + 0x14);
    uStack_108 = *(undefined4 *)(iStack_b0 + 0x18);
    uStack_104 = *(undefined4 *)(iStack_b0 + 0x1c);
    uStack_f0 = param_11;
    uStack_f8 = param_7;
    uStack_ec = FUN_0012bdc8(DAT_0040f4d0,param_11);
    iStack_e8 = *param_1;
    uStack_e0 = (undefined4)param_2;
    uStack_dc = uStack_c0;
    uStack_d0 = uStack_b8;
    uStack_c8 = param_12;
    uStack_e4 = (undefined4)param_8;
    iStack_d8 = param_5;
    if (param_8 != 1) {
      iStack_d8 = 0;
    }
    iVar1 = FUN_00138c80(DAT_0040f514,uVar3,auStack_120);
    *param_1 = *param_1 + 1;
    *(undefined4 *)(iVar1 + 0x2f8) = 0x42c80000;
    *(undefined1 *)(iVar1 + 0xc) = param_10;
    *(undefined4 *)(iVar1 + 8) = param_9;
    *(int *)(iVar1 + 0x324) = iStack_b0;
  }
  return uVar3;
}


// ==== FUN_00178d30 @ 00178d30 ====

undefined4 * FUN_00178d30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 1) {
    puVar2 = (undefined4 *)FUN_00162570(*(undefined4 *)(param_1 + 8));
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + 0xa0);
    }
    else {
      puVar2 = &DAT_004432a0;
    }
  }
  else if (iVar1 == 2) {
    puVar2 = *(undefined4 **)
              (*(int *)(DAT_0040f4d4 + 0x22b20 +
                       *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x3a4) * 4) + 0x18);
  }
  else if (iVar1 == 3) {
    puVar2 = *(undefined4 **)(param_1 + 8);
  }
  else {
    puVar2 = &DAT_004432a0;
  }
  return puVar2;
}


// ==== FUN_00178de0 @ 00178de0 ====

undefined4 * FUN_00178de0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 1) {
LAB_00178e30:
    return &DAT_004432b0;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      return (undefined4 *)(*(int *)(param_1 + 8) + 0xf0);
    }
  }
  else {
    if (iVar1 == 2) {
      return (undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0xf0);
    }
    if (iVar1 == 3) goto LAB_00178e30;
  }
  return &DAT_004432b0;
}


// ==== FUN_00178e60 @ 00178e60 ====

void FUN_00178e60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 1) {
    FUN_001624c0(*(undefined4 *)(param_1 + 8));
  }
  else if ((iVar1 < 2) && (iVar1 == 0)) {
    FUN_00173488(*(int *)(param_1 + 8) + 0x210);
  }
  return;
}


// ==== FUN_00178f18 @ 00178f18 ====

bool FUN_00178f18(int param_1)

{
  return *(int *)(param_1 + 4) == 0;
}


// ==== FUN_00178f28 @ 00178f28 ====

bool FUN_00178f28(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 4) == 0) {
    bVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc4) == 2;
  }
  return bVar1;
}


// ==== FUN_00178f50 @ 00178f50 ====

bool FUN_00178f50(int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = false;
  if (*(int *)(param_1 + 4) == 0) {
    lVar3 = FUN_00135550(*(undefined4 *)(param_1 + 8));
    bVar1 = false;
    if (lVar3 != 0) {
      iVar2 = FUN_00135550(*(undefined4 *)(param_1 + 8));
      bVar1 = false;
      if (*(int *)(iVar2 + 0x80) == 1) {
        iVar2 = FUN_00135550(*(undefined4 *)(param_1 + 8));
        lVar3 = FUN_0018ddd8(iVar2 + 0xc94);
        bVar1 = lVar3 != 0;
      }
    }
  }
  return bVar1;
}


// ==== FUN_00178fc8 @ 00178fc8 ====

bool FUN_00178fc8(int param_1)

{
  return *(int *)(param_1 + 4) == 3;
}


// ==== FUN_00178fd8 @ 00178fd8 ====

undefined4 FUN_00178fd8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 3)) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00179000 @ 00179000 ====

int FUN_00179000(uint *param_1)

{
  return 1 << (*param_1 & 0x1f);
}


// ==== FUN_00179010 @ 00179010 ====

void FUN_00179010(void)

{
  return;
}


// ==== FUN_00179018 @ 00179018 ====

undefined4 FUN_00179018(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1 + 1;
  do {
    *piVar1 = iVar2;
    piVar1[1] = 5;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 3;
  } while (iVar2 < 0x20);
  *param_1 = 0;
  return 1;
}


// ==== FUN_00179050 @ 00179050 ====

void FUN_00179050(void)

{
  return;
}


// ==== FUN_00179058 @ 00179058 ====

undefined4 FUN_00179058(void)

{
  return 1;
}


// ==== FUN_00179060 @ 00179060 ====

long FUN_00179060(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = FUN_00179270();
  lVar2 = -1;
  if (lVar1 != -1) {
    uVar3 = (uint)lVar1;
    *param_1 = *param_1 | 1 << (uVar3 & 0x1f);
    param_1[uVar3 * 3 + 2] = 0;
    param_1[uVar3 * 3 + 3] = param_2;
    lVar2 = lVar1;
  }
  return lVar2;
}


// ==== FUN_001790d0 @ 001790d0 ====

long FUN_001790d0(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = FUN_00179270();
  lVar2 = -1;
  if (lVar1 != -1) {
    uVar3 = (uint)lVar1;
    *param_1 = *param_1 | 1 << (uVar3 & 0x1f);
    param_1[uVar3 * 3 + 2] = 1;
    param_1[uVar3 * 3 + 3] = param_2;
    lVar2 = lVar1;
  }
  return lVar2;
}


// ==== FUN_00179140 @ 00179140 ====

long FUN_00179140(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = FUN_00179270();
  lVar2 = -1;
  if (lVar1 != -1) {
    uVar4 = (uint)lVar1;
    *param_1 = *param_1 | 1 << (uVar4 & 0x1f);
    if (param_3 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
    }
    param_1[uVar4 * 3 + 2] = uVar3;
    param_1[uVar4 * 3 + 3] = param_2;
    lVar2 = lVar1;
  }
  return lVar2;
}


// ==== FUN_001791d8 @ 001791d8 ====

void FUN_001791d8(uint *param_1,uint param_2)

{
  FUN_00179300();
  param_1[param_2 * 3 + 2] = 5;
  *param_1 = *param_1 & ~(1 << (param_2 & 0x1f));
  return;
}


// ==== FUN_00179238 @ 00179238 ====

bool FUN_00179238(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  return (uVar1 & *param_1) == uVar1;
}


// ==== FUN_00179258 @ 00179258 ====

int FUN_00179258(int param_1,int param_2)

{
  return param_1 + param_2 * 0xc + 4;
}


// ==== FUN_00179270 @ 00179270 ====

uint FUN_00179270(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 1;
  do {
    if ((*param_1 & uVar1) == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    uVar1 = 1 << (uVar2 & 0x1f);
  } while ((int)uVar2 < 0x20);
  return 0xffffffff;
}


// ==== FUN_001792b0 @ 001792b0 ====

int FUN_001792b0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1[2] != 0 || (param_1[3] != param_2))) {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 3;
    if (0x1f < iVar1) {
      return -1;
    }
  }
  return iVar1;
}


// ==== FUN_00179300 @ 00179300 ====

void FUN_00179300(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0xf;
  iVar4 = 0;
  iVar5 = 0x2b00;
  do {
    if (*(char *)(iVar4 + DAT_0040f4d4 + 0x2b78) != '\0') {
      FUN_0013d7a0(DAT_0040f4d4 + iVar5,param_2);
    }
    iVar5 = iVar5 + 0x1fd0;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 0x1fd0;
  } while (-1 < iVar3);
  uVar1 = FUN_00179258(param_1,param_2);
  lVar2 = FUN_00178f18(uVar1);
  if (lVar2 != 0) {
    iVar3 = FUN_00179258(param_1,param_2);
    FUN_001699a8(DAT_0040f4f4,*(undefined4 *)(iVar3 + 8));
  }
  return;
}


// ==== FUN_001793c0 @ 001793c0 ====

void FUN_001793c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(char *)(param_1 + 0x34) = (char)iVar1;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x38;
  } while (iVar1 < 2);
  return;
}


// ==== FUN_001793e8 @ 001793e8 ====

undefined4 FUN_001793e8(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  return 1;
}


// ==== FUN_001793f8 @ 001793f8 ====

void FUN_001793f8(void)

{
  return;
}


// ==== FUN_00179400 @ 00179400 ====

void FUN_00179400(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_00179640();
  if (lVar2 == 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x39);
  }
  else {
    if (*(char *)(param_2 + 0x39) != '\0') {
      return;
    }
    uVar1 = *(undefined1 *)(param_2 + 0x39);
  }
  FUN_001795a0(param_1,uVar1);
  return;
}


// ==== FUN_00179450 @ 00179450 ====

undefined4 FUN_00179450(int param_1)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_001797e0();
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  return 1;
}


// ==== FUN_00179490 @ 00179490 ====

void FUN_00179490(int param_1)

{
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}


// ==== FUN_001794a0 @ 001794a0 ====

void FUN_001794a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  return;
}


// ==== FUN_001794b0 @ 001794b0 ====

void FUN_001794b0(undefined8 param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_1;
  iVar5 = (int)param_2;
  if (*(char *)(iVar3 + 0x74) != '\0') {
    if (iVar5 * 0x38 + iVar3 == *(int *)(iVar3 + 0x70)) {
      iVar4 = iVar3 + 0x38;
      if (iVar5 != 0) {
        iVar4 = iVar3;
      }
      bVar1 = false;
      if (*(char *)(iVar4 + 0x35) != '\0') {
        bVar1 = *(char *)(iVar4 + 0x36) != '\0';
      }
      if (bVar1) {
        FUN_001795a0(param_1,iVar5 == 0);
      }
    }
    iVar4 = 0x2b00;
    FUN_00172f60(DAT_0040f4d4 + 0x22800,iVar5);
    iVar3 = 0xf;
    do {
      iVar2 = DAT_0040f4d4 + iVar4;
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x78) != '\0')) {
        FUN_0018d148(iVar2 + 0xd10,iVar5);
      }
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 0x1fd0;
    } while (-1 < iVar3);
  }
  return;
}


// ==== FUN_001795a0 @ 001795a0 ====

void FUN_001795a0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_001797e0();
  }
  iVar1 = iVar2 * 0x38 + param_1;
  *(int *)(param_1 + 0x70) = iVar1;
  FUN_001799e0(iVar1);
  FUN_00169aa0(DAT_0040f4f4);
  FUN_00172fe0(DAT_0040f4d4 + 0x22800,iVar2);
  FUN_001770e0(DAT_0040f4d4 + 0xa1c,iVar2);
  FUN_0016e430(DAT_0040f4d4);
  return;
}


// ==== FUN_00179640 @ 00179640 ====

bool FUN_00179640(int param_1)

{
  return *(int *)(param_1 + 0x70) != 0;
}


// ==== FUN_00179650 @ 00179650 ====

int FUN_00179650(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x70) + 0x2c) + param_2 * 0x50;
}


// ==== FUN_00179668 @ 00179668 ====

undefined4 FUN_00179668(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x70) + param_2 * 4);
}


// ==== FUN_00179680 @ 00179680 ====

undefined4 FUN_00179680(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x70) + param_2 * 4 + 8);
}


// ==== FUN_00179698 @ 00179698 ====

undefined4 FUN_00179698(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x70) + param_2 * 4 + 0x10);
}


// ==== FUN_001796b0 @ 001796b0 ====

undefined4 FUN_001796b0(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x70) + param_2 * 4 + 0x18);
}


// ==== FUN_001796c8 @ 001796c8 ====

undefined4 FUN_001796c8(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x70) + param_2 * 4 + 0x20);
}


// ==== FUN_001796e0 @ 001796e0 ====

void FUN_001796e0(int param_1)

{
  if (*(char *)(param_1 + 0x74) != '\0') {
    FUN_00179960(*(undefined4 *)(param_1 + 0x70));
  }
  return;
}


// ==== FUN_00179708 @ 00179708 ====

void FUN_00179708(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 1;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[8] = 0;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar3);
  FUN_00179800(param_1);
  iVar3 = *(int *)(param_1[1] + 0x14);
  iVar2 = FUN_00107d20(iVar3 * 0x50);
  iVar5 = iVar3 + -1;
  iVar4 = iVar2;
  if (iVar3 != 0) {
    do {
      *(undefined **)(iVar4 + 0x30) = &DAT_003dffc8;
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + 0x50;
    } while (iVar5 != -1);
  }
  param_1[0xb] = iVar2;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  return;
}


// ==== FUN_001797b8 @ 001797b8 ====

undefined4 FUN_001797b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x14);
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return 1;
}


// ==== FUN_001797e0 @ 001797e0 ====

undefined4 FUN_001797e0(int param_1)

{
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return 1;
}


// ==== FUN_00179800 @ 00179800 ====

void FUN_00179800(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 *puStack_80;
  undefined4 uStack_7c;
  
  uVar3 = FUN_0016fa38();
  puStack_80 = (undefined4 *)0x0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x98,&puStack_80);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(puStack_80,0x98,uVar4);
  }
  puVar2 = puStack_80;
  FUN_002f5c10(puStack_80);
  *puVar2 = &DAT_003dffe0;
  FUN_00289480(*(undefined4 *)(param_2 + 4),puVar2);
  uStack_7c = 0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,
                     (uint)&puStack_80 | 4);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_7c,0x1c,uVar4);
  }
  uVar4 = FUN_002f0a00(uStack_7c,puVar2);
  *(undefined4 *)((int)uVar3 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((int)uVar3 + 4) = *(undefined4 *)(param_2 + 0xc);
  piVar5 = (int *)uVar4;
  (**(code **)(*piVar5 + 0x14))((int)piVar5 + (int)*(short *)(*piVar5 + 0x10),uVar3);
  FUN_002ef1a0(uVar4,uVar3);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(int **)(param_1 + 0xc) = piVar5;
  *(undefined4 **)(param_1 + 4) = puVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 0x1c) = param_2 + 0x18;
  *(int *)(param_1 + 0x24) = param_2 + 0x218;
  return;
}


// ==== FUN_00179960 @ 00179960 ====

void FUN_00179960(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = 0;
    do {
      lVar2 = FUN_00177a98(*(int *)(param_1 + 0x2c) + iVar3);
      if (lVar2 == param_2) {
        FUN_00177ad0(*(int *)(param_1 + 0x2c) + iVar3);
        iVar1 = *(int *)(param_1 + 0x28);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x28);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x50;
    } while (iVar4 < iVar1);
  }
  return;
}


// ==== FUN_001799e0 @ 001799e0 ====

void FUN_001799e0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar7 = 0;
  iVar2 = param_1[1];
  if (0 < (int)param_1[10]) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      if (uVar7 < *(uint *)(iVar2 + 0xc)) {
        piVar3 = (int *)(iVar8 + *(int *)(iVar2 + 0x18));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x14;
      FUN_00177d10(param_1[0xb] + iVar9,piVar4);
      iVar9 = iVar9 + 0x50;
    } while ((int)uVar7 < (int)param_1[10]);
  }
  if (*(char *)((int)param_1 + 0x37) == '\0') {
    iVar8 = 0;
    iVar2 = FUN_002ec058(DAT_003c9ed4,0x452158);
    puVar6 = param_1 + 2;
    puVar5 = param_1;
    do {
      iVar9 = iVar8 * 4;
      uVar1 = *puVar5;
      iVar8 = iVar8 + 1;
      puVar5 = puVar5 + 1;
      *(undefined4 *)(*(int *)(iVar9 + *(int *)(iVar2 + 4)) + 0x84) = uVar1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *(undefined4 *)(*(int *)(iVar9 + *(int *)(iVar2 + 4)) + 0x8c) = uVar1;
      *(undefined4 *)(*(int *)(iVar9 + *(int *)(iVar2 + 4)) + 0x10c) = 1;
      *(undefined1 *)(*(int *)(iVar9 + *(int *)(iVar2 + 4)) + 0x88) = 1;
    } while (iVar8 < 2);
  }
  *(undefined1 *)((int)param_1 + 0x37) = 1;
  return;
}


// ==== FUN_00179b40 @ 00179b40 ====

void FUN_00179b40(void)

{
  return;
}


// ==== FUN_00179b48 @ 00179b48 ====

undefined4 FUN_00179b48(void)

{
  return 1;
}


// ==== FUN_00179b50 @ 00179b50 ====

void FUN_00179b50(void)

{
  return;
}


// ==== FUN_00179b58 @ 00179b58 ====

undefined4 FUN_00179b58(void)

{
  return 1;
}


// ==== FUN_00179b60 @ 00179b60 ====

void FUN_00179b60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0xf;
  iVar3 = 0x2b00;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = DAT_0040f4d4 + iVar3;
    iVar3 = iVar3 + 0x1fd0;
    FUN_0018b490(iVar1 + 0xcc0,param_2);
  } while (-1 < iVar2);
  return;
}


// ==== FUN_00179bd0 @ 00179bd0 ====

void FUN_00179bd0(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x28,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x28,uVar1);
  }
  uVar1 = FUN_002fb558(auStack_40[0]);
  param_1[0x14] = (int)uVar1;
  FUN_002fb1c8(uVar1,0x32);
  *param_1 = param_2;
  return;
}


// ==== FUN_00179c60 @ 00179c60 ====

void FUN_00179c60(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 8) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


// ==== FUN_00179c88 @ 00179c88 ====

void FUN_00179c88(undefined8 param_1)

{
  long lVar1;
  
  do {
    lVar1 = FUN_0017a0a8(param_1);
  } while (lVar1 != 0);
  return;
}


// ==== FUN_00179cc0 @ 00179cc0 ====

void FUN_00179cc0(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 4) = 0;
  return;
}


// ==== FUN_00179cd0 @ 00179cd0 ====

undefined4 FUN_00179cd0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
}


// ==== FUN_00179ce0 @ 00179ce0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00179ce0(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  int *piVar2;
  undefined1 auVar3 [16];
  
  auVar3 = _lqc2(_DAT_00414dc0);
  piVar2 = (int *)(param_2 * 0xc + *(int *)(*(int *)(param_1 + 0x50) + 0x14));
  auVar1 = _pextlw((long)piVar2[2],(long)*piVar2);
  auVar1 = _pextlw((long)piVar2[1],auVar1._0_8_);
  auVar1 = _qmtc2(auVar1._0_4_);
  auVar1 = _vsub(auVar1,auVar3);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_8_;
}


// ==== FUN_00179d40 @ 00179d40 ====

int FUN_00179d40(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x50) + 0x14) + param_2 * 0xc;
}


// ==== FUN_00179d58 @ 00179d58 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00179d58(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  auVar2 = _qmtc2(param_2);
  auVar5 = _qmtc2(param_3);
  iVar1 = (int)param_1;
  auVar4 = _sqc2(auVar2);
  *(undefined1 (*) [16])(iVar1 + 0x10) = auVar4;
  auVar4 = _sqc2(auVar5);
  *(undefined1 (*) [16])(iVar1 + 0x20) = auVar4;
  *(undefined4 *)(*(int *)(iVar1 + 0x50) + 4) = 0;
  auVar4 = _lqc2(_DAT_00414dc0);
  auVar3 = _vadd(auVar2,auVar4);
  auVar2 = _qmfc2(auVar3._0_4_);
  auVar6 = _vadd(auVar5,auVar4);
  *(undefined4 *)(*(int *)(iVar1 + 0x50) + 8) = 0;
  auVar4 = _sqc2(auVar3);
  auVar5 = _qmfc2(auVar6._0_4_);
  *(undefined1 *)(iVar1 + 0x60) = param_4;
  uStack_2c = auVar4._4_4_;
  auVar4 = _sqc2(auVar3);
  *(int *)(iVar1 + 0x38) = auVar2._0_4_;
  uStack_28 = auVar4._8_4_;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined1 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = uStack_2c;
  *(undefined4 *)(iVar1 + 0x40) = uStack_28;
  auVar4 = _sqc2(auVar6);
  *(int *)(iVar1 + 0x44) = auVar5._0_4_;
  uStack_1c = auVar4._4_4_;
  auVar4 = _sqc2(auVar6);
  uStack_18 = auVar4._8_4_;
  *(undefined4 *)(iVar1 + 0x48) = uStack_1c;
  *(undefined4 *)(iVar1 + 0x4c) = uStack_18;
  *(undefined4 *)(iVar1 + 8) = 1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0017b138(DAT_0040f4d4 + 0x1150,param_1);
  return;
}


// ==== FUN_00179e50 @ 00179e50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00179e50(undefined8 param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xc),(long)*(int *)(param_2 + 4));
  auVar1 = _pextlw((long)*(int *)(param_2 + 8),auVar1._0_8_);
  auVar2 = _lqc2(_DAT_00414dc0);
  auVar1 = _qmtc2(auVar1._0_4_);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _qmfc2(auVar1._0_4_);
  FUN_00179d58(param_1,auVar1._0_8_);
  *(int *)((int)param_1 + 0x30) = param_2;
  return;
}


// ==== FUN_00179ed0 @ 00179ed0 ====

void FUN_00179ed0(int param_1,undefined8 param_2)

{
  FUN_00179d58(param_1,param_2,*(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x60));
  return;
}


// ==== FUN_00179ef0 @ 00179ef0 ====

void FUN_00179ef0(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ==== FUN_00179f18 @ 00179f18 ====

undefined4 FUN_00179f18(int param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar3,auVar1);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar1);
  auVar1 = _vaddbc(in_vf0,in_vf0);
  uVar4 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar4);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_4_;
}


// ==== FUN_00179f60 @ 00179f60 ====

void FUN_00179f60(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0xc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x10);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x1c);
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24);
  return;
}


// ==== FUN_00179fd0 @ 00179fd0 ====

void FUN_00179fd0(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x50) + 8);
  if (uVar1 != 0) {
    uVar3 = 1;
    do {
      bVar2 = uVar3 < uVar1;
      uVar3 = uVar3 + 1;
    } while (bVar2);
  }
  return;
}


// ==== FUN_0017a008 @ 0017a008 ====

undefined4 FUN_0017a008(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  default:
    return 0;
  case 1:
    return 7;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    return 1;
  case 9:
    return 9;
  case 10:
    break;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 2) {
    if (iVar1 < 3) {
      uVar2 = 3;
      if (iVar1 == 1) {
        uVar2 = 2;
      }
      return uVar2;
    }
    if (iVar1 == 3) {
      return 6;
    }
  }
  return 3;
}


// ==== FUN_0017a0a8 @ 0017a0a8 ====

undefined8 FUN_0017a0a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)((int)param_1 + 8)) {
  default:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = FUN_0017a170(param_1);
    break;
  case 2:
    uVar1 = FUN_0017a220(param_1);
    break;
  case 3:
    uVar1 = FUN_0017a320(param_1);
    break;
  case 4:
    uVar1 = FUN_0017a3a0(param_1);
    break;
  case 5:
    uVar1 = FUN_0017a4a8(param_1);
    break;
  case 6:
    uVar1 = FUN_0017a588(param_1);
    break;
  case 7:
    uVar1 = FUN_0017a8d8(param_1);
    break;
  case 8:
    uVar1 = FUN_0017a720(param_1);
  }
  return uVar1;
}


// ==== FUN_0017a170 @ 0017a170 ====

undefined4 FUN_0017a170(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_0017b158(DAT_0040f4d4 + 0x1150);
  if (lVar2 == param_1) {
    iVar3 = (int)lVar2;
    if (*(char *)(iVar3 + 0x60) == '\0') {
      if (*(int *)(iVar3 + 0x30) != 0) {
        *(undefined4 *)(iVar3 + 8) = 4;
        FUN_0017b3d0(DAT_0040f4d4 + 0x1160,*(undefined8 *)(iVar3 + 0x20));
        return 1;
      }
      *(undefined4 *)(iVar3 + 8) = 3;
      FUN_0017b3d0(DAT_0040f4d4 + 0x1160,*(undefined8 *)(iVar3 + 0x10));
    }
    else {
      *(undefined4 *)(iVar3 + 8) = 2;
    }
    uVar1 = 1;
  }
  else {
    FUN_0017b178(DAT_0040f4d4 + 0x1150,param_1);
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0017a220 @ 0017a220 ====

undefined8 FUN_0017a220(int *param_1)

{
  long lVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fStack_2c;
  
  auVar3 = _qmtc2(0);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 8));
  auVar2 = _vsub(auVar5,auVar6);
  auVar4 = _sqc2(auVar2);
  _vmove(auVar2);
  auVar2 = _vaddbc(in_vf0,auVar3);
  fStack_2c = auVar4._4_4_;
  auVar4 = _vmove(auVar2);
  if (fStack_2c < 2.0) {
    auVar4 = _vmul(auVar4,auVar4);
    auVar2 = _vaddbc(in_vf0,in_vf0);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar2,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    auVar2 = _qmfc2(auVar6._0_4_);
    if (auVar4._0_4_ < 100.0) {
      auVar4 = _qmfc2(auVar5._0_4_);
      lVar1 = FUN_00182bc8(*param_1 + 0x810,auVar2._0_8_,auVar4._0_8_);
      if (lVar1 != 0) {
        *(undefined1 *)(param_1 + 0x16) = 1;
        param_1[2] = 9;
        return 1;
      }
      param_1[2] = 3;
      FUN_0017b3d0(DAT_0040f4d4 + 0x1160);
      return 0;
    }
  }
  param_1[2] = 3;
  FUN_0017b3d0(DAT_0040f4d4 + 0x1160);
  return 1;
}


// ==== FUN_0017a320 @ 0017a320 ====

undefined8 FUN_0017a320(int param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0017b3f0(DAT_0040f4d4 + 0x1160);
  if (lVar2 != 0) {
    iVar1 = *(int *)(DAT_0040f4d4 + 0x1160);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 8) = 10;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 4;
      FUN_0017b3d0(DAT_0040f4d4 + 0x1160,*(undefined4 *)(param_1 + 0x20));
    }
  }
  return 0;
}


// ==== FUN_0017a3a0 @ 0017a3a0 ====

undefined8 FUN_0017a3a0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = FUN_0017b3f0(DAT_0040f4d4 + 0x1160);
  if (lVar3 != 0) {
    iVar5 = *(int *)(DAT_0040f4d4 + 0x1160);
    param_1[0xd] = iVar5;
    if (iVar5 == 0) {
      iVar5 = 10;
      param_1[3] = 1;
    }
    else {
      uVar4 = FUN_00135570(*(undefined4 *)(*param_1 + 0x7c));
      iVar5 = DAT_0040f4d4 + 0x13d0;
      uVar4 = FUN_00138320(uVar4);
      lVar3 = FUN_0028b638(iVar5,param_1[0xc],param_1[0xd],uVar4,0x3f);
      if (lVar3 == 0) {
        param_1[3] = 1;
        param_1[2] = 10;
        return 0;
      }
      piVar1 = *(int **)(*param_1 + 0x900);
      *(int *)(param_1[0x14] + 4) = piVar1[0x19];
      uVar2 = (**(code **)(*piVar1 + 0x84))((int)piVar1 + (int)*(short *)(*piVar1 + 0x80));
      *(undefined4 *)(piVar1[0x19] + 0x58) = uVar2;
      uVar2 = (**(code **)(*piVar1 + 0x4c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x48));
      *(undefined4 *)(piVar1[0x19] + 0x54) = uVar2;
      FUN_00174110();
      iVar5 = 5;
    }
    param_1[2] = iVar5;
  }
  return 0;
}


// ==== FUN_0017a4a8 @ 0017a4a8 ====

undefined4 FUN_0017a4a8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  
  piVar3 = (int *)param_1;
  lVar2 = FUN_00174158(piVar3[0x14],piVar3[0xc],piVar3[0xd],
                       *(undefined4 *)(*(int *)(*piVar3 + 0x7c) + 0x34c));
  if (lVar2 == 1) {
    FUN_00179fd0(param_1);
    uVar1 = 1;
    piVar3[2] = 6;
  }
  else {
    if (lVar2 < 2) {
      if (lVar2 != 0) {
        return 0;
      }
      piVar3[3] = 1;
      piVar3[2] = 10;
    }
    else {
      if (lVar2 != 2) {
        return 0;
      }
      fVar4 = (float)piVar3[0x17] + *(float *)(DAT_0040f4d0 + 0x1c);
      piVar3[0x17] = (int)fVar4;
      if (5.0 < fVar4) {
        piVar3[3] = 3;
        piVar3[2] = 10;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0017a588 @ 0017a588 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0017a588(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fStack_2c;
  float fStack_28;
  
  iVar6 = (int)param_1;
  uVar1 = *(uint *)(*(int *)(iVar6 + 0x50) + 8);
  if ((1 < uVar1) && (*(int *)(iVar6 + 0x54) < (int)(uVar1 - 1))) {
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x10));
    auVar7 = _lqc2(_DAT_00414dc0);
    piVar5 = (int *)(*(int *)(iVar6 + 0x54) * 0xc + *(int *)(*(int *)(iVar6 + 0x50) + 0x14));
    auVar4 = _pextlw((long)piVar5[2],(long)*piVar5);
    auVar4 = _pextlw((long)piVar5[1],auVar4._0_8_);
    auVar4 = _qmtc2(auVar4._0_4_);
    auVar4 = _vsub(auVar4,auVar7);
    auVar7 = _vsub(auVar8,auVar4);
    auVar4 = _qmfc2(auVar7._0_4_);
    bVar2 = false;
    if (auVar4._0_4_ <= 0.1 && -0.1 <= auVar4._0_4_) {
      auVar4 = _sqc2(auVar7);
      bVar3 = false;
      fStack_2c = auVar4._4_4_;
      if ((fStack_2c <= 0.1) && (bVar3 = false, -0.1 <= fStack_2c)) {
        bVar3 = true;
      }
      bVar2 = false;
      if (bVar3) {
        auVar4 = _sqc2(auVar7);
        bVar2 = false;
        fStack_28 = auVar4._8_4_;
        if (fStack_28 <= 0.1) {
          bVar2 = -0.1 <= fStack_28;
        }
      }
    }
    if (bVar2) {
      FUN_0017a980(param_1);
    }
  }
  *(undefined4 *)(iVar6 + 8) = 8;
  return 1;
}


// ==== FUN_0017a720 @ 0017a720 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0017a720(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fStack_2c;
  float fStack_28;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)(*(int *)(iVar8 + 0x50) + 8);
  if (1 < uVar1) {
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x20));
    auVar9 = _lqc2(_DAT_00414dc0);
    iVar6 = uVar1 * 0xc + *(int *)(*(int *)(iVar8 + 0x50) + 0x14);
    auVar5 = _pextlw((long)*(int *)(iVar6 + -4),(long)*(int *)(iVar6 + -0xc));
    auVar5 = _pextlw((long)*(int *)(iVar6 + -8),auVar5._0_8_);
    auVar5 = _qmtc2(auVar5._0_4_);
    auVar5 = _vsub(auVar5,auVar9);
    auVar9 = _vsub(auVar10,auVar5);
    auVar5 = _qmfc2(auVar9._0_4_);
    bVar2 = false;
    if (auVar5._0_4_ <= 0.1 && -0.1 <= auVar5._0_4_) {
      auVar5 = _sqc2(auVar9);
      bVar3 = false;
      fStack_2c = auVar5._4_4_;
      if ((fStack_2c <= 0.1) && (bVar3 = false, -0.1 <= fStack_2c)) {
        bVar3 = true;
      }
      bVar2 = false;
      if (bVar3) {
        auVar5 = _sqc2(auVar9);
        fStack_28 = auVar5._8_4_;
        bVar2 = false;
        if (fStack_28 <= 0.1) {
          bVar2 = -0.1 <= fStack_28;
        }
      }
    }
    if (bVar2) {
      FUN_0017a990(param_1);
      iVar6 = *(int *)(iVar8 + 0x50);
    }
    else {
      iVar6 = *(int *)(iVar8 + 0x50);
    }
    if ((1 < *(uint *)(iVar6 + 8)) &&
       (uVar7 = 7, *(int *)(iVar8 + 0x54) < (int)(*(uint *)(iVar6 + 8) - 1))) {
      uVar4 = 0;
      goto LAB_0017a8c4;
    }
  }
  uVar7 = 9;
  uVar4 = 1;
LAB_0017a8c4:
  *(undefined4 *)(iVar8 + 8) = uVar7;
  return uVar4;
}


// ==== FUN_0017a8d8 @ 0017a8d8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0017a8d8(undefined8 param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  
  piVar4 = (int *)param_1;
  auVar5 = _lqc2(_DAT_00414dc0);
  iVar3 = piVar4[0x15] * 0xc + *(int *)(piVar4[0x14] + 0x14);
  auVar2 = _pextlw((long)*(int *)(iVar3 + 0x14),(long)*(int *)(iVar3 + 0xc));
  auVar2 = _pextlw((long)*(int *)(iVar3 + 0x10),auVar2._0_8_);
  auVar2 = _qmtc2(auVar2._0_4_);
  auVar2 = _vsub(auVar2,auVar5);
  auVar2 = _qmfc2(auVar2._0_4_);
  lVar1 = FUN_00182bc8(*piVar4 + 0x810,*(undefined8 *)(piVar4 + 4),auVar2._0_8_);
  if (lVar1 != 0) {
    FUN_0017a980(param_1);
  }
  piVar4[2] = 9;
  return 1;
}


// ==== FUN_0017a980 @ 0017a980 ====

void FUN_0017a980(int param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  return;
}


// ==== FUN_0017a990 @ 0017a990 ====

void FUN_0017a990(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x50) + 8) = *(int *)(*(int *)(param_1 + 0x50) + 8) + -1;
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x50) + 8) * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0x10)) =
       0xffffffff;
  return;
}


// ==== FUN_0017a9c8 @ 0017a9c8 ====

undefined4 FUN_0017a9c8(int param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  if ((*(int *)(param_1 + 8) != 1) && (*(int *)(param_1 + 8) != 3)) {
    return 0;
  }
  *(int *)(param_1 + 0x20) = (int)param_2;
  *(int *)(param_1 + 0x24) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x28) = in_a1_udw;
  *(undefined4 *)(param_1 + 0x2c) = in_register_0000005c;
  return 1;
}


// ==== FUN_0017a9f8 @ 0017a9f8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017a9f8(int param_1)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  iVar4 = *(int *)(param_1 + 0x50);
  auVar8 = _lqc2(_DAT_00414dc0);
  piVar3 = *(int **)(iVar4 + 0x14);
  uVar7 = 1;
  auVar1 = _pextlw((long)piVar3[2],(long)*piVar3);
  auVar1 = _pextlw((long)piVar3[1],auVar1._0_8_);
  auVar1 = _qmtc2(auVar1._0_4_);
  auVar1 = _vsub(auVar1,auVar8);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  iVar5 = 0xc;
  uVar6 = 1;
  if (1 < *(uint *)(iVar4 + 8)) {
    do {
      uVar7 = uVar6 + 1;
      puVar2 = (undefined4 *)(iVar5 + *(int *)(iVar4 + 0x14));
      puVar2[-3] = *puVar2;
      puVar2[-2] = puVar2[1];
      puVar2[-1] = puVar2[2];
      puVar2 = (undefined4 *)(uVar6 * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0xc));
      puVar2[-1] = *puVar2;
      puVar2 = (undefined4 *)(uVar6 * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0x10));
      puVar2[-1] = *puVar2;
      iVar4 = *(int *)(param_1 + 0x50);
      iVar5 = iVar5 + 0xc;
      uVar6 = uVar7;
    } while (uVar7 < *(uint *)(iVar4 + 8));
  }
  *(undefined4 *)(uVar7 * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0x10) + -4) = 0xffffffff;
  *(int *)(*(int *)(param_1 + 0x50) + 8) = *(int *)(*(int *)(param_1 + 0x50) + 8) + -1;
  iVar4 = *(int *)(*(int *)(param_1 + 0x50) + 4);
  uVar6 = **(uint **)(*(int *)(param_1 + 0x50) + 0xc);
  if (uVar6 < *(uint *)(iVar4 + 0xc)) {
    piVar3 = (int *)(uVar6 * 0x14 + *(int *)(iVar4 + 0x18));
    if (*piVar3 == -1) {
      piVar3 = (int *)0x0;
    }
  }
  else {
    piVar3 = (int *)0x0;
  }
  *(int **)(param_1 + 0x30) = piVar3;
  return;
}


// ==== FUN_0017ab40 @ 0017ab40 ====

void FUN_0017ab40(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iStack_ac;
  
  piVar4 = *(int **)(param_1 + 0x34);
  if (piVar4 != param_2) {
    piVar11 = (int *)0x0;
    iStack_ac = -1;
    uVar12 = 0;
    do {
      iVar6 = piVar4[4];
      uVar7 = 0;
      if (*(int *)(iVar6 + 0x30) != 0) {
        lVar5 = FUN_00391710(iVar6);
        if (lVar5 == 0) {
          uVar7 = 0;
          iVar9 = 0;
          uVar10 = 0;
          while (uVar2 = FUN_00391620(iVar6), uVar10 < uVar2) {
            lVar5 = FUN_00383d40(*(int *)(iVar6 + 0x34) + iVar9 * 8);
            if (lVar5 != -1) {
              uVar10 = uVar10 + 1;
              if (*(int *)(iVar9 * 4 + *(int *)(iVar6 + 0x38)) == *piVar4) {
                uVar7 = uVar7 + 1;
              }
            }
            iVar9 = iVar9 + 1;
          }
        }
        else {
          iVar9 = *(int *)(*piVar4 * 4 + *(int *)(iVar6 + 0x24));
          uVar7 = 0;
          if (iVar9 != -1) {
            do {
              iVar9 = *(int *)(iVar9 * 4 + *(int *)(iVar6 + 0x44));
              uVar7 = uVar7 + 1;
            } while (iVar9 != -1);
          }
        }
      }
      if (uVar7 <= uVar12) {
        iVar6 = *(int *)(param_1 + 0x50);
        goto LAB_0017adb4;
      }
      iVar6 = piVar4[4];
      if (*(int *)(iVar6 + 0x24) == 0) {
        uVar10 = 0;
        iVar9 = 0;
        uVar7 = 0;
        while (uVar2 = FUN_00391620(iVar6), uVar7 < uVar2) {
          lVar5 = FUN_00383d40(*(int *)(iVar6 + 0x34) + iVar9 * 8);
          if (((lVar5 != -1) &&
              (uVar7 = uVar7 + 1, *(int *)(iVar9 * 4 + *(int *)(iVar6 + 0x38)) == *piVar4)) &&
             (bVar1 = uVar10 == uVar12, uVar10 = uVar10 + 1, bVar1)) {
            piVar11 = (int *)(*(int *)(iVar6 + 0x34) + iVar9 * 8);
            goto LAB_0017ad64;
          }
          iVar9 = iVar9 + 1;
        }
        piVar11 = (int *)0x0;
      }
      else {
        uVar7 = 0;
        for (iVar9 = *(int *)(*piVar4 * 4 + *(int *)(iVar6 + 0x24)); iVar9 != -1;
            iVar9 = *(int *)(iVar9 * 4 + *(int *)(iVar6 + 0x44))) {
          if (uVar7 == uVar12) {
            piVar11 = (int *)(*(int *)(iVar6 + 0x34) + iVar9 * 8);
            goto LAB_0017ad64;
          }
          uVar7 = uVar7 + 1;
        }
        piVar11 = (int *)0x0;
      }
LAB_0017ad64:
      iVar6 = piVar11[1];
      if (piVar11 == (int *)(iVar6 + 0x5c)) {
        piVar3 = (int *)(iVar6 + 0x78);
      }
      else {
        piVar3 = (int *)(*(int *)(iVar6 + 0x18) +
                        *(int *)(*piVar11 * 4 + *(int *)(iVar6 + 0x3c)) * 0x14);
      }
      uVar12 = uVar12 + 1;
    } while (piVar3 != param_2);
    iStack_ac = *piVar11;
    iVar6 = *(int *)(param_1 + 0x50);
LAB_0017adb4:
    piVar4 = (int *)(*(int *)(iVar6 + 8) * 0xc + *(int *)(iVar6 + 0x14));
    *piVar4 = param_2[1];
    piVar4[1] = param_2[2];
    piVar4[2] = param_2[3];
    iVar6 = piVar11[1];
    if (piVar11 == (int *)(iVar6 + 0x5c)) {
      uVar8 = *(undefined4 *)(iVar6 + 0x94);
    }
    else if (*(int *)(iVar6 + 0x50) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(*piVar11 * 4 + *(int *)(iVar6 + 0x50));
    }
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x50) + 8) * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0x18)) =
         uVar8;
    *(int *)(*(int *)(*(int *)(param_1 + 0x50) + 8) * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0xc))
         = *param_2;
    *(int *)(*(int *)(*(int *)(param_1 + 0x50) + 8) * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0x10))
         = iStack_ac;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x50) + 8) * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0x10) + 4) =
         0xffffffff;
    *(int *)(*(int *)(param_1 + 0x50) + 8) = *(int *)(*(int *)(param_1 + 0x50) + 8) + 1;
    *(int **)(param_1 + 0x34) = param_2;
  }
  return;
}


// ==== FUN_0017aed8 @ 0017aed8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017aed8(int param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auVar3 = _qmtc2(param_2);
  auVar2 = _lqc2(_DAT_00414dc0);
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar1;
  auVar3 = _vsub(auVar3,auVar2);
  auVar1 = _sqc2(auVar3);
  auVar2 = _qmfc2(auVar3._0_4_);
  uStack_c = auVar1._4_4_;
  auVar1 = _sqc2(auVar3);
  *(int *)(param_1 + 0x44) = auVar2._0_4_;
  uStack_8 = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x48) = uStack_c;
  *(undefined4 *)(param_1 + 0x4c) = uStack_8;
  return;
}


// ==== FUN_0017af20 @ 0017af20 ====

/* WARNING: Removing unreachable block (ram,0x0017afb8) */

void FUN_0017af20(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  do {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x50) + 8);
    bVar4 = false;
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 <= param_3) {
        return;
      }
      for (iVar3 = param_3; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        iVar2 = *(int *)(*(int *)((int)param_1 + 0x50) + 0xc);
        if (*(int *)(iVar3 * 4 + iVar2) == *(int *)(iVar1 * 4 + iVar2)) {
          FUN_0017afd8(param_1,iVar3,iVar1);
          bVar4 = true;
          break;
        }
      }
    } while (!bVar4);
  } while( true );
}


// ==== FUN_0017afd8 @ 0017afd8 ====

void FUN_0017afd8(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x50);
  param_2 = param_3 - param_2;
  if (param_3 < *(uint *)(iVar5 + 8)) {
    iVar7 = param_3 * 0xc;
    iVar4 = (param_3 - param_2) * 4;
    iVar6 = iVar7 + param_2 * -0xc;
    do {
      iVar3 = param_3 * 4;
      param_3 = param_3 + 1;
      puVar1 = (undefined4 *)(iVar7 + *(int *)(iVar5 + 0x14));
      puVar2 = (undefined4 *)(iVar6 + *(int *)(iVar5 + 0x14));
      iVar7 = iVar7 + 0xc;
      iVar6 = iVar6 + 0xc;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      iVar5 = *(int *)(*(int *)(param_1 + 0x50) + 0xc);
      *(undefined4 *)(iVar4 + iVar5) = *(undefined4 *)(iVar3 + iVar5);
      iVar5 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
      *(undefined4 *)(iVar4 + iVar5) = *(undefined4 *)(iVar3 + iVar5);
      iVar5 = *(int *)(param_1 + 0x50);
      iVar4 = iVar4 + 4;
    } while (param_3 < *(uint *)(iVar5 + 8));
  }
  *(undefined4 *)((param_3 - param_2) * 4 + *(int *)(*(int *)(param_1 + 0x50) + 0x10)) = 0xffffffff;
  *(int *)(*(int *)(param_1 + 0x50) + 8) = *(int *)(*(int *)(param_1 + 0x50) + 8) - param_2;
  return;
}


// ==== FUN_0017b0c0 @ 0017b0c0 ====

void FUN_0017b0c0(undefined8 param_1)

{
  FUN_00174210(param_1,0x20);
  return;
}


// ==== FUN_0017b0e0 @ 0017b0e0 ====

undefined4 FUN_0017b0e0(int param_1)

{
  FUN_00174218();
  FUN_0017b3c0(param_1 + 0x10);
  return 1;
}


// ==== FUN_0017b110 @ 0017b110 ====

void FUN_0017b110(void)

{
  FUN_0017b198();
  return;
}


// ==== FUN_0017b130 @ 0017b130 ====

undefined4 FUN_0017b130(void)

{
  return 1;
}


// ==== FUN_0017b138 @ 0017b138 ====

void FUN_0017b138(void)

{
  FUN_00174228();
  return;
}


// ==== FUN_0017b158 @ 0017b158 ====

void FUN_0017b158(void)

{
  FUN_00174398();
  return;
}


// ==== FUN_0017b178 @ 0017b178 ====

void FUN_0017b178(void)

{
  FUN_001743c0();
  return;
}


// ==== FUN_0017b198 @ 0017b198 ====

void FUN_0017b198(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_00174398();
  if (lVar3 != 0) {
    iVar1 = *(int *)((int)lVar3 + 8);
    if (iVar1 != 1) {
      if ((((iVar1 - 2U < 4) || (iVar1 == 7)) || (iVar1 == 8)) || (bVar2 = false, iVar1 == 6)) {
        bVar2 = true;
      }
      if (!bVar2) {
        FUN_001743a0(param_1);
      }
    }
  }
  FUN_00174398(param_1);
  return;
}


// ==== FUN_0017b220 @ 0017b220 ====

void FUN_0017b220(void)

{
  FUN_00174320();
  return;
}


// ==== FUN_0017b240 @ 0017b240 ====

void FUN_0017b240(int param_1)

{
  FUN_0017b3c0(param_1 + 0x10);
  return;
}


// ==== FUN_0017b260 @ 0017b260 ====

void FUN_0017b260(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_0017b268 @ 0017b268 ====

void FUN_0017b268(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _vadd(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  _sqc2(auVar2);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


// ==== FUN_0017b290 @ 0017b290 ====

undefined4 FUN_0017b290(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  int iVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2 = _por(in_zero_qw,auVar2);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x24) == 2) {
    FUN_0017b908(DAT_0040f4d4 + 0x1290,param_1);
  }
  *(int *)(iVar1 + 0x10) = auVar2._0_4_;
  *(int *)(iVar1 + 0x14) = auVar2._4_4_;
  *(int *)(iVar1 + 0x18) = auVar2._8_4_;
  *(int *)(iVar1 + 0x1c) = auVar2._12_4_;
  *(undefined1 *)(iVar1 + 0x28) = 1;
  *(undefined4 *)(iVar1 + 0x24) = 1;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  FUN_0017b8e8(DAT_0040f4d4 + 0x1290,param_1);
  return 1;
}


// ==== FUN_0017b310 @ 0017b310 ====

void FUN_0017b310(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0x24) - 1U < 2) {
    FUN_0017b908(DAT_0040f4d4 + 0x1290,param_1);
    *(undefined4 *)((int)param_1 + 0x24) = 0;
  }
  return;
}


// ==== FUN_0017b358 @ 0017b358 ====

void FUN_0017b358(int param_1)

{
  FUN_0017b310();
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_0017b388 @ 0017b388 ====

undefined8 FUN_0017b388(int param_1)

{
  undefined8 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x20) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00179650(DAT_0040f4d4,**(undefined4 **)(param_1 + 0x20));
  }
  return uVar1;
}


// ==== FUN_0017b3c0 @ 0017b3c0 ====

void FUN_0017b3c0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  return;
}


// ==== FUN_0017b3d0 @ 0017b3d0 ====

void FUN_0017b3d0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  param_1[4] = (int)param_2;
  param_1[5] = (int)((ulong)param_2 >> 0x20);
  param_1[6] = in_a1_udw;
  param_1[7] = in_register_0000005c;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[8] = 0xffffffff;
  *param_1 = 0;
  return;
}


// ==== FUN_0017b3f0 @ 0017b3f0 ====

undefined4 FUN_0017b3f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  if (piVar6[8] == -1) {
    FUN_0017b530(param_1,*(undefined8 *)(piVar6 + 4));
    if (piVar6[0x49] == 0) goto LAB_0017b504;
    piVar6[8] = 0;
  }
  iVar2 = FUN_00179668(DAT_0040f4d4,1);
  if ((uint)piVar6[piVar6[8] + 9] < *(uint *)(iVar2 + 0xc)) {
    piVar4 = (int *)(piVar6[piVar6[8] + 9] * 0x14 + *(int *)(iVar2 + 0x18));
    piVar5 = (int *)0x0;
    if (*piVar4 != -1) {
      piVar5 = piVar4;
    }
  }
  else {
    piVar5 = (int *)0x0;
  }
  lVar3 = FUN_0017b5e8(param_1,piVar5);
  if (lVar3 != 0) {
    *piVar6 = (int)piVar5;
    *(undefined1 *)(piVar6 + 0x4a) = 0;
    return 1;
  }
  iVar1 = piVar6[8];
  piVar6[8] = iVar1 + 1;
  if (iVar1 + 1 < piVar6[0x49]) {
    return 0;
  }
  if (*piVar6 != 0) {
    *(undefined1 *)(piVar6 + 0x4a) = 0;
    return 1;
  }
  if ((uint)piVar6[9] < *(uint *)(iVar2 + 0xc)) {
    piVar5 = (int *)(piVar6[9] * 0x14 + *(int *)(iVar2 + 0x18));
    if (*piVar5 == -1) {
      piVar5 = (int *)0x0;
    }
  }
  else {
    piVar5 = (int *)0x0;
  }
  *piVar6 = (int)piVar5;
LAB_0017b504:
  *(undefined1 *)(piVar6 + 0x4a) = 0;
  return 1;
}


// ==== FUN_0017b530 @ 0017b530 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017b530(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_40 = (undefined4)param_2;
  uStack_3c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_38 = in_a1_udw;
  uStack_34 = in_register_0000005c;
  FUN_00179668(DAT_0040f4d4,1);
  FUN_00179680(DAT_0040f4d4,1);
  auVar2._4_4_ = uStack_3c;
  auVar2._0_4_ = uStack_40;
  auVar2._8_4_ = uStack_38;
  auVar2._12_4_ = uStack_34;
  auVar4 = _lqc2(auVar2);
  auVar2 = _lqc2(_DAT_00414dc0);
  auVar3 = _vadd(auVar4,auVar2);
  auVar2 = _sqc2(auVar3);
  auVar4 = _qmfc2(auVar3._0_4_);
  uStack_70 = auVar4._0_4_;
  auStack_60._4_4_ = auVar2._4_4_;
  auVar2 = _sqc2(auVar3);
  auStack_60._8_4_ = auVar2._8_4_;
  uStack_6c = auStack_60._4_4_;
  uStack_68 = auStack_60._8_4_;
  auStack_60 = auVar2;
  lVar1 = FUN_0017b7d0(0x40800000,DAT_0040f4d4 + 0x1290,&uStack_70,auStack_50);
  *(int *)(param_1 + 0x124) = (int)lVar1;
  if (0 < lVar1) {
    FUN_0035c544(param_1 + 0x24,auStack_50[0],(int)lVar1 << 2);
  }
  return;
}


// ==== FUN_0017b5e8 @ 0017b5e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0017b5e8(int param_1,int param_2)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar2 = _pextlw((long)*(int *)(param_2 + 0xc),(long)*(int *)(param_2 + 4));
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar3 = _lqc2(_DAT_00414dc0);
  auVar2 = _pextlw((long)*(int *)(param_2 + 8),auVar2._0_8_);
  auVar4 = _vadd(auVar4,auVar3);
  auVar3 = _por(in_zero_qw,auVar2);
  auVar2 = _qmfc2(auVar4._0_4_);
  lVar1 = FUN_00175fa0(0x3eb33333,DAT_0040f4d4 + 4000,auVar2._0_8_,auVar3._0_8_,0x23);
  return lVar1 == 0;
}


// ==== FUN_0017b668 @ 0017b668 ====

void FUN_0017b668(undefined8 param_1)

{
  FUN_00174210(param_1,0x20);
  return;
}


// ==== FUN_0017b688 @ 0017b688 ====

undefined4 FUN_0017b688(int param_1)

{
  FUN_00174218();
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0017b3c0(param_1 + 0x10);
  return 1;
}


// ==== FUN_0017b6c0 @ 0017b6c0 ====

void FUN_0017b6c0(undefined8 param_1)

{
  FUN_0017b930();
  FUN_0017b998(param_1);
  return;
}


// ==== FUN_0017b6f0 @ 0017b6f0 ====

undefined4 FUN_0017b6f0(void)

{
  return 1;
}


// ==== FUN_0017b6f8 @ 0017b6f8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0017b6f8(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  uint *apuStack_50 [4];
  undefined1 auStack_40 [16];
  
  auVar4 = _qmtc2(param_2);
  auStack_40 = _sqc2(auVar4);
  iVar1 = FUN_00179668(DAT_0040f4d4,1);
  auVar5 = _lqc2(auStack_40);
  auVar4 = _lqc2(_DAT_00414dc0);
  auVar6 = _vadd(auVar5,auVar4);
  auVar4 = _sqc2(auVar6);
  auVar5 = _qmfc2(auVar6._0_4_);
  uStack_70 = auVar5._0_4_;
  auStack_60._4_4_ = auVar4._4_4_;
  auVar4 = _sqc2(auVar6);
  auStack_60._8_4_ = auVar4._8_4_;
  uStack_6c = auStack_60._4_4_;
  uStack_68 = auStack_60._8_4_;
  auStack_60 = auVar4;
  lVar2 = FUN_0017b7d0(0x40800000,param_1,&uStack_70,apuStack_50);
  if ((lVar2 < 1) || (*(uint *)(iVar1 + 0xc) <= *apuStack_50[0])) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*apuStack_50[0] * 0x14 + *(int *)(iVar1 + 0x18));
    if (*piVar3 == -1) {
      piVar3 = (int *)0x0;
    }
  }
  return piVar3;
}


// ==== FUN_0017b7d0 @ 0017b7d0 ====

undefined8 FUN_0017b7d0(undefined4 param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 extraout_v0_udw;
  undefined *puVar4;
  undefined1 in_s0_qw [16];
  undefined8 uVar6;
  undefined1 auVar5 [16];
  
  uVar6 = in_s0_qw._8_8_;
  puVar4 = &DAT_00410000;
  uVar1 = FUN_00179668(DAT_0040f4d4,1);
  uVar2 = FUN_00179680(*(undefined4 *)(puVar4 + -0xb2c),1);
  *param_4 = 0;
  uVar2 = FUN_002eff00(param_1,uVar2);
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = uVar2;
  auVar3 = _pextlw((long)param_3[2],(long)*param_3);
  auVar3 = _pextlw((long)param_3[1],auVar3._0_8_);
  auVar3 = _por(in_zero_qw,auVar3);
  FUN_0017baa0(param_2,auVar3._0_8_,*param_4,uVar2,uVar1);
  auVar3._8_8_ = extraout_v0_udw;
  auVar3._0_8_ = 0x40;
  auVar3 = _pminw(auVar5,auVar3);
  auVar3 = _pextlw(0,auVar3._0_8_);
  return auVar3._0_8_;
}


// ==== FUN_0017b8a8 @ 0017b8a8 ====

undefined8 FUN_0017b8a8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0017b6f8();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00179650(DAT_0040f4d4,*(undefined4 *)lVar1);
  }
  return uVar2;
}


// ==== FUN_0017b8e8 @ 0017b8e8 ====

void FUN_0017b8e8(void)

{
  FUN_00174228();
  return;
}


// ==== FUN_0017b908 @ 0017b908 ====

void FUN_0017b908(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_001742b8();
  return;
}


// ==== FUN_0017b930 @ 0017b930 ====

void FUN_0017b930(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xc) != 0) {
    if (*(int *)(*(int *)(iVar2 + 0xc) + 0x24) - 1U < 2) {
      return;
    }
    FUN_001743a0();
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  lVar1 = FUN_00174398(param_1);
  *(int *)(iVar2 + 0xc) = (int)lVar1;
  if (lVar1 != 0) {
    FUN_0017b3d0(iVar2 + 0x10,*(undefined4 *)((int)lVar1 + 0x10));
  }
  return;
}


// ==== FUN_0017b998 @ 0017b998 ====

void FUN_0017b998(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (lVar2 = FUN_0017b3f0(param_1 + 0x10), lVar2 != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20) = *(undefined4 *)(param_1 + 0x10);
    uVar1 = 3;
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x20) == 0) {
      uVar1 = 4;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// ==== FUN_0017ba00 @ 0017ba00 ====

void FUN_0017ba00(int param_1,int param_2)

{
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (**(int **)(param_1 + 0xc) == param_2)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_00174320();
  return;
}


// ==== FUN_0017ba38 @ 0017ba38 ====

void FUN_0017ba38(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_0017b3c0(param_1 + 0x10);
  return;
}


// ==== FUN_0017baa0 @ 0017baa0 ====

void FUN_0017baa0(undefined8 param_1,undefined4 param_2,uint *param_3,long param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 extraout_v0_udw;
  uint *puVar4;
  int *piVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint auStack_1f80 [2000];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar7 = auStack_1f80;
  puVar4 = auStack_1f80;
  if (param_4 != 0) {
    auVar10 = _qmtc2(param_2);
    if (0 < param_4) {
      uVar1 = *(uint *)(param_5 + 0xc);
      auVar9 = _vaddbc(in_vf0,in_vf0);
      puVar8 = param_3;
      lVar6 = param_4;
      do {
        uVar2 = *puVar8;
        *puVar7 = uVar2;
        if (uVar2 < uVar1) {
          piVar5 = (int *)(uVar2 * 0x14 + *(int *)(param_5 + 0x18));
          if (*piVar5 == -1) {
            piVar5 = (int *)0x0;
          }
        }
        else {
          piVar5 = (int *)0x0;
        }
        puVar8 = puVar8 + 1;
        lVar6 = (long)((int)lVar6 + -1);
        auVar3 = _pextlw((long)piVar5[3],(long)piVar5[1]);
        auVar3 = _pextlw((long)piVar5[2],auVar3._0_8_);
        uStack_40 = auVar3._0_4_;
        auVar11 = _qmtc2(uStack_40);
        uStack_3c = auVar3._4_4_;
        uStack_38 = auVar3._8_4_;
        uStack_34 = auVar3._12_4_;
        auVar3 = _vsub(auVar10,auVar11);
        auVar3 = _vmul(auVar3,auVar3);
        _vaddabc(auVar3,auVar3);
        auVar3 = _vmaddbc(auVar9,auVar3);
        auVar3 = _qmfc2(auVar3._0_4_);
        puVar7[1] = auVar3._0_4_;
        puVar7 = puVar7 + 2;
      } while (lVar6 != 0);
    }
    FUN_0035ec50(auStack_1f80,param_4,8,0x17ba60);
    auVar9._8_8_ = extraout_v0_udw;
    auVar9._0_8_ = 0x40;
    auVar10._8_4_ = in_s0_udw;
    auVar10._0_8_ = param_4;
    auVar10._12_4_ = in_register_0000010c;
    auVar10 = _pminw(auVar10,auVar9);
    auVar3 = _pextlw(0,auVar10._0_8_);
    if (0 < auVar3._0_8_) {
      do {
        uVar1 = *puVar4;
        auVar3._0_8_ = (long)(auVar3._0_4_ + -1);
        puVar4 = puVar4 + 2;
        *param_3 = uVar1;
        param_3 = param_3 + 1;
      } while (auVar3._0_8_ != 0);
    }
  }
  return;
}


// ==== FUN_0017bbe0 @ 0017bbe0 ====

void FUN_0017bbe0(void)

{
  return;
}


// ==== FUN_0017bbe8 @ 0017bbe8 ====

undefined4 FUN_0017bbe8(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x81);
  iVar2 = 1;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x40);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return 1;
}


// ==== FUN_0017bc18 @ 0017bc18 ====

void FUN_0017bc18(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)((int)param_1 + 0x80);
  pbVar3 = pbVar8;
  iVar4 = 0;
  do {
    iVar6 = 0;
    iVar7 = iVar4 + 1;
    if (*pbVar3 != 0) {
      puVar5 = (undefined4 *)(iVar4 * 0x40 + (int)param_1);
      do {
        uVar1 = *puVar5;
        lVar2 = FUN_00174990(uVar1);
        if (lVar2 != 0) {
          FUN_0017be40(param_1,uVar1);
        }
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar6 < (int)(uint)*pbVar3);
    }
    pbVar3 = pbVar8 + iVar7;
    iVar4 = iVar7;
  } while (iVar7 < 2);
  return;
}


// ==== FUN_0017bcd8 @ 0017bcd8 ====

void FUN_0017bcd8(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + param_2 + 0x80) = 0;
  iVar1 = **(int **)(param_1 + 0x84);
  (**(code **)(iVar1 + 0x8c))((int)*(int **)(param_1 + 0x84) + (int)*(short *)(iVar1 + 0x88));
  return;
}


// ==== FUN_0017bd10 @ 0017bd10 ====

void FUN_0017bd10(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  pbVar2 = (byte *)(param_1 + 0x80);
  iVar3 = 0;
  do {
    iVar5 = 0;
    iVar6 = iVar3 + 1;
    if (*pbVar2 != 0) {
      puVar4 = (undefined4 *)(iVar3 * 0x40 + param_1);
      uVar1 = *puVar4;
      while( true ) {
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
        FUN_00174930(uVar1,param_2);
        if ((int)(uint)*pbVar2 <= iVar5) break;
        uVar1 = *puVar4;
      }
    }
    pbVar2 = (byte *)(param_1 + 0x80) + iVar6;
    iVar3 = iVar6;
  } while (iVar6 < 2);
  return;
}


// ==== FUN_0017bdc0 @ 0017bdc0 ====

void FUN_0017bdc0(int param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x80 + param_2);
  *(undefined4 *)(param_1 + (uint)*pbVar1 * 4 + param_2 * 0x40) = param_3;
  *pbVar1 = *pbVar1 + 1;
  return;
}


// ==== FUN_0017bdf0 @ 0017bdf0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017bdf0(undefined4 param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5 = _qmtc2(param_1);
  auVar4 = _lqc2(_DAT_00415860);
  auVar3 = _lqc2(_DAT_00415830);
  auVar2 = _lqc2(_DAT_00415840);
  auVar1 = _lqc2(_DAT_00415850);
  _vmulabc(auVar3,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar1,auVar5);
  auVar1 = _vmaddbc(auVar4,in_vf0);
  auVar1 = _qmfc2(auVar1._0_4_);
  FUN_0017c828(auVar1._0_8_,0x415810);
  return;
}


// ==== FUN_0017be40 @ 0017be40 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0017be40(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [12];
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  float fVar17;
  float extraout_f0;
  float extraout_f0_00;
  float extraout_f0_01;
  float extraout_f0_02;
  float extraout_f0_03;
  float extraout_f0_04;
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
  undefined4 in_vuI;
  undefined4 uVar30;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  uVar11 = 0;
  iVar5 = FUN_0016dd68(DAT_0040f4d4,1);
  auVar21 = _vmaxbc(in_vf0,in_vf0);
  auVar20 = _vaddbc(in_vf0,in_vf0);
  auVar19 = _lqc2(_DAT_004432c0);
  auVar18 = _vmul(auVar19,auVar19);
  fVar17 = *(float *)(*param_2 + 0x2c) * 0.017453292;
  _vaddabc(auVar18,auVar18);
  auVar20 = _vmaddbc(auVar20,auVar18);
  auVar18 = _qmtc2(fVar17);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar20);
  uVar30 = _vwaitq();
  auVar19 = _vmulq(auVar19,uVar30);
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
  _vmsubai(auVar21,in_vuI);
  _vmaddai(auVar21,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar18,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar18 = _vmsubi(auVar21,in_vuI);
  auVar18 = _vabs(auVar18);
  _ctc2(0x3e800000);
  _vnop();
  auVar18 = _vsubi(auVar18,in_vuI);
  auVar22 = _vmul(auVar18,auVar18);
  _ctc2(0xc2992661);
  _vnop();
  auVar21 = _vmuli(auVar18,in_vuI);
  auVar27 = _vmul(auVar22,auVar22);
  _ctc2(0x42a33457);
  _vnop();
  auVar24 = _vmuli(auVar18,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar23 = _vmuli(auVar18,in_vuI);
  auVar20 = _vmul(auVar27,auVar27);
  auVar21 = _vmul(auVar21,auVar22);
  _ctc2(0xc2255de0);
  _vnop();
  auVar26 = _vmuli(auVar18,in_vuI);
  _vmula(auVar26,auVar22);
  _vmadda(auVar21,auVar27);
  _ctc2(0x40c90fda);
  _vmadda(auVar24,auVar27);
  _vmaddai(auVar18,in_vuI);
  auVar18 = _vmadd(auVar23,auVar20);
  auVar20 = _vmulbc(auVar19,auVar19);
  _lqc2(auStack_c0);
  auVar22 = _qmtc2(0x3f800000);
  _vaddbc(in_vf0,auVar20);
  _lqc2(auStack_d0);
  auVar21 = _vmulbc(auVar19,auVar19);
  auVar24 = _vaddbc(in_vf0,auVar22);
  auVar20 = _vmul(auVar19,auVar19);
  _vaddbc(in_vf0,auVar21);
  auVar18 = _vsubbc(auVar24,auVar18);
  auVar22 = _vmulbc(auVar19,auVar19);
  auVar21 = _vsub(in_vf0,auVar20);
  auVar18 = _vaddbc(in_vf0,auVar18);
  auVar20 = _vaddbc(in_vf0,auVar22);
  auVar21 = _vaddbc(auVar21,auVar24);
  auVar19 = _vmulbc(auVar19,auVar18);
  auVar20 = _vmulbc(auVar20,auVar18);
  auVar21 = _vmulbc(auVar21,auVar18);
  _lqc2(auStack_130);
  _lqc2(auStack_120);
  auVar23 = _vsubbc(auVar24,auVar21);
  _lqc2(auStack_110);
  auVar18 = _vsubbc(auVar20,auVar19);
  auVar22 = _vaddbc(auVar20,auVar19);
  auVar26 = _vaddbc(in_vf0,auVar23);
  auVar27 = _vaddbc(in_vf0,auVar18);
  auVar25 = _vaddbc(in_vf0,auVar22);
  auVar18 = _vaddbc(auVar20,auVar19);
  auVar22 = _vsubbc(auVar24,auVar21);
  _vmove(auVar26);
  auVar23 = _vsubbc(auVar24,auVar21);
  auVar28 = _vaddbc(in_vf0,auVar18);
  _vmove(auVar27);
  auVar24 = _vsubbc(auVar20,auVar19);
  auVar29 = _vaddbc(in_vf0,auVar22);
  auVar18 = _vsubbc(auVar20,auVar19);
  _vmove(auVar25);
  _vmove(auVar28);
  auVar21 = _vaddbc(in_vf0,auVar18);
  auVar24 = _vaddbc(in_vf0,auVar24);
  auVar22 = _vadd(in_vf0,in_vf0);
  auVar18 = _vaddbc(auVar20,auVar19);
  _sqc2(auVar21);
  _sqc2(auVar22);
  _vmove(auVar29);
  _vmove(auVar24);
  auVar19 = _vaddbc(in_vf0,auVar18);
  auVar18 = _vaddbc(in_vf0,auVar23);
  _sqc2(auVar26);
  _sqc2(auVar27);
  _sqc2(auVar25);
  _sqc2(auVar19);
  _sqc2(auVar18);
  _sqc2(auVar28);
  _sqc2(auVar29);
  _sqc2(auVar24);
  _vmove(auVar21);
  _vmove(auVar19);
  auVar23 = _vaddbc(in_vf0,auVar19);
  _vmove(auVar18);
  _sqc2(auVar21);
  auVar24 = _vaddbc(in_vf0,auVar21);
  _sqc2(auVar19);
  auVar20 = _vaddbc(in_vf0,auVar21);
  _sqc2(auVar18);
  _sqc2(auVar21);
  _sqc2(auVar19);
  _sqc2(auVar18);
  _sqc2(auVar22);
  _sqc2(auVar22);
  _sqc2(auVar22);
  _vmove(auVar23);
  _vmove(auVar24);
  auVar21 = _vaddbc(in_vf0,auVar18);
  _vmove(auVar20);
  auVar22 = _vaddbc(in_vf0,auVar18);
  auVar20 = _lqc2(*(undefined1 (*) [16])(*param_2 + 0x20));
  auVar26 = _vaddbc(in_vf0,auVar19);
  auVar18 = _vmulbc(auVar21,auVar20);
  auVar19 = _vmulbc(auVar22,auVar20);
  _sqc2(auVar23);
  auVar18 = _vadd(auVar18,auVar19);
  auVar19 = _vmulbc(auVar26,auVar20);
  _sqc2(auVar20);
  _DAT_00415830 = _sqc2(auVar21);
  auVar18 = _vadd(auVar18,auVar19);
  _sqc2(auVar24);
  auVar18 = _vsub(in_vf0,auVar18);
  _DAT_00415840 = _sqc2(auVar22);
  _DAT_00415860 = _sqc2(auVar18);
  _DAT_00415850 = _sqc2(auVar26);
  if (*(int *)(iVar5 + 0x10) != 0) {
    do {
      if (uVar11 < *(uint *)(iVar5 + 0xc)) {
        piVar13 = (int *)(uVar11 * 0x14 + *(int *)(iVar5 + 0x18));
        piVar16 = (int *)0x0;
        if (*piVar13 != -1) {
          piVar16 = piVar13;
        }
      }
      else {
        piVar16 = (int *)0x0;
      }
      uVar11 = uVar11 + 1;
      puVar2 = (undefined4 *)*param_2;
      auVar22 = _lqc2(_DAT_00415830);
      DAT_00415810 = *puVar2;
      DAT_00415814 = puVar2[1];
      DAT_00415818 = puVar2[2];
      DAT_0041581c = puVar2[3];
      auVar21 = _lqc2(_DAT_00415840);
      auVar3 = *(undefined1 (*) [12])(puVar2 + 4);
      DAT_0041582c = puVar2[7];
      auVar19 = _lqc2(_DAT_00415850);
      auVar20 = _lqc2(_DAT_00415860);
      DAT_00415820 = auVar3._0_4_;
      DAT_00415824 = auVar3._4_4_;
      DAT_00415828 = auVar3._8_4_;
      auVar18 = _pextlw((long)piVar16[3],(long)piVar16[1]);
      auVar18 = _pextlw((long)piVar16[2],auVar18._0_8_);
      auVar18 = _qmtc2(auVar18._0_4_);
      _vmulabc(auVar22,auVar18);
      _vmaddabc(auVar21,auVar18);
      _vmaddabc(auVar19,auVar18);
      auVar18 = _vmaddbc(auVar20,in_vf0);
      auVar18 = _qmfc2(auVar18._0_4_);
      lVar9 = FUN_0017c828(auVar18._0_8_);
      uVar15 = 0;
      fVar17 = extraout_f0;
      if (lVar9 != 0) {
        while( true ) {
          iVar8 = piVar16[4];
          lVar9 = FUN_00391720(iVar8);
          iVar12 = piVar16[4];
          if (lVar9 == 0) {
            uVar10 = 0;
            iVar12 = 0;
            uVar14 = 0;
            while (uVar6 = FUN_00391620(iVar8), uVar14 < uVar6) {
              lVar9 = FUN_00383d40(*(int *)(iVar8 + 0x34) + iVar12 * 8);
              if (lVar9 != -1) {
                uVar14 = uVar14 + 1;
                if (*(int *)(iVar12 * 4 + *(int *)(iVar8 + 0x3c)) == *piVar16) {
                  uVar10 = uVar10 + 1;
                }
              }
              iVar12 = iVar12 + 1;
            }
            iVar12 = piVar16[4];
            fVar17 = extraout_f0_01;
          }
          else {
            iVar7 = *(int *)(*piVar16 * 4 + *(int *)(iVar8 + 0x20));
            uVar10 = 0;
            fVar17 = extraout_f0_00;
            if (iVar7 != -1) {
              do {
                iVar7 = *(int *)(iVar7 * 4 + *(int *)(iVar8 + 0x40));
                uVar10 = uVar10 + 1;
              } while (iVar7 != -1);
            }
          }
          if (uVar10 <= uVar15) break;
          if (*(int *)(iVar12 + 0x20) == 0) {
            uVar14 = 0;
            iVar8 = 0;
            uVar10 = 0;
            while (uVar6 = FUN_00391620(iVar12), uVar10 < uVar6) {
              lVar9 = FUN_00383d40(*(int *)(iVar12 + 0x34) + iVar8 * 8);
              if (((lVar9 != -1) &&
                  (uVar10 = uVar10 + 1, *(int *)(iVar8 * 4 + *(int *)(iVar12 + 0x3c)) == *piVar16))
                 && (bVar1 = uVar14 == uVar15, uVar14 = uVar14 + 1, bVar1)) {
                piVar13 = (int *)(*(int *)(iVar12 + 0x34) + iVar8 * 8);
                goto LAB_0017c41c;
              }
              iVar8 = iVar8 + 1;
            }
            piVar13 = (int *)0x0;
          }
          else {
            uVar10 = 0;
            for (iVar8 = *(int *)(*piVar16 * 4 + *(int *)(iVar12 + 0x20)); iVar8 != -1;
                iVar8 = *(int *)(iVar8 * 4 + *(int *)(iVar12 + 0x40))) {
              if (uVar10 == uVar15) {
                piVar13 = (int *)(*(int *)(iVar12 + 0x34) + iVar8 * 8);
                goto LAB_0017c41c;
              }
              uVar10 = uVar10 + 1;
            }
            piVar13 = (int *)0x0;
          }
LAB_0017c41c:
          uVar15 = uVar15 + 1;
          iVar8 = piVar13[1];
          if (piVar13 == (int *)(iVar8 + 0x5c)) {
            iVar8 = iVar8 + 100;
          }
          else {
            iVar8 = *(int *)(iVar8 + 0x18) + *(int *)(*piVar13 * 4 + *(int *)(iVar8 + 0x38)) * 0x14;
          }
          auVar22 = _lqc2(_DAT_00415830);
          auVar21 = _lqc2(_DAT_00415840);
          auVar19 = _lqc2(_DAT_00415850);
          auVar20 = _lqc2(_DAT_00415860);
          auVar18 = _pextlw((long)*(int *)(iVar8 + 0xc),(long)*(int *)(iVar8 + 4));
          auVar18 = _pextlw((long)*(int *)(iVar8 + 8),auVar18._0_8_);
          auVar18 = _qmtc2(auVar18._0_4_);
          _vmulabc(auVar22,auVar18);
          _vmaddabc(auVar21,auVar18);
          _vmaddabc(auVar19,auVar18);
          auVar18 = _vmaddbc(auVar20,in_vf0);
          auVar18 = _qmfc2(auVar18._0_4_);
          cVar4 = FUN_0017c828(auVar18._0_8_,0x415810);
          if (cVar4 != '\x01') {
            iVar8 = **(int **)(param_1 + 0x84);
            (**(code **)(iVar8 + 0x7c))
                      ((int)*(int **)(param_1 + 0x84) + (int)*(short *)(iVar8 + 0x78),iVar5,piVar13)
            ;
          }
        }
        uVar15 = 0;
        while( true ) {
          uVar10 = 0;
          if (*(int *)(iVar12 + 0x30) != 0) {
            lVar9 = FUN_00391710(iVar12);
            if (lVar9 == 0) {
              uVar10 = 0;
              iVar8 = 0;
              uVar14 = 0;
              while (uVar6 = FUN_00391620(iVar12), fVar17 = extraout_f0_03, uVar14 < uVar6) {
                lVar9 = FUN_00383d40(*(int *)(iVar12 + 0x34) + iVar8 * 8);
                if (lVar9 != -1) {
                  uVar14 = uVar14 + 1;
                  if (*(int *)(iVar8 * 4 + *(int *)(iVar12 + 0x38)) == *piVar16) {
                    uVar10 = uVar10 + 1;
                  }
                }
                iVar8 = iVar8 + 1;
              }
            }
            else {
              iVar8 = *(int *)(*piVar16 * 4 + *(int *)(iVar12 + 0x24));
              uVar10 = 0;
              fVar17 = extraout_f0_02;
              if (iVar8 != -1) {
                do {
                  iVar8 = *(int *)(iVar8 * 4 + *(int *)(iVar12 + 0x44));
                  uVar10 = uVar10 + 1;
                } while (iVar8 != -1);
              }
            }
          }
          if (uVar10 <= uVar15) break;
          iVar8 = piVar16[4];
          if (*(int *)(iVar8 + 0x24) == 0) {
            uVar14 = 0;
            iVar12 = 0;
            uVar10 = 0;
            while (uVar6 = FUN_00391620(iVar8), uVar10 < uVar6) {
              lVar9 = FUN_00383d40(*(int *)(iVar8 + 0x34) + iVar12 * 8);
              if (((lVar9 != -1) &&
                  (uVar10 = uVar10 + 1, *(int *)(iVar12 * 4 + *(int *)(iVar8 + 0x38)) == *piVar16))
                 && (bVar1 = uVar14 == uVar15, uVar14 = uVar14 + 1, bVar1)) {
                piVar13 = (int *)(*(int *)(iVar8 + 0x34) + iVar12 * 8);
                goto LAB_0017c6b4;
              }
              iVar12 = iVar12 + 1;
            }
            piVar13 = (int *)0x0;
          }
          else {
            uVar10 = 0;
            for (iVar12 = *(int *)(*piVar16 * 4 + *(int *)(iVar8 + 0x24)); iVar12 != -1;
                iVar12 = *(int *)(iVar12 * 4 + *(int *)(iVar8 + 0x44))) {
              if (uVar10 == uVar15) {
                piVar13 = (int *)(*(int *)(iVar8 + 0x34) + iVar12 * 8);
                goto LAB_0017c6b4;
              }
              uVar10 = uVar10 + 1;
            }
            piVar13 = (int *)0x0;
          }
LAB_0017c6b4:
          uVar15 = uVar15 + 1;
          iVar8 = piVar13[1];
          if (piVar13 == (int *)(iVar8 + 0x5c)) {
            iVar8 = iVar8 + 0x78;
          }
          else {
            iVar8 = *(int *)(iVar8 + 0x18) + *(int *)(*piVar13 * 4 + *(int *)(iVar8 + 0x3c)) * 0x14;
          }
          auVar22 = _lqc2(_DAT_00415830);
          auVar21 = _lqc2(_DAT_00415840);
          auVar19 = _lqc2(_DAT_00415850);
          auVar20 = _lqc2(_DAT_00415860);
          auVar18 = _pextlw((long)*(int *)(iVar8 + 0xc),(long)*(int *)(iVar8 + 4));
          auVar18 = _pextlw((long)*(int *)(iVar8 + 8),auVar18._0_8_);
          auVar18 = _qmtc2(auVar18._0_4_);
          _vmulabc(auVar22,auVar18);
          _vmaddabc(auVar21,auVar18);
          _vmaddabc(auVar19,auVar18);
          auVar18 = _vmaddbc(auVar20,in_vf0);
          auVar18 = _qmfc2(auVar18._0_4_);
          cVar4 = FUN_0017c828(auVar18._0_8_,0x415810);
          fVar17 = extraout_f0_04;
          if (cVar4 != '\x01') {
            iVar8 = **(int **)(param_1 + 0x84);
            fVar17 = (float)(**(code **)(iVar8 + 0x7c))
                                      ((int)*(int **)(param_1 + 0x84) +
                                       (int)*(short *)(iVar8 + 0x78),iVar5,piVar13);
          }
          iVar12 = piVar16[4];
        }
      }
    } while (uVar11 < *(uint *)(iVar5 + 0x10));
  }
  iVar8 = 0x2b00;
  iVar5 = 0xf;
  do {
    if (*(char *)(DAT_0040f4d4 + iVar8 + 0x78) != '\0') {
      fVar17 = (float)FUN_00182d68(DAT_0040f4d4 + iVar8 + 0x810,*(undefined4 *)(param_1 + 0x84),
                                   0x17bdf0);
    }
    iVar5 = iVar5 + -1;
    iVar8 = iVar8 + 0x1fd0;
  } while (-1 < iVar5);
  return fVar17;
}


// ==== FUN_0017c828 @ 0017c828 ====

undefined8 FUN_0017c828(undefined4 param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fStack_c;
  float fStack_8;
  
  auVar6 = _qmtc2(param_1);
  auVar7 = _lqc2(param_2[1]);
  auVar3 = _qmfc2(auVar6._0_4_);
  auVar5 = _qmfc2(auVar7._0_4_);
  uVar4 = 0;
  uVar2 = uVar4;
  if (auVar5._0_4_ < auVar3._0_4_) {
    auVar8 = _lqc2(*param_2);
    auVar5 = _qmfc2(auVar8._0_4_);
    if (auVar3._0_4_ < auVar5._0_4_) {
      auVar3 = _sqc2(auVar6);
      fStack_c = auVar3._4_4_;
      if (0.0 < fStack_c) {
        auVar3 = _sqc2(auVar6);
        auVar5 = _vsubbc(auVar8,auVar7);
        fStack_c = auVar3._4_4_;
        fVar1 = fStack_c;
        auVar3 = _sqc2(auVar5);
        fStack_c = auVar3._4_4_;
        if (fStack_c <= fVar1) {
          uVar2 = 0;
        }
        else {
          auVar3 = _sqc2(auVar7);
          fStack_8 = auVar3._8_4_;
          fVar1 = fStack_8;
          auVar3 = _sqc2(auVar6);
          fStack_8 = auVar3._8_4_;
          uVar2 = 0;
          if (fVar1 < fStack_8) {
            auVar3 = _sqc2(auVar6);
            fStack_8 = auVar3._8_4_;
            fVar1 = fStack_8;
            auVar3 = _sqc2(auVar8);
            fStack_8 = auVar3._8_4_;
            uVar2 = uVar4;
            if (fVar1 < fStack_8) {
              uVar2 = 1;
            }
          }
        }
      }
    }
  }
  return uVar2;
}


// ==== FUN_0017c908 @ 0017c908 ====

float FUN_0017c908(float param_1,float param_2,float param_3)

{
  param_2 = param_2 - param_1;
  if (param_2 < 0.0) {
    param_2 = -(-param_2 - (float)(int)(-param_2 / 360.0) * 360.0);
  }
  else {
    param_2 = param_2 - (float)(int)(param_2 / 360.0) * 360.0;
  }
  if (param_2 < -180.0) {
    param_2 = param_2 + 360.0;
  }
  else if (180.0 < param_2) {
    param_2 = param_2 - 360.0;
  }
  return param_1 + param_2 * param_3;
}


// ==== FUN_0017c9f0 @ 0017c9f0 ====

void FUN_0017c9f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}


// ==== FUN_0017c9f8 @ 0017c9f8 ====

undefined4 FUN_0017c9f8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  
  auVar4 = _vadd(in_vf0,in_vf0);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x4c) = puVar1[3];
  *(undefined4 *)(param_1 + 0x50) = puVar1[2];
  uVar3 = *puVar1;
  *(undefined4 *)(param_1 + 100) = 0x40000000;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  auVar2 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar2;
  *(undefined1 *)(param_1 + 0x83) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  _sqc2(auVar4);
  auVar2 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar2;
  FUN_00173690();
  FUN_00173690(param_1 + 0x14);
  FUN_00173690(param_1 + 0x18);
  FUN_00173690(param_1 + 4);
  FUN_00173690(param_1 + 8);
  FUN_00173690(param_1 + 0xc);
  FUN_00173690(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return 1;
}


// ==== FUN_0017caf8 @ 0017caf8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017caf8(undefined8 param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  undefined4 in_vuI;
  undefined4 auStack_b0 [4];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  iVar7 = (int)param_1;
  if (*(int *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0x38c) != 0) {
    return;
  }
  if (0.0 < *(float *)(*(int *)(iVar7 + 0x44) + 0x10)) {
    if (*(float *)(iVar7 + 0x60) <= 0.0) {
      fVar8 = *(float *)(iVar7 + 0x74);
      goto LAB_0017cb5c;
    }
    iVar5 = *(int *)(iVar7 + 0x44);
LAB_0017cba8:
    *(undefined1 *)(iVar5 + 0x30) = 0;
  }
  else {
    fVar8 = *(float *)(iVar7 + 0x74);
LAB_0017cb5c:
    bVar2 = false;
    if ((fVar8 <= 0.1) && (bVar2 = false, -0.1 <= fVar8)) {
      bVar2 = true;
    }
    if (!bVar2) {
      iVar5 = *(int *)(iVar7 + 0x44);
      goto LAB_0017cba8;
    }
  }
  FUN_0017fb78(param_1);
  if (*(char *)(iVar7 + 0x81) == '\0') {
    *(undefined4 *)(iVar7 + 0x68) = *(undefined4 *)(*(int *)(iVar7 + 0x44) + 8);
    cVar3 = *(char *)(iVar7 + 0x7c);
  }
  else {
    cVar3 = *(char *)(iVar7 + 0x7c);
  }
  if (cVar3 == '\0') {
    fVar8 = 0.0;
    FUN_00173690(iVar7 + 4);
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x20));
  }
  else {
    fVar8 = *(float *)(iVar7 + 0x60);
    FUN_0017d4b0(param_1);
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x20));
  }
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vmul(auVar14,auVar14);
  _vaddabc(auVar13,auVar13);
  auVar13 = _vmaddbc(auVar15,auVar13);
  auStack_70 = _sqc2(auVar15);
  auVar13 = _qmfc2(auVar13._0_4_);
  _qmfc2(auVar14._0_4_);
  iVar5 = *(int *)(iVar7 + 0x44);
  if (2.3283064e-10 <= auVar13._0_4_) {
    FUN_00135a38(*(undefined4 *)(iVar5 + 0x7c));
    *(undefined1 *)(iVar7 + 0x87) = 1;
    iVar5 = *(int *)(iVar7 + 0x44);
  }
  uVar10 = 0x3f800000;
  uVar9 = FUN_0017d7a8(*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar7 + 0x4c),0x42b40000,
                       0x3f800000,1);
  *(undefined4 *)(*(int *)(iVar7 + 0x44) + 0xc) = uVar9;
  uVar9 = FUN_0017d7a8(*(undefined4 *)(*(int *)(iVar7 + 0x44) + 4),*(undefined4 *)(iVar7 + 0x68),
                       0x42b40000,uVar10,1);
  *(undefined4 *)(*(int *)(iVar7 + 0x44) + 4) = uVar9;
  FUN_0017ec98(param_1);
  uVar10 = FUN_0017d7a8(*(undefined4 *)(*(int *)(iVar7 + 0x44) + 8),*(undefined4 *)(iVar7 + 0x50),
                        0x43b40000,uVar10,1);
  *(undefined4 *)(*(int *)(iVar7 + 0x44) + 8) = uVar10;
  *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(iVar7 + 0x58);
  lVar6 = FUN_00180078(param_1);
  if ((((lVar6 != 0) && (*(char *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0x3aa) == '\0')) &&
      (lVar6 = FUN_001803e8(param_1), lVar6 != 0)) &&
     (fVar11 = (float)FUN_0018d9f8(*(undefined4 *)(iVar7 + 0x48)),
     fVar11 <= *(float *)(iVar7 + 0x60))) {
    *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(iVar7 + 0x58);
  }
  lVar6 = FUN_0017fa58(param_1);
  if (lVar6 == 0) {
    uVar10 = FUN_0017ead0(*(undefined4 *)(iVar7 + 0x5c),**(undefined4 **)(iVar7 + 0x44),fVar8,
                          param_1,*(undefined1 *)((*(undefined4 **)(iVar7 + 0x44))[0x1f] + 0x3aa));
    fVar8 = (float)FUN_0017f498(uVar10,param_1,auStack_b0);
    if (*(float *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0x2e0) == 0.0) {
      auStack_b0[0] = 0;
    }
    if (*(char *)(iVar7 + 0x83) != '\0') {
      fVar8 = (float)FUN_0017dad0(*(undefined4 *)(*(int *)(iVar7 + 0x44) + 0x10),fVar8,0x40c3d70a);
    }
  }
  else {
    auStack_b0[0] = 0;
  }
  bVar2 = false;
  if ((*(float *)(iVar7 + 0x74) <= 0.1) && (bVar2 = false, -0.1 <= *(float *)(iVar7 + 0x74))) {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_001800b8(auStack_b0[0],param_1,0);
    iVar5 = *(int *)(iVar7 + 0x44);
  }
  else {
    if (*(char *)(iVar7 + 0x7c) == '\0') {
      FUN_0013ef10(*(undefined4 *)(iVar7 + 0x44));
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x30));
      auVar14 = _qmtc2(*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0xa0));
      auVar14 = _vadd(auVar14,auVar13);
      _qmfc2(auVar14._0_4_);
      uVar10 = FUN_0017f298(*(undefined4 *)(iVar7 + 0x5c),param_1);
      *(undefined4 *)(iVar7 + 0x58) = uVar10;
      *(undefined4 *)(iVar7 + 0x5c) = uVar10;
      fVar8 = (float)FUN_0018d9f8(*(undefined4 *)(iVar7 + 0x48));
      fVar8 = fVar8 * *(float *)(iVar7 + 0x74);
    }
    else {
      auVar15 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x30));
      auVar14 = _vmul(auVar15,auVar15);
      auVar13 = _lqc2(auStack_70);
      _vaddabc(auVar14,auVar14);
      auVar14 = _vmaddbc(auVar13,auVar14);
      auVar13 = _vmove(auVar15);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar14);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      uVar10 = _vwaitq();
      auVar15 = _vmulq(auVar13,uVar10);
      _vmulq(auVar14,uVar10);
      auVar17 = _lqc2(_DAT_004432d0);
      auVar13 = _vmul(auVar17,auVar17);
      auVar14 = _lqc2(auStack_70);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar14,auVar13);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auStack_80 = _sqc2(auVar14);
      auVar16 = _vsubbc(in_vf0,in_vf0);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar13);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      uVar10 = _vwaitq();
      auVar17 = _vmulq(auVar17,uVar10);
      _vmulq(auVar14,uVar10);
      auVar14 = _vmul(auVar15,auVar17);
      auStack_60 = _sqc2(auVar15);
      auVar13 = _lqc2(auStack_80);
      _vaddabc(auVar14,auVar14);
      auVar14 = _vmaddbc(auVar13,auVar14);
      uStack_a0 = DAT_004432c0;
      uStack_9c = DAT_004432c4;
      uStack_98 = DAT_004432c8;
      uStack_94 = DAT_004432cc;
      auVar14 = _vmax(auVar14,auVar16);
      auStack_90 = _sqc2(auVar17);
      auVar14 = _vminibc(auVar14,in_vf0);
      auVar14 = _qmfc2(auVar14._0_4_);
      fVar11 = (float)FUN_0029e0d8(auVar14._0_4_);
      auVar14 = _lqc2(auStack_90);
      auVar13 = _lqc2(auStack_60);
      _vopmula(auVar13,auVar14);
      auVar13 = _vopmsub(auVar14,auVar13);
      auVar14._4_4_ = uStack_9c;
      auVar14._0_4_ = uStack_a0;
      auVar14._8_4_ = uStack_98;
      auVar14._12_4_ = uStack_94;
      auVar14 = _lqc2(auVar14);
      auVar13 = _vmul(auVar13,auVar14);
      auVar14 = _lqc2(auStack_80);
      _vaddabc(auVar13,auVar13);
      auVar14 = _vmaddbc(auVar14,auVar13);
      auVar14 = _qmfc2(auVar14._0_4_);
      fVar11 = fVar11 * 57.29578;
      if (0.0 < auVar14._0_4_) {
        fVar11 = -fVar11;
      }
      fVar11 = (float)FUN_0017c908(*(undefined4 *)(iVar7 + 0x5c),fVar11,
                                   *(undefined4 *)(iVar7 + 0x74));
      auVar14 = _qmtc2(fVar11 * 0.017453292);
      auVar13 = _vmaxbc(in_vf0,in_vf0);
      auVar14 = _vaddbc(in_vf0,auVar14);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar14 = _vsubi(auVar14,in_vuI);
      auVar14 = _vabs(auVar14);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar14,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar13,in_vuI);
      _vmaddai(auVar13,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar14,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar14 = _vmsubi(auVar13,in_vuI);
      *(float *)(iVar7 + 0x5c) = fVar11;
      auVar14 = _vabs(auVar14);
      _ctc2(0x3e800000);
      _vnop();
      auVar14 = _vsubi(auVar14,in_vuI);
      auVar16 = _vmul(auVar14,auVar14);
      _ctc2(0xc2992661);
      _vnop();
      auVar13 = _vmuli(auVar14,in_vuI);
      auVar20 = _vmul(auVar16,auVar16);
      _ctc2(0xc2255de0);
      _vnop();
      auVar19 = _vmuli(auVar14,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar18 = _vmuli(auVar14,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar17 = _vmuli(auVar14,in_vuI);
      auVar15 = _vmul(auVar20,auVar20);
      auVar13 = _vmul(auVar13,auVar16);
      _vmula(auVar19,auVar16);
      _vmadda(auVar13,auVar20);
      _ctc2(0x40c90fda);
      _vmadda(auVar18,auVar20);
      _vmaddai(auVar14,in_vuI);
      auVar14 = _vmadd(auVar17,auVar15);
      auVar13 = _qmtc2(0);
      _vaddbc(in_vf0,auVar14);
      auVar15 = _lqc2(auStack_70);
      auVar14 = _vaddbc(in_vf0,auVar13);
      auVar13 = _vmul(auVar14,auVar14);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar15,auVar13);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar13);
      uVar10 = _vwaitq();
      auVar14 = _vmulq(auVar14,uVar10);
      auVar14 = _qmfc2(auVar14._0_4_);
      FUN_0013ef10(*(undefined4 *)(iVar7 + 0x44),auVar14._0_8_,0);
      *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar7 + 0x5c);
      fVar11 = (float)FUN_0018da40(*(undefined4 *)(iVar7 + 0x48));
      fVar8 = (float)((int)fVar8 * (uint)(fVar11 < fVar8) | (int)fVar11 * (uint)(fVar11 >= fVar8));
    }
    FUN_001800b8(fVar8,param_1,1);
    iVar5 = *(int *)(iVar7 + 0x44);
  }
  if (*(char *)(*(int *)(iVar5 + 0x7c) + 0x3af) == '\0') {
    lVar6 = FUN_001a74e0(*(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x330));
    if (lVar6 == 1) {
      cVar3 = *(char *)(iVar7 + 0x85);
    }
    else {
      lVar6 = FUN_001a74e0(*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0x330));
      if (lVar6 != 3) {
        cVar3 = *(char *)(iVar7 + 0x86);
        goto LAB_0017d1f4;
      }
      cVar3 = *(char *)(iVar7 + 0x85);
    }
    if (cVar3 != '\0') {
      cVar3 = *(char *)(iVar7 + 0x86);
      goto LAB_0017d1f4;
    }
    auVar15 = _vaddbc(in_vf0,in_vf0);
    iVar5 = *(int *)(*(int *)(iVar7 + 0x44) + 0x7c);
    auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar7 + 0x44) + 0x50));
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x1b0));
    auVar14 = _vmul(auVar14,auVar13);
    _vaddabc(auVar14,auVar14);
    auVar14 = _vmaddbc(auVar15,auVar14);
    auVar14 = _qmfc2(auVar14._0_4_);
    fVar11 = *(float *)(iVar5 + 0x2e0);
    fVar8 = (float)((int)auVar14._0_4_ * (uint)(0.0 < auVar14._0_4_));
    fVar12 = (float)FUN_0018d9f8(*(undefined4 *)(iVar7 + 0x48));
    fVar11 = (float)((int)fVar11 * (uint)(0.0 < fVar11));
    *(float *)(*(int *)(iVar7 + 0x44) + 0x10) =
         (float)((int)fVar8 * (uint)(fVar8 < 1.0) | (uint)(fVar8 >= 1.0) * 0x3f800000) *
         (float)((int)fVar11 * (uint)(fVar11 < fVar12) | (int)fVar12 * (uint)(fVar11 >= fVar12));
  }
  else {
    cVar3 = *(char *)(iVar7 + 0x86);
LAB_0017d1f4:
    if (cVar3 == '\0') {
      *(float *)(*(int *)(iVar7 + 0x44) + 0x10) = fVar8;
    }
    else {
      *(undefined4 *)(*(int *)(iVar7 + 0x44) + 0x10) = 0;
    }
    *(undefined1 *)(iVar7 + 0x85) = 0;
  }
  lVar6 = FUN_00158078(*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0x2a4));
  if (lVar6 == 0) {
    lVar6 = FUN_0017ea70(param_1);
    if (lVar6 == 0) {
      iVar5 = *(int *)(iVar7 + 0x44);
      goto LAB_0017d238;
    }
    cVar3 = *(char *)(iVar7 + 0x7e);
  }
  else {
    iVar5 = *(int *)(iVar7 + 0x44);
LAB_0017d238:
    *(undefined1 *)(iVar5 + 0x34) = 0;
    cVar3 = *(char *)(iVar7 + 0x7e);
  }
  if (cVar3 == '\0') {
    iVar5 = *(int *)(iVar7 + 0x40);
  }
  else {
    lVar6 = FUN_001803e8(param_1);
    if (lVar6 == 0) {
      iVar5 = *(int *)(iVar7 + 0x40);
    }
    else {
      uVar10 = FUN_0018dd78(*(undefined4 *)(iVar7 + 0x48));
      FUN_00173640(uVar10,param_1);
      *(undefined1 *)(*(int *)(iVar7 + 0x44) + 0x34) = 1;
      *(undefined1 *)(iVar7 + 0x7e) = 0;
      iVar5 = *(int *)(iVar7 + 0x40);
    }
  }
  if (iVar5 == 0) {
    if (*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0x2a4) + 0xd8) - 0x19U < 2) {
      *(undefined1 *)(*(int *)(iVar7 + 0x44) + 0x3c) = 0;
    }
LAB_0017d2e0:
    cVar3 = *(char *)(iVar7 + 0x7d);
  }
  else {
    lVar6 = FUN_001803e8(param_1);
    if (lVar6 != 0) {
      uVar10 = FUN_0018dd78(*(undefined4 *)(iVar7 + 0x48));
      FUN_00173640(uVar10,iVar7 + 0x14);
      *(undefined1 *)(*(int *)(iVar7 + 0x44) + 0x3c) = 1;
      *(undefined4 *)(iVar7 + 0x40) = 0;
      goto LAB_0017d2e0;
    }
    cVar3 = *(char *)(iVar7 + 0x7d);
  }
  iVar5 = *(int *)(iVar7 + 0x44);
  if (cVar3 == '\0') {
LAB_0017d388:
    *(undefined4 *)(iVar5 + 0x44) = 0;
  }
  else {
    if (*(char *)(iVar5 + 0x38) == '\0') {
      lVar6 = FUN_0017e770(param_1);
      if (lVar6 == 0) {
        lVar6 = FUN_0017e968(param_1);
        if (lVar6 == 0) {
          iVar5 = *(int *)(iVar7 + 0x44);
        }
        else {
          piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0x330) + 0x90);
          if (piVar1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar1;
          }
          if ((&DAT_003f6340)[iVar5] == '\0') {
            iVar5 = *(int *)(iVar7 + 0x44);
          }
          else {
            lVar6 = FUN_001803e8(param_1);
            if (lVar6 != 0) {
              iVar5 = *(int *)(iVar7 + 0x44);
              if (*(char *)(iVar5 + 0x31) == '\0') {
                *(undefined4 *)(iVar5 + 0x44) = 0;
                *(undefined4 *)(*(int *)(iVar7 + 0x44) + 0x48) = 0;
                iVar5 = *(int *)(iVar7 + 0x44);
                uVar4 = *(undefined1 *)(iVar7 + 0x87);
              }
              else {
                uVar4 = *(undefined1 *)(iVar7 + 0x87);
              }
              *(undefined1 *)(iVar5 + 0x31) = uVar4;
              goto LAB_0017d440;
            }
            iVar5 = *(int *)(iVar7 + 0x44);
          }
        }
      }
      else {
        iVar5 = *(int *)(iVar7 + 0x44);
      }
      goto LAB_0017d388;
    }
    *(undefined4 *)(iVar5 + 0x44) = 0;
  }
  *(undefined4 *)(*(int *)(iVar7 + 0x44) + 0x48) = 0;
  if (*(char *)(*(int *)(iVar7 + 0x44) + 0x31) == '\0') {
    iVar5 = *(int *)(*(int *)(iVar7 + 0x44) + 0x7c);
  }
  else {
    FUN_0017e488(*(undefined4 *)(iVar7 + 0x68),param_1);
    *(undefined1 *)(*(int *)(iVar7 + 0x44) + 0x31) = 0;
    iVar5 = *(int *)(*(int *)(iVar7 + 0x44) + 0x7c);
  }
  piVar1 = *(int **)(*(int *)(iVar5 + 0x330) + 0x94);
  iVar5 = 0;
  if (piVar1 != (int *)0x0) {
    iVar5 = *piVar1;
  }
  if (iVar5 == 5) {
    uVar4 = FUN_00136b30(*(undefined4 *)(*(int *)(iVar7 + 0x44) + 0x7c));
    iVar5 = FUN_0015d210(DAT_0040f4e0,uVar4);
    if (*(char *)(*(int *)(iVar5 + 0xc) + 0x15) == '\0') {
      lVar6 = FUN_001a6840(*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x7c) + 0x330),1,1);
      if (lVar6 == 0) goto LAB_0017d440;
      iVar5 = *(int *)(iVar7 + 0x44);
    }
    else {
      iVar5 = *(int *)(iVar7 + 0x44);
    }
    FUN_001a7188(*(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x330));
  }
LAB_0017d440:
  lVar6 = FUN_00173610(iVar7 + 8);
  if (lVar6 != 0) {
    uVar10 = FUN_0017d7a8(*(undefined4 *)(iVar7 + 0x4c),0,0x42b40000,0x3f800000,1);
    *(undefined4 *)(iVar7 + 0x4c) = uVar10;
  }
  FUN_00180090(param_1);
  FUN_0017fa78(param_1);
  FUN_0017fac8(param_1);
  return;
}


// ==== FUN_0017d4b0 @ 0017d4b0 ====

void FUN_0017d4b0(undefined8 param_1)

{
  char cVar1;
  undefined1 in_zero_qw [16];
  undefined4 uVar2;
  long lVar3;
  undefined8 extraout_v0_udw;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar7 = (int)param_1;
  if (*(char *)(iVar7 + 0x88) == '\0') {
    if (((*(char *)(*(int *)(iVar7 + 0x44) + 0x3a) == '\0') && (*(char *)(iVar7 + 0x7f) == '\0')) ||
       (fVar8 = (float)FUN_0018da88(*(undefined4 *)(iVar7 + 0x48)), fVar8 < *(float *)(iVar7 + 0x60)
       )) {
      iVar5 = iVar7 + 4;
      lVar3 = FUN_001735e0(iVar5);
      if (lVar3 != 0) {
        lVar3 = FUN_00173610(iVar5);
        if (lVar3 == 0) {
          return;
        }
LAB_0017d66c:
        FUN_0017e488(*(undefined4 *)(iVar7 + 0x58));
        return;
      }
      if (*(char *)((int)*(float **)(iVar7 + 0x44) + 0x3a) == '\0') {
        fVar8 = *(float *)(iVar7 + 0x58) - **(float **)(iVar7 + 0x44);
        if (fVar8 < 0.0) {
          fVar8 = -(-fVar8 - (float)(int)(-fVar8 / 360.0) * 360.0);
        }
        else {
          fVar8 = fVar8 - (float)(int)(fVar8 / 360.0) * 360.0;
        }
        if (fVar8 < -180.0) {
          fVar8 = fVar8 + 360.0;
        }
        else if (180.0 < fVar8) {
          fVar8 = fVar8 - 360.0;
        }
        if (50.0 < ABS(fVar8)) {
          FUN_00173658(iVar5);
          goto LAB_0017d66c;
        }
      }
      FUN_00173640(0x3f000000);
      return;
    }
    FUN_00173690(iVar7 + 4);
    cVar1 = *(char *)(iVar7 + 0x88);
  }
  else {
    FUN_0017e488(*(undefined4 *)(iVar7 + 0x58));
    cVar1 = *(char *)(iVar7 + 0x88);
  }
  if (((cVar1 == '\0') && (iVar5 = *(int *)(iVar7 + 0x44), *(char *)(iVar5 + 0x3a) != '\0')) &&
     ((*(char *)(iVar7 + 0x7f) == '\0' && (*(int *)(iVar5 + 0x80) == 1)))) {
    iVar6 = iVar5 + 0x150;
    lVar3 = FUN_00188f10(iVar6);
    if ((lVar3 == 0) ||
       ((lVar3 = FUN_0018ddd8(iVar5 + 0xc94), lVar3 != 0 &&
        (lVar3 = FUN_0018ab08(iVar6), lVar3 == 0)))) {
      if (*(char *)(iVar5 + 0xc7c) != '\0') {
        iVar6 = *(int *)(iVar5 + 0x7c);
        uVar2 = FUN_00180a00(iVar5 + 0xb30);
        auVar10 = _qmtc2(uVar2);
        auVar9 = _vaddbc(in_vf0,in_vf0);
        auVar4 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xa0));
        auVar4 = _vsub(auVar4,auVar10);
        auVar4 = _vmul(auVar4,auVar4);
        _vaddabc(auVar4,auVar4);
        auVar4 = _vmaddbc(auVar9,auVar4);
        auVar4 = _qmfc2(auVar4._0_4_);
        if (auVar4._0_4_ < 4.0) {
          uVar2 = FUN_00180a10(iVar5 + 0xb30);
          FUN_0017e488(uVar2,param_1);
          return;
        }
      }
      FUN_0017e488(*(undefined4 *)(iVar7 + 0x58));
    }
    else {
      auVar4._0_8_ = FUN_00189048(iVar6);
      auVar4._8_8_ = extraout_v0_udw;
      auVar4 = _por(in_zero_qw,auVar4);
      FUN_0017e428(param_1,auVar4._0_8_);
    }
  }
  return;
}


// ==== FUN_0017d7a8 @ 0017d7a8 ====

float FUN_0017d7a8(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2 - param_1;
  if (fVar3 < 0.0) {
    fVar3 = -(-fVar3 - (float)(int)(-fVar3 / 360.0) * 360.0);
  }
  else {
    fVar3 = fVar3 - (float)(int)(fVar3 / 360.0) * 360.0;
  }
  if (fVar3 < -180.0) {
    fVar3 = fVar3 + 360.0;
  }
  else if (180.0 < fVar3) {
    fVar3 = fVar3 - 360.0;
  }
  fVar2 = fVar3 * 0.2 * *(float *)(DAT_0040f4d0 + 0x1c) * 30.0;
  fVar1 = (float)((uint)fVar3 & 0x80000000 | 0x3f800000) * param_3 * *(float *)(DAT_0040f4d0 + 0x1c)
  ;
  if ((ABS(fVar1) < ABS(fVar2)) && (param_5 != 0)) {
    fVar1 = fVar2;
  }
  if (ABS(fVar3) < ABS(fVar1 * param_4)) {
    if (param_2 < 0.0) {
      param_1 = -(-param_2 - (float)(int)(-param_2 / 360.0) * 360.0);
    }
    else {
      param_1 = param_2 - (float)(int)(param_2 / 360.0) * 360.0;
    }
    if (param_1 < -180.0) {
      param_1 = param_1 + 360.0;
    }
    else if (180.0 < param_1) {
      param_1 = param_1 - 360.0;
    }
  }
  else {
    param_1 = param_1 + fVar1 * param_4;
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
  }
  return param_1;
}


// ==== FUN_0017dad0 @ 0017dad0 ====

float FUN_0017dad0(float param_1,float param_2,float param_3)

{
  param_3 = param_3 * *(float *)(DAT_0040f4d0 + 0x1c);
  if (ABS(param_2 - param_1) < param_3) {
    return param_2;
  }
  return param_1 + (param_2 - param_1) * param_3;
}


// ==== FUN_0017db18 @ 0017db18 ====

void FUN_0017db18(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0017e770();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0x7e) = 1;
  }
  return;
}


// ==== FUN_0017db50 @ 0017db50 ====

void FUN_0017db50(int param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00180438();
  if (lVar2 == 0) {
    uVar1 = 2;
    if (param_2 != 0) {
      uVar1 = 1;
    }
    *(undefined4 *)(param_1 + 0x40) = uVar1;
  }
  return;
}


// ==== FUN_0017db98 @ 0017db98 ====

void FUN_0017db98(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uStack_3c;
  uint uStack_38;
  
  lVar2 = FUN_00180078();
  if (lVar2 == 0) {
    return;
  }
  iVar3 = (int)param_1;
  auVar7._8_4_ = in_a1_udw;
  auVar7._0_8_ = param_2;
  auVar7._12_4_ = in_register_0000005c;
  auVar8 = _lqc2(auVar7);
  auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(iVar3 + 0x44) + 0x7c) + 0xa0));
  auVar8 = _vsub(auVar8,auVar7);
  auVar7 = _qmfc2(auVar8._0_4_);
  bVar1 = false;
  if ((auVar7._0_4_ & 0x7f800000) < 0x37800001) {
    auVar7 = _sqc2(auVar8);
    uStack_3c = auVar7._4_4_;
    bVar1 = false;
    if ((uStack_3c & 0x7f800000) < 0x37800001) {
      auVar7 = _sqc2(auVar8);
      uStack_38 = auVar7._8_4_;
      bVar1 = (uStack_38 & 0x7f800000) < 0x37800001;
    }
  }
  if (bVar1) {
    return;
  }
  uVar5 = FUN_0017f298(*(undefined4 *)(iVar3 + 0x50),param_1,
                       *(undefined8 *)(*(int *)(*(int *)(iVar3 + 0x44) + 0x7c) + 0xa0),param_2);
  *(undefined4 *)(iVar3 + 0x50) = uVar5;
  if (*(char *)(iVar3 + 0x80) != '\0') {
    fVar6 = *(float *)(iVar3 + 0x54);
    if (fVar6 < 0.0) {
      fVar6 = -(-fVar6 - (float)(int)(-fVar6 / 360.0) * 360.0);
    }
    else {
      fVar6 = fVar6 - (float)(int)(fVar6 / 360.0) * 360.0;
    }
    if (fVar6 < -180.0) {
      fVar6 = fVar6 + 360.0;
    }
    else {
      if (fVar6 <= 180.0) {
        *(float *)(iVar3 + 0x50) = fVar6;
        goto LAB_0017dd40;
      }
      fVar6 = fVar6 - 360.0;
    }
    *(float *)(iVar3 + 0x50) = fVar6;
  }
LAB_0017dd40:
  fVar6 = *(float *)(iVar3 + 0x50) - *(float *)(iVar3 + 0x54);
  if (fVar6 < 0.0) {
    fVar6 = -(-fVar6 - (float)(int)(-fVar6 / 360.0) * 360.0);
  }
  else {
    fVar6 = fVar6 - (float)(int)(fVar6 / 360.0) * 360.0;
  }
  if (fVar6 < -180.0) {
    fVar6 = fVar6 + 360.0;
  }
  else {
    if (fVar6 <= 180.0) {
      fVar4 = *(float *)(iVar3 + 100);
      goto LAB_0017de20;
    }
    fVar6 = fVar6 - 360.0;
  }
  fVar4 = *(float *)(iVar3 + 100);
LAB_0017de20:
  if (fVar4 < ABS(fVar6)) {
    FUN_0017e488(*(undefined4 *)(iVar3 + 0x50));
  }
  return;
}


// ==== FUN_0017de50 @ 0017de50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017de50(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
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
  undefined4 uVar12;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [16];
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
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  uStack_fc = (undefined4)((ulong)param_3 >> 0x20);
  uStack_100 = (undefined4)param_3;
  uStack_110 = (undefined4)param_2;
  uStack_10c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_108 = in_a1_udw;
  uStack_104 = in_register_0000005c;
  uStack_f8 = in_a2_udw;
  uStack_f4 = in_register_0000006c;
  lVar2 = FUN_00180078();
  if (lVar2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x7c);
    FUN_001357b8(auStack_150,iVar1);
    auVar4._4_4_ = uStack_10c;
    auVar4._0_4_ = uStack_110;
    auVar4._8_4_ = uStack_108;
    auVar4._12_4_ = uStack_104;
    auVar5 = _lqc2(auVar4);
    auVar4 = _lqc2(auStack_120);
    auVar4 = _vsub(auVar5,auVar4);
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar4;
    iVar1 = FUN_001a68e0(*(undefined4 *)(iVar1 + 0x330),0);
    uStack_e4 = DAT_004432cc;
    uStack_e8 = DAT_004432c8;
    uStack_ec = DAT_004432c4;
    uStack_f0 = DAT_004432c0;
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar4);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar5,auVar4);
    auVar11 = _vmove(auVar5);
    auVar4 = _qmfc2(auVar4._0_4_);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
    auVar5._4_4_ = uStack_fc;
    auVar5._0_4_ = uStack_100;
    auVar5._8_4_ = uStack_f8;
    auVar5._12_4_ = uStack_f4;
    auVar5 = _lqc2(auVar5);
    auVar5 = _vsub(auVar5,auVar6);
    auVar6 = _vmove(auVar5);
    if (2.3283064e-10 <= auVar4._0_4_) {
      auVar4 = _vmul(auVar5,auVar5);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar11,auVar4);
      auVar4 = _qmfc2(auVar4._0_4_);
      auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
      if (auVar4._0_4_ < 2.3283064e-10) {
        auVar6 = _vmove(auVar5);
      }
      auVar4 = _vmul(auVar6,auVar6);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar11,auVar4);
      auVar9 = _vmove(auVar6);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar4);
      auVar4 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar10 = _vmulq(auVar9,uVar12);
      _vmulq(auVar4,uVar12);
      auVar8 = _lqc2(_DAT_004432d0);
      auVar4 = _vaddbc(in_vf0,in_vf0);
      auVar9 = _vmul(auVar8,auVar8);
      auStack_d0 = _sqc2(auVar4);
      _vaddabc(auVar9,auVar9);
      auVar9 = _vmaddbc(auVar11,auVar9);
      auVar4 = _qmfc2(auVar4._0_4_);
      auVar7 = _vmul(auVar5,auVar5);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar9);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar9 = _vmulq(auVar8,uVar12);
      _vmulq(auVar5,uVar12);
      uStack_90 = auVar4._0_4_;
      uStack_8c = auVar4._4_4_;
      uStack_88 = auVar4._8_4_;
      uStack_84 = auVar4._12_4_;
      auVar5 = _vsubbc(in_vf0,in_vf0);
      auVar4 = _vmul(auVar10,auVar9);
      auStack_c0 = _sqc2(auVar5);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar11,auVar7);
      auVar5 = _qmtc2(uStack_90);
      auStack_e0 = _sqc2(auVar9);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar5,auVar4);
      auVar5 = _lqc2(auStack_c0);
      auVar4 = _vmax(auVar4,auVar5);
      auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
      auVar5 = _vminibc(auVar4,in_vf0);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar7);
      auVar4 = _qmfc2(auVar7._0_4_);
      auVar7 = _qmtc2(SQRT(auVar4._0_4_));
      uVar12 = _vwaitq();
      auVar4 = _vmulq(auVar9,uVar12);
      auVar5 = _qmfc2(auVar5._0_4_);
      auVar4 = _sqc2(auVar4);
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar4;
      auVar4 = _qmfc2(auVar7._0_4_);
      auStack_60 = _sqc2(auVar6);
      auStack_50 = _sqc2(auVar11);
      auStack_70 = _sqc2(auVar10);
      FUN_0029e0d8(auVar5._0_4_);
      auVar5 = _lqc2(auStack_c0);
      auVar11 = _lqc2(auStack_60);
      auVar9 = _lqc2(auStack_50);
      fVar3 = 5.0 / auVar4._0_4_;
      *(undefined1 *)(param_1 + 0x81) = 1;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x50);
      *(float *)(param_1 + 100) =
           (float)((int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000) * 10.0 +
           10.0;
      auVar6._4_4_ = uStack_ec;
      auVar6._0_4_ = uStack_f0;
      auVar6._8_4_ = uStack_e8;
      auVar6._12_4_ = uStack_e4;
      auVar4 = _lqc2(auVar6);
      if (ABS((*(float **)(param_1 + 0x44))[1] - **(float **)(param_1 + 0x44)) < 10.0) {
        _vopmula(auVar11,auVar4);
        auVar6 = _vopmsub(auVar4,auVar11);
        auVar4 = _vmul(auVar6,auVar6);
        _vaddabc(auVar4,auVar4);
        auVar4 = _vmaddbc(auVar9,auVar4);
        auVar4 = _qmfc2(auVar4._0_4_);
        if (auVar4._0_4_ < 2.3283064e-10) {
          *(undefined4 *)(param_1 + 0x4c) = 0;
        }
        else {
          auVar4 = _vmul(auVar6,auVar6);
          _vaddabc(auVar4,auVar4);
          auVar4 = _vmaddbc(auVar9,auVar4);
          auVar7._4_4_ = DAT_004432c4;
          auVar7._0_4_ = DAT_004432c0;
          auVar7._8_4_ = DAT_004432c8;
          auVar7._12_4_ = DAT_004432cc;
          auVar7 = _lqc2(auVar7);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar4);
          uVar12 = _vwaitq();
          auVar6 = _vmulq(auVar6,uVar12);
          auVar4 = _vmul(auVar11,auVar11);
          _vopmula(auVar6,auVar7);
          auVar7 = _vopmsub(auVar7,auVar6);
          auStack_b0 = _sqc2(auVar6);
          _vaddabc(auVar4,auVar4);
          auVar4 = _vmaddbc(auVar9,auVar4);
          auVar6 = _vmul(auVar7,auVar7);
          auVar11 = _vmove(auVar11);
          _vaddabc(auVar6,auVar6);
          auVar6 = _vmaddbc(auVar9,auVar6);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar4);
          auVar9 = _vaddbc(in_vf0,in_vf0);
          uVar12 = _vwaitq();
          auVar4 = _vmulq(auVar11,uVar12);
          _vmulq(auVar9,uVar12);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar6);
          auVar6 = _vaddbc(in_vf0,in_vf0);
          uVar12 = _vwaitq();
          auVar9 = _vmulq(auVar7,uVar12);
          _vmulq(auVar6,uVar12);
          auStack_80 = _sqc2(auVar4);
          auVar4 = _vmul(auVar4,auVar9);
          auVar11._4_4_ = uStack_8c;
          auVar11._0_4_ = uStack_90;
          auVar11._8_4_ = uStack_88;
          auVar11._12_4_ = uStack_84;
          auVar6 = _lqc2(auVar11);
          _vaddabc(auVar4,auVar4);
          auVar4 = _vmaddbc(auVar6,auVar4);
          auStack_a0 = _sqc2(auVar9);
          auVar4 = _vmax(auVar4,auVar5);
          auVar4 = _vminibc(auVar4,in_vf0);
          auVar4 = _qmfc2(auVar4._0_4_);
          fVar3 = (float)FUN_0029e0d8(auVar4._0_4_);
          auVar4 = _lqc2(auStack_a0);
          auVar5 = _lqc2(auStack_80);
          _vopmula(auVar5,auVar4);
          auVar5 = _vopmsub(auVar4,auVar5);
          auVar4 = _lqc2(auStack_b0);
          auVar5 = _vmul(auVar5,auVar4);
          auVar9._4_4_ = uStack_8c;
          auVar9._0_4_ = uStack_90;
          auVar9._8_4_ = uStack_88;
          auVar9._12_4_ = uStack_84;
          auVar4 = _lqc2(auVar9);
          _vaddabc(auVar5,auVar5);
          auVar4 = _vmaddbc(auVar4,auVar5);
          auVar4 = _qmfc2(auVar4._0_4_);
          fVar3 = fVar3 * 57.29578;
          if (0.0 < auVar4._0_4_) {
            fVar3 = -fVar3;
          }
          *(float *)(param_1 + 0x4c) = fVar3;
          if (fVar3 < -90.0) {
            *(float *)(param_1 + 0x4c) = -180.0 - fVar3;
          }
          if (90.0 < *(float *)(param_1 + 0x4c)) {
            *(float *)(param_1 + 0x4c) = 180.0 - *(float *)(param_1 + 0x4c);
            iVar1 = *(int *)(param_1 + 0x44);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x44);
          }
          if (*(char *)(*(int *)(iVar1 + 0x7c) + 0x3a9) == '\0') {
            fVar3 = *(float *)(param_1 + 0x4c) + 5.0;
          }
          else {
            fVar3 = *(float *)(param_1 + 0x4c) - 5.0;
          }
          *(float *)(param_1 + 0x4c) = fVar3;
          fVar3 = *(float *)(param_1 + 0x4c);
          fVar3 = (float)((int)fVar3 * (uint)(-90.0 < fVar3) | (uint)(-90.0 >= fVar3) * -0x3d4c0000)
          ;
          *(uint *)(param_1 + 0x4c) =
               (int)fVar3 * (uint)(fVar3 < 90.0) | (uint)(fVar3 >= 90.0) * 0x42b40000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      fVar3 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x54);
      if (fVar3 < 0.0) {
        fVar3 = -(-fVar3 - (float)(int)(-fVar3 / 360.0) * 360.0);
      }
      else {
        fVar3 = fVar3 - (float)(int)(fVar3 / 360.0) * 360.0;
      }
      if (fVar3 < -180.0) {
        fVar3 = fVar3 + 360.0;
      }
      else if (180.0 < fVar3) {
        fVar3 = fVar3 - 360.0;
      }
      if (45.0 < ABS(fVar3)) {
        FUN_0017e488(*(undefined4 *)(param_1 + 0x68));
      }
      FUN_00173640(0x3fc00000,param_1 + 8);
    }
  }
  return;
}


// ==== FUN_0017e428 @ 0017e428 ====

void FUN_0017e428(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  
  auVar3._8_4_ = in_a1_udw;
  auVar3._0_8_ = param_2;
  auVar3._12_4_ = in_register_0000005c;
  auVar3 = _por(in_zero_qw,auVar3);
  lVar1 = FUN_00180078();
  auVar3 = _por(in_zero_qw,auVar3);
  if (lVar1 != 0) {
    iVar2 = (int)param_1;
    uVar4 = FUN_0017f298(*(undefined4 *)(iVar2 + 0x54),param_1,
                         *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x44) + 0x7c) + 0xa0),
                         auVar3._0_8_);
    *(undefined4 *)(iVar2 + 0x50) = uVar4;
    *(undefined1 *)(iVar2 + 0x7f) = 1;
    *(undefined4 *)(iVar2 + 0x54) = uVar4;
  }
  return;
}


// ==== FUN_0017e488 @ 0017e488 ====

void FUN_0017e488(float param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_00180078();
  if (lVar1 != 0) {
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
    *(float *)(param_2 + 0x50) = param_1;
    *(undefined1 *)(param_2 + 0x7f) = 1;
    *(float *)(param_2 + 0x54) = param_1;
  }
  return;
}


// ==== FUN_0017e5a8 @ 0017e5a8 ====

void FUN_0017e5a8(undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *(undefined4 *)(param_2 + 0x74) = param_1;
  *(int *)(param_2 + 0x30) = (int)param_3;
  *(int *)(param_2 + 0x34) = (int)((ulong)param_3 >> 0x20);
  *(undefined4 *)(param_2 + 0x38) = in_a1_udw;
  *(undefined4 *)(param_2 + 0x3c) = in_register_0000005c;
  return;
}


// ==== FUN_0017e5b8 @ 0017e5b8 ====

void FUN_0017e5b8(float param_1,float param_2,int param_3,undefined1 param_4)

{
  long lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (0.0 < param_2) {
    lVar1 = FUN_00180078();
    if (lVar1 == 0) {
      return;
    }
    if (param_1 < fVar2) {
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
    *(float *)(param_3 + 0x58) = param_1;
    *(undefined1 *)(param_3 + 0x7c) = 1;
    *(undefined1 *)(param_3 + 0x83) = param_4;
  }
  if (*(char *)(param_3 + 0x86) == '\0') {
    *(float *)(param_3 + 0x60) = param_2;
  }
  else {
    *(undefined4 *)(param_3 + 0x60) = 0;
  }
  return;
}


// ==== FUN_0017e710 @ 0017e710 ====

void FUN_0017e710(int param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  auVar2 = _por(in_zero_qw,in_a1_qw);
  uVar3 = FUN_0018dd78(*(undefined4 *)(param_1 + 0x48));
  FUN_00173640(uVar3,param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x82) = 1;
  *(int *)(iVar1 + 0x20) = auVar2._0_4_;
  *(int *)(iVar1 + 0x24) = auVar2._4_4_;
  *(int *)(iVar1 + 0x28) = auVar2._8_4_;
  *(int *)(iVar1 + 0x2c) = auVar2._12_4_;
  return;
}


// ==== FUN_0017e770 @ 0017e770 ====

undefined8 FUN_0017e770(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  uVar3 = 1;
  if (*(char *)(iVar6 + 0x7e) == '\0') {
    lVar4 = FUN_00173610(param_1);
    if (lVar4 == 0) {
      uVar3 = 1;
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iVar6 + 0x44) + 0x7c) + 0x330);
      piVar2 = *(int **)(iVar1 + 0x94);
      iVar5 = 0;
      if (piVar2 != (int *)0x0) {
        iVar5 = *piVar2;
      }
      if (iVar5 == 10) {
        lVar4 = FUN_001a6840(iVar1,1,0);
        if (lVar4 == 0) {
          return 1;
        }
        iVar6 = *(int *)(iVar6 + 0x44);
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x44);
      }
      uVar3 = FUN_00158078(*(undefined4 *)(*(int *)(iVar6 + 0x7c) + 0x2a4));
    }
  }
  return uVar3;
}


// ==== FUN_0017e800 @ 0017e800 ====

bool FUN_0017e800(int param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = true;
  if (*(char *)(param_1 + 0x82) == '\0') {
    lVar2 = FUN_00173610(param_1 + 0x18);
    if (lVar2 == 0) {
      bVar1 = true;
    }
    else {
      lVar2 = FUN_001a6840(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0x330),0,0);
      bVar1 = lVar2 == 0;
    }
  }
  return bVar1;
}


// ==== FUN_0017e860 @ 0017e860 ====

bool FUN_0017e860(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x54) - **(float **)(param_1 + 0x44);
  if (fVar2 < 0.0) {
    fVar2 = -(-fVar2 - (float)(int)(-fVar2 / 360.0) * 360.0);
  }
  else {
    fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  }
  if (fVar2 < -180.0) {
    fVar2 = fVar2 + 360.0;
  }
  else {
    if (fVar2 <= 180.0) {
      fVar1 = *(float *)(param_1 + 100);
      goto LAB_0017e944;
    }
    fVar2 = fVar2 - 360.0;
  }
  fVar1 = *(float *)(param_1 + 100);
LAB_0017e944:
  return ABS(fVar2) < fVar1;
}


// ==== FUN_0017e968 @ 0017e968 ====

bool FUN_0017e968(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x68) - *(float *)(*(int *)(param_1 + 0x44) + 4);
  if (fVar2 < 0.0) {
    fVar2 = -(-fVar2 - (float)(int)(-fVar2 / 360.0) * 360.0);
  }
  else {
    fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  }
  if (fVar2 < -180.0) {
    fVar2 = fVar2 + 360.0;
  }
  else {
    if (fVar2 <= 180.0) {
      fVar1 = *(float *)(param_1 + 100);
      goto LAB_0017ea4c;
    }
    fVar2 = fVar2 - 360.0;
  }
  fVar1 = *(float *)(param_1 + 100);
LAB_0017ea4c:
  return ABS(fVar2) < fVar1;
}


// ==== FUN_0017ea70 @ 0017ea70 ====

bool FUN_0017ea70(int param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_001580c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0x2a4));
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = FUN_00158078(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0x2a4));
    bVar1 = lVar2 == 0;
  }
  return bVar1;
}


// ==== FUN_0017ead0 @ 0017ead0 ====

uint FUN_0017ead0(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  param_1 = param_1 - param_2;
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
  param_1 = ABS(param_1);
  if (param_1 < 5.0) {
    if (*(char *)(param_4 + 0x7d) == '\0') {
      fVar1 = (float)FUN_0018d9f8(*(undefined4 *)(param_4 + 0x48));
    }
    else {
      fVar1 = (float)FUN_0018da88(*(undefined4 *)(param_4 + 0x48));
    }
  }
  else {
    if (90.0 < param_1) {
      param_1 = 180.0 - param_1;
    }
    param_1 = (float)((int)param_1 * (uint)(0.0 < param_1));
    fVar1 = (float)FUN_0018da88(*(undefined4 *)(param_4 + 0x48));
    fVar2 = (float)FUN_0018da40(*(undefined4 *)(param_4 + 0x48));
    fVar1 = fVar1 + (fVar2 - fVar1) *
                    ((float)((int)param_1 * (uint)(param_1 < 45.0) |
                            (uint)(param_1 >= 45.0) * 0x42340000) / 45.0);
  }
  return (int)param_3 * (uint)(param_3 < fVar1) | (int)fVar1 * (uint)(param_3 >= fVar1);
}


// ==== FUN_0017ec98 @ 0017ec98 ====

void FUN_0017ec98(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  
  iVar9 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar9 + 0x44) + 0x7c);
  iVar6 = *(int *)(iVar1 + 0x26c);
  bVar5 = false;
  if (iVar6 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x19) * 4 + 0xc) != 0;
  }
  if (bVar4) {
    bVar5 = (*(uint *)(iVar1 + 0x2e0) & 0x7f800000) < 0x37800001;
  }
  fVar10 = *(float *)(iVar9 + 0x54) - **(float **)(iVar9 + 0x44);
  bVar4 = false;
  if ((fVar10 <= 10.0) && (-10.0 <= fVar10)) {
    bVar4 = true;
  }
  if ((((!bVar4) || (bVar5)) || (lVar7 = FUN_0017e770(param_1), lVar7 != 0)) ||
     (iVar6 = *(int *)(iVar9 + 0x44), fVar10 = (float)FUN_0018da88(*(undefined4 *)(iVar9 + 0x48)),
     fVar10 <= *(float *)(iVar6 + 0x10))) {
    *(undefined1 *)(iVar9 + 0x80) = 1;
    lVar7 = FUN_0017fb70(param_1);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x330) + 0x90);
    if (piVar2 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    pfVar3 = *(float **)(iVar9 + 0x44);
    bVar4 = iVar6 == 2;
    fStack_68 = *(float *)(iVar9 + 0x54) - *pfVar3;
    if (fStack_68 < 0.0) {
      fStack_68 = -(-fStack_68 - (float)(int)(-fStack_68 / 360.0) * 360.0);
    }
    else {
      fStack_68 = fStack_68 - (float)(int)(fStack_68 / 360.0) * 360.0;
    }
    if (fStack_68 < -180.0) {
      fStack_68 = fStack_68 + 360.0;
    }
    else if (180.0 < fStack_68) {
      fStack_68 = fStack_68 - 360.0;
    }
    if ((bVar4) || (*(char *)((int)pfVar3 + 0x3a) != '\0')) {
      if ((ABS(fStack_68) <= 60.0) || (lVar7 == 0)) {
        iVar6 = *(int *)(iVar1 + 0x330);
      }
      else {
        iVar6 = *(int *)(iVar1 + 0x330);
      }
    }
    else {
      iVar6 = *(int *)(iVar1 + 0x330);
      bVar4 = false;
    }
    iVar8 = 0;
    if (*(int **)(iVar6 + 0x90) != (int *)0x0) {
      iVar8 = **(int **)(iVar6 + 0x90);
    }
    if ((((iVar8 == 8) || (bVar4)) || ((bVar5 || ((0.001 <= pfVar3[4] || (ABS(fStack_68) < 5.0))))))
       || ((*(char *)((int)pfVar3[0x1f] + 0x3aa) != '\0' && (ABS(fStack_68) < 10.0)))) {
      FUN_0017f000(param_1,iVar1);
    }
    else {
      uStack_70 = 0xd;
      uStack_60 = (undefined1)lVar7;
      uStack_6c = 0;
      uStack_64 = 0;
      FUN_00173640(0x3e800000,iVar9 + 0x10);
      FUN_001a6330(*(undefined4 *)(iVar1 + 0x330),&uStack_70);
    }
  }
  else {
    FUN_0017f000(param_1,iVar1);
    *(undefined1 *)(iVar9 + 0x86) = 0;
    *(undefined1 *)(iVar9 + 0x80) = 0;
  }
  return;
}


// ==== FUN_0017f000 @ 0017f000 ====

void FUN_0017f000(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  
  lVar5 = FUN_001a74e0(*(undefined4 *)(param_2 + 0x330));
  if (lVar5 == 3) {
    iVar2 = *(int *)(param_2 + 0x330);
  }
  else {
    lVar5 = FUN_001a74e0(*(undefined4 *)(param_2 + 0x330));
    iVar2 = *(int *)(param_2 + 0x330);
    if (lVar5 != 2) goto LAB_0017f1bc;
  }
  iVar6 = 0;
  if (*(int **)(iVar2 + 0x90) != (int *)0x0) {
    iVar6 = **(int **)(iVar2 + 0x90);
  }
  if (iVar6 != 8) {
    iVar2 = *(int *)(param_2 + 0x330);
LAB_0017f1bc:
    iVar6 = 0;
    if (*(int **)(iVar2 + 0x90) != (int *)0x0) {
      iVar6 = **(int **)(iVar2 + 0x90);
    }
    if (iVar6 == 8) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    else {
      lVar5 = FUN_001735e0(param_1 + 0x10);
      if (lVar5 == 0) {
        iVar2 = *(int *)(param_1 + 0x44);
      }
      else {
        lVar5 = FUN_00173610(param_1 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x44);
      }
    }
    uVar8 = FUN_0018dab8(iVar2 + 0xc94);
    piVar1 = *(int **)(*(int *)(param_2 + 0x330) + 0x90);
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
    }
    if (iVar2 == 8) {
      lVar5 = FUN_001a6840(*(undefined4 *)(param_2 + 0x330),0,0);
      if (lVar5 == 0) {
        puVar4 = *(undefined4 **)(param_1 + 0x44);
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = 0x437a0000;
        puVar4 = *(undefined4 **)(param_1 + 0x44);
      }
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 0x44);
    }
    uVar8 = FUN_0017d7a8(*puVar4,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x70),
                         uVar8,0);
    **(undefined4 **)(param_1 + 0x44) = uVar8;
    return;
  }
  fVar7 = (float)FUN_001a72b0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0x330));
  **(float **)(param_1 + 0x44) = **(float **)(param_1 + 0x44) + fVar7;
  fVar7 = **(float **)(param_1 + 0x44);
  if (fVar7 < 0.0) {
    fVar7 = -(-fVar7 - (float)(int)(-fVar7 / 360.0) * 360.0);
  }
  else {
    fVar7 = fVar7 - (float)(int)(fVar7 / 360.0) * 360.0;
  }
  if (fVar7 < -180.0) {
    fVar7 = fVar7 + 360.0;
  }
  else {
    if (fVar7 <= 180.0) {
      pfVar3 = *(float **)(param_1 + 0x44);
      goto LAB_0017f160;
    }
    fVar7 = fVar7 - 360.0;
  }
  pfVar3 = *(float **)(param_1 + 0x44);
LAB_0017f160:
  *pfVar3 = fVar7;
  lVar5 = FUN_001a6840(*(undefined4 *)(param_2 + 0x330),0,0);
  if (lVar5 == 0) {
    return;
  }
  uVar8 = FUN_0018d9f8(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x60) = uVar8;
  *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x10) = uVar8;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  iVar2 = *(int *)(param_1 + 0x44);
  *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x74) =
       *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x10);
  *(undefined1 *)(param_1 + 0x86) = 0;
  return;
}


// ==== FUN_0017f298 @ 0017f298 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0017f298(float param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  float fStack_5c;
  
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar1 = DAT_004432c0;
  auVar5 = _qmtc2(param_4);
  auVar6 = _qmtc2(param_3);
  auVar7 = _vsub(auVar5,auVar6);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar7,auVar7);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  auVar6 = _vmove(auVar6);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (2.3283064e-10 <= auVar5._0_4_) {
    auVar5 = _vmul(auVar7,auVar7);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar6,auVar5);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar5);
    uVar11 = _vwaitq();
    auVar5 = _vmulq(auVar7,uVar11);
    auVar5 = _sqc2(auVar5);
    auVar7 = _qmtc2(0);
    auVar7 = _vaddbc(in_vf0,auVar7);
    fStack_5c = auVar5._4_4_;
    if (0x37800000 < ((uint)(1.0 - ABS(fStack_5c)) & 0x7f800000)) {
      auVar5 = _vmul(auVar7,auVar7);
      _vaddabc(auVar5,auVar5);
      auVar5 = _vmaddbc(auVar6,auVar5);
      auVar9 = _lqc2(_DAT_004432d0);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar5);
      uVar11 = _vwaitq();
      auVar8 = _vmulq(auVar7,uVar11);
      auVar5 = _vmul(auVar8,auVar8);
      auVar7 = _vmul(auVar9,auVar9);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar6,auVar7);
      _vaddabc(auVar5,auVar5);
      auVar5 = _vmaddbc(auVar6,auVar5);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar5);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar6 = _vmulq(auVar8,uVar11);
      _vmulq(auVar5,uVar11);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar7);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar10 = _vmulq(auVar9,uVar11);
      _vmulq(auVar5,uVar11);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      auVar5 = _sqc2(auVar5);
      auVar7 = _vmul(auVar6,auVar10);
      auVar6 = _sqc2(auVar6);
      auVar8 = _lqc2(auVar5);
      _vaddabc(auVar7,auVar7);
      auVar8 = _vmaddbc(auVar8,auVar7);
      auVar9 = _vsubbc(in_vf0,in_vf0);
      auVar7 = _sqc2(auVar10);
      auVar8 = _vmax(auVar8,auVar9);
      auVar8 = _vminibc(auVar8,in_vf0);
      auVar8 = _qmfc2(auVar8._0_4_);
      param_1 = (float)FUN_0029e0d8(auVar8._0_4_);
      auVar7 = _lqc2(auVar7);
      auVar6 = _lqc2(auVar6);
      _vopmula(auVar6,auVar7);
      auVar7 = _vopmsub(auVar7,auVar6);
      auVar6._4_4_ = uVar2;
      auVar6._0_4_ = uVar1;
      auVar6._8_4_ = uVar3;
      auVar6._12_4_ = uVar4;
      auVar6 = _lqc2(auVar6);
      auVar6 = _vmul(auVar7,auVar6);
      auVar5 = _lqc2(auVar5);
      _vaddabc(auVar6,auVar6);
      auVar5 = _vmaddbc(auVar5,auVar6);
      auVar5 = _qmfc2(auVar5._0_4_);
      param_1 = param_1 * 57.29578;
      if (0.0 < auVar5._0_4_) {
        param_1 = -param_1;
      }
    }
  }
  return param_1;
}


// ==== FUN_0017f498 @ 0017f498 ====

float FUN_0017f498(float param_1,int param_2,float *param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
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
  float fStack_6c;
  
  auVar10 = _qmtc2(0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmove(auVar9);
  *param_3 = *(float *)(*(int *)(*(int *)(param_2 + 0x44) + 0x7c) + 0x2e0);
  auVar6 = _qmtc2(*(undefined4 *)(param_2 + 0x78));
  iVar2 = *(int *)(*(int *)(param_2 + 0x44) + 0x7c);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
  auVar6 = _vsubbc(auVar7,auVar6);
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 400));
  _vsub(auVar7,auVar8);
  auVar6 = _sqc2(auVar6);
  auVar8 = _vaddbc(in_vf0,auVar10);
  auVar7 = _vmul(auVar8,auVar8);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  fStack_6c = auVar6._4_4_;
  auVar6 = _qmfc2(auVar7._0_4_);
  if (auVar6._0_4_ < 2.3283064e-10) {
    iVar2 = *(int *)(param_2 + 0x44);
  }
  else {
    bVar1 = false;
    if ((param_1 <= 0.1) && (-0.1 <= param_1)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = *(int *)(param_2 + 0x44);
    }
    else {
      auVar6 = _vmul(auVar8,auVar8);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar11,auVar6);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar6);
      auVar6 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar6 = _vmulq(auVar6,uVar12);
      auVar6 = _qmfc2(auVar6._0_4_);
      fVar3 = param_1;
      fVar4 = (float)FUN_0029d6a8(fStack_6c / auVar6._0_4_);
      fVar4 = fVar4 * 57.29578;
      fVar5 = (float)FUN_0029da28(fVar4 * 0.017453292);
      if (5.0 < fVar4) {
        param_1 = fVar5 * fVar3;
        fVar3 = (float)FUN_0018da88(*(undefined4 *)(param_2 + 0x48));
        if (param_1 <= fVar3) {
          iVar2 = *(int *)(param_2 + 0x44);
          goto LAB_0017f6dc;
        }
        param_1 = param_1 * ((((float)((int)fVar4 * (uint)(fVar4 < 0.67) |
                                      (uint)(fVar4 >= 0.67) * 0x3f2b851f) - 5.0) * 0.67) / -4.33);
        fVar3 = (float)FUN_0018da88(*(undefined4 *)(param_2 + 0x48));
        param_1 = (float)((int)param_1 * (uint)(fVar3 < param_1) |
                         (int)fVar3 * (uint)(fVar3 >= param_1));
        *param_3 = *param_3 / fVar5;
      }
      else {
        if (-5.0 <= fVar4) {
          iVar2 = *(int *)(param_2 + 0x44);
          goto LAB_0017f6dc;
        }
        *param_3 = *param_3 / fVar5;
      }
      fVar4 = (float)FUN_0018da40(*(undefined4 *)(param_2 + 0x48));
      fVar5 = (float)FUN_0018d9f8(*(undefined4 *)(param_2 + 0x48));
      fVar3 = *param_3;
      fVar3 = (float)((int)fVar3 * (uint)(fVar4 < fVar3) | (int)fVar4 * (uint)(fVar4 >= fVar3));
      *param_3 = (float)((int)fVar3 * (uint)(fVar3 < fVar5) | (int)fVar5 * (uint)(fVar3 >= fVar5));
      iVar2 = *(int *)(param_2 + 0x44);
    }
  }
LAB_0017f6dc:
  *(int *)(param_2 + 0x78) = SUB124(*(undefined1 (*) [12])(*(int *)(iVar2 + 0x7c) + 0xa0),4);
  return param_1;
}


// ==== FUN_0017f720 @ 0017f720 ====

void FUN_0017f720(int param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = *(float **)(param_1 + 0x44);
  if (pfVar1[0x20] == 1.4013e-45) {
    fVar2 = pfVar1[0x1aa] - *(float *)(param_1 + 0x6c);
    if (fVar2 < 0.0) {
      fVar2 = -(-fVar2 - (float)(int)(-fVar2 / 360.0) * 360.0);
    }
    else {
      fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
    }
    if (fVar2 < -180.0) {
      fVar2 = fVar2 + 360.0;
    }
    else if (180.0 < fVar2) {
      fVar2 = fVar2 - 360.0;
    }
    pfVar1[2] = fVar2;
    pfVar1[1] = fVar2;
    *pfVar1 = fVar2;
    pfVar1[0x1aa] = fVar2;
    FUN_0017f868(fVar2,pfVar1 + 0x194);
    pfVar1[0x1d] = 0.0;
    FUN_00173640(0x40a00000,param_1 + 0xc);
  }
  return;
}


// ==== FUN_0017f868 @ 0017f868 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017f868(float param_1,int param_2)

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
  undefined4 in_vuI;
  undefined1 auStack_50 [16];
  undefined1 auStack_30 [16];
  
  auVar2 = _vmaxbc(in_vf0,in_vf0);
  auVar1 = _qmtc2(param_1 * 0.017453292);
  auVar1 = _vaddbc(in_vf0,auVar1);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar1 = _vsubi(auVar1,in_vuI);
  auVar1 = _vabs(auVar1);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar1,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar2,in_vuI);
  _vmaddai(auVar2,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar1,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar1 = _vmsubi(auVar2,in_vuI);
  auVar1 = _vabs(auVar1);
  _ctc2(0x3e800000);
  _vnop();
  auVar1 = _vsubi(auVar1,in_vuI);
  auVar3 = _vmul(auVar1,auVar1);
  _ctc2(0xc2992661);
  _vnop();
  auVar2 = _vmuli(auVar1,in_vuI);
  auVar8 = _vmul(auVar3,auVar3);
  _ctc2(0x42a33457);
  _vnop();
  auVar6 = _vmuli(auVar1,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar5 = _vmuli(auVar1,in_vuI);
  auVar4 = _vmul(auVar8,auVar8);
  auVar2 = _vmul(auVar2,auVar3);
  _ctc2(0xc2255de0);
  _vnop();
  auVar7 = _vmuli(auVar1,in_vuI);
  _vmula(auVar7,auVar3);
  _vmadda(auVar2,auVar8);
  _ctc2(0x40c90fda);
  _vmadda(auVar6,auVar8);
  _vmaddai(auVar1,in_vuI);
  auVar2 = _vmadd(auVar5,auVar4);
  _lqc2(auStack_50);
  _lqc2(auStack_30);
  auVar3 = _vaddbc(in_vf0,auVar2);
  auVar4 = _vaddbc(in_vf0,auVar2);
  auVar5 = _qmtc2(0);
  _vmove(auVar4);
  auVar1 = _pextlw(0,0);
  _vmove(auVar3);
  auVar7 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar3);
  auVar6 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar4);
  auVar3 = _vsub(in_vf0,auVar2);
  _vmove(auVar6);
  auVar1 = _pextlw(0x3f800000,auVar1._0_8_);
  auVar5 = _vaddbc(in_vf0,auVar3);
  _vmove(auVar7);
  auVar3 = _vadd(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,auVar2);
  _sqc2(auVar6);
  _sqc2(auVar7);
  _sqc2(auVar3);
  _sqc2(auVar3);
  _sqc2(auVar3);
  _sqc2(auVar3);
  _sqc2(auVar5);
  _sqc2(auVar4);
  _sqc2(auVar5);
  _sqc2(auVar4);
  _sqc2(auVar5);
  _sqc2(auVar4);
  auVar2 = _qmtc2(auVar1._0_4_);
  auVar1 = _lqc2(_DAT_004432d0);
  _vmulabc(auVar5,auVar1);
  _vmaddabc(auVar2,auVar1);
  auVar1 = _vmaddbc(auVar4,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(*(int *)(param_2 + 0x44) + 0x60) = auVar1;
  return;
}


// ==== FUN_0017fa58 @ 0017fa58 ====

undefined1 FUN_0017fa58(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x44) + 0x80) == 1) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x84a);
  }
  return uVar1;
}


// ==== FUN_0017fa78 @ 0017fa78 ====

void FUN_0017fa78(int param_1)

{
  long lVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x44) + 0x3b) != '\0') &&
     (lVar1 = FUN_001a6840(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0x330),0,1),
     lVar1 != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x3b) = 0;
  }
  return;
}


// ==== FUN_0017fac8 @ 0017fac8 ====

void FUN_0017fac8(int param_1)

{
  long lVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x44) + 0x31) == '\0') &&
     (lVar1 = FUN_00158088(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0x2a4)),
     lVar1 == 0)) {
    if (*(char *)(param_1 + 0x82) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x33) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x33) = 1;
      *(undefined1 *)(param_1 + 0x82) = 0;
      if (*(int *)(*(int *)(param_1 + 0x44) + 0x80) == 1) {
        FUN_00181f48(0,0x40000000,*(int *)(param_1 + 0x44) + 0xc80,0,0xb);
      }
    }
  }
  return;
}


// ==== FUN_0017fb68 @ 0017fb68 ====

void FUN_0017fb68(int param_1)

{
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}


// ==== FUN_0017fb70 @ 0017fb70 ====

undefined8 FUN_0017fb70(void)

{
  return 0;
}


// ==== FUN_0017fb78 @ 0017fb78 ====

void FUN_0017fb78(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar3 = *(int *)(*(int *)(*(int *)(iVar4 + 0x44) + 0x7c) + 0x330);
  piVar1 = *(int **)(iVar3 + 0x90);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (*(int *)(iVar4 + 0x8c) != *(int *)(&DAT_003f6308 + iVar2 * 4)) {
    FUN_0017fc70(param_1,*(int *)(&DAT_003f6308 + iVar2 * 4),0);
  }
  piVar1 = *(int **)(iVar3 + 0x94);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if (*(int *)(iVar4 + 0x90) != *(int *)(&DAT_003f6308 + iVar3 * 4)) {
    FUN_0017fc70(param_1,*(int *)(&DAT_003f6308 + iVar3 * 4),1);
  }
  return;
}


// ==== FUN_0017fc28 @ 0017fc28 ====

void FUN_0017fc28(void)

{
  return;
}


// ==== FUN_0017fc30 @ 0017fc30 ====

void FUN_0017fc30(int param_1,int param_2)

{
  if ((param_2 == 2) && (*(int *)(*(int *)(param_1 + 0x44) + 0x80) == 1)) {
    FUN_00181ad0(*(int *)(param_1 + 0x44) + 0xec0,4);
  }
  return;
}


// ==== FUN_0017fc70 @ 0017fc70 ====

void FUN_0017fc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)param_1 + 0x8c + (int)param_3 * 4);
  FUN_0017fc30(param_1,*puVar1);
  *puVar1 = (int)param_2;
  FUN_0017fc28(param_1,param_2,param_3);
  return;
}


// ==== FUN_0017fcd8 @ 0017fcd8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017fcd8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
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
  undefined4 uVar15;
  
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar1 = DAT_004432c0;
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _qmtc2(param_2);
  auVar8 = _sqc2(auVar8);
  auVar10 = _lqc2(auVar8);
  auVar9 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0xf0));
  auVar9 = _vmul(auVar11,auVar9);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar10,auVar9);
  auVar5 = _qmfc2(auVar9._0_4_);
  auVar9 = _vmul(auVar11,auVar11);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _lqc2(_DAT_004432d0);
  _vaddabc(auVar9,auVar9);
  auVar10 = _vmaddbc(auVar14,auVar9);
  auVar9 = _vmul(auVar13,auVar13);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar10);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar12 = _vmulq(auVar11,uVar15);
  _vmulq(auVar10,uVar15);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar14,auVar9);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar9);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar9 = _vmulq(auVar13,uVar15);
  _vmulq(auVar10,uVar15);
  auVar10 = _vmul(auVar12,auVar9);
  auVar9 = _sqc2(auVar9);
  auVar13 = _lqc2(auVar8);
  auVar11 = _vsubbc(in_vf0,in_vf0);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar13,auVar10);
  auVar11 = _vmax(auVar10,auVar11);
  auVar10 = _sqc2(auVar12);
  auVar11 = _vminibc(auVar11,in_vf0);
  auVar11 = _qmfc2(auVar11._0_4_);
  fVar6 = (float)FUN_0029e0d8(auVar11._0_4_);
  auVar10 = _lqc2(auVar10);
  auVar9 = _lqc2(auVar9);
  _vopmula(auVar10,auVar9);
  auVar10 = _vopmsub(auVar9,auVar10);
  auVar9._4_4_ = uVar2;
  auVar9._0_4_ = uVar1;
  auVar9._8_4_ = uVar3;
  auVar9._12_4_ = uVar4;
  auVar9 = _lqc2(auVar9);
  auVar9 = _vmul(auVar10,auVar9);
  auVar8 = _lqc2(auVar8);
  _vaddabc(auVar9,auVar9);
  auVar8 = _vmaddbc(auVar8,auVar9);
  fVar6 = fVar6 * 57.29578;
  auVar8 = _qmfc2(auVar8._0_4_);
  if (0.0 < auVar8._0_4_) {
    fVar6 = -fVar6;
  }
  if (auVar5._0_4_ < 0.0) {
    fVar6 = fVar6 + 180.0;
    if (fVar6 < 0.0) {
      fVar6 = -(-fVar6 - (float)(int)(-fVar6 / 360.0) * 360.0);
    }
    else {
      fVar6 = fVar6 - (float)(int)(fVar6 / 360.0) * 360.0;
    }
    if (fVar6 < -180.0) {
      fVar6 = fVar6 + 360.0;
    }
    else if (180.0 < fVar6) {
      fVar6 = fVar6 - 360.0;
    }
  }
  *(float *)(*(int *)(param_1 + 0x44) + 8) = fVar6;
  *(float *)(*(int *)(param_1 + 0x44) + 4) = fVar6;
  **(float **)(param_1 + 0x44) = fVar6;
  if (fVar6 < 0.0) {
    fVar7 = -(-fVar6 - (float)(int)(-fVar6 / 360.0) * 360.0);
  }
  else {
    fVar7 = fVar6 - (float)(int)(fVar6 / 360.0) * 360.0;
  }
  if (fVar7 < -180.0) {
    fVar7 = fVar7 + 360.0;
  }
  else if (180.0 < fVar7) {
    fVar7 = fVar7 - 360.0;
  }
  *(float *)(param_1 + 0x54) = fVar7;
  *(undefined1 *)(param_1 + 0x7f) = 1;
  *(float *)(param_1 + 0x50) = fVar6;
  return;
}


// ==== FUN_00180028 @ 00180028 ====

void FUN_00180028(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x44) + 0x80) == 1) {
    FUN_00181f48(0,0x3f800000,*(int *)(param_1 + 0x44) + 0xc80,0,0x13);
  }
  return;
}


// ==== FUN_00180070 @ 00180070 ====

void FUN_00180070(void)

{
  return;
}


// ==== FUN_00180078 @ 00180078 ====

bool FUN_00180078(int param_1)

{
  return *(int *)(param_1 + 0x8c) == 0;
}


// ==== FUN_00180090 @ 00180090 ====

void FUN_00180090(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _vadd(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar1;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  _sqc2(auVar2);
  return;
}


// ==== FUN_001800b8 @ 001800b8 ====

void FUN_001800b8(undefined4 param_1,int param_2,long param_3)

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
  undefined4 in_vuI;
  undefined4 uVar10;
  
  auVar3 = _vmaxbc(in_vf0,in_vf0);
  auVar2 = _qmtc2(*(float *)(param_2 + 0x5c) * 0.017453292);
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
  _vmsubai(auVar3,in_vuI);
  _vmaddai(auVar3,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar2,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar2 = _vmsubi(auVar3,in_vuI);
  auVar2 = _vabs(auVar2);
  _ctc2(0x3e800000);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar5 = _vmul(auVar2,auVar2);
  _ctc2(0xc2992661);
  _vnop();
  auVar3 = _vmuli(auVar2,in_vuI);
  auVar9 = _vmul(auVar5,auVar5);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar6 = _vmuli(auVar2,in_vuI);
  auVar3 = _vmul(auVar3,auVar5);
  _ctc2(0x42a33457);
  _vnop();
  auVar7 = _vmuli(auVar2,in_vuI);
  auVar4 = _vmul(auVar9,auVar9);
  _ctc2(0xc2255de0);
  _vnop();
  auVar8 = _vmuli(auVar2,in_vuI);
  _vmula(auVar8,auVar5);
  _vmadda(auVar3,auVar9);
  _ctc2(0x40c90fda);
  _vmadda(auVar7,auVar9);
  _vmaddai(auVar2,in_vuI);
  auVar2 = _vmadd(auVar6,auVar4);
  auVar5 = _qmtc2(0);
  _vaddbc(in_vf0,auVar2);
  auVar2 = _vaddbc(in_vf0,auVar5);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar2,auVar2);
  _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_2 + 0x44) + 0x7c) + 0x1b0));
  auVar5 = _vaddbc(in_vf0,auVar5);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  auVar4 = _vmove(auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  uVar10 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar10);
  auVar3 = _vmove(auVar5);
  if (param_3 == 0) {
    auVar5 = _sqc2(auVar5);
    auVar3 = _sqc2(auVar3);
    auVar4 = _sqc2(auVar4);
    auVar2 = _qmfc2(auVar2._0_4_);
    FUN_0013ef10(*(int *)(param_2 + 0x44),auVar2._0_8_,0,0x3e800000);
    auVar4 = _lqc2(auVar4);
    auVar3 = _lqc2(auVar3);
    auVar5 = _lqc2(auVar5);
  }
  auVar2 = _vmul(auVar5,auVar5);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  if (auVar2._0_4_ < 2.3283064e-10) {
    auVar2 = _vadd(in_vf0,in_vf0);
    _sqc2(auVar2);
    auVar2 = _vmove(auVar2);
    iVar1 = *(int *)(param_2 + 0x44);
  }
  else {
    auVar2 = _vmul(auVar3,auVar3);
    auVar6 = _qmtc2(param_1);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar4,auVar2);
    auVar5 = _qmtc2(0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar2);
    uVar10 = _vwaitq();
    auVar2 = _vmulq(auVar3,uVar10);
    _vmulbc(auVar2,auVar6);
    auVar2 = _vaddbc(in_vf0,auVar5);
    iVar1 = *(int *)(param_2 + 0x44);
  }
  auVar7 = _qmtc2(0);
  auVar5 = _qmtc2(*(undefined4 *)(iVar1 + 0x74));
  auVar6 = _qmtc2(0x3e4ccccd);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
  _vmulbc(auVar3,auVar5);
  auVar3 = _vaddbc(in_vf0,auVar7);
  _vaddabc(auVar3,in_vf0);
  _vmsubabc(auVar3,auVar6);
  auVar6 = _vmaddbc(auVar2,auVar6);
  auVar5 = _vmove(auVar6);
  auVar2 = _vmul(auVar5,auVar5);
  _vaddabc(auVar2,auVar2);
  auVar3 = _vmaddbc(auVar4,auVar2);
  auVar2 = _qmfc2(auVar3._0_4_);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar3);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  uVar10 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar10);
  auVar3 = _qmfc2(auVar3._0_4_);
  *(int *)(iVar1 + 0x74) = auVar3._0_4_;
  if (auVar2._0_4_ < 2.3283064e-10) {
    iVar1 = *(int *)(param_2 + 0x44);
  }
  else {
    auVar2 = _vmul(auVar6,auVar6);
    auVar3 = _vmove(auVar6);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar4,auVar2);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar2);
    uVar10 = _vwaitq();
    auVar5 = _vmulq(auVar3,uVar10);
    iVar1 = *(int *)(param_2 + 0x44);
  }
  auVar2 = _sqc2(auVar5);
  *(undefined1 (*) [16])(iVar1 + 0x60) = auVar2;
  return;
}


// ==== FUN_001803e8 @ 001803e8 ====

undefined4 FUN_001803e8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x44) + 0x30);
  iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 0x7c);
  uVar4 = 0;
  if ((cVar1 == *(char *)(iVar3 + 0x3a9)) && (cVar1 == *(char *)(iVar3 + 0x3aa))) {
    piVar2 = *(int **)(*(int *)(iVar3 + 0x330) + 0x90);
    iVar3 = 0;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
    }
    if (iVar3 != 0xb) {
      uVar4 = 1;
    }
  }
  return uVar4;
}


// ==== FUN_00180438 @ 00180438 ====

bool FUN_00180438(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  bVar2 = true;
  if (*(int *)(param_1 + 0x40) == 0) {
    lVar4 = FUN_00173610(param_1 + 0x14);
    if (lVar4 == 0) {
      bVar2 = true;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0x330);
      piVar1 = *(int **)(iVar3 + 0x94);
      iVar5 = 0;
      if (piVar1 != (int *)0x0) {
        iVar5 = *piVar1;
      }
      if (iVar5 == 10) {
        lVar4 = FUN_001a6840(iVar3,1,0);
        if (lVar4 == 0) {
          return true;
        }
        iVar3 = *(int *)(param_1 + 0x44);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x44);
      }
      bVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x7c) + 0x2a4) + 0xd8) - 0x19U < 2;
    }
  }
  return bVar2;
}


// ==== FUN_001804d0 @ 001804d0 ====

void FUN_001804d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x140) = param_2;
  FUN_0017b260(param_1 + 0x110);
  return;
}


// ==== FUN_001804f8 @ 001804f8 ====

undefined4 FUN_001804f8(undefined4 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  
  iVar4 = 0;
  auVar5 = _por(in_zero_qw,in_a1_qw);
  param_2[0x14][0xc] = 0;
  FUN_00173690(param_2[0x14] + 8);
  *(undefined1 (**) [16])param_2[0x10] = param_2;
  param_2[0x14][0xe] = 1;
  auVar6 = _vsub(in_vf0,in_vf0);
  param_2[0x14][0xd] = 1;
  pauVar3 = param_2 + 2;
  pauVar2 = param_2;
  do {
    auVar1 = _sqc2(auVar6);
    *pauVar2 = auVar1;
    *(int *)(pauVar2[1] + 4) = iVar4;
    *(undefined4 *)pauVar2[1] = 0x41a00000;
    iVar4 = iVar4 + 1;
    pauVar2[7][0] = 0;
    pauVar2[7][1] = 0;
    *(undefined4 *)(pauVar2[1] + 8) = 0;
    *(undefined4 *)(pauVar2[7] + 4) = 2;
    _sqc2(auVar6);
    pauVar2 = pauVar2 + 8;
    auVar6 = _sqc2(auVar6);
    FUN_00177d98(pauVar3);
    auVar6 = _lqc2(auVar6);
    pauVar3 = pauVar3 + 8;
  } while (iVar4 < 2);
  *(undefined4 *)param_2[9] = 0x40a00000;
  FUN_0017b268(param_2 + 0x11);
  param_2[0x14][0xf] = 0;
  auVar5 = _por(in_zero_qw,auVar5);
  FUN_00180ae0(param_2,auVar5._0_8_);
  FUN_00180b38(param_1,param_2);
  return 1;
}


// ==== FUN_00180610 @ 00180610 ====

void FUN_00180610(undefined8 param_1)

{
  long lVar1;
  
  FUN_001806d0();
  FUN_001808d0(param_1);
  FUN_001808d8(param_1);
  FUN_001809c8(param_1);
  if ((*(char *)((int)param_1 + 0x14c) != '\0') && (lVar1 = FUN_00180cd8(param_1), lVar1 == 0)) {
    FUN_00173640(0x3f800000,(int)param_1 + 0x148);
  }
  return;
}


// ==== FUN_00180678 @ 00180678 ====

void FUN_00180678(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x18) = 0;
    iVar2 = iVar2 + -1;
    *(undefined1 *)(iVar1 + 0x70) = 1;
    *(undefined1 *)(iVar1 + 0x71) = 0;
    iVar1 = iVar1 + 0x80;
  } while (-1 < iVar2);
  FUN_0017b358(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x14f) = 0;
  return;
}


// ==== FUN_001806d0 @ 001806d0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001806d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar7 = FUN_0013d400(*(undefined4 *)(param_1 + 0x140));
  lVar8 = FUN_00172610(uVar7);
  iVar9 = param_1;
  if (lVar8 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x140) + 0x1ee0) == 0) {
      iVar6 = *(int *)(param_1 + 0x100);
      goto LAB_001808a4;
    }
    uVar7 = FUN_0013d400();
    lVar8 = FUN_00172620(uVar7);
    if (lVar8 != 0) {
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _sqc2(auVar11);
      iVar9 = param_1 + 0x80;
      uVar7 = FUN_0013d400(*(undefined4 *)(param_1 + 0x140));
      uVar4 = FUN_00172620(uVar7);
      *(undefined4 *)(param_1 + 0x98) = uVar4;
      uVar4 = FUN_00183380(*(int *)(param_1 + 0x140) + 0x1eb0);
      auVar12 = _qmtc2(uVar4);
      _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
      auVar12 = _vadd(in_vf0,auVar12);
      auVar12 = _sqc2(auVar12);
      *(undefined1 (*) [16])(param_1 + 0x80) = auVar12;
      uVar7 = FUN_001834e0(*(int *)(param_1 + 0x140) + 0x1eb0);
      uVar5 = FUN_00173e18(uVar7);
      uVar3 = DAT_004432cc;
      uVar2 = DAT_004432c8;
      uVar1 = DAT_004432c4;
      uVar4 = DAT_004432c0;
      auVar15 = _qmtc2(uVar5);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _lqc2(_DAT_004432d0);
      auVar13 = _vmul(auVar15,auVar15);
      auVar12 = _vmul(auVar14,auVar14);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar16,auVar13);
      _vaddabc(auVar12,auVar12);
      auVar12 = _vmaddbc(auVar16,auVar12);
      auVar15 = _vmove(auVar15);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar13);
      auVar13 = _vaddbc(in_vf0,in_vf0);
      uVar5 = _vwaitq();
      auVar16 = _vmulq(auVar15,uVar5);
      _vmulq(auVar13,uVar5);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar12);
      auVar13 = _vaddbc(in_vf0,in_vf0);
      uVar5 = _vwaitq();
      auVar12 = _vmulq(auVar14,uVar5);
      _vmulq(auVar13,uVar5);
      auVar13 = _vmul(auVar16,auVar12);
      auVar12 = _sqc2(auVar12);
      auVar14 = _lqc2(auVar11);
      auVar15 = _vsubbc(in_vf0,in_vf0);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar14,auVar13);
      auVar15 = _vmax(auVar13,auVar15);
      auVar13 = _sqc2(auVar16);
      auVar15 = _vminibc(auVar15,in_vf0);
      auVar15 = _qmfc2(auVar15._0_4_);
      fVar10 = (float)FUN_0029e0d8(auVar15._0_4_);
      auVar13 = _lqc2(auVar13);
      auVar12 = _lqc2(auVar12);
      _vopmula(auVar13,auVar12);
      auVar13 = _vopmsub(auVar12,auVar13);
      auVar12._4_4_ = uVar1;
      auVar12._0_4_ = uVar4;
      auVar12._8_4_ = uVar2;
      auVar12._12_4_ = uVar3;
      auVar12 = _lqc2(auVar12);
      auVar12 = _vmul(auVar13,auVar12);
      auVar11 = _lqc2(auVar11);
      _vaddabc(auVar12,auVar12);
      auVar11 = _vmaddbc(auVar11,auVar12);
      auVar11 = _qmfc2(auVar11._0_4_);
      fVar10 = fVar10 * 57.29578;
      if (0.0 < auVar11._0_4_) {
        fVar10 = -fVar10;
      }
      _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
      auVar11 = _qmtc2(fVar10);
      auVar11 = _vmr32(auVar11);
      *(undefined1 *)(param_1 + 0xf1) = 1;
      auVar11 = _sqc2(auVar11);
      *(undefined1 (*) [16])(param_1 + 0x80) = auVar11;
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x100);
LAB_001808a4:
  if (iVar9 != iVar6) {
    *(int *)(param_1 + 0x100) = iVar9;
    FUN_0017b358(param_1 + 0x110);
  }
  return;
}


// ==== FUN_001808d0 @ 001808d0 ====

void FUN_001808d0(void)

{
  return;
}


// ==== FUN_001808d8 @ 001808d8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001808d8(int param_1)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x100);
  if (pauVar1[7][0] != '\0') {
    auVar6 = _lqc2(*pauVar1);
    auVar3 = _qmfc2(auVar6._0_4_);
    if (*(int *)(param_1 + 0x134) == 3) {
      iVar2 = *(int *)(param_1 + 0x130);
      if (iVar2 != 0) {
        *(int *)(pauVar1[1] + 8) = iVar2;
        auVar5 = _vaddbc(in_vf0,in_vf0);
        auVar4 = _lqc2(_DAT_00414dc0);
        *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x70) = 0;
        auVar3 = _pextlw((long)*(int *)(iVar2 + 0xc),(long)*(int *)(iVar2 + 4));
        auVar3 = _pextlw((long)*(int *)(iVar2 + 8),auVar3._0_8_);
        auVar3 = _qmtc2(auVar3._0_4_);
        auVar3 = _vsub(auVar3,auVar4);
        auVar3 = _vsub(auVar6,auVar3);
        auVar3 = _vmul(auVar3,auVar3);
        _vaddabc(auVar3,auVar3);
        auVar3 = _vmaddbc(auVar5,auVar3);
        auVar3 = _qmfc2(auVar3._0_4_);
        *(bool *)(*(int *)(param_1 + 0x100) + 0x71) = auVar3._0_4_ < 0.09;
      }
    }
    else if (1 < *(int *)(param_1 + 0x134) - 1U) {
      FUN_0017b290(param_1 + 0x110,auVar3._0_8_);
    }
  }
  return;
}


// ==== FUN_001809c8 @ 001809c8 ====

void FUN_001809c8(int param_1)

{
  FUN_00177dd8(*(undefined4 **)(param_1 + 0x100) + 8,**(undefined4 **)(param_1 + 0x100));
  return;
}


// ==== FUN_001809f0 @ 001809f0 ====

undefined4 FUN_001809f0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x18);
}


// ==== FUN_00180a00 @ 00180a00 ====

undefined8 FUN_00180a00(int param_1)

{
  return **(undefined8 **)(param_1 + 0x100);
}


// ==== FUN_00180a10 @ 00180a10 ====

undefined4 FUN_00180a10(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x100) + 0xc);
}


// ==== FUN_00180a30 @ 00180a30 ====

undefined4 FUN_00180a30(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x10);
}


