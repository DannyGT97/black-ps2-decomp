// ==== FUN_0020e6c8 @ 0020e6c8 ====

void FUN_0020e6c8(void)

{
  uGpffff92f8 = 0;
  FUN_001c5b48(DAT_0040f4c0,0);
  FUN_00125060(DAT_0040f0e0);
  FUN_0020a220(DAT_0040f544);
  DAT_003be7a8 = 1;
  FUN_00215788(0);
  return;
}


// ==== FUN_0020e720 @ 0020e720 ====

void FUN_0020e720(void)

{
  FUN_0020e630(0);
  DAT_003be7a8 = 2;
  DAT_003be7ac = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  return;
}


// ==== FUN_0020e768 @ 0020e768 ====

void FUN_0020e768(void)

{
  uGpffff92e8 = 0;
  FUN_001c5b48(DAT_0040f4c0,0);
  FUN_00125060(DAT_0040f0e0);
  FUN_0020a220(DAT_0040f544);
  return;
}


// ==== FUN_0020e7a8 @ 0020e7a8 ====

void FUN_0020e7a8(void)

{
  uGpffff92e8 = 1;
  FUN_001c5b48(DAT_0040f4c0,2);
  FUN_00125060(DAT_0040f0e0);
  FUN_0020a220(DAT_0040f544);
  DAT_003be7a8 = 1;
  return;
}


// ==== FUN_0020e7f8 @ 0020e7f8 ====

void FUN_0020e7f8(void)

{
  FUN_0020e768(0);
  DAT_003be7a8 = 3;
  DAT_003be7ac = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  return;
}


// ==== FUN_0020e840 @ 0020e840 ====

void FUN_0020e840(void)

{
  if (DAT_003be7a8 == 2) {
    FUN_00215788(0);
  }
  DAT_003be7a8 = 1;
  return;
}


// ==== FUN_0020e880 @ 0020e880 ====

void FUN_0020e880(void)

{
  if (DAT_003be7a8 == 2) {
    FUN_00215788(0);
  }
  DAT_003be7a8 = 1;
  return;
}


// ==== FUN_0020e8c8 @ 0020e8c8 ====

void FUN_0020e8c8(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar4 = 0;
  puVar5 = &DAT_00491fb0;
  iVar6 = -1;
  do {
    iVar1 = FUN_00123c90(0x48efa8,iVar4,0);
    iVar2 = DAT_0040f0e0;
    if (*(char *)(iVar1 + 0x1a) == '\0') {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
      iVar2 = FUN_00123c90(0x48efa8,iVar4,*(undefined4 *)(iVar2 + 0x2014c));
      if (*(char *)(iVar2 + 0x1a) != '\0') {
        iVar6 = iVar4;
      }
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 8);
  iVar4 = DAT_003be7d4;
  if (DAT_003be7d4 == -1) {
    iVar4 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    if (cGpffff860a == '\0') {
      iVar4 = iVar4 + 1;
      if ((cGpffff860b == '\0') && (iVar4 = iVar6, iVar6 == -1)) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0;
    }
  }
  DAT_0040eb3c = *(undefined4 *)(DAT_0040f0e0 + 0x2014c);
  DAT_0040eb38 = 0;
  (&DAT_00491fb0)[iVar4] = 2;
  piVar3 = (int *)FUN_00123c90(0x48efa8,iVar4,0);
  if (*piVar3 == 2) {
    DAT_0040eb38 = DAT_0040eb38 | 1;
  }
  piVar3 = (int *)FUN_00123c90(0x48efa8,iVar4,1);
  if (*piVar3 == 2) {
    DAT_0040eb38 = DAT_0040eb38 | 2;
  }
  piVar3 = (int *)FUN_00123c90(0x48efa8,iVar4,2);
  if (*piVar3 == 2) {
    DAT_0040eb38 = DAT_0040eb38 | 4;
  }
  piVar3 = (int *)FUN_00123c90(0x48efa8,iVar4,3);
  if (*piVar3 == 2) {
    DAT_0040eb38 = DAT_0040eb38 | 8;
  }
  return;
}


// ==== fe_FELevelUnlocked1_0020eac8 @ 0020eac8 ====

/* Strings referenciadas:
     "FELevelUnlocked1"
     "FELevelUnlocked2"
     "LevelSelect"
     "MissionModeSelect_StartLevel"
     "UpdateDificulty"
     "SelectedDifficulty"
     "DifficultyBack"
     "FE_DIFFICULTYDESC"
     "FE_LEVEL_AND_RATING"
     "FE_LEVELNAME"
     "FE_OVERALLRATING2"
     "FE_CURRENTDIFFICULTY"
     ... */

undefined4 fe_FELevelUnlocked1_0020eac8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  int iVar5;
  
  FUN_0020df68(param_1,0x3facd0,0x20ef28);
  iVar5 = 7;
  FUN_0020df68(param_1,0x3face0,0x20f268);
  FUN_0020df68(param_1,0x3fad00,0x20f490);
  FUN_0020df68(param_1,0x3fad10,0x20f5a0);
  FUN_0020df68(param_1,0x3fad28,0x20f5e8);
  DAT_0040eb40 = 3;
  DAT_0040eb38 = 0;
  DAT_0040eafc = 0;
  FUN_0020dcb0(0x491fd0);
  FUN_0020dcb0(0x491fe0);
  FUN_0020dcb0(0x491ff0);
  FUN_0020dcb0(0x492000);
  FUN_0020dcb0(0x492010);
  FUN_0020dcf8(0x491fd0,0x3fad38);
  FUN_0020dcf8(0x491fe0,0x3fad50);
  FUN_0020dcf8(0x491ff0,0x3fad68);
  FUN_0020dcf8(0x492000,0x3fad78);
  FUN_0020dcf8(0x492010,0x3fad90);
  ppuVar4 = &PTR_s_FELevelUnlocked1_003be7b0;
  puVar3 = &DAT_00491fb0;
  do {
    puVar1 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    FUN_0020e068(param_1,puVar1,puVar3);
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar5);
  FUN_0020e068(param_1,0x3fada8,0x40eb40);
  FUN_0020e068(param_1,0x3fadc0,0x40eb3c);
  FUN_0020e068(param_1,0x3fadd8,0x40eb38);
  FUN_0020e8c8();
  if (DAT_0040eb3c == 1) {
    uVar2 = 0x3fae00;
  }
  else if (DAT_0040eb3c < 2) {
    if (DAT_0040eb3c != 0) {
      DAT_003be7d4 = 0xffffffff;
      return 1;
    }
    uVar2 = 0x3fade8;
  }
  else {
    if (DAT_0040eb3c != 2) {
      if (DAT_0040eb3c != 3) {
        DAT_003be7d4 = 0xffffffff;
        return 1;
      }
      uVar2 = FUN_001087c8(DAT_0040f4c4,0x3fae38);
      FUN_0020de28(0x491fd0,uVar2);
      DAT_003be7d4 = 0xffffffff;
      return 1;
    }
    uVar2 = 0x3fae20;
  }
  uVar2 = FUN_001087c8(DAT_0040f4c4,uVar2);
  FUN_0020de28(0x491fd0,uVar2);
  DAT_003be7d4 = 0xffffffff;
  return 1;
}


// ==== fe_FELevelUnlocked1_0020edb0 @ 0020edb0 ====

/* Strings referenciadas:
     "FELevelUnlocked1"
     "FELevelUnlocked2"
     "LevelSelect"
     "MissionModeSelect_StartLevel"
     "UpdateDificulty"
     "SelectedDifficulty"
     "DifficultyBack"
     "FE_MissionDifficulty"
     "FE_DifficultySelection"
     "FE_MissionDone" */

undefined4 fe_FELevelUnlocked1_0020edb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  
  iVar3 = 7;
  FUN_0020df90(param_1,0x3facd0);
  FUN_0020df90(param_1,0x3face0);
  FUN_0020df90(param_1,0x3fad00);
  FUN_0020df90(param_1,0x3fad10);
  FUN_0020df90(param_1,0x3fad28);
  FUN_0020dd48(0x491fd0);
  FUN_0020dd48(0x491fe0);
  FUN_0020dd48(0x491ff0);
  FUN_0020dd48(0x492000);
  FUN_0020dd48(0x492010);
  FUN_0020df30(0x491fe0);
  FUN_0020df30(0x491ff0);
  FUN_0020df30(0x492000);
  FUN_0020df30(0x492010);
  ppuVar2 = &PTR_s_FELevelUnlocked1_003be7b0;
  puVar1 = PTR_s_FELevelUnlocked1_003be7b0;
  while( true ) {
    ppuVar2 = ppuVar2 + 1;
    iVar3 = iVar3 + -1;
    FUN_0020e0c8(param_1,puVar1);
    if (iVar3 < 0) break;
    puVar1 = *ppuVar2;
  }
  DAT_003be7d4 = 0xffffffff;
  uGpffff860b = 0;
  uGpffff860a = 0;
  FUN_0020e0c8(param_1,0x3fada8);
  FUN_0020e0c8(param_1,0x3fadc0);
  FUN_0020e0c8(param_1,0x3fadd8);
  return 1;
}


// ==== fe_FE_LOCKED_0020ef28 @ 0020ef28 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_LOCKED"
     "FE_DIFFEASY"
     "FE_DIFFNORMAL"
     "FE_DIFFHARD"
     "FE_BLACKOPS" */

void fe_FE_LOCKED_0020ef28(void)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [48];
  
  uVar4 = FUN_0035e750();
  DAT_0040eb38 = 0;
  DAT_003be7d4 = (undefined4)uVar4;
  piVar2 = (int *)FUN_00123c90(0x48efa8,uVar4,0);
  if (*piVar2 == 2) {
    DAT_0040eb38 = DAT_0040eb38 | 1;
  }
  piVar2 = (int *)FUN_00123c90(0x48efa8,uVar4,1);
  if (*piVar2 == 2) {
    DAT_0040eb38 = DAT_0040eb38 | 2;
  }
  piVar2 = (int *)FUN_00123c90(0x48efa8,uVar4,2);
  if (*piVar2 == 2) {
    DAT_0040eb38 = DAT_0040eb38 | 4;
  }
  piVar2 = (int *)FUN_00123c90(0x48efa8,uVar4,3);
  if (*piVar2 == 2) {
    DAT_0040eb38 = DAT_0040eb38 | 8;
  }
  uVar5 = FUN_001228e0(DAT_0040f4e8,(char)uVar4);
  FUN_0035d728(auStack_d0,0x3fae50,uVar5);
  uVar5 = FUN_001087c8(DAT_0040f4c4,auStack_d0);
  uVar6 = FUN_00123c20(0x48efa8,uVar4);
  iVar3 = FUN_00123c90(0x48efa8,uVar4,uVar6);
  FUN_0020dd88(0x492000);
  if (*(char *)(iVar3 + 0x1a) == '\x01') {
    FUN_0020de28(0x491fe0,uVar5);
  }
  else {
    uVar6 = FUN_001087c8(DAT_0040f4c4,0x3fae60);
    FUN_0020de28(0x491fe0,uVar6);
  }
  FUN_0020de28(0x491ff0,uVar5);
  uVar1 = FUN_001228e0(DAT_0040f4e8,(char)uVar4);
  *(undefined1 *)(DAT_0040f0e0 + 0x2020c) = uVar1;
  *(undefined1 *)(DAT_0040f0e0 + 0x2020d) = 1;
  *(undefined1 *)(DAT_0040f0e0 + 0x2020e) = 1;
  iVar3 = FUN_00123c20(0x48efa8,uVar4);
  DAT_0040eb40 = iVar3 + 1;
  FUN_001ef808(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be7d0);
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be7d0);
  iVar3 = DAT_0040eb40 + -1;
  if (iVar3 == 1) {
    uVar4 = 0x3fae80;
  }
  else if (iVar3 < 2) {
    if (DAT_0040eb40 != 1) {
LAB_0020f22c:
      FUN_0020dd88(0x492010);
      return;
    }
    uVar4 = 0x3fae70;
  }
  else if (iVar3 == 2) {
    uVar4 = 0x3fae90;
  }
  else {
    if (iVar3 != 3) goto LAB_0020f22c;
    uVar4 = 0x3faea0;
  }
  uVar4 = FUN_001087c8(DAT_0040f4c4,uVar4);
  FUN_0020de28(0x492010,uVar4);
  return;
}


// ==== FUN_0020f268 @ 0020f268 ====

/* Strings referenciadas:
     "FMVPlayer" */

void FUN_0020f268(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0xff;
  uVar7 = 0;
  bVar1 = *(byte *)(DAT_0040f0e0 + 0x2020c);
  while( true ) {
    iVar2 = FUN_001229f8(DAT_0040f4e8);
    if (iVar2 <= (int)uVar7) break;
    uVar4 = FUN_001228e0(DAT_0040f4e8,(char)uVar7);
    if (uVar4 == bVar1) {
      uVar8 = uVar7 & 0xff;
      iVar2 = FUN_001229f8(DAT_0040f4e8);
      uVar7 = iVar2 + 1;
    }
    else {
      uVar7 = uVar7 + 1;
    }
  }
  lVar5 = FUN_00123bd0(0x48efa8,uVar8,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
  if (lVar5 != 1) {
    return;
  }
  DAT_0040eafc = 0;
  uVar6 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  piVar3 = (int *)FUN_00123c90(0x48efa8,uVar6,0);
  if (*piVar3 < 0) {
    uVar6 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    piVar3 = (int *)FUN_00123c90(0x48efa8,uVar6,1);
    if (*piVar3 < 0) {
      uVar6 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
      piVar3 = (int *)FUN_00123c90(0x48efa8,uVar6,2);
      if (*piVar3 < 0) {
        uVar6 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
        piVar3 = (int *)FUN_00123c90(0x48efa8,uVar6,3);
        if (*piVar3 < 0) {
          DAT_0040eae0 = 0;
          goto LAB_0020f3f8;
        }
      }
    }
  }
  uGpffff92f0 = 1;
LAB_0020f3f8:
  fe_FE_SECONDARYOBJECTIVETARGET_00217408();
  DAT_0040eadc = DAT_0040f0e0 + 0x20f78;
  FUN_00216af0(0x103db0);
  FUN_0020e118(DAT_0040f0e0 + 0x20260,1);
  iVar2 = DAT_0040f544;
  FUN_0035cbc0(DAT_0040f544 + 0x3820,0x3fa878);
  if (*(char *)(iVar2 + 0x3840) == '\0') {
    *(undefined4 *)(iVar2 + 0x388c) = 1;
  }
  else {
    *(undefined4 *)(iVar2 + 0x3884) = 1;
  }
  return;
}


// ==== fe_FE_DIFFICULTYDESC_EASY_0020f490 @ 0020f490 ====

/* Strings referenciadas:
     "FE_DIFFICULTYDESC_EASY"
     "FE_DIFFICULTYDESC_NORMAL"
     "FE_DIFFICULTYDESC_HARD"
     "FE_DIFFICULTYDESC_BLACK" */

void fe_FE_DIFFICULTYDESC_EASY_0020f490(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0035e750();
  *(int *)(DAT_0040f0e0 + 0x2014c) = (int)lVar1;
  if (lVar1 == 1) {
    uVar2 = 0x3fae00;
  }
  else if (lVar1 < 2) {
    if (lVar1 != 0) {
      return;
    }
    uVar2 = 0x3fade8;
  }
  else {
    if (lVar1 != 2) {
      if (lVar1 != 3) {
        return;
      }
      uVar2 = FUN_001087c8(DAT_0040f4c4,0x3fae38);
      FUN_0020de28(0x491fd0,uVar2);
      return;
    }
    uVar2 = 0x3fae20;
  }
  uVar2 = FUN_001087c8(DAT_0040f4c4,uVar2);
  FUN_0020de28(0x491fd0,uVar2);
  return;
}


// ==== FUN_0020f5a0 @ 0020f5a0 ====

void FUN_0020f5a0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0035e750();
  *(undefined4 *)(DAT_0040f0e0 + 0x2014c) = uVar1;
  fe_FE_SECONDARYOBJECTIVETARGET_00217408();
  FUN_0020f268(param_1);
  return;
}


// ==== FUN_0020f5e8 @ 0020f5e8 ====

/* Strings referenciadas:
     "BlackTitleMenu2"
     "MissionModeSelect" */

void FUN_0020f5e8(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_00123bd0(0x48efa8,1,0);
  if ((((lVar1 == 0) && (lVar1 = FUN_00123bd0(0x48efa8,1,1), lVar1 == 0)) &&
      (lVar1 = FUN_00123bd0(0x48efa8,1,2), lVar1 == 0)) &&
     (lVar1 = FUN_00123bd0(0x48efa8,1,3), iVar2 = DAT_0040f544, lVar1 == 0)) {
    FUN_0035cbc0(DAT_0040f544 + 0x3820,0x3faeb0);
    if (*(char *)(iVar2 + 0x3840) != '\0') {
      *(undefined4 *)(iVar2 + 0x3884) = 1;
      return;
    }
  }
  else {
    iVar2 = DAT_0040f544;
    FUN_0035cbc0(DAT_0040f544 + 0x3820,0x3faec0);
    if (*(char *)(iVar2 + 0x3840) != '\0') {
      *(undefined4 *)(iVar2 + 0x3884) = 1;
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x388c) = 1;
  return;
}


// ==== fe_FEDiffMode_0020f6c8 @ 0020f6c8 ====

/* Strings referenciadas:
     "SetCurrentObjectives"
     "ClosePauseMenu"
     "RestartLevel"
     "QuitLevel"
     "ChangeObjectiveHint"
     "FEDiffMode"
     "FE_CURRENTOBJECTIVE"
     "FE_CURRENTSECONDARYOBJECTIVE"
     "FE_PRIMARYRATING"
     "FE_SECONDARYRATING"
     "FE_BLACKMAILRATING"
     "FE_INTELRATING"
     ... */

undefined4 fe_FEDiffMode_0020f6c8(undefined8 param_1)

{
  FUN_0020df68(param_1,0x3faed8,0x20faf0);
  FUN_0020df68(param_1,0x3faef0,0x210160);
  FUN_0020df68(param_1,0x3faf00,0x2101b8);
  FUN_0020df68(param_1,0x3faf10,0x210228);
  FUN_0020df68(param_1,0x3faf20,0x210298);
  FUN_0020e068(param_1,0x3faf38,0x40eb44);
  FUN_0020dcb0(0x492020);
  FUN_0020dcb0(0x492030);
  FUN_0020dcb0(0x492040);
  FUN_0020dcb0(0x492050);
  FUN_0020dcb0(0x492060);
  FUN_0020dcb0(0x492070);
  FUN_0020dcb0(0x492080);
  FUN_0020dcb0(0x492090);
  FUN_0020dcb0(0x4920a0);
  FUN_0020dcb0(0x4920b0);
  FUN_0020dcb0(0x4920c0);
  FUN_0020dcf8(0x492020,0x3faf48);
  FUN_0020dcf8(0x492030,0x3faf60);
  FUN_0020dcf8(0x492040,0x3faf80);
  FUN_0020dcf8(0x492050,0x3faf98);
  FUN_0020dcf8(0x492060,0x3fafb0);
  FUN_0020dcf8(0x492070,0x3fafc8);
  FUN_0020dcf8(0x492080,0x3fafd8);
  FUN_0020dcf8(0x492090,0x3fafe8);
  FUN_0020dcf8(0x4920a0,0x3fb000);
  FUN_0020dcf8(0x4920b0,0x3fb018);
  FUN_0020dcf8(0x4920c0,0x3fb030);
  return 1;
}


// ==== fe_FEDiffMode_0020f920 @ 0020f920 ====

/* Strings referenciadas:
     "SetCurrentObjectives"
     "ClosePauseMenu"
     "RestartLevel"
     "QuitLevel"
     "ChangeObjectiveHint"
     "FEDiffMode" */

undefined4 fe_FEDiffMode_0020f920(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3faed8);
  FUN_0020df90(param_1,0x3faef0);
  FUN_0020df90(param_1,0x3faf00);
  FUN_0020df90(param_1,0x3faf10);
  FUN_0020df90(param_1,0x3faf20);
  FUN_0020e0c8(param_1,0x3faf38);
  FUN_0020dd48(0x492020);
  FUN_0020dd48(0x492030);
  FUN_0020dd48(0x492040);
  FUN_0020dd48(0x492050);
  FUN_0020dd48(0x492060);
  FUN_0020dd48(0x492070);
  FUN_0020dd48(0x492080);
  FUN_0020dd48(0x492090);
  FUN_0020dd48(0x4920a0);
  FUN_0020dd48(0x4920b0);
  FUN_0020dd48(0x4920c0);
  FUN_0020df30(0x492020);
  FUN_0020df30(0x492030);
  FUN_0020df30(0x492040);
  FUN_0020df30(0x492050);
  FUN_0020df30(0x492060);
  FUN_0020df30(0x492070);
  FUN_0020df30(0x492080);
  FUN_0020df30(0x492090);
  FUN_0020df30(0x4920a0);
  FUN_0020df30(0x4920b0);
  FUN_0020df30(0x4920c0);
  return 1;
}


// ==== fe_FE_NOCURRENTPRIMARYOBJECTIVE_0020faf0 @ 0020faf0 ====

/* Strings referenciadas:
     "FE_NOCURRENTPRIMARYOBJECTIVE"
     "FE_NOCURRENTSECONDARYOBJECTIVE"
     "OBJ_CHALLENGE_HEADSHOTS"
     "OBJ_CHALLENGE_TIME"
     "OBJ_CHALLENGE_TARGETS"
     "FE_FORMAT_COUNT_OF_UNKNOWN"
     "FE_FORMAT_COUNT_OF_COUNT"
     "FE_OBJECTIVENOTAPPLICABLE" */

void fe_FE_NOCURRENTPRIMARYOBJECTIVE_0020faf0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iStack_b0;
  
  bVar9 = false;
  bVar10 = false;
  iVar19 = 0;
  iVar20 = 0;
  iVar6 = *(int *)(DAT_0040f0e0 + 0x21070);
  iStack_b0 = 0;
  uVar11 = 0;
  uVar12 = 0;
  if (iVar6 == DAT_0040f0e0 + 0x20f78) {
    iVar18 = 0;
    iVar6 = *(int *)(DAT_0040f4d0 + 0x8f4);
    iVar7 = *(int *)(DAT_0040f4d0 + 0x8f0);
    if (0 < iVar6) {
      do {
        piVar16 = (int *)(iVar18 * 0xc + iVar7);
        iVar8 = *piVar16;
        if ((*(ulong *)(iVar8 + 0x10) & 0x3e0000000000) == 0) {
          if (((!bVar9) && (piVar16[2] != 3)) && (piVar16[2] - 1U < 2)) {
            bVar9 = true;
            uVar13 = FUN_00108818(DAT_0040f4c4,*(undefined4 *)(iVar8 + 0x10));
            FUN_0020de28(0x492020,uVar13);
          }
        }
        else {
          bVar5 = *(byte *)(iVar8 + 0x15);
          if ((bVar5 >> 1 & 1) == 0) {
            if ((bVar5 >> 2 & 1) == 0) {
              if ((bVar5 >> 3 & 1) == 0) {
                if ((bVar5 >> 4 & 1) == 0) {
                  if (((bVar5 >> 5 & 1) != 0) && (piVar16[2] == 3)) {
                    uVar12 = 1;
                  }
                }
                else if (piVar16[2] == 3) {
                  uVar11 = 1;
                }
              }
              else {
                iStack_b0 = iStack_b0 + *(char *)(iVar8 + 0x14);
              }
            }
            else {
              iVar20 = iVar20 + *(char *)(iVar8 + 0x14);
            }
          }
          else {
            iVar19 = iVar19 + *(char *)(iVar8 + 0x14);
            if (((!bVar10) && (piVar16[2] != 3)) && (piVar16[2] - 1U < 2)) {
              bVar10 = true;
              uVar13 = FUN_00108818(DAT_0040f4c4,*(undefined4 *)(iVar8 + 0x10));
              FUN_0020de28(0x492030,uVar13);
            }
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar6);
    }
    if (!bVar9) {
      uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb050);
      FUN_0020de28(0x492020,uVar13);
    }
    if (!bVar10) {
      uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb070);
      FUN_0020de28(0x492030,uVar13);
    }
  }
  else if (iVar6 == DAT_0040f0e0 + 0x20fa0) {
    if (*(int *)(*(int *)(iVar6 + 0x30) + 4) == 0) {
      pcVar17 = "OBJ_CHALLENGE_HEADSHOTS";
    }
    else {
      pcVar17 = "OBJ_CHALLENGE_TIME";
    }
    uVar13 = FUN_001087c8(DAT_0040f4c4,pcVar17);
    FUN_0020de28(0x492020,uVar13);
  }
  else {
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb0c0);
    FUN_0020de28(0x492020,uVar13);
  }
  iVar6 = *DAT_0040f4dc;
  uVar1 = *(undefined1 *)(iVar6 + 0x15);
  uVar2 = *(undefined1 *)(iVar6 + 0x18);
  uVar3 = *(undefined1 *)(iVar6 + 0x16);
  uVar4 = *(undefined1 *)(iVar6 + 0x17);
  uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb0d8);
  FUN_0020dec8(0x492040,uVar13,uVar1);
  if (*(int *)(DAT_0040f0e0 + 0x2014c) == 3) {
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492050,uVar13,uVar3,iVar19);
  }
  else {
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
    FUN_0020de28(0x492050,uVar13);
  }
  if (*(int *)(DAT_0040f0e0 + 0x2014c) == 0) {
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
    FUN_0020de28(0x492060,uVar13);
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
    FUN_0020de28(0x492070,uVar13);
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
    FUN_0020de28(0x492080,uVar13);
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
    FUN_0020de28(0x492090,uVar13);
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
    FUN_0020de28(0x4920b0,uVar13);
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
    FUN_0020de28(0x4920c0,uVar13);
  }
  else {
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492060,uVar13,uVar4,iVar20);
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492070,uVar13,uVar2,iStack_b0);
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492080,uVar13,uVar11,1);
    uVar13 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492090,uVar13,uVar12,1);
    uVar13 = FUN_00122660(DAT_0040f4dc);
    uVar14 = FUN_00160aa8(DAT_0040f4d0 + 0x8f0,*(undefined1 *)(DAT_0040f0e0 + 0x2014c));
    uVar15 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x4920b0,uVar15,uVar13,uVar14);
    uVar13 = FUN_00210378();
    uVar15 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x4920c0,uVar15,uVar13,uVar14);
  }
  iVar6 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar6 < 3) {
    if (0 < iVar6) {
      DAT_0040eb44 = 1;
      return;
    }
    if (iVar6 == 0) {
      DAT_0040eb44 = 0;
      return;
    }
  }
  DAT_0040eb44 = 2;
  return;
}


// ==== FUN_00210160 @ 00210160 ====

void FUN_00210160(void)

{
  FUN_001f2838(DAT_0040f51c,0,*(undefined4 *)(DAT_0040f544 + 0x3928));
  FUN_0020b988(DAT_0040f544,4);
  FUN_0020aff8(DAT_0040f544);
  FUN_00103818(DAT_0040f0e0);
  return;
}


// ==== FUN_002101b8 @ 002101b8 ====

void FUN_002101b8(void)

{
  FUN_001f2838(DAT_0040f51c,0,1);
  FUN_00122a48(DAT_0040f4e8);
  FUN_0020b988(DAT_0040f544,4);
  FUN_0020aff8(DAT_0040f544);
  FUN_0016c380(DAT_0040f4d0 + 0x3f0);
  FUN_001035d0(DAT_0040f0e0);
  return;
}


// ==== FUN_00210228 @ 00210228 ====

void FUN_00210228(void)

{
  FUN_001f2838(DAT_0040f51c,0,1);
  FUN_00122a48(DAT_0040f4e8);
  FUN_0020b988(DAT_0040f544,4);
  FUN_0020aff8(DAT_0040f544);
  FUN_00105228(DAT_0040f0e0 + 0x20220,1);
  return;
}


// ==== fe_FE_DESTRUCTION_HINT_00210298 @ 00210298 ====

/* Strings referenciadas:
     "FE_DESTRUCTION_HINT"
     "FE_COMPLETEALLPRIMARYOBJECTIVES"
     "FE_BLACKMAIL_HINT"
     "FE_INTEL_HINT"
     "FE_RECON_HINT"
     "FE_ARAMAMENT_HINT" */

void fe_FE_DESTRUCTION_HINT_00210298(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3fb138;
  if (*(int *)(DAT_0040f0e0 + 0x2014c) == 0) {
    uVar2 = 0x3fb150;
  }
  else {
    uVar1 = FUN_0035e750();
    switch(uVar1) {
    case 0:
    case 1:
      uVar2 = 0x3fb138;
      break;
    case 2:
      uVar2 = 0x3fb170;
      break;
    case 3:
      uVar2 = 0x3fb188;
      break;
    case 4:
      uVar2 = 0x3fb198;
      break;
    case 5:
      uVar2 = 0x3fb1a8;
    }
  }
  uVar2 = FUN_001087c8(DAT_0040f4c4,uVar2);
  FUN_0020de28(0x4920a0,uVar2);
  return;
}


// ==== FUN_00210378 @ 00210378 ====

int FUN_00210378(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int aiStack_60 [4];
  
  iVar3 = DAT_0040f4d0 + 0x910;
  uVar1 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f4d0 + 0x5aac));
  lVar2 = FUN_0012f880(iVar3,uVar1,*(undefined4 *)(DAT_0040f0e0 + 0x2014c),aiStack_60);
  if (lVar2 == 1) {
    iVar3 = 0;
  }
  else if (lVar2 < 2) {
    iVar3 = 0;
    if (lVar2 == 0) {
      iVar3 = FUN_00160aa8(DAT_0040f4d0 + 0x8f0,*(undefined1 *)(DAT_0040f0e0 + 0x2014c));
    }
  }
  else {
    iVar3 = 0;
    if (lVar2 == 2) {
      iVar3 = aiStack_60[0];
    }
  }
  return iVar3;
}


// ==== fe_FEInvertLookFlag_00210450 @ 00210450 ====

/* Strings referenciadas:
     "FEInvertLookFlag"
     "FEToggleCrouchFlag"
     "FEVibration"
     "FESFXVolume"
     "FEMusicVolume"
     "ToggleInvertLook"
     "ToggleCrouchOnOff"
     "ToggleVibration"
     "SetSfxValue"
     "SetMusicValue" */

undefined4 fe_FEInvertLookFlag_00210450(undefined8 param_1)

{
  DAT_003be7e4 = (int)(*(float *)(DAT_0040f0e0 + 0x2015c) * 100.0);
  DAT_003be7e8 = (int)(*(float *)(DAT_0040f0e0 + 0x20160) * 100.0);
  DAT_003be7d8 = (uint)*(byte *)(DAT_0040f4d0 + 0x611);
  DAT_003be7dc = (uint)*(byte *)(DAT_0040f4d0 + 0x612);
  DAT_003be7e0 = (uint)*(byte *)(DAT_0040f0e0 + 0x20168);
  FUN_0020e068(param_1,0x3fb1d8,0x3be7d8);
  FUN_0020e068(param_1,0x3fb1f0,0x3be7dc);
  FUN_0020e068(param_1,0x3fb208,0x3be7e0);
  FUN_0020e068(param_1,0x3fb218,0x3be7e4);
  FUN_0020e068(param_1,0x3fb228,0x3be7e8);
  FUN_0020df68(param_1,0x3fb238,0x2107d8);
  FUN_0020df68(param_1,0x3fb250,0x210850);
  FUN_0020df68(param_1,0x3fb268,0x2108c8);
  FUN_0020df68(param_1,0x3fb278,0x2106b8);
  FUN_0020df68(param_1,0x3fb288,0x210748);
  DAT_003be7ec = 0;
  return 1;
}


// ==== fe_FEInvertLookFlag_002105f8 @ 002105f8 ====

/* Strings referenciadas:
     "FEInvertLookFlag"
     "FEToggleCrouchFlag"
     "FEVibration"
     "FESFXVolume"
     "FEMusicVolume"
     "ToggleInvertLook"
     "ToggleCrouchOnOff"
     "ToggleVibration"
     "SetSfxValue"
     "SetMusicValue" */

undefined4 fe_FEInvertLookFlag_002105f8(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fb238);
  FUN_0020df90(param_1,0x3fb250);
  FUN_0020df90(param_1,0x3fb268);
  FUN_0020df90(param_1,0x3fb278);
  FUN_0020df90(param_1,0x3fb288);
  FUN_0020e0c8(param_1,0x3fb1d8);
  FUN_0020e0c8(param_1,0x3fb1f0);
  FUN_0020e0c8(param_1,0x3fb208);
  FUN_0020e0c8(param_1,0x3fb218);
  FUN_0020e0c8(param_1,0x3fb228);
  return 1;
}


// ==== FUN_002106b8 @ 002106b8 ====

void FUN_002106b8(void)

{
  DAT_003be7e4 = FUN_0035e750();
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be7ec);
  *(float *)(DAT_0040f0e0 + 0x2015c) = (float)DAT_003be7e4 / 100.0;
  FUN_001d5da8(*(undefined4 *)(DAT_0040f0e0 + 0x2015c),DAT_0040f510);
  return;
}


// ==== FUN_00210748 @ 00210748 ====

void FUN_00210748(void)

{
  DAT_003be7e8 = FUN_0035e750();
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be7ec);
  *(float *)(DAT_0040f0e0 + 0x20160) = (float)DAT_003be7e8 / 100.0;
  FUN_001d5d40(*(undefined4 *)(DAT_0040f0e0 + 0x20160),DAT_0040f510);
  return;
}


// ==== FUN_002107d8 @ 002107d8 ====

void FUN_002107d8(void)

{
  long lVar1;
  
  lVar1 = FUN_0035e750();
  DAT_003be7d8 = (undefined4)lVar1;
  *(bool *)(DAT_0040f4d0 + 0x611) = lVar1 != 0;
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be7ec);
  *(bool *)(DAT_0040f0e0 + 0x20167) = lVar1 != 0;
  return;
}


// ==== FUN_00210850 @ 00210850 ====

void FUN_00210850(void)

{
  long lVar1;
  
  lVar1 = FUN_0035e750();
  DAT_003be7dc = (undefined4)lVar1;
  *(bool *)(DAT_0040f4d0 + 0x612) = lVar1 != 0;
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be7ec);
  *(bool *)(DAT_0040f0e0 + 0x20165) = lVar1 != 0;
  return;
}


// ==== FUN_002108c8 @ 002108c8 ====

void FUN_002108c8(void)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_0035e750();
  DAT_003be7e0 = (undefined4)lVar3;
  bVar1 = false;
  if ((lVar3 == 1) && (bVar1 = true, *(char *)(DAT_0040f0e0 + 0x20168) != '\0')) {
    bVar1 = false;
  }
  bVar2 = false;
  if ((lVar3 == 0) && (bVar2 = true, *(char *)(DAT_0040f0e0 + 0x20168) == '\0')) {
    bVar2 = false;
  }
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be7ec);
  if (bVar1) {
    *(undefined1 *)(DAT_0040f0e0 + 0x20168) = 1;
    *(undefined1 *)(DAT_0040f0e8 + 0x77c) = 1;
    FUN_00107788(0x3f000000,0,DAT_0040f0e8,0);
  }
  else if (bVar2) {
    *(undefined1 *)(DAT_0040f0e0 + 0x20168) = 0;
    *(undefined1 *)(DAT_0040f0e8 + 0x77c) = 0;
  }
  return;
}


// ==== fe_FEInvertLookFlag_002109e0 @ 002109e0 ====

/* Strings referenciadas:
     "FEInvertLookFlag"
     "FEToggleCrouchFlag"
     "FEVibration"
     "ToggleInvertLook"
     "ToggleCrouchOnOff"
     "ToggleVibration"
     "FEControllerType"
     "FEDuplicateControlsExist"
     "FEUnboundControlsExist"
     "SetControllerTypeToCustom"
     "ChangeControllerType"
     "ChangeButtonAction"
     ... */

undefined4 fe_FEInvertLookFlag_002109e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  int iVar5;
  
  iVar5 = 0x11;
  FUN_00210db8();
  FUN_0020e068(param_1,0x3fb1d8,0x3be808);
  FUN_0020e068(param_1,0x3fb1f0,0x3be80c);
  FUN_0020e068(param_1,0x3fb208,0x3be810);
  FUN_0020e068(param_1,0x3fb2f8,0x3be814);
  FUN_0020e068(param_1,0x3fb310,0x3be818);
  FUN_0020e068(param_1,0x3fb330,0x3be81c);
  FUN_0020df68(param_1,0x3fb238,0x210e00);
  FUN_0020df68(param_1,0x3fb250,0x210e68);
  FUN_0020df68(param_1,0x3fb268,0x210ed0);
  FUN_0020df68(param_1,0x3fb348,0x2110a0);
  FUN_0020df68(param_1,0x3fb368,0x211108);
  FUN_0020df68(param_1,0x3fb380,0x211210);
  FUN_0020df68(param_1,0x3fb398,0x2115a8);
  FUN_0020df68(param_1,0x3fb3a8,0x211580);
  FUN_0020df68(param_1,0x3fb3b8,0x211380);
  FUN_0020dcb0(0x4920d0);
  FUN_0020dcf8(0x4920d0,0x3fb3d0);
  FUN_0020dcb0(0x4920e0);
  FUN_0020dcf8(0x4920e0,0x3fb3e0);
  ppuVar4 = &PTR_s_FE_CCONF_L1ACTION_003fc650;
  puVar3 = &DAT_004920f0;
  do {
    iVar5 = iVar5 + -1;
    FUN_0020dcb0(puVar3);
    puVar1 = *ppuVar4;
    ppuVar4 = ppuVar4 + 4;
    FUN_0020dcf8(puVar3,puVar1);
    puVar3 = puVar3 + 0xc;
  } while (-1 < iVar5);
  puVar2 = &DAT_0049220c;
  iVar5 = 0x11;
  do {
    *puVar2 = &DAT_003fcb18;
    iVar5 = iVar5 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar5);
  FUN_00210fe8();
  return 1;
}


// ==== fe_FEInvertLookFlag_00210c40 @ 00210c40 ====

/* Strings referenciadas:
     "FEInvertLookFlag"
     "FEToggleCrouchFlag"
     "FEVibration"
     "ToggleInvertLook"
     "ToggleCrouchOnOff"
     "ToggleVibration"
     "FEControllerType"
     "FEDuplicateControlsExist"
     "FEUnboundControlsExist"
     "SetControllerTypeToCustom"
     "ChangeControllerType"
     "ChangeButtonAction"
     ... */

undefined4 fe_FEInvertLookFlag_00210c40(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_0020df90(param_1,0x3fb238);
  FUN_0020df90(param_1,0x3fb250);
  FUN_0020df90(param_1,0x3fb268);
  FUN_0020df90(param_1,0x3fb348);
  FUN_0020df90(param_1,0x3fb368);
  FUN_0020df90(param_1,0x3fb380);
  FUN_0020df90(param_1,0x3fb398);
  FUN_0020df90(param_1,0x3fb3a8);
  FUN_0020df90(param_1,0x3fb3b8);
  FUN_0020e0c8(param_1,0x3fb1d8);
  FUN_0020e0c8(param_1,0x3fb1f0);
  FUN_0020e0c8(param_1,0x3fb208);
  FUN_0020e0c8(param_1,0x3fb2f8);
  FUN_0020e0c8(param_1,0x3fb310);
  FUN_0020e0c8(param_1,0x3fb330);
  FUN_0020dd48(0x4920d0);
  FUN_0020df30(0x4920d0);
  FUN_0020dd48(0x4920e0);
  FUN_0020df30(0x4920e0);
  puVar1 = &DAT_004920f0;
  do {
    FUN_0020dd48(puVar1);
    FUN_0020df30(puVar1);
    puVar1 = puVar1 + 0xc;
  } while ((int)puVar1 < 0x4921c8);
  return 1;
}


// ==== FUN_00210db8 @ 00210db8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210db8(void)

{
  DAT_003be808 = (uint)*(byte *)(DAT_0040f0e0 + 0x20167);
  DAT_003be80c = (uint)*(byte *)(DAT_0040f0e0 + 0x20165);
  DAT_003be810 = (uint)*(byte *)(DAT_0040f0e0 + 0x20168);
  _DAT_003be814 = (int)*(char *)(DAT_0040f0e0 + 0x20170);
  return;
}


// ==== FUN_00210e00 @ 00210e00 ====

void FUN_00210e00(void)

{
  DAT_003be808 = FUN_0035e750();
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be804);
  *(bool *)(DAT_0040f0e0 + 0x20167) = DAT_003be808 != 0;
  return;
}


// ==== FUN_00210e68 @ 00210e68 ====

void FUN_00210e68(void)

{
  DAT_003be80c = FUN_0035e750();
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be804);
  *(bool *)(DAT_0040f0e0 + 0x20165) = DAT_003be80c != 0;
  return;
}


// ==== FUN_00210ed0 @ 00210ed0 ====

void FUN_00210ed0(void)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_0035e750();
  DAT_003be810 = (undefined4)lVar3;
  bVar1 = false;
  if ((lVar3 == 1) && (bVar1 = true, *(char *)(DAT_0040f0e0 + 0x20168) != '\0')) {
    bVar1 = false;
  }
  bVar2 = false;
  if ((lVar3 == 0) && (bVar2 = true, *(char *)(DAT_0040f0e0 + 0x20168) == '\0')) {
    bVar2 = false;
  }
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be804);
  if (bVar1) {
    *(undefined1 *)(DAT_0040f0e0 + 0x20168) = 1;
    *(undefined1 *)(DAT_0040f0e8 + 0x77c) = 1;
    FUN_00107788(0x3f000000,0,DAT_0040f0e8,0);
  }
  else if (bVar2) {
    *(undefined1 *)(DAT_0040f0e0 + 0x20168) = 0;
    *(undefined1 *)(DAT_0040f0e8 + 0x77c) = 0;
  }
  return;
}


// ==== FUN_00210fe8 @ 00210fe8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210fe8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0x11;
  uVar2 = FUN_001087c8(DAT_0040f4c4,(&PTR_s_FE_DEFAULT_003be7f0)[_DAT_003be814]);
  FUN_0020de28(0x4920d0,uVar2);
  piVar4 = &DAT_004921c8;
  puVar3 = &DAT_004920f0;
  do {
    iVar1 = *piVar4;
    iVar5 = iVar5 + -1;
    piVar4 = piVar4 + 1;
    uVar2 = FUN_001087c8(DAT_0040f4c4,*(undefined4 *)(iVar1 + 8));
    FUN_0020de28(puVar3,uVar2);
    puVar3 = puVar3 + 0xc;
  } while (-1 < iVar5);
  return;
}


// ==== FUN_00211108 @ 00211108 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211108(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0035e750(param_1 + 0x3c);
  for (_DAT_003be814 = _DAT_003be814 + iVar1; 4 < _DAT_003be814; _DAT_003be814 = _DAT_003be814 + -5)
  {
  }
  for (; _DAT_003be814 < 0; _DAT_003be814 = _DAT_003be814 + 5) {
  }
  *(undefined1 *)(DAT_0040f0e0 + 0x20170) = DAT_003be814;
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be804);
  if (_DAT_003be814 != 4) {
    FUN_00124da8(*(undefined4 *)(DAT_0040f0e0 + 0x21060));
  }
  FUN_00211450();
  FUN_00210fe8();
  return;
}


// ==== FUN_00211210 @ 00211210 ====

void FUN_00211210(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iStack_50;
  int iStack_4c;
  
  iVar2 = FUN_0035e750();
  iVar3 = FUN_0035e750(param_1 + 0x3c);
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be804);
  iStack_50 = 0;
  iStack_4c = 0;
  FUN_002113b8(*(undefined4 *)(&DAT_003fc654 + iVar2 * 0x10),&iStack_50,(uint)&iStack_50 | 4);
  iVar4 = FUN_00211420(iStack_50,iStack_4c,*(undefined4 *)(&DAT_004921c8)[iVar2]);
  uVar1 = DAT_0040f4c4;
  iVar4 = iVar4 + iVar3;
  if (iStack_4c <= iVar4) {
    for (iVar4 = iVar4 - iStack_4c; iStack_4c <= iVar4; iVar4 = iVar4 - iStack_4c) {
    }
  }
  for (; iVar4 < 0; iVar4 = iVar4 + iStack_4c) {
  }
  iVar4 = iVar4 * 0xc + iStack_50;
  (&DAT_004921c8)[iVar2] = iVar4;
  uVar5 = FUN_001087c8(uVar1,*(undefined4 *)(iVar4 + 8));
  FUN_0020de28(&DAT_004920f0 + iVar2 * 0xc,uVar5);
  fe_FE_CCONF_DUPWARNING_00211670();
  fe_FE_CCONF_MISSWARNING_00211888();
  return;
}


// ==== FUN_00211380 @ 00211380 ====

void FUN_00211380(void)

{
  FUN_00211450();
  FUN_00210fe8();
  fe_FE_CCONF_DUPWARNING_00211670();
  fe_FE_CCONF_MISSWARNING_00211888();
  return;
}


// ==== FUN_002113b8 @ 002113b8 ====

void FUN_002113b8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    uVar2 = 0xd;
    puVar1 = &DAT_003fcbc0;
  }
  else if (param_1 < 2) {
    if (param_1 != 0) {
      return;
    }
    uVar2 = 0xc;
    puVar1 = &DAT_003fcb18;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    uVar2 = 5;
    puVar1 = &DAT_003fccd0;
  }
  *param_2 = puVar1;
  *param_3 = uVar2;
  return;
}


// ==== FUN_00211420 @ 00211420 ====

int FUN_00211420(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*param_1 == param_3) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 3;
    } while (iVar1 < param_2);
  }
  return -1;
}


// ==== FUN_00211450 @ 00211450 ====

void FUN_00211450(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_b0;
  undefined4 auStack_ac [3];
  
  iVar3 = 0;
  do {
    iVar5 = iVar3 + 1;
    iVar4 = 0;
    (&DAT_004921c8)[iVar3] = &DAT_003fcb18;
    do {
      iVar1 = FUN_001249f8(*(undefined4 *)(DAT_0040f0e0 + 0x21060),iVar4);
      if ((&DAT_003fc648)[iVar3 * 4] == iVar1) {
        FUN_002113b8(*(undefined4 *)(&DAT_003fc654 + iVar3 * 0x10),&iStack_b0,auStack_ac);
        lVar2 = FUN_00211420(iStack_b0,auStack_ac[0],iVar4);
        if (lVar2 != -1) {
          (&DAT_004921c8)[iVar3] = iStack_b0 + (int)lVar2 * 0xc;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x25);
    iVar3 = iVar5;
  } while (iVar5 < 0x12);
  return;
}


// ==== FUN_00211580 @ 00211580 ====

void FUN_00211580(void)

{
  FUN_00211450();
  FUN_00210fe8();
  return;
}


// ==== FUN_002115a8 @ 002115a8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002115a8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (_DAT_003be814 == 4) {
    puVar2 = &DAT_003fc648;
    piVar1 = &DAT_004921c8;
    iVar3 = 0x11;
    do {
      FUN_00124a58(*(undefined4 *)(DAT_0040f0e0 + 0x21060),*(undefined4 *)*piVar1,*puVar2);
      if ((puVar2[1] != -1) && (*(int *)(*piVar1 + 4) != -1)) {
        FUN_00124a58(*(undefined4 *)(DAT_0040f0e0 + 0x21060));
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
      piVar1 = piVar1 + 1;
    } while (-1 < iVar3);
  }
  return;
}


// ==== fe_FE_CCONF_DUPWARNING_00211670 @ 00211670 ====

/* Strings referenciadas:
     "ClearConflicts"
     "SetConflict"
     "FE_CCONF_DUPWARNING"
     "FE_CCONF_DUPWARNING_MANY" */

void fe_FE_CCONF_DUPWARNING_00211670(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  DAT_003be818 = 0;
  FUN_0021a480(0x3fb3f8,0,DAT_0040f544 + 0x38e7,0);
  iVar7 = 0;
  do {
    iVar2 = iVar7 + 1;
    iVar1 = *(int *)(&DAT_004921c8)[iVar7];
    if (iVar7 < 0x12) {
      piVar6 = &DAT_004921c8 + iVar7;
      iVar5 = iVar7;
      do {
        if (((iVar1 == *(int *)*piVar6) && (iVar7 != iVar5)) && (iVar1 != 0)) {
          iVar8 = iVar8 + 1;
          iVar4 = DAT_0040f544 + 0x38e7;
          uVar3 = FUN_0024f7d0(iVar7);
          FUN_0021a7e0(0x3fb408,0,iVar4,1,uVar3);
          iVar4 = DAT_0040f544 + 0x38e7;
          uVar3 = FUN_0024f7d0(iVar5);
          FUN_0021a7e0(0x3fb408,0,iVar4,1,uVar3);
          if (iVar8 < 6) {
            if (DAT_003be818 == 0) {
              uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fb418);
              FUN_0020de28(0x4920e0,uVar3);
              DAT_003be818 = 1;
            }
            else {
              FUN_0020dd98(0x4920e0,0x3fb430);
            }
            uVar3 = FUN_001087c8(DAT_0040f4c4,*(undefined4 *)((&DAT_004921c8)[iVar7] + 8));
            FUN_0020dd98(0x4920e0,uVar3);
          }
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < 0x12);
    }
    iVar7 = iVar2;
  } while (iVar2 < 0x12);
  if (5 < iVar8) {
    uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fb438);
    FUN_0020de28(0x4920e0,uVar3);
  }
  return;
}


// ==== fe_FE_CCONF_MISSWARNING_00211888 @ 00211888 ====

/* Strings referenciadas:
     "FE_CCONF_MISSWARNING"
     "FE_CCONF_MISSWARNING_MANY" */

void fe_FE_CCONF_MISSWARNING_00211888(void)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char acStack_e0 [48];
  int iStack_b0;
  int iStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  
  iVar6 = 0;
  iStack_b0 = 0;
  iStack_ac = 0;
  FUN_0035c6ec(acStack_e0,0,0x25);
  piStack_a8 = &iStack_b0;
  piStack_a4 = &iStack_ac;
  DAT_003be81c = 0;
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 1;
    iVar5 = 0;
    FUN_002113b8(iVar4,piStack_a8,piStack_a4);
    if (0 < iStack_ac) {
      iVar4 = 0;
      do {
        bVar3 = false;
        if (iVar5 != 0) {
          if (*DAT_004921c8 == *(int *)(iVar4 + iStack_b0)) {
LAB_00211980:
            bVar3 = true;
          }
          else {
            for (iVar2 = 1; iVar2 < 0x12; iVar2 = iVar2 + 1) {
              if (*(&DAT_004921c8)[iVar2] == *(int *)(iVar4 + iStack_b0)) goto LAB_00211980;
            }
          }
          if ((!bVar3) && (acStack_e0[*(int *)(iVar4 + iStack_b0)] == '\0')) {
            iVar6 = iVar6 + 1;
            if (5 < iVar6) break;
            if (DAT_003be81c == 0) {
              uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fb458);
              FUN_0020de28(0x4920e0,uVar1);
              DAT_003be81c = 1;
            }
            else {
              FUN_0020dd98(0x4920e0,0x3fb430);
            }
            uVar1 = FUN_001087c8(DAT_0040f4c4,*(undefined4 *)(iVar4 + iStack_b0 + 8));
            FUN_0020dd98(0x4920e0,uVar1);
            acStack_e0[*(int *)(iVar4 + iStack_b0)] = '\x01';
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar5 < iStack_ac);
    }
    iVar4 = iVar7;
    if (2 < iVar7) {
      if (5 < iVar6) {
        uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fb470);
        FUN_0020de28(0x4920e0,uVar1);
      }
      return;
    }
  } while( true );
}


// ==== fe_FESFXVolume_00211ac0 @ 00211ac0 ====

/* Strings referenciadas:
     "FESFXVolume"
     "FEMusicVolume"
     "SetSfxValue"
     "SetMusicValue"
     "FESoundOutputType"
     "ChangeSoundOutputType"
     "ChangeSoundtrack"
     "ChangePlayMode"
     "FONT_TEST_STRING" */

undefined4 fe_FESFXVolume_00211ac0(undefined8 param_1)

{
  FUN_00211d10();
  FUN_0020e068(param_1,0x3fb490,0x3be82c);
  FUN_0020e068(param_1,0x3fb218,0x3be830);
  FUN_0020e068(param_1,0x3fb228,0x3be834);
  FUN_0020df68(param_1,0x3fb4a8,0x211df0);
  FUN_0020df68(param_1,0x3fb278,0x211e60);
  FUN_0020df68(param_1,0x3fb288,0x211eb8);
  FUN_0020df68(param_1,0x3fb4c0,0x211f70);
  FUN_0020df68(param_1,0x3fb4d8,0x211f78);
  FUN_0020dcb0(0x492210);
  FUN_0020dcf8(0x492210,0x3fb4e8);
  FUN_0020dd88(0x492210);
  DAT_003be820 = 0;
  return 1;
}


// ==== fe_FESFXVolume_00211bd8 @ 00211bd8 ====

/* Strings referenciadas:
     "FESFXVolume"
     "FEMusicVolume"
     "SetSfxValue"
     "SetMusicValue"
     "FESoundOutputType"
     "ChangeSoundOutputType"
     "ChangeSoundtrack"
     "ChangePlayMode" */

undefined4 fe_FESFXVolume_00211bd8(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fb4a8);
  FUN_0020df90(param_1,0x3fb278);
  FUN_0020df90(param_1,0x3fb288);
  FUN_0020df90(param_1,0x3fb4c0);
  FUN_0020df90(param_1,0x3fb4d8);
  FUN_0020e0c8(param_1,0x3fb490);
  FUN_0020e0c8(param_1,0x3fb218);
  FUN_0020e0c8(param_1,0x3fb228);
  FUN_0020dd48(0x492210);
  FUN_0020df30(0x492210);
  return 1;
}


// ==== FUN_00211c90 @ 00211c90 ====

void FUN_00211c90(void)

{
  undefined8 uVar1;
  
  FUN_001d5da8(*(undefined4 *)(DAT_0040f0e0 + 0x2015c),DAT_0040f510);
  FUN_001d5d40(*(undefined4 *)(DAT_0040f0e0 + 0x20160),DAT_0040f510);
  uVar1 = FUN_00211f10(*(undefined4 *)(DAT_0040f0e0 + 0x20154));
  FUN_00283200(DAT_0040f510,uVar1);
  return;
}


// ==== FUN_00211d10 @ 00211d10 ====

void FUN_00211d10(void)

{
  DAT_003be82c = *(undefined4 *)(DAT_0040f0e0 + 0x20154);
  DAT_003be830 = (int)(*(float *)(DAT_0040f0e0 + 0x2015c) * 100.0);
  DAT_003be834 = (int)(*(float *)(DAT_0040f0e0 + 0x20160) * 100.0);
  FUN_00211c90();
  return;
}


// ==== FUN_00211d78 @ 00211d78 ====

void FUN_00211d78(void)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x20154) = DAT_003be82c;
  *(float *)(DAT_0040f0e0 + 0x2015c) = (float)DAT_003be830 / 100.0;
  *(float *)(DAT_0040f0e0 + 0x20160) = (float)DAT_003be834 / 100.0;
  FUN_00211c90();
  return;
}


// ==== FUN_00211df0 @ 00211df0 ====

void FUN_00211df0(void)

{
  undefined8 uVar1;
  
  DAT_003be82c = FUN_0035e750();
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be820);
  uVar1 = FUN_00211f10(DAT_003be82c);
  FUN_00283200(DAT_0040f510,uVar1);
  FUN_00211d78();
  return;
}


// ==== FUN_00211e60 @ 00211e60 ====

void FUN_00211e60(undefined8 param_1)

{
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be820);
  DAT_003be830 = FUN_0035e750(param_1);
  FUN_00211d78();
  return;
}


// ==== FUN_00211eb8 @ 00211eb8 ====

void FUN_00211eb8(undefined8 param_1)

{
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be820);
  DAT_003be834 = FUN_0035e750(param_1);
  FUN_00211d78();
  return;
}


// ==== FUN_00211f10 @ 00211f10 ====

undefined4 FUN_00211f10(void)

{
  if (DAT_003be82c == 1) {
    return 1;
  }
  if (DAT_003be82c < 2) {
    if (DAT_003be82c == 0) {
      return 0;
    }
  }
  else if (DAT_003be82c == 2) {
    return 3;
  }
  return 1;
}


// ==== fe_FEPictureOutputType_00211f80 @ 00211f80 ====

/* Strings referenciadas:
     "FEPictureOutputType"
     "FEGammaLevel"
     "ChangePictureOutputType"
     "SetGammaLevel" */

undefined4 fe_FEPictureOutputType_00211f80(undefined8 param_1)

{
  FUN_00212048();
  FUN_0020e068(param_1,0x3fb500,0x3be83c);
  FUN_0020e068(param_1,0x3fb518,0x3be840);
  FUN_0020df68(param_1,0x3fb528,0x2120f0);
  FUN_0020df68(param_1,0x3fb540,0x212140);
  return 1;
}


// ==== fe_FEPictureOutputType_00212008 @ 00212008 ====

/* Strings referenciadas:
     "FEPictureOutputType"
     "ChangePictureOutputType" */

undefined4 fe_FEPictureOutputType_00212008(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fb528);
  FUN_0020e0c8(param_1,0x3fb500);
  return 1;
}


// ==== FUN_00212048 @ 00212048 ====

void FUN_00212048(void)

{
  DAT_003be83c = *(undefined4 *)(DAT_0040f0e0 + 0x20150);
  DAT_003be840 = (int)(*(float *)(DAT_0040f0e0 + 0x20158) * 100.0);
  return;
}


// ==== FUN_00212088 @ 00212088 ====

void FUN_00212088(void)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x20150) = DAT_003be83c;
  *(float *)(DAT_0040f0e0 + 0x20158) = (float)DAT_003be840 / 100.0;
  FUN_00108bb8(DAT_0040f0e0 + 0x2014c);
  return;
}


// ==== FUN_002120f0 @ 002120f0 ====

void FUN_002120f0(void)

{
  DAT_003be83c = FUN_0035e750();
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be838);
  FUN_00212088();
  return;
}


// ==== FUN_00212140 @ 00212140 ====

void FUN_00212140(void)

{
  DAT_003be840 = FUN_0035e750();
  FUN_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be838);
  FUN_00212088();
  return;
}


// ==== fe_FEDifficulty_00212190 @ 00212190 ====

/* Strings referenciadas:
     "FEDifficulty"
     "FEDifficultyHard"
     "ChangeDifficulty"
     "SelectDifficulty"
     "LeaveDifficultyMenu" */

undefined4 fe_FEDifficulty_00212190(undefined8 param_1)

{
  FUN_002122a0();
  FUN_0020e068(param_1,0x3fb550,0x3be844);
  FUN_0020e068(param_1,0x3fb560,0x3be848);
  FUN_0020df68(param_1,0x3fb578,0x2122f0);
  FUN_0020df68(param_1,0x3fb590,0x212318);
  FUN_0020df68(param_1,0x3fb5a8,0x212338);
  return 1;
}


// ==== fe_FEDifficulty_00212230 @ 00212230 ====

/* Strings referenciadas:
     "FEDifficulty"
     "FEDifficultyHard"
     "ChangeDifficulty"
     "SelectDifficulty"
     "LeaveDifficultyMenu" */

undefined4 fe_FEDifficulty_00212230(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fb578);
  FUN_0020df90(param_1,0x3fb590);
  FUN_0020df90(param_1,0x3fb5a8);
  FUN_0020e0c8(param_1,0x3fb550);
  FUN_0020e0c8(param_1,0x3fb560);
  return 1;
}


// ==== FUN_002122a0 @ 002122a0 ====

void FUN_002122a0(void)

{
  DAT_003be848 = 1;
  DAT_003be844 = *(undefined4 *)(DAT_0040f0e0 + 0x2014c);
  return;
}


// ==== FUN_002122d0 @ 002122d0 ====

void FUN_002122d0(void)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x2014c) = DAT_003be844;
  return;
}


// ==== FUN_002122f0 @ 002122f0 ====

void FUN_002122f0(void)

{
  DAT_003be844 = FUN_0035e750();
  FUN_002122d0();
  return;
}


// ==== FUN_00212318 @ 00212318 ====

void FUN_00212318(void)

{
  FUN_00212338(0);
  return;
}


// ==== FUN_00212338 @ 00212338 ====

/* Strings referenciadas:
     "OptionsMenu" */

void FUN_00212338(void)

{
  int iVar1;
  
  iVar1 = DAT_0040f544;
  FUN_0035cbc0(DAT_0040f544 + 0x3820,0x3fb5c0);
  if (*(char *)(iVar1 + 0x3840) == '\0') {
    *(undefined4 *)(iVar1 + 0x388c) = 1;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3884) = 1;
  }
  return;
}


// ==== FUN_00212388 @ 00212388 ====

/* Strings referenciadas:
     "RestartMission"
     "ContinueMission"
     "QuitFromMissionFailed" */

undefined4 FUN_00212388(undefined8 param_1)

{
  FUN_0020df68(param_1,0x3fb5d0,0x212440);
  FUN_0020df68(param_1,0x3fb5e0,0x212490);
  FUN_0020df68(param_1,0x3fb5f0,0x2124d0);
  return 1;
}


// ==== FUN_002123f0 @ 002123f0 ====

/* Strings referenciadas:
     "RestartMission"
     "ContinueMission"
     "QuitFromMissionFailed" */

undefined4 FUN_002123f0(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fb5d0);
  FUN_0020df90(param_1,0x3fb5e0);
  FUN_0020df90(param_1,0x3fb5f0);
  return 1;
}


// ==== FUN_00212440 @ 00212440 ====

void FUN_00212440(void)

{
  FUN_0020b988(DAT_0040f544,4);
  FUN_001034b0(DAT_0040f0e0,DAT_0040f0e0 + 0x20f78);
  FUN_0016c380(DAT_0040f4d0 + 0x3f0);
  return;
}


// ==== FUN_00212490 @ 00212490 ====

void FUN_00212490(void)

{
  FUN_0020b988(DAT_0040f544,4);
  FUN_001035d0(DAT_0040f0e0);
  FUN_0016c220(DAT_0040f4d0 + 0x3f0);
  return;
}


// ==== FUN_002124d0 @ 002124d0 ====

void FUN_002124d0(void)

{
  FUN_001f2838(DAT_0040f51c,0,1);
  FUN_0020b988(DAT_0040f544,4);
  FUN_00105228(DAT_0040f0e0 + 0x20220,1);
  return;
}


// ==== fe_FE_CURRENTDIFFICULTY_00212528 @ 00212528 ====

/* Strings referenciadas:
     "FE_CURRENTDIFFICULTY"
     "FE_RECONRATING"
     "FE_ARMAMENTRATING"
     "FE_OBJECTIVESTARGETTOTAL"
     "SetupResults"
     "FE_RESULTSLEVELNAME"
     "FE_MISSIONSTATUS"
     "FE_PRIMARYSCORE"
     "FE_SECONDARYSCORE"
     "FE_BLACKMAILSCORE"
     "FE_INTELSCORE"
     "FE_OVERALLRATING"
     ... */

undefined4 fe_FE_CURRENTDIFFICULTY_00212528(undefined8 param_1)

{
  FUN_0020df68(param_1,0x3fb608,0x212940);
  FUN_0020dcb0(0x492220);
  FUN_0020dcb0(0x492230);
  FUN_0020dcb0(0x492240);
  FUN_0020dcb0(0x492250);
  FUN_0020dcb0(0x492260);
  FUN_0020dcb0(0x492270);
  FUN_0020dcb0(0x492280);
  FUN_0020dcb0(0x492290);
  FUN_0020dcb0(0x4922a0);
  FUN_0020dcb0(0x4922b0);
  FUN_0020dcb0(0x4922c0);
  FUN_0020dcb0(0x4922d0);
  FUN_0020dcb0(0x4922e0);
  FUN_0020dcb0(0x4922f0);
  FUN_0020dcf8(0x492220,0x3fb618);
  FUN_0020dcf8(0x492230,0x3fb630);
  FUN_0020dcf8(0x492240,0x3fb648);
  FUN_0020dcf8(0x492250,0x3fb658);
  FUN_0020dcf8(0x492260,0x3fb670);
  FUN_0020dcf8(0x492270,0x3fb688);
  FUN_0020dcf8(0x492280,0x3fafd8);
  FUN_0020dcf8(0x492290,0x3fafe8);
  FUN_0020dcf8(0x4922a0,0x3fb698);
  FUN_0020dcf8(0x4922b0,0x3fb6b0);
  FUN_0020dcf8(0x4922c0,0x3fb6c0);
  FUN_0020dcf8(0x4922d0,0x3fad90);
  FUN_0020dcf8(0x4922e0,0x3fb6d0);
  FUN_0020dcf8(0x4922f0,0x3fb030);
  return 1;
}


// ==== FUN_00212770 @ 00212770 ====

/* Strings referenciadas:
     "SetupResults" */

undefined4 FUN_00212770(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fb608);
  FUN_0020dd48(0x492220);
  FUN_0020dd48(0x492230);
  FUN_0020dd48(0x492240);
  FUN_0020dd48(0x492250);
  FUN_0020dd48(0x492260);
  FUN_0020dd48(0x492270);
  FUN_0020dd48(0x492280);
  FUN_0020dd48(0x492290);
  FUN_0020dd48(0x4922a0);
  FUN_0020dd48(0x4922b0);
  FUN_0020dd48(0x4922c0);
  FUN_0020dd48(0x4922d0);
  FUN_0020dd48(0x4922e0);
  FUN_0020dd48(0x4922f0);
  FUN_0020df30(0x492220);
  FUN_0020df30(0x492230);
  FUN_0020df30(0x492240);
  FUN_0020df30(0x492250);
  FUN_0020df30(0x492260);
  FUN_0020df30(0x492270);
  FUN_0020df30(0x492280);
  FUN_0020df30(0x492290);
  FUN_0020df30(0x4922a0);
  FUN_0020df30(0x4922b0);
  FUN_0020df30(0x4922c0);
  FUN_0020df30(0x4922d0);
  FUN_0020df30(0x4922e0);
  FUN_0020df30(0x4922f0);
  return 1;
}


// ==== fe_FE_FORMAT_COUNT_OF_UNKNOWN_00212940 @ 00212940 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_FORMAT_COUNT_OF_UNKNOWN"
     "FE_FORMAT_COUNT_OF_COUNT"
     "FE_OBJECTIVENOTAPPLICABLE"
     "current"
     "FE_FORMAT_STRINGCOUNT_OF_STRINGCOUNT"
     "FE_TIME_HOURSMINUTESSECONDS"
     "SetObjectiveAppearance"
     "FE_DEMOMISSIONCOMPLETE"
     "FE_MISSIONFAILED" */

void fe_FE_FORMAT_COUNT_OF_UNKNOWN_00212940(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_1f0 [80];
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  int iStack_b8;
  
  if (DAT_0040eae4 == 4) {
    uVar7 = 0xa0;
LAB_002129c0:
    FUN_002756a8(uVar7,0x2c);
  }
  else {
    if (DAT_0040eae4 < 5) {
      if (DAT_0040eae4 == 3) {
        uVar7 = 0x2e;
        goto LAB_002129c0;
      }
    }
    else {
      uVar7 = 0x2e;
      if (DAT_0040eae4 < 7) goto LAB_002129c0;
    }
    FUN_002756a8(0x2c,0x2e);
  }
  uStack_e8 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  piVar3 = (int *)FUN_00123c90(0x48efa8,uStack_e8,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
  lVar4 = FUN_0035ca74(param_1,0x3fb6e8);
  if (lVar4 == 0) {
    FUN_001227a8(DAT_0040f4e8);
    FUN_00217818(0x48f4e0);
    iStack_d4 = (int)*(char *)((int)piVar3 + 0x16);
    iVar12 = *DAT_0040f4e8;
    iStack_e4 = (int)(char)piVar3[4];
    uStack_c0 = (uint)('\0' < *(char *)(iVar12 + 0x19));
    uVar10 = *(undefined1 *)(iVar12 + 0x15);
    uStack_bc = (uint)('\0' < *(char *)(iVar12 + 0x1a));
    iStack_e0 = (int)*(char *)((int)piVar3 + 0x12);
    iStack_dc = (int)*(char *)(iVar12 + 0x16);
    lVar11 = (long)(char)piVar3[5];
    iStack_d8 = (int)*(char *)(iVar12 + 0x17);
    iStack_d0 = (int)*(char *)(iVar12 + 0x18);
    iVar9 = FUN_001227c0();
    lVar4 = (long)((int)(((uint)*(ushort *)(iVar12 + 0x1c) + (uint)*(ushort *)(iVar12 + 0x1e)) *
                        0x10000) >> 0x10);
    lVar5 = FUN_00122a00(DAT_0040f4e8,(char)uStack_e8);
    fVar14 = *(float *)(iVar12 + 4);
    lVar6 = lVar4;
    if (lVar4 <= lVar5) {
      lVar6 = lVar5;
    }
  }
  else {
    iVar12 = piVar3[1];
    iStack_e4 = (int)(char)piVar3[4];
    uVar10 = *(undefined1 *)((int)piVar3 + 0x11);
    iStack_e0 = (int)*(char *)((int)piVar3 + 0x12);
    iStack_dc = (int)*(char *)((int)piVar3 + 0x13);
    lVar11 = (long)(char)piVar3[5];
    iStack_d8 = (int)*(char *)((int)piVar3 + 0x15);
    iStack_d4 = (int)*(char *)((int)piVar3 + 0x16);
    iStack_d0 = (int)*(char *)((int)piVar3 + 0x17);
    uStack_c0 = (uint)*(byte *)(piVar3 + 6);
    uStack_bc = (uint)*(byte *)((int)piVar3 + 0x19);
    iVar9 = *piVar3;
    lVar6 = FUN_00122a00(DAT_0040f4e8,(char)uStack_e8);
    fVar14 = (float)piVar3[3];
    lVar4 = (long)(short)iVar12;
    if (lVar6 < (short)iVar12) {
      lVar4 = lVar6;
    }
  }
  bVar1 = iVar9 < 0;
  uStack_c4 = (uint)!bVar1;
  uStack_c8 = (uint)!bVar1;
  uStack_cc = (uint)!bVar1;
  FUN_0035d728(auStack_1a0,0x3fae50,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar7 = FUN_001087c8(DAT_0040f4c4,auStack_1a0);
  FUN_0020de28(0x492220,uVar7);
  if (bVar1) {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0d8);
    FUN_0020dec8(0x492240,uVar7,uVar10);
  }
  else {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492240,uVar7,uVar10,iStack_e4);
  }
  if (uStack_cc == 0) {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0d8);
    FUN_0020dec8(0x492250,uVar7,iStack_dc);
  }
  else {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492250,uVar7,iStack_dc,iStack_e0);
  }
  if (uStack_c8 == 0) {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0d8);
    FUN_0020dec8(0x492260,uVar7,lVar11);
  }
  else {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492260,uVar7,iStack_d8,lVar11);
  }
  if (uStack_c4 == 0) {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0d8);
    FUN_0020dec8(0x492270,uVar7,iStack_d4);
  }
  else {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
    FUN_0020dec8(0x492270,uVar7,iStack_d0,iStack_d4);
  }
  FUN_0020dd88(0x4922a0);
  bVar1 = uStack_c0 != 0;
  FUN_00275560(auStack_130,lVar4,1,0);
  bVar2 = uStack_bc != 0;
  FUN_00275560(auStack_110,lVar6,1,0);
  iVar12 = iStack_d8 + iStack_d0;
  uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb6f0);
  iStack_b8 = (int)lVar11 + iStack_d4;
  FUN_00275260(uVar7,auStack_170,0x20);
  iStack_b8 = iStack_b8 + 2;
  FUN_00384da8(0x28,auStack_1f0,auStack_170,auStack_130,auStack_110);
  FUN_0020de78(0x4922b0,auStack_1f0);
  iVar13 = (int)fVar14;
  iVar9 = iVar13 / 0x3c + (iVar13 / 0xe10) * -0x3c;
  uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb718);
  FUN_0020dec8(0x4922c0,uVar7,iVar13 / 0xe10,iVar9,iVar13 % 0xe10 + iVar9 * -0x3c);
  uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
  FUN_0020dec8(0x492280,uVar7,bVar1,1);
  uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb0f8);
  FUN_0020dec8(0x492290,uVar7,bVar2,1);
  uVar7 = fe_FE_DIFFEASY_00108ce0(DAT_0040f0e0 + 0x2014c);
  FUN_0020de28(0x4922d0,uVar7);
  if (uStack_c0 != 0) {
    iVar12 = iVar12 + 1;
  }
  if (uStack_bc != 0) {
    iVar12 = iVar12 + 1;
  }
  if (*(int *)(DAT_0040f0e0 + 0x2014c) == 3) {
    iStack_b8 = iStack_b8 + iStack_e0;
    iVar12 = iVar12 + iStack_dc;
LAB_00213124:
    if (*(int *)(DAT_0040f0e0 + 0x2014c) == 0) {
      uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
      FUN_0020de28(0x4922e0,uVar7);
      uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
      FUN_0020de28(0x4922f0,uVar7);
      goto LAB_002131e8;
    }
  }
  else {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
    FUN_0020de28(0x492250,uVar7);
    iVar9 = DAT_0040f544 + 0x38e7;
    uVar7 = FUN_0024f7d0(0);
    uVar8 = FUN_0024f7d0(0);
    FUN_0021a7e0(0x3fb738,0,iVar9,2,uVar7,uVar8);
    if (*(int *)(DAT_0040f0e0 + 0x2014c) == 0) {
      uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
      FUN_0020de28(0x492290,uVar7);
      iVar9 = DAT_0040f544 + 0x38e7;
      uVar7 = FUN_0024f7d0(4);
      uVar8 = FUN_0024f7d0(0);
      FUN_0021a7e0(0x3fb738,0,iVar9,2,uVar7,uVar8);
      uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
      FUN_0020de28(0x492280,uVar7);
      iVar9 = DAT_0040f544 + 0x38e7;
      uVar7 = FUN_0024f7d0(3);
      uVar8 = FUN_0024f7d0(0);
      FUN_0021a7e0(0x3fb738,0,iVar9,2,uVar7,uVar8);
      uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
      FUN_0020de28(0x492270,uVar7);
      iVar9 = DAT_0040f544 + 0x38e7;
      uVar7 = FUN_0024f7d0(2);
      uVar8 = FUN_0024f7d0(0);
      FUN_0021a7e0(0x3fb738,0,iVar9,2,uVar7,uVar8);
      uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb118);
      FUN_0020de28(0x492260,uVar7);
      iVar9 = DAT_0040f544 + 0x38e7;
      uVar7 = FUN_0024f7d0(1);
      uVar8 = FUN_0024f7d0(0);
      FUN_0021a7e0(0x3fb738,0,iVar9,2,uVar7,uVar8);
      goto LAB_00213124;
    }
  }
  FUN_0020dec8(0x4922e0,0x3fa968,iVar12);
  FUN_0012f880(DAT_0040f4d0 + 0x910,uStack_e8,*(undefined4 *)(DAT_0040f0e0 + 0x2014c),&uStack_f0);
  FUN_0020dec8(0x4922f0,0x3fa968,uStack_f0);
LAB_002131e8:
  lVar4 = FUN_0012f880(DAT_0040f4d0 + 0x910,uStack_e8,*(undefined4 *)(DAT_0040f0e0 + 0x2014c),
                       &iStack_ec);
  if (((lVar4 == 1) || ((lVar4 == 2 && (iStack_ec <= iVar12)))) ||
     ((lVar4 == 0 && (iStack_b8 <= iVar12)))) {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb750);
    FUN_0020de28(0x492230,uVar7);
    iVar12 = DAT_0040f544 + 0x38e7;
    uVar7 = FUN_0024f7d0(8);
    uVar8 = FUN_0024f7d0(1);
    FUN_0021a7e0(0x3fb738,0,iVar12,2,uVar7,uVar8);
    iVar12 = DAT_0040f544 + 0x38e7;
    uVar7 = FUN_0024f7d0(7);
    uVar8 = FUN_0024f7d0(1);
    FUN_0021a7e0(0x3fb738,0,iVar12,2,uVar7,uVar8);
  }
  else {
    uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fb768);
    FUN_0020de28(0x492230,uVar7);
    iVar12 = DAT_0040f544 + 0x38e7;
    uVar7 = FUN_0024f7d0(7);
    uVar8 = FUN_0024f7d0(2);
    FUN_0021a7e0(0x3fb738,0,iVar12,2,uVar7,uVar8);
    iVar12 = DAT_0040f544 + 0x38e7;
    uVar7 = FUN_0024f7d0(8);
    uVar8 = FUN_0024f7d0(2);
    FUN_0021a7e0(0x3fb738,0,iVar12,2,uVar7,uVar8);
  }
  return;
}


// ==== fe_FE_RANKCHANGE_002133c0 @ 002133c0 ====

/* Strings referenciadas:
     "SetupRankingLadder"
     "FE_RANKCHANGE"
     "FE_NEWRANKMSG"
     "FE_NEWRANKNAME" */

undefined4 fe_FE_RANKCHANGE_002133c0(undefined8 param_1)

{
  FUN_0020df68(param_1,0x3fb780,0x2134f0);
  FUN_0020dcb0(0x492300);
  FUN_0020dcb0(0x492310);
  FUN_0020dcb0(0x492320);
  FUN_0020dcf8(0x492300,0x3fb798);
  FUN_0020dcf8(0x492310,0x3fb7a8);
  FUN_0020dcf8(0x492320,0x3fb7b8);
  return 1;
}


// ==== FUN_00213468 @ 00213468 ====

/* Strings referenciadas:
     "SetupRankingLadder" */

undefined4 FUN_00213468(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fb780);
  FUN_0020dd48(0x492300);
  FUN_0020dd48(0x492310);
  FUN_0020dd48(0x492320);
  FUN_0020df30(0x492300);
  FUN_0020df30(0x492310);
  FUN_0020df30(0x492320);
  return 1;
}


// ==== fe_FE_CURRENTCHALLENGELEVEL_002134f8 @ 002134f8 ====

/* Strings referenciadas:
     "ChallengeLevelSelect"
     "SelectChallengeHeadCount"
     "SelectChallengeGunRun"
     "SelectChallengeKillingTime"
     "StartChallenge"
     "FE_CURRENTCHALLENGELEVEL"
     "FE_HEADCOUNTANDRATING"
     "FE_GUNRUNANDRATING"
     "FE_KILLINGTIMEANDRATING"
     "FE_CHALLENGENAME"
     "FE_CURRENTCHALLENGERECORD"
     "FE_REQUIREMENT1"
     ... */

undefined4 fe_FE_CURRENTCHALLENGELEVEL_002134f8(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  
  iVar2 = 0xf;
  FUN_0020df68(param_1,0x3fb7c8,0x213ca8);
  FUN_0020df68(param_1,0x3fb7e0,0x213dc0);
  FUN_0020df68(param_1,0x3fb800,0x213fa8);
  FUN_0020df68(param_1,0x3fb818,0x214130);
  FUN_0020df68(param_1,0x3fb838,0x214300);
  ppuVar4 = &PTR_s_FEAK47IsUnlocked_003fc8c8;
  puVar3 = &DAT_00492330;
  do {
    puVar1 = *ppuVar4;
    ppuVar4 = ppuVar4 + 4;
    FUN_0020e068(param_1,puVar1,puVar3);
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar2);
  FUN_00213938();
  FUN_0020dcb0(0x492370);
  FUN_0020dcb0(0x492380);
  FUN_0020dcb0(0x492390);
  FUN_0020dcb0(0x4923a0);
  FUN_0020dcb0(0x4923b0);
  FUN_0020dcb0(0x4923c0);
  FUN_0020dcb0(0x4923e0);
  FUN_0020dcb0(0x4923f0);
  FUN_0020dcb0(0x4923d0);
  FUN_0020dcb0(0x492400);
  FUN_0020dcb0(0x492410);
  FUN_0020dcf8(0x492370,0x3fb848);
  FUN_0020dcf8(0x492380,0x3fb868);
  FUN_0020dcf8(0x492390,0x3fb880);
  FUN_0020dcf8(0x4923a0,0x3fb898);
  FUN_0020dcf8(0x4923b0,0x3fb8b0);
  FUN_0020dcf8(0x4923c0,0x3fb8c8);
  FUN_0020dcf8(0x4923e0,0x3fb8e8);
  FUN_0020dcf8(0x4923f0,0x3fb8f8);
  FUN_0020dcf8(0x4923d0,0x3fb908);
  FUN_0020dcf8(0x492400,0x3fb918);
  return 1;
}


// ==== fe_FEAK47IsUnlocked_00213758 @ 00213758 ====

/* Strings referenciadas:
     "ChallengeLevelSelect"
     "SelectChallengeHeadCount"
     "SelectChallengeGunRun"
     "SelectChallengeKillingTime"
     "StartChallenge"
     "FEAK47IsUnlocked"
     "FESpazIsUnlocked" */

undefined4 fe_FEAK47IsUnlocked_00213758(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar2 = 0xf;
  ppuVar3 = &PTR_s_FEAK47IsUnlocked_003fc8c8;
  puVar1 = PTR_s_FEAK47IsUnlocked_003fc8c8;
  while( true ) {
    ppuVar3 = ppuVar3 + 4;
    iVar2 = iVar2 + -1;
    FUN_0020e0c8(param_1,puVar1);
    if (iVar2 < 0) break;
    puVar1 = *ppuVar3;
  }
  FUN_0020dd48(0x492370);
  FUN_0020dd48(0x492380);
  FUN_0020dd48(0x492390);
  FUN_0020dd48(0x4923a0);
  FUN_0020dd48(0x4923b0);
  FUN_0020dd48(0x4923c0);
  FUN_0020dd48(0x4923e0);
  FUN_0020dd48(0x4923f0);
  FUN_0020dd48(0x4923d0);
  FUN_0020dd48(0x492400);
  FUN_0020df30(0x492370);
  FUN_0020df30(0x492380);
  FUN_0020df30(0x492390);
  FUN_0020df30(0x4923a0);
  FUN_0020df30(0x4923b0);
  FUN_0020df30(0x4923c0);
  FUN_0020df30(0x4923e0);
  FUN_0020df30(0x4923f0);
  FUN_0020df30(0x4923d0);
  FUN_0020df30(0x492400);
  FUN_0020df30(0x492410);
  FUN_0020df90(param_1,0x3fb7c8);
  FUN_0020df90(param_1,0x3fb7e0);
  FUN_0020df90(param_1,0x3fb800);
  FUN_0020df90(param_1,0x3fb818);
  FUN_0020df90(param_1,0x3fb838);
  return 1;
}


// ==== FUN_00213938 @ 00213938 ====

void FUN_00213938(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar5 = &DAT_003fc8d0;
  puVar3 = &DAT_00492330;
  iVar4 = 0xf;
  do {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 2;
    iVar4 = iVar4 + -1;
    lVar1 = FUN_00123cc8(0x48efa8,uVar2);
    if (lVar1 == 0) {
      *puVar3 = 0;
    }
    else {
      *puVar3 = 1;
    }
    puVar3 = puVar3 + 1;
  } while (-1 < iVar4);
  return;
}


// ==== fe_FE_CHALLENGERATINGFORMAT_002139c0 @ 002139c0 ====

/* Strings referenciadas:
     "FE_CHALLENGERATINGFORMAT"
     "FE_BRONZE"
     "FE_SILVER"
     "FE_GOLD"
     "FE_BLACK"
     "FE_NOMEDALAWARDED"
     "FE_HEADCOUNT"
     "FE_GUNRUN"
     "FE_KILLINGTIME" */

void fe_FE_CHALLENGERATINGFORMAT_002139c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fb928);
  uVar2 = FUN_00122900(DAT_0040f4e8,param_1);
  lVar3 = FUN_00123cb0(0x48efa8,uVar2,0);
  if (lVar3 == 2) {
    uVar5 = 0x3fb958;
  }
  else if (lVar3 < 3) {
    if (lVar3 == 1) {
      uVar5 = 0x3fb948;
    }
    else {
LAB_00213aac:
      uVar5 = 0x3fb980;
    }
  }
  else if (lVar3 == 3) {
    uVar5 = 0x3fb968;
  }
  else {
    if (lVar3 != 4) goto LAB_00213aac;
    uVar5 = 0x3fb970;
  }
  uVar5 = FUN_001087c8(DAT_0040f4c4,uVar5);
  lVar3 = FUN_00123cb0(0x48efa8,uVar2,1);
  if (lVar3 == 2) {
    uVar6 = 0x3fb958;
  }
  else if (lVar3 < 3) {
    if (lVar3 == 1) {
      uVar6 = 0x3fb948;
    }
    else {
LAB_00213b4c:
      uVar6 = 0x3fb980;
    }
  }
  else if (lVar3 == 3) {
    uVar6 = 0x3fb968;
  }
  else {
    if (lVar3 != 4) goto LAB_00213b4c;
    uVar6 = 0x3fb970;
  }
  uVar6 = FUN_001087c8(DAT_0040f4c4,uVar6);
  lVar3 = FUN_00123cb0(0x48efa8,uVar2,2);
  if (lVar3 == 2) {
    uVar2 = 0x3fb958;
    goto LAB_00213bf4;
  }
  if (lVar3 < 3) {
    if (lVar3 == 1) {
      uVar2 = 0x3fb948;
      goto LAB_00213bf4;
    }
  }
  else {
    if (lVar3 == 3) {
      uVar2 = 0x3fb968;
      goto LAB_00213bf4;
    }
    if (lVar3 == 4) {
      uVar2 = 0x3fb970;
      goto LAB_00213bf4;
    }
  }
  uVar2 = 0x3fb980;
LAB_00213bf4:
  uVar2 = FUN_001087c8(DAT_0040f4c4,uVar2);
  uVar4 = FUN_001087c8(DAT_0040f4c4,0x3fb998);
  FUN_0020dec8(0x492380,uVar1,uVar4,uVar5);
  uVar5 = FUN_001087c8(DAT_0040f4c4,0x3fb9a8);
  FUN_0020dec8(0x492390,uVar1,uVar5,uVar2);
  uVar2 = FUN_001087c8(DAT_0040f4c4,0x3fb9b8);
  FUN_0020dec8(0x4923a0,uVar1,uVar2,uVar6);
  return;
}


// ==== fe_FE_LEVELLOCKED_FORMAT_00213ca8 @ 00213ca8 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_LEVELLOCKED_FORMAT" */

void fe_FE_LEVELLOCKED_FORMAT_00213ca8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [48];
  
  uVar1 = FUN_0035e750();
  uVar2 = FUN_001228e0(DAT_0040f4e8,(char)uVar1);
  FUN_0035d728(auStack_80,0x3fae50,uVar2);
  uVar3 = FUN_001087c8(DAT_0040f4c4,auStack_80);
  lVar4 = FUN_00123ca8(0x48efa8,uVar1,0);
  if (lVar4 == 0) {
    uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fb9c8);
    FUN_0020dec8(0x492370,uVar1,uVar3);
  }
  else {
    FUN_0020de28(0x492370,uVar3);
  }
  *(char *)(DAT_0040f0e0 + 0x2020c) = (char)uVar2;
  *(undefined1 *)(DAT_0040f0e0 + 0x2020d) = 1;
  *(undefined1 *)(DAT_0040f0e0 + 0x2020e) = 1;
  *(undefined4 *)(DAT_0040f0e0 + 0x20208) = 1;
  fe_FE_CHALLENGERATINGFORMAT_002139c0(uVar2);
  return;
}


// ==== fe_FE_HEADCOUNT_00213dc0 @ 00213dc0 ====

/* Strings referenciadas:
     "FE_HEADCOUNT"
     "FE_CURRENTRECORD_HEADSHOTS"
     "FE_HEADSHOTS"
     "%u %s" */

void fe_FE_HEADCOUNT_00213dc0(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fb998);
  FUN_0020de28(0x4923b0,uVar3);
  iVar1 = FUN_00103358(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar5 = 0;
  if (*(char *)(iVar1 + 0x21) != '\0') {
    iVar6 = 0;
    while( true ) {
      iVar2 = iVar6 + *(int *)(iVar1 + 0x18);
      if (*(int *)(iVar2 + 4) == 0) break;
      uVar5 = uVar5 + 1 & 0xff;
      if (*(byte *)(iVar1 + 0x21) <= uVar5) goto LAB_00213ea0;
      iVar6 = uVar5 * 0x60;
    }
    *(undefined1 *)(DAT_0040f0e0 + 0x2020e) = *(undefined1 *)(iVar2 + 0x58);
    *(undefined1 *)(DAT_0040f0e0 + 0x2020d) = *(undefined1 *)(iVar6 + *(int *)(iVar1 + 0x18) + 0x5a)
    ;
    iVar7 = iVar2;
  }
LAB_00213ea0:
  uVar3 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar4 = FUN_001087c8(DAT_0040f4c4,0x3fb9e0);
  uVar3 = FUN_00123cb8(0x48efa8,uVar3,0);
  FUN_0020dec8(0x4923c0,uVar4,uVar3);
  uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fba00);
  FUN_0020dec8(0x4923e0,0x3fba10,*(undefined1 *)(iVar7 + 0xc),uVar3);
  FUN_0020dec8(0x4923f0,0x3fba10,*(undefined1 *)(iVar7 + 0xd),uVar3);
  FUN_0020dec8(0x4923d0,0x3fba10,*(undefined1 *)(iVar7 + 0xe),uVar3);
  FUN_0020dec8(0x492400,0x3fba10,*(undefined1 *)(iVar7 + 0xf),uVar3);
  FUN_00213938();
  return;
}


// ==== fe_FE_GUNRUN_00213fa8 @ 00213fa8 ====

/* Strings referenciadas:
     "FE_GUNRUN"
     "%u %s"
     "FE_CURRENTRECORD_TARGETS"
     "FE_TARGETS" */

void fe_FE_GUNRUN_00213fa8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_001087c8(DAT_0040f4c4,0x3fb9a8);
  FUN_0020de28(0x4923b0,uVar2);
  iVar1 = FUN_00103358(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  *(undefined1 *)(DAT_0040f0e0 + 0x2020e) = *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x58);
  *(undefined1 *)(DAT_0040f0e0 + 0x2020d) = *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x5a);
  iVar1 = *(int *)(iVar1 + 0x1c);
  uVar2 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fba18);
  uVar2 = FUN_00123cb8(0x48efa8,uVar2,2);
  FUN_0020dec8(0x4923c0,uVar3,uVar2);
  uVar2 = FUN_001087c8(DAT_0040f4c4,0x3fba38);
  FUN_0020dec8(0x4923e0,0x3fba10,*(undefined1 *)(iVar1 + 0xc),uVar2);
  FUN_0020dec8(0x4923f0,0x3fba10,*(undefined1 *)(iVar1 + 0xd),uVar2);
  FUN_0020dec8(0x4923d0,0x3fba10,*(undefined1 *)(iVar1 + 0xe),uVar2);
  FUN_0020dec8(0x492400,0x3fba10,*(undefined1 *)(iVar1 + 0xf),uVar2);
  FUN_00213938();
  return;
}


// ==== fe_FE_KILLINGTIME_00214130 @ 00214130 ====

/* Strings referenciadas:
     "FE_KILLINGTIME"
     "FE_CURRENTRECORD_ENEMIESKILLED"
     "FE_ENEMIESKILLEDFORMAT" */

void fe_FE_KILLINGTIME_00214130(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fb9b8);
  FUN_0020de28(0x4923b0,uVar3);
  iVar1 = FUN_00103358(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar5 = 0;
  if (*(char *)(iVar1 + 0x21) != '\0') {
    iVar6 = 0;
    while( true ) {
      iVar2 = iVar6 + *(int *)(iVar1 + 0x18);
      if (*(int *)(iVar2 + 4) == 1) break;
      uVar5 = uVar5 + 1 & 0xff;
      if (*(byte *)(iVar1 + 0x21) <= uVar5) goto LAB_00214210;
      iVar6 = uVar5 * 0x60;
    }
    *(undefined1 *)(DAT_0040f0e0 + 0x2020e) = *(undefined1 *)(iVar2 + 0x58);
    *(undefined1 *)(DAT_0040f0e0 + 0x2020d) = *(undefined1 *)(iVar6 + *(int *)(iVar1 + 0x18) + 0x5a)
    ;
    iVar7 = iVar2;
  }
LAB_00214210:
  uVar3 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar4 = FUN_001087c8(DAT_0040f4c4,0x3fba48);
  uVar3 = FUN_00123cb8(0x48efa8,uVar3,1);
  FUN_0020dec8(0x4923c0,uVar4,uVar3);
  uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fba68);
  FUN_0020dec8(0x4923e0,uVar3,*(undefined1 *)(iVar7 + 0xc));
  FUN_0020dec8(0x4923f0,uVar3,*(undefined1 *)(iVar7 + 0xd));
  FUN_0020dec8(0x4923d0,uVar3,*(undefined1 *)(iVar7 + 0xe));
  FUN_0020dec8(0x492400,uVar3,*(undefined1 *)(iVar7 + 0xf));
  FUN_00213938();
  return;
}


// ==== FUN_00214300 @ 00214300 ====

void FUN_00214300(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_0035e750();
  uVar4 = (&DAT_003fc8d0)[iVar1 * 2];
  iVar1 = FUN_00103358(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar3 = 0;
  if (*(char *)(iVar1 + 0x21) != '\0') {
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 + *(int *)(iVar1 + 0x18) + 0x58) == *(char *)(DAT_0040f0e0 + 0x2020e)) {
        FUN_001034b0(DAT_0040f0e0,DAT_0040f0e0 + 0x20fa0);
        FUN_00106820(DAT_0040f0e0 + 0x20fa0,uVar4);
        return;
      }
      uVar3 = uVar3 + 1 & 0xff;
      iVar2 = uVar3 * 0x60;
    } while (uVar3 < *(byte *)(iVar1 + 0x21));
  }
  FUN_001034b0(DAT_0040f0e0,DAT_0040f0e0 + 0x20fd8);
  FUN_00107000(DAT_0040f0e0 + 0x20fd8,uVar4);
  return;
}


// ==== fe_FE_NOMEDALAWARDED_00214408 @ 00214408 ====

/* Strings referenciadas:
     "FE_NOMEDALAWARDED"
     "RestartChallenge"
     "SetupChallengeResultsSucceeded"
     "SetupChallengeResultsFailed"
     "FE_MEDALAWARDED"
     "FE_CHALLENGERESULTS"
     "FE_CHALLENGERESULT" */

undefined4 fe_FE_NOMEDALAWARDED_00214408(undefined8 param_1)

{
  FUN_0020df68(param_1,0x3fba80,0x214b90);
  FUN_0020df68(param_1,0x3fba98,0x2145e0);
  FUN_0020df68(param_1,0x3fbab8,0x214a20);
  FUN_0020dcb0(0x492420);
  FUN_0020dcb0(0x492430);
  FUN_0020dcb0(0x492440);
  FUN_0020dcb0(0x492450);
  FUN_0020dcf8(0x492420,0x3fbad8);
  FUN_0020dcf8(0x492430,0x3fbae8);
  FUN_0020dcf8(0x492440,0x3fb980);
  FUN_0020dcf8(0x492450,0x3fbb00);
  return 1;
}


// ==== FUN_00214508 @ 00214508 ====

/* Strings referenciadas:
     "RestartChallenge"
     "SetupChallengeResultsSucceeded"
     "SetupChallengeResultsFailed" */

undefined4 FUN_00214508(undefined8 param_1)

{
  FUN_0020dd48(0x492420);
  FUN_0020dd48(0x492430);
  FUN_0020dd48(0x492440);
  FUN_0020dd48(0x492450);
  FUN_0020df30(0x492420);
  FUN_0020df30(0x492430);
  FUN_0020df30(0x492440);
  FUN_0020df30(0x492450);
  FUN_0020df90(param_1,0x3fba80);
  FUN_0020df90(param_1,0x3fba98);
  FUN_0020df90(param_1,0x3fbab8);
  return 1;
}


// ==== fe_FE_HEADSHOTS_002145e0 @ 002145e0 ====

/* Strings referenciadas:
     "FE_HEADSHOTS"
     "FE_TARGETS"
     "FE_ENEMIESKILLEDFORMAT"
     "FE_BLACKMEDALAWARDED"
     "FE_GOLDMEDALAWARDED"
     "FE_SILVERMEDALAWARDED"
     "FE_BRONZEMEDALAWARDED"
     "%s: %d" */

void fe_FE_HEADSHOTS_002145e0(void)

{
  short sVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  
  piVar2 = (int *)FUN_001033a0(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
                               *(undefined1 *)(DAT_0040f0e0 + 0x2020e));
  uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fba68);
  uVar4 = FUN_001087c8(DAT_0040f4c4,0x3fba38);
  uVar5 = FUN_001087c8(DAT_0040f4c4,0x3fba00);
  uVar6 = FUN_001087c8(DAT_0040f4c4,0x3fbb18);
  uVar7 = FUN_001087c8(DAT_0040f4c4,0x3fbb30);
  uVar8 = FUN_001087c8(DAT_0040f4c4,0x3fbb48);
  uVar9 = FUN_001087c8(DAT_0040f4c4,0x3fbb60);
  if (*piVar2 == 1) {
    if (piVar2[1] != 1) {
      lVar10 = FUN_00122368(DAT_0040f4dc,0x20);
      FUN_0020dec8(0x492430,0x3fbb78,uVar5,lVar10);
      if ((long)(ulong)*(byte *)(piVar2 + 3) <= lVar10) {
        FUN_0020de28(0x492420,uVar6);
        FUN_00122a98(DAT_0040f4e8,4,lVar10);
        return;
      }
      if ((long)(ulong)*(byte *)((int)piVar2 + 0xd) <= lVar10) {
        FUN_0020de28(0x492420,uVar7);
        FUN_00122a98(DAT_0040f4e8,3,lVar10);
        return;
      }
      if ((long)(ulong)*(byte *)((int)piVar2 + 0xe) <= lVar10) {
        FUN_0020de28(0x492420,uVar8);
        FUN_00122a98(DAT_0040f4e8,2,lVar10);
        return;
      }
      if (lVar10 < (long)(ulong)*(byte *)((int)piVar2 + 0xf)) {
        return;
      }
      FUN_0020de28(0x492420,uVar9);
      FUN_00122a98(DAT_0040f4e8,1,lVar10);
      return;
    }
    iVar11 = (int)(((uint)*(ushort *)(*DAT_0040f4dc + 0x1c) +
                   (uint)*(ushort *)(*DAT_0040f4dc + 0x1e)) * 0x10000) >> 0x10;
    FUN_0020dec8(0x492430,uVar3,iVar11);
    if ((int)(uint)*(byte *)(piVar2 + 3) <= iVar11) {
      FUN_0020de28(0x492420,uVar6);
      FUN_00122a70(DAT_0040f4e8,4,iVar11);
      return;
    }
    if ((int)(uint)*(byte *)((int)piVar2 + 0xd) <= iVar11) {
      FUN_0020de28(0x492420,uVar7);
      FUN_00122a70(DAT_0040f4e8,3,iVar11);
      return;
    }
    if ((int)(uint)*(byte *)((int)piVar2 + 0xe) <= iVar11) {
      FUN_0020de28(0x492420,uVar8);
      FUN_00122a70(DAT_0040f4e8,2,iVar11);
      return;
    }
    if (iVar11 < (int)(uint)*(byte *)((int)piVar2 + 0xf)) {
      return;
    }
    FUN_0020de28(0x492420,uVar9);
    FUN_00122a70(DAT_0040f4e8,1,iVar11);
    return;
  }
  if (*piVar2 != 2) {
    return;
  }
  sVar1 = *(short *)(*DAT_0040f4dc + 0x44);
  if (sVar1 < (short)(ushort)*(byte *)(piVar2 + 3)) {
    if (sVar1 < (short)(ushort)*(byte *)((int)piVar2 + 0xd)) {
      if (sVar1 < (short)(ushort)*(byte *)((int)piVar2 + 0xe)) {
        if ((short)(ushort)*(byte *)((int)piVar2 + 0xf) <= sVar1) {
          FUN_0020de28(0x492420,uVar9);
          FUN_00122ac0(DAT_0040f4e8,1,sVar1);
        }
        goto LAB_002149d4;
      }
      FUN_0020de28(0x492420,uVar8);
      uVar3 = 2;
    }
    else {
      FUN_0020de28(0x492420,uVar7);
      uVar3 = 3;
    }
  }
  else {
    FUN_0020de28(0x492420,uVar6);
    uVar3 = 4;
  }
  FUN_00122ac0(DAT_0040f4e8,uVar3,sVar1);
LAB_002149d4:
  FUN_0020dec8(0x492430,0x3fbb78,uVar4,sVar1);
  return;
}


// ==== fe_FE_NOMEDALAWARDED_00214a20 @ 00214a20 ====

/* Strings referenciadas:
     "FE_NOMEDALAWARDED"
     "FE_HEADSHOTS"
     "FE_TARGETS"
     "FE_ENEMIESKILLEDFORMAT"
     "%s: %d" */

void fe_FE_NOMEDALAWARDED_00214a20(void)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  piVar1 = (int *)FUN_001033a0(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
                               *(undefined1 *)(DAT_0040f0e0 + 0x2020e));
  uVar2 = FUN_001087c8(DAT_0040f4c4,0x3fba68);
  uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fba38);
  uVar4 = FUN_001087c8(DAT_0040f4c4,0x3fba00);
  uVar5 = FUN_001087c8(DAT_0040f4c4,0x3fb980);
  if (*piVar1 == 1) {
    if (piVar1[1] == 1) {
      FUN_0020dec8(0x492450,uVar2,
                   (int)(((uint)*(ushort *)(*DAT_0040f4dc + 0x1c) +
                         (uint)*(ushort *)(*DAT_0040f4dc + 0x1e)) * 0x10000) >> 0x10);
    }
    else {
      uVar2 = FUN_00122368(DAT_0040f4dc,0x20);
      FUN_0020dec8(0x492450,0x3fbb78,uVar4,uVar2);
    }
  }
  else if (*piVar1 == 2) {
    FUN_0020dec8(0x492450,0x3fbb78,uVar3,*(undefined2 *)(*DAT_0040f4dc + 0x44));
  }
  FUN_0020de28(0x492440,uVar5);
  return;
}


// ==== FUN_00214b90 @ 00214b90 ====

void FUN_00214b90(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00103358(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar3 = 0;
  if (*(char *)(iVar1 + 0x21) != '\0') {
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 + *(int *)(iVar1 + 0x18) + 0x58) == *(char *)(DAT_0040f0e0 + 0x2020e)) {
        FUN_001034b0(DAT_0040f0e0,DAT_0040f0e0 + 0x20fa0);
        return;
      }
      uVar3 = uVar3 + 1 & 0xff;
      iVar2 = uVar3 * 0x60;
    } while (uVar3 < *(byte *)(iVar1 + 0x21));
  }
  FUN_001034b0(DAT_0040f0e0,DAT_0040f0e0 + 0x20fd8);
  return;
}


// ==== FUN_00214c48 @ 00214c48 ====

undefined4 FUN_00214c48(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((*param_1 == 0) ||
       ((*param_1 != 0x2d && (((iVar2 == 4 || (iVar2 == 9)) || (iVar2 == 0xe)))))) {
      return 0;
    }
    if (((iVar2 != 4) && (iVar2 != 9)) && (iVar2 != 0xe)) {
      bVar1 = *param_1;
      if (((0x19 < bVar1 - 0x41) && (0x19 < bVar1 - 0x61)) && (9 < bVar1 - 0x30)) {
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    if (0x12 < iVar2) {
      return 1;
    }
  } while( true );
}


// ==== fe_FE_MemcardOptionSelected_00214cf8 @ 00214cf8 ====

/* Strings referenciadas:
     "FE_MemcardOptionSelected"
     "FE_MemcardOptionCount"
     "FE_MemcardAutosaveOn"
     "FE_MemcardPrompt"
     "Str_KeyboardIn"
     "FE_MEMCARDMESSAGE"
     "FE_MEMCARDOPTION%d"
     "FE_NAMEENTRY"
     "FE_KEYBOARD_RESULT"
     "StartNewProfile"
     "StartLoadProfile"
     "StartSaveProfile"
     ... */

undefined4 fe_FE_MemcardOptionSelected_00214cf8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a0 [32];
  
  iVar2 = 0;
  DAT_003be850 = 0;
  DAT_003be854 = 0;
  DAT_003be85c = 0;
  DAT_003be84c = 8;
  iVar1 = *(int *)param_1;
  (**(code **)(iVar1 + 0x34))((int)(int *)param_1 + (int)*(short *)(iVar1 + 0x30));
  FUN_0020e068(param_1,0x3fbb80,0x3be850);
  FUN_0020e068(param_1,0x3fbba0,0x3be854);
  FUN_0020e068(param_1,0x3fbbb8,0x3be858);
  FUN_0020e068(param_1,0x3fbbd0,0x3be85c);
  FUN_0020dfc8(param_1,0x3fbbe8,0x3be860);
  FUN_0020dcb0(0x492460);
  FUN_0020dcf8(0x492460,0x3fbbf8);
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_0035d728(auStack_a0,0x3fbc10,iVar2);
    FUN_0020dcb0(&DAT_00492470 + iVar1);
    FUN_0020dcf8(&DAT_00492470 + iVar1,auStack_a0);
    iVar1 = iVar2 * 0xc;
  } while (iVar2 < 4);
  FUN_0020dcb0(0x4924a0);
  FUN_0020dcf8(0x4924a0,0x3fbc28);
  FUN_0020dcb0(0x4924b0);
  FUN_0020dcf8(0x4924b0,0x3fbc38);
  FUN_00209618(DAT_0040f544 + 4,0x3fbc50,0x2156b0);
  FUN_00209618(DAT_0040f544 + 4,0x3fbc60,0x2156f8);
  FUN_00209618(DAT_0040f544 + 4,0x3fbc78,0x215740);
  FUN_00209618(DAT_0040f544 + 4,0x3fbc90,0x215788);
  FUN_00209618(DAT_0040f544 + 4,0x3fbca8,0x2157c8);
  FUN_00209618(DAT_0040f544 + 4,0x3fbcc0,0x215810);
  FUN_00209618(DAT_0040f544 + 4,0x3fbcd8,0x215858);
  FUN_00209618(DAT_0040f544 + 4,0x3fbcf0,0x215a00);
  FUN_00209618(DAT_0040f544 + 4,0x3fbd08,0x215980);
  FUN_00209618(DAT_0040f544 + 4,0x3fbd20,0x215a30);
  FUN_00209618(DAT_0040f544 + 4,0x3fbd30,0x215bb0);
  FUN_00209618(DAT_0040f544 + 4,0x3fbd40,0x215be8);
  FUN_00209618(DAT_0040f544 + 4,0x3fbd50,0x215d20);
  return 1;
}


// ==== FUN_00215028 @ 00215028 ====

void FUN_00215028(void)

{
  DAT_003be858 = (uint)(*(char *)(DAT_0040f0e0 + 0x20164) == '\x01');
  return;
}


// ==== fe_FE_MemcardOptionSelected_00215058 @ 00215058 ====

/* Strings referenciadas:
     "FE_MemcardOptionSelected"
     "FE_MemcardOptionCount"
     "FE_MemcardAutosaveOn"
     "FE_MemcardPrompt"
     "Str_KeyboardIn"
     "StartNewProfile"
     "StartLoadProfile"
     "StartSaveProfile"
     "StartBootCheckProfile"
     "StartAutosaveProfile"
     "StartAutosaveChallenge"
     "StartAutosaveSettings"
     ... */

undefined4 fe_FE_MemcardOptionSelected_00215058(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_00209760(DAT_0040f544 + 4,0x3fbc50);
  FUN_00209760(DAT_0040f544 + 4,0x3fbc60);
  FUN_00209760(DAT_0040f544 + 4,0x3fbc78);
  FUN_00209760(DAT_0040f544 + 4,0x3fbc90);
  FUN_00209760(DAT_0040f544 + 4,0x3fbca8);
  FUN_00209760(DAT_0040f544 + 4,0x3fbcc0);
  FUN_00209760(DAT_0040f544 + 4,0x3fbcd8);
  FUN_00209760(DAT_0040f544 + 4,0x3fbcf0);
  FUN_00209760(DAT_0040f544 + 4,0x3fbd08);
  FUN_00209760(DAT_0040f544 + 4,0x3fbd20);
  FUN_00209760(DAT_0040f544 + 4,0x3fbd30);
  FUN_00209760(DAT_0040f544 + 4,0x3fbd40);
  FUN_00209760(DAT_0040f544 + 4,0x3fbd50);
  FUN_0020e0c8(param_1,0x3fbb80);
  FUN_0020e0c8(param_1,0x3fbba0);
  FUN_0020e0c8(param_1,0x3fbbb8);
  FUN_0020e0c8(param_1,0x3fbbd0);
  FUN_0020e020(param_1,0x3fbbe8);
  FUN_0020dd48(0x492460);
  FUN_0020df30(0x492460);
  puVar1 = &DAT_00492470;
  do {
    FUN_0020dd48(puVar1);
    FUN_0020df30(puVar1);
    puVar1 = puVar1 + 0xc;
  } while ((int)puVar1 < 0x4924a0);
  FUN_0020dd48(0x4924a0);
  FUN_0020df30(0x4924a0);
  FUN_0020dd48(0x4924b0);
  FUN_0020df30(0x4924b0);
  return 1;
}


// ==== FUN_00215250 @ 00215250 ====

/* Strings referenciadas:
     "Empty"
     "IntroCredits"
     "MissionModeSelect"
     "memcardslots"
     "VirtualKeyboard"
     "memcardmessage"
     "ProfileOptions"
     "ChallengeModeOverview"
     "Eurostile LT Std" */

void FUN_00215250(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  short *psVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  short asStack_870 [1024];
  
  psVar7 = asStack_870;
  cVar1 = *(char *)(DAT_0040f4f0 + 0x512);
  *(undefined1 *)(DAT_0040f4f0 + 0x512) = 0;
  if (cVar1 == '\x01') {
    psVar5 = (short *)FUN_0010b320(DAT_0040f4f0);
    iVar6 = FUN_00275340(psVar5);
    sVar2 = *psVar5;
    iVar6 = iVar6 / 0x19;
    psVar11 = psVar5;
    while (sVar2 != 0) {
      sVar3 = *psVar11;
      psVar11 = psVar11 + 1;
      sVar2 = *psVar11;
      if (sVar3 == 10) {
        iVar6 = iVar6 + 1;
      }
    }
    iVar14 = 10 - iVar6;
    if (10 - iVar6 < 1) {
      iVar14 = 1;
    }
    iVar6 = iVar14;
    iVar13 = 0;
    if (0 < iVar14) {
      do {
        *psVar7 = 10;
        iVar6 = iVar6 + -1;
        psVar7 = psVar7 + 1;
        iVar13 = iVar14;
      } while (iVar6 != 0);
    }
    iVar6 = iVar13 - iVar14;
    while ((iVar10 = iVar13 - iVar14, psVar5[iVar6] != 0 || (0x3ff < iVar13 + 1))) {
      psVar7 = asStack_870 + iVar13;
      iVar13 = iVar13 + 1;
      iVar6 = iVar13 - iVar14;
      *psVar7 = psVar5[iVar10];
    }
    asStack_870[iVar13] = 0;
    FUN_0020de78(0x492460,asStack_870);
    puVar15 = &DAT_00492470;
    iVar6 = 0;
    do {
      iVar14 = iVar6 + 1;
      uVar8 = FUN_0010b328(DAT_0040f4f0,iVar6);
      FUN_0020de78(puVar15,uVar8);
      puVar15 = puVar15 + 0xc;
      iVar6 = iVar14;
    } while (iVar14 < 4);
    FUN_0020de78(0x4924a0,DAT_0040f4f0 + 0x4ca);
    DAT_003be85c = *(undefined4 *)(DAT_0040f4f0 + 0x4fc);
    if (*(char *)(DAT_0040f4f0 + 0x513) == '\0') {
      bVar4 = false;
    }
    else if (((*(int *)(DAT_0040f4f0 + 0xc) == 4) && (*(int *)(DAT_0040f4f0 + 0x14) == 5)) ||
            ((bVar4 = false, *(int *)(DAT_0040f4f0 + 0xc) == 3 &&
             (bVar4 = false, *(int *)(DAT_0040f4f0 + 0x18) == 6)))) {
      bVar4 = true;
    }
    if (bVar4) {
      DAT_003be850 = FUN_0010b620(DAT_0040f4f0);
      pcVar12 = "memcardslots";
    }
    else if (*(char *)(DAT_0040f4f0 + 0x514) == '\x01') {
      pcVar12 = "VirtualKeyboard";
    }
    else {
      lVar9 = FUN_00275340(psVar5);
      iVar6 = DAT_0040f544;
      if (lVar9 < 1) {
        FUN_0035cbc0(DAT_0040f544 + 0x3820,0x3fa7d8);
        if (*(char *)(iVar6 + 0x3840) == '\0') {
          *(undefined4 *)(iVar6 + 0x388c) = 1;
        }
        else {
          *(undefined4 *)(iVar6 + 0x3884) = 1;
        }
        goto LAB_002154fc;
      }
      DAT_003be850 = FUN_0010b620(DAT_0040f4f0);
      pcVar12 = "memcardmessage";
      DAT_003be854 = *(undefined4 *)(DAT_0040f4f0 + 0x4f4);
    }
    iVar6 = DAT_0040f544;
    FUN_0035cbc0(DAT_0040f544 + 0x3820,pcVar12);
    if (*(char *)(iVar6 + 0x3840) == '\0') {
      *(undefined4 *)(iVar6 + 0x388c) = 1;
    }
    else {
      *(undefined4 *)(iVar6 + 0x3884) = 1;
    }
  }
LAB_002154fc:
  if (DAT_003be84c == 0) {
    *(undefined4 *)(DAT_0040f0e0 + 0x2042c) = 0;
  }
  lVar9 = FUN_0010b610(DAT_0040f4f0);
  if (lVar9 != 0) {
    if (((DAT_003be84c == 0) || (DAT_003be84c == 3)) || (DAT_003be84c == 1)) {
      FUN_00210db8();
      FUN_002122a0();
      FUN_00212048();
      FUN_00211d10();
      FUN_00215028(DAT_0040f0e0 + 0x20258);
    }
    switch(DAT_003be84c) {
    case 0:
      FUN_001050a8(DAT_0040f0e0 + 0x20220,0x3fa888);
      break;
    case 1:
    case 2:
    case 3:
      FUN_001050a8(DAT_0040f0e0 + 0x20220,0x3fbd90);
      break;
    default:
      FUN_001050a8(DAT_0040f0e0 + 0x20220,0x3faec0);
      break;
    case 5:
      FUN_001050a8(DAT_0040f0e0 + 0x20220,0x3fbda0);
      break;
    case 6:
      FUN_001050a8(DAT_0040f0e0 + 0x20220,0);
      break;
    case 7:
      DAT_003be858 = (uint)(*(char *)(DAT_0040f0e0 + 0x20164) == '\x01');
      FUN_001050a8(DAT_0040f0e0 + 0x20220,0x3fbd90);
    }
  }
  return;
}


// ==== FUN_00215788 @ 00215788 ====

void FUN_00215788(void)

{
  FUN_00105258(DAT_0040f0e0 + 0x20220);
  FUN_0010b2a8(DAT_0040f4f0);
  DAT_003be84c = 0;
  return;
}


// ==== FUN_00215858 @ 00215858 ====

void FUN_00215858(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 auStack_e0 [24];
  
  iVar3 = FUN_0010f280(DAT_0040f4ec);
  puVar6 = (undefined8 *)(iVar3 + 8);
  puVar2 = auStack_e0;
  do {
    puVar9 = puVar2;
    puVar5 = puVar6;
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    uVar10 = puVar5[3];
    *puVar9 = *puVar5;
    puVar9[1] = uVar7;
    puVar9[2] = uVar8;
    puVar9[3] = uVar10;
    puVar6 = puVar5 + 4;
    puVar2 = puVar9 + 4;
  } while (puVar6 != (undefined8 *)(iVar3 + 0xa8));
  iVar3 = DAT_0040f0e0 + 0x2014c;
  uVar8 = puVar5[5];
  uVar7 = puVar5[6];
  uVar1 = *(undefined4 *)(puVar5 + 7);
  puVar9[4] = *puVar6;
  puVar9[5] = uVar8;
  puVar9[6] = uVar7;
  *(undefined4 *)(puVar9 + 7) = uVar1;
  lVar4 = FUN_0035c4b0(iVar3,auStack_e0,0xbc);
  if (lVar4 == 0) {
    FUN_001050a8(DAT_0040f0e0 + 0x20220,0);
  }
  else if ((*DAT_0040f53c == 0) || (*(char *)(*DAT_0040f53c + 0x6a5) != '\0')) {
    FUN_001050a8(DAT_0040f0e0 + 0x20220,0);
  }
  else {
    FUN_00105258(DAT_0040f0e0 + 0x20220);
    FUN_0010b2c0(DAT_0040f4f0,0);
    DAT_003be84c = 6;
  }
  return;
}


// ==== FUN_00215980 @ 00215980 ====

void FUN_00215980(void)

{
  long lVar1;
  
  lVar1 = FUN_0035e750();
  if ((lVar1 != 0) != (bool)*(char *)(DAT_0040f0e0 + 0x20164)) {
    FUN_00105258(DAT_0040f0e0 + 0x20220);
    if (lVar1 != 0) {
      FUN_0010b2f0(DAT_0040f4f0);
    }
    else {
      FUN_0010b308(DAT_0040f4f0);
    }
    DAT_003be84c = 7;
  }
  return;
}


// ==== FUN_00215a30 @ 00215a30 ====

void FUN_00215a30(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char acStack_81 [65];
  
  iVar4 = 0;
  FUN_0035c6ec(acStack_81 + 1,0,0x40);
  FUN_0035d1a0(acStack_81 + 1,param_1,0x3e);
  if (acStack_81[1] == ' ') {
    for (iVar4 = 1; (iVar4 < 0x3e && (acStack_81[iVar4 + 1] == ' ')); iVar4 = iVar4 + 1) {
    }
  }
  iVar1 = FUN_0035ccd8(acStack_81 + 1);
  iVar3 = iVar1 + -1;
  if ((0 < iVar3) && (acStack_81[iVar1] == ' ')) {
    for (iVar3 = iVar1 + -2; (0 < iVar3 && (acStack_81[iVar3 + 1] == ' ')); iVar3 = iVar3 + -1) {
    }
  }
  lVar2 = FUN_00214c48(param_1);
  if (lVar2 == 0) {
    if (iVar3 < iVar4) {
      lVar2 = FUN_00275340(DAT_004924b4);
      if ((0 < lVar2) && (lVar2 = FUN_0010b530(DAT_0040f4f0,DAT_004924b4), lVar2 == 1)) {
        FUN_0010b608(DAT_0040f4f0,0);
      }
    }
    else if (0 < (iVar3 - iVar4) + 1) {
      acStack_81[iVar3 + 2] = '\0';
      acStack_81[iVar3 + 3] = '\0';
      lVar2 = FUN_0010b4e0(DAT_0040f4f0,acStack_81 + iVar4 + 1);
      if (lVar2 == 1) {
        FUN_0010b608(DAT_0040f4f0,0);
      }
    }
  }
  else {
    DAT_0048f4d5 = 1;
    FUN_0010b608(DAT_0040f4f0,2);
  }
  return;
}


// ==== FUN_00215bb0 @ 00215bb0 ====

void FUN_00215bb0(void)

{
  FUN_0010b530(DAT_0040f4f0,0);
  FUN_0010b608(DAT_0040f4f0,1);
  return;
}


// ==== FUN_00215be8 @ 00215be8 ====

/* Strings referenciadas:
     "Eurostile LT Std"
     "UpdateCursorCallBack" */

void FUN_00215be8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  float fVar8;
  undefined1 auStack_d0 [64];
  
  FUN_00275260(param_1,auStack_d0,0x20);
  fVar8 = 0.0;
  iVar1 = FUN_0035e750((int)param_1 + 0x3c);
  lVar2 = FUN_00275340(auStack_d0);
  iVar5 = DAT_0040f0e0;
  if (lVar2 != 0) {
    ppuVar7 = &PTR_s_ITC_Machine_Std_003bc3a0;
    piVar4 = (int *)(DAT_0040f0e0 + 0x2107c);
    iVar6 = 0;
    do {
      if ((*piVar4 != 0) && (lVar2 = FUN_00360838(*ppuVar7,0x3fbde0), lVar2 == 0)) {
        iVar5 = *piVar4;
        goto LAB_00215cbc;
      }
      iVar6 = iVar6 + 1;
      ppuVar7 = ppuVar7 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 2);
    iVar5 = *(int *)(iVar5 + 0x2107c);
LAB_00215cbc:
    fVar8 = (float)FUN_002758e0(iVar5,auStack_d0);
    fVar8 = fVar8 * (float)iVar1;
  }
  iVar5 = DAT_0040f544 + 0x38e7;
  uVar3 = FUN_0024f898(fVar8);
  FUN_0021a7e0(0x3fbdf8,0,iVar5,1,uVar3);
  return;
}


// ==== FUN_00215d20 @ 00215d20 ====

void FUN_00215d20(undefined8 param_1)

{
  undefined1 auStack_60 [64];
  
  FUN_00275260((int)param_1 + 0x78,auStack_60,0x20);
  FUN_0020de78(0x4924b0,auStack_60);
  FUN_00215be8(param_1);
  return;
}


// ==== FUN_00215d68 @ 00215d68 ====

void FUN_00215d68(undefined8 param_1,undefined8 param_2)

{
  FUN_0020de28(0x4924b0);
  FUN_0035d1a0(0x3be860,param_2,0x3c);
  return;
}


// ==== fe_FE_MISSIONNAME_00215da8 @ 00215da8 ====

/* Strings referenciadas:
     "SetupObjectives"
     "CloseObjectivesScreen"
     "FE_MISSIONNAME"
     "FE_MISSIONDATE"
     "FE_OBJECTIVE%d" */

undefined4 fe_FE_MISSIONNAME_00215da8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_90 [32];
  
  iVar2 = 0;
  FUN_0020df68(param_1,0x3fbe10,0x215f80);
  FUN_0020df68(param_1,0x3fbe20,0x216258);
  FUN_0020dcb0(0x4924c0);
  FUN_0020dcf8(0x4924c0,0x3fbe38);
  FUN_0020dcb0(0x4924d0);
  FUN_0020dcf8(0x4924d0,0x3fbe48);
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_0020dcb0(&DAT_004924e0 + iVar1);
    FUN_0035d728(auStack_90,0x3fbe58,iVar2);
    FUN_0020dcf8(&DAT_004924e0 + iVar1,auStack_90);
    iVar1 = iVar2 * 0xc;
  } while (iVar2 < 2);
  FUN_001f2838(DAT_0040f51c,0,0);
  return 1;
}


// ==== FUN_00215ec8 @ 00215ec8 ====

/* Strings referenciadas:
     "SetupObjectives"
     "CloseObjectivesScreen" */

undefined4 FUN_00215ec8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_004924e0;
  do {
    FUN_0020dd48(puVar1);
    FUN_0020df30(puVar1);
    puVar1 = puVar1 + 0xc;
  } while ((int)puVar1 < 0x4924f8);
  FUN_0020dd48(0x4924c0);
  FUN_0020df30(0x4924c0);
  FUN_0020dd48(0x4924d0);
  FUN_0020df30(0x4924d0);
  FUN_0020df90(param_1,0x3fbe10);
  FUN_0020df90(param_1,0x3fbe20);
  return 1;
}


// ==== FUN_00215f80 @ 00215f80 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "OBJ_CHALLENGE_HEADSHOTS"
     "OBJ_CHALLENGE_TIME"
     "OBJ_CHALLENGE_TARGETS"
     "ShowMap"
     "_EXTRA"
     "L%d_PMO_%d" */

void FUN_00215f80(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_f0 [48];
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 auStack_be [30];
  
  lVar2 = FUN_00122980(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  if (lVar2 != 0) {
    lVar2 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    if ((0 < lVar2) &&
       (iVar1 = FUN_00123c90(0x48efa8,(int)lVar2 + -1,*(undefined4 *)(DAT_0040f0e0 + 0x2014c)),
       *(char *)(iVar1 + 0x18) != '\0')) {
      FUN_0021a480(0x3fbe68,0,DAT_0040f544 + 0x38e7,0);
    }
    FUN_0035d728(auStack_f0,0x3fae50,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    uVar3 = FUN_001087c8(DAT_0040f4c4,auStack_f0);
    uVar4 = FUN_0035ccd8(uVar3);
    if (uVar4 < 0x15) {
      uStack_c0 = DAT_003fbe70;
      uStack_bf = DAT_003fbe71;
      FUN_0035c6ec(auStack_be,0,0x1e);
      FUN_0035cbc0(&uStack_bf,uVar3);
      FUN_0020de28(0x4924c0,&uStack_c0);
    }
    else {
      FUN_0020de28(0x4924c0,uVar3);
    }
    FUN_0035c7a4(auStack_f0,0x3fbe78);
    lVar2 = FUN_001087c8(DAT_0040f4c4,auStack_f0);
    if (lVar2 != 0) {
      FUN_0020de28(0x4924d0,lVar2);
    }
    iVar1 = *(int *)(DAT_0040f0e0 + 0x21070);
    if (iVar1 == DAT_0040f0e0 + 0x20f78) {
      iVar1 = 0;
      do {
        iVar6 = iVar1 + 1;
        FUN_0035d728(auStack_f0,0x3fbe80,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),iVar6);
        lVar2 = FUN_001087c8(DAT_0040f4c4,auStack_f0);
        if (lVar2 != 0) {
          FUN_0020de28(&DAT_004924e0 + iVar1 * 0xc,lVar2);
        }
        iVar1 = iVar6;
      } while (iVar6 < 2);
    }
    else if (iVar1 == DAT_0040f0e0 + 0x20fa0) {
      if (*(int *)(*(int *)(iVar1 + 0x30) + 4) == 0) {
        pcVar5 = "OBJ_CHALLENGE_HEADSHOTS";
      }
      else {
        pcVar5 = "OBJ_CHALLENGE_TIME";
      }
      uVar3 = FUN_001087c8(DAT_0040f4c4,pcVar5);
      FUN_0020de28(0x4924e0,uVar3);
    }
    else {
      uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fb0c0);
      FUN_0020de28(0x4924e0,uVar3);
    }
    FUN_00103800(DAT_0040f0e0,1);
  }
  return;
}


// ==== FUN_00216258 @ 00216258 ====

void FUN_00216258(void)

{
  FUN_0020b988(DAT_0040f544,4);
  FUN_001f2838(DAT_0040f51c,0,6);
  FUN_001d8df0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34));
  FUN_00103818(DAT_0040f0e0);
  FUN_001005a0(DAT_0040f0e4);
  return;
}


// ==== fe_FE_PLAYERNAME_002162c8 @ 002162c8 ====

/* Strings referenciadas:
     "SetupOperatorProfileStrings"
     "FE_PLAYERNAME"
     "FE_RANK"
     "FE_COMPLETIONRESULTS"
     "FE_GAMETIMERESULTS"
     "FE_TOTALENEMYCOUNTRESULTS"
     "FE_HEADSHOTSRESULTS"
     "FE_TOTALBULLETSFIREDRESULTS"
     "FE_WEAPONOFCHOICERESULTS" */

undefined4 fe_FE_PLAYERNAME_002162c8(undefined8 param_1)

{
  FUN_0020df68(param_1,0x3fbf20,0x216438);
  FUN_0020dcb0(0x4924f8);
  FUN_0020dcb0(0x492508);
  FUN_0020dcb0(0x492518);
  FUN_0020dcb0(0x492528);
  FUN_0020dcb0(0x492538);
  FUN_0020dcb0(0x492548);
  FUN_0020dcb0(0x492558);
  FUN_0020dcb0(0x492568);
  FUN_0020dcf8(0x4924f8,0x3fbf40);
  FUN_0020dcf8(0x492508,0x3fbf50);
  FUN_0020dcf8(0x492518,0x3fbf58);
  FUN_0020dcf8(0x492528,0x3fbf70);
  FUN_0020dcf8(0x492538,0x3fbf88);
  FUN_0020dcf8(0x492548,0x3fbfa8);
  FUN_0020dcf8(0x492558,0x3fbfc0);
  FUN_0020dcf8(0x492568,0x3fbfe0);
  return 1;
}


// ==== fe_FE_TIME_HOURSMINUTESSECONDS_00216438 @ 00216438 ====

/* Strings referenciadas:
     "FE_TIME_HOURSMINUTESSECONDS"
     "FE_LEVELRATING_5"
     "FE_TOTALCOMPLETIONFORMAT"
     "WPN_MGM" */

void fe_FE_TIME_HOURSMINUTESSECONDS_00216438(void)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_100 [32];
  char acStack_e0 [8];
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  ulong uStack_b8;
  int iStack_b0;
  char *pcStack_ac;
  
  uVar5 = DAT_0048f4c8;
  iVar9 = 0;
  iStack_b0 = 0;
  uStack_d0 = DAT_0048f4c8;
  uStack_c8 = DAT_0048f3b0;
  pcStack_ac = acStack_e0;
  uStack_c4 = DAT_0048f3b4;
  uStack_b8 = 0;
  uStack_c0 = (undefined4)DAT_0048f3b8;
  iVar11 = 0;
  do {
    iVar10 = 0;
    iVar8 = iVar11 + 1;
    while (iVar3 = FUN_001229f8(DAT_0040f4e8), iVar10 < iVar3) {
      piVar2 = (int *)FUN_00123c90(0x48efa8,iVar10,iVar11);
      if (*(char *)((int)piVar2 + 0x1a) == '\0') {
        iVar10 = iVar10 + 1;
      }
      else if (*piVar2 == -1) {
        iVar10 = iVar10 + 1;
      }
      else {
        if (*piVar2 != 0) {
          iVar9 = iVar9 + (char)(&DAT_003fcd10)[iVar10 + iVar11 * 8];
        }
        iVar10 = iVar10 + 1;
      }
    }
    iVar11 = iVar8;
  } while (iVar8 < 4);
  FUN_0020de28(0x4924f8,*DAT_0040f53c + 8);
  iVar11 = (int)(((float)iVar9 * 5.0) / 100.0);
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  if (5 < iVar11) {
    iVar11 = 5;
  }
  uVar4 = FUN_001087c8(DAT_0040f4c4,(&PTR_s_FE_LEVELRATING_0_003be8a0)[iVar11]);
  FUN_0020de28(0x492508,uVar4);
  uVar4 = FUN_001087c8(DAT_0040f4c4,0x3fc000);
  FUN_0020dec8(0x492518,uVar4,iVar9);
  if (DAT_0040eae4 == 4) {
    uVar4 = 0xa0;
  }
  else if (DAT_0040eae4 < 5) {
    if (DAT_0040eae4 != 3) {
LAB_00216654:
      FUN_002756a8(0x2c,0x2e);
      goto LAB_00216660;
    }
    uVar4 = 0x2e;
  }
  else {
    if (6 < DAT_0040eae4) goto LAB_00216654;
    uVar4 = 0x2e;
  }
  FUN_002756a8(uVar4,0x2c);
LAB_00216660:
  FUN_00275560(auStack_100,uStack_c0,1,0);
  FUN_0020de78(0x492558,auStack_100);
  FUN_00275560(auStack_100,uStack_c8,1,0);
  iVar8 = 0;
  FUN_0020de78(0x492538,auStack_100);
  FUN_00275560(auStack_100,uStack_c4,1,0);
  FUN_0020de78(0x492548,auStack_100);
  iVar11 = (int)uVar5 / 0xe10;
  iVar9 = FUN_002904f0(uStack_d0,0x3c);
  iVar9 = iVar9 + iVar11 * -0x3c;
  uVar4 = FUN_001087c8(DAT_0040f4c4,0x3fb718);
  FUN_0020dec8(0x492528,uVar4,iVar11,iVar9,(int)uVar5 % 0xe10 + iVar9 * -0x3c);
  puVar6 = &DAT_0048f3c0;
  do {
    uVar1 = *puVar6;
    iVar11 = iVar8;
    if (*puVar6 <= uStack_b8) {
      uVar1 = uStack_b8;
      iVar11 = iStack_b0;
    }
    iStack_b0 = iVar11;
    uStack_b8 = uVar1;
    iVar8 = iVar8 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar8 < 0x20);
  lVar7 = *(long *)(((iStack_b0 << 0x18) >> 0x13) + *(int *)(*DAT_0040f4e0 + 4));
  if (lVar7 == 0x5446143910fd0000) {
    acStack_e0[0] = s_WPN_MGM_003fc020[0];
    acStack_e0[1] = s_WPN_MGM_003fc020[1];
    acStack_e0[2] = s_WPN_MGM_003fc020[2];
    acStack_e0[3] = s_WPN_MGM_003fc020[3];
    acStack_e0[4] = s_WPN_MGM_003fc020[4];
    acStack_e0[5] = s_WPN_MGM_003fc020[5];
    acStack_e0[6] = s_WPN_MGM_003fc020[6];
    acStack_e0[7] = s_WPN_MGM_003fc020[7];
  }
  else if (lVar7 == 0x5446129c3e9d8000) {
    acStack_e0[0] = DAT_003fc028[0];
    acStack_e0[1] = DAT_003fc028[1];
    acStack_e0[2] = DAT_003fc028[2];
    acStack_e0[3] = DAT_003fc028[3];
    acStack_e0[4] = DAT_003fc028[4];
    acStack_e0[5] = DAT_003fc028[5];
    acStack_e0[6] = DAT_003fc028[6];
    acStack_e0[7] = DAT_003fc028[7];
    uStack_d8 = DAT_003fc030;
  }
  else {
    FUN_00272488(lVar7,pcStack_ac);
    acStack_e0[0] = 'W';
    acStack_e0[1] = 'P';
    acStack_e0[2] = 'N';
    acStack_e0 = (char  [8])((ulong)acStack_e0 & 0xffffffffffffff);
  }
  uVar5 = FUN_001087c8(DAT_0040f4c4,pcStack_ac);
  FUN_0020de28(0x492568,uVar5);
  return;
}


// ==== FUN_00216878 @ 00216878 ====

/* Strings referenciadas:
     "SetupOperatorProfileStrings" */

undefined4 FUN_00216878(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fbf20);
  FUN_0020dd48(0x4924f8);
  FUN_0020dd48(0x492508);
  FUN_0020dd48(0x492518);
  FUN_0020dd48(0x492528);
  FUN_0020dd48(0x492538);
  FUN_0020dd48(0x492548);
  FUN_0020dd48(0x492558);
  FUN_0020dd48(0x492568);
  FUN_0020df30(0x4924f8);
  FUN_0020df30(0x492508);
  FUN_0020df30(0x492518);
  FUN_0020df30(0x492528);
  FUN_0020df30(0x492538);
  FUN_0020df30(0x492548);
  FUN_0020df30(0x492558);
  FUN_0020df30(0x492568);
  return 1;
}


// ==== fe_FESetLanguage_002169a0 @ 002169a0 ====

/* Strings referenciadas:
     "FESetLanguage" */

undefined4 fe_FESetLanguage_002169a0(undefined8 param_1)

{
  FUN_0020df68(param_1,0x3fc038,0x2169f8);
  return 1;
}


// ==== fe_FESetLanguage_002169d0 @ 002169d0 ====

/* Strings referenciadas:
     "FESetLanguage" */

undefined4 fe_FESetLanguage_002169d0(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fc038);
  return 1;
}


// ==== FUN_002169f8 @ 002169f8 ====

void FUN_002169f8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0035e750();
  switch(uVar1) {
  case 0:
    DAT_0040eae4 = 0;
    break;
  case 1:
    DAT_0040eae4 = 3;
    break;
  case 2:
    DAT_0040eae4 = 4;
    break;
  case 3:
    DAT_0040eae4 = 6;
    break;
  case 4:
    DAT_0040eae4 = 5;
    break;
  default:
    goto switchD_00216a28_default;
  }
  FUN_0020ca98(DAT_0040f544);
  DAT_0040d99c = 1;
switchD_00216a28_default:
  return;
}


// ==== FUN_00216a98 @ 00216a98 ====

/* Strings referenciadas:
     "TriggerFMVDone" */

undefined4 FUN_00216a98(undefined8 param_1)

{
  FUN_0020df68(param_1,0x3fc0c8,0x216b00);
  return 1;
}


// ==== FUN_00216ac8 @ 00216ac8 ====

/* Strings referenciadas:
     "TriggerFMVDone" */

undefined4 FUN_00216ac8(undefined8 param_1)

{
  FUN_0020df90(param_1,0x3fc0c8);
  return 1;
}


// ==== FUN_00216af0 @ 00216af0 ====

void FUN_00216af0(undefined4 param_1)

{
  DAT_003be8b8 = param_1;
  return;
}


// ==== FUN_00216b00 @ 00216b00 ====

void FUN_00216b00(void)

{
  long lVar1;
  
  lVar1 = FUN_0035e750();
  if (lVar1 == 1) {
    (*DAT_003be8b8)(0);
  }
  else if (cGpffff92f0 != '\0') {
    (*DAT_003be8b8)(1);
  }
  return;
}


// ==== fe_FE_HINT_TEXT_00216b68 @ 00216b68 ====

/* Strings referenciadas:
     "FE_HINT_TEXT"
     "FE_LOADINGLEVELNAME"
     "FE_LOADINGDIFFICULTY"
     "FE_LOADINGTOCOMPLETE"
     "FE_LOADINGPRIMARYTOTAL"
     "FE_LOADINGINTELTOTAL"
     "FE_LOADINGBLACKMAILTOTAL"
     "FE_LOADINGDESTRUCTIONTOTAL"
     "FE_LOADINGARMAMENTTOTAL"
     "FE_LOADINGRECONTOTAL"
     "FE_LOADINGOBJECTIVESTOTAL"
     "FE_SECONDARYOBJECTIVETARGET" */

undefined4 fe_FE_HINT_TEXT_00216b68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_b0 [4];
  ushort uStack_ac;
  ushort uStack_aa;
  ushort uStack_a8;
  ushort uStack_a6;
  
  uVar1 = DAT_003fcd48;
  iVar4 = 7;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  do {
    if (iVar4 < 0) {
LAB_00216c18:
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 1;
      FUN_0020dcb0(0x492588);
      FUN_0020dcb0(0x492598);
      FUN_0020dcb0(0x4925a8);
      FUN_0020dcb0(0x4925b8);
      FUN_0020dcb0(0x4925c8);
      FUN_0020dcb0(0x4925d8);
      FUN_0020dcb0(0x4925e8);
      FUN_0020dcb0(0x4925f8);
      FUN_0020dcb0(0x492608);
      FUN_0020dcb0(0x492618);
      FUN_0020dcb0(0x492628);
      FUN_0020dcb0(0x492638);
      FUN_0020dcf8(0x492588,0x3fc138);
      FUN_0020dcf8(0x492598,0x3fc148);
      FUN_0020dcf8(0x4925a8,0x3fc160);
      FUN_0020dcf8(0x4925b8,0x3fc178);
      FUN_0020dcf8(0x4925c8,0x3fc190);
      FUN_0020dcf8(0x4925d8,0x3fc1a8);
      FUN_0020dcf8(0x4925e8,0x3fc1c0);
      FUN_0020dcf8(0x4925f8,0x3fc1e0);
      FUN_0020dcf8(0x492608,0x3fc200);
      FUN_0020dcf8(0x492618,0x3fc218);
      FUN_0020dcf8(0x492628,0x3fc230);
      FUN_0020dcf8(0x492638,0x3fc250);
      FUN_00382348(param_1 + 0x10,0x2b9d6f8);
      FUN_0026f340(auStack_b0);
      uVar5 = (uint)uStack_a6 * 0x3c * (uint)uStack_a8 + (uint)uStack_aa * 0xe10 +
              (uint)uStack_ac * 0x34bc0;
      uVar3 = ~uVar5;
      *(uint *)(param_1 + 0x14) = uVar5;
      iVar4 = uVar3 * 0x10000 + ((int)uVar3 >> 0x10);
      *(int *)(param_1 + 0x10) = iVar4;
      iVar4 = iVar4 + *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x10) = iVar4;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar4;
      *(int *)(param_1 + 4) =
           (int)((float)*(uint *)(param_1 + 0x10) * 2.3283064e-10 *
                ((float)*(int *)(param_1 + 0xc) - 1.0));
      iVar4 = *(int *)(&DAT_003fcd30 + (uStack_a6 / 10) * 4);
      *(int *)(param_1 + 8) = iVar4;
      if (*(int *)(param_1 + 0xc) % iVar4 == 0) {
        *(undefined4 *)(param_1 + 8) = 1;
      }
      return 1;
    }
    iVar2 = FUN_00123c90(0x48efa8,iVar4,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
    if (*(char *)(iVar2 + 0x1a) != '\0') {
      *(undefined4 *)(param_1 + 0xc) = (&DAT_003fcd48)[iVar4];
      goto LAB_00216c18;
    }
    iVar4 = iVar4 + -1;
  } while( true );
}


// ==== FUN_00216f08 @ 00216f08 ====

/* Strings referenciadas:
     "HINT_%d" */

void FUN_00216f08(int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 auStack_140 [256];
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_0035d728(auStack_140,0x3fc270,*(undefined4 *)(param_1 + 4));
    for (iVar3 = 7; -1 < iVar3; iVar3 = iVar3 + -1) {
      iVar1 = FUN_00123c90(0x48efa8,iVar3,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
      if (*(char *)(iVar1 + 0x1a) != '\0') {
        *(undefined4 *)(param_1 + 0xc) = (&DAT_003fcd48)[iVar3];
        break;
      }
    }
    lVar2 = FUN_001087c8(DAT_0040f4c4,auStack_140);
    if (lVar2 != 0) {
      FUN_0020de28(0x492588,lVar2);
    }
    iVar3 = (*(int *)(param_1 + 4) + *(int *)(param_1 + 8)) % (*(int *)(param_1 + 0xc) + 1);
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    FUN_0020dd88(0x492588);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


// ==== fe_FE_COMPLETEALLPRIMARYOBJECTIVES_00217010 @ 00217010 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_COMPLETEALLPRIMARYOBJECTIVES"
     "LoadOverlayEasy"
     "LoadOverlayHard"
     "LoadOverlayBlack"
     "FE_COMPLETE_OBJECTIVES" */

void fe_FE_COMPLETEALLPRIMARYOBJECTIVES_00217010(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_d0 [32];
  int aiStack_b0 [4];
  
  uVar1 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  FUN_0035d728(auStack_d0,0x3fae50,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar2 = FUN_001087c8(DAT_0040f4c4,auStack_d0);
  FUN_0020de28(0x492598,uVar2);
  uVar2 = fe_FE_DIFFEASY_00108ce0(DAT_0040f0e0 + 0x2014c);
  FUN_0020de28(0x4925a8,uVar2);
  iVar4 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar4 < 3) {
    if (iVar4 < 1) {
      if (iVar4 != 0) goto LAB_0021717c;
      pcVar3 = "LoadOverlayEasy";
    }
    else {
      pcVar3 = "LoadOverlayHard";
    }
    FUN_0020b678(DAT_0040f544,pcVar3,6);
    FUN_0020ba98(DAT_0040f544,6,1);
  }
  else if (iVar4 == 3) {
    FUN_0020b678(DAT_0040f544,0x3fc298,6);
    FUN_0020ba98(DAT_0040f544,6,1);
  }
LAB_0021717c:
  iVar4 = 0;
  FUN_0020de28(0x4925c8,DAT_0043da60);
  if (*(int *)(DAT_0040f0e0 + 0x2014c) < 1) {
    FUN_0020de28(0x4925d8,DAT_0043da5c);
    FUN_0020de28(0x4925e8,DAT_0043da5c);
    FUN_0020de28(0x492608,DAT_0043da5c);
    FUN_0020de28(0x492618,DAT_0043da5c);
  }
  else {
    FUN_0012f800(DAT_0040f4d0 + 0x910,uVar1,3,aiStack_b0);
    iVar4 = aiStack_b0[0];
    FUN_0020dec8(0x4925d8,DAT_0043da58,aiStack_b0[0]);
    FUN_0012f780(DAT_0040f4d0 + 0x910,uVar1,3,aiStack_b0);
    iVar4 = iVar4 + aiStack_b0[0];
    FUN_0020dec8(0x4925e8,DAT_0043da58,aiStack_b0[0]);
    FUN_0012f7c0(DAT_0040f4d0 + 0x910,uVar1,3,aiStack_b0);
    iVar4 = iVar4 + aiStack_b0[0];
    FUN_0020dec8(0x492608,DAT_0043da58,aiStack_b0[0]);
    FUN_0012f840(DAT_0040f4d0 + 0x910,uVar1,3,aiStack_b0);
    iVar4 = iVar4 + aiStack_b0[0];
    FUN_0020dec8(0x492618,DAT_0043da58,aiStack_b0[0]);
  }
  if (*(int *)(DAT_0040f0e0 + 0x2014c) == 3) {
    FUN_0012f740(DAT_0040f4d0 + 0x910,uVar1,3,aiStack_b0);
    iVar4 = iVar4 + aiStack_b0[0];
    FUN_0020dec8(0x4925f8,DAT_0043da58);
  }
  else {
    FUN_0020de28(0x4925f8,DAT_0043da5c);
  }
  FUN_0020dec8(0x492628,DAT_0043da58,iVar4);
  FUN_0012f880(DAT_0040f4d0 + 0x910,uVar1,*(undefined4 *)(DAT_0040f0e0 + 0x2014c),aiStack_b0);
  if (aiStack_b0[0] < 1) {
    uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fb150);
    FUN_0020de28(0x4925b8,uVar1);
  }
  else {
    uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc2b0);
    FUN_0020dec8(0x4925b8,uVar1,aiStack_b0[0]);
  }
  return;
}


// ==== fe_FE_SECONDARYOBJECTIVETARGET_00217408 @ 00217408 ====

/* Strings referenciadas:
     "FE_SECONDARYOBJECTIVETARGET" */

void fe_FE_SECONDARYOBJECTIVETARGET_00217408(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 auStack_70 [4];
  
  uVar1 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  auStack_70[0] = 0;
  uVar2 = FUN_0012fb48(DAT_0040f4d0 + 0x910,uVar1,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
  FUN_0012f880(DAT_0040f4d0 + 0x910,uVar1,*(undefined4 *)(DAT_0040f0e0 + 0x2014c),auStack_70);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc250);
  FUN_0020dec8(0x492638,uVar1,auStack_70[0],uVar2);
  return;
}


// ==== FUN_002174e0 @ 002174e0 ====

undefined4 FUN_002174e0(void)

{
  FUN_0020dd48(0x492588);
  FUN_0020dd48(0x492598);
  FUN_0020dd48(0x4925a8);
  FUN_0020dd48(0x4925b8);
  FUN_0020dd48(0x4925c8);
  FUN_0020dd48(0x4925d8);
  FUN_0020dd48(0x4925e8);
  FUN_0020dd48(0x4925f8);
  FUN_0020dd48(0x492608);
  FUN_0020dd48(0x492618);
  FUN_0020dd48(0x492628);
  FUN_0020dd48(0x492638);
  FUN_0020df30(0x492588);
  FUN_0020df30(0x492598);
  FUN_0020df30(0x4925a8);
  FUN_0020df30(0x4925b8);
  FUN_0020df30(0x4925c8);
  FUN_0020df30(0x4925d8);
  FUN_0020df30(0x4925e8);
  FUN_0020df30(0x4925f8);
  FUN_0020df30(0x492608);
  FUN_0020df30(0x492618);
  FUN_0020df30(0x492628);
  FUN_0020df30(0x492638);
  return 1;
}


// ==== fe_FECurrentRewardType_00217670 @ 00217670 ====

/* Strings referenciadas:
     "FECurrentRewardType"
     "FENextRewardType"
     "FESetupRewardScreen"
     "FE_CURRENTUNLOCKLEVEL"
     "FE_WHATYOUHAVEDONE"
     "FE_YOUHAVEUNLOCKED"
     "FE_CONGRATULATIONS" */

undefined4 fe_FECurrentRewardType_00217670(undefined8 param_1)

{
  FUN_00217818(0);
  FUN_0020e068(param_1,0x3fc2e8,0x40eb48);
  FUN_0020e068(param_1,0x3fc300,0x40eb4c);
  FUN_0020df68(param_1,0x3fc318,0x217a08);
  FUN_0020dcb0(0x492648);
  FUN_0020dcf8(0x492648,0x3fc330);
  FUN_0020dcb0(0x492658);
  FUN_0020dcf8(0x492658,0x3fc348);
  FUN_0020dcb0(0x492668);
  FUN_0020dcf8(0x492668,0x3fc360);
  FUN_0020dcb0(0x492678);
  FUN_0020dcf8(0x492678,0x3fc378);
  return 1;
}


// ==== fe_FECurrentRewardType_00217768 @ 00217768 ====

/* Strings referenciadas:
     "FECurrentRewardType"
     "FENextRewardType"
     "FESetupRewardScreen" */

undefined4 fe_FECurrentRewardType_00217768(undefined8 param_1)

{
  FUN_0020e0c8(param_1,0x3fc2e8);
  FUN_0020e0c8(param_1,0x3fc300);
  FUN_0020df90(param_1,0x3fc318);
  FUN_0020dd48(0x492648);
  FUN_0020df30(0x492648);
  FUN_0020dd48(0x492658);
  FUN_0020df30(0x492658);
  FUN_0020dd48(0x492668);
  FUN_0020df30(0x492668);
  FUN_0020dd48(0x492678);
  FUN_0020df30(0x492678);
  return 1;
}


// ==== FUN_00217818 @ 00217818 ====

int FUN_00217818(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  DAT_0040eb50 = 0;
  DAT_0040eb54 = 5;
  puVar3 = &DAT_004926a0;
  puVar2 = &DAT_00492688;
  iVar1 = 4;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    *puVar3 = 0;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar1);
  DAT_0040eb58 = 0;
  DAT_0040eb48 = 5;
  DAT_0040eb4c = 5;
  if (param_1 != 0) {
    DAT_0040eb50 = (int)param_1;
    if (*(char *)(DAT_0040eb50 + *(int *)(DAT_0040f0e0 + 0x2014c) + 0x1b7) != '\0') {
      if (DAT_0040eb54 == 5) {
        DAT_0040eb54 = 0;
      }
      DAT_004926a0 = 0;
      DAT_0040eb58 = 1;
      DAT_00492688 = 1;
    }
    if (0 < *(int *)(DAT_0040eb50 + 0x1b0)) {
      if (DAT_0040eb54 == 5) {
        DAT_0040eb54 = 1;
        DAT_0049268c = *(undefined4 *)(DAT_0040eb50 + 0x1b0);
      }
      else {
        DAT_0049268c = *(undefined4 *)(DAT_0040eb50 + 0x1b0);
      }
      DAT_004926a4 = 0;
      DAT_0040eb58 = DAT_0040eb58 + *(int *)(DAT_0040eb50 + 0x1b0);
    }
    if (*(char *)(DAT_0040eb50 + 0x1b6) != '\0') {
      if (DAT_0040eb54 == 5) {
        DAT_0040eb54 = 2;
      }
      DAT_00492690 = 1;
      DAT_0040eb58 = DAT_0040eb58 + 1;
      DAT_004926a8 = 0;
    }
    if (0 < *(int *)(DAT_0040eb50 + 0x1a8)) {
      if (DAT_0040eb54 == 5) {
        DAT_0040eb54 = 3;
      }
      DAT_00492694 = 1;
      DAT_0040eb58 = DAT_0040eb58 + 1;
      DAT_004926ac = 0;
    }
    if (*(char *)(DAT_0040eb50 + *(int *)(DAT_0040f0e0 + 0x2014c) + 0x1bb) != '\0') {
      if (DAT_0040eb54 == 5) {
        DAT_0040eb54 = 4;
      }
      DAT_00492698 = 1;
      DAT_0040eb58 = DAT_0040eb58 + 1;
      DAT_004926b0 = 0;
    }
    DAT_0040eb4c = DAT_0040eb54;
  }
  return DAT_0040eb58;
}


// ==== fe_FE_DEMOMISSIONCOMPLETE_00217a08 @ 00217a08 ====

/* Strings referenciadas:
     "FE_DEMOMISSIONCOMPLETE"
     "FE_MISSIONFAILED" */

void fe_FE_DEMOMISSIONCOMPLETE_00217a08(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  DAT_0040eb48 = DAT_0040eb54;
  lVar2 = FUN_001227c0(DAT_0040f4e8);
  if (lVar2 == 1) {
    uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fb768);
    FUN_0020de28(0x492678,uVar3);
  }
  else {
    uVar3 = FUN_001087c8(DAT_0040f4c4,0x3fb750);
    FUN_0020de28(0x492678,uVar3);
  }
  switch(DAT_0040eb48) {
  case 0:
    fe_FE_EASY_00217c78(param_1);
    break;
  case 1:
    fe_FE_MISSIONOBJECTIVESACHIEVED_00217bc0(param_1);
    break;
  case 2:
    fe_FE_BLACKMODECOMPLETE_00217e10(param_1);
    break;
  case 3:
    fe_FE_LEVELUNLOCKEDFORMAT_00217ec8(param_1);
    break;
  case 4:
    fe_FE_BLACKMODECOMPLETE_002180a0(param_1);
    break;
  default:
    goto switchD_00217ac4_default;
  }
  piVar4 = &DAT_00492688 + DAT_0040eb54;
  iVar1 = (&DAT_004926a0)[DAT_0040eb54] + 1;
  (&DAT_004926a0)[DAT_0040eb54] = iVar1;
  DAT_0040eb4c = DAT_0040eb54;
  if (*piVar4 <= iVar1) {
    do {
      DAT_0040eb54 = DAT_0040eb54 + 1;
      if (4 < DAT_0040eb54) {
        DAT_0040eb4c = 5;
        return;
      }
      DAT_0040eb4c = DAT_0040eb54;
    } while ((int)(&DAT_00492688)[DAT_0040eb54] <= (int)(&DAT_004926a0)[DAT_0040eb54]);
  }
switchD_00217ac4_default:
  return;
}


// ==== fe_FE_MISSIONOBJECTIVESACHIEVED_00217bc0 @ 00217bc0 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_MISSIONOBJECTIVESACHIEVED"
     "FE_DIFFBLACK" */

void fe_FE_MISSIONOBJECTIVESACHIEVED_00217bc0(void)

{
  undefined8 uVar1;
  undefined1 auStack_130 [256];
  
  FUN_0035d728(auStack_130,0x3fae50,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar1 = FUN_001087c8(DAT_0040f4c4,auStack_130);
  FUN_0020de28(0x492648,uVar1);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc3a8);
  FUN_0020de28(0x492658,uVar1);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc3c8);
  FUN_0020de28(0x492668,uVar1);
  return;
}


// ==== fe_FE_EASY_00217c78 @ 00217c78 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_EASY"
     "FE_NORMAL"
     "FE_DIFFCOMPLETED"
     "FE_SILVERWEAPONMODETWO"
     "FE_SILVERWEAPONMODEONE" */

void fe_FE_EASY_00217c78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_180 [256];
  
  FUN_0035d728(auStack_180,0x3fae50,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar1 = FUN_001087c8(DAT_0040f4c4,auStack_180);
  FUN_0020de28(0x492648,uVar1);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc3d8);
  uVar2 = FUN_001087c8(DAT_0040f4c4,(&PTR_s_FE_EASY_003be8c8)[*(int *)(DAT_0040f0e0 + 0x2014c)]);
  FUN_0020dec8(0x492658,uVar1,uVar2);
  if (*(int *)(DAT_0040f0e0 + 0x2014c) == 1) {
    uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc3f0);
    uVar2 = FUN_001087c8(DAT_0040f4c4,PTR_s_FE_NORMAL_003be8cc);
    uVar3 = FUN_001087c8(DAT_0040f4c4,PTR_s_FE_EASY_003be8c8);
    FUN_0020dec8(0x492668,uVar1,uVar2,uVar3);
  }
  else {
    uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc408);
    uVar2 = FUN_001087c8(DAT_0040f4c4,(&PTR_s_FE_EASY_003be8c8)[*(int *)(DAT_0040f0e0 + 0x2014c)]);
    FUN_0020dec8(0x492668,uVar1,uVar2);
  }
  return;
}


// ==== fe_FE_BLACKMODECOMPLETE_00217e10 @ 00217e10 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_BLACKMODECOMPLETE"
     "FE_UNLOCK_M16A2" */

void fe_FE_BLACKMODECOMPLETE_00217e10(void)

{
  undefined8 uVar1;
  undefined1 auStack_130 [256];
  
  FUN_0035d728(auStack_130,0x3fae50,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar1 = FUN_001087c8(DAT_0040f4c4,auStack_130);
  FUN_0020de28(0x492648,uVar1);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc420);
  FUN_0020de28(0x492658,uVar1);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc438);
  FUN_0020de28(0x492668,uVar1);
  return;
}


// ==== fe_FE_LEVELUNLOCKEDFORMAT_00217ec8 @ 00217ec8 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_LEVELUNLOCKEDFORMAT" */

void fe_FE_LEVELUNLOCKEDFORMAT_00217ec8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_1a0 [256];
  
  iVar5 = 0;
  iVar6 = -1;
  uVar2 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar3 = FUN_001228e0(DAT_0040f4e8,uVar2);
  FUN_0035d728(auStack_1a0,0x3fae50,uVar3);
  uVar3 = FUN_001087c8(DAT_0040f4c4,auStack_1a0);
  FUN_0020de28(0x492648,uVar3);
  uVar3 = FUN_001087c8(DAT_0040f4c4,(&PTR_s_FE_EASY_003be8c8)[*(int *)(DAT_0040f0e0 + 0x2014c)]);
  FUN_0020de28(0x492658,uVar3);
  do {
    iVar1 = FUN_00123c90(0x48efa8,(int)uVar2 + 1,iVar5);
    if (*(char *)(iVar1 + 0x1a) != '\0') {
      iVar6 = iVar5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  uVar2 = FUN_001228e0(DAT_0040f4e8,((int)uVar2 + 1) * 0x1000000 >> 0x18);
  FUN_0035d728(auStack_1a0,0x3fae50,uVar2);
  uVar2 = FUN_001087c8(DAT_0040f4c4,0x3fc448);
  uVar3 = FUN_001087c8(DAT_0040f4c4,auStack_1a0);
  uVar4 = FUN_001087c8(DAT_0040f4c4,(&PTR_s_FE_EASY_003be8c8)[iVar6]);
  FUN_0020dec8(0x492668,uVar2,uVar3,uVar4);
  return;
}


// ==== fe_FE_BLACKMODECOMPLETE_002180a0 @ 002180a0 ====

/* Strings referenciadas:
     "FE_LEVELNAME%d"
     "FE_BLACKMODECOMPLETE"
     "FE_UNLOCK_M16A2" */

void fe_FE_BLACKMODECOMPLETE_002180a0(void)

{
  undefined8 uVar1;
  undefined1 auStack_130 [256];
  
  FUN_0035d728(auStack_130,0x3fae50,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar1 = FUN_001087c8(DAT_0040f4c4,auStack_130);
  FUN_0020de28(0x492648,uVar1);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc420);
  FUN_0020de28(0x492658,uVar1);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3fc438);
  FUN_0020de28(0x492668,uVar1);
  return;
}


// ==== FUN_00218158 @ 00218158 ====

void FUN_00218158(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined4 uStack_84;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_0043d9e0 = 0x3fc90fdb;
    DAT_0043d9e4 = 0xbe22f983;
    DAT_0043d9e8 = 0x4b400000;
    DAT_0043d9ec = uStack_84;
    DAT_0043d9f0 = 0xbe22f983;
    DAT_0043d9f4 = 0x3f000000;
    DAT_0043d9f8 = 0x3e800000;
    DAT_0043d9fc = uStack_84;
    DAT_0043da00 = 0xc2992661;
    DAT_0043da04 = 0xc2255de0;
    DAT_0043da08 = 0x42a33457;
    DAT_0043da0c = uStack_84;
    DAT_0043da10 = 0x421ed7b7;
    DAT_0043da14 = 0x40c90fda;
    DAT_0043da18 = 0;
    DAT_0043da1c = uStack_84;
    DAT_0043da30 = 0x3b808081;
    DAT_0043da34 = 0x3b808081;
    DAT_0043da38 = 0x3b808081;
    DAT_0043da3c = 0x3b808081;
    DAT_0043da20 = 0x3f800000;
    DAT_0043da24 = 0x3faaaaab;
    auVar1 = _pextlw(0x3e99999a,0x3e99999a);
    auVar1 = _pextlw(0x3e99999a,auVar1._0_8_);
    DAT_0043da40 = auVar1._0_4_;
    DAT_0043da44 = auVar1._4_4_;
    DAT_0043da48 = auVar1._8_4_;
    DAT_0043da4c = auVar1._12_4_;
    DAT_0043da50 = 0x40000000;
    DAT_0043da54 = 0x40c00000;
    DAT_0043da58 = PTR_DAT_003be8bc;
    DAT_0043da5c = PTR_DAT_003be8c0;
    DAT_0043da60 = PTR_DAT_003be8c4;
  }
  return;
}


// ==== FUN_00218350 @ 00218350 ====

void FUN_00218350(void)

{
  FUN_00218158(1,0xffff);
  return;
}


// ==== FUN_00218370 @ 00218370 ====

void FUN_00218370(void)

{
  (*DAT_0043da74)();
  return;
}


// ==== FUN_00218398 @ 00218398 ====

void FUN_00218398(void)

{
  return;
}


// ==== FUN_002183a8 @ 002183a8 ====

undefined8 FUN_002183a8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x22] = 0;
  return param_1;
}


// ==== FUN_00218458 @ 00218458 ====

void FUN_00218458(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_87;
  
  uStack_a4 = 0x40;
  puVar5 = (undefined8 *)&uStack_c0;
  if (param_1 != (undefined8 *)0x0) {
    puVar5 = param_1;
  }
  uStack_b8 = 0x40;
  uStack_b0 = 0x40;
  uStack_bc = 0x200;
  uStack_a0 = 0x180;
  uStack_9c = 0x20;
  uStack_98 = 0x100;
  uStack_94 = 0x400;
  uStack_90 = 0x80;
  uStack_8c = 8;
  uStack_c0 = 0x200;
  uStack_b4 = 0x100;
  uStack_ac = 0x100;
  uStack_a8 = 0x180;
  uStack_88 = 0;
  uStack_87 = 0;
  DAT_0043db28 = *puVar5;
  DAT_0043db30 = puVar5[1];
  DAT_0043db38 = puVar5[2];
  DAT_0043db40 = puVar5[3];
  DAT_0043db48 = puVar5[4];
  DAT_0043db50 = puVar5[5];
  DAT_0043db58 = puVar5[6];
  DAT_0043db60 = *(undefined4 *)(puVar5 + 7);
  if (DAT_0043db20 == (undefined2 *)0x0) {
    DAT_0043db20 = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  DAT_0040de12 = 0;
  DAT_0040de13 = *(undefined1 *)((int)puVar5 + 0x39);
  if (DAT_0043da78 == (code *)0x0) {
    DAT_0043da78 = FUN_00218370;
  }
  FUN_00218870();
  DAT_003bfb04 = &DAT_0043da70;
  FUN_00254120(*(undefined4 *)((int)puVar5 + 0x2c));
  uVar3 = FUN_00250058(DAT_0043dee0,0xc);
  DAT_003be8e0 = FUN_00252ac8(uVar3,*(undefined4 *)(puVar5 + 5));
  if (*(int *)((int)puVar5 + 0x34) == 0) {
    DAT_003be8e4 = 0;
  }
  else {
    uVar3 = FUN_00250058(DAT_0043dee0,0xc);
    DAT_003be8e4 = FUN_00252ac8(uVar3,*(undefined4 *)((int)puVar5 + 0x34));
  }
  FUN_0024e078();
  FUN_0021b0e0(0x43db68,puVar5);
  DAT_0043df7c = (undefined4 *)FUN_00250058(DAT_0043dee0,4);
  *DAT_0043df7c = 0;
  DAT_0043df80 = (undefined4 *)FUN_00250058(DAT_0043dee0,0x18);
  *DAT_0043df80 = 0;
  DAT_0043df80[1] = 0;
  puVar1 = DAT_0043df80 + 4;
  DAT_0043df80[2] = 0;
  DAT_0043df80[3] = puVar1;
  iVar4 = 1;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar4 != -1);
  iVar4 = 1;
  puVar2 = (undefined4 *)FUN_00250058(DAT_0043dee0,0x1c);
  puVar1 = puVar2 + 3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar1;
  do {
    iVar4 = iVar4 + -1;
    FUN_003872c0(puVar1);
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (iVar4 != -1);
  DAT_0043df84 = puVar2;
  uVar3 = FUN_00250058(DAT_0043dee0,0x90);
  DAT_0043df68 = FUN_002315b0(uVar3,puVar5);
  FUN_00218398();
  FUN_002455e8(0x20);
  DAT_0043df88 = 1;
  return;
}


// ==== FUN_00218768 @ 00218768 ====

void FUN_00218768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_0024fde0();
  uVar1 = FUN_0024fe68(0x20);
  DAT_0043dee0 = FUN_0024fea8(uVar1,param_3,param_4,4,0x100,0,0,0);
  uVar1 = (*DAT_0043da70)(0x20);
  FUN_0024fea8(uVar1,param_1,param_2,DAT_0040eb61,DAT_0040eb5c,DAT_0040eb62,1,DAT_0040eb63);
  DAT_0043dee4 = (int)uVar1;
  return;
}


// ==== FUN_00218870 @ 00218870 ====

void FUN_00218870(void)

{
  FUN_00241c40();
  return;
}


// ==== FUN_00218898 @ 00218898 ====

void FUN_00218898(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int aiStack_60 [4];
  
  aiStack_60[0] = *param_1;
  if (aiStack_60[0] != 0) {
    FUN_00244cd8();
  }
  FUN_00243060(DAT_0043df7c,aiStack_60,param_2,param_3,param_4);
  if ((*param_1 != 0) && (lVar1 = FUN_00244ce8(), lVar1 == 0)) {
    FUN_00244cf8(*param_1);
  }
  return;
}


// ==== FUN_00218930 @ 00218930 ====

uint * FUN_00218930(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if ((DAT_0043df68 == 0) || (*(int **)(DAT_0043df68 + 0x18) == (int *)0x0)) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)**(int **)(DAT_0043df68 + 0x18);
    if (puVar2 == (uint *)0x0) {
LAB_00218998:
      puVar2 = (uint *)FUN_0024fa38(DAT_0043dee4,0x60);
      FUN_00386f98(puVar2,0x13,0);
      puVar2[1] = (uint)&DAT_003e2340;
      FUN_003872c0(puVar2 + 2);
      puVar2[0x12] = 0;
      puVar2[0x16] = puVar2[0x16] & 0xfff0ffff;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      *(undefined2 *)(puVar2 + 0x16) = 0;
      puVar2[0xc] = 0x3f800000;
      puVar2[3] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[9] = 0x3f800000;
      puVar2[10] = 0x3f800000;
      puVar2[0xb] = 0x3f800000;
      FUN_00387140(puVar2,1);
      puVar2[0x16] = puVar2[0x16] & 0xffdfffff | 0x100000;
      puVar2[0x15] = puVar2[0x15] | 0x7ffe0000;
      *puVar2 = *puVar2 & 0xff03ffdf | 0x40000;
      puVar2[0x17] = 0;
      FUN_0023ef98(*(undefined4 *)(DAT_0043df68 + 0x18),param_1,puVar2);
    }
    else {
      uVar1 = puVar2[0x15];
      while ((int)(uVar1 << 0xf) >> 0xf != param_1) {
        puVar2 = (uint *)puVar2[0x14];
        if (puVar2 == (uint *)0x0) goto LAB_00218998;
        uVar1 = puVar2[0x15];
      }
    }
  }
  return puVar2;
}


// ==== FUN_00218ae0 @ 00218ae0 ====

void FUN_00218ae0(undefined8 param_1)

{
  short sVar1;
  short *apsStack_60 [4];
  short *apsStack_50 [4];
  short *apsStack_40 [4];
  
  FUN_00253ff0(apsStack_60);
  DAT_0040e594._2_1_ = 0;
  apsStack_50[0] = apsStack_60[0];
  *apsStack_60[0] = *apsStack_60[0] + 1;
  FUN_00253ff0(apsStack_40,param_1);
  FUN_00244108(DAT_0043df80,apsStack_40,apsStack_50);
  sVar1 = *apsStack_40[0];
  *apsStack_40[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
  }
  sVar1 = *apsStack_60[0];
  *apsStack_60[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  return;
}


// ==== FUN_00218ba8 @ 00218ba8 ====

undefined8 FUN_00218ba8(undefined8 param_1)

{
  short sVar1;
  short *apsStack_40 [4];
  
  FUN_00253ff0(apsStack_40);
  FUN_00242bf0(param_1,DAT_0043df7c,apsStack_40);
  sVar1 = *apsStack_40[0];
  *apsStack_40[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
  }
  return param_1;
}


// ==== FUN_00218c30 @ 00218c30 ====

void FUN_00218c30(void)

{
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (DAT_003be8dc != 0) {
    FUN_0035d728(auStack_50,0x3fce50,DAT_0043df64);
    (*DAT_0043da8c)(auStack_50);
    uStack_40 = DAT_0043df64;
    uStack_3c = 3;
    (*DAT_0043da88)(&uStack_40,5);
  }
  return;
}


// ==== FUN_00218cb0 @ 00218cb0 ====

undefined4 FUN_00218cb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  undefined4 uStack_b0;
  
  uStack_b0 = 0;
  uVar1 = *(undefined4 *)(**(int **)(DAT_0043df68 + 0x18) + 0x50);
  lVar5 = FUN_00387080(uVar1);
  bVar4 = false;
  if (lVar5 == 0x12) {
    lVar5 = FUN_003871c0(uVar1);
    bVar4 = lVar5 == 0;
  }
  if (bVar4) {
    iVar2 = *(int *)(*(int *)(**(int **)(DAT_0043df68 + 0x18) + 0x50) + 0x48);
    uVar3 = *(uint *)(*(int *)(iVar2 + 8) + 0x24);
    uVar6 = param_1 + *(int *)(iVar2 + 0x30);
    if (uVar3 <= uVar6) {
      uStack_b0 = 1;
      do {
        uVar6 = uVar6 - uVar3;
        FUN_002317b8(DAT_0043df68,uVar3);
        FUN_00241048(DAT_0043df68 + 0x18);
        FUN_00231c50(DAT_0043df68);
        FUN_00242800(DAT_0043df68);
        FUN_00243140(DAT_0043df80);
        DAT_0043df64 = DAT_0043df64 + uVar3;
        uVar1 = *(undefined4 *)(**(int **)(DAT_0043df68 + 0x18) + 0x50);
        lVar5 = FUN_00387080(uVar1);
        bVar4 = false;
        if (lVar5 == 0x12) {
          lVar5 = FUN_003871c0(uVar1);
          bVar4 = lVar5 == 0;
        }
        if (!bVar4) {
          return 1;
        }
      } while ((DAT_003be8dc == 0) && (uVar3 <= uVar6));
    }
    uVar1 = *(undefined4 *)(**(int **)(DAT_0043df68 + 0x18) + 0x50);
    lVar5 = FUN_00387080(uVar1);
    bVar4 = false;
    if (lVar5 == 0x12) {
      lVar5 = FUN_003871c0(uVar1);
      bVar4 = lVar5 == 0;
    }
    if (bVar4) {
      *(uint *)(*(int *)(*(int *)(**(int **)(DAT_0043df68 + 0x18) + 0x50) + 0x48) + 0x30) = uVar6;
    }
  }
  else {
    uStack_b0 = 0;
  }
  return uStack_b0;
}


// ==== FUN_00218ea8 @ 00218ea8 ====

void FUN_00218ea8(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  long lVar10;
  byte bVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  float fVar16;
  short *psStack_1d0;
  short *psStack_1cc;
  short *psStack_1c8;
  short *psStack_1c0;
  int iStack_1bc;
  short *psStack_1b8;
  int iStack_1b0;
  short *psStack_1ac;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_180;
  int iStack_17c;
  int aiStack_178 [4];
  int iStack_168;
  int iStack_160;
  int iStack_15c;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  undefined8 uStack_140;
  int iStack_138;
  undefined8 uStack_130;
  int iStack_128;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_110;
  int iStack_10c;
  ulong uStack_100;
  int iStack_f8;
  ulong uStack_f0;
  int iStack_e8;
  ulong uStack_e0;
  int iStack_d8;
  int *piStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  uint uStack_c0;
  int **ppiStack_bc;
  int **ppiStack_b8;
  int iStack_b4;
  int **ppiStack_b0;
  int **ppiStack_ac;
  int iStack_a8;
  
  uStack_c0 = DAT_0043df60 + 1;
  if ((DAT_0043df50 == 0) || (DAT_0043df60 == uStack_c0)) {
    return;
  }
  do {
    psStack_1cc = (short *)DAT_0043df84[2];
    psStack_1c8 = psStack_1cc + *DAT_0043df84 * 4;
    iStack_1b0 = DAT_0043df84[2];
    psStack_1ac = (short *)(*DAT_0043df84 * 8 + iStack_1b0);
    psStack_1d0 = psStack_1cc;
    if (psStack_1cc != psStack_1ac) {
      do {
        if ((*(int *)(psStack_1d0 + 2) != 4) && (bVar2 = false, *(int *)(psStack_1d0 + 2) != 2))
        goto LAB_00218fac;
        psStack_1d0 = psStack_1d0 + 4;
        iStack_1b0 = DAT_0043df84[2];
        psStack_1ac = (short *)(*DAT_0043df84 * 8 + iStack_1b0);
      } while (psStack_1d0 != psStack_1ac);
    }
    bVar2 = true;
LAB_00218fac:
    if (bVar2) {
      puVar6 = DAT_0043df54;
      psStack_1c0 = psStack_1ac;
      iStack_1bc = iStack_1b0;
      psStack_1b8 = psStack_1ac;
      while (DAT_0043df54 = puVar6, *DAT_0043df54 <= DAT_0043df60) {
        bVar11 = (byte)DAT_0043df54[1] & 3;
        if (bVar11 == 2) {
          iVar12 = (int)DAT_0043df54 + 5;
          DAT_0043df54 = (uint *)iVar12;
          iVar7 = FUN_0035ccd8(iVar12);
          DAT_0043df54 = (uint *)((int)DAT_0043df54 + iVar7 + 1);
          FUN_00253ff0(&psStack_1d0,iVar12);
          piVar4 = DAT_0043df84;
          iStack_1a0 = DAT_0043df84[2];
          iStack_198 = *DAT_0043df84 * 8 + iStack_1a0;
          iStack_180 = DAT_0043df84[2];
          iStack_17c = *DAT_0043df84 * 8 + iStack_180;
          iStack_19c = iStack_1a0;
          if (iStack_1a0 != iStack_17c) {
            do {
              iStack_190 = iStack_17c;
              iStack_18c = iStack_180;
              iStack_188 = iStack_17c;
              lVar10 = FUN_00387410(iStack_1a0,&psStack_1d0);
              if (lVar10 != 0) {
                if (*(int *)(iStack_1a0 + 4) == 2) {
                  *(undefined4 *)(iStack_1a0 + 4) = 3;
                }
                goto LAB_00219c58;
              }
              iStack_1a0 = iStack_1a0 + 8;
              iStack_180 = piVar4[2];
              iStack_17c = *piVar4 * 8 + iStack_180;
            } while (iStack_1a0 != iStack_17c);
          }
          iStack_190 = iStack_17c;
          iStack_18c = iStack_180;
          iStack_188 = iStack_17c;
          FUN_00242b48(&iStack_190,DAT_0043df7c,&psStack_1d0);
          bVar2 = iStack_190 == 0;
          if ((iStack_190 != 0) && (lVar10 = FUN_00244ce8(), lVar10 == 0)) {
            FUN_00244cf8(iStack_190);
          }
          if (bVar2) {
            FUN_00387308(&iStack_180,&psStack_1d0);
            ppiStack_ac = &piStack_c4;
            ppiStack_b0 = &piStack_c8;
            iStack_17c = 1;
            iVar7 = (int)aiStack_178 - (int)&iStack_180 >> 3;
            aiStack_178[3] = piVar4[2];
            aiStack_178[2] = *piVar4 * 8 + aiStack_178[3];
            iStack_168 = aiStack_178[2];
            iStack_160 = aiStack_178[3];
            iStack_15c = aiStack_178[2];
            piStack_c8 = &iStack_180;
            piStack_c4 = aiStack_178;
            if (iVar7 != 0) {
              iVar12 = *piVar4 + iVar7;
              iStack_148 = *piVar4 * 8;
              if (iVar12 < piVar4[1]) {
                iStack_14c = piVar4[2];
                iStack_150 = iStack_148 + iStack_14c;
                uStack_140 = CONCAT44(iStack_150,iStack_14c);
                iStack_148 = iStack_150;
                if (aiStack_178[2] == iStack_150) {
                  iVar7 = piVar4[2] + *piVar4 * 8;
                  for (piVar8 = &iStack_180; piVar8 != aiStack_178; piVar8 = piVar8 + 2) {
                    FUN_00387398(iVar7,piVar8);
                    *(int *)(iVar7 + 4) = piVar8[1];
                    iVar7 = iVar7 + 8;
                  }
                  FUN_003872c0(&uStack_140);
                  uStack_140 = uStack_140 & 0xffffffff;
                  iVar7 = iVar12 * 8 + piVar4[2];
                  FUN_00387398(iVar7,&uStack_140);
                  *(undefined4 *)(iVar7 + 4) = uStack_140._4_4_;
                  FUN_00387328(&uStack_140,2);
                  *piVar4 = iVar12;
                }
                else {
                  uStack_140 = CONCAT44(aiStack_178[3],aiStack_178[2]);
                  uStack_130._4_4_ = piVar4[2];
                  iStack_128 = *piVar4 * 8 + uStack_130._4_4_;
                  iVar14 = iStack_128 - aiStack_178[2] >> 3;
                  iStack_120 = piVar4[2];
                  iStack_118 = *piVar4 * 8 + iStack_120;
                  iStack_138 = aiStack_178[2];
                  iVar3 = iStack_128;
                  iStack_11c = iStack_120;
                  iStack_110 = iStack_120;
                  iStack_10c = iStack_118;
                  iVar7 = iVar7 * 8 + (aiStack_178[2] - iStack_120 >> 3) * 8 + piVar4[2] +
                          iVar14 * 8;
                  while (iVar14 = iVar14 + -1, iVar14 != -1) {
                    uStack_130._0_4_ = iVar3 + -8;
                    FUN_00387398(iVar7 + -8,(int)uStack_130);
                    *(undefined4 *)(iVar7 + -4) = *(undefined4 *)(iVar3 + -4);
                    iVar3 = (int)uStack_130;
                    iVar7 = iVar7 + -8;
                  }
                  piVar15 = *ppiStack_ac;
                  uStack_130 = CONCAT44(aiStack_178[3],aiStack_178[2]);
                  iStack_128 = iStack_168;
                  for (piVar8 = *ppiStack_b0; uVar5 = uStack_130, piVar8 != piVar15;
                      piVar8 = piVar8 + 2) {
                    uStack_e0 = uStack_130;
                    iStack_d8 = iStack_128;
                    iVar7 = (int)uStack_130;
                    uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130 + 8);
                    uStack_f0 = uVar5;
                    iStack_e8 = iStack_128;
                    FUN_00387398(iVar7,piVar8);
                    *(int *)(iVar7 + 4) = piVar8[1];
                  }
                  uStack_140 = uStack_130;
                  iStack_138 = iStack_128;
                  FUN_003872c0(&uStack_140);
                  uStack_140 = uStack_140 & 0xffffffff;
                  iVar7 = iVar12 * 8 + piVar4[2];
                  FUN_00387398(iVar7,&uStack_140);
                  *(undefined4 *)(iVar7 + 4) = uStack_140._4_4_;
                  FUN_00387328(&uStack_140,2);
                  *piVar4 = iVar12;
                }
              }
              else {
                fVar16 = (float)piVar4[1];
                iStack_150 = piVar4[2];
                iStack_148 = iStack_148 + iStack_150;
                iStack_a8 = aiStack_178[2] - iStack_150 >> 3;
                iVar7 = (int)(fVar16 + fVar16);
                uStack_140 = CONCAT44(iStack_148,iStack_150);
                if (iVar7 < iVar12) {
                  iVar7 = iVar12;
                }
                if (piVar4[1] < iVar7) {
                  if (iVar7 < 2) {
                    piVar4[1] = iVar7;
                  }
                  else {
                    iStack_14c = iStack_150;
                    piVar8 = (int *)FUN_00107d20((iVar7 + 1) * 8 + 0x10);
                    piVar15 = piVar8 + 4;
                    *piVar8 = iVar7 + 1;
                    piVar8 = piVar15;
                    for (iVar12 = iVar7; iVar12 != -1; iVar12 = iVar12 + -1) {
                      FUN_003872c0(piVar8);
                      piVar8[1] = 0;
                      piVar8 = piVar8 + 2;
                    }
                    iStack_150 = piVar4[2];
                    iStack_148 = *piVar4 * 8 + iStack_150;
                    iVar12 = piVar4[2];
                    iStack_138 = *piVar4 * 8 + iVar12;
                    uStack_130 = CONCAT44(iStack_138,iVar12);
                    uStack_140 = CONCAT44(iVar12,iStack_138);
                    piVar8 = piVar15;
                    iStack_14c = iStack_150;
                    if (iStack_150 != iStack_138) {
                      do {
                        iVar12 = iStack_150;
                        uStack_100 = CONCAT44(iStack_14c,iStack_150);
                        iStack_e8 = iStack_148;
                        iStack_150 = iStack_150 + 8;
                        iStack_f8 = iStack_148;
                        uStack_f0 = uStack_100;
                        FUN_00387398(piVar8,iVar12);
                        piVar8[1] = *(int *)(iVar12 + 4);
                        piVar8 = piVar8 + 2;
                      } while (iStack_150 != (int)uStack_140);
                    }
                    piVar8 = (int *)piVar4[2];
                    piVar4[1] = iVar7;
                    if (piVar8 != piVar4 + 3) {
                      if (piVar8 == (int *)0x0) {
                        puVar9 = (undefined4 *)FUN_00107d20(0x10);
                        *puVar9 = 0;
                      }
                      else {
                        piVar13 = piVar8 + piVar8[-4] * 2;
                        while (piVar8 != piVar13) {
                          piVar13 = piVar13 + -2;
                          FUN_00387328(piVar13,2);
                        }
                        FUN_00107d50(piVar8 + -4);
                      }
                    }
                    piVar4[2] = (int)piVar15;
                    iVar7 = *piVar4;
                    FUN_003872c0(&iStack_150);
                    iStack_14c = 0;
                    iVar7 = iVar7 * 8 + piVar4[2];
                    FUN_00387398(iVar7,&iStack_150);
                    *(int *)(iVar7 + 4) = iStack_14c;
                    FUN_00387328(&iStack_150,2);
                  }
                }
                iStack_14c = piVar4[2];
                iStack_150 = iStack_a8 * 8 + iStack_14c;
                iStack_148 = *piVar4 * 8 + iStack_14c;
                uStack_130 = CONCAT44(iStack_148,iStack_14c);
                uStack_140 = CONCAT44(iStack_14c,iStack_14c);
                iStack_138 = iStack_148;
                FUN_00386998(piVar4,ppiStack_b0,ppiStack_ac,&iStack_150);
              }
            }
            FUN_00387328(&iStack_180,2);
          }
          else {
            FUN_00387308(&iStack_180,&psStack_1d0);
            ppiStack_bc = &piStack_d0;
            ppiStack_b8 = &piStack_cc;
            iStack_17c = 3;
            iVar7 = (int)aiStack_178 - (int)&iStack_180 >> 3;
            aiStack_178[3] = piVar4[2];
            aiStack_178[2] = *piVar4 * 8 + aiStack_178[3];
            iStack_168 = aiStack_178[2];
            iStack_160 = aiStack_178[3];
            iStack_15c = aiStack_178[2];
            piStack_d0 = &iStack_180;
            piStack_cc = aiStack_178;
            if (iVar7 != 0) {
              iVar12 = *piVar4 + iVar7;
              iStack_148 = *piVar4 * 8;
              if (iVar12 < piVar4[1]) {
                iStack_14c = piVar4[2];
                iStack_150 = iStack_148 + iStack_14c;
                uStack_140 = CONCAT44(iStack_150,iStack_14c);
                iStack_148 = iStack_150;
                if (aiStack_178[2] == iStack_150) {
                  iVar7 = piVar4[2] + *piVar4 * 8;
                  for (piVar8 = &iStack_180; piVar8 != aiStack_178; piVar8 = piVar8 + 2) {
                    FUN_00387398(iVar7,piVar8);
                    *(int *)(iVar7 + 4) = piVar8[1];
                    iVar7 = iVar7 + 8;
                  }
                  FUN_003872c0(&uStack_140);
                  uStack_140 = uStack_140 & 0xffffffff;
                  iVar7 = iVar12 * 8 + piVar4[2];
                  FUN_00387398(iVar7,&uStack_140);
                  *(undefined4 *)(iVar7 + 4) = uStack_140._4_4_;
                  FUN_00387328(&uStack_140,2);
                  *piVar4 = iVar12;
                }
                else {
                  uStack_140 = CONCAT44(aiStack_178[3],aiStack_178[2]);
                  uStack_130._4_4_ = piVar4[2];
                  iStack_128 = *piVar4 * 8 + uStack_130._4_4_;
                  iVar14 = iStack_128 - aiStack_178[2] >> 3;
                  iStack_120 = piVar4[2];
                  iStack_118 = *piVar4 * 8 + iStack_120;
                  iStack_138 = aiStack_178[2];
                  iVar3 = iStack_128;
                  iStack_11c = iStack_120;
                  iStack_110 = iStack_120;
                  iStack_10c = iStack_118;
                  iVar7 = iVar7 * 8 + (aiStack_178[2] - iStack_120 >> 3) * 8 + piVar4[2] +
                          iVar14 * 8;
                  while (iVar14 = iVar14 + -1, iVar14 != -1) {
                    uStack_130._0_4_ = iVar3 + -8;
                    FUN_00387398(iVar7 + -8,(int)uStack_130);
                    *(undefined4 *)(iVar7 + -4) = *(undefined4 *)(iVar3 + -4);
                    iVar3 = (int)uStack_130;
                    iVar7 = iVar7 + -8;
                  }
                  piVar15 = *ppiStack_b8;
                  uStack_130 = CONCAT44(aiStack_178[3],aiStack_178[2]);
                  iStack_128 = iStack_168;
                  for (piVar8 = *ppiStack_bc; uVar5 = uStack_130, piVar8 != piVar15;
                      piVar8 = piVar8 + 2) {
                    uStack_e0 = uStack_130;
                    iStack_d8 = iStack_128;
                    iVar7 = (int)uStack_130;
                    uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130 + 8);
                    uStack_f0 = uVar5;
                    iStack_e8 = iStack_128;
                    FUN_00387398(iVar7,piVar8);
                    *(int *)(iVar7 + 4) = piVar8[1];
                  }
                  uStack_140 = uStack_130;
                  iStack_138 = iStack_128;
                  FUN_003872c0(&uStack_140);
                  uStack_140 = uStack_140 & 0xffffffff;
                  iVar7 = iVar12 * 8 + piVar4[2];
                  FUN_00387398(iVar7,&uStack_140);
                  *(undefined4 *)(iVar7 + 4) = uStack_140._4_4_;
                  FUN_00387328(&uStack_140,2);
                  *piVar4 = iVar12;
                }
              }
              else {
                fVar16 = (float)piVar4[1];
                iStack_150 = piVar4[2];
                iStack_148 = iStack_148 + iStack_150;
                iStack_b4 = aiStack_178[2] - iStack_150 >> 3;
                uStack_140 = CONCAT44(iStack_148,iStack_150);
                iVar7 = (int)(fVar16 + fVar16);
                if (iVar7 < iVar12) {
                  iVar7 = iVar12;
                }
                if (piVar4[1] < iVar7) {
                  if (iVar7 < 2) {
                    piVar4[1] = iVar7;
                  }
                  else {
                    iStack_14c = iStack_150;
                    piVar8 = (int *)FUN_00107d20((iVar7 + 1) * 8 + 0x10);
                    piVar15 = piVar8 + 4;
                    *piVar8 = iVar7 + 1;
                    piVar8 = piVar15;
                    for (iVar12 = iVar7; iVar12 != -1; iVar12 = iVar12 + -1) {
                      FUN_003872c0(piVar8);
                      piVar8[1] = 0;
                      piVar8 = piVar8 + 2;
                    }
                    iStack_150 = piVar4[2];
                    iStack_148 = *piVar4 * 8 + iStack_150;
                    iVar12 = piVar4[2];
                    iStack_138 = *piVar4 * 8 + iVar12;
                    uStack_130 = CONCAT44(iStack_138,iVar12);
                    uStack_140 = CONCAT44(iVar12,iStack_138);
                    piVar8 = piVar15;
                    iStack_14c = iStack_150;
                    if (iStack_150 != iStack_138) {
                      do {
                        iVar12 = iStack_150;
                        uStack_100 = CONCAT44(iStack_14c,iStack_150);
                        iStack_e8 = iStack_148;
                        iStack_150 = iStack_150 + 8;
                        iStack_f8 = iStack_148;
                        uStack_f0 = uStack_100;
                        FUN_00387398(piVar8,iVar12);
                        piVar8[1] = *(int *)(iVar12 + 4);
                        piVar8 = piVar8 + 2;
                      } while (iStack_150 != (int)uStack_140);
                    }
                    piVar8 = (int *)piVar4[2];
                    piVar4[1] = iVar7;
                    if (piVar8 != piVar4 + 3) {
                      if (piVar8 == (int *)0x0) {
                        puVar9 = (undefined4 *)FUN_00107d20(0x10);
                        *puVar9 = 0;
                      }
                      else {
                        piVar13 = piVar8 + piVar8[-4] * 2;
                        while (piVar8 != piVar13) {
                          piVar13 = piVar13 + -2;
                          FUN_00387328(piVar13,2);
                        }
                        FUN_00107d50(piVar8 + -4);
                      }
                    }
                    piVar4[2] = (int)piVar15;
                    iVar7 = *piVar4;
                    FUN_003872c0(&iStack_150);
                    iStack_14c = 0;
                    iVar7 = iVar7 * 8 + piVar4[2];
                    FUN_00387398(iVar7,&iStack_150);
                    *(int *)(iVar7 + 4) = iStack_14c;
                    FUN_00387328(&iStack_150,2);
                  }
                }
                iStack_14c = piVar4[2];
                iStack_150 = iStack_b4 * 8 + iStack_14c;
                iStack_148 = *piVar4 * 8 + iStack_14c;
                uStack_130 = CONCAT44(iStack_148,iStack_14c);
                uStack_140 = CONCAT44(iStack_14c,iStack_14c);
                iStack_138 = iStack_148;
                FUN_00386998(piVar4,ppiStack_bc,ppiStack_b8,&iStack_150);
              }
            }
            FUN_00387328(&iStack_180,2);
          }
LAB_00219c58:
          sVar1 = *psStack_1d0;
          *psStack_1d0 = sVar1 + -1;
          puVar6 = DAT_0043df54;
          if ((short)(sVar1 + -1) == 0) {
            FUN_00250198(DAT_0043dee0,psStack_1d0,(ushort)psStack_1d0[2] + 9);
            puVar6 = DAT_0043df54;
          }
        }
        else if (bVar11 < 3) {
          puVar6 = DAT_0043df54 + 1;
          DAT_0043df54 = DAT_0043df54 + 2;
          FUN_00231f28(DAT_0043df68,*puVar6);
          puVar6 = DAT_0043df54;
        }
        else {
          puVar6 = DAT_0043df54 + 1;
          if ((bVar11 == 3) &&
             (DAT_0043df54 = (uint *)((int)DAT_0043df54 + 5), puVar6 = DAT_0043df54,
             DAT_003be8dc == 0)) {
            FUN_0035d728(&psStack_1d0,0x3fce50,DAT_0043df60);
            (*DAT_0043da8c)(&psStack_1d0);
            puVar6 = DAT_0043df54;
          }
        }
      }
    }
    if (DAT_0043df58 <= (int)DAT_0043df54 - DAT_0043df50) {
      if (DAT_003be8dc == 0) {
        DAT_0043df50 = 0;
        DAT_0043df54 = (uint *)0x0;
        return;
      }
      DAT_003be8dc = 0;
      DAT_0043df50 = 0;
      DAT_0043df54 = (uint *)0x0;
      return;
    }
    psStack_1cc = (short *)DAT_0043df84[2];
    psStack_1c8 = psStack_1cc + *DAT_0043df84 * 4;
    iStack_1b0 = DAT_0043df84[2];
    psStack_1ac = (short *)(*DAT_0043df84 * 8 + iStack_1b0);
    psStack_1d0 = psStack_1cc;
    if (psStack_1cc != psStack_1ac) {
      do {
        if ((*(int *)(psStack_1d0 + 2) != 4) && (*(int *)(psStack_1d0 + 2) != 2)) {
          bVar2 = false;
          goto LAB_00219e0c;
        }
        psStack_1d0 = psStack_1d0 + 4;
        iStack_1b0 = DAT_0043df84[2];
        psStack_1ac = (short *)(*DAT_0043df84 * 8 + iStack_1b0);
      } while (psStack_1d0 != psStack_1ac);
    }
    bVar2 = true;
LAB_00219e0c:
    psStack_1c0 = psStack_1ac;
    iStack_1bc = iStack_1b0;
    psStack_1b8 = psStack_1ac;
    if ((!bVar2) || (iVar7 = *(int *)(**(int **)(DAT_0043df68 + 0x18) + 0x50), iVar7 == 0)) {
LAB_00219e94:
      FUN_00243140(DAT_0043df80);
      return;
    }
    lVar10 = FUN_00387080(iVar7);
    bVar2 = false;
    if (lVar10 == 0x12) {
      lVar10 = FUN_003871c0(iVar7);
      bVar2 = lVar10 == 0;
    }
    if (!bVar2) goto LAB_00219e94;
    lVar10 = FUN_00218cb0(1);
    if (lVar10 != 0) {
      FUN_00218c30();
    }
    DAT_0043df60 = DAT_0043df60 + 1;
    if (DAT_0043df50 == 0) {
      return;
    }
    if (DAT_0043df60 == uStack_c0) {
      return;
    }
  } while( true );
}


// ==== FUN_00219ef8 @ 00219ef8 ====

void FUN_00219ef8(undefined8 param_1)

{
  bool bVar1;
  int **ppiVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int *apiStack_210 [95];
  int iStack_94;
  int *apiStack_90 [4];
  int *apiStack_80 [4];
  
  ppiVar2 = apiStack_210;
  iVar4 = 0x5f;
  do {
    *ppiVar2 = (int *)0x0;
    iVar4 = iVar4 + -1;
    ppiVar2 = ppiVar2 + 1;
  } while (iVar4 != -1);
  apiStack_90[0] = (int *)*DAT_0043df7c;
  if ((int *)*DAT_0043df7c != (int *)0x0) {
    iVar4 = 0;
    do {
      apiStack_80[0] = (int *)*apiStack_90[0];
      if ((int *)*apiStack_90[0] != (int *)0x0) {
        FUN_00244cd8();
      }
      ppiVar2 = apiStack_210 + iVar4;
      if (apiStack_80 != ppiVar2) {
        if ((*ppiVar2 != (int *)0x0) && (lVar3 = FUN_00244ce8(), lVar3 == 0)) {
          FUN_00244cf8(*ppiVar2);
        }
        bVar1 = apiStack_80[0] != (int *)0x0;
        *ppiVar2 = apiStack_80[0];
        if (bVar1) {
          FUN_00244cd8();
        }
      }
      if ((apiStack_80[0] != (int *)0x0) && (lVar3 = FUN_00244ce8(), lVar3 == 0)) {
        FUN_00244cf8(apiStack_80[0]);
      }
      piVar5 = apiStack_90[0] + 1;
      apiStack_90[0] = (int *)*piVar5;
      iVar4 = iVar4 + 1;
    } while ((int *)*piVar5 != (int *)0x0);
  }
  apiStack_80[0] = (int *)0x0;
  if (DAT_0043df50 == 0) {
    iVar4 = *(int *)(**(int **)(DAT_0043df68 + 0x18) + 0x50);
    if (iVar4 != 0) {
      lVar3 = FUN_00387080(iVar4);
      bVar1 = false;
      if (lVar3 == 0x12) {
        lVar3 = FUN_003871c0(iVar4);
        bVar1 = lVar3 == 0;
      }
      if (bVar1) {
        lVar3 = FUN_00218cb0(param_1);
        if (lVar3 != 0) {
          FUN_00218c30();
        }
        goto LAB_0021a0b4;
      }
    }
    FUN_00243140(DAT_0043df80);
    *(undefined4 *)(DAT_0043df68 + 0x24) = 0;
  }
  else {
    FUN_00218ea8(param_1);
  }
LAB_0021a0b4:
  FUN_00252b10(DAT_003be8e0);
  if (cGpffff8621 != '\0') {
    FUN_00241c88();
    cGpffff8621 = '\0';
  }
  if (apiStack_210 != apiStack_90) {
    piVar5 = &iStack_94;
    do {
      if ((*piVar5 != 0) && (lVar3 = FUN_00244ce8(), lVar3 == 0)) {
        FUN_00244cf8(*piVar5);
      }
      bVar1 = apiStack_210 != (int **)piVar5;
      piVar5 = piVar5 + -1;
    } while (bVar1);
  }
  return;
}


// ==== FUN_0021a130 @ 0021a130 ====

void FUN_0021a130(void)

{
  if (DAT_0043df68 != 0) {
    FUN_002455c0();
    FUN_00240d10(DAT_0043df68 + 0x18,DAT_0043df6c,0);
    DAT_0040de46 = DAT_0040de46 + -1;
  }
  return;
}


// ==== FUN_0021a190 @ 0021a190 ====

void FUN_0021a190(undefined8 param_1)

{
  if ((DAT_003be8f0 & 1) != 0) {
    FUN_00241b40(2,0x4000);
  }
  FUN_00219ef8(param_1);
  if (DAT_0040eb64 != 0) {
    FUN_00241bc0();
  }
  return;
}


// ==== FUN_0021a1f0 @ 0021a1f0 ====

void FUN_0021a1f0(void)

{
  FUN_0021a130();
  return;
}


// ==== FUN_0021a218 @ 0021a218 ====

void FUN_0021a218(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  short *apsStack_60 [4];
  
  puVar6 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar8 = FUN_00250058(DAT_0043dee0,0x10);
    puVar6 = (uint *)FUN_0024ad08(uVar8);
  }
  else {
    uVar2 = *DAT_003bfb10;
    puVar5 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar2 | 4;
    DAT_003bfb10 = puVar5;
    piVar4 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar4[1] = iVar3 + 1;
    }
    else {
      *puVar6 = uVar2 & 0xfffffffb;
    }
    lVar7 = FUN_003872a8(puVar6 + 2);
    if (lVar7 == 0) {
      FUN_002530e8(puVar6 + 2,0);
    }
  }
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  FUN_003872e0(apsStack_60,param_2);
  FUN_00387398(puVar6 + 2,apsStack_60);
  FUN_00387328(apsStack_60,2);
  FUN_00253ff0(apsStack_60,param_1);
  uVar8 = FUN_00218930(0);
  FUN_0021c268(0x43db68,uVar8,0,apsStack_60,puVar6,1,1,0);
  (**(code **)(puVar6[1] + 0x14))((int)puVar6 + (int)*(short *)(puVar6[1] + 0x10));
  sVar1 = *apsStack_60[0];
  *apsStack_60[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  return;
}


// ==== FUN_0021a3b8 @ 0021a3b8 ====

void FUN_0021a3b8(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  short *apsStack_40 [4];
  
  FUN_00253ff0(apsStack_40,param_1);
  uVar2 = FUN_00218930(0);
  uVar2 = FUN_0021e420(0x43db68,uVar2,0,apsStack_40,1,1,0);
  iVar3 = (int)uVar2;
  (**(code **)(*(int *)(iVar3 + 4) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 8));
  FUN_0024c650(uVar2,param_2);
  (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
  sVar1 = *apsStack_40[0];
  *apsStack_40[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
  }
  return;
}


// ==== FUN_0021a480 @ 0021a480 ====

void FUN_0021a480(undefined4 param_1,int param_2,long param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  undefined8 *puVar14;
  int iVar15;
  int aiStack_1b0 [32];
  short *apsStack_130 [4];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  int iStack_10c;
  short **ppsStack_108;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  piVar13 = aiStack_1b0;
  uStack_110 = param_1;
  iStack_10c = param_2;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  if (param_3 == 0) {
    uVar8 = FUN_00218930(0);
    ppsStack_108 = apsStack_130;
  }
  else {
    FUN_00253ff0(apsStack_130);
    uVar8 = FUN_00218930(0);
    uVar8 = FUN_0021e420(0x43db68,uVar8,0,apsStack_130,1,1,0);
    ppsStack_108 = apsStack_130;
    sVar1 = *apsStack_130[0];
    *apsStack_130[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_130[0],(ushort)apsStack_130[0][2] + 9);
    }
  }
  puVar14 = &uStack_20;
  iVar15 = param_4 + -1;
  iVar12 = param_4;
  if (0 < param_4) {
    do {
      puVar6 = DAT_003bfb10;
      if (DAT_003bfb10 == (uint *)0x0) {
        uVar10 = FUN_00250058(DAT_0043dee0,0x10);
        puVar6 = (uint *)FUN_0024ad08(uVar10);
      }
      else {
        uVar2 = *DAT_003bfb10;
        puVar5 = (uint *)DAT_003bfb10[3];
        *DAT_003bfb10 = uVar2 | 4;
        DAT_003bfb10 = puVar5;
        piVar4 = DAT_003be8e0;
        iVar7 = DAT_003be8e0[1];
        if (iVar7 < *DAT_003be8e0) {
          *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar6;
          piVar4[1] = iVar7 + 1;
        }
        else {
          *puVar6 = uVar2 & 0xfffffffb;
        }
        lVar9 = FUN_003872a8(puVar6 + 2);
        if (lVar9 == 0) {
          FUN_002530e8(puVar6 + 2,0);
        }
      }
      uVar3 = *(undefined4 *)puVar14;
      *piVar13 = (int)puVar6;
      iVar12 = iVar12 + -1;
      FUN_003872e0(auStack_120,uVar3);
      piVar13 = piVar13 + 1;
      FUN_00387398(puVar6 + 2,auStack_120);
      FUN_00387328(auStack_120,2);
      puVar14 = puVar14 + 1;
    } while (iVar12 != 0);
  }
  if (-1 < iVar15) {
    piVar13 = aiStack_1b0 + iVar15;
    do {
      iVar15 = iVar15 + -1;
      iVar12 = *piVar13;
      iVar7 = DAT_0043db68 * 4;
      DAT_0043db68 = DAT_0043db68 + 1;
      *(int *)(iVar7 + DAT_0043db70) = iVar12;
      piVar13 = piVar13 + -1;
      (**(code **)(*(int *)(iVar12 + 4) + 0xc))(iVar12 + *(short *)(*(int *)(iVar12 + 4) + 8));
    } while (-1 < iVar15);
  }
  FUN_00253ff0(apsStack_130,uStack_110);
  uVar10 = FUN_0021e420(0x43db68,uVar8,0,ppsStack_108,1,1,0);
  uVar11 = FUN_00251a60();
  FUN_0021ea58(0x43db68,uVar8,uVar10,param_4);
  FUN_00251a88(uVar11);
  if (iStack_10c != 0) {
    FUN_0024c650(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4),iStack_10c);
  }
  if (0 < DAT_0043db68) {
    iVar12 = *(int *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    iVar15 = *(int *)(iVar12 + 4);
    (**(code **)(iVar15 + 0x14))(iVar12 + *(short *)(iVar15 + 0x10));
    DAT_0043db68 = DAT_0043db68 + -1;
  }
  sVar1 = *apsStack_130[0];
  *apsStack_130[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_130[0],(ushort)apsStack_130[0][2] + 9);
  }
  return;
}


// ==== FUN_0021a7e0 @ 0021a7e0 ====

void FUN_0021a7e0(undefined4 param_1,long param_2,long param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int aiStack_1a0 [32];
  short *apsStack_120 [4];
  undefined4 uStack_110;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  piVar6 = aiStack_1a0;
  uStack_110 = param_1;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  if (param_3 == 0) {
    uVar3 = FUN_00218930(0);
  }
  else {
    FUN_00253ff0(apsStack_120);
    uVar3 = FUN_00218930(0);
    uVar3 = FUN_0021e420(0x43db68,uVar3,0,apsStack_120,1,1,0);
    sVar1 = *apsStack_120[0];
    *apsStack_120[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_120[0],(ushort)apsStack_120[0][2] + 9);
    }
  }
  puVar7 = &uStack_20;
  iVar8 = param_4 + -1;
  iVar9 = param_4;
  if (0 < param_4) {
    do {
      iVar9 = iVar9 + -1;
      *piVar6 = *(undefined4 *)puVar7;
      piVar6 = piVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar9 != 0);
  }
  if (-1 < iVar8) {
    piVar6 = aiStack_1a0 + iVar8;
    do {
      iVar8 = iVar8 + -1;
      iVar9 = *piVar6;
      iVar2 = DAT_0043db68 * 4;
      DAT_0043db68 = DAT_0043db68 + 1;
      *(int *)(iVar2 + DAT_0043db70) = iVar9;
      piVar6 = piVar6 + -1;
      (**(code **)(*(int *)(iVar9 + 4) + 0xc))(iVar9 + *(short *)(*(int *)(iVar9 + 4) + 8));
    } while (-1 < iVar8);
  }
  FUN_00253ff0(apsStack_120,uStack_110);
  uVar4 = FUN_0021e420(0x43db68,uVar3,0,apsStack_120,1,1,0);
  uVar5 = FUN_00251a60();
  FUN_0021ea58(0x43db68,uVar3,uVar4,param_4);
  FUN_00251a88(uVar5);
  if (param_2 != 0) {
    FUN_0024c650(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4),param_2);
  }
  if (0 < DAT_0043db68) {
    iVar9 = *(int *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    iVar8 = *(int *)(iVar9 + 4);
    (**(code **)(iVar8 + 0x14))(iVar9 + *(short *)(iVar8 + 0x10));
    DAT_0043db68 = DAT_0043db68 + -1;
  }
  sVar1 = *apsStack_120[0];
  *apsStack_120[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_120[0],(ushort)apsStack_120[0][2] + 9);
  }
  return;
}


// ==== FUN_0021aa98 @ 0021aa98 ====

/* WARNING: Removing unreachable block (ram,0x0021aba8) */

float FUN_0021aa98(char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  
  if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)*param_1) & 8) == 0) {
    cVar1 = *param_1;
  }
  else {
    do {
      param_1 = param_1 + 1;
    } while ((*(byte *)((int)&PTR_DAT_0040a991 + (int)*param_1) & 8) != 0);
    cVar1 = *param_1;
  }
  bVar2 = true;
  if (cVar1 != '+') {
    if (cVar1 != '-') {
      cVar1 = *param_1;
      goto LAB_0021ab10;
    }
    bVar2 = false;
  }
  param_1 = param_1 + 1;
  cVar1 = *param_1;
LAB_0021ab10:
  iVar7 = (int)cVar1;
  fVar10 = 0.0;
  if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar1) & 4) == 0) {
    cVar1 = *param_1;
  }
  else {
    do {
      iVar6 = iVar7 + -0x30;
      param_1 = param_1 + 1;
      iVar7 = (int)*param_1;
      fVar10 = fVar10 * 10.0 + (float)iVar6;
    } while ((*(byte *)((int)&PTR_DAT_0040a991 + iVar7) & 4) != 0);
    cVar1 = *param_1;
  }
  if (cVar1 == '.') {
    param_1 = param_1 + 1;
    pfVar5 = &DAT_003fce58;
    iVar7 = (int)*param_1;
    fVar11 = DAT_003fce58;
    if ((*(byte *)((int)&PTR_DAT_0040a991 + iVar7) & 4) != 0) {
      do {
        iVar6 = iVar7 + -0x30;
        param_1 = param_1 + 1;
        pfVar5 = pfVar5 + 1;
        iVar7 = (int)*param_1;
        fVar10 = fVar10 + fVar11 * (float)iVar6;
        if ((*(byte *)((int)&PTR_DAT_0040a991 + iVar7) & 4) == 0) break;
        fVar11 = *pfVar5;
      } while (pfVar5 < &UNK_003fce9c);
    }
    cVar1 = *param_1;
  }
  else {
    cVar1 = *param_1;
  }
  if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar1) & 4) == 0) {
    cVar1 = *param_1;
  }
  else {
    do {
      param_1 = param_1 + 1;
    } while ((*(byte *)((int)&PTR_DAT_0040a991 + (int)*param_1) & 4) != 0);
    cVar1 = *param_1;
  }
  lVar8 = (long)(cVar1 + 0x20);
  if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar1) & 1) == 0) {
    lVar8 = (long)cVar1;
  }
  if (lVar8 == 0x65) {
    pcVar9 = param_1 + 1;
    lVar8 = (long)*pcVar9;
    pbVar4 = (byte *)((int)&PTR_DAT_0040a991 + (int)*pcVar9);
    iVar7 = 1;
    if ((*pbVar4 & 4) == 0) {
      if (lVar8 == 0x2d) {
        iVar7 = -1;
      }
      pcVar9 = param_1 + 2;
      lVar8 = (long)*pcVar9;
      pbVar4 = (byte *)((int)&PTR_DAT_0040a991 + (int)*pcVar9);
    }
    iVar6 = 0;
    if ((*pbVar4 & 4) != 0) {
      iVar3 = 0;
      do {
        pcVar9 = pcVar9 + 1;
        iVar6 = iVar3 + -0x30 + (int)lVar8;
        lVar8 = (long)*pcVar9;
        iVar3 = iVar6 * 10;
      } while ((*(byte *)((int)&PTR_DAT_0040a991 + (int)*pcVar9) & 4) != 0);
    }
    if (iVar7 == -1) {
      iVar6 = -iVar6;
    }
    if (iVar6 < 0) {
      iVar7 = -iVar6;
      do {
        fVar10 = fVar10 / 10.0;
        iVar7 = iVar7 + -1;
        iVar6 = 0;
      } while (iVar7 != 0);
    }
    for (; 0 < iVar6; iVar6 = iVar6 + -1) {
      fVar10 = fVar10 * 10.0;
    }
  }
  if (!bVar2) {
    fVar10 = -fVar10;
  }
  return fVar10;
}


// ==== FUN_0021ad58 @ 0021ad58 ====

void FUN_0021ad58(void)

{
  if ((DAT_0043df50 == 0) && (DAT_0043df68 != 0)) {
    *(undefined4 *)(DAT_0043df68 + 0x24) = 0;
  }
  return;
}


// ==== FUN_0021ad88 @ 0021ad88 ====

void FUN_0021ad88(void)

{
  uGpffff8621 = 1;
  return;
}


// ==== FUN_0021ad98 @ 0021ad98 ====

void FUN_0021ad98(undefined4 param_1)

{
  DAT_003be8fc = param_1;
  return;
}


// ==== FUN_0021ada8 @ 0021ada8 ====

undefined4 FUN_0021ada8(void)

{
  return DAT_003be8fc;
}


// ==== FUN_0021adb8 @ 0021adb8 ====

void FUN_0021adb8(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int aiStack_b0 [4];
  
  if (DAT_003be8e4 != 0) {
    iVar8 = *(int *)(DAT_003be8e4 + 4) + -1;
    if ((-1 < iVar8) && (iVar8 < *(int *)(DAT_003be8e4 + 4))) {
      iVar9 = iVar8 * 4 + 4;
      do {
        iVar3 = DAT_003be8e4;
        piVar1 = (int *)(DAT_003be8e4 + 8);
        piVar7 = (int *)(iVar8 * 4 + *piVar1);
        puVar2 = (uint *)*piVar7;
        if ((puVar2[0x16] >> 0x12 & 3) == 1) {
          if (param_1 == 0) {
            if ((short)puVar2[0x16] != 0) goto LAB_0021af90;
            iVar4 = *(int *)(DAT_003be8e4 + 4);
          }
          else {
            iVar4 = *(int *)(DAT_003be8e4 + 4);
          }
          uVar6 = puVar2[0x12];
          iVar4 = iVar4 + -1;
          *(int *)(DAT_003be8e4 + 4) = iVar4;
          if ((iVar4 != 0) && (iVar8 != iVar4)) {
            FUN_0035c5f0(piVar7,*piVar1 + iVar9,(iVar4 - iVar8) * 4);
          }
          *(undefined4 *)(*(int *)(iVar3 + 4) * 4 + *(int *)(iVar3 + 8)) = 0;
          puVar2[0x16] = puVar2[0x16] & 0xfff3ffff;
          *(undefined4 *)(*(int *)(uVar6 + 0x34) + 8) = 4;
          aiStack_b0[0] = 0;
          if (aiStack_b0 != (int *)(uVar6 + 0x34)) {
            if ((*(int *)(uVar6 + 0x34) != 0) && (lVar5 = FUN_00244ce8(), lVar5 == 0)) {
              FUN_00244cf8(*(undefined4 *)(uVar6 + 0x34));
            }
            *(int *)(uVar6 + 0x34) = aiStack_b0[0];
            if (aiStack_b0[0] != 0) {
              FUN_00244cd8();
            }
          }
          if (aiStack_b0[0] == 0) {
            uVar6 = *puVar2;
          }
          else {
            lVar5 = FUN_00244ce8();
            if (lVar5 == 0) {
              FUN_00244cf8(aiStack_b0[0]);
              uVar6 = *puVar2;
            }
            else {
              uVar6 = *puVar2;
            }
          }
          *puVar2 = uVar6 & 0xff03ffff;
          iVar3 = *(int *)(puVar2[0x12] + 0x14);
          (**(code **)(iVar3 + 0xc))(puVar2[0x12] + (int)*(short *)(iVar3 + 8));
          iVar3 = *(int *)(puVar2[0x12] + 0x14);
          (**(code **)(iVar3 + 0x1c))(puVar2[0x12] + (int)*(short *)(iVar3 + 0x18));
          uVar6 = puVar2[0x12];
          if (uVar6 != 0) {
            (**(code **)(*(int *)(uVar6 + 0x14) + 0x14))
                      (uVar6 + (int)*(short *)(*(int *)(uVar6 + 0x14) + 0x10),3);
          }
          puVar2[0x12] = 0;
          FUN_0021ad88();
        }
LAB_0021af90:
        iVar8 = iVar8 + -1;
        iVar9 = iVar9 + -4;
      } while ((-1 < iVar8) && (iVar8 < *(int *)(DAT_003be8e4 + 4)));
    }
  }
  return;
}


// ==== FUN_0021afe0 @ 0021afe0 ====

/* Strings referenciadas:
     "Object.registerClass::" */

void FUN_0021afe0(void)

{
  FUN_00232638(DAT_0043df68);
  if (DAT_0043df74 != 0) {
    FUN_00249810(DAT_0043df74,0,0x3fcea0);
  }
  return;
}


// ==== FUN_0021b048 @ 0021b048 ====

uint FUN_0021b048(uint *param_1)

{
  if (*param_1 >> 0x19 != 0x25) {
    return (uint)(byte)(&DAT_003fd110)[*param_1 >> 0x19];
  }
  return param_1[3];
}


// ==== FUN_0021b078 @ 0021b078 ====

int * FUN_0021b078(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00250058(DAT_0043dee0,param_1 + 4);
  *piVar1 = param_1;
  return piVar1 + 1;
}


// ==== FUN_0021b0b0 @ 0021b0b0 ====

void FUN_0021b0b0(int param_1)

{
  FUN_00250198(DAT_0043dee0,param_1 + -4,*(int *)(param_1 + -4) + 4);
  return;
}


// ==== FUN_0021b0e0 @ 0021b0e0 ====

void FUN_0021b0e0(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  iVar1 = *(int *)(iVar3 + 0x20);
  *(int *)(param_1 + 4) = iVar1;
  uVar2 = FUN_00250058(DAT_0043dee0,iVar1 << 2);
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar1 = *(int *)(iVar3 + 0x24);
  *(int *)(param_1 + 0x10) = iVar1;
  uVar2 = FUN_00250058(DAT_0043dee0,iVar1 << 2);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  iVar1 = *(int *)(iVar3 + 0x24);
  *(int *)(param_1 + 0x1c) = iVar1;
  uVar2 = FUN_00250058(DAT_0043dee0,iVar1 << 2);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  iVar1 = *(int *)(iVar3 + 0x24);
  *(int *)(param_1 + 0x28) = iVar1;
  uVar2 = FUN_00250058(DAT_0043dee0,iVar1 << 2);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  FUN_002519d0(param_2);
  return;
}


// ==== FUN_0021b1b0 @ 0021b1b0 ====

void FUN_0021b1b0(int *param_1,int param_2,long param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  
  bVar4 = param_3 == 0;
LAB_0021ba78:
  FUN_00252b10(DAT_003be8e0);
  piVar17 = (int *)((int)param_1 + 1);
  if ((char)*param_1 == '\0') {
    return;
  }
  switch((char)*param_1) {
  default:
    break;
  case -0x7f:
  case -0x79:
  case -0x67:
  case -99:
  case -0x61:
  case -0x48:
    piVar17 = (int *)((uint)(param_1 + 1) & 0xfffffffc);
  case -0x4c:
  case -0x49:
    piVar17 = piVar17 + 1;
    break;
  case -0x7d:
    piVar14 = (int *)((uint)(param_1 + 1) & 0xfffffffc);
    piVar17 = piVar14 + 2;
    if (bVar4) {
      if (*piVar14 != 0) {
        *piVar14 = *piVar14 - param_2;
      }
    }
    else if (*piVar14 != 0) {
      *piVar14 = param_2 + *piVar14;
    }
    iVar7 = piVar14[1];
    if (bVar4) {
      if (iVar7 != 0) {
        piVar14[1] = iVar7 - param_2;
      }
    }
    else if (iVar7 != 0) {
      piVar14[1] = param_2 + iVar7;
    }
    break;
  case -0x78:
  case -0x6a:
    piVar17 = (int *)((uint)(param_1 + 1) & 0xfffffffc);
    param_1 = piVar17 + 2;
    if (bVar4) {
      uVar18 = 0;
      if (0 < *piVar17) {
        iVar7 = piVar17[1];
        while( true ) {
          puVar13 = *(uint **)(uVar18 * 4 + iVar7);
          uVar10 = *puVar13 >> 0x19;
          if ((uVar10 == 1) || (uVar10 == 0x2a)) {
            bVar1 = ((int)*puVar13 >> 4 & 1U) == 1;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            if (*puVar13 >> 0x19 != 1) {
              puVar13 = (uint *)puVar13[8];
            }
            FUN_00259848(puVar13);
          }
          else {
            (**(code **)(puVar13[1] + 0x14))((int)puVar13 + (int)*(short *)(puVar13[1] + 0x10));
          }
          *(int *)(uVar18 * 4 + piVar17[1]) = *param_4;
          *param_4 = *param_4 + 1;
          if ((uVar18 & 0xf) == 0) {
            FUN_00252b10(DAT_003be8e0);
          }
          uVar18 = uVar18 + 1;
          if (*piVar17 <= (int)uVar18) break;
          iVar7 = piVar17[1];
        }
      }
    }
    else {
      if (piVar17[1] != 0) {
        piVar17[1] = param_2 + piVar17[1];
      }
      uVar18 = 0;
      if (0 < *piVar17) {
        iVar7 = piVar17[1];
        do {
          iVar16 = *(int *)(uVar18 * 4 + iVar7) * 8;
          *param_4 = *param_4 + 1;
          puVar5 = DAT_003bfaec;
          puVar6 = DAT_003bfae8;
          puVar13 = DAT_003bfae4;
          iVar12 = (int)param_3;
          piVar14 = (int *)(iVar16 + *(int *)(iVar12 + 0x1c));
          iVar7 = *piVar14;
          puVar15 = (uint *)0x0;
          if (iVar7 == 1) {
            if (piVar14[1] != 0) {
              piVar14[1] = iVar12 + piVar14[1];
            }
            puVar6 = (uint *)FUN_00259558(*(undefined4 *)(iVar16 + *(int *)(iVar12 + 0x1c) + 4));
            iVar16 = iVar16 + *(int *)(iVar12 + 0x1c);
            iVar7 = *(int *)(iVar16 + 4);
            if (iVar7 != 0) {
              *(int *)(iVar16 + 4) = iVar7 - iVar12;
            }
LAB_0021b6a4:
            puVar15 = puVar6;
          }
          else {
            if (iVar7 == 6) {
              uVar10 = piVar14[1];
              if (DAT_003bfae8 == (uint *)0x0) {
                uVar8 = FUN_00250058(DAT_0043dee0,0xc);
                FUN_00386ec8(uVar8,6);
                *(uint *)((int)uVar8 + 8) = uVar10;
                puVar9 = &DAT_003e2098;
LAB_0021b640:
                ((uint *)uVar8)[1] = (uint)puVar9;
                puVar6 = (uint *)uVar8;
              }
              else {
                uVar2 = *DAT_003bfae8;
                puVar13 = (uint *)DAT_003bfae8[2];
                *DAT_003bfae8 = uVar2 | 4;
                DAT_003bfae8 = puVar13;
                piVar14 = DAT_003be8e0;
                iVar7 = DAT_003be8e0[1];
                if (iVar7 < *DAT_003be8e0) {
                  *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar6;
                  piVar14[1] = iVar7 + 1;
                }
                else {
                  *puVar6 = uVar2 & 0xfffffffb;
                }
                puVar6[2] = uVar10;
              }
              goto LAB_0021b6a4;
            }
            if (iVar7 == 7) {
              uVar10 = piVar14[1];
              if (DAT_003bfaec == (uint *)0x0) {
                uVar8 = FUN_00250058(DAT_0043dee0,0xc);
                FUN_00386ec8(uVar8,7);
                *(uint *)((int)uVar8 + 8) = uVar10;
                puVar9 = &DAT_003e2230;
                goto LAB_0021b640;
              }
              uVar2 = *DAT_003bfaec;
              puVar13 = (uint *)DAT_003bfaec[2];
              *DAT_003bfaec = uVar2 | 4;
              DAT_003bfaec = puVar13;
              piVar14 = DAT_003be8e0;
              iVar7 = DAT_003be8e0[1];
              if (iVar7 < *DAT_003be8e0) {
                *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar5;
                piVar14[1] = iVar7 + 1;
              }
              else {
                *puVar5 = uVar2 & 0xfffffffb;
              }
              puVar5[2] = uVar10;
              puVar6 = puVar5;
              goto LAB_0021b6a4;
            }
            if (iVar7 == 8) {
              uVar8 = FUN_00250058(DAT_0043dee0,0xc);
              uVar3 = *(undefined4 *)(iVar16 + *(int *)(iVar12 + 0x1c) + 4);
              FUN_00386ec8(uVar8,8);
              *(undefined4 *)((int)uVar8 + 8) = uVar3;
              puVar9 = &DAT_003e2010;
LAB_0021b688:
              ((uint *)uVar8)[1] = (uint)puVar9;
              puVar6 = (uint *)uVar8;
              goto LAB_0021b6a4;
            }
            if (iVar7 == 5) {
              iVar7 = piVar14[1];
              if (DAT_003bfae4 == (uint *)0x0) {
                uVar8 = FUN_00250058(DAT_0043dee0,0xc);
                FUN_00386ec8(uVar8,5);
                *(bool *)((int)uVar8 + 8) = iVar7 != 0;
                puVar9 = &DAT_003e2120;
                goto LAB_0021b640;
              }
              uVar10 = *DAT_003bfae4;
              puVar6 = (uint *)DAT_003bfae4[2];
              *DAT_003bfae4 = uVar10 | 4;
              DAT_003bfae4 = puVar6;
              piVar14 = DAT_003be8e0;
              iVar16 = DAT_003be8e0[1];
              if (iVar16 < *DAT_003be8e0) {
                *(uint **)(iVar16 * 4 + DAT_003be8e0[2]) = puVar13;
                piVar14[1] = iVar16 + 1;
              }
              else {
                *puVar13 = uVar10 & 0xfffffffb;
              }
              *(bool *)(puVar13 + 2) = iVar7 != 0;
              puVar6 = puVar13;
              goto LAB_0021b6a4;
            }
            if (iVar7 == 4) {
              uVar8 = FUN_00250058(DAT_0043dee0,0xc);
              uVar3 = *(undefined4 *)(iVar16 + *(int *)(iVar12 + 0x1c) + 4);
              FUN_00386ec8(uVar8,4);
              *(undefined4 *)((int)uVar8 + 8) = uVar3;
              puVar9 = &DAT_003e21a8;
              goto LAB_0021b688;
            }
            puVar6 = DAT_0043df40;
            if (iVar7 == 3) goto LAB_0021b6a4;
          }
          *(uint **)(uVar18 * 4 + piVar17[1]) = puVar15;
          uVar10 = *puVar15 >> 0x19;
          bVar1 = false;
          if ((uVar10 == 1) || (uVar10 == 0x2a)) {
            bVar1 = ((int)*puVar15 >> 4 & 1U) == 1;
          }
          if (!bVar1) {
            (**(code **)(puVar15[1] + 0xc))((int)puVar15 + (int)*(short *)(puVar15[1] + 8));
          }
          if ((uVar18 & 0xf) == 0) {
            FUN_00252b10(DAT_003be8e0);
            iVar7 = *piVar17;
          }
          else {
            iVar7 = *piVar17;
          }
          uVar18 = uVar18 + 1;
          if (iVar7 <= (int)uVar18) break;
          iVar7 = piVar17[1];
        } while( true );
      }
    }
    if ((bVar4) && (piVar17[1] != 0)) {
      piVar17[1] = piVar17[1] - param_2;
    }
    goto LAB_0021ba78;
  case -0x75:
  case -0x5f:
  case -0x5c:
  case -0x5b:
  case -0x5a:
  case -0x59:
    piVar14 = (int *)((uint)(param_1 + 1) & 0xfffffffc);
    piVar17 = piVar14 + 1;
    if (!bVar4) {
      iVar7 = *piVar14;
      goto LAB_0021b7ec;
    }
LAB_0021b7d4:
    if (*piVar14 != 0) {
      *piVar14 = *piVar14 - param_2;
    }
    break;
  case -0x74:
    piVar14 = (int *)((uint)(param_1 + 1) & 0xfffffffc);
    piVar17 = piVar14 + 1;
    if (bVar4) goto LAB_0021b7d4;
    iVar7 = *piVar14;
LAB_0021b7ec:
    if (iVar7 != 0) {
      *piVar14 = param_2 + iVar7;
    }
    break;
  case -0x72:
    piVar14 = (int *)((uint)(param_1 + 1) & 0xfffffffc);
    piVar17 = piVar14 + 7;
    if (bVar4) {
      if (*piVar14 != 0) {
        *piVar14 = *piVar14 - param_2;
      }
    }
    else if (*piVar14 != 0) {
      *piVar14 = param_2 + *piVar14;
    }
    if (bVar4) {
      iVar7 = piVar14[1];
    }
    else {
      if (piVar14[3] != 0) {
        piVar14[3] = param_2 + piVar14[3];
      }
      iVar7 = piVar14[1];
    }
    iVar16 = 0;
    if (0 < iVar7) {
      do {
        if (bVar4) {
          iVar12 = iVar16 * 8 + piVar14[3];
          iVar7 = *(int *)(iVar12 + 4);
          if (iVar7 != 0) {
            *(int *)(iVar12 + 4) = iVar7 - param_2;
          }
        }
        else {
          iVar12 = iVar16 * 8 + piVar14[3];
          iVar7 = *(int *)(iVar12 + 4);
          if (iVar7 != 0) {
            *(int *)(iVar12 + 4) = param_2 + iVar7;
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < piVar14[1]);
    }
    param_1 = piVar17;
    if (!bVar4) goto LAB_0021ba78;
    if (piVar14[3] != 0) {
      piVar14[3] = piVar14[3] - param_2;
    }
    piVar14[6] = 0x12345678;
    piVar14[5] = -0x6789abce;
    break;
  case -0x71:
    uVar18 = (uint)(param_1 + 1) & 0xfffffffc;
    piVar17 = (int *)(uVar18 + 0x14);
    if ((*(byte *)(uVar18 + 0xc) >> 2 & 1) == 0) {
      iVar7 = *(int *)(uVar18 + 0x10);
      if (bVar4) {
        if (iVar7 != 0) {
          *(int *)(uVar18 + 0x10) = iVar7 - param_2;
        }
      }
      else if (iVar7 != 0) {
        *(int *)(uVar18 + 0x10) = param_2 + iVar7;
      }
    }
    break;
  case -0x6c:
    piVar14 = (int *)((uint)(param_1 + 1) & 0xfffffffc);
    piVar17 = piVar14 + 1;
    if (bVar4) {
      *piVar14 = *piVar14 - (int)piVar17;
    }
    else {
      *piVar14 = (int)((int)piVar17 + *piVar14);
    }
    break;
  case -0x65:
    goto switchD_0021b220_caseD_9b;
  case -0x5e:
  case -0x52:
  case -0x51:
  case -0x50:
  case -0x4f:
  case -0x4e:
  case -0x4d:
  case -0x4b:
    piVar17 = (int *)((int)param_1 + 2);
    break;
  case -0x5d:
  case -0x4a:
    piVar17 = (int *)((int)param_1 + 3);
  }
  goto switchD_0021b220_caseD_1;
switchD_0021b220_caseD_9b:
  piVar14 = (int *)((uint)(param_1 + 1) & 0xfffffffc);
  piVar17 = piVar14 + 6;
  if (bVar4) {
    if (*piVar14 != 0) {
      *piVar14 = *piVar14 - param_2;
    }
  }
  else if (*piVar14 != 0) {
    *piVar14 = param_2 + *piVar14;
  }
  if (bVar4) {
    iVar7 = piVar14[1];
  }
  else {
    if (piVar14[2] != 0) {
      piVar14[2] = param_2 + piVar14[2];
    }
    iVar7 = piVar14[1];
  }
  iVar16 = 0;
  if (0 < iVar7) {
    do {
      if (bVar4) {
        piVar11 = (int *)(iVar16 * 4 + piVar14[2]);
        iVar7 = *piVar11;
        if (iVar7 != 0) {
          *piVar11 = iVar7 - param_2;
        }
      }
      else {
        piVar11 = (int *)(iVar16 * 4 + piVar14[2]);
        iVar7 = *piVar11;
        if (iVar7 != 0) {
          *piVar11 = param_2 + iVar7;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < piVar14[1]);
  }
  param_1 = piVar17;
  if (!bVar4) goto LAB_0021ba78;
  if (piVar14[2] != 0) {
    piVar14[2] = piVar14[2] - param_2;
  }
  piVar14[5] = 0x12345678;
  piVar14[4] = -0x6789abce;
switchD_0021b220_caseD_1:
  param_1 = piVar17;
  goto LAB_0021ba78;
}


// ==== FUN_0021bac0 @ 0021bac0 ====

void FUN_0021bac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0021b1b0(param_1,param_2,0,param_3);
  return;
}


// ==== FUN_0021bae0 @ 0021bae0 ====

void FUN_0021bae0(void)

{
  FUN_0021b1b0();
  return;
}


// ==== FUN_0021bb00 @ 0021bb00 ====

void FUN_0021bb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  short *apsStack_b0 [4];
  short *apsStack_a0 [4];
  
  if (param_4 == 0) {
    uVar8 = (*DAT_0043daa8)();
  }
  else {
    uVar8 = (*DAT_0043daa4)(*(int *)param_4 + 8);
  }
  puVar7 = (uint *)uVar8;
  uVar3 = *puVar7;
  puVar10 = (uint *)0x0;
  bVar1 = false;
  if ((uVar3 >> 0x19 == 1) || (uVar3 >> 0x19 == 0x2a)) {
    bVar1 = ((int)uVar3 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    if (uVar3 >> 0x19 != 1) {
      puVar7 = (uint *)puVar7[8];
    }
    puVar10 = puVar7 + 2;
  }
  else {
    FUN_0024c6d0(uVar8,0);
  }
  iVar11 = *puVar10 + 8;
  apsStack_a0[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 2;
  apsStack_b0[0] = &DAT_003bfaf8;
  while (iVar11 = FUN_00220ed0(param_1,iVar11,apsStack_b0,apsStack_a0), puVar7 = DAT_003bfb10,
        iVar11 != 0) {
    if (apsStack_b0[0] != &DAT_003bfaf8) {
      if (DAT_003bfb10 == (uint *)0x0) {
        uVar8 = FUN_00250058(DAT_0043dee0,0x10);
        puVar7 = (uint *)FUN_0024ad08(uVar8);
      }
      else {
        uVar3 = *DAT_003bfb10;
        puVar10 = (uint *)DAT_003bfb10[3];
        *DAT_003bfb10 = uVar3 | 4;
        DAT_003bfb10 = puVar10;
        piVar6 = DAT_003be8e0;
        iVar4 = DAT_003be8e0[1];
        if (iVar4 < *DAT_003be8e0) {
          *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar7;
          piVar6[1] = iVar4 + 1;
        }
        else {
          *puVar7 = uVar3 & 0xfffffffb;
        }
        lVar9 = FUN_003872a8(puVar7 + 2);
        if (lVar9 == 0) {
          FUN_002530e8(puVar7 + 2,0);
        }
      }
      *apsStack_a0[0] = *apsStack_a0[0] + 1;
      psVar5 = (short *)puVar7[2];
      sVar2 = *psVar5;
      *psVar5 = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar5,(ushort)psVar5[2] + 9);
      }
      puVar7[2] = (uint)apsStack_a0[0];
      FUN_0021c268(param_1,param_2,param_3,apsStack_b0,puVar7,1,1,0);
    }
  }
  sVar2 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
  sVar2 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  return;
}


// ==== FUN_0021bdb8 @ 0021bdb8 ====

long FUN_0021bdb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  long lVar3;
  short *apsStack_50 [4];
  int aiStack_40 [4];
  
  apsStack_50[0] = &DAT_003bfaf8;
  if (*(short *)(*(int *)param_3 + 2) == 0) {
    if (DAT_003bfaf8 == 0) {
      FUN_00250198(DAT_0043dee0,0x3bfaf8,DAT_003bfafc + 9);
    }
  }
  else {
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0021bee8(param_1,param_2,param_3,aiStack_40,apsStack_50);
    if (((aiStack_40[0] == 0) ||
        (param_1 = FUN_0024ee48(aiStack_40[0],apsStack_50,param_2), param_1 == 0)) ||
       (iVar2 = *(int *)((int)param_1 + 4),
       lVar3 = (**(code **)(iVar2 + 0x2c))((int)param_1 + (int)*(short *)(iVar2 + 0x28)), lVar3 == 0
       )) {
      sVar1 = *apsStack_50[0];
      *apsStack_50[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
      }
      param_1 = 0;
    }
    else {
      sVar1 = *apsStack_50[0];
      *apsStack_50[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
      }
    }
  }
  return param_1;
}


// ==== FUN_0021bee8 @ 0021bee8 ====

undefined8
FUN_0021bee8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  undefined8 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 auStack_160 [256];
  short *apsStack_60 [4];
  
  bVar4 = true;
  piVar7 = (int *)param_3;
  pcVar6 = (char *)(*piVar7 + 8);
  cVar1 = *pcVar6;
  do {
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') {
LAB_0021bf48:
      if ((bVar4) && (param_2 == 0)) {
        *(short *)*piVar7 = *(short *)*piVar7 + 1;
        psVar3 = (short *)*param_5;
        sVar2 = *psVar3;
        *psVar3 = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
        }
        uVar5 = 0;
        *param_5 = *piVar7;
        *(undefined4 *)param_4 = (int)param_1;
      }
      else {
        uVar5 = FUN_0021c058(param_1,param_2,param_3,param_4,auStack_160);
        FUN_00253ff0(apsStack_60,auStack_160);
        *apsStack_60[0] = *apsStack_60[0] + 1;
        psVar3 = (short *)*param_5;
        sVar2 = *psVar3;
        *psVar3 = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
        }
        *param_5 = (int)apsStack_60[0];
        sVar2 = *apsStack_60[0];
        *apsStack_60[0] = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
        }
      }
      return uVar5;
    }
    if (cVar1 < '0') {
      bVar4 = false;
      goto LAB_0021bf48;
    }
    if (cVar1 == ':') {
      bVar4 = false;
      goto LAB_0021bf48;
    }
    cVar1 = *pcVar6;
  } while( true );
}


// ==== FUN_0021c058 @ 0021c058 ====

bool FUN_0021c058(int param_1,int param_2,int *param_3,int *param_4,undefined8 param_5)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_1a0 [256];
  short *apsStack_a0 [4];
  
  pcVar8 = acStack_1a0;
  iVar3 = *param_3;
  *(undefined1 *)param_5 = 0;
  bVar1 = *(char *)(iVar3 + 8) != '/';
  pcVar7 = (char *)(iVar3 + 8);
  if (bVar1) {
    *param_4 = param_1;
  }
  else {
    pcVar7 = (char *)(iVar3 + 9);
    param_1 = *(int *)(**(int **)(DAT_0043df68 + 0x18) + 0x50);
    *param_4 = param_1;
  }
  bVar1 = !bVar1;
  pcVar6 = acStack_1a0;
  do {
    while( true ) {
      cVar4 = *pcVar7;
      if (cVar4 != '.') break;
      if (pcVar7[1] == '.') {
        *pcVar6 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
        cVar4 = *pcVar7;
        goto LAB_0021c22c;
      }
      if (pcVar7[1] == '\0') {
LAB_0021c190:
        *param_4 = 0;
        return bVar1;
      }
      *pcVar6 = '\0';
      FUN_00253ff0(apsStack_a0,acStack_1a0);
      param_1 = FUN_0024ee48(param_1,apsStack_a0,param_2);
      sVar2 = *apsStack_a0[0];
      *apsStack_a0[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
      }
      if (param_1 == 0) goto LAB_0021c190;
LAB_0021c1fc:
      param_2 = 0;
      pcVar7 = pcVar7 + 1;
      pcVar6 = acStack_1a0;
    }
    if (cVar4 < '/') {
      if (cVar4 == '\0') {
        *pcVar6 = '\0';
        if (param_2 != 0) {
          param_1 = param_2;
        }
        *param_4 = param_1;
        goto LAB_0021c218;
      }
      cVar4 = *pcVar7;
    }
    else {
      if (cVar4 == ':') {
        *pcVar6 = '\0';
        FUN_00253ff0(apsStack_a0,acStack_1a0);
        lVar5 = FUN_0024ee48(param_1,apsStack_a0,param_2);
        sVar2 = *apsStack_a0[0];
        *apsStack_a0[0] = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
        }
        if (lVar5 == 0) goto LAB_0021c1fc;
        *param_4 = (int)lVar5;
        pcVar8 = pcVar7 + 1;
LAB_0021c218:
        FUN_0035cbc0(param_5,pcVar8);
        return bVar1;
      }
      cVar4 = *pcVar7;
    }
LAB_0021c22c:
    pcVar7 = pcVar7 + 1;
    *pcVar6 = cVar4;
    pcVar6 = pcVar6 + 1;
  } while( true );
}


// ==== FUN_0021c268 @ 0021c268 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0x003bfaf8 : 0x0021c2f8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4
FUN_0021c268(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
            long param_6,long param_7,long param_8)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint *puVar9;
  short *apsStack_a0 [4];
  uint *apuStack_90 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_a0[0] = &DAT_003bfaf8;
  if (param_8 == 0) {
    FUN_0021bee8(param_2,param_3,param_4,apuStack_90,apsStack_a0);
  }
  else {
    apuStack_90[0] = (uint *)param_2;
    psVar2 = (short *)*(undefined4 *)param_4;
    *psVar2 = *psVar2 + 1;
    DAT_003bfaf8 = DAT_003bfaf8 + -1;
    if (DAT_003bfaf8 == 0) {
      FUN_00250198(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
    }
    apsStack_a0[0] = (short *)*(undefined4 *)param_4;
  }
  puVar9 = apuStack_90[0];
  if (apuStack_90[0] == (uint *)0x0) {
LAB_0021c390:
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    }
    return 0;
  }
  uVar6 = 0;
  if ((*apuStack_90[0] >> 0x19) - 0xc < 8) {
    uVar6 = (int)*apuStack_90[0] >> 4 & 1;
  }
  if (uVar6 != 0) {
    lVar5 = FUN_00387080(apuStack_90[0]);
    bVar3 = false;
    if (lVar5 == 0xc) {
      lVar5 = FUN_003871c0(puVar9);
      bVar3 = lVar5 == 0;
    }
    if (bVar3) goto LAB_0021c390;
  }
  if ((((int)*apuStack_90[0] >> 4 & 1U) == 1) &&
     (lVar5 = (**(code **)(apuStack_90[0][1] + 0x4c))
                        ((int)apuStack_90[0] + (int)*(short *)(apuStack_90[0][1] + 0x48),
                         apuStack_90[0],apsStack_a0,param_5), lVar5 != 0)) goto LAB_0021c6e8;
  puVar9 = (uint *)param_5;
  if (param_6 == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      lVar5 = (**(code **)(apuStack_90[0][1] + 0x24))
                        ((int)apuStack_90[0] + (int)*(short *)(apuStack_90[0][1] + 0x20));
      if (lVar5 != 0) {
        FUN_002488d0(lVar5,apsStack_a0,param_5);
        if ((param_5 == 0) || (uVar7 = 0, ((int)*puVar9 >> 4 & 1U) != 1)) {
          uVar7 = 1;
        }
        FUN_00249750(lVar5,apuStack_90[0],apsStack_a0,uVar7);
      }
    }
    else {
      if (DAT_003bfae0 == 0) {
        FUN_00385660();
      }
      FUN_002488d0(DAT_003bfae0 + 8,apsStack_a0,param_5);
    }
    goto LAB_0021c6e8;
  }
  if ((param_7 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    iVar8 = DAT_003bfae0;
    if (DAT_003bfae0 == 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0x28);
      if (iVar8 == 0) {
        bVar3 = false;
      }
      else {
        do {
          iVar4 = iVar8 + 8;
          lVar5 = FUN_00248c78(iVar4,apsStack_a0);
          if (lVar5 != 0) goto LAB_0021c468;
          iVar8 = *(int *)(iVar8 + 0x1c);
        } while (iVar8 != 0);
        bVar3 = false;
      }
    }
    else {
      do {
        iVar4 = iVar8 + 8;
        lVar5 = FUN_00248c78(iVar4,apsStack_a0);
        if (lVar5 != 0) goto LAB_0021c468;
        iVar8 = *(int *)(iVar8 + 0x1c);
      } while (iVar8 != 0);
      bVar3 = false;
    }
    goto LAB_0021c4ac;
  }
LAB_0021c4b8:
  lVar5 = (**(code **)(apuStack_90[0][1] + 0x24))
                    ((int)apuStack_90[0] + (int)*(short *)(apuStack_90[0][1] + 0x20));
  if (lVar5 == 0) {
    uVar6 = 0;
    if ((*apuStack_90[0] >> 0x19) - 0xc < 8) {
      uVar6 = (int)*apuStack_90[0] >> 4 & 1;
    }
    if ((((uVar6 == 0) && (*(int *)(param_1 + 0x30) != 0)) && (param_8 == 0)) &&
       (iVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0x24), iVar4 = *(int *)(iVar8 + 4),
       lVar5 = (**(code **)(iVar4 + 0x24))(iVar8 + *(short *)(iVar4 + 0x20)), lVar5 != 0)) {
      FUN_002488d0(lVar5,apsStack_a0,param_5);
    }
  }
  else {
    FUN_002488d0(lVar5,apsStack_a0,param_5);
    if ((param_5 == 0) || (uVar7 = 0, ((int)*puVar9 >> 4 & 1U) != 1)) {
      uVar7 = 1;
    }
    FUN_00249750(lVar5,apuStack_90[0],apsStack_a0,uVar7);
    if (apuStack_90[0] == DAT_0043df44) {
      uVar6 = 0;
      if ((*puVar9 >> 0x19) - 0x2b < 3) {
        uVar6 = (int)*puVar9 >> 4 & 1;
      }
      if (uVar6 != 0) {
        iVar4 = (**(code **)(puVar9[1] + 0x24))((int)puVar9 + (int)*(short *)(puVar9[1] + 0x20));
        iVar8 = *(int *)(*(int *)(iVar4 + 0xc) + 4);
        iVar4 = (**(code **)(iVar8 + 0x24))(*(int *)(iVar4 + 0xc) + (int)*(short *)(iVar8 + 0x20));
        iVar8 = *(int *)(iVar4 + 8);
        if (iVar8 == 0) {
          *(undefined4 *)(iVar4 + 8) = 0;
        }
        else {
          (**(code **)(*(int *)(iVar8 + 4) + 0x14))(iVar8 + *(short *)(*(int *)(iVar8 + 4) + 0x10));
          *(undefined4 *)(iVar4 + 8) = 0;
        }
      }
    }
  }
LAB_0021c6e8:
  sVar1 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
  return 1;
LAB_0021c468:
  FUN_002488d0(iVar4,apsStack_a0,param_5);
  bVar3 = true;
LAB_0021c4ac:
  if (bVar3) goto LAB_0021c6e8;
  goto LAB_0021c4b8;
}


// ==== FUN_0021c740 @ 0021c740 ====

uint * FUN_0021c740(undefined8 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  
  puVar4 = DAT_003bfaec;
  iVar13 = 2;
  puVar2 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
  uVar14 = *(undefined4 *)((DAT_0043db68 + -1) * 4 + DAT_0043db70 + -4);
  if (((int)*puVar2 >> 4 & 1U) == 1) {
    uVar12 = 0;
    if (0 < *(int *)(DAT_0043df68 + 0x88)) {
      iVar11 = 0;
      do {
        if (*(int *)(iVar11 + *(int *)(DAT_0043df68 + 0x1c)) == 0) {
          *(int *)(DAT_0043df68 + 0x20) = *(int *)(DAT_0043df68 + 0x20) + 1;
          *(undefined4 *)(iVar11 + *(int *)(DAT_0043df68 + 0x1c)) = 1;
          *(undefined4 *)(iVar11 + *(int *)(DAT_0043df68 + 0x1c) + 0x10) = DAT_0043df40;
          uVar9 = *puVar2 >> 0x19;
          uVar6 = 0;
          uVar3 = (int)*puVar2 >> 4;
          if (uVar9 - 0x2b < 3) {
            uVar6 = uVar3 & 1;
          }
          if (uVar6 == 0) {
            uVar6 = 0;
            if (uVar9 == 9) {
              uVar6 = uVar3 & 1;
            }
            if (uVar6 == 0) {
              iVar13 = 3;
              uVar14 = *(undefined4 *)((DAT_0043db68 + -2) * 4 + DAT_0043db70 + -4);
              puVar4 = (uint *)FUN_0024ee48(puVar2,*(int *)((DAT_0043db68 + -1) * 4 + DAT_0043db70 +
                                                           -4) + 8,0);
              *(uint **)(iVar11 + *(int *)(DAT_0043df68 + 0x1c) + 0x10) = puVar2;
              puVar2 = puVar4;
            }
          }
          *(uint **)(iVar11 + *(int *)(DAT_0043df68 + 0x1c) + 4) = puVar2;
          iVar5 = *(int *)(iVar11 + *(int *)(DAT_0043df68 + 0x1c) + 4);
          iVar1 = *(int *)(iVar5 + 4);
          (**(code **)(iVar1 + 0xc))(iVar5 + *(short *)(iVar1 + 8));
          uVar14 = FUN_0024c410(uVar14);
          *(undefined4 *)(iVar11 + *(int *)(DAT_0043df68 + 0x1c) + 8) = uVar14;
          iVar5 = iVar11 + *(int *)(DAT_0043df68 + 0x1c);
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 8);
          if (iVar13 < param_2) {
            iVar5 = 0;
            if (0 < param_2 - iVar13) {
              do {
                iVar10 = iVar5 + iVar13;
                iVar5 = iVar5 + 1;
                iVar7 = iVar11 + *(int *)(DAT_0043df68 + 0x1c);
                piVar8 = (int *)(iVar7 + 0x14);
                iVar1 = *piVar8;
                iVar10 = *(int *)((DAT_0043db68 - iVar10) * 4 + DAT_0043db70 + -4);
                *(int *)(iVar1 * 4 + *(int *)(iVar7 + 0x1c)) = iVar10;
                *piVar8 = iVar1 + 1;
                (**(code **)(*(int *)(iVar10 + 4) + 0xc))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 8));
              } while (iVar5 < param_2 - iVar13);
            }
          }
          break;
        }
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 0x20;
      } while ((int)uVar12 < *(int *)(DAT_0043df68 + 0x88));
    }
    puVar2 = DAT_003bfaec;
    if (DAT_003bfaec != (uint *)0x0) {
      uVar3 = *DAT_003bfaec;
      uVar9 = DAT_003bfaec[2];
      *DAT_003bfaec = uVar3 | 4;
      DAT_003bfaec = (uint *)uVar9;
      piVar8 = DAT_003be8e0;
      iVar13 = DAT_003be8e0[1];
      if (iVar13 < *DAT_003be8e0) {
        *(uint **)(iVar13 * 4 + DAT_003be8e0[2]) = puVar2;
        piVar8[1] = iVar13 + 1;
      }
      else {
        *puVar2 = uVar3 & 0xfffffffb;
      }
      puVar2[2] = uVar12;
      return puVar2;
    }
    puVar2 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar2,7);
    puVar2[2] = uVar12;
  }
  else {
    if (DAT_003bfaec != (uint *)0x0) {
      uVar12 = *DAT_003bfaec;
      uVar3 = DAT_003bfaec[2];
      *DAT_003bfaec = uVar12 | 4;
      DAT_003bfaec = (uint *)uVar3;
      piVar8 = DAT_003be8e0;
      iVar13 = DAT_003be8e0[1];
      if (iVar13 < *DAT_003be8e0) {
        *(uint **)(iVar13 * 4 + DAT_003be8e0[2]) = puVar4;
        piVar8[1] = iVar13 + 1;
      }
      else {
        *puVar4 = uVar12 & 0xfffffffb;
      }
      puVar4[2] = 0;
      return puVar4;
    }
    puVar2 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar2,7);
    puVar2[2] = 0;
  }
  puVar2[1] = (uint)&DAT_003e2230;
  return puVar2;
}


// ==== FUN_0021cb40 @ 0021cb40 ====

undefined4 FUN_0021cb40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((**(int **)(DAT_0043db68 * 4 + DAT_0043db70 + -4) >> 4 & 1U) == 1) {
    iVar3 = FUN_0024c300();
    iVar3 = iVar3 * 0x20;
    piVar4 = (int *)(iVar3 + *(int *)(DAT_0043df68 + 0x1c));
    if (*piVar4 != 0) {
      iVar5 = piVar4[1];
      iVar1 = *(int *)(iVar5 + 4);
      (**(code **)(iVar1 + 0x14))(iVar5 + *(short *)(iVar1 + 0x10));
      *(undefined4 *)(iVar3 + *(int *)(DAT_0043df68 + 0x1c)) = 0;
      iVar3 = iVar3 + *(int *)(DAT_0043df68 + 0x1c);
      iVar5 = *(int *)(iVar3 + 0x14);
      if (0 < iVar5) {
        do {
          iVar5 = iVar5 + -1;
          iVar1 = *(int *)(*(int *)(iVar3 + 0x14) * 4 + *(int *)(iVar3 + 0x1c) + -4);
          iVar2 = *(int *)(iVar1 + 4);
          (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
        } while (iVar5 != 0);
      }
      *(int *)(DAT_0043df68 + 0x20) = *(int *)(DAT_0043df68 + 0x20) + -1;
    }
  }
  return DAT_0043df40;
}


// ==== FUN_0021d188 @ 0021d188 ====

uint * FUN_0021d188(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  short *psVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  short *apsStack_40 [4];
  
  puVar8 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar10 = FUN_00250058(DAT_0043dee0,0x10);
    puVar8 = (uint *)FUN_0024ad08(uVar10);
  }
  else {
    uVar3 = *DAT_003bfb10;
    puVar5 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar3 | 4;
    DAT_003bfb10 = puVar5;
    piVar7 = DAT_003be8e0;
    iVar4 = DAT_003be8e0[1];
    if (iVar4 < *DAT_003be8e0) {
      *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar8;
      piVar7[1] = iVar4 + 1;
    }
    else {
      *puVar8 = uVar3 & 0xfffffffb;
    }
    lVar9 = FUN_003872a8(puVar8 + 2);
    if (lVar9 == 0) {
      FUN_002530e8(puVar8 + 2,0);
    }
  }
  puVar5 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
  uVar3 = *puVar5;
  uVar11 = uVar3 >> 0x19;
  bVar1 = false;
  if ((uVar11 == 1) || (uVar11 == 0x2a)) {
    bVar1 = ((int)uVar3 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    apsStack_40[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(puVar5,apsStack_40);
    FUN_00220d78(apsStack_40);
    *apsStack_40[0] = *apsStack_40[0] + 1;
    psVar6 = (short *)puVar8[2];
    sVar2 = *psVar6;
    *psVar6 = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar6,(ushort)psVar6[2] + 9);
    }
    puVar8[2] = (uint)apsStack_40[0];
    sVar2 = *apsStack_40[0];
    *apsStack_40[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
    }
  }
  return puVar8;
}


// ==== FUN_0021d348 @ 0021d348 ====

uint * FUN_0021d348(undefined8 param_1,long param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  short *apsStack_50 [4];
  
  puVar7 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar9 = FUN_00250058(DAT_0043dee0,0x10);
    puVar7 = (uint *)FUN_0024ad08(uVar9);
  }
  else {
    uVar3 = *DAT_003bfb10;
    puVar5 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar3 | 4;
    DAT_003bfb10 = puVar5;
    piVar6 = DAT_003be8e0;
    iVar4 = DAT_003be8e0[1];
    if (iVar4 < *DAT_003be8e0) {
      *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar6[1] = iVar4 + 1;
    }
    else {
      *puVar7 = uVar3 & 0xfffffffb;
    }
    lVar8 = FUN_003872a8(puVar7 + 2);
    if (lVar8 == 0) {
      FUN_002530e8(puVar7 + 2,0);
    }
  }
  if (param_2 != 0) {
    puVar5 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    uVar3 = *puVar5;
    uVar10 = uVar3 >> 0x19;
    bVar1 = false;
    if ((uVar10 == 1) || (uVar10 == 0x2a)) {
      bVar1 = ((int)uVar3 >> 4 & 1U) == 1;
    }
    if (bVar1) {
      apsStack_50[0] = &DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      FUN_0024c6d0(puVar5,apsStack_50);
      FUN_00220b88(apsStack_50);
      FUN_00252d28(puVar7 + 2,apsStack_50);
      sVar2 = *apsStack_50[0];
      *apsStack_50[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
      }
    }
  }
  return puVar7;
}


// ==== FUN_0021d4e0 @ 0021d4e0 ====

uint * FUN_0021d4e0(undefined8 param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  uint *puVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  float fVar15;
  short *apsStack_60 [4];
  char *apcStack_50 [4];
  
  puVar8 = DAT_003bfae4;
  if (param_2 == 0) {
    return DAT_0043df40;
  }
  puVar4 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
  uVar12 = *puVar4 >> 0x19;
  uVar11 = 0;
  uVar9 = (int)*puVar4 >> 4;
  if (uVar12 - 0xc < 8) {
    uVar11 = uVar9 & 1;
  }
  if (uVar11 == 0) {
    uVar11 = 0;
    if (uVar12 == 0x1b) {
      uVar11 = uVar9 & 1;
    }
    if (uVar11 != 0) goto LAB_0021d56c;
    if (puVar4 == DAT_0043df40) {
LAB_0021d618:
      if (DAT_003bfae4 == (uint *)0x0) {
LAB_0021dce0:
        puVar8 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar8,5);
        *(undefined1 *)(puVar8 + 2) = 0;
        goto LAB_0021dd08;
      }
      uVar9 = DAT_003bfae4[2];
      puVar8 = DAT_003bfae4;
LAB_0021d62c:
      DAT_003bfae4 = (uint *)uVar9;
      uVar12 = *puVar8 | 4;
      *puVar8 = uVar12;
      iVar14 = DAT_003be8e0[1];
      if (iVar14 < *DAT_003be8e0) {
        iVar7 = DAT_003be8e0[2];
LAB_0021dcbc:
        piVar5 = DAT_003be8e0;
        *(uint **)(iVar14 * 4 + iVar7) = puVar8;
        piVar5[1] = iVar14 + 1;
        goto LAB_0021dcd0;
      }
LAB_0021dcb0:
      *puVar8 = uVar12 & 0xfffffffb;
LAB_0021dcd0:
      *(undefined1 *)(puVar8 + 2) = 0;
      return puVar8;
    }
    uVar11 = 0;
    if (uVar12 == 6) {
      uVar11 = uVar9 & 1;
    }
    if (uVar11 != 0) {
      uVar9 = *puVar4;
LAB_0021db10:
      uVar12 = uVar9 >> 0x19;
      uVar11 = 0;
      uVar9 = (int)uVar9 >> 4;
      if (uVar12 == 5) {
        uVar11 = uVar9 & 1;
      }
      if (uVar11 != 0) {
        uVar9 = puVar4[2];
        if (DAT_003bfae4 != (uint *)0x0) {
          uVar12 = *DAT_003bfae4;
          uVar11 = DAT_003bfae4[2];
          *DAT_003bfae4 = uVar12 | 4;
          DAT_003bfae4 = (uint *)uVar11;
          piVar5 = DAT_003be8e0;
          iVar14 = DAT_003be8e0[1];
          if (iVar14 < *DAT_003be8e0) {
            *(uint **)(iVar14 * 4 + DAT_003be8e0[2]) = puVar8;
            piVar5[1] = iVar14 + 1;
          }
          else {
            *puVar8 = uVar12 & 0xfffffffb;
          }
          *(char *)(puVar8 + 2) = (char)uVar9;
          return puVar8;
        }
        puVar8 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar8,5);
        *(char *)(puVar8 + 2) = (char)uVar9;
        goto LAB_0021dd08;
      }
      uVar11 = 0;
      if (uVar12 == 6) {
        uVar11 = uVar9 & 1;
      }
      if (uVar11 != 0) {
LAB_0021dc0c:
        fVar15 = (float)FUN_0024c410(puVar4);
        if (fVar15 != 0.0) {
          if (DAT_003bfae4 == (uint *)0x0) {
            puVar8 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
            FUN_00386ec8(puVar8,5);
            *(undefined1 *)(puVar8 + 2) = 1;
            goto LAB_0021dd08;
          }
          uVar9 = DAT_003bfae4[2];
          puVar8 = DAT_003bfae4;
          goto LAB_0021daa4;
        }
        goto LAB_0021d618;
      }
      uVar11 = 0;
      if (uVar12 == 7) {
        uVar11 = uVar9 & 1;
      }
      if (uVar11 != 0) goto LAB_0021dc0c;
      if (DAT_003bfae4 == (uint *)0x0) goto LAB_0021dce0;
      uVar12 = *DAT_003bfae4 | 4;
      uVar9 = DAT_003bfae4[2];
      *DAT_003bfae4 = uVar12;
      DAT_003bfae4 = (uint *)uVar9;
      iVar14 = DAT_003be8e0[1];
      if (iVar14 < *DAT_003be8e0) {
        iVar7 = DAT_003be8e0[2];
        goto LAB_0021dcbc;
      }
      goto LAB_0021dcb0;
    }
    uVar11 = 0;
    if (uVar12 == 7) {
      uVar11 = uVar9 & 1;
    }
    if (uVar11 != 0) {
      uVar9 = *puVar4;
      goto LAB_0021db10;
    }
    uVar11 = 0;
    if (uVar12 == 7) {
      uVar11 = uVar9 & 1;
    }
    bVar1 = false;
    if (uVar11 == 0) {
      uVar11 = 0;
      if (uVar12 == 6) {
        uVar11 = uVar9 & 1;
      }
      bVar1 = false;
      if (uVar11 == 0) {
        if ((uVar12 == 1) || (bVar1 = false, uVar12 == 0x2a)) {
          bVar1 = ((int)*puVar4 >> 4 & 1U) == 1;
        }
        if (bVar1) {
          apsStack_60[0] = &DAT_003bfaf8;
          DAT_003bfaf8 = DAT_003bfaf8 + 1;
          FUN_0024c6d0(puVar4,apsStack_60);
          if (apsStack_60[0][1] == 0) {
            sVar6 = *apsStack_60[0];
            *apsStack_60[0] = sVar6 + -1;
            if ((short)(sVar6 + -1) == 0) {
              FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
              bVar1 = true;
            }
            else {
LAB_0021da5c:
              bVar1 = true;
            }
          }
          else if (((((char)apsStack_60[0][4] == '0') && (2 < (ushort)apsStack_60[0][1])) &&
                   (*(char *)((int)apsStack_60[0] + 9) == 'x')) &&
                  (FUN_00364da8(apsStack_60[0] + 4,apcStack_50,0x10), *apcStack_50[0] == '\0')) {
            sVar6 = *apsStack_60[0];
            *apsStack_60[0] = sVar6 + -1;
            if ((short)(sVar6 + -1) == 0) {
              FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
            }
            bVar1 = false;
          }
          else {
            bVar1 = false;
            cVar2 = *(char *)((int)apsStack_60[0] + (ushort)apsStack_60[0][1] + 7);
            if (((cVar2 == '-') || (cVar2 == '+')) || ((cVar2 == 'e' || (cVar2 == '.')))) {
              cVar2 = (char)apsStack_60[0][4];
            }
            else {
              if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar2) & 4) == 0) {
                sVar6 = *apsStack_60[0];
                *apsStack_60[0] = sVar6 + -1;
                if ((short)(sVar6 + -1) != 0) goto LAB_0021da5c;
                FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
                bVar1 = true;
                goto LAB_0021da64;
              }
              cVar2 = (char)apsStack_60[0][4];
            }
            if (((cVar2 == '.') || (cVar2 == '-')) ||
               ((cVar2 == '+' || ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar2) & 4) != 0)))) {
              iVar14 = 1;
              if (1 < (ushort)apsStack_60[0][1]) {
                pcVar13 = (char *)((int)apsStack_60[0] + 9);
                do {
                  if ((*pcVar13 != '.') || (bVar1)) {
                    if (*(char *)((int)apsStack_60[0] + iVar14 + 8) == 'e') {
                      if (iVar14 == 1) {
                        cVar2 = *pcVar13;
                        goto LAB_0021d9a0;
                      }
                      if (iVar14 == 2) {
                        if ((char)apsStack_60[0][4] == '+') {
                          sVar6 = *apsStack_60[0];
                        }
                        else {
                          if ((char)apsStack_60[0][4] != '-') {
                            uVar3 = apsStack_60[0][1];
                            goto LAB_0021d95c;
                          }
                          sVar6 = *apsStack_60[0];
                        }
                      }
                      else {
                        uVar3 = apsStack_60[0][1];
LAB_0021d95c:
                        if ((int)(uint)uVar3 <= iVar14 + 1) {
                          uVar9 = (uint)(ushort)apsStack_60[0][1];
                          goto LAB_0021d9e4;
                        }
                        cVar2 = pcVar13[1];
                        if (((cVar2 == '-') || (cVar2 == '+')) ||
                           ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar2) & 4) != 0)) {
                          pcVar13 = pcVar13 + 1;
                          iVar14 = iVar14 + 1;
                          goto LAB_0021d9e0;
                        }
                        sVar6 = *apsStack_60[0];
                      }
                    }
                    else {
                      cVar2 = *pcVar13;
LAB_0021d9a0:
                      if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar2) & 4) != 0) {
                        uVar9 = (uint)(ushort)apsStack_60[0][1];
                        goto LAB_0021d9e4;
                      }
                      sVar6 = *apsStack_60[0];
                    }
                    *apsStack_60[0] = sVar6 + -1;
                    if ((short)(sVar6 + -1) == 0) {
                      FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
                    }
                    bVar1 = true;
                    goto LAB_0021da64;
                  }
                  bVar1 = true;
LAB_0021d9e0:
                  uVar9 = (uint)(ushort)apsStack_60[0][1];
LAB_0021d9e4:
                  iVar14 = iVar14 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (iVar14 < (int)uVar9);
              }
              sVar6 = *apsStack_60[0];
              *apsStack_60[0] = sVar6 + -1;
              if ((short)(sVar6 + -1) == 0) {
                FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
              }
              bVar1 = false;
            }
            else {
              sVar6 = *apsStack_60[0];
              *apsStack_60[0] = sVar6 + -1;
              if ((short)(sVar6 + -1) != 0) goto LAB_0021da5c;
              FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
              bVar1 = true;
            }
          }
        }
        else if ((((int)*puVar4 >> 4 & 1U) != 1) || (bVar1 = true, *puVar4 >> 0x19 == 3)) {
          lVar10 = FUN_0021ada8();
          bVar1 = false;
          if (lVar10 == 7) goto LAB_0021da5c;
        }
      }
    }
LAB_0021da64:
    if ((bVar1) || (fVar15 = (float)FUN_0024c410(puVar4), fVar15 == 0.0)) {
      if (DAT_003bfae4 != (uint *)0x0) {
        uVar9 = DAT_003bfae4[2];
        puVar8 = DAT_003bfae4;
        goto LAB_0021d62c;
      }
      goto LAB_0021dce0;
    }
    if (DAT_003bfae4 == (uint *)0x0) {
      puVar8 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,5);
      *(undefined1 *)(puVar8 + 2) = 1;
      goto LAB_0021dd08;
    }
    uVar9 = DAT_003bfae4[2];
    puVar8 = DAT_003bfae4;
LAB_0021daa4:
    DAT_003bfae4 = (uint *)uVar9;
    uVar12 = *puVar8 | 4;
    *puVar8 = uVar12;
    iVar14 = DAT_003be8e0[1];
    if (*DAT_003be8e0 <= iVar14) goto LAB_0021d5ac;
    iVar7 = DAT_003be8e0[2];
  }
  else {
LAB_0021d56c:
    if (DAT_003bfae4 == (uint *)0x0) {
      puVar8 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,5);
      *(undefined1 *)(puVar8 + 2) = 1;
LAB_0021dd08:
      puVar8[1] = (uint)&DAT_003e2120;
      return puVar8;
    }
    uVar12 = *DAT_003bfae4 | 4;
    uVar9 = DAT_003bfae4[2];
    *DAT_003bfae4 = uVar12;
    DAT_003bfae4 = (uint *)uVar9;
    iVar14 = DAT_003be8e0[1];
    if (*DAT_003be8e0 <= iVar14) {
LAB_0021d5ac:
      *puVar8 = uVar12 & 0xfffffffb;
      goto LAB_0021d5cc;
    }
    iVar7 = DAT_003be8e0[2];
  }
  piVar5 = DAT_003be8e0;
  *(uint **)(iVar14 * 4 + iVar7) = puVar8;
  piVar5[1] = iVar14 + 1;
LAB_0021d5cc:
  *(undefined1 *)(puVar8 + 2) = 1;
  return puVar8;
}


// ==== FUN_0021dd40 @ 0021dd40 ====

/* Strings referenciadas:
     "_level%d"
     "instance%ld" */

void FUN_0021dd40(undefined8 param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  short *apsStack_70 [4];
  short *apsStack_60 [4];
  
  if (param_3 == 0) {
    puVar5 = &DAT_0040de18;
  }
  else {
    puVar5 = &DAT_0040de20;
  }
  iVar6 = (int)param_1;
  iVar4 = *(int *)(iVar6 + 0x44);
  if (iVar4 == 0) {
    if ((param_3 == 0) && ((*(uint *)(iVar6 + 0x54) & 0x1ffff) != 0)) {
      iVar4 = *(int *)(iVar6 + 0x54);
    }
    else {
      if (param_3 != 1) {
        return;
      }
      iVar4 = *(int *)(iVar6 + 0x54);
    }
    FUN_0035d728(apsStack_70,0x3fd440,(iVar4 << 0xf) >> 0xf);
    FUN_00253ff0(apsStack_60,apsStack_70);
    *apsStack_60[0] = *apsStack_60[0] + 1;
    psVar2 = (short *)*(undefined4 *)param_2;
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *(undefined4 *)param_2 = apsStack_60[0];
  }
  else {
    FUN_0021dd40(iVar4,param_2);
    if (*(undefined2 **)(iVar6 + 8) == &DAT_003bfaf8) {
      iVar3 = *(int *)(iVar6 + 0x54);
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      apsStack_70[0] = &DAT_003bfaf8;
      FUN_00252e10(param_2,puVar5,iVar6 + 8);
      FUN_002531f0(apsStack_70,0x3fd450,(iVar3 << 0xf) >> 0xf);
      FUN_00252d28(param_2,apsStack_70);
      *apsStack_70[0] = *apsStack_70[0] + 1;
      psVar2 = *(short **)(iVar6 + 8);
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      *(short **)(iVar6 + 8) = apsStack_70[0];
      FUN_002488d0(*(undefined4 *)(*(int *)(iVar4 + 0x48) + 0xc),apsStack_70,param_1);
      sVar1 = *apsStack_70[0];
      *apsStack_70[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) != 0) {
        return;
      }
      FUN_00250198(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
      return;
    }
    FUN_00252f20(apsStack_70,puVar5);
    FUN_00252d28(param_2,apsStack_70);
    apsStack_60[0] = apsStack_70[0];
  }
  sVar1 = *apsStack_60[0];
  *apsStack_60[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  return;
}


// ==== FUN_0021df70 @ 0021df70 ====

void FUN_0021df70(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short *psVar2;
  int *piVar3;
  short *apsStack_40 [4];
  
  FUN_00253ff0(apsStack_40,0x40de10);
  *apsStack_40[0] = *apsStack_40[0] + 1;
  piVar3 = (int *)param_2;
  psVar2 = (short *)*piVar3;
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  *piVar3 = (int)apsStack_40[0];
  sVar1 = *apsStack_40[0];
  *apsStack_40[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
  }
  FUN_0021dd40(param_1,param_2,0);
  if (*(short *)(*piVar3 + 2) == 0) {
    FUN_00253ff0(apsStack_40,0x40de18);
    *apsStack_40[0] = *apsStack_40[0] + 1;
    psVar2 = (short *)*piVar3;
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *piVar3 = (int)apsStack_40[0];
    sVar1 = *apsStack_40[0];
    *apsStack_40[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
    }
  }
  return;
}


// ==== FUN_0021e0b8 @ 0021e0b8 ====

void FUN_0021e0b8(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short *psVar2;
  short *apsStack_40 [4];
  
  FUN_00253ff0(apsStack_40,0x40de10);
  *apsStack_40[0] = *apsStack_40[0] + 1;
  psVar2 = (short *)*(undefined4 *)param_2;
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  *(undefined4 *)param_2 = apsStack_40[0];
  sVar1 = *apsStack_40[0];
  *apsStack_40[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
  }
  FUN_0021dd40(param_1,param_2,1);
  return;
}


// ==== FUN_0021e170 @ 0021e170 ====

/* WARNING: Type propagation algorithm not settling */

int FUN_0021e170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  short *apsStack_a0 [4];
  int aiStack_90 [2];
  uint *apuStack_88 [2];
  
  iVar5 = 0;
  aiStack_90[0] = 0;
  FUN_0021e960(param_2,param_3,param_4,aiStack_90);
  apsStack_a0[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  FUN_0024c6d0(param_5,apsStack_a0);
  iVar4 = aiStack_90[0];
  if (aiStack_90[0] != 0) {
    if (*(int *)(aiStack_90[0] + 0x44) == 0) goto LAB_0021e3c0;
    iVar5 = *(int *)(*(int *)(aiStack_90[0] + 0x44) + 0x48);
    iVar2 = *(int *)(aiStack_90[0] + 0x48);
    lVar6 = FUN_00387080(aiStack_90[0]);
    bVar3 = false;
    if (lVar6 == 0xd) {
      lVar6 = FUN_003871c0(iVar4);
      bVar3 = lVar6 == 0;
    }
    if ((!bVar3) && (lVar6 = FUN_00387080(iVar4), lVar6 == 0x12)) {
      FUN_003871c0(iVar4);
    }
    lVar6 = FUN_00387080(iVar4);
    bVar3 = false;
    if (lVar6 == 0x11) {
      lVar6 = FUN_003871c0(iVar4);
      bVar3 = lVar6 == 0;
    }
    if (bVar3) {
      uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x48) + 0x18);
    }
    else {
      uVar8 = 0;
    }
    iVar5 = FUN_0023fe48(uVar8,iVar5 + 0x24,0,param_6,*(undefined4 *)(iVar2 + 8),apsStack_a0,
                         *(undefined4 *)(iVar4 + 0x44),1,0xffffffffffffffff);
    if (*(int *)(*(int *)(iVar4 + 0x48) + 0x2c) == 1) {
      apuStack_88[0] = (uint *)0x0;
      aiStack_90[1] = 0;
      FUN_0023eb78(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x44) + 0x48) + 0x24),param_6,
                   apsStack_a0,aiStack_90 + 1,apuStack_88);
      uVar7 = 0;
      if ((*apuStack_88[0] >> 0x19) - 0xc < 8) {
        uVar7 = (int)*apuStack_88[0] >> 4 & 1;
      }
      if (uVar7 != 0) {
        *(undefined4 *)(apuStack_88[0][0x12] + 0x2c) = 1;
      }
    }
    FUN_00231b48(DAT_0043df68);
  }
  if (iVar5 != 0) {
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      return iVar5;
    }
    FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    return iVar5;
  }
LAB_0021e3c0:
  iVar4 = DAT_0043df40;
  sVar1 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
  return iVar4;
}


// ==== FUN_0021e420 @ 0021e420 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0x003bfaf8 : 0x0021e5a0 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint * FUN_0021e420(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,long param_6,long param_7)

{
  int *piVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  short *apsStack_c0 [4];
  uint *apuStack_b0 [4];
  
  puVar4 = DAT_003bfb10;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_c0[0] = &DAT_003bfaf8;
  piVar11 = (int *)param_4;
  psVar8 = (short *)*piVar11;
  if ((char)psVar8[4] == '$') {
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar6 = FUN_00250058(DAT_0043dee0,0x10);
      puVar4 = (uint *)FUN_0024ad08(uVar6);
    }
    else {
      uVar7 = *DAT_003bfb10;
      puVar3 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar7 | 4;
      DAT_003bfb10 = puVar3;
      piVar11 = DAT_003be8e0;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar4;
        piVar11[1] = iVar9 + 1;
      }
      else {
        *puVar4 = uVar7 & 0xfffffffb;
      }
      lVar5 = FUN_003872a8(puVar4 + 2);
      if (lVar5 == 0) {
        FUN_002530e8(puVar4 + 2,0);
      }
    }
    FUN_00387398(puVar4 + 2,param_4);
    sVar2 = *apsStack_c0[0];
    *apsStack_c0[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) != 0) {
      return puVar4;
    }
    uVar7 = (uint)(ushort)apsStack_c0[0][2];
    psVar8 = apsStack_c0[0];
    goto LAB_0021e918;
  }
  lVar5 = 0;
  if (param_7 == 0) {
    lVar5 = FUN_0021bee8(param_2,param_3,param_4,apuStack_b0,apsStack_c0);
  }
  else {
    apuStack_b0[0] = (uint *)param_2;
    *psVar8 = *psVar8 + 1;
    DAT_003bfaf8 = DAT_003bfaf8 + -1;
    if (DAT_003bfaf8 == 0) {
      FUN_00250198(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
    }
    apsStack_c0[0] = (short *)*piVar11;
  }
  if (apsStack_c0[0] == &DAT_003bfaf8) {
    psVar8 = &DAT_003bfaf8;
    if (apuStack_b0[0] == (uint *)0x0) {
      if ((short)(DAT_003bfaf8 + -1) != 0) {
        DAT_003bfaf8 = DAT_003bfaf8 + -1;
        return DAT_0043df40;
      }
      uVar7 = (uint)DAT_003bfafc;
      DAT_003bfaf8 = 0;
      puVar4 = DAT_0043df40;
    }
    else {
      if ((short)(DAT_003bfaf8 + -1) != 0) {
        DAT_003bfaf8 = DAT_003bfaf8 + -1;
        return apuStack_b0[0];
      }
      uVar7 = (uint)DAT_003bfafc;
      DAT_003bfaf8 = 0;
      puVar4 = apuStack_b0[0];
    }
    goto LAB_0021e918;
  }
  if (((lVar5 == 1) && (apuStack_b0[0] != (uint *)0x0)) &&
     (puVar4 = (uint *)FUN_0024ee48(apuStack_b0[0],apsStack_c0,param_3), puVar4 != (uint *)0x0)) {
    sVar2 = *apsStack_c0[0];
    *apsStack_c0[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) != 0) {
      return puVar4;
    }
    uVar7 = (uint)(ushort)apsStack_c0[0][2];
    psVar8 = apsStack_c0[0];
    goto LAB_0021e918;
  }
  if ((param_6 != 0) && (iVar9 = *(int *)((int)param_1 + 0x30), iVar9 != 0)) {
    iVar10 = DAT_003bfae0;
    if (DAT_003bfae0 == 0) {
      iVar9 = *(int *)(iVar9 + 0x28);
      if (iVar9 != 0) {
        do {
          puVar4 = (uint *)FUN_00248c78(iVar9 + 8,apsStack_c0);
          if (puVar4 != (uint *)0x0) goto LAB_0021e6f4;
          iVar9 = *(int *)(iVar9 + 0x1c);
        } while (iVar9 != 0);
        goto LAB_0021e6f0;
      }
      puVar4 = (uint *)0x0;
    }
    else {
      do {
        puVar4 = (uint *)FUN_00248c78(iVar10 + 8,apsStack_c0);
        if (puVar4 != (uint *)0x0) goto LAB_0021e6f4;
        piVar1 = (int *)(iVar10 + 0x1c);
        iVar10 = *piVar1;
      } while (*piVar1 != 0);
LAB_0021e6f0:
      puVar4 = (uint *)0x0;
    }
LAB_0021e6f4:
    if (puVar4 != (uint *)0x0) {
      sVar2 = *apsStack_c0[0];
      *apsStack_c0[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) != 0) {
        return puVar4;
      }
      uVar7 = (uint)(ushort)apsStack_c0[0][2];
      psVar8 = apsStack_c0[0];
      goto LAB_0021e918;
    }
  }
  if ((apuStack_b0[0] == (uint *)0x0) || (((int)*apuStack_b0[0] >> 4 & 1U) != 1)) {
    if (param_3 != 0) {
      puVar4 = (uint *)FUN_0021e420(param_1,param_2,0,param_4,param_5,1,0);
      sVar2 = *apsStack_c0[0];
      *apsStack_c0[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) != 0) {
        return puVar4;
      }
      uVar7 = (uint)(ushort)apsStack_c0[0][2];
      psVar8 = apsStack_c0[0];
      goto LAB_0021e918;
    }
  }
  else {
    puVar4 = (uint *)(**(code **)(apuStack_b0[0][1] + 0x44))
                               ((int)apuStack_b0[0] + (int)*(short *)(apuStack_b0[0][1] + 0x40),
                                apuStack_b0[0],apsStack_c0);
    if (puVar4 != (uint *)0x0) {
      sVar2 = *apsStack_c0[0];
      *apsStack_c0[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) != 0) {
        return puVar4;
      }
      uVar7 = (uint)(ushort)apsStack_c0[0][2];
      psVar8 = apsStack_c0[0];
      goto LAB_0021e918;
    }
    puVar4 = (uint *)FUN_0024ee48(apuStack_b0[0],apsStack_c0,param_3);
    if (puVar4 != (uint *)0x0) {
      sVar2 = *apsStack_c0[0];
      *apsStack_c0[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) != 0) {
        return puVar4;
      }
      uVar7 = (uint)(ushort)apsStack_c0[0][2];
      psVar8 = apsStack_c0[0];
      goto LAB_0021e918;
    }
    if (param_3 != 0) {
      puVar4 = (uint *)FUN_0021e420(param_1,param_2,0,param_4,param_5,1,0);
      sVar2 = *apsStack_c0[0];
      *apsStack_c0[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) != 0) {
        return puVar4;
      }
      uVar7 = (uint)(ushort)apsStack_c0[0][2];
      psVar8 = apsStack_c0[0];
      goto LAB_0021e918;
    }
    uVar7 = 0;
    if ((*apuStack_b0[0] >> 0x19) - 0xc < 8) {
      uVar7 = (int)*apuStack_b0[0] >> 4 & 1;
    }
    if ((((uVar7 == 0) && (iVar9 = *(int *)((int)param_1 + 0x30), iVar9 != 0)) && (param_7 == 0)) &&
       ((iVar9 = *(int *)(iVar9 + 0x24), iVar10 = *(int *)(iVar9 + 4),
        lVar5 = (**(code **)(iVar10 + 0x24))(iVar9 + *(short *)(iVar10 + 0x20)), lVar5 != 0 &&
        (puVar4 = (uint *)FUN_00248c78(lVar5,apsStack_c0), puVar4 != (uint *)0x0)))) {
      sVar2 = *apsStack_c0[0];
      *apsStack_c0[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) != 0) {
        return puVar4;
      }
      uVar7 = (uint)(ushort)apsStack_c0[0][2];
      psVar8 = apsStack_c0[0];
      goto LAB_0021e918;
    }
    if (DAT_0043db0c != (code *)0x0) {
      (*DAT_0043db0c)(*piVar11 + 8);
    }
  }
  puVar4 = DAT_0043df40;
  sVar2 = *apsStack_c0[0];
  *apsStack_c0[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) != 0) {
    return puVar4;
  }
  uVar7 = (uint)(ushort)apsStack_c0[0][2];
  psVar8 = apsStack_c0[0];
LAB_0021e918:
  FUN_00250198(DAT_0043dee0,psVar8,uVar7 + 9);
  return puVar4;
}


// ==== FUN_0021e960 @ 0021e960 ====

void FUN_0021e960(undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*param_3 >> 0x19) - 0xc < 8) {
    uVar4 = (int)*param_3 >> 4 & 1;
  }
  if (uVar4 == 0) {
    lVar3 = (**(code **)(param_3[1] + 0x2c))((int)param_3 + (int)*(short *)(param_3[1] + 0x28));
    if (lVar3 == 0) {
      uVar4 = *param_3;
      if ((uVar4 >> 0x19 == 1) || (bVar1 = false, uVar4 >> 0x19 == 0x2a)) {
        bVar1 = ((int)uVar4 >> 4 & 1U) == 1;
      }
      if (bVar1) {
        if (uVar4 >> 0x19 != 1) {
          param_3 = (uint *)param_3[8];
        }
        uVar2 = FUN_0021bdb8(param_1,param_2,param_3 + 2);
        *param_4 = uVar2;
      }
    }
    else {
      *param_4 = param_3;
    }
  }
  else {
    *param_4 = param_3;
  }
  return;
}


// ==== FUN_0021ea58 @ 0021ea58 ====

void FUN_0021ea58(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  piVar17 = (int *)param_1;
  iVar5 = *piVar17;
  iVar19 = iVar5 - param_4;
  if (param_3 == 0) {
LAB_0021efc4:
    if (param_4 <= iVar5) {
      iVar5 = 1;
      if (0 < param_4) {
        iVar6 = *piVar17;
        while( true ) {
          iVar6 = iVar6 - iVar5;
          iVar5 = iVar5 + 1;
          iVar6 = *(int *)(iVar6 * 4 + piVar17[2]);
          iVar15 = *(int *)(iVar6 + 4);
          (**(code **)(iVar15 + 0x14))(iVar6 + *(short *)(iVar15 + 0x10));
          if (param_4 < iVar5) break;
          iVar6 = *piVar17;
        }
      }
      *piVar17 = *piVar17 - param_4;
    }
    iVar5 = *piVar17;
    *(undefined4 *)(iVar5 * 4 + piVar17[2]) = DAT_0043df40;
    *piVar17 = iVar5 + 1;
    iVar5 = piVar17[0x15];
    goto LAB_0021f048;
  }
  puVar13 = (uint *)param_3;
  uVar11 = *puVar13 >> 0x19;
  uVar12 = 0;
  uVar4 = (int)*puVar13 >> 4;
  if (uVar11 == 9) {
    uVar12 = uVar4 & 1;
  }
  if (uVar12 != 0) {
    uVar10 = *(undefined8 *)(piVar17 + 0xd);
    iVar5 = (*(code *)puVar13[8])(param_2,param_4);
    if (param_4 <= *piVar17) {
      iVar15 = 1;
      (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
      iVar6 = *piVar17;
      if (0 < param_4) {
        do {
          iVar6 = iVar6 - iVar15;
          iVar15 = iVar15 + 1;
          iVar6 = *(int *)(iVar6 * 4 + piVar17[2]);
          iVar7 = *(int *)(iVar6 + 4);
          (**(code **)(iVar7 + 0x14))(iVar6 + *(short *)(iVar7 + 0x10));
          iVar6 = *piVar17;
        } while (iVar15 <= param_4);
      }
      *(int *)((iVar6 - param_4) * 4 + piVar17[2]) = iVar5;
      *piVar17 = (*piVar17 + 1) - param_4;
    }
    *(undefined8 *)(piVar17 + 0xd) = uVar10;
    iVar5 = piVar17[0x15];
    goto LAB_0021f048;
  }
  uVar12 = 0;
  if (uVar11 - 0x2b < 3) {
    uVar12 = uVar4 & 1;
  }
  if (uVar12 == 0) {
    iVar5 = *piVar17;
    goto LAB_0021efc4;
  }
  iVar5 = piVar17[0xc];
  uVar14 = *(undefined8 *)(piVar17 + 0xd);
  piVar17[0xc] = (int)puVar13;
  uVar10 = (**(code **)(puVar13[1] + 0xac))((int)puVar13 + (int)*(short *)(puVar13[1] + 0xa8));
  uStack_b0 = (undefined4)uVar10;
  uStack_ac = (undefined4)((ulong)uVar10 >> 0x20);
  *(undefined8 *)(piVar17 + 0xd) = uVar10;
  piVar1 = *(int **)(piVar17[0xc] + 0x20);
  if ((*piVar1 >> 4 & 1U) == 1) {
    lVar8 = FUN_00387080(piVar1);
    bVar3 = false;
    if (lVar8 == 0x13) {
      lVar8 = FUN_003871c0(piVar1);
      bVar3 = lVar8 == 0;
    }
    if ((bVar3) && ((*(uint *)(*(int *)(piVar17[0xc] + 0x20) + 0x58) >> 0x12 & 3) == 0)) {
      iVar6 = *piVar17;
      goto LAB_0021ecbc;
    }
    uVar18 = *(undefined4 *)(piVar17[0xc] + 0x20);
    lVar8 = FUN_00387080(uVar18);
    bVar3 = false;
    if (lVar8 == 0x13) {
      lVar8 = FUN_003871c0(uVar18);
      bVar3 = lVar8 == 0;
    }
    if (bVar3) {
      if ((*(uint *)(*(int *)(piVar17[0xc] + 0x20) + 0x58) >> 0x12 & 3) == 2) {
        iVar6 = *piVar17;
        goto LAB_0021ecbc;
      }
      iVar6 = piVar17[9];
    }
    else {
      iVar6 = piVar17[9];
    }
    iVar15 = 0;
    iVar7 = (int)param_2;
    *(int *)(iVar6 * 4 + piVar17[0xb]) = iVar7;
    piVar17[9] = iVar6 + 1;
    (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
    iVar6 = *(int *)(piVar17[0xc] + 4);
    (**(code **)(iVar6 + 0xc))(piVar17[0xc] + (int)*(short *)(iVar6 + 8));
    iVar6 = *(int *)(piVar17[0xc] + 4);
    (**(code **)(iVar6 + 0xb4))(piVar17[0xc] + (int)*(short *)(iVar6 + 0xb0),&uStack_b0,param_2);
    iVar6 = *(int *)(piVar17[0xc] + 4);
    iVar7 = (**(code **)(iVar6 + 0x94))(piVar17[0xc] + (int)*(short *)(iVar6 + 0x90));
    iVar6 = iVar7;
    if (param_4 <= iVar7) {
      iVar6 = param_4;
    }
    bVar3 = 0 < iVar7;
    if (0 < iVar6) {
      iVar2 = piVar17[0xc];
      iVar16 = iVar15;
      while( true ) {
        iVar15 = iVar16 + 1;
        (**(code **)(*(int *)(iVar2 + 4) + 0xbc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0xb8),
                   *(undefined4 *)((*piVar17 - iVar16) * 4 + piVar17[2] + -4),iVar16);
        if (iVar6 <= iVar15) break;
        iVar2 = piVar17[0xc];
        iVar16 = iVar15;
      }
      bVar3 = iVar15 < iVar7;
    }
    if (bVar3) {
      iVar6 = piVar17[0xc];
      while( true ) {
        (**(code **)(*(int *)(iVar6 + 4) + 0xbc))
                  (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0xb8),DAT_0043df40,iVar15);
        if (iVar7 <= iVar15 + 1) break;
        iVar6 = piVar17[0xc];
        iVar15 = iVar15 + 1;
      }
      iVar6 = *piVar17;
    }
    else {
      iVar6 = *piVar17;
    }
    if (iVar6 < param_4) {
      iVar6 = piVar17[0xc];
    }
    else {
      iVar6 = 1;
      if (0 < param_4) {
        iVar15 = *piVar17;
        while( true ) {
          iVar15 = iVar15 - iVar6;
          iVar6 = iVar6 + 1;
          iVar15 = *(int *)(iVar15 * 4 + piVar17[2]);
          iVar7 = *(int *)(iVar15 + 4);
          (**(code **)(iVar7 + 0x14))(iVar15 + *(short *)(iVar7 + 0x10));
          if (param_4 < iVar6) break;
          iVar15 = *piVar17;
        }
      }
      *piVar17 = *piVar17 - param_4;
      iVar6 = piVar17[0xc];
    }
    uVar18 = 0;
    lVar8 = FUN_0023e5f0(*(undefined4 *)(iVar6 + 0x24));
    if (lVar8 != 0) {
      uVar18 = *(undefined4 *)((int)lVar8 + 0x48);
    }
    iVar6 = *(int *)(piVar17[0xc] + 4);
    uVar10 = (**(code **)(iVar6 + 0x9c))(piVar17[0xc] + (int)*(short *)(iVar6 + 0x98));
    iVar6 = piVar17[0xc];
    uVar9 = (**(code **)(*(int *)(iVar6 + 4) + 0xa4))
                      (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0xa0));
    FUN_00220828(param_1,uVar10,*(undefined4 *)(iVar6 + 0x20),uVar9,uVar18);
    iVar6 = *(int *)(piVar17[0xc] + 4);
    (**(code **)(iVar6 + 0xc4))(piVar17[0xc] + (int)*(short *)(iVar6 + 0xc0),&uStack_b0);
    iVar6 = *(int *)(piVar17[0xc] + 4);
    (**(code **)(iVar6 + 0x14))(piVar17[0xc] + (int)*(short *)(iVar6 + 0x10));
    iVar6 = *(int *)(piVar17[9] * 4 + piVar17[0xb] + -4);
    iVar15 = *(int *)(iVar6 + 4);
    (**(code **)(iVar15 + 0x14))(iVar6 + *(short *)(iVar15 + 0x10));
    piVar17[9] = piVar17[9] + -1;
  }
  else {
    iVar6 = *piVar17;
LAB_0021ecbc:
    if (param_4 <= iVar6) {
      iVar6 = 1;
      if (0 < param_4) {
        iVar15 = *piVar17;
        while( true ) {
          iVar15 = iVar15 - iVar6;
          iVar6 = iVar6 + 1;
          iVar15 = *(int *)(iVar15 * 4 + piVar17[2]);
          iVar7 = *(int *)(iVar15 + 4);
          (**(code **)(iVar7 + 0x14))(iVar15 + *(short *)(iVar7 + 0x10));
          if (param_4 < iVar6) break;
          iVar15 = *piVar17;
        }
      }
      *piVar17 = *piVar17 - param_4;
    }
    iVar6 = *piVar17;
    *(undefined4 *)(iVar6 * 4 + piVar17[2]) = DAT_0043df40;
    *piVar17 = iVar6 + 1;
    *(undefined4 *)(piVar17[0xc] + 0x20) = DAT_0043df40;
  }
  piVar17[0xc] = iVar5;
  *(undefined8 *)(piVar17 + 0xd) = uVar14;
  iVar5 = piVar17[0x15];
LAB_0021f048:
  iVar6 = *piVar17;
  if (((iVar5 != 0) && (iVar5 = iVar6 - iVar19, iVar19 < iVar6)) && (iVar5 <= iVar6)) {
    iVar19 = 1;
    if (0 < iVar5) {
      iVar6 = *piVar17;
      while( true ) {
        iVar6 = iVar6 - iVar19;
        iVar19 = iVar19 + 1;
        iVar6 = *(int *)(iVar6 * 4 + piVar17[2]);
        iVar15 = *(int *)(iVar6 + 4);
        (**(code **)(iVar15 + 0x14))(iVar6 + *(short *)(iVar15 + 0x10));
        if (iVar5 < iVar19) break;
        iVar6 = *piVar17;
      }
    }
    *piVar17 = *piVar17 - iVar5;
  }
  return;
}


// ==== FUN_0021f0f8 @ 0021f0f8 ====

void FUN_0021f0f8(void)

{
  FUN_00251a60();
  return;
}


// ==== FUN_0021f120 @ 0021f120 ====

void FUN_0021f120(int param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  short *apsStack_40 [4];
  
  if (*(int *)(param_1 + 0x54) != 0) {
    apsStack_40[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(*(int *)(param_1 + 0x54),apsStack_40);
    iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 4);
    (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 0x54) + (int)*(short *)(iVar2 + 0x10));
    *(undefined4 *)(param_1 + 0x54) = 0;
    sVar1 = *apsStack_40[0];
    *apsStack_40[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
    }
  }
  FUN_00251a88(param_2);
  return;
}


// ==== FUN_0021f1c8 @ 0021f1c8 ====

/* Strings referenciadas:
     "center"
     "right"
     "Error"
     "String"
     "Sound"
     "Array"
     "MovieClip"
     "TextFormat"
     "Color" */

undefined8
FUN_0021f1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
            int param_6)

{
  bool bVar1;
  short sVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  short *apsStack_100 [4];
  undefined1 auStack_f0 [16];
  short *apsStack_e0 [4];
  int iStack_d0;
  int iStack_cc;
  uint *puStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  iStack_cc = param_6;
  puStack_c8 = (uint *)FUN_0021e420();
  piVar19 = (int *)param_1;
  if ((((int)*puStack_c8 >> 4 & 1U) != 1) || (lVar13 = FUN_0024f538(puStack_c8), lVar13 == 0)) {
    if (param_5 < 1) {
      return 0;
    }
    if (*piVar19 < param_5) {
      return 0;
    }
    iVar10 = 1;
    if (0 < param_5) {
      iVar12 = *piVar19;
      while( true ) {
        iVar12 = iVar12 - iVar10;
        iVar10 = iVar10 + 1;
        iVar12 = *(int *)(iVar12 * 4 + piVar19[2]);
        iVar5 = *(int *)(iVar12 + 4);
        (**(code **)(iVar5 + 0x14))(iVar12 + *(short *)(iVar5 + 0x10));
        if (param_5 < iVar10) break;
        iVar12 = *piVar19;
      }
    }
    *piVar19 = *piVar19 - param_5;
    return 0;
  }
  lVar13 = FUN_00360838(*param_4 + 8,0x3fcfd0);
  if (lVar13 == 0) {
    uVar14 = FUN_0024fa38(DAT_0043dee4,0x2c);
    uVar14 = FUN_0024a2c8(uVar14,param_2);
    goto LAB_0021ff84;
  }
  lVar13 = FUN_00360838(*param_4 + 8,0x3fcfd8);
  if (lVar13 == 0) {
    uVar14 = FUN_0024fa38(DAT_0043dee4,0x2c);
    uVar14 = FUN_002330d8(uVar14);
    if (param_5 == 1) {
      puVar11 = *(uint **)(*piVar19 * 4 + piVar19[2] + -4);
      uVar16 = *puVar11;
      uVar17 = 0;
      if (uVar16 >> 0x19 == 7) {
        uVar17 = (int)uVar16 >> 4 & 1;
      }
      if (uVar17 != 0) {
        lVar13 = FUN_0024c300(puVar11);
        iVar10 = *piVar19;
        if (lVar13 < 0) goto LAB_0021f310;
LAB_0021f380:
        iVar10 = FUN_0024c300(*(undefined4 *)(iVar10 * 4 + piVar19[2] + -4));
        FUN_002333e8(uVar14,iVar10 + -1,DAT_0043df40);
        goto LAB_0021ff84;
      }
      iVar10 = *piVar19;
LAB_0021f310:
      puVar11 = *(uint **)(iVar10 * 4 + piVar19[2] + -4);
      uVar16 = *puVar11;
      uVar17 = 0;
      if (uVar16 >> 0x19 == 6) {
        uVar17 = (int)uVar16 >> 4 & 1;
      }
      if (uVar17 != 0) {
        uVar22 = FUN_0024c410(puVar11);
        uVar15 = FUN_00291f58(uVar22);
        uVar15 = FUN_0029dea8(uVar15,0x3ff0000000000000);
        lVar13 = FUN_002919f8(uVar15,0);
        if (lVar13 == 0) {
          iVar10 = *piVar19;
          goto LAB_0021f380;
        }
      }
    }
    if (0 < param_5) {
      iVar10 = *piVar19;
      iVar12 = 0;
      while( true ) {
        FUN_002333e8(uVar14,iVar12,*(undefined4 *)((iVar10 - iVar12) * 4 + piVar19[2] + -4));
        if (param_5 <= iVar12 + 1) break;
        iVar10 = *piVar19;
        iVar12 = iVar12 + 1;
      }
    }
LAB_0021ff84:
    iVar10 = *(int *)((int)uVar14 + 4);
  }
  else {
    lVar13 = FUN_00360838(*param_4 + 8,0x3fcec0);
    puVar11 = DAT_003bfb10;
    if (lVar13 != 0) {
      lVar13 = FUN_00360838(*param_4 + 8,0x3fd020);
      if (lVar13 == 0) {
        uVar14 = FUN_0024fa38(DAT_0043dee4,0x20);
        if (0 < param_5) {
          FUN_0024c300(*(undefined4 *)(*piVar19 * 4 + piVar19[2] + -4));
        }
        if (1 < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -1) * 4 + piVar19[2] + -4));
        }
        if (2 < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -2) * 4 + piVar19[2] + -4));
        }
        if (3 < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -3) * 4 + piVar19[2] + -4));
        }
        if (4 < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -4) * 4 + piVar19[2] + -4));
        }
        if (5 < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -5) * 4 + piVar19[2] + -4));
        }
        if (6 < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -6) * 4 + piVar19[2] + -4));
        }
        FUN_00386ec8(uVar14,0x1d);
        iVar10 = (int)uVar14;
        *(undefined **)(iVar10 + 4) = &DAT_003e1f88;
        FUN_00248678(iVar10 + 8,8);
        *(undefined1 *)(iVar10 + 0x1c) = 0;
        uVar16 = *(uint *)(iVar10 + 0x1c);
        puVar9 = &DAT_003e1870;
        goto LAB_0021fd64;
      }
      lVar13 = FUN_00360838(*param_4 + 8,0x3fd070);
      if (lVar13 == 0) {
        uVar14 = FUN_0024fa38(DAT_0043dee4,0x40);
        uStack_c4 = DAT_0043df40;
        if (0 < param_5) {
          uStack_c4 = *(undefined4 *)(*piVar19 * 4 + piVar19[2] + -4);
        }
        if (param_5 < 2) {
          uVar22 = 0xbf800000;
        }
        else {
          uVar22 = FUN_0024c410(*(undefined4 *)((*piVar19 + -1) * 4 + piVar19[2] + -4));
        }
        if (param_5 < 3) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = FUN_0024c300(*(undefined4 *)((*piVar19 + -2) * 4 + piVar19[2] + -4));
        }
        lVar13 = -1;
        if (3 < param_5) {
          lVar13 = FUN_0024c300(*(undefined4 *)((*piVar19 + -3) * 4 + piVar19[2] + -4));
        }
        lVar21 = -1;
        if (4 < param_5) {
          lVar21 = FUN_0024c300(*(undefined4 *)((*piVar19 + -4) * 4 + piVar19[2] + -4));
        }
        lVar20 = -1;
        if (5 < param_5) {
          lVar20 = FUN_0024c300(*(undefined4 *)((*piVar19 + -5) * 4 + piVar19[2] + -4));
        }
        if (6 < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -6) * 4 + piVar19[2] + -4));
        }
        if (7 < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -7) * 4 + piVar19[2] + -4));
        }
        uVar4 = DAT_0043df40;
        if (8 < param_5) {
          uVar4 = *(undefined4 *)((*piVar19 + -8) * 4 + piVar19[2] + -4);
        }
        if (param_5 < 10) {
          uStack_c0 = 0xffffffff;
        }
        else {
          uStack_c0 = FUN_0024c300(*(undefined4 *)((*piVar19 + -9) * 4 + piVar19[2] + -4));
        }
        if (param_5 < 0xb) {
          uStack_bc = 0xffffffff;
        }
        else {
          uStack_bc = FUN_0024c300(*(undefined4 *)((*piVar19 + -10) * 4 + piVar19[2] + -4));
        }
        if (param_5 < 0xc) {
          uStack_b8 = 0xffffffff;
        }
        else {
          uStack_b8 = FUN_0024c300(*(undefined4 *)((*piVar19 + -0xb) * 4 + piVar19[2] + -4));
        }
        if (0xc < param_5) {
          FUN_0024c300(*(undefined4 *)((*piVar19 + -0xc) * 4 + piVar19[2] + -4));
        }
        FUN_00386ec8(uVar14,0x24);
        iVar10 = (int)uVar14;
        *(undefined **)(iVar10 + 4) = &DAT_003e1f88;
        FUN_00248678(iVar10 + 8,8);
        *(undefined1 *)(iVar10 + 0x1c) = 0;
        *(undefined **)(iVar10 + 4) = &DAT_003e1e78;
        *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfffffcff;
        FUN_003872c0(iVar10 + 0x20);
        *(undefined4 *)(iVar10 + 0x24) = uVar22;
        *(undefined4 *)(iVar10 + 0x28) = uVar8;
        *(undefined4 *)(iVar10 + 0x30) = 2;
        if (lVar13 == 0) {
          *(undefined4 *)(iVar10 + 0x30) = 0x10002;
        }
        if (lVar13 == 1) {
          *(uint *)(iVar10 + 0x30) = *(uint *)(iVar10 + 0x30) | 0x10001;
        }
        if (lVar21 == 0) {
          *(uint *)(iVar10 + 0x30) = *(uint *)(iVar10 + 0x30) | 0x100000;
        }
        if (lVar21 == 1) {
          *(uint *)(iVar10 + 0x30) = *(uint *)(iVar10 + 0x30) | 0x100010;
        }
        if (lVar20 == 0) {
          *(uint *)(iVar10 + 0x30) = *(uint *)(iVar10 + 0x30) | 0x1000000;
        }
        if (lVar20 == 1) {
          *(uint *)(iVar10 + 0x30) = *(uint *)(iVar10 + 0x30) | 0x1000100;
        }
        *(undefined4 *)(iVar10 + 0x34) = uStack_b8;
        *(undefined4 *)(iVar10 + 0x38) = uStack_c0;
        *(undefined4 *)(iVar10 + 0x3c) = uStack_bc;
        lVar13 = FUN_003871c0(uStack_c4);
        if (lVar13 == 0) {
          FUN_0024c6d0(uStack_c4,iVar10 + 0x20);
        }
        lVar13 = FUN_003871c0(uVar4);
        if (lVar13 == 0) {
          FUN_003872c0(auStack_f0);
          FUN_0024c6d0(uVar4,auStack_f0);
          lVar13 = FUN_00387458(auStack_f0,0x3fcd90);
          if (lVar13 == 0) {
            lVar13 = FUN_00387458(auStack_f0,0x3fcd98);
            if (lVar13 == 0) {
              lVar13 = FUN_00387458(auStack_f0,0x3fcda0);
              uVar22 = 2;
              if (lVar13 == 0) {
                lVar13 = FUN_00387458(auStack_f0,0x3fcda8);
                uVar22 = 3;
                if (lVar13 != 0) {
                  *(undefined4 *)(iVar10 + 0x2c) = 1;
                  goto LAB_0021fb8c;
                }
              }
              *(undefined4 *)(iVar10 + 0x2c) = uVar22;
            }
            else {
              *(undefined4 *)(iVar10 + 0x2c) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar10 + 0x2c) = 0;
          }
LAB_0021fb8c:
          FUN_00387328(auStack_f0,2);
        }
        else {
          *(undefined4 *)(iVar10 + 0x2c) = 3;
        }
        *(undefined **)(iVar10 + 4) = &DAT_003e18f8;
      }
      else {
        lVar13 = FUN_00360838(*param_4 + 8,0x3fd460);
        if (lVar13 == 0) {
          puVar11 = *(uint **)(*piVar19 * 4 + piVar19[2] + -4);
          uVar16 = *puVar11 >> 0x19;
          if ((uVar16 == 1) || (bVar1 = false, uVar16 == 0x2a)) {
            bVar1 = ((int)*puVar11 >> 4 & 1U) == 1;
          }
          if (bVar1) {
            if (*puVar11 >> 0x19 != 1) {
              puVar11 = (uint *)puVar11[8];
            }
            puVar11 = (uint *)FUN_0021bdb8(param_2,0,puVar11 + 2);
          }
          uVar14 = FUN_0024fa38(DAT_0043dee4,0x24);
          uVar14 = FUN_002507f0(uVar14,puVar11);
        }
        else {
          lVar13 = FUN_00360838(*param_4 + 8,0x3fd028);
          if (lVar13 == 0) {
            uVar14 = FUN_0024fa38(DAT_0043dee4,0x20);
            FUN_00386ec8(uVar14,0x1e);
            iVar10 = (int)uVar14;
            *(undefined **)(iVar10 + 4) = &DAT_003e1f88;
            FUN_00248678(iVar10 + 8,8);
            *(undefined1 *)(iVar10 + 0x1c) = 0;
            uVar16 = *(uint *)(iVar10 + 0x1c);
            puVar9 = &DAT_003e1430;
          }
          else {
            lVar13 = FUN_00360838(*param_4 + 8,0x3fd468);
            if (lVar13 != 0) {
              lVar13 = FUN_00360838(*param_4 + 8,0x3fcdb0);
              if (lVar13 == 0) {
                if (param_5 == 1) {
                  apsStack_100[0] = &DAT_003bfaf8;
                  DAT_003bfaf8 = DAT_003bfaf8 + 1;
                  FUN_0024c6d0(*(undefined4 *)(*piVar19 * 4 + piVar19[2] + -4),apsStack_100);
                  uVar14 = FUN_0024fa38(DAT_0043dee4,0x28);
                  apsStack_e0[0] = apsStack_100[0];
                  *apsStack_100[0] = *apsStack_100[0] + 1;
                  FUN_00386ec8(uVar14,0x29);
                  iVar10 = (int)uVar14;
                  *(undefined **)(iVar10 + 4) = &DAT_003e1f88;
                  FUN_00248678(iVar10 + 8,8);
                  *(undefined1 *)(iVar10 + 0x1c) = 0;
                  *(undefined **)(iVar10 + 4) = &DAT_003e1320;
                  *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfffffcff;
                  FUN_00387308(iVar10 + 0x20,apsStack_e0);
                  FUN_003872e0(iVar10 + 0x24,0x3fcdb0);
                  FUN_00387328(apsStack_e0,2);
                  goto LAB_0021fe74;
                }
                uVar14 = FUN_0024fa38(DAT_0043dee4,0x28);
                FUN_00386ec8(uVar14,0x29);
                iVar10 = (int)uVar14;
                *(undefined **)(iVar10 + 4) = &DAT_003e1f88;
                FUN_00248678(iVar10 + 8,8);
                *(undefined1 *)(iVar10 + 0x1c) = 0;
                *(undefined **)(iVar10 + 4) = &DAT_003e1320;
                *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfffffcff;
                FUN_003872e0(iVar10 + 0x20,0x3fcdb0);
                FUN_003872e0(iVar10 + 0x24,0x3fcdb0);
                iVar10 = *(int *)(iVar10 + 4);
                goto LAB_0021ff88;
              }
              uVar14 = FUN_0024fa38(DAT_0043dee4,0x20);
              FUN_00386ec8(uVar14,0x1b);
              iVar10 = (int)uVar14;
              *(undefined **)(iVar10 + 4) = &DAT_003e1f88;
              FUN_00248678(iVar10 + 8,8);
              *(undefined1 *)(iVar10 + 0x1c) = 0;
              *(undefined **)(iVar10 + 4) = &DAT_003e1e78;
              *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfffffcff;
              goto LAB_0021ff84;
            }
            uVar14 = FUN_0024fa38(DAT_0043dee4,0x20);
            FUN_00386ec8(uVar14,0x20);
            iVar10 = (int)uVar14;
            *(undefined **)(iVar10 + 4) = &DAT_003e1f88;
            FUN_00248678(iVar10 + 8,8);
            *(undefined1 *)(iVar10 + 0x1c) = 0;
            uVar16 = *(uint *)(iVar10 + 0x1c);
            puVar9 = &DAT_003e13a8;
          }
LAB_0021fd64:
          *(undefined **)((int)uVar14 + 4) = puVar9;
          *(uint *)((int)uVar14 + 0x1c) = uVar16 & 0xfffffcff;
        }
      }
      goto LAB_0021ff84;
    }
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    apsStack_100[0] = &DAT_003bfaf8;
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar14 = FUN_00250058(DAT_0043dee0,0x10);
      puVar11 = (uint *)FUN_0024ad08(uVar14);
    }
    else {
      uVar16 = *DAT_003bfb10;
      puVar7 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar16 | 4;
      DAT_003bfb10 = puVar7;
      piVar6 = DAT_003be8e0;
      iVar10 = DAT_003be8e0[1];
      if (iVar10 < *DAT_003be8e0) {
        *(uint **)(iVar10 * 4 + DAT_003be8e0[2]) = puVar11;
        piVar6[1] = iVar10 + 1;
      }
      else {
        *puVar11 = uVar16 & 0xfffffffb;
      }
      lVar13 = FUN_003872a8(puVar11 + 2);
      if (lVar13 == 0) {
        FUN_002530e8(puVar11 + 2,0);
      }
    }
    if (param_5 == 1) {
      FUN_0024c6d0(*(undefined4 *)(*piVar19 * 4 + piVar19[2] + -4),apsStack_100);
    }
    *apsStack_100[0] = *apsStack_100[0] + 1;
    psVar3 = (short *)puVar11[2];
    sVar2 = *psVar3;
    *psVar3 = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
    }
    puVar11[2] = (uint)apsStack_100[0];
    puStack_c8 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43de8c);
    uVar14 = FUN_0024fa38(DAT_0043dee4,0x24);
    FUN_00386ec8(uVar14,0x2a);
    iVar10 = (int)uVar14;
    *(undefined **)(iVar10 + 4) = &DAT_003e1f88;
    FUN_00248678(iVar10 + 8,8);
    *(undefined1 *)(iVar10 + 0x1c) = 0;
    *(undefined **)(iVar10 + 4) = &DAT_003e1980;
    *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfffffcff;
    FUN_00385f80(uVar14,puVar11);
LAB_0021fe74:
    sVar2 = *apsStack_100[0];
    *apsStack_100[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) != 0) goto LAB_0021ff84;
    FUN_00250198(DAT_0043dee0,apsStack_100[0],(ushort)apsStack_100[0][2] + 9);
    iVar10 = *(int *)((int)uVar14 + 4);
  }
LAB_0021ff88:
  iVar12 = (int)uVar14;
  (**(code **)(iVar10 + 0xc))(iVar12 + *(short *)(iVar10 + 8));
  iVar10 = (**(code **)(puStack_c8[1] + 0x24))
                     ((int)puStack_c8 + (int)*(short *)(puStack_c8[1] + 0x20));
  puVar11 = *(uint **)(iVar10 + 0xc);
  if (puVar11 == (uint *)0x0) {
    puVar11 = (uint *)FUN_0024fa38(DAT_0043dee4,0x20);
    FUN_00386ec8(puVar11,0x1c);
    puVar11[1] = (uint)&DAT_003e1f88;
    FUN_00248678(puVar11 + 2,8);
    puVar11[1] = (uint)&DAT_003e1f00;
    *puVar11 = *puVar11 & 0xffffffdf;
    puVar11[7] = (uint)puStack_c8;
    if (puStack_c8 != (uint *)0x0) {
      (**(code **)(puStack_c8[1] + 0xc))((int)puStack_c8 + (int)*(short *)(puStack_c8[1] + 8));
    }
    if (puVar11 == (uint *)0x0) {
      iVar5 = *(int *)(iVar10 + 0xc);
    }
    else {
      (**(code **)(puVar11[1] + 0xc))((int)puVar11 + (int)*(short *)(puVar11[1] + 8));
      iVar5 = *(int *)(iVar10 + 0xc);
    }
    if (iVar5 == 0) {
      *(uint **)(iVar10 + 0xc) = puVar11;
    }
    else {
      (**(code **)(*(int *)(iVar5 + 4) + 0x14))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x10));
      *(uint **)(iVar10 + 0xc) = puVar11;
    }
    iVar10 = *(int *)(iVar12 + 4);
  }
  else {
    iVar10 = *(int *)(iVar12 + 4);
  }
  (**(code **)(iVar10 + 0x3c))(iVar12 + *(short *)(iVar10 + 0x38),1);
  *(uint *)(iVar12 + 0x1c) = *(uint *)(iVar12 + 0x1c) | 0x200;
  if (puVar11 != (uint *)0x0) {
    (**(code **)(puVar11[1] + 0xc))((int)puVar11 + (int)*(short *)(puVar11[1] + 8));
  }
  iVar10 = *(int *)(iVar12 + 0x10);
  if (iVar10 == 0) {
    *(uint **)(iVar12 + 0x10) = puVar11;
  }
  else {
    (**(code **)(*(int *)(iVar10 + 4) + 0x14))(iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x10));
    *(uint **)(iVar12 + 0x10) = puVar11;
  }
  uVar17 = *puStack_c8 >> 0x19;
  uVar18 = 0;
  uVar16 = (int)*puStack_c8 >> 4;
  if (uVar17 == 0x1b) {
    uVar18 = uVar16 & 1;
  }
  if (uVar18 == 0) {
    uVar18 = 0;
    if (uVar17 - 0x2b < 3) {
      uVar18 = uVar16 & 1;
    }
    if (uVar18 == 0) goto LAB_00220154;
  }
  uVar15 = FUN_00250618(puStack_c8,&iStack_d0);
  if (0 < iStack_d0) {
    FUN_00250590(uVar14,uVar15);
  }
LAB_00220154:
  if (iStack_cc != 0) {
    iVar10 = piVar19[9];
    *(int *)(iVar10 * 4 + piVar19[0xb]) = iVar12;
    piVar19[9] = iVar10 + 1;
    (**(code **)(*(int *)(iVar12 + 4) + 0xc))(iVar12 + *(short *)(*(int *)(iVar12 + 4) + 8));
    FUN_0021ea58(param_1,uVar14,puStack_c8,param_5);
    if (0 < *piVar19) {
      iVar10 = *(int *)(*piVar19 * 4 + piVar19[2] + -4);
      iVar5 = *(int *)(iVar10 + 4);
      (**(code **)(iVar5 + 0x14))(iVar10 + *(short *)(iVar5 + 0x10));
      *piVar19 = *piVar19 + -1;
    }
    iVar10 = *(int *)(piVar19[9] * 4 + piVar19[0xb] + -4);
    iVar5 = *(int *)(iVar10 + 4);
    (**(code **)(iVar5 + 0x14))(iVar10 + *(short *)(iVar5 + 0x10));
    piVar19[9] = piVar19[9] + -1;
  }
  *(uint *)(iVar12 + 0x1c) = *(uint *)(iVar12 + 0x1c) & 0xfffffdff;
  return uVar14;
}


// ==== FUN_002202c8 @ 002202c8 ====

void FUN_002202c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  piVar12 = (int *)param_1;
  puVar4 = *(uint **)(*piVar12 * 4 + piVar12[2] + -4);
  uVar10 = *puVar4 >> 0x19;
  if ((uVar10 == 1) || (bVar1 = false, uVar10 == 0x2a)) {
    bVar1 = ((int)*puVar4 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    if (*puVar4 >> 0x19 != 1) {
      puVar4 = (uint *)puVar4[8];
    }
    puVar4 = (uint *)FUN_0021e420(param_1,param_2,param_3,puVar4 + 2,1,1,0);
  }
  if (0 < *piVar12) {
    *piVar12 = *piVar12 + -1;
  }
  iVar11 = *piVar12;
  *(undefined4 *)(iVar11 * 4 + piVar12[2]) = DAT_0043df40;
  *piVar12 = iVar11 + 1;
  lVar6 = (**(code **)(puVar4[1] + 0x24))((int)puVar4 + (int)*(short *)(puVar4[1] + 0x20));
  if (lVar6 != 0) {
LAB_002203d0:
    lVar7 = FUN_00248ee0(lVar6);
    if (lVar7 != 0) {
      iVar11 = *(int *)lVar7;
      do {
        bVar1 = false;
        if (*(short *)(iVar11 + 2) == *(short *)(DAT_0043dc18 + 2)) {
          if (iVar11 != DAT_0043dc18) {
            lVar8 = FUN_00360838(iVar11 + 8,DAT_0043dc18 + 8);
            bVar1 = false;
            if (lVar8 != 0) goto LAB_00220420;
          }
          bVar1 = true;
        }
LAB_00220420:
        if (!bVar1) {
          iVar11 = *(int *)lVar7;
          bVar1 = false;
          if (*(short *)(iVar11 + 2) == *(short *)(DAT_0043ddf8 + 2)) {
            if (iVar11 != DAT_0043ddf8) {
              lVar8 = FUN_00360838(iVar11 + 8,DAT_0043ddf8 + 8);
              bVar1 = false;
              if (lVar8 != 0) goto LAB_00220460;
            }
            bVar1 = true;
          }
LAB_00220460:
          puVar5 = DAT_003bfb10;
          if (!bVar1) {
            if (DAT_003bfb10 == (uint *)0x0) {
              uVar9 = FUN_00250058(DAT_0043dee0,0x10);
              puVar5 = (uint *)FUN_0024ad08(uVar9);
            }
            else {
              uVar10 = *DAT_003bfb10;
              puVar3 = (uint *)DAT_003bfb10[3];
              *DAT_003bfb10 = uVar10 | 4;
              DAT_003bfb10 = puVar3;
              piVar2 = DAT_003be8e0;
              iVar11 = DAT_003be8e0[1];
              if (iVar11 < *DAT_003be8e0) {
                *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar5;
                piVar2[1] = iVar11 + 1;
              }
              else {
                *puVar5 = uVar10 & 0xfffffffb;
              }
              lVar8 = FUN_003872a8(puVar5 + 2);
              if (lVar8 == 0) {
                FUN_002530e8(puVar5 + 2,0);
              }
            }
            FUN_00387398(puVar5 + 2,lVar7);
            iVar11 = *piVar12;
            *(uint **)(iVar11 * 4 + piVar12[2]) = puVar5;
            *piVar12 = iVar11 + 1;
            (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
          }
        }
        lVar7 = FUN_00248f48(lVar6,lVar7);
        if (lVar7 == 0) goto code_r0x00220564;
        iVar11 = *(int *)lVar7;
      } while( true );
    }
    iVar11 = *(int *)((int)lVar6 + 8);
    goto LAB_00220568;
  }
  uVar10 = puVar4[1];
LAB_00220594:
  (**(code **)(uVar10 + 0x14))((int)puVar4 + (int)*(short *)(uVar10 + 0x10));
  return;
code_r0x00220564:
  iVar11 = *(int *)((int)lVar6 + 8);
LAB_00220568:
  lVar6 = 0;
  if (iVar11 != 0) {
    lVar6 = (**(code **)(*(int *)(iVar11 + 4) + 0x24))
                      (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x20));
  }
  if (lVar6 == 0) goto code_r0x00220590;
  goto LAB_002203d0;
code_r0x00220590:
  uVar10 = puVar4[1];
  goto LAB_00220594;
}


// ==== FUN_002205d0 @ 002205d0 ====

uint * FUN_002205d0(uint *param_1,undefined8 param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  short *apsStack_60 [4];
  
  puVar7 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar9 = FUN_00250058(DAT_0043dee0,0x10);
    puVar7 = (uint *)FUN_0024ad08(uVar9);
  }
  else {
    uVar3 = *DAT_003bfb10;
    puVar10 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar3 | 4;
    DAT_003bfb10 = puVar10;
    piVar6 = DAT_003be8e0;
    iVar4 = DAT_003be8e0[1];
    if (iVar4 < *DAT_003be8e0) {
      *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar6[1] = iVar4 + 1;
    }
    else {
      *puVar7 = uVar3 & 0xfffffffb;
    }
    lVar8 = FUN_003872a8(puVar7 + 2);
    if (lVar8 == 0) {
      FUN_002530e8(puVar7 + 2,0);
    }
  }
  puVar10 = (uint *)param_2;
  uVar3 = *puVar10;
  bVar1 = false;
  if ((uVar3 >> 0x19 == 1) || (uVar3 >> 0x19 == 0x2a)) {
    bVar1 = ((int)uVar3 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    if (uVar3 >> 0x19 != 1) {
      puVar10 = (uint *)puVar10[8];
    }
    *(short *)puVar10[2] = *(short *)puVar10[2] + 1;
    psVar5 = (short *)puVar7[2];
    sVar2 = *psVar5;
    *psVar5 = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar5,(ushort)psVar5[2] + 9);
    }
    puVar7[2] = puVar10[2];
  }
  else {
    FUN_0024c6d0(param_2,puVar7 + 2);
  }
  uVar3 = *param_1;
  bVar1 = false;
  if ((uVar3 >> 0x19 == 1) || (uVar3 >> 0x19 == 0x2a)) {
    bVar1 = ((int)uVar3 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    if (uVar3 >> 0x19 != 1) {
      param_1 = (uint *)param_1[8];
    }
    FUN_00252d28(puVar7 + 2,param_1 + 2);
  }
  else {
    apsStack_60[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_1,apsStack_60);
    FUN_00252d28(puVar7 + 2,apsStack_60);
    sVar2 = *apsStack_60[0];
    *apsStack_60[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
  }
  return puVar7;
}


// ==== FUN_00220828 @ 00220828 ====

byte * FUN_00220828(undefined8 param_1,byte *param_2,undefined8 param_3,int param_4,
                   undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbStack_90;
  int iStack_8c;
  int iStack_88;
  byte *pbStack_84;
  undefined4 uStack_80;
  char cStack_7c;
  undefined4 uStack_78;
  
  piVar6 = (int *)param_1;
  iVar7 = (int)param_3;
  if (param_4 == -1) {
    iVar8 = piVar6[9];
    *(int *)(iVar8 * 4 + piVar6[0xb]) = iVar7;
    piVar6[9] = iVar8 + 1;
    (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
  }
  iStack_88 = 0;
  pbStack_84 = (byte *)0x0;
  pbStack_90 = param_2;
  iStack_8c = iVar7;
  uStack_80 = FUN_0021e420(param_1,param_3,0,0x43de98,1,1,0);
  iVar7 = piVar6[0x16];
  iVar8 = piVar6[0x15];
  piVar6[0x16] = *piVar6;
  cStack_7c = '\0';
  uStack_78 = param_5;
  while (iVar8 == 0) {
    if ((pbStack_84 != (byte *)0x0) && (pbStack_90 == pbStack_84)) {
      (**(code **)(*(int *)(iStack_88 + 4) + 0x14))
                (iStack_88 + *(short *)(*(int *)(iStack_88 + 4) + 0x10));
      iStack_88 = 0;
      pbStack_84 = (byte *)0x0;
    }
    iVar8 = DAT_0043df40;
    bVar1 = *pbStack_90;
    pbStack_90 = pbStack_90 + 1;
    if (cStack_7c != '\0') break;
    if ((-1 < param_4) && (param_4 < (int)pbStack_90 - (int)param_2)) {
      iVar9 = *piVar6;
      piVar5 = (int *)(iVar9 * 4 + piVar6[2]);
LAB_00220a2c:
      *piVar5 = DAT_0043df40;
      *piVar6 = iVar9 + 1;
      iVar9 = *(int *)(iVar8 + 4);
      (**(code **)(iVar9 + 0xc))(iVar8 + *(short *)(iVar9 + 8));
      break;
    }
    if (bVar1 == 0) {
      if (-1 < param_4) {
        iVar9 = *piVar6;
        piVar5 = (int *)(iVar9 * 4 + piVar6[2]);
        goto LAB_00220a2c;
      }
      break;
    }
    (*(code *)(&PTR_LAB_003be960)[bVar1])(param_1,&pbStack_90);
    iVar8 = piVar6[0x15];
  }
  iVar8 = *piVar6;
  if (param_4 < 0) {
    iVar9 = iVar8 - piVar6[0x16];
    if ((iVar8 <= piVar6[0x16]) || (iVar8 < iVar9)) goto LAB_00220ac8;
    iVar8 = 1;
    if (0 < iVar9) {
      iVar4 = *piVar6;
      while( true ) {
        iVar4 = iVar4 - iVar8;
        iVar8 = iVar8 + 1;
        iVar4 = *(int *)(iVar4 * 4 + piVar6[2]);
        iVar2 = *(int *)(iVar4 + 4);
        (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
        if (iVar9 < iVar8) break;
        iVar4 = *piVar6;
      }
    }
LAB_00220ab8:
    iVar4 = *piVar6 - iVar9;
  }
  else {
    if ((iVar8 <= piVar6[0x16]) || (iVar9 = (iVar8 - piVar6[0x16]) + -1, iVar8 < iVar9))
    goto LAB_00220ac8;
    iVar8 = 1;
    if (iVar9 < 1) goto LAB_00220ab8;
    iVar4 = *piVar6;
    do {
      iVar4 = iVar4 - iVar8;
      iVar8 = iVar8 + 1;
      iVar4 = *(int *)(iVar4 * 4 + piVar6[2]);
      iVar2 = *(int *)(iVar4 + 4);
      (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
      iVar4 = *piVar6;
    } while (iVar8 <= iVar9);
    iVar4 = iVar4 - iVar9;
  }
  *piVar6 = iVar4;
LAB_00220ac8:
  piVar6[0x16] = iVar7;
  if (param_4 == -1) {
    iVar7 = *(int *)(piVar6[9] * 4 + piVar6[0xb] + -4);
    iVar8 = *(int *)(iVar7 + 4);
    (**(code **)(iVar8 + 0x14))(iVar7 + *(short *)(iVar8 + 0x10));
    piVar6[9] = piVar6[9] + -1;
  }
  bVar3 = false;
  if (*piVar6 == 0) {
    bVar3 = true;
  }
  else if ((*piVar6 == 1) && (bVar3 = true, *(int *)piVar6[2] != DAT_0043df40)) {
    bVar3 = false;
  }
  if ((bVar3) && (*(int *)(DAT_003be8e0 + 4) != 0)) {
    FUN_00252b10();
  }
  return pbStack_90;
}


// ==== FUN_00220b88 @ 00220b88 ====

void FUN_00220b88(int *param_1)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  byte *pbVar5;
  byte abStack_80 [16];
  byte bStack_70;
  undefined1 auStack_6f [15];
  short *apsStack_60 [4];
  
  bVar1 = DAT_003fd470;
  abStack_80[0] = DAT_003fd470;
  FUN_0035c6ec((uint)abStack_80 | 1,0,5);
  bStack_70 = bVar1;
  FUN_0035c6ec(auStack_6f,0,1);
  apsStack_60[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  FUN_002530e8(apsStack_60,(uint)*(ushort *)(*param_1 + 2) * 3);
  auStack_6f[0] = 0;
  bVar1 = *(byte *)(*param_1 + 8);
  pbVar5 = (byte *)(*param_1 + 9);
  while (uVar4 = (uint)bVar1, uVar4 != 0) {
    if (((int)(uVar4 << 0x18) < 0) || ((*(byte *)((int)&PTR_DAT_0040a991 + uVar4) & 7) == 0)) {
      FUN_0035d728(abStack_80,0x3fd478);
      FUN_00252e10(apsStack_60,abStack_80);
      bVar1 = *pbVar5;
    }
    else {
      bStack_70 = bVar1;
      FUN_00252e10(apsStack_60,&bStack_70);
      bVar1 = *pbVar5;
    }
    pbVar5 = pbVar5 + 1;
  }
  *apsStack_60[0] = *apsStack_60[0] + 1;
  psVar3 = (short *)*param_1;
  sVar2 = *psVar3;
  *psVar3 = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
  }
  *param_1 = (int)apsStack_60[0];
  sVar2 = *apsStack_60[0];
  *apsStack_60[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  return;
}


// ==== FUN_00220d08 @ 00220d08 ====

undefined1 FUN_00220d08(char param_1,undefined1 param_2)

{
  char cStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)param_1) & 0x44) != 0) {
    uStack_1e = 0;
    cStack_20 = param_1;
    uStack_1f = param_2;
    param_2 = FUN_00360800(&cStack_20,0,0x10);
  }
  return param_2;
}


// ==== FUN_00220d78 @ 00220d78 ====

void FUN_00220d78(int *param_1)

{
  char *pcVar1;
  short sVar2;
  short *psVar3;
  char cVar4;
  char *pcVar5;
  char cStack_80;
  undefined1 uStack_7f;
  short *apsStack_70 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  cStack_80 = DAT_0040de28;
  uStack_7f = DAT_0040de29;
  apsStack_70[0] = &DAT_003bfaf8;
  FUN_002530e8(apsStack_70,*(undefined2 *)(*param_1 + 2));
  cVar4 = *(char *)(*param_1 + 8);
  pcVar5 = (char *)(*param_1 + 9);
  while (cVar4 != '\0') {
    if (cVar4 == '+') {
      cStack_80 = ' ';
      cVar4 = cStack_80;
    }
    else if (cVar4 == '%') {
      cVar4 = *pcVar5;
      if (cVar4 == '\0') {
        cStack_80 = '%';
        cVar4 = cStack_80;
      }
      else {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 2;
        cVar4 = FUN_00220d08(cVar4,*pcVar1);
      }
    }
    cStack_80 = cVar4;
    FUN_00252e10(apsStack_70,&cStack_80);
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  }
  *apsStack_70[0] = *apsStack_70[0] + 1;
  psVar3 = (short *)*param_1;
  sVar2 = *psVar3;
  *psVar3 = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
  }
  *param_1 = (int)apsStack_70[0];
  sVar2 = *apsStack_70[0];
  *apsStack_70[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  return;
}


// ==== FUN_00220ed0 @ 00220ed0 ====

char * FUN_00220ed0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  short *psVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = (char *)0x0;
  psVar3 = (short *)*(undefined4 *)param_3;
  sVar2 = *psVar3;
  *psVar3 = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
  }
  *(undefined4 *)param_3 = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  psVar3 = (short *)*(undefined4 *)param_4;
  sVar2 = *psVar3;
  *psVar3 = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
  }
  *(undefined4 *)param_4 = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  pcVar4 = param_2;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    if ((*param_2 != '\0') && (*param_2 != '&')) {
      while( true ) {
        if (cVar1 == '=') {
          pcVar5 = pcVar4;
        }
        pcVar4 = pcVar4 + 1;
        if (pcVar4 == (char *)0x0) break;
        cVar1 = *pcVar4;
        if ((*pcVar4 == '\0') || (*pcVar4 == '&')) break;
      }
    }
  }
  if (pcVar5 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    FUN_00253138(param_3,param_2,(int)pcVar5 - (int)param_2);
    FUN_00220d78(param_3);
    FUN_00253138(param_4,pcVar5 + 1,(int)pcVar4 - (int)(pcVar5 + 1));
    FUN_00220d78(param_4);
    if (*pcVar4 == '&') {
      pcVar4 = pcVar4 + 1;
    }
  }
  return pcVar4;
}


// ==== FUN_00221050 @ 00221050 ====

/* Strings referenciadas:
     "FSCommand:" */

bool FUN_00221050(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0035ccd8(PTR_s_FSCommand__003be904);
  lVar2 = FUN_0035cfd8(param_2,PTR_s_FSCommand__003be904,uVar1);
  return lVar2 == 0;
}


// ==== FUN_00221098 @ 00221098 ====

/* Strings referenciadas:
     "FSCommand:" */

undefined4 FUN_00221098(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0035ccd8(PTR_s_FSCommand__003be904);
  (*DAT_0043daa0)(param_2 + iVar1,param_3);
  return 1;
}


