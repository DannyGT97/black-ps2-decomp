// ==== entry @ 00100008 ====
// GLOBAL DAT_0040ec80 undefined4
// GLOBAL DAT_0040e580 undefined1
// GLOBAL DAT_0049bfb0 undefined4
// GLOBAL DAT_0049bfbc undefined

void entry(void)

{
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  undefined4 *puVar1;
  undefined8 uVar2;
  
  SYNC(0x10);
  for (puVar1 = (undefined4 *)&DAT_0040e580; ((uint)puVar1 & 0xf) != 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1)) {
    *(undefined1 *)puVar1 = 0;
  }
  for (; puVar1 != &DAT_0049bfb0; puVar1 = puVar1 + 4) {
    *puVar1 = in_zero_lo;
    puVar1[1] = in_zero_hi;
    puVar1[2] = in_zero_udw;
    puVar1[3] = in_register_0000000c;
  }
  for (; puVar1 != (undefined4 *)&DAT_0049bfbc; puVar1 = (undefined4 *)((int)puVar1 + 1)) {
    *(undefined1 *)puVar1 = 0;
  }
  syscall(0x3c);
  syscall(0x3d);
  FUN_0036d788(0,0,0,0,0,0,0,0,0x49bfbc,0xffffffffffffffff,0x10000,0x40ec80,0x100220,0,0,0);
  FlushCache(0);
  EI();
  uVar2 = FUN_00264018(DAT_0040ec80,0x40ec84);
  FUN_002902c8(uVar2);
  return;
}


// ==== FUN_00100228 @ 00100228 ====

undefined8 FUN_00100228(undefined8 param_1)

{
  return param_1;
}


// ==== FUN_00100230 @ 00100230 ====

void FUN_00100230(undefined8 param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00100258 @ 00100258 ====

undefined8 FUN_00100258(undefined8 param_1)

{
  return param_1;
}


// ==== FUN_00100260 @ 00100260 ====

void FUN_00100260(undefined8 param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00100288 @ 00100288 ====

undefined4 FUN_00100288(undefined8 param_1,int param_2)

{
  return *(undefined4 *)(param_2 + 0x60);
}


// ==== FUN_00100290 @ 00100290 ====

void FUN_00100290(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_3 == 0) {
    uVar1 = FUN_00100288(param_1);
    puVar2 = (uint *)((uVar1 >> 5) * 4 + *(int *)((int)param_1 + 0xa8));
    uVar1 = *puVar2 & ~(1 << (uVar1 & 0x1f));
  }
  else {
    uVar1 = FUN_00100288();
    puVar2 = (uint *)((uVar1 >> 5) * 4 + *(int *)((int)param_1 + 0xa8));
    uVar1 = *puVar2 | 1 << (uVar1 & 0x1f);
  }
  *puVar2 = uVar1;
  return;
}


// ==== FUN_00100338 @ 00100338 ====
// GLOBAL DAT_0040ee00 undefined4
// GLOBAL DAT_0040ee04 undefined4
// GLOBAL DAT_0040ee08 undefined4
// GLOBAL DAT_0040ee0c undefined4
// GLOBAL DAT_0040ee10 undefined4
// GLOBAL DAT_0040ee14 undefined4
// GLOBAL DAT_0040ee18 undefined4
// GLOBAL DAT_0040ee1c undefined4
// GLOBAL DAT_0040ee20 undefined4
// GLOBAL DAT_0040ee24 undefined4
// GLOBAL DAT_0040ee28 undefined4
// GLOBAL DAT_0040ee2c undefined4
// GLOBAL DAT_0040ee30 undefined4
// GLOBAL DAT_0040ee34 undefined4
// GLOBAL DAT_0040ee38 undefined4
// GLOBAL DAT_0040ee3c undefined4

void FUN_00100338(long param_1,long param_2)

{
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(0x40e588,2);
      FUN_00100230(0x40e580,2);
    }
    else {
      DAT_0040ee00 = 0x3fc90fdb;
      DAT_0040ee04 = 0xbe22f983;
      DAT_0040ee08 = 0x4b400000;
      DAT_0040ee0c = uStack_14;
      DAT_0040ee18 = 0x3e800000;
      DAT_0040ee1c = uStack_14;
      DAT_0040ee20 = 0xc2992661;
      DAT_0040ee24 = 0xc2255de0;
      DAT_0040ee28 = 0x42a33457;
      DAT_0040ee2c = uStack_14;
      DAT_0040ee38 = 0;
      DAT_0040ee3c = uStack_14;
      DAT_0040ee10 = 0xbe22f983;
      DAT_0040ee14 = 0x3f000000;
      DAT_0040ee30 = 0x421ed7b7;
      DAT_0040ee34 = 0x40c90fda;
      FUN_00100228(0x40e580);
      FUN_00100258(0x40e588);
    }
  }
  return;
}


// ==== FUN_00100470 @ 00100470 ====

void FUN_00100470(void)

{
  FUN_00100338(1,0xffff);
  return;
}


// ==== FUN_00100490 @ 00100490 ====

void FUN_00100490(void)

{
  FUN_00100338(0,0xffff);
  return;
}


// ==== FUN_001004b0 @ 001004b0 ====
// GLOBAL DAT_004432e8 undefined4
// GLOBAL DAT_004432ec undefined4
// GLOBAL DAT_004432e0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001004b0(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0027c2f8();
  FUN_002741f0(4,0x3bc380,0x3bc390);
  *(undefined4 *)(param_1 + 0x102b0) = 0;
  uVar3 = DAT_004432ec;
  uVar2 = DAT_004432e8;
  uVar1 = _DAT_004432e0;
  *(undefined4 *)(param_1 + 0x10290) = 0x200000;
  *(int *)(param_1 + 0x102a0) = (int)uVar1;
  *(int *)(param_1 + 0x102a4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x102a8) = uVar2;
  *(undefined4 *)(param_1 + 0x102ac) = uVar3;
  *(undefined1 *)(param_1 + 0x10284) = 0;
  *(undefined1 *)(param_1 + 0x102b4) = 0;
  return;
}


// ==== FUN_00100518 @ 00100518 ====
// GLOBAL DAT_0040f500 undefined4
// GLOBAL DAT_0040f4fc undefined4
// GLOBAL DAT_004432e8 undefined4
// GLOBAL DAT_004432ec undefined4
// GLOBAL DAT_004432e0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00100518(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  FUN_00269880(iVar4 + 0x120,1,iVar4 + 0x240,iVar4 + 0x280,iVar4 + 0xb0,0x3f2340);
  FUN_001005a0(param_1);
  DAT_0040f500 = 0;
  DAT_0040f4fc = 0;
  *(undefined4 *)(iVar4 + 0x102b0) = 0;
  uVar3 = DAT_004432ec;
  uVar2 = DAT_004432e8;
  uVar1 = _DAT_004432e0;
  *(undefined1 *)(iVar4 + 0x10284) = 1;
  *(int *)(iVar4 + 0x102a0) = (int)uVar1;
  *(int *)(iVar4 + 0x102a4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0x102a8) = uVar2;
  *(undefined4 *)(iVar4 + 0x102ac) = uVar3;
  *(undefined1 *)(iVar4 + 0x102b4) = 0;
  return 1;
}


// ==== FUN_001005a0 @ 001005a0 ====

void FUN_001005a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10290) = 0x200000;
  *(undefined4 *)(param_1 + 0x10288) = 0;
  *(undefined4 *)(param_1 + 0x1028c) = 0;
  return;
}


// ==== FUN_001005c0 @ 001005c0 ====
// GLOBAL DAT_0040f0e8 int
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4f0 undefined4

void FUN_001005c0(undefined8 param_1)

{
  ((int *)param_1)[0x28] = *(int *)(DAT_0040f0e8 + 0x618);
  if (*(int *)param_1 == 0) {
    FUN_0027c320(param_1,*(undefined4 *)(DAT_0040f0e0 + 0x2107c));
  }
  FUN_0010bc08(DAT_0040f4f0);
  FUN_0027c328(param_1);
  return;
}


// ==== FUN_00100628 @ 00100628 ====
// GLOBAL DAT_0040d982 char
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f0e4 int
// GLOBAL DAT_0040f4f0 undefined4
// GLOBAL DAT_0040f4d8 undefined4
// GLOBAL DAT_0040f4cc undefined4
// GLOBAL DAT_0040d980 char
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040d984 char
// GLOBAL DAT_0040d981 char
// GLOBAL DAT_0040f4dc int_*
// GLOBAL DAT_0040f4c0 int

/* Strings referenciadas:
     "colourbars"
     "Coefficient %d: %d"
     "Tint channel %d: %u"
     "Kills: %d"
     "Black Kills: %d"
     "Percentage Black Mode: %.0f" */

void FUN_00100628(int *param_1)

{
  bool bVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  float *pfVar8;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_420 [208];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  float afStack_320 [2];
  float afStack_318 [30];
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  float fStack_290;
  float fStack_28c;
  undefined1 auStack_280 [400];
  
  if (DAT_0040d982 != '\0') {
    uStack_348._0_4_ = 0x3f000000;
    uVar9 = (undefined4)uStack_348;
    uStack_348._4_4_ = 0x3f800000;
    uVar13 = uStack_348._4_4_;
    iVar6 = 0;
    do {
      bVar1 = iVar6 != -1;
      iVar6 = iVar6 + -1;
    } while (bVar1);
    iVar6 = 0;
    do {
      bVar1 = iVar6 != -1;
      iVar6 = iVar6 + -1;
    } while (bVar1);
    uStack_340 = 0;
    uStack_338 = 0x3f800000;
    uStack_334 = 0x3f800000;
    uStack_350 = 0;
    uStack_348 = 0x43f0000044200000;
    FUN_00266088();
    FUN_00268250(0);
    lVar4 = FUN_00108328(DAT_0040f4c4,0x3f2348);
    if (lVar4 != 0) {
      FUN_002667e8(lVar4);
      auVar7._8_4_ = uVar9;
      auVar7._0_8_ = 0x3f0000003f000000;
      auVar7._12_4_ = uVar13;
      auVar7 = _por(in_zero_qw,auVar7);
      uStack_330 = 0;
      uStack_32c = 0;
      FUN_00266d28(auVar7._0_8_,&uStack_330,1,&uStack_350,&uStack_340);
    }
    FUN_002662a8();
  }
  if ((param_1[6] == -1) || (*(char *)((int)param_1 + 0x10285) == '\0')) {
    if ((char)param_1[0x27] == '\0') {
      iVar6 = param_1[6];
    }
    else {
      if (*(char *)((int)param_1 + 0x9d) != '\0') goto LAB_001007d8;
      iVar6 = param_1[6];
    }
  }
  else {
LAB_001007d8:
    FUN_00266088();
    FUN_00268250(0);
    iVar6 = DAT_0040f0e4;
    iVar2 = 0;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    iVar2 = 0xd;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    iVar2 = 0;
    pfVar8 = afStack_320;
    *(undefined4 *)(DAT_0040f0e4 + 8) = 0x42000000;
    *(undefined4 *)(iVar6 + 0xc) = 0x43d00000;
    uStack_350 = *(undefined8 *)(DAT_0040f0e4 + 8);
    fStack_28c = *(float *)(DAT_0040f0e4 + 0xc) + 4.0;
    fStack_290 = *(float *)(DAT_0040f0e4 + 8) + 576.0;
    uStack_348 = CONCAT44(fStack_28c,fStack_290);
    iVar6 = 0;
    do {
      fVar11 = (float)iVar2;
      iVar2 = iVar2 + 1;
      pfVar8[1] = *(float *)(DAT_0040f0e4 + 0xc) + 4.0 + 3.0;
      fVar11 = fVar11 * 576.0 * 0.25 + 32.0;
      *pfVar8 = fVar11 - 5.0;
      pfVar8 = pfVar8 + 6;
      fVar12 = *(float *)(DAT_0040f0e4 + 0xc);
      *(float *)((int)afStack_318 + iVar6) = fVar11;
      *(float *)((int)afStack_318 + iVar6 + 4) = fVar12 + 4.0 + 0.0;
      fVar12 = *(float *)(DAT_0040f0e4 + 0xc);
      *(float *)((int)afStack_318 + iVar6 + 8) = fVar11 + 5.0;
      *(float *)((int)afStack_318 + iVar6 + 0xc) = fVar12 + 4.0 + 3.0;
      iVar6 = iVar6 + 0x18;
    } while (iVar2 < 5);
    uVar13 = 0x3f000000;
    uStack_298 = 0x3ecccccd;
    uStack_294 = 0x3f000000;
    fVar11 = 4.0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_340 = uStack_348;
    FUN_00267670();
    uVar9 = 0x41700000;
    uStack_2a0 = 0x3f800000;
    uStack_29c = 0x3ecccccd;
    uStack_298 = 0x3ecccccd;
    fVar12 = 16.0;
    uStack_294 = uVar13;
    FUN_0027c370(0x42000000,*(float *)(DAT_0040f0e4 + 0xc) + fVar11 + fVar11,0x41700000);
    uStack_2a0 = 0x3f800000;
    uStack_29c = 0x3ecccccd;
    uStack_298 = 0x3ecccccd;
    uStack_294 = uVar13;
    FUN_0027c370(0x43280000,*(float *)(DAT_0040f0e4 + 0xc) + fVar11 + fVar11,uVar9);
    uStack_2a0 = 0x3f800000;
    uStack_29c = 0x3ecccccd;
    uStack_298 = 0x3ecccccd;
    uStack_294 = uVar13;
    FUN_0027c370(320.0 - fVar12,*(float *)(DAT_0040f0e4 + 0xc) + fVar11 + fVar11,uVar9);
    uStack_2a0 = 0x3f800000;
    uStack_29c = 0x3ecccccd;
    uStack_298 = 0x3ecccccd;
    uStack_294 = uVar13;
    FUN_0027c370(464.0 - fVar12,*(float *)(DAT_0040f0e4 + 0xc) + fVar11 + fVar11,uVar9);
    uStack_2a0 = 0x3f800000;
    uStack_29c = 0x3ecccccd;
    uStack_298 = 0x3ecccccd;
    uStack_294 = uVar13;
    FUN_0027c370(608.0 - fVar12,*(float *)(DAT_0040f0e4 + 0xc) + fVar11 + fVar11,uVar9);
    FUN_002662a8();
    iVar6 = param_1[6];
  }
  if (iVar6 != -1) {
    FUN_00101700();
  }
  if ((char)param_1[0x27] != '\0') {
    FUN_00101a98();
  }
  FUN_00266088();
  FUN_00268250(0);
  FUN_0010bc10(DAT_0040f4f0);
  FUN_001b1eb8(DAT_0040f4d8);
  FUN_0025c020(DAT_0040f4cc);
  if (*param_1 == 0) goto LAB_00100fe0;
  if (DAT_0040d980 != '\0') {
    iVar6 = *(int *)(DAT_0040f0e0 + 0x2014c);
    if (iVar6 == 1) {
      fVar11 = *(float *)(DAT_0040f4d0 + 0x328);
LAB_00100c2c:
      fVar11 = fVar11 / 1200.0;
    }
    else {
      if (iVar6 < 2) {
        if (iVar6 == 0) {
          fVar11 = *(float *)(DAT_0040f4d0 + 0x328);
          goto LAB_00100c2c;
        }
      }
      else if (iVar6 < 4) {
        fVar11 = *(float *)(DAT_0040f4d0 + 0x328) / 750.0;
        goto LAB_00100c64;
      }
      fVar11 = 0.0;
    }
LAB_00100c64:
    uVar5 = FUN_00291f58(fVar11 * 100.0);
    sprintf(auStack_420,0x3f2380,uVar5);
    FUN_00275260(auStack_420,auStack_280,200);
    uStack_350 = 0x3f8000003f800000;
    uStack_348 = 0x3f8000003f800000;
    FUN_00276110(0x41a00000,0x41a00000,0x41a00000,0,*param_1,auStack_280,0x3f8000003f800000);
  }
  if (DAT_0040d984 != '\0') {
    iVar6 = 0;
    iVar2 = 0;
    iVar10 = 100;
    do {
      uVar5 = CONCAT44(iVar2,iVar6);
      iVar3 = DAT_0040f4d0 + iVar6;
      iVar6 = iVar6 + 1;
      iVar2 = iVar6 >> 0x1f;
      sprintf(auStack_420,0x3f2388,uVar5,*(undefined1 *)(iVar3 + 0x301));
      FUN_00275260(auStack_420,auStack_280,200);
      fVar11 = (float)iVar10;
      uStack_350 = 0x3f8000003f800000;
      iVar10 = iVar10 + 0xf;
      uStack_348 = 0x3f8000003f800000;
      FUN_00276110(0x41a00000,fVar11,0x41800000,0,*param_1,auStack_280,0x3f8000003f800000);
    } while (iVar6 < 9);
    iVar6 = 0;
    iVar2 = 0;
    iVar10 = 300;
    do {
      iVar3 = DAT_0040f4d0 + iVar6;
      uVar5 = CONCAT44(iVar2,iVar6);
      iVar6 = iVar6 + 1;
      iVar2 = iVar6 >> 0x1f;
      sprintf(auStack_420,0x3f23a0,uVar5,*(undefined1 *)(iVar3 + 0x30a));
      FUN_00275260(auStack_420,auStack_280,200);
      fVar11 = (float)iVar10;
      uStack_350 = 0x3f8000003f800000;
      iVar10 = iVar10 + 0xf;
      uStack_348 = 0x3f8000003f800000;
      FUN_00276110(0x41a00000,fVar11,0x41800000,0,*param_1,auStack_280,0x3f8000003f800000);
    } while (iVar6 < 3);
  }
  if (DAT_0040d981 != '\0') {
    uVar9 = 0x41a00000;
    uVar13 = 0;
    sprintf(auStack_420,0x3f23b8,
            (int)(((uint)*(ushort *)(*DAT_0040f4dc + 0x1c) + (uint)*(ushort *)(*DAT_0040f4dc + 0x1e)
                  ) * 0x10000) >> 0x10);
    FUN_00275260(auStack_420,auStack_280,200);
    uStack_350 = 0x3f8000003f800000;
    uStack_348 = 0x3f8000003f800000;
    FUN_00276110(uVar9,(float)*(int *)(DAT_0040f4c0 + 4) - 70.0,0x41800000,uVar13,*param_1,
                 auStack_280,0x3f8000003f800000);
    sprintf(auStack_420,0x3f23c8,*(undefined2 *)(*DAT_0040f4dc + 0x1e));
    FUN_00275260(auStack_420,auStack_280,200);
    uStack_350 = 0x3f8000003f800000;
    uStack_348 = 0x3f8000003f800000;
    FUN_00276110(uVar9,(float)*(int *)(DAT_0040f4c0 + 4) - 50.0,0x41800000,uVar13,*param_1,
                 auStack_280,0x3f8000003f800000);
    uVar5 = FUN_00291f58(*(float *)(DAT_0040f4d0 + 0x514) * 100.0);
    sprintf(auStack_420,0x3f23d8,uVar5);
    FUN_00275260(auStack_420,auStack_280,200);
    uStack_350 = 0x3f8000003f800000;
    uStack_348 = 0x3f8000003f800000;
    FUN_00276110(uVar9,(float)*(int *)(DAT_0040f4c0 + 4) - 30.0,0x41800000,uVar13,*param_1,
                 auStack_280,0x3f8000003f800000);
  }
LAB_00100fe0:
  FUN_002662a8();
  return;
}


// ==== FUN_00101040 @ 00101040 ====

void FUN_00101040(void)

{
  FUN_0027c348();
  return;
}


// ==== FUN_00101068 @ 00101068 ====

void FUN_00101068(undefined8 param_1,int param_2,float *param_3)

{
  bool bVar1;
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined1 in_zero_qw [16];
  int iVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 in_vf0 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_vf11 [16];
  undefined4 uStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined1 auStack_230 [16];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_210 [12];
  undefined4 auStack_204 [13];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined4 uStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  uVar12 = 0;
  uVar13 = 0x3f800000;
  uStack_220 = 0;
  uStack_21c = 0x3f800000;
  uStack_218 = 0x3f800000;
  uStack_214 = 0x3f800000;
  uVar10 = 0x3f800000;
  uVar11 = 0x3f800000;
  iVar4 = 2;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 4));
  auVar23 = _qmtc2(0x3fb504f3);
  auVar22 = _vmulbc(auVar21,auVar23);
  _lqc2(auStack_110);
  auVar21 = _vmulbc(auVar22,auVar22);
  auVar25 = _vmulbc(auVar22,auVar22);
  auVar21 = _sqc2(auVar21);
  auVar26 = _vmulbc(auVar22,auVar22);
  auVar28 = _vmulbc(auVar22,auVar22);
  auVar30 = _vmulbc(auVar22,auVar22);
  auVar23 = _vmulbc(auVar22,auVar22);
  auVar31 = _vmulbc(auVar22,auVar22);
  auStack_d0._4_4_ = auVar21._4_4_;
  uVar3 = auStack_d0._4_4_;
  auVar23 = _qmfc2(auVar23._0_4_);
  auVar21 = _sqc2(auVar25);
  fVar14 = 1.0 - (float)auStack_d0._4_4_;
  auVar25 = _vmulbc(auVar22,auVar22);
  fVar15 = 1.0 - auVar23._0_4_;
  auVar23 = _vmulbc(auVar22,auVar22);
  auStack_d0._4_4_ = auVar21._4_4_;
  auVar23 = _qmfc2(auVar23._0_4_);
  auVar21 = _sqc2(auVar26);
  auVar22 = _qmfc2(auVar25._0_4_);
  _lqc2(auStack_100);
  _lqc2(auStack_f0);
  fStack_c8 = auVar21._8_4_;
  auVar21 = _sqc2(auVar28);
  auVar25 = _qmtc2(fVar14 - fStack_c8);
  fStack_c4 = auVar21._12_4_;
  auVar21 = _sqc2(auVar30);
  auVar26 = _vaddbc(in_vf0,auVar25);
  fVar17 = (float)auStack_d0._4_4_ - fStack_c4;
  fVar16 = (float)auStack_d0._4_4_ + fStack_c4;
  fStack_c4 = auVar21._12_4_;
  auVar21 = _sqc2(auVar31);
  _vmove(auVar26);
  auVar25 = _qmtc2(auVar23._0_4_ + fStack_c4);
  fVar14 = auVar23._0_4_ - fStack_c4;
  fStack_c4 = auVar21._12_4_;
  auVar25 = _vaddbc(in_vf0,auVar25);
  auVar28 = _qmtc2(fVar15 - fStack_c8);
  _vmove(auVar25);
  _sqc2(auVar26);
  auVar23 = _qmtc2(auVar22._0_4_ - fStack_c4);
  auVar26 = _vaddbc(in_vf0,auVar23);
  auVar23 = _qmtc2(auVar22._0_4_ + fStack_c4);
  _vmove(auVar26);
  auVar30 = _vaddbc(in_vf0,auVar23);
  auVar28 = _vaddbc(in_vf0,auVar28);
  auVar22 = _qmtc2(fVar14);
  auVar23 = _qmtc2(fVar17);
  _vmove(auVar30);
  auVar29 = _vaddbc(in_vf0,auVar22);
  auVar22 = _vaddbc(in_vf0,auVar23);
  auVar23 = _qmtc2(fVar16);
  _vmove(auVar28);
  auVar24 = _vaddbc(in_vf0,auVar23);
  auVar23 = _qmtc2(fVar15 - (float)uVar3);
  _sqc2(auVar26);
  _sqc2(auVar25);
  _vmove(auVar22);
  auVar31 = _vaddbc(in_vf0,auVar23);
  _sqc2(auVar30);
  _sqc2(auVar28);
  _sqc2(auVar22);
  auStack_100 = _sqc2(auVar24);
  auStack_f0 = _sqc2(auVar31);
  auStack_140 = _sqc2(auVar24);
  auStack_130 = _sqc2(auVar31);
  uStack_120 = (undefined4)uStack_e0;
  uStack_11c = (undefined4)((ulong)uStack_e0 >> 0x20);
  auStack_180 = _sqc2(auVar24);
  auStack_170 = _sqc2(auVar31);
  auStack_110 = _sqc2(auVar29);
  auStack_150 = _sqc2(auVar29);
  auStack_190 = _sqc2(auVar29);
  pauVar5 = (undefined1 (*) [16])(param_3 + 8);
  uVar3 = *(undefined4 *)*pauVar5;
  fVar14 = param_3[9];
  fVar15 = param_3[10];
  fVar16 = param_3[0xb];
  auVar30 = *pauVar5;
  auVar28 = *pauVar5;
  auVar26 = *pauVar5;
  fVar20 = *(float *)(param_2 + 0x70);
  auVar23 = _sqc2(auVar24);
  auVar22 = _sqc2(auVar31);
  auVar25 = _sqc2(auVar29);
  fVar19 = *(float *)(param_2 + 0x84);
  fVar18 = *(float *)(param_2 + 0x74);
  auStack_1c0 = _sqc2(auVar24);
  auStack_1b0 = _sqc2(auVar31);
  auStack_b0 = _sqc2(in_vf11);
  auStack_1d0 = _sqc2(auVar29);
  uStack_1a0 = uVar3;
  fStack_19c = fVar14;
  fStack_198 = fVar15;
  fStack_194 = fVar16;
  uStack_160 = uVar3;
  fStack_15c = fVar14;
  fStack_158 = fVar15;
  fStack_154 = fVar16;
  _auStack_d0 = auVar21;
  fVar17 = (float)FUN_0029dd08(*param_3 * 0.5 * 0.017453292);
  auVar31 = _qmtc2(fVar19);
  _lqc2(auStack_b0);
  iVar4 = 0;
  auVar21 = _qmtc2(fVar19 * fVar17 * fVar20);
  pauVar5 = (undefined1 (*) [16])auStack_210;
  auVar21 = _vaddbc(in_vf0,auVar21);
  auVar21 = _qmfc2(auVar21._0_4_);
  auVar21 = _qmtc2(auVar21._0_4_ / fVar18);
  _vaddbc(in_vf0,auVar21);
  auVar21 = _vaddbc(in_vf0,auVar31);
  do {
    if (iVar4 == 2) {
      auVar21 = _vsub(in_vf0,auVar21);
      auVar21 = _vaddbc(in_vf0,auVar21);
      auVar31 = _lqc2(auVar25);
    }
    else if (iVar4 < 3) {
      auVar31 = _lqc2(auVar25);
      if (iVar4 == 1) {
LAB_00101388:
        auVar21 = _vsub(in_vf0,auVar21);
        auVar21 = _vaddbc(in_vf0,auVar21);
        auVar31 = _lqc2(auVar25);
      }
    }
    else {
      auVar31 = _lqc2(auVar25);
      if (iVar4 == 3) goto LAB_00101388;
    }
    iVar4 = iVar4 + 1;
    auVar27 = _lqc2(auVar23);
    auVar29 = _lqc2(auVar22);
    auVar24 = _lqc2(auVar26);
    _vmulabc(auVar31,auVar21);
    _vmaddabc(auVar27,auVar21);
    _vmaddabc(auVar29,auVar21);
    auVar31 = _vmaddbc(auVar24,in_vf0);
    auVar31 = _sqc2(auVar31);
    *pauVar5 = auVar31;
    pauVar5 = pauVar5 + 1;
    if (3 < iVar4) {
      iVar4 = 0;
      do {
        iVar9 = iVar4 + 1;
        iVar6 = iVar4 * 0x10;
        iVar7 = iVar4 + 4;
        if (-1 < iVar9) {
          iVar7 = iVar9;
        }
        auStack_230._12_4_ = auStack_204[iVar4 * 4];
        auStack_230._0_12_ = *(undefined1 (*) [12])(auStack_210 + iVar6);
        iVar7 = iVar9 + (iVar7 >> 2) * -4;
        auVar22._8_4_ = uVar12;
        auVar22._0_8_ = 0x3f8000003f800000;
        auVar22._12_4_ = uVar13;
        auVar21 = _por(in_zero_qw,auVar22);
        uStack_240 = uVar3;
        fStack_23c = fVar14;
        fStack_238 = fVar15;
        fStack_234 = fVar16;
        FUN_00101610(&uStack_240,auVar21._0_8_);
        auVar2 = *(undefined1 (*) [12])(auStack_210 + iVar6);
        iVar8 = iVar7 * 0x10;
        uStack_240 = auVar2._0_4_;
        fStack_23c = (float)auVar2._4_4_;
        fStack_238 = (float)auVar2._8_4_;
        fStack_234 = (float)auStack_204[iVar4 * 4];
        auVar25._8_4_ = uVar12;
        auVar25._0_8_ = 0x3f8000003f800000;
        auVar25._12_4_ = uVar13;
        auVar21 = _por(in_zero_qw,auVar25);
        auStack_230._12_4_ = auStack_204[iVar7 * 4];
        auStack_230._0_12_ = *(undefined1 (*) [12])(auStack_210 + iVar8);
        FUN_00101610(&uStack_240,auVar21._0_8_);
        auVar2 = *(undefined1 (*) [12])(auStack_210 + iVar6);
        fStack_234 = (float)auStack_204[iVar4 * 4];
        auVar25 = _qmtc2(0x40400000);
        auVar22 = _lqc2(auVar28);
        uStack_240 = auVar2._0_4_;
        fStack_23c = auVar2._4_4_;
        fStack_238 = auVar2._8_4_;
        auVar21._8_4_ = uVar10;
        auVar21._0_8_ = 0x3f80000000000000;
        auVar21._12_4_ = uVar11;
        auVar21 = _por(in_zero_qw,auVar21);
        auVar23 = _lqc2(*(undefined1 (*) [16])(auStack_210 + iVar6));
        auVar22 = _vsub(auVar23,auVar22);
        auStack_c0 = _sqc2(auVar25);
        auVar22 = _vmulbc(auVar22,auVar25);
        auVar23 = _vadd(auVar23,auVar22);
        auStack_230 = _sqc2(auVar23);
        FUN_00101610(&uStack_240,auVar21._0_8_);
        auVar22 = _lqc2(auVar30);
        auVar23._8_4_ = uVar10;
        auVar23._0_8_ = 0x3f80000000000000;
        auVar23._12_4_ = uVar11;
        auVar21 = _por(in_zero_qw,auVar23);
        uStack_240 = auStack_230._0_4_;
        fStack_23c = (float)auStack_230._4_4_;
        fStack_238 = (float)auStack_230._8_4_;
        fStack_234 = (float)auStack_230._12_4_;
        auVar25 = _lqc2(auStack_c0);
        auVar23 = _lqc2(*(undefined1 (*) [16])(auStack_210 + iVar8));
        auVar22 = _vsub(auVar23,auVar22);
        auVar22 = _vmulbc(auVar22,auVar25);
        auVar23 = _vadd(auVar23,auVar22);
        auStack_230 = _sqc2(auVar23);
        FUN_00101610(&uStack_240,auVar21._0_8_);
        iVar4 = iVar9;
      } while (iVar9 < 4);
      return;
    }
  } while( true );
}


