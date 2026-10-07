// ==== FUN_00109e70 @ 00109e70 ====

void FUN_00109e70(void)

{
  return;
}


// ==== FUN_00109e78 @ 00109e78 ====

void FUN_00109e78(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_001092f8();
  *param_2 = iVar1;
  iVar1 = *param_2;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + iVar1;
  if (0 < (long)*(short *)(iVar1 + 0x16)) {
    iVar3 = 0x10000;
    do {
      iVar2 = iVar3 >> 0x10;
      iVar3 = iVar3 + 0x10000;
    } while ((long)iVar2 < (long)*(short *)(iVar1 + 0x16));
  }
  return;
}


// ==== FUN_00109ee0 @ 00109ee0 ====
// GLOBAL DAT_0040eae4 undefined4

undefined4 FUN_00109ee0(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00109f68();
  uVar1 = 0;
  if (lVar2 == 0) {
    switch(DAT_0040eae4) {
    case 0:
      uVar1 = 5;
      break;
    case 1:
      uVar1 = 6;
      break;
    case 2:
      uVar1 = 3;
      break;
    case 3:
      uVar1 = 1;
      break;
    default:
      uVar1 = 0;
      break;
    case 5:
      uVar1 = 4;
      break;
    case 6:
      uVar1 = 2;
    }
  }
  return uVar1;
}


// ==== FUN_00109f68 @ 00109f68 ====
// GLOBAL PTR_LAB_003f30b0 undefined_*

undefined8 FUN_00109f68(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x00109f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_003f30b0)[(int)param_2])();
    return uVar1;
  }
  return 0;
}


// ==== FUN_00109fb0 @ 00109fb0 ====
// GLOBAL PTR_DAT_003bc5e0 undefined_*

void FUN_00109fb0(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_002789c0(param_1 + 0x20,2,0x28,0x28,PTR_DAT_003bc5e0,0x2000);
  return;
}


// ==== FUN_00109ff8 @ 00109ff8 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f518 int

undefined4 FUN_00109ff8(undefined1 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  puVar3 = param_1 + 0x20;
  puVar5 = (undefined4 *)(param_1 + 0x54);
  puVar4 = param_1 + 0xac;
  iVar6 = 0x14;
  uVar8 = 0x3f800000;
  uVar7 = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 4) = uVar7;
  *param_1 = 1;
  uVar7 = uVar8;
  FUN_00278ad0(puVar3);
  uVar10 = 0x43a00000;
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(iVar1 + 0x10) = uVar8;
  *(undefined4 *)(iVar1 + 0x14) = uVar8;
  *(undefined4 *)(iVar1 + 0x18) = uVar8;
  *(undefined4 *)(iVar1 + 0x1c) = uVar8;
  *(undefined4 *)(param_1 + 0x10) = 0x43390000;
  *(undefined4 *)(param_1 + 0xc) = 0x28a;
  uStack_110 = uVar8;
  uStack_10c = uVar8;
  uStack_108 = uVar8;
  uStack_104 = uVar8;
  iVar1 = FUN_001aeb50(DAT_0040f4c0,0);
  iVar9 = *(int *)(iVar1 + 0x78);
  iVar1 = FUN_001aeb50(DAT_0040f4c0,0);
  iVar1 = *(int *)(iVar1 + 0x7c);
  *(float *)(param_1 + 0x18) = (float)iVar9;
  *(float *)(param_1 + 0x1c) = (float)iVar1;
  *(float *)(param_1 + 0x14) = (float)iVar1 / 19.0;
  uVar2 = FUN_00278ec0(puVar3,0,*(undefined4 *)(param_1 + 0x34));
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  *(int *)(param_1 + 0xa8) = (int)uVar2;
  uStack_e4 = uVar8;
  FUN_00276610(uVar2,&uStack_110,&uStack_100,param_1 + 0x18,0);
  do {
    FUN_00275260(0x40d9a0,puVar4,0x40);
    puVar4 = puVar4 + 0x80;
    iVar6 = iVar6 + -1;
    uVar2 = FUN_00278ec0(puVar3,1,*(undefined4 *)(param_1 + 0x34));
    *puVar5 = (int)uVar2;
    uStack_10c = 0x44020000;
    uStack_100 = 0x3f000000;
    uStack_fc = 0x3f000000;
    puVar5 = puVar5 + 1;
    uStack_110 = uVar10;
    uStack_e0 = uVar7;
    uStack_dc = uVar7;
    FUN_00277530(0x41f00000,uVar2,&uStack_110,&uStack_100,*(undefined8 *)(DAT_0040f518 + 0x200),
                 *(undefined4 *)(DAT_0040f0e0 + 0x2107c),param_1 + 0xac,&uStack_e0,1);
  } while (-1 < iVar6);
  return 1;
}


// ==== FUN_0010a268 @ 0010a268 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f518 int
// GLOBAL PTR_s_ITC_Machine_Std_003bc3a0 pointer

/* Strings referenciadas:
     "ITC Machine Std"
     "Eurostile LT Std"
     "CREDITS_%02d" */

void FUN_0010a268(char *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  ulong uVar4;
  undefined1 in_zero_qw [16];
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  int *piVar8;
  int iVar9;
  undefined **ppuVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char *pcVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_100;
  char *pcStack_fc;
  char *pcStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  if (*param_1 != '\0') {
    fVar20 = *(float *)(param_1 + 0x10);
    fVar19 = *(float *)(DAT_0040f0e0 + 0x20140) - *(float *)(param_1 + 4);
    fStack_124 = 0.6;
    fVar18 = (fVar19 / fVar20) * (float)(*(int *)(param_1 + 0xc) + 0x1a);
    iStack_100 = (int)fVar18;
    fVar18 = fVar18 - (float)iStack_100;
    if (fVar20 < fVar19) {
      fStack_124 = 0.0;
      param_1[8] = '\x01';
    }
    else if (10.0 <= fVar19) {
      if (fVar19 < 13.0) {
        fStack_124 = 1.0 - ((fVar19 - 10.0) / 3.0) * 0.4;
      }
      else if (fVar20 - 3.0 < fVar19) {
        fStack_124 = ((fVar19 - (fVar20 - 3.0)) / 3.0) * 0.4 + 0.6;
      }
    }
    else {
      fStack_124 = 1.0;
    }
    uStack_150 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_e8 = 0x20000;
    pcStack_f8 = param_1 + 0x54;
    iStack_100 = iStack_100 + -0x15;
    FUN_00276610(*(undefined4 *)(param_1 + 0xa8),&uStack_150,&uStack_140,param_1 + 0x18,0);
    uVar21 = 0x3f800000;
    uVar22 = 0x41f00000;
    uStack_e8 = uStack_e8 | 0x107c;
    iVar13 = 0;
    do {
      iVar9 = iVar13 + iStack_100;
      if ((iVar9 < 1) || (*(int *)(param_1 + 0xc) <= iVar9)) {
        uVar12 = 0x40d9a0;
LAB_0010a54c:
        bVar3 = true;
      }
      else {
        sprintf(&uStack_150,0x3f30f8,iVar9 + -1);
        uVar6 = FUN_001087c8(DAT_0040f4c4,&uStack_150);
        uVar12 = 0x40d9a0;
        if (*(char *)uVar6 != '*') {
          uVar12 = uVar6;
        }
        if (iVar9 + -1 < 1) goto LAB_0010a54c;
        sprintf(&uStack_150,0x3f30f8,iVar9 + -2);
        pcVar17 = (char *)FUN_001087c8(DAT_0040f4c4,&uStack_150);
        if (((((*pcVar17 == '*') && (iVar9 != 0x136)) && (iVar9 != 0x168)) && (iVar9 != 0x141)) ||
           (bVar3 = false, iVar9 == 0x1c5)) goto LAB_0010a54c;
      }
      iStack_ec = iVar13 * 0x80;
      FUN_00275260(uVar12,param_1 + iStack_ec + 0xac,0x40);
      iVar9 = DAT_0040f0e0;
      if (bVar3) {
        fVar19 = *(float *)(param_1 + 0x14);
        iStack_f4 = iVar13 + 1;
        pcStack_fc = pcStack_f8 + iVar13 * 4;
        uStack_140 = 0x3f0000003f000000;
        iVar14 = 0;
        ppuVar10 = &PTR_s_ITC_Machine_Std_003bc3a0;
        uStack_150 = CONCAT44(((float)iVar13 - fVar18) * fVar19,0x43a00000);
        piVar11 = (int *)(DAT_0040f0e0 + uStack_e8);
        uVar12 = *(undefined8 *)(DAT_0040f518 + 0x200);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x208);
        uVar16 = *(undefined4 *)(DAT_0040f518 + 0x20c);
        piVar8 = piVar11;
        do {
          if ((*piVar8 != 0) && (lVar5 = stricmp(*ppuVar10,0x3f2478), lVar5 == 0)) {
            iVar13 = *piVar11;
            goto LAB_0010a638;
          }
          iVar14 = iVar14 + 1;
          ppuVar10 = ppuVar10 + 1;
          piVar8 = piVar8 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar14 < 2);
        iVar13 = *(int *)(iVar9 + 0x2107c);
LAB_0010a638:
        auVar2._8_4_ = uVar15;
        auVar2._0_8_ = uVar12;
        auVar2._12_4_ = uVar16;
        auVar7 = _por(in_zero_qw,auVar2);
        uStack_120 = uVar21;
        uStack_11c = uVar21;
        FUN_00277530(fVar19 * 0.7,*(undefined4 *)pcStack_fc,&uStack_150,&uStack_140,auVar7._0_8_,
                     iVar13,param_1 + iStack_ec + 0xac,&uStack_120,1);
      }
      else {
        iStack_f0 = iVar13 * 4;
        iStack_f4 = iVar13 + 1;
        pcVar17 = pcStack_f8 + iStack_f0;
        uVar6 = 0x3f2478;
        uStack_140 = 0x3f0000003f000000;
        iVar14 = 0;
        ppuVar10 = &PTR_s_ITC_Machine_Std_003bc3a0;
        uStack_150 = CONCAT44(((float)iVar13 - fVar18) * *(float *)(param_1 + 0x14),0x43a00000);
        piVar11 = (int *)(DAT_0040f0e0 + uStack_e8);
        uVar12 = *(undefined8 *)(DAT_0040f518 + 0x1f0);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
        uVar16 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
        piVar8 = piVar11;
        do {
          if (*piVar8 != 0) {
            uStack_e0 = (undefined4)uVar6;
            uStack_dc = (undefined4)((ulong)uVar6 >> 0x20);
            lVar5 = stricmp(*ppuVar10,uVar6);
            uVar6 = CONCAT44(uStack_dc,uStack_e0);
            if (lVar5 == 0) {
              iVar13 = *piVar11;
              goto LAB_0010a73c;
            }
          }
          iVar14 = iVar14 + 1;
          ppuVar10 = ppuVar10 + 1;
          piVar8 = piVar8 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar14 < 2);
        iVar13 = *(int *)(iVar9 + 0x2107c);
LAB_0010a73c:
        auVar7._8_4_ = uVar15;
        auVar7._0_8_ = uVar12;
        auVar7._12_4_ = uVar16;
        auVar7 = _por(in_zero_qw,auVar7);
        uStack_110 = uVar21;
        uStack_10c = uVar21;
        FUN_00277530(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)pcVar17,&uStack_150,&uStack_140,
                     auVar7._0_8_,iVar13,param_1 + iStack_ec + 0xac,&uStack_110,1);
        puVar1 = *(undefined8 **)(pcStack_f8 + iStack_f0);
        uStack_150 = puVar1[1];
        if (580.0 < (float)uStack_150) {
          uVar4 = (ulong)uStack_150 >> 0x20;
          uStack_150 = CONCAT44((int)uVar4,0x44110000);
          uStack_140 = CONCAT44((int)((ulong)*puVar1 >> 0x20),uVar22);
          puVar1[1] = uStack_150;
          **(undefined8 **)(pcStack_f8 + iStack_f0) = uStack_140;
        }
      }
      iVar13 = iStack_f4;
    } while (iStack_f4 < 0x15);
  }
  return;
}


// ==== FUN_0010a820 @ 0010a820 ====

void FUN_0010a820(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00278ea0(param_1 + 0x20);
  }
  return;
}


// ==== FUN_0010a848 @ 0010a848 ====

undefined4 FUN_0010a848(undefined1 *param_1)

{
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  return 1;
}


// ==== FUN_0010a860 @ 0010a860 ====

void FUN_0010a860(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[8] = 0;
  return;
}


// ==== FUN_0010a870 @ 0010a870 ====
// GLOBAL PTR_s_BASLUS-21376_003bc5f8 undefined_*
// GLOBAL PTR_s_view.ico_003bc5ec undefined_*
// GLOBAL PTR_s_icon.sys_003bc5f0 undefined_*
// GLOBAL PTR_s_BLACK_003bc5f4 undefined_*

/* Strings referenciadas:
     "view.ico"
     "icon.sys"
     "BLACK"
     "BASLUS-21376"
     "%s/%s" */

void FUN_0010a870(undefined8 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x524) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x51c) = 0;
  *(undefined4 *)(iVar3 + 0x50c) = 0;
  *(undefined1 *)(iVar3 + 0x510) = 0;
  *(undefined4 *)(iVar3 + 0x508) = 0;
  *(undefined1 *)(iVar3 + 8) = 0;
  sprintf(iVar3 + 0x52e,0x3f3150,PTR_s_BASLUS_21376_003bc5f8);
  sprintf(iVar3 + 0x54e,0x3f3158,PTR_s_BASLUS_21376_003bc5f8,PTR_s_BASLUS_21376_003bc5f8);
  sprintf(iVar3 + 0x5c0,0x3f3158,PTR_s_BASLUS_21376_003bc5f8,PTR_s_view_ico_003bc5ec);
  sprintf(iVar3 + 0x5a0,0x3f3158,PTR_s_BASLUS_21376_003bc5f8,PTR_s_icon_sys_003bc5f0);
  memset(iVar3 + 0x5e8,0,0x3c4);
  *(undefined4 *)(iVar3 + 0x9ac) = 0x3c4;
  *(undefined1 *)(iVar3 + 0x5e9) = 0x53;
  uVar2 = 0;
  puVar1 = (undefined4 *)(iVar3 + 0x698);
  *(undefined1 *)(iVar3 + 0x5e8) = 0x50;
  *(undefined1 *)(iVar3 + 0x5ea) = 0x32;
  *(undefined1 *)(iVar3 + 0x5eb) = 0x44;
  *(undefined2 *)(iVar3 + 0x5ee) = 0x12;
  do {
    puVar1[-0x28] = 0;
    uVar2 = uVar2 + 1;
    puVar1[-0x24] = 0;
    puVar1[-0x20] = 0;
    puVar1[-0x1c] = 0;
    puVar1[-0x18] = 0;
    puVar1[-0x14] = 0;
    puVar1[-0x10] = 0xbf800000;
    puVar1[-0xc] = 0x3f800000;
    puVar1[-8] = 0x3f800000;
    puVar1[-4] = 0x3f800000;
    *puVar1 = 0x3f000000;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 4);
  strcpy(iVar3 + 0x6ec,PTR_s_view_ico_003bc5ec);
  strcpy(iVar3 + 0x72c,PTR_s_view_ico_003bc5ec);
  strcpy(iVar3 + 0x76c,PTR_s_view_ico_003bc5ec);
  FUN_0010ba00(param_1,iVar3 + 0x6a8,PTR_s_BLACK_003bc5f4);
  *(undefined4 *)(iVar3 + 0x5e0) = 0;
  *(undefined4 *)(iVar3 + 0x5e4) = 0;
  *(undefined4 *)(iVar3 + 0x59c) = 0;
  *(undefined4 *)(iVar3 + 0x570) = 0;
  *(int *)(iVar3 + 0x57c) = iVar3 + 0x54e;
  *(int *)(iVar3 + 0x588) = iVar3 + 0x51c;
  *(int *)(iVar3 + 0x594) = iVar3 + 0xb50;
  *(int *)(iVar3 + 0x580) = iVar3 + 0x5a0;
  *(int *)(iVar3 + 0x58c) = iVar3 + 0x9ac;
  *(int *)(iVar3 + 0x598) = iVar3 + 0x5e8;
  *(int *)(iVar3 + 0x584) = iVar3 + 0x5c0;
  *(int *)(iVar3 + 0x590) = iVar3 + 0x5e4;
  *(undefined4 *)(iVar3 + 4) = 1;
  *(undefined4 *)(iVar3 + 0x578) = 1;
  FUN_0010bbf8(param_1);
  return;
}


// ==== FUN_0010aa70 @ 0010aa70 ====
// GLOBAL DAT_0040f4ec undefined4

undefined4 FUN_0010aa70(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 4);
  if (iVar2 == 2) {
LAB_0010ab68:
    *(undefined4 *)(iVar3 + 0x51c) = 0x1668;
    *(undefined4 *)(iVar3 + 4) = 3;
  }
  else {
    if (iVar2 < 3) {
      if (iVar2 != 1) goto LAB_0010ac34;
      FUN_0026f440(iVar3 + 0x9b0);
      iVar2 = 0;
      do {
        puVar1 = (undefined1 *)(iVar3 + 0x52b + iVar2);
        *(undefined1 *)(iVar3 + 0x528 + iVar2) = 0;
        iVar2 = iVar2 + 1;
        *puVar1 = 0;
      } while (iVar2 < 3);
      *(undefined1 *)(iVar3 + 8) = 0;
      FUN_0010bc00(param_1);
      *(undefined4 *)(iVar3 + 4) = 0x38;
LAB_0010ab08:
      *(undefined4 *)(iVar3 + 0xc) = 0;
      iVar2 = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0;
      do {
        puVar1 = (undefined1 *)(iVar3 + 0x52b + iVar2);
        *(undefined1 *)(iVar3 + 0x528 + iVar2) = 0;
        iVar2 = iVar2 + 1;
        *puVar1 = 0;
      } while (iVar2 < 3);
      FUN_0010f260(DAT_0040f4ec);
      *(undefined4 *)(iVar3 + 4) = 2;
      goto LAB_0010ab68;
    }
    if (iVar2 != 3) {
      if (iVar2 != 0x38) goto LAB_0010ac34;
      goto LAB_0010ab08;
    }
  }
  FUN_0010b618(param_1,0);
  *(undefined4 *)(iVar3 + 0x4f4) = 0;
  *(undefined4 *)(iVar3 + 0x4f8) = 0;
  *(undefined1 *)(iVar3 + 0x512) = 0;
  *(undefined1 *)(iVar3 + 0x513) = 0;
  *(undefined1 *)(iVar3 + 0x510) = 0;
  *(undefined1 *)(iVar3 + 0x514) = 0;
  *(undefined1 *)(iVar3 + 0x517) = 0;
  *(undefined4 *)(iVar3 + 0x574) = 0;
  *(undefined4 *)(iVar3 + 0x504) = 0;
  *(undefined4 *)(iVar3 + 0x524) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x500) = 0xffffffff;
  *(undefined1 *)(iVar3 + 0x515) = 1;
  FUN_0010b338(param_1,0);
  FUN_0010b3a8(param_1,0,0,0,0);
  *(undefined4 *)(iVar3 + 0x4f8) = 0;
  if (*(int *)(iVar3 + 0x4f4) < 1) {
    *(undefined4 *)(iVar3 + 0x4f8) = 0;
  }
  FUN_0010b4d8(param_1,0);
  FUN_0010b530(param_1,0);
  *(undefined2 *)(iVar3 + 0x44a) = 0;
  *(undefined2 *)(iVar3 + 0x44c) = 0;
  FUN_0010b6b8(param_1);
  FUN_0010b9b0(param_1);
  *(undefined4 *)(iVar3 + 0x50c) = 0;
  *(undefined4 *)(iVar3 + 4) = 6;
LAB_0010ac34:
  *(undefined4 *)(iVar3 + 4) = 0x1c;
  return 1;
}


// ==== fe_FE_MCOption_ProfileEmpty_0010ac48 @ 0010ac48 ====
// GLOBAL DAT_0040f4c4 undefined4

/* Strings referenciadas:
     "FE_MCOption_ProfileEmpty"
     "FE_MCOption_ProfileCorrupt"
     "FE_MCOption_Yes"
     "FE_MCOption_No"
     "FE_MCOption_Continue"
     "FE_MCOption_Retry"
     "FE_MCTitle_LoadProfile"
     "FE_MCTitle_SaveProfile"
     "FE_MCLoad_AskConfirm"
     "FE_MCSave_AskOverwrite"
     "FE_MCSave_AskSave"
     "FE_MCContinueNoSaveConfirm"
     ... */

undefined4 fe_FE_MCOption_ProfileEmpty_0010ac48(int param_1)

{
  undefined4 uVar1;
  
  memset(*(int *)(param_1 + 0xa8c),0,*(int *)(param_1 + 0xb4c) - *(int *)(param_1 + 0xa8c));
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3160);
  *(undefined4 *)(param_1 + 0xb28) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3180);
  *(undefined4 *)(param_1 + 0xb2c) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f31a0);
  *(undefined4 *)(param_1 + 0xb38) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f31b0);
  *(undefined4 *)(param_1 + 0xb3c) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f31c0);
  *(undefined4 *)(param_1 + 0xb40) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f31d8);
  *(undefined4 *)(param_1 + 0xb44) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f31f0);
  *(undefined4 *)(param_1 + 0xb48) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3208);
  *(undefined4 *)(param_1 + 0xb4c) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3220);
  *(undefined4 *)(param_1 + 0xacc) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3238);
  *(undefined4 *)(param_1 + 0xaec) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3250);
  *(undefined4 *)(param_1 + 0xaf0) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3268);
  *(undefined4 *)(param_1 + 0xaf4) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3288);
  *(undefined4 *)(param_1 + 0xaf8) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f32a8);
  *(undefined4 *)(param_1 + 0xac0) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f32c8);
  *(undefined4 *)(param_1 + 0xb0c) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f32e8);
  *(undefined4 *)(param_1 + 0xb14) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3300);
  *(undefined4 *)(param_1 + 0xb18) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3318);
  *(undefined4 *)(param_1 + 0xb1c) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3330);
  *(undefined4 *)(param_1 + 0xb20) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3350);
  *(undefined4 *)(param_1 + 0xb24) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3378);
  *(undefined4 *)(param_1 + 0xa8c) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3390);
  *(undefined4 *)(param_1 + 0xa90) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f33a8);
  *(undefined4 *)(param_1 + 0xa94) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f33c0);
  *(undefined4 *)(param_1 + 0xa98) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f33d8);
  *(undefined4 *)(param_1 + 0xa9c) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f33f0);
  *(undefined4 *)(param_1 + 0xaa0) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3408);
  *(undefined4 *)(param_1 + 0xaa4) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3428);
  *(undefined4 *)(param_1 + 0xaa8) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3440);
  *(undefined4 *)(param_1 + 0xaac) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3458);
  *(undefined4 *)(param_1 + 0xab0) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3470);
  *(undefined4 *)(param_1 + 0xab4) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3488);
  *(undefined4 *)(param_1 + 0xab8) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f34a0);
  *(undefined4 *)(param_1 + 0xabc) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f34b8);
  *(undefined4 *)(param_1 + 0xac8) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f34d8);
  *(undefined4 *)(param_1 + 0xad0) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f34f0);
  *(undefined4 *)(param_1 + 0xad4) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3508);
  *(undefined4 *)(param_1 + 0xad8) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3520);
  *(undefined4 *)(param_1 + 0xadc) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3538);
  *(undefined4 *)(param_1 + 0xae0) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3550);
  *(undefined4 *)(param_1 + 0xae4) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3568);
  *(undefined4 *)(param_1 + 0xae8) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f3588);
  *(undefined4 *)(param_1 + 0xafc) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f35a0);
  *(undefined4 *)(param_1 + 0xb00) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f35b8);
  *(undefined4 *)(param_1 + 0xb04) = uVar1;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f35e0);
  *(undefined4 *)(param_1 + 0xb08) = uVar1;
  *(undefined1 *)(param_1 + 8) = 1;
  return 1;
}


// ==== FUN_0010b018 @ 0010b018 ====
// GLOBAL DAT_0040f0e0 int

void FUN_0010b018(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = (int)param_1;
  if (((*(int *)(iVar2 + 0xc) != 0) && (*(int *)(iVar2 + 4) != 1)) &&
     (lVar1 = FUN_0010b610(), lVar1 == 0)) {
    fVar3 = *(float *)(iVar2 + 0x508);
    fVar4 = *(float *)(DAT_0040f0e0 + 0x20140);
    *(float *)(iVar2 + 0x508) = fVar4;
    fVar3 = *(float *)(iVar2 + 0x504) - (fVar4 - fVar3);
    *(float *)(iVar2 + 0x504) = fVar3;
    if (fVar3 < 0.0) {
      *(undefined4 *)(iVar2 + 0x504) = 0;
    }
    switch(*(undefined4 *)(iVar2 + 0xc)) {
    case 1:
      FUN_0010c398(param_1);
      break;
    case 2:
      FUN_0010e0f0(param_1);
      break;
    case 3:
      FUN_0010cf18(param_1);
      break;
    case 4:
      FUN_0010c8e8(param_1);
      break;
    case 5:
      FUN_0010d9f0(param_1);
      break;
    case 6:
      FUN_0010e498(param_1);
      break;
    case 7:
      FUN_0010e5f0(param_1);
      break;
    case 8:
      FUN_0010e740(param_1);
      break;
    case 9:
      FUN_0010e720(param_1);
    }
    FUN_0010ebd0(param_1);
  }
  return;
}


// ==== FUN_0010b160 @ 0010b160 ====

long FUN_0010b160(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0026f7e0(param_1 + 0x9b0,0,0);
  if ((lVar1 != 0) && (lVar1 != 0xd)) {
    lVar1 = FUN_0026f7e0(param_1 + 0x9b0,1,0);
  }
  return lVar1;
}


// ==== FUN_0010b1c8 @ 0010b1c8 ====

void FUN_0010b1c8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = (undefined1 *)(param_1 + 0x52b);
  do {
    puVar1[-3] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar2);
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_0010b200 @ 0010b200 ====

void FUN_0010b200(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = (undefined1 *)(param_1 + 0x52b);
  do {
    puVar1[-3] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar2);
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)(param_1 + 0xc) = 8;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


// ==== FUN_0010b238 @ 0010b238 ====

void FUN_0010b238(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = (undefined1 *)(param_1 + 0x52b);
  do {
    puVar1[-3] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar2);
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// ==== FUN_0010b270 @ 0010b270 ====

void FUN_0010b270(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  iVar2 = 2;
  *(undefined1 *)(param_1 + 0x515) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x52b);
  do {
    puVar1[-3] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_0010b2a8 @ 0010b2a8 ====

void FUN_0010b2a8(int param_1)

{
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// ==== FUN_0010b2c0 @ 0010b2c0 ====

void FUN_0010b2c0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x517) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 5;
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// ==== FUN_0010b2d8 @ 0010b2d8 ====

void FUN_0010b2d8(int param_1)

{
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)(param_1 + 0xc) = 9;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ==== FUN_0010b2f0 @ 0010b2f0 ====

void FUN_0010b2f0(int param_1)

{
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)(param_1 + 0xc) = 6;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


// ==== FUN_0010b308 @ 0010b308 ====

void FUN_0010b308(int param_1)

{
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)(param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// ==== FUN_0010b320 @ 0010b320 ====

int FUN_0010b320(int param_1)

{
  return param_1 + 0x3a;
}


// ==== FUN_0010b328 @ 0010b328 ====

int FUN_0010b328(int param_1,int param_2)

{
  return param_1 + param_2 * 0x40 + 0x34a;
}


// ==== FUN_0010b338 @ 0010b338 ====

void FUN_0010b338(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x3a) = 0;
  *(undefined2 *)(iVar1 + 0x3c) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(iVar1 + 0x504) = 0;
    FUN_0010b4d8(param_1,0);
  }
  else {
    FUN_00275260(param_2,iVar1 + 0x3a,0x188);
    *(undefined4 *)(iVar1 + 0x504) = 0x404ccccd;
  }
  *(undefined1 *)(iVar1 + 0x512) = 1;
  *(undefined4 *)(iVar1 + 0x500) = 0xffffffff;
  return;
}


// ==== FUN_0010b3a8 @ 0010b3a8 ====

void FUN_0010b3a8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x4f4) = 0;
  uVar2 = 0;
  puVar1 = (undefined2 *)(iVar3 + 0x34c);
  do {
    puVar1[-1] = 0;
    uVar2 = uVar2 + 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x20;
  } while (uVar2 < 4);
  if (param_2 != 0) {
    FUN_00275260(param_2,iVar3 + 0x34a,0x20);
    *(int *)(iVar3 + 0x4f4) = *(int *)(iVar3 + 0x4f4) + 1;
  }
  if (param_3 != 0) {
    FUN_00275260(param_3,iVar3 + 0x38a,0x20);
    *(int *)(iVar3 + 0x4f4) = *(int *)(iVar3 + 0x4f4) + 1;
  }
  if (param_4 != 0) {
    FUN_00275260(param_4,iVar3 + 0x3ca,0x20);
    *(int *)(iVar3 + 0x4f4) = *(int *)(iVar3 + 0x4f4) + 1;
  }
  if (param_5 != 0) {
    FUN_00275260(param_5,iVar3 + 0x40a,0x20);
    *(int *)(iVar3 + 0x4f4) = *(int *)(iVar3 + 0x4f4) + 1;
  }
  if (*(int *)(iVar3 + 0x4f4) == 0) {
    FUN_0010b4d8(param_1,0);
  }
  else {
    *(undefined4 *)(iVar3 + 0x504) = 0;
    *(undefined1 *)(iVar3 + 0x513) = 1;
  }
  *(undefined4 *)(iVar3 + 0x4f8) = 0;
  if (*(int *)(iVar3 + 0x4f4) < 1) {
    *(undefined4 *)(iVar3 + 0x4f8) = 0;
  }
  *(undefined4 *)(iVar3 + 0x500) = 0xffffffff;
  return;
}


// ==== FUN_0010b4d8 @ 0010b4d8 ====

void FUN_0010b4d8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4fc) = param_2;
  return;
}


// ==== FUN_0010b4e0 @ 0010b4e0 ====

bool FUN_0010b4e0(int param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  *(undefined2 *)(param_1 + 0x4ca) = 0;
  *(undefined2 *)(param_1 + 0x4cc) = 0;
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    FUN_00275260(param_2,param_1 + 0x4ca,0x14);
    lVar2 = FUN_00275340(param_1 + 0x4ca);
    bVar1 = 0 < lVar2;
  }
  return bVar1;
}


// ==== FUN_0010b530 @ 0010b530 ====

undefined4 FUN_0010b530(int param_1,long param_2)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0x4ca) = 0;
  *(undefined2 *)(param_1 + 0x4cc) = 0;
  if (param_2 != 0) {
    lVar1 = FUN_00275340(param_2);
    if (0 < lVar1) {
      FUN_00275398(param_1 + 0x4ca,0x14,param_2);
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0010b590 @ 0010b590 ====

bool FUN_0010b590(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_00275340(param_1 + 0x4ca);
  return 0 < lVar1;
}


// ==== FUN_0010b5b0 @ 0010b5b0 ====

void FUN_0010b5b0(undefined8 param_1)

{
  FUN_0010b338(param_1,0);
  FUN_0010b3a8(param_1,0,0,0,0);
  FUN_0010b4d8(param_1,0);
  *(undefined1 *)((int)param_1 + 0x513) = 0;
  *(undefined4 *)((int)param_1 + 0x500) = 0xffffffff;
  return;
}


// ==== FUN_0010b608 @ 0010b608 ====

void FUN_0010b608(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x500) = param_2;
  return;
}


// ==== FUN_0010b610 @ 0010b610 ====

undefined1 FUN_0010b610(int param_1)

{
  return *(undefined1 *)(param_1 + 0x515);
}


// ==== FUN_0010b618 @ 0010b618 ====

void FUN_0010b618(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x516) = param_2;
  return;
}


// ==== FUN_0010b620 @ 0010b620 ====

undefined4 FUN_0010b620(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  return uVar1;
}


// ==== FUN_0010b630 @ 0010b630 ====

int FUN_0010b630(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint in_t0_lo;
  int iVar6;
  
  bVar1 = false;
  iVar6 = 0;
  iVar4 = 0;
  puVar5 = (uint *)(param_1 + 0xc18);
  pcVar3 = (char *)(param_1 + 0x52b);
  do {
    if ((pcVar3[-3] != '\0') && (*pcVar3 == '\0')) {
      if (bVar1) {
        iVar2 = iVar4 * 0x778 + param_1;
        if (in_t0_lo < *(uint *)(iVar2 + 0xc18)) {
          in_t0_lo = *(uint *)(iVar2 + 0xc18);
          iVar6 = iVar4;
        }
      }
      else {
        bVar1 = true;
        in_t0_lo = *puVar5;
        iVar6 = iVar4;
      }
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 0x1de;
    pcVar3 = pcVar3 + 1;
  } while (iVar4 < 3);
  return iVar6;
}


// ==== FUN_0010b6b8 @ 0010b6b8 ====
// GLOBAL DAT_0040f4ec undefined4

void FUN_0010b6b8(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  iVar6 = 0;
  FUN_0010f288(DAT_0040f4ec,0,1);
  FUN_0010f648(DAT_0040f4ec);
  iVar2 = 0;
  do {
    puVar3 = (undefined8 *)FUN_0010f280(DAT_0040f4ec);
    iVar6 = iVar6 + 1;
    puVar1 = (undefined8 *)(iVar2 + (int)param_1 + 0xb50);
    puVar5 = puVar3;
    do {
      puVar4 = puVar5;
      puVar10 = puVar1;
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      *puVar10 = *puVar4;
      puVar10[1] = uVar7;
      puVar10[2] = uVar8;
      puVar10[3] = uVar9;
      puVar5 = puVar4 + 4;
      puVar1 = puVar10 + 4;
    } while (puVar5 != puVar3 + 0xec);
    uVar7 = puVar4[5];
    uVar8 = puVar4[6];
    puVar10[4] = *puVar5;
    puVar10[5] = uVar7;
    puVar10[6] = uVar8;
    iVar2 = iVar6 * 0x778;
  } while (iVar6 < 3);
  FUN_0010b7f0(param_1);
  return;
}


// ==== FUN_0010b7a0 @ 0010b7a0 ====

void FUN_0010b7a0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0xb50);
  if (*(int *)(param_1 + 0x520) != 0x1668) {
    iVar2 = 0;
    do {
      puVar1 = (undefined1 *)(param_1 + 0x52b + iVar2);
      *(undefined1 *)(param_1 + 0x528 + iVar2) = 1;
      iVar2 = iVar2 + 1;
      *puVar1 = 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 0x1de;
    } while (iVar2 < 3);
  }
  return;
}


// ==== FUN_0010b7f0 @ 0010b7f0 ====

void FUN_0010b7f0(int param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = (undefined1 *)(param_1 + 0x52b);
  puVar3 = (undefined4 *)(param_1 + 0xb50);
  iVar4 = 0;
  do {
    lVar1 = FUN_0010f680(puVar3);
    if (lVar1 == 1) {
      if (*(char *)((int)puVar3 + 0x76d) == '\0') {
        lVar1 = FUN_0010bbf0(param_1 + 0xb50);
        puVar2[-3] = 1;
        if (lVar1 != 1) goto LAB_0010b860;
      }
      else {
        puVar2[-3] = 0;
      }
      *puVar2 = 0;
    }
    else {
      puVar2[-3] = 1;
LAB_0010b860:
      *puVar2 = 1;
    }
    if (*(char *)(param_1 + 0x52b + iVar4) == '\x01') {
      *puVar3 = 0;
    }
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 0x1de;
    if (2 < iVar4) {
      return;
    }
  } while( true );
}


// ==== FUN_0010b8b0 @ 0010b8b0 ====

int FUN_0010b8b0(int param_1,int param_2)

{
  if (*(char *)(param_1 + param_2 + 0x528) == '\0') {
    return *(int *)(param_1 + 0xb28);
  }
  if (*(char *)(param_1 + param_2 + 0x52b) == '\0') {
    return param_2 * 0x778 + param_1 + 0xc20;
  }
  return *(int *)(param_1 + 0xb2c);
}


// ==== FUN_0010b8e8 @ 0010b8e8 ====

undefined8 FUN_0010b8e8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_30 [16];
  
  iVar3 = (int)param_1;
  FUN_0026f7e0(iVar3 + 0x9b0,0,auStack_30);
  if (*(char *)(iVar3 + 0x513) == '\x01') {
    if ((-1 < *(int *)(iVar3 + 0x500)) && (*(int *)(iVar3 + 0x500) < *(int *)(iVar3 + 0x4f4))) {
      FUN_0010b160(param_1);
    }
  }
  else if ((*(char *)(iVar3 + 0x514) == '\x01') && (-1 < *(int *)(iVar3 + 0x500))) {
    FUN_0010b160(param_1);
  }
  iVar3 = iVar3 + 0x9b0;
  lVar1 = FUN_0026f4a8(iVar3);
  if (lVar1 == 0xd) {
    uVar2 = FUN_0026f4b8(iVar3);
  }
  else {
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_0026f4b8(iVar3);
    }
  }
  return uVar2;
}


// ==== FUN_0010b9b0 @ 0010b9b0 ====

void FUN_0010b9b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 4;
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x588);
  do {
    piVar1 = (int *)*puVar2;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + (*piVar1 + 0x3ff) / 0x400;
  } while (uVar3 < 3);
  *(int *)(param_1 + 0x570) = iVar4 * 0x400;
  return;
}


// ==== FUN_0010ba00 @ 0010ba00 ====

void FUN_0010ba00(undefined8 param_1,ushort *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    iVar3 = (int)cVar1;
    iVar2 = iVar3 + 0x20;
    if (((iVar3 - 0x61U < 0x1a) || (iVar2 = iVar3 + 0x1f, iVar3 - 0x41U < 0x1a)) ||
       (iVar2 = iVar3 + 0x1f, iVar3 - 0x30U < 10)) {
      *param_2 = (ushort)(iVar2 << 8) | 0x82;
    }
    else if (cVar1 == ' ') {
      *param_2 = 0x4081;
    }
    else {
      *param_2 = 0;
    }
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
    cVar1 = *param_3;
  }
  *param_2 = 0;
  return;
}


// ==== FUN_0010ba78 @ 0010ba78 ====
// GLOBAL DAT_0040f4f0 undefined4
// GLOBAL DAT_0040f4c4 undefined4

void FUN_0010ba78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001092f8();
  uVar2 = FUN_00109300(param_1);
  FUN_0010bae0(DAT_0040f4f0,uVar1,uVar2);
  FUN_00108540(DAT_0040f4c4,0xd,uVar1,0);
  return;
}


// ==== FUN_0010bae0 @ 0010bae0 ====

void FUN_0010bae0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x5e4) = param_3;
  *(int *)(param_1 + 0x590) = param_1 + 0x5e4;
  *(undefined4 *)(param_1 + 0x59c) = param_2;
  *(undefined4 *)(param_1 + 0x5e0) = param_2;
  return;
}


// ==== FUN_0010baf8 @ 0010baf8 ====
// GLOBAL DAT_0040f4c4 int
// GLOBAL PTR_s_data/view.ico_003bc5e8 undefined_*

/* Strings referenciadas:
     "data/view.ico" */

bool FUN_0010baf8(undefined8 param_1)

{
  bool bVar1;
  
  FUN_0010bae0(param_1,0,0);
  if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
     (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
    bVar1 = true;
  }
  if (!bVar1) {
    FUN_001093c0(DAT_0040f4c4,PTR_s_data_view_ico_003bc5e8,8,2,0x10ba78,0,0,0x2000000);
  }
  return !bVar1;
}


// ==== FUN_0010bb80 @ 0010bb80 ====
// GLOBAL DAT_0040f4c4 undefined4

bool FUN_0010bb80(void)

{
  long lVar1;
  
  lVar1 = FUN_00108458(DAT_0040f4c4,0xd,0);
  return lVar1 != 0;
}


// ==== FUN_0010bbb0 @ 0010bbb0 ====
// GLOBAL DAT_0040f4c4 undefined4

void FUN_0010bbb0(undefined8 param_1)

{
  FUN_0010bae0(param_1,0,0);
  FUN_001084a8(DAT_0040f4c4,0xd,0);
  return;
}


// ==== FUN_0010bbe8 @ 0010bbe8 ====

void FUN_0010bbe8(void)

{
  return;
}


// ==== FUN_0010bbf0 @ 0010bbf0 ====

undefined4 FUN_0010bbf0(void)

{
  return 1;
}


// ==== FUN_0010bbf8 @ 0010bbf8 ====
// GLOBAL null undefined1

void FUN_0010bbf8(void)

{
  uGpffff81b2 = 0;
  return;
}


// ==== FUN_0010bc00 @ 0010bc00 ====

undefined4 FUN_0010bc00(void)

{
  return 1;
}


// ==== FUN_0010bc08 @ 0010bc08 ====

void FUN_0010bc08(void)

{
  return;
}


// ==== FUN_0010bc10 @ 0010bc10 ====
// GLOBAL DAT_0040f4f0 int
// GLOBAL DAT_0040f0e4 undefined4
// GLOBAL DAT_0040f53c int_*
// GLOBAL null char

/* Strings referenciadas:
     "Card status: %d"
     "Card error: %d"
     "BootupLoadedProfile: %d"
     "AutoSaveIndex: %d"
     "IsWaitingOnInput: %d"
     "IsFinished: %d"
     "mePrepareState: %d"
     "meMemCardState: %d"
     "meBootupSubstate: %d"
     "meSaveSubstate: %d"
     "meLoadSubstate: %d"
     "meAutosaveSubstate: %d"
     ... */

void FUN_0010bc10(void)

{
  uint uVar1;
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
  undefined1 in_zero_qw [16];
  undefined4 *puVar15;
  undefined8 uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_370 [256];
  undefined1 auStack_270 [256];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 auStack_160 [36];
  undefined4 auStack_d0 [4];
  
  uVar19 = 0x3f800000;
  uVar20 = 0x3f800000;
  uStack_170 = 0x3e99999a;
  uStack_16c = 0x3f800000;
  uStack_168 = 0x3e99999a;
  uStack_164 = 0x3f800000;
  uVar22 = 0x3e99999a;
  uVar23 = 0x3f800000;
  for (iVar17 = 8; iVar17 != -1; iVar17 = iVar17 + -1) {
  }
  if (cGpffff81b2 != '\0') {
    uVar24 = 0x41a00000;
    uVar16 = FUN_0026f4a8(DAT_0040f4f0 + 0x9b0);
    sprintf(auStack_370,0x3f3688,uVar16);
    auVar18._8_4_ = uVar19;
    auVar18._0_8_ = 0x3f8000003f800000;
    auVar18._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar18);
    FUN_0027c370(uVar24,0x42200000,uVar24,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    iVar17 = 9;
    uVar16 = FUN_0026f4b8(DAT_0040f4f0 + 0x9b0);
    sprintf(auStack_370,0x3f3698,uVar16);
    auVar2._8_4_ = uVar19;
    auVar2._0_8_ = 0x3f8000003f800000;
    auVar2._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar2);
    FUN_0027c370(uVar24,0x42700000,uVar24,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    sprintf(auStack_370,0x3f36a8,*(undefined1 *)(DAT_0040f4f0 + 0x510));
    auVar3._8_4_ = uVar19;
    auVar3._0_8_ = 0x3f8000003f800000;
    auVar3._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar3);
    FUN_0027c370(uVar24,0x42a00000,uVar24,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    sprintf(auStack_370,0x3f36c0,*(undefined4 *)(DAT_0040f4f0 + 0x524));
    auVar4._8_4_ = uVar19;
    auVar4._0_8_ = 0x3f8000003f800000;
    auVar4._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar4);
    FUN_0027c370(uVar24,0x42c80000,uVar24,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    sprintf(auStack_370,0x3f36d8,*(undefined1 *)(DAT_0040f4f0 + 0x513));
    auVar5._8_4_ = uVar19;
    auVar5._0_8_ = 0x3f8000003f800000;
    auVar5._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar5);
    FUN_0027c370(uVar24,0x42f00000,uVar24,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    uVar16 = FUN_0010b610(DAT_0040f4f0);
    sprintf(auStack_370,0x3f36f0,uVar16);
    auVar6._8_4_ = uVar19;
    auVar6._0_8_ = 0x3f8000003f800000;
    auVar6._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar6);
    FUN_0027c370(uVar24,0x430c0000,uVar24,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    sprintf(auStack_370,0x3f3700,*(undefined4 *)(DAT_0040f4f0 + 4));
    auVar7._8_4_ = uVar19;
    auVar7._0_8_ = 0x3f8000003f800000;
    auVar7._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar7);
    FUN_0027c370(uVar24,0x43200000,uVar24,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    sprintf(auStack_370,0x3f3718,*(undefined4 *)(DAT_0040f4f0 + 0xc));
    auVar8._8_4_ = uVar19;
    auVar8._0_8_ = 0x3f8000003f800000;
    auVar8._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar8);
    FUN_0027c370(uVar24,0x43340000,uVar24,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    fVar28 = 15.0;
    auVar9._8_4_ = uVar19;
    auVar9._0_8_ = 0x3f8000003f800000;
    auVar9._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar9);
    puVar15 = auStack_d0;
    do {
      *puVar15 = auVar18._0_4_;
      puVar15[1] = auVar18._4_4_;
      puVar15[2] = auVar18._8_4_;
      puVar15[3] = auVar18._12_4_;
      iVar17 = iVar17 + -1;
      puVar15 = puVar15 + -4;
    } while (-1 < iVar17);
    uVar1 = *(uint *)(DAT_0040f4f0 + 0xc);
    if (uVar1 < 10) {
      auStack_160[uVar1 * 4] = 0x3e99999a;
      auStack_160[uVar1 * 4 + 1] = 0x3f800000;
      auStack_160[uVar1 * 4 + 2] = uVar22;
      auStack_160[uVar1 * 4 + 3] = uVar23;
    }
    iVar17 = 0;
    sprintf(auStack_370,0x3f3730,*(undefined4 *)(DAT_0040f4f0 + 0x10));
    FUN_0027c370(0x42200000,0x43480000,0x41700000,DAT_0040f0e4,auStack_370);
    sprintf(auStack_370,0x3f3748,*(undefined4 *)(DAT_0040f4f0 + 0x18));
    fVar25 = fVar28 + 215.0;
    FUN_0027c370(0x42200000,0x43570000,0x41700000,DAT_0040f0e4,auStack_370);
    sprintf(auStack_370,0x3f3760,*(undefined4 *)(DAT_0040f4f0 + 0x14));
    fVar26 = fVar25 + fVar28;
    FUN_0027c370(0x42200000,fVar25,0x41700000,DAT_0040f0e4,auStack_370);
    sprintf(auStack_370,0x3f3778,*(undefined4 *)(DAT_0040f4f0 + 0x1c));
    fVar27 = fVar26 + fVar28;
    FUN_0027c370(0x42200000,fVar26,0x41700000,DAT_0040f0e4,auStack_370);
    sprintf(auStack_370,0x3f3790,*(undefined4 *)(DAT_0040f4f0 + 0x28));
    fVar25 = 20.0;
    FUN_0027c370(0x42200000,fVar27,0x41700000,DAT_0040f0e4,auStack_370);
    fVar27 = fVar27 + fVar28 + fVar25;
    FUN_00275128(DAT_0040f4f0 + 0x44a,auStack_370,0x100);
    fVar26 = 15.0;
    sprintf(auStack_370,0x3f37a8,auStack_370);
    auVar10._8_4_ = uVar19;
    auVar10._0_8_ = 0x3f8000003f800000;
    auVar10._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar10);
    FUN_0027c370(fVar25,fVar27,fVar26,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    fVar27 = fVar27 + fVar26;
    FUN_00275128(DAT_0040f4f0 + 0x3a,auStack_370,0x100);
    sprintf(auStack_370,0x3f37b8,auStack_370);
    fVar28 = fVar27 + fVar26;
    auVar11._8_4_ = uVar19;
    auVar11._0_8_ = 0x3f8000003f800000;
    auVar11._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar11);
    FUN_0027c370(fVar25,fVar27,fVar26,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    do {
      if (iVar17 == *(int *)(DAT_0040f4f0 + 0x4f8)) {
        auStack_160[iVar17 * 4] = 0x3e99999a;
        auStack_160[iVar17 * 4 + 1] = 0x3f800000;
        auStack_160[iVar17 * 4 + 2] = uVar22;
        auStack_160[iVar17 * 4 + 3] = uVar23;
      }
      else {
        auStack_160[iVar17 * 4] = 0x3f800000;
        auStack_160[iVar17 * 4 + 1] = 0x3f800000;
        auStack_160[iVar17 * 4 + 2] = uVar19;
        auStack_160[iVar17 * 4 + 3] = uVar20;
      }
      FUN_00275128(DAT_0040f4f0 + iVar17 * 0x40 + 0x34a,auStack_370,0x100);
      iVar17 = iVar17 + 1;
      sprintf(auStack_370,0x3f37c8,iVar17,auStack_370);
      fVar27 = fVar28 + fVar26;
      FUN_0027c370(fVar25,fVar28,0x41700000,DAT_0040f0e4,auStack_370);
      fVar28 = fVar27;
    } while (iVar17 < 4);
    fVar26 = 15.0;
    sprintf(auStack_370,0x3f37d8,*(undefined4 *)(DAT_0040f4f0 + 0x4f4),
            *(undefined4 *)(DAT_0040f4f0 + 0x4f8),*(undefined4 *)(DAT_0040f4f0 + 0x500));
    auVar12._8_4_ = uVar19;
    auVar12._0_8_ = 0x3f8000003f800000;
    auVar12._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar12);
    FUN_0027c370(fVar25,fVar27,fVar26,DAT_0040f0e4,auStack_370,auVar18._0_8_);
    fVar28 = 40.0;
    iVar17 = 0;
    do {
      uVar16 = FUN_0010b8b0(DAT_0040f4f0,iVar17);
      FUN_0035d1a0(auStack_270,uVar16,0x40);
      iVar21 = iVar17 + 1;
      sprintf(auStack_370,0x3f37f8,iVar17,auStack_270);
      auVar13._8_4_ = uVar19;
      auVar13._0_8_ = 0x3f8000003f800000;
      auVar13._12_4_ = uVar20;
      auVar18 = _por(in_zero_qw,auVar13);
      fVar25 = fVar28 + fVar26;
      FUN_0027c370(0x43c80000,fVar28,0x41700000,DAT_0040f0e4,auStack_370,auVar18._0_8_);
      fVar28 = fVar25;
      iVar17 = iVar21;
    } while (iVar21 < 3);
    sprintf(auStack_270,0x3f3808);
    if (*DAT_0040f53c != 0) {
      FUN_0035d1a0(auStack_270,*DAT_0040f53c + 8,0x40);
    }
    sprintf(auStack_370,0x3f3818,auStack_270);
    auVar14._8_4_ = uVar19;
    auVar14._0_8_ = 0x3f8000003f800000;
    auVar14._12_4_ = uVar20;
    auVar18 = _por(in_zero_qw,auVar14);
    FUN_0027c370(0x43c80000,fVar25,0x41700000,DAT_0040f0e4,auStack_370,auVar18._0_8_);
  }
  return;
}


// ==== FUN_0010c2f8 @ 0010c2f8 ====
// GLOBAL DAT_0040f4f0 undefined4

void FUN_0010c2f8(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    FUN_0010b2a8(DAT_0040f4f0);
    break;
  case 3:
    FUN_0010b238(DAT_0040f4f0);
    break;
  case 4:
    FUN_0010b270(DAT_0040f4f0);
    break;
  case 5:
    FUN_0010b2c0(DAT_0040f4f0,0);
    break;
  case 9:
    FUN_0010b2d8(DAT_0040f4f0);
  default:
  }
  return;
}


// ==== FUN_0010c398 @ 0010c398 ====
// GLOBAL DAT_0040f4ec undefined4
// GLOBAL DAT_0040f0e0 int

/* Strings referenciadas:
     "BootSequence"
     "**HARDCODED** This game uses autosave, do not remove card beyond this point.. blah blah blah "
    */

void FUN_0010c398(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 auStack_430 [1024];
  
  iVar14 = (int)param_1;
  switch(*(undefined4 *)(iVar14 + 0x10)) {
  case 0:
    FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xa8c));
    FUN_0010b4d8(param_1,0);
    FUN_0010b6b8(param_1);
    *(undefined1 *)(iVar14 + 0x515) = 0;
    *(undefined1 *)(iVar14 + 0x510) = 0;
    *(undefined4 *)(iVar14 + 0x524) = 0xffffffff;
    FUN_0010eac0(param_1,0);
    *(undefined4 *)(iVar14 + 0x10) = 1;
    break;
  case 1:
    lVar8 = FUN_0010eaf8(param_1);
    if (lVar8 == 0) {
      return;
    }
    lVar8 = FUN_0010ebc0(param_1);
    if (lVar8 != 0) {
      FUN_0010eac0(param_1,2);
      *(undefined4 *)(iVar14 + 0x10) = 2;
      return;
    }
    goto LAB_0010c5fc;
  case 2:
    lVar8 = FUN_0010eaf8(param_1);
    if (lVar8 == 0) {
      return;
    }
    lVar8 = FUN_0010ebc0(param_1);
    if (lVar8 == 0) {
      lVar8 = FUN_0026f4b8(iVar14 + 0x9b0);
      if (lVar8 != 9) goto LAB_0010c5fc;
    }
    else if (*(int *)(iVar14 + 0x520) != 0) {
      FUN_0010b5b0(param_1);
      FUN_0010eac0(param_1,0x17);
      FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xaac));
      FUN_0010b4d8(param_1,0);
      *(undefined4 *)(iVar14 + 0x10) = 4;
      return;
    }
    FUN_0010eac0(param_1,4);
    *(undefined4 *)(iVar14 + 0x10) = 3;
    break;
  case 3:
    lVar8 = FUN_0010eaf8(param_1);
    if (lVar8 == 0) {
      return;
    }
    lVar8 = FUN_0010ebc0(param_1);
    if (lVar8 == 0) {
      *(undefined4 *)(iVar14 + 0x10) = 5;
      return;
    }
    goto LAB_0010c89c;
  case 4:
    lVar8 = FUN_0010eaf8(param_1);
    if (lVar8 == 0) {
      return;
    }
    lVar8 = FUN_0010ebc0(param_1);
    if (lVar8 != 0) {
      FUN_0010b7f0(param_1);
      FUN_0010b7a0(param_1);
      uVar7 = FUN_0010b630(param_1);
      *(int *)(iVar14 + 0x50c) = (int)uVar7;
      if (((uVar7 < 3) && (iVar2 = iVar14 + (int)uVar7, *(char *)(iVar2 + 0x528) != '\0')) &&
         (*(char *)(iVar2 + 0x52b) != '\x01')) {
        puVar3 = (undefined8 *)FUN_0010f280(DAT_0040f4ec);
        iVar2 = *(int *)(iVar14 + 0x50c) * 0x778 + iVar14;
        puVar10 = (undefined8 *)(iVar2 + 0xb50);
        do {
          puVar4 = puVar3;
          puVar9 = puVar10;
          uVar12 = puVar9[1];
          uVar13 = puVar9[2];
          uVar11 = puVar9[3];
          *puVar4 = *puVar9;
          puVar4[1] = uVar12;
          puVar4[2] = uVar13;
          puVar4[3] = uVar11;
          puVar10 = puVar9 + 4;
          puVar3 = puVar4 + 4;
        } while (puVar10 != (undefined8 *)(iVar2 + 0x12b0));
        uVar11 = puVar9[5];
        uVar12 = puVar9[6];
        puVar4[4] = *puVar10;
        puVar4[5] = uVar11;
        puVar4[6] = uVar12;
        FUN_0010f470(DAT_0040f4ec);
        *(undefined1 *)(iVar14 + 0x510) = 1;
        *(undefined4 *)(iVar14 + 0x10) = 0xb;
        *(undefined4 *)(iVar14 + 0x524) = *(undefined4 *)(iVar14 + 0x50c);
        return;
      }
switchD_0010c878_caseD_2:
      goto LAB_0010c89c;
    }
LAB_0010c5fc:
    *(undefined4 *)(iVar14 + 0x10) = 10;
    break;
  case 5:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      iVar5 = FUN_0010b9b0(param_1);
      iVar2 = iVar5 + 0x3ff;
      if (-1 < iVar5) {
        iVar2 = iVar5;
      }
      sprintf(auStack_430,*(undefined4 *)(iVar14 + 0xa94),iVar2 >> 10);
      FUN_0010b338(param_1,auStack_430);
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar14 + 0xb38),*(undefined4 *)(iVar14 + 0xb3c),0,0);
      *(undefined4 *)(iVar14 + 0x4f8) = 1;
      bVar1 = 1 < *(int *)(iVar14 + 0x4f4);
LAB_0010c78c:
      if (!bVar1) {
        *(undefined4 *)(iVar14 + 0x4f8) = 0;
      }
      FUN_0010b4d8(param_1,2);
      return;
    }
    lVar8 = FUN_0010b8e8(param_1);
    if (lVar8 != 1) {
      iVar2 = *(int *)(iVar14 + 0x500);
      if (iVar2 == 0) goto LAB_0010c690;
joined_r0x0010c740:
      if (iVar2 != 1) {
        return;
      }
    }
    goto LAB_0010c7c8;
  case 6:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      iVar5 = FUN_0010b9b0(param_1);
      iVar2 = iVar5 + 0x3ff;
      if (-1 < iVar5) {
        iVar2 = iVar5;
      }
      sprintf(auStack_430,*(undefined4 *)(iVar14 + 0xa90),iVar2 >> 10);
      FUN_0010b338(param_1,auStack_430);
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar14 + 0xb38),*(undefined4 *)(iVar14 + 0xb3c),0,0);
      *(undefined4 *)(iVar14 + 0x4f8) = 1;
      bVar1 = 1 < *(int *)(iVar14 + 0x4f4);
      goto LAB_0010c78c;
    }
    lVar8 = FUN_0010b8e8(param_1);
    if (lVar8 != 1) goto LAB_0010c7c8;
    iVar2 = *(int *)(iVar14 + 0x500);
    if (iVar2 != 0) goto joined_r0x0010c740;
LAB_0010c690:
    FUN_0010b5b0(param_1);
LAB_0010c89c:
    *(undefined4 *)(iVar14 + 0x10) = 0xb;
    break;
  case 7:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xabc));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar14 + 0xb44),*(undefined4 *)(iVar14 + 0xb40),0,0);
      *(undefined4 *)(iVar14 + 0x4f8) = 0;
      bVar1 = 0 < *(int *)(iVar14 + 0x4f4);
      goto LAB_0010c78c;
    }
    lVar8 = FUN_0010b8e8(param_1);
    if ((lVar8 != 1) && (*(int *)(iVar14 + 0x500) != 0)) {
      if (*(int *)(iVar14 + 0x500) != 1) {
        return;
      }
      goto LAB_0010c690;
    }
LAB_0010c7c8:
    FUN_0010b5b0(param_1);
    *(undefined4 *)(iVar14 + 0x10) = 0;
    break;
  case 8:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      FUN_0010b5b0(param_1);
      FUN_0010b338(param_1,0x3f3858);
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar14 + 0xb40),0,0,0);
      FUN_0010b4d8(param_1,5);
      return;
    }
    if (*(int *)(iVar14 + 0x500) != 0) {
      return;
    }
    FUN_0010b5b0(param_1);
    goto LAB_0010c8d0;
  case 10:
    uVar6 = FUN_0026f4b8(iVar14 + 0x9b0);
    switch(uVar6) {
    case 1:
      *(undefined4 *)(iVar14 + 0x10) = 6;
      break;
    default:
      goto switchD_0010c878_caseD_2;
    case 4:
    case 5:
    case 9:
    case 10:
      *(undefined4 *)(iVar14 + 0x10) = 7;
    }
    break;
  case 0xb:
    FUN_0010b5b0(param_1);
    FUN_001050a8(DAT_0040f0e0 + 0x20220,0x3f2530);
LAB_0010c8d0:
    *(undefined1 *)(iVar14 + 0x515) = 1;
  }
  return;
}


// ==== FUN_0010c8e8 @ 0010c8e8 ====
// GLOBAL DAT_0040f4ec undefined4

void FUN_0010c8e8(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 auStack_440 [1024];
  
  iVar14 = (int)param_1;
  switch(*(undefined4 *)(iVar14 + 0x14)) {
  case 0:
    *(undefined4 *)(iVar14 + 0x14) = 6;
    break;
  case 1:
    FUN_0010b5b0(param_1);
    FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xa8c));
    FUN_0010b4d8(param_1,0);
    FUN_0010b6b8(param_1);
    FUN_0010eac0(param_1,0);
    *(undefined4 *)(iVar14 + 0x14) = 2;
    break;
  case 2:
    lVar6 = FUN_0010eaf8(param_1);
    if (lVar6 == 0) {
      return;
    }
    lVar6 = FUN_0010ebc0(param_1);
    if (lVar6 != 0) {
      FUN_0010eac0(param_1,2);
      *(undefined4 *)(iVar14 + 0x14) = 3;
      return;
    }
    goto LAB_0010cde8;
  case 3:
    lVar6 = FUN_0010eaf8(param_1);
    if (lVar6 == 0) {
      return;
    }
    lVar6 = FUN_0010ebc0(param_1);
    if (lVar6 != 0) {
      if (*(int *)(iVar14 + 0x520) != 0) {
        FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xaac));
        FUN_0010eac0(param_1,0x17);
        *(undefined4 *)(iVar14 + 0x14) = 4;
        return;
      }
      *(undefined4 *)(iVar14 + 0x14) = 4;
      return;
    }
    goto LAB_0010cde8;
  case 4:
    lVar6 = FUN_0010eaf8(param_1);
    if (lVar6 == 0) {
      return;
    }
    lVar6 = FUN_0010ebc0(param_1);
    if (lVar6 != 0) {
      FUN_0010b7f0(param_1);
      FUN_0010b7a0(param_1);
      FUN_0010b5b0(param_1);
      FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xb48));
      uVar10 = FUN_0010b8b0(param_1,0);
      uVar12 = FUN_0010b8b0(param_1,1);
      uVar13 = FUN_0010b8b0(param_1,2);
      FUN_0010b3a8(param_1,uVar10,uVar12,uVar13,0);
      iVar7 = FUN_0010b630(param_1);
      *(int *)(iVar14 + 0x4f8) = iVar7;
      if ((iVar7 < 0) || (*(int *)(iVar14 + 0x4f4) <= iVar7)) {
        *(undefined4 *)(iVar14 + 0x4f8) = 0;
      }
      FUN_0010b4d8(param_1,1);
      *(undefined4 *)(iVar14 + 0x14) = 5;
      return;
    }
    lVar6 = FUN_0026f4b8(iVar14 + 0x9b0);
    if (lVar6 == 1) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar14 + 0x14) = 9;
      return;
    }
    goto LAB_0010cde8;
  case 5:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      puVar2 = (undefined8 *)FUN_0010f280(DAT_0040f4ec);
      iVar7 = *(int *)(iVar14 + 0x50c) * 0x778 + iVar14;
      puVar9 = (undefined8 *)(iVar7 + 0xb50);
      do {
        puVar3 = puVar2;
        puVar8 = puVar9;
        uVar12 = puVar8[1];
        uVar13 = puVar8[2];
        uVar10 = puVar8[3];
        *puVar3 = *puVar8;
        puVar3[1] = uVar12;
        puVar3[2] = uVar13;
        puVar3[3] = uVar10;
        puVar9 = puVar8 + 4;
        puVar2 = puVar3 + 4;
      } while (puVar9 != (undefined8 *)(iVar7 + 0x12b0));
      uVar10 = puVar8[5];
      uVar12 = puVar8[6];
      puVar3[4] = *puVar9;
      puVar3[5] = uVar10;
      puVar3[6] = uVar12;
      FUN_0010f470(DAT_0040f4ec);
      *(undefined4 *)(iVar14 + 0x14) = 0xc;
      *(undefined4 *)(iVar14 + 0x524) = *(undefined4 *)(iVar14 + 0x50c);
      return;
    }
    lVar6 = FUN_0010b8e8(param_1);
    if (lVar6 == 1) goto LAB_0010cddc;
    uVar1 = *(uint *)(iVar14 + 0x500);
    if (uVar1 < 3) {
      if ((*(char *)(iVar14 + uVar1 + 0x528) == '\x01') &&
         (*(char *)(iVar14 + 0x52b + uVar1) == '\0')) {
        *(uint *)(iVar14 + 0x50c) = uVar1;
        FUN_0010b5b0(param_1);
      }
      else if (*(char *)(iVar14 + 0x52b + uVar1) == '\x01') {
        FUN_0010b5b0(param_1);
        *(undefined4 *)(iVar14 + 0x14) = 10;
      }
      *(undefined4 *)(iVar14 + 0x500) = 0xffffffff;
      return;
    }
    if (uVar1 != 3) {
      return;
    }
    goto LAB_0010ce78;
  case 6:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      FUN_0010b5b0(param_1);
      FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xacc));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar14 + 0xb38),*(undefined4 *)(iVar14 + 0xb3c),0,0);
      *(undefined4 *)(iVar14 + 0x4f8) = 1;
      if (*(int *)(iVar14 + 0x4f4) < 2) {
        *(undefined4 *)(iVar14 + 0x4f8) = 0;
      }
      goto LAB_0010ce24;
    }
    iVar7 = *(int *)(iVar14 + 0x500);
    if (iVar7 == 0) {
      *(undefined4 *)(iVar14 + 0x14) = 1;
      return;
    }
    goto joined_r0x0010ce70;
  case 7:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xab4));
      uVar5 = *(undefined4 *)(iVar14 + 0xb44);
      uVar11 = *(undefined4 *)(iVar14 + 0xb40);
LAB_0010ce14:
      FUN_0010b3a8(param_1,uVar5,uVar11,0,0);
LAB_0010ce24:
      FUN_0010b4d8(param_1,2);
      return;
    }
    lVar6 = FUN_0010b8e8(param_1);
    if (lVar6 != 1) {
      iVar7 = *(int *)(iVar14 + 0x500);
      goto joined_r0x0010ce58;
    }
LAB_0010cddc:
    FUN_0010b5b0(param_1);
LAB_0010cde8:
    *(undefined4 *)(iVar14 + 0x14) = 0xd;
    break;
  case 8:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      iVar4 = FUN_0010b9b0(param_1);
      iVar7 = iVar4 + 0x3ff;
      if (-1 < iVar4) {
        iVar7 = iVar4;
      }
      sprintf(auStack_440,*(undefined4 *)(iVar14 + 0xab0),iVar7 >> 10);
      FUN_0010b338(param_1,auStack_440);
      uVar5 = *(undefined4 *)(iVar14 + 0xb44);
      uVar11 = *(undefined4 *)(iVar14 + 0xb40);
      goto LAB_0010ce14;
    }
    lVar6 = FUN_0010b8e8(param_1);
    if (lVar6 != 1) {
LAB_0010ce48:
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar14 + 0x14) = 1;
      return;
    }
    iVar7 = *(int *)(iVar14 + 0x500);
    goto joined_r0x0010ce58;
  case 9:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar14 + 0xac8));
      uVar5 = *(undefined4 *)(iVar14 + 0xb38);
      uVar11 = *(undefined4 *)(iVar14 + 0xb3c);
      goto LAB_0010ce14;
    }
    lVar6 = FUN_0010b8e8(param_1);
    if (lVar6 != 1) goto LAB_0010ce48;
    iVar7 = *(int *)(iVar14 + 0x500);
joined_r0x0010ce58:
    if (iVar7 == 0) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar14 + 0x14) = 1;
    }
    else {
joined_r0x0010ce70:
      if (iVar7 == 1) {
LAB_0010ce78:
        FUN_0010b5b0(param_1);
LAB_0010ce84:
        *(undefined4 *)(iVar14 + 0x14) = 0xe;
      }
    }
    break;
  case 10:
    if (*(char *)(iVar14 + 0x513) == '\0') {
      uVar5 = *(undefined4 *)(iVar14 + 0xac0);
      goto LAB_0010cce8;
    }
    if (*(int *)(iVar14 + 0x500) != 0) {
      return;
    }
    goto LAB_0010ce84;
  case 0xb:
    if (*(char *)(iVar14 + 0x513) != '\0') {
      iVar7 = *(int *)(iVar14 + 0x500);
joined_r0x0010ccc8:
      if (iVar7 != 0) {
        return;
      }
      goto LAB_0010ce78;
    }
    uVar5 = *(undefined4 *)(iVar14 + 0xabc);
    goto LAB_0010cce8;
  case 0xc:
    if (*(char *)(iVar14 + 0x513) != '\0') {
      iVar7 = *(int *)(iVar14 + 0x500);
      goto joined_r0x0010ccc8;
    }
    uVar5 = *(undefined4 *)(iVar14 + 0xab8);
LAB_0010cce8:
    FUN_0010b338(param_1,uVar5);
    FUN_0010b3a8(param_1,*(undefined4 *)(iVar14 + 0xb40),0,0,0);
    FUN_0010b4d8(param_1,5);
    break;
  case 0xd:
    uVar5 = FUN_0026f4b8(iVar14 + 0x9b0);
    FUN_0010b5b0(param_1);
    switch(uVar5) {
    case 1:
      *(undefined4 *)(iVar14 + 0x14) = 8;
      break;
    default:
      *(undefined4 *)(iVar14 + 0x14) = 0xb;
      break;
    case 3:
    case 4:
    case 9:
      *(undefined4 *)(iVar14 + 0x14) = 7;
    }
    break;
  case 0xe:
    *(undefined1 *)(iVar14 + 0x515) = 1;
    FUN_0010b5b0(param_1);
  }
  return;
}


// ==== FUN_0010cf18 @ 0010cf18 ====
// GLOBAL DAT_0040f53c int_*
// GLOBAL DAT_0040f4ec undefined4
// GLOBAL DAT_0040f0e0 int

/* WARNING: Type propagation algorithm not settling */

void FUN_0010cf18(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStack_490 [1024];
  undefined1 auStack_90 [80];
  
  puVar9 = auStack_490;
  iVar15 = (int)param_1;
  switch(*(undefined4 *)(iVar15 + 0x18)) {
  case 0:
    FUN_0010b6b8(param_1);
    FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xa8c));
    FUN_0010b4d8(param_1,0);
    FUN_0010eac0(param_1,0);
    *(undefined4 *)(iVar15 + 0x18) = 1;
    break;
  case 1:
    lVar7 = FUN_0010eaf8(param_1);
    if (lVar7 == 0) {
      return;
    }
    lVar7 = FUN_0010ebc0(param_1);
    if (lVar7 != 0) {
      FUN_0010eac0(param_1,2);
      *(undefined4 *)(iVar15 + 0x18) = 2;
      return;
    }
    goto LAB_0010d758;
  case 2:
    lVar7 = FUN_0010eaf8(param_1);
    if (lVar7 != 0) {
      lVar7 = FUN_0010ebc0(param_1);
      if (lVar7 == 0) {
        FUN_0010eac0(param_1,4);
        *(undefined4 *)(iVar15 + 0x18) = 3;
      }
      else if (*(int *)(iVar15 + 0x520) == 0) {
        *(undefined4 *)(iVar15 + 0x18) = 4;
      }
      else {
        FUN_0010eac0(param_1,0x17);
        *(undefined4 *)(iVar15 + 0x18) = 4;
      }
    }
    break;
  case 3:
    lVar7 = FUN_0010eaf8(param_1);
    if (lVar7 == 0) {
      return;
    }
    lVar7 = FUN_0010ebc0(param_1);
    if (lVar7 == 0) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0x18) = 0x15;
      return;
    }
    if ((*(int *)(iVar15 + 0x24) != 4) && (*(int *)(iVar15 + 0x20) != 4)) {
      FUN_0010b5b0(param_1);
      FUN_0010b200(param_1);
      *(undefined4 *)(iVar15 + 0x24) = 1;
      return;
    }
    FUN_0010b7f0(param_1);
LAB_0010d0cc:
    *(undefined4 *)(iVar15 + 0x18) = 5;
    break;
  case 4:
    lVar7 = FUN_0010eaf8(param_1);
    if (lVar7 == 0) {
      return;
    }
    lVar7 = FUN_0010ebc0(param_1);
    if (lVar7 != 0) {
      FUN_0010b7f0(param_1);
      FUN_0010b7a0(param_1);
      goto LAB_0010d0cc;
    }
    goto LAB_0010d758;
  case 5:
    FUN_0010b5b0(param_1);
    FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xb4c));
    uVar10 = FUN_0010b8b0(param_1,0);
    uVar12 = FUN_0010b8b0(param_1,1);
    uVar13 = FUN_0010b8b0(param_1,2);
    FUN_0010b3a8(param_1,uVar10,uVar12,uVar13,0);
    iVar11 = FUN_0010b630(param_1);
    *(int *)(iVar15 + 0x4f8) = iVar11;
    if ((iVar11 < 0) || (*(int *)(iVar15 + 0x4f4) <= iVar11)) {
      *(undefined4 *)(iVar15 + 0x4f8) = 0;
    }
    FUN_0010b4d8(param_1,1);
    *(undefined4 *)(iVar15 + 0x18) = 6;
    break;
  case 6:
    if (*(char *)(iVar15 + 0x513) == '\0') {
      if (*(char *)(iVar15 + 0x518) != '\0') {
        FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xad0));
        FUN_0010b4d8(param_1,0);
        FUN_0010eac0(param_1,6);
        *(undefined4 *)(iVar15 + 0x18) = 8;
        return;
      }
      if (*(char *)(iVar15 + *(int *)(iVar15 + 0x50c) + 0x528) == '\x01') {
        FUN_0010b5b0(param_1);
        *(undefined4 *)(iVar15 + 0x18) = 0xc;
        return;
      }
LAB_0010d604:
      FUN_0010b5b0(param_1);
      goto LAB_0010d610;
    }
    lVar7 = FUN_0010b8e8(param_1);
    if (lVar7 != 1) {
      uVar1 = *(uint *)(iVar15 + 0x500);
      if (uVar1 < 3) {
        *(uint *)(iVar15 + 0x50c) = uVar1;
        *(undefined4 *)(iVar15 + 0x500) = 0xffffffff;
        FUN_0010b5b0(param_1);
        return;
      }
      if (uVar1 != 3) {
        return;
      }
      *(undefined4 *)(iVar15 + 0x18) = 0x17;
      *(undefined4 *)(iVar15 + 0x24) = 9;
      *(undefined4 *)(iVar15 + 0x500) = 0xffffffff;
      FUN_0010b5b0(param_1);
      if (*(int *)(iVar15 + 0x1c) != 0xe) {
        return;
      }
      FUN_0010b2c0(param_1,0);
      return;
    }
LAB_0010d74c:
    FUN_0010b5b0(param_1);
    goto LAB_0010d758;
  case 7:
    if (*(char *)(iVar15 + 0x514) == '\0') {
      return;
    }
    lVar7 = FUN_0010b8e8(param_1);
    if (lVar7 == 1) {
      FUN_0010b5b0(param_1);
      *(undefined1 *)(iVar15 + 0x514) = 0;
      *(undefined4 *)(iVar15 + 0x18) = 0x16;
      return;
    }
    if (*(int *)(iVar15 + 0x500) == 0) {
      lVar7 = FUN_0010b590(param_1);
      if (lVar7 == 1) {
        *(undefined1 *)(iVar15 + 0x514) = 0;
        FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xad0));
        FUN_0010b4d8(param_1,0);
        FUN_00275128(iVar15 + 0x4ca,auStack_90,0x50);
        FUN_0010f288(DAT_0040f4ec,auStack_90,0);
        puVar14 = (undefined8 *)(*(int *)(iVar15 + 0x50c) * 0x778 + iVar15 + 0xb50);
        puVar4 = (undefined8 *)FUN_0010f280(DAT_0040f4ec);
        puVar8 = puVar4 + 0xec;
        do {
          uVar10 = puVar4[1];
          uVar12 = puVar4[2];
          uVar13 = puVar4[3];
          *puVar14 = *puVar4;
          puVar14[1] = uVar10;
          puVar14[2] = uVar12;
          puVar14[3] = uVar13;
          puVar4 = puVar4 + 4;
          puVar14 = puVar14 + 4;
        } while (puVar4 != puVar8);
        goto LAB_0010d4a0;
      }
      iVar11 = *(int *)(iVar15 + 0x500);
    }
    else {
      iVar11 = *(int *)(iVar15 + 0x500);
    }
    if (iVar11 == 1) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0x18) = 0;
      *(undefined1 *)(iVar15 + 0x514) = 0;
      return;
    }
    if (iVar11 != 2) {
      return;
    }
LAB_0010d610:
    *(undefined4 *)(iVar15 + 0x18) = 9;
    break;
  case 8:
    lVar7 = FUN_0010eaf8(param_1);
    if (lVar7 == 0) {
      return;
    }
    lVar7 = FUN_0010ebc0(param_1);
    if (lVar7 != 0) goto LAB_0010d610;
    lVar7 = FUN_0026f4b8(iVar15 + 0x9b0);
    if (lVar7 == 1) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0x18) = 0x13;
      return;
    }
LAB_0010d758:
    *(undefined4 *)(iVar15 + 0x18) = 0x16;
    break;
  case 9:
    if ((*(int *)(iVar15 + 0x20) != 4) && (*(int *)(iVar15 + 0x24) != 4)) {
      FUN_00215d68(DAT_0040f0e0 + 0x20258,*DAT_0040f53c + 8);
      FUN_0010b5b0(param_1);
      FUN_0010b3a8(param_1,0,0,0,0);
      FUN_0010b530(param_1,0);
      *(undefined4 *)(iVar15 + 0x18) = 7;
      *(undefined1 *)(iVar15 + 0x514) = 1;
      return;
    }
    FUN_00275128(iVar15 + 0x4ca,auStack_90,0x50);
    FUN_0010f288(DAT_0040f4ec,auStack_90,0);
    FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xad0));
    FUN_0010b4d8(param_1,0);
    puVar14 = (undefined8 *)(*(int *)(iVar15 + 0x50c) * 0x778 + iVar15 + 0xb50);
    puVar4 = (undefined8 *)FUN_0010f280(DAT_0040f4ec);
    puVar8 = puVar4 + 0xec;
    do {
      uVar10 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      *puVar14 = *puVar4;
      puVar14[1] = uVar10;
      puVar14[2] = uVar12;
      puVar14[3] = uVar13;
      puVar4 = puVar4 + 4;
      puVar14 = puVar14 + 4;
    } while (puVar4 != puVar8);
LAB_0010d4a0:
    uVar10 = puVar4[1];
    uVar12 = puVar4[2];
    *puVar14 = *puVar4;
    puVar14[1] = uVar10;
    puVar14[2] = uVar12;
    FUN_0010eac0(param_1,0xe);
    *(undefined4 *)(iVar15 + 0x18) = 10;
    break;
  case 10:
    lVar7 = FUN_0010eaf8(param_1);
    if (lVar7 != 0) {
      lVar7 = FUN_0010ebc0(param_1);
      if (lVar7 == 0) {
        lVar7 = FUN_0026f4b8(iVar15 + 0x9b0);
        uVar6 = 0x16;
        if (lVar7 == 1) {
          FUN_0010b5b0(param_1);
          uVar6 = 0x13;
        }
      }
      else {
        FUN_0010f470(DAT_0040f4ec);
        *(undefined4 *)(iVar15 + 0x524) = *(undefined4 *)(iVar15 + 0x50c);
        FUN_0010b5b0(param_1);
        uVar6 = 0x11;
      }
      *(undefined4 *)(iVar15 + 0x18) = uVar6;
      FUN_0010b7f0(param_1);
    }
    break;
  case 0xb:
    lVar7 = FUN_0010eaf8(param_1);
    if (lVar7 != 0) {
      lVar7 = FUN_0010ebc0(param_1);
      if (lVar7 == 0) {
        FUN_0010b5b0(param_1);
        *(undefined4 *)(iVar15 + 0x18) = 0x10;
      }
      else {
        FUN_0010b5b0(param_1);
        *(undefined4 *)(iVar15 + 0x18) = 0xf;
      }
    }
    break;
  case 0xc:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      lVar7 = FUN_0010b8e8(param_1);
      iVar11 = 1;
      if (lVar7 != 1) {
        iVar5 = *(int *)(iVar15 + 0x500);
        if (iVar5 != 0) goto LAB_0010d8f8;
        goto LAB_0010d604;
      }
      goto LAB_0010d74c;
    }
    iVar11 = FUN_0010b8b0(param_1,*(undefined4 *)(iVar15 + 0x50c));
    uVar6 = *(undefined4 *)(iVar15 + 0xaec);
    goto LAB_0010d86c;
  case 0xd:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      lVar7 = FUN_0010b8e8(param_1);
      iVar11 = 1;
      if (lVar7 != 1) {
        iVar5 = *(int *)(iVar15 + 0x500);
        if (iVar5 == 0) {
          FUN_0010b5b0(param_1);
          *(undefined4 *)(iVar15 + 0x18) = 0xe;
          return;
        }
        goto LAB_0010d8f8;
      }
      goto LAB_0010d74c;
    }
    lVar7 = FUN_0010b9b0(param_1);
    iVar11 = (int)lVar7 + 0x3ff;
    bVar3 = -1 < lVar7;
    uVar6 = *(undefined4 *)(iVar15 + 0xadc);
    goto LAB_0010d860;
  case 0xe:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      lVar7 = FUN_0010b8e8(param_1);
      iVar11 = 1;
      if (lVar7 != 1) {
        iVar5 = *(int *)(iVar15 + 0x500);
        if (iVar5 == 0) {
          FUN_0010b5b0(param_1);
          FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xa98));
          FUN_0010b4d8(param_1,0);
          FUN_0010eac0(param_1,0xb);
          *(undefined4 *)(iVar15 + 0x18) = 0xb;
          return;
        }
        goto LAB_0010d8f8;
      }
      goto LAB_0010d74c;
    }
    puVar9 = *(undefined1 **)(iVar15 + 0xaa8);
    goto LAB_0010d878;
  case 0xf:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      if (*(int *)(iVar15 + 0x500) != 0) {
        return;
      }
      goto LAB_0010d900;
    }
    uVar6 = *(undefined4 *)(iVar15 + 0xa9c);
    goto LAB_0010d670;
  case 0x10:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      iVar11 = *(int *)(iVar15 + 0x500);
LAB_0010d650:
      iVar5 = 1;
      iVar2 = iVar11;
joined_r0x0010d8dc:
      if (iVar2 == 0) {
LAB_0010d8e4:
        FUN_0010b5b0(param_1);
        *(undefined4 *)(iVar15 + 0x18) = 0x17;
        return;
      }
LAB_0010d8f8:
      if (iVar5 != iVar11) {
        return;
      }
LAB_0010d900:
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0x18) = 0;
      return;
    }
    puVar9 = *(undefined1 **)(iVar15 + 0xaa0);
    goto LAB_0010d878;
  case 0x11:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      if (*(int *)(iVar15 + 0x500) != 0) {
        return;
      }
      goto LAB_0010d8e4;
    }
    uVar6 = *(undefined4 *)(iVar15 + 0xae0);
LAB_0010d670:
    FUN_0010b338(param_1,uVar6);
    FUN_0010b3a8(param_1,*(undefined4 *)(iVar15 + 0xb40),0,0,0);
    FUN_0010b4d8(param_1,5);
    break;
  case 0x12:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      iVar11 = *(int *)(iVar15 + 0x500);
      goto LAB_0010d650;
    }
    puVar9 = *(undefined1 **)(iVar15 + 0xae4);
    goto LAB_0010d878;
  case 0x13:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      lVar7 = FUN_0010b8e8(param_1);
      if ((lVar7 == 1) && (*(int *)(iVar15 + 0x500) != 0)) {
        if (*(int *)(iVar15 + 0x500) != 1) {
          return;
        }
        goto LAB_0010d8e4;
      }
      goto LAB_0010d900;
    }
    puVar9 = *(undefined1 **)(iVar15 + 0xae8);
    goto LAB_0010d878;
  case 0x14:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      lVar7 = FUN_0010b8e8(param_1);
      if (lVar7 != 1) goto LAB_0010d900;
      iVar5 = *(int *)(iVar15 + 0x500);
      if (iVar5 == 0) goto LAB_0010d8e4;
      iVar11 = 1;
      goto LAB_0010d8f8;
    }
    lVar7 = FUN_0010b9b0(param_1);
    iVar11 = (int)lVar7 + 0x3ff;
    bVar3 = -1 < lVar7;
    uVar6 = *(undefined4 *)(iVar15 + 0xad4);
    goto LAB_0010d860;
  case 0x15:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      lVar7 = FUN_0010b8e8(param_1);
      iVar11 = 1;
      if (lVar7 == 1) goto LAB_0010d900;
      iVar5 = *(int *)(iVar15 + 0x500);
      iVar2 = iVar5;
      goto joined_r0x0010d8dc;
    }
    lVar7 = FUN_0010b9b0(param_1);
    iVar11 = (int)lVar7 + 0x3ff;
    bVar3 = -1 < lVar7;
    uVar6 = *(undefined4 *)(iVar15 + 0xad8);
LAB_0010d860:
    if (bVar3) {
      iVar11 = (int)lVar7;
    }
    iVar11 = iVar11 >> 10;
LAB_0010d86c:
    sprintf(auStack_490,uVar6,iVar11);
LAB_0010d878:
    FUN_0010b338(param_1,puVar9);
    FUN_0010b3a8(param_1,*(undefined4 *)(iVar15 + 0xb38),*(undefined4 *)(iVar15 + 0xb3c),0,0);
    *(undefined4 *)(iVar15 + 0x4f8) = 1;
    if (*(int *)(iVar15 + 0x4f4) < 2) {
      *(undefined4 *)(iVar15 + 0x4f8) = 0;
    }
    FUN_0010b4d8(param_1,2);
    break;
  case 0x16:
    uVar6 = FUN_0026f4b8(iVar15 + 0x9b0);
    FUN_0010b5b0(param_1);
    switch(uVar6) {
    case 1:
      *(undefined4 *)(iVar15 + 0x18) = 0x14;
      break;
    default:
      *(undefined4 *)(iVar15 + 0x18) = 0x12;
      break;
    case 3:
      *(undefined4 *)(iVar15 + 0x18) = 0xd;
    }
    break;
  case 0x17:
    if (*(int *)(iVar15 + 0x20) == 4) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0xc) = 2;
      *(undefined4 *)(iVar15 + 0x20) = 9;
    }
    else if (*(int *)(iVar15 + 0x1c) == 0xe) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0xc) = 5;
      *(undefined1 *)(iVar15 + 0x515) = 1;
      *(undefined4 *)(iVar15 + 0x1c) = 0x10;
    }
    else {
      *(undefined1 *)(iVar15 + 0x515) = 1;
      FUN_0010b5b0(param_1);
    }
  }
  return;
}


// ==== FUN_0010d9f0 @ 0010d9f0 ====
// GLOBAL DAT_0040f53c int_*
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4ec int_*

/* WARNING: Type propagation algorithm not settling */

void FUN_0010d9f0(undefined8 param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStack_460 [1024];
  int iStack_60;
  undefined4 auStack_5c [3];
  
  puVar10 = auStack_460;
  iVar15 = (int)param_1;
  iVar3 = *DAT_0040f53c;
  switch(*(undefined4 *)(iVar15 + 0x1c)) {
  case 0:
    if (((*(int *)(iVar15 + 0x524) < 0) || (iVar3 == 0)) || (*(char *)(iVar3 + 0x6a5) != '\0')) {
LAB_0010ddd4:
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0x1c) = 0xe;
      FUN_0010b200(param_1);
      return;
    }
    if (*(char *)(DAT_0040f0e0 + 0x20164) != '\0') {
      if (*(char *)(iVar15 + 0x517) != '\0') {
        FUN_0010b5b0(param_1);
        *(undefined1 *)(iVar15 + 0x517) = 0;
        *(undefined4 *)(iVar15 + 0x1c) = 7;
        return;
      }
LAB_0010dd8c:
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0x1c) = 1;
      return;
    }
    break;
  case 1:
    if (*(uint *)(iVar15 + 0x524) < 3) {
      FUN_0010b6b8(param_1);
      FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xa8c));
      FUN_0010b4d8(param_1,0);
      FUN_0010eac0(param_1,0);
      *(undefined4 *)(iVar15 + 0x1c) = 2;
      return;
    }
    goto LAB_0010dba4;
  case 2:
    lVar8 = FUN_0010eaf8(param_1);
    if (lVar8 == 0) {
      return;
    }
    lVar8 = FUN_0010ebc0(param_1);
    if (lVar8 != 0) {
      FUN_0010eac0(param_1,2);
      *(undefined4 *)(iVar15 + 0x1c) = 3;
      return;
    }
    goto LAB_0010dba4;
  case 3:
    lVar8 = FUN_0010eaf8(param_1);
    if (lVar8 == 0) {
      return;
    }
    lVar8 = FUN_0010ebc0(param_1);
    if (lVar8 != 0) {
      if (*(int *)(iVar15 + 0x520) != 0) {
        FUN_0010eac0(param_1,0x17);
        *(undefined4 *)(iVar15 + 0x1c) = 4;
        return;
      }
      *(undefined4 *)(iVar15 + 0x1c) = 4;
      return;
    }
    goto LAB_0010dba4;
  case 4:
    lVar8 = FUN_0010eaf8(param_1);
    if (lVar8 == 0) {
      return;
    }
    lVar8 = FUN_0010ebc0(param_1);
    if (lVar8 != 0) {
      FUN_0010b7f0(param_1);
      FUN_0010b7a0(param_1);
      *(undefined4 *)(iVar15 + 0x1c) = 5;
      return;
    }
LAB_0010dba4:
    *(undefined4 *)(iVar15 + 0x1c) = 0xf;
    return;
  case 5:
    iVar3 = iVar15 + *(int *)(iVar15 + 0x524);
    if ((*(char *)(iVar3 + 0x528) != '\0') && (*(char *)(iVar3 + 0x52b) != '\x01')) {
      bVar1 = true;
      if ((*DAT_0040f4ec != *(int *)(*(int *)(iVar15 + 0x524) * 0x778 + iVar15 + 0x12c0)) &&
         (lVar8 = FUN_0026f4b8(iVar15 + 0x9b0), lVar8 != 2)) {
        bVar1 = false;
      }
      iStack_60 = DAT_0040f4ec[1];
      auStack_5c[0] = *(undefined4 *)(*(int *)(iVar15 + 0x524) * 0x778 + iVar15 + 0xc18);
      lVar8 = FUN_0035c4b0(&iStack_60,auStack_5c,4);
      if (lVar8 != 0) {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xafc));
        FUN_0010b4d8(param_1,0);
        FUN_0010f288(DAT_0040f4ec,0,0);
        iVar3 = *(int *)(iVar15 + 0x524);
        puVar4 = (undefined8 *)FUN_0010f280(DAT_0040f4ec);
        puVar2 = (undefined8 *)(iVar3 * 0x778 + iVar15 + 0xb50);
        puVar6 = puVar4;
        do {
          puVar5 = puVar6;
          puVar14 = puVar2;
          uVar11 = puVar5[1];
          uVar12 = puVar5[2];
          uVar13 = puVar5[3];
          *puVar14 = *puVar5;
          puVar14[1] = uVar11;
          puVar14[2] = uVar12;
          puVar14[3] = uVar13;
          puVar6 = puVar5 + 4;
          puVar2 = puVar14 + 4;
        } while (puVar6 != puVar4 + 0xec);
        uVar11 = puVar5[5];
        uVar12 = puVar5[6];
        puVar14[4] = *puVar6;
        puVar14[5] = uVar11;
        puVar14[6] = uVar12;
        FUN_0010eac0(param_1,0xe);
        *(undefined4 *)(iVar15 + 0x1c) = 6;
        return;
      }
    }
    FUN_0010b5b0(param_1);
    goto LAB_0010e0b0;
  case 6:
    lVar8 = FUN_0010eaf8(param_1);
    if (lVar8 != 0) {
      lVar8 = FUN_0010ebc0(param_1);
      uVar7 = 0x10;
      if (lVar8 == 0) {
        lVar8 = FUN_0026f4b8(iVar15 + 0x9b0);
        uVar7 = 0xf;
        if (lVar8 == 1) {
          FUN_0010b5b0(param_1);
          uVar7 = 10;
        }
      }
      *(undefined4 *)(iVar15 + 0x1c) = uVar7;
      FUN_0010b7f0(param_1);
      return;
    }
    return;
  case 7:
    if (*(char *)(iVar15 + 0x513) == '\0') {
      sprintf(auStack_460,*(undefined4 *)(iVar15 + 0xaf8),iVar3 + 8);
LAB_0010dd5c:
      FUN_0010b338(param_1,puVar10);
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar15 + 0xb38),*(undefined4 *)(iVar15 + 0xb3c),0,0);
      goto LAB_0010dff8;
    }
    if (*(int *)(iVar15 + 0x500) == 0) goto LAB_0010dd8c;
    if (*(int *)(iVar15 + 0x500) != 1) {
      return;
    }
    FUN_0010b5b0(param_1);
    break;
  case 8:
    if (*(char *)(iVar15 + 0x513) == '\0') {
      puVar10 = *(undefined1 **)(iVar15 + 0xaf0);
      goto LAB_0010dd5c;
    }
    if (*(int *)(iVar15 + 0x500) == 0) goto LAB_0010ddd4;
    if (*(int *)(iVar15 + 0x500) != 1) {
      return;
    }
    FUN_0010b5b0(param_1);
    break;
  case 9:
    if (*(char *)(iVar15 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xb08));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar15 + 0xb38),*(undefined4 *)(iVar15 + 0xb3c),0,0);
      *(undefined4 *)(iVar15 + 0x4f8) = 0;
      bVar1 = 0 < *(int *)(iVar15 + 0x4f4);
      goto LAB_0010dfec;
    }
    lVar8 = FUN_0010b8e8(param_1);
    if (lVar8 != 1) goto LAB_0010e054;
    iVar3 = *(int *)(iVar15 + 0x500);
    goto joined_r0x0010df4c;
  case 10:
    if (*(char *)(iVar15 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xb04));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar15 + 0xb38),*(undefined4 *)(iVar15 + 0xb3c),0,0);
      *(undefined4 *)(iVar15 + 0x4f8) = 0;
      bVar1 = 0 < *(int *)(iVar15 + 0x4f4);
      goto LAB_0010dfec;
    }
    lVar8 = FUN_0010b8e8(param_1);
    if (lVar8 != 1) goto LAB_0010e054;
    iVar3 = *(int *)(iVar15 + 0x500);
    goto joined_r0x0010df4c;
  case 0xb:
    if (*(char *)(iVar15 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar15 + 0xb08));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar15 + 0xb38),*(undefined4 *)(iVar15 + 0xb3c),0,0);
      *(undefined4 *)(iVar15 + 0x4f8) = 0;
      bVar1 = 0 < *(int *)(iVar15 + 0x4f4);
      goto LAB_0010dfec;
    }
    lVar8 = FUN_0010b8e8(param_1);
    if (lVar8 == 1) goto LAB_0010e054;
    iVar3 = *(int *)(iVar15 + 0x500);
joined_r0x0010df4c:
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        return;
      }
LAB_0010df98:
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar15 + 0x1c) = 0xd;
      return;
    }
LAB_0010e054:
    FUN_0010b5b0(param_1);
    *(undefined4 *)(iVar15 + 0x1c) = 0;
    return;
  case 0xc:
    if (*(char *)(iVar15 + 0x513) != '\0') {
      lVar8 = FUN_0010b8e8(param_1);
      iVar9 = 1;
      if (lVar8 == 1) goto LAB_0010e054;
      iVar3 = *(int *)(iVar15 + 0x500);
      if (iVar3 == 0) goto LAB_0010df98;
LAB_0010e04c:
      if (iVar9 != iVar3) {
        return;
      }
      goto LAB_0010e054;
    }
    uVar7 = *(undefined4 *)(iVar15 + 0xb00);
LAB_0010dfbc:
    FUN_0010b338(param_1,uVar7);
    FUN_0010b3a8(param_1,*(undefined4 *)(iVar15 + 0xb38),*(undefined4 *)(iVar15 + 0xb3c),0,0);
    *(undefined4 *)(iVar15 + 0x4f8) = 1;
    bVar1 = 1 < *(int *)(iVar15 + 0x4f4);
LAB_0010dfec:
    if (!bVar1) {
      *(undefined4 *)(iVar15 + 0x4f8) = 0;
    }
LAB_0010dff8:
    FUN_0010b4d8(param_1,2);
    return;
  case 0xd:
    if (*(char *)(iVar15 + 0x513) == '\0') {
      uVar7 = *(undefined4 *)(iVar15 + 0xb0c);
      goto LAB_0010dfbc;
    }
    iVar9 = *(int *)(iVar15 + 0x500);
    iVar3 = 1;
    if (iVar9 != 0) goto LAB_0010e04c;
    FUN_0010b5b0(param_1);
    *(undefined1 *)(DAT_0040f0e0 + 0x20164) = 0;
    FUN_00215028(DAT_0040f0e0 + 0x20258);
    break;
  default:
    goto switchD_0010da38_caseD_e;
  case 0xf:
    uVar7 = FUN_0026f4b8(iVar15 + 0x9b0);
    FUN_0010b5b0(param_1);
    switch(uVar7) {
    case 1:
      *(undefined4 *)(iVar15 + 0x1c) = 9;
      return;
    case 2:
    case 3:
    case 4:
    case 9:
    case 0xb:
    case 0xc:
      break;
    default:
      *(undefined4 *)(iVar15 + 0x1c) = 0xc;
      return;
    }
LAB_0010e0b0:
    *(undefined4 *)(iVar15 + 0x1c) = 0xb;
    return;
  case 0x10:
    *(undefined1 *)(iVar15 + 0x515) = 1;
    FUN_0010b5b0(param_1);
    goto switchD_0010da38_caseD_e;
  }
  *(undefined4 *)(iVar15 + 0x1c) = 0x10;
switchD_0010da38_caseD_e:
  return;
}


// ==== FUN_0010e0f0 @ 0010e0f0 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0048f4d5 undefined1
// GLOBAL DAT_0040f53c undefined4_*

void FUN_0010e0f0(undefined8 param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  switch(*(undefined4 *)(iVar6 + 0x20)) {
  case 0:
    FUN_0010b6b8(param_1);
    FUN_0010b5b0(param_1);
    *(undefined4 *)(iVar6 + 0x20) = 5;
    break;
  case 1:
    FUN_0010b5b0(param_1);
    FUN_0010b3a8(param_1,0,0,0,0);
    FUN_0010b530(param_1,0);
    *(undefined1 *)(iVar6 + 0x514) = 1;
    FUN_00215d68(DAT_0040f0e0 + 0x20258,0x40d988);
    *(undefined4 *)(iVar6 + 0x20) = 2;
    break;
  case 2:
    if (*(char *)(iVar6 + 0x514) == '\0') {
      return;
    }
    if (*(int *)(iVar6 + 0x500) == 0) {
      lVar4 = FUN_0010b590(param_1);
      uVar2 = DAT_0048f4d5;
      if (lVar4 != 1) {
        iVar5 = *(int *)(iVar6 + 0x500);
        goto LAB_0010e244;
      }
      FUN_00108a70(DAT_0040f0e0 + 0x2014c);
      FUN_00124da8(*(undefined4 *)(DAT_0040f0e0 + 0x21060),*(undefined1 *)(DAT_0040f0e0 + 0x20170));
      FUN_00122b10(*DAT_0040f53c);
      DAT_0048f4d5 = uVar2;
      *(undefined4 *)(iVar6 + 0x524) = 0xffffffff;
      FUN_0010b5b0(param_1);
      uVar3 = 6;
    }
    else {
      iVar5 = *(int *)(iVar6 + 0x500);
LAB_0010e244:
      if (iVar5 != 1) {
        if (iVar5 == 2) {
          *(undefined4 *)(iVar6 + 0x20) = 1;
          return;
        }
        return;
      }
      FUN_0010b5b0(param_1);
      uVar3 = 9;
    }
    *(undefined1 *)(iVar6 + 0x514) = 0;
    *(undefined4 *)(iVar6 + 0x20) = uVar3;
    break;
  case 3:
    FUN_0010b238(param_1);
    *(undefined4 *)(iVar6 + 0x20) = 4;
    break;
  case 5:
    if (*(char *)(iVar6 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar6 + 0xb1c));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar6 + 0xb38),*(undefined4 *)(iVar6 + 0xb3c),0,0);
      *(undefined4 *)(iVar6 + 0x4f8) = 1;
      bVar1 = 1 < *(int *)(iVar6 + 0x4f4);
      goto LAB_0010e410;
    }
    iVar5 = *(int *)(iVar6 + 0x500);
    if (iVar5 == 0) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar6 + 0x20) = 1;
      return;
    }
    goto LAB_0010e44c;
  case 6:
    if (*(char *)(iVar6 + 0x513) != '\0') {
      if (*(int *)(iVar6 + 0x500) != 0) {
        if (*(int *)(iVar6 + 0x500) == 1) {
          FUN_0010b5b0(param_1);
          *(undefined4 *)(iVar6 + 0x20) = 7;
          return;
        }
        return;
      }
      *(undefined1 *)(DAT_0040f0e0 + 0x20164) = 1;
LAB_0010e438:
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar6 + 0x20) = 3;
      return;
    }
    uVar3 = *(undefined4 *)(iVar6 + 0xb20);
LAB_0010e3e4:
    FUN_0010b338(param_1,uVar3);
    FUN_0010b3a8(param_1,*(undefined4 *)(iVar6 + 0xb38),*(undefined4 *)(iVar6 + 0xb3c),0,0);
    *(undefined4 *)(iVar6 + 0x4f8) = 0;
    bVar1 = 0 < *(int *)(iVar6 + 0x4f4);
LAB_0010e410:
    if (!bVar1) {
      *(undefined4 *)(iVar6 + 0x4f8) = 0;
    }
    FUN_0010b4d8(param_1,2);
    return;
  case 7:
    if (*(char *)(iVar6 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar6 + 0xb24));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar6 + 0xb38),*(undefined4 *)(iVar6 + 0xb3c),0,0);
      *(undefined4 *)(iVar6 + 0x4f8) = 1;
      bVar1 = 1 < *(int *)(iVar6 + 0x4f4);
      goto LAB_0010e410;
    }
    if (*(int *)(iVar6 + 0x500) == 0) {
      *(undefined1 *)(DAT_0040f0e0 + 0x20164) = 0;
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar6 + 0x20) = 8;
    }
    else {
      if (*(int *)(iVar6 + 0x500) != 1) {
        return;
      }
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar6 + 0x20) = 6;
    }
    break;
  case 8:
    if (*(char *)(iVar6 + 0x513) == '\0') {
      uVar3 = *(undefined4 *)(iVar6 + 0xaf0);
      goto LAB_0010e3e4;
    }
    iVar5 = *(int *)(iVar6 + 0x500);
    if (iVar5 == 0) goto LAB_0010e438;
LAB_0010e44c:
    if (iVar5 != 1) {
      return;
    }
    FUN_0010b5b0(param_1);
    *(undefined4 *)(iVar6 + 0x20) = 9;
    break;
  case 9:
    *(undefined1 *)(iVar6 + 0x515) = 1;
    FUN_0010b5b0(param_1);
  }
  return;
}


// ==== FUN_0010e498 @ 0010e498 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4ec int

void FUN_0010e498(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x2c);
  if (iVar1 == 1) {
    if (*(char *)(iVar2 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar2 + 0xb14));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar2 + 0xb38),*(undefined4 *)(iVar2 + 0xb3c),0,0);
      *(undefined4 *)(iVar2 + 0x4f8) = 1;
      if (*(int *)(iVar2 + 0x4f4) < 2) {
        *(undefined4 *)(iVar2 + 0x4f8) = 0;
      }
      FUN_0010b4d8(param_1,2);
      return;
    }
    if (*(int *)(iVar2 + 0x500) == 0) {
      *(undefined1 *)(DAT_0040f0e0 + 0x20164) = 1;
      FUN_00215028(DAT_0040f0e0 + 0x20258);
      if (*(char *)(DAT_0040f4ec + 8) != '\0') {
        FUN_0010b5b0(param_1);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 3;
        return;
      }
    }
    else if (*(int *)(iVar2 + 0x500) != 1) {
      return;
    }
  }
  else {
    if (1 < iVar1) {
      if (iVar1 != 2) {
        return;
      }
      *(undefined1 *)(iVar2 + 0x515) = 1;
      FUN_0010b5b0(param_1);
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)(DAT_0040f0e0 + 0x20164) != '\x01') {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar2 + 0x2c) = 1;
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x2c) = 2;
  return;
}


// ==== FUN_0010e5f0 @ 0010e5f0 ====
// GLOBAL DAT_0040f0e0 int

void FUN_0010e5f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x30);
  if (iVar1 == 1) {
    if (*(char *)(iVar2 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar2 + 0xb18));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar2 + 0xb38),*(undefined4 *)(iVar2 + 0xb3c),0,0);
      *(undefined4 *)(iVar2 + 0x4f8) = 1;
      if (*(int *)(iVar2 + 0x4f4) < 2) {
        *(undefined4 *)(iVar2 + 0x4f8) = 0;
      }
      FUN_0010b4d8(param_1,2);
      return;
    }
    if (*(int *)(iVar2 + 0x500) == 0) {
      *(undefined1 *)(DAT_0040f0e0 + 0x20164) = 0;
      FUN_00215028(DAT_0040f0e0 + 0x20258);
    }
    else if (*(int *)(iVar2 + 0x500) != 1) {
      return;
    }
  }
  else {
    if (1 < iVar1) {
      if (iVar1 != 2) {
        return;
      }
      *(undefined1 *)(iVar2 + 0x515) = 1;
      FUN_0010b5b0(param_1);
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)(DAT_0040f0e0 + 0x20164) != '\0') {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar2 + 0x30) = 1;
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x30) = 2;
  return;
}


// ==== FUN_0010e720 @ 0010e720 ====

void FUN_0010e720(int param_1)

{
  *(undefined1 *)(param_1 + 0x515) = 1;
  FUN_0010b5b0();
  return;
}


// ==== FUN_0010e740 @ 0010e740 ====
// GLOBAL DAT_0040f53c int_*
// GLOBAL DAT_0040f0e0 int

void FUN_0010e740(undefined8 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  switch(*(undefined4 *)(iVar5 + 0x24)) {
  case 0:
    FUN_0010b6b8(param_1);
    goto LAB_0010e784;
  case 1:
    FUN_0010b5b0(param_1);
    FUN_0010b3a8(param_1,0,0,0,0);
    FUN_0010b530(param_1,0);
    *(undefined1 *)(iVar5 + 0x514) = 1;
    FUN_00215d68(DAT_0040f0e0 + 0x20258,*DAT_0040f53c + 8);
    *(undefined4 *)(iVar5 + 0x24) = 2;
    break;
  case 2:
    if (*(char *)(iVar5 + 0x514) == '\0') {
      return;
    }
    if (*(int *)(iVar5 + 0x500) == 0) {
      lVar3 = FUN_0010b590(param_1);
      if (lVar3 == 1) {
        *(undefined4 *)(iVar5 + 0x524) = 0xffffffff;
        FUN_0010b5b0(param_1);
        *(undefined1 *)(iVar5 + 0x514) = 0;
        *(undefined4 *)(iVar5 + 0x24) = 5;
        return;
      }
      iVar4 = *(int *)(iVar5 + 0x500);
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x500);
    }
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        *(undefined4 *)(iVar5 + 0x24) = 1;
        return;
      }
      return;
    }
    FUN_0010b5b0(param_1);
    *(undefined1 *)(iVar5 + 0x514) = 0;
    if (*(int *)(iVar5 + 0x18) == 3) {
      *(undefined4 *)(iVar5 + 0x18) = 0x17;
      *(undefined4 *)(iVar5 + 0x24) = 9;
      return;
    }
    goto LAB_0010e93c;
  case 3:
    FUN_0010b238(param_1);
    *(undefined4 *)(iVar5 + 0x24) = 4;
    break;
  case 5:
    if (*(char *)(iVar5 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar5 + 0xb20));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar5 + 0xb38),*(undefined4 *)(iVar5 + 0xb3c),0,0);
      *(undefined4 *)(iVar5 + 0x4f8) = 0;
      bVar2 = 0 < *(int *)(iVar5 + 0x4f4);
      goto LAB_0010ea18;
    }
    if (*(int *)(iVar5 + 0x500) != 0) {
      if (*(int *)(iVar5 + 0x500) == 1) {
        FUN_0010b5b0(param_1);
        *(undefined4 *)(iVar5 + 0x24) = 6;
        return;
      }
      return;
    }
    *(undefined1 *)(DAT_0040f0e0 + 0x20164) = 1;
    goto LAB_0010ea54;
  case 6:
    if (*(char *)(iVar5 + 0x513) == '\0') {
      uVar1 = *(undefined4 *)(iVar5 + 0xb24);
LAB_0010e9e8:
      FUN_0010b338(param_1,uVar1);
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar5 + 0xb38),*(undefined4 *)(iVar5 + 0xb3c),0,0);
      *(undefined4 *)(iVar5 + 0x4f8) = 1;
      bVar2 = 1 < *(int *)(iVar5 + 0x4f4);
LAB_0010ea18:
      if (!bVar2) {
        *(undefined4 *)(iVar5 + 0x4f8) = 0;
      }
      FUN_0010b4d8(param_1,2);
      return;
    }
    if (*(int *)(iVar5 + 0x500) != 0) {
      if (*(int *)(iVar5 + 0x500) == 1) {
        FUN_0010b5b0(param_1);
        *(undefined4 *)(iVar5 + 0x24) = 5;
        return;
      }
      return;
    }
    *(undefined1 *)(DAT_0040f0e0 + 0x20164) = 0;
LAB_0010ea54:
    FUN_0010b5b0(param_1);
    *(undefined4 *)(iVar5 + 0x24) = 3;
    break;
  case 7:
    if (*(char *)(iVar5 + 0x513) == '\0') {
      FUN_0010b338(param_1,*(undefined4 *)(iVar5 + 0xaf0));
      FUN_0010b3a8(param_1,*(undefined4 *)(iVar5 + 0xb38),*(undefined4 *)(iVar5 + 0xb3c),0,0);
      *(undefined4 *)(iVar5 + 0x4f8) = 0;
      bVar2 = 0 < *(int *)(iVar5 + 0x4f4);
      goto LAB_0010ea18;
    }
    if (*(int *)(iVar5 + 0x500) == 0) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar5 + 0x24) = 1;
    }
    else {
      if (*(int *)(iVar5 + 0x500) != 1) {
        return;
      }
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar5 + 0x24) = 8;
    }
    break;
  case 8:
    if (*(char *)(iVar5 + 0x513) == '\0') {
      uVar1 = *(undefined4 *)(iVar5 + 0xaf4);
      goto LAB_0010e9e8;
    }
    if (*(int *)(iVar5 + 0x500) == 0) {
      FUN_0010b5b0(param_1);
      *(undefined4 *)(iVar5 + 0x24) = 9;
      return;
    }
    if (*(int *)(iVar5 + 0x500) != 1) {
      return;
    }
LAB_0010e784:
    FUN_0010b5b0(param_1);
LAB_0010e93c:
    *(undefined4 *)(iVar5 + 0x24) = 7;
    break;
  case 9:
    *(undefined1 *)(iVar5 + 0x515) = 1;
    FUN_0010b5b0(param_1);
  }
  return;
}


// ==== FUN_0010eac0 @ 0010eac0 ====

undefined4 FUN_0010eac0(int param_1,undefined4 param_2)

{
  FUN_0010b160();
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return 1;
}


// ==== FUN_0010eaf8 @ 0010eaf8 ====

undefined4 FUN_0010eaf8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (0.0 < *(float *)(iVar4 + 0x504)) {
    if (*(char *)(iVar4 + 0x513) == '\0') {
      iVar3 = *(int *)(iVar4 + 0x34);
      if ((*(ulong *)(iVar4 + 0x38) & 0xffffffff0000) != 0) {
        if (iVar3 < 0x1f) {
          return 0;
        }
        if (0x1f < iVar3) {
          return 0;
        }
        lVar2 = FUN_0010b8e8();
        if (lVar2 != 1) {
          return 0;
        }
        *(undefined4 *)(iVar4 + 0x34) = 0x20;
        return 0;
      }
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x34);
    }
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x34);
  }
  uVar1 = 0;
  if ((0x1e < iVar3) && (uVar1 = 1, iVar3 < 0x20)) {
    FUN_0010b160(param_1);
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_0010ebc0 @ 0010ebc0 ====

bool FUN_0010ebc0(int param_1)

{
  return *(int *)(param_1 + 0x34) == 0x1f;
}


// ==== FUN_0010ebd0 @ 0010ebd0 ====
// GLOBAL DAT_0040f4ec undefined4

void FUN_0010ebd0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int aiStack_50 [4];
  
  iVar5 = (int)param_1;
  switch(*(undefined4 *)(iVar5 + 0x34)) {
  case 0:
    FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    *(undefined4 *)(iVar5 + 0x574) = 0;
    *(undefined4 *)(iVar5 + 0x34) = 1;
    return;
  case 1:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 == 0) {
      uVar1 = FUN_0026f560(iVar5 + 0x9b0);
      *(undefined4 *)(iVar5 + 0x574) = uVar1;
      *(undefined4 *)(iVar5 + 0x34) = 0x1f;
      return;
    }
    uVar1 = 0x20;
    if (lVar4 != 0xd) {
      return;
    }
    *(undefined4 *)(iVar5 + 0x574) = 0;
    break;
  case 2:
    *(undefined4 *)(iVar5 + 0x520) = 0;
    lVar4 = FUN_0026f508(iVar5 + 0x9b0,iVar5 + 0x54e);
    if (lVar4 != 0) {
      *(undefined4 *)(iVar5 + 0x34) = 3;
      return;
    }
LAB_0010ecf4:
    uVar1 = 0x20;
LAB_0010ecf8:
    *(undefined4 *)(iVar5 + 0x34) = uVar1;
    *(undefined1 *)(iVar5 + 0x518) = 1;
    return;
  case 3:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) {
      if (lVar4 != 0xd) {
        return;
      }
      goto LAB_0010ecf4;
    }
    *(int *)(iVar5 + 0x520) = aiStack_50[0];
    if (aiStack_50[0] < 1) {
      uVar1 = 0x1f;
      goto LAB_0010ecf8;
    }
    uVar1 = 0x1f;
    *(undefined1 *)(iVar5 + 0x518) = 0;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    iVar2 = FUN_0010b9b0(param_1);
    uVar1 = 0x1f;
    if (*(int *)(iVar5 + 0x574) < iVar2) {
      uVar1 = 0x20;
    }
    break;
  case 6:
    lVar4 = FUN_0026f4c0(iVar5 + 0x9b0,iVar5 + 0x52e);
    uVar1 = 7;
    if (lVar4 == 0) {
      uVar1 = 0x1f;
    }
    break;
  case 7:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) {
      if (lVar4 != 0xd) {
        return;
      }
      lVar4 = FUN_0026f798(iVar5 + 0x9b0,iVar5 + 0x52e);
      if (lVar4 != 0) {
        *(undefined4 *)(iVar5 + 0x34) = 8;
        return;
      }
      goto LAB_0010f164;
    }
    uVar1 = 0x1f;
    break;
  case 8:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 == 0) {
      uVar1 = 0x1f;
    }
    else {
LAB_0010f14c:
      uVar1 = 0x20;
      if (lVar4 != 0xd) {
        return;
      }
    }
    break;
  default:
    goto switchD_0010ec08_caseD_9;
  case 0xb:
    FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    *(undefined4 *)(iVar5 + 0x34) = 0xc;
    return;
  case 0xc:
    iVar2 = iVar5 + 0x9b0;
    lVar4 = FUN_0026f7e0(iVar2,0,aiStack_50);
    lVar3 = FUN_0026f4b8(iVar2);
    if (lVar4 == 0) goto LAB_0010f164;
    if (lVar4 != 0xd) {
      return;
    }
    uVar1 = 0x20;
    if (lVar3 == 3) {
      lVar4 = FUN_0026f748(iVar2);
      uVar1 = 0x20;
      if (lVar4 != 0) {
        *(undefined4 *)(iVar5 + 0x34) = 0xd;
        return;
      }
    }
    break;
  case 0xd:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) goto LAB_0010f14c;
    uVar1 = 0x1f;
    break;
  case 0xe:
    FUN_0010bbe8(iVar5 + 0xb50);
    if (*(char *)(iVar5 + 0x518) == '\x01') {
      *(undefined4 *)(iVar5 + 0x34) = 0xf;
      *(undefined4 *)(iVar5 + 0x578) = 3;
      *(undefined1 *)(iVar5 + 0x38) = 0;
      return;
    }
    *(undefined1 *)(iVar5 + 0x38) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0x11;
    *(undefined4 *)(iVar5 + 0x578) = 1;
    return;
  case 0xf:
    lVar4 = FUN_0026f508(iVar5 + 0x9b0,
                         *(undefined4 *)(iVar5 + (*(int *)(iVar5 + 0x578) + -1) * 4 + 0x57c));
    uVar1 = 0x10;
    if (lVar4 == 0) {
      uVar1 = 0x11;
      *(undefined1 *)(iVar5 + 0x38) = 0;
    }
    break;
  case 0x10:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 == 0) {
      *(undefined4 *)(iVar5 + 0x34) = 0x11;
      *(undefined1 *)(iVar5 + 0x38) = 1;
      return;
    }
    uVar1 = 0x11;
    if (lVar4 != 0xd) {
      return;
    }
    *(undefined1 *)(iVar5 + 0x38) = 0;
    break;
  case 0x11:
    if (*(char *)(iVar5 + 0x38) == '\0') {
      lVar4 = FUN_0026f580(iVar5 + 0x9b0,
                           *(undefined4 *)(iVar5 + (*(int *)(iVar5 + 0x578) + -1) * 4 + 0x57c),6,0);
    }
    else {
      lVar4 = FUN_0026f580(iVar5 + 0x9b0,
                           *(undefined4 *)(iVar5 + (*(int *)(iVar5 + 0x578) + -1) * 4 + 0x57c),2,0);
    }
    if (lVar4 != 0) {
      *(undefined4 *)(iVar5 + 0x34) = 0x12;
      return;
    }
    goto LAB_0010f164;
  case 0x12:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) goto LAB_0010f14c;
    uVar1 = 0x13;
    break;
  case 0x13:
    iVar2 = iVar5 + (*(int *)(iVar5 + 0x578) + -1) * 4;
    lVar4 = FUN_0026f6e8(iVar5 + 0x9b0,*(undefined4 *)(iVar2 + 0x594),
                         **(undefined4 **)(iVar2 + 0x588),0);
    if (lVar4 != 0) {
      *(undefined4 *)(iVar5 + 0x34) = 0x14;
      return;
    }
LAB_0010f104:
    FUN_0026f640(iVar5 + 0x9b0);
    *(undefined4 *)(iVar5 + 0x34) = 0x20;
    return;
  case 0x14:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) goto LAB_0010f14c;
    uVar1 = 0x15;
    break;
  case 0x15:
    lVar4 = FUN_0026f640(iVar5 + 0x9b0);
    if (lVar4 != 0) {
      *(undefined4 *)(iVar5 + 0x34) = 0x16;
      return;
    }
    goto LAB_0010f164;
  case 0x16:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) goto LAB_0010f14c;
    iVar2 = *(int *)(iVar5 + 0x578) + -1;
    *(int *)(iVar5 + 0x578) = iVar2;
    if (iVar2 < 1) {
      FUN_0010f620(DAT_0040f4ec);
      uVar1 = 0x1f;
    }
    else {
      uVar1 = 0xf;
    }
    break;
  case 0x17:
    uVar1 = 0x18;
    break;
  case 0x18:
    lVar4 = FUN_0026f580(iVar5 + 0x9b0,iVar5 + 0x54e,1,0);
    if (lVar4 != 0) {
      *(undefined4 *)(iVar5 + 0x34) = 0x19;
      return;
    }
    goto LAB_0010f164;
  case 0x19:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) goto LAB_0010f14c;
    uVar1 = 0x1a;
    break;
  case 0x1a:
    lVar4 = FUN_0026f688(iVar5 + 0x9b0,iVar5 + 0xb50,*(undefined4 *)(iVar5 + 0x51c),0);
    if (lVar4 != 0) {
      *(undefined4 *)(iVar5 + 0x34) = 0x1b;
      return;
    }
    goto LAB_0010f164;
  case 0x1b:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) {
      if (lVar4 != 0xd) {
        return;
      }
      goto LAB_0010f104;
    }
    uVar1 = 0x1c;
    break;
  case 0x1c:
    lVar4 = FUN_0026f640(iVar5 + 0x9b0);
    if (lVar4 != 0) {
      *(undefined4 *)(iVar5 + 0x34) = 0x1d;
      return;
    }
LAB_0010f164:
    uVar1 = 0x20;
    break;
  case 0x1d:
    lVar4 = FUN_0026f7e0(iVar5 + 0x9b0,0,aiStack_50);
    if (lVar4 != 0) goto LAB_0010f14c;
    uVar1 = 0x1f;
  }
  *(undefined4 *)(iVar5 + 0x34) = uVar1;
switchD_0010ec08_caseD_9:
  return;
}


// ==== FUN_0010f188 @ 0010f188 ====

void FUN_0010f188(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 2;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + -1;
    FUN_00122af0(piVar1);
    piVar1 = piVar1 + 0x1aa;
  } while (-1 < iVar2);
  *param_1 = (int)(param_1 + 2);
  return;
}


// ==== FUN_0010f1e0 @ 0010f1e0 ====

undefined4 FUN_0010f1e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 2;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + -1;
    FUN_00122b10(piVar1);
    piVar1 = piVar1 + 0x1aa;
  } while (-1 < iVar2);
  *param_1 = (int)(param_1 + 2);
  return 1;
}


// ==== FUN_0010f258 @ 0010f258 ====

void FUN_0010f258(void)

{
  return;
}


// ==== FUN_0010f260 @ 0010f260 ====

undefined4 FUN_0010f260(undefined4 *param_1)

{
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = 0;
  param_1[3] = 0;
  return 1;
}


// ==== FUN_0010f280 @ 0010f280 ====

int FUN_0010f280(int param_1)

{
  return param_1 + 0x18;
}


// ==== FUN_0010f288 @ 0010f288 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f53c int_*

void FUN_0010f288(int param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0x26;
  *(undefined4 *)(param_1 + 0x1c) = 0x778;
  puVar3 = (undefined8 *)(DAT_0040f0e0 + 0x2014c);
  if ((((uint)puVar3 | (uint)puVar6) & 7) == 0) {
    puVar2 = (undefined8 *)(DAT_0040f0e0 + 0x201ec);
    do {
      uVar5 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar5;
      puVar6[2] = uVar7;
      puVar6[3] = uVar8;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar3 != puVar2);
  }
  else {
    puVar2 = (undefined8 *)(DAT_0040f0e0 + 0x201ec);
    do {
      uVar5 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar5;
      puVar6[2] = uVar7;
      puVar6[3] = uVar8;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar3 != puVar2);
  }
  puVar2 = (undefined8 *)(param_1 + 0xe0);
  uVar5 = puVar3[1];
  uVar7 = puVar3[2];
  uVar1 = *(undefined4 *)(puVar3 + 3);
  *puVar6 = *puVar3;
  puVar6[1] = uVar5;
  puVar6[2] = uVar7;
  *(undefined4 *)(puVar6 + 3) = uVar1;
  if (param_3 == 0) {
    FUN_00122b88(*DAT_0040f53c);
    puVar3 = (undefined8 *)*DAT_0040f53c;
    puVar4 = puVar3 + 0xd4;
    puVar6 = puVar2;
    do {
      uVar5 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar5;
      puVar6[2] = uVar7;
      puVar6[3] = uVar8;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar3 != puVar4);
    *puVar6 = *puVar3;
    FUN_00124080(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc),puVar2);
  }
  else {
    FUN_00123e70(puVar2);
  }
  if (param_2 != 0) {
    FUN_00124090(puVar2,param_2);
  }
  FUN_00124048(puVar2);
  uVar1 = FUN_0010f6d8(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x788) = uVar1;
  return;
}


// ==== FUN_0010f470 @ 0010f470 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f53c int_*

void FUN_0010f470(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  
  iVar11 = (int)param_1;
  iVar9 = 0;
  puVar7 = (undefined4 *)(iVar11 + 0x48);
  *(undefined1 *)(DAT_0040f0e0 + 0x20170) = *(undefined1 *)(iVar11 + 0x44);
  *(undefined1 *)(DAT_0040f0e0 + 0x20165) = *(undefined1 *)(iVar11 + 0x39);
  *(undefined1 *)(DAT_0040f0e0 + 0x20167) = *(undefined1 *)(iVar11 + 0x3b);
  do {
    iVar5 = iVar9 * 4;
    uVar1 = *puVar7;
    iVar9 = iVar9 + 1;
    puVar7 = puVar7 + 1;
    *(undefined4 *)(DAT_0040f0e0 + iVar5 + 0x20174) = uVar1;
  } while (iVar9 < 0x25);
  *(undefined1 *)(DAT_0040f0e0 + 0x20168) = *(undefined1 *)(iVar11 + 0x3c);
  *(undefined4 *)(DAT_0040f0e0 + 0x2014c) = *(undefined4 *)(iVar11 + 0x20);
  *(undefined4 *)(DAT_0040f0e0 + 0x20150) = *(undefined4 *)(iVar11 + 0x24);
  *(undefined4 *)(DAT_0040f0e0 + 0x20158) = *(undefined4 *)(iVar11 + 0x2c);
  FUN_00108bb8(DAT_0040f0e0 + 0x2014c);
  *(undefined4 *)(DAT_0040f0e0 + 0x20154) = *(undefined4 *)(iVar11 + 0x28);
  *(undefined4 *)(DAT_0040f0e0 + 0x2015c) = *(undefined4 *)(iVar11 + 0x30);
  *(undefined4 *)(DAT_0040f0e0 + 0x20160) = *(undefined4 *)(iVar11 + 0x34);
  *(undefined1 *)(DAT_0040f0e0 + 0x20164) = *(undefined1 *)(iVar11 + 0x38);
  puVar2 = (undefined8 *)*DAT_0040f53c;
  FUN_00122b10(puVar2);
  puVar3 = (undefined8 *)(iVar11 + 0xe0);
  puVar4 = puVar2;
  do {
    uVar6 = puVar3[1];
    uVar8 = puVar3[2];
    uVar10 = puVar3[3];
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    puVar4[2] = uVar8;
    puVar4[3] = uVar10;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar3 != (undefined8 *)(iVar11 + 0x780));
  *puVar4 = *puVar3;
  FUN_00122b60(puVar2);
  FUN_0010f620(param_1);
  return;
}


// ==== FUN_0010f620 @ 0010f620 ====

void FUN_0010f620(undefined4 *param_1)

{
  param_1[1] = param_1[0x38];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)param_1 + 0x785);
  *param_1 = param_1[0x1e2];
  param_1[3] = param_1[4];
  return;
}


// ==== FUN_0010f648 @ 0010f648 ====

void FUN_0010f648(int param_1)

{
  undefined4 uVar1;
  
  FUN_001240b0(param_1 + 0xe0,1);
  uVar1 = FUN_0010f6d8(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x788) = uVar1;
  return;
}


// ==== FUN_0010f680 @ 0010f680 ====

bool FUN_0010f680(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  bVar1 = false;
  if (*piVar3 == 0x26) {
    if (piVar3[1] == 0x778) {
      iVar2 = FUN_0010f6d8(param_1);
      bVar1 = iVar2 == piVar3[0x1dc];
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ==== FUN_0010f6d8 @ 0010f6d8 ====

int FUN_0010f6d8(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = *param_1;
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + iVar1;
  } while (uVar2 < 0x1dc);
  return iVar3;
}


// ==== FUN_0010f700 @ 0010f700 ====

void FUN_0010f700(void)

{
  return;
}


// ==== FUN_0010f708 @ 0010f708 ====

void FUN_0010f708(void)

{
  return;
}


// ==== FUN_0010f710 @ 0010f710 ====

void FUN_0010f710(void)

{
  return;
}


// ==== FUN_0010f718 @ 0010f718 ====

undefined4 FUN_0010f718(void)

{
  return 1;
}


// ==== FUN_0010f720 @ 0010f720 ====

void FUN_0010f720(void)

{
  return;
}


// ==== FUN_0010f728 @ 0010f728 ====

undefined4 FUN_0010f728(void)

{
  return 1;
}


// ==== FUN_0010f730 @ 0010f730 ====

void FUN_0010f730(void)

{
  return;
}


// ==== FUN_0010f740 @ 0010f740 ====

undefined4 FUN_0010f740(int *param_1)

{
  return *(undefined4 *)(*param_1 * 0x40 + param_1[6] + -0x40);
}


// ==== FUN_0010f758 @ 0010f758 ====
// GLOBAL DAT_0040f0e0 int

void FUN_0010f758(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_0027cf78(param_1,param_1,0x3f3b90,DAT_0040f0e0 + 0x20120);
  piVar4 = (int *)param_1;
  FUN_0027a798(piVar4 + 0x1c0);
  FUN_0027a798(piVar4 + 0x1d4);
  FUN_0010f700(piVar4 + 0x1fc);
  iVar3 = FUN_0027d118(param_1,0x594c3bb5a28a38a1);
  if (*piVar4 != iVar3) {
    (**(code **)(piVar4[5] + 0x2c))((int)piVar4 + (int)*(short *)(piVar4[5] + 0x28),iVar3,0);
    iVar1 = *piVar4;
    iVar2 = piVar4[3];
    *piVar4 = iVar3;
    if ((iVar2 != 0) && (piVar4[4] = *(int *)(iVar2 + 0x20), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0x20);
    }
    (**(code **)(piVar4[5] + 0x34))((int)piVar4 + (int)*(short *)(piVar4[5] + 0x30),iVar1,0);
  }
  *(undefined1 *)(piVar4 + 0x599) = 1;
  piVar4[0x59a] = 3;
  *(undefined1 *)((int)piVar4 + 0x7e2) = 0;
  piVar4[0x1bc] = 0;
  piVar4[0x1bd] = 0;
  *(undefined1 *)((int)piVar4 + 0x7e1) = 0;
  return;
}


// ==== FUN_0010f860 @ 0010f860 ====
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f4d0 int

undefined8 FUN_0010f860(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  int *piVar9;
  int *piVar10;
  int *piVar11;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fStack_1ec;
  float fStack_1e8;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_e0 [16];
  int iStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  undefined1 *puStack_c0;
  
  iStack_d0 = 9;
  piVar10 = (int *)param_1;
  piStack_cc = piVar10 + 0x7f;
  piStack_c8 = piVar10 + 0x80;
  piStack_c4 = piVar10 + 0xcc;
  piVar9 = piVar10 + 0x79;
  piVar11 = piVar10 + 0x144;
  FUN_00114228(piStack_cc);
  FUN_00114968(piVar10 + 0x7e);
  FUN_001178d8(piStack_c8);
  FUN_00118808(piStack_c4);
  FUN_00118348(piVar10 + 0xd4);
  FUN_001175e8(piVar10 + 0xf0);
  FUN_00118240(piVar10 + 0x11c);
  FUN_00115d38(piVar10 + 300);
  FUN_00116de8(piVar10 + 0x138);
  FUN_001168e0(piVar10 + 0x98,param_1);
  puStack_c0 = auStack_e0;
  piVar10[0x70] = (int)piStack_cc;
  piVar10[0x72] = (int)(piVar10 + 0x98);
  piVar10[0x71] = (int)piStack_c8;
  piVar10[0x74] = (int)(piVar10 + 0xd4);
  piVar10[0x73] = (int)piStack_c4;
  piVar10[0x75] = (int)(piVar10 + 0xf0);
  piVar10[0x76] = (int)(piVar10 + 0x11c);
  piVar10[0x77] = (int)(piVar10 + 300);
  piVar10[0x78] = (int)(piVar10 + 0x138);
  do {
    iStack_d0 = iStack_d0 + 1;
    FUN_00112790(piVar11,param_1);
    *piVar9 = (int)piVar11;
    piVar9 = piVar9 + 1;
    piVar11 = piVar11 + 0x18;
  } while (iStack_d0 < 0xe);
  FUN_001ae938(DAT_0040f4c0,1,piVar10 + 0x1c0);
  FUN_0027a838(piVar10 + 0x1c0);
  FUN_0027a838(piVar10 + 0x1d4);
  iVar1 = FUN_0012bd98(DAT_0040f4d0,*(undefined4 *)(DAT_0040f4d0 + 0x5ab0));
  iVar1 = *(int *)(iVar1 + 0xc);
  pauVar8 = (undefined1 (*) [16])(piVar10 + 0x1d8);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
  pauVar7 = (undefined1 (*) [16])(iVar1 + 0x50);
  auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
  auVar15 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  auVar13 = _vaddbc(auVar13,auVar14);
  auVar13 = _vaddbc(auVar13,auVar15);
  auVar13 = _qmfc2(auVar13._0_4_);
  if (0.0 < auVar13._0_4_) {
    auVar14 = _vsubbc(auVar14,auVar15);
    _lqc2(*(undefined1 (*) [16])(piVar10 + 0x1d8));
    auVar14 = _vaddbc(in_vf0,auVar14);
    auVar14 = _sqc2(auVar14);
    *(undefined1 (*) [16])(piVar10 + 0x1d8) = auVar14;
    fVar12 = SQRT(auVar13._0_4_ + 1.0);
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
    auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
    auVar13 = _vsubbc(auVar13,auVar14);
    auVar13 = _vaddbc(in_vf0,auVar13);
    auVar15 = _qmtc2(0.5 / fVar12);
    auVar13 = _sqc2(auVar13);
    *(undefined1 (*) [16])(piVar10 + 0x1d8) = auVar13;
    auVar16 = _qmtc2(fVar12 * 0.5);
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
    auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
    auVar13 = _vsubbc(auVar13,auVar14);
    auVar13 = _vaddbc(in_vf0,auVar13);
    auVar13 = _vmove(auVar13);
    auVar13 = _vmulbc(auVar13,auVar15);
    auVar13 = _sqc2(auVar13);
    *(undefined1 (*) [16])(piVar10 + 0x1d8) = auVar13;
    auVar13 = _vmulbc(in_vf0,auVar16);
    auVar13 = _sqc2(auVar13);
    *(undefined1 (*) [16])(piVar10 + 0x1d8) = auVar13;
  }
  else {
    auVar13 = _sqc2(auVar14);
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
    auVar14 = _qmfc2(auVar14._0_4_);
    fStack_1ec = auVar13._4_4_;
    if (fStack_1ec <= auVar14._0_4_) {
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
      auVar13 = _qmfc2(auVar13._0_4_);
      uVar5 = (uint)(auVar13._0_4_ < SUB124(*(undefined1 (*) [12])(iVar1 + 0x70),8)) << 1;
    }
    else {
      uVar5 = 1;
      if (SUB124(*(undefined1 (*) [12])(iVar1 + 0x60),4) <
          SUB124(*(undefined1 (*) [12])(iVar1 + 0x70),8)) {
        uVar5 = 2;
      }
    }
    if (uVar5 == 1) {
      auVar14 = _lqc2(*pauVar7);
      auVar16 = _qmtc2(0x3f800000);
      auVar15 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar14 = _vaddbc(auVar15,auVar14);
      auVar13 = _vsubbc(auVar13,auVar14);
      _lqc2(*pauVar8);
      auVar13 = _vaddbc(auVar13,auVar16);
      auVar13 = _sqc2(auVar13);
      fStack_1ec = auVar13._4_4_;
      auVar13 = _qmtc2(SQRT(fStack_1ec) * 0.5);
      auVar15 = _qmtc2(0.5 / SQRT(fStack_1ec));
      auVar13 = _vaddbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar14 = _lqc2(*pauVar7);
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar13 = _vsubbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vmulbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar13 = _vaddbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vaddbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar14 = _lqc2(*pauVar7);
      auVar13 = _vaddbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vaddbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
    }
    else if (uVar5 < 2) {
      if (uVar5 != 0) {
        iVar2 = *(int *)(iVar1 + 0x80);
        iVar3 = *(int *)(iVar1 + 0x84);
        iVar4 = *(int *)(iVar1 + 0x88);
        iVar1 = *(int *)(iVar1 + 0x8c);
        goto LAB_0010fd48;
      }
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar16 = _qmtc2(0x3f800000);
      auVar15 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar13 = _lqc2(*pauVar7);
      auVar14 = _vaddbc(auVar15,auVar14);
      auVar13 = _vsubbc(auVar13,auVar14);
      auVar13 = _vaddbc(auVar13,auVar16);
      _lqc2(*pauVar8);
      auVar13 = _qmfc2(auVar13._0_4_);
      auVar14 = _qmtc2(SQRT(auVar13._0_4_) * 0.5);
      auVar15 = _qmtc2(0.5 / SQRT(auVar13._0_4_));
      auVar13 = _vaddbc(in_vf0,auVar14);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar13 = _vsubbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vmulbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar13 = _lqc2(*pauVar7);
      auVar13 = _vaddbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vaddbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar13 = _lqc2(*pauVar7);
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar13 = _vaddbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vaddbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
    }
    else {
      if (uVar5 != 2) {
        iVar2 = *(int *)(iVar1 + 0x80);
        iVar3 = *(int *)(iVar1 + 0x84);
        iVar4 = *(int *)(iVar1 + 0x88);
        iVar1 = *(int *)(iVar1 + 0x8c);
        goto LAB_0010fd48;
      }
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar16 = _qmtc2(0x3f800000);
      auVar15 = _lqc2(*pauVar7);
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar14 = _vaddbc(auVar15,auVar14);
      auVar13 = _vsubbc(auVar13,auVar14);
      _lqc2(*pauVar8);
      auVar13 = _vaddbc(auVar13,auVar16);
      auVar13 = _sqc2(auVar13);
      fStack_1e8 = auVar13._8_4_;
      auVar13 = _qmtc2(SQRT(fStack_1e8) * 0.5);
      auVar15 = _qmtc2(0.5 / SQRT(fStack_1e8));
      auVar13 = _vaddbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar13 = _lqc2(*pauVar7);
      auVar13 = _vsubbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vmulbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar14 = _lqc2(*pauVar7);
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar13 = _vaddbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vaddbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar13 = _vaddbc(auVar13,auVar14);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar13 = _vaddbc(in_vf0,auVar13);
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
    }
  }
  iVar2 = *(int *)(iVar1 + 0x80);
  iVar3 = *(int *)(iVar1 + 0x84);
  iVar4 = *(int *)(iVar1 + 0x88);
  iVar1 = *(int *)(iVar1 + 0x8c);
LAB_0010fd48:
  lVar6 = 0x6d6123044330fccf;
  piVar10[0x1dc] = iVar2;
  piVar10[0x1dd] = iVar3;
  piVar10[0x1de] = iVar4;
  piVar10[0x1df] = iVar1;
  piVar10[0x1d4] = 0x428c0000;
  *(undefined1 *)(piVar10 + 0x599) = 1;
  *(undefined1 *)((int)piVar10 + 0x7e1) = 0;
  *(undefined1 *)((int)piVar10 + 0x1665) = 1;
  piVar10[0x1c0] = 0x428c0000;
  piVar10[0x598] = 0x3f800000;
  *(undefined1 *)((int)piVar10 + 0x7e2) = 1;
  if ((long *)*piVar10 != (long *)0x0) {
    lVar6 = *(long *)*piVar10;
  }
  if (lVar6 == 0x594c3bb5a28a38a1) {
    (**(code **)(piVar10[5] + 0x24))((int)piVar10 + (int)*(short *)(piVar10[5] + 0x20),0,0);
    (**(code **)(piVar10[5] + 0x24))((int)piVar10 + (int)*(short *)(piVar10[5] + 0x20),2,0);
  }
  FUN_0010f718(piVar10 + 0x1fc);
  auVar13 = _lqc2(*(undefined1 (*) [16])(piVar10 + 0x1c4));
  auVar14 = _qmtc2(0x3fb504f3);
  auVar15 = _vmulbc(auVar13,auVar14);
  auVar13 = _vmulbc(auVar15,auVar15);
  auVar14 = _vmulbc(auVar15,auVar15);
  _sqc2(auVar13);
  auVar16 = _vmulbc(auVar15,auVar15);
  auVar13 = _vmulbc(auVar15,auVar15);
  auVar17 = _vmulbc(auVar15,auVar15);
  auVar18 = _vmulbc(auVar15,auVar15);
  auVar19 = _vmulbc(auVar15,auVar15);
  _sqc2(auVar14);
  auVar13 = _qmfc2(auVar13._0_4_);
  auVar14 = _vmulbc(auVar15,auVar15);
  fVar12 = 1.0 - auVar13._0_4_;
  _sqc2(auVar16);
  auVar14 = _qmfc2(auVar14._0_4_);
  auVar13 = _vmulbc(auVar15,auVar15);
  _sqc2(auVar17);
  auVar13 = _qmfc2(auVar13._0_4_);
  _lqc2(auStack_120);
  auVar15 = _qmtc2((1.0 - *(float *)(puStack_c0 + 4)) - *(float *)(puStack_c0 + 8));
  _sqc2(auVar18);
  auVar21 = _vaddbc(in_vf0,auVar15);
  _lqc2(auStack_100);
  _lqc2(auStack_110);
  _vmove(auVar21);
  _sqc2(auVar19);
  auVar15 = _qmtc2(auVar13._0_4_ + *(float *)(puStack_c0 + 0xc));
  auVar17 = _qmtc2(fVar12 - *(float *)(puStack_c0 + 8));
  auVar18 = _vaddbc(in_vf0,auVar15);
  auVar16 = _qmtc2(*(float *)(puStack_c0 + 4) - *(float *)(puStack_c0 + 0xc));
  _vmove(auVar18);
  auVar15 = _qmtc2(auVar14._0_4_ - *(float *)(puStack_c0 + 0xc));
  auVar14 = _qmtc2(auVar14._0_4_ + *(float *)(puStack_c0 + 0xc));
  auVar22 = _vaddbc(in_vf0,auVar15);
  auVar20 = _vaddbc(in_vf0,auVar14);
  auVar19 = _vaddbc(in_vf0,auVar16);
  auVar13 = _qmtc2(auVar13._0_4_ - *(float *)(puStack_c0 + 0xc));
  _vmove(auVar22);
  _vmove(auVar20);
  auVar15 = _vaddbc(in_vf0,auVar17);
  auVar16 = _vaddbc(in_vf0,auVar13);
  _sqc2(auVar21);
  _sqc2(auVar22);
  auVar13 = _qmtc2(*(float *)(puStack_c0 + 4) + *(float *)(puStack_c0 + 0xc));
  _sqc2(auVar18);
  auVar14 = _qmtc2(fVar12 - *(float *)(puStack_c0 + 4));
  _sqc2(auVar20);
  _sqc2(auVar15);
  _sqc2(auVar19);
  _vmove(auVar15);
  piVar10[0x59a] = 3;
  _vmove(auVar19);
  auVar15 = _vaddbc(in_vf0,auVar13);
  auVar14 = _vaddbc(in_vf0,auVar14);
  _sqc2(auVar16);
  _sqc2(auVar15);
  _sqc2(auVar14);
  _sqc2(auVar16);
  _sqc2(auVar15);
  _sqc2(auVar14);
  _sqc2(auVar16);
  _sqc2(auVar15);
  _sqc2(auVar14);
  auVar13 = _sqc2(auVar16);
  *(undefined1 (*) [16])(piVar10 + 0x1e8) = auVar13;
  auVar13 = _sqc2(auVar15);
  *(undefined1 (*) [16])(piVar10 + 0x1ec) = auVar13;
  auVar13 = _sqc2(auVar14);
  *(undefined1 (*) [16])(piVar10 + 0x1f0) = auVar13;
  piVar10[500] = piVar10[0x1c8];
  piVar10[0x1f5] = piVar10[0x1c9];
  piVar10[0x1f6] = piVar10[0x1ca];
  piVar10[0x1f7] = piVar10[0x1cb];
  *(undefined1 *)(piVar10 + 0x59e) = 0;
  _sqc2(auVar16);
  _sqc2(auVar15);
  _sqc2(auVar14);
  piVar10[0x59c] = 0;
  piVar10[0x59d] = 0;
  return 1;
}


// ==== FUN_00110010 @ 00110010 ====

bool FUN_00110010(undefined4 *param_1)

{
  return *(long *)(param_1 + 0x59c) != *(long *)*param_1;
}


// ==== FUN_00110028 @ 00110028 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f4d8 int

void FUN_00110028(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  if (*(char *)((int)param_1 + 0x7e2) != '\0') {
    *(undefined8 *)(param_1 + 0x59c) = *(undefined8 *)*param_1;
    lVar7 = 0;
    piVar6 = param_1 + 0x70;
    uVar13 = *(undefined4 *)(DAT_0040f4d0 + 0x1c);
    uVar12 = *(undefined4 *)(DAT_0040f0e0 + 0x2013c);
    FUN_0027d098();
    do {
      if ((*(ulong *)(param_1 + 0x1bc) >> lVar7 & 1) != 0) {
        iVar9 = *(int *)*piVar6;
        (**(code **)(iVar9 + 0x2c))(uVar13,*piVar6 + (int)*(short *)(iVar9 + 0x28),param_1 + 0x1c0);
      }
      lVar7 = (long)((int)lVar7 + 1);
      piVar6 = piVar6 + 1;
    } while (lVar7 < 0xe);
    FUN_0010f720(param_1 + 0x1fc);
    if (*(char *)((int)param_1 + 0x7e1) != '\0') {
      FUN_00114988(uVar12,param_1 + 0x7e,param_1 + 0x1d4);
      FUN_0027a7b0(uVar12,param_1 + 0x1d4);
    }
    FUN_0027a7b0(uVar13,param_1 + 0x1c0);
    iVar9 = FUN_0029dd08((float)param_1[0x1c0] * 0.5 * 0.017453292);
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c4));
    auVar16 = _qmtc2(0x3fb504f3);
    auVar15 = _vmulbc(auVar14,auVar16);
    _lqc2(auStack_100);
    auVar14 = _vmulbc(auVar15,auVar15);
    auVar17 = _vmulbc(auVar15,auVar15);
    auVar14 = _sqc2(auVar14);
    auVar18 = _vmulbc(auVar15,auVar15);
    auVar19 = _vmulbc(auVar15,auVar15);
    auVar20 = _vmulbc(auVar15,auVar15);
    auVar16 = _vmulbc(auVar15,auVar15);
    auVar21 = _vmulbc(auVar15,auVar15);
    fStack_bc = auVar14._4_4_;
    fVar3 = fStack_bc;
    auVar16 = _qmfc2(auVar16._0_4_);
    auVar14 = _sqc2(auVar17);
    fVar8 = 1.0 - fStack_bc;
    auVar17 = _vmulbc(auVar15,auVar15);
    fVar10 = 1.0 - auVar16._0_4_;
    auVar16 = _vmulbc(auVar15,auVar15);
    fStack_bc = auVar14._4_4_;
    auVar16 = _qmfc2(auVar16._0_4_);
    auVar14 = _sqc2(auVar18);
    auVar15 = _qmfc2(auVar17._0_4_);
    _lqc2(auStack_e0);
    fStack_b8 = auVar14._8_4_;
    auVar14 = _sqc2(auVar19);
    _lqc2(auStack_f0);
    auVar17 = _qmtc2(fVar8 - fStack_b8);
    fStack_b4 = auVar14._12_4_;
    auVar14 = _sqc2(auVar20);
    auVar19 = _vaddbc(in_vf0,auVar17);
    fVar11 = fStack_bc - fStack_b4;
    fStack_bc = fStack_bc + fStack_b4;
    fStack_b4 = auVar14._12_4_;
    auVar14 = _sqc2(auVar21);
    _vmove(auVar19);
    auVar17 = _qmtc2(auVar16._0_4_ + fStack_b4);
    fVar8 = auVar16._0_4_ - fStack_b4;
    fStack_b4 = auVar14._12_4_;
    auVar18 = _vaddbc(in_vf0,auVar17);
    auVar16 = _qmtc2(fVar10 - fStack_b8);
    _vmove(auVar18);
    _sqc2(auVar19);
    auVar14 = _qmtc2(auVar15._0_4_ - fStack_b4);
    auVar19 = _vaddbc(in_vf0,auVar14);
    auVar14 = _qmtc2(auVar15._0_4_ + fStack_b4);
    _vmove(auVar19);
    auVar20 = _vaddbc(in_vf0,auVar14);
    auVar21 = _vaddbc(in_vf0,auVar16);
    auVar14 = _qmtc2(fVar11);
    auVar16 = _qmtc2(fVar8);
    _vmove(auVar20);
    auVar15 = _vaddbc(in_vf0,auVar16);
    auVar22 = _vaddbc(in_vf0,auVar14);
    auVar14 = _qmtc2(fStack_bc);
    _vmove(auVar21);
    auVar17 = _vaddbc(in_vf0,auVar14);
    _sqc2(auVar19);
    _sqc2(auVar18);
    auVar14 = _qmtc2(fVar10 - fVar3);
    _vmove(auVar22);
    _sqc2(auVar20);
    auVar16 = _vaddbc(in_vf0,auVar14);
    _sqc2(auVar21);
    _sqc2(auVar22);
    param_1[0x598] = iVar9;
    _sqc2(auVar15);
    _sqc2(auVar17);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar17);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar17);
    _sqc2(auVar16);
    auVar14 = _sqc2(auVar15);
    *(undefined1 (*) [16])(param_1 + 0x1e8) = auVar14;
    auVar14 = _sqc2(auVar17);
    *(undefined1 (*) [16])(param_1 + 0x1ec) = auVar14;
    auVar14 = _sqc2(auVar16);
    *(undefined1 (*) [16])(param_1 + 0x1f0) = auVar14;
    param_1[500] = (int)*(undefined8 *)(param_1 + 0x1c8);
    param_1[0x1f5] = (int)((ulong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20);
    param_1[0x1f6] = param_1[0x1ca];
    param_1[0x1f7] = param_1[0x1cb];
    _sqc2(auVar15);
    _sqc2(auVar17);
    _sqc2(auVar16);
    uVar5 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    FUN_00280400(*(undefined4 *)(DAT_0040f4d0 + 0x20),uVar5,*(undefined8 *)(param_1 + 500),0);
    iVar4 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    iVar9 = param_1[0x1f1];
    iVar1 = param_1[0x1f2];
    iVar2 = param_1[499];
    *(int *)(iVar4 + 0x20) = param_1[0x1f0];
    *(int *)(iVar4 + 0x24) = iVar9;
    *(int *)(iVar4 + 0x28) = iVar1;
    *(int *)(iVar4 + 0x2c) = iVar2;
    iVar4 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    iVar9 = param_1[0x1ed];
    iVar1 = param_1[0x1ee];
    iVar2 = param_1[0x1ef];
    *(int *)(iVar4 + 0x10) = param_1[0x1ec];
    *(int *)(iVar4 + 0x14) = iVar9;
    *(int *)(iVar4 + 0x18) = iVar1;
    *(int *)(iVar4 + 0x1c) = iVar2;
    FUN_001ae998(DAT_0040f4c0,1);
    lVar7 = 0x6d6123044330fccf;
    if ((long *)*param_1 != (long *)0x0) {
      lVar7 = *(long *)*param_1;
    }
    if ((lVar7 != 0x594c3b3ed729e1c6) && ((char)param_1[0x59e] == '\0')) {
      FUN_001c2878(DAT_0040f4d8 + 0x83ca0);
    }
  }
  return;
}


// ==== FUN_00110430 @ 00110430 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f0e4 undefined4

void FUN_00110430(int param_1)

{
  if (*(char *)(param_1 + 0x7e1) != '\0') {
    FUN_00101068(DAT_0040f0e4,*(undefined4 *)(DAT_0040f4c0 + 0xd540),param_1 + 0x700);
  }
  return;
}


// ==== FUN_00110478 @ 00110478 ====

void FUN_00110478(undefined4 param_1,int param_2)

{
  if (*(char *)(param_2 + 0x1664) != '\0') {
    *(undefined4 *)(param_2 + 0x700) = param_1;
  }
  return;
}


// ==== FUN_00110490 @ 00110490 ====

undefined4 FUN_00110490(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  
  lVar6 = 0;
  piVar7 = (int *)param_1;
  FUN_0010f728(piVar7 + 0x1fc);
  uVar4 = *(ulong *)(piVar7 + 0x1bc);
  while( true ) {
    if ((uVar4 >> lVar6 & 1) != 0) {
      FUN_001108d0(param_1,lVar6);
    }
    lVar6 = (long)((int)lVar6 + 1);
    if (0xd < lVar6) break;
    uVar4 = *(ulong *)(piVar7 + 0x1bc);
  }
  if (*(char *)((int)piVar7 + 0x7e1) != '\0') {
    FUN_00114980(piVar7 + 0x7e,0);
  }
  piVar8 = piVar7 + 0x70;
  FUN_0027ac40(piVar7 + 0x1d4);
  iVar5 = 0xd;
  FUN_0027ac40(piVar7 + 0x1c0);
  piVar1 = (int *)*piVar8;
  while( true ) {
    iVar5 = iVar5 + -1;
    piVar8 = piVar8 + 1;
    (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10));
    if (iVar5 < 0) break;
    piVar1 = (int *)*piVar8;
  }
  FUN_00114970(piVar7 + 0x7e);
  piVar7[0x1bc] = 0;
  piVar7[0x1bd] = 0;
  iVar5 = FUN_0027d118(param_1,0x594c3bb5a28a38a1);
  if (*piVar7 != iVar5) {
    (**(code **)(piVar7[5] + 0x2c))((int)piVar7 + (int)*(short *)(piVar7[5] + 0x28),iVar5,0);
    iVar2 = *piVar7;
    iVar3 = piVar7[3];
    *piVar7 = iVar5;
    if ((iVar3 != 0) && (piVar7[4] = *(int *)(iVar3 + 0x20), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar3 + 0x20);
    }
    (**(code **)(piVar7[5] + 0x34))((int)piVar7 + (int)*(short *)(piVar7[5] + 0x30),iVar2,0);
  }
  piVar7[0x59a] = 3;
  *(undefined1 *)(piVar7 + 0x599) = 1;
  *(undefined1 *)((int)piVar7 + 0x7e2) = 0;
  return 1;
}


// ==== FUN_00110610 @ 00110610 ====

void FUN_00110610(int param_1)

{
  FUN_0027d020();
  FUN_0010f730(param_1 + 0x7f0);
  FUN_0027a7a8(param_1 + 0x700);
  FUN_0027a7a8(param_1 + 0x750);
  return;
}


// ==== FUN_00110650 @ 00110650 ====

int FUN_00110650(int param_1)

{
  if (*(char *)(param_1 + 0x7e1) != '\0') {
    return param_1 + 0x750;
  }
  return param_1 + 0x700;
}


// ==== FUN_00110670 @ 00110670 ====
// GLOBAL DAT_0040f4c0 undefined4

void FUN_00110670(int param_1)

{
  FUN_001ae938(DAT_0040f4c0,1,param_1 + 0x700);
  return;
}


// ==== FUN_00110698 @ 00110698 ====

void FUN_00110698(undefined4 param_1)

{
  FUN_001106b8(param_1,0);
  return;
}


// ==== FUN_001106b8 @ 001106b8 ====
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f0e8 undefined4

void FUN_001106b8(undefined4 param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  if (param_4 != 0 || *(int *)(iVar3 + 0x1668) != 0) {
    if (param_3 == 2) {
      FUN_001c2760(0x3f800000,DAT_0040f4d8 + 0x83ca0,3);
    }
    else if (param_3 == 10) {
      FUN_001c2760(0x3f800000,DAT_0040f4d8 + 0x83ca0,7);
    }
    piVar1 = (int *)(iVar3 + 0x1e4);
    for (lVar2 = 9; lVar2 < 0xd; lVar2 = (long)((int)lVar2 + 1)) {
      if ((*(ulong *)(iVar3 + 0x6f0) >> lVar2 & 1) == 0) {
        iVar3 = *piVar1;
        *(undefined4 *)(iVar3 + 0xc) = param_1;
        *(int *)(iVar3 + 0x10) = param_3;
        FUN_00110860(param_2);
        break;
      }
      piVar1 = piVar1 + 1;
    }
    if (param_3 == 2) {
      FUN_00107800(0x3e99999a,0,0x3f800000,0x3e4ccccd,DAT_0040f0e8,0,0xffff);
      FUN_001077b8(0x3ecccccd,0,DAT_0040f0e8,0,0xffff);
    }
    else if (param_3 == 3) {
      FUN_001077b8(0x3e99999a,0,DAT_0040f0e8,0,0xffff);
    }
  }
  return;
}


// ==== FUN_00110858 @ 00110858 ====

int FUN_00110858(int param_1)

{
  return param_1 + 0x7f0;
}


// ==== FUN_00110860 @ 00110860 ====

void FUN_00110860(int param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x7e2) != '\0') {
    piVar1 = *(int **)(param_1 + (int)param_2 * 4 + 0x1c0);
    iVar2 = *piVar1;
    (**(code **)(iVar2 + 0x1c))((int)piVar1 + (int)*(short *)(iVar2 + 0x18),param_1 + 0x700);
  }
  *(ulong *)(param_1 + 0x6f0) = *(ulong *)(param_1 + 0x6f0) | 1L << param_2;
  return;
}


// ==== FUN_001108d0 @ 001108d0 ====

void FUN_001108d0(int param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x7e2) != '\0') {
    piVar1 = *(int **)(param_1 + (int)param_2 * 4 + 0x1c0);
    iVar2 = *piVar1;
    (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20),0);
  }
  *(ulong *)(param_1 + 0x6f0) = *(ulong *)(param_1 + 0x6f0) & ~(1L << param_2);
  return;
}


// ==== FUN_00110940 @ 00110940 ====

void FUN_00110940(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  iVar3 = (int)param_1;
  uVar1 = *(ulong *)(iVar3 + 0x6f0);
  while( true ) {
    if ((uVar1 >> lVar2 & 1) != 0) {
      FUN_001108d0(param_1,lVar2);
    }
    lVar2 = (long)((int)lVar2 + 1);
    if (0xd < lVar2) break;
    uVar1 = *(ulong *)(iVar3 + 0x6f0);
  }
  FUN_00110860(param_1,param_2);
  *(undefined1 *)(iVar3 + 0x7e0) = 1;
  return;
}


// ==== FUN_001109c8 @ 001109c8 ====

long FUN_001109c8(float param_1,ushort *param_2)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = (long)(short)param_2[4];
  if (lVar3 < 0) {
    lVar3 = 0;
  }
  if (*(int *)param_2 + -2 < lVar3) {
    lVar3 = (long)((int)((*param_2 - 2) * 0x10000) >> 0x10);
  }
  pfVar2 = (float *)((int)lVar3 * 0x40 + *(int *)(param_2 + 0xc));
  fVar4 = *pfVar2;
  while( true ) {
    bVar1 = true;
    if ((param_1 < fVar4) && (0 < lVar3)) {
      pfVar2 = pfVar2 + -0x10;
      bVar1 = false;
      lVar3 = (long)(((int)lVar3 + -1) * 0x10000 >> 0x10);
    }
    if ((pfVar2[0x10] <= param_1) && (lVar3 < *(int *)param_2 + -2)) {
      pfVar2 = pfVar2 + 0x10;
      bVar1 = false;
      lVar3 = (long)(((int)lVar3 + 1) * 0x10000 >> 0x10);
    }
    if (bVar1) break;
    fVar4 = *pfVar2;
  }
  return lVar3;
}


// ==== FUN_00110a88 @ 00110a88 ====

void FUN_00110a88(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
  return;
}


// ==== FUN_00110ab8 @ 00110ab8 ====

undefined8 FUN_00110ab8(float param_1,undefined1 (*param_2) [16])

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
  
  auVar3 = _vsub(in_vf0,in_vf0);
  auVar6 = _qmtc2(0x40400000);
  auVar1 = _lqc2(*param_2);
  auVar9 = _qmtc2(0x40000000);
  auVar8 = _lqc2(param_2[1]);
  auVar4 = _vsub(auVar3,auVar1);
  auVar3 = _qmtc2(0x40a00000);
  auVar5 = _vmulbc(auVar8,auVar3);
  auVar7 = _lqc2(param_2[2]);
  auVar3 = _vmulbc(auVar8,auVar6);
  auVar2 = _qmtc2(0x40800000);
  auVar1 = _vmulbc(auVar1,auVar9);
  auVar3 = _vadd(auVar4,auVar3);
  auVar1 = _vsub(auVar1,auVar5);
  auVar2 = _vmulbc(auVar7,auVar2);
  auVar6 = _vmulbc(auVar7,auVar6);
  auVar5 = _lqc2(param_2[3]);
  auVar1 = _vadd(auVar1,auVar2);
  auVar3 = _vsub(auVar3,auVar6);
  auVar2 = _qmtc2(param_1 * param_1 * param_1);
  auVar1 = _vsub(auVar1,auVar5);
  auVar3 = _vadd(auVar3,auVar5);
  auVar3 = _vmulbc(auVar3,auVar2);
  auVar5 = _qmtc2(param_1 * param_1);
  auVar2 = _qmtc2(param_1);
  auVar1 = _vmulbc(auVar1,auVar5);
  auVar4 = _vadd(auVar4,auVar7);
  auVar3 = _vadd(auVar3,auVar1);
  auVar1 = _vmulbc(auVar4,auVar2);
  auVar3 = _vadd(auVar3,auVar1);
  auVar2 = _vmulbc(auVar8,auVar9);
  auVar1 = _qmtc2(0x3f000000);
  auVar3 = _vadd(auVar3,auVar2);
  auVar3 = _vmulbc(auVar3,auVar1);
  auVar3 = _qmfc2(auVar3._0_4_);
  return auVar3._0_8_;
}


// ==== FUN_00110b98 @ 00110b98 ====

void FUN_00110b98(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = _lqc2(*param_2);
  _lqc2(*param_1);
  auVar1 = _vaddbc(in_vf0,auVar2);
  _vmove(auVar1);
  auVar3 = _vaddbc(in_vf0,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  _vmove(auVar3);
  auVar1 = _vaddbc(in_vf0,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _vmove(auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}


// ==== FUN_00110bc8 @ 00110bc8 ====

void FUN_00110bc8(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  auVar3 = _lqc2(*param_2);
  auVar2 = _qmfc2(auVar3._0_4_);
  auVar1 = _sqc2(auVar3);
  uStack_c = auVar1._4_4_;
  auVar1 = _sqc2(auVar3);
  uStack_8 = auVar1._8_4_;
  auVar1 = _sqc2(auVar3);
  uStack_4 = auVar1._12_4_;
  *param_1 = auVar2._0_4_;
  param_1[1] = uStack_c;
  param_1[2] = uStack_8;
  param_1[3] = uStack_4;
  return;
}


// ==== FUN_00110c10 @ 00110c10 ====

void FUN_00110c10(undefined4 param_1,undefined4 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auVar3 = _lqc2(*param_3);
  auVar2 = _qmfc2(auVar3._0_4_);
  auVar1 = _sqc2(auVar3);
  uStack_c = auVar1._4_4_;
  auVar1 = _sqc2(auVar3);
  uStack_8 = auVar1._8_4_;
  *param_2 = auVar2._0_4_;
  param_2[1] = uStack_c;
  param_2[2] = uStack_8;
  param_2[3] = param_1;
  return;
}


// ==== FUN_00110c50 @ 00110c50 ====

void FUN_00110c50(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined4 *param_3)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _lqc2(*param_2);
  _lqc2(*param_1);
  auVar1 = _vaddbc(in_vf0,auVar2);
  _vmove(auVar1);
  auVar1 = _vaddbc(in_vf0,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _vaddbc(in_vf0,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  *param_3 = *(undefined4 *)(*param_2 + 0xc);
  return;
}


// ==== FUN_00110c90 @ 00110c90 ====
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f51c undefined4
// GLOBAL DAT_0040f4c0 undefined4

void FUN_00110c90(float param_1,undefined8 param_2,float *param_3,int param_4)

{
  bool bVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 extraout_v0_udw;
  float *pfVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 in_vf0 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_vf7 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 auStack_260 [8];
  float fStack_258;
  undefined4 uStack_254;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [8];
  float fStack_138;
  float fStack_134;
  int iStack_130;
  uint uStack_12c;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  float *pfStack_100;
  undefined1 *puStack_fc;
  undefined1 *puStack_f8;
  float *pfStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  
  piVar11 = (int *)param_2;
  iVar3 = piVar11[2];
  auStack_f0 = _sqc2(in_vf7);
  iStack_130 = param_4;
  iVar2 = FUN_001109c8();
  fVar17 = 1.0;
  piVar11[2] = iVar2;
  uStack_12c = (uint)(iVar3 != iVar2);
  pfVar6 = (float *)(iVar2 * 0x40 + piVar11[6]);
  fVar13 = pfVar6[0x10] - *pfVar6;
  auVar24 = _lqc2(auStack_f0);
  if (fVar13 == 0.0) {
    fVar13 = 10.0;
  }
  fVar13 = (param_1 - *pfVar6) / fVar13;
  fVar13 = (float)((int)fVar13 * (uint)(0.0 < fVar13));
  fVar13 = (float)((int)fVar13 * (uint)(fVar13 < 1.0) | (uint)(fVar13 >= 1.0) * 0x3f800000);
  if ((*(ulong *)(pfVar6 + 0xc) & 2) == 0) {
    puStack_fc = auStack_220;
    pfStack_f4 = param_3 + 8;
    puStack_f8 = auStack_210;
    iVar3 = 3;
    do {
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
    iVar3 = 3;
    do {
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
    iVar3 = piVar11[2];
    pfStack_100 = &fStack_230;
    if (iVar3 < 1) {
      iVar3 = piVar11[6] + iVar3 * 0x40;
      FUN_00110c10(*(undefined4 *)(iVar3 + 4),auStack_2a0,iVar3 + 0x10);
      FUN_00110b98(auStack_250,piVar11[6] + piVar11[2] * 0x40 + 0x20);
      iVar3 = piVar11[2];
    }
    else {
      iVar3 = iVar3 * 0x40 + piVar11[6];
      FUN_00110c10(*(undefined4 *)(iVar3 + -0x3c),auStack_2a0,iVar3 + -0x30);
      FUN_00110b98(auStack_250,piVar11[2] * 0x40 + piVar11[6] + -0x20);
      iVar3 = piVar11[2];
    }
    iVar3 = piVar11[6] + iVar3 * 0x40;
    FUN_00110c10(*(undefined4 *)(iVar3 + 4),auStack_290,iVar3 + 0x10);
    FUN_00110b98(auStack_240,piVar11[6] + piVar11[2] * 0x40 + 0x20);
    iVar3 = piVar11[2] * 0x40 + piVar11[6];
    FUN_00110c10(*(undefined4 *)(iVar3 + 0x44),auStack_280,iVar3 + 0x50);
    FUN_00110b98(pfStack_100,piVar11[2] * 0x40 + piVar11[6] + 0x60);
    iVar3 = piVar11[2];
    if (iVar3 < *piVar11 + -2) {
      iVar3 = iVar3 * 0x40 + piVar11[6];
      FUN_00110c10(*(undefined4 *)(iVar3 + 0x84),&fStack_270,iVar3 + 0x90);
      FUN_00110b98(puStack_fc,piVar11[2] * 0x40 + piVar11[6] + 0xa0);
    }
    else {
      iVar3 = iVar3 * 0x40 + piVar11[6];
      FUN_00110c10(*(undefined4 *)(iVar3 + 0x44),&fStack_270,iVar3 + 0x50);
      FUN_00110b98(puStack_fc,piVar11[2] * 0x40 + piVar11[6] + 0x60);
    }
    auStack_260 = (undefined1  [8])FUN_00110ab8(fVar13,auStack_2a0);
    fStack_258 = (float)(int)extraout_v0_udw;
    uStack_254 = (int)((ulong)extraout_v0_udw >> 0x20);
    uVar27 = FUN_00110ab8(fVar13,auStack_250);
    auVar24 = _qmtc2(uVar27);
    auVar19 = _vmul(auVar24,auVar24);
    _sqc2(auVar24);
    auVar18 = _vaddbc(auVar19,auVar19);
    auVar18 = _vaddbc(auVar18,auVar19);
    auVar18 = _vaddbc(auVar18,auVar19);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar18);
    uVar27 = _vwaitq();
    auVar24 = _vmulq(auVar24,uVar27);
    auStack_210 = _sqc2(auVar24);
    FUN_00110c50(pfStack_f4,auStack_260);
    FUN_00110bc8(param_3 + 4,puStack_f8);
  }
  else {
    auVar20 = _lqc2(*(undefined1 (*) [16])(pfVar6 + 0x14));
    auVar19 = _qmtc2(fVar13);
    auVar18 = _lqc2(*(undefined1 (*) [16])(pfVar6 + 4));
    _vaddabc(auVar18,in_vf0);
    _vmsubabc(auVar18,auVar19);
    auVar18 = _vmaddbc(auVar20,auVar19);
    fVar16 = 1.0 - fVar13;
    auVar18 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_3 + 8) = auVar18;
    iVar3 = piVar11[2] * 0x40 + piVar11[6];
    auVar25 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x60));
    auVar20 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x20));
    auVar19 = _vmul(auVar20,auVar25);
    auVar18 = _vaddbc(auVar19,auVar19);
    auVar18 = _vaddbc(auVar18,auVar19);
    auVar18 = _vaddbc(auVar18,auVar19);
    auVar18 = _qmfc2(auVar18._0_4_);
    fVar12 = auVar18._0_4_;
    bVar1 = fVar12 < 0.0;
    if (bVar1) {
      fVar12 = -fVar12;
    }
    fVar14 = fVar13;
    if (fVar12 < 0.999) {
      auStack_f0 = _sqc2(auVar24);
      auStack_e0 = _sqc2(auVar20);
      auStack_d0 = _sqc2(auVar25);
      fVar12 = (float)acosf();
      fVar14 = fVar12 * fVar12;
      fVar15 = 1.0 / (fVar12 + fVar14 * fVar12 *
                               (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * 1.589691e-10 +
                                                                       -2.505076e-08) +
                                                             2.7557314e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      fVar16 = fVar16 * fVar12;
      fVar14 = fVar16 * fVar16;
      fVar16 = (fVar16 + fVar14 * fVar16 *
                         (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * 1.589691e-10 +
                                                                 -2.505076e-08) + 2.7557314e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667)) * fVar15;
      fVar12 = fVar13 * fVar12;
      fVar14 = fVar12 * fVar12;
      auVar25 = _lqc2(auStack_d0);
      auVar20 = _lqc2(auStack_e0);
      _lqc2(auStack_f0);
      fVar14 = (fVar12 + fVar14 * fVar12 *
                         (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * 1.589691e-10 +
                                                                 -2.505076e-08) + 2.7557314e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667)) * fVar15;
    }
    if (bVar1) {
      fVar14 = -fVar14;
    }
    auVar19 = _qmtc2(fVar16);
    auVar21 = _qmtc2(fVar14);
    auVar24 = _vmulbc(auVar25,auVar21);
    auVar18 = _vmulbc(auVar20,auVar19);
    auVar24 = _vaddbc(auVar18,auVar24);
    auVar23 = _vmulbc(auVar20,auVar19);
    auVar22 = _vmulbc(auVar25,auVar21);
    _vaddbc(in_vf0,auVar24);
    auVar24 = _vmulbc(auVar20,auVar19);
    auVar18 = _vmulbc(auVar25,auVar21);
    auVar22 = _vaddbc(auVar23,auVar22);
    auVar19 = _vmulbc(auVar20,auVar19);
    auVar24 = _vaddbc(auVar24,auVar18);
    auVar18 = _vmulbc(auVar25,auVar21);
    _vaddbc(in_vf0,auVar22);
    auVar18 = _vaddbc(auVar19,auVar18);
    _vaddbc(in_vf0,auVar24);
    auVar24 = _vmove(auVar18);
    auVar24 = _sqc2(auVar24);
    *(undefined1 (*) [16])(param_3 + 4) = auVar24;
    iVar3 = piVar11[2] * 0x40 + piVar11[6];
    fVar12 = *(float *)(iVar3 + 4);
    *param_3 = fVar12 + (*(float *)(iVar3 + 0x44) - fVar12) * fVar13;
  }
  if (iStack_130 == 0) {
    FUN_0027f9c0(DAT_0040f4d0,1);
    return;
  }
  bVar1 = false;
  fVar13 = 1.0;
  if (uStack_12c != 0) {
    if ((*(ulong *)(piVar11[2] * 0x40 + piVar11[6] + 0x30) & 1) != 0) {
      FUN_00110698(0x40000000,DAT_0040f4bc,1,2);
    }
    fVar13 = 1.0;
    if ((*(ulong *)(piVar11[2] * 0x40 + piVar11[6] + 0x30) & 4) != 0) {
      fVar13 = 10.0;
    }
  }
  auVar24 = _lqc2(*(undefined1 (*) [16])(param_3 + 4));
  auVar18 = _qmtc2(0x3fb504f3);
  auVar19 = _vmulbc(auVar24,auVar18);
  _lqc2(auStack_180);
  auVar24 = _vmulbc(auVar19,auVar19);
  auVar20 = _vmulbc(auVar19,auVar19);
  auVar24 = _sqc2(auVar24);
  auVar25 = _vmulbc(auVar19,auVar19);
  auVar21 = _vmulbc(auVar19,auVar19);
  auVar22 = _vmulbc(auVar19,auVar19);
  auVar18 = _vmulbc(auVar19,auVar19);
  auVar23 = _vmulbc(auVar19,auVar19);
  auStack_140._4_4_ = auVar24._4_4_;
  uVar27 = auStack_140._4_4_;
  auVar18 = _qmfc2(auVar18._0_4_);
  auVar24 = _sqc2(auVar20);
  fVar12 = 1.0 - (float)auStack_140._4_4_;
  auVar20 = _vmulbc(auVar19,auVar19);
  fVar16 = 1.0 - auVar18._0_4_;
  auVar18 = _vmulbc(auVar19,auVar19);
  auStack_140._4_4_ = auVar24._4_4_;
  auVar18 = _qmfc2(auVar18._0_4_);
  auVar24 = _sqc2(auVar25);
  auVar19 = _qmfc2(auVar20._0_4_);
  iVar3 = 0;
  _lqc2(auStack_160);
  fStack_138 = auVar24._8_4_;
  auVar24 = _sqc2(auVar21);
  _lqc2(auStack_170);
  auVar20 = _qmtc2(fVar12 - fStack_138);
  fStack_134 = auVar24._12_4_;
  auVar24 = _sqc2(auVar22);
  auVar21 = _vaddbc(in_vf0,auVar20);
  fVar15 = (float)auStack_140._4_4_ - fStack_134;
  fVar14 = (float)auStack_140._4_4_ + fStack_134;
  fStack_134 = auVar24._12_4_;
  auVar24 = _sqc2(auVar23);
  _vmove(auVar21);
  auVar20 = _qmtc2(auVar18._0_4_ + fStack_134);
  fVar12 = auVar18._0_4_ - fStack_134;
  fStack_134 = auVar24._12_4_;
  auVar20 = _vaddbc(in_vf0,auVar20);
  auVar25 = _qmtc2(fVar16 - fStack_138);
  _vmove(auVar20);
  _sqc2(auVar21);
  auVar18 = _qmtc2(auVar19._0_4_ - fStack_134);
  auVar21 = _vaddbc(in_vf0,auVar18);
  auVar18 = _qmtc2(auVar19._0_4_ + fStack_134);
  _vmove(auVar21);
  auVar22 = _vaddbc(in_vf0,auVar18);
  auVar23 = _vaddbc(in_vf0,auVar25);
  auVar19 = _qmtc2(fVar12);
  auVar18 = _qmtc2(fVar15);
  _vmove(auVar22);
  auVar25 = _vaddbc(in_vf0,auVar19);
  auVar26 = _vaddbc(in_vf0,auVar18);
  auVar18 = _qmtc2(fVar14);
  _vmove(auVar23);
  auVar19 = _vaddbc(in_vf0,auVar18);
  _sqc2(auVar21);
  _sqc2(auVar20);
  auVar18 = _qmtc2(fVar16 - (float)uVar27);
  _vmove(auVar26);
  auVar18 = _vaddbc(in_vf0,auVar18);
  _sqc2(auVar22);
  _sqc2(auVar23);
  pauVar8 = (undefined1 (*) [16])(param_3 + 4);
  _sqc2(auVar26);
  uStack_190 = uStack_150;
  uStack_18c = uStack_14c;
  uStack_188 = uStack_148;
  uStack_184 = uStack_144;
  auStack_180 = _sqc2(auVar25);
  auStack_170 = _sqc2(auVar19);
  auStack_160 = _sqc2(auVar18);
  auStack_1c0 = _sqc2(auVar25);
  auStack_1b0 = _sqc2(auVar19);
  auStack_1a0 = _sqc2(auVar18);
  auStack_200 = _sqc2(auVar25);
  auStack_1f0 = _sqc2(auVar19);
  auStack_1e0 = _sqc2(auVar18);
  fStack_268 = param_3[10];
  fStack_264 = param_3[0xb];
  auStack_2a0 = _sqc2(auVar25);
  auStack_290 = _sqc2(auVar19);
  auStack_280 = _sqc2(auVar18);
  fStack_270 = (float)*(undefined8 *)(param_3 + 8);
  fStack_26c = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
  _auStack_260 = _sqc2(auVar25);
  auStack_250 = _sqc2(auVar19);
  auStack_240 = _sqc2(auVar18);
  fStack_230 = fStack_270;
  fStack_22c = fStack_26c;
  fStack_228 = fStack_268;
  fStack_224 = fStack_264;
  fStack_1d0 = fStack_270;
  fStack_1cc = fStack_26c;
  fStack_1c8 = fStack_268;
  fStack_1c4 = fStack_264;
  _auStack_140 = auVar24;
  if (0 < piVar11[1]) {
    do {
      iVar2 = piVar11[7];
      iVar4 = iVar3 * 0x18 + iVar2;
      fVar12 = *(float *)(iVar4 + 4);
      if (param_1 <= fVar12) goto switchD_0011155c_caseD_2;
      if (*(float *)(iVar4 + 0x10) <= param_1) {
        iVar2 = piVar11[1];
        goto LAB_001115ec;
      }
      fVar16 = *(float *)(iVar4 + 8);
      if ((fVar16 <= param_1) || (fVar16 == fVar12)) {
        iVar4 = iVar3 * 0x18 + iVar2;
        fVar12 = *(float *)(iVar4 + 0xc);
        if (fVar12 < param_1) {
          fVar12 = (1.0 - (param_1 - fVar12) / (*(float *)(iVar4 + 0x10) - fVar12)) *
                   *(float *)(iVar4 + 0x14);
        }
        else {
          fVar12 = *(float *)(iVar4 + 0x14);
        }
      }
      else {
        fVar12 = ((param_1 - fVar12) / (fVar16 - fVar12)) * *(float *)(iVar4 + 0x14);
      }
      switch(*(undefined4 *)(iVar3 * 0x18 + iVar2)) {
      case 0:
        fVar12 = *(float *)(iVar3 * 0x18 + iVar2 + 4);
        uVar10 = 0;
        goto LAB_001115b0;
      case 1:
        fVar12 = *(float *)(iVar3 * 0x18 + iVar2 + 4);
        uVar10 = 1;
LAB_001115b0:
        bVar1 = true;
        FUN_00112398(param_1,param_1 - fVar12,param_2,uVar10,auStack_2a0);
        iVar2 = piVar11[1];
        goto LAB_001115ec;
      case 3:
        fVar13 = fVar13 + fVar12 * 10.0;
        break;
      case 4:
        fVar17 = 1.0 - fVar12;
      }
switchD_0011155c_caseD_2:
      iVar2 = piVar11[1];
LAB_001115ec:
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (*(char *)(DAT_0040f4bc + 0x1678) != '\0') {
    lVar5 = FUN_001f2870(DAT_0040f51c,0);
    if (lVar5 != 1) {
      FUN_001f2838(DAT_0040f51c,0,1);
    }
    iVar3 = DAT_0040f4d0;
    auVar18 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x110));
    pauVar9 = (undefined1 (*) [16])(DAT_0040f4d0 + 0x100);
    auVar24 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x100));
    auVar19 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x120));
    auVar24 = _vaddbc(auVar24,auVar18);
    auVar24 = _vaddbc(auVar24,auVar19);
    auVar24 = _qmfc2(auVar24._0_4_);
    if (0.0 < auVar24._0_4_) {
      auVar18 = _vsubbc(auVar18,auVar19);
      _lqc2(*(undefined1 (*) [16])(param_3 + 4));
      auVar18 = _vaddbc(in_vf0,auVar18);
      auVar18 = _sqc2(auVar18);
      *(undefined1 (*) [16])(param_3 + 4) = auVar18;
      fVar12 = SQRT(auVar24._0_4_ + 1.0);
      auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x100));
      auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x120));
      auVar24 = _vsubbc(auVar24,auVar18);
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar19 = _qmtc2(0.5 / fVar12);
      auVar24 = _sqc2(auVar24);
      *(undefined1 (*) [16])(param_3 + 4) = auVar24;
      auVar20 = _qmtc2(fVar12 * 0.5);
      auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x110));
      auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x100));
      auVar24 = _vsubbc(auVar24,auVar18);
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar24 = _vmove(auVar24);
      auVar24 = _vmulbc(auVar24,auVar19);
      auVar24 = _sqc2(auVar24);
      *(undefined1 (*) [16])(param_3 + 4) = auVar24;
      auVar24 = _vmulbc(in_vf0,auVar20);
      auVar24 = _sqc2(auVar24);
      *(undefined1 (*) [16])(param_3 + 4) = auVar24;
LAB_001119b0:
      fVar12 = *(float *)(iVar3 + 0x130);
      fVar16 = *(float *)(iVar3 + 0x134);
      fVar14 = *(float *)(iVar3 + 0x138);
      fVar15 = *(float *)(iVar3 + 0x13c);
    }
    else {
      auVar24 = _sqc2(auVar18);
      auVar18 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x100));
      auVar18 = _qmfc2(auVar18._0_4_);
      auStack_260._4_4_ = auVar24._4_4_;
      if ((float)auStack_260._4_4_ <= auVar18._0_4_) {
        _auStack_260 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0x120);
        auVar24 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x100));
        auVar24 = _qmfc2(auVar24._0_4_);
        uVar7 = (uint)(auVar24._0_4_ <
                      SUB124(*(undefined1 (*) [12])*(undefined1 (*) [16])(DAT_0040f4d0 + 0x120),8))
                << 1;
      }
      else {
        _auStack_260 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0x110);
        uVar7 = 1;
        if (SUB124(*(undefined1 (*) [12])*(undefined1 (*) [16])(DAT_0040f4d0 + 0x110),4) <
            SUB124(*(undefined1 (*) [12])(DAT_0040f4d0 + 0x120),8)) {
          uVar7 = 2;
        }
      }
      if (uVar7 == 1) {
        auVar18 = _lqc2(*pauVar9);
        auVar20 = _qmtc2(0x3f800000);
        auVar19 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x120));
        auVar24 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x110));
        auVar18 = _vaddbc(auVar19,auVar18);
        auVar24 = _vsubbc(auVar24,auVar18);
        auVar24 = _vaddbc(auVar24,auVar20);
        _auStack_260 = _sqc2(auVar24);
        _lqc2(*pauVar8);
        auVar24 = _qmtc2(SQRT((float)auStack_260._4_4_) * 0.5);
        auVar19 = _qmtc2(0.5 / SQRT((float)auStack_260._4_4_));
        auVar24 = _vaddbc(in_vf0,auVar24);
        auVar24 = _sqc2(auVar24);
        *pauVar8 = auVar24;
        auVar18 = _lqc2(*pauVar9);
        auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x120));
        auVar24 = _vsubbc(auVar24,auVar18);
        auVar24 = _vmulbc(auVar24,auVar19);
        auVar24 = _vmulbc(in_vf0,auVar24);
        auVar24 = _sqc2(auVar24);
        *pauVar8 = auVar24;
        auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x120));
        auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x110));
        auVar24 = _vaddbc(auVar24,auVar18);
        auVar24 = _vmulbc(auVar24,auVar19);
        auVar24 = _vaddbc(in_vf0,auVar24);
        auVar24 = _sqc2(auVar24);
        *pauVar8 = auVar24;
        auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x110));
        auVar18 = _lqc2(*pauVar9);
        auVar24 = _vaddbc(auVar24,auVar18);
        auVar24 = _vmulbc(auVar24,auVar19);
        auVar24 = _vaddbc(in_vf0,auVar24);
        auVar24 = _sqc2(auVar24);
        *pauVar8 = auVar24;
        goto LAB_001119b0;
      }
      if (uVar7 < 2) {
        if (uVar7 == 0) {
          auVar18 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x120));
          auVar20 = _qmtc2(0x3f800000);
          auVar19 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x110));
          auVar24 = _lqc2(*pauVar9);
          auVar18 = _vaddbc(auVar19,auVar18);
          auVar24 = _vsubbc(auVar24,auVar18);
          auVar24 = _vaddbc(auVar24,auVar20);
          _lqc2(*pauVar8);
          auVar24 = _qmfc2(auVar24._0_4_);
          auVar18 = _qmtc2(SQRT(auVar24._0_4_) * 0.5);
          auVar19 = _qmtc2(0.5 / SQRT(auVar24._0_4_));
          auVar24 = _vaddbc(in_vf0,auVar18);
          auVar24 = _sqc2(auVar24);
          *pauVar8 = auVar24;
          auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x120));
          auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x110));
          auVar24 = _vsubbc(auVar24,auVar18);
          auVar24 = _vmulbc(auVar24,auVar19);
          auVar24 = _vmulbc(in_vf0,auVar24);
          auVar24 = _sqc2(auVar24);
          *pauVar8 = auVar24;
          auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x110));
          auVar24 = _lqc2(*pauVar9);
          auVar24 = _vaddbc(auVar24,auVar18);
          auVar24 = _vmulbc(auVar24,auVar19);
          auVar24 = _vaddbc(in_vf0,auVar24);
          auVar24 = _sqc2(auVar24);
          *pauVar8 = auVar24;
          auVar24 = _lqc2(*pauVar9);
          auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x120));
          auVar24 = _vaddbc(auVar24,auVar18);
          auVar24 = _vmulbc(auVar24,auVar19);
          auVar24 = _vaddbc(in_vf0,auVar24);
          auVar24 = _sqc2(auVar24);
          *pauVar8 = auVar24;
          goto LAB_001119b0;
        }
        fVar12 = *(float *)(DAT_0040f4d0 + 0x130);
        fVar16 = *(float *)(DAT_0040f4d0 + 0x134);
        fVar14 = *(float *)(DAT_0040f4d0 + 0x138);
        fVar15 = *(float *)(DAT_0040f4d0 + 0x13c);
      }
      else {
        if (uVar7 == 2) {
          auVar18 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x110));
          auVar20 = _qmtc2(0x3f800000);
          auVar19 = _lqc2(*pauVar9);
          auVar24 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x120));
          auVar18 = _vaddbc(auVar19,auVar18);
          auVar24 = _vsubbc(auVar24,auVar18);
          auVar24 = _vaddbc(auVar24,auVar20);
          _auStack_260 = _sqc2(auVar24);
          _lqc2(*pauVar8);
          auVar24 = _qmtc2(SQRT(fStack_258) * 0.5);
          auVar19 = _qmtc2(0.5 / SQRT(fStack_258));
          auVar24 = _vaddbc(in_vf0,auVar24);
          auVar24 = _sqc2(auVar24);
          *pauVar8 = auVar24;
          auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x110));
          auVar24 = _lqc2(*pauVar9);
          auVar24 = _vsubbc(auVar24,auVar18);
          auVar24 = _vmulbc(auVar24,auVar19);
          auVar24 = _vmulbc(in_vf0,auVar24);
          auVar24 = _sqc2(auVar24);
          *pauVar8 = auVar24;
          auVar18 = _lqc2(*pauVar9);
          auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x120));
          auVar24 = _vaddbc(auVar24,auVar18);
          auVar24 = _vmulbc(auVar24,auVar19);
          auVar24 = _vaddbc(in_vf0,auVar24);
          auVar24 = _sqc2(auVar24);
          *pauVar8 = auVar24;
          auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x120));
          auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x110));
          auVar24 = _vaddbc(auVar24,auVar18);
          auVar24 = _vmulbc(auVar24,auVar19);
          auVar24 = _vaddbc(in_vf0,auVar24);
          auVar24 = _sqc2(auVar24);
          *pauVar8 = auVar24;
          goto LAB_001119b0;
        }
        fVar12 = *(float *)(DAT_0040f4d0 + 0x130);
        fVar16 = *(float *)(DAT_0040f4d0 + 0x134);
        fVar14 = *(float *)(DAT_0040f4d0 + 0x138);
        fVar15 = *(float *)(DAT_0040f4d0 + 0x13c);
      }
    }
    param_3[8] = fVar12;
    param_3[9] = fVar16;
    param_3[10] = fVar14;
    param_3[0xb] = fVar15;
    *param_3 = 70.0;
    if (*(char *)(DAT_0040f4d0 + 0x5aac) == '\0') {
      fVar12 = *(float *)(*piVar11 * 0x40 + piVar11[6] + -0x40) - param_1;
      if (param_1 <= 0.2) {
        FUN_001f2d08(DAT_0040f51c,0,1);
      }
      if ((0.5 < param_1) && (param_1 < 0.6)) {
        FUN_001f2d08(DAT_0040f51c,0,2);
      }
      if ((3.5 < param_1) && (param_1 < 3.6)) {
        FUN_001f2d08(DAT_0040f51c,0,4);
      }
      if ((5.5 < param_1) && (param_1 < 5.6)) {
        FUN_001f2d08(DAT_0040f51c,0,5);
      }
      if ((fVar12 < 3.0) && (*(int *)(DAT_0040f4d8 + 0x83cd4) != 1)) {
        FUN_001c2798(0,0x40400000,0x3f800000);
      }
      if ((0.5 < fVar12) && (fVar12 < 0.6)) {
        FUN_001f2d08(DAT_0040f51c,0,8);
      }
    }
    else {
      fVar12 = *(float *)(*piVar11 * 0x40 + piVar11[6] + -0x40) - param_1;
      if (param_1 <= 0.2) {
        FUN_001f2d08(DAT_0040f51c,0,1);
      }
      if ((0.5 < param_1) && (param_1 < 0.6)) {
        FUN_001f2d08(DAT_0040f51c,0,5);
      }
      if ((fVar12 < 0.75) && (*(int *)(DAT_0040f4d8 + 0x83cd4) != 1)) {
        FUN_001c2798(0,0x3fe00000,0x3f000000);
        FUN_001f2d08(DAT_0040f51c,0,8);
      }
    }
  }
  auVar24 = _pextlw((long)(int)fVar17,(long)(int)fVar17);
  _auStack_260 = _pextlw((long)(int)fVar17,auVar24._0_8_);
  auVar24 = _por(in_zero_qw,_auStack_260);
  FUN_001aebb0(DAT_0040f4c0,auVar24._0_8_);
  FUN_0027f9c0(DAT_0040f4d0,(int)fVar13);
  auVar24 = _lqc2(auStack_2a0);
  if (!bVar1) {
    return;
  }
  auVar22 = _vaddbc(in_vf0,in_vf0);
  auVar20 = _lqc2(auStack_290);
  auVar18 = _vmul(auVar24,auVar24);
  _vaddabc(auVar18,auVar18);
  auVar18 = _vmaddbc(auVar22,auVar18);
  auVar25 = _lqc2(auStack_280);
  auVar23 = _vmove(auVar24);
  auVar19 = _vmul(auVar20,auVar20);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar18);
  auVar24 = _qmfc2(auVar18._0_4_);
  auVar21 = _qmtc2(SQRT(auVar24._0_4_));
  uVar27 = _vwaitq();
  auVar26 = _vmulq(auVar23,uVar27);
  auVar20 = _vmove(auVar20);
  _vaddabc(auVar19,auVar19);
  auVar24 = _vmaddbc(auVar22,auVar19);
  auVar18 = _vmul(auVar25,auVar25);
  _lqc2(auStack_120);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar24);
  auVar24 = _qmfc2(auVar24._0_4_);
  auVar19 = _qmtc2(SQRT(auVar24._0_4_));
  uVar27 = _vwaitq();
  auVar23 = _vmulq(auVar20,uVar27);
  _vaddbc(in_vf0,auVar21);
  _vaddabc(auVar18,auVar18);
  auVar24 = _vmaddbc(auVar22,auVar18);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar24);
  auVar24 = _qmfc2(auVar24._0_4_);
  auVar24 = _qmtc2(SQRT(auVar24._0_4_));
  uVar27 = _vwaitq();
  auVar20 = _vmulq(auVar25,uVar27);
  _vaddbc(in_vf0,auVar19);
  auVar18 = _vaddbc(in_vf0,auVar24);
  auVar24 = _qmfc2(auVar18._0_4_);
  auStack_2a0 = _sqc2(auVar26);
  auStack_290 = _sqc2(auVar23);
  auStack_280 = _sqc2(auVar20);
  if (auVar24._0_4_ <= 0.0) {
LAB_00111f80:
    _vopmula(auVar23,auVar20);
    auVar18 = _vopmsub(auVar20,auVar23);
    auVar24 = _vmul(auVar18,auVar18);
    _sqc2(auVar18);
    _vaddabc(auVar24,auVar24);
    auVar24 = _vmaddbc(auVar22,auVar24);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar24);
    uVar27 = _vwaitq();
    auVar24 = _vmulq(auVar18,uVar27);
    _vopmula(auVar24,auVar23);
    auVar18 = _vopmsub(auVar23,auVar24);
    auStack_2a0 = _sqc2(auVar24);
    auVar24 = _vmul(auVar18,auVar18);
    _sqc2(auVar18);
    _vaddabc(auVar24,auVar24);
    auVar24 = _vmaddbc(auVar22,auVar24);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar24);
    uVar27 = _vwaitq();
    auVar24 = _vmulq(auVar18,uVar27);
    auStack_280 = _sqc2(auVar24);
    goto LAB_00111fe8;
  }
  auVar24 = _sqc2(auVar18);
  auStack_260._4_4_ = auVar24._4_4_;
  if (0.0 < (float)auStack_260._4_4_) {
    auVar24 = _sqc2(auVar18);
    fStack_258 = auVar24._8_4_;
    if (0.0 < fStack_258) {
      auVar19 = _vaddbc(in_vf0,in_vf0);
      auVar24 = _vmul(auVar23,auVar20);
      _vaddabc(auVar24,auVar24);
      auVar24 = _vmaddbc(auVar19,auVar24);
      _lqc2(auStack_110);
      _vaddbc(in_vf0,auVar24);
      auVar24 = _vmul(auVar20,auVar26);
      _vaddabc(auVar24,auVar24);
      auVar18 = _vmaddbc(auVar19,auVar24);
      auVar24 = _vmul(auVar26,auVar23);
      _vaddbc(in_vf0,auVar18);
      _vaddabc(auVar24,auVar24);
      auVar24 = _vmaddbc(auVar19,auVar24);
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar25 = _vabs(auVar24);
      auVar19 = _vmove(auVar25);
      auVar18 = _qmfc2(auVar19._0_4_);
      auVar24 = _sqc2(auVar19);
      auStack_260._4_4_ = auVar24._4_4_;
      if ((float)auStack_260._4_4_ <= auVar18._0_4_) {
        auVar24 = _sqc2(auVar25);
        auStack_260._4_4_ = auVar24._4_4_;
        auVar24 = _sqc2(auVar25);
        fStack_258 = auVar24._8_4_;
        if ((float)auStack_260._4_4_ < fStack_258) goto LAB_00111f14;
      }
      else {
        auVar24 = _sqc2(auVar19);
        fStack_258 = auVar24._8_4_;
        if (auVar18._0_4_ < fStack_258) goto LAB_00111f80;
      }
    }
    _vopmula(auVar26,auVar23);
    auVar18 = _vopmsub(auVar23,auVar26);
    auVar24 = _vmul(auVar18,auVar18);
    _sqc2(auVar18);
    _vaddabc(auVar24,auVar24);
    auVar24 = _vmaddbc(auVar22,auVar24);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar24);
    uVar27 = _vwaitq();
    auVar24 = _vmulq(auVar18,uVar27);
    _vopmula(auVar24,auVar26);
    auVar18 = _vopmsub(auVar26,auVar24);
    auStack_280 = _sqc2(auVar24);
    auVar24 = _vmul(auVar18,auVar18);
    _sqc2(auVar18);
    _vaddabc(auVar24,auVar24);
    auVar24 = _vmaddbc(auVar22,auVar24);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar24);
    uVar27 = _vwaitq();
    auVar24 = _vmulq(auVar18,uVar27);
    auStack_290 = _sqc2(auVar24);
  }
  else {
LAB_00111f14:
    _vopmula(auVar20,auVar26);
    auVar18 = _vopmsub(auVar26,auVar20);
    auVar24 = _vmul(auVar18,auVar18);
    _sqc2(auVar18);
    _vaddabc(auVar24,auVar24);
    auVar24 = _vmaddbc(auVar22,auVar24);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar24);
    uVar27 = _vwaitq();
    auVar24 = _vmulq(auVar18,uVar27);
    _vopmula(auVar24,auVar20);
    auVar18 = _vopmsub(auVar20,auVar24);
    auStack_290 = _sqc2(auVar24);
    auVar24 = _vmul(auVar18,auVar18);
    _sqc2(auVar18);
    _vaddabc(auVar24,auVar24);
    auVar24 = _vmaddbc(auVar22,auVar24);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar24);
    uVar27 = _vwaitq();
    auVar24 = _vmulq(auVar18,uVar27);
    auStack_2a0 = _sqc2(auVar24);
  }
LAB_00111fe8:
  auVar18 = _lqc2(auStack_290);
  auVar20 = _lqc2(auStack_2a0);
  auVar24 = _vaddbc(auVar20,auVar18);
  auVar19 = _lqc2(auStack_280);
  auVar24 = _vaddbc(auVar24,auVar19);
  auVar24 = _qmfc2(auVar24._0_4_);
  auVar25 = _vmove(auVar18);
  if (0.0 < auVar24._0_4_) {
    _lqc2(*(undefined1 (*) [16])(param_3 + 4));
    auVar18 = _vsubbc(auVar25,auVar19);
    auVar18 = _vaddbc(in_vf0,auVar18);
    auVar19 = _vsubbc(auVar19,auVar20);
    _vmove(auVar18);
    auVar21 = _vaddbc(in_vf0,auVar19);
    fVar13 = SQRT(auVar24._0_4_ + 1.0);
    auVar19 = _vsubbc(auVar20,auVar25);
    _vmove(auVar21);
    auVar24 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_3 + 4) = auVar24;
    auVar19 = _vaddbc(in_vf0,auVar19);
    auVar24 = _sqc2(auVar21);
    *(undefined1 (*) [16])(param_3 + 4) = auVar24;
    auVar18 = _qmtc2(0.5 / fVar13);
    auVar24 = _vmove(auVar19);
    auVar18 = _vmulbc(auVar24,auVar18);
    auVar24 = _sqc2(auVar19);
    *(undefined1 (*) [16])(param_3 + 4) = auVar24;
    auVar24 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_3 + 4) = auVar24;
    auVar24 = _qmtc2(fVar13 * 0.5);
    auVar24 = _vmulbc(in_vf0,auVar24);
    auVar24 = _sqc2(auVar24);
    *(undefined1 (*) [16])(param_3 + 4) = auVar24;
  }
  else {
    auVar24 = _sqc2(auVar18);
    auVar20 = _qmfc2(auVar20._0_4_);
    auStack_260._4_4_ = auVar24._4_4_;
    if ((float)auStack_260._4_4_ <= auVar20._0_4_) {
      auVar24 = _sqc2(auVar19);
      fStack_258 = auVar24._8_4_;
      uVar7 = (uint)(auVar20._0_4_ < fStack_258) << 1;
    }
    else {
      auVar24 = _sqc2(auVar19);
      fStack_258 = auVar24._8_4_;
      auVar24 = _sqc2(auVar18);
      auStack_260._4_4_ = auVar24._4_4_;
      uVar7 = 1;
      if ((float)auStack_260._4_4_ < fStack_258) {
        uVar7 = 2;
      }
    }
    if (uVar7 == 1) {
      auVar18 = _lqc2(auStack_2a0);
      auVar20 = _qmtc2(0x3f800000);
      auVar19 = _lqc2(auStack_280);
      auVar24 = _lqc2(auStack_290);
      auVar18 = _vaddbc(auVar19,auVar18);
      auVar24 = _vsubbc(auVar24,auVar18);
      auVar24 = _vaddbc(auVar24,auVar20);
      auVar24 = _sqc2(auVar24);
      auStack_260._4_4_ = auVar24._4_4_;
      _lqc2(*pauVar8);
      auVar24 = _qmtc2(SQRT((float)auStack_260._4_4_) * 0.5);
      auVar19 = _qmtc2(0.5 / SQRT((float)auStack_260._4_4_));
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar24 = _sqc2(auVar24);
      *pauVar8 = auVar24;
      auVar18 = _lqc2(auStack_2a0);
      auVar24 = _lqc2(auStack_280);
      auVar24 = _vsubbc(auVar24,auVar18);
      auVar24 = _vmulbc(auVar24,auVar19);
      auVar24 = _vmulbc(in_vf0,auVar24);
      auVar24 = _sqc2(auVar24);
      *pauVar8 = auVar24;
      auVar18 = _lqc2(auStack_280);
      auVar24 = _lqc2(auStack_290);
      auVar24 = _vaddbc(auVar24,auVar18);
      auVar24 = _vmulbc(auVar24,auVar19);
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar24 = _sqc2(auVar24);
      *pauVar8 = auVar24;
      auVar24 = _lqc2(auStack_290);
      auVar18 = _lqc2(auStack_2a0);
      auVar24 = _vaddbc(auVar24,auVar18);
      auVar24 = _vmulbc(auVar24,auVar19);
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar24 = _sqc2(auVar24);
      *pauVar8 = auVar24;
    }
    else if (uVar7 < 2) {
      if (uVar7 == 0) {
        auVar18 = _lqc2(auStack_280);
        auVar20 = _qmtc2(0x3f800000);
        auVar19 = _lqc2(auStack_290);
        auVar24 = _lqc2(auStack_2a0);
        auVar18 = _vaddbc(auVar19,auVar18);
        auVar24 = _vsubbc(auVar24,auVar18);
        auVar24 = _vaddbc(auVar24,auVar20);
        _lqc2(*pauVar8);
        auVar24 = _qmfc2(auVar24._0_4_);
        auVar18 = _qmtc2(SQRT(auVar24._0_4_) * 0.5);
        auVar19 = _qmtc2(0.5 / SQRT(auVar24._0_4_));
        auVar24 = _vaddbc(in_vf0,auVar18);
        auVar24 = _sqc2(auVar24);
        *pauVar8 = auVar24;
        auVar18 = _lqc2(auStack_280);
        auVar24 = _lqc2(auStack_290);
        auVar24 = _vsubbc(auVar24,auVar18);
        auVar24 = _vmulbc(auVar24,auVar19);
        auVar24 = _vmulbc(in_vf0,auVar24);
        auVar24 = _sqc2(auVar24);
        *pauVar8 = auVar24;
        auVar18 = _lqc2(auStack_290);
        auVar24 = _lqc2(auStack_2a0);
        auVar24 = _vaddbc(auVar24,auVar18);
        auVar24 = _vmulbc(auVar24,auVar19);
        auVar24 = _vaddbc(in_vf0,auVar24);
        auVar24 = _sqc2(auVar24);
        *pauVar8 = auVar24;
        auVar24 = _lqc2(auStack_2a0);
        auVar18 = _lqc2(auStack_280);
        auVar24 = _vaddbc(auVar24,auVar18);
        auVar24 = _vmulbc(auVar24,auVar19);
        auVar24 = _vaddbc(in_vf0,auVar24);
        auVar24 = _sqc2(auVar24);
        *pauVar8 = auVar24;
      }
    }
    else if (uVar7 == 2) {
      auVar18 = _lqc2(auStack_290);
      auVar20 = _qmtc2(0x3f800000);
      auVar19 = _lqc2(auStack_2a0);
      auVar24 = _lqc2(auStack_280);
      auVar18 = _vaddbc(auVar19,auVar18);
      auVar24 = _vsubbc(auVar24,auVar18);
      auVar24 = _vaddbc(auVar24,auVar20);
      auVar24 = _sqc2(auVar24);
      fStack_258 = auVar24._8_4_;
      _lqc2(*pauVar8);
      auVar24 = _qmtc2(SQRT(fStack_258) * 0.5);
      auVar19 = _qmtc2(0.5 / SQRT(fStack_258));
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar24 = _sqc2(auVar24);
      *pauVar8 = auVar24;
      auVar18 = _lqc2(auStack_290);
      auVar24 = _lqc2(auStack_2a0);
      auVar24 = _vsubbc(auVar24,auVar18);
      auVar24 = _vmulbc(auVar24,auVar19);
      auVar24 = _vmulbc(in_vf0,auVar24);
      auVar24 = _sqc2(auVar24);
      *pauVar8 = auVar24;
      auVar18 = _lqc2(auStack_2a0);
      auVar24 = _lqc2(auStack_280);
      auVar24 = _vaddbc(auVar24,auVar18);
      auVar24 = _vmulbc(auVar24,auVar19);
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar24 = _sqc2(auVar24);
      *pauVar8 = auVar24;
      auVar24 = _lqc2(auStack_280);
      auVar18 = _lqc2(auStack_290);
      auVar24 = _vaddbc(auVar24,auVar18);
      auVar24 = _vmulbc(auVar24,auVar19);
      auVar24 = _vaddbc(in_vf0,auVar24);
      auVar24 = _sqc2(auVar24);
      *pauVar8 = auVar24;
    }
  }
  param_3[8] = fStack_270;
  param_3[9] = fStack_26c;
  param_3[10] = fStack_268;
  param_3[0xb] = fStack_264;
  return;
}


// ==== FUN_00112398 @ 00112398 ====

float FUN_00112398(undefined4 param_1,float param_2,float param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_vf12 [16];
  undefined1 auVar18 [16];
  undefined1 in_vf14 [16];
  undefined1 auVar19 [16];
  undefined4 in_vuI;
  undefined4 uVar20;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 *apuStack_160 [4];
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
  
  apuStack_160[1] = auStack_1a0;
  param_5 = param_5 * 0x24;
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vmaxbc(in_vf0,in_vf0);
  puVar2 = auStack_190;
  apuStack_160[2] = auStack_180;
  auStack_c0 = _sqc2(auVar9);
  auStack_b0 = _sqc2(auVar10);
  auVar9 = _vadd(in_vf0,in_vf0);
  iVar5 = param_5 + 0x3bc600;
  uVar3 = param_6;
  iVar6 = 0;
  apuStack_160[0] = puVar2;
  do {
    pfVar1 = (float *)(iVar5 + iVar6 * 4);
    iVar7 = iVar6 + 1;
    auStack_a0 = _sqc2(in_vf12);
    auStack_90 = _sqc2(auVar9);
    auStack_80 = _sqc2(in_vf14);
    fVar8 = (float)FUN_0029dc18(pfVar1[3] + *pfVar1 * param_2,puVar2,param_5,uVar3,param_7,param_8);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar12 = _vsub(in_vf0,in_vf0);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    _sqc2(auVar10);
    _sqc2(auVar11);
    _sqc2(auVar12);
    _sqc2(auVar9);
    auVar11 = _lqc2(auStack_c0);
    param_8 = 0x3f000000;
    fVar8 = fVar8 * *(float *)(iVar5 + iVar6 * 4 + 0x18) * param_3 * 0.017453292;
    uVar3 = 0x4b400000;
    auVar12 = _lqc2(*(undefined1 (*) [16])apuStack_160[iVar6]);
    auVar10 = _qmtc2(fVar8);
    auVar9 = _vmul(auVar12,auVar12);
    auVar10 = _vaddbc(in_vf0,auVar10);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar11,auVar9);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar10 = _vsubi(auVar10,in_vuI);
    auVar11 = _lqc2(auStack_b0);
    auVar10 = _vabs(auVar10);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar10,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar11,in_vuI);
    _vmaddai(auVar11,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar10,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar10 = _vmsubi(auVar11,in_vuI);
    auVar19 = _lqc2(auStack_80);
    param_7 = 0x3e800000;
    auVar10 = _vabs(auVar10);
    _ctc2(0x3e800000);
    _vnop();
    auVar10 = _vsubi(auVar10,in_vuI);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    uVar20 = _vwaitq();
    auVar12 = _vmulq(auVar12,uVar20);
    _ctc2(0xc2992661);
    _vnop();
    auVar11 = _vmuli(auVar10,in_vuI);
    _vmove(auVar19);
    auVar9 = _qmtc2(0x3f800000);
    auVar15 = _vmul(auVar10,auVar10);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar18 = _lqc2(auStack_a0);
    in_vf14 = _vmove(auVar9);
    auVar17 = _vmul(auVar15,auVar15);
    puVar2 = (undefined1 *)0xc2255de0;
    param_5 = 0x42a33457;
    auVar9 = _vmul(auVar17,auVar17);
    auVar13 = _vmul(auVar11,auVar15);
    _ctc2(0xc2255de0);
    _vnop();
    auVar16 = _vmuli(auVar10,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar14 = _vmuli(auVar10,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar19 = _vmuli(auVar10,in_vuI);
    auVar11 = _vmulbc(auVar12,auVar12);
    _vmula(auVar16,auVar15);
    _vmadda(auVar13,auVar17);
    _ctc2(0x40c90fda);
    _vmadda(auVar14,auVar17);
    _vmaddai(auVar10,in_vuI);
    auVar10 = _vmadd(auVar19,auVar9);
    _vmove(auVar18);
    _vaddbc(in_vf0,auVar11);
    auVar9 = _vmulbc(auVar12,auVar12);
    _vaddbc(in_vf0,auVar9);
    auVar10 = _vsubbc(in_vf14,auVar10);
    auVar9 = _vmulbc(auVar12,auVar12);
    auVar11 = _vmul(auVar12,auVar12);
    auVar10 = _vaddbc(in_vf0,auVar10);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar11 = _vsub(in_vf0,auVar11);
    auVar9 = _vmulbc(auVar9,auVar10);
    auVar11 = _vaddbc(auVar11,in_vf14);
    auVar13 = _vmulbc(auVar12,auVar10);
    in_vf12 = _vmove(auVar9);
    auVar19 = _vmulbc(auVar11,auVar10);
    _lqc2(auStack_110);
    auVar10 = _vsubbc(in_vf14,auVar19);
    _lqc2(auStack_100);
    auVar9 = _vsubbc(in_vf12,auVar13);
    auVar14 = _vaddbc(in_vf0,auVar10);
    auVar16 = _vaddbc(in_vf0,auVar9);
    auVar9 = _vaddbc(in_vf12,auVar13);
    auVar10 = _vsubbc(in_vf14,auVar19);
    _vmove(auVar14);
    auVar12 = _vaddbc(in_vf12,auVar13);
    _vmove(auVar16);
    auVar17 = _vaddbc(in_vf0,auVar9);
    auVar18 = _vaddbc(in_vf0,auVar10);
    _lqc2(auStack_f0);
    auVar9 = _vsubbc(in_vf12,auVar13);
    _vmove(auVar17);
    auVar11 = _vaddbc(in_vf0,auVar9);
    auVar15 = _vaddbc(in_vf0,auVar12);
    auVar10 = _vsubbc(in_vf12,auVar13);
    _sqc2(auVar14);
    auVar9 = _vaddbc(in_vf12,auVar13);
    _vmove(auVar15);
    _vmove(auVar18);
    auVar10 = _vaddbc(in_vf0,auVar10);
    _sqc2(auVar16);
    auVar12 = _vaddbc(in_vf0,auVar9);
    _sqc2(auVar17);
    auVar19 = _vsubbc(in_vf14,auVar19);
    _sqc2(auVar15);
    _vmove(auVar10);
    auVar9 = _lqc2(auStack_90);
    auVar13 = _vaddbc(in_vf0,auVar19);
    pauVar4 = (undefined1 (*) [16])param_6;
    auVar15 = _lqc2(*pauVar4);
    auVar14 = _lqc2(pauVar4[1]);
    auVar19 = _lqc2(pauVar4[2]);
    _sqc2(auVar10);
    _vmulabc(auVar15,auVar11);
    _vmaddabc(auVar14,auVar11);
    auVar16 = _vmaddbc(auVar19,auVar11);
    _vmulabc(auVar15,auVar12);
    _vmaddabc(auVar14,auVar12);
    auVar17 = _vmaddbc(auVar19,auVar12);
    _sqc2(auVar18);
    _sqc2(auVar11);
    _sqc2(auVar12);
    _sqc2(auVar11);
    _sqc2(auVar12);
    _sqc2(auVar13);
    auStack_d0 = _sqc2(auVar9);
    _sqc2(auVar9);
    _sqc2(auVar13);
    _sqc2(auVar9);
    auStack_1a0 = _sqc2(auVar11);
    auStack_190 = _sqc2(auVar12);
    auStack_180 = _sqc2(auVar13);
    auStack_170 = _sqc2(auVar9);
    auStack_110 = _sqc2(auVar16);
    auStack_100 = _sqc2(auVar17);
    auVar10 = _sqc2(auVar16);
    *pauVar4 = auVar10;
    auVar10 = _lqc2(pauVar4[3]);
    _vmulabc(auVar15,auVar13);
    _vmaddabc(auVar14,auVar13);
    auVar11 = _vmaddbc(auVar19,auVar13);
    _vmulabc(auVar15,auVar9);
    _vmaddabc(auVar14,auVar9);
    _vmaddabc(auVar19,auVar9);
    auVar12 = _vmaddbc(auVar10,in_vf0);
    auVar10 = _sqc2(auVar17);
    pauVar4[1] = auVar10;
    auVar10 = _sqc2(auVar11);
    pauVar4[2] = auVar10;
    auVar10 = _sqc2(auVar12);
    pauVar4[3] = auVar10;
    auStack_f0 = _sqc2(auVar11);
    auStack_e0 = _sqc2(auVar12);
    auStack_150 = _sqc2(auVar16);
    auStack_140 = _sqc2(auVar17);
    auStack_130 = _sqc2(auVar11);
    auStack_120 = _sqc2(auVar12);
    iVar6 = iVar7;
  } while (iVar7 < 3);
  return fVar8;
}


// ==== FUN_00112790 @ 00112790 ====
// GLOBAL DAT_0040f070 undefined4
// GLOBAL DAT_0040f074 undefined4
// GLOBAL DAT_0040f078 undefined4
// GLOBAL DAT_0040f07c undefined4
// GLOBAL DAT_0040f080 undefined4
// GLOBAL DAT_0040f084 undefined4
// GLOBAL DAT_0040f088 undefined4
// GLOBAL DAT_0040f08c undefined4

void FUN_00112790(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0027acc8();
  uVar3 = DAT_0040f07c;
  uVar2 = DAT_0040f078;
  uVar1 = DAT_0040f074;
  *(undefined4 *)(param_1 + 0x20) = DAT_0040f070;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar3 = DAT_0040f07c;
  uVar2 = DAT_0040f078;
  uVar1 = DAT_0040f074;
  *(undefined4 *)(param_1 + 0x30) = DAT_0040f070;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar3 = DAT_0040f08c;
  uVar2 = DAT_0040f088;
  uVar1 = DAT_0040f084;
  *(undefined4 *)(param_1 + 0x40) = DAT_0040f080;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar4 = DAT_0040f08c;
  uVar3 = DAT_0040f088;
  uVar2 = DAT_0040f084;
  uVar1 = DAT_0040f080;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// ==== FUN_00112808 @ 00112808 ====
// GLOBAL DAT_003bc6ac undefined4
// GLOBAL DAT_0040f0e8 undefined4
// GLOBAL DAT_003bc78c float
// GLOBAL DAT_003bc76c float
// GLOBAL DAT_003bc7ac float
// GLOBAL DAT_003bc7cc float
// GLOBAL DAT_003bc7ec float
// GLOBAL DAT_003bc80c float
// GLOBAL DAT_003bc82c float
// GLOBAL DAT_003bc66c undefined4
// GLOBAL DAT_0040f078 undefined4
// GLOBAL DAT_0040f07c undefined4
// GLOBAL DAT_0040f070 undefined
// GLOBAL DAT_003bc70c undefined4
// GLOBAL DAT_003bc74c undefined4
// GLOBAL DAT_003bc64c undefined4
// GLOBAL DAT_0040f080 undefined4
// GLOBAL DAT_0040f090 undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00112808(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar3 = DAT_0040f07c;
  uVar2 = DAT_0040f078;
  uVar1 = _DAT_0040f070;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    uVar2 = DAT_003bc6ac;
    break;
  case 2:
    FUN_00107928(0x3f800000,DAT_0040f0e8,0);
    fVar5 = (float)((int)DAT_003bc76c * (uint)(DAT_003bc78c < DAT_003bc76c) |
                   (int)DAT_003bc78c * (uint)(DAT_003bc78c >= DAT_003bc76c));
    fVar5 = (float)((int)fVar5 * (uint)(DAT_003bc7ac < fVar5) |
                   (int)DAT_003bc7ac * (uint)(DAT_003bc7ac >= fVar5));
    *(float *)(param_1 + 8) = fVar5;
    fVar5 = (float)((int)fVar5 * (uint)(DAT_003bc7cc < fVar5) |
                   (int)DAT_003bc7cc * (uint)(DAT_003bc7cc >= fVar5));
    fVar5 = (float)((int)fVar5 * (uint)(DAT_003bc7ec < fVar5) |
                   (int)DAT_003bc7ec * (uint)(DAT_003bc7ec >= fVar5));
    *(float *)(param_1 + 8) = fVar5;
    fVar5 = (float)((int)fVar5 * (uint)(DAT_003bc80c < fVar5) |
                   (int)DAT_003bc80c * (uint)(DAT_003bc80c >= fVar5));
    *(uint *)(param_1 + 8) =
         (int)fVar5 * (uint)(DAT_003bc82c < fVar5) |
         (int)DAT_003bc82c * (uint)(DAT_003bc82c >= fVar5);
    return 1;
  case 3:
    uVar3 = 3;
    uVar2 = DAT_003bc66c;
    goto LAB_00112978;
  case 4:
    uVar2 = DAT_003bc70c;
    break;
  case 5:
    uVar2 = DAT_003bc74c;
    break;
  case 6:
    puVar4 = (undefined8 *)&DAT_0040f080;
    goto LAB_00112908;
  default:
    return 1;
  case 8:
    puVar4 = (undefined8 *)&DAT_0040f090;
LAB_00112908:
    *(int *)(param_1 + 0x20) = (int)_DAT_0040f070;
    *(int *)(param_1 + 0x24) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar3 = DAT_0040f07c;
    uVar2 = DAT_0040f078;
    uVar1 = _DAT_0040f070;
    *(int *)(param_1 + 0x30) = (int)_DAT_0040f070;
    *(int *)(param_1 + 0x34) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    uVar1 = *puVar4;
    uVar2 = *(undefined4 *)(puVar4 + 1);
    uVar3 = *(undefined4 *)((int)puVar4 + 0xc);
    *(int *)(param_1 + 0x40) = (int)uVar1;
    *(int *)(param_1 + 0x44) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    uVar1 = *puVar4;
    uVar2 = *(undefined4 *)(puVar4 + 1);
    uVar3 = *(undefined4 *)((int)puVar4 + 0xc);
    *(undefined4 *)(param_1 + 8) = 0x3f220c4a;
    *(int *)(param_1 + 0x50) = (int)uVar1;
    *(int *)(param_1 + 0x54) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    FUN_00107928(0x3f800000,DAT_0040f0e8,1);
    return 1;
  case 10:
    *(undefined4 *)(param_1 + 8) = DAT_003bc64c;
    return 1;
  }
  uVar3 = 2;
LAB_00112978:
  *(undefined4 *)(param_1 + 8) = uVar2;
  FUN_00107928(0x3f800000,DAT_0040f0e8,uVar3);
  return 1;
}


// ==== FUN_001129b8 @ 001129b8 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f070 undefined4
// GLOBAL DAT_0040f074 undefined4
// GLOBAL DAT_0040f078 undefined4
// GLOBAL DAT_0040f07c undefined4
// GLOBAL DAT_0040f080 undefined4
// GLOBAL DAT_0040f090 undefined4

void FUN_001129b8(float param_1,int param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined1 auVar3 [16];
  undefined8 extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  undefined8 extraout_v0_udw_01;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 in_vuI;
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  float fStack_28c;
  float fStack_288;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  auVar18 = _vadd(in_vf0,in_vf0);
  auVar3 = _qmfc2(auVar18._0_4_);
  auVar7 = _por(in_zero_qw,auVar3);
  fVar17 = 0.0;
  auVar18 = _sqc2(auVar18);
  fVar8 = *(float *)(param_2 + 4) + param_1;
  uStack_110 = auVar7._0_4_;
  uStack_10c = auVar7._4_4_;
  uStack_108 = auVar7._8_4_;
  uStack_104 = auVar7._12_4_;
  *(float *)(param_2 + 4) = fVar8;
  uVar16 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  if (*(float *)(param_2 + 8) <= fVar8) {
    FUN_001108d0(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    return;
  }
  auStack_120 = auVar3;
  switch(*(undefined4 *)(param_2 + 0x10)) {
  case 1:
    iVar10 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,0x3f800000,0x3bc688);
    iVar11 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,0x3f800000,0x3bc6a8);
    iVar12 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,0x3f800000,0x3bc6c8);
    auVar18 = _pextlw((long)iVar12,(long)iVar10);
    auStack_120 = _pextlw((long)iVar11,auVar18._0_8_);
    break;
  case 2:
    uVar9 = 0x3f400000;
    if (*(float *)(param_2 + 0xc) <= 1.0) {
      uVar9 = 0x3f800000;
    }
    iVar10 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,uVar9,0x3bc768);
    iVar11 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,uVar9,0x3bc788);
    iVar12 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,uVar9,0x3bc7a8);
    auVar18 = _pextlw((long)iVar12,(long)iVar10);
    auStack_120 = _pextlw((long)iVar11,auVar18._0_8_);
    iVar10 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,uVar9,0x3bc7c8);
    iVar11 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,uVar9,0x3bc7e8);
    iVar12 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,uVar9,0x3bc808);
    auVar18 = _pextlw((long)iVar12,(long)iVar10);
    auVar18 = _pextlw((long)iVar11,auVar18._0_8_);
    uStack_110 = auVar18._0_4_;
    uStack_10c = auVar18._4_4_;
    uStack_108 = auVar18._8_4_;
    uStack_104 = auVar18._12_4_;
    fVar17 = (float)FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,uVar9,0x3bc828);
    break;
  case 3:
    uVar16 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,0x3f800000,0x3bc668);
    auVar7 = _qmtc2(uVar16);
    _lqc2(auVar18);
    auVar18 = _vaddbc(in_vf0,auVar7);
    auStack_120 = _sqc2(auVar18);
    break;
  case 4:
    uVar9 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,0x3f800000,0x3bc6e8);
    auVar7 = _qmtc2(uVar9);
    _lqc2(auVar18);
    auVar18 = _vaddbc(in_vf0,auVar7);
    auVar18 = _sqc2(auVar18);
    uVar16 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,0x3f800000,0x3bc708);
    _lqc2(auVar18);
    auVar18 = _qmtc2(uVar16);
    auVar18 = _vaddbc(in_vf0,auVar18);
    auStack_120 = _sqc2(auVar18);
    break;
  case 5:
    uVar9 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,0x3f800000,0x3bc728);
    auVar7 = _qmtc2(uVar9);
    _lqc2(auVar18);
    auVar18 = _vaddbc(in_vf0,auVar7);
    auVar18 = _sqc2(auVar18);
    uVar16 = FUN_00113fe8(*(undefined4 *)(param_2 + 4),uVar16,0x3f800000,0x3bc748);
    _lqc2(auVar18);
    auVar18 = _qmtc2(uVar16);
    auVar18 = _vaddbc(in_vf0,auVar18);
    auStack_120 = _sqc2(auVar18);
    break;
  case 6:
    param_1 = *(float *)(param_2 + 4) / param_1;
    auStack_120._0_8_ = FUN_00114170(param_1 * 0.25);
    auStack_120._8_4_ = (int)extraout_v0_udw;
    auStack_120._12_4_ = (int)((ulong)extraout_v0_udw >> 0x20);
    if (3.0 < param_1) {
      puVar6 = &DAT_0040f080;
LAB_00112bb4:
      uVar16 = puVar6[1];
      uVar9 = puVar6[2];
      uVar1 = puVar6[3];
      *(undefined4 *)(param_2 + 0x20) = *puVar6;
      *(undefined4 *)(param_2 + 0x24) = uVar16;
      *(undefined4 *)(param_2 + 0x28) = uVar9;
      *(undefined4 *)(param_2 + 0x2c) = uVar1;
      uVar16 = puVar6[1];
      uVar9 = puVar6[2];
      uVar1 = puVar6[3];
      *(undefined4 *)(param_2 + 0x30) = *puVar6;
      *(undefined4 *)(param_2 + 0x34) = uVar16;
      *(undefined4 *)(param_2 + 0x38) = uVar9;
      *(undefined4 *)(param_2 + 0x3c) = uVar1;
      uVar1 = DAT_0040f07c;
      uVar9 = DAT_0040f078;
      uVar16 = DAT_0040f074;
      *(undefined4 *)(param_2 + 0x40) = DAT_0040f070;
      *(undefined4 *)(param_2 + 0x44) = uVar16;
      *(undefined4 *)(param_2 + 0x48) = uVar9;
      *(undefined4 *)(param_2 + 0x4c) = uVar1;
      uVar2 = DAT_0040f07c;
      uVar1 = DAT_0040f078;
      uVar9 = DAT_0040f074;
      uVar16 = DAT_0040f070;
      *(undefined4 *)(param_2 + 0x10) = 7;
      *(undefined4 *)(param_2 + 0x50) = uVar16;
      *(undefined4 *)(param_2 + 0x54) = uVar9;
      *(undefined4 *)(param_2 + 0x58) = uVar1;
      *(undefined4 *)(param_2 + 0x5c) = uVar2;
      *(undefined4 *)(param_2 + 4) = 0;
    }
    break;
  case 7:
    param_1 = *(float *)(param_2 + 4) / param_1;
    if (param_1 < 19.0) {
      auStack_120._0_8_ = FUN_00114170(param_1 * 0.05263158);
      auStack_120._8_4_ = (int)extraout_v0_udw_01;
      auStack_120._12_4_ = (int)((ulong)extraout_v0_udw_01 >> 0x20);
    }
    break;
  case 8:
    param_1 = *(float *)(param_2 + 4) / param_1;
    auStack_120._0_8_ = FUN_00114170(param_1 * 0.2);
    auStack_120._8_4_ = (int)extraout_v0_udw_00;
    auStack_120._12_4_ = (int)((ulong)extraout_v0_udw_00 >> 0x20);
    if (4.0 < param_1) {
      puVar6 = &DAT_0040f090;
      goto LAB_00112bb4;
    }
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar32 = _vsub(in_vf0,in_vf0);
  auVar33 = _vaddbc(in_vf0,in_vf0);
  auVar34 = _vaddbc(in_vf0,in_vf0);
  auVar28 = _vaddbc(in_vf0,in_vf0);
  auVar19 = _qmtc2(*(float *)(param_2 + 0xc));
  auVar18 = _lqc2(auStack_120);
  auVar35 = _vmulbc(auVar18,auVar19);
  auStack_2d0 = _sqc2(auVar33);
  auStack_2c0 = _sqc2(auVar34);
  auStack_2b0 = _sqc2(auVar28);
  auStack_2a0 = _sqc2(auVar32);
  auVar18 = _sqc2(auVar35);
  auVar31 = _vaddbc(in_vf0,in_vf0);
  auVar7._4_4_ = uStack_10c;
  auVar7._0_4_ = uStack_110;
  auVar7._8_4_ = uStack_108;
  auVar7._12_4_ = uStack_104;
  auVar7 = _lqc2(auVar7);
  fStack_288 = auVar18._8_4_;
  auVar18 = _vmulbc(auVar7,auVar19);
  if (fStack_288 != 0.0) {
    auVar7 = _sqc2(auVar35);
    auVar19 = _vmaxbc(in_vf0,in_vf0);
    fStack_288 = auVar7._8_4_;
    auVar20 = _vmul(auVar28,auVar28);
    auVar7 = _qmtc2(fStack_288 * 0.017453292);
    auVar7 = _vaddbc(in_vf0,auVar7);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar7 = _vsubi(auVar7,in_vuI);
    _vaddabc(auVar20,auVar20);
    auVar20 = _vmaddbc(auVar31,auVar20);
    auVar7 = _vabs(auVar7);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar7,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar19,in_vuI);
    _vmaddai(auVar19,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar7,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar7 = _vmsubi(auVar19,in_vuI);
    auVar7 = _vabs(auVar7);
    auVar19 = _vmove(auVar28);
    _ctc2(0x3e800000);
    _vnop();
    auVar7 = _vsubi(auVar7,in_vuI);
    auVar27 = _vmul(auVar7,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar20);
    uVar16 = _vwaitq();
    auVar19 = _vmulq(auVar19,uVar16);
    auVar24 = _vmul(auVar27,auVar27);
    _ctc2(0xc2992661);
    _vnop();
    auVar23 = _vmuli(auVar7,in_vuI);
    _ctc2(0xc2255de0);
    _vnop();
    auVar21 = _vmuli(auVar7,in_vuI);
    auVar20 = _vmul(auVar24,auVar24);
    auVar23 = _vmul(auVar23,auVar27);
    _ctc2(0x42a33457);
    _vnop();
    auVar29 = _vmuli(auVar7,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar30 = _vmuli(auVar7,in_vuI);
    auVar26 = _vmulbc(auVar19,auVar19);
    _vmula(auVar21,auVar27);
    _vmadda(auVar23,auVar24);
    _ctc2(0x40c90fda);
    _vmadda(auVar29,auVar24);
    _vmaddai(auVar7,in_vuI);
    auVar7 = _vmadd(auVar30,auVar20);
    auVar27 = _qmtc2(0x3f800000);
    _lqc2(auStack_e0);
    auVar20 = _vmul(auVar19,auVar19);
    _vaddbc(in_vf0,auVar26);
    _lqc2(auStack_f0);
    auVar23 = _vmulbc(auVar19,auVar19);
    auVar30 = _vaddbc(in_vf0,auVar27);
    _vaddbc(in_vf0,auVar23);
    auVar7 = _vsubbc(auVar30,auVar7);
    auVar23 = _vmulbc(auVar19,auVar19);
    auVar7 = _vaddbc(in_vf0,auVar7);
    auVar23 = _vaddbc(in_vf0,auVar23);
    auVar20 = _vsub(in_vf0,auVar20);
    auVar19 = _vmulbc(auVar19,auVar7);
    auVar23 = _vmulbc(auVar23,auVar7);
    auVar20 = _vaddbc(auVar20,auVar30);
    _lqc2(auStack_220);
    auVar20 = _vmulbc(auVar20,auVar7);
    auVar26 = _vaddbc(auVar23,auVar19);
    _lqc2(auStack_240);
    auVar27 = _vsubbc(auVar30,auVar20);
    _lqc2(auStack_230);
    auVar7 = _vsubbc(auVar23,auVar19);
    auVar21 = _vaddbc(in_vf0,auVar26);
    auVar27 = _vaddbc(in_vf0,auVar27);
    auVar29 = _vaddbc(in_vf0,auVar7);
    auVar26 = _vsubbc(auVar30,auVar20);
    auVar7 = _vaddbc(auVar23,auVar19);
    auVar30 = _vsubbc(auVar30,auVar20);
    _vmove(auVar27);
    auVar20 = _vsubbc(auVar23,auVar19);
    auVar22 = _vsubbc(auVar23,auVar19);
    auVar24 = _vaddbc(in_vf0,auVar7);
    _vmove(auVar29);
    auVar19 = _vaddbc(auVar23,auVar19);
    auVar25 = _vaddbc(in_vf0,auVar26);
    _vmove(auVar21);
    _vmove(auVar24);
    auVar22 = _vaddbc(in_vf0,auVar22);
    auVar7 = _vaddbc(in_vf0,auVar20);
    _vmove(auVar25);
    auVar19 = _vaddbc(in_vf0,auVar19);
    _vmove(auVar22);
    _sqc2(auVar27);
    auVar20 = _vaddbc(in_vf0,auVar30);
    _sqc2(auVar29);
    _sqc2(auVar21);
    auVar23 = _lqc2(auVar3);
    _vmulabc(auVar7,auVar28);
    _vmaddabc(auVar19,auVar28);
    auVar26 = _vmaddbc(auVar20,auVar28);
    _vmulabc(auVar7,auVar32);
    _vmaddabc(auVar19,auVar32);
    _vmaddabc(auVar20,auVar32);
    auVar23 = _vmaddbc(auVar23,in_vf0);
    _sqc2(auVar24);
    _sqc2(auVar25);
    _vmulabc(auVar7,auVar33);
    _vmaddabc(auVar19,auVar33);
    auVar28 = _vmaddbc(auVar20,auVar33);
    _vmulabc(auVar7,auVar34);
    _vmaddabc(auVar19,auVar34);
    auVar32 = _vmaddbc(auVar20,auVar34);
    _sqc2(auVar22);
    _sqc2(auVar7);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar7);
    _sqc2(auVar19);
    _sqc2(auVar20);
    auStack_2d0 = _sqc2(auVar28);
    _sqc2(auVar7);
    _sqc2(auVar19);
    _sqc2(auVar20);
    auStack_250 = _sqc2(auVar28);
    auStack_240 = _sqc2(auVar32);
    auStack_230 = _sqc2(auVar26);
    _sqc2(auVar23);
    _sqc2(auVar28);
    _sqc2(auVar32);
    _sqc2(auVar26);
    _sqc2(auVar23);
    auStack_2c0 = _sqc2(auVar32);
    auStack_2b0 = _sqc2(auVar26);
    auStack_2a0 = _sqc2(auVar23);
  }
  auVar7 = _sqc2(auVar35);
  fStack_28c = auVar7._4_4_;
  if (fStack_28c != 0.0) {
    auVar7 = _sqc2(auVar35);
    auVar28 = _vmaxbc(in_vf0,in_vf0);
    auStack_250._4_4_ = auVar7._4_4_;
    auVar29 = _lqc2(auStack_2c0);
    auVar19 = _qmtc2((float)auStack_250._4_4_ * 0.017453292);
    auVar32 = _vmul(auVar29,auVar29);
    auVar19 = _vaddbc(in_vf0,auVar19);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar19 = _vsubi(auVar19,in_vuI);
    _vaddabc(auVar32,auVar32);
    auVar32 = _vmaddbc(auVar31,auVar32);
    auVar19 = _vabs(auVar19);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar19,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar28,in_vuI);
    _vmaddai(auVar28,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar19,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar19 = _vmsubi(auVar28,in_vuI);
    _lqc2(auStack_d0);
    auVar19 = _vabs(auVar19);
    _ctc2(0x3e800000);
    _vnop();
    auVar19 = _vsubi(auVar19,in_vuI);
    auVar34 = _vmul(auVar19,auVar19);
    _ctc2(0xc2992661);
    _vnop();
    auVar33 = _vmuli(auVar19,in_vuI);
    auVar28 = _vmove(auVar29);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar32);
    uVar16 = _vwaitq();
    auVar28 = _vmulq(auVar28,uVar16);
    auVar27 = _vmul(auVar34,auVar34);
    _ctc2(0xc2255de0);
    _vnop();
    auVar26 = _vmuli(auVar19,in_vuI);
    auVar32 = _vmul(auVar27,auVar27);
    auVar33 = _vmul(auVar33,auVar34);
    _ctc2(0x42a33457);
    _vnop();
    auVar23 = _vmuli(auVar19,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar20 = _vmuli(auVar19,in_vuI);
    _vmula(auVar26,auVar34);
    _vmadda(auVar33,auVar27);
    _ctc2(0x40c90fda);
    _vmadda(auVar23,auVar27);
    _vmaddai(auVar19,in_vuI);
    auVar19 = _vmadd(auVar20,auVar32);
    auVar32 = _vmulbc(auVar28,auVar28);
    _lqc2(auStack_c0);
    auVar33 = _qmtc2(0x3f800000);
    _vaddbc(in_vf0,auVar32);
    auVar20 = _vaddbc(in_vf0,auVar33);
    auVar33 = _vmulbc(auVar28,auVar28);
    auVar32 = _vmul(auVar28,auVar28);
    _vaddbc(in_vf0,auVar33);
    auVar19 = _vsubbc(auVar20,auVar19);
    auVar34 = _vmulbc(auVar28,auVar28);
    auVar33 = _vsub(in_vf0,auVar32);
    auVar19 = _vaddbc(in_vf0,auVar19);
    auVar32 = _vaddbc(in_vf0,auVar34);
    auVar33 = _vaddbc(auVar33,auVar20);
    auVar28 = _vmulbc(auVar28,auVar19);
    auVar32 = _vmulbc(auVar32,auVar19);
    auVar19 = _vmulbc(auVar33,auVar19);
    _lqc2(auVar7);
    auVar34 = _vsubbc(auVar20,auVar19);
    _lqc2(auStack_240);
    auVar7 = _vsubbc(auVar32,auVar28);
    _lqc2(auStack_230);
    auVar33 = _vaddbc(auVar32,auVar28);
    auVar23 = _vaddbc(in_vf0,auVar7);
    auVar26 = _vaddbc(in_vf0,auVar33);
    auVar34 = _vaddbc(in_vf0,auVar34);
    auVar7 = _vaddbc(auVar32,auVar28);
    auVar33 = _vsubbc(auVar20,auVar19);
    _vmove(auVar34);
    _sqc2(auVar34);
    auVar27 = _vaddbc(in_vf0,auVar7);
    auVar34 = _vsubbc(auVar20,auVar19);
    _sqc2(auVar27);
    auVar19 = _vsubbc(auVar32,auVar28);
    _vmove(auVar23);
    _vmove(auVar26);
    auVar7 = _vsubbc(auVar32,auVar28);
    _vmove(auVar27);
    auVar20 = _vaddbc(in_vf0,auVar33);
    auVar30 = _vaddbc(in_vf0,auVar19);
    auVar27 = _lqc2(auVar3);
    _sqc2(auVar23);
    auVar19 = _vaddbc(auVar32,auVar28);
    _vmove(auVar20);
    auVar28 = _vaddbc(in_vf0,auVar7);
    _vmove(auVar30);
    auVar32 = _vaddbc(in_vf0,auVar19);
    _sqc2(auVar26);
    auVar33 = _vaddbc(in_vf0,auVar34);
    _sqc2(auVar20);
    auVar7 = _lqc2(auStack_2d0);
    _vmulabc(auVar28,auVar7);
    _vmaddabc(auVar32,auVar7);
    auVar34 = _vmaddbc(auVar33,auVar7);
    _vmulabc(auVar28,auVar29);
    _vmaddabc(auVar32,auVar29);
    auVar20 = _vmaddbc(auVar33,auVar29);
    _qmfc2(auVar27._0_4_);
    _sqc2(auVar30);
    auVar19 = _lqc2(auStack_2b0);
    auVar7 = _lqc2(auStack_2a0);
    _sqc2(auVar28);
    _vmulabc(auVar28,auVar19);
    _vmaddabc(auVar32,auVar19);
    auVar19 = _vmaddbc(auVar33,auVar19);
    _vmulabc(auVar28,auVar7);
    _vmaddabc(auVar32,auVar7);
    _vmaddabc(auVar33,auVar7);
    auVar7 = _vmaddbc(auVar27,in_vf0);
    _sqc2(auVar32);
    _sqc2(auVar28);
    _sqc2(auVar33);
    _sqc2(auVar32);
    _sqc2(auVar33);
    _sqc2(auVar28);
    _sqc2(auVar32);
    _sqc2(auVar33);
    auStack_250 = _sqc2(auVar34);
    auStack_240 = _sqc2(auVar20);
    auStack_230 = _sqc2(auVar19);
    _sqc2(auVar7);
    _sqc2(auVar34);
    _sqc2(auVar20);
    auStack_2d0 = _sqc2(auVar34);
    auStack_2c0 = _sqc2(auVar20);
    auStack_2b0 = _sqc2(auVar19);
    auStack_2a0 = _sqc2(auVar7);
    _sqc2(auVar19);
    _sqc2(auVar7);
  }
  auVar7 = _qmfc2(auVar35._0_4_);
  if (auVar7._0_4_ != 0.0) {
    auVar19 = _vmaxbc(in_vf0,in_vf0);
    auVar7 = _qmtc2(auVar7._0_4_ * 0.017453292);
    auVar7 = _vaddbc(in_vf0,auVar7);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar7 = _vsubi(auVar7,in_vuI);
    auVar7 = _vabs(auVar7);
    auVar30 = _lqc2(auStack_2d0);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar7,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar19,in_vuI);
    _vmaddai(auVar19,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar7,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar7 = _vmsubi(auVar19,in_vuI);
    auVar7 = _vabs(auVar7);
    _ctc2(0x3e800000);
    _vnop();
    auVar7 = _vsubi(auVar7,in_vuI);
    auVar19 = _vmul(auVar30,auVar30);
    auVar33 = _vmul(auVar7,auVar7);
    _ctc2(0xc2992661);
    _vnop();
    auVar32 = _vmuli(auVar7,in_vuI);
    _vaddabc(auVar19,auVar19);
    auVar28 = _vmaddbc(auVar31,auVar19);
    auVar19 = _vmove(auVar30);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar28);
    uVar16 = _vwaitq();
    auVar19 = _vmulq(auVar19,uVar16);
    auVar23 = _vmul(auVar33,auVar33);
    _ctc2(0xc2255de0);
    _vnop();
    auVar20 = _vmuli(auVar7,in_vuI);
    auVar28 = _vmul(auVar23,auVar23);
    auVar32 = _vmul(auVar32,auVar33);
    _ctc2(0x42a33457);
    _vnop();
    auVar35 = _vmuli(auVar7,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar34 = _vmuli(auVar7,in_vuI);
    _vmula(auVar20,auVar33);
    _vmadda(auVar32,auVar23);
    _ctc2(0x40c90fda);
    _vmadda(auVar35,auVar23);
    _vmaddai(auVar7,in_vuI);
    auVar7 = _vmadd(auVar34,auVar28);
    auVar28 = _vmulbc(auVar19,auVar19);
    _lqc2(auStack_a0);
    auVar33 = _qmtc2(0x3f800000);
    _vaddbc(in_vf0,auVar28);
    _lqc2(auStack_b0);
    auVar32 = _vmulbc(auVar19,auVar19);
    auVar35 = _vaddbc(in_vf0,auVar33);
    auVar28 = _vmul(auVar19,auVar19);
    _vaddbc(in_vf0,auVar32);
    auVar7 = _vsubbc(auVar35,auVar7);
    auVar33 = _vmulbc(auVar19,auVar19);
    auVar32 = _vsub(in_vf0,auVar28);
    auVar7 = _vaddbc(in_vf0,auVar7);
    auVar28 = _vaddbc(in_vf0,auVar33);
    auVar32 = _vaddbc(auVar32,auVar35);
    auVar19 = _vmulbc(auVar19,auVar7);
    auVar28 = _vmulbc(auVar28,auVar7);
    auVar32 = _vmulbc(auVar32,auVar7);
    _lqc2(auStack_250);
    _lqc2(auStack_240);
    auVar34 = _vsubbc(auVar35,auVar32);
    _lqc2(auStack_230);
    auVar7 = _vsubbc(auVar28,auVar19);
    auVar33 = _vaddbc(auVar28,auVar19);
    auVar20 = _vaddbc(in_vf0,auVar7);
    auVar23 = _vaddbc(in_vf0,auVar33);
    auVar34 = _vaddbc(in_vf0,auVar34);
    auVar7 = _vaddbc(auVar28,auVar19);
    auVar33 = _vsubbc(auVar35,auVar32);
    _vmove(auVar34);
    auVar32 = _vsubbc(auVar35,auVar32);
    _sqc2(auVar34);
    auVar34 = _vaddbc(in_vf0,auVar7);
    _sqc2(auVar34);
    auVar35 = _vsubbc(auVar28,auVar19);
    _vmove(auVar20);
    auVar7 = _vsubbc(auVar28,auVar19);
    _vmove(auVar23);
    auVar26 = _vaddbc(in_vf0,auVar33);
    _vmove(auVar34);
    auVar27 = _vaddbc(in_vf0,auVar35);
    auVar35 = _lqc2(auVar3);
    auVar3 = _vaddbc(auVar28,auVar19);
    _vmove(auVar26);
    auVar19 = _vaddbc(in_vf0,auVar7);
    _vmove(auVar27);
    auVar28 = _vaddbc(in_vf0,auVar3);
    _sqc2(auVar20);
    auVar32 = _vaddbc(in_vf0,auVar32);
    _sqc2(auVar23);
    auVar3 = _lqc2(auStack_2c0);
    _vmulabc(auVar19,auVar30);
    _vmaddabc(auVar28,auVar30);
    auVar33 = _vmaddbc(auVar32,auVar30);
    _vmulabc(auVar19,auVar3);
    _vmaddabc(auVar28,auVar3);
    auVar34 = _vmaddbc(auVar32,auVar3);
    _sqc2(auVar26);
    _sqc2(auVar27);
    _qmfc2(auVar35._0_4_);
    auVar7 = _lqc2(auStack_2b0);
    auVar3 = _lqc2(auStack_2a0);
    _vmulabc(auVar19,auVar7);
    _vmaddabc(auVar28,auVar7);
    auVar7 = _vmaddbc(auVar32,auVar7);
    _vmulabc(auVar19,auVar3);
    _vmaddabc(auVar28,auVar3);
    _vmaddabc(auVar32,auVar3);
    auVar3 = _vmaddbc(auVar35,in_vf0);
    _sqc2(auVar19);
    _sqc2(auVar28);
    _sqc2(auVar32);
    _sqc2(auVar28);
    _sqc2(auVar32);
    _sqc2(auVar19);
    _sqc2(auVar19);
    _sqc2(auVar28);
    _sqc2(auVar32);
    _sqc2(auVar33);
    _sqc2(auVar34);
    _sqc2(auVar7);
    _sqc2(auVar3);
    _sqc2(auVar33);
    _sqc2(auVar34);
    _sqc2(auVar7);
    _sqc2(auVar3);
    auStack_2d0 = _sqc2(auVar33);
    auStack_2c0 = _sqc2(auVar34);
    auStack_2b0 = _sqc2(auVar7);
    _sqc2(auVar3);
  }
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_3 + 4));
  auVar7 = _qmtc2(0x3fb504f3);
  _sqc2(auVar18);
  auVar19 = _vmulbc(auVar3,auVar7);
  auVar3 = _vmulbc(auVar19,auVar19);
  auVar28 = _vmulbc(auVar19,auVar19);
  auVar3 = _sqc2(auVar3);
  auVar32 = _vmulbc(auVar19,auVar19);
  auVar33 = _vmulbc(auVar19,auVar19);
  auVar34 = _vmulbc(auVar19,auVar19);
  auVar7 = _vmulbc(auVar19,auVar19);
  auVar35 = _vmulbc(auVar19,auVar19);
  fStack_12c = auVar3._4_4_;
  fVar8 = fStack_12c;
  auVar7 = _qmfc2(auVar7._0_4_);
  auVar3 = _sqc2(auVar28);
  fVar13 = 1.0 - fStack_12c;
  auVar28 = _vmulbc(auVar19,auVar19);
  fVar14 = 1.0 - auVar7._0_4_;
  auVar7 = _vmulbc(auVar19,auVar19);
  fStack_12c = auVar3._4_4_;
  auVar7 = _qmfc2(auVar7._0_4_);
  auVar3 = _sqc2(auVar32);
  auVar19 = _qmfc2(auVar28._0_4_);
  _lqc2(auStack_160);
  _lqc2(auStack_150);
  fStack_128 = auVar3._8_4_;
  auVar3 = _sqc2(auVar33);
  auVar28 = _qmtc2(fVar13 - fStack_128);
  fStack_124 = auVar3._12_4_;
  auVar3 = _sqc2(auVar34);
  _lqc2(auStack_170);
  fVar15 = fStack_12c - fStack_124;
  auVar32 = _vaddbc(in_vf0,auVar28);
  fStack_12c = fStack_12c + fStack_124;
  fStack_124 = auVar3._12_4_;
  _vmove(auVar32);
  auVar3 = _sqc2(auVar35);
  auVar28 = _qmtc2(auVar7._0_4_ + fStack_124);
  fVar13 = auVar7._0_4_ - fStack_124;
  fStack_124 = auVar3._12_4_;
  auVar28 = _vaddbc(in_vf0,auVar28);
  _vmove(auVar28);
  _sqc2(auVar32);
  auVar3 = _qmtc2(auVar19._0_4_ - fStack_124);
  auVar32 = _vaddbc(in_vf0,auVar3);
  auVar7 = _qmtc2(auVar19._0_4_ + fStack_124);
  auVar3 = _qmtc2(fVar14 - fStack_128);
  _vmove(auVar32);
  auVar23 = _vaddbc(in_vf0,auVar3);
  auVar3 = _qmtc2(fVar15);
  auVar26 = _vaddbc(in_vf0,auVar3);
  auVar3 = _qmtc2(fVar13);
  auVar20 = _vaddbc(in_vf0,auVar7);
  auVar19 = _qmtc2(fVar14 - fVar8);
  _sqc2(auVar32);
  auVar7 = _qmtc2(fStack_12c);
  _sqc2(auVar28);
  pauVar4 = (undefined1 (*) [16])(param_3 + 4);
  _vmove(auVar20);
  _vmove(auVar23);
  auVar35 = _vaddbc(in_vf0,auVar3);
  _vmove(auVar26);
  auVar34 = _vaddbc(in_vf0,auVar7);
  auVar33 = _vaddbc(in_vf0,auVar19);
  _sqc2(auVar20);
  _sqc2(auVar23);
  _sqc2(auVar26);
  _sqc2(auVar35);
  _sqc2(auVar34);
  _sqc2(auVar33);
  _sqc2(auVar35);
  _sqc2(auVar34);
  _sqc2(auVar33);
  _sqc2(auVar35);
  _sqc2(auVar34);
  _sqc2(auVar33);
  auVar7 = _lqc2(auStack_2d0);
  auVar3 = _lqc2(auStack_2c0);
  _vmulabc(auVar35,auVar7);
  _vmaddabc(auVar34,auVar7);
  auVar19 = _vmaddbc(auVar33,auVar7);
  _vmulabc(auVar35,auVar3);
  _vmaddabc(auVar34,auVar3);
  auVar28 = _vmaddbc(auVar33,auVar3);
  auVar23 = _lqc2(*(undefined1 (*) [16])(param_3 + 8));
  auVar7 = _lqc2(auStack_2b0);
  auVar3 = _vmul(auVar19,auVar19);
  _vmulabc(auVar35,auVar7);
  _vmaddabc(auVar34,auVar7);
  auVar7 = _vmaddbc(auVar33,auVar7);
  _vmulabc(auVar35,auVar18);
  _vmaddabc(auVar34,auVar18);
  _vmaddabc(auVar33,auVar18);
  auVar26 = _vmaddbc(auVar23,in_vf0);
  _vaddabc(auVar3,auVar3);
  auVar18 = _vmaddbc(auVar31,auVar3);
  auVar32 = _vmove(auVar19);
  auVar3 = _vmul(auVar28,auVar28);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar18);
  auVar18 = _qmfc2(auVar18._0_4_);
  auVar20 = _qmtc2(SQRT(auVar18._0_4_));
  uVar16 = _vwaitq();
  auVar27 = _vmulq(auVar32,uVar16);
  _vaddabc(auVar3,auVar3);
  auVar18 = _vmaddbc(auVar31,auVar3);
  auVar30 = _vmove(auVar28);
  auVar3 = _vmul(auVar7,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar18);
  auVar18 = _qmfc2(auVar18._0_4_);
  auVar32 = _qmtc2(SQRT(auVar18._0_4_));
  uVar16 = _vwaitq();
  auVar30 = _vmulq(auVar30,uVar16);
  _vaddabc(auVar3,auVar3);
  auVar18 = _vmaddbc(auVar31,auVar3);
  _lqc2(auStack_90);
  auVar3 = _vaddbc(in_vf0,auVar20);
  _vmove(auVar3);
  _vaddbc(in_vf0,auVar32);
  auVar3 = _vmove(auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar18);
  auVar18 = _qmfc2(auVar18._0_4_);
  auVar18 = _qmtc2(SQRT(auVar18._0_4_));
  uVar16 = _vwaitq();
  auVar32 = _vmulq(auVar3,uVar16);
  _sqc2(auVar35);
  auVar20 = _vaddbc(in_vf0,auVar18);
  _sqc2(auVar34);
  auVar3 = _qmfc2(auVar20._0_4_);
  _sqc2(auVar33);
  _sqc2(auVar23);
  _sqc2(auVar35);
  _sqc2(auVar34);
  _sqc2(auVar33);
  _sqc2(auVar23);
  _sqc2(auVar19);
  _sqc2(auVar28);
  _sqc2(auVar7);
  auVar18 = _sqc2(auVar26);
  *param_3 = *param_3 + fVar17 * *(float *)(param_2 + 0xc);
  _sqc2(auVar23);
  _sqc2(auVar19);
  _sqc2(auVar28);
  _sqc2(auVar7);
  _sqc2(auVar26);
  _sqc2(auVar19);
  _sqc2(auVar28);
  _sqc2(auVar7);
  _sqc2(auVar26);
  auStack_350 = _sqc2(auVar27);
  auStack_340 = _sqc2(auVar30);
  auStack_330 = _sqc2(auVar32);
  if (auVar3._0_4_ <= 0.0) {
LAB_00113c18:
    _vopmula(auVar30,auVar32);
    auVar7 = _vopmsub(auVar32,auVar30);
    auVar3 = _vmul(auVar7,auVar7);
    _sqc2(auVar7);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar31,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar16 = _vwaitq();
    auVar3 = _vmulq(auVar7,uVar16);
    _vopmula(auVar3,auVar30);
    auVar7 = _vopmsub(auVar30,auVar3);
    auStack_350 = _sqc2(auVar3);
    auVar3 = _vmul(auVar7,auVar7);
    _sqc2(auVar7);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar31,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar16 = _vwaitq();
    auVar3 = _vmulq(auVar7,uVar16);
    auStack_330 = _sqc2(auVar3);
    goto LAB_00113c80;
  }
  auVar3 = _sqc2(auVar20);
  fStack_28c = auVar3._4_4_;
  if (0.0 < fStack_28c) {
    auVar3 = _sqc2(auVar20);
    fStack_288 = auVar3._8_4_;
    if (0.0 < fStack_288) {
      auVar19 = _vaddbc(in_vf0,in_vf0);
      auVar3 = _vmul(auVar30,auVar32);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar19,auVar3);
      _lqc2(auStack_80);
      _vaddbc(in_vf0,auVar3);
      auVar3 = _vmul(auVar32,auVar27);
      _vaddabc(auVar3,auVar3);
      auVar7 = _vmaddbc(auVar19,auVar3);
      auVar3 = _vmul(auVar27,auVar30);
      _vaddbc(in_vf0,auVar7);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar19,auVar3);
      auVar3 = _vaddbc(in_vf0,auVar3);
      auVar28 = _vabs(auVar3);
      auVar19 = _vmove(auVar28);
      auVar7 = _qmfc2(auVar19._0_4_);
      auVar3 = _sqc2(auVar19);
      fStack_28c = auVar3._4_4_;
      if (fStack_28c <= auVar7._0_4_) {
        auVar3 = _sqc2(auVar28);
        fStack_28c = auVar3._4_4_;
        auVar3 = _sqc2(auVar28);
        fStack_288 = auVar3._8_4_;
        if (fStack_28c < fStack_288) goto LAB_00113bac;
      }
      else {
        auVar3 = _sqc2(auVar19);
        fStack_288 = auVar3._8_4_;
        if (auVar7._0_4_ < fStack_288) goto LAB_00113c18;
      }
    }
    _vopmula(auVar27,auVar30);
    auVar7 = _vopmsub(auVar30,auVar27);
    auVar3 = _vmul(auVar7,auVar7);
    _sqc2(auVar7);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar31,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar16 = _vwaitq();
    auVar3 = _vmulq(auVar7,uVar16);
    _vopmula(auVar3,auVar27);
    auVar7 = _vopmsub(auVar27,auVar3);
    auStack_330 = _sqc2(auVar3);
    auVar3 = _vmul(auVar7,auVar7);
    _sqc2(auVar7);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar31,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar16 = _vwaitq();
    auVar3 = _vmulq(auVar7,uVar16);
    auStack_340 = _sqc2(auVar3);
  }
  else {
LAB_00113bac:
    _vopmula(auVar32,auVar27);
    auVar7 = _vopmsub(auVar27,auVar32);
    auVar3 = _vmul(auVar7,auVar7);
    _sqc2(auVar7);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar31,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar16 = _vwaitq();
    auVar3 = _vmulq(auVar7,uVar16);
    _vopmula(auVar3,auVar32);
    auVar7 = _vopmsub(auVar32,auVar3);
    auStack_340 = _sqc2(auVar3);
    auVar3 = _vmul(auVar7,auVar7);
    _sqc2(auVar7);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar31,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar16 = _vwaitq();
    auVar3 = _vmulq(auVar7,uVar16);
    auStack_350 = _sqc2(auVar3);
  }
LAB_00113c80:
  auVar7 = _lqc2(auStack_340);
  auVar28 = _lqc2(auStack_350);
  auVar3 = _vaddbc(auVar28,auVar7);
  auVar19 = _lqc2(auStack_330);
  auVar3 = _vaddbc(auVar3,auVar19);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar31 = _vmove(auVar7);
  fStack_320 = auVar18._0_4_;
  fStack_31c = auVar18._4_4_;
  fStack_318 = auVar18._8_4_;
  fStack_314 = auVar18._12_4_;
  if (0.0 < auVar3._0_4_) {
    _lqc2(*(undefined1 (*) [16])(param_3 + 4));
    auVar18 = _vsubbc(auVar31,auVar19);
    auVar18 = _vaddbc(in_vf0,auVar18);
    auVar7 = _vsubbc(auVar19,auVar28);
    _vmove(auVar18);
    auVar19 = _vaddbc(in_vf0,auVar7);
    fVar8 = SQRT(auVar3._0_4_ + 1.0);
    auVar3 = _vsubbc(auVar28,auVar31);
    _vmove(auVar19);
    auVar18 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_3 + 4) = auVar18;
    auVar7 = _vaddbc(in_vf0,auVar3);
    auVar18 = _sqc2(auVar19);
    *(undefined1 (*) [16])(param_3 + 4) = auVar18;
    auVar3 = _qmtc2(0.5 / fVar8);
    auVar18 = _vmove(auVar7);
    auVar3 = _vmulbc(auVar18,auVar3);
    auVar18 = _sqc2(auVar7);
    *(undefined1 (*) [16])(param_3 + 4) = auVar18;
    auVar18 = _sqc2(auVar3);
    *(undefined1 (*) [16])(param_3 + 4) = auVar18;
    auVar18 = _qmtc2(fVar8 * 0.5);
    auVar18 = _vmulbc(in_vf0,auVar18);
    auVar18 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_3 + 4) = auVar18;
  }
  else {
    auVar18 = _sqc2(auVar7);
    auVar3 = _qmfc2(auVar28._0_4_);
    fStack_28c = auVar18._4_4_;
    if (fStack_28c <= auVar3._0_4_) {
      auVar18 = _sqc2(auVar19);
      fStack_288 = auVar18._8_4_;
      uVar5 = (uint)(auVar3._0_4_ < fStack_288) << 1;
    }
    else {
      auVar18 = _sqc2(auVar19);
      fStack_288 = auVar18._8_4_;
      auVar18 = _sqc2(auVar7);
      fStack_28c = auVar18._4_4_;
      uVar5 = 1;
      if (fStack_28c < fStack_288) {
        uVar5 = 2;
      }
    }
    if (uVar5 == 1) {
      auVar3 = _lqc2(auStack_350);
      auVar19 = _qmtc2(0x3f800000);
      auVar7 = _lqc2(auStack_330);
      auVar18 = _lqc2(auStack_340);
      auVar3 = _vaddbc(auVar7,auVar3);
      auVar18 = _vsubbc(auVar18,auVar3);
      _lqc2(*pauVar4);
      auVar18 = _vaddbc(auVar18,auVar19);
      auVar18 = _sqc2(auVar18);
      fStack_28c = auVar18._4_4_;
      auVar3 = _lqc2(auStack_330);
      auVar32 = _lqc2(auStack_350);
      auVar18 = _qmtc2(SQRT(fStack_28c) * 0.5);
      auVar28 = _qmtc2(0.5 / SQRT(fStack_28c));
      auVar31 = _vaddbc(in_vf0,auVar18);
      auVar18 = _vsubbc(auVar3,auVar32);
      auVar7 = _lqc2(auStack_340);
      auVar18 = _vmulbc(auVar18,auVar28);
      _vmove(auVar31);
      auVar3 = _vaddbc(auVar7,auVar3);
      auVar19 = _vmulbc(in_vf0,auVar18);
      auVar18 = _sqc2(auVar31);
      *pauVar4 = auVar18;
      auVar18 = _vmulbc(auVar3,auVar28);
      _vmove(auVar19);
      auVar3 = _vaddbc(in_vf0,auVar18);
      auVar18 = _sqc2(auVar19);
      *pauVar4 = auVar18;
      auVar7 = _vaddbc(auVar7,auVar32);
      auVar18 = _sqc2(auVar3);
      *pauVar4 = auVar18;
      auVar18 = _vmulbc(auVar7,auVar28);
      auVar18 = _vaddbc(in_vf0,auVar18);
      auVar18 = _sqc2(auVar18);
      *pauVar4 = auVar18;
    }
    else if (uVar5 < 2) {
      if (uVar5 == 0) {
        auVar28 = _lqc2(auStack_330);
        auVar7 = _qmtc2(0x3f800000);
        auVar3 = _lqc2(auStack_340);
        auVar19 = _lqc2(auStack_350);
        auVar18 = _vaddbc(auVar3,auVar28);
        auVar18 = _vsubbc(auVar19,auVar18);
        auVar18 = _vaddbc(auVar18,auVar7);
        auVar31 = _vsubbc(auVar3,auVar28);
        auVar18 = _qmfc2(auVar18._0_4_);
        auVar7 = _vaddbc(auVar19,auVar3);
        _lqc2(*pauVar4);
        auVar19 = _vaddbc(auVar19,auVar28);
        auVar3 = _qmtc2(SQRT(auVar18._0_4_) * 0.5);
        auVar28 = _qmtc2(0.5 / SQRT(auVar18._0_4_));
        auVar32 = _vaddbc(in_vf0,auVar3);
        auVar18 = _vmulbc(auVar31,auVar28);
        _vmove(auVar32);
        auVar3 = _vmulbc(auVar7,auVar28);
        auVar31 = _vmulbc(in_vf0,auVar18);
        auVar18 = _sqc2(auVar32);
        *pauVar4 = auVar18;
        _vmove(auVar31);
        auVar7 = _vmulbc(auVar19,auVar28);
        auVar3 = _vaddbc(in_vf0,auVar3);
        auVar18 = _sqc2(auVar31);
        *pauVar4 = auVar18;
        auVar18 = _sqc2(auVar3);
        *pauVar4 = auVar18;
        auVar18 = _vaddbc(in_vf0,auVar7);
        auVar18 = _sqc2(auVar18);
        *pauVar4 = auVar18;
      }
    }
    else if (uVar5 == 2) {
      auVar3 = _lqc2(auStack_340);
      auVar19 = _qmtc2(0x3f800000);
      auVar7 = _lqc2(auStack_350);
      auVar18 = _lqc2(auStack_330);
      auVar3 = _vaddbc(auVar7,auVar3);
      auVar18 = _vsubbc(auVar18,auVar3);
      _lqc2(*pauVar4);
      auVar18 = _vaddbc(auVar18,auVar19);
      auVar18 = _sqc2(auVar18);
      fStack_288 = auVar18._8_4_;
      auVar3 = _lqc2(auStack_350);
      auVar32 = _lqc2(auStack_340);
      auVar18 = _qmtc2(SQRT(fStack_288) * 0.5);
      auVar28 = _qmtc2(0.5 / SQRT(fStack_288));
      auVar31 = _vaddbc(in_vf0,auVar18);
      auVar18 = _vsubbc(auVar3,auVar32);
      auVar7 = _lqc2(auStack_330);
      auVar18 = _vmulbc(auVar18,auVar28);
      _vmove(auVar31);
      auVar3 = _vaddbc(auVar7,auVar3);
      auVar19 = _vmulbc(in_vf0,auVar18);
      auVar18 = _sqc2(auVar31);
      *pauVar4 = auVar18;
      auVar18 = _vmulbc(auVar3,auVar28);
      _vmove(auVar19);
      auVar3 = _vaddbc(in_vf0,auVar18);
      auVar18 = _sqc2(auVar19);
      *pauVar4 = auVar18;
      auVar7 = _vaddbc(auVar7,auVar32);
      auVar18 = _sqc2(auVar3);
      *pauVar4 = auVar18;
      auVar18 = _vmulbc(auVar7,auVar28);
      auVar18 = _vaddbc(in_vf0,auVar18);
      auVar18 = _sqc2(auVar18);
      *pauVar4 = auVar18;
    }
  }
  param_3[8] = fStack_320;
  param_3[9] = fStack_31c;
  param_3[10] = fStack_318;
  param_3[0xb] = fStack_314;
  return;
}


// ==== FUN_00113fe8 @ 00113fe8 ====

float FUN_00113fe8(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 < *param_4) {
    fVar4 = 0.0;
  }
  else {
    if (0.0 < param_4[1]) {
      fVar4 = (param_1 - *param_4) / param_4[1];
      fVar4 = (float)((int)fVar4 * (uint)(0.0 < fVar4));
      fVar3 = 1.0 - (float)((int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000);
      fVar4 = (float)FUN_0029e688(fVar3,param_4[6]);
      fVar4 = param_4[2] * fVar4;
      fVar3 = (float)FUN_0029e688(fVar3,param_4[7]);
      fVar2 = param_4[5] * fVar3;
      fVar1 = param_4[3] * fVar3 * param_3;
      fVar3 = param_4[4] * fVar3 * param_3;
    }
    else {
      fVar2 = param_4[5];
      fVar1 = param_4[3] * param_3;
      fVar3 = param_4[4] * param_3;
      fVar4 = param_4[2];
    }
    fVar2 = fVar2 * param_3;
    if (param_4[3] == 0.0) {
      fVar3 = fVar3 * param_2;
    }
    else {
      fVar3 = fVar1 * param_1;
    }
    fVar3 = (float)FUN_0029dc18(fVar3 * 3.1415927);
    fVar4 = fVar4 * fVar3;
    if (param_4[5] != 0.0) {
      fVar3 = (float)FUN_0029dc18(fVar2 * param_2 * 3.1415927);
      fVar4 = fVar4 * fVar3;
    }
  }
  return fVar4;
}


// ==== FUN_00114170 @ 00114170 ====

undefined8 FUN_00114170(float param_1,undefined8 param_2,undefined1 (*param_3) [16])

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
  
  auVar6 = _qmtc2(0x40400000);
  auVar9 = _qmtc2(0x40000000);
  auVar4 = _lqc2(*param_3);
  auVar8 = _lqc2(param_3[1]);
  auVar2 = _qmtc2(0x40a00000);
  auVar1 = _vmulbc(auVar4,auVar9);
  auVar3 = _vmulbc(auVar8,auVar2);
  auVar7 = _lqc2(param_3[2]);
  auVar2 = _vmulbc(auVar8,auVar6);
  auVar5 = _vsub(in_vf0,auVar4);
  auVar4 = _qmtc2(0x40800000);
  auVar1 = _vsub(auVar1,auVar3);
  auVar2 = _vadd(auVar5,auVar2);
  auVar4 = _vmulbc(auVar7,auVar4);
  auVar6 = _vmulbc(auVar7,auVar6);
  auVar3 = _lqc2(param_3[3]);
  auVar1 = _vadd(auVar1,auVar4);
  auVar2 = _vsub(auVar2,auVar6);
  auVar1 = _vsub(auVar1,auVar3);
  auVar2 = _vadd(auVar2,auVar3);
  auVar4 = _qmtc2(param_1 * param_1 * param_1);
  auVar3 = _qmtc2(param_1 * param_1);
  auVar2 = _vmulbc(auVar2,auVar4);
  auVar1 = _vmulbc(auVar1,auVar3);
  auVar4 = _qmtc2(param_1);
  auVar3 = _vadd(auVar5,auVar7);
  auVar2 = _vadd(auVar2,auVar1);
  auVar1 = _vmulbc(auVar3,auVar4);
  auVar2 = _vadd(auVar2,auVar1);
  auVar4 = _vmulbc(auVar8,auVar9);
  auVar1 = _qmtc2(0x3f000000);
  auVar2 = _vadd(auVar2,auVar4);
  auVar2 = _vmulbc(auVar2,auVar1);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_8_;
}


// ==== FUN_00114228 @ 00114228 ====

void FUN_00114228(void)

{
  return;
}


// ==== FUN_00114968 @ 00114968 ====

void FUN_00114968(void)

{
  return;
}


// ==== FUN_00114970 @ 00114970 ====

void FUN_00114970(void)

{
  return;
}


// ==== FUN_00114980 @ 00114980 ====

void FUN_00114980(void)

{
  return;
}


// ==== FUN_00114988 @ 00114988 ====
// GLOBAL DAT_0040f0e8 int

void FUN_00114988(float param_1,undefined8 param_2,float *param_3)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined4 in_vuI;
  undefined4 uVar29;
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [8];
  float fStack_228;
  float fStack_224;
  float fStack_21c;
  float fStack_218;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  uVar29 = *(undefined4 *)(DAT_0040f0e8 + 0x4ac);
  fVar8 = 0.0;
  fVar3 = (float)FUN_0026bb98(uVar29,0x19);
  fVar9 = 0.0;
  fVar4 = (float)FUN_0026bb98(uVar29,0x18);
  fVar11 = 0.0;
  fVar10 = fVar9;
  fVar5 = (float)FUN_0026bb98(uVar29,0x1b);
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar6 = (float)FUN_0026bb98(uVar29,0x1a);
  fVar7 = (float)FUN_0026bb98(uVar29,0xc);
  if (fVar7 == 0.0) {
    fVar8 = fVar4;
    fVar10 = fVar5;
    fVar11 = fVar3;
    fVar3 = fVar12;
    fVar9 = fVar6;
    fVar4 = fVar13;
    fVar5 = 0.0;
  }
  fVar6 = (float)FUN_0026bb98(uVar29,0xe);
  if (fVar6 != 0.0) {
    fVar11 = fVar11 * 10.0;
  }
  auVar14 = _lqc2(*(undefined1 (*) [16])(param_3 + 4));
  auVar16 = _qmtc2(0x3fb504f3);
  auVar15 = _vmulbc(auVar14,auVar16);
  _lqc2(auStack_160);
  auVar14 = _vmulbc(auVar15,auVar15);
  auVar17 = _vmulbc(auVar15,auVar15);
  auVar14 = _sqc2(auVar14);
  auVar18 = _vmulbc(auVar15,auVar15);
  auVar19 = _vmulbc(auVar15,auVar15);
  auVar20 = _vmulbc(auVar15,auVar15);
  auVar16 = _vmulbc(auVar15,auVar15);
  auVar21 = _vmulbc(auVar15,auVar15);
  fStack_11c = auVar14._4_4_;
  fVar6 = fStack_11c;
  auVar16 = _qmfc2(auVar16._0_4_);
  auVar14 = _sqc2(auVar17);
  fVar12 = 1.0 - fStack_11c;
  auVar17 = _vmulbc(auVar15,auVar15);
  fVar7 = 1.0 - auVar16._0_4_;
  auVar16 = _vmulbc(auVar15,auVar15);
  fStack_11c = auVar14._4_4_;
  auVar16 = _qmfc2(auVar16._0_4_);
  auVar14 = _sqc2(auVar18);
  auVar15 = _qmfc2(auVar17._0_4_);
  _lqc2(auStack_150);
  _lqc2(auStack_140);
  fStack_118 = auVar14._8_4_;
  auVar14 = _sqc2(auVar19);
  auVar17 = _qmtc2(fVar12 - fStack_118);
  fStack_114 = auVar14._12_4_;
  auVar14 = _sqc2(auVar20);
  auVar18 = _vaddbc(in_vf0,auVar17);
  fVar13 = fStack_11c - fStack_114;
  fStack_11c = fStack_11c + fStack_114;
  fStack_114 = auVar14._12_4_;
  auVar14 = _sqc2(auVar21);
  _vmove(auVar18);
  auVar17 = _qmtc2(auVar16._0_4_ + fStack_114);
  fVar12 = auVar16._0_4_ - fStack_114;
  fStack_114 = auVar14._12_4_;
  auVar17 = _vaddbc(in_vf0,auVar17);
  auVar19 = _qmtc2(fVar7 - fStack_118);
  _vmove(auVar17);
  _sqc2(auVar18);
  auVar14 = _qmtc2(auVar15._0_4_ - fStack_114);
  auVar18 = _vaddbc(in_vf0,auVar14);
  auVar16 = _qmtc2(auVar15._0_4_ + fStack_114);
  _vmove(auVar18);
  auVar14 = _qmtc2(fVar13);
  auVar20 = _vaddbc(in_vf0,auVar19);
  auVar21 = _vaddbc(in_vf0,auVar14);
  auVar15 = _qmtc2(fVar12);
  _vmove(auVar21);
  auVar14 = _qmtc2(fVar7 - fVar6);
  auVar19 = _vaddbc(in_vf0,auVar16);
  auVar22 = _vaddbc(in_vf0,auVar14);
  _sqc2(auVar17);
  _sqc2(auVar18);
  auVar14 = _qmtc2(fStack_11c);
  _vmove(auVar19);
  _vmove(auVar20);
  auVar16 = _vaddbc(in_vf0,auVar15);
  auVar14 = _vaddbc(in_vf0,auVar14);
  _sqc2(auVar19);
  _sqc2(auVar20);
  pauVar1 = (undefined1 (*) [16])(param_3 + 4);
  _sqc2(auVar21);
  _sqc2(auVar16);
  _sqc2(auVar14);
  _sqc2(auVar22);
  auStack_1a0 = _sqc2(auVar16);
  auStack_190 = _sqc2(auVar14);
  auStack_180 = _sqc2(auVar22);
  _sqc2(auVar16);
  _sqc2(auVar14);
  _sqc2(auVar22);
  auVar15 = _lqc2(*(undefined1 (*) [16])(param_3 + 8));
  auStack_260 = _sqc2(auVar16);
  auStack_250 = _sqc2(auVar14);
  _sqc2(auVar15);
  _sqc2(auVar16);
  _sqc2(auVar14);
  _sqc2(auVar22);
  _sqc2(auVar15);
  auStack_240 = _sqc2(auVar22);
  _auStack_230 = _sqc2(auVar15);
  if (fVar11 != 0.0) {
    auVar16 = _qmtc2(0x3e99999a);
    auVar14 = _qmtc2(fVar11 * 50.0 * param_1);
    auVar14 = _vmulbc(auVar22,auVar14);
    auVar14 = _vmulbc(auVar14,auVar16);
    auVar14 = _vadd(auVar15,auVar14);
    _auStack_230 = _sqc2(auVar14);
  }
  if (-fVar8 != 0.0) {
    auVar17 = _qmtc2(0x3f19999a);
    auVar16 = _lqc2(auStack_260);
    auVar15 = _lqc2(_auStack_230);
    auVar14 = _qmtc2(-fVar8 * 50.0 * param_1);
    auVar14 = _vmulbc(auVar16,auVar14);
    auVar14 = _vmulbc(auVar14,auVar17);
    auVar14 = _vadd(auVar15,auVar14);
    _auStack_230 = _sqc2(auVar14);
  }
  auVar14 = _vaddbc(in_vf0,in_vf0);
  if (-fVar9 != 0.0) {
    auVar16 = _pextlw(0,0);
    auVar16 = _pextlw(0x3f800000,auVar16._0_8_);
    auVar15 = _vmaxbc(in_vf0,in_vf0);
    auVar28 = _qmtc2(auVar16._0_4_);
    auVar16 = _qmtc2(-fVar9 * param_1 * 90.0 * 0.017453292);
    auVar16 = _vaddbc(in_vf0,auVar16);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar16 = _vsubi(auVar16,in_vuI);
    auVar16 = _vabs(auVar16);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar16,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar15,in_vuI);
    _vmaddai(auVar15,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar16,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar16 = _vmsubi(auVar15,in_vuI);
    auVar16 = _vabs(auVar16);
    _ctc2(0x3e800000);
    _vnop();
    auVar16 = _vsubi(auVar16,in_vuI);
    auVar15 = _vmul(auVar28,auVar28);
    auVar20 = _vmul(auVar16,auVar16);
    _ctc2(0xc2992661);
    _vnop();
    auVar18 = _vmuli(auVar16,in_vuI);
    _vaddabc(auVar15,auVar15);
    auVar17 = _vmaddbc(auVar14,auVar15);
    auVar15 = _vmove(auVar28);
    auVar24 = _vmul(auVar20,auVar20);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar17);
    uVar29 = _vwaitq();
    auVar15 = _vmulq(auVar15,uVar29);
    _ctc2(0x42a33457);
    _vnop();
    auVar22 = _vmuli(auVar16,in_vuI);
    auVar17 = _vmul(auVar24,auVar24);
    auVar18 = _vmul(auVar18,auVar20);
    _ctc2(0xc2255de0);
    _vnop();
    auVar23 = _vmuli(auVar16,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar21 = _vmuli(auVar16,in_vuI);
    auVar19 = _vmulbc(auVar15,auVar15);
    _vmula(auVar23,auVar20);
    _vmadda(auVar18,auVar24);
    _ctc2(0x40c90fda);
    _vmadda(auVar22,auVar24);
    _vmaddai(auVar16,in_vuI);
    auVar16 = _vmadd(auVar21,auVar17);
    auVar20 = _qmtc2(0x3f800000);
    _lqc2(auStack_100);
    auVar17 = _vmul(auVar15,auVar15);
    _vaddbc(in_vf0,auVar19);
    _lqc2(auStack_110);
    auVar18 = _vmulbc(auVar15,auVar15);
    auVar22 = _vaddbc(in_vf0,auVar20);
    _vaddbc(in_vf0,auVar18);
    auVar16 = _vsubbc(auVar22,auVar16);
    auVar19 = _vmulbc(auVar15,auVar15);
    auVar18 = _vsub(in_vf0,auVar17);
    auVar16 = _vaddbc(in_vf0,auVar16);
    auVar17 = _vaddbc(in_vf0,auVar19);
    auVar18 = _vaddbc(auVar18,auVar22);
    auVar15 = _vmulbc(auVar15,auVar16);
    auVar17 = _vmulbc(auVar17,auVar16);
    auVar18 = _vmulbc(auVar18,auVar16);
    _lqc2(auStack_1a0);
    auVar19 = _vsubbc(auVar22,auVar18);
    _lqc2(auStack_190);
    auVar16 = _vsubbc(auVar17,auVar15);
    _lqc2(auStack_180);
    auVar21 = _vaddbc(in_vf0,auVar16);
    auVar16 = _vaddbc(auVar17,auVar15);
    auVar20 = _vaddbc(in_vf0,auVar19);
    auVar23 = _vaddbc(in_vf0,auVar16);
    auVar16 = _vaddbc(auVar17,auVar15);
    _vmove(auVar20);
    auVar19 = _vsubbc(auVar22,auVar18);
    auVar24 = _vaddbc(in_vf0,auVar16);
    _vmove(auVar21);
    _sqc2(auVar20);
    auVar20 = _vsubbc(auVar17,auVar15);
    auVar25 = _vaddbc(in_vf0,auVar19);
    auVar16 = _vsubbc(auVar17,auVar15);
    _vmove(auVar23);
    auVar15 = _vaddbc(auVar17,auVar15);
    _sqc2(auVar21);
    auVar26 = _vaddbc(in_vf0,auVar20);
    _vmove(auVar24);
    auVar17 = _vsubbc(auVar22,auVar18);
    _vmove(auVar25);
    auVar18 = _vaddbc(in_vf0,auVar16);
    auVar19 = _vaddbc(in_vf0,auVar15);
    _vmove(auVar26);
    auVar15 = _vadd(in_vf0,in_vf0);
    _sqc2(auVar23);
    auVar20 = _vaddbc(in_vf0,auVar17);
    _sqc2(auVar24);
    _sqc2(auVar25);
    auVar17 = _lqc2(auStack_260);
    auVar16 = _lqc2(auStack_250);
    _vmulabc(auVar18,auVar17);
    _vmaddabc(auVar19,auVar17);
    auVar17 = _vmaddbc(auVar20,auVar17);
    _vmulabc(auVar18,auVar16);
    _vmaddabc(auVar19,auVar16);
    auVar21 = _vmaddbc(auVar20,auVar16);
    _sqc2(auVar26);
    auVar16 = _lqc2(auStack_240);
    _sqc2(auVar28);
    _vmulabc(auVar18,auVar16);
    _vmaddabc(auVar19,auVar16);
    auVar16 = _vmaddbc(auVar20,auVar16);
    _vmulabc(auVar18,auVar15);
    _vmaddabc(auVar19,auVar15);
    _vmaddabc(auVar20,auVar15);
    auVar22 = _vmaddbc(auVar15,in_vf0);
    _sqc2(auVar15);
    _sqc2(auVar18);
    _sqc2(auVar19);
    _sqc2(auVar15);
    _sqc2(auVar20);
    _sqc2(auVar15);
    _sqc2(auVar15);
    _sqc2(auVar18);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar15);
    _sqc2(auVar18);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar15);
    auStack_1a0 = _sqc2(auVar17);
    auStack_190 = _sqc2(auVar21);
    auStack_180 = _sqc2(auVar16);
    _sqc2(auVar22);
    _sqc2(auVar17);
    _sqc2(auVar22);
    auStack_260 = _sqc2(auVar17);
    auStack_250 = _sqc2(auVar21);
    auStack_240 = _sqc2(auVar16);
    _sqc2(auVar21);
    _sqc2(auVar16);
  }
  if (-fVar10 != 0.0) {
    auVar17 = _vmaxbc(in_vf0,in_vf0);
    auVar27 = _lqc2(auStack_260);
    auVar16 = _qmtc2(-fVar10 * param_1 * 90.0 * 0.017453292);
    auVar15 = _vmul(auVar27,auVar27);
    auVar16 = _vaddbc(in_vf0,auVar16);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar16 = _vsubi(auVar16,in_vuI);
    _vaddabc(auVar15,auVar15);
    auVar18 = _vmaddbc(auVar14,auVar15);
    auVar16 = _vabs(auVar16);
    auVar15 = _vmove(auVar27);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar16,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar17,in_vuI);
    _vmaddai(auVar17,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar16,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar16 = _vmsubi(auVar17,in_vuI);
    auVar16 = _vabs(auVar16);
    _ctc2(0x3e800000);
    _vnop();
    auVar16 = _vsubi(auVar16,in_vuI);
    auVar20 = _vmul(auVar16,auVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar18);
    uVar29 = _vwaitq();
    auVar15 = _vmulq(auVar15,uVar29);
    auVar24 = _vmul(auVar20,auVar20);
    _ctc2(0xc2992661);
    _vnop();
    auVar17 = _vmuli(auVar16,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar22 = _vmuli(auVar16,in_vuI);
    auVar18 = _vmul(auVar24,auVar24);
    auVar17 = _vmul(auVar17,auVar20);
    _ctc2(0xc2255de0);
    _vnop();
    auVar23 = _vmuli(auVar16,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar21 = _vmuli(auVar16,in_vuI);
    auVar19 = _vmulbc(auVar15,auVar15);
    _vmula(auVar23,auVar20);
    _vmadda(auVar17,auVar24);
    _ctc2(0x40c90fda);
    _vmadda(auVar22,auVar24);
    _vmaddai(auVar16,in_vuI);
    auVar16 = _vmadd(auVar21,auVar18);
    auVar20 = _qmtc2(0x3f800000);
    _lqc2(auStack_e0);
    auVar17 = _vmul(auVar15,auVar15);
    _vaddbc(in_vf0,auVar19);
    _lqc2(auStack_f0);
    auVar18 = _vmulbc(auVar15,auVar15);
    auVar21 = _vaddbc(in_vf0,auVar20);
    _vaddbc(in_vf0,auVar18);
    auVar16 = _vsubbc(auVar21,auVar16);
    auVar19 = _vmulbc(auVar15,auVar15);
    auVar18 = _vsub(in_vf0,auVar17);
    auVar16 = _vaddbc(in_vf0,auVar16);
    auVar17 = _vaddbc(in_vf0,auVar19);
    auVar18 = _vaddbc(auVar18,auVar21);
    auVar15 = _vmulbc(auVar15,auVar16);
    auVar17 = _vmulbc(auVar17,auVar16);
    auVar18 = _vmulbc(auVar18,auVar16);
    _lqc2(auStack_1a0);
    auVar20 = _vsubbc(auVar21,auVar18);
    _lqc2(auStack_190);
    auVar16 = _vsubbc(auVar17,auVar15);
    _lqc2(auStack_180);
    auVar19 = _vaddbc(auVar17,auVar15);
    auVar24 = _vaddbc(in_vf0,auVar20);
    auVar20 = _vaddbc(in_vf0,auVar16);
    auVar23 = _vaddbc(in_vf0,auVar19);
    auVar16 = _vaddbc(auVar17,auVar15);
    auVar19 = _vsubbc(auVar21,auVar18);
    _vmove(auVar24);
    auVar26 = _vaddbc(in_vf0,auVar16);
    auVar25 = _vsubbc(auVar17,auVar15);
    auVar22 = _vsubbc(auVar21,auVar18);
    _vmove(auVar20);
    _vmove(auVar23);
    auVar16 = _vsubbc(auVar17,auVar15);
    _sqc2(auVar20);
    auVar28 = _vaddbc(in_vf0,auVar19);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _vmove(auVar26);
    _sqc2(auVar24);
    auVar18 = _vaddbc(in_vf0,auVar16);
    _sqc2(auVar23);
    auVar16 = _vaddbc(auVar17,auVar15);
    _vmove(auVar28);
    auVar21 = _vadd(in_vf0,in_vf0);
    _vmove(auVar25);
    auVar19 = _vaddbc(in_vf0,auVar16);
    auVar20 = _vaddbc(in_vf0,auVar22);
    _sqc2(auVar26);
    _sqc2(auVar28);
    _sqc2(auVar25);
    auVar16 = _lqc2(auStack_250);
    auVar15 = _lqc2(auStack_240);
    _vmulabc(auVar18,auVar27);
    _vmaddabc(auVar19,auVar27);
    auVar17 = _vmaddbc(auVar20,auVar27);
    _vmulabc(auVar18,auVar16);
    _vmaddabc(auVar19,auVar16);
    auVar16 = _vmaddbc(auVar20,auVar16);
    _vmulabc(auVar18,auVar15);
    _vmaddabc(auVar19,auVar15);
    auVar15 = _vmaddbc(auVar20,auVar15);
    _vmulabc(auVar18,auVar21);
    _vmaddabc(auVar19,auVar21);
    _vmaddabc(auVar20,auVar21);
    auVar22 = _vmaddbc(auVar21,in_vf0);
    _sqc2(auVar21);
    _sqc2(auVar18);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar18);
    _sqc2(auVar21);
    _sqc2(auVar21);
    _sqc2(auVar21);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar21);
    _sqc2(auVar18);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar21);
    auStack_1a0 = _sqc2(auVar17);
    auStack_190 = _sqc2(auVar16);
    auStack_180 = _sqc2(auVar15);
    _sqc2(auVar22);
    _sqc2(auVar17);
    _sqc2(auVar16);
    _sqc2(auVar22);
    auStack_260 = _sqc2(auVar17);
    auStack_250 = _sqc2(auVar16);
    auStack_240 = _sqc2(auVar15);
    _sqc2(auVar15);
  }
  if ((fVar4 == 0.0) || (ABS(fVar4) <= ABS(fVar3))) {
    if (fVar3 != 0.0) {
      auVar17 = _qmtc2(fVar3);
      auVar15 = _lqc2(auStack_250);
      auVar16 = _qmtc2(param_1);
      auVar15 = _vmulbc(auVar15,auVar17);
      auVar15 = _vmulbc(auVar15,auVar16);
      auVar17 = _qmtc2(0x41a00000);
      auVar16 = _lqc2(_auStack_230);
      auVar15 = _vmulbc(auVar15,auVar17);
      auVar16 = _vadd(auVar16,auVar15);
      _auStack_230 = _sqc2(auVar16);
    }
  }
  else {
    auVar17 = _vmaxbc(in_vf0,in_vf0);
    auVar28 = _lqc2(auStack_240);
    auVar16 = _qmtc2(fVar4 * param_1 * 90.0 * 0.017453292);
    auVar15 = _vmul(auVar28,auVar28);
    auVar16 = _vaddbc(in_vf0,auVar16);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar16 = _vsubi(auVar16,in_vuI);
    _vaddabc(auVar15,auVar15);
    auVar18 = _vmaddbc(auVar14,auVar15);
    auVar16 = _vabs(auVar16);
    auVar15 = _vmove(auVar28);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar16,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar17,in_vuI);
    _vmaddai(auVar17,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar16,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar16 = _vmsubi(auVar17,in_vuI);
    auVar16 = _vabs(auVar16);
    _ctc2(0x3e800000);
    _vnop();
    auVar16 = _vsubi(auVar16,in_vuI);
    auVar20 = _vmul(auVar16,auVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar18);
    uVar29 = _vwaitq();
    auVar15 = _vmulq(auVar15,uVar29);
    auVar24 = _vmul(auVar20,auVar20);
    _ctc2(0xc2992661);
    _vnop();
    auVar17 = _vmuli(auVar16,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar22 = _vmuli(auVar16,in_vuI);
    auVar18 = _vmul(auVar24,auVar24);
    auVar17 = _vmul(auVar17,auVar20);
    _ctc2(0xc2255de0);
    _vnop();
    auVar23 = _vmuli(auVar16,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar21 = _vmuli(auVar16,in_vuI);
    auVar19 = _vmulbc(auVar15,auVar15);
    _vmula(auVar23,auVar20);
    _vmadda(auVar17,auVar24);
    _ctc2(0x40c90fda);
    _vmadda(auVar22,auVar24);
    _vmaddai(auVar16,in_vuI);
    auVar16 = _vmadd(auVar21,auVar18);
    auVar20 = _qmtc2(0x3f800000);
    _lqc2(auStack_c0);
    auVar17 = _vmul(auVar15,auVar15);
    _vaddbc(in_vf0,auVar19);
    _lqc2(auStack_d0);
    auVar18 = _vmulbc(auVar15,auVar15);
    auVar21 = _vaddbc(in_vf0,auVar20);
    _vaddbc(in_vf0,auVar18);
    auVar16 = _vsubbc(auVar21,auVar16);
    auVar19 = _vmulbc(auVar15,auVar15);
    auVar18 = _vsub(in_vf0,auVar17);
    auVar16 = _vaddbc(in_vf0,auVar16);
    auVar17 = _vaddbc(in_vf0,auVar19);
    auVar18 = _vaddbc(auVar18,auVar21);
    auVar15 = _vmulbc(auVar15,auVar16);
    auVar17 = _vmulbc(auVar17,auVar16);
    auVar18 = _vmulbc(auVar18,auVar16);
    _lqc2(auStack_1a0);
    auVar20 = _vsubbc(auVar21,auVar18);
    _lqc2(auStack_190);
    auVar16 = _vsubbc(auVar17,auVar15);
    _lqc2(auStack_180);
    auVar19 = _vaddbc(auVar17,auVar15);
    auVar23 = _vaddbc(in_vf0,auVar20);
    auVar20 = _vaddbc(in_vf0,auVar16);
    auVar22 = _vaddbc(in_vf0,auVar19);
    auVar16 = _vaddbc(auVar17,auVar15);
    auVar19 = _vsubbc(auVar21,auVar18);
    _vmove(auVar23);
    auVar25 = _vaddbc(in_vf0,auVar16);
    auVar24 = _vsubbc(auVar17,auVar15);
    auVar21 = _vsubbc(auVar21,auVar18);
    _vmove(auVar20);
    _vmove(auVar22);
    auVar16 = _vsubbc(auVar17,auVar15);
    _sqc2(auVar20);
    auVar26 = _vaddbc(in_vf0,auVar19);
    auVar24 = _vaddbc(in_vf0,auVar24);
    _vmove(auVar25);
    _sqc2(auVar23);
    auVar18 = _vaddbc(in_vf0,auVar16);
    _sqc2(auVar22);
    auVar16 = _vaddbc(auVar17,auVar15);
    _vmove(auVar26);
    auVar20 = _vadd(in_vf0,in_vf0);
    _vmove(auVar24);
    auVar17 = _vaddbc(in_vf0,auVar16);
    auVar19 = _vaddbc(in_vf0,auVar21);
    _sqc2(auVar25);
    _sqc2(auVar26);
    _vmulabc(auVar18,auVar28);
    _vmaddabc(auVar17,auVar28);
    auVar21 = _vmaddbc(auVar19,auVar28);
    _vmulabc(auVar18,auVar20);
    _vmaddabc(auVar17,auVar20);
    _vmaddabc(auVar19,auVar20);
    auVar22 = _vmaddbc(auVar20,in_vf0);
    _sqc2(auVar24);
    auVar15 = _lqc2(auStack_260);
    auVar16 = _lqc2(auStack_250);
    _vmulabc(auVar18,auVar15);
    _vmaddabc(auVar17,auVar15);
    auVar15 = _vmaddbc(auVar19,auVar15);
    _vmulabc(auVar18,auVar16);
    _vmaddabc(auVar17,auVar16);
    auVar16 = _vmaddbc(auVar19,auVar16);
    _sqc2(auVar20);
    _sqc2(auVar18);
    _sqc2(auVar17);
    _sqc2(auVar19);
    _sqc2(auVar18);
    _sqc2(auVar20);
    _sqc2(auVar20);
    _sqc2(auVar20);
    _sqc2(auVar17);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar18);
    _sqc2(auVar17);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar15);
    _sqc2(auVar16);
    _sqc2(auVar21);
    _sqc2(auVar22);
    _sqc2(auVar15);
    _sqc2(auVar16);
    _sqc2(auVar22);
    auStack_260 = _sqc2(auVar15);
    auStack_250 = _sqc2(auVar16);
    auStack_240 = _sqc2(auVar21);
    _sqc2(auVar21);
  }
  auVar16 = _lqc2(auStack_260);
  if (fVar5 != 0.0) {
    fVar5 = *param_3 - fVar5;
    fVar8 = (float)((int)fVar5 * (uint)(2.0 < fVar5) | (uint)(2.0 >= fVar5) * 0x40000000);
    *param_3 = (float)((int)fVar8 * (uint)(fVar8 < 120.0) | (uint)(fVar8 >= 120.0) * 0x42f00000);
    auVar16 = _lqc2(auStack_260);
  }
  auVar18 = _lqc2(auStack_250);
  auVar15 = _vmul(auVar16,auVar16);
  _vaddabc(auVar15,auVar15);
  auVar15 = _vmaddbc(auVar14,auVar15);
  auVar19 = _lqc2(auStack_240);
  auVar21 = _vmove(auVar16);
  auVar17 = _vmul(auVar18,auVar18);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar15);
  auVar16 = _qmfc2(auVar15._0_4_);
  auVar20 = _qmtc2(SQRT(auVar16._0_4_));
  uVar29 = _vwaitq();
  auVar22 = _vmulq(auVar21,uVar29);
  auVar18 = _vmove(auVar18);
  _vaddabc(auVar17,auVar17);
  auVar16 = _vmaddbc(auVar14,auVar17);
  auVar15 = _vmul(auVar19,auVar19);
  _lqc2(auStack_b0);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  auVar17 = _qmtc2(SQRT(auVar16._0_4_));
  uVar29 = _vwaitq();
  auVar21 = _vmulq(auVar18,uVar29);
  _vaddbc(in_vf0,auVar20);
  _vaddabc(auVar15,auVar15);
  auVar16 = _vmaddbc(auVar14,auVar15);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  auVar16 = _qmtc2(SQRT(auVar16._0_4_));
  uVar29 = _vwaitq();
  auVar18 = _vmulq(auVar19,uVar29);
  _vaddbc(in_vf0,auVar17);
  auVar15 = _vaddbc(in_vf0,auVar16);
  auStack_260 = _sqc2(auVar22);
  auVar16 = _qmfc2(auVar15._0_4_);
  auStack_250 = _sqc2(auVar21);
  auStack_240 = _sqc2(auVar18);
  if (auVar16._0_4_ <= 0.0) {
LAB_0011594c:
    _vopmula(auVar21,auVar18);
    auVar15 = _vopmsub(auVar18,auVar21);
    auVar16 = _vmul(auVar15,auVar15);
    _sqc2(auVar15);
    _vaddabc(auVar16,auVar16);
    auVar16 = _vmaddbc(auVar14,auVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar16);
    uVar29 = _vwaitq();
    auVar16 = _vmulq(auVar15,uVar29);
    _vopmula(auVar16,auVar21);
    auVar15 = _vopmsub(auVar21,auVar16);
    auStack_260 = _sqc2(auVar16);
    auVar16 = _vmul(auVar15,auVar15);
    _sqc2(auVar15);
    _vaddabc(auVar16,auVar16);
    auVar14 = _vmaddbc(auVar14,auVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar14);
    uVar29 = _vwaitq();
    auVar14 = _vmulq(auVar15,uVar29);
    auStack_240 = _sqc2(auVar14);
    goto LAB_001159b4;
  }
  auVar16 = _sqc2(auVar15);
  fStack_21c = auVar16._4_4_;
  if (0.0 < fStack_21c) {
    auVar16 = _sqc2(auVar15);
    fStack_218 = auVar16._8_4_;
    if (0.0 < fStack_218) {
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vmul(auVar21,auVar18);
      _vaddabc(auVar16,auVar16);
      auVar16 = _vmaddbc(auVar17,auVar16);
      _lqc2(auStack_a0);
      _vaddbc(in_vf0,auVar16);
      auVar16 = _vmul(auVar18,auVar22);
      _vaddabc(auVar16,auVar16);
      auVar15 = _vmaddbc(auVar17,auVar16);
      auVar16 = _vmul(auVar22,auVar21);
      _vaddbc(in_vf0,auVar15);
      _vaddabc(auVar16,auVar16);
      auVar16 = _vmaddbc(auVar17,auVar16);
      auVar16 = _vaddbc(in_vf0,auVar16);
      auVar19 = _vabs(auVar16);
      auVar17 = _vmove(auVar19);
      auVar15 = _qmfc2(auVar17._0_4_);
      auVar16 = _sqc2(auVar17);
      fStack_21c = auVar16._4_4_;
      if (fStack_21c <= auVar15._0_4_) {
        auVar16 = _sqc2(auVar19);
        fStack_21c = auVar16._4_4_;
        auVar16 = _sqc2(auVar19);
        fStack_218 = auVar16._8_4_;
        if (fStack_21c < fStack_218) goto LAB_001158e0;
      }
      else {
        auVar16 = _sqc2(auVar17);
        fStack_218 = auVar16._8_4_;
        if (auVar15._0_4_ < fStack_218) goto LAB_0011594c;
      }
    }
    _vopmula(auVar22,auVar21);
    auVar15 = _vopmsub(auVar21,auVar22);
    auVar16 = _vmul(auVar15,auVar15);
    _sqc2(auVar15);
    _vaddabc(auVar16,auVar16);
    auVar16 = _vmaddbc(auVar14,auVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar16);
    uVar29 = _vwaitq();
    auVar16 = _vmulq(auVar15,uVar29);
    _vopmula(auVar16,auVar22);
    auVar15 = _vopmsub(auVar22,auVar16);
    auStack_240 = _sqc2(auVar16);
    auVar16 = _vmul(auVar15,auVar15);
    _sqc2(auVar15);
    _vaddabc(auVar16,auVar16);
    auVar14 = _vmaddbc(auVar14,auVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar14);
    uVar29 = _vwaitq();
    auVar14 = _vmulq(auVar15,uVar29);
    auStack_250 = _sqc2(auVar14);
  }
  else {
LAB_001158e0:
    _vopmula(auVar18,auVar22);
    auVar15 = _vopmsub(auVar22,auVar18);
    auVar16 = _vmul(auVar15,auVar15);
    _sqc2(auVar15);
    _vaddabc(auVar16,auVar16);
    auVar16 = _vmaddbc(auVar14,auVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar16);
    uVar29 = _vwaitq();
    auVar16 = _vmulq(auVar15,uVar29);
    _vopmula(auVar16,auVar18);
    auVar15 = _vopmsub(auVar18,auVar16);
    auStack_250 = _sqc2(auVar16);
    auVar16 = _vmul(auVar15,auVar15);
    _sqc2(auVar15);
    _vaddabc(auVar16,auVar16);
    auVar14 = _vmaddbc(auVar14,auVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar14);
    uVar29 = _vwaitq();
    auVar14 = _vmulq(auVar15,uVar29);
    auStack_260 = _sqc2(auVar14);
  }
LAB_001159b4:
  auVar16 = _lqc2(auStack_250);
  auVar17 = _lqc2(auStack_260);
  auVar14 = _vaddbc(auVar17,auVar16);
  auVar15 = _lqc2(auStack_240);
  auVar14 = _vaddbc(auVar14,auVar15);
  auVar14 = _qmfc2(auVar14._0_4_);
  auVar18 = _vmove(auVar16);
  if (0.0 < auVar14._0_4_) {
    _lqc2(*(undefined1 (*) [16])(param_3 + 4));
    auVar16 = _vsubbc(auVar18,auVar15);
    auVar16 = _vaddbc(in_vf0,auVar16);
    auVar15 = _vsubbc(auVar15,auVar17);
    _vmove(auVar16);
    auVar19 = _vaddbc(in_vf0,auVar15);
    fVar8 = SQRT(auVar14._0_4_ + 1.0);
    auVar15 = _vsubbc(auVar17,auVar18);
    _vmove(auVar19);
    auVar14 = _sqc2(auVar16);
    *(undefined1 (*) [16])(param_3 + 4) = auVar14;
    auVar15 = _vaddbc(in_vf0,auVar15);
    auVar14 = _sqc2(auVar19);
    *(undefined1 (*) [16])(param_3 + 4) = auVar14;
    auVar16 = _qmtc2(0.5 / fVar8);
    auVar14 = _vmove(auVar15);
    auVar16 = _vmulbc(auVar14,auVar16);
    auVar14 = _sqc2(auVar15);
    *(undefined1 (*) [16])(param_3 + 4) = auVar14;
    auVar14 = _sqc2(auVar16);
    *(undefined1 (*) [16])(param_3 + 4) = auVar14;
    auVar14 = _qmtc2(fVar8 * 0.5);
    auVar14 = _vmulbc(in_vf0,auVar14);
    auVar14 = _sqc2(auVar14);
    *(undefined1 (*) [16])(param_3 + 4) = auVar14;
  }
  else {
    auVar14 = _sqc2(auVar16);
    auVar17 = _qmfc2(auVar17._0_4_);
    fStack_21c = auVar14._4_4_;
    if (fStack_21c <= auVar17._0_4_) {
      auVar14 = _sqc2(auVar15);
      fStack_218 = auVar14._8_4_;
      uVar2 = (uint)(auVar17._0_4_ < fStack_218) << 1;
    }
    else {
      auVar14 = _sqc2(auVar15);
      fStack_218 = auVar14._8_4_;
      auVar14 = _sqc2(auVar16);
      fStack_21c = auVar14._4_4_;
      uVar2 = 1;
      if (fStack_21c < fStack_218) {
        uVar2 = 2;
      }
    }
    if (uVar2 == 1) {
      auVar16 = _lqc2(auStack_260);
      auVar17 = _qmtc2(0x3f800000);
      auVar15 = _lqc2(auStack_240);
      auVar14 = _lqc2(auStack_250);
      auVar16 = _vaddbc(auVar15,auVar16);
      auVar14 = _vsubbc(auVar14,auVar16);
      _lqc2(*pauVar1);
      auVar14 = _vaddbc(auVar14,auVar17);
      auVar14 = _sqc2(auVar14);
      fStack_21c = auVar14._4_4_;
      auVar16 = _lqc2(auStack_240);
      auVar20 = _lqc2(auStack_260);
      auVar14 = _qmtc2(SQRT(fStack_21c) * 0.5);
      auVar18 = _qmtc2(0.5 / SQRT(fStack_21c));
      auVar19 = _vaddbc(in_vf0,auVar14);
      auVar14 = _vsubbc(auVar16,auVar20);
      auVar15 = _lqc2(auStack_250);
      auVar14 = _vmulbc(auVar14,auVar18);
      _vmove(auVar19);
      auVar16 = _vaddbc(auVar15,auVar16);
      auVar17 = _vmulbc(in_vf0,auVar14);
      auVar14 = _sqc2(auVar19);
      *pauVar1 = auVar14;
      auVar14 = _vmulbc(auVar16,auVar18);
      _vmove(auVar17);
      auVar16 = _vaddbc(in_vf0,auVar14);
      auVar14 = _sqc2(auVar17);
      *pauVar1 = auVar14;
      auVar15 = _vaddbc(auVar15,auVar20);
      auVar14 = _sqc2(auVar16);
      *pauVar1 = auVar14;
      auVar14 = _vmulbc(auVar15,auVar18);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar14 = _sqc2(auVar14);
      *pauVar1 = auVar14;
    }
    else if (uVar2 < 2) {
      if (uVar2 == 0) {
        auVar18 = _lqc2(auStack_240);
        auVar15 = _qmtc2(0x3f800000);
        auVar16 = _lqc2(auStack_250);
        auVar17 = _lqc2(auStack_260);
        auVar14 = _vaddbc(auVar16,auVar18);
        auVar14 = _vsubbc(auVar17,auVar14);
        auVar14 = _vaddbc(auVar14,auVar15);
        auVar19 = _vsubbc(auVar16,auVar18);
        auVar14 = _qmfc2(auVar14._0_4_);
        auVar15 = _vaddbc(auVar17,auVar16);
        _lqc2(*pauVar1);
        auVar17 = _vaddbc(auVar17,auVar18);
        auVar16 = _qmtc2(SQRT(auVar14._0_4_) * 0.5);
        auVar18 = _qmtc2(0.5 / SQRT(auVar14._0_4_));
        auVar20 = _vaddbc(in_vf0,auVar16);
        auVar14 = _vmulbc(auVar19,auVar18);
        _vmove(auVar20);
        auVar16 = _vmulbc(auVar15,auVar18);
        auVar19 = _vmulbc(in_vf0,auVar14);
        auVar14 = _sqc2(auVar20);
        *pauVar1 = auVar14;
        _vmove(auVar19);
        auVar15 = _vmulbc(auVar17,auVar18);
        auVar16 = _vaddbc(in_vf0,auVar16);
        auVar14 = _sqc2(auVar19);
        *pauVar1 = auVar14;
        auVar14 = _sqc2(auVar16);
        *pauVar1 = auVar14;
        auVar14 = _vaddbc(in_vf0,auVar15);
        auVar14 = _sqc2(auVar14);
        *pauVar1 = auVar14;
      }
    }
    else if (uVar2 == 2) {
      auVar16 = _lqc2(auStack_250);
      auVar17 = _qmtc2(0x3f800000);
      auVar15 = _lqc2(auStack_260);
      auVar14 = _lqc2(auStack_240);
      auVar16 = _vaddbc(auVar15,auVar16);
      auVar14 = _vsubbc(auVar14,auVar16);
      _lqc2(*pauVar1);
      auVar14 = _vaddbc(auVar14,auVar17);
      auVar14 = _sqc2(auVar14);
      fStack_218 = auVar14._8_4_;
      auVar16 = _lqc2(auStack_260);
      auVar20 = _lqc2(auStack_250);
      auVar14 = _qmtc2(SQRT(fStack_218) * 0.5);
      auVar18 = _qmtc2(0.5 / SQRT(fStack_218));
      auVar19 = _vaddbc(in_vf0,auVar14);
      auVar14 = _vsubbc(auVar16,auVar20);
      auVar15 = _lqc2(auStack_240);
      auVar14 = _vmulbc(auVar14,auVar18);
      _vmove(auVar19);
      auVar16 = _vaddbc(auVar15,auVar16);
      auVar17 = _vmulbc(in_vf0,auVar14);
      auVar14 = _sqc2(auVar19);
      *pauVar1 = auVar14;
      auVar14 = _vmulbc(auVar16,auVar18);
      _vmove(auVar17);
      auVar16 = _vaddbc(in_vf0,auVar14);
      auVar14 = _sqc2(auVar17);
      *pauVar1 = auVar14;
      auVar15 = _vaddbc(auVar15,auVar20);
      auVar14 = _sqc2(auVar16);
      *pauVar1 = auVar14;
      auVar14 = _vmulbc(auVar15,auVar18);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar14 = _sqc2(auVar14);
      *pauVar1 = auVar14;
    }
  }
  param_3[8] = (float)auStack_230._0_4_;
  param_3[9] = (float)auStack_230._4_4_;
  param_3[10] = fStack_228;
  param_3[0xb] = fStack_224;
  return;
}


// ==== FUN_00115d38 @ 00115d38 ====
// GLOBAL DAT_004432a0 undefined4
// GLOBAL DAT_004432a4 undefined4
// GLOBAL DAT_004432a8 undefined4
// GLOBAL DAT_004432ac undefined4

void FUN_00115d38(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar4 = DAT_004432ac;
  uVar3 = DAT_004432a8;
  uVar2 = DAT_004432a4;
  uVar1 = DAT_004432a0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  return;
}


// ==== FUN_00115d70 @ 00115d70 ====

void FUN_00115d70(undefined4 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  
  *(undefined4 *)(param_2 + 4) = param_3;
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined4 *)(param_2 + 8) = param_1;
  *(int *)(param_2 + 0x10) = (int)param_4;
  *(int *)(param_2 + 0x14) = (int)((ulong)param_4 >> 0x20);
  *(undefined4 *)(param_2 + 0x18) = in_a2_udw;
  *(undefined4 *)(param_2 + 0x1c) = in_register_0000006c;
  return;
}


// ==== FUN_00115d88 @ 00115d88 ====

void FUN_00115d88(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 8) = 0xbf800000;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_001168e0 @ 001168e0 ====

void FUN_001168e0(int param_1,undefined4 param_2)

{
  FUN_0027acc8();
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}


// ==== FUN_00116918 @ 00116918 ====

void FUN_00116918(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  FUN_00118188(param_1,param_4,param_5);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 200) = param_3;
  *(int *)(iVar1 + 0xc4) = (int)param_2;
  *(ulong *)(*(int *)(iVar1 + 0xc0) + 0x6f0) =
       *(ulong *)(*(int *)(iVar1 + 0xc0) + 0x6f0) & ~(1L << param_2);
  FUN_00110860(*(undefined4 *)(iVar1 + 0xc0),2);
  return;
}


// ==== FUN_00116990 @ 00116990 ====

undefined4 FUN_00116990(int param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_00118088();
  uVar13 = *(undefined4 *)(param_1 + 0x60);
  puVar5 = (undefined4 *)(param_1 + 0x20);
  puVar9 = param_2;
  do {
    puVar8 = puVar9;
    puVar10 = puVar5;
    uVar3 = *puVar8;
    uVar6 = *(undefined4 *)(puVar8 + 1);
    uVar7 = *(undefined4 *)((int)puVar8 + 0xc);
    uVar4 = puVar8[2];
    uVar11 = *(undefined4 *)(puVar8 + 3);
    uVar12 = *(undefined4 *)((int)puVar8 + 0x1c);
    *puVar10 = (int)uVar3;
    puVar10[1] = (int)((ulong)uVar3 >> 0x20);
    puVar10[2] = uVar6;
    puVar10[3] = uVar7;
    puVar10[4] = (int)uVar4;
    puVar10[5] = (int)((ulong)uVar4 >> 0x20);
    puVar10[6] = uVar11;
    puVar10[7] = uVar12;
    puVar9 = puVar8 + 4;
    puVar5 = puVar10 + 8;
  } while (puVar9 != param_2 + 8);
  uVar6 = *(undefined4 *)((int)puVar8 + 0x24);
  uVar7 = *(undefined4 *)(puVar8 + 5);
  uVar11 = *(undefined4 *)((int)puVar8 + 0x2c);
  puVar10[8] = *(undefined4 *)puVar9;
  puVar10[9] = uVar6;
  puVar10[10] = uVar7;
  puVar10[0xb] = uVar11;
  uVar6 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x60) = uVar13;
  puVar9 = param_2;
  puVar5 = (undefined4 *)(param_1 + 0x70);
  do {
    puVar10 = puVar5;
    puVar8 = puVar9;
    uVar3 = *puVar8;
    uVar13 = *(undefined4 *)(puVar8 + 1);
    uVar7 = *(undefined4 *)((int)puVar8 + 0xc);
    uVar11 = *(undefined4 *)(puVar8 + 2);
    uVar12 = *(undefined4 *)((int)puVar8 + 0x14);
    uVar14 = *(undefined4 *)(puVar8 + 3);
    uVar15 = *(undefined4 *)((int)puVar8 + 0x1c);
    *puVar10 = (int)uVar3;
    puVar10[1] = (int)((ulong)uVar3 >> 0x20);
    puVar10[2] = uVar13;
    puVar10[3] = uVar7;
    puVar10[4] = uVar11;
    puVar10[5] = uVar12;
    puVar10[6] = uVar14;
    puVar10[7] = uVar15;
    puVar9 = puVar8 + 4;
    puVar5 = puVar10 + 8;
  } while (puVar9 != param_2 + 8);
  uVar3 = *puVar9;
  uVar13 = *(undefined4 *)(puVar8 + 5);
  uVar7 = *(undefined4 *)((int)puVar8 + 0x2c);
  puVar10[8] = (int)uVar3;
  puVar10[9] = (int)((ulong)uVar3 >> 0x20);
  puVar10[10] = uVar13;
  puVar10[0xb] = uVar7;
  *(undefined4 *)(param_1 + 0xb0) = uVar6;
  piVar1 = *(int **)(*(int *)(param_1 + 0xc0) + *(int *)(param_1 + 200) * 4 + 0x1c0);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x1c))
            ((int)piVar1 + (int)*(short *)(iVar2 + 0x18),(undefined4 *)(param_1 + 0x70));
  return 1;
}


// ==== FUN_00116a78 @ 00116a78 ====

void FUN_00116a78(undefined4 param_1,undefined8 param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_80 [16];
  
  iVar8 = (int)param_2;
  piVar1 = *(int **)(*(int *)(iVar8 + 0xc0) + *(int *)(iVar8 + 200) * 4 + 0x1c0);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x2c))((int)piVar1 + (int)*(short *)(iVar2 + 0x28),iVar8 + 0x70);
  lVar5 = FUN_00118098(param_2);
  if (lVar5 == 0) {
    fVar7 = (float)FUN_001180d8(param_2,2);
    piVar1 = *(int **)(*(int *)(iVar8 + 0xc0) + *(int *)(iVar8 + 0xc4) * 4 + 0x1c0);
    iVar2 = *piVar1;
    (**(code **)(iVar2 + 0x2c))(param_1,(int)piVar1 + (int)*(short *)(iVar2 + 0x28),iVar8 + 0x20);
    auVar13 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x90));
    auVar14 = _qmtc2(fVar7);
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x40));
    _vaddabc(auVar12,in_vf0);
    _vmsubabc(auVar12,auVar14);
    auVar12 = _vmaddbc(auVar13,auVar14);
    auVar12 = _sqc2(auVar12);
    *(undefined1 (*) [16])(param_3 + 8) = auVar12;
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x30));
    fVar11 = 1.0 - fVar7;
    auVar19 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x80));
    auVar13 = _vmul(auVar14,auVar19);
    auVar12 = _vaddbc(auVar13,auVar13);
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar12 = _qmfc2(auVar12._0_4_);
    fVar6 = auVar12._0_4_;
    bVar3 = fVar6 < 0.0;
    if (bVar3) {
      fVar6 = -fVar6;
    }
    fVar10 = fVar7;
    if (fVar6 < 0.999) {
      auVar12 = _sqc2(auVar14);
      auVar13 = _sqc2(auVar19);
      fVar6 = (float)acosf();
      fVar7 = fVar6 * fVar6;
      fVar7 = 1.0 / (fVar6 + fVar7 * fVar6 *
                             (fVar7 * (fVar7 * (fVar7 * (fVar7 * (fVar7 * 1.589691e-10 +
                                                                 -2.505076e-08) + 2.7557314e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
      fVar11 = fVar11 * fVar6;
      fVar9 = fVar11 * fVar11;
      fVar11 = (fVar11 + fVar9 * fVar11 *
                         (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * 1.589691e-10 + -2.505076e-08)
                                                    + 2.7557314e-06) + -0.0001984127) + 0.008333334)
                         + -0.16666667)) * fVar7;
      fVar6 = fVar10 * fVar6;
      fVar9 = fVar6 * fVar6;
      fVar7 = (fVar6 + fVar9 * fVar6 *
                       (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * 1.589691e-10 + -2.505076e-08) +
                                                  2.7557314e-06) + -0.0001984127) + 0.008333334) +
                       -0.16666667)) * fVar7;
      auVar19 = _lqc2(auVar13);
      auVar14 = _lqc2(auVar12);
    }
    if (bVar3) {
      fVar7 = -fVar7;
    }
    auVar15 = _qmtc2(fVar11);
    auVar16 = _qmtc2(fVar7);
    auVar12 = _vmulbc(auVar19,auVar16);
    auVar13 = _vmulbc(auVar14,auVar15);
    auVar12 = _vaddbc(auVar13,auVar12);
    auVar17 = _vmulbc(auVar14,auVar15);
    _lqc2(auStack_80);
    auVar13 = _vmulbc(auVar19,auVar16);
    auVar12 = _vaddbc(in_vf0,auVar12);
    auVar18 = _vaddbc(auVar17,auVar13);
    auVar12 = _sqc2(auVar12);
    auVar17 = _vmulbc(auVar19,auVar16);
    auVar13 = _vmulbc(auVar14,auVar15);
    auVar19 = _vmulbc(auVar19,auVar16);
    auVar13 = _vaddbc(auVar13,auVar17);
    auVar14 = _vmulbc(auVar14,auVar15);
    _lqc2(auVar12);
    auVar12 = _vaddbc(auVar14,auVar19);
    _vaddbc(in_vf0,auVar18);
    _vaddbc(in_vf0,auVar13);
    auVar12 = _vmove(auVar12);
    auVar12 = _qmfc2(auVar12._0_4_);
    param_3[4] = auVar12._0_4_;
    param_3[5] = auVar12._4_4_;
    param_3[6] = auVar12._8_4_;
    param_3[7] = auVar12._12_4_;
    *param_3 = *(float *)(iVar8 + 0x20) +
               (*(float *)(iVar8 + 0x70) - *(float *)(iVar8 + 0x20)) * fVar10;
  }
  else {
    uVar4 = *(undefined8 *)(iVar8 + 0x80);
    fVar6 = *(float *)(iVar8 + 0x88);
    fVar7 = *(float *)(iVar8 + 0x8c);
    param_3[4] = (float)uVar4;
    param_3[5] = (float)((ulong)uVar4 >> 0x20);
    param_3[6] = fVar6;
    param_3[7] = fVar7;
    fVar6 = *(float *)(iVar8 + 0x94);
    fVar7 = *(float *)(iVar8 + 0x98);
    fVar11 = *(float *)(iVar8 + 0x9c);
    param_3[8] = *(float *)(iVar8 + 0x90);
    param_3[9] = fVar6;
    param_3[10] = fVar7;
    param_3[0xb] = fVar11;
    *param_3 = *(float *)(iVar8 + 0x70);
    *(ulong *)(*(int *)(iVar8 + 0xc0) + 0x6f0) =
         *(ulong *)(*(int *)(iVar8 + 0xc0) + 0x6f0) | 1L << (long)*(int *)(iVar8 + 200);
    FUN_001108d0(*(undefined4 *)(iVar8 + 0xc0));
  }
  return;
}


// ==== FUN_00116dc0 @ 00116dc0 ====

void FUN_00116dc0(void)

{
  FUN_00118090();
  return;
}


// ==== FUN_00116de8 @ 00116de8 ====

void FUN_00116de8(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_00116e00 @ 00116e00 ====

void FUN_00116e00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}


// ==== FUN_00116e28 @ 00116e28 ====

undefined4 FUN_00116e28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)param_1;
  uVar2 = FUN_0010f740(*(undefined4 *)(iVar1 + 0x1c));
  FUN_00118188(uVar2,param_1,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18));
  FUN_00118088(param_1,param_2);
  return 1;
}


// ==== FUN_00116e80 @ 00116e80 ====

void FUN_00116e80(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(float *)(param_1 + 0x24) == -1.0) {
      uVar1 = FUN_00118158();
      FUN_00110c90(uVar1,*(undefined4 *)(param_1 + 0x1c),param_2,1);
    }
    else {
      FUN_00110c90(*(undefined4 *)(param_1 + 0x1c),param_2,1);
    }
  }
  return;
}


// ==== FUN_00116f08 @ 00116f08 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_00116f08(undefined8 param_1,undefined8 param_2)

{
  FUN_0027f9c0(DAT_0040f4d0,1);
  *(undefined1 *)((int)param_1 + 0x20) = 0;
  FUN_00118090(param_1,param_2);
  return;
}


// ==== FUN_00116f60 @ 00116f60 ====

void FUN_00116f60(void)

{
  return;
}


// ==== FUN_00116f68 @ 00116f68 ====

undefined4 FUN_00116f68(undefined8 param_1,undefined8 param_2)

{
  FUN_00118088();
  FUN_00116fc8(param_1,param_2);
  return 1;
}


// ==== FUN_00116fa8 @ 00116fa8 ====

void FUN_00116fa8(void)

{
  FUN_00116fc8();
  return;
}


// ==== FUN_00116fc8 @ 00116fc8 ====
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116fc8(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fStack_15c;
  float fStack_158;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  auVar13 = _qmtc2(0x3fb504f3);
  pauVar5 = (undefined1 (*) [16])(param_2 + 0x10);
  auVar11 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
  auVar12 = _vmulbc(auVar11,auVar13);
  auVar11 = _vmulbc(auVar12,auVar12);
  auVar14 = _vmulbc(auVar12,auVar12);
  auVar11 = _sqc2(auVar11);
  auVar15 = _vmulbc(auVar12,auVar12);
  auVar16 = _vmulbc(auVar12,auVar12);
  auVar17 = _vmulbc(auVar12,auVar12);
  auVar13 = _vmulbc(auVar12,auVar12);
  auVar18 = _vmulbc(auVar12,auVar12);
  fStack_5c = auVar11._4_4_;
  fVar9 = fStack_5c;
  auVar13 = _qmfc2(auVar13._0_4_);
  auVar11 = _sqc2(auVar14);
  fVar7 = 1.0 - fStack_5c;
  auVar14 = _vmulbc(auVar12,auVar12);
  fVar6 = 1.0 - auVar13._0_4_;
  auVar13 = _qmfc2(auVar14._0_4_);
  fStack_5c = auVar11._4_4_;
  auVar12 = _vmulbc(auVar12,auVar12);
  auVar11 = _sqc2(auVar15);
  auVar12 = _qmfc2(auVar12._0_4_);
  _lqc2(auStack_a0);
  fStack_58 = auVar11._8_4_;
  auVar11 = _sqc2(auVar16);
  _lqc2(auStack_90);
  auVar14 = _qmtc2(fVar7 - fStack_58);
  fStack_54 = auVar11._12_4_;
  auVar11 = _sqc2(auVar17);
  auVar14 = _vaddbc(in_vf0,auVar14);
  _lqc2(auStack_80);
  fVar10 = fStack_5c - fStack_54;
  fStack_5c = fStack_5c + fStack_54;
  fStack_54 = auVar11._12_4_;
  auVar11 = _sqc2(auVar18);
  _vmove(auVar14);
  auVar15 = _qmtc2(auVar12._0_4_ + fStack_54);
  fVar7 = auVar12._0_4_ - fStack_54;
  fStack_54 = auVar11._12_4_;
  auVar12 = _vaddbc(in_vf0,auVar15);
  _sqc2(auVar14);
  auVar16 = _qmtc2(fVar6 - fStack_58);
  _vmove(auVar12);
  auVar11 = _qmtc2(auVar13._0_4_ - fStack_54);
  auVar14 = _vaddbc(in_vf0,auVar11);
  _sqc2(auVar12);
  auVar11 = _qmtc2(auVar13._0_4_ + fStack_54);
  _vmove(auVar14);
  auVar17 = _vaddbc(in_vf0,auVar11);
  auVar13 = _qmtc2(fVar10);
  auVar11 = _qmtc2(fVar7);
  _vmove(auVar17);
  auVar15 = _vaddbc(in_vf0,auVar11);
  _sqc2(auVar14);
  auVar14 = _vaddbc(in_vf0,auVar16);
  auVar16 = _vaddbc(in_vf0,auVar13);
  auVar13 = _qmtc2(fVar6 - fVar9);
  auVar11 = _qmtc2(fStack_5c);
  _vmove(auVar14);
  _vmove(auVar16);
  auVar12 = _vaddbc(in_vf0,auVar11);
  auVar13 = _vaddbc(in_vf0,auVar13);
  _sqc2(auVar17);
  _sqc2(auVar14);
  _sqc2(auVar16);
  _sqc2(auVar15);
  _sqc2(auVar12);
  _sqc2(auVar13);
  _sqc2(auVar15);
  _sqc2(auVar12);
  _sqc2(auVar13);
  _sqc2(auVar15);
  _sqc2(auVar12);
  _sqc2(auVar13);
  uVar1 = *(undefined8 *)*(undefined1 (*) [16])(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  auVar11 = *(undefined1 (*) [16])(param_2 + 0x20);
  _sqc2(auVar15);
  _sqc2(auVar12);
  _sqc2(auVar13);
  _sqc2(auVar15);
  _sqc2(auVar12);
  _sqc2(auVar13);
  uVar8 = FUN_001180d8();
  auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar13 = _qmtc2(uVar8);
  auVar12 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  _vaddabc(auVar12,in_vf0);
  _vmsubabc(auVar12,auVar13);
  auVar13 = _vmaddbc(auVar14,auVar13);
  auVar16 = _lqc2(auVar11);
  auVar13 = _vsub(auVar13,auVar16);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar13,auVar13);
  auVar12 = _lqc2(_DAT_004432c0);
  _vaddabc(auVar11,auVar11);
  auVar11 = _vmaddbc(auVar14,auVar11);
  auVar13 = _vmove(auVar13);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar11);
  uVar8 = _vwaitq();
  auVar18 = _vmulq(auVar13,uVar8);
  _vopmula(auVar12,auVar18);
  auVar13 = _vopmsub(auVar18,auVar12);
  _sqc2(auVar12);
  auVar11 = _vmul(auVar13,auVar13);
  auVar12 = _vmove(auVar13);
  _vaddabc(auVar11,auVar11);
  auVar11 = _vmaddbc(auVar14,auVar11);
  _sqc2(auVar13);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar11);
  uVar8 = _vwaitq();
  auVar15 = _vmulq(auVar12,uVar8);
  _vopmula(auVar18,auVar15);
  auVar17 = _vopmsub(auVar15,auVar18);
  _sqc2(auVar18);
  auVar11 = _vaddbc(auVar15,auVar17);
  _sqc2(auVar15);
  auVar11 = _vaddbc(auVar11,auVar18);
  _sqc2(auVar17);
  auVar14 = _qmfc2(auVar11._0_4_);
  _sqc2(auVar15);
  _sqc2(auVar17);
  _sqc2(auVar18);
  _sqc2(auVar16);
  _sqc2(auVar15);
  _sqc2(auVar17);
  _sqc2(auVar18);
  _sqc2(auVar16);
  auVar11 = _sqc2(auVar15);
  auVar13 = _sqc2(auVar17);
  auVar12 = _sqc2(auVar18);
  if (0.0 < auVar14._0_4_) {
    _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
    auVar11 = _vsubbc(auVar17,auVar18);
    auVar13 = _vaddbc(in_vf0,auVar11);
    auVar11 = _vsubbc(auVar18,auVar15);
    auVar15 = _vsubbc(auVar15,auVar17);
    fVar9 = SQRT(auVar14._0_4_ + 1.0);
    _vmove(auVar13);
    auVar12 = _vaddbc(in_vf0,auVar11);
    _vmove(auVar12);
    auVar11 = _sqc2(auVar13);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar11;
    auVar14 = _vaddbc(in_vf0,auVar15);
    auVar13 = _qmtc2(0.5 / fVar9);
    auVar11 = _sqc2(auVar12);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar11;
    auVar11 = _vmove(auVar14);
    auVar13 = _vmulbc(auVar11,auVar13);
    auVar11 = _sqc2(auVar14);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar11;
    auVar11 = _sqc2(auVar13);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar11;
    auVar11 = _qmtc2(fVar9 * 0.5);
    auVar11 = _vmulbc(in_vf0,auVar11);
    auVar11 = _sqc2(auVar11);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar11;
  }
  else {
    auVar14 = _sqc2(auVar17);
    auVar15 = _qmfc2(auVar15._0_4_);
    fStack_15c = auVar14._4_4_;
    if (fStack_15c <= auVar15._0_4_) {
      auVar14 = _sqc2(auVar18);
      fStack_158 = auVar14._8_4_;
      uVar4 = (uint)(auVar15._0_4_ < fStack_158) << 1;
    }
    else {
      auVar14 = _sqc2(auVar18);
      fStack_158 = auVar14._8_4_;
      auVar14 = _sqc2(auVar17);
      fStack_15c = auVar14._4_4_;
      uVar4 = 1;
      if (fStack_15c < fStack_158) {
        uVar4 = 2;
      }
    }
    if (uVar4 == 1) {
      auVar15 = _lqc2(auVar11);
      auVar17 = _qmtc2(0x3f800000);
      auVar16 = _lqc2(auVar12);
      auVar14 = _lqc2(auVar13);
      auVar15 = _vaddbc(auVar16,auVar15);
      auVar14 = _vsubbc(auVar14,auVar15);
      _lqc2(*pauVar5);
      auVar14 = _vaddbc(auVar14,auVar17);
      auVar14 = _sqc2(auVar14);
      fStack_15c = auVar14._4_4_;
      auVar14 = _lqc2(auVar12);
      auVar17 = _lqc2(auVar11);
      auVar11 = _qmtc2(SQRT(fStack_15c) * 0.5);
      auVar15 = _qmtc2(0.5 / SQRT(fStack_15c));
      auVar16 = _vaddbc(in_vf0,auVar11);
      auVar11 = _vsubbc(auVar14,auVar17);
      auVar12 = _lqc2(auVar13);
      auVar11 = _vmulbc(auVar11,auVar15);
      _vmove(auVar16);
      auVar13 = _vaddbc(auVar12,auVar14);
      auVar14 = _vmulbc(in_vf0,auVar11);
      auVar11 = _sqc2(auVar16);
      *pauVar5 = auVar11;
      auVar11 = _vmulbc(auVar13,auVar15);
      _vmove(auVar14);
      auVar13 = _vaddbc(in_vf0,auVar11);
      auVar11 = _sqc2(auVar14);
      *pauVar5 = auVar11;
      auVar12 = _vaddbc(auVar12,auVar17);
      auVar11 = _sqc2(auVar13);
      *pauVar5 = auVar11;
      auVar11 = _vmulbc(auVar12,auVar15);
      auVar11 = _vaddbc(in_vf0,auVar11);
      auVar11 = _sqc2(auVar11);
      *pauVar5 = auVar11;
    }
    else if (uVar4 < 2) {
      if (uVar4 == 0) {
        auVar15 = _lqc2(auVar12);
        auVar12 = _qmtc2(0x3f800000);
        auVar13 = _lqc2(auVar13);
        auVar14 = _lqc2(auVar11);
        auVar11 = _vaddbc(auVar13,auVar15);
        auVar11 = _vsubbc(auVar14,auVar11);
        auVar11 = _vaddbc(auVar11,auVar12);
        auVar16 = _vsubbc(auVar13,auVar15);
        auVar11 = _qmfc2(auVar11._0_4_);
        auVar12 = _vaddbc(auVar14,auVar13);
        _lqc2(*pauVar5);
        auVar14 = _vaddbc(auVar14,auVar15);
        auVar13 = _qmtc2(SQRT(auVar11._0_4_) * 0.5);
        auVar15 = _qmtc2(0.5 / SQRT(auVar11._0_4_));
        auVar17 = _vaddbc(in_vf0,auVar13);
        auVar11 = _vmulbc(auVar16,auVar15);
        _vmove(auVar17);
        auVar13 = _vmulbc(auVar12,auVar15);
        auVar16 = _vmulbc(in_vf0,auVar11);
        auVar11 = _sqc2(auVar17);
        *pauVar5 = auVar11;
        _vmove(auVar16);
        auVar12 = _vmulbc(auVar14,auVar15);
        auVar13 = _vaddbc(in_vf0,auVar13);
        auVar11 = _sqc2(auVar16);
        *pauVar5 = auVar11;
        auVar11 = _sqc2(auVar13);
        *pauVar5 = auVar11;
        auVar11 = _vaddbc(in_vf0,auVar12);
        auVar11 = _sqc2(auVar11);
        *pauVar5 = auVar11;
      }
    }
    else if (uVar4 == 2) {
      auVar15 = _lqc2(auVar13);
      auVar17 = _qmtc2(0x3f800000);
      auVar16 = _lqc2(auVar11);
      auVar14 = _lqc2(auVar12);
      auVar15 = _vaddbc(auVar16,auVar15);
      auVar14 = _vsubbc(auVar14,auVar15);
      _lqc2(*pauVar5);
      auVar14 = _vaddbc(auVar14,auVar17);
      auVar14 = _sqc2(auVar14);
      fStack_158 = auVar14._8_4_;
      auVar14 = _lqc2(auVar11);
      auVar17 = _lqc2(auVar13);
      auVar11 = _qmtc2(SQRT(fStack_158) * 0.5);
      auVar15 = _qmtc2(0.5 / SQRT(fStack_158));
      auVar16 = _vaddbc(in_vf0,auVar11);
      auVar11 = _vsubbc(auVar14,auVar17);
      auVar12 = _lqc2(auVar12);
      auVar11 = _vmulbc(auVar11,auVar15);
      _vmove(auVar16);
      auVar13 = _vaddbc(auVar12,auVar14);
      auVar14 = _vmulbc(in_vf0,auVar11);
      auVar11 = _sqc2(auVar16);
      *pauVar5 = auVar11;
      auVar11 = _vmulbc(auVar13,auVar15);
      _vmove(auVar14);
      auVar13 = _vaddbc(in_vf0,auVar11);
      auVar11 = _sqc2(auVar14);
      *pauVar5 = auVar11;
      auVar12 = _vaddbc(auVar12,auVar17);
      auVar11 = _sqc2(auVar13);
      *pauVar5 = auVar11;
      auVar11 = _vmulbc(auVar12,auVar15);
      auVar11 = _vaddbc(in_vf0,auVar11);
      auVar11 = _sqc2(auVar11);
      *pauVar5 = auVar11;
    }
  }
  *(int *)(param_2 + 0x20) = (int)uVar1;
  *(int *)(param_2 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  return;
}


// ==== FUN_001175c0 @ 001175c0 ====

void FUN_001175c0(void)

{
  FUN_00118090();
  return;
}


// ==== FUN_001175e0 @ 001175e0 ====

void FUN_001175e0(void)

{
  return;
}


// ==== FUN_001175e8 @ 001175e8 ====

void FUN_001175e8(int param_1)

{
  FUN_00118808(param_1 + 4);
  FUN_00116f60(param_1 + 0x20);
  FUN_00118240(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  return;
}


// ==== FUN_00117630 @ 00117630 ====

void FUN_00117630(int param_1)

{
  FUN_00118900(param_1 + 4);
  FUN_001175e0(param_1 + 0x20);
  FUN_00118340(param_1 + 0x60);
  return;
}


// ==== FUN_00117668 @ 00117668 ====

undefined4 FUN_00117668(int param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xa0) != '\0') {
    FUN_00118858(param_1 + 4);
  }
  if (*(char *)(param_1 + 0xa1) != '\0') {
    FUN_00116f68(param_1 + 0x20,param_2);
  }
  if (*(char *)(param_1 + 0xa2) != '\0') {
    FUN_00118290(param_1 + 0x60,param_2);
  }
  return 1;
}


// ==== FUN_001176d0 @ 001176d0 ====

void FUN_001176d0(int param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xa0) != '\0') {
    FUN_001188e0(param_1 + 4);
  }
  if (*(char *)(param_1 + 0xa1) != '\0') {
    FUN_001175c0(param_1 + 0x20,param_2);
  }
  if (*(char *)(param_1 + 0xa2) != '\0') {
    FUN_00118320(param_1 + 0x60,param_2);
  }
  return;
}


// ==== FUN_00117738 @ 00117738 ====

void FUN_00117738(undefined4 param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0xa0) == '\0') {
LAB_00117788:
    cVar1 = *(char *)(param_2 + 0xa1);
  }
  else {
    lVar2 = FUN_00118098(param_2 + 4);
    if (lVar2 == 0) {
      FUN_00118898(param_1,param_2 + 4,param_3);
      goto LAB_00117788;
    }
    cVar1 = *(char *)(param_2 + 0xa1);
  }
  if (cVar1 != '\0') {
    lVar2 = FUN_00118098(param_2 + 0x20);
    if (lVar2 != 0) {
      cVar1 = *(char *)(param_2 + 0xa2);
      goto LAB_001177b8;
    }
    FUN_00116fa8(param_1,param_2 + 0x20,param_3);
  }
  cVar1 = *(char *)(param_2 + 0xa2);
LAB_001177b8:
  if ((cVar1 != '\0') && (lVar2 = FUN_00118098(param_2 + 0x60), lVar2 == 0)) {
    FUN_001182d0(param_1,param_2 + 0x60,param_3);
  }
  return;
}


// ==== FUN_00117800 @ 00117800 ====

void FUN_00117800(int param_1)

{
  *(undefined1 *)(param_1 + 0xa0) = 1;
  FUN_00118810(param_1 + 4);
  return;
}


// ==== FUN_00117830 @ 00117830 ====

void FUN_00117830(int param_1)

{
  *(undefined1 *)(param_1 + 0xa2) = 1;
  FUN_00118248(param_1 + 0x60);
  return;
}


// ==== FUN_00117858 @ 00117858 ====

undefined4 FUN_00117858(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0xa0) == '\0') {
    cVar1 = *(char *)(param_1 + 0xa1);
  }
  else {
    lVar3 = FUN_00118098(param_1 + 4);
    if (lVar3 == 0) {
      return 0;
    }
    cVar1 = *(char *)(param_1 + 0xa1);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0xa2);
  }
  else {
    lVar3 = FUN_00118098(param_1 + 0x20);
    if (lVar3 == 0) {
      return 0;
    }
    cVar1 = *(char *)(param_1 + 0xa2);
  }
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    lVar3 = FUN_00118098(param_1 + 0x60);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_001178d8 @ 001178d8 ====

void FUN_001178d8(int param_1)

{
  FUN_0027acc8();
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


// ==== FUN_00117900 @ 00117900 ====

void FUN_00117900(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_4 + 0x10) = *param_5;
  *(undefined4 *)(param_4 + 0x14) = uVar1;
  *(undefined4 *)(param_4 + 0x18) = uVar2;
  *(undefined4 *)(param_4 + 0x1c) = uVar3;
  uVar1 = param_5[5];
  uVar2 = param_5[6];
  uVar3 = param_5[7];
  *(undefined4 *)(param_4 + 0x20) = param_5[4];
  *(undefined4 *)(param_4 + 0x24) = uVar1;
  *(undefined4 *)(param_4 + 0x28) = uVar2;
  *(undefined4 *)(param_4 + 0x2c) = uVar3;
  uVar1 = param_5[9];
  uVar2 = param_5[10];
  uVar3 = param_5[0xb];
  *(undefined4 *)(param_4 + 0x30) = param_5[8];
  *(undefined4 *)(param_4 + 0x34) = uVar1;
  *(undefined4 *)(param_4 + 0x38) = uVar2;
  *(undefined4 *)(param_4 + 0x3c) = uVar3;
  uVar1 = param_5[0xc];
  uVar2 = param_5[0xd];
  uVar3 = param_5[0xe];
  uVar4 = param_5[0xf];
  *(undefined4 *)(param_4 + 0x50) = param_1;
  *(undefined4 *)(param_4 + 0x40) = uVar1;
  *(undefined4 *)(param_4 + 0x44) = uVar2;
  *(undefined4 *)(param_4 + 0x48) = uVar3;
  *(undefined4 *)(param_4 + 0x4c) = uVar4;
  *(undefined4 *)(param_4 + 0x54) = param_2;
  *(undefined4 *)(param_4 + 0x58) = param_3;
  return;
}


// ==== FUN_00117930 @ 00117930 ====

undefined4 FUN_00117930(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_001179b8();
  *param_2 = 0x42340000;
  return 1;
}


// ==== FUN_00117970 @ 00117970 ====

void FUN_00117970(float param_1,int param_2,undefined4 *param_3)

{
  *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + *(float *)(param_2 + 0x54) * param_1;
  FUN_001179b8();
  *param_3 = 0x42340000;
  return;
}


// ==== FUN_001179b8 @ 001179b8 ====

void FUN_001179b8(int param_1,int param_2)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vf13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 in_vuI;
  undefined4 uVar20;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_8c;
  float fStack_88;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  auVar5 = _vmaxbc(in_vf0,in_vf0);
  auVar4 = _qmtc2(*(float *)(param_1 + 0x50) * 0.017453292);
  auVar4 = _vaddbc(in_vf0,auVar4);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar4 = _vsubi(auVar4,in_vuI);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar19 = _vsub(in_vf0,in_vf0);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vabs(auVar4);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar4,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar5,in_vuI);
  _vmaddai(auVar5,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar4,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar4 = _vmsubi(auVar5,in_vuI);
  auVar6 = _vmul(auVar16,auVar16);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vabs(auVar4);
  _ctc2(0x3e800000);
  _vnop();
  auVar4 = _vsubi(auVar4,in_vuI);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar5,auVar6);
  auVar8 = _vmul(auVar4,auVar4);
  _ctc2(0xc2992661);
  _vnop();
  auVar7 = _vmuli(auVar4,in_vuI);
  auVar5 = _vmove(auVar16);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar20 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar20);
  auVar13 = _vmul(auVar8,auVar8);
  _ctc2(0xc2255de0);
  _vnop();
  auVar11 = _vmuli(auVar4,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar10 = _vmuli(auVar4,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar9 = _vmuli(auVar4,in_vuI);
  auVar6 = _vmul(auVar13,auVar13);
  auVar7 = _vmul(auVar7,auVar8);
  _vmula(auVar11,auVar8);
  _vmadda(auVar7,auVar13);
  _ctc2(0x40c90fda);
  _vmadda(auVar10,auVar13);
  _vmaddai(auVar4,in_vuI);
  auVar4 = _vmadd(auVar9,auVar6);
  auVar6 = _vmulbc(auVar5,auVar5);
  _vmove(in_vf13);
  auVar7 = _qmtc2(0x3f800000);
  _vaddbc(in_vf0,auVar6);
  auVar10 = _vaddbc(in_vf0,auVar7);
  auVar6 = _vmulbc(auVar5,auVar5);
  auVar4 = _vsubbc(auVar10,auVar4);
  _vaddbc(in_vf0,auVar6);
  auVar7 = _vmul(auVar5,auVar5);
  auVar6 = _vmulbc(auVar5,auVar5);
  auVar4 = _vaddbc(in_vf0,auVar4);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar7 = _vsub(in_vf0,auVar7);
  auVar5 = _vmulbc(auVar5,auVar4);
  auVar6 = _vmulbc(auVar6,auVar4);
  auVar7 = _vaddbc(auVar7,auVar10);
  _lqc2(auStack_40);
  auVar7 = _vmulbc(auVar7,auVar4);
  auVar4 = _vsubbc(auVar6,auVar5);
  _lqc2(auStack_50);
  _lqc2(auStack_30);
  auVar11 = _vaddbc(in_vf0,auVar4);
  auVar8 = _vsubbc(auVar10,auVar7);
  auVar4 = _vaddbc(auVar6,auVar5);
  auVar9 = _vaddbc(in_vf0,auVar8);
  auVar13 = _vaddbc(in_vf0,auVar4);
  auVar8 = _vsubbc(auVar10,auVar7);
  auVar4 = _vaddbc(auVar6,auVar5);
  auVar10 = _vsubbc(auVar10,auVar7);
  _vmove(auVar9);
  auVar12 = _vsubbc(auVar6,auVar5);
  auVar7 = _vsubbc(auVar6,auVar5);
  auVar14 = _vaddbc(in_vf0,auVar4);
  _vmove(auVar11);
  auVar15 = _vaddbc(in_vf0,auVar8);
  auVar5 = _vaddbc(auVar6,auVar5);
  _vmove(auVar13);
  auVar6 = _qmtc2(*(undefined4 *)(param_1 + 0x58));
  _vmove(auVar14);
  auVar12 = _vaddbc(in_vf0,auVar12);
  auVar4 = _vaddbc(in_vf0,auVar7);
  _vmove(auVar15);
  auVar5 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar9);
  _sqc2(auVar11);
  auVar9 = _vmulbc(auVar17,auVar6);
  _sqc2(auVar13);
  auVar6 = _vadd(in_vf0,in_vf0);
  _vmove(auVar12);
  auVar8 = _vmove(auVar19);
  auVar7 = _vaddbc(in_vf0,auVar10);
  auVar8 = _vsub(auVar8,auVar9);
  _sqc2(auVar14);
  _sqc2(auVar15);
  _vmulabc(auVar4,auVar17);
  _vmaddabc(auVar5,auVar17);
  auVar13 = _vmaddbc(auVar7,auVar17);
  _vmulabc(auVar4,auVar8);
  _vmaddabc(auVar5,auVar8);
  _vmaddabc(auVar7,auVar8);
  auVar11 = _vmaddbc(auVar6,in_vf0);
  _sqc2(auVar12);
  _vmulabc(auVar4,auVar18);
  _vmaddabc(auVar5,auVar18);
  auVar10 = _vmaddbc(auVar7,auVar18);
  _vmulabc(auVar4,auVar16);
  _vmaddabc(auVar5,auVar16);
  auVar9 = _vmaddbc(auVar7,auVar16);
  _sqc2(auVar4);
  pauVar2 = (undefined1 (*) [16])(param_2 + 0x10);
  _sqc2(auVar5);
  _sqc2(auVar7);
  _sqc2(auVar19);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar6);
  _sqc2(auVar4);
  _sqc2(auVar5);
  _sqc2(auVar7);
  _sqc2(auVar6);
  _sqc2(auVar4);
  _sqc2(auVar5);
  _sqc2(auVar7);
  _sqc2(auVar6);
  _sqc2(auVar10);
  _sqc2(auVar9);
  _sqc2(auVar18);
  _sqc2(auVar16);
  _sqc2(auVar17);
  _sqc2(auVar13);
  _sqc2(auVar11);
  _sqc2(auVar10);
  _sqc2(auVar9);
  _sqc2(auVar10);
  _sqc2(auVar9);
  _sqc2(auVar13);
  _sqc2(auVar11);
  _sqc2(auVar13);
  _sqc2(auVar11);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  _vmulabc(auVar7,auVar10);
  _vmaddabc(auVar5,auVar10);
  auVar6 = _vmaddbc(auVar4,auVar10);
  _vmulabc(auVar7,auVar9);
  _vmaddabc(auVar5,auVar9);
  auVar12 = _vmaddbc(auVar4,auVar9);
  auVar10 = _vmove(auVar6);
  _sqc2(auVar12);
  auVar8 = _vaddbc(auVar10,auVar12);
  _sqc2(auVar10);
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  _vmulabc(auVar7,auVar13);
  _vmaddabc(auVar5,auVar13);
  auVar9 = _vmaddbc(auVar4,auVar13);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar5,auVar11);
  _vmaddabc(auVar4,auVar11);
  auVar6 = _vmaddbc(auVar6,in_vf0);
  _sqc2(auVar10);
  auVar9 = _vmove(auVar9);
  auVar5 = _vaddbc(auVar8,auVar9);
  auVar4 = _sqc2(auVar6);
  auVar8 = _qmfc2(auVar5._0_4_);
  _sqc2(auVar9);
  _sqc2(auVar6);
  _sqc2(auVar12);
  _sqc2(auVar9);
  _sqc2(auVar6);
  auVar5 = _sqc2(auVar10);
  auVar6 = _sqc2(auVar12);
  auVar7 = _sqc2(auVar9);
  uStack_e0 = auVar4._0_4_;
  uStack_dc = auVar4._4_4_;
  uStack_d8 = auVar4._8_4_;
  uStack_d4 = auVar4._12_4_;
  if (0.0 < auVar8._0_4_) {
    auVar4 = _vsubbc(auVar12,auVar9);
    auVar5 = _vsubbc(auVar9,auVar10);
    _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
    auVar4 = _vaddbc(in_vf0,auVar4);
    _vmove(auVar4);
    fVar3 = SQRT(auVar8._0_4_ + 1.0);
    auVar7 = _vaddbc(in_vf0,auVar5);
    auVar5 = _vsubbc(auVar10,auVar12);
    _vmove(auVar7);
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar4;
    auVar6 = _vaddbc(in_vf0,auVar5);
    auVar4 = _sqc2(auVar7);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar4;
    auVar5 = _qmtc2(0.5 / fVar3);
    auVar4 = _vmove(auVar6);
    auVar5 = _vmulbc(auVar4,auVar5);
    auVar4 = _sqc2(auVar6);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar4;
    auVar4 = _sqc2(auVar5);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar4;
    auVar4 = _qmtc2(fVar3 * 0.5);
    auVar4 = _vmulbc(in_vf0,auVar4);
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar4;
  }
  else {
    auVar4 = _sqc2(auVar12);
    auVar8 = _qmfc2(auVar10._0_4_);
    fStack_8c = auVar4._4_4_;
    if (fStack_8c <= auVar8._0_4_) {
      auVar4 = _sqc2(auVar9);
      fStack_88 = auVar4._8_4_;
      uVar1 = (uint)(auVar8._0_4_ < fStack_88) << 1;
    }
    else {
      auVar4 = _sqc2(auVar9);
      fStack_88 = auVar4._8_4_;
      auVar4 = _sqc2(auVar12);
      fStack_8c = auVar4._4_4_;
      uVar1 = 1;
      if (fStack_8c < fStack_88) {
        uVar1 = 2;
      }
    }
    if (uVar1 == 1) {
      auVar8 = _lqc2(auVar5);
      auVar10 = _qmtc2(0x3f800000);
      auVar9 = _lqc2(auVar7);
      auVar4 = _lqc2(auVar6);
      auVar8 = _vaddbc(auVar9,auVar8);
      auVar4 = _vsubbc(auVar4,auVar8);
      _lqc2(*pauVar2);
      auVar4 = _vaddbc(auVar4,auVar10);
      auVar4 = _sqc2(auVar4);
      fStack_8c = auVar4._4_4_;
      auVar7 = _lqc2(auVar7);
      auVar10 = _lqc2(auVar5);
      auVar4 = _qmtc2(SQRT(fStack_8c) * 0.5);
      auVar8 = _qmtc2(0.5 / SQRT(fStack_8c));
      auVar9 = _vaddbc(in_vf0,auVar4);
      auVar4 = _vsubbc(auVar7,auVar10);
      auVar6 = _lqc2(auVar6);
      auVar4 = _vmulbc(auVar4,auVar8);
      _vmove(auVar9);
      auVar5 = _vaddbc(auVar6,auVar7);
      auVar7 = _vmulbc(in_vf0,auVar4);
      auVar4 = _sqc2(auVar9);
      *pauVar2 = auVar4;
      auVar4 = _vmulbc(auVar5,auVar8);
      _vmove(auVar7);
      auVar5 = _vaddbc(in_vf0,auVar4);
      auVar4 = _sqc2(auVar7);
      *pauVar2 = auVar4;
      auVar6 = _vaddbc(auVar6,auVar10);
      auVar4 = _sqc2(auVar5);
      *pauVar2 = auVar4;
      auVar4 = _vmulbc(auVar6,auVar8);
      auVar4 = _vaddbc(in_vf0,auVar4);
      auVar4 = _sqc2(auVar4);
      *pauVar2 = auVar4;
    }
    else if (uVar1 < 2) {
      if (uVar1 == 0) {
        auVar7 = _lqc2(auVar7);
        auVar8 = _qmtc2(0x3f800000);
        auVar6 = _lqc2(auVar6);
        auVar5 = _lqc2(auVar5);
        auVar4 = _vaddbc(auVar6,auVar7);
        auVar4 = _vsubbc(auVar5,auVar4);
        auVar4 = _vaddbc(auVar4,auVar8);
        auVar9 = _vsubbc(auVar6,auVar7);
        auVar4 = _qmfc2(auVar4._0_4_);
        auVar6 = _vaddbc(auVar5,auVar6);
        _lqc2(*pauVar2);
        auVar7 = _vaddbc(auVar5,auVar7);
        auVar5 = _qmtc2(SQRT(auVar4._0_4_) * 0.5);
        auVar8 = _qmtc2(0.5 / SQRT(auVar4._0_4_));
        auVar10 = _vaddbc(in_vf0,auVar5);
        auVar4 = _vmulbc(auVar9,auVar8);
        _vmove(auVar10);
        auVar5 = _vmulbc(auVar6,auVar8);
        auVar9 = _vmulbc(in_vf0,auVar4);
        auVar4 = _sqc2(auVar10);
        *pauVar2 = auVar4;
        _vmove(auVar9);
        auVar6 = _vmulbc(auVar7,auVar8);
        auVar5 = _vaddbc(in_vf0,auVar5);
        auVar4 = _sqc2(auVar9);
        *pauVar2 = auVar4;
        auVar4 = _sqc2(auVar5);
        *pauVar2 = auVar4;
        auVar4 = _vaddbc(in_vf0,auVar6);
        auVar4 = _sqc2(auVar4);
        *pauVar2 = auVar4;
      }
    }
    else if (uVar1 == 2) {
      auVar8 = _lqc2(auVar6);
      auVar10 = _qmtc2(0x3f800000);
      auVar9 = _lqc2(auVar5);
      auVar4 = _lqc2(auVar7);
      auVar8 = _vaddbc(auVar9,auVar8);
      auVar4 = _vsubbc(auVar4,auVar8);
      _lqc2(*pauVar2);
      auVar4 = _vaddbc(auVar4,auVar10);
      auVar4 = _sqc2(auVar4);
      fStack_88 = auVar4._8_4_;
      auVar5 = _lqc2(auVar5);
      auVar10 = _lqc2(auVar6);
      auVar4 = _qmtc2(SQRT(fStack_88) * 0.5);
      auVar8 = _qmtc2(0.5 / SQRT(fStack_88));
      auVar9 = _vaddbc(in_vf0,auVar4);
      auVar4 = _vsubbc(auVar5,auVar10);
      auVar6 = _lqc2(auVar7);
      auVar4 = _vmulbc(auVar4,auVar8);
      _vmove(auVar9);
      auVar5 = _vaddbc(auVar6,auVar5);
      auVar7 = _vmulbc(in_vf0,auVar4);
      auVar4 = _sqc2(auVar9);
      *pauVar2 = auVar4;
      auVar4 = _vmulbc(auVar5,auVar8);
      _vmove(auVar7);
      auVar5 = _vaddbc(in_vf0,auVar4);
      auVar4 = _sqc2(auVar7);
      *pauVar2 = auVar4;
      auVar6 = _vaddbc(auVar6,auVar10);
      auVar4 = _sqc2(auVar5);
      *pauVar2 = auVar4;
      auVar4 = _vmulbc(auVar6,auVar8);
      auVar4 = _vaddbc(in_vf0,auVar4);
      auVar4 = _sqc2(auVar4);
      *pauVar2 = auVar4;
    }
  }
  *(undefined4 *)(param_2 + 0x20) = uStack_e0;
  *(undefined4 *)(param_2 + 0x24) = uStack_dc;
  *(undefined4 *)(param_2 + 0x28) = uStack_d8;
  *(undefined4 *)(param_2 + 0x2c) = uStack_d4;
  return;
}


// ==== FUN_00118088 @ 00118088 ====

undefined4 FUN_00118088(void)

{
  return 1;
}


// ==== FUN_00118090 @ 00118090 ====

void FUN_00118090(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_00118098 @ 00118098 ====

bool FUN_00118098(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_00118210();
  return 1.0 <= fVar1;
}


// ==== FUN_001180d8 @ 001180d8 ====

float FUN_001180d8(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00118210();
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x10) == 1) {
      fVar1 = fVar1 * fVar1 * (3.0 - (fVar1 + fVar1));
      fVar1 = fVar1 * fVar1 * (3.0 - (fVar1 + fVar1));
    }
    else {
      fVar1 = 0.0;
    }
  }
  return fVar1;
}


// ==== FUN_00118158 @ 00118158 ====

float FUN_00118158(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_001181c0(param_1,*(undefined4 *)((int)param_1 + 0x10));
  return fVar1 - *(float *)((int)param_1 + 8);
}


// ==== FUN_00118188 @ 00118188 ====

void FUN_00118188(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0xc) = param_4;
  *(undefined4 *)(param_2 + 4) = param_1;
  *(undefined4 *)(param_2 + 0x10) = param_3;
  uVar1 = FUN_001181c0();
  *(undefined4 *)(param_2 + 8) = uVar1;
  return;
}


// ==== FUN_001181c0 @ 001181c0 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f0e0 int

undefined4 FUN_001181c0(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined4 *)(DAT_0040f4d0 + 0x20);
  }
  if (param_2 != 1) {
    return 0;
  }
  return *(undefined4 *)(DAT_0040f0e0 + 0x20140);
}


// ==== FUN_00118210 @ 00118210 ====

float FUN_00118210(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00118158();
  return fVar1 / *(float *)(param_1 + 4);
}


// ==== FUN_00118240 @ 00118240 ====

void FUN_00118240(void)

{
  return;
}


// ==== FUN_00118248 @ 00118248 ====

void FUN_00118248(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_00118188(param_1,param_3,param_4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x20) = *param_2;
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(iVar4 + 0x30) = param_2[4];
  *(undefined4 *)(iVar4 + 0x34) = uVar1;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined4 *)(iVar4 + 0x3c) = uVar3;
  return;
}


// ==== FUN_00118290 @ 00118290 ====

undefined4 FUN_00118290(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00118088();
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  return 1;
}


// ==== FUN_001182d0 @ 001182d0 ====

void FUN_001182d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = FUN_001180d8();
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar3 = _qmtc2(uVar1);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  _vaddabc(auVar2,in_vf0);
  _vmsubabc(auVar2,auVar3);
  auVar2 = _vmaddbc(auVar4,auVar3);
  auVar2 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar2;
  return;
}


// ==== FUN_00118320 @ 00118320 ====

void FUN_00118320(void)

{
  FUN_00118090();
  return;
}


// ==== FUN_00118340 @ 00118340 ====

void FUN_00118340(void)

{
  return;
}


// ==== FUN_00118348 @ 00118348 ====

void FUN_00118348(int param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar1 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar1;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar1;
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar1;
  auVar1 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar1;
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}


// ==== FUN_00118388 @ 00118388 ====

void FUN_00118388(int param_1)

{
  FUN_00118188();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}


// ==== FUN_001183b8 @ 001183b8 ====

void FUN_001183b8(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00118188();
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0x20) = *param_4;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = param_4[5];
  uVar2 = param_4[6];
  uVar3 = param_4[7];
  *(undefined4 *)(param_1 + 0x30) = param_4[4];
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = param_4[9];
  uVar2 = param_4[10];
  uVar3 = param_4[0xb];
  *(undefined4 *)(param_1 + 0x40) = param_4[8];
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar1 = param_4[0xc];
  uVar2 = param_4[0xd];
  uVar3 = param_4[0xe];
  uVar4 = param_4[0xf];
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  return;
}


// ==== FUN_00118410 @ 00118410 ====

undefined4 FUN_00118410(void)

{
  FUN_00118088();
  return 1;
}


// ==== FUN_001187a8 @ 001187a8 ====

void FUN_001187a8(int param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar1 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar1;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar1;
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar1;
  auVar1 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar1;
  *(undefined1 *)(param_1 + 0x60) = 1;
  FUN_00118090();
  return;
}


// ==== FUN_00118808 @ 00118808 ====

void FUN_00118808(void)

{
  return;
}


// ==== FUN_00118810 @ 00118810 ====

void FUN_00118810(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_00118188(param_3);
  *(undefined4 *)(param_4 + 0x18) = param_2;
  *(undefined4 *)(param_4 + 0x14) = param_1;
  return;
}


// ==== FUN_00118858 @ 00118858 ====

undefined4 FUN_00118858(int param_1,undefined4 *param_2)

{
  FUN_00118088();
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  return 1;
}


// ==== FUN_00118898 @ 00118898 ====

void FUN_00118898(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_001180d8();
  *param_2 = *(float *)(param_1 + 0x14) +
             (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14)) * fVar1;
  return;
}


// ==== FUN_001188e0 @ 001188e0 ====

void FUN_001188e0(void)

{
  FUN_00118090();
  return;
}


// ==== FUN_00118900 @ 00118900 ====

void FUN_00118900(void)

{
  return;
}


// ==== FUN_00118908 @ 00118908 ====
// GLOBAL PTR_LAB_003f3dd0 undefined_*

void FUN_00118908(undefined8 param_1,ulong param_2)

{
  if (param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x00118950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003f3dd0)[(int)param_2])();
    return;
  }
  return;
}


// ==== FUN_00118d48 @ 00118d48 ====
// GLOBAL PTR_LAB_003f3df0 undefined_*

void FUN_00118d48(undefined8 param_1,ulong param_2)

{
  if (param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x00118d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003f3df0)[(int)param_2])();
    return;
  }
  return;
}


// ==== FUN_00118f58 @ 00118f58 ====

void FUN_00118f58(int param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 == 3) {
    if (param_4 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0x594c3bb5a28a38a1;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_4;
    }
  }
  else if ((param_2 == 5) && (param_4 != 1)) {
    if (param_4 < 2) {
      if (param_4 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0x594c3b3ed729e1c6;
      }
    }
    else if (param_4 == 2) {
      iVar3 = FUN_0027d118(param_3,*(undefined8 *)(param_1 + 0x10));
      piVar4 = (int *)param_3;
      if (*piVar4 != iVar3) {
        (**(code **)(piVar4[5] + 0x2c))((int)piVar4 + (int)*(short *)(piVar4[5] + 0x28),iVar3,0);
        iVar1 = *piVar4;
        iVar2 = piVar4[3];
        *piVar4 = iVar3;
        if ((iVar2 != 0) && (piVar4[4] = *(int *)(iVar2 + 0x20), iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0x20);
        }
        (**(code **)(piVar4[5] + 0x34))((int)piVar4 + (int)*(short *)(piVar4[5] + 0x30),iVar1,0);
      }
    }
  }
  return;
}


// ==== FUN_00119090 @ 00119090 ====

void FUN_00119090(int param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  piVar5 = (int *)param_3;
  if (param_2 == 4) {
    if (*(int *)(param_1 + 0x10) == 0) {
      lVar4 = FUN_00118098(piVar5 + 0x138);
      if (lVar4 != 0) {
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
    }
    else if ((*(int *)(param_1 + 0x10) == 1) &&
            (iVar3 = FUN_0027d118(param_3,0x594c3b3ed729e1c6), *piVar5 != iVar3)) {
      (**(code **)(piVar5[5] + 0x2c))((int)piVar5 + (int)*(short *)(piVar5[5] + 0x28),iVar3,0);
      iVar1 = *piVar5;
      iVar2 = piVar5[3];
      *piVar5 = iVar3;
      if ((iVar2 != 0) && (piVar5[4] = *(int *)(iVar2 + 0x20), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0x20);
      }
      (**(code **)(piVar5[5] + 0x34))((int)piVar5 + (int)*(short *)(piVar5[5] + 0x30),iVar1,0);
    }
  }
  else if (param_2 < 5) {
    if (param_2 == 3) {
      FUN_00116e00(piVar5 + 0x138,1,0,param_5);
      FUN_00110940(param_3,8);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else if (param_2 == 5) {
    if (param_4 == 0xd) {
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
    else if ((param_4 == 0xe) &&
            (iVar3 = FUN_0027d118(param_3,0x594c3b3ed729e1c6), *piVar5 != iVar3)) {
      (**(code **)(piVar5[5] + 0x2c))((int)piVar5 + (int)*(short *)(piVar5[5] + 0x28),iVar3,0);
      iVar1 = *piVar5;
      iVar2 = piVar5[3];
      *piVar5 = iVar3;
      if ((iVar2 != 0) && (piVar5[4] = *(int *)(iVar2 + 0x20), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0x20);
      }
      (**(code **)(piVar5[5] + 0x34))((int)piVar5 + (int)*(short *)(piVar5[5] + 0x30),iVar1,0);
    }
  }
  return;
}


// ==== FUN_00119288 @ 00119288 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f0a0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119288(int param_1,int param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
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
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  
  piVar6 = (int *)param_3;
  if (param_2 == 3) {
    *(undefined1 *)(piVar6 + 0x599) = 0;
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar16 = _vsub(in_vf0,in_vf0);
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _sqc2(auVar12);
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar12;
    auVar12 = _sqc2(auVar13);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar12;
    auVar12 = _sqc2(auVar14);
    *(undefined1 (*) [16])(param_1 + 0x40) = auVar12;
    auVar12 = _sqc2(auVar16);
    *(undefined1 (*) [16])(param_1 + 0x50) = auVar12;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x18) = param_1 + 0x20;
    FUN_00117900(0,0xc3c80000,0x3f0ccccd,piVar6 + 0x80);
    FUN_00116918(0x3e800000,piVar6 + 0x98,0,1,1,1);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (param_2 < 4) {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(piVar6 + 0x599) = 1;
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar13 = _vsub(in_vf0,in_vf0);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _sqc2(auVar12);
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar12;
      auVar12 = _sqc2(auVar13);
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar12;
      auVar12 = _sqc2(auVar14);
      *(undefined1 (*) [16])(param_1 + 0x30) = auVar12;
      auVar12 = _sqc2(auVar16);
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar12;
    }
  }
  else {
    if (param_2 == 4) {
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 == 3) {
        lVar5 = FUN_00117858(piVar6 + 0xf0);
        if (lVar5 == 0) {
          return;
        }
        FUN_00135940(auStack_1b0,*(undefined4 *)(param_1 + 0x14),1);
        *(int *)(param_1 + 0x20) = auStack_1b0._0_4_;
        *(int *)(param_1 + 0x24) = auStack_1b0._4_4_;
        *(undefined4 *)(param_1 + 0x28) = auStack_1b0._8_4_;
        *(undefined4 *)(param_1 + 0x2c) = auStack_1b0._12_4_;
        *(int *)(param_1 + 0x30) = auStack_1a0._0_4_;
        *(int *)(param_1 + 0x34) = auStack_1a0._4_4_;
        *(undefined4 *)(param_1 + 0x38) = auStack_1a0._8_4_;
        *(undefined4 *)(param_1 + 0x3c) = auStack_1a0._12_4_;
        *(undefined4 *)(param_1 + 0x40) = uStack_190;
        *(undefined4 *)(param_1 + 0x44) = uStack_18c;
        *(undefined4 *)(param_1 + 0x48) = uStack_188;
        *(undefined4 *)(param_1 + 0x4c) = uStack_184;
        *(int *)(param_1 + 0x50) = (int)uStack_180;
        *(int *)(param_1 + 0x54) = (int)((ulong)uStack_180 >> 0x20);
        *(undefined4 *)(param_1 + 0x58) = uStack_178;
        *(undefined4 *)(param_1 + 0x5c) = uStack_174;
        FUN_00115d88(piVar6 + 300,*(undefined4 *)(param_1 + 0x18));
        FUN_00116918(0x3f19999a,piVar6 + 0x98,5,7,1,1);
        *(undefined4 *)(param_1 + 0x10) = 4;
        return;
      }
      if (iVar4 < 4) {
        if (iVar4 != 2) {
          return;
        }
        fVar7 = *(float *)(param_1 + 0x60) + *(float *)(DAT_0040f0e0 + 0x2013c);
        *(float *)(param_1 + 0x60) = fVar7;
        if (fVar7 <= 0.6) {
          return;
        }
        if (0.63 <= fVar7) {
          return;
        }
        FUN_00110698(0x3dcccccd,param_3,1,1);
        return;
      }
      if (iVar4 == 4) {
        FUN_00135940(auStack_1b0,*(undefined4 *)(param_1 + 0x14),1);
        *(undefined4 *)(param_1 + 0x20) = auStack_1b0._0_4_;
        *(undefined4 *)(param_1 + 0x24) = auStack_1b0._4_4_;
        *(undefined4 *)(param_1 + 0x28) = auStack_1b0._8_4_;
        *(undefined4 *)(param_1 + 0x2c) = auStack_1b0._12_4_;
        *(int *)(param_1 + 0x50) = (int)uStack_180;
        *(int *)(param_1 + 0x54) = (int)((ulong)uStack_180 >> 0x20);
        *(undefined4 *)(param_1 + 0x58) = uStack_178;
        *(undefined4 *)(param_1 + 0x5c) = uStack_174;
        *(undefined4 *)(param_1 + 0x30) = auStack_1a0._0_4_;
        *(undefined4 *)(param_1 + 0x34) = auStack_1a0._4_4_;
        *(undefined4 *)(param_1 + 0x38) = auStack_1a0._8_4_;
        *(undefined4 *)(param_1 + 0x3c) = auStack_1a0._12_4_;
        *(undefined4 *)(param_1 + 0x40) = uStack_190;
        *(undefined4 *)(param_1 + 0x44) = uStack_18c;
        *(undefined4 *)(param_1 + 0x48) = uStack_188;
        *(undefined4 *)(param_1 + 0x4c) = uStack_184;
        return;
      }
      if (iVar4 != 5) {
        return;
      }
      lVar5 = FUN_00118098(piVar6 + 0x98);
      if (lVar5 == 0) {
        return;
      }
    }
    else {
      if (param_2 != 5) {
        return;
      }
      if (param_4 != 0xb) {
        if (0xb < param_4) {
          if (param_4 != 0xc) {
            return;
          }
          *(int *)(param_1 + 0x14) = (int)param_5;
          iVar4 = FUN_00135550(param_5);
          uVar11 = 0x40800000;
          if (*(int *)(iVar4 + 0x4b4) == 7) {
            uVar11 = 0x41400000;
          }
          iVar4 = FUN_00110650(param_3);
          auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x10));
          auVar13 = _qmtc2(0x3fb504f3);
          auVar14 = _vmulbc(auVar12,auVar13);
          auVar12 = _vmulbc(auVar14,auVar14);
          auVar16 = _vmulbc(auVar14,auVar14);
          auVar12 = _sqc2(auVar12);
          auVar15 = _vmulbc(auVar14,auVar14);
          auVar17 = _vmulbc(auVar14,auVar14);
          auVar18 = _vmulbc(auVar14,auVar14);
          auVar13 = _vmulbc(auVar14,auVar14);
          auVar19 = _vmulbc(auVar14,auVar14);
          auStack_70._4_4_ = auVar12._4_4_;
          uVar3 = auStack_70._4_4_;
          auVar13 = _qmfc2(auVar13._0_4_);
          auVar12 = _sqc2(auVar16);
          fVar7 = 1.0 - (float)auStack_70._4_4_;
          auVar16 = _vmulbc(auVar14,auVar14);
          fVar8 = 1.0 - auVar13._0_4_;
          auVar13 = _vmulbc(auVar14,auVar14);
          auStack_70._4_4_ = auVar12._4_4_;
          auVar13 = _qmfc2(auVar13._0_4_);
          auVar12 = _sqc2(auVar15);
          auVar14 = _qmfc2(auVar16._0_4_);
          _lqc2(auStack_a0);
          _lqc2(auStack_90);
          fStack_68 = auVar12._8_4_;
          auVar12 = _sqc2(auVar17);
          auVar16 = _qmtc2(fVar7 - fStack_68);
          fStack_64 = auVar12._12_4_;
          auVar12 = _sqc2(auVar18);
          _lqc2(auStack_b0);
          fVar10 = (float)auStack_70._4_4_ - fStack_64;
          auVar15 = _vaddbc(in_vf0,auVar16);
          fVar9 = (float)auStack_70._4_4_ + fStack_64;
          fStack_64 = auVar12._12_4_;
          _vmove(auVar15);
          auVar12 = _sqc2(auVar19);
          auVar16 = _qmtc2(auVar13._0_4_ + fStack_64);
          fVar7 = auVar13._0_4_ - fStack_64;
          fStack_64 = auVar12._12_4_;
          auVar16 = _vaddbc(in_vf0,auVar16);
          _vmove(auVar16);
          _sqc2(auVar15);
          auVar13 = _qmtc2(auVar14._0_4_ - fStack_64);
          auVar15 = _vaddbc(in_vf0,auVar13);
          auVar13 = _qmtc2(auVar14._0_4_ + fStack_64);
          auVar18 = _vaddbc(in_vf0,auVar13);
          auVar13 = _qmtc2(fVar8 - fStack_68);
          auVar17 = _qmtc2(fVar10);
          _vmove(auVar15);
          auVar19 = _vaddbc(in_vf0,auVar13);
          auVar14 = _qmtc2(fVar7);
          auVar20 = _vaddbc(in_vf0,auVar17);
          _sqc2(auVar15);
          auVar13 = _qmtc2(fVar8 - (float)uVar3);
          _sqc2(auVar16);
          auVar16 = _qmtc2(fVar9);
          _vmove(auVar20);
          _vmove(auVar18);
          auVar17 = _vaddbc(in_vf0,auVar13);
          _vmove(auVar19);
          auVar15 = _vaddbc(in_vf0,auVar14);
          auVar16 = _vaddbc(in_vf0,auVar16);
          _sqc2(auVar18);
          _sqc2(auVar19);
          auVar13 = _qmtc2(uVar11);
          _sqc2(auVar20);
          auVar14 = _vmulbc(auVar17,auVar13);
          auStack_b0 = _sqc2(auVar15);
          auStack_a0 = _sqc2(auVar16);
          auStack_90 = _sqc2(auVar17);
          auStack_f0 = _sqc2(auVar15);
          auStack_e0 = _sqc2(auVar16);
          auStack_d0 = _sqc2(auVar17);
          uStack_c0 = uStack_80;
          uStack_bc = uStack_7c;
          uStack_b8 = uStack_78;
          uStack_b4 = uStack_74;
          auStack_130 = _sqc2(auVar15);
          auStack_120 = _sqc2(auVar16);
          auStack_110 = _sqc2(auVar17);
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x20));
          auVar14 = _vsub(auVar13,auVar14);
          auStack_170 = _sqc2(auVar15);
          auStack_160 = _sqc2(auVar16);
          auStack_1a0 = _sqc2(auVar14);
          auStack_100 = _sqc2(auVar13);
          auStack_150 = _sqc2(auVar17);
          auStack_140 = _sqc2(auVar13);
          auStack_1b0 = _sqc2(auVar13);
          _auStack_70 = auVar12;
          FUN_00117830(0x3f333333,piVar6 + 0xf0,auStack_1b0,1,1);
          FUN_00110940(param_3,5);
          *(undefined4 *)(param_1 + 0x10) = 3;
          return;
        }
        if (param_4 != 10) {
          return;
        }
        FUN_00115d70(0x3e4ccccd,piVar6 + 300,param_5,_DAT_0040f0a0);
        FUN_00116918(0x3f800000,piVar6 + 0x98,1,7,1,1);
        FUN_00110698(0x3dcccccd,param_3,1,1);
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x10) = 2;
        return;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar4 = FUN_0027d118(param_3,0x594c3b3ed729e1c6);
    if (*piVar6 != iVar4) {
      (**(code **)(piVar6[5] + 0x2c))((int)piVar6 + (int)*(short *)(piVar6[5] + 0x28),iVar4,0);
      iVar1 = *piVar6;
      iVar2 = piVar6[3];
      *piVar6 = iVar4;
      if ((iVar2 != 0) && (piVar6[4] = *(int *)(iVar2 + 0x20), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar2 + 0x20);
      }
      (**(code **)(piVar6[5] + 0x34))((int)piVar6 + (int)*(short *)(piVar6[5] + 0x30),iVar1,0);
    }
  }
  return;
}


// ==== FUN_001198a8 @ 001198a8 ====

void FUN_001198a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  piVar5 = (int *)param_3;
  if (param_2 == 3) {
    FUN_001183b8(0x40a00000,piVar5 + 0xd4,1,1,param_5);
    FUN_00116918(0x40400000,piVar5 + 0x98,0,4,1,1);
  }
  else if ((((3 < param_2) && (param_2 == 4)) && (lVar4 = FUN_00118098(piVar5 + 0xd4), lVar4 != 0))
          && (iVar3 = FUN_0027d118(param_3,0x594c3b3ed729e1c6), *piVar5 != iVar3)) {
    (**(code **)(piVar5[5] + 0x2c))((int)piVar5 + (int)*(short *)(piVar5[5] + 0x28),iVar3,0);
    iVar1 = *piVar5;
    iVar2 = piVar5[3];
    *piVar5 = iVar3;
    if ((iVar2 != 0) && (piVar5[4] = *(int *)(iVar2 + 0x20), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0x20);
    }
    (**(code **)(piVar5[5] + 0x34))((int)piVar5 + (int)*(short *)(piVar5[5] + 0x30),iVar1,0);
  }
  return;
}


// ==== FUN_001199d8 @ 001199d8 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_003f4110 undefined8
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f518 int
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f51c undefined4

void FUN_001199d8(int param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  if (param_2 == 2) {
    FUN_001dc000(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20));
    if (*(char *)(DAT_0040f4bc + 0x1678) == '\0') {
      return;
    }
    *(undefined1 *)(DAT_0040f4bc + 0x1678) = 0;
    FUN_001f2d08(DAT_0040f51c,0,0);
    return;
  }
  if (param_2 < 3) {
    if (param_2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    return;
  }
  piVar11 = (int *)param_3;
  if (param_2 == 3) {
    FUN_001dbf38(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20),param_5);
    puVar12 = (undefined4 *)param_5;
    *(undefined4 *)(param_1 + 0x18) = puVar12[3];
    iVar5 = DAT_0040f4d0;
    uVar8 = *(undefined4 *)(DAT_0040f4d0 + 0x104);
    uVar9 = *(undefined4 *)(DAT_0040f4d0 + 0x108);
    uVar10 = *(undefined4 *)(DAT_0040f4d0 + 0x10c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(DAT_0040f4d0 + 0x100);
    *(undefined4 *)(param_1 + 0x24) = uVar8;
    *(undefined4 *)(param_1 + 0x28) = uVar9;
    *(undefined4 *)(param_1 + 0x2c) = uVar10;
    uVar8 = *(undefined4 *)(iVar5 + 0x114);
    uVar9 = *(undefined4 *)(iVar5 + 0x118);
    uVar10 = *(undefined4 *)(iVar5 + 0x11c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar5 + 0x110);
    *(undefined4 *)(param_1 + 0x34) = uVar8;
    *(undefined4 *)(param_1 + 0x38) = uVar9;
    *(undefined4 *)(param_1 + 0x3c) = uVar10;
    uVar8 = *(undefined4 *)(iVar5 + 0x124);
    uVar9 = *(undefined4 *)(iVar5 + 0x128);
    uVar10 = *(undefined4 *)(iVar5 + 300);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar5 + 0x120);
    *(undefined4 *)(param_1 + 0x44) = uVar8;
    *(undefined4 *)(param_1 + 0x48) = uVar9;
    *(undefined4 *)(param_1 + 0x4c) = uVar10;
    uVar8 = *(undefined4 *)(iVar5 + 0x134);
    uVar9 = *(undefined4 *)(iVar5 + 0x138);
    uVar10 = *(undefined4 *)(iVar5 + 0x13c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x130);
    *(undefined4 *)(param_1 + 0x54) = uVar8;
    *(undefined4 *)(param_1 + 0x58) = uVar9;
    *(undefined4 *)(param_1 + 0x5c) = uVar10;
    FUN_0013dc38(DAT_0040f4d0 + 0x800);
    FUN_001354e0(DAT_0040f4d0 + 0x30,DAT_0040f4d0 + 0x800);
    uVar8 = 0;
    *(undefined1 *)(DAT_0040f4d0 + 0x8e2) = 1;
    lVar6 = DAT_003f4110;
    *(undefined1 *)(*(int *)(DAT_0040f4d0 + 0x360) + 0x234) = 0;
    piVar11[0x59a] = 2;
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)((int)puVar12 + 9);
    if (*(long *)*puVar12 == lVar6) {
      *(undefined1 *)(DAT_0040f4bc + 0x1678) = 1;
    }
    else {
      for (iVar5 = 1; iVar5 < 8; iVar5 = iVar5 + 1) {
        if (*(long *)*puVar12 == (&DAT_003f4110)[iVar5]) {
          *(undefined1 *)(DAT_0040f4bc + 0x1678) = 1;
          break;
        }
      }
    }
    if (*(int *)(param_1 + 0x18) == 1) {
      FUN_001183b8(puVar12[1],piVar11 + 0xd4,1,1,*puVar12);
      *(undefined4 *)(param_1 + 0x10) = 1;
      uVar8 = 4;
    }
    else {
      if (*(int *)(param_1 + 0x18) != 2) {
        cVar4 = *(char *)(puVar12 + 2);
        goto LAB_00119bd4;
      }
      uVar7 = FUN_0012d490(DAT_0040f4d0,*(undefined8 *)*puVar12);
      FUN_00116e00(piVar11 + 0x138,0,0,uVar7);
      *(undefined4 *)(param_1 + 0x10) = 1;
      uVar8 = 8;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    cVar4 = *(char *)(puVar12 + 2);
LAB_00119bd4:
    if (cVar4 == '\0') {
      FUN_00116918(0x3f800000,piVar11 + 0x98,0,uVar8,1,1);
    }
    else {
      FUN_00110860(param_3,uVar8);
    }
    return;
  }
  if (param_2 != 4) {
    return;
  }
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(DAT_0040f4d0 + 0x1c);
  lVar6 = FUN_00124e48(*(undefined4 *)(DAT_0040f0e0 + 0x21060),1);
  if (lVar6 == 0) {
    iVar5 = *(int *)(DAT_0040f0e0 + 0x21060);
    uVar7 = FUN_001249f8(iVar5,0x19);
    cVar4 = FUN_0026bbc0(*(undefined4 *)(iVar5 + 0xc),uVar7);
    if (cVar4 != '\0') goto LAB_00119c7c;
    iVar5 = *(int *)(param_1 + 0x10);
  }
  else {
LAB_00119c7c:
    lVar6 = FUN_00103870(DAT_0040f0e0);
    if (lVar6 == 0) {
      if (*(char *)(DAT_0040f544 + 0x3840) == '\0') {
        iVar5 = *(int *)(*(int *)(DAT_0040f518 + 0x3c) + 0x160);
        if (iVar5 == 8) {
          iVar5 = *(int *)(param_1 + 0x10);
        }
        else {
          if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0x10) = 4;
            FUN_00110860(param_3,0);
            if (*(int *)(param_1 + 0x18) == 2) {
              FUN_001108d0(param_3,8);
            }
            else if (*(int *)(param_1 + 0x18) == 1) {
              FUN_001108d0(param_3,4);
            }
            *(undefined4 *)(param_1 + 0x14) = 0x40200000;
            iVar5 = DAT_0040f544;
            if (*(char *)(DAT_0040f4bc + 0x1678) != '\0') {
              *(undefined1 *)(DAT_0040f544 + 0x394c) = 1;
              *(undefined4 *)(iVar5 + 0x3948) = 0x3f800000;
              FUN_001c2798(0,0x3f400000,0x3fa00000,DAT_0040f4d8 + 0x83ca0);
            }
            goto LAB_00119d64;
          }
          iVar5 = *(int *)(param_1 + 0x10);
        }
      }
      else {
LAB_00119d64:
        iVar5 = *(int *)(param_1 + 0x10);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x10);
    }
  }
  if (iVar5 == 3) {
    lVar6 = FUN_00118098(piVar11 + 0x98);
    if ((lVar6 == 0) && (*(char *)(DAT_0040f4bc + 0x1678) == '\0')) {
      return;
    }
    iVar5 = FUN_0027d118(param_3,0x594c3b3ed729e1c6);
    if (*piVar11 != iVar5) {
      (**(code **)(piVar11[5] + 0x2c))((int)piVar11 + (int)*(short *)(piVar11[5] + 0x28),iVar5,0);
      iVar1 = *piVar11;
      iVar2 = piVar11[3];
      *piVar11 = iVar5;
      if ((iVar2 != 0) && (piVar11[4] = *(int *)(iVar2 + 0x20), iVar5 != 0)) {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 0x20);
      }
      (**(code **)(piVar11[5] + 0x34))((int)piVar11 + (int)*(short *)(piVar11[5] + 0x30),iVar1,0);
    }
    if (*(int *)(DAT_0040f4d0 + 0x8c4) == 3) {
      FUN_0013dc50();
      goto LAB_0011a024;
    }
  }
  else {
    if (iVar5 < 4) {
      if (iVar5 != 1) {
        return;
      }
      bVar3 = false;
      if (*(float *)(param_1 + 0x14) <= 2.5) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x18);
      uVar8 = 0;
      if (iVar5 == 2) {
        lVar6 = FUN_00118098(piVar11 + 0x138);
        if (lVar6 == 0) {
          iVar5 = *(int *)(param_1 + 0x18);
          goto LAB_00119de8;
        }
        uVar8 = 8;
      }
      else {
LAB_00119de8:
        if ((iVar5 != 1) || (lVar6 = FUN_00118098(piVar11 + 0xd4), lVar6 == 0)) goto LAB_00119e0c;
        uVar8 = 4;
      }
      bVar3 = true;
LAB_00119e0c:
      if (!bVar3) {
        return;
      }
      if (*(char *)(param_1 + 0x1c) != '\0') {
        *(undefined4 *)(param_1 + 0x10) = 4;
        FUN_00110860(param_3,0);
        FUN_001108d0(param_3,uVar8);
        return;
      }
      FUN_00116918(0x3f800000,piVar11 + 0x98,uVar8,0,1,1);
      *(undefined4 *)(param_1 + 0x10) = 3;
      return;
    }
    if (iVar5 != 4) {
      return;
    }
    if (*(float *)(param_1 + 0x14) <= 2.5) {
      return;
    }
    iVar5 = FUN_0027d118(param_3,0x594c3b3ed729e1c6);
    if (*piVar11 != iVar5) {
      (**(code **)(piVar11[5] + 0x2c))((int)piVar11 + (int)*(short *)(piVar11[5] + 0x28),iVar5,0);
      iVar1 = *piVar11;
      iVar2 = piVar11[3];
      *piVar11 = iVar5;
      if ((iVar2 != 0) && (piVar11[4] = *(int *)(iVar2 + 0x20), iVar5 != 0)) {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 0x20);
      }
      (**(code **)(piVar11[5] + 0x34))((int)piVar11 + (int)*(short *)(piVar11[5] + 0x30),iVar1,0);
    }
    if (*(int *)(DAT_0040f4d0 + 0x8c4) == 3) {
      FUN_0013dc50();
      goto LAB_0011a024;
    }
  }
  FUN_001354e0(DAT_0040f4d0 + 0x30,DAT_0040f4d0 + 0x520);
  *(undefined1 *)(DAT_0040f4d0 + 0x8e2) = 0;
LAB_0011a024:
  *(undefined1 *)(*(int *)(DAT_0040f4d0 + 0x360) + 0x234) = 1;
  piVar11[0x59a] = 1;
  return;
}


// ==== FUN_0011a0a8 @ 0011a0a8 ====

void FUN_0011a0a8(void)

{
  FUN_0011c878();
  return;
}


// ==== FUN_0011a0c8 @ 0011a0c8 ====

undefined4 FUN_0011a0c8(void)

{
  FUN_0011c8c0();
  return 1;
}


// ==== FUN_0011a0e8 @ 0011a0e8 ====

void FUN_0011a0e8(void)

{
  FUN_0011c930();
  return;
}


// ==== FUN_0011a108 @ 0011a108 ====

undefined4 FUN_0011a108(void)

{
  FUN_0011c9c8();
  return 1;
}


// ==== FUN_0011a130 @ 0011a130 ====

void FUN_0011a130(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x20;
  iVar3 = 0;
  FUN_00382348(param_1 + 0x10,0x2b9d6f8);
  *(undefined4 *)(param_1 + 0x144) = 0;
  iVar1 = 0x1000000;
  do {
    FUN_0014a8f8(iVar2);
    iVar2 = iVar2 + 0x120;
    *(undefined1 *)(param_1 + 0x140 + iVar3) = 0;
    iVar3 = iVar1 >> 0x18;
    iVar1 = iVar1 + 0x1000000;
  } while (iVar3 < 1);
  return;
}


// ==== FUN_0011a1c0 @ 0011a1c0 ====

undefined4 FUN_0011a1c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  
  iVar1 = param_1 + 0x20;
  iVar2 = 0;
  iVar3 = 0x1000000;
  uStack_70 = 0x5446127adda936c0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  do {
    FUN_0014a8f8(iVar1);
    FUN_0014a938(iVar1,auStack_b0);
    iVar1 = iVar1 + 0x120;
    *(undefined1 *)(param_1 + 0x140 + iVar2) = 0;
    iVar2 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar2 < 1);
  return 1;
}


// ==== FUN_0011a270 @ 0011a270 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_0040f4d8 int

void FUN_0011a270(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_120 [48];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 auStack_d0 [4];
  undefined1 auStack_c0 [16];
  
  lVar3 = FUN_00103870(DAT_0040f0e0);
  if (lVar3 != 0) {
    return;
  }
  uVar12 = *(undefined4 *)(DAT_0040f4d0 + 0x1c);
  fVar10 = *(float *)(DAT_0040f0e0 + 0x2013c);
  iVar9 = 0x1000000;
  pauVar8 = (undefined1 (*) [16])param_1;
  pauVar7 = pauVar8 + 0x14;
  pauVar6 = pauVar8 + 2;
  do {
    if ((pauVar6[0x11][5] != '\0') && ((*pauVar7)[0] != '\0')) {
      FUN_0012a280(DAT_0040f4d0,pauVar6);
      (*pauVar7)[0] = 0;
    }
    pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
    iVar2 = iVar9 >> 0x18;
    iVar9 = iVar9 + 0x1000000;
    pauVar6 = pauVar6 + 0x12;
  } while (iVar2 < 1);
  switch(*(undefined4 *)(pauVar8[0x14] + 4)) {
  case 1:
    FUN_0011a9d8(param_1);
  case 2:
    FUN_0011a9d8(param_1);
    break;
  case 3:
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auStack_c0 = _sqc2(auVar13);
    iVar9 = 0;
    iVar2 = 0x1000000;
    pauVar7 = pauVar8 + 2;
    pauVar6 = pauVar8 + 3;
    *(float *)(pauVar8[0x14] + 8) = *(float *)(pauVar8[0x14] + 8) - fVar10;
    do {
      if (pauVar8[0x14][iVar9] != '\0') {
        (**(code **)(*(int *)*pauVar6 + 0xc))(uVar12,*pauVar7 + *(short *)(*(int *)*pauVar6 + 8));
      }
      pauVar7 = pauVar7 + 0x12;
      iVar9 = iVar2 >> 0x18;
      iVar2 = iVar2 + 0x1000000;
      pauVar6 = pauVar6 + 0x12;
    } while (iVar9 < 1);
    fVar11 = 0.0;
    FUN_0013bac8(uVar12,*(undefined4 *)pauVar8[0x19]);
    auVar14 = _lqc2(pauVar8[0xc]);
    auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)pauVar8[0x19] + 0x100));
    auVar13 = _vsub(auVar13,auVar14);
    auVar14 = _lqc2(*pauVar8);
    iVar9 = *(int *)(*(int *)(pauVar8[0x19] + 4) + 0x10);
    auVar13 = _vmul(auVar13,auVar14);
    auVar14 = _lqc2(auStack_c0);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar14,auVar13);
    auVar14 = _qmfc2(auVar13._0_4_);
    (**(code **)(iVar9 + 0xa4))
              (auStack_120,*(int *)(pauVar8[0x19] + 4) + (int)*(short *)(iVar9 + 0xa0));
    auVar13._8_4_ = uStack_e8;
    auVar13._0_8_ = uStack_f0;
    auVar13._12_4_ = uStack_e4;
    auVar15 = _lqc2(auVar13);
    auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)pauVar8[0x19] + 0x100));
    auVar13 = _vsub(auVar13,auVar15);
    auVar15 = _lqc2(*pauVar8);
    auVar13 = _vmul(auVar13,auVar15);
    auVar15 = _lqc2(auStack_c0);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar15,auVar13);
    auVar13 = _qmfc2(auVar13._0_4_);
    fVar10 = (float)FUN_0029e688(1.0 - auVar14._0_4_ / auVar13._0_4_,0x40e00000);
    FUN_0027f9c0(DAT_0040f4d0,(char)(int)(fVar10 * fVar11 + 3.0));
    if (fVar11 < *(float *)(pauVar8[0x14] + 8)) {
      return;
    }
    goto LAB_0011a820;
  case 4:
    if (*(char *)(*(int *)pauVar8[0x19] + 0x888) != '\0') {
      return;
    }
LAB_0011a820:
    *(undefined4 *)(pauVar8[0x14] + 4) = 1;
    FUN_00103918(DAT_0040f0e0,0);
    FUN_0011a9d8(param_1);
    break;
  case 5:
    if (*(char *)(*(int *)pauVar8[0x19] + 0x888) == '\0') {
      iVar9 = *(int *)(*(int *)(pauVar8[0x19] + 4) + 0x10);
      (**(code **)(iVar9 + 0xa4))
                (auStack_120,*(int *)(pauVar8[0x19] + 4) + (int)*(short *)(iVar9 + 0xa0));
      uStack_e0 = (undefined4)uStack_f0;
      uStack_dc = (undefined4)((ulong)uStack_f0 >> 0x20);
      uStack_d8 = uStack_e8;
      uStack_d4 = uStack_e4;
      (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
                (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),3,&uStack_e0);
      *(undefined4 *)(pauVar8[0x14] + 4) = 6;
      FUN_001c2760(0x3f800000,DAT_0040f4d8 + 0x83ca0,6);
      FUN_00103918(DAT_0040f0e0,1);
    }
    break;
  case 6:
    if ((*(ulong *)(DAT_0040f4bc + 0x6f0) >> 5 & 1) == 0) {
      FUN_0011aba8(param_1);
      *(undefined4 *)(pauVar8[0x14] + 8) = 0;
      *(undefined4 *)(pauVar8[0x14] + 4) = 7;
      FUN_0027f9c0(DAT_0040f4d0,10);
      FUN_00103918(DAT_0040f0e0,0);
    }
    break;
  case 7:
    (**(code **)(*(int *)pauVar8[3] + 0xc))(uVar12,pauVar8[2] + *(short *)(*(int *)pauVar8[3] + 8));
    fVar10 = *(float *)(pauVar8[0x14] + 8) + fVar10;
    *(float *)(pauVar8[0x14] + 8) = fVar10;
    if (1.0 < fVar10) {
      auStack_d0[0] = 0x3f000000;
      (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
                (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),8,auStack_d0);
      *(undefined4 *)(pauVar8[0x14] + 4) = 8;
      FUN_0027f9c0(DAT_0040f4d0,3);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      auVar15 = _lqc2(pauVar8[0xc]);
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)pauVar8[0x19] + 0x100));
      auVar14 = _lqc2(*pauVar8);
      auVar13 = _vsub(auVar13,auVar15);
      auVar13 = _vmul(auVar13,auVar14);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar16,auVar13);
      auVar15 = _lqc2(pauVar8[0x11]);
      auVar14 = _qmfc2(auVar13._0_4_);
      auVar13 = _vmul(auVar15,auVar15);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar17,auVar13);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar13);
      uVar12 = _vwaitq();
      auVar15 = _vmulq(auVar15,uVar12);
      auVar13 = _sqc2(auVar15);
      pauVar8[0x11] = auVar13;
      auVar13 = _qmtc2((auVar14._0_4_ / 1.5) * 3.0);
      auVar13 = _vmulbc(auVar15,auVar13);
      auVar13 = _sqc2(auVar13);
      pauVar8[0x11] = auVar13;
    }
    break;
  case 8:
    iVar9 = 0;
    iVar2 = 0x1000000;
    pauVar7 = pauVar8 + 2;
    pauVar6 = pauVar8 + 3;
    do {
      if (pauVar8[0x14][iVar9] != '\0') {
        (**(code **)(*(int *)*pauVar6 + 0xc))(uVar12,*pauVar7 + *(short *)(*(int *)*pauVar6 + 8));
      }
      pauVar7 = pauVar7 + 0x12;
      iVar9 = iVar2 >> 0x18;
      iVar2 = iVar2 + 0x1000000;
      pauVar6 = pauVar6 + 0x12;
    } while (iVar9 < 1);
    if ((*(ulong *)(DAT_0040f4bc + 0x6f0) >> 5 & 1) == 0) {
      *(undefined4 *)(pauVar8[0x14] + 4) = 9;
    }
    break;
  case 9:
    iVar9 = 0;
    iVar2 = 0x1000000;
    pauVar7 = pauVar8 + 2;
    pauVar6 = pauVar8 + 3;
    do {
      if (pauVar8[0x14][iVar9] != '\0') {
        (**(code **)(*(int *)*pauVar6 + 0xc))(uVar12,*pauVar7 + *(short *)(*(int *)*pauVar6 + 8));
      }
      pauVar7 = pauVar7 + 0x12;
      iVar9 = iVar2 >> 0x18;
      iVar2 = iVar2 + 0x1000000;
      pauVar6 = pauVar6 + 0x12;
    } while (iVar9 < 1);
    if ((*(ulong *)(DAT_0040f4bc + 0x6f0) >> 2 & 1) == 0) {
      FUN_001354e0(*(int *)pauVar8[0x19],*(int *)pauVar8[0x19] + 0x730);
      (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
                (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),9,0);
      *(undefined4 *)(pauVar8[0x14] + 4) = 3;
      *(undefined4 *)(pauVar8[0x14] + 8) = 0x40a00000;
      iVar9 = *(int *)pauVar8[0x19];
      uVar12 = *(undefined4 *)(iVar9 + 0xd4);
      uVar4 = *(undefined4 *)(iVar9 + 0xd8);
      uVar5 = *(undefined4 *)(iVar9 + 0xdc);
      *(undefined4 *)pauVar8[0x15] = *(undefined4 *)(iVar9 + 0xd0);
      *(undefined4 *)(pauVar8[0x15] + 4) = uVar12;
      *(undefined4 *)(pauVar8[0x15] + 8) = uVar4;
      *(undefined4 *)(pauVar8[0x15] + 0xc) = uVar5;
      uVar1 = *(undefined8 *)(iVar9 + 0xe0);
      uVar12 = *(undefined4 *)(iVar9 + 0xe8);
      uVar4 = *(undefined4 *)(iVar9 + 0xec);
      *(int *)pauVar8[0x16] = (int)uVar1;
      *(int *)(pauVar8[0x16] + 4) = (int)((ulong)uVar1 >> 0x20);
      *(undefined4 *)(pauVar8[0x16] + 8) = uVar12;
      *(undefined4 *)(pauVar8[0x16] + 0xc) = uVar4;
      uVar12 = *(undefined4 *)(iVar9 + 0xf4);
      uVar4 = *(undefined4 *)(iVar9 + 0xf8);
      uVar5 = *(undefined4 *)(iVar9 + 0xfc);
      *(undefined4 *)pauVar8[0x17] = *(undefined4 *)(iVar9 + 0xf0);
      *(undefined4 *)(pauVar8[0x17] + 4) = uVar12;
      *(undefined4 *)(pauVar8[0x17] + 8) = uVar4;
      *(undefined4 *)(pauVar8[0x17] + 0xc) = uVar5;
      uVar1 = *(undefined8 *)(iVar9 + 0x100);
      uVar12 = *(undefined4 *)(iVar9 + 0x108);
      uVar4 = *(undefined4 *)(iVar9 + 0x10c);
      *(int *)pauVar8[0x18] = (int)uVar1;
      *(int *)(pauVar8[0x18] + 4) = (int)((ulong)uVar1 >> 0x20);
      *(undefined4 *)(pauVar8[0x18] + 8) = uVar12;
      *(undefined4 *)(pauVar8[0x18] + 0xc) = uVar4;
    }
  }
  return;
}


// ==== FUN_0011a888 @ 0011a888 ====

undefined4 FUN_0011a888(void)

{
  return 1;
}


// ==== FUN_0011a890 @ 0011a890 ====
// GLOBAL DAT_0040f51c undefined4
// GLOBAL DAT_0040f0e0 undefined4

void FUN_0011a890(undefined1 (*param_1) [16],int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  *(undefined4 *)(param_1[0x14] + 8) = 0x40a00000;
  *(undefined4 *)(param_1[0x19] + 4) = param_3;
  *(int *)param_1[0x19] = param_2;
  FUN_001f2838(DAT_0040f51c,*(undefined1 *)(param_2 + 0x418),3);
  FUN_00103918(DAT_0040f0e0,1);
  FUN_00135b80(*(undefined4 *)param_1[0x19],3);
  iVar1 = *(int *)param_1[0x19];
  FUN_001357b8(auStack_80,*(undefined4 *)(param_1[0x19] + 4));
  FUN_0013dc00(0x40f00000,0x3f800000,iVar1 + 2000,uStack_50,1);
  FUN_001354e0(*(int *)param_1[0x19],*(int *)param_1[0x19] + 2000);
  auVar2 = _qmtc2(0x3fd33333);
  auVar4 = _qmtc2(0x3e4ccccd);
  *(undefined1 *)(*(int *)param_1[0x19] + 0x8b2) = 1;
  iVar1 = *(int *)(*(int *)(param_1[0x19] + 4) + 0x10);
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)param_1[0x19] + 0xa0));
  auVar2 = _vaddbc(auVar3,auVar2);
  auVar2 = _vsubbc(auVar2,auVar4);
  auVar2 = _vaddbc(in_vf0,auVar2);
  auStack_40 = _sqc2(auVar2);
  (**(code **)(iVar1 + 0xa4))
            (auStack_80,*(int *)(param_1[0x19] + 4) + (int)*(short *)(iVar1 + 0xa0));
  auVar2._8_8_ = uStack_48;
  auVar2._0_8_ = uStack_50;
  auVar2 = _lqc2(auVar2);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _lqc2(auStack_40);
  auVar4 = _vsub(auVar3,auVar2);
  *(undefined4 *)(param_1[0x14] + 4) = 5;
  auVar3 = _vmul(auVar4,auVar4);
  auVar2 = _sqc2(auVar4);
  *param_1 = auVar2;
  _vaddabc(auVar3,auVar3);
  auVar2 = _vmaddbc(auVar5,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar2);
  uVar6 = _vwaitq();
  auVar2 = _vmulq(auVar4,uVar6);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  return;
}


// ==== FUN_0011a9d8 @ 0011a9d8 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f51c undefined4
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4bc int

void FUN_0011a9d8(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = (char *)(param_1 + 0x140);
  iVar3 = param_1 + 0x20;
  iVar4 = 0x1000000;
  do {
    if (*pcVar2 != '\0') {
      FUN_0012a280(DAT_0040f4d0,iVar3);
      *pcVar2 = '\0';
    }
    iVar3 = iVar3 + 0x120;
    iVar1 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
    pcVar2 = pcVar2 + 1;
  } while (iVar1 < 1);
  FUN_001f2838(DAT_0040f51c,*(undefined1 *)(*(int *)(param_1 + 400) + 0x418),1);
  *(undefined1 *)(*(int *)(param_1 + 400) + 0x8b2) = 0;
  iVar3 = *(int *)(param_1 + 400);
  if (*(int *)(param_1 + 0x144) != 1) {
    FUN_001354e0(iVar3,iVar3 + 0x4f0);
    FUN_00135b80(*(undefined4 *)(param_1 + 400),2);
    FUN_00105228(DAT_0040f0e0 + 0x20220,2);
    goto LAB_0011ab3c;
  }
  FUN_00135b80(iVar3,0);
  iVar3 = *(int *)(DAT_0040f0e0 + 0x2014c);
  iVar4 = *(int *)(param_1 + 400);
  if (iVar3 == 1) {
    *(undefined4 *)(iVar4 + 0x2f8) = 0x44160000;
LAB_0011aaf8:
    iVar3 = *(int *)(param_1 + 400);
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        *(undefined4 *)(iVar4 + 0x2f8) = 0x44160000;
      }
      goto LAB_0011aaf8;
    }
    if (iVar3 < 4) {
      *(undefined4 *)(iVar4 + 0x2f8) = 0x43bb8000;
      goto LAB_0011aaf8;
    }
    iVar3 = *(int *)(param_1 + 400);
  }
  FUN_001354e0(iVar3,iVar3 + 0x4f0);
LAB_0011ab3c:
  FUN_00103918(DAT_0040f0e0,0);
  (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
            (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),9,0);
  FUN_0027f9c0(DAT_0040f4d0,1);
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  return;
}


// ==== FUN_0011aba8 @ 0011aba8 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_0011aba8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x194) + 0x10);
  (**(code **)(iVar1 + 0xa4))(auStack_110,*(int *)(param_1 + 0x194) + (int)*(short *)(iVar1 + 0xa0))
  ;
  auVar4 = _qmtc2(0x3fd33333);
  auVar5 = _qmtc2(0x3e4ccccd);
  iVar1 = *(int *)(param_1 + 400);
  auVar6 = *(undefined1 (*) [16])(iVar1 + 0xd0);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar4 = _vaddbc(auVar7,auVar4);
  auVar5 = _vsubbc(auVar4,auVar5);
  auVar4 = *(undefined1 (*) [16])(iVar1 + 0xe0);
  auVar5 = _vaddbc(in_vf0,auVar5);
  auStack_80 = _sqc2(auVar5);
  iVar1 = *(int *)(param_1 + 0x10) * 0x10000 + (*(int *)(param_1 + 0x10) >> 0x10);
  *(int *)(param_1 + 0x10) = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar1;
  fVar3 = (float)*(uint *)(param_1 + 0x10) * 2.3283064e-10 - 0.5;
  uVar2 = FUN_0029e688(fVar3 + fVar3,0x40000000);
  auVar5 = _qmtc2(0x3eb33333);
  auVar4 = _lqc2(auVar4);
  auVar5 = _vmulbc(auVar4,auVar5);
  iVar1 = *(int *)(param_1 + 0x10) * 0x10000 + (*(int *)(param_1 + 0x10) >> 0x10);
  *(int *)(param_1 + 0x10) = iVar1;
  auVar4 = _qmtc2(uVar2);
  auVar5 = _vmulbc(auVar5,auVar4);
  auVar4 = _lqc2(auStack_80);
  auVar4 = _vadd(auVar4,auVar5);
  iVar1 = iVar1 + *(int *)(param_1 + 0x14);
  auStack_70 = _sqc2(auVar4);
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar1;
  fVar3 = (float)*(uint *)(param_1 + 0x10) * 2.3283064e-10 - 0.5;
  uVar2 = FUN_0029e688(fVar3 + fVar3,0x40000000);
  auVar4 = _lqc2(auVar6);
  auVar6 = _qmtc2(0x3eb33333);
  auVar5 = _qmtc2(uVar2);
  auVar4 = _vmulbc(auVar4,auVar6);
  auVar6 = _lqc2(auStack_70);
  auVar4 = _vmulbc(auVar4,auVar5);
  auVar6 = _vadd(auVar6,auVar4);
  auVar4._4_4_ = uStack_dc;
  auVar4._0_4_ = uStack_e0;
  auVar4._8_4_ = uStack_d8;
  auVar4._12_4_ = uStack_d4;
  auVar10 = _lqc2(auVar4);
  auStack_70 = _sqc2(auVar6);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vsub(auVar6,auVar10);
  auVar4 = _vmul(auVar5,auVar5);
  _vaddabc(auVar4,auVar4);
  auVar6 = _vmaddbc(auVar8,auVar4);
  auVar4 = _pextlw(0,0);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar2 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar2);
  auVar4 = _pextlw(0x3f800000,auVar4._0_8_);
  uStack_d0 = auVar4._0_4_;
  auVar6 = _qmtc2(uStack_d0);
  _vopmula(auVar6,auVar5);
  auVar7 = _vopmsub(auVar5,auVar6);
  auVar6 = _vmul(auVar7,auVar7);
  auVar9 = _vmove(auVar7);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar2 = _vwaitq();
  auVar9 = _vmulq(auVar9,uVar2);
  _sqc2(auVar7);
  auVar7 = _vmove(auVar5);
  auVar6 = _qmtc2(0x40200000);
  _vopmula(auVar5,auVar9);
  auVar8 = _vopmsub(auVar9,auVar5);
  uStack_cc = auVar4._4_4_;
  uStack_c8 = auVar4._8_4_;
  uStack_c4 = auVar4._12_4_;
  iVar1 = param_1 + 0x20;
  uStack_e0 = uStack_90;
  uStack_dc = uStack_8c;
  uStack_d8 = uStack_88;
  uStack_d4 = uStack_84;
  auVar4 = _vmulbc(auVar7,auVar6);
  auStack_140 = _sqc2(auVar8);
  auStack_60 = _sqc2(auVar4);
  auStack_a0 = _sqc2(auVar5);
  auStack_b0 = _sqc2(auVar8);
  auStack_100 = _sqc2(auVar8);
  auStack_f0 = _sqc2(auVar5);
  auStack_130 = _sqc2(auVar5);
  auStack_150 = _sqc2(auVar9);
  auStack_120 = _sqc2(auVar10);
  auStack_c0 = _sqc2(auVar9);
  auStack_110 = _sqc2(auVar9);
  FUN_0012a158(DAT_0040f4d0,iVar1);
  auVar4 = _qmtc2(0x40a00000);
  auVar5 = _lqc2(auStack_130);
  auVar6 = _lqc2(auStack_140);
  auVar7 = _vmulbc(auVar5,auVar4);
  auVar5 = _lqc2(auStack_150);
  auVar6 = _vmulbc(auVar6,auVar4);
  auVar4 = _vmulbc(auVar5,auVar4);
  auStack_130 = _sqc2(auVar7);
  auStack_140 = _sqc2(auVar6);
  auStack_150 = _sqc2(auVar4);
  FUN_00125f88(iVar1,auStack_150);
  FUN_0014a978(iVar1,auStack_60._0_8_);
  (**(code **)(*(int *)(param_1 + 0x30) + 0xc))(0,iVar1 + *(short *)(*(int *)(param_1 + 0x30) + 8));
  *(undefined1 *)(param_1 + 0x140) = 1;
  return;
}


// ==== FUN_0011af50 @ 0011af50 ====

bool FUN_0011af50(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = _lqc2(param_1[0xc]);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar3);
  *param_2 = auVar1;
  auVar2 = _lqc2(*param_1);
  auVar1 = _lqc2(*(undefined1 (*) [16])(*(int *)param_1[0x19] + 0x100));
  auVar1 = _vsub(auVar1,auVar3);
  auVar1 = _vmul(auVar1,auVar2);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar4,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  return 0.70710677 < auVar1._0_4_;
}


