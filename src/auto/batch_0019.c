// ==== FUN_001d9e40 @ 001d9e40 ====

void FUN_001d9e40(undefined4 *param_1)

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
      FUN_001dacb0(uVar1);
      if ((int)param_1[7] <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}


// ==== FUN_001d9ea8 @ 001d9ea8 ====

void FUN_001d9ea8(undefined4 *param_1)

{
  FUN_001dace0(*param_1);
  return;
}


// ==== FUN_001d9ec8 @ 001d9ec8 ====

void FUN_001d9ec8(undefined4 *param_1,undefined8 param_2)

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
      FUN_001dad60(uVar1,param_2);
      if ((int)param_1[7] <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}


// ==== FUN_001d9f40 @ 001d9f40 ====

void FUN_001d9f40(undefined4 *param_1)

{
  FUN_001dad08(*param_1);
  return;
}


// ==== FUN_001d9f60 @ 001d9f60 ====

int FUN_001d9f60(int *param_1)

{
  return param_1[9] * *(int *)(*param_1 + 0xe0);
}


// ==== FUN_001d9f78 @ 001d9f78 ====

void FUN_001d9f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,long param_8,undefined1 param_9,
                 undefined1 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  strcpy(param_1,param_3);
  iVar3 = (int)param_1;
  *(int *)(iVar3 + 0xdc) = param_5;
  if (param_4 < 4) {
    if (param_4 < 2) {
      if (param_4 != 0) {
        *(undefined4 *)(iVar3 + 0xbc) = param_7;
        goto LAB_001da150;
      }
LAB_001da00c:
      *(undefined **)(iVar3 + 0x78) = &DAT_004092e0;
      *(undefined1 *)(iVar3 + 0x80) = 0x10;
      *(int *)(iVar3 + 0xd8) = *(int *)(iVar3 + 0xdc);
      *(int *)(iVar3 + 0xe0) = *(int *)(iVar3 + 0xdc) / 2;
    }
    else {
LAB_001da004:
      if (param_4 == 0) goto LAB_001da00c;
      if (param_4 == 2) {
        iVar1 = *(int *)(iVar3 + 0xdc) * 0x1c;
        *(undefined **)(iVar3 + 0x78) = &DAT_004092d0;
        *(undefined1 *)(iVar3 + 0x80) = 4;
        *(int *)(iVar3 + 0xd8) = *(int *)(iVar3 + 0xdc);
        iVar2 = iVar1 + 0xf;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        *(int *)(iVar3 + 0xe0) = iVar2 >> 4;
      }
      else if (param_4 == 3) {
        *(undefined **)(iVar3 + 0x78) = &DAT_00409310;
        *(undefined1 *)(iVar3 + 0x80) = 4;
        iVar1 = (param_5 / 0x24) * 0x24;
        *(int *)(iVar3 + 0xd8) = iVar1;
        *(int *)(iVar3 + 0xdc) = iVar1;
        *(int *)(iVar3 + 0xe0) = ((param_5 / 0x24) * 0x900) / 0x24;
      }
      else if (param_4 == 5) {
        *(undefined **)(iVar3 + 0x78) = &DAT_004092e0;
        *(undefined1 *)(iVar3 + 0x80) = 0x10;
        *(int *)(iVar3 + 0xdc) = (param_5 / 0x13) * 0x13;
        iVar1 = ((param_5 / 0x13) * 0x260) / 0x13;
        *(int *)(iVar3 + 0xe0) = iVar1;
        *(int *)(iVar3 + 0xd8) = iVar1 << 1;
      }
    }
    *(uint *)(iVar3 + 0xf4) = (uint)(param_8 != 0);
    *(undefined4 *)(iVar3 + 0x74) = 24000;
    *(int *)(iVar3 + 0x7c) = *(int *)(iVar3 + 0xd8) << 1;
    *(undefined1 *)(iVar3 + 0x81) = 1;
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x88) = 0;
    *(undefined1 *)(iVar3 + 0x8c) = 0;
  }
  else if (param_4 == 5) goto LAB_001da004;
  *(undefined4 *)(iVar3 + 0xbc) = param_7;
LAB_001da150:
  *(undefined4 *)(iVar3 + 0xc0) = param_6;
  *(int *)(iVar3 + 0xb8) = (int)param_4;
  *(undefined1 *)(iVar3 + 0xfd) = param_9;
  *(undefined1 *)(iVar3 + 0xfe) = param_10;
  *(undefined8 *)(iVar3 + 0x10) = param_2;
  *(undefined4 *)(iVar3 + 0xb4) = 1;
  *(undefined4 *)(iVar3 + 0xe8) = 0;
  *(undefined4 *)(iVar3 + 0xb0) = 0;
  *(undefined4 *)(iVar3 + 0xc4) = 0;
  *(undefined4 *)(iVar3 + 200) = 0;
  *(undefined4 *)(iVar3 + 0xcc) = 0;
  *(undefined1 *)(iVar3 + 0xfa) = 0;
  *(undefined1 *)(iVar3 + 0xf8) = 0;
  *(undefined1 *)(iVar3 + 0xf9) = 0;
  *(undefined1 *)(iVar3 + 0xfb) = 0;
  *(undefined1 *)(iVar3 + 0xfc) = 0;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  *(undefined4 *)(iVar3 + 0xf0) = 0;
  return;
}


// ==== FUN_001da1c8 @ 001da1c8 ====

undefined4
FUN_001da1c8(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  if (*(char *)(iVar6 + 0xf9) == '\0') {
    if (*(char *)(iVar6 + 0xfd) == '\0') {
      iVar1 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),*(undefined8 *)(iVar6 + 0x10));
      uVar5 = *(undefined8 *)(iVar6 + 0x10);
      uVar3 = *(undefined4 *)(DAT_0040f510 + 0xcbd8);
      iVar1 = *(int *)(iVar1 + 0xc);
LAB_001da2e0:
      iVar2 = FUN_001e89b0(uVar3,uVar5);
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      if (*(char *)(iVar6 + 0xfe) != '\0') {
        iVar1 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),*(undefined8 *)(iVar6 + 0x10));
        uVar5 = *(undefined8 *)(iVar6 + 0x10);
        uVar3 = *(undefined4 *)(DAT_0040f510 + 0xcbd8);
        iVar1 = *(int *)(iVar1 + 0xc) / 2;
        goto LAB_001da2e0;
      }
      iVar1 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),*(undefined8 *)(iVar6 + 0x10));
      iVar1 = *(int *)(iVar1 + 0xc) / 2;
      iVar2 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),*(undefined8 *)(iVar6 + 0x10));
      iVar2 = *(int *)(iVar2 + 8) + iVar1;
    }
    if (*(int *)(iVar6 + 0xb8) == 3) {
      iVar1 = iVar1 + -0x90;
      iVar2 = ((iVar2 + 0x8f) / 0x90) * 0x90;
    }
    FUN_00285980(*(undefined4 *)(DAT_0040f510 + 0xcbf4),1,0,iVar2,iVar1);
    FUN_00328c08(*(undefined4 *)(DAT_0040f510 + 0xcba8),iVar6 + 0x74,iVar6 + 0x74,
                 *(undefined4 *)(iVar6 + 0xf4),iVar6 + 0x18);
    *(uint *)(iVar6 + 0x6c) = *(uint *)(iVar6 + 0x6c) & 0xffffffbf | 0x20;
    *(int *)(iVar6 + 0x1c) = iVar6;
    FUN_00285818(iVar6 + 0x90,iVar6 + 0x18,0);
    *(undefined1 *)(iVar6 + 0xf9) = 1;
  }
  switch(*(undefined4 *)(iVar6 + 0xb8)) {
  case 0:
  case 2:
  case 3:
  case 5:
    break;
  default:
    goto switchD_001da3b0_caseD_1;
  }
  switch(*(undefined4 *)(iVar6 + 0xb4)) {
  case 1:
  case 0xb:
    *(uint *)(iVar6 + 0x74) = param_2 & 0xffff;
    *(undefined8 *)(iVar6 + 0x44) = *(undefined8 *)(iVar6 + 0x74);
    *(undefined8 *)(iVar6 + 0x4c) = *(undefined8 *)(iVar6 + 0x7c);
    *(undefined8 *)(iVar6 + 0x54) = *(undefined8 *)(iVar6 + 0x84);
    *(undefined4 *)(iVar6 + 0x5c) = *(undefined4 *)(iVar6 + 0x8c);
    *(undefined8 *)(iVar6 + 0x28) = *(undefined8 *)(iVar6 + 0x74);
    *(undefined8 *)(iVar6 + 0x30) = *(undefined8 *)(iVar6 + 0x7c);
    *(undefined8 *)(iVar6 + 0x38) = *(undefined8 *)(iVar6 + 0x84);
    *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar6 + 0x8c);
    *(undefined4 *)(iVar6 + 0xb0) = param_3;
    *(undefined4 *)(iVar6 + 0xb4) = 2;
    *(undefined4 *)(iVar6 + 0xd0) = 0;
    *(undefined4 *)(iVar6 + 0xe4) = 0;
  case 2:
    lVar4 = FUN_001daae0(param_1);
    uVar3 = 0;
    if (lVar4 == 0) {
      *(undefined4 *)(iVar6 + 0xd0) = 1;
      FUN_001daa68(param_1);
      *(undefined4 *)(iVar6 + 0xb4) = 3;
switchD_001da3dc_caseD_3:
      lVar4 = FUN_001daae0(param_1);
      uVar3 = 0;
      if (lVar4 == 0) {
        *(undefined4 *)(iVar6 + 0xb4) = 4;
switchD_001da3b0_caseD_1:
        uVar3 = 0;
      }
    }
    break;
  case 3:
    goto switchD_001da3dc_caseD_3;
  case 4:
    lVar4 = FUN_001daae0(param_1);
    if (lVar4 != 0) {
      return 0;
    }
    *(uint *)(iVar6 + 0x74) = param_2 & 0xffff;
    *(undefined8 *)(iVar6 + 0x44) = *(undefined8 *)(iVar6 + 0x74);
    *(undefined8 *)(iVar6 + 0x4c) = *(undefined8 *)(iVar6 + 0x7c);
    *(undefined8 *)(iVar6 + 0x54) = *(undefined8 *)(iVar6 + 0x84);
    *(undefined4 *)(iVar6 + 0x5c) = *(undefined4 *)(iVar6 + 0x8c);
    *(undefined8 *)(iVar6 + 0x28) = *(undefined8 *)(iVar6 + 0x74);
    *(undefined8 *)(iVar6 + 0x30) = *(undefined8 *)(iVar6 + 0x7c);
    *(undefined8 *)(iVar6 + 0x38) = *(undefined8 *)(iVar6 + 0x84);
    *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar6 + 0x8c);
    *(undefined4 *)(iVar6 + 0xb0) = param_3;
    *(undefined4 *)(iVar6 + 0xd0) = 0;
    *(undefined4 *)(iVar6 + 0xe4) = 0;
    FUN_001da8d8(param_1,param_4,param_5,param_6);
    FUN_001da9c0(param_1);
    *(undefined4 *)(iVar6 + 0xb4) = 5;
  case 5:
    lVar4 = FUN_001daae0(param_1);
    if (lVar4 == 0) {
      *(undefined4 *)(iVar6 + 0xec) = 0;
      *(undefined4 *)(iVar6 + 0xb4) = 6;
      *(undefined4 *)(iVar6 + 0xf0) = 0;
      *(undefined4 *)(iVar6 + 0xe8) = 0;
switchD_001da3dc_caseD_6:
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    break;
  case 6:
    goto switchD_001da3dc_caseD_6;
  default:
    goto switchD_001da3b0_caseD_1;
  }
  return uVar3;
}


// ==== FUN_001da5c8 @ 001da5c8 ====

void FUN_001da5c8(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 auStack_f0 [24];
  undefined4 uStack_90;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_4c;
  undefined1 uStack_47;
  undefined1 uStack_45;
  
  uStack_4c = 0;
  puVar5 = param_2;
  puVar3 = auStack_f0;
  do {
    puVar10 = puVar3;
    puVar4 = puVar5;
    uVar8 = *puVar4;
    uVar11 = *(undefined4 *)(puVar4 + 1);
    uVar12 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar13 = *(undefined4 *)(puVar4 + 3);
    uVar14 = *(undefined4 *)((int)puVar4 + 0x1c);
    *puVar10 = (int)uVar8;
    puVar10[1] = (int)((ulong)uVar8 >> 0x20);
    puVar10[2] = uVar11;
    puVar10[3] = uVar12;
    puVar10[4] = (int)uVar2;
    puVar10[5] = (int)((ulong)uVar2 >> 0x20);
    puVar10[6] = uVar13;
    puVar10[7] = uVar14;
    puVar5 = puVar4 + 4;
    puVar3 = puVar10 + 8;
  } while (puVar5 != param_2 + 0x14);
  iVar15 = (int)param_1;
  uVar11 = *(undefined4 *)(iVar15 + 0xb0);
  uVar8 = *puVar5;
  uVar12 = *(undefined4 *)(puVar4 + 5);
  uVar13 = *(undefined4 *)((int)puVar4 + 0x2c);
  puVar10[8] = (int)uVar8;
  puVar10[9] = (int)((ulong)uVar8 >> 0x20);
  puVar10[10] = uVar12;
  puVar10[0xb] = uVar13;
  uVar8 = FUN_00284378(uVar11);
  *(int *)(iVar15 + 0xe8) = (int)uVar8;
  iVar6 = FUN_00384708(param_1,uVar8);
  if (*(int *)(iVar15 + 0xec) == iVar6) {
    cVar1 = *(char *)(iVar15 + 0xfb);
  }
  else {
    *(int *)(iVar15 + 0xec) = iVar6;
    *(int *)(iVar15 + 0xf0) = *(int *)(iVar15 + 0xf0) + 1;
    cVar1 = *(char *)(iVar15 + 0xfb);
  }
  if (cVar1 == '\0') {
    uStack_47 = 1;
    uStack_4c = uStack_4c | 0x1000;
LAB_001da684:
    cVar1 = *(char *)(iVar15 + 0xfc);
  }
  else {
    if (iVar6 == *(int *)(iVar15 + 0xd4)) {
      *(undefined1 *)(iVar15 + 0xfc) = 1;
      goto LAB_001da684;
    }
    cVar1 = *(char *)(iVar15 + 0xfc);
  }
  if (cVar1 == '\0') {
    iVar7 = *(int *)(iVar15 + 0xd0);
  }
  else if (iVar6 == *(int *)(iVar15 + 0xd4)) {
    iVar7 = *(int *)(iVar15 + 0xd0);
  }
  else {
    FUN_001dacb0(param_1);
    iVar7 = *(int *)(iVar15 + 0xd0);
  }
  if (iVar7 == iVar6) {
    iVar6 = *(int *)(iVar15 + 0xb0);
  }
  else {
    lVar9 = FUN_001daae0(param_1);
    if (lVar9 == 0) {
      if (*(int *)(iVar15 + 0xc4) == 0) {
        if (*(char *)(iVar15 + 0xfb) == '\0') {
          iVar6 = *(int *)(iVar15 + 0xb0);
        }
        else {
          FUN_001daa68(param_1);
          iVar6 = *(int *)(iVar15 + 0xb0);
        }
      }
      else {
        FUN_001da9c0(param_1);
        iVar6 = *(int *)(iVar15 + 0xb0);
      }
    }
    else {
      iVar6 = *(int *)(iVar15 + 0xb0);
    }
  }
  if (iVar6 == 0) {
    return;
  }
  if (*(char *)(iVar15 + 0xfd) != '\x01') {
    uVar11 = *(undefined4 *)(iVar15 + 0xb0);
    goto LAB_001da824;
  }
  if (-1 < *(char *)((int)param_2 + 0xa6)) {
    uVar11 = *(undefined4 *)(iVar15 + 0xb0);
    goto LAB_001da824;
  }
  if (*(char *)(iVar15 + 0xfe) == '\0') {
    if (*(char *)(DAT_0040f510 + 0xcb9d) == '\0') {
      uStack_90 = 0x3f800000;
      goto LAB_001da814;
    }
    fStack_68 = *(float *)(param_2 + 0x11) * 0.0;
    uStack_45 = *(undefined1 *)((int)param_2 + 0xab);
    fStack_58 = *(float *)(param_2 + 0x13) * 0.0;
    fStack_54 = *(float *)((int)param_2 + 0x9c);
    fStack_60 = *(float *)(param_2 + 0x12);
    uStack_4c = uStack_4c | 0x800000;
    uStack_64 = *(undefined4 *)((int)param_2 + 0x8c);
    uStack_5c = *(undefined4 *)((int)param_2 + 0x94);
  }
  else if (*(char *)(DAT_0040f510 + 0xcb9d) == '\0') {
    uStack_90 = 0xbf800000;
LAB_001da814:
    uStack_4c = uStack_4c | 0x40;
  }
  else {
    fStack_60 = *(float *)(param_2 + 0x12) * 0.0;
    fStack_68 = *(float *)(param_2 + 0x11);
    fStack_54 = *(float *)((int)param_2 + 0x9c) * 0.0;
    fStack_58 = *(float *)(param_2 + 0x13);
    uStack_45 = *(undefined1 *)((int)param_2 + 0xab);
    uStack_4c = uStack_4c | 0x800000;
    uStack_64 = *(undefined4 *)((int)param_2 + 0x8c);
    uStack_5c = *(undefined4 *)((int)param_2 + 0x94);
  }
  uVar11 = *(undefined4 *)(iVar15 + 0xb0);
LAB_001da824:
  FUN_00283c38(uVar11,auStack_f0);
  return;
}


// ==== FUN_001da848 @ 001da848 ====

undefined4 FUN_001da848(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0xb4) != 0xb) {
    if (*(char *)(iVar3 + 0xf8) == '\0') {
      iVar1 = *(int *)(iVar3 + 0xb0);
    }
    else {
      FUN_001daae0();
      lVar2 = FUN_001daad0(param_1);
      if (lVar2 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar3 + 0xb0);
    }
    if (iVar1 != 0) {
      FUN_00284298();
      *(undefined4 *)(iVar3 + 0xb0) = 0;
    }
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    *(undefined4 *)(iVar3 + 0xb4) = 0xb;
    *(undefined4 *)(iVar3 + 200) = 0;
    *(undefined4 *)(iVar3 + 0xcc) = 0;
    *(undefined1 *)(iVar3 + 0xfa) = 0;
  }
  return 1;
}


// ==== FUN_001da8d8 @ 001da8d8 ====

void FUN_001da8d8(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  if (*(int *)(param_1 + 0xb8) == 3) {
    param_3 = (param_3 / 0x24) * 0x24;
    *(int *)(param_1 + 0xcc) = param_3;
  }
  else if (*(int *)(param_1 + 0xb8) == 5) {
    param_3 = (param_3 / 0x13) * 0x13;
    *(int *)(param_1 + 0xcc) = param_3 / 0x13 << 6;
  }
  else {
    *(int *)(param_1 + 0xcc) = param_3;
  }
  *(undefined1 *)(param_1 + 0xfa) = param_4;
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  *(int *)(param_1 + 200) = param_3;
  return;
}


// ==== FUN_001da940 @ 001da940 ====

undefined4 FUN_001da940(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0xc4);
  iVar2 = *(int *)(iVar4 + 200) / 0x13;
  iVar3 = *(int *)(iVar4 + 0xbc);
  if (0 < iVar2) {
    do {
      FUN_001dad90(param_1,iVar1,iVar3);
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 0x40;
      iVar1 = iVar1 + 0x13;
    } while (iVar2 != 0);
  }
  return *(undefined4 *)(iVar4 + 0xbc);
}


// ==== FUN_001da9c0 @ 001da9c0 ====

void FUN_001da9c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xb8) == 5) {
    uVar1 = FUN_001da940();
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc4);
  }
  FUN_0031d528(param_1 + 0x18,*(int *)(param_1 + 0xd0) * *(int *)(param_1 + 0xd8),uVar1,
               *(undefined4 *)(param_1 + 0xcc));
  if (*(char *)(param_1 + 0xfa) != '\0') {
    *(undefined1 *)(param_1 + 0xfb) = 1;
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd0);
  }
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  *(int *)(param_1 + 0xd0) = (*(int *)(param_1 + 0xd0) + 1) % 2;
  return;
}


// ==== FUN_001daa68 @ 001daa68 ====

void FUN_001daa68(int param_1)

{
  FUN_0031d528(param_1 + 0x18,*(int *)(param_1 + 0xd0) * *(int *)(param_1 + 0xdc),
               *(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xd8));
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(int *)(param_1 + 0xd0) = (*(int *)(param_1 + 0xd0) + 1) % 2;
  return;
}


// ==== FUN_001daad0 @ 001daad0 ====

bool FUN_001daad0(int param_1)

{
  return *(int *)(param_1 + 0xc4) == 0;
}


// ==== FUN_001daae0 @ 001daae0 ====

undefined4 FUN_001daae0(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00324f98();
  uVar1 = 1;
  if (lVar2 == 0) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0xf8) != '\0') {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined1 *)(param_1 + 0xf8) = 0;
    }
  }
  return uVar1;
}


// ==== FUN_001dab20 @ 001dab20 ====

void FUN_001dab20(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 auStack_c0 [20];
  int iStack_70;
  undefined4 uStack_60;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_1c;
  undefined1 uStack_17;
  undefined1 uStack_15;
  
  puVar5 = param_2;
  puVar3 = auStack_c0;
  do {
    puVar6 = puVar3;
    puVar4 = puVar5;
    uVar1 = *puVar4;
    uVar7 = *(undefined4 *)(puVar4 + 1);
    uVar8 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar9 = *(undefined4 *)(puVar4 + 3);
    uVar10 = *(undefined4 *)((int)puVar4 + 0x1c);
    *puVar6 = (int)uVar1;
    puVar6[1] = (int)((ulong)uVar1 >> 0x20);
    puVar6[2] = uVar7;
    puVar6[3] = uVar8;
    puVar6[4] = (int)uVar2;
    puVar6[5] = (int)((ulong)uVar2 >> 0x20);
    puVar6[6] = uVar9;
    puVar6[7] = uVar10;
    puVar5 = puVar4 + 4;
    puVar3 = puVar6 + 8;
  } while (puVar5 != param_2 + 0x14);
  uVar1 = *puVar5;
  uVar7 = *(undefined4 *)(puVar4 + 5);
  uVar8 = *(undefined4 *)((int)puVar4 + 0x2c);
  puVar6[8] = (int)uVar1;
  puVar6[9] = (int)((ulong)uVar1 >> 0x20);
  puVar6[10] = uVar7;
  puVar6[0xb] = uVar8;
  iStack_70 = param_1 + 0x90;
  uStack_17 = 1;
  uStack_1c = 0x1004;
  if (*(char *)(param_1 + 0xfd) == '\0') goto LAB_001dac80;
  if (*(char *)(param_1 + 0xfe) == '\0') {
    if (*(char *)(DAT_0040f510 + 0xcb9d) == '\0') {
      uStack_60 = 0x3f800000;
      goto LAB_001dac78;
    }
    uStack_15 = *(undefined1 *)((int)param_2 + 0xab);
    fStack_38 = *(float *)(param_2 + 0x11) * 0.0;
    fStack_24 = *(float *)((int)param_2 + 0x9c);
    fStack_28 = *(float *)(param_2 + 0x13) * 0.0;
    fStack_30 = *(float *)(param_2 + 0x12);
    uStack_34 = *(undefined4 *)((int)param_2 + 0x8c);
    uStack_2c = *(undefined4 *)((int)param_2 + 0x94);
  }
  else {
    if (*(char *)(DAT_0040f510 + 0xcb9d) == '\0') {
      uStack_60 = 0xbf800000;
LAB_001dac78:
      uStack_1c = 0x1044;
      goto LAB_001dac80;
    }
    fStack_38 = *(float *)(param_2 + 0x11);
    fStack_30 = *(float *)(param_2 + 0x12) * 0.0;
    fStack_28 = *(float *)(param_2 + 0x13);
    fStack_24 = *(float *)((int)param_2 + 0x9c) * 0.0;
    uStack_15 = *(undefined1 *)((int)param_2 + 0xab);
    uStack_34 = *(undefined4 *)((int)param_2 + 0x8c);
    uStack_2c = *(undefined4 *)((int)param_2 + 0x94);
  }
  uStack_1c = 0x801004;
LAB_001dac80:
  *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x34) = 1;
  FUN_00283e78(*(undefined4 *)(param_1 + 0xb0),auStack_c0,DAT_0040f510 + 0xcb7c);
  return;
}


// ==== FUN_001dacb0 @ 001dacb0 ====

void FUN_001dacb0(int param_1)

{
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  FUN_00284298(*(undefined4 *)(param_1 + 0xb0));
  return;
}


// ==== FUN_001dace0 @ 001dace0 ====

undefined8 FUN_001dace0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    uVar1 = FUN_002842e8();
  }
  return uVar1;
}


// ==== FUN_001dad08 @ 001dad08 ====

int FUN_001dad08(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0xb4) - 6U < 4) {
    if (*(int *)(param_1 + 0xf0) < 2) {
      iVar1 = *(int *)(param_1 + 0xb0);
    }
    else {
      iVar2 = (*(int *)(param_1 + 0xf0) / 2) * 2 * *(int *)(param_1 + 0xe0);
      iVar1 = *(int *)(param_1 + 0xb0);
    }
    if (iVar1 != 0) {
      iVar2 = iVar2 + *(int *)(param_1 + 0xe8);
    }
  }
  return iVar2;
}


// ==== FUN_001dad60 @ 001dad60 ====

void FUN_001dad60(int param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (param_2 != 0) {
    *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) | 2;
    return;
  }
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffffd;
  return;
}


// ==== FUN_001dad90 @ 001dad90 ====

void FUN_001dad90(undefined8 param_1,byte *param_2,undefined2 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  float *pfVar5;
  undefined1 *puVar6;
  float *pfVar7;
  int iVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_8078 [32760];
  float afStack_80 [32];
  
  iVar8 = (*param_2 & 0xf) * 8;
  pfVar5 = afStack_80;
  fVar12 = *(float *)(&DAT_003f8cbc + iVar8);
  fVar10 = *(float *)(&DAT_003f8cd8 + (param_2[2] & 0xf) * 4);
  pfVar7 = afStack_80;
  fVar11 = *(float *)(&DAT_003f8cb8 + iVar8);
  pbVar9 = param_2 + 4;
  afStack_80[0] = (float)(int)((*param_2 & 0xf0) + (char)param_2[1] * 0x100) * 3.0517578e-05;
  iVar8 = 0xe;
  afStack_80[1] = (float)(int)((param_2[2] & 0xf0) + (char)param_2[3] * 0x100) * 3.0517578e-05;
  puVar6 = auStack_8078;
  do {
    pfVar7 = pfVar7 + 2;
    bVar3 = *pbVar9;
    iVar8 = iVar8 + -1;
    bVar4 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    *pfVar7 = (float)(int)((uint)(bVar3 >> 4) << 0x1c) * fVar10 +
              fVar11 * *(float *)(puVar6 + 0x7ffc) + fVar12 * *(float *)(puVar6 + 0x7ff8);
    pfVar1 = (float *)(puVar6 + 0x8000);
    pfVar2 = (float *)(puVar6 + 0x7ffc);
    puVar6 = puVar6 + 8;
    pfVar7[1] = (float)(int)((uint)bVar4 << 0x1c) * fVar10 + fVar11 * *pfVar1 + fVar12 * *pfVar2;
  } while (-1 < iVar8);
  iVar8 = 0x1f;
  do {
    fVar10 = *pfVar5;
    iVar8 = iVar8 + -1;
    pfVar5 = pfVar5 + 1;
    fVar10 = fVar10 * 32767.0;
    fVar10 = (float)((int)fVar10 * (uint)(-32768.0 < fVar10) |
                    (uint)(-32768.0 >= fVar10) * -0x39000000);
    *param_3 = (short)(int)(float)((int)fVar10 * (uint)(fVar10 < 32767.0) |
                                  (uint)(fVar10 >= 32767.0) * 0x46fffe00);
    param_3 = param_3 + 1;
  } while (-1 < iVar8);
  return;
}


// ==== FUN_001daf20 @ 001daf20 ====

void FUN_001daf20(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 1;
  *param_1 = param_2;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
  param_1[1] = param_3;
  param_1[2] = param_4;
  piVar2 = param_1 + 8;
  do {
    iVar3 = iVar3 + -1;
    iVar1 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
    *piVar2 = iVar1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  FUN_001d9450(*param_1,param_1 + 8,2);
  param_1[10] = 0;
  return;
}


// ==== FUN_001dafd0 @ 001dafd0 ====

void FUN_001dafd0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1[10] == 0) {
    FUN_001d9450(*param_1,0,0);
  }
  puVar2 = param_1 + 8;
  iVar3 = 1;
  FUN_001d97c8(*(undefined4 *)(DAT_0040f510 + 0xcbdc),*param_1);
  *param_1 = 0;
  do {
    iVar3 = iVar3 + -1;
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),uVar1);
  } while (-1 < iVar3);
  param_1[10] = 1;
  return;
}


// ==== FUN_001db088 @ 001db088 ====

undefined4
FUN_001db088(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  switch(param_1[10]) {
  case 0:
  case 2:
    FUN_001d9450(*param_1,param_1 + 8,2);
    param_1[10] = 3;
    break;
  default:
    goto switchD_001db0d0_caseD_1;
  case 3:
    break;
  case 4:
    goto switchD_001db0d0_caseD_4;
  }
  lVar2 = FUN_001d92a0(*param_1,*param_2,param_3,param_1[1],param_1[2],param_4);
  if (lVar2 == 0) {
switchD_001db0d0_caseD_1:
    uVar1 = 0;
  }
  else {
    param_1[10] = 4;
switchD_001db0d0_caseD_4:
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_001db140 @ 001db140 ====

undefined4 FUN_001db140(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  switch(param_1[10]) {
  case 0:
  case 2:
    goto switchD_001db170_caseD_0;
  default:
    goto switchD_001db170_caseD_1;
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
    param_1[10] = 5;
    break;
  case 5:
    break;
  }
  lVar2 = FUN_001dd3e0(*param_1);
  if (lVar2 == 0) {
switchD_001db170_caseD_1:
    uVar1 = 0;
  }
  else {
    param_1[10] = 2;
switchD_001db170_caseD_0:
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_001db1b0 @ 001db1b0 ====

void FUN_001db1b0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_e0 [84];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined1 uStack_37;
  undefined1 uStack_35;
  
  uStack_44 = DAT_003bd2e4;
  uStack_4c = DAT_003bd2e0;
  uStack_54 = DAT_003bd2dc;
  uStack_50 = DAT_003bd2d8;
  iVar1 = param_2[10];
  if (iVar1 != 6) {
    if (6 < iVar1) {
      if (iVar1 != 9) {
        return;
      }
      uVar2 = param_2[5];
      goto LAB_001db288;
    }
    if (iVar1 != 4) {
      return;
    }
  }
  uStack_88 = param_2[7];
  param_2[5] = 0;
  uStack_37 = 1;
  uStack_35 = uGpffff822a;
  uStack_3c = 0x801018;
  uStack_8c = 0;
  uStack_58 = uStack_50;
  uStack_48 = uStack_44;
  FUN_001dd5d8(*param_2,auStack_e0);
  FUN_001dd158(*param_2,auStack_e0);
  uVar2 = param_2[5];
LAB_001db288:
  param_2[10] = 7;
  param_2[3] = param_1;
  param_2[6] = uVar2;
  param_2[4] = param_1;
  return;
}


// ==== FUN_001db2b0 @ 001db2b0 ====

void FUN_001db2b0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x28);
  if (((iVar1 != 6) && (5 < iVar1)) && (iVar1 < 10)) {
    *(undefined4 *)(param_2 + 0x28) = 9;
    *(undefined4 *)(param_2 + 0xc) = param_1;
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x10) = param_1;
  }
  return;
}


