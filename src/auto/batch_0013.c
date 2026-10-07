// ==== FUN_0018f700 @ 0018f700 ====

undefined8 FUN_0018f700(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4a;
  if (*(char *)(param_1 + 0x14) != '\0') {
    uVar1 = FUN_0018e5b8();
  }
  return uVar1;
}


// ==== FUN_0018f730 @ 0018f730 ====

void FUN_0018f730(void)

{
  FUN_0018e5e0();
  return;
}


// ==== FUN_0018f750 @ 0018f750 ====

void FUN_0018f750(int param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = FUN_001809f0(*(int *)(param_1 + 4) + 0xb30);
  if (lVar2 == 0) {
    FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  }
  else {
    iVar1 = FUN_001809f0(*(int *)(param_1 + 4) + 0xb30);
    auVar3 = _pextlw((long)*(int *)(iVar1 + 0xc),(long)*(int *)(iVar1 + 4));
    _pextlw((long)*(int *)(iVar1 + 8),auVar3._0_8_);
  }
  return;
}


// ==== FUN_0018f7c8 @ 0018f7c8 ====

void FUN_0018f7c8(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  FUN_0018e338();
  piVar6 = (int *)param_1;
  iVar7 = *(int *)(*piVar6 + 0x28);
  if (*(char *)((int)piVar6 + 0x3f) == '\0') {
    iVar5 = piVar6[1];
    if (*(char *)(iVar7 + 0x7c) == '\0') goto LAB_0018f84c;
    lVar3 = FUN_00180bc0(iVar5 + 0xb30);
    uVar4 = 0;
    if ((lVar3 != 0) || (bVar1 = false, *(char *)(piVar6[1] + 0x111) != '\0')) {
      uVar4 = 1;
      bVar1 = true;
    }
    *(undefined1 *)((int)piVar6 + 0x3f) = uVar4;
    if (bVar1) {
      FUN_0016aba8(piVar6[1] + 0x1f90,*(undefined4 *)(iVar7 + 0x20),*(undefined1 *)(iVar7 + 0x7c),
                   *(undefined4 *)(piVar6[1] + 0x7c));
    }
  }
  iVar5 = piVar6[1];
LAB_0018f84c:
  cVar2 = FUN_00176f00(iVar5 + 0x1fcc);
  if (cVar2 == '\0') {
    iVar5 = piVar6[1];
  }
  else {
    if (*(byte *)((int)piVar6 + 0x3d) < 2) {
      iVar5 = piVar6[10];
    }
    else {
      FUN_00190020(param_1);
      iVar5 = piVar6[10];
    }
    if (iVar5 == 0) {
      iVar5 = piVar6[1];
    }
    else {
      FUN_0018fc18(param_1);
      iVar5 = piVar6[1];
    }
  }
  lVar3 = FUN_00188f10(iVar5 + 0x150);
  if (lVar3 == 0) {
    if (*(float *)(DAT_0040f4d0 + 0x20) - (float)piVar6[0xd] <= *(float *)(iVar7 + 0x78)) {
      return;
    }
    FUN_0016aba8(piVar6[1] + 0x1f90,*(undefined4 *)(iVar7 + 0x3c),*(undefined1 *)(iVar7 + 0x83),
                 *(undefined4 *)(piVar6[1] + 0x7c));
    iVar7 = *(int *)(DAT_0040f4d0 + 0x20);
  }
  else {
    iVar7 = *(int *)(DAT_0040f4d0 + 0x20);
  }
  piVar6[0xd] = iVar7;
  return;
}


// ==== FUN_0018f910 @ 0018f910 ====

void FUN_0018f910(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  FUN_0018e458();
  iVar8 = (int)param_1;
  lVar4 = FUN_0018ddd8(*(int *)(iVar8 + 4) + 0xc94);
  if (lVar4 != 0) {
    *(undefined4 *)(iVar8 + 8) = 0;
  }
  *(int *)(iVar8 + 0x38) = param_2;
  iVar5 = 4;
  puVar3 = (undefined4 *)(iVar8 + 0x24);
  iVar2 = *(int *)(param_2 + 0x28);
  do {
    *puVar3 = 0;
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar5);
  *(undefined4 *)(iVar8 + 0x28) = 0;
  *(undefined4 *)(iVar8 + 0x2c) = 0;
  *(undefined1 *)(iVar8 + 0x3c) = 0;
  *(undefined1 *)(iVar8 + 0x3d) = 0;
  if (*(char *)(iVar2 + 0x85) == '\0') {
    cVar1 = *(char *)(iVar2 + 0x86);
  }
  else {
    if (*(char *)(iVar2 + 0x8a) != '\0') {
      uVar7 = FUN_00169898(DAT_0040f4f4,**(undefined8 **)(iVar2 + 0x44));
      *(undefined4 *)(iVar8 + 0x14) = uVar7;
      *(char *)(iVar8 + 0x3d) = *(char *)(iVar8 + 0x3d) + '\x01';
    }
    cVar1 = *(char *)(iVar2 + 0x86);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(iVar2 + 0x87);
  }
  else {
    if (*(char *)(iVar2 + 0x8b) != '\0') {
      uVar7 = FUN_00169898(DAT_0040f4f4,**(undefined8 **)(iVar2 + 0x48));
      *(undefined4 *)(iVar8 + 0x18) = uVar7;
      *(char *)(iVar8 + 0x3d) = *(char *)(iVar8 + 0x3d) + '\x01';
    }
    cVar1 = *(char *)(iVar2 + 0x87);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(iVar2 + 0x88);
  }
  else {
    if (*(char *)(iVar2 + 0x8c) != '\0') {
      uVar7 = FUN_00169898(DAT_0040f4f4,**(undefined8 **)(iVar2 + 0x4c));
      *(undefined4 *)(iVar8 + 0x1c) = uVar7;
      *(char *)(iVar8 + 0x3d) = *(char *)(iVar8 + 0x3d) + '\x01';
    }
    cVar1 = *(char *)(iVar2 + 0x88);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(iVar2 + 0x89);
  }
  else {
    if (*(char *)(iVar2 + 0x8d) != '\0') {
      uVar7 = FUN_00169898(DAT_0040f4f4,**(undefined8 **)(iVar2 + 0x50));
      *(undefined4 *)(iVar8 + 0x20) = uVar7;
      *(char *)(iVar8 + 0x3d) = *(char *)(iVar8 + 0x3d) + '\x01';
    }
    cVar1 = *(char *)(iVar2 + 0x89);
  }
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)(iVar2 + 0x10);
    uVar7 = *(undefined4 *)(iVar2 + 0x1c);
  }
  else {
    if (*(char *)(iVar2 + 0x8e) != '\0') {
      uVar7 = FUN_00169898(DAT_0040f4f4,**(undefined8 **)(iVar2 + 0x54));
      *(undefined4 *)(iVar8 + 0x24) = uVar7;
      *(char *)(iVar8 + 0x3d) = *(char *)(iVar8 + 0x3d) + '\x01';
    }
    uVar6 = *(undefined8 *)(iVar2 + 0x10);
    uVar7 = *(undefined4 *)(iVar2 + 0x1c);
  }
  FUN_00180aa0(uVar7,*(int *)(iVar8 + 4) + 0xb30,uVar6,2);
  FUN_00180b38(*(undefined4 *)(iVar2 + 0x6c),*(int *)(iVar8 + 4) + 0xb30);
  *(undefined4 *)(*(int *)(iVar8 + 4) + 0x640) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined1 *)(iVar8 + 0x3f) = 0;
  *(undefined1 *)(iVar8 + 0x40) = 0;
  uVar7 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  *(undefined1 *)(iVar8 + 0x3e) = 5;
  *(undefined4 *)(iVar8 + 0x34) = uVar7;
  FUN_00173690(iVar8 + 0x30);
  if (*(byte *)(iVar8 + 0x3d) < 2) {
    FUN_001901e0(param_1,0);
  }
  else {
    FUN_00190020(param_1);
  }
  return;
}


// ==== FUN_0018fb40 @ 0018fb40 ====

void FUN_0018fb40(undefined8 param_1)

{
  int iVar1;
  
  FUN_0018e488();
  iVar1 = (int)param_1;
  FUN_00190380(param_1,*(undefined4 *)(iVar1 + 0x2c),*(undefined1 *)(iVar1 + 0x3c));
  FUN_0018d698(*(int *)(iVar1 + 4) + 0xd10,0);
  return;
}


// ==== FUN_0018fb88 @ 0018fb88 ====

void FUN_0018fb88(int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = 1 << (*(uint *)(param_2 + 0x380) & 0x1f);
  if ((((*(int *)(param_2 + 0x3a4) != *(int *)(*(int *)(iVar1 + 0x7c) + 0x3a4)) &&
       (*(int *)(param_2 + 0x38c) == 0)) && ((*(uint *)(iVar1 + 0x274) & uVar3) != uVar3)) &&
     (lVar2 = FUN_00185c38(iVar1 + 0x6f0), lVar2 != 0)) {
    FUN_001897e8(*(int *)(param_1 + 4) + 0x150,*(undefined4 *)(param_2 + 0x380),0);
  }
  return;
}


// ==== FUN_0018fc18 @ 0018fc18 ====

void FUN_0018fc18(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0x2b00;
  FUN_0018fb88(param_1,DAT_0040f4d0 + 0x30);
  iVar3 = 0xf;
  do {
    iVar3 = iVar3 + -1;
    iVar1 = DAT_0040f4d4 + iVar4;
    iVar4 = iVar4 + 0x1fd0;
    if ((*(char *)(iVar2 + DAT_0040f4d4 + 0x2b78) != '\0') && (iVar1 != *(int *)((int)param_1 + 4)))
    {
      FUN_0018fb88(param_1,*(undefined4 *)(iVar2 + DAT_0040f4d4 + 0x2b7c));
    }
    iVar2 = iVar2 + 0x1fd0;
  } while (-1 < iVar3);
  return;
}


// ==== FUN_0018fcb8 @ 0018fcb8 ====

undefined4 FUN_0018fcb8(int *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar3 = (undefined8 *)FUN_00179258(DAT_0040f4d4 + 0xfa8);
  uStack_30 = *puVar3;
  plStack_28 = *(long **)(puVar3 + 1);
  iVar6 = *(int *)(*param_1 + 0x28);
  lVar5 = FUN_00178f18(&uStack_30);
  if (lVar5 != 0) {
    uVar4 = (uint)*(byte *)(iVar6 + 0x84);
    bVar2 = false;
    if (uVar4 != 0) {
      if (uVar4 != 0) {
        plVar1 = *(long **)(iVar6 + 0x40);
        if (*plVar1 == *plStack_28) {
LAB_0018fd60:
          bVar2 = true;
        }
        else {
          for (iVar6 = 1; iVar6 < (int)uVar4; iVar6 = iVar6 + 1) {
            if (plVar1[iVar6] == *plStack_28) goto LAB_0018fd60;
          }
        }
      }
      if (!bVar2) {
        return 0;
      }
    }
  }
  return 1;
}


// ==== FUN_0018fd80 @ 0018fd80 ====

undefined4 FUN_0018fd80(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar2 = FUN_0018e7c0();
  if ((lVar2 != 0) && (param_2 != -1)) {
    puVar1 = (undefined8 *)FUN_00179258(DAT_0040f4d4 + 0xfa8,param_2);
    uStack_40 = *puVar1;
    uStack_38 = *(undefined4 *)(puVar1 + 1);
    lVar2 = FUN_00178f18(&uStack_40);
    if (lVar2 == 0) {
      return 1;
    }
    if (*(int *)((int)param_1 + 0x28) == 0) {
      return 1;
    }
    puVar1 = (undefined8 *)FUN_00178d30(&uStack_40);
    lVar2 = FUN_0018e680(param_1,*puVar1,*(undefined4 *)((int)param_1 + 0x28));
    if (lVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0018fe30 @ 0018fe30 ====

void FUN_0018fe30(int param_1)

{
  FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  return;
}


// ==== FUN_0018fe58 @ 0018fe58 ====

undefined8 FUN_0018fe58(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0018fe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_003f5750)[(int)param_2])();
    return uVar1;
  }
  return 0;
}


// ==== FUN_0018ff38 @ 0018ff38 ====

undefined4 FUN_0018ff38(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)((int)param_2 + 0x24) == 3) &&
     ((*(uint *)((int)param_2 + 100) &
      1 << (*(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x7c) + 0x380) & 0x1f)) != 0)) {
    iVar1 = FUN_00177e98(param_2);
    uVar2 = 0x3f800000;
    if (iVar1 == *(int *)(param_1 + 4)) {
      uVar2 = 0x3f000000;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0018ffc0 @ 0018ffc0 ====

undefined8 FUN_0018ffc0(int param_1,int *param_2)

{
  FUN_0018e4c0();
  if (*param_2 == 2) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x84))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x80),3);
  }
  return 0;
}


// ==== FUN_00190020 @ 00190020 ====

/* Strings referenciadas:
     "Message to Level Designer : Never give a teammate a firesector with multiple volumes! Only the
   first will be used " */

void FUN_00190020(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  uint uVar15;
  uint uVar14;
  
  iVar12 = -1;
  uVar14 = 5;
  uVar13 = 5;
  iVar8 = (int)param_1;
  lVar6 = FUN_0018ddd8(*(int *)(iVar8 + 4) + 0xc94);
  if (lVar6 != 0) {
    FUN_001a4f70(0x3f5768);
    return;
  }
  iVar11 = iVar8 + 0x14;
  iVar10 = iVar8 + 0x30;
  lVar6 = FUN_00188f20(*(int *)(iVar8 + 4) + 0x150);
  bVar2 = false;
  if (lVar6 != 0) {
    uVar9 = 0;
    iVar4 = 0;
    do {
      iVar7 = 0;
      iVar5 = iVar12;
      uVar15 = uVar14;
      if (*(int *)(iVar11 + iVar4) == 0) {
LAB_001900f0:
        iVar12 = iVar5;
        uVar14 = uVar15;
      }
      else {
        lVar6 = FUN_00188c38(*(int *)(iVar8 + 4) + 0x150);
        if (lVar6 != 0) {
          iVar7 = 0x32;
        }
        iVar5 = FUN_001893b8(*(int *)(iVar8 + 4) + 0x150,*(int *)(iVar11 + iVar4));
        iVar5 = iVar7 + iVar5;
        uVar15 = uVar9;
        if (iVar12 < iVar5) goto LAB_001900f0;
      }
      uVar13 = (undefined1)uVar14;
      uVar9 = uVar9 + 1 & 0xff;
      iVar4 = uVar9 << 2;
    } while (uVar9 < 5);
    bVar2 = uVar14 < 5;
  }
  if ((bVar2) && (0 < iVar12)) {
    FUN_00173640(0x41a00000,iVar10);
    *(undefined1 *)(iVar8 + 0x3e) = uVar13;
  }
  else {
    lVar6 = FUN_00173610(iVar10);
    if (lVar6 == 0) {
      bVar1 = *(byte *)(iVar8 + 0x3e);
      goto LAB_0019018c;
    }
    FUN_00173640(0x41a00000,iVar10);
    cVar3 = *(char *)(iVar8 + 0x3e);
    while( true ) {
      *(byte *)(iVar8 + 0x3e) = cVar3 + 1U;
      if (4 < (byte)(cVar3 + 1U)) {
        *(undefined1 *)(iVar8 + 0x3e) = 0;
      }
      if (*(int *)(iVar11 + (uint)*(byte *)(iVar8 + 0x3e) * 4) != 0) break;
      cVar3 = *(char *)(iVar8 + 0x3e);
    }
  }
  bVar1 = *(byte *)(iVar8 + 0x3e);
LAB_0019018c:
  if (*(int *)(iVar11 + (uint)bVar1 * 4) != *(int *)(iVar8 + 0x28)) {
    FUN_001901e0(param_1);
  }
  return;
}


// ==== FUN_001901e0 @ 001901e0 ====

void FUN_001901e0(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar4 + 0x38) + 0x28);
  FUN_00190380(param_1,*(undefined4 *)(iVar4 + 0x2c),*(undefined1 *)(iVar4 + 0x3c));
  switch(param_2 & 0xff) {
  case 0:
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar1 + 0x58);
    uVar3 = *(undefined1 *)(iVar1 + 0x8a);
    break;
  case 1:
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar1 + 0x5c);
    uVar3 = *(undefined1 *)(iVar1 + 0x8b);
    break;
  case 2:
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar1 + 0x60);
    uVar3 = *(undefined1 *)(iVar1 + 0x8c);
    break;
  case 3:
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar1 + 100);
    uVar3 = *(undefined1 *)(iVar1 + 0x8d);
    break;
  case 4:
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar1 + 0x68);
    uVar3 = *(undefined1 *)(iVar1 + 0x8e);
    break;
  default:
    goto switchD_0019022c_default;
  }
  *(undefined1 *)(iVar4 + 0x3c) = uVar3;
switchD_0019022c_default:
  FUN_001902d0(param_1,*(undefined4 *)(iVar4 + 0x2c),*(undefined1 *)(iVar4 + 0x3c));
  uVar2 = *(undefined4 *)(iVar4 + (param_2 & 0xff) * 4 + 0x14);
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  FUN_0018d698(*(int *)(iVar4 + 4) + 0xd10,uVar2);
  return;
}


// ==== FUN_001902d0 @ 001902d0 ====

void FUN_001902d0(int param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = 0;
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x7c) + 0x380);
  for (param_3 = param_3 & 0xff; param_3 != 0; param_3 = param_3 - 1) {
    lVar3 = FUN_00169920(DAT_0040f4f4,*param_2);
    if (lVar3 != 0) {
      FUN_00177ee8((int)lVar3 + 0x20,uVar1,1);
      bVar2 = bVar2 + 1;
    }
    param_2 = param_2 + 1;
  }
  if (1 < bVar2) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}


// ==== FUN_00190380 @ 00190380 ====

void FUN_00190380(int param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x7c) + 0x380);
  for (param_3 = param_3 & 0xff; param_3 != 0; param_3 = param_3 - 1) {
    lVar2 = FUN_00169920(DAT_0040f4f4,*param_2);
    if ((lVar2 != 0) && (iVar1 != -1)) {
      FUN_00177ee8((int)lVar2 + 0x20,iVar1,0);
    }
    param_2 = param_2 + 1;
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}


// ==== FUN_00190428 @ 00190428 ====

void FUN_00190428(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined1 in_a3_qw [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = 0;
  auVar4 = _por(in_zero_qw,in_a3_qw);
  if (*(char *)(param_1 + 0x3c) != '\0') {
    iVar1 = *(int *)(param_1 + 0x2c);
    while( true ) {
      iVar1 = FUN_00169920(DAT_0040f4f4,*(undefined8 *)(uVar3 * 8 + iVar1));
      auVar2 = _por(in_zero_qw,auVar4);
      FUN_00186ff0(param_2,iVar1 + 0x20,param_3,auVar2._0_8_,0);
      uVar3 = uVar3 + 1 & 0xff;
      if (*(byte *)(param_1 + 0x3c) <= uVar3) break;
      iVar1 = *(int *)(param_1 + 0x2c);
    }
  }
  return;
}


// ==== FUN_001904d8 @ 001904d8 ====

void FUN_001904d8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  FUN_0018e338();
  piVar3 = (int *)param_1;
  iVar2 = *(int *)(*piVar3 + 0x30);
  if ((char)piVar3[6] == '\0') {
    if (*(char *)(iVar2 + 0x30) == '\0') {
      iVar2 = piVar3[5];
      goto LAB_00190540;
    }
    cVar1 = FUN_00180bc0(piVar3[1] + 0xb30);
    *(char *)(piVar3 + 6) = cVar1;
    if (cVar1 != '\0') {
      FUN_0016aba8(piVar3[1] + 0x1f90,*(undefined4 *)(iVar2 + 0x20),*(undefined1 *)(iVar2 + 0x30),
                   *(undefined4 *)(piVar3[1] + 0x7c));
    }
  }
  iVar2 = piVar3[5];
LAB_00190540:
  if ((iVar2 != 0) && (cVar1 = FUN_00176f00(piVar3[1] + 0x1fcc), cVar1 != '\0')) {
    FUN_00190958(param_1);
  }
  return;
}


// ==== FUN_00190580 @ 00190580 ====

void FUN_00190580(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 in_zero_qw [16];
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  
  FUN_0018e458();
  iVar5 = *(int *)(param_2 + 0x30);
  if (*(char *)(iVar5 + 0x32) == '\0') {
    param_1[5] = 0;
  }
  else {
    uVar2 = FUN_00169898(DAT_0040f4f4,**(undefined8 **)(iVar5 + 0x28));
    param_1[5] = uVar2;
  }
  FUN_0018d698(param_1[1] + 0xd10,param_1[5]);
  uVar7 = *(undefined4 *)(iVar5 + 0x10);
  uVar8 = *(undefined4 *)(iVar5 + 0x14);
  uVar9 = *(undefined4 *)(iVar5 + 0x18);
  uVar10 = *(undefined4 *)(iVar5 + 0x1c);
  uVar12 = *(undefined4 *)(iVar5 + 0x2c);
  uVar2 = uVar10;
  if (*(char *)(iVar5 + 0x33) != -1) {
    iVar3 = FUN_00174ad8(*param_1,*(char *)(iVar5 + 0x33));
    iVar3 = DAT_003bcf1c % iVar3;
    DAT_003bcf1c = DAT_003bcf1c + 1;
    uVar1 = *(undefined1 *)(*(int *)(param_2 + 0x28) + (int)(char)iVar3);
    puVar4 = (undefined4 *)FUN_00174af0(*param_1,*(undefined1 *)(iVar5 + 0x33),uVar1);
    uVar7 = *puVar4;
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    iVar3 = FUN_00174af0(*param_1,*(undefined1 *)(iVar5 + 0x33),uVar1);
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    fVar11 = (float)FUN_00174b20(*param_1,*(undefined1 *)(iVar5 + 0x33),uVar1);
    if (fVar11 == -1.0) {
      iVar5 = param_1[1];
      goto LAB_001906b4;
    }
    uVar12 = FUN_00174b20(*param_1,*(undefined1 *)(iVar5 + 0x33),uVar1);
  }
  iVar5 = param_1[1];
LAB_001906b4:
  auVar6._4_4_ = uVar8;
  auVar6._0_4_ = uVar7;
  auVar6._8_4_ = uVar9;
  auVar6._12_4_ = uVar10;
  auVar6 = _por(in_zero_qw,auVar6);
  FUN_00180aa0(uVar2,iVar5 + 0xb30,auVar6._0_8_,2);
  FUN_00180b38(uVar12,param_1[1] + 0xb30);
  FUN_00181f48(0,0x40000000,param_1[1] + 0xc80,0,0x29);
  *(undefined1 *)(param_1[1] + 0xd27) = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// ==== FUN_00190730 @ 00190730 ====

void FUN_00190730(int param_1)

{
  FUN_0018e488();
  FUN_0018d698(*(int *)(param_1 + 4) + 0xd10,0);
  return;
}


// ==== FUN_00190768 @ 00190768 ====

void FUN_00190768(int param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = FUN_001809f0(*(int *)(param_1 + 4) + 0xb30);
  if (lVar2 == 0) {
    FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  }
  else {
    iVar1 = FUN_001809f0(*(int *)(param_1 + 4) + 0xb30);
    auVar3 = _pextlw((long)*(int *)(iVar1 + 0xc),(long)*(int *)(iVar1 + 4));
    _pextlw((long)*(int *)(iVar1 + 8),auVar3._0_8_);
  }
  return;
}


// ==== FUN_001907e0 @ 001907e0 ====

bool FUN_001907e0(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 in_a1_qw [16];
  undefined1 auVar2 [16];
  bool bVar3;
  
  auVar2 = _por(in_zero_qw,in_a1_qw);
  bVar3 = false;
  lVar1 = FUN_0018e5e0();
  if (lVar1 != 0) {
    auVar2 = _por(in_zero_qw,auVar2);
    lVar1 = FUN_0018e680(param_1,auVar2._0_8_,*(undefined4 *)((int)param_1 + 0x14));
    bVar3 = lVar1 == 0;
  }
  return bVar3;
}


// ==== FUN_00190840 @ 00190840 ====

undefined8 FUN_00190840(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (*(int *)((int)param_1 + 0x14) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
    puVar1 = (undefined4 *)FUN_00178d30(uVar2);
    uVar2 = FUN_0018e680(param_1,*puVar1,*(undefined4 *)((int)param_1 + 0x14));
  }
  return uVar2;
}


// ==== FUN_001908a0 @ 001908a0 ====

void FUN_001908a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar4 = (int)param_2;
  uVar2 = 1 << (*(uint *)(iVar4 + 0x380) & 0x1f);
  if ((*(int *)(iVar4 + 0x3a4) != *(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x7c) + 0x3a4)) &&
     (*(int *)(iVar4 + 0x38c) == 0)) {
    uVar3 = (ulong)((*(uint *)(*(int *)(iVar5 + 4) + 0x274) & uVar2) == uVar2);
    uVar1 = FUN_0018e680(param_1,*(undefined8 *)(iVar4 + 0xa0),*(undefined4 *)(iVar5 + 0x14));
    if (uVar1 != uVar3) {
      if (uVar3 == 0) {
        FUN_00189700(*(int *)(iVar5 + 4) + 0x150,param_2);
      }
      else {
        FUN_00189720(*(int *)(iVar5 + 4) + 0x150);
      }
    }
  }
  return;
}