// ==== FUN_001014e8 @ 001014e8 ====
// GLOBAL DAT_0040f4c0 int

void FUN_001014e8(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 in_zero_qw [16];
  undefined1 in_a3_qw [16];
  undefined1 auVar2 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  
  auVar7 = _qmtc2(param_3);
  auVar2 = _por(in_zero_qw,in_a3_qw);
  pauVar1 = *(undefined1 (**) [16])(DAT_0040f4c0 + 0xd540);
  auVar6 = _lqc2(*pauVar1);
  auVar5 = _lqc2(pauVar1[1]);
  auVar4 = _lqc2(pauVar1[2]);
  auVar3 = _lqc2(pauVar1[3]);
  _vmulabc(auVar6,auVar7);
  _vmaddabc(auVar5,auVar7);
  _vmaddabc(auVar4,auVar7);
  auVar3 = _vmaddbc(auVar3,in_vf0);
  auVar4 = _qmfc2(auVar3._0_4_);
  auVar3 = _sqc2(auVar3);
  if (1.5258789e-05 < auVar4._8_4_) {
    FUN_00266088();
    FUN_00268250(0);
    uStack_70 = auVar3._0_4_;
    fStack_6c = auVar3._4_4_;
    fStack_68 = auVar3._8_4_;
    _por(in_zero_qw,auVar2);
    auVar3 = _qmtc2(uStack_70);
    auVar3 = _qmfc2(auVar3._0_4_);
    FUN_0027c370((auVar3._0_4_ / fStack_68) * (float)*(int *)(pauVar1[7] + 8),
                 (fStack_6c / fStack_68) * (float)*(int *)(pauVar1[7] + 0xc),param_1,param_2);
    FUN_002662a8();
  }
  return;
}


// ==== FUN_00101610 @ 00101610 ====

void FUN_00101610(undefined1 (*param_1) [16],undefined4 param_2)

{
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  undefined4 uStack_18;
  
  pauVar1 = &auStack_50;
  auVar4 = _qmtc2(0);
  auVar6 = _qmtc2(param_2);
  iVar2 = 1;
  do {
    _lqc2(*pauVar1);
    iVar2 = iVar2 + -1;
    auVar3 = _vmr32(auVar4);
    auVar3 = _sqc2(auVar3);
    *pauVar1 = auVar3;
    pauVar1 = pauVar1 + 2;
  } while (iVar2 != -1);
  auVar3 = _pextlh(0,0x8000ff00ff00ff);
  auVar4 = _qmtc2(0x43000000);
  auVar7 = _lqc2(param_1[1]);
  auVar4 = _vmulbc(auVar6,auVar4);
  auVar4 = _vftoi0(auVar4);
  _lqc2(auStack_50);
  auVar6 = _qmfc2(auVar4._0_4_);
  auVar4 = _qmfc2(auVar4._0_4_);
  auVar6 = _pminw(auVar6,auVar3);
  auVar4 = _pminw(auVar4,auVar3);
  auVar5 = _lqc2(*param_1);
  _lqc2(auStack_30);
  auVar4 = _ppach(in_zero_qw,auVar4);
  auVar6 = _ppach(in_zero_qw,auVar6);
  auVar4 = _ppacb(in_zero_qw,auVar4);
  auVar3 = _vadd(in_vf0,auVar7);
  auVar5 = _vadd(in_vf0,auVar5);
  auVar6 = _ppacb(in_zero_qw,auVar6);
  auStack_50 = _sqc2(auVar5);
  auStack_30 = _sqc2(auVar3);
  uStack_38 = auVar4._0_4_;
  uStack_18 = auVar6._0_4_;
  FUN_0026aa68(0);
  FUN_0026a840(0);
  FUN_0026b230(auStack_50,2);
  return;
}


// ==== FUN_00101700 @ 00101700 ====
// GLOBAL DAT_0040f4fc float
// GLOBAL DAT_0040f0e4 int

/* Strings referenciadas:
     "Current"
     "Average"
     "Min/Max"
     "Calls" */

void FUN_00101700(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_zero_qw [16];
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  
  uStack_d0 = 0x3f8000003f800000;
  uStack_c8 = 0x3f0000003f800000;
  uStack_c8._0_4_ = 0x3f800000;
  uStack_c8._4_4_ = 0x3f000000;
  iVar8 = (int)param_1;
  if (-1 < *(int *)(iVar8 + 0x18)) {
    if (param_2 == 0) {
      uVar9 = (undefined4)uStack_c8;
      uVar10 = uStack_c8._4_4_;
      FUN_00266088();
      FUN_00268250(0);
      auVar7._8_4_ = uVar9;
      auVar7._0_8_ = 0x3f8000003f800000;
      auVar7._12_4_ = uVar10;
      auVar7 = _por(in_zero_qw,auVar7);
      *(undefined4 *)(iVar8 + 8) = 0x42000000;
      *(undefined4 *)(iVar8 + 0xc) = 0x42700000;
      FUN_0027c370(*(float *)(iVar8 + 8) + 0.0,60.0 - *(float *)(iVar8 + 4) * 1.5,param_1,
                   iVar8 + *(int *)(iVar8 + 0x18) * 0x10 + 0x1c,auVar7._0_8_);
      auVar2._8_4_ = uVar9;
      auVar2._0_8_ = 0x3f8000003f800000;
      auVar2._12_4_ = uVar10;
      auVar7 = _por(in_zero_qw,auVar2);
      FUN_0027c370(*(float *)(iVar8 + 8) + 270.0,*(float *)(iVar8 + 0xc) - *(float *)(iVar8 + 4),
                   *(float *)(iVar8 + 4),param_1,0x3f23f8,auVar7._0_8_);
      auVar3._8_4_ = uVar9;
      auVar3._0_8_ = 0x3f8000003f800000;
      auVar3._12_4_ = uVar10;
      auVar7 = _por(in_zero_qw,auVar3);
      FUN_0027c370(*(float *)(iVar8 + 8) + 340.0,*(float *)(iVar8 + 0xc) - *(float *)(iVar8 + 4),
                   *(float *)(iVar8 + 4),param_1,0x3f2400,auVar7._0_8_);
      auVar4._8_4_ = uVar9;
      auVar4._0_8_ = 0x3f8000003f800000;
      auVar4._12_4_ = uVar10;
      auVar7 = _por(in_zero_qw,auVar4);
      FUN_0027c370(*(float *)(iVar8 + 8) + 410.0,*(float *)(iVar8 + 0xc) - *(float *)(iVar8 + 4),
                   *(float *)(iVar8 + 4),param_1,0x3f2408,auVar7._0_8_);
      auVar5._8_4_ = uVar9;
      auVar5._0_8_ = 0x3f8000003f800000;
      auVar5._12_4_ = uVar10;
      auVar7 = _por(in_zero_qw,auVar5);
      FUN_0027c370(*(float *)(iVar8 + 8) + 510.0,*(float *)(iVar8 + 0xc) - *(float *)(iVar8 + 4),
                   param_1,0x3f2410,auVar7._0_8_);
      FUN_002662a8();
    }
    else {
      DAT_0040f4fc = 0.0;
      iVar6 = 0;
      do {
        bVar1 = iVar6 != -1;
        iVar6 = iVar6 + -1;
      } while (bVar1);
      FUN_00266088();
      fVar11 = 4.0;
      FUN_00268250(0);
      iVar6 = DAT_0040f0e4;
      *(undefined4 *)(DAT_0040f0e4 + 8) = 0x42000000;
      *(undefined4 *)(iVar6 + 0xc) = 0x43cc0000;
      uStack_d0 = *(undefined8 *)(DAT_0040f0e4 + 8);
      fStack_b0 = 576.0;
      fStack_a0 = *(float *)(DAT_0040f0e4 + 8) + 576.0;
      fStack_9c = *(float *)(DAT_0040f0e4 + 0xc) + fVar11;
      uStack_c8 = CONCAT44(fStack_9c,fStack_a0);
      uStack_b8 = 0;
      uStack_b4 = 0x3f800000;
      uStack_c0 = 0;
      fStack_ac = fVar11;
      FUN_00266f50(0,&uStack_c0,1,&uStack_d0);
      fStack_b0 = *(float *)(iVar8 + 0x10288) * 2.8799999;
      fStack_90 = *(float *)(DAT_0040f0e4 + 8) + fStack_b0;
      fStack_8c = *(float *)(DAT_0040f0e4 + 0xc) + fVar11;
      uStack_c8 = CONCAT44(fStack_8c,fStack_90);
      uStack_b8 = 0x3e19999a;
      uStack_b4 = 0x3f800000;
      uStack_c0 = 0;
      fStack_ac = fVar11;
      FUN_00266f50(0x3e19999a3e19999a,&uStack_c0,1,&uStack_d0);
      if ((*(float *)(iVar8 + 0x10288) < DAT_0040f4fc) &&
         (bVar1 = 200.0 < DAT_0040f4fc, *(float *)(iVar8 + 0x10288) = DAT_0040f4fc, bVar1)) {
        *(undefined4 *)(iVar8 + 0x10288) = 0x43480000;
      }
      FUN_002662a8();
    }
  }
  return;
}


// ==== FUN_00101a98 @ 00101a98 ====
// GLOBAL DAT_0040f500 float
// GLOBAL DAT_0040f0e4 int
// GLOBAL DAT_0040f4c0 int

/* Strings referenciadas:
     "GPU Render cost" */

void FUN_00101a98(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b0;
  float fStack_ac;
  
  uStack_f0 = 0x3f8000003f800000;
  DAT_0040f500 = 0.0;
  iVar7 = (int)param_1;
  uVar8 = *(undefined4 *)(iVar7 + 0x10);
  uStack_e8 = CONCAT44(uVar8,0x3f800000);
  uVar3 = uStack_e8;
  uStack_e8._0_4_ = 0x3f800000;
  uVar6 = (undefined4)uStack_e8;
  uStack_e8 = uVar3;
  FUN_00266088();
  FUN_00268250(0);
  iVar2 = DAT_0040f0e4;
  if (param_2 == 0) {
    auVar5._8_4_ = uVar6;
    auVar5._0_8_ = 0x3f8000003f800000;
    auVar5._12_4_ = uVar8;
    auVar5 = _por(in_zero_qw,auVar5);
    *(undefined4 *)(iVar7 + 8) = 0x42000000;
    *(undefined4 *)(iVar7 + 0xc) = 0x42700000;
    FUN_0027c370(*(float *)(iVar7 + 8) + 0.0,60.0 - *(float *)(iVar7 + 4) * 1.5,param_1,0x3f2438,
                 auVar5._0_8_);
  }
  else {
    iVar4 = 0;
    do {
      bVar1 = iVar4 != -1;
      iVar4 = iVar4 + -1;
    } while (bVar1);
    *(undefined4 *)(DAT_0040f0e4 + 8) = 0x42000000;
    *(undefined4 *)(iVar2 + 0xc) = 0x43d00000;
    fVar10 = 576.0;
    uStack_f0 = *(undefined8 *)(DAT_0040f0e4 + 8);
    fStack_d0 = 576.0;
    uStack_cc = 0x40800000;
    fVar9 = 0.0;
    fStack_c0 = *(float *)(DAT_0040f0e4 + 8) + 576.0;
    fStack_bc = *(float *)(DAT_0040f0e4 + 0xc) + 4.0;
    uStack_e8 = CONCAT44(fStack_bc,fStack_c0);
    uStack_d8 = 0;
    uStack_d4 = 0x3f800000;
    uStack_e0 = 0;
    FUN_00266f50(0,&uStack_e0,1,&uStack_f0);
    fStack_d0 = *(float *)(iVar7 + 0x1028c) * 2.8799999;
    uStack_cc = 0x40800000;
    fStack_b0 = *(float *)(DAT_0040f0e4 + 8) + fStack_d0;
    fStack_ac = *(float *)(DAT_0040f0e4 + 0xc) + 4.0;
    uStack_e8 = CONCAT44(fStack_ac,fStack_b0);
    uStack_d8 = 0x3e19999a;
    uStack_d4 = 0x3f800000;
    uStack_e0 = CONCAT44(fVar9,fVar9);
    FUN_00266f50(0x3e19999a3e19999a,&uStack_e0,1,&uStack_f0);
    if (*(uint *)(iVar7 + 0x10290) < 0x200000) {
      uStack_f0 = CONCAT44(*(float *)(DAT_0040f0e4 + 0xc) + -1.0,
                           *(float *)(DAT_0040f0e4 + 8) + fVar9);
      fStack_d0 = (1.0 - (float)*(uint *)(iVar7 + 0x10290) * 4.7683716e-07) * 288.0;
      uStack_cc = 0xc0400000;
      fStack_c0 = *(float *)(DAT_0040f0e4 + 8) + fStack_d0;
      fStack_bc = *(float *)(DAT_0040f0e4 + 0xc) + -3.0;
      uStack_e8 = CONCAT44(fStack_bc,fStack_c0);
      uStack_d8 = 0x3e19999a;
      uStack_d4 = 0x3f800000;
      uStack_e0 = 0;
      FUN_00266f50(0x3e19999a3e19999a,&uStack_e0,1,&uStack_f0);
    }
    fStack_d0 = fVar10 * 0.5 * (1.0 - (float)*(uint *)(DAT_0040f4c0 + 0xd5f0) * 4.7683716e-07);
    uStack_cc = 0xc0400000;
    fStack_c0 = *(float *)(DAT_0040f0e4 + 8) + fStack_d0;
    fStack_bc = *(float *)(DAT_0040f0e4 + 0xc) + -3.0;
    uStack_e8 = CONCAT44(fStack_bc,fStack_c0);
    uStack_d8 = 0;
    uStack_d4 = 0x3f800000;
    uStack_e0 = 0;
    FUN_00266f50(0x3f80000000000000,&uStack_e0,1,&uStack_f0);
  }
  if ((*(float *)(iVar7 + 0x1028c) < DAT_0040f500) &&
     (bVar1 = 200.0 < DAT_0040f500, *(float *)(iVar7 + 0x1028c) = DAT_0040f500, bVar1)) {
    *(undefined4 *)(iVar7 + 0x1028c) = 0x43480000;
  }
  if (*(uint *)(DAT_0040f4c0 + 0xd5f0) < *(uint *)(iVar7 + 0x10290)) {
    *(uint *)(iVar7 + 0x10290) = *(uint *)(DAT_0040f4c0 + 0xd5f0);
  }
  FUN_002662a8();
  return;
}


// ==== FUN_00101f90 @ 00101f90 ====

void FUN_00101f90(void)

{
  FUN_001080c0();
  return;
}


// ==== FUN_00101fb0 @ 00101fb0 ====

/* Strings referenciadas:
     "Resource"
     "Unknown" */

char * FUN_00101fb0(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = FUN_001080c0();
  if (lVar2 == 0) {
    lVar2 = FUN_001080f0();
    if (lVar2 == 0) {
      pcVar1 = "Unknown";
    }
    else {
      pcVar1 = "Resource";
    }
  }
  else {
    pcVar1 = "Main";
  }
  return pcVar1;
}


// ==== FUN_00102000 @ 00102000 ====
// GLOBAL DAT_0040f4c0 int

void FUN_00102000(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00274e40(iVar1 + 0x128);
  FUN_00274e68(iVar1 + 0x128,iVar1 + 0x144,0x4eb000);
  FUN_00271be8(param_1);
  *(undefined4 *)(iVar1 + 0x118) = *(undefined4 *)(DAT_0040f4c0 + 0xd5e4);
  *(undefined4 *)(iVar1 + 0x4eb144) = 1;
  return;
}


// ==== FUN_00102080 @ 00102080 ====

void FUN_00102080(int param_1)

{
  FUN_002722b8();
  FUN_00274ea8(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x4eb144) = 0x39;
  return;
}


// ==== FUN_001020c0 @ 001020c0 ====
// GLOBAL DAT_0040f548 undefined4
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f4d4 undefined4
// GLOBAL DAT_0040f50c undefined4
// GLOBAL DAT_0040f4d8 undefined4
// GLOBAL DAT_0040f0e4 int
// GLOBAL DAT_0040f0e8 int
// GLOBAL DAT_0040f4cc undefined4
// GLOBAL DAT_0040f4bc undefined4
// GLOBAL DAT_0040f514 int
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f508 int
// GLOBAL DAT_0040f518 undefined4
// GLOBAL DAT_0040f51c undefined4
// GLOBAL DAT_0040f4f4 undefined4
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f4f8 undefined4
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_0040f520 undefined4
// GLOBAL DAT_0040f4dc undefined4
// GLOBAL DAT_0040f4e8 undefined4
// GLOBAL DAT_0040f524 undefined4
// GLOBAL DAT_0040f528 undefined4
// GLOBAL DAT_0040f52c undefined4
// GLOBAL DAT_0040f4e4 int
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f530 int
// GLOBAL DAT_0040f504 int
// GLOBAL DAT_0040f534 undefined4
// GLOBAL DAT_0040f538 undefined4
// GLOBAL DAT_0040f53c undefined4
// GLOBAL DAT_0040f4ec undefined4
// GLOBAL DAT_0040f4f0 undefined4
// GLOBAL DAT_0040f4c8 undefined4
// GLOBAL DAT_0040f540 undefined4
// GLOBAL DAT_0040ead8 char
// GLOBAL DAT_0040f54c undefined4
// GLOBAL DAT_003db3b8 undefined
// GLOBAL DAT_003db640 undefined
// GLOBAL DAT_003dc2a8 undefined
// GLOBAL DAT_003dcb38 undefined
// GLOBAL DAT_003dcc60 undefined
// GLOBAL DAT_003e2508 undefined
// GLOBAL DAT_003e2580 undefined
// GLOBAL DAT_003e25b0 undefined