// ==== FUN_001db2f0 @ 001db2f0 ====

void FUN_001db2f0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  return;
}


// ==== FUN_001db2f8 @ 001db2f8 ====

void FUN_001db2f8(float param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auStack_d0 [84];
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined1 uStack_25;
  
  param_1 = (float)param_2[4] - param_1;
  param_2[4] = param_1;
  if (0.0 < param_1) {
    fVar2 = 1.0 - param_1 / (float)param_2[3];
  }
  else {
    fVar2 = 1.0;
  }
  uStack_78 = param_2[7];
  uStack_44 = DAT_003bd2dc;
  uStack_40 = DAT_003bd2d8;
  uStack_3c = DAT_003bd2e0;
  uStack_34 = DAT_003bd2e4;
  uStack_25 = uGpffff822a;
  uStack_2c = 0x800010;
  uStack_48 = DAT_003bd2d8;
  uStack_38 = DAT_003bd2e4;
  switch(param_2[10]) {
  case 7:
    if (fVar2 < 1.0) {
      uVar1 = *param_2;
      fStack_7c = (float)param_2[6] + fVar2 * ((float)param_2[5] - (float)param_2[6]);
LAB_001db470:
      uStack_2c = 0x800018;
      FUN_001dd158(uVar1,auStack_d0);
      return;
    }
    param_2[10] = 8;
  case 8:
    fStack_7c = (float)param_2[5];
    uStack_2c = 0x800018;
    FUN_001dd158(*param_2,auStack_d0);
    break;
  case 9:
    if (fVar2 < 1.0) {
      uVar1 = *param_2;
      fStack_7c = (float)param_2[6] - fVar2 * (float)param_2[6];
      goto LAB_001db470;
    }
    FUN_001dd6c0(*param_2,auStack_d0);
    param_2[10] = 6;
  default:
  }
  return;
}


// ==== FUN_001db4a0 @ 001db4a0 ====

void FUN_001db4a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[10];
  if (((-1 < iVar1) && (6 < iVar1)) && (iVar1 < 10)) {
    FUN_001dd6c0(*param_1);
    param_1[10] = 6;
  }
  return;
}


// ==== FUN_001db4f0 @ 001db4f0 ====

void FUN_001db4f0(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = (int)param_1;
  puVar4 = (undefined4 *)(iVar2 + 0x68);
  iVar3 = iVar2 + 0x58;
  iVar5 = 0;
  memset(param_1,0,0x58);
  memset(iVar2 + 0x6c,0,0x10);
  *(undefined4 *)(iVar2 + 0x1904) = 0;
  *(undefined4 *)(iVar2 + 0x1900) = 0;
  *(undefined4 *)(iVar2 + 0x1908) = 0;
  do {
    FUN_00280fe0(iVar3,0);
    iVar3 = iVar3 + 0x14;
    *puVar4 = 0xbf800000;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 5;
  } while (-1 < iVar5);
  iVar3 = 0x3f;
  FUN_001dc498(param_1,0,0);
  *(undefined4 *)(iVar2 + 0x1918) = 0;
  *(undefined2 *)(iVar2 + 0x1954) = 0xffff;
  *(undefined4 *)(iVar2 + 0x191c) = 0;
  puVar1 = (undefined1 *)(iVar2 + 0x18bf);
  *(undefined4 *)(iVar2 + 0x1924) = 0;
  *(undefined4 *)(iVar2 + 0x192c) = 0;
  *(undefined1 *)(iVar2 + 0x1977) = 0;
  *(undefined1 *)(iVar2 + 0x1957) = 0;
  *(undefined1 *)(iVar2 + 0x1997) = 0;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)(iVar2 + 0x1930) = 1;
  return;
}


// ==== FUN_001db5f0 @ 001db5f0 ====

/* Strings referenciadas:
     "Ambience.ssh"
     "Emitter.awd"
     "levels\level_%02i\%s"
     "Levels\Level_%02u\Stg_%04u\%s" */

undefined4 FUN_001db5f0(int param_1,undefined4 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_e0 [48];
  
  if (cGpffff822b == '\0') {
    cGpffff822b = '\x01';
    FUN_00382348(param_1 + 0x1938,0x2b9d6f8);
  }
  switch(*(undefined4 *)(param_1 + 0x1930)) {
  case 1:
  case 0xf:
    iVar5 = 0x3f;
    puVar1 = (undefined1 *)(param_1 + 0x18bf);
    do {
      *puVar1 = 0;
      iVar5 = iVar5 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar5);
    *(int *)(param_1 + 0x1900) = (int)param_3;
    iVar5 = 0;
    puVar7 = (undefined4 *)(param_1 + 0x6c);
    if (0 < param_3) {
      do {
        uVar2 = *param_2;
        iVar5 = iVar5 + 1;
        param_2 = param_2 + 1;
        *puVar7 = uVar2;
        puVar7 = puVar7 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x1900));
    }
    uVar3 = FUN_001d9768(*(undefined4 *)(DAT_0040f510 + 0xcbdc),0xb9360938b4dacec0);
    FUN_001daf20(param_1,uVar3,(undefined4 *)(param_1 + 0x6c),2);
    FUN_001db2f0(0,param_1);
    uVar3 = FUN_001d9768(*(undefined4 *)(DAT_0040f510 + 0xcbdc),0xb9360938b4dad500);
    FUN_001daf20(param_1 + 0x2c,uVar3,param_1 + 0x74,2);
    FUN_001db2f0(0,param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x1904) = 2;
    sprintf(auStack_e0,0x3f7aa8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),PTR_s_Ambience_ssh_003bd2d0)
    ;
    FUN_001093c0(DAT_0040f4c4,auStack_e0,8,9,0x1dbed8,param_1,0,0x2000000);
    sprintf(param_1 + 0x18c0,0x3f7ac0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
            *(undefined1 *)(DAT_0040f0e0 + 0x2020e),PTR_s_Emitter_awd_003bd2d4);
    *(undefined4 *)(param_1 + 0x1930) = 2;
    *(undefined4 *)(param_1 + 0x190c) = 0;
switchD_001db670_caseD_2:
    if (*(int *)(param_1 + 0x190c) != 0) {
      uVar2 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
      *(undefined4 *)(param_1 + 0x1908) = uVar2;
      *(undefined4 *)(param_1 + 0x1930) = 3;
switchD_001db670_caseD_3:
      iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x66ab9e4a4e39f000);
      lVar4 = FUN_0027ff78(DAT_0040f510,param_1 + 0x18c0,1,
                           *(undefined4 *)(*(int *)(param_1 + 0x1908) + 8),
                           (int)*(short *)(*(int *)(param_1 + 0x1908) + 0x20) << 0xb,
                           *(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),0x3f8bf0);
      *(int *)(param_1 + 0x1934) = (int)lVar4;
      if (lVar4 != 0) {
        FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*(undefined4 *)(param_1 + 0x1908));
        *(undefined4 *)(param_1 + 0x1908) = 0;
        *(undefined4 *)(param_1 + 0x1930) = 4;
switchD_001db670_caseD_4:
        iVar6 = 0;
        puVar7 = (undefined4 *)(param_1 + 0x68);
        FUN_001efe08(0,DAT_0040f510,0x3f8d10);
        *(undefined2 *)(param_1 + 0x1954) = 0xffff;
        *(undefined4 *)(param_1 + 0x192c) = 0;
        *(undefined1 *)(param_1 + 0x1957) = 0;
        *(undefined1 *)(param_1 + 0x19a0) = 0;
        *(undefined1 *)(param_1 + 0x19a1) = 0;
        *(undefined1 *)(param_1 + 0x1977) = 0;
        iVar5 = param_1;
        if (0 < *(int *)(param_1 + 0x1904)) {
          do {
            iVar6 = iVar6 + 1;
            FUN_001db4a0(iVar5);
            iVar5 = iVar5 + 0x2c;
          } while (iVar6 < *(int *)(param_1 + 0x1904));
        }
        iVar5 = 0;
        do {
          *puVar7 = 0xbf800000;
          iVar5 = iVar5 + -1;
          puVar7 = puVar7 + -5;
        } while (-1 < iVar5);
        return 1;
      }
    }
    return 0;
  case 2:
    goto switchD_001db670_caseD_2;
  case 3:
    goto switchD_001db670_caseD_3;
  case 4:
    goto switchD_001db670_caseD_4;
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    goto switchD_001db670_caseD_5;
  case 9:
    lVar4 = FUN_001db088(*(undefined4 *)(param_1 + 0x1910),*(int *)(param_1 + 0x190c),
                         *(int *)(*(int *)(param_1 + 0x190c) + 0x18) +
                         *(short *)(param_1 + 0x1954) * 8,*(undefined1 *)(param_1 + 0x1958));
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1930) = 8;
  case 8:
    lVar4 = FUN_001db140(*(undefined4 *)(param_1 + 0x1910));
    if (lVar4 == 0) {
      return 0;
    }
switchD_001db670_caseD_5:
    *(undefined4 *)(param_1 + 0x1930) = 4;
    return 0;
  default:
    return 1;
  }
}


// ==== FUN_001dba00 @ 001dba00 ====

void FUN_001dba00(uint param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_110 [84];
  float fStack_bc;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_6c;
  
  lVar4 = FUN_00103870(DAT_0040f0e0);
  if (lVar4 != 0) {
    return;
  }
  if ((param_1 & 0x7f800000) < 0x37800001) {
    param_1 = *(uint *)(DAT_0040f0e0 + 0x2013c);
  }
  iVar5 = 0;
  iVar6 = param_2;
  if (0 < *(int *)(param_2 + 0x1904)) {
    do {
      FUN_001db2f8(param_1,iVar6);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x2c;
    } while (iVar5 < *(int *)(param_2 + 0x1904));
  }
  if ((*(char *)(param_2 + 0x1977) != '\0') &&
     (lVar4 = FUN_001dc1a0(param_2,param_2 + 0x1960), lVar4 != 0)) {
    *(undefined1 *)(param_2 + 0x1977) = 0;
  }
  switch(*(undefined4 *)(param_2 + 0x1930)) {
  default:
    goto switchD_001dbae0_caseD_1;
  case 6:
    break;
  case 7:
    goto switchD_001dbae0_caseD_7;
  case 8:
    goto switchD_001dbae0_caseD_8;
  case 9:
    goto switchD_001dbae0_caseD_9;
  case 10:
    goto switchD_001dbae0_caseD_a;
  case 0xb:
    goto switchD_001dbae0_caseD_b;
  case 0xc:
    if (*(int *)(param_2 + 0x1910) == 0) {
      iVar6 = *(int *)(param_2 + 0x1914);
    }
    else {
      FUN_001db2b0(0x3dcccccd);
      iVar6 = *(int *)(param_2 + 0x1914);
    }
    if (iVar6 != 0) {
      FUN_001db2b0(0x3dcccccd);
    }
    *(undefined4 *)(param_2 + 0x1930) = 0xd;
  case 0xd:
    bVar2 = true;
    if (*(int *)(param_2 + 0x1910) != 0) {
      bVar2 = *(int *)(*(int *)(param_2 + 0x1910) + 0x28) == 6;
    }
    if (*(int *)(param_2 + 0x1914) == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = *(int *)(*(int *)(param_2 + 0x1914) + 0x28) == 6;
    }
    if ((!bVar2) || (!bVar3)) goto LAB_001dbca8;
    *(undefined4 *)(param_2 + 0x1930) = 5;
    goto switchD_001dbae0_caseD_1;
  }
  iVar6 = *(int *)(param_2 + 0x1904);
  *(undefined4 *)(param_2 + 0x1910) = 0;
  *(undefined4 *)(param_2 + 0x1914) = 0;
  iVar5 = param_2;
  if (0 < iVar6) {
    do {
      iVar1 = *(int *)(iVar5 + 0x28);
      if (iVar1 == 6) {
        *(int *)(param_2 + 0x1910) = iVar5;
      }
      else if (iVar1 == 9) {
        *(int *)(param_2 + 0x1910) = iVar5;
      }
      else if (iVar1 == 0) {
        *(int *)(param_2 + 0x1910) = iVar5;
      }
      else if (iVar1 == 2) {
        *(int *)(param_2 + 0x1910) = iVar5;
      }
      else if (iVar1 - 7U < 2) {
        *(int *)(param_2 + 0x1914) = iVar5;
      }
      iVar6 = iVar6 + -1;
      iVar5 = iVar5 + 0x2c;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_2 + 0x1930) = 7;
switchD_001dbae0_caseD_7:
  iVar6 = *(int *)(*(int *)(param_2 + 0x1910) + 0x28);
  if (((iVar6 == 6) || (iVar6 == 2)) || (iVar6 == 0)) {
    *(undefined4 *)(param_2 + 0x1930) = 8;
switchD_001dbae0_caseD_8:
    lVar4 = FUN_001db140(*(undefined4 *)(param_2 + 0x1910));
    if (lVar4 != 0) {
      *(undefined4 *)(param_2 + 0x1930) = 9;
switchD_001dbae0_caseD_9:
      lVar4 = FUN_001db088(*(undefined4 *)(param_2 + 0x1910),*(int *)(param_2 + 0x190c),
                           *(int *)(*(int *)(param_2 + 0x190c) + 0x18) +
                           *(short *)(param_2 + 0x1954) * 8,*(undefined1 *)(param_2 + 0x1958));
      if (lVar4 == 0) goto LAB_001dbca8;
      FUN_001db1b0(*(undefined4 *)(param_2 + 0x1948),*(undefined4 *)(param_2 + 0x1910));
      if (*(int *)(param_2 + 0x1914) != 0) {
        FUN_001db2b0(*(undefined4 *)(param_2 + 0x1948));
      }
      *(undefined4 *)(param_2 + 0x1930) = 10;
switchD_001dbae0_caseD_a:
      *(undefined4 *)(param_2 + 0x1930) = 0xb;
switchD_001dbae0_caseD_b:
      if (*(char *)(param_2 + 0x19a0) != '\0') {
        *(undefined1 *)(param_2 + 0x19a1) = 1;
      }
      *(undefined4 *)(*(int *)(param_2 + 0x1910) + 0x14) = DAT_003bd2e8;
    }
switchD_001dbae0_caseD_1:
  }
LAB_001dbca8:
  FUN_001dc2c0(param_2);
  iVar6 = 0;
  do {
    iVar5 = iVar6 + 1;
    FUN_001dc790(param_1,param_2,iVar6);
    iVar6 = iVar5;
  } while (iVar5 < 0x40);
  uStack_6c = 0;
  param_2 = param_2 + 0x58;
  fVar8 = 0.0;
  fVar9 = *(float *)(DAT_0040f4d0 + 0x20);
  iVar6 = 0;
  do {
    lVar4 = FUN_00281120(param_2);
    if (lVar4 == 1) {
      fVar7 = *(float *)(param_2 + 0x10) - fVar9;
      uStack_6c = 0;
      if (fVar7 <= fVar8) {
        FUN_002810a0(param_2);
      }
      else if (fVar7 < 1.0) {
        uStack_a0 = 0x3f800000;
        uStack_9c = 0x3f800000;
        uStack_6c = 0x308;
        fStack_bc = fVar7;
        FUN_00281010(param_2,auStack_110);
      }
      else {
        uStack_a0 = 0x3f800000;
        fStack_bc = 1.0;
        uStack_9c = 0x3f800000;
        uStack_6c = 0x308;
        FUN_00281010(param_2,auStack_110);
      }
    }
    param_2 = param_2 + 0x14;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return;
}


// ==== FUN_001dbdb8 @ 001dbdb8 ====

undefined4 FUN_001dbdb8(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1930) == 9) {
    lVar1 = FUN_001db088(*(undefined4 *)(param_1 + 0x1910),*(int *)(param_1 + 0x190c),
                         *(int *)(*(int *)(param_1 + 0x190c) + 0x18) +
                         *(short *)(param_1 + 0x1954) * 8,*(undefined1 *)(param_1 + 0x1958));
    if (lVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1930) = 0xe;
    iVar2 = *(int *)(param_1 + 0x1904);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1904);
  }
  iVar4 = 0;
  iVar3 = param_1;
  if (0 < iVar2) {
    do {
      lVar1 = FUN_001db140(iVar3);
      iVar4 = iVar4 + 1;
      if (lVar1 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x1904);
      iVar3 = iVar3 + 0x2c;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  iVar3 = param_1;
  if (0 < iVar2) {
    do {
      iVar4 = iVar4 + 1;
      FUN_001dafd0(iVar3);
      iVar3 = iVar3 + 0x2c;
    } while (iVar4 < *(int *)(param_1 + 0x1904));
  }
  *(undefined1 *)(param_1 + 0x1977) = 0;
  *(undefined1 *)(param_1 + 0x1957) = 0;
  *(undefined1 *)(param_1 + 0x1997) = 0;
  FUN_001dc5a8(param_1);
  FUN_001dc610(param_1);
  FUN_001dc6e8(param_1);
  FUN_001efe08(0,DAT_0040f510,0x3f8d10);
  *(undefined4 *)(param_1 + 0x192c) = 0;
  *(undefined4 *)(param_1 + 0x1930) = 0xf;
  return 1;
}


// ==== FUN_001dbed8 @ 001dbed8 ====

void FUN_001dbed8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x190c) = uVar2;
  iVar1 = *(int *)(param_2 + 0x190c);
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


// ==== FUN_001dbf38 @ 001dbf38 ====

void FUN_001dbf38(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(short *)(param_2 + 0x10) < 0) {
    return;
  }
  if ((*(char *)(DAT_0040f4d0 + 0x5aac) == '\0') && (1 < DAT_0040eae4)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x19a0) = 1;
  if (*(char *)(param_1 + 0x1977) == '\0') {
    if (*(char *)(param_1 + 0x1957) == '\0') {
      *(undefined1 *)(param_1 + 0x1997) = 0;
      goto LAB_001dbfc0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x1950);
    uVar3 = *(undefined8 *)(param_1 + 0x1940);
    uVar4 = *(undefined8 *)(param_1 + 0x1948);
    uVar5 = *(undefined8 *)(param_1 + 0x1958);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x1970);
    uVar3 = *(undefined8 *)(param_1 + 0x1960);
    uVar4 = *(undefined8 *)(param_1 + 0x1968);
    uVar5 = *(undefined8 *)(param_1 + 0x1978);
  }
  *(undefined8 *)(param_1 + 0x1990) = uVar2;
  *(undefined8 *)(param_1 + 0x1980) = uVar3;
  *(undefined8 *)(param_1 + 0x1988) = uVar4;
  *(undefined8 *)(param_1 + 0x1998) = uVar5;
  *(undefined1 *)(param_1 + 0x1997) = 1;
LAB_001dbfc0:
  *(undefined8 *)(param_1 + 0x1960) = 0;
  *(undefined4 *)(param_1 + 0x1970) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_2 + 0x14);
  uVar1 = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x1977) = 1;
  *(undefined2 *)(param_1 + 0x1974) = uVar1;
  *(undefined1 *)(param_1 + 0x1976) = 0;
  *(undefined1 *)(param_1 + 0x1978) = 0;
  return;
}


// ==== FUN_001dc000 @ 001dc000 ====

void FUN_001dc000(int param_1)

{
  if (*(char *)(param_1 + 0x19a0) != '\0') {
    *(undefined1 *)(param_1 + 0x19a0) = 0;
    *(undefined1 *)(param_1 + 0x19a1) = 0;
    if (*(char *)(param_1 + 0x1997) != '\0') {
      FUN_001dc038(param_1,param_1 + 0x1980);
    }
  }
  return;
}


// ==== FUN_001dc038 @ 001dc038 ====

/* Strings referenciadas:
     "../Export/ValueDB/Sound/ps2/BaseMix.cfg"
     "WorldAmbience" */

void FUN_001dc038(int param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  
  if (*param_2 != 0) {
    FUN_002726d0(*param_2,0x42a3e0);
    if (DAT_0040da1c != '\0') {
      FUN_0027bb50(DAT_003c09e8 + 4,0x3bd2e8);
    }
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd2e8,0x42a3e0,0x3f7b58,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    DAT_0040da1c = '\x01';
  }
  if ((((int)param_2[2] != *(int *)(param_1 + 0x1950)) ||
      (*(float *)((int)param_2 + 0xc) != *(float *)(param_1 + 0x194c))) ||
     (bVar1 = false, *(short *)((int)param_2 + 0x14) != *(short *)(param_1 + 0x1954))) {
    bVar1 = true;
  }
  if ((bVar1) && (-1 < *(short *)((int)param_2 + 0x14))) {
    if (*(char *)(param_1 + 0x19a0) == '\0') {
      *(long *)(param_1 + 0x1960) = *param_2;
      *(long *)(param_1 + 0x1968) = param_2[1];
      *(long *)(param_1 + 0x1970) = param_2[2];
      lVar2 = param_2[3];
      *(undefined1 *)(param_1 + 0x1977) = 1;
      *(long *)(param_1 + 0x1978) = lVar2;
    }
    else {
      *(long *)(param_1 + 0x1980) = *param_2;
      *(long *)(param_1 + 0x1988) = param_2[1];
      *(long *)(param_1 + 0x1990) = param_2[2];
      lVar2 = param_2[3];
      *(undefined1 *)(param_1 + 0x1997) = 1;
      *(long *)(param_1 + 0x1998) = lVar2;
    }
  }
  return;
}


// ==== FUN_001dc1a0 @ 001dc1a0 ====

undefined4 FUN_001dc1a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x1930);
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 9)) {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_00103870(DAT_0040f0e0);
    uVar2 = 0;
    if (lVar3 == 0) {
      *(undefined4 *)(iVar5 + 0x1930) = 6;
      puVar6 = (undefined8 *)param_2;
      *(undefined8 *)(iVar5 + 0x1940) = *puVar6;
      *(undefined8 *)(iVar5 + 0x1948) = puVar6[1];
      *(undefined8 *)(iVar5 + 0x1950) = puVar6[2];
      uVar4 = puVar6[3];
      *(undefined1 *)(iVar5 + 0x1957) = 1;
      *(undefined8 *)(iVar5 + 0x1958) = uVar4;
      FUN_001dc278(param_1,param_2);
      uVar2 = 1;
      *(undefined1 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24) + 0x1e54) =
           *(undefined1 *)((int)puVar6 + 0x16);
      *(undefined4 *)(iVar5 + 0x191c) = *(undefined4 *)((int)puVar6 + 0xc);
      *(undefined4 *)(iVar5 + 0x1928) = *(undefined4 *)(puVar6 + 2);
    }
  }
  return uVar2;
}


// ==== FUN_001dc278 @ 001dc278 ====

undefined4 FUN_001dc278(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0x1918) = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  fVar2 = *(float *)(param_2 + 0xc);
  *(float *)(param_1 + 0x1920) = *(float *)(param_1 + 0x191c);
  *(float *)(param_1 + 0x1924) = fVar2 - *(float *)(param_1 + 0x191c);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x192c) = 1;
  *(undefined4 *)(param_1 + 0x1928) = uVar1;
  return 1;
}


// ==== FUN_001dc2c0 @ 001dc2c0 ====

void FUN_001dc2c0(int param_1)

{
  float fVar1;
  
  switch(*(undefined4 *)(param_1 + 0x192c)) {
  case 1:
  case 2:
    if (*(float *)(DAT_0040f0e0 + 0x20140) <
        *(float *)(param_1 + 0x1918) + *(float *)(param_1 + 0x1948)) {
      *(float *)(param_1 + 0x191c) =
           ((*(float *)(DAT_0040f0e0 + 0x20140) - *(float *)(param_1 + 0x1918)) /
           *(float *)(param_1 + 0x1948)) * *(float *)(param_1 + 0x1924) +
           *(float *)(param_1 + 0x1920);
    }
    else {
      *(undefined4 *)(param_1 + 0x192c) = 3;
      *(undefined4 *)(param_1 + 0x191c) = *(undefined4 *)(param_1 + 0x194c);
    }
    FUN_001efe08(*(undefined4 *)(param_1 + 0x191c),DAT_0040f510,
                 &DAT_003f8d10 + *(int *)(param_1 + 0x1928) * 0x30);
  case 3:
    FUN_001efe08(*(undefined4 *)(param_1 + 0x191c),DAT_0040f510,
                 &DAT_003f8d10 + *(int *)(param_1 + 0x1928) * 0x30);
    break;
  case 4:
    fVar1 = *(float *)(param_1 + 0x1918);
    if (*(float *)(DAT_0040f0e0 + 0x20140) < fVar1 + 0.5) {
      *(float *)(param_1 + 0x191c) =
           (*(float *)(DAT_0040f0e0 + 0x20140) - (fVar1 + fVar1)) * *(float *)(param_1 + 0x1924) +
           *(float *)(param_1 + 0x1920);
    }
    else {
      *(undefined4 *)(param_1 + 0x191c) = 0;
      *(undefined4 *)(param_1 + 0x192c) = 0;
    }
    FUN_001efe08(*(undefined4 *)(param_1 + 0x191c),DAT_0040f510,
                 &DAT_003f8d10 + *(int *)(param_1 + 0x1928) * 0x30);
  default:
  }
  return;
}


// ==== FUN_001dc498 @ 001dc498 ====

void FUN_001dc498(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    uVar4 = 0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x1900)) {
      piVar2 = (int *)(param_1 + 0x6c);
      iVar1 = *piVar2;
      while( true ) {
        iVar3 = iVar3 + 1;
        *(undefined1 *)(iVar1 + 0x35) = 0;
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
        FUN_00283b38(0,iVar1);
        if (*(int *)(param_1 + 0x1900) <= iVar3) break;
        iVar1 = *piVar2;
      }
    }
  }
  else {
    iVar3 = 0;
    uVar4 = FUN_001ed820(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c));
    if (0 < *(int *)(param_1 + 0x1900)) {
      piVar2 = (int *)(param_1 + 0x6c);
      do {
        iVar3 = iVar3 + 1;
        FUN_00283b38(uVar4,*piVar2);
        *(undefined1 *)(*piVar2 + 0x35) = 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x1900));
    }
  }
  iVar3 = param_1 + 0x58;
  do {
    FUN_001db2f0(uVar4,param_1);
    param_1 = param_1 + 0x2c;
  } while (param_1 < iVar3);
  return;
}


// ==== FUN_001dc5a8 @ 001dc5a8 ====

void FUN_001dc5a8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x68);
  param_1 = param_1 + 0x58;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + -1;
    FUN_002810a0(param_1);
    param_1 = param_1 + 0x14;
    *puVar1 = 0xbf800000;
    puVar1 = puVar1 + 5;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_001dc610 @ 001dc610 ====

void FUN_001dc610(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x80);
  iVar4 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x1880);
  iVar2 = param_1 + 0x84;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + 1;
    *puVar3 = 8;
    puVar3 = puVar3 + 0x18;
    FUN_002810a0(iVar2);
    puVar1 = (undefined1 *)(param_1 + 0x1880) + iVar4;
    iVar2 = iVar2 + 0x60;
  } while (iVar4 < 0x40);
  return;
}


// ==== FUN_001dc690 @ 001dc690 ====

void FUN_001dc690(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)(param_1 + 0x1880) != '\0') {
    for (iVar2 = 1; (iVar2 < 0x40 && (*(char *)(param_1 + 0x1880 + iVar2) != '\0'));
        iVar2 = iVar2 + 1) {
    }
  }
  iVar1 = iVar2 * 0x60 + param_1;
  *(undefined4 *)(iVar1 + 0x98) = param_2;
  *(undefined1 *)(param_1 + iVar2 + 0x1880) = 1;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  return;
}


// ==== FUN_001dc6e8 @ 001dc6e8 ====

void FUN_001dc6e8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1 + 0x84;
  do {
    if (*(char *)(param_1 + 0x1880 + iVar2) != '\0') {
      FUN_002810a0(iVar3);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x60;
  } while (iVar2 < 0x40);
  puVar1 = (undefined1 *)(param_1 + 0x18bf);
  iVar2 = 0x3f;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  FUN_00280100(DAT_0040f510,*(undefined4 *)(param_1 + 0x1934));
  return;
}


// ==== FUN_001dc790 @ 001dc790 ====

void FUN_001dc790(float param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  
  iVar11 = (int)param_2;
  if (*(char *)(iVar11 + param_3 + 0x1880) == '\0') {
    return;
  }
  auVar8 = _pextlw(0,0);
  auVar8 = _pextlw(0,auVar8._0_8_);
  uStack_ac = 0;
  uStack_110 = auVar8._0_4_;
  uStack_10c = auVar8._4_4_;
  uStack_108 = auVar8._8_4_;
  uStack_104 = auVar8._12_4_;
  puVar10 = (undefined4 *)(iVar11 + param_3 * 0x60 + 0x80);
  puVar2 = (undefined4 *)puVar10[6];
  uStack_a0 = uStack_110;
  uStack_9c = uStack_10c;
  uStack_98 = uStack_108;
  uStack_94 = uStack_104;
  switch(*puVar10) {
  case 0:
    uVar15 = *puVar2;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar10[5] = 0;
    puVar10[8] = uVar15;
    puVar10[9] = uVar4;
    puVar10[10] = uVar5;
    puVar10[0xb] = uVar6;
    uVar15 = 1;
    if ((float)puVar10[5] < (float)puVar2[0xe]) {
      uVar15 = 4;
    }
    *puVar10 = uVar15;
    bVar7 = true;
    if ((-1 < (int)puVar2[0xb]) && (0 < (int)puVar2[0xd])) {
      bVar7 = false;
      *puVar10 = 6;
    }
    if (!bVar7) {
      return;
    }
    uVar15 = FUN_0027fcf8(*(undefined4 *)(iVar11 + 0x1934),puVar2 + 4,0);
    puVar10[7] = uVar15;
    break;
  case 1:
    fVar12 = (float)puVar10[5];
    puVar10[5] = fVar12 - param_1;
    if (fVar12 - param_1 <= 0.0) {
      iVar9 = *(int *)(iVar11 + 0x1938) * 0x10000 + (*(int *)(iVar11 + 0x1938) >> 0x10);
      *(int *)(iVar11 + 0x1938) = iVar9;
      iVar9 = iVar9 + *(int *)(iVar11 + 0x193c);
      *(int *)(iVar11 + 0x1938) = iVar9;
      *(int *)(iVar11 + 0x193c) = *(int *)(iVar11 + 0x193c) + iVar9;
      uVar3 = *(uint *)(iVar11 + 0x1938);
      fVar12 = (float)puVar2[10];
      *puVar10 = 2;
      puVar10[5] = fVar12 * (float)uVar3 * 2.3283064e-10;
    }
    break;
  case 2:
    fVar12 = (float)puVar10[5];
    puVar10[5] = fVar12 - param_1;
    if (0.0 < fVar12 - param_1) {
      return;
    }
    goto LAB_001dcaf0;
  case 3:
    uStack_fc = puVar2[6];
    auStack_120 = *(undefined1 (*) [16])puVar10[6];
    uStack_100 = puVar10[7];
    uStack_a8 = 7;
    uStack_dc = puVar2[7];
    uStack_e0 = puVar2[8];
    uStack_90 = puVar10[1];
    cVar1 = *(char *)(puVar2 + 0xf);
    iVar11 = puVar2[0xb];
    uStack_ac = 0x1b0f;
    uStack_a7 = -1 < iVar11 || cVar1 == '\x01';
    FUN_00285748(&uStack_a0,DAT_0040f510 + 0xb308,auStack_150);
    *(ulong *)(puVar10 + 1) = CONCAT44(uStack_9c,uStack_a0);
    *(ulong *)(puVar10 + 3) = CONCAT44(uStack_94,uStack_98);
    puVar10[1] = uStack_90;
    if (-1 < iVar11 || cVar1 == '\x01') {
      *puVar10 = 7;
    }
    else {
      uVar15 = puVar2[9];
      *puVar10 = 1;
      puVar10[5] = uVar15;
    }
    if (-1 < (int)puVar2[0xb]) {
      puVar10[0x14] = puVar2[0xd];
      puVar10[0x10] = puVar10[8];
      puVar10[0x11] = puVar10[9];
      puVar10[0x12] = puVar10[10];
      puVar10[0x13] = puVar10[0xb];
      FUN_001dcc08(param_2,puVar10);
      *puVar10 = 5;
    }
    break;
  case 4:
    fVar12 = (float)puVar10[5];
    puVar10[5] = fVar12 - param_1;
    if (0.0 < fVar12 - param_1) {
      return;
    }
    auVar13 = _lqc2(*(undefined1 (*) [16])(puVar10 + 8));
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
    auVar8 = _vsub(auVar8,auVar13);
    auVar8 = _vmul(auVar8,auVar8);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar14,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    uVar15 = _vwaitq();
    auVar8 = _vmulq(auVar8,uVar15);
    auVar8 = _qmfc2(auVar8._0_4_);
    if (*(float *)(puVar10[6] + 0x38) <= auVar8._0_4_) {
      iVar9 = *(int *)(iVar11 + 0x1938) * 0x10000 + (*(int *)(iVar11 + 0x1938) >> 0x10);
      *(int *)(iVar11 + 0x1938) = iVar9;
      iVar9 = iVar9 + *(int *)(iVar11 + 0x193c);
      *(int *)(iVar11 + 0x1938) = iVar9;
      *(int *)(iVar11 + 0x193c) = *(int *)(iVar11 + 0x193c) + iVar9;
      puVar10[5] = (float)*(uint *)(iVar11 + 0x1938) * 2.3283064e-10 + 1.5;
      return;
    }
LAB_001dcaf0:
    *puVar10 = 3;
    break;
  case 5:
    auVar8 = _lqc2(*(undefined1 (*) [16])(puVar10 + 0xc));
    auVar13 = _qmtc2(param_1);
    auVar14 = _lqc2(*(undefined1 (*) [16])(puVar10 + 8));
    auVar8 = _vmulbc(auVar8,auVar13);
    auVar8 = _vadd(auVar14,auVar8);
    auStack_120 = _sqc2(auVar8);
    uStack_ac = 1;
    auVar8 = _sqc2(auVar8);
    *(undefined1 (*) [16])(puVar10 + 8) = auVar8;
    FUN_00281010(puVar10 + 1,auStack_150);
    fVar12 = (float)puVar10[5];
    puVar10[5] = fVar12 - param_1;
    if (fVar12 - param_1 <= 0.0) {
      FUN_001dcc08(param_2,puVar10);
    }
  }
  return;
}