// ==== FUN_00190958 @ 00190958 ====

void FUN_00190958(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0x2b00;
  FUN_001908a0(param_1,DAT_0040f4d0 + 0x30);
  iVar3 = 0xf;
  do {
    iVar3 = iVar3 + -1;
    iVar1 = DAT_0040f4d4 + iVar4;
    iVar4 = iVar4 + 0x1fd0;
    if ((*(char *)(iVar2 + DAT_0040f4d4 + 0x2b78) != '\0') && (iVar1 != *(int *)((int)param_1 + 4)))
    {
      FUN_001908a0(param_1,*(undefined4 *)(iVar2 + DAT_0040f4d4 + 0x2b7c));
    }
    iVar2 = iVar2 + 0x1fd0;
  } while (-1 < iVar3);
  return;
}


// ==== FUN_00190a00 @ 00190a00 ====

void FUN_00190a00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(int *)param_2 == 3) {
    lVar1 = FUN_00188f10(*(int *)((int)param_1 + 4) + 0x150);
    if (lVar1 == 0) {
      FUN_0018d610(*(int *)((int)param_1 + 4) + 0xd10);
    }
  }
  FUN_0018e4c0(param_1,param_2);
  return;
}


// ==== FUN_00190a68 @ 00190a68 ====

void FUN_00190a68(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  FUN_0018e338();
  piVar5 = (int *)param_1;
  iVar4 = *(int *)(*piVar5 + 0x28);
  if (((char)piVar5[5] == '\0') &&
     (lVar3 = FUN_00189bf8(piVar5[1] + 0x150,*(undefined4 *)(DAT_0040f4d0 + 0x3b0)), lVar3 != 0)) {
    *(undefined1 *)(piVar5 + 5) = 1;
    cVar1 = *(char *)(iVar4 + 0x28);
    if (cVar1 != '\0') {
      FUN_0016aba8(piVar5[1] + 0x1f90,*(undefined4 *)(iVar4 + 0x20),cVar1,
                   *(undefined4 *)(piVar5[1] + 0x7c));
    }
  }
  iVar4 = piVar5[1];
  if (*(char *)(iVar4 + 0xc7c) == '\0') {
    lVar3 = FUN_00189bf8(iVar4 + 0x150,*(undefined4 *)(DAT_0040f4d0 + 0x3b0));
    if (lVar3 == 0) {
      return;
    }
    lVar3 = FUN_00185c38(piVar5[1] + 0x6f0,*(undefined4 *)(DAT_0040f4d0 + 0x3b0));
    if (lVar3 != 0) {
      return;
    }
    iVar4 = piVar5[1];
  }
  uVar2 = FUN_00180a00(iVar4 + 0xb30);
  auVar8 = _qmtc2(uVar2);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(piVar5[1] + 0x7c) + 0xa0));
  auVar6 = _vsub(auVar8,auVar6);
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  lVar3 = FUN_001829e8(piVar5[1] + 0x810);
  if (((lVar3 != 0) || (lVar3 = FUN_001829a8(piVar5[1] + 0x810), lVar3 == 0)) ||
     (auVar6._0_4_ < (float)piVar5[6] * 0.5 * 0.5)) {
    FUN_00190c18(param_1);
  }
  return;
}


// ==== FUN_00190bc0 @ 00190bc0 ====

void FUN_00190bc0(undefined8 param_1)

{
  FUN_0018e458();
  *(undefined1 *)(*(int *)((int)param_1 + 4) + 0xd24) = 0;
  FUN_00190c18(param_1);
  FUN_00181f48(0,0x40000000,*(int *)((int)param_1 + 4) + 0xc80,0,0x27);
  return;
}


// ==== FUN_00190c18 @ 00190c18 ====

void FUN_00190c18(int param_1)

{
  undefined4 uVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined4 *)(DAT_0040f4d0 + 0xd0);
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_00180aa0(0,*(int *)(param_1 + 4) + 0xb30,uVar1,2);
  FUN_00180b38(0x41200000,*(int *)(param_1 + 4) + 0xb30);
  uVar1 = FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  auVar4 = _qmtc2(uVar1);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1 + 4) + 0x7c) + 0xa0));
  auVar2 = _vsub(auVar4,auVar2);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  *(int *)(param_1 + 0x18) = auVar2._0_4_;
  return;
}


// ==== FUN_00190cb8 @ 00190cb8 ====

void FUN_00190cb8(int *param_1)

{
  int iVar1;
  char cVar2;
  
  FUN_0018e338();
  iVar1 = *(int *)(*param_1 + 0x30);
  if ((char)param_1[5] == '\0') {
    cVar2 = FUN_00180bc0(param_1[1] + 0xb30);
    *(char *)(param_1 + 5) = cVar2;
    if ((cVar2 != '\0') && (cVar2 = *(char *)(iVar1 + 0x2c), cVar2 != '\0')) {
      FUN_0016aba8(param_1[1] + 0x1f90,*(undefined4 *)(iVar1 + 0x20),cVar2,
                   *(undefined4 *)(param_1[1] + 0x7c));
    }
  }
  return;
}


// ==== FUN_00190d30 @ 00190d30 ====

void FUN_00190d30(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  
  FUN_0018e458();
  iVar5 = *(int *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(iVar5 + 0x10);
  uVar8 = *(undefined4 *)(iVar5 + 0x14);
  uVar9 = *(undefined4 *)(iVar5 + 0x18);
  uVar10 = *(undefined4 *)(iVar5 + 0x1c);
  uVar12 = *(undefined4 *)(iVar5 + 0x28);
  uVar4 = uVar10;
  if (*(char *)(iVar5 + 0x2e) != -1) {
    iVar2 = FUN_00174ad8(*param_1,*(char *)(iVar5 + 0x2e));
    iVar2 = DAT_003bcf20 % iVar2;
    DAT_003bcf20 = DAT_003bcf20 + 1;
    uVar1 = *(undefined1 *)(*(int *)(param_2 + 0x28) + (int)(char)iVar2);
    puVar3 = (undefined4 *)FUN_00174af0(*param_1,*(undefined1 *)(iVar5 + 0x2e),uVar1);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    iVar2 = FUN_00174af0(*param_1,*(undefined1 *)(iVar5 + 0x2e),uVar1);
    uVar4 = *(undefined4 *)(iVar2 + 0xc);
    fVar11 = (float)FUN_00174b20(*param_1,*(undefined1 *)(iVar5 + 0x2e),uVar1);
    if (fVar11 == -1.0) {
      iVar5 = param_1[1];
      goto LAB_00190e2c;
    }
    uVar12 = FUN_00174b20(*param_1,*(undefined1 *)(iVar5 + 0x2e),uVar1);
  }
  iVar5 = param_1[1];
LAB_00190e2c:
  auVar6._4_4_ = uVar8;
  auVar6._0_4_ = uVar7;
  auVar6._8_4_ = uVar9;
  auVar6._12_4_ = uVar10;
  auVar6 = _por(in_zero_qw,auVar6);
  FUN_00180aa0(uVar4,iVar5 + 0xb30,auVar6._0_8_,2);
  FUN_00180b38(uVar12,param_1[1] + 0xb30);
  FUN_00181f48(0,0x40000000,param_1[1] + 0xc80,0,0x28);
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


// ==== FUN_00190ea0 @ 00190ea0 ====

void FUN_00190ea0(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  FUN_0018e338();
  piVar6 = (int *)param_1;
  iVar5 = *piVar6;
  iVar4 = *(int *)(iVar5 + 0x2c);
  if ((*(char *)(iVar5 + 0x28) == '\0') && (*(char *)(iVar5 + 0x29) < '\0')) {
    FUN_001911a8(param_1);
  }
  lVar3 = FUN_00191270(param_1);
  if (lVar3 != 0) {
    if ((char)piVar6[5] != '\0') {
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        return;
      }
      lVar3 = FUN_001829a8(piVar6[1] + 0x810);
      if (lVar3 != 0) {
        return;
      }
      FUN_00191070(param_1);
      return;
    }
    cVar1 = FUN_00180bc0(piVar6[1] + 0xb30);
    *(char *)(piVar6 + 5) = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    *(undefined1 *)(iVar5 + 0x28) = 1;
    *(undefined1 *)((int)piVar6 + 0x15) = 1;
    FUN_00191070(param_1);
    cVar1 = *(char *)(iVar4 + 0x28);
    if (cVar1 == '\0') {
      return;
    }
    FUN_0016aba8(piVar6[1] + 0x1f90,*(undefined4 *)(iVar4 + 0x20),cVar1,
                 *(undefined4 *)(piVar6[1] + 0x7c));
    return;
  }
  iVar4 = piVar6[1];
  if (*(char *)(iVar5 + 0x28) != '\0') {
    lVar3 = FUN_00188f10(iVar4 + 0x150);
    iVar4 = piVar6[1];
    if (lVar3 != 0) {
      lVar3 = FUN_00189208(iVar4 + 0x150);
      if (lVar3 != 0) {
        iVar5 = piVar6[1];
        puVar2 = (undefined8 *)FUN_001893a0(iVar5 + 0x150);
        FUN_00180aa0(0,iVar5 + 0xb30,*puVar2,2);
        iVar5 = piVar6[1];
        goto LAB_00190fe8;
      }
      iVar4 = piVar6[1];
    }
  }
  FUN_00180aa0(0,iVar4 + 0xb30,*(undefined8 *)(piVar6 + 8),2);
  iVar5 = piVar6[1];
LAB_00190fe8:
  FUN_00180b38(0x41200000,iVar5 + 0xb30);
  return;
}


// ==== FUN_00191010 @ 00191010 ====

void FUN_00191010(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  FUN_0018e458();
  piVar6 = (int *)param_1;
  *(undefined1 *)((int)piVar6 + 0x15) = 0;
  if (*(char *)(*piVar6 + 0x28) == '\0') {
    if (*(char *)(*piVar6 + 0x29) < '\0') {
      FUN_001911a8(param_1);
      iVar5 = piVar6[1];
    }
    else {
      iVar5 = piVar6[1];
    }
  }
  else {
    iVar5 = piVar6[1];
  }
  iVar1 = *(int *)(iVar5 + 0x7c);
  iVar2 = *(int *)(iVar1 + 0xa4);
  iVar3 = *(int *)(iVar1 + 0xa8);
  iVar4 = *(int *)(iVar1 + 0xac);
  piVar6[8] = *(int *)(iVar1 + 0xa0);
  piVar6[9] = iVar2;
  piVar6[10] = iVar3;
  piVar6[0xb] = iVar4;
  *(undefined1 *)(iVar5 + 0xd24) = 0;
  return;
}


// ==== FUN_00191070 @ 00191070 ====

void FUN_00191070(int param_1)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  
  lVar1 = FUN_00188f10(*(int *)(param_1 + 4) + 0x150);
  iVar3 = *(int *)(param_1 + 4);
  if (lVar1 != 0) {
    lVar1 = FUN_00189208(iVar3 + 0x150);
    if (lVar1 != 0) {
      iVar3 = *(int *)(param_1 + 4);
      puVar2 = (undefined4 *)FUN_001893a0(iVar3 + 0x150);
      FUN_00180aa0(0,iVar3 + 0xb30,*puVar2,2);
      iVar3 = *(int *)(param_1 + 4);
      goto LAB_001910ec;
    }
    iVar3 = *(int *)(param_1 + 4);
  }
  FUN_00180aa0(0,iVar3 + 0xb30,*(undefined4 *)(param_1 + 0x20),2);
  iVar3 = *(int *)(param_1 + 4);
LAB_001910ec:
  FUN_00180b38(0x41200000,iVar3 + 0xb30);
  return;
}


// ==== FUN_00191118 @ 00191118 ====

undefined8 FUN_00191118(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00191270();
  uVar2 = 0x17;
  if (lVar1 == 0) {
    uVar2 = FUN_0018e590(param_1);
  }
  return uVar2;
}


// ==== FUN_00191158 @ 00191158 ====

undefined8 FUN_00191158(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00191270();
  uVar2 = 0x4a;
  if (lVar1 == 0) {
    uVar2 = FUN_0018e5b8(param_1,param_2);
  }
  return uVar2;
}


// ==== FUN_001911a8 @ 001911a8 ====

void FUN_001911a8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*param_1 + 0x2c);
  uVar2 = *(undefined8 *)(iVar1 + 0x10);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined1 *)(*param_1 + 0x29) = *(undefined1 *)(param_1[1] + 0x1ef4);
  FUN_00180aa0(uVar4,param_1[1] + 0xb30,uVar2,2);
  FUN_00180b38(*(undefined4 *)(iVar1 + 0x2c),param_1[1] + 0xb30);
  FUN_0018d610(param_1[1] + 0xd10);
  FUN_00181ad0(param_1[1] + 0xec0,0xd);
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_00181f48(0,0x40000000,param_1[1] + 0xc80,0,0x25);
  lVar3 = FUN_00188f10(param_1[1] + 0x150);
  if (lVar3 == 0) {
    FUN_0018a890(param_1[1] + 0x150);
  }
  return;
}


// ==== FUN_00191270 @ 00191270 ====

bool FUN_00191270(int *param_1)

{
  return (long)*(char *)(*param_1 + 0x29) == (long)*(int *)(param_1[1] + 0x1ef4);
}


// ==== FUN_00191290 @ 00191290 ====

void FUN_00191290(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  
  FUN_0018e338();
  piVar4 = (int *)param_1;
  iVar1 = *(int *)(*piVar4 + 0x28);
  if ((char)piVar4[5] == '\0') {
    cVar2 = FUN_00180bc0(piVar4[1] + 0xb30);
    *(char *)(piVar4 + 5) = cVar2;
    if (cVar2 == '\0') {
      lVar3 = FUN_001829a8(piVar4[1] + 0x810);
      if (lVar3 == 0) {
        FUN_00191360(param_1);
      }
    }
    else {
      cVar2 = *(char *)(iVar1 + 0x2c);
      if (cVar2 != '\0') {
        FUN_0016aba8(piVar4[1] + 0x1f90,*(undefined4 *)(iVar1 + 0x20),cVar2,
                     *(undefined4 *)(piVar4[1] + 0x7c));
      }
    }
  }
  return;
}


// ==== FUN_00191328 @ 00191328 ====

void FUN_00191328(undefined8 param_1)

{
  FUN_0018e458();
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  FUN_00191360(param_1);
  *(undefined1 *)(*(int *)((int)param_1 + 4) + 0xd24) = 0;
  return;
}


// ==== FUN_00191360 @ 00191360 ====

void FUN_00191360(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined1 in_zero_qw [16];
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined1 auVar7 [16];
  int iVar8;
  
  iVar2 = *(int *)(*param_1 + 0x28);
  lVar5 = FUN_00191450();
  iVar8 = (int)lVar5 + 0x150;
  if (lVar5 == 0) {
    cVar1 = *(char *)((int)param_1 + 0x15);
  }
  else {
    lVar3 = FUN_00188f10(iVar8);
    if (lVar3 != 0) {
      lVar3 = FUN_00189208(iVar8);
      if (lVar3 == 0) {
        uVar6 = FUN_00180a00((int)lVar5 + 0xb30);
      }
      else {
        puVar4 = (undefined8 *)FUN_001893a0(iVar8);
        uVar6 = *puVar4;
        in_v0_udw = *(undefined4 *)(puVar4 + 1);
        in_register_0000002c = *(undefined4 *)((int)puVar4 + 0xc);
      }
      auVar7._8_4_ = in_v0_udw;
      auVar7._0_8_ = uVar6;
      auVar7._12_4_ = in_register_0000002c;
      auVar7 = _por(in_zero_qw,auVar7);
      FUN_00180aa0(0,param_1[1] + 0xb30,auVar7._0_8_,2);
      FUN_00180b38(0x41200000,param_1[1] + 0xb30);
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    cVar1 = *(char *)((int)param_1 + 0x15);
  }
  if ((cVar1 == '\0') && (cVar1 = *(char *)(iVar2 + 0x2d), cVar1 != '\0')) {
    FUN_0016aba8(param_1[1] + 0x1f90,*(undefined4 *)(iVar2 + 0x24),cVar1,
                 *(undefined4 *)(param_1[1] + 0x7c));
    *(undefined1 *)((int)param_1 + 0x15) = 1;
  }
  return;
}


// ==== FUN_00191450 @ 00191450 ====

undefined8 FUN_00191450(int *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  iVar1 = *(int *)(*param_1 + 0x28);
  iVar7 = 0;
  if (*(char *)(iVar1 + 0x2e) != '\0') {
    iVar3 = *(int *)(iVar1 + 0x28);
    while( true ) {
      iVar6 = 0;
      lVar8 = *(long *)(iVar7 * 8 + iVar3);
      if (0 < *(int *)(DAT_0040f514 + 0x79a4)) {
        do {
          plVar2 = *(long **)(iVar6 * 4 + *(int *)(DAT_0040f514 + 0x79ac));
          if ((((plVar2 != (long *)0x0) && (*plVar2 == lVar8)) &&
              (lVar4 = FUN_00135550(plVar2), lVar4 != 0)) &&
             (iVar3 = FUN_00135550(plVar2), *(int *)(iVar3 + 0x80) == 1)) {
            uVar5 = FUN_00135550(plVar2);
            return uVar5;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(DAT_0040f514 + 0x79a4));
      }
      iVar7 = iVar7 + 1;
      if ((int)(uint)*(byte *)(iVar1 + 0x2e) <= iVar7) break;
      iVar3 = *(int *)(iVar1 + 0x28);
    }
  }
  return 0;
}


// ==== FUN_00191568 @ 00191568 ====

void FUN_00191568(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}


// ==== FUN_00191578 @ 00191578 ====

undefined8 FUN_00191578(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = _pextlw(0xffffffffc5d05000,0xffffffffc5d05000);
  auVar1 = _pextlw(0xffffffffc5d05000,auVar1._0_8_);
  param_1[0xc] = 0;
  param_1[8] = auVar1._0_4_;
  param_1[9] = auVar1._4_4_;
  param_1[10] = auVar1._8_4_;
  param_1[0xb] = auVar1._12_4_;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[4] = auVar1._0_4_;
  param_1[5] = auVar1._4_4_;
  param_1[6] = auVar1._8_4_;
  param_1[7] = auVar1._12_4_;
  FUN_00173690(param_1 + 0x10);
  FUN_00173690(param_1 + 0x11);
  return 1;
}


// ==== FUN_001915d8 @ 001915d8 ====

void FUN_001915d8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  if (*(char *)(puVar3 + 0x14) == '\0') {
    return;
  }
  if (puVar3[0xc] == 5) {
    lVar1 = FUN_00191bb8();
    if (lVar1 != 0) {
      puVar3[0xc] = 4;
      FUN_00173640(0x40800000,puVar3 + 0x11);
      return;
    }
    lVar1 = FUN_00173610(puVar3 + 0x10);
    if (lVar1 == 0) {
      return;
    }
    iVar2 = puVar3[0x20];
  }
  else {
    if (puVar3[0xc] != 4) {
      return;
    }
    lVar1 = FUN_0018b168(puVar3[0xd] + 0xcc0);
    if (lVar1 != 0) {
      return;
    }
    lVar1 = FUN_00191b78(param_1);
    if (lVar1 == 0) {
      return;
    }
    lVar1 = FUN_00173610(puVar3 + 0x11);
    if (lVar1 != 0) {
      puVar3[0xc] = 5;
      FUN_00173640(0x40000000,puVar3 + 0x10);
      return;
    }
    iVar2 = puVar3[0x20];
  }
  lVar1 = (**(code **)(iVar2 + 0x3c))((int)puVar3 + (int)*(short *)(iVar2 + 0x38));
  if (lVar1 == 0) {
    puVar3[0xc] = 2;
  }
  return;
}


// ==== FUN_001916e8 @ 001916e8 ====

void FUN_001916e8(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  auVar2 = _qmtc2(param_2);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  iVar1 = (int)param_1;
  auVar3 = _sqc2(auVar2);
  *(undefined1 (*) [16])(iVar1 + 0x10) = auVar3;
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(iVar1 + 0x34) + 0x7c) + 0xa0));
  auVar3 = _vsub(auVar2,auVar3);
  *(undefined1 *)(iVar1 + 0x38) = 0;
  auVar3 = _vmul(auVar3,auVar3);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar3);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  uVar5 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar5);
  auVar3 = _qmfc2(auVar3._0_4_);
  *(int *)(iVar1 + 0x3c) = auVar3._0_4_;
  FUN_00173690(iVar1 + 0x40);
  FUN_00173690(iVar1 + 0x44);
  FUN_00191a28(param_1);
  return;
}


// ==== FUN_00191778 @ 00191778 ====

