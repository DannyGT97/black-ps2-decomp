// ==== FUN_00356e08 @ 00356e08 ====

int FUN_00356e08(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int aiStack_70 [4];
  
  aiStack_70[0] = 0;
  while( true ) {
    if (param_4 < 2) {
      lVar2 = FUN_0035b228(param_1,0x479dc0,param_3,1);
      if (lVar2 == 0) {
        iVar1 = -0x7efeff91;
      }
      else {
        puVar3 = (undefined8 *)(&DAT_00479dc0 + param_4 * 0x100);
        if (((uint)param_2 & 7) == 0) {
          puVar4 = param_2;
          do {
            uVar5 = puVar3[1];
            uVar6 = puVar3[2];
            uVar7 = puVar3[3];
            *puVar4 = *puVar3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            puVar3 = puVar3 + 4;
            puVar4 = puVar4 + 4;
          } while (puVar3 != (undefined8 *)(&DAT_00479fc0 + param_4 * 0x100));
          *(undefined1 *)((int)param_2 + 0x5f) = 0;
        }
        else {
          puVar4 = param_2;
          do {
            uVar5 = puVar3[1];
            uVar6 = puVar3[2];
            uVar7 = puVar3[3];
            *puVar4 = *puVar3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            puVar3 = puVar3 + 4;
            puVar4 = puVar4 + 4;
          } while (puVar3 != (undefined8 *)(&DAT_00479fc0 + param_4 * 0x100));
          *(undefined1 *)((int)param_2 + 0x5f) = 0;
        }
        iVar1 = 0;
      }
      return iVar1;
    }
    param_3 = FUN_00356a68(param_1,param_3,aiStack_70);
    if (aiStack_70[0] == -0x7efeffa7) break;
    if (aiStack_70[0] != 0) {
      return aiStack_70[0];
    }
    param_4 = param_4 + -2;
  }
  return -0x7efefffe;
}


// ==== FUN_00356f88 @ 00356f88 ====

int FUN_00356f88(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int aiStack_40 [4];
  
  if (param_2 == 0xffffffffffffffff) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    while( true ) {
      param_2 = FUN_00356a20(param_1,param_2,aiStack_40);
      if (aiStack_40[0] != 0) {
        return aiStack_40[0];
      }
      if (param_2 == 0xffffffffffffffff) {
        return iVar1;
      }
      if (-1 < (long)param_2) break;
      iVar1 = iVar1 + 1;
      param_2 = param_2 & 0x7fffffff;
    }
    iVar1 = -0x7efe6ffe;
  }
  return iVar1;
}


// ==== FUN_00357018 @ 00357018 ====

void FUN_00357018(undefined8 param_1,int param_2)

{
  ushort uVar1;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  uVar1 = *(ushort *)(param_2 + 0x28);
  iStack_18 = (*(int *)(param_2 + 0x30) << 10) / (int)(uint)uVar1;
  uStack_20 = (uint)uVar1;
  uStack_1c = (uint)*(ushort *)(param_2 + 0x2c);
  if (uVar1 == 0) {
    trap(7);
  }
  uStack_14 = 1;
  FUN_0035b6f8(param_1,&uStack_20);
  return;
}


// ==== FUN_00357070 @ 00357070 ====

/* WARNING: Removing unreachable block (ram,0x0035723c) */
/* Strings referenciadas:
     "Sony PS2 Memory Card Format" */

int FUN_00357070(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int aiStack_2c0 [4];
  ushort auStack_2b0 [32];
  undefined1 auStack_270 [448];
  int aiStack_b0 [4];
  
  iVar8 = (int)param_1;
  iVar2 = iVar8 * 0x184;
  lVar5 = FUN_0035c298();
  if (lVar5 == 0) {
    return -0x7efeffed;
  }
  puVar10 = (undefined4 *)param_2;
  if (param_2 != 0) {
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[2] = 0;
  }
  lVar5 = FUN_0035a9e8(param_1);
  if (lVar5 == 0) {
    return -0x7efeffed;
  }
  if (lVar5 == 2) {
    FUN_0035ba10(param_1);
    (&DAT_00479510)[iVar8 * 0x226] = 1;
  }
  if ((&DAT_00479510)[iVar8 * 0x226] != 0) {
    lVar5 = FUN_0035a9c8(param_1,aiStack_2c0);
    if ((lVar5 == 0) || (aiStack_2c0[0] == 0)) {
      return -0x7efeff91;
    }
    (&DAT_0047951c)[iVar8 * 0x226] = 0;
    (&DAT_00479488)[iVar8 * 0x226] = 0xffffffff;
    (&DAT_0047948c)[iVar8 * 0x226] = 0xffffffff;
    (&DAT_00479518)[iVar8 * 0x226] = 0;
    uVar3 = DAT_0040a8c9;
    (&DAT_00479490)[iVar8 * 0x898] = DAT_0040a8c8;
    (&DAT_00479491)[iVar8 * 0x898] = uVar3;
    lVar5 = FUN_0035aa28(param_1);
    if (lVar5 == 0) {
      return -0x7efeff91;
    }
    if (param_2 != 0) {
      *puVar10 = 2;
    }
    lVar5 = FUN_0035cfd8(&DAT_003d6348 + iVar2,0x40a8d0,0x1b);
    if (lVar5 != 0) {
      if (param_2 == 0) {
        return -0x7efeffd1;
      }
      puVar10[1] = 0;
      return -0x7efeffd1;
    }
    if (((char)(&DAT_003d6364)[iVar2] + -0x30) * 10 + -0x30 + (int)(char)(&DAT_003d6366)[iVar2] <
        0xb) {
      return -0x7efeff7a;
    }
    FUN_00357018(param_1,&DAT_003d6348 + iVar2);
    iVar9 = 0;
    iVar7 = 0;
    FUN_0035b6d0(param_1,*(undefined4 *)(&DAT_003d638c + iVar2),
                 *(undefined4 *)(&DAT_003d6388 + iVar2));
    FUN_0035bbd8(param_1);
    iVar1 = *(int *)(&DAT_003d6378 + iVar2);
    iVar6 = *(int *)(&DAT_003d637c + iVar2);
    if (*(int *)(&DAT_003d6380 + iVar2) < 1) {
      uVar4 = *(undefined4 *)(&DAT_003d6384 + iVar2);
    }
    else {
      do {
        if (iVar9 == (iVar1 / 1000) * 1000 + 1) {
          *(int *)(&DAT_003d64b8 + iVar2) = iVar6 - *(int *)(&DAT_003d637c + iVar2);
        }
        lVar5 = FUN_0035b2b0(param_1,iVar6);
        iVar7 = iVar7 + 1;
        if (lVar5 == 0) {
          iVar9 = iVar9 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar7 < *(int *)(&DAT_003d6380 + iVar2));
      uVar4 = *(undefined4 *)(&DAT_003d6384 + iVar2);
    }
    aiStack_b0[0] = FUN_00356e08(param_1,auStack_2b0,uVar4,0);
    if (aiStack_b0[0] != 0) {
      return aiStack_b0[0];
    }
    if ((auStack_2b0[0] & 0x8000) == 0) {
      return -0x7efeffd1;
    }
    lVar5 = FUN_0035ca74(auStack_270,0x40a8b0);
    if (lVar5 != 0) {
      return -0x7efeffd1;
    }
    aiStack_b0[0] = FUN_00356e08(param_1,auStack_2b0,*(undefined4 *)(&DAT_003d6384 + iVar2),1);
    if (aiStack_b0[0] != 0) {
      return aiStack_b0[0];
    }
    if ((auStack_2b0[0] & 0x8000) == 0) {
      return -0x7efeffd1;
    }
    lVar5 = FUN_0035ca74(auStack_270,0x40a8b8);
    if (lVar5 != 0) {
      return -0x7efeffd1;
    }
    (&DAT_00479514)[iVar8 * 0x226] = 1;
  }
  if ((&DAT_00479514)[iVar8 * 0x226] == 0) {
    return -0x7efeffd1;
  }
  if (param_2 != 0) {
    uVar4 = FUN_00356d30(param_1,aiStack_b0);
    if (aiStack_b0[0] != 0) {
      return aiStack_b0[0];
    }
    iVar2 = (&DAT_00479514)[iVar8 * 0x226];
    *puVar10 = 2;
    puVar10[1] = iVar2;
    puVar10[2] = uVar4;
  }
  if ((&DAT_00479510)[iVar8 * 0x226] != 0) {
    (&DAT_00479510)[iVar8 * 0x226] = 0;
    return -0x7efe6ffd;
  }
  return 0;
}


// ==== FUN_00357408 @ 00357408 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "Sony PS2 Memory Card Format"
     " 1.2.0.0"
     "libmc2: Fatal Error [%08x] " */

int FUN_00357408(undefined8 param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined1 uStack_d0;
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  int iStack_b0;
  int iStack_ac;
  
  iVar15 = (int)param_1;
  iVar8 = iVar15 * 0x184;
  pcVar12 = &DAT_003d6348 + iVar8;
  lVar9 = FUN_0035c298();
  if (lVar9 == 0) {
    return -0x7efeffed;
  }
  (&DAT_0047951c)[iVar15 * 0x226] = 0;
  (&DAT_00479488)[iVar15 * 0x226] = 0xffffffff;
  (&DAT_0047948c)[iVar15 * 0x226] = 0xffffffff;
  (&DAT_00479518)[iVar15 * 0x226] = 0;
  uVar2 = DAT_0040a8c9;
  (&DAT_00479490)[iVar15 * 0x898] = DAT_0040a8c8;
  (&DAT_00479491)[iVar15 * 0x898] = uVar2;
  lVar9 = FUN_0035a9c8(param_1,&iStack_e0);
  if ((lVar9 == 0) || (lVar9 = FUN_0035aa28(param_1), lVar9 == 0)) {
LAB_00357cb4:
    iVar8 = -0x7efeff91;
  }
  else {
    lVar9 = FUN_0035cfd8(pcVar12,0x40a8d0,0x1b);
    if (lVar9 != 0) {
      iVar13 = 0x1f;
      puVar5 = (undefined4 *)(&DAT_003d6494 + iVar8);
      do {
        *puVar5 = 0xffffffff;
        iVar13 = iVar13 + -1;
        puVar5 = puVar5 + -1;
      } while (-1 < iVar13);
      lVar9 = FUN_0035b2f8(param_1,&iStack_e0,&DAT_003d6418 + iVar8);
      if (lVar9 == 0) goto LAB_00357cb4;
    }
    FUN_0035c6ec(pcVar12,0,0x28);
    uVar4 = s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_;
    uVar3 = s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_;
    *(undefined8 *)pcVar12 = s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_;
    *(undefined8 *)(&DAT_003d6350 + iVar8) = uVar3;
    *(undefined8 *)(&DAT_003d6358 + iVar8) = uVar4;
    *(undefined4 *)(&DAT_003d6360 + iVar8) = s_Sony_PS2_Memory_Card_Format_0040a8d0._24_4_;
    FUN_0035c7a4(pcVar12,0x40a8f0);
    *(undefined2 *)(&DAT_003d6370 + iVar8) = (undefined2)iStack_e0;
    if (iStack_e0 == 0) {
      trap(7);
    }
    *(undefined2 *)(&DAT_003d6376 + iVar8) = 0xff00;
    *(undefined2 *)(&DAT_003d6374 + iVar8) = (undefined2)iStack_dc;
    *(short *)(&DAT_003d6372 + iVar8) = (short)(0x400 / iStack_e0);
    *(undefined4 *)(&DAT_003d649c + iVar8) = 0x400;
    (&DAT_003d6498)[iVar8] = 2;
    (&DAT_003d6499)[iVar8] = 0x2b;
    *(undefined4 *)(&DAT_003d64a0 + iVar8) = 0x100;
    *(undefined4 *)(&DAT_003d6384 + iVar8) = 0;
    *(undefined4 *)(&DAT_003d6390 + iVar8) = 0;
    *(undefined4 *)(&DAT_003d6394 + iVar8) = 0;
    *(undefined4 *)(&DAT_003d64b8 + iVar8) = 0;
    *(int *)(&DAT_003d6378 + iVar8) = iStack_d8 / (int)(0x400 / iStack_e0 & 0xffffU);
    *(undefined4 *)(&DAT_003d64c8 + iVar8) = 0xffffffff;
    *(undefined4 *)(&DAT_003d64ac + iVar8) = 0;
    *(undefined4 *)(&DAT_003d64b0 + iVar8) = 0;
    *(undefined4 *)(&DAT_003d64b4 + iVar8) = 0;
    *(undefined4 *)(&DAT_003d64bc + iVar8) = 0xffffffff;
    *(undefined4 *)(&DAT_003d64c0 + iVar8) = 0xffffffff;
    *(undefined4 *)(&DAT_003d64c4 + iVar8) = 0xffffffff;
    *(uint *)(&DAT_003d64a4 + iVar8) =
         (uint)*(ushort *)(&DAT_003d6374 + iVar8) / (uint)*(ushort *)(&DAT_003d6372 + iVar8);
    *(int *)(&DAT_003d6388 + iVar8) = iStack_d8 / iStack_dc + -1;
    iStack_ac = iVar8 + 0x3d6398;
    while( true ) {
      lVar9 = FUN_0035b268(param_1,*(undefined4 *)(&DAT_003d6388 + iVar8));
      iVar13 = *(int *)(&DAT_003d6388 + iVar8);
      if (lVar9 == 0) break;
      *(int *)(&DAT_003d6388 + iVar8) = iVar13 + -1;
    }
    while( true ) {
      *(int *)(&DAT_003d638c + iVar8) = iVar13 + -1;
      lVar9 = FUN_0035b268(param_1,*(undefined4 *)(&DAT_003d638c + iVar8));
      if (lVar9 == 0) break;
      iVar13 = *(int *)(&DAT_003d638c + iVar8);
    }
    FUN_0035b6d0(param_1,*(undefined4 *)(&DAT_003d638c + iVar8),
                 *(undefined4 *)(&DAT_003d6388 + iVar8));
    iVar10 = *(int *)(&DAT_003d6378 + iVar8) * 4 + -1;
    iVar13 = *(int *)(&DAT_003d6378 + iVar8) * 4 + 0x3fe;
    if (-1 < iVar10) {
      iVar13 = iVar10;
    }
    iStack_dc = iStack_dc * iStack_e0;
    iVar10 = (iVar13 >> 10) + 1;
    iVar11 = iVar10 * 4 + -1;
    iVar13 = iVar10 * 4 + 0x3fe;
    if (-1 < iVar11) {
      iVar13 = iVar11;
    }
    iVar11 = iStack_dc + 0x3ff;
    if (-1 < iStack_dc) {
      iVar11 = iStack_dc;
    }
    iVar11 = iVar11 >> 10;
    iVar13 = (iVar13 >> 10) + 1;
    if (0x20 < iVar13) {
      iVar13 = 0x20;
      iVar10 = 0x2000;
    }
    FUN_0035c6ec(iStack_ac,0,0x80);
    iVar7 = 0;
    if (0 < iVar13) {
      do {
        iVar14 = iVar7 + 1;
        do {
          lVar9 = FUN_0035b2b0(param_1,iVar11);
          if (lVar9 == 1) {
            iVar11 = iVar11 + 1;
          }
        } while (lVar9 != 0);
        *(int *)(iStack_ac + iVar7 * 4) = iVar11;
        iVar11 = iVar11 + 1;
        iVar7 = iVar14;
      } while (iVar14 < iVar13);
    }
    iVar10 = iVar10 + -1;
    iVar14 = 0;
    iVar7 = 0;
    iVar13 = 0xff;
    puVar5 = (undefined4 *)(&DAT_00479084 + iVar15 * 0x898);
    do {
      *puVar5 = 0xffffffff;
      iVar13 = iVar13 + -1;
      puVar5 = puVar5 + -1;
    } while (-1 < iVar13);
    iVar13 = 0xff;
    puVar5 = (undefined4 *)(&DAT_00479484 + iVar15 * 0x898);
    do {
      *puVar5 = 0xffffffff;
      iVar13 = iVar13 + -1;
      puVar5 = puVar5 + -1;
    } while (-1 < iVar13);
    if (iVar10 < 0) {
      uVar1 = *(ushort *)(&DAT_003d6372 + iVar8);
    }
    else {
      do {
        while (lVar9 = FUN_0035b2b0(param_1,iVar11), lVar9 != 0) {
          iVar11 = iVar11 + 1;
        }
        iVar13 = iVar15 * 0x898;
        lVar9 = FUN_0035aca0(param_1,&DAT_00479088 + iVar13,iVar11,1);
        if (lVar9 == 0) goto LAB_00357cb4;
        iVar6 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        *(int *)(&DAT_00478c88 + iVar6 + iVar13) = iVar11;
        if ((0xff < iVar7) || (iVar10 == 0)) {
          iVar7 = iVar14 * 4;
          iVar14 = iVar14 + 1;
          lVar9 = FUN_0035aca0(param_1,&DAT_00478c88 + iVar13,*(undefined4 *)(iStack_ac + iVar7),1);
          if (lVar9 == 0) goto LAB_00357cb4;
          puVar5 = (undefined4 *)(&DAT_00479084 + iVar13);
          iVar13 = 0xff;
          do {
            *puVar5 = 0xffffffff;
            iVar13 = iVar13 + -1;
            puVar5 = puVar5 + -1;
          } while (-1 < iVar13);
          iVar7 = 0;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
      uVar1 = *(ushort *)(&DAT_003d6372 + iVar8);
    }
    *(int *)(&DAT_003d637c + iVar8) = iVar11;
    iVar13 = 0;
    if (uVar1 == 0) {
      trap(7);
    }
    iVar10 = 0;
    iVar7 = (int)(*(int *)(&DAT_003d638c + iVar8) * (uint)*(ushort *)(&DAT_003d6374 + iVar8)) /
            (int)(uint)uVar1 - iVar11;
    *(int *)(&DAT_003d6380 + iVar8) = iVar7;
    iVar14 = (*(int *)(&DAT_003d6378 + iVar8) / 1000) * 1000 + 1;
    if (0 < iVar7) {
      iVar7 = iStack_b0;
      do {
        iStack_b0 = iVar7;
        if (iVar10 == iVar14) {
          *(int *)(&DAT_003d64b8 + iVar8) = iVar11 - *(int *)(&DAT_003d637c + iVar8);
        }
        lVar9 = FUN_0035b2b0(param_1,iVar11);
        if (lVar9 == 1) {
          FUN_00356ad0(param_1,iVar13,0xfffffffffffffffd,&iStack_b0);
          iVar7 = iStack_b0;
        }
        else {
          if (iVar10 == 0) {
            *(int *)(&DAT_003d637c + iVar8) = iVar11;
          }
          FUN_00356ad0(param_1,iVar13,0x7fffffff,&iStack_b0);
          iVar10 = iVar10 + 1;
          iVar7 = iStack_b0;
        }
        if (iVar7 != 0) {
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0] =
               (char)s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_;
          s_Sony_PS2_Memory_Card_Format_0040a8d0[1] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_,1);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[2] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_,2);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[3] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_,3);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[4] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_,4);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[5] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_,5);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[6] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_,6);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[7] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._0_8_,7);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[8] =
               (char)s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_;
          s_Sony_PS2_Memory_Card_Format_0040a8d0[9] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_,1);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[10] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_,2);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0xb] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_,3);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0xc] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_,4);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0xd] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_,5);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0xe] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_,6);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0xf] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._8_8_,7);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x10] =
               (char)s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_;
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x11] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_,1);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x12] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_,2);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x13] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_,3);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x14] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_,4);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x15] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_,5);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x16] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_,6);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x17] =
               SUB81(s_Sony_PS2_Memory_Card_Format_0040a8d0._16_8_,7);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x18] =
               (char)s_Sony_PS2_Memory_Card_Format_0040a8d0._24_4_;
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x19] =
               SUB41(s_Sony_PS2_Memory_Card_Format_0040a8d0._24_4_,1);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x1a] =
               SUB41(s_Sony_PS2_Memory_Card_Format_0040a8d0._24_4_,2);
          s_Sony_PS2_Memory_Card_Format_0040a8d0[0x1b] =
               SUB41(s_Sony_PS2_Memory_Card_Format_0040a8d0._24_4_,3);
          return iVar7;
        }
        iVar13 = iVar13 + 1;
        iVar11 = iVar11 + 1;
        iStack_b0 = 0;
      } while (iVar13 < *(int *)(&DAT_003d6380 + iVar8));
    }
    if (iVar14 <= iVar10) {
      if (*(ushort *)(&DAT_003d6372 + iVar8) == 0) {
        trap(7);
      }
      *(int *)(&DAT_003d6380 + iVar8) =
           (int)(*(int *)(&DAT_003d638c + iVar8) * (uint)*(ushort *)(&DAT_003d6374 + iVar8)) /
           (int)(uint)*(ushort *)(&DAT_003d6372 + iVar8) - *(int *)(&DAT_003d637c + iVar8);
      lVar9 = FUN_00356c00(param_1,&iStack_b0);
      if (iStack_b0 != 0) {
        return iStack_b0;
      }
      if (lVar9 == 0) {
        FUN_0035bd10(param_1,&uStack_d0);
        FUN_0035c6ec(0x479dc0,0,0x200);
        DAT_00479dc0 = 0x8427;
        DAT_00479dc8._6_2_ = (ushort)(bStack_c9 >> 4) * 10 + (bStack_c9 & 0xf) + 2000;
        DAT_00479dc8._5_1_ = (bStack_ca >> 4) * '\n' + (bStack_ca & 0xf);
        DAT_00479dc8._1_1_ = (bStack_cf >> 4) * '\n' + (bStack_cf & 0xf);
        DAT_00479dc8._4_1_ = (bStack_cb >> 4) * '\n' + (bStack_cb & 0xf);
        DAT_00479dc8._3_1_ = (bStack_cd >> 4) * '\n' + (bStack_cd & 0xf);
        DAT_00479dc8._2_1_ = (bStack_ce >> 4) * '\n' + (bStack_ce & 0xf);
        DAT_00479dc4 = 2;
        DAT_00479dc2 = 0;
        DAT_00479dc8._0_1_ = 0;
        DAT_00479dd0 = 0;
        _DAT_00479dd4 = 0;
        DAT_00479dd8 = (ulong)CONCAT25(DAT_00479dc8._6_2_,
                                       CONCAT14(DAT_00479dc8._5_1_,
                                                CONCAT13(DAT_00479dc8._4_1_,
                                                         CONCAT12(DAT_00479dc8._3_1_,
                                                                  CONCAT11(DAT_00479dc8._2_1_,
                                                                           DAT_00479dc8._1_1_)))))
                       << 8;
        DAT_00479de0._0_4_ = 0;
        DAT_00479e00 = DAT_0040a8b0;
        DAT_00479e01 = DAT_0040a8b1;
        FUN_0035c6ec(0x479fc0,0,0x200);
        DAT_00479fc8._1_1_ = (bStack_cf >> 4) * '\n' + (bStack_cf & 0xf);
        DAT_00479fc8._3_1_ = (bStack_cd >> 4) * '\n' + (bStack_cd & 0xf);
        DAT_00479fc8._6_2_ = (ushort)(bStack_c9 >> 4) * 10 + (bStack_c9 & 0xf) + 2000;
        DAT_00479fc8._5_1_ = (bStack_ca >> 4) * '\n' + (bStack_ca & 0xf);
        DAT_00479fc8._4_1_ = (bStack_cb >> 4) * '\n' + (bStack_cb & 0xf);
        DAT_00479fc8._2_1_ = (bStack_ce >> 4) * '\n' + (bStack_ce & 0xf);
        DAT_00479fc0 = 0xa426;
        DAT_00479fc4 = 0;
        DAT_00479fc2 = 0;
        DAT_00479fc8._0_1_ = 0;
        DAT_00479fd0 = 0;
        DAT_00479fd4 = 0;
        DAT_00479fd8 = (ulong)CONCAT25(DAT_00479fc8._6_2_,
                                       CONCAT14(DAT_00479fc8._5_1_,
                                                CONCAT13(DAT_00479fc8._4_1_,
                                                         CONCAT12(DAT_00479fc8._3_1_,
                                                                  CONCAT11(DAT_00479fc8._2_1_,
                                                                           DAT_00479fc8._1_1_)))))
                       << 8;
        DAT_00479fe0 = 0;
        DAT_0047a000 = DAT_0040a8b8;
        DAT_0047a001 = DAT_0040a8b9;
        DAT_0047a002 = DAT_0040a8ba;
        lVar9 = FUN_0035b248(param_1,0x479dc0,0,1);
        if (lVar9 != 0) {
          FUN_00356ad0(param_1,0,0xffffffffffffffff,&iStack_b0);
          if (iStack_b0 != 0) {
            return iStack_b0;
          }
          lVar9 = FUN_0035ace0(param_1);
          if (((lVar9 != 0) && (lVar9 = FUN_00356878(param_1), lVar9 != 0)) &&
             (lVar9 = FUN_0035ab40(param_1), lVar9 != 0)) {
            (&DAT_00479510)[iVar15 * 0x226] = 1;
            iVar8 = FUN_00357070(param_1,0);
            if (iVar8 != -0x7efe6ffd) {
              return iVar8;
            }
            return 0;
          }
        }
        goto LAB_00357cb4;
      }
      FUN_0036a038(0x40a900,lVar9);
    }
    iVar8 = -0x7efe6fff;
  }
  return iVar8;
}


// ==== FUN_00357d38 @ 00357d38 ====

undefined4 FUN_00357d38(undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  
  lVar3 = FUN_0035c298();
  if (lVar3 == 0) {
    uVar2 = 0x81010013;
  }
  else {
    lVar3 = FUN_0035a9c8(param_1,auStack_50);
    if (lVar3 == 0) {
LAB_00357d78:
      uVar2 = 0x8101006f;
    }
    else {
      iVar4 = (int)param_1;
      (&DAT_0047951c)[iVar4 * 0x226] = 0;
      (&DAT_00479488)[iVar4 * 0x226] = 0xffffffff;
      (&DAT_0047948c)[iVar4 * 0x226] = 0xffffffff;
      (&DAT_00479518)[iVar4 * 0x226] = 0;
      (&DAT_00479514)[iVar4 * 0x226] = 0;
      uVar1 = DAT_0040a8c9;
      (&DAT_00479490)[iVar4 * 0x898] = DAT_0040a8c8;
      (&DAT_00479491)[iVar4 * 0x898] = uVar1;
      if (iStack_4c == 0) {
        trap(7);
      }
      iVar4 = 0;
      if (0 < iStack_48 / iStack_4c) {
        do {
          lVar3 = FUN_0035c168(param_1,iVar4);
          iVar4 = iVar4 + 1;
          if (lVar3 == 0) goto LAB_00357d78;
        } while (iVar4 < iStack_48 / iStack_4c);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ==== FUN_00357e38 @ 00357e38 ====

undefined4 FUN_00357e38(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0035c298();
  if (lVar1 != 0) {
    lVar1 = FUN_0035a9e8(param_1);
    if ((lVar1 == 0) || ((&DAT_00479510)[(int)param_1 * 0x226] == 1)) {
      return 0x81019003;
    }
    if ((&DAT_00479514)[(int)param_1 * 0x226] == 0) {
      return 0x8101002f;
    }
    lVar1 = FUN_0035aa08(param_1);
    if (lVar1 != 0) {
      FUN_0035bbd8(param_1);
      return 0;
    }
  }
  return 0x81010013;
}


// ==== FUN_00357ee0 @ 00357ee0 ====

undefined4 FUN_00357ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00356508();
  if ((lVar2 == 0) || (lVar2 = FUN_003561c0(param_3), lVar2 == 0)) {
    uVar1 = 0x81010016;
  }
  else {
    lVar2 = FUN_00356150(param_3);
    uVar1 = 0x8101005b;
    if (lVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_00357f40 @ 00357f40 ====

int FUN_00357f40(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                ulong param_5,int param_6)

{
  ushort uVar1;
  ushort *puVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ushort auStack_4b0 [32];
  undefined1 auStack_470 [512];
  undefined1 auStack_270 [448];
  int iStack_b0;
  int iStack_ac;
  
  iVar10 = 0;
  iStack_b0 = 0;
  iStack_ac = 1;
  do {
    lVar3 = FUN_0035b228(param_1,auStack_4b0,param_5,1);
    if (lVar3 == 0) {
      return -0x7efeff91;
    }
    if (iStack_ac != 0) {
      iStack_ac = 0;
      uVar4 = FUN_0035ccd8(auStack_470);
      if (0x1f < uVar4) {
        return -0x7efe6ffe;
      }
      lVar3 = FUN_0035ca74(auStack_470,0x40a8b0);
      if (lVar3 != 0) {
        return -0x7efe6ffe;
      }
      uVar4 = FUN_0035ccd8(auStack_270);
      if (0x1f < uVar4) {
        return -0x7efe6ffe;
      }
      lVar3 = FUN_0035ca74(auStack_270,0x40a8b8);
      if (lVar3 != 0) {
        return -0x7efe6ffe;
      }
    }
    iVar9 = 0;
    uVar1 = auStack_4b0[0];
    puVar5 = auStack_4b0;
    if (param_6 != 0) {
      while( true ) {
        if ((uVar1 & 0x8000) != 0) {
          *(undefined1 *)((int)puVar5 + 0x5f) = 0;
          lVar3 = FUN_0035ca74(param_4,puVar5 + 0x20);
          if (lVar3 == 0) {
            if (param_2 != (undefined8 *)0x0) {
              if (((uint)param_2 & 7) == 0) {
                puVar2 = puVar5 + 0x100;
                do {
                  uVar6 = *(undefined8 *)(puVar5 + 4);
                  uVar7 = *(undefined8 *)(puVar5 + 8);
                  uVar8 = *(undefined8 *)(puVar5 + 0xc);
                  *param_2 = *(undefined8 *)puVar5;
                  param_2[1] = uVar6;
                  param_2[2] = uVar7;
                  param_2[3] = uVar8;
                  puVar5 = puVar5 + 0x10;
                  param_2 = param_2 + 4;
                } while (puVar5 != puVar2);
              }
              else {
                puVar2 = puVar5 + 0x100;
                do {
                  uVar6 = *(undefined8 *)(puVar5 + 4);
                  uVar7 = *(undefined8 *)(puVar5 + 8);
                  uVar8 = *(undefined8 *)(puVar5 + 0xc);
                  *param_2 = *(undefined8 *)puVar5;
                  param_2[1] = uVar6;
                  param_2[2] = uVar7;
                  param_2[3] = uVar8;
                  puVar5 = puVar5 + 0x10;
                  param_2 = param_2 + 4;
                } while (puVar5 != puVar2);
              }
            }
            if (param_3 != 0) {
              *(int *)param_3 = iVar10;
            }
            return 0;
          }
        }
        iVar9 = iVar9 + 1;
        param_6 = param_6 - (uint)(0 < param_6);
        iVar10 = iVar10 + 1;
        if ((1 < iVar9) || (param_6 == 0)) break;
        uVar1 = puVar5[0x100];
        puVar5 = puVar5 + 0x100;
      }
    }
    param_5 = FUN_00356a20(param_1,param_5,&iStack_b0);
    if (iStack_b0 != 0) {
      return iStack_b0;
    }
    if (param_5 == 0xffffffffffffffff) {
      return -0x7efefffe;
    }
    param_5 = param_5 & 0x7fffffff;
  } while( true );
}


// ==== FUN_003581b8 @ 003581b8 ====

long FUN_003581b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ushort auStack_4d0 [32];
  undefined1 auStack_490 [448];
  undefined8 uStack_2d0;
  undefined4 uStack_2c0;
  undefined8 auStack_d0 [4];
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  undefined4 *puStack_a4;
  
  puVar5 = auStack_4d0;
  puVar6 = auStack_4d0;
  puVar8 = auStack_4d0;
  puVar9 = auStack_4d0;
  bVar1 = false;
  puStack_ac = param_4;
  puStack_a8 = param_5;
  lVar2 = FUN_00356e08(param_1,auStack_4d0,*(undefined4 *)(&DAT_003d6384 + (int)param_1 * 0x184),0);
  if (lVar2 == 0) {
    uVar3 = FUN_0035ccd8(auStack_490);
    if ((uVar3 < 0x20) && (lVar2 = FUN_0035ca74(auStack_490,0x40a8b0), lVar2 == 0)) {
      lVar2 = FUN_0035ca74(param_2,0x40a8c8);
      if (lVar2 == 0) {
        if (((uint)param_3 & 7) == 0) {
          do {
            uVar11 = *(undefined8 *)((int)puVar6 + 8);
            uVar12 = *(undefined8 *)((int)puVar6 + 0x10);
            uVar13 = *(undefined8 *)((int)puVar6 + 0x18);
            *param_3 = *(undefined8 *)puVar6;
            param_3[1] = uVar11;
            param_3[2] = uVar12;
            param_3[3] = uVar13;
            puVar6 = (ushort *)((int)puVar6 + 0x20);
            param_3 = param_3 + 4;
          } while (puVar6 != (ushort *)&uStack_2d0);
        }
        else {
          do {
            uVar11 = *(undefined8 *)((int)puVar5 + 8);
            uVar12 = *(undefined8 *)((int)puVar5 + 0x10);
            uVar13 = *(undefined8 *)((int)puVar5 + 0x18);
            *param_3 = *(undefined8 *)puVar5;
            param_3[1] = uVar11;
            param_3[2] = uVar12;
            param_3[3] = uVar13;
            puVar5 = (ushort *)((int)puVar5 + 0x20);
            param_3 = param_3 + 4;
          } while (puVar5 != (ushort *)&uStack_2d0);
        }
      }
      else {
        lVar2 = FUN_003563a0(param_2,0x40a8c8);
        puStack_a4 = &uStack_b0;
        puVar10 = &uStack_2d0;
        while( true ) {
          FUN_0035cbc0(auStack_d0,lVar2);
          lVar2 = FUN_003563a0(0,0x40a8c8);
          puVar5 = auStack_4d0;
          puVar7 = puVar10;
          if (lVar2 == 0) {
            bVar1 = true;
            puVar5 = auStack_4d0;
          }
          do {
            uVar13 = *(undefined8 *)((int)puVar5 + 8);
            uVar11 = *(undefined8 *)((int)puVar5 + 0x10);
            uVar12 = *(undefined8 *)((int)puVar5 + 0x18);
            *puVar7 = *(undefined8 *)puVar5;
            puVar7[1] = uVar13;
            puVar7[2] = uVar11;
            puVar7[3] = uVar12;
            puVar5 = (ushort *)((int)puVar5 + 0x20);
            puVar7 = puVar7 + 4;
          } while (puVar5 != (ushort *)puVar10);
          lVar4 = FUN_00357f40(param_1,auStack_4d0,puStack_a4,auStack_d0,uStack_2c0,uStack_2d0._4_4_
                              );
          if ((auStack_4d0[0] & 0x2000) != 0) {
            return -0x7efefff3;
          }
          if (bVar1) break;
          if (lVar4 != 0) {
            if (lVar4 == -0x7efefffe) {
              return -0x7efe6001;
            }
            return lVar4;
          }
        }
        if (lVar4 != 0) {
          if (lVar4 != -0x7efefffe) {
            return lVar4;
          }
          if (param_3 != (undefined8 *)0x0) {
            if (((uint)param_3 & 7) == 0) {
              do {
                uVar11 = puVar10[1];
                uVar12 = puVar10[2];
                uVar13 = puVar10[3];
                *param_3 = *puVar10;
                param_3[1] = uVar11;
                param_3[2] = uVar12;
                param_3[3] = uVar13;
                puVar10 = puVar10 + 4;
                param_3 = param_3 + 4;
              } while (puVar10 != auStack_d0);
            }
            else {
              do {
                uVar12 = puVar10[1];
                uVar13 = puVar10[2];
                uVar11 = puVar10[3];
                *param_3 = *puVar10;
                param_3[1] = uVar12;
                param_3[2] = uVar13;
                param_3[3] = uVar11;
                puVar10 = puVar10 + 4;
                param_3 = param_3 + 4;
              } while (puVar10 != auStack_d0);
            }
          }
          if (puStack_a8 != (undefined4 *)0x0) {
            *puStack_a8 = 0;
          }
          if (puStack_ac != (undefined4 *)0x0) {
            *puStack_ac = uStack_2c0;
          }
          return -0x7efefffe;
        }
        if (param_3 != (undefined8 *)0x0) {
          if (((uint)param_3 & 7) == 0) {
            do {
              uVar12 = *(undefined8 *)((int)puVar9 + 8);
              uVar13 = *(undefined8 *)((int)puVar9 + 0x10);
              uVar11 = *(undefined8 *)((int)puVar9 + 0x18);
              *param_3 = *(undefined8 *)puVar9;
              param_3[1] = uVar12;
              param_3[2] = uVar13;
              param_3[3] = uVar11;
              puVar9 = (ushort *)((int)puVar9 + 0x20);
              param_3 = param_3 + 4;
            } while (puVar9 != (ushort *)puVar10);
          }
          else {
            do {
              uVar13 = *(undefined8 *)((int)puVar8 + 8);
              uVar11 = *(undefined8 *)((int)puVar8 + 0x10);
              uVar12 = *(undefined8 *)((int)puVar8 + 0x18);
              *param_3 = *(undefined8 *)puVar8;
              param_3[1] = uVar13;
              param_3[2] = uVar11;
              param_3[3] = uVar12;
              puVar8 = (ushort *)((int)puVar8 + 0x20);
              param_3 = param_3 + 4;
            } while (puVar8 != (ushort *)puVar10);
          }
        }
        if (puStack_a8 != (undefined4 *)0x0) {
          *puStack_a8 = uStack_b0;
        }
        if (puStack_ac != (undefined4 *)0x0) {
          *puStack_ac = uStack_2c0;
        }
      }
      lVar2 = -0x7efeffef;
    }
    else {
      lVar2 = -0x7efe6ffe;
    }
  }
  return lVar2;
}


// ==== FUN_00358608 @ 00358608 ====

int FUN_00358608(undefined8 param_1,undefined8 *param_2,ulong param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int aiStack_90 [4];
  
  aiStack_90[0] = 0;
  iVar8 = -0x7efeff91;
  for (; 1 < param_4; param_4 = param_4 + -2) {
    uVar3 = FUN_00356a20(param_1,param_3,aiStack_90);
    if (aiStack_90[0] != 0) {
      return aiStack_90[0];
    }
    param_3 = uVar3 & 0x7fffffff;
    if (uVar3 == 0xffffffffffffffff) goto LAB_0035877c;
  }
  lVar2 = FUN_0035b228(param_1,0x479dc0,param_3,1);
  if (lVar2 == 0) {
LAB_0035877c:
    iVar8 = -0x7efeff91;
  }
  else {
    puVar4 = (undefined8 *)(&DAT_00479dc0 + param_4 * 0x100);
    puVar1 = param_2 + 0x40;
    if (((uint)param_2 & 7) == 0) {
      do {
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        *puVar4 = *param_2;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        puVar4[3] = uVar7;
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 4;
      } while (param_2 != puVar1);
    }
    else {
      do {
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        *puVar4 = *param_2;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        puVar4[3] = uVar7;
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 4;
      } while (param_2 != puVar1);
    }
    lVar2 = FUN_0035b248(param_1,0x479dc0,param_3,1);
    if (lVar2 != 0) {
      iVar8 = 0;
    }
  }
  return iVar8;
}


// ==== FUN_003587b0 @ 003587b0 ====

int FUN_003587b0(undefined8 param_1,ulong param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 0;
  piVar6 = (int *)param_4;
  *piVar6 = 0;
  do {
    lVar1 = FUN_0035b228(param_1,0x479dc0,param_2,1);
    iVar4 = 0;
    puVar3 = &DAT_00479dc0;
    if (lVar1 == 0) {
      *piVar6 = -0x7efeff91;
      return -1;
    }
    do {
      param_3 = param_3 + -1;
      if ((*puVar3 & 0x8000) == 0) {
        iVar5 = iVar5 + 1;
      }
      if (param_3 == 0) {
        if (iVar4 == 0) {
          return iVar5 + 1;
        }
        return iVar5;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x100;
    } while (iVar4 < 2);
    uVar2 = FUN_00356a20(param_1,param_2,param_4);
    if (*piVar6 != 0) {
      return -1;
    }
    param_2 = uVar2 & 0x7fffffff;
  } while (uVar2 != 0xffffffffffffffff);
  return iVar5;
}


// ==== FUN_003588e0 @ 003588e0 ====

/* WARNING: Removing unreachable block (ram,0x003589a0) */
/* WARNING: Removing unreachable block (ram,0x003589a4) */
/* WARNING: Removing unreachable block (ram,0x003589f8) */

int FUN_003588e0(undefined8 param_1,undefined8 *param_2,ulong param_3,int param_4,undefined8 param_5
                )

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_4b0 [4];
  int iStack_4ac;
  undefined8 auStack_2b0 [2];
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined8 auStack_298 [61];
  int iStack_b0;
  uint uStack_ac;
  
  iStack_2a0 = -1;
  uStack_ac = (uint)(param_3 == 0);
  iStack_b0 = 0;
  do {
    lVar2 = FUN_0035b228(param_1,0x479dc0,param_3,1);
    iVar12 = 0;
    piVar11 = (int *)param_5;
    if (lVar2 == 0) goto LAB_00358d74;
    puVar9 = &DAT_00479dc0;
    do {
      if ((*puVar9 & 0x8000) == 0) {
LAB_00358a54:
        if (((uint)param_2 & 7) == 0) {
          puVar10 = param_2 + 0x40;
          do {
            uVar7 = param_2[1];
            uVar8 = param_2[2];
            uVar6 = param_2[3];
            *(undefined8 *)puVar9 = *param_2;
            *(undefined8 *)(puVar9 + 4) = uVar7;
            *(undefined8 *)(puVar9 + 8) = uVar8;
            *(undefined8 *)(puVar9 + 0xc) = uVar6;
            param_2 = param_2 + 4;
            puVar9 = puVar9 + 0x10;
          } while (param_2 != puVar10);
        }
        else {
          puVar10 = param_2 + 0x40;
          do {
            uVar8 = param_2[1];
            uVar6 = param_2[2];
            uVar7 = param_2[3];
            *(undefined8 *)puVar9 = *param_2;
            *(undefined8 *)(puVar9 + 4) = uVar8;
            *(undefined8 *)(puVar9 + 8) = uVar6;
            *(undefined8 *)(puVar9 + 0xc) = uVar7;
            param_2 = param_2 + 4;
            puVar9 = puVar9 + 0x10;
          } while (param_2 != puVar10);
        }
        lVar2 = FUN_0035b248(param_1,0x479dc0,param_3,1);
        if (lVar2 == 0) {
          *piVar11 = -0x7efeff91;
          return -1;
        }
        if (param_4 != 0) {
          *piVar11 = 0;
          return iStack_b0;
        }
        if (iStack_2a0 == -1) {
          *piVar11 = -0x7efe6ffe;
          return -1;
        }
        goto LAB_00358d10;
      }
      lVar2 = FUN_0035ca74(puVar9 + 0x20,0x40a8b0);
      if (lVar2 == 0) {
        puVar10 = auStack_2b0;
        puVar4 = puVar9;
        do {
          uVar6 = *(undefined8 *)(puVar4 + 4);
          uVar7 = *(undefined8 *)(puVar4 + 8);
          uVar8 = *(undefined8 *)(puVar4 + 0xc);
          *puVar10 = *(undefined8 *)puVar4;
          puVar10[1] = uVar6;
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
          puVar4 = puVar4 + 0x10;
          puVar10 = puVar10 + 4;
        } while (puVar4 != puVar9 + 0x100);
        uVar1 = *puVar9;
      }
      else {
        uVar1 = *puVar9;
      }
      if (((uVar1 & 0x8000) == 0) || (param_4 == 0)) goto LAB_00358a54;
      iVar12 = iVar12 + 1;
      param_4 = param_4 - (uint)(0 < param_4);
      iStack_b0 = iStack_b0 + 1;
      puVar9 = puVar9 + 0x100;
    } while (iVar12 < 2);
    if ((uStack_ac == 0) && (0x13 < iStack_b0)) {
      *piVar11 = -0x7efeffe9;
      return -1;
    }
    uVar3 = FUN_00356a20(param_1,param_3,param_5);
    if (*piVar11 != 0) {
      return -1;
    }
    if (uVar3 == 0xffffffffffffffff) {
      uVar3 = FUN_00356c00(param_1,param_5);
      if (*piVar11 != 0) {
        return -1;
      }
      FUN_00356ad0(param_1,param_3,uVar3 | 0xffffffff80000000,param_5);
      if (*piVar11 != 0) {
        return -1;
      }
      FUN_00356ad0(param_1,uVar3,0xffffffffffffffff,param_5);
      if (*piVar11 != 0) {
        return -1;
      }
      puVar10 = (undefined8 *)&DAT_00479dc0;
      if (((uint)param_2 & 7) == 0) {
        puVar5 = param_2 + 0x40;
        do {
          uVar6 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          *puVar10 = *param_2;
          puVar10[1] = uVar6;
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
          param_2 = param_2 + 4;
          puVar10 = puVar10 + 4;
        } while (param_2 != puVar5);
      }
      else {
        puVar5 = param_2 + 0x40;
        do {
          uVar6 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          *puVar10 = *param_2;
          puVar10[1] = uVar6;
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
          param_2 = param_2 + 4;
          puVar10 = puVar10 + 4;
        } while (param_2 != puVar5);
      }
      DAT_00479fc0 = 0;
      lVar2 = FUN_0035b248(param_1,0x479dc0,uVar3,1);
      if (lVar2 == 0) {
LAB_00358d74:
        *piVar11 = -0x7efeff91;
      }
      else {
        if (iStack_2a0 == -1) {
          return -0x7efe6ffe;
        }
LAB_00358d10:
        lVar2 = FUN_00356e08(param_1,auStack_4b0,iStack_2a0,uStack_29c);
        *piVar11 = (int)lVar2;
        if (lVar2 == 0) {
          iStack_4ac = iStack_4ac + 1;
          lVar2 = FUN_00358608(param_1,auStack_4b0,iStack_2a0,uStack_29c);
          *piVar11 = (int)lVar2;
          if (lVar2 == 0) {
            *piVar11 = 0;
            return iStack_b0;
          }
        }
      }
      return -1;
    }
    param_3 = uVar3 & 0x7fffffff;
  } while( true );
}


// ==== FUN_00358db0 @ 00358db0 ====

long FUN_00358db0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined1 auStack_430 [25];
  char cStack_417;
  char cStack_416;
  char cStack_415;
  char cStack_414;
  char cStack_413;
  short sStack_412;
  undefined1 auStack_230 [16];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 auStack_1f0 [448];
  
  lVar1 = FUN_00356e08(param_1,auStack_230,param_2,0);
  if (lVar1 == 0) {
    lVar1 = FUN_0035ca74(auStack_1f0,0x40a8b0);
    if (lVar1 == 0) {
      lVar1 = FUN_00356e08(param_1,auStack_430,uStack_220,uStack_21c);
      if (lVar1 == 0) {
        cStack_415 = (*(byte *)(param_3 + 3) >> 4) * '\n' + (*(byte *)(param_3 + 3) & 0xf);
        cStack_416 = (*(byte *)(param_3 + 2) >> 4) * '\n' + (*(byte *)(param_3 + 2) & 0xf);
        cStack_413 = (*(byte *)(param_3 + 6) >> 4) * '\n' + (*(byte *)(param_3 + 6) & 0xf);
        cStack_414 = (*(byte *)(param_3 + 5) >> 4) * '\n' + (*(byte *)(param_3 + 5) & 0xf);
        cStack_417 = (*(byte *)(param_3 + 1) >> 4) * '\n' + (*(byte *)(param_3 + 1) & 0xf);
        sStack_412 = (ushort)(*(byte *)(param_3 + 7) >> 4) * 10 + (*(byte *)(param_3 + 7) & 0xf) +
                     2000;
        lVar1 = FUN_00358608(param_1,auStack_430,uStack_220,uStack_21c);
      }
    }
    else {
      lVar1 = -0x7efe6ffe;
    }
  }
  return lVar1;
}


// ==== FUN_00358ee0 @ 00358ee0 ====

long FUN_00358ee0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined2 auStack_300 [2];
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined8 uStack_2e8;
  undefined1 auStack_2c0 [480];
  undefined1 auStack_e0 [128];
  
  lVar1 = FUN_00357e38();
  if (lVar1 == 0) {
    lVar1 = FUN_00357ee0(param_1,param_2,auStack_e0);
    if (lVar1 == 0) {
      lVar2 = FUN_003581b8(param_1,auStack_e0,auStack_300,0,0);
      lVar1 = 0;
      if (lVar2 != -0x7efeffef) {
        lVar1 = lVar2;
      }
      if ((param_3 != 0) && (lVar1 == 0)) {
        puVar3 = (undefined8 *)param_3;
        FUN_0035cbc0(puVar3 + 3,auStack_2c0);
        *puVar3 = uStack_2f8;
        puVar3[1] = uStack_2e8;
        *(undefined2 *)((int)puVar3 + 0x14) = auStack_300[0];
        *(undefined4 *)(puVar3 + 2) = uStack_2fc;
      }
    }
  }
  return lVar1;
}


// ==== FUN_00358fd0 @ 00358fd0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00358fd0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int unaff_s3_lo;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 unaff_s8;
  undefined1 auStack_540 [4];
  int iStack_53c;
  undefined4 uStack_530;
  undefined2 uStack_340;
  undefined2 uStack_33e;
  undefined4 uStack_33c;
  undefined1 uStack_338;
  char cStack_337;
  char cStack_336;
  char cStack_335;
  char cStack_334;
  char cStack_333;
  short sStack_332;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_328;
  undefined4 uStack_320;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_140 [128];
  undefined1 uStack_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  byte bStack_bb;
  byte bStack_ba;
  byte bStack_b9;
  int iStack_b0;
  undefined1 *puStack_ac;
  
  iStack_b0 = FUN_00357e38();
  if (iStack_b0 != 0) {
    return iStack_b0;
  }
  iStack_b0 = FUN_00357ee0(param_1,param_2,auStack_140);
  if (iStack_b0 != 0) {
    return iStack_b0;
  }
  if (param_3 == 0) {
    param_3 = 0x8417;
  }
  uVar4 = param_3 & 0x20;
  if ((uVar4 != 0) && (lVar2 = FUN_003564c0(auStack_140), 1 < lVar2)) {
    return -0x7efe6ffc;
  }
  lVar2 = FUN_003564c0(auStack_140);
  iStack_b0 = FUN_003581b8(param_1,auStack_140,auStack_540,0,0);
  if (iStack_b0 != -0x7efefffe) {
    return iStack_b0;
  }
  if ((lVar2 != 1) && (0x13 < iStack_53c - unaff_s3_lo)) {
    return -0x7efeffe9;
  }
  iVar1 = FUN_00356d30(param_1,&iStack_b0);
  if (iStack_b0 != 0) {
    return iStack_b0;
  }
  lVar2 = FUN_003587b0(param_1,uStack_530,iStack_53c,&iStack_b0);
  if (iStack_b0 != 0) {
    return iStack_b0;
  }
  iVar3 = 1;
  if (uVar4 != 0) {
    iVar3 = 2;
  }
  if ((int)((uint)(0 < lVar2) + iVar1) < iVar3) {
    return -0x7efeffe4;
  }
  if (uVar4 != 0) {
    unaff_s8 = FUN_00356c00(param_1,&iStack_b0);
    if (iStack_b0 != 0) {
      return iStack_b0;
    }
    FUN_00356ad0(param_1,unaff_s8,0xffffffffffffffff,&iStack_b0);
    if (iStack_b0 != 0) {
      return iStack_b0;
    }
  }
  uVar5 = (undefined4)unaff_s8;
  puStack_ac = &uStack_c0;
  FUN_0035bd10(param_1,puStack_ac);
  FUN_0035c6ec(&uStack_340,0,0x200);
  uStack_33c = 2;
  cStack_334 = (bStack_bb >> 4) * '\n' + (bStack_bb & 0xf);
  cStack_335 = (bStack_bd >> 4) * '\n' + (bStack_bd & 0xf);
  cStack_336 = (bStack_be >> 4) * '\n' + (bStack_be & 0xf);
  cStack_337 = (bStack_bf >> 4) * '\n' + (bStack_bf & 0xf);
  cStack_333 = (bStack_ba >> 4) * '\n' + (bStack_ba & 0xf);
  if (uVar4 == 0) {
    uStack_33c = 0;
    uVar5 = 0xffffffff;
  }
  sStack_332 = (ushort)(bStack_b9 >> 4) * 10 + (bStack_b9 & 0xf) + 2000;
  uStack_340 = (undefined2)param_3;
  uStack_33e = 0;
  uStack_338 = 0;
  uStack_32c = 0;
  lStack_328 = (ulong)CONCAT25(sStack_332,
                               CONCAT14(cStack_333,
                                        CONCAT13(cStack_334,
                                                 CONCAT12(cStack_335,CONCAT11(cStack_336,cStack_337)
                                                         )))) << 8;
  uStack_320 = 0;
  uStack_330 = uVar5;
  iVar1 = FUN_00360a00(auStack_140,0x2f);
  uStack_300 = *(undefined8 *)(iVar1 + 1);
  uStack_2f8 = *(undefined8 *)(iVar1 + 9);
  uStack_2f0 = *(undefined8 *)(iVar1 + 0x11);
  uStack_2e8 = *(undefined8 *)(iVar1 + 0x19);
  lVar2 = FUN_003588e0(param_1,&uStack_340,uStack_530,iStack_53c,&iStack_b0);
  if (lVar2 < 0) {
    return iStack_b0;
  }
  if (uVar4 != 0) {
    FUN_0035c6ec(0x479dc0,0,0x200);
    DAT_00479dc0 = 0x8427;
    DAT_00479dc8._4_1_ = (bStack_bb >> 4) * '\n' + (bStack_bb & 0xf);
    DAT_00479dc8._3_1_ = (bStack_bd >> 4) * '\n' + (bStack_bd & 0xf);
    DAT_00479dc8._1_1_ = (bStack_bf >> 4) * '\n' + (bStack_bf & 0xf);
    DAT_00479dc8._2_1_ = (bStack_be >> 4) * '\n' + (bStack_be & 0xf);
    DAT_00479dc8._6_2_ = (ushort)(bStack_b9 >> 4) * 10 + (bStack_b9 & 0xf) + 2000;
    DAT_00479dc8._5_1_ = (bStack_ba >> 4) * '\n' + (bStack_ba & 0xf);
    _DAT_00479dd4 = (undefined4)lVar2;
    DAT_00479dc4 = 0;
    DAT_00479dc2 = 0;
    DAT_00479dd0 = 0;
    DAT_00479dd8 = CONCAT26(DAT_00479dc8._6_2_,
                            CONCAT15(DAT_00479dc8._5_1_,
                                     CONCAT14(DAT_00479dc8._4_1_,
                                              CONCAT13(DAT_00479dc8._3_1_,
                                                       CONCAT12(DAT_00479dc8._2_1_,
                                                                CONCAT11(DAT_00479dc8._1_1_,
                                                                         (undefined1)DAT_00479dc8)))
                                             )));
    DAT_00479e00 = DAT_0040a8b0;
    DAT_00479e01 = DAT_0040a8b1;
    FUN_0035c6ec(0x479fc0,0,0x200);
    DAT_00479fc8._1_1_ = (bStack_bf >> 4) * '\n' + (bStack_bf & 0xf);
    DAT_00479fc8._4_1_ = (bStack_bb >> 4) * '\n' + (bStack_bb & 0xf);
    DAT_00479fc8._6_2_ = (ushort)(bStack_b9 >> 4) * 10 + (bStack_b9 & 0xf) + 2000;
    DAT_00479fc8._5_1_ = (bStack_ba >> 4) * '\n' + (bStack_ba & 0xf);
    DAT_00479fc8._2_1_ = (bStack_be >> 4) * '\n' + (bStack_be & 0xf);
    DAT_00479fc8._3_1_ = (bStack_bd >> 4) * '\n' + (bStack_bd & 0xf);
    DAT_00479fc0 = 0x8427;
    DAT_00479fc4 = 0;
    DAT_00479fc2 = 0;
    DAT_00479fc8._0_1_ = 0;
    DAT_00479fd0 = 0;
    DAT_00479fd4 = 0;
    DAT_00479fd8 = (ulong)CONCAT25(DAT_00479fc8._6_2_,
                                   CONCAT14(DAT_00479fc8._5_1_,
                                            CONCAT13(DAT_00479fc8._4_1_,
                                                     CONCAT12(DAT_00479fc8._3_1_,
                                                              CONCAT11(DAT_00479fc8._2_1_,
                                                                       DAT_00479fc8._1_1_))))) << 8;
    DAT_00479fe0 = 0;
    DAT_0047a000 = DAT_0040a8b8;
    DAT_0047a001 = DAT_0040a8b9;
    DAT_0047a002 = DAT_0040a8ba;
    lVar2 = FUN_0035b248(param_1,0x479dc0,uStack_330,1);
    if (lVar2 == 0) {
      return -0x7efeff91;
    }
  }
  iStack_b0 = FUN_00358db0(param_1,uStack_530,puStack_ac);
  if (iStack_b0 == 0) {
    lVar2 = FUN_00356878(param_1);
    if ((lVar2 != 0) && (lVar2 = FUN_0035ace0(param_1), lVar2 != 0)) {
      return iStack_b0;
    }
    return -0x7efeff91;
  }
  return iStack_b0;
}


// ==== FUN_00359560 @ 00359560 ====

int FUN_00359560(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ushort auStack_330 [2];
  int iStack_32c;
  uint uStack_320;
  undefined1 auStack_130 [128];
  int aiStack_b0 [4];
  
  iVar1 = FUN_00357e38();
  if (iVar1 == 0) {
    iVar1 = FUN_00357ee0(param_1,param_2,auStack_130);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_003581b8(param_1,auStack_130,auStack_330,0,0), iVar1 == -0x7efeffef)) {
      if (((auStack_330[0] & 1) == 0) || ((auStack_330[0] & 0x2000) != 0)) {
        iVar1 = -0x7efefff3;
      }
      else if ((auStack_330[0] & 0x20) == 0) {
        iVar4 = iStack_32c - param_4;
        if (iStack_32c < param_4) {
          iVar1 = -0x7efeffea;
        }
        else {
          if (param_5 == 0) {
            param_5 = iVar4;
          }
          uVar5 = uStack_320;
          iVar1 = param_5;
          if (iStack_32c < param_5 + param_4) {
            param_5 = iVar4;
            iVar1 = iVar4;
          }
          while (param_5 != 0) {
            if (param_4 < 0x400) {
              lVar3 = FUN_0035b228(param_1,0x479dc0,uVar5,1);
              aiStack_b0[0] = (int)lVar3;
              if (lVar3 == 0) {
                return -0x7efeff91;
              }
              if (param_5 <= 0x400 - param_4) {
                FUN_0035c544(param_3,(int)&DAT_00479dc0 + param_4,param_5);
                return iVar1;
              }
              FUN_0035c544(param_3,(int)&DAT_00479dc0 + param_4);
              param_5 = param_5 + -0x400 + param_4;
              param_3 = (param_3 + 0x400) - param_4;
              param_4 = 0;
            }
            uVar2 = FUN_00356a20(param_1,uVar5,aiStack_b0);
            if (aiStack_b0[0] != 0) {
              return aiStack_b0[0];
            }
            uVar5 = uVar2 & 0x7fffffff;
            if (uVar2 == 0xffffffff) {
              return -0x7efe6ffe;
            }
            aiStack_b0[0] = 0;
            if (param_4 != 0) {
              param_4 = param_4 + -0x400;
            }
          }
        }
      }
      else {
        iVar1 = -0x7efefffe;
      }
    }
  }
  return iVar1;
}


// ==== FUN_00359768 @ 00359768 ====

int FUN_00359768(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int unaff_s5_lo;
  int iVar7;
  ushort auStack_350 [2];
  int iStack_34c;
  uint uStack_340;
  char cStack_337;
  char cStack_336;
  char cStack_335;
  char cStack_334;
  char cStack_333;
  short sStack_332;
  char cStack_2f0;
  undefined1 auStack_150 [128];
  undefined1 uStack_d0;
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  
  iStack_b8 = FUN_00357e38();
  iVar5 = iStack_b8;
  if (iStack_b8 == 0) {
    iStack_b8 = FUN_00357ee0(param_1,param_2,auStack_150);
    iVar5 = iStack_b8;
    if ((iStack_b8 == 0) &&
       (iStack_b8 = FUN_003581b8(param_1,auStack_150,auStack_350,&uStack_c0,&uStack_bc),
       iVar5 = iStack_b8, iStack_b8 == -0x7efeffef)) {
      if (((cStack_2f0 == '\0') &&
          (((auStack_350[0] & 0xf000) == 0x8000 || ((auStack_350[0] & 0xf000) == 0xa000)))) &&
         (((auStack_350[0] & 0xf00) == 0x400 || ((auStack_350[0] & 0xf00) == 0)))) {
        if ((auStack_350[0] & 2) == 0) {
          iVar5 = -0x7efefff3;
        }
        else if ((auStack_350[0] & 0x20) == 0) {
          if (iStack_34c < param_4) {
            iVar5 = -0x7efeffea;
          }
          else {
            iVar5 = param_4 + param_5 + 0x3ff;
            iVar7 = param_4 + param_5 + 0x7fe;
            if (-1 < iVar5) {
              iVar7 = iVar5;
            }
            iVar5 = FUN_00356f88(param_1,uStack_340);
            if (-1 < iVar5) {
              if (iVar5 < iVar7 >> 10) {
                iVar1 = FUN_00356d30(param_1,&iStack_b8);
                if (iStack_b8 != 0) {
                  return iStack_b8;
                }
                if (iVar1 < (iVar7 >> 10) - iVar5) {
                  return -0x7efeffe4;
                }
              }
              iVar7 = param_4;
              iStack_b0 = param_5;
              uVar6 = uStack_340;
              if (uStack_340 != 0xffffffff) {
LAB_00359a68:
                do {
                  if (param_4 < 0x400) {
                    if ((0 < param_4) || ((param_4 + param_5 < 0x400 && (iVar7 < iStack_34c)))) {
                      lVar4 = FUN_0035b228(param_1,0x479dc0,uVar6,1);
                      iStack_b4 = (int)lVar4;
                      if (lVar4 == 0) goto LAB_00359ce8;
                    }
                    if (param_5 <= 0x400 - param_4) {
                      FUN_0035c544((int)&DAT_00479dc0 + param_4,param_3,param_5);
                      lVar4 = FUN_0035b248(param_1,0x479dc0,uVar6,1);
                      iStack_b4 = (int)lVar4;
                      if (lVar4 != 0) {
                        FUN_0035bd10(param_1,&uStack_d0);
                        if (iStack_34c < iVar7 + param_5) {
                          iStack_34c = iVar7 + param_5;
                        }
                        cStack_336 = (bStack_ce >> 4) * '\n' + (bStack_ce & 0xf);
                        cStack_337 = (bStack_cf >> 4) * '\n' + (bStack_cf & 0xf);
                        cStack_333 = (bStack_ca >> 4) * '\n' + (bStack_ca & 0xf);
                        cStack_334 = (bStack_cb >> 4) * '\n' + (bStack_cb & 0xf);
                        cStack_335 = (bStack_cd >> 4) * '\n' + (bStack_cd & 0xf);
                        auStack_350[0] = auStack_350[0] | 0x80;
                        sStack_332 = (ushort)(bStack_c9 >> 4) * 10 + (bStack_c9 & 0xf) + 2000;
                        iStack_b8 = FUN_00358608(param_1,auStack_350,uStack_c0,uStack_bc);
                        if (iStack_b8 != 0) {
                          return iStack_b8;
                        }
                        iStack_b8 = FUN_00358db0(param_1,uStack_c0,&uStack_d0);
                        if (iStack_b8 != 0) {
                          return iStack_b8;
                        }
                        lVar4 = FUN_00356878(param_1);
                        iStack_b4 = (int)lVar4;
                        if (lVar4 != 0) {
                          lVar4 = FUN_0035ace0(param_1);
                          if (lVar4 != 0) {
                            return iStack_b0;
                          }
                          return -0x7efeff91;
                        }
                      }
                      goto LAB_00359ce8;
                    }
                    FUN_0035c544((int)&DAT_00479dc0 + param_4,param_3);
                    lVar4 = FUN_0035b248(param_1,0x479dc0,uVar6,1);
                    iStack_b4 = (int)lVar4;
                    if (lVar4 == 0) goto LAB_00359ce8;
                    iVar7 = (iVar7 + 0x400) - param_4;
                    param_5 = param_5 + -0x400 + param_4;
                    param_3 = (param_3 + 0x400) - param_4;
                    param_4 = 0;
                  }
                  uVar2 = FUN_00356a20(param_1,uVar6,&iStack_b4);
                  if (iStack_b4 != 0) {
                    return iStack_b4;
                  }
                  if (uVar2 == 0xffffffff) {
                    uVar2 = FUN_00356c00(param_1,&iStack_b8);
                    if (iStack_b8 != 0) {
                      return iStack_b8;
                    }
                    FUN_00356ad0(param_1,uVar2,0xffffffffffffffff,&iStack_b8);
                    if (iStack_b8 != 0) {
                      return iStack_b8;
                    }
                    FUN_00356ad0(param_1,uVar6,uVar2 | 0x80000000,&iStack_b8);
                    if (iStack_b8 != 0) {
                      return iStack_b8;
                    }
                  }
                  if (param_4 != 0) {
                    param_4 = param_4 + -0x400;
                  }
                  uVar6 = uVar2 & 0x7fffffff;
                } while( true );
              }
              uVar3 = FUN_00356c00(param_1,&iStack_b8);
              iVar5 = iStack_b8;
              if ((iStack_b8 == 0) &&
                 (FUN_00356ad0(param_1,uVar3,0xffffffffffffffff,&iStack_b8), iVar5 = iStack_b8,
                 iStack_b8 == 0)) {
                FUN_0035bd10(param_1,&uStack_d0);
                uStack_340 = (uint)uVar3;
                if (iStack_34c < unaff_s5_lo) {
                  iStack_34c = unaff_s5_lo;
                }
                cStack_336 = (bStack_ce >> 4) * '\n' + (bStack_ce & 0xf);
                cStack_337 = (bStack_cf >> 4) * '\n' + (bStack_cf & 0xf);
                cStack_333 = (bStack_ca >> 4) * '\n' + (bStack_ca & 0xf);
                cStack_334 = (bStack_cb >> 4) * '\n' + (bStack_cb & 0xf);
                cStack_335 = (bStack_cd >> 4) * '\n' + (bStack_cd & 0xf);
                sStack_332 = (ushort)(bStack_c9 >> 4) * 10 + (bStack_c9 & 0xf) + 2000;
                iStack_b8 = FUN_00358608(param_1,auStack_350,uStack_c0,uStack_bc);
                iVar5 = iStack_b8;
                if (iStack_b8 == 0) {
                  lVar4 = FUN_00356878(param_1);
                  iStack_b4 = (int)lVar4;
                  if (lVar4 != 0) {
                    lVar4 = FUN_0035ace0(param_1);
                    iStack_b4 = (int)lVar4;
                    uVar6 = uStack_340;
                    if (lVar4 != 0) goto LAB_00359a68;
                  }
LAB_00359ce8:
                  iVar5 = -0x7efeff91;
                }
              }
            }
          }
        }
        else {
          iVar5 = -0x7efefffe;
        }
      }
      else {
        iVar5 = -0x7efe6ffe;
      }
    }
  }
  return iVar5;
}


// ==== FUN_00359d48 @ 00359d48 ====

int FUN_00359d48(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ushort auStack_370 [8];
  uint uStack_360;
  undefined1 auStack_160 [128];
  undefined1 auStack_e0 [128];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  
  iStack_54 = FUN_00357e38();
  if (iStack_54 == 0) {
    iStack_54 = FUN_00357ee0(param_1,param_2,auStack_160);
    if ((iStack_54 == 0) &&
       (iStack_54 = FUN_003581b8(param_1,auStack_160,auStack_370,&uStack_60,&uStack_5c),
       iStack_54 == -0x7efeffef)) {
      if ((auStack_370[0] & 2) == 0) {
        iStack_54 = -0x7efefff3;
      }
      else {
        iVar1 = -0x7efeffef;
        if ((auStack_370[0] & 0x20) != 0) {
          FUN_0035cbc0(auStack_e0,auStack_160);
          FUN_0035c7a4(auStack_e0,0x40a920);
          iVar1 = FUN_0035a0a0(param_1,auStack_e0,0,0xffffffffffffffff,0,&iStack_58);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = 0;
          if (2 < iStack_58) {
            return -0x7efeffa6;
          }
        }
        iStack_54 = iVar1;
        auStack_370[0] = auStack_370[0] ^ 0x8000;
        iStack_54 = FUN_00358608(param_1,auStack_370,uStack_60,uStack_5c);
        if (iStack_54 == 0) {
          lVar3 = FUN_0035ace0(param_1);
          if (lVar3 == 0) {
LAB_00359f30:
            iStack_54 = -0x7efeff91;
          }
          else if (uStack_360 == 0xffffffff) {
            iStack_54 = 0;
          }
          else {
            uVar4 = uStack_360;
            while (uVar2 = FUN_00356a20(param_1,uVar4,&iStack_54), iStack_54 == 0) {
              if ((uVar2 == 0xfffffffd) || (-1 < (int)uVar2)) {
LAB_00359f10:
                lVar3 = FUN_00356878(param_1);
                if ((lVar3 != 0) && (lVar3 = FUN_0035ace0(param_1), lVar3 != 0)) {
                  (&DAT_00479518)[(int)param_1 * 0x226] = 0;
                  return 0;
                }
                goto LAB_00359f30;
              }
              FUN_00356ad0(param_1,uVar4,uVar2 ^ 0x80000000,&iStack_54);
              if (iStack_54 != 0) {
                return iStack_54;
              }
              if (uVar2 == 0xffffffff) goto LAB_00359f10;
              uVar4 = uVar2 & 0x7fffffff;
            }
          }
        }
      }
    }
  }
  return iStack_54;
}


// ==== FUN_00359f78 @ 00359f78 ====

long FUN_00359f78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ushort auStack_2e0 [256];
  undefined1 auStack_e0 [128];
  
  lVar1 = FUN_00357ee0(param_1,param_2,auStack_e0);
  if (lVar1 != 0) {
    return lVar1;
  }
  lVar1 = FUN_0035ca74(auStack_e0,0x40a8c8);
  if (lVar1 == 0) {
    FUN_0035cbc0(&DAT_00479490 + (int)param_1 * 0x898,auStack_e0);
  }
  else {
    lVar1 = FUN_00357e38(param_1);
    if (lVar1 != 0) {
      return lVar1;
    }
    lVar1 = FUN_003581b8(param_1,auStack_e0,auStack_2e0,0,0);
    if (lVar1 != -0x7efeffef) {
      return lVar1;
    }
    if ((auStack_2e0[0] & 0x20) == 0) {
      return -0x7efeffec;
    }
    FUN_0035cbc0(&DAT_00479490 + (int)param_1 * 0x898,auStack_e0);
    FUN_0035c7a4(&DAT_00479490 + (int)param_1 * 0x898,0x40a8c8);
  }
  if (param_3 != 0) {
    FUN_0035cbc0(param_3,auStack_e0);
  }
  return 0;
}


// ==== FUN_0035a0a0 @ 0035a0a0 ====

/* WARNING: Removing unreachable block (ram,0x0035a380) */
/* WARNING: Removing unreachable block (ram,0x0035a384) */
/* WARNING: Removing unreachable block (ram,0x0035a3d8) */

int FUN_0035a0a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5,
                int *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 auStack_600 [128];
  undefined1 auStack_580 [128];
  undefined1 auStack_500 [64];
  ushort auStack_4c0 [2];
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  undefined8 uStack_4a8;
  undefined1 auStack_480 [31];
  undefined1 uStack_461;
  ushort auStack_2c0 [2];
  int iStack_2bc;
  undefined4 uStack_2b0;
  int iStack_c0;
  int iStack_bc;
  int *piStack_b8;
  int iStack_b4;
  undefined1 *puStack_b0;
  ushort *puStack_ac;
  
  iStack_b4 = 0;
  iStack_bc = param_4;
  piStack_b8 = param_6;
  lVar4 = FUN_0035c298();
  if (lVar4 == 0) {
    return -0x7efeffed;
  }
  if ((&DAT_00479514)[(int)param_1 * 0x226] == 0) {
    return -0x7efeff91;
  }
  lVar4 = FUN_00356508(param_1,param_2,auStack_600);
  if (lVar4 != 0) {
    lVar4 = FUN_0035ca74(auStack_600,0x40a8c8);
    puVar8 = auStack_580;
    if (lVar4 != 0) {
      FUN_0035cbc0(puVar8,auStack_600);
      puVar1 = (undefined1 *)FUN_00360a00(puVar8,0x2f);
      puStack_b0 = auStack_500;
      *puVar1 = 0;
      iVar2 = FUN_0035ccd8(puVar8);
      FUN_0035cbc0(puStack_b0,puVar8 + iVar2 + 1);
      lVar4 = FUN_0035ccd8(puVar8);
      if (lVar4 == 0) {
        puVar8 = &DAT_0040a8c8;
      }
      iStack_c0 = FUN_003581b8(param_1,puVar8,auStack_2c0,0,0);
      if (iStack_c0 != -0x7efeffef) {
        return iStack_c0;
      }
      puStack_ac = auStack_4c0;
      if ((auStack_2c0[0] & 0x20) == 0) {
        return -0x7efeffec;
      }
      lVar5 = FUN_00356e08(param_1,puStack_ac,uStack_2b0,0);
      iStack_c0 = (int)lVar5;
      if (lVar5 != 0) {
LAB_0035a26c:
        if (lVar5 == -0x7efefffe) {
          return -0x7efe6ffe;
        }
        return iStack_c0;
      }
      if (((auStack_4c0[0] & 0x8000) != 0) &&
         (lVar5 = FUN_0035ca74(auStack_480,0x40a8b0), lVar5 == 0)) {
        lVar5 = FUN_00356e08(param_1,puStack_ac,uStack_2b0,1);
        iStack_c0 = (int)lVar5;
        if (lVar5 != 0) goto LAB_0035a26c;
        if ((((auStack_4c0[0] & 0x8000) != 0) &&
            (lVar5 = FUN_0035ca74(auStack_480,0x40a8b8), lVar5 == 0)) && (1 < iStack_2bc)) {
          iVar2 = 0;
          if (param_3 < iStack_2bc) {
            uVar3 = uStack_2b0;
            if (lVar4 == 0) {
              iStack_2bc = iStack_2bc + -2;
              if (iStack_2bc == 0) {
                if (piStack_b8 != (int *)0x0) {
                  *piStack_b8 = 0;
                  return 0;
                }
                return 0;
              }
              uVar3 = FUN_00356a68(param_1,uStack_2b0,&iStack_c0);
              if (iStack_c0 == -0x7efeffa7) {
                return -0x7efe6ffe;
              }
              if (iStack_c0 != 0) {
                return iStack_c0;
              }
            }
            do {
              if (iStack_2bc == 0) break;
              puVar12 = (undefined8 *)&DAT_00479dc0;
              puVar13 = (undefined8 *)&DAT_00479dc0;
              lVar4 = FUN_0035b228(param_1,0x479dc0,uVar3,1);
              if (lVar4 == 0) {
                return -0x7efeff91;
              }
              iVar14 = 0;
              do {
                puVar12 = puVar12 + 0x40;
                puVar7 = puStack_ac;
                puVar6 = puVar13;
                do {
                  uVar9 = puVar6[1];
                  uVar10 = puVar6[2];
                  uVar11 = puVar6[3];
                  *(undefined8 *)puVar7 = *puVar6;
                  *(undefined8 *)(puVar7 + 4) = uVar9;
                  *(undefined8 *)(puVar7 + 8) = uVar10;
                  *(undefined8 *)(puVar7 + 0xc) = uVar11;
                  puVar6 = puVar6 + 4;
                  puVar7 = puVar7 + 0x10;
                } while (puVar6 != puVar12);
                uStack_461 = 0;
                if ((((auStack_4c0[0] & 0x8000) != 0) && ((auStack_4c0[0] & 0x2000) == 0)) &&
                   (lVar4 = FUN_00356220(auStack_480,puStack_b0), lVar4 == 1)) {
                  if (param_3 == 0) {
                    if ((param_5 != (undefined8 *)0x0) && (0 < iStack_bc)) {
                      *param_5 = uStack_4b8;
                      param_5[1] = uStack_4a8;
                      *(undefined4 *)(param_5 + 2) = uStack_4bc;
                      *(ushort *)((int)param_5 + 0x14) = auStack_4c0[0];
                      FUN_0035cbc0(param_5 + 3,auStack_480);
                      lVar4 = FUN_0035ca74(auStack_480,0x40a8b0);
                      if (lVar4 == 0) {
                        *(ushort *)((int)param_5 + 0x14) = auStack_2c0[0];
                      }
                      param_5 = param_5 + 7;
                      FUN_0035ca74(auStack_480,0x40a8b8);
                    }
                    iVar2 = iVar2 + 1;
                    if ((0 < iStack_bc) && (iStack_bc <= iVar2)) {
                      iStack_b4 = 1;
                      break;
                    }
                  }
                  else {
                    param_3 = param_3 + -1;
                  }
                }
                iStack_2bc = iStack_2bc + -1;
                if (iStack_2bc == 0) {
                  iStack_b4 = 1;
                  break;
                }
                iVar14 = iVar14 + 1;
                puVar13 = puVar13 + 0x40;
              } while (iVar14 < 2);
              if (iStack_b4 == 1) break;
              uVar3 = FUN_00356a68(param_1,uVar3,&iStack_c0);
              if (iStack_c0 == -0x7efeffa7) {
                return -0x7efe6ffe;
              }
              if (iStack_c0 != 0) {
                return iStack_c0;
              }
            } while (iStack_b4 == 0);
            if (piStack_b8 != (int *)0x0) {
              *piStack_b8 = iVar2;
            }
          }
          else {
            if (piStack_b8 == (int *)0x0) {
              return 0;
            }
            *piStack_b8 = 0;
          }
          return 0;
        }
      }
      return -0x7efe6ffe;
    }
  }
  return -0x7efeffea;
}


// ==== FUN_0035a5c0 @ 0035a5c0 ====

long FUN_0035a5c0(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_2e0 [128];
  ushort auStack_260 [12];
  char cStack_247;
  char cStack_246;
  char cStack_245;
  char cStack_244;
  char cStack_243;
  short sStack_242;
  undefined1 uStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  undefined4 uStack_50;
  undefined4 auStack_4c [3];
  
  lVar1 = FUN_00357e38();
  if ((lVar1 == 0) && (lVar1 = FUN_00357ee0(param_1,param_2,auStack_2e0), lVar1 == 0)) {
    lVar1 = FUN_003581b8(param_1,auStack_2e0,auStack_260,&uStack_50,auStack_4c);
    if (lVar1 == -0x7efeffef) {
      if ((auStack_260[0] & 0x20) == 0) {
        lVar1 = -0x7efeffec;
      }
      else {
        auStack_260[0] = auStack_260[0] & 0xe7f0 | param_3 & 0x180f;
        FUN_0035bd10(param_1,&uStack_60);
        cStack_246 = (bStack_5e >> 4) * '\n' + (bStack_5e & 0xf);
        cStack_247 = (bStack_5f >> 4) * '\n' + (bStack_5f & 0xf);
        cStack_243 = (bStack_5a >> 4) * '\n' + (bStack_5a & 0xf);
        cStack_244 = (bStack_5b >> 4) * '\n' + (bStack_5b & 0xf);
        cStack_245 = (bStack_5d >> 4) * '\n' + (bStack_5d & 0xf);
        sStack_242 = (ushort)(bStack_59 >> 4) * 10 + (bStack_59 & 0xf) + 2000;
        lVar1 = FUN_00358608(param_1,auStack_260,uStack_50,auStack_4c[0]);
        if (lVar1 == 0) {
          lVar2 = FUN_0035ace0(param_1);
          lVar1 = -0x7efeff91;
          if (lVar2 != 0) {
            lVar1 = 0;
          }
        }
      }
    }
  }
  return lVar1;
}


// ==== FUN_0035a748 @ 0035a748 ====

long FUN_0035a748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_380 [64];
  undefined1 auStack_340 [448];
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  undefined4 uStack_80;
  undefined4 auStack_7c [3];
  
  lVar2 = FUN_00357e38();
  if (lVar2 == 0) {
    lVar2 = FUN_00357ee0(param_1,param_2,auStack_180);
    if (lVar2 == 0) {
      lVar2 = FUN_0035c8d4(param_3,0x2f);
      if (lVar2 == 0) {
        FUN_0035cbc0(auStack_100,auStack_180);
        iVar1 = FUN_00360a00(auStack_100,0x2f);
        FUN_0035cbc0(iVar1 + 1,param_3);
        lVar2 = FUN_003561c0(param_3);
        if (lVar2 != 0) {
          lVar2 = FUN_00356150(param_3);
          if (lVar2 == 0) {
            return -0x7efeffa5;
          }
          lVar2 = FUN_003581b8(param_1,auStack_100,auStack_380,&uStack_80,auStack_7c);
          if (lVar2 != -0x7efefffe) {
            return lVar2;
          }
          lVar2 = FUN_003581b8(param_1,auStack_180,auStack_380,&uStack_80,auStack_7c);
          if (lVar2 != -0x7efeffef) {
            return lVar2;
          }
          FUN_0035cbc0(auStack_340,param_3);
          lVar2 = FUN_00358608(param_1,auStack_380,uStack_80,auStack_7c[0]);
          if (lVar2 != 0) {
            return lVar2;
          }
          lVar2 = FUN_0035ace0(param_1);
          if (lVar2 == 0) {
            return -0x7efeff91;
          }
          return 0;
        }
      }
      lVar2 = -0x7efeffea;
    }
  }
  return lVar2;
}


// ==== FUN_0035a8c8 @ 0035a8c8 ====

int FUN_0035a8c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ushort auStack_2d0 [2];
  undefined4 uStack_2cc;
  undefined4 uStack_2c0;
  undefined1 auStack_d0 [128];
  int aiStack_50 [4];
  
  aiStack_50[0] = FUN_00357e38();
  iVar1 = aiStack_50[0];
  if (aiStack_50[0] == 0) {
    aiStack_50[0] = FUN_00357ee0(param_1,param_2,auStack_d0);
    iVar1 = aiStack_50[0];
    if (aiStack_50[0] == 0) {
      aiStack_50[0] = FUN_003581b8(param_1,auStack_d0,auStack_2d0,0,0);
      iVar1 = aiStack_50[0];
      if (aiStack_50[0] == -0x7efeffef) {
        if ((auStack_2d0[0] & 0x20) == 0) {
          iVar1 = -0x7efeffec;
        }
        else {
          iVar1 = FUN_003587b0(param_1,uStack_2c0,uStack_2cc,aiStack_50);
          if (aiStack_50[0] != 0) {
            iVar1 = aiStack_50[0];
          }
        }
      }
    }
  }
  return iVar1;
}


// ==== FUN_0035a990 @ 0035a990 ====

undefined4 FUN_0035a990(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_0047a1c0;
  do {
    *puVar1 = 0xffffffff;
    puVar1[3] = 0;
    puVar1 = puVar1 + 0x804;
  } while ((int)puVar1 < 0x47e1e0);
  return 1;
}


// ==== FUN_0035a9c8 @ 0035a9c8 ====

void FUN_0035a9c8(void)

{
  FUN_0035b738();
  return;
}


// ==== FUN_0035a9e8 @ 0035a9e8 ====

void FUN_0035a9e8(void)

{
  FUN_0035b910();
  return;
}


// ==== FUN_0035aa08 @ 0035aa08 ====

void FUN_0035aa08(void)

{
  FUN_0035bae8();
  return;
}


// ==== FUN_0035aa28 @ 0035aa28 ====

undefined4 FUN_0035aa28(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = &DAT_0047e200;
  lVar2 = FUN_0035be18(param_1,0x47e200,0,1,0);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar3 = (undefined8 *)(&DAT_003d6348 + (int)param_1 * 0x184);
    if (((uint)puVar3 & 7) == 0) {
      do {
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        *puVar3 = *puVar4;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        puVar4 = puVar4 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar4 != (undefined8 *)0x47e380);
    }
    else {
      do {
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        *puVar3 = *puVar4;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        puVar4 = puVar4 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar4 != (undefined8 *)0x47e380);
      puVar4 = (undefined8 *)0x47e380;
    }
    *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_0035ab40 @ 0035ab40 ====

bool FUN_0035ab40(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar7 = &DAT_0047e200;
  FUN_0035c6ec(0x47e200,0xff,0x800);
  iVar1 = (int)param_1 * 0x184;
  puVar3 = (undefined8 *)(&DAT_003d6348 + iVar1);
  if (((uint)puVar3 & 7) == 0) {
    do {
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar4 = puVar3[3];
      *puVar7 = *puVar3;
      puVar7[1] = uVar5;
      puVar7[2] = uVar6;
      puVar7[3] = uVar4;
      puVar3 = puVar3 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar3 != (undefined8 *)(&DAT_003d64c8 + iVar1));
  }
  else {
    do {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *puVar7 = *puVar3;
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      puVar3 = puVar3 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar3 != (undefined8 *)(&DAT_003d64c8 + iVar1));
  }
  *(undefined4 *)puVar7 = *(undefined4 *)puVar3;
  lVar2 = FUN_0035bfd0(param_1,0x47e200,0,1);
  return lVar2 != 0;
}


// ==== FUN_0035ac60 @ 0035ac60 ====

void FUN_0035ac60(int param_1,undefined8 param_2,int param_3,int param_4)

{
  FUN_0035bfb0(param_1,param_2,param_3 * (uint)*(ushort *)(&DAT_003d6372 + param_1 * 0x184),
               (uint)*(ushort *)(&DAT_003d6372 + param_1 * 0x184) * param_4);
  return;
}


// ==== FUN_0035aca0 @ 0035aca0 ====

void FUN_0035aca0(int param_1,undefined8 param_2,int param_3,int param_4)

{
  FUN_0035bfd0(param_1,param_2,param_3 * (uint)*(ushort *)(&DAT_003d6372 + param_1 * 0x184),
               (uint)*(ushort *)(&DAT_003d6372 + param_1 * 0x184) * param_4);
  return;
}


// ==== FUN_0035ace0 @ 0035ace0 ====

undefined8 FUN_0035ace0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (&DAT_0047a1c0)[param_1 * 0x804];
  uVar2 = 1;
  if (iVar1 != -1) {
    uVar2 = FUN_0035aca0(param_1,&DAT_0047a1d0 + param_1 * 0x2010,iVar1,
                         (&DAT_0047a1cc)[param_1 * 0x804]);
    (&DAT_0047a1c0)[param_1 * 0x804] = -1;
    (&DAT_0047a1cc)[param_1 * 0x804] = 0;
  }
  return uVar2;
}


// ==== FUN_0035ad50 @ 0035ad50 ====

undefined8 FUN_0035ad50(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar9 = (int)param_1;
  iVar1 = iVar9 * 0x184;
  iVar2 = iVar9 * 0x2010;
  param_3 = param_3 + *(int *)(&DAT_003d637c + iVar1);
  if (*(ushort *)(&DAT_003d6374 + iVar1) == 0) {
    trap(7);
  }
  iVar1 = (int)(param_3 * (uint)*(ushort *)(&DAT_003d6372 + iVar1)) /
          (int)(uint)*(ushort *)(&DAT_003d6374 + iVar1);
  if ((&DAT_0047a1c0)[iVar9 * 0x804] == -1) {
    (&DAT_0047a1c0)[iVar9 * 0x804] = param_3;
    puVar4 = (undefined8 *)(&DAT_0047a1d0 + iVar2);
    *(int *)(&DAT_0047a1c4 + iVar2) = param_3;
    *(int *)(&DAT_0047a1c8 + iVar2) = iVar1;
    (&DAT_0047a1cc)[iVar9 * 0x804] = 0;
    if (((uint)param_2 & 7) == 0) {
      puVar3 = param_2 + 0x80;
      do {
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        *puVar4 = *param_2;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        puVar4[3] = uVar7;
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 4;
      } while (param_2 != puVar3);
    }
    else {
      puVar3 = param_2 + 0x80;
      do {
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        *puVar4 = *param_2;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        puVar4[3] = uVar7;
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 4;
      } while (param_2 != puVar3);
    }
    uVar5 = 1;
  }
  else if (((param_3 == *(int *)(&DAT_0047a1c4 + iVar2) + 1) &&
           ((int)(&DAT_0047a1cc)[iVar9 * 0x804] < 8)) && (*(int *)(&DAT_0047a1c8 + iVar2) == iVar1))
  {
    *(int *)(&DAT_0047a1c4 + iVar2) = param_3;
    puVar4 = (undefined8 *)(&DAT_0047a1d0 + iVar2 + (&DAT_0047a1cc)[iVar9 * 0x804] * 0x400);
    if (((uint)param_2 & 7) == 0) {
      puVar3 = param_2 + 0x80;
      do {
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        uVar5 = param_2[3];
        *puVar4 = *param_2;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar5;
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 4;
      } while (param_2 != puVar3);
    }
    else {
      puVar3 = param_2 + 0x80;
      do {
        uVar7 = param_2[1];
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        *puVar4 = *param_2;
        puVar4[1] = uVar7;
        puVar4[2] = uVar5;
        puVar4[3] = uVar6;
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 4;
      } while (param_2 != puVar3);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_0035ace0(param_1);
    iVar2 = iVar9 * 0x2010;
    (&DAT_0047a1c0)[iVar9 * 0x804] = param_3;
    puVar4 = (undefined8 *)(&DAT_0047a1d0 + iVar2);
    *(int *)(&DAT_0047a1c4 + iVar2) = param_3;
    *(int *)(&DAT_0047a1c8 + iVar2) = iVar1;
    (&DAT_0047a1cc)[iVar9 * 0x804] = 0;
    if (((uint)param_2 & 7) == 0) {
      puVar3 = param_2 + 0x80;
      do {
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar6 = param_2[3];
        *puVar4 = *param_2;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar6;
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 4;
      } while (param_2 != puVar3);
    }
    else {
      puVar3 = param_2 + 0x80;
      do {
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar6 = param_2[3];
        *puVar4 = *param_2;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar6;
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 4;
      } while (param_2 != puVar3);
    }
  }
  (&DAT_0047a1cc)[iVar9 * 0x804] = (&DAT_0047a1cc)[iVar9 * 0x804] + 1;
  return uVar5;
}


// ==== FUN_0035b0e8 @ 0035b0e8 ====

undefined8 FUN_0035b0e8(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar5 = (int)param_1;
  iVar1 = (&DAT_0047a1c0)[iVar5 * 0x804];
  param_3 = param_3 + *(int *)(&DAT_003d637c + iVar5 * 0x184);
  if ((param_3 < iVar1) || (iVar1 + (&DAT_0047a1cc)[iVar5 * 0x804] <= param_3)) {
    uVar3 = FUN_0035ac60(param_1,param_2,param_3,1);
  }
  else {
    iVar1 = iVar5 * 0x2010 + (param_3 - iVar1) * 0x400;
    puVar2 = (undefined8 *)(&DAT_0047a1d0 + iVar1);
    puVar4 = (undefined8 *)(iVar1 + 0x47a5d0);
    if (((uint)param_2 & 7) == 0) {
      do {
        uVar3 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *param_2 = *puVar2;
        param_2[1] = uVar3;
        param_2[2] = uVar6;
        param_2[3] = uVar7;
        puVar2 = puVar2 + 4;
        param_2 = param_2 + 4;
      } while (puVar2 != puVar4);
      uVar3 = 1;
    }
    else {
      do {
        uVar3 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *param_2 = *puVar2;
        param_2[1] = uVar3;
        param_2[2] = uVar6;
        param_2[3] = uVar7;
        puVar2 = puVar2 + 4;
        param_2 = param_2 + 4;
      } while (puVar2 != puVar4);
      uVar3 = 1;
    }
  }
  return uVar3;
}


// ==== FUN_0035b228 @ 0035b228 ====

void FUN_0035b228(void)

{
  FUN_0035b0e8();
  return;
}


// ==== FUN_0035b248 @ 0035b248 ====

void FUN_0035b248(void)

{
  FUN_0035ad50();
  return;
}


// ==== FUN_0035b268 @ 0035b268 ====

undefined4 FUN_0035b268(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(&DAT_003d6418 + param_1 * 0x184);
  do {
    iVar1 = iVar1 + 1;
    if (*piVar2 == param_2) {
      return 1;
    }
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x20);
  return 0;
}


// ==== FUN_0035b2b0 @ 0035b2b0 ====

void FUN_0035b2b0(int param_1,int param_2)

{
  if (*(ushort *)(&DAT_003d6374 + param_1 * 0x184) == 0) {
    trap(7);
  }
  FUN_0035b268(param_1,(int)(param_2 * (uint)*(ushort *)(&DAT_003d6372 + param_1 * 0x184)) /
                       (int)(uint)*(ushort *)(&DAT_003d6374 + param_1 * 0x184));
  return;
}


// ==== FUN_0035b2f8 @ 0035b2f8 ====

undefined4 FUN_0035b2f8(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (param_2[1] == 0) {
    trap(7);
  }
  iVar1 = param_2[2] / param_2[1];
  if (1 < iVar1) {
    bVar2 = true;
    iVar5 = 1;
    do {
      if (!bVar2) {
        return 1;
      }
      iVar3 = 0x800 / *param_2;
      if (*param_2 == 0) {
        trap(7);
      }
      bVar2 = false;
      FUN_0035be18(param_1,0x47e200,iVar5 * param_2[1],iVar3,0);
      uVar4 = 0;
      if ((uint)(*param_2 * iVar3) >> 2 != 0) {
        if ((int)DAT_0047e200 == -1) {
          do {
            uVar4 = uVar4 + 1;
            if ((uint)(*param_2 * iVar3) >> 2 <= uVar4) goto LAB_0035b414;
          } while (*(int *)((int)&DAT_0047e200 + uVar4 * 4) == -1);
          bVar2 = true;
        }
        else {
          bVar2 = true;
        }
      }
LAB_0035b414:
      iVar3 = iVar5 + 1;
      if (bVar2) {
        *param_3 = iVar5;
        iVar6 = iVar6 + 1;
        param_3 = param_3 + 1;
      }
      bVar2 = iVar6 < 0x10;
      iVar5 = iVar3;
    } while (iVar3 < iVar1);
  }
  return 1;
}


// ==== FUN_0035b470 @ 0035b470 ====

undefined8 FUN_0035b470(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x480b00;
  DAT_003d6650 = 0;
  WaitSema(DAT_0047ea00);
  FUN_003680a0(0x480b00,0x480bff);
  if ((DAT_003d6650 < DAT_00480b00) && (DAT_00480b80 < DAT_00480b00)) {
    DAT_003d6650 = DAT_00480b00;
  }
  else if (DAT_003d6650 < DAT_00480b80) {
    if (DAT_00480b00 < DAT_00480b80) {
      DAT_003d6650 = DAT_00480b80;
      uVar1 = 0x480b80;
    }
    else {
      DAT_00480b08 = 0;
    }
  }
  else {
    DAT_00480b08 = 0;
  }
  return uVar1;
}


// ==== FUN_0035b540 @ 0035b540 ====

undefined8 FUN_0035b540(void)

{
  WaitSema(DAT_0047ea00);
  FUN_003680a0(0x480b00,0x480b7f);
  if (DAT_00480b00 < 1) {
    DAT_00480b08 = 0;
  }
  return 0x480b00;
}


// ==== FUN_0035b598 @ 0035b598 ====

void FUN_0035b598(void)

{
  iSignalSema(DAT_0047ea00);
  SYNC(0);
  EI();
  return;
}


// ==== FUN_0035b5c8 @ 0035b5c8 ====

/* Strings referenciadas:
     "sceMc2_sema_subs" */

undefined4 FUN_0035b5c8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  char *pcStack_1c;
  
  DAT_003d6650 = 0;
  uStack_2c = 0x7f;
  pcStack_1c = "sceMc2_sema_subs";
  uStack_28 = 0;
  lVar2 = CreateSema(auStack_30);
  DAT_0047ea00 = (undefined4)lVar2;
  if (lVar2 < 0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_0047ea08;
    do {
      *puVar3 = 0;
      puVar3[2] = 0x200;
      puVar3[3] = 0x10;
      puVar3[4] = 0x4000;
      puVar3 = puVar3 + 9;
    } while ((int)puVar3 < 0x47ea50);
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_0035b658 @ 0035b658 ====

undefined4 FUN_0035b658(void)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < DAT_0047ea00) {
    DeleteSema();
  }
  piVar2 = &DAT_0047ea08;
  iVar1 = DAT_0047ea08;
  while( true ) {
    if (iVar1 != 0) {
      FUN_0029b998(piVar2[1]);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 9;
    if (0x47ea4f < (int)piVar2) break;
    iVar1 = *piVar2;
  }
  return 1;
}


// ==== FUN_0035b6d0 @ 0035b6d0 ====

undefined4 FUN_0035b6d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(&DAT_0047ea24 + param_1 * 0x24) = param_2;
  *(undefined4 *)(param_1 * 0x24 + 0x47ea28) = param_3;
  return 1;
}


// ==== FUN_0035b6f8 @ 0035b6f8 ====

undefined4 FUN_0035b6f8(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(&DAT_0047ea10 + param_1 * 9) = *param_2;
  *(undefined8 *)(&DAT_0047ea18 + param_1 * 9) = uVar1;
  return 1;
}


// ==== FUN_0035b738 @ 0035b738 ====

undefined4 FUN_0035b738(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_b0;
  undefined8 *puStack_ac;
  
  puVar5 = (undefined4 *)(&DAT_0047ea0c + param_1 * 0x24);
  puStack_ac = param_2;
  lVar3 = FUN_0029bbc8(*puVar5);
  if (lVar3 != 3) {
    DAT_0047eaa4 = 0;
    uStack_b0 = 0x2080;
    DAT_0047ea88 = 0;
    DAT_0047ea8c = 0;
    DAT_0047ea90 = 0;
    DAT_0047ea94 = 0;
    DAT_0047ea98 = 0;
    DAT_0047ea9c = 0;
    DAT_0047eaa0 = 0;
    FUN_0035c6ec(0x480b00,0,0x100);
    FUN_003680a0(0x480b00,0x480bff);
    DAT_003d6654 = 3;
    uVar1 = *puVar5;
    while (lVar3 = FUN_0029be90(uVar1,DAT_003d6654,&uStack_b0,0x47ea80,0x35b598), lVar3 != 1) {
      uVar1 = *puVar5;
    }
    iVar2 = FUN_0035b470();
    if (*(int *)(iVar2 + 8) != 0) {
      (&DAT_0047ea10)[param_1 * 9] =
           (uint)*(byte *)(iVar2 + 0xc) + (uint)*(byte *)(iVar2 + 0xd) * 0x100;
      (&DAT_0047ea14)[param_1 * 9] =
           (uint)*(byte *)(iVar2 + 0xe) + (uint)*(byte *)(iVar2 + 0xf) * 0x100;
      (&DAT_0047ea18)[param_1 * 9] =
           (uint)*(byte *)(iVar2 + 0x10) + (uint)*(byte *)(iVar2 + 0x13) * 0x1000000 +
           (uint)*(byte *)(iVar2 + 0x12) * 0x10000 + (uint)*(byte *)(iVar2 + 0x11) * 0x100;
      *(undefined4 *)(&DAT_0047ea1c + param_1 * 0x24) = 1;
      uVar4 = *(undefined8 *)(&DAT_0047ea18 + param_1 * 9);
      *puStack_ac = *(undefined8 *)(&DAT_0047ea10 + param_1 * 9);
      puStack_ac[1] = uVar4;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0035b910 @ 0035b910 ====

undefined4 FUN_0035b910(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 auStack_70 [4];
  
  puVar4 = (undefined4 *)(&DAT_0047ea0c + param_1 * 0x24);
  lVar3 = FUN_0029bbc8(*puVar4);
  if (lVar3 == 3) {
    uVar2 = 0;
  }
  else {
    DAT_0047ea88 = (&DAT_0047ea10)[param_1 * 9];
    DAT_0047ea8c = (&DAT_0047ea14)[param_1 * 9];
    DAT_0047ea90 = (&DAT_0047ea18)[param_1 * 9];
    DAT_0047ea98 = 0;
    auStack_70[0] = 0x2080;
    DAT_0047ea94 = 0;
    FUN_0035c6ec(0x480b00,0,0x100);
    DAT_003d6654 = 4;
    uVar2 = *puVar4;
    while (lVar3 = FUN_0029be90(uVar2,DAT_003d6654,auStack_70,0x47ea80,0x35b598), lVar3 != 1) {
      uVar2 = *puVar4;
    }
    iVar1 = FUN_0035b470();
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


// ==== FUN_0035ba10 @ 0035ba10 ====

undefined4 FUN_0035ba10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 auStack_70 [4];
  
  puVar4 = (undefined4 *)(&DAT_0047ea0c + param_1 * 0x24);
  lVar3 = FUN_0029bbc8(*puVar4);
  if (lVar3 == 3) {
    uVar2 = 0;
  }
  else {
    DAT_0047ea98 = 0;
    auStack_70[0] = 0x2080;
    DAT_0047ea94 = 0;
    FUN_0035c6ec(0x480b00,0,0x100);
    DAT_003d6654 = 0xd;
    uVar2 = *puVar4;
    while (lVar3 = FUN_0029be90(uVar2,DAT_003d6654,auStack_70,0x47ea80,0x35b598), lVar3 != 1) {
      uVar2 = *puVar4;
    }
    iVar1 = FUN_0035b470();
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


// ==== FUN_0035bae8 @ 0035bae8 ====

bool FUN_0035bae8(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 auStack_70 [4];
  
  puVar5 = (undefined4 *)(&DAT_0047ea0c + param_1 * 0x24);
  lVar4 = FUN_0029bbc8(*puVar5);
  if (lVar4 == 3) {
    bVar2 = false;
  }
  else {
    DAT_0047ea98 = 0;
    auStack_70[0] = 0x2080;
    DAT_0047ea94 = 0;
    FUN_0035c6ec(0x480b00,0,0x100);
    FUN_003680a0(0x480b00,0x480bff);
    DAT_003d6654 = 0xc;
    uVar1 = *puVar5;
    while (lVar4 = FUN_0029be90(uVar1,DAT_003d6654,auStack_70,0x47ea80,0x35b598), lVar4 != 1) {
      uVar1 = *puVar5;
    }
    iVar3 = FUN_0035b470();
    bVar2 = *(int *)(iVar3 + 8) != 0;
  }
  return bVar2;
}


// ==== FUN_0035bbd8 @ 0035bbd8 ====

/* Strings referenciadas:
     "** PANIC! " */

undefined4 FUN_0035bbd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 auStack_70 [4];
  
  iVar1 = param_1 * 0x24;
  puVar4 = (undefined4 *)(&DAT_0047ea0c + iVar1);
  lVar3 = FUN_0029bbc8(*puVar4);
  if (lVar3 == 3) {
    uVar2 = 0;
  }
  else if (((&DAT_0047ea10)[param_1 * 9] == 0) || ((&DAT_0047ea14)[param_1 * 9] == 0)) {
    FUN_0036a038(0x40a940);
    uVar2 = 0;
  }
  else {
    DAT_0047ea94 = *(undefined4 *)(iVar1 + 0x47ea28);
    DAT_0047ea98 = *(undefined4 *)(&DAT_0047ea24 + iVar1);
    DAT_0047eaa4 = *(undefined4 *)(&DAT_0047ea1c + iVar1);
    DAT_0047ea90 = (&DAT_0047ea18)[param_1 * 9];
    auStack_70[0] = 0x2080;
    DAT_0047ea88 = (&DAT_0047ea10)[param_1 * 9];
    DAT_0047ea8c = (&DAT_0047ea14)[param_1 * 9];
    FUN_0035c6ec(0x480b00,0,0x100);
    DAT_003d6654 = 6;
    uVar2 = *puVar4;
    while (lVar3 = FUN_0029be90(uVar2,DAT_003d6654,auStack_70,0x47ea80,0x35b598), lVar3 != 1) {
      uVar2 = *puVar4;
    }
    iVar1 = FUN_0035b470();
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


// ==== FUN_0035bd10 @ 0035bd10 ====

undefined4 FUN_0035bd10(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 auStack_80 [4];
  
  puVar4 = (undefined4 *)(&DAT_0047ea0c + param_1 * 0x24);
  lVar3 = FUN_0029bbc8(*puVar4);
  if (lVar3 != 3) {
    DAT_0047ea98 = 0;
    auStack_80[0] = 0x2080;
    DAT_0047ea94 = 0;
    FUN_0035c6ec(0x480b00,0,0x100);
    DAT_003d6654 = 10;
    uVar1 = *puVar4;
    while (lVar3 = FUN_0029be90(uVar1,DAT_003d6654,auStack_80,0x47ea80,0x35b598), lVar3 != 1) {
      uVar1 = *puVar4;
    }
    iVar2 = FUN_0035b470();
    if (*(int *)(iVar2 + 8) != 0) {
      *param_2 = *(undefined8 *)(iVar2 + 0xc);
      return *(undefined4 *)(iVar2 + 8);
    }
  }
  return 0;
}


// ==== FUN_0035be18 @ 0035be18 ====

int FUN_0035be18(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 auStack_a0 [4];
  
  puVar4 = (undefined4 *)(&DAT_0047ea0c + param_1 * 0x24);
  lVar3 = FUN_0029bbc8(*puVar4);
  if (lVar3 != 3) {
    DAT_0047ea88 = (&DAT_0047ea10)[param_1 * 9];
    DAT_0047ea8c = (&DAT_0047ea14)[param_1 * 9];
    DAT_0047ea90 = (&DAT_0047ea18)[param_1 * 9];
    auStack_a0[0] = 0x2080;
    DAT_0047ea94 = 0;
    DAT_0047ea98 = 0;
    DAT_0047ea9c = 0;
    DAT_0047eaa0 = 0;
    DAT_0047ea80 = param_3;
    DAT_0047ea84 = param_4;
    DAT_0047eaa4 = param_5;
    FUN_0035c6ec(0x480b00,0,0x100);
    DAT_003d6654 = 1;
    uVar1 = *puVar4;
    while (lVar3 = FUN_0029be90(uVar1,DAT_003d6654,auStack_a0,0x47ea80,0x35b598), lVar3 != 1) {
      uVar1 = *puVar4;
    }
    iVar2 = FUN_0035b540();
    if (*(int *)(iVar2 + 8) != 0) {
      puVar4 = &DAT_00480b80;
      iVar2 = param_4;
      if (param_4 < 1) {
        return param_4;
      }
      do {
        iVar2 = iVar2 + -1;
        FUN_003680a0(puVar4,(int)puVar4 + DAT_0047ea88);
        FUN_0035c544(param_2,puVar4,DAT_0047ea88);
        param_2 = param_2 + DAT_0047ea88;
        puVar4 = (undefined4 *)((int)puVar4 + DAT_0047ea88);
      } while (iVar2 != 0);
      return param_4;
    }
  }
  return 0;
}


// ==== FUN_0035bfb0 @ 0035bfb0 ====

void FUN_0035bfb0(void)

{
  FUN_0035be18();
  return;
}


// ==== FUN_0035bfd0 @ 0035bfd0 ====

/* Strings referenciadas:
     "libmc2: Invalid data length (over 8192) " */

undefined8 FUN_0035bfd0(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 auStack_90 [4];
  
  iVar3 = param_1 * 0x24;
  puVar6 = (undefined4 *)(&DAT_0047ea0c + iVar3);
  lVar4 = FUN_0029bbc8(*puVar6);
  if (lVar4 == 3) {
    uVar5 = 0;
  }
  else {
    uVar2 = (&DAT_0047ea10)[param_1 * 9] * (int)param_4;
    if (uVar2 < 0x2001) {
      DAT_0047ea90 = (&DAT_0047ea18)[param_1 * 9];
      DAT_0047ea94 = *(undefined4 *)(iVar3 + 0x47ea28);
      DAT_0047ea98 = *(undefined4 *)(&DAT_0047ea24 + iVar3);
      DAT_0047eaa4 = *(undefined4 *)(&DAT_0047ea1c + iVar3);
      DAT_0047ea8c = (&DAT_0047ea14)[param_1 * 9];
      DAT_0047ea9c = 0;
      DAT_0047eaa0 = 0;
      DAT_0047ea80 = param_3;
      DAT_0047ea84 = (int)param_4;
      DAT_0047ea88 = (&DAT_0047ea10)[param_1 * 9];
      FUN_0035c544(0x47eaa8,param_2,uVar2);
      auStack_90[0] = 0x2080;
      FUN_0035c6ec(0x480b00,0,0x100);
      FUN_003680a0(0x480b00,0x480bff);
      DAT_003d6654 = 2;
      uVar1 = *puVar6;
      while (lVar4 = FUN_0029be90(uVar1,DAT_003d6654,auStack_90,0x47ea80,0x35b598), lVar4 != 1) {
        uVar1 = *puVar6;
      }
      iVar3 = FUN_0035b470();
      uVar5 = 0;
      if (*(int *)(iVar3 + 8) != 0) {
        uVar5 = param_4;
      }
    }
    else {
      FUN_0036a038(0x40a950);
      uVar5 = 0;
    }
  }
  return uVar5;
}


// ==== FUN_0035c168 @ 0035c168 ====

bool FUN_0035c168(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 auStack_80 [4];
  
  puVar5 = (undefined4 *)(&DAT_0047ea0c + param_1 * 0x24);
  lVar4 = FUN_0029bbc8(*puVar5);
  if (lVar4 == 3) {
    bVar2 = false;
  }
  else {
    DAT_0047ea90 = (&DAT_0047ea18)[param_1 * 9];
    DAT_0047ea88 = (&DAT_0047ea10)[param_1 * 9];
    DAT_0047ea8c = (&DAT_0047ea14)[param_1 * 9];
    DAT_0047ea84 = 1;
    auStack_80[0] = 0x2080;
    DAT_0047ea80 = 0;
    DAT_0047ea94 = 0;
    DAT_0047ea98 = 0;
    DAT_0047ea9c = 0;
    DAT_0047eaa0 = param_2;
    FUN_0035c6ec(0x480b00,0,0x100);
    FUN_003680a0(0x480b00,0x480bff);
    DAT_003d6654 = 9;
    uVar1 = *puVar5;
    while (lVar4 = FUN_0029be90(uVar1,DAT_003d6654,auStack_80,0x47ea80,0x35b598), lVar4 != 1) {
      uVar1 = *puVar5;
    }
    iVar3 = FUN_0035b470();
    bVar2 = *(int *)(iVar3 + 8) != 0;
  }
  return bVar2;
}


// ==== FUN_0035c298 @ 0035c298 ====

bool FUN_0035c298(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0029bbc8(*(undefined4 *)(&DAT_0047ea0c + param_1 * 0x24));
  return lVar1 != 3;
}


// ==== FUN_0035c2d0 @ 0035c2d0 ====

int FUN_0035c2d0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_0047ea08;
  do {
    if (*piVar2 == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 9;
  } while (iVar1 < 2);
  return -1;
}


// ==== FUN_0035c308 @ 0035c308 ====

/* Strings referenciadas:
     "MC2SOCKET" */

long FUN_0035c308(uint *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint auStack_70 [3];
  uint uStack_64;
  uint uStack_60;
  char acStack_5c [8];
  char acStack_54 [20];
  
  lVar2 = FUN_0035c2d0();
  lVar3 = -1;
  if (-1 < lVar2) {
    uStack_64 = param_1[2];
    uStack_60 = param_1[3];
    auStack_70[2] = param_1[1];
    acStack_5c[0] = s_MC2SOCKET_0040a980[0];
    acStack_5c[1] = s_MC2SOCKET_0040a980[1];
    acStack_5c[2] = s_MC2SOCKET_0040a980[2];
    acStack_5c[3] = s_MC2SOCKET_0040a980[3];
    acStack_5c[4] = s_MC2SOCKET_0040a980[4];
    acStack_5c[5] = s_MC2SOCKET_0040a980[5];
    acStack_5c[6] = s_MC2SOCKET_0040a980[6];
    acStack_5c[7] = s_MC2SOCKET_0040a980[7];
    acStack_54[0] = s_MC2SOCKET_0040a980[8];
    acStack_54[1] = s_MC2SOCKET_0040a980[9];
    auStack_70[1] = 2;
    auStack_70[0] = *param_1 | 1;
    FUN_0035c6ec(0x480b00,0,0x100);
    lVar3 = FUN_0029b868(auStack_70,0x480b00,0x480b80);
    iVar4 = (int)lVar2;
    iVar1 = iVar4 * 0x24;
    *(int *)(&DAT_0047ea0c + iVar1) = (int)lVar3;
    if (lVar3 < 0) {
      lVar3 = -1;
    }
    else {
      (&DAT_0047ea08)[iVar4 * 9] = 1;
      *(undefined4 *)(&DAT_0047ea24 + iVar1) = 0;
      *(undefined4 *)(iVar1 + 0x47ea28) = 0;
      (&DAT_0047ea10)[iVar4 * 9] = 0x200;
      (&DAT_0047ea14)[iVar4 * 9] = 0x10;
      (&DAT_0047ea18)[iVar4 * 9] = 0x4000;
      lVar3 = lVar2;
    }
  }
  return lVar3;
}


// ==== FUN_0035c428 @ 0035c428 ====

int FUN_0035c428(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_0047ea08;
  while ((*piVar2 == 0 || (piVar2[1] != param_1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 9;
    if (1 < iVar1) {
      return -1;
    }
  }
  return iVar1;
}


// ==== FUN_0035c470 @ 0035c470 ====

undefined4 FUN_0035c470(int param_1)

{
  if ((&DAT_0047ea08)[param_1 * 9] == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(&DAT_0047ea0c + param_1 * 0x24);
}


// ==== FUN_0035c4a0 @ 0035c4a0 ====

undefined * FUN_0035c4a0(void)

{
  return PTR_DAT_003d6944;
}


// ==== FUN_0035c4b0 @ 0035c4b0 ====

int FUN_0035c4b0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined8 in_a3_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((0xf < param_3) && ((((uint)param_1 | (uint)param_2) & 0xf) == 0)) {
    do {
      uVar3 = CONCAT71(0,param_3 < 0x20);
      pauVar2 = param_1 + 1;
      auVar4 = _pxor(*param_2,*param_1);
      pauVar1 = param_2 + 1;
      auVar5._8_8_ = in_a3_udw;
      auVar5._0_8_ = uVar3;
      auVar5 = _pcpyud(auVar4,auVar5);
      if (auVar5._0_8_ != 0 || auVar4._0_8_ != 0) break;
      param_3 = param_3 - 0x10;
      param_1 = pauVar2;
      param_2 = pauVar1;
    } while (uVar3 == 0);
  }
  while( true ) {
    param_3 = param_3 - 1;
    if (param_3 == 0xffffffff) {
      return 0;
    }
    if ((uint)(byte)(*param_1)[0] != (uint)(byte)(*param_2)[0]) break;
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  return (uint)(byte)(*param_1)[0] - (uint)(byte)(*param_2)[0];
}


// ==== FUN_0035c544 @ 0035c544 ====

undefined8 * FUN_0035c544(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if ((0x1f < param_3) && ((((uint)param_2 | (uint)param_1) & 0xf) == 0)) {
    do {
      uVar2 = *param_2;
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *(undefined4 *)((int)param_2 + 0xc);
      param_3 = param_3 - 0x20;
      *(int *)puVar5 = (int)uVar2;
      *(int *)((int)puVar5 + 4) = (int)((ulong)uVar2 >> 0x20);
      *(undefined4 *)(puVar5 + 1) = uVar3;
      *(undefined4 *)((int)puVar5 + 0xc) = uVar4;
      uVar2 = param_2[2];
      uVar3 = *(undefined4 *)(param_2 + 3);
      uVar4 = *(undefined4 *)((int)param_2 + 0x1c);
      param_2 = param_2 + 4;
      *(int *)(puVar5 + 2) = (int)uVar2;
      *(int *)((int)puVar5 + 0x14) = (int)((ulong)uVar2 >> 0x20);
      *(undefined4 *)(puVar5 + 3) = uVar3;
      *(undefined4 *)((int)puVar5 + 0x1c) = uVar4;
      puVar5 = puVar5 + 4;
    } while (0x1f < param_3);
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 1);
    *(undefined1 *)puVar5 = uVar1;
    puVar5 = (undefined8 *)((int)puVar5 + 1);
  }
  return param_1;
}


// ==== FUN_0035c5f0 @ 0035c5f0 ====

undefined8 * FUN_0035c5f0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if ((param_2 < param_1) && (puVar7 = (undefined8 *)((int)param_2 + param_3), param_1 < puVar7)) {
    puVar2 = (undefined1 *)((int)param_1 + param_3);
    iVar6 = param_3 - 1;
    if (iVar6 != -1) {
      do {
        puVar7 = (undefined8 *)((int)puVar7 + -1);
        puVar2 = puVar2 + -1;
        iVar6 = iVar6 + -1;
        *puVar2 = *(undefined1 *)puVar7;
      } while (iVar6 != -1);
      return param_1;
    }
  }
  else {
    puVar7 = param_1;
    if (param_3 < 0x20) {
      iVar6 = param_3 - 1;
    }
    else if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
      do {
        uVar3 = *param_2;
        uVar4 = *(undefined4 *)(param_2 + 1);
        uVar5 = *(undefined4 *)((int)param_2 + 0xc);
        param_3 = param_3 - 0x20;
        *(int *)puVar7 = (int)uVar3;
        *(int *)((int)puVar7 + 4) = (int)((ulong)uVar3 >> 0x20);
        *(undefined4 *)(puVar7 + 1) = uVar4;
        *(undefined4 *)((int)puVar7 + 0xc) = uVar5;
        uVar3 = param_2[2];
        uVar4 = *(undefined4 *)(param_2 + 3);
        uVar5 = *(undefined4 *)((int)param_2 + 0x1c);
        param_2 = param_2 + 4;
        *(int *)(puVar7 + 2) = (int)uVar3;
        *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar3 >> 0x20);
        *(undefined4 *)(puVar7 + 3) = uVar4;
        *(undefined4 *)((int)puVar7 + 0x1c) = uVar5;
        puVar7 = puVar7 + 4;
      } while (0x1f < param_3);
      for (; 7 < param_3; param_3 = param_3 - 8) {
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      }
      iVar6 = param_3 - 1;
    }
    else {
      iVar6 = param_3 - 1;
    }
    for (; iVar6 != -1; iVar6 = iVar6 + -1) {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)puVar7 = uVar1;
      puVar7 = (undefined8 *)((int)puVar7 + 1);
    }
  }
  return param_1;
}


// ==== FUN_0035c6ec @ 0035c6ec ====

undefined8 * FUN_0035c6ec(undefined8 *param_1,undefined1 param_2,uint param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 in_t0_udw;
  undefined1 auVar4 [16];
  
  puVar3 = param_1;
  if ((7 < param_3) && (((uint)param_1 & 0xf) == 0)) {
    auVar2[1] = param_2;
    auVar2[0] = param_2;
    auVar2._2_6_ = 0;
    auVar2._8_8_ = in_t0_udw;
    auVar2 = _pcpyh(auVar2);
    bVar1 = param_3 < 8;
    if (0x1f < param_3) {
      auVar4 = _pcpyld(auVar2,auVar2);
      do {
        *(int *)puVar3 = auVar4._0_4_;
        *(int *)((int)puVar3 + 4) = auVar4._4_4_;
        *(int *)(puVar3 + 1) = auVar4._8_4_;
        *(int *)((int)puVar3 + 0xc) = auVar4._12_4_;
        param_3 = param_3 - 0x20;
        *(int *)(puVar3 + 2) = auVar4._0_4_;
        *(int *)((int)puVar3 + 0x14) = auVar4._4_4_;
        *(int *)(puVar3 + 3) = auVar4._8_4_;
        *(int *)((int)puVar3 + 0x1c) = auVar4._12_4_;
        puVar3 = puVar3 + 4;
      } while (0x1f < param_3);
      bVar1 = param_3 < 8;
    }
    while (!bVar1) {
      *puVar3 = auVar2._0_8_;
      param_3 = param_3 - 8;
      puVar3 = puVar3 + 1;
      bVar1 = param_3 < 8;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    *(undefined1 *)puVar3 = param_2;
    puVar3 = (undefined8 *)((int)puVar3 + 1);
  }
  return param_1;
}


// ==== FUN_0035c7a4 @ 0035c7a4 ====

ulong FUN_0035c7a4(ulong param_1)

{
  ulong uVar1;
  undefined8 in_v1_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  undefined8 in_a0_udw;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pauVar4 = (undefined1 (*) [16])param_1;
  if ((param_1 & 7) == 0) {
    auVar2._8_8_ = in_v1_udw;
    auVar2._0_8_ = 0x101010101010101;
    if ((param_1 & 0xf) == 0) {
      auVar5 = _pcpyld(auVar2,auVar2);
      auVar3._8_8_ = in_a0_udw;
      auVar3._0_8_ = 0x8080808080808080;
      auVar6._8_8_ = in_a0_udw;
      auVar6._0_8_ = 0x8080808080808080;
      auVar6 = _pcpyld(auVar3,auVar6);
      auVar2 = _psubb(*pauVar4,auVar5);
      auVar2 = _pand(auVar2,~*pauVar4);
      auVar3 = _pand(auVar2,auVar6);
      auVar2 = _pcpyud(auVar3,auVar3);
      if (auVar2._0_8_ == 0 && auVar3._0_8_ == 0) {
        do {
          pauVar4 = pauVar4 + 1;
          auVar2 = _psubb(*pauVar4,auVar5);
          auVar2 = _pand(auVar2,~*pauVar4);
          auVar2 = _pand(auVar2,auVar6);
          auVar3 = _pcpyud(auVar2,auVar2);
        } while (auVar2._0_8_ == 0 && auVar3._0_8_ == 0);
      }
    }
    else {
      uVar1 = *(ulong *)*pauVar4 + 0xfefefefefefefeff & ~*(ulong *)*pauVar4;
      while ((uVar1 & 0x8080808080808080) == 0) {
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + 8);
        uVar1 = *(ulong *)*pauVar4 + 0xfefefefefefefeff & ~*(ulong *)*pauVar4;
      }
    }
  }
  for (; (*pauVar4)[0] != '\0'; pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1)) {
  }
  FUN_0035cbc0();
  return param_1;
}


// ==== FUN_0035c8d4 @ 0035c8d4 ====

undefined1 (*) [16] FUN_0035c8d4(undefined1 (*param_1) [16],ulong param_2)

{
  byte bVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_a1_udw;
  ulong uVar6;
  undefined8 in_a2_udw;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 in_a3_udw;
  undefined8 in_t0_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  param_2 = param_2 & 0xff;
  if (((uint)param_1 & 7) != 0) goto LAB_0035ca54;
  uVar8 = param_2 * 0x1010101 + (param_2 * 0x1010101 << 0x20);
  if (((uint)param_1 & 0xf) == 0) {
    while( true ) {
      auVar7._8_8_ = in_a2_udw;
      auVar7._0_8_ = 0x101010101010101;
      auVar9._8_8_ = in_t0_udw;
      auVar9._0_8_ = 0x8080808080808080;
      auVar10 = _pcpyld(auVar7,auVar7);
      auVar3 = _psubb(*param_1,auVar10);
      auVar7 = _pcpyld(auVar9,auVar9);
      auVar4 = _pand(auVar3,~*param_1);
      auVar3._8_8_ = in_a3_udw;
      auVar3._0_8_ = uVar8;
      auVar5._8_8_ = in_a3_udw;
      auVar5._0_8_ = uVar8;
      auVar9 = _pcpyld(auVar3,auVar5);
      auVar3 = _pand(auVar4,auVar7);
      auVar4._8_8_ = in_a3_udw;
      auVar4._0_8_ = uVar8;
      auVar5 = _pcpyud(auVar3,auVar4);
      if (auVar3._0_8_ != 0 || auVar5._0_8_ != 0) break;
      auVar3 = _pxor(*param_1,auVar9);
      auVar5 = _psubb(auVar3,auVar10);
      in_t0_udw = auVar9._8_8_;
      auVar3 = _pand(auVar5,~auVar3);
      auVar5 = _pand(auVar3,auVar7);
      in_a2_udw = auVar7._8_8_;
      auVar10._8_8_ = in_a1_udw;
      auVar10._0_8_ = param_2;
      auVar3 = _pcpyud(auVar5,auVar10);
      if (auVar3._0_8_ != 0 || auVar5._0_8_ != 0) {
        uVar8 = (ulong)(byte)(*param_1)[0];
        goto LAB_0035ca58;
      }
      param_1 = param_1 + 1;
    }
    uVar8 = (ulong)(byte)(*param_1)[0];
  }
  else {
    uVar6 = *(ulong *)*param_1;
    if ((uVar6 + 0xfefefefefefefeff & ~uVar6 & 0x8080808080808080) == 0) {
      if (((uVar6 ^ uVar8) + 0xfefefefefefefeff & ~(uVar6 ^ uVar8) & 0x8080808080808080) == 0) {
        do {
          param_1 = (undefined1 (*) [16])(*param_1 + 8);
          uVar6 = *(ulong *)*param_1;
          if ((uVar6 + 0xfefefefefefefeff & ~uVar6 & 0x8080808080808080) != 0) goto LAB_0035ca54;
        } while (((uVar6 ^ uVar8) + 0xfefefefefefefeff & ~(uVar6 ^ uVar8) & 0x8080808080808080) == 0
                );
        uVar8 = (ulong)(byte)(*param_1)[0];
      }
      else {
        uVar8 = (ulong)(byte)(*param_1)[0];
      }
    }
    else {
      uVar8 = (ulong)(byte)(*param_1)[0];
    }
  }
LAB_0035ca58:
  do {
    if (uVar8 == 0) {
      bVar1 = (*param_1)[0];
LAB_0035ca64:
      pauVar2 = (undefined1 (*) [16])0x0;
      if (bVar1 == param_2) {
        pauVar2 = param_1;
      }
      return pauVar2;
    }
    if (uVar8 == param_2) {
      bVar1 = (*param_1)[0];
      goto LAB_0035ca64;
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
LAB_0035ca54:
    uVar8 = (ulong)(byte)(*param_1)[0];
  } while( true );
}


// ==== FUN_0035ca74 @ 0035ca74 ====

int FUN_0035ca74(undefined8 param_1,undefined1 (*param_2) [16])

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  undefined8 in_a0_udw;
  undefined8 in_a2_udw;
  undefined1 auVar8 [16];
  undefined8 in_a3_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar7 = (int)((ulong)param_1 >> 0x20);
  pauVar6 = (undefined1 (*) [16])param_1;
  if ((((uint)pauVar6 | (uint)param_2) & 7) == 0) {
    auVar9._8_8_ = in_a3_udw;
    auVar9._0_8_ = 0x101010101010101;
    auVar8._8_8_ = in_a2_udw;
    auVar8._0_8_ = 0x8080808080808080;
    if ((((uint)pauVar6 | (uint)param_2) & 0xf) == 0) {
      auVar11 = _pcpyld(auVar9,auVar9);
      auVar12 = _pcpyld(auVar8,auVar8);
      auVar9 = _psubw(*param_2,*pauVar6);
      auVar10._8_8_ = in_a0_udw;
      auVar10._0_8_ = param_1;
      auVar8 = _pcpyud(auVar9,auVar10);
      if (auVar8._0_8_ == 0 && auVar9._0_8_ == 0) {
        auVar8 = *pauVar6;
        do {
          auVar9 = _psubb(auVar8,auVar11);
          auVar8 = _pand(auVar9,~auVar8);
          auVar8 = _pand(auVar8,auVar12);
          auVar2._4_4_ = iVar7;
          auVar2._0_4_ = pauVar6;
          auVar2._8_8_ = in_a0_udw;
          auVar9 = _pcpyud(auVar8,auVar2);
          pauVar6 = pauVar6 + 1;
          iVar7 = (int)pauVar6 >> 0x1f;
          if (auVar9._0_8_ != 0 || auVar8._0_8_ != 0) {
            return 0;
          }
          param_2 = param_2 + 1;
          auVar8 = *pauVar6;
          auVar10 = _psubw(auVar8,*param_2);
          auVar3._8_8_ = in_a0_udw;
          auVar3._0_8_ = (long)(int)pauVar6;
          auVar9 = _pcpyud(auVar10,auVar3);
        } while (auVar9._0_8_ == 0 && auVar10._0_8_ == 0);
        cVar4 = (*pauVar6)[0];
      }
      else {
        cVar4 = (*pauVar6)[0];
      }
    }
    else if (*(long *)*pauVar6 == *(long *)*param_2) {
      uVar5 = *(ulong *)*pauVar6;
      do {
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8);
        if ((uVar5 + 0xfefefefefefefeff & ~uVar5 & 0x8080808080808080) != 0) {
          return 0;
        }
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
        uVar5 = *(ulong *)*pauVar6;
      } while (*(ulong *)*param_2 == uVar5);
      cVar4 = (*pauVar6)[0];
    }
    else {
      cVar4 = (*pauVar6)[0];
    }
  }
  else {
    cVar4 = (*pauVar6)[0];
  }
  do {
    bVar1 = (*pauVar6)[0];
    if (cVar4 == '\0') {
LAB_0035cbb4:
      return (uint)bVar1 - (uint)(byte)(*param_2)[0];
    }
    if ((long)(int)(char)bVar1 != (long)(char)(*param_2)[0]) {
      bVar1 = (*pauVar6)[0];
      goto LAB_0035cbb4;
    }
    pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1);
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    cVar4 = (*pauVar6)[0];
  } while( true );
}


// ==== FUN_0035cbc0 @ 0035cbc0 ====

void FUN_0035cbc0(ulong *param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 in_a0_udw;
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_t1_udw;
  undefined4 uVar9;
  undefined4 in_register_0000009c;
  undefined4 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if ((((uint)param_2 | (uint)param_1) & 7) == 0) {
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x8080808080808080;
    if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
      auVar4._8_4_ = in_t1_udw;
      auVar4._0_8_ = 0x101010101010101;
      auVar4._12_4_ = in_register_0000009c;
      auVar6._8_4_ = in_t1_udw;
      auVar6._0_8_ = 0x101010101010101;
      auVar6._12_4_ = in_register_0000009c;
      auVar12 = _pcpyld(auVar4,auVar6);
      uVar7 = *(undefined4 *)*param_2;
      uVar8 = *(undefined4 *)(*param_2 + 4);
      uVar9 = *(undefined4 *)(*param_2 + 8);
      uVar10 = *(undefined4 *)(*param_2 + 0xc);
      auVar6 = _pcpyld(auVar3,auVar3);
      auVar3 = _psubb(*param_2,auVar12);
      auVar3 = _pand(auVar3,~*param_2);
      auVar3 = _pand(auVar3,auVar6);
      auVar4 = _pcpyud(auVar3,*param_2);
      pauVar5 = param_2;
      if (auVar3._0_8_ == 0 && auVar4._0_8_ == 0) {
        do {
          *(undefined4 *)param_1 = uVar7;
          *(undefined4 *)((int)param_1 + 4) = uVar8;
          *(undefined4 *)(param_1 + 1) = uVar9;
          *(undefined4 *)((int)param_1 + 0xc) = uVar10;
          param_2 = pauVar5 + 1;
          uVar7 = *(undefined4 *)*param_2;
          uVar8 = *(undefined4 *)(pauVar5[1] + 4);
          uVar9 = *(undefined4 *)(pauVar5[1] + 8);
          uVar10 = *(undefined4 *)(pauVar5[1] + 0xc);
          auVar3 = _psubb(*param_2,auVar12);
          auVar3 = _pand(auVar3,~*param_2);
          auVar3 = _pand(auVar3,auVar6);
          auVar4 = _pcpyud(auVar3,*param_2);
          param_1 = param_1 + 2;
          pauVar5 = param_2;
        } while (auVar3._0_8_ == 0 && auVar4._0_8_ == 0);
      }
    }
    else {
      uVar11 = *(ulong *)*param_2;
      uVar2 = uVar11 + 0xfefefefefefefeff & ~uVar11;
      while ((uVar2 & 0x8080808080808080) == 0) {
        *param_1 = uVar11;
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
        uVar11 = *(ulong *)*param_2;
        param_1 = param_1 + 1;
        uVar2 = uVar11 + 0xfefefefefefefeff & ~uVar11;
      }
    }
  }
  do {
    cVar1 = (*param_2)[0];
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    *(char *)param_1 = cVar1;
    param_1 = (ulong *)((int)param_1 + 1);
  } while (cVar1 != '\0');
  return;
}


// ==== FUN_0035ccd8 @ 0035ccd8 ====

int FUN_0035ccd8(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined8 in_a0_udw;
  ulong in_a2_udw;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pauVar5 = param_1;
  if (((uint)param_1 & 7) == 0) {
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = 0x101010101010101;
    if (((uint)param_1 & 0xf) == 0) {
      auVar6 = _pcpyld(auVar3,auVar3);
      auVar4._8_8_ = in_a0_udw;
      auVar4._0_8_ = 0x8080808080808080;
      auVar3 = _psubb(*param_1,auVar6);
      auVar7 = _pcpyld(auVar4,auVar4);
      auVar3 = _pand(auVar3,~*param_1);
      auVar3 = _pand(auVar3,auVar7);
      auVar4 = _pcpyud(auVar3,auVar6);
      if (auVar4._0_8_ == 0 && auVar3._0_8_ == 0) {
        do {
          pauVar5 = pauVar5 + 1;
          auVar3 = _psubb(*pauVar5,auVar6);
          auVar3 = _pand(auVar3,~*pauVar5);
          auVar4 = _pand(auVar3,auVar7);
          auVar1._8_8_ = 0;
          auVar1._0_8_ = in_a2_udw;
          auVar3 = _pcpyud(auVar4,auVar1 << 0x40);
        } while (auVar3._0_8_ == 0 && auVar4._0_8_ == 0);
      }
    }
    else {
      uVar2 = *(ulong *)*param_1 + 0xfefefefefefefeff & ~*(ulong *)*param_1;
      while ((uVar2 & 0x8080808080808080) == 0) {
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + 8);
        uVar2 = *(ulong *)*pauVar5 + 0xfefefefefefefeff & ~*(ulong *)*pauVar5;
      }
    }
  }
  for (; (*pauVar5)[0] != '\0'; pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1)) {
  }
  return (int)pauVar5 - (int)param_1;
}


// ==== FUN_0035cfd8 @ 0035cfd8 ====

int FUN_0035cfd8(undefined8 param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  undefined8 in_a0_udw;
  undefined8 in_t0_udw;
  undefined8 in_t1_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pauVar8 = (undefined1 (*) [16])param_1;
  if (param_3 == 0) {
    return 0;
  }
  if ((((uint)pauVar8 | (uint)param_2) & 7) == 0) {
    auVar4._8_8_ = in_t1_udw;
    auVar4._0_8_ = 0x101010101010101;
    if ((((uint)pauVar8 | (uint)param_2) & 0xf) == 0 && 0xf < param_3) {
      auVar10 = _pcpyld(auVar4,auVar4);
      auVar6 = _psubw(*pauVar8,*param_2);
      auVar9._8_8_ = in_t0_udw;
      auVar9._0_8_ = 0x8080808080808080;
      auVar2._8_8_ = in_t0_udw;
      auVar2._0_8_ = 0x8080808080808080;
      auVar9 = _pcpyld(auVar9,auVar2);
      auVar7._8_8_ = in_a0_udw;
      auVar7._0_8_ = param_1;
      auVar4 = _pcpyud(auVar6,auVar7);
      if (auVar4._0_8_ == 0 && auVar6._0_8_ == 0) {
        do {
          param_3 = param_3 - 0x10;
          if (param_3 == 0) {
            return 0;
          }
          auVar4 = _psubb(*pauVar8,auVar10);
          auVar4 = _pand(auVar4,~*pauVar8);
          auVar7 = _pand(auVar4,auVar9);
          auVar6._8_8_ = in_a0_udw;
          auVar6._0_8_ = param_1;
          auVar4 = _pcpyud(auVar7,auVar6);
          pauVar8 = pauVar8 + 1;
          if (auVar4._0_8_ != 0 || auVar7._0_8_ != 0) {
            return 0;
          }
          param_2 = param_2 + 1;
          if (param_3 < 0x10) break;
          auVar7 = _psubw(*pauVar8,*param_2);
          auVar1._8_8_ = in_a0_udw;
          auVar1._0_8_ = param_1;
          auVar4 = _pcpyud(auVar7,auVar1);
        } while (auVar4._0_8_ == 0 && auVar7._0_8_ == 0);
      }
    }
    else if ((7 < param_3) && (*(long *)*pauVar8 == *(long *)*param_2)) {
      do {
        param_3 = param_3 - 8;
        if (param_3 == 0) {
          return 0;
        }
        puVar3 = *pauVar8;
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 8);
        if ((*(ulong *)puVar3 + 0xfefefefefefefeff & ~*(ulong *)puVar3 & 0x8080808080808080) != 0) {
          return 0;
        }
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
      } while ((7 < param_3) && (*(long *)*pauVar8 == *(long *)*param_2));
    }
  }
  if (param_3 != 0) {
    cVar5 = (*pauVar8)[0];
    while( true ) {
      param_3 = param_3 - 1;
      puVar3 = *pauVar8;
      if (cVar5 != (*param_2)[0]) break;
      if (param_3 == 0) {
        return 0;
      }
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
      if (*puVar3 == '\0') {
        return 0;
      }
      param_2 = (undefined1 (*) [16])(*param_2 + 1);
      cVar5 = (*pauVar8)[0];
    }
  }
  return (uint)(byte)(*pauVar8)[0] - (uint)(byte)(*param_2)[0];
}


// ==== FUN_0035d1a0 @ 0035d1a0 ====

undefined8 FUN_0035d1a0(undefined8 param_1,undefined1 (*param_2) [16],uint param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 in_a0_udw;
  uint uVar14;
  char *pcVar15;
  undefined8 in_a3_udw;
  uint uVar16;
  undefined8 in_t1_udw;
  undefined1 auVar17 [16];
  undefined8 in_t2_udw;
  undefined1 auVar18 [16];
  
  pcVar15 = (char *)param_1;
  uVar14 = (uint)param_2 | (uint)pcVar15;
  if ((uVar14 & 7) != 0) goto LAB_0035d318;
  uVar16 = 8;
  if ((uVar14 & 0xf) == 0) {
    uVar16 = 0x10;
  }
  if ((uVar14 & 0xf) == 0) {
    if (param_3 < uVar16) goto LAB_0035d318;
    auVar12._8_8_ = in_a3_udw;
    auVar12._0_8_ = 0x101010101010101;
    auVar3._8_8_ = in_a3_udw;
    auVar3._0_8_ = 0x101010101010101;
    auVar17 = _pcpyld(auVar12,auVar3);
    auVar11 = _psubb(~*param_2,auVar17);
    auVar4._8_8_ = in_a3_udw;
    auVar4._0_8_ = 0x8080808080808080;
    auVar5._8_8_ = in_a3_udw;
    auVar5._0_8_ = 0x8080808080808080;
    auVar18 = _pcpyld(auVar4,auVar5);
    auVar11 = _pand(auVar11,~*param_2);
    auVar12 = _pand(auVar11,auVar18);
    auVar11._8_8_ = in_a0_udw;
    auVar11._0_8_ = param_1;
    auVar11 = _pcpyud(auVar12,auVar11);
    if (auVar12._0_8_ != 0 || auVar11._0_8_ != 0) goto LAB_0035d318;
    puVar10 = *param_2;
    uVar6 = *(undefined4 *)(*param_2 + 4);
    uVar7 = *(undefined4 *)(*param_2 + 8);
    uVar8 = *(undefined4 *)(*param_2 + 0xc);
    param_3 = param_3 - 0x10;
    param_2 = param_2 + 1;
    *(undefined4 *)pcVar15 = *(undefined4 *)puVar10;
    *(undefined4 *)(pcVar15 + 4) = uVar6;
    *(undefined4 *)(pcVar15 + 8) = uVar7;
    *(undefined4 *)(pcVar15 + 0xc) = uVar8;
    pcVar15 = pcVar15 + 0x10;
    if (param_3 < 0x10) goto LAB_0035d318;
    auVar11 = _psubb(*param_2,auVar17);
    auVar11 = _pand(auVar11,~*param_2);
    auVar11 = _pand(auVar11,auVar18);
    auVar2._8_8_ = in_a0_udw;
    auVar2._0_8_ = param_1;
    auVar12 = _pcpyud(auVar11,auVar2);
    if (auVar11._0_8_ != 0 || auVar12._0_8_ != 0) goto LAB_0035d318;
    uVar13 = *(undefined8 *)*param_2;
  }
  else {
    if (param_3 < uVar16) goto LAB_0035d318;
    auVar17._8_8_ = in_t1_udw;
    auVar17._0_8_ = 0x101010101010101;
    auVar18._8_8_ = in_t2_udw;
    auVar18._0_8_ = 0x8080808080808080;
    if ((*(ulong *)*param_2 + 0xfefefefefefefeff & ~*(ulong *)*param_2 & 0x8080808080808080) != 0)
    goto LAB_0035d318;
    uVar13 = *(undefined8 *)*param_2;
  }
  while( true ) {
    param_3 = param_3 - 8;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
    *(undefined8 *)pcVar15 = uVar13;
    pcVar15 = pcVar15 + 8;
    if ((param_3 < 8) ||
       ((*(ulong *)*param_2 - auVar17._0_8_ & ~*(ulong *)*param_2 & auVar18._0_8_) != 0)) break;
    uVar13 = *(undefined8 *)*param_2;
  }
LAB_0035d318:
  do {
    uVar14 = param_3;
    if (uVar14 == 0) {
      return param_1;
    }
    cVar1 = (*param_2)[0];
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    *pcVar15 = cVar1;
    pcVar15 = pcVar15 + 1;
    param_3 = uVar14 - 1;
  } while (cVar1 != '\0');
  uVar16 = uVar14 - 2;
  uVar14 = uVar14 - 1;
  while (uVar9 = uVar16, uVar14 != 0) {
    *pcVar15 = '\0';
    pcVar15 = pcVar15 + 1;
    uVar16 = uVar9 - 1;
    uVar14 = uVar9;
  }
  return param_1;
}


// ==== FUN_0035d378 @ 0035d378 ====

void FUN_0035d378(undefined8 param_1)

{
  FUN_0035d3c8(param_1,0x365f80);
  return;
}


// ==== FUN_0035d398 @ 0035d398 ====

void FUN_0035d398(void)

{
  FUN_0035d378(PTR_DAT_003d6944);
  return;
}


// ==== FUN_0035d3c8 @ 0035d3c8 ====

ulong FUN_0035d3c8(int param_1,code *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  
  piVar4 = (int *)(param_1 + 0x1d8);
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x1dc);
    while( true ) {
      iVar3 = piVar4[2];
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        if (*(short *)(iVar3 + 0xc) != 0) {
          uVar1 = (*param_2)(iVar3);
          uVar5 = uVar5 | uVar1;
        }
        iVar3 = iVar3 + 0x58;
      }
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) break;
      iVar2 = piVar4[1];
    }
  }
  return uVar5;
}


// ==== FUN_0035d460 @ 0035d460 ====

void FUN_0035d460(int *param_1)

{
  ushort uVar1;
  long lVar2;
  undefined1 auStack_90 [4];
  uint uStack_8c;
  
  if ((*(ushort *)(param_1 + 3) & 2) != 0) {
    param_1[5] = 1;
    param_1[4] = (int)param_1 + 0x43;
    *param_1 = (int)param_1 + 0x43;
    return;
  }
  if (*(short *)((int)param_1 + 0xe) < 0) {
    uVar1 = *(ushort *)(param_1 + 3);
  }
  else {
    lVar2 = FUN_00365da0(param_1[0x15],*(short *)((int)param_1 + 0xe),auStack_90);
    if (lVar2 < 0) {
      uVar1 = *(ushort *)(param_1 + 3);
    }
    else if ((uStack_8c & 0xf000) == 0x8000) {
      uVar1 = *(ushort *)(param_1 + 3);
      if ((code *)param_1[10] == FUN_0035d930) {
        param_1[0x13] = 0x400;
        uVar1 = uVar1 | 0x400;
        goto LAB_0035d4f0;
      }
    }
    else {
      uVar1 = *(ushort *)(param_1 + 3);
    }
  }
  uVar1 = uVar1 | 0x800;
LAB_0035d4f0:
  *(ushort *)(param_1 + 3) = uVar1;
  param_1[4] = (int)param_1 + 0x43;
  param_1[5] = 1;
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 2;
  *param_1 = (int)param_1 + 0x43;
  return;
}


// ==== FUN_0035d530 @ 0035d530 ====

void FUN_0035d530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  *(undefined **)(*(int *)(PTR_DAT_003d6944 + 8) + 0x54) = PTR_DAT_003d6944;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_00361460(*(undefined4 *)(PTR_DAT_003d6944 + 8),param_1,&uStack_38);
  return;
}


// ==== FUN_0035d598 @ 0035d598 ====

void FUN_0035d598(void)

{
  FUN_00365f80();
  return;
}


// ==== FUN_0035d5b8 @ 0035d5b8 ====

undefined4 FUN_0035d5b8(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  if (puVar4[0x15] == 0) {
    puVar4[0x15] = PTR_DAT_003d6944;
    iVar2 = puVar4[0x15];
  }
  else {
    iVar2 = puVar4[0x15];
  }
  if (*(int *)(iVar2 + 0x38) == 0) {
    FUN_003660f8();
    uVar1 = *(ushort *)(puVar4 + 3);
  }
  else {
    uVar1 = *(ushort *)(puVar4 + 3);
  }
  puVar4[1] = 0;
  if ((uVar1 & 0x20) != 0) {
    return 0xffffffff;
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 0x10) == 0) {
      return 0xffffffff;
    }
    if ((uVar1 & 8) == 0) {
      uVar1 = *(ushort *)(puVar4 + 3);
    }
    else {
      lVar3 = FUN_00365f80(param_1);
      if (lVar3 != 0) {
        return 0xffffffff;
      }
      puVar4[2] = 0;
      puVar4[6] = 0;
      *(ushort *)(puVar4 + 3) = *(ushort *)(puVar4 + 3) & 0xfff7;
      uVar1 = *(ushort *)(puVar4 + 3);
    }
    *(ushort *)(puVar4 + 3) = uVar1 | 4;
  }
  else {
    if (puVar4[0xc] == 0) {
      iVar2 = puVar4[4];
      goto LAB_0035d690;
    }
    puVar4[1] = puVar4[0xf];
    if (puVar4[0xf] != 0) {
      *puVar4 = puVar4[0xe];
      return 0;
    }
  }
  iVar2 = puVar4[4];
LAB_0035d690:
  if (iVar2 == 0) {
    FUN_0035d460(param_1);
    uVar1 = *(ushort *)(puVar4 + 3);
  }
  else {
    uVar1 = *(ushort *)(puVar4 + 3);
  }
  if ((uVar1 & 3) != 0) {
    FUN_0035d3c8(puVar4[0x15],0x35d598);
  }
  *puVar4 = puVar4[4];
  lVar3 = (*(code *)puVar4[8])(puVar4[7],puVar4[4],puVar4[5]);
  puVar4[1] = (int)lVar3;
  uVar1 = *(ushort *)(puVar4 + 3) & 0xdfff;
  *(ushort *)(puVar4 + 3) = uVar1;
  if (lVar3 < 1) {
    if (lVar3 == 0) {
      uVar1 = uVar1 | 0x20;
    }
    else {
      uVar1 = uVar1 | 0x40;
      puVar4[1] = 0;
    }
    *(ushort *)(puVar4 + 3) = uVar1;
    return 0xffffffff;
  }
  return 0;
}


// ==== FUN_0035d728 @ 0035d728 ====

void FUN_0035d728(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *apuStack_e0 [2];
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined1 *puStack_d0;
  undefined4 uStack_cc;
  undefined *puStack_8c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_cc = 0x7fffffff;
  uStack_d8 = 0x7fffffff;
  uStack_d4 = 0x208;
  puStack_8c = PTR_DAT_003d6944;
  apuStack_e0[0] = param_1;
  puStack_d0 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_00361460(apuStack_e0,param_2,&uStack_30);
  *apuStack_e0[0] = 0;
  return;
}


// ==== FUN_0035d7b0 @ 0035d7b0 ====

void FUN_0035d7b0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *puStack_d0;
  undefined4 uStack_c0;
  undefined4 uStack_ac;
  undefined *puStack_9c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_e4 = 4;
  uStack_f0 = param_1;
  uStack_e0 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  uStack_ec = FUN_0035ccd8();
  puStack_9c = PTR_DAT_003d6944;
  puStack_d0 = &LAB_0035d7a8;
  uStack_c0 = 0;
  uStack_ac = 0;
  uStack_dc = uStack_ec;
  FUN_0035d9b8(&uStack_f0,param_2,&uStack_30);
  return;
}


// ==== FUN_0035d848 @ 0035d848 ====

int FUN_0035d848(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00365e60(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                       param_3);
  if (iVar1 < 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  }
  return iVar1;
}


// ==== FUN_0035d8b0 @ 0035d8b0 ====

undefined4 FUN_0035d8b0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0xc) & 0x100) != 0) {
    FUN_00365e00(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),0,2);
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xefff;
  uVar1 = FUN_00365f20(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                       param_3);
  return uVar1;
}


// ==== FUN_0035d930 @ 0035d930 ====

long FUN_0035d930(int param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = FUN_00365e00(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                       param_3);
  if (lVar2 == -1) {
    uVar1 = *(ushort *)(param_1 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_1 + 0x50) = (int)lVar2;
    uVar1 = *(ushort *)(param_1 + 0xc) | 0x1000;
  }
  *(ushort *)(param_1 + 0xc) = uVar1;
  return lVar2;
}


// ==== FUN_0035d998 @ 0035d998 ====

void FUN_0035d998(int param_1)

{
  FUN_00365d48(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe));
  return;
}


// ==== FUN_0035d9b8 @ 0035d9b8 ====

int FUN_0035d9b8(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  byte *pbVar16;
  char cVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  char *pcVar21;
  char *pcVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  undefined4 uVar29;
  char acStack_320 [256];
  char cStack_220;
  char acStack_21f [351];
  int iStack_c0;
  undefined4 uStack_bc;
  byte *pbStack_b8;
  int iStack_b4;
  code *pcStack_b0;
  int *piStack_ac;
  undefined4 *puStack_a8;
  
  piStack_ac = &iStack_c0;
  puStack_a8 = &uStack_bc;
  lVar27 = 0;
  lVar28 = 0;
  uStack_bc = 0;
  pcStack_b0 = (code *)0x0;
  iStack_b4 = 0;
  pbStack_b8 = param_2;
switchD_0035ddb8_default:
  while( true ) {
    iVar13 = FUN_0035e870(PTR_DAT_003d6944,piStack_ac,pbStack_b8,DAT_003d7140,puStack_a8);
    pbStack_b8 = pbStack_b8 + iVar13;
    if (iStack_c0 == 0) {
      return iStack_b4;
    }
    piVar23 = (int *)param_1;
    if ((iVar13 != 1) || ((*(byte *)((int)&PTR_DAT_0040a991 + iStack_c0) & 8) == 0)) break;
    iVar13 = piVar23[1];
    while( true ) {
      if (iVar13 < 1) {
        lVar14 = FUN_0035d5b8(param_1);
        if (lVar14 != 0) {
          return iStack_b4;
        }
        pbVar19 = (byte *)*piVar23;
      }
      else {
        pbVar19 = (byte *)*piVar23;
      }
      if ((*(byte *)((int)&PTR_DAT_0040a991 + (uint)*pbVar19) & 8) == 0) break;
      *piVar23 = (int)(pbVar19 + 1);
      lVar27 = (long)((int)lVar27 + 1);
      piVar23[1] = piVar23[1] + -1;
      iVar13 = piVar23[1];
    }
  }
  if (iStack_c0 != 0x25) {
LAB_0035db24:
    iVar18 = 0;
    pbVar19 = pbStack_b8 + -iVar13;
    if (0 < iVar13) {
      do {
        if (piVar23[1] < 1) {
          lVar14 = FUN_0035d5b8(param_1);
          if (lVar14 != 0) goto LAB_0035e488;
          pbVar16 = (byte *)*piVar23;
        }
        else {
          pbVar16 = (byte *)*piVar23;
        }
        if ((ulong)*pbVar16 != (long)(char)*pbVar19) {
          return iStack_b4;
        }
        iVar18 = iVar18 + 1;
        *piVar23 = (int)(pbVar16 + 1);
        lVar27 = (long)((int)lVar27 + 1);
        piVar23[1] = piVar23[1] + -1;
        pbVar19 = pbVar19 + 1;
      } while (iVar18 < iVar13);
    }
    goto switchD_0035ddb8_default;
  }
  uVar25 = 0;
  uVar24 = 0;
  bVar5 = false;
  bVar11 = false;
  bVar7 = false;
  bVar3 = false;
  bVar12 = false;
  bVar4 = false;
LAB_0035daec:
  bVar1 = *pbStack_b8;
  pbStack_b8 = pbStack_b8 + 1;
  if (bVar1 < 0x79) {
    switch(bVar1) {
    case 0:
      return -1;
    default:
      goto switchD_0035db18_caseD_1;
    case 0x25:
      goto LAB_0035db24;
    case 0x2a:
      bVar4 = true;
      goto LAB_0035daec;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      uVar25 = (uVar25 * 10 + (int)(char)bVar1) - 0x30;
      goto LAB_0035daec;
    case 0x44:
      uVar24 = 1;
    case 100:
      pcStack_b0 = FUN_00364da8;
      break;
    case 0x45:
    case 0x47:
    case 0x65:
    case 0x66:
    case 0x67:
      uVar29 = 4;
      goto LAB_0035dcfc;
    case 0x4c:
      bVar5 = true;
      goto LAB_0035daec;
    case 0x4f:
      uVar24 = 1;
    case 0x6f:
      uVar29 = 3;
      lVar28 = 8;
      pcStack_b0 = FUN_00360800;
      goto LAB_0035dcfc;
    case 0x58:
    case 0x78:
      goto LAB_0035dc6c;
    case 0x5b:
      bVar3 = true;
      uVar29 = 1;
      pbStack_b8 = (byte *)FUN_0035e4c8(acStack_320,pbStack_b8);
      goto LAB_0035dcfc;
    case 99:
      bVar3 = true;
      uVar29 = 0;
      goto LAB_0035dcfc;
    case 0x68:
      bVar12 = true;
      goto LAB_0035daec;
    case 0x69:
      uVar29 = 3;
      lVar28 = 0;
      pcStack_b0 = FUN_00364da8;
      goto LAB_0035dcfc;
    case 0x6c:
      goto switchD_0035db18_caseD_6c;
    case 0x6e:
      if (!bVar4) {
        if (bVar12) {
          *(short *)*param_3 = (short)lVar27;
          param_3 = param_3 + 2;
        }
        else if (uVar24 == 0) {
          *(int *)*param_3 = (int)lVar27;
          param_3 = param_3 + 2;
        }
        else {
          *(long *)*param_3 = lVar27;
          param_3 = param_3 + 2;
        }
      }
      goto switchD_0035ddb8_default;
    case 0x70:
      bVar11 = true;
LAB_0035dc6c:
      bVar7 = true;
      uVar29 = 3;
      pcStack_b0 = FUN_00360800;
      lVar28 = 0x10;
      goto LAB_0035dcfc;
    case 0x73:
      uVar29 = 2;
      goto LAB_0035dcfc;
    case 0x75:
      pcStack_b0 = FUN_00360800;
    }
    uVar29 = 3;
    lVar28 = 10;
    goto LAB_0035dcfc;
  }
switchD_0035db18_caseD_1:
  pcStack_b0 = FUN_00364da8;
  lVar28 = 10;
  uVar29 = 3;
  uVar24 = uVar24 | *(byte *)((int)&PTR_DAT_0040a991 + (int)(char)bVar1) & 1;
LAB_0035dcfc:
  if ((piVar23[1] < 1) && (lVar14 = FUN_0035d5b8(param_1), lVar14 != 0)) {
LAB_0035e488:
    if (iStack_b4 == 0) {
      return -1;
    }
    return iStack_b4;
  }
  if ((!bVar3) &&
     (pbVar19 = (byte *)*piVar23, (*(byte *)((int)&PTR_DAT_0040a991 + (uint)*pbVar19) & 8) != 0)) {
    iVar13 = piVar23[1];
    while( true ) {
      lVar27 = (long)((int)lVar27 + 1);
      piVar23[1] = iVar13 + -1;
      if (iVar13 + -1 < 1) {
        lVar14 = FUN_0035d5b8(param_1);
        if (lVar14 != 0) goto LAB_0035e488;
      }
      else {
        *piVar23 = (int)(pbVar19 + 1);
      }
      pbVar19 = (byte *)*piVar23;
      if ((*(byte *)((int)&PTR_DAT_0040a991 + (uint)*pbVar19) & 8) == 0) break;
      iVar13 = piVar23[1];
    }
  }
  iVar13 = (int)lVar27;
  switch(uVar29) {
  case 0:
    if (uVar25 == 0) {
      uVar25 = 1;
    }
    if (bVar4) {
      iVar18 = 0;
      uVar24 = piVar23[1];
      while (uVar24 < uVar25) {
        iVar18 = iVar18 + uVar24;
        uVar25 = uVar25 - uVar24;
        *piVar23 = *piVar23 + uVar24;
        lVar27 = FUN_0035d5b8(param_1);
        if (lVar27 != 0) {
          lVar27 = (long)(iVar13 + iVar18);
          if (iVar18 != 0) goto switchD_0035ddb8_default;
          goto LAB_0035e488;
        }
        uVar24 = piVar23[1];
      }
      piVar23[1] = uVar24 - uVar25;
      *piVar23 = *piVar23 + uVar25;
      lVar27 = (long)(int)(iVar13 + iVar18 + uVar25);
    }
    else {
      lVar27 = FUN_003661b8(*param_3,1,uVar25,param_1);
      if (lVar27 == 0) goto LAB_0035e488;
      lVar27 = (long)(iVar13 + (int)lVar27);
      iStack_b4 = iStack_b4 + 1;
      param_3 = param_3 + 2;
    }
    goto switchD_0035ddb8_default;
  case 1:
    if (uVar25 == 0) {
      uVar25 = 0xffffffff;
    }
    if (!bVar4) {
      puVar26 = param_3 + 2;
      pbVar19 = (byte *)*param_3;
      pbVar16 = (byte *)*piVar23;
      pbVar20 = pbVar19;
      while (acStack_320[*pbVar16] != '\0') {
        uVar25 = uVar25 - 1;
        piVar23[1] = piVar23[1] + -1;
        *pbVar20 = *pbVar16;
        *piVar23 = (int)(pbVar16 + 1);
        pbVar20 = pbVar20 + 1;
        if (uVar25 == 0) {
LAB_0035df50:
          iVar18 = (int)pbVar20 - (int)pbVar19;
          goto LAB_0035df54;
        }
        if (piVar23[1] < 1) {
          lVar27 = FUN_0035d5b8(param_1);
          if (lVar27 != 0) {
            if (pbVar20 != pbVar19) goto LAB_0035df50;
            goto LAB_0035e488;
          }
          pbVar16 = (byte *)*piVar23;
        }
        else {
          pbVar16 = (byte *)*piVar23;
        }
      }
      iVar18 = (int)pbVar20 - (int)pbVar19;
LAB_0035df54:
      if (iVar18 == 0) {
        return iStack_b4;
      }
      *pbVar20 = 0;
      iStack_b4 = iStack_b4 + 1;
      goto LAB_0035dfe4;
    }
    iVar18 = 0;
    pbVar19 = (byte *)*piVar23;
    while (acStack_320[*pbVar19] != '\0') {
      iVar2 = piVar23[1];
      *piVar23 = (int)(pbVar19 + 1);
      iVar18 = iVar18 + 1;
      uVar25 = uVar25 - 1;
      piVar23[1] = iVar2 + -1;
      if (uVar25 == 0) break;
      if (iVar2 + -1 < 1) {
        lVar27 = FUN_0035d5b8(param_1);
        if (lVar27 != 0) {
          if (iVar18 == 0) goto LAB_0035e488;
          break;
        }
        pbVar19 = (byte *)*piVar23;
      }
      else {
        pbVar19 = (byte *)*piVar23;
      }
    }
    lVar27 = (long)(iVar13 + iVar18);
    if (iVar18 == 0) {
      return iStack_b4;
    }
    goto switchD_0035ddb8_default;
  case 2:
    if (uVar25 == 0) {
      uVar25 = 0xffffffff;
    }
    if (bVar4) {
      iVar18 = 0;
      pbVar19 = (byte *)*piVar23;
      while (puVar26 = param_3, (*(byte *)((int)&PTR_DAT_0040a991 + (uint)*pbVar19) & 8) == 0) {
        iVar2 = piVar23[1];
        *piVar23 = (int)(pbVar19 + 1);
        iVar18 = iVar18 + 1;
        uVar25 = uVar25 - 1;
        piVar23[1] = iVar2 + -1;
        if (uVar25 == 0) break;
        if (iVar2 + -1 < 1) {
          lVar27 = FUN_0035d5b8(param_1);
          if (lVar27 != 0) break;
          pbVar19 = (byte *)*piVar23;
        }
        else {
          pbVar19 = (byte *)*piVar23;
        }
      }
LAB_0035dfe4:
      lVar27 = (long)(iVar13 + iVar18);
      param_3 = puVar26;
    }
    else {
      pbVar19 = (byte *)*param_3;
      iVar18 = iStack_b4 + 1;
      pbVar16 = (byte *)*piVar23;
      pbVar20 = pbVar19;
      while ((*(byte *)((int)&PTR_DAT_0040a991 + (uint)*pbVar16) & 8) == 0) {
        uVar25 = uVar25 - 1;
        piVar23[1] = piVar23[1] + -1;
        *pbVar20 = *pbVar16;
        *piVar23 = (int)(pbVar16 + 1);
        pbVar20 = pbVar20 + 1;
        if (uVar25 == 0) break;
        if (piVar23[1] < 1) {
          lVar27 = FUN_0035d5b8(param_1);
          if (lVar27 != 0) break;
          pbVar16 = (byte *)*piVar23;
        }
        else {
          pbVar16 = (byte *)*piVar23;
        }
      }
      lVar27 = (long)(int)(pbVar20 + (iVar13 - (int)pbVar19));
      *pbVar20 = 0;
      param_3 = param_3 + 2;
      iStack_b4 = iVar18;
    }
    goto switchD_0035ddb8_default;
  case 3:
    uVar25 = uVar25 - 1;
    if (0x15c < uVar25) {
      uVar25 = 0x15c;
    }
    bVar9 = true;
    bVar5 = true;
    bVar3 = true;
    iVar18 = uVar25 + 1;
    pcVar21 = &cStack_220;
    if (iVar18 != 0) {
      pcVar22 = (char *)*piVar23;
      do {
        switch(*pcVar22) {
        case '+':
        case '-':
          if (!bVar5) goto switchD_0035e0cc_caseD_2c;
          bVar5 = false;
          break;
        default:
          goto switchD_0035e0cc_caseD_2c;
        case '0':
          if (lVar28 == 0) {
            lVar28 = 8;
            bVar7 = true;
          }
          uVar25 = 0xfffffd3f;
          bVar10 = 0;
          bVar8 = 1;
          bVar6 = 0;
          bVar1 = 0;
          if (!bVar3) {
            uVar25 = 0xfffffe3f;
            bVar10 = 0;
            bVar8 = 0;
            bVar6 = 0;
            bVar1 = 1;
          }
          goto LAB_0035e180;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
          bVar9 = false;
          bVar7 = false;
          bVar5 = false;
          lVar28 = (long)*(short *)(&UNK_0040aaa0 + (int)lVar28 * 2);
          break;
        case '8':
        case '9':
          lVar28 = (long)*(short *)(&UNK_0040aaa0 + (int)lVar28 * 2);
          if (lVar28 < 9) goto switchD_0035e0cc_caseD_2c;
          bVar9 = false;
          bVar7 = false;
          bVar5 = false;
          break;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
          if (lVar28 < 0xb) goto switchD_0035e0cc_caseD_2c;
          bVar9 = false;
          bVar7 = false;
          bVar5 = false;
          break;
        case 'X':
        case 'x':
          if (!bVar7) goto switchD_0035e0cc_caseD_2c;
          bVar1 = 1;
          uVar25 = 0xfffffeff;
          bVar10 = 1;
          bVar8 = 0;
          bVar6 = 1;
          if (pcVar21 != acStack_21f) goto switchD_0035e0cc_caseD_2c;
          lVar28 = 0x10;
LAB_0035e180:
          uVar24 = uVar24 & uVar25;
          bVar9 = (bool)(bVar9 & bVar10);
          bVar7 = (bool)(bVar7 & bVar8);
          bVar5 = (bool)(bVar5 & bVar6);
          bVar3 = (bool)(bVar3 & bVar1);
        }
        *pcVar21 = *pcVar22;
        pcVar21 = pcVar21 + 1;
        iVar2 = piVar23[1];
        piVar23[1] = iVar2 + -1;
        if (iVar2 + -1 < 1) {
          lVar27 = FUN_0035d5b8(param_1);
          if (lVar27 != 0) goto LAB_0035e1cc;
        }
        else {
          *piVar23 = *piVar23 + 1;
        }
        iVar18 = iVar18 + -1;
        if (iVar18 == 0) break;
        pcVar22 = (char *)*piVar23;
      } while( true );
    }
switchD_0035e0cc_caseD_2c:
LAB_0035e1cc:
    if (bVar9) {
      if (pcVar21 <= &cStack_220) {
        return iStack_b4;
      }
      FUN_003662d0(pcVar21[-1],param_1);
      return iStack_b4;
    }
    cVar17 = pcVar21[-1];
    if ((cVar17 == 'x') || (cVar17 == 'X')) {
      pcVar21 = pcVar21 + -1;
      FUN_003662d0(cVar17,param_1);
    }
    iVar18 = (int)pcVar21 - (int)&cStack_220;
    if (!bVar4) {
      *pcVar21 = '\0';
      uVar15 = (*pcStack_b0)(&cStack_220,0,lVar28);
      if (bVar11) {
        *(int *)*param_3 = (int)uVar15;
      }
      else if (bVar12) {
        *(short *)*param_3 = (short)uVar15;
      }
      else if (uVar24 == 0) {
        *(int *)*param_3 = (int)uVar15;
      }
      else {
        *(undefined8 *)*param_3 = uVar15;
      }
LAB_0035e478:
      iStack_b4 = iStack_b4 + 1;
      param_3 = param_3 + 2;
      iVar18 = (int)pcVar21 - (int)&cStack_220;
    }
    break;
  case 4:
    uVar25 = uVar25 - 1;
    if (0x15c < uVar25) {
      uVar25 = 0x15c;
    }
    uVar24 = uVar24 | 0x3c0;
    bVar7 = true;
    bVar3 = true;
    iVar18 = uVar25 + 1;
    pcVar21 = &cStack_220;
    if (iVar18 != 0) {
      pcVar22 = (char *)*piVar23;
      do {
        switch(*pcVar22) {
        case '+':
        case '-':
          if (!bVar3) goto switchD_0035e304_caseD_2c;
          uVar24 = uVar24 & 0xffffffbf;
          bVar3 = false;
          break;
        default:
          goto switchD_0035e304_caseD_2c;
        case '.':
          if (!bVar7) goto switchD_0035e304_caseD_2c;
          uVar24 = uVar24 & 0xfffffebf;
          bVar7 = false;
          bVar3 = false;
          break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          uVar24 = uVar24 & 0xffffff3f;
          bVar3 = false;
          break;
        case 'E':
        case 'e':
          if ((uVar24 & 0x280) != 0x200) goto switchD_0035e304_caseD_2c;
          uVar24 = uVar24 & 0xfffffcff | 0xc0;
          bVar7 = false;
          bVar3 = true;
        }
        *pcVar21 = *pcVar22;
        pcVar21 = pcVar21 + 1;
        iVar2 = piVar23[1];
        piVar23[1] = iVar2 + -1;
        if (iVar2 + -1 < 1) {
          lVar27 = FUN_0035d5b8(param_1);
          if (lVar27 != 0) goto LAB_0035e3a0;
        }
        else {
          *piVar23 = *piVar23 + 1;
        }
        iVar18 = iVar18 + -1;
        if (iVar18 == 0) break;
        pcVar22 = (char *)*piVar23;
      } while( true );
    }
switchD_0035e304_caseD_2c:
LAB_0035e3a0:
    if ((uVar24 & 0x80) != 0) {
      if ((uVar24 & 0x200) != 0) {
        while (&cStack_220 < pcVar21) {
          pcVar21 = pcVar21 + -1;
          FUN_003662d0(*pcVar21,param_1);
        }
        return iStack_b4;
      }
      pcVar22 = pcVar21 + -1;
      cVar17 = *pcVar22;
      if ((cVar17 != 'e') && (cVar17 != 'E')) {
        FUN_003662d0(cVar17,param_1);
        cVar17 = pcVar21[-2];
        pcVar22 = pcVar21 + -2;
      }
      pcVar21 = pcVar22;
      FUN_003662d0(cVar17,param_1);
    }
    iVar18 = (int)pcVar21 - (int)&cStack_220;
    if (!bVar4) {
      *pcVar21 = '\0';
      uVar15 = FUN_0035e730(&cStack_220);
      if (((uVar24 & 1) != 0) || (bVar5)) {
        *(undefined8 *)*param_3 = uVar15;
      }
      else {
        uVar29 = FUN_00291c68();
        *(undefined4 *)*param_3 = uVar29;
      }
      goto LAB_0035e478;
    }
    break;
  default:
    goto switchD_0035ddb8_default;
  }
  lVar27 = (long)(iVar13 + iVar18);
  goto switchD_0035ddb8_default;
switchD_0035db18_caseD_6c:
  uVar24 = 1;
  goto LAB_0035daec;
}


// ==== FUN_0035e4c8 @ 0035e4c8 ====

char * FUN_0035e4c8(int param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  lVar6 = (long)*param_2;
  bVar1 = lVar6 == 0x5e;
  pcVar5 = param_2 + 1;
  if (bVar1) {
    lVar6 = (long)*pcVar5;
    pcVar5 = param_2 + 2;
  }
  iVar7 = 0xff;
  iVar3 = param_1 + 0xff;
  do {
    *(bool *)iVar3 = bVar1;
    iVar7 = iVar7 + -1;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar7);
  if (lVar6 != 0) {
LAB_0035e528:
    pcVar4 = (char *)(param_1 + (int)lVar6);
    while( true ) {
      while( true ) {
        *pcVar4 = '\x01' - bVar1;
        cVar2 = *pcVar5;
        pcVar4 = pcVar5;
        while( true ) {
          lVar8 = (long)cVar2;
          pcVar5 = pcVar4 + 1;
          if (lVar8 != 0x2d) break;
          lVar8 = (long)*pcVar5;
          if ((lVar8 == 0x5d) || (lVar8 < lVar6)) {
            lVar6 = 0x2d;
            goto LAB_0035e528;
          }
          pcVar4 = pcVar4 + 2;
          do {
            iVar3 = (int)lVar6 + 1;
            lVar6 = (long)iVar3;
            *(char *)(param_1 + iVar3) = '\x01' - bVar1;
          } while (lVar6 < lVar8);
          cVar2 = *pcVar4;
        }
        lVar6 = lVar8;
        if (lVar8 < 0x2e) break;
        if (lVar8 == 0x5d) {
          return pcVar5;
        }
        pcVar4 = (char *)(param_1 + cVar2);
      }
      if (lVar8 == 0) break;
      pcVar4 = (char *)(param_1 + cVar2);
    }
  }
  return pcVar5 + -1;
}


// ==== FUN_0035e610 @ 0035e610 ====

ulong FUN_0035e610(undefined1 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 *apuStack_80 [2];
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined *puStack_2c;
  
  uStack_78 = (undefined4)param_2;
  uStack_74 = 0x208;
  puStack_2c = PTR_DAT_003d6944;
  apuStack_80[0] = param_1;
  puStack_70 = param_1;
  uStack_6c = uStack_78;
  uVar1 = FUN_00361460(apuStack_80,param_3,param_4);
  if (param_2 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  *apuStack_80[0] = 0;
  return uVar1;
}


// ==== FUN_0035e680 @ 0035e680 ====

undefined4 FUN_0035e680(void)

{
  undefined4 extraout_a0_lo;
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_0036d998(1);
  puVar2 = *(undefined4 **)(PTR_DAT_003d6944 + 0x148);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(PTR_DAT_003d6944 + 0x14c);
    *(undefined4 **)(PTR_DAT_003d6944 + 0x148) = puVar2;
  }
  if ((int)puVar2[1] < 0x20) {
    iVar1 = puVar2[1];
  }
  else {
    puVar2 = (undefined4 *)FUN_0035e7d8(0x88);
    if (puVar2 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    puVar2[1] = 0;
    *puVar2 = *(undefined4 *)(PTR_DAT_003d6944 + 0x148);
    *(undefined4 **)(PTR_DAT_003d6944 + 0x148) = puVar2;
    iVar1 = puVar2[1];
  }
  puVar2[iVar1 + 2] = extraout_a0_lo;
  puVar2[1] = iVar1 + 1;
  return 0;
}


// ==== FUN_0035e690 @ 0035e690 ====

undefined4 FUN_0035e690(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(PTR_DAT_003d6944 + 0x148);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(PTR_DAT_003d6944 + 0x14c);
    *(undefined4 **)(PTR_DAT_003d6944 + 0x148) = puVar2;
  }
  if ((int)puVar2[1] < 0x20) {
    iVar1 = puVar2[1];
  }
  else {
    puVar2 = (undefined4 *)FUN_0035e7d8(0x88);
    if (puVar2 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    puVar2[1] = 0;
    *puVar2 = *(undefined4 *)(PTR_DAT_003d6944 + 0x148);
    *(undefined4 **)(PTR_DAT_003d6944 + 0x148) = puVar2;
    iVar1 = puVar2[1];
  }
  puVar2[iVar1 + 2] = param_1;
  puVar2[1] = iVar1 + 1;
  return 0;
}


// ==== FUN_0035e730 @ 0035e730 ====

void FUN_0035e730(undefined8 param_1)

{
  FUN_003605b8(param_1,0);
  return;
}


// ==== FUN_0035e750 @ 0035e750 ====

undefined4 FUN_0035e750(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00364da8(param_1,0,10);
  return uVar1;
}


// ==== FUN_0035e778 @ 0035e778 ====

undefined8 FUN_0035e778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_0035ebb0(PTR_DAT_003d6944);
  uVar1 = FUN_00364ab8(PTR_DAT_003d6944,param_1,param_2);
  FUN_0035ec10(PTR_DAT_003d6944);
  return uVar1;
}


// ==== FUN_0035e7d8 @ 0035e7d8 ====

undefined8 FUN_0035e7d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_0035ebb0(PTR_DAT_003d6944);
  uVar1 = FUN_003639a0(PTR_DAT_003d6944,param_1);
  FUN_0035ec10(PTR_DAT_003d6944);
  return uVar1;
}


// ==== FUN_0035e828 @ 0035e828 ====

void FUN_0035e828(undefined8 param_1)

{
  FUN_0035ebb0(PTR_DAT_003d6944);
  FUN_003640d0(PTR_DAT_003d6944,param_1);
  FUN_0035ec10(PTR_DAT_003d6944);
  return;
}


// ==== FUN_0035e870 @ 0035e870 ====

/* Strings referenciadas:
     "C-SJIS"
     "C-EUCJP"
     "C-JIS" */

byte * FUN_0035e870(int param_1,uint *param_2,byte *param_3,byte *param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint *puVar11;
  uint auStack_70 [4];
  
  puVar11 = auStack_70;
  if (param_2 != (uint *)0x0) {
    puVar11 = param_2;
  }
  if ((param_3 != (byte *)0x0) && (param_4 == (byte *)0x0)) {
    return (byte *)0xffffffff;
  }
  if ((*(int *)(param_1 + 0x34) != 0) && (uVar5 = FUN_0035ccd8(), 1 < uVar5)) {
    lVar6 = FUN_0035ca74(*(undefined4 *)(param_1 + 0x34),0x40af10);
    if (lVar6 == 0) {
      bVar1 = *param_3;
      if (param_3 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if ((bVar1 - 0x81 < 0x1f) || (bVar1 - 0xe0 < 0x10)) {
        bVar2 = param_3[1];
        if (param_4 < (byte *)0x2) {
          return (byte *)0xffffffff;
        }
        iVar7 = (uint)bVar1 << 8;
        if ((0x3e < bVar2 - 0x40) && (0x7c < bVar2 - 0x80)) {
          return (byte *)0xffffffff;
        }
LAB_0035e994:
        *puVar11 = iVar7 + (uint)bVar2;
        return (byte *)0x2;
      }
    }
    else {
      lVar6 = FUN_0035ca74(*(undefined4 *)(param_1 + 0x34),0x40af18);
      if (lVar6 == 0) {
        if (param_3 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (*param_3 - 0xa1 < 0x5e) {
          bVar2 = param_3[1];
          if (param_4 < (byte *)0x2) {
            return (byte *)0xffffffff;
          }
          iVar7 = (uint)*param_3 << 8;
          if (0x5d < bVar2 - 0xa1) {
            return (byte *)0xffffffff;
          }
          goto LAB_0035e994;
        }
      }
      else {
        lVar6 = FUN_0035ca74(*(undefined4 *)(param_1 + 0x34),0x40af20);
        if (lVar6 == 0) {
          if (param_3 == (byte *)0x0) {
            *param_5 = 0;
            return (byte *)0x1;
          }
          iVar7 = 3;
          pbVar4 = (byte *)0x0;
          if (*param_5 == 0) {
            iVar7 = 0;
          }
          pbVar3 = param_3;
          pbVar10 = param_3;
          if (param_4 == (byte *)0x0) {
LAB_0035eb8c:
            return (byte *)0xffffffff;
          }
LAB_0035e9e0:
          bVar2 = *pbVar3;
          uVar8 = (uint)bVar2;
          if (uVar8 == 0x28) {
            iVar9 = 2;
          }
          else if (bVar2 < 0x29) {
            if (uVar8 == 0x1b) {
              iVar9 = 0;
            }
            else if (bVar2 < 0x1c) {
              if (uVar8 == 0) {
                iVar9 = 6;
              }
              else {
LAB_0035ea9c:
                iVar9 = 8;
                if (uVar8 - 0x21 < 0x5e) {
                  iVar9 = 7;
                }
              }
            }
            else {
              if (uVar8 != 0x24) goto LAB_0035ea9c;
              iVar9 = 1;
            }
          }
          else if (uVar8 == 0x42) {
            iVar9 = 4;
          }
          else if (bVar2 < 0x43) {
            if (uVar8 != 0x40) goto LAB_0035ea9c;
            iVar9 = 3;
          }
          else {
            if (uVar8 != 0x4a) goto LAB_0035ea9c;
            iVar9 = 5;
          }
          iVar9 = iVar9 * 4 + iVar7 * 0x24;
          iVar7 = *(int *)(&DAT_003d6948 + iVar9);
          switch(*(undefined4 *)(&DAT_003d6af8 + iVar9)) {
          case 0:
            *param_5 = 0;
            *puVar11 = (uint)*pbVar10;
            return pbVar4 + 1;
          case 1:
            *param_5 = 0;
            pbVar4 = pbVar4 + 1;
            break;
          case 2:
            *param_5 = 1;
            pbVar4 = pbVar10 + (2 - (int)param_3);
            break;
          case 3:
          case 4:
            pbVar10 = pbVar3 + 1;
          case 5:
            goto switchD_0035eaf8_caseD_5;
          case 6:
            *param_5 = 0;
            *puVar11 = 0;
            return pbVar4;
          default:
            goto LAB_0035eb8c;
          }
          *puVar11 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
          return pbVar4;
        }
      }
    }
  }
  if (param_3 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    *puVar11 = (uint)*param_3;
    pbVar4 = (byte *)(uint)(*param_3 != 0);
  }
  return pbVar4;
switchD_0035eaf8_caseD_5:
  pbVar4 = pbVar4 + 1;
  pbVar3 = param_3 + (int)pbVar4;
  if (param_4 <= pbVar4) {
    return (byte *)0xffffffff;
  }
  goto LAB_0035e9e0;
}


// ==== FUN_0035ebb0 @ 0035ebb0 ====

void FUN_0035ebb0(void)

{
  int iVar1;
  
  iVar1 = GetThreadId();
  if (DAT_003d6ca8 != iVar1) {
    WaitSema(DAT_003d7230);
    DAT_003d6ca8 = iVar1;
  }
  DAT_003d6cac = DAT_003d6cac + 1;
  return;
}


// ==== FUN_0035ec10 @ 0035ec10 ====

void FUN_0035ec10(void)

{
  DAT_003d6cac = DAT_003d6cac + -1;
  if (DAT_003d6cac == 0) {
    DAT_003d6ca8 = 0xffffffff;
    SignalSema(DAT_003d7230);
  }
  return;
}


// ==== FUN_0035ec50 @ 0035ec50 ====

void FUN_0035ec50(undefined8 *param_1,uint param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  code *pcVar20;
  uint uStack_f0;
  undefined8 *puStack_c4;
  ulong uVar16;
  
  uStack_f0 = param_2;
  do {
    bVar4 = 2;
    if (((uint)param_1 & 7) == 0) {
      if ((param_3 & 7) == 0) {
        bVar4 = param_3 != 8;
      }
      else {
        bVar4 = 2;
      }
    }
    bVar3 = false;
    uVar18 = (uint)param_3;
    pcVar20 = (code *)param_4;
    if (uStack_f0 < 7) {
      puVar6 = (undefined8 *)(uStack_f0 * uVar18 + (int)param_1);
      if ((undefined8 *)((int)param_1 + uVar18) < puVar6) {
        puVar17 = (undefined8 *)((int)param_1 + uVar18);
        do {
          puVar19 = (undefined8 *)((int)puVar17 + uVar18);
          while ((puVar14 = (undefined8 *)((int)puVar17 - uVar18), param_1 < puVar17 &&
                 (lVar5 = (*pcVar20)(puVar14,puVar17), 0 < lVar5))) {
            if (bVar4 == 0) {
              uVar7 = *puVar17;
              *puVar17 = *puVar14;
              *puVar14 = uVar7;
              puVar17 = puVar14;
            }
            else {
              lVar5 = (long)(int)(uVar18 >> 3);
              puVar8 = puVar17;
              puVar12 = puVar14;
              if (bVar4 < 2) {
                do {
                  lVar5 = lVar5 + -1;
                  uVar7 = *puVar8;
                  *puVar8 = *puVar12;
                  *puVar12 = uVar7;
                  puVar17 = puVar14;
                  puVar8 = puVar8 + 1;
                  puVar12 = puVar12 + 1;
                } while (0 < lVar5);
              }
              else {
                uVar10 = param_3 & 0xffffffff;
                do {
                  uVar10 = uVar10 - 1;
                  uVar1 = *(undefined1 *)puVar8;
                  *(undefined1 *)puVar8 = *(undefined1 *)puVar12;
                  *(undefined1 *)puVar12 = uVar1;
                  puVar8 = (undefined8 *)((int)puVar8 + 1);
                  puVar12 = (undefined8 *)((int)puVar12 + 1);
                  puVar17 = puVar14;
                } while (0 < (long)uVar10);
              }
            }
          }
          puVar17 = puVar19;
        } while (puVar19 < puVar6);
      }
      return;
    }
    puVar6 = (undefined8 *)((uStack_f0 >> 1) * uVar18 + (int)param_1);
    if (7 < uStack_f0) {
      puVar14 = (undefined8 *)((uStack_f0 - 1) * uVar18 + (int)param_1);
      puVar17 = param_1;
      puVar19 = puVar14;
      if (0x28 < uStack_f0) {
        iVar9 = (uStack_f0 >> 3) * uVar18;
        puVar17 = (undefined8 *)((int)param_1 + iVar9);
        puVar19 = (undefined8 *)(iVar9 * 2 + (int)param_1);
        lVar5 = (*pcVar20)(param_1,puVar17);
        if (lVar5 < 0) {
          lVar5 = (*pcVar20)(puVar17,puVar19);
          if ((-1 < lVar5) && (lVar5 = (*pcVar20)(param_1,puVar19), puVar17 = puVar19, -1 < lVar5))
          {
            puVar17 = param_1;
          }
        }
        else {
          lVar5 = (*pcVar20)(puVar17,puVar19);
          if ((lVar5 < 1) && (lVar5 = (*pcVar20)(param_1,puVar19), puVar17 = param_1, -1 < lVar5)) {
            puVar17 = puVar19;
          }
        }
        puVar8 = (undefined8 *)((int)puVar6 - iVar9);
        puVar19 = (undefined8 *)((int)puVar6 + iVar9);
        lVar5 = (*pcVar20)(puVar8,puVar6);
        if (lVar5 < 0) {
          lVar5 = (*pcVar20)(puVar6,puVar19);
          if ((-1 < lVar5) && (lVar5 = (*pcVar20)(puVar8,puVar19), puVar6 = puVar19, -1 < lVar5)) {
            puVar6 = puVar8;
          }
        }
        else {
          lVar5 = (*pcVar20)(puVar6,puVar19);
          if ((lVar5 < 1) && (lVar5 = (*pcVar20)(puVar8,puVar19), puVar6 = puVar8, -1 < lVar5)) {
            puVar6 = puVar19;
          }
        }
        puVar19 = (undefined8 *)((int)puVar14 - iVar9);
        puVar8 = (undefined8 *)((int)puVar14 + iVar9 * -2);
        lVar5 = (*pcVar20)(puVar8,puVar19);
        if (lVar5 < 0) {
          lVar5 = (*pcVar20)(puVar19,puVar14);
          if ((-1 < lVar5) && (lVar5 = (*pcVar20)(puVar8,puVar14), puVar19 = puVar14, -1 < lVar5)) {
            puVar19 = puVar8;
          }
        }
        else {
          lVar5 = (*pcVar20)(puVar19,puVar14);
          if ((lVar5 < 1) && (lVar5 = (*pcVar20)(puVar8,puVar14), puVar19 = puVar8, -1 < lVar5)) {
            puVar19 = puVar14;
          }
        }
      }
      lVar5 = (*pcVar20)(puVar17,puVar6);
      if (lVar5 < 0) {
        lVar5 = (*pcVar20)(puVar6,puVar19);
        if ((-1 < lVar5) && (lVar5 = (*pcVar20)(puVar17,puVar19), puVar6 = puVar19, -1 < lVar5)) {
          puVar6 = puVar17;
        }
      }
      else {
        lVar5 = (*pcVar20)(puVar6,puVar19);
        if ((lVar5 < 1) && (lVar5 = (*pcVar20)(puVar17,puVar19), puVar6 = puVar17, -1 < lVar5)) {
          puVar6 = puVar19;
        }
      }
    }
    if (bVar4 == 0) {
      uVar7 = *param_1;
      *param_1 = *puVar6;
      *puVar6 = uVar7;
    }
    else {
      lVar5 = (long)(int)(uVar18 >> 3);
      puVar17 = param_1;
      if (bVar4 < 2) {
        do {
          lVar5 = lVar5 + -1;
          uVar7 = *puVar17;
          *puVar17 = *puVar6;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 1;
          puVar17 = puVar17 + 1;
        } while (0 < lVar5);
      }
      else {
        uVar10 = param_3 & 0xffffffff;
        do {
          uVar10 = uVar10 - 1;
          uVar1 = *(undefined1 *)puVar17;
          *(undefined1 *)puVar17 = *(undefined1 *)puVar6;
          *(undefined1 *)puVar6 = uVar1;
          puVar17 = (undefined8 *)((int)puVar17 + 1);
          puVar6 = (undefined8 *)((int)puVar6 + 1);
        } while (0 < (long)uVar10);
      }
    }
    puStack_c4 = (undefined8 *)((int)param_1 + uVar18);
    puVar19 = (undefined8 *)((uStack_f0 - 1) * uVar18 + (int)param_1);
    puVar6 = puStack_c4;
    puVar17 = puStack_c4;
    puVar14 = puVar19;
LAB_0035f1a8:
    puVar8 = puVar6;
    if ((puVar8 <= puVar19) && (lVar5 = (*pcVar20)(puVar8,param_1), lVar5 < 1)) {
      puVar6 = (undefined8 *)((int)puVar8 + uVar18);
      if (lVar5 == 0) {
        bVar3 = true;
        if (bVar4 == 0) {
          uVar7 = *puVar17;
          *puVar17 = *puVar8;
          *puVar8 = uVar7;
        }
        else {
          if (bVar4 < 2) {
            puVar13 = (undefined8 *)((int)puVar17 + uVar18);
            lVar5 = (long)(int)(uVar18 >> 3);
            puVar12 = puVar17;
            do {
              lVar5 = lVar5 + -1;
              uVar7 = *puVar12;
              *puVar12 = *puVar8;
              *puVar8 = uVar7;
              puVar12 = puVar12 + 1;
              puVar8 = puVar8 + 1;
              puVar17 = puVar13;
            } while (0 < lVar5);
            goto LAB_0035f1a8;
          }
          uVar10 = param_3 & 0xffffffff;
          puVar12 = puVar17;
          do {
            uVar10 = uVar10 - 1;
            uVar1 = *(undefined1 *)puVar12;
            *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
            *(undefined1 *)puVar8 = uVar1;
            puVar12 = (undefined8 *)((int)puVar12 + 1);
            puVar8 = (undefined8 *)((int)puVar8 + 1);
          } while (0 < (long)uVar10);
        }
        puVar17 = (undefined8 *)((int)puVar17 + uVar18);
      }
      goto LAB_0035f1a8;
    }
LAB_0035f288:
    puVar6 = puVar19;
    if (puVar8 <= puVar6) {
      lVar5 = (*pcVar20)(puVar6,param_1);
      if (lVar5 < 0) break;
      puVar19 = (undefined8 *)((int)puVar6 - uVar18);
      if (lVar5 == 0) {
        bVar3 = true;
        if (bVar4 == 0) {
          uVar7 = *puVar6;
          *puVar6 = *puVar14;
          *puVar14 = uVar7;
        }
        else {
          if (bVar4 < 2) {
            puVar13 = (undefined8 *)((int)puVar14 - uVar18);
            lVar5 = (long)(int)(uVar18 >> 3);
            puVar12 = puVar14;
            do {
              lVar5 = lVar5 + -1;
              uVar7 = *puVar6;
              *puVar6 = *puVar12;
              *puVar12 = uVar7;
              puVar6 = puVar6 + 1;
              puVar12 = puVar12 + 1;
              puVar14 = puVar13;
            } while (0 < lVar5);
            goto LAB_0035f288;
          }
          uVar10 = param_3 & 0xffffffff;
          puVar12 = puVar14;
          do {
            uVar10 = uVar10 - 1;
            uVar1 = *(undefined1 *)puVar6;
            *(undefined1 *)puVar6 = *(undefined1 *)puVar12;
            *(undefined1 *)puVar12 = uVar1;
            puVar6 = (undefined8 *)((int)puVar6 + 1);
            puVar12 = (undefined8 *)((int)puVar12 + 1);
          } while (0 < (long)uVar10);
        }
        puVar14 = (undefined8 *)((int)puVar14 - uVar18);
      }
      goto LAB_0035f288;
    }
    iVar9 = (int)puVar8 - (int)puVar17;
    uVar10 = (ulong)iVar9;
    if (!bVar3) {
      puVar6 = (undefined8 *)(uStack_f0 * uVar18 + (int)param_1);
      if (puVar6 <= puStack_c4) {
        return;
      }
      do {
        puVar17 = (undefined8 *)((int)puStack_c4 + uVar18);
        while ((puVar19 = (undefined8 *)((int)puStack_c4 - uVar18), param_1 < puStack_c4 &&
               (lVar5 = (*pcVar20)(puVar19,puStack_c4), 0 < lVar5))) {
          if (bVar4 == 0) {
            uVar7 = *puStack_c4;
            *puStack_c4 = *puVar19;
            *puVar19 = uVar7;
            puStack_c4 = puVar19;
          }
          else {
            lVar5 = (long)(int)(uVar18 >> 3);
            puVar14 = puStack_c4;
            puVar8 = puVar19;
            if (bVar4 < 2) {
              do {
                lVar5 = lVar5 + -1;
                uVar7 = *puVar14;
                *puVar14 = *puVar8;
                *puVar8 = uVar7;
                puStack_c4 = puVar19;
                puVar14 = puVar14 + 1;
                puVar8 = puVar8 + 1;
              } while (0 < lVar5);
            }
            else {
              uVar10 = param_3 & 0xffffffff;
              do {
                uVar10 = uVar10 - 1;
                uVar1 = *(undefined1 *)puVar14;
                *(undefined1 *)puVar14 = *(undefined1 *)puVar8;
                *(undefined1 *)puVar8 = uVar1;
                puVar14 = (undefined8 *)((int)puVar14 + 1);
                puVar8 = (undefined8 *)((int)puVar8 + 1);
                puStack_c4 = puVar19;
              } while (0 < (long)uVar10);
            }
          }
        }
        puStack_c4 = puVar17;
      } while (puVar17 < puVar6);
      return;
    }
    uVar11 = uVar10;
    if ((long)((int)puVar17 - (int)param_1) < (long)uVar10) {
      uVar11 = (long)((int)puVar17 - (int)param_1);
    }
    iVar15 = (int)puVar14 - (int)puVar6;
    uVar16 = (ulong)iVar15;
    iVar2 = uStack_f0 * uVar18;
    if (0 < (long)uVar11) {
      puVar6 = (undefined8 *)((int)puVar8 - (uint)uVar11);
      if (bVar4 < 2) {
        lVar5 = (long)(int)((uint)uVar11 >> 3);
        puVar17 = param_1;
        do {
          lVar5 = lVar5 + -1;
          uVar7 = *puVar17;
          *puVar17 = *puVar6;
          *puVar6 = uVar7;
          puVar17 = puVar17 + 1;
          puVar6 = puVar6 + 1;
        } while (0 < lVar5);
      }
      else {
        uVar11 = uVar11 & 0xffffffff;
        puVar17 = param_1;
        do {
          uVar11 = uVar11 - 1;
          uVar1 = *(undefined1 *)puVar17;
          *(undefined1 *)puVar17 = *(undefined1 *)puVar6;
          *(undefined1 *)puVar6 = uVar1;
          puVar17 = (undefined8 *)((int)puVar17 + 1);
          puVar6 = (undefined8 *)((int)puVar6 + 1);
        } while (0 < (long)uVar11);
      }
    }
    uVar11 = (ulong)(int)((int)param_1 + ((iVar2 - (int)puVar14) - uVar18));
    if (uVar16 < uVar11) {
      uVar11 = uVar16;
    }
    if (0 < (long)uVar11) {
      puVar6 = (undefined8 *)((int)param_1 + (iVar2 - (uint)uVar11));
      if (bVar4 < 2) {
        lVar5 = (long)(int)((uint)uVar11 >> 3);
        do {
          lVar5 = lVar5 + -1;
          uVar7 = *puVar8;
          *puVar8 = *puVar6;
          *puVar6 = uVar7;
          puVar8 = puVar8 + 1;
          puVar6 = puVar6 + 1;
        } while (0 < lVar5);
      }
      else {
        uVar11 = uVar11 & 0xffffffff;
        do {
          uVar11 = uVar11 - 1;
          uVar1 = *(undefined1 *)puVar8;
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          *(undefined1 *)puVar6 = uVar1;
          puVar8 = (undefined8 *)((int)puVar8 + 1);
          puVar6 = (undefined8 *)((int)puVar6 + 1);
        } while (0 < (long)uVar11);
      }
    }
    if (param_3 < uVar10) {
      if (param_3 == 0) {
        trap(7);
      }
      FUN_0035ec50(param_1,iVar9 / (int)uVar18,param_3,param_4);
    }
    if (uVar16 <= param_3) {
      return;
    }
    uStack_f0 = iVar15 / (int)uVar18;
    if (param_3 == 0) {
      trap(7);
    }
    param_1 = (undefined8 *)((int)param_1 + (iVar2 - iVar15));
  } while( true );
  if (bVar4 == 0) {
    uVar7 = *puVar8;
    *puVar8 = *puVar6;
    *puVar6 = uVar7;
  }
  else {
    lVar5 = (long)(int)(uVar18 >> 3);
    puVar19 = puVar8;
    puVar12 = puVar6;
    if (bVar4 < 2) {
      do {
        lVar5 = lVar5 + -1;
        uVar7 = *puVar19;
        *puVar19 = *puVar12;
        *puVar12 = uVar7;
        puVar19 = puVar19 + 1;
        puVar12 = puVar12 + 1;
      } while (0 < lVar5);
    }
    else {
      uVar10 = param_3 & 0xffffffff;
      do {
        uVar10 = uVar10 - 1;
        uVar1 = *(undefined1 *)puVar19;
        *(undefined1 *)puVar19 = *(undefined1 *)puVar12;
        *(undefined1 *)puVar12 = uVar1;
        puVar19 = (undefined8 *)((int)puVar19 + 1);
        puVar12 = (undefined8 *)((int)puVar12 + 1);
      } while (0 < (long)uVar10);
    }
  }
  puVar19 = (undefined8 *)((int)puVar6 - uVar18);
  bVar3 = true;
  puVar6 = (undefined8 *)((int)puVar8 + uVar18);
  goto LAB_0035f1a8;
}


// ==== FUN_0035f630 @ 0035f630 ====

uint FUN_0035f630(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(PTR_DAT_003d6944 + 0x58) * 0x41c64e6d + 0x3039;
  *(uint *)(PTR_DAT_003d6944 + 0x58) = uVar1;
  return uVar1 & 0x7fffffff;
}


// ==== FUN_0035f660 @ 0035f660 ====

undefined8 FUN_0035f660(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_0035ebb0(PTR_DAT_003d6944);
  uVar1 = FUN_00364538(PTR_DAT_003d6944,param_1,param_2);
  FUN_0035ec10(PTR_DAT_003d6944);
  return uVar1;
}


// ==== FUN_0035f6c0 @ 0035f6c0 ====

void FUN_0035f6c0(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  char *pcVar27;
  ulong in_hi;
  int iStack_f0;
  int iStack_ec;
  undefined4 *puStack_e8;
  int iStack_e4;
  long lStack_e0;
  char *pcStack_d8;
  uint uStack_d0;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int *piStack_a8;
  
  bVar17 = false;
  uVar20 = 0;
  lVar10 = 0;
  iStack_e4 = 0;
  pcVar26 = param_2;
LAB_0035f708:
  cVar7 = *pcVar26;
  puStack_e8 = param_3;
  switch(cVar7) {
  case '\0':
    goto switchD_0035f728_caseD_0;
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case ',':
    cVar7 = *pcVar26;
    break;
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case ' ':
    goto switchD_0035f728_caseD_9;
  case '+':
    goto switchD_0035f728_caseD_2b;
  case '-':
    iStack_e4 = 1;
switchD_0035f728_caseD_2b:
    pcVar26 = pcVar26 + 1;
    pcVar27 = param_2;
    if (*pcVar26 == '\0') goto LAB_00360568;
    cVar7 = *pcVar26;
  }
  cVar1 = *pcVar26;
  if (cVar7 == '0') {
    bVar17 = true;
    do {
      pcVar26 = pcVar26 + 1;
      cVar1 = *pcVar26;
    } while (*pcVar26 == '0');
    pcVar27 = pcVar26;
    if (*pcVar26 == '\0') goto LAB_00360568;
  }
  lVar8 = (long)(int)cVar1;
  uVar22 = 0;
  uStack_d0 = 0;
  lVar15 = 0;
  iVar24 = 0;
  pcVar27 = pcVar26;
  if ((0x2f < lVar8) && (lVar8 < 0x3a)) {
    bVar14 = true;
    do {
      if (bVar14) {
        in_hi = CONCAT44((int)(in_hi >> 0x20),(int)(uStack_d0 * 10) >> 0x1f);
        uStack_d0 = (uStack_d0 * 10 + (int)lVar8) - 0x30;
      }
      else if (iVar24 < 0x10) {
        uVar22 = (lVar8 + uVar22 * 10) - 0x30;
      }
      pcVar27 = pcVar27 + 1;
      lVar8 = (long)*pcVar27;
      iVar24 = iVar24 + 1;
    } while ((0x2f < lVar8) && (bVar14 = iVar24 < 9, lVar8 < 0x3a));
  }
  iVar25 = iVar24;
  pcStack_d8 = pcVar26;
  if (lVar8 == 0x2e) {
    pcVar27 = pcVar27 + 1;
    cVar7 = *pcVar27;
    lVar8 = (long)cVar7;
    lVar16 = lVar15;
    if (iVar24 != 0) goto LAB_0035f934;
    while (lVar16 = lVar10, lVar8 == 0x30) {
      pcVar27 = pcVar27 + 1;
      cVar7 = *pcVar27;
      lVar10 = (long)((int)lVar16 + 1);
      lVar8 = (long)cVar7;
    }
    lVar10 = lVar16;
    if ((int)cVar7 - 0x31U < 9) {
      lVar10 = 0;
      pcStack_d8 = pcVar27;
      do {
        pcVar27 = pcVar27 + 1;
        uVar9 = (ulong)((int)lVar8 + -0x30);
        iVar11 = (int)lVar10;
        lVar10 = (long)(iVar11 + 1);
        if (uVar9 != 0) {
          lVar16 = (long)((int)lVar16 + iVar11 + 1);
          if (1 < lVar10) {
            do {
              bVar14 = iVar25 < 9;
              iVar25 = iVar25 + 1;
              if (bVar14) {
                uStack_d0 = uStack_d0 * 10;
                in_hi = CONCAT44((int)(in_hi >> 0x20),(int)uStack_d0 >> 0x1f);
              }
              else if (iVar25 < 0x11) {
                uVar22 = uVar22 * 10;
              }
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          bVar14 = iVar25 < 9;
          iVar25 = iVar25 + 1;
          if (bVar14) {
            lVar10 = (uVar9 | in_hi) + (long)(int)(uStack_d0 * 10);
            uStack_d0 = (uint)lVar10;
            in_hi = (ulong)(int)((ulong)lVar10 >> 0x20);
          }
          else if (iVar25 < 0x11) {
            uVar22 = uVar9 + uVar22 * 10;
          }
          lVar10 = 0;
        }
        lVar8 = (long)*pcVar27;
LAB_0035f934:
        lVar15 = lVar16;
      } while ((int)lVar8 - 0x30U < 10);
    }
  }
  lStack_e0 = 0;
  if ((lVar8 == 0x65) || (lVar8 == 0x45)) {
    if ((iVar25 == 0) && ((lVar10 == 0 && (!bVar17)))) {
switchD_0035f728_caseD_0:
      pcVar27 = param_2;
      goto LAB_00360568;
    }
    pcVar26 = pcVar27 + 1;
    cVar7 = *pcVar26;
    lVar8 = (long)cVar7;
    bVar14 = false;
    if (lVar8 == 0x2b) {
LAB_0035f9a0:
      pcVar26 = pcVar27 + 2;
      cVar7 = *pcVar26;
      lVar8 = (long)cVar7;
    }
    else if (lVar8 == 0x2d) {
      bVar14 = true;
      goto LAB_0035f9a0;
    }
    param_2 = pcVar27;
    if ((int)cVar7 - 0x30U < 10) {
      if (lVar8 == 0x30) {
        do {
          pcVar26 = pcVar26 + 1;
          lVar8 = (long)*pcVar26;
        } while (lVar8 == 0x30);
        iVar11 = (int)*pcVar26;
      }
      else {
        iVar11 = (int)lVar8;
      }
      lStack_e0 = (long)((int)lVar8 + -0x30);
      if (iVar11 - 0x31U < 9) {
        pcVar27 = pcVar26 + 1;
        lVar8 = (long)*pcVar27;
        iVar11 = (int)pcVar27 - (int)pcVar26;
        if (0x2f < lVar8) {
          do {
            if (0x39 < lVar8) break;
            pcVar27 = pcVar27 + 1;
            lStack_e0 = lVar8 + lStack_e0 * 10;
            lVar8 = (long)*pcVar27;
            lStack_e0 = lStack_e0 + -0x30;
          } while (0x2f < lVar8);
          iVar11 = (int)pcVar27 - (int)pcVar26;
        }
        if (8 < iVar11) {
          lStack_e0 = 9999999;
        }
        if (bVar14) {
          lStack_e0 = -lStack_e0;
        }
      }
      else {
        lStack_e0 = 0;
        pcVar27 = pcVar26;
      }
    }
  }
  if (iVar25 == 0) {
    if (bVar17) {
      param_2 = pcVar27;
    }
    if (lVar10 == 0) {
      pcVar27 = param_2;
    }
    goto LAB_00360568;
  }
  lVar15 = lStack_e0 - lVar15;
  iVar11 = 0x10;
  if (iVar25 < 0x11) {
    iVar11 = iVar25;
  }
  lStack_e0 = lVar15;
  uVar9 = FUN_00291a48(uStack_d0);
  if (iVar24 == 0) {
    iVar24 = iVar25;
  }
  if ((int)uStack_d0 < 0) {
    uVar9 = FUN_00291410(uVar9,0x41f0000000000000);
  }
  if (9 < iVar11) {
    uVar4 = FUN_002914d0(*(undefined8 *)(&DAT_0040b608 + (iVar11 + -9) * 8),uVar9);
    if ((long)uVar22 < 0) {
      uVar5 = FUN_002903f0(uVar22 & 1 | uVar22 >> 1);
      uVar5 = FUN_00291410(uVar5,uVar5);
    }
    else {
      uVar5 = FUN_002903f0(uVar22);
    }
    uVar9 = FUN_00291410(uVar4,uVar5);
  }
  iStack_b8 = 0;
  uVar20 = uVar9;
  if (iVar25 < 0x10) {
    if (lStack_e0 == 0) goto LAB_00360568;
    iVar12 = (int)lStack_e0;
    if (0 < lStack_e0) {
      if (0x16 < lStack_e0) {
        iVar12 = -iVar25 + 0xf;
        iVar11 = iVar25 - iVar11;
        if (-iVar25 + 0x25 < lStack_e0) goto LAB_0035fc30;
        lStack_e0 = lStack_e0 - iVar12;
        uVar9 = FUN_002914d0(*(undefined8 *)(&DAT_0040b608 + iVar12 * 8),uVar9);
        iVar12 = (int)lStack_e0;
      }
      uVar20 = FUN_002914d0(*(undefined8 *)(&DAT_0040b608 + iVar12 * 8),uVar9);
      goto LAB_00360568;
    }
    iVar11 = iVar25 - iVar11;
    if (-0x17 < lStack_e0) {
      uVar20 = FUN_00291778(uVar9,*(undefined8 *)(&DAT_0040b608 + iVar12 * -8));
      goto LAB_00360568;
    }
  }
  else {
    iVar11 = iVar25 - iVar11;
  }
LAB_0035fc30:
  uVar18 = (int)lVar15 + iVar11;
  if ((int)uVar18 < 1) {
    if (-1 < (int)uVar18) goto LAB_0035feb0;
    uVar18 = -uVar18;
    if ((uVar18 & 0xf) != 0) {
      uVar9 = FUN_00291778(uVar9,*(undefined8 *)(&DAT_0040b608 + (uVar18 & 0xf) * 8));
    }
    uVar19 = (int)uVar18 >> 4;
    uVar20 = uVar9;
    if ((uVar18 & 0xfffffff0) == 0) goto LAB_0035feb0;
    iVar11 = 0;
    if ((int)uVar19 < 0x20) {
      if (1 < (int)uVar19) {
        puVar21 = (undefined8 *)&DAT_0040b6f8;
        do {
          uVar18 = uVar19 & 1;
          uVar19 = (int)uVar19 >> 1;
          if (uVar18 != 0) {
            uVar9 = FUN_002914d0(*puVar21,uVar9);
          }
          puVar21 = puVar21 + 1;
          iVar11 = iVar11 + 1;
        } while (1 < (int)uVar19);
      }
      uVar4 = *(undefined8 *)(&DAT_0040b6f8 + iVar11 * 8);
      uVar20 = FUN_002914d0(uVar4,uVar9);
      lVar10 = FUN_002919f8(uVar20,0);
      if (lVar10 == 0) {
        uVar5 = FUN_00291410(uVar9,uVar9);
        uVar4 = FUN_002914d0(uVar4,uVar5);
        lVar10 = FUN_002919f8(uVar4,0);
        uVar20 = 1;
        if (lVar10 == 0) goto LAB_0035fe78;
      }
      goto LAB_0035feb0;
    }
LAB_0035fe78:
    *(undefined4 *)param_1 = 0x22;
    uVar20 = 0;
joined_r0x0035fe80:
    if (iStack_b8 == 0) goto LAB_00360568;
LAB_0036052c:
    FUN_00366510(param_1,uStack_c0);
    FUN_00366510(param_1,iStack_bc);
    FUN_00366510(param_1,uStack_b4);
    FUN_00366510(param_1,iStack_b8);
    FUN_00366510(param_1,iStack_b0);
LAB_00360568:
    if (puStack_e8 != (undefined4 *)0x0) {
      *puStack_e8 = pcVar27;
    }
    if (iStack_e4 != 0) {
      FUN_00291468(0,uVar20);
    }
    return;
  }
  if ((uVar18 & 0xf) != 0) {
    uVar9 = FUN_002914d0(*(undefined8 *)(&DAT_0040b608 + (uVar18 & 0xf) * 8),uVar9);
  }
  uVar20 = uVar9;
  if ((uVar18 & 0xfffffff0) != 0) {
    if ((int)(uVar18 & 0xfffffff0) < 0x135) {
      uVar18 = (int)uVar18 >> 4;
      iVar11 = 0;
      if (uVar18 != 0) {
        if (1 < (int)uVar18) {
          puVar21 = (undefined8 *)&DAT_0040b6d0;
          do {
            uVar19 = uVar18 & 1;
            uVar18 = (int)uVar18 >> 1;
            if (uVar19 != 0) {
              uVar9 = FUN_002914d0(*puVar21,uVar9);
            }
            puVar21 = puVar21 + 1;
            iVar11 = iVar11 + 1;
          } while (1 < (int)uVar18);
        }
        uVar20 = FUN_002914d0(*(undefined8 *)(&DAT_0040b6d0 + iVar11 * 8),
                              uVar9 & 0xffffffff | (long)((int)(uVar9 >> 0x20) + -0x3500000) << 0x20
                             );
        uVar22 = (long)uVar20 >> 0x20 & 0x7ff00000;
        if (0x7ca00000 < uVar22) goto LAB_0035fc7c;
        if (uVar22 < 0x7c900001) {
          uVar20 = uVar20 & 0xffffffff | (long)((int)(uVar20 >> 0x20) + 0x3500000) << 0x20;
        }
        else {
          uVar20 = 0x7fefffffffffffff;
        }
      }
      goto LAB_0035feb0;
    }
LAB_0035fc7c:
    *(undefined4 *)param_1 = 0x22;
    uVar20 = DAT_0040b5a8;
    goto joined_r0x0035fe80;
  }
LAB_0035feb0:
  iStack_b8 = FUN_00366650(param_1,pcStack_d8,iVar24,iVar25,uStack_d0);
  piStack_a8 = &iStack_ec;
  iStack_ac = (int)lStack_e0;
  do {
    iStack_bc = FUN_00366468(param_1,*(undefined4 *)(iStack_b8 + 4));
    FUN_0035c544(iStack_bc + 0xc,iStack_b8 + 0xc,*(int *)(iStack_b8 + 0x10) * 4 + 8);
    uStack_c0 = FUN_003671c0(param_1,uVar20,&iStack_f0,piStack_a8);
    uStack_b4 = FUN_003668d0(param_1,1);
    if (lStack_e0 < 0) {
      iVar25 = 0;
      iVar24 = -iStack_ac;
    }
    else {
      iVar24 = 0;
      iVar25 = iStack_ac;
    }
    if (iStack_f0 < 0) {
      iVar11 = iVar25 - iStack_f0;
      iVar12 = iVar24;
    }
    else {
      iVar12 = iVar24 + iStack_f0;
      iVar11 = iVar25;
    }
    if (iStack_f0 + iStack_ec + -1 < -0x3fe) {
      iVar23 = iStack_f0 + 0x433;
    }
    else {
      iVar23 = 0x36 - iStack_ec;
    }
    iVar11 = iVar11 + iVar23;
    iVar23 = iVar12 + iVar23;
    iVar13 = iVar11;
    if (iVar23 < iVar11) {
      iVar13 = iVar23;
    }
    if (iVar12 < iVar13) {
      iVar13 = iVar12;
    }
    if (0 < iVar13) {
      iVar12 = iVar12 - iVar13;
      iVar23 = iVar23 - iVar13;
      iVar11 = iVar11 - iVar13;
    }
    if (0 < iVar24) {
      uVar4 = FUN_00366b10(param_1,uStack_b4);
      uStack_b4 = (undefined4)uVar4;
      uVar3 = FUN_00366908(param_1,uVar4,uStack_c0);
      uVar2 = uStack_c0;
      uStack_c0 = uVar3;
      FUN_00366510(param_1,uVar2);
    }
    if (0 < iVar23) {
      uStack_c0 = FUN_00366c10(param_1,uStack_c0,iVar23);
    }
    if (0 < iVar25) {
      iStack_bc = FUN_00366b10(param_1,iStack_bc,iVar25);
    }
    if (0 < iVar11) {
      iStack_bc = FUN_00366c10(param_1,iStack_bc,iVar11);
    }
    if (0 < iVar12) {
      uStack_b4 = FUN_00366c10(param_1,uStack_b4,iVar12);
    }
    uVar4 = FUN_00366dd0(param_1,uStack_c0,iStack_bc);
    iStack_b0 = (int)uVar4;
    iVar24 = *(int *)(iStack_b0 + 0xc);
    *(undefined4 *)(iStack_b0 + 0xc) = 0;
    lVar10 = FUN_00366d68(uVar4,uStack_b4);
    uVar18 = (uint)(uVar20 >> 0x20);
    if (lVar10 < 0) {
      if ((iVar24 == 0) && ((uVar20 & 0xfffffffffffff) == 0)) {
        uVar4 = FUN_00366c10(param_1,iStack_b0,1);
        iStack_b0 = (int)uVar4;
        lVar10 = FUN_00366d68(uVar4,uStack_b4);
        if (0 < lVar10) {
LAB_0035ff80:
          uVar20 = uVar20 & 0xffffffff |
                   (long)(int)((uVar18 & 0x7ff00000) - 0x100000) << 0x20 | 0xfffff00000000U |
                   0xffffffff;
        }
      }
      goto LAB_0036052c;
    }
    if (lVar10 == 0) {
      if (iVar24 == 0) {
        if ((uVar20 & 0xfffffffffffff) == 0) goto LAB_0035ff80;
      }
      else if ((uVar20 & 0xfffffffffffff) == 0xfffffffffffff) {
        uVar20 = ((long)uVar20 >> 0x20 & 0x7ff00000U) + 0x100000 << 0x20;
        goto LAB_0036052c;
      }
      if ((uVar20 & 1) != 0) {
        if (iVar24 == 0) {
          uVar4 = FUN_00366f60(uVar20,uStack_c0);
          uVar20 = FUN_00291468(uVar20,uVar4);
          lVar10 = FUN_002919f8(uVar20,0);
          if (lVar10 == 0) goto LAB_0035fe78;
        }
        else {
          uVar4 = FUN_00366f60(uVar20,uStack_c0);
          uVar20 = FUN_00291410(uVar4,uVar20);
        }
      }
      goto LAB_0036052c;
    }
    uVar4 = FUN_00367340(iStack_b0,uStack_b4);
    lVar10 = FUN_002919f8(uVar4,0x4000000000000000);
    if (lVar10 < 1) {
      if (iVar24 == 0) {
        if ((uVar20 & 0xfffffffffffff) == 0) {
          lVar10 = FUN_002919f8(uVar4,0x3ff0000000000000);
          if (lVar10 < 0) {
            uVar5 = 0x3fe0000000000000;
          }
          else {
            uVar5 = FUN_002914d0(uVar4,0x3fe0000000000000);
          }
          goto LAB_003600e4;
        }
        if (uVar20 == 1) goto LAB_0035fe78;
        uVar5 = 0x3ff0000000000000;
        uVar4 = 0xbff0000000000000;
      }
      else {
        uVar5 = 0x3ff0000000000000;
        uVar4 = uVar5;
      }
    }
    else {
      uVar5 = FUN_002914d0(uVar4,0x3fe0000000000000);
      uVar4 = uVar5;
      if (iVar24 == 0) {
LAB_003600e4:
        uVar4 = FUN_00291468(0,uVar5);
      }
    }
    uStack_d0 = uVar18 & 0x7ff00000;
    if (uStack_d0 == 0x7fe00000) {
      uVar22 = uVar20 & 0xffffffff | (long)(int)(uVar18 + 0xfcb00000) << 0x20;
      uVar6 = FUN_00366f60(uVar22);
      uVar4 = FUN_002914d0(uVar4,uVar6);
      uVar22 = FUN_00291410(uVar4,uVar22);
      if (((long)uVar22 >> 0x20 & 0x7ff00000U) < 0x7ca00000) {
        uVar20 = uVar22 & 0xffffffff | (long)((int)(uVar22 >> 0x20) + 0x3500000) << 0x20;
        goto LAB_00360248;
      }
      if (uVar20 == 0x7fefffffffffffff) goto LAB_0035fc7c;
      uVar20 = 0x7fefffffffffffff;
    }
    else {
      if ((uStack_d0 < 0x3400001) && (lVar10 = FUN_002919f8(uVar5,0x3ff0000000000000), -1 < lVar10))
      {
        uVar4 = FUN_00291410(uVar5,0x3fe0000000000000);
        uVar4 = FUN_00291b00(uVar4);
        uVar4 = FUN_00291a48(uVar4);
        if (iVar24 == 0) {
          uVar4 = FUN_00291468(0,uVar4);
        }
      }
      uVar6 = FUN_00366f60(uVar20);
      uVar4 = FUN_002914d0(uVar4,uVar6);
      uVar20 = FUN_00291410(uVar4,uVar20);
LAB_00360248:
      if ((ulong)uStack_d0 == ((long)uVar20 >> 0x20 & 0x7ff00000U)) {
        uVar4 = FUN_0036f0e0(uVar5,uStack_c0);
        uVar4 = FUN_002903f0(uVar4);
        uVar4 = FUN_00291468(uVar5,uVar4);
        if ((iVar24 == 0) && ((uVar20 & 0xfffffffffffff) == 0)) {
          lVar10 = FUN_002919f8(uVar4,0x3fcfffff94a03595);
          if (lVar10 < 0) goto LAB_0036052c;
        }
        else {
          lVar10 = FUN_002919f8(uVar4,0x3fdfffff94a03595);
          if ((lVar10 < 0) || (lVar10 = FUN_002919f8(uVar4,0x3fe0000035afe535), 0 < lVar10))
          goto LAB_0036052c;
        }
      }
    }
    FUN_00366510(param_1,uStack_c0);
    FUN_00366510(param_1,iStack_bc);
    FUN_00366510(param_1,uStack_b4);
    FUN_00366510(param_1,iStack_b0);
  } while( true );
switchD_0035f728_caseD_9:
  pcVar26 = pcVar26 + 1;
  goto LAB_0035f708;
}


// ==== FUN_003605b8 @ 003605b8 ====

void FUN_003605b8(undefined8 param_1,undefined8 param_2)

{
  FUN_0035f6c0(PTR_DAT_003d6944,param_1,param_2);
  return;
}


// ==== FUN_003605f0 @ 003605f0 ====

ulong FUN_003605f0(undefined4 *param_1,char *param_2,long param_3,long param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  
  bVar4 = false;
  pcVar12 = param_2;
  do {
    pcVar11 = pcVar12;
    lVar10 = (long)*pcVar11;
    pcVar12 = pcVar11 + 1;
  } while ((*(byte *)((int)&PTR_DAT_0040a991 + (int)*pcVar11) & 8) != 0);
  if (lVar10 == 0x2d) {
    cVar1 = *pcVar12;
    bVar4 = true;
  }
  else {
    if (lVar10 != 0x2b) goto LAB_00360684;
    cVar1 = *pcVar12;
  }
  lVar10 = (long)cVar1;
  pcVar12 = pcVar11 + 2;
LAB_00360684:
  if ((((param_4 == 0) || (param_4 == 0x10)) && (lVar10 == 0x30)) &&
     ((*pcVar12 == 'x' || (*pcVar12 == 'X')))) {
    lVar10 = (long)pcVar12[1];
    param_4 = 0x10;
    pcVar12 = pcVar12 + 2;
  }
  if (param_4 == 0) {
    param_4 = 10;
    if (lVar10 == 0x30) {
      param_4 = 8;
    }
  }
  iVar13 = 0;
  uVar6 = FUN_002904f0(0xffffffffffffffff,param_4);
  iVar5 = FUN_00290ac0(0xffffffffffffffff,param_4);
  uVar8 = 0;
  do {
    iVar9 = (int)lVar10;
    bVar2 = *(byte *)((int)&PTR_DAT_0040a991 + iVar9);
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 3) == 0) {
LAB_00360794:
        if (iVar13 < 0) {
          *param_1 = 0x22;
          uVar8 = 0xffffffffffffffff;
        }
        else if (bVar4) {
          uVar8 = -uVar8;
        }
        if (param_3 != 0) {
          pcVar12 = pcVar12 + -1;
          if (iVar13 == 0) {
            pcVar12 = param_2;
          }
          *(undefined4 *)param_3 = pcVar12;
        }
        return uVar8;
      }
      iVar3 = iVar9 + -0x37;
      if ((bVar2 & 1) == 0) {
        iVar3 = iVar9 + -0x57;
      }
    }
    else {
      iVar3 = iVar9 + -0x30;
    }
    lVar10 = (long)iVar3;
    if (param_4 <= lVar10) goto LAB_00360794;
    if (iVar13 < 0) {
LAB_00360740:
      iVar13 = -1;
    }
    else if (uVar6 < uVar8) {
      iVar13 = -1;
    }
    else {
      if ((uVar8 == uVar6) && (iVar5 < lVar10)) goto LAB_00360740;
      iVar13 = 1;
      lVar7 = FUN_00290488(uVar8,param_4);
      uVar8 = lVar10 + lVar7;
    }
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar12 + 1;
  } while( true );
}


// ==== FUN_00360800 @ 00360800 ====

void FUN_00360800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003605f0(PTR_DAT_003d6944,param_1,param_2,param_3);
  return;
}


// ==== FUN_00360838 @ 00360838 ====

int FUN_00360838(char *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    lVar3 = FUN_00364de0();
    lVar4 = FUN_00364de0(*param_2);
    if (lVar3 != lVar4) break;
    param_2 = param_2 + 1;
  }
  iVar1 = FUN_00364de0(*param_1);
  iVar2 = FUN_00364de0(*param_2);
  return iVar1 - iVar2;
}


// ==== FUN_003608b8 @ 003608b8 ====

char * FUN_003608b8(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (*param_1 != '\0') {
    cVar1 = *param_1;
    pcVar2 = param_1;
    while( true ) {
      if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar1) & 1) != 0) {
        cVar1 = FUN_00364de0();
        *pcVar2 = cVar1;
      }
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      cVar1 = *pcVar2;
    }
  }
  return param_1;
}


// ==== FUN_00360938 @ 00360938 ====

int FUN_00360938(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    while (param_3 = param_3 + -1, param_3 != -1) {
      lVar3 = FUN_00364de0(*param_1);
      lVar4 = FUN_00364de0(*param_2);
      if ((((lVar3 != lVar4) || (param_3 == 0)) || (*param_1 == '\0')) || (*param_2 == '\0')) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    iVar1 = FUN_00364de0(*param_1);
    iVar2 = FUN_00364de0(*param_2);
    iVar1 = iVar1 - iVar2;
  }
  return iVar1;
}


// ==== FUN_00360a00 @ 00360a00 ====

char * FUN_00360a00(char *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  cVar2 = *param_1;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (cVar2 == param_2) {
      pcVar3 = param_1;
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    cVar1 = *param_1;
  }
  if ((long)*param_1 != (long)(int)param_2) {
    param_1 = pcVar3;
  }
  return param_1;
}


// ==== FUN_00360a50 @ 00360a50 ====

char * FUN_00360a50(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_2;
  if (*param_1 == '\0') {
    pcVar1 = (char *)0x0;
    if (cVar2 == '\0') {
      pcVar1 = param_1;
    }
    return pcVar1;
  }
  while( true ) {
    if (cVar2 == '\0') {
      return param_1;
    }
    if (cVar2 == *param_1) {
      iVar3 = 1;
      while( true ) {
        if (param_2[iVar3] == '\0') {
          return param_1;
        }
        if (param_2[iVar3] != param_1[iVar3]) break;
        iVar3 = iVar3 + 1;
      }
    }
    param_1 = param_1 + 1;
    if (*param_1 == '\0') break;
    cVar2 = *param_2;
  }
  return (char *)0x0;
}


// ==== FUN_00360ac8 @ 00360ac8 ====

void FUN_00360ac8(undefined8 param_1,undefined8 param_2)

{
  FUN_00360af0(param_1,param_2,PTR_DAT_003d6944 + 0x5c);
  return;
}


// ==== FUN_00360af0 @ 00360af0 ====

char * FUN_00360af0(char *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  if (param_1 != (char *)0x0) goto LAB_00360b0c;
  pcVar2 = (char *)*param_3;
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  cVar5 = *pcVar2;
  do {
    cVar1 = *param_2;
    param_1 = pcVar2 + 1;
    pcVar4 = param_2;
    while( true ) {
      if (cVar1 == '\0') {
        if (cVar5 == '\0') {
          *param_3 = 0;
          return (char *)0x0;
        }
        cVar5 = *param_1;
        do {
          pcVar3 = param_1 + 1;
          cVar1 = *param_2;
          pcVar4 = param_2;
          while( true ) {
            pcVar4 = pcVar4 + 1;
            if (cVar1 == cVar5) {
              if (cVar1 == '\0') {
                pcVar3 = (char *)0x0;
              }
              else {
                *param_1 = '\0';
              }
              *param_3 = pcVar3;
              return pcVar2;
            }
            if (cVar1 == '\0') break;
            cVar1 = *pcVar4;
          }
          cVar5 = *pcVar3;
          param_1 = pcVar3;
        } while( true );
      }
      pcVar4 = pcVar4 + 1;
      if (cVar5 == cVar1) break;
      cVar1 = *pcVar4;
    }
LAB_00360b0c:
    pcVar2 = param_1;
    cVar5 = *pcVar2;
  } while( true );
}


// ==== FUN_00360b90 @ 00360b90 ====

char * FUN_00360b90(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (*param_1 != '\0') {
    cVar1 = *param_1;
    pcVar2 = param_1;
    while( true ) {
      if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar1) & 2) != 0) {
        cVar1 = FUN_00364e00();
        *pcVar2 = cVar1;
      }
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      cVar1 = *pcVar2;
    }
  }
  return param_1;
}


// ==== FUN_00360c10 @ 00360c10 ====

undefined4 FUN_00360c10(int param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = (int)param_2 + -1;
  if ((0 < param_2) && (pcVar1 = (char *)(param_1 + iVar2), '4' < *pcVar1)) {
    *pcVar1 = '0';
    while( true ) {
      iVar2 = iVar2 + -1;
      pcVar1 = pcVar1 + -1;
      if ((iVar2 < 1) || (*pcVar1 != '9')) break;
      *pcVar1 = '0';
    }
    pcVar1 = (char *)(param_1 + iVar2);
    if (*pcVar1 == '9') {
      return 0;
    }
    *pcVar1 = *pcVar1 + '\x01';
  }
  return 1;
}


// ==== FUN_00360c80 @ 00360c80 ====

char * FUN_00360c80(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*param_1 != '\0') {
    for (iVar4 = 1; param_1[iVar4] != '\0'; iVar4 = iVar4 + 1) {
    }
  }
  iVar4 = iVar4 + -1;
  iVar5 = 0;
  if (0 < iVar4) {
    pcVar3 = param_1 + iVar4;
    pcVar2 = param_1;
    do {
      iVar5 = iVar5 + 1;
      cVar1 = *pcVar2;
      iVar4 = iVar4 + -1;
      *pcVar2 = *pcVar3;
      *pcVar3 = cVar1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + -1;
    } while (iVar5 < iVar4);
  }
  return param_1;
}


// ==== FUN_00360cf8 @ 00360cf8 ====

/* Strings referenciadas:
     "0123456789abcdefghijklmnopqrstuvwxyz" */

void FUN_00360cf8(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1;
  if ((param_1 < 0) && (param_3 == 10)) {
    iVar2 = -param_1;
  }
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    iVar1 = iVar2 / (int)param_3;
    if (param_3 == 0) {
      trap(7);
    }
    iVar5 = (int)param_2;
    iVar4 = iVar3 + 1;
    *(char *)(iVar5 + iVar3) = s_0123456789abcdefghijklmnopqrstuv_003d6cb0[iVar2 % (int)param_3];
    if (param_3 == 0) {
      trap(7);
    }
    iVar2 = iVar1;
  } while (iVar1 != 0);
  if (param_1 < 0) {
    *(undefined1 *)(iVar5 + iVar4) = 0x2d;
    iVar4 = iVar3 + 2;
  }
  *(undefined1 *)(iVar5 + iVar4) = 0;
  FUN_00360c80(param_2);
  return;
}


// ==== FUN_00360d98 @ 00360d98 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00360d98(long param_1,int param_2,char param_3,int param_4,long param_5)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  
  uVar8 = (uint)((ulong)param_1 >> 0x34);
  if ((uVar8 & 0x7ff) == 0x7ff) {
    _DAT_00482c00 = DAT_0040b020;
    if ((((param_1 >> 0x20 & 0xfffffU) == 0) && ((int)param_1 == 0)) &&
       (_DAT_00482c00 = DAT_0040b018, (uVar8 & 0x800) != 0)) {
      _DAT_00482c00 = DAT_0040b010;
      DAT_00482c04 = DAT_0040b014;
    }
    goto LAB_00361320;
  }
  iVar14 = 0;
  lVar3 = FUN_002919f8(param_1,0);
  if (lVar3 < 0) {
    if (param_5 == 0) {
      _DAT_00482c00 = CONCAT31(_DAT_00482c01,0x2d);
      puVar15 = &DAT_00482c01;
    }
    else {
      *(undefined1 *)param_5 = 0x2d;
      puVar15 = &DAT_00482c00;
    }
    param_1 = FUN_00291468(0,param_1);
  }
  else {
    puVar15 = &DAT_00482c00;
  }
  lVar3 = FUN_002919f8(param_1,0x3ff0000000000000);
  if (-1 < lVar3) {
    uVar4 = FUN_00364f50(param_1);
    param_1 = FUN_00291468(param_1,uVar4);
    bVar2 = true;
    do {
      iVar12 = iVar14;
      iVar14 = iVar12;
      iVar11 = iVar12 + -1;
      if (!bVar2) break;
      uVar5 = FUN_00365140(uVar4,0x4024000000000000);
      uVar5 = FUN_00291b00(uVar5);
      puVar15[iVar12] = (char)uVar5 + '0';
      uVar5 = FUN_00291a48(uVar5);
      iVar14 = iVar12 + 1;
      uVar4 = FUN_00291468(uVar4,uVar5);
      uVar4 = FUN_002914d0(uVar4,0x3fb999999999999a);
      lVar3 = FUN_002919f8(uVar4,0x3ff0000000000000);
      bVar2 = iVar14 < 0xa3;
      iVar11 = iVar12;
    } while (-1 < lVar3);
    iVar12 = 0;
    if (0 < iVar11) {
      puVar10 = puVar15 + iVar11;
      puVar9 = puVar15;
      do {
        iVar12 = iVar12 + 1;
        uVar1 = *puVar9;
        iVar11 = iVar11 + -1;
        *puVar9 = *puVar10;
        *puVar10 = uVar1;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + -1;
      } while (iVar12 < iVar11);
    }
  }
  iVar12 = param_2;
  iVar11 = iVar14;
  if (iVar14 == 0) {
    if (param_3 == 'f') {
      iVar11 = 1;
      *puVar15 = 0x30;
    }
    else {
      lVar3 = FUN_002919f8(param_1,0);
      iVar13 = 0;
      if (lVar3 != 0) {
        while( true ) {
          param_1 = FUN_002914d0(param_1,0x4024000000000000);
          lVar3 = FUN_002919f8(param_1,0x3ff0000000000000);
          if ((-1 < lVar3) || (iVar13 < -0x3fc)) break;
          iVar13 = iVar13 + -1;
        }
        iVar14 = iVar13 + -1;
      }
      lVar3 = FUN_002919f8(param_1,0x3ff0000000000000);
      if (-1 < lVar3) {
        param_1 = FUN_002914d0(param_1,0x3fb999999999999a);
        iVar12 = param_2 + 1;
      }
    }
  }
  iVar13 = iVar12;
  if ((-1 < iVar14) && (iVar13 = iVar12 + 1, param_3 == 'f')) {
    iVar13 = 1;
    if (0 < iVar14) {
      iVar13 = iVar14;
    }
    iVar13 = iVar12 + iVar13;
  }
  uVar4 = 0x3c90000000000000;
  while( true ) {
    uVar5 = FUN_002914d0(param_1,0x4024000000000000);
    iVar12 = FUN_00291b00(uVar5);
    uVar6 = FUN_00291a48(iVar12);
    param_1 = FUN_00291468(uVar5,uVar6);
    uVar4 = FUN_002914d0(uVar4,0x4024000000000000);
    if ((iVar13 <= iVar11) || (lVar3 = FUN_002919f8(param_1,uVar4), lVar3 < 0)) break;
    uVar5 = FUN_00291468(0x3ff0000000000000,uVar4);
    lVar3 = FUN_002919f8(param_1,uVar5);
    if (0 < lVar3) break;
    puVar15[iVar11] = (char)iVar12 + '0';
    iVar11 = iVar11 + 1;
  }
  lVar3 = FUN_002919f8(param_1,0x3fe0000000000000);
  if (-1 < lVar3) {
    iVar12 = iVar12 + 1;
  }
  puVar15[iVar11] = (char)iVar12 + '0';
  while (iVar11 = iVar11 + 1, iVar11 <= iVar13) {
    puVar15[iVar11] = 0x30;
  }
  lVar3 = FUN_00360c10(puVar15,iVar13 + 1);
  if (lVar3 == 0) {
    *puVar15 = 0x31;
    iVar14 = iVar14 + 1;
    iVar13 = iVar13 + 1;
  }
  if (param_2 == 0) {
    iVar13 = iVar13 + -1;
  }
  else {
    iVar11 = 1;
    if ((param_3 == 'f') && (0 < iVar14)) {
      iVar11 = iVar14;
    }
    if (iVar11 < iVar13) {
      puVar9 = puVar15 + iVar13;
      iVar12 = iVar13;
      do {
        iVar12 = iVar12 + -1;
        *puVar9 = puVar9[-1];
        puVar9 = puVar9 + -1;
      } while (iVar11 < iVar12);
    }
    puVar15[iVar11] = 0x2e;
  }
  if (param_4 != 0) {
    if (iVar13 == 0) {
LAB_00361268:
      cVar7 = puVar15[iVar13];
    }
    else {
      cVar7 = puVar15[iVar13];
      if (cVar7 == '0') {
        do {
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) break;
        } while (puVar15[iVar13] == '0');
        goto LAB_00361268;
      }
    }
    if (cVar7 == '.') {
      iVar13 = iVar13 + -1;
    }
  }
  if (param_3 == 'f') {
    puVar15[iVar13 + 1] = 0;
  }
  else {
    puVar15[iVar13 + 1] = param_3;
    if (iVar14 < 0) {
      iVar11 = iVar13 + 2;
      puVar15[iVar11] = 0x2d;
      if (-10 < iVar14) {
        iVar11 = iVar13 + 3;
        puVar15[iVar11] = 0x30;
      }
      iVar14 = -iVar14;
    }
    else {
      iVar11 = iVar13 + 2;
      if (iVar14 != 0) {
        iVar14 = iVar14 + -1;
      }
      puVar15[iVar11] = 0x2b;
      if (iVar14 < 10) {
        iVar11 = iVar13 + 3;
        puVar15[iVar11] = 0x30;
      }
    }
    FUN_00360cf8(iVar14,puVar15 + iVar11 + 1,10);
  }
LAB_00361320:
  return &DAT_00482c00;
}


// ==== FUN_00361358 @ 00361358 ====

uint FUN_00361358(undefined8 param_1,undefined1 *param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  if (param_4 == 1) {
    uVar1 = FUN_00367e28(param_1,0x482ca8,DAT_003d6cd8);
    DAT_003d6cd8 = 0;
    PTR_DAT_003d6cdc = &DAT_00482ca8;
  }
  else {
    uVar1 = 0;
    puVar3 = param_2;
    if (param_3 != 0) {
      do {
        *PTR_DAT_003d6cdc = *puVar3;
        DAT_003d6cd8 = DAT_003d6cd8 + 1;
        PTR_DAT_003d6cdc = PTR_DAT_003d6cdc + 1;
        if (0x7f < DAT_003d6cd8) {
          lVar2 = FUN_00367e28(param_1,0x482ca8);
          PTR_DAT_003d6cdc = &DAT_00482ca8;
          DAT_003d6cd8 = 0;
          if (lVar2 == 0) {
            DAT_003d6cd8 = 0;
            return 0;
          }
        }
        uVar1 = uVar1 + 1;
        puVar3 = param_2 + uVar1;
      } while (uVar1 < param_3);
    }
  }
  return uVar1;
}


// ==== FUN_00361460 @ 00361460 ====

void FUN_00361460(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (*param_2 == 0) {
LAB_00361514:
    FUN_00362830(*(undefined4 *)((int)param_1 + 0x54),param_1,param_2);
    return;
  }
  bVar2 = *param_2;
  pbVar3 = param_2;
  do {
    if (bVar2 == 0x25) {
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + 1;
      if (*pbVar1 != 0) {
        for (; (char)*pbVar3 < 'A'; pbVar3 = pbVar3 + 1) {
          if (pbVar3[1] == 0) {
            bVar2 = *pbVar3;
            goto LAB_003614c0;
          }
        }
        bVar2 = *pbVar3;
LAB_003614c0:
        switch((int)((bVar2 - 0x45) * 0x1000000) >> 0x18) {
        case 0:
        case 2:
        case 7:
        case 0x20:
        case 0x21:
        case 0x22:
          FUN_00361530(*(undefined4 *)((int)param_1 + 0x54),param_1,param_2,param_3);
          return;
        default:
          pbVar3 = pbVar3 + 1;
        }
      }
    }
    else {
      pbVar3 = pbVar3 + 1;
    }
    if (*pbVar3 == 0) goto LAB_00361514;
    bVar2 = *pbVar3;
  } while( true );
}


// ==== FUN_00361530 @ 00361530 ====

/* WARNING: Type propagation algorithm not settling */
/* Strings referenciadas:
     "                00000000000000000123456789abcdef"
     "(null)"
     "0123456789ABCDEF"
     "bug in vfprintf: bad base" */

int FUN_00361530(undefined8 param_1,int *param_2,char *param_3,ulong *param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  char *pcVar20;
  ulong uVar21;
  int iVar22;
  ulong *puVar23;
  ulong *puVar24;
  char *pcVar25;
  uint uVar26;
  char acStack_250 [348];
  char acStack_f4 [4];
  char cStack_f0;
  undefined1 uStack_ef;
  char acStack_e0 [4];
  int iStack_dc;
  undefined4 uStack_d8;
  char *pcStack_d4;
  int iStack_d0;
  char *pcStack_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  uint uStack_bc;
  int *piStack_b8;
  undefined4 *puStack_b4;
  uint uStack_b0;
  
  FUN_00364e38();
  piStack_b8 = &iStack_dc;
  puStack_b4 = &uStack_d8;
  iStack_d0 = 0;
  uStack_d8 = 0;
  pcVar20 = param_3;
LAB_00361590:
  do {
    lVar12 = FUN_0035e870(PTR_DAT_003d6944,piStack_b8,param_3,DAT_003d7140,puStack_b4);
    if (lVar12 < 1) goto LAB_003615c8;
    param_3 = param_3 + (int)lVar12;
  } while (iStack_dc != 0x25);
  param_3 = param_3 + -1;
LAB_003615c8:
  iVar22 = (int)param_3 - (int)pcVar20;
  if (iVar22 != 0) {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      if (param_2[3] == 0) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      else {
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      FUN_00361358(uVar1,pcVar20,iVar22,0);
    }
    else if (iVar22 < param_2[2]) {
      FUN_0035c544(*param_2,pcVar20,iVar22);
      *param_2 = *param_2 + iVar22;
      param_2[2] = param_2[2] - iVar22;
    }
    else {
      FUN_0035c544(*param_2,pcVar20);
      iVar16 = param_2[2];
      param_2[2] = 0;
      *param_2 = *param_2 + iVar16;
    }
    iStack_d0 = iStack_d0 + iVar22;
  }
  if (lVar12 < 1) {
    uVar2 = *(ushort *)(param_2 + 3);
LAB_00362520:
    if ((uVar2 & 0x200) == 0) {
      FUN_00361358(*(undefined2 *)((int)param_2 + 0xe),0,0,1);
    }
  }
  else if ((0 < param_2[2]) || ((*(ushort *)(param_2 + 3) & 0x200) == 0)) {
    acStack_e0[0] = '\0';
    param_3 = param_3 + 1;
    pcStack_c8 = (char *)0x0;
    uVar26 = 0;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar4 = false;
    bVar7 = false;
    bVar5 = false;
    pcStack_cc = (char *)0x0;
    puVar23 = param_4;
    pcVar17 = (char *)0xffffffff;
LAB_003616ac:
    cVar11 = *param_3;
LAB_003616b0:
    lVar12 = (long)cVar11;
    param_3 = param_3 + 1;
LAB_003616b4:
    puVar24 = puVar23;
    pcVar20 = param_3;
    switch((int)lVar12) {
    case 0x20:
      goto switchD_003616d4_caseD_20;
    default:
      if (lVar12 == 0) {
        uVar2 = *(ushort *)(param_2 + 3);
        goto LAB_00362520;
      }
      uStack_b0 = uVar26 & 4;
      acStack_250[0] = (char)lVar12;
      pcVar25 = acStack_250;
      pcStack_d4 = (char *)0x1;
      acStack_e0[0] = '\0';
      param_4 = puVar23;
      goto LAB_00361d54;
    case 0x23:
      bVar9 = true;
      goto LAB_003616ac;
    case 0x27:
      bVar10 = true;
      goto LAB_003616ac;
    case 0x2a:
      puVar24 = puVar23 + 1;
      pcStack_cc = *(char **)puVar23;
      puVar23 = puVar24;
      if (-1 < (int)pcStack_cc) goto LAB_003616ac;
      pcStack_cc = (char *)-(int)pcStack_cc;
    case 0x2d:
      uVar26 = uVar26 | 4;
      puVar23 = puVar24;
      goto LAB_003616ac;
    case 0x2b:
      acStack_e0[0] = '+';
      goto LAB_003616ac;
    case 0x2e:
      cVar11 = *param_3;
      lVar12 = (long)cVar11;
      param_3 = param_3 + 1;
      if (lVar12 == 0x2a) {
        puVar24 = puVar23 + 1;
        pcVar20 = *(char **)puVar23;
        puVar23 = puVar24;
        pcVar17 = (char *)0xffffffff;
        if (-2 < (int)pcVar20) {
          pcVar17 = pcVar20;
        }
        goto LAB_003616ac;
      }
      pcVar20 = (char *)0x0;
      while ((int)cVar11 - 0x30U < 10) {
        pcVar20 = (char *)((int)pcVar20 * 10 + -0x30 + (int)lVar12);
        cVar11 = *param_3;
        lVar12 = (long)cVar11;
        param_3 = param_3 + 1;
      }
      pcVar17 = (char *)0xffffffff;
      if (-2 < (int)pcVar20) {
        pcVar17 = pcVar20;
      }
      goto LAB_003616b4;
    case 0x30:
      uVar26 = uVar26 | 0x80;
      goto LAB_003616ac;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_003616d4_caseD_31;
    case 0x44:
      bVar4 = true;
    case 100:
    case 0x69:
      if ((bVar7) || (bVar4)) {
        uVar21 = *puVar23;
      }
      else if (bVar8) {
        uVar21 = (ulong)(short)(ushort)*puVar23;
      }
      else {
        uVar21 = (ulong)(int)(uint)*puVar23;
      }
      iVar22 = 1;
      if ((long)uVar21 < 0) {
        uVar21 = -uVar21;
        acStack_e0[0] = '-';
      }
LAB_00361b98:
      param_4 = puVar23 + 1;
      if (-1 < (int)pcVar17) {
        uVar26 = uVar26 & 0xffffff7f;
      }
      pcVar25 = acStack_f4;
      pcStack_c8 = pcVar17;
      if ((uVar21 == 0) && (uStack_b0 = uVar26 & 4, pcVar17 == (char *)0x0)) break;
      uStack_b0 = uVar26 & 4;
      if (iVar22 == 1) goto joined_r0x00361c38;
      if (iVar22 != 0) {
        if (iVar22 == 2) {
          uStack_b0 = uVar26 & 4;
          do {
            uVar6 = (uint)uVar21;
            pcVar25 = pcVar25 + -1;
            uVar21 = uVar21 >> 4;
            *pcVar25 = pcStack_c0[uVar6 & 0xf];
          } while (uVar21 != 0);
          break;
        }
        uStack_b0 = uVar26 & 4;
        pcVar25 = "bug in vfprintf: bad base";
        pcStack_d4 = (char *)FUN_0035ccd8(0x40b118);
        goto LAB_00361d54;
      }
      uStack_b0 = uVar26 & 4;
      do {
        pcVar17 = pcVar25;
        pcVar25 = pcVar17 + -1;
        lVar15 = (uVar21 & 7) + 0x30;
        uVar21 = uVar21 >> 3;
        *pcVar25 = (char)lVar15;
      } while (uVar21 != 0);
      if ((bVar9) && (lVar15 != 0x30)) {
        pcVar25 = pcVar17 + -2;
        *pcVar25 = '0';
      }
      break;
    case 0x45:
    case 0x47:
    case 0x65:
    case 0x66:
    case 0x67:
      param_4 = puVar23 + 1;
      if (pcVar17 == (char *)0xffffffff) {
        pcVar17 = (char *)0x6;
      }
      uVar21 = *puVar23;
      uVar19 = 0;
      if ((lVar12 == 0x67) || (lVar12 == 0x47)) {
        lVar15 = FUN_002919f8(uVar21,0);
        if (lVar15 == 0) {
          uVar19 = 0x3ff0000000000000;
        }
        else {
          lVar15 = FUN_002919f8(uVar21,0);
          uVar13 = uVar21;
          if (lVar15 < 0) {
            uVar13 = FUN_00291468(0,uVar21);
          }
          uVar19 = FUN_00365ba0(uVar13);
        }
        lVar15 = FUN_002919f8(uVar19,0xc010000000000000);
        if (lVar15 < 0) {
LAB_0036193c:
          bVar4 = lVar12 != 0x67;
          lVar12 = 0x65;
          if (bVar4) {
            lVar12 = 0x45;
          }
        }
        else {
          uVar14 = FUN_00291a48(pcVar17);
          lVar15 = FUN_002919f8(uVar19,uVar14);
          if (-1 < lVar15) goto LAB_0036193c;
          lVar12 = 0x66;
        }
        uVar19 = 1;
      }
      if ((bVar9) && (uVar19 = 0, pcVar17 == (char *)0x0)) {
        pcVar17 = (char *)0x1;
      }
      pcVar25 = (char *)FUN_00360d98(uVar21,pcVar17,lVar12,uVar19,acStack_e0);
      uStack_b0 = uVar26 & 4;
      pcStack_d4 = (char *)FUN_0035ccd8(pcVar25);
      if (!bVar10) goto LAB_00361d54;
      pcVar18 = pcVar25 + (int)pcStack_d4;
      pcVar17 = pcVar25;
      goto LAB_00361d10;
    case 0x4c:
      goto LAB_003616ac;
    case 0x4f:
      bVar4 = true;
    case 0x6f:
      if ((bVar7) || (bVar4)) {
        uVar21 = *puVar23;
      }
      else if (bVar8) {
        uVar21 = (ulong)(ushort)*puVar23;
      }
      else {
        uVar21 = (ulong)(uint)*puVar23;
      }
      iVar22 = 0;
LAB_00361b94:
      acStack_e0[0] = '\0';
      goto LAB_00361b98;
    case 0x55:
      bVar4 = true;
    case 0x75:
      if ((bVar7) || (bVar4)) {
        uVar21 = *puVar23;
      }
      else if (bVar8) {
        uVar21 = (ulong)(ushort)*puVar23;
      }
      else {
        uVar21 = (ulong)(uint)*puVar23;
      }
      iVar22 = 1;
      goto LAB_00361b94;
    case 0x58:
      pcStack_c0 = "0123456789ABCDEF";
      goto LAB_00361b44;
    case 99:
      param_4 = puVar23 + 1;
      acStack_250[0] = (char)*puVar23;
      uStack_b0 = uVar26 & 4;
      pcVar25 = acStack_250;
      pcStack_d4 = (char *)0x1;
      acStack_e0[0] = '\0';
      goto LAB_00361d54;
    case 0x68:
      bVar8 = true;
      goto LAB_003616ac;
    case 0x6c:
      if (*param_3 == 'l') {
        param_3 = param_3 + 1;
        goto switchD_003616d4_caseD_71;
      }
      bVar4 = true;
      goto LAB_003616ac;
    case 0x6e:
      if (bVar7) {
        param_4 = puVar23 + 1;
        **(long **)puVar23 = (long)iStack_d0;
      }
      else if (bVar4) {
        param_4 = puVar23 + 1;
        **(long **)puVar23 = (long)iStack_d0;
      }
      else if (bVar8) {
        param_4 = puVar23 + 1;
        **(undefined2 **)puVar23 = (short)iStack_d0;
      }
      else {
        param_4 = puVar23 + 1;
        **(int **)puVar23 = iStack_d0;
      }
      goto LAB_00361590;
    case 0x70:
      iVar22 = 2;
      pcStack_c0 = "0123456789abcdef";
      bVar5 = true;
      lVar12 = 0x78;
      uVar21 = (ulong)(int)(uint)*puVar23;
      goto LAB_00361b94;
    case 0x71:
switchD_003616d4_caseD_71:
      bVar7 = true;
      goto LAB_003616ac;
    case 0x73:
      param_4 = puVar23 + 1;
      pcVar25 = *(char **)puVar23;
      if (pcVar25 == (char *)0x0) {
        pcVar25 = "(null)";
      }
      if ((int)pcVar17 < 0) {
        pcStack_d4 = (char *)FUN_0035ccd8(pcVar25);
      }
      else {
        lVar15 = FUN_00364e60(pcVar25,0,pcVar17);
        pcStack_d4 = (char *)((int)lVar15 - (int)pcVar25);
        if ((lVar15 == 0) || ((int)pcVar17 < (int)pcStack_d4)) {
          pcStack_d4 = pcVar17;
        }
      }
      uStack_b0 = uVar26 & 4;
      acStack_e0[0] = '\0';
      goto LAB_00361d54;
    case 0x78:
      pcStack_c0 = "0123456789abcdef";
LAB_00361b44:
      if ((bVar7) || (bVar4)) {
        uVar21 = *puVar23;
      }
      else if (bVar8) {
        uVar21 = (ulong)(ushort)*puVar23;
      }
      else {
        uVar21 = (ulong)(uint)*puVar23;
      }
      iVar22 = 2;
      if ((bVar9) && (uVar21 != 0)) {
        bVar5 = true;
      }
      goto LAB_00361b94;
    }
    goto LAB_00361cf0;
  }
  return iStack_d0;
joined_r0x00361c38:
  while (9 < uVar21) {
    cVar11 = FUN_00290ac0(uVar21,10);
    pcVar25 = pcVar25 + -1;
    *pcVar25 = cVar11 + '0';
    uVar21 = FUN_002904f0(uVar21,10);
  }
  pcVar25 = pcVar25 + -1;
  *pcVar25 = (char)uVar21 + '0';
LAB_00361cf0:
  if ((iVar22 == 1) && (bVar10)) {
    pcVar18 = acStack_f4;
    pcVar17 = acStack_250;
LAB_00361d10:
    param_4 = puVar23 + 1;
    pcVar25 = (char *)FUN_00362578(pcVar17,pcVar25,pcVar18,&pcStack_d4);
  }
  else {
    pcStack_d4 = acStack_f4 + -(int)pcVar25;
  }
LAB_00361d54:
  pcStack_c4 = pcStack_c8;
  if ((int)pcStack_c8 <= (int)pcStack_d4) {
    pcStack_c4 = pcStack_d4;
  }
  if (acStack_e0[0] == '\0') {
    pcStack_c4 = pcStack_c4 + (uint)bVar5 * 2;
  }
  else {
    pcStack_c4 = pcStack_c4 + 1;
  }
  uStack_bc = (uint)((int)pcStack_c4 < (int)pcStack_cc);
  if (uVar26 == 0) {
    iVar22 = (int)pcStack_cc - (int)pcStack_c4;
    if (0 < iVar22) {
      if (0x10 < iVar22) {
        uVar2 = *(ushort *)(param_2 + 3);
        while( true ) {
          uVar19 = s_00000000000000000123456789abcdef_0040b0c0._8_8_;
          if ((uVar2 & 0x200) == 0) {
            if (param_2[3] == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              uVar1 = *(undefined2 *)((int)param_2 + 0xe);
            }
            else {
              uVar1 = *(undefined2 *)((int)param_2 + 0xe);
            }
            FUN_00361358(uVar1,0x40b0c0,0x10,0);
          }
          else if (param_2[2] < 0x11) {
            FUN_0035c544(*param_2,0x40b0c0);
            iVar16 = param_2[2];
            param_2[2] = 0;
            *param_2 = *param_2 + iVar16;
          }
          else {
            pcVar17 = (char *)*param_2;
            *(undefined8 *)pcVar17 = s_00000000000000000123456789abcdef_0040b0c0._0_8_;
            *(undefined8 *)(pcVar17 + 8) = uVar19;
            *param_2 = *param_2 + 0x10;
            param_2[2] = param_2[2] + -0x10;
          }
          iVar22 = iVar22 + -0x10;
          if (iVar22 < 0x11) break;
          uVar2 = *(ushort *)(param_2 + 3);
        }
      }
      if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
        if (param_2[3] == 0) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        else {
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        FUN_00361358(uVar1,0x40b0c0,iVar22,0);
      }
      else if (iVar22 < param_2[2]) {
        FUN_0035c544(*param_2,0x40b0c0,iVar22);
        *param_2 = *param_2 + iVar22;
        param_2[2] = param_2[2] - iVar22;
      }
      else {
        FUN_0035c544(*param_2,0x40b0c0);
        iVar22 = param_2[2];
        param_2[2] = 0;
        *param_2 = *param_2 + iVar22;
      }
    }
  }
  if (acStack_e0[0] == '\0') {
    if (!bVar5) goto LAB_00362030;
    cStack_f0 = '0';
    uStack_ef = (undefined1)lVar12;
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      if (param_2[3] == 0) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      else {
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      FUN_00361358(uVar1,&cStack_f0,2,0);
      goto LAB_00362030;
    }
    if (2 < param_2[2]) {
      puVar3 = (undefined1 *)*param_2;
      *puVar3 = 0x30;
      puVar3[1] = uStack_ef;
      iVar16 = *param_2 + 2;
      iVar22 = param_2[2] + -2;
      goto LAB_00361fd4;
    }
    iVar22 = *param_2;
    pcVar17 = &cStack_f0;
  }
  else {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      if (param_2[3] == 0) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      else {
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      FUN_00361358(uVar1,acStack_e0,1,0);
      goto LAB_00362030;
    }
    if (1 < param_2[2]) {
      *(char *)*param_2 = acStack_e0[0];
      iVar16 = *param_2 + 1;
      iVar22 = param_2[2] + -1;
LAB_00361fd4:
      *param_2 = iVar16;
      param_2[2] = iVar22;
      goto LAB_00362030;
    }
    iVar22 = *param_2;
    pcVar17 = acStack_e0;
  }
  FUN_0035c544(iVar22,pcVar17);
  iVar22 = param_2[2];
  param_2[2] = 0;
  *param_2 = *param_2 + iVar22;
LAB_00362030:
  if (uVar26 == 0x80) {
    iVar22 = (int)pcStack_cc - (int)pcStack_c4;
    if (0 < iVar22) {
      if (0x10 < iVar22) {
        uVar2 = *(ushort *)(param_2 + 3);
        while( true ) {
          uVar19 = s_00000000000000000123456789abcdef_0040b0c0._24_8_;
          if ((uVar2 & 0x200) == 0) {
            if (param_2[3] == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
            }
            FUN_00361358(*(undefined2 *)((int)param_2 + 0xe),0x40b0d0,0x10,0);
          }
          else if (param_2[2] < 0x11) {
            FUN_0035c544(*param_2,0x40b0d0);
            iVar16 = param_2[2];
            param_2[2] = 0;
            *param_2 = *param_2 + iVar16;
          }
          else {
            pcVar17 = (char *)*param_2;
            *(undefined8 *)pcVar17 = s_00000000000000000123456789abcdef_0040b0c0._16_8_;
            *(undefined8 *)(pcVar17 + 8) = uVar19;
            *param_2 = *param_2 + 0x10;
            param_2[2] = param_2[2] + -0x10;
          }
          iVar22 = iVar22 + -0x10;
          if (iVar22 < 0x11) break;
          uVar2 = *(ushort *)(param_2 + 3);
        }
      }
      if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
        if (param_2[3] == 0) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        else {
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        FUN_00361358(uVar1,0x40b0d0,iVar22,0);
      }
      else if (iVar22 < param_2[2]) {
        FUN_0035c544(*param_2,0x40b0d0,iVar22);
        *param_2 = *param_2 + iVar22;
        param_2[2] = param_2[2] - iVar22;
      }
      else {
        FUN_0035c544(*param_2,0x40b0d0);
        iVar22 = param_2[2];
        param_2[2] = 0;
        *param_2 = *param_2 + iVar22;
      }
    }
  }
  iVar22 = (int)pcStack_c8 - (int)pcStack_d4;
  if (0 < iVar22) {
    if (0x10 < iVar22) {
      uVar2 = *(ushort *)(param_2 + 3);
      while( true ) {
        uVar19 = s_00000000000000000123456789abcdef_0040b0c0._24_8_;
        if ((uVar2 & 0x200) == 0) {
          if (param_2[3] == 0) {
            *(undefined2 *)((int)param_2 + 0xe) = 1;
          }
          FUN_00361358(*(undefined2 *)((int)param_2 + 0xe),0x40b0d0,0x10,0);
        }
        else if (param_2[2] < 0x11) {
          FUN_0035c544(*param_2,0x40b0d0);
          iVar16 = param_2[2];
          param_2[2] = 0;
          *param_2 = *param_2 + iVar16;
        }
        else {
          pcVar17 = (char *)*param_2;
          *(undefined8 *)pcVar17 = s_00000000000000000123456789abcdef_0040b0c0._16_8_;
          *(undefined8 *)(pcVar17 + 8) = uVar19;
          *param_2 = *param_2 + 0x10;
          param_2[2] = param_2[2] + -0x10;
        }
        iVar22 = iVar22 + -0x10;
        if (iVar22 < 0x11) break;
        uVar2 = *(ushort *)(param_2 + 3);
      }
    }
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      if (param_2[3] == 0) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      else {
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      FUN_00361358(uVar1,0x40b0d0,iVar22,0);
    }
    else if (iVar22 < param_2[2]) {
      FUN_0035c544(*param_2,0x40b0d0,iVar22);
      *param_2 = *param_2 + iVar22;
      param_2[2] = param_2[2] - iVar22;
    }
    else {
      FUN_0035c544(*param_2,0x40b0d0);
      iVar22 = param_2[2];
      param_2[2] = 0;
      *param_2 = *param_2 + iVar22;
    }
  }
  if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
    if (param_2[3] == 0) {
      *(undefined2 *)((int)param_2 + 0xe) = 1;
      uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    }
    else {
      uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    }
    FUN_00361358(uVar1,pcVar25,pcStack_d4,0);
  }
  else if ((int)pcStack_d4 < param_2[2]) {
    FUN_0035c544(*param_2,pcVar25);
    *param_2 = (int)(pcStack_d4 + *param_2);
    param_2[2] = param_2[2] - (int)pcStack_d4;
  }
  else {
    FUN_0035c544(*param_2,pcVar25,param_2[2]);
    iVar22 = param_2[2];
    param_2[2] = 0;
    *param_2 = *param_2 + iVar22;
  }
  if (uStack_b0 != 0) {
    iVar22 = (int)pcStack_cc - (int)pcStack_c4;
    if (0 < iVar22) {
      if (0x10 < iVar22) {
        uVar2 = *(ushort *)(param_2 + 3);
        while( true ) {
          uVar19 = s_00000000000000000123456789abcdef_0040b0c0._8_8_;
          if ((uVar2 & 0x200) == 0) {
            if (param_2[3] == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
            }
            FUN_00361358(*(undefined2 *)((int)param_2 + 0xe),0x40b0c0,0x10,0);
          }
          else if (param_2[2] < 0x11) {
            FUN_0035c544(*param_2,0x40b0c0);
            iVar16 = param_2[2];
            param_2[2] = 0;
            *param_2 = *param_2 + iVar16;
          }
          else {
            pcVar17 = (char *)*param_2;
            *(undefined8 *)pcVar17 = s_00000000000000000123456789abcdef_0040b0c0._0_8_;
            *(undefined8 *)(pcVar17 + 8) = uVar19;
            *param_2 = *param_2 + 0x10;
            param_2[2] = param_2[2] + -0x10;
          }
          iVar22 = iVar22 + -0x10;
          if (iVar22 < 0x11) break;
          uVar2 = *(ushort *)(param_2 + 3);
        }
      }
      if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
        if (param_2[3] == 0) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        else {
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        FUN_00361358(uVar1,0x40b0c0,iVar22,0);
      }
      else if (iVar22 < param_2[2]) {
        FUN_0035c544(*param_2,0x40b0c0,iVar22);
        *param_2 = *param_2 + iVar22;
        param_2[2] = param_2[2] - iVar22;
      }
      else {
        FUN_0035c544(*param_2,0x40b0c0);
        iVar22 = param_2[2];
        param_2[2] = 0;
        *param_2 = *param_2 + iVar22;
      }
    }
  }
  pcVar17 = pcStack_cc;
  if (uStack_bc == 0) {
    pcVar17 = pcStack_c4;
  }
  iStack_d0 = iStack_d0 + (int)pcVar17;
  goto LAB_00361590;
switchD_003616d4_caseD_31:
  pcStack_cc = (char *)0x0;
  do {
    pcStack_cc = (char *)((int)pcStack_cc * 10 + -0x30 + (int)lVar12);
    cVar11 = *param_3;
    lVar12 = (long)cVar11;
    param_3 = param_3 + 1;
  } while ((int)cVar11 - 0x30U < 10);
  goto LAB_003616b4;
switchD_003616d4_caseD_20:
  if (acStack_e0[0] == '\0') goto code_r0x003616e8;
  cVar11 = *param_3;
  goto LAB_003616b0;
code_r0x003616e8:
  acStack_e0[0] = ' ';
  goto LAB_003616ac;
}


// ==== FUN_00362578 @ 00362578 ====

/* WARNING: Removing unreachable block (ram,0x003626ac) */

char * FUN_00362578(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iStack_80;
  char *pcStack_7c;
  char acStack_77 [39];
  
  pcVar6 = param_3 + (10 - (int)param_2);
  iVar5 = 0;
  pcVar4 = acStack_77 + (int)(pcVar6 + ((uint)(param_3 + (0x19 - (int)param_2)) >> 4) * -0x10 + -10)
  ;
  if (param_1 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      return (char *)0x0;
    }
    if (param_3 != (char *)0x0) {
      iStack_80 = 0;
      pcStack_7c = param_3;
      if (param_2 <= param_3) {
        cVar2 = *param_2;
        pcVar3 = param_2;
        while( true ) {
          if (cVar2 == 'E') {
            iStack_80 = 2;
          }
          else if (cVar2 < 'F') {
            if ((cVar2 == '.') && (pcStack_7c = pcVar3, iStack_80 == 0)) {
              iStack_80 = 1;
            }
          }
          else if (cVar2 == 'e') {
            iStack_80 = 2;
          }
          pcVar3 = pcVar3 + 1;
          if ((param_3 < pcVar3) || (iStack_80 == 2)) break;
          cVar2 = *pcVar3;
        }
      }
      if (iStack_80 == 2) {
        return param_2;
      }
      if (param_2 < param_3) {
        cVar2 = *param_3;
        while( true ) {
          *pcVar4 = cVar2;
          pcVar3 = pcVar4 + -1;
          if (param_3 <= pcStack_7c) {
            if (iVar5 % 3 == 0) {
              bVar1 = iVar5 != 0;
              iVar5 = iVar5 + 1;
              if (bVar1) {
                *pcVar3 = ',';
                pcVar6 = pcVar6 + 1;
                pcVar3 = pcVar4 + -2;
              }
            }
            else {
              iVar5 = iVar5 + 1;
            }
          }
          pcVar4 = pcVar3;
          param_3 = param_3 + -1;
          if (param_3 <= param_2) break;
          cVar2 = *param_3;
        }
      }
      *pcVar4 = *param_3;
      FUN_0035c544(param_1,pcVar4,pcVar6 + -10);
      *param_4 = pcVar6 + -10;
      return param_1;
    }
  }
  return (char *)0x0;
}


// ==== FUN_00362728 @ 00362728 ====

uint FUN_00362728(undefined8 param_1,undefined1 *param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  if (param_4 == 1) {
    uVar1 = FUN_00367e28(param_1,0x482d28,DAT_003d6ce0);
    DAT_003d6ce0 = 0;
    PTR_DAT_003d6ce4 = &DAT_00482d28;
  }
  else {
    uVar1 = 0;
    puVar3 = param_2;
    if (param_3 != 0) {
      do {
        *PTR_DAT_003d6ce4 = *puVar3;
        DAT_003d6ce0 = DAT_003d6ce0 + 1;
        PTR_DAT_003d6ce4 = PTR_DAT_003d6ce4 + 1;
        if (0x7f < DAT_003d6ce0) {
          lVar2 = FUN_00367e28(param_1,0x482d28);
          PTR_DAT_003d6ce4 = &DAT_00482d28;
          DAT_003d6ce0 = 0;
          if (lVar2 == 0) {
            DAT_003d6ce0 = 0;
            return 0;
          }
        }
        uVar1 = uVar1 + 1;
        puVar3 = param_2 + uVar1;
      } while (uVar1 < param_3);
    }
  }
  return uVar1;
}


// ==== FUN_00362830 @ 00362830 ====

/* WARNING: Type propagation algorithm not settling */
/* Strings referenciadas:
     "                00000000000000000123456789abcdef"
     "(null)"
     "0123456789ABCDEF"
     "bug in vfprintf: bad base" */

int FUN_00362830(undefined8 param_1,int *param_2,char *param_3,ulong *param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  ulong *puVar21;
  ulong *puVar22;
  char *pcVar23;
  char acStack_120 [40];
  char acStack_f8 [8];
  char cStack_f0;
  undefined1 uStack_ef;
  char acStack_e0 [4];
  int iStack_dc;
  undefined4 uStack_d8;
  char *pcStack_d4;
  int iStack_d0;
  char *pcStack_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  uint uStack_bc;
  int *piStack_b8;
  undefined4 *puStack_b4;
  uint uStack_b0;
  
  piStack_b8 = &iStack_dc;
  puStack_b4 = &uStack_d8;
  uStack_d8 = 0;
  iStack_d0 = 0;
  pcVar17 = param_3;
LAB_00362888:
  do {
    lVar13 = FUN_0035e870(PTR_DAT_003d6944,piStack_b8,param_3,DAT_003d7140,puStack_b4);
    if (lVar13 < 1) goto LAB_003628c0;
    param_3 = param_3 + (int)lVar13;
  } while (iStack_dc != 0x25);
  param_3 = param_3 + -1;
LAB_003628c0:
  iVar19 = (int)param_3 - (int)pcVar17;
  if (iVar19 != 0) {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      if (param_2[3] == 0) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      else {
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      FUN_00362728(uVar1,pcVar17,iVar19,0);
    }
    else if (iVar19 < param_2[2]) {
      FUN_0035c544(*param_2,pcVar17,iVar19);
      *param_2 = *param_2 + iVar19;
      param_2[2] = param_2[2] - iVar19;
    }
    else {
      FUN_0035c544(*param_2,pcVar17);
      iVar15 = param_2[2];
      param_2[2] = 0;
      *param_2 = *param_2 + iVar15;
    }
    iStack_d0 = iStack_d0 + iVar19;
  }
  if (lVar13 < 1) {
    uVar2 = *(ushort *)(param_2 + 3);
LAB_003636e0:
    if ((uVar2 & 0x200) == 0) {
      FUN_00362728(*(undefined2 *)((int)param_2 + 0xe),0,0,1);
    }
  }
  else if ((0 < param_2[2]) || ((*(ushort *)(param_2 + 3) & 0x200) == 0)) {
    acStack_e0[0] = '\0';
    param_3 = param_3 + 1;
    pcStack_c8 = (char *)0x0;
    uVar20 = 0;
    bVar6 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar5 = false;
    pcStack_cc = (char *)0x0;
    puVar21 = param_4;
    pcVar16 = (char *)0xffffffff;
LAB_003629a4:
    cVar12 = *param_3;
LAB_003629a8:
    lVar13 = (long)cVar12;
    param_3 = param_3 + 1;
LAB_003629ac:
    puVar22 = puVar21;
    pcVar17 = param_3;
    switch((int)lVar13) {
    case 0x20:
      goto switchD_003629cc_caseD_20;
    default:
      if (lVar13 == 0) {
        uVar2 = *(ushort *)(param_2 + 3);
        goto LAB_003636e0;
      }
      acStack_120[0] = (char)lVar13;
      pcStack_d4 = (char *)0x1;
      param_4 = puVar21;
      pcVar23 = acStack_120;
      break;
    case 0x23:
      bVar10 = true;
      goto LAB_003629a4;
    case 0x27:
      bVar6 = true;
      goto LAB_003629a4;
    case 0x2a:
      puVar22 = puVar21 + 1;
      pcStack_cc = *(char **)puVar21;
      puVar21 = puVar22;
      if ((int)pcStack_cc < 0) {
        pcStack_cc = (char *)-(int)pcStack_cc;
        goto switchD_003629cc_caseD_2d;
      }
      goto LAB_003629a4;
    case 0x2b:
      acStack_e0[0] = '+';
      goto LAB_003629a4;
    case 0x2d:
switchD_003629cc_caseD_2d:
      uVar20 = uVar20 | 4;
      puVar21 = puVar22;
      goto LAB_003629a4;
    case 0x2e:
      cVar12 = *param_3;
      lVar13 = (long)cVar12;
      param_3 = param_3 + 1;
      if (lVar13 == 0x2a) {
        puVar22 = puVar21 + 1;
        pcVar17 = *(char **)puVar21;
        puVar21 = puVar22;
        pcVar16 = (char *)0xffffffff;
        if (-2 < (int)pcVar17) {
          pcVar16 = pcVar17;
        }
        goto LAB_003629a4;
      }
      pcVar17 = (char *)0x0;
      while ((int)cVar12 - 0x30U < 10) {
        pcVar17 = (char *)((int)pcVar17 * 10 + -0x30 + (int)lVar13);
        cVar12 = *param_3;
        lVar13 = (long)cVar12;
        param_3 = param_3 + 1;
      }
      pcVar16 = (char *)0xffffffff;
      if (-2 < (int)pcVar17) {
        pcVar16 = pcVar17;
      }
      goto LAB_003629ac;
    case 0x30:
      uVar20 = uVar20 | 0x80;
      goto LAB_003629a4;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_003629cc_caseD_31;
    case 0x44:
      bVar8 = true;
    case 100:
    case 0x69:
      if ((bVar7) || (bVar8)) {
        uVar18 = *puVar21;
      }
      else if (bVar9) {
        uVar18 = (ulong)(short)(ushort)*puVar21;
      }
      else {
        uVar18 = (ulong)(int)(uint)*puVar21;
      }
      iVar19 = 1;
      if ((long)uVar18 < 0) {
        uVar18 = -uVar18;
        acStack_e0[0] = '-';
      }
LAB_00362d58:
      param_4 = puVar21 + 1;
      if (-1 < (int)pcVar16) {
        uVar20 = uVar20 & 0xffffff7f;
      }
      pcVar23 = acStack_f8;
      pcStack_c8 = pcVar16;
      if ((uVar18 == 0) && (uStack_b0 = uVar20 & 4, pcVar16 == (char *)0x0)) goto LAB_00362eb8;
      uStack_b0 = uVar20 & 4;
      if (iVar19 == 1) goto joined_r0x00362e00;
      if (iVar19 != 0) {
        if (iVar19 == 2) {
          uStack_b0 = uVar20 & 4;
          do {
            uVar4 = (uint)uVar18;
            pcVar23 = pcVar23 + -1;
            uVar18 = uVar18 >> 4;
            *pcVar23 = pcStack_c0[uVar4 & 0xf];
          } while (uVar18 != 0);
          goto LAB_00362eb8;
        }
        uStack_b0 = uVar20 & 4;
        pcStack_d4 = (char *)FUN_0035ccd8(0x40b308);
        pcVar23 = "bug in vfprintf: bad base";
        goto LAB_00362f18;
      }
      uStack_b0 = uVar20 & 4;
      do {
        pcVar16 = pcVar23;
        pcVar23 = pcVar16 + -1;
        lVar14 = (uVar18 & 7) + 0x30;
        uVar18 = uVar18 >> 3;
        *pcVar23 = (char)lVar14;
      } while (uVar18 != 0);
      if ((bVar10) && (lVar14 != 0x30)) {
        pcVar23 = pcVar16 + -2;
        *pcVar23 = '0';
      }
      goto LAB_00362eb8;
    case 0x4f:
      bVar8 = true;
    case 0x6f:
      if ((bVar7) || (bVar8)) {
        uVar18 = *puVar21;
      }
      else if (bVar9) {
        uVar18 = (ulong)(ushort)*puVar21;
      }
      else {
        uVar18 = (ulong)(uint)*puVar21;
      }
      iVar19 = 0;
LAB_00362d54:
      acStack_e0[0] = '\0';
      goto LAB_00362d58;
    case 0x55:
      bVar8 = true;
    case 0x75:
      if ((bVar7) || (bVar8)) {
        uVar18 = *puVar21;
      }
      else if (bVar9) {
        uVar18 = (ulong)(ushort)*puVar21;
      }
      else {
        uVar18 = (ulong)(uint)*puVar21;
      }
      iVar19 = 1;
      goto LAB_00362d54;
    case 0x58:
      pcStack_c0 = "0123456789ABCDEF";
      goto LAB_00362d04;
    case 99:
      param_4 = puVar21 + 1;
      acStack_120[0] = (char)*puVar21;
      uStack_b0 = uVar20 & 4;
      pcStack_d4 = (char *)0x1;
      acStack_e0[0] = '\0';
      pcVar23 = acStack_120;
      goto LAB_00362f18;
    case 0x68:
      bVar9 = true;
      goto LAB_003629a4;
    case 0x6c:
      if (*param_3 == 'l') {
        param_3 = param_3 + 1;
        goto switchD_003629cc_caseD_71;
      }
      bVar8 = true;
      goto LAB_003629a4;
    case 0x6e:
      if (bVar7) {
        param_4 = puVar21 + 1;
        **(long **)puVar21 = (long)iStack_d0;
      }
      else if (bVar8) {
        param_4 = puVar21 + 1;
        **(long **)puVar21 = (long)iStack_d0;
      }
      else if (bVar9) {
        param_4 = puVar21 + 1;
        **(undefined2 **)puVar21 = (short)iStack_d0;
      }
      else {
        param_4 = puVar21 + 1;
        **(int **)puVar21 = iStack_d0;
      }
      goto LAB_00362888;
    case 0x70:
      iVar19 = 2;
      pcStack_c0 = "0123456789abcdef";
      bVar5 = true;
      lVar13 = 0x78;
      uVar18 = (ulong)(int)(uint)*puVar21;
      goto LAB_00362d54;
    case 0x71:
switchD_003629cc_caseD_71:
      bVar7 = true;
      goto LAB_003629a4;
    case 0x73:
      param_4 = puVar21 + 1;
      pcVar23 = *(char **)puVar21;
      if (pcVar23 == (char *)0x0) {
        pcVar23 = "(null)";
      }
      if ((int)pcVar16 < 0) {
        pcStack_d4 = (char *)FUN_0035ccd8(pcVar23);
      }
      else {
        lVar14 = FUN_00364e60(pcVar23,0,pcVar16);
        pcStack_d4 = (char *)((int)lVar14 - (int)pcVar23);
        if ((lVar14 == 0) || ((int)pcVar16 < (int)pcStack_d4)) {
          pcStack_d4 = pcVar16;
        }
      }
      break;
    case 0x78:
      pcStack_c0 = "0123456789abcdef";
LAB_00362d04:
      if ((bVar7) || (bVar8)) {
        uVar18 = *puVar21;
      }
      else if (bVar9) {
        uVar18 = (ulong)(ushort)*puVar21;
      }
      else {
        uVar18 = (ulong)(uint)*puVar21;
      }
      iVar19 = 2;
      if ((bVar10) && (uVar18 != 0)) {
        bVar5 = true;
      }
      goto LAB_00362d54;
    }
    acStack_e0[0] = '\0';
    uStack_b0 = uVar20 & 4;
    goto LAB_00362f18;
  }
  return iStack_d0;
joined_r0x00362e00:
  while (9 < uVar18) {
    cVar12 = FUN_00290ac0(uVar18,10);
    pcVar23 = pcVar23 + -1;
    *pcVar23 = cVar12 + '0';
    uVar18 = FUN_002904f0(uVar18,10);
  }
  pcVar23 = pcVar23 + -1;
  *pcVar23 = (char)uVar18 + '0';
LAB_00362eb8:
  if ((iVar19 == 1) && (bVar6)) {
    pcVar23 = (char *)FUN_00362578(acStack_120,pcVar23,acStack_f8,&pcStack_d4);
  }
  else {
    pcStack_d4 = acStack_120 + -(int)(pcVar23 + -0x28);
  }
LAB_00362f18:
  pcStack_c4 = pcStack_c8;
  if ((int)pcStack_c8 <= (int)pcStack_d4) {
    pcStack_c4 = pcStack_d4;
  }
  if (acStack_e0[0] == '\0') {
    pcStack_c4 = pcStack_c4 + (uint)bVar5 * 2;
  }
  else {
    pcStack_c4 = pcStack_c4 + 1;
  }
  uStack_bc = (uint)((int)pcStack_c4 < (int)pcStack_cc);
  if (uVar20 == 0) {
    iVar19 = (int)pcStack_cc - (int)pcStack_c4;
    if (0 < iVar19) {
      if (0x10 < iVar19) {
        uVar2 = *(ushort *)(param_2 + 3);
        while( true ) {
          uVar11 = s_00000000000000000123456789abcdef_0040b2b0._8_8_;
          if ((uVar2 & 0x200) == 0) {
            if (param_2[3] == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              uVar1 = *(undefined2 *)((int)param_2 + 0xe);
            }
            else {
              uVar1 = *(undefined2 *)((int)param_2 + 0xe);
            }
            FUN_00362728(uVar1,0x40b2b0,0x10,0);
          }
          else if (param_2[2] < 0x11) {
            FUN_0035c544(*param_2,0x40b2b0);
            iVar15 = param_2[2];
            param_2[2] = 0;
            *param_2 = *param_2 + iVar15;
          }
          else {
            pcVar16 = (char *)*param_2;
            *(undefined8 *)pcVar16 = s_00000000000000000123456789abcdef_0040b2b0._0_8_;
            *(undefined8 *)(pcVar16 + 8) = uVar11;
            *param_2 = *param_2 + 0x10;
            param_2[2] = param_2[2] + -0x10;
          }
          iVar19 = iVar19 + -0x10;
          if (iVar19 < 0x11) break;
          uVar2 = *(ushort *)(param_2 + 3);
        }
      }
      if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
        if (param_2[3] == 0) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        else {
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        FUN_00362728(uVar1,0x40b2b0,iVar19,0);
      }
      else if (iVar19 < param_2[2]) {
        FUN_0035c544(*param_2,0x40b2b0,iVar19);
        *param_2 = *param_2 + iVar19;
        param_2[2] = param_2[2] - iVar19;
      }
      else {
        FUN_0035c544(*param_2,0x40b2b0);
        iVar19 = param_2[2];
        param_2[2] = 0;
        *param_2 = *param_2 + iVar19;
      }
    }
  }
  if (acStack_e0[0] == '\0') {
    if (!bVar5) goto LAB_003631f0;
    cStack_f0 = '0';
    uStack_ef = (undefined1)lVar13;
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      if (param_2[3] == 0) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      else {
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      FUN_00362728(uVar1,&cStack_f0,2,0);
      goto LAB_003631f0;
    }
    if (2 < param_2[2]) {
      puVar3 = (undefined1 *)*param_2;
      *puVar3 = 0x30;
      puVar3[1] = uStack_ef;
      iVar15 = *param_2 + 2;
      iVar19 = param_2[2] + -2;
      goto LAB_00363194;
    }
    iVar19 = *param_2;
    pcVar16 = &cStack_f0;
  }
  else {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      if (param_2[3] == 0) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      else {
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      FUN_00362728(uVar1,acStack_e0,1,0);
      goto LAB_003631f0;
    }
    if (1 < param_2[2]) {
      *(char *)*param_2 = acStack_e0[0];
      iVar15 = *param_2 + 1;
      iVar19 = param_2[2] + -1;
LAB_00363194:
      *param_2 = iVar15;
      param_2[2] = iVar19;
      goto LAB_003631f0;
    }
    iVar19 = *param_2;
    pcVar16 = acStack_e0;
  }
  FUN_0035c544(iVar19,pcVar16);
  iVar19 = param_2[2];
  param_2[2] = 0;
  *param_2 = *param_2 + iVar19;
LAB_003631f0:
  if (uVar20 == 0x80) {
    iVar19 = (int)pcStack_cc - (int)pcStack_c4;
    if (0 < iVar19) {
      if (0x10 < iVar19) {
        uVar2 = *(ushort *)(param_2 + 3);
        while( true ) {
          uVar11 = s_00000000000000000123456789abcdef_0040b2b0._24_8_;
          if ((uVar2 & 0x200) == 0) {
            if (param_2[3] == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
            }
            FUN_00362728(*(undefined2 *)((int)param_2 + 0xe),0x40b2c0,0x10,0);
          }
          else if (param_2[2] < 0x11) {
            FUN_0035c544(*param_2,0x40b2c0);
            iVar15 = param_2[2];
            param_2[2] = 0;
            *param_2 = *param_2 + iVar15;
          }
          else {
            pcVar16 = (char *)*param_2;
            *(undefined8 *)pcVar16 = s_00000000000000000123456789abcdef_0040b2b0._16_8_;
            *(undefined8 *)(pcVar16 + 8) = uVar11;
            *param_2 = *param_2 + 0x10;
            param_2[2] = param_2[2] + -0x10;
          }
          iVar19 = iVar19 + -0x10;
          if (iVar19 < 0x11) break;
          uVar2 = *(ushort *)(param_2 + 3);
        }
      }
      if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
        if (param_2[3] == 0) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        else {
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        FUN_00362728(uVar1,0x40b2c0,iVar19,0);
      }
      else if (iVar19 < param_2[2]) {
        FUN_0035c544(*param_2,0x40b2c0,iVar19);
        *param_2 = *param_2 + iVar19;
        param_2[2] = param_2[2] - iVar19;
      }
      else {
        FUN_0035c544(*param_2,0x40b2c0);
        iVar19 = param_2[2];
        param_2[2] = 0;
        *param_2 = *param_2 + iVar19;
      }
    }
  }
  iVar19 = (int)pcStack_c8 - (int)pcStack_d4;
  if (0 < iVar19) {
    if (0x10 < iVar19) {
      uVar2 = *(ushort *)(param_2 + 3);
      while( true ) {
        uVar11 = s_00000000000000000123456789abcdef_0040b2b0._24_8_;
        if ((uVar2 & 0x200) == 0) {
          if (param_2[3] == 0) {
            *(undefined2 *)((int)param_2 + 0xe) = 1;
          }
          FUN_00362728(*(undefined2 *)((int)param_2 + 0xe),0x40b2c0,0x10,0);
        }
        else if (param_2[2] < 0x11) {
          FUN_0035c544(*param_2,0x40b2c0);
          iVar15 = param_2[2];
          param_2[2] = 0;
          *param_2 = *param_2 + iVar15;
        }
        else {
          pcVar16 = (char *)*param_2;
          *(undefined8 *)pcVar16 = s_00000000000000000123456789abcdef_0040b2b0._16_8_;
          *(undefined8 *)(pcVar16 + 8) = uVar11;
          *param_2 = *param_2 + 0x10;
          param_2[2] = param_2[2] + -0x10;
        }
        iVar19 = iVar19 + -0x10;
        if (iVar19 < 0x11) break;
        uVar2 = *(ushort *)(param_2 + 3);
      }
    }
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      if (param_2[3] == 0) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      else {
        uVar1 = *(undefined2 *)((int)param_2 + 0xe);
      }
      FUN_00362728(uVar1,0x40b2c0,iVar19,0);
    }
    else if (iVar19 < param_2[2]) {
      FUN_0035c544(*param_2,0x40b2c0,iVar19);
      *param_2 = *param_2 + iVar19;
      param_2[2] = param_2[2] - iVar19;
    }
    else {
      FUN_0035c544(*param_2,0x40b2c0);
      iVar19 = param_2[2];
      param_2[2] = 0;
      *param_2 = *param_2 + iVar19;
    }
  }
  if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
    if (param_2[3] == 0) {
      *(undefined2 *)((int)param_2 + 0xe) = 1;
      uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    }
    else {
      uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    }
    FUN_00362728(uVar1,pcVar23,pcStack_d4,0);
  }
  else if ((int)pcStack_d4 < param_2[2]) {
    FUN_0035c544(*param_2,pcVar23);
    *param_2 = (int)(pcStack_d4 + *param_2);
    param_2[2] = param_2[2] - (int)pcStack_d4;
  }
  else {
    FUN_0035c544(*param_2,pcVar23,param_2[2]);
    iVar19 = param_2[2];
    param_2[2] = 0;
    *param_2 = *param_2 + iVar19;
  }
  if (uStack_b0 != 0) {
    iVar19 = (int)pcStack_cc - (int)pcStack_c4;
    if (0 < iVar19) {
      if (0x10 < iVar19) {
        uVar2 = *(ushort *)(param_2 + 3);
        while( true ) {
          uVar11 = s_00000000000000000123456789abcdef_0040b2b0._8_8_;
          if ((uVar2 & 0x200) == 0) {
            if (param_2[3] == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
            }
            FUN_00362728(*(undefined2 *)((int)param_2 + 0xe),0x40b2b0,0x10,0);
          }
          else if (param_2[2] < 0x11) {
            FUN_0035c544(*param_2,0x40b2b0);
            iVar15 = param_2[2];
            param_2[2] = 0;
            *param_2 = *param_2 + iVar15;
          }
          else {
            pcVar16 = (char *)*param_2;
            *(undefined8 *)pcVar16 = s_00000000000000000123456789abcdef_0040b2b0._0_8_;
            *(undefined8 *)(pcVar16 + 8) = uVar11;
            *param_2 = *param_2 + 0x10;
            param_2[2] = param_2[2] + -0x10;
          }
          iVar19 = iVar19 + -0x10;
          if (iVar19 < 0x11) break;
          uVar2 = *(ushort *)(param_2 + 3);
        }
      }
      if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
        if (param_2[3] == 0) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        else {
          uVar1 = *(undefined2 *)((int)param_2 + 0xe);
        }
        FUN_00362728(uVar1,0x40b2b0,iVar19,0);
      }
      else if (iVar19 < param_2[2]) {
        FUN_0035c544(*param_2,0x40b2b0,iVar19);
        *param_2 = *param_2 + iVar19;
        param_2[2] = param_2[2] - iVar19;
      }
      else {
        FUN_0035c544(*param_2,0x40b2b0);
        iVar19 = param_2[2];
        param_2[2] = 0;
        *param_2 = *param_2 + iVar19;
      }
    }
  }
  pcVar16 = pcStack_cc;
  if (uStack_bc == 0) {
    pcVar16 = pcStack_c4;
  }
  iStack_d0 = iStack_d0 + (int)pcVar16;
  goto LAB_00362888;
switchD_003629cc_caseD_31:
  pcStack_cc = (char *)0x0;
  do {
    pcStack_cc = (char *)((int)pcStack_cc * 10 + -0x30 + (int)lVar13);
    cVar12 = *param_3;
    lVar13 = (long)cVar12;
    param_3 = param_3 + 1;
  } while ((int)cVar12 - 0x30U < 10);
  goto LAB_003629ac;
switchD_003629cc_caseD_20:
  if (acStack_e0[0] == '\0') goto code_r0x003629e0;
  cVar12 = *param_3;
  goto LAB_003629a8;
code_r0x003629e0:
  acStack_e0[0] = ' ';
  goto LAB_003629a4;
}


// ==== FUN_00363738 @ 00363738 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00363738(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_DAT_003d6cf0;
  param_2 = param_2 + (int)_DAT_003d70f8;
  uVar7 = *(uint *)(PTR_DAT_003d6cf0 + 4) & 0xfffffffc;
  uVar6 = param_2 + 0x10;
  puVar8 = PTR_DAT_003d6cf0 + uVar7;
  if (DAT_003d7100 != (undefined *)0xffffffff) {
    uVar6 = param_2 + 0x100fU & 0xfffff000;
  }
  puVar3 = (undefined *)FUN_00365ec0(param_1,uVar6);
  if ((puVar3 != (undefined *)0xffffffff) && ((puVar8 <= puVar3 || (puVar1 == &DAT_003d6ce8)))) {
    DAT_003d7118 = DAT_003d7118 + uVar6;
    if (puVar3 == puVar8) {
      *(uint *)(PTR_DAT_003d6cf0 + 4) = uVar6 + uVar7 | 1;
    }
    else {
      puVar2 = puVar3;
      if (DAT_003d7100 != (undefined *)0xffffffff) {
        DAT_003d7118 = puVar3 + ((int)DAT_003d7118 - (int)puVar8);
        puVar2 = DAT_003d7100;
      }
      DAT_003d7100 = puVar2;
      if (((uint)(puVar3 + 8) & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0x10 - ((uint)(puVar3 + 8) & 0xf);
        puVar3 = puVar3 + iVar5;
      }
      iVar5 = iVar5 + (0x1000 - ((uint)(puVar3 + uVar6) & 0xfff));
      lVar4 = FUN_00365ec0(param_1,iVar5);
      if (lVar4 == -1) {
        return;
      }
      DAT_003d7118 = DAT_003d7118 + iVar5;
      PTR_DAT_003d6cf0 = puVar3;
      *(uint *)(puVar3 + 4) = ((int)lVar4 - (int)puVar3) + iVar5 | 1;
      if (puVar1 != &DAT_003d6ce8) {
        if (uVar7 < 0x10) {
          *(undefined4 *)(PTR_DAT_003d6cf0 + 4) = 1;
          return;
        }
        uVar6 = uVar7 - 0xc & 0xfffffff0;
        *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) & 1 | uVar6;
        *(undefined4 *)(puVar1 + uVar6 + 8) = 5;
        *(undefined4 *)(puVar1 + uVar6 + 4) = 5;
        if (0xf < uVar6) {
          FUN_003640d0(param_1,puVar1 + 8);
        }
      }
    }
    if (DAT_003d7108 < (ulong)(long)(int)DAT_003d7118) {
      DAT_003d7108 = (long)(int)DAT_003d7118;
    }
    if (DAT_003d7110 < (ulong)(long)(int)DAT_003d7118) {
      DAT_003d7110 = (long)(int)DAT_003d7118;
    }
  }
  return;
}


// ==== FUN_003639a0 @ 003639a0 ====

undefined4 * FUN_003639a0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  
  if (param_2 + 0x13U < 0x1f) {
    uVar16 = 0x10;
  }
  else {
    uVar16 = param_2 + 0x13U & 0xfffffff0;
  }
  FUN_0035ebb0(param_1);
  puVar15 = (undefined4 *)PTR_PTR_003d6cf8;
  if (uVar16 < 0x1f8) {
    puVar14 = *(undefined4 **)((int)&PTR_DAT_003d6cf4 + uVar16);
    if (puVar14 == (undefined4 *)(&DAT_003d6ce8 + uVar16)) {
      uVar12 = (uVar16 >> 3) + 2;
      goto LAB_00363b38;
    }
    iVar3 = puVar14[3];
    iVar1 = puVar14[2];
    uVar16 = puVar14[1];
    *(int *)(iVar1 + 0xc) = iVar3;
    *(int *)(iVar3 + 8) = iVar1;
    puVar4 = (undefined *)((int)puVar14 + (uVar16 & 0xfffffffc));
    uVar13 = *(uint *)(puVar4 + 4) | 1;
  }
  else {
    uVar13 = uVar16 >> 9;
    if (uVar13 == 0) {
      uVar12 = uVar16 >> 3;
    }
    else if (uVar13 < 5) {
      uVar12 = (uVar16 >> 6) + 0x38;
    }
    else {
      uVar12 = uVar13 + 0x5b;
      if (0x14 < uVar13) {
        if (uVar13 < 0x55) {
          uVar12 = (uVar16 >> 0xc) + 0x6e;
        }
        else if (uVar13 < 0x155) {
          uVar12 = (uVar16 >> 0xf) + 0x77;
        }
        else if (uVar13 < 0x555) {
          uVar12 = (uVar16 >> 0x12) + 0x7c;
        }
        else {
          uVar12 = 0x7e;
        }
      }
    }
    for (puVar14 = (undefined4 *)(&PTR_DAT_003d6cf4)[uVar12 * 2];
        puVar14 != (undefined4 *)(&DAT_003d6ce8 + uVar12 * 8); puVar14 = (undefined4 *)puVar14[3]) {
      uVar13 = puVar14[1] & 0xfffffffc;
      if (uVar13 < uVar16) {
        uVar7 = -(ulong)(uVar16 - uVar13);
      }
      else {
        uVar7 = (ulong)(uVar13 - uVar16);
      }
      if (0xf < (long)uVar7) goto LAB_00363b38;
      if (-1 < (long)uVar7) {
        iVar3 = puVar14[3];
        puVar4 = (undefined *)((int)puVar14 + uVar13);
        iVar1 = puVar14[2];
        *(int *)(iVar1 + 0xc) = iVar3;
        *(int *)(iVar3 + 8) = iVar1;
        uVar13 = *(uint *)(puVar4 + 4) | 1;
        goto LAB_003640a0;
      }
    }
    uVar12 = uVar12 + 1;
LAB_00363b38:
    if ((undefined **)PTR_PTR_003d6cf8 != &PTR_DAT_003d6cf0) {
      uVar13 = *(uint *)(PTR_PTR_003d6cf8 + 4);
      uVar5 = uVar13 & 0xfffffffc;
      if (uVar5 < uVar16) {
        uVar7 = -(ulong)(uVar16 - uVar5);
      }
      else {
        uVar7 = (ulong)(uVar5 - uVar16);
      }
      if (0xf < (long)uVar7) {
        *(uint *)(PTR_PTR_003d6cf8 + 4) = uVar16 | 1;
        ppuVar10 = (undefined **)(PTR_PTR_003d6cf8 + uVar16);
        uVar16 = (uint)uVar7;
        PTR_PTR_003d6cf8 = (undefined *)ppuVar10;
        DAT_003d6cfc = ppuVar10;
        ppuVar10[2] = (undefined *)&PTR_DAT_003d6cf0;
        ppuVar10[1] = (undefined *)(uVar16 | 1);
        ppuVar10[3] = (undefined *)&PTR_DAT_003d6cf0;
        *(uint *)((int)ppuVar10 + uVar16) = uVar16;
        goto LAB_003640a4;
      }
      DAT_003d6cfc = &PTR_DAT_003d6cf0;
      PTR_PTR_003d6cf8 = (undefined *)&PTR_DAT_003d6cf0;
      if (-1 < (long)uVar7) {
        puVar4 = (undefined *)((int)puVar15 + uVar5);
        uVar13 = *(uint *)(puVar4 + 4) | 1;
        puVar14 = puVar15;
        goto LAB_003640a0;
      }
      uVar8 = uVar13 >> 3;
      if (uVar5 < 0x200) {
        DAT_003d6cec = DAT_003d6cec | (uint)(1L << (long)((int)uVar8 >> 2));
        puVar11 = &DAT_003d6ce8 + uVar8 * 8;
        puVar4 = (&PTR_DAT_003d6cf0)[uVar8 * 2];
      }
      else {
        uVar8 = uVar13 >> 9;
        if (uVar8 == 0) {
          uVar9 = uVar13 >> 3;
        }
        else if (uVar8 < 5) {
          uVar9 = (uVar13 >> 6) + 0x38;
        }
        else {
          uVar9 = uVar8 + 0x5b;
          if (0x14 < uVar8) {
            if (uVar8 < 0x55) {
              uVar9 = (uVar13 >> 0xc) + 0x6e;
            }
            else if (uVar8 < 0x155) {
              uVar9 = (uVar13 >> 0xf) + 0x77;
            }
            else if (uVar8 < 0x555) {
              uVar9 = (uVar13 >> 0x12) + 0x7c;
            }
            else {
              uVar9 = 0x7e;
            }
          }
        }
        puVar11 = &DAT_003d6ce8 + uVar9 * 8;
        puVar4 = (&PTR_DAT_003d6cf0)[uVar9 * 2];
        if (puVar4 == puVar11) {
          DAT_003d6cec = DAT_003d6cec | (uint)(1L << (long)((int)uVar9 >> 2));
        }
        else if (uVar5 < (*(uint *)(puVar4 + 4) & 0xfffffffc)) {
          for (puVar4 = *(undefined **)(puVar4 + 8); puVar4 != puVar11;
              puVar4 = *(undefined **)(puVar4 + 8)) {
            if ((*(uint *)(puVar4 + 4) & 0xfffffffc) <= uVar5) {
              puVar11 = *(undefined **)(puVar4 + 0xc);
              goto LAB_00363d50;
            }
          }
          puVar11 = *(undefined **)(puVar4 + 0xc);
        }
        else {
          puVar11 = *(undefined **)(puVar4 + 0xc);
        }
      }
LAB_00363d50:
      *(undefined **)((int)puVar15 + 0xc) = puVar11;
      *(undefined **)((int)puVar15 + 8) = puVar4;
      *(undefined4 **)(puVar11 + 8) = puVar15;
      *(undefined4 **)(puVar4 + 0xc) = puVar15;
    }
    uVar13 = uVar12 + 3;
    if (-1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    uVar6 = (ulong)DAT_003d6cec;
    uVar7 = 1L << (long)((int)uVar13 >> 2);
    if (uVar7 <= uVar6) {
      if ((uVar7 & uVar6) == 0) {
        uVar12 = uVar12 & 0xfffffffc;
        do {
          uVar7 = uVar7 << 1;
          uVar12 = uVar12 + 4;
        } while ((uVar7 & uVar6) == 0);
      }
      iVar3 = uVar12 << 3;
      do {
        puVar15 = *(undefined4 **)((int)&PTR_DAT_003d6cf4 + iVar3);
        puVar14 = (undefined4 *)(&DAT_003d6ce8 + iVar3);
        uVar13 = uVar12;
        while( true ) {
          if (puVar15 != puVar14) {
            uVar5 = puVar15[1];
            while( true ) {
              uVar5 = uVar5 & 0xfffffffc;
              if (uVar5 < uVar16) {
                uVar6 = -(ulong)(uVar16 - uVar5);
              }
              else {
                uVar6 = (ulong)(uVar5 - uVar16);
              }
              if (0xf < (long)uVar6) {
                iVar3 = puVar15[3];
                iVar1 = puVar15[2];
                puVar15[1] = uVar16 | 1;
                *(int *)(iVar1 + 0xc) = iVar3;
                uVar13 = (uint)uVar6;
                *(int *)(iVar3 + 8) = iVar1;
                ppuVar10 = (undefined **)((int)puVar15 + uVar16);
                PTR_PTR_003d6cf8 = (undefined *)ppuVar10;
                DAT_003d6cfc = ppuVar10;
                ppuVar10[1] = (undefined *)(uVar13 | 1);
                ppuVar10[2] = (undefined *)&PTR_DAT_003d6cf0;
                ppuVar10[3] = (undefined *)&PTR_DAT_003d6cf0;
                *(uint *)((int)ppuVar10 + uVar13) = uVar13;
                goto LAB_003640a4;
              }
              if (-1 < (long)uVar6) {
                *(uint *)((int)puVar15 + uVar5 + 4) = *(uint *)((int)puVar15 + uVar5 + 4) | 1;
                iVar3 = puVar15[3];
                iVar1 = puVar15[2];
                *(int *)(iVar1 + 0xc) = iVar3;
                *(int *)(iVar3 + 8) = iVar1;
                goto LAB_003640a4;
              }
              puVar15 = (undefined4 *)puVar15[3];
              if (puVar15 == puVar14) break;
              uVar5 = puVar15[1];
            }
          }
          puVar15 = puVar14 + 2;
          if ((int)uVar13 < 0x3f) {
            uVar13 = uVar13 + 1;
            puVar15 = puVar14 + 4;
          }
          puVar14 = puVar15;
          uVar13 = uVar13 + 1;
          puVar15 = (undefined4 *)(&DAT_003d6ce8 + iVar3);
          if ((uVar13 & 3) == 0) break;
          puVar15 = (undefined4 *)puVar14[3];
        }
        do {
          puVar14 = puVar15 + -2;
          if ((uVar12 & 3) == 0) {
            DAT_003d6cec = DAT_003d6cec & ~(uint)uVar7;
            break;
          }
          puVar2 = (undefined4 *)*puVar15;
          uVar12 = uVar12 - 1;
          puVar15 = puVar14;
        } while (puVar2 == puVar14);
        uVar7 = uVar7 << 1;
        if ((DAT_003d6cec < uVar7) || (uVar7 == 0)) break;
        iVar3 = uVar13 * 8;
        uVar12 = uVar13;
        if ((uVar7 & DAT_003d6cec) == 0) {
          do {
            uVar7 = uVar7 << 1;
            uVar12 = uVar12 + 4;
          } while ((uVar7 & DAT_003d6cec) == 0);
          iVar3 = uVar12 * 8;
        }
      } while( true );
    }
    uVar13 = *(uint *)(PTR_DAT_003d6cf0 + 4) & 0xfffffffc;
    if (uVar13 < uVar16) {
      uVar7 = -(ulong)(uVar16 - uVar13);
    }
    else {
      uVar7 = (ulong)(uVar13 - uVar16);
    }
    if (((*(uint *)(PTR_DAT_003d6cf0 + 4) & 0xfffffffc) < uVar16) || ((long)uVar7 < 0x10)) {
      FUN_00363738(param_1,uVar16);
      uVar13 = *(uint *)(PTR_DAT_003d6cf0 + 4) & 0xfffffffc;
      if (uVar13 < uVar16) {
        uVar7 = -(ulong)(uVar16 - uVar13);
      }
      else {
        uVar7 = (ulong)(uVar13 - uVar16);
      }
      if (((*(uint *)(PTR_DAT_003d6cf0 + 4) & 0xfffffffc) < uVar16) || ((long)uVar7 < 0x10)) {
        FUN_0035ec10(param_1);
        return (undefined4 *)0x0;
      }
    }
    uVar13 = (uint)uVar7 | 1;
    *(uint *)(PTR_DAT_003d6cf0 + 4) = uVar16 | 1;
    puVar4 = PTR_DAT_003d6cf0 + uVar16;
    puVar14 = (undefined4 *)PTR_DAT_003d6cf0;
    PTR_DAT_003d6cf0 = puVar4;
  }
LAB_003640a0:
  *(uint *)(puVar4 + 4) = uVar13;
  puVar15 = puVar14;
LAB_003640a4:
  FUN_0035ec10(param_1);
  return puVar15 + 2;
}


// ==== FUN_003640d0 @ 003640d0 ====

void FUN_003640d0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  
  if (param_2 == 0) {
    return;
  }
  FUN_0035ebb0();
  iVar10 = (int)param_2;
  puVar9 = (undefined *)(iVar10 + -8);
  uVar5 = *(uint *)(iVar10 + -4);
  uVar8 = uVar5 & 0xfffffffe;
  puVar4 = puVar9 + uVar8;
  uVar6 = *(uint *)(puVar4 + 4) & 0xfffffffc;
  if (puVar4 == PTR_DAT_003d6cf0) {
    uVar8 = uVar8 + uVar6;
    PTR_DAT_003d6cf0 = puVar9;
    if ((uVar5 & 1) == 0) {
      PTR_DAT_003d6cf0 = puVar9 + -*(int *)(iVar10 + -8);
      uVar8 = uVar8 + *(int *)(iVar10 + -8);
      iVar10 = *(int *)(PTR_DAT_003d6cf0 + 0xc);
      iVar1 = *(int *)(PTR_DAT_003d6cf0 + 8);
      *(int *)(iVar1 + 0xc) = iVar10;
      *(int *)(iVar10 + 8) = iVar1;
    }
    *(uint *)(PTR_DAT_003d6cf0 + 4) = uVar8 | 1;
    if (DAT_003d70f0 <= uVar8) {
      FUN_003643c8(param_1,DAT_003d70f8);
    }
    FUN_0035ec10(param_1);
    return;
  }
  *(uint *)(puVar4 + 4) = uVar6;
  bVar3 = false;
  if ((uVar5 & 1) == 0) {
    puVar9 = puVar9 + -*(int *)(iVar10 + -8);
    ppuVar2 = *(undefined ***)(puVar9 + 8);
    uVar8 = uVar8 + *(int *)(iVar10 + -8);
    if (ppuVar2 == &PTR_DAT_003d6cf0) {
      bVar3 = true;
    }
    else {
      puVar7 = *(undefined **)(puVar9 + 0xc);
      ppuVar2[3] = puVar7;
      *(undefined ***)(puVar7 + 8) = ppuVar2;
    }
  }
  if ((*(uint *)(puVar4 + uVar6 + 4) & 1) == 0) {
    uVar8 = uVar8 + uVar6;
    ppuVar2 = *(undefined ***)(puVar4 + 8);
    if (bVar3) {
      puVar4 = *(undefined **)(puVar4 + 0xc);
    }
    else {
      if (ppuVar2 == &PTR_DAT_003d6cf0) {
        bVar3 = true;
        PTR_PTR_003d6cf8 = puVar9;
        DAT_003d6cfc = puVar9;
        *(undefined ***)(puVar9 + 8) = &PTR_DAT_003d6cf0;
        *(undefined ***)(puVar9 + 0xc) = &PTR_DAT_003d6cf0;
        goto LAB_00364238;
      }
      puVar4 = *(undefined **)(puVar4 + 0xc);
    }
    ppuVar2[3] = puVar4;
    *(undefined ***)(puVar4 + 8) = ppuVar2;
  }
LAB_00364238:
  *(uint *)(puVar9 + 4) = uVar8 | 1;
  *(uint *)(puVar9 + uVar8) = uVar8;
  if (!bVar3) {
    uVar5 = uVar8 >> 3;
    if (uVar8 < 0x200) {
      DAT_003d6cec = DAT_003d6cec | (uint)(1L << (long)((int)uVar5 >> 2));
      puVar7 = &DAT_003d6ce8 + uVar5 * 8;
      puVar4 = (&PTR_DAT_003d6cf0)[uVar5 * 2];
    }
    else {
      uVar5 = uVar8 >> 9;
      if (uVar5 == 0) {
        uVar6 = uVar8 >> 3;
      }
      else if (uVar5 < 5) {
        uVar6 = (uVar8 >> 6) + 0x38;
      }
      else {
        uVar6 = uVar5 + 0x5b;
        if (0x14 < uVar5) {
          if (uVar5 < 0x55) {
            uVar6 = (uVar8 >> 0xc) + 0x6e;
          }
          else if (uVar5 < 0x155) {
            uVar6 = (uVar8 >> 0xf) + 0x77;
          }
          else if (uVar5 < 0x555) {
            uVar6 = (uVar8 >> 0x12) + 0x7c;
          }
          else {
            uVar6 = 0x7e;
          }
        }
      }
      puVar7 = &DAT_003d6ce8 + uVar6 * 8;
      puVar4 = (&PTR_DAT_003d6cf0)[uVar6 * 2];
      if (puVar4 == puVar7) {
        DAT_003d6cec = DAT_003d6cec | (uint)(1L << (long)((int)uVar6 >> 2));
      }
      else if (uVar8 < (*(uint *)(puVar4 + 4) & 0xfffffffc)) {
        for (puVar4 = *(undefined **)(puVar4 + 8); puVar4 != puVar7;
            puVar4 = *(undefined **)(puVar4 + 8)) {
          if ((*(uint *)(puVar4 + 4) & 0xfffffffc) <= uVar8) {
            puVar7 = *(undefined **)(puVar4 + 0xc);
            goto LAB_00364398;
          }
        }
        puVar7 = *(undefined **)(puVar4 + 0xc);
      }
      else {
        puVar7 = *(undefined **)(puVar4 + 0xc);
      }
    }
LAB_00364398:
    *(undefined **)(puVar9 + 0xc) = puVar7;
    *(undefined **)(puVar9 + 8) = puVar4;
    *(undefined **)(puVar7 + 8) = puVar9;
    *(undefined **)(puVar4 + 0xc) = puVar9;
  }
  FUN_0035ec10(param_1);
  return;
}


// ==== FUN_003643c8 @ 003643c8 ====

undefined4 FUN_003643c8(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_0035ebb0();
  uVar1 = *(uint *)(PTR_DAT_003d6cf0 + 4);
  uVar5 = (long)(int)uVar1 & 0xfffffffc;
  lVar4 = FUN_002904f0((uVar5 - (param_2 & 0xffffffff)) + 0xfef,0x1000);
  lVar4 = FUN_00290488(lVar4 + -1,0x1000);
  if ((0xfff < lVar4) &&
     (puVar2 = (undefined *)FUN_00365ec0(param_1,0),
     puVar2 == PTR_DAT_003d6cf0 + (uVar1 & 0xfffffffc))) {
    iVar3 = (int)lVar4;
    lVar4 = FUN_00365ec0(param_1,-iVar3);
    if (lVar4 != -1) {
      *(uint *)(PTR_DAT_003d6cf0 + 4) = (int)uVar5 - iVar3 | 1;
      DAT_003d7118 = DAT_003d7118 - iVar3;
      FUN_0035ec10(param_1);
      return 1;
    }
    iVar3 = FUN_00365ec0(param_1,0);
    if (0xf < iVar3 - (int)PTR_DAT_003d6cf0) {
      DAT_003d7118 = iVar3 - DAT_003d7100;
      *(uint *)(PTR_DAT_003d6cf0 + 4) = iVar3 - (int)PTR_DAT_003d6cf0 | 1;
    }
  }
  FUN_0035ec10(param_1);
  return 0;
}


// ==== FUN_00364538 @ 00364538 ====

int * FUN_00364538(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  
  if (param_2 == (int *)0x0) {
    piVar1 = (int *)FUN_003639a0(param_1,param_3);
    return piVar1;
  }
  piVar1 = param_2 + -2;
  FUN_0035ebb0(param_1);
  uVar5 = (int)param_3 + 0x13;
  uVar9 = param_2[-1] & 0xfffffffc;
  if (uVar5 < 0x1f) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = uVar5 & 0xfffffff0;
  }
  uVar12 = uVar9;
  if (uVar9 < uVar5) {
    puVar8 = (undefined *)((int)piVar1 + uVar9);
    if (puVar8 == PTR_DAT_003d6cf0) {
      uVar10 = *(uint *)(puVar8 + 4);
LAB_00364610:
      uVar10 = uVar10 & 0xfffffffc;
      if (puVar8 == PTR_DAT_003d6cf0) {
        if (uVar5 + 0x10 <= uVar10 + uVar9) {
          PTR_DAT_003d6cf0 = (undefined *)((int)piVar1 + uVar5);
          *(uint *)(PTR_DAT_003d6cf0 + 4) = (uVar10 + uVar9) - uVar5 | 1;
          param_2[-1] = param_2[-1] & 1U | uVar5;
          FUN_0035ec10(param_1);
          return param_2;
        }
        uVar12 = param_2[-1];
      }
      else {
        uVar12 = uVar10 + uVar9;
        if (uVar5 <= uVar12) {
          iVar2 = *(int *)(puVar8 + 8);
          iVar7 = *(int *)(puVar8 + 0xc);
          *(int *)(iVar2 + 0xc) = iVar7;
          *(int *)(iVar7 + 8) = iVar2;
          goto LAB_00364a10;
        }
        uVar12 = param_2[-1];
      }
    }
    else {
      if ((*(uint *)(puVar8 + (*(uint *)(puVar8 + 4) & 0xfffffffe) + 4) & 1) == 0) {
        uVar10 = *(uint *)(puVar8 + 4);
        goto LAB_00364610;
      }
      puVar8 = (undefined *)0x0;
      uVar10 = 0;
      uVar12 = param_2[-1];
    }
    if ((uVar12 & 1) == 0) {
      piVar11 = (int *)((int)piVar1 - *piVar1);
      uVar4 = piVar11[1] & 0xfffffffc;
      if (puVar8 == (undefined *)0x0) {
LAB_00364810:
        uVar12 = uVar4 + uVar9;
        if ((piVar11 == (int *)0x0) || (uVar12 < uVar5)) goto LAB_003648f4;
        iVar2 = piVar11[3];
        iVar7 = piVar11[2];
      }
      else {
        if (puVar8 == PTR_DAT_003d6cf0) {
          uVar12 = uVar10 + uVar4 + uVar9;
          if (uVar5 + 0x10 <= uVar12) {
            iVar2 = piVar11[3];
            iVar7 = piVar11[2];
            *(int *)(iVar7 + 0xc) = iVar2;
            *(int *)(iVar2 + 8) = iVar7;
            uVar9 = uVar9 - 4;
            piVar3 = piVar11 + 2;
            if (uVar9 < 0x25) {
              piVar1 = param_2;
              piVar6 = piVar3;
              if (0x13 < uVar9) {
                piVar1 = param_2 + 2;
                piVar6 = piVar11 + 4;
                piVar11[2] = *param_2;
                piVar11[3] = param_2[1];
                if (0x1b < uVar9) {
                  piVar1 = param_2 + 4;
                  piVar6 = piVar11 + 6;
                  piVar11[4] = param_2[2];
                  piVar11[5] = param_2[3];
                  if (0x23 < uVar9) {
                    piVar1 = param_2 + 6;
                    piVar6 = piVar11 + 8;
                    piVar11[6] = param_2[4];
                    piVar11[7] = param_2[5];
                  }
                }
              }
              *piVar6 = *piVar1;
              piVar6[1] = piVar1[1];
              piVar6[2] = piVar1[2];
            }
            else {
              FUN_0035c544(piVar3,param_2);
            }
            PTR_DAT_003d6cf0 = (undefined *)((int)piVar11 + uVar5);
            *(uint *)(PTR_DAT_003d6cf0 + 4) = uVar12 - uVar5 | 1;
            piVar11[1] = piVar11[1] & 1U | uVar5;
            goto LAB_00364a00;
          }
          goto LAB_00364810;
        }
        uVar12 = uVar10 + uVar4 + uVar9;
        if (uVar12 < uVar5) goto LAB_00364810;
        iVar2 = *(int *)(puVar8 + 8);
        iVar7 = *(int *)(puVar8 + 0xc);
        *(int *)(iVar2 + 0xc) = iVar7;
        *(int *)(iVar7 + 8) = iVar2;
        iVar2 = piVar11[3];
        iVar7 = piVar11[2];
      }
      piVar1 = piVar11 + 2;
      *(int *)(iVar7 + 0xc) = iVar2;
      *(int *)(iVar2 + 8) = iVar7;
      uVar9 = uVar9 - 4;
      if (0x24 < uVar9) {
        FUN_0035c544(piVar1,param_2);
        uVar9 = uVar12 - uVar5;
        goto LAB_00364a14;
      }
      piVar3 = param_2;
      if (0x13 < uVar9) {
        piVar3 = param_2 + 2;
        piVar1 = piVar11 + 4;
        piVar11[2] = *param_2;
        piVar11[3] = param_2[1];
        if (0x1b < uVar9) {
          piVar3 = param_2 + 4;
          piVar1 = piVar11 + 6;
          piVar11[4] = param_2[2];
          piVar11[5] = param_2[3];
          if (0x23 < uVar9) {
            piVar3 = param_2 + 6;
            piVar1 = piVar11 + 8;
            piVar11[6] = param_2[4];
            piVar11[7] = param_2[5];
          }
        }
      }
      *piVar1 = *piVar3;
      piVar1[1] = piVar3[1];
      piVar1[2] = piVar3[2];
      piVar1 = piVar11;
    }
    else {
LAB_003648f4:
      piVar3 = (int *)FUN_003639a0(param_1,param_3);
      if (piVar3 == (int *)0x0) {
        FUN_0035ec10(param_1);
        return (int *)0x0;
      }
      uVar12 = uVar9 - 4;
      if (piVar3 + -2 != (int *)((int)piVar1 + (param_2[-1] & 0xfffffffeU))) {
        if (uVar12 < 0x25) {
          piVar1 = param_2;
          piVar11 = piVar3;
          if (0x13 < uVar12) {
            piVar1 = param_2 + 2;
            piVar11 = piVar3 + 2;
            *piVar3 = *param_2;
            piVar3[1] = param_2[1];
            if (0x1b < uVar12) {
              piVar1 = param_2 + 4;
              piVar11 = piVar3 + 4;
              piVar3[2] = param_2[2];
              piVar3[3] = param_2[3];
              if (0x23 < uVar12) {
                piVar1 = param_2 + 6;
                piVar11 = piVar3 + 6;
                piVar3[4] = param_2[4];
                piVar3[5] = param_2[5];
              }
            }
          }
          *piVar11 = *piVar1;
          piVar11[1] = piVar1[1];
          piVar11[2] = piVar1[2];
        }
        else {
          FUN_0035c544(piVar3,param_2);
        }
        FUN_003640d0(param_1,param_2);
LAB_00364a00:
        FUN_0035ec10(param_1);
        return piVar3;
      }
      uVar12 = uVar9 + (piVar3[-1] & 0xfffffffcU);
    }
  }
LAB_00364a10:
  uVar9 = uVar12 - uVar5;
  piVar11 = piVar1;
LAB_00364a14:
  if (uVar9 < 0x10) {
    piVar11[1] = piVar11[1] & 1U | uVar12;
    *(uint *)((int)piVar11 + uVar12 + 4) = *(uint *)((int)piVar11 + uVar12 + 4) | 1;
  }
  else {
    piVar11[1] = piVar11[1] & 1U | uVar5;
    *(uint *)((int)piVar11 + uVar5 + 4) = uVar9 | 1;
    *(uint *)((int)piVar11 + uVar9 + uVar5 + 4) = *(uint *)((int)piVar11 + uVar9 + uVar5 + 4) | 1;
    FUN_003640d0(param_1,(int)piVar11 + uVar5 + 8);
  }
  FUN_0035ec10(param_1);
  return piVar11 + 2;
}


// ==== FUN_00364ab8 @ 00364ab8 ====

long FUN_00364ab8(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  lVar1 = FUN_003639a0(param_1,param_2 * param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puVar4 = (undefined4 *)lVar1;
    uVar3 = (puVar4[-1] & 0xfffffffc) - 4;
    if (uVar3 < 0x25) {
      puVar2 = puVar4;
      if (0x13 < uVar3) {
        *puVar4 = 0;
        puVar2 = puVar4 + 2;
        puVar4[1] = 0;
        if (0x1b < uVar3) {
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar2 = puVar4 + 4;
          if (0x23 < uVar3) {
            puVar4[4] = 0;
            puVar2 = puVar4 + 6;
            puVar4[5] = 0;
          }
        }
      }
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
    }
    else {
      FUN_0035c6ec(lVar1,0);
    }
  }
  return lVar1;
}


// ==== FUN_00364b78 @ 00364b78 ====

ulong FUN_00364b78(undefined4 *param_1,char *param_2,undefined4 *param_3,long param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  int iVar14;
  
  bVar4 = false;
  pcVar12 = param_2;
  do {
    pcVar11 = pcVar12;
    lVar10 = (long)*pcVar11;
    pcVar12 = pcVar11 + 1;
  } while ((*(byte *)((int)&PTR_DAT_0040a991 + (int)*pcVar11) & 8) != 0);
  if (lVar10 == 0x2d) {
    cVar1 = *pcVar12;
    bVar4 = true;
  }
  else {
    if (lVar10 != 0x2b) goto LAB_00364c08;
    cVar1 = *pcVar12;
  }
  lVar10 = (long)cVar1;
  pcVar12 = pcVar11 + 2;
LAB_00364c08:
  if ((((param_4 == 0) || (param_4 == 0x10)) && (lVar10 == 0x30)) &&
     ((*pcVar12 == 'x' || (*pcVar12 == 'X')))) {
    lVar10 = (long)pcVar12[1];
    param_4 = 0x10;
    pcVar12 = pcVar12 + 2;
  }
  if ((param_4 == 0) && (param_4 = 10, lVar10 == 0x30)) {
    param_4 = 8;
  }
  uVar13 = 0x7fffffffffffffff;
  if (bVar4) {
    uVar13 = 0x8000000000000000;
  }
  iVar5 = FUN_00290ac0(uVar13,param_4);
  iVar14 = 0;
  uVar6 = FUN_002904f0(uVar13,param_4);
  uVar8 = 0;
  do {
    iVar9 = (int)lVar10;
    bVar2 = *(byte *)((int)&PTR_DAT_0040a991 + iVar9);
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 3) == 0) {
LAB_00364d24:
        if (iVar14 < 0) {
          uVar8 = 0x7fffffffffffffff;
          if (bVar4) {
            uVar8 = 0x8000000000000000;
          }
          *param_1 = 0x22;
        }
        else if (bVar4) {
          uVar8 = -uVar8;
        }
        if (param_3 != (undefined4 *)0x0) {
          pcVar12 = pcVar12 + -1;
          if (iVar14 == 0) {
            pcVar12 = param_2;
          }
          *param_3 = pcVar12;
        }
        return uVar8;
      }
      iVar3 = iVar9 + -0x37;
      if ((bVar2 & 1) == 0) {
        iVar3 = iVar9 + -0x57;
      }
    }
    else {
      iVar3 = iVar9 + -0x30;
    }
    lVar10 = (long)iVar3;
    if (param_4 <= lVar10) goto LAB_00364d24;
    if (iVar14 < 0) {
LAB_00364cd0:
      iVar14 = -1;
    }
    else if (uVar6 < uVar8) {
      iVar14 = -1;
    }
    else {
      if ((uVar8 == uVar6) && (iVar5 < lVar10)) goto LAB_00364cd0;
      iVar14 = 1;
      lVar7 = FUN_00290488(uVar8,param_4);
      uVar8 = lVar10 + lVar7;
    }
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar12 + 1;
  } while( true );
}


// ==== FUN_00364da8 @ 00364da8 ====

void FUN_00364da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00364b78(PTR_DAT_003d6944,param_1,param_2,param_3);
  return;
}


// ==== FUN_00364de0 @ 00364de0 ====

int FUN_00364de0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if ((*(byte *)((int)&PTR_DAT_0040a991 + param_1) & 1) == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


// ==== FUN_00364e00 @ 00364e00 ====

int FUN_00364e00(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if ((*(byte *)((int)&PTR_DAT_0040a991 + param_1) & 2) == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


// ==== FUN_00364e20 @ 00364e20 ====

undefined ** FUN_00364e20(void)

{
  return &PTR_DAT_0040b4a0;
}


// ==== FUN_00364e38 @ 00364e38 ====

void FUN_00364e38(void)

{
  FUN_00364e20(PTR_DAT_003d6944);
  return;
}


// ==== FUN_00364e60 @ 00364e60 ====

undefined8 FUN_00364e60(ulong param_1,ulong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined8 in_v1_udw;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 in_a0_udw;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_t2_udw;
  undefined1 auVar7 [16];
  
  iVar3 = (int)(param_1 >> 0x20);
  pauVar4 = (undefined1 (*) [16])param_1;
  if ((0xf < param_3) && ((param_1 & 0xf) == 0)) {
    auVar5._8_8_ = in_t2_udw;
    auVar5._0_8_ = (param_2 & 0xff) * 0x101;
    auVar6._8_8_ = in_v1_udw;
    auVar6._0_8_ = 0x8080808080808080;
    auVar5 = _pcpyh(auVar5);
    auVar5 = _pcpyld(auVar5,auVar5);
    auVar6 = _pcpyld(auVar6,auVar6);
    do {
      pauVar4 = (undefined1 (*) [16])param_1;
      auVar1 = _pxor(*pauVar4,auVar5);
      auVar7._8_8_ = in_a0_udw;
      auVar7._0_8_ = 0x101010101010101;
      auVar2._8_8_ = in_a0_udw;
      auVar2._0_8_ = 0x101010101010101;
      auVar7 = _pcpyld(auVar7,auVar2);
      auVar7 = _psubb(auVar1,auVar7);
      auVar7 = _pand(auVar7,~auVar1);
      auVar7 = _pand(auVar7,auVar6);
      auVar2 = _pcpyud(auVar7,auVar5);
      if (auVar7._0_8_ != 0 || auVar2._0_8_ != 0) {
        iVar3 = (int)(param_1 >> 0x20);
        goto joined_r0x00364f14;
      }
      param_3 = param_3 - 0x10;
      pauVar4 = pauVar4 + 1;
      param_1 = (ulong)(int)pauVar4;
    } while (0xf < param_3);
    iVar3 = (int)pauVar4 >> 0x1f;
  }
joined_r0x00364f14:
  while( true ) {
    param_3 = param_3 - 1;
    if (param_3 == 0xffffffff) {
      return 0;
    }
    if ((ulong)(byte)(*pauVar4)[0] == (param_2 & 0xff)) break;
    pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
    iVar3 = (int)pauVar4 >> 0x1f;
  }
  return CONCAT44(iVar3,pauVar4);
}


// ==== FUN_00364f50 @ 00364f50 ====

ulong FUN_00364f50(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar6 = (uint)param_1;
  uVar7 = (ulong)(int)uVar6;
  uVar4 = (long)param_1 >> 0x20;
  iVar3 = (int)(param_1 >> 0x20);
  uVar8 = iVar3 >> 0x14 & 0x7ff;
  uVar5 = uVar8 - 0x3ff;
  if ((int)uVar5 < 0x14) {
    if ((int)uVar5 < 0) {
      uVar1 = FUN_00291410(param_1,DAT_0040b508);
      lVar2 = FUN_002919f8(uVar1,0);
      if (0 < lVar2) {
        if ((long)uVar4 < 0) {
          if ((uVar4 & 0x7fffffff) != 0 || uVar7 != 0) {
            uVar4 = 0xffffffffbff00000;
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
          uVar4 = 0;
        }
      }
    }
    else {
      uVar9 = (ulong)(0xfffff >> (uVar5 & 0x1f));
      if ((uVar4 & uVar9) == 0 && uVar7 == 0) {
        return param_1;
      }
      uVar1 = FUN_00291410(param_1,DAT_0040b508);
      lVar2 = FUN_002919f8(uVar1,0);
      if (0 < lVar2) {
        if ((long)uVar4 < 0) {
          uVar4 = (ulong)(iVar3 + (0x100000 >> (uVar5 & 0x1f)));
        }
        uVar7 = 0;
        uVar4 = uVar4 & ~uVar9;
      }
    }
  }
  else {
    if (0x33 < (int)uVar5) {
      if (uVar5 != 0x400) {
        return param_1;
      }
      uVar4 = FUN_00291410(param_1);
      return uVar4;
    }
    uVar8 = 0xffffffff >> (uVar8 - 0x413 & 0x1f);
    if ((uVar6 & uVar8) == 0) {
      return param_1;
    }
    uVar1 = FUN_00291410(param_1,DAT_0040b508);
    lVar2 = FUN_002919f8(uVar1,0);
    if (0 < lVar2) {
      uVar9 = uVar7;
      if ((long)uVar4 < 0) {
        if (uVar5 == 0x14) {
          iVar3 = iVar3 + 1;
        }
        else {
          uVar9 = (ulong)(int)(uVar6 + (1 << (0x34 - uVar5 & 0x1f)));
          iVar3 = iVar3 + (uint)(uVar9 < uVar7);
        }
        uVar4 = (ulong)iVar3;
      }
      uVar7 = uVar9 & ~(long)(int)uVar8;
    }
  }
  return uVar4 << 0x20 | uVar7 & 0xffffffff;
}


// ==== FUN_00365140 @ 00365140 ====

ulong FUN_00365140(ulong param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar13 = (uint)param_1;
  uVar14 = (ulong)(int)uVar13;
  uVar17 = (uint)param_2;
  uVar18 = (ulong)(int)uVar17;
  uVar19 = (long)param_1 >> 0x20 & 0xffffffff80000000;
  uVar16 = param_2 >> 0x20 & 0x7fffffff;
  uVar12 = (long)param_1 >> 0x20 ^ uVar19;
  if (((uVar16 == 0 && uVar18 == 0) || (0x7fefffff < (long)uVar12)) ||
     (0x7ff00000 < (uVar16 | (long)(int)((uVar17 | -uVar17) >> 0x1f)))) {
    uVar3 = FUN_002914d0(param_1,param_2);
    uVar4 = FUN_002914d0(param_1,param_2);
    uVar14 = FUN_00291778(uVar3,uVar4);
    return uVar14;
  }
  if ((long)uVar12 <= (long)uVar16) {
    if ((long)uVar12 < (long)uVar16) {
      return param_1;
    }
    if (uVar14 < uVar18) {
      return param_1;
    }
    if (uVar14 == uVar18) goto LAB_00365514;
  }
  iVar11 = (int)uVar12;
  if ((long)uVar12 < 0x100000) {
    iVar7 = iVar11 << 0xb;
    if (uVar12 == 0) {
      iVar8 = -0x413;
      for (uVar5 = uVar14; 0 < (long)uVar5; uVar5 = (ulong)((int)uVar5 << 1)) {
        iVar8 = iVar8 + -1;
      }
    }
    else {
      iVar8 = -0x3fe;
      for (; 0 < iVar7; iVar7 = iVar7 << 1) {
        iVar8 = iVar8 + -1;
      }
    }
  }
  else {
    iVar8 = (iVar11 >> 0x14) + -0x3ff;
  }
  uVar15 = (uint)uVar16;
  if (uVar16 < 0x100000) {
    iVar7 = -0x3fe;
    if (uVar16 == 0) {
      iVar7 = -0x413;
      for (uVar16 = uVar18; 0 < (long)uVar16; uVar16 = (ulong)((int)uVar16 << 1)) {
        iVar7 = iVar7 + -1;
      }
    }
    else {
      for (iVar2 = uVar15 << 0xb; 0 < iVar2; iVar2 = iVar2 << 1) {
        iVar7 = iVar7 + -1;
      }
    }
  }
  else {
    iVar7 = ((int)uVar15 >> 0x14) + -0x3ff;
  }
  if (iVar8 < -0x3fe) {
    uVar10 = -iVar8 - 0x3fe;
    if ((int)uVar10 < 0x20) {
      uVar14 = (ulong)(int)(uVar13 << (uVar10 & 0x1f));
      uVar12 = (ulong)(int)(iVar11 << (uVar10 & 0x1f) | uVar13 >> (-uVar10 & 0x1f));
    }
    else {
      uVar12 = (ulong)(int)(uVar13 << (uVar10 & 0x1f));
      uVar14 = 0;
    }
  }
  else {
    uVar12 = uVar12 & 0xfffff | 0x100000;
  }
  if (iVar7 < -0x3fe) {
    uVar13 = -iVar7 - 0x3fe;
    if ((int)uVar13 < 0x20) {
      uVar18 = (ulong)(int)(uVar17 << (uVar13 & 0x1f));
      uVar17 = uVar15 << (uVar13 & 0x1f) | uVar17 >> (-uVar13 & 0x1f);
    }
    else {
      uVar17 = uVar17 << (uVar13 & 0x1f);
      uVar18 = 0;
    }
  }
  else {
    uVar17 = uVar15 & 0xfffff | 0x100000;
  }
  iVar8 = iVar8 - iVar7;
  while( true ) {
    bVar1 = iVar8 == 0;
    iVar8 = iVar8 + -1;
    iVar2 = (int)uVar14;
    iVar11 = (int)uVar12;
    if (bVar1) break;
    iVar6 = (iVar11 - uVar17) - (uint)(uVar14 < uVar18);
    iVar9 = iVar2 - (int)uVar18;
    if (iVar6 < 0) {
      uVar12 = (ulong)(iVar11 * 2 - (iVar2 >> 0x1f));
      uVar14 = (ulong)(iVar2 << 1);
    }
    else {
      if (iVar6 == 0 && iVar9 == 0) goto LAB_00365514;
      uVar12 = (ulong)(iVar6 * 2 - (iVar9 >> 0x1f));
      uVar14 = (ulong)(iVar9 * 2);
    }
  }
  uVar16 = (ulong)(int)((iVar11 - uVar17) - (uint)(uVar14 < uVar18));
  if (-1 < (long)uVar16) {
    uVar12 = uVar16;
    uVar14 = (long)(iVar2 - (int)uVar18);
  }
  if (uVar12 != 0 || uVar14 != 0) {
    while( true ) {
      iVar11 = (int)uVar12;
      uVar17 = (uint)uVar14;
      if (0xfffff < (long)uVar12) break;
      uVar12 = (ulong)(iVar11 * 2 - ((int)uVar17 >> 0x1f));
      uVar14 = (ulong)(int)(uVar17 << 1);
      iVar7 = iVar7 + -1;
    }
    if (-0x3ff < iVar7) {
      return ((long)(int)(iVar11 - 0x100000U | (iVar7 + 0x3ff) * 0x100000) | uVar19) << 0x20 |
             uVar14 & 0xffffffff;
    }
    uVar13 = -iVar7 - 0x3fe;
    if ((int)uVar13 < 0x15) {
      uVar17 = uVar17 >> (uVar13 & 0x1f) | iVar11 << (-uVar13 & 0x1f);
      uVar14 = (long)(iVar11 >> (uVar13 & 0x1f));
    }
    else {
      uVar14 = uVar19;
      if ((int)uVar13 < 0x20) {
        uVar17 = iVar11 << (-uVar13 & 0x1f) | uVar17 >> (uVar13 & 0x1f);
      }
      else {
        uVar17 = iVar11 >> (uVar13 & 0x1f);
      }
    }
    return (uVar14 | uVar19) << 0x20 | (ulong)uVar17;
  }
LAB_00365514:
  return *(ulong *)(&DAT_0040b518 + ((int)uVar19 >> 0x1f) * -8);
}


// ==== FUN_00365588 @ 00365588 ====

undefined8 FUN_00365588(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  uVar10 = (long)param_1 >> 0x20;
  iVar12 = 0;
  if ((long)uVar10 < 0x100000) {
    if ((uVar10 & 0x7fffffff) == 0 && (int)param_1 == 0) {
      return DAT_0040b580;
    }
    if (-1 < (long)uVar10) {
      iVar12 = -0x36;
      param_1 = FUN_002914d0(param_1,0x4350000000000000);
      uVar10 = (long)param_1 >> 0x20;
      goto LAB_00365620;
    }
LAB_003656e0:
    uVar1 = 0;
  }
  else {
LAB_00365620:
    if (0x7fefffff < (long)uVar10) {
      uVar1 = FUN_00291410(param_1,param_1);
      return uVar1;
    }
    iVar9 = (int)(uVar10 & 0xfffff);
    uVar11 = (long)(iVar9 + 0x95f64) & 0x100000;
    iVar12 = iVar12 + -0x3ff + ((int)uVar10 >> 0x14) + ((int)uVar11 >> 0x14);
    uVar1 = FUN_00291468(param_1 & 0xffffffff | (uVar11 ^ 0x3ff00000 | uVar10 & 0xfffff) << 0x20,
                         0x3ff0000000000000);
    if ((iVar9 + 2U & 0xfffff) < 3) {
      lVar2 = FUN_002919f8(uVar1,0);
      if (lVar2 == 0) {
        if (iVar12 != 0) {
          uVar1 = FUN_00291a48(iVar12);
          uVar3 = FUN_002914d0(uVar1,0x3fe62e42fee00000);
          uVar1 = FUN_002914d0(uVar1,0x3dea39ef35793c76);
          uVar1 = FUN_00291410(uVar3,uVar1);
          return uVar1;
        }
        goto LAB_003656e0;
      }
      uVar3 = FUN_002914d0(uVar1,uVar1);
      uVar4 = FUN_002914d0(uVar1,0x3fd5555555555555);
      uVar4 = FUN_00291468(0x3fe0000000000000,uVar4);
      uVar3 = FUN_002914d0(uVar3,uVar4);
      if (iVar12 != 0) {
        uVar4 = FUN_00291a48(iVar12);
        uVar5 = FUN_002914d0(uVar4,0x3fe62e42fee00000);
        uVar4 = FUN_002914d0(uVar4,0x3dea39ef35793c76);
        uVar3 = FUN_00291468(uVar3,uVar4);
        uVar3 = FUN_00291468(uVar3,uVar1);
        uVar1 = uVar5;
      }
    }
    else {
      uVar3 = FUN_00291410(uVar1,0x4000000000000000);
      uVar3 = FUN_00291778(uVar1,uVar3);
      uVar4 = FUN_00291a48(iVar12);
      uVar5 = FUN_002914d0(uVar3,uVar3);
      uVar6 = FUN_002914d0(uVar5,uVar5);
      uVar7 = FUN_002914d0(uVar6,0x3fc39a09d078c69f);
      uVar7 = FUN_00291410(uVar7,0x3fcc71c51d8e78af);
      uVar7 = FUN_002914d0(uVar6,uVar7);
      uVar7 = FUN_00291410(uVar7,0x3fd999999997fa04);
      uVar7 = FUN_002914d0(uVar6,uVar7);
      uVar8 = FUN_002914d0(uVar6,0x3fc2f112df3e5244);
      uVar8 = FUN_00291410(uVar8,0x3fc7466496cb03de);
      uVar8 = FUN_002914d0(uVar6,uVar8);
      uVar8 = FUN_00291410(uVar8,0x3fd2492494229359);
      uVar6 = FUN_002914d0(uVar6,uVar8);
      uVar6 = FUN_00291410(uVar6,0x3fe5555555555593);
      uVar5 = FUN_002914d0(uVar5,uVar6);
      uVar5 = FUN_00291410(uVar5,uVar7);
      if ((int)(iVar9 - 0x6147aU | 0x6b851U - iVar9) < 1) {
        if (iVar12 == 0) {
          uVar4 = FUN_00291468(uVar1,uVar5);
          uVar3 = FUN_002914d0(uVar3,uVar4);
        }
        else {
          uVar6 = FUN_002914d0(uVar4,0x3fe62e42fee00000);
          uVar5 = FUN_00291468(uVar1,uVar5);
          uVar3 = FUN_002914d0(uVar3,uVar5);
          uVar4 = FUN_002914d0(uVar4,0x3dea39ef35793c76);
          uVar3 = FUN_00291468(uVar3,uVar4);
          uVar3 = FUN_00291468(uVar3,uVar1);
          uVar1 = uVar6;
        }
      }
      else {
        uVar6 = FUN_002914d0(uVar1,0x3fe0000000000000);
        uVar6 = FUN_002914d0(uVar1,uVar6);
        if (iVar12 == 0) {
          uVar4 = FUN_00291410(uVar6,uVar5);
          uVar3 = FUN_002914d0(uVar3,uVar4);
          uVar3 = FUN_00291468(uVar6,uVar3);
        }
        else {
          uVar7 = FUN_002914d0(uVar4,0x3fe62e42fee00000);
          uVar5 = FUN_00291410(uVar6,uVar5);
          uVar3 = FUN_002914d0(uVar3,uVar5);
          uVar4 = FUN_002914d0(uVar4,0x3dea39ef35793c76);
          uVar3 = FUN_00291410(uVar3,uVar4);
          uVar3 = FUN_00291468(uVar6,uVar3);
          uVar3 = FUN_00291468(uVar3,uVar1);
          uVar1 = uVar7;
        }
      }
    }
    uVar1 = FUN_00291468(uVar1,uVar3);
  }
  return uVar1;
}


// ==== FUN_00365ba0 @ 00365ba0 ====

undefined8 FUN_00365ba0(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (long)param_1 >> 0x20;
  iVar6 = 0;
  if ((long)uVar5 < 0x100000) {
    if ((uVar5 & 0x7fffffff) == 0 && (int)param_1 == 0) {
      return DAT_0040b5a0;
    }
    if ((long)uVar5 < 0) {
      return 0;
    }
    iVar6 = -0x36;
    param_1 = FUN_002914d0(param_1,0x4350000000000000);
    uVar5 = (long)param_1 >> 0x20;
  }
  uVar3 = param_1;
  if ((long)uVar5 < 0x7ff00000) {
    iVar7 = iVar6 + -0x3ff + ((int)uVar5 >> 0x14);
    iVar6 = iVar7 >> 0x1f;
    uVar4 = FUN_00291a48(iVar7 - iVar6);
    uVar1 = FUN_00365588(param_1 & 0xffffffff |
                         (uVar5 & 0xfffff | (long)((iVar6 + 0x3ff) * 0x100000)) << 0x20);
    uVar2 = FUN_002914d0(uVar4,0x3d59fef311f12b36);
    uVar1 = FUN_002914d0(uVar1,0x3fdbcb7b1526e50e);
    param_1 = FUN_00291410(uVar2,uVar1);
    uVar3 = FUN_002914d0(uVar4,0x3fd34413509f6000);
  }
  uVar4 = FUN_00291410(param_1,uVar3);
  return uVar4;
}


// ==== FUN_00365d48 @ 00365d48 ====

long FUN_00365d48(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = FUN_00367f20(param_2);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}


// ==== FUN_00365da0 @ 00365da0 ====

long FUN_00365da0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = FUN_00367fe0(param_2,param_3);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}


// ==== FUN_00365e00 @ 00365e00 ====

long FUN_00365e00(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = FUN_00367f28(param_2,param_3,param_4);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}


// ==== FUN_00365e60 @ 00365e60 ====

long FUN_00365e60(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = FUN_00367ea8(param_2,param_3,param_4);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}


// ==== FUN_00365ec0 @ 00365ec0 ====

long FUN_00365ec0(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = FUN_00367f30(param_2);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}


// ==== FUN_00365f20 @ 00365f20 ====

long FUN_00365f20(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = FUN_00367e28(param_2,param_3,param_4);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}


// ==== FUN_00365f80 @ 00365f80 ====

undefined8 FUN_00365f80(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if (param_1 == 0) {
    uVar2 = FUN_0035d3c8(PTR_DAT_003d6944,0x365f80);
  }
  else {
    piVar6 = (int *)param_1;
    if (piVar6[0x15] == 0) {
      piVar6[0x15] = (int)PTR_DAT_003d6944;
      iVar7 = piVar6[0x15];
    }
    else {
      iVar7 = piVar6[0x15];
    }
    if (*(int *)(iVar7 + 0x38) == 0) {
      FUN_003660f8();
      uVar1 = *(ushort *)(piVar6 + 3);
    }
    else {
      uVar1 = *(ushort *)(piVar6 + 3);
    }
    uVar2 = 0;
    if (((uVar1 & 8) != 0) && (iVar7 = piVar6[4], iVar7 != 0)) {
      iVar5 = *piVar6;
      *piVar6 = iVar7;
      iVar4 = 0;
      iVar5 = iVar5 - iVar7;
      if ((uVar1 & 3) == 0) {
        iVar4 = piVar6[5];
      }
      piVar6[2] = iVar4;
      while (0 < iVar5) {
        lVar3 = (*(code *)piVar6[9])(piVar6[7],iVar7,iVar5);
        iVar5 = iVar5 - (int)lVar3;
        if (lVar3 < 1) {
          *(ushort *)(piVar6 + 3) = *(ushort *)(piVar6 + 3) | 0x40;
          return 0xffffffffffffffff;
        }
        iVar7 = iVar7 + (int)lVar3;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ==== FUN_00366090 @ 00366090 ====

void FUN_00366090(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  param_1[0x15] = param_4;
  *(undefined2 *)(param_1 + 3) = param_2;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[8] = FUN_0035d848;
  param_1[9] = FUN_0035d8b0;
  param_1[10] = FUN_0035d930;
  param_1[0xb] = FUN_0035d998;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = param_1;
  return;
}


// ==== FUN_003660f8 @ 003660f8 ====

void FUN_003660f8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(code **)(iVar1 + 0x3c) = FUN_0035d378;
  *(undefined4 *)(iVar1 + 0x38) = 1;
  FUN_00366090(iVar1 + 0x1e4,4,0,param_1);
  FUN_00366090(iVar1 + 0x23c,9,1,param_1);
  FUN_00366090(iVar1 + 0x294,10,2,param_1);
  *(int *)(iVar1 + 0x1e0) = iVar1 + 0x1e4;
  *(undefined4 *)(iVar1 + 0x1dc) = 3;
  *(undefined4 *)(iVar1 + 0x1d8) = 0;
  return;
}


// ==== FUN_00366188 @ 00366188 ====

void FUN_00366188(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (int)param_3 + -1;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (iVar2 != -1);
  }
  return;
}


// ==== FUN_003661b8 @ 003661b8 ====

int FUN_003661b8(int param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  uVar2 = param_3 * (int)param_2;
  if (uVar2 == 0) {
    param_3 = 0;
  }
  else {
    piVar5 = (int *)param_4;
    if (piVar5[1] < 0) {
      piVar5[1] = 0;
    }
    uVar4 = piVar5[1];
    uVar6 = uVar2;
    if (uVar4 < uVar2) {
      iVar1 = *piVar5;
      while( true ) {
        uVar6 = uVar6 - uVar4;
        FUN_00366188(param_1,iVar1,uVar4);
        param_1 = param_1 + uVar4;
        *piVar5 = *piVar5 + uVar4;
        lVar3 = FUN_0035d5b8(param_4);
        if (lVar3 != 0) break;
        uVar4 = piVar5[1];
        if (uVar6 <= uVar4) goto LAB_00366278;
        iVar1 = *piVar5;
      }
      if (param_2 == 0) {
        trap(7);
      }
      param_3 = (int)(uVar2 - uVar6) / (int)param_2;
    }
    else {
LAB_00366278:
      FUN_00366188(param_1,*piVar5,uVar6);
      piVar5[1] = piVar5[1] - uVar6;
      *piVar5 = *piVar5 + uVar6;
    }
  }
  return param_3;
}


// ==== FUN_003662d0 @ 003662d0 ====

/* Strings referenciadas:
     " ungetc error: *static buffer overflow* - char not added to buffer " */

uint FUN_003662d0(uint param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  puVar4 = (uint *)param_2;
  if (puVar4[0x15] == 0) {
    puVar4[0x15] = (uint)PTR_DAT_003d6944;
    uVar5 = puVar4[0x15];
  }
  else {
    uVar5 = puVar4[0x15];
  }
  if (*(int *)(uVar5 + 0x38) == 0) {
    FUN_003660f8();
    uVar1 = (ushort)puVar4[3];
  }
  else {
    uVar1 = (ushort)puVar4[3];
  }
  *(ushort *)(puVar4 + 3) = uVar1 & 0xffdf;
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 0x10) == 0) {
      return 0xffffffff;
    }
    if ((uVar1 & 8) == 0) {
      uVar1 = (ushort)puVar4[3];
    }
    else {
      lVar2 = FUN_00365f80(param_2);
      if (lVar2 != 0) {
        return 0xffffffff;
      }
      puVar4[2] = 0;
      puVar4[6] = 0;
      *(ushort *)(puVar4 + 3) = (ushort)puVar4[3] & 0xfff7;
      uVar1 = (ushort)puVar4[3];
    }
    *(ushort *)(puVar4 + 3) = uVar1 | 4;
  }
  uVar5 = param_1 & 0xff;
  if (puVar4[0xc] != 0) {
    if ((int)puVar4[0xd] <= (int)puVar4[1]) {
      FUN_00367e28(1,0x40b5b0,0x44);
      return 0xffffffff;
    }
    uVar3 = *puVar4;
    *puVar4 = uVar3 - 1;
    *(char *)(uVar3 - 1) = (char)param_1;
    puVar4[1] = puVar4[1] + 1;
    return uVar5;
  }
  if (puVar4[4] == 0) {
    uVar3 = puVar4[1];
  }
  else {
    uVar3 = *puVar4;
    if (puVar4[4] < uVar3) {
      if (*(byte *)(uVar3 - 1) == uVar5) {
        *puVar4 = uVar3 - 1;
        puVar4[1] = puVar4[1] + 1;
        return uVar5;
      }
      uVar3 = puVar4[1];
    }
    else {
      uVar3 = puVar4[1];
    }
  }
  puVar4[1] = 1;
  puVar4[0xf] = uVar3;
  puVar4[0xe] = *puVar4;
  puVar4[0xc] = (uint)(puVar4 + 0x10);
  puVar4[0xd] = 3;
  *puVar4 = (int)puVar4 + 0x42;
  *(char *)((int)puVar4 + 0x42) = (char)param_1;
  return uVar5;
}


// ==== FUN_00366468 @ 00366468 ====

int * FUN_00366468(undefined8 param_1,uint param_2)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x4c) == 0) {
    lVar2 = FUN_00364ab8(param_1,4,0x10);
    *(int *)(iVar4 + 0x4c) = (int)lVar2;
    if (lVar2 != 0) goto LAB_0036649c;
LAB_003664e4:
    piVar1 = (int *)0x0;
  }
  else {
LAB_0036649c:
    piVar3 = (int *)(param_2 * 4 + *(int *)(iVar4 + 0x4c));
    piVar1 = (int *)*piVar3;
    if (piVar1 == (int *)0x0) {
      iVar4 = 1 << (param_2 & 0x1f);
      piVar1 = (int *)FUN_00364ab8(param_1,1,iVar4 * 4 + 0x14);
      if (piVar1 == (int *)0x0) goto LAB_003664e4;
      *(uint *)((int)piVar1 + 4) = param_2;
      *(int *)((int)piVar1 + 8) = iVar4;
    }
    else {
      *piVar3 = *piVar1;
    }
    *(undefined4 *)((int)piVar1 + 0x10) = 0;
    *(undefined4 *)((int)piVar1 + 0xc) = 0;
  }
  return piVar1;
}


// ==== FUN_00366510 @ 00366510 ====

void FUN_00366510(int param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_2;
  if (param_2 != 0) {
    *puVar1 = *(undefined4 *)(puVar1[1] * 4 + *(int *)(param_1 + 0x4c));
    *(undefined4 **)(puVar1[1] * 4 + *(int *)(param_1 + 0x4c)) = puVar1;
  }
  return;
}


// ==== FUN_00366548 @ 00366548 ====

undefined8 FUN_00366548(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = (int)param_2;
  puVar5 = (uint *)(iVar7 + 0x14);
  iVar1 = *(int *)(iVar7 + 0x10);
  do {
    iVar6 = iVar6 + 1;
    uVar4 = (*puVar5 & 0xffff) * param_3 + param_4;
    uVar3 = (*puVar5 >> 0x10) * param_3 + (uVar4 >> 0x10);
    param_4 = uVar3 >> 0x10;
    *puVar5 = uVar3 * 0x10000 + (uVar4 & 0xffff);
    puVar5 = puVar5 + 1;
  } while (iVar6 < iVar1);
  if (param_4 != 0) {
    if (*(int *)(iVar7 + 8) <= iVar1) {
      uVar2 = FUN_00366468(param_1,*(int *)(iVar7 + 4) + 1);
      FUN_0035c544((int)uVar2 + 0xc,iVar7 + 0xc,*(int *)(iVar7 + 0x10) * 4 + 8);
      FUN_00366510(param_1,param_2);
      param_2 = uVar2;
    }
    *(uint *)((int)param_2 + iVar1 * 4 + 0x14) = param_4;
    *(int *)((int)param_2 + 0x10) = iVar1 + 1;
  }
  return param_2;
}


// ==== FUN_00366650 @ 00366650 ====

/* WARNING: Removing unreachable block (ram,0x0036668c) */

undefined8 FUN_00366650(undefined8 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = (param_4 + 8) / 9;
  iVar4 = 1;
  iVar3 = 0;
  if (1 < iVar6) {
    do {
      iVar4 = iVar4 << 1;
      iVar3 = iVar3 + 1;
    } while (iVar4 < iVar6);
  }
  iVar6 = 9;
  uVar2 = FUN_00366468(param_1,iVar3);
  *(undefined4 *)((int)uVar2 + 0x14) = param_5;
  *(undefined4 *)((int)uVar2 + 0x10) = 1;
  if (param_3 < 10) {
    pcVar5 = (char *)(param_2 + 10);
  }
  else {
    cVar1 = *(char *)(param_2 + 9);
    pcVar5 = (char *)(param_2 + 9);
    while( true ) {
      iVar6 = iVar6 + 1;
      uVar2 = FUN_00366548(param_1,uVar2,10,cVar1 + -0x30);
      if (param_3 <= iVar6) break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
    pcVar5 = pcVar5 + 2;
  }
  iVar3 = param_4 - iVar6;
  if (iVar6 < param_4) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      iVar3 = iVar3 + -1;
      uVar2 = FUN_00366548(param_1,uVar2,10,cVar1 + -0x30);
    } while (iVar3 != 0);
  }
  return uVar2;
}


// ==== FUN_00366788 @ 00366788 ====

int FUN_00366788(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 0xffff0000) == 0) {
    iVar1 = 0x10;
    param_1 = param_1 << 0x10;
  }
  if ((param_1 & 0xff000000) == 0) {
    iVar1 = iVar1 + 8;
    param_1 = param_1 << 8;
  }
  if ((param_1 & 0xf0000000) == 0) {
    iVar1 = iVar1 + 4;
    param_1 = param_1 << 4;
  }
  if ((param_1 & 0xc0000000) == 0) {
    iVar1 = iVar1 + 2;
    param_1 = param_1 << 2;
  }
  if ((-1 < (int)param_1) && (iVar1 = iVar1 + 1, (param_1 & 0x40000000) == 0)) {
    return 0x20;
  }
  return iVar1;
}


// ==== FUN_00366810 @ 00366810 ====

int FUN_00366810(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 7) == 0) {
    iVar2 = 0;
    if ((uVar1 & 0xffff) == 0) {
      iVar2 = 0x10;
      uVar1 = uVar1 >> 0x10;
    }
    if ((uVar1 & 0xff) == 0) {
      iVar2 = iVar2 + 8;
      uVar1 = uVar1 >> 8;
    }
    if ((uVar1 & 0xf) == 0) {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 >> 4;
    }
    if ((uVar1 & 3) == 0) {
      iVar2 = iVar2 + 2;
      uVar1 = uVar1 >> 2;
    }
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar2 + 1;
      if (uVar1 >> 1 == 0) {
        return 0x20;
      }
      *param_1 = uVar1 >> 1;
    }
    else {
      *param_1 = uVar1;
    }
    return iVar2;
  }
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 & 2) == 0) {
    *param_1 = uVar1 >> 2;
    return 2;
  }
  *param_1 = uVar1 >> 1;
  return 1;
}


// ==== FUN_003668d0 @ 003668d0 ====

void FUN_003668d0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00366468(param_1,1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}


// ==== FUN_00366908 @ 00366908 ====

undefined8 FUN_00366908(undefined8 param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  ushort *puVar17;
  int iVar18;
  uint *puVar19;
  
  iVar14 = param_2;
  if (*(int *)(param_2 + 0x10) < *(int *)(param_3 + 0x10)) {
    iVar14 = param_3;
    param_3 = param_2;
  }
  iVar2 = *(int *)(iVar14 + 0x10);
  iVar3 = *(int *)(param_3 + 0x10);
  iVar16 = iVar2 + iVar3;
  uVar8 = FUN_00366468(param_1,*(int *)(iVar14 + 4) + (uint)(*(int *)(iVar14 + 8) < iVar16));
  iVar18 = (int)uVar8;
  puVar12 = (undefined4 *)(iVar18 + 0x14);
  puVar19 = (uint *)(iVar14 + 0x14);
  puVar9 = puVar12 + iVar16;
  if (puVar12 < puVar9) {
    *puVar12 = 0;
    while (puVar12 = puVar12 + 1, puVar12 < puVar9) {
      *puVar12 = 0;
    }
  }
  puVar5 = (ushort *)(param_3 + 0x14);
  puVar15 = (uint *)(iVar18 + 0x14);
  while (puVar11 = puVar15, puVar5 < (ushort *)(param_3 + 0x14) + iVar3 * 2) {
    uVar1 = *puVar5;
    puVar17 = puVar5 + 2;
    puVar15 = puVar11 + 1;
    if (uVar1 != 0) {
      uVar6 = 0;
      puVar13 = puVar19;
      puVar10 = puVar11;
      do {
        uVar7 = *puVar13;
        uVar4 = *puVar10;
        puVar13 = puVar13 + 1;
        uVar6 = (uVar7 & 0xffff) * (uint)uVar1 + (uVar4 & 0xffff) + uVar6;
        *(ushort *)puVar10 = (ushort)uVar6;
        uVar6 = (uVar7 >> 0x10) * (uint)uVar1 + (uVar4 >> 0x10) + (uVar6 >> 0x10);
        *(ushort *)((int)puVar10 + 2) = (ushort)uVar6;
        uVar6 = uVar6 >> 0x10;
        puVar10 = puVar10 + 1;
      } while (puVar13 < puVar19 + iVar2);
      *puVar10 = uVar6;
    }
    uVar1 = puVar5[1];
    puVar5 = puVar17;
    if (uVar1 != 0) {
      uVar6 = *puVar11;
      uVar7 = 0;
      puVar13 = puVar19;
      do {
        uVar4 = *puVar13;
        *(ushort *)puVar11 = (ushort)uVar6;
        uVar7 = (uint)(ushort)uVar4 * (uint)uVar1 + (uint)*(ushort *)((int)puVar11 + 2) + uVar7;
        *(ushort *)((int)puVar11 + 2) = (ushort)uVar7;
        puVar11 = puVar11 + 1;
        puVar17 = (ushort *)((int)puVar13 + 2);
        puVar13 = puVar13 + 1;
        uVar6 = (uint)*puVar17 * (uint)uVar1 + (uint)(ushort)*puVar11 + (uVar7 >> 0x10);
        uVar7 = uVar6 >> 0x10;
      } while (puVar13 < puVar19 + iVar2);
      *puVar11 = uVar6;
    }
  }
  puVar19 = (uint *)(iVar18 + 0x14) + iVar16;
  while( true ) {
    if (iVar16 < 1) {
      *(int *)(iVar18 + 0x10) = iVar16;
      return uVar8;
    }
    puVar19 = puVar19 + -1;
    if (*puVar19 != 0) break;
    iVar16 = iVar16 + -1;
  }
  *(int *)(iVar18 + 0x10) = iVar16;
  return uVar8;
}


// ==== FUN_00366b10 @ 00366b10 ====

undefined8 FUN_00366b10(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((param_3 & 3) != 0) {
    param_2 = FUN_00366548(param_1,param_2,*(undefined4 *)(&DAT_0040b5f8 + ((param_3 & 3) - 1) * 4),
                           0);
  }
  param_3 = (int)param_3 >> 2;
  if (param_3 != 0) {
    puVar1 = *(undefined4 **)((int)param_1 + 0x48);
    uVar3 = param_2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_003668d0(param_1,0x271);
      *(undefined4 **)((int)param_1 + 0x48) = puVar1;
      *puVar1 = 0;
    }
    while( true ) {
      puVar2 = puVar1;
      param_2 = uVar3;
      if ((param_3 & 1) != 0) {
        param_2 = FUN_00366908(param_1,uVar3,puVar2);
        FUN_00366510(param_1,uVar3);
      }
      param_3 = (int)param_3 >> 1;
      if (param_3 == 0) break;
      uVar3 = param_2;
      puVar1 = (undefined4 *)*puVar2;
      if ((undefined4 *)*puVar2 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_00366908(param_1,puVar2,puVar2);
        *puVar2 = puVar1;
        *puVar1 = 0;
      }
    }
  }
  return param_2;
}


// ==== FUN_00366c10 @ 00366c10 ====

undefined8 FUN_00366c10(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = (int)param_3 >> 5;
  iVar11 = (int)param_2;
  iVar2 = iVar10 + *(int *)(iVar11 + 0x10);
  iVar9 = iVar2 + 1;
  iVar5 = *(int *)(iVar11 + 4);
  for (iVar6 = *(int *)(iVar11 + 8); iVar6 < iVar9; iVar6 = iVar6 << 1) {
    iVar5 = iVar5 + 1;
  }
  uVar1 = FUN_00366468(param_1,iVar5);
  param_3 = param_3 & 0x1f;
  puVar3 = (uint *)(iVar11 + 0x14);
  puVar8 = (uint *)((int)uVar1 + 0x14);
  if (0 < iVar10) {
    do {
      *puVar8 = 0;
      iVar10 = iVar10 + -1;
      puVar8 = puVar8 + 1;
    } while (iVar10 != 0);
  }
  puVar7 = puVar3 + *(int *)(iVar11 + 0x10);
  if (param_3 == 0) {
    do {
      uVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar8 = uVar4;
      puVar8 = puVar8 + 1;
    } while (puVar3 < puVar7);
  }
  else {
    uVar4 = 0;
    do {
      *puVar8 = *puVar3 << param_3 | uVar4;
      puVar8 = puVar8 + 1;
      uVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 >> (0x20 - param_3 & 0x1f);
    } while (puVar3 < puVar7);
    if (uVar4 != 0) {
      iVar9 = iVar2 + 2;
    }
    *puVar8 = uVar4;
  }
  *(int *)((int)uVar1 + 0x10) = iVar9 + -1;
  FUN_00366510(param_1,param_2);
  return uVar1;
}


// ==== FUN_00366d68 @ 00366d68 ====

int FUN_00366d68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = *(int *)(param_2 + 0x10);
  iVar1 = *(int *)(param_1 + 0x10) - iVar2;
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar4 = (uint *)(param_1 + 0x14) + iVar2;
  puVar3 = (uint *)(param_2 + 0x14 + iVar2 * 4);
  do {
    puVar4 = puVar4 + -1;
    puVar3 = puVar3 + -1;
    if (*puVar4 != *puVar3) {
      iVar2 = -1;
      if (*puVar3 <= *puVar4) {
        iVar2 = 1;
      }
      return iVar2;
    }
  } while ((uint *)(param_1 + 0x14) < puVar4);
  return 0;
}


// ==== FUN_00366dd0 @ 00366dd0 ====

undefined8 FUN_00366dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  
  lVar5 = FUN_00366d68(param_2,param_3);
  if (lVar5 == 0) {
    uVar6 = FUN_00366468(param_1,0);
    *(undefined4 *)((int)uVar6 + 0x14) = 0;
    *(undefined4 *)((int)uVar6 + 0x10) = 1;
  }
  else {
    uVar6 = param_2;
    if (lVar5 < 0) {
      uVar6 = param_3;
      param_3 = param_2;
    }
    iVar13 = (int)uVar6;
    uVar6 = FUN_00366468(param_1,*(undefined4 *)(iVar13 + 4));
    puVar10 = (uint *)(iVar13 + 0x14);
    iVar12 = (int)uVar6;
    *(uint *)(iVar12 + 0xc) = (uint)(lVar5 < 0);
    puVar11 = (uint *)((int)param_3 + 0x14);
    iVar7 = 0;
    iVar13 = *(int *)(iVar13 + 0x10);
    puVar14 = puVar10 + iVar13;
    puVar8 = puVar11 + *(int *)((int)param_3 + 0x10);
    piVar4 = (int *)(iVar12 + 0x14);
    do {
      piVar9 = piVar4;
      uVar1 = *puVar10;
      uVar2 = *puVar11;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      iVar7 = ((uVar1 & 0xffff) - (uVar2 & 0xffff)) + iVar7;
      *(short *)piVar9 = (short)iVar7;
      iVar7 = ((uVar1 >> 0x10) - (uVar2 >> 0x10)) + (iVar7 >> 0x10);
      *(short *)((int)piVar9 + 2) = (short)iVar7;
      iVar7 = iVar7 >> 0x10;
      piVar4 = piVar9 + 1;
    } while (puVar11 < puVar8);
    for (; piVar3 = piVar4, puVar10 < puVar14; puVar10 = puVar10 + 1) {
      uVar1 = *puVar10;
      iVar7 = (uVar1 & 0xffff) + iVar7;
      *(short *)piVar3 = (short)iVar7;
      iVar7 = (uVar1 >> 0x10) + (iVar7 >> 0x10);
      *(short *)((int)piVar3 + 2) = (short)iVar7;
      iVar7 = iVar7 >> 0x10;
      piVar4 = piVar3 + 1;
      piVar9 = piVar3;
    }
    if (*piVar9 == 0) {
      do {
        piVar9 = piVar9 + -1;
        iVar13 = iVar13 + -1;
      } while (*piVar9 == 0);
      *(int *)(iVar12 + 0x10) = iVar13;
    }
    else {
      *(int *)(iVar12 + 0x10) = iVar13;
    }
  }
  return uVar6;
}


// ==== FUN_00366f60 @ 00366f60 ====

ulong FUN_00366f60(int param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = (param_1 >> 0x20 & 0x7ff00000U) + 0xfcc00000;
  if ((long)iVar1 < 1) {
    uVar2 = -iVar1 >> 0x14;
    if ((int)uVar2 < 0x14) {
      uVar3 = (long)(0x80000 >> (uVar2 & 0x1f)) << 0x20;
    }
    else {
      if ((int)(uVar2 - 0x14) < 0x1f) {
        uVar2 = 1 << (0x1f - (uVar2 - 0x14) & 0x1f);
      }
      else {
        uVar2 = 1;
      }
      uVar3 = (ulong)uVar2;
    }
  }
  else {
    uVar3 = (long)iVar1 << 0x20;
  }
  return uVar3;
}


// ==== FUN_00367028 @ 00367028 ====

ulong FUN_00367028(int param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  
  puVar10 = (uint *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x10);
  puVar8 = puVar10 + iVar1 + -1;
  uVar9 = *puVar8;
  lVar2 = FUN_00366788((long)(int)uVar9);
  iVar6 = (int)lVar2;
  *param_2 = 0x20 - iVar6;
  if (lVar2 < 0xb) {
    uVar3 = ((long)(int)(uVar9 >> (0xbU - iVar6 & 0x1f)) | 0x3ff00000U) << 0x20;
    uVar5 = 0;
    if (puVar10 < puVar8) {
      uVar5 = puVar10[iVar1 + -2];
    }
    uVar4 = (ulong)(uVar9 << (iVar6 + 0x15U & 0x1f) | uVar5 >> (0xbU - iVar6 & 0x1f));
  }
  else {
    uVar5 = 0;
    if (puVar10 < puVar8) {
      puVar8 = puVar10 + iVar1 + -2;
      uVar5 = *puVar8;
    }
    uVar7 = iVar6 - 0xb;
    if (uVar7 == 0) {
      uVar3 = ((long)(int)uVar9 | 0x3ff00000U) << 0x20;
      uVar4 = (ulong)uVar5;
    }
    else {
      uVar3 = ((long)(int)(uVar9 << (uVar7 & 0x1f)) |
              (long)(int)(uVar5 >> (-uVar7 & 0x1f)) | 0x3ff00000U) << 0x20;
      uVar9 = 0;
      if (puVar10 < puVar8) {
        uVar9 = puVar8[-1];
      }
      uVar4 = (ulong)(uVar5 << (uVar7 & 0x1f) | uVar9 >> (-uVar7 & 0x1f));
    }
  }
  return uVar3 | uVar4;
}


// ==== FUN_003671c0 @ 003671c0 ====

undefined8 FUN_003671c0(undefined8 param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uStack_80;
  uint uStack_7c;
  
  uVar3 = FUN_00366468(param_1,1);
  uVar4 = param_2 >> 0x20 & 0x7fffffff;
  uStack_7c = (uint)((ulong)param_2 >> 0x20) & 0xfffff;
  iVar6 = (int)uVar3;
  uVar7 = uVar4 >> 0x14;
  if (uVar7 != 0) {
    uStack_7c = uStack_7c | 0x100000;
  }
  uStack_80 = (uint)param_2;
  if (uStack_80 == 0) {
    iVar5 = 1;
    iVar2 = FUN_00366810((uint)&uStack_80 | 4);
    *(undefined4 *)(iVar6 + 0x10) = 1;
    uVar1 = iVar2 + 0x20;
    *(uint *)(iVar6 + 0x14) = uStack_7c;
  }
  else {
    uVar1 = FUN_00366810(&uStack_80);
    if (uVar1 == 0) {
      *(uint *)(iVar6 + 0x14) = uStack_80;
    }
    else {
      *(uint *)(iVar6 + 0x14) = uStack_80 | uStack_7c << (-uVar1 & 0x1f);
      uStack_7c = uStack_7c >> (uVar1 & 0x1f);
    }
    iVar5 = 1;
    if (uStack_7c != 0) {
      iVar5 = 2;
    }
    *(uint *)(iVar6 + 0x18) = uStack_7c;
    *(int *)(iVar6 + 0x10) = iVar5;
  }
  if (uVar7 == 0) {
    *param_3 = uVar1 - 0x432;
    iVar6 = FUN_00366788(*(undefined4 *)(iVar5 * 4 + iVar6 + 0x10));
    iVar6 = iVar5 * 0x20 - iVar6;
  }
  else {
    iVar6 = 0x35 - uVar1;
    *param_3 = ((uint)uVar4 >> 0x14) + (uVar1 - 0x433);
  }
  *param_4 = iVar6;
  return uVar3;
}


// ==== FUN_00367340 @ 00367340 ====

void FUN_00367340(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iStack_50;
  int iStack_4c;
  
  uVar2 = FUN_00367028(param_1,&iStack_50);
  uVar3 = FUN_00367028(param_2,(uint)&iStack_50 | 4);
  iVar1 = (iStack_50 - iStack_4c) +
          (*(int *)((int)param_1 + 0x10) - *(int *)((int)param_2 + 0x10)) * 0x20;
  if (iVar1 < 1) {
    uVar3 = uVar3 & 0xffffffff | (long)((int)(uVar3 >> 0x20) + iVar1 * -0x100000) << 0x20;
  }
  else {
    uVar2 = uVar2 & 0xffffffff | (long)((int)(uVar2 >> 0x20) + iVar1 * 0x100000) << 0x20;
  }
  FUN_00291778(uVar2,uVar3);
  return;
}


// ==== SetGsCrt @ 00367460 ====

void SetGsCrt(void)

{
  syscall(2);
  return;
}


// ==== _Exit @ 00367480 ====

void _Exit(int __status)

{
  syscall(4);
  return;
}


// ==== AddIntcHandler @ 00367540 ====

void AddIntcHandler(void)

{
  syscall(0x10);
  return;
}


// ==== AddIntcHandler @ 00367550 ====

void AddIntcHandler(void)

{
  syscall(0x10);
  return;
}


// ==== RemoveIntcHandler @ 00367560 ====

void RemoveIntcHandler(void)

{
  syscall(0x11);
  return;
}


// ==== AddDmacHandler @ 00367570 ====

void AddDmacHandler(void)

{
  syscall(0x12);
  return;
}


// ==== AddDmacHandler @ 00367580 ====

void AddDmacHandler(void)

{
  syscall(0x12);
  return;
}


// ==== RemoveDmacHandler @ 00367590 ====

void RemoveDmacHandler(void)

{
  syscall(0x13);
  return;
}


// ==== _EnableIntc @ 003675a0 ====

void _EnableIntc(void)

{
  syscall(0x14);
  return;
}


// ==== _DisableIntc @ 003675b0 ====

void _DisableIntc(void)

{
  syscall(0x15);
  return;
}


// ==== _EnableDmac @ 003675c0 ====

void _EnableDmac(void)

{
  syscall(0x16);
  return;
}


// ==== _DisableDmac @ 003675d0 ====

void _DisableDmac(void)

{
  syscall(0x17);
  return;
}


// ==== SetAlarm @ 003675e0 ====

void SetAlarm(void)

{
  syscall(0xfc);
  return;
}


// ==== CreateThread @ 00367660 ====

void CreateThread(void)

{
  syscall(0x20);
  return;
}


// ==== DeleteThread @ 00367670 ====

void DeleteThread(void)

{
  syscall(0x21);
  return;
}


// ==== _StartThread @ 00367680 ====

void _StartThread(void)

{
  syscall(0x22);
  return;
}


// ==== ExitDeleteThread @ 003676a0 ====

void ExitDeleteThread(void)

{
  syscall(0x24);
  return;
}


// ==== TerminateThread @ 003676b0 ====

void TerminateThread(void)

{
  syscall(0x25);
  return;
}


// ==== ChangeThreadPriority @ 003676f0 ====

void ChangeThreadPriority(void)

{
  syscall(0x29);
  return;
}


// ==== RotateThreadReadyQueue @ 00367710 ====

void RotateThreadReadyQueue(void)

{
  syscall(0x2b);
  return;
}


// ==== GetThreadId @ 00367750 ====

void GetThreadId(void)

{
  syscall(0x2f);
  return;
}


// ==== ReferThreadStatus @ 00367760 ====

void ReferThreadStatus(void)

{
  syscall(0x30);
  return;
}


// ==== SleepThread @ 00367780 ====

void SleepThread(void)

{
  syscall(0x32);
  return;
}


// ==== WakeupThread @ 00367790 ====

void WakeupThread(void)

{
  syscall(0x33);
  return;
}


// ==== _iWakeupThread @ 003677a0 ====

void _iWakeupThread(void)

{
  syscall(0xffffffffffffffcc);
  return;
}


// ==== SuspendThread @ 003677d0 ====

void SuspendThread(void)

{
  syscall(0x37);
  return;
}


// ==== EndOfHeap @ 00367840 ====

void EndOfHeap(void)

{
  syscall(0x3e);
  return;
}


// ==== CreateSema @ 00367860 ====

void CreateSema(void)

{
  syscall(0x40);
  return;
}


// ==== DeleteSema @ 00367870 ====

void DeleteSema(void)

{
  syscall(0x41);
  return;
}


// ==== SignalSema @ 00367880 ====

void SignalSema(void)

{
  syscall(0x42);
  return;
}