// ==== FUN_001dcc08 @ 001dcc08 ====

void FUN_001dcc08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float afStack_30 [4];
  
  iVar2 = (int)param_2;
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x4c);
  lVar1 = FUN_001dccf8(param_1,param_2,&uStack_40,afStack_30);
  if (-1 < lVar1) {
    auVar4 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x20));
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar3._4_4_ = uStack_3c;
    auVar3._0_4_ = uStack_40;
    auVar3._8_4_ = uStack_38;
    auVar3._12_4_ = uStack_34;
    auVar3 = _lqc2(auVar3);
    auVar6 = _vsub(auVar3,auVar4);
    auVar3 = _vmul(auVar6,auVar6);
    _vaddabc(auVar3,auVar3);
    auVar4 = _vmaddbc(auVar5,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar4);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    uVar7 = _vwaitq();
    auVar3 = _vmulq(auVar3,uVar7);
    auVar3 = _qmfc2(auVar3._0_4_);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar4);
    uVar7 = _vwaitq();
    auVar4 = _vmulq(auVar6,uVar7);
    auVar4 = _vmove(auVar4);
    if (afStack_30[0] == 0.0) {
      *(undefined4 *)(iVar2 + 0x14) = 0x45610000;
    }
    else {
      *(float *)(iVar2 + 0x14) = auVar3._0_4_ / afStack_30[0];
    }
    auVar3 = _qmtc2(afStack_30[0]);
    auVar3 = _vmulbc(auVar4,auVar3);
    *(int *)(iVar2 + 0x50) = (int)lVar1;
    auVar3 = _sqc2(auVar3);
    *(undefined1 (*) [16])(iVar2 + 0x30) = auVar3;
    *(undefined4 *)(iVar2 + 0x40) = uStack_40;
    *(undefined4 *)(iVar2 + 0x44) = uStack_3c;
    *(undefined4 *)(iVar2 + 0x48) = uStack_38;
    *(undefined4 *)(iVar2 + 0x4c) = uStack_34;
  }
  return;
}


// ==== FUN_001dccf8 @ 001dccf8 ====

undefined4 FUN_001dccf8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  iVar1 = *(int *)(param_2 + 0x50);
  iVar12 = 9999;
  iVar2 = *(int *)(*(int *)(param_2 + 0x18) + 0x2c);
  iVar10 = -1;
  *param_4 = 0;
  iVar9 = 0;
  piVar11 = (int *)(param_1 + 0x98);
  do {
    if ((*(char *)(param_1 + 0x1880 + iVar9) != '\0') &&
       (iVar3 = *piVar11, *(int *)(iVar3 + 0x2c) == iVar2)) {
      iVar4 = *(int *)(iVar3 + 0x34);
      if (iVar4 == iVar1) {
        *param_4 = *(undefined4 *)(iVar3 + 0x30);
      }
      else {
        if ((iVar1 < iVar4) && ((iVar10 == -1 || (iVar4 < iVar12)))) {
          iVar12 = iVar4;
          iVar10 = iVar9;
        }
        if ((iVar4 == 0) && (iVar10 == -1)) {
          iVar10 = iVar9;
        }
      }
    }
    iVar9 = iVar9 + 1;
    piVar11 = piVar11 + 0x18;
  } while (iVar9 < 0x40);
  param_1 = iVar10 * 0x60 + param_1;
  puVar5 = *(undefined8 **)(param_1 + 0x98);
  uVar6 = *puVar5;
  uVar7 = *(undefined4 *)(puVar5 + 1);
  uVar8 = *(undefined4 *)((int)puVar5 + 0xc);
  *param_3 = (int)uVar6;
  param_3[1] = (int)((ulong)uVar6 >> 0x20);
  param_3[2] = uVar7;
  param_3[3] = uVar8;
  return *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x34);
}


// ==== FUN_001dcdc0 @ 001dcdc0 ====

void FUN_001dcdc0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8,
                 undefined1 param_9)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char acStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  *(int *)(param_1 + 0x58) = (int)param_8;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  uStack_b0 = param_3;
  uStack_ac = param_4;
  FUN_00272488(param_2,acStack_c0);
  if (acStack_c0[0] == ' ') {
    acStack_c0[0] = '\0';
  }
  else {
    for (iVar3 = 1; iVar3 < 0xd; iVar3 = iVar3 + 1) {
      if (acStack_c0[iVar3] == ' ') {
        acStack_c0[iVar3] = '\0';
        break;
      }
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar2 = (undefined4 *)(param_1 + 0x34);
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_00107cf8(0x34);
      puVar2[-1] = (int)uVar1;
      FUN_001d97d0(uVar1,*(undefined8 *)(param_1 + 0x28),acStack_c0,uStack_ac,param_9,param_5,
                   param_6,param_7);
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
    } while (iVar3 < *(int *)(param_1 + 0x58));
  }
  iVar3 = 3;
  puVar2 = (undefined4 *)(param_1 + 0xc);
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x18) = uStack_b0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(int *)(param_1 + 0x48) = 0x8000 / (int)param_8;
  return;
}


// ==== FUN_001dcf70 @ 001dcf70 ====

undefined4
FUN_001dcf70(undefined8 param_1,undefined8 *param_2,int *param_3,long param_4,int param_5,
            int param_6)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  
  piVar8 = (int *)param_1;
  switch(piVar8[5]) {
  case 1:
  case 3:
  case 9:
    iVar7 = 1;
    *(undefined8 *)(piVar8 + 8) = *param_2;
    iVar3 = *(int *)((int)param_2 + 0xc);
    piVar8[0x10] = iVar3;
    *(short *)(piVar8 + 0x18) =
         *(short *)((int)param_2 + 0x22) + (short)*(undefined4 *)((int)param_2 + 0x1c);
    *(undefined2 *)((int)piVar8 + 0x62) = *(undefined2 *)(iVar3 + 2);
    uVar2 = *(ushort *)(*(int *)((int)param_2 + 0xc) + 4);
    piVar8[4] = (int)param_4;
    piVar8[0x17] = (uint)uVar2;
    piVar8[0x15] = 1 % (int)param_4;
    sVar1 = *(short *)((int)param_2 + 0x22);
    iVar3 = *(int *)((int)param_2 + 0x1c);
    uVar2 = *(ushort *)(*(int *)((int)param_2 + 0xc) + 2);
    *piVar8 = (int)param_2;
    *(bool *)(piVar8 + 0x19) = (int)(uint)uVar2 <= sVar1 + iVar3;
    piVar4 = piVar8;
    if (1 < param_4) {
      do {
        iVar3 = *param_3;
        iVar7 = iVar7 + 1;
        param_3 = param_3 + 1;
        piVar4[1] = iVar3;
        piVar4 = piVar4 + 1;
      } while (iVar7 < piVar8[4]);
    }
    FUN_001dd4c8(param_1,0);
    piVar8[0x14] = 0;
    piVar8[5] = 4;
    break;
  default:
    goto switchD_001dcfbc_caseD_2;
  case 4:
    break;
  case 5:
    goto switchD_001dcfbc_caseD_5;
  }
  uStack_50 = FUN_001dd4d0(param_1,piVar8[0x14]);
  iStack_4c = piVar8[0x12];
  iVar3 = *piVar8;
  uStack_48 = (int)*(short *)(iVar3 + 0x22) + *(int *)(iVar3 + 0x1c) <
              (int)(uint)*(ushort *)(*(int *)(iVar3 + 0xc) + 2) ^ 1;
  lVar6 = FUN_001d9990(piVar8[piVar8[0x14] * 2 + 0xc],&uStack_50,
                       *(undefined2 *)(*(int *)(piVar8[piVar8[0x13]] + 0xc) + 4),
                       param_5 + (param_6 / piVar8[0x16]) * piVar8[0x14] * 4);
  uVar5 = 0;
  if (lVar6 != 0) {
    iVar3 = piVar8[0x14];
    piVar8[0x14] = iVar3 + 1;
    if (iVar3 + 1 < piVar8[0x16]) {
switchD_001dcfbc_caseD_2:
      uVar5 = 0;
    }
    else {
      piVar8[5] = 5;
      piVar8[0x11] = *piVar8;
switchD_001dcfbc_caseD_5:
      uVar5 = 1;
    }
  }
  return uVar5;
}


// ==== FUN_001dd158 @ 001dd158 ====

void FUN_001dd158(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 auStack_110 [21];
  float fStack_bc;
  uint uStack_6c;
  
  uStack_6c = 0;
  puVar6 = param_2;
  puVar12 = auStack_110;
  do {
    puVar9 = puVar12;
    puVar5 = puVar6;
    uVar2 = *puVar5;
    uVar7 = *(undefined4 *)(puVar5 + 1);
    uVar8 = *(undefined4 *)((int)puVar5 + 0xc);
    uVar3 = puVar5[2];
    uVar10 = *(undefined4 *)(puVar5 + 3);
    uVar11 = *(undefined4 *)((int)puVar5 + 0x1c);
    *puVar9 = (int)uVar2;
    puVar9[1] = (int)((ulong)uVar2 >> 0x20);
    puVar9[2] = uVar7;
    puVar9[3] = uVar8;
    puVar9[4] = (int)uVar3;
    puVar9[5] = (int)((ulong)uVar3 >> 0x20);
    puVar9[6] = uVar10;
    puVar9[7] = uVar11;
    puVar6 = puVar5 + 4;
    puVar12 = puVar9 + 8;
  } while (puVar6 != param_2 + 0x14);
  iVar14 = *(int *)((int)param_2 + 0xa4);
  uVar2 = *puVar6;
  uVar7 = *(undefined4 *)(puVar5 + 5);
  uVar8 = *(undefined4 *)((int)puVar5 + 0x2c);
  puVar9[8] = (int)uVar2;
  puVar9[9] = (int)((ulong)uVar2 >> 0x20);
  puVar9[10] = uVar7;
  puVar9[0xb] = uVar8;
  iVar13 = (int)param_1;
  if ((iVar14 >> 0xc & 1U) != 0) {
    *(undefined1 *)(iVar13 + 0x65) = *(undefined1 *)((int)param_2 + 0xa9);
  }
  iVar14 = 0;
  if (0 < *(int *)(iVar13 + 0x58)) {
    fStack_bc = *(float *)(iVar13 + 0x34);
    puVar12 = (undefined4 *)(iVar13 + 0x30);
    while( true ) {
      iVar14 = iVar14 + 1;
      fStack_bc = fStack_bc * *(float *)((int)param_2 + 0x54);
      uStack_6c = uStack_6c | 8;
      FUN_001d9ab8(*puVar12,auStack_110);
      if (*(int *)(iVar13 + 0x58) <= iVar14) break;
      fStack_bc = (float)puVar12[3];
      puVar12 = puVar12 + 2;
    }
  }
  iVar14 = *(int *)(iVar13 + 0x14);
  if (iVar14 != 6) {
    if (iVar14 < 7) {
      if (iVar14 != 5) goto LAB_001dd3b4;
    }
    else if (iVar14 != 7) goto LAB_001dd3b4;
    lVar4 = FUN_001d9d58(*(undefined4 *)(iVar13 + 0x30));
    if (lVar4 == 0) goto LAB_001dd3b4;
    iVar14 = *(int *)(iVar13 + *(int *)(iVar13 + 0x4c) * 4);
    if ((int)*(short *)(iVar14 + 0x22) + *(int *)(iVar14 + 0x1c) <
        (int)(uint)*(ushort *)(*(int *)(iVar14 + 0xc) + 2)) {
      iVar14 = *(int *)(iVar13 + 0x4c);
    }
    else {
      if (*(char *)(iVar13 + 0x65) == '\0') {
        FUN_001d7cc0(iVar14);
        *(undefined4 *)(iVar13 + 0x14) = 8;
        goto LAB_001dd3b4;
      }
      iVar14 = *(int *)(iVar13 + 0x4c);
    }
    FUN_001d7cc0(*(undefined4 *)(iVar13 + iVar14 * 4));
    *(undefined4 *)(iVar13 + 0x14) = 6;
    *(int *)(iVar13 + 0x4c) = (*(int *)(iVar13 + 0x4c) + 1) % *(int *)(iVar13 + 0x10);
  }
  if (*(int *)(*(int *)(iVar13 + *(int *)(iVar13 + 0x4c) * 4) + 0x14) == 4) {
    iVar14 = 0;
    FUN_001dd4c8(param_1);
    if (0 < *(int *)(iVar13 + 0x58)) {
      puVar12 = (undefined4 *)(iVar13 + 0x30);
      do {
        uStack_120 = FUN_001dd4d0(param_1,iVar14);
        uStack_11c = *(undefined4 *)(iVar13 + 0x48);
        uStack_118 = 0;
        if (*(char *)(iVar13 + 0x65) == '\0') {
          iVar1 = *(int *)(iVar13 + *(int *)(iVar13 + 0x4c) * 4);
          uStack_118 = 0;
          if ((int)(uint)*(ushort *)(*(int *)(iVar1 + 0xc) + 2) <=
              (int)*(short *)(iVar1 + 0x22) + *(int *)(iVar1 + 0x1c)) {
            uStack_118 = 1;
          }
        }
        iVar14 = iVar14 + 1;
        FUN_001d9c00(*puVar12,&uStack_120);
        puVar12 = puVar12 + 2;
        *(undefined4 *)(iVar13 + 0x44) = *(undefined4 *)(iVar13 + *(int *)(iVar13 + 0x4c) * 4);
      } while (iVar14 < *(int *)(iVar13 + 0x58));
    }
    *(undefined4 *)(iVar13 + 0x14) = 7;
  }
LAB_001dd3b4:
  FUN_001dd508(param_1);
  return;
}


// ==== FUN_001dd3e0 @ 001dd3e0 ====

undefined4 FUN_001dd3e0(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_1;
  if ((param_1[param_1[0x15]] == 0) || (lVar2 = FUN_001dd508(), lVar2 != 0)) {
    do {
      iVar4 = iVar4 + 1;
      if (*piVar3 != 0) {
        lVar2 = FUN_001d7cc0();
        if (lVar2 == 0) {
          return 0;
        }
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
    } while (iVar4 < 4);
    iVar4 = 0;
    if (0 < param_1[0x16]) {
      piVar3 = param_1 + 0xc;
      do {
        lVar2 = FUN_001d9b88(*piVar3);
        iVar4 = iVar4 + 1;
        if (lVar2 == 0) goto LAB_001dd420;
        piVar3 = piVar3 + 2;
      } while (iVar4 < param_1[0x16]);
    }
    memset(param_1,0,0x10);
    uVar1 = 1;
    param_1[5] = 9;
  }
  else {
LAB_001dd420:
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_001dd4c8 @ 001dd4c8 ====

void FUN_001dd4c8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}


// ==== FUN_001dd4d0 @ 001dd4d0 ====

int FUN_001dd4d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x4c) * 4);
  return *(int *)(iVar1 + 8) +
         (((int)*(short *)(iVar1 + 0x20) << 0xb) / *(int *)(param_1 + 0x58)) * param_2;
}


// ==== FUN_001dd508 @ 001dd508 ====

undefined4 FUN_001dd508(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = 1;
  if (*(char *)(param_1 + 100) == '\0') {
    iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x54) * 4);
    if (iVar1 == *(int *)(param_1 + 0x44)) {
      uVar2 = 1;
    }
    else {
      lVar3 = FUN_001d7c20(iVar1,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x40),
                           *(undefined2 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x18),0);
      uVar2 = 0;
      if (lVar3 != 0) {
        iVar4 = (int)*(short *)(iVar1 + 0x22) + *(int *)(iVar1 + 0x1c);
        if (iVar4 < (int)(uint)*(ushort *)(*(int *)(iVar1 + 0xc) + 2)) {
          *(short *)(param_1 + 0x60) = (short)iVar4;
        }
        else if (*(char *)(param_1 + 0x65) == '\0') {
          *(undefined1 *)(param_1 + 100) = 1;
        }
        else {
          *(undefined2 *)(param_1 + 0x60) = 0;
        }
        uVar2 = 1;
        *(int *)(param_1 + 0x54) = (*(int *)(param_1 + 0x54) + 1) % *(int *)(param_1 + 0x10);
      }
    }
  }
  return uVar2;
}


// ==== FUN_001dd5d8 @ 001dd5d8 ====

void FUN_001dd5d8(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 auStack_100 [21];
  float fStack_ac;
  uint uStack_5c;
  
  uStack_5c = 0;
  puVar3 = param_2;
  puVar11 = auStack_100;
  do {
    puVar4 = puVar11;
    puVar2 = puVar3;
    uVar1 = *puVar2;
    uVar5 = *(undefined4 *)(puVar2 + 1);
    uVar6 = *(undefined4 *)((int)puVar2 + 0xc);
    uVar7 = *(undefined4 *)(puVar2 + 2);
    uVar8 = *(undefined4 *)((int)puVar2 + 0x14);
    uVar9 = *(undefined4 *)(puVar2 + 3);
    uVar10 = *(undefined4 *)((int)puVar2 + 0x1c);
    *puVar4 = (int)uVar1;
    puVar4[1] = (int)((ulong)uVar1 >> 0x20);
    puVar4[2] = uVar5;
    puVar4[3] = uVar6;
    puVar4[4] = uVar7;
    puVar4[5] = uVar8;
    puVar4[6] = uVar9;
    puVar4[7] = uVar10;
    puVar3 = puVar2 + 4;
    puVar11 = puVar4 + 8;
  } while (puVar3 != param_2 + 0x14);
  iVar12 = *(int *)((int)param_2 + 0xa4);
  uVar1 = *puVar3;
  uVar5 = *(undefined4 *)(puVar2 + 5);
  uVar6 = *(undefined4 *)((int)puVar2 + 0x2c);
  puVar4[8] = (int)uVar1;
  puVar4[9] = (int)((ulong)uVar1 >> 0x20);
  puVar4[10] = uVar5;
  puVar4[0xb] = uVar6;
  if ((iVar12 >> 0xc & 1U) == 0) {
    *(undefined1 *)(param_1 + 0x65) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)((int)param_2 + 0xa9);
  }
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    fStack_ac = *(float *)(param_1 + 0x34);
    puVar11 = (undefined4 *)(param_1 + 0x30);
    while( true ) {
      iVar12 = iVar12 + 1;
      fStack_ac = fStack_ac * *(float *)((int)param_2 + 0x54);
      uStack_5c = uStack_5c | 8;
      FUN_001d9dc0(*puVar11,auStack_100);
      if (*(int *)(param_1 + 0x58) <= iVar12) break;
      fStack_ac = (float)puVar11[3];
      puVar11 = puVar11 + 2;
    }
  }
  return;
}


// ==== FUN_001dd6c0 @ 001dd6c0 ====

void FUN_001dd6c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar2 = (undefined4 *)(param_1 + 0x30);
    uVar1 = *puVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 2;
      FUN_001d9e40(uVar1);
      if (*(int *)(param_1 + 0x58) <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}


// ==== FUN_001dd728 @ 001dd728 ====

void FUN_001dd728(int param_1)

{
  FUN_001d9ea8(*(undefined4 *)(param_1 + 0x30));
  return;
}


// ==== FUN_001dd748 @ 001dd748 ====

float FUN_001dd748(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x62);
  iVar2 = *(int *)(param_1 + 0x48);
  iVar3 = FUN_001d9f60(*(undefined4 *)(param_1 + 0x30));
  iVar4 = FUN_001d9f40(*(undefined4 *)(param_1 + 0x30));
  return (float)iVar4 / (float)(((int)((uint)uVar1 << 0xb) / iVar2) * iVar3);
}


// ==== FUN_001dd7c0 @ 001dd7c0 ====

void FUN_001dd7c0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar2 = (undefined4 *)(param_1 + 0x30);
    uVar1 = *puVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 2;
      FUN_001d9ec8(uVar1,param_2);
      if (*(int *)(param_1 + 0x58) <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}


// ==== FUN_001dd838 @ 001dd838 ====

/* Strings referenciadas:
     "../Export/ValueDB/Sound/ps2/Collision.cfg"
     "Light Object Max Impulse"
     "Collision"
     "Medium Object Max Impulse"
     "Heavy Object Max Impulse"
     "World Object Max Impulse"
     "Object Impulse Threshold"
     "Footstep Impulse" */

void FUN_001dd838(void)

{
  if (cGpffff822d == '\0') {
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd300,0x3f7c48,0x3f7c68,
                 PTR_s____Export_ValueDB_Sound_ps2_Coll_003bd2ec,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd304,0x3f7c78,0x3f7c68,
                 PTR_s____Export_ValueDB_Sound_ps2_Coll_003bd2ec,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd308,0x3f7c98,0x3f7c68,
                 PTR_s____Export_ValueDB_Sound_ps2_Coll_003bd2ec,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd30c,0x3f7cb8,0x3f7c68,
                 PTR_s____Export_ValueDB_Sound_ps2_Coll_003bd2ec,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd2f0,0x3f7cd8,0x3f7c68,
                 PTR_s____Export_ValueDB_Sound_ps2_Coll_003bd2ec,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd2fc,0x3f7cf8,0x3f7c68,
                 PTR_s____Export_ValueDB_Sound_ps2_Coll_003bd2ec,0,0);
    cGpffff822d = '\x01';
  }
  return;
}


// ==== FUN_001dd9c8 @ 001dd9c8 ====

void FUN_001dd9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 in_zero_qw [16];
  long *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 in_a2_udw;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_150 [48];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  float fStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a5;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined *puStack_90;
  
  auVar5._8_8_ = in_a2_udw;
  auVar5._0_8_ = param_3;
  auVar9 = _por(in_zero_qw,auVar5);
  auVar5 = _pextlw(0,0);
  auVar5 = _pextlw(0,auVar5._0_8_);
  uVar8 = 0;
  bVar2 = false;
  iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
  uStack_ac = 0;
  uStack_a0 = auVar5._0_4_;
  uStack_9c = auVar5._4_4_;
  uStack_98 = auVar5._8_4_;
  uStack_94 = auVar5._12_4_;
  if (**(long **)(*(int *)((int)param_2 + 0x2a4) + 0xe8) != DAT_003f91b0) {
    iVar6 = 1;
    do {
      if (2 < iVar6) goto LAB_001dda98;
      plVar3 = &DAT_003f91b0 + iVar6;
      iVar6 = iVar6 + 1;
    } while (**(long **)(*(int *)((int)param_2 + 0x2a4) + 0xe8) != *plVar3);
  }
  bVar2 = true;
LAB_001dda98:
  uVar4 = FUN_00136b30(param_2);
  iVar6 = FUN_0015d248(DAT_0040f4e0,uVar4,0);
  iVar6 = *(int *)(iVar6 + 0x90);
  if ((1 < iVar6 - 4U) && (!bVar2)) {
    return;
  }
  if ((!bVar2) && (*(float *)(DAT_0040f4d0 + 0x20) - DAT_003bd354 < DAT_003bd350)) {
    DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
    DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
    if (DAT_003bd338 < (float)DAT_0040eb30 * 2.3283064e-10) {
      DAT_003bd354 = (float)*(undefined4 *)(DAT_0040f4d0 + 0x20);
      return;
    }
  }
  if (iVar6 == 4) {
    if (*(int *)(iVar1 + 0x2434) == 0) {
      return;
    }
    iVar6 = FUN_0012d158(DAT_0040f4d0,0,*(int *)(iVar1 + 0x2434) + -1);
    uVar8 = *(undefined4 *)(iVar1 + iVar6 * 4 + 0x243c);
  }
  else {
    if (iVar6 == 5) {
      iVar6 = *(int *)(iVar1 + 0x2438);
    }
    else {
      if (!bVar2) goto LAB_001ddc0c;
      iVar6 = *(int *)(iVar1 + 0x2438);
    }
    if (iVar6 == 0) {
      return;
    }
    iVar6 = FUN_0012d158(DAT_0040f4d0,0,iVar6 + -1);
    uVar8 = *(undefined4 *)(iVar1 + iVar6 * 4 + 0x244c);
  }
LAB_001ddc0c:
  uStack_120 = auVar9._0_4_;
  uStack_11c = auVar9._4_4_;
  uStack_118 = auVar9._8_4_;
  uStack_114 = auVar9._12_4_;
  uStack_110 = auVar5._0_4_;
  uStack_10c = auVar5._4_4_;
  uStack_108 = auVar5._8_4_;
  uStack_104 = auVar5._12_4_;
  uStack_a8 = 0;
  uVar7 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  uStack_f8 = DAT_003bd34c;
  uStack_dc = DAT_003bd330;
  uStack_e0 = DAT_003bd334;
  uStack_c0 = DAT_003bd384;
  uStack_bc = DAT_003bd388;
  uStack_b4 = DAT_003bd38c;
  uStack_a5 = DAT_0040da1e;
  uStack_c8 = DAT_003bd384;
  uStack_c4 = DAT_003bd384;
  uStack_b8 = DAT_003bd38c;
  DAT_0040eb30 = uVar7 * 0x10000 + ((int)uVar7 >> 0x10) + DAT_0040eb34 + uVar7;
  DAT_0040eb34 = DAT_0040eb34 + uVar7 + DAT_0040eb30;
  fStack_ec = DAT_003bd33c + (float)uVar7 * 2.3283064e-10 * (DAT_003bd340 - DAT_003bd33c);
  uStack_ac = 0x804b1f;
  puStack_90 = &DAT_003e26b0;
  fStack_fc = DAT_003bd344 + (float)DAT_0040eb30 * 2.3283064e-10 * (DAT_003bd348 - DAT_003bd344);
  uStack_100 = uVar8;
  FUN_00285748(&uStack_a0,DAT_0040f510 + 0xb308,auStack_150);
  DAT_003bd354 = (float)*(undefined4 *)(DAT_0040f4d0 + 0x20);
  return;
}


// ==== FUN_001dde78 @ 001dde78 ====

void FUN_001dde78(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  uStack_b0 = 0;
  uStack_ac = 0;
  uVar3 = FUN_001de520(param_1,param_3);
  uVar5 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),0);
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 8);
  uStack_d4 = FUN_001dfb20(param_1,*(undefined4 *)((int)param_2 + 0x24));
  if ((*(int *)((int)param_2 + 0x24) == 0) ||
     (iVar2 = *(int *)(*(int *)((int)param_2 + 0x24) + 0xc4), 1 < iVar2 - 1U)) {
    uVar4 = (uint)*(byte *)(param_2 + 5);
  }
  else if (iVar2 == 2) {
    uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 0x14);
  }
  else {
    uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 0x10);
  }
  FUN_001dd9c8(param_1,param_3,*param_2);
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  uStack_b8 = *(undefined4 *)(param_2 + 1);
  uStack_b4 = *(undefined4 *)((int)param_2 + 0xc);
  fStack_d0 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_c0 = (undefined4)*param_2;
  uStack_bc = (undefined4)((ulong)*param_2 >> 0x20);
  uStack_b0 = 4;
  uStack_a8 = 0;
  uStack_e0 = uVar1;
  uStack_dc = uVar4;
  uStack_d8 = uVar5;
  uStack_ac = uVar3;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_e0,1);
  return;
}


// ==== FUN_001de078 @ 001de078 ====

void FUN_001de078(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 in_zero_qw [16];
  undefined4 uVar2;
  undefined8 in_a1_udw;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = param_2;
  auVar3 = _por(in_zero_qw,auVar3);
  uStack_90 = 0;
  uStack_8c = 0;
  uVar2 = FUN_001de520(param_1,param_4);
  uVar4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),0);
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 8);
  uStack_b4 = FUN_001dfb20(param_1,*(undefined4 *)(param_3 + 0x24));
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  fStack_b0 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_a0 = auVar3._0_4_;
  uStack_9c = auVar3._4_4_;
  uStack_98 = auVar3._8_4_;
  uStack_94 = auVar3._12_4_;
  uStack_bc = (uint)*(byte *)(param_3 + 0x28);
  uStack_90 = 5;
  uStack_88 = 0;
  uStack_c0 = uVar1;
  uStack_b8 = uVar4;
  uStack_8c = uVar2;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_c0,1);
  return;
}


// ==== FUN_001de1f0 @ 001de1f0 ====

void FUN_001de1f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  uStack_90 = 0;
  uStack_8c = 0;
  lVar3 = FUN_001de520(param_1,param_3);
  uVar7 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),0);
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 8);
  uStack_b4 = FUN_001dfb20(param_1,*(undefined4 *)((int)param_2 + 0x24));
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  uStack_98 = *(undefined4 *)(param_2 + 1);
  uStack_94 = *(undefined4 *)((int)param_2 + 0xc);
  fStack_b0 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_bc = (uint)*(byte *)(param_2 + 5);
  bVar6 = false;
  uStack_a0 = (undefined4)*param_2;
  uStack_9c = (undefined4)((ulong)*param_2 >> 0x20);
  uStack_8c = (undefined4)lVar3;
  uStack_88 = 0;
  uStack_90 = 1;
  if (**(long **)(*(int *)((int)param_3 + 0x2a4) + 0xe8) != DAT_003f9190) {
    iVar5 = 1;
    do {
      if (3 < iVar5) goto LAB_001de378;
      plVar2 = &DAT_003f9190 + iVar5;
      iVar5 = iVar5 + 1;
    } while (**(long **)(*(int *)((int)param_3 + 0x2a4) + 0xe8) != *plVar2);
  }
  bVar6 = true;