void FUN_001020c0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  *(undefined1 *)(iVar6 + 0x210cc) = 0;
  DAT_0040f548 = FUN_00107cf8(4);
  uVar3 = FUN_00107cf8(0xd600);
  FUN_003826a8(uVar3);
  DAT_0040f4c0 = (undefined4)uVar3;
  uVar3 = FUN_00107cf8(0x22bf0);
  DAT_0040f4d4 = FUN_00382838(uVar3);
  uVar3 = FUN_00107cf8(0x970);
  DAT_0040f50c = FUN_00382d60(uVar3);
  uVar3 = FUN_00107cf8(0x87400);
  DAT_0040f4d8 = FUN_003828d8(uVar3);
  DAT_0040f0e4 = FUN_00107cf8(0x102c0);
  *(undefined **)(DAT_0040f0e4 + 0xa4) = &DAT_003db3b8;
  *(undefined **)(DAT_0040f0e4 + 0x230) = &DAT_003e2580;
  iVar2 = DAT_0040f0e4 + 0x240;
  iVar4 = 0;
  do {
    *(undefined **)(iVar2 + 0x28) = &DAT_003e25b0;
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 0x40;
  } while (iVar4 != -1);
  DAT_0040f0e8 = FUN_00107cf8(0x7c0);
  iVar2 = DAT_0040f0e8 + 0x2c0;
  iVar4 = 1;
  do {
    *(undefined **)(iVar2 + 8) = &DAT_003e2508;
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 0xf0;
  } while (iVar4 != -1);
  DAT_0040f4cc = FUN_00107cf8(0x8b50);
  iVar2 = 0x6c;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0x12;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0x206;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  uVar3 = FUN_00107cf8(0x1680);
  iVar5 = 0x1f;
  DAT_0040f4bc = FUN_00382500(uVar3);
  iVar2 = FUN_00107cf8(0x8530);
  iVar4 = iVar2 + 0x90;
  *(undefined **)(iVar2 + 0x84) = &DAT_003dcc60;
  do {
    iVar5 = iVar5 + -1;
    FUN_00382740(iVar4);
    iVar4 = iVar4 + 0x3c0;
  } while (iVar5 != -1);
  DAT_0040f514 = iVar2;
  DAT_0040f4c4 = FUN_00107cf8(0xe18);
  iVar5 = 7;
  uVar3 = FUN_00107cf8(0xcc08);
  FUN_00382358(uVar3);
  iVar2 = (int)uVar3;
  DAT_0040f510 = iVar2;
  *(undefined **)(iVar2 + 0xcba0) = &DAT_003db640;
  *(undefined1 *)(iVar2 + 0xcbb4) = 0;
  iVar2 = FUN_00107cf8(0x27a0);
  iVar4 = iVar2 + 0x20;
  do {
    iVar5 = iVar5 + -1;
    FUN_00382bf0(iVar4);
    iVar4 = iVar4 + 0x4f0;
  } while (iVar5 != -1);
  DAT_0040f508 = iVar2;
  DAT_0040f518 = FUN_00107cf8(0x240);
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  DAT_0040f51c = FUN_00107cf8(1);
  DAT_0040f4f4 = FUN_00107cf8(0xd8);
  uVar3 = FUN_00107cf8(0x5cb0);
  DAT_0040f4d0 = FUN_00382778(uVar3);
  DAT_0040f4f8 = FUN_00107cf8(0x9c);
  DAT_0040f4e0 = FUN_00107cf8(0xfe0);
  iVar2 = 0x22;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  for (iVar2 = 0xe; iVar2 != -1; iVar2 = iVar2 + -1) {
  }
  uVar3 = FUN_00107cf8(0x3740);
  DAT_0040f520 = FUN_00382e78(uVar3);
  DAT_0040f4dc = FUN_00107cf8(0x10);
  DAT_0040f4e8 = FUN_00107cf8(8);
  DAT_0040f524 = FUN_00107cf8(0x1c);
  DAT_0040f528 = FUN_00107cf8(0x140);
  DAT_0040f52c = FUN_00107cf8(0xf0);
  DAT_0040f4e4 = FUN_00107cf8(0x5860);
  iVar4 = 0x3f;
  iVar2 = DAT_0040f4e4;
  do {
    *(undefined **)(iVar2 + 0x10) = &DAT_003dcb38;
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 0x160;
  } while (iVar4 != -1);
  uVar3 = FUN_00107cf8(0x3960);
  DAT_0040f544 = FUN_00382ee0(uVar3);
  DAT_0040f530 = FUN_00107cf8(0x1a0);
  iVar2 = DAT_0040f530 + 0x20;
  iVar4 = 0;
  do {
    *(undefined **)(iVar2 + 0x10) = &DAT_003dc2a8;
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 0x120;
  } while (iVar4 != -1);
  DAT_0040f504 = FUN_00107cf8(0x170);
  *(undefined **)(DAT_0040f504 + 0x40) = &DAT_003dc2a8;
  DAT_0040f534 = FUN_00107cf8(0x10);
  DAT_0040f538 = FUN_00107cf8(0x10);
  DAT_0040f53c = FUN_00107cf8(0x6b0);
  DAT_0040f4ec = FUN_00107cf8(0x790);
  DAT_0040f4f0 = FUN_00107cf8(0x21b8);
  DAT_0040f4c8 = FUN_00107cf8(0xc);
  DAT_0040f540 = FUN_00107cf8(0xd0);
  FUN_001250d0(DAT_0040f548);
  FUN_00108a40(iVar6 + 0x2014c);
  if (DAT_0040ead8 == '\0') {
    FUN_0027f730(0x1e);
  }
  else {
    FUN_0027f730(0x19);
  }
  iVar4 = 0;
  FUN_0027f790(iVar6 + 0x20120);
  FUN_00107d58(DAT_0040f4f8);
  FUN_001c4f30(DAT_0040f4c0);
  FUN_0020a058(DAT_0040f544);
  FUN_001ab780(DAT_0040f50c);
  FUN_001b19e8(DAT_0040f4d8);
  (**(code **)(*(int *)(DAT_0040f0e4 + 0xa4) + 0xc))
            (DAT_0040f0e4 + *(short *)(*(int *)(DAT_0040f0e4 + 0xa4) + 8));
  FUN_00107010(DAT_0040f0e8);
  FUN_00259da8(DAT_0040f4cc);
  FUN_0010f758(DAT_0040f4bc);
  FUN_001384c8(DAT_0040f514);
  FUN_00107e30(DAT_0040f4c4);
  FUN_001d5828(DAT_0040f510);
  FUN_0016d7f0(DAT_0040f4d4);
  FUN_0011a0a8(DAT_0040f508);
  FUN_001f21e8(DAT_0040f518);
  FUN_001f27f0(DAT_0040f51c);
  FUN_00165cc0(DAT_0040f4f4);
  FUN_0015c970(DAT_0040f4e0);
  FUN_00121de8(DAT_0040f4dc);
  FUN_00122708(DAT_0040f4e8);
  FUN_002050b8(DAT_0040f524);
  FUN_0016ade0(DAT_0040f528);
  FUN_0014d908(DAT_0040f52c);
  FUN_00126200(DAT_0040f4e4);
  FUN_0011a130(DAT_0040f530);
  FUN_0011bf20(DAT_0040f504);
  FUN_0012f388(DAT_0040f534);
  FUN_0012eee8(DAT_0040f538);
  FUN_0010f188(DAT_0040f53c);
  FUN_0010f258(DAT_0040f4ec);
  FUN_0010a870(DAT_0040f4f0);
  FUN_001c2a48(DAT_0040f4c8);
  FUN_00143688(DAT_0040f540);
  FUN_0027c0d8(param_1,0);
  DAT_0040f54c = FUN_00107d20(0x3000);
  iVar2 = iVar6 + 0x21060;
  do {
    FUN_00107e00(iVar2,iVar4);
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0xc;
  } while (iVar4 < 1);
  FUN_001282e0(DAT_0040f4d0);
  FUN_00105848(iVar6 + 0x20210);
  FUN_001041a8(iVar6 + 0x20220);
  FUN_00105308(iVar6 + 0x20f78);
  FUN_00106008(iVar6 + 0x20f90);
  FUN_00106068(iVar6 + 0x20fa0);
  FUN_00106830(iVar6 + 0x20fd8);
  *(int *)(iVar6 + 0x21074) = iVar6 + 0x20210;
  *(undefined4 *)(iVar6 + 0x21084) = 1;
  *(undefined4 *)(iVar6 + 0x21070) = 0;
  *(undefined1 *)(iVar6 + 0x210ca) = 0;
  *(undefined4 *)(iVar6 + 0x21088) = 0;
  *(undefined4 *)(iVar6 + 0x2108c) = 0;
  *(undefined4 *)(iVar6 + 0x21090) = 0;
  *(undefined4 *)(iVar6 + 0x21094) = 0;
  *(undefined4 *)(iVar6 + 0x21098) = 0;
  *(undefined4 *)(iVar6 + 0x2109c) = 0;
  *(undefined1 *)(iVar6 + 0x210c8) = 0;
  *(undefined1 *)(iVar6 + 0x210c9) = 0;
  *(undefined4 *)(iVar6 + 0x210c4) = 0;
  FUN_00107a88(0x40f0f0);
  *(undefined4 *)(iVar6 + 0x21078) = 1;
  *(undefined4 *)(iVar6 + 0x2107c) = 0;
  *(undefined4 *)(iVar6 + 0x21080) = 0;
  *(undefined1 *)(iVar6 + 0x2020c) = 0;
  *(undefined1 *)(iVar6 + 0x2020d) = 0;
  return;
}


// ==== FUN_00102930 @ 00102930 ====
// GLOBAL DAT_0040f548 undefined4
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4c4 int
// GLOBAL DAT_0040f0e4 undefined4
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f0e8 undefined4
// GLOBAL DAT_0040f54c undefined4
// GLOBAL DAT_0040f4e8 undefined4
// GLOBAL DAT_0040f52c undefined4
// GLOBAL null undefined1

/* Strings referenciadas:
     "10.21.92.101"
     "Data/Andy.aku" */

undefined4 FUN_00102930(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  switch(*(undefined4 *)(iVar4 + 0x21078)) {
  case 1:
    break;
  case 2:
    goto switchD_00102974_caseD_2;
  case 3:
    goto switchD_00102974_caseD_3;
  case 4:
    goto switchD_00102974_caseD_4;
  case 5:
    goto switchD_00102974_caseD_5;
  case 6:
    goto switchD_00102974_caseD_6;
  case 7:
    goto switchD_00102974_caseD_7;
  case 8:
    goto switchD_00102974_caseD_8;
  case 9:
    goto switchD_00102974_caseD_9;
  case 10:
    goto switchD_00102974_caseD_a;
  case 0xb:
    goto switchD_00102974_caseD_b;
  case 0xc:
switchD_00102974_caseD_c:
    *(undefined4 *)(iVar4 + 0x21078) = 0x1c;
  case 0x1c:
    uGpffff8195 = 1;
switchD_00102974_caseD_d:
    return 1;
  default:
    goto switchD_00102974_caseD_d;
  }
  FUN_0027f7d0(iVar4 + 0x20120);
  FUN_0027f818(iVar4 + 0x20120);
  FUN_001250c8();
  lVar1 = FUN_00125178(DAT_0040f548);
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar4 + 0x21078) = 2;
switchD_00102974_caseD_2:
  lVar1 = FUN_001d59c8(DAT_0040f510);
  if (lVar1 != 0) {
    *(undefined4 *)(iVar4 + 0x21078) = 3;
switchD_00102974_caseD_3:
    lVar1 = FUN_00107f60(DAT_0040f4c4);
    if (lVar1 != 0) {
      *(undefined4 *)(iVar4 + 0x21078) = 4;
switchD_00102974_caseD_4:
      lVar1 = FUN_00100518(DAT_0040f0e4);
      if (lVar1 != 0) {
        *(undefined4 *)(iVar4 + 0x21078) = 5;
switchD_00102974_caseD_5:
        lVar1 = FUN_001ae3a8(DAT_0040f4c0);
        if (lVar1 != 0) {
          *(undefined4 *)(iVar4 + 0x21078) = 6;
switchD_00102974_caseD_6:
          lVar1 = fe_FEChangePage_0020a338(DAT_0040f544);
          if (lVar1 != 0) {
            fe_FE_HINT_TEXT_00216b68(iVar4 + 0x210a0);
            *(undefined4 *)(iVar4 + 0x21078) = 7;
switchD_00102974_caseD_7:
            lVar1 = fe_FE_CONTROLLERDISCONNECTED_00107020(DAT_0040f0e8);
            if (lVar1 != 0) {
              *(undefined4 *)(iVar4 + 0x21078) = 8;
switchD_00102974_caseD_8:
              lVar1 = FUN_0027c110(param_1,*(undefined4 *)(DAT_0040f4c4 + 0xc80),0x3f2490);
              if (lVar1 != 0) {
                FUN_001d84d0(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
                *(undefined4 *)(iVar4 + 0x21078) = 9;
switchD_00102974_caseD_9:
                lVar1 = FUN_0027c128(param_1,0x3f24a0,0,DAT_0040f54c,0x3000);
                if (lVar1 != 0) {
                  *(undefined4 *)(iVar4 + 0x21078) = 10;
switchD_00102974_caseD_a:
                  lVar1 = FUN_001d59e8(DAT_0040f510);
                  if (lVar1 != 0) {
                    *(undefined4 *)(iVar4 + 0x21078) = 0xb;
switchD_00102974_caseD_b:
                    iVar3 = 0;
                    iVar2 = iVar4 + 0x21060;
                    do {
                      iVar3 = iVar3 + -1;
                      FUN_00107e10(iVar2);
                      iVar2 = iVar2 + 0xc;
                    } while (-1 < iVar3);
                    FUN_00122738(DAT_0040f4e8);
                    FUN_0014d910(DAT_0040f52c);
                    *(undefined4 *)(iVar4 + 0x21078) = 0xc;
                    *(undefined1 *)(iVar4 + 0x210cb) = 1;
                    *(undefined4 *)(iVar4 + 0x21088) = 0;
                    *(undefined4 *)(iVar4 + 0x2108c) = 0;
                    goto switchD_00102974_caseD_c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ==== FUN_00102bd0 @ 00102bd0 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f0e8 undefined4
// GLOBAL DAT_0040f0e4 int
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f510 undefined4
// GLOBAL DAT_0040f4f0 undefined4
// GLOBAL DAT_0040f550 undefined4
// GLOBAL DAT_0040f4dc undefined4
// GLOBAL DAT_0040f530 undefined4
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_0040f4c0 int
// GLOBAL null char

void FUN_00102bd0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_90 [16];
  
  FUN_0027f778();
  FUN_0027f890(DAT_0040f4d0);
  iVar4 = (int)param_1;
  FUN_0027f890(iVar4 + 0x20120);
  if (cGpffff8195 == '\0') {
    iVar3 = 0;
    FUN_00107228(DAT_0040f0e8);
    iVar2 = iVar4 + 0x21060;
    do {
      iVar3 = iVar3 + -1;
      FUN_00107e20(*(undefined4 *)(DAT_0040f4d0 + 0x1c),iVar2);
      iVar2 = iVar2 + 0xc;
    } while (-1 < iVar3);
  }
  else {
    cGpffff8195 = '\0';
  }
  iVar2 = *(int *)(iVar4 + 0x21084);
  if (iVar2 == 1) {
    FUN_0020b2b0(DAT_0040f544);
    lVar1 = FUN_001036f0(param_1);
    if (lVar1 == 0) {
      if ((*(int *)(iVar4 + 0x21074) == iVar4 + 0x20210) ||
         (*(int *)(iVar4 + 0x21074) == iVar4 + 0x20220)) {
        FUN_001031f8(param_1);
      }
      else {
        FUN_001032a8(param_1);
      }
    }
    else {
      FUN_001d5c30(DAT_0040f510,0);
      *(undefined4 *)(iVar4 + 0x21084) = 0;
      FUN_00107880(DAT_0040f0e8);
      FUN_001078f0(DAT_0040f0e8,0);
    }
    FUN_001d5b78(DAT_0040f510);
    FUN_0010b018(DAT_0040f4f0);
  }
  else if (iVar2 < 2) {
    if (iVar2 != 0) {
      iVar2 = *(int *)(DAT_0040f0e4 + 0xa4);
      goto LAB_00102ee0;
    }
    iVar2 = *(int *)(*(int *)(iVar4 + 0x21070) + 8);
    (**(code **)(iVar2 + 0x14))(*(int *)(iVar4 + 0x21070) + (int)*(short *)(iVar2 + 0x10));
    FUN_0020b2b0(DAT_0040f544);
    FUN_00129360(DAT_0040f4d0);
    FUN_001d5b78(DAT_0040f510);
    FUN_0010b018(DAT_0040f4f0);
    FUN_00121e28(*(undefined4 *)(DAT_0040f4d0 + 0x1c),DAT_0040f4dc);
    FUN_0011a270(DAT_0040f530);
    (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x1c))
              (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x18));
    FUN_002b4e80();
    FUN_00274540();
    iVar2 = *(int *)(*(int *)(iVar4 + 0x21070) + 8);
    (**(code **)(iVar2 + 0x1c))(*(int *)(iVar4 + 0x21070) + (int)*(short *)(iVar2 + 0x18));
  }
  else if (iVar2 == 2) {
    lVar1 = FUN_001037a8(param_1);
    if (lVar1 != 0) {
      *(undefined4 *)(iVar4 + 0x21084) = 1;
      DAT_0040f550 = *(undefined4 *)(iVar4 + 0x20140);
    }
    FUN_0020b2b0(DAT_0040f544);
    FUN_001d5b78(DAT_0040f510);
    FUN_0010b018(DAT_0040f4f0);
    FUN_001031f8(param_1);
  }
  else if (iVar2 == 3) {
    FUN_002b4e80();
    FUN_00274540();
    iVar2 = DAT_0040f4c0;
    memset(auStack_90,0,4);
    FUN_002a9108(*(undefined4 *)(iVar2 + 0xd3b8),auStack_90,3);
    FUN_001c4fb0(DAT_0040f4c0,0);
    FUN_0020b170(DAT_0040f544);
    FUN_001c50e0(DAT_0040f4c0);
  }
  iVar2 = *(int *)(DAT_0040f0e4 + 0xa4);
LAB_00102ee0:
  (**(code **)(iVar2 + 0x14))(DAT_0040f0e4 + *(short *)(iVar2 + 0x10));
  FUN_00124e90(param_1);
  if (*(char *)(iVar4 + 0x210cc) != '\0') {
    FUN_00107a00(DAT_0040f0e8);
  }
  FUN_001c4fb0(DAT_0040f4c0,0);
  FUN_001c50e0(DAT_0040f4c0);
  FUN_001c4d28(DAT_0040f4c0);
  FUN_0027c1a0(param_1);
  FUN_00102f68(param_1);
  return;
}


// ==== FUN_00102f68 @ 00102f68 ====
// GLOBAL DAT_0040f510 undefined4
// GLOBAL DAT_0040f4dc undefined4_*
// GLOBAL DAT_0040f0e8 undefined4
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f4d0 int

void FUN_00102f68(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x2109c) = *(undefined4 *)(iVar3 + 0x21098);
  if (*(long *)(iVar3 + 0x21090) == 0x200000002) {
    uVar1 = 1;
    *(undefined4 *)(iVar3 + 0x21094) = 1;
  }
  else {
    uVar1 = *(undefined4 *)(iVar3 + 0x21094);
  }
  *(undefined4 *)(iVar3 + 0x21090) = uVar1;
  if (*(int *)(iVar3 + 0x21088) == 1) {
    *(undefined1 *)(iVar3 + 0x210c8) = 1;
    FUN_001d5c30(DAT_0040f510,1);
    *(undefined1 *)*DAT_0040f4dc = 0;
    FUN_001078f0(DAT_0040f0e8,1);
    if (*(char *)(iVar3 + 0x210cb) == '\0') {
LAB_0010305c:
      *(undefined4 *)(iVar3 + 0x21088) = 0;
    }
    else {
      FUN_0020ae20(DAT_0040f544);
      *(undefined4 *)(iVar3 + 0x21088) = 0;
    }
  }
  else if (*(int *)(iVar3 + 0x21088) == 2) {
    *(undefined1 *)(iVar3 + 0x210c8) = 0;
    FUN_001d5c30(DAT_0040f510,0);
    *(undefined1 *)*DAT_0040f4dc = 1;
    FUN_001078f0(DAT_0040f0e8,0);
    goto LAB_0010305c;
  }
  if (*(int *)(iVar3 + 0x2108c) == 1) {
    *(undefined1 *)(iVar3 + 0x210c9) = 1;
    FUN_001d5c30(DAT_0040f510,1);
    *(undefined1 *)*DAT_0040f4dc = 0;
  }
  else {
    if (*(int *)(iVar3 + 0x2108c) != 2) goto LAB_001030cc;
    *(undefined1 *)(iVar3 + 0x210c9) = 0;
    FUN_001d5c30(DAT_0040f510,0);
    *(undefined1 *)*DAT_0040f4dc = 1;
  }
  *(undefined4 *)(iVar3 + 0x2108c) = 0;
LAB_001030cc:
  lVar2 = FUN_001038a8(param_1);
  if ((lVar2 == 0) || (*(char *)(DAT_0040f4d0 + 0x28) == '\0')) {
    lVar2 = FUN_001038a8(param_1);
    if ((lVar2 == 0) &&
       ((*(char *)(DAT_0040f4d0 + 0x28) == '\0' && (*(int *)(iVar3 + 0x2109c) != 3)))) {
      FUN_0027f818(DAT_0040f4d0);
    }
  }
  else {
    FUN_0027f858();
  }
  return;
}


// ==== FUN_00103158 @ 00103158 ====

undefined4 FUN_00103158(int param_1)

{
  FUN_002174e0(param_1 + 0x210a0);
  *(undefined4 *)(param_1 + 0x21080) = 0;
  *(undefined4 *)(param_1 + 0x2107c) = 0;
  return 1;
}


// ==== FUN_001031a0 @ 001031a0 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_001031a0(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x21060;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + -1;
    FUN_00107e28(param_1);
    param_1 = param_1 + 0xc;
  } while (-1 < iVar1);
  FUN_0012a0d8(DAT_0040f4d0);
  return;
}


// ==== FUN_001031f8 @ 001031f8 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f0e8 undefined4
// GLOBAL DAT_0040f544 undefined4

void FUN_001031f8(int param_1)

{
  int iVar1;
  undefined1 auStack_50 [16];
  
  iVar1 = DAT_0040f4c0;
  memset(auStack_50,0,4);
  FUN_002a9108(*(undefined4 *)(iVar1 + 0xd3b8),auStack_50,3);
  FUN_00274540();
  if (*(char *)(param_1 + 0x210cc) != '\0') {
    FUN_00107a00(DAT_0040f0e8);
  }
  FUN_001c4fb0(DAT_0040f4c0,0);
  FUN_0020b170(DAT_0040f544);
  FUN_001c50e0(DAT_0040f4c0);
  FUN_00271480();
  return;
}


// ==== FUN_001032a8 @ 001032a8 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f0e8 undefined4
// GLOBAL DAT_0040f544 undefined4

void FUN_001032a8(int param_1)

{
  int iVar1;
  undefined1 auStack_50 [16];
  
  iVar1 = DAT_0040f4c0;
  memset(auStack_50,0,4);
  FUN_002a9108(*(undefined4 *)(iVar1 + 0xd3b8),auStack_50,3);
  FUN_00274540();
  if (*(char *)(param_1 + 0x210cc) != '\0') {
    FUN_00107a00(DAT_0040f0e8);
  }
  FUN_001c4fb0(DAT_0040f4c0,0);
  FUN_0020b170(DAT_0040f544);
  FUN_001c50e0(DAT_0040f4c0);
  FUN_00271480();
  return;
}


// ==== FUN_00103358 @ 00103358 ====

int FUN_00103358(int param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)**(byte **)(param_1 + 0x2106c);
  iVar3 = 0;
  if (uVar2 != 0) {
    iVar1 = *(int *)(*(byte **)(param_1 + 0x2106c) + 4);
    do {
      iVar3 = iVar3 + 1;
      if (*(byte *)(iVar1 + 0x10) == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 0x24;
    } while (iVar3 < (int)uVar2);
  }
  return 0;
}


// ==== FUN_001033a0 @ 001033a0 ====

int FUN_001033a0(int param_1,char param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)**(byte **)(param_1 + 0x2106c);
  iVar3 = 0;
  if (uVar1 != 0) {
    iVar2 = *(int *)(*(byte **)(param_1 + 0x2106c) + 4);
    do {
      if (*(char *)(iVar2 + 0x10) == param_2) {
        iVar3 = iVar2;
      }
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 0x24;
    } while (uVar1 != 0);
  }
  uVar1 = 0;
  if (*(byte *)(iVar3 + 0x20) != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(iVar3 + 0x14);
      if (*(char *)(iVar2 + 0x58) == param_3) {
        return iVar2;
      }
      uVar1 = uVar1 + 1 & 0xff;
      iVar2 = uVar1 * 0x60;
    } while (uVar1 < *(byte *)(iVar3 + 0x20));
  }
  uVar1 = 0;
  if (*(byte *)(iVar3 + 0x21) != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(iVar3 + 0x18);
      if (*(char *)(iVar2 + 0x58) == param_3) {
        return iVar2;
      }
      uVar1 = uVar1 + 1 & 0xff;
      iVar2 = uVar1 * 0x60;
    } while (uVar1 < *(byte *)(iVar3 + 0x21));
  }
  uVar1 = 0;
  if (*(byte *)(iVar3 + 0x22) != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(iVar3 + 0x1c);
      if (*(char *)(iVar2 + 0x58) == param_3) {
        return iVar2;
      }
      uVar1 = uVar1 + 1 & 0xff;
      iVar2 = uVar1 * 0x60;
    } while (uVar1 < *(byte *)(iVar3 + 0x22));
  }
  return 0;
}


// ==== FUN_001034b0 @ 001034b0 ====
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f0e0 int

/* Strings referenciadas:
     "Loading_screen" */

void FUN_001034b0(int param_1,int param_2)

{
  int iVar1;
  
  fe_FECurrentLevelId_0020b0c0(DAT_0040f544);
  FUN_00216f08(param_1 + 0x210a0);
  if ((*(int *)(param_1 + 0x210c4) == 0) || (*(int *)(param_1 + 0x210c4) == 1)) {
    FUN_0020b678(DAT_0040f544,0x3f2520,5);
    *(int *)(param_1 + 0x210c4) = *(int *)(param_1 + 0x210c4) + 1;
  }
  else {
    FUN_0020b678(DAT_0040f544,0x3f2520,5);
    *(undefined4 *)(param_1 + 0x210c4) = 0;
  }
  if (param_2 == DAT_0040f0e0 + 0x20f78) {
    fe_FE_COMPLETEALLPRIMARYOBJECTIVES_00217010(param_1 + 0x210a0);
  }
  *(int *)(param_1 + 0x21074) = param_2;
  *(undefined1 *)(param_1 + 0x210cb) = 1;
  *(undefined4 *)(param_1 + 0x21084) = 2;
  *(undefined1 *)(param_1 + 0x210c8) = 0;
  iVar1 = DAT_0040f544;
  *(undefined1 *)(DAT_0040f544 + 0x394c) = 1;
  *(undefined4 *)(iVar1 + 0x3948) = 0x3f800000;
  return;
}


// ==== FUN_001035d0 @ 001035d0 ====
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f0e0 int

/* Strings referenciadas:
     "Loading_screen" */

void FUN_001035d0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x21074) = *(undefined4 *)(param_1 + 0x21070);
  fe_FECurrentLevelId_0020b0c0(DAT_0040f544);
  FUN_00216f08(param_1 + 0x210a0);
  if ((*(int *)(param_1 + 0x210c4) == 0) || (*(int *)(param_1 + 0x210c4) == 1)) {
    FUN_0020b678(DAT_0040f544,0x3f2520,5);
    *(int *)(param_1 + 0x210c4) = *(int *)(param_1 + 0x210c4) + 1;
  }
  else {
    FUN_0020b678(DAT_0040f544,0x3f2520,5);
    *(undefined4 *)(param_1 + 0x210c4) = 0;
  }
  if (*(int *)(param_1 + 0x21070) == DAT_0040f0e0 + 0x20f78) {
    fe_FE_COMPLETEALLPRIMARYOBJECTIVES_00217010(param_1 + 0x210a0);
  }
  *(undefined1 *)(param_1 + 0x210c8) = 0;
  *(undefined1 *)(param_1 + 0x210cb) = 1;
  *(undefined4 *)(param_1 + 0x21088) = 0;
  *(undefined4 *)(param_1 + 0x2108c) = 0;
  *(undefined4 *)(param_1 + 0x21098) = 0;
  *(undefined4 *)(param_1 + 0x2109c) = 0;
  iVar1 = DAT_0040f544;
  *(undefined4 *)(DAT_0040f544 + 0x3948) = 0x3f800000;
  *(undefined1 *)(iVar1 + 0x394c) = 1;
  *(undefined4 *)(param_1 + 0x21084) = 1;
  return;
}


// ==== FUN_001036f0 @ 001036f0 ====
// GLOBAL DAT_0040f544 char_*

undefined4 FUN_001036f0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar4 + 0x21074) + 8);
  lVar3 = (**(code **)(iVar1 + 0xc))(*(int *)(iVar4 + 0x21074) + (int)*(short *)(iVar1 + 8));
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_0020b988(DAT_0040f544,5);
    FUN_0020b988(DAT_0040f544,6);
    iVar1 = *(int *)(iVar4 + 0x21074);
    *(undefined4 *)(iVar4 + 0x21074) = 0;
    *(int *)(iVar4 + 0x21070) = iVar1;
    if (*DAT_0040f544 != '\0') {
      if (iVar1 != iVar4 + 0x20f78) {
        return 1;
      }
      FUN_00103800(param_1,1);
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_001037a8 @ 001037a8 ====

bool FUN_001037a8(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x21070) + 8);
  lVar2 = (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x21070) + (int)*(short *)(iVar1 + 0x20));
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x21084) = 1;
  }
  return lVar2 != 0;
}


// ==== FUN_00103800 @ 00103800 ====

void FUN_00103800(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x210cb) = param_2;
  *(undefined4 *)(param_1 + 0x21088) = 1;
  return;
}


// ==== FUN_00103818 @ 00103818 ====