void FUN_00191778(int param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *(int *)(param_1 + 0x20) = (int)param_2;
  *(int *)(param_1 + 0x24) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x28) = in_a1_udw;
  *(undefined4 *)(param_1 + 0x2c) = in_register_0000005c;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}


// ==== FUN_00191790 @ 00191790 ====

void FUN_00191790(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// ==== FUN_001917a0 @ 001917a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001917a0(float param_1,float param_2,float *param_3,undefined4 param_4,long param_5)

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
  undefined4 uVar13;
  
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar1 = DAT_004432c0;
  auVar9 = _qmtc2(0);
  auVar10 = _qmtc2(param_4);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vmove(auVar8);
  auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)((int)param_3[0xd] + 0x7c) + 0xa0));
  _vsub(auVar10,auVar7);
  auVar7 = _vaddbc(in_vf0,auVar9);
  auVar9 = _vmove(auVar7);
  auVar7 = _vmul(auVar9,auVar9);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar8,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  if (auVar7._0_4_ < 2.3283064e-10) {
    return true;
  }
  auVar7 = _vmul(auVar9,auVar9);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar12,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  auVar7 = _qmtc2(SQRT(auVar7._0_4_));
  uVar13 = _vwaitq();
  auVar8 = _vmulq(auVar9,uVar13);
  auVar7 = _qmfc2(auVar7._0_4_);
  fVar6 = auVar7._0_4_;
  if (fVar6 < param_2) {
    return true;
  }
  auVar7 = _vmul(auVar8,auVar8);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar12,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  uVar13 = _vwaitq();
  auVar10 = _vmulq(auVar8,uVar13);
  _vmulq(auVar7,uVar13);
  auVar9 = _lqc2(_DAT_004432d0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vmul(auVar9,auVar9);
  auVar7 = _sqc2(auVar7);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar12,auVar8);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar8);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  uVar13 = _vwaitq();
  auVar12 = _vmulq(auVar9,uVar13);
  _vmulq(auVar8,uVar13);
  auVar8 = _vmul(auVar10,auVar12);
  auVar9 = _lqc2(auVar7);
  auVar11 = _vsubbc(in_vf0,in_vf0);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar9,auVar8);
  auVar9 = _vmax(auVar8,auVar11);
  auVar8 = _sqc2(auVar10);
  auVar9 = _vminibc(auVar9,in_vf0);
  auVar10 = _qmfc2(auVar9._0_4_);
  auVar9 = _sqc2(auVar12);
  fVar5 = (float)acosf(auVar10._0_4_);
  auVar8 = _lqc2(auVar8);
  auVar9 = _lqc2(auVar9);
  _vopmula(auVar8,auVar9);
  auVar9 = _vopmsub(auVar9,auVar8);
  auVar8._4_4_ = uVar2;
  auVar8._0_4_ = uVar1;
  auVar8._8_4_ = uVar3;
  auVar8._12_4_ = uVar4;
  auVar8 = _lqc2(auVar8);
  auVar8 = _vmul(auVar9,auVar8);
  auVar7 = _lqc2(auVar7);
  _vaddabc(auVar8,auVar8);
  auVar7 = _vmaddbc(auVar7,auVar8);
  auVar7 = _qmfc2(auVar7._0_4_);
  fVar5 = fVar5 * 57.29578;
  if (0.0 < auVar7._0_4_) {
    fVar5 = -fVar5;
  }
  *param_3 = fVar5;
  *(undefined1 *)(param_3 + 2) = 0;
  fVar5 = fVar6 / *(float *)(DAT_0040f4d0 + 0x1c);
  fVar5 = (float)((int)fVar5 * (uint)(fVar5 < param_1) | (int)param_1 * (uint)(fVar5 >= param_1));
  param_3[1] = fVar5;
  if (param_5 != 0) {
    if (0.5 <= fVar6) {
      fVar6 = param_3[1];
      goto LAB_001919f0;
    }
    fVar6 = 1.0 - (fVar6 + fVar6);
    param_3[1] = fVar5 * (1.0 - fVar6 * fVar6);
  }
  fVar6 = param_3[1];
LAB_001919f0:
  return ((uint)fVar6 & 0x7f800000) < 0x37800001;
}


// ==== FUN_00191a28 @ 00191a28 ====

void FUN_00191a28(int param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uStack_c;
  
  auVar3 = _qmtc2(0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1 + 0x34) + 0x7c) + 0xa0));
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  auVar2 = _vaddbc(in_vf0,auVar3);
  auVar2 = _vmul(auVar2,auVar2);
  uStack_c = auVar1._4_4_;
  _vaddabc(auVar2,auVar2);
  auVar1 = _vmaddbc(auVar4,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar1);
  auVar1 = _vaddbc(in_vf0,in_vf0);
  uVar5 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar5);
  *(undefined4 *)(param_1 + 0x4c) = uStack_c;
  auVar1 = _qmfc2(auVar1._0_4_);
  *(int *)(param_1 + 0x48) = auVar1._0_4_;
  return;
}


// ==== FUN_00191aa0 @ 00191aa0 ====

void FUN_00191aa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  auVar2 = _qmtc2(param_3);
  auVar1 = _qmtc2(param_2);
  _sqc2(auVar1);
  auVar1 = _qmtc2(0);
  _sqc2(auVar2);
  auVar2 = _vaddbc(in_vf0,auVar1);
  auVar3 = _vaddbc(in_vf0,auVar1);
  _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1 + 0x34) + 0x7c) + 0xa0));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auStack_30 = _sqc2(auVar2);
  auVar1 = _qmfc2(auVar1._0_4_);
  auStack_20 = _sqc2(auVar3);
  FUN_0027f518(auVar1._0_8_,auStack_30);
  return;
}


// ==== FUN_00191af8 @ 00191af8 ====

undefined8 FUN_00191af8(int param_1,undefined4 param_2)

{
  undefined1 in_zero_qw [16];
  undefined1 auVar1 [16];
  undefined1 in_a1_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 auStack_30 [2];
  undefined1 auStack_20 [16];
  
  auVar2 = _qmtc2(param_2);
  auVar1 = _por(in_zero_qw,in_a1_qw);
  auVar3 = _qmtc2(auVar1._0_4_);
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _qmfc2(auVar2._0_4_);
  FUN_0027f470(auVar1._0_8_,auVar2._0_8_,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x7c) + 0xa0),auStack_30,
               auStack_20);
  return auStack_30[0];
}


// ==== FUN_00191b40 @ 00191b40 ====

void FUN_00191b40(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  
  *(int *)(param_1 + 0x60) = (int)param_2;
  *(int *)(param_1 + 100) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x68) = in_a1_udw;
  *(undefined4 *)(param_1 + 0x6c) = in_register_0000005c;
  *(int *)(param_1 + 0x70) = (int)param_3;
  *(int *)(param_1 + 0x74) = (int)((ulong)param_3 >> 0x20);
  *(undefined4 *)(param_1 + 0x78) = in_a2_udw;
  *(undefined4 *)(param_1 + 0x7c) = in_register_0000006c;
  FUN_00173690(param_1 + 0x40);
  FUN_00173690(param_1 + 0x44);
  return;
}


// ==== FUN_00191b78 @ 00191b78 ====

bool FUN_00191b78(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00191aa0(param_1,*(undefined4 *)(param_1 + 0x60),
                              *(undefined4 *)(param_1 + 0x70));
  return 0.25 < fVar1;
}


// ==== FUN_00191bb8 @ 00191bb8 ====

void FUN_00191bb8(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._0_8_ = FUN_00191af8();
  auVar1._8_8_ = extraout_v0_udw;
  auVar1 = _por(in_zero_qw,auVar1);
  uVar2 = FUN_0018da40(*(int *)((int)param_1 + 0x34) + 0xc94);
  auVar1 = _por(in_zero_qw,auVar1);
  FUN_001917a0(uVar2,0x3e800000,param_1,auVar1._0_8_,0);
  return;
}


// ==== FUN_00191c20 @ 00191c20 ====

void FUN_00191c20(int param_1)

{
  FUN_00191568();
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}


// ==== FUN_00191c48 @ 00191c48 ====

void FUN_00191c48(int param_1)

{
  FUN_00179bd0(param_1 + 0xa0,*(undefined4 *)(param_1 + 0x34));
  FUN_00179bd0(param_1 + 0x110,*(undefined4 *)(param_1 + 0x34));
  return;
}


// ==== FUN_00191c80 @ 00191c80 ====

undefined4 FUN_00191c80(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_00191578();
  iVar4 = (int)param_1;
  uVar3 = FUN_0013d3f0(*(undefined4 *)(iVar4 + 0x34));
  uVar2 = FUN_002e1c58(uVar3,0x4548b8);
  *(undefined4 *)(iVar4 + 0x90) = uVar2;
  uVar3 = FUN_0016dd68(DAT_0040f4d4,1);
  iVar1 = **(int **)(iVar4 + 0x90);
  (**(code **)(iVar1 + 0x74))((int)*(int **)(iVar4 + 0x90) + (int)*(short *)(iVar1 + 0x70),uVar3);
  *(undefined4 *)(*(int *)(iVar4 + 0x90) + 0x70) = 0;
  *(undefined4 *)(*(int *)(iVar4 + 0x90) + 0x74) = 0;
  *(undefined4 *)(iVar4 + 0x188) = 3;
  FUN_00192380(param_1,1);
  FUN_00179c60(iVar4 + 0xa0);
  FUN_00179c60(iVar4 + 0x110);
  *(undefined4 *)(iVar4 + 0x180) = 0;
  *(undefined4 *)(iVar4 + 0x184) = 0;
  *(undefined4 *)(iVar4 + 0x98) = 0xffffffff;
  FUN_00191f28(param_1);
  return 1;
}


// ==== FUN_00191d40 @ 00191d40 ====

void FUN_00191d40(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  long lVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  FUN_001915d8();
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x180) == 0) {
    iVar1 = *(int *)(iVar7 + 0x184);
  }
  else {
    FUN_00179c88();
    iVar1 = *(int *)(iVar7 + 0x184);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar7 + 0x30);
  }
  else {
    FUN_00179c88();
    iVar1 = *(int *)(iVar7 + 0x30);
  }
  if (((iVar1 == 1) || (iVar1 == 7)) || (iVar1 == 4)) {
    if ((((iVar1 == 4) && (*(char *)(iVar7 + 0x94) != '\0')) &&
        ((*(int *)(iVar7 + 0x180) != 0 &&
         ((*(int *)(iVar7 + 0x184) != 0 && (*(int *)(*(int *)(iVar7 + 0x180) + 8) == 9)))))) &&
       (*(int *)(*(int *)(iVar7 + 0x184) + 8) == 9)) {
      FUN_001930f8(param_1);
      *(undefined4 *)(iVar7 + 0x184) = 0;
      *(undefined1 *)(iVar7 + 0x94) = 0;
    }
    do {
      lVar3 = FUN_00192a00(param_1);
    } while (lVar3 != 0);
    if ((*(char *)(*(int *)(iVar7 + 0x34) + 0x849) != '\0') &&
       ((*(int *)(iVar7 + 0x30) == 7 || (*(int *)(iVar7 + 0x30) == 1)))) {
      FUN_001917a0(*(undefined4 *)(*(int *)(iVar7 + 0x34) + 0x838),0x3dcccccd);
    }
  }
  else if ((iVar1 == 8) && (*(char *)(iVar7 + 0x95) == '\0')) {
    uVar8 = 0;
    if ((*(int *)(iVar7 + 0x184) != 0) && (uVar8 = 1, *(char *)(iVar7 + 0x94) != '\0')) {
      uVar8 = 0;
    }
    lVar3 = FUN_00182ef0(*(int *)(iVar7 + 0x34) + 0x810);
    if (lVar3 == 0) {
      uVar2 = *(undefined8 *)(iVar7 + 0x10);
      uVar5 = *(undefined4 *)(iVar7 + 0x18);
      uVar6 = *(undefined4 *)(iVar7 + 0x1c);
      uVar9 = FUN_0018da40(*(int *)(iVar7 + 0x34) + 0xc94);
      auVar4._8_4_ = uVar5;
      auVar4._0_8_ = uVar2;
      auVar4._12_4_ = uVar6;
      auVar4 = _por(in_zero_qw,auVar4);
      lVar3 = FUN_001917a0(uVar9,0x3dcccccd,param_1,auVar4._0_8_,uVar8 ^ 1);
      if (lVar3 != 0) {
        *(undefined1 *)(iVar7 + 0x95) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar7 + 0x30) = 2;
      FUN_00191f28(param_1);
    }
  }
  return;
}


// ==== FUN_00191f28 @ 00191f28 ====

void FUN_00191f28(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(*(int *)(param_1 + 0x90) + 0xb0) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x90) + 0xb1) = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + 0xf4) = DAT_004514f8;
  *(undefined4 *)(iVar1 + 0xf8) = DAT_004514fc;
  *(undefined4 *)(iVar1 + 0xfc) = DAT_00451500;
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + 0x100) = DAT_004514f8;
  *(undefined4 *)(iVar1 + 0x104) = DAT_004514fc;
  *(undefined4 *)(iVar1 + 0x108) = DAT_00451500;
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + 0xd0) = DAT_004514f8;
  *(undefined4 *)(iVar1 + 0xd4) = DAT_004514fc;
  *(undefined4 *)(iVar1 + 0xd8) = DAT_00451500;
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + 0xdc) = DAT_004514f8;
  *(undefined4 *)(iVar1 + 0xe0) = DAT_004514fc;
  *(undefined4 *)(iVar1 + 0xe4) = DAT_00451500;
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + 0xe8) = DAT_004514f8;
  *(undefined4 *)(iVar1 + 0xec) = DAT_004514fc;
  *(undefined4 *)(iVar1 + 0xf0) = DAT_00451500;
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + 0x10c) = DAT_004514f8;
  *(undefined4 *)(iVar1 + 0x110) = DAT_004514fc;
  *(undefined4 *)(iVar1 + 0x114) = DAT_00451500;
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + 0x148) = DAT_004514f8;
  *(undefined4 *)(iVar1 + 0x14c) = DAT_004514fc;
  *(undefined4 *)(iVar1 + 0x150) = DAT_00451500;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x138) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x13c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x154) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x158) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8) = 0xbf800000;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x140) = 0xffffffff;
  FUN_002dfbf8(*(undefined4 *)(*(int *)(param_1 + 0x90) + 8));
  if (*(int *)(param_1 + 0x180) == 0) {
    iVar1 = *(int *)(param_1 + 0x184);
  }
  else {
    FUN_00179ef0();
    *(undefined4 *)(param_1 + 0x180) = 0;
    iVar1 = *(int *)(param_1 + 0x184);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
  }
  else {
    FUN_00179ef0();
    *(undefined4 *)(param_1 + 0x184) = 0;
    iVar1 = *(int *)(param_1 + 0x90);
  }
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(iVar1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return;
}


// ==== FUN_001920d8 @ 001920d8 ====

void FUN_001920d8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_4_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = in_register_0000005c;
  auVar2 = _por(in_zero_qw,auVar2);
  FUN_001916e8();
  FUN_00191f28(param_1);
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x180) = iVar1 + 0xa0;
  auVar2 = _por(in_zero_qw,auVar2);
  *(undefined4 *)(iVar1 + 0x30) = 7;
  FUN_00179d58(iVar1 + 0xa0,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x34) + 0x7c) + 0xa0),
               auVar2._0_8_,1);
  return;
}


// ==== FUN_00192140 @ 00192140 ====

void FUN_00192140(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined1 in_a1_qw [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  
  iVar3 = (int)param_1;
  auVar4 = _por(in_zero_qw,in_a1_qw);
  if (*(int *)(iVar3 + 0x180) == 0) {
    (**(code **)(*(int *)(iVar3 + 0x80) + 0x1c))(iVar3 + *(short *)(*(int *)(iVar3 + 0x80) + 0x18));
  }
  auVar2 = _por(in_zero_qw,auVar4);
  FUN_00191778(param_1,auVar2._0_8_);
  if (*(int *)(iVar3 + 0x184) == 0) {
    iVar1 = *(int *)(iVar3 + 0x180);
  }
  else {
    FUN_00179ef0();
    *(undefined4 *)(iVar3 + 0x184) = 0;
    iVar1 = *(int *)(iVar3 + 0x180);
  }
  if (iVar1 == iVar3 + 0xa0) {
    *(int *)(iVar3 + 0x184) = iVar3 + 0x110;
  }
  else {
    *(int *)(iVar3 + 0x184) = iVar3 + 0xa0;
  }
  _por(in_zero_qw,auVar4);
  FUN_00179d58(*(undefined4 *)(iVar3 + 0x184));
  return;
}


// ==== FUN_001921d8 @ 001921d8 ====

void FUN_001921d8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_v0_udw;
  undefined4 uVar5;
  undefined4 in_register_0000002c;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  
  iVar8 = (int)param_1;
  iVar1 = *(int *)(iVar8 + 0x184);
  if ((iVar1 == 0) || (*(char *)(iVar8 + 0x94) != '\0')) {
    *(undefined4 *)(iVar8 + 0x30) = 8;
    *(undefined4 *)(iVar8 + 0x180) = 0;
    if ((*(char *)(iVar8 + 0x94) != '\0') && (*(int *)(iVar8 + 0x184) != 0)) {
      FUN_00179ef0();
      *(undefined4 *)(iVar8 + 0x184) = 0;
    }
  }
  else {
    if (*(int *)(iVar1 + 8) == 9) {
      FUN_00192a78();
      if (param_2 == 0) {
        uVar3 = *(undefined4 *)(iVar8 + 0x20);
        uVar4 = *(undefined4 *)(iVar8 + 0x24);
        uVar5 = *(undefined4 *)(iVar8 + 0x28);
        uVar6 = *(undefined4 *)(iVar8 + 0x2c);
      }
      else {
        uVar2 = (**(code **)(*(int *)(iVar8 + 0x80) + 0x34))
                          (iVar8 + *(short *)(*(int *)(iVar8 + 0x80) + 0x30));
        auVar7._8_4_ = in_v0_udw;
        auVar7._0_8_ = uVar2;
        auVar7._12_4_ = in_register_0000002c;
        auVar7 = _por(in_zero_qw,auVar7);
        FUN_001917a0(*(undefined4 *)(*(int *)(iVar8 + 0x34) + 0x838),0x3dcccccd,param_1,auVar7._0_8_
                     ,0);
        uVar3 = *(undefined4 *)(iVar8 + 0x20);
        uVar4 = *(undefined4 *)(iVar8 + 0x24);
        uVar5 = *(undefined4 *)(iVar8 + 0x28);
        uVar6 = *(undefined4 *)(iVar8 + 0x2c);
      }
    }
    else {
      *(int *)(iVar8 + 0x180) = iVar1;
      uVar3 = FUN_0017a008(iVar1);
      *(undefined4 *)(iVar8 + 0x30) = uVar3;
      uVar3 = *(undefined4 *)(iVar8 + 0x20);
      uVar4 = *(undefined4 *)(iVar8 + 0x24);
      uVar5 = *(undefined4 *)(iVar8 + 0x28);
      uVar6 = *(undefined4 *)(iVar8 + 0x2c);
    }
    *(undefined4 *)(iVar8 + 0x184) = 0;
    *(undefined1 *)(iVar8 + 0x38) = 0;
    *(undefined4 *)(iVar8 + 0x10) = uVar3;
    *(undefined4 *)(iVar8 + 0x14) = uVar4;
    *(undefined4 *)(iVar8 + 0x18) = uVar5;
    *(undefined4 *)(iVar8 + 0x1c) = uVar6;
    FUN_00191a28(param_1);
    iVar1 = *(int *)(iVar8 + 0x34);
    *(undefined4 *)(iVar1 + 0x810) = *(undefined4 *)(iVar1 + 0x820);
    *(undefined4 *)(iVar1 + 0x814) = *(undefined4 *)(iVar1 + 0x824);
    *(undefined4 *)(iVar1 + 0x818) = *(undefined4 *)(iVar1 + 0x828);
    *(undefined4 *)(iVar1 + 0x81c) = *(undefined4 *)(iVar1 + 0x82c);
    *(undefined1 *)(iVar1 + 0x846) = 1;
  }
  return;
}


// ==== FUN_001922e8 @ 001922e8 ====

void FUN_001922e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x180) != 0) && (*(int *)(*(int *)(param_1 + 0x180) + 8) == 9)) &&
      (*(char *)(param_1 + 0x95) == '\0')) && (*(int *)(param_1 + 0x30) - 4U < 2)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 0x140);
    iVar2 = FUN_00179cd0();
    if (iVar1 < iVar2) {
      FUN_00179ce0(*(undefined4 *)(param_1 + 0x180),iVar1);
    }
  }
  return;
}


// ==== FUN_00192380 @ 00192380 ====

void FUN_00192380(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (param_2 == *(int *)(param_1 + 0x188)) {
    return;
  }
  *(int *)(param_1 + 0x188) = param_2;
  *(code **)(*(int *)(param_1 + 0x90) + 0x9c) = FUN_00305190;
  iVar2 = *(int *)(param_1 + 0x188);
  if (iVar2 == 1) {
    *(code **)(*(int *)(param_1 + 0x90) + 0xa0) = FUN_00171ed0;
    iVar2 = *(int *)(param_1 + 0x90);
    pcVar1 = FUN_00301a30;
  }
  else if (iVar2 < 2) {
    if (iVar2 != 0) {
      return;
    }
    *(code **)(*(int *)(param_1 + 0x90) + 0xa0) = FUN_00302198;
    iVar2 = *(int *)(param_1 + 0x90);
    pcVar1 = FUN_00301a30;
  }
  else {
    if (iVar2 != 2) {
      return;
    }
    *(code **)(*(int *)(param_1 + 0x90) + 0xa0) = FUN_00171ed0;
    iVar2 = *(int *)(param_1 + 0x90);
    pcVar1 = FUN_00305250;
  }
  *(code **)(iVar2 + 0xa4) = FUN_003016e8;
  *(code **)(*(int *)(param_1 + 0x90) + 0xa8) = pcVar1;
  *(code **)(*(int *)(param_1 + 0x90) + 0xac) = FUN_00301c68;
  return;
}


// ==== FUN_00192470 @ 00192470 ====

void FUN_00192470(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar3 = FUN_0016dd68(DAT_0040f4d4,1);
    iVar4 = **(int **)(param_1 + 0x90);
    (**(code **)(iVar4 + 0x74))
              ((int)*(int **)(param_1 + 0x90) + (int)*(short *)(iVar4 + 0x70),uVar3);
  }
  if (*(int *)(param_1 + 0x180) == 0) {
    iVar4 = *(int *)(param_1 + 0x184);
  }
  else {
    FUN_00179cc0();
    iVar4 = *(int *)(*(int *)(param_1 + 0x180) + 8);
    if (iVar4 != 9) {
      if ((((iVar4 - 2U < 4) || (iVar4 == 7)) || (iVar4 == 8)) || (bVar1 = false, iVar4 == 6)) {
        bVar1 = true;
      }
      if (!bVar1) {
        iVar4 = *(int *)(param_1 + 0x184);
        goto LAB_00192538;
      }
    }
    FUN_00179ed0(*(undefined4 *)(param_1 + 0x180),
                 *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x7c) + 0xa0));
    uVar2 = FUN_0017a008(*(undefined4 *)(param_1 + 0x180));
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    iVar4 = *(int *)(param_1 + 0x184);
  }