LAB_001de378:
  uVar4 = 1;
  if ((bVar6) && (lVar3 == 2)) {
    uVar4 = 0;
  }
  uStack_c0 = uVar1;
  uStack_b8 = uVar7;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_c0,uVar4);
  return;
}


// ==== FUN_001de3d0 @ 001de3d0 ====

void FUN_001de3d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = param_2;
  auVar3 = _por(in_zero_qw,auVar3);
  uStack_70 = 0;
  uStack_6c = 0;
  uVar4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
  iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x2424) + 8);
  uStack_94 = FUN_001e1708(iVar1,3);
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  fStack_90 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_80 = auVar3._0_4_;
  uStack_7c = auVar3._4_4_;
  uStack_78 = auVar3._8_4_;
  uStack_74 = auVar3._12_4_;
  uStack_9c = (uint)*(byte *)(param_3 + 0x28);
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_a0 = uVar2;
  uStack_98 = uVar4;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_a0,1);
  return;
}


// ==== FUN_001de520 @ 001de520 ====

undefined4 FUN_001de520(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(int *)((int)param_2 + 0xc4) == 1) {
      lVar2 = FUN_00135550();
      uVar1 = 2;
      if (lVar2 != 0) {
        if (*(int *)((int)lVar2 + 0x80) == 1) {
          lVar2 = FUN_0018ddd8((int)lVar2 + 0xc94);
          uVar1 = 1;
          if (lVar2 == 0) {
            uVar1 = 2;
          }
        }
        else {
          uVar1 = 2;
        }
      }
    }
  }
  return uVar1;
}


// ==== FUN_001de598 @ 001de598 ====

void FUN_001de598(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_a2_udw;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = param_3;
  auVar3 = _por(in_zero_qw,auVar3);
  uStack_70 = 0;
  uStack_6c = 0;
  uVar4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),0);
  iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x2424) + 8);
  uStack_94 = FUN_001e1708(iVar1,3);
  uStack_9c = 0;
  if (*(int *)(param_2 + 0x74) != 0) {
    uStack_9c = *(undefined4 *)(*(int *)(param_2 + 0x74) + 0x378);
  }
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  fStack_90 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_80 = auVar3._0_4_;
  uStack_7c = auVar3._4_4_;
  uStack_78 = auVar3._8_4_;
  uStack_74 = auVar3._12_4_;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_a0 = uVar2;
  uStack_98 = uVar4;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_a0,1);
  return;
}


// ==== FUN_001de6f0 @ 001de6f0 ====

void FUN_001de6f0(undefined8 param_1,int param_2,uint param_3)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  byte *pbVar14;
  long lVar15;
  ulong in_hi;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  byte abStack_140 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c0;
  uint uStack_bc;
  
  uVar11 = 0;
  DAT_003bd32c = 0;
  uStack_bc = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) +
                             0x18);
  iStack_c0 = param_2;
  if (param_3 != 0) {
    do {
      lVar15 = ((long)iStack_c0 | in_hi) + (long)(int)(uVar11 * 0x30);
      iVar6 = (int)lVar15;
      in_hi = (ulong)(int)((ulong)lVar15 >> 0x20);
      if (*(int *)(iVar6 + 0x24) == 0) {
        iVar7 = *(int *)(iVar6 + 0x24);
LAB_001de7f4:
        fVar18 = *(float *)(iVar6 + 0x20);
        if (iVar7 == 0) {
          iVar7 = *(int *)(iVar6 + 0x28);
        }
        uVar12 = 0;
        bVar13 = true;
        if (DAT_003bd32c != 0) {
          if (DAT_0042a430 == iVar7) {
            bVar13 = false;
          }
          else {
            do {
              uVar12 = uVar12 + 1;
              if (DAT_003bd32c <= uVar12) goto LAB_001de858;
            } while ((&DAT_0042a430)[uVar12 * 2] != iVar7);
            bVar13 = false;
          }
        }
LAB_001de858:
        if (bVar13) {
          if (*(int *)(iVar7 + 0xc4) == 3) {
            FUN_001ea930(fVar18,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x28),iVar7,
                         *(undefined8 *)(iVar6 + 0x10));
          }
          if (DAT_003bd32c + 1 < 0x40) {
            (&DAT_0042a430)[DAT_003bd32c * 2] = iVar7;
            if (*(int *)(iVar7 + 0xc4) == 7) {
              fVar18 = 16.0;
            }
            pfVar5 = (float *)(&DAT_0042a434 + DAT_003bd32c * 8);
            DAT_003bd32c = DAT_003bd32c + 1;
LAB_001de904:
            *pfVar5 = fVar18;
          }
        }
        else {
          pfVar5 = (float *)(&DAT_0042a434 + uVar12 * 8);
          if (*pfVar5 < fVar18) goto LAB_001de904;
        }
      }
      else {
        if (*(int *)(iVar6 + 0x28) == 0) {
          iVar7 = *(int *)(iVar6 + 0x24);
          goto LAB_001de7f4;
        }
        if (*(int *)(*(int *)(iVar6 + 0x24) + 0xc4) == 3) {
          FUN_001ea8e0(*(undefined4 *)(iVar6 + 0x20),
                       *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x28));
          iVar7 = *(int *)(iVar6 + 0x28);
        }
        else {
          iVar7 = *(int *)(iVar6 + 0x28);
        }
        if (*(int *)(iVar7 + 0xc4) == 3) {
          FUN_001ea8e0(*(undefined4 *)(iVar6 + 0x20),
                       *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x28));
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_3);
  }
  iVar6 = 0;
  uVar11 = 0;
  pcVar10 = &DAT_0042a3fc;
  do {
    if (*pcVar10 == '\0') {
      abStack_140[iVar6] = (byte)uVar11;
      iVar6 = iVar6 + 1;
    }
    uVar11 = uVar11 + 1;
    pcVar10 = pcVar10 + 0x10;
  } while (uVar11 < 4);
  uVar11 = 0;
  if (DAT_003bd32c != 0) {
    pbVar14 = abStack_140 + iVar6;
    iVar6 = 0;
    do {
      if ((DAT_003bd2f0 <= *(float *)(&DAT_0042a434 + iVar6)) ||
         (uVar12 = FUN_001df9e0(param_1,*(undefined4 *)((int)&DAT_0042a430 + iVar6)),
         uVar12 == uStack_bc)) {
        iVar7 = *(int *)(*(int *)((int)&DAT_0042a430 + iVar6) + 0xc4);
        if ((iVar7 - 3U < 2) || (bVar13 = false, iVar7 == 7)) {
          bVar13 = true;
        }
        if (bVar13) {
          plVar2 = *(long **)((int)&DAT_0042a430 + iVar6);
          puVar3 = *(undefined8 **)((int)plVar2 + 0xb4);
          lVar15 = *plVar2;
          uStack_128 = *(undefined4 *)(puVar3 + 1);
          uStack_124 = *(undefined4 *)((int)puVar3 + 0xc);
          uStack_130 = (undefined4)*puVar3;
          uStack_12c = (undefined4)((ulong)*puVar3 >> 0x20);
          uStack_118 = *(undefined4 *)(puVar3 + 3);
          uStack_114 = *(undefined4 *)((int)puVar3 + 0x1c);
          uStack_120 = (undefined4)puVar3[2];
          uStack_11c = (undefined4)((ulong)puVar3[2] >> 0x20);
          uStack_108 = *(undefined4 *)(puVar3 + 5);
          uStack_104 = *(undefined4 *)((int)puVar3 + 0x2c);
          fStack_110 = (float)puVar3[4];
          uStack_10c = (undefined4)((ulong)puVar3[4] >> 0x20);
          iVar6 = FUN_001dfc08(param_1,&uStack_130);
          bVar13 = false;
          uVar12 = 0;
          while (iVar7 = uVar12 * 0x10, uVar12 < 4) {
            if (*(long *)(&DAT_0042a3f0 + iVar7) == lVar15) {
              if ((&DAT_0042a3fc)[iVar7] == '\0') {
                uVar12 = uVar12 + 1;
              }
              else {
                if (*(int *)(&DAT_0042a3f8 + iVar7) == iVar6) {
                  bVar13 = true;
                  break;
                }
                uVar12 = uVar12 + 1;
              }
            }
            else {
              uVar12 = uVar12 + 1;
            }
          }
          if ((!bVar13) && (pbVar14 != abStack_140)) {
            iStack_d0 = 0;
            uStack_cc = 0;
            uVar16 = FUN_001dfb20(param_1,plVar2);
            pbVar14 = pbVar14 + -1;
            uVar8 = FUN_001df9e0(param_1,plVar2);
            iVar7 = FUN_001e11f8(uVar16,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10));
            fVar18 = *(float *)(&DAT_003bd300 + iVar7 * 4);
            fVar17 = fVar18 * 0.5;
            fVar17 = (float)((int)fStack_110 * (uint)(fVar17 < fStack_110) |
                            (int)fVar17 * (uint)(fVar17 >= fStack_110));
            fVar18 = (float)((int)fVar17 * (uint)(fVar17 < fVar18) |
                            (int)fVar18 * (uint)(fVar17 >= fVar18)) / fVar18;
            uVar9 = FUN_001df9e0(param_1,0);
            uStack_f4 = FUN_001dfb20(param_1,0);
            uStack_e0 = uStack_130;
            uStack_dc = uStack_12c;
            uStack_d8 = uStack_128;
            uStack_d4 = uStack_124;
            uStack_cc = 0;
            uStack_c8 = 0;
            uStack_100 = uVar8;
            uStack_fc = uVar9;
            uStack_f8 = uVar16;
            fStack_f0 = fVar18;
            iStack_d0 = iVar6;
            FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_100,1);
            bVar1 = *pbVar14;
            *(long *)(&DAT_0042a3f0 + (uint)bVar1 * 0x10) = lVar15;
            *(int *)(&DAT_0042a3f8 + (uint)bVar1 * 0x10) = iVar6;
            uVar4 = FUN_001dfab0(param_1,plVar2);
            (&DAT_0042a3fc)[(uint)*pbVar14 * 0x10] = uVar4;
          }
        }
      }
      uVar11 = uVar11 + 1;
      iVar6 = uVar11 * 8;
    } while (uVar11 < DAT_003bd32c);
  }
  return;
}


// ==== FUN_001dec08 @ 001dec08 ====

void FUN_001dec08(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = param_2;
  auVar3 = _por(in_zero_qw,auVar3);
  uStack_60 = 0;
  uStack_5c = 0;
  uVar4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),0);
  iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x2424) + 8);
  uStack_84 = FUN_001e1708(iVar1,2);
  uStack_8c = (uint)*(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3a);
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  fStack_80 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_70 = auVar3._0_4_;
  uStack_6c = auVar3._4_4_;
  uStack_68 = auVar3._8_4_;
  uStack_64 = auVar3._12_4_;
  uStack_60 = 4;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_90 = uVar2;
  uStack_88 = uVar4;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_90,1);
  return;
}


// ==== FUN_001ded60 @ 001ded60 ====

void FUN_001ded60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = param_2;
  auVar3 = _por(in_zero_qw,auVar3);
  uStack_60 = 0;
  uStack_5c = 0;
  uVar4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),0);
  iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x2424) + 8);
  uStack_84 = FUN_001e1708(iVar1,1);
  uStack_8c = (uint)*(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3a);
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  fStack_80 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_70 = auVar3._0_4_;
  uStack_6c = auVar3._4_4_;
  uStack_68 = auVar3._8_4_;
  uStack_64 = auVar3._12_4_;
  uStack_60 = 1;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_90 = uVar2;
  uStack_88 = uVar4;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_90,1);
  return;
}


// ==== FUN_001deeb8 @ 001deeb8 ====

void FUN_001deeb8(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  uStack_a0 = 0;
  uStack_9c = 0;
  uVar2 = FUN_001de520(param_1,*param_2);
  uStack_c8 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
  if (param_3 == 0) {
    uVar3 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 0x20);
  }
  else {
    uVar3 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 0x1c);
  }
  uVar4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),3);
  uStack_cc = FUN_001df028(param_1,*(undefined8 *)(*param_2 + 0x100),1,0);
  iVar1 = *param_2;
  uStack_a0 = 4;
  uStack_b0 = *(undefined4 *)(iVar1 + 0x100);
  uStack_ac = *(undefined4 *)(iVar1 + 0x104);
  uStack_a8 = *(undefined4 *)(iVar1 + 0x108);
  uStack_a4 = *(undefined4 *)(iVar1 + 0x10c);
  if (param_4 == 0) {
    uStack_a0 = 0;
  }
  uStack_c0 = DAT_003bd2fc;
  uStack_98 = 0;
  uStack_d0 = uVar3;
  uStack_c4 = uVar4;
  uStack_9c = uVar2;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_d0,1);
  return;
}


// ==== FUN_001df028 @ 001df028 ====

undefined1 FUN_001df028(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 uStack_28;
  
  auVar3 = _qmtc2(param_2);
  auVar2 = _qmtc2(0x40a00000);
  auVar2 = _vsubbc(auVar3,auVar2);
  auVar2 = _vaddbc(in_vf0,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  lVar1 = FUN_0012ae58(DAT_0040f4d0,param_2,auVar2._0_8_,0x21,param_4);
  if (lVar1 == 0) {
    uStack_28 = 0;
  }
  return uStack_28;
}


// ==== FUN_001df080 @ 001df080 ====

void FUN_001df080(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 in_zero_qw [16];
  uint uVar2;
  undefined8 in_a1_udw;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  float fVar6;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  uVar2 = 0;
  piVar3 = &DAT_003bd310;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = param_2;
  auVar4 = _por(in_zero_qw,auVar4);
  fVar6 = 2.3283064e-10;
  do {
    uVar2 = uVar2 + 1;
    if (*piVar3 == 0) {
      uStack_c0 = 0;
      uStack_bc = 0;
      uVar5 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
      uVar1 = *(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3a);
      uStack_e4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
      DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
      DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
      fStack_e0 = (float)DAT_0040eb30 * fVar6;
      uStack_f0 = (uint)uVar1;
      uStack_ec = (uint)*(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3a);
      uStack_d0 = auVar4._0_4_;
      uStack_cc = auVar4._4_4_;
      uStack_c8 = auVar4._8_4_;
      uStack_c4 = auVar4._12_4_;
      uStack_c0 = 1;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_e8 = uVar5;
      FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_f0,1);
      DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
      DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
      *piVar3 = (int)DAT_0040eb30 % 0x4b + 0xf;
      return;
    }
    piVar3 = piVar3 + 1;
  } while (uVar2 < 7);
  return;
}


// ==== FUN_001df278 @ 001df278 ====

void FUN_001df278(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = param_2;
  auVar3 = _por(in_zero_qw,auVar3);
  uStack_60 = 0;
  uStack_5c = 0;
  uVar4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),0);
  iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x2424) + 8);
  uStack_84 = FUN_001e1708(iVar1,0);
  uStack_8c = (uint)*(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3a);
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  fStack_80 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_70 = auVar3._0_4_;
  uStack_6c = auVar3._4_4_;
  uStack_68 = auVar3._8_4_;
  uStack_64 = auVar3._12_4_;
  uStack_60 = 4;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_90 = uVar2;
  uStack_88 = uVar4;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_90,1);
  return;
}


// ==== FUN_001df3d0 @ 001df3d0 ====

void FUN_001df3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined4 uVar3;
  undefined8 in_a2_udw;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = param_3;
  auVar4 = _por(in_zero_qw,auVar4);
  uStack_80 = 0;
  uStack_7c = 0;
  uVar3 = FUN_001de520();
  uVar5 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
  iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x2424) + 0x10);
  uStack_a4 = FUN_001e1708(iVar1,1);
  uStack_ac = *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 0x10);
  uStack_90 = auVar4._0_4_;
  uStack_8c = auVar4._4_4_;
  uStack_88 = auVar4._8_4_;
  uStack_84 = auVar4._12_4_;
  uStack_a0 = DAT_003bd358;
  uStack_80 = 4;
  uStack_78 = 1;
  uStack_b0 = uVar2;
  uStack_a8 = uVar5;
  uStack_7c = uVar3;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_b0,0);
  return;
}


// ==== FUN_001df4d0 @ 001df4d0 ====

void FUN_001df4d0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uStack_70 = 0;
  uStack_6c = 0;
  uVar3 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
  iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x2424) + 0x10);
  uVar4 = FUN_001e1708(iVar1,3);
  uStack_9c = FUN_001df028(param_1,*(undefined8 *)(param_2 + 0x100),1,0);
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  uStack_78 = *(undefined4 *)(param_2 + 0xa8);
  uStack_74 = *(undefined4 *)(param_2 + 0xac);
  fStack_90 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_80 = (undefined4)*(undefined8 *)(param_2 + 0xa0);
  uStack_7c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
  uStack_70 = 1;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_a0 = uVar2;
  uStack_98 = uVar3;
  uStack_94 = uVar4;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_a0,0);
  return;
}


// ==== FUN_001df640 @ 001df640 ====

void FUN_001df640(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  uint uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2 = _por(in_zero_qw,auVar2);
  uStack_80 = 0;
  uStack_7c = 0;
  uVar3 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),0);
  uVar1 = *(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3e);
  uStack_a4 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  uStack_ac = (uint)*(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3e);
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  fStack_a0 = (float)DAT_0040eb30 * 2.3283064e-10;
  uStack_b0 = (uint)uVar1;
  uStack_90 = auVar2._0_4_;
  uStack_8c = auVar2._4_4_;
  uStack_88 = auVar2._8_4_;
  uStack_84 = auVar2._12_4_;
  uStack_80 = 2;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_a8 = uVar3;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_b0,0);
  return;
}


// ==== FUN_001df7b0 @ 001df7b0 ====

void FUN_001df7b0(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  uint auStack_90 [3];
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2 = _por(in_zero_qw,auVar2);
  uStack_60 = 0;
  uStack_5c = 0;
  uVar3 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
  uVar1 = *(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3e);
  uStack_84 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),3);
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  fStack_80 = (float)DAT_0040eb30 * 2.3283064e-10;
  auStack_90[0] = (uint)uVar1;
  uStack_70 = auVar2._0_4_;
  uStack_6c = auVar2._4_4_;
  uStack_68 = auVar2._8_4_;
  uStack_64 = auVar2._12_4_;
  auStack_90[1] = 2;
  uStack_60 = 2;
  uStack_5c = 0;
  uStack_58 = 0;
  auStack_90[2] = uVar3;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),auStack_90,0);
  return;
}


// ==== FUN_001df908 @ 001df908 ====

void FUN_001df908(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = param_2;
  auVar1 = _por(in_zero_qw,auVar1);
  uStack_70 = 0;
  uStack_6c = 0;
  uVar2 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
  uStack_94 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
  uStack_80 = auVar1._0_4_;
  uStack_7c = auVar1._4_4_;
  uStack_78 = auVar1._8_4_;
  uStack_74 = auVar1._12_4_;
  uStack_90 = 0x3f800000;
  uStack_70 = 2;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_a0 = param_3;
  uStack_9c = param_3;
  uStack_98 = uVar2;
  FUN_001e0930(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),&uStack_a0,1);
  return;
}


// ==== FUN_001df9e0 @ 001df9e0 ====

uint FUN_001df9e0(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
switchD_001dfa0c_caseD_5:
    uVar2 = 0;
  }
  else {
    switch(*(undefined4 *)((int)param_2 + 0xc4)) {
    case 0:
      iVar1 = *(int *)((int)param_2 + 0xbc);
      uVar2 = 0;
      if (iVar1 != 0) {
        iVar1 = *(int *)(*(int *)(iVar1 + 0x40) + 0x34);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = (uint)*(byte *)(iVar1 + 0xc);
        }
      }
      break;
    case 1:
    case 2:
      uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 0x10);
      break;
    case 3:
      uVar2 = FUN_00152108(param_2);
      break;
    case 4:
      uVar2 = FUN_00148438(param_2);
      break;
    default:
      goto switchD_001dfa0c_caseD_5;
    case 7:
      uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10) + 0x2424) + 8);
    }
  }
  return uVar2;
}


// ==== FUN_001dfab0 @ 001dfab0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001dfab0(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc4) != 7) {
    DAT_0040eb30 = DAT_0040eb30 * 0x10000 + (DAT_0040eb30 >> 0x10) + DAT_0040eb34;
    DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
    return (_DAT_003bd2f4 & 0xff) + DAT_0040eb30 % (int)(DAT_003bd2f8 - _DAT_003bd2f4) & 0xff;
  }
  return 0xff;
}


// ==== FUN_001dfb20 @ 001dfb20 ====

undefined4 FUN_001dfb20(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),3);
    return uVar1;
  }
  switch(*(undefined4 *)((int)param_2 + 0xc4)) {
  case 0:
    uVar1 = 3;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
    if (*(int *)((int)param_2 + 0xb4) == 0) {
      uVar1 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),1);
      return uVar1;
    }
    uVar1 = FUN_0025d9c0();
    return uVar1;
  case 5:
    uVar1 = 1;
    break;
  default:
    goto switchD_001dfb78_default;
  }
  uVar1 = FUN_001e1708(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),uVar1);
switchD_001dfb78_default:
  return uVar1;
}


// ==== FUN_001dfc08 @ 001dfc08 ====

undefined4 FUN_001dfc08(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  
  bVar1 = false;
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  if ((0.9 < fVar3) || (fVar3 < -0.9)) {
    bVar1 = true;
  }
  uVar2 = 3;
  if (bVar1) {
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_001dfc78 @ 001dfc78 ====

void FUN_001dfc78(void)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  
  FUN_001dd838();
  uVar3 = 0;
  piVar1 = &DAT_003bd310;
  if (DAT_003bd310 != 0) {
    DAT_003bd310 = DAT_003bd310 + -1;
    while( true ) {
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 1;
      if ((6 < uVar3) || (*piVar1 == 0)) break;
      *piVar1 = *piVar1 + -1;
    }
  }
  uVar3 = 0;
  puVar2 = &DAT_0042a3f0;
  do {
    uVar3 = uVar3 + 1;
    if (puVar2[0xc] != '\0') {
      puVar2[0xc] = puVar2[0xc] + -1;
    }
    puVar2 = puVar2 + 0x10;
  } while (uVar3 < 4);
  return;
}


// ==== FUN_001dfd08 @ 001dfd08 ====

/* Strings referenciadas:
     "Collision"
     "Light Object Max Weight"
     "../Export/ValueDB/Sound/Collision.cfg"
     "Medium Object Max Weight"
     "Heavy Object Max Weight"
     "World Object Max Weight" */

void FUN_001dfd08(void)

{
  if (cGpffff822f == '\0') {
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd390,0x3f7d60,0x3f7c68,0x3f7d78,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd394,0x3f7da0,0x3f7c68,0x3f7d78,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd398,0x3f7dc0,0x3f7c68,0x3f7d78,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd39c,0x3f7dd8,0x3f7c68,0x3f7d78,0,0);
    cGpffff822f = '\x01';
  }
  return;
}


// ==== FUN_001dfe38 @ 001dfe38 ====

void FUN_001dfe38(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 3;
  *(undefined4 *)(param_1 + 0x2418) = 1;
  *(undefined4 *)(param_1 + 0x2428) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x2448);
  *(undefined4 *)(param_1 + 0x2430) = 0;
  *(undefined4 *)(param_1 + 0x241c) = 0;
  *(undefined4 *)(param_1 + 0x2424) = 0;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  iVar2 = 3;
  puVar1 = (undefined4 *)(param_1 + 0x2458);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  FUN_001e1690(param_1,0,0);
  return;
}


// ==== FUN_001dfeb0 @ 001dfeb0 ====

void FUN_001dfeb0(undefined4 *param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = param_2;
  iVar1 = *param_2;
  uVar2 = *(undefined4 *)(iVar1 + 0x100);
  uVar3 = *(undefined4 *)(iVar1 + 0x104);
  uVar4 = *(undefined4 *)(iVar1 + 0x108);
  uVar5 = *(undefined4 *)(iVar1 + 0x10c);
  *(undefined1 *)(param_1 + 9) = param_3;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = 0;
  return;
}


// ==== FUN_001dfed0 @ 001dfed0 ====

void FUN_001dfed0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_60 [16];
  
  auVar7 = _qmtc2(param_3);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2470));
  auVar5 = _vsub(auVar7,auVar5);
  auVar5 = _vmul(auVar5,auVar5);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (DAT_003bd3a4 <= auVar5._0_4_) {
    auVar5 = _sqc2(auVar7);
    *(undefined1 (*) [16])(param_1 + 0x2470) = auVar5;
    piVar4 = (int *)(param_1 + 0x22d0);
    pfVar2 = (float *)(param_1 + 0x22d4);
    piVar1 = piVar4;
    do {
      if ((*piVar1 != 0) && (DAT_003bd3a0 < *(float *)(DAT_0040f4d0 + 0x20) - *pfVar2)) {
        *piVar1 = 0;
      }
      iVar3 = *piVar1;
      piVar1 = piVar1 + 2;
      if (iVar3 == param_2) {
        return;
      }
      pfVar2 = pfVar2 + 2;
    } while ((int)piVar1 < param_1 + 0x23d0);
    FUN_001df4d0(auStack_60,param_2);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x22d0) != 0) {
      iVar3 = 1;
      piVar1 = piVar4;
      while ((piVar1 = piVar1 + 2, iVar3 < 0x20 && (*piVar1 != 0))) {
        iVar3 = iVar3 + 1;
      }
    }
    if (iVar3 != 0x20) {
      piVar4[iVar3 * 2] = param_2;
      *(undefined4 *)(param_1 + iVar3 * 8 + 0x22d4) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
    }
  }
  return;
}


// ==== FUN_001e0028 @ 001e0028 ====

/* Strings referenciadas:
     "Level.awd"
     "Levels\Level_%02u\%s"
     "Collide.awd" */

undefined8 FUN_001e0028(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_110 [128];
  
  FUN_001dfd08();
  switch(*(undefined4 *)(param_1 + 0x2418)) {
  default:
    goto switchD_001e0078_caseD_0;
  case 1:
    sprintf(param_1 + 0x23d0,0x3f75a8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
            PTR_s_Collide_awd_003bd35c);
    uVar4 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
    *(undefined4 *)(param_1 + 0x2430) = uVar4;
    *(undefined4 *)(param_1 + 0x2418) = 2;
  case 2:
    iVar7 = DAT_0040f510;
    sVar1 = *(short *)(*(int *)(param_1 + 0x2430) + 0x20);
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x2430) + 8);
    iVar3 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x5b547e4058228000);
    uVar2 = *(undefined4 *)(iVar3 + 8);
    iVar3 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x5b547e4058228000);
    lVar5 = FUN_0027ff78(iVar7,param_1 + 0x23d0,1,uVar4,(int)sVar1 << 0xb,uVar2,
                         *(undefined4 *)(iVar3 + 0xc),0x3f8c00);
    *(int *)(param_1 + 0x241c) = (int)lVar5;
    if (lVar5 != 0) {
      FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*(undefined4 *)(param_1 + 0x2430));
      *(undefined4 *)(param_1 + 0x2430) = 0;
      *(undefined4 *)(param_1 + 0x2418) = 3;
switchD_001e0078_caseD_3:
      uVar4 = *(undefined4 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x33c);
      *(undefined4 *)(param_1 + 0x2418) = 5;
      *(undefined4 *)(param_1 + 0x2424) = uVar4;
    }
    break;
  case 3:
    goto switchD_001e0078_caseD_3;
  case 4:
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x2418) = 6;
    uVar4 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
    *(undefined4 *)(param_1 + 0x2430) = uVar4;
  case 6:
    sprintf(auStack_110,0x3f75a8,*(undefined1 *)(DAT_0040f4d0 + 0x5aac),PTR_s_Level_awd_003bd360);
    iVar7 = DAT_0040f510;
    sVar1 = *(short *)(*(int *)(param_1 + 0x2430) + 0x20);
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x2430) + 8);
    iVar3 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x8e4c293508000000);
    uVar2 = *(undefined4 *)(iVar3 + 8);
    iVar3 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x8e4c293508000000);
    lVar5 = FUN_0027ff78(iVar7,auStack_110,1,uVar4,(int)sVar1 << 0xb,uVar2,
                         *(undefined4 *)(iVar3 + 0xc),0x3f8bf8);
    *(int *)(param_1 + 0x2420) = (int)lVar5;
    if (lVar5 != 0) {
      iVar9 = 0;
      FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*(undefined4 *)(param_1 + 0x2430));
      *(undefined4 *)(param_1 + 0x2430) = 0;
      iVar7 = *(int *)(DAT_0040f4d0 + 0x5aec);
      iVar3 = *(int *)(iVar7 + 0x324);
      *(int *)(param_1 + 0x2434) = iVar3;
      if (0 < iVar3) {
        puVar8 = (undefined4 *)(param_1 + 0x243c);
        iVar3 = iVar7 + 0xf8;
        do {
          iVar9 = iVar9 + 1;
          uVar4 = FUN_00280200(DAT_0040f510,iVar3,0);
          iVar3 = iVar3 + 8;
          *puVar8 = uVar4;
          puVar8 = puVar8 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x2434));
      }
      iVar3 = *(int *)(iVar7 + 0x328);
      iVar9 = 0;
      *(int *)(param_1 + 0x2438) = iVar3;
      if (0 < iVar3) {
        iVar7 = iVar7 + 0x118;
        puVar8 = (undefined4 *)(param_1 + 0x244c);
        do {
          iVar9 = iVar9 + 1;
          uVar4 = FUN_0027fcf8(*(undefined4 *)(param_1 + 0x2420),iVar7,0);
          iVar7 = iVar7 + 8;
          *puVar8 = uVar4;
          puVar8 = puVar8 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x2438));
      }
      *(undefined4 *)(param_1 + 0x2418) = 7;
switchD_001e0078_caseD_7:
      *(undefined4 *)(param_1 + 0x2410) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2414) = 0;
      *(undefined4 *)(param_1 + 0x245c) = 0;
      iVar7 = 0x1f;
      puVar8 = (undefined4 *)(param_1 + 0x23c8);
      *(undefined4 *)(param_1 + 0x2460) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
      *(undefined4 *)(param_1 + 0x2464) = *(undefined4 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x344);
      *(undefined4 *)(param_1 + 0x2468) = *(undefined4 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x348);
      *(undefined4 *)(param_1 + 0x246c) = *(undefined4 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x34c);
      do {
        *puVar8 = 0;
        iVar7 = iVar7 + -1;
        puVar8 = puVar8 + -2;
      } while (-1 < iVar7);
      puVar8 = (undefined4 *)(param_1 + 0x4c);
      iVar7 = 7;
      do {
        *puVar8 = 0;
        iVar7 = iVar7 + -1;
        puVar8 = puVar8 + -1;
      } while (-1 < iVar7);
      auVar6 = _pextlw(0,0);
      auVar6 = _pextlw(0,auVar6._0_8_);
      *(int *)(param_1 + 0x2480) = auVar6._0_4_;
      *(int *)(param_1 + 0x2484) = auVar6._4_4_;
      *(int *)(param_1 + 0x2488) = auVar6._8_4_;
      *(int *)(param_1 + 0x248c) = auVar6._12_4_;
      *(int *)(param_1 + 0x2470) = auVar6._0_4_;
      *(int *)(param_1 + 0x2474) = auVar6._4_4_;
      *(int *)(param_1 + 0x2478) = auVar6._8_4_;
      *(int *)(param_1 + 0x247c) = auVar6._12_4_;