void FUN_00103818(int param_1)

{
  *(undefined4 *)(param_1 + 0x21088) = 2;
  return;
}


// ==== FUN_00103830 @ 00103830 ====

void FUN_00103830(int param_1)

{
  *(undefined4 *)(param_1 + 0x2108c) = 1;
  return;
}


// ==== FUN_00103848 @ 00103848 ====

void FUN_00103848(int param_1)

{
  *(undefined4 *)(param_1 + 0x2108c) = 2;
  return;
}


// ==== FUN_00103860 @ 00103860 ====

undefined1 FUN_00103860(int param_1)

{
  return *(undefined1 *)(param_1 + 0x210c9);
}


// ==== FUN_00103870 @ 00103870 ====

undefined1 FUN_00103870(int param_1)

{
  return *(undefined1 *)(param_1 + 0x210c8);
}


// ==== FUN_00103890 @ 00103890 ====

bool FUN_00103890(int param_1)

{
  return *(int *)(param_1 + 0x21090) == 1;
}


// ==== FUN_001038a8 @ 001038a8 ====

undefined4 FUN_001038a8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00103870();
  if (((lVar1 == 0) && (lVar1 = FUN_00103890(param_1), lVar1 == 0)) &&
     (lVar1 = FUN_00103860(param_1), lVar1 == 0)) {
    return 0;
  }
  return 1;
}


// ==== FUN_00103908 @ 00103908 ====

undefined4 FUN_00103908(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2109c);
}


// ==== FUN_00103918 @ 00103918 ====

void FUN_00103918(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x21098) = param_2;
  return;
}


// ==== FUN_00103990 @ 00103990 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040eadc int
// GLOBAL DAT_0040f544 int
// GLOBAL null undefined1

/* Strings referenciadas:
     "FMVPlayer" */

void FUN_00103990(void)

{
  int iVar1;
  
  DAT_0040eadc = DAT_0040f0e0 + 0x20f78;
  uGpffff92f0 = 1;
  FUN_00216af0(0x103db0);
  FUN_0020e118(DAT_0040f0e0 + 0x20260,1);
  iVar1 = DAT_0040f544;
  strcpy(DAT_0040f544 + 0x3820,0x3f2698);
  if (*(char *)(iVar1 + 0x3840) == '\0') {
    *(undefined4 *)(iVar1 + 0x388c) = 1;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3884) = 1;
  }
  return;
}


// ==== FUN_00103a28 @ 00103a28 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f4e8 undefined4
// GLOBAL null undefined1

/* Strings referenciadas:
     "FMVPlayer" */

void FUN_00103a28(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = DAT_0040f544;
  if (*(char *)(DAT_0040f0e0 + 0x2020c) == '\b') {
    lVar1 = FUN_001227c0(DAT_0040f4e8);
    iVar2 = DAT_0040f544;
    if (lVar1 == 2) {
      uGpffff92f0 = 0;
      FUN_0035d1a0(0x48ef88,param_1,0x1e);
      FUN_00216af0(0x103f50);
      FUN_0020e118(DAT_0040f0e0 + 0x20260,0);
      FUN_0020b678(DAT_0040f544,0x3f2698,4);
      return;
    }
    strcpy(DAT_0040f544 + 0x3820,param_1);
    if (*(char *)(iVar2 + 0x3840) != '\0') {
      *(undefined4 *)(iVar2 + 0x3884) = 1;
      return;
    }
  }
  else {
    strcpy(DAT_0040f544 + 0x3820,param_1);
    if (*(char *)(iVar2 + 0x3840) != '\0') {
      *(undefined4 *)(iVar2 + 0x3884) = 1;
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x388c) = 1;
  return;
}


// ==== FUN_00103b38 @ 00103b38 ====
// GLOBAL DAT_0040f0e0 int

void FUN_00103b38(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00123c90(0x48efa8,0,0);
  if ((((*piVar1 == -1) && (piVar1 = (int *)FUN_00123c90(0x48efa8,0,1), *piVar1 == -1)) &&
      (piVar1 = (int *)FUN_00123c90(0x48efa8,0,2), *piVar1 == -1)) &&
     (piVar1 = (int *)FUN_00123c90(0x48efa8,0,3), *piVar1 == -1)) {
    return;
  }
  FUN_001050a8(DAT_0040f0e0 + 0x20220,0);
  return;
}


// ==== FUN_00103c28 @ 00103c28 ====
// GLOBAL DAT_0040f544 int

/* Strings referenciadas:
     "BlackIntroSequence" */

void FUN_00103c28(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00123c90(0x48efa8,0,0);
  if ((((*piVar2 == -1) && (piVar2 = (int *)FUN_00123c90(0x48efa8,0,1), *piVar2 == -1)) &&
      (piVar2 = (int *)FUN_00123c90(0x48efa8,0,2), *piVar2 == -1)) &&
     (piVar2 = (int *)FUN_00123c90(0x48efa8,0,3), *piVar2 == -1)) {
    return;
  }
  iVar1 = DAT_0040f544;
  strcpy(DAT_0040f544 + 0x3820,0x3f26a8);
  if (*(char *)(iVar1 + 0x3840) == '\0') {
    *(undefined4 *)(iVar1 + 0x388c) = 1;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3884) = 1;
  }
  return;
}


// ==== FUN_00103db0 @ 00103db0 ====
// GLOBAL DAT_0040eae0 char
// GLOBAL DAT_0040f0e0 undefined4
// GLOBAL DAT_0040eadc undefined4

void FUN_00103db0(long param_1)

{
  if ((param_1 == 0) || (DAT_0040eae0 != '\0')) {
    FUN_001034b0(DAT_0040f0e0,DAT_0040eadc);
  }
  return;
}


// ==== FUN_00103df0 @ 00103df0 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_003bc50c int
// GLOBAL DAT_0040ead8 char
// GLOBAL DAT_0040f544 int
// GLOBAL PTR_s__NONE__003bc3c8 pointer

/* Strings referenciadas:
     "SMG_%s" */

void FUN_00103df0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  
  if ((*(char *)(DAT_0040f0e0 + 0x20440) == '\0') && (param_1 == 0)) {
    DAT_003bc50c = DAT_003bc50c + 1;
    if (0x1a < DAT_003bc50c) {
      DAT_003bc50c = 0x17;
    }
    if (DAT_0040ead8 == '\0') {
      iVar1 = DAT_003bc50c * 3;
      uVar2 = FUN_00108a20();
      sprintf(auStack_50,(&PTR_s__NONE__003bc3c8)[iVar1],0x40d998,uVar2);
    }
    else {
      iVar1 = DAT_003bc50c * 3;
      uVar2 = FUN_00108a20();
      sprintf(auStack_50,(&PTR_s__NONE__003bc3c8)[iVar1],0x40d990,uVar2);
    }
    FUN_001040d8(DAT_0040f0e0 + 0x20220,auStack_50,0,0);
  }
  else {
    FUN_0010a848(DAT_0040f0e0 + 0x20438);
    iVar1 = DAT_0040f544;
    strcpy(DAT_0040f544 + 0x3820,0x48ef88);
    if (*(char *)(iVar1 + 0x3840) == '\0') {
      *(undefined4 *)(iVar1 + 0x388c) = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3884) = 1;
    }
  }
  return;
}


// ==== FUN_00103f50 @ 00103f50 ====
// GLOBAL DAT_0040eae0 char
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f544 int

/* Strings referenciadas:
     "FMVPlayer" */

void FUN_00103f50(long param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (DAT_0040eae0 != '\0')) {
    FUN_00216af0(0x103df0);
    FUN_001040f8(DAT_0040f0e0 + 0x20220,0x15,0);
    FUN_00109ff8(DAT_0040f0e0 + 0x20438);
    iVar1 = DAT_0040f544;
    strcpy(DAT_0040f544 + 0x3820,0x3f2698);
    if (*(char *)(iVar1 + 0x3840) == '\0') {
      *(undefined4 *)(iVar1 + 0x388c) = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3884) = 1;
    }
  }
  return;
}


// ==== FUN_00103ff0 @ 00103ff0 ====
// GLOBAL DAT_0040eae0 char
// GLOBAL DAT_0040f544 int

void FUN_00103ff0(long param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040f544;
  if ((param_1 == 0) || (DAT_0040eae0 != '\0')) {
    strcpy(DAT_0040f544 + 0x3820,0x48ef88);
    if (*(char *)(iVar1 + 0x3840) == '\0') {
      *(undefined4 *)(iVar1 + 0x388c) = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3884) = 1;
    }
  }
  return;
}


// ==== FUN_00104050 @ 00104050 ====
// GLOBAL DAT_0040f544 undefined4

void FUN_00104050(void)

{
  FUN_0020b8e8(DAT_0040f544);
  return;
}


// ==== FUN_00104078 @ 00104078 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_003bc3cc undefined4

void FUN_00104078(undefined8 param_1)

{
  FUN_001040d8(DAT_0040f0e0 + 0x20220,param_1,DAT_003bc3cc,*(int *)(DAT_0040f0e0 + 0x20430) != 0);
  return;
}


// ==== FUN_001040c0 @ 001040c0 ====
// GLOBAL DAT_0040f0e0 int

undefined4 FUN_001040c0(void)

{
  return *(undefined4 *)(DAT_0040f0e0 + 0x20f70);
}


// ==== FUN_001040d8 @ 001040d8 ====

void FUN_001040d8(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_001094c0(param_1 + 0x4c,param_2,param_3,param_4 != 0);
  return;
}


// ==== FUN_001040f8 @ 001040f8 ====

void FUN_001040f8(int param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_1 + 0x20c) = param_2;
  *(uint *)(param_1 + 0x210) = (uint)(param_3 != 0);
  return;
}


// ==== FUN_00104108 @ 00104108 ====
// GLOBAL DAT_0040f4c4 undefined4

void FUN_00104108(void)

{
  undefined8 uVar1;
  
  FUN_00108668(DAT_0040f4c4,2);
  FUN_00107b18(0x40f0f0,2,0);
  FUN_00107ab8(0x40f0f0,2,0);
  uVar1 = FUN_00107cf8(0x4eb148);
  FUN_00102000(uVar1);
  FUN_00108540(DAT_0040f4c4,5,uVar1,0);
  FUN_00107b08(0x40f0f0,2,0);
  return;
}


// ==== FUN_001041a8 @ 001041a8 ====
// GLOBAL DAT_0040f544 undefined4

void FUN_001041a8(undefined4 *param_1)

{
  param_1[0x354] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x353) = 0;
  FUN_00109640(param_1 + 0x13);
  FUN_00109fb0(param_1 + 0x86);
  FUN_0020ccf8(DAT_0040f544,param_1 + 0x13);
  *(undefined1 *)((int)param_1 + 0xd4d) = 0;
  *param_1 = 1;
  return;
}


// ==== fe_FECurrentFmv_00104210 @ 00104210 ====
// GLOBAL DAT_0040f524 undefined4
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f0e8 undefined4
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040d986 char
// GLOBAL DAT_0040f510 int
// GLOBAL PTR_s_ProgScanSelect_003bc3c0 undefined_*
// GLOBAL DAT_0040f0e0 int
// GLOBAL PTR_s_ResultsScreen_003bc3b4 undefined_*
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_004432e0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "ResultsScreen"
     "ProgScanSelect"
     "FECurrentFmv"
     "FELoopFmv"
     "StartGame"
     "StartMainMenu"
     "SkipIntroCredits"
     "StartMainMenuSkip"
     "StartVideo"
     "StartVideoPage"
     "StartNewMission"
     "ResultsEasy" */

undefined4 fe_FECurrentFmv_00104210(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1;
  switch(*puVar5) {
  case 1:
  case 0x37:
    puVar5[0x11] = 0;
    FUN_00205170(DAT_0040f524);
    *puVar5 = 2;
  case 2:
    iVar4 = DAT_0040f544;
    if (*(float *)(DAT_0040f544 + 0x3948) <= 0.0) {
      *(undefined1 *)(DAT_0040f544 + 0x394c) = 1;
      *(undefined4 *)(iVar4 + 0x3948) = 0x3f800000;
    }
    FUN_00107880(DAT_0040f0e8);
    lVar1 = FUN_00108458(DAT_0040f4c4,5,0);
    puVar5[0x354] = (int)lVar1;
    if (lVar1 == 0) {
      FUN_001080a0(DAT_0040f4c4,0x104108,0);
    }
    else {
      FUN_001084a8(DAT_0040f4c4,5,0);
    }
    *puVar5 = 3;
  case 3:
    lVar1 = FUN_00108458(DAT_0040f4c4,5,0);
    puVar5[0x354] = (int)lVar1;
    if (lVar1 == 0) {
switchD_00104250_caseD_8:
      return 0;
    }
    *puVar5 = 4;
  case 4:
    lVar1 = FUN_00109760(puVar5 + 0x13,puVar5[0x354],puVar5[0x354] + 0x128);
    if (lVar1 == 0) {
      return 0;
    }
    *puVar5 = 5;
  case 5:
    lVar1 = FUN_0020ab20(DAT_0040f544);
    if (lVar1 == 0) {
      return 0;
    }
    *(undefined1 *)(DAT_0040f544 + 0x390f) = 1;
    if (*(char *)(puVar5 + 0x353) == '\0') {
      DAT_0040d986 = '\x01';
      uVar2 = FUN_0020bc00(DAT_0040f544,2);
      puVar5[0x82] = 0;
      puVar5[0x83] = 0;
      puVar5[0x84] = 0;
      uVar3 = FUN_0027c278(0x3f26c0);
      FUN_00209ec8(uVar2,uVar3,puVar5 + 0x83);
      uVar3 = FUN_0027c278(0x3f26d0);
      FUN_00209ec8(uVar2,uVar3,puVar5 + 0x84);
      FUN_00209618(DAT_0040f544 + 4,0x3f26e0,0x103990);
      FUN_00209618(DAT_0040f544 + 4,0x3f26f0,0x103bf8);
      FUN_00209618(DAT_0040f544 + 4,0x3f2700,0x103c28);
      FUN_00209618(DAT_0040f544 + 4,0x3f2718,0x103b38);
      FUN_00209618(DAT_0040f544 + 4,0x3f2730,0x104078);
      FUN_00209618(DAT_0040f544 + 4,0x3f2740,0x103d08);
      FUN_00209618(DAT_0040f544 + 4,0x3f2750,0x103930);
      fe_FE_COUNT_0020e200(puVar5 + 3);
      fe_FELevelUnlocked1_0020eac8(puVar5 + 4);
      fe_FEInvertLookFlag_002109e0(puVar5 + 5);
      fe_FESFXVolume_00211ac0(puVar5 + 6);
      fe_FEPictureOutputType_00211f80(puVar5 + 7);
      fe_FEDifficulty_00212190(puVar5 + 8);
      fe_FE_CURRENTDIFFICULTY_00212528(puVar5 + 9);
      fe_FECurrentRewardType_00217670(puVar5 + 10);
      fe_FE_RANKCHANGE_002133c0(puVar5 + 0xb);
      fe_FE_CURRENTCHALLENGELEVEL_002134f8(puVar5 + 0xc);
      fe_FE_NOMEDALAWARDED_00214408(puVar5 + 0xd);
      fe_FE_MemcardOptionSelected_00214cf8(puVar5 + 0xe);
      fe_FE_PLAYERNAME_002162c8(puVar5 + 0xf);
      FUN_00216a98(puVar5 + 0x10);
      *(undefined1 *)(puVar5 + 0x353) = 1;
    }
    *puVar5 = 6;
  case 6:
    break;
  case 7:
    goto switchD_00104250_caseD_7;
  default:
    goto switchD_00104250_caseD_8;
  case 0x1c:
    goto switchD_00104250_caseD_1c;
  }
  lVar1 = FUN_001e87a0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),1);
  iVar4 = DAT_0040f544;
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(DAT_0040f544 + 0x3948) = 0x3f800000;
  *(undefined1 *)(iVar4 + 0x394c) = 0;
  *puVar5 = 7;
switchD_00104250_caseD_7:
  iVar4 = DAT_0040f544;
  if (0.0 < *(float *)(DAT_0040f544 + 0x3948)) {
    return 0;
  }
  *(undefined1 *)(DAT_0040f544 + 0x394c) = 1;
  *(undefined4 *)(iVar4 + 0x3948) = 0x3f800000;
  if (DAT_0040d986 == '\0') {
    FUN_002052a0(DAT_0040f524,1);
  }
  else {
    iVar4 = puVar5[0x12];
    if (iVar4 == 0) {
      lVar1 = FUN_0020e620(puVar5 + 3);
      if (lVar1 == 0) {
        iVar4 = puVar5[0x12];
        if (iVar4 != 0) goto LAB_001045f0;
        FUN_00215788(0);
      }
      else {
        FUN_001050a8(param_1,PTR_s_ProgScanSelect_003bc3c0);
      }
    }
    else {
LAB_001045f0:
      if (iVar4 == 3) {
        if (*(int *)(DAT_0040f0e0 + 0x2014c) == 0) {
          FUN_00103a28(0x3f2760);
        }
        else {
          FUN_00103a28(PTR_s_ResultsScreen_003bc3b4);
        }
      }
      else {
        FUN_001050a8(param_1,*(undefined4 *)(iVar4 * 4 + 0x3bc3a8));
      }
    }
  }
  puVar5[0x352] = 0;
  *puVar5 = 0x1c;
switchD_00104250_caseD_1c:
  FUN_001aebb0(DAT_0040f4c0,_DAT_004432e0);
  return 1;
}


// ==== FUN_001046b0 @ 001046b0 ====
// GLOBAL DAT_0040d986 char
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040ead8 char
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040eae4 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040eae0 undefined1
// GLOBAL DAT_0040f524 undefined4
// GLOBAL PTR_s__NONE__003bc3c8 pointer
// GLOBAL DAT_003bc3cc undefined4
// GLOBAL DAT_003bc3d0 undefined

/* Strings referenciadas:
     "blacktitlemenu"
     "FMVPlayer"
     "FmvHasFinished" */

void FUN_001046b0(undefined8 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  char acStack_80 [16];
  
  iVar7 = (int)param_1;
  if (DAT_0040d986 != '\0') {
    FUN_0020e338(iVar7 + 0xc);
    iVar3 = *(int *)(iVar7 + 0x20c);
    if (*(int *)(iVar7 + 0x208) != iVar3) {
      if (iVar3 == 0) {
        FUN_00109550(iVar7 + 0x4c);
        iVar3 = *(int *)(iVar7 + 0x20c);
      }
      else {
        if (iVar3 == 2) {
          uVar4 = *(undefined4 *)(DAT_0040f0e0 + 0x2014c);
          piVar2 = (int *)FUN_00123c90(0x48efa8,7,uVar4);
          if (*piVar2 < 1) {
            lVar5 = FUN_00123bd0(0x48efa8,7,uVar4);
            iVar3 = 0x1a;
            if (lVar5 == 0) {
              lVar5 = FUN_00123bd0(0x48efa8,6,uVar4);
              iVar3 = 0x1a;
              if (lVar5 == 0) {
                lVar5 = FUN_00123bd0(0x48efa8,5,uVar4);
                iVar3 = 0x19;
                if (lVar5 == 0) {
                  lVar5 = FUN_00123bd0(0x48efa8,4,uVar4);
                  iVar3 = 0x19;
                  if (lVar5 == 0) {
                    lVar5 = FUN_00123bd0(0x48efa8,3,uVar4);
                    iVar3 = 0x18;
                    if (lVar5 == 0) {
                      lVar5 = FUN_00123bd0(0x48efa8,2,uVar4);
                      iVar3 = 0x18;
                      if (lVar5 == 0) {
                        iVar3 = 0x17;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            iVar3 = FUN_0012d158(DAT_0040f4d0,0,3);
            iVar3 = iVar3 + 0x17;
          }
        }
        if (DAT_0040ead8 == '\0') {
          uVar6 = FUN_00108a20();
          sprintf(acStack_80,(&PTR_s__NONE__003bc3c8)[iVar3 * 3],0x40d998,uVar6);
        }
        else {
          uVar6 = FUN_00108a20();
          sprintf(acStack_80,(&PTR_s__NONE__003bc3c8)[iVar3 * 3],0x40d990,uVar6);
        }
        if (acStack_80[0] == 'F') {
          if (DAT_0040eae4 != 4) {
            FUN_001040d8(param_1,(uint)acStack_80 | 1,(&DAT_003bc3cc)[iVar3 * 3],
                         *(int *)(iVar7 + 0x210) != 0);
            iVar3 = *(int *)(iVar7 + 0x20c);
            goto LAB_00104948;
          }
          cVar1 = *(char *)(iVar7 + 0xd4d);
        }
        else {
          cVar1 = *(char *)(iVar7 + 0xd4d);
        }
        if ((cVar1 == '\0') ||
           (lVar5 = FUN_00109f68(iVar7 + 0x4c,(&DAT_003bc3cc)[iVar3 * 3]), lVar5 == 0)) {
          FUN_001040d8(param_1,acStack_80,(&DAT_003bc3cc)[iVar3 * 3],*(int *)(iVar7 + 0x210) != 0);
          iVar3 = *(int *)(iVar7 + 0x20c);
        }
        else {
          FUN_001040d8(param_1,acStack_80,0,*(int *)(iVar7 + 0x210) != 0);
          iVar3 = *(int *)(iVar7 + 0x20c);
        }
      }
LAB_00104948:
      if ((&DAT_003bc3cc)[iVar3 * 3] == 3) {
        *(undefined1 *)(iVar7 + 0xd4d) = 1;
        iVar3 = *(int *)(iVar7 + 0x20c);
      }
      else {
        iVar3 = *(int *)(iVar7 + 0x20c);
      }
      if ((&DAT_003bc3d0)[iVar3 * 0xc] == '\0') {
        FUN_001d8bc0(0x3dcccccd,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34),
                     0xffffffffffffffff,0,1);
        FUN_001d8de8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34));
LAB_00104a80:
        uVar4 = *(undefined4 *)(iVar7 + 0x20c);
      }
      else {
        if (iVar3 == 6) {
          FUN_001d8bc0(0,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34),2,1,0);
          FUN_001d8df0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34));
        }
        if (*(char *)(iVar7 + 0xd4d) == '\0') goto LAB_00104a80;
        FUN_001d8bc0(0,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34),
                     *(int *)(iVar7 + 0x20c) == 0x15,1,0);
        FUN_001d8df0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34));
        uVar4 = *(undefined4 *)(iVar7 + 0x20c);
      }
      *(undefined4 *)(iVar7 + 0x208) = uVar4;
    }
    iVar3 = *(int *)(DAT_0040f0e0 + 0x21060);
    if (((((iVar3 != 0) && (cVar1 = FUN_0026bc30(*(undefined4 *)(iVar3 + 0xc),10), cVar1 != '\0'))
         && (cVar1 = FUN_0026bc30(*(undefined4 *)(iVar3 + 0xc),0xc), cVar1 != '\0')) &&
        ((cVar1 = FUN_0026bc30(*(undefined4 *)(iVar3 + 0xc),1), cVar1 != '\0' &&
         (cVar1 = FUN_0026bc30(*(undefined4 *)(iVar3 + 0xc),5), cVar1 != '\0')))) &&
       ((cVar1 = FUN_0026bc30(*(undefined4 *)(iVar3 + 0xc),0xb), cVar1 != '\0' &&
        ((cVar1 = FUN_0026bc30(*(undefined4 *)(iVar3 + 0xc),0xd), cVar1 != '\0' &&
         (lVar5 = FUN_0035cfd8(DAT_0040f544 + 0x3840,0x3f2540,0xe), lVar5 == 0)))))) {
      DAT_0040eae0 = 1;
      FUN_0035d1a0(0x48ef88,DAT_0040f544 + 0x3840,0x1e);
      FUN_00103f50(0);
    }
  }
  FUN_00109918(iVar7 + 0x4c);
  if (*(int *)(iVar7 + 500) == 0x37) {
    FUN_0021a480(0x3f2850,0,DAT_0040f544 + 0x38e7,0);
  }
  FUN_0010a268(iVar7 + 0x218);
  if (*(char *)(iVar7 + 0x220) != '\0') {
    FUN_0021a480(0x3f2850,0,DAT_0040f544 + 0x38e7,0);
  }
  if (DAT_0040d986 == '\0') {
    FUN_00205180(DAT_0040f524);
  }
  else {
    FUN_00105268(param_1);
  }
  if ((*(int *)(DAT_0040f0e0 + 0x21060) == 0) || (lVar5 = FUN_00124d20(), lVar5 == 0)) {
    *(float *)(iVar7 + 0xd48) = *(float *)(iVar7 + 0xd48) + *(float *)(DAT_0040f0e0 + 0x2013c);
    lVar5 = FUN_0020b950(DAT_0040f544);
    if (lVar5 != 0) {
      DAT_0040eae0 = 1;
      *(undefined4 *)(iVar7 + 0xd48) = 0;
      FUN_00209a58(DAT_0040f544 + 0x44c);
      uVar6 = FUN_0020b980(DAT_0040f544);
      lVar5 = strlen(uVar6);
      if (lVar5 == 0) {
        FUN_00216af0(0x104050);
        FUN_0020b8c0(DAT_0040f544);
        FUN_001040f8(DAT_0040f0e0 + 0x20220,3,0);
        iVar7 = DAT_0040f544;
        strcpy(DAT_0040f544 + 0x3820,0x3f2698);
        if (*(char *)(iVar7 + 0x3840) != '\0') {
          *(undefined4 *)(iVar7 + 0x3884) = 1;
          goto LAB_00104d28;
        }
      }
      else {
        uVar6 = FUN_0020b980(DAT_0040f544);
        iVar7 = DAT_0040f544;
        strcpy(DAT_0040f544 + 0x3820,uVar6);
        if (*(char *)(iVar7 + 0x3840) != '\0') {
          *(undefined4 *)(iVar7 + 0x3884) = 1;
          goto LAB_00104d28;
        }
      }
      *(undefined4 *)(iVar7 + 0x388c) = 1;
    }
  }
  else {
    *(undefined4 *)(iVar7 + 0xd48) = 0;
  }
LAB_00104d28:
  FUN_001e8980(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
  return;
}


// ==== FUN_00104d60 @ 00104d60 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f524 undefined4
// GLOBAL null char

void FUN_00104d60(int param_1)

