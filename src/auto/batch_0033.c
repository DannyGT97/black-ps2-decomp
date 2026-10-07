// ==== FUN_002bfed0 @ 002bfed0 ====

int FUN_002bfed0(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


// ==== FUN_002bff10 @ 002bff10 ====

undefined4 FUN_002bff10(long param_1)

{
  if (iGpffff8ec0 == 0) {
    if (param_1 == 0) {
      uGpffff884c = 0x10;
      DAT_00449450 = uGpffff8090;
    }
    else {
      uGpffff884c = 0x20;
      DAT_00449450 = uGpffff808c;
    }
    return 1;
  }
  return 0;
}


// ==== FUN_002bff70 @ 002bff70 ====

undefined4 FUN_002bff70(undefined4 param_1)

{
  uGpffff8880 = param_1;
  return 1;
}


// ==== FUN_002c0038 @ 002c0038 ====

uint FUN_002c0038(void)

{
  uint uVar1;
  
  iGpffff8e98 = FUN_002ac850(0x5c,0x40c,0,0,0);
  uVar1 = 0;
  if (-1 < iGpffff8e98) {
    iGpffff8e9c = FUN_002a93e0(0xd8,0x40c,0,0,0);
    uVar1 = 0;
    if (-1 < iGpffff8e9c) {
      uGpffff8ec8 = FUN_002af5a8(0,0x110,0,0,0);
      uVar1 = 0;
      if (-1 < (int)uGpffff8ec8) {
        uGpffff8ec8 = FUN_002d0a18(0x110,0x2c00f0,0x2c0168,0x2c01c0);
        uVar1 = ~uGpffff8ec8 >> 0x1f;
      }
    }
  }
  return uVar1;
}


// ==== FUN_002c00f0 @ 002c00f0 ====

undefined8 FUN_002c00f0(undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  undefined2 auStack_40 [8];
  
  if (param_2 == 4) {
    if (param_3 == 0) {
      return 0;
    }
    if ((*(int *)param_3 != 0) && (lVar1 = FUN_002a53d0(param_1,auStack_40,4), lVar1 != 0)) {
      *(undefined2 *)(*(int *)param_3 + DAT_0040e688 + 0x14) = auStack_40[0];
      return param_1;
    }
  }
  return 0;
}


// ==== FUN_002c0168 @ 002c0168 ====

undefined8 FUN_002c0168(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint auStack_30 [4];
  
  if ((param_3 == 0) || (*(int *)param_3 == 0)) {
    param_1 = 0;
  }
  else {
    auStack_30[0] = (uint)*(ushort *)(*(int *)param_3 + DAT_0040e688 + 0x14);
    lVar1 = FUN_002a53a8(param_1,auStack_30,4);
    if (lVar1 == 0) {
      param_1 = 0;
    }
  }
  return param_1;
}


// ==== FUN_002c01e0 @ 002c01e0 ====

undefined4 FUN_002c01e0(undefined8 param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 in_v1_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong in_a0_udw;
  
  if ((*(byte *)(*(int *)(param_2 + 0x60) + 0x20) & 7) == 5) {
    FUN_002b3d88(0x80000000,2);
    auVar2._8_8_ = in_v1_udw;
    auVar2._0_8_ = 0xe;
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x1000000000008001;
    auVar3 = _pcpyld(auVar2,auVar3);
    *DAT_0040e5f0 = auVar3._0_4_;
    DAT_0040e5f0[1] = auVar3._4_4_;
    DAT_0040e5f0[2] = auVar3._8_4_;
    DAT_0040e5f0[3] = auVar3._12_4_;
    auVar4._8_8_ = auVar3._8_8_;
    auVar4._0_8_ = 0x3f;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = in_a0_udw;
    auVar3 = _pcpyld(auVar4,auVar1 << 0x40);
    DAT_0040e5f0[4] = auVar3._0_4_;
    DAT_0040e5f0[5] = auVar3._4_4_;
    DAT_0040e5f0[6] = auVar3._8_4_;
    DAT_0040e5f0[7] = auVar3._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 8;
    if ((*(byte *)(*(int *)(param_2 + 0x60) + 0x23) & 0x90) == 0x90) {
      FUN_002bf748();
    }
  }
  if (DAT_0040dfc0 != 0) {
    DAT_0040dfc0 = 0;
  }
  return 1;
}


// ==== FUN_002c0298 @ 002c0298 ====

undefined4 FUN_002c0298(void)

{
  uint uVar1;
  
  if (DAT_0040dfb8 != 0) {
    DAT_0040dfb8 = 0;
    DAT_0040dfc0 = 0;
  }
  FUN_002ce150();
  uVar1 = DAT_0040e024 & 0xff;
  DAT_0040e024 = DAT_0040e024 + 1;
  FUN_002b3668(0x44dd30,uVar1);
  FUN_002bf168();
  if ((((DAT_0044e0f0 != 0) || (DAT_0044e0f4 != 0)) || (DAT_0044e0f8 != 0)) || (DAT_0044e0fc != 0))
  {
    DAT_0040e044 = 1;
  }
  return 1;
}


// ==== FUN_002c0340 @ 002c0340 ====

undefined4 FUN_002c0340(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((*(byte *)(iVar2 + 0x23) & 0x60) == 0) {
    return 0;
  }
  if ((*(byte *)(iVar2 + 0x21) & 0x80) != 0) {
    return 0;
  }
  if ((param_3 & 1) != 0) {
    if ((*(byte *)(iVar2 + 0x21) & 0x40) != 0) {
      uVar1 = *(undefined4 *)(iVar2 + 8);
      goto LAB_002c03a0;
    }
    FUN_002cd640(param_2);
  }
  uVar1 = *(undefined4 *)(iVar2 + 8);
LAB_002c03a0:
  *param_1 = uVar1;
  if ((param_3 & 1) != 0) {
    *(byte *)(iVar2 + 0x22) = *(byte *)(iVar2 + 0x22) | 0x10;
  }
  if ((param_3 & 2) != 0) {
    *(byte *)(iVar2 + 0x22) = *(byte *)(iVar2 + 0x22) | 8;
  }
  return 1;
}


// ==== FUN_002c03f8 @ 002c03f8 ====

undefined4 FUN_002c03f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar5 = (int)param_2;
  bVar2 = *(byte *)(iVar5 + 0x23);
  if ((bVar2 & 0x60) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(iVar5 + 8);
    if (iVar1 != 0) {
      iVar4 = 0x100;
      if ((bVar2 & 0x40) != 0) {
        iVar4 = 0x10;
      }
      if ((bVar2 & 0xf) == 1) {
        iVar4 = iVar4 << 1;
      }
      else {
        if ((bVar2 & 0xf) != 5) {
          uStack_30 = 1;
          uStack_2c = FUN_002a5548(0xffffffff8000000d);
          FUN_002a55d8(&uStack_30);
          return 0;
        }
        iVar4 = iVar4 << 2;
      }
      if ((*(byte *)(iVar5 + 0x21) & 0x40) == 0) {
        FUN_003680a0(iVar1,iVar1 + iVar4 + 0x7f);
        bVar2 = *(byte *)(iVar5 + 0x22);
      }
      else if ((*(byte *)(iVar5 + 0x22) & 1) == 0) {
        bVar2 = *(byte *)(iVar5 + 0x22);
      }
      else if (*(int *)(iVar5 + DAT_0040e688 + 0x58) == 0) {
        bVar2 = *(byte *)(iVar5 + 0x22);
      }
      else {
        FUN_002cce80(param_2);
        bVar2 = *(byte *)(iVar5 + 0x22);
      }
      *(byte *)(iVar5 + 0x22) = bVar2 & 0xe7;
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_002c0558 @ 002c0558 ====

undefined4 FUN_002c0558(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0x14;
  iVar2 = FUN_002d0680(param_2 + 4);
  *param_1 = *param_1 + 0xc + iVar2;
  iVar3 = FUN_002d0680(param_2 + 0xc);
  iVar1 = DAT_0040e688;
  iVar2 = *param_2;
  iVar3 = *param_1 + 0xc + iVar3;
  *param_1 = iVar3;
  *param_1 = *(int *)(iVar2 + iVar1 + 0x28) + *(int *)(iVar2 + iVar1 + 0x2c) + iVar3 + 100;
  return 1;
}


// ==== FUN_002c0840 @ 002c0840 ====

void FUN_002c0840(long param_1)

{
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
  ulong in_v0_udw;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 in_a0_udw;
  uint uVar23;
  undefined8 in_a2_udw;
  
  uGpffff87e0 = DAT_0044df00;
  if ((uGpffff8834 & 1) != 0) {
    uGpffff87e0 = DAT_0044dd90;
  }
  FUN_002b3d88(0x80000000,0x20);
  uGpffff8ee8 = uGpffff8808;
  auVar14._8_8_ = in_v0_udw;
  auVar14._0_8_ = 0xe;
  auVar5._8_8_ = in_a2_udw;
  auVar5._0_8_ = 0x1000000000008006;
  auVar14 = _pcpyld(auVar14,auVar5);
  *puGpffff8e00 = auVar14._0_4_;
  puGpffff8e00[1] = auVar14._4_4_;
  puGpffff8e00[2] = auVar14._8_4_;
  puGpffff8e00[3] = auVar14._12_4_;
  if (param_1 == 2) {
    auVar1._8_8_ = in_v0_udw;
    auVar1._0_8_ = 0x4c;
    auVar6._8_8_ = in_a2_udw;
    auVar6._0_8_ = uGpffff87e0 & 0xffffffff;
    auVar14 = _pcpyld(auVar1,auVar6);
    puGpffff8e00[4] = auVar14._0_4_;
    puGpffff8e00[5] = auVar14._4_4_;
    puGpffff8e00[6] = auVar14._8_4_;
    puGpffff8e00[7] = auVar14._12_4_;
    auVar15._8_8_ = auVar14._8_8_;
    auVar15._0_8_ = 0x4e;
    auVar7._8_8_ = in_a2_udw;
    auVar7._0_8_ = uGpffff87d8 | 0x100000000;
    auVar14 = _pcpyld(auVar15,auVar7);
    puGpffff8e00[8] = auVar14._0_4_;
    puGpffff8e00[9] = auVar14._4_4_;
    puGpffff8e00[10] = auVar14._8_4_;
    puGpffff8e00[0xb] = auVar14._12_4_;
    auVar16._8_8_ = auVar14._8_8_;
    auVar16._0_8_ = 0x47;
    auVar8._8_8_ = in_a2_udw;
    auVar8._0_8_ = uGpffff87e8 & 0xfffffffffffabffe | 0x30000;
    auVar14 = _pcpyld(auVar16,auVar8);
    puGpffff8e00[0xc] = auVar14._0_4_;
    puGpffff8e00[0xd] = auVar14._4_4_;
    puGpffff8e00[0xe] = auVar14._8_4_;
    puGpffff8e00[0xf] = auVar14._12_4_;
    auVar2._1_7_ = 0;
    auVar2[0] = *(uint *)(iGpffff8ed0 + 0x14) < 0x18;
    auVar2._8_8_ = in_v0_udw;
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x45;
    auVar14 = _pcpyld(auVar3,auVar2);
    puGpffff8e00[0x10] = auVar14._0_4_;
    puGpffff8e00[0x11] = auVar14._4_4_;
    puGpffff8e00[0x12] = auVar14._8_4_;
    puGpffff8e00[0x13] = auVar14._12_4_;
  }
  else {
    auVar17._8_8_ = auVar14._8_8_;
    auVar17._0_8_ = 0x4e;
    auVar10._8_8_ = in_a2_udw;
    auVar10._0_8_ = uGpffff87d8 & 0xfffffffeffffffff;
    auVar14 = _pcpyld(auVar17,auVar10);
    puGpffff8e00[4] = auVar14._0_4_;
    puGpffff8e00[5] = auVar14._4_4_;
    puGpffff8e00[6] = auVar14._8_4_;
    puGpffff8e00[7] = auVar14._12_4_;
    auVar18._8_8_ = auVar14._8_8_;
    auVar18._0_8_ = 0x4c;
    auVar11._8_8_ = in_a2_udw;
    auVar11._0_8_ = uGpffff87e0 | 0xffffffff00000000;
    auVar14 = _pcpyld(auVar18,auVar11);
    puGpffff8e00[8] = auVar14._0_4_;
    puGpffff8e00[9] = auVar14._4_4_;
    puGpffff8e00[10] = auVar14._8_4_;
    puGpffff8e00[0xb] = auVar14._12_4_;
    auVar19._8_8_ = auVar14._8_8_;
    auVar19._0_8_ = 0x47;
    auVar12._8_8_ = in_a2_udw;
    auVar12._0_8_ = uGpffff87e8 & 0xfffffffffffbbffe | 0x30000;
    auVar14 = _pcpyld(auVar19,auVar12);
    puGpffff8e00[0xc] = auVar14._0_4_;
    puGpffff8e00[0xd] = auVar14._4_4_;
    puGpffff8e00[0xe] = auVar14._8_4_;
    puGpffff8e00[0xf] = auVar14._12_4_;
    auVar20._8_8_ = auVar14._8_8_;
    auVar20._0_8_ = 0x45;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = in_v0_udw;
    auVar14 = _pcpyld(auVar20,auVar13 << 0x40);
    puGpffff8e00[0x10] = auVar14._0_4_;
    puGpffff8e00[0x11] = auVar14._4_4_;
    puGpffff8e00[0x12] = auVar14._8_4_;
    puGpffff8e00[0x13] = auVar14._12_4_;
  }
  auVar21._8_8_ = auVar14._8_8_;
  auVar21._0_8_ = 0x44;
  auVar4._8_8_ = in_a0_udw;
  auVar4._0_8_ = 0x42;
  auVar14 = _pcpyld(auVar4,auVar21);
  puGpffff8e00[0x14] = auVar14._0_4_;
  puGpffff8e00[0x15] = auVar14._4_4_;
  puGpffff8e00[0x16] = auVar14._8_4_;
  puGpffff8e00[0x17] = auVar14._12_4_;
  auVar22._8_8_ = auVar14._8_8_;
  uGpffff8808 = uGpffff8808 & 0xfffffffffffffe1f | 0x60;
  uVar23 = (uint)((((ulong)*(ushort *)(iGpffff8ed0 + 0x1e) & 0xfff) << 0x24) >> 0x20);
  if (cGpffff8e0c != '\0') {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    EI();
    uVar23 = uVar23 | (uint)((((ulong)((uint)bGpffff8e0d ^ bGpffff8e0e & 1) ^ (ulong)bGpffff8e0f) <<
                             0x23) >> 0x20);
  }
  auVar22._0_8_ = 0x18;
  auVar9._4_4_ = uVar23;
  auVar9._0_4_ = (*(ushort *)(iGpffff8ed0 + 0x1c) & 0xfff) << 4;
  auVar9._8_8_ = in_a2_udw;
  auVar14 = _pcpyld(auVar22,auVar9);
  puGpffff8e00[0x18] = auVar14._0_4_;
  puGpffff8e00[0x19] = auVar14._4_4_;
  puGpffff8e00[0x1a] = auVar14._8_4_;
  puGpffff8e00[0x1b] = auVar14._12_4_;
  puGpffff8e00 = puGpffff8e00 + 0x1c;
  return;
}


// ==== FUN_002c0a98 @ 002c0a98 ====

void FUN_002c0a98(int param_1,int param_2,int param_3,int param_4,ulong param_5,int param_6,
                 ulong param_7,int param_8,int param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_v0_udw;
  ulong in_v1_udw;
  undefined8 in_a0_udw;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  
  FUN_002b3d88(0xffffffff80000000,0x20);
  auVar10._8_8_ = in_a0_udw;
  auVar10._0_8_ = 0x1000000000008006;
  auVar11._8_8_ = in_v1_udw;
  auVar11._0_8_ = 0xe;
  auVar11 = _pcpyld(auVar11,auVar10);
  *puGpffff8e00 = auVar11._0_4_;
  puGpffff8e00[1] = auVar11._4_4_;
  puGpffff8e00[2] = auVar11._8_4_;
  puGpffff8e00[3] = auVar11._12_4_;
  if (param_9 == 0) {
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = 0x116;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = in_v1_udw;
    auVar11 = _pcpyld(auVar9 << 0x40,auVar3);
  }
  else {
    auVar1._8_8_ = in_v0_udw;
    auVar1._0_8_ = 0x156;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = in_v1_udw;
    auVar11 = _pcpyld(auVar8 << 0x40,auVar1);
  }
  puGpffff8e00[4] = auVar11._0_4_;
  puGpffff8e00[5] = auVar11._4_4_;
  puGpffff8e00[6] = auVar11._8_4_;
  puGpffff8e00[7] = auVar11._12_4_;
  auVar12._8_8_ = auVar11._8_8_;
  auVar12._0_8_ = (long)(param_6 << 0x10) | param_5;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 3;
  auVar11 = _pcpyld(auVar4,auVar12);
  puGpffff8e00[8] = auVar11._0_4_;
  puGpffff8e00[9] = auVar11._4_4_;
  puGpffff8e00[10] = auVar11._8_4_;
  puGpffff8e00[0xb] = auVar11._12_4_;
  auVar13._8_8_ = auVar11._8_8_;
  auVar13._0_8_ = (long)(param_2 << 0x14 | param_1 << 4);
  auVar6._8_8_ = in_a2_udw;
  auVar6._0_8_ = 5;
  auVar11 = _pcpyld(auVar6,auVar13);
  puGpffff8e00[0xc] = auVar11._0_4_;
  puGpffff8e00[0xd] = auVar11._4_4_;
  puGpffff8e00[0xe] = auVar11._8_4_;
  puGpffff8e00[0xf] = auVar11._12_4_;
  auVar14._8_8_ = auVar11._8_8_;
  auVar14._0_8_ = 0x80ffffff;
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 1;
  auVar11 = _pcpyld(auVar2,auVar14);
  puGpffff8e00[0x10] = auVar11._0_4_;
  puGpffff8e00[0x11] = auVar11._4_4_;
  puGpffff8e00[0x12] = auVar11._8_4_;
  puGpffff8e00[0x13] = auVar11._12_4_;
  auVar15._8_8_ = auVar11._8_8_;
  auVar15._0_8_ = (long)(param_8 << 0x10) | param_7;
  auVar5._8_8_ = in_a1_udw;
  auVar5._0_8_ = 3;
  auVar11 = _pcpyld(auVar5,auVar15);
  puGpffff8e00[0x14] = auVar11._0_4_;
  puGpffff8e00[0x15] = auVar11._4_4_;
  puGpffff8e00[0x16] = auVar11._8_4_;
  puGpffff8e00[0x17] = auVar11._12_4_;
  auVar16._8_8_ = auVar11._8_8_;
  auVar16._0_8_ = (long)(param_4 << 0x14 | param_3 << 4);
  auVar7._8_8_ = in_a2_udw;
  auVar7._0_8_ = 5;
  auVar11 = _pcpyld(auVar7,auVar16);
  puGpffff8e00[0x18] = auVar11._0_4_;
  puGpffff8e00[0x19] = auVar11._4_4_;
  puGpffff8e00[0x1a] = auVar11._8_4_;
  puGpffff8e00[0x1b] = auVar11._12_4_;
  puGpffff8e00 = puGpffff8e00 + 0x1c;
  return;
}


// ==== FUN_002c0c10 @ 002c0c10 ====

void FUN_002c0c10(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_a0_udw;
  ulong uVar13;
  undefined8 in_a2_udw;
  
  FUN_002b3d88(0x80000000,0x20);
  auVar6._8_8_ = extraout_v0_udw;
  auVar6._0_8_ = 0xe;
  auVar1._8_8_ = in_a2_udw;
  auVar1._0_8_ = 0x1000000000008005;
  auVar7 = _pcpyld(auVar6,auVar1);
  *puGpffff8e00 = auVar7._0_4_;
  puGpffff8e00[1] = auVar7._4_4_;
  puGpffff8e00[2] = auVar7._8_4_;
  puGpffff8e00[3] = auVar7._12_4_;
  auVar8._8_8_ = auVar7._8_8_;
  auVar8._0_8_ = 0x4c;
  auVar2._8_8_ = in_a2_udw;
  auVar2._0_8_ = uGpffff87e0;
  auVar7 = _pcpyld(auVar8,auVar2);
  puGpffff8e00[4] = auVar7._0_4_;
  puGpffff8e00[5] = auVar7._4_4_;
  puGpffff8e00[6] = auVar7._8_4_;
  puGpffff8e00[7] = auVar7._12_4_;
  auVar9._8_8_ = auVar7._8_8_;
  auVar9._0_8_ = 0x4e;
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = uGpffff87d8;
  auVar7 = _pcpyld(auVar9,auVar3);
  puGpffff8e00[8] = auVar7._0_4_;
  puGpffff8e00[9] = auVar7._4_4_;
  puGpffff8e00[10] = auVar7._8_4_;
  puGpffff8e00[0xb] = auVar7._12_4_;
  auVar10._8_8_ = auVar7._8_8_;
  auVar10._0_8_ = uGpffff8810;
  auVar7._8_8_ = in_a0_udw;
  auVar7._0_8_ = 0x42;
  auVar7 = _pcpyld(auVar7,auVar10);
  puGpffff8e00[0xc] = auVar7._0_4_;
  puGpffff8e00[0xd] = auVar7._4_4_;
  puGpffff8e00[0xe] = auVar7._8_4_;
  puGpffff8e00[0xf] = auVar7._12_4_;
  auVar11._8_8_ = auVar7._8_8_;
  uVar13 = uGpffff87f0 & 0xfffffff7ffffffff;
  uGpffff8808 = CONCAT44((int)((uGpffff8808 & 0xfffffffffffffe1f) >> 0x20),
                         (uint)(uGpffff8808 & 0xfffffffffffffe1f) | (uint)uGpffff8ee8 & 0x1e0);
  if (cGpffff8e0c != '\0') {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    EI();
    uVar13 = uVar13 | ((ulong)bGpffff8e0d ^ (ulong)bGpffff8e0e & 1 ^ (ulong)bGpffff8e0f) << 0x23;
  }
  auVar11._0_8_ = 0x18;
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = uVar13;
  auVar7 = _pcpyld(auVar11,auVar4);
  puGpffff8e00[0x10] = auVar7._0_4_;
  puGpffff8e00[0x11] = auVar7._4_4_;
  puGpffff8e00[0x12] = auVar7._8_4_;
  puGpffff8e00[0x13] = auVar7._12_4_;
  auVar12._8_8_ = auVar7._8_8_;
  auVar12._0_8_ = 0x19;
  auVar5._8_8_ = in_a2_udw;
  auVar5._0_8_ = uVar13;
  auVar7 = _pcpyld(auVar12,auVar5);
  puGpffff8e00[0x14] = auVar7._0_4_;
  puGpffff8e00[0x15] = auVar7._4_4_;
  puGpffff8e00[0x16] = auVar7._8_4_;
  puGpffff8e00[0x17] = auVar7._12_4_;
  puGpffff8e00 = puGpffff8e00 + 0x18;
  uGpffff8ea0 = 0;
  return;
}


// ==== FUN_002c0d58 @ 002c0d58 ====

/* WARNING: Removing unreachable block (ram,0x002c0db0) */

undefined4 FUN_002c0d58(undefined8 param_1,int *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
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
  int iVar17;
  undefined8 extraout_v0_udw;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 *puVar25;
  uint *puVar26;
  uint *puVar27;
  undefined2 *puVar28;
  undefined2 *puVar29;
  int iVar30;
  ulong in_a0_udw;
  int iVar31;
  ulong in_a1_udw;
  undefined8 in_a2_udw;
  undefined4 in_s7_udw;
  undefined4 in_register_0000017c;
  
  bVar1 = *(byte *)(iGpffff8ed0 + 0x20);
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      FUN_002c0840();
      if ((*(byte *)(iGpffff8ed0 + 0x23) & 0xf) == 1) {
        iVar31 = param_2[3];
        iVar17 = *param_2;
        iVar30 = param_2[1];
        iVar2 = param_2[2];
        FUN_002b3d88(0x80000000,0x20);
        auVar18._8_8_ = extraout_v0_udw;
        auVar18._0_8_ = 0xe;
        auVar6._8_8_ = in_a2_udw;
        auVar6._0_8_ = 0x1000000000008004;
        auVar19 = _pcpyld(auVar18,auVar6);
        *puGpffff8e00 = auVar19._0_4_;
        puGpffff8e00[1] = auVar19._4_4_;
        puGpffff8e00[2] = auVar19._8_4_;
        puGpffff8e00[3] = auVar19._12_4_;
        puVar25 = puGpffff8e00 + 4;
        auVar20._8_8_ = auVar19._8_8_;
        auVar20._0_8_ = 6;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = in_a0_udw;
        auVar19 = _pcpyld(auVar15 << 0x40,auVar20);
        *puVar25 = auVar19._0_4_;
        puGpffff8e00[5] = auVar19._4_4_;
        puGpffff8e00[6] = auVar19._8_4_;
        puGpffff8e00[7] = auVar19._12_4_;
        auVar4._8_8_ = in_a1_udw;
        auVar4._0_8_ = 5;
        auVar7._8_8_ = in_a2_udw;
        auVar7._0_8_ = (long)(iVar17 << 4) | (long)(iVar30 << 0x14) | (ulong)param_3 << 0x20;
        auVar19 = _pcpyld(auVar4,auVar7);
        puGpffff8e00[8] = auVar19._0_4_;
        puGpffff8e00[9] = auVar19._4_4_;
        puGpffff8e00[10] = auVar19._8_4_;
        puGpffff8e00[0xb] = auVar19._12_4_;
        auVar21._8_8_ = auVar19._8_8_;
        auVar21._0_8_ = 1;
        auVar8._4_4_ = 0;
        auVar8._0_4_ = ((int)(param_3 & 0x8000) >> 8) << 0x18 |
                       ((int)(param_3 & 0x7c00) >> 7) << 0x10 | ((int)(param_3 & 0x3e0) >> 2) << 8 |
                       (param_3 & 0x1f) << 3;
        auVar8._8_8_ = in_a2_udw;
        auVar19 = _pcpyld(auVar21,auVar8);
        puGpffff8e00[0xc] = auVar19._0_4_;
        puGpffff8e00[0xd] = auVar19._4_4_;
        puGpffff8e00[0xe] = auVar19._8_4_;
        puGpffff8e00[0xf] = auVar19._12_4_;
        auVar5._8_8_ = in_a1_udw;
        auVar5._0_8_ = 5;
        auVar9._8_8_ = in_a2_udw;
        auVar9._0_8_ = (long)((iVar17 + iVar2) * 0x10) |
                       (long)((iVar30 + iVar31) * 0x100000) | (ulong)param_3 << 0x20;
        auVar19 = _pcpyld(auVar5,auVar9);
        puGpffff8e00[0x10] = auVar19._0_4_;
        puGpffff8e00[0x11] = auVar19._4_4_;
        puGpffff8e00[0x12] = auVar19._8_4_;
        puGpffff8e00[0x13] = auVar19._12_4_;
      }
      else {
        iVar31 = param_2[3];
        iVar17 = *param_2;
        iVar30 = param_2[1];
        iVar2 = param_2[2];
        FUN_002b3d88(0x80000000,0x20);
        auVar22._8_8_ = extraout_v0_udw_00;
        auVar22._0_8_ = 0xe;
        auVar11._8_4_ = in_s7_udw;
        auVar11._0_8_ = 0x1000000000008004;
        auVar11._12_4_ = in_register_0000017c;
        auVar19 = _pcpyld(auVar22,auVar11);
        *puGpffff8e00 = auVar19._0_4_;
        puGpffff8e00[1] = auVar19._4_4_;
        puGpffff8e00[2] = auVar19._8_4_;
        puGpffff8e00[3] = auVar19._12_4_;
        puVar25 = puGpffff8e00 + 4;
        auVar23._8_8_ = auVar19._8_8_;
        auVar23._0_8_ = 6;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = in_a1_udw;
        auVar19 = _pcpyld(auVar16 << 0x40,auVar23);
        *puVar25 = auVar19._0_4_;
        puGpffff8e00[5] = auVar19._4_4_;
        puGpffff8e00[6] = auVar19._8_4_;
        puGpffff8e00[7] = auVar19._12_4_;
        auVar19._8_8_ = in_a2_udw;
        auVar19._0_8_ = 5;
        auVar12._8_4_ = in_s7_udw;
        auVar12._0_8_ = (long)(iVar17 << 4) | (long)(iVar30 << 0x14) | (ulong)param_3 << 0x20;
        auVar12._12_4_ = in_register_0000017c;
        auVar19 = _pcpyld(auVar19,auVar12);
        puGpffff8e00[8] = auVar19._0_4_;
        puGpffff8e00[9] = auVar19._4_4_;
        puGpffff8e00[10] = auVar19._8_4_;
        puGpffff8e00[0xb] = auVar19._12_4_;
        auVar24._8_8_ = auVar19._8_8_;
        auVar24._0_8_ = 1;
        auVar13._4_4_ = 0;
        auVar13._0_4_ =
             param_3 & 0xff000000 | (param_3 >> 0x10 & 0xff) << 0x10 |
             ((int)(param_3 & 0xff00) >> 8) << 8 | param_3 & 0xff;
        auVar13._8_4_ = in_s7_udw;
        auVar13._12_4_ = in_register_0000017c;
        auVar19 = _pcpyld(auVar24,auVar13);
        puGpffff8e00[0xc] = auVar19._0_4_;
        puGpffff8e00[0xd] = auVar19._4_4_;
        puGpffff8e00[0xe] = auVar19._8_4_;
        puGpffff8e00[0xf] = auVar19._12_4_;
        auVar10._8_8_ = in_a2_udw;
        auVar10._0_8_ = 5;
        auVar14._8_4_ = in_s7_udw;
        auVar14._0_8_ =
             (long)((iVar17 + iVar2) * 0x10) |
             (long)((iVar30 + iVar31) * 0x100000) | (ulong)param_3 << 0x20;
        auVar14._12_4_ = in_register_0000017c;
        auVar19 = _pcpyld(auVar10,auVar14);
        puGpffff8e00[0x10] = auVar19._0_4_;
        puGpffff8e00[0x11] = auVar19._4_4_;
        puGpffff8e00[0x12] = auVar19._8_4_;
        puGpffff8e00[0x13] = auVar19._12_4_;
      }
      puGpffff8e00 = puVar25 + 0x10;
      FUN_002c0c10();
      return 1;
    }
  }
  else if (bVar1 != 4) {
    return 0;
  }
  iVar31 = *(int *)(iGpffff8ed0 + 4);
  if (iVar31 == 0) {
    return 0;
  }
  iVar17 = *(int *)(iGpffff8ed0 + 0x14) + 7;
  iVar30 = iVar17 >> 3;
  iVar17 = iVar17 >> 0x1f;
  if (CONCAT44(iVar17,iVar30) == 2) {
    uVar3 = *(uint *)(iGpffff8ed0 + 0x18);
    iVar17 = param_2[3];
    iVar30 = param_2[2];
    puVar28 = (undefined2 *)(uVar3 * param_2[1] + iVar31 + *param_2 * 2);
    while (iVar17 != 0) {
      iVar17 = iVar17 + -1;
      puVar29 = puVar28;
      for (iVar31 = param_2[2]; iVar31 != 0; iVar31 = iVar31 + -1) {
        *puVar28 = (short)param_3;
        puVar28 = puVar28 + 1;
        puVar29 = puVar29 + 1;
      }
      puVar28 = puVar29 + ((uVar3 >> 1) - iVar30);
    }
  }
  else {
    if (CONCAT44(iVar17,iVar30) != 4) {
      return 0;
    }
    uVar3 = *(uint *)(iGpffff8ed0 + 0x18);
    iVar17 = param_2[3];
    iVar30 = param_2[2];
    puVar26 = (uint *)(uVar3 * param_2[1] + iVar31 + *param_2 * 4);
    if (iVar17 != 0) {
      do {
        iVar17 = iVar17 + -1;
        puVar27 = puVar26;
        for (iVar31 = param_2[2]; iVar31 != 0; iVar31 = iVar31 + -1) {
          *puVar26 = param_3;
          puVar26 = puVar26 + 1;
          puVar27 = puVar27 + 1;
        }
        puVar26 = puVar27 + ((uVar3 >> 2) - iVar30);
      } while (iVar17 != 0);
      return 0;
    }
  }
  return 0;
}


// ==== FUN_002c1178 @ 002c1178 ====

undefined4 FUN_002c1178(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (DAT_0044ebf0 < iVar2 + param_2[2]) {
    if (((DAT_0044ebf4 < param_2[1] + param_2[3]) && (iVar2 < DAT_0044ebf0 + DAT_0044ebf8)) &&
       (param_2[1] < DAT_0044ebf4 + DAT_0044ebfc)) {
      iVar1 = DAT_0044ebf0 - iVar2;
      if (iVar2 < DAT_0044ebf0) {
        param_2[2] = param_2[2] - iVar1;
        *param_1 = *param_1 + iVar1;
        *param_2 = DAT_0044ebf0;
      }
      if (DAT_0044ebf0 + DAT_0044ebf8 < *param_2 + param_2[2]) {
        param_2[2] = (DAT_0044ebf0 + DAT_0044ebf8) - *param_2;
      }
      iVar2 = DAT_0044ebf4 - param_2[1];
      if (param_2[1] < DAT_0044ebf4) {
        param_2[3] = param_2[3] - iVar2;
        param_1[1] = param_1[1] + iVar2;
        param_2[1] = DAT_0044ebf4;
      }
      if (DAT_0044ebf4 + DAT_0044ebfc < param_2[1] + param_2[3]) {
        param_2[3] = (DAT_0044ebf4 + DAT_0044ebfc) - param_2[1];
      }
      iVar2 = param_2[2];
      if (0 < iVar2) {
        if (0 < param_2[3]) {
          param_1[3] = param_2[3];
          param_1[2] = iVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}


// ==== FUN_002c12b8 @ 002c12b8 ====

undefined4 FUN_002c12b8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  if (DAT_0044ebf0 < iVar1 + iVar2) {
    if (param_2[1] + param_2[3] <= DAT_0044ebf4) {
      return 0;
    }
    if (DAT_0044ebf0 + DAT_0044ebf8 <= iVar1) {
      return 0;
    }
    if (param_2[1] < DAT_0044ebf4 + DAT_0044ebfc) {
      iVar3 = DAT_0044ebf0 - iVar1;
      if (iVar1 < DAT_0044ebf0) {
        iVar1 = param_1[2];
        if (iVar2 == 0) {
          trap(7);
        }
        param_2[2] = iVar2 - iVar3;
        iVar2 = (iVar3 * iVar1) / iVar2;
        param_1[2] = param_1[2] - iVar2;
        *param_2 = DAT_0044ebf0;
        *param_1 = *param_1 + iVar2;
      }
      iVar2 = param_2[2];
      iVar1 = (*param_2 + iVar2) - (DAT_0044ebf0 + DAT_0044ebf8);
      if (DAT_0044ebf0 + DAT_0044ebf8 < *param_2 + iVar2) {
        iVar3 = param_1[2];
        if (iVar2 == 0) {
          trap(7);
        }
        param_2[2] = iVar2 - iVar1;
        param_1[2] = param_1[2] - (iVar1 * iVar3) / iVar2;
      }
      iVar2 = DAT_0044ebf4 - param_2[1];
      if (param_2[1] < DAT_0044ebf4) {
        iVar3 = param_1[3];
        iVar1 = param_2[3];
        if (iVar1 == 0) {
          trap(7);
        }
        param_2[3] = iVar1 - iVar2;
        iVar1 = (iVar2 * iVar3) / iVar1;
        param_1[3] = param_1[3] - iVar1;
        param_2[1] = DAT_0044ebf4;
        param_1[1] = param_1[1] + iVar1;
      }
      iVar2 = param_2[3];
      iVar1 = (param_2[1] + iVar2) - (DAT_0044ebf4 + DAT_0044ebfc);
      if (DAT_0044ebf4 + DAT_0044ebfc < param_2[1] + iVar2) {
        iVar3 = param_1[3];
        if (iVar2 == 0) {
          trap(7);
        }
        param_2[3] = iVar2 - iVar1;
        param_1[3] = param_1[3] - (iVar1 * iVar3) / iVar2;
      }
      if (param_2[2] < 1) {
        return 0;
      }
      if (param_2[3] < 1) {
        return 0;
      }
      if (param_1[2] < 1) {
        return 0;
      }
      if (0 < param_1[3]) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_002c14a0 @ 002c14a0 ====

void FUN_002c14a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = param_1 + iGpffff8e98;
  iVar1 = FUN_002bfed0(*(int *)(param_1 + 0xc) + -1);
  uVar10 = 1 << (iVar1 + 1U & 0x1f);
  iVar2 = FUN_002bfed0(*(int *)(param_1 + 0x10) + -1);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = 1 << (iVar2 + 1U & 0x1f);
  if (*(int *)(iVar9 + 0x38) != 0) {
    (*DAT_00449544)();
    *(undefined4 *)(iVar9 + 0x38) = 0;
  }
  if (*(int *)(iVar9 + 0x3c) != 0) {
    (*DAT_00449544)();
    *(undefined4 *)(iVar9 + 0x3c) = 0;
  }
  if (*(int *)(iVar9 + 0x40) == 0) {
    iVar4 = *(int *)(iVar9 + 0x44);
  }
  else {
    (*DAT_00449544)();
    *(undefined4 *)(iVar9 + 0x40) = 0;
    iVar4 = *(int *)(iVar9 + 0x44);
  }
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar9 + 0x48);
  }
  else {
    (*DAT_00449544)();
    *(undefined4 *)(iVar9 + 0x44) = 0;
    iVar4 = *(int *)(iVar9 + 0x48);
  }
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar9 + 0x4c);
  }
  else {
    (*DAT_00449544)();
    *(undefined4 *)(iVar9 + 0x48) = 0;
    iVar4 = *(int *)(iVar9 + 0x4c);
  }
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar9 + 0x50);
  }
  else {
    (*DAT_00449544)();
    *(undefined4 *)(iVar9 + 0x4c) = 0;
    iVar4 = *(int *)(iVar9 + 0x50);
  }
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar9 + 0x54);
  }
  else {
    (*DAT_00449544)();
    *(undefined4 *)(iVar9 + 0x50) = 0;
    iVar4 = *(int *)(iVar9 + 0x54);
  }
  if (iVar4 != 0) {
    (*DAT_00449544)();
    *(undefined4 *)(iVar9 + 0x54) = 0;
  }
  uVar3 = FUN_002bfed0(uVar10);
  uVar3 = (uVar3 & 0xf) << 0x1a;
  iVar4 = FUN_002bfed0(iVar2);
  if (uVar10 >> 6 == 0) {
    uVar3 = uVar3 | iVar4 << 0x1e | 0x4000U;
  }
  else {
    uVar3 = (uVar10 >> 6) << 0xe | uVar3 | iVar4 << 0x1e;
  }
  *(uint *)(iVar9 + 8) = uVar3;
  uVar3 = FUN_002bfed0(iVar2);
  *(undefined2 *)(iVar9 + 0x14) = 0;
  *(int *)(iVar9 + 0xc) = (int)(uVar3 & 0xf) >> 2;
  switch(*(byte *)(param_1 + 0x23) & 0x6f) {
  case 1:
    *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 0xa00000;
    *(uint *)(iVar9 + 0xc) = *(uint *)(iVar9 + 0xc) | 0x2c;
    break;
  case 5:
    *(uint *)(iVar9 + 0xc) = *(uint *)(iVar9 + 0xc) | 0x2c;
    break;
  case 6:
    *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 0x100000;
    break;
  case 0x21:
    uVar3 = *(uint *)(iVar9 + 8);
    uVar6 = *(uint *)(iVar9 + 0xc) | 0x50002c;
    uVar7 = 0x1300000;
    puVar5 = (undefined *)0x20000000;
    goto LAB_002c170c;
  case 0x25:
    uVar3 = *(uint *)(iVar9 + 8);
    uVar6 = *(uint *)(iVar9 + 0xc);
    uVar7 = 0x1300000;
    goto LAB_002c1708;
  case 0x41:
    uVar3 = *(uint *)(iVar9 + 8);
    uVar6 = *(uint *)(iVar9 + 0xc) | 0x50002c;
    uVar7 = 0x1400000;
    puVar5 = (undefined *)0x20000000;
    goto LAB_002c170c;
  case 0x45:
    uVar3 = *(uint *)(iVar9 + 8);
    uVar6 = *(uint *)(iVar9 + 0xc);
    uVar7 = 0x1400000;
LAB_002c1708:
    puVar5 = &UNK_2000002c;
LAB_002c170c:
    *(uint *)(iVar9 + 8) = uVar3 | uVar7;
    *(uint *)(iVar9 + 0xc) = uVar6 | (uint)puVar5;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  *(uint *)(iVar9 + 0x28) = iVar2 * uVar10 * (iVar1 + 7 >> 3);
  if (iVar4 < 0x11) {
    if (iVar4 == 0x10) {
      iVar2 = *(int *)(param_1 + 0x10) + 0x3f;
      iVar4 = *(int *)(param_1 + 0xc) + 0x3f;
      iVar1 = *(int *)(param_1 + 0x10) + 0x7e;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = *(int *)(param_1 + 0xc) + 0x7e;
      if (-1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar1 = FUN_00290488(iVar2 >> 6,iVar1 >> 6);
      *(undefined4 *)(iVar9 + 0x2c) = 0;
      *(int *)(iVar9 + 0x30) = iVar1 << 0xb;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar4 == 8) {
        iVar2 = *(int *)(param_1 + 0xc);
        iVar4 = iVar1 + 0x7e;
        if (-1 < iVar1 + 0x3f) {
          iVar4 = iVar1 + 0x3f;
        }
        iVar4 = iVar4 >> 6;
      }
      else {
        iVar2 = *(int *)(param_1 + 0xc);
        iVar4 = iVar1 + 0xfe;
        if (-1 < iVar1 + 0x7f) {
          iVar4 = iVar1 + 0x7f;
        }
        iVar4 = iVar4 >> 7;
      }
      iVar1 = iVar2 + 0xfe;
      if (-1 < iVar2 + 0x7f) {
        iVar1 = iVar2 + 0x7f;
      }
      iVar1 = FUN_00290488(iVar1 >> 7,iVar4);
      *(undefined4 *)(iVar9 + 0x2c) = 1;
      *(int *)(iVar9 + 0x30) = iVar1 * 0x800 + 0x1000;
      *(uint *)(iVar9 + 0x10) = iVar1 * 0x800 + 0x800U >> 6;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
    iVar8 = iVar1 + 0x3f;
    *(undefined4 *)(iVar9 + 0x2c) = 0;
    iVar4 = iVar2 + 0x1f;
    iVar1 = iVar1 + 0x7e;
    if (-1 < iVar8) {
      iVar1 = iVar8;
    }
    iVar2 = iVar2 + 0x3e;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    *(int *)(iVar9 + 0x30) = (iVar1 >> 6) * (iVar2 >> 5) * 0x800;
  }
  *(undefined4 *)(iVar9 + 0x20) = 0x4000;
  *(undefined4 *)(iVar9 + 0x18) = 0x4000;
  *(undefined1 *)(iVar9 + 0x16) = 0;
  *(undefined **)(iVar9 + 0x24) = &DAT_00400004;
  *(undefined **)(iVar9 + 0x1c) = &DAT_00400004;
  return;
}


// ==== FUN_002c18e8 @ 002c18e8 ====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_002c18e8(undefined8 param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  byte *pbVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  byte *pbVar21;
  int iVar22;
  uint *puVar23;
  uint *puVar24;
  byte *pbVar25;
  int *piVar26;
  int iStack_e0;
  int iStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  int iStack_ac;
  
  iVar22 = (int)param_1;
  piVar26 = (int *)(iVar22 + DAT_0040e688);
  if ((*(byte *)((int)piVar26 + 0x36) & 6) != 0) {
switchD_002c1c2c_caseD_17:
    return 0;
  }
  uStack_d8 = *(uint *)(iVar22 + 0xc);
  uStack_d4 = *(uint *)(iVar22 + 0x10);
  uStack_d0 = 0;
  iStack_cc = 0;
  iStack_e0 = *param_2 + (int)*(short *)(DAT_0040e6c0 + 0x1c);
  iStack_dc = param_2[1] + (int)*(short *)(DAT_0040e6c0 + 0x1e);
  uStack_c8 = uStack_d8;
  uStack_c4 = uStack_d4;
  lVar6 = FUN_002c1178(&uStack_d0,&iStack_e0);
  iVar17 = iStack_cc;
  iVar16 = iStack_dc;
  if (lVar6 == 0) {
    return 1;
  }
  if (*(byte *)(iVar22 + 0x20) - 1 < 2) {
    return 0;
  }
  bVar2 = *(byte *)(DAT_0040e6c0 + 0x20);
  if (bVar2 == 1) {
    return 0;
  }
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      return 0;
    }
  }
  else {
    if (bVar2 == 2) {
      iVar22 = iStack_cc + uStack_c4;
      FUN_002c0840(2);
      for (; uVar18 = iVar22 - iVar17, uVar18 != 0; iVar17 = iVar17 + iVar3) {
        uStack_c4 = 0x40;
        if (0x40 >= uVar18) {
          uStack_c4 = uVar18;
        }
        iVar3 = uStack_c4 - (0x40 < uVar18);
        iVar15 = iVar16 + iVar3;
        iStack_cc = iVar17;
        FUN_002cd640(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4));
        FUN_002ac628(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4),param_1,&uStack_d0);
        FUN_002c14a0(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4));
        FUN_002cd230(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4),0);
        FUN_002c0a98(iStack_e0,iVar16,iStack_e0 + uStack_d8,iVar15,8,8,uStack_c8 * 0x10 + -8,
                     uStack_c4 * 0x10 + -8);
        DAT_0040e6d0 = DAT_0040e6d0 ^ 1;
        iVar16 = iVar15;
      }
      FUN_002c0c10();
      FUN_0036d518();
      *piVar26 = *piVar26 + 1;
      FUN_0036d568();
      iVar22 = piVar26[1];
      piVar26[1] = iVar22 + 1;
      if (iVar22 + 1 == 1) {
        FUN_002b4de0(piVar26);
        return 1;
      }
      return 1;
    }
    if (bVar2 != 4) {
      return 0;
    }
  }
  if (*(int *)(DAT_0040e6c0 + 4) == 0) {
    return 0;
  }
  if (*(int *)(iVar22 + 4) == 0) {
    return 0;
  }
  iStack_e0 = iStack_e0 - *(short *)(DAT_0040e6c0 + 0x1c);
  iVar17 = *(int *)(iVar22 + 0x14) + 7 >> 3;
  iStack_dc = iStack_dc - *(short *)(DAT_0040e6c0 + 0x1e);
  iVar16 = *(int *)(DAT_0040e6c0 + 0x14) + 7 >> 3;
  if (*(int *)(iVar22 + 0x14) == 4) {
    iStack_c0 = (*(int *)(iVar22 + 0x18) - (int)uStack_d8 / 2) - (uStack_d0 & uStack_d8 & 1);
  }
  else {
    if (iVar17 == 0) {
      trap(7);
    }
    iStack_c0 = *(int *)(iVar22 + 0x18) / iVar17 - uStack_d8;
  }
  if (iVar16 == 0) {
    trap(7);
  }
  iStack_bc = *(int *)(DAT_0040e6c0 + 0x18) / iVar16 - uStack_d8;
  switch(iVar16 * 10 + iVar17) {
  case 0x15:
    bVar2 = *(byte *)(iVar22 + 0x22) >> 1;
    uStack_b4 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      FUN_002ac750(param_1,0,2);
    }
    puVar9 = (ushort *)
             (*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_dc +
             iVar16 * iStack_e0);
    uVar18 = uStack_b4;
    if (*(int *)(iVar22 + 0x14) == 8) {
      pbVar21 = (byte *)(*(int *)(iVar22 + 4) + *(int *)(iVar22 + 0x18) * iStack_cc +
                        iVar17 * uStack_d0);
      if ((*(byte *)(iVar22 + 0x23) & 0xf) == 1) {
        iVar22 = *(int *)(iVar22 + 8);
        uVar5 = uStack_d4 - 1;
        bVar1 = uStack_d4 != 0;
        uStack_d4 = uVar5;
        if (bVar1) {
          iStack_ac = iStack_bc * 2;
          puVar11 = puVar9;
          pbVar13 = pbVar21;
          uVar5 = uStack_d8;
          do {
            while (uVar5 != 0) {
              uVar4 = (uint)*pbVar21;
              uVar7 = *(ushort *)
                       ((uVar4 & 0xe7 | (uVar4 & 0x10) >> 1 | (uVar4 & 8) << 1) * 2 + iVar22);
              if ((uVar7 & 0x8000) != 0) {
                *puVar9 = uVar7;
              }
              puVar9 = puVar9 + 1;
              pbVar21 = pbVar21 + 1;
              puVar11 = puVar11 + 1;
              pbVar13 = pbVar13 + 1;
              uVar5 = uVar5 - 1;
            }
            pbVar21 = pbVar13 + iStack_c0;
            puVar9 = puVar11 + iStack_bc;
            bVar1 = uStack_d4 != 0;
            puVar11 = puVar9;
            pbVar13 = pbVar21;
            uVar5 = uStack_d8;
            uStack_d4 = uStack_d4 - 1;
          } while (bVar1);
          uStack_d4 = 0xffffffff;
        }
      }
      else {
        iVar22 = *(int *)(iVar22 + 8);
        uVar5 = uStack_d4 - 1;
        bVar1 = uStack_d4 != 0;
        uStack_d4 = uVar5;
        if (bVar1) {
          iStack_ac = iStack_bc * 2;
          puVar11 = puVar9;
          pbVar13 = pbVar21;
          uVar5 = uStack_d8;
          do {
            while (uVar5 != 0) {
              uVar4 = (uint)*pbVar21;
              uVar4 = *(uint *)((uVar4 & 0xe7 | (uVar4 & 0x10) >> 1 | (uVar4 & 8) << 1) * 4 + iVar22
                               );
              if ((uVar4 & 0xff000000) < 0x7f000001) {
                uVar7 = *puVar9;
                uVar8 = uVar4 >> 0x18;
                iVar16 = 0x80 - uVar8;
                bVar2 = (byte)(uVar4 >> 0x18);
                uVar7 = ((ushort)bVar2 * (ushort)bVar2 +
                         (uVar7 >> 8 & 0x80) * (short)iVar16 + 0x2000 & 0x4000) * 2 +
                        (((ushort)(uVar4 >> 0x10) & 0xff) * (ushort)bVar2 +
                         (short)((uVar7 & 0x7c00) >> 7) * (short)iVar16 & 0x7c00) +
                        (short)((((uVar4 & 0xff00) >> 8) * uVar8 + ((uVar7 & 0x3e0) >> 2) * iVar16 &
                                0x7c00) >> 5) +
                        (short)(((uVar4 & 0xff) * uVar8 + (uVar7 & 0x1f) * 8 * iVar16 & 0x7c00) >>
                               10);
              }
              else {
                uVar7 = (ushort)((uVar4 & 0xf80000) >> 9) | (ushort)((uVar4 & 0xf800) >> 6) | 0x8000
                        | (ushort)((uVar4 & 0xf8) >> 3);
              }
              *puVar9 = uVar7;
              puVar9 = puVar9 + 1;
              pbVar21 = pbVar21 + 1;
              puVar11 = puVar11 + 1;
              pbVar13 = pbVar13 + 1;
              uVar5 = uVar5 - 1;
            }
            pbVar21 = pbVar13 + iStack_c0;
            puVar9 = puVar11 + iStack_bc;
            bVar1 = uStack_d4 != 0;
            puVar11 = puVar9;
            pbVar13 = pbVar21;
            uVar5 = uStack_d8;
            uStack_d4 = uStack_d4 - 1;
          } while (bVar1);
          uStack_d4 = 0xffffffff;
        }
      }
    }
    else {
      pbVar21 = (byte *)(*(int *)(iVar22 + 4) + *(int *)(iVar22 + 0x18) * iStack_cc +
                        ((int)uStack_d0 >> 1));
      if ((*(byte *)(iVar22 + 0x23) & 0xf) == 1) {
        iVar22 = *(int *)(iVar22 + 8);
        uVar5 = uStack_d4 - 1;
        bVar1 = uStack_d4 != 0;
        pbVar13 = pbVar21;
        uStack_d4 = uVar5;
        if (bVar1) {
          do {
            uVar5 = uStack_d8;
            if ((uStack_d0 & 1) != 0) {
              uVar7 = *(ushort *)((uint)(*pbVar13 >> 4) * 2 + iVar22);
              if ((uVar7 & 0x8000) != 0) {
                *puVar9 = uVar7;
              }
              puVar9 = puVar9 + 1;
              pbVar13 = pbVar13 + 1;
              pbVar21 = pbVar21 + 1;
              uVar5 = uStack_d8 - 1;
            }
            iStack_ac = iStack_bc * 2;
            if (1 < (int)uVar5) {
              uVar4 = 1 - uVar5 & 3;
              puVar11 = puVar9;
              pbVar25 = pbVar21;
              if ((uVar4 != 0) && (1 < uVar4)) {
                uVar7 = *(ushort *)((*pbVar21 & 0xf) * 2 + iVar22);
                if ((uVar7 & 0x8000) != 0) {
                  *puVar9 = uVar7;
                }
                uVar7 = *(ushort *)((uint)(*pbVar21 >> 4) * 2 + iVar22);
                if ((uVar7 & 0x8000) != 0) {
                  puVar9[1] = uVar7;
                }
                puVar9 = puVar9 + 2;
                pbVar21 = pbVar21 + 1;
                uVar5 = uVar5 - 2;
                pbVar13 = pbVar13 + 1;
                puVar11 = puVar9;
                pbVar25 = pbVar21;
                if ((int)uVar5 < 2) goto LAB_002c2f40;
              }
              do {
                uVar7 = *(ushort *)((*pbVar25 & 0xf) * 2 + iVar22);
                if ((uVar7 & 0x8000) != 0) {
                  *puVar11 = uVar7;
                }
                uVar7 = *(ushort *)((uint)(*pbVar25 >> 4) * 2 + iVar22);
                if ((uVar7 & 0x8000) != 0) {
                  puVar11[1] = uVar7;
                }
                uVar7 = *(ushort *)((pbVar25[1] & 0xf) * 2 + iVar22);
                if ((uVar7 & 0x8000) != 0) {
                  puVar11[2] = uVar7;
                }
                uVar7 = *(ushort *)((uint)(pbVar25[1] >> 4) * 2 + iVar22);
                if ((uVar7 & 0x8000) != 0) {
                  puVar11[3] = uVar7;
                }
                uVar5 = uVar5 - 4;
                puVar9 = puVar9 + 4;
                pbVar13 = pbVar13 + 2;
                pbVar21 = pbVar21 + 2;
                puVar11 = puVar11 + 4;
                pbVar25 = pbVar25 + 2;
              } while (1 < (int)uVar5);
            }
LAB_002c2f40:
            if (0 < (int)uVar5) {
              uVar7 = *(ushort *)((*pbVar13 & 0xf) * 2 + iVar22);
              if ((uVar7 & 0x8000) != 0) {
                *puVar9 = uVar7;
              }
              puVar9 = puVar9 + 1;
            }
            puVar9 = puVar9 + iStack_bc;
            pbVar21 = pbVar21 + iStack_c0;
            bVar1 = uStack_d4 != 0;
            pbVar13 = pbVar13 + iStack_c0;
            uStack_d4 = uStack_d4 - 1;
          } while (bVar1);
          uStack_d4 = 0xffffffff;
        }
      }
      else {
        iVar22 = *(int *)(iVar22 + 8);
        pbVar13 = pbVar21;
        while (bVar1 = uStack_d4 != 0, uStack_d4 = uStack_d4 - 1, bVar1) {
          uVar5 = uStack_d8;
          if ((uStack_d0 & 1) != 0) {
            uVar5 = *(uint *)((uint)(*pbVar21 >> 4) * 4 + iVar22);
            if ((uVar5 & 0xff000000) < 0x7f000001) {
              uVar7 = *puVar9;
              uVar4 = uVar5 >> 0x18;
              iVar16 = 0x80 - uVar4;
              bVar2 = (byte)(uVar5 >> 0x18);
              *puVar9 = ((ushort)bVar2 * (ushort)bVar2 +
                         (uVar7 >> 8 & 0x80) * (short)iVar16 + 0x2000 & 0x4000) * 2 +
                        (((ushort)(uVar5 >> 0x10) & 0xff) * (ushort)bVar2 +
                         (short)((uVar7 & 0x7c00) >> 7) * (short)iVar16 & 0x7c00) +
                        (short)((((uVar5 & 0xff00) >> 8) * uVar4 + ((uVar7 & 0x3e0) >> 2) * iVar16 &
                                0x7c00) >> 5) +
                        (short)(((uVar5 & 0xff) * uVar4 + (uVar7 & 0x1f) * 8 * iVar16 & 0x7c00) >>
                               10);
            }
            else {
              *puVar9 = (ushort)((uVar5 & 0xf80000) >> 9) | (ushort)((uVar5 & 0xf800) >> 6) | 0x8000
                        | (ushort)((uVar5 & 0xf8) >> 3);
            }
            puVar9 = puVar9 + 1;
            pbVar21 = pbVar21 + 1;
            pbVar13 = pbVar13 + 1;
            uVar5 = uStack_d8 - 1;
          }
          iStack_ac = iStack_bc * 2;
          puVar11 = puVar9;
          pbVar25 = pbVar13;
          for (; 1 < (int)uVar5; uVar5 = uVar5 - 2) {
            uVar4 = *(uint *)((*pbVar13 & 0xf) * 4 + iVar22);
            if ((uVar4 & 0xff000000) < 0x7f000001) {
              uVar7 = *puVar9;
              uVar8 = uVar4 >> 0x18;
              iVar16 = 0x80 - uVar8;
              bVar2 = (byte)(uVar4 >> 0x18);
              uVar7 = ((ushort)bVar2 * (ushort)bVar2 + (uVar7 >> 8 & 0x80) * (short)iVar16 + 0x2000
                      & 0x4000) * 2 +
                      (((ushort)(uVar4 >> 0x10) & 0xff) * (ushort)bVar2 +
                       (short)((uVar7 & 0x7c00) >> 7) * (short)iVar16 & 0x7c00) +
                      (short)((((uVar4 & 0xff00) >> 8) * uVar8 + ((uVar7 & 0x3e0) >> 2) * iVar16 &
                              0x7c00) >> 5) +
                      (short)(((uVar4 & 0xff) * uVar8 + (uVar7 & 0x1f) * 8 * iVar16 & 0x7c00) >> 10)
              ;
            }
            else {
              uVar7 = (ushort)((uVar4 & 0xf80000) >> 9) | (ushort)((uVar4 & 0xf800) >> 6) | 0x8000 |
                      (ushort)((uVar4 & 0xf8) >> 3);
            }
            *puVar9 = uVar7;
            uVar4 = *(uint *)((uint)(*pbVar13 >> 4) * 4 + iVar22);
            if ((uVar4 & 0xff000000) < 0x7f000001) {
              uVar7 = puVar9[1];
              uVar8 = uVar4 >> 0x18;
              iVar16 = 0x80 - uVar8;
              bVar2 = (byte)(uVar4 >> 0x18);
              uVar7 = ((ushort)bVar2 * (ushort)bVar2 + (uVar7 >> 8 & 0x80) * (short)iVar16 + 0x2000
                      & 0x4000) * 2 +
                      (((ushort)(uVar4 >> 0x10) & 0xff) * (ushort)bVar2 +
                       (short)((uVar7 & 0x7c00) >> 7) * (short)iVar16 & 0x7c00) +
                      (short)((((uVar4 & 0xff00) >> 8) * uVar8 + ((uVar7 & 0x3e0) >> 2) * iVar16 &
                              0x7c00) >> 5) +
                      (short)(((uVar4 & 0xff) * uVar8 + (uVar7 & 0x1f) * 8 * iVar16 & 0x7c00) >> 10)
              ;
            }
            else {
              uVar7 = (ushort)((uVar4 & 0xf80000) >> 9) | (ushort)((uVar4 & 0xf800) >> 6) | 0x8000 |
                      (ushort)((uVar4 & 0xf8) >> 3);
            }
            puVar9[1] = uVar7;
            puVar9 = puVar9 + 2;
            puVar11 = puVar11 + 2;
            pbVar13 = pbVar13 + 1;
            pbVar21 = pbVar21 + 1;
            pbVar25 = pbVar25 + 1;
          }
          if (0 < (int)uVar5) {
            uVar5 = *(uint *)((*pbVar21 & 0xf) * 4 + iVar22);
            if ((uVar5 & 0xff000000) < 0x7f000001) {
              uVar7 = *puVar11;
              uVar4 = uVar5 >> 0x18;
              iVar16 = 0x80 - uVar4;
              bVar2 = (byte)(uVar5 >> 0x18);
              *puVar11 = ((ushort)bVar2 * (ushort)bVar2 +
                          (uVar7 >> 8 & 0x80) * (short)iVar16 + 0x2000 & 0x4000) * 2 +
                         (((ushort)(uVar5 >> 0x10) & 0xff) * (ushort)bVar2 +
                          (short)((uVar7 & 0x7c00) >> 7) * (short)iVar16 & 0x7c00) +
                         (short)((((uVar5 & 0xff00) >> 8) * uVar4 + ((uVar7 & 0x3e0) >> 2) * iVar16
                                 & 0x7c00) >> 5) +
                         (short)(((uVar5 & 0xff) * uVar4 + (uVar7 & 0x1f) * 8 * iVar16 & 0x7c00) >>
                                10);
            }
            else {
              *puVar11 = (ushort)((uVar5 & 0xf80000) >> 9) |
                         (ushort)((uVar5 & 0xf800) >> 6) | 0x8000 | (ushort)((uVar5 & 0xf8) >> 3);
            }
            puVar11 = puVar11 + 1;
          }
          puVar9 = puVar11 + iStack_bc;
          pbVar21 = pbVar21 + iStack_c0;
          pbVar13 = pbVar25 + iStack_c0;
        }
      }
    }
    goto joined_r0x002c27bc;
  case 0x16:
    puVar9 = (ushort *)
             (*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_dc +
             iVar16 * iStack_e0);
    puVar11 = (ushort *)
              (*(int *)(iVar22 + 4) + *(int *)(iVar22 + 0x18) * iStack_cc + iVar17 * uStack_d0);
    if (uStack_d4 != 0) {
      do {
        uStack_d4 = uStack_d4 - 1;
        puVar14 = puVar9;
        puVar12 = puVar11;
        uVar18 = uStack_d8;
        while (uVar18 != 0) {
          uVar18 = uVar18 - 1;
          if ((*puVar11 & 0x8000) != 0) {
            *puVar9 = *puVar11;
          }
          puVar9 = puVar9 + 1;
          puVar14 = puVar14 + 1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar11 = puVar12 + iStack_c0;
        puVar9 = puVar14 + iStack_bc;
      } while (uStack_d4 != 0);
      return 1;
    }
    break;
  default:
    goto switchD_002c1c2c_caseD_17;
  case 0x18:
    puVar9 = (ushort *)
             (*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_dc +
             iVar16 * iStack_e0);
    puVar23 = (uint *)(*(int *)(iVar22 + 4) + *(int *)(iVar22 + 0x18) * iStack_cc +
                      iVar17 * uStack_d0);
    if (uStack_d4 != 0) {
      do {
        uStack_d4 = uStack_d4 - 1;
        puVar11 = puVar9;
        puVar19 = puVar23;
        uVar18 = uStack_d8;
        while (uVar18 != 0) {
          uVar18 = uVar18 - 1;
          uVar5 = *puVar23;
          if ((uVar5 & 0xff000000) < 0x7f000001) {
            uVar7 = *puVar9;
            uVar4 = uVar5 >> 0x18;
            iVar22 = 0x80 - uVar4;
            bVar2 = (byte)(uVar5 >> 0x18);
            uVar7 = ((ushort)bVar2 * (ushort)bVar2 + (uVar7 >> 8 & 0x80) * (short)iVar22 + 0x2000 &
                    0x4000) * 2 +
                    (((ushort)(uVar5 >> 0x10) & 0xff) * (ushort)bVar2 +
                     (short)((uVar7 & 0x7c00) >> 7) * (short)iVar22 & 0x7c00) +
                    (short)((((uVar5 & 0xff00) >> 8) * uVar4 + ((uVar7 & 0x3e0) >> 2) * iVar22 &
                            0x7c00) >> 5) +
                    (short)(((uVar5 & 0xff) * uVar4 + (uVar7 & 0x1f) * 8 * iVar22 & 0x7c00) >> 10);
          }
          else {
            uVar7 = (ushort)((uVar5 & 0xf80000) >> 9) | (ushort)((uVar5 & 0xf800) >> 6) | 0x8000 |
                    (ushort)((uVar5 & 0xf8) >> 3);
          }
          *puVar9 = uVar7;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
          puVar23 = puVar23 + 1;
          puVar19 = puVar19 + 1;
        }
        puVar23 = puVar19 + iStack_c0;
        puVar9 = puVar11 + iStack_bc;
      } while (uStack_d4 != 0);
      return 1;
    }
    break;
  case 0x29:
    bVar2 = *(byte *)(iVar22 + 0x22) >> 1;
    uStack_b8 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      FUN_002ac750(param_1,0,2);
    }
    puVar23 = (uint *)(*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_dc +
                      iVar16 * iStack_e0);
    uVar18 = uStack_b8;
    if (*(int *)(iVar22 + 0x14) == 8) {
      pbVar21 = (byte *)(*(int *)(iVar22 + 4) + *(int *)(iVar22 + 0x18) * iStack_cc +
                        iVar17 * uStack_d0);
      if ((*(byte *)(iVar22 + 0x23) & 0xf) == 1) {
        iVar22 = *(int *)(iVar22 + 8);
        uVar4 = uStack_d4 - 1;
        bVar1 = uStack_d4 != 0;
        puVar19 = puVar23;
        pbVar13 = pbVar21;
        uVar5 = uStack_d8;
        uStack_d4 = uVar4;
        if (bVar1) {
          do {
            while (uVar5 != 0) {
              uVar4 = (uint)*pbVar21;
              uVar7 = *(ushort *)
                       ((uVar4 & 0xe7 | (uVar4 & 0x10) >> 1 | (uVar4 & 8) << 1) * 2 + iVar22);
              if ((uVar7 & 0x8000) != 0) {
                *puVar23 = (uVar7 & 0x7c00) << 9 | (uVar7 & 0x3e0) << 6 | 0x80000000 |
                           (uVar7 & 0x1f) << 3;
              }
              puVar23 = puVar23 + 1;
              pbVar21 = pbVar21 + 1;
              puVar19 = puVar19 + 1;
              pbVar13 = pbVar13 + 1;
              uVar5 = uVar5 - 1;
            }
            puVar23 = puVar19 + iStack_bc;
            pbVar21 = pbVar13 + iStack_c0;
            bVar1 = uStack_d4 != 0;
            puVar19 = puVar23;
            pbVar13 = pbVar21;
            uVar5 = uStack_d8;
            uStack_d4 = uStack_d4 - 1;
          } while (bVar1);
          uStack_d4 = 0xffffffff;
        }
      }
      else {
        iVar22 = *(int *)(iVar22 + 8);
        uVar4 = uStack_d4 - 1;
        bVar1 = uStack_d4 != 0;
        puVar19 = puVar23;
        pbVar13 = pbVar21;
        uVar5 = uStack_d8;
        uStack_d4 = uVar4;
        if (bVar1) {
          do {
            while (uVar5 != 0) {
              uVar4 = (uint)*pbVar21;
              uVar4 = *(uint *)((uVar4 & 0xe7 | (uVar4 & 0x10) >> 1 | (uVar4 & 8) << 1) * 4 + iVar22
                               );
              if (uVar4 < 0x7f000001) {
                uVar8 = *puVar23;
                uVar10 = uVar4 >> 0x18;
                iVar16 = 0x80 - uVar10;
                *puVar23 = (uVar10 * uVar10 + (uVar8 >> 0x18) * iVar16 & 0x7f80) * 0x20000 +
                           (((uVar4 & 0xff0000) >> 0x10) * uVar10 +
                            ((uVar8 & 0xff0000) >> 0x10) * iVar16 & 0x7f80) * 0x200 +
                           (((uVar4 & 0xff00) >> 8) * uVar10 + ((uVar8 & 0xff00) >> 8) * iVar16 &
                           0x7f80) * 2 +
                           (((uVar4 & 0xff) * uVar10 + (uVar8 & 0xff) * iVar16 & 0x7f80) >> 7);
              }
              else {
                *puVar23 = uVar4;
              }
              puVar23 = puVar23 + 1;
              pbVar21 = pbVar21 + 1;
              puVar19 = puVar19 + 1;
              pbVar13 = pbVar13 + 1;
              uVar5 = uVar5 - 1;
            }
            puVar23 = puVar19 + iStack_bc;
            pbVar21 = pbVar13 + iStack_c0;
            bVar1 = uStack_d4 != 0;
            puVar19 = puVar23;
            pbVar13 = pbVar21;
            uVar5 = uStack_d8;
            uStack_d4 = uStack_d4 - 1;
          } while (bVar1);
          uStack_d4 = 0xffffffff;
        }
      }
    }
    else {
      pbVar21 = (byte *)(*(int *)(iVar22 + 4) + *(int *)(iVar22 + 0x18) * iStack_cc +
                        ((int)uStack_d0 >> 1));
      if ((*(byte *)(iVar22 + 0x23) & 0xf) == 1) {
        iVar22 = *(int *)(iVar22 + 8);
        uVar5 = uStack_d4 - 1;
        bVar1 = uStack_d4 != 0;
        pbVar13 = pbVar21;
        uStack_d4 = uVar5;
        if (bVar1) {
          do {
            puVar19 = puVar23;
            uVar5 = uStack_d8;
            pbVar25 = pbVar21;
            if ((uStack_d0 & 1) != 0) {
              uVar7 = *(ushort *)((uint)(*pbVar13 >> 4) * 2 + iVar22);
              if ((uVar7 & 0x8000) != 0) {
                *puVar23 = (uVar7 & 0x7c00) << 9 | (uVar7 & 0x3e0) << 6 | 0x80000000 |
                           (uVar7 & 0x1f) << 3;
              }
              puVar23 = puVar23 + 1;
              pbVar13 = pbVar13 + 1;
              pbVar21 = pbVar21 + 1;
              uVar5 = uStack_d8 - 1;
              puVar19 = puVar23;
              pbVar25 = pbVar21;
            }
            for (; 1 < (int)uVar5; uVar5 = uVar5 - 2) {
              uVar7 = *(ushort *)((*pbVar21 & 0xf) * 2 + iVar22);
              if ((uVar7 & 0x8000) != 0) {
                *puVar23 = (uVar7 & 0x7c00) << 9 | (uVar7 & 0x3e0) << 6 | 0x80000000 |
                           (uVar7 & 0x1f) << 3;
              }
              uVar7 = *(ushort *)((uint)(*pbVar21 >> 4) * 2 + iVar22);
              if ((uVar7 & 0x8000) != 0) {
                puVar23[1] = (uVar7 & 0x7c00) << 9 | (uVar7 & 0x3e0) << 6 | 0x80000000 |
                             (uVar7 & 0x1f) << 3;
              }
              puVar23 = puVar23 + 2;
              pbVar21 = pbVar21 + 1;
              pbVar13 = pbVar13 + 1;
              puVar19 = puVar19 + 2;
              pbVar25 = pbVar25 + 1;
            }
            if (0 < (int)uVar5) {
              uVar7 = *(ushort *)((*pbVar13 & 0xf) * 2 + iVar22);
              if ((uVar7 & 0x8000) != 0) {
                *puVar19 = (uVar7 & 0x7c00) << 9 | (uVar7 & 0x3e0) << 6 | 0x80000000 |
                           (uVar7 & 0x1f) << 3;
              }
              puVar19 = puVar19 + 1;
            }
            puVar23 = puVar19 + iStack_bc;
            pbVar21 = pbVar25 + iStack_c0;
            bVar1 = uStack_d4 != 0;
            pbVar13 = pbVar13 + iStack_c0;
            uStack_d4 = uStack_d4 - 1;
          } while (bVar1);
          uStack_d4 = 0xffffffff;
        }
      }
      else {
        iVar22 = *(int *)(iVar22 + 8);
        pbVar13 = pbVar21;
        while (bVar1 = uStack_d4 != 0, uStack_d4 = uStack_d4 - 1, bVar1) {
          puVar19 = puVar23;
          uVar5 = uStack_d8;
          pbVar25 = pbVar13;
          if ((uStack_d0 & 1) != 0) {
            uVar5 = *(uint *)((uint)(*pbVar21 >> 4) * 4 + iVar22);
            if (uVar5 < 0x7f000001) {
              uVar4 = *puVar23;
              uVar8 = uVar5 >> 0x18;
              iVar16 = 0x80 - uVar8;
              *puVar23 = (uVar8 * uVar8 + (uVar4 >> 0x18) * iVar16 & 0x7f80) * 0x20000 +
                         (((uVar5 & 0xff0000) >> 0x10) * uVar8 +
                          ((uVar4 & 0xff0000) >> 0x10) * iVar16 & 0x7f80) * 0x200 +
                         (((uVar5 & 0xff00) >> 8) * uVar8 + ((uVar4 & 0xff00) >> 8) * iVar16 &
                         0x7f80) * 2 +
                         (((uVar5 & 0xff) * uVar8 + (uVar4 & 0xff) * iVar16 & 0x7f80) >> 7);
            }
            else {
              *puVar23 = uVar5;
            }
            puVar23 = puVar23 + 1;
            pbVar21 = pbVar21 + 1;
            pbVar13 = pbVar13 + 1;
            uVar5 = uStack_d8 - 1;
            puVar19 = puVar23;
            pbVar25 = pbVar13;
          }
          for (; 1 < (int)uVar5; uVar5 = uVar5 - 2) {
            uVar4 = *(uint *)((*pbVar13 & 0xf) * 4 + iVar22);
            if (uVar4 < 0x7f000001) {
              uVar8 = *puVar23;
              uVar10 = uVar4 >> 0x18;
              iVar16 = 0x80 - uVar10;
              *puVar23 = (uVar10 * uVar10 + (uVar8 >> 0x18) * iVar16 & 0x7f80) * 0x20000 +
                         (((uVar4 & 0xff0000) >> 0x10) * uVar10 +
                          ((uVar8 & 0xff0000) >> 0x10) * iVar16 & 0x7f80) * 0x200 +
                         (((uVar4 & 0xff00) >> 8) * uVar10 + ((uVar8 & 0xff00) >> 8) * iVar16 &
                         0x7f80) * 2 +
                         (((uVar4 & 0xff) * uVar10 + (uVar8 & 0xff) * iVar16 & 0x7f80) >> 7);
            }
            else {
              *puVar23 = uVar4;
            }
            puVar24 = puVar23 + 1;
            uVar4 = *(uint *)((uint)(*pbVar13 >> 4) * 4 + iVar22);
            if (uVar4 < 0x7f000001) {
              uVar8 = *puVar24;
              uVar10 = uVar4 >> 0x18;
              iVar16 = 0x80 - uVar10;
              *puVar24 = (uVar10 * uVar10 + (uVar8 >> 0x18) * iVar16 & 0x7f80) * 0x20000 +
                         (((uVar4 & 0xff0000) >> 0x10) * uVar10 +
                          ((uVar8 & 0xff0000) >> 0x10) * iVar16 & 0x7f80) * 0x200 +
                         (((uVar4 & 0xff00) >> 8) * uVar10 + ((uVar8 & 0xff00) >> 8) * iVar16 &
                         0x7f80) * 2 +
                         (((uVar4 & 0xff) * uVar10 + (uVar8 & 0xff) * iVar16 & 0x7f80) >> 7);
            }
            else {
              *puVar24 = uVar4;
            }
            puVar23 = puVar23 + 2;
            pbVar13 = pbVar13 + 1;
            pbVar21 = pbVar21 + 1;
            puVar19 = puVar19 + 2;
            pbVar25 = pbVar25 + 1;
          }
          if (0 < (int)uVar5) {
            uVar5 = *(uint *)((*pbVar21 & 0xf) * 4 + iVar22);
            if (uVar5 < 0x7f000001) {
              uVar4 = *puVar19;
              uVar8 = uVar5 >> 0x18;
              iVar16 = 0x80 - uVar8;
              *puVar19 = (uVar8 * uVar8 + (uVar4 >> 0x18) * iVar16 & 0x7f80) * 0x20000 +
                         (((uVar5 & 0xff0000) >> 0x10) * uVar8 +
                          ((uVar4 & 0xff0000) >> 0x10) * iVar16 & 0x7f80) * 0x200 +
                         (((uVar5 & 0xff00) >> 8) * uVar8 + ((uVar4 & 0xff00) >> 8) * iVar16 &
                         0x7f80) * 2 +
                         (((uVar5 & 0xff) * uVar8 + (uVar4 & 0xff) * iVar16 & 0x7f80) >> 7);
            }
            else {
              *puVar19 = uVar5;
            }
            puVar19 = puVar19 + 1;
          }
          puVar23 = puVar19 + iStack_bc;
          pbVar21 = pbVar21 + iStack_c0;
          pbVar13 = pbVar25 + iStack_c0;
        }
      }
    }
joined_r0x002c27bc:
    if (uVar18 != 0) {
      return 1;
    }
    FUN_002ac790(param_1);
    break;
  case 0x2a:
    puVar23 = (uint *)(*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_dc +
                      iVar16 * iStack_e0);
    puVar9 = (ushort *)
             (*(int *)(iVar22 + 4) + *(int *)(iVar22 + 0x18) * iStack_cc + iVar17 * uStack_d0);
    if (uStack_d4 != 0) {
      do {
        uStack_d4 = uStack_d4 - 1;
        puVar19 = puVar23;
        puVar11 = puVar9;
        uVar18 = uStack_d8;
        while (uVar18 != 0) {
          uVar18 = uVar18 - 1;
          uVar7 = *puVar9;
          if ((uVar7 & 0x8000) != 0) {
            *puVar23 = (uVar7 & 0x7c00) << 9 | (uVar7 & 0x3e0) << 6 | 0x80000000 |
                       (uVar7 & 0x1f) << 3;
          }
          puVar23 = puVar23 + 1;
          puVar19 = puVar19 + 1;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar9 = puVar11 + iStack_c0;
        puVar23 = puVar19 + iStack_bc;
      } while (uStack_d4 != 0);
      return 1;
    }
    break;
  case 0x2c:
    puVar23 = (uint *)(*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_dc +
                      iVar16 * iStack_e0);
    puVar19 = (uint *)(*(int *)(iVar22 + 4) + *(int *)(iVar22 + 0x18) * iStack_cc +
                      iVar17 * uStack_d0);
    if (uStack_d4 != 0) {
      do {
        uStack_d4 = uStack_d4 - 1;
        puVar24 = puVar23;
        puVar20 = puVar19;
        uVar18 = uStack_d8;
        while (uVar18 != 0) {
          uVar18 = uVar18 - 1;
          uVar5 = *puVar19;
          if (uVar5 < 0x7f000001) {
            uVar4 = *puVar23;
            uVar8 = uVar5 >> 0x18;
            iVar22 = 0x80 - uVar8;
            *puVar23 = (uVar8 * uVar8 + (uVar4 >> 0x18) * iVar22 & 0x7f80) * 0x20000 +
                       (((uVar5 & 0xff0000) >> 0x10) * uVar8 + ((uVar4 & 0xff0000) >> 0x10) * iVar22
                       & 0x7f80) * 0x200 +
                       (((uVar5 & 0xff00) >> 8) * uVar8 + ((uVar4 & 0xff00) >> 8) * iVar22 & 0x7f80)
                       * 2 + (((uVar5 & 0xff) * uVar8 + (uVar4 & 0xff) * iVar22 & 0x7f80) >> 7);
          }
          else {
            *puVar23 = uVar5;
          }
          puVar23 = puVar23 + 1;
          puVar24 = puVar24 + 1;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
        }
        puVar23 = puVar24 + iStack_bc;
        puVar19 = puVar20 + iStack_c0;
      } while (uStack_d4 != 0);
      return 1;
    }
  }
  return 1;
}


// ==== FUN_002c34a0 @ 002c34a0 ====

undefined4 FUN_002c34a0(int param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  int *piVar19;
  uint *puVar20;
  int iVar21;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  uint uStack_e0;
  int iStack_dc;
  int iStack_d8;
  uint uStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  uint uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  int iStack_b0;
  
  piVar19 = (int *)(param_1 + DAT_0040e688);
  if ((*(byte *)((int)piVar19 + 0x36) & 6) != 0) {
switchD_002c3810_caseD_17:
    return 0;
  }
  iStack_d8 = *(int *)(param_1 + 0xc);
  uStack_d4 = *(uint *)(param_1 + 0x10);
  uStack_e0 = 0;
  iStack_dc = 0;
  iStack_e4 = param_2[3];
  iStack_f0 = *param_2 + (int)*(short *)(DAT_0040e6c0 + 0x1c);
  iStack_e8 = param_2[2];
  iStack_ec = param_2[1] + (int)*(short *)(DAT_0040e6c0 + 0x1e);
  iStack_d0 = param_1;
  lVar4 = FUN_002c12b8(&uStack_e0,&iStack_f0);
  uVar3 = uStack_d4;
  iVar13 = iStack_dc;
  iVar14 = iStack_e4;
  iVar6 = iStack_e8;
  iVar17 = DAT_0040e6c0;
  if (lVar4 == 0) {
    return 1;
  }
  if (*(byte *)(iStack_d0 + 0x20) - 1 < 2) {
    return 0;
  }
  bVar2 = *(byte *)(DAT_0040e6c0 + 0x20);
  if (bVar2 == 1) {
    return 0;
  }
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      return 0;
    }
  }
  else {
    if (bVar2 == 2) {
      iVar17 = iStack_dc + uStack_d4;
      uVar15 = iStack_ec << 0x10;
      FUN_002c0840(2);
      for (; uVar12 = iVar17 - iVar13, uVar12 != 0; iVar13 = iVar13 + iVar6) {
        uStack_d4 = 0x40;
        if (0x40 >= uVar12) {
          uStack_d4 = uVar12;
        }
        iVar6 = uStack_d4 - (0x40 < uVar12);
        if (uVar3 == 0) {
          trap(7);
        }
        iStack_dc = iVar13;
        FUN_002cd640(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4));
        uVar12 = uVar15 + (iVar6 * 0x10000 * iVar14) / (int)uVar3;
        FUN_002ac628(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4),iStack_d0,&uStack_e0);
        FUN_002c14a0(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4));
        FUN_002cd230(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4),0);
        FUN_002c0a98(iStack_f0,uVar15 >> 0x10,iStack_f0 + iStack_e8,uVar12 >> 0x10,8,8,
                     iStack_d8 * 0x10 + -8,uStack_d4 * 0x10 + -8);
        DAT_0040e6d0 = DAT_0040e6d0 ^ 1;
        uVar15 = uVar12;
      }
      FUN_002c0c10();
      FUN_0036d518();
      *piVar19 = *piVar19 + 1;
      FUN_0036d568();
      iVar13 = piVar19[1];
      piVar19[1] = iVar13 + 1;
      if (iVar13 + 1 == 1) {
        FUN_002b4de0(piVar19);
        return 1;
      }
      return 1;
    }
    if (bVar2 != 4) {
      return 0;
    }
  }
  if (*(int *)(DAT_0040e6c0 + 4) == 0) {
    return 0;
  }
  iVar13 = *(int *)(iStack_d0 + 4);
  if (iVar13 == 0) {
    return 0;
  }
  iStack_f0 = iStack_f0 - *(short *)(DAT_0040e6c0 + 0x1c);
  iVar11 = *(int *)(DAT_0040e6c0 + 0x14) + 7 >> 3;
  iStack_cc = iStack_e4;
  iStack_ec = iStack_ec - *(short *)(DAT_0040e6c0 + 0x1e);
  iVar10 = *(int *)(iStack_d0 + 0x14) + 7 >> 3;
  uStack_c8 = uStack_d4;
  iVar21 = -iStack_e4;
  iStack_c4 = iStack_d8;
  puVar20 = (uint *)(*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_ec +
                    iVar11 * iStack_f0);
  if (*(int *)(iStack_d0 + 0x14) == 4) {
    puVar18 = (uint *)(*(int *)(iStack_d0 + 0x18) * iStack_dc + iVar13);
  }
  else {
    puVar18 = (uint *)(*(int *)(iStack_d0 + 0x18) * iStack_dc + iVar13 + iVar10 * uStack_e0);
  }
  switch(iVar11 * 10 + iVar10) {
  case 0x15:
    bVar2 = *(byte *)(iStack_d0 + 0x22) >> 1;
    uStack_b8 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      FUN_002ac750(iStack_d0,0,2);
    }
    uVar3 = uStack_b8;
    if (*(int *)(iStack_d0 + 0x14) == 8) {
      if ((*(byte *)(iStack_d0 + 0x23) & 0xf) == 1) {
        iVar13 = *(int *)(iStack_d0 + 8);
        iVar17 = iStack_e4 + -1;
        bVar1 = iStack_e4 != 0;
        iStack_e4 = iVar17;
        if (bVar1) {
          do {
            iVar17 = -iVar6;
            iVar21 = iVar21 + uStack_c8;
            puVar16 = puVar20;
            puVar9 = puVar18;
            iVar14 = iStack_e8;
            while (iVar14 != 0) {
              iVar14 = iVar14 + -1;
              uVar3 = (uint)(byte)*puVar9;
              uVar5 = *(ushort *)
                       ((uVar3 & 0xe7 | (uVar3 & 0x10) >> 1 | (uVar3 & 8) << 1) * 2 + iVar13);
              if ((uVar5 & 0x8000) != 0) {
                *(ushort *)puVar16 = uVar5;
              }
              puVar16 = (uint *)((int)puVar16 + 2);
              for (iVar17 = iVar17 + iStack_c4; 0 < iVar17; iVar17 = iVar17 - iVar6) {
                puVar9 = (uint *)((int)puVar9 + 1);
              }
            }
            puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
            if (0 < iVar21) {
              do {
                iVar21 = iVar21 - iStack_cc;
                puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
              } while (0 < iVar21);
            }
            bVar1 = iStack_e4 != 0;
            iStack_e4 = iStack_e4 + -1;
          } while (bVar1);
          uVar3 = uStack_b8;
          iStack_e4 = -1;
        }
      }
      else {
        iStack_b4 = *(int *)(iStack_d0 + 8);
        iVar13 = iStack_e4 + -1;
        bVar1 = iStack_e4 != 0;
        iStack_e4 = iVar13;
        if (bVar1) {
          do {
            iVar13 = -iVar6;
            iVar21 = iVar21 + uStack_c8;
            puVar16 = puVar20;
            puVar9 = puVar18;
            iVar17 = iStack_e8;
            while (iVar17 != 0) {
              iVar17 = iVar17 + -1;
              uVar3 = (uint)(byte)*puVar9;
              uVar3 = *(uint *)((uVar3 & 0xe7 | (uVar3 & 0x10) >> 1 | (uVar3 & 8) << 1) * 4 +
                               iStack_b4);
              if ((uVar3 & 0xff000000) < 0x7f000001) {
                uVar5 = (ushort)*puVar16;
                uVar15 = uVar3 >> 0x18;
                iVar14 = 0x80 - uVar15;
                bVar2 = (byte)(uVar3 >> 0x18);
                uVar5 = ((ushort)bVar2 * (ushort)bVar2 +
                         (uVar5 >> 8 & 0x80) * (short)iVar14 + 0x2000 & 0x4000) * 2 +
                        (((ushort)(uVar3 >> 0x10) & 0xff) * (ushort)bVar2 +
                         (short)((uVar5 & 0x7c00) >> 7) * (short)iVar14 & 0x7c00) +
                        (short)((((uVar3 & 0xff00) >> 8) * uVar15 + ((uVar5 & 0x3e0) >> 2) * iVar14
                                & 0x7c00) >> 5) +
                        (short)(((uVar3 & 0xff) * uVar15 + (uVar5 & 0x1f) * 8 * iVar14 & 0x7c00) >>
                               10);
              }
              else {
                uVar5 = (ushort)((uVar3 & 0xf80000) >> 9) | (ushort)((uVar3 & 0xf800) >> 6) | 0x8000
                        | (ushort)((uVar3 & 0xf8) >> 3);
              }
              *(ushort *)puVar16 = uVar5;
              puVar16 = (uint *)((int)puVar16 + 2);
              for (iVar13 = iVar13 + iStack_c4; 0 < iVar13; iVar13 = iVar13 - iVar6) {
                puVar9 = (uint *)((int)puVar9 + 1);
              }
            }
            puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
            if (0 < iVar21) {
              do {
                iVar21 = iVar21 - iStack_cc;
                puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
              } while (0 < iVar21);
            }
            bVar1 = iStack_e4 != 0;
            iStack_e4 = iStack_e4 + -1;
          } while (bVar1);
          uVar3 = uStack_b8;
          iStack_e4 = -1;
        }
      }
    }
    else if ((*(byte *)(iStack_d0 + 0x23) & 0xf) == 1) {
      iVar13 = *(int *)(iStack_d0 + 8);
      iVar17 = iStack_e4 + -1;
      bVar1 = iStack_e4 != 0;
      iStack_e4 = iVar17;
      if (bVar1) {
        do {
          iVar17 = -iVar6;
          iVar21 = iVar21 + uStack_c8;
          puVar9 = puVar20;
          iVar14 = iStack_e8;
          uVar3 = uStack_e0;
          while (iVar14 != 0) {
            iVar14 = iVar14 + -1;
            if ((uVar3 & 1) == 0) {
              uVar15 = *(byte *)((int)puVar18 + (uVar3 >> 1)) & 0xf;
            }
            else {
              uVar15 = (uint)(*(byte *)((int)puVar18 + (uVar3 >> 1)) >> 4);
            }
            uVar5 = *(ushort *)(uVar15 * 2 + iVar13);
            if ((uVar5 & 0x8000) != 0) {
              *(ushort *)puVar9 = uVar5;
            }
            puVar9 = (uint *)((int)puVar9 + 2);
            for (iVar17 = iVar17 + iStack_c4; 0 < iVar17; iVar17 = iVar17 - iVar6) {
              uVar3 = uVar3 + 1;
            }
          }
          puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
          if (0 < iVar21) {
            do {
              iVar21 = iVar21 - iStack_cc;
              puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
            } while (0 < iVar21);
          }
          bVar1 = iStack_e4 != 0;
          iStack_e4 = iStack_e4 + -1;
        } while (bVar1);
        uVar3 = uStack_b8;
        iStack_e4 = -1;
      }
    }
    else {
      iStack_b0 = *(int *)(iStack_d0 + 8);
      iVar13 = iStack_e4;
      while (iStack_e4 = iVar13 + -1, iVar13 != 0) {
        iVar13 = -iVar6;
        iVar21 = iVar21 + uStack_c8;
        puVar9 = puVar20;
        iVar17 = iStack_e8;
        uVar15 = uStack_e0;
        while (iVar17 != 0) {
          iVar17 = iVar17 + -1;
          if ((uVar15 & 1) == 0) {
            uVar12 = *(uint *)((*(byte *)((int)puVar18 + (uVar15 >> 1)) & 0xf) * 4 + iStack_b0);
            uVar7 = uVar12 & 0xff000000;
            if (uVar7 < 0x7f000001) {
LAB_002c49b8:
              uVar5 = (ushort)*puVar9;
              uVar8 = uVar7 >> 0x18;
              iVar14 = 0x80 - uVar8;
              bVar2 = (byte)(uVar7 >> 0x18);
              uVar5 = ((ushort)bVar2 * (ushort)bVar2 + (uVar5 >> 8 & 0x80) * (short)iVar14 + 0x2000
                      & 0x4000) * 2 +
                      (((ushort)(uVar12 >> 0x10) & 0xff) * (ushort)bVar2 +
                       (short)((uVar5 & 0x7c00) >> 7) * (short)iVar14 & 0x7c00) +
                      (short)((((uVar12 & 0xff00) >> 8) * uVar8 + ((uVar5 & 0x3e0) >> 2) * iVar14 &
                              0x7c00) >> 5) +
                      (short)(((uVar12 & 0xff) * uVar8 + (uVar5 & 0x1f) * 8 * iVar14 & 0x7c00) >> 10
                             );
            }
            else {
              uVar5 = (ushort)((uVar12 & 0xf80000) >> 9) | (ushort)((uVar12 & 0xf800) >> 6) | 0x8000
                      | (ushort)((uVar12 & 0xf8) >> 3);
            }
          }
          else {
            uVar12 = *(uint *)((uint)(*(byte *)((int)puVar18 + (uVar15 >> 1)) >> 4) * 4 + iStack_b0)
            ;
            uVar7 = uVar12 & 0xff000000;
            if (uVar7 < 0x7f000001) goto LAB_002c49b8;
            uVar5 = (ushort)((uVar12 & 0xf80000) >> 9) | (ushort)((uVar12 & 0xf800) >> 6) | 0x8000 |
                    (ushort)((uVar12 & 0xf8) >> 3);
          }
          *(ushort *)puVar9 = uVar5;
          puVar9 = (uint *)((int)puVar9 + 2);
          for (iVar13 = iVar13 + iStack_c4; 0 < iVar13; iVar13 = iVar13 - iVar6) {
            uVar15 = uVar15 + 1;
          }
        }
        puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
        iVar13 = iStack_e4;
        if (0 < iVar21) {
          do {
            iVar21 = iVar21 - iStack_cc;
            puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
          } while (0 < iVar21);
        }
      }
    }
    goto LAB_002c4af4;
  case 0x16:
    if (iStack_e4 != 0) {
      do {
        iStack_e4 = iStack_e4 + -1;
        iVar13 = -iStack_e8;
        iVar21 = iVar21 + uStack_d4;
        puVar16 = puVar20;
        puVar9 = puVar18;
        iVar6 = iStack_e8;
        while (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          if (((ushort)*puVar9 & 0x8000) != 0) {
            *(ushort *)puVar16 = (ushort)*puVar9;
          }
          puVar16 = (uint *)((int)puVar16 + 2);
          for (iVar13 = iVar13 + iStack_d8; 0 < iVar13; iVar13 = iVar13 - iStack_e8) {
            puVar9 = (uint *)((int)puVar9 + 2);
          }
        }
        puVar20 = (uint *)((int)puVar20 + *(int *)(iVar17 + 0x18));
        if (0 < iVar21) {
          do {
            iVar21 = iVar21 - iVar14;
            puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
          } while (0 < iVar21);
        }
      } while (iStack_e4 != 0);
      return 1;
    }
    break;
  default:
    goto switchD_002c3810_caseD_17;
  case 0x18:
    if (iStack_e4 != 0) {
      do {
        iStack_e4 = iStack_e4 + -1;
        iVar13 = -iStack_e8;
        iVar21 = iVar21 + uStack_d4;
        puVar16 = puVar20;
        puVar9 = puVar18;
        iVar17 = iStack_e8;
        while (iVar17 != 0) {
          iVar17 = iVar17 + -1;
          uVar3 = *puVar9;
          if ((uVar3 & 0xff000000) < 0x7f000001) {
            uVar5 = (ushort)*puVar16;
            uVar15 = uVar3 >> 0x18;
            iVar6 = 0x80 - uVar15;
            bVar2 = (byte)(uVar3 >> 0x18);
            uVar5 = ((ushort)bVar2 * (ushort)bVar2 + (uVar5 >> 8 & 0x80) * (short)iVar6 + 0x2000 &
                    0x4000) * 2 +
                    (((ushort)(uVar3 >> 0x10) & 0xff) * (ushort)bVar2 +
                     (short)((uVar5 & 0x7c00) >> 7) * (short)iVar6 & 0x7c00) +
                    (short)((((uVar3 & 0xff00) >> 8) * uVar15 + ((uVar5 & 0x3e0) >> 2) * iVar6 &
                            0x7c00) >> 5) +
                    (short)(((uVar3 & 0xff) * uVar15 + (uVar5 & 0x1f) * 8 * iVar6 & 0x7c00) >> 10);
          }
          else {
            uVar5 = (ushort)((uVar3 & 0xf80000) >> 9) | (ushort)((uVar3 & 0xf800) >> 6) | 0x8000 |
                    (ushort)((uVar3 & 0xf8) >> 3);
          }
          *(ushort *)puVar16 = uVar5;
          puVar16 = (uint *)((int)puVar16 + 2);
          for (iVar13 = iVar13 + iStack_d8; 0 < iVar13; iVar13 = iVar13 - iStack_e8) {
            puVar9 = puVar9 + 1;
          }
        }
        puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
        if (0 < iVar21) {
          do {
            iVar21 = iVar21 - iVar14;
            puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
          } while (0 < iVar21);
        }
      } while (iStack_e4 != 0);
      return 1;
    }
    break;
  case 0x29:
    bVar2 = *(byte *)(iStack_d0 + 0x22) >> 1;
    uStack_bc = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      FUN_002ac750(iStack_d0,0,2);
    }
    uVar3 = uStack_bc;
    if (*(int *)(iStack_d0 + 0x14) == 8) {
      if ((*(byte *)(iStack_d0 + 0x23) & 0xf) == 1) {
        iVar13 = *(int *)(iStack_d0 + 8);
        iVar17 = iStack_e4 + -1;
        bVar1 = iStack_e4 != 0;
        iStack_e4 = iVar17;
        if (bVar1) {
          do {
            iVar17 = -iVar6;
            iVar21 = iVar21 + uStack_c8;
            puVar16 = puVar20;
            puVar9 = puVar18;
            iVar14 = iStack_e8;
            while (iVar14 != 0) {
              iVar14 = iVar14 + -1;
              uVar15 = (uint)(byte)*puVar9;
              uVar5 = *(ushort *)
                       ((uVar15 & 0xe7 | (uVar15 & 0x10) >> 1 | (uVar15 & 8) << 1) * 2 + iVar13);
              if ((uVar5 & 0x8000) != 0) {
                *puVar16 = (uVar5 & 0x7c00) << 9 | (uVar5 & 0x3e0) << 6 | 0x80000000 |
                           (uVar5 & 0x1f) << 3;
              }
              puVar16 = puVar16 + 1;
              for (iVar17 = iVar17 + iStack_c4; 0 < iVar17; iVar17 = iVar17 - iVar6) {
                puVar9 = (uint *)((int)puVar9 + 1);
              }
            }
            puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
            if (0 < iVar21) {
              do {
                iVar21 = iVar21 - iStack_cc;
                puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
              } while (0 < iVar21);
            }
            bVar1 = iStack_e4 != 0;
            iStack_e4 = iStack_e4 + -1;
          } while (bVar1);
          iStack_e4 = -1;
        }
      }
      else {
        iVar13 = *(int *)(iStack_d0 + 8);
        iVar17 = iStack_e4 + -1;
        bVar1 = iStack_e4 != 0;
        iStack_e4 = iVar17;
        if (bVar1) {
          do {
            iVar17 = -iVar6;
            iVar21 = iVar21 + uStack_c8;
            puVar16 = puVar20;
            puVar9 = puVar18;
            iVar14 = iStack_e8;
            while (iVar14 != 0) {
              iVar14 = iVar14 + -1;
              uVar15 = (uint)(byte)*puVar9;
              uVar15 = *(uint *)((uVar15 & 0xe7 | (uVar15 & 0x10) >> 1 | (uVar15 & 8) << 1) * 4 +
                                iVar13);
              if (uVar15 < 0x7f000001) {
                uVar12 = *puVar16;
                uVar7 = uVar15 >> 0x18;
                iVar10 = 0x80 - uVar7;
                *puVar16 = (uVar7 * uVar7 + (uVar12 >> 0x18) * iVar10 & 0x7f80) * 0x20000 +
                           (((uVar15 & 0xff0000) >> 0x10) * uVar7 +
                            ((uVar12 & 0xff0000) >> 0x10) * iVar10 & 0x7f80) * 0x200 +
                           (((uVar15 & 0xff00) >> 8) * uVar7 + ((uVar12 & 0xff00) >> 8) * iVar10 &
                           0x7f80) * 2 +
                           (((uVar15 & 0xff) * uVar7 + (uVar12 & 0xff) * iVar10 & 0x7f80) >> 7);
              }
              else {
                *puVar16 = uVar15;
              }
              puVar16 = puVar16 + 1;
              for (iVar17 = iVar17 + iStack_c4; 0 < iVar17; iVar17 = iVar17 - iVar6) {
                puVar9 = (uint *)((int)puVar9 + 1);
              }
            }
            puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
            if (0 < iVar21) {
              do {
                iVar21 = iVar21 - iStack_cc;
                puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
              } while (0 < iVar21);
            }
            bVar1 = iStack_e4 != 0;
            iStack_e4 = iStack_e4 + -1;
          } while (bVar1);
          iStack_e4 = -1;
        }
      }
    }
    else if ((*(byte *)(iStack_d0 + 0x23) & 0xf) == 1) {
      iVar13 = *(int *)(iStack_d0 + 8);
      iVar17 = iStack_e4 + -1;
      bVar1 = iStack_e4 != 0;
      iStack_e4 = iVar17;
      if (bVar1) {
        do {
          iVar17 = -iVar6;
          iVar21 = iVar21 + uStack_c8;
          puVar9 = puVar20;
          iVar14 = iStack_e8;
          uVar15 = uStack_e0;
          while (iVar14 != 0) {
            iVar14 = iVar14 + -1;
            if ((uVar15 & 1) == 0) {
              uVar12 = *(byte *)((int)puVar18 + (uVar15 >> 1)) & 0xf;
            }
            else {
              uVar12 = (uint)(*(byte *)((int)puVar18 + (uVar15 >> 1)) >> 4);
            }
            uVar5 = *(ushort *)(uVar12 * 2 + iVar13);
            if ((uVar5 & 0x8000) != 0) {
              *puVar9 = (uVar5 & 0x7c00) << 9 | (uVar5 & 0x3e0) << 6 | 0x80000000 |
                        (uVar5 & 0x1f) << 3;
            }
            puVar9 = puVar9 + 1;
            for (iVar17 = iVar17 + iStack_c4; 0 < iVar17; iVar17 = iVar17 - iVar6) {
              uVar15 = uVar15 + 1;
            }
          }
          puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
          if (0 < iVar21) {
            do {
              iVar21 = iVar21 - iStack_cc;
              puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
            } while (0 < iVar21);
          }
          bVar1 = iStack_e4 != 0;
          iStack_e4 = iStack_e4 + -1;
        } while (bVar1);
        iStack_e4 = -1;
      }
    }
    else {
      iVar13 = *(int *)(iStack_d0 + 8);
      iVar17 = iStack_e4;
      while (iStack_e4 = iVar17 + -1, iVar17 != 0) {
        iVar17 = -iVar6;
        iVar21 = iVar21 + uStack_c8;
        puVar9 = puVar20;
        iVar14 = iStack_e8;
        uVar15 = uStack_e0;
        while (iVar14 != 0) {
          iVar14 = iVar14 + -1;
          if ((uVar15 & 1) == 0) {
            uVar12 = *(uint *)((*(byte *)((int)puVar18 + (uVar15 >> 1)) & 0xf) * 4 + iVar13);
            if (uVar12 < 0x7f000001) {
              uVar7 = *puVar9;
              goto LAB_002c4060;
            }
LAB_002c4010:
            *puVar9 = uVar12;
          }
          else {
            uVar12 = *(uint *)((uint)(*(byte *)((int)puVar18 + (uVar15 >> 1)) >> 4) * 4 + iVar13);
            if (0x7f000000 < uVar12) goto LAB_002c4010;
            uVar7 = *puVar9;
LAB_002c4060:
            uVar8 = uVar12 >> 0x18;
            iVar10 = 0x80 - uVar8;
            *puVar9 = (uVar8 * uVar8 + (uVar7 >> 0x18) * iVar10 & 0x7f80) * 0x20000 +
                      (((uVar12 & 0xff0000) >> 0x10) * uVar8 + ((uVar7 & 0xff0000) >> 0x10) * iVar10
                      & 0x7f80) * 0x200 +
                      (((uVar12 & 0xff00) >> 8) * uVar8 + ((uVar7 & 0xff00) >> 8) * iVar10 & 0x7f80)
                      * 2 + (((uVar12 & 0xff) * uVar8 + (uVar7 & 0xff) * iVar10 & 0x7f80) >> 7);
          }
          puVar9 = puVar9 + 1;
          for (iVar17 = iVar17 + iStack_c4; 0 < iVar17; iVar17 = iVar17 - iVar6) {
            uVar15 = uVar15 + 1;
          }
        }
        puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
        iVar17 = iStack_e4;
        if (0 < iVar21) {
          do {
            iVar21 = iVar21 - iStack_cc;
            puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
          } while (0 < iVar21);
        }
      }
    }
LAB_002c4af4:
    if (uVar3 != 0) {
      return 1;
    }
    FUN_002ac790(iStack_d0);
    break;
  case 0x2a:
    if (iStack_e4 != 0) {
      do {
        iStack_e4 = iStack_e4 + -1;
        iVar13 = -iStack_e8;
        iVar21 = iVar21 + uStack_d4;
        puVar16 = puVar20;
        puVar9 = puVar18;
        iVar17 = iStack_e8;
        while (iVar17 != 0) {
          iVar17 = iVar17 + -1;
          uVar5 = (ushort)*puVar9;
          if ((uVar5 & 0x8000) != 0) {
            *puVar16 = (uVar5 & 0x7c00) << 9 | (uVar5 & 0x3e0) << 6 | 0x80000000 |
                       (uVar5 & 0x1f) << 3;
          }
          puVar16 = puVar16 + 1;
          for (iVar13 = iVar13 + iStack_d8; 0 < iVar13; iVar13 = iVar13 - iStack_e8) {
            puVar9 = (uint *)((int)puVar9 + 2);
          }
        }
        puVar20 = (uint *)((int)puVar20 + *(int *)(DAT_0040e6c0 + 0x18));
        if (0 < iVar21) {
          do {
            iVar21 = iVar21 - iVar14;
            puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
          } while (0 < iVar21);
        }
      } while (iStack_e4 != 0);
      return 1;
    }
    break;
  case 0x2c:
    if (iStack_e4 != 0) {
      do {
        iStack_e4 = iStack_e4 + -1;
        iVar13 = -iStack_e8;
        iVar21 = iVar21 + uStack_d4;
        puVar16 = puVar20;
        puVar9 = puVar18;
        iVar6 = iStack_e8;
        while (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          uVar3 = *puVar9;
          if (uVar3 < 0x7f000001) {
            uVar15 = *puVar16;
            uVar12 = uVar3 >> 0x18;
            iVar10 = 0x80 - uVar12;
            *puVar16 = (uVar12 * uVar12 + (uVar15 >> 0x18) * iVar10 & 0x7f80) * 0x20000 +
                       (((uVar3 & 0xff0000) >> 0x10) * uVar12 +
                        ((uVar15 & 0xff0000) >> 0x10) * iVar10 & 0x7f80) * 0x200 +
                       (((uVar3 & 0xff00) >> 8) * uVar12 + ((uVar15 & 0xff00) >> 8) * iVar10 &
                       0x7f80) * 2 +
                       (((uVar3 & 0xff) * uVar12 + (uVar15 & 0xff) * iVar10 & 0x7f80) >> 7);
          }
          else {
            *puVar16 = uVar3;
          }
          puVar16 = puVar16 + 1;
          for (iVar13 = iVar13 + iStack_d8; 0 < iVar13; iVar13 = iVar13 - iStack_e8) {
            puVar9 = puVar9 + 1;
          }
        }
        puVar20 = (uint *)((int)puVar20 + *(int *)(iVar17 + 0x18));
        if (0 < iVar21) {
          do {
            iVar21 = iVar21 - iVar14;
            puVar18 = (uint *)((int)puVar18 + *(int *)(iStack_d0 + 0x18));
          } while (0 < iVar21);
        }
      } while (iStack_e4 != 0);
      return 1;
    }
  }
  return 1;
}


// ==== FUN_002c4b38 @ 002c4b38 ====

undefined4 FUN_002c4b38(undefined8 param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  ushort *puVar14;
  uint *puVar15;
  ushort *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  
  iVar24 = (int)param_1;
  piVar26 = (int *)(iVar24 + DAT_0040e688);
  if ((*(byte *)((int)piVar26 + 0x36) & 6) != 0) {
switchD_002c4e74_caseD_17:
    return 0;
  }
  uStack_b8 = *(uint *)(iVar24 + 0xc);
  uStack_b4 = *(uint *)(iVar24 + 0x10);
  uStack_b0 = 0;
  iStack_ac = 0;
  iStack_c0 = *param_2 + (int)*(short *)(DAT_0040e6c0 + 0x1c);
  iStack_bc = param_2[1] + (int)*(short *)(DAT_0040e6c0 + 0x1e);
  uStack_a8 = uStack_b8;
  uStack_a4 = uStack_b4;
  lVar8 = FUN_002c1178(&uStack_b0,&iStack_c0);
  iVar22 = iStack_ac;
  iVar21 = iStack_bc;
  if (lVar8 == 0) {
    return 1;
  }
  if (*(byte *)(iVar24 + 0x20) - 1 < 2) {
    return 0;
  }
  if (*(char *)(DAT_0040e6c0 + 0x20) == '\x01') {
    return 0;
  }
  bVar2 = *(byte *)(DAT_0040e6c0 + 0x20);
  if (bVar2 == 1) {
    return 0;
  }
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      return 0;
    }
  }
  else {
    if (bVar2 == 2) {
      iVar24 = iStack_ac + uStack_a4;
      FUN_002c0840(2);
      for (; uVar20 = iVar24 - iVar22, uVar20 != 0; iVar22 = iVar22 + iVar25) {
        uStack_a4 = 0x40;
        if (0x40 >= uVar20) {
          uStack_a4 = uVar20;
        }
        iVar25 = uStack_a4 - (0x40 < uVar20);
        iVar23 = iVar21 + iVar25;
        iStack_ac = iVar22;
        FUN_002cd640(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4));
        FUN_002ac628(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4),param_1,&uStack_b0);
        FUN_002c14a0(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4));
        FUN_002cd230(*(undefined4 *)(&DAT_0040e6c8 + DAT_0040e6d0 * 4),0);
        FUN_002c0a98(iStack_c0,iVar21,iStack_c0 + uStack_b8,iVar23,8,8,uStack_a8 * 0x10 + -8,
                     uStack_a4 * 0x10 + -8);
        DAT_0040e6d0 = DAT_0040e6d0 ^ 1;
        iVar21 = iVar23;
      }
      FUN_002c0c10();
      FUN_0036d518();
      *piVar26 = *piVar26 + 1;
      FUN_0036d568();
      iVar24 = piVar26[1];
      piVar26[1] = iVar24 + 1;
      if (iVar24 + 1 == 1) {
        FUN_002b4de0(piVar26);
        return 1;
      }
      return 1;
    }
    if (bVar2 != 4) {
      return 0;
    }
  }
  if (*(int *)(DAT_0040e6c0 + 4) == 0) {
    return 0;
  }
  if (*(int *)(iVar24 + 4) == 0) {
    return 0;
  }
  iStack_c0 = iStack_c0 - *(short *)(DAT_0040e6c0 + 0x1c);
  iVar22 = *(int *)(iVar24 + 0x14) + 7 >> 3;
  iStack_bc = iStack_bc - *(short *)(DAT_0040e6c0 + 0x1e);
  iVar21 = *(int *)(DAT_0040e6c0 + 0x14) + 7 >> 3;
  if (*(int *)(iVar24 + 0x14) == 4) {
    iVar25 = (*(int *)(iVar24 + 0x18) - (int)uStack_b8 / 2) - (uStack_b0 & uStack_b8 & 1);
  }
  else {
    if (iVar22 == 0) {
      trap(7);
    }
    iVar25 = *(int *)(iVar24 + 0x18) / iVar22 - uStack_b8;
  }
  if (iVar21 == 0) {
    trap(7);
  }
  iVar23 = *(int *)(DAT_0040e6c0 + 0x18) / iVar21 - uStack_b8;
  switch(iVar21 * 10 + iVar22) {
  case 0x15:
    bVar2 = *(byte *)(iVar24 + 0x22) >> 1;
    if ((bVar2 & 1) == 0) {
      FUN_002ac750(param_1,0,2);
    }
    puVar16 = (ushort *)
              (*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_bc +
              iVar21 * iStack_c0);
    if (*(int *)(iVar24 + 0x14) == 8) {
      pbVar17 = (byte *)(*(int *)(iVar24 + 4) + *(int *)(iVar24 + 0x18) * iStack_ac +
                        iVar22 * uStack_b0);
      if ((*(byte *)(iVar24 + 0x23) & 0xf) == 1) {
        iVar24 = *(int *)(iVar24 + 8);
        uVar20 = uStack_b4 - 1;
        bVar1 = uStack_b4 != 0;
        uStack_b4 = uVar20;
        if (bVar1) {
          do {
            uVar20 = uStack_b8 - 1;
            puVar14 = puVar16;
            if (uVar20 != 0xffffffff) {
              uVar7 = ~uVar20 & 3;
              pbVar11 = pbVar17;
              if (uVar7 != 0) {
                if (uVar7 < 3) {
                  if (uVar7 < 2) {
                    uVar7 = (uint)*pbVar17;
                    pbVar17 = pbVar17 + 1;
                    uVar20 = uStack_b8 - 2;
                    *puVar16 = *(ushort *)
                                ((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 2 +
                                iVar24);
                    puVar16 = puVar16 + 1;
                  }
                  uVar7 = (uint)*pbVar17;
                  pbVar17 = pbVar17 + 1;
                  uVar20 = uVar20 - 1;
                  *puVar16 = *(ushort *)
                              ((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 2 + iVar24)
                  ;
                  puVar16 = puVar16 + 1;
                }
                uVar7 = (uint)*pbVar17;
                puVar14 = puVar16 + 1;
                pbVar17 = pbVar17 + 1;
                uVar20 = uVar20 - 1;
                *puVar16 = *(ushort *)
                            ((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 2 + iVar24);
                puVar16 = puVar14;
                pbVar11 = pbVar17;
                if (uVar20 == 0xffffffff) goto LAB_002c5f70;
              }
              do {
                uVar9 = (uint)*pbVar11;
                puVar14 = puVar14 + 4;
                uVar10 = (uint)pbVar11[1];
                pbVar17 = pbVar17 + 4;
                uVar13 = (uint)pbVar11[2];
                uVar7 = (uint)pbVar11[3];
                uVar6 = *(ushort *)
                         ((uVar10 & 0xe7 | (uVar10 & 0x10) >> 1 | (uVar10 & 8) << 1) * 2 + iVar24);
                uVar4 = *(ushort *)
                         ((uVar13 & 0xe7 | (uVar13 & 0x10) >> 1 | (uVar13 & 8) << 1) * 2 + iVar24);
                uVar5 = *(ushort *)
                         ((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 2 + iVar24);
                uVar20 = uVar20 - 4;
                *puVar16 = *(ushort *)
                            ((uVar9 & 0xe7 | (uVar9 & 0x10) >> 1 | (uVar9 & 8) << 1) * 2 + iVar24);
                puVar16[1] = uVar6;
                puVar16[2] = uVar4;
                puVar16[3] = uVar5;
                puVar16 = puVar16 + 4;
                pbVar11 = pbVar11 + 4;
              } while (uVar20 != 0xffffffff);
            }
LAB_002c5f70:
            pbVar17 = pbVar17 + iVar25;
            puVar16 = puVar14 + iVar23;
            bVar1 = uStack_b4 != 0;
            uStack_b4 = uStack_b4 - 1;
          } while (bVar1);
          uStack_b4 = 0xffffffff;
        }
      }
      else {
        iVar24 = *(int *)(iVar24 + 8);
        uVar20 = uStack_b4 - 1;
        bVar1 = uStack_b4 != 0;
        uStack_b4 = uVar20;
        if (bVar1) {
          do {
            uVar20 = uStack_b8 - 1;
            if (uVar20 != 0xffffffff) {
              puVar14 = puVar16;
              pbVar11 = pbVar17;
              if ((~uVar20 & 1) != 0) {
                uVar20 = (uint)*pbVar17;
                uVar20 = *(uint *)((uVar20 & 0xe7 | (uVar20 & 0x10) >> 1 | (uVar20 & 8) << 1) * 4 +
                                  iVar24);
                uVar6 = (ushort)((uVar20 & 0xf800) >> 6);
                if (0x3fffffff < uVar20) {
                  uVar6 = uVar6 | 0x8000;
                }
                *puVar16 = (ushort)((uVar20 & 0xf80000) >> 9) | uVar6 |
                           (ushort)((uVar20 & 0xf8) >> 3);
                puVar14 = puVar16 + 1;
                puVar16 = puVar16 + 1;
                pbVar11 = pbVar17 + 1;
                uVar20 = uStack_b8 - 2;
                pbVar17 = pbVar17 + 1;
                if (uVar20 == 0xffffffff) goto LAB_002c613c;
              }
              do {
                uVar7 = (uint)*pbVar11;
                uVar7 = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4 +
                                 iVar24);
                uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
                if (0x3fffffff < uVar7) {
                  uVar6 = uVar6 | 0x8000;
                }
                *puVar14 = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3)
                ;
                uVar7 = (uint)pbVar11[1];
                uVar7 = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4 +
                                 iVar24);
                uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
                if (0x3fffffff < uVar7) {
                  uVar6 = uVar6 | 0x8000;
                }
                puVar14[1] = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 |
                             (ushort)((uVar7 & 0xf8) >> 3);
                puVar14 = puVar14 + 2;
                puVar16 = puVar16 + 2;
                pbVar11 = pbVar11 + 2;
                uVar20 = uVar20 - 2;
                pbVar17 = pbVar17 + 2;
              } while (uVar20 != 0xffffffff);
            }
LAB_002c613c:
            pbVar17 = pbVar17 + iVar25;
            puVar16 = puVar16 + iVar23;
            bVar1 = uStack_b4 != 0;
            uStack_b4 = uStack_b4 - 1;
          } while (bVar1);
          uStack_b4 = 0xffffffff;
        }
      }
    }
    else {
      pbVar17 = (byte *)(*(int *)(iVar24 + 4) + *(int *)(iVar24 + 0x18) * iStack_ac +
                        ((int)uStack_b0 >> 1));
      if ((*(byte *)(iVar24 + 0x23) & 0xf) == 1) {
        iVar24 = *(int *)(iVar24 + 8);
        uVar20 = uStack_b4 - 1;
        bVar1 = uStack_b4 != 0;
        pbVar11 = pbVar17;
        uStack_b4 = uVar20;
        if (bVar1) {
          do {
            uVar20 = uStack_b8;
            if ((uStack_b0 & 1) != 0) {
              bVar3 = *pbVar11;
              pbVar17 = pbVar17 + 1;
              pbVar11 = pbVar11 + 1;
              uVar20 = uStack_b8 - 1;
              *puVar16 = *(ushort *)((uint)(bVar3 >> 4) * 2 + iVar24);
              puVar16 = puVar16 + 1;
            }
            pbVar18 = pbVar17;
            if (1 < uVar20) {
              uVar7 = 1 - uVar20 & 3;
              if ((int)uVar20 < 2) {
LAB_002c6224:
                pbVar18 = pbVar17 + 1;
                uVar20 = uVar20 - 2;
                pbVar11 = pbVar11 + 1;
                *puVar16 = *(ushort *)((*pbVar17 & 0xf) * 2 + iVar24);
                puVar14 = puVar16 + 1;
                puVar16 = puVar16 + 2;
                *puVar14 = *(ushort *)((uint)(*pbVar17 >> 4) * 2 + iVar24);
                puVar14 = puVar16;
                pbVar12 = pbVar18;
                pbVar17 = pbVar18;
                if (1 < uVar20) goto LAB_002c6280;
              }
              else {
                puVar14 = puVar16;
                pbVar12 = pbVar17;
                if (uVar7 == 0) {
                  uVar7 = (uint)*pbVar17;
                }
                else {
                  if (1 < uVar7) goto LAB_002c6224;
                  uVar7 = (uint)*pbVar17;
                }
                while( true ) {
                  uVar20 = uVar20 - 4;
                  puVar16 = puVar16 + 4;
                  pbVar11 = pbVar11 + 2;
                  pbVar18 = pbVar17 + 2;
                  *puVar14 = *(ushort *)((uVar7 & 0xf) * 2 + iVar24);
                  puVar14[1] = *(ushort *)((uint)(*pbVar12 >> 4) * 2 + iVar24);
                  puVar14[2] = *(ushort *)((pbVar12[1] & 0xf) * 2 + iVar24);
                  puVar14[3] = *(ushort *)((uint)(pbVar12[1] >> 4) * 2 + iVar24);
                  puVar14 = puVar14 + 4;
                  pbVar12 = pbVar12 + 2;
                  pbVar17 = pbVar18;
                  if (uVar20 < 2) break;
LAB_002c6280:
                  uVar7 = (uint)*pbVar12;
                }
              }
            }
            if (uVar20 != 0) {
              *puVar16 = *(ushort *)((*pbVar11 & 0xf) * 2 + iVar24);
              puVar16 = puVar16 + 1;
            }
            puVar16 = puVar16 + iVar23;
            pbVar17 = pbVar18 + iVar25;
            bVar1 = uStack_b4 != 0;
            pbVar11 = pbVar11 + iVar25;
            uStack_b4 = uStack_b4 - 1;
          } while (bVar1);
          uStack_b4 = 0xffffffff;
        }
      }
      else {
        iVar24 = *(int *)(iVar24 + 8);
        pbVar11 = pbVar17;
        while (bVar1 = uStack_b4 != 0, uStack_b4 = uStack_b4 - 1, bVar1) {
          uVar20 = uStack_b8;
          puVar14 = puVar16;
          pbVar18 = pbVar11;
          if ((uStack_b0 & 1) != 0) {
            uVar20 = *(uint *)((uint)(*pbVar17 >> 4) * 4 + iVar24);
            uVar6 = (ushort)((uVar20 & 0xf800) >> 6);
            if (0x3fffffff < uVar20) {
              uVar6 = uVar6 | 0x8000;
            }
            *puVar16 = (ushort)((uVar20 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar20 & 0xf8) >> 3);
            puVar16 = puVar16 + 1;
            pbVar17 = pbVar17 + 1;
            pbVar11 = pbVar11 + 1;
            uVar20 = uStack_b8 - 1;
            puVar14 = puVar16;
            pbVar18 = pbVar11;
          }
          for (; 1 < uVar20; uVar20 = uVar20 - 2) {
            uVar7 = *(uint *)((*pbVar11 & 0xf) * 4 + iVar24);
            uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
            if (0x3fffffff < uVar7) {
              uVar6 = uVar6 | 0x8000;
            }
            *puVar16 = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3);
            uVar7 = *(uint *)((uint)(*pbVar11 >> 4) * 4 + iVar24);
            uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
            if (0x3fffffff < uVar7) {
              uVar6 = uVar6 | 0x8000;
            }
            puVar16[1] = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3);
            puVar16 = puVar16 + 2;
            pbVar11 = pbVar11 + 1;
            pbVar17 = pbVar17 + 1;
            puVar14 = puVar14 + 2;
            pbVar18 = pbVar18 + 1;
          }
          if (uVar20 != 0) {
            uVar20 = *(uint *)((*pbVar17 & 0xf) * 4 + iVar24);
            uVar6 = (ushort)((uVar20 & 0xf800) >> 6);
            if (0x3fffffff < uVar20) {
              uVar6 = uVar6 | 0x8000;
            }
            *puVar14 = (ushort)((uVar20 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar20 & 0xf8) >> 3);
            puVar14 = puVar14 + 1;
          }
          puVar16 = puVar14 + iVar23;
          pbVar17 = pbVar17 + iVar25;
          pbVar11 = pbVar18 + iVar25;
        }
      }
    }
    goto joined_r0x002c59e0;
  case 0x16:
  case 0x2c:
    iVar25 = *(int *)(DAT_0040e6c0 + 0x14);
    iVar23 = *(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_bc +
             iVar21 * iStack_c0;
    iVar21 = *(int *)(iVar24 + 4) + *(int *)(iVar24 + 0x18) * iStack_ac + iVar22 * uStack_b0;
    if (uStack_b4 != 0) {
      do {
        uStack_b4 = uStack_b4 - 1;
        memcpy(iVar23,iVar21,uStack_b8 * (iVar25 + 7 >> 3));
        iVar21 = iVar21 + *(int *)(iVar24 + 0x18);
        iVar23 = iVar23 + *(int *)(DAT_0040e6c0 + 0x18);
      } while (uStack_b4 != 0);
      return 1;
    }
    break;
  default:
    goto switchD_002c4e74_caseD_17;
  case 0x18:
    puVar16 = (ushort *)
              (*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_bc +
              iVar21 * iStack_c0);
    puVar19 = (uint *)(*(int *)(iVar24 + 4) + *(int *)(iVar24 + 0x18) * iStack_ac +
                      iVar22 * uStack_b0);
    if (uStack_b4 != 0) {
      do {
        uStack_b4 = uStack_b4 - 1;
        uVar20 = uStack_b8 - 1;
        if (uVar20 != 0xffffffff) {
          uVar7 = ~uVar20 & 3;
          puVar14 = puVar16;
          puVar15 = puVar19;
          if (uVar7 != 0) {
            if (uVar7 < 3) {
              if (uVar7 < 2) {
                uVar20 = *puVar19;
                uVar6 = (ushort)((uVar20 & 0xf800) >> 6);
                if (0x3fffffff < uVar20) {
                  uVar6 = uVar6 | 0x8000;
                }
                *puVar16 = (ushort)((uVar20 & 0xf80000) >> 9) | uVar6 |
                           (ushort)((uVar20 & 0xf8) >> 3);
                puVar16 = puVar16 + 1;
                puVar19 = puVar19 + 1;
                uVar20 = uStack_b8 - 2;
                uVar7 = *puVar19;
              }
              else {
                uVar7 = *puVar19;
              }
              uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
              if (0x3fffffff < uVar7) {
                uVar6 = uVar6 | 0x8000;
              }
              *puVar16 = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3);
              puVar16 = puVar16 + 1;
              puVar19 = puVar19 + 1;
              uVar20 = uVar20 - 1;
            }
            uVar7 = *puVar19;
            uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
            if (0x3fffffff < uVar7) {
              uVar6 = uVar6 | 0x8000;
            }
            *puVar16 = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3);
            puVar14 = puVar16 + 1;
            puVar16 = puVar16 + 1;
            puVar15 = puVar19 + 1;
            uVar20 = uVar20 - 1;
            puVar19 = puVar19 + 1;
            if (uVar20 == 0xffffffff) goto LAB_002c5cb4;
          }
          do {
            uVar7 = *puVar15;
            uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
            if (0x3fffffff < uVar7) {
              uVar6 = uVar6 | 0x8000;
            }
            *puVar14 = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3);
            uVar7 = puVar15[1];
            uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
            if (0x3fffffff < uVar7) {
              uVar6 = uVar6 | 0x8000;
            }
            puVar14[1] = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3);
            uVar7 = puVar15[2];
            uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
            if (0x3fffffff < uVar7) {
              uVar6 = uVar6 | 0x8000;
            }
            puVar14[2] = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3);
            uVar7 = puVar15[3];
            uVar6 = (ushort)((uVar7 & 0xf800) >> 6);
            if (0x3fffffff < uVar7) {
              uVar6 = uVar6 | 0x8000;
            }
            puVar14[3] = (ushort)((uVar7 & 0xf80000) >> 9) | uVar6 | (ushort)((uVar7 & 0xf8) >> 3);
            puVar14 = puVar14 + 4;
            puVar16 = puVar16 + 4;
            puVar15 = puVar15 + 4;
            uVar20 = uVar20 - 4;
            puVar19 = puVar19 + 4;
          } while (uVar20 != 0xffffffff);
        }
LAB_002c5cb4:
        puVar19 = puVar19 + iVar25;
        puVar16 = puVar16 + iVar23;
        if (uStack_b4 == 0) {
          return 1;
        }
      } while( true );
    }
    break;
  case 0x29:
    bVar2 = *(byte *)(iVar24 + 0x22) >> 1;
    if ((bVar2 & 1) == 0) {
      FUN_002ac750(param_1,0,2);
    }
    puVar19 = (uint *)(*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_bc +
                      iVar21 * iStack_c0);
    if (*(int *)(iVar24 + 0x14) == 8) {
      pbVar17 = (byte *)(*(int *)(iVar24 + 4) + *(int *)(iVar24 + 0x18) * iStack_ac +
                        iVar22 * uStack_b0);
      if ((*(byte *)(iVar24 + 0x23) & 0xf) == 1) {
        iVar24 = *(int *)(iVar24 + 8);
        uVar20 = uStack_b4 - 1;
        bVar1 = uStack_b4 != 0;
        uStack_b4 = uVar20;
        if (bVar1) {
          do {
            uVar20 = uStack_b8 - 1;
            if (uVar20 != 0xffffffff) {
              puVar15 = puVar19;
              pbVar11 = pbVar17;
              if ((~uVar20 & 1) != 0) {
                uVar20 = (uint)*pbVar17;
                uVar6 = *(ushort *)
                         ((uVar20 & 0xe7 | (uVar20 & 0x10) >> 1 | (uVar20 & 8) << 1) * 2 + iVar24);
                *puVar19 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                           (uVar6 & 0x1f) << 3;
                puVar19 = puVar19 + 1;
                pbVar17 = pbVar17 + 1;
                uVar20 = uStack_b8 - 2;
                puVar15 = puVar19;
                pbVar11 = pbVar17;
                if (uVar20 == 0xffffffff) goto LAB_002c53e0;
              }
              do {
                uVar7 = (uint)*pbVar11;
                uVar6 = *(ushort *)
                         ((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 2 + iVar24);
                *puVar15 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                           (uVar6 & 0x1f) << 3;
                uVar7 = (uint)pbVar11[1];
                uVar6 = *(ushort *)
                         ((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 2 + iVar24);
                puVar15[1] = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6
                             | (uVar6 & 0x1f) << 3;
                puVar19 = puVar19 + 2;
                uVar20 = uVar20 - 2;
                pbVar17 = pbVar17 + 2;
                puVar15 = puVar15 + 2;
                pbVar11 = pbVar11 + 2;
              } while (uVar20 != 0xffffffff);
            }
LAB_002c53e0:
            pbVar17 = pbVar17 + iVar25;
            puVar19 = puVar19 + iVar23;
            bVar1 = uStack_b4 != 0;
            uStack_b4 = uStack_b4 - 1;
          } while (bVar1);
          uStack_b4 = 0xffffffff;
        }
      }
      else {
        iVar24 = *(int *)(iVar24 + 8);
        uVar20 = uStack_b4 - 1;
        bVar1 = uStack_b4 != 0;
        uStack_b4 = uVar20;
        if (bVar1) {
          do {
            uVar20 = uStack_b8 - 1;
            puVar15 = puVar19;
            if (uVar20 != 0xffffffff) {
              uVar7 = ~uVar20 & 3;
              pbVar11 = pbVar17;
              if (uVar7 != 0) {
                if (uVar7 < 3) {
                  if (uVar7 < 2) {
                    uVar7 = (uint)*pbVar17;
                    pbVar17 = pbVar17 + 1;
                    uVar20 = uStack_b8 - 2;
                    *puVar19 = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4
                                        + iVar24);
                    puVar19 = puVar19 + 1;
                  }
                  uVar7 = (uint)*pbVar17;
                  pbVar17 = pbVar17 + 1;
                  uVar20 = uVar20 - 1;
                  *puVar19 = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4 +
                                      iVar24);
                  puVar19 = puVar19 + 1;
                }
                uVar7 = (uint)*pbVar17;
                puVar15 = puVar19 + 1;
                pbVar11 = pbVar17 + 1;
                pbVar17 = pbVar17 + 1;
                uVar20 = uVar20 - 1;
                *puVar19 = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4 +
                                    iVar24);
                puVar19 = puVar19 + 1;
                if (uVar20 == 0xffffffff) goto LAB_002c5610;
              }
              do {
                uVar7 = (uint)*pbVar11;
                puVar15 = puVar15 + 4;
                pbVar17 = pbVar17 + 4;
                uVar20 = uVar20 - 4;
                *puVar19 = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4 +
                                    iVar24);
                uVar7 = (uint)pbVar11[1];
                puVar19[1] = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4 +
                                      iVar24);
                uVar7 = (uint)pbVar11[2];
                puVar19[2] = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4 +
                                      iVar24);
                uVar7 = (uint)pbVar11[3];
                pbVar11 = pbVar11 + 4;
                puVar19[3] = *(uint *)((uVar7 & 0xe7 | (uVar7 & 0x10) >> 1 | (uVar7 & 8) << 1) * 4 +
                                      iVar24);
                puVar19 = puVar19 + 4;
              } while (uVar20 != 0xffffffff);
            }
LAB_002c5610:
            pbVar17 = pbVar17 + iVar25;
            puVar19 = puVar15 + iVar23;
            bVar1 = uStack_b4 != 0;
            uStack_b4 = uStack_b4 - 1;
          } while (bVar1);
          uStack_b4 = 0xffffffff;
        }
      }
    }
    else {
      pbVar17 = (byte *)(*(int *)(iVar24 + 4) + *(int *)(iVar24 + 0x18) * iStack_ac +
                        ((int)uStack_b0 >> 1));
      if ((*(byte *)(iVar24 + 0x23) & 0xf) == 1) {
        iVar24 = *(int *)(iVar24 + 8);
        uVar20 = uStack_b4 - 1;
        bVar1 = uStack_b4 != 0;
        pbVar11 = pbVar17;
        uStack_b4 = uVar20;
        if (bVar1) {
          do {
            uVar20 = uStack_b8;
            puVar15 = puVar19;
            pbVar18 = pbVar17;
            if ((uStack_b0 & 1) != 0) {
              uVar6 = *(ushort *)((uint)(*pbVar11 >> 4) * 2 + iVar24);
              *puVar19 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                         (uVar6 & 0x1f) << 3;
              puVar19 = puVar19 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar17 = pbVar17 + 1;
              uVar20 = uStack_b8 - 1;
              puVar15 = puVar19;
              pbVar18 = pbVar17;
            }
            for (; 1 < uVar20; uVar20 = uVar20 - 2) {
              uVar6 = *(ushort *)((*pbVar17 & 0xf) * 2 + iVar24);
              *puVar19 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                         (uVar6 & 0x1f) << 3;
              uVar6 = *(ushort *)((uint)(*pbVar17 >> 4) * 2 + iVar24);
              puVar19[1] = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                           (uVar6 & 0x1f) << 3;
              puVar19 = puVar19 + 2;
              pbVar17 = pbVar17 + 1;
              pbVar11 = pbVar11 + 1;
              puVar15 = puVar15 + 2;
              pbVar18 = pbVar18 + 1;
            }
            if (uVar20 != 0) {
              uVar6 = *(ushort *)((*pbVar11 & 0xf) * 2 + iVar24);
              *puVar15 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                         (uVar6 & 0x1f) << 3;
              puVar15 = puVar15 + 1;
            }
            puVar19 = puVar15 + iVar23;
            pbVar17 = pbVar18 + iVar25;
            bVar1 = uStack_b4 != 0;
            pbVar11 = pbVar11 + iVar25;
            uStack_b4 = uStack_b4 - 1;
          } while (bVar1);
          uStack_b4 = 0xffffffff;
        }
      }
      else {
        iVar24 = *(int *)(iVar24 + 8);
        pbVar11 = pbVar17;
        while (bVar1 = uStack_b4 != 0, uStack_b4 = uStack_b4 - 1, bVar1) {
          uVar20 = uStack_b8;
          if ((uStack_b0 & 1) != 0) {
            bVar3 = *pbVar17;
            pbVar11 = pbVar11 + 1;
            pbVar17 = pbVar17 + 1;
            uVar20 = uStack_b8 - 1;
            *puVar19 = *(uint *)((uint)(bVar3 >> 4) * 4 + iVar24);
            puVar19 = puVar19 + 1;
          }
          pbVar18 = pbVar11;
          if (1 < uVar20) {
            uVar7 = 1 - uVar20 & 3;
            if ((int)uVar20 < 2) {
LAB_002c58bc:
              pbVar18 = pbVar11 + 1;
              uVar20 = uVar20 - 2;
              pbVar17 = pbVar17 + 1;
              *puVar19 = *(uint *)((*pbVar11 & 0xf) * 4 + iVar24);
              puVar15 = puVar19 + 1;
              puVar19 = puVar19 + 2;
              *puVar15 = *(uint *)((uint)(*pbVar11 >> 4) * 4 + iVar24);
              puVar15 = puVar19;
              pbVar12 = pbVar18;
              pbVar11 = pbVar18;
              if (1 < uVar20) goto LAB_002c5918;
            }
            else {
              puVar15 = puVar19;
              pbVar12 = pbVar11;
              if (uVar7 == 0) {
                uVar7 = (uint)*pbVar11;
              }
              else {
                if (1 < uVar7) goto LAB_002c58bc;
                uVar7 = (uint)*pbVar11;
              }
              while( true ) {
                uVar20 = uVar20 - 4;
                puVar19 = puVar19 + 4;
                pbVar17 = pbVar17 + 2;
                pbVar18 = pbVar11 + 2;
                *puVar15 = *(uint *)((uVar7 & 0xf) * 4 + iVar24);
                puVar15[1] = *(uint *)((uint)(*pbVar12 >> 4) * 4 + iVar24);
                puVar15[2] = *(uint *)((pbVar12[1] & 0xf) * 4 + iVar24);
                puVar15[3] = *(uint *)((uint)(pbVar12[1] >> 4) * 4 + iVar24);
                puVar15 = puVar15 + 4;
                pbVar12 = pbVar12 + 2;
                pbVar11 = pbVar18;
                if (uVar20 < 2) break;
LAB_002c5918:
                uVar7 = (uint)*pbVar12;
              }
            }
          }
          if (uVar20 != 0) {
            *puVar19 = *(uint *)((*pbVar17 & 0xf) * 4 + iVar24);
            puVar19 = puVar19 + 1;
          }
          puVar19 = puVar19 + iVar23;
          pbVar17 = pbVar17 + iVar25;
          pbVar11 = pbVar18 + iVar25;
        }
      }
    }
joined_r0x002c59e0:
    if ((bVar2 & 1) != 0) {
      return 1;
    }
    FUN_002ac790(param_1);
    break;
  case 0x2a:
    puVar19 = (uint *)(*(int *)(DAT_0040e6c0 + 4) + *(int *)(DAT_0040e6c0 + 0x18) * iStack_bc +
                      iVar21 * iStack_c0);
    puVar16 = (ushort *)
              (*(int *)(iVar24 + 4) + *(int *)(iVar24 + 0x18) * iStack_ac + iVar22 * uStack_b0);
    if (uStack_b4 != 0) {
      do {
        uStack_b4 = uStack_b4 - 1;
        uVar20 = uStack_b8 - 1;
        if (uVar20 != 0xffffffff) {
          uVar7 = ~uVar20 & 3;
          puVar15 = puVar19;
          puVar14 = puVar16;
          if (uVar7 != 0) {
            if (uVar7 < 3) {
              if (uVar7 < 2) {
                uVar6 = *puVar16;
                *puVar19 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                           (uVar6 & 0x1f) << 3;
                puVar19 = puVar19 + 1;
                puVar16 = puVar16 + 1;
                uVar20 = uStack_b8 - 2;
                uVar6 = *puVar16;
              }
              else {
                uVar6 = *puVar16;
              }
              *puVar19 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                         (uVar6 & 0x1f) << 3;
              puVar19 = puVar19 + 1;
              puVar16 = puVar16 + 1;
              uVar20 = uVar20 - 1;
            }
            uVar6 = *puVar16;
            *puVar19 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                       (uVar6 & 0x1f) << 3;
            puVar15 = puVar19 + 1;
            puVar19 = puVar19 + 1;
            puVar14 = puVar16 + 1;
            uVar20 = uVar20 - 1;
            puVar16 = puVar16 + 1;
            if (uVar20 == 0xffffffff) goto LAB_002c5198;
          }
          do {
            uVar6 = *puVar14;
            *puVar15 = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                       (uVar6 & 0x1f) << 3;
            uVar6 = puVar14[1];
            puVar15[1] = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                         (uVar6 & 0x1f) << 3;
            uVar6 = puVar14[2];
            puVar15[2] = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                         (uVar6 & 0x1f) << 3;
            uVar6 = puVar14[3];
            puVar15[3] = (uVar6 & 0x8000) << 0x10 | (uVar6 & 0x7c00) << 9 | (uVar6 & 0x3e0) << 6 |
                         (uVar6 & 0x1f) << 3;
            puVar15 = puVar15 + 4;
            puVar19 = puVar19 + 4;
            puVar14 = puVar14 + 4;
            uVar20 = uVar20 - 4;
            puVar16 = puVar16 + 4;
          } while (uVar20 != 0xffffffff);
        }
LAB_002c5198:
        puVar16 = puVar16 + iVar25;
        puVar19 = puVar19 + iVar23;
        if (uStack_b4 == 0) {
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}


// ==== FUN_002c6570 @ 002c6570 ====

undefined4 FUN_002c6570(void)

{
  long lVar1;
  
  uGpffff8ed0 = 0;
  lVar1 = FUN_002ac468(0,0,0,0x80);
  uGpffff8ed8 = (undefined4)lVar1;
  if (lVar1 != 0) {
    lVar1 = FUN_002ac468(0,0,0,0x80);
    uGpffff8edc = (undefined4)lVar1;
    if (lVar1 != 0) {
      uGpffff8ee0 = 0;
      return 1;
    }
    FUN_002ac568(uGpffff8ed8);
    uGpffff8ed8 = 0;
  }
  return 0;
}


// ==== FUN_002c65e0 @ 002c65e0 ====

void FUN_002c65e0(void)

{
  if (iGpffff8ed8 != 0) {
    FUN_002ac568();
    iGpffff8ed8 = 0;
  }
  if (iGpffff8edc != 0) {
    FUN_002ac568();
    iGpffff8edc = 0;
  }
  return;
}


// ==== FUN_002c6620 @ 002c6620 ====

undefined8 FUN_002c6620(void)

{
  undefined8 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = 0;
  if (iGpffff8ed0 != 0) {
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_18 = *(undefined4 *)(iGpffff8ed0 + 0xc);
    uStack_14 = *(undefined4 *)(iGpffff8ed0 + 0x10);
    uVar1 = FUN_002c0d58(0,&uStack_20);
  }
  return uVar1;
}


// ==== FUN_002c66a0 @ 002c66a0 ====

undefined4 FUN_002c66a0(int param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 auStack_70 [8];
  int iStack_68;
  
  iVar4 = (int)param_2;
  uVar8 = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 4);
  uVar1 = *(undefined4 *)(iVar4 + 8);
  *(byte *)(param_1 + 0x20) = (byte)param_3 & 7;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(byte *)(param_1 + 0x21) = (byte)param_3 & 0xf8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  switch(uVar8) {
  case 0:
    *(char *)(param_1 + 0x23) = (char)((param_3 & 0xf00) >> 8);
    if ((int)(param_3 & 0xf00) >> 8 == 0) {
      *(undefined1 *)(param_1 + 0x23) = 1;
    }
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x23) = 0;
    break;
  case 2:
  case 5:
    uVar8 = 1;
    if (*(int *)(iGpffff87b0 + 8) == 0x20) {
      uVar8 = 5;
    }
    *(undefined1 *)(param_1 + 0x23) = uVar8;
    break;
  default:
    return 0;
  case 4:
    lVar5 = FUN_002d0a78(param_2);
    uVar6 = FUN_002a9838();
    FUN_002a9e88(auStack_70,uVar6);
    bVar7 = 5;
    if ((iStack_68 == 0x10) && (lVar5 != 3)) {
      bVar7 = 1;
    }
    if (*(int *)(iVar4 + 0xc) == 4) {
      bVar7 = bVar7 | 0x40;
    }
    else if (*(int *)(iVar4 + 0xc) == 8) {
      bVar7 = bVar7 | 0x20;
    }
    uVar1 = *(undefined4 *)(iVar4 + 4);
    *(byte *)(param_1 + 0x23) = bVar7 | (byte)(param_3 >> 8) & 0x90;
    uVar2 = FUN_002bfed0(uVar1);
    iVar3 = 1 << (uVar2 & 0x1f);
    *(int *)(param_1 + 0xc) = iVar3;
    if (0x400 < iVar3) {
      *(undefined4 *)(param_1 + 0xc) = 0x400;
    }
    uVar2 = FUN_002bfed0(*(undefined4 *)(iVar4 + 8));
    iVar4 = 1 << (uVar2 & 0x1f);
    *(int *)(param_1 + 0x10) = iVar4;
    if (0x400 < iVar4) {
      *(undefined4 *)(param_1 + 0x10) = 0x400;
    }
  }
  return 1;
}


// ==== FUN_002c6828 @ 002c6828 ====

/* WARNING: Removing unreachable block (ram,0x002c7194) */
/* WARNING: Removing unreachable block (ram,0x002c7108) */
/* WARNING: Removing unreachable block (ram,0x002c73bc) */
/* WARNING: Removing unreachable block (ram,0x002c7514) */
/* WARNING: Removing unreachable block (ram,0x002c6de8) */
/* WARNING: Removing unreachable block (ram,0x002c6ac8) */
/* WARNING: Removing unreachable block (ram,0x002c7154) */
/* WARNING: Removing unreachable block (ram,0x002c71dc) */
/* WARNING: Removing unreachable block (ram,0x002c6e48) */
/* WARNING: Removing unreachable block (ram,0x002c6b64) */
/* WARNING: Removing unreachable block (ram,0x002c6af8) */
/* WARNING: Removing unreachable block (ram,0x002c6b28) */
/* WARNING: Removing unreachable block (ram,0x002c6e18) */
/* WARNING: Removing unreachable block (ram,0x002c6e84) */

undefined4 FUN_002c6828(int param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined3 uVar5;
  ushort uVar6;
  byte bVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  ushort *puVar20;
  char *pcVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  ushort *puVar28;
  uint *puVar29;
  int iVar30;
  ushort *puVar31;
  byte *pbVar32;
  
  iVar30 = (int)param_2;
  bVar3 = (*(byte *)(iVar30 + 0x22) & 2) == 0;
  bVar4 = false;
  if ((bVar3) && (lVar8 = FUN_002ac750(param_2,0,2), lVar8 == 0)) {
    return 0;
  }
  if ((*(byte *)(iVar30 + 0x23) & 0x60) == 0) {
    iVar23 = *(int *)(param_1 + 0xc);
  }
  else {
    bVar4 = (*(byte *)(iVar30 + 0x22) & 8) != 0;
    if ((!bVar4) && (lVar8 = FUN_002ac7d0(param_2,2), lVar8 == 0)) {
      return 0;
    }
    iVar23 = *(int *)(param_1 + 0xc);
  }
  puVar31 = *(ushort **)(iVar30 + 4);
  pbVar32 = *(byte **)(param_1 + 0x14);
  pcVar14 = *(char **)(param_1 + 0x18);
  if (iVar23 == 8) {
    bVar1 = *(byte *)(iVar30 + 0x23);
    bVar7 = bVar1 & 0x60;
    if ((bVar1 & 0x60) == 0x20) {
      if ((bVar1 & 0xf) == 1) {
        iVar23 = *(int *)(iVar30 + 8);
        uVar24 = 0;
        pcVar16 = pcVar14;
        pcVar19 = pcVar14;
        pcVar21 = pcVar14;
        pcVar18 = pcVar14;
        do {
          uVar6 = *(ushort *)
                   ((uVar24 & 0xe7 | *(uint *)(&DAT_00403ca0 + ((int)uVar24 >> 1 & 0xc))) * 2 +
                   iVar23);
          pcVar16[2] = (byte)(uVar6 >> 7) & 0xf8;
          pcVar19[1] = (byte)(uVar6 >> 2) & 0xf8;
          *pcVar21 = (char)uVar6 << 3;
          if ((uVar6 & 0x8000) == 0) {
            pcVar14[3] = '\0';
          }
          else {
            pcVar18[3] = -1;
          }
          uVar6 = *(ushort *)
                   ((uVar24 + 1 & 0xe7 | *(uint *)(&DAT_00403ca0 + ((int)(uVar24 + 1) >> 1 & 0xc)))
                    * 2 + iVar23);
          pcVar16[6] = (byte)(uVar6 >> 7) & 0xf8;
          pcVar19[5] = (byte)(uVar6 >> 2) & 0xf8;
          pcVar21[4] = (char)uVar6 << 3;
          if ((uVar6 & 0x8000) == 0) {
            pcVar14[7] = '\0';
          }
          else {
            pcVar18[7] = -1;
          }
          uVar24 = uVar24 + 2;
          pcVar14 = pcVar14 + 8;
          pcVar18 = pcVar18 + 8;
          pcVar21 = pcVar21 + 8;
          pcVar19 = pcVar19 + 8;
          pcVar16 = pcVar16 + 8;
        } while ((int)uVar24 < 0x100);
        iVar23 = *(int *)(iVar30 + 0x10);
      }
      else if ((bVar1 & 0xf) == 5) {
        iVar23 = *(int *)(iVar30 + 8);
        uVar24 = 0;
        pcVar16 = pcVar14;
        pcVar19 = pcVar14;
        pcVar21 = pcVar14;
        do {
          uVar11 = uVar24 + 1;
          uVar13 = uVar24 + 2;
          uVar10 = *(uint *)((uVar24 & 0xe7 | *(uint *)(&DAT_00403ca0 + ((int)uVar24 >> 1 & 0xc))) *
                             4 + iVar23);
          uVar15 = uVar24 + 3;
          pcVar16[2] = (char)(uVar10 >> 0x10);
          pcVar19[1] = (char)(uVar10 >> 8);
          *pcVar21 = (char)uVar10;
          uVar2 = *(uint *)(&DAT_00403ca0 + ((int)uVar11 >> 1 & 0xc));
          uVar24 = uVar24 + 4;
          pcVar14[3] = (char)((int)(uVar10 & 0xff000000) / 0x808080);
          uVar10 = *(uint *)((uVar11 & 0xe7 | uVar2) * 4 + iVar23);
          pcVar16[6] = (char)(uVar10 >> 0x10);
          pcVar19[5] = (char)(uVar10 >> 8);
          pcVar21[4] = (char)uVar10;
          uVar2 = *(uint *)(&DAT_00403ca0 + ((int)uVar13 >> 1 & 0xc));
          pcVar14[7] = (char)((int)(uVar10 & 0xff000000) / 0x808080);
          uVar10 = *(uint *)((uVar13 & 0xe7 | uVar2) * 4 + iVar23);
          pcVar16[10] = (char)(uVar10 >> 0x10);
          pcVar19[9] = (char)(uVar10 >> 8);
          pcVar21[8] = (char)uVar10;
          uVar2 = *(uint *)(&DAT_00403ca0 + ((int)uVar15 >> 1 & 0xc));
          pcVar14[0xb] = (char)((int)(uVar10 & 0xff000000) / 0x808080);
          uVar10 = *(uint *)((uVar15 & 0xe7 | uVar2) * 4 + iVar23);
          pcVar16[0xe] = (char)(uVar10 >> 0x10);
          pcVar16 = pcVar16 + 0x10;
          pcVar19[0xd] = (char)(uVar10 >> 8);
          pcVar21[0xc] = (char)uVar10;
          pcVar19 = pcVar19 + 0x10;
          pcVar21 = pcVar21 + 0x10;
          pcVar14[0xf] = (char)((int)(uVar10 & 0xff000000) / 0x808080);
          pcVar14 = pcVar14 + 0x10;
        } while ((int)uVar24 < 0x100);
        iVar23 = *(int *)(iVar30 + 0x10);
      }
      else {
        iVar23 = *(int *)(iVar30 + 0x10);
      }
      iVar17 = 0;
      if (0 < iVar23) {
        do {
          iVar17 = iVar17 + 1;
          memcpy(pbVar32,puVar31,*(undefined4 *)(iVar30 + 0xc));
          pbVar32 = pbVar32 + *(int *)(param_1 + 0x10);
          puVar31 = (ushort *)((int)puVar31 + *(int *)(iVar30 + 0x18));
        } while (iVar17 < *(int *)(iVar30 + 0x10));
        bVar7 = *(byte *)(iVar30 + 0x23);
        goto LAB_002c76fc;
      }
    }
    else {
      if ((bVar1 & 0x60) != 0x40) goto joined_r0x002c7240;
      if ((bVar1 & 0xf) == 1) {
        puVar9 = *(ushort **)(iVar30 + 8);
        puVar28 = puVar9 + 0x10;
        puVar20 = puVar9;
        pcVar16 = pcVar14;
        pcVar19 = pcVar14;
        pcVar21 = pcVar14;
        pcVar18 = pcVar14;
        do {
          uVar6 = *puVar20;
          pcVar16[2] = (byte)(uVar6 >> 7) & 0xf8;
          pcVar19[1] = (byte)(uVar6 >> 2) & 0xf8;
          *pcVar21 = (char)uVar6 << 3;
          if ((uVar6 & 0x8000) == 0) {
            pcVar14[3] = '\0';
          }
          else {
            pcVar18[3] = -1;
          }
          uVar6 = puVar20[1];
          pcVar16[6] = (byte)(uVar6 >> 7) & 0xf8;
          pcVar19[5] = (byte)(uVar6 >> 2) & 0xf8;
          pcVar21[4] = (char)uVar6 << 3;
          if ((uVar6 & 0x8000) == 0) {
            pcVar14[7] = '\0';
          }
          else {
            pcVar18[7] = -1;
          }
          uVar6 = puVar20[2];
          pcVar16[10] = (byte)(uVar6 >> 7) & 0xf8;
          pcVar19[9] = (byte)(uVar6 >> 2) & 0xf8;
          pcVar21[8] = (char)uVar6 << 3;
          if ((uVar6 & 0x8000) == 0) {
            pcVar14[0xb] = '\0';
          }
          else {
            pcVar18[0xb] = -1;
          }
          uVar6 = puVar20[3];
          pcVar16[0xe] = (byte)(uVar6 >> 7) & 0xf8;
          pcVar19[0xd] = (byte)(uVar6 >> 2) & 0xf8;
          pcVar21[0xc] = (char)uVar6 << 3;
          if ((uVar6 & 0x8000) == 0) {
            pcVar14[0xf] = '\0';
          }
          else {
            pcVar18[0xf] = -1;
          }
          puVar9 = puVar9 + 4;
          pcVar14 = pcVar14 + 0x10;
          pcVar18 = pcVar18 + 0x10;
          pcVar21 = pcVar21 + 0x10;
          pcVar19 = pcVar19 + 0x10;
          pcVar16 = pcVar16 + 0x10;
          puVar20 = puVar20 + 4;
        } while ((int)puVar9 < (int)puVar28);
        iVar23 = *(int *)(iVar30 + 0x10);
      }
      else if ((bVar1 & 0xf) == 5) {
        puVar27 = *(uint **)(iVar30 + 8);
        puVar29 = puVar27 + 0x10;
        puVar22 = puVar27;
        pcVar16 = pcVar14;
        pcVar19 = pcVar14;
        pcVar21 = pcVar14;
        do {
          uVar24 = *puVar22;
          puVar27 = puVar27 + 4;
          pcVar16[2] = (char)(uVar24 >> 0x10);
          pcVar19[1] = (char)(uVar24 >> 8);
          *pcVar21 = (char)uVar24;
          pcVar14[3] = (char)((int)(uVar24 & 0xff000000) / 0x808080);
          uVar24 = puVar22[1];
          pcVar16[6] = (char)(uVar24 >> 0x10);
          pcVar19[5] = (char)(uVar24 >> 8);
          pcVar21[4] = (char)uVar24;
          pcVar14[7] = (char)((int)(uVar24 & 0xff000000) / 0x808080);
          uVar24 = puVar22[2];
          pcVar16[10] = (char)(uVar24 >> 0x10);
          pcVar19[9] = (char)(uVar24 >> 8);
          pcVar21[8] = (char)uVar24;
          pcVar14[0xb] = (char)((int)(uVar24 & 0xff000000) / 0x808080);
          uVar24 = puVar22[3];
          puVar22 = puVar22 + 4;
          pcVar16[0xe] = (char)(uVar24 >> 0x10);
          pcVar16 = pcVar16 + 0x10;
          pcVar19[0xd] = (char)(uVar24 >> 8);
          pcVar21[0xc] = (char)uVar24;
          pcVar19 = pcVar19 + 0x10;
          pcVar21 = pcVar21 + 0x10;
          pcVar14[0xf] = (char)((int)(uVar24 & 0xff000000) / 0x808080);
          pcVar14 = pcVar14 + 0x10;
        } while ((int)puVar27 < (int)puVar29);
        iVar23 = *(int *)(iVar30 + 0x10);
      }
      else {
        iVar23 = *(int *)(iVar30 + 0x10);
      }
      iVar17 = 0;
      if (0 < iVar23) {
        do {
          iVar17 = iVar17 + 1;
          iVar23 = 0;
          puVar9 = puVar31;
          pbVar12 = pbVar32;
          if (0 < *(int *)(iVar30 + 0xc)) {
            do {
              if ((iVar23 + *(short *)(iVar30 + 0x1c) & 1U) == 0) {
                bVar7 = (byte)*puVar9 & 0xf;
              }
              else {
                uVar6 = *puVar9;
                puVar9 = (ushort *)((int)puVar9 + 1);
                bVar7 = (byte)uVar6 >> 4;
              }
              *pbVar12 = bVar7;
              iVar23 = iVar23 + 1;
              pbVar12 = pbVar12 + 1;
            } while (iVar23 < *(int *)(iVar30 + 0xc));
          }
          pbVar32 = pbVar32 + *(int *)(param_1 + 0x10);
          puVar31 = (ushort *)((int)puVar31 + *(int *)(iVar30 + 0x18));
        } while (iVar17 < *(int *)(iVar30 + 0x10));
        bVar7 = *(byte *)(iVar30 + 0x23);
        goto LAB_002c76fc;
      }
    }
  }
  else if (iVar23 < 9) {
    if (iVar23 != 4) {
      bVar7 = *(byte *)(iVar30 + 0x23);
LAB_002c76c4:
      bVar7 = bVar7 & 0x60;
joined_r0x002c7240:
      if ((bVar7 != 0) && (!bVar4)) {
        FUN_002ac808(param_2);
      }
      if (!bVar3) {
        return 0;
      }
      FUN_002ac790(param_2);
      return 0;
    }
    bVar7 = *(byte *)(iVar30 + 0x23);
    if ((bVar7 & 0x40) == 0) {
      bVar7 = bVar7 & 0x60;
      goto joined_r0x002c7240;
    }
    if ((bVar7 & 0xf) == 1) {
      puVar9 = *(ushort **)(iVar30 + 8);
      puVar28 = puVar9 + 0x10;
      puVar20 = puVar9;
      pcVar16 = pcVar14;
      pcVar19 = pcVar14;
      pcVar21 = pcVar14;
      pcVar18 = pcVar14;
      do {
        uVar6 = *puVar20;
        pcVar16[2] = (byte)(uVar6 >> 7) & 0xf8;
        pcVar19[1] = (byte)(uVar6 >> 2) & 0xf8;
        *pcVar21 = (char)uVar6 << 3;
        if ((uVar6 & 0x8000) == 0) {
          pcVar14[3] = '\0';
        }
        else {
          pcVar18[3] = -1;
        }
        uVar6 = puVar20[1];
        pcVar16[6] = (byte)(uVar6 >> 7) & 0xf8;
        pcVar19[5] = (byte)(uVar6 >> 2) & 0xf8;
        pcVar21[4] = (char)uVar6 << 3;
        if ((uVar6 & 0x8000) == 0) {
          pcVar14[7] = '\0';
        }
        else {
          pcVar18[7] = -1;
        }
        uVar6 = puVar20[2];
        pcVar16[10] = (byte)(uVar6 >> 7) & 0xf8;
        pcVar19[9] = (byte)(uVar6 >> 2) & 0xf8;
        pcVar21[8] = (char)uVar6 << 3;
        if ((uVar6 & 0x8000) == 0) {
          pcVar14[0xb] = '\0';
        }
        else {
          pcVar18[0xb] = -1;
        }
        uVar6 = puVar20[3];
        pcVar16[0xe] = (byte)(uVar6 >> 7) & 0xf8;
        pcVar19[0xd] = (byte)(uVar6 >> 2) & 0xf8;
        pcVar21[0xc] = (char)uVar6 << 3;
        if ((uVar6 & 0x8000) == 0) {
          pcVar14[0xf] = '\0';
        }
        else {
          pcVar18[0xf] = -1;
        }
        puVar9 = puVar9 + 4;
        pcVar14 = pcVar14 + 0x10;
        pcVar18 = pcVar18 + 0x10;
        pcVar21 = pcVar21 + 0x10;
        pcVar19 = pcVar19 + 0x10;
        pcVar16 = pcVar16 + 0x10;
        puVar20 = puVar20 + 4;
      } while ((int)puVar9 < (int)puVar28);
      iVar23 = *(int *)(iVar30 + 0x10);
    }
    else if ((bVar7 & 0xf) == 5) {
      puVar27 = *(uint **)(iVar30 + 8);
      puVar29 = puVar27 + 0x10;
      puVar22 = puVar27;
      pcVar16 = pcVar14;
      pcVar19 = pcVar14;
      pcVar21 = pcVar14;
      do {
        uVar24 = *puVar22;
        puVar27 = puVar27 + 4;
        pcVar16[2] = (char)(uVar24 >> 0x10);
        pcVar19[1] = (char)(uVar24 >> 8);
        *pcVar21 = (char)uVar24;
        pcVar14[3] = (char)((int)(uVar24 & 0xff000000) / 0x808080);
        uVar24 = puVar22[1];
        pcVar16[6] = (char)(uVar24 >> 0x10);
        pcVar19[5] = (char)(uVar24 >> 8);
        pcVar21[4] = (char)uVar24;
        pcVar14[7] = (char)((int)(uVar24 & 0xff000000) / 0x808080);
        uVar24 = puVar22[2];
        pcVar16[10] = (char)(uVar24 >> 0x10);
        pcVar19[9] = (char)(uVar24 >> 8);
        pcVar21[8] = (char)uVar24;
        pcVar14[0xb] = (char)((int)(uVar24 & 0xff000000) / 0x808080);
        uVar24 = puVar22[3];
        puVar22 = puVar22 + 4;
        pcVar16[0xe] = (char)(uVar24 >> 0x10);
        pcVar16 = pcVar16 + 0x10;
        pcVar19[0xd] = (char)(uVar24 >> 8);
        pcVar21[0xc] = (char)uVar24;
        pcVar19 = pcVar19 + 0x10;
        pcVar21 = pcVar21 + 0x10;
        pcVar14[0xf] = (char)((int)(uVar24 & 0xff000000) / 0x808080);
        pcVar14 = pcVar14 + 0x10;
      } while ((int)puVar27 < (int)puVar29);
      iVar23 = *(int *)(iVar30 + 0x10);
    }
    else {
      iVar23 = *(int *)(iVar30 + 0x10);
    }
    iVar17 = 0;
    if (0 < iVar23) {
      do {
        iVar17 = iVar17 + 1;
        iVar23 = 0;
        puVar9 = puVar31;
        pbVar12 = pbVar32;
        if (0 < *(int *)(iVar30 + 0xc)) {
          do {
            if ((iVar23 + *(short *)(iVar30 + 0x1c) & 1U) == 0) {
              bVar7 = (byte)*puVar9 & 0xf;
            }
            else {
              uVar6 = *puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              bVar7 = (byte)uVar6 >> 4;
            }
            *pbVar12 = bVar7;
            iVar23 = iVar23 + 1;
            pbVar12 = pbVar12 + 1;
          } while (iVar23 < *(int *)(iVar30 + 0xc));
        }
        pbVar32 = pbVar32 + *(int *)(param_1 + 0x10);
        puVar31 = (ushort *)((int)puVar31 + *(int *)(iVar30 + 0x18));
      } while (iVar17 < *(int *)(iVar30 + 0x10));
      bVar7 = *(byte *)(iVar30 + 0x23);
      goto LAB_002c76fc;
    }
  }
  else {
    if (iVar23 != 0x20) {
      bVar7 = *(byte *)(iVar30 + 0x23);
      goto LAB_002c76c4;
    }
    iVar23 = *(int *)(iVar30 + 0x10);
    iVar17 = 0;
    bVar7 = *(byte *)(iVar30 + 0x23);
    if (0 < iVar23) {
      do {
        switch(bVar7 & 0x6f) {
        case 0:
        case 1:
          iVar26 = 0;
          puVar9 = puVar31;
          pbVar12 = pbVar32;
          if (0 < *(int *)(iVar30 + 0xc)) {
            do {
              uVar6 = *puVar9;
              pbVar12[2] = (byte)(uVar6 >> 7) & 0xf8;
              pbVar12[1] = (byte)(uVar6 >> 2) & 0xf8;
              *pbVar12 = (char)uVar6 << 3;
              if ((uVar6 & 0x8000) == 0) {
                pbVar12[3] = 0;
              }
              else {
                pbVar12[3] = 0xff;
              }
              iVar26 = iVar26 + 1;
              puVar9 = puVar9 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar26 < *(int *)(iVar30 + 0xc));
            bVar7 = *(byte *)(iVar30 + 0x23);
LAB_002c7628:
            iVar23 = *(int *)(iVar30 + 0x10);
          }
          break;
        default:
          bVar7 = bVar7 & 0x60;
          goto joined_r0x002c7240;
        case 5:
          iVar26 = *(int *)(iVar30 + 0xc);
          if (iVar26 < 1) break;
          uVar24 = -iVar26 & 3;
          if (uVar24 == 0) {
code_r0x002c7688:
            do {
              iVar26 = iVar26 + -4;
            } while (iVar26 != 0);
            iVar26 = *(int *)(param_1 + 0x10);
          }
          else {
            if (uVar24 < 3) {
              if (uVar24 < 2) {
                iVar26 = iVar26 + -1;
              }
              iVar26 = iVar26 + -1;
            }
            iVar26 = iVar26 + -1;
            if (iVar26 != 0) goto code_r0x002c7688;
            iVar26 = *(int *)(param_1 + 0x10);
          }
          goto LAB_002c76a4;
        case 6:
          iVar26 = 0;
          puVar9 = puVar31;
          pbVar12 = pbVar32;
          if (0 < *(int *)(iVar30 + 0xc)) {
            do {
              iVar26 = iVar26 + 1;
              uVar6 = *puVar9;
              uVar5 = *(undefined3 *)puVar9;
              pbVar12[3] = 0xff;
              pbVar12[1] = (byte)((uint3)uVar5 >> 8);
              pbVar12[2] = (byte)((uint3)uVar5 >> 0x10);
              *pbVar12 = (byte)uVar6;
              puVar9 = (ushort *)((int)puVar9 + 3);
              pbVar12 = pbVar12 + 4;
            } while (iVar26 < *(int *)(iVar30 + 0xc));
            bVar7 = *(byte *)(iVar30 + 0x23);
            goto LAB_002c7628;
          }
          break;
        case 0x20:
        case 0x21:
          iVar26 = *(int *)(iVar30 + 8);
          iVar25 = 0;
          puVar9 = puVar31;
          pbVar12 = pbVar32;
          if (0 < *(int *)(iVar30 + 0xc)) {
            do {
              uVar6 = *(ushort *)
                       (((byte)*puVar9 & 0xe7 |
                        *(uint *)(&DAT_00403ca0 + ((byte)((byte)*puVar9 >> 1) & 0xc))) * 2 + iVar26)
              ;
              pbVar12[2] = (byte)(uVar6 >> 7) & 0xf8;
              pbVar12[1] = (byte)(uVar6 >> 2) & 0xf8;
              *pbVar12 = (char)uVar6 << 3;
              if ((uVar6 & 0x8000) == 0) {
                pbVar12[3] = 0;
              }
              else {
                pbVar12[3] = 0xff;
              }
              iVar25 = iVar25 + 1;
              puVar9 = (ushort *)((int)puVar9 + 1);
              pbVar12 = pbVar12 + 4;
            } while (iVar25 < *(int *)(iVar30 + 0xc));
            bVar7 = *(byte *)(iVar30 + 0x23);
            goto LAB_002c7628;
          }
          break;
        case 0x25:
          iVar26 = *(int *)(iVar30 + 8);
          iVar25 = 0;
          puVar9 = puVar31;
          pbVar12 = pbVar32;
          if (0 < *(int *)(iVar30 + 0xc)) {
            do {
              iVar25 = iVar25 + 1;
              uVar24 = *(uint *)(((byte)*puVar9 & 0xe7 |
                                 *(uint *)(&DAT_00403ca0 + ((byte)((byte)*puVar9 >> 1) & 0xc))) * 4
                                + iVar26);
              pbVar12[1] = (byte)(uVar24 >> 8);
              pbVar12[2] = (byte)(uVar24 >> 0x10);
              *pbVar12 = (byte)uVar24;
              pbVar12[3] = (byte)((int)(uVar24 & 0xff000000) / 0x808080);
              puVar9 = (ushort *)((int)puVar9 + 1);
              pbVar12 = pbVar12 + 4;
            } while (iVar25 < *(int *)(iVar30 + 0xc));
            bVar7 = *(byte *)(iVar30 + 0x23);
            goto LAB_002c7628;
          }
          break;
        case 0x40:
        case 0x41:
          iVar26 = *(int *)(iVar30 + 8);
          iVar25 = 0;
          if (0 < *(int *)(iVar30 + 0xc)) {
            uVar24 = (uint)*(short *)(iVar30 + 0x1c);
            puVar9 = puVar31;
            pbVar12 = pbVar32;
            do {
              if ((uVar24 & 1) == 0) {
                uVar10 = (byte)*puVar9 & 0xf;
              }
              else {
                uVar6 = *puVar9;
                puVar9 = (ushort *)((int)puVar9 + 1);
                uVar10 = (uint)(byte)((byte)uVar6 >> 4);
              }
              uVar6 = *(ushort *)(uVar10 * 2 + iVar26);
              pbVar12[2] = (byte)(uVar6 >> 7) & 0xf8;
              pbVar12[1] = (byte)(uVar6 >> 2) & 0xf8;
              *pbVar12 = (char)uVar6 << 3;
              if ((uVar6 & 0x8000) == 0) {
                pbVar12[3] = 0;
              }
              else {
                pbVar12[3] = 0xff;
              }
              iVar25 = iVar25 + 1;
              pbVar12 = pbVar12 + 4;
              uVar24 = uVar24 + 1;
            } while (iVar25 < *(int *)(iVar30 + 0xc));
            bVar7 = *(byte *)(iVar30 + 0x23);
            goto LAB_002c7628;
          }
          break;
        case 0x45:
          iVar26 = *(int *)(iVar30 + 8);
          iVar25 = 0;
          puVar9 = puVar31;
          pbVar12 = pbVar32;
          if (0 < *(int *)(iVar30 + 0xc)) {
            do {
              if ((iVar25 + *(short *)(iVar30 + 0x1c) & 1U) == 0) {
                uVar24 = (byte)*puVar9 & 0xf;
              }
              else {
                uVar6 = *puVar9;
                puVar9 = (ushort *)((int)puVar9 + 1);
                uVar24 = (uint)(byte)((byte)uVar6 >> 4);
              }
              iVar25 = iVar25 + 1;
              uVar24 = *(uint *)(uVar24 * 4 + iVar26);
              pbVar12[1] = (byte)(uVar24 >> 8);
              pbVar12[2] = (byte)(uVar24 >> 0x10);
              *pbVar12 = (byte)uVar24;
              pbVar12[3] = (byte)((int)(uVar24 & 0xff000000) / 0x808080);
              pbVar12 = pbVar12 + 4;
            } while (iVar25 < *(int *)(iVar30 + 0xc));
            bVar7 = *(byte *)(iVar30 + 0x23);
            goto LAB_002c7628;
          }
        }
        iVar26 = *(int *)(param_1 + 0x10);
LAB_002c76a4:
        iVar17 = iVar17 + 1;
        pbVar32 = pbVar32 + iVar26;
        puVar31 = (ushort *)((int)puVar31 + *(int *)(iVar30 + 0x18));
      } while (iVar17 < iVar23);
      bVar7 = *(byte *)(iVar30 + 0x23);
      goto LAB_002c76fc;
    }
  }
  bVar7 = *(byte *)(iVar30 + 0x23);
LAB_002c76fc:
  if (((bVar7 & 0x60) != 0) && (!bVar4)) {
    FUN_002ac808(param_2);
  }
  if (bVar3) {
    FUN_002ac790(param_2);
  }
  return 1;
}


// ==== FUN_002c7760 @ 002c7760 ====

void FUN_002c7760(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  ushort *puVar24;
  
  switch(*(byte *)(param_1 + 0x23) & 0x6f) {
  case 0x20:
  case 0x21:
    puVar24 = *(ushort **)(param_1 + 8);
    uVar18 = 0;
    do {
      pbVar17 = param_2 + (uVar18 & 0xe7 | *(uint *)(&DAT_00403ca0 + ((int)uVar18 >> 1 & 0xc))) * 4;
      pbVar19 = param_2 + (uVar18 + 1 & 0xe7 |
                          *(uint *)(&DAT_00403ca0 + ((int)(uVar18 + 1) >> 1 & 0xc))) * 4;
      uVar18 = uVar18 + 2;
      bVar7 = pbVar19[2];
      bVar8 = pbVar19[1];
      bVar9 = pbVar19[3];
      bVar10 = *pbVar19;
      *puVar24 = (ushort)(*pbVar17 >> 3) | (pbVar17[2] & 0xf8) << 7 | (pbVar17[1] & 0xf8) << 2 |
                 (pbVar17[3] & 0x80) << 8;
      puVar24[1] = (ushort)(bVar10 >> 3) | (bVar7 & 0xf8) << 7 | (bVar8 & 0xf8) << 2 |
                   (bVar9 & 0x80) << 8;
      puVar24 = puVar24 + 2;
    } while ((int)uVar18 < 0x100);
    FUN_003680a0(*(int *)(param_1 + 8),*(int *)(param_1 + 8) + 0x27f);
    break;
  case 0x25:
    puVar21 = *(uint **)(param_1 + 8);
    uVar18 = 0;
    do {
      uVar15 = (int)uVar18 >> 1;
      uVar16 = uVar18 + 1;
      uVar14 = uVar18 & 0xe7;
      uVar18 = uVar18 + 2;
      pbVar17 = param_2 + (uVar14 | *(uint *)(&DAT_00403ca0 + (uVar15 & 0xc))) * 4;
      pbVar19 = param_2 + (uVar16 & 0xe7 | *(uint *)(&DAT_00403ca0 + ((int)uVar16 >> 1 & 0xc))) * 4;
      bVar7 = pbVar19[2];
      bVar8 = pbVar19[1];
      *puVar21 = (uint)pbVar17[2] << 0x10 | (uint)pbVar17[1] << 8 | (uint)*pbVar17 |
                 (uint)pbVar17[3] * 0x808081 & 0xff000000;
      puVar21[1] = (uint)bVar7 << 0x10 | (uint)bVar8 << 8 | (uint)*pbVar19 |
                   (uint)pbVar19[3] * 0x808081 & 0xff000000;
      puVar21 = puVar21 + 2;
    } while ((int)uVar18 < 0x100);
    FUN_003680a0(*(int *)(param_1 + 8),*(int *)(param_1 + 8) + 0x47f);
  default:
    break;
  case 0x40:
  case 0x41:
    puVar24 = *(ushort **)(param_1 + 8);
    pbVar22 = param_2 + 0x40;
    pbVar17 = param_2;
    pbVar19 = param_2;
    pbVar20 = param_2;
    pbVar23 = param_2;
    do {
      param_2 = param_2 + 0x10;
      bVar7 = pbVar20[6];
      bVar8 = pbVar23[5];
      bVar9 = pbVar20[10];
      bVar10 = pbVar23[9];
      bVar11 = pbVar20[0xe];
      bVar12 = pbVar23[0xd];
      bVar13 = pbVar17[4];
      bVar2 = pbVar19[7];
      bVar3 = pbVar17[8];
      bVar4 = pbVar19[0xb];
      bVar5 = pbVar17[0xc];
      bVar6 = pbVar19[0xf];
      *puVar24 = (ushort)(*pbVar17 >> 3) | (pbVar20[2] & 0xf8) << 7 | (pbVar23[1] & 0xf8) << 2 |
                 (pbVar19[3] & 0x80) << 8;
      pbVar19 = pbVar19 + 0x10;
      puVar24[1] = (ushort)(bVar13 >> 3) | (bVar7 & 0xf8) << 7 | (bVar8 & 0xf8) << 2 |
                   (bVar2 & 0x80) << 8;
      pbVar17 = pbVar17 + 0x10;
      puVar24[2] = (ushort)(bVar3 >> 3) | (bVar9 & 0xf8) << 7 | (bVar10 & 0xf8) << 2 |
                   (bVar4 & 0x80) << 8;
      pbVar23 = pbVar23 + 0x10;
      puVar24[3] = (ushort)(bVar5 >> 3) | (bVar11 & 0xf8) << 7 | (bVar12 & 0xf8) << 2 |
                   (bVar6 & 0x80) << 8;
      pbVar20 = pbVar20 + 0x10;
      puVar24 = puVar24 + 4;
    } while ((int)param_2 < (int)pbVar22);
    FUN_003680a0(*(int *)(param_1 + 8),*(int *)(param_1 + 8) + 0x9f);
    break;
  case 0x45:
    puVar21 = *(uint **)(param_1 + 8);
    pbVar22 = param_2 + 0x40;
    pbVar17 = param_2;
    pbVar19 = param_2;
    pbVar20 = param_2;
    pbVar23 = param_2;
    do {
      pbVar23 = pbVar23 + 0x10;
      bVar7 = param_2[6];
      bVar8 = pbVar17[5];
      *puVar21 = (uint)param_2[2] << 0x10 | (uint)pbVar17[1] << 8 | (uint)*pbVar19 |
                 (uint)pbVar20[3] * 0x808081 & 0xff000000;
      bVar9 = param_2[10];
      bVar10 = pbVar17[9];
      bVar11 = pbVar19[8];
      bVar12 = param_2[0xe];
      bVar13 = pbVar17[0xd];
      puVar21[1] = (uint)bVar7 << 0x10 | (uint)bVar8 << 8 | (uint)pbVar19[4] |
                   (uint)pbVar20[7] * 0x808081 & 0xff000000;
      bVar7 = pbVar19[0xc];
      pbVar19 = pbVar19 + 0x10;
      pbVar17 = pbVar17 + 0x10;
      param_2 = param_2 + 0x10;
      puVar21[2] = (uint)bVar9 << 0x10 | (uint)bVar10 << 8 | (uint)bVar11 |
                   (uint)pbVar20[0xb] * 0x808081 & 0xff000000;
      pbVar1 = pbVar20 + 0xf;
      pbVar20 = pbVar20 + 0x10;
      puVar21[3] = (uint)bVar12 << 0x10 | (uint)bVar13 << 8 | (uint)bVar7 |
                   (uint)*pbVar1 * 0x808081 & 0xff000000;
      puVar21 = puVar21 + 4;
    } while ((int)pbVar23 < (int)pbVar22);
    FUN_003680a0(*(int *)(param_1 + 8),*(int *)(param_1 + 8) + 0xbf);
  }
  return;
}


// ==== FUN_002c7c20 @ 002c7c20 ====

bool FUN_002c7c20(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_88a0 [16400];
  undefined1 auStack_4890 [1024];
  undefined1 auStack_4490 [16400];
  undefined1 auStack_480 [1024];
  
  bVar13 = true;
  iVar12 = (int)param_1;
  iVar10 = (int)param_2;
  uVar1 = *(undefined4 *)(iVar10 + 0x18);
  bVar4 = *(byte *)(iVar12 + 0x23) & 0x60;
  pbVar11 = *(byte **)(iVar12 + 4);
  pbVar9 = *(byte **)(iVar10 + 0x14);
  if (bVar4 == 0x20) {
    iVar8 = *(int *)(iVar10 + 0xc);
    if (iVar8 == 8) {
      iVar8 = 0;
      FUN_002c7760(param_1,uVar1);
      if (0 < *(int *)(iVar10 + 8)) {
        do {
          iVar8 = iVar8 + 1;
          memcpy(pbVar11,pbVar9,*(undefined4 *)(iVar10 + 4));
          pbVar9 = pbVar9 + *(int *)(iVar10 + 0x10);
          pbVar11 = pbVar11 + *(int *)(iVar12 + 0x18);
        } while (iVar8 < *(int *)(iVar10 + 8));
      }
    }
    else if (iVar8 < 9) {
      if (iVar8 == 4) {
        iVar8 = 0;
        FUN_002c7760(param_1,uVar1);
        if (0 < *(int *)(iVar10 + 8)) {
          do {
            iVar8 = iVar8 + 1;
            memcpy(pbVar11,pbVar9,*(undefined4 *)(iVar10 + 4));
            pbVar9 = pbVar9 + *(int *)(iVar10 + 0x10);
            pbVar11 = pbVar11 + *(int *)(iVar12 + 0x18);
          } while (iVar8 < *(int *)(iVar10 + 8));
        }
      }
      else {
        bVar13 = false;
      }
    }
    else if (iVar8 == 0x20) {
      uVar2 = *(uint *)(iVar12 + 0x14);
      lVar3 = FUN_002b1e68(auStack_4490);
      bVar13 = lVar3 != 0;
      if (bVar13) {
        FUN_002afdb0(0x3f800000,auStack_4490,param_2);
        FUN_002b0da0(auStack_480,1 << (uVar2 & 0x1f),auStack_4490);
        iVar10 = *(int *)(iVar12 + 4);
        FUN_002b17c8(iVar10,*(undefined4 *)(iVar12 + 0x18),*(undefined4 *)(iVar12 + 0x14),1,
                     auStack_4490,param_2);
        FUN_003680a0(iVar10,*(int *)(iVar12 + 0x18) * *(int *)(iVar12 + 0x10) + iVar10 + 0x7f);
        FUN_002c7760(param_1,auStack_480);
        FUN_002b1f90(auStack_4490);
      }
    }
    else {
      bVar13 = false;
    }
  }
  else if (bVar4 == 0x40) {
    iVar8 = *(int *)(iVar10 + 0xc);
    if (iVar8 != 8) {
      if (iVar8 < 9) {
        if (iVar8 != 4) {
          return false;
        }
        iVar8 = 0;
        FUN_002c7760(param_1,uVar1);
        if (*(int *)(iVar10 + 8) < 1) {
          return true;
        }
        do {
          iVar8 = iVar8 + 1;
          iVar7 = 0;
          pbVar5 = pbVar11;
          pbVar6 = pbVar9;
          if (0 < *(int *)(iVar10 + 4)) {
            do {
              if ((iVar7 + *(short *)(iVar12 + 0x1c) & 1U) == 0) {
                bVar4 = *pbVar5 & 0xf0;
                *pbVar5 = bVar4;
                *pbVar5 = bVar4 | *pbVar6 & 0xf;
              }
              else {
                *pbVar5 = *pbVar5 & 0xf | *pbVar6 << 4;
                pbVar5 = pbVar5 + 1;
              }
              iVar7 = iVar7 + 1;
              pbVar6 = pbVar6 + 1;
            } while (iVar7 < *(int *)(iVar10 + 4));
          }
          pbVar9 = pbVar9 + *(int *)(iVar10 + 0x10);
          pbVar11 = pbVar11 + *(int *)(iVar12 + 0x18);
        } while (iVar8 < *(int *)(iVar10 + 8));
        return true;
      }
      if (iVar8 != 0x20) {
        return false;
      }
    }
    uVar2 = *(uint *)(iVar12 + 0x14);
    lVar3 = FUN_002b1e68(auStack_88a0);
    bVar13 = lVar3 != 0;
    if (bVar13) {
      FUN_002afdb0(0x3f800000,auStack_88a0,param_2);
      FUN_002b0da0(auStack_4890,1 << (uVar2 & 0x1f),auStack_88a0);
      iVar10 = *(int *)(iVar12 + 4);
      FUN_002b17c8(iVar10,*(undefined4 *)(iVar12 + 0x18),*(undefined4 *)(iVar12 + 0x14),1,
                   auStack_88a0,param_2);
      FUN_003680a0(iVar10,*(int *)(iVar12 + 0x18) * *(int *)(iVar12 + 0x10) + iVar10 + 0x7f);
      FUN_002c7760(param_1,auStack_4890);
      FUN_002b1f90(auStack_88a0);
    }
  }
  else {
    bVar13 = false;
  }
  return bVar13;
}


// ==== FUN_002c7fb0 @ 002c7fb0 ====

undefined4 FUN_002c7fb0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar4 = *(int *)(param_2 + 0xc);
  puVar8 = *(uint **)(param_1 + 4);
  pbVar9 = *(byte **)(param_2 + 0x14);
  if (iVar4 != 8) {
    if (8 < iVar4) {
      if (iVar4 != 0x20) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0x10);
      iVar10 = 0;
      if (iVar4 < 1) {
        return 1;
      }
      do {
        bVar3 = *(byte *)(param_1 + 0x23) & 0x6f;
        if (bVar3 == 5) {
          iVar5 = 0;
          pbVar7 = pbVar9;
          puVar6 = puVar8;
          if (0 < *(int *)(param_1 + 0xc)) {
            do {
              iVar5 = iVar5 + 1;
              *puVar6 = (uint)pbVar7[2] << 0x10 | (uint)pbVar7[1] << 8 | (uint)*pbVar7 |
                        (uint)pbVar7[3] * 0x808081 & 0xff000000;
              pbVar7 = pbVar7 + 4;
              puVar6 = puVar6 + 1;
            } while (iVar5 < *(int *)(param_1 + 0xc));
            iVar4 = *(int *)(param_1 + 0x10);
          }
        }
        else if (bVar3 < 6) {
          if (1 < bVar3) {
            return 0;
          }
          iVar5 = 0;
          pbVar7 = pbVar9;
          puVar6 = puVar8;
          if (0 < *(int *)(param_1 + 0xc)) {
            do {
              iVar5 = iVar5 + 1;
              *(ushort *)puVar6 =
                   (ushort)(*pbVar7 >> 3) | (pbVar7[2] & 0xf8) << 7 | (pbVar7[1] & 0xf8) << 2 |
                   (pbVar7[3] & 0x80) << 8;
              pbVar7 = pbVar7 + 4;
              puVar6 = (uint *)((int)puVar6 + 2);
            } while (iVar5 < *(int *)(param_1 + 0xc));
            iVar4 = *(int *)(param_1 + 0x10);
          }
        }
        else {
          if (bVar3 != 6) {
            return 0;
          }
          iVar5 = 0;
          pbVar7 = pbVar9;
          puVar6 = puVar8;
          if (0 < *(int *)(param_1 + 0xc)) {
            do {
              bVar3 = pbVar7[1];
              iVar5 = iVar5 + 1;
              bVar1 = pbVar7[2];
              *(byte *)puVar6 = *pbVar7;
              *(byte *)((int)puVar6 + 1) = bVar3;
              *(byte *)((int)puVar6 + 2) = bVar1;
              pbVar7 = pbVar7 + 4;
              puVar6 = (uint *)((int)puVar6 + 3);
            } while (iVar5 < *(int *)(param_1 + 0xc));
            iVar4 = *(int *)(param_1 + 0x10);
          }
        }
        iVar10 = iVar10 + 1;
        puVar8 = (uint *)((int)puVar8 + *(int *)(param_1 + 0x18));
        pbVar9 = pbVar9 + *(int *)(param_2 + 0x10);
      } while (iVar10 < iVar4);
      return 1;
    }
    if (iVar4 != 4) {
      return 0;
    }
  }
  iVar10 = 0;
  iVar4 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x10) < 1) {
    return 1;
  }
  do {
    bVar3 = *(byte *)(param_1 + 0x23) & 0x6f;
    if (bVar3 == 5) {
      iVar5 = 0;
      pbVar7 = pbVar9;
      puVar6 = puVar8;
      if (0 < *(int *)(param_1 + 0xc)) {
        do {
          iVar5 = iVar5 + 1;
          pbVar2 = (byte *)(iVar4 + (uint)*pbVar7 * 4);
          *puVar6 = (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 | (uint)*pbVar2 |
                    (uint)pbVar2[3] * 0x808081 & 0xff000000;
          pbVar7 = pbVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
LAB_002c81fc:
      iVar5 = *(int *)(param_1 + 0x18);
    }
    else if (bVar3 < 6) {
      if (1 < bVar3) {
        return 0;
      }
      iVar5 = 0;
      pbVar7 = pbVar9;
      puVar6 = puVar8;
      if (*(int *)(param_1 + 0xc) < 1) goto LAB_002c81fc;
      do {
        iVar5 = iVar5 + 1;
        pbVar2 = (byte *)(iVar4 + (uint)*pbVar7 * 4);
        *(ushort *)puVar6 =
             (ushort)(*pbVar2 >> 3) | (pbVar2[2] & 0xf8) << 7 | (pbVar2[1] & 0xf8) << 2 |
             (pbVar2[3] & 0x80) << 8;
        pbVar7 = pbVar7 + 1;
        puVar6 = (uint *)((int)puVar6 + 2);
      } while (iVar5 < *(int *)(param_1 + 0xc));
      iVar5 = *(int *)(param_1 + 0x18);
    }
    else {
      if (bVar3 != 6) {
        return 0;
      }
      iVar5 = 0;
      pbVar7 = pbVar9;
      puVar6 = puVar8;
      if (*(int *)(param_1 + 0xc) < 1) goto LAB_002c81fc;
      do {
        iVar5 = iVar5 + 1;
        pbVar2 = (byte *)(iVar4 + (uint)*pbVar7 * 4);
        bVar3 = pbVar2[1];
        bVar1 = pbVar2[2];
        *(byte *)puVar6 = *pbVar2;
        *(byte *)((int)puVar6 + 1) = bVar3;
        *(byte *)((int)puVar6 + 2) = bVar1;
        pbVar7 = pbVar7 + 1;
        puVar6 = (uint *)((int)puVar6 + 3);
      } while (iVar5 < *(int *)(param_1 + 0xc));
      iVar5 = *(int *)(param_1 + 0x18);
    }
    iVar10 = iVar10 + 1;
    FUN_003680a0(puVar8,(byte *)((int)puVar8 + iVar5 + 0x7f));
    puVar8 = (uint *)((int)puVar8 + *(int *)(param_1 + 0x18));
    pbVar9 = pbVar9 + *(int *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x10) <= iVar10) {
      return 1;
    }
  } while( true );
}


// ==== FUN_002c8618 @ 002c8618 ====

undefined8 FUN_002c8618(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  bVar1 = (*(byte *)(iVar6 + 0x22) & 4) == 0;
  bVar2 = false;
  if ((bVar1) && (lVar4 = FUN_002ac750(param_1,0,1), lVar4 == 0)) {
    return 0;
  }
  if ((*(byte *)(iVar6 + 0x23) & 0x60) == 0) {
    bVar3 = *(byte *)(iVar6 + 0x23);
  }
  else {
    bVar2 = (*(byte *)(iVar6 + 0x22) & 0x10) != 0;
    if (bVar2) {
      bVar3 = *(byte *)(iVar6 + 0x23);
    }
    else {
      lVar4 = FUN_002ac7d0(param_1,1);
      if (lVar4 == 0) {
        return 0;
      }
      bVar3 = *(byte *)(iVar6 + 0x23);
    }
  }
  if (((bVar3 & 0x60) == 0x20) || ((bVar3 & 0x60) == 0x40)) {
    uVar5 = FUN_002c7c20(param_1,param_2);
  }
  else {
    uVar5 = FUN_002c7fb0(param_1,param_2);
  }
  if (((*(byte *)(iVar6 + 0x23) & 0x60) != 0) && (!bVar2)) {
    FUN_002ac808(param_1);
  }
  if (bVar1) {
    FUN_002ac790(param_1);
  }
  return uVar5;
}


// ==== FUN_002c88e0 @ 002c88e0 ====

void FUN_002c88e0(void)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong in_v1_udw;
  undefined1 auVar5 [16];
  
  uVar4 = DAT_003c3e7c;
  uVar3 = DAT_003c3e78;
  uVar2 = DAT_003c3e74;
  *puGpffff8e00 = DAT_003c3e70;
  puGpffff8e00[1] = uVar2;
  puGpffff8e00[2] = uVar3;
  puGpffff8e00[3] = uVar4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_v1_udw;
  auVar5._8_4_ = uVar3;
  auVar5._0_8_ = 0x11000000;
  auVar5._12_4_ = uVar4;
  auVar5 = _pcpyld(auVar1 << 0x40,auVar5);
  puGpffff8e00[4] = auVar5._0_4_;
  puGpffff8e00[5] = auVar5._4_4_;
  puGpffff8e00[6] = auVar5._8_4_;
  puGpffff8e00[7] = auVar5._12_4_;
  uVar4 = DAT_003c3e6c;
  uVar3 = DAT_003c3e68;
  uVar2 = DAT_003c3e64;
  puGpffff8e00[8] = DAT_003c3e60;
  puGpffff8e00[9] = uVar2;
  puGpffff8e00[10] = uVar3;
  puGpffff8e00[0xb] = uVar4;
  uVar4 = DAT_003c3efc;
  uVar3 = DAT_003c3ef8;
  uVar2 = DAT_003c3ef4;
  puGpffff8e00[0xc] = DAT_003c3ef0;
  puGpffff8e00[0xd] = uVar2;
  puGpffff8e00[0xe] = uVar3;
  puGpffff8e00[0xf] = uVar4;
  puGpffff8e00 = puGpffff8e00 + 0x10;
  return;
}


// ==== FUN_002c8948 @ 002c8948 ====

void FUN_002c8948(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_a2_udw;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_s3_qw [16];
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
  
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = 0x6c0d03f000000000;
  auVar9._8_8_ = in_s3_qw._8_8_;
  auVar9._0_8_ = 0x1000000d;
  auVar4 = _pcpyld(auVar4,auVar9);
  auVar20._8_8_ = auVar9._8_8_;
  auVar20._0_8_ = 0x10000003;
  auVar8._8_8_ = in_a2_udw;
  auVar8._0_8_ = 0x6c0303f900000000;
  auVar5 = _pcpyld(auVar8,auVar20);
  DAT_003c4010 = auVar4._0_4_;
  DAT_003c4014 = auVar4._4_4_;
  DAT_003c4018 = auVar4._8_4_;
  DAT_003c401c = auVar4._12_4_;
  auVar21._8_8_ = auVar9._8_8_;
  auVar21._0_8_ = 0x3000400000000001;
  auVar24._8_8_ = in_a2_udw;
  auVar24._0_8_ = 0x412;
  DAT_003c4000 = auVar5._0_4_;
  DAT_003c4004 = auVar5._4_4_;
  DAT_003c4008 = auVar5._8_4_;
  DAT_003c400c = auVar5._12_4_;
  auVar5 = _pcpyld(auVar24,auVar21);
  DAT_003c3e90 = auVar5._0_4_;
  DAT_003c3e94 = auVar5._4_4_;
  DAT_003c3e98 = auVar5._8_4_;
  DAT_003c3e9c = auVar5._12_4_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar4._8_8_;
  auVar5 = auVar5 << 0x40;
  auVar22._8_8_ = auVar9._8_8_;
  auVar22._0_8_ = 0x10000001;
  auVar8 = _pcpyld(auVar5,auVar22);
  auVar23._8_8_ = auVar9._8_8_;
  auVar23._0_8_ = 0x60000001;
  auVar24 = _pcpyld(auVar5,auVar23);
  auVar10._8_8_ = auVar9._8_8_;
  auVar10._0_8_ = 0x10000001;
  auVar4 = _pcpyld(auVar5,auVar10);
  auVar11._8_8_ = auVar9._8_8_;
  auVar11._0_8_ = 0x1000000a;
  DAT_003c3e80 = auVar24._0_4_;
  DAT_003c3e84 = auVar24._4_4_;
  DAT_003c3e88 = auVar24._8_4_;
  DAT_003c3e8c = auVar24._12_4_;
  auVar23 = _pcpyld(auVar5,auVar11);
  auVar12._8_8_ = auVar9._8_8_;
  auVar12._0_8_ = 0x1500000011000000;
  auVar22 = _pcpyld(auVar5,auVar12);
  auVar13._8_8_ = auVar9._8_8_;
  auVar13._0_8_ = 0x1700000010000000;
  auVar21 = _pcpyld(auVar5,auVar13);
  DAT_003c3f70 = (float)*piGpffff87b0 / (fGpffff8094 - (float)(*piGpffff87b0 >> 1));
  auVar14._8_8_ = auVar9._8_8_;
  auVar14._0_8_ = 0x11000000;
  auVar20 = _pcpyld(auVar14,auVar5);
  DAT_003c3f74 = (float)piGpffff87b0[1] / (fGpffff8094 - (float)(piGpffff87b0[1] >> 1));
  DAT_003c3e60 = auVar8._0_4_;
  DAT_003c3e64 = auVar8._4_4_;
  DAT_003c3e68 = auVar8._8_4_;
  DAT_003c3e6c = auVar8._12_4_;
  auVar15._8_8_ = auVar9._8_8_;
  auVar15._0_8_ = 0x10000000;
  DAT_003c3e70 = auVar4._0_4_;
  DAT_003c3e74 = auVar4._4_4_;
  DAT_003c3e78 = auVar4._8_4_;
  DAT_003c3e7c = auVar4._12_4_;
  auVar24 = _pcpyld(auVar5,auVar15);
  auVar16._8_8_ = auVar9._8_8_;
  auVar16._0_8_ = 0x20001e103000000;
  auVar8 = _pcpyld(auVar5,auVar16);
  auVar5 = _pcpyld(auVar5,auVar5);
  DAT_003c3f00 = auVar5._0_4_;
  DAT_003c3f04 = auVar5._4_4_;
  DAT_003c3f08 = auVar5._8_4_;
  DAT_003c3f0c = auVar5._12_4_;
  uVar2 = auVar4._8_8_;
  DAT_003c3e50 = auVar23._0_4_;
  DAT_003c3e54 = auVar23._4_4_;
  DAT_003c3e58 = auVar23._8_4_;
  DAT_003c3e5c = auVar23._12_4_;
  DAT_003c3fec = uGpffff8098;
  DAT_003c3ee0 = auVar22._0_4_;
  DAT_003c3ee4 = auVar22._4_4_;
  DAT_003c3ee8 = auVar22._8_4_;
  DAT_003c3eec = auVar22._12_4_;
  DAT_003c3ff0 = uGpffff8098;
  DAT_003c3e40 = auVar21._0_4_;
  DAT_003c3e44 = auVar21._4_4_;
  DAT_003c3e48 = auVar21._8_4_;
  DAT_003c3e4c = auVar21._12_4_;
  DAT_003c3ffc = uGpffff8098;
  DAT_003c3fe0 = uGpffff809c;
  DAT_003c3fc0 = auVar20._0_4_;
  DAT_003c3fc4 = auVar20._4_4_;
  DAT_003c3fc8 = auVar20._8_4_;
  DAT_003c3fcc = auVar20._12_4_;
  DAT_003c3fd0 = auVar24._0_4_;
  DAT_003c3fd4 = auVar24._4_4_;
  DAT_003c3fd8 = auVar24._8_4_;
  DAT_003c3fdc = auVar24._12_4_;
  DAT_003c3fe8 = uGpffff809c;
  DAT_003c3fb0 = auVar8._0_4_;
  DAT_003c3fb4 = auVar8._4_4_;
  DAT_003c3fb8 = auVar8._8_4_;
  DAT_003c3fbc = auVar8._12_4_;
  DAT_003c3ff4 = uGpffff8098;
  DAT_003c3ff8 = uGpffff8098;
  DAT_003c3fe4 = uGpffff809c;
  iGpffff888c = 0;
  iVar3 = iGpffff888c;
  do {
    iGpffff888c = iVar3;
    iVar3 = iGpffff888c + 1;
  } while ((iGpffff888c + 0x10U >> 4) * 3 + 0x20 + (iGpffff888c + 1) * 0xc < 0x1ff);
  iGpffff8888 = 0;
  iVar3 = iGpffff8888;
  do {
    iGpffff8888 = iVar3;
    iVar3 = iGpffff8888 + 1;
  } while ((iGpffff8888 + 0x10U >> 4) * 3 + 0x20 + (iGpffff8888 + 1) * 0xc < 0x1ff);
  auVar17._8_8_ = auVar8._8_8_;
  auVar17._0_8_ = 0x1100000011000000;
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = 0x11000000;
  auVar5 = _pcpyld(auVar6,auVar17);
  auVar18._8_8_ = auVar17._8_8_;
  auVar18._0_8_ = 0x11000000;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  auVar4 = _pcpyld(auVar1 << 0x40,auVar18);
  DAT_003c3eb0 = auVar5._0_4_;
  DAT_003c3eb4 = auVar5._4_4_;
  DAT_003c3eb8 = auVar5._8_4_;
  DAT_003c3ebc = auVar5._12_4_;
  auVar19._8_8_ = auVar17._8_8_;
  auVar19._0_8_ = 0x10000001;
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = 0x6c0103d401000404;
  auVar5 = _pcpyld(auVar7,auVar19);
  DAT_003c3ef0 = auVar4._0_4_;
  DAT_003c3ef4 = auVar4._4_4_;
  DAT_003c3ef8 = auVar4._8_4_;
  DAT_003c3efc = auVar4._12_4_;
  DAT_003c3ed0 = 0;
  DAT_003c3ec0 = auVar5._0_4_;
  DAT_003c3ec4 = auVar5._4_4_;
  DAT_003c3ec8 = auVar5._8_4_;
  DAT_003c3ecc = auVar5._12_4_;
  DAT_003c3ed4 = 0;
  DAT_003c3ed8 = 0;
  DAT_003c3edc = 0;
  FUN_003680a0(0x3c3ec0,0x3c3f5f);
  return;
}


// ==== FUN_002c8ce0 @ 002c8ce0 ====

void FUN_002c8ce0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 extraout_v0_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined8 in_v1_udw;
  
  bVar1 = iGpffff8888 != 0;
  lVar6 = (*(code *)*param_1)(3,8,bVar1,1,param_1[1],param_2);
  if (lVar6 != 0 && bVar1) {
    auVar7._8_8_ = extraout_v0_udw;
    auVar7._0_8_ = 0x1000000a;
    auVar8._8_8_ = in_v1_udw;
    auVar8._0_8_ = 0x100040404000001;
    auVar8 = _pcpyld(auVar8,auVar7);
    *puGpffff8e00 = auVar8._0_4_;
    puGpffff8e00[1] = auVar8._4_4_;
    puGpffff8e00[2] = auVar8._8_4_;
    puGpffff8e00[3] = auVar8._12_4_;
    auVar9._8_8_ = auVar8._8_8_;
    auVar9._0_8_ = 0xc000c00020000000;
    auVar2._8_8_ = in_v1_udw;
    auVar2._0_8_ = 0x7c08800000000000;
    auVar8 = _pcpyld(auVar2,auVar9);
    puGpffff8e00[4] = auVar8._0_4_;
    puGpffff8e00[5] = auVar8._4_4_;
    puGpffff8e00[6] = auVar8._8_4_;
    puGpffff8e00[7] = auVar8._12_4_;
    uVar10 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puGpffff8e00[8] = *param_3;
    puGpffff8e00[9] = uVar10;
    puGpffff8e00[10] = uVar4;
    puGpffff8e00[0xb] = uVar5;
    uVar10 = param_3[5];
    uVar4 = param_3[6];
    uVar5 = param_3[7];
    puGpffff8e00[0xc] = param_3[4];
    puGpffff8e00[0xd] = uVar10;
    puGpffff8e00[0xe] = uVar4;
    puGpffff8e00[0xf] = uVar5;
    auVar3 = *(undefined1 (*) [12])(param_3 + 8);
    uVar10 = param_3[0xb];
    puGpffff8e00[0x10] = auVar3._0_4_;
    puGpffff8e00[0x11] = auVar3._4_4_;
    puGpffff8e00[0x12] = auVar3._8_4_;
    puGpffff8e00[0x13] = uVar10;
    uVar10 = param_3[0xd];
    uVar4 = param_3[0xe];
    uVar5 = param_3[0xf];
    puGpffff8e00[0x14] = param_3[0xc];
    puGpffff8e00[0x15] = uVar10;
    puGpffff8e00[0x16] = uVar4;
    puGpffff8e00[0x17] = uVar5;
    uVar10 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    puGpffff8e00[0x18] = *param_4;
    puGpffff8e00[0x19] = uVar10;
    puGpffff8e00[0x1a] = uVar4;
    puGpffff8e00[0x1b] = uVar5;
    uVar10 = param_4[5];
    uVar4 = param_4[6];
    uVar5 = param_4[7];
    puGpffff8e00[0x1c] = param_4[4];
    puGpffff8e00[0x1d] = uVar10;
    puGpffff8e00[0x1e] = uVar4;
    puGpffff8e00[0x1f] = uVar5;
    auVar3 = *(undefined1 (*) [12])(param_4 + 8);
    uVar10 = param_4[0xb];
    puGpffff8e00[0x20] = auVar3._0_4_;
    puGpffff8e00[0x21] = auVar3._4_4_;
    puGpffff8e00[0x22] = auVar3._8_4_;
    puGpffff8e00[0x23] = uVar10;
    uVar10 = param_4[0xd];
    uVar4 = param_4[0xe];
    uVar5 = param_4[0xf];
    puGpffff8e00[0x24] = param_4[0xc];
    puGpffff8e00[0x25] = uVar10;
    puGpffff8e00[0x26] = uVar4;
    puGpffff8e00[0x27] = uVar5;
    uVar5 = DAT_003c3eec;
    uVar4 = DAT_003c3ee8;
    uVar10 = DAT_003c3ee4;
    puGpffff8e00[0x28] = DAT_003c3ee0;
    puGpffff8e00[0x29] = uVar10;
    puGpffff8e00[0x2a] = uVar4;
    puGpffff8e00[0x2b] = uVar5;
    puGpffff8e00 = puGpffff8e00 + 0x2c;
    FUN_002c88e0();
  }
  return;
}


// ==== FUN_002c8e48 @ 002c8e48 ====

void FUN_002c8e48(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 extraout_v0_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined8 in_v1_udw;
  
  bVar1 = iGpffff888c != 0;
  lVar6 = (*(code *)*param_1)(3,0xc,bVar1,5,param_1[2],param_2);
  if (lVar6 != 0 && bVar1) {
    auVar7._8_8_ = extraout_v0_udw;
    auVar7._0_8_ = 0x1000000e;
    auVar8._8_8_ = in_v1_udw;
    auVar8._0_8_ = 0x100040404000001;
    auVar8 = _pcpyld(auVar8,auVar7);
    *puGpffff8e00 = auVar8._0_4_;
    puGpffff8e00[1] = auVar8._4_4_;
    puGpffff8e00[2] = auVar8._8_4_;
    puGpffff8e00[3] = auVar8._12_4_;
    auVar9._8_8_ = auVar8._8_8_;
    auVar9._0_8_ = 0xc000c00020000000;
    auVar2._8_8_ = in_v1_udw;
    auVar2._0_8_ = 0x7c0c800000000000;
    auVar8 = _pcpyld(auVar2,auVar9);
    puGpffff8e00[4] = auVar8._0_4_;
    puGpffff8e00[5] = auVar8._4_4_;
    puGpffff8e00[6] = auVar8._8_4_;
    puGpffff8e00[7] = auVar8._12_4_;
    uVar10 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puGpffff8e00[8] = *param_3;
    puGpffff8e00[9] = uVar10;
    puGpffff8e00[10] = uVar4;
    puGpffff8e00[0xb] = uVar5;
    uVar10 = param_3[5];
    uVar4 = param_3[6];
    uVar5 = param_3[7];
    puGpffff8e00[0xc] = param_3[4];
    puGpffff8e00[0xd] = uVar10;
    puGpffff8e00[0xe] = uVar4;
    puGpffff8e00[0xf] = uVar5;
    auVar3 = *(undefined1 (*) [12])(param_3 + 8);
    uVar10 = param_3[0xb];
    puGpffff8e00[0x10] = auVar3._0_4_;
    puGpffff8e00[0x11] = auVar3._4_4_;
    puGpffff8e00[0x12] = auVar3._8_4_;
    puGpffff8e00[0x13] = uVar10;
    uVar10 = param_3[0xd];
    uVar4 = param_3[0xe];
    uVar5 = param_3[0xf];
    puGpffff8e00[0x14] = param_3[0xc];
    puGpffff8e00[0x15] = uVar10;
    puGpffff8e00[0x16] = uVar4;
    puGpffff8e00[0x17] = uVar5;
    uVar10 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    puGpffff8e00[0x18] = *param_4;
    puGpffff8e00[0x19] = uVar10;
    puGpffff8e00[0x1a] = uVar4;
    puGpffff8e00[0x1b] = uVar5;
    uVar10 = param_4[5];
    uVar4 = param_4[6];
    uVar5 = param_4[7];
    puGpffff8e00[0x1c] = param_4[4];
    puGpffff8e00[0x1d] = uVar10;
    puGpffff8e00[0x1e] = uVar4;
    puGpffff8e00[0x1f] = uVar5;
    auVar3 = *(undefined1 (*) [12])(param_4 + 8);
    uVar10 = param_4[0xb];
    puGpffff8e00[0x20] = auVar3._0_4_;
    puGpffff8e00[0x21] = auVar3._4_4_;
    puGpffff8e00[0x22] = auVar3._8_4_;
    puGpffff8e00[0x23] = uVar10;
    uVar10 = param_4[0xd];
    uVar4 = param_4[0xe];
    uVar5 = param_4[0xf];
    puGpffff8e00[0x24] = param_4[0xc];
    puGpffff8e00[0x25] = uVar10;
    puGpffff8e00[0x26] = uVar4;
    puGpffff8e00[0x27] = uVar5;
    uVar10 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    puGpffff8e00[0x28] = *param_5;
    puGpffff8e00[0x29] = uVar10;
    puGpffff8e00[0x2a] = uVar4;
    puGpffff8e00[0x2b] = uVar5;
    uVar10 = param_5[5];
    uVar4 = param_5[6];
    uVar5 = param_5[7];
    puGpffff8e00[0x2c] = param_5[4];
    puGpffff8e00[0x2d] = uVar10;
    puGpffff8e00[0x2e] = uVar4;
    puGpffff8e00[0x2f] = uVar5;
    auVar3 = *(undefined1 (*) [12])(param_5 + 8);
    uVar10 = param_5[0xb];
    puGpffff8e00[0x30] = auVar3._0_4_;
    puGpffff8e00[0x31] = auVar3._4_4_;
    puGpffff8e00[0x32] = auVar3._8_4_;
    puGpffff8e00[0x33] = uVar10;
    uVar10 = param_5[0xd];
    uVar4 = param_5[0xe];
    uVar5 = param_5[0xf];
    puGpffff8e00[0x34] = param_5[0xc];
    puGpffff8e00[0x35] = uVar10;
    puGpffff8e00[0x36] = uVar4;
    puGpffff8e00[0x37] = uVar5;
    uVar5 = DAT_003c3eec;
    uVar4 = DAT_003c3ee8;
    uVar10 = DAT_003c3ee4;
    puGpffff8e00[0x38] = DAT_003c3ee0;
    puGpffff8e00[0x39] = uVar10;
    puGpffff8e00[0x3a] = uVar4;
    puGpffff8e00[0x3b] = uVar5;
    puGpffff8e00 = puGpffff8e00 + 0x3c;
    FUN_002c88e0();
  }
  return;
}


// ==== FUN_002c8ff8 @ 002c8ff8 ====

void FUN_002c8ff8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 in_v1_udw;
  undefined4 *puVar10;
  undefined8 in_a1_udw;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  
  param_4 = param_4 >> 1;
  do {
    if (param_4 == 0) {
LAB_002c9348:
      uVar24 = 0;
    }
    else {
      uVar24 = uGpffff8888;
      if (param_4 <= uGpffff8888) {
        uVar24 = param_4;
      }
      lVar8 = (*(code *)*param_1)(3,8,uVar24,1,param_1[1],param_2);
      if (lVar8 == 0) goto LAB_002c9348;
    }
    if (uVar24 == 0) {
      return;
    }
    param_4 = param_4 - uVar24;
    uVar20 = DAT_003c3ee0;
    uVar21 = DAT_003c3ee4;
    uVar22 = DAT_003c3ee8;
    uVar23 = DAT_003c3eec;
    do {
      uVar11 = 0x10;
      if (uVar24 < 0x11) {
        uVar11 = uVar24;
      }
      uVar24 = uVar24 - uVar11;
      auVar9._8_8_ = in_v1_udw;
      auVar9._0_8_ = (ulong)(uVar11 << 3) + 2 | 0x10000000;
      auVar2._8_8_ = in_a1_udw;
      auVar2._0_8_ = (ulong)(uVar11 | 0x4000000) | 0x100040400000000;
      auVar9 = _pcpyld(auVar2,auVar9);
      *puGpffff8e00 = auVar9._0_4_;
      puGpffff8e00[1] = auVar9._4_4_;
      puGpffff8e00[2] = auVar9._8_4_;
      puGpffff8e00[3] = auVar9._12_4_;
      auVar1._8_8_ = in_v1_udw;
      auVar1._0_8_ = 0xc000c00020000000;
      auVar3._8_8_ = in_a1_udw;
      auVar3._0_8_ = (ulong)(uVar11 << 0x13) << 0x20 | 0x7c00800000000000;
      auVar9 = _pcpyld(auVar3,auVar1);
      puGpffff8e00[4] = auVar9._0_4_;
      puGpffff8e00[5] = auVar9._4_4_;
      puGpffff8e00[6] = auVar9._8_4_;
      puGpffff8e00[7] = auVar9._12_4_;
      uVar12 = uVar11 - 1;
      puVar7 = puGpffff8e00 + 8;
      if (uVar12 != 0xffffffff) {
        puVar10 = param_3 + 0x10;
        puVar19 = puVar10;
        puVar18 = puVar10;
        puVar17 = puVar10;
        puVar16 = puVar10;
        puVar15 = puVar10;
        puVar14 = puVar10;
        puVar13 = puVar10;
        if ((~uVar12 & 1) != 0) {
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          puGpffff8e00[8] = *param_3;
          puGpffff8e00[9] = uVar4;
          puGpffff8e00[10] = uVar5;
          puGpffff8e00[0xb] = uVar6;
          uVar4 = param_3[5];
          uVar5 = param_3[6];
          uVar6 = param_3[7];
          puGpffff8e00[0xc] = param_3[4];
          puGpffff8e00[0xd] = uVar4;
          puGpffff8e00[0xe] = uVar5;
          puGpffff8e00[0xf] = uVar6;
          uVar4 = param_3[9];
          uVar5 = param_3[10];
          uVar6 = param_3[0xb];
          puGpffff8e00[0x10] = param_3[8];
          puGpffff8e00[0x11] = uVar4;
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          uVar4 = param_3[0xd];
          uVar5 = param_3[0xe];
          uVar6 = param_3[0xf];
          puGpffff8e00[0x14] = param_3[0xc];
          puGpffff8e00[0x15] = uVar4;
          puGpffff8e00[0x16] = uVar5;
          puGpffff8e00[0x17] = uVar6;
          uVar4 = param_3[0x11];
          uVar5 = param_3[0x12];
          uVar6 = param_3[0x13];
          puGpffff8e00[0x18] = param_3[0x10];
          puGpffff8e00[0x19] = uVar4;
          puGpffff8e00[0x1a] = uVar5;
          puGpffff8e00[0x1b] = uVar6;
          uVar4 = param_3[0x15];
          uVar5 = param_3[0x16];
          uVar6 = param_3[0x17];
          puGpffff8e00[0x1c] = param_3[0x14];
          puGpffff8e00[0x1d] = uVar4;
          puGpffff8e00[0x1e] = uVar5;
          puGpffff8e00[0x1f] = uVar6;
          uVar4 = param_3[0x19];
          uVar5 = param_3[0x1a];
          uVar6 = param_3[0x1b];
          puGpffff8e00[0x20] = param_3[0x18];
          puGpffff8e00[0x21] = uVar4;
          puGpffff8e00[0x22] = uVar5;
          puGpffff8e00[0x23] = uVar6;
          uVar4 = param_3[0x1d];
          uVar5 = param_3[0x1e];
          uVar6 = param_3[0x1f];
          puGpffff8e00[0x24] = param_3[0x1c];
          puGpffff8e00[0x25] = uVar4;
          puGpffff8e00[0x26] = uVar5;
          puGpffff8e00[0x27] = uVar6;
          puVar10 = param_3 + 0x30;
          uVar12 = uVar11 - 2;
          param_3 = param_3 + 0x20;
          puVar19 = puVar10;
          puVar18 = puVar10;
          puVar17 = puVar10;
          puVar16 = puVar10;
          puVar15 = puVar10;
          puVar14 = puVar10;
          puVar13 = puVar10;
          puVar7 = puGpffff8e00 + 0x28;
          if (uVar12 == 0xffffffff) goto LAB_002c92f0;
        }
        do {
          puGpffff8e00 = puVar7;
          uVar4 = puVar13[-0xf];
          uVar5 = puVar13[-0xe];
          uVar6 = puVar13[-0xd];
          *puGpffff8e00 = puVar13[-0x10];
          puGpffff8e00[1] = uVar4;
          puGpffff8e00[2] = uVar5;
          puGpffff8e00[3] = uVar6;
          uVar4 = puVar14[-0xb];
          uVar5 = puVar14[-10];
          uVar6 = puVar14[-9];
          puGpffff8e00[4] = puVar14[-0xc];
          puGpffff8e00[5] = uVar4;
          puGpffff8e00[6] = uVar5;
          puGpffff8e00[7] = uVar6;
          uVar4 = puVar15[-7];
          uVar5 = puVar15[-6];
          uVar6 = puVar15[-5];
          puGpffff8e00[8] = puVar15[-8];
          puGpffff8e00[9] = uVar4;
          puGpffff8e00[10] = uVar5;
          puGpffff8e00[0xb] = uVar6;
          uVar4 = puVar16[-3];
          uVar5 = puVar16[-2];
          uVar6 = puVar16[-1];
          puGpffff8e00[0xc] = puVar16[-4];
          puGpffff8e00[0xd] = uVar4;
          puGpffff8e00[0xe] = uVar5;
          puGpffff8e00[0xf] = uVar6;
          uVar4 = puVar17[1];
          uVar5 = puVar17[2];
          uVar6 = puVar17[3];
          puGpffff8e00[0x10] = *puVar17;
          puGpffff8e00[0x11] = uVar4;
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          uVar4 = puVar18[5];
          uVar5 = puVar18[6];
          uVar6 = puVar18[7];
          puGpffff8e00[0x14] = puVar18[4];
          puGpffff8e00[0x15] = uVar4;
          puGpffff8e00[0x16] = uVar5;
          puGpffff8e00[0x17] = uVar6;
          uVar4 = puVar19[9];
          uVar5 = puVar19[10];
          uVar6 = puVar19[0xb];
          puGpffff8e00[0x18] = puVar19[8];
          puGpffff8e00[0x19] = uVar4;
          puGpffff8e00[0x1a] = uVar5;
          puGpffff8e00[0x1b] = uVar6;
          uVar4 = puVar10[0xd];
          uVar5 = puVar10[0xe];
          uVar6 = puVar10[0xf];
          puGpffff8e00[0x1c] = puVar10[0xc];
          puGpffff8e00[0x1d] = uVar4;
          puGpffff8e00[0x1e] = uVar5;
          puGpffff8e00[0x1f] = uVar6;
          uVar4 = puVar13[0x11];
          uVar5 = puVar13[0x12];
          uVar6 = puVar13[0x13];
          puGpffff8e00[0x20] = puVar13[0x10];
          puGpffff8e00[0x21] = uVar4;
          puGpffff8e00[0x22] = uVar5;
          puGpffff8e00[0x23] = uVar6;
          uVar4 = puVar14[0x15];
          uVar5 = puVar14[0x16];
          uVar6 = puVar14[0x17];
          puGpffff8e00[0x24] = puVar14[0x14];
          puGpffff8e00[0x25] = uVar4;
          puGpffff8e00[0x26] = uVar5;
          puGpffff8e00[0x27] = uVar6;
          uVar4 = puVar15[0x19];
          uVar5 = puVar15[0x1a];
          uVar6 = puVar15[0x1b];
          puGpffff8e00[0x28] = puVar15[0x18];
          puGpffff8e00[0x29] = uVar4;
          puGpffff8e00[0x2a] = uVar5;
          puGpffff8e00[0x2b] = uVar6;
          uVar4 = puVar16[0x1d];
          uVar5 = puVar16[0x1e];
          uVar6 = puVar16[0x1f];
          puGpffff8e00[0x2c] = puVar16[0x1c];
          puGpffff8e00[0x2d] = uVar4;
          puGpffff8e00[0x2e] = uVar5;
          puGpffff8e00[0x2f] = uVar6;
          uVar4 = puVar17[0x21];
          uVar5 = puVar17[0x22];
          uVar6 = puVar17[0x23];
          puGpffff8e00[0x30] = puVar17[0x20];
          puGpffff8e00[0x31] = uVar4;
          puGpffff8e00[0x32] = uVar5;
          puGpffff8e00[0x33] = uVar6;
          uVar4 = puVar18[0x25];
          uVar5 = puVar18[0x26];
          uVar6 = puVar18[0x27];
          puGpffff8e00[0x34] = puVar18[0x24];
          puGpffff8e00[0x35] = uVar4;
          puGpffff8e00[0x36] = uVar5;
          puGpffff8e00[0x37] = uVar6;
          uVar4 = puVar19[0x29];
          uVar5 = puVar19[0x2a];
          uVar6 = puVar19[0x2b];
          puGpffff8e00[0x38] = puVar19[0x28];
          puGpffff8e00[0x39] = uVar4;
          puGpffff8e00[0x3a] = uVar5;
          puGpffff8e00[0x3b] = uVar6;
          uVar4 = puVar10[0x2d];
          uVar5 = puVar10[0x2e];
          uVar6 = puVar10[0x2f];
          puGpffff8e00[0x3c] = puVar10[0x2c];
          puGpffff8e00[0x3d] = uVar4;
          puGpffff8e00[0x3e] = uVar5;
          puGpffff8e00[0x3f] = uVar6;
          puVar10 = puVar10 + 0x40;
          uVar12 = uVar12 - 2;
          param_3 = param_3 + 0x40;
          puVar19 = puVar19 + 0x40;
          puVar18 = puVar18 + 0x40;
          puVar17 = puVar17 + 0x40;
          puVar16 = puVar16 + 0x40;
          puVar15 = puVar15 + 0x40;
          puVar14 = puVar14 + 0x40;
          puVar13 = puVar13 + 0x40;
          puVar7 = puGpffff8e00 + 0x40;
        } while (uVar12 != 0xffffffff);
      }
LAB_002c92f0:
      puGpffff8e00 = puVar7;
      *puGpffff8e00 = uVar20;
      puGpffff8e00[1] = uVar21;
      puGpffff8e00[2] = uVar22;
      puGpffff8e00[3] = uVar23;
      puGpffff8e00 = puGpffff8e00 + 4;
      uVar20 = DAT_003c3e40;
      uVar21 = DAT_003c3e44;
      uVar22 = DAT_003c3e48;
      uVar23 = DAT_003c3e4c;
    } while (uVar24 != 0);
    FUN_002c88e0();
  } while( true );
}


// ==== FUN_002c9388 @ 002c9388 ====

void FUN_002c9388(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  
  uVar25 = param_4 - 1;
  do {
    if (uVar25 == 0) {
LAB_002c96e0:
      uVar24 = 0;
    }
    else {
      uVar24 = uGpffff8888;
      if (uVar25 <= uGpffff8888) {
        uVar24 = uVar25;
      }
      lVar8 = (*(code *)*param_1)(3,8,uVar24,1,param_1[1],param_2);
      if (lVar8 == 0) goto LAB_002c96e0;
    }
    if (uVar24 == 0) {
      return;
    }
    uVar25 = uVar25 - uVar24;
    uVar20 = DAT_003c3ee0;
    uVar21 = DAT_003c3ee4;
    uVar22 = DAT_003c3ee8;
    uVar23 = DAT_003c3eec;
    do {
      uVar12 = 0x10;
      if (uVar24 < 0x11) {
        uVar12 = uVar24;
      }
      uVar24 = uVar24 - uVar12;
      auVar9._8_8_ = in_v1_udw;
      auVar9._0_8_ = (ulong)(uVar12 << 3) + 2 | 0x10000000;
      auVar2._8_8_ = in_a0_udw;
      auVar2._0_8_ = (ulong)(uVar12 | 0x4000000) | 0x100040400000000;
      auVar9 = _pcpyld(auVar2,auVar9);
      *puGpffff8e00 = auVar9._0_4_;
      puGpffff8e00[1] = auVar9._4_4_;
      puGpffff8e00[2] = auVar9._8_4_;
      puGpffff8e00[3] = auVar9._12_4_;
      auVar1._8_8_ = in_v1_udw;
      auVar1._0_8_ = 0xc000c00020000000;
      auVar3._8_8_ = in_a0_udw;
      auVar3._0_8_ = (ulong)(uVar12 << 0x13) << 0x20 | 0x7c00800000000000;
      auVar9 = _pcpyld(auVar3,auVar1);
      puGpffff8e00[4] = auVar9._0_4_;
      puGpffff8e00[5] = auVar9._4_4_;
      puGpffff8e00[6] = auVar9._8_4_;
      puGpffff8e00[7] = auVar9._12_4_;
      uVar13 = uVar12 - 1;
      puVar7 = puGpffff8e00 + 8;
      if (uVar13 != 0xffffffff) {
        puVar10 = param_3 + 0x10;
        puVar11 = puVar10;
        puVar14 = puVar10;
        puVar15 = puVar10;
        puVar16 = puVar10;
        puVar17 = puVar10;
        puVar18 = puVar10;
        puVar19 = puVar10;
        if ((~uVar13 & 1) != 0) {
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          puGpffff8e00[8] = *param_3;
          puGpffff8e00[9] = uVar4;
          puGpffff8e00[10] = uVar5;
          puGpffff8e00[0xb] = uVar6;
          uVar4 = param_3[5];
          uVar5 = param_3[6];
          uVar6 = param_3[7];
          puGpffff8e00[0xc] = param_3[4];
          puGpffff8e00[0xd] = uVar4;
          puGpffff8e00[0xe] = uVar5;
          puGpffff8e00[0xf] = uVar6;
          uVar4 = param_3[9];
          uVar5 = param_3[10];
          uVar6 = param_3[0xb];
          puGpffff8e00[0x10] = param_3[8];
          puGpffff8e00[0x11] = uVar4;
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          uVar4 = param_3[0xd];
          uVar5 = param_3[0xe];
          uVar6 = param_3[0xf];
          puGpffff8e00[0x14] = param_3[0xc];
          puGpffff8e00[0x15] = uVar4;
          puGpffff8e00[0x16] = uVar5;
          puGpffff8e00[0x17] = uVar6;
          uVar4 = param_3[0x11];
          uVar5 = param_3[0x12];
          uVar6 = param_3[0x13];
          puGpffff8e00[0x18] = param_3[0x10];
          puGpffff8e00[0x19] = uVar4;
          puGpffff8e00[0x1a] = uVar5;
          puGpffff8e00[0x1b] = uVar6;
          uVar4 = param_3[0x15];
          uVar5 = param_3[0x16];
          uVar6 = param_3[0x17];
          puGpffff8e00[0x1c] = param_3[0x14];
          puGpffff8e00[0x1d] = uVar4;
          puGpffff8e00[0x1e] = uVar5;
          puGpffff8e00[0x1f] = uVar6;
          uVar4 = param_3[0x19];
          uVar5 = param_3[0x1a];
          uVar6 = param_3[0x1b];
          puGpffff8e00[0x20] = param_3[0x18];
          puGpffff8e00[0x21] = uVar4;
          puGpffff8e00[0x22] = uVar5;
          puGpffff8e00[0x23] = uVar6;
          uVar4 = param_3[0x1d];
          uVar5 = param_3[0x1e];
          uVar6 = param_3[0x1f];
          puGpffff8e00[0x24] = param_3[0x1c];
          puGpffff8e00[0x25] = uVar4;
          puGpffff8e00[0x26] = uVar5;
          puGpffff8e00[0x27] = uVar6;
          puVar11 = param_3 + 0x20;
          uVar13 = uVar12 - 2;
          param_3 = puVar10;
          puVar7 = puGpffff8e00 + 0x28;
          puVar10 = puVar11;
          puVar14 = puVar11;
          puVar15 = puVar11;
          puVar16 = puVar11;
          puVar17 = puVar11;
          puVar18 = puVar11;
          puVar19 = puVar11;
          if (uVar13 == 0xffffffff) goto LAB_002c9688;
        }
        do {
          puGpffff8e00 = puVar7;
          uVar4 = puVar11[-0xf];
          uVar5 = puVar11[-0xe];
          uVar6 = puVar11[-0xd];
          *puGpffff8e00 = puVar11[-0x10];
          puGpffff8e00[1] = uVar4;
          puGpffff8e00[2] = uVar5;
          puGpffff8e00[3] = uVar6;
          uVar4 = puVar14[-0xb];
          uVar5 = puVar14[-10];
          uVar6 = puVar14[-9];
          puGpffff8e00[4] = puVar14[-0xc];
          puGpffff8e00[5] = uVar4;
          puGpffff8e00[6] = uVar5;
          puGpffff8e00[7] = uVar6;
          uVar4 = puVar15[-7];
          uVar5 = puVar15[-6];
          uVar6 = puVar15[-5];
          puGpffff8e00[8] = puVar15[-8];
          puGpffff8e00[9] = uVar4;
          puGpffff8e00[10] = uVar5;
          puGpffff8e00[0xb] = uVar6;
          uVar4 = puVar16[-3];
          uVar5 = puVar16[-2];
          uVar6 = puVar16[-1];
          puGpffff8e00[0xc] = puVar16[-4];
          puGpffff8e00[0xd] = uVar4;
          puGpffff8e00[0xe] = uVar5;
          puGpffff8e00[0xf] = uVar6;
          uVar4 = puVar17[1];
          uVar5 = puVar17[2];
          uVar6 = puVar17[3];
          puGpffff8e00[0x10] = *puVar17;
          puGpffff8e00[0x11] = uVar4;
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          uVar4 = puVar18[5];
          uVar5 = puVar18[6];
          uVar6 = puVar18[7];
          puGpffff8e00[0x14] = puVar18[4];
          puGpffff8e00[0x15] = uVar4;
          puGpffff8e00[0x16] = uVar5;
          puGpffff8e00[0x17] = uVar6;
          uVar4 = puVar19[9];
          uVar5 = puVar19[10];
          uVar6 = puVar19[0xb];
          puGpffff8e00[0x18] = puVar19[8];
          puGpffff8e00[0x19] = uVar4;
          puGpffff8e00[0x1a] = uVar5;
          puGpffff8e00[0x1b] = uVar6;
          uVar4 = puVar10[0xd];
          uVar5 = puVar10[0xe];
          uVar6 = puVar10[0xf];
          puGpffff8e00[0x1c] = puVar10[0xc];
          puGpffff8e00[0x1d] = uVar4;
          puGpffff8e00[0x1e] = uVar5;
          puGpffff8e00[0x1f] = uVar6;
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puGpffff8e00[0x20] = *puVar11;
          puGpffff8e00[0x21] = uVar4;
          puGpffff8e00[0x22] = uVar5;
          puGpffff8e00[0x23] = uVar6;
          uVar4 = puVar14[5];
          uVar5 = puVar14[6];
          uVar6 = puVar14[7];
          puGpffff8e00[0x24] = puVar14[4];
          puGpffff8e00[0x25] = uVar4;
          puGpffff8e00[0x26] = uVar5;
          puGpffff8e00[0x27] = uVar6;
          uVar4 = puVar15[9];
          uVar5 = puVar15[10];
          uVar6 = puVar15[0xb];
          puGpffff8e00[0x28] = puVar15[8];
          puGpffff8e00[0x29] = uVar4;
          puGpffff8e00[0x2a] = uVar5;
          puGpffff8e00[0x2b] = uVar6;
          uVar4 = puVar16[0xd];
          uVar5 = puVar16[0xe];
          uVar6 = puVar16[0xf];
          puGpffff8e00[0x2c] = puVar16[0xc];
          puGpffff8e00[0x2d] = uVar4;
          puGpffff8e00[0x2e] = uVar5;
          puGpffff8e00[0x2f] = uVar6;
          uVar4 = puVar17[0x11];
          uVar5 = puVar17[0x12];
          uVar6 = puVar17[0x13];
          puGpffff8e00[0x30] = puVar17[0x10];
          puGpffff8e00[0x31] = uVar4;
          puGpffff8e00[0x32] = uVar5;
          puGpffff8e00[0x33] = uVar6;
          uVar4 = puVar18[0x15];
          uVar5 = puVar18[0x16];
          uVar6 = puVar18[0x17];
          puGpffff8e00[0x34] = puVar18[0x14];
          puGpffff8e00[0x35] = uVar4;
          puGpffff8e00[0x36] = uVar5;
          puGpffff8e00[0x37] = uVar6;
          uVar4 = puVar19[0x19];
          uVar5 = puVar19[0x1a];
          uVar6 = puVar19[0x1b];
          puGpffff8e00[0x38] = puVar19[0x18];
          puGpffff8e00[0x39] = uVar4;
          puGpffff8e00[0x3a] = uVar5;
          puGpffff8e00[0x3b] = uVar6;
          uVar4 = puVar10[0x1d];
          uVar5 = puVar10[0x1e];
          uVar6 = puVar10[0x1f];
          puGpffff8e00[0x3c] = puVar10[0x1c];
          puGpffff8e00[0x3d] = uVar4;
          puGpffff8e00[0x3e] = uVar5;
          puGpffff8e00[0x3f] = uVar6;
          uVar13 = uVar13 - 2;
          param_3 = param_3 + 0x20;
          puVar7 = puGpffff8e00 + 0x40;
          puVar11 = puVar11 + 0x20;
          puVar10 = puVar10 + 0x20;
          puVar14 = puVar14 + 0x20;
          puVar15 = puVar15 + 0x20;
          puVar16 = puVar16 + 0x20;
          puVar17 = puVar17 + 0x20;
          puVar18 = puVar18 + 0x20;
          puVar19 = puVar19 + 0x20;
        } while (uVar13 != 0xffffffff);
      }
LAB_002c9688:
      puGpffff8e00 = puVar7;
      *puGpffff8e00 = uVar20;
      puGpffff8e00[1] = uVar21;
      puGpffff8e00[2] = uVar22;
      puGpffff8e00[3] = uVar23;
      puGpffff8e00 = puGpffff8e00 + 4;
      uVar20 = DAT_003c3e40;
      uVar21 = DAT_003c3e44;
      uVar22 = DAT_003c3e48;
      uVar23 = DAT_003c3e4c;
    } while (uVar24 != 0);
    FUN_002c88e0();
  } while( true );
}


// ==== FUN_002c99a8 @ 002c99a8 ====

void FUN_002c99a8(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_v1_udw;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  undefined8 in_a1_udw;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar15;
  
  auVar9._0_8_ = (ulong)((int)param_4 + -2);
  auVar9._8_8_ = in_v1_udw;
  uVar22 = 0;
  if (2 < param_4) {
    uVar22 = auVar9._0_8_;
  }
  uVar21 = 1;
  do {
    if (uVar22 == 0) {
LAB_002c9c18:
      uVar20 = 0;
    }
    else {
      auVar9._0_8_ = CONCAT71(0,(ulong)(long)iGpffff888c < uVar22);
      uVar20 = (long)iGpffff888c;
      if (auVar9._0_8_ == 0) {
        uVar20 = uVar22;
      }
      lVar4 = (*(code *)*param_1)(3,0xc,uVar20,5,param_1[2],param_2);
      if (lVar4 == 0) goto LAB_002c9c18;
    }
    if (uVar20 == 0) {
      return;
    }
    uVar22 = (ulong)((int)uVar22 - (int)uVar20);
    uVar16 = DAT_003c3ee0;
    uVar17 = DAT_003c3ee4;
    uVar18 = DAT_003c3ee8;
    uVar19 = DAT_003c3eec;
    do {
      uVar15 = 0x10;
      if (uVar20 < 0x11) {
        uVar15 = uVar20;
      }
      iVar14 = (int)uVar15;
      auVar8._8_8_ = auVar9._8_8_;
      uVar20 = (ulong)((int)uVar20 - iVar14);
      auVar8._0_8_ = (ulong)(uint)(iVar14 * 0xc) + 2 | 0x10000000;
      auVar1._8_8_ = in_a1_udw;
      auVar1._0_8_ = uVar15 & 0xffffffff | 0x100040404000000;
      auVar9 = _pcpyld(auVar1,auVar8);
      *puGpffff8e00 = auVar9._0_4_;
      puGpffff8e00[1] = auVar9._4_4_;
      puGpffff8e00[2] = auVar9._8_4_;
      puGpffff8e00[3] = auVar9._12_4_;
      auVar10._8_8_ = auVar9._8_8_;
      auVar10._0_8_ = 0xc000c00020000000;
      auVar2._8_8_ = in_a1_udw;
      auVar2._0_8_ = (ulong)(uint)(iVar14 * 0xc0000) << 0x20 | 0x7c00800000000000;
      auVar9 = _pcpyld(auVar2,auVar10);
      puGpffff8e00[4] = auVar9._0_4_;
      puGpffff8e00[5] = auVar9._4_4_;
      puGpffff8e00[6] = auVar9._8_4_;
      puGpffff8e00[7] = auVar9._12_4_;
      puGpffff8e00 = puGpffff8e00 + 8;
      puVar13 = param_3;
      while (iVar14 = iVar14 + -1, iVar14 != -1) {
        puVar11 = param_3 + uVar21 * 8;
        puVar12 = param_3 + (uVar21 ^ 3) * 8;
        uVar3 = *puVar13;
        uVar5 = *(undefined4 *)(puVar13 + 1);
        uVar6 = *(undefined4 *)((int)puVar13 + 0xc);
        *puGpffff8e00 = (int)uVar3;
        puGpffff8e00[1] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[2] = uVar5;
        puGpffff8e00[3] = uVar6;
        uVar3 = puVar13[2];
        uVar5 = *(undefined4 *)(puVar13 + 3);
        uVar6 = *(undefined4 *)((int)puVar13 + 0x1c);
        puGpffff8e00[4] = (int)uVar3;
        puGpffff8e00[5] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[6] = uVar5;
        puGpffff8e00[7] = uVar6;
        uVar3 = puVar13[4];
        uVar5 = *(undefined4 *)(puVar13 + 5);
        uVar6 = *(undefined4 *)((int)puVar13 + 0x2c);
        puGpffff8e00[8] = (int)uVar3;
        puGpffff8e00[9] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[10] = uVar5;
        puGpffff8e00[0xb] = uVar6;
        uVar3 = puVar13[6];
        uVar5 = *(undefined4 *)(puVar13 + 7);
        uVar6 = *(undefined4 *)((int)puVar13 + 0x3c);
        puGpffff8e00[0xc] = (int)uVar3;
        puGpffff8e00[0xd] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0xe] = uVar5;
        puGpffff8e00[0xf] = uVar6;
        uVar3 = *puVar11;
        uVar5 = *(undefined4 *)(puVar11 + 1);
        uVar6 = *(undefined4 *)((int)puVar11 + 0xc);
        puGpffff8e00[0x10] = (int)uVar3;
        puGpffff8e00[0x11] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0x12] = uVar5;
        puGpffff8e00[0x13] = uVar6;
        uVar3 = puVar11[2];
        uVar5 = *(undefined4 *)(puVar11 + 3);
        uVar6 = *(undefined4 *)((int)puVar11 + 0x1c);
        puGpffff8e00[0x14] = (int)uVar3;
        puGpffff8e00[0x15] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0x16] = uVar5;
        puGpffff8e00[0x17] = uVar6;
        uVar3 = puVar11[4];
        uVar5 = *(undefined4 *)(puVar11 + 5);
        uVar6 = *(undefined4 *)((int)puVar11 + 0x2c);
        puGpffff8e00[0x18] = (int)uVar3;
        puGpffff8e00[0x19] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0x1a] = uVar5;
        puGpffff8e00[0x1b] = uVar6;
        uVar3 = puVar11[6];
        uVar5 = *(undefined4 *)(puVar11 + 7);
        uVar6 = *(undefined4 *)((int)puVar11 + 0x3c);
        puGpffff8e00[0x1c] = (int)uVar3;
        puGpffff8e00[0x1d] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0x1e] = uVar5;
        puGpffff8e00[0x1f] = uVar6;
        uVar3 = *puVar12;
        uVar5 = *(undefined4 *)(puVar12 + 1);
        uVar6 = *(undefined4 *)((int)puVar12 + 0xc);
        puGpffff8e00[0x20] = (int)uVar3;
        puGpffff8e00[0x21] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0x22] = uVar5;
        puGpffff8e00[0x23] = uVar6;
        uVar5 = *(undefined4 *)((int)puVar12 + 0x14);
        uVar6 = *(undefined4 *)(puVar12 + 3);
        uVar7 = *(undefined4 *)((int)puVar12 + 0x1c);
        puGpffff8e00[0x24] = *(undefined4 *)(puVar12 + 2);
        puGpffff8e00[0x25] = uVar5;
        puGpffff8e00[0x26] = uVar6;
        puGpffff8e00[0x27] = uVar7;
        uVar5 = *(undefined4 *)((int)puVar12 + 0x24);
        uVar6 = *(undefined4 *)(puVar12 + 5);
        uVar7 = *(undefined4 *)((int)puVar12 + 0x2c);
        puGpffff8e00[0x28] = *(undefined4 *)(puVar12 + 4);
        puGpffff8e00[0x29] = uVar5;
        puGpffff8e00[0x2a] = uVar6;
        puGpffff8e00[0x2b] = uVar7;
        auVar9._0_8_ = (ulong)(int)(puGpffff8e00 + 0x2c);
        uVar5 = *(undefined4 *)((int)puVar12 + 0x34);
        uVar6 = *(undefined4 *)(puVar12 + 7);
        uVar7 = *(undefined4 *)((int)puVar12 + 0x3c);
        puGpffff8e00[0x2c] = *(undefined4 *)(puVar12 + 6);
        puGpffff8e00[0x2d] = uVar5;
        puGpffff8e00[0x2e] = uVar6;
        puGpffff8e00[0x2f] = uVar7;
        puGpffff8e00 = puGpffff8e00 + 0x30;
        puVar13 = puVar13 + 8;
        param_3 = param_3 + 8;
        uVar21 = uVar21 ^ 3;
      }
      *puGpffff8e00 = uVar16;
      puGpffff8e00[1] = uVar17;
      puGpffff8e00[2] = uVar18;
      puGpffff8e00[3] = uVar19;
      puGpffff8e00 = puGpffff8e00 + 4;
      uVar16 = DAT_003c3e40;
      uVar17 = DAT_003c3e44;
      uVar18 = DAT_003c3e48;
      uVar19 = DAT_003c3e4c;
    } while (uVar20 != 0);
    FUN_002c88e0();
  } while( true );
}


// ==== FUN_002c9c58 @ 002c9c58 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c9c58(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_v1_udw;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  undefined8 in_a1_udw;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  
  auVar9._0_8_ = (ulong)((int)param_4 + -2);
  auVar9._8_8_ = in_v1_udw;
  uVar20 = 0;
  puVar19 = param_3;
  if (2 < param_4) {
    uVar20 = auVar9._0_8_;
  }
  do {
    if (uVar20 == 0) {
LAB_002c9ea8:
      uVar18 = 0;
    }
    else {
      auVar9._0_8_ = CONCAT71(0,(ulong)(long)iGpffff888c < uVar20);
      uVar18 = (long)iGpffff888c;
      if (auVar9._0_8_ == 0) {
        uVar18 = uVar20;
      }
      lVar4 = (*(code *)*param_1)(3,0xc,uVar18,5,param_1[2],param_2);
      if (lVar4 == 0) goto LAB_002c9ea8;
    }
    if (uVar18 == 0) {
      return;
    }
    iVar17 = (int)uVar18;
    uVar14 = _DAT_003c3ee0;
    uVar15 = DAT_003c3ee8;
    uVar16 = DAT_003c3eec;
    do {
      uVar13 = 0x10;
      if (uVar18 < 0x11) {
        uVar13 = uVar18;
      }
      iVar12 = (int)uVar13;
      auVar8._8_8_ = auVar9._8_8_;
      uVar18 = (ulong)((int)uVar18 - iVar12);
      auVar8._0_8_ = (ulong)(uint)(iVar12 * 0xc) + 2 | 0x10000000;
      auVar1._8_8_ = in_a1_udw;
      auVar1._0_8_ = uVar13 & 0xffffffff | 0x100040404000000;
      auVar9 = _pcpyld(auVar1,auVar8);
      *puGpffff8e00 = auVar9._0_4_;
      puGpffff8e00[1] = auVar9._4_4_;
      puGpffff8e00[2] = auVar9._8_4_;
      puGpffff8e00[3] = auVar9._12_4_;
      auVar10._8_8_ = auVar9._8_8_;
      auVar10._0_8_ = 0xc000c00020000000;
      auVar2._8_8_ = in_a1_udw;
      auVar2._0_8_ = (ulong)(uint)(iVar12 * 0xc0000) << 0x20 | 0x7c00800000000000;
      auVar9 = _pcpyld(auVar2,auVar10);
      puGpffff8e00[4] = auVar9._0_4_;
      puGpffff8e00[5] = auVar9._4_4_;
      puGpffff8e00[6] = auVar9._8_4_;
      puGpffff8e00[7] = auVar9._12_4_;
      puGpffff8e00 = puGpffff8e00 + 8;
      iVar12 = iVar12 + -1;
      if (iVar12 != -1) {
        puVar11 = puVar19 + 0x10;
        do {
          uVar3 = *param_3;
          uVar5 = *(undefined4 *)(param_3 + 1);
          uVar6 = *(undefined4 *)((int)param_3 + 0xc);
          *puGpffff8e00 = (int)uVar3;
          puGpffff8e00[1] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[2] = uVar5;
          puGpffff8e00[3] = uVar6;
          uVar5 = *(undefined4 *)((int)param_3 + 0x14);
          uVar6 = *(undefined4 *)(param_3 + 3);
          uVar7 = *(undefined4 *)((int)param_3 + 0x1c);
          puGpffff8e00[4] = *(undefined4 *)(param_3 + 2);
          puGpffff8e00[5] = uVar5;
          puGpffff8e00[6] = uVar6;
          puGpffff8e00[7] = uVar7;
          uVar5 = *(undefined4 *)((int)param_3 + 0x24);
          uVar6 = *(undefined4 *)(param_3 + 5);
          uVar7 = *(undefined4 *)((int)param_3 + 0x2c);
          puGpffff8e00[8] = *(undefined4 *)(param_3 + 4);
          puGpffff8e00[9] = uVar5;
          puGpffff8e00[10] = uVar6;
          puGpffff8e00[0xb] = uVar7;
          uVar5 = *(undefined4 *)((int)param_3 + 0x34);
          uVar6 = *(undefined4 *)(param_3 + 7);
          uVar7 = *(undefined4 *)((int)param_3 + 0x3c);
          puGpffff8e00[0xc] = *(undefined4 *)(param_3 + 6);
          puGpffff8e00[0xd] = uVar5;
          puGpffff8e00[0xe] = uVar6;
          puGpffff8e00[0xf] = uVar7;
          uVar3 = puVar11[-8];
          uVar5 = *(undefined4 *)(puVar11 + -7);
          uVar6 = *(undefined4 *)((int)puVar11 + -0x34);
          puGpffff8e00[0x10] = (int)uVar3;
          puGpffff8e00[0x11] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          uVar3 = puVar11[-6];
          uVar5 = *(undefined4 *)(puVar11 + -5);
          uVar6 = *(undefined4 *)((int)puVar11 + -0x24);
          puGpffff8e00[0x14] = (int)uVar3;
          puGpffff8e00[0x15] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[0x16] = uVar5;
          puGpffff8e00[0x17] = uVar6;
          uVar3 = puVar11[-4];
          uVar5 = *(undefined4 *)(puVar11 + -3);
          uVar6 = *(undefined4 *)((int)puVar11 + -0x14);
          puGpffff8e00[0x18] = (int)uVar3;
          puGpffff8e00[0x19] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[0x1a] = uVar5;
          puGpffff8e00[0x1b] = uVar6;
          uVar3 = puVar11[-2];
          uVar5 = *(undefined4 *)(puVar11 + -1);
          uVar6 = *(undefined4 *)((int)puVar11 + -4);
          puGpffff8e00[0x1c] = (int)uVar3;
          puGpffff8e00[0x1d] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[0x1e] = uVar5;
          puGpffff8e00[0x1f] = uVar6;
          uVar3 = *puVar11;
          uVar5 = *(undefined4 *)(puVar11 + 1);
          uVar6 = *(undefined4 *)((int)puVar11 + 0xc);
          puGpffff8e00[0x20] = (int)uVar3;
          puGpffff8e00[0x21] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[0x22] = uVar5;
          puGpffff8e00[0x23] = uVar6;
          uVar3 = puVar11[2];
          uVar5 = *(undefined4 *)(puVar11 + 3);
          uVar6 = *(undefined4 *)((int)puVar11 + 0x1c);
          puGpffff8e00[0x24] = (int)uVar3;
          puGpffff8e00[0x25] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[0x26] = uVar5;
          puGpffff8e00[0x27] = uVar6;
          uVar3 = puVar11[4];
          uVar5 = *(undefined4 *)(puVar11 + 5);
          uVar6 = *(undefined4 *)((int)puVar11 + 0x2c);
          puGpffff8e00[0x28] = (int)uVar3;
          puGpffff8e00[0x29] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[0x2a] = uVar5;
          puGpffff8e00[0x2b] = uVar6;
          auVar9._0_8_ = (ulong)(int)(puGpffff8e00 + 0x2c);
          uVar3 = puVar11[6];
          uVar5 = *(undefined4 *)(puVar11 + 7);
          uVar6 = *(undefined4 *)((int)puVar11 + 0x3c);
          puGpffff8e00[0x2c] = (int)uVar3;
          puGpffff8e00[0x2d] = (int)((ulong)uVar3 >> 0x20);
          puGpffff8e00[0x2e] = uVar5;
          puGpffff8e00[0x2f] = uVar6;
          puGpffff8e00 = puGpffff8e00 + 0x30;
          puVar11 = puVar11 + 8;
          iVar12 = iVar12 + -1;
          puVar19 = puVar19 + 8;
        } while (iVar12 != -1);
      }
      *puGpffff8e00 = (int)uVar14;
      puGpffff8e00[1] = (int)((ulong)uVar14 >> 0x20);
      puGpffff8e00[2] = uVar15;
      puGpffff8e00[3] = uVar16;
      puGpffff8e00 = puGpffff8e00 + 4;
      uVar14 = _DAT_003c3e40;
      uVar15 = DAT_003c3e48;
      uVar16 = DAT_003c3e4c;
    } while (uVar18 != 0);
    FUN_002c88e0();
    uVar20 = (long)((int)uVar20 - iVar17);
  } while( true );
}


// ==== FUN_002c9ee0 @ 002c9ee0 ====

void FUN_002c9ee0(undefined4 *param_1,undefined8 param_2,int param_3,ushort *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined8 in_v1_udw;
  undefined4 *puVar10;
  undefined8 in_a0_udw;
  undefined4 *puVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  
  param_5 = param_5 >> 1;
  do {
    if (param_5 == 0) {
LAB_002ca250:
      uVar20 = 0;
    }
    else {
      uVar20 = uGpffff8888;
      if (param_5 <= uGpffff8888) {
        uVar20 = param_5;
      }
      lVar7 = (*(code *)*param_1)(3,8,uVar20,1,param_1[1],param_2);
      if (lVar7 == 0) goto LAB_002ca250;
    }
    if (uVar20 == 0) {
      return;
    }
    param_5 = param_5 - uVar20;
    uVar16 = DAT_003c3ee0;
    uVar17 = DAT_003c3ee4;
    uVar18 = DAT_003c3ee8;
    uVar19 = DAT_003c3eec;
    puVar12 = param_4;
    do {
      uVar13 = 0x10;
      if (uVar20 < 0x11) {
        uVar13 = uVar20;
      }
      uVar20 = uVar20 - uVar13;
      auVar8._8_8_ = in_v1_udw;
      auVar8._0_8_ = (ulong)(uVar13 << 3) + 2 | 0x10000000;
      auVar2._8_8_ = in_a0_udw;
      auVar2._0_8_ = (ulong)(uVar13 | 0x4000000) | 0x100040400000000;
      auVar8 = _pcpyld(auVar2,auVar8);
      *puGpffff8e00 = auVar8._0_4_;
      puGpffff8e00[1] = auVar8._4_4_;
      puGpffff8e00[2] = auVar8._8_4_;
      puGpffff8e00[3] = auVar8._12_4_;
      auVar1._8_8_ = in_v1_udw;
      auVar1._0_8_ = 0xc000c00020000000;
      auVar3._8_8_ = in_a0_udw;
      auVar3._0_8_ = (ulong)(uVar13 << 0x13) << 0x20 | 0x7c00800000000000;
      auVar8 = _pcpyld(auVar3,auVar1);
      puGpffff8e00[4] = auVar8._0_4_;
      puGpffff8e00[5] = auVar8._4_4_;
      puGpffff8e00[6] = auVar8._8_4_;
      puGpffff8e00[7] = auVar8._12_4_;
      uVar14 = uVar13 - 1;
      param_4 = puVar12;
      puVar10 = puGpffff8e00 + 8;
      if (uVar14 != 0xffffffff) {
        puVar15 = puVar12;
        if ((~uVar14 & 1) != 0) {
          puVar10 = (undefined4 *)(param_3 + (uint)*puVar12 * 0x40);
          puVar11 = (undefined4 *)(param_3 + (uint)puVar12[1] * 0x40);
          uVar9 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          puGpffff8e00[8] = *puVar10;
          puGpffff8e00[9] = uVar9;
          puGpffff8e00[10] = uVar5;
          puGpffff8e00[0xb] = uVar6;
          uVar9 = puVar10[5];
          uVar5 = puVar10[6];
          uVar6 = puVar10[7];
          puGpffff8e00[0xc] = puVar10[4];
          puGpffff8e00[0xd] = uVar9;
          puGpffff8e00[0xe] = uVar5;
          puGpffff8e00[0xf] = uVar6;
          uVar9 = puVar10[9];
          uVar5 = puVar10[10];
          uVar6 = puVar10[0xb];
          puGpffff8e00[0x10] = puVar10[8];
          puGpffff8e00[0x11] = uVar9;
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          uVar9 = puVar10[0xd];
          uVar5 = puVar10[0xe];
          uVar6 = puVar10[0xf];
          puGpffff8e00[0x14] = puVar10[0xc];
          puGpffff8e00[0x15] = uVar9;
          puGpffff8e00[0x16] = uVar5;
          puGpffff8e00[0x17] = uVar6;
          uVar9 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puGpffff8e00[0x18] = *puVar11;
          puGpffff8e00[0x19] = uVar9;
          puGpffff8e00[0x1a] = uVar5;
          puGpffff8e00[0x1b] = uVar6;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 4);
          uVar9 = puVar11[7];
          puGpffff8e00[0x1c] = auVar4._0_4_;
          puGpffff8e00[0x1d] = auVar4._4_4_;
          puGpffff8e00[0x1e] = auVar4._8_4_;
          puGpffff8e00[0x1f] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 8);
          uVar9 = puVar11[0xb];
          puGpffff8e00[0x20] = auVar4._0_4_;
          puGpffff8e00[0x21] = auVar4._4_4_;
          puGpffff8e00[0x22] = auVar4._8_4_;
          puGpffff8e00[0x23] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 0xc);
          uVar9 = puVar11[0xf];
          puGpffff8e00[0x24] = auVar4._0_4_;
          puGpffff8e00[0x25] = auVar4._4_4_;
          puGpffff8e00[0x26] = auVar4._8_4_;
          puGpffff8e00[0x27] = uVar9;
          puVar12 = puVar12 + 2;
          uVar14 = uVar13 - 2;
          puVar15 = puVar12;
          param_4 = puVar12;
          puVar10 = puGpffff8e00 + 0x28;
          if (uVar14 == 0xffffffff) goto LAB_002ca1f8;
        }
        do {
          puGpffff8e00 = puVar10;
          puVar10 = (undefined4 *)(param_3 + (uint)*puVar15 * 0x40);
          puVar11 = (undefined4 *)(param_3 + (uint)puVar12[1] * 0x40);
          uVar9 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          *puGpffff8e00 = *puVar10;
          puGpffff8e00[1] = uVar9;
          puGpffff8e00[2] = uVar5;
          puGpffff8e00[3] = uVar6;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 4);
          uVar9 = puVar10[7];
          puGpffff8e00[4] = auVar4._0_4_;
          puGpffff8e00[5] = auVar4._4_4_;
          puGpffff8e00[6] = auVar4._8_4_;
          puGpffff8e00[7] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 8);
          uVar9 = puVar10[0xb];
          puGpffff8e00[8] = auVar4._0_4_;
          puGpffff8e00[9] = auVar4._4_4_;
          puGpffff8e00[10] = auVar4._8_4_;
          puGpffff8e00[0xb] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 0xc);
          uVar9 = puVar10[0xf];
          puGpffff8e00[0xc] = auVar4._0_4_;
          puGpffff8e00[0xd] = auVar4._4_4_;
          puGpffff8e00[0xe] = auVar4._8_4_;
          puGpffff8e00[0xf] = uVar9;
          uVar9 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puGpffff8e00[0x10] = *puVar11;
          puGpffff8e00[0x11] = uVar9;
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 4);
          uVar9 = puVar11[7];
          puGpffff8e00[0x14] = auVar4._0_4_;
          puGpffff8e00[0x15] = auVar4._4_4_;
          puGpffff8e00[0x16] = auVar4._8_4_;
          puGpffff8e00[0x17] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 8);
          uVar9 = puVar11[0xb];
          puGpffff8e00[0x18] = auVar4._0_4_;
          puGpffff8e00[0x19] = auVar4._4_4_;
          puGpffff8e00[0x1a] = auVar4._8_4_;
          puGpffff8e00[0x1b] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 0xc);
          uVar9 = puVar11[0xf];
          puGpffff8e00[0x1c] = auVar4._0_4_;
          puGpffff8e00[0x1d] = auVar4._4_4_;
          puGpffff8e00[0x1e] = auVar4._8_4_;
          puGpffff8e00[0x1f] = uVar9;
          puVar10 = (undefined4 *)(param_3 + (uint)puVar15[2] * 0x40);
          puVar11 = (undefined4 *)(param_3 + (uint)puVar12[3] * 0x40);
          uVar9 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          puGpffff8e00[0x20] = *puVar10;
          puGpffff8e00[0x21] = uVar9;
          puGpffff8e00[0x22] = uVar5;
          puGpffff8e00[0x23] = uVar6;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 4);
          uVar9 = puVar10[7];
          puGpffff8e00[0x24] = auVar4._0_4_;
          puGpffff8e00[0x25] = auVar4._4_4_;
          puGpffff8e00[0x26] = auVar4._8_4_;
          puGpffff8e00[0x27] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 8);
          uVar9 = puVar10[0xb];
          puGpffff8e00[0x28] = auVar4._0_4_;
          puGpffff8e00[0x29] = auVar4._4_4_;
          puGpffff8e00[0x2a] = auVar4._8_4_;
          puGpffff8e00[0x2b] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 0xc);
          uVar9 = puVar10[0xf];
          puGpffff8e00[0x2c] = auVar4._0_4_;
          puGpffff8e00[0x2d] = auVar4._4_4_;
          puGpffff8e00[0x2e] = auVar4._8_4_;
          puGpffff8e00[0x2f] = uVar9;
          uVar9 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puGpffff8e00[0x30] = *puVar11;
          puGpffff8e00[0x31] = uVar9;
          puGpffff8e00[0x32] = uVar5;
          puGpffff8e00[0x33] = uVar6;
          uVar9 = puVar11[5];
          uVar5 = puVar11[6];
          uVar6 = puVar11[7];
          puGpffff8e00[0x34] = puVar11[4];
          puGpffff8e00[0x35] = uVar9;
          puGpffff8e00[0x36] = uVar5;
          puGpffff8e00[0x37] = uVar6;
          uVar9 = puVar11[9];
          uVar5 = puVar11[10];
          uVar6 = puVar11[0xb];
          puGpffff8e00[0x38] = puVar11[8];
          puGpffff8e00[0x39] = uVar9;
          puGpffff8e00[0x3a] = uVar5;
          puGpffff8e00[0x3b] = uVar6;
          uVar9 = puVar11[0xd];
          uVar5 = puVar11[0xe];
          uVar6 = puVar11[0xf];
          puGpffff8e00[0x3c] = puVar11[0xc];
          puGpffff8e00[0x3d] = uVar9;
          puGpffff8e00[0x3e] = uVar5;
          puGpffff8e00[0x3f] = uVar6;
          puVar12 = puVar12 + 4;
          uVar14 = uVar14 - 2;
          param_4 = param_4 + 4;
          puVar15 = puVar15 + 4;
          puVar10 = puGpffff8e00 + 0x40;
        } while (uVar14 != 0xffffffff);
      }
LAB_002ca1f8:
      puGpffff8e00 = puVar10;
      *puGpffff8e00 = uVar16;
      puGpffff8e00[1] = uVar17;
      puGpffff8e00[2] = uVar18;
      puGpffff8e00[3] = uVar19;
      puGpffff8e00 = puGpffff8e00 + 4;
      uVar16 = DAT_003c3e40;
      uVar17 = DAT_003c3e44;
      uVar18 = DAT_003c3e48;
      uVar19 = DAT_003c3e4c;
      puVar12 = param_4;
    } while (uVar20 != 0);
    FUN_002c88e0();
  } while( true );
}


// ==== FUN_002ca290 @ 002ca290 ====

void FUN_002ca290(undefined4 *param_1,undefined8 param_2,int param_3,ushort *param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined8 in_v1_udw;
  undefined4 *puVar10;
  undefined8 in_a0_udw;
  undefined4 *puVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar21 = param_5 - 1;
  do {
    if (uVar21 == 0) {
LAB_002ca600:
      uVar20 = 0;
    }
    else {
      uVar20 = uGpffff8888;
      if (uVar21 <= uGpffff8888) {
        uVar20 = uVar21;
      }
      lVar7 = (*(code *)*param_1)(3,8,uVar20,1,param_1[1],param_2);
      if (lVar7 == 0) goto LAB_002ca600;
    }
    if (uVar20 == 0) {
      return;
    }
    uVar21 = uVar21 - uVar20;
    uVar16 = DAT_003c3ee0;
    uVar17 = DAT_003c3ee4;
    uVar18 = DAT_003c3ee8;
    uVar19 = DAT_003c3eec;
    puVar12 = param_4;
    do {
      uVar13 = 0x10;
      if (uVar20 < 0x11) {
        uVar13 = uVar20;
      }
      uVar20 = uVar20 - uVar13;
      auVar8._8_8_ = in_v1_udw;
      auVar8._0_8_ = (ulong)(uVar13 << 3) + 2 | 0x10000000;
      auVar2._8_8_ = in_a0_udw;
      auVar2._0_8_ = (ulong)(uVar13 | 0x4000000) | 0x100040400000000;
      auVar8 = _pcpyld(auVar2,auVar8);
      *puGpffff8e00 = auVar8._0_4_;
      puGpffff8e00[1] = auVar8._4_4_;
      puGpffff8e00[2] = auVar8._8_4_;
      puGpffff8e00[3] = auVar8._12_4_;
      auVar1._8_8_ = in_v1_udw;
      auVar1._0_8_ = 0xc000c00020000000;
      auVar3._8_8_ = in_a0_udw;
      auVar3._0_8_ = (ulong)(uVar13 << 0x13) << 0x20 | 0x7c00800000000000;
      auVar8 = _pcpyld(auVar3,auVar1);
      puGpffff8e00[4] = auVar8._0_4_;
      puGpffff8e00[5] = auVar8._4_4_;
      puGpffff8e00[6] = auVar8._8_4_;
      puGpffff8e00[7] = auVar8._12_4_;
      uVar14 = uVar13 - 1;
      param_4 = puVar12;
      puVar10 = puGpffff8e00 + 8;
      if (uVar14 != 0xffffffff) {
        puVar15 = puVar12;
        if ((~uVar14 & 1) != 0) {
          puVar10 = (undefined4 *)(param_3 + (uint)*puVar12 * 0x40);
          puVar11 = (undefined4 *)(param_3 + (uint)puVar12[1] * 0x40);
          uVar9 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          puGpffff8e00[8] = *puVar10;
          puGpffff8e00[9] = uVar9;
          puGpffff8e00[10] = uVar5;
          puGpffff8e00[0xb] = uVar6;
          uVar9 = puVar10[5];
          uVar5 = puVar10[6];
          uVar6 = puVar10[7];
          puGpffff8e00[0xc] = puVar10[4];
          puGpffff8e00[0xd] = uVar9;
          puGpffff8e00[0xe] = uVar5;
          puGpffff8e00[0xf] = uVar6;
          uVar9 = puVar10[9];
          uVar5 = puVar10[10];
          uVar6 = puVar10[0xb];
          puGpffff8e00[0x10] = puVar10[8];
          puGpffff8e00[0x11] = uVar9;
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          uVar9 = puVar10[0xd];
          uVar5 = puVar10[0xe];
          uVar6 = puVar10[0xf];
          puGpffff8e00[0x14] = puVar10[0xc];
          puGpffff8e00[0x15] = uVar9;
          puGpffff8e00[0x16] = uVar5;
          puGpffff8e00[0x17] = uVar6;
          uVar9 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puGpffff8e00[0x18] = *puVar11;
          puGpffff8e00[0x19] = uVar9;
          puGpffff8e00[0x1a] = uVar5;
          puGpffff8e00[0x1b] = uVar6;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 4);
          uVar9 = puVar11[7];
          puGpffff8e00[0x1c] = auVar4._0_4_;
          puGpffff8e00[0x1d] = auVar4._4_4_;
          puGpffff8e00[0x1e] = auVar4._8_4_;
          puGpffff8e00[0x1f] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 8);
          uVar9 = puVar11[0xb];
          puGpffff8e00[0x20] = auVar4._0_4_;
          puGpffff8e00[0x21] = auVar4._4_4_;
          puGpffff8e00[0x22] = auVar4._8_4_;
          puGpffff8e00[0x23] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 0xc);
          uVar9 = puVar11[0xf];
          puGpffff8e00[0x24] = auVar4._0_4_;
          puGpffff8e00[0x25] = auVar4._4_4_;
          puGpffff8e00[0x26] = auVar4._8_4_;
          puGpffff8e00[0x27] = uVar9;
          puVar12 = puVar12 + 1;
          uVar14 = uVar13 - 2;
          puVar15 = puVar12;
          param_4 = puVar12;
          puVar10 = puGpffff8e00 + 0x28;
          if (uVar14 == 0xffffffff) goto LAB_002ca5a8;
        }
        do {
          puGpffff8e00 = puVar10;
          puVar10 = (undefined4 *)(param_3 + (uint)*puVar15 * 0x40);
          puVar11 = (undefined4 *)(param_3 + (uint)puVar12[1] * 0x40);
          uVar9 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          *puGpffff8e00 = *puVar10;
          puGpffff8e00[1] = uVar9;
          puGpffff8e00[2] = uVar5;
          puGpffff8e00[3] = uVar6;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 4);
          uVar9 = puVar10[7];
          puGpffff8e00[4] = auVar4._0_4_;
          puGpffff8e00[5] = auVar4._4_4_;
          puGpffff8e00[6] = auVar4._8_4_;
          puGpffff8e00[7] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 8);
          uVar9 = puVar10[0xb];
          puGpffff8e00[8] = auVar4._0_4_;
          puGpffff8e00[9] = auVar4._4_4_;
          puGpffff8e00[10] = auVar4._8_4_;
          puGpffff8e00[0xb] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 0xc);
          uVar9 = puVar10[0xf];
          puGpffff8e00[0xc] = auVar4._0_4_;
          puGpffff8e00[0xd] = auVar4._4_4_;
          puGpffff8e00[0xe] = auVar4._8_4_;
          puGpffff8e00[0xf] = uVar9;
          uVar9 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puGpffff8e00[0x10] = *puVar11;
          puGpffff8e00[0x11] = uVar9;
          puGpffff8e00[0x12] = uVar5;
          puGpffff8e00[0x13] = uVar6;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 4);
          uVar9 = puVar11[7];
          puGpffff8e00[0x14] = auVar4._0_4_;
          puGpffff8e00[0x15] = auVar4._4_4_;
          puGpffff8e00[0x16] = auVar4._8_4_;
          puGpffff8e00[0x17] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 8);
          uVar9 = puVar11[0xb];
          puGpffff8e00[0x18] = auVar4._0_4_;
          puGpffff8e00[0x19] = auVar4._4_4_;
          puGpffff8e00[0x1a] = auVar4._8_4_;
          puGpffff8e00[0x1b] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar11 + 0xc);
          uVar9 = puVar11[0xf];
          puGpffff8e00[0x1c] = auVar4._0_4_;
          puGpffff8e00[0x1d] = auVar4._4_4_;
          puGpffff8e00[0x1e] = auVar4._8_4_;
          puGpffff8e00[0x1f] = uVar9;
          puVar10 = (undefined4 *)(param_3 + (uint)puVar15[1] * 0x40);
          puVar11 = (undefined4 *)(param_3 + (uint)puVar12[2] * 0x40);
          uVar9 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          puGpffff8e00[0x20] = *puVar10;
          puGpffff8e00[0x21] = uVar9;
          puGpffff8e00[0x22] = uVar5;
          puGpffff8e00[0x23] = uVar6;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 4);
          uVar9 = puVar10[7];
          puGpffff8e00[0x24] = auVar4._0_4_;
          puGpffff8e00[0x25] = auVar4._4_4_;
          puGpffff8e00[0x26] = auVar4._8_4_;
          puGpffff8e00[0x27] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 8);
          uVar9 = puVar10[0xb];
          puGpffff8e00[0x28] = auVar4._0_4_;
          puGpffff8e00[0x29] = auVar4._4_4_;
          puGpffff8e00[0x2a] = auVar4._8_4_;
          puGpffff8e00[0x2b] = uVar9;
          auVar4 = *(undefined1 (*) [12])(puVar10 + 0xc);
          uVar9 = puVar10[0xf];
          puGpffff8e00[0x2c] = auVar4._0_4_;
          puGpffff8e00[0x2d] = auVar4._4_4_;
          puGpffff8e00[0x2e] = auVar4._8_4_;
          puGpffff8e00[0x2f] = uVar9;
          uVar9 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puGpffff8e00[0x30] = *puVar11;
          puGpffff8e00[0x31] = uVar9;
          puGpffff8e00[0x32] = uVar5;
          puGpffff8e00[0x33] = uVar6;
          uVar9 = puVar11[5];
          uVar5 = puVar11[6];
          uVar6 = puVar11[7];
          puGpffff8e00[0x34] = puVar11[4];
          puGpffff8e00[0x35] = uVar9;
          puGpffff8e00[0x36] = uVar5;
          puGpffff8e00[0x37] = uVar6;
          uVar9 = puVar11[9];
          uVar5 = puVar11[10];
          uVar6 = puVar11[0xb];
          puGpffff8e00[0x38] = puVar11[8];
          puGpffff8e00[0x39] = uVar9;
          puGpffff8e00[0x3a] = uVar5;
          puGpffff8e00[0x3b] = uVar6;
          uVar9 = puVar11[0xd];
          uVar5 = puVar11[0xe];
          uVar6 = puVar11[0xf];
          puGpffff8e00[0x3c] = puVar11[0xc];
          puGpffff8e00[0x3d] = uVar9;
          puGpffff8e00[0x3e] = uVar5;
          puGpffff8e00[0x3f] = uVar6;
          puVar12 = puVar12 + 2;
          uVar14 = uVar14 - 2;
          param_4 = param_4 + 2;
          puVar15 = puVar15 + 2;
          puVar10 = puGpffff8e00 + 0x40;
        } while (uVar14 != 0xffffffff);
      }
LAB_002ca5a8:
      puGpffff8e00 = puVar10;
      *puGpffff8e00 = uVar16;
      puGpffff8e00[1] = uVar17;
      puGpffff8e00[2] = uVar18;
      puGpffff8e00[3] = uVar19;
      puGpffff8e00 = puGpffff8e00 + 4;
      uVar16 = DAT_003c3e40;
      uVar17 = DAT_003c3e44;
      uVar18 = DAT_003c3e48;
      uVar19 = DAT_003c3e4c;
      puVar12 = param_4;
    } while (uVar20 != 0);
    FUN_002c88e0();
  } while( true );
}


// ==== FUN_002ca900 @ 002ca900 ====

void FUN_002ca900(undefined4 *param_1,undefined4 param_2,int param_3,ushort *param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_v1_udw;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  undefined8 in_a1_udw;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  ushort *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar15;
  
  auVar9._0_8_ = (ulong)((int)param_5 + -2);
  auVar9._8_8_ = in_v1_udw;
  uVar23 = 0;
  if (2 < param_5) {
    uVar23 = auVar9._0_8_;
  }
  uVar22 = 1;
  do {
    if (uVar23 == 0) {
LAB_002cab90:
      uVar21 = 0;
    }
    else {
      auVar9._0_8_ = CONCAT71(0,(ulong)(long)iGpffff888c < uVar23);
      uVar21 = (long)iGpffff888c;
      if (auVar9._0_8_ == 0) {
        uVar21 = uVar23;
      }
      lVar4 = (*(code *)*param_1)(3,0xc,uVar21,5,param_1[2],param_2);
      if (lVar4 == 0) goto LAB_002cab90;
    }
    if (uVar21 == 0) {
      return;
    }
    uVar23 = (ulong)((int)uVar23 - (int)uVar21);
    uVar17 = DAT_003c3ee0;
    uVar18 = DAT_003c3ee4;
    uVar19 = DAT_003c3ee8;
    uVar20 = DAT_003c3eec;
    do {
      uVar15 = 0x10;
      if (uVar21 < 0x11) {
        uVar15 = uVar21;
      }
      iVar14 = (int)uVar15;
      auVar8._8_8_ = auVar9._8_8_;
      uVar21 = (ulong)((int)uVar21 - iVar14);
      auVar8._0_8_ = (ulong)(uint)(iVar14 * 0xc) + 2 | 0x10000000;
      auVar1._8_8_ = in_a1_udw;
      auVar1._0_8_ = uVar15 & 0xffffffff | 0x100040404000000;
      auVar9 = _pcpyld(auVar1,auVar8);
      *puGpffff8e00 = auVar9._0_4_;
      puGpffff8e00[1] = auVar9._4_4_;
      puGpffff8e00[2] = auVar9._8_4_;
      puGpffff8e00[3] = auVar9._12_4_;
      auVar10._8_8_ = auVar9._8_8_;
      auVar10._0_8_ = 0xc000c00020000000;
      auVar2._8_8_ = in_a1_udw;
      auVar2._0_8_ = (ulong)(uint)(iVar14 * 0xc0000) << 0x20 | 0x7c00800000000000;
      auVar9 = _pcpyld(auVar2,auVar10);
      puGpffff8e00[4] = auVar9._0_4_;
      puGpffff8e00[5] = auVar9._4_4_;
      puGpffff8e00[6] = auVar9._8_4_;
      puGpffff8e00[7] = auVar9._12_4_;
      puGpffff8e00 = puGpffff8e00 + 8;
      puVar16 = param_4;
      while (iVar14 = iVar14 + -1, iVar14 != -1) {
        puVar12 = (undefined8 *)(param_3 + (uint)param_4[uVar22] * 0x40);
        puVar13 = (undefined8 *)(param_3 + (uint)param_4[uVar22 ^ 3] * 0x40);
        puVar11 = (undefined8 *)(param_3 + (uint)*puVar16 * 0x40);
        uVar3 = *puVar11;
        uVar5 = *(undefined4 *)(puVar11 + 1);
        uVar6 = *(undefined4 *)((int)puVar11 + 0xc);
        *puGpffff8e00 = (int)uVar3;
        puGpffff8e00[1] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[2] = uVar5;
        puGpffff8e00[3] = uVar6;
        uVar3 = puVar11[2];
        uVar5 = *(undefined4 *)(puVar11 + 3);
        uVar6 = *(undefined4 *)((int)puVar11 + 0x1c);
        puGpffff8e00[4] = (int)uVar3;
        puGpffff8e00[5] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[6] = uVar5;
        puGpffff8e00[7] = uVar6;
        uVar3 = puVar11[4];
        uVar5 = *(undefined4 *)(puVar11 + 5);
        uVar6 = *(undefined4 *)((int)puVar11 + 0x2c);
        puGpffff8e00[8] = (int)uVar3;
        puGpffff8e00[9] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[10] = uVar5;
        puGpffff8e00[0xb] = uVar6;
        uVar3 = puVar11[6];
        uVar5 = *(undefined4 *)(puVar11 + 7);
        uVar6 = *(undefined4 *)((int)puVar11 + 0x3c);
        puGpffff8e00[0xc] = (int)uVar3;
        puGpffff8e00[0xd] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0xe] = uVar5;
        puGpffff8e00[0xf] = uVar6;
        uVar3 = *puVar12;
        uVar5 = *(undefined4 *)(puVar12 + 1);
        uVar6 = *(undefined4 *)((int)puVar12 + 0xc);
        puGpffff8e00[0x10] = (int)uVar3;
        puGpffff8e00[0x11] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0x12] = uVar5;
        puGpffff8e00[0x13] = uVar6;
        uVar5 = *(undefined4 *)((int)puVar12 + 0x14);
        uVar6 = *(undefined4 *)(puVar12 + 3);
        uVar7 = *(undefined4 *)((int)puVar12 + 0x1c);
        puGpffff8e00[0x14] = *(undefined4 *)(puVar12 + 2);
        puGpffff8e00[0x15] = uVar5;
        puGpffff8e00[0x16] = uVar6;
        puGpffff8e00[0x17] = uVar7;
        uVar5 = *(undefined4 *)((int)puVar12 + 0x24);
        uVar6 = *(undefined4 *)(puVar12 + 5);
        uVar7 = *(undefined4 *)((int)puVar12 + 0x2c);
        puGpffff8e00[0x18] = *(undefined4 *)(puVar12 + 4);
        puGpffff8e00[0x19] = uVar5;
        puGpffff8e00[0x1a] = uVar6;
        puGpffff8e00[0x1b] = uVar7;
        uVar5 = *(undefined4 *)((int)puVar12 + 0x34);
        uVar6 = *(undefined4 *)(puVar12 + 7);
        uVar7 = *(undefined4 *)((int)puVar12 + 0x3c);
        puGpffff8e00[0x1c] = *(undefined4 *)(puVar12 + 6);
        puGpffff8e00[0x1d] = uVar5;
        puGpffff8e00[0x1e] = uVar6;
        puGpffff8e00[0x1f] = uVar7;
        uVar3 = *puVar13;
        uVar5 = *(undefined4 *)(puVar13 + 1);
        uVar6 = *(undefined4 *)((int)puVar13 + 0xc);
        puGpffff8e00[0x20] = (int)uVar3;
        puGpffff8e00[0x21] = (int)((ulong)uVar3 >> 0x20);
        puGpffff8e00[0x22] = uVar5;
        puGpffff8e00[0x23] = uVar6;
        uVar5 = *(undefined4 *)((int)puVar13 + 0x14);
        uVar6 = *(undefined4 *)(puVar13 + 3);
        uVar7 = *(undefined4 *)((int)puVar13 + 0x1c);
        puGpffff8e00[0x24] = *(undefined4 *)(puVar13 + 2);
        puGpffff8e00[0x25] = uVar5;
        puGpffff8e00[0x26] = uVar6;
        puGpffff8e00[0x27] = uVar7;
        uVar5 = *(undefined4 *)((int)puVar13 + 0x24);
        uVar6 = *(undefined4 *)(puVar13 + 5);
        uVar7 = *(undefined4 *)((int)puVar13 + 0x2c);
        puGpffff8e00[0x28] = *(undefined4 *)(puVar13 + 4);
        puGpffff8e00[0x29] = uVar5;
        puGpffff8e00[0x2a] = uVar6;
        puGpffff8e00[0x2b] = uVar7;
        auVar9._0_8_ = (ulong)(int)(puGpffff8e00 + 0x2c);
        uVar5 = *(undefined4 *)((int)puVar13 + 0x34);
        uVar6 = *(undefined4 *)(puVar13 + 7);
        uVar7 = *(undefined4 *)((int)puVar13 + 0x3c);
        puGpffff8e00[0x2c] = *(undefined4 *)(puVar13 + 6);
        puGpffff8e00[0x2d] = uVar5;
        puGpffff8e00[0x2e] = uVar6;
        puGpffff8e00[0x2f] = uVar7;
        puGpffff8e00 = puGpffff8e00 + 0x30;
        puVar16 = puVar16 + 1;
        param_4 = param_4 + 1;
        uVar22 = uVar22 ^ 3;
      }
      *puGpffff8e00 = uVar17;
      puGpffff8e00[1] = uVar18;
      puGpffff8e00[2] = uVar19;
      puGpffff8e00[3] = uVar20;
      puGpffff8e00 = puGpffff8e00 + 4;
      uVar17 = DAT_003c3e40;
      uVar18 = DAT_003c3e44;
      uVar19 = DAT_003c3e48;
      uVar20 = DAT_003c3e4c;
    } while (uVar21 != 0);
    FUN_002c88e0();
  } while( true );
}


// ==== FUN_002cabd0 @ 002cabd0 ====

void FUN_002cabd0(undefined4 *param_1,undefined8 param_2,int param_3,ushort *param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 in_v1_qw [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  undefined8 in_a1_udw;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  ushort *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  
  uVar21 = 0;
  if (2 < param_5) {
    uVar21 = (long)((int)param_5 + -2);
  }
  puVar20 = (undefined8 *)(param_3 + (uint)*param_4 * 0x40);
  do {
    if (uVar21 == 0) {
LAB_002cae48:
      uVar19 = 0;
    }
    else {
      in_v1_qw._0_8_ = CONCAT71(0,(ulong)(long)iGpffff888c < uVar21);
      uVar19 = (long)iGpffff888c;
      if (in_v1_qw._0_8_ == 0) {
        uVar19 = uVar21;
      }
      lVar3 = (*(code *)*param_1)(3,0xc,uVar19,5,param_1[2],param_2);
      if (lVar3 == 0) goto LAB_002cae48;
    }
    if (uVar19 == 0) {
      return;
    }
    uVar21 = (ulong)((int)uVar21 - (int)uVar19);
    uVar15 = DAT_003c3ee0;
    uVar16 = DAT_003c3ee4;
    uVar17 = DAT_003c3ee8;
    uVar18 = DAT_003c3eec;
    do {
      uVar13 = 0x10;
      if (uVar19 < 0x11) {
        uVar13 = uVar19;
      }
      iVar12 = (int)uVar13;
      auVar7._8_8_ = in_v1_qw._8_8_;
      uVar19 = (ulong)((int)uVar19 - iVar12);
      auVar7._0_8_ = (ulong)(uint)(iVar12 * 0xc) + 2 | 0x10000000;
      auVar8._8_8_ = in_a1_udw;
      auVar8._0_8_ = uVar13 & 0xffffffff | 0x100040404000000;
      auVar8 = _pcpyld(auVar8,auVar7);
      *puGpffff8e00 = auVar8._0_4_;
      puGpffff8e00[1] = auVar8._4_4_;
      puGpffff8e00[2] = auVar8._8_4_;
      puGpffff8e00[3] = auVar8._12_4_;
      auVar9._8_8_ = auVar8._8_8_;
      auVar9._0_8_ = 0xc000c00020000000;
      auVar1._8_8_ = in_a1_udw;
      auVar1._0_8_ = (ulong)(uint)(iVar12 * 0xc0000) << 0x20 | 0x7c00800000000000;
      in_v1_qw = _pcpyld(auVar1,auVar9);
      puGpffff8e00[4] = in_v1_qw._0_4_;
      puGpffff8e00[5] = in_v1_qw._4_4_;
      puGpffff8e00[6] = in_v1_qw._8_4_;
      puGpffff8e00[7] = in_v1_qw._12_4_;
      puGpffff8e00 = puGpffff8e00 + 8;
      iVar12 = iVar12 + -1;
      if (iVar12 != -1) {
        puVar14 = param_4 + 2;
        do {
          puVar10 = (undefined8 *)(param_3 + (uint)puVar14[-1] * 0x40);
          puVar11 = (undefined8 *)(param_3 + (uint)*puVar14 * 0x40);
          uVar2 = *puVar20;
          uVar4 = *(undefined4 *)(puVar20 + 1);
          uVar5 = *(undefined4 *)((int)puVar20 + 0xc);
          *puGpffff8e00 = (int)uVar2;
          puGpffff8e00[1] = (int)((ulong)uVar2 >> 0x20);
          puGpffff8e00[2] = uVar4;
          puGpffff8e00[3] = uVar5;
          uVar4 = *(undefined4 *)((int)puVar20 + 0x14);
          uVar5 = *(undefined4 *)(puVar20 + 3);
          uVar6 = *(undefined4 *)((int)puVar20 + 0x1c);
          puGpffff8e00[4] = *(undefined4 *)(puVar20 + 2);
          puGpffff8e00[5] = uVar4;
          puGpffff8e00[6] = uVar5;
          puGpffff8e00[7] = uVar6;
          uVar4 = *(undefined4 *)((int)puVar20 + 0x24);
          uVar5 = *(undefined4 *)(puVar20 + 5);
          uVar6 = *(undefined4 *)((int)puVar20 + 0x2c);
          puGpffff8e00[8] = *(undefined4 *)(puVar20 + 4);
          puGpffff8e00[9] = uVar4;
          puGpffff8e00[10] = uVar5;
          puGpffff8e00[0xb] = uVar6;
          uVar4 = *(undefined4 *)((int)puVar20 + 0x34);
          uVar5 = *(undefined4 *)(puVar20 + 7);
          uVar6 = *(undefined4 *)((int)puVar20 + 0x3c);
          puGpffff8e00[0xc] = *(undefined4 *)(puVar20 + 6);
          puGpffff8e00[0xd] = uVar4;
          puGpffff8e00[0xe] = uVar5;
          puGpffff8e00[0xf] = uVar6;
          uVar2 = *puVar10;
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar5 = *(undefined4 *)((int)puVar10 + 0xc);
          puGpffff8e00[0x10] = (int)uVar2;
          puGpffff8e00[0x11] = (int)((ulong)uVar2 >> 0x20);
          puGpffff8e00[0x12] = uVar4;
          puGpffff8e00[0x13] = uVar5;
          uVar2 = puVar10[2];
          uVar4 = *(undefined4 *)(puVar10 + 3);
          uVar5 = *(undefined4 *)((int)puVar10 + 0x1c);
          puGpffff8e00[0x14] = (int)uVar2;
          puGpffff8e00[0x15] = (int)((ulong)uVar2 >> 0x20);
          puGpffff8e00[0x16] = uVar4;
          puGpffff8e00[0x17] = uVar5;
          uVar2 = puVar10[4];
          uVar4 = *(undefined4 *)(puVar10 + 5);
          uVar5 = *(undefined4 *)((int)puVar10 + 0x2c);
          puGpffff8e00[0x18] = (int)uVar2;
          puGpffff8e00[0x19] = (int)((ulong)uVar2 >> 0x20);
          puGpffff8e00[0x1a] = uVar4;
          puGpffff8e00[0x1b] = uVar5;
          uVar2 = puVar10[6];
          uVar4 = *(undefined4 *)(puVar10 + 7);
          uVar5 = *(undefined4 *)((int)puVar10 + 0x3c);
          puGpffff8e00[0x1c] = (int)uVar2;
          puGpffff8e00[0x1d] = (int)((ulong)uVar2 >> 0x20);
          puGpffff8e00[0x1e] = uVar4;
          puGpffff8e00[0x1f] = uVar5;
          uVar2 = *puVar11;
          uVar4 = *(undefined4 *)(puVar11 + 1);
          uVar5 = *(undefined4 *)((int)puVar11 + 0xc);
          puGpffff8e00[0x20] = (int)uVar2;
          puGpffff8e00[0x21] = (int)((ulong)uVar2 >> 0x20);
          puGpffff8e00[0x22] = uVar4;
          puGpffff8e00[0x23] = uVar5;
          uVar4 = *(undefined4 *)((int)puVar11 + 0x14);
          uVar5 = *(undefined4 *)(puVar11 + 3);
          uVar6 = *(undefined4 *)((int)puVar11 + 0x1c);
          puGpffff8e00[0x24] = *(undefined4 *)(puVar11 + 2);
          puGpffff8e00[0x25] = uVar4;
          puGpffff8e00[0x26] = uVar5;
          puGpffff8e00[0x27] = uVar6;
          uVar4 = *(undefined4 *)((int)puVar11 + 0x24);
          uVar5 = *(undefined4 *)(puVar11 + 5);
          uVar6 = *(undefined4 *)((int)puVar11 + 0x2c);
          puGpffff8e00[0x28] = *(undefined4 *)(puVar11 + 4);
          puGpffff8e00[0x29] = uVar4;
          puGpffff8e00[0x2a] = uVar5;
          puGpffff8e00[0x2b] = uVar6;
          in_v1_qw._0_8_ = (ulong)(int)(puGpffff8e00 + 0x2c);
          uVar4 = *(undefined4 *)((int)puVar11 + 0x34);
          uVar5 = *(undefined4 *)(puVar11 + 7);
          uVar6 = *(undefined4 *)((int)puVar11 + 0x3c);
          puGpffff8e00[0x2c] = *(undefined4 *)(puVar11 + 6);
          puGpffff8e00[0x2d] = uVar4;
          puGpffff8e00[0x2e] = uVar5;
          puGpffff8e00[0x2f] = uVar6;
          puGpffff8e00 = puGpffff8e00 + 0x30;
          puVar14 = puVar14 + 1;
          iVar12 = iVar12 + -1;
          param_4 = param_4 + 1;
        } while (iVar12 != -1);
      }
      *puGpffff8e00 = uVar15;
      puGpffff8e00[1] = uVar16;
      puGpffff8e00[2] = uVar17;
      puGpffff8e00[3] = uVar18;
      puGpffff8e00 = puGpffff8e00 + 4;
      uVar15 = DAT_003c3e40;
      uVar16 = DAT_003c3e44;
      uVar17 = DAT_003c3e48;
      uVar18 = DAT_003c3e4c;
    } while (uVar19 != 0);
    FUN_002c88e0();
  } while( true );
}


// ==== FUN_002cae88 @ 002cae88 ====

void FUN_002cae88(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  
  DAT_003c3f50 = *(undefined4 *)(param_1 + 0x80);
  piVar1 = *(int **)(param_1 + 0x60);
  DAT_003c3f54 = DAT_003c3f50;
  DAT_003c3f58 = DAT_003c3f50;
  DAT_003c3f5c = DAT_003c3f50;
  DAT_003c3f60 = *(undefined4 *)(param_1 + 0x84);
  DAT_003c3f64 = DAT_003c3f60;
  DAT_003c3f68 = DAT_003c3f60;
  DAT_003c3f6c = DAT_003c3f60;
  DAT_003c3f80 = (float)piVar1[3];
  DAT_003c3f88 = *(undefined4 *)(param_1 + 0x8c);
  DAT_003c3f8c = 0;
  DAT_003c3f84 = (float)piVar1[4];
  DAT_003c3f9c = 0;
  DAT_003c3f98 = *(undefined4 *)(param_1 + 0x90);
  DAT_003c3f90 = 0;
  DAT_003c3f94 = 0;
  DAT_003c3fa0 = (float)(((int)(short)piVar1[7] - (*(int *)(*piVar1 + 0xc) / 2 + -0x800)) +
                        piVar1[3] / 2);
  DAT_003c3fa4 = (float)(((int)*(short *)((int)piVar1 + 0x1e) -
                         (*(int *)(*piVar1 + 0x10) / 2 + -0x800)) + piVar1[4] / 2);
  DAT_003c3fa8 = 0;
  DAT_003c3fac = 0;
  DAT_003c4020 = (float)((int)(short)piVar1[7] - (*(int *)(*piVar1 + 0xc) / 2 + -0x800));
  DAT_003c402c = 0;
  DAT_003c4028 = 0;
  DAT_003c4024 = (float)((int)*(short *)((int)piVar1 + 0x1e) -
                        (*(int *)(*piVar1 + 0x10) / 2 + -0x800));
  if (iGpffff8ef0 == 0) {
    fVar3 = fGpffff8ef4 - *(float *)(param_1 + 0x88);
    DAT_003c3f7c = fGpffff8ef4;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x88);
    DAT_003c3f7c = *(float *)(param_1 + 0x84);
  }
  DAT_003c3f78 = -255.0 / fVar3;
  fVar2 = fGpffff80a0 - DAT_003c3fa0;
  fVar3 = fGpffff80a0 - DAT_003c3fa4;
  DAT_003c3f10 = (float)((int)DAT_003c3fa0 * (uint)(DAT_003c3fa0 < fVar2) |
                        (int)fVar2 * (uint)(DAT_003c3fa0 >= fVar2));
  DAT_003c3f20 = (float)((int)DAT_003c3fa4 * (uint)(DAT_003c3fa4 < fVar3) |
                        (int)fVar3 * (uint)(DAT_003c3fa4 >= fVar3));
  DAT_003c3f14 = 1.0 / DAT_003c3f10;
  fVar3 = 1.0 / (*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x80));
  DAT_003c3f1c = *(undefined4 *)(param_1 + 0x84);
  DAT_003c3f24 = 1.0 / DAT_003c3f20;
  DAT_003c3f2c = *(undefined4 *)(param_1 + 0x80);
  DAT_003c3f30 = (float)((piVar1[3] >> 1) + 5);
  DAT_003c3f3c = *(undefined4 *)(param_1 + 0x84);
  DAT_003c3f34 = 1.0 / (float)((piVar1[3] >> 1) + 5);
  DAT_003c3f40 = (float)((piVar1[4] >> 1) + 5);
  DAT_003c3f44 = 1.0 / (float)((piVar1[4] >> 1) + 5);
  DAT_003c3f4c = *(undefined4 *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x14) == 1) {
    bGpffff8870 = bGpffff8870 & 0xf7;
    DAT_003c3f18 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x80) * -2.0 * fVar3;
    DAT_003c3f38 = DAT_003c3f18;
    DAT_003c3f28 = (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x80)) * fVar3;
    DAT_003c3f48 = DAT_003c3f28;
    return;
  }
  DAT_003c3f28 = fVar3 + fVar3;
  DAT_003c3f48 = fVar3 + fVar3;
  DAT_003c3f18 = (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x80)) * -fVar3;
  bGpffff8870 = bGpffff8870 | 8;
  DAT_003c3f38 = DAT_003c3f18;
  return;
}


// ==== FUN_002cb1f0 @ 002cb1f0 ====

void FUN_002cb1f0(void)

{
  DAT_0044946c = &LAB_002cb370;
  DAT_00449460 = &LAB_002cb248;
  DAT_00449464 = &LAB_002cb2a0;
  DAT_00449468 = &LAB_002cb300;
  FUN_002c8948();
  return;
}


// ==== FUN_002cb240 @ 002cb240 ====

void FUN_002cb240(void)

{
  return;
}


// ==== FUN_002cb3d8 @ 002cb3d8 ====

/* WARNING: Removing unreachable block (ram,0x002cb4f0) */
/* WARNING: Removing unreachable block (ram,0x002cb5ac) */

undefined8 FUN_002cb3d8(int param_1,int param_2,uint param_3,int param_4,char param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined4 *puVar18;
  undefined8 in_t0_udw;
  undefined8 in_t1_udw;
  undefined4 *puVar19;
  int iVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  ulong in_t9_udw;
  
  lVar15 = (long)(int)((uint)(param_1 * param_2 * param_4) >> 3);
  if (param_5 == '\0') {
    lVar15 = lVar15 + 0xf;
    FUN_002b3800(10);
    iVar12 = FUN_002904f0(lVar15,0x7fee0);
    uVar13 = FUN_002b42d0((iVar12 + 1) * 0x30 + 0xb0,0);
  }
  else {
    lVar15 = lVar15 + 0xf;
    iVar12 = FUN_002904f0(lVar15,0x7fee0);
    uVar13 = (*DAT_00449540)((iVar12 + 1) * 0x30 + 0xb0,0x30411);
  }
  uVar21 = (lVar15 << 0x1c) >> 0x20;
  iVar12 = (int)((ulong)(lVar15 << 0x1c) >> 0x20) + 0x7fed;
  uVar14 = (int)uVar13 + 0x3f;
  auVar22._8_8_ = in_t0_udw;
  auVar22._0_8_ = 0x5000000100000000;
  auVar17._8_8_ = in_t1_udw;
  auVar17._0_8_ = 0x10000001;
  auVar22 = _pcpyld(auVar22,auVar17);
  puVar19 = (undefined4 *)(uVar14 & 0xffffffc0);
  iVar20 = 0;
  puVar18 = puVar19;
  if (0 < iVar12 / 0x7fee) {
    do {
      *puVar18 = auVar22._0_4_;
      puVar18[1] = auVar22._4_4_;
      puVar18[2] = auVar22._8_4_;
      puVar18[3] = auVar22._12_4_;
      uVar16 = uVar21;
      if (0x7fee < (long)uVar21) {
        uVar16 = 0x7fee;
      }
      auVar3._8_8_ = in_t1_udw;
      auVar3._0_8_ = uVar16 & 0xffffffff | 0x800000000000000;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = in_t9_udw;
      auVar17 = _pcpyld(auVar7 << 0x40,auVar3);
      puVar18[4] = auVar17._0_4_;
      puVar18[5] = auVar17._4_4_;
      puVar18[6] = auVar17._8_4_;
      puVar18[7] = auVar17._12_4_;
      auVar8._4_8_ = in_t0_udw;
      auVar8._0_4_ = (uint)uVar16 | 0x50000000;
      auVar8._12_4_ = 0;
      auVar4._8_8_ = in_t1_udw;
      auVar4._0_8_ = uVar16 & 0xffffffff | 0x30000000 | (ulong)param_3 << 0x20;
      auVar17 = _pcpyld(auVar8 << 0x20,auVar4);
      puVar18[8] = auVar17._0_4_;
      puVar18[9] = auVar17._4_4_;
      puVar18[10] = auVar17._8_4_;
      puVar18[0xb] = auVar17._12_4_;
      iVar20 = iVar20 + 1;
      puVar19 = puVar19 + 0xc;
      param_3 = param_3 + 0x7fee0;
      uVar21 = (ulong)((int)uVar21 + -0x7fee);
      puVar18 = puVar18 + 0xc;
    } while (iVar20 < iVar12 / 0x7fee);
  }
  auVar1._8_8_ = in_t0_udw;
  auVar1._0_8_ = 0x5000000200000000;
  auVar5._8_8_ = in_t1_udw;
  auVar5._0_8_ = 0x60000002;
  auVar22 = _pcpyld(auVar1,auVar5);
  *puVar19 = auVar22._0_4_;
  puVar19[1] = auVar22._4_4_;
  puVar19[2] = auVar22._8_4_;
  puVar19[3] = auVar22._12_4_;
  auVar2._8_8_ = in_t0_udw;
  auVar2._0_8_ = 0xe;
  auVar6._8_8_ = in_t1_udw;
  auVar6._0_8_ = 0x1000000000008001;
  auVar22 = _pcpyld(auVar2,auVar6);
  puVar19[4] = auVar22._0_4_;
  puVar19[5] = auVar22._4_4_;
  puVar19[6] = auVar22._8_4_;
  puVar19[7] = auVar22._12_4_;
  uVar11 = DAT_0044ec0c;
  uVar10 = DAT_0044ec08;
  uVar9 = DAT_0044ec04;
  puVar19[8] = DAT_0044ec00;
  puVar19[9] = uVar9;
  puVar19[10] = uVar10;
  puVar19[0xb] = uVar11;
  FUN_003680a0(uVar14 & 0xffffffc0,(int)puVar19 + 0xaf);
  return uVar13;
}


// ==== FUN_002cb660 @ 002cb660 ====

void FUN_002cb660(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  
  uVar14 = 0;
  iVar7 = *(int *)(param_1 + 0x14);
  iVar11 = param_1 + iGpffff8e98;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar10 = *(uint *)(param_1 + 4);
  iVar9 = 0;
  piVar12 = (int *)(iVar11 + 0x3c);
  do {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar13 = *(int *)(param_1 + 0x10) >> (uVar14 & 0x1f);
    if (((uVar10 & 0xf) == 0) && (iVar2 == iVar1 * iVar7 >> 3)) {
      if (*piVar12 == 0) {
        if (*(char *)(iVar11 + 0x34) != '\0') {
          iVar5 = FUN_002cb3d8(*(int *)(param_1 + 0xc) >> (uVar14 & 0x1f),iVar13,uVar10,iVar7,
                               *(char *)(iVar11 + 0x34));
          *piVar12 = iVar5;
          goto LAB_002cb744;
        }
      }
      else {
LAB_002cb744:
        if (*(char *)(iVar11 + 0x34) != '\0') goto LAB_002cb75c;
      }
      *(undefined4 *)(iVar11 + 0x3c + iVar9) = 0;
    }
LAB_002cb75c:
    uVar10 = (iVar3 >> (uVar14 & 0x1f)) * iVar13 + uVar10;
    if ((uVar10 & 0xf) != 0) {
      uVar10 = uVar10 + 0xf & 0xfffffff0;
    }
    uVar14 = uVar14 + 1;
    iVar9 = iVar9 + 4;
    piVar12 = piVar12 + 1;
  } while ((int)uVar14 <= (int)(uint)(*(byte *)(iVar11 + 0x16) >> 2));
  if (*(int *)(iVar11 + 0x2c) == 0) {
    return;
  }
  if (8 < *(int *)(param_1 + 0x14)) {
    return;
  }
  iVar7 = (*(int *)(param_1 + 0x14) + -1) * 4;
  uVar10 = *(uint *)(iVar11 + 0xc) >> 0x13 & 0xf;
  uVar8 = 0x10;
  if (((uVar10 != 2) && (uVar10 < 3)) && (uVar10 == 0)) {
    uVar8 = 0x20;
  }
  cVar4 = *(char *)(iVar11 + 0x34);
  if (*(int *)(iVar11 + 0x38) == 0) {
    if (cVar4 == '\0') goto LAB_002cb824;
    uVar6 = FUN_002cb3d8(*(undefined4 *)(&DAT_00403eb0 + iVar7),
                         *(undefined4 *)(&DAT_00403ed0 + iVar7),*(undefined4 *)(param_1 + 8),uVar8,
                         cVar4);
    *(undefined4 *)(iVar11 + 0x38) = uVar6;
    cVar4 = *(char *)(iVar11 + 0x34);
  }
  if (cVar4 != '\0') {
    return;
  }
LAB_002cb824:
  *(undefined4 *)(iVar11 + 0x38) = 0;
  return;
}


// ==== FUN_002cb858 @ 002cb858 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cb858(ulong param_1,uint param_2,uint param_3,long param_4,ulong param_5,int param_6,
                 char param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [12];
  undefined8 extraout_v0_udw;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 in_v1_udw;
  undefined4 *puVar18;
  ulong in_a1_udw;
  
  if (param_7 == '\0') {
    FUN_002b3800(10);
    auVar15._0_8_ = ((long)(param_6 + 0x3f) & 0xffffffffffffffc0U) << 0x20 | 0x50000006;
    auVar15._8_8_ = extraout_v0_udw_00;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = in_a1_udw;
    auVar12 = _pcpyld(auVar5 << 0x40,auVar15);
    *puGpffff8e00 = auVar12._0_4_;
    puGpffff8e00[1] = auVar12._4_4_;
    puGpffff8e00[2] = auVar12._8_4_;
    puGpffff8e00[3] = auVar12._12_4_;
    uVar7 = DAT_0044ec3c;
    auVar10 = _DAT_0044ec30;
    puVar18 = puGpffff8e00 + 4;
    *puVar18 = DAT_0044ec30;
    puGpffff8e00[5] = auVar10._4_4_;
    puGpffff8e00[6] = auVar10._8_4_;
    puGpffff8e00[7] = uVar7;
    auVar12 = _DAT_0044ec00;
    puGpffff8e00[8] = DAT_0044ec00;
    puGpffff8e00[9] = auVar12._4_4_;
    puGpffff8e00[10] = auVar12._8_4_;
    puGpffff8e00[0xb] = auVar12._12_4_;
    auVar16._8_8_ = auVar12._8_8_;
    auVar16._0_8_ =
         param_5 << 0x38 | param_4 << 0x30 | ((ulong)param_3 & 0x3fff) << 0x20 |
         CONCAT44((int)((param_5 & 0xffffffff) >> 8),(int)((param_5 & 0xffffffff) << 0x18)) |
         0xa0000;
    auVar3._8_8_ = in_a1_udw;
    auVar3._0_8_ = 0x50;
    auVar12 = _pcpyld(auVar3,auVar16);
    puGpffff8e00[0xc] = auVar12._0_4_;
    puGpffff8e00[0xd] = auVar12._4_4_;
    puGpffff8e00[0xe] = auVar12._8_4_;
    puGpffff8e00[0xf] = auVar12._12_4_;
    uVar8 = DAT_0044ec1c;
    uVar7 = DAT_0044ec18;
    uVar6 = _DAT_0044ec10;
    auVar17._12_4_ = DAT_0044ec1c;
    auVar17._8_4_ = DAT_0044ec18;
    puGpffff8e00[0x10] = (int)_DAT_0044ec10;
    puGpffff8e00[0x11] = (int)((ulong)uVar6 >> 0x20);
    puGpffff8e00[0x12] = uVar7;
    puGpffff8e00[0x13] = uVar8;
    auVar17._0_8_ = (ulong)param_2 << 0x20 | param_1 & 0xffffffff;
    auVar12._8_8_ = in_v1_udw;
    auVar12._0_8_ = 0x52;
    auVar12 = _pcpyld(auVar12,auVar17);
    puGpffff8e00[0x14] = auVar12._0_4_;
    puGpffff8e00[0x15] = auVar12._4_4_;
    puGpffff8e00[0x16] = auVar12._8_4_;
    puGpffff8e00[0x17] = auVar12._12_4_;
  }
  else {
    FUN_002b3800(10);
    auVar11._0_8_ = ((long)(param_6 + 0x3f) & 0xffffffffffffffc0U) << 0x20 | 0x50000006;
    auVar11._8_8_ = extraout_v0_udw;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = in_a1_udw;
    auVar12 = _pcpyld(auVar4 << 0x40,auVar11);
    *puGpffff8e00 = auVar12._0_4_;
    puGpffff8e00[1] = auVar12._4_4_;
    puGpffff8e00[2] = auVar12._8_4_;
    puGpffff8e00[3] = auVar12._12_4_;
    uVar7 = DAT_0044ec3c;
    auVar10 = _DAT_0044ec30;
    puVar18 = puGpffff8e00 + 4;
    *puVar18 = DAT_0044ec30;
    puGpffff8e00[5] = auVar10._4_4_;
    puGpffff8e00[6] = auVar10._8_4_;
    puGpffff8e00[7] = uVar7;
    auVar12 = _DAT_0044ec00;
    puGpffff8e00[8] = DAT_0044ec00;
    puGpffff8e00[9] = auVar12._4_4_;
    puGpffff8e00[10] = auVar12._8_4_;
    puGpffff8e00[0xb] = auVar12._12_4_;
    auVar13._8_8_ = auVar12._8_8_;
    auVar13._0_8_ =
         param_5 << 0x38 | param_4 << 0x30 | ((ulong)param_3 & 0x3fff) << 0x20 |
         CONCAT44((int)((param_5 & 0xffffffff) >> 8),(int)((param_5 & 0xffffffff) << 0x18)) |
         0xa0000;
    auVar2._8_8_ = in_a1_udw;
    auVar2._0_8_ = 0x50;
    auVar12 = _pcpyld(auVar2,auVar13);
    puGpffff8e00[0xc] = auVar12._0_4_;
    puGpffff8e00[0xd] = auVar12._4_4_;
    puGpffff8e00[0xe] = auVar12._8_4_;
    puGpffff8e00[0xf] = auVar12._12_4_;
    uVar8 = DAT_0044ec1c;
    uVar7 = DAT_0044ec18;
    uVar6 = _DAT_0044ec10;
    auVar14._12_4_ = DAT_0044ec1c;
    auVar14._8_4_ = DAT_0044ec18;
    puGpffff8e00[0x10] = (int)_DAT_0044ec10;
    puGpffff8e00[0x11] = (int)((ulong)uVar6 >> 0x20);
    puGpffff8e00[0x12] = uVar7;
    puGpffff8e00[0x13] = uVar8;
    auVar14._0_8_ = (ulong)param_2 << 0x20 | param_1 & 0xffffffff;
    auVar1._8_8_ = in_v1_udw;
    auVar1._0_8_ = 0x52;
    auVar12 = _pcpyld(auVar1,auVar14);
    puGpffff8e00[0x14] = auVar12._0_4_;
    puGpffff8e00[0x15] = auVar12._4_4_;
    puGpffff8e00[0x16] = auVar12._8_4_;
    puGpffff8e00[0x17] = auVar12._12_4_;
  }
  uVar9 = DAT_0044ec2c;
  uVar8 = DAT_0044ec28;
  uVar7 = DAT_0044ec24;
  puVar18[0x14] = DAT_0044ec20;
  puVar18[0x15] = uVar7;
  puVar18[0x16] = uVar8;
  puVar18[0x17] = uVar9;
  puGpffff8e00 = puVar18 + 0x18;
  return;
}


// ==== FUN_002cba90 @ 002cba90 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cba90(int param_1,ulong param_2,uint param_3,ulong param_4,long param_5,int param_6,
                 ulong param_7,int param_8)

{
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong in_v1_udw;
  uint uVar25;
  undefined4 *puVar27;
  long lVar28;
  undefined4 *puVar29;
  int iVar31;
  undefined8 in_t4_udw;
  undefined8 in_t5_udw;
  ulong in_t6_udw;
  undefined4 uVar32;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auVar33 [16];
  undefined4 uVar36;
  ulong uVar26;
  long lVar30;
  
  uVar25 = ((uint)(param_1 * param_6) >> 3) + 0xf >> 4;
  uVar26 = (ulong)(int)uVar25;
  auVar22._8_8_ = in_t4_udw;
  auVar22._0_8_ = 0x10000001;
  auVar33._8_8_ = in_t5_udw;
  auVar33._0_8_ = 0x5000000100000000;
  auVar33 = _pcpyld(auVar33,auVar22);
  uVar20 = FUN_002904f0(uVar26 << 7,param_6);
  FUN_002b3800(10);
  lVar21 = FUN_002b42d0((int)param_2 * 0x30 + 0x30,0);
  FUN_002b3800(10);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = in_v1_udw;
  auVar1._8_8_ = in_t4_udw;
  auVar1._0_8_ = lVar21 << 0x20 | 0x50000006;
  auVar22 = _pcpyld(auVar16 << 0x40,auVar1);
  *puGpffff8e00 = auVar22._0_4_;
  puGpffff8e00[1] = auVar22._4_4_;
  puGpffff8e00[2] = auVar22._8_4_;
  puGpffff8e00[3] = auVar22._12_4_;
  uVar35 = DAT_0044ec3c;
  uVar34 = DAT_0044ec38;
  uVar32 = DAT_0044ec34;
  puGpffff8e00[4] = DAT_0044ec30;
  puGpffff8e00[5] = uVar32;
  puGpffff8e00[6] = uVar34;
  puGpffff8e00[7] = uVar35;
  uVar35 = DAT_0044ec0c;
  uVar34 = DAT_0044ec08;
  uVar32 = DAT_0044ec04;
  auVar17._4_4_ = DAT_0044ec04;
  auVar17._0_4_ = DAT_0044ec00;
  auVar17._8_4_ = DAT_0044ec08;
  auVar17._12_4_ = DAT_0044ec0c;
  puGpffff8e00[8] = DAT_0044ec00;
  puGpffff8e00[9] = uVar32;
  puGpffff8e00[10] = uVar34;
  puGpffff8e00[0xb] = uVar35;
  auVar23._8_8_ = auVar17._8_8_;
  auVar23._0_8_ = 0x50;
  auVar2._8_8_ = in_t4_udw;
  auVar2._0_8_ = param_7 << 0x38 | param_5 << 0x30 | (param_4 & 0x3fff) << 0x20 |
                 (param_7 & 0xffffffff) << 0x18 | 0xa0000;
  auVar22 = _pcpyld(auVar23,auVar2);
  puGpffff8e00[0xc] = auVar22._0_4_;
  puGpffff8e00[0xd] = auVar22._4_4_;
  puGpffff8e00[0xe] = auVar22._8_4_;
  puGpffff8e00[0xf] = auVar22._12_4_;
  auVar22 = _DAT_0044ec10;
  puGpffff8e00[0x10] = DAT_0044ec10;
  puGpffff8e00[0x11] = auVar22._4_4_;
  puGpffff8e00[0x12] = auVar22._8_4_;
  puGpffff8e00[0x13] = auVar22._12_4_;
  auVar24._8_8_ = auVar22._8_8_;
  auVar24._0_8_ = 0x52;
  auVar3._8_8_ = in_t4_udw;
  auVar3._0_8_ = param_2 << 0x20 | uVar20 & 0xffffffff;
  auVar22 = _pcpyld(auVar24,auVar3);
  puGpffff8e00[0x14] = auVar22._0_4_;
  puGpffff8e00[0x15] = auVar22._4_4_;
  puGpffff8e00[0x16] = auVar22._8_4_;
  puGpffff8e00[0x17] = auVar22._12_4_;
  uVar35 = DAT_0044ec2c;
  uVar34 = DAT_0044ec28;
  uVar32 = DAT_0044ec24;
  puGpffff8e00[0x18] = DAT_0044ec20;
  puGpffff8e00[0x19] = uVar32;
  puGpffff8e00[0x1a] = uVar34;
  puGpffff8e00[0x1b] = uVar35;
  puGpffff8e00 = puGpffff8e00 + 0x1c;
  uVar20 = 0;
  lVar30 = lVar21;
  if (param_2 != 0) {
    uVar32 = auVar33._0_4_;
    uVar34 = auVar33._4_4_;
    uVar35 = auVar33._8_4_;
    uVar36 = auVar33._12_4_;
    puVar29 = (undefined4 *)lVar21;
    if (((long)param_2 < 1) || ((param_2 & 1) != 0)) {
      puVar27 = puVar29 + 4;
      *puVar29 = uVar32;
      puVar29[1] = uVar34;
      puVar29[2] = uVar35;
      puVar29[3] = uVar36;
      iVar31 = 1;
      auVar10._8_8_ = in_t4_udw;
      auVar10._0_8_ = uVar26 | 0x800000000000000;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = in_t6_udw;
      auVar22 = _pcpyld(auVar13 << 0x40,auVar10);
      puVar29 = puVar29 + 0xc;
      goto LAB_002cbd40;
    }
    *puVar29 = uVar32;
    puVar29[1] = uVar34;
    puVar29[2] = uVar35;
    puVar29[3] = uVar36;
    lVar28 = lVar21;
    while( true ) {
      iVar31 = (int)lVar28;
      *(undefined4 *)(iVar31 + 0x30) = uVar32;
      *(undefined4 *)(iVar31 + 0x34) = uVar34;
      *(undefined4 *)(iVar31 + 0x38) = uVar35;
      *(undefined4 *)(iVar31 + 0x3c) = uVar36;
      auVar4._8_8_ = in_t4_udw;
      auVar4._0_8_ = uVar26 | 0x800000000000000;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = in_t6_udw;
      auVar22 = _pcpyld(auVar14 << 0x40,auVar4);
      *(int *)(iVar31 + 0x10) = auVar22._0_4_;
      *(int *)(iVar31 + 0x14) = auVar22._4_4_;
      *(int *)(iVar31 + 0x18) = auVar22._8_4_;
      *(int *)(iVar31 + 0x1c) = auVar22._12_4_;
      auVar5._8_8_ = in_t4_udw;
      auVar5._0_8_ = (long)(int)(uVar25 | 0x30000000) | (ulong)param_3 << 0x20;
      auVar18._4_8_ = in_t5_udw;
      auVar18._0_4_ = uVar25 | 0x50000000;
      auVar18._12_4_ = 0;
      auVar22 = _pcpyld(auVar18 << 0x20,auVar5);
      *(int *)(iVar31 + 0x20) = auVar22._0_4_;
      *(int *)(iVar31 + 0x24) = auVar22._4_4_;
      *(int *)(iVar31 + 0x28) = auVar22._8_4_;
      *(int *)(iVar31 + 0x2c) = auVar22._12_4_;
      puVar27 = (undefined4 *)(iVar31 + 0x40);
      param_3 = param_3 + param_8;
      iVar31 = (int)uVar20 + 2;
      auVar6._8_8_ = in_t4_udw;
      auVar6._0_8_ = uVar26 | 0x800000000000000;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = in_t6_udw;
      auVar22 = _pcpyld(auVar15 << 0x40,auVar6);
      puVar29 = (undefined4 *)((int)lVar30 + 0x60);
LAB_002cbd40:
      uVar20 = (ulong)iVar31;
      lVar30 = (long)(int)puVar29;
      *puVar27 = auVar22._0_4_;
      puVar27[1] = auVar22._4_4_;
      puVar27[2] = auVar22._8_4_;
      puVar27[3] = auVar22._12_4_;
      auVar7._8_8_ = in_t4_udw;
      auVar7._0_8_ = CONCAT44(param_3,uVar25) | 0x30000000;
      auVar19._4_8_ = in_t5_udw;
      auVar19._0_4_ = uVar25 | 0x50000000;
      auVar19._12_4_ = 0;
      auVar22 = _pcpyld(auVar19 << 0x20,auVar7);
      puVar27[4] = auVar22._0_4_;
      puVar27[5] = auVar22._4_4_;
      puVar27[6] = auVar22._8_4_;
      puVar27[7] = auVar22._12_4_;
      param_3 = param_3 + param_8;
      lVar28 = (long)(int)(puVar27 + 8);
      if (param_2 <= uVar20) break;
      puVar27[8] = uVar32;
      puVar27[9] = uVar34;
      puVar27[10] = uVar35;
      puVar27[0xb] = uVar36;
    }
  }
  auVar8._8_8_ = in_t4_udw;
  auVar8._0_8_ = 0x10000002;
  auVar11._8_8_ = in_t5_udw;
  auVar11._0_8_ = 0x5000000200000000;
  auVar22 = _pcpyld(auVar11,auVar8);
  puVar29 = (undefined4 *)lVar30;
  *puVar29 = auVar22._0_4_;
  puVar29[1] = auVar22._4_4_;
  puVar29[2] = auVar22._8_4_;
  puVar29[3] = auVar22._12_4_;
  auVar9._8_8_ = in_t4_udw;
  auVar9._0_8_ = 0x1000000000008001;
  auVar12._8_8_ = in_t5_udw;
  auVar12._0_8_ = 0xe;
  auVar22 = _pcpyld(auVar12,auVar9);
  puVar29[4] = auVar22._0_4_;
  puVar29[5] = auVar22._4_4_;
  puVar29[6] = auVar22._8_4_;
  puVar29[7] = auVar22._12_4_;
  uVar35 = DAT_0044ec0c;
  uVar34 = DAT_0044ec08;
  uVar32 = DAT_0044ec04;
  puVar29[8] = DAT_0044ec00;
  puVar29[9] = uVar32;
  puVar29[10] = uVar34;
  puVar29[0xb] = uVar35;
  FUN_003680a0(lVar21,(int)puVar29 + 0xaf);
  return;
}


// ==== FUN_002cbdf0 @ 002cbdf0 ====

void FUN_002cbdf0(int param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  undefined8 extraout_v0_udw;
  uint uVar22;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 in_v1_udw;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 in_register_0000003c;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  long lVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 *puVar36;
  undefined1 (*pauVar37) [16];
  undefined8 uVar38;
  undefined4 *puVar39;
  uint uVar40;
  long lVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  long lVar46;
  long lVar47;
  int *piVar48;
  uint uVar49;
  int *piVar50;
  int iVar51;
  int aiStack_110 [4];
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint auStack_f0 [4];
  undefined4 uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d0;
  int iStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  
  piVar50 = aiStack_110;
  piVar48 = (int *)(param_1 + iGpffff8e98);
  uStack_d0 = param_2;
  if ((*(byte *)((int)piVar48 + 0x36) & 1) == 0) {
    iStack_cc = *(int *)(param_1 + 0x14);
    iVar42 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x14);
    uStack_c8 = (uint)piVar48[2] >> 0x14 & 0x3f;
    uVar43 = *(uint *)(param_1 + 4);
    uGpffff88a4 = 0;
    uStack_c4 = (uint)((long)*(int *)(param_1 + 0x18) == CONCAT44(iVar42 >> 0x1f,iVar42 >> 3));
    switch(*(byte *)((int)piVar48 + 0x16) >> 2) {
    default:
      uVar22 = piVar48[9];
      uVar49 = (uint)*(ulong *)(piVar48 + 8);
      uStack_100 = uVar49 & 0x3fff;
      uStack_fc = (uint)(*(ulong *)(piVar48 + 8) >> 0x14) & 0x3fff;
      uStack_f8 = (uVar22 & 0x3fff00) >> 8;
      uStack_e0 = (int)(((ulong)uVar49 & 0xfc000) >> 0xe);
      uStack_dc = (uVar22 & 0xfc) >> 2;
      uStack_d8 = (uVar22 & 0xfc00000) >> 0x16;
    case 1:
    case 2:
    case 3:
      uVar22 = piVar48[7];
      uVar49 = (uint)*(ulong *)(piVar48 + 6);
      aiStack_110[1] = uVar49 & 0x3fff;
      aiStack_110[2] = (uint)(*(ulong *)(piVar48 + 6) >> 0x14) & 0x3fff;
      aiStack_110[3] = (uVar22 & 0x3fff00) >> 8;
      auStack_f0[1] = (int)(((ulong)uVar49 & 0xfc000) >> 0xe);
      auStack_f0[2] = (uVar22 & 0xfc) >> 2;
      auStack_f0[3] = (uVar22 & 0xfc00000) >> 0x16;
    case 0:
      uStack_c0 = 0;
      aiStack_110[0] = 0;
      auStack_f0[0] = (uint)piVar48[2] >> 0xe & 0x3f;
      piStack_b0 = piVar48 + 0xf;
      uStack_bc = param_2 >> 6;
      uStack_b8 = 0xfffffff0;
      iStack_b4 = 0;
      piStack_ac = piVar48 + 0xf;
    }
    do {
      uVar22 = *(int *)(param_1 + 0xc) >> (uStack_c0 & 0x1f);
      uVar49 = *(int *)(param_1 + 0x10) >> (uStack_c0 & 0x1f);
      iVar51 = *(int *)(param_1 + 0x18) >> (uStack_c0 & 0x1f);
      iVar42 = uStack_bc + *piVar50;
      if ((uVar43 & 0xf) == 0) {
        if (uStack_c4 == 0) {
          if (((*(byte *)((int)piVar48 + 0x36) & 2) == 0) ||
             (((uint)piVar48[2] >> 0x14 & 0x3f) != 0x13)) {
            uVar32 = uVar49;
            iVar14 = iStack_cc;
            uVar44 = uStack_c8;
            if ((*(byte *)((int)piVar48 + 0x36) & 4) == 0) {
              uVar40 = piVar50[8];
            }
            else {
              uVar40 = piVar50[8];
              if (((uint)piVar48[2] >> 0x14 & 0x3f) == 0x14) {
                uVar22 = uVar22 >> 1;
                uVar40 = uVar40 >> 1;
                uVar32 = uVar49 >> 1;
                iVar14 = 0x10;
                uVar44 = 2;
              }
            }
          }
          else {
            uVar22 = uVar22 >> 1;
            uVar40 = (uint)piVar50[8] >> 1;
            uVar32 = uVar49 >> 1;
            iVar14 = 0x20;
            uVar44 = 0;
          }
          FUN_002cba90(uVar22,uVar32,uVar43,iVar42,uVar40,iVar14,uVar44,iVar51);
        }
        else {
          if (*piStack_ac == 0) {
            iVar14 = FUN_002cb3d8(uVar22,uVar49,uVar43,iStack_cc,(char)piVar48[0xd]);
            *piStack_ac = iVar14;
          }
          if ((*(byte *)((int)piVar48 + 0x36) & 2) == 0) {
            bVar1 = *(byte *)((int)piVar48 + 0x36);
LAB_002cc404:
            if (((bVar1 & 4) == 0) || (((uint)piVar48[2] >> 0x14 & 0x3f) != 0x14)) {
              FUN_002cb858(uVar22,uVar49,iVar42,piVar50[8],uStack_c8,
                           *(undefined4 *)((int)piVar48 + iStack_b4 + 0x3c),(char)piVar48[0xd]);
              cVar13 = (char)piVar48[0xd];
            }
            else {
              FUN_002cb858(uVar22 >> 1,uVar49 >> 1,iVar42,(uint)piVar50[8] >> 1,2,
                           *(undefined4 *)((int)piVar48 + iStack_b4 + 0x3c),(char)piVar48[0xd]);
              cVar13 = (char)piVar48[0xd];
            }
          }
          else {
            if (((uint)piVar48[2] >> 0x14 & 0x3f) != 0x13) {
              bVar1 = *(byte *)((int)piVar48 + 0x36);
              goto LAB_002cc404;
            }
            FUN_002cb858(uVar22 >> 1,uVar49 >> 1,iVar42,(uint)piVar50[8] >> 1,0,*piStack_b0,
                         (char)piVar48[0xd]);
            cVar13 = (char)piVar48[0xd];
          }
          if (cVar13 == '\0') {
            *(undefined4 *)((int)piVar48 + iStack_b4 + 0x3c) = 0;
          }
        }
      }
      uVar43 = iVar51 * uVar49 + uVar43;
      if ((uVar43 & 0xf) != 0) {
        uVar43 = uVar43 + 0xf & uStack_b8;
      }
      piVar50 = piVar50 + 1;
      uStack_c0 = uStack_c0 + 1;
      iStack_b4 = iStack_b4 + 4;
      piStack_ac = piStack_ac + 1;
      piStack_b0 = piStack_b0 + 1;
    } while ((int)uStack_c0 <= (int)(uint)(*(byte *)((int)piVar48 + 0x16) >> 2));
    if ((piVar48[0xb] != 0) && (*(int *)(param_1 + 0x14) < 9)) {
      iVar51 = (*(int *)(param_1 + 0x14) + -1) * 4;
      iVar42 = piVar48[4];
      uVar43 = uStack_d0 >> 6;
      uVar22 = (uint)piVar48[3] >> 0x13 & 0xf;
      uVar24 = *(undefined4 *)(&DAT_00403ef0 + iVar51);
      uVar26 = *(undefined4 *)(&DAT_00403f10 + iVar51);
      uVar38 = 0x10;
      if ((uVar22 != 2) && ((uVar22 < 3 && (uVar22 == 0)))) {
        uVar38 = 0x20;
      }
      if (piVar48[0xe] == 0) {
        iVar51 = FUN_002cb3d8(uVar24,uVar26,*(undefined4 *)(param_1 + 8),uVar38,(char)piVar48[0xd]);
        piVar48[0xe] = iVar51;
        iVar51 = piVar48[0xe];
      }
      else {
        iVar51 = piVar48[0xe];
      }
      FUN_002cb858(uVar24,uVar26,uVar43 + iVar42,1,uVar22,iVar51,(char)piVar48[0xd]);
      if ((char)piVar48[0xd] == '\0') {
        piVar48[0xe] = 0;
      }
    }
    goto LAB_002cc69c;
  }
  puVar2 = *(uint **)(param_1 + 0x24);
  uGpffff88a4 = (undefined4)param_3;
  uVar43 = *puVar2;
  puVar45 = puVar2 + 4;
  lVar46 = (long)(int)puVar45;
  iVar42 = uVar43 * 4 + 4;
  if ((*(byte *)(param_1 + 0x21) & 0x40) != 0) {
    iVar42 = iVar42 + ((uint)piVar48[0xb] >> 4);
  }
  FUN_002b4578(param_3,iVar42);
  auVar16._0_8_ = (ulong)(int)uStack_d0;
  auVar16._8_8_ = extraout_v0_udw;
  lVar33 = (auVar16._0_8_ & 0xffffffc0) * 0x4000000;
  uVar22 = 0;
  puVar39 = puGpffff8e04;
  if (uVar43 != 0) {
    if (((int)uVar43 < 1) || (lVar41 = lVar46, lVar47 = lVar46, (uVar43 & 1) != 0)) {
      auVar11 = *(undefined1 (*) [12])(puVar2 + 4);
      uVar22 = puVar2[7];
      *puGpffff8e04 = auVar11._0_4_;
      puGpffff8e04[1] = auVar11._4_4_;
      puGpffff8e04[2] = auVar11._8_4_;
      puGpffff8e04[3] = uVar22;
      auVar11 = *(undefined1 (*) [12])(puVar2 + 8);
      uVar22 = puVar2[0xb];
      uVar38 = *(undefined8 *)(puVar2 + 10);
      puGpffff8e04[4] = auVar11._0_4_;
      puGpffff8e04[5] = auVar11._4_4_;
      puGpffff8e04[6] = auVar11._8_4_;
      puGpffff8e04[7] = uVar22;
      auVar15._0_8_ = *(long *)(puVar2 + 0xc) + lVar33;
      auVar15._8_8_ = uVar38;
      auVar3._8_4_ = in_v1_udw;
      auVar3._0_8_ = *(undefined8 *)(puVar2 + 0xe);
      auVar3._12_4_ = in_register_0000003c;
      auVar16 = _pcpyld(auVar3,auVar15);
      puGpffff8e04[8] = auVar16._0_4_;
      puGpffff8e04[9] = auVar16._4_4_;
      puGpffff8e04[10] = auVar16._8_4_;
      puGpffff8e04[0xb] = auVar16._12_4_;
      auVar11 = *(undefined1 (*) [12])(puVar2 + 0x10);
      uVar22 = puVar2[0x13];
      uVar38 = *(undefined8 *)(puVar2 + 0x12);
      puVar39 = puGpffff8e04 + 0x10;
      puGpffff8e04[0xc] = auVar11._0_4_;
      puGpffff8e04[0xd] = auVar11._4_4_;
      puGpffff8e04[0xe] = auVar11._8_4_;
      puGpffff8e04[0xf] = uVar22;
      puVar45 = puVar2 + 0x14;
      auVar16._0_8_ = (ulong)(int)puVar45;
      auVar16._8_8_ = uVar38;
      uVar22 = 1;
      lVar46 = auVar16._0_8_;
      lVar41 = auVar16._0_8_;
      lVar47 = auVar16._0_8_;
      puGpffff8e04 = puVar39;
      if (uVar43 < 2) goto LAB_002cbfa8;
    }
    do {
      pauVar37 = (undefined1 (*) [16])lVar46;
      auVar16 = *pauVar37;
      *puGpffff8e04 = auVar16._0_4_;
      puGpffff8e04[1] = auVar16._4_4_;
      puGpffff8e04[2] = auVar16._8_4_;
      puGpffff8e04[3] = auVar16._12_4_;
      uVar24 = *(undefined4 *)(pauVar37[1] + 4);
      uVar26 = *(undefined4 *)(pauVar37[1] + 8);
      uVar28 = *(undefined4 *)(pauVar37[1] + 0xc);
      puGpffff8e04[4] = *(undefined4 *)pauVar37[1];
      puGpffff8e04[5] = uVar24;
      puGpffff8e04[6] = uVar26;
      puGpffff8e04[7] = uVar28;
      auVar17._8_8_ = auVar16._8_8_;
      iVar42 = (int)lVar41;
      auVar17._0_8_ = *(long *)pauVar37[2] + lVar33;
      auVar4._8_4_ = uVar26;
      auVar4._0_8_ = *(undefined8 *)(iVar42 + 0x28);
      auVar4._12_4_ = uVar28;
      auVar16 = _pcpyld(auVar4,auVar17);
      puGpffff8e04[8] = auVar16._0_4_;
      puGpffff8e04[9] = auVar16._4_4_;
      puGpffff8e04[10] = auVar16._8_4_;
      puGpffff8e04[0xb] = auVar16._12_4_;
      uVar24 = *(undefined4 *)(pauVar37[3] + 4);
      uVar26 = *(undefined4 *)(pauVar37[3] + 8);
      uVar28 = *(undefined4 *)(pauVar37[3] + 0xc);
      puGpffff8e04[0xc] = *(undefined4 *)pauVar37[3];
      puGpffff8e04[0xd] = uVar24;
      puGpffff8e04[0xe] = uVar26;
      puGpffff8e04[0xf] = uVar28;
      uVar24 = *(undefined4 *)(pauVar37[4] + 4);
      in_v1_udw = *(undefined4 *)(pauVar37[4] + 8);
      in_register_0000003c = *(undefined4 *)(pauVar37[4] + 0xc);
      puGpffff8e04[0x10] = *(undefined4 *)pauVar37[4];
      puGpffff8e04[0x11] = uVar24;
      puGpffff8e04[0x12] = in_v1_udw;
      puGpffff8e04[0x13] = in_register_0000003c;
      auVar16 = pauVar37[5];
      puGpffff8e04[0x14] = auVar16._0_4_;
      puGpffff8e04[0x15] = auVar16._4_4_;
      puGpffff8e04[0x16] = auVar16._8_4_;
      puGpffff8e04[0x17] = auVar16._12_4_;
      auVar18._8_8_ = auVar16._8_8_;
      auVar18._0_8_ = *(long *)pauVar37[6] + lVar33;
      auVar5._8_4_ = in_v1_udw;
      auVar5._0_8_ = *(undefined8 *)(iVar42 + 0x68);
      auVar5._12_4_ = in_register_0000003c;
      auVar16 = _pcpyld(auVar5,auVar18);
      puGpffff8e04[0x18] = auVar16._0_4_;
      puGpffff8e04[0x19] = auVar16._4_4_;
      puGpffff8e04[0x1a] = auVar16._8_4_;
      puGpffff8e04[0x1b] = auVar16._12_4_;
      auVar16 = pauVar37[7];
      puGpffff8e04[0x1c] = auVar16._0_4_;
      puGpffff8e04[0x1d] = auVar16._4_4_;
      puGpffff8e04[0x1e] = auVar16._8_4_;
      puGpffff8e04[0x1f] = auVar16._12_4_;
      puVar39 = puVar39 + 0x20;
      uVar22 = uVar22 + 2;
      puVar45 = (uint *)((int)lVar47 + 0x80);
      lVar46 = (long)(int)(pauVar37 + 8);
      lVar41 = (long)(iVar42 + 0x80);
      lVar47 = (long)(int)puVar45;
      puGpffff8e04 = puGpffff8e04 + 0x20;
    } while (uVar22 < uVar43);
  }
LAB_002cbfa8:
  auVar12._8_8_ = 0;
  auVar12._0_8_ = auVar16._8_8_;
  auVar19 = auVar12 << 0x40;
  puGpffff8e04 = puVar39;
  if ((*(byte *)(param_1 + 0x21) & 0x40) != 0) {
    iVar42 = piVar48[0xb];
    puVar36 = (undefined4 *)puVar45[-3];
    uVar24 = puVar36[1];
    uVar26 = puVar36[2];
    uVar28 = puVar36[3];
    *puVar39 = *puVar36;
    puVar39[1] = uVar24;
    puVar39[2] = uVar26;
    puVar39[3] = uVar28;
    uVar24 = puVar36[5];
    uVar26 = puVar36[6];
    uVar28 = puVar36[7];
    puVar39[4] = puVar36[4];
    puVar39[5] = uVar24;
    puVar39[6] = uVar26;
    puVar39[7] = uVar28;
    uVar24 = puVar36[9];
    uVar26 = puVar36[10];
    uVar28 = puVar36[0xb];
    puVar39[8] = puVar36[8];
    puVar39[9] = uVar24;
    puVar39[10] = uVar26;
    puVar39[0xb] = uVar28;
    uVar24 = puVar36[0xd];
    uVar26 = puVar36[0xe];
    uVar28 = puVar36[0xf];
    puVar39[0xc] = puVar36[0xc];
    puVar39[0xd] = uVar24;
    puVar39[0xe] = uVar26;
    puVar39[0xf] = uVar28;
    uVar38 = *(undefined8 *)(puVar36 + 0x10);
    uVar24 = puVar36[0x12];
    uVar26 = puVar36[0x13];
    uVar9 = *(undefined8 *)(puVar36 + 0x12);
    puVar39[0x10] = (int)uVar38;
    puVar39[0x11] = (int)((ulong)uVar38 >> 0x20);
    puVar39[0x12] = uVar24;
    puVar39[0x13] = uVar26;
    puGpffff8e04 = puVar39 + 0x14;
    uVar43 = iVar42 - 0x50;
    pauVar37 = *(undefined1 (**) [16])(param_1 + 8);
    if (uVar43 < 0x40) {
      uVar24 = *(undefined4 *)pauVar37[1];
      uVar26 = *(undefined4 *)(pauVar37[1] + 4);
      in_v1_udw = *(undefined4 *)(pauVar37[1] + 8);
      in_register_0000003c = *(undefined4 *)(pauVar37[1] + 0xc);
      auVar19 = *pauVar37;
      *puGpffff8e04 = auVar19._0_4_;
      puVar39[0x15] = auVar19._4_4_;
      puVar39[0x16] = auVar19._8_4_;
      puVar39[0x17] = auVar19._12_4_;
      puVar39[0x18] = uVar24;
      puVar39[0x19] = uVar26;
      puVar39[0x1a] = in_v1_udw;
      puVar39[0x1b] = in_register_0000003c;
      puGpffff8e04 = puVar39 + 0x1c;
    }
    else {
      auVar19._0_8_ = (ulong)(int)-uVar43;
      auVar19._8_8_ = uVar9;
      if (uVar43 != 0) {
        puVar36 = puGpffff8e04;
        if (((auVar19._0_8_ & 0x7f) != 0) && (0x3f < (auVar19._0_8_ & 0x7f))) {
          auVar16 = *pauVar37;
          uVar24 = *(undefined4 *)pauVar37[1];
          uVar26 = *(undefined4 *)(pauVar37[1] + 4);
          in_v1_udw = *(undefined4 *)(pauVar37[1] + 8);
          in_register_0000003c = *(undefined4 *)(pauVar37[1] + 0xc);
          uVar38 = *(undefined8 *)pauVar37[2];
          uVar28 = *(undefined4 *)(pauVar37[2] + 8);
          uVar23 = *(undefined4 *)(pauVar37[2] + 0xc);
          uVar9 = *(undefined8 *)pauVar37[3];
          uVar25 = *(undefined4 *)(pauVar37[3] + 8);
          uVar27 = *(undefined4 *)(pauVar37[3] + 0xc);
          pauVar37 = pauVar37 + 4;
          *puGpffff8e04 = auVar16._0_4_;
          puVar39[0x15] = auVar16._4_4_;
          puVar39[0x16] = auVar16._8_4_;
          puVar39[0x17] = auVar16._12_4_;
          puVar39[0x18] = uVar24;
          puVar39[0x19] = uVar26;
          puVar39[0x1a] = in_v1_udw;
          puVar39[0x1b] = in_register_0000003c;
          puVar39[0x1c] = (int)uVar38;
          puVar39[0x1d] = (int)((ulong)uVar38 >> 0x20);
          puVar39[0x1e] = uVar28;
          puVar39[0x1f] = uVar23;
          puVar39[0x20] = (int)uVar9;
          puVar39[0x21] = (int)((ulong)uVar9 >> 0x20);
          puVar39[0x22] = uVar25;
          puVar39[0x23] = uVar27;
          puGpffff8e04 = puVar39 + 0x24;
          auVar19._8_8_ = auVar16._8_8_;
          auVar19._0_8_ = (ulong)(int)puGpffff8e04;
          uVar43 = iVar42 - 0x90;
          puVar36 = puGpffff8e04;
          if (uVar43 == 0) goto LAB_002cc128;
        }
        do {
          uVar23 = *(undefined4 *)pauVar37[1];
          uVar25 = *(undefined4 *)(pauVar37[1] + 4);
          uVar27 = *(undefined4 *)(pauVar37[1] + 8);
          uVar29 = *(undefined4 *)(pauVar37[1] + 0xc);
          uVar38 = *(undefined8 *)pauVar37[2];
          uVar30 = *(undefined4 *)(pauVar37[2] + 8);
          uVar31 = *(undefined4 *)(pauVar37[2] + 0xc);
          uVar9 = *(undefined8 *)pauVar37[3];
          uVar34 = *(undefined4 *)(pauVar37[3] + 8);
          uVar35 = *(undefined4 *)(pauVar37[3] + 0xc);
          uVar24 = *(undefined4 *)(*pauVar37 + 4);
          uVar26 = *(undefined4 *)(*pauVar37 + 8);
          uVar28 = *(undefined4 *)(*pauVar37 + 0xc);
          *puVar36 = *(undefined4 *)*pauVar37;
          puVar36[1] = uVar24;
          puVar36[2] = uVar26;
          puVar36[3] = uVar28;
          puVar36[4] = uVar23;
          puVar36[5] = uVar25;
          puVar36[6] = uVar27;
          puVar36[7] = uVar29;
          puVar36[8] = (int)uVar38;
          puVar36[9] = (int)((ulong)uVar38 >> 0x20);
          puVar36[10] = uVar30;
          puVar36[0xb] = uVar31;
          puVar36[0xc] = (int)uVar9;
          puVar36[0xd] = (int)((ulong)uVar9 >> 0x20);
          puVar36[0xe] = uVar34;
          puVar36[0xf] = uVar35;
          auVar19 = pauVar37[4];
          uVar24 = *(undefined4 *)pauVar37[5];
          uVar26 = *(undefined4 *)(pauVar37[5] + 4);
          in_v1_udw = *(undefined4 *)(pauVar37[5] + 8);
          in_register_0000003c = *(undefined4 *)(pauVar37[5] + 0xc);
          uVar38 = *(undefined8 *)pauVar37[6];
          uVar28 = *(undefined4 *)(pauVar37[6] + 8);
          uVar23 = *(undefined4 *)(pauVar37[6] + 0xc);
          uVar9 = *(undefined8 *)pauVar37[7];
          uVar25 = *(undefined4 *)(pauVar37[7] + 8);
          uVar27 = *(undefined4 *)(pauVar37[7] + 0xc);
          pauVar37 = pauVar37 + 8;
          puVar36[0x10] = auVar19._0_4_;
          puVar36[0x11] = auVar19._4_4_;
          puVar36[0x12] = auVar19._8_4_;
          puVar36[0x13] = auVar19._12_4_;
          puVar36[0x14] = uVar24;
          puVar36[0x15] = uVar26;
          puVar36[0x16] = in_v1_udw;
          puVar36[0x17] = in_register_0000003c;
          puVar36[0x18] = (int)uVar38;
          puVar36[0x19] = (int)((ulong)uVar38 >> 0x20);
          puVar36[0x1a] = uVar28;
          puVar36[0x1b] = uVar23;
          puVar36[0x1c] = (int)uVar9;
          puVar36[0x1d] = (int)((ulong)uVar9 >> 0x20);
          puVar36[0x1e] = uVar25;
          puVar36[0x1f] = uVar27;
          uVar43 = uVar43 - 0x80;
          puGpffff8e04 = puGpffff8e04 + 0x20;
          puVar36 = puVar36 + 0x20;
        } while (uVar43 != 0);
      }
    }
  }
LAB_002cc128:
  auVar20._8_8_ = auVar19._8_8_;
  auVar20._0_8_ = 0x10000002;
  auVar6._8_4_ = in_v1_udw;
  auVar6._0_8_ = 0x5000000200000000;
  auVar6._12_4_ = in_register_0000003c;
  auVar16 = _pcpyld(auVar6,auVar20);
  *puGpffff8e04 = auVar16._0_4_;
  puGpffff8e04[1] = auVar16._4_4_;
  puGpffff8e04[2] = auVar16._8_4_;
  puGpffff8e04[3] = auVar16._12_4_;
  auVar21._8_8_ = auVar16._8_8_;
  auVar21._0_8_ = 0x1000000000008001;
  auVar7._8_4_ = in_v1_udw;
  auVar7._0_8_ = 0xe;
  auVar7._12_4_ = in_register_0000003c;
  auVar16 = _pcpyld(auVar7,auVar21);
  puGpffff8e04[4] = auVar16._0_4_;
  puGpffff8e04[5] = auVar16._4_4_;
  puGpffff8e04[6] = auVar16._8_4_;
  puGpffff8e04[7] = auVar16._12_4_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = auVar16._8_8_;
  auVar8._8_4_ = in_v1_udw;
  auVar8._0_8_ = 0x7f;
  auVar8._12_4_ = in_register_0000003c;
  auVar16 = _pcpyld(auVar8,auVar10 << 0x40);
  puGpffff8e04[8] = auVar16._0_4_;
  puGpffff8e04[9] = auVar16._4_4_;
  puGpffff8e04[10] = auVar16._8_4_;
  puGpffff8e04[0xb] = auVar16._12_4_;
  puGpffff8e04 = puGpffff8e04 + 0xc;
LAB_002cc69c:
  FUN_0036d518();
  *piVar48 = *piVar48 + 1;
  FUN_0036d568();
  iVar42 = piVar48[1];
  piVar48[1] = iVar42 + 1;
  if (iVar42 + 1 == 1) {
    FUN_002b4de0(piVar48);
  }
  return;
}


// ==== FUN_002cc700 @ 002cc700 ====

void FUN_002cc700(undefined8 param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  iVar12 = (int)param_1;
  piVar11 = (int *)(iVar12 + DAT_0040e688);
  if (((*(byte *)((int)piVar11 + 0x36) & 1) == 0) && (param_2 != 0)) {
    return;
  }
  if (piVar11[0x16] == 0) {
    cVar1 = *(char *)((int)piVar11 + 0x17);
  }
  else {
    if (DAT_003c4084 == (piVar11[0x16] - (int)DAT_003c4094) * -0x55555555 >> 2) {
      if (param_2 != 0) {
        return;
      }
      FUN_0036d518();
      *piVar11 = *piVar11 + 1;
      FUN_0036d568();
      iVar10 = piVar11[1];
      piVar11[1] = iVar10 + 1;
      if (iVar10 + 1 != 1) {
        DAT_003c40a4 = iVar12;
        return;
      }
      FUN_002b4de0(piVar11);
      DAT_003c40a4 = iVar12;
      return;
    }
    cVar1 = *(char *)((int)piVar11 + 0x17);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (DAT_003c4090 == DAT_003c408c) {
    iVar10 = DAT_003c4098 + DAT_003c409c;
  }
  else {
    iVar10 = DAT_003c4094[DAT_003c4090 * 3 + 1];
  }
  if (((DAT_003c4084 == -1) ||
      (uVar8 = DAT_003c4094[DAT_003c4084 * 3 + 1] + DAT_003c4094[DAT_003c4084 * 3 + 2],
      iVar10 - uVar8 < (uint)piVar11[0xc])) &&
     (uVar8 = DAT_003c4098, iVar10 - DAT_003c4098 < (uint)piVar11[0xc])) {
    return;
  }
  if (param_2 != 0) {
    if (DAT_003c4084 == -1) {
      puVar5 = (undefined4 *)piVar11[0x16];
      goto LAB_002cca14;
    }
    if ((DAT_003c40ac != -1) && (DAT_003c4094[DAT_003c40ac * 3] == 0)) {
      DAT_003c40ac = -1;
    }
    if ((DAT_003c40b0 != -1) && (DAT_003c4094[DAT_003c40b0 * 3] == 0)) {
      DAT_003c40b0 = -1;
    }
    iVar10 = DAT_003c4084 + 1;
    if (DAT_003c4084 != -1) {
      if (iVar10 == DAT_003c4090) {
        iVar10 = 0;
      }
      iVar9 = DAT_003c4088;
      if (iVar10 == DAT_003c4088) {
        if (iVar10 == DAT_003c40ac) {
          return;
        }
        if (iVar10 == DAT_003c40b0) {
          return;
        }
        iVar9 = iVar10 + 1;
        if (iVar10 + 1 == DAT_003c4090) {
          iVar9 = 0;
        }
      }
      uVar2 = DAT_003c4094[DAT_003c4084 * 3 + 1];
      while (iVar10 != iVar9) {
        iVar7 = DAT_003c4094[iVar9 * 3];
        if (iVar7 != 0) {
          uVar6 = (DAT_003c4094 + iVar9 * 3)[1];
          bVar4 = uVar8 + (piVar11[0xc] + 0x7ffU & 0xfffff800) <= uVar6;
          if (uVar2 < uVar6) {
            if (((uVar8 < uVar2 + DAT_003c4094[DAT_003c4084 * 3 + 2]) || (bVar4)) && (uVar2 < uVar8)
               ) goto LAB_002cca10;
          }
          else {
            if (bVar4) goto LAB_002cca10;
            if (uVar6 < uVar8) {
              puVar5 = (undefined4 *)piVar11[0x16];
              goto LAB_002cca14;
            }
          }
          if (iVar7 != 0) {
            if (iVar9 == DAT_003c40ac) {
              return;
            }
            if (iVar9 == DAT_003c40b0) {
              return;
            }
          }
        }
        iVar9 = iVar9 + 1;
        if (iVar9 == DAT_003c4090) {
          iVar9 = 0;
        }
      }
      puVar5 = (undefined4 *)piVar11[0x16];
      goto LAB_002cca14;
    }
  }
LAB_002cca10:
  puVar5 = (undefined4 *)piVar11[0x16];
LAB_002cca14:
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    piVar11[0x16] = 0;
  }
  FUN_002cbdf0(param_1,uVar8,param_2);
  iVar10 = DAT_003c4084 + 1;
  if (DAT_003c4084 == -1) {
    DAT_003c4084 = 0;
    DAT_003c4088 = 0;
    *DAT_003c4094 = iVar12;
    piVar11[0x16] = (int)DAT_003c4094;
    DAT_003c4094[1] = uVar8;
    DAT_003c4094[2] = piVar11[0xc] + 0x7ffU & 0xfffff800;
  }
  else {
    if (iVar10 == DAT_003c4090) {
      iVar10 = 0;
    }
    if (iVar10 == DAT_003c4088) {
      if (DAT_003c4094[iVar10 * 3] != 0) {
        iVar9 = DAT_003c4094[iVar10 * 3] + DAT_0040e688;
        **(undefined4 **)(iVar9 + 0x58) = 0;
        *(undefined4 *)(iVar9 + 0x58) = 0;
      }
      DAT_003c4088 = DAT_003c4088 + 1;
      if (DAT_003c4088 == DAT_003c4090) {
        DAT_003c4088 = 0;
      }
    }
    iVar9 = DAT_0040e688;
    DAT_003c4094[iVar10 * 3] = iVar12;
    piVar11[0x16] = (int)(DAT_003c4094 + iVar10 * 3);
    DAT_003c4094[iVar10 * 3 + 1] = uVar8;
    uVar6 = piVar11[0xc] + 0x7ffU & 0xfffff800;
    DAT_003c4094[iVar10 * 3 + 2] = uVar6;
    piVar11 = DAT_003c4094 + DAT_003c4088 * 3;
    uVar2 = DAT_003c4094[DAT_003c4084 * 3 + 1];
    iVar12 = DAT_003c4094[DAT_003c4084 * 3 + 2];
    if (*piVar11 == 0) goto LAB_002ccb84;
    DAT_003c4084 = iVar10;
    if (iVar10 != DAT_003c4088) {
      uVar3 = piVar11[1];
      do {
        bVar4 = uVar8 + uVar6 <= uVar3;
        if (uVar2 < uVar3) {
          if ((uVar8 < uVar2 + iVar12) || (bVar4)) {
            if (uVar2 < uVar8) {
              DAT_003c4084 = iVar10;
              return;
            }
            iVar7 = *piVar11;
          }
          else {
            iVar7 = *piVar11;
          }
        }
        else {
          if (bVar4) {
            DAT_003c4084 = iVar10;
            return;
          }
          if (uVar3 < uVar8) {
            DAT_003c4084 = iVar10;
            return;
          }
          iVar7 = *piVar11;
        }
        if (iVar7 != 0) {
          **(undefined4 **)(iVar7 + iVar9 + 0x58) = 0;
          *(undefined4 *)(iVar7 + iVar9 + 0x58) = 0;
        }
LAB_002ccb84:
        do {
          DAT_003c4088 = DAT_003c4088 + 1;
          if (DAT_003c4088 == DAT_003c4090) {
            DAT_003c4088 = 0;
          }
          piVar11 = DAT_003c4094 + DAT_003c4088 * 3;
        } while (*piVar11 == 0);
        if (iVar10 == DAT_003c4088) {
          DAT_003c4084 = iVar10;
          return;
        }
        uVar3 = piVar11[1];
      } while( true );
    }
  }
  return;
}


// ==== FUN_002ccc48 @ 002ccc48 ====

undefined8 FUN_002ccc48(undefined4 param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  undefined8 in_v1_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_a0_udw;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_a1_udw;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong in_a3_udw;
  undefined8 in_t0_udw;
  
  uGpffff88a4 = 0;
  DAT_003c4098 = param_1;
  DAT_003c409c = param_2;
  DAT_003c40b4 = param_1;
  if (DAT_003c4080 == 0) {
    DAT_003c40a0 = (code *)&LAB_002ce158;
  }
  else {
    lVar2 = (*DAT_00449540)(iGpffff88a0 * 0xc,0x40411);
    DAT_003c4094 = (undefined4)lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    DAT_003c40b0 = 0xffffffff;
    DAT_003c4090 = iGpffff88a0;
    DAT_003c40a0 = FUN_002cc700;
    DAT_003c4084 = 0xffffffff;
    DAT_003c4088 = 0xffffffff;
    DAT_003c408c = iGpffff88a0;
    DAT_003c40a4 = 0;
    DAT_003c40ac = 0xffffffff;
    in_v0_udw = extraout_v0_udw;
  }
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = 0xe;
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = 0x3f;
  auVar6._8_8_ = in_a0_udw;
  auVar6._0_8_ = 0x51;
  auVar9._8_8_ = in_v0_udw;
  auVar9._0_8_ = 0x53;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = in_a3_udw;
  auVar3 = _pcpyld(auVar9,auVar3 << 0x40);
  auVar5._8_8_ = in_t0_udw;
  auVar5._0_8_ = 0x1000000000008005;
  auVar9 = _pcpyld(auVar8,auVar5);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = in_a3_udw;
  auVar5 = _pcpyld(auVar4,auVar7 << 0x40);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_a3_udw;
  auVar7 = _pcpyld(auVar6,auVar1 << 0x40);
  DAT_0044ec3c = auVar9._12_4_;
  DAT_0044ec38 = auVar9._8_4_;
  DAT_0044ec34 = auVar9._4_4_;
  DAT_0044ec30 = auVar9._0_4_;
  DAT_0044ec2c = auVar3._12_4_;
  DAT_0044ec28 = auVar3._8_4_;
  DAT_0044ec24 = auVar3._4_4_;
  DAT_0044ec20 = auVar3._0_4_;
  DAT_0044ec1c = auVar7._12_4_;
  DAT_0044ec18 = auVar7._8_4_;
  DAT_0044ec14 = auVar7._4_4_;
  DAT_0044ec10 = auVar7._0_4_;
  DAT_0044ec0c = auVar5._12_4_;
  DAT_0044ec08 = auVar5._8_4_;
  DAT_0044ec04 = auVar5._4_4_;
  DAT_0044ec00 = auVar5._0_4_;
  return 1;
}


// ==== FUN_002ccd48 @ 002ccd48 ====

void FUN_002ccd48(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_003c4080 != 0) {
    iVar2 = DAT_003c4088;
    if (DAT_003c4088 != DAT_003c4084) {
      do {
        iVar1 = *(int *)(iVar2 * 0xc + DAT_003c4094);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + iGpffff8e98 + 0x58) = 0;
        }
        iVar2 = (iVar2 + 1) % (int)DAT_003c4090;
        if (DAT_003c4090 == 0) {
          trap(7);
        }
      } while (iVar2 != DAT_003c4084);
    }
    if (DAT_003c4090 < DAT_003c408c) {
      iVar2 = DAT_003c4090 * 0xc;
      uVar3 = DAT_003c4090;
      do {
        iVar1 = *(int *)(iVar2 + DAT_003c4094) + iGpffff8e98;
        if (*(int *)(iVar2 + DAT_003c4094) != 0) {
          *(undefined4 *)(iVar1 + 0x58) = 0;
          *(undefined1 *)(iVar1 + 0x17) = 0;
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar3 < DAT_003c408c);
    }
    (*DAT_00449544)(DAT_003c4094);
  }
  DAT_003c409c = 0xffffffff;
  DAT_003c4080 = 1;
  DAT_003c40b8 = 0;
  DAT_003c4084 = 0;
  DAT_003c4088 = 0;
  DAT_003c408c = 0;
  DAT_003c4090 = 0;
  DAT_003c4094 = 0;
  DAT_003c4098 = 0xffffffff;
  DAT_003c40b4 = 0xffffffff;
  DAT_003c40a0 = 0;
  DAT_003c40a4 = 0;
  return;
}


// ==== FUN_002cce80 @ 002cce80 ====

undefined8 FUN_002cce80(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  int iVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong extraout_v0_udw;
  int iVar18;
  int in_v1_udw;
  int in_register_0000003c;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int in_a0_udw;
  int iVar23;
  int in_register_0000004c;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int *piVar29;
  undefined8 in_a2_udw;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int *piVar32;
  long lVar33;
  undefined1 (*pauVar34) [16];
  undefined8 in_t0_udw;
  uint uVar35;
  int iVar36;
  uint in_hi;
  
  iVar36 = param_1 + iGpffff8e98;
  if (*(int *)(iVar36 + 0x58) != 0) {
    if ((*(byte *)(param_1 + 0x21) & 0x40) == 0) {
      return 0;
    }
    if ((*(byte *)(iVar36 + 0x36) & 1) != 0) {
      piVar32 = *(int **)(param_1 + 0x24) + (**(int **)(param_1 + 0x24) + -1) * 0x10 + 4;
      FUN_002b4578(0,(*(uint *)(iVar36 + 0x2c) >> 4) + 8);
      uVar35 = *(uint *)(*(int *)(iVar36 + 0x58) + 4);
      iVar18 = piVar32[1];
      iVar16 = piVar32[2];
      iVar17 = piVar32[3];
      *piGpffff8e04 = *piVar32;
      piGpffff8e04[1] = iVar18;
      piGpffff8e04[2] = iVar16;
      piGpffff8e04[3] = iVar17;
      auVar12 = *(undefined1 (*) [16])(piVar32 + 4);
      piGpffff8e04[4] = auVar12._0_4_;
      piGpffff8e04[5] = auVar12._4_4_;
      piGpffff8e04[6] = auVar12._8_4_;
      piGpffff8e04[7] = auVar12._12_4_;
      auVar11._8_8_ = auVar12._8_8_;
      auVar11._0_8_ = *(long *)(piVar32 + 8) + ((ulong)(uVar35 >> 6) << 0x20);
      auVar12._8_4_ = in_a0_udw;
      auVar12._0_8_ = *(undefined8 *)(piVar32 + 10);
      auVar12._12_4_ = in_register_0000004c;
      auVar12 = _pcpyld(auVar12,auVar11);
      piGpffff8e04[8] = auVar12._0_4_;
      piGpffff8e04[9] = auVar12._4_4_;
      piGpffff8e04[10] = auVar12._8_4_;
      piGpffff8e04[0xb] = auVar12._12_4_;
      iVar18 = piVar32[0xd];
      iVar16 = piVar32[0xe];
      iVar17 = piVar32[0xf];
      piGpffff8e04[0xc] = piVar32[0xc];
      piGpffff8e04[0xd] = iVar18;
      piGpffff8e04[0xe] = iVar16;
      piGpffff8e04[0xf] = iVar17;
      iVar18 = *(int *)(iVar36 + 0x2c);
      piVar32 = (int *)piVar32[0xd];
      iVar16 = piVar32[1];
      iVar17 = piVar32[2];
      iVar19 = piVar32[3];
      piGpffff8e04[0x10] = *piVar32;
      piGpffff8e04[0x11] = iVar16;
      piGpffff8e04[0x12] = iVar17;
      piGpffff8e04[0x13] = iVar19;
      iVar16 = piVar32[5];
      iVar17 = piVar32[6];
      iVar19 = piVar32[7];
      piGpffff8e04[0x14] = piVar32[4];
      piGpffff8e04[0x15] = iVar16;
      piGpffff8e04[0x16] = iVar17;
      piGpffff8e04[0x17] = iVar19;
      iVar16 = piVar32[9];
      iVar17 = piVar32[10];
      iVar19 = piVar32[0xb];
      piGpffff8e04[0x18] = piVar32[8];
      piGpffff8e04[0x19] = iVar16;
      piGpffff8e04[0x1a] = iVar17;
      piGpffff8e04[0x1b] = iVar19;
      iVar16 = piVar32[0xd];
      iVar17 = piVar32[0xe];
      iVar19 = piVar32[0xf];
      piGpffff8e04[0x1c] = piVar32[0xc];
      piGpffff8e04[0x1d] = iVar16;
      piGpffff8e04[0x1e] = iVar17;
      piGpffff8e04[0x1f] = iVar19;
      uVar7 = *(undefined8 *)(piVar32 + 0x10);
      iVar16 = piVar32[0x12];
      iVar17 = piVar32[0x13];
      uVar10 = *(undefined8 *)(piVar32 + 0x12);
      piGpffff8e04[0x20] = (int)uVar7;
      piGpffff8e04[0x21] = (int)((ulong)uVar7 >> 0x20);
      piGpffff8e04[0x22] = iVar16;
      piGpffff8e04[0x23] = iVar17;
      piVar32 = piGpffff8e04 + 0x24;
      uVar35 = iVar18 - 0x50;
      auVar13._0_8_ = CONCAT71(0,uVar35 < 0x40);
      auVar13._8_8_ = uVar10;
      pauVar34 = *(undefined1 (**) [16])(param_1 + 8);
      if (auVar13._0_8_ == 0) {
        if (uVar35 != 0) {
          lVar33 = (long)(int)piVar32;
          piVar29 = piVar32;
          if (((-uVar35 & 0x7f) != 0) && (0x3f < (-uVar35 & 0x7f))) {
            auVar12 = *pauVar34;
            iVar16 = *(int *)pauVar34[1];
            iVar17 = *(int *)(pauVar34[1] + 4);
            in_v1_udw = *(int *)(pauVar34[1] + 8);
            in_register_0000003c = *(int *)(pauVar34[1] + 0xc);
            iVar19 = *(int *)pauVar34[2];
            iVar21 = *(int *)(pauVar34[2] + 4);
            in_a0_udw = *(int *)(pauVar34[2] + 8);
            in_register_0000004c = *(int *)(pauVar34[2] + 0xc);
            uVar7 = *(undefined8 *)pauVar34[3];
            iVar25 = *(int *)(pauVar34[3] + 8);
            iVar27 = *(int *)(pauVar34[3] + 0xc);
            pauVar34 = pauVar34 + 4;
            *piVar32 = auVar12._0_4_;
            piGpffff8e04[0x25] = auVar12._4_4_;
            piGpffff8e04[0x26] = auVar12._8_4_;
            piGpffff8e04[0x27] = auVar12._12_4_;
            piGpffff8e04[0x28] = iVar16;
            piGpffff8e04[0x29] = iVar17;
            piGpffff8e04[0x2a] = in_v1_udw;
            piGpffff8e04[0x2b] = in_register_0000003c;
            piGpffff8e04[0x2c] = iVar19;
            piGpffff8e04[0x2d] = iVar21;
            piGpffff8e04[0x2e] = in_a0_udw;
            piGpffff8e04[0x2f] = in_register_0000004c;
            piGpffff8e04[0x30] = (int)uVar7;
            piGpffff8e04[0x31] = (int)((ulong)uVar7 >> 0x20);
            piGpffff8e04[0x32] = iVar25;
            piGpffff8e04[0x33] = iVar27;
            piVar32 = piGpffff8e04 + 0x34;
            auVar13._8_8_ = auVar12._8_8_;
            auVar13._0_8_ = (ulong)(int)piVar32;
            uVar35 = iVar18 - 0x90;
            lVar33 = auVar13._0_8_;
            piVar29 = piVar32;
            if (uVar35 == 0) goto LAB_002cd0e0;
          }
          do {
            iVar19 = *(int *)pauVar34[1];
            iVar21 = *(int *)(pauVar34[1] + 4);
            iVar25 = *(int *)(pauVar34[1] + 8);
            iVar27 = *(int *)(pauVar34[1] + 0xc);
            iVar20 = *(int *)pauVar34[2];
            iVar22 = *(int *)(pauVar34[2] + 4);
            iVar23 = *(int *)(pauVar34[2] + 8);
            iVar24 = *(int *)(pauVar34[2] + 0xc);
            uVar7 = *(undefined8 *)pauVar34[3];
            iVar26 = *(int *)(pauVar34[3] + 8);
            iVar28 = *(int *)(pauVar34[3] + 0xc);
            iVar18 = *(int *)(*pauVar34 + 4);
            iVar16 = *(int *)(*pauVar34 + 8);
            iVar17 = *(int *)(*pauVar34 + 0xc);
            *piVar29 = *(int *)*pauVar34;
            piVar29[1] = iVar18;
            piVar29[2] = iVar16;
            piVar29[3] = iVar17;
            piVar29[4] = iVar19;
            piVar29[5] = iVar21;
            piVar29[6] = iVar25;
            piVar29[7] = iVar27;
            piVar29[8] = iVar20;
            piVar29[9] = iVar22;
            piVar29[10] = iVar23;
            piVar29[0xb] = iVar24;
            piVar29[0xc] = (int)uVar7;
            piVar29[0xd] = (int)((ulong)uVar7 >> 0x20);
            piVar29[0xe] = iVar26;
            piVar29[0xf] = iVar28;
            auVar13 = pauVar34[4];
            iVar18 = *(int *)pauVar34[5];
            iVar16 = *(int *)(pauVar34[5] + 4);
            in_v1_udw = *(int *)(pauVar34[5] + 8);
            in_register_0000003c = *(int *)(pauVar34[5] + 0xc);
            iVar17 = *(int *)pauVar34[6];
            iVar19 = *(int *)(pauVar34[6] + 4);
            in_a0_udw = *(int *)(pauVar34[6] + 8);
            in_register_0000004c = *(int *)(pauVar34[6] + 0xc);
            uVar7 = *(undefined8 *)pauVar34[7];
            iVar21 = *(int *)(pauVar34[7] + 8);
            iVar25 = *(int *)(pauVar34[7] + 0xc);
            pauVar34 = pauVar34 + 8;
            piVar29[0x10] = auVar13._0_4_;
            piVar29[0x11] = auVar13._4_4_;
            piVar29[0x12] = auVar13._8_4_;
            piVar29[0x13] = auVar13._12_4_;
            piVar29[0x14] = iVar18;
            piVar29[0x15] = iVar16;
            piVar29[0x16] = in_v1_udw;
            piVar29[0x17] = in_register_0000003c;
            piVar29[0x18] = iVar17;
            piVar29[0x19] = iVar19;
            piVar29[0x1a] = in_a0_udw;
            piVar29[0x1b] = in_register_0000004c;
            piVar29[0x1c] = (int)uVar7;
            piVar29[0x1d] = (int)((ulong)uVar7 >> 0x20);
            piVar29[0x1e] = iVar21;
            piVar29[0x1f] = iVar25;
            uVar35 = uVar35 - 0x80;
            piVar32 = (int *)((int)lVar33 + 0x80);
            lVar33 = (long)(int)piVar32;
            piVar29 = piVar29 + 0x20;
          } while (uVar35 != 0);
        }
      }
      else {
        iVar18 = *(int *)pauVar34[1];
        iVar16 = *(int *)(pauVar34[1] + 4);
        in_v1_udw = *(int *)(pauVar34[1] + 8);
        in_register_0000003c = *(int *)(pauVar34[1] + 0xc);
        auVar13 = *pauVar34;
        *piVar32 = auVar13._0_4_;
        piGpffff8e04[0x25] = auVar13._4_4_;
        piGpffff8e04[0x26] = auVar13._8_4_;
        piGpffff8e04[0x27] = auVar13._12_4_;
        piGpffff8e04[0x28] = iVar18;
        piGpffff8e04[0x29] = iVar16;
        piGpffff8e04[0x2a] = in_v1_udw;
        piGpffff8e04[0x2b] = in_register_0000003c;
        piVar32 = piGpffff8e04 + 0x2c;
      }
LAB_002cd0e0:
      auVar14._8_8_ = auVar13._8_8_;
      auVar14._0_8_ = 0x10000002;
      auVar2._8_4_ = in_a0_udw;
      auVar2._0_8_ = 0x5000000200000000;
      auVar2._12_4_ = in_register_0000004c;
      auVar12 = _pcpyld(auVar2,auVar14);
      *piVar32 = auVar12._0_4_;
      piVar32[1] = auVar12._4_4_;
      piVar32[2] = auVar12._8_4_;
      piVar32[3] = auVar12._12_4_;
      auVar15._8_8_ = auVar12._8_8_;
      auVar15._0_8_ = 0x1000000000008001;
      auVar3._8_4_ = in_a0_udw;
      auVar3._0_8_ = 0xe;
      auVar3._12_4_ = in_register_0000004c;
      auVar12 = _pcpyld(auVar3,auVar15);
      piVar32[4] = auVar12._0_4_;
      piVar32[5] = auVar12._4_4_;
      piVar32[6] = auVar12._8_4_;
      piVar32[7] = auVar12._12_4_;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar12._8_8_;
      auVar1._8_4_ = in_v1_udw;
      auVar1._0_8_ = 0x7f;
      auVar1._12_4_ = in_register_0000003c;
      auVar12 = _pcpyld(auVar1,auVar8 << 0x40);
      piVar32[8] = auVar12._0_4_;
      piVar32[9] = auVar12._4_4_;
      piVar32[10] = auVar12._8_4_;
      piVar32[0xb] = auVar12._12_4_;
      piGpffff8e04 = piVar32 + 0xc;
      if (DAT_003c40a4 != param_1) {
        return 1;
      }
      if (DAT_003c40a8 == 0) {
        iVar18 = (DAT_003c4094 | in_hi) + DAT_003c40ac * 0xc;
      }
      else {
        iVar18 = (DAT_003c4094 | in_hi) + DAT_003c40b0 * 0xc;
      }
      if (*(int *)(iVar36 + 0x58) != iVar18) {
        return 1;
      }
      FUN_002b3d88(0x80000000,3);
      auVar30._8_8_ = in_a2_udw;
      auVar30._0_8_ = 0x1000000000008002;
      auVar5._8_8_ = in_t0_udw;
      auVar5._0_8_ = 0xe;
      auVar12 = _pcpyld(auVar5,auVar30);
      *puGpffff8e00 = auVar12._0_4_;
      puGpffff8e00[1] = auVar12._4_4_;
      puGpffff8e00[2] = auVar12._8_4_;
      puGpffff8e00[3] = auVar12._12_4_;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = extraout_v0_udw;
      auVar4._8_4_ = in_a0_udw;
      auVar4._0_8_ = 0x3f;
      auVar4._12_4_ = in_register_0000004c;
      auVar12 = _pcpyld(auVar4,auVar9 << 0x40);
      puGpffff8e00[4] = auVar12._0_4_;
      puGpffff8e00[5] = auVar12._4_4_;
      puGpffff8e00[6] = auVar12._8_4_;
      puGpffff8e00[7] = auVar12._12_4_;
      auVar31._8_8_ = auVar12._8_8_;
      uVar35 = 6;
      auVar31._0_8_ = *(undefined8 *)(iVar36 + 8);
      if (DAT_003c40a8 != 0) {
        uVar35 = 7;
      }
      auVar6._4_4_ = 0;
      auVar6._0_4_ = uVar35;
      auVar6._8_8_ = in_t0_udw;
      auVar12 = _pcpyld(auVar6,auVar31);
      puGpffff8e00[8] = auVar12._0_4_;
      puGpffff8e00[9] = auVar12._4_4_;
      puGpffff8e00[10] = auVar12._8_4_;
      puGpffff8e00[0xb] = auVar12._12_4_;
      puGpffff8e00 = puGpffff8e00 + 0xc;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002cd230 @ 002cd230 ====

undefined4 FUN_002cd230(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
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
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 in_v1_udw;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  undefined8 in_a0_udw;
  undefined4 uVar26;
  uint uVar27;
  undefined8 in_a2_udw;
  undefined1 auVar23 [16];
  
  iVar15 = iGpffff8e98;
  if (param_1 == DAT_003c40a4) {
LAB_002cd29c:
    iVar17 = *(int *)((int)param_1 + iVar15 + 0x58);
LAB_002cd2a0:
    if (iVar17 != 0) goto LAB_002cd2a8;
LAB_002cd2fc:
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    iVar17 = *(int *)((int)param_1 + iGpffff8e98 + 0x58);
    if (((*(byte *)(param_1 + 8) & 0x80) != 0) || (param_1[1] == 0)) goto LAB_002cd2a0;
    if (iVar17 == 0) {
      (*DAT_003c40a0)(param_1,0);
      goto LAB_002cd29c;
    }
LAB_002cd2a8:
    if (DAT_003c4080 != 0) {
      uVar27 = *(uint *)(iVar17 + 4) >> 6;
      *(uint *)((int)param_1 + iVar15 + 8) =
           *(uint *)((int)param_1 + iVar15 + 8) & 0xffffc000 | uVar27 & 0x3fff;
      *(uint *)((int)param_1 + iVar15 + 0xc) =
           *(uint *)((int)param_1 + iVar15 + 0xc) & 0xfff8001f |
           (uVar27 + *(int *)((int)param_1 + iVar15 + 0x10) & 0x3fff) << 5;
      goto LAB_002cd2fc;
    }
    bVar1 = *(byte *)(param_1 + 8);
  }
  if (((bVar1 & 7) != 2) && (*(int *)((int)param_1 + iVar15 + 0x58) == 0)) {
    return 0;
  }
  if (((DAT_003c40a4 == param_1) && (iGpffff8ea0 != -1)) && (DAT_003c40a8 == param_2)) {
    if ((bVar1 & 7) != 2) {
      return 1;
    }
    if ((int *)*param_1 == param_1) {
      return 1;
    }
  }
  iVar17 = *(int *)((int)param_1 + iVar15 + 0x58);
  if (iVar17 != 0) {
    if (DAT_003c4080 == 0) {
      cVar2 = *(char *)((int)param_1 + iVar15 + 0x17);
      goto LAB_002cd3cc;
    }
    if (param_2 == 0) {
      DAT_003c40ac = (iVar17 - DAT_003c4094) * -0x55555555 >> 2;
    }
    else {
      DAT_003c40b0 = (iVar17 - DAT_003c4094) * -0x55555555 >> 2;
    }
  }
  cVar2 = *(char *)((int)param_1 + iVar15 + 0x17);
LAB_002cd3cc:
  if (((cVar2 == '\0') && (iGpffff88a4 == 0)) && (DAT_003c4080 != 0)) {
    uGpffff8e08 = 0;
  }
  uVar19 = 5;
  if (param_2 == 0) {
    uVar19 = 6;
  }
  DAT_003c40a4 = param_1;
  DAT_003c40a8 = param_2;
  FUN_002b3d88(0x80000000,uVar19);
  uVar26 = 0x8005;
  if (param_2 != 0) {
    uVar26 = 0x8004;
  }
  auVar20._8_8_ = in_v1_udw;
  auVar20._0_8_ = 0xe;
  auVar7._4_4_ = 0x10000000;
  auVar7._0_4_ = uVar26;
  auVar7._8_8_ = in_a2_udw;
  auVar21 = _pcpyld(auVar20,auVar7);
  *puGpffff8e00 = auVar21._0_4_;
  puGpffff8e00[1] = auVar21._4_4_;
  puGpffff8e00[2] = auVar21._8_4_;
  puGpffff8e00[3] = auVar21._12_4_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auVar21._8_8_;
  auVar21._8_8_ = in_a0_udw;
  auVar21._0_8_ = 0x3f;
  auVar21 = _pcpyld(auVar21,auVar14 << 0x40);
  puGpffff8e00[4] = auVar21._0_4_;
  puGpffff8e00[5] = auVar21._4_4_;
  puGpffff8e00[6] = auVar21._8_4_;
  puGpffff8e00[7] = auVar21._12_4_;
  uVar26 = *(undefined4 *)((int)param_1 + iVar15 + 0xc);
  auVar22._8_8_ = auVar21._8_8_;
  uVar27 = (uint)*(undefined8 *)((int)param_1 + iVar15 + 8);
  if ((*(byte *)(param_1 + 8) & 7) == 2) {
    if ((uGpffff8834 & 1) == 0) {
      uVar25 = (uint)DAT_0044dd90;
    }
    else {
      uVar25 = (uint)DAT_0044df00;
    }
    uVar18 = CONCAT44(uVar26,uVar27) & 0xffffffffffffc000;
    uVar27 = (uint)uVar18 |
             (*(uint *)((int)param_1 + iVar15 + 8) & 0x3fff) + (uVar25 & 0x1ff) * 0x20;
    uVar26 = (undefined4)(uVar18 >> 0x20);
  }
  uVar19 = 6;
  if (param_2 != 0) {
    uVar19 = 7;
  }
  auVar22._0_8_ = uVar19;
  auVar8._4_4_ = uVar26;
  auVar8._0_4_ = uVar27;
  auVar8._8_8_ = in_a2_udw;
  auVar21 = _pcpyld(auVar22,auVar8);
  puGpffff8e00[8] = auVar21._0_4_;
  puGpffff8e00[9] = auVar21._4_4_;
  puGpffff8e00[10] = auVar21._8_4_;
  puGpffff8e00[0xb] = auVar21._12_4_;
  puVar16 = puGpffff8e00 + 0xc;
  if (param_2 == 0) {
    uVar3 = *(ushort *)((int)param_1 + iVar15 + 0x14);
    uGpffff8808 = uGpffff8808 & 0xfffff000ffe7fde3 |
                  (ulong)*(byte *)((int)param_1 + iVar15 + 0x16) | ((ulong)uVar3 & 0xfff) << 0x20 |
                  ((long)(int)(uint)(uVar3 >> 0xc) & 3U) << 0x13;
    auVar4._8_8_ = in_a0_udw;
    auVar4._0_8_ = uGpffff8808;
    auVar9._8_8_ = in_a2_udw;
    auVar9._0_8_ = 0x14;
    auVar21 = _pcpyld(auVar9,auVar4);
    puGpffff8e00[0xc] = auVar21._0_4_;
    puGpffff8e00[0xd] = auVar21._4_4_;
    puGpffff8e00[0xe] = auVar21._8_4_;
    puGpffff8e00[0xf] = auVar21._12_4_;
    puVar16 = puGpffff8e00 + 0x10;
  }
  puGpffff8e00 = puVar16;
  uVar18 = (long)*(int *)((int)param_1 + iVar15 + 8) & 0x3fff;
  auVar23._8_8_ = auVar21._8_8_;
  uVar18 = uVar18 | uVar18 << 0x14 | uVar18 << 0x28;
  if (DAT_003c4080 == 0) {
    uVar19 = 0x34;
    if (param_2 != 0) {
      uVar19 = 0x35;
    }
    auVar24._8_8_ = auVar23._8_8_;
    auVar24._0_8_ = uVar19;
    auVar12._8_8_ = in_a2_udw;
    auVar12._0_8_ = *(undefined8 *)((int)param_1 + iVar15 + 0x18);
    auVar21 = _pcpyld(auVar24,auVar12);
    *puGpffff8e00 = auVar21._0_4_;
    puGpffff8e00[1] = auVar21._4_4_;
    puGpffff8e00[2] = auVar21._8_4_;
    puGpffff8e00[3] = auVar21._12_4_;
    uVar27 = 0x36;
    if (param_2 != 0) {
      uVar27 = 0x37;
    }
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar27;
    auVar6._8_8_ = in_a0_udw;
    auVar13._8_8_ = in_a2_udw;
    auVar13._0_8_ = *(undefined8 *)((int)param_1 + iVar15 + 0x20);
    auVar21 = _pcpyld(auVar6,auVar13);
    puGpffff8e00[4] = auVar21._0_4_;
    puGpffff8e00[5] = auVar21._4_4_;
    puGpffff8e00[6] = auVar21._8_4_;
    puGpffff8e00[7] = auVar21._12_4_;
  }
  else {
    uVar19 = 0x34;
    if (param_2 != 0) {
      uVar19 = 0x35;
    }
    auVar23._0_8_ = uVar19;
    auVar10._8_8_ = in_a2_udw;
    auVar10._0_8_ = *(long *)((int)param_1 + iVar15 + 0x18) + uVar18;
    auVar21 = _pcpyld(auVar23,auVar10);
    *puGpffff8e00 = auVar21._0_4_;
    puGpffff8e00[1] = auVar21._4_4_;
    puGpffff8e00[2] = auVar21._8_4_;
    puGpffff8e00[3] = auVar21._12_4_;
    uVar27 = 0x36;
    if (param_2 != 0) {
      uVar27 = 0x37;
    }
    auVar5._4_4_ = 0;
    auVar5._0_4_ = uVar27;
    auVar5._8_8_ = in_a0_udw;
    auVar11._8_8_ = in_a2_udw;
    auVar11._0_8_ = *(long *)((int)param_1 + iVar15 + 0x20) + uVar18;
    auVar21 = _pcpyld(auVar5,auVar11);
    puGpffff8e00[4] = auVar21._0_4_;
    puGpffff8e00[5] = auVar21._4_4_;
    puGpffff8e00[6] = auVar21._8_4_;
    puGpffff8e00[7] = auVar21._12_4_;
  }
  puGpffff8e00 = puGpffff8e00 + 8;
  iGpffff88a4 = 0;
  return 1;
}


// ==== FUN_002cd640 @ 002cd640 ====

void FUN_002cd640(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_003c4094;
  iVar3 = param_1 + iGpffff8e98;
  if (DAT_003c4080 == 0) {
    if (DAT_003c40b8 == (code *)0x0) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      goto LAB_002cd814;
    }
    if (*(int *)(iVar3 + 0x58) == 0) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      goto LAB_002cd814;
    }
    (*DAT_003c40b8)(param_1);
  }
  else {
    puVar1 = *(undefined4 **)(iVar3 + 0x58);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      goto LAB_002cd814;
    }
    *puVar1 = 0;
    iVar2 = ((int)puVar1 - iVar2) * -0x55555555 >> 2;
    if (iVar2 == DAT_003c40ac) {
      DAT_003c40ac = -1;
    }
    if (iVar2 == DAT_003c40b0) {
      DAT_003c40b0 = -1;
    }
    if (iVar2 == DAT_003c4084) {
      if (iVar2 != DAT_003c4088) {
        iVar2 = *(int *)(iVar2 * 0xc + DAT_003c4094);
        while (iVar2 == 0) {
          if (DAT_003c4084 == 0) {
            DAT_003c4084 = DAT_003c4090;
          }
          DAT_003c4084 = DAT_003c4084 + -1;
          if (DAT_003c4084 == DAT_003c4088) break;
          iVar2 = *(int *)(DAT_003c4084 * 0xc + DAT_003c4094);
        }
      }
    }
    else if ((iVar2 == DAT_003c4088) && (DAT_003c4084 != iVar2)) {
      iVar2 = *(int *)(iVar2 * 0xc + DAT_003c4094);
      while (iVar2 == 0) {
        DAT_003c4088 = DAT_003c4088 + 1;
        if (DAT_003c4088 == DAT_003c4090) {
          DAT_003c4088 = 0;
        }
        if (DAT_003c4084 == DAT_003c4088) break;
        iVar2 = *(int *)(DAT_003c4088 * 0xc + DAT_003c4094);
      }
    }
    if (*(int *)(DAT_003c4084 * 0xc + DAT_003c4094) != 0) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      goto LAB_002cd814;
    }
    DAT_003c4088 = -1;
    DAT_003c4084 = -1;
  }
  *(undefined4 *)(iVar3 + 0x58) = 0;
LAB_002cd814:
  if (param_1 == DAT_003c40a4) {
    DAT_003c40a4 = 0;
  }
  return;
}


// ==== FUN_002cd840 @ 002cd840 ====

undefined4 FUN_002cd840(int *param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_003c4094;
  iVar4 = *param_1 + iGpffff8e98;
  if (DAT_003c4080 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(char *)(iVar4 + 0x17) == '\0') {
      return 1;
    }
    puVar1 = *(undefined4 **)(iVar4 + 0x58);
    *(undefined1 *)(iVar4 + 0x17) = 0;
    *puVar1 = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    uVar3 = ((int)puVar1 - iVar2) * -0x55555555 >> 2;
    if (DAT_003c40a4 == param_1) {
      DAT_003c40a4 = (int *)0x0;
    }
    if (uVar3 != DAT_003c4090) {
      return 1;
    }
    if (uVar3 < uGpffff88a0) {
      if (*(int *)(uVar3 * 0xc + DAT_003c4094) != 0) {
        return 1;
      }
      do {
        DAT_003c4090 = DAT_003c4090 + 1;
        if (uGpffff88a0 <= DAT_003c4090) {
          return 1;
        }
      } while (*(int *)(DAT_003c4090 * 0xc + DAT_003c4094) == 0);
    }
  }
  else {
    if (*(char *)(iVar4 + 0x17) != '\0') {
      return 1;
    }
    if (DAT_003c4090 < 7) {
      return 0;
    }
    if ((uint)(*(int *)(DAT_003c4090 * 0xc + DAT_003c4094 + 4) - DAT_003c4098) <
        *(uint *)(iVar4 + 0x30)) {
      return 0;
    }
    if (DAT_003c4084 != 0xffffffff) {
      uVar3 = DAT_003c4088 - 1;
      do {
        uVar3 = uVar3 + 1;
        if (uVar3 == DAT_003c4090) {
          uVar3 = 0;
        }
        iVar2 = uVar3 * 0xc;
        if (*(int *)(iVar2 + DAT_003c4094) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + DAT_003c4094) + iGpffff8e98 + 0x58) = 0;
          if (*(int **)(iVar2 + DAT_003c4094) == DAT_003c40a4) {
            DAT_003c40a4 = (int *)0x0;
          }
          *(undefined4 *)(iVar2 + DAT_003c4094) = 0;
        }
      } while (uVar3 != DAT_003c4084);
    }
    uVar3 = DAT_003c4090 - 1;
    DAT_003c4088 = -1;
    DAT_003c4084 = 0xffffffff;
    *(int **)(uVar3 * 0xc + DAT_003c4094) = param_1;
    if (DAT_003c4090 == uGpffff88a0) {
      iVar2 = (DAT_003c4098 + DAT_003c409c) - *(int *)(iVar4 + 0x30);
    }
    else {
      iVar2 = *(int *)(DAT_003c4090 * 0xc + DAT_003c4094 + 4) - *(int *)(iVar4 + 0x30);
    }
    *(int *)(uVar3 * 0xc + DAT_003c4094 + 4) = iVar2;
    iVar2 = uVar3 * 0xc + DAT_003c4094;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 0x30);
    *(int *)(iVar4 + 0x58) = iVar2;
    DAT_003c4090 = uVar3;
    *(undefined1 *)(iVar4 + 0x17) = 1;
    if ((*(byte *)(param_1 + 8) & 0x80) == 0) {
      if (param_1[1] != 0) {
        FUN_002cbdf0(param_1,*(undefined4 *)(uVar3 * 0xc + DAT_003c4094 + 4),0);
      }
      iVar2 = *(int *)(iVar4 + 0x58);
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x58);
    }
    uVar3 = *(uint *)(iVar2 + 4) >> 6;
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xffffc000 | uVar3 & 0x3fff;
    *(uint *)(iVar4 + 0xc) =
         *(uint *)(iVar4 + 0xc) & 0xfff8001f | (uVar3 + *(int *)(iVar4 + 0x10) & 0x3fff) << 5;
  }
  return 1;
}


// ==== FUN_002cdb28 @ 002cdb28 ====

void FUN_002cdb28(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  ulong uVar19;
  undefined8 in_a2_udw;
  int iVar20;
  undefined1 auVar12 [16];
  
  iVar10 = DAT_003c40a8;
  iVar9 = DAT_003c40a4;
  if (DAT_003c40a4 != 0) {
    iVar20 = DAT_003c40a4 + iGpffff8e98;
    FUN_002b3d88(0x80000000,0x20);
    auVar14._8_8_ = in_a0_udw;
    auVar14._0_8_ = 0xe;
    auVar4._8_8_ = in_a2_udw;
    auVar4._0_8_ = 0x1000000000008004;
    auVar14 = _pcpyld(auVar14,auVar4);
    *puGpffff8e00 = auVar14._0_4_;
    puGpffff8e00[1] = auVar14._4_4_;
    puGpffff8e00[2] = auVar14._8_4_;
    puGpffff8e00[3] = auVar14._12_4_;
    uVar19 = *(ulong *)(iVar20 + 8);
    auVar15._8_8_ = auVar14._8_8_;
    if ((*(byte *)(iVar9 + 0x20) & 7) == 2) {
      if ((uGpffff8834 & 1) == 0) {
        uVar18 = (uint)DAT_0044dd90;
      }
      else {
        uVar18 = (uint)DAT_0044df00;
      }
      uVar19 = uVar19 & 0xffffffffffffc000 |
               ((long)*(int *)(iVar20 + 8) & 0x3fffU) + ((ulong)uVar18 & 0x1ff) * 0x20;
    }
    uVar18 = 6;
    if (iVar10 != 0) {
      uVar18 = 7;
    }
    auVar1._4_4_ = 0;
    auVar1._0_4_ = uVar18;
    auVar1._8_8_ = in_a0_udw;
    auVar5._8_8_ = in_a2_udw;
    auVar5._0_8_ = uVar19;
    auVar14 = _pcpyld(auVar1,auVar5);
    puGpffff8e00[4] = auVar14._0_4_;
    puGpffff8e00[5] = auVar14._4_4_;
    puGpffff8e00[6] = auVar14._8_4_;
    puGpffff8e00[7] = auVar14._12_4_;
    auVar12._8_8_ = auVar14._8_8_;
    uVar11 = 0x14;
    if (iVar10 != 0) {
      uVar11 = 0x15;
    }
    auVar15._0_8_ = uVar11;
    uGpffff8808 = uGpffff8808 & 0xfffff000ffe7fde3 |
                  (ulong)*(byte *)(iVar20 + 0x16) |
                  ((ulong)*(ushort *)(iVar20 + 0x14) & 0xfff) << 0x20 |
                  ((ulong)(*(ushort *)(iVar20 + 0x14) >> 0xc) & 3) << 0x13;
    auVar6._8_8_ = in_a2_udw;
    auVar6._0_8_ = uGpffff8808;
    auVar14 = _pcpyld(auVar15,auVar6);
    puGpffff8e00[8] = auVar14._0_4_;
    puGpffff8e00[9] = auVar14._4_4_;
    puGpffff8e00[10] = auVar14._8_4_;
    puGpffff8e00[0xb] = auVar14._12_4_;
    uVar19 = (long)*(int *)(iVar20 + 8) & 0x3fff;
    uVar19 = uVar19 | uVar19 << 0x14 | uVar19 << 0x28;
    if (DAT_003c4080 == 0) {
      uVar11 = 0x34;
      if (iVar10 != 0) {
        uVar11 = 0x35;
      }
      auVar13._8_8_ = auVar12._8_8_;
      auVar13._0_8_ = uVar11;
      auVar7._8_8_ = in_a2_udw;
      auVar7._0_8_ = *(undefined8 *)(iVar20 + 0x18);
      auVar14 = _pcpyld(auVar13,auVar7);
      puGpffff8e00[0xc] = auVar14._0_4_;
      puGpffff8e00[0xd] = auVar14._4_4_;
      puGpffff8e00[0xe] = auVar14._8_4_;
      puGpffff8e00[0xf] = auVar14._12_4_;
      auVar17._8_8_ = auVar14._8_8_;
      uVar11 = 0x36;
      if (iVar10 != 0) {
        uVar11 = 0x37;
      }
      auVar17._0_8_ = uVar11;
      auVar8._8_8_ = in_a2_udw;
      auVar8._0_8_ = *(undefined8 *)(iVar20 + 0x20);
      auVar14 = _pcpyld(auVar17,auVar8);
      puGpffff8e00[0x10] = auVar14._0_4_;
      puGpffff8e00[0x11] = auVar14._4_4_;
      puGpffff8e00[0x12] = auVar14._8_4_;
      puGpffff8e00[0x13] = auVar14._12_4_;
    }
    else {
      uVar11 = 0x34;
      if (iVar10 != 0) {
        uVar11 = 0x35;
      }
      auVar12._0_8_ = uVar11;
      auVar2._8_8_ = in_a1_udw;
      auVar2._0_8_ = *(long *)(iVar20 + 0x18) + uVar19;
      auVar14 = _pcpyld(auVar12,auVar2);
      puGpffff8e00[0xc] = auVar14._0_4_;
      puGpffff8e00[0xd] = auVar14._4_4_;
      puGpffff8e00[0xe] = auVar14._8_4_;
      puGpffff8e00[0xf] = auVar14._12_4_;
      auVar16._8_8_ = auVar14._8_8_;
      uVar11 = 0x36;
      if (iVar10 != 0) {
        uVar11 = 0x37;
      }
      auVar16._0_8_ = uVar11;
      auVar3._8_8_ = in_a1_udw;
      auVar3._0_8_ = *(long *)(iVar20 + 0x20) + uVar19;
      auVar14 = _pcpyld(auVar16,auVar3);
      puGpffff8e00[0x10] = auVar14._0_4_;
      puGpffff8e00[0x11] = auVar14._4_4_;
      puGpffff8e00[0x12] = auVar14._8_4_;
      puGpffff8e00[0x13] = auVar14._12_4_;
    }
    puGpffff8e00 = puGpffff8e00 + 0x14;
  }
  return;
}


// ==== FUN_002cdd70 @ 002cdd70 ====

undefined4 FUN_002cdd70(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_003c4098 != -1) && (DAT_003c4080 != 0)) {
    uVar3 = param_1 + 0x7ffU & 0xfffff800;
    if (DAT_003c4090 == DAT_003c408c) {
      iVar2 = DAT_003c4098 + DAT_003c409c;
    }
    else {
      iVar2 = *(int *)(DAT_003c4090 * 0xc + DAT_003c4094 + 4);
    }
    if ((DAT_003c40b4 <= (int)uVar3) && ((int)uVar3 < iVar2)) {
      if (DAT_003c4080 != 0) {
        if (DAT_003c4084 != -1) {
          iVar2 = DAT_003c4088 + -1;
          do {
            iVar2 = iVar2 + 1;
            if (iVar2 == DAT_003c4090) {
              iVar2 = 0;
            }
            iVar1 = *(int *)(iVar2 * 0xc + DAT_003c4094);
            if (iVar1 != 0) {
              *(undefined4 *)(iVar1 + iGpffff8e98 + 0x58) = 0;
              *(undefined4 *)(iVar2 * 0xc + DAT_003c4094) = 0;
            }
          } while (iVar2 != DAT_003c4084);
        }
        DAT_003c4088 = -1;
        DAT_003c4084 = -1;
      }
      uGpffff8ea0 = 0;
      iVar2 = uVar3 - DAT_003c4098;
      DAT_003c4098 = uVar3;
      DAT_003c40a4 = 0;
      DAT_003c409c = DAT_003c409c - iVar2;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002cdea0 @ 002cdea0 ====

void FUN_002cdea0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + iGpffff8e98;
  if ((((param_1 != DAT_003c40a4) && ((*(byte *)(param_1 + 0x20) & 0x80) == 0)) &&
      (*(int *)(param_1 + 4) != 0)) && (*(int *)(iVar2 + 0x58) == 0)) {
    (*DAT_003c40a0)(param_1,1);
    if ((*(int *)(iVar2 + 0x58) != 0) && (DAT_003c4080 != 0)) {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x58) + 4) >> 6;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffc000 | uVar1 & 0x3fff;
      *(uint *)(iVar2 + 0xc) =
           *(uint *)(iVar2 + 0xc) & 0xfff8001f | (uVar1 + *(int *)(iVar2 + 0x10) & 0x3fff) << 5;
    }
  }
  return;
}


// ==== FUN_002cdf70 @ 002cdf70 ====

void FUN_002cdf70(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_003c4080 != 0) {
    if (DAT_003c4090 < DAT_003c408c) {
      iVar2 = DAT_003c4090 * 0xc;
      do {
        iVar1 = *(int *)(iVar2 + DAT_003c4094) + iGpffff8e98;
        if (*(int *)(iVar2 + DAT_003c4094) != 0) {
          *(undefined4 *)(iVar1 + 0x58) = 0;
          *(undefined1 *)(iVar1 + 0x17) = 0;
          if (*(int *)(iVar2 + DAT_003c4094) == DAT_003c40a4) {
            DAT_003c40a4 = 0;
          }
          *(undefined4 *)(iVar2 + DAT_003c4094) = 0;
        }
        DAT_003c4090 = DAT_003c4090 + 1;
        iVar2 = iVar2 + 0xc;
      } while (DAT_003c4090 < DAT_003c408c);
    }
    DAT_003c4090 = DAT_003c408c;
  }
  return;
}


// ==== FUN_002ce010 @ 002ce010 ====

void FUN_002ce010(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_003c4080 != 0) {
    if (DAT_003c4084 != -1) {
      iVar2 = DAT_003c4088 + -1;
      do {
        iVar2 = iVar2 + 1;
        if (iVar2 == DAT_003c4090) {
          iVar2 = 0;
        }
        iVar1 = *(int *)(iVar2 * 0xc + DAT_003c4094);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + iGpffff8e98 + 0x58) = 0;
          *(undefined4 *)(iVar2 * 0xc + DAT_003c4094) = 0;
        }
      } while (iVar2 != DAT_003c4084);
    }
    DAT_003c4088 = -1;
    DAT_003c4084 = -1;
  }
  uGpffff8ea0 = 0;
  DAT_003c40a4 = 0;
  return;
}


// ==== FUN_002ce0b8 @ 002ce0b8 ====

undefined4 FUN_002ce0b8(long param_1)

{
  if (DAT_003c4098 != -1) {
    return 0;
  }
  DAT_003c4080 = (uint)(param_1 == 0);
  return 1;
}


// ==== FUN_002ce0f8 @ 002ce0f8 ====

undefined4 FUN_002ce0f8(undefined4 param_1)

{
  DAT_003c40a0 = param_1;
  return 1;
}


// ==== FUN_002ce110 @ 002ce110 ====

undefined4 FUN_002ce110(undefined4 param_1)

{
  DAT_003c40b8 = param_1;
  return 1;
}


// ==== FUN_002ce140 @ 002ce140 ====

undefined4 FUN_002ce140(void)

{
  return DAT_003c4098;
}


// ==== FUN_002ce150 @ 002ce150 ====

void FUN_002ce150(void)

{
  return;
}


// ==== FUN_002ce160 @ 002ce160 ====

/* WARNING: Removing unreachable block (ram,0x002ce1e8) */

undefined4 FUN_002ce160(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = iGpffff8ef8;
  if (*(int *)(&DAT_0044947c + iGpffff8ef8) == 0) {
    uStack_30 = 1;
    uStack_2c = FUN_002a5548(0x23);
    FUN_002a55d8(&uStack_30);
  }
  else {
    iVar3 = (int)&DAT_00449484 + iGpffff8ef8;
    *(undefined4 *)(&DAT_004494ac + iGpffff8ef8) = param_2;
    *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) = 0;
    *(int *)((int)&DAT_004494a8 + iGpffff8ef8) = (int)param_1;
    *(int *)((int)&DAT_004494b0 + iGpffff8ef8) = param_3;
    switch((int)param_1) {
    case 1:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)((int)&DAT_00449448 + iGpffff8ef8);
      *(int *)((int)&DAT_004494b0 + iGpffff8ef8) = param_3 / 2 << 1;
      break;
    case 2:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)((int)&DAT_0044944c + iGpffff8ef8);
      break;
    case 3:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)(&DAT_0044943c + iGpffff8ef8);
      *(int *)((int)&DAT_004494b0 + iGpffff8ef8) = param_3 - param_3 % 3;
      break;
    case 4:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)(&DAT_00449444 + iGpffff8ef8);
      break;
    case 5:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)(&DAT_00449440 + iGpffff8ef8);
      break;
    default:
      uStack_40 = 1;
      uStack_3c = FUN_002a5548(0x25,param_1);
      FUN_002a55d8(&uStack_40);
    }
    lVar2 = FUN_002ceae0(*(undefined4 *)((int)&DAT_004494a4 + iVar1),iVar3,0);
    if (lVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002ce2f0 @ 002ce2f0 ====

undefined4 FUN_002ce2f0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iVar3 = *(int *)(&DAT_0044947c + iGpffff8ef8);
  FUN_002cead8();
  iVar1 = iGpffff8ef8;
  if (iVar3 == 0) {
    uStack_60 = 1;
    uStack_5c = FUN_002a5548(0x23);
    FUN_002a55d8(&uStack_60);
  }
  else {
    iVar3 = (int)&DAT_00449484 + iGpffff8ef8;
    *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) = 0;
    *(int *)((int)&DAT_004494a8 + iGpffff8ef8) = (int)param_1;
    *(undefined4 *)(&DAT_004494ac + iGpffff8ef8) = 0;
    *(uint *)((int)&DAT_004494b0 + iGpffff8ef8) = (uint)*(ushort *)(&DAT_00449478 + iGpffff8ef8);
    switch((int)param_1) {
    case 1:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)((int)&DAT_00449448 + iGpffff8ef8);
      break;
    case 2:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)((int)&DAT_0044944c + iGpffff8ef8);
      break;
    case 3:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)(&DAT_0044943c + iGpffff8ef8);
      break;
    case 4:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)(&DAT_00449444 + iGpffff8ef8);
      break;
    case 5:
      *(undefined4 *)((int)&DAT_004494a4 + iGpffff8ef8) =
           *(undefined4 *)(&DAT_00449440 + iGpffff8ef8);
      break;
    default:
      uStack_70 = 1;
      uStack_6c = FUN_002a5548(0x25,param_1);
      FUN_002a55d8(&uStack_70);
    }
    lVar2 = FUN_002ceae0(*(undefined4 *)((int)&DAT_004494a4 + iVar1),iVar3,0);
    if (lVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002ce470 @ 002ce470 ====

int FUN_002ce470(int param_1,undefined4 param_2)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 == 0) {
    switch(param_2) {
    case 1:
      if (*(int *)((int)&DAT_00449464 + iGpffff8ef8) == 0) {
        *(undefined4 *)((int)&DAT_00449448 + iGpffff8ef8) = 0;
      }
      else {
        *(int *)((int)&DAT_00449448 + iGpffff8ef8) = *(int *)((int)&DAT_00449464 + iGpffff8ef8);
      }
      param_1 = *(int *)((int)&DAT_00449464 + iGpffff8ef8);
      break;
    case 2:
      if (*(int *)((int)&DAT_00449468 + iGpffff8ef8) == 0) {
        *(undefined4 *)((int)&DAT_0044944c + iGpffff8ef8) = 0;
      }
      else {
        *(int *)((int)&DAT_0044944c + iGpffff8ef8) = *(int *)((int)&DAT_00449468 + iGpffff8ef8);
      }
      param_1 = *(int *)((int)&DAT_00449468 + iGpffff8ef8);
      break;
    case 3:
      if (*(int *)((int)&DAT_00449458 + iGpffff8ef8) == 0) {
        *(undefined4 *)(&DAT_0044943c + iGpffff8ef8) = 0;
      }
      else {
        *(int *)(&DAT_0044943c + iGpffff8ef8) = *(int *)((int)&DAT_00449458 + iGpffff8ef8);
      }
      param_1 = *(int *)(&DAT_0044943c + iGpffff8ef8);
      break;
    case 4:
      if (*(int *)((int)&DAT_00449460 + iGpffff8ef8) == 0) {
        *(undefined4 *)(&DAT_00449444 + iGpffff8ef8) = 0;
      }
      else {
        *(int *)(&DAT_00449444 + iGpffff8ef8) = *(int *)((int)&DAT_00449460 + iGpffff8ef8);
      }
      param_1 = *(int *)((int)&DAT_00449460 + iGpffff8ef8);
      break;
    case 5:
      if (*(int *)(&DAT_0044945c + iGpffff8ef8) == 0) {
        *(undefined4 *)(&DAT_00449440 + iGpffff8ef8) = 0;
      }
      else {
        *(int *)(&DAT_00449440 + iGpffff8ef8) = *(int *)(&DAT_0044945c + iGpffff8ef8);
      }
      param_1 = *(int *)(&DAT_00449440 + iGpffff8ef8);
      break;
    case 6:
      if (*(int *)((int)&DAT_0044946c + iGpffff8ef8) == 0) {
        *(undefined4 *)((int)&DAT_00449450 + iGpffff8ef8) = 0;
      }
      else {
        *(int *)((int)&DAT_00449450 + iGpffff8ef8) = *(int *)((int)&DAT_0044946c + iGpffff8ef8);
      }
      param_1 = *(int *)((int)&DAT_0044946c + iGpffff8ef8);
      break;
    default:
      uStack_20 = 1;
      uStack_1c = FUN_002a5548(0x25);
      FUN_002a55d8(&uStack_20);
      param_1 = 0;
    }
  }
  else {
    switch(param_2) {
    case 1:
      *(int *)((int)&DAT_00449448 + iGpffff8ef8) = param_1;
      break;
    case 2:
      *(int *)((int)&DAT_0044944c + iGpffff8ef8) = param_1;
      break;
    case 3:
      *(int *)(&DAT_0044943c + iGpffff8ef8) = param_1;
      break;
    case 4:
      *(int *)(&DAT_00449444 + iGpffff8ef8) = param_1;
      break;
    case 5:
      *(int *)(&DAT_00449440 + iGpffff8ef8) = param_1;
      break;
    case 6:
      *(int *)((int)&DAT_00449450 + iGpffff8ef8) = param_1;
      break;
    default:
      uStack_30 = 1;
      uStack_2c = FUN_002a5548(0x25);
      FUN_002a55d8(&uStack_30);
      param_1 = 0;
    }
  }
  return param_1;
}


// ==== FUN_002ce708 @ 002ce708 ====

undefined8 FUN_002ce708(undefined8 param_1,int param_2)

{
  long lVar1;
  
  iGpffff88b0 = (int)&DAT_00449438 + param_2;
  iGpffff8efc = iGpffff8efc + 1;
  iGpffff8ef8 = param_2;
  memset(iGpffff88b0,0,0x7c);
  lVar1 = FUN_002cf5c0((int)&DAT_00449454 + iGpffff8ef8);
  if ((lVar1 == 0) || (lVar1 = FUN_002cf5c8((int)&DAT_00449458 + iGpffff8ef8), lVar1 == 0)) {
    FUN_002cf5d8((int)&DAT_00449458 + iGpffff8ef8);
    FUN_002cf5d0((int)&DAT_00449454 + iGpffff8ef8);
    iGpffff8efc = iGpffff8efc + -1;
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_002ce7c8 @ 002ce7c8 ====

undefined8 FUN_002ce7c8(undefined8 param_1)

{
  FUN_002cf5d8((int)&DAT_00449458 + iGpffff8ef8);
  FUN_002cf5d0((int)&DAT_00449454 + iGpffff8ef8);
  iGpffff8efc = iGpffff8efc + -1;
  return param_1;
}


// ==== FUN_002ce980 @ 002ce980 ====

undefined8 FUN_002ce980(undefined8 param_1)

{
  FUN_002cea78();
  return param_1;
}


// ==== FUN_002ce9a8 @ 002ce9a8 ====

undefined4 FUN_002ce9a8(void)

{
  return 1;
}


// ==== FUN_002ce9b0 @ 002ce9b0 ====

void FUN_002ce9b0(void)

{
  return;
}


// ==== FUN_002ce9b8 @ 002ce9b8 ====

undefined4 FUN_002ce9b8(void)

{
  long lVar1;
  
  if (iGpffff88bc == 0) {
    lVar1 = FUN_002cf150(uGpffff88b4);
    uGpffff88c0 = (undefined4)lVar1;
    if (lVar1 != 0) {
      lVar1 = FUN_002a6010(0x34,uGpffff88c4,4,uGpffff88c8,0x44ec40,0x40409);
      *(int *)((int)&DAT_00449438 + iGpffff8f00) = (int)lVar1;
      if (lVar1 != 0) {
        *(undefined4 *)(&DAT_00449470 + iGpffff8f00) = uGpffff88b8;
        FUN_002cf440(&DAT_0044943c + iGpffff8f00);
        *(undefined4 *)((int)&DAT_00449468 + iGpffff8f00) = 0;
        *(undefined4 *)((int)&DAT_0044946c + iGpffff8f00) = 0;
        iGpffff88bc = 1;
        return 1;
      }
      FUN_002cf2e8(uGpffff88c0);
      uGpffff88c0 = 0;
    }
  }
  return 0;
}


// ==== FUN_002cea78 @ 002cea78 ====

undefined4 FUN_002cea78(void)

{
  if (iGpffff88bc != 0) {
    FUN_002a65f0(*(undefined4 *)((int)&DAT_00449438 + iGpffff8f00));
    *(undefined4 *)((int)&DAT_00449438 + iGpffff8f00) = 0;
    FUN_002cf2e8(uGpffff88c0);
    uGpffff88c0 = 0;
    iGpffff88bc = 0;
  }
  return 1;
}


// ==== FUN_002cead8 @ 002cead8 ====

undefined4 FUN_002cead8(void)

{
  return uGpffff88c0;
}


// ==== FUN_002ceae0 @ 002ceae0 ====

undefined8 FUN_002ceae0(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_3 != 0) && (*(int *)(iGpffff88c0 + 0x18) != 0)) {
    FUN_002cf388();
  }
  DAT_0044ecc0 = 1;
  DAT_0044eccc = iGpffff88c0;
  iVar3 = (int)param_1;
  DAT_0044ecb8 = iVar3;
  DAT_0044ecc8 = param_2;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  lVar1 = (**(code **)(**(int **)(iVar3 + 8) + 4))(*(int **)(iVar3 + 8),0x44ecc8);
  if (lVar1 == 0) {
    DAT_0044ecc0 = 0;
  }
  if (1 < *(uint *)(iVar3 + 0x10)) {
    *(undefined4 *)(iVar3 + 0x10) = 2;
    FUN_002d1240(*(undefined4 *)(iVar3 + 0x14));
  }
  DAT_0044ecb8 = 0;
  uVar2 = 0;
  if (DAT_0044ecc0 != 0) {
    uVar2 = param_1;
  }
  DAT_0044ecc8 = 0;
  DAT_0044eccc = 0;
  return uVar2;
}


// ==== FUN_002cebe0 @ 002cebe0 ====

undefined4 FUN_002cebe0(undefined4 *param_1,long param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pcVar2 = DAT_00449548;
  uVar12 = *(uint *)(param_3 + 0x14);
  iVar3 = *(int *)(param_3 + 0xc);
  if (uVar12 < *(uint *)(param_3 + 0x10)) goto LAB_002ced40;
  iVar8 = *(uint *)(param_3 + 0x10) + 0x20;
  *(int *)(param_3 + 0x10) = iVar8;
  iVar3 = (*pcVar2)(iVar3,iVar8 * 8,0x1030409);
  if (iVar3 == 0) {
    uStack_70 = 1;
    uStack_6c = FUN_002a5548(0xffffffff80000013,*(int *)(param_3 + 0x10) << 3);
    FUN_002a55d8(&uStack_70);
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -0x20;
    goto LAB_002ced40;
  }
  if (iVar3 == *(int *)(param_3 + 0xc)) {
    *(int *)(param_3 + 0xc) = iVar3;
    goto LAB_002ced40;
  }
  if (uVar12 != 0) {
    uVar6 = -uVar12 & 3;
    piVar13 = (int *)(iVar3 + 4);
    iVar8 = iVar3;
    if (uVar6 != 0) {
      if (uVar6 < 3) {
        if (uVar6 < 2) {
          piVar13 = (int *)(iVar3 + 0xc);
          iVar8 = iVar3 + 8;
          uVar12 = uVar12 - 1;
          *(int *)(*(int *)(iVar3 + 4) + 0xc) = iVar3;
          iVar4 = *piVar13;
        }
        else {
          iVar4 = *piVar13;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 2;
        *(int *)(iVar4 + 0xc) = iVar8;
        iVar8 = iVar8 + 8;
      }
      iVar4 = *piVar13;
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 2;
      *(int *)(iVar4 + 0xc) = iVar8;
      iVar8 = iVar8 + 8;
      if (uVar12 == 0) goto LAB_002ced3c;
    }
    do {
      *(int *)(*piVar13 + 0xc) = iVar8;
      uVar12 = uVar12 - 4;
      *(int *)(piVar13[2] + 0xc) = iVar8 + 8;
      *(int *)(piVar13[4] + 0xc) = iVar8 + 0x10;
      piVar1 = piVar13 + 6;
      piVar13 = piVar13 + 8;
      *(int *)(*piVar1 + 0xc) = iVar8 + 0x18;
      iVar8 = iVar8 + 0x20;
    } while (uVar12 != 0);
  }
LAB_002ced3c:
  *(int *)(param_3 + 0xc) = iVar3;
LAB_002ced40:
  uVar5 = 0;
  if (iVar3 != 0) {
    piVar13 = (int *)(iVar3 + *(int *)(param_3 + 0x14) * 8);
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    if (piVar13 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      piVar1 = (int *)*param_1;
      iVar3 = param_1[1];
      piVar1[1] = 0;
      piVar7 = piVar1 + 8;
      *piVar1 = 0;
      piVar1[3] = 0;
      piVar1[2] = 0;
      uVar9 = *(undefined8 *)(piVar1 + 2);
      uVar10 = *(undefined8 *)(piVar1 + 4);
      uVar11 = *(undefined8 *)(piVar1 + 6);
      *(undefined8 *)((int)piVar1 + iVar3 + -0x20) = *(undefined8 *)piVar1;
      *(undefined8 *)((int)piVar1 + iVar3 + -0x18) = uVar9;
      *(undefined8 *)((int)piVar1 + iVar3 + -0x10) = uVar10;
      *(undefined8 *)((int)piVar1 + iVar3 + -8) = uVar11;
      piVar1[1] = (int)piVar7;
      piVar1[8] = (int)piVar1;
      piVar1[9] = (int)piVar1 + iVar3 + -0x20;
      *(int **)((int)piVar1 + iVar3 + -0x20) = piVar7;
      piVar1[10] = (int)piVar1 + ((iVar3 + -0x40) - (int)piVar7);
      piVar1[0xb] = (int)piVar13;
      piVar13[1] = (int)piVar7;
      *piVar13 = piVar1[10];
      if (param_2 != 0) {
        iVar3 = *(int *)param_2 + ((int *)param_2)[1];
        *(int **)(iVar3 + -0x1c) = piVar1;
        *piVar1 = iVar3 + -0x20;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


// ==== FUN_002cee38 @ 002cee38 ====

void FUN_002cee38(int param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  pcVar5 = DAT_00449548;
  bVar3 = false;
  iVar6 = *(int *)(param_2 + -0x20);
  iVar13 = param_2 + -0x20;
  if (iVar6 != 0) {
    bVar3 = *(int *)(iVar6 + 0xc) != 0;
  }
  iVar9 = *(int *)(param_2 + -0x1c);
  bVar4 = false;
  if (iVar9 != 0) {
    bVar4 = *(int *)(iVar9 + 0xc) != 0;
  }
  if (bVar3) {
    if (bVar4) {
      iVar6 = *(int *)(param_1 + 0x14) * 8;
      puVar2 = *(undefined8 **)(iVar9 + 0xc);
      if ((undefined8 *)(*(int *)(param_1 + 0xc) + iVar6 + -8) != puVar2) {
        *puVar2 = *(undefined8 *)(iVar6 + *(int *)(param_1 + 0xc) + -8);
        *(undefined8 **)(*(int *)((int)puVar2 + 4) + 0xc) = puVar2;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      iVar6 = *(int *)(param_2 + -0x20);
      iVar13 = *(int *)(param_2 + -0x1c);
      *(int *)(iVar6 + 8) =
           *(int *)(iVar6 + 8) + 0x40 + *(int *)(param_2 + -0x18) + *(int *)(iVar13 + 8);
      **(undefined4 **)(*(int *)(param_2 + -0x20) + 0xc) =
           *(undefined4 *)(*(int *)(param_2 + -0x20) + 8);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar13 + 4);
      if (*(undefined4 **)(iVar13 + 4) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar13 + 4) = *(undefined4 *)(param_2 + -0x20);
      }
    }
    else {
      iVar13 = *(int *)(param_2 + -0x20);
      piVar8 = *(int **)(param_2 + -0x1c);
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 0x20 + *(int *)(param_2 + -0x18);
      **(undefined4 **)(iVar13 + 0xc) = *(undefined4 *)(iVar13 + 8);
      *(int **)(iVar13 + 4) = piVar8;
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar13;
      }
    }
  }
  else if (bVar4) {
    iVar6 = *(int *)(iVar9 + 0xc);
    *(int *)(param_2 + -0x18) = *(int *)(param_2 + -0x18) + 0x20 + *(int *)(iVar9 + 8);
    *(int *)(param_2 + -0x14) = iVar6;
    *(int *)(iVar6 + 4) = iVar13;
    iVar6 = *(int *)(param_2 + -0x1c);
    **(undefined4 **)(iVar6 + 0xc) = *(undefined4 *)(param_2 + -0x18);
    piVar8 = *(int **)(iVar6 + 4);
    *(int **)(param_2 + -0x1c) = piVar8;
    if (piVar8 != (int *)0x0) {
      *piVar8 = iVar13;
    }
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x14);
    iVar6 = *(int *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 0x10) <= uVar11) {
      iVar9 = *(uint *)(param_1 + 0x10) + 0x20;
      *(int *)(param_1 + 0x10) = iVar9;
      iVar6 = (*pcVar5)(iVar6,iVar9 * 8,0x1030409);
      if (iVar6 == 0) {
        uStack_60 = 1;
        uStack_5c = FUN_002a5548(0xffffffff80000013,*(int *)(param_1 + 0x10) << 3);
        FUN_002a55d8(&uStack_60);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -0x20;
      }
      else if (iVar6 == *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0xc) = iVar6;
      }
      else if (uVar11 == 0) {
        *(int *)(param_1 + 0xc) = iVar6;
      }
      else {
        uVar7 = -uVar11 & 3;
        piVar8 = (int *)(iVar6 + 4);
        iVar9 = iVar6;
        if (uVar7 == 0) goto LAB_002cf0b8;
        iVar10 = iVar6;
        if (uVar7 < 3) {
          if (uVar7 < 2) {
            piVar8 = (int *)(iVar6 + 0xc);
            iVar10 = iVar6 + 8;
            uVar11 = uVar11 - 1;
            *(int *)(*(int *)(iVar6 + 4) + 0xc) = iVar6;
            iVar9 = *piVar8;
          }
          else {
            iVar9 = *piVar8;
          }
          uVar11 = uVar11 - 1;
          piVar8 = piVar8 + 2;
          *(int *)(iVar9 + 0xc) = iVar10;
          iVar10 = iVar10 + 8;
        }
        iVar9 = *piVar8;
        piVar8 = piVar8 + 2;
        *(int *)(iVar9 + 0xc) = iVar10;
        iVar10 = iVar10 + 8;
        for (uVar11 = uVar11 - 1; iVar9 = iVar10, uVar11 != 0; uVar11 = uVar11 - 4) {
LAB_002cf0b8:
          *(int *)(*piVar8 + 0xc) = iVar9;
          iVar10 = iVar9 + 0x20;
          *(int *)(piVar8[2] + 0xc) = iVar9 + 8;
          *(int *)(piVar8[4] + 0xc) = iVar9 + 0x10;
          piVar1 = piVar8 + 6;
          piVar8 = piVar8 + 8;
          *(int *)(*piVar1 + 0xc) = iVar9 + 0x18;
        }
        *(int *)(param_1 + 0xc) = iVar6;
      }
    }
    if (iVar6 != 0) {
      puVar12 = (undefined4 *)(iVar6 + *(int *)(param_1 + 0x14) * 8);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      if (puVar12 != (undefined4 *)0x0) {
        puVar12[1] = iVar13;
        *puVar12 = *(undefined4 *)(param_2 + -0x18);
        *(undefined4 **)(param_2 + -0x14) = puVar12;
      }
    }
  }
  return;
}


// ==== FUN_002cf150 @ 002cf150 ====

long FUN_002cf150(uint param_1)

{
  uint *puVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar7 = 0x400;
  if (0x3ff < param_1) {
    uVar7 = param_1;
  }
  lVar4 = (*DAT_00449540)(0x1c,0x40409);
  if (lVar4 != 0) {
    uVar7 = uVar7 + 0x1f & 0xffffffe0;
    if (uVar7 < 0x80) {
      uVar7 = 0x80;
    }
    lVar5 = (*DAT_00449540)(uVar7 + 0x8b,0x1040409);
    puVar9 = (uint *)lVar5;
    if (lVar5 != 0) {
      puVar9[1] = uVar7;
      puVar9[2] = 0;
      *puVar9 = (int)puVar9 + 0x8bU & 0xffffff80;
      puVar8 = (uint *)lVar4;
      *puVar8 = uVar7;
      puVar8[6] = 1;
      puVar8[1] = (uint)puVar9;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar1 = (uint *)puVar9[2];
      puVar9 = (uint *)0x0;
      while (puVar3 = puVar1, puVar3 != (uint *)0x0) {
        lVar6 = FUN_002cebe0(puVar3,puVar9,lVar4);
        bVar2 = false;
        if (lVar6 == 0) goto LAB_002cf294;
        if (puVar9 == (uint *)0x0) {
          puVar8[2] = *puVar3;
        }
        puVar9 = puVar3;
        puVar1 = (uint *)puVar3[2];
      }
      puVar1 = (uint *)puVar8[1];
      lVar6 = FUN_002cebe0(puVar1,puVar9,lVar4);
      bVar2 = false;
      if (lVar6 != 0) {
        if (puVar9 == (uint *)0x0) {
          puVar8[2] = *puVar1;
          puVar8[6] = 0;
        }
        else {
          puVar8[6] = 0;
        }
        bVar2 = true;
      }
LAB_002cf294:
      if (bVar2) {
        return lVar4;
      }
      if (lVar5 != 0) {
        (*DAT_00449544)(lVar5);
      }
    }
    (*DAT_00449544)(lVar4);
  }
  return 0;
}


// ==== FUN_002cf2e8 @ 002cf2e8 ====

void FUN_002cf2e8(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (int)param_1;
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00449544)();
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    while (iVar2 != 0) {
      bVar1 = iVar2 != 0;
      iVar2 = *(int *)(iVar2 + 8);
      if (bVar1) {
        (*DAT_00449544)();
      }
    }
    (*DAT_00449544)(param_1);
  }
  return;
}


// ==== FUN_002cf388 @ 002cf388 ====

undefined4 FUN_002cf388(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 0x14) = 0;
  puVar1 = *(undefined4 **)(*(int *)(iVar6 + 4) + 8);
  puVar3 = (undefined4 *)0x0;
  while( true ) {
    puVar2 = puVar1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(iVar6 + 4);
      lVar5 = FUN_002cebe0(puVar1,puVar3,param_1);
      uVar4 = 0;
      if (lVar5 != 0) {
        if (puVar3 == (undefined4 *)0x0) {
          *(undefined4 *)(iVar6 + 8) = *puVar1;
          *(undefined4 *)(iVar6 + 0x18) = 0;
        }
        else {
          *(undefined4 *)(iVar6 + 0x18) = 0;
        }
        uVar4 = 1;
      }
      return uVar4;
    }
    lVar5 = FUN_002cebe0(puVar2,puVar3,param_1);
    if (lVar5 == 0) break;
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar6 + 8) = *puVar2;
    }
    puVar1 = (undefined4 *)puVar2[2];
    puVar3 = puVar2;
  }
  return 0;
}


// ==== FUN_002cf440 @ 002cf440 ====

undefined8 * FUN_002cf440(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = DAT_0040e0c0;
  puVar5 = &uStack_40;
  if (param_1 == (undefined8 *)0x0) {
    uStack_20 = 1;
    uStack_1c = FUN_002a5548(0xffffffff80000016);
    puVar5 = &uStack_20;
  }
  else {
    if (DAT_0044955c == 3) {
      uVar2 = *(undefined8 *)(&DAT_00449444 + iGpffff8f00);
      uVar3 = *(undefined8 *)((int)&DAT_0044944c + iGpffff8f00);
      uVar4 = *(undefined8 *)((int)&DAT_00449454 + iGpffff8f00);
      *param_1 = *(undefined8 *)(&DAT_0044943c + iGpffff8f00);
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      uVar1 = *(undefined4 *)((int)&DAT_00449464 + iGpffff8f00);
      param_1[4] = *(undefined8 *)(&DAT_0044945c + iGpffff8f00);
      *(undefined4 *)(param_1 + 5) = uVar1;
      return param_1;
    }
    if (param_1 == (undefined8 *)(&DAT_0044943c + iGpffff8f00)) {
      *(undefined4 *)param_1 = 7;
      *(undefined4 *)(param_1 + 1) = 5;
      *(undefined4 *)((int)param_1 + 0xc) = 6;
      *(undefined4 *)(param_1 + 3) = 1;
      *(undefined4 *)((int)param_1 + 0x1c) = 2;
      *(undefined4 *)((int)param_1 + 4) = 2;
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)((int)param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 4) = uVar1;
      *(undefined4 *)((int)param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 5) = uVar1;
      return param_1;
    }
    uStack_40 = 1;
    uStack_3c = FUN_002a5548(0xffffffff80000018);
  }
  FUN_002a55d8(puVar5);
  return (undefined8 *)0x0;
}


// ==== FUN_002cf5c0 @ 002cf5c0 ====

undefined4 FUN_002cf5c0(void)

{
  return 1;
}


// ==== FUN_002cf5c8 @ 002cf5c8 ====

undefined4 FUN_002cf5c8(void)

{
  return 1;
}


// ==== FUN_002cf5d0 @ 002cf5d0 ====

void FUN_002cf5d0(void)

{
  return;
}


// ==== FUN_002cf5d8 @ 002cf5d8 ====

void FUN_002cf5d8(void)

{
  return;
}


// ==== FUN_002cf610 @ 002cf610 ====

undefined8 FUN_002cf610(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iVar1 = DAT_00449560;
  puVar6 = &uStack_70;
  piVar5 = (int *)((int)&DAT_00449438 + param_2);
  iGpffff8f10 = param_2;
  if (DAT_00449560 == 0) {
    *(undefined4 *)(&DAT_00449444 + param_2) = 0;
LAB_002cf6e0:
    iVar2 = (int)&DAT_00449448 + param_2;
    iVar4 = (int)&DAT_00449450 + param_2;
    *(int *)(&DAT_0044945c + param_2) = iVar2;
    *(int *)((int)&DAT_00449458 + param_2) = iVar4;
    *piVar5 = iVar1;
    *(int *)((int)&DAT_00449448 + param_2) = iVar2;
    *(int *)((int)&DAT_0044944c + param_2) = iVar2;
    *(int *)((int)&DAT_00449450 + param_2) = iVar4;
    *(int *)((int)&DAT_00449454 + param_2) = iVar4;
    *(undefined4 *)(&DAT_0044943c + param_2) = 0;
    *(undefined4 *)(&DAT_00449440 + param_2) = 0;
  }
  else {
    lVar3 = (*DAT_00449540)(DAT_00449560,0x4040b);
    *(int *)(&DAT_00449444 + param_2) = (int)lVar3;
    if (lVar3 == 0) {
      uStack_70 = 1;
      uStack_6c = FUN_002a5548(0xffffffff80000013,iVar1);
    }
    else {
      lVar3 = FUN_002cff58(lVar3,iVar1);
      if (lVar3 != 0) goto LAB_002cf6e0;
      (*DAT_00449544)(*(undefined4 *)(&DAT_00449444 + param_2));
      uStack_60 = 1;
      uStack_5c = FUN_002a5548(0xc,0);
      puVar6 = &uStack_60;
    }
    FUN_002a55d8(puVar6);
    piVar5 = (int *)0x0;
  }
  if (piVar5 == (int *)0x0) {
    param_1 = 0;
  }
  else {
    iGpffff8f14 = iGpffff8f14 + 1;
  }
  return param_1;
}


// ==== FUN_002cf750 @ 002cf750 ====

undefined4 FUN_002cf750(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  **(undefined4 **)((int)&DAT_0044944c + iGpffff8f10) =
       *(undefined4 *)((int)&DAT_00449450 + iGpffff8f10);
  piVar6 = (int *)((int)&DAT_00449450 + iGpffff8f10);
  piVar3 = *(int **)((int)&DAT_00449448 + iGpffff8f10);
  while (piVar3 != piVar6) {
    piVar1 = (int *)*piVar3;
    if ((code *)piVar3[5] != (code *)0x0) {
      (*(code *)piVar3[5])(piVar3);
    }
    if ((undefined4 *)piVar3[4] != (undefined4 *)0x0) {
      *(undefined4 *)piVar3[4] = 0;
    }
    iVar4 = *piVar3;
    if (iVar4 == 0) {
      (*DAT_00449544)(piVar3);
      piVar3 = piVar1;
    }
    else {
      piVar2 = (int *)piVar3[1];
      *piVar2 = iVar4;
      *(int **)(iVar4 + 4) = piVar2;
      *(int *)(&DAT_0044943c + iGpffff8f10) = *(int *)(&DAT_0044943c + iGpffff8f10) - piVar3[2];
      FUN_002cffc0(piVar3);
      piVar3 = piVar1;
    }
  }
  iVar4 = (int)&DAT_00449448 + iGpffff8f10;
  iVar5 = (int)&DAT_00449450 + iGpffff8f10;
  *(int *)((int)&DAT_0044944c + iGpffff8f10) = iVar4;
  *(int *)iVar4 = iVar4;
  *(int *)((int)&DAT_00449454 + iGpffff8f10) = iVar5;
  *(int *)iVar5 = iVar5;
  *(undefined4 *)(&DAT_00449440 + iGpffff8f10) = 0;
  return 1;
}


// ==== FUN_002cf888 @ 002cf888 ====

void FUN_002cf888(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)((int)&DAT_00449458 + iGpffff8f10);
  piVar2 = *(int **)(&DAT_0044945c + iGpffff8f10);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    if ((int *)*piVar2 == piVar2) {
      *piVar2 = (int)piVar3;
      piVar3[1] = (int)piVar2;
      *piVar1 = (int)piVar1;
      piVar3 = (int *)piVar1[1];
      piVar2[1] = (int)piVar3;
      *piVar3 = (int)piVar2;
    }
    else {
      piVar4 = (int *)piVar2[1];
      *piVar4 = (int)piVar3;
      piVar3[1] = (int)piVar4;
      piVar3 = (int *)piVar1[1];
      *piVar3 = (int)piVar2;
      piVar2[1] = (int)piVar3;
      *piVar1 = (int)piVar1;
    }
    piVar1[1] = (int)piVar1;
  }
  *(int **)(&DAT_0044945c + iGpffff8f10) = piVar1;
  *(int **)((int)&DAT_00449458 + iGpffff8f10) = piVar2;
  *(undefined4 *)(&DAT_00449440 + iGpffff8f10) = 0;
  return;
}


// ==== FUN_002cf910 @ 002cf910 ====

undefined8 FUN_002cf910(undefined8 param_1)

{
  FUN_002cf750();
  if (*(int *)(&DAT_00449444 + iGpffff8f10) != 0) {
    FUN_002cffb0();
    (*DAT_00449544)(*(undefined4 *)(&DAT_00449444 + iGpffff8f10));
    *(undefined4 *)(&DAT_00449444 + iGpffff8f10) = 0;
  }
  iGpffff8f14 = iGpffff8f14 + -1;
  return param_1;
}


// ==== FUN_002cf990 @ 002cf990 ====

undefined4 FUN_002cf990(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (iGpffff8f18 != 0) {
    FUN_002a6868(iGpffff8f18,0x2cfef0,iGpffff8f18);
    if (DAT_00449550 != FUN_002a6340) {
      uVar4 = 0;
      if (uGpffff88d8 != 0) {
        do {
          iVar2 = uVar4 * 4;
          uVar4 = uVar4 + 1;
          iVar2 = *(int *)(*(int *)(iVar2 + iGpffff88d4) + 0x10);
          puVar3 = (undefined4 *)0x0;
          if (iVar2 != 0) {
            puVar3 = *(undefined4 **)(iVar2 + 0x38);
            do {
              iVar1 = *(int *)(iVar2 + 0x30);
              (*DAT_00449554)(0,iVar2);
              iVar2 = iVar1;
            } while (iVar1 != 0);
          }
          if ((puVar3 != (undefined4 *)0x0) && (puVar3[4] != 0)) {
            puVar3[5] = 0;
            *puVar3 = puVar3[1];
            puVar3[4] = 0;
          }
        } while (uVar4 < uGpffff88d8);
      }
      if (iGpffff88d4 != 0) {
        (*DAT_00449544)();
        iGpffff88d4 = 0;
      }
    }
    FUN_002a65f0(iGpffff8f18);
    iGpffff8f18 = 0;
  }
  return 1;
}


// ==== FUN_002cfac0 @ 002cfac0 ====

int FUN_002cfac0(int *param_1,int param_2,int param_3,long param_4,long param_5,long param_6)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  if (iGpffff8f18 == 0) {
LAB_002cfd64:
    iVar6 = -1;
  }
  else {
    lVar3 = FUN_002aa010();
    if (lVar3 != 0) {
      uStack_c0 = 1;
      uStack_bc = FUN_002a5548(0xffffffff80000017);
      FUN_002a55d8(&uStack_c0);
      return -1;
    }
    if (DAT_00449550 == FUN_002a6340) {
LAB_002cfc38:
      piVar2 = (int *)param_1[4];
    }
    else {
      uVar5 = 0;
      if ((uGpffff88d8 != 0) && (param_1 != (int *)*piGpffff88d4)) {
        uVar5 = 1;
        piVar2 = piGpffff88d4;
        while ((piVar2 = piVar2 + 1, uVar5 < uGpffff88d8 && (param_1 != (int *)*piVar2))) {
          uVar5 = uVar5 + 1;
        }
      }
      if (uGpffff88d8 == uVar5) {
        uVar5 = 0;
        piVar2 = (int *)(*DAT_00449540)((uGpffff88d8 + 1) * 4,0x40000);
        if (piGpffff88d4 != (int *)0x0) {
          iVar6 = 0;
          piVar4 = piVar2;
          if (uGpffff88d8 != 0) {
            do {
              uVar5 = uVar5 + 1;
              piVar1 = (int *)(iVar6 + (int)piGpffff88d4);
              iVar6 = iVar6 + 4;
              *piVar4 = *piVar1;
              piVar4 = piVar4 + 1;
            } while (uVar5 < uGpffff88d8);
          }
          (*DAT_00449544)(piGpffff88d4);
        }
        uGpffff88d8 = uGpffff88d8 + 1;
        piVar2[uVar5] = (int)param_1;
        piGpffff88d4 = piVar2;
        goto LAB_002cfc38;
      }
      piVar2 = (int *)param_1[4];
    }
    if (piVar2 == (int *)0x0) {
LAB_002cfc80:
      iVar6 = *param_1 + (param_2 + 3U & 0xfffffffc);
      if ((param_1[2] != 0) && (param_1[2] < iVar6)) {
        return -1;
      }
      piVar2 = (int *)(*DAT_00449550)(iGpffff8f18,0x40000);
      if (piVar2 == (int *)0x0) goto LAB_002cfd64;
      *piVar2 = *param_1;
      *param_1 = iVar6;
      piVar2[1] = param_2;
      piVar2[2] = param_3;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
      piVar2[7] = 0;
      if (param_4 == 0) {
        param_4 = 0x2cff40;
      }
      piVar2[8] = (int)param_4;
      if (param_5 == 0) {
        param_5 = 0x2cff48;
      }
      piVar2[9] = (int)param_5;
      if (param_6 == 0) {
        param_6 = 0x2cff50;
      }
      piVar2[10] = (int)param_6;
      piVar2[0xb] = 0;
      piVar2[0xc] = 0;
      piVar2[0xd] = 0;
      piVar2[0xe] = (int)param_1;
      if (param_1[4] == 0) {
        param_1[5] = (int)piVar2;
        param_1[4] = (int)piVar2;
      }
      else {
        *(int **)(param_1[5] + 0x30) = piVar2;
        piVar2[0xd] = param_1[5];
        param_1[5] = (int)piVar2;
      }
    }
    else {
      iVar6 = piVar2[2];
      while (iVar6 != param_3) {
        piVar2 = (int *)piVar2[0xc];
        if (piVar2 == (int *)0x0) goto LAB_002cfc80;
        iVar6 = piVar2[2];
      }
      uStack_b0 = 1;
      uStack_ac = FUN_002a5548(0xffffffff80000017);
      FUN_002a55d8(&uStack_b0);
    }
    iVar6 = *piVar2;
  }
  return iVar6;
}


// ==== FUN_002cfd98 @ 002cfd98 ====

bool FUN_002cfd98(void)

{
  long lVar1;
  
  lVar1 = FUN_002a6010(0x3c,uGpffff88dc,4,uGpffff88e0,0x44ec68,0x40000);
  uGpffff8f18 = (int)lVar1;
  if (lVar1 != 0) {
    uGpffff88d8 = 0;
  }
  return lVar1 != 0;
}


// ==== FUN_002cfdf8 @ 002cfdf8 ====

undefined8 FUN_002cfdf8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)param_1 + 0x10);
  if (puVar3 != (undefined4 *)0x0) {
    pcVar1 = (code *)puVar3[8];
    while (lVar2 = (*pcVar1)(param_2,*puVar3,puVar3[1]), lVar2 != 0) {
      puVar3 = (undefined4 *)puVar3[0xc];
      if (puVar3 == (undefined4 *)0x0) {
        return param_1;
      }
      pcVar1 = (code *)puVar3[8];
    }
    puVar3 = (undefined4 *)puVar3[0xd];
    param_1 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = (code *)puVar3[9];
      while( true ) {
        (*pcVar1)(param_2,*puVar3,puVar3[1]);
        puVar3 = (undefined4 *)puVar3[0xd];
        if (puVar3 == (undefined4 *)0x0) break;
        pcVar1 = (code *)puVar3[9];
      }
      param_1 = 0;
    }
  }
  return param_1;
}


// ==== FUN_002cfe90 @ 002cfe90 ====

undefined8 FUN_002cfe90(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)param_1 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    pcVar1 = (code *)puVar2[9];
    while( true ) {
      (*pcVar1)(param_2,*puVar2,puVar2[1]);
      puVar2 = (undefined4 *)puVar2[0xd];
      if (puVar2 == (undefined4 *)0x0) break;
      pcVar1 = (code *)puVar2[9];
    }
  }
  return param_1;
}


// ==== FUN_002cfef0 @ 002cfef0 ====

void FUN_002cfef0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x38);
  if (puVar1[4] != 0) {
    puVar1[4] = 0;
    *puVar1 = puVar1[1];
    *(undefined4 *)(*(int *)((int)param_1 + 0x38) + 0x14) = 0;
  }
  (*DAT_00449554)(param_2,param_1);
  return;
}


// ==== FUN_002cff58 @ 002cff58 ====

undefined4 FUN_002cff58(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + 0x27U & 0xffffffe0);
  iVar2 = (((int)param_1 + param_2 & 0xffffffe0U) - (int)puVar1) + -0x20;
  if (0x1f < iVar2) {
    puVar1[3] = iVar2;
    *puVar1 = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    param_1[1] = (uint)puVar1;
    *param_1 = (uint)puVar1;
    return 1;
  }
  return 0;
}


// ==== FUN_002cffb0 @ 002cffb0 ====

undefined4 FUN_002cffb0(void)

{
  return 1;
}


// ==== FUN_002cffc0 @ 002cffc0 ====

void FUN_002cffc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1 - 0x20;
  *(undefined4 *)(param_1 + -0x10) = 0;
  uVar1 = *(uint *)(param_1 + -0x18);
  uVar2 = *(uint *)(*(int *)(param_1 + -0x20) + 4);
  iVar3 = *(int *)(param_1 + -0x1c);
  if ((uVar2 == 0) || (uVar4 < uVar2)) {
    *(uint *)(*(int *)(param_1 + -0x20) + 4) = uVar4;
  }
  if ((uVar1 != 0) && ((~*(uint *)(uVar1 + 0x10) & 1) != 0)) {
    *(int *)(uVar1 + 4) = iVar3;
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 8) = uVar1;
    }
    *(int *)(uVar1 + 0xc) = *(int *)(uVar1 + 0xc) + 0x20 + *(int *)(param_1 + -0x14);
    uVar4 = uVar1;
  }
  if ((iVar3 != 0) && ((~*(uint *)(iVar3 + 0x10) & 1) != 0)) {
    *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(iVar3 + 4);
    if (*(int *)(iVar3 + 4) != 0) {
      *(uint *)(*(int *)(iVar3 + 4) + 8) = uVar4;
    }
    *(int *)(uVar4 + 0xc) = *(int *)(uVar4 + 0xc) + 0x20 + *(int *)(iVar3 + 0xc);
  }
  return;
}


// ==== FUN_002d0078 @ 002d0078 ====

undefined8 FUN_002d0078(undefined8 param_1,int param_2)

{
  long lVar1;
  
  DAT_0040e710 = param_2;
  lVar1 = FUN_002a6010(0x21,DAT_0040e0d4,4,DAT_0040e0d8,0x44ec90,0x40412);
  *(int *)((int)&DAT_00449438 + DAT_0040e710) = (int)lVar1;
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    DAT_0040e714 = DAT_0040e714 + 1;
  }
  return param_1;
}


// ==== FUN_002d00f0 @ 002d00f0 ====

undefined8 FUN_002d00f0(undefined8 param_1)

{
  if (*(int *)((int)&DAT_00449438 + DAT_0040e710) != 0) {
    FUN_002a65f0();
  }
  DAT_0040e714 = DAT_0040e714 + -1;
  return param_1;
}


// ==== FUN_002d0178 @ 002d0178 ====

undefined4 FUN_002d0178(void)

{
  DAT_0044952c = strlen;
  DAT_00449530 = &LAB_002d07c8;
  DAT_00449534 = &LAB_002d0810;
  DAT_00449538 = FUN_00360ac8;
  DAT_0044953c = FUN_0035d7b0;
  DAT_004494fc = sprintf;
  DAT_00449500 = &LAB_0035e5b8;
  DAT_00449504 = strcpy;
  DAT_00449508 = FUN_0035d1a0;
  DAT_0044950c = FUN_0035c7a4;
  DAT_00449510 = &LAB_0035ce20;
  DAT_00449514 = &LAB_002d0890;
  DAT_00449518 = &LAB_002d0858;
  DAT_0044951c = FUN_00360a50;
  DAT_00449520 = strcmp;
  DAT_00449524 = FUN_0035cfd8;
  DAT_00449528 = &LAB_002d0758;
  return 1;
}


// ==== FUN_002d0280 @ 002d0280 ====

undefined1 * FUN_002d0280(undefined1 *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 auStack_190 [64];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_140 [128];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  uint uStack_ac;
  int aiStack_a8 [2];
  
  while( true ) {
    lVar5 = FUN_002a5420(param_2,&iStack_b0,&uStack_ac,aiStack_a8,0);
    if (lVar5 == 0) {
      return (undefined1 *)0x0;
    }
    if (0x2002 < aiStack_a8[0] - 0x35000U) {
      uStack_1a0 = 1;
      uStack_19c = FUN_002a5548(0xffffffff80000004);
      FUN_002a55d8(&uStack_1a0);
      return (undefined1 *)0x0;
    }
    if (iStack_b0 == 2) break;
    if (iStack_b0 == 0x13) {
      bVar1 = false;
      if (param_1 == (undefined1 *)0x0) {
        param_1 = (undefined1 *)(*DAT_00449540)(uStack_ac,0x30002);
        bVar1 = true;
        if (param_1 == (undefined1 *)0x0) {
          uStack_c0 = 1;
          uStack_bc = FUN_002a5548(0xffffffff80000013,uStack_ac);
          FUN_002a55d8(&uStack_c0);
          return (undefined1 *)0x0;
        }
      }
      if (uStack_ac == 0) {
        return param_1;
      }
      puVar7 = param_1;
      uVar12 = uStack_ac;
      goto LAB_002d0508;
    }
    lVar5 = FUN_002a73d8(param_2,uStack_ac);
    if (lVar5 == 0) {
      return (undefined1 *)0x0;
    }
  }
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)(*DAT_00449540)(uStack_ac,0x30002), param_1 == (undefined1 *)0x0)) {
    uStack_150 = 1;
    uStack_14c = FUN_002a5548(0xffffffff80000013,uStack_ac);
    FUN_002a55d8(&uStack_150);
    return (undefined1 *)0x0;
  }
  if (uStack_ac == 0) {
    return param_1;
  }
  uVar12 = uStack_ac;
  puVar7 = param_1;
  do {
    uVar9 = 0x40;
    if (uVar12 < 0x41) {
      uVar9 = uVar12;
    }
    uVar4 = FUN_002a7050(param_2,auStack_190,uVar9);
    uVar12 = uVar12 - uVar9;
    if (uVar4 != uVar9) {
      return (undefined1 *)0x0;
    }
    uVar4 = 0;
    iVar8 = 0;
    puVar10 = puVar7 + uVar9;
    if (uVar9 != 0) {
      uVar11 = uVar9 & 3;
      puVar6 = auStack_190;
      iVar2 = 0;
      if ((int)uVar9 < 1) {
LAB_002d0410:
        iVar8 = iVar2;
        uVar3 = *puVar6;
LAB_002d0414:
        uVar4 = iVar8 + 1;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
        if (uVar9 <= uVar4) goto LAB_002d046c;
      }
      else if (uVar11 != 0) {
        uVar3 = auStack_190[0];
        if (1 < uVar11) {
          puVar6 = auStack_190;
          if (2 < uVar11) {
            *puVar7 = auStack_190[0];
            puVar6 = auStack_190 + 1;
            uVar3 = auStack_190[1];
            puVar7 = puVar7 + 1;
          }
          puVar6 = puVar6 + 1;
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
          iVar2 = (2 < uVar11) + 1;
          goto LAB_002d0410;
        }
        goto LAB_002d0414;
      }
      do {
        uVar4 = uVar4 + 4;
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
        puVar7[2] = puVar6[2];
        puVar7[3] = puVar6[3];
        puVar7 = puVar7 + 4;
        puVar6 = puVar6 + 4;
      } while (uVar4 < uVar9);
    }
LAB_002d046c:
    puVar7 = puVar10;
    if (uVar12 == 0) {
      return param_1;
    }
  } while( true );
LAB_002d0508:
  uVar9 = 0x80;
  if (uVar12 < 0x81) {
    uVar9 = uVar12;
  }
  uVar4 = FUN_002a7050(param_2,auStack_140,uVar9);
  uVar11 = uVar4 >> 1;
  if (uVar4 != uVar9) {
    if (bVar1) {
      (*DAT_00449544)(param_1);
      return (undefined1 *)0x0;
    }
    return (undefined1 *)0x0;
  }
  uVar12 = uVar12 - uVar4;
  uVar9 = 0;
  iVar8 = 0;
  if (uVar11 != 0) {
    uVar4 = uVar11 & 3;
    puVar10 = auStack_140;
    iVar2 = 0;
    puVar6 = puVar7;
    if (uVar11 == 0) {
LAB_002d05ac:
      iVar8 = iVar2;
      uVar3 = *puVar10;
LAB_002d05b0:
      uVar9 = iVar8 + 1;
      puVar10 = puVar10 + 2;
      *puVar6 = uVar3;
      puVar6 = puVar6 + 1;
      if (uVar11 <= uVar9) goto LAB_002d0604;
    }
    else if (uVar4 != 0) {
      uVar3 = auStack_140[0];
      if (1 < uVar4) {
        puVar10 = auStack_140;
        puVar6 = puVar7;
        if (2 < uVar4) {
          *puVar7 = auStack_140[0];
          puVar10 = auStack_140 + 2;
          uVar3 = auStack_140[2];
          puVar6 = puVar7 + 1;
        }
        puVar10 = puVar10 + 2;
        *puVar6 = uVar3;
        puVar6 = puVar6 + 1;
        iVar2 = (2 < uVar4) + 1;
        goto LAB_002d05ac;
      }
      goto LAB_002d05b0;
    }
    do {
      uVar9 = uVar9 + 4;
      *puVar6 = *puVar10;
      puVar6[1] = puVar10[2];
      puVar6[2] = puVar10[4];
      puVar6[3] = puVar10[6];
      puVar10 = puVar10 + 8;
      puVar6 = puVar6 + 4;
    } while (uVar9 < uVar11);
  }
LAB_002d0604:
  puVar7 = puVar7 + uVar11;
  if (uVar12 == 0) {
    return param_1;
  }
  goto LAB_002d0508;
}


// ==== FUN_002d0678 @ 002d0678 ====

void FUN_002d0678(void)

{
  return;
}


// ==== FUN_002d0680 @ 002d0680 ====

uint FUN_002d0680(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 0x40e0e0;
  }
  iVar1 = (*DAT_0044952c)(param_1);
  return iVar1 + 4U & 0xfffffffc;
}


// ==== FUN_002d06b8 @ 002d06b8 ====

long FUN_002d06b8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = 0x40e0e0;
  if (param_1 != 0) {
    lVar3 = param_1;
  }
  lVar2 = 0x40e0e0;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  iVar1 = (*DAT_0044952c)(lVar2);
  uVar4 = iVar1 + 4U & 0xfffffffc;
  lVar2 = FUN_002a5350(param_2,2,uVar4,0x37002,0x37);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_002a71e0(param_2,lVar3,uVar4);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
  }
  return lVar3;
}


// ==== FUN_002d08c8 @ 002d08c8 ====

undefined4 FUN_002d08c8(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) &&
     ((cVar1 = *(char *)param_1, cVar1 == '\\' ||
      (((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar1) & 3) != 0 && (((char *)param_1)[1] == ':')))
      ))) {
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_002d0910 @ 002d0910 ====

undefined8 FUN_002d0910(undefined8 param_1,float *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  pfVar3 = (float *)param_1;
  fVar2 = param_2[2];
  *(undefined8 *)(pfVar3 + 3) = *(undefined8 *)param_2;
  pfVar3[5] = fVar2;
  fVar2 = param_2[2];
  *(undefined8 *)pfVar3 = *(undefined8 *)param_2;
  pfVar3[2] = fVar2;
  iVar5 = param_3 + -2;
  if (param_3 != 1) {
    do {
      pfVar4 = param_2 + 3;
      if (*pfVar4 < pfVar3[3]) {
        pfVar3[3] = *pfVar4;
      }
      if (param_2[4] < pfVar3[4]) {
        pfVar3[4] = param_2[4];
      }
      if (param_2[5] < pfVar3[5]) {
        pfVar3[5] = param_2[5];
      }
      if (*pfVar3 < *pfVar4) {
        *pfVar3 = *pfVar4;
      }
      if (pfVar3[1] < param_2[4]) {
        pfVar3[1] = param_2[4];
      }
      if (pfVar3[2] < param_2[5]) {
        pfVar3[2] = param_2[5];
      }
      bVar1 = iVar5 != 0;
      iVar5 = iVar5 + -1;
      param_2 = pfVar4;
    } while (bVar1);
  }
  return param_1;
}


// ==== FUN_002d0a18 @ 002d0a18 ====

void FUN_002d0a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_002d1530(0x3c3370,param_1,param_2,param_3,param_4);
  return;
}


// ==== FUN_002d0a78 @ 002d0a78 ====

undefined4 FUN_002d0a78(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  
  iVar8 = *(int *)(param_1 + 0xc);
  bVar4 = false;
  uVar2 = *(uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar8 != 8) {
    if (8 < iVar8) {
      if (iVar8 == 0x20) {
        iVar8 = *(int *)(param_1 + 0x14);
        iVar11 = 0;
        if (0 < iVar3) {
          do {
            iVar9 = 0;
            if (0 < (int)uVar2) {
              pbVar7 = (byte *)(iVar8 + 3);
              uVar6 = uVar2 & 3;
              if ((int)uVar2 < 1) {
LAB_002d0cdc:
                bVar1 = *pbVar7;
LAB_002d0ce0:
                if ((bVar1 != 0xff) && (bVar4 = true, 0xf < bVar1)) {
                  return 3;
                }
                iVar9 = iVar9 + 1;
                pbVar7 = pbVar7 + 4;
                if ((int)uVar2 <= iVar9) goto LAB_002d0d74;
              }
              else if (uVar6 != 0) {
                if (1 < uVar6) {
                  if (uVar6 < 3) {
                    bVar1 = *pbVar7;
                  }
                  else {
                    if ((*(byte *)(iVar8 + 3) != 0xff) && (bVar4 = true, 0xf < *(byte *)(iVar8 + 3))
                       ) {
                      return 3;
                    }
                    pbVar7 = (byte *)(iVar8 + 7);
                    iVar9 = 1;
                    bVar1 = *pbVar7;
                  }
                  if ((bVar1 != 0xff) && (bVar4 = true, 0xf < bVar1)) {
                    return 3;
                  }
                  pbVar7 = pbVar7 + 4;
                  iVar9 = iVar9 + 1;
                  goto LAB_002d0cdc;
                }
                bVar1 = *pbVar7;
                goto LAB_002d0ce0;
              }
              do {
                if ((*pbVar7 != 0xff) && (bVar4 = true, 0xf < *pbVar7)) {
                  return 3;
                }
                if ((pbVar7[4] != 0xff) && (bVar4 = true, 0xf < pbVar7[4])) {
                  return 3;
                }
                if ((pbVar7[8] != 0xff) && (bVar4 = true, 0xf < pbVar7[8])) {
                  return 3;
                }
                if ((pbVar7[0xc] != 0xff) && (bVar4 = true, 0xf < pbVar7[0xc])) {
                  return 3;
                }
                iVar9 = iVar9 + 4;
                pbVar7 = pbVar7 + 0x10;
              } while (iVar9 < (int)uVar2);
            }
LAB_002d0d74:
            iVar11 = iVar11 + 1;
            iVar8 = iVar8 + *(int *)(param_1 + 0x10);
          } while (iVar11 < iVar3);
        }
      }
      goto LAB_002d0d8c;
    }
    if (iVar8 != 4) goto LAB_002d0d8c;
  }
  iVar8 = *(int *)(param_1 + 0x18);
  iVar11 = 0;
  pbVar7 = *(byte **)(param_1 + 0x14);
  if (0 < iVar3) {
    do {
      iVar9 = 0;
      if (0 < (int)uVar2) {
        uVar6 = uVar2 & 3;
        pbVar10 = pbVar7;
        if ((int)uVar2 < 1) {
LAB_002d0b64:
          bVar1 = *pbVar10;
        }
        else {
          if (uVar6 == 0) {
            bVar1 = *pbVar7;
            goto LAB_002d0b9c;
          }
          if (1 < uVar6) {
            if (uVar6 < 3) {
              bVar1 = *pbVar7;
            }
            else {
              bVar1 = *(byte *)((uint)*pbVar7 * 4 + iVar8 + 3);
              if ((bVar1 < 0xf0) && (bVar4 = true, 0xf < bVar1)) {
                return 3;
              }
              pbVar10 = pbVar7 + 1;
              iVar9 = 1;
              bVar1 = *pbVar10;
            }
            bVar1 = *(byte *)((uint)bVar1 * 4 + iVar8 + 3);
            if ((bVar1 < 0xf0) && (bVar4 = true, 0xf < bVar1)) {
              return 3;
            }
            pbVar10 = pbVar10 + 1;
            iVar9 = iVar9 + 1;
            goto LAB_002d0b64;
          }
          bVar1 = *pbVar7;
        }
        bVar1 = *(byte *)((uint)bVar1 * 4 + iVar8 + 3);
        if ((bVar1 < 0xf0) && (bVar4 = true, 0xf < bVar1)) {
          return 3;
        }
        pbVar10 = pbVar10 + 1;
        for (iVar9 = iVar9 + 1; iVar9 < (int)uVar2; iVar9 = iVar9 + 4) {
          bVar1 = *pbVar10;
LAB_002d0b9c:
          bVar1 = *(byte *)((uint)bVar1 * 4 + iVar8 + 3);
          if ((bVar1 < 0xf0) && (bVar4 = true, 0xf < bVar1)) {
            return 3;
          }
          bVar1 = *(byte *)((uint)pbVar10[1] * 4 + iVar8 + 3);
          if ((bVar1 < 0xf0) && (bVar4 = true, 0xf < bVar1)) {
            return 3;
          }
          bVar1 = *(byte *)((uint)pbVar10[2] * 4 + iVar8 + 3);
          if ((bVar1 < 0xf0) && (bVar4 = true, 0xf < bVar1)) {
            return 3;
          }
          bVar1 = *(byte *)((uint)pbVar10[3] * 4 + iVar8 + 3);
          if ((bVar1 < 0xf0) && (bVar4 = true, 0xf < bVar1)) {
            return 3;
          }
          pbVar10 = pbVar10 + 4;
        }
      }
      iVar11 = iVar11 + 1;
      pbVar7 = pbVar7 + *(int *)(param_1 + 0x10);
    } while (iVar11 < iVar3);
  }
LAB_002d0d8c:
  uVar5 = 1;
  if (bVar4) {
    uVar5 = 2;
  }
  return uVar5;
}


// ==== FUN_002d0fd8 @ 002d0fd8 ====

void FUN_002d0fd8(undefined1 *param_1,byte *param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar11 = 1 << (param_4 & 0x1f);
  iVar13 = 0;
  iVar10 = 0;
  iVar9 = 0;
  iVar12 = 0;
  iVar5 = 0;
  if (0 < iVar11) {
    do {
      iVar12 = iVar12 + 1;
      if (0 < iVar11) {
        uVar2 = -iVar11 & 3;
        iVar8 = iVar11;
        pbVar4 = param_2;
        pbVar3 = param_2;
        pbVar6 = param_2;
        pbVar7 = param_2;
        if (uVar2 != 0) {
          if (uVar2 < 3) {
            if (uVar2 < 2) {
              pbVar4 = param_2 + 4;
              iVar8 = iVar11 + -1;
              iVar9 = iVar9 + (uint)*param_2;
              iVar10 = iVar10 + (uint)param_2[1];
              iVar13 = iVar13 + (uint)param_2[2];
              iVar5 = iVar5 + (uint)param_2[3];
              bVar1 = *pbVar4;
            }
            else {
              bVar1 = *param_2;
            }
            iVar8 = iVar8 + -1;
            iVar9 = iVar9 + (uint)bVar1;
            iVar10 = iVar10 + (uint)pbVar4[1];
            iVar13 = iVar13 + (uint)pbVar4[2];
            pbVar3 = pbVar4 + 4;
            iVar5 = iVar5 + (uint)pbVar4[3];
          }
          iVar8 = iVar8 + -1;
          iVar9 = iVar9 + (uint)*pbVar3;
          iVar10 = iVar10 + (uint)pbVar3[1];
          iVar13 = iVar13 + (uint)pbVar3[2];
          pbVar4 = pbVar3 + 4;
          iVar5 = iVar5 + (uint)pbVar3[3];
          pbVar3 = pbVar4;
          pbVar6 = pbVar4;
          pbVar7 = pbVar4;
          if (iVar8 == 0) goto LAB_002d1178;
        }
        do {
          iVar8 = iVar8 + -4;
          iVar9 = iVar9 + (uint)*pbVar3 + (uint)pbVar3[4] + (uint)pbVar3[8] + (uint)pbVar3[0xc];
          iVar10 = iVar10 + (uint)pbVar6[1] + (uint)pbVar6[5] + (uint)pbVar6[9] + (uint)pbVar6[0xd];
          iVar13 = iVar13 + (uint)pbVar7[2] + (uint)pbVar7[6] + (uint)pbVar7[10] + (uint)pbVar7[0xe]
          ;
          iVar5 = iVar5 + (uint)pbVar4[3] + (uint)pbVar4[7] + (uint)pbVar4[0xb] + (uint)pbVar4[0xf];
          pbVar4 = pbVar4 + 0x10;
          pbVar3 = pbVar3 + 0x10;
          pbVar6 = pbVar6 + 0x10;
          pbVar7 = pbVar7 + 0x10;
        } while (iVar8 != 0);
      }
LAB_002d1178:
      param_2 = param_2 + *(int *)(param_3 + 0x10);
    } while (iVar12 < iVar11);
  }
  param_4 = param_4 << 1;
  param_1[3] = (char)(iVar5 >> (param_4 & 0x1f));
  *param_1 = (char)(iVar9 >> (param_4 & 0x1f));
  param_1[1] = (char)(iVar10 >> (param_4 & 0x1f));
  param_1[2] = (char)(iVar13 >> (param_4 & 0x1f));
  return;
}


// ==== FUN_002d11d0 @ 002d11d0 ====

void FUN_002d11d0(void)

{
  undefined8 uVar1;
  undefined4 in_vc12;
  undefined4 uVar2;
  
  REG_VIF1_FBRST = 1;
  REG_VIF0_FBRST = 1;
  uVar1 = _cfc2(in_vc12);
  REG_GIF_CTRL = 1;
  uVar2 = _ctc2((uint)uVar1 | 0x200);
  uVar1 = _cfc2(uVar2);
  _ctc2((uint)uVar1 | 2);
  FUN_00371b60();
  FUN_0029c238(1);
  return;
}


// ==== FUN_002d1240 @ 002d1240 ====

void FUN_002d1240(undefined2 *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  
  puVar4 = param_1 + 10;
  *(undefined4 *)(*(int *)(param_1 + 2) + 0x10) = 1;
  uVar1 = param_1[1];
  uVar11 = (uint)uVar1;
  uVar3 = -(uint)uVar1 & 3;
  puVar5 = puVar4;
  puVar9 = puVar4;
  puVar10 = puVar4;
  puVar6 = puVar4;
  puVar7 = puVar4;
  puVar8 = puVar4;
  if (uVar3 != 0) {
    if (uVar3 < 3) {
      if (uVar3 < 2) {
        if (*(int *)(param_1 + 0x14) != 0) {
          if (*(int *)(param_1 + 0xc) == 0) {
            puVar4[0] = 0;
            puVar4[1] = 0;
          }
          else if ((param_1[10] & 2) == 0) {
            FUN_002cee38(uGpffff88c0);
            puVar4[0] = 0;
            puVar4[1] = 0;
          }
          else {
            puVar4[0] = 0;
            puVar4[1] = 0;
          }
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x12) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        puVar4 = param_1 + 0x18;
        uVar11 = uVar1 - 1;
        iVar2 = *(int *)(param_1 + 0x22);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x14);
      }
      if (iVar2 != 0) {
        if (*(int *)(puVar4 + 2) == 0) {
          puVar4[0] = 0;
          puVar4[1] = 0;
        }
        else if ((*puVar4 & 2) == 0) {
          FUN_002cee38(uGpffff88c0);
          puVar4[0] = 0;
          puVar4[1] = 0;
        }
        else {
          puVar4[0] = 0;
          puVar4[1] = 0;
        }
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
      }
      puVar4 = puVar4 + 0xe;
      uVar11 = uVar11 - 1;
    }
    if (*(int *)(puVar4 + 10) != 0) {
      if (*(int *)(puVar4 + 2) == 0) {
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
      else if ((*puVar4 & 2) == 0) {
        FUN_002cee38(uGpffff88c0);
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
      else {
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
    }
    uVar11 = uVar11 - 1;
    puVar4 = puVar4 + 0xe;
    puVar5 = puVar4;
    puVar9 = puVar4;
    puVar10 = puVar4;
    puVar6 = puVar4;
    puVar7 = puVar4;
    puVar8 = puVar4;
    if (uVar11 == 0) goto LAB_002d14fc;
  }
  do {
    if (*(int *)(puVar9 + 10) == 0) {
      iVar2 = *(int *)(puVar9 + 0x18);
    }
    else {
      if (*(int *)(puVar10 + 2) == 0) {
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
      else if ((*puVar4 & 2) == 0) {
        FUN_002cee38(uGpffff88c0);
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
      else {
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      iVar2 = *(int *)(puVar9 + 0x18);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(puVar9 + 0x26);
    }
    else {
      if (*(int *)(puVar10 + 0x10) == 0) {
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
      }
      else if ((puVar4[0xe] & 2) == 0) {
        FUN_002cee38(uGpffff88c0);
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
      }
      else {
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
      }
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar7[0x14] = 0;
      puVar7[0x15] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      iVar2 = *(int *)(puVar9 + 0x26);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(puVar9 + 0x34);
    }
    else {
      if (*(int *)(puVar10 + 0x1e) == 0) {
        puVar4[0x1c] = 0;
        puVar4[0x1d] = 0;
      }
      else if ((puVar4[0x1c] & 2) == 0) {
        FUN_002cee38(uGpffff88c0);
        puVar4[0x1c] = 0;
        puVar4[0x1d] = 0;
      }
      else {
        puVar4[0x1c] = 0;
        puVar4[0x1d] = 0;
      }
      puVar6[0x1e] = 0;
      puVar6[0x1f] = 0;
      puVar7[0x22] = 0;
      puVar7[0x23] = 0;
      puVar8[0x24] = 0;
      puVar8[0x25] = 0;
      puVar5[0x26] = 0;
      puVar5[0x27] = 0;
      iVar2 = *(int *)(puVar9 + 0x34);
    }
    if (iVar2 != 0) {
      if (*(int *)(puVar10 + 0x2c) == 0) {
        puVar4[0x2a] = 0;
        puVar4[0x2b] = 0;
      }
      else if ((puVar4[0x2a] & 2) == 0) {
        FUN_002cee38(uGpffff88c0);
        puVar4[0x2a] = 0;
        puVar4[0x2b] = 0;
      }
      else {
        puVar4[0x2a] = 0;
        puVar4[0x2b] = 0;
      }
      puVar6[0x2c] = 0;
      puVar6[0x2d] = 0;
      puVar7[0x30] = 0;
      puVar7[0x31] = 0;
      puVar8[0x32] = 0;
      puVar8[0x33] = 0;
      puVar5[0x34] = 0;
      puVar5[0x35] = 0;
    }
    puVar4 = puVar4 + 0x38;
    uVar11 = uVar11 - 4;
    puVar5 = puVar5 + 0x38;
    puVar9 = puVar9 + 0x38;
    puVar10 = puVar10 + 0x38;
    puVar6 = puVar6 + 0x38;
    puVar7 = puVar7 + 0x38;
    puVar8 = puVar8 + 0x38;
  } while (uVar11 != 0);
LAB_002d14fc:
  *param_1 = 0;
  return;
}


// ==== FUN_002d1530 @ 002d1530 ====

undefined4
FUN_002d1530(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    if (puVar1[2] == param_2) break;
    puVar1 = (undefined4 *)puVar1[0xc];
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  puVar1[5] = param_5;
  return *puVar1;
}


// ==== FUN_002d15a0 @ 002d15a0 ====

undefined4 FUN_002d15a0(void)

{
  if ((((DAT_0044ecd0 != -1) && (DAT_0044ede8 != -1)) && (DAT_0044ef00 != -1)) &&
     (((DAT_0044f018 != -1 && (DAT_0044f130 != -1)) &&
      ((DAT_0044f248 != -1 && (DAT_0044f360 != -1)))))) {
    return 1;
  }
  return 0;
}


// ==== FUN_002d1610 @ 002d1610 ====

void FUN_002d1610(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x88,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x88,uVar1);
  }
  FUN_002d2d48(auStack_40[0],param_1);
  return;
}


// ==== FUN_002d16b8 @ 002d16b8 ====

/* Strings referenciadas:
     "ComputeDestInterval"
     "PathLength"
     "StopWhenHidden"
     "MaxDeltaHeight"
     "Graph"
     "MaxPointsToFlee"
     "MaxEntitiesToFlee" */

undefined8 FUN_002d16b8(undefined8 param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (param_2 == 0) {
LAB_002d1840:
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_002e3920(param_2);
    lVar4 = stricmp(uVar3,0x404030);
    iVar6 = (int)param_1;
    if (lVar4 == 0) {
      lVar4 = FUN_002e3918(param_2);
      if (lVar4 != 0) {
        uVar3 = FUN_0035e730(lVar4);
        uVar7 = FUN_00291c68(uVar3);
        *(undefined4 *)(iVar6 + 0x68) = uVar7;
        return 1;
      }
    }
    else {
      lVar4 = stricmp(uVar3,0x404048);
      if (lVar4 == 0) {
        lVar4 = FUN_002e3918(param_2);
        if (lVar4 != 0) {
          uVar7 = FUN_0035e750(lVar4);
          *(undefined4 *)(iVar6 + 0x74) = uVar7;
          return 1;
        }
      }
      else {
        lVar4 = stricmp(uVar3,0x404058);
        if (lVar4 == 0) {
          lVar4 = FUN_002e3918(param_2);
          if (lVar4 != 0) {
            lVar4 = stricmp(lVar4,0x404068);
            *(bool *)(iVar6 + 0x78) = lVar4 != 0;
            return 1;
          }
        }
        else {
          lVar4 = stricmp(uVar3,0x404070);
          if (lVar4 == 0) {
            lVar4 = FUN_002e3918(param_2);
            if (lVar4 != 0) {
              uVar3 = FUN_0035e730(lVar4);
              iVar1 = DAT_003c9ed4;
              fVar8 = (float)FUN_00291c68(uVar3);
              *(float *)(iVar6 + 0x84) = fVar8 * *(float *)(iVar1 + 0xc);
              return 1;
            }
          }
          else {
            lVar4 = stricmp(uVar3,0x404080);
            if (lVar4 == 0) {
              lVar4 = FUN_002e3918(param_2);
              if (lVar4 != 0) {
                lVar5 = FUN_002ec058(DAT_003c9ed4,0x452158);
                if ((lVar5 != 0) && (lVar4 = FUN_002f2f58(lVar5,lVar4), lVar4 != 0)) {
                  uVar3 = FUN_002d1bc8(param_1,lVar4);
                  return uVar3;
                }
                goto LAB_002d1840;
              }
            }
            else {
              lVar4 = stricmp(uVar3,0x404088);
              if (lVar4 == 0) {
                lVar4 = FUN_002e3918(param_2);
                if (lVar4 != 0) {
                  uVar7 = FUN_0035e750(lVar4);
                  *(undefined4 *)(iVar6 + 0x24) = uVar7;
                  return 1;
                }
              }
              else {
                lVar4 = stricmp(uVar3,0x404098);
                if ((lVar4 == 0) && (lVar4 = FUN_002e3918(param_2), lVar4 != 0)) {
                  uVar7 = FUN_0035e750(lVar4);
                  *(undefined4 *)(iVar6 + 0x30) = uVar7;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 0;
    if (param_2 != 0) {
      lVar4 = FUN_002e3920(param_2);
      uVar3 = 0;
      if (lVar4 != 0) {
        pcVar2 = (char *)FUN_002e3920(param_2);
        uVar3 = 0;
        if (*pcVar2 == '_') {
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}


// ==== FUN_002d1918 @ 002d1918 ====

/* Strings referenciadas:
     "CFleeAgent::CheckDangerVisible"
     "CFleeAgent::ComputeDestination" */

undefined4 FUN_002d1918(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piStack_90;
  int iStack_8c;
  
  param_1[0x16] = (int)(*(float *)(DAT_003c9ed4 + 0xc) * *(float *)(DAT_003c9ed4 + 0xc));
  param_1[0x13] = DAT_004514f8;
  param_1[0x14] = DAT_004514fc;
  param_1[0x15] = DAT_00451500;
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  param_1[0x17] = 0;
  param_1[0xd] = DAT_004514f8;
  param_1[0xe] = DAT_004514fc;
  param_1[0xf] = DAT_00451500;
  *(undefined1 *)(param_1 + 0x12) = 0;
  iVar5 = *(int *)(DAT_003c9ed4 + 0xc);
  param_1[8] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[0x21] = iVar5;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1d] = 2;
  lVar1 = FUN_002e0018();
  if (lVar1 != 0) {
    iVar5 = param_1[9];
    if (iVar5 != 0) {
      piStack_90 = (int *)0x0;
      iVar4 = iVar5 * 0xc + 0x10;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4,&piStack_90
                        );
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_90,iVar4,uVar2);
      }
      *piStack_90 = iVar5;
      if (iVar5 != 0) {
        for (iVar5 = iVar5 + -2; iVar5 != -1; iVar5 = iVar5 + -1) {
        }
      }
      param_1[7] = (int)(piStack_90 + 4);
    }
    if (param_1[0xc] != 0) {
      iStack_8c = 0;
      iVar5 = param_1[0xc] << 2;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar5,
                         (uint)&piStack_90 | 4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_8c,iVar5,uVar2);
      }
      param_1[10] = iStack_8c;
    }
    if (param_1[10] == 0) {
      iVar5 = param_1[2];
    }
    else {
      uVar3 = 0;
      if (param_1[0xc] != 0) {
        iVar5 = param_1[10];
        while( true ) {
          iVar4 = uVar3 * 4;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar4 + iVar5) = 0;
          if ((uint)param_1[0xc] <= uVar3) break;
          iVar5 = param_1[10];
        }
      }
      iVar5 = param_1[2];
    }
    iVar5 = FUN_002e1c58(iVar5,0x4512b0);
    param_1[3] = iVar5;
    iVar5 = FUN_002e1c58(param_1[2],0x455e18);
    param_1[5] = iVar5;
    uVar2 = FUN_002e91c0();
    iVar5 = FUN_002e9438(uVar2,0x4040b0);
    param_1[0x18] = iVar5;
    iVar5 = FUN_002e93b8(uVar2,0x4040d0);
    param_1[0x1b] = iVar5;
    param_1[0x19] = 0;
    lVar1 = (**(code **)(*param_1 + 0x44))((int)param_1 + (int)*(short *)(*param_1 + 0x40));
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = (**(code **)(*param_1 + 0x4c))((int)param_1 + (int)*(short *)(*param_1 + 0x48));
    if (lVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002d1bc8 @ 002d1bc8 ====

undefined4 FUN_002d1bc8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar1 = DAT_003c9ed4;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  lVar2 = FUN_002ec058(uVar1,0x452158);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = FUN_002ec058(DAT_003c9ed4,0x450fd8);
    iVar6 = (int)lVar2;
    uVar5 = 0;
    if (*(int *)(iVar6 + 8) != 0) {
      iVar4 = *(int *)(iVar6 + 4);
      while (iVar4 = *(int *)(uVar5 * 4 + iVar4), *(int *)(iVar4 + 0x84) != *(int *)(param_1 + 0x10)
            ) {
        uVar5 = uVar5 + 1;
        if (*(uint *)(iVar6 + 8) <= uVar5) goto LAB_002d1d14;
        iVar4 = *(int *)(iVar6 + 4);
      }
      uVar5 = 0;
      if (*(int *)(iVar4 + 0x10c) != 0) {
        piVar7 = (int *)(iVar4 + 0x8c);
        piVar8 = piVar7;
        do {
          iVar6 = *(int *)*piVar8;
          lVar2 = (**(code **)(iVar6 + 0x1c))(*piVar8 + (int)*(short *)(iVar6 + 0x18));
          uVar5 = uVar5 + 1;
          if (lVar2 == 0x451658) {
            *(int *)(param_1 + 0x80) = *piVar7;
            break;
          }
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar5 < *(uint *)(iVar4 + 0x10c));
      }
      if (lVar3 != 0) {
        iVar6 = *(int *)lVar3;
        lVar2 = (**(code **)(iVar6 + 0x3c))
                          ((int)(int *)lVar3 + (int)*(short *)(iVar6 + 0x38),iVar4 + 4,
                           param_1 + 0x7c);
        if (lVar2 != 0) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
      }
    }
LAB_002d1d14:
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_002d1d48 @ 002d1d48 ====

bool FUN_002d1d48(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined *apuStack_b0 [9];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  
  fVar6 = DAT_003c958c;
  iVar12 = (int)param_1;
  FUN_002dfbf8(*(undefined4 *)(iVar12 + 4));
  if (*(char *)(iVar12 + 0x48) == '\0') {
    iVar13 = *(int *)(*(int *)(iVar12 + 8) + 0x14);
    *(undefined4 *)(iVar12 + 0x34) = *(undefined4 *)(iVar13 + 0x30);
    *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar13 + 0x34);
    *(undefined4 *)(iVar12 + 0x3c) = *(undefined4 *)(iVar13 + 0x38);
    *(undefined4 *)(iVar12 + 0x40) = 0x7fffffff;
    *(undefined4 *)(iVar12 + 0x44) = 0xffffffff;
    *(undefined1 *)(iVar12 + 0x48) = 1;
  }
  uVar9 = FUN_002e91c0();
  if (*(char *)(iVar12 + 0x78) == '\0') {
LAB_002d1f0c:
    fVar14 = *(float *)(iVar12 + 100);
  }
  else {
    lVar10 = FUN_002e96f8(uVar9,*(undefined4 *)(iVar12 + 0x60),
                          *(undefined4 *)(*(int *)(iVar12 + 8) + 0x14));
    if (lVar10 == 0) {
      cVar1 = *(char *)(iVar12 + 0x70);
    }
    else {
      uVar11 = 0;
      *(undefined1 *)(iVar12 + 0x70) = 0;
      if (*(int *)(iVar12 + 0x20) != 0) {
        iVar13 = 0;
        do {
          iVar3 = *(int *)(*(int *)(iVar12 + 8) + 0x14);
          bVar7 = (*DAT_00451250)(iVar3 + 0x30,iVar13 + *(int *)(iVar12 + 0x1c),iVar3,1);
          bVar2 = *(byte *)(iVar12 + 0x70);
          *(byte *)(iVar12 + 0x70) = bVar2 | bVar7;
          if (bVar2 != 0 || bVar7 != 0) goto LAB_002d1f0c;
          uVar11 = uVar11 + 1;
          iVar13 = iVar13 + 0xc;
        } while (uVar11 < *(uint *)(iVar12 + 0x20));
      }
      if (*(char *)(iVar12 + 0x70) != '\0') {
        fVar14 = *(float *)(iVar12 + 100);
        goto LAB_002d1f10;
      }
      for (uVar11 = 0; uVar11 < *(uint *)(iVar12 + 0x2c); uVar11 = uVar11 + 1) {
        iVar13 = FUN_00310120(*(undefined4 *)(iVar12 + 0x14),
                              *(undefined4 *)(uVar11 * 4 + *(int *)(iVar12 + 0x28)));
        bVar2 = *(byte *)(iVar12 + 0x70) | *(char *)(iVar13 + 0x11) == '\0';
        *(byte *)(iVar12 + 0x70) = bVar2;
        if (bVar2 != 0) break;
      }
      cVar1 = *(char *)(iVar12 + 0x70);
    }
    if (cVar1 == '\0') {
      iVar13 = *(int *)(*(int *)(iVar12 + 8) + 0x14);
      *(undefined4 *)(iVar12 + 0x34) = *(undefined4 *)(iVar13 + 0x30);
      *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar13 + 0x34);
      *(undefined4 *)(iVar12 + 0x3c) = *(undefined4 *)(iVar13 + 0x38);
      *(undefined4 *)(iVar12 + 0x44) = 0xffffffff;
      *(undefined4 *)(iVar12 + 0x40) = 0x7fffffff;
      return true;
    }
    fVar14 = *(float *)(iVar12 + 100);
  }
LAB_002d1f10:
  *(undefined4 *)(iVar12 + 0x18) = 0;
  if (fVar14 < fVar6) {
    lVar10 = FUN_002e8ab8(uVar9,*(undefined4 *)(iVar12 + 0x6c),
                          *(undefined4 *)(*(int *)(iVar12 + 8) + 0x14));
    if (lVar10 != 0) {
      uVar8 = FUN_002d2098(param_1);
      *(undefined1 *)(iVar12 + 0x71) = uVar8;
      FUN_002e9978(uVar9,*(undefined4 *)(iVar12 + 0x6c),*(undefined4 *)(*(int *)(iVar12 + 8) + 0x14)
                  );
      *(float *)(iVar12 + 100) = fVar6 + *(float *)(iVar12 + 0x68);
      goto LAB_002d1f68;
    }
    cVar1 = *(char *)(iVar12 + 0x71);
  }
  else {
LAB_002d1f68:
    cVar1 = *(char *)(iVar12 + 0x71);
  }
  if (cVar1 == '\0') {
    return true;
  }
  iVar13 = *(int *)(iVar12 + 0x44);
  if (iVar13 == -1) {
    piVar4 = *(int **)(iVar12 + 0xc);
  }
  else {
    iVar3 = *(int *)(iVar12 + 0x40);
    if (iVar3 != 0x7fffffff) {
      FUN_002e7360(apuStack_b0);
      uStack_8c = *(undefined4 *)(iVar12 + 0x34);
      apuStack_b0[0] = &DAT_003e2ab8;
      uStack_88 = *(undefined4 *)(iVar12 + 0x38);
      uStack_84 = *(undefined4 *)(iVar12 + 0x3c);
      iVar5 = **(int **)(iVar12 + 0xc);
      iStack_80 = iVar3;
      iStack_7c = iVar13;
      lVar10 = (**(code **)(iVar5 + 0x3c))
                         ((int)*(int **)(iVar12 + 0xc) + (int)*(short *)(iVar5 + 0x38),apuStack_b0);
      apuStack_b0[0] = &DAT_003e0040;
      goto LAB_002d2030;
    }
    piVar4 = *(int **)(iVar12 + 0xc);
  }
  lVar10 = (**(code **)(*piVar4 + 0x34))
                     ((int)piVar4 + (int)*(short *)(*piVar4 + 0x30),iVar12 + 0x34);
LAB_002d2030:
  if (lVar10 != 0) {
    iVar13 = **(int **)(iVar12 + 4);
    (**(code **)(iVar13 + 0x14))
              ((int)*(int **)(iVar12 + 4) + (int)*(short *)(iVar13 + 0x10),
               *(undefined4 *)(*(int *)(iVar12 + 0xc) + 8));
  }
  return lVar10 != 0;
}


// ==== FUN_002d2098 @ 002d2098 ====

/* WARNING: Removing unreachable block (ram,0x002d2270) */
/* WARNING: Removing unreachable block (ram,0x002d230c) */

undefined4 FUN_002d2098(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 *apuStack_70 [4];
  
  iVar4 = (int)param_1;
  iVar6 = *(int *)(*(int *)(iVar4 + 8) + 0x14);
  fStack_90 = *(float *)(iVar6 + 0x30);
  fStack_8c = *(float *)(iVar6 + 0x34);
  fStack_88 = *(float *)(iVar6 + 0x38);
  *(float *)(iVar4 + 0x34) = fStack_90;
  *(float *)(iVar4 + 0x38) = fStack_8c;
  *(float *)(iVar4 + 0x3c) = fStack_88;
  *(undefined4 *)(iVar4 + 0x40) = 0x7fffffff;
  *(undefined4 *)(iVar4 + 0x44) = 0xffffffff;
  if (*(int *)(iVar4 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(iVar4 + 0x5c) != 0) {
    fStack_80 = fStack_90 - *(float *)(iVar4 + 0x4c);
    fStack_7c = fStack_8c - *(float *)(iVar4 + 0x50);
    fStack_78 = fStack_88 - *(float *)(iVar4 + 0x54);
    if (fStack_80 * fStack_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78 <=
        *(float *)(iVar4 + 0x58)) {
      iVar6 = *(int *)(iVar4 + 0x5c);
      goto LAB_002d21ec;
    }
  }
  if (*(int *)(iVar4 + 0x80) == 0) {
    uVar2 = FUN_002fb6d8(*(undefined4 *)(iVar4 + 0x10),&fStack_90,1,0);
    *(undefined4 *)(iVar4 + 0x5c) = uVar2;
  }
  else {
    uVar2 = FUN_002fbc20(*(undefined4 *)(iVar4 + 0x84),&fStack_90,
                         *(undefined4 *)(*(int *)(iVar4 + 8) + 0x14),*(int *)(iVar4 + 0x80),0,0);
    *(undefined4 *)(iVar4 + 0x5c) = uVar2;
  }
  iVar6 = *(int *)(*(int *)(iVar4 + 8) + 0x14);
  *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar6 + 0x34);
  *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar6 + 0x38);
  iVar6 = *(int *)(iVar4 + 0x5c);
LAB_002d21ec:
  if (iVar6 == 0) {
    return 0;
  }
  uVar5 = 0;
  fVar8 = 0.0;
  if (*(int *)(iVar4 + 0x20) != 0) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(iVar4 + 0x5c);
      pfVar3 = (float *)(iVar6 + *(int *)(iVar4 + 0x1c));
      fStack_78 = *(float *)(iVar1 + 0xc) - pfVar3[2];
      fStack_80 = *(float *)(iVar1 + 4) - *pfVar3;
      fStack_7c = *(float *)(iVar1 + 8) - pfVar3[1];
      fVar7 = (float)FUN_00389140(&fStack_80);
      uVar5 = uVar5 + 1;
      fVar8 = fVar8 + SQRT(fVar7);
      iVar6 = iVar6 + 0xc;
    } while (uVar5 < *(uint *)(iVar4 + 0x20));
  }
  uVar5 = 0;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    do {
      iVar6 = *(int *)(iVar4 + 0x5c);
      iVar1 = *(int *)(uVar5 * 4 + *(int *)(iVar4 + 0x28));
      fStack_80 = *(float *)(iVar6 + 4) - *(float *)(iVar1 + 0x30);
      fStack_78 = *(float *)(iVar6 + 0xc) - *(float *)(iVar1 + 0x38);
      fStack_7c = *(float *)(iVar6 + 8) - *(float *)(iVar1 + 0x34);
      fVar7 = (float)FUN_00389140(&fStack_80);
      uVar5 = uVar5 + 1;
      fVar8 = fVar8 + SQRT(fVar7);
    } while (uVar5 < *(uint *)(iVar4 + 0x2c));
  }
  apuStack_70[0] = (undefined4 *)0x0;
  FUN_002d23b0(fVar8,param_1,apuStack_70,*(undefined4 *)(iVar4 + 0x5c),0,
               *(undefined4 *)(iVar4 + 0x74),0);
  if (apuStack_70[0] != (undefined4 *)0x0) {
    *(undefined4 *)(iVar4 + 0x34) = apuStack_70[0][1];
    *(undefined4 *)(iVar4 + 0x38) = apuStack_70[0][2];
    *(undefined4 *)(iVar4 + 0x3c) = apuStack_70[0][3];
    uVar2 = *apuStack_70[0];
    *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x7c);
    *(undefined4 *)(iVar4 + 0x40) = uVar2;
  }
  return 1;
}


// ==== FUN_002d23b0 @ 002d23b0 ====

undefined4
FUN_002d23b0(undefined4 param_1,int *param_2,undefined4 *param_3,int *param_4,long param_5,
            long param_6,undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puStack_100;
  int *piStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 *puStack_c0;
  
  puStack_c0 = param_3;
  uStack_e0 = (**(code **)(*param_2 + 0x54))
                        ((int)param_2 + (int)*(short *)(*param_2 + 0x50),*param_3,param_7);
  if (param_5 == param_6) {
    *puStack_c0 = param_4;
  }
  else {
    puStack_100 = &DAT_003e2a20;
    iStack_f8 = param_2[7];
    iStack_f4 = param_2[8];
    iStack_f0 = param_2[10];
    iStack_ec = param_2[0xb];
    uStack_e8 = (undefined4)param_5;
    uStack_e4 = (undefined4)param_6;
    uStack_d4 = (undefined4)param_7;
    piStack_fc = param_4;
    piStack_dc = param_4;
    uStack_d8 = param_1;
    piStack_d0 = param_2;
    (*(code *)PTR_FUN_003e2a3c)((int)&puStack_100 + (int)DAT_003e2a38,param_4);
    iVar10 = param_4[4];
    if (*(int *)(iVar10 + 0x24) == 0) {
      iVar8 = 0;
      iVar6 = 0;
      uVar7 = 0;
      while (uVar2 = FUN_00391620(iVar10), uVar7 < uVar2) {
        lVar4 = FUN_00383d40(*(int *)(iVar10 + 0x34) + iVar6 * 8);
        if (((lVar4 != -1) &&
            (uVar7 = uVar7 + 1, *(int *)(iVar6 * 4 + *(int *)(iVar10 + 0x38)) == *param_4)) &&
           (bVar1 = iVar8 == 0, iVar8 = iVar8 + 1, bVar1)) {
          piVar5 = (int *)(iVar10 + 0x34);
          iVar10 = param_4[4];
          piVar5 = (int *)(*piVar5 + iVar6 * 8);
          goto LAB_002d257c;
        }
        iVar6 = iVar6 + 1;
      }
      piVar5 = (int *)0x0;
      iVar10 = param_4[4];
    }
    else {
      iVar8 = 0;
      for (iVar6 = *(int *)(*param_4 * 4 + *(int *)(iVar10 + 0x24)); iVar6 != -1;
          iVar6 = *(int *)(iVar6 * 4 + *(int *)(iVar10 + 0x44))) {
        if (iVar8 == 0) {
          piVar5 = (int *)(*(int *)(iVar10 + 0x34) + iVar6 * 8);
          goto LAB_002d257c;
        }
        iVar8 = iVar8 + 1;
      }
      piVar5 = (int *)0x0;
    }
LAB_002d257c:
    iVar10 = *(int *)(iVar10 + 0x44);
    if (iVar10 == 0) {
      iVar10 = 0;
joined_r0x002d2648:
      do {
        if ((piVar5 == (int *)0x0) ||
           (lVar4 = (**(code **)(puStack_100 + 0x2c))
                              ((int)&puStack_100 + (int)*(short *)(puStack_100 + 0x28),piVar5),
           lVar4 == 0)) goto LAB_002d276c;
        iVar6 = param_4[4];
        iVar10 = iVar10 + 1;
        if (*(int *)(iVar6 + 0x24) == 0) {
          iVar9 = 0;
          iVar8 = 0;
          uVar7 = 0;
          while (uVar2 = FUN_00391620(iVar6), uVar7 < uVar2) {
            lVar4 = FUN_00383d40(*(int *)(iVar6 + 0x34) + iVar8 * 8);
            if (((lVar4 != -1) &&
                (uVar7 = uVar7 + 1, *(int *)(iVar8 * 4 + *(int *)(iVar6 + 0x38)) == *param_4)) &&
               (bVar1 = iVar9 == iVar10, iVar9 = iVar9 + 1, bVar1)) {
              piVar5 = (int *)(*(int *)(iVar6 + 0x34) + iVar8 * 8);
              goto joined_r0x002d2648;
            }
            iVar8 = iVar8 + 1;
          }
          piVar5 = (int *)0x0;
        }
        else {
          iVar9 = 0;
          for (iVar8 = *(int *)(*param_4 * 4 + *(int *)(iVar6 + 0x24)); iVar8 != -1;
              iVar8 = *(int *)(iVar8 * 4 + *(int *)(iVar6 + 0x44))) {
            if (iVar9 == iVar10) {
              piVar5 = (int *)(*(int *)(iVar6 + 0x34) + iVar8 * 8);
              goto joined_r0x002d2648;
            }
            iVar9 = iVar9 + 1;
          }
          piVar5 = (int *)0x0;
        }
      } while( true );
    }
    while (piVar5 != (int *)0x0) {
      iVar6 = piVar5[1];
      if (piVar5 == (int *)(iVar6 + 0x5c)) {
        piVar3 = (int *)(iVar6 + 100);
      }
      else {
        piVar3 = (int *)(*(int *)(iVar6 + 0x18) +
                        *(int *)(*piVar5 * 4 + *(int *)(iVar6 + 0x38)) * 0x14);
      }
      if ((piVar3 != param_4) ||
         (lVar4 = (**(code **)(puStack_100 + 0x2c))
                            ((int)&puStack_100 + (int)*(short *)(puStack_100 + 0x28),piVar5),
         lVar4 == 0)) break;
      uVar7 = *(uint *)(*piVar5 * 4 + iVar10);
      if (uVar7 < *(uint *)(param_4[4] + 0x28)) {
        piVar3 = (int *)(uVar7 * 8 + *(int *)(param_4[4] + 0x34));
        piVar5 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar5 = piVar3;
        }
      }
      else {
        piVar5 = (int *)0x0;
      }
    }
LAB_002d276c:
    *puStack_c0 = piStack_dc;
  }
  return uStack_e0;
}


// ==== FUN_002d27d8 @ 002d27d8 ====

/* WARNING: Removing unreachable block (ram,0x002d2854) */
/* WARNING: Removing unreachable block (ram,0x002d2914) */

undefined4 FUN_002d27d8(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  fVar4 = param_3[2] - param_1[2];
  fStack_68 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_1;
  fVar3 = param_3[1] - param_1[1];
  fStack_6c = param_2[1] - param_1[1];
  fStack_70 = *param_2 - *param_1;
  fStack_5c = (float)FUN_00389140(&fStack_70);
  fStack_5c = SQRT(fStack_5c);
  fStack_60 = fStack_70 / fStack_5c;
  fStack_58 = fStack_68 / fStack_5c;
  fStack_5c = fStack_6c / fStack_5c;
  fStack_4c = fStack_58 * fVar2 - fStack_60 * fVar4;
  fStack_50 = fStack_5c * fVar4 - fStack_58 * fVar3;
  fStack_48 = fStack_60 * fVar3 - fStack_5c * fVar2;
  if (0.0001 < fStack_50 * fStack_50 + fStack_4c * fStack_4c + fStack_48 * fStack_48) {
    fStack_40 = fStack_50;
    fStack_3c = fStack_4c;
    fStack_38 = fStack_48;
    fVar5 = (float)FUN_00389140(&fStack_50);
    fVar5 = SQRT(fVar5);
    fVar5 = ABS(((fStack_4c / fVar5) * fStack_58 - (fStack_48 / fVar5) * fStack_5c) * fVar2 +
                ((fStack_48 / fVar5) * fStack_60 - (fStack_50 / fVar5) * fStack_58) * fVar3 +
                ((fStack_50 / fVar5) * fStack_5c - (fStack_4c / fVar5) * fStack_60) * fVar4);
  }
  else {
    fVar5 = 0.0;
  }
  uVar1 = 0;
  fVar2 = fStack_60 * fVar2 + fStack_5c * fVar3 + fStack_58 * fVar4;
  if (((fVar5 < *(float *)(DAT_003c9ed4 + 0xc) + *(float *)(DAT_003c9ed4 + 0xc)) && (0.0 <= fVar2))
     && (fVar2 <= fStack_60 * fStack_70 + fStack_5c * fStack_6c + fStack_58 * fStack_68)) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_002d2a60 @ 002d2a60 ====

/* WARNING: Removing unreachable block (ram,0x002d2bc4) */
/* WARNING: Removing unreachable block (ram,0x002d2c58) */

undefined4 FUN_002d2a60(int param_1,int *param_2)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 auStack_90 [4];
  
  lVar2 = 0;
  iVar5 = param_2[1];
  if (param_2 == (int *)(iVar5 + 0x5c)) {
    iVar5 = iVar5 + 0x78;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar5 + 0x3c)) * 0x14;
  }
  iVar3 = 0;
  iVar4 = 0;
  while ((iVar3 < *(int *)(param_1 + 0xc) &&
         (lVar2 = FUN_002d27d8(*(int *)(param_1 + 4) + 4,iVar5 + 4,*(int *)(param_1 + 8) + iVar4),
         lVar2 == 0))) {
    iVar4 = iVar4 + 0xc;
    iVar3 = iVar3 + 1;
  }
  if (lVar2 == 0) {
    iVar3 = 0;
    do {
      if (*(int *)(param_1 + 0x14) <= iVar3) break;
      lVar2 = FUN_002d27d8(*(int *)(param_1 + 4) + 4,iVar5 + 4,
                           *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x10)) + 0x30);
      iVar3 = iVar3 + 1;
    } while (lVar2 == 0);
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  iVar4 = 0;
  fVar10 = *(float *)(param_1 + 0x28);
  if (lVar2 != 0) {
    iVar3 = iVar3 + 1;
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar6 = 0;
    do {
      pfVar1 = (float *)(iVar6 + *(int *)(param_1 + 8));
      fVar7 = pfVar1[2] - *(float *)(iVar5 + 0xc);
      fVar8 = *pfVar1 - *(float *)(iVar5 + 4);
      fVar9 = pfVar1[1] - *(float *)(iVar5 + 8);
      iVar4 = iVar4 + 1;
      fVar10 = fVar10 + SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
      iVar6 = iVar6 + 0xc;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar6 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x10));
      fVar9 = *(float *)(iVar6 + 0x30) - *(float *)(iVar5 + 4);
      fVar8 = *(float *)(iVar6 + 0x38) - *(float *)(iVar5 + 0xc);
      fVar7 = *(float *)(iVar6 + 0x34) - *(float *)(iVar5 + 8);
      iVar4 = iVar4 + 1;
      fVar10 = fVar10 + SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  auStack_90[0] = 0;
  fVar10 = (float)FUN_002d23b0(fVar10,*(undefined4 *)(param_1 + 0x30),auStack_90,iVar5,
                               *(int *)(param_1 + 0x18) + 1,*(undefined4 *)(param_1 + 0x1c),iVar3);
  if (*(float *)(param_1 + 0x20) < fVar10) {
    *(float *)(param_1 + 0x20) = fVar10;
    *(undefined4 *)(param_1 + 0x24) = auStack_90[0];
  }
  return 1;
}


// ==== CFleeAgent_002d2ce8 @ 002d2ce8 ====

/* Strings referenciadas:
     "CFleeAgent" */

void CFleeAgent_002d2ce8(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044ede0 = &DAT_003e2ae0;
    }
    else {
      FUN_002e00f0(0x44ecd0,0x4040f0,0x2d1610,0,0,0);
    }
  }
  return;
}


// ==== FUN_002d2d48 @ 002d2d48 ====

undefined8 FUN_002d2d48(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002dff10();
  puVar1 = (undefined4 *)param_1;
  puVar1[0x1f] = 0xffffffff;
  *puVar1 = &DAT_003e2a58;
  puVar1[0xc] = 0x14;
  puVar1[0x10] = 0x7fffffff;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[9] = 0x14;
  puVar1[7] = 0;
  puVar1[10] = 0;
  return param_1;
}


// ==== FUN_002d2db8 @ 002d2db8 ====

void FUN_002d2db8(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003e2a58;
  if (puVar1[7] != 0) {
    (*(code *)PTR_FUN_003c87e0)(puVar1[7] + -0x10);
  }
  if (puVar1[10] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  FUN_002dff98(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002d2fb8 @ 002d2fb8 ====

void FUN_002d2fb8(void)

{
  CFleeAgent_002d2ce8(1,0xffff);
  return;
}


// ==== FUN_002d2fd8 @ 002d2fd8 ====

void FUN_002d2fd8(void)

{
  CFleeAgent_002d2ce8(0,0xffff);
  return;
}


// ==== FUN_002d2ff8 @ 002d2ff8 ====

void FUN_002d2ff8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x48,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x48,uVar1);
  }
  FUN_002d3520(auStack_40[0],param_1);
  return;
}


// ==== FUN_002d30a0 @ 002d30a0 ====

/* Strings referenciadas:
     "DistFromEntity"
     "AngleFromEntity"
     "EntityToFollow" */

undefined4 FUN_002d30a0(int param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = FUN_002e3920(param_2);
    lVar4 = stricmp(uVar3,0x4041f8);
    if (lVar4 == 0) {
      lVar4 = FUN_002e3918(param_2);
      if (lVar4 != 0) {
        uVar3 = FUN_0035e730(lVar4);
        iVar1 = DAT_003c9ed4;
        fVar5 = (float)FUN_00291c68(uVar3);
        *(float *)(param_1 + 0x40) = fVar5 * *(float *)(iVar1 + 0xc);
        return 1;
      }
    }
    else {
      lVar4 = stricmp(uVar3,0x404208);
      if (lVar4 == 0) {
        lVar4 = FUN_002e3918(param_2);
        if (lVar4 != 0) {
          uVar3 = FUN_0035e730(lVar4);
          uVar6 = FUN_00291c68(uVar3);
          *(undefined4 *)(param_1 + 0x44) = uVar6;
          return 1;
        }
      }
      else {
        lVar4 = stricmp(uVar3,0x404218);
        if ((lVar4 == 0) && (lVar4 = FUN_002e3918(param_2), lVar4 != 0)) {
          uVar6 = FUN_002eb398(DAT_003c9ed4);
          *(undefined4 *)(param_1 + 0x3c) = uVar6;
          return 1;
        }
      }
    }
    uVar6 = 0;
    if (param_2 != 0) {
      lVar4 = FUN_002e3920(param_2);
      uVar6 = 0;
      if (lVar4 != 0) {
        pcVar2 = (char *)FUN_002e3920(param_2);
        uVar6 = 0;
        if (*pcVar2 == '_') {
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}


// ==== FUN_002d31f0 @ 002d31f0 ====

/* Strings referenciadas:
     "CFollowerAgent::ComputeRealDistance" */

undefined4 FUN_002d31f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  *(undefined1 *)(piVar4 + 0xe) = 0;
  piVar4[5] = DAT_004514f8;
  piVar4[6] = DAT_004514fc;
  piVar4[7] = DAT_00451500;
  uVar2 = FUN_002e91c0();
  iVar1 = FUN_002e93b8(uVar2,0x404228);
  piVar4[0xb] = iVar1;
  iVar1 = DAT_003c9ed4;
  piVar4[0xc] = 0;
  iVar1 = *(int *)(iVar1 + 0xc);
  piVar4[0xf] = 0;
  piVar4[0xd] = iVar1;
  piVar4[0x11] = 0x43340000;
  piVar4[0x10] = iVar1;
  lVar3 = FUN_002e0018(param_1,param_2);
  if (lVar3 != 0) {
    iVar1 = FUN_002e1c58(piVar4[2],0x4512b0);
    piVar4[3] = iVar1;
    iVar1 = FUN_002e4ce0(*(undefined4 *)(piVar4[2] + 0x14),0x450940);
    piVar4[4] = iVar1;
    lVar3 = (**(code **)(*piVar4 + 0x44))((int)piVar4 + (int)*(short *)(*piVar4 + 0x40));
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = (**(code **)(*piVar4 + 0x4c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x48));
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002d3300 @ 002d3300 ====

void FUN_002d3300(int *param_1)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  iVar1 = param_1[0xf];
  bVar2 = false;
  if (((*(float *)(iVar1 + 0x30) == (float)param_1[8]) &&
      (bVar2 = false, *(float *)(iVar1 + 0x34) == (float)param_1[9])) &&
     (bVar2 = false, *(float *)(iVar1 + 0x38) == (float)param_1[10])) {
    bVar2 = true;
  }
  if (bVar2) {
    if ((char)param_1[0xe] != '\0') {
      return;
    }
    fVar3 = (float)param_1[0x10];
  }
  else {
    fVar3 = (float)param_1[0x10];
  }
  iVar1 = param_1[0xf];
  if (fVar3 == 0.0) {
    param_1[5] = *(int *)(iVar1 + 0x30);
    param_1[6] = *(int *)(iVar1 + 0x34);
    param_1[7] = *(int *)(iVar1 + 0x38);
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else {
    fStack_6c = *(float *)(iVar1 + 0x40) + (float)param_1[0x11];
    uStack_68 = *(undefined4 *)(iVar1 + 0x44);
    uStack_70 = 0;
    FUN_002e9e88(&fStack_60,&uStack_70);
    (**(code **)(*param_1 + 0x5c))((int)param_1 + (int)*(short *)(*param_1 + 0x58),&fStack_60);
    fVar4 = (float)param_1[0xd];
    iVar1 = param_1[0xf];
    fVar3 = *(float *)(iVar1 + 0x38);
    fVar5 = *(float *)(iVar1 + 0x34);
    param_1[5] = (int)(*(float *)(iVar1 + 0x30) + fVar4 * fStack_60);
    param_1[6] = (int)(fVar5 + fVar4 * fStack_5c);
    param_1[7] = (int)(fVar3 + fVar4 * fStack_58);
  }
  iVar1 = param_1[0xf];
  param_1[8] = *(int *)(iVar1 + 0x30);
  param_1[9] = *(int *)(iVar1 + 0x34);
  param_1[10] = *(int *)(iVar1 + 0x38);
  return;
}


// ==== CFollowerAgent_002d34c0 @ 002d34c0 ====

/* Strings referenciadas:
     "CFollowerAgent" */

void CFollowerAgent_002d34c0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044eef8 = &DAT_003e2ae0;
    }
    else {
      FUN_002e00f0(0x44ede8,0x404250,0x2d2ff8,0,0,0);
    }
  }
  return;
}


// ==== FUN_002d3520 @ 002d3520 ====

undefined8 FUN_002d3520(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002dff10();
  puVar1 = (undefined4 *)param_1;
  puVar1[0xf] = 0;
  *puVar1 = &DAT_003e3130;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return param_1;
}


// ==== FUN_002d3560 @ 002d3560 ====

void FUN_002d3560(undefined8 param_1,ulong param_2)

{
  *(undefined4 *)param_1 = &DAT_003e3130;
  FUN_002dff98(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002d3610 @ 002d3610 ====

undefined4 FUN_002d3610(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  FUN_002dfbf8(param_1[1]);
  (**(code **)(*param_1 + 0x54))((int)param_1 + (int)*(short *)(*param_1 + 0x50));
  uVar3 = 0;
  if (param_1[0xf] != 0) {
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      lVar4 = (**(code **)(*piVar1 + 0x34))
                        ((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),param_1 + 5);
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        iVar2 = *(int *)param_1[1];
        (**(code **)(iVar2 + 0x14))
                  (param_1[1] + (int)*(short *)(iVar2 + 0x10),*(undefined4 *)(param_1[3] + 8));
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


// ==== FUN_002d36a8 @ 002d36a8 ====

void FUN_002d36a8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(float *)(param_1 + 0x30) < DAT_003c958c) {
    fVar5 = DAT_003c958c;
    uVar1 = FUN_002e91c0();
    lVar2 = FUN_002e8ab8(uVar1,*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        fVar3 = 0.0;
        if (DAT_003c9ed4 != 0) {
          fVar3 = *(float *)(DAT_003c9ed4 + 0xc);
        }
      }
      else {
        fVar3 = *(float *)(*(int *)(param_1 + 0x10) + 4);
      }
      fVar4 = (float)FUN_002e1fd0(*(float *)(param_1 + 0x40) + fVar3 * 0.5,
                                  *(int *)(param_1 + 0x3c) + 0x30,param_2,*(int *)(param_1 + 0x3c),2
                                 );
      fVar4 = fVar4 - fVar3 * 0.5;
      *(float *)(param_1 + 0x34) = fVar4;
      if (fVar4 <= 0.0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      *(undefined1 *)(param_1 + 0x38) = 1;
      FUN_002e9978(uVar1,*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
      *(float *)(param_1 + 0x30) = fVar5 + 0.1;
    }
  }
  return;
}


// ==== FUN_002d3858 @ 002d3858 ====

void FUN_002d3858(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xc);
  (**(code **)(iVar1 + 0x5c))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x58));
  return;
}


// ==== FUN_002d3888 @ 002d3888 ====

void FUN_002d3888(void)

{
  CFollowerAgent_002d34c0(1,0xffff);
  return;
}


// ==== FUN_002d38a8 @ 002d38a8 ====

void FUN_002d38a8(void)

{
  CFollowerAgent_002d34c0(0,0xffff);
  return;
}


// ==== FUN_002d38c8 @ 002d38c8 ====

void FUN_002d38c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x24,uVar1);
  }
  FUN_002d39d0(auStack_40[0],param_1);
  return;
}


// ==== CGotoAgent_002d3970 @ 002d3970 ====

/* Strings referenciadas:
     "CGotoAgent" */

void CGotoAgent_002d3970(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f010 = &DAT_003e2ae0;
    }
    else {
      FUN_002e00f0(0x44ef00,0x4042d0,0x2d38c8,0,0,0);
    }
  }
  return;
}


// ==== FUN_002d39d0 @ 002d39d0 ====

undefined8 FUN_002d39d0(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002dff10();
  puVar1 = (undefined4 *)param_1;
  *(undefined1 *)(puVar1 + 4) = 0;
  *puVar1 = &DAT_003e32d0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  return param_1;
}


// ==== FUN_002d3a10 @ 002d3a10 ====

void FUN_002d3a10(undefined8 param_1,ulong param_2)

{
  *(undefined4 *)param_1 = &DAT_003e32d0;
  FUN_002dff98(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002d3a78 @ 002d3a78 ====

bool FUN_002d3a78(int *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_002e0018();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_002e1c58(param_1[2],0x4512b0);
    param_1[3] = iVar2;
    param_1[6] = DAT_004514f8;
    param_1[7] = DAT_004514fc;
    param_1[8] = DAT_00451500;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    lVar3 = (**(code **)(*param_1 + 0x44))((int)param_1 + (int)*(short *)(*param_1 + 0x40));
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


// ==== FUN_002d3b08 @ 002d3b08 ====

undefined4 FUN_002d3b08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  FUN_002dfbf8(*(undefined4 *)(param_1 + 4));
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar5 = (**(code **)(*piVar1 + 0x34))
                      ((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),param_1 + 0x18);
    if (lVar5 == 0) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      uVar4 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 4);
      (**(code **)(iVar2 + 0x14))
                ((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x10),
                 *(undefined4 *)(*(int *)(param_1 + 0xc) + 8));
      iVar2 = **(int **)(param_1 + 0xc);
      uVar3 = (**(code **)(iVar2 + 0x5c))
                        ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar2 + 0x58));
      *(undefined1 *)(param_1 + 0x10) = uVar3;
      uVar4 = 1;
    }
  }
  return uVar4;
}


// ==== FUN_002d3ba8 @ 002d3ba8 ====

void FUN_002d3ba8(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xc);
  (**(code **)(iVar1 + 100))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x60));
  return;
}


// ==== FUN_002d3c50 @ 002d3c50 ====

void FUN_002d3c50(void)

{
  CGotoAgent_002d3970(1,0xffff);
  return;
}


// ==== FUN_002d3c70 @ 002d3c70 ====

void FUN_002d3c70(void)

{
  CGotoAgent_002d3970(0,0xffff);
  return;
}


// ==== FUN_002d3c90 @ 002d3c90 ====

void FUN_002d3c90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x80,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x80,uVar1);
  }
  FUN_002d5068(auStack_40[0],param_1);
  return;
}


// ==== FUN_002d3d38 @ 002d3d38 ====

/* Strings referenciadas:
     "Graph"
     "ResearchType"
     "FAR_FROM_ENEMY"
     "CLOSE_TO_ME"
     "MaxDeltaHeight"
     "MaxDangerousEntities" */

undefined8 FUN_002d3d38(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  int iVar8;
  float fVar9;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = FUN_002e3920(param_2);
  lVar5 = stricmp(uVar4,0x404350);
  if (lVar5 == 0) {
    lVar5 = FUN_002ec058(DAT_003c9ed4,0x452158);
    if (lVar5 == 0) {
      return 0;
    }
    lVar6 = FUN_002e3918(param_2);
    if (lVar6 != 0) {
      lVar5 = FUN_002f2f58(lVar5,lVar6);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_002d4148(param_1,lVar5);
      return uVar4;
    }
  }
  else {
    lVar5 = stricmp(uVar4,0x404358);
    iVar8 = (int)param_1;
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 != 0) {
        lVar6 = stricmp(lVar5,0x404368);
        if (lVar6 == 0) {
          uVar7 = 1;
        }
        else {
          lVar5 = stricmp(lVar5,0x404378);
          uVar7 = 2;
          if (lVar5 != 0) goto LAB_002d3ec0;
        }
        *(undefined1 *)(iVar8 + 0x3c) = uVar7;
        return 1;
      }
    }
    else {
      lVar5 = stricmp(uVar4,0x404388);
      if (lVar5 == 0) {
        lVar5 = FUN_002e3918(param_2);
        if (lVar5 != 0) {
          uVar4 = FUN_0035e730(lVar5);
          iVar1 = DAT_003c9ed4;
          fVar9 = (float)FUN_00291c68(uVar4);
          *(float *)(iVar8 + 0x78) = fVar9 * *(float *)(iVar1 + 0xc);
          return 1;
        }
      }
      else {
        lVar5 = stricmp(uVar4,0x404398);
        if ((lVar5 == 0) && (lVar5 = FUN_002e3918(param_2), lVar5 != 0)) {
          uVar2 = FUN_0035e750(lVar5);
          *(undefined4 *)(iVar8 + 0x4c) = uVar2;
          return 1;
        }
      }
    }
  }
LAB_002d3ec0:
  uVar4 = 0;
  if (param_2 != 0) {
    lVar5 = FUN_002e3920(param_2);
    uVar4 = 0;
    if (lVar5 != 0) {
      pcVar3 = (char *)FUN_002e3920(param_2);
      uVar4 = 0;
      if (*pcVar3 == '_') {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


// ==== FUN_002d3f10 @ 002d3f10 ====

/* Strings referenciadas:
     "CHideAgent::ComputeDestination"
     "CHideAgent::CheckPositionVisible" */

undefined4 FUN_002d3f10(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int iStack_60;
  int iStack_5c;
  
  piVar7 = (int *)param_1;
  piVar7[5] = DAT_004514f8;
  iVar2 = DAT_004043f8;
  iVar4 = DAT_004043f4;
  piVar7[6] = DAT_004514fc;
  piVar7[7] = DAT_00451500;
  *(undefined1 *)((int)piVar7 + 0x55) = 1;
  *(undefined1 *)((int)piVar7 + 0x35) = 0;
  *(undefined1 *)(piVar7 + 0xd) = 0;
  *(undefined1 *)(piVar7 + 0x15) = 0;
  *(undefined1 *)(piVar7 + 0x1a) = 0;
  piVar7[0x16] = -1;
  iVar3 = DAT_003c9ed4;
  piVar7[0x18] = iVar4;
  piVar7[0x19] = iVar2;
  piVar7[0x12] = 0;
  piVar7[0x17] = 0;
  piVar7[0x1e] = *(int *)(iVar3 + 0xc);
  uVar5 = FUN_002e91c0();
  iVar3 = FUN_002e93b8(uVar5,0x4043b0);
  piVar7[0xb] = 0;
  piVar7[10] = iVar3;
  iVar3 = FUN_002e93b8(uVar5,0x4043d0);
  piVar7[0x14] = 0;
  piVar7[0xc] = iVar3;
  *(undefined1 *)(piVar7 + 0xf) = 2;
  lVar6 = FUN_002e0018(param_1,param_2);
  if (lVar6 != 0) {
    iVar3 = FUN_002e1c58(piVar7[2],0x4512b0);
    piVar7[4] = iVar3;
    iVar4 = FUN_002e1c58(piVar7[2],0x455e18);
    iVar3 = DAT_003c9ed4;
    piVar7[3] = iVar4;
    iVar3 = FUN_002ec058(iVar3,0x450fd8);
    piVar7[0x1b] = iVar3;
    iVar3 = FUN_002e4ce0(*(undefined4 *)(piVar7[2] + 0x14),0x44fd38);
    piVar7[0xe] = iVar3;
    lVar6 = (**(code **)(*piVar7 + 0x44))((int)piVar7 + (int)*(short *)(*piVar7 + 0x40));
    if (lVar6 == 0) {
      return 0;
    }
    lVar6 = (**(code **)(*piVar7 + 0x4c))((int)piVar7 + (int)*(short *)(*piVar7 + 0x48));
    if (lVar6 != 0) {
      if (piVar7[0x13] != 0) {
        iStack_60 = 0;
        iVar3 = piVar7[0x13] << 2;
        uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3,
                           &iStack_60);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(iStack_60,iVar3,uVar5);
        }
        piVar1 = DAT_003c87e8;
        piVar7[0x10] = iStack_60;
        iVar3 = piVar7[0x13];
        iVar4 = *piVar1;
        iStack_5c = 0;
        uVar5 = (**(code **)(iVar4 + 0x34))
                          ((int)piVar1 + (int)*(short *)(iVar4 + 0x30),iVar3 << 2,
                           (uint)&iStack_60 | 4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(iStack_5c,iVar3 << 2,uVar5);
        }
        piVar7[0x11] = iStack_5c;
      }
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002d4148 @ 002d4148 ====

undefined4 FUN_002d4148(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  uVar1 = DAT_003c9ed4;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  lVar2 = FUN_002ec058(uVar1,0x452158);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = FUN_002ec058(DAT_003c9ed4,0x450fd8);
    iVar6 = (int)lVar2;
    uVar5 = 0;
    if (*(int *)(iVar6 + 8) != 0) {
      iVar4 = *(int *)(iVar6 + 4);
      while (iVar4 = *(int *)(uVar5 * 4 + iVar4), *(int *)(iVar4 + 0x84) != *(int *)(param_1 + 0x50)
            ) {
        uVar5 = uVar5 + 1;
        if (*(uint *)(iVar6 + 8) <= uVar5) goto LAB_002d4294;
        iVar4 = *(int *)(iVar6 + 4);
      }
      uVar5 = 0;
      if (*(int *)(iVar4 + 0x10c) != 0) {
        piVar7 = (int *)(iVar4 + 0x8c);
        piVar8 = piVar7;
        do {
          iVar6 = *(int *)*piVar8;
          lVar2 = (**(code **)(iVar6 + 0x1c))(*piVar8 + (int)*(short *)(iVar6 + 0x18));
          uVar5 = uVar5 + 1;
          if (lVar2 == 0x451658) {
            *(int *)(param_1 + 0x7c) = *piVar7;
            break;
          }
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar5 < *(uint *)(iVar4 + 0x10c));
      }
      if (lVar3 != 0) {
        iVar6 = *(int *)lVar3;
        lVar2 = (**(code **)(iVar6 + 0x3c))
                          ((int)(int *)lVar3 + (int)*(short *)(iVar6 + 0x38),iVar4 + 4,
                           param_1 + 0x70);
        if (lVar2 != 0) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
      }
    }
LAB_002d4294:
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_002d42c8 @ 002d42c8 ====

undefined4 FUN_002d42c8(undefined8 param_1)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  undefined *apuStack_a0 [9];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uVar6;
  
  uVar9 = 0;
  iVar10 = (int)param_1;
  FUN_002dfbf8(*(undefined4 *)(iVar10 + 4));
  *(undefined1 *)(iVar10 + 0x35) = 1;
  do {
    if (*(uint *)(iVar10 + 0x48) <= uVar9) {
LAB_002d4334:
      fVar2 = DAT_003c958c;
      if (*(float *)(iVar10 + 0x2c) < DAT_003c958c) {
        uVar7 = FUN_002e91c0();
        lVar8 = FUN_002e8ab8(uVar7,*(undefined4 *)(iVar10 + 0x28),
                             *(undefined4 *)(*(int *)(iVar10 + 8) + 0x14));
        if (lVar8 == 0) {
          cVar3 = *(char *)(iVar10 + 0x55);
        }
        else {
          uVar4 = FUN_002d4520(param_1);
          *(undefined1 *)(iVar10 + 0x54) = uVar4;
          FUN_002e9978(uVar7,*(undefined4 *)(iVar10 + 0x28),
                       *(undefined4 *)(*(int *)(iVar10 + 8) + 0x14));
          *(float *)(iVar10 + 0x2c) = fVar2 + 0.1;
          cVar3 = *(char *)(iVar10 + 0x55);
        }
      }
      else {
        cVar3 = *(char *)(iVar10 + 0x55);
      }
      uVar6 = 1;
      if (cVar3 != '\0') {
        if (*(char *)(iVar10 + 0x54) == '\0') {
          uVar6 = 0;
          iVar5 = *(int *)(*(int *)(iVar10 + 8) + 0x14);
          *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar5 + 0x30);
          *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar5 + 0x34);
          *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar5 + 0x38);
        }
        else {
          if (*(int *)(iVar10 + 0x70) == -1) {
            iVar5 = **(int **)(iVar10 + 0x10);
            lVar8 = (**(code **)(iVar5 + 0x34))
                              ((int)*(int **)(iVar10 + 0x10) + (int)*(short *)(iVar5 + 0x30),
                               iVar10 + 0x14);
          }
          else {
            uVar6 = *(undefined4 *)(iVar10 + 0x24);
            uVar1 = *(undefined4 *)(iVar10 + 0x20);
            FUN_002e7360(apuStack_a0);
            uStack_7c = *(undefined4 *)(iVar10 + 0x14);
            apuStack_a0[0] = &DAT_003e2ab8;
            uStack_78 = *(undefined4 *)(iVar10 + 0x18);
            uStack_74 = *(undefined4 *)(iVar10 + 0x1c);
            iVar5 = **(int **)(iVar10 + 0x10);
            uStack_70 = uVar6;
            uStack_6c = uVar1;
            lVar8 = (**(code **)(iVar5 + 0x3c))
                              ((int)*(int **)(iVar10 + 0x10) + (int)*(short *)(iVar5 + 0x38),
                               apuStack_a0);
            apuStack_a0[0] = &DAT_003e0040;
          }
          if (lVar8 == 0) {
            uVar6 = 0;
          }
          else {
            iVar5 = **(int **)(iVar10 + 4);
            (**(code **)(iVar5 + 0x14))
                      ((int)*(int **)(iVar10 + 4) + (int)*(short *)(iVar5 + 0x10),
                       *(undefined4 *)(*(int *)(iVar10 + 0x10) + 8));
            iVar5 = **(int **)(iVar10 + 0x10);
            uVar4 = (**(code **)(iVar5 + 0x5c))
                              ((int)*(int **)(iVar10 + 0x10) + (int)*(short *)(iVar5 + 0x58));
            *(undefined1 *)(iVar10 + 0x34) = uVar4;
            uVar6 = 1;
          }
        }
      }
      return uVar6;
    }
    iVar5 = FUN_00310120(*(undefined4 *)(iVar10 + 0xc),
                         *(undefined4 *)(uVar9 * 4 + *(int *)(iVar10 + 0x40)));
    if (*(char *)(iVar5 + 0x11) == '\0') {
      *(undefined1 *)(iVar10 + 0x35) = 0;
      goto LAB_002d4334;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}


// ==== FUN_002d4520 @ 002d4520 ====

undefined1 FUN_002d4520(undefined8 param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  bVar1 = true;
  iVar5 = (int)param_1;
  iVar6 = *(int *)(iVar5 + 0x38);
  fStack_a0 = DAT_004514f8;
  fStack_9c = DAT_004514fc;
  fStack_98 = DAT_00451500;
  if (iVar6 != 0) {
    fStack_90 = *(float *)(iVar6 + 4);
    fStack_8c = *(float *)(iVar6 + 8);
    fStack_88 = *(float *)(iVar6 + 0xc);
    fStack_9c = fStack_8c - *(float *)(*(int *)(*(int *)(iVar5 + 8) + 0x14) + 0x34);
  }
  if (*(short *)(iVar5 + 0x54) == 0x101) {
    uVar7 = 0;
    fStack_8c = DAT_004514fc;
    fStack_90 = DAT_004514f8;
    fStack_88 = DAT_00451500;
    fStack_80 = *(float *)(iVar5 + 0x14) + DAT_004514f8;
    fStack_7c = *(float *)(iVar5 + 0x18) + fStack_9c;
    fStack_78 = *(float *)(iVar5 + 0x1c) + DAT_00451500;
    if (*(int *)(iVar5 + 0x48) != 0) {
      iVar6 = 0;
      do {
        lVar4 = FUN_002e4ce0(*(undefined4 *)(iVar6 + *(int *)(iVar5 + 0x40)),0x44fd38);
        if (lVar4 == 0) {
          iVar3 = *(int *)(iVar6 + *(int *)(iVar5 + 0x40));
          fStack_90 = *(float *)(iVar3 + 0x30);
          fStack_8c = *(float *)(iVar3 + 0x34);
          fStack_88 = *(float *)(iVar3 + 0x38);
        }
        else {
          iVar3 = (int)lVar4;
          fStack_90 = *(float *)(iVar3 + 4);
          fStack_8c = *(float *)(iVar3 + 8);
          fStack_88 = *(float *)(iVar3 + 0xc);
          fStack_70 = fStack_90;
          fStack_6c = fStack_8c;
          fStack_68 = fStack_88;
        }
        lVar4 = FUN_002e27d0(&fStack_90,&fStack_80,*(undefined4 *)(iVar6 + *(int *)(iVar5 + 0x40)),1
                            );
        uVar7 = uVar7 + 1;
        if (lVar4 != 0) {
          bVar1 = false;
          break;
        }
        iVar6 = iVar6 + 4;
      } while (uVar7 < *(uint *)(iVar5 + 0x48));
    }
  }
  if (bVar1) {
    if (*(char *)(iVar5 + 0x54) == '\0') {
      iVar6 = *(int *)(iVar5 + 0x50);
    }
    else if (*(int *)(iVar5 + 0x48) == 0) {
      iVar6 = *(int *)(iVar5 + 0x50);
    }
    else {
      if (*(char *)(iVar5 + 0x55) != '\0') {
        return *(undefined1 *)(iVar5 + 0x54);
      }
      iVar6 = *(int *)(iVar5 + 0x50);
    }
  }
  else {
    iVar6 = *(int *)(iVar5 + 0x50);
  }
  if (iVar6 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_002d4720(param_1,&fStack_a0);
    uVar2 = *(undefined1 *)(iVar5 + 0x54);
  }
  return uVar2;
}


// ==== FUN_002d4720 @ 002d4720 ====

void FUN_002d4720(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char acStack_80 [16];
  
  piVar5 = (int *)param_1;
  if ((piVar5[0x16] == -1) && (piVar5[0x1c] != -1)) {
    if ((char)piVar5[0xf] != '\x01') {
      if ((char)piVar5[0xf] == '\x02') {
        if (piVar5[0x1f] == 0) {
          iVar6 = FUN_002fb9d0(piVar5[0x1e],piVar5[0x14],*(int *)(piVar5[2] + 0x14) + 0x30,
                               *(int *)(piVar5[2] + 0x14),0,0);
          piVar5[0x1d] = iVar6;
        }
        else {
          iVar6 = FUN_002fbc20(piVar5[0x1e],*(int *)(piVar5[2] + 0x14) + 0x30,
                               *(int *)(piVar5[2] + 0x14),piVar5[0x1f],0,0);
          piVar5[0x1d] = iVar6;
        }
        if (piVar5[0x1d] == 0) {
LAB_002d4888:
          *(undefined1 *)(piVar5 + 0x15) = 0;
          *(undefined1 *)((int)piVar5 + 0x55) = 1;
          *(undefined1 *)(piVar5 + 0x1a) = 0;
          return;
        }
        iVar6 = piVar5[0x14];
      }
      else {
        iVar6 = piVar5[0x14];
      }
      goto LAB_002d48b0;
    }
    uVar7 = 0;
    if (piVar5[0x12] != 0) {
      iVar6 = 0;
      do {
        if (piVar5[0x1f] == 0) {
          uVar1 = FUN_002fb9d0(piVar5[0x1e],piVar5[0x14],*(int *)(iVar6 + piVar5[0x10]) + 0x30,
                               *(undefined4 *)(piVar5[2] + 0x14),0,0);
          iVar8 = piVar5[0x11];
        }
        else {
          uVar1 = FUN_002fbc20(piVar5[0x1e],*(int *)(iVar6 + piVar5[0x10]) + 0x30,
                               *(undefined4 *)(piVar5[2] + 0x14),piVar5[0x1f],0,0);
          iVar8 = piVar5[0x11];
        }
        *(undefined4 *)(iVar6 + iVar8) = uVar1;
        uVar7 = uVar7 + 1;
        if (*(int *)(iVar6 + piVar5[0x11]) == 0) goto LAB_002d4888;
        iVar6 = iVar6 + 4;
      } while (uVar7 < (uint)piVar5[0x12]);
      iVar6 = piVar5[0x14];
      goto LAB_002d48b0;
    }
  }
  iVar6 = piVar5[0x14];
LAB_002d48b0:
  uVar7 = piVar5[0x16] + 1;
  if (uVar7 < *(uint *)(iVar6 + 0x14)) {
    iVar8 = uVar7 * 0x14;
    do {
      if (uVar7 < *(uint *)(iVar6 + 0xc)) {
        piVar3 = (int *)(iVar8 + *(int *)(iVar6 + 0x18));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        lVar2 = FUN_002d5248(param_1,piVar4,param_2,acStack_80);
        if (lVar2 == 0) {
          *(undefined1 *)((int)piVar5 + 0x55) = 0;
          piVar5[0x16] = uVar7 - 1;
          return;
        }
        if (acStack_80[0] == '\x01') break;
      }
      iVar6 = piVar5[0x14];
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x14;
    } while (uVar7 < *(uint *)(iVar6 + 0x14));
  }
  iVar6 = DAT_004043fc;
  *(undefined1 *)((int)piVar5 + 0x55) = 1;
  piVar5[0x16] = -1;
  piVar5[0x19] = iVar6;
  *(undefined1 *)(piVar5 + 0x1a) = 0;
  (**(code **)(*piVar5 + 0x5c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x58));
  return;
}


// ==== FUN_002d49a8 @ 002d49a8 ====

undefined4 FUN_002d49a8(int param_1,int param_2,float *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  uStack_a8 = DAT_00451500;
  uStack_ac = DAT_004514fc;
  uStack_b0 = DAT_004514f8;
  fStack_a0 = *(float *)(param_2 + 4) + *param_3;
  fStack_98 = *(float *)(param_2 + 0xc) + param_3[2];
  fStack_9c = *(float *)(param_2 + 8) + param_3[1];
  *param_4 = 0;
  uVar3 = FUN_002e91c0();
  lVar4 = FUN_002e8ab8(uVar3,*(undefined4 *)(param_1 + 0x30),
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
  uVar6 = 0;
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      iVar5 = 0;
      do {
        lVar4 = FUN_002e4ce0(*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x40)),0x44fd38);
        if (lVar4 == 0) {
          iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x40));
          uStack_b0 = *(undefined4 *)(iVar1 + 0x30);
          uStack_ac = *(undefined4 *)(iVar1 + 0x34);
          uStack_a8 = *(undefined4 *)(iVar1 + 0x38);
        }
        else {
          iVar1 = (int)lVar4;
          uStack_b0 = *(undefined4 *)(iVar1 + 4);
          uStack_ac = *(undefined4 *)(iVar1 + 8);
          uStack_a8 = *(undefined4 *)(iVar1 + 0xc);
          uStack_90 = uStack_b0;
          uStack_8c = uStack_ac;
          uStack_88 = uStack_a8;
        }
        lVar4 = FUN_002e27d0(&uStack_b0,&fStack_a0,*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x40))
                             ,1);
        uVar6 = uVar6 + 1;
      } while ((lVar4 == 0) && (iVar5 = iVar5 + 4, uVar6 < *(uint *)(param_1 + 0x48)));
    }
    FUN_002e9978(uVar3,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(*(int *)(param_1 + 8) + 0x14)
                );
    uVar2 = 1;
    if (lVar4 == 0) {
      *param_4 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_002d4b68 @ 002d4b68 ====

/* WARNING: Removing unreachable block (ram,0x002d4d80) */

undefined4
FUN_002d4b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
            undefined1 *param_5,char *param_6)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  float fVar7;
  undefined *puStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  undefined *apuStack_140 [9];
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char acStack_100 [16];
  undefined *puStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float *pfStack_a8;
  
  uVar6 = 0;
  *param_5 = 0;
  *param_6 = '\x01';
  iVar4 = (int)param_1;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  puVar5 = (undefined4 *)param_2;
  pfStack_a8 = param_4;
  if (*(char *)(iVar4 + 0x3c) != '\x01') {
    if (*(char *)(iVar4 + 0x3c) != '\x02') {
      return 0;
    }
    iVar1 = *(int *)(iVar4 + 0x70);
    if (iVar1 == -1) {
      iVar1 = *(int *)(*(int *)(iVar4 + 8) + 0x14);
      puStack_f0 = (undefined *)(*(float *)(iVar1 + 0x30) - (float)puVar5[1]);
      fStack_ec = *(float *)(iVar1 + 0x34) - (float)puVar5[2];
      fStack_e8 = *(float *)(iVar1 + 0x38) - (float)puVar5[3];
      fStack_ac = (float)puStack_f0 * (float)puStack_f0 + fStack_ec * fStack_ec +
                  fStack_e8 * fStack_e8;
    }
    else {
      FUN_002e7360(&puStack_180);
      uStack_15c = puVar5[1];
      uStack_154 = puVar5[3];
      uStack_158 = puVar5[2];
      puStack_180 = &DAT_003e2ab8;
      uStack_150 = *puVar5;
      puVar5 = *(undefined4 **)(iVar4 + 0x74);
      uVar2 = *(undefined4 *)(iVar4 + 0x70);
      iStack_14c = iVar1;
      FUN_002e7360(&puStack_f0);
      puStack_f0 = &DAT_003e2ab8;
      uStack_cc = puVar5[1];
      uStack_c8 = puVar5[2];
      uStack_c4 = puVar5[3];
      uStack_c0 = *puVar5;
      iVar1 = **(int **)(iVar4 + 0x10);
      uStack_bc = uVar2;
      (**(code **)(iVar1 + 0x44))
                ((int)*(int **)(iVar4 + 0x10) + (int)*(short *)(iVar1 + 0x40),&fStack_ac,
                 &puStack_180,&puStack_f0);
      puStack_f0 = &DAT_003e0040;
      puStack_180 = &DAT_003e0040;
    }
    if (*(float *)(iVar4 + 0x60) <= fStack_ac) {
      return 0;
    }
    cVar3 = FUN_002d49a8(param_1,param_2,param_3,acStack_100);
    *param_6 = cVar3;
    if (cVar3 == '\0') {
      return 0;
    }
    if (acStack_100[0] == '\0') {
      return 0;
    }
    *(float *)(iVar4 + 0x60) = fStack_ac;
    fStack_ac = 1.0 / fStack_ac;
    goto LAB_002d4f84;
  }
  iVar1 = *(int *)(iVar4 + 0x70);
  if (iVar1 == -1) {
    if (*(int *)(iVar4 + 0x48) != 0) {
      do {
        iVar1 = *(int *)(uVar6 * 4 + *(int *)(iVar4 + 0x40));
        puStack_180 = (undefined *)(*(float *)(iVar1 + 0x30) - (float)puVar5[1]);
        fStack_178 = *(float *)(iVar1 + 0x38) - (float)puVar5[3];
        fStack_17c = *(float *)(iVar1 + 0x34) - (float)puVar5[2];
        fVar7 = (float)FUN_00389140(&puStack_180);
        uVar6 = uVar6 + 1;
        fStack_ac = fStack_ac + SQRT(fVar7);
      } while (uVar6 < *(uint *)(iVar4 + 0x48));
      goto LAB_002d4da8;
    }
    fVar7 = *(float *)(iVar4 + 0x5c);
  }
  else {
    FUN_002e7360(&puStack_180);
    uStack_15c = puVar5[1];
    uStack_154 = puVar5[3];
    uStack_158 = puVar5[2];
    puStack_180 = &DAT_003e2ab8;
    uStack_150 = *puVar5;
    iStack_14c = iVar1;
    if (*(int *)(iVar4 + 0x48) != 0) {
      do {
        uVar2 = *(undefined4 *)(iVar4 + 0x70);
        puVar5 = *(undefined4 **)(uVar6 * 4 + *(int *)(iVar4 + 0x44));
        FUN_002e7360(apuStack_140);
        apuStack_140[0] = &DAT_003e2ab8;
        uStack_11c = puVar5[1];
        uStack_118 = puVar5[2];
        uStack_114 = puVar5[3];
        uStack_110 = *puVar5;
        iVar1 = **(int **)(iVar4 + 0x10);
        uStack_10c = uVar2;
        (**(code **)(iVar1 + 0x44))
                  ((int)*(int **)(iVar4 + 0x10) + (int)*(short *)(iVar1 + 0x40),&fStack_b0,
                   &puStack_180,apuStack_140);
        fStack_ac = fStack_ac + fStack_b0;
        uVar6 = uVar6 + 1;
        apuStack_140[0] = &DAT_003e0040;
      } while (uVar6 < *(uint *)(iVar4 + 0x48));
    }
    puStack_180 = &DAT_003e0040;
LAB_002d4da8:
    fVar7 = *(float *)(iVar4 + 0x5c);
  }
  if (fVar7 < fStack_ac) {
    cVar3 = FUN_002d49a8(param_1,param_2,param_3,acStack_100);
    *param_6 = cVar3;
    if ((cVar3 != '\0') && (acStack_100[0] != '\0')) {
      *(float *)(iVar4 + 0x5c) = fStack_ac;
LAB_002d4f84:
      *pfStack_a8 = fStack_ac;
      return 1;
    }
  }
  return 0;
}


// ==== CHideAgent_002d5008 @ 002d5008 ====

/* Strings referenciadas:
     "CHideAgent" */

void CHideAgent_002d5008(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f128 = &DAT_003e2ae0;
    }
    else {
      FUN_002e00f0(0x44f018,0x404400,0x2d3c90,0,0,0);
    }
  }
  return;
}


// ==== FUN_002d5068 @ 002d5068 ====

undefined8 FUN_002d5068(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002dff10();
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003e3428;
  puVar1[8] = 0xffffffff;
  puVar1[9] = 0x7fffffff;
  puVar1[0x13] = 0x14;
  puVar1[0x1c] = 0xffffffff;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1d] = 0;
  return param_1;
}


// ==== FUN_002d50e8 @ 002d50e8 ====

void FUN_002d50e8(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003e3428;
  if (puVar1[0x10] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[0x11] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  FUN_002dff98(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002d5248 @ 002d5248 ====

undefined4 FUN_002d5248(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char acStack_40 [4];
  float fStack_3c;
  
  piVar2 = (int *)param_2;
  if (*piVar2 != param_1[9]) {
    *(undefined1 *)param_4 = 0;
    acStack_40[0] = '\x01';
    lVar1 = (**(code **)(*param_1 + 0x54))
                      ((int)param_1 + (int)*(short *)(*param_1 + 0x50),param_2,param_3,
                       (uint)acStack_40 | 4,param_4,acStack_40);
    if (acStack_40[0] == '\0') {
      return 0;
    }
    if (lVar1 != 0) {
      if (fStack_3c <= (float)param_1[0x19]) {
        if ((char)param_1[0x1a] != '\0') {
          return 1;
        }
        iVar3 = piVar2[1];
      }
      else {
        iVar3 = piVar2[1];
      }
      param_1[5] = iVar3;
      param_1[6] = piVar2[2];
      param_1[7] = piVar2[3];
      iVar3 = *piVar2;
      *(undefined1 *)(param_1 + 0x1a) = 1;
      param_1[9] = iVar3;
      param_1[8] = param_1[0x1c];
      *(undefined1 *)(param_1 + 0x15) = 1;
    }
  }
  return 1;
}


// ==== FUN_002d53b0 @ 002d53b0 ====

void FUN_002d53b0(void)

{
  CHideAgent_002d5008(1,0xffff);
  return;
}


// ==== FUN_002d53d0 @ 002d53d0 ====

void FUN_002d53d0(void)

{
  CHideAgent_002d5008(0,0xffff);
  return;
}


// ==== FUN_002d53f0 @ 002d53f0 ====

void FUN_002d53f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x58,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x58,uVar1);
  }
  FUN_002d6218(auStack_40[0],param_1);
  return;
}


// ==== FUN_002d5498 @ 002d5498 ====

undefined4 FUN_002d5498(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  *(undefined1 *)((int)piVar4 + 0x43) = 0;
  piVar4[0x11] = 0;
  *(undefined1 *)(piVar4 + 0x12) = 0;
  piVar4[0x13] = 0;
  *(undefined1 *)(piVar4 + 0x14) = 0;
  piVar4[0x15] = 0;
  *(undefined1 *)((int)piVar4 + 0x42) = 0;
  if (param_2 != 0) {
    iVar2 = FUN_002e1c58(piVar4[2],0x4512b0);
    uVar1 = DAT_003c9ed4;
    piVar4[3] = iVar2;
    iVar2 = FUN_002ec058(uVar1,0x450eb8);
    piVar4[4] = iVar2;
    lVar3 = (**(code **)(*piVar4 + 0x44))((int)piVar4 + (int)*(short *)(*piVar4 + 0x40));
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = (**(code **)(*piVar4 + 0x4c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x48));
    if (lVar3 != 0) {
      lVar3 = FUN_002e0018(param_1,param_2);
      if (lVar3 == 0) {
        return 0;
      }
      FUN_002d6480(param_1);
      iVar2 = FUN_002dfe08(*(undefined4 *)(piVar4[3] + 8),0x44f9f0);
      piVar4[0xc] = iVar2;
      iVar2 = FUN_002dfe08(*(undefined4 *)(piVar4[3] + 8),0x44f478);
      piVar4[0xd] = iVar2;
      iVar2 = FUN_002dfe08(piVar4[1],0x44f9f0);
      piVar4[6] = iVar2;
      iVar2 = FUN_002dfe08(piVar4[1],0x44f478);
      piVar4[7] = iVar2;
      iVar2 = FUN_002dfe08(piVar4[1],0x44f7c0);
      piVar4[10] = iVar2;
      iVar2 = FUN_002dfe08(piVar4[1],0x44fb08);
      piVar4[0xb] = iVar2;
      iVar2 = FUN_002dfe08(piVar4[1],0x44f590);
      piVar4[8] = iVar2;
      iVar2 = FUN_002dfe08(piVar4[1],0x44f6a8);
      piVar4[9] = iVar2;
      lVar3 = (**(code **)(*piVar4 + 0x54))((int)piVar4 + (int)*(short *)(*piVar4 + 0x50));
      if (lVar3 != 0) {
        iVar2 = FUN_002e4ce0(*(undefined4 *)(piVar4[2] + 0x14),0x4504e0);
        piVar4[5] = iVar2;
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_002d5650 @ 002d5650 ====

/* Strings referenciadas:
     "crouch" */

undefined4 FUN_002d5650(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  FUN_002dfbf8(param_1[1]);
  uVar2 = 1;
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    uVar2 = 0;
    if (param_1[0xf] != -1) {
      if ((char)param_1[0x10] == '\0') {
        piVar1 = (int *)param_1[3];
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        iVar4 = param_1[0xf] * 0x58 + *(int *)(param_1[0xe] + 4);
        uStack_50 = *(undefined4 *)(iVar4 + 4);
        uStack_4c = *(undefined4 *)(iVar4 + 8);
        uStack_48 = *(undefined4 *)(iVar4 + 0xc);
        lVar5 = (**(code **)(*piVar1 + 0x34))
                          ((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),&uStack_50);
        if (lVar5 == 0) {
          return 0;
        }
        iVar4 = *(int *)param_1[1];
        (**(code **)(iVar4 + 0x14))
                  (param_1[1] + (int)*(short *)(iVar4 + 0x10),*(undefined4 *)(param_1[3] + 8));
        iVar4 = *(int *)param_1[3];
        lVar5 = (**(code **)(iVar4 + 0x5c))(param_1[3] + (int)*(short *)(iVar4 + 0x58));
        if (lVar5 == 0) {
          fVar7 = *(float *)(DAT_003c9ed4 + 0xc) * 6.0;
          if (param_1[5] != 0) {
            fVar7 = *(float *)(param_1[5] + 4);
          }
          lVar5 = strcmp(*(int *)(param_1[0xe] + 4) + param_1[0xf] * 0x58 + 0x10,0x4044f0);
          if (lVar5 == 0) {
            fVar7 = fVar7 * 0.25;
          }
          strcmp(*(int *)(param_1[0xe] + 4) + param_1[0xf] * 0x58 + 0x10,0x4044f8);
          lVar5 = strcmp(*(int *)(param_1[0xe] + 4) + param_1[0xf] * 0x58 + 0x10,0x404500);
          if (lVar5 == 0) {
            iVar4 = param_1[8];
            if (iVar4 != 0) {
              *(undefined1 *)(iVar4 + 4) = 1;
              *(undefined1 *)(iVar4 + 8) = 1;
            }
            iVar4 = param_1[0xf];
          }
          else {
            iVar4 = param_1[0xf];
          }
          lVar5 = strcmp(*(int *)(param_1[0xe] + 4) + iVar4 * 0x58 + 0x10,0x404508);
          if (lVar5 == 0) {
            iVar4 = param_1[9];
            if (iVar4 != 0) {
              *(undefined1 *)(iVar4 + 4) = 1;
              *(undefined1 *)(iVar4 + 8) = 1;
            }
            iVar4 = param_1[6];
          }
          else {
            iVar4 = param_1[6];
          }
          if (iVar4 == 0) {
            iVar4 = param_1[7];
          }
          else {
            if ((param_1[0xc] != 0) && (fVar6 = *(float *)(param_1[0xc] + 8), fVar6 < fVar7)) {
              fVar7 = fVar6;
            }
            *(float *)(iVar4 + 8) = fVar7;
            *(undefined1 *)(iVar4 + 4) = 1;
            iVar4 = param_1[7];
          }
          if (iVar4 == 0) {
            return 1;
          }
          fVar6 = *(float *)(*(int *)(param_1[2] + 0x14) + 0x54);
          if (fVar7 * 1.05 < fVar6) {
            *(undefined1 *)(iVar4 + 4) = 1;
            *(undefined4 *)(iVar4 + 8) = 0xbf800000;
          }
          else {
            if (fVar6 < fVar7 * 0.95) {
              if (param_1[0xd] == 0) {
                return 1;
              }
              fVar7 = *(float *)(param_1[0xd] + 8);
              if (fVar7 < 1.0) {
                *(float *)(iVar4 + 8) = fVar7;
              }
              else {
                *(undefined4 *)(iVar4 + 8) = 0x3f800000;
              }
            }
            else {
              *(undefined4 *)(iVar4 + 8) = 0;
            }
            *(undefined1 *)(iVar4 + 4) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
      else {
        lVar5 = (**(code **)(*param_1 + 0x5c))((int)param_1 + (int)*(short *)(*param_1 + 0x58));
        if (lVar5 == 0) {
          return 1;
        }
        if (*(char *)((int)param_1 + 0x42) == '\0') {
          *(undefined1 *)(param_1 + 0x10) = 0;
          uVar3 = param_1[0xf] + 1;
          param_1[0xf] = uVar3;
          if (uVar3 < *(uint *)(param_1[0xe] + 8)) {
            return 1;
          }
          if (*(char *)(param_1[0xe] + 0xc) == '\0') {
            *(undefined1 *)((int)param_1 + 0x41) = 1;
          }
          else {
            param_1[0xf] = 0;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x10) = 0;
          iVar4 = param_1[0xf] + -1;
          param_1[0xf] = iVar4;
          if (iVar4 == -1) {
            iVar4 = param_1[0xe];
            if (*(char *)(iVar4 + 0xc) == '\0') {
              *(undefined1 *)((int)param_1 + 0x41) = 1;
              param_1[0xf] = *(int *)(iVar4 + 8);
            }
            else {
              param_1[0xf] = *(int *)(iVar4 + 8) + -1;
            }
          }
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_002d59f0 @ 002d59f0 ====

/* Strings referenciadas:
     "%s %s"
     "pause"
     "rotate"
     "orient" */

undefined4 FUN_002d59f0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  lVar5 = FUN_0035d7b0(*(int *)(*(int *)(param_1 + 0x38) + 4) + param_2 * 0x58 + 0x18,0x404510,
                       auStack_90,auStack_80);
  if (lVar5 < 2) {
    return 1;
  }
  uVar6 = FUN_0035e730(auStack_80);
  fVar7 = (float)FUN_00291c68(uVar6);
  lVar5 = strcmp(auStack_90,0x404518);
  fVar10 = DAT_003c958c;
  if (lVar5 == 0) {
    if (*(char *)(param_1 + 0x43) == '\0') {
      *(undefined1 *)(param_1 + 0x43) = 1;
      *(float *)(param_1 + 0x44) = fVar10 + fVar7;
    }
    if (DAT_003c958c < *(float *)(param_1 + 0x44)) {
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined1 *)(iVar4 + 4) = 1;
      }
      iVar4 = *(int *)(param_1 + 0x1c);
      if (iVar4 != 0) {
        fVar8 = *(float *)(DAT_003c9ed4 + 0xc) * 0.05;
        fVar10 = *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x54);
        if (fVar8 < fVar10) {
          uVar9 = 0xbf800000;
          *(undefined1 *)(iVar4 + 4) = 1;
        }
        else {
          if (fVar8 <= fVar10) {
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined1 *)(iVar4 + 4) = 1;
            goto LAB_002d5b3c;
          }
          uVar9 = 0x3f800000;
          *(undefined1 *)(iVar4 + 4) = 1;
        }
        *(undefined4 *)(iVar4 + 8) = uVar9;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x43) = 0;
    }
  }
LAB_002d5b3c:
  lVar5 = strcmp(auStack_90,0x404520);
  if (lVar5 == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      fVar10 = *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x40) + fVar7;
      *(float *)(param_1 + 0x4c) = fVar10;
      if ((fVar10 < -180.0) || (180.0 < fVar10)) {
LAB_002d5ba0:
        fVar10 = *(float *)(param_1 + 0x4c);
        do {
          if (180.0 < fVar10) {
            fVar10 = fVar10 - 360.0;
LAB_002d5bfc:
            bVar2 = fVar10 < -180.0;
          }
          else {
            if (fVar10 < -180.0) {
              fVar10 = fVar10 + 360.0;
              goto LAB_002d5bfc;
            }
            bVar2 = false;
          }
          *(float *)(param_1 + 0x4c) = fVar10;
          if (bVar2) goto LAB_002d5ba0;
          if (fVar10 <= 180.0) break;
          fVar10 = *(float *)(param_1 + 0x4c);
        } while( true );
      }
      *(undefined1 *)(param_1 + 0x48) = 1;
      iVar4 = *(int *)(param_1 + 8);
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
    }
    fVar10 = *(float *)(param_1 + 0x4c) - *(float *)(*(int *)(iVar4 + 0x14) + 0x40);
    while ((fVar10 < -180.0 || (180.0 < fVar10))) {
      if (180.0 < fVar10) {
        fVar10 = fVar10 - 360.0;
      }
      else if (fVar10 < -180.0) {
        fVar10 = fVar10 + 360.0;
      }
    }
    if (ABS(fVar10) <= 3.0) {
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined1 *)(iVar4 + 4) = 1;
      }
      iVar4 = *(int *)(param_1 + 0x1c);
      if (iVar4 != 0) {
        fVar8 = *(float *)(DAT_003c9ed4 + 0xc) * 0.05;
        fVar10 = *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x54);
        if (fVar8 < fVar10) {
          uVar9 = 0xbf800000;
          *(undefined1 *)(iVar4 + 4) = 1;
        }
        else {
          if (fVar8 <= fVar10) {
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined1 *)(iVar4 + 4) = 1;
            goto LAB_002d5da8;
          }
          uVar9 = 0x3f800000;
          *(undefined1 *)(iVar4 + 4) = 1;
        }
        *(undefined4 *)(iVar4 + 8) = uVar9;
      }
LAB_002d5da8:
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined1 *)(iVar4 + 4) = 1;
        *(undefined4 *)(iVar4 + 8) = uVar9;
      }
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 != 0) {
        fStack_60 = *(float *)(param_1 + 0x4c);
        iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x14);
        fStack_70 = fStack_60 - *(float *)(iVar1 + 0x3c);
        fStack_6c = fStack_60 - *(float *)(iVar1 + 0x40);
        fStack_68 = fStack_60 - *(float *)(iVar1 + 0x44);
        uVar9 = 0x3f800000;
        fStack_5c = fStack_60;
        fStack_58 = fStack_60;
        if (fStack_6c <= 3.0) {
          if (-3.0 <= fStack_6c) {
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined1 *)(iVar4 + 4) = 1;
            goto LAB_002d5e60;
          }
          uVar9 = 0xbf800000;
        }
        *(undefined1 *)(iVar4 + 4) = 1;
        *(undefined4 *)(iVar4 + 8) = uVar9;
      }
    }
  }
LAB_002d5e60:
  lVar5 = strcmp(auStack_90,0x404528);
  if (lVar5 != 0) {
    cVar3 = *(char *)(param_1 + 0x43);
    goto LAB_002d6178;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(float *)(param_1 + 0x54) = fVar7;
    if ((fVar7 < -180.0) || (180.0 < fVar7)) {
LAB_002d5eb8:
      fVar10 = *(float *)(param_1 + 0x54);
      do {
        if (180.0 < fVar10) {
          fVar10 = fVar10 - 360.0;
LAB_002d5f14:
          bVar2 = fVar10 < -180.0;
        }
        else {
          if (fVar10 < -180.0) {
            fVar10 = fVar10 + 360.0;
            goto LAB_002d5f14;
          }
          bVar2 = false;
        }
        *(float *)(param_1 + 0x54) = fVar10;
        if (bVar2) goto LAB_002d5eb8;
        if (fVar10 <= 180.0) break;
        fVar10 = *(float *)(param_1 + 0x54);
      } while( true );
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  fVar10 = *(float *)(param_1 + 0x54) - *(float *)(*(int *)(iVar4 + 0x14) + 0x40);
  while ((fVar10 < -180.0 || (180.0 < fVar10))) {
    if (180.0 < fVar10) {
      fVar10 = fVar10 - 360.0;
    }
    else if (fVar10 < -180.0) {
      fVar10 = fVar10 + 360.0;
    }
  }
  if (3.0 < ABS(fVar10)) {
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined1 *)(iVar4 + 4) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 != 0) {
      fVar7 = *(float *)(DAT_003c9ed4 + 0xc) * 0.05;
      fVar10 = *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x54);
      if (fVar7 < fVar10) {
        uVar9 = 0xbf800000;
        *(undefined1 *)(iVar4 + 4) = 1;
      }
      else {
        if (fVar7 <= fVar10) {
          *(undefined4 *)(iVar4 + 8) = 0;
          *(undefined1 *)(iVar4 + 4) = 1;
          goto LAB_002d60c0;
        }
        uVar9 = 0x3f800000;
        *(undefined1 *)(iVar4 + 4) = 1;
      }
      *(undefined4 *)(iVar4 + 8) = uVar9;
    }
LAB_002d60c0:
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x54);
      *(undefined1 *)(iVar4 + 4) = 1;
      *(undefined4 *)(iVar4 + 8) = uVar9;
    }
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 == 0) {
      cVar3 = *(char *)(param_1 + 0x43);
      goto LAB_002d6178;
    }
    fVar10 = *(float *)(param_1 + 0x54) - *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x40);
    uVar9 = 0x3f800000;
    if (fVar10 <= 3.0) {
      if (-3.0 <= fVar10) {
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined1 *)(iVar4 + 4) = 1;
        goto LAB_002d6174;
      }
      uVar9 = 0xbf800000;
    }
    *(undefined1 *)(iVar4 + 4) = 1;
    *(undefined4 *)(iVar4 + 8) = uVar9;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
LAB_002d6174:
  cVar3 = *(char *)(param_1 + 0x43);
LAB_002d6178:
  uVar9 = 0;
  if (((cVar3 == '\0') && (uVar9 = 0, *(char *)(param_1 + 0x48) == '\0')) &&
     (uVar9 = 0, *(char *)(param_1 + 0x50) == '\0')) {
    uVar9 = 1;
  }
  return uVar9;
}


// ==== CPathWayAgent_002d61b8 @ 002d61b8 ====

/* Strings referenciadas:
     "CPathWayAgent" */

void CPathWayAgent_002d61b8(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f240 = &DAT_003e2ae0;
    }
    else {
      FUN_002e00f0(0x44f130,0x404530,0x2d53f0,0,0,0);
    }
  }
  return;
}


// ==== FUN_002d6218 @ 002d6218 ====

undefined8 FUN_002d6218(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002dff10();
  puVar1 = (undefined4 *)param_1;
  puVar1[6] = 0;
  *puVar1 = &DAT_003e3688;
  puVar1[3] = 0;
  puVar1[7] = 0;
  puVar1[0xe] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  return param_1;
}


// ==== FUN_002d6278 @ 002d6278 ====

void FUN_002d6278(undefined8 param_1,ulong param_2)

{
  *(undefined4 *)param_1 = &DAT_003e3688;
  FUN_002dff98(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002d62d0 @ 002d62d0 ====

/* Strings referenciadas:
     "PathWayName"
     "StartingPointIndex" */

bool FUN_002d62d0(int param_1,long param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    uVar3 = FUN_002e3920(param_2);
    lVar4 = stricmp(uVar3,0x4044c8);
    if (lVar4 != 0) {
      lVar4 = stricmp(uVar3,0x4044d8);
      if (lVar4 == 0) {
        uVar3 = FUN_002e3918(param_2);
        uVar1 = FUN_0035e750(uVar3);
        *(undefined4 *)(param_1 + 0x3c) = uVar1;
        return true;
      }
      lVar4 = FUN_002e3920(param_2);
      if (lVar4 == 0) {
        return false;
      }
      pcVar2 = (char *)FUN_002e3920(param_2);
      if (*pcVar2 != '_') {
        return false;
      }
      return true;
    }
    lVar4 = FUN_002e3918(param_2);
    if (lVar4 == 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      lVar4 = FUN_002daa70(*(int *)(param_1 + 0x10),lVar4);
      *(int *)(param_1 + 0x38) = (int)lVar4;
      return lVar4 != 0;
    }
  }
  return false;
}


// ==== FUN_002d6440 @ 002d6440 ====

void FUN_002d6440(void)

{
  FUN_002d6480();
  return;
}


// ==== FUN_002d6480 @ 002d6480 ====

void FUN_002d6480(int param_1)

{
  char cVar1;
  
  if (*(uint *)(param_1 + 0x3c) == 0) {
    cVar1 = *(char *)(param_1 + 0x42);
  }
  else {
    if (*(uint *)(param_1 + 0x3c) < *(uint *)(*(int *)(param_1 + 0x38) + 8)) {
      *(undefined1 *)(param_1 + 0x50) = 0;
      goto LAB_002d64c0;
    }
    cVar1 = *(char *)(param_1 + 0x42);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(*(int *)(param_1 + 0x38) + 8) + -1;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
LAB_002d64c0:
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}


// ==== FUN_002d65a8 @ 002d65a8 ====

void FUN_002d65a8(void)

{
  CPathWayAgent_002d61b8(1,0xffff);
  return;
}


// ==== FUN_002d65c8 @ 002d65c8 ====

void FUN_002d65c8(void)

{
  CPathWayAgent_002d61b8(0,0xffff);
  return;
}


// ==== FUN_002d65e8 @ 002d65e8 ====

void FUN_002d65e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x74,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x74,uVar1);
  }
  FUN_002d7008(auStack_40[0],param_1);
  return;
}


// ==== FUN_002d6690 @ 002d6690 ====

/* Strings referenciadas:
     "DangerousConeAngle"
     "TargetBot"
     "GunRange"
     "MaxInaccuracy"
     "AimAtTargetInterval" */

bool FUN_002d6690(int param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x4045b0);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 != 0) {
        uVar4 = FUN_0035e730(lVar5);
        uVar6 = FUN_00291c68(uVar4);
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        return true;
      }
    }
    else {
      lVar5 = stricmp(uVar4,0x4045c8);
      if (lVar5 == 0) {
        lVar5 = FUN_002e3918(param_2);
        if (lVar5 != 0) {
          lVar5 = FUN_002eb398(DAT_003c9ed4);
          *(int *)(param_1 + 0xc) = (int)lVar5;
          return lVar5 != 0;
        }
      }
      else {
        lVar5 = stricmp(uVar4,0x4045d8);
        if (lVar5 == 0) {
          lVar5 = FUN_002e3918(param_2);
          if (lVar5 != 0) {
            uVar4 = FUN_0035e730(lVar5);
            iVar1 = DAT_003c9ed4;
            fVar7 = (float)FUN_00291c68(uVar4);
            *(float *)(param_1 + 0x10) = fVar7 * *(float *)(iVar1 + 0xc);
            return true;
          }
        }
        else {
          lVar5 = stricmp(uVar4,0x4045e8);
          if (lVar5 == 0) {
            lVar5 = FUN_002e3918(param_2);
            if (lVar5 != 0) {
              uVar4 = FUN_0035e730(lVar5);
              uVar6 = FUN_00291c68(uVar4);
              *(undefined4 *)(param_1 + 0x18) = uVar6;
              return true;
            }
          }
          else {
            lVar5 = stricmp(uVar4,0x4045f8);
            if ((lVar5 == 0) && (lVar5 = FUN_002e3918(param_2), lVar5 != 0)) {
              uVar4 = FUN_0035e730(lVar5);
              uVar6 = FUN_00291c68(uVar4);
              *(undefined4 *)(param_1 + 0x70) = uVar6;
              return true;
            }
          }
        }
      }
    }
    bVar2 = false;
    if (param_2 != 0) {
      lVar5 = FUN_002e3920(param_2);
      bVar2 = false;
      if (lVar5 != 0) {
        pcVar3 = (char *)FUN_002e3920(param_2);
        bVar2 = false;
        if (*pcVar3 == '_') {
          bVar2 = true;
        }
      }
    }
  }
  return bVar2;
}


// ==== FUN_002d6860 @ 002d6860 ====

/* Strings referenciadas:
     "CShooterAgent::BotShootAtEnemy" */

undefined4 FUN_002d6860(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  float fVar6;
  
  piVar5 = (int *)param_1;
  iVar1 = FUN_002e1c58(piVar5[2],0x4512b0);
  piVar5[0x14] = iVar1;
  iVar1 = FUN_002e1c58(piVar5[2],0x455e18);
  piVar5[0x13] = iVar1;
  iVar1 = FUN_002dfe08(piVar5[1],0x44f7c0);
  piVar5[0x15] = iVar1;
  iVar1 = FUN_002dfe08(piVar5[1],0x44fb08);
  piVar5[0x16] = iVar1;
  iVar1 = FUN_002dfe08(piVar5[1],0x44f8d8);
  piVar5[0x17] = iVar1;
  iVar1 = FUN_002e4ce0(*(undefined4 *)(piVar5[2] + 0x14),0x4505f8);
  piVar5[0x18] = iVar1;
  iVar1 = FUN_002e4ce0(*(undefined4 *)(piVar5[2] + 0x14),0x44fe50);
  piVar5[0x19] = iVar1;
  uVar3 = FUN_002e91c0();
  iVar1 = FUN_002e93b8(uVar3,0x404610);
  piVar5[0x1a] = iVar1;
  piVar5[0x1b] = 0;
  piVar5[0xb] = DAT_00451508;
  piVar5[0xc] = DAT_0045150c;
  piVar5[0xd] = DAT_00451510;
  *(undefined1 *)(piVar5 + 0xf) = 0;
  piVar5[0x10] = DAT_004514f8;
  piVar5[0x11] = DAT_004514fc;
  piVar5[0x12] = DAT_00451500;
  piVar5[0xe] = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    piVar5[5] = 0;
    iVar1 = DAT_003c9ed4;
    piVar5[3] = 0;
    fVar6 = *(float *)(iVar1 + 0xc);
    piVar5[6] = 0;
    piVar5[0x1c] = 0x3f000000;
    piVar5[4] = (int)(fVar6 * 30.0);
    lVar4 = FUN_002e0018(param_1,param_2);
    uVar2 = 0;
    if (lVar4 != 0) {
      lVar4 = (**(code **)(*piVar5 + 0x44))((int)piVar5 + (int)*(short *)(*piVar5 + 0x40));
      uVar2 = 0;
      if (lVar4 != 0) {
        lVar4 = (**(code **)(*piVar5 + 0x4c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x48));
        uVar2 = 0;
        if (lVar4 != 0) {
          lVar4 = (**(code **)(*piVar5 + 0x54))((int)piVar5 + (int)*(short *)(*piVar5 + 0x50));
          uVar2 = 1;
          if (lVar4 == 0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}


// ==== FUN_002d6a38 @ 002d6a38 ====

undefined4 FUN_002d6a38(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  
  iVar5 = (int)param_1;
  FUN_002dfbf8(*(undefined4 *)(iVar5 + 4));
  if (*(float *)(iVar5 + 0x1c) < *(float *)(iVar5 + 0x10)) {
    iVar2 = FUN_00310120(*(undefined4 *)(iVar5 + 0x4c),*(undefined4 *)(iVar5 + 0xc));
    fVar7 = DAT_003c958c;
    if (*(char *)(iVar2 + 0x11) != '\0') {
      *(undefined1 *)(iVar5 + 0x3c) = 0;
      goto LAB_002d6af4;
    }
    if (*(float *)(iVar5 + 0x6c) < DAT_003c958c) {
      uVar3 = FUN_002e91c0();
      lVar4 = FUN_002e8ab8(uVar3,*(undefined4 *)(iVar5 + 0x68),
                           *(undefined4 *)(*(int *)(iVar5 + 8) + 0x14));
      if (lVar4 != 0) {
        FUN_002d6cb0(param_1);
        FUN_002e9978(uVar3,*(undefined4 *)(iVar5 + 0x68),*(undefined4 *)(*(int *)(iVar5 + 8) + 0x14)
                    );
        *(float *)(iVar5 + 0x6c) = fVar7 + *(float *)(iVar5 + 0x70);
        goto LAB_002d6af4;
      }
      iVar2 = *(int *)(iVar5 + 0x54);
    }
    else {
      iVar2 = *(int *)(iVar5 + 0x54);
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x3c) = 0;
LAB_002d6af4:
    iVar2 = *(int *)(iVar5 + 0x54);
  }
  if (iVar2 == 0) {
    fVar7 = *(float *)(iVar5 + 0x38) - *(float *)(*(int *)(*(int *)(iVar5 + 8) + 0x14) + 0x40);
    if (3.0 < fVar7) {
      iVar2 = *(int *)(iVar5 + 0x58);
      uVar6 = 0x3f800000;
    }
    else {
      if (-3.0 <= fVar7) {
        iVar2 = *(int *)(iVar5 + 0x58);
        *(undefined1 *)(iVar2 + 4) = 1;
        *(undefined4 *)(iVar2 + 8) = 0;
        goto LAB_002d6bb8;
      }
      iVar2 = *(int *)(iVar5 + 0x58);
      uVar6 = 0xbf800000;
    }
    *(undefined1 *)(iVar2 + 4) = 1;
    *(undefined4 *)(iVar2 + 8) = uVar6;
  }
  else {
    uVar6 = *(undefined4 *)(iVar5 + 0x38);
    *(undefined1 *)(iVar2 + 4) = 1;
    *(undefined4 *)(iVar2 + 8) = uVar6;
  }
LAB_002d6bb8:
  iVar2 = *(int *)(iVar5 + 0x5c);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar5 + 0x34);
  *(undefined1 *)(iVar2 + 4) = 1;
  iVar2 = *(int *)(iVar5 + 0x5c);
  uVar1 = *(undefined1 *)(iVar5 + 0x3c);
  *(undefined1 *)(iVar2 + 4) = 1;
  *(undefined1 *)(iVar2 + 0x14) = uVar1;
  iVar2 = *(int *)(*(int *)(iVar5 + 8) + 0x14);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(iVar2 + 0x34);
  *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar2 + 0x38);
  uVar6 = 1;
  if (*(char *)(iVar5 + 0x3c) == '\0') {
    iVar2 = *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar2 + 0x30);
    *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(iVar2 + 0x34);
    *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar2 + 0x38);
    iVar2 = **(int **)(iVar5 + 0x50);
    lVar4 = (**(code **)(iVar2 + 0x34))
                      ((int)*(int **)(iVar5 + 0x50) + (int)*(short *)(iVar2 + 0x30),iVar5 + 0x40);
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      iVar2 = **(int **)(iVar5 + 4);
      (**(code **)(iVar2 + 0x14))
                ((int)*(int **)(iVar5 + 4) + (int)*(short *)(iVar2 + 0x10),
                 *(undefined4 *)(*(int *)(iVar5 + 0x50) + 8));
      uVar6 = 1;
    }
  }
  return uVar6;
}


// ==== FUN_002d6cb0 @ 002d6cb0 ====

void FUN_002d6cb0(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  float fVar3;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  
  iVar2 = param_1[3];
  fStack_80 = *(float *)(iVar2 + 0x30) - (float)param_1[8];
  fStack_78 = *(float *)(iVar2 + 0x38) - (float)param_1[10];
  fStack_7c = *(float *)(iVar2 + 0x34) - (float)param_1[9];
  FUN_002e9f40(&fStack_70,&fStack_80);
  if (180.0 < fStack_6c) {
    fVar3 = fStack_6c - 360.0;
  }
  else {
    fVar3 = fStack_6c;
    if (fStack_6c < -180.0) {
      fVar3 = fStack_6c + 360.0;
    }
  }
  param_1[0xe] = (int)fVar3;
  iVar2 = FUN_0035f630();
  fVar3 = (float)param_1[6];
  fStack_6c = fStack_6c + ((fVar3 + fVar3) * (float)iVar2 * 4.656613e-10 - fVar3);
  iVar2 = FUN_0035f630();
  fVar3 = (float)param_1[6];
  fStack_70 = fStack_70 + ((fVar3 + fVar3) * (float)iVar2 * 4.656613e-10 - fVar3);
  FUN_002e9e88(&iStack_60,&fStack_70);
  uVar1 = (**(code **)(*param_1 + 0x5c))((int)param_1 + (int)*(short *)(*param_1 + 0x58),&iStack_60)
  ;
  param_1[0xb] = iStack_60;
  param_1[0xc] = iStack_5c;
  param_1[0xd] = iStack_58;
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  return;
}


// ==== FUN_002d6e48 @ 002d6e48 ====

undefined4 FUN_002d6e48(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  uVar3 = DAT_0040653c;
  if ((0.0 < *(float *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x60) != 0)) {
    for (iVar1 = *(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 8); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0xc)) {
      if ((((iVar1 != *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x14)) &&
           (iVar1 != *(int *)(*(int *)(param_1 + 0xc) + 0x14))) &&
          (iVar2 = *(int *)(iVar1 + 4), (*(uint *)(iVar2 + 0x1c) & uVar3) != 0)) &&
         ((iVar4 = FUN_00310120(*(undefined4 *)(param_1 + 0x4c),iVar2),
          *(char *)(iVar4 + 0x13) == '\0' &&
          (lVar5 = FUN_002e4e28(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),
                                iVar2 + 0x30,param_1 + 0x20,param_2), lVar5 != 0)))) {
        return 0;
      }
    }
  }
  return 1;
}


// ==== CShooterAgent_002d6fa8 @ 002d6fa8 ====

/* Strings referenciadas:
     "CShooterAgent" */

void CShooterAgent_002d6fa8(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f358 = &DAT_003e2ae0;
    }
    else {
      FUN_002e00f0(0x44f248,0x404630,0x2d65e8,0,0,0);
    }
  }
  return;
}


// ==== FUN_002d7008 @ 002d7008 ====

undefined8 FUN_002d7008(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_002dff10();
  puVar1 = (undefined4 *)param_1;
  puVar1[4] = 0;
  uVar2 = puVar1[4];
  *puVar1 = &DAT_003e3888;
  puVar1[10] = uVar2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[3] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[9] = uVar2;
  puVar1[8] = uVar2;
  return param_1;
}


// ==== FUN_002d7068 @ 002d7068 ====

void FUN_002d7068(undefined8 param_1,ulong param_2)

{
  *(undefined4 *)param_1 = &DAT_003e3888;
  FUN_002dff98(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002d7118 @ 002d7118 ====

undefined4 FUN_002d7118(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00310120(*(undefined4 *)(param_1 + 0x4c));
    fVar3 = *(float *)(iVar1 + 0xc);
    *(float *)(param_1 + 0x1c) = fVar3;
    if ((fVar3 == 0.0) || (*(float *)(param_1 + 0x10) <= 0.0)) {
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x14);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x30);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x38);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + 8);
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
        *(undefined4 *)(param_1 + 0x28) = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


// ==== FUN_002d7220 @ 002d7220 ====

void FUN_002d7220(void)

{
  CShooterAgent_002d6fa8(1,0xffff);
  return;
}


// ==== FUN_002d7240 @ 002d7240 ====

void FUN_002d7240(void)

{
  CShooterAgent_002d6fa8(0,0xffff);
  return;
}


// ==== FUN_002d7260 @ 002d7260 ====

void FUN_002d7260(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x30,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x30,uVar1);
  }
  FUN_002d7500(auStack_40[0],param_1);
  return;
}


// ==== FUN_002d7308 @ 002d7308 ====

undefined4 FUN_002d7308(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined *apuStack_90 [9];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  FUN_002dfbf8(param_1[1]);
  if (param_1[10] == 0) {
    uVar5 = 0;
  }
  else {
    if (param_1[3] == -1) {
      iVar3 = *(int *)param_1[9];
      lVar6 = (**(code **)(iVar3 + 0x34))(param_1[9] + (int)*(short *)(iVar3 + 0x30),param_1 + 4);
    }
    else {
      iVar3 = param_1[7];
      iVar1 = param_1[8];
      FUN_002e7360(apuStack_90);
      iStack_6c = param_1[4];
      apuStack_90[0] = &DAT_003e2ab8;
      iStack_68 = param_1[5];
      iStack_64 = param_1[6];
      iVar2 = *(int *)param_1[9];
      iStack_60 = iVar3;
      iStack_5c = iVar1;
      lVar6 = (**(code **)(iVar2 + 0x3c))(param_1[9] + (int)*(short *)(iVar2 + 0x38),apuStack_90);
      apuStack_90[0] = &DAT_003e0040;
    }
    if (lVar6 == 0) {
      (**(code **)(*param_1 + 0x4c))((int)param_1 + (int)*(short *)(*param_1 + 0x48));
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
    else {
      iVar3 = *(int *)param_1[1];
      (**(code **)(iVar3 + 0x14))
                (param_1[1] + (int)*(short *)(iVar3 + 0x10),*(undefined4 *)(param_1[9] + 8));
      iVar3 = *(int *)param_1[9];
      cVar4 = (**(code **)(iVar3 + 0x5c))(param_1[9] + (int)*(short *)(iVar3 + 0x58));
      *(char *)(param_1 + 0xb) = cVar4;
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x4c))((int)param_1 + (int)*(short *)(*param_1 + 0x48));
        return 1;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


// ==== CWanderAgent_002d74a0 @ 002d74a0 ====

/* Strings referenciadas:
     "CWanderAgent" */

void CWanderAgent_002d74a0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f470 = &DAT_003e2ae0;
    }
    else {
      FUN_002e00f0(0x44f360,0x4046f8,0x2d7260,0,0,0);
    }
  }
  return;
}


// ==== FUN_002d7500 @ 002d7500 ====

undefined8 FUN_002d7500(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002dff10();
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003e3bb0;
  puVar1[7] = 0x7fffffff;
  puVar1[8] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[10] = 0;
  puVar1[9] = 0;
  return param_1;
}


// ==== FUN_002d7558 @ 002d7558 ====

void FUN_002d7558(undefined8 param_1,ulong param_2)

{
  *(undefined4 *)param_1 = &DAT_003e3bb0;
  FUN_002dff98(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002d75b0 @ 002d75b0 ====

/* Strings referenciadas:
     "Graph" */

undefined4 FUN_002d75b0(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    uVar2 = FUN_002e3920(param_2);
    lVar3 = stricmp(uVar2,0x4046f0);
    if ((lVar3 != 0) || (lVar3 = FUN_002e3918(param_2), lVar3 == 0)) {
      if (param_2 == 0) {
        return 0;
      }
      lVar3 = FUN_002e3920(param_2);
      if (lVar3 == 0) {
        return 0;
      }
      pcVar1 = (char *)FUN_002e3920(param_2);
      if (*pcVar1 != '_') {
        return 0;
      }
      return 1;
    }
    lVar4 = FUN_002ec058(DAT_003c9ed4,0x452158);
    if ((lVar4 != 0) && (lVar3 = FUN_002f2f58(lVar4,lVar3), lVar3 != 0)) {
      FUN_002d7840(param_1,lVar3);
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002d76a0 @ 002d76a0 ====

bool FUN_002d76a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  piVar4[4] = DAT_004514f8;
  piVar4[5] = DAT_004514fc;
  piVar4[6] = DAT_00451500;
  *(undefined1 *)(piVar4 + 0xb) = 0;
  piVar4[7] = 0x7fffffff;
  iVar2 = FUN_002e1c58(piVar4[2],0x4512b0);
  piVar4[10] = 0;
  piVar4[9] = iVar2;
  lVar3 = FUN_002e0018(param_1,param_2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = (**(code **)(*piVar4 + 0x44))((int)piVar4 + (int)*(short *)(*piVar4 + 0x40));
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


// ==== FUN_002d7748 @ 002d7748 ====

undefined4 FUN_002d7748(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[10] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (param_1[7] == 0x7fffffff) {
      (**(code **)(*param_1 + 0x4c))((int)param_1 + (int)*(short *)(*param_1 + 0x48));
      uVar1 = 1;
    }
  }
  return uVar1;
}