switchD_001e0078_caseD_0:
      return 1;
    }
    break;
  case 7:
    goto switchD_001e0078_caseD_7;
  }
  return 0;
}


// ==== FUN_001e0440 @ 001e0440 ====

void FUN_001e0440(undefined8 param_1)

{
  FUN_001dfc78();
  FUN_001e0fe8(param_1);
  FUN_001e10c0(param_1);
  FUN_001e1068(param_1);
  return;
}


// ==== FUN_001e0480 @ 001e0480 ====

undefined4 FUN_001e0480(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  piVar2 = (int *)(iVar4 + 0x50);
  piVar1 = (int *)(iVar4 + 0x30);
  iVar5 = 7;
  piVar3 = piVar2;
  do {
    if (*piVar1 != 0) {
      (**(code **)(*piVar2 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar2 + 0x18));
      *piVar1 = 0;
    }
    piVar3 = piVar3 + 4;
    piVar2 = piVar2 + 4;
    iVar5 = iVar5 + -1;
    piVar1 = piVar1 + 1;
  } while (-1 < iVar5);
  if (*(int *)(iVar4 + 0x241c) != 0) {
    FUN_00280100(DAT_0040f510);
    *(undefined4 *)(iVar4 + 0x241c) = 0;
  }
  if (*(int *)(iVar4 + 0x2420) != 0) {
    FUN_00280100(DAT_0040f510);
    *(undefined4 *)(iVar4 + 0x2420) = 0;
  }
  *(undefined4 *)(iVar4 + 0x2434) = 0;
  *(undefined4 *)(iVar4 + 0x2438) = 0;
  FUN_001dfe38(param_1);
  return 1;
}


// ==== FUN_001e0550 @ 001e0550 ====

void FUN_001e0550(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined8 in_a2_udw;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_150 [48];
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
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a5;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_88;
  
  auVar3 = _pextlw(0,0);
  auVar6 = _pextlw(0,auVar3._0_8_);
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = param_3;
  auVar3 = _por(in_zero_qw,auVar3);
  iVar5 = 0;
  uStack_ac = 0;
  uStack_a0 = auVar6._0_4_;
  uStack_9c = auVar6._4_4_;
  uStack_98 = auVar6._8_4_;
  uStack_94 = auVar6._12_4_;
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar2 = (int *)(param_1 + 0x30);
    iVar5 = 1;
    while ((piVar2 = piVar2 + 1, iVar5 < 8 && (*piVar2 != 0))) {
      iVar5 = iVar5 + 1;
    }
  }
  uStack_88 = *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x168);
  lVar1 = FUN_00280200(DAT_0040f510,&uStack_88,0);
  uStack_100 = (undefined4)lVar1;
  if (lVar1 != 0) {
    iVar4 = iVar5 * 0x10 + param_1;
    uStack_ac = 0x801b0f;
    uStack_a5 = DAT_0040da1e;
    uStack_120 = auVar3._0_4_;
    uStack_11c = auVar3._4_4_;
    uStack_118 = auVar3._8_4_;
    uStack_114 = auVar3._12_4_;
    uStack_110 = auVar6._0_4_;
    uStack_10c = auVar6._4_4_;
    uStack_108 = auVar6._8_4_;
    uStack_104 = auVar6._12_4_;
    uStack_fc = 0x3f800000;
    uStack_e0 = 0x42480000;
    uStack_a7 = 1;
    uStack_c0 = DAT_003bd384;
    uStack_bc = DAT_003bd388;
    uStack_b4 = DAT_003bd38c;
    uStack_a8 = 0;
    uStack_dc = 0;
    uStack_c8 = DAT_003bd384;
    uStack_c4 = DAT_003bd384;
    uStack_b8 = DAT_003bd38c;
    uStack_90 = *(undefined4 *)(iVar4 + 0x50);
    FUN_00285748(&uStack_a0,DAT_0040f510 + 0xb308,auStack_150);
    *(ulong *)(iVar4 + 0x50) = CONCAT44(uStack_9c,uStack_a0);
    *(ulong *)(iVar4 + 0x58) = CONCAT44(uStack_94,uStack_98);
    *(undefined4 *)(iVar4 + 0x50) = uStack_90;
    *(undefined4 *)(param_1 + iVar5 * 4 + 0x30) = param_2;
  }
  return;
}


// ==== FUN_001e06f0 @ 001e06f0 ====

void FUN_001e06f0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  int iVar3;
  undefined8 in_a2_udw;
  undefined1 auVar4 [16];
  undefined1 auStack_e0 [48];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_3c;
  
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = param_3;
  auVar4 = _por(in_zero_qw,auVar4);
  uStack_3c = 0;
  lVar2 = FUN_001e07f0();
  if (lVar2 != -1) {
    uStack_b0 = auVar4._0_4_;
    uStack_ac = auVar4._4_4_;
    uStack_a8 = auVar4._8_4_;
    uStack_a4 = auVar4._12_4_;
    uStack_3c = 1;
    iVar3 = (int)lVar2 * 0x10;
    iVar1 = *(int *)(iVar3 + param_1 + 0x50);
    (**(code **)(iVar1 + 0xc))(param_1 + iVar3 + 0x50 + (int)*(short *)(iVar1 + 8),auStack_e0);
  }
  return;
}


// ==== FUN_001e0768 @ 001e0768 ====

void FUN_001e0768(int param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  int iVar3;
  undefined1 in_a2_qw [16];
  undefined1 auVar4 [16];
  undefined1 auStack_50 [16];
  
  auVar4 = _por(in_zero_qw,in_a2_qw);
  lVar2 = FUN_001e07f0();
  if (lVar2 != -1) {
    auVar4 = _por(in_zero_qw,auVar4);
    FUN_001df7b0(auStack_50,auVar4._0_8_);
    iVar3 = (int)lVar2 * 0x10;
    iVar1 = *(int *)(iVar3 + param_1 + 0x50);
    (**(code **)(iVar1 + 0x1c))(param_1 + iVar3 + 0x50 + (int)*(short *)(iVar1 + 0x18));
    *(undefined4 *)(param_1 + (int)lVar2 * 4 + 0x30) = 0;
  }
  return;
}


// ==== FUN_001e07f0 @ 001e07f0 ====

int FUN_001e07f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x30);
  iVar1 = 0;
  do {
    if (*piVar2 == param_2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 8);
  return -1;
}


// ==== FUN_001e0820 @ 001e0820 ====

uint FUN_001e0820(int param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  iVar6 = 1;
  if (param_4 != 0) {
    iVar6 = 2;
  }
  lVar4 = -0x80000000;
  uVar7 = 0xffffffff;
  iVar3 = 0;
  uStack_80 = *param_2;
  uStack_78 = param_2[1];
  if (iVar6 != 0) {
    do {
      if (iVar3 == 0) {
        iVar1 = *(int *)(param_1 + 0x2424);
      }
      else {
        FUN_0028bba0(&uStack_80);
        iVar1 = *(int *)(param_1 + 0x2424);
      }
      iVar3 = iVar3 + 1;
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x24) != 0) {
        iVar1 = *(int *)(iVar1 + 0x34);
        lVar5 = lVar4;
        while( true ) {
          lVar4 = FUN_0028b948(iVar1 + uVar2 * 0x10,&uStack_80);
          if (lVar5 < lVar4) {
            iVar1 = *(int *)(param_1 + 0x2424);
            uVar7 = uVar2;
          }
          else {
            iVar1 = *(int *)(param_1 + 0x2424);
            lVar4 = lVar5;
          }
          uVar2 = uVar2 + 1;
          if (*(uint *)(iVar1 + 0x24) <= uVar2) break;
          iVar1 = *(int *)(iVar1 + 0x34);
          lVar5 = lVar4;
        }
      }
    } while (iVar3 < iVar6);
  }
  uVar2 = 0xffffffff;
  if (lVar4 != 0) {
    uVar2 = uVar7;
  }
  return uVar2;
}


// ==== FUN_001e0930 @ 001e0930 ====

void FUN_001e0930(int param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(uint *)(param_1 + 0x2410) < 0x40) {
    uVar1 = *param_2;
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined4 *)((int)param_2 + 0xc);
    iVar5 = *(uint *)(param_1 + 0x2410) * 0x50 + param_1;
    *(int *)(iVar5 + 0xd0) = (int)uVar1;
    *(int *)(iVar5 + 0xd4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(iVar5 + 0xd8) = uVar2;
    *(undefined4 *)(iVar5 + 0xdc) = uVar3;
    uVar1 = param_2[2];
    uVar2 = *(undefined4 *)(param_2 + 3);
    uVar3 = *(undefined4 *)((int)param_2 + 0x1c);
    *(int *)(iVar5 + 0xe0) = (int)uVar1;
    *(int *)(iVar5 + 0xe4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(iVar5 + 0xe8) = uVar2;
    *(undefined4 *)(iVar5 + 0xec) = uVar3;
    uVar2 = *(undefined4 *)((int)param_2 + 0x24);
    uVar3 = *(undefined4 *)(param_2 + 5);
    uVar4 = *(undefined4 *)((int)param_2 + 0x2c);
    *(undefined4 *)(iVar5 + 0xf0) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(iVar5 + 0xf4) = uVar2;
    *(undefined4 *)(iVar5 + 0xf8) = uVar3;
    *(undefined4 *)(iVar5 + 0xfc) = uVar4;
    uVar1 = param_2[6];
    uVar2 = *(undefined4 *)(param_2 + 7);
    uVar3 = *(undefined4 *)((int)param_2 + 0x3c);
    *(int *)(iVar5 + 0x100) = (int)uVar1;
    *(int *)(iVar5 + 0x104) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(iVar5 + 0x108) = uVar2;
    *(undefined4 *)(iVar5 + 0x10c) = uVar3;
    *(undefined1 *)(*(int *)(param_1 + 0x2410) * 0x50 + param_1 + 0x114) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x2410) * 0x50 + param_1 + 0x115) = param_3;
    *(int *)(param_1 + 0x2410) = *(int *)(param_1 + 0x2410) + 1;
  }
  return;
}


// ==== FUN_001e09a8 @ 001e09a8 ====

bool FUN_001e09a8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  iVar1 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_4_ < *(float *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x344);
}


// ==== FUN_001e0a30 @ 001e0a30 ====

void FUN_001e0a30(undefined8 param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  byte abStack_121 [129];
  
  uVar10 = 0;
  iVar11 = 0;
  uVar13 = 0;
  iVar8 = (int)param_1;
  pcVar7 = (char *)(iVar8 + 0x14e8);
  do {
    if (*pcVar7 == '\0') {
      abStack_121[iVar11 + 1] = (byte)uVar10;
      iVar11 = iVar11 + 1;
    }
    uVar10 = uVar10 + 1;
    pcVar7 = pcVar7 + 0x1c;
  } while (uVar10 < 0x80);
  uVar10 = 0;
  if (*(int *)(iVar8 + 0x2410) != 0) {
    do {
      piVar9 = (int *)(iVar8 + uVar10 * 0x50 + 0xd0);
      if ((char)piVar9[0x11] == '\0') {
        iVar12 = iVar11;
        if (iVar11 == 0) {
LAB_001e0c60:
          uVar5 = *(uint *)(iVar8 + 0x2410);
          iVar11 = iVar12;
        }
        else {
          iVar4 = *(int *)(*(int *)(iVar8 + 0x2424) + 0x38);
          iVar12 = *piVar9;
          uVar1 = *(ushort *)(piVar9[0x10] * 0x10 + *(int *)(*(int *)(iVar8 + 0x2424) + 0x34) + 0xc)
          ;
          iVar3 = FUN_00384720(param_1,5);
          if (iVar12 == iVar3) {
LAB_001e0b20:
            bVar2 = true;
          }
          else {
            iVar3 = FUN_00384720(param_1,6);
            bVar2 = false;
            if (iVar12 == iVar3) goto LAB_001e0b20;
          }
          if (bVar2) {
            iVar12 = piVar9[0xd];
LAB_001e0b70:
            if (iVar12 == 0) {
              piVar9[0xe] = 2;
              uVar13 = 1;
            }
          }
          else {
            iVar12 = piVar9[1];
            iVar3 = FUN_00384720(param_1,5);
            if (iVar12 == iVar3) {
LAB_001e0b5c:
              bVar2 = true;
            }
            else {
              iVar3 = FUN_00384720(param_1,6);
              bVar2 = false;
              if (iVar12 == iVar3) goto LAB_001e0b5c;
            }
            if (bVar2) {
              iVar12 = piVar9[0xd];
              goto LAB_001e0b70;
            }
          }
          iVar12 = iVar11 + -1;
          FUN_001e1248(*(undefined4 *)(DAT_0040f4d0 + 0x20),*(undefined4 *)(iVar8 + 0x242c),
                       iVar8 + (uint)abStack_121[iVar11] * 0x1c + 0x14d0,piVar9,
                       iVar4 + (uint)uVar1 * 0x30,*(undefined4 *)(iVar8 + 0x241c),uVar13);
          iVar11 = *piVar9;
          iVar4 = FUN_00384720(param_1,5);
          if (iVar11 == iVar4) {
LAB_001e0be8:
            bVar2 = true;
          }
          else {
            iVar4 = FUN_00384720(param_1,6);
            bVar2 = false;
            if (iVar11 == iVar4) goto LAB_001e0be8;
          }
          iVar11 = iVar12;
          if (bVar2) {
            uVar5 = *(uint *)(iVar8 + 0x2410);
            goto LAB_001e0c64;
          }
          iVar4 = piVar9[1];
          iVar3 = FUN_00384720(param_1,5);
          if (iVar4 == iVar3) {
LAB_001e0c24:
            bVar2 = true;
          }
          else {
            iVar3 = FUN_00384720(param_1,6);
            bVar2 = false;
            if (iVar4 == iVar3) goto LAB_001e0c24;
          }
          if (bVar2) {
            uVar5 = *(uint *)(iVar8 + 0x2410);
          }
          else if (piVar9[0xd] == 2) {
            lVar6 = FUN_001e09a8(param_1,piVar9);
            if (lVar6 != 0) {
              *(int *)(iVar8 + 0x245c) = *(int *)(iVar8 + 0x245c) + 1;
              goto LAB_001e0c60;
            }
            uVar5 = *(uint *)(iVar8 + 0x2410);
          }
          else {
            uVar5 = *(uint *)(iVar8 + 0x2410);
          }
        }
      }
      else {
        uVar5 = *(uint *)(iVar8 + 0x2410);
      }
LAB_001e0c64:
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  if (*(float *)(iVar8 + 0x2468) < *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(iVar8 + 0x2460)) {
    *(undefined4 *)(iVar8 + 0x245c) = 0;
    *(undefined4 *)(iVar8 + 0x2460) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
    iVar11 = *(int *)(iVar8 + 0x245c);
  }
  else {
    iVar11 = *(int *)(iVar8 + 0x245c);
  }
  if (*(int *)(iVar8 + 0x246c) < iVar11) {
    *(undefined4 *)(iVar8 + 0x245c) = 0;
    FUN_001ec0b8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),
                 *(undefined8 *)(*(int *)(iVar8 + 0x2410) * 0x50 + iVar8 + 0xa0));
  }
  *(undefined4 *)(iVar8 + 0x2410) = 0;
  return;
}


// ==== FUN_001e0d28 @ 001e0d28 ====

void FUN_001e0d28(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float afStack_70 [8];
  uint auStack_50 [8];
  
  pfVar4 = afStack_70;
  uVar7 = 0;
  puVar6 = auStack_50;
  puVar5 = puVar6;
  do {
    *pfVar4 = (float)DAT_003f7e10;
    uVar7 = uVar7 + 1;
    *puVar5 = 0xffffffff;
    pfVar4 = pfVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar7 < 6);
  iVar3 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x2410) != 0) {
    auVar10 = _qmtc2(*(undefined4 *)(iVar3 + 0x30));
    auVar9 = _vaddbc(in_vf0,in_vf0);
    cVar1 = *(char *)(param_1 + 0x115);
    iVar3 = param_1;
    while( true ) {
      if (cVar1 == '\0') {
        *(undefined1 *)(iVar3 + 0x114) = 0;
      }
      else {
        *(undefined1 *)(iVar3 + 0x114) = 1;
      }
      auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xf0));
      iVar2 = *(int *)(iVar3 + 0x100);
      auVar8 = _vsub(auVar10,auVar8);
      auVar8 = _vmul(auVar8,auVar8);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar9,auVar8);
      auVar8 = _qmfc2(auVar8._0_4_);
      if (auVar8._0_4_ < afStack_70[iVar2]) {
        puVar6[iVar2] = uVar7;
        afStack_70[iVar2] = auVar8._0_4_;
      }
      uVar7 = uVar7 + 1;
      if (*(uint *)(param_1 + 0x2410) <= uVar7) break;
      cVar1 = *(char *)(iVar3 + 0x165);
      iVar3 = iVar3 + 0x50;
    }
  }
  uVar7 = 0;
  while( true ) {
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    if (-1 < (int)auStack_50[0]) {
      *(undefined1 *)(auStack_50[0] * 0x50 + param_1 + 0x114) = 0;
    }
    if (5 < uVar7) break;
    auStack_50[0] = *puVar6;
  }
  return;
}


// ==== FUN_001e0e70 @ 001e0e70 ====

void FUN_001e0e70(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x2410) != 0) {
    iVar2 = param_1 + 0xd0;
    do {
      if (*(char *)(iVar2 + 0x44) == '\0') {
        if (*(char *)(iVar2 + 0x45) == '\0') {
          *(undefined1 *)(iVar2 + 0x44) = 0;
        }
        else {
          DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
          DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
          *(bool *)(iVar2 + 0x44) =
               (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x2424) + 0x34) +
                               *(int *)(iVar2 + 0x40) * 0x10 + *(int *)(iVar2 + 0x34) + 8) <=
               (DAT_0040eb30 & 0xff);
        }
        uVar1 = *(uint *)(param_1 + 0x2410);
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x2410);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x50;
    } while (uVar3 < uVar1);
  }
  return;
}


// ==== FUN_001e0f28 @ 001e0f28 ====

void FUN_001e0f28(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar4 = (int)param_1;
  uVar5 = 0;
  if (*(int *)(iVar4 + 0x2410) != 0) {
    iVar3 = iVar4 + 0xd0;
    do {
      if (*(char *)(iVar3 + 0x44) == '\0') {
        FUN_001e1100(&uStack_60,param_1,iVar3);
        uStack_70 = uStack_60;
        uStack_68 = uStack_58;
        lVar2 = FUN_001e0820(param_1,&uStack_70,iVar3,1);
        *(int *)(iVar3 + 0x40) = (int)lVar2;
        if (lVar2 < 0) {
          *(undefined1 *)(iVar3 + 0x44) = 1;
        }
        uVar1 = *(uint *)(iVar4 + 0x2410);
      }
      else {
        uVar1 = *(uint *)(iVar4 + 0x2410);
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x50;
    } while (uVar5 < uVar1);
  }
  return;
}


// ==== FUN_001e0fe8 @ 001e0fe8 ====

void FUN_001e0fe8(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = (char *)(param_1 + 0x14e8);
  iVar2 = param_1 + 0x14d0;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x2414) = 0;
  do {
    if (*pcVar1 != '\0') {
      FUN_001e16e0(iVar2);
      *(int *)(param_1 + 0x2414) = *(int *)(param_1 + 0x2414) + 1;
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x1c;
    pcVar1 = pcVar1 + 0x1c;
  } while (uVar3 < 0x80);
  return;
}


// ==== FUN_001e1068 @ 001e1068 ====

void FUN_001e1068(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  if (param_1[8] != -1) {
    if (param_1[8] == 0) {
      FUN_001deeb8(auStack_30,*param_1,*(undefined1 *)(param_1 + 9),0);
      iVar1 = param_1[8];
    }
    else {
      iVar1 = param_1[8];
    }
    param_1[8] = iVar1 + -1;
  }
  return;
}


// ==== FUN_001e10c0 @ 001e10c0 ====

void FUN_001e10c0(undefined8 param_1)

{
  FUN_001e0d28();
  FUN_001e0f28(param_1);
  FUN_001e0e70(param_1);
  FUN_001e0a30(param_1);
  return;
}


// ==== FUN_001e1100 @ 001e1100 ====

undefined8 FUN_001e1100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined7 uStack_58;
  
  FUN_0028b928(&uStack_60);
  iVar1 = *(int *)((int)param_2 + 0x2424);
  piVar3 = (int *)param_3;
  uStack_60 = *(undefined4 *)(*piVar3 * 4 + *(int *)(iVar1 + 0x30));
  uStack_5c = *(undefined4 *)(piVar3[1] * 4 + *(int *)(iVar1 + 0x30));
  uVar2 = FUN_001e11f8(piVar3[2],param_2);
  FUN_0028bb68(&uStack_60,1 << (uVar2 & 0x1f) & 0xff);
  uVar2 = FUN_001e11f8(piVar3[3],param_2);
  FUN_0028bb80(&uStack_60,1 << (uVar2 & 0x1f) & 0xff);
  uVar2 = FUN_001e1240(param_2,param_3);
  *(undefined8 *)param_1 = CONCAT44(uStack_5c,uStack_60);
  ((undefined8 *)param_1)[1] = CONCAT17((char)(1 << (uVar2 & 0x1f)),uStack_58);
  return param_1;
}


// ==== FUN_001e11f8 @ 001e11f8 ====

int FUN_001e11f8(float param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)&DAT_003bd390;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    if (param_1 <= *pfVar3) {
      return iVar2;
    }
    pfVar3 = pfVar3 + 1;
    iVar2 = iVar1;
  } while (iVar1 < 4);
  return iVar1;
}


// ==== FUN_001e1240 @ 001e1240 ====

undefined4 FUN_001e1240(undefined8 param_1,int param_2)

{
  return *(undefined4 *)(param_2 + 0x30);
}


// ==== FUN_001e1248 @ 001e1248 ====

void FUN_001e1248(undefined4 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_120 [48];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_7c;
  char cStack_78;
  undefined1 uStack_75;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  fVar4 = (float)((int)*(float *)(param_4 + 0x10) * (uint)(0.0 < *(float *)(param_4 + 0x10)));
  puVar3 = (undefined8 *)param_3;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_4 + 0x40);
  fVar4 = (float)((int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000);
  *(undefined4 *)((int)puVar3 + 0x14) = param_1;
  uStack_7c = 0;
  iStack_d0 = FUN_0027fcf8(param_6,param_5,1);
  iVar2 = (int)param_5;
  uVar1 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb30 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + DAT_0040eb34 + uVar1;
  DAT_0040eb34 = DAT_0040eb34 + uVar1 + DAT_0040eb30;
  fStack_cc = (*(float *)(iVar2 + 0x10) +
              (*(float *)(iVar2 + 0x14) - *(float *)(iVar2 + 0x10)) * fVar4) *
              (float)*(byte *)(iVar2 + *(int *)(param_4 + 0x34) + 0x28) * 0.003921569 *
              ((((float)uVar1 * 2.3283064e-10 + (float)uVar1 * 2.3283064e-10) *
                *(float *)(iVar2 + 0x18) + 1.0) - *(float *)(iVar2 + 0x18));
  fStack_bc = (*(float *)(iVar2 + 0x1c) +
              (*(float *)(iVar2 + 0x20) - *(float *)(iVar2 + 0x1c)) * fVar4) *
              ((((float)DAT_0040eb30 * 2.3283064e-10 + (float)DAT_0040eb30 * 2.3283064e-10) *
                *(float *)(iVar2 + 0x24) + 1.0) - *(float *)(iVar2 + 0x24));
  if (fStack_bc < 0.1) {
    return;
  }
  cStack_78 = *(char *)(iVar2 + 0x2b);
  if (cStack_78 == '\0') {
    cStack_78 = (char)*(undefined4 *)(&DAT_003f91c8 + *(int *)(param_4 + 0x34) * 4);
  }
  uStack_b0 = *(undefined4 *)(iVar2 + 0xc);
  uStack_f0 = *(undefined4 *)(param_4 + 0x20);
  uStack_ec = *(undefined4 *)(param_4 + 0x24);
  uStack_e8 = *(undefined4 *)(param_4 + 0x28);
  uStack_e4 = *(undefined4 *)(param_4 + 0x2c);
  uVar1 = uStack_7c | 0x4b1d;
  uStack_ac = *(undefined4 *)(iVar2 + 8);
  iVar2 = *(int *)(param_4 + 0x38);
  if (iVar2 == 1) {
    if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
      uStack_94 = DAT_003bd368;
      uStack_90 = DAT_003bd364;
      uStack_8c = DAT_003bd36c;
      uStack_75 = 1;
      uStack_88 = DAT_003bd370;
LAB_001e1608:
      uStack_7c = uStack_7c | 0x804b1d;
      uStack_98 = uStack_90;
      uStack_84 = uStack_88;
      uVar1 = uStack_7c;
    }
LAB_001e160c:
    uStack_7c = uVar1;
    *(uint *)(*(int *)(iStack_d0 + 0x18) + 0x54) = *(uint *)(*(int *)(iStack_d0 + 0x18) + 0x54) | 2;
    uVar1 = uStack_7c;
  }
  else {
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        uStack_70 = *(undefined4 *)puVar3;
        uStack_7c = uVar1;
        goto LAB_001e1620;
      }
      if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
        uStack_90 = DAT_003bd384;
        uStack_8c = DAT_003bd388;
        uStack_75 = uGpffff822e;
        uStack_94 = DAT_003bd384;
        uStack_88 = DAT_003bd38c;
        goto LAB_001e1608;
      }
      goto LAB_001e160c;
    }
    if (iVar2 == 2) {
      if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
        uStack_94 = DAT_003bd378;
        uStack_90 = DAT_003bd374;
        uStack_8c = DAT_003bd37c;
        uStack_84 = DAT_003bd380;
        uStack_75 = 1;
        uStack_98 = DAT_003bd374;
        uStack_88 = DAT_003bd380;
        uVar1 = uStack_7c | 0x804b1d;
      }
      uStack_7c = uVar1;
      *(uint *)(*(int *)(iStack_d0 + 0x18) + 0x54) =
           *(uint *)(*(int *)(iStack_d0 + 0x18) + 0x54) & 0xfffffffd;
      uVar1 = uStack_7c;
    }
  }
  uStack_7c = uVar1;
  uStack_70 = *(undefined4 *)puVar3;
LAB_001e1620:
  uStack_c8 = param_2;
  FUN_00285748(&uStack_60,DAT_0040f510 + 0xb308,auStack_120);
  *puVar3 = uStack_60;
  puVar3[1] = uStack_58;
  *(undefined4 *)puVar3 = uStack_70;
  FUN_001e16e0(param_3);
  return;
}


// ==== FUN_001e1690 @ 001e1690 ====

void FUN_001e1690(int param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x242c) = 0;
  }
  else {
    uVar1 = FUN_001ed820(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c));
    *(undefined4 *)(param_1 + 0x242c) = uVar1;
  }
  return;
}


// ==== FUN_001e16e0 @ 001e16e0 ====

void FUN_001e16e0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00281120();
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}


// ==== FUN_001e1708 @ 001e1708 ====

undefined4 FUN_001e1708(undefined8 param_1,int param_2)

{
  return (&DAT_003bd390)[param_2];
}


// ==== FUN_001e1720 @ 001e1720 ====

void FUN_001e1720(undefined8 param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  
  iVar2 = (int)param_1;
  memset(iVar2 + 0x20,0,0x28);
  *(undefined1 *)(iVar2 + 0x78) = 0;
  *(undefined1 *)(iVar2 + 0x79) = 0;
  FUN_00382348(param_1,0x2b9d6f8);
  auVar3 = _vadd(in_vf0,in_vf0);
  *(undefined4 *)(iVar2 + 0x5c) = 7;
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(iVar2 + 0x10) = auVar1;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  _sqc2(auVar3);
  return;
}


// ==== FUN_001e1788 @ 001e1788 ====

int FUN_001e1788(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 < 0x20) {
    if (param_3 < 0x1d) {
      iVar3 = *(int *)(param_2 + 0x20);
      goto LAB_001e1814;
    }
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x24)) {
      iVar2 = *(int *)(param_2 + 0x1c);
      do {
        iVar1 = *(int *)(iVar2 + 0x88);
        if ((((iVar1 == 8) && (param_3 == 0x1d)) || ((iVar1 == 0x10 && (param_3 == 0x1e)))) ||
           ((iVar3 = iVar3 + 1, iVar1 == 0x20 && (param_3 == 0x1f)))) {
          return iVar2;
        }
        iVar2 = iVar2 + 0xb0;
      } while (iVar3 < *(int *)(param_2 + 0x24));
    }
  }
  iVar3 = *(int *)(param_2 + 0x20);
LAB_001e1814:
  if (iVar3 == 0) {
    return 0;
  }
  return *(int *)(param_2 + 0x18) + (param_4 % iVar3) * 0xb0;
}


// ==== FUN_001e1840 @ 001e1840 ====

undefined8 FUN_001e1840(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(DAT_0040f4d0 + 0x5af0);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    iVar4 = 0;
    do {
      if (*(long *)(*(int *)(iVar1 + 4) + iVar4 + 0x10) == param_2) {
        uVar2 = FUN_001e1788();
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x28;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  return 0;
}


// ==== FUN_001e18b0 @ 001e18b0 ====

/* Strings referenciadas:
     "Deemphasis Attenuation"
     "AIWeapon"
     "../Export/ValueDB/Sound/ps2/AIWeapon.cfg" */

undefined4 FUN_001e18b0(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  lVar3 = FUN_001e1840();
  *(int *)(param_1 + 0x58) = (int)lVar3;
  if (lVar3 != 0) {
    iVar5 = 0;
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14) + 0x24c);
    if (0 < *(int *)((int)lVar3 + 0x90)) {
      puVar4 = (undefined4 *)(param_1 + 0x20);
      iVar6 = 0x18;
      do {
        iVar5 = iVar5 + 1;
        uVar1 = FUN_0027fcf8(uVar2,*(int *)(param_1 + 0x58) + iVar6,0);
        iVar6 = iVar6 + 8;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (iVar5 < *(int *)(*(int *)(param_1 + 0x58) + 0x90));
    }
    if (*(char *)(*(int *)(param_1 + 0x58) + 0xac) == '\0') {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      uVar1 = FUN_0027fcf8(uVar2,*(int *)(param_1 + 0x58) + 0x68,0);
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      uVar1 = FUN_0027fcf8(uVar2,*(int *)(param_1 + 0x58) + 0x70,0);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
    }
    uVar1 = FUN_0027fcf8(uVar2,*(int *)(param_1 + 0x58) + 0x78,0);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar2 = FUN_0027fcf8(uVar2,*(int *)(param_1 + 0x58) + 0x80,0);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined1 *)(param_1 + 0x79) = 0;
    if (param_3 - 0x1dU < 3) {
      *(undefined1 *)(param_1 + 0x7b) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x7b) = 0;
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (cGpffff8231 == '\0') {
      FUN_0027b950(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x74),DAT_003c09e8 + 4,
                   0x3bd3a8,0x3f7e18,0x3f7e30,PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
      cGpffff8231 = '\x01';
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 2;
  return 1;
}


// ==== FUN_001e1a70 @ 001e1a70 ====

void FUN_001e1a70(float param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)param_2;
  switch(*(undefined4 *)(iVar1 + 0x5c)) {
  case 3:
  case 4:
    if (*(float *)(iVar1 + 100) <= 0.0) {
      if (*(char *)(iVar1 + 0x7c) == '\0') {
        if (*(float *)(iVar1 + 0x68) <= 0.0) {
          FUN_001e1ea8(param_2);
          fVar2 = *(float *)(iVar1 + 0x68);
        }
        else {
          *(undefined4 *)(iVar1 + 0x5c) = 5;
          fVar2 = *(float *)(iVar1 + 0x68);
        }
      }
      else {
        fVar2 = *(float *)(iVar1 + 0x68);
      }
    }
    else {
      fVar2 = *(float *)(iVar1 + 0x68);
    }
    *(undefined1 *)(iVar1 + 0x7c) = 0;
    if (fVar2 <= 0.0) {
      *(undefined1 *)(iVar1 + 0x79) = 1;
      *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(*(int *)(iVar1 + 0x58) + 0x94);
    }
    *(float *)(iVar1 + 0x68) = *(float *)(iVar1 + 0x68) - param_1;
    *(float *)(iVar1 + 100) = *(float *)(iVar1 + 100) - param_1;
    break;
  case 5:
    if (*(float *)(iVar1 + 0x68) <= 0.0) {
      FUN_001e1ea8(param_2);
      *(undefined1 *)(iVar1 + 0x79) = 1;
      fVar2 = *(float *)(iVar1 + 0x68);
    }
    else {
      fVar2 = *(float *)(iVar1 + 0x68);
    }
    *(float *)(iVar1 + 0x68) = fVar2 - param_1;
  }
  return;
}


// ==== FUN_001e1ba0 @ 001e1ba0 ====

undefined4 FUN_001e1ba0(int param_1)

{
  memset(param_1 + 0x20,0,0x28);
  *(undefined4 *)(param_1 + 0x5c) = 7;
  return 1;
}


// ==== FUN_001e1be0 @ 001e1be0 ====

void FUN_001e1be0(undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_2 + 0x10) = (int)param_3;
    *(int *)(param_2 + 0x14) = (int)((ulong)param_3 >> 0x20);
    *(undefined4 *)(param_2 + 0x18) = in_a1_udw;
    *(undefined4 *)(param_2 + 0x1c) = in_register_0000005c;
    if (*(char *)(*(int *)(param_2 + 0x58) + 0xac) == '\0') {
      *(undefined1 *)(param_2 + 0x79) = 1;
    }
    else {
      if (*(int *)(param_2 + 0x5c) == 2) {
        FUN_001e1eb8();
      }
      *(undefined1 *)(param_2 + 0x7c) = 1;
    }
    *(undefined4 *)(param_2 + 100) = param_1;
  }
  return;
}