{
  int iVar1;
  undefined1 auStack_60 [16];
  
  iVar1 = DAT_0040f4c0;
  memset(auStack_60,0,4);
  FUN_002a9108(*(undefined4 *)(iVar1 + 0xd3b8),auStack_60,3);
  FUN_001c4fb0(DAT_0040f4c0,0);
  if (cGpffff8196 == '\0') {
    FUN_00205210(DAT_0040f524);
  }
  else {
    FUN_0020b170(DAT_0040f544);
    FUN_0010a820(param_1 + 0x218);
  }
  FUN_001c50e0(DAT_0040f4c0);
  return;
}


// ==== fe_FECurrentFmv_00104e10 @ 00104e10 ====
// GLOBAL DAT_0040f524 undefined4
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4c4 undefined4

/* Strings referenciadas:
     "FECurrentFmv"
     "FELoopFmv"
     "StartGame"
     "StartMainMenu"
     "SkipIntroCredits"
     "StartMainMenuSkip"
     "StartVideo"
     "StartVideoPage"
     "StartNewMission" */

undefined4 fe_FECurrentFmv_00104e10(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(*param_1) {
  case 0x1c:
    FUN_002052a0(DAT_0040f524,0);
    FUN_0020b988(DAT_0040f544,4);
    FUN_0020b048(DAT_0040f544);
    *param_1 = 0x1d;
  case 0x1d:
    lVar2 = FUN_00109dc0(param_1 + 0x13);
    if (lVar2 != 0) {
      *param_1 = 0x1e;
switchD_00104e4c_caseD_1e:
      lVar2 = FUN_001e8900(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
      if (lVar2 != 0) {
        *param_1 = 0x1f;
switchD_00104e4c_caseD_1f:
        param_1[0x82] = 0;
        param_1[0x83] = 0;
        param_1[0x84] = 0;
        uVar3 = FUN_0020bc00(DAT_0040f544,2);
        uVar4 = FUN_0027c278(0x3f26c0);
        FUN_00209ff8(uVar3,uVar4);
        uVar4 = FUN_0027c278(0x3f26d0);
        FUN_00209ff8(uVar3,uVar4);
        FUN_00209760(DAT_0040f544 + 4,0x3f26e0);
        FUN_00209760(DAT_0040f544 + 4,0x3f26f0);
        FUN_00209760(DAT_0040f544 + 4,0x3f2700);
        FUN_00209760(DAT_0040f544 + 4,0x3f2718);
        FUN_00209760(DAT_0040f544 + 4,0x3f2730);
        FUN_00209760(DAT_0040f544 + 4,0x3f2740);
        FUN_00209760(DAT_0040f544 + 4,0x3f2750);
        FUN_0020e4a8(param_1 + 3);
        fe_FELevelUnlocked1_0020edb0(param_1 + 4);
        fe_FEInvertLookFlag_00210c40(param_1 + 5);
        fe_FESFXVolume_00211bd8(param_1 + 6);
        fe_FEPictureOutputType_00212008(param_1 + 7);
        fe_FEDifficulty_00212230(param_1 + 8);
        FUN_00212770(param_1 + 9);
        fe_FECurrentRewardType_00217768(param_1 + 10);
        FUN_00213468(param_1 + 0xb);
        fe_FEAK47IsUnlocked_00213758(param_1 + 0xc);
        FUN_00214508(param_1 + 0xd);
        fe_FE_MemcardOptionSelected_00215058(param_1 + 0xe);
        FUN_00216878(param_1 + 0xf);
        FUN_00216ac8(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x353) = 0;
        FUN_00102080(param_1[0x354]);
        param_1[0x354] = 0;
        FUN_001084a8(DAT_0040f4c4,5,0);
        *param_1 = 0x37;
        goto switchD_00104e4c_caseD_20;
      }
    }
    uVar1 = 0;
    break;
  case 0x1e:
    goto switchD_00104e4c_caseD_1e;
  case 0x1f:
    goto switchD_00104e4c_caseD_1f;
  default:
switchD_00104e4c_caseD_20:
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00105058 @ 00105058 ====

void FUN_00105058(undefined4 *param_1)

{
  FUN_00109e70(param_1 + 0x13);
  FUN_0010a860(param_1 + 0x86);
  if (param_1[0x354] != 0) {
    FUN_00102080();
    param_1[0x354] = 0;
  }
  *param_1 = 0x39;
  return;
}


// ==== FUN_001050a8 @ 001050a8 ====
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f53c int_*
// GLOBAL DAT_0040f4e8 undefined4
// GLOBAL DAT_0040f0e0 int

/* Strings referenciadas:
     "blacktitlemenu"
     "blacktitlemenu2" */

void FUN_001050a8(int param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0xd48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar2 = DAT_0040f544;
  if (param_2 == 0) {
    bVar1 = false;
    if (*DAT_0040f53c == 0) {
      bVar1 = true;
    }
    else {
      lVar4 = FUN_00123bd0(0x48efa8,1,0);
      if (((lVar4 == 0) && (lVar4 = FUN_00123bd0(0x48efa8,1,1), lVar4 == 0)) &&
         (lVar4 = FUN_00123bd0(0x48efa8,1,2), lVar4 == 0)) {
        lVar4 = FUN_00123bd0(0x48efa8,1,3);
        bVar1 = lVar4 == 0;
      }
    }
    iVar2 = DAT_0040f544;
    if (bVar1) {
      uVar3 = FUN_001228e0(DAT_0040f4e8,0);
      *(undefined1 *)(DAT_0040f0e0 + 0x2020c) = uVar3;
      *(undefined1 *)(DAT_0040f0e0 + 0x2020d) = 1;
      *(undefined1 *)(DAT_0040f0e0 + 0x2020e) = 1;
      iVar2 = DAT_0040f544;
      strcpy(DAT_0040f544 + 0x3820,0x3f28d0);
      if (*(char *)(iVar2 + 0x3840) == '\0') {
        *(undefined4 *)(iVar2 + 0x388c) = 1;
      }
      else {
        *(undefined4 *)(iVar2 + 0x3884) = 1;
      }
    }
    else {
      strcpy(DAT_0040f544 + 0x3820,0x3f2540);
      if (*(char *)(iVar2 + 0x3840) == '\0') {
        *(undefined4 *)(iVar2 + 0x388c) = 1;
      }
      else {
        *(undefined4 *)(iVar2 + 0x3884) = 1;
      }
    }
  }
  else {
    strcpy(DAT_0040f544 + 0x3820);
    if (*(char *)(iVar2 + 0x3840) == '\0') {
      *(undefined4 *)(iVar2 + 0x388c) = 1;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3884) = 1;
    }
  }
  return;
}


// ==== FUN_00105228 @ 00105228 ====
// GLOBAL DAT_0040f0e0 int

void FUN_00105228(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  FUN_001034b0(DAT_0040f0e0,DAT_0040f0e0 + 0x20220);
  return;
}


// ==== FUN_00105258 @ 00105258 ====

void FUN_00105258(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 1;
  return;
}


// ==== FUN_00105268 @ 00105268 ====

void FUN_00105268(int param_1)

{
  if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x44) == 1)) {
    FUN_00215250(param_1 + 0x38);
  }
  FUN_0020e8c8();
  return;
}


// ==== FUN_001052a0 @ 001052a0 ====

void FUN_001052a0(int param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x1c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x18));
  }
  iVar1 = (int)param_2;
  *(int *)(param_1 + 4) = iVar1;
  if (param_2 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8));
  }
  return;
}


// ==== FUN_00105308 @ 00105308 ====

void FUN_00105308(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 1;
  return;
}


// ==== FUN_00105318 @ 00105318 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f51c undefined4
// GLOBAL DAT_0040f4dc undefined4_*
// GLOBAL DAT_0040d9b8 char

undefined4 FUN_00105318(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(DAT_0040f0e0 + 0x20208) = 1;
  puVar4 = (undefined4 *)param_1;
  switch(*puVar4) {
  case 1:
  case 0x37:
    break;
  case 2:
  case 0x1c:
    goto switchD_00105374_caseD_2;
  case 3:
    goto switchD_00105374_caseD_3;
  case 4:
    goto switchD_00105374_caseD_4;
  case 5:
    goto switchD_00105374_caseD_5;
  case 6:
switchD_00105374_caseD_6:
    *puVar4 = 7;
  case 7:
    *puVar4 = 0x1c;
switchD_00105374_caseD_8:
    return 1;
  default:
    goto switchD_00105374_caseD_8;
  }
  FUN_0016bea8(DAT_0040f4d0 + 0x3f0);
  *puVar4 = 2;
switchD_00105374_caseD_2:
  *(undefined1 *)(DAT_0040f544 + 0x390f) = 1;
  *puVar4 = 3;
switchD_00105374_caseD_3:
  lVar3 = FUN_00128480(DAT_0040f4d0);
  if (lVar3 != 0) {
    *puVar4 = 4;
switchD_00105374_caseD_4:
    lVar3 = fe_FECurrentLevelId_0020ad10(DAT_0040f544);
    iVar2 = DAT_0040f544;
    if (lVar3 != 0) {
      *(undefined1 *)(DAT_0040f544 + 0x394c) = 0;
      *(undefined4 *)(iVar2 + 0x3948) = 0x3f800000;
      *puVar4 = 5;
switchD_00105374_caseD_5:
      iVar2 = DAT_0040f544;
      if (0.0 < *(float *)(DAT_0040f544 + 0x3948)) {
        return 0;
      }
      *(undefined1 *)(DAT_0040f544 + 0x394c) = 1;
      *(undefined4 *)(iVar2 + 0x3948) = 0x3f800000;
      FUN_0020b988(DAT_0040f544,4);
      (**(code **)(puVar4[2] + 0x44))((int)puVar4 + (int)*(short *)(puVar4[2] + 0x40),0,0);
      lVar3 = FUN_001f2870(DAT_0040f51c,0);
      if (lVar3 != 1) {
        FUN_001f2838(DAT_0040f51c,0,1);
      }
      puVar1 = DAT_0040f4dc;
      FUN_00121c38(*DAT_0040f4dc);
      FUN_00122478(puVar1);
      FUN_00382bd8(puVar1);
      if (DAT_0040d9b8 != '\0') {
        FUN_0016c2a8();
      }
      FUN_001052a0(param_1,DAT_0040f0e0 + 0x21028);
      puVar4[3] = 0;
      *puVar4 = 6;
      goto switchD_00105374_caseD_6;
    }
  }
  return 0;
}


// ==== FUN_00105518 @ 00105518 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4e8 undefined4
// GLOBAL DAT_0040f524 undefined4
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f51c undefined4

void FUN_00105518(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)param_1;
  if ((((*(uint *)(iVar2 + 0xc) & 2) == 0) || (*(int *)(iVar2 + 4) == DAT_0040f0e0 + 0x2104c)) ||
     (*(int *)(iVar2 + 4) == DAT_0040f0e0 + 0x2103c)) {
    if ((((*(uint *)(iVar2 + 0xc) & 1) == 0) || (*(int *)(iVar2 + 4) == DAT_0040f0e0 + 0x2104c)) ||
       (*(int *)(iVar2 + 4) == DAT_0040f0e0 + 0x2103c)) {
      if ((*(uint *)(iVar2 + 0xc) & 4) == 0) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      else if (*(long *)(iVar2 + 0x10) == 0) {
        FUN_001052a0(param_1,DAT_0040f0e0 + 0x21028);
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      else {
        FUN_001052a0(param_1,DAT_0040f0e0 + 0x21058);
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
    }
    else {
      FUN_001052a0(param_1);
      FUN_00122a48(DAT_0040f4e8);
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  else {
    FUN_00122a20(DAT_0040f4e8);
    FUN_001052a0(param_1,DAT_0040f0e0 + 0x2104c);
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  FUN_00205180(DAT_0040f524);
  FUN_001e8980(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
  iVar1 = *(int *)(*(int *)(iVar2 + 4) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)(iVar2 + 4) + (int)*(short *)(iVar1 + 0x10));
  fVar3 = (float)FUN_00124840(*(undefined4 *)(DAT_0040f0e0 + 0x21060),0x24);
  if (fVar3 != 0.0) {
    FUN_001f2d70(DAT_0040f51c);
  }
  return;
}


// ==== FUN_001056c0 @ 001056c0 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f518 undefined4
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f524 undefined4

void FUN_001056c0(void)

{
  fe_FE_LOADING_001297e0(DAT_0040f4d0);
  FUN_001c4fb0(DAT_0040f4c0,0);
  FUN_001f2618(DAT_0040f518,0);
  FUN_0020b170(DAT_0040f544);
  FUN_001f2618(DAT_0040f518,1);
  FUN_00205210(DAT_0040f524);
  FUN_001c50e0(DAT_0040f4c0);
  return;
}


// ==== FUN_00105740 @ 00105740 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f544 undefined4

undefined4 FUN_00105740(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_0016c700(DAT_0040f4d0 + 0x3f0);
  switch(*param_1) {
  default:
switchD_00105788_caseD_1:
    uVar1 = 1;
    break;
  case 2:
  case 3:
  case 4:
  case 0x1c:
    *param_1 = 0x1d;
  case 0x1d:
    lVar2 = FUN_00129de8(DAT_0040f4d0);
    if (lVar2 != 0) {
      *param_1 = 0x1e;
switchD_00105788_caseD_1e:
      lVar2 = FUN_001e8900(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
      if (lVar2 != 0) {
        *param_1 = 0x20;
switchD_00105788_caseD_20:
        fe_FECurrentLevelId_0020b0c0(DAT_0040f544);
        *param_1 = 0x37;
        goto switchD_00105788_caseD_1;
      }
    }
    uVar1 = 0;
    break;
  case 0x1e:
    goto switchD_00105788_caseD_1e;
  case 0x20:
    goto switchD_00105788_caseD_20;
  }
  return uVar1;
}


// ==== FUN_00105848 @ 00105848 ====

void FUN_00105848(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}


// ==== FUN_00105858 @ 00105858 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4c4 int
// GLOBAL PTR_s_Language/Fonts/Big.bin_003bc510 undefined_*
// GLOBAL DAT_0040f0e0 int
// GLOBAL PTR_s_Language/Fonts/Small.bin_003bc514 undefined_*
// GLOBAL PTR_s_GlobData.bin_003bc518 undefined_*
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f53c undefined4
// GLOBAL DAT_0040f4ec undefined4
// GLOBAL DAT_0040f4f0 undefined4
// GLOBAL null undefined1

/* Strings referenciadas:
     "Language/Fonts/Big.bin"
     "Language/Fonts/Small.bin"
     "GlobData.bin"
     "languageselect" */

undefined4 FUN_00105858(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  switch(*puVar4) {
  case 1:
    lVar3 = FUN_001e87a0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),2);
    if (lVar3 == 0) {
      return 0;
    }
    *puVar4 = 2;
  case 2:
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    FUN_001093c0(DAT_0040f4c4,PTR_s_Language_Fonts_Big_bin_003bc510,8,1,0x105cf0,0,0,0x2000000);
    *puVar4 = 3;
  case 3:
    uVar2 = FUN_00108458(DAT_0040f4c4,9,0);
    *(undefined4 *)(DAT_0040f0e0 + 0x2107c) = uVar2;
    if (*(int *)(DAT_0040f0e0 + 0x2107c) == 0) {
      return 0;
    }
    *puVar4 = 4;
  case 4:
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    FUN_001093c0(DAT_0040f4c4,PTR_s_Language_Fonts_Small_bin_003bc514,8,1,0x105cf0,1,0,0x2000000);
    *puVar4 = 5;
  case 5:
    uVar2 = FUN_00108458(DAT_0040f4c4,9,1);
    *(undefined4 *)(DAT_0040f0e0 + 0x21080) = uVar2;
    if (*(int *)(DAT_0040f0e0 + 0x21080) == 0) {
      return 0;
    }
    FUN_00274350();
    *puVar4 = 6;
  case 6:
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    FUN_001093c0(DAT_0040f4c4,PTR_s_GlobData_bin_003bc518,8,1,0x105d48,param_1,0,0x2000000);
    *puVar4 = 7;
  case 7:
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    uGpffff81ac = 1;
    break;
  case 8:
    lVar3 = FUN_00108458(DAT_0040f4c4,7,9);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(DAT_0040f544 + 0x36c8) = (int)lVar3;
    FUN_0020b678(DAT_0040f544,0x3f2ae8,4);
    fe_FESetLanguage_002169a0(puVar4 + 3);
    break;
  case 9:
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    *puVar4 = 10;
  case 10:
    FUN_0010f1e0(DAT_0040f53c);
    FUN_0010f260(DAT_0040f4ec);
    *puVar4 = 0xb;
  case 0xb:
    lVar3 = FUN_0010aa70(DAT_0040f4f0);
    if (lVar3 == 0) {
      return 0;
    }
    FUN_0020e560();
    *puVar4 = 0x1c;
  default:
    return 1;
  }
  *puVar4 = 9;
  return 0;
}


// ==== FUN_00105bc0 @ 00105bc0 ====
// GLOBAL DAT_0040d99a char
// GLOBAL DAT_0040f4f0 undefined4
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040d99c char
// GLOBAL DAT_0040f510 int

void FUN_00105bc0(void)

{
  if (DAT_0040d99a == '\0') {
    if (DAT_0040d99c != '\0') {
      FUN_00108890();
    }
  }
  else {
    fe_FE_MCOption_ProfileEmpty_0010ac48(DAT_0040f4f0);
    FUN_001034b0(DAT_0040f0e0,DAT_0040f0e0 + 0x20220);
  }
  FUN_001e8980(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
  return;
}


// ==== FUN_00105c40 @ 00105c40 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f544 undefined4

void FUN_00105c40(void)

{
  int iVar1;
  undefined1 auStack_40 [16];
  
  iVar1 = DAT_0040f4c0;
  memset(auStack_40,0,4);
  FUN_002a9108(*(undefined4 *)(iVar1 + 0xd3b8),auStack_40,3);
  FUN_001c4fb0(DAT_0040f4c0,0);
  FUN_0020b170(DAT_0040f544);
  FUN_001c50e0(DAT_0040f4c0);
  return;
}


// ==== FUN_00105cb8 @ 00105cb8 ====
// GLOBAL DAT_0040f510 int

bool FUN_00105cb8(void)

{
  long lVar1;
  
  lVar1 = FUN_001e8900(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
  return lVar1 != 0;
}


// ==== FUN_00105cf0 @ 00105cf0 ====
// GLOBAL DAT_0040f4c4 undefined4

void FUN_00105cf0(undefined8 param_1,undefined2 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001092f8();
  FUN_00275878(uVar1);
  FUN_00108540(DAT_0040f4c4,9,uVar1,param_2);
  return;
}


// ==== FUN_00105d48 @ 00105d48 ====
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4e4 undefined4
// GLOBAL DAT_0040f520 undefined4

void FUN_00105d48(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar3 = 0;
  iVar2 = FUN_001092f8();
  iVar6 = *(int *)(iVar2 + 4) + iVar2;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + iVar2;
  *(int *)(iVar2 + 4) = iVar6;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + iVar2;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + iVar2;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + iVar2;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + iVar2;
  FUN_00272aa8(iVar6);
  if (*(int *)(iVar6 + 8) < 1) {
    pbVar7 = *(byte **)(iVar2 + 0xc);
  }
  else {
    do {
      uVar4 = FUN_003822e0(iVar6,iVar3);
      iVar3 = iVar3 + 1;
      FUN_0028eed8(uVar4);
    } while (iVar3 < *(int *)(iVar6 + 8));
    pbVar7 = *(byte **)(iVar2 + 0xc);
  }
  uVar8 = 0;
  *(byte **)(pbVar7 + 4) = pbVar7 + *(int *)(pbVar7 + 4);
  if (*pbVar7 != 0) {
    iVar6 = 0;
    do {
      uVar8 = uVar8 + 1;
      FUN_00382c70(*(int *)(pbVar7 + 4) + iVar6);
      iVar6 = iVar6 + 0x24;
    } while (uVar8 < *pbVar7);
  }
  iVar6 = *(int *)(iVar2 + 0x10);
  uVar8 = 0;
  *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + iVar6;
  if (*(char *)(iVar6 + 1) != '\0') {
    iVar3 = *(int *)(iVar6 + 4);
    while( true ) {
      iVar3 = uVar8 * 0x20 + iVar3;
      iVar5 = *(int *)(iVar3 + 8) + iVar3;
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + iVar3;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + iVar3;
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + iVar3;
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + iVar3;
      *(int *)(iVar3 + 8) = iVar5;
      if (*(int *)(iVar5 + 0xa0) != 0) {
        *(int *)(iVar5 + 0xa0) = *(int *)(iVar5 + 0xa0) + iVar5;
      }
      uVar8 = uVar8 + 1 & 0xff;
      if (*(byte *)(iVar6 + 1) <= uVar8) break;
      iVar3 = *(int *)(iVar6 + 4);
    }
  }
  iVar6 = *(int *)(iVar2 + 0x14);
  iVar3 = 0;
  *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + iVar6;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + iVar6;
  *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + iVar6;
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + iVar6;
  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + iVar6;
  FUN_001282d0(*(undefined4 *)(iVar2 + 0x18));
  FUN_00108540(DAT_0040f4c4,0,*(undefined4 *)(iVar2 + 4),0);
  iVar6 = *(int *)(iVar2 + 8);
  FUN_00272aa8(iVar6);
  if (*(int *)(iVar6 + 8) < 1) {
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  else {
    do {
      uVar4 = FUN_003822f8(iVar6,iVar3);
      iVar3 = iVar3 + 1;
      FUN_001af930(uVar4);
    } while (iVar3 < *(int *)(iVar6 + 8));
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  FUN_00108540(DAT_0040f4c4,1,uVar1,0);
  FUN_0015cc40(DAT_0040f4e0,*(undefined4 *)(iVar2 + 0x10));
  FUN_0016be60(DAT_0040f4d0 + 0x3f0);
  *(undefined4 *)(DAT_0040f0e0 + 0x2106c) = *(undefined4 *)(iVar2 + 0xc);
  FUN_001264c8(DAT_0040f4e4,*(undefined4 *)(iVar2 + 0x14));
  FUN_00155238(DAT_0040f520);
  *(undefined4 *)(DAT_0040f4d0 + 0x5ab8) = *(undefined4 *)(iVar2 + 0x18);
  return;
}


// ==== FUN_00106008 @ 00106008 ====

void FUN_00106008(void)

{
  return;
}


// ==== FUN_00106068 @ 00106068 ====

void FUN_00106068(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[0xc] = 0;
  return;
}


// ==== FUN_00106080 @ 00106080 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f504 undefined1_*
// GLOBAL DAT_0040f4dc undefined4_*
// GLOBAL PTR_s_textboxes_003bc51c undefined_*

/* Strings referenciadas:
     "textboxes" */

undefined4 FUN_00106080(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(DAT_0040f0e0 + 0x20208) = 1;
  puVar4 = (undefined4 *)param_1;
  switch(*puVar4) {
  case 1:
  case 0x37:
    *puVar4 = 2;
  case 2:
  case 0x1c:
    *(undefined1 *)(DAT_0040f544 + 0x390f) = 1;
    *puVar4 = 3;
switchD_001060d8_caseD_3:
    lVar3 = FUN_00128480(DAT_0040f4d0);
    if (lVar3 != 0) {
      *DAT_0040f504 = 0;
      *puVar4 = 4;
switchD_001060d8_caseD_4:
      lVar3 = fe_FECurrentLevelId_0020ad10(DAT_0040f544);
      if (lVar3 != 0) {
        *puVar4 = 5;
switchD_001060d8_caseD_5:
        puVar1 = DAT_0040f4dc;
        FUN_00121c38(*DAT_0040f4dc);
        FUN_00122478(puVar1);
        FUN_00382bd8(puVar1);
        FUN_001052a0(param_1,DAT_0040f0e0 + 0x21028);
        puVar4[8] = 0;
        *puVar4 = 6;
        goto switchD_001060d8_caseD_6;
      }
    }
    uVar2 = 0;
    break;
  case 3:
    goto switchD_001060d8_caseD_3;
  case 4:
    goto switchD_001060d8_caseD_4;
  case 5:
    goto switchD_001060d8_caseD_5;
  case 6:
switchD_001060d8_caseD_6:
    *puVar4 = 7;
  case 7:
    uVar2 = FUN_001033a0(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
                         *(undefined1 *)(DAT_0040f0e0 + 0x2020e));
    puVar4[0xc] = uVar2;
    puVar4[10] = 0x40400000;
    *(undefined1 *)(puVar4 + 9) = 0;
    *(undefined1 *)((int)puVar4 + 0x25) = 0;
    puVar4[0xb] = 0;
    FUN_0020b678(DAT_0040f544,PTR_s_textboxes_003bc51c,2);
    *puVar4 = 0x1c;
  default:
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_00106200 @ 00106200 ====
// GLOBAL DAT_0040f4bc int_*
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f524 undefined4
// GLOBAL DAT_0040f510 int

void FUN_00106200(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x24) == '\0') {
    lVar2 = 0x6d6123044330fccf;
    if ((long *)*DAT_0040f4bc != (long *)0x0) {
      lVar2 = *(long *)*DAT_0040f4bc;
    }
    if (lVar2 == 0x594c3b3ed729e1c6) {
      lVar2 = FUN_00103870(DAT_0040f0e0);
      if (lVar2 == 0) {
        *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + *(float *)(DAT_0040f4d0 + 0x1c);
        FUN_001063f8(param_1);
        uVar1 = *(uint *)(iVar4 + 0x20);
      }
      else {
        uVar1 = *(uint *)(iVar4 + 0x20);
      }
    }
    else {
      uVar1 = *(uint *)(iVar4 + 0x20);
    }
  }
  else {
    fVar5 = *(float *)(iVar4 + 0x28) - *(float *)(DAT_0040f0e0 + 0x2013c);
    *(float *)(iVar4 + 0x28) = fVar5;
    if (fVar5 < 0.0) {
      if (*(char *)(iVar4 + 0x25) != '\0') {
        FUN_00105228(DAT_0040f0e0 + 0x20220,5);
        uVar1 = *(uint *)(iVar4 + 0x20);
        goto LAB_0010631c;
      }
      FUN_00105228(DAT_0040f0e0 + 0x20220,4);
    }
    uVar1 = *(uint *)(iVar4 + 0x20);
  }
LAB_0010631c:
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 4) == 0) {
        *(undefined4 *)(iVar4 + 0x20) = 0;
        goto LAB_001063a8;
      }
      if (*(long *)(iVar4 + 0x10) != 0) {
        FUN_001052a0(param_1,DAT_0040f0e0 + 0x21058);
        *(undefined4 *)(iVar4 + 0x20) = 0;
        goto LAB_001063a8;
      }
      iVar3 = 0x21028;
    }
    else {
      iVar3 = 0x2103c;
    }
  }
  else {
    iVar3 = 0x2104c;
  }
  FUN_001052a0(param_1,DAT_0040f0e0 + iVar3);
  *(undefined4 *)(iVar4 + 0x20) = 0;
LAB_001063a8:
  FUN_00205180(DAT_0040f524);
  FUN_001e8980(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
  iVar3 = *(int *)(*(int *)(iVar4 + 4) + 4);
  (**(code **)(iVar3 + 0x14))(*(int *)(iVar4 + 4) + (int)*(short *)(iVar3 + 0x10));
  return;
}


// ==== FUN_001063f8 @ 001063f8 ====
// GLOBAL DAT_0040f4dc int_*

void FUN_001063f8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x30);
  if (*(int *)(iVar1 + 4) == 0) {
    if (*(float *)(iVar3 + 0x2c) < *(float *)(iVar1 + 8)) {
      return;
    }
    lVar2 = FUN_00122368(DAT_0040f4dc,0x20);
    if (lVar2 < (long)(ulong)*(byte *)(*(int *)(iVar3 + 0x30) + 0xf)) {
      FUN_001064d8(param_1,0);
      return;
    }
  }
  else {
    if (*(int *)(iVar1 + 4) != 1) {
      return;
    }
    if (*(float *)(iVar3 + 0x2c) < *(float *)(iVar1 + 8)) {
      return;
    }
    if ((int)(((uint)*(ushort *)(*DAT_0040f4dc + 0x1c) + (uint)*(ushort *)(*DAT_0040f4dc + 0x1e)) *
             0x10000) >> 0x10 < (int)(uint)*(byte *)(iVar1 + 0xf)) {
      FUN_001064d8(param_1,0);
      return;
    }
  }
  FUN_001064d8(param_1,1);
  return;
}


// ==== FUN_001064d8 @ 001064d8 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4dc int_*

void FUN_001064d8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x25) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0x40400000;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined1 *)(DAT_0040f4d0 + 0x8e2) = 1;
  FUN_0013c950(DAT_0040f4d0 + 0x30,1);
  *(float *)(*DAT_0040f4dc + 0x40) =
       *(float *)(*(int *)(param_1 + 0x30) + 8) - *(float *)(param_1 + 0x2c);
  return;
}