LAB_00192538:
  if (iVar4 != 0) {
    FUN_00179ef0();
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  return;
}


// ==== FUN_00192560 @ 00192560 ====

undefined8 FUN_00192560(void)

{
  return 0;
}


// ==== FUN_00192568 @ 00192568 ====

void FUN_00192568(void)

{
  return;
}


// ==== FUN_00192570 @ 00192570 ====

undefined4 FUN_00192570(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x180);
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 1) {
    uVar3 = 0;
  }
  else if (iVar2 == 9) {
    FUN_00192a78(param_1);
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_0017a008(iVar1);
    *(undefined4 *)((int)param_1 + 0x30) = uVar3;
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_001925d8 @ 001925d8 ====

undefined4 FUN_001925d8(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar4 + 0x180) + 8);
  if ((((iVar1 - 2U < 4) || (iVar1 == 7)) || (iVar1 == 8)) || (bVar2 = false, iVar1 == 6)) {
    bVar2 = true;
  }
  uVar3 = 0;
  if (!bVar2) {
    iVar1 = *(int *)(iVar4 + 0x180);
    if (*(int *)(iVar1 + 8) == 10) {
      uVar3 = FUN_0017a008(iVar1);
      *(undefined4 *)(iVar4 + 0x30) = uVar3;
      FUN_00191f28(param_1);
      uVar3 = 0;
    }
    else if (*(int *)(iVar1 + 8) == 1) {
      uVar3 = FUN_0017a008(iVar1);
      *(undefined4 *)(iVar4 + 0x30) = uVar3;
      uVar3 = 0;
    }
    else {
      FUN_00192a78(param_1);
      uVar3 = 1;
    }
  }
  return uVar3;
}


// ==== FUN_00192698 @ 00192698 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00192698(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_40;
  uint auStack_3c [3];
  
  puVar7 = (undefined4 *)param_1;
  if (*(char *)((int)puVar7 + 0x95) == '\0') {
    DAT_003bcf24 = puVar7[0xd];
    FUN_0016fb60(1);
    iVar2 = *(int *)puVar7[0x24];
    lVar4 = (**(code **)(iVar2 + 0x34))
                      ((int)puVar7[0x24] + (int)*(short *)(iVar2 + 0x30),puVar7[0x60] + 0x44);
    FUN_0016fb60(0);
    iVar2 = puVar7[0x24];
    if (*(char *)(iVar2 + 0x1b5) == '\0') {
      auVar5 = _pextlw((long)*(int *)(iVar2 + 0xf0),(long)*(int *)(iVar2 + 0xe8));
      auVar10 = _lqc2(_DAT_00414dc0);
      auVar5 = _pextlw((long)*(int *)(iVar2 + 0xec),auVar5._0_8_);
      auVar5 = _qmtc2(auVar5._0_4_);
      auVar11 = _vsub(auVar5,auVar10);
      auVar5 = _lqc2(*(undefined1 (*) [16])(puVar7 + 0x1c));
      auVar10 = _vsub(auVar11,auVar5);
      auVar5 = _qmfc2(auVar10._0_4_);
      bVar1 = true;
      if ((auVar5._0_4_ & 0x7f800000) < 0x37800001) {
        auVar5 = _sqc2(auVar10);
        uStack_4c = auVar5._4_4_;
        bVar1 = true;
        if ((uStack_4c & 0x7f800000) < 0x37800001) {
          auVar5 = _sqc2(auVar10);
          uStack_48 = auVar5._8_4_;
          bVar1 = 0x37800000 < (uStack_48 & 0x7f800000);
        }
      }
      _qmfc2(auVar11._0_4_);
      if (bVar1) {
        FUN_00191b40(param_1,*(undefined8 *)(*(int *)(puVar7[0xd] + 0x7c) + 0xa0));
      }
      if (lVar4 == 0) {
        if (*(char *)(puVar7[0x24] + 0x1b8) != '\0') {
          puVar7[0xc] = 2;
          FUN_00191f28(param_1);
          return 0;
        }
      }
      else {
        iVar2 = FUN_002dfe08(*(undefined4 *)(puVar7[0x24] + 8),0x44f9f0);
        iVar3 = FUN_002dfe08(*(undefined4 *)(puVar7[0x24] + 8),0x44f7c0);
        if (*(char *)(iVar2 + 4) == '\0') {
          piVar6 = (int *)puVar7[0x24];
        }
        else if (*(char *)(iVar3 + 4) == '\0') {
          piVar6 = (int *)puVar7[0x24];
        }
        else {
          uStack_40 = *(undefined4 *)(iVar3 + 8);
          fVar9 = (float)((int)*(float *)(iVar2 + 8) * (uint)(0.0 < *(float *)(iVar2 + 8)));
          fVar8 = *(float *)(puVar7[0xd] + 0x838);
          auStack_3c[0] = (int)fVar9 * (uint)(fVar9 < fVar8) | (int)fVar8 * (uint)(fVar9 >= fVar8);
          if ((*(char *)(puVar7[0x24] + 0x198) == '\0') ||
             (lVar4 = FUN_00192560(param_1,&uStack_40,auStack_3c), lVar4 != 0)) {
            *puVar7 = uStack_40;
            puVar7[1] = auStack_3c[0];
            piVar6 = (int *)puVar7[0x24];
          }
          else {
            puVar7[0xc] = 2;
            FUN_00191f28(param_1);
            piVar6 = (int *)puVar7[0x24];
          }
        }
        lVar4 = (**(code **)(*piVar6 + 0x5c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x58));
        if (lVar4 == 1) {
          FUN_001921d8(param_1,0);
          return 0;
        }
        iVar2 = *(int *)puVar7[0x24];
        fVar9 = (float)(**(code **)(iVar2 + 100))((int)puVar7[0x24] + (int)*(short *)(iVar2 + 0x60))
        ;
        if ((fVar9 < 10.0) && (lVar4 = FUN_00192d48(param_1), lVar4 != 0)) {
          FUN_00191b40(param_1,*(undefined8 *)(*(int *)(puVar7[0xd] + 0x7c) + 0xa0));
          *(undefined1 *)((int)puVar7 + 0x95) = 1;
        }
      }
      FUN_00192568(param_1);
    }
    else {
      *(undefined1 *)(iVar2 + 0x1b5) = 0;
      (**(code **)(puVar7[0x20] + 0x3c))((int)puVar7 + (int)*(short *)(puVar7[0x20] + 0x38));
    }
  }
  else {
    iVar2 = puVar7[0x61];
    lVar4 = FUN_00182ef0(puVar7[0xd] + 0x810,*(undefined8 *)(puVar7 + 4),1);
    if (lVar4 == 0) {
      lVar4 = FUN_001917a0(*(undefined4 *)(puVar7[0xd] + 0x838),0x3dcccccd,param_1,
                           *(undefined8 *)(puVar7 + 4),iVar2 == 0);
      if (lVar4 != 0) {
        FUN_001921d8(param_1,1);
      }
    }
    else {
      puVar7[0xc] = 2;
      FUN_00191f28(param_1);
    }
  }
  return 0;
}


// ==== FUN_00192a00 @ 00192a00 ====

undefined8 FUN_00192a00(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 4) {
    uVar2 = FUN_00192698();
  }
  else if (iVar1 < 5) {
    uVar2 = 0;
    if (iVar1 == 1) {
      uVar2 = FUN_001925d8();
    }
  }
  else {
    uVar2 = 0;
    if (iVar1 == 7) {
      uVar2 = FUN_00192570();
    }
  }
  return uVar2;
}


// ==== FUN_00192a78 @ 00192a78 ====

void FUN_00192a78(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 in_zero_qw [16];
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = (int)param_1;
  if (*(char *)(param_2 + 0x58) == '\0') {
    *(undefined1 *)(*(int *)(iVar5 + 0x90) + 0x1b8) = 0;
    *(undefined1 *)(iVar5 + 0x95) = 0;
    FUN_00179f60(param_2,*(int *)(iVar5 + 0x90) + 0x6c);
    *(undefined1 *)(*(int *)(iVar5 + 0x90) + 0xb0) = 0;
    iVar1 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar1 + 0xb8) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(iVar1 + 0xbc) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(param_2 + 0x4c);
    iVar1 = *(int *)(param_2 + 0x30);
    iVar2 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar2 + 0xc4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 200) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(param_2 + 0x34);
    iVar2 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xd8) = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(iVar1 + 0xe4) = *(undefined4 *)(param_2 + 0x4c);
    iVar1 = *(int *)(iVar5 + 0x90);
    iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x14);
    *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(iVar2 + 0x30);
    *(undefined4 *)(iVar1 + 0xf8) = *(undefined4 *)(iVar2 + 0x34);
    *(undefined4 *)(iVar1 + 0xfc) = *(undefined4 *)(iVar2 + 0x38);
    *(undefined4 *)(*(int *)(iVar5 + 0x90) + 0x138) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(*(int *)(iVar5 + 0x90) + 0x13c) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(*(int *)(iVar5 + 0x90) + 0x154) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(*(int *)(iVar5 + 0x90) + 0x158) = *(undefined4 *)(param_2 + 0x34);
    iVar1 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(iVar1 + 0x14c) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(iVar1 + 0x150) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined1 *)(*(int *)(iVar5 + 0x90) + 0xb1) = 1;
    *(undefined4 *)(*(int *)(iVar5 + 0x90) + 0x140) = *(undefined4 *)(param_2 + 0x54);
    puVar3 = (undefined4 *)FUN_00179d40(param_2,*(undefined4 *)(*(int *)(iVar5 + 0x90) + 0x140));
    iVar1 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar1 + 0xe8) = *puVar3;
    *(undefined4 *)(iVar1 + 0xec) = puVar3[1];
    *(undefined4 *)(iVar1 + 0xf0) = puVar3[2];
    *(undefined1 *)(*(int *)(iVar5 + 0x90) + 0xb4) = 0;
    *(undefined4 *)(*(int *)(iVar5 + 0x90) + 0x118) = 0;
    iVar1 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar1 + 0x11c) = 0;
    *(undefined4 *)(iVar1 + 0x120) = 0;
    *(undefined4 *)(iVar1 + 0x124) = 0;
    *(undefined1 *)(*(int *)(iVar5 + 0x90) + 0x198) = 0;
    iVar1 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar1 + 0x19c) = DAT_004514f8;
    *(undefined4 *)(iVar1 + 0x1a0) = DAT_004514fc;
    *(undefined4 *)(iVar1 + 0x1a4) = DAT_00451500;
    *(undefined4 *)(*(int *)(iVar5 + 0x90) + 0x1a8) = 0;
    FUN_003052a0(*(undefined4 *)(iVar5 + 0x90));
    iVar1 = *(int *)(iVar5 + 0x90);
    auVar4 = _pextlw((long)*(int *)(iVar1 + 0xf0),(long)*(int *)(iVar1 + 0xe8));
    auVar4 = _pextlw((long)*(int *)(iVar1 + 0xec),auVar4._0_8_);
    auVar4 = _por(in_zero_qw,auVar4);
    FUN_00191b40(param_1,*(undefined8 *)(*(int *)(*(int *)(iVar5 + 0x34) + 0x7c) + 0xa0),
                 auVar4._0_8_);
    iVar1 = *(int *)(iVar5 + 0x180);
  }
  else {
    *(undefined1 *)(iVar5 + 0x95) = 1;
    FUN_00191b40(param_1,*(undefined8 *)(*(int *)(*(int *)(iVar5 + 0x34) + 0x7c) + 0xa0));
    iVar1 = *(int *)(iVar5 + 0x180);
  }
  if (iVar1 != 0) {
    if (iVar1 == param_2) {
      *(int *)(iVar5 + 0x180) = param_2;
      goto LAB_00192d20;
    }
    FUN_00179ef0();
    *(undefined4 *)(iVar5 + 0x180) = 0;
  }
  *(int *)(iVar5 + 0x180) = param_2;
LAB_00192d20:
  *(undefined4 *)(iVar5 + 0x30) = 4;
  uVar6 = FUN_00179f18(param_2);
  *(undefined4 *)(iVar5 + 0x3c) = uVar6;
  return;
}


// ==== FUN_00192d48 @ 00192d48 ====

undefined4 FUN_00192d48(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x180);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x90);
  uVar3 = 0;
  if ((((*(char *)(iVar2 + 0xb4) != '\0') && (*(float *)(iVar2 + 0xe8) == *(float *)(iVar1 + 0x44)))
      && (*(float *)(iVar2 + 0xec) == *(float *)(iVar1 + 0x48))) &&
     (*(float *)(iVar2 + 0xf0) == *(float *)(iVar1 + 0x4c))) {
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_00192dc0 @ 00192dc0 ====

undefined4 FUN_00192dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    iVar1 = *(int *)(param_1 + 0x180);
  }
  else {
    if (*(int *)(param_1 + 0x184) == 0) {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    else {
      FUN_00179ef0();
      *(undefined4 *)(param_1 + 0x184) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x180);
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x30) == 8) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00179ed0(iVar1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x7c) + 0xa0));
    uVar2 = FUN_0017a008(*(undefined4 *)(param_1 + 0x180));
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_00192e50 @ 00192e50 ====

void FUN_00192e50(int param_1)

{
  int iVar1;
  
  FUN_00191790();
  if (*(int *)(param_1 + 0x180) == 0) {
    iVar1 = *(int *)(param_1 + 0x184);
  }
  else {
    FUN_00179ef0();
    *(undefined4 *)(param_1 + 0x180) = 0;
    iVar1 = *(int *)(param_1 + 0x184);
  }
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x95) = 0;
  }
  else {
    FUN_00179ef0();
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined1 *)(param_1 + 0x95) = 0;
  }
  *(undefined1 *)(param_1 + 0x94) = 0;
  return;
}


// ==== FUN_00192eb0 @ 00192eb0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00192eb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x180) == 0) {
    return;
  }
  if (*(int *)(*(int *)(iVar3 + 0x180) + 8) != 10) {
    lVar2 = FUN_00172418(*(undefined4 *)(iVar3 + 0x90));
    if (lVar2 == 0) {
      if ((param_3 != 0) &&
         (cVar1 = (*(code *)param_3)(*(undefined8 *)(*(int *)(iVar3 + 0x180) + 0x20)),
         cVar1 != '\x01')) {
        return;
      }
      auVar5 = _qmtc2(0x3f19999a);
      auVar4 = _lqc2(_DAT_004432c0);
      auVar6 = _qmtc2(0x3f000000);
      auVar4 = _vmulbc(auVar4,auVar5);
      auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar3 + 0x180) + 0x20));
      auVar4 = _vmulbc(auVar4,auVar6);
      auVar6 = _vadd(auVar5,auVar4);
      auVar4 = _qmfc2(auVar6._0_4_);
      auVar5 = _lqc2(_DAT_00414e10);
      auVar5 = _vadd(auVar6,auVar5);
      auVar5 = _qmfc2(auVar5._0_4_);
      lVar2 = FUN_00175f50(DAT_0040f4d4 + 4000,auVar4._0_8_,auVar5._0_8_,0x21,
                           *(undefined4 *)(*(int *)(iVar3 + 0x34) + 0x7c),0);
      if (lVar2 != 0) {
        return;
      }
    }
    *(undefined4 *)(iVar3 + 0x30) = 2;
    FUN_00191f28(param_1);
    return;
  }
  return;
}


// ==== FUN_00192fb0 @ 00192fb0 ====

undefined8 FUN_00192fb0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  switch(*(undefined4 *)(iVar2 + 0x30)) {
  default:
    break;
  case 1:
  case 7:
    uVar1 = FUN_0017a9c8(*(undefined4 *)(iVar2 + 0x180));
    return uVar1;
  case 4:
  case 5:
    if (*(char *)(iVar2 + 0x95) == '\0') {
      if (*(char *)(*(int *)(iVar2 + 0x180) + 0x58) != '\0') {
        uVar1 = FUN_0017a9c8();
        return uVar1;
      }
      uVar1 = FUN_00193040(param_1);
      return uVar1;
    }
  }
  return 0;
}


// ==== FUN_00193040 @ 00193040 ====

undefined4 FUN_00193040(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 in_zero_qw [16];
  long lVar3;
  undefined1 in_a1_qw [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5 = _por(in_zero_qw,in_a1_qw);
  if (*(int *)(param_1 + 0x184) == 0) {
    *(int *)(param_1 + 0x184) = param_1 + 0x110;
  }
  auVar4 = _por(in_zero_qw,auVar5);
  lVar3 = FUN_0017a9c8(*(undefined4 *)(param_1 + 0x184),auVar4._0_8_);
  if (lVar3 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x184) + 8);
    if ((((iVar1 - 2U < 4) || (iVar1 == 7)) || (iVar1 == 8)) || (bVar2 = false, iVar1 == 6)) {
      bVar2 = true;
    }
    if (bVar2) {
      return 0;
    }
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_00179e50(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(*(int *)(param_1 + 0x180) + 0x34),
                 auVar5._0_8_,0);
  }
  *(undefined1 *)(param_1 + 0x94) = 1;
  return 1;
}


// ==== FUN_001930f8 @ 001930f8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001930f8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_90 [16];
  
  iVar9 = (int)param_1;
  if ((*(char *)(iVar9 + 0x95) == '\0') &&
     (iVar2 = *(int *)(*(int *)(iVar9 + 0x180) + 0x34), iVar2 != 0)) {
    iVar11 = (int)param_2;
    iVar3 = *(int *)(iVar11 + 0x30);
    if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x10) == *(int *)(iVar2 + 0x10) && (iVar3 == iVar2)))) {
      lVar5 = FUN_00179cd0();
      if (1 < lVar5) {
        FUN_001933f0(param_1);
      }
      iVar2 = FUN_00179cd0(param_2);
      auStack_90 = *(undefined1 (*) [16])(iVar11 + 0x20);
      iVar3 = FUN_00179cd0(*(undefined4 *)(iVar9 + 0x180));
      if (0x32 < iVar3 + iVar2) {
        iVar2 = FUN_00179cd0(*(undefined4 *)(iVar9 + 0x180));
        iVar2 = 0x31 - iVar2;
        if (iVar2 < 1) {
          return;
        }
        piVar4 = (int *)FUN_00179d40(param_2,iVar2);
        auVar6 = _pextlw((long)piVar4[2],(long)*piVar4);
        auVar6 = _pextlw((long)piVar4[1],auVar6._0_8_);
        auVar13 = _lqc2(_DAT_00414dc0);
        auVar6 = _qmtc2(auVar6._0_4_);
        auVar6 = _vsub(auVar6,auVar13);
        auStack_90 = _sqc2(auVar6);
      }
      if (0 < iVar2) {
        iVar10 = 1;
        iVar3 = FUN_00179cd0(*(undefined4 *)(iVar9 + 0x180));
        if (1 < iVar2) {
          iVar7 = *(int *)(iVar11 + 0x50);
          while( true ) {
            uVar1 = *(uint *)(iVar10 * 4 + *(int *)(iVar7 + 0xc));
            if (uVar1 < *(uint *)(*(int *)(iVar7 + 4) + 0xc)) {
              piVar8 = (int *)(uVar1 * 0x14 + *(int *)(*(int *)(iVar7 + 4) + 0x18));
              piVar4 = (int *)0x0;
              if (*piVar8 != -1) {
                piVar4 = piVar8;
              }
            }
            else {
              piVar4 = (int *)0x0;
            }
            iVar10 = iVar10 + 1;
            FUN_0017ab40(*(undefined4 *)(iVar9 + 0x180),piVar4);
            if (iVar2 <= iVar10) break;
            iVar7 = *(int *)(iVar11 + 0x50);
          }
        }
        FUN_0017aed8(*(undefined4 *)(iVar9 + 0x180),auStack_90._0_8_);
        FUN_0017af20(*(undefined4 *)(iVar9 + 0x180),iVar3 + -1,
                     *(undefined4 *)(*(int *)(iVar9 + 0x90) + 0x140));
        *(undefined4 *)(iVar9 + 0x10) = auStack_90._0_4_;
        *(undefined4 *)(iVar9 + 0x14) = auStack_90._4_4_;
        *(undefined4 *)(iVar9 + 0x18) = auStack_90._8_4_;
        *(undefined4 *)(iVar9 + 0x1c) = auStack_90._12_4_;
        FUN_00179f60(*(undefined4 *)(iVar9 + 0x180),*(int *)(iVar9 + 0x90) + 0x6c);
        iVar2 = *(int *)(iVar9 + 0x180);
        iVar3 = *(int *)(iVar9 + 0x90);
        *(undefined4 *)(iVar3 + 0xb8) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(iVar3 + 0xc0) = *(undefined4 *)(iVar2 + 0x4c);
        iVar2 = *(int *)(iVar9 + 0x90);
        iVar3 = *(int *)(*(int *)(iVar9 + 0x180) + 0x34);
        *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar3 + 4);
        *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar2 + 0xd8) = *(undefined4 *)(iVar3 + 0xc);
        iVar2 = *(int *)(iVar9 + 0x180);
        iVar3 = *(int *)(iVar9 + 0x90);
        *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(iVar3 + 0xe4) = *(undefined4 *)(iVar2 + 0x4c);
        iVar2 = *(int *)(iVar9 + 0x90);
        iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x14);
        *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar3 + 0x30);
        *(undefined4 *)(iVar2 + 0xf8) = *(undefined4 *)(iVar3 + 0x34);
        *(undefined4 *)(iVar2 + 0xfc) = *(undefined4 *)(iVar3 + 0x38);
        *(undefined4 *)(*(int *)(iVar9 + 0x90) + 0x13c) =
             *(undefined4 *)(*(int *)(iVar9 + 0x180) + 0x34);
        *(undefined4 *)(*(int *)(iVar9 + 0x90) + 0x158) =
             *(undefined4 *)(*(int *)(iVar9 + 0x180) + 0x34);
        iVar2 = *(int *)(iVar9 + 0x180);
        iVar3 = *(int *)(iVar9 + 0x90);
        *(undefined4 *)(iVar3 + 0x148) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(iVar3 + 0x14c) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(iVar3 + 0x150) = *(undefined4 *)(iVar2 + 0x4c);
        uVar12 = FUN_00179f18(*(undefined4 *)(iVar9 + 0x180));
        *(undefined4 *)(iVar9 + 0x3c) = uVar12;
      }
    }
  }
  return;
}


// ==== FUN_001933f0 @ 001933f0 ====