// ==== FUN_001e1c50 @ 001e1c50 ====

void FUN_001e1c50(float param_1,int *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 auVar1 [12];
  int iVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_140 [48];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  float fStack_ec;
  int iStack_e8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 uStack_95;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  auVar3 = _pextlw(0,0);
  iVar4 = 0;
  auVar3 = _pextlw(0,auVar3._0_8_);
  uStack_9c = 0;
  uStack_90 = auVar3._0_4_;
  uStack_8c = auVar3._4_4_;
  uStack_88 = auVar3._8_4_;
  uStack_84 = auVar3._12_4_;
  switch(param_2[0x17]) {
  case 2:
    iVar2 = param_2[0x16];
    if (*(float *)(iVar2 + 0xa4) < (float)param_2[0x1b]) {
      iVar4 = param_2[0x14];
      goto LAB_001e1da4;
    }
    if (param_5 == 0) {
      iVar4 = *param_2;
      goto LAB_001e1d08;
    }
    iVar4 = param_2[0x15];
    if (iVar4 == 0) goto switchD_001e1cc4_caseD_4;
    break;
  case 3:
    iVar2 = 2;
    if (*(float *)(param_2[0x16] + 0xa4) < (float)param_2[0x1b]) {
      iVar4 = param_2[0x14];
    }
    else {
      if (param_5 != 0) {
        iVar4 = param_2[0x15];
        iVar2 = 2;
        if (iVar4 != 0) goto LAB_001e1d9c;
      }
      iVar2 = 4;
      iVar4 = param_2[0x12];
    }
    goto LAB_001e1d9c;
  case 4:
switchD_001e1cc4_caseD_4:
    iVar4 = *param_2;
LAB_001e1d08:
    iVar4 = iVar4 * 0x10000 + (iVar4 >> 0x10) + param_2[1];
    *param_2 = iVar4;
    param_2[1] = param_2[1] + iVar4;
    iVar4 = param_2[iVar4 % *(int *)(param_2[0x16] + 0x90) + 8];
    break;
  case 6:
    iVar2 = 2;
    iVar4 = param_2[0x13];
LAB_001e1d9c:
    param_2[0x17] = iVar2;
  }
  iVar2 = param_2[0x16];
LAB_001e1da4:
  uVar5 = *(undefined4 *)(iVar2 + 0x9c);
  param_1 = param_1 * *(float *)(iVar2 + 0xa8);
  uVar6 = *(undefined4 *)(iVar2 + 0xa0);
  if (*(int *)(iVar2 + 0x8c) == 3) {
    FUN_001ea518(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),4,1);
  }
  if (param_4 != 0) {
    param_1 = param_1 * DAT_003bd3a8;
  }
  uStack_98 = *(undefined1 *)(param_2[0x16] + 0x8c);
  iStack_e8 = param_2[0x1d];
  auVar1 = *(undefined1 (*) [12])(param_2 + 4);
  iStack_104 = param_2[7];
  uStack_100 = auVar3._0_4_;
  uStack_fc = auVar3._4_4_;
  uStack_f8 = auVar3._8_4_;
  uStack_f4 = auVar3._12_4_;
  uStack_110 = auVar1._0_4_;
  uStack_10c = auVar1._4_4_;
  uStack_108 = auVar1._8_4_;
  uStack_b0 = DAT_003bd3ac;
  uStack_ac = DAT_003bd3b0;
  uStack_a4 = DAT_003bd3b4;
  uStack_95 = uGpffff8230;
  uStack_9c = 0x800b1f;
  uStack_b8 = DAT_003bd3ac;
  uStack_b4 = DAT_003bd3ac;
  uStack_a8 = DAT_003bd3b4;
  iStack_f0 = iVar4;
  fStack_ec = param_1;
  uStack_d0 = uVar6;
  uStack_cc = uVar5;
  FUN_00283e78(param_3,auStack_140,0);
  return;
}


// ==== FUN_001e1ea8 @ 001e1ea8 ====

void FUN_001e1ea8(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 6;
  return;
}


// ==== FUN_001e1eb8 @ 001e1eb8 ====

void FUN_001e1eb8(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 3;
  return;
}


// ==== FUN_001e1ec8 @ 001e1ec8 ====

undefined4 FUN_001e1ec8(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    fVar2 = (float)FUN_001e1f18();
    uVar1 = 1;
    if (fVar2 <= *(float *)(param_1 + 0x6c)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_001e1f18 @ 001e1f18 ====

undefined4 FUN_001e1f18(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xa0);
}


// ==== FUN_001e1f28 @ 001e1f28 ====

undefined4 FUN_001e1f28(void)

{
  return DAT_003bd3a8;
}


// ==== FUN_001e1f38 @ 001e1f38 ====

void FUN_001e1f38(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 0x270) = param_2;
  iVar5 = 0;
  uVar1 = FUN_00107d20(param_2 << 7);
  *(undefined4 *)(iVar4 + 0x268) = uVar1;
  uVar1 = FUN_00107d20(param_2 << 2);
  *(undefined4 *)(iVar4 + 0x26c) = uVar1;
  if (0 < *(int *)(iVar4 + 0x270)) {
    iVar2 = *(int *)(iVar4 + 0x268);
    while( true ) {
      iVar3 = iVar5 * 0x80;
      FUN_001e1720(iVar2 + iVar3);
      iVar2 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(int *)(iVar2 + *(int *)(iVar4 + 0x26c)) = *(int *)(iVar4 + 0x268) + iVar3;
      if (*(int *)(iVar4 + 0x270) <= iVar5) break;
      iVar2 = *(int *)(iVar4 + 0x268);
    }
  }
  FUN_00280a08(param_1);
  *(undefined4 *)(iVar4 + 0x248) = 0;
  *(undefined4 *)(iVar4 + 0x24c) = 0;
  *(undefined4 *)(iVar4 + 0x274) = 0;
  *(undefined4 *)(iVar4 + 0x278) = 0;
  *(undefined4 *)(iVar4 + 0x280) = 0;
  *(undefined4 *)(iVar4 + 0x264) = 0;
  *(undefined4 *)(iVar4 + 0x288) = 0;
  *(undefined4 *)(iVar4 + 0x27c) = 0;
  *(undefined1 *)(iVar4 + 0x260) = 0;
  FUN_001e2c68(param_1,0,0);
  *(undefined4 *)(iVar4 + 0x284) = 0;
  *(undefined4 *)(iVar4 + 0x244) = 1;
  *(undefined1 *)(iVar4 + 0x28c) = 0;
  return;
}


// ==== FUN_001e2020 @ 001e2020 ====

/* Strings referenciadas:
     "AIWeapon"
     "../Export/ValueDB/Sound/ps2/AIWeapon.cfg"
     "BulletBy"
     "MaxWeaponsSoundedPerFrame"
     "EnemyWeapon"
     "MaxEnemiesSoundedPerFrame"
     "Emphasis Decay Frames"
     "Distance Weighting"
     "Line of Sight Weighting"
     "Distance Precedence Threshold"
     "Duplicated Register Attenuation"
     "Unimportant Primary Firing Attenuation"
     ... */

undefined4 FUN_001e2020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_190 [256];
  
  iVar7 = (int)param_1;
  switch(*(undefined4 *)(iVar7 + 0x244)) {
  default:
    goto switchD_001e2074_caseD_0;
  case 1:
    FUN_0027b780(DAT_003c09e8 + 4,0x3bd3bc,0x3f7ee0,0x3f7ee8,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0,0);
    FUN_0027b780(DAT_003c09e8 + 4,0x3bd3c4,0x3f7ef8,0x3f7f18,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0,0);
    FUN_0027b780(DAT_003c09e8 + 4,0x3bd3c0,0x3f7f28,0x3f7f18,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0,0);
    FUN_0027b780(DAT_003c09e8 + 4,0x3bd3dc,0x3f7f48,0x3f7e30,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3c8,0x3f7f60,0x3f7e30,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3cc,0x3f7f78,0x3f7e30,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3d0,0x3f7f90,0x3f7e30,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3d4,0x3f7fb0,0x3f7e30,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3d8,0x3f7fd0,0x3f7e30,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b880(DAT_003c09e8 + 4,&gp0xffff8232,0x3f7ff8,0x3f7e30,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3e0,0x3f8018,0x3f8028,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3e4,0x3f8030,0x3f8028,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3e8,0x3f8048,0x3f8028,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3ec,0x3f8060,0x3f8028,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3f0,0x3f8070,0x3f8028,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd3f4,0x3f8088,0x3f8028,
                 PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
    *(undefined4 *)(iVar7 + 0x244) = 6;
    break;
  case 2:
    goto switchD_001e2074_caseD_2;
  case 3:
    goto switchD_001e2074_caseD_3;
  case 6:
    break;
  }
  lVar6 = FUN_00280a38(param_1,param_2,param_3);
  if (lVar6 != 0) {
    uVar4 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
    *(undefined4 *)(iVar7 + 0x248) = uVar4;
    *(undefined4 *)(iVar7 + 0x244) = 2;
switchD_001e2074_caseD_2:
    sprintf(auStack_190,0x3f80a0,*(undefined1 *)(DAT_0040f4d0 + 0x5aac),
            *(undefined1 *)(DAT_0040f4d0 + 0x5aad));
    iVar3 = DAT_0040f510;
    sVar1 = *(short *)(*(int *)(iVar7 + 0x248) + 0x20);
    uVar4 = *(undefined4 *)(*(int *)(iVar7 + 0x248) + 8);
    iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x4edb1595b69c0000);
    uVar2 = *(undefined4 *)(iVar5 + 8);
    iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x4edb1595b69c0000);
    lVar6 = FUN_0027ff78(iVar3,auStack_190,0,uVar4,(int)sVar1 << 0xb,uVar2,
                         *(undefined4 *)(iVar5 + 0xc),0x3f8c00);
    *(int *)(iVar7 + 0x24c) = (int)lVar6;
    if (lVar6 != 0) {
      FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*(undefined4 *)(iVar7 + 0x248));
      *(undefined4 *)(iVar7 + 0x248) = 0;
      *(undefined4 *)(iVar7 + 0x264) = 0;
      FUN_001e2c68(param_1,0,0);
      *(undefined4 *)(iVar7 + 0x244) = 3;
switchD_001e2074_caseD_3:
      return 1;
    }
  }
switchD_001e2074_caseD_0:
  return 0;
}


// ==== FUN_001e2540 @ 001e2540 ====

float FUN_001e2540(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  int iVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  
  auVar5 = _qmtc2(param_3);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  iVar2 = (int)param_2;
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
  auVar7 = _vsub(auVar4,auVar5);
  auVar4 = _vmul(auVar7,auVar7);
  _vaddabc(auVar4,auVar4);
  auVar5 = _vmaddbc(auVar6,auVar4);
  auVar4 = _sqc2(auVar5);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar5);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  uVar8 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar8);
  auVar5 = _qmfc2(auVar5._0_4_);
  fVar3 = auVar5._0_4_;
  *(float *)(iVar2 + 0x6c) = fVar3;
  if (*(char *)(iVar2 + 0x78) != '\0') {
    auVar5 = _sqc2(auVar7);
    lVar1 = FUN_001e1ec8(param_2);
    auVar5 = _lqc2(auVar5);
    if (lVar1 != 0) {
      if (*(float *)(iVar2 + 0x6c) <= DAT_003bd3d0) {
        if (((uint)fVar3 & 0x7f800000) < 0x37800001) {
          fVar3 = 1.0;
        }
        else {
          fVar3 = (DAT_003bd3d0 - fVar3) / DAT_003bd3d0;
        }
        fVar3 = fVar3 * DAT_003bd3c8 + DAT_003bd3cc;
      }
      else {
        auVar4 = _lqc2(auVar4);
        auVar6 = _vaddbc(in_vf0,in_vf0);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar4);
        uVar8 = _vwaitq();
        auVar5 = _vmulq(auVar5,uVar8);
        auVar4._8_4_ = in_a3_udw;
        auVar4._0_8_ = param_4;
        auVar4._12_4_ = in_register_0000007c;
        auVar4 = _lqc2(auVar4);
        auVar4 = _vmul(auVar5,auVar4);
        _vaddabc(auVar4,auVar4);
        auVar4 = _vmaddbc(auVar6,auVar4);
        auVar4 = _qmfc2(auVar4._0_4_);
        fVar3 = (auVar4._0_4_ * 0.5 + 0.5) * DAT_003bd3cc;
      }
      goto LAB_001e2690;
    }
  }
  fVar3 = 0.0;
LAB_001e2690:
  if (0x37800000 < ((uint)fVar3 & 0x7f800000)) {
    fVar3 = fVar3 + *(float *)(*(int *)(iVar2 + 0x58) + 0x98);
  }
  return fVar3;
}


// ==== FUN_001e26d0 @ 001e26d0 ====

void FUN_001e26d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  int *piVar1;
  int iVar2;
  undefined8 in_a1_udw;
  undefined1 in_a2_qw [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  
  iVar4 = 0;
  auVar7 = _por(in_zero_qw,in_a2_qw);
  iVar6 = (int)param_1;
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = param_2;
  auVar8 = _por(in_zero_qw,auVar8);
  if (0 < *(int *)(iVar6 + 0x270)) {
    iVar5 = *(int *)(iVar6 + 0x26c);
    while( true ) {
      in_a2_qw = _por(in_zero_qw,auVar8);
      auVar3 = _por(in_zero_qw,auVar7);
      iVar5 = *(int *)(iVar4 * 4 + iVar5);
      iVar4 = iVar4 + 1;
      uVar9 = FUN_001e2540(param_1,iVar5,in_a2_qw._0_8_,auVar3._0_8_);
      *(undefined4 *)(iVar5 + 0x70) = uVar9;
      if (*(int *)(iVar6 + 0x270) <= iVar4) break;
      iVar5 = *(int *)(iVar6 + 0x26c);
    }
  }
  iVar4 = *(int *)(iVar6 + 0x270);
  do {
    iVar5 = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_a2_qw._8_8_;
    in_a2_qw = auVar7 << 0x40;
    if (0 < iVar4 + -1) {
      do {
        iVar2 = iVar5 * 4;
        piVar1 = (int *)(iVar2 + *(int *)(iVar6 + 0x26c));
        iVar4 = *piVar1;
        iVar5 = iVar5 + 1;
        if (*(float *)(iVar4 + 0x70) < *(float *)(piVar1[1] + 0x70)) {
          *piVar1 = piVar1[1];
          in_a2_qw._0_8_ = 1;
          *(int *)(iVar2 + *(int *)(iVar6 + 0x26c) + 4) = iVar4;
        }
        iVar4 = *(int *)(iVar6 + 0x270);
      } while (iVar5 < iVar4 + -1);
    }
  } while (in_a2_qw._0_8_ != 0);
  return;
}


// ==== FUN_001e27d8 @ 001e27d8 ====

void FUN_001e27d8(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  char cVar1;
  long lVar2;
  int iVar3;
  undefined1 in_a1_qw [16];
  undefined1 auVar4 [16];
  undefined1 in_a2_qw [16];
  undefined1 auVar5 [16];
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  int iVar10;
  undefined1 auVar11 [16];
  long lVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iStack_c0;
  
  auVar9 = _por(in_zero_qw,in_a2_qw);
  auVar11 = _por(in_zero_qw,in_a1_qw);
  lVar12 = 0;
  uVar14 = 0;
  lVar15 = 0;
  iVar10 = (int)param_1;
  iVar16 = 0;
  if (1 < *(int *)(iVar10 + 0x244) - 1U) {
    iStack_c0 = 0;
    FUN_00280a80();
    iVar13 = 0;
    auVar4 = _por(in_zero_qw,auVar11);
    auVar5 = _por(in_zero_qw,auVar9);
    FUN_001e26d0(param_1,auVar4._0_8_,auVar5._0_8_);
    lVar17 = 1;
    if (0 < *(int *)(iVar10 + 0x270)) {
      iVar3 = *(int *)(iVar10 + 0x26c);
      do {
        fVar18 = 1.0;
        iVar3 = *(int *)(iVar13 * 4 + iVar3);
        auVar9._0_8_ = (long)iVar3;
        if (*(int *)(iVar3 + 0x5c) == 7) {
          iVar3 = *(int *)(iVar10 + 0x270);
        }
        else {
          lVar2 = FUN_001e1ec8(auVar9._0_8_);
          iVar3 = auVar9._0_4_;
          uVar8 = auVar9._0_8_;
          if (lVar2 == 0) {
            *(undefined4 *)(iVar3 + 0x5c) = 2;
            FUN_00384738(uVar8,0);
            iVar3 = *(int *)(iVar10 + 0x270);
          }
          else {
            if (iStack_c0 < DAT_003bd3c4) {
              if (*(char *)(iVar3 + 0x79) == '\0') {
                iVar7 = *(int *)(iVar3 + 0x58);
                if (*(int *)(iVar3 + 0x5c) == 4) {
                  if (lVar12 == 0) {
                    lVar12 = lVar17;
                  }
                  uVar14 = uVar14 | *(uint *)(iVar7 + 0x88);
                }
              }
              else {
                if (iVar16 < DAT_003bd3c0) {
                  iVar3 = *(int *)(iVar3 + 0x58);
                }
                else if (*(int *)(iVar3 + 0x5c) == 4) {
                  FUN_001e1ea8(uVar8);
                  iVar3 = *(int *)(auVar9._0_4_ + 0x58);
                }
                else {
                  if (*(int *)(iVar3 + 0x5c) != 6) {
                    *(undefined1 *)(iVar3 + 0x79) = 0;
                    goto LAB_001e2aec;
                  }
                  iVar3 = *(int *)(iVar3 + 0x58);
                }
                fVar21 = fVar18;
                if (((*(uint *)(iVar3 + 0x88) & uVar14) != 0) &&
                   (fVar21 = DAT_003bd3d4, cGpffff8232 == '\0')) {
                  iVar3 = *(int *)(auVar9._0_4_ + 0x5c);
                  if (iVar3 == 4) {
                    FUN_001e1ea8(auVar9._0_8_);
                    fVar21 = fVar18;
                  }
                  else {
                    fVar21 = fVar18;
                    if (iVar3 != 6) {
                      *(undefined1 *)(auVar9._0_4_ + 0x79) = 0;
                      goto LAB_001e2aec;
                    }
                  }
                }
                lVar2 = FUN_00280bc0(param_1);
                auVar11._0_8_ = lVar2;
                if (lVar2 != 0) {
                  iVar3 = auVar9._0_4_;
                  if (lVar12 == 0) {
                    if ((long)*(int *)(iVar10 + 0x264) == auVar9._0_8_) {
LAB_001e29f4:
                      *(int *)(iVar10 + 0x280) = DAT_003bd3dc;
                    }
                    else {
                      if (*(int *)(iVar10 + 0x280) == 0) {
                        *(int *)(iVar10 + 0x264) = iVar3;
                        goto LAB_001e29f4;
                      }
                      if (*(char *)(*(int *)(iVar3 + 0x58) + 0xac) == '\0') {
                        *(int *)(iVar10 + 0x264) = iVar3;
                        goto LAB_001e29f4;
                      }
                      iVar3 = DAT_003bd3dc - *(int *)(iVar10 + 0x280);
                      fVar18 = (float)DAT_003bd3dc;
                      fVar19 = (float)FUN_001e1f28(auVar9._0_8_);
                      fVar20 = (float)FUN_001e1f28(auVar9._0_8_);
                      fVar21 = fVar21 * (((float)iVar3 / fVar18) * (1.0 - fVar19) + fVar20);
                    }
                    iVar3 = *(int *)(auVar9._0_4_ + 0x58);
                  }
                  else {
                    iVar3 = *(int *)(iVar3 + 0x58);
                  }
                  iVar7 = auVar9._0_4_;
                  if (*(int *)(iVar3 + 0x8c) == 4) {
                    if (lVar12 == 0) {
                      if (lVar15 != 0) {
                        fVar21 = fVar21 * DAT_003bd3d8;
                      }
                      cVar1 = *(char *)(iVar7 + 0x7b);
                    }
                    else {
                      cVar1 = *(char *)(iVar7 + 0x7b);
                    }
                  }
                  else {
                    cVar1 = *(char *)(iVar7 + 0x7b);
                  }
                  uVar6 = 0;
                  if (cVar1 != '\0') {
                    uVar6 = *(undefined1 *)(iVar10 + 0x28c);
                  }
                  FUN_001e1c50(fVar21,auVar9._0_8_,auVar11._0_8_,lVar12,uVar6);
                  iVar3 = auVar9._0_4_;
                  if (*(char *)(iVar3 + 0x7b) == '\0') {
                    if (*(int *)(iVar3 + 0x5c) == 4) {
                      iVar16 = iVar16 + 1;
                    }
                    iVar3 = *(int *)(iVar3 + 0x58);
                  }
                  else {
                    iVar3 = *(int *)(iVar3 + 0x58);
                  }
                  if (lVar12 == 0) {
                    lVar12 = lVar17;
                  }
                  uVar14 = uVar14 | *(uint *)(iVar3 + 0x88);
                }
                iStack_c0 = iStack_c0 + 1;
                iVar7 = *(int *)(auVar9._0_4_ + 0x58);
              }
              lVar2 = lVar17;
              if (lVar15 != 0) {
                lVar2 = lVar15;
              }
              if (*(int *)(iVar7 + 0x8c) == 4) {
                lVar15 = lVar2;
              }
LAB_001e2ae8:
              *(undefined1 *)(auVar9._0_4_ + 0x79) = 0;
            }
            else {
              if (*(int *)(iVar3 + 0x5c) == 6) {
                if (*(char *)(iVar3 + 0x79) != '\0') {
                  *(undefined4 *)(iVar3 + 0x5c) = 2;
                  FUN_00384738(uVar8,0);
                }
                goto LAB_001e2ae8;
              }
              *(undefined1 *)(iVar3 + 0x79) = 0;
            }
LAB_001e2aec:
            iVar3 = *(int *)(iVar10 + 0x270);
          }
        }
        iVar13 = iVar13 + 1;
        if (iVar3 <= iVar13) break;
        iVar3 = *(int *)(iVar10 + 0x26c);
      } while( true );
    }
    if (*(int *)(iVar10 + 0x280) != 0) {
      *(int *)(iVar10 + 0x280) = *(int *)(iVar10 + 0x280) + -1;
    }
  }
  return;
}


// ==== FUN_001e2b48 @ 001e2b48 ====

undefined4 FUN_001e2b48(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  switch(*(undefined4 *)(iVar3 + 0x244)) {
  case 1:
  case 6:
    goto switchD_001e2b7c_caseD_1;
  case 2:
  case 3:
    *(undefined4 *)(iVar3 + 0x244) = 5;
  case 5:
    if (*(int *)(iVar3 + 0x24c) != 0) {
      lVar2 = FUN_00280100(DAT_0040f510);
      if (lVar2 == 0) {
        return 0;
      }
      *(undefined4 *)(iVar3 + 0x24c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x244) = 4;
switchD_001e2b7c_caseD_4:
    lVar2 = FUN_00280b10(param_1);
    if (lVar2 == 0) {
switchD_001e2b7c_default:
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x244) = 6;
switchD_001e2b7c_caseD_1:
      uVar1 = 1;
    }
    return uVar1;
  case 4:
    goto switchD_001e2b7c_caseD_4;
  default:
    goto switchD_001e2b7c_default;
  }
}


// ==== FUN_001e2be8 @ 001e2be8 ====

int FUN_001e2be8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x270)) {
    iVar1 = *(int *)(param_1 + 0x268);
    while( true ) {
      iVar1 = iVar1 + iVar2 * 0x80;
      if (*(char *)(iVar1 + 0x78) == '\0') {
        *(undefined1 *)(iVar1 + 0x78) = 1;
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 0x270) <= iVar2) break;
      iVar1 = *(int *)(param_1 + 0x268);
    }
  }
  return 0;
}


// ==== FUN_001e2c38 @ 001e2c38 ====

void FUN_001e2c38(undefined8 param_1,undefined8 param_2)

{
  FUN_001e1ba0(param_2);
  *(undefined1 *)((int)param_2 + 0x78) = 0;
  return;
}


// ==== FUN_001e2c68 @ 001e2c68 ====

void FUN_001e2c68(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00280c90(param_1,param_3);
  iVar4 = (int)param_1;
  if (param_3 == 0) {
    iVar3 = 0;
    if (0 < *(int *)(iVar4 + 0x270)) {
      iVar1 = *(int *)(iVar4 + 0x268);
      while( true ) {
        iVar2 = iVar3 * 0x80;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + iVar1 + 0x74) = 0;
        if (*(int *)(iVar4 + 0x270) <= iVar3) break;
        iVar1 = *(int *)(iVar4 + 0x268);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(iVar4 + 0x270)) {
      do {
        uVar5 = FUN_001ed820(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c));
        iVar1 = iVar3 * 0x80;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar1 + *(int *)(iVar4 + 0x268) + 0x74) = uVar5;
      } while (iVar3 < *(int *)(iVar4 + 0x270));
    }
  }
  return;
}


// ==== FUN_001e2d38 @ 001e2d38 ====

/* Strings referenciadas:
     "../Export/ValueDB/Sound/ps2/AIWeapon.cfg"
     "Enemy%d_%s"
     "Team%d_%s" */

void FUN_001e2d38(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_1;
  *(int *)(iVar6 + 0x288) = param_2;
  iVar7 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    iVar3 = *(int *)(iVar6 + 0x288);
    do {
      iVar4 = iVar7 * 0x28;
      iVar7 = iVar7 + 1;
      iVar4 = *(int *)(iVar3 + 4) + iVar4;
      iVar3 = 0;
      if (0 < *(int *)(iVar4 + 0x20)) {
        iVar5 = 0;
        iVar2 = *(int *)(iVar4 + 0x18);
        while( true ) {
          iVar2 = iVar2 + iVar5;
          iVar5 = iVar5 + 0xb0;
          uVar1 = FUN_001e3018(param_1,*(undefined4 *)(iVar2 + 0x88));
          sprintf(iVar2,0x3f8108,iVar3,uVar1);
          iVar3 = iVar3 + 1;
          FUN_0027b950(0,0,DAT_003c09e8 + 4,iVar2 + 0x94,iVar2,iVar4,
                       PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
          if (*(int *)(iVar4 + 0x20) <= iVar3) break;
          iVar2 = *(int *)(iVar4 + 0x18);
        }
      }
      iVar3 = 0;
      if (0 < *(int *)(iVar4 + 0x24)) {
        iVar5 = 0;
        iVar2 = *(int *)(iVar4 + 0x1c);
        while( true ) {
          iVar2 = iVar2 + iVar5;
          iVar5 = iVar5 + 0xb0;
          uVar1 = FUN_001e3018(param_1,*(undefined4 *)(iVar2 + 0x88));
          sprintf(iVar2,0x3f8118,iVar3,uVar1);
          iVar3 = iVar3 + 1;
          FUN_0027b950(0,0,DAT_003c09e8 + 4,iVar2 + 0x94,iVar2,iVar4,
                       PTR_s____Export_ValueDB_Sound_ps2_AIWe_003bd3b8,0,0);
          if (*(int *)(iVar4 + 0x24) <= iVar3) break;
          iVar2 = *(int *)(iVar4 + 0x1c);
        }
      }
      iVar3 = *(int *)(iVar6 + 0x288);
    } while (iVar7 < *(int *)(iVar3 + 8));
  }
  return;
}


// ==== FUN_001e2f08 @ 001e2f08 ====

void FUN_001e2f08(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x288);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    iVar2 = 0;
    while( true ) {
      iVar4 = iVar4 + 1;
      iVar2 = *(int *)(iVar1 + 4) + iVar2;
      iVar1 = 0;
      if (0 < *(int *)(iVar2 + 0x20)) {
        iVar3 = 0;
        do {
          iVar1 = iVar1 + 1;
          FUN_0027bb50(DAT_003c09e8 + 4,*(int *)(iVar2 + 0x18) + iVar3 + 0x94);
          iVar3 = iVar3 + 0xb0;
        } while (iVar1 < *(int *)(iVar2 + 0x20));
      }
      iVar1 = 0;
      if (0 < *(int *)(iVar2 + 0x24)) {
        iVar3 = 0;
        do {
          iVar1 = iVar1 + 1;
          FUN_0027bb50(DAT_003c09e8 + 4,*(int *)(iVar2 + 0x1c) + iVar3 + 0x94);
          iVar3 = iVar3 + 0xb0;
        } while (iVar1 < *(int *)(iVar2 + 0x24));
      }
      iVar1 = *(int *)(param_1 + 0x288);
      if (*(int *)(iVar1 + 8) <= iVar4) break;
      iVar2 = iVar4 * 0x28;
    }
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  return;
}


// ==== FUN_001e3018 @ 001e3018 ====

undefined8 FUN_001e3018(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x001e3034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_003f8130)[(int)param_2])();
    return uVar1;
  }
  return 0;
}


// ==== FUN_001e3098 @ 001e3098 ====