// ==== FUN_00106550 @ 00106550 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f518 undefined4
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f524 undefined4

void FUN_00106550(void)

{
  fe_FE_LOADING_001297e0(DAT_0040f4d0);
  FUN_001c4fb0(DAT_0040f4c0,0);
  FUN_001f2618(DAT_0040f518,0);
  FUN_0020b170(DAT_0040f544);
  FUN_001f2618(DAT_0040f518,1);
  FUN_00205210(DAT_0040f524);
  FUN_001c50e0(DAT_0040f4c0);
  return;
}


// ==== FUN_001065d0 @ 001065d0 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f504 undefined1_*
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f544 undefined4

undefined4 FUN_001065d0(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  switch(*param_1) {
  default:
switchD_00106604_caseD_1:
    uVar1 = 1;
    break;
  case 2:
  case 3:
  case 4:
  case 0x1c:
    *param_1 = 0x1d;
  case 0x1d:
    lVar2 = FUN_00129de8(DAT_0040f4d0);
    if (lVar2 != 0) {
      *DAT_0040f504 = 1;
      *param_1 = 0x1e;
switchD_00106604_caseD_1e:
      lVar2 = FUN_001e8900(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
      if (lVar2 != 0) {
        *param_1 = 0x20;
switchD_00106604_caseD_20:
        fe_FECurrentLevelId_0020b0c0(DAT_0040f544);
        *param_1 = 0x37;
        goto switchD_00106604_caseD_1;
      }
    }
    uVar1 = 0;
    break;
  case 0x1e:
    goto switchD_00106604_caseD_1e;
  case 0x20:
    goto switchD_00106604_caseD_20;
  }
  return uVar1;
}


// ==== FUN_00106698 @ 00106698 ====

void FUN_00106698(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x30) + 4) == 1) && (*(char *)(param_1 + 0x24) == '\0')) {
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0x2c) - *(float *)(*(int *)(param_1 + 0x30) + 0x4c);
  }
  return;
}


// ==== FUN_001066d0 @ 001066d0 ====
// GLOBAL DAT_0040f4dc int_*
// GLOBAL DAT_0040f0e0 int

void FUN_001066d0(int param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 4);
  if (iVar1 == 0) {
    lVar3 = FUN_00122368(DAT_0040f4dc,0x20);
    bVar2 = lVar3 < (long)(ulong)*(byte *)(*(int *)(param_1 + 0x30) + 0xf);
  }
  else {
    if (iVar1 != 1) goto LAB_00106774;
    bVar2 = (int)(((uint)*(ushort *)(*DAT_0040f4dc + 0x1c) + (uint)*(ushort *)(*DAT_0040f4dc + 0x1e)
                  ) * 0x10000) >> 0x10 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x30) + 0xf);
  }
  if (!bVar2) {
    FUN_00105228(DAT_0040f0e0 + 0x20220,5);
    return;
  }
LAB_00106774:
  FUN_00105228(DAT_0040f0e0 + 0x20220,4);
  return;
}


// ==== FUN_001067a0 @ 001067a0 ====
// GLOBAL DAT_0040f0e0 int

void FUN_001067a0(int param_1)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x35) == '\0') {
    FUN_00105228(DAT_0040f0e0 + 0x20220,4);
  }
  else {
    FUN_00105228(DAT_0040f0e0 + 0x20220,5);
  }
  return;
}


// ==== FUN_00106820 @ 00106820 ====

void FUN_00106820(int param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ==== FUN_00106828 @ 00106828 ====

undefined8 FUN_00106828(int param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ==== FUN_00106830 @ 00106830 ====

void FUN_00106830(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_00153420(param_1 + 3);
  return;
}


// ==== FUN_00106868 @ 00106868 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f504 undefined1_*
// GLOBAL DAT_0040f4dc undefined4_*

undefined4 FUN_00106868(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  if (*piVar4 == 0x1c) {
    (**(code **)(piVar4[2] + 0x24))((int)piVar4 + (int)*(short *)(piVar4[2] + 0x20));
  }
  *(undefined4 *)(DAT_0040f0e0 + 0x20208) = 1;
  switch(*piVar4) {
  case 1:
  case 0x37:
    *piVar4 = 2;
  case 2:
  case 0x1c:
    break;
  case 3:
    goto switchD_001068e4_caseD_3;
  case 4:
    goto switchD_001068e4_caseD_4;
  case 5:
    goto switchD_001068e4_caseD_5;
  default:
    return 1;
  }
  *(undefined1 *)(DAT_0040f544 + 0x390f) = 1;
  *piVar4 = 3;
switchD_001068e4_caseD_3:
  lVar3 = FUN_00128480(DAT_0040f4d0);
  if (lVar3 != 0) {
    *piVar4 = 4;
switchD_001068e4_caseD_4:
    lVar3 = fe_FECurrentLevelId_0020ad10(DAT_0040f544);
    if (lVar3 != 0) {
      *piVar4 = 5;
switchD_001068e4_caseD_5:
      *DAT_0040f504 = 0;
      puVar1 = DAT_0040f4dc;
      FUN_00121c38(*DAT_0040f4dc);
      FUN_00122478(puVar1);
      FUN_00382bd8(puVar1);
      FUN_001052a0(param_1,DAT_0040f0e0 + 0x21028);
      piVar4[0xe] = 0;
      FUN_00153438(piVar4 + 3);
      iVar2 = FUN_001033a0(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
                           *(undefined1 *)(DAT_0040f0e0 + 0x2020e));
      piVar4[0x12] = iVar2;
      *piVar4 = 0x1c;
      piVar4[0x10] = 0x40400000;
      *(undefined1 *)(piVar4 + 0xf) = 0;
      *(undefined1 *)((int)piVar4 + 0x3d) = 0;
      piVar4[0x11] = 0;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_001069f8 @ 001069f8 ====
// GLOBAL DAT_0040f4bc int_*
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f524 undefined4
// GLOBAL DAT_0040f510 int

void FUN_001069f8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x3c) == '\0') {
    lVar2 = 0x6d6123044330fccf;
    if ((long *)*DAT_0040f4bc != (long *)0x0) {
      lVar2 = *(long *)*DAT_0040f4bc;
    }
    if (lVar2 == 0x594c3b3ed729e1c6) {
      lVar2 = FUN_00103870(DAT_0040f0e0);
      if (lVar2 == 0) {
        *(float *)(iVar4 + 0x44) = *(float *)(iVar4 + 0x44) + *(float *)(DAT_0040f4d0 + 0x1c);
        FUN_00153588(iVar4 + 0xc);
        FUN_00106bf8(param_1);
        uVar1 = *(uint *)(iVar4 + 0x38);
      }
      else {
        uVar1 = *(uint *)(iVar4 + 0x38);
      }
    }
    else {
      uVar1 = *(uint *)(iVar4 + 0x38);
    }
  }
  else {
    fVar5 = *(float *)(iVar4 + 0x40) - *(float *)(DAT_0040f0e0 + 0x2013c);
    *(float *)(iVar4 + 0x40) = fVar5;
    if (fVar5 < 0.0) {
      if (*(char *)(iVar4 + 0x3d) != '\0') {
        FUN_00105228(DAT_0040f0e0 + 0x20220,5);
        uVar1 = *(uint *)(iVar4 + 0x38);
        goto LAB_00106b1c;
      }
      FUN_00105228(DAT_0040f0e0 + 0x20220,4);
    }
    uVar1 = *(uint *)(iVar4 + 0x38);
  }
LAB_00106b1c:
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 4) == 0) {
        *(undefined4 *)(iVar4 + 0x38) = 0;
        goto LAB_00106ba8;
      }
      if (*(long *)(iVar4 + 0x28) != 0) {
        FUN_001052a0(param_1,DAT_0040f0e0 + 0x21058);
        *(undefined4 *)(iVar4 + 0x38) = 0;
        goto LAB_00106ba8;
      }
      iVar3 = 0x21028;
    }
    else {
      iVar3 = 0x2103c;
    }
  }
  else {
    iVar3 = 0x2104c;
  }
  FUN_001052a0(param_1,DAT_0040f0e0 + iVar3);
  *(undefined4 *)(iVar4 + 0x38) = 0;
LAB_00106ba8:
  FUN_00205180(DAT_0040f524);
  FUN_001e8980(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
  iVar3 = *(int *)(*(int *)(iVar4 + 4) + 4);
  (**(code **)(iVar3 + 0x14))(*(int *)(iVar4 + 4) + (int)*(short *)(iVar3 + 0x10));
  return;
}


// ==== FUN_00106bf8 @ 00106bf8 ====
// GLOBAL DAT_0040f4dc int_*

void FUN_00106bf8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(short *)(*DAT_0040f4dc + 0x44) = *(short *)(iVar3 + 0x20) - *(short *)(iVar3 + 0x22);
  *(float *)(*DAT_0040f4dc + 0x40) =
       *(float *)(*(int *)(iVar3 + 0x48) + 8) - *(float *)(iVar3 + 0x44);
  lVar2 = (long)*(short *)(*(int *)(iVar3 + 0x48) + 0x2c);
  if (lVar2 < 1) {
    iVar1 = *(int *)(iVar3 + 0x48);
  }
  else {
    if (lVar2 <= (int)(((uint)*(ushort *)(iVar3 + 0x20) - (uint)*(ushort *)(iVar3 + 0x22)) * 0x10000
                      ) >> 0x10) goto LAB_00106cb0;
    iVar1 = *(int *)(iVar3 + 0x48);
  }
  if (*(float *)(iVar3 + 0x44) <= *(float *)(iVar1 + 8)) {
    return;
  }
  if ((int)(((uint)*(ushort *)(iVar3 + 0x20) - (uint)*(ushort *)(iVar3 + 0x22)) * 0x10000) >> 0x10 <
      (int)(uint)*(byte *)(iVar1 + 0xf)) {
    FUN_00106cd8(param_1,0);
    return;
  }
LAB_00106cb0:
  FUN_00106cd8(param_1,1);
  return;
}


// ==== FUN_00106cd8 @ 00106cd8 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4dc int_*

void FUN_00106cd8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3d) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0x40400000;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined1 *)(DAT_0040f4d0 + 0x8e2) = 1;
  FUN_0013c950(DAT_0040f4d0 + 0x30,1);
  *(short *)(*DAT_0040f4dc + 0x44) = *(short *)(param_1 + 0x20) - *(short *)(param_1 + 0x22);
  *(float *)(*DAT_0040f4dc + 0x40) =
       *(float *)(*(int *)(param_1 + 0x48) + 8) - *(float *)(param_1 + 0x44);
  return;
}


// ==== FUN_00106d70 @ 00106d70 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f518 undefined4
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f524 undefined4

void FUN_00106d70(void)

{
  fe_FE_LOADING_001297e0(DAT_0040f4d0);
  FUN_001c4fb0(DAT_0040f4c0,0);
  FUN_001f2618(DAT_0040f518,0);
  FUN_0020b170(DAT_0040f544);
  FUN_001f2618(DAT_0040f518,1);
  FUN_00205210(DAT_0040f524);
  FUN_001c50e0(DAT_0040f4c0);
  return;
}


// ==== FUN_00106df0 @ 00106df0 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f504 undefined1_*
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f544 undefined4

undefined4 FUN_00106df0(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  switch(*param_1) {
  default:
switchD_00106e28_caseD_1:
    uVar1 = 1;
    break;
  case 2:
  case 3:
  case 4:
  case 0x1c:
    *param_1 = 0x1d;
  case 0x1d:
    lVar2 = FUN_00129de8(DAT_0040f4d0);
    if (lVar2 != 0) {
      *DAT_0040f504 = 1;
      *param_1 = 0x1e;
switchD_00106e28_caseD_1e:
      lVar2 = FUN_001e8900(*(undefined4 *)(DAT_0040f510 + 0xcbd8));
      if (lVar2 != 0) {
        *param_1 = 0x20;
switchD_00106e28_caseD_20:
        fe_FECurrentLevelId_0020b0c0(DAT_0040f544);
        FUN_0020b988(DAT_0040f544,1);
        FUN_0020b988(DAT_0040f544,3);
        FUN_00153690(param_1 + 3);
        *param_1 = 0x37;
        goto switchD_00106e28_caseD_1;
      }
    }
    uVar1 = 0;
    break;
  case 0x1e:
    goto switchD_00106e28_caseD_1e;
  case 0x20:
    goto switchD_00106e28_caseD_20;
  }
  return uVar1;
}


// ==== FUN_00106ed8 @ 00106ed8 ====

void FUN_00106ed8(int param_1)

{
  FUN_001536b0(param_1 + 0xc);
  return;
}


// ==== FUN_00106ef8 @ 00106ef8 ====
// GLOBAL DAT_0040f0e0 int

void FUN_00106ef8(int param_1)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  if ((int)(((uint)*(ushort *)(param_1 + 0x20) - (uint)*(ushort *)(param_1 + 0x22)) * 0x10000) >>
      0x10 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x48) + 0xf)) {
    FUN_00105228(DAT_0040f0e0 + 0x20220,4);
  }
  else {
    FUN_00105228(DAT_0040f0e0 + 0x20220,5);
  }
  return;
}


// ==== FUN_00106f80 @ 00106f80 ====
// GLOBAL DAT_0040f0e0 int

void FUN_00106f80(int param_1)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 2;
  if (*(char *)(*(int *)(param_1 + 0x48) + 0x35) == '\0') {
    FUN_00105228(DAT_0040f0e0 + 0x20220,4);
  }
  else {
    FUN_00105228(DAT_0040f0e0 + 0x20220,5);
  }
  return;
}


// ==== FUN_00107000 @ 00107000 ====

void FUN_00107000(int param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


// ==== FUN_00107008 @ 00107008 ====

undefined8 FUN_00107008(int param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ==== FUN_00107010 @ 00107010 ====

void FUN_00107010(int param_1)

{
  *(undefined4 *)(param_1 + 0x778) = 1;
  return;
}


// ==== fe_FE_CONTROLLERDISCONNECTED_00107020 @ 00107020 ====

/* Strings referenciadas:
     "FE_CONTROLLERDISCONNECTED"
     "1234567890123456789012345678901234567890123456789012345678901234" */

undefined4 fe_FE_CONTROLLERDISCONNECTED_00107020(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x778);
  if (iVar1 == 3) goto LAB_001071bc;
  if (iVar1 < 4) {
    if (iVar1 == 1) goto LAB_00107094;
    if (iVar1 != 2) {
      return 1;
    }
  }
  else {
    if (iVar1 == 0x1c) {
      return 1;
    }
    if (iVar1 != 0x37) {
      return 1;
    }
LAB_00107094:
    FUN_0026c798(param_1,0);
    iVar3 = 0;
    iVar2 = 0x1000000;
    iVar5 = iVar4 + 0x4a0;
    iVar1 = iVar4 + 0x2c0;
    do {
      FUN_0026ba20(iVar1);
      iVar1 = iVar1 + 0xf0;
      FUN_001246a0(iVar5,iVar3);
      iVar5 = iVar5 + 0x16c;
      iVar3 = iVar2 >> 0x18;
      iVar2 = iVar2 + 0x1000000;
    } while (iVar3 < 2);
    *(undefined4 *)(iVar4 + 0x778) = 2;
  }
  FUN_0026c8d0(param_1);
  iVar5 = 0x1000000;
  iVar3 = iVar4 + 0x4a0;
  iVar1 = iVar4 + 0x2c0;
  do {
    FUN_0026bff0(iVar1);
    FUN_00124708(iVar3);
    iVar3 = iVar3 + 0x16c;
    FUN_0026bc50(0x3d4ccccd,iVar1);
    iVar2 = iVar5 >> 0x18;
    iVar5 = iVar5 + 0x1000000;
    iVar1 = iVar1 + 0xf0;
  } while (iVar2 < 2);
  iVar1 = 0;
  iVar3 = 0x1000000;
  do {
    *(undefined1 *)(iVar4 + 0x77c + iVar1) = 1;
    *(undefined1 *)(iVar4 + 0x77d + iVar1) = 1;
    *(undefined1 *)(iVar4 + 0x77e + iVar1) = 1;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar1 < 1);
  if (*(char *)(iVar4 + 0x79c) != '\0') {
    FUN_001078f0(param_1,0);
  }
  *(undefined4 *)(iVar4 + 0x778) = 3;
LAB_001071bc:
  iVar1 = iVar4 + 0x7a8;
  FUN_0020dcb0(iVar1);
  FUN_0020dcf8(iVar1,0x3f2ec0);
  FUN_0020dec8(iVar1,0x3f2ee0);
  *(undefined4 *)(iVar4 + 0x778) = 0x1c;
  return 1;
}


// ==== FUN_00107228 @ 00107228 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f544 int

void FUN_00107228(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  lVar6 = 0;
  iVar8 = 0x1000000;
  FUN_0026c8e0();
  do {
    iVar7 = (int)param_1 + (int)lVar6 * 0xf0 + 0x2c0;
    lVar2 = FUN_0026bc80(iVar7);
    lVar3 = FUN_0026c9c0(param_1,lVar6);
    if (lVar2 == -1) {
      if (lVar3 == 4) {
        FUN_0026ca98(param_1,iVar7,lVar6);
        goto LAB_001072c0;
      }
LAB_001072c8:
      if (lVar2 != -1) {
        pcVar1 = *(char **)(DAT_0040f0e0 + 0x21060);
        if (pcVar1 == (char *)0x0) {
          FUN_0026cb38(param_1,iVar7,lVar2);
        }
        else if (((pcVar1[8] != '\0') && (*pcVar1 == lVar6)) && (lVar6 = FUN_00103860(), lVar6 == 0)
                ) {
          iVar5 = *(int *)(DAT_0040f0e0 + 0x21070);
          if (((iVar5 == DAT_0040f0e0 + 0x20f78) || (iVar5 == DAT_0040f0e0 + 0x20fa0)) ||
             (iVar5 == DAT_0040f0e0 + 0x20fd8)) {
            uVar4 = 1;
            if (*(int *)(*(int *)(DAT_0040f0e0 + 0x21070) + 4) == DAT_0040f0e0 + 0x21028) {
              if (*(int *)(DAT_0040f0e0 + 0x21084) == 0) {
                if (*(int *)(DAT_0040f544 + 0x3924) != 0) goto LAB_00107398;
              }
              else {
                uVar4 = 0;
              }
            }
            else {
LAB_00107398:
              uVar4 = 0;
            }
            FUN_00103800(DAT_0040f0e0,uVar4);
          }
          if (*(int *)(DAT_0040f0e0 + 0x21084) == 0) {
            FUN_0026cb38(param_1,iVar7,lVar2);
          }
        }
      }
    }
    else {
LAB_001072c0:
      if (lVar3 != 4) goto LAB_001072c8;
    }
    lVar6 = (long)(iVar8 >> 0x18);
    iVar8 = iVar8 + 0x1000000;
    if (1 < lVar6) {
      iVar7 = 0x1000000;
      iVar8 = (int)param_1 + 0x4a0;
      do {
        FUN_00124728(iVar8);
        FUN_00124730(iVar8);
        iVar8 = iVar8 + 0x16c;
        iVar5 = iVar7 >> 0x18;
        iVar7 = iVar7 + 0x1000000;
      } while (iVar5 < 2);
      FUN_00125970(param_1);
      return;
    }
  } while( true );
}


// ==== FUN_00107470 @ 00107470 ====
// GLOBAL DAT_0040f0e0 int

void FUN_00107470(int param_1,char param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  
  iVar5 = (int)param_2;
  if (((0.0 < *(float *)(param_1 + iVar5 * 4 + 0x780)) ||
      (0.0 < *(float *)(param_1 + 0x784 + iVar5 * 4))) &&
     (*(char *)(param_1 + iVar5 + 0x77c) == '\0')) {
    *(undefined1 *)(param_1 + 0x79d + iVar5) = 1;
  }
  iVar6 = param_1 + 0x784;
  pcVar7 = (char *)(param_1 + 0x79d + iVar5);
  iVar1 = iVar5 * 4;
  if (*pcVar7 != '\0') {
    iVar1 = param_1 + iVar5 * 4;
    *(undefined4 *)(iVar1 + 0x780) = 0;
    *(undefined4 *)(iVar6 + iVar5 * 4) = 0;
    *(undefined4 *)(iVar1 + 0x78c) = 0;
    *(undefined4 *)(iVar1 + 0x790) = 0;
    *(undefined4 *)(iVar1 + 0x788) = 0;
    *(undefined4 *)(iVar1 + 0x794) = 0;
    *(undefined4 *)(iVar1 + 0x798) = 0;
    *(undefined1 *)(param_1 + iVar5 + 0x77d) = 1;
    *(undefined1 *)(param_1 + iVar5 + 0x77e) = 1;
    *pcVar7 = '\0';
    return;
  }
  pfVar3 = (float *)(param_1 + 0x78c + iVar1);
  fVar8 = *pfVar3;
  if (0.0 < fVar8) {
    fVar8 = fVar8 - *(float *)(DAT_0040f0e0 + 0x2013c);
    *pfVar3 = fVar8;
    if (fVar8 <= 0.0) {
      *(undefined4 *)(param_1 + iVar1 + 0x780) = 0;
      *(undefined1 *)(param_1 + iVar5 + 0x77d) = 1;
    }
    else {
      pfVar3 = (float *)(param_1 + 0x780 + iVar1);
      if (*pfVar3 != 1.0) {
        *pfVar3 = 1.0;
        *(undefined1 *)(param_1 + iVar5 + 0x77d) = 1;
      }
    }
  }
  pfVar3 = (float *)(param_1 + 0x790 + iVar1);
  fVar8 = *pfVar3;
  if (0.0 < fVar8) {
    fVar8 = fVar8 - *(float *)(DAT_0040f0e0 + 0x2013c);
    *pfVar3 = fVar8;
    if (fVar8 <= 0.0) {
      fVar8 = *(float *)(param_1 + iVar1 + 0x788);
      if (fVar8 != *(float *)(iVar6 + iVar1)) {
        *(float *)(iVar6 + iVar1) = fVar8;
        *(undefined1 *)(param_1 + iVar5 + 0x77e) = 1;
      }
      *(undefined4 *)(param_1 + iVar1 + 0x794) = 0;
      return;
    }
    if (fVar8 <= *(float *)(param_1 + iVar1 + 0x798)) {
      pfVar2 = (float *)(param_1 + 0x794 + iVar1);
      pfVar4 = (float *)(param_1 + 0x788 + iVar1);
      fVar9 = *pfVar4;
      fVar8 = *pfVar2 / 3.2;
      pfVar3 = (float *)(iVar6 + iVar1);
      if (fVar8 <= fVar9) {
        if (*pfVar3 == fVar9) {
          return;
        }
        *pfVar3 = fVar9;
        *pfVar2 = *pfVar4;
        *(undefined1 *)(param_1 + iVar5 + 0x77e) = 1;
        return;
      }
      if (*pfVar3 == fVar8) {
        return;
      }
      *pfVar3 = fVar8;
      *pfVar2 = fVar8;
      goto LAB_0010771c;
    }
    fVar8 = *(float *)(param_1 + iVar1 + 0x794);
  }
  else {
    fVar8 = *(float *)(param_1 + iVar1 + 0x788);
  }
  if (fVar8 == *(float *)(iVar6 + iVar1)) {
    return;
  }
  *(float *)(iVar6 + iVar1) = fVar8;
LAB_0010771c:
  *(undefined1 *)(param_1 + iVar5 + 0x77e) = 1;
  return;
}


// ==== FUN_00107730 @ 00107730 ====

void FUN_00107730(undefined8 param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  if (param_2 == 0) {
    FUN_001077b8(param_1,param_3,param_4);
  }
  else if (param_2 == 1) {
    FUN_00107800(param_1,param_3,param_4);
  }
  return;
}


// ==== FUN_00107788 @ 00107788 ====

void FUN_00107788(float param_1,int param_2,int param_3)

{
  float *pfVar1;
  
  pfVar1 = (float *)(param_2 + 0x78c + ((param_3 << 0x18) >> 0x16));
  if (*pfVar1 < param_1) {
    *pfVar1 = param_1;
  }
  return;
}


// ==== FUN_001077b8 @ 001077b8 ====

void FUN_001077b8(float param_1,int param_2,char param_3,ulong param_4)

{
  float *pfVar1;
  
  if (((*(char *)(param_2 + param_3 + 0x77c) != '\0') && ((param_4 & 1) != 0)) &&
     (pfVar1 = (float *)(param_2 + 0x78c + param_3 * 4), *pfVar1 < param_1)) {
    *pfVar1 = param_1;
  }
  return;
}


// ==== FUN_00107800 @ 00107800 ====

void FUN_00107800(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5
                 ,char param_6,ulong param_7)

{
  int iVar1;
  float *pfVar2;
  
  if ((*(char *)(param_5 + param_6 + 0x77c) != '\0') && (iVar1 = param_6 * 4, (param_7 & 1) != 0)) {
    pfVar2 = (float *)(param_5 + 0x794 + iVar1);
    param_5 = param_5 + iVar1;
    if (*pfVar2 < param_3) {
      *(undefined4 *)(param_5 + 0x790) = param_1;
      *pfVar2 = param_3;
      *(undefined4 *)(param_5 + 0x798) = param_4;
      if (0.999999 < *pfVar2) {
        *pfVar2 = 0.999999;
      }
    }
  }
  return;
}


// ==== FUN_00107880 @ 00107880 ====

void FUN_00107880(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0x1000000;
  do {
    FUN_001078d8(param_1,iVar1);
    iVar1 = iVar2 >> 0x18;
    iVar2 = iVar2 + 0x1000000;
  } while (iVar1 < 1);
  return;
}


// ==== FUN_001078d8 @ 001078d8 ====

void FUN_001078d8(int param_1,char param_2)

{
  *(undefined1 *)(param_1 + param_2 + 0x79d) = 1;
  return;
}


// ==== FUN_001078f0 @ 001078f0 ====

void FUN_001078f0(int param_1,undefined1 param_2)

{
  FUN_0026ca20();
  *(undefined1 *)(param_1 + 0x79c) = param_2;
  return;
}


// ==== FUN_00107928 @ 00107928 ====
// GLOBAL DAT_003bc538 undefined4
// GLOBAL DAT_003bc550 undefined4
// GLOBAL DAT_003bc520 undefined4
// GLOBAL DAT_003bc568 undefined4
// GLOBAL DAT_003bc578 float
// GLOBAL DAT_003bc57c undefined4
// GLOBAL DAT_003bc56c undefined1
// GLOBAL DAT_003bc570 undefined4
// GLOBAL DAT_003bc574 undefined4

void FUN_00107928(float param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3 == 1) {
    puVar1 = &DAT_003bc550;
    uVar2 = DAT_003bc550;
  }
  else if (param_3 < 2) {
    if (param_3 != 0) {
      return;
    }
    puVar1 = &DAT_003bc538;
    uVar2 = DAT_003bc538;
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 3) {
        return;
      }
      FUN_00107730(DAT_003bc570,DAT_003bc574,DAT_003bc578 * param_1,DAT_003bc57c,param_2,
                   DAT_003bc568,DAT_003bc56c,0xffff);
      return;
    }
    puVar1 = &DAT_003bc520;
    uVar2 = DAT_003bc520;
  }
  FUN_00107730(puVar1[2],puVar1[3],(float)puVar1[4] * param_1,puVar1[5],param_2,uVar2,
               *(undefined1 *)(puVar1 + 1),0xffff);
  return;
}