void FUN_001933f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  
  do {
    if (*(uint *)(*(int *)(param_1 + 0x90) + 0x140) < 2) {
      iVar1 = *(int *)(param_1 + 0x90);
LAB_0019344c:
      puVar2 = (undefined4 *)
               FUN_00179d40(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(iVar1 + 0x140));
      iVar1 = *(int *)(param_1 + 0x90);
      *(undefined4 *)(iVar1 + 0xe8) = *puVar2;
      *(undefined4 *)(iVar1 + 0xec) = puVar2[1];
      *(undefined4 *)(iVar1 + 0xf0) = puVar2[2];
      return;
    }
    lVar3 = FUN_00179cd0(*(undefined4 *)(param_1 + 0x180));
    if (lVar3 < 3) {
      iVar1 = *(int *)(param_1 + 0x90);
      goto LAB_0019344c;
    }
    FUN_0017a9f8(*(undefined4 *)(param_1 + 0x180));
    *(int *)(*(int *)(param_1 + 0x90) + 0x140) = *(int *)(*(int *)(param_1 + 0x90) + 0x140) + -1;
  } while( true );
}


// ==== FUN_00193488 @ 00193488 ====

void FUN_00193488(void)

{
  FUN_00191578();
  return;
}


// ==== FUN_001934a8 @ 001934a8 ====

void FUN_001934a8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  FUN_001915d8();
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x30) == 4) {
    lVar1 = FUN_00182ef0(*(int *)(iVar2 + 0x34) + 0x810,*(undefined8 *)(iVar2 + 0x10),1);
    if (lVar1 == 0) {
      lVar1 = FUN_001917a0(*(undefined4 *)(*(int *)(iVar2 + 0x34) + 0x838),0x3dcccccd,param_1,
                           *(undefined8 *)(iVar2 + 0x10),1);
      if ((lVar1 != 0) && (*(undefined4 *)(iVar2 + 0x30) = 8, *(char *)(iVar2 + 0x38) != '\0')) {
        (**(code **)(*(int *)(iVar2 + 0x80) + 0x1c))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x80) + 0x18),*(undefined8 *)(iVar2 + 0x20));
        iVar2 = *(int *)(iVar2 + 0x34);
        *(undefined4 *)(iVar2 + 0x810) = *(undefined4 *)(iVar2 + 0x820);
        *(undefined4 *)(iVar2 + 0x814) = *(undefined4 *)(iVar2 + 0x824);
        *(undefined4 *)(iVar2 + 0x818) = *(undefined4 *)(iVar2 + 0x828);
        *(undefined4 *)(iVar2 + 0x81c) = *(undefined4 *)(iVar2 + 0x82c);
        *(undefined1 *)(iVar2 + 0x846) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x30) = 2;
    }
  }
  return;
}


// ==== FUN_00193568 @ 00193568 ====

void FUN_00193568(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  auVar2._8_4_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = in_register_0000005c;
  auVar2 = _por(in_zero_qw,auVar2);
  FUN_001916e8();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x30) = 4;
  auVar2 = _por(in_zero_qw,auVar2);
  FUN_00191b40(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x34) + 0x7c) + 0xa0),auVar2._0_8_)
  ;
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(iVar1 + 0x34) + 0x7c) + 0xa0));
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar5 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar5);
  auVar2 = _qmfc2(auVar2._0_4_);
  *(int *)(iVar1 + 0x3c) = auVar2._0_4_;
  return;
}


// ==== FUN_00193608 @ 00193608 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00193608(int param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((param_3 == 0) ||
     (cVar1 = (*(code *)param_3)(*(undefined8 *)(param_1 + 0x10)), cVar1 == '\x01')) {
    auVar4 = _qmtc2(0x3f19999a);
    auVar5 = _qmtc2(0x3f000000);
    auVar3 = _lqc2(_DAT_004432c0);
    auVar3 = _vmulbc(auVar3,auVar4);
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar3 = _vmulbc(auVar3,auVar5);
    auVar5 = _vadd(auVar4,auVar3);
    auVar3 = _qmfc2(auVar5._0_4_);
    auVar4 = _lqc2(_DAT_00414e10);
    auVar4 = _vadd(auVar5,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    lVar2 = FUN_00175f50(DAT_0040f4d4 + 4000,auVar3._0_8_,auVar4._0_8_,0x21,
                         *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x7c),0);
    if (lVar2 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 2;
    }
  }
  return;
}


// ==== FUN_00193700 @ 00193700 ====

void FUN_00193700(int param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_00191578();
  return;
}


// ==== FUN_00193720 @ 00193720 ====

void FUN_00193720(undefined8 param_1)

{
  int iVar1;
  
  FUN_001915d8();
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x30) == 4) {
    if (*(int *)(*(int *)(iVar1 + 0x34) + 0x1ee0) == 0) {
      *(undefined4 *)(iVar1 + 0x30) = 8;
    }
    else {
      FUN_00193818(param_1);
    }
  }
  return;
}


// ==== FUN_00193778 @ 00193778 ====

void FUN_00193778(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  auVar2._8_4_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = in_register_0000005c;
  auVar2 = _por(in_zero_qw,auVar2);
  FUN_001916e8();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x30) = 4;
  auVar2 = _por(in_zero_qw,auVar2);
  FUN_00191b40(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x34) + 0x7c) + 0xa0),auVar2._0_8_)
  ;
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(iVar1 + 0x34) + 0x7c) + 0xa0));
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar5 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar5);
  auVar2 = _qmfc2(auVar2._0_4_);
  *(int *)(iVar1 + 0x3c) = auVar2._0_4_;
  return;
}


// ==== FUN_00193818 @ 00193818 ====

void FUN_00193818(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 in_zero_qw [16];
  char cVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int iVar4;
  
  iVar4 = (int)param_1;
  uVar1 = FUN_00183380(*(int *)(iVar4 + 0x34) + 0x1eb0);
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = uVar1;
  auVar3 = _por(in_zero_qw,auVar3);
  cVar2 = FUN_001917a0(*(undefined4 *)(*(int *)(iVar4 + 0x34) + 0x838),0x3dcccccd,param_1,
                       auVar3._0_8_,1);
  if (cVar2 != '\x01') {
    *(undefined4 *)(iVar4 + 0x30) = 8;
  }
  return;
}


// ==== FUN_00193880 @ 00193880 ====

void FUN_00193880(undefined4 *param_1)

{
  FUN_00173690(param_1 + 1);
  *(undefined1 *)((int)param_1 + 9) = 0;
  *param_1 = 0xbf800000;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// ==== FUN_001938c0 @ 001938c0 ====

void FUN_001938c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_003f6638;
  if (((uint)param_1 & 7) == 0) {
    do {
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *param_1 = *puVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      puVar1 = puVar1 + 4;
      param_1 = param_1 + 4;
    } while (puVar1 != (undefined8 *)&UNK_003f66b8);
  }
  else {
    do {
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *param_1 = *puVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      puVar1 = puVar1 + 4;
      param_1 = param_1 + 4;
    } while (puVar1 != (undefined8 *)&UNK_003f66b8);
    puVar1 = (undefined8 *)&UNK_003f66b8;
  }
  *param_1 = *puVar1;
  return;
}


// ==== FUN_00193980 @ 00193980 ====

void FUN_00193980(void)

{
  return;
}


// ==== FUN_00193988 @ 00193988 ====

void FUN_00193988(void)

{
  return;
}


// ==== FUN_00193990 @ 00193990 ====

void FUN_00193990(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00193b40();
  FUN_001939e0(param_1);
  *(undefined1 *)(iVar1 + 9) = param_2;
  *(undefined1 *)(iVar1 + 8) = 1;
  return;
}


// ==== FUN_001939e0 @ 001939e0 ====

void FUN_001939e0(undefined8 param_1)

{
  FUN_00181960(*(int *)param_1 + 0xec0,param_1);
  return;
}


// ==== FUN_00193a08 @ 00193a08 ====

undefined1 FUN_00193a08(void)

{
  int iVar1;
  
  iVar1 = FUN_00193b40();
  return *(undefined1 *)(iVar1 + 8);
}


// ==== FUN_00193a28 @ 00193a28 ====

void FUN_00193a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00181810(*(int *)param_1 + 0xec0,param_1,param_2,param_3);
  return;
}


// ==== FUN_00193a60 @ 00193a60 ====

void FUN_00193a60(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00193b40();
  FUN_00173640(param_1,puVar1 + 1);
  if (param_3 == 0) {
    *puVar1 = 0xbf800000;
  }
  else {
    *puVar1 = param_1;
  }
  return;
}


// ==== FUN_00193ac8 @ 00193ac8 ====

void FUN_00193ac8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00193b40();
  *puVar1 = 0xbf800000;
  FUN_00173690(puVar1 + 1);
  return;
}


// ==== FUN_00193af8 @ 00193af8 ====

undefined8 FUN_00193af8(void)

{
  float *pfVar1;
  undefined8 uVar2;
  
  pfVar1 = (float *)FUN_00193b40();
  if (*pfVar1 == -1.0) {
    uVar2 = FUN_00173610(pfVar1 + 1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_00193b40 @ 00193b40 ====

int FUN_00193b40(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00181a18(*(int *)param_1 + 0xec0,param_1);
  if (lVar2 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)param_1 + (int)lVar2 * 0x94 + 0xee0;
  }
  return iVar1;
}


// ==== FUN_00193b98 @ 00193b98 ====

int FUN_00193b98(void)

{
  int iVar1;
  
  iVar1 = FUN_00193b40();
  return iVar1 + 0xc;
}


// ==== FUN_00193be8 @ 00193be8 ====

void FUN_00193be8(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined8 in_v0_udw;
  int iVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  
  piVar5 = (int *)param_1;
  lVar1 = FUN_001735e0(piVar5 + 2);
  if (lVar1 == 0) {
    iVar3 = *piVar5;
  }
  else {
    lVar1 = FUN_00173610(piVar5 + 2);
    if (lVar1 != 0) {
      FUN_00181f48(0,0x3f800000,*piVar5 + 0xc80,0,5);
    }
    iVar3 = *piVar5;
  }
  lVar1 = FUN_0018d608(iVar3 + 0xd10);
  if (lVar1 == 0) {
    lVar1 = FUN_00188f10(*piVar5 + 0x150);
    if (lVar1 != 0) {
      uVar2 = FUN_00189048(*piVar5 + 0x150);
      auVar4._8_8_ = in_v0_udw;
      auVar4._0_8_ = uVar2;
      auVar4 = _por(in_zero_qw,auVar4);
      FUN_0017e428(*piVar5 + 0x650,auVar4._0_8_);
    }
  }
  else {
    FUN_00181f48(0,0x3f800000,*piVar5 + 0xc80,0,5);
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_00193cc8 @ 00193cc8 ====

void FUN_00193cc8(undefined8 param_1)

{
  long lVar1;
  
  FUN_00193980();
  lVar1 = FUN_00180bc0(*(int *)param_1 + 0xb30);
  if (lVar1 == 0) {
    FUN_00193a28(param_1,0xc,0);
  }
  FUN_00173690((int *)param_1 + 2);
  return;
}


// ==== FUN_00193d18 @ 00193d18 ====

void FUN_00193d18(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00193d40 @ 00193d40 ====

undefined4 FUN_00193d40(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_2;
  if (iVar2 == 5) {
    FUN_00193a28(param_1,0xc,0);
  }
  else {
    if (5 < iVar2) {
      if (iVar2 == 6) {
        iVar2 = (int)param_1 + 8;
        lVar1 = FUN_001735e0(iVar2);
        if (lVar1 != 0) {
          return 1;
        }
        uVar3 = FUN_0016de70(0x3dcccccd,0x3f000000,DAT_0040f4d4);
        FUN_00173640(uVar3,iVar2);
        return 1;
      }
      if (iVar2 != 9) {
        return 0;
      }
      FUN_00193990(param_1,1);
      return 0;
    }
    if (iVar2 != 2) {
      return 0;
    }
  }
  return 1;
}


// ==== FUN_00193e08 @ 00193e08 ====

void FUN_00193e08(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  undefined1 auVar3 [16];
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_v0_udw;
  undefined4 uVar8;
  undefined8 extraout_v0_udw_00;
  int iVar9;
  int *piVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  piVar10 = (int *)param_1;
  lVar5 = FUN_00188f10(*piVar10 + 0x150);
  if ((lVar5 == 0) || (fVar11 = (float)FUN_00189310(*piVar10 + 0x150), 3.0 < fVar11)) {
LAB_00193f68:
    FUN_00193990(param_1,0);
  }
  else {
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _sqc2(auVar12);
    uVar6 = FUN_00189048(*piVar10 + 0x150);
    uVar8 = (undefined4)((ulong)extraout_v0_udw >> 0x20);
    pauVar1 = (undefined1 (*) [16])(*(int *)(*piVar10 + 0x7c) + 0xa0);
    auVar3 = *pauVar1;
    auVar13 = *pauVar1;
    piVar10[0xc] = (int)((float)piVar10[0xc] + *(float *)(DAT_0040f4d0 + 0x1c));
    cVar4 = FUN_00176f00(*piVar10 + 0x1fcc);
    auVar15._8_4_ = (int)extraout_v0_udw;
    auVar15._0_8_ = uVar6;
    auVar15._12_4_ = uVar8;
    auVar15 = _lqc2(auVar15);
    if (cVar4 != '\0') {
      auVar16 = _lqc2(auVar13);
      auVar13 = _lqc2(*(undefined1 (*) [16])(piVar10 + 4));
      auVar14 = _vsub(auVar15,auVar16);
      auVar15 = _vsub(auVar13,auVar16);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _vmul(auVar14,auVar15);
      _vaddabc(auVar13,auVar13);
      auVar14 = _vmaddbc(auVar16,auVar13);
      auVar13 = _vmul(auVar15,auVar15);
      auVar15 = _qmfc2(auVar14._0_4_);
      auVar14 = _lqc2(auVar12);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar14,auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      if ((auVar15._0_4_ <= 0.0) || (bVar2 = false, auVar13._0_4_ < (float)piVar10[2])) {
        bVar2 = true;
      }
      iVar9 = *piVar10;
      if (bVar2) {
        uVar7 = FUN_001890d0(piVar10[0xc],iVar9 + 0x150);
        piVar10[4] = (int)uVar7;
        piVar10[5] = (int)((ulong)uVar7 >> 0x20);
        piVar10[6] = (int)extraout_v0_udw_00;
        piVar10[7] = (int)((ulong)extraout_v0_udw_00 >> 0x20);
        iVar9 = *piVar10;
      }
      uVar7 = FUN_00182ba0(iVar9 + 0x810,*(undefined8 *)(piVar10 + 4));
      cVar4 = FUN_00182410(*piVar10 + 0x810,*(undefined8 *)(piVar10 + 4),uVar7,0);
      if (cVar4 != '\x01') goto LAB_00193f68;
      piVar10[0xc] = 0;
    }
    auVar13._8_4_ = (int)extraout_v0_udw;
    auVar13._0_8_ = uVar6;
    auVar13._12_4_ = uVar8;
    auVar15 = _lqc2(auVar13);
    auVar13 = _lqc2(auVar3);
    auVar15 = _vsub(auVar15,auVar13);
    auVar13 = _lqc2(auVar12);
    auVar12 = _vmul(auVar15,auVar15);
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar13,auVar12);
    auVar12 = _qmfc2(auVar12._0_4_);
    if (auVar12._0_4_ < (float)piVar10[2]) {
      FUN_00193990(param_1,1);
    }
    else {
      FUN_0017e428(*piVar10 + 0x650,uVar6);
    }
  }
  return;
}


// ==== FUN_00193fe8 @ 00193fe8 ====

void FUN_00193fe8(undefined8 param_1,long param_2)

{
  undefined1 in_zero_qw [16];
  char cVar1;
  undefined8 uVar2;
  int in_v0_udw;
  int in_register_0000002c;
  undefined1 auVar3 [16];
  int *piVar4;
  float fVar5;
  
  FUN_00193980();
  if ((param_2 == 0) || (*(int *)param_2 != 1)) {
    fVar5 = 5.0;
  }
  else {
    fVar5 = (float)((int *)param_2)[2];
    fVar5 = fVar5 * fVar5;
  }
  piVar4 = (int *)param_1;
  piVar4[2] = (int)fVar5;
  piVar4[0xc] = 0;
  uVar2 = FUN_001890d0(*(float *)(DAT_0040f4d0 + 0x1c) * 8.0,*piVar4 + 0x150);
  auVar3._8_4_ = in_v0_udw;
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = in_register_0000002c;
  auVar3 = _por(in_zero_qw,auVar3);
  *(undefined8 *)(piVar4 + 4) = uVar2;
  piVar4[6] = in_v0_udw;
  piVar4[7] = in_register_0000002c;
  cVar1 = FUN_00182410(*piVar4 + 0x810,auVar3._0_8_,0,0);
  if (cVar1 == '\x01') {
    *(undefined1 *)(*(int *)(*piVar4 + 0x694) + 0x30) = 0;
    FUN_001825b0(*piVar4 + 0x810);
  }
  else {
    FUN_00193990(param_1,0);
  }
  return;
}


// ==== FUN_001940c8 @ 001940c8 ====

void FUN_001940c8(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_001940e8 @ 001940e8 ====

void FUN_001940e8(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int *piVar4;
  float fVar5;
  
  piVar4 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar4 + 0x150);
  if (((lVar1 == 0) || (fVar5 = (float)FUN_00189310(*piVar4 + 0x150), 3.0 < fVar5)) ||
     (lVar1 = FUN_00188350(*piVar4 + 0x290), lVar1 != 0)) {
    FUN_00193990(param_1,0);
  }
  else if (*(char *)(*piVar4 + 0x291) == '\0') {
    uVar2 = FUN_00189048(*piVar4 + 0x150);
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = uVar2;
    auVar3 = _por(in_zero_qw,auVar3);
    FUN_0017db98(*piVar4 + 0x650,auVar3._0_8_);
  }
  else {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_001941a8 @ 001941a8 ====

void FUN_001941a8(int *param_1)

{
  FUN_00193980();
  FUN_00187fe0(*param_1 + 0x290,0);
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 1;
  FUN_001825b0(*param_1 + 0x810);
  return;
}


// ==== FUN_001941f8 @ 001941f8 ====

void FUN_001941f8(int *param_1)

{
  FUN_00193988();
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_00194240 @ 00194240 ====

void FUN_00194240(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  char cVar3;
  undefined8 in_v0_udw;
  int iVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  float fVar7;
  
  piVar6 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar6 + 0x150);
  if (((lVar1 == 0) || (fVar7 = (float)FUN_00189310(*piVar6 + 0x150), 3.0 < fVar7)) ||
     (lVar1 = FUN_00188350(*piVar6 + 0x290), lVar1 != 0)) {
    FUN_00193990(param_1,0);
    return;
  }
  if (*(char *)(*piVar6 + 0x291) != '\0') {
    FUN_00193990(param_1,1);
    return;
  }
  switch(piVar6[2]) {
  case 0:
    cVar3 = FUN_00176f00(*piVar6 + 0x1fcc);
    if (cVar3 != '\0') {
      lVar1 = FUN_00173610(piVar6 + 3);
      if (lVar1 == 0) {
        iVar4 = *piVar6;
      }
      else {
        lVar1 = FUN_001944d8(param_1);
        if (lVar1 == 0) {
          iVar4 = *piVar6;
        }
        else {
          FUN_001945f0(param_1);
          FUN_00173640(0x3f800000,piVar6 + 3);
          iVar4 = *piVar6;
        }
      }
      goto LAB_001943e0;
    }
    break;
  case 1:
    lVar1 = FUN_001829e8(*piVar6 + 0x810);
    if (lVar1 == 0) {
      lVar1 = FUN_001829a8(*piVar6 + 0x810);
      if (lVar1 != 0) {
        iVar4 = *piVar6;
        goto LAB_001943e0;
      }
      piVar6[2] = 0;
    }
    else {
      piVar6[2] = 0;
    }
    break;
  case 2:
  case 3:
    if (*(char *)(*(int *)(*piVar6 + 0x7c) + 0x3a9) != *(char *)(*(int *)(*piVar6 + 0x7c) + 0x3aa))
    {
      iVar4 = *piVar6;
      goto LAB_001943e0;
    }
    piVar6[2] = 0;
    break;
  case 4:
    lVar1 = FUN_00173610(piVar6 + 4);
    if (lVar1 != 0) {
      *(undefined1 *)(*piVar6 + 0x38) = 0;
      piVar6[2] = 0;
      lVar1 = FUN_0016dfb0(0x3e800000,DAT_0040f4d4);
      if (lVar1 == 0) {
        iVar4 = *piVar6;
        goto LAB_001943e0;
      }
      FUN_00194888(param_1);
    }
  }
  iVar4 = *piVar6;
LAB_001943e0:
  lVar1 = FUN_00188f10(iVar4 + 0x150);
  if (lVar1 != 0) {
    uVar2 = FUN_00189048(*piVar6 + 0x150);
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uVar2;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_0017db98(*piVar6 + 0x650,auVar5._0_8_);
  }
  return;
}


// ==== FUN_00194420 @ 00194420 ====

void FUN_00194420(int *param_1)

{
  FUN_00193980();
  FUN_00173690(param_1 + 4);
  FUN_00173640(0,param_1 + 3);
  param_1[2] = 0;
  FUN_00173690(param_1 + 5);
  FUN_00187fe0(*param_1 + 0x290,0);
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  FUN_001825b0(*param_1 + 0x810);
  return;
}


// ==== FUN_00194490 @ 00194490 ====

void FUN_00194490(int *param_1)

{
  FUN_00193988();
  *(undefined1 *)(*param_1 + 0x38) = 0;
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_001944d8 @ 001944d8 ====

undefined4 FUN_001944d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(*(int *)(iVar1 + 0x7c) + 0x3a9) != *(char *)(*(int *)(iVar1 + 0x7c) + 0x3aa)) {
    return 0;
  }
  uVar3 = FUN_00188f80(iVar1 + 0x150);
  lVar4 = FUN_00178f18(uVar3);
  if (lVar4 == 0) {
LAB_001945d4:
    uVar2 = 0;
  }
  else {
    lVar4 = FUN_001735e0();
    if ((lVar4 != 0) && (lVar4 = FUN_00173610(param_1 + 5), lVar4 == 0)) {
      return 0;
    }
    FUN_00173690(param_1 + 5);
    iVar1 = FUN_00188f80(*param_1 + 0x150);
    iVar1 = *(int *)(iVar1 + 8);
    iVar5 = *(int *)(*param_1 + 0x7c);
    if (*(int *)(iVar1 + 0xc4) == 2) {
      if (*(int *)(iVar1 + 0x2a4) == 0) {
        iVar6 = *param_1;
        goto LAB_00194590;
      }
      if (*(int *)(*(int *)(iVar1 + 0x2a4) + 4) != iVar5) goto LAB_0019458c;
    }
    else {
LAB_0019458c:
      iVar6 = *param_1;
LAB_00194590:
      lVar4 = FUN_0018ddd8(iVar6 + 0xc94);
      if (lVar4 == 0) goto LAB_001945d4;
      if (*(int *)(DAT_0040f4d0 + 0x2d4) == 0) {
        return 0;
      }
      if (*(int *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 4) != iVar5) {
        return 0;
      }
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 6) = 1;
    iVar5 = *(int *)(iVar1 + 0xa4);
    iVar6 = *(int *)(iVar1 + 0xa8);
    iVar7 = *(int *)(iVar1 + 0xac);
    param_1[8] = *(int *)(iVar1 + 0xa0);
    param_1[9] = iVar5;
    param_1[10] = iVar6;
    param_1[0xb] = iVar7;
  }
  return uVar2;
}


// ==== FUN_001945f0 @ 001945f0 ====

void FUN_001945f0(undefined8 param_1)

{
  FUN_00194610(param_1,0);
  return;
}


// ==== FUN_00194610 @ 00194610 ====

void FUN_00194610(int *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined1 auStack_40 [16];
  
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vmove(auVar7);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 8));
  iVar1 = *(int *)(*param_1 + 0x7c);
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar5 = _vsub(auVar5,auVar4);
  auVar4 = _vmul(auVar5,auVar5);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar7,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  if (2.3283064e-10 <= auVar4._0_4_) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
    auVar4 = _vmul(auVar5,auVar5);
    _vaddabc(auVar4,auVar4);
    auVar7 = _vmaddbc(auVar8,auVar4);
    auVar4 = _vmul(auVar6,auVar6);
    auVar5 = _vmove(auVar5);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar8,auVar4);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    uVar9 = _vwaitq();
    auVar7 = _vmulq(auVar5,uVar9);
    auVar5 = _vmove(auVar6);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar4);
    auVar4 = _vaddbc(in_vf0,in_vf0);
    uVar9 = _vwaitq();
    auVar6 = _vmulq(auVar5,uVar9);
    _vmulq(auVar4,uVar9);
    auVar4 = _vmul(auVar7,auVar7);
    _vaddabc(auVar4,auVar4);
    auVar5 = _vmaddbc(auVar8,auVar4);
    auVar4 = _vmove(auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar5);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    uVar9 = _vwaitq();
    auVar4 = _vmulq(auVar4,uVar9);
    _vmulq(auVar5,uVar9);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar6);
    auVar5 = _vsubbc(in_vf0,in_vf0);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar4 = _vmax(auVar4,auVar5);
    auVar4 = _vminibc(auVar4,in_vf0);
    auVar4 = _qmfc2(auVar4._0_4_);
    fVar3 = (float)acosf(auVar4._0_4_);
    if (fVar3 * 57.29578 <= 35.0) {
      auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar5 = _qmtc2(0x3f800000);
      auVar4 = _vmulbc(auVar4,auVar5);
      auStack_40 = _sqc2(auVar4);
      lVar2 = FUN_0016dfb0(0x3f000000,DAT_0040f4d4);
      auVar4 = _lqc2(auStack_40);
      if (lVar2 != 0) {
        auVar4 = _vsub(in_vf0,auVar4);
        auStack_40 = _sqc2(auVar4);
      }
      uStack_60 = 9;
      uStack_5c = 0x26;
      uStack_54 = 0;
      uStack_58 = 0;
      auVar5 = _lqc2(auStack_40);
      auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
      auVar4 = _vadd(auVar4,auVar5);
      auVar4 = _qmfc2(auVar4._0_4_);
      lVar2 = FUN_00182ba0(*param_1 + 0x810,auVar4._0_8_);
      if (lVar2 == 0) {
        auVar4 = _lqc2(auStack_40);
        auVar5 = _vsub(in_vf0,auVar4);
        auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
        auVar4 = _vadd(auVar4,auVar5);
        auVar4 = _qmfc2(auVar4._0_4_);
        lVar2 = FUN_00182ba0(*param_1 + 0x810,auVar4._0_8_);
        if (lVar2 != 0) {
          uStack_50 = 0;
          param_1[2] = 1;
          FUN_001a6330(*(undefined4 *)(*(int *)(*param_1 + 0x7c) + 0x330),&uStack_60);
          FUN_00173640(0x41a00000,param_1 + 5);
        }
      }
      else {
        uStack_50 = 1;
        param_1[2] = 1;
        FUN_001a6330(*(undefined4 *)(*(int *)(*param_1 + 0x7c) + 0x330),&uStack_60);
        FUN_00173640(0x41a00000,param_1 + 5);
      }
    }
  }
  return;
}