void FUN_001e3098(int param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 in_a1_udw;
  undefined1 auVar3 [16];
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
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  auVar2 = _pextlw(0,0);
  auVar3 = _pextlw(0,auVar2._0_8_);
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2 = _por(in_zero_qw,auVar2);
  uStack_7c = 0;
  uStack_70 = auVar3._0_4_;
  uStack_6c = auVar3._4_4_;
  uStack_68 = auVar3._8_4_;
  uStack_64 = auVar3._12_4_;
  lVar1 = FUN_00280200(DAT_0040f510,&UNK_003f91d8 + (DAT_003c0e04 & 3) * 8,0);
  if (lVar1 != 0) {
    uStack_60 = *(undefined4 *)(param_1 + 0x250);
    uStack_7c = 0xb0f;
    uStack_d0 = (undefined4)lVar1;
    uStack_f0 = auVar2._0_4_;
    uStack_ec = auVar2._4_4_;
    uStack_e8 = auVar2._8_4_;
    uStack_e4 = auVar2._12_4_;
    uStack_e0 = auVar3._0_4_;
    uStack_dc = auVar3._4_4_;
    uStack_d8 = auVar3._8_4_;
    uStack_d4 = auVar3._12_4_;
    uStack_cc = DAT_003bd3e0;
    uStack_ac = DAT_003bd3e4;
    uStack_b0 = DAT_003bd3e8;
    uStack_78 = 0;
    FUN_00285748(&uStack_70,DAT_0040f510 + 0xb308,auStack_120);
    *(ulong *)(param_1 + 0x250) = CONCAT44(uStack_6c,uStack_70);
    *(ulong *)(param_1 + 600) = CONCAT44(uStack_64,uStack_68);
    *(undefined1 *)(param_1 + 0x260) = 1;
    *(undefined4 *)(param_1 + 0x250) = uStack_60;
  }
  return;
}


// ==== FUN_001e31a8 @ 001e31a8 ====

void FUN_001e31a8(int param_1)

{
  if (*(char *)(param_1 + 0x260) != '\0') {
    FUN_002810a0(param_1 + 0x250);
  }
  return;
}


// ==== FUN_001e31d0 @ 001e31d0 ====

void FUN_001e31d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 in_a2_udw;
  undefined1 auVar3 [16];
  undefined1 auStack_100 [48];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = param_3;
  auVar3 = _por(in_zero_qw,auVar3);
  if (((0 < param_2) && (2 < param_2)) && (param_2 == 3)) {
    auVar2 = _pextlw(0,0);
    auVar2 = _pextlw(0,auVar2._0_8_);
    uStack_5c = 0;
    uStack_50 = auVar2._0_4_;
    uStack_4c = auVar2._4_4_;
    uStack_48 = auVar2._8_4_;
    uStack_44 = auVar2._12_4_;
    lVar1 = FUN_00280200(DAT_0040f510,&UNK_003f91f8 + (DAT_003c0e04 & 1) * 8,0);
    uStack_b0 = (undefined4)lVar1;
    if (lVar1 != 0) {
      uStack_d0 = auVar3._0_4_;
      uStack_cc = auVar3._4_4_;
      uStack_c8 = auVar3._8_4_;
      uStack_c4 = auVar3._12_4_;
      uStack_c0 = auVar2._0_4_;
      uStack_bc = auVar2._4_4_;
      uStack_b8 = auVar2._8_4_;
      uStack_b4 = auVar2._12_4_;
      uStack_ac = DAT_003bd3ec;
      uStack_8c = DAT_003bd3f0;
      uStack_90 = DAT_003bd3f4;
      uStack_5c = 0xb0f;
      uStack_58 = 0;
      FUN_00285748(&uStack_50,DAT_0040f510 + 0xb308,auStack_100);
    }
  }
  return;
}


// ==== FUN_001e32b8 @ 001e32b8 ====

void FUN_001e32b8(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 in_a1_udw;
  undefined1 auVar3 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [48];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined8 auStack_60 [2];
  
  auVar2 = _pextlw(0,0);
  auVar3 = _pextlw(0,auVar2._0_8_);
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = param_3;
  auVar2 = _por(in_zero_qw,auVar2);
  auStack_60[0] = 0x684b7d53e4b18000;
  uStack_120 = auVar3._0_4_;
  uStack_11c = auVar3._4_4_;
  uStack_118 = auVar3._8_4_;
  uStack_114 = auVar3._12_4_;
  lVar1 = FUN_00280200(DAT_0040f510,auStack_60,0);
  if (lVar1 != 0) {
    DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
    DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
    uStack_c0 = (undefined4)lVar1;
    uStack_e0 = auVar2._0_4_;
    uStack_dc = auVar2._4_4_;
    uStack_d8 = auVar2._8_4_;
    uStack_d4 = auVar2._12_4_;
    uStack_d0 = auVar3._0_4_;
    uStack_cc = auVar3._4_4_;
    uStack_c8 = auVar3._8_4_;
    uStack_c4 = auVar3._12_4_;
    uStack_68 = 8;
    fStack_bc = ((((float)DAT_0040eb30 * 2.3283064e-10 + (float)DAT_0040eb30 * 2.3283064e-10) * 0.3
                 + 1.0) - 0.3) * param_1;
    uStack_6c = 0x80f;
    FUN_00285748(&uStack_120,DAT_0040f510 + 0xb308,auStack_110);
  }
  return;
}


// ==== FUN_001e3418 @ 001e3418 ====

void FUN_001e3418(int param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


// ==== FUN_001e3430 @ 001e3430 ====

undefined4 FUN_001e3430(int param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return 1;
}


// ==== FUN_001e3448 @ 001e3448 ====

void FUN_001e3448(float param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [16];
  undefined4 uStack_3c;
  
  pauVar3 = (undefined1 (*) [16])param_2;
  if (pauVar3[2][0xc] != '\0') {
    param_1 = *(float *)(pauVar3[2] + 4) - param_1;
    uVar1 = *(undefined4 *)(pauVar3[2] + 8);
    uStack_3c = 0;
    fVar4 = (*(float *)pauVar3[2] - param_1) / *(float *)pauVar3[2];
    *(float *)(pauVar3[2] + 4) = param_1;
    lVar2 = FUN_002842e8(uVar1);
    if (lVar2 == 0) {
      FUN_001e36a0(param_2);
    }
    else {
      fVar4 = (float)((int)fVar4 * (uint)(0.0 < fVar4));
      auVar5 = _lqc2(pauVar3[1]);
      auVar7 = _qmtc2((int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000);
      auVar6 = _lqc2(*pauVar3);
      auVar5 = _vmulbc(auVar5,auVar7);
      auVar5 = _vadd(auVar6,auVar5);
      uStack_3c = 1;
      auStack_b0 = _sqc2(auVar5);
      FUN_00283c38(*(undefined4 *)(pauVar3[2] + 8),auStack_e0);
    }
  }
  return;
}


// ==== FUN_001e3500 @ 001e3500 ====

undefined4 FUN_001e3500(int param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return 1;
}


// ==== FUN_001e3518 @ 001e3518 ====

void FUN_001e3518(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined1 (*param_5) [16],undefined4 param_6,undefined4 param_7,undefined4 param_8
                 ,undefined4 param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_e0 [48];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  auVar2 = _qmtc2(param_1);
  auVar1 = _qmtc2(param_9);
  auVar3 = _qmtc2(0xbf800000);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar3 = _vmulbc(auVar1,auVar3);
  auVar1 = _qmtc2(param_3);
  auVar2 = _qmtc2(param_8);
  auVar1 = _vmulbc(auVar3,auVar1);
  auVar2 = _vsub(auVar2,auVar1);
  auVar1 = _sqc2(auVar3);
  param_5[1] = auVar1;
  auVar1 = _sqc2(auVar2);
  *param_5 = auVar1;
  *(undefined4 *)(param_5[2] + 8) = param_7;
  *(undefined4 *)(param_5[2] + 4) = param_2;
  *(undefined4 *)param_5[2] = param_2;
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  uStack_a8 = *(undefined4 *)(*param_5 + 8);
  uStack_a4 = *(undefined4 *)(*param_5 + 0xc);
  auVar1 = _pextlw(0,0);
  auVar1 = _pextlw(0,auVar1._0_8_);
  uStack_b0 = (undefined4)*(undefined8 *)*param_5;
  uStack_ac = (undefined4)((ulong)*(undefined8 *)*param_5 >> 0x20);
  uStack_a0 = auVar1._0_4_;
  uStack_9c = auVar1._4_4_;
  uStack_98 = auVar1._8_4_;
  uStack_94 = auVar1._12_4_;
  uStack_38 = 0xf;
  uStack_3c = 0x80f;
  fStack_8c = param_4 * DAT_003bd414 *
              ((((float)DAT_0040eb30 * 2.3283064e-10 + (float)DAT_0040eb30 * 2.3283064e-10) *
                DAT_003bd41c + 1.0) - DAT_003bd41c);
  uStack_90 = param_6;
  uStack_30 = uStack_a0;
  uStack_2c = uStack_9c;
  uStack_28 = uStack_98;
  uStack_24 = uStack_94;
  FUN_00283e78(*(undefined4 *)(param_5[2] + 8),auStack_e0,0);
  FUN_00283648(DAT_003bd44c,DAT_003bd44c,DAT_003bd44c,DAT_003bd450,DAT_003bd454,DAT_003bd454,
               *(undefined4 *)(param_5[2] + 8),uGpffff8233);
  param_5[2][0xc] = 1;
  return;
}


// ==== FUN_001e36a0 @ 001e36a0 ====

void FUN_001e36a0(int param_1)

{
  FUN_00284298(*(undefined4 *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ==== FUN_001e36d0 @ 001e36d0 ====

void FUN_001e36d0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1;
  iVar1 = iVar2 + 0x250;
  iVar3 = 3;
  do {
    iVar3 = iVar3 + -1;
    FUN_001e3418(iVar1);
    iVar1 = iVar1 + 0x30;
  } while (-1 < iVar3);
  FUN_00280a08(param_1);
  *(undefined4 *)(iVar2 + 0x360) = 0;
  *(undefined4 *)(iVar2 + 0x364) = 0;
  *(undefined4 *)(iVar2 + 0x36c) = 0;
  *(undefined4 *)(iVar2 + 0x370) = 0;
  *(undefined4 *)(iVar2 + 0x374) = 0;
  *(undefined4 *)(iVar2 + 0x378) = 0;
  FUN_001e4260(param_1,0,0);
  *(undefined4 *)(iVar2 + 0x35c) = 0;
  return;
}


// ==== FUN_001e3758 @ 001e3758 ====

/* Strings referenciadas:
     "Level.awd"
     "Levels\Level_%02u\%s"
     "../Export/ValueDB/Sound/ps2/BaseMix.cfg"
     "BulletBy"
     "BulletBy Pitch Variance"
     "BulletBy Gain Variance"
     "Outer Dist"
     "Ducker Dist"
     "Stereo Spread" */

undefined4 FUN_001e3758(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_100 [64];
  undefined4 uStack_c0;
  
  uStack_c0 = param_3;
  if (cGpffff8236 == '\0') {
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd418,0x3f81b8,0x3f7ee8,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd41c,0x3f81d0,0x3f7ee8,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd430,0x3f81e8,0x3f7ee8,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd434,0x3f81f8,0x3f7ee8,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd438,0x3f8208,0x3f7ee8,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    cGpffff8236 = '\x01';
  }
  iVar9 = (int)param_1;
  switch(*(undefined4 *)(iVar9 + 0x35c)) {
  case 0:
  case 6:
    uVar3 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
    *(undefined4 *)(iVar9 + 0x360) = uVar3;
    *(undefined4 *)(iVar9 + 0x35c) = 1;
  case 1:
    sprintf(auStack_100,0x3f75a8,*(undefined1 *)(DAT_0040f4d0 + 0x5aac),PTR_s_Level_awd_003bd43c);
    iVar8 = DAT_0040f510;
    sVar1 = *(short *)(*(int *)(iVar9 + 0x360) + 0x20);
    uVar3 = *(undefined4 *)(*(int *)(iVar9 + 0x360) + 8);
    iVar4 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x8e4c293508000000);
    uVar2 = *(undefined4 *)(iVar4 + 8);
    iVar4 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x8e4c293508000000);
    lVar5 = FUN_0027ff78(iVar8,auStack_100,1,uVar3,(int)sVar1 << 0xb,uVar2,
                         *(undefined4 *)(iVar4 + 0xc),0x3f8bf8);
    *(int *)(iVar9 + 0x364) = (int)lVar5;
    if (lVar5 != 0) {
      iVar6 = 0;
      FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*(undefined4 *)(iVar9 + 0x360));
      *(undefined4 *)(iVar9 + 0x360) = 0;
      iVar8 = *(int *)(DAT_0040f4d0 + 0x5aec);
      iVar4 = *(int *)(iVar8 + 0x32c);
      *(int *)(iVar9 + 0x370) = iVar4;
      if (0 < iVar4) {
        puVar7 = (undefined4 *)(iVar9 + 0x33c);
        iVar4 = iVar8 + 0x138;
        do {
          iVar6 = iVar6 + 1;
          uVar3 = FUN_0027fcf8(*(undefined4 *)(iVar9 + 0x364),iVar4,0);
          iVar4 = iVar4 + 8;
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        } while (iVar6 < *(int *)(iVar9 + 0x370));
      }
      iVar4 = iVar9 + 0x250;
      iVar6 = 3;
      do {
        iVar6 = iVar6 + -1;
        FUN_001e3430(iVar4);
        iVar4 = iVar4 + 0x30;
      } while (-1 < iVar6);
      iVar4 = *(int *)(iVar8 + 800);
      iVar6 = 0;
      *(int *)(iVar9 + 0x36c) = iVar4;
      if (0 < iVar4) {
        puVar7 = (undefined4 *)(iVar9 + 0x310);
        iVar4 = iVar8 + 0xa8;
        do {
          iVar6 = iVar6 + 1;
          uVar3 = FUN_0027fcf8(*(undefined4 *)(iVar9 + 0x364),iVar4,0);
          iVar4 = iVar4 + 8;
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        } while (iVar6 < *(int *)(iVar9 + 0x36c));
      }
      iVar4 = *(int *)(iVar8 + 0x338);
      iVar6 = 0;
      *(int *)(iVar9 + 0x374) = iVar4;
      if (0 < iVar4) {
        iVar8 = iVar8 + 0x88;
        puVar7 = (undefined4 *)(iVar9 + 0x354);
        do {
          iVar6 = iVar6 + 1;
          uVar3 = FUN_0027fcf8(*(undefined4 *)(iVar9 + 0x364),iVar8,0);
          iVar8 = iVar8 + 8;
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        } while (iVar6 < *(int *)(iVar9 + 0x374));
      }
      *(undefined4 *)(iVar9 + 0x35c) = 2;
switchD_001e38dc_caseD_2:
      FUN_00280a38(param_1,param_2,uStack_c0);
      *(undefined4 *)(iVar9 + 0x35c) = 3;
      goto switchD_001e38dc_caseD_3;
    }
  default:
    uVar3 = 0;
    break;
  case 2:
    goto switchD_001e38dc_caseD_2;
  case 3:
switchD_001e38dc_caseD_3:
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_001e3b48 @ 001e3b48 ====

void FUN_001e3b48(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  FUN_00280a80();
  iVar1 = param_1 + 0x250;
  do {
    iVar2 = iVar2 + -1;
    FUN_001e3448(*(undefined4 *)(DAT_0040f4d0 + 0x1c),iVar1);
    iVar1 = iVar1 + 0x30;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_001e3bb0 @ 001e3bb0 ====

undefined4 FUN_001e3bb0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  switch(*(undefined4 *)(iVar4 + 0x35c)) {
  case 0:
  case 6:
    goto switchD_001e3be8_caseD_0;
  case 1:
  case 2:
  case 3:
    iVar3 = iVar4 + 0x250;
    iVar5 = 3;
    do {
      if (*(char *)(iVar3 + 0x2c) != '\0') {
        FUN_001e36a0(iVar3);
      }
      iVar5 = iVar5 + -1;
      FUN_001e3500(iVar3);
      iVar3 = iVar3 + 0x30;
    } while (-1 < iVar5);
    *(undefined4 *)(iVar4 + 0x35c) = 4;
    break;
  case 4:
    break;
  case 5:
    goto switchD_001e3be8_caseD_5;
  default:
    goto switchD_001e3be8_default;
  }
  lVar2 = FUN_00280b10(param_1);
  if (lVar2 == 0) {
switchD_001e3be8_default:
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar4 + 0x35c) = 5;
switchD_001e3be8_caseD_5:
    if (*(int *)(iVar4 + 0x364) != 0) {
      lVar2 = FUN_00280100(DAT_0040f510);
      if (lVar2 == 0) goto switchD_001e3be8_default;
      *(undefined4 *)(iVar4 + 0x364) = 0;
    }
    *(undefined4 *)(iVar4 + 0x36c) = 0;
    *(undefined4 *)(iVar4 + 0x35c) = 6;
switchD_001e3be8_caseD_0:
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_001e3c90 @ 001e3c90 ====

void FUN_001e3c90(undefined4 param_1,float param_2,int param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined4 uVar1;
  undefined1 in_zero_qw [16];
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_140 [48];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  float fStack_dc;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  auVar7._8_8_ = in_a2_udw;
  auVar7._0_8_ = param_5;
  auVar7 = _por(in_zero_qw,auVar7);
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = param_4;
  auVar8 = _por(in_zero_qw,auVar8);
  iVar5 = *(int *)(param_3 + 0x378);
  *(int *)(param_3 + 0x378) = iVar5 + 1;
  uVar1 = *(undefined4 *)(param_3 + (iVar5 % *(int *)(param_3 + 0x36c)) * 4 + 0x310);
  if (*(char *)(DAT_0040f510 + 0xcb9d) == '\0') {
    uVar4 = FUN_00280bc0();
    uVar3 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
    auVar7 = _pextlw(0,0);
    auVar7 = _pextlw(0,auVar7._0_8_);
    DAT_0040eb30 = uVar3 * 0x10000 + ((int)uVar3 >> 0x10) + DAT_0040eb34 + uVar3;
    DAT_0040eb34 = DAT_0040eb34 + uVar3 + DAT_0040eb30;
    uStack_110 = auVar8._0_4_;
    uStack_10c = auVar8._4_4_;
    uStack_108 = auVar8._8_4_;
    uStack_104 = auVar8._12_4_;
    uStack_100 = auVar7._0_4_;
    uStack_fc = auVar7._4_4_;
    uStack_f8 = auVar7._8_4_;
    uStack_f4 = auVar7._12_4_;
    uStack_98 = 0xf;
    fStack_ec = param_2 * DAT_003bd414 *
                ((((float)uVar3 * 2.3283064e-10 + (float)uVar3 * 2.3283064e-10) * DAT_003bd41c + 1.0
                 ) - DAT_003bd41c);
    uStack_e8 = 0;
    uStack_9c = 0x481f;
    fStack_dc = (((float)DAT_0040eb30 * 2.3283064e-10 + (float)DAT_0040eb30 * 2.3283064e-10) *
                 DAT_003bd418 + 1.0) - DAT_003bd418;
    uStack_f0 = uVar1;
    uStack_90 = uStack_100;
    uStack_8c = uStack_fc;
    uStack_88 = uStack_f8;
    uStack_84 = uStack_f4;
    FUN_00283e78(uVar4,auStack_140,0);
    *(undefined1 *)((int)uVar4 + 0x35) = 0;
    FUN_00283648(DAT_003bd44c,DAT_003bd44c,DAT_003bd44c,DAT_003bd450,DAT_003bd454,DAT_003bd454,uVar4
                 ,uGpffff8233);
  }
  else {
    iVar5 = param_3 + 0x250;
    if (*(char *)(param_3 + 0x27c) != '\0') {
      for (iVar6 = 1; iVar5 = 0, iVar6 < 4; iVar6 = iVar6 + 1) {
        if (*(char *)(iVar6 * 0x30 + param_3 + 0x27c) == '\0') {
          iVar5 = param_3 + iVar6 * 0x30 + 0x250;
          break;
        }
      }
    }
    if (iVar5 != 0) {
      uVar2 = FUN_00280bc0();
      FUN_001e3fa0();
      auVar8 = _por(in_zero_qw,auVar8);
      auVar7 = _por(in_zero_qw,auVar7);
      FUN_001e3518(DAT_003bd440,DAT_003bd444,DAT_003bd448,param_2,iVar5,uVar1,uVar2,auVar8._0_8_,
                   auVar7._0_8_);
    }
  }
  return;
}


// ==== FUN_001e3fa0 @ 001e3fa0 ====

void FUN_001e3fa0(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x250;
  iVar1 = 3;
  do {
    if (*(int *)(param_1 + 0x28) == param_2) {
      FUN_001e36a0(param_1);
    }
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 0x30;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_001e3ff8 @ 001e3ff8 ====

void FUN_001e3ff8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
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
  undefined4 uVar12;
  
  auVar10 = _qmtc2(param_2);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _qmtc2(param_3);
  auVar8 = _vsub(auVar10,auVar11);
  auVar3 = _vmul(auVar8,auVar8);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  auVar4 = _vmove(auVar4);
  auVar3 = _qmfc2(auVar3._0_4_);
  if (2.3283064e-10 <= auVar3._0_4_) {
    auVar6 = _qmtc2(0x3f000000);
    auVar3 = _vmul(auVar8,auVar8);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar4,auVar3);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xc0));
    auVar5 = _vmulbc(auVar5,auVar6);
    auVar6 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar9 = _vmulq(auVar8,uVar12);
    _vmulq(auVar3,uVar12);
    auVar5 = _vadd(auVar6,auVar5);
    auVar3 = _vsub(auVar10,auVar5);
    auVar6 = _vmove(auVar7);
    auVar3 = _vmul(auVar3,auVar9);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar7,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    auVar3 = _qmtc2(auVar3._0_4_);
    auVar3 = _vmulbc(auVar9,auVar3);
    auVar8 = _vsub(auVar10,auVar3);
    auVar3 = _vsub(auVar11,auVar8);
    auVar3 = _vmul(auVar3,auVar3);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar4,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar3);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar3 = _vmulq(auVar3,uVar12);
    auVar3 = _qmfc2(auVar3._0_4_);
    if (0.01 <= auVar3._0_4_) {
      auVar3 = _vsub(auVar5,auVar8);
      auVar3 = _vmul(auVar3,auVar3);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar4,auVar3);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar3);
      auVar3 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar10 = _vmulq(auVar3,uVar12);
      auVar3 = _qmfc2(auVar10._0_4_);
      if (auVar3._0_4_ <= DAT_003bd430) {
        auVar3 = _qmtc2(DAT_003bd434);
        auVar3 = _vsubbc(auVar10,auVar3);
        auVar3 = _qmfc2(auVar3._0_4_);
        fVar1 = auVar3._0_4_ / (DAT_003bd430 - DAT_003bd434);
        fVar2 = DAT_003bd42c;
        if (0.0 <= fVar1) {
          fVar2 = DAT_003bd428 + (DAT_003bd424 - DAT_003bd428) * fVar1;
        }
        auVar10 = _qmfc2(auVar8._0_4_);
        auVar3 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
        auVar5 = _vsub(auVar3,auVar8);
        auVar11 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xc0));
        auVar3 = _vmul(auVar5,auVar5);
        auVar8 = _qmfc2(auVar9._0_4_);
        _vaddabc(auVar3,auVar3);
        auVar3 = _vmaddbc(auVar4,auVar3);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar3);
        auVar3 = _vaddbc(in_vf0,in_vf0);
        uVar12 = _vwaitq();
        auVar4 = _vmulq(auVar5,uVar12);
        _vmulq(auVar3,uVar12);
        auVar3 = _vmul(auVar11,auVar4);
        _vaddabc(auVar3,auVar3);
        auVar3 = _vmaddbc(auVar6,auVar3);
        auVar3 = _qmfc2(auVar3._0_4_);
        FUN_001e3c90(auVar3._0_4_ * DAT_003bd438,fVar2,param_1,auVar10._0_8_,auVar8._0_8_);
      }
    }
  }
  return;
}


// ==== FUN_001e4260 @ 001e4260 ====

void FUN_001e4260(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  FUN_00280c90(param_1,param_3);
  if (param_3 == 0) {
    *(undefined4 *)((int)param_1 + 0x37c) = 0x3f800000;
  }
  else {
    uVar1 = FUN_001ed820(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c));
    *(undefined4 *)((int)param_1 + 0x37c) = uVar1;
  }
  return;
}


// ==== FUN_001e42d0 @ 001e42d0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e42d0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_100 [48];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_9c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_55;
  undefined1 auStack_50 [16];
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x370) != 0) {
    iVar1 = *(int *)(iVar4 + 0x378);
    auVar6 = _qmtc2(0x3f000000);
    *(int *)(iVar4 + 0x378) = iVar1 + 1;
    auVar5 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xc0));
    auVar5 = _vmulbc(auVar5,auVar6);
    uStack_5c = 0;
    auVar6 = _qmtc2(*(undefined4 *)(DAT_0040f4d0 + 0xd0));
    auVar5 = _vadd(auVar6,auVar5);
    auStack_50 = _sqc2(auVar5);
    uVar2 = *(undefined4 *)(iVar4 + (iVar1 % *(int *)(iVar4 + 0x370)) * 4 + 0x33c);
    lVar3 = FUN_00280bc0();
    if (lVar3 != 0) {
      FUN_001e3fa0(param_1,lVar3);
      DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
      DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
      uStack_c0 = (undefined4)_DAT_004432a0;
      uStack_bc = (undefined4)((ulong)_DAT_004432a0 >> 0x20);
      uStack_b8 = DAT_004432a8;
      uStack_b4 = DAT_004432ac;
      uStack_d0 = auStack_50._0_4_;
      uStack_cc = auStack_50._4_4_;
      uStack_c8 = auStack_50._8_4_;
      uStack_c4 = auStack_50._12_4_;
      uStack_ac = 0x3f800000;
      uStack_58 = 0xf;
      uStack_5c = 0x80481f;
      uStack_a8 = *(undefined4 *)(iVar4 + 0x37c);
      uStack_70 = DAT_003bd458;
      uStack_6c = DAT_003bd45c;
      uStack_64 = DAT_003bd460;
      fStack_9c = (((float)DAT_0040eb30 * 2.3283064e-10 + (float)DAT_0040eb30 * 2.3283064e-10) *
                   DAT_003bd418 + 1.0) - DAT_003bd418;
      uStack_55 = DAT_0040da24;
      uStack_78 = DAT_003bd458;
      uStack_74 = DAT_003bd458;
      uStack_68 = DAT_003bd460;
      uStack_b0 = uVar2;
      FUN_00283e78(lVar3,auStack_100,0);
    }
  }
  return;
}


// ==== FUN_001e44a0 @ 001e44a0 ====

void FUN_001e44a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 uVar3;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_110 [48];
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
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_65;
  
  auVar5._8_8_ = in_a2_udw;
  auVar5._0_8_ = param_3;
  auVar5 = _por(in_zero_qw,auVar5);
  auVar6._8_8_ = in_a1_udw;
  auVar6._0_8_ = param_2;
  auVar6 = _por(in_zero_qw,auVar6);
  iVar4 = (int)param_1;
  uStack_6c = 0;
  if (*(int *)(iVar4 + 0x374) != 0) {
    iVar1 = *(int *)(iVar4 + 0x378);
    *(int *)(iVar4 + 0x378) = iVar1 + 1;
    uVar2 = *(undefined4 *)(iVar4 + (iVar1 % *(int *)(iVar4 + 0x374)) * 4 + 0x354);
    uVar3 = FUN_00280bc0();
    FUN_001e3fa0(param_1,(int)uVar3);
    uStack_b8 = *(undefined4 *)(iVar4 + 0x37c);
    uStack_e0 = auVar6._0_4_;
    uStack_dc = auVar6._4_4_;
    uStack_d8 = auVar6._8_4_;
    uStack_d4 = auVar6._12_4_;
    uStack_d0 = auVar5._0_4_;
    uStack_cc = auVar5._4_4_;
    uStack_c8 = auVar5._8_4_;
    uStack_c4 = auVar5._12_4_;
    uStack_bc = DAT_003bd420;
    uStack_68 = 0xf;
    uStack_80 = DAT_003bd464;
    uStack_7c = DAT_003bd468;
    uStack_74 = DAT_003bd46c;
    uStack_65 = DAT_0040da25;
    uStack_6c = 0x80081f;
    uStack_88 = DAT_003bd464;
    uStack_84 = DAT_003bd464;
    uStack_78 = DAT_003bd46c;
    uStack_c0 = uVar2;
    FUN_00283e78(uVar3,auStack_110,0);
  }
  return;
}


// ==== FUN_001e45a8 @ 001e45a8 ====

void FUN_001e45a8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = param_1 + 5;
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
    uVar1 = FUN_001e69e8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4));
    puVar2[-3] = uVar1;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 2);
  uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4);
  *param_1 = 1;
  param_1[0xf] = uVar1;
  return;
}


// ==== FUN_001e4650 @ 001e4650 ====

undefined4 FUN_001e4650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  iVar1 = *piVar3;
  if (iVar1 == 1) {
    piVar3[0xe] = 0;
    piVar3[0xd] = 0;
    piVar3[0xc] = 0;
    piVar3[0xb] = 0;
    piVar3[0x10] = 0;
    piVar3[10] = 0;
    piVar3[1] = 0;
    piVar3[0x11] = (int)param_2;
    piVar3[0x13] = *(int *)((int)param_2 + 0x4c);
    iVar1 = FUN_001e51c8(param_2,param_3);
    piVar3[0x12] = iVar1;
    *piVar3 = 2;
  }
  else {
    if (iVar1 < 2) {
      return 1;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_001e4700;
    }
  }
  FUN_001e4d28(param_1);
  lVar2 = FUN_001e4a78(param_1,piVar3[0xd]);
  if (lVar2 == 0) {
    return 0;
  }
  *piVar3 = 3;
LAB_001e4700:
  FUN_001e4d28(param_1);
  return 1;
}


// ==== FUN_001e4720 @ 001e4720 ====