// ==== FUN_00107a00 @ 00107a00 ====

void FUN_00107a00(void)

{
  return;
}


// ==== FUN_00107a08 @ 00107a08 ====

void FUN_00107a08(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)((int)param_1 + 0x1c) = param_3;
  *(int *)((int)param_1 + 0x20) = (int)param_2;
  FUN_00274e68(param_1,param_2,param_4);
  return;
}


// ==== FUN_00107a40 @ 00107a40 ====

void FUN_00107a40(undefined8 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)param_1;
  *(undefined4 *)(puVar1 + 0x3ac) = 0;
  *(undefined4 *)(puVar1 + 0x3b4) = 0xffffffff;
  puVar1[0x3b8] = 1;
  FUN_00107ab8(param_1,0,0);
  *puVar1 = 0;
  return;
}


// ==== FUN_00107a88 @ 00107a88 ====

void FUN_00107a88(undefined8 param_1)

{
  FUN_00107b08(param_1,0,0);
  *(undefined1 *)((int)param_1 + 0x3b8) = 0;
  return;
}


// ==== FUN_00107ab8 @ 00107ab8 ====

void FUN_00107ab8(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x3b4) = param_2;
  iVar1 = param_1 + param_2 * 0x24 + 4;
  *(int *)(param_1 + 0x3ac) = iVar1;
  FUN_00274f58(iVar1,0x80);
  FUN_00274f70(*(undefined4 *)(param_1 + 0x3ac));
  return;
}


// ==== FUN_00107b08 @ 00107b08 ====

void FUN_00107b08(int param_1)

{
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
  return;
}


// ==== FUN_00107b18 @ 00107b18 ====

void FUN_00107b18(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
    FUN_00271480();
  } while (0 < iVar1);
  FUN_00274fc8(param_1 + param_2 * 0x24 + 4);
  return;
}


// ==== FUN_00107b78 @ 00107b78 ====

void FUN_00107b78(int param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00274f58(*(undefined4 *)(param_1 + 0x3ac),param_3);
  return;
}


// ==== FUN_00107b98 @ 00107b98 ====

void FUN_00107b98(int param_1,int param_2)

{
  FUN_00274f60(param_1 + param_2 * 0x24 + 4);
  return;
}


// ==== FUN_00107bc0 @ 00107bc0 ====

int FUN_00107bc0(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  param_1 = param_1 + 4;
  iVar2 = 0;
  do {
    lVar1 = FUN_00274fd8(param_1,param_2);
    if (lVar1 != 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x24;
  } while (iVar2 < 0x1a);
  return -1;
}


// ==== FUN_00107c20 @ 00107c20 ====

void FUN_00107c20(int param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x3b8) == '\0') && (lVar1 = FUN_001080f0(), lVar1 == 0)) {
    FUN_0035e7d8(param_2);
  }
  else {
    FUN_00274f80(*(undefined4 *)(param_1 + 0x3ac),param_2);
  }
  return;
}


// ==== FUN_00107c80 @ 00107c80 ====

undefined4 FUN_00107c80(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x24 + param_1 + 0x24);
}


// ==== FUN_00107c98 @ 00107c98 ====

void FUN_00107c98(undefined8 param_1,undefined4 *param_2)

{
  FUN_00107cc8(param_1,param_2[1]);
  FUN_00107d20(*param_2);
  return;
}


// ==== FUN_00107cc8 @ 00107cc8 ====

void FUN_00107cc8(int param_1)

{
  FUN_00274f58(*(undefined4 *)(param_1 + 0x3ac));
  return;
}


// ==== FUN_00107ce8 @ 00107ce8 ====

undefined4 FUN_00107ce8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x3ac) + 0x14);
}


// ==== FUN_00107cf8 @ 00107cf8 ====

void FUN_00107cf8(undefined8 param_1)

{
  FUN_00107c20(0x40f0f0,param_1);
  return;
}


// ==== FUN_00107d20 @ 00107d20 ====

void FUN_00107d20(undefined8 param_1)

{
  FUN_00107c20(0x40f0f0,param_1);
  return;
}


// ==== FUN_00107d48 @ 00107d48 ====

void FUN_00107d48(void)

{
  return;
}


// ==== FUN_00107d50 @ 00107d50 ====

void FUN_00107d50(void)

{
  return;
}


// ==== FUN_00107d58 @ 00107d58 ====

void FUN_00107d58(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  return;
}


// ==== FUN_00107e00 @ 00107e00 ====

void FUN_00107e00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// ==== FUN_00107e10 @ 00107e10 ====

undefined4 FUN_00107e10(undefined4 *param_1)

{
  *param_1 = 0;
  return 1;
}


// ==== FUN_00107e20 @ 00107e20 ====

void FUN_00107e20(void)

{
  return;
}


// ==== FUN_00107e28 @ 00107e28 ====

void FUN_00107e28(void)

{
  return;
}


// ==== FUN_00107e30 @ 00107e30 ====
// GLOBAL null undefined1
// GLOBAL null undefined1
// GLOBAL null undefined1

void FUN_00107e30(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0xc88) = 1;
  *(undefined4 *)(param_1 + 0xe10) = 0;
  *(undefined4 *)(param_1 + 0xe14) = 0;
  uGpffff81aa = 0;
  uGpffff81ac = 0;
  uGpffff81ab = 0;
  FUN_00108d78();
  iVar4 = 10;
  puVar1 = (undefined4 *)(param_1 + 0xcb4);
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
  iVar4 = 10;
  puVar1 = (undefined4 *)(param_1 + 0xce0);
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
  puVar1 = (undefined4 *)(param_1 + 0xd0c);
  iVar4 = 10;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
  puVar1 = (undefined4 *)(param_1 + 0xd38);
  iVar4 = 10;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
  memset(param_1 + 0xd3c,0,0xcc);
  uVar2 = FUN_00271348();
  *(undefined4 *)(param_1 + 0xe08) = uVar2;
  FUN_00271368(2);
  uVar3 = FUN_00107c80(0x40f0f0,0x14);
  uVar2 = FUN_00271398(0x108050,0,uVar3,0x10000,4);
  *(undefined4 *)(param_1 + 0xe0c) = uVar2;
  FUN_00271408();
  WakeupThread(*(undefined4 *)(param_1 + 0xe0c));
  return;
}


// ==== FUN_00107f60 @ 00107f60 ====

undefined4 FUN_00107f60(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0xc88) == 1) {
    lVar2 = FUN_00108db8();
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xc88) = 0x1c;
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_00107fb8 @ 00107fb8 ====

void FUN_00107fb8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = ChangeThreadPriority(*(undefined4 *)(param_1 + 0xe08),3);
  ChangeThreadPriority(*(undefined4 *)(param_1 + 0xe08),uVar1);
  ChangeThreadPriority(*(undefined4 *)(param_1 + 0xe0c),(int)uVar1 + 2);
  return;
}


// ==== FUN_00108008 @ 00108008 ====

undefined8 FUN_00108008(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = ChangeThreadPriority(*(undefined4 *)(param_1 + 0xe08),3);
  ChangeThreadPriority(*(undefined4 *)(param_1 + 0xe08),uVar1);
  return uVar1;
}


// ==== FUN_00108050 @ 00108050 ====
// GLOBAL DAT_0040f4c4 int

void FUN_00108050(void)

{
  do {
    FUN_00274920();
    if (*(code **)(DAT_0040f4c4 + 0xe10) != (code *)0x0) {
      (**(code **)(DAT_0040f4c4 + 0xe10))(*(undefined4 *)(DAT_0040f4c4 + 0xe14));
      *(undefined4 *)(DAT_0040f4c4 + 0xe10) = 0;
    }
    FUN_00108e78(DAT_0040f4c4);
    FUN_00271480();
  } while( true );
}


// ==== FUN_001080a0 @ 001080a0 ====

undefined4 FUN_001080a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xe10) == 0) {
    *(undefined4 *)(param_1 + 0xe14) = param_3;
    *(undefined4 *)(param_1 + 0xe10) = param_2;
    return 1;
  }
  return 0;
}


// ==== FUN_001080c0 @ 001080c0 ====
// GLOBAL DAT_0040f4c4 int

bool FUN_001080c0(void)

{
  int iVar1;
  
  iVar1 = GetThreadId();
  return iVar1 == *(int *)(DAT_0040f4c4 + 0xe08);
}


// ==== FUN_001080f0 @ 001080f0 ====
// GLOBAL DAT_0040f4c4 int

bool FUN_001080f0(void)

{
  int iVar1;
  
  iVar1 = GetThreadId();
  return iVar1 == *(int *)(DAT_0040f4c4 + 0xe0c);
}


// ==== FUN_00108120 @ 00108120 ====
// GLOBAL DAT_0040f4a4 int

int FUN_00108120(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = (int *)(param_1 + 0xcb8);
  iVar8 = 0;
  lVar3 = FUN_001080f0();
  iVar1 = DAT_0040f4a4;
  do {
    if (*piVar7 != 0) {
      iVar2 = FUN_00107bc0(0x40f0f0);
      if (lVar3 == 0) {
        iVar2 = *piVar7;
      }
      else {
        if (iVar1 != iVar2) goto LAB_001081e4;
        iVar2 = *piVar7;
      }
      iVar6 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        plVar5 = *(long **)(iVar2 + 0xc);
        plVar4 = plVar5;
        do {
          if (*plVar4 == param_2) {
            iVar2 = (int)plVar5[1];
            goto LAB_001081cc;
          }
          iVar6 = iVar6 + 1;
          plVar5 = plVar5 + 2;
          plVar4 = plVar4 + 2;
        } while (iVar6 < *(int *)(iVar2 + 8));
      }
      iVar2 = 0;
LAB_001081cc:
      if (iVar2 != 0) {
        return iVar2;
      }
    }
LAB_001081e4:
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 1;
    if (10 < iVar8) {
      return 0;
    }
  } while( true );
}


// ==== FUN_00108218 @ 00108218 ====
// GLOBAL DAT_0040f4a4 int

int FUN_00108218(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = (int *)(param_1 + 0xce4);
  iVar8 = 0;
  lVar3 = FUN_001080f0();
  iVar1 = DAT_0040f4a4;
  do {
    if (*piVar7 != 0) {
      iVar2 = FUN_00107bc0(0x40f0f0);
      if (lVar3 == 0) {
        if (iVar2 == 1) {
          iVar2 = *piVar7;
          goto LAB_001082a8;
        }
      }
      else if (iVar1 == iVar2) {
        iVar2 = *piVar7;
LAB_001082a8:
        iVar6 = 0;
        if (0 < *(int *)(iVar2 + 8)) {
          plVar5 = *(long **)(iVar2 + 0xc);
          plVar4 = plVar5;
          do {
            iVar6 = iVar6 + 1;
            if (*plVar4 == param_2) {
              iVar2 = (int)plVar5[1];
              goto LAB_001082e0;
            }
            plVar4 = plVar4 + 2;
            plVar5 = plVar5 + 2;
          } while (iVar6 < *(int *)(iVar2 + 8));
        }
        iVar2 = 0;
LAB_001082e0:
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    }
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 1;
    if (10 < iVar8) {
      return 0;
    }
  } while( true );
}


// ==== FUN_00108328 @ 00108328 ====
// GLOBAL DAT_0040f4a4 int

int FUN_00108328(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = (int *)(param_1 + 0xc8c);
  iVar9 = 0;
  lVar4 = FUN_001080f0();
  iVar1 = DAT_0040f4a4;
  uVar2 = DAT_0040f4a4 - 0xd;
  do {
    if (*piVar8 != 0) {
      iVar3 = FUN_00107bc0(0x40f0f0);
      if (uVar2 < 2) {
        iVar3 = *piVar8;
      }
      else if (iVar3 == 1) {
        iVar3 = *piVar8;
      }
      else {
        if ((lVar4 == 0) || (iVar1 != iVar3)) goto LAB_00108418;
        iVar3 = *piVar8;
      }
      iVar7 = 0;
      if (*(int *)(iVar3 + 8) < 1) {
LAB_00108408:
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar3 + 0xc);
        while( true ) {
          iVar6 = *(int *)(iVar7 * 0x10 + iVar6 + 8);
          lVar5 = stricmp(iVar6 + 0xa8,param_2);
          iVar7 = iVar7 + 1;
          if (lVar5 == 0) break;
          if (*(int *)(iVar3 + 8) <= iVar7) goto LAB_00108408;
          iVar6 = *(int *)(iVar3 + 0xc);
        }
      }
      if (iVar6 != 0) {
        return iVar6;
      }
    }
LAB_00108418:
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 1;
    if (10 < iVar9) {
      return 0;
    }
  } while( true );
}


// ==== FUN_00108458 @ 00108458 ====

undefined4 FUN_00108458(int param_1,int param_2,short param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while ((iVar1 = iVar1 + 1, *(int *)(param_1 + 0xd3c) != param_2 ||
         ((long)*(short *)(param_1 + 0xd44) != (long)(int)param_3))) {
    param_1 = param_1 + 0xc;
    if (0x10 < iVar1) {
      return 0;
    }
  }
  *(short *)(param_1 + 0xd46) = *(short *)(param_1 + 0xd46) + 1;
  return *(undefined4 *)(param_1 + 0xd40);
}


// ==== FUN_001084a8 @ 001084a8 ====

void FUN_001084a8(int param_1,int param_2,short param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while ((iVar1 = iVar1 + 1, *(int *)(param_1 + 0xd3c) != param_2 ||
         ((long)*(short *)(param_1 + 0xd44) != (long)(int)param_3))) {
    param_1 = param_1 + 0xc;
    if (0x10 < iVar1) {
      return;
    }
  }
  *(short *)(param_1 + 0xd46) = *(short *)(param_1 + 0xd46) + -1;
  return;
}


// ==== FUN_001084f8 @ 001084f8 ====

void FUN_001084f8(int param_1,int param_2,short param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xd40);
  iVar1 = 0;
  while ((iVar1 = iVar1 + 1, puVar2[-1] != param_2 ||
         ((long)*(short *)(puVar2 + 1) != (long)(int)param_3))) {
    puVar2 = puVar2 + 3;
    if (0x10 < iVar1) {
      return;
    }
  }
  *puVar2 = 0;
  return;
}


// ==== FUN_00108540 @ 00108540 ====

void FUN_00108540(uint param_1,int param_2,undefined8 param_3,undefined2 param_4)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  short *psVar7;
  int *piVar8;
  
  if (param_2 == 1) {
    iVar2 = param_1 + 0xcb8;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
LAB_00108600:
      piVar8 = (int *)(param_1 + 0xd40);
      iVar2 = 0;
      piVar3 = piVar8;
      piVar6 = piVar8;
      do {
        iVar4 = *piVar3;
        piVar3 = piVar3 + 3;
        if (iVar4 == 0) {
          iVar2 = param_1 + iVar2;
          *(int *)(iVar2 + 0xd3c) = param_2;
          *piVar6 = (int)param_3;
          *(undefined2 *)(iVar2 + 0xd44) = param_4;
          *(undefined2 *)(iVar2 + 0xd46) = 0;
          return;
        }
        piVar6 = piVar6 + 3;
        iVar2 = iVar2 + 0xc;
      } while ((int)piVar3 < (int)(param_1 + 0xe0c));
      uVar5 = (ulong)param_1;
      psVar7 = (short *)(param_1 + 0xd46);
      iVar2 = 0;
      do {
        sVar1 = *psVar7;
        psVar7 = psVar7 + 6;
        iVar4 = (int)uVar5;
        if (sVar1 == 0) {
          *(int *)(param_1 + iVar2 + 0xd3c) = param_2;
          *(int *)((int)piVar8 + iVar2) = (int)param_3;
          *(undefined2 *)(iVar4 + 0xd44) = param_4;
          *(undefined2 *)(iVar4 + 0xd46) = 0;
          return;
        }
        uVar5 = (ulong)(iVar4 + 0xc);
        iVar2 = iVar2 + 0xc;
      } while ((long)uVar5 < (long)(int)(param_1 + 0xcc));
      return;
    }
    iVar2 = param_1 + 0xc8c;
  }
  else if (param_2 == 2) {
    iVar2 = param_1 + 0xce4;
  }
  else {
    if (param_2 != 3) goto LAB_00108600;
    iVar2 = param_1 + 0xd10;
  }
  FUN_00108718(param_1,iVar2,0xb,param_3);
  return;
}


// ==== FUN_00108668 @ 00108668 ====

void FUN_00108668(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)param_1;
  piVar3 = (int *)(iVar2 + 0xd40);
  FUN_00108748(param_1,iVar2 + 0xcb8,0xb,param_2);
  FUN_00108748(param_1,iVar2 + 0xce4,0xb,param_2);
  FUN_00108748(param_1,iVar2 + 0xc8c,0xb,param_2);
  iVar2 = 0x10;
  do {
    if ((*piVar3 != 0) && (lVar1 = FUN_00107bc0(0x40f0f0), lVar1 == param_2)) {
      *piVar3 = 0;
    }
    iVar2 = iVar2 + -1;
    piVar3 = piVar3 + 3;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_00108718 @ 00108718 ====

void FUN_00108718(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      iVar1 = iVar1 + 1;
      if (*param_2 == 0) {
        *param_2 = param_4;
        return;
      }
      param_2 = param_2 + 1;
    } while (iVar1 < param_3);
  }
  return;
}


// ==== FUN_00108748 @ 00108748 ====

void FUN_00108748(undefined8 param_1,int *param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (0 < param_3) {
    do {
      if ((*param_2 != 0) && (lVar1 = FUN_00107bc0(0x40f0f0), lVar1 == param_4)) {
        *param_2 = 0;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ==== FUN_001087c8 @ 001087c8 ====
// GLOBAL DAT_0040d99a char

undefined8 FUN_001087c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_0040d99a == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0027c278(param_2);
    uVar1 = FUN_00108818(param_1,uVar1);
  }
  return uVar1;
}


// ==== FUN_00108818 @ 00108818 ====
// GLOBAL null char

long FUN_00108818(int param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  if (cGpffff81aa != '\0') {
    piVar2 = (int *)(param_1 + 0xd10);
    iVar3 = 0;
    do {
      if ((*piVar2 != 0) && (lVar1 = FUN_002750b8(*piVar2,param_2), lVar1 != 0)) {
        return lVar1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 0xb);
  }
  return 0;
}


// ==== FUN_00108890 @ 00108890 ====
// GLOBAL DAT_0040f4c4 int
// GLOBAL DAT_0040eae4 int
// GLOBAL PTR_s_Language/Strings/Main%s.bin_003bc580 undefined_*
// GLOBAL PTR_DAT_003f40b0 undefined_*
// GLOBAL null char
// GLOBAL null char

/* Strings referenciadas:
     "Language/Strings/Main%s.bin" */

void FUN_00108890(void)

{
  bool bVar1;
  undefined1 auStack_60 [64];
  
  if ((cGpffff81aa == '\0') && (cGpffff81ab == '\0')) {
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (!bVar1) {
      cGpffff81ab = '\x01';
      sprintf(auStack_60,PTR_s_Language_Strings_Main_s_bin_003bc580,
              (&PTR_DAT_003f40b0)[DAT_0040eae4]);
      FUN_001093c0(DAT_0040f4c4,auStack_60,8,1,0x108958,0,0,0x2000000);
    }
  }
  return;
}


// ==== FUN_00108958 @ 00108958 ====
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL null undefined1

void FUN_00108958(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001092f8();
  FUN_00272730(uVar1);
  FUN_00108540(DAT_0040f4c4,3,uVar1,0);
  uGpffff81aa = 1;
  return;
}


// ==== FUN_001089b0 @ 001089b0 ====

uint FUN_001089b0(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = FUN_00275340(param_4);
  fVar3 = (float)FUN_0029d950((float)(int)uVar1 * (param_1 / param_2));
  uVar2 = (int)fVar3;
  if ((int)uVar1 < (int)fVar3) {
    uVar2 = uVar1;
  }
  return uVar2 & 0xffff;
}


// ==== FUN_00108a20 @ 00108a20 ====
// GLOBAL DAT_0040eae4 int
// GLOBAL PTR_DAT_003f40b0 undefined_*

undefined * FUN_00108a20(void)

{
  return (&PTR_DAT_003f40b0)[DAT_0040eae4];
}


// ==== FUN_00108a40 @ 00108a40 ====
// GLOBAL DAT_0040eae4 undefined4
// GLOBAL DAT_0040ead8 undefined1
// GLOBAL null undefined1

void FUN_00108a40(void)

{
  DAT_0040eae4 = 1;
  DAT_0040ead8 = 0;
  uGpffff92f8 = 0;
  FUN_00108a70();
  return;
}


// ==== FUN_00108a70 @ 00108a70 ====

void FUN_00108a70(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)param_1;
  *(undefined1 *)(puVar9 + 9) = 0;
  puVar2 = (undefined8 *)FUN_00124e78(0);
  puVar5 = (undefined8 *)(puVar9 + 10);
  puVar3 = puVar2 + 0x10;
  if ((((uint)puVar2 | (uint)puVar5) & 7) == 0) {
    do {
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *puVar5 = *puVar2;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      puVar2 = puVar2 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar2 != puVar3);
  }
  else {
    do {
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *puVar5 = *puVar2;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      puVar2 = puVar2 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar2 != puVar3);
  }
  uVar6 = puVar2[1];
  uVar1 = *(undefined4 *)(puVar2 + 2);
  *puVar5 = *puVar2;
  puVar5[1] = uVar6;
  *(undefined4 *)(puVar5 + 2) = uVar1;
  *(undefined1 *)((int)puVar9 + 0x1b) = 0;
  *(undefined1 *)((int)puVar9 + 0x1a) = 0;
  *(undefined1 *)(puVar9 + 7) = 0;
  puVar9[3] = 0;
  *puVar9 = 1;
  *(undefined1 *)(puVar9 + 6) = 1;
  *(undefined1 *)((int)puVar9 + 0x19) = 1;
  lVar4 = FUN_0026f2e0();
  if (lVar4 == 1) {
    puVar9[1] = 1;
  }
  else {
    puVar9[1] = 0;
  }
  puVar9[2] = 1;
  puVar9[5] = 0x3f800000;
  puVar9[4] = 0x3f800000;
  FUN_00108bb8(param_1);
  return;
}


// ==== FUN_00108bb8 @ 00108bb8 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f544 undefined4

void FUN_00108bb8(int param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(DAT_0040f4c0 + 0xd564) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = FUN_001aeb50(DAT_0040f4c0,0);
    FUN_0027b388(0x3fe38e39,uVar1);
    uVar1 = FUN_001aeb50(DAT_0040f4c0,1);
    FUN_0027b388(0x3fe38e39,uVar1);
    uVar1 = FUN_001aeb50(DAT_0040f4c0,2);
    FUN_0027b388(0x3fe38e39,uVar1);
    *(undefined1 *)(DAT_0040f4c0 + 0xc) = 1;
    FUN_0020a220(DAT_0040f544);
  }
  else {
    uVar1 = FUN_001aeb50(DAT_0040f4c0,0);
    FUN_0027b388(0x3faaaaab,uVar1);
    uVar1 = FUN_001aeb50(DAT_0040f4c0,1);
    FUN_0027b388(0x3faaaaab,uVar1);
    uVar1 = FUN_001aeb50(DAT_0040f4c0,2);
    FUN_0027b388(0x3faaaaab,uVar1);
    *(undefined1 *)(DAT_0040f4c0 + 0xc) = 0;
    FUN_0020a220(DAT_0040f544);
  }
  return;
}


// ==== fe_FE_DIFFEASY_00108ce0 @ 00108ce0 ====
// GLOBAL DAT_0040f4c4 undefined4

/* Strings referenciadas:
     "FE_DIFFEASY"
     "FE_DIFFNORMAL"
     "FE_DIFFHARD"
     "FE_BLACKOPS" */

void fe_FE_DIFFEASY_00108ce0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    uVar2 = 0x3f2f58;
  }
  else {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        uVar2 = 0x3f2f48;
        goto LAB_00108d64;
      }
    }
    else if (iVar1 == 2) {
      uVar2 = 0x3f2f68;
      goto LAB_00108d64;
    }
    uVar2 = 0x3f2f78;
  }