// ==== FUN_00194888 @ 00194888 ====

void FUN_00194888(int *param_1)

{
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  param_1[2] = 3;
  return;
}


// ==== FUN_001948a0 @ 001948a0 ====

void FUN_001948a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 in_zero_qw [16];
  char cVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  undefined8 in_v0_udw;
  int iVar5;
  undefined1 auVar6 [16];
  int *piVar7;
  undefined4 uVar8;
  
  piVar7 = (int *)param_1;
  uVar1 = FUN_00180a00(*piVar7 + 0xb30);
  auVar6._8_8_ = in_v0_udw;
  auVar6._0_8_ = uVar1;
  auVar6 = _por(in_zero_qw,auVar6);
  if (*(char *)(*piVar7 + 0xc7e) == '\0') {
    lVar4 = FUN_00185f00(*piVar7 + 0x90);
    if (lVar4 == 0) {
      lVar4 = FUN_00185f18(*piVar7 + 0x90);
      if (lVar4 == 0) {
        iVar5 = *piVar7;
        goto LAB_00194918;
      }
      pauVar3 = (undefined1 (*) [16])FUN_00185fe8(*piVar7 + 0x90);
      auVar6 = *pauVar3;
    }
    else {
      pauVar3 = (undefined1 (*) [16])FUN_00185f10(*piVar7 + 0x90);
      auVar6 = *pauVar3;
    }
    iVar5 = *piVar7;
  }
  else {
    iVar5 = *piVar7;
  }
LAB_00194918:
  *(undefined1 *)(*(int *)(iVar5 + 0x694) + 0x30) = 0;
  iVar5 = *piVar7 + 0x810;
  if (*(int *)(*piVar7 + 0x754) < 1) {
    auVar6 = _por(in_zero_qw,auVar6);
    lVar4 = FUN_00182320(iVar5,auVar6._0_8_,0);
  }
  else {
    auVar6 = _por(in_zero_qw,auVar6);
    lVar4 = FUN_00182410(iVar5,auVar6._0_8_,0,0);
  }
  if ((lVar4 == 0) || (lVar4 = FUN_001829a8(*piVar7 + 0x810), lVar4 == 0)) {
    FUN_00193990(param_1,0);
  }
  else {
    lVar4 = FUN_001829e8(*piVar7 + 0x810);
    if (lVar4 == 0) {
      cVar2 = FUN_00173610(*piVar7 + 0xc78);
      if (cVar2 == '\0') {
        FUN_00193990(param_1,0);
      }
    }
    else {
      lVar4 = (long)(*piVar7 + 0x650);
      uVar8 = FUN_00180a10(*piVar7 + 0xb30);
      FUN_0017e488(uVar8,lVar4);
      FUN_00193990(param_1,1);
    }
  }
  return;
}


// ==== FUN_001949f8 @ 001949f8 ====

void FUN_001949f8(int *param_1)

{
  FUN_00193980();
  *(undefined1 *)(*param_1 + 0x845) = 1;
  FUN_00180cc8(*param_1 + 0xb30,1);
  return;
}


// ==== FUN_00194a38 @ 00194a38 ====

void FUN_00194a38(int *param_1)

{
  FUN_00193988();
  FUN_00180cc8(*param_1 + 0xb30,0);
  *(undefined1 *)(*param_1 + 0x845) = 0;
  FUN_001825b0(*param_1 + 0x810);
  return;
}


// ==== FUN_00194a80 @ 00194a80 ====