void FUN_001e4720(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 5) {
    FUN_001e4d28();
    uVar1 = *(uint *)(param_1 + 4);
  }
  if (uVar1 < 6) {
                    /* WARNING: Could not recover jumptable at 0x001e4770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003f8260)[uVar1])();
    return;
  }
  return;
}


// ==== FUN_001e49d0 @ 001e49d0 ====

int FUN_001e49d0(int param_1,ulong param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 auStack_40 [2];
  
  iVar3 = 0;
  if (param_2 < *(byte *)(*(int *)(param_1 + 0x48) + 8)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x48) + 0xc) + (int)param_2 * 0x10;
    auStack_40[0] = 0x4dff8e5600000000;
    uVar2 = FUN_001e51e0(*(undefined4 *)(param_1 + 0x44),iVar3,auStack_40);
    puVar1 = (ushort *)FUN_0028bd80(uVar2,*(undefined4 *)(iVar3 + 8));
    puVar1[1] = (ushort)DAT_003bd470;
    DAT_003bd470 = DAT_003bd470 + 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + 0x18) + (uint)*puVar1 * 8;
  }
  return iVar3;
}


// ==== FUN_001e4a78 @ 001e4a78 ====

int * FUN_001e4a78(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(param_1 + 8);
  uVar2 = 0;
  piVar4 = piVar3;
  do {
    uVar2 = uVar2 + 1;
    if (piVar3[2] == param_2) {
      piVar1 = (int *)0x0;
      if (*(int *)(*piVar3 + 0x14) == 4) {
        piVar1 = piVar4;
      }
      return piVar1;
    }
    piVar4 = piVar4 + 4;
    piVar3 = piVar3 + 4;
  } while (uVar2 < 2);
  return (int *)0x0;
}


// ==== FUN_001e4ac8 @ 001e4ac8 ====

void FUN_001e4ac8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 4) = 3;
  return;
}


// ==== FUN_001e4ad8 @ 001e4ad8 ====

void FUN_001e4ad8(int param_1)

{
  long lVar1;
  
  if ((*(int *)(param_1 + 4) < 5) && (0 < *(int *)(param_1 + 4))) {
    lVar1 = FUN_001dd728(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0xb8));
    if (lVar1 != 0) {
      FUN_001dd6c0(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0xb8));
    }
    *(undefined4 *)(param_1 + 4) = 5;
  }
  return;
}


// ==== FUN_001e4b38 @ 001e4b38 ====

undefined4 FUN_001e4b38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = 0;
  if ((((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 2)) || (iVar1 == 4)) {
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_001e4b70 @ 001e4b70 ====

undefined4 FUN_001e4b70(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  lVar3 = FUN_001e4b38();
  if (lVar3 == 0) {
    puVar7 = (undefined4 *)param_1;
    if (puVar7[10] != 0) {
      lVar3 = FUN_001dd3e0(*(undefined4 *)(puVar7[10] + 0xb8));
      if ((lVar3 == 0) || (lVar3 = FUN_001d7cc0(*(undefined4 *)(puVar7[10] + 0xb0)), lVar3 == 0))
      goto LAB_001e4ba0;
      iVar5 = 0;
      *(undefined1 *)(puVar7[10] + 0xbc) = 0;
      do {
        iVar4 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(puVar7[10] + iVar4 + 0xb4) = 0;
      } while (iVar5 < 1);
      puVar7[10] = 0;
    }
    piVar6 = puVar7 + 2;
    puVar1 = puVar7;
    do {
      if (*piVar6 == 0) {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      else {
        lVar3 = FUN_001d7cc0();
        if (lVar3 == 0) {
          return 0;
        }
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      piVar6 = piVar6 + 4;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 4;
    } while (piVar6 < puVar7 + 10);
    FUN_001ea518(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),1,0);
    uVar2 = 1;
    *puVar7 = 1;
  }
  else {
    FUN_001e4ad8(param_1);
LAB_001e4ba0:
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_001e4ca0 @ 001e4ca0 ====

void FUN_001e4ca0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1 + 2;
  uVar2 = 0;
  do {
    if (*piVar1 != 0) {
      FUN_001e6a40(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4));
      *piVar1 = 0;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 2);
  *param_1 = 0;
  return;
}


// ==== FUN_001e4d28 @ 001e4d28 ====

void FUN_001e4d28(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  puVar3 = (uint *)param_1;
  puVar4 = puVar3 + 2;
  iVar6 = 0;
  uVar7 = 0;
  puVar5 = puVar3;
  do {
    puVar5 = puVar5 + 4;
    if ((char)puVar4[3] == '\0') {
      if ((puVar4[2] < puVar3[0xd]) || (puVar4[1] == 0)) {
        if (puVar3[0xc] < (uint)*(byte *)(puVar3[0x12] + 8)) {
          *puVar5 = puVar3[0xc];
          puVar3[0xc] = puVar3[0xc] + 1;
          uVar2 = FUN_001e49d0(param_1,*puVar5);
          *(undefined4 *)((int)puVar3 + iVar6 + 0xc) = uVar2;
        }
        else {
          *(undefined4 *)((int)puVar3 + iVar6 + 0xc) = 0;
        }
        if (*(int *)((int)puVar3 + iVar6 + 0xc) == 0) goto LAB_001e4e14;
        uVar1 = *puVar4;
      }
      else {
        uVar1 = *puVar4;
      }
      if (*(int *)(uVar1 + 0x14) != 4) {
        FUN_001d7c20(uVar1,*(undefined8 *)puVar3[0x13],*(undefined4 *)((int)puVar3 + iVar6 + 0xc),0,
                     9,1);
      }
    }
LAB_001e4e14:
    uVar7 = uVar7 + 1;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + 0x10;
    if (1 < uVar7) {
      return;
    }
  } while( true );
}


// ==== FUN_001e4e50 @ 001e4e50 ====

void FUN_001e4e50(undefined8 param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_3 == 0) {
    iVar4 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    uVar5 = *(uint *)(param_2 + 0xa4);
    uVar6 = *(undefined8 *)(iVar4 + 0x30);
    uVar7 = *(undefined4 *)(iVar4 + 0x38);
    uVar8 = *(undefined4 *)(iVar4 + 0x3c);
  }
  else {
    iVar4 = *(int *)((int)param_3 + 0x168);
    uVar5 = *(uint *)(param_2 + 0xa4);
    uVar6 = *(undefined8 *)(iVar4 + 0xa0);
    uVar7 = *(undefined4 *)(iVar4 + 0xa8);
    uVar8 = *(undefined4 *)(iVar4 + 0xac);
  }
  *(int *)(param_2 + 0x30) = (int)uVar6;
  *(int *)(param_2 + 0x34) = (int)((ulong)uVar6 >> 0x20);
  *(undefined4 *)(param_2 + 0x38) = uVar7;
  *(undefined4 *)(param_2 + 0x3c) = uVar8;
  *(uint *)(param_2 + 0xa4) = uVar5 | 1;
  uVar5 = *(uint *)(param_2 + 0xa4);
  *(undefined1 *)(param_2 + 0xa8) = 9;
  *(uint *)(param_2 + 0xa4) = uVar5 | 0xb18;
  *(undefined4 *)(param_2 + 0x74) = 0x40a00000;
  *(undefined4 *)(param_2 + 0x70) = 0x41700000;
  *(undefined4 *)(param_2 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar3 = DAT_0040da28;
  uVar2 = DAT_003bd4cc;
  uVar1 = DAT_003bd4c8;
  uVar8 = DAT_003bd4c4;
  uVar7 = DAT_003bd4c0;
  *(uint *)(param_2 + 0xa4) = uVar5 | 0x800b18;
  *(undefined4 *)(param_2 + 0x8c) = uVar8;
  *(undefined4 *)(param_2 + 0x90) = uVar7;
  *(undefined4 *)(param_2 + 0x94) = uVar1;
  *(undefined4 *)(param_2 + 0x9c) = uVar2;
  *(undefined1 *)(param_2 + 0xab) = uVar3;
  *(undefined4 *)(param_2 + 0x88) = uVar7;
  *(undefined4 *)(param_2 + 0x98) = uVar2;
  return;
}


// ==== FUN_001e4f40 @ 001e4f40 ====

void FUN_001e4f40(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}


// ==== FUN_001e4f60 @ 001e4f60 ====

/* Strings referenciadas:
     "%s.slb"
     "%s.ssh" */

undefined4 FUN_001e4f60(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  switch(*(undefined4 *)(iVar3 + 0x40)) {
  case 0:
    *(undefined4 *)(iVar3 + 0x40) = 1;
switchD_001e4f98_caseD_1:
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (!bVar1) {
      sprintf(param_1,0x3f8278,param_2);
      FUN_001093c0(DAT_0040f4c4,param_1,8,9,0x1e5168,param_1,0,0x2000000);
      uVar2 = 2;
LAB_001e5098:
      *(undefined4 *)(iVar3 + 0x40) = uVar2;
switchD_001e4f98_caseD_2:
    }
    return 0;
  case 1:
    goto switchD_001e4f98_caseD_1;
  case 2:
  case 4:
    goto switchD_001e4f98_caseD_2;
  case 3:
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    sprintf(param_1,0x3f8280);
    FUN_001093c0(DAT_0040f4c4,param_1,8,9,0x1e50e0,param_1,0,0x2000000);
    uVar2 = 4;
    goto LAB_001e5098;
  default:
    return 1;
  }
}


// ==== FUN_001e50c0 @ 001e50c0 ====

undefined4 FUN_001e50c0(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return 1;
}


// ==== FUN_001e50e0 @ 001e50e0 ====

void FUN_001e50e0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x4c) = uVar2;
  uVar2 = FUN_00109300(param_1);
  *(undefined4 *)(param_2 + 0x50) = uVar2;
  iVar1 = *(int *)(param_2 + 0x4c);
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + iVar1;
  if (0 < (long)*(short *)(iVar1 + 0x16)) {
    iVar4 = 0x10000;
    do {
      iVar3 = iVar4 >> 0x10;
      iVar4 = iVar4 + 0x10000;
    } while ((long)iVar3 < (long)*(short *)(iVar1 + 0x16));
  }
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}


// ==== FUN_001e5168 @ 001e5168 ====

void FUN_001e5168(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x44) = uVar1;
  uVar1 = FUN_00109300(param_1);
  *(undefined4 *)(param_2 + 0x48) = uVar1;
  FUN_0028bc80(*(undefined4 *)(param_2 + 0x44));
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}


// ==== FUN_001e51c8 @ 001e51c8 ====

undefined4 FUN_001e51c8(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + *(int *)(*(int *)(param_1 + 0x44) + 0x5c));
}


// ==== FUN_001e51e0 @ 001e51e0 ====

long * FUN_001e51e0(int param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(*(int *)(param_1 + 0x44) + 0x50) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x58);
    while( true ) {
      iVar1 = *(int *)(uVar5 * 4 + iVar1);
      if (*(long *)(iVar1 + 8) == *param_2) {
        uVar4 = 0;
        if (*(ushort *)(iVar1 + 0x10) != 0) {
          plVar3 = *(long **)(iVar1 + 0x14);
          do {
            uVar4 = uVar4 + 1;
            if (*plVar3 == *param_3) {
              plVar2 = (long *)0x0;
              if (*(short *)((int)plVar3 + 0xc) != 0) {
                plVar2 = plVar3;
              }
              return plVar2;
            }
            plVar3 = plVar3 + 3;
          } while (uVar4 < *(ushort *)(iVar1 + 0x10));
        }
        iVar1 = *(int *)(param_1 + 0x44);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x44);
      }
      uVar5 = uVar5 + 1;
      if (*(uint *)(iVar1 + 0x50) <= uVar5) break;
      iVar1 = *(int *)(iVar1 + 0x58);
    }
  }
  return (long *)0x0;
}


// ==== FUN_001e5270 @ 001e5270 ====

void FUN_001e5270(undefined8 param_1,int *param_2,long param_3,int param_4)

{
  int iVar1;
  
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  *param_2 = (int)(((((float)(param_4 + -1) + 1.0) - 1.5258789e-05) - 0.0) *
                   (float)DAT_0040eb30 * 2.3283064e-10 + 0.0);
  if (1 < param_3) {
    iVar1 = (int)param_3 + -1;
    do {
      iVar1 = iVar1 + -1;
      param_2[1] = (*param_2 + 1) % (int)param_3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return;
}


// ==== FUN_001e5360 @ 001e5360 ====

void FUN_001e5360(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  FUN_001e4f40(param_1 + 0x79c);
  iVar2 = param_1 + 0x68;
  FUN_001e4f40(param_1 + 0x7f0);
  do {
    FUN_001e6a98(iVar2,param_1 + 0x79c);
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x38;
  } while (-1 < iVar3);
  iVar2 = 2;
  puVar1 = (undefined4 *)(param_1 + 0x84c);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x850) = 0;
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  *(undefined4 *)(param_1 + 0x854) = 5;
  FUN_00382348(param_1 + 0x8d0,0x2b9d6f8);
  return;
}


// ==== FUN_001e5408 @ 001e5408 ====

undefined * FUN_001e5408(undefined8 param_1,int param_2)

{
  return (&PTR_DAT_003bd478)[param_2];
}


// ==== FUN_001e5420 @ 001e5420 ====

/* Strings referenciadas:
     "levels/global/speech"
     "levels\level_%02i\speech"
     "levels\level_%02i\spch_%s" */

undefined4 FUN_001e5420(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  
  piVar9 = aiStack_b0;
  iVar7 = (int)param_1;
  switch(*(undefined4 *)(iVar7 + 0x798)) {
  case 0:
    uVar8 = 0;
    *(undefined4 *)(iVar7 + 0x8ac) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x8b0) = 0x40200000;
    *(undefined4 *)(iVar7 + 0x8b4) = 0x3f000000;
    puVar4 = (undefined1 *)(iVar7 + 0x250);
    *(undefined4 *)(iVar7 + 0x794) = 0;
    *(undefined4 *)(iVar7 + 0x8a8) = 0;
    *(undefined4 *)(iVar7 + 0x8cc) = 0;
    *(undefined4 *)(iVar7 + 0x8b8) = 0;
    iVar6 = iVar7 + 0xe0;
    do {
      *puVar4 = 0;
      uVar8 = uVar8 + 1;
      FUN_001e6240(iVar6);
      puVar4 = puVar4 + 400;
      iVar6 = iVar6 + 400;
    } while (uVar8 < 3);
    FUN_001e6878(param_1);
    sprintf(iVar7 + 0x720,0x3f82e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    sprintf(iVar7 + 0x752,0x3f8308,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
            (&PTR_DAT_003bd478)[DAT_0040eae4]);
    *(undefined4 *)(iVar7 + 0x854) = 5;
    *(undefined4 *)(iVar7 + 0x798) = 1;
  case 1:
    puVar5 = (undefined4 *)(iVar7 + 0x844);
    iVar6 = 2;
    do {
      iVar6 = iVar6 + -1;
      uVar2 = FUN_00281808(DAT_0040f510 + 0xb308);
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar6);
    *(undefined4 *)(iVar7 + 0x798) = 2;
    *(undefined4 *)(iVar7 + 0x850) = *(undefined4 *)(iVar7 + 0x84c);
switchD_001e546c_caseD_2:
    lVar3 = FUN_001e4f60(iVar7 + 0x79c,PTR_s_levels_global_speech_003bd474,
                         PTR_s_levels_global_speech_003bd474);
    if (lVar3 != 0) {
      *(undefined4 *)(iVar7 + 0x798) = 3;
switchD_001e546c_caseD_3:
      lVar3 = FUN_001e4f60(iVar7 + 0x7f0,iVar7 + 0x720,iVar7 + 0x752);
      if (lVar3 != 0) {
        *(undefined4 *)(iVar7 + 0x798) = 4;
switchD_001e546c_caseD_4:
        FUN_001e45a8(iVar7 + 0x858);
        *(undefined4 *)(iVar7 + 0x798) = 5;
        goto switchD_001e546c_caseD_5;
      }
    }
    break;
  case 2:
    goto switchD_001e546c_caseD_2;
  case 3:
    goto switchD_001e546c_caseD_3;
  case 4:
    goto switchD_001e546c_caseD_4;
  case 5:
switchD_001e546c_caseD_5:
    FUN_001e6700(iVar7 + 0x5a0,0xb9363b9955b9b378);
    FUN_001e6700(iVar7 + 0x660,0xb93639605b4f4ea0);
    *(undefined4 *)(iVar7 + 0x798) = 6;
  case 6:
    FUN_001e5af8(param_1);
    if (*(int *)(iVar7 + 0x854) != 0) {
      return 0;
    }
    *(undefined4 *)(iVar7 + 0x798) = 7;
  case 7:
    uVar8 = 0;
    iVar6 = iVar7 + 0xe0;
    do {
      uVar8 = uVar8 + 1;
      FUN_001e62d0(iVar6);
      iVar6 = iVar6 + 400;
    } while (uVar8 < 3);
    *(int *)(iVar7 + 0x594) = iVar7 + 0xe0;
    *(int *)(iVar7 + 0x590) = iVar7 + 0x400;
    FUN_001e5270(param_1,aiStack_a0,1,2);
    uVar8 = 0;
    FUN_001e5270(param_1,aiStack_b0,2,4);
    iVar6 = 0;
    do {
      uVar8 = uVar8 + 1;
      *(int *)(iVar6 + *(int *)(iVar7 + 0x594) + 0x16c) = iVar7 + 0x79c;
      iVar1 = *piVar9;
      piVar9 = piVar9 + 1;
      *(undefined8 *)(iVar6 + *(int *)(iVar7 + 0x594) + 0x160) =
           *(undefined8 *)(&DAT_003f9290 + iVar1 * 8);
      *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x594) + 0x168) = 0;
      *(undefined1 *)(iVar6 + *(int *)(iVar7 + 0x594) + 0x170) = 1;
      FUN_001e62e0(*(int *)(iVar7 + 0x594) + iVar6);
      iVar6 = iVar6 + 400;
    } while (uVar8 < 2);
    *(int *)(*(int *)(iVar7 + 0x590) + 0x16c) = iVar7 + 0x79c;
    *(undefined8 *)(*(int *)(iVar7 + 0x590) + 0x160) =
         *(undefined8 *)(&DAT_003f92b0 + aiStack_a0[0] * 8);
    *(undefined4 *)(*(int *)(iVar7 + 0x590) + 0x168) = 0;
    *(undefined1 *)(*(int *)(iVar7 + 0x590) + 0x170) = 1;
    FUN_001e62e0(*(undefined4 *)(iVar7 + 0x590));
    *(undefined4 *)(iVar7 + 0x798) = 8;
  case 8:
    lVar3 = FUN_001e5f30(param_1);
    if (lVar3 == 0) {
switchD_001e546c_default:
      return 1;
    }
    *(undefined4 *)(iVar7 + 0x798) = 9;
  case 9:
    lVar3 = FUN_001e5fa8(param_1);
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = FUN_001e5fc8(param_1);
    if (lVar3 != 0) {
      *(undefined4 *)(iVar7 + 0x854) = 5;
      *(undefined4 *)(iVar7 + 0x798) = 10;
      *(undefined4 *)(iVar7 + 0x8a8) = 0;
      *(undefined4 *)(iVar7 + 0x794) = 0;
switchD_001e546c_caseD_a:
      *(undefined4 *)(iVar7 + 0x798) = 6;
      return 0;
    }
    break;
  case 10:
    goto switchD_001e546c_caseD_a;
  default:
    goto switchD_001e546c_default;
  }
  return 0;
}


// ==== FUN_001e5830 @ 001e5830 ====

void FUN_001e5830(int param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  iVar5 = 0;
  puVar6 = &DAT_003f9208;
  lVar3 = (long)*(char *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x19);
  do {
    iVar4 = 0;
    iVar2 = param_1 + 0xe0;
    pcVar1 = (char *)(param_1 + 0x250);
    do {
      if (*pcVar1 != '\0') {
        lVar3 = (long)((int)lVar3 + -1);
        FUN_001e63b8(iVar2,*puVar6,0);
        if (lVar3 == 0) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 400;
      pcVar1 = pcVar1 + 400;
    } while (iVar4 < 3);
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 < 7);
  return;
}


// ==== FUN_001e5900 @ 001e5900 ====

void FUN_001e5900(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0x798) == 8) {
    FUN_001e5af8();
    FUN_001e5dd0(param_1);
  }
  return;
}


// ==== FUN_001e5940 @ 001e5940 ====

undefined4 FUN_001e5940(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar4 = (int)param_1;
  switch(*(undefined4 *)(iVar4 + 0x798)) {
  case 0:
    goto switchD_001e5980_caseD_0;
  default:
switchD_001e5980_caseD_1:
    uVar1 = 1;
    break;
  case 2:
  case 3:
  case 4:
  case 6:
    lVar2 = FUN_001e5420(param_1);
    if (lVar2 == 0) {
      return 0;
    }
  case 8:
    lVar2 = FUN_001e4b38(iVar4 + 0x858);
    if (lVar2 != 0) {
      FUN_001e4ad8(iVar4 + 0x858);
      *(undefined4 *)(iVar4 + 0x854) = 3;
    }
    *(undefined4 *)(iVar4 + 0x798) = 0xb;
switchD_001e5980_caseD_b:
    lVar2 = FUN_001e5fa8(param_1);
    if (lVar2 != 0) {
      *(undefined4 *)(iVar4 + 0x798) = 0xc;
switchD_001e5980_caseD_c:
      lVar2 = FUN_001e5fc8(param_1);
      if (lVar2 != 0) {
        *(undefined4 *)(iVar4 + 0x798) = 0xd;
switchD_001e5980_caseD_d:
        uVar5 = 0;
        iVar3 = iVar4 + 0x5a0;
        do {
          uVar5 = uVar5 + 1;
          FUN_001e67b8(iVar3);
          iVar3 = iVar3 + 0xc0;
        } while (uVar5 < 2);
        *(undefined4 *)(iVar4 + 0x798) = 0xe;
switchD_001e5980_caseD_e:
        FUN_001e4ca0(iVar4 + 0x858);
        *(undefined4 *)(iVar4 + 0x798) = 0xf;
switchD_001e5980_caseD_f:
        lVar2 = FUN_001e50c0(iVar4 + 0x7f0);
        if (lVar2 != 0) {
          *(undefined4 *)(iVar4 + 0x798) = 0x10;
switchD_001e5980_caseD_10:
          lVar2 = FUN_001e50c0(iVar4 + 0x79c);
          uVar5 = 0;
          if (lVar2 != 0) {
            puVar6 = (undefined4 *)(iVar4 + 0x844);
            iVar3 = iVar4 + 0xe0;
            do {
              FUN_001e5d80(param_1,iVar3);
              uVar5 = uVar5 + 1;
              FUN_001e6370(iVar3);
              iVar3 = iVar3 + 400;
            } while (uVar5 < 3);
            FUN_001e6948(param_1);
            iVar3 = 2;
            do {
              iVar3 = iVar3 + -1;
              FUN_002818d0(DAT_0040f510 + 0xb308,*puVar6);
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            } while (-1 < iVar3);
            *(undefined4 *)(iVar4 + 0x850) = 0;
            *(undefined4 *)(iVar4 + 0x798) = 0;
switchD_001e5980_caseD_0:
            FUN_001e5360(param_1);
            goto switchD_001e5980_caseD_1;
          }
        }
      }
    }
    uVar1 = 0;
    break;
  case 0xb:
    goto switchD_001e5980_caseD_b;
  case 0xc:
    goto switchD_001e5980_caseD_c;
  case 0xd:
    goto switchD_001e5980_caseD_d;
  case 0xe:
    goto switchD_001e5980_caseD_e;
  case 0xf:
    goto switchD_001e5980_caseD_f;
  case 0x10:
    goto switchD_001e5980_caseD_10;
  }
  return uVar1;
}


// ==== FUN_001e5af8 @ 001e5af8 ====

void FUN_001e5af8(int param_1)

{
  long lVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int aiStack_40 [4];
  
  piVar2 = aiStack_40;
  switch(*(undefined4 *)(param_1 + 0x854)) {
  case 0:
    if (*(int *)(param_1 + 0x794) != 0) {
      if (*(int *)(param_1 + 0x8a8) == *(int *)(param_1 + 0x784)) {
        *(undefined4 *)(param_1 + 0x854) = 1;
        puVar5 = (undefined4 *)(param_1 + 0x784);
        *(int *)(param_1 + 0x794) = *(int *)(param_1 + 0x794) + -1;
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          *puVar5 = puVar5[1];
          puVar5 = puVar5 + 1;
        } while (uVar4 < 3);
      }
      else {
        *(int *)(param_1 + 0x8a8) = *(int *)(param_1 + 0x784);
        *(undefined4 *)(param_1 + 0x854) = 4;
      }
    }
    FUN_001e4720(param_1 + 0x858);
    break;
  case 1:
    iVar6 = 0;
    uVar4 = 0;
    iVar7 = param_1 + 0x5a0;
    pcVar3 = (char *)(param_1 + 0x65c);
    do {
      uVar4 = uVar4 + 1;
      if (*pcVar3 == '\0') {
        *piVar2 = iVar7;
        iVar6 = iVar6 + 1;
        piVar2 = piVar2 + 1;
      }
      iVar7 = iVar7 + 0xc0;
      pcVar3 = pcVar3 + 0xc0;
    } while (uVar4 < 2);
    if (iVar6 == 0) {
      return;
    }
    piVar2 = aiStack_40 + iVar6 + -1;
    *(undefined1 *)(*piVar2 + 0xbc) = 1;
    *(undefined4 *)(*piVar2 + 0xb4) = *(undefined4 *)(param_1 + 0x850);
    FUN_001e4ac8(param_1 + 0x858,*piVar2);
    *(undefined4 *)(param_1 + 0x854) = 2;
  case 2:
    FUN_001e4720(param_1 + 0x858);
    lVar1 = FUN_001e4b38(param_1 + 0x858);
    if (lVar1 == 0) {
      uVar4 = *(int *)(param_1 + 0x8a8) + 1;
      if (uVar4 < *(uint *)(*(int *)(param_1 + 0x834) + 0x54)) {
        *(uint *)(param_1 + 0x8a8) = uVar4;
      }
      *(undefined4 *)(param_1 + 0x854) = 4;
switchD_001e5b2c_caseD_4:
      lVar1 = FUN_001e4b70(param_1 + 0x858);
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x854) = 5;
switchD_001e5b2c_caseD_5:
        lVar1 = FUN_001e4650(param_1 + 0x858,param_1 + 0x7f0,*(undefined4 *)(param_1 + 0x8a8));
        if (lVar1 != 0) {
          *(undefined4 *)(param_1 + 0x854) = 0;
        }
      }
    }
    break;
  case 3:
    FUN_001e4b70(param_1 + 0x858);
    break;
  case 4:
    goto switchD_001e5b2c_caseD_4;
  case 5:
    goto switchD_001e5b2c_caseD_5;
  }
  return;
}


// ==== FUN_001e5cb0 @ 001e5cb0 ====

void FUN_001e5cb0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x794);
  if (uVar1 < 4) {
    *(undefined4 *)(param_1 + uVar1 * 4 + 0x784) = param_2;
    *(uint *)(param_1 + 0x794) = uVar1 + 1;
  }
  return;
}


// ==== FUN_001e5cd8 @ 001e5cd8 ====

undefined4 FUN_001e5cd8(void)

{
  return 1;
}


// ==== FUN_001e5ce0 @ 001e5ce0 ====

int FUN_001e5ce0(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = -1;
  uVar2 = FUN_00135570(param_2);
  iVar4 = 0;
  lVar3 = FUN_00138320(uVar2);
  if (0x23 < lVar3) {
    if (lVar3 < 0x26) {
      iVar4 = *(int *)(param_1 + 0x594);
      iVar1 = 2;
    }
    else if (lVar3 < 0x2b) {
      iVar4 = *(int *)(param_1 + 0x590);
      iVar1 = 1;
    }
  }
  iVar1 = FUN_0012d158(DAT_0040f4d0,0,iVar1 + -1);
  return iVar1 * 400 + iVar4;
}


// ==== FUN_001e5d80 @ 001e5d80 ====

void FUN_001e5d80(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x170) = 0;
  return;
}


// ==== FUN_001e5d88 @ 001e5d88 ====

int FUN_001e5d88(int param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = (long *)(param_1 + 0x240);
  uVar2 = 0;
  param_1 = param_1 + 0xe0;
  do {
    uVar2 = uVar2 + 1;
    if (*plVar1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 400;
    plVar1 = plVar1 + 0x32;
  } while (uVar2 < 3);
  return 0;
}


// ==== FUN_001e5dd0 @ 001e5dd0 ====

void FUN_001e5dd0(int param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int aiStack_a0 [4];
  
  piVar4 = aiStack_a0;
  iVar5 = param_1 + 0x68;
  iVar6 = 1;
  iVar7 = 0;
  do {
    iVar6 = iVar6 + -1;
    FUN_001e6e50(iVar5);
    iVar5 = iVar5 + 0x38;
  } while (-1 < iVar6);
  iVar5 = param_1 + 0x5a0;
  pcVar3 = (char *)(param_1 + 0x65c);
  iVar6 = 1;
  do {
    if (*pcVar3 == '\0') {
      *piVar4 = iVar5;
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
    }
    iVar5 = iVar5 + 0xc0;
    iVar6 = iVar6 + -1;
    pcVar3 = pcVar3 + 0xc0;
  } while (-1 < iVar6);
  piVar4 = aiStack_a0 + iVar7;
  iVar5 = param_1 + 0xe0;
  iVar6 = 2;
  do {
    if ((((*(char *)(iVar5 + 0x170) != '\0') &&
         (FUN_001e62e0(iVar5), *(char *)(iVar5 + 0x184) != '\0')) &&
        (lVar2 = FUN_001e63b8(iVar5,*(undefined8 *)(iVar5 + 0x178),*(undefined4 *)(iVar5 + 0x180)),
        lVar2 != 0)) && (iVar7 != 0)) {
      piVar4 = piVar4 + -1;
      iVar1 = *piVar4;
      iVar7 = iVar7 + -1;
      *(undefined1 *)(iVar1 + 0xbc) = 1;
      *(undefined4 *)(iVar1 + 0xb4) =
           *(undefined4 *)(param_1 + 0x844 + (((iVar1 + -0x5a0) - param_1) * -0x55555555 >> 6) * 4);
      *(undefined1 *)(iVar5 + 0x184) = 0;
      FUN_001e75f0(lVar2,iVar1);
    }
    iVar6 = iVar6 + -1;
    iVar5 = iVar5 + 400;
  } while (-1 < iVar6);
  return;
}


// ==== FUN_001e5f30 @ 001e5f30 ====

undefined4 FUN_001e5f30(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (((*(int *)(param_1 + 0x794) == 0) && (*(int *)(param_1 + 0x854) == 0)) &&
     (*(int *)(param_1 + 0x8a8) == 0)) {
    uVar4 = 0;
    iVar3 = 0;
    do {
      uVar2 = 0;
      piVar1 = (int *)(iVar3 + param_1 + 0xe0);
      do {
        uVar2 = uVar2 + 1;
        if (*piVar1 != 1) {
          return 1;
        }
        piVar1 = piVar1 + 0xb;
      } while (uVar2 < 6);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 400;
    } while (uVar4 < 3);
    return 0;
  }
  return 1;
}


// ==== FUN_001e5fa8 @ 001e5fa8 ====

bool FUN_001e5fa8(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_001e4b70(param_1 + 0x858);
  return lVar1 != 0;
}


// ==== FUN_001e5fc8 @ 001e5fc8 ====

undefined4 FUN_001e5fc8(int param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0xe0;
  uVar5 = 0;
  do {
    uVar3 = 0;
    iVar2 = param_1 + iVar4;
    do {
      lVar1 = FUN_001e7448(iVar2);
      uVar3 = uVar3 + 1;
      if (lVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 0x2c;
    } while (uVar3 < 6);
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 400;
  } while (uVar5 < 3);
  return 1;
}


// ==== FUN_001e6050 @ 001e6050 ====

void FUN_001e6050(void)

{
  return;
}


// ==== FUN_001e6058 @ 001e6058 ====

void FUN_001e6058(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_4 + 0x8b4);
  *(undefined4 *)(param_4 + 0x8b4) = param_3;
  *(undefined1 *)(param_4 + 0x8bc) = 1;
  *(undefined4 *)(param_4 + 0x8c0) = *(undefined4 *)(param_4 + 0x8ac);
  *(undefined4 *)(param_4 + 0x8c4) = *(undefined4 *)(param_4 + 0x8b0);
  *(undefined4 *)(param_4 + 0x8c8) = uVar1;
  *(undefined4 *)(param_4 + 0x8ac) = param_1;
  *(undefined4 *)(param_4 + 0x8b0) = param_2;
  return;
}


// ==== FUN_001e6088 @ 001e6088 ====

void FUN_001e6088(int param_1)

{
  *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_1 + 0x8c0);
  *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(param_1 + 0x8c4);
  *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_1 + 0x8c8);
  *(undefined1 *)(param_1 + 0x8bc) = 0;
  return;
}


// ==== FUN_001e60a8 @ 001e60a8 ====

undefined4 FUN_001e60a8(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = 0;
  plVar2 = &DAT_003f9208;
  do {
    iVar1 = iVar1 + 1;
    if (param_2 == *plVar2) {
      return 1;
    }
    plVar2 = plVar2 + 1;
  } while (iVar1 < 7);
  return 0;
}


// ==== FUN_001e60e0 @ 001e60e0 ====

undefined4 FUN_001e60e0(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = 0;
  plVar2 = &DAT_003f9270;
  do {
    iVar1 = iVar1 + 1;
    if (param_2 == *plVar2) {
      return 1;
    }
    plVar2 = plVar2 + 1;
  } while (iVar1 < 4);
  return 0;
}