LAB_00108d64:
  FUN_001087c8(DAT_0040f4c4,uVar2);
  return;
}


// ==== FUN_00108d78 @ 00108d78 ====

void FUN_00108d78(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[4] = iVar2;
    *(undefined1 *)(puVar1 + 0x4e) = 0;
    iVar2 = iVar2 + 1;
    *(undefined1 *)((int)puVar1 + 0x139) = 0;
    *(undefined1 *)((int)puVar1 + 0x13a) = 0;
    *(undefined1 *)((int)puVar1 + 0x13b) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 0x50;
  } while (iVar2 < 10);
  param_1[0x321] = 1;
  return;
}


// ==== FUN_00108db8 @ 00108db8 ====
// GLOBAL DAT_0048f6c0 undefined4
// GLOBAL DAT_0040eed0 undefined

undefined4 FUN_00108db8(int param_1)

{
  if (*(int *)(param_1 + 0xc84) == 1) {
    *(undefined **)(param_1 + 0xc80) = &DAT_0040eed0;
    FUN_00268c68(0x40eed0,2,0x40eff0,0x40f580,0x410580,0x3f2f88,9,0x20);
    FUN_0027c990(0x40eed0);
    FUN_0027c498(0x40eed0);
    FUN_003266c8(DAT_0048f6c0);
    *(undefined4 *)(param_1 + 0xc84) = 0x1c;
  }
  return 1;
}


// ==== FUN_00108e78 @ 00108e78 ====

bool FUN_00108e78(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  while( true ) {
    bVar1 = iVar2 < 10;
    if (!bVar1) {
      return bVar1;
    }
    if (*(char *)(iVar3 + 0x138) != '\0') {
      if ((iVar2 == 8) && (*(char *)(param_1 + 0xc79) != '\0')) {
        FUN_00109180(param_1 + 0xb40);
        return true;
      }
      FUN_00108f28();
      return bVar1;
    }
    if (*(char *)(iVar3 + 0x139) != '\0') {
      FUN_00109180();
      return bVar1;
    }
    if (*(char *)(iVar3 + 0x13b) != '\0') break;
    iVar3 = iVar3 + 0x140;
    iVar2 = iVar2 + 1;
  }
  FUN_00109278();
  return bVar1;
}


// ==== FUN_00108f28 @ 00108f28 ====
// GLOBAL DAT_0040f4c4 int

void FUN_00108f28(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = (int *)param_1;
  if (piVar7[0x48] == 0) {
    iVar8 = FUN_0027cab8(*(undefined4 *)(DAT_0040f4c4 + 0xc80),piVar7 + 5,1);
    *piVar7 = iVar8;
    cVar1 = *(char *)((int)piVar7 + 0x13d);
  }
  else {
    cVar1 = *(char *)((int)piVar7 + 0x13d);
  }
  if (cVar1 != '\0') {
    FUN_00108668(DAT_0040f4c4,piVar7[2]);
    FUN_00107b18(0x40f0f0,piVar7[2],0);
  }
  if (piVar7[2] != -1) {
    FUN_00107ab8(0x40f0f0,piVar7[2],0);
  }
  if (piVar7[3] == 1) {
    uVar6 = (int)*(undefined8 *)(*piVar7 + 8) + 0x7ffU & 0xfffff800;
    if (piVar7[2] == -1) {
      iVar8 = piVar7[0x47];
    }
    else {
      iVar8 = FUN_00107d20(uVar6);
      piVar7[0x47] = iVar8;
    }
    iVar2 = *(int *)(*piVar7 + 0x28);
    iVar2 = (**(code **)(iVar2 + 0x1c))(*piVar7 + (int)*(short *)(iVar2 + 0x18),iVar8,uVar6);
    iVar8 = *(int *)(*piVar7 + 0x28);
    (**(code **)(iVar8 + 0x34))(*piVar7 + (int)*(short *)(iVar8 + 0x30),1);
    piVar7[0x4a] = iVar2;
  }
  else {
    if (piVar7[3] != 2) {
      pcVar4 = (code *)piVar7[0x45];
      goto LAB_00109114;
    }
    iVar8 = (int)*(undefined8 *)(*piVar7 + 8);
    uVar6 = piVar7[0x49];
    if ((uint)(iVar8 - piVar7[0x48]) < (uint)piVar7[0x49]) {
      uVar6 = iVar8 - piVar7[0x48];
    }
    uVar5 = FUN_00107d20();
    if (piVar7[0x48] == 0) {
      piVar7[0x47] = (int)uVar5;
    }
    iVar2 = *(int *)(*piVar7 + 0x28);
    iVar3 = (**(code **)(iVar2 + 0x1c))
                      (*piVar7 + (int)*(short *)(iVar2 + 0x18),uVar5,uVar6 + 0x7ff & 0xfffff800);
    iVar2 = *(int *)(*piVar7 + 0x28);
    (**(code **)(iVar2 + 0x34))(*piVar7 + (int)*(short *)(iVar2 + 0x30),1);
    iVar2 = piVar7[0x48];
    *(undefined1 *)((int)piVar7 + 0x13d) = 0;
    piVar7[0x48] = iVar2 + iVar3;
    if (iVar2 + iVar3 != iVar8) {
      if (piVar7[2] == -1) {
        return;
      }
      FUN_00107b08(0x40f0f0,piVar7[2],0);
      return;
    }
    piVar7[0x4a] = iVar8;
  }
  pcVar4 = (code *)piVar7[0x45];
LAB_00109114:
  if (pcVar4 == (code *)0x0) {
    iVar8 = piVar7[2];
  }
  else {
    (*pcVar4)(param_1,piVar7[0x46]);
    iVar8 = piVar7[2];
  }
  if (iVar8 != -1) {
    FUN_00107b08(0x40f0f0,iVar8,0);
  }
  iVar8 = *(int *)(*piVar7 + 0x28);
  (**(code **)(iVar8 + 0x14))(*piVar7 + (int)*(short *)(iVar8 + 0x10));
  *(undefined1 *)(piVar7 + 0x4e) = 0;
  *piVar7 = 0;
  return;
}


// ==== FUN_00109180 @ 00109180 ====

void FUN_00109180(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 4) == 0) {
    uVar2 = FUN_00324990(iVar4 + 0x14);
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(undefined4 *)(iVar4 + 0x134) = 0;
    iVar1 = *(int *)(iVar4 + 0x134);
  }
  else {
    iVar1 = *(int *)(iVar4 + 0x134);
  }
  if (iVar1 != *(int *)(iVar4 + 300)) {
    FUN_00324cb0(*(undefined4 *)(iVar4 + 4),*(int *)(iVar4 + 300),0,0);
    uVar2 = *(undefined4 *)(iVar4 + 4);
    while (lVar3 = FUN_00324d98(uVar2,0), lVar3 == 0) {
      FUN_00271480();
      uVar2 = *(undefined4 *)(iVar4 + 4);
    }
    *(undefined4 *)(iVar4 + 0x134) = *(undefined4 *)(iVar4 + 300);
  }
  FUN_00324a88(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 0x11c),0,
               *(undefined4 *)(iVar4 + 0x130),0,0,0);
  uVar2 = *(undefined4 *)(iVar4 + 4);
  while (lVar3 = FUN_00324d98(uVar2,0), lVar3 == 0) {
    FUN_00271480();
    uVar2 = *(undefined4 *)(iVar4 + 4);
  }
  *(int *)(iVar4 + 0x134) = *(int *)(iVar4 + 0x134) + *(int *)(iVar4 + 0x130);
  if (*(code **)(iVar4 + 0x114) != (code *)0x0) {
    (**(code **)(iVar4 + 0x114))(param_1,*(undefined4 *)(iVar4 + 0x118));
  }
  *(undefined1 *)(iVar4 + 0x139) = 0;
  return;
}


// ==== FUN_00109278 @ 00109278 ====

void FUN_00109278(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 4) == 0) {
    pcVar2 = *(code **)(iVar4 + 0x114);
  }
  else {
    FUN_003249e8();
    uVar1 = *(undefined4 *)(iVar4 + 4);
    while (lVar3 = FUN_00324d98(uVar1,0), lVar3 == 0) {
      FUN_00271480();
      uVar1 = *(undefined4 *)(iVar4 + 4);
    }
    *(undefined4 *)(iVar4 + 4) = 0;
    pcVar2 = *(code **)(iVar4 + 0x114);
  }
  *(undefined1 *)(iVar4 + 0x13a) = 0;
  *(undefined1 *)(iVar4 + 0x13b) = 0;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,*(undefined4 *)(iVar4 + 0x118));
  }
  return;
}


// ==== FUN_001092f8 @ 001092f8 ====

undefined4 FUN_001092f8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x11c);
}


// ==== FUN_00109300 @ 00109300 ====

undefined4 FUN_00109300(int param_1)

{
  return *(undefined4 *)(param_1 + 0x128);
}


// ==== FUN_00109308 @ 00109308 ====

void FUN_00109308(int param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined1 param_8,undefined4 param_9)

{
  param_1 = param_2 * 0x140 + param_1;
  strcpy(param_1 + 0x14,param_4);
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(undefined4 *)(param_1 + 0x114) = param_5;
  *(undefined4 *)(param_1 + 0x118) = param_6;
  *(undefined1 *)(param_1 + 0x13d) = param_8;
  *(undefined4 *)(param_1 + 0x124) = param_9;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x138) = 1;
  return;
}


// ==== FUN_001093c0 @ 001093c0 ====

void FUN_001093c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_8 != 0x2000000) {
    uVar1 = 2;
  }
  FUN_00109308(param_1,param_3,uVar1,param_2,param_5,param_6,param_4,param_7);
  return;
}


// ==== FUN_00109410 @ 00109410 ====

void FUN_00109410(int param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  param_1 = param_3 * 0x140 + param_1;
  strcpy(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x114) = param_4;
  *(undefined4 *)(param_1 + 0x118) = param_5;
  *(undefined1 *)(param_1 + 0x13a) = 1;
  return;
}


// ==== FUN_00109468 @ 00109468 ====

void FUN_00109468(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  param_1 = param_2 * 0x140 + param_1;
  *(undefined4 *)(param_1 + 0x118) = param_4;
  *(undefined1 *)(param_1 + 0x13b) = 1;
  *(undefined4 *)(param_1 + 0x114) = param_3;
  return;
}


// ==== FUN_00109488 @ 00109488 ====

void FUN_00109488(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  param_1 = param_2 * 0x140 + param_1;
  *(undefined4 *)(param_1 + 0x130) = param_6;
  *(undefined1 *)(param_1 + 0x139) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x11c) = param_3;
  *(undefined4 *)(param_1 + 0x128) = param_4;
  *(undefined4 *)(param_1 + 300) = param_5;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  return;
}


// ==== FUN_001094c0 @ 001094c0 ====

/* Strings referenciadas:
     "videos/%s.m2v" */

void FUN_001094c0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  sprintf(param_1 + 0x44,0x3f3040,param_2);
  strcpy(param_1 + 0x84,param_2);
  *(undefined4 *)(param_1 + 0x198) = param_4;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined4 *)(param_1 + 0x1b4) = param_3;
  if ((*(int *)(param_1 + 0x1a8) != 0x37) && (*(int *)(param_1 + 0x1a8) != 1)) {
    *(undefined1 *)(param_1 + 0x1b9) = 1;
  }
  return;
}


// ==== FUN_00109550 @ 00109550 ====

void FUN_00109550(int param_1)

{
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  if ((*(int *)(param_1 + 0x1a8) != 0x37) && (*(int *)(param_1 + 0x1a8) != 1)) {
    *(undefined1 *)(param_1 + 0x1b9) = 1;
  }
  return;
}


// ==== FUN_00109578 @ 00109578 ====

bool FUN_00109578(int param_1)

{
  return *(int *)(param_1 + 0x1a8) == 0x1c;
}


// ==== FUN_00109588 @ 00109588 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_003bc584 undefined4
// GLOBAL DAT_003bc590 undefined4
// GLOBAL DAT_003bc588 undefined4
// GLOBAL DAT_003bc58c undefined4
// GLOBAL null undefined1

void FUN_00109588(undefined4 *param_1)

{
  undefined1 auStack_d0 [136];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined1 uStack_27;
  undefined1 uStack_25;
  undefined1 uStack_24;
  
  uStack_2c = 0;
  FUN_00272328(*param_1);
  if (param_1[0x6c] != 0) {
    uStack_24 = 1;
    uStack_44 = DAT_003bc588;
    uStack_40 = DAT_003bc584;
    uStack_3c = DAT_003bc58c;
    uStack_34 = DAT_003bc590;
    uStack_25 = uGpffff81ad;
    uStack_2c = 0xc01000;
    uStack_48 = DAT_003bc584;
    uStack_38 = DAT_003bc590;
    uStack_27 = 0;
    FUN_001d91f0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x3c),auStack_d0,1);
  }
  *(undefined1 *)((int)param_1 + 0x1ba) = 1;
  return;
}


// ==== FUN_00109640 @ 00109640 ====
// GLOBAL PTR_s__NONE__003bc594 undefined_*
// GLOBAL PTR_s_Logos_003bc598 undefined_*
// GLOBAL PTR_s_DemoAttr_003bc59c undefined_*
// GLOBAL PTR_s_Intro_003bc5a0 undefined_*
// GLOBAL PTR_s_7thWave_003bc5a4 undefined_*
// GLOBAL PTR_s_Target_003bc5a8 undefined_*
// GLOBAL PTR_s_American_003bc5ac undefined_*
// GLOBAL PTR_s_Assets_003bc5b0 undefined_*
// GLOBAL PTR_s_Solomon_003bc5b4 undefined_*
// GLOBAL PTR_s_Valencio_003bc5b8 undefined_*
// GLOBAL PTR_DAT_003bc5bc undefined_*
// GLOBAL PTR_s_Level_003bc5c0 undefined_*
// GLOBAL PTR_s_Division_003bc5c4 undefined_*
// GLOBAL PTR_DAT_003bc5c8 undefined_*
// GLOBAL PTR_DAT_003bc5cc undefined_*
// GLOBAL PTR_PTR_003bc5d0 undefined_*
// GLOBAL PTR_DAT_003bc5d4 undefined_*
// GLOBAL PTR_s_CredRoll_003bc5d8 undefined_*

/* Strings referenciadas:
     "_NONE_"
     "Logos"
     "DemoAttr"
     "Intro"
     "7thWave"
     "Target"
     "American"
     "Assets"
     "Solomon"
     "Valencio"
     "Level"
     "Division"
     ... */

void FUN_00109640(undefined4 *param_1)

{
  undefined *puVar1;
  
  param_1[0x42] = PTR_s__NONE__003bc594;
  param_1[0x44] = PTR_s_Logos_003bc598;
  param_1[0x46] = PTR_s_DemoAttr_003bc59c;
  param_1[0x48] = PTR_s_Intro_003bc5a0;
  param_1[0x4a] = PTR_s_7thWave_003bc5a4;
  param_1[0x4c] = PTR_s_Target_003bc5a8;
  param_1[0x4e] = PTR_s_American_003bc5ac;
  param_1[0x50] = PTR_s_Assets_003bc5b0;
  param_1[0x52] = PTR_s_Solomon_003bc5b4;
  param_1[0x54] = PTR_s_Valencio_003bc5b8;
  param_1[0x56] = PTR_DAT_003bc5bc;
  param_1[0x58] = PTR_s_Level_003bc5c0;
  param_1[0x5a] = PTR_s_Division_003bc5c4;
  param_1[0x5c] = PTR_DAT_003bc5c8;
  param_1[0x5e] = PTR_DAT_003bc5cc;
  param_1[0x60] = PTR_PTR_003bc5d0;
  param_1[0x62] = PTR_DAT_003bc5d4;
  puVar1 = PTR_s_CredRoll_003bc5d8;
  param_1[0x69] = 1;
  param_1[100] = puVar1;
  *param_1 = 0;
  param_1[0x65] = 0;
  *(undefined1 *)((int)param_1 + 0x1ba) = 0;
  return;
}


// ==== FUN_00109760 @ 00109760 ====
// GLOBAL DAT_0040f4c4 int

/* Strings referenciadas:
     "sound\streams\%s.ssh" */

undefined4 FUN_00109760(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_90 [64];
  
  iVar2 = param_1[0x69];
  if (iVar2 != 3) {
    if (iVar2 < 4) {
      if (iVar2 == 1) {
        param_1[0x69] = 0x37;
        goto LAB_001097d8;
      }
      if (iVar2 != 2) {
        return 1;
      }
    }
    else {
      if (iVar2 == 0x1c) goto LAB_001098e0;
      if (iVar2 != 0x37) {
        return 1;
      }
LAB_001097d8:
      *(undefined1 *)((int)param_1 + 0x1bb) = 1;
      param_1[0x68] = 1;
      param_1[0x69] = 2;
      param_1[0x42] = 0;
    }
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    sprintf(auStack_90,0x3f3050,param_1[param_1[0x68] * 2 + 0x42]);
    param_1[param_1[0x68] * 2 + 0x41] = 0;
    FUN_001093c0(DAT_0040f4c4,auStack_90,8,9,0x109e78,param_1 + param_1[0x68] * 2 + 0x41,
                 *(undefined1 *)((int)param_1 + 0x1bb),0x2000000);
    *(undefined1 *)((int)param_1 + 0x1bb) = 0;
    param_1[0x69] = 3;
  }
  iVar2 = param_1[0x68] + 1;
  if (param_1[param_1[0x68] * 2 + 0x41] == 0) {
    return 0;
  }
  param_1[0x68] = iVar2;
  if (iVar2 < 0x12) {
    param_1[0x69] = 2;
    return 0;
  }
  param_1[0x69] = 0x1c;
LAB_001098e0:
  *param_1 = param_2;
  param_1[0x65] = param_3;
  param_1[0x6a] = 1;
  *(undefined1 *)((int)param_1 + 0x1b9) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  return 1;
}


// ==== FUN_00109918 @ 00109918 ====
// GLOBAL DAT_003bd1f0 int
// GLOBAL DAT_0040f0e0 int

void FUN_00109918(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  iVar3 = puVar4[0x6a];
  if (iVar3 == 0x1c) {
    if (*(char *)((int)puVar4 + 0x1b9) == '\0') {
      lVar2 = FUN_00272308(*puVar4);
      if (lVar2 == 0) {
        iVar3 = puVar4[0x6a];
      }
      else {
        if ((puVar4[0x66] & 1) == 0) goto LAB_0010997c;
        FUN_001094c0(param_1,puVar4 + 0x21,puVar4[0x6c]);
        iVar3 = puVar4[0x6a];
      }
    }
    else {
LAB_0010997c:
      *(undefined1 *)((int)puVar4 + 0x1b9) = 0;
      puVar4[0x6a] = 0x1d;
      iVar3 = puVar4[0x6a];
    }
  }
  if (iVar3 - 0x1dU < 0x1a) {
    FUN_00109cf8(param_1);
    iVar3 = puVar4[0x6a];
  }
  else {
    iVar3 = puVar4[0x6a];
  }
  if ((iVar3 == 0x37) || (iVar3 == 1)) {
    if (*(char *)(puVar4 + 0x6e) != '\0') {
      iVar3 = puVar4[0x6d];
      puVar4[0x6a] = 2;
      *(undefined1 *)(puVar4 + 0x6e) = 0;
      puVar4[0x6c] = iVar3;
      puVar4[0x6d] = 0;
      if (iVar3 != 0) {
        puVar4[0x66] = puVar4[0x66] | 2;
      }
    }
    iVar3 = puVar4[0x6a];
  }
  else {
    iVar3 = puVar4[0x6a];
  }
  if (iVar3 - 2U < 0x1a) {
    FUN_00109bb0(param_1);
    iVar3 = puVar4[0x6a];
  }
  else {
    iVar3 = puVar4[0x6a];
  }
  if (iVar3 != 0x1c) {
    return;
  }
  cVar1 = *(char *)((int)puVar4 + 0x1ba);
  if ((puVar4[0x66] & 0x100) == 0) {
    if (cVar1 != '\0') {
      iVar3 = puVar4[0x6c];
      goto LAB_00109a50;
    }
    FUN_00109588(param_1);
    puVar4[0x67] = DAT_003bd1f0;
    cVar1 = *(char *)((int)puVar4 + 0x1ba);
  }
  if (cVar1 == '\0') {
    return;
  }
  iVar3 = puVar4[0x6c];
LAB_00109a50:
  if (iVar3 != 0) {
    FUN_002722c8((float)(uint)(DAT_003bd1f0 - puVar4[0x67]) *
                 *(float *)(DAT_0040f0e0 + 0x2013c) * 0.5,*puVar4);
  }
  FUN_00271f10(*puVar4);
  return;
}


// ==== FUN_00109ae0 @ 00109ae0 ====
// GLOBAL DAT_0040f510 int

bool FUN_00109ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar3 = *(int *)(iVar5 + 0x1ac);
  if (iVar3 != 1) {
    if (1 < iVar3) {
      return true;
    }
    if (iVar3 != 0) {
      return true;
    }
    *(undefined4 *)(iVar5 + 0x1ac) = 1;
  }
  puVar1 = *(undefined8 **)(iVar5 + 0x104 + *(int *)(iVar5 + 0x1b0) * 8);
  uVar2 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x3c);
  iVar3 = FUN_00109ee0(param_1);
  lVar4 = FUN_001d9100(uVar2,*puVar1,
                       *(int *)(*(int *)(iVar5 + 0x104 + *(int *)(iVar5 + 0x1b0) * 8) + 0x18) +
                       iVar3 * 8);
  if (lVar4 != 0) {
    *(undefined4 *)(iVar5 + 0x1ac) = 2;
  }
  return lVar4 != 0;
}


// ==== FUN_00109bb0 @ 00109bb0 ====
// GLOBAL DAT_0040f0e0 int

undefined4 FUN_00109bb0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  iVar1 = piVar3[0x6a];
  if (iVar1 != 3) {
    if (3 < iVar1) {
      if (iVar1 != 4) {
        return 0;
      }
      goto LAB_00109c74;
    }
    if (iVar1 != 2) {
      return 0;
    }
    FUN_00274fc8(piVar3[0x65]);
    piVar3[0x6a] = 3;
    piVar3[0x6b] = 0;
  }
  lVar2 = FUN_00271c50(*(undefined4 *)(DAT_0040f0e0 + 0x2013c),*piVar3,piVar3[0x65],0x280,0x1e0,
                       piVar3 + 0x11,piVar3[0x66] & 0xfffffffe);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(*piVar3 + 0x3c) = *(undefined4 *)(DAT_0040f0e0 + 0x2013c);
  piVar3[0x6a] = 4;
LAB_00109c74:
  if ((piVar3[0x6c] != 0) && (lVar2 = FUN_00109ae0(param_1), lVar2 == 0)) {
    return 0;
  }
  *(undefined1 *)((int)piVar3 + 0x1ba) = 0;
  piVar3[0x6a] = 0x1c;
  return 1;
}


// ==== FUN_00109cc0 @ 00109cc0 ====
// GLOBAL DAT_0040f510 int

undefined4 FUN_00109cc0(void)

{
  FUN_001d9250(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x3c));
  return 1;
}


// ==== FUN_00109cf8 @ 00109cf8 ====

bool FUN_00109cf8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  iVar1 = puVar3[0x6a];
  if (iVar1 != 0x1e) {
    if (0x1e < iVar1) {
      if (iVar1 != 0x1f) {
        return true;
      }
      goto LAB_00109d84;
    }
    if (iVar1 != 0x1d) {
      return true;
    }
    FUN_00272310(*puVar3);
    puVar3[0x6a] = 0x1e;
  }
  lVar2 = FUN_00272308(*puVar3);
  if (lVar2 == 0) {
    FUN_00271f10(*puVar3);
    return false;
  }
  FUN_002721d8(*puVar3);
  puVar3[0x6a] = 0x1f;
LAB_00109d84:
  lVar2 = FUN_00109cc0(param_1);
  if (lVar2 != 0) {
    *(undefined1 *)((int)puVar3 + 0x1ba) = 0;
    puVar3[0x6a] = 0x37;
  }
  return lVar2 != 0;
}


// ==== FUN_00109dc0 @ 00109dc0 ====

bool FUN_00109dc0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1a4) == 0x1c) {
    if ((*(int *)(iVar2 + 0x1a8) - 2U < 0x1a) && (lVar1 = FUN_00109bb0(param_1), lVar1 == 0)) {
      return false;
    }
    FUN_00109550(param_1);
    *(undefined1 *)(iVar2 + 0x1b9) = 0;
    lVar1 = FUN_00109578(param_1);
    if (lVar1 != 0) {
      *(undefined4 *)(iVar2 + 0x1a8) = 0x1d;
    }
    *(undefined4 *)(iVar2 + 0x1a4) = 0x1d;
  }
  else if (*(int *)(iVar2 + 0x1a4) != 0x1d) {
    return true;
  }
  lVar1 = FUN_00109cf8(param_1);
  if (lVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x1a4) = 0x37;
  }
  return lVar1 != 0;
}