undefined4 FUN_00194a80(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (*param_2 == 2) {
    piVar4 = (int *)param_1;
    lVar2 = FUN_0018d608(*piVar4 + 0xd10);
    uVar1 = 1;
    if (lVar2 != 0) {
      lVar2 = FUN_0018ab08(*piVar4 + 0x150);
      uVar1 = 1;
      if (lVar2 != 0) {
        uVar3 = FUN_00188f80(*piVar4 + 0x150);
        lVar2 = FUN_00178f28(uVar3);
        if (lVar2 != 0) {
          FUN_00193a28(param_1,0x15,0);
        }
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00194b08 @ 00194b08 ====

void FUN_00194b08(undefined8 param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 in_v0_udw;
  undefined1 auVar4 [16];
  int *piVar5;
  
  piVar5 = (int *)param_1;
  lVar2 = FUN_001829a8(*piVar5 + 0x810);
  if (lVar2 == 0) {
    FUN_00193990(param_1,0);
  }
  else {
    lVar2 = FUN_001829e8(*piVar5 + 0x810);
    if (lVar2 == 0) {
      lVar2 = FUN_00188f10(*piVar5 + 0x150);
      if (lVar2 != 0) {
        iVar1 = *piVar5;
        uVar3 = FUN_00189048(iVar1 + 0x150);
        auVar4._8_8_ = in_v0_udw;
        auVar4._0_8_ = uVar3;
        auVar4 = _por(in_zero_qw,auVar4);
        FUN_0017e428(iVar1 + 0x650,auVar4._0_8_);
      }
    }
    else {
      iVar1 = *piVar5;
      uVar3 = 0;
      if (*(char *)(iVar1 + 0x105) != '\0') {
        if (*(char *)(iVar1 + 0x130) == '\0') {
          if (*(char *)(iVar1 + 0x131) != '\0') {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = 1;
        }
      }
      FUN_00193990(param_1,uVar3);
    }
  }
  return;
}


// ==== FUN_00194bc8 @ 00194bc8 ====

void FUN_00194bc8(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  FUN_00193980();
  piVar3 = (int *)param_1;
  lVar1 = FUN_00185f00(*piVar3 + 0x90);
  if (lVar1 == 0) {
    FUN_00193990(param_1,0);
  }
  else {
    puVar2 = (undefined8 *)FUN_00185f10(*piVar3 + 0x90);
    FUN_00182410(*piVar3 + 0x810,*puVar2,0,0);
    FUN_00194c60(param_1);
  }
  return;
}


// ==== FUN_00194c40 @ 00194c40 ====

void FUN_00194c40(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00194c60 @ 00194c60 ====

void FUN_00194c60(int *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = 2;
  lVar1 = FUN_00188f10(*param_1 + 0x150);
  if (lVar1 != 0) {
    lVar4 = FUN_00187960(*param_1 + 0x90,0);
  }
  if (lVar4 == 1) {
    FUN_00184238(*param_1 + 0x6f0,1);
    iVar2 = *param_1;
    uVar3 = 0x1c;
  }
  else {
    iVar2 = *param_1;
    if ((1 < lVar4) || (lVar4 != 0)) {
      FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,0,0xf);
      return;
    }
    uVar3 = 0xc;
  }
  FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,0,uVar3);
  return;
}


// ==== FUN_00194d30 @ 00194d30 ====

void FUN_00194d30(undefined8 param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  int iVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  int *piVar6;
  
  piVar6 = (int *)param_1;
  lVar1 = FUN_001829a8(*piVar6 + 0x810);
  if (lVar1 != 0) {
    lVar1 = FUN_00185f00(*piVar6 + 0x90);
    if (lVar1 != 0) {
      lVar1 = FUN_00195040(param_1);
      if (lVar1 != 0) {
        lVar1 = FUN_00188f10(*piVar6 + 0x150);
        if (lVar1 == 0) {
          iVar4 = *piVar6;
        }
        else {
          iVar4 = *piVar6;
          uVar3 = FUN_00189048(iVar4 + 0x150);
          auVar2._8_8_ = in_v0_udw;
          auVar2._0_8_ = uVar3;
          auVar5 = _por(in_zero_qw,auVar2);
          FUN_0017db98(iVar4 + 0x650,auVar5._0_8_);
          iVar4 = *piVar6;
        }
        FUN_001825b0(iVar4 + 0x810);
        FUN_00193990(param_1,1);
        return;
      }
      lVar1 = FUN_00188f10(*piVar6 + 0x150);
      if (lVar1 == 0) {
        return;
      }
      lVar1 = FUN_0018ab08(*piVar6 + 0x150);
      if (lVar1 == 0) {
        return;
      }
      lVar1 = FUN_00173610(piVar6 + 8);
      if (lVar1 == 0) {
        iVar4 = *piVar6;
        uVar3 = FUN_00189048(iVar4 + 0x150);
        auVar5._8_8_ = in_v0_udw;
        auVar5._0_8_ = uVar3;
        auVar5 = _por(in_zero_qw,auVar5);
        FUN_0017db98(iVar4 + 0x650,auVar5._0_8_);
        iVar4 = *piVar6;
      }
      else {
        iVar4 = *piVar6;
      }
      lVar1 = FUN_00181028(iVar4 + 0x140);
      if (lVar1 == 0) {
        lVar1 = FUN_00180f28(*piVar6 + 0x140);
        if (lVar1 != 0) {
          FUN_00187fe0(*piVar6 + 0x290);
          return;
        }
        iVar4 = *piVar6;
      }
      else {
        iVar4 = *piVar6;
      }
      if (*(char *)(iVar4 + 0x291) == '\0') {
        lVar1 = FUN_00173610(piVar6 + 8);
        if (lVar1 == 0) {
          return;
        }
        iVar4 = *piVar6;
      }
      else {
        iVar4 = *piVar6;
      }
      FUN_001880d8(iVar4 + 0x290);
      return;
    }
    FUN_001825b0(*piVar6 + 0x810);
  }
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_00194ec0 @ 00194ec0 ====

void FUN_00194ec0(undefined8 param_1)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_v0_udw;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  FUN_00193980();
  piVar8 = (int *)param_1;
  lVar3 = FUN_00185f00(*piVar8 + 0x90);
  iVar5 = *piVar8;
  if (lVar3 != 0) {
    lVar3 = FUN_00188f10(iVar5 + 0x150);
    iVar5 = *piVar8;
    if (lVar3 != 0) {
      piVar1 = (int *)FUN_00185f10(iVar5 + 0x90);
      iVar5 = piVar1[1];
      iVar6 = piVar1[2];
      iVar7 = piVar1[3];
      piVar8[4] = *piVar1;
      piVar8[5] = iVar5;
      piVar8[6] = iVar6;
      piVar8[7] = iVar7;
      goto LAB_00194f18;
    }
  }
  uVar4 = FUN_00180a00(iVar5 + 0xb30);
  piVar8[4] = (int)uVar4;
  piVar8[5] = (int)((ulong)uVar4 >> 0x20);
  piVar8[6] = (int)extraout_v0_udw;
  piVar8[7] = (int)((ulong)extraout_v0_udw >> 0x20);
LAB_00194f18:
  FUN_00195040(param_1);
  FUN_00173640(0x3e800000,piVar8 + 8);
  lVar3 = FUN_00185f00(*piVar8 + 0x90);
  if (lVar3 != 0) {
    pauVar2 = (undefined1 (*) [16])FUN_00185f10(*piVar8 + 0x90);
    auVar9 = _lqc2(*pauVar2);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _sqc2(auVar9);
    *(undefined1 (*) [16])(piVar8 + 4) = auVar10;
    auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar8 + 0x7c) + 0xa0));
    auVar10 = _vsub(auVar9,auVar10);
    auVar10 = _vmul(auVar10,auVar10);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    if (1.0 < auVar10._0_4_) {
      FUN_00181f48(0,*piVar8 + 0xc80,0,0xf);
    }
  }
  return;
}


// ==== FUN_00194fc0 @ 00194fc0 ====

void FUN_00194fc0(int *param_1)

{
  long lVar1;
  
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  lVar1 = FUN_00181028(*param_1 + 0x140);
  if (lVar1 != 0) {
    FUN_00180fe0(*param_1 + 0x140);
  }
  return;
}


// ==== FUN_00195020 @ 00195020 ====

void FUN_00195020(undefined8 param_1)

{
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_00195040 @ 00195040 ====

undefined8 FUN_00195040(int *param_1)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uStack_3c;
  uint uStack_38;
  
  lVar4 = FUN_00185f00(*param_1 + 0x90);
  iVar6 = *param_1;
  if (lVar4 != 0) {
    lVar4 = FUN_00188f10(iVar6 + 0x150);
    iVar6 = *param_1;
    if (lVar4 != 0) {
      pauVar2 = (undefined1 (*) [16])FUN_00185f10(iVar6 + 0x90);
      auVar10 = _lqc2(*pauVar2);
      goto LAB_00195094;
    }
  }
  uVar3 = FUN_00180a00(iVar6 + 0xb30);
  auVar10 = _qmtc2(uVar3);
LAB_00195094:
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar8 = _vsub(auVar10,auVar7);
  auVar7 = _qmfc2(auVar8._0_4_);
  bVar1 = true;
  if ((auVar7._0_4_ & 0x7f800000) < 0x37800001) {
    auVar7 = _sqc2(auVar8);
    uStack_3c = auVar7._4_4_;
    bVar1 = true;
    if ((uStack_3c & 0x7f800000) < 0x37800001) {
      auVar7 = _sqc2(auVar8);
      uStack_38 = auVar7._8_4_;
      bVar1 = 0x37800000 < (uStack_38 & 0x7f800000);
    }
  }
  if (bVar1) {
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
    auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
    auVar7 = _vsub(auVar7,auVar8);
    auVar7 = _vmul(auVar7,auVar7);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar9,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    if (auVar7._0_4_ < 1.0) {
      auVar10 = _sqc2(auVar10);
      *(undefined1 (*) [16])(param_1 + 4) = auVar10;
      FUN_00173640(0x3e19999a,param_1 + 8);
      iVar6 = *param_1;
    }
    else {
      iVar6 = *param_1;
    }
  }
  else {
    iVar6 = *param_1;
  }
  *(undefined1 *)(*(int *)(iVar6 + 0x694) + 0x30) = 0;
  lVar4 = FUN_00182410(*param_1 + 0x810,*(undefined8 *)(param_1 + 4),0,0);
  bVar1 = false;
  if (lVar4 != 0) {
    lVar4 = FUN_001829a8(*param_1 + 0x810);
    bVar1 = lVar4 != 0;
  }
  if (bVar1) {
    lVar4 = FUN_001829e8(*param_1 + 0x810);
    uVar5 = 0;
    if (lVar4 != 0) {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


// ==== FUN_001951f0 @ 001951f0 ====

void FUN_001951f0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 in_v0_udw;
  int iVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  
  piVar6 = (int *)param_1;
  lVar2 = FUN_00188f10(*piVar6 + 0x150);
  if (lVar2 == 0) {
    iVar4 = *piVar6;
  }
  else {
    iVar4 = *piVar6;
    uVar3 = FUN_00189048(iVar4 + 0x150);
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uVar3;
    auVar5 = _por(in_zero_qw,auVar5);
    lVar2 = FUN_001823b0(iVar4 + 0x810,auVar5._0_8_,0);
    iVar4 = *piVar6;
    if (lVar2 != 0) {
      lVar2 = FUN_001829e8(iVar4 + 0x810);
      if ((lVar2 == 0) && (lVar2 = FUN_001829a8(*piVar6 + 0x810), lVar2 != 0)) {
        iVar4 = *piVar6;
      }
      else {
        FUN_00193990(param_1,0);
        iVar4 = *piVar6;
      }
      goto LAB_001952b0;
    }
  }
  FUN_001825b0(iVar4 + 0x810);
  lVar2 = FUN_00188f10(*piVar6 + 0x150);
  iVar4 = *piVar6;
  if (lVar2 != 0) {
    uVar3 = FUN_00189048(iVar4 + 0x150);
    auVar1._8_8_ = in_v0_udw;
    auVar1._0_8_ = uVar3;
    auVar5 = _por(in_zero_qw,auVar1);
    FUN_0017db98(*piVar6 + 0x650,auVar5._0_8_);
    iVar4 = *piVar6;
  }
LAB_001952b0:
  lVar2 = FUN_00188f10(iVar4 + 0x150);
  if ((lVar2 != 0) && (lVar2 = FUN_0018ab08(*piVar6 + 0x150), lVar2 != 0)) {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_001952f0 @ 001952f0 ====

void FUN_001952f0(void)

{
  FUN_00193980();
  return;
}


// ==== FUN_00195310 @ 00195310 ====

void FUN_00195310(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00195330 @ 00195330 ====

void FUN_00195330(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined8 in_v0_udw;
  int iVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  
  piVar5 = (int *)param_1;
  lVar1 = FUN_001829a8(*piVar5 + 0x810);
  if (lVar1 == 0) {
LAB_001953e4:
    FUN_00193990(param_1,0);
  }
  else {
    lVar1 = FUN_00185f18(*piVar5 + 0x90);
    if (lVar1 == 0) {
      FUN_001825b0(*piVar5 + 0x810);
      FUN_00193990(param_1,0);
      return;
    }
    lVar1 = FUN_00188f10(*piVar5 + 0x150);
    if (lVar1 != 0) {
      iVar3 = *piVar5;
      uVar2 = FUN_00189048(iVar3 + 0x150);
      auVar4._8_8_ = in_v0_udw;
      auVar4._0_8_ = uVar2;
      auVar4 = _por(in_zero_qw,auVar4);
      FUN_0017e428(iVar3 + 0x650,auVar4._0_8_);
    }
    lVar1 = FUN_001954c0(param_1);
    if (lVar1 == 0) {
      return;
    }
    lVar1 = FUN_00188f10(*piVar5 + 0x150);
    iVar3 = *piVar5;
    if (lVar1 != 0) {
      lVar1 = FUN_0018ab08(iVar3 + 0x150);
      iVar3 = *piVar5;
      if (lVar1 == 0) {
        FUN_00186e40(iVar3 + 0x90);
        FUN_001825b0(*piVar5 + 0x810);
        goto LAB_001953e4;
      }
    }
    FUN_001825b0(iVar3 + 0x810);
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_00195438 @ 00195438 ====

void FUN_00195438(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  FUN_00193980();
  piVar5 = (int *)param_1;
  piVar1 = (int *)FUN_00185fe8(*piVar5 + 0x90);
  iVar2 = piVar1[1];
  iVar3 = piVar1[2];
  iVar4 = piVar1[3];
  piVar5[4] = *piVar1;
  piVar5[5] = iVar2;
  piVar5[6] = iVar3;
  piVar5[7] = iVar4;
  FUN_001954c0(param_1);
  FUN_00195640(param_1);
  return;
}


// ==== FUN_00195480 @ 00195480 ====

void FUN_00195480(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_001954a0 @ 001954a0 ====

void FUN_001954a0(undefined8 param_1)

{
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_001954c0 @ 001954c0 ====

undefined8 FUN_001954c0(int *param_1)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uStack_3c;
  uint uStack_38;
  
  lVar4 = FUN_00185f18(*param_1 + 0x90);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    pauVar2 = (undefined1 (*) [16])FUN_00185fe8(*param_1 + 0x90);
    auVar9 = _lqc2(*pauVar2);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
    auVar7 = _vsub(auVar9,auVar6);
    auVar6 = _qmfc2(auVar7._0_4_);
    bVar1 = true;
    if ((auVar6._0_4_ & 0x7f800000) < 0x37800001) {
      auVar6 = _sqc2(auVar7);
      uStack_3c = auVar6._4_4_;
      bVar1 = true;
      if ((uStack_3c & 0x7f800000) < 0x37800001) {
        auVar6 = _sqc2(auVar7);
        uStack_38 = auVar6._8_4_;
        bVar1 = 0x37800000 < (uStack_38 & 0x7f800000);
      }
    }
    if (bVar1) {
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
      auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
      auVar6 = _vsub(auVar6,auVar7);
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar8,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      if (auVar6._0_4_ < 1.0) {
        auVar6 = _sqc2(auVar9);
        *(undefined1 (*) [16])(param_1 + 4) = auVar6;
      }
      iVar3 = *param_1;
    }
    else {
      iVar3 = *param_1;
    }
    *(undefined1 *)(*(int *)(iVar3 + 0x694) + 0x30) = 0;
    lVar4 = FUN_001823b0(*param_1 + 0x810,*(undefined8 *)(param_1 + 4),0);
    bVar1 = false;
    if (lVar4 != 0) {
      lVar4 = FUN_001829a8(*param_1 + 0x810);
      bVar1 = lVar4 != 0;
    }
    if (bVar1) {
      lVar4 = FUN_001829e8(*param_1 + 0x810);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}


// ==== FUN_00195640 @ 00195640 ====

void FUN_00195640(int *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = 2;
  lVar1 = FUN_00188f10(*param_1 + 0x150);
  if (lVar1 != 0) {
    lVar4 = FUN_00187960(*param_1 + 0x90,1);
  }
  if (lVar4 == 1) {
    FUN_00184238(*param_1 + 0x6f0,1);
    iVar2 = *param_1;
    uVar3 = 0x1c;
  }
  else {
    iVar2 = *param_1;
    if ((1 < lVar4) || (lVar4 != 0)) {
      FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,0,0x19);
      return;
    }
    uVar3 = 0xc;
  }
  FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,0,uVar3);
  return;
}


// ==== FUN_00195710 @ 00195710 ====

void FUN_00195710(undefined8 param_1)

{
  long lVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined8 *puVar3;
  int iVar5;
  undefined8 uVar4;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined1 auVar6 [16];
  int *piVar7;
  
  piVar7 = (int *)param_1;
  lVar1 = FUN_00173610(piVar7 + 4);
  if (lVar1 != 0) {
LAB_00195750:
    FUN_00193990(param_1,1);
    return;
  }
  uVar4 = FUN_0013d400(*piVar7);
  lVar1 = FUN_00172708(uVar4,*piVar7);
  if (lVar1 == 0) goto LAB_00195750;
  lVar1 = FUN_0017ea70(*piVar7 + 0x650);
  iVar2 = *piVar7;
  if (lVar1 == 0) {
    lVar1 = FUN_00188f10(iVar2 + 0x150);
    iVar2 = *piVar7;
    if (lVar1 != 0) {
      lVar1 = FUN_0018ab08(iVar2 + 0x150);
      if (lVar1 != 0) {
        FUN_00187fe0(*piVar7 + 0x290,0);
        iVar2 = *piVar7;
        goto LAB_001957d0;
      }
      iVar2 = *piVar7;
    }
  }
  FUN_001880d8(iVar2 + 0x290);
  lVar1 = FUN_0017ea70(*piVar7 + 0x650);
  iVar2 = *piVar7;
  if (lVar1 != 0) {
    FUN_0017db18(iVar2 + 0x650);
    iVar2 = *piVar7;
  }
LAB_001957d0:
  iVar2 = FUN_001809f0(iVar2 + 0xb30);
  if (iVar2 == 0) {
    iVar2 = piVar7[2];
    iVar5 = iVar2 >> 0x1f;
  }
  else if (iVar2 == piVar7[3]) {
    iVar2 = piVar7[2];
    iVar5 = iVar2 >> 0x1f;
  }
  else {
    piVar7[3] = iVar2;
    FUN_00195920(param_1);
    iVar2 = piVar7[2];
    iVar5 = iVar2 >> 0x1f;
  }
  if (CONCAT44(iVar5,iVar2) == 0) {
    return;
  }
  lVar1 = FUN_00185f00(*piVar7 + 0x90);
  if (lVar1 == 0) {
    uVar4 = FUN_00180a00(*piVar7 + 0xb30);
  }
  else {
    puVar3 = (undefined8 *)FUN_00185f10(*piVar7 + 0x90);
    uVar4 = *puVar3;
    in_v0_udw = *(undefined4 *)(puVar3 + 1);
    in_register_0000002c = *(undefined4 *)((int)puVar3 + 0xc);
  }
  auVar6._8_4_ = in_v0_udw;
  auVar6._0_8_ = uVar4;
  auVar6._12_4_ = in_register_0000002c;
  auVar6 = _por(in_zero_qw,auVar6);
  FUN_00182410(*piVar7 + 0x810,auVar6._0_8_,0,0);
  return;
}


// ==== FUN_00195860 @ 00195860 ====

void FUN_00195860(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  FUN_00193980();
  piVar3 = (int *)param_1;
  uVar2 = FUN_0013d400(*piVar3);
  piVar3[2] = 0;
  iVar1 = FUN_00172620(uVar2);
  piVar3[3] = iVar1;
  FUN_00195920(param_1);
  FUN_00173640(0x40800000,piVar3 + 4);
  *(undefined1 *)(*(int *)(*piVar3 + 0x694) + 0x30) = 0;
  FUN_00181f48(0,0x40000000,*piVar3 + 0xc80,0,0x1a);
  return;
}


// ==== FUN_001958e0 @ 001958e0 ====

void FUN_001958e0(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_00195920 @ 00195920 ====

void FUN_00195920(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 8) = iVar1;
  }
  return;
}


// ==== FUN_00195950 @ 00195950 ====

void FUN_00195950(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined8 in_v0_udw;
  int iVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  
  piVar5 = (int *)param_1;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    lVar1 = FUN_00180438(*piVar5 + 0x650);
    iVar3 = *piVar5;
    if (lVar1 == 0) {
      FUN_001825b0(iVar3 + 0x810);
      FUN_00193990(param_1,1);
      return;
    }
  }
  else {
    lVar1 = FUN_00173610(piVar5 + 2);
    iVar3 = *piVar5;
    if (lVar1 != 0) {
      FUN_0017db50(iVar3 + 0x650,(char)piVar5[3]);
      *(undefined1 *)((int)piVar5 + 0xd) = 0;
      iVar3 = *piVar5;
    }
  }
  lVar1 = FUN_00188f10(iVar3 + 0x150);
  if (lVar1 != 0) {
    uVar2 = FUN_00189048(*piVar5 + 0x150);
    auVar4._8_8_ = in_v0_udw;
    auVar4._0_8_ = uVar2;
    auVar4 = _por(in_zero_qw,auVar4);
    FUN_0017e428(*piVar5 + 0x650,auVar4._0_8_);
  }
  return;
}


// ==== FUN_00195a00 @ 00195a00 ====

void FUN_00195a00(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00193980();
  if (*param_2 == 5) {
    iVar1 = (int)param_1;
    *(char *)(iVar1 + 0xc) = (char)param_2[2];
    uVar2 = FUN_0016de70(0,0x3f800000,DAT_0040f4d4);
    FUN_00173640(uVar2,iVar1 + 8);
    *(undefined1 *)(iVar1 + 0xd) = 1;
  }
  else {
    FUN_00193990(param_1,0);
  }
  return;
}


// ==== FUN_00195a88 @ 00195a88 ====

void FUN_00195a88(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00195aa8 @ 00195aa8 ====

void FUN_00195aa8(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int *piVar4;
  
  piVar4 = (int *)param_1;
  lVar1 = FUN_0017e770(*piVar4 + 0x650);
  if (lVar1 == 0) {
    FUN_00193990(param_1,1);
  }
  else {
    lVar1 = FUN_00188f10(*piVar4 + 0x150);
    if (lVar1 != 0) {
      uVar2 = FUN_00189048(*piVar4 + 0x150);
      auVar3._8_8_ = in_v0_udw;
      auVar3._0_8_ = uVar2;
      auVar3 = _por(in_zero_qw,auVar3);
      FUN_0017e428(*piVar4 + 0x650,auVar3._0_8_);
    }
  }
  return;
}


// ==== FUN_00195b20 @ 00195b20 ====

void FUN_00195b20(int *param_1)

{
  long lVar1;
  int iVar2;
  
  FUN_00193980();
  FUN_0017db18(*param_1 + 0x650);
  lVar1 = FUN_0018daf8(*param_1 + 0xc94);
  if (lVar1 == 0) {
    iVar2 = *param_1;
  }
  else {
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 1;
    FUN_001825b0(*param_1 + 0x810);
    iVar2 = *param_1;
  }
  FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,0,0x18);
  return;
}


// ==== FUN_00195ba0 @ 00195ba0 ====

void FUN_00195ba0(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00195bc0 @ 00195bc0 ====

void FUN_00195bc0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  long lVar3;
  int *piVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  
  piVar4 = (int *)param_1;
  if ((char)piVar4[2] != '\0') {
    lVar3 = FUN_0017e800(*piVar4 + 0x650);
    if (lVar3 != 0) {
      return;
    }
    FUN_00193990(param_1,1);
    return;
  }
  lVar3 = FUN_00188f10(*piVar4 + 0x150);
  if (lVar3 != 0) {
    pauVar2 = (undefined1 (*) [16])FUN_001893a0(*piVar4 + 0x150);
    auVar1 = *pauVar2;
    auVar5 = *pauVar2;
    FUN_001825b0(*piVar4 + 0x810);
    FUN_0017e428(*piVar4 + 0x650);
    lVar3 = FUN_0017e860(*piVar4 + 0x650);
    if (lVar3 != 0) {
      auVar8 = _qmtc2(0x40800000);
      auVar5 = _lqc2(auVar5);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar4 + 0x7c) + 0xa0));
      auVar6 = _vsub(auVar5,auVar6);
      *(undefined1 *)(piVar4 + 2) = 1;
      auVar5 = _vmul(auVar6,auVar6);
      _vaddabc(auVar5,auVar5);
      auVar5 = _vmaddbc(auVar7,auVar5);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar5);
      uVar9 = _vwaitq();
      auVar5 = _vmulq(auVar6,uVar9);
      auVar6 = _vmulbc(auVar5,auVar8);
      auVar5 = _lqc2(auVar1);
      auVar5 = _vsub(auVar5,auVar6);
      auVar5 = _qmfc2(auVar5._0_4_);
      FUN_0017e710(*piVar4 + 0x650,auVar5._0_8_);
      return;
    }
    lVar3 = FUN_00173610(piVar4 + 3);
    if (lVar3 == 0) {
      return;
    }
  }
  FUN_00193990(param_1,1);
  return;
}


// ==== FUN_00195ce8 @ 00195ce8 ====

void FUN_00195ce8(int param_1)

{
  FUN_00193980();
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00173640(0x3f800000,param_1 + 0xc);
  return;
}


// ==== FUN_00195d20 @ 00195d20 ====

void FUN_00195d20(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00195d48 @ 00195d48 ====

void FUN_00195d48(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00188f10(*(int *)param_1 + 0x150);
  if (lVar1 != 0) {
    FUN_001894c8(*(int *)param_1 + 0x150);
  }
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_00195d98 @ 00195d98 ====

void FUN_00195d98(undefined8 param_1)

{
  long lVar1;
  
  FUN_00193980();
  *(undefined4 *)((int)param_1 + 8) = 0;
  lVar1 = FUN_00195f08(param_1);
  if (lVar1 == 0) {
    FUN_00195d48(param_1);
  }
  else {
    FUN_00193a60(0x41200000,param_1,0);
  }
  return;
}


// ==== FUN_00195df0 @ 00195df0 ====

void FUN_00195df0(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00195e10 @ 00195e10 ====

void FUN_00195e10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = FUN_00188f10(*(int *)param_1 + 0x150);
    if (lVar1 == 0) {
      FUN_00195d48(param_1);
    }
    else {
      lVar1 = FUN_00195f08(param_1);
      if (lVar1 == 0) {
        FUN_00195d48(param_1);
      }
    }
  }
  else {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_00195e80 @ 00195e80 ====

void FUN_00195e80(undefined8 param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  
  lVar3 = FUN_00188f10(*(int *)param_1 + 0x150);
  if (lVar3 != 0) {
    iVar1 = *(int *)param_1;
    uVar4 = FUN_00189048(iVar1 + 0x150);
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uVar4;
    auVar5 = _por(in_zero_qw,auVar5);
    cVar2 = FUN_00180b70(iVar1 + 0xb30,auVar5._0_8_);
    if (cVar2 == '\x01') {
      FUN_00193a60(0,param_1,0);
      return;
    }
  }
  FUN_00195d48(param_1);
  return;
}


// ==== FUN_00195f08 @ 00195f08 ====

undefined4 FUN_00195f08(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  piVar4 = (int *)param_1;
  lVar3 = FUN_0018ddd8(*piVar4 + 0xc94);
  if (lVar3 == 0) {
    iVar5 = 7;
    puVar6 = &DAT_003f66c0;
  }
  else {
    iVar5 = 3;
    puVar6 = &DAT_003f66e0;
  }
  iVar2 = piVar4[2];
  while( true ) {
    if (iVar5 <= iVar2) {
      return 0;
    }
    uVar1 = *(undefined4 *)(puVar6 + iVar2 * 4);
    iVar2 = FUN_00181a90(*piVar4 + 0xec0,uVar1);
    lVar3 = (**(code **)(*(int *)(iVar2 + 4) + 0x6c))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x68));
    if (lVar3 != 0) break;
    iVar2 = piVar4[2] + 1;
    piVar4[2] = iVar2;
  }
  FUN_00193a28(param_1,uVar1,0);
  piVar4[2] = piVar4[2] + 1;
  return 1;
}


// ==== FUN_00195ff0 @ 00195ff0 ====

void FUN_00195ff0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int *piVar4;
  float fVar5;
  
  piVar4 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar4 + 0x150);
  if ((lVar1 != 0) && (fVar5 = (float)FUN_00189310(*piVar4 + 0x150), fVar5 <= 3.0)) {
    lVar1 = FUN_00188350(*piVar4 + 0x290);
    if (lVar1 == 0) {
      if (*(char *)(*piVar4 + 0x291) != '\0') {
        FUN_00193990(param_1,1);
        return;
      }
      FUN_00196168(param_1);
      uVar2 = FUN_00189048(*piVar4 + 0x150);
      auVar3._8_8_ = in_v0_udw;
      auVar3._0_8_ = uVar2;
      auVar3 = _por(in_zero_qw,auVar3);
      FUN_0017e428(*piVar4 + 0x650,auVar3._0_8_);
      return;
    }
    FUN_00186e40(*piVar4 + 0x90);
  }
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_001960c8 @ 001960c8 ====

void FUN_001960c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  FUN_00193980();
  piVar5 = (int *)param_1;
  FUN_00187fe0(*piVar5 + 0x290,0);
  *(undefined1 *)(*(int *)(*piVar5 + 0x694) + 0x30) = 0;
  puVar2 = (undefined8 *)FUN_00185fe8(*piVar5 + 0x90);
  uVar1 = *puVar2;
  iVar3 = *(int *)(puVar2 + 1);
  iVar4 = *(int *)((int)puVar2 + 0xc);
  piVar5[4] = (int)uVar1;
  piVar5[5] = (int)((ulong)uVar1 >> 0x20);
  piVar5[6] = iVar3;
  piVar5[7] = iVar4;
  FUN_00196168(param_1);
  return;
}


// ==== FUN_00196128 @ 00196128 ====

void FUN_00196128(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_00196168 @ 00196168 ====

undefined8 FUN_00196168(int *param_1)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uStack_2c;
  uint uStack_28;
  
  lVar4 = FUN_00185f18(*param_1 + 0x90);
  uVar5 = 1;
  if (lVar4 != 0) {
    pauVar2 = (undefined1 (*) [16])FUN_00185fe8(*param_1 + 0x90);
    auVar9 = _lqc2(*pauVar2);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
    auVar7 = _vsub(auVar9,auVar6);
    auVar6 = _qmfc2(auVar7._0_4_);
    bVar1 = true;
    if ((auVar6._0_4_ & 0x7f800000) < 0x37800001) {
      auVar6 = _sqc2(auVar7);
      uStack_2c = auVar6._4_4_;
      bVar1 = true;
      if ((uStack_2c & 0x7f800000) < 0x37800001) {
        auVar6 = _sqc2(auVar7);
        uStack_28 = auVar6._8_4_;
        bVar1 = 0x37800000 < (uStack_28 & 0x7f800000);
      }
    }
    if (bVar1) {
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
      auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
      auVar6 = _vsub(auVar6,auVar7);
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar8,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      if (auVar6._0_4_ < 1.0) {
        auVar6 = _sqc2(auVar9);
        *(undefined1 (*) [16])(param_1 + 4) = auVar6;
      }
      iVar3 = *param_1;
    }
    else {
      iVar3 = *param_1;
    }
    *(undefined1 *)(*(int *)(iVar3 + 0x694) + 0x30) = 0;
    lVar4 = FUN_0018ab08(*param_1 + 0x150);
    if (lVar4 == 0) {
      lVar4 = FUN_001823b0(*param_1 + 0x810,*(undefined8 *)(param_1 + 4),0);
    }
    else {
      lVar4 = FUN_00182320(*param_1 + 0x810,*(undefined8 *)(param_1 + 4));
    }
    uVar5 = 1;
    if (lVar4 != 0) {
      lVar4 = FUN_001829a8(*param_1 + 0x810);
      if (lVar4 == 0) {
        uVar5 = 1;
      }
      else {
        lVar4 = FUN_001829e8(*param_1 + 0x810);
        uVar5 = 0;
        if (lVar4 != 0) {
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}


// ==== FUN_001962f0 @ 001962f0 ====

void FUN_001962f0(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int *piVar4;
  
  piVar4 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar4 + 0x150);
  if (((lVar1 == 0) || (lVar1 = FUN_0018ab08(*piVar4 + 0x150), lVar1 == 0)) ||
     (lVar1 = FUN_00188350(*piVar4 + 0x290), lVar1 != 0)) {
    FUN_00193990(param_1,0);
  }
  else if ((*(char *)(*piVar4 + 0x291) == '\0') &&
          (lVar1 = FUN_001829e8(*piVar4 + 0x810), lVar1 == 0)) {
    uVar2 = FUN_00189048(*piVar4 + 0x150);
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = uVar2;
    auVar3 = _por(in_zero_qw,auVar3);
    FUN_0017db98(*piVar4 + 0x650,auVar3._0_8_);
  }
  else {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_001963a8 @ 001963a8 ====

void FUN_001963a8(int *param_1)

{
  FUN_00193980();
  FUN_00187fe0(*param_1 + 0x290,1);
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  return;
}


// ==== FUN_001963e8 @ 001963e8 ====

void FUN_001963e8(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_00196428 @ 00196428 ====

void FUN_00196428(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  int iVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  float fVar6;
  
  piVar5 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar5 + 0x150);
  if (lVar1 != 0) {
    uVar2 = FUN_00189048(*piVar5 + 0x150);
    auVar4._8_8_ = in_v0_udw;
    auVar4._0_8_ = uVar2;
    auVar4 = _por(in_zero_qw,auVar4);
    FUN_0017e428(*piVar5 + 0x650,auVar4._0_8_);
    iVar3 = *piVar5;
    if (*(char *)(iVar3 + 0xd27) == '\0') {
      fVar6 = (float)FUN_00189310(iVar3 + 0x150);
      if (3.0 < fVar6) goto LAB_001964b0;
      iVar3 = *piVar5;
    }
    lVar1 = FUN_00188350(iVar3 + 0x290);
    if (lVar1 == 0) {
      if (*(char *)(*piVar5 + 0x291) == '\0') {
        return;
      }
      FUN_00193990(param_1,1);
      return;
    }
  }
LAB_001964b0:
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_001964e8 @ 001964e8 ====

void FUN_001964e8(int *param_1)

{
  FUN_00193980();
  FUN_00187fe0(*param_1 + 0x290,0);
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  FUN_001825b0(*param_1 + 0x810);
  return;
}


// ==== FUN_00196538 @ 00196538 ====

void FUN_00196538(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_00196578 @ 00196578 ====

void FUN_00196578(undefined8 param_1)

{
  bool bVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 in_v0_udw;
  int iVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  
  piVar6 = (int *)param_1;
  lVar2 = FUN_00188f10(*piVar6 + 0x150);
  if (lVar2 == 0) {
    iVar4 = *piVar6;
  }
  else {
    uVar3 = FUN_00189048(*piVar6 + 0x150);
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uVar3;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_0017e428(*piVar6 + 0x650,auVar5._0_8_);
    iVar4 = *piVar6;
  }
  bVar1 = false;
  if (*(char *)(iVar4 + 0x105) != '\0') {
    if (*(char *)(iVar4 + 0x130) == '\0') {
      bVar1 = false;
      if (*(char *)(iVar4 + 0x131) != '\0') {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
  }
  if (bVar1) {
    lVar2 = FUN_00184238(iVar4 + 0x6f0,1);
    if ((lVar2 == 0) && (lVar2 = FUN_00193af8(param_1), lVar2 != 0)) {
      FUN_00193990(param_1,1);
    }
  }
  else {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_00196648 @ 00196648 ====

void FUN_00196648(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 in_zero_qw [16];
  int iVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  int *piVar6;
  
  FUN_00193980();
  iVar4 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar4 + 0x84) = 2;
  FUN_00193a60(0x3fc00000,param_1,0);
  piVar6 = (int *)param_1;
  iVar4 = *piVar6;
  if ((*(byte *)(iVar4 + 0xd60) >> 4 & 1) != 0) {
    lVar1 = FUN_00185f00(iVar4 + 0x90);
    if (lVar1 == 0) {
      iVar4 = *piVar6;
    }
    else {
      iVar4 = *piVar6;
      bVar3 = false;
      if (*(char *)(iVar4 + 0x105) != '\0') {
        if (*(char *)(iVar4 + 0x130) == '\0') {
          bVar3 = false;
          if (*(char *)(iVar4 + 0x131) != '\0') {
            bVar3 = true;
          }
        }
        else {
          bVar3 = true;
        }
      }
      if (!bVar3) {
        FUN_00193a28(param_1,10,0);
        return;
      }
      iVar4 = *piVar6;
    }
  }
  lVar1 = FUN_00188f10(iVar4 + 0x150);
  if (lVar1 == 0) {
    iVar4 = *piVar6;
  }
  else {
    uVar2 = FUN_00189048(*piVar6 + 0x150);
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uVar2;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_0017e428(*piVar6 + 0x650,auVar5._0_8_);
    iVar4 = *piVar6;
  }
  *(undefined1 *)(*(int *)(iVar4 + 0x694) + 0x30) = 1;
  return;
}


// ==== FUN_00196758 @ 00196758 ====

void FUN_00196758(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int *piVar4;
  
  if ((param_2 == 10) || (param_2 == 0xd)) {
    if (param_3 == 0) {
      FUN_00193990(param_1,0);
    }
    else {
      piVar4 = (int *)param_1;
      lVar1 = FUN_00188f10(*piVar4 + 0x150);
      if (lVar1 != 0) {
        uVar2 = FUN_00189048(*piVar4 + 0x150);
        auVar3._8_8_ = in_v0_udw;
        auVar3._0_8_ = uVar2;
        auVar3 = _por(in_zero_qw,auVar3);
        FUN_0017e428(*piVar4 + 0x650,auVar3._0_8_);
      }
      FUN_00193a60(0x3fc00000,param_1,0);
      *(undefined1 *)(*(int *)(*piVar4 + 0x694) + 0x30) = 1;
    }
  }
  return;
}


// ==== FUN_001967f8 @ 001967f8 ====

undefined4 FUN_001967f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*param_2 == 4) {
    iVar1 = *(int *)param_1;
    uVar3 = 0;
    if ((*(byte *)(iVar1 + 0xd60) >> 4 & 1) != 0) {
      lVar4 = FUN_00185f00(iVar1 + 0x90);
      uVar3 = 0;
      if (lVar4 != 0) {
        iVar1 = *(int *)param_1;
        bVar2 = false;
        if (*(char *)(iVar1 + 0x105) != '\0') {
          if (*(char *)(iVar1 + 0x130) == '\0') {
            bVar2 = false;
            if (*(char *)(iVar1 + 0x131) != '\0') {
              bVar2 = true;
            }
          }
          else {
            bVar2 = true;
          }
        }
        uVar3 = 0;
        if (!bVar2) {
          FUN_00193a28(param_1,10,0);
          uVar3 = 1;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_001968a8 @ 001968a8 ====

void FUN_001968a8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00188f10(*(int *)param_1 + 0x150);
  if (lVar1 != 0) {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_001968e8 @ 001968e8 ====

void FUN_001968e8(int *param_1)

{
  FUN_00193980();
  FUN_0018ac80(*param_1 + 0xd18,1);
  return;
}


// ==== FUN_00196920 @ 00196920 ====

void FUN_00196920(int *param_1)

{
  FUN_00193988();
  FUN_0018ac80(*param_1 + 0xd18,0);
  return;
}


// ==== FUN_00196958 @ 00196958 ====

undefined4 FUN_00196958(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  if (*param_2 == 0xe) {
    FUN_0018ad00(*param_1 + 0xd18);
    lVar2 = FUN_0018ad30(*param_1 + 0xd18);
    iVar1 = *param_1;
    if (lVar2 == 0) {
      uVar5 = FUN_00180a10(iVar1 + 0xb30);
      FUN_0017e488(uVar5,iVar1 + 0x650);
      uVar5 = 1;
    }
    else {
      uVar3 = FUN_0018ad60(iVar1 + 0xd18);
      auVar4._8_8_ = in_v0_udw;
      auVar4._0_8_ = uVar3;
      auVar4 = _por(in_zero_qw,auVar4);
      FUN_0017e428(iVar1 + 0x650,auVar4._0_8_);
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


// ==== FUN_001969e8 @ 001969e8 ====

void FUN_001969e8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  undefined8 in_v0_udw;
  undefined1 auVar4 [16];
  int *piVar5;
  
  piVar5 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar5 + 0x150);
  if (lVar1 == 0) {
    iVar3 = piVar5[2];
  }
  else {
    uVar2 = FUN_00189048(*piVar5 + 0x150);
    auVar4._8_8_ = in_v0_udw;
    auVar4._0_8_ = uVar2;
    auVar4 = _por(in_zero_qw,auVar4);
    FUN_0017db98(*piVar5 + 0x650,auVar4._0_8_);
    lVar1 = FUN_001891c0(*piVar5 + 0x150);
    if (lVar1 != 0) {
      FUN_00193990(param_1,1);
      return;
    }
    iVar3 = piVar5[2];
  }
  if (iVar3 != 0) {
    FUN_0017db98(*piVar5 + 0x650);
  }
  return;
}


// ==== FUN_00196a78 @ 00196a78 ====

void FUN_00196a78(int param_1,long param_2)

{
  FUN_00193980();
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_2 != 0) && (*(int *)param_2 == 4)) {
    *(int *)(param_1 + 8) = ((int *)param_2)[2];
  }
  return;
}


// ==== FUN_00196ac8 @ 00196ac8 ====

void FUN_00196ac8(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00196b08 @ 00196b08 ====

void FUN_00196b08(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar4 [16];
  int *piVar5;
  float fVar6;
  
  piVar5 = (int *)param_1;
  lVar2 = FUN_001829a8(*piVar5 + 0x810);
  if (lVar2 != 0) {
    lVar2 = FUN_001829e8(*piVar5 + 0x810);
    if (lVar2 == 0) {
      lVar2 = FUN_00188f10(*piVar5 + 0x150);
      if ((((lVar2 != 0) && (lVar2 = FUN_0018ab08(*piVar5 + 0x150), lVar2 != 0)) &&
          (fVar6 = (float)FUN_001891a8(*piVar5 + 0x150), fVar6 < 15.0)) &&
         (lVar2 = FUN_00173610(piVar5 + 2), lVar2 != 0)) {
        iVar1 = *piVar5;
        uVar3 = FUN_00189048(iVar1 + 0x150);
        auVar4._8_8_ = in_v0_udw;
        auVar4._0_8_ = uVar3;
        auVar4 = _por(in_zero_qw,auVar4);
        FUN_0017e428(iVar1 + 0x650,auVar4._0_8_);
      }
      FUN_00196cf0(param_1);
      return;
    }
    lVar2 = FUN_00188f10(*piVar5 + 0x150);
    if ((lVar2 == 0) || (lVar2 = FUN_0018ab08(*piVar5 + 0x150), lVar2 != 0)) {
      FUN_00193990(param_1,1);
      return;
    }
    if (*(char *)(*piVar5 + 0x111) != '\0') {
      FUN_00186e40();
    }
  }
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_00196c40 @ 00196c40 ====

void FUN_00196c40(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  FUN_00193980();
  piVar3 = (int *)param_1;
  iVar1 = *piVar3;
  puVar2 = (undefined4 *)FUN_00185fe8(iVar1 + 0x90);
  FUN_00182410(iVar1 + 0x810,*puVar2,0,0);
  *(undefined1 *)(*(int *)(*piVar3 + 0x694) + 0x30) = 0;
  FUN_00173690(piVar3 + 2);
  FUN_00196cf0(param_1);
  return;
}


// ==== FUN_00196cb0 @ 00196cb0 ====

void FUN_00196cb0(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_00196cf0 @ 00196cf0 ====

void FUN_00196cf0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (*(char *)(*param_1 + 0x290) != '\0') {
    if (*(char *)(*param_1 + 0x291) == '\0') {
      iVar4 = *param_1;
      goto LAB_00196d40;
    }
    FUN_001880d8();
    FUN_00173640(0x3f800000,param_1 + 2);
  }
  iVar4 = *param_1;
LAB_00196d40:
  lVar3 = FUN_0017ea70(iVar4 + 0x650);
  if (lVar3 == 0) {
    lVar3 = FUN_0017e770(*param_1 + 0x650);
    if (lVar3 != 0) {
      return;
    }
    iVar4 = *param_1;
  }
  else {
    FUN_0017db18(*param_1 + 0x650);
    iVar4 = *param_1;
  }
  cVar5 = '\0';
  cVar1 = *(char *)(iVar4 + 0x290);
  lVar3 = FUN_00188f10(iVar4 + 0x150);
  if (((lVar3 != 0) && (lVar3 = FUN_001891c0(*param_1 + 0x150), lVar3 != 0)) &&
     (lVar3 = FUN_00173610(param_1 + 2), lVar3 != 0)) {
    uVar2 = FUN_00189048(*param_1 + 0x150);
    auVar8 = _qmtc2(uVar2);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
    auVar6 = _vsub(auVar8,auVar6);
    auVar6 = _vmul(auVar6,auVar6);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar7,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (auVar6._0_4_ < 225.0) {
      cVar5 = '\x01';
    }
  }
  if (cVar1 != cVar5) {
    if (cVar1 == '\0') {
      FUN_00187fe0(*param_1 + 0x290,0);
    }
    else {
      FUN_001880d8(*param_1 + 0x290);
      FUN_00173640(0x3f800000,param_1 + 2);
    }
  }
  return;
}


// ==== FUN_00196e58 @ 00196e58 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00196e58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_zero_qw [16];
  undefined4 uVar4;
  long lVar5;
  undefined8 extraout_v0_udw;
  int *piVar6;
  float fVar7;
  int iVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  piVar6 = (int *)param_1;
  if (*(char *)((int)piVar6 + 0x26) == '\0') {
    lVar5 = FUN_00173610(piVar6 + 7);
    if (lVar5 != 0) {
      FUN_00193990(param_1,1);
    }
  }
  else {
    lVar5 = FUN_00188f10(*piVar6 + 0x150);
    if (lVar5 == 0) {
      iVar8 = piVar6[8];
    }
    else {
      auVar9 = _vaddbc(in_vf0,in_vf0);
      auVar9 = _sqc2(auVar9);
      uVar4 = FUN_00189048(*piVar6 + 0x150);
      uVar3 = DAT_004432cc;
      uVar2 = DAT_004432c8;
      uVar1 = _DAT_004432c0;
      auVar11 = _qmtc2(uVar4);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar15 = _vsubbc(in_vf0,in_vf0);
      auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar6 + 0x7c) + 0xa0));
      auVar12 = _vsub(auVar11,auVar10);
      auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar6 + 0x7c) + 0x90));
      auVar11 = _vmul(auVar13,auVar13);
      auVar10 = _vmul(auVar12,auVar12);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar14,auVar10);
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(auVar14,auVar11);
      auVar12 = _vmove(auVar12);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar11);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      uVar4 = _vwaitq();
      auVar13 = _vmulq(auVar13,uVar4);
      _vmulq(auVar11,uVar4);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar10);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      uVar4 = _vwaitq();
      auVar10 = _vmulq(auVar12,uVar4);
      _vmulq(auVar11,uVar4);
      auVar12 = _lqc2(auVar9);
      auVar11 = _vmul(auVar10,auVar13);
      auVar10 = _sqc2(auVar10);
      _vaddabc(auVar11,auVar11);
      auVar12 = _vmaddbc(auVar12,auVar11);
      auVar11 = _sqc2(auVar13);
      auVar12 = _vmax(auVar12,auVar15);
      auVar12 = _vminibc(auVar12,in_vf0);
      auVar12 = _qmfc2(auVar12._0_4_);
      fVar7 = (float)acosf(auVar12._0_4_);
      auVar11 = _lqc2(auVar11);
      auVar10 = _lqc2(auVar10);
      _vopmula(auVar10,auVar11);
      auVar11 = _vopmsub(auVar11,auVar10);
      auVar10._8_4_ = uVar2;
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = uVar3;
      auVar10 = _lqc2(auVar10);
      auVar10 = _vmul(auVar11,auVar10);
      auVar9 = _lqc2(auVar9);
      _vaddabc(auVar10,auVar10);
      auVar9 = _vmaddbc(auVar9,auVar10);
      auVar9 = _qmfc2(auVar9._0_4_);
      fVar7 = fVar7 * 57.29578;
      if (0.0 < auVar9._0_4_) {
        fVar7 = -fVar7;
      }
      if (DAT_003bcf28 <= ABS(fVar7)) {
        iVar8 = *piVar6;
        auVar9._0_8_ = FUN_00189048(iVar8 + 0x150);
        auVar9._8_8_ = extraout_v0_udw;
        auVar9 = _por(in_zero_qw,auVar9);
        FUN_0017e428(iVar8 + 0x650,auVar9._0_8_);
        return;
      }
      iVar8 = piVar6[8];
    }
    FUN_00173640(iVar8,piVar6 + 7);
    FUN_001a6330(*(undefined4 *)(*(int *)(*piVar6 + 0x7c) + 0x330),piVar6 + 2);
    *(undefined1 *)((int)piVar6 + 0x26) = 0;
  }
  return;
}


// ==== FUN_00197040 @ 00197040 ====

void FUN_00197040(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  int *piVar7;
  
  FUN_00193980();
  if ((param_2 == 0) || (piVar6 = (int *)param_2, *piVar6 != 8)) {
    FUN_00193990(param_1,0);
  }
  else {
    piVar7 = (int *)param_1;
    *(char *)(piVar7 + 9) = (char)piVar6[9];
    piVar7[8] = piVar6[8];
    *(char *)((int)piVar7 + 0x25) = (char)piVar6[2];
    uVar4 = *(undefined8 *)(piVar6 + 5);
    iVar2 = piVar6[7];
    *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(piVar6 + 3);
    *(undefined8 *)(piVar7 + 4) = uVar4;
    piVar7[6] = iVar2;
    if (*(char *)(*piVar7 + 0x290) != '\0') {
      FUN_001880d8(*piVar7 + 0x290);
    }
    if (*(int *)(*piVar7 + 0x850) == 0) {
      cVar1 = *(char *)((int)piVar7 + 0x25);
    }
    else {
      FUN_001825b0();
      cVar1 = *(char *)((int)piVar7 + 0x25);
    }
    if (cVar1 == '\0') {
      FUN_00173640(piVar6[8],piVar7 + 7);
      FUN_001a6330(*(undefined4 *)(*(int *)(*piVar7 + 0x7c) + 0x330),piVar6 + 3);
      *(undefined1 *)((int)piVar7 + 0x26) = 0;
    }
    else {
      lVar3 = FUN_00188f10(*piVar7 + 0x150);
      if (lVar3 != 0) {
        iVar2 = *piVar7;
        uVar4 = FUN_00189048(iVar2 + 0x150);
        auVar5._8_8_ = in_v0_udw;
        auVar5._0_8_ = uVar4;
        auVar5 = _por(in_zero_qw,auVar5);
        FUN_0017e428(iVar2 + 0x650,auVar5._0_8_);
      }
      *(undefined1 *)((int)piVar7 + 0x26) = 1;
    }
    if ((char)piVar7[9] != '\0') {
      *(undefined1 *)(*(int *)(*piVar7 + 0x7c) + 0x3b8) = 1;
    }
  }
  return;
}


// ==== FUN_001971a0 @ 001971a0 ====

void FUN_001971a0(int *param_1)

{
  FUN_00193988();
  if ((char)param_1[9] != '\0') {
    *(undefined1 *)(*(int *)(*param_1 + 0x7c) + 0x3b8) = 0;
  }
  return;
}


// ==== FUN_001971e0 @ 001971e0 ====

void FUN_001971e0(int *param_1)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar3 = *param_1;
  if ((*(byte *)(iVar3 + 0xd60) >> 4 & 1) == 0) {
    iVar4 = *(int *)(iVar3 + 0x1ee0);
    goto LAB_001973a8;
  }
  lVar6 = FUN_00185f00(iVar3 + 0x90);
  if (lVar6 == 0) {
    lVar6 = FUN_001809f0(*param_1 + 0xb30);
    if (lVar6 == 0) {
      return;
    }
    iVar3 = FUN_001809f0(*param_1 + 0xb30);
    auVar10 = _pextlw((long)*(int *)(iVar3 + 0xc),(long)*(int *)(iVar3 + 4));
    auVar10 = _pextlw((long)*(int *)(iVar3 + 8),auVar10._0_8_);
    auVar10 = _qmtc2(auVar10._0_4_);
  }
  else {
    pauVar2 = (undefined1 (*) [16])FUN_00185f10(*param_1 + 0x90);
    auVar10 = _lqc2(*pauVar2);
  }
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vsub(auVar8,auVar10);
  auVar8 = _vmul(auVar8,auVar8);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar9,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  bVar1 = 2.3283064e-10 <= auVar8._0_4_;
  if (bVar1) {
    auVar10 = _sqc2(auVar10);
    *(undefined1 (*) [16])(param_1 + 4) = auVar10;
  }
  iVar3 = *param_1;
  if (bVar1) {
    lVar6 = FUN_001829e8(iVar3 + 0x810);
    iVar3 = *param_1;
    if (lVar6 == 0) {
      lVar6 = FUN_001829a8(iVar3 + 0x810);
      iVar3 = *param_1;
      if (lVar6 != 0) {
        FUN_00182db8(iVar3 + 0x810,*(undefined8 *)(param_1 + 4));
        iVar3 = *param_1;
        goto LAB_00197320;
      }
    }
    FUN_00182410(iVar3 + 0x810,*(undefined8 *)(param_1 + 4),0,0);
    iVar3 = *param_1;
  }
LAB_00197320:
  lVar6 = FUN_001829e8(iVar3 + 0x810);
  if ((lVar6 == 0) && (lVar6 = FUN_001829a8(*param_1 + 0x810), lVar6 != 0)) {
    FUN_00173690(param_1 + 9);
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
LAB_001973a0:
    iVar3 = *param_1;
  }
  else {
    piVar7 = param_1 + 9;
    lVar6 = FUN_001735e0(piVar7);
    if (lVar6 != 0) {
      lVar6 = FUN_00173610(piVar7);
      if (lVar6 != 0) {
        *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 1;
      }
      goto LAB_001973a0;
    }
    FUN_00173640(0x40400000,piVar7);
    iVar3 = *param_1;
  }
  iVar4 = *(int *)(iVar3 + 0x1ee0);
LAB_001973a8:
  if ((iVar4 != 0) && (lVar6 = FUN_001829e8(iVar3 + 0x810), lVar6 != 0)) {
    puVar5 = (undefined8 *)FUN_001834e0(*param_1 + 0x1eb0);
    FUN_0017db98(*param_1 + 0x650,*puVar5);
  }
  return;
}


// ==== FUN_001973f0 @ 001973f0 ====

void FUN_001973f0(int param_1)

{
  FUN_00193980();
  FUN_00173690(param_1 + 0x20);
  FUN_00173690(param_1 + 0x24);
  return;
}


// ==== FUN_00197428 @ 00197428 ====

void FUN_00197428(undefined8 param_1)

{
  FUN_001825b0(*(int *)param_1 + 0x810);
  FUN_00193988(param_1);
  return;
}


// ==== FUN_00197460 @ 00197460 ====

void FUN_00197460(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  lVar2 = FUN_001830d0(*piVar3 + 0xd10);
  if (lVar2 != 0) {
    lVar2 = FUN_001829e8(*piVar3 + 0x810);
    if (lVar2 == 0) {
      if (*(char *)(*piVar3 + 0x846) == '\0') {
        lVar2 = FUN_001829a8();
        if (lVar2 != 0) {
          return;
        }
        FUN_00193990(param_1,0);
        return;
      }
      iVar1 = *piVar3;
    }
    else {
      iVar1 = *piVar3;
    }
    iVar1 = FUN_001830d0(iVar1 + 0xd10);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x14))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x10),*(undefined4 *)(*piVar3 + 0x7c));
  }
  FUN_00193990(param_1,1);
  return;
}


// ==== FUN_00197518 @ 00197518 ====

void FUN_00197518(int *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  FUN_00193980();
  iVar2 = *param_1;
  iVar1 = FUN_001830d0(iVar2 + 0xd10);
  FUN_00182380(iVar2 + 0x810,*(undefined4 *)(iVar1 + 0x20),0);
  iVar2 = FUN_001830d0(*param_1 + 0xd10);
  if (*(float *)(iVar2 + 0x30) <= 0.0) {
    lVar3 = FUN_00183110(*param_1 + 0xd10);
    if (lVar3 != 0) {
      FUN_001828c0(*param_1 + 0x810,*(undefined4 *)((int)lVar3 + 0x20));
    }
  }
  return;
}


// ==== FUN_001975b0 @ 001975b0 ====

void FUN_001975b0(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_001975d0 @ 001975d0 ====

void FUN_001975d0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + 8;
  lVar1 = FUN_001735e0(iVar2);
  if ((lVar1 != 0) && (lVar1 = FUN_00173610(iVar2), lVar1 != 0)) {
    FUN_00173690(iVar2);
    FUN_00193a28(param_1,0x1f,0);
  }
  return;
}


// ==== FUN_00197638 @ 00197638 ====

void FUN_00197638(undefined8 param_1)

{
  FUN_00193980();
  FUN_00193a28(param_1,0x1f,0);
  FUN_00173690((int)param_1 + 8);
  return;
}


// ==== FUN_00197678 @ 00197678 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00197678(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  
  FUN_00193988();
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar1 = DAT_004432c0;
  iVar5 = *param_1;
  if (*(char *)(iVar5 + 0xc7d) != '\0') {
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar5 + 0x7c) + 0xa0));
    auVar8 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
    auVar8 = _vsub(auVar8,auVar7);
    auVar11 = _lqc2(_DAT_004432d0);
    auVar7 = _vmul(auVar8,auVar8);
    auVar9 = _vmove(auVar8);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar12,auVar7);
    auVar8 = _vmul(auVar11,auVar11);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar13 = _vwaitq();
    auVar10 = _vmulq(auVar9,uVar13);
    _vmulq(auVar7,uVar13);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar12,auVar8);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    uVar13 = _vwaitq();
    auVar12 = _vmulq(auVar11,uVar13);
    _vmulq(auVar8,uVar13);
    auVar7 = _sqc2(auVar7);
    auVar8 = _vmul(auVar10,auVar12);
    auVar9 = _lqc2(auVar7);
    _vaddabc(auVar8,auVar8);
    auVar9 = _vmaddbc(auVar9,auVar8);
    auVar11 = _vsubbc(in_vf0,in_vf0);
    auVar8 = _sqc2(auVar10);
    auVar11 = _vmax(auVar9,auVar11);
    auVar9 = _sqc2(auVar12);
    auVar11 = _vminibc(auVar11,in_vf0);
    auVar11 = _qmfc2(auVar11._0_4_);
    fVar6 = (float)acosf(auVar11._0_4_);
    auVar9 = _lqc2(auVar9);
    auVar8 = _lqc2(auVar8);
    _vopmula(auVar8,auVar9);
    auVar9 = _vopmsub(auVar9,auVar8);
    auVar8._4_4_ = uVar2;
    auVar8._0_4_ = uVar1;
    auVar8._8_4_ = uVar3;
    auVar8._12_4_ = uVar4;
    auVar8 = _lqc2(auVar8);
    auVar8 = _vmul(auVar9,auVar8);
    auVar7 = _lqc2(auVar7);
    _vaddabc(auVar8,auVar8);
    auVar7 = _vmaddbc(auVar7,auVar8);
    auVar7 = _qmfc2(auVar7._0_4_);
    fVar6 = fVar6 * 57.29578;
    if (0.0 < auVar7._0_4_) {
      fVar6 = -fVar6;
    }
    FUN_00180aa0(fVar6,*param_1 + 0xb30,*(undefined8 *)(*(int *)(*param_1 + 0x7c) + 0xa0),2);
    iVar5 = *param_1;
  }
  FUN_0018ac80(iVar5 + 0xd18,0);
  return;
}


// ==== FUN_001977f8 @ 001977f8 ====

void FUN_001977f8(undefined8 param_1)

{
  long lVar1;
  
  FUN_0018ac80(*(int *)param_1 + 0xd18,0);
  lVar1 = FUN_00183160(*(int *)param_1 + 0xd10);
  if (lVar1 == 0) {
    FUN_00193990(param_1,1);
  }
  else {
    FUN_00193a28(param_1,0x1f,0);
  }
  return;
}


