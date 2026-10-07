// ==== FUN_0038e298 @ 0038e298 ====

void FUN_0038e298(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_0038e2d0 @ 0038e2d0 ====

void FUN_0038e2d0(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003ea7e8;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CPointContainerWrapperClass_0038e300 @ 0038e300 ====

/* Strings referenciadas:
     "Q24Kaim27CPointContainerWrapperClass" */

undefined8 Kaim_CPointContainerWrapperClass_0038e300(void)

{
  if (DAT_0049ba30 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim22CPointContainerWrapperZPFv_PQ24Kaim22CPointContainerWrapper_0038e5f8
              ();
    Kaim_CMetaClass_ctor(0x49ba30,0x406a28,0x40ec18);
  }
  return 0x49ba30;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim10CPointInfoZPFv_PQ24Kaim10CPointInfo_0038e350 @ 0038e350 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim10CPointInfoZPFv_PQ24Kaim10CPointInfo" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim10CPointInfoZPFv_PQ24Kaim10CPointInfo_0038e350(void)

{
  if (DAT_0040ec10 == 0) {
    FUN_00370188(0x40ec10,0x406a50);
  }
  return 0x40ec10;
}


// ==== FUN_0038e390 @ 0038e390 ====

void FUN_0038e390(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003ea790;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CPointInfoClass_0038e3c0 @ 0038e3c0 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim10CPointInfoZPFv_PQ24Kaim10CPointInfo"
     "Q24Kaim15CPointInfoClass" */

undefined4 * Kaim_CPointInfoClass_0038e3c0(void)

{
  if (DAT_0049ba40 == 0) {
    if (DAT_0040ec10 == 0) {
      FUN_00370188(0x40ec10,0x406a50);
    }
    Kaim_CMetaClass_ctor(0x49ba40,0x406a98,0x40ec10);
  }
  return &DAT_0049ba40;
}


// ==== FUN_0038e438 @ 0038e438 ====

undefined8
FUN_0038e438(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
            )

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar2 = 0;
  piVar7[0x44] = (int)&DAT_003ea7e8;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038b098();
  piVar6 = piVar1;
  piVar5 = piVar1;
  if (piVar1[0x100] < 1) {
    iVar2 = piVar1[0x100];
  }
  else {
    do {
      lVar3 = strcmp(*piVar5 + 8,piVar7 + 2);
      iVar2 = iVar2 + 1;
      if (lVar3 == 0) {
        *piVar6 = (int)piVar7;
        bVar4 = true;
        goto LAB_0038e52c;
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < piVar1[0x100]);
    iVar2 = piVar1[0x100];
  }
  if (iVar2 == 0x100) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    piVar1[iVar2] = (int)piVar7;
    piVar1[0x100] = piVar1[0x100] + 1;
  }
LAB_0038e52c:
  if (bVar4) {
    iVar2 = FUN_0038b098();
    *piVar7 = *(int *)(iVar2 + 0x400) + -1;
  }
  else {
    *piVar7 = -1;
  }
  piVar7[1] = param_3;
  piVar7[0x42] = param_4;
  if (param_5 == '\x01') {
    iVar2 = FUN_002e10b8();
    piVar7[0x43] = iVar2;
  }
  else {
    piVar7[0x43] = 0;
  }
  if (param_6 != '\0') {
    DAT_003c7a20 = DAT_003c7a20 | piVar7[0x43];
  }
  return param_1;
}


// ==== FUN_0038e5c8 @ 0038e5c8 ====

void FUN_0038e5c8(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003ea790;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim22CPointContainerWrapperZPFv_PQ24Kaim22CPointContainerWrapper_0038e5f8 @ 0038e5f8 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim22CPointContainerWrapperZPFv_PQ24Kaim22CPointContainerWrapper" */

undefined8
Kaimt_CMetaClass2ZQ24Kaim22CPointContainerWrapperZPFv_PQ24Kaim22CPointContainerWrapper_0038e5f8
          (void)

{
  if (DAT_0040ec18 == 0) {
    FUN_00370188(0x40ec18,0x406ac8);
  }
  return 0x40ec18;
}


// ==== FUN_0038e638 @ 0038e638 ====

void FUN_0038e638(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003ea7e8;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_0038e668 @ 0038e668 ====

undefined8 FUN_0038e668(undefined8 param_1)

{
  if (DAT_003eb398 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003eb398 = 0;
  return param_1;
}


// ==== FUN_0038e688 @ 0038e688 ====

undefined * FUN_0038e688(void)

{
  if (DAT_004514f0 == 0) {
    FUN_0038e668(0x3eaf90);
    DAT_004514f0 = 1;
    FUN_0035e690(0x2e7660);
  }
  return &DAT_003eaf90;
}


// ==== Kaim_CBaseService_0038e6e0 @ 0038e6e0 ====

/* Strings referenciadas:
     "Q24Kaim12CBaseService" */

undefined8 Kaim_CBaseService_0038e6e0(void)

{
  if (DAT_0049ab98 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49ab98,0x406b40,0x40ebc0);
  }
  return 0x49ab98;
}


// ==== FUN_0038e730 @ 0038e730 ====

void FUN_0038e730(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_0038e768 @ 0038e768 ====

undefined4 FUN_0038e768(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_002e3920(param_2);
    if (lVar2 == 0) {
      return 0;
    }
    pcVar1 = (char *)FUN_002e3920(param_2);
    if (*pcVar1 == '_') {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0038e7c0 @ 0038e7c0 ====

void FUN_0038e7c0(undefined8 param_1,ulong param_2)

{
  FUN_0038e730(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_0038e810 @ 0038e810 ====

void FUN_0038e810(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e00e0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CBrainServiceClass_0038e840 @ 0038e840 ====

/* Strings referenciadas:
     "Q24Kaim18CBrainServiceClass" */

undefined8 Kaim_CBrainServiceClass_0038e840(void)

{
  if (DAT_0049ba50 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim13CBrainServiceZPFPQ24Kaim6CBrain_PQ24Kaim13CBrainService_0038d3e0();
    Kaim_CMetaClass_ctor(0x49ba50,0x406b80,0x40ec00);
  }
  return 0x49ba50;
}


// ==== FUN_0038e890 @ 0038e890 ====

void FUN_0038e890(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e5e40;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CWorldServiceClass_0038e8c0 @ 0038e8c0 ====

/* Strings referenciadas:
     "Q24Kaim18CWorldServiceClass" */

undefined8 Kaim_CWorldServiceClass_0038e8c0(void)

{
  if (DAT_0049ba60 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim13CWorldServiceZPFv_PQ24Kaim13CWorldService_0038b008();
    Kaim_CMetaClass_ctor(0x49ba60,0x406ba0,0x40ebe0);
  }
  return 0x49ba60;
}


// ==== FUN_0038e910 @ 0038e910 ====

undefined8
FUN_0038e910(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
            )

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar2 = 0;
  piVar7[0x44] = (int)&DAT_003e00e0;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038c3e0();
  piVar6 = piVar1;
  piVar5 = piVar1;
  if (piVar1[0x100] < 1) {
    iVar2 = piVar1[0x100];
  }
  else {
    do {
      lVar3 = strcmp(*piVar5 + 8,piVar7 + 2);
      iVar2 = iVar2 + 1;
      if (lVar3 == 0) {
        *piVar6 = (int)piVar7;
        bVar4 = true;
        goto LAB_0038ea04;
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < piVar1[0x100]);
    iVar2 = piVar1[0x100];
  }
  if (iVar2 == 0x100) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    piVar1[iVar2] = (int)piVar7;
    piVar1[0x100] = piVar1[0x100] + 1;
  }
LAB_0038ea04:
  if (bVar4) {
    iVar2 = FUN_0038c3e0();
    *piVar7 = *(int *)(iVar2 + 0x400) + -1;
  }
  else {
    *piVar7 = -1;
  }
  piVar7[1] = param_3;
  piVar7[0x42] = param_4;
  if (param_5 == '\x01') {
    iVar2 = FUN_002e10b8();
    piVar7[0x43] = iVar2;
  }
  else {
    piVar7[0x43] = 0;
  }
  if (param_6 != '\0') {
    DAT_003c7a20 = DAT_003c7a20 | piVar7[0x43];
  }
  return param_1;
}


// ==== FUN_0038eaa0 @ 0038eaa0 ====

undefined8
FUN_0038eaa0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
            )

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar2 = 0;
  piVar7[0x44] = (int)&DAT_003e5e40;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038e688();
  piVar6 = piVar1;
  piVar5 = piVar1;
  if (piVar1[0x100] < 1) {
    iVar2 = piVar1[0x100];
  }
  else {
    do {
      lVar3 = strcmp(*piVar5 + 8,piVar7 + 2);
      iVar2 = iVar2 + 1;
      if (lVar3 == 0) {
        *piVar6 = (int)piVar7;
        bVar4 = true;
        goto LAB_0038eb94;
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < piVar1[0x100]);
    iVar2 = piVar1[0x100];
  }
  if (iVar2 == 0x100) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    piVar1[iVar2] = (int)piVar7;
    piVar1[0x100] = piVar1[0x100] + 1;
  }
LAB_0038eb94:
  if (bVar4) {
    iVar2 = FUN_0038e688();
    *piVar7 = *(int *)(iVar2 + 0x400) + -1;
  }
  else {
    *piVar7 = -1;
  }
  piVar7[1] = param_3;
  piVar7[0x42] = param_4;
  if (param_5 == '\x01') {
    iVar2 = FUN_002e10b8();
    piVar7[0x43] = iVar2;
  }
  else {
    piVar7[0x43] = 0;
  }
  if (param_6 != '\0') {
    DAT_003c7a20 = DAT_003c7a20 | piVar7[0x43];
  }
  return param_1;
}


// ==== Kaim_CObject_0038ec30 @ 0038ec30 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaim12CTimeManager11CEntityInfo" */

undefined4 * Kaim_CObject_0038ec30(void)

{
  if (DAT_0049ba70 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406c78);
    }
    Kaim_CMetaClass_ctor(0x49ba70,0x406c88,0x40ebc0);
  }
  return &DAT_0049ba70;
}


// ==== Kaim_CObject_0038eca8 @ 0038eca8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaim12CTimeManager9CTeamInfo" */

undefined4 * Kaim_CObject_0038eca8(void)

{
  if (DAT_0049ba80 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406c78);
    }
    Kaim_CMetaClass_ctor(0x49ba80,0x406cb0,0x40ebc0);
  }
  return &DAT_0049ba80;
}


// ==== FUN_0038ed20 @ 0038ed20 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim12CTimeManager" */

undefined4 * FUN_0038ed20(void)

{
  if (DAT_0049ba90 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406c78);
    }
    Kaim_CMetaClass_ctor(0x49ba90,0x406cd0,0x40ebc0);
  }
  return &DAT_0049ba90;
}


// ==== FUN_0038ee08 @ 0038ee08 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim6CWorld" */

undefined4 * FUN_0038ee08(void)

{
  if (DAT_0049baa0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406e48);
    }
    Kaim_CMetaClass_ctor(0x49baa0,0x406e58,0x40ebc0);
  }
  return &DAT_0049baa0;
}


// ==== FUN_0038ee80 @ 0038ee80 ====

int FUN_0038ee80(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_0038e688();
    piVar4 = piVar1;
    piVar3 = piVar1;
    if (0 < piVar1[0x100]) {
      do {
        lVar2 = strcmp(*piVar3 + 8,param_1);
        iVar5 = iVar5 + 1;
        if (lVar2 == 0) {
          return *piVar4;
        }
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar5 < piVar1[0x100]);
    }
  }
  return 0;
}


// ==== FUN_0038ef20 @ 0038ef20 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim5CTeam" */

undefined4 * FUN_0038ef20(void)

{
  if (DAT_0049bab0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406f90);
    }
    Kaim_CMetaClass_ctor(0x49bab0,0x407028,0x40ebc0);
  }
  return &DAT_0049bab0;
}


// ==== FUN_0038efb0 @ 0038efb0 ====

undefined4 FUN_0038efb0(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_002e3920(param_2);
    if (lVar2 == 0) {
      return 0;
    }
    pcVar1 = (char *)FUN_002e3920(param_2);
    if (*pcVar1 == '_') {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0038f000 @ 0038f000 ====

undefined8
FUN_0038f000(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
            )

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar2 = 0;
  piVar7[0x44] = (int)&DAT_003ebb48;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038be50();
  piVar6 = piVar1;
  piVar5 = piVar1;
  if (piVar1[0x100] < 1) {
    iVar2 = piVar1[0x100];
  }
  else {
    do {
      lVar3 = strcmp(*piVar5 + 8,piVar7 + 2);
      iVar2 = iVar2 + 1;
      if (lVar3 == 0) {
        *piVar6 = (int)piVar7;
        bVar4 = true;
        goto LAB_0038f0f4;
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < piVar1[0x100]);
    iVar2 = piVar1[0x100];
  }
  if (iVar2 == 0x100) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    piVar1[iVar2] = (int)piVar7;
    piVar1[0x100] = piVar1[0x100] + 1;
  }
LAB_0038f0f4:
  if (bVar4) {
    iVar2 = FUN_0038be50();
    *piVar7 = *(int *)(iVar2 + 0x400) + -1;
  }
  else {
    *piVar7 = -1;
  }
  piVar7[1] = param_3;
  piVar7[0x42] = param_4;
  if (param_5 == '\x01') {
    iVar2 = FUN_002e10b8();
    piVar7[0x43] = iVar2;
  }
  else {
    piVar7[0x43] = 0;
  }
  if (param_6 != '\0') {
    DAT_003c7a20 = DAT_003c7a20 | piVar7[0x43];
  }
  return param_1;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim5CTeamZPFUiPCc_PQ24Kaim5CTeam_0038f190 @ 0038f190 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim5CTeamZPFUiPCc_PQ24Kaim5CTeam" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim5CTeamZPFUiPCc_PQ24Kaim5CTeam_0038f190(void)

{
  if (DAT_0040ec20 == 0) {
    FUN_00370188(0x40ec20,0x407068);
  }
  return 0x40ec20;
}


// ==== FUN_0038f1d0 @ 0038f1d0 ====

void FUN_0038f1d0(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003ebb48;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CTeamClass_0038f200 @ 0038f200 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim5CTeamZPFUiPCc_PQ24Kaim5CTeam"
     "Q24Kaim10CTeamClass" */

undefined4 * Kaim_CTeamClass_0038f200(void)

{
  if (DAT_0049bac0 == 0) {
    if (DAT_0040ec20 == 0) {
      FUN_00370188(0x40ec20,0x407068);
    }
    Kaim_CMetaClass_ctor(0x49bac0,0x4070a8,0x40ec20);
  }
  return &DAT_0049bac0;
}


// ==== FUN_0038f278 @ 0038f278 ====

void FUN_0038f278(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003ebb48;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_0038f2a8 @ 0038f2a8 ====

void FUN_0038f2a8(void)

{
  return;
}


// ==== FUN_0038f2b0 @ 0038f2b0 ====

int FUN_0038f2b0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1 != (int *)(iVar1 + 0x5c)) {
    return *(int *)(iVar1 + 0x18) + *(int *)(*param_1 * 4 + *(int *)(iVar1 + 0x38)) * 0x14;
  }
  return iVar1 + 100;
}


// ==== FUN_0038f2f0 @ 0038f2f0 ====

int FUN_0038f2f0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1 != (int *)(iVar1 + 0x5c)) {
    return *(int *)(iVar1 + 0x18) + *(int *)(*param_1 * 4 + *(int *)(iVar1 + 0x3c)) * 0x14;
  }
  return iVar1 + 0x78;
}


// ==== Kaim_CObject_0038f330 @ 0038f330 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaimt8CVarList1ZPQ24Kaim7CVertex" */

undefined4 * Kaim_CObject_0038f330(void)

{
  if (DAT_0049bad0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4070e0);
    }
    Kaim_CMetaClass_ctor(0x49bad0,0x4070f0,0x40ebc0);
  }
  return &DAT_0049bad0;
}


// ==== FUN_0038f3a8 @ 0038f3a8 ====

void FUN_0038f3a8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038f3e0 @ 0038f3e0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim7CVertex5CCell" */

undefined4 * Kaim_CObject_0038f3e0(void)

{
  if (DAT_0049bae0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4070e0);
    }
    Kaim_CMetaClass_ctor(0x49bae0,0x407118,0x40ebc0);
  }
  return &DAT_0049bae0;
}


// ==== FUN_0038f458 @ 0038f458 ====

void FUN_0038f458(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038f490 @ 0038f490 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim7CVertex9CIterator" */

undefined4 * Kaim_CObject_0038f490(void)

{
  if (DAT_0049baf0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4070e0);
    }
    Kaim_CMetaClass_ctor(0x49baf0,0x407148,0x40ebc0);
  }
  return &DAT_0049baf0;
}


// ==== FUN_0038f508 @ 0038f508 ====

void FUN_0038f508(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003ebe60;
  if ((puVar4[6] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) {
    piVar3 = piVar1 + piVar1[-4] * 5;
    if (piVar1 == piVar3) {
      iVar2 = puVar4[1];
    }
    else {
      do {
        piVar3 = piVar3 + -5;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[1] != piVar3);
      iVar2 = puVar4[1];
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2 + -0x10);
  }
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_0038f5e0 @ 0038f5e0 ====

void FUN_0038f5e0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_0038f618 @ 0038f618 ====

/* Strings referenciadas:
     
   "Q266_GLOBAL_$N$D__BuildMachine_sdk_rwaisdk_src_graph_kyastar.cppvHaaaa28CNodePushSuccessorsTraversal"
    */

undefined8 FUN_0038f618(void)

{
  if (DAT_0049bb00 == 0) {
    Kaim_CVertexTraversal_00389400();
    Kaim_CMetaClass_ctor(0x49bb00,0x407178,0x49a938);
  }
  return 0x49bb00;
}


// ==== FUN_0038f668 @ 0038f668 ====

undefined4 FUN_0038f668(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined *puStack_90;
  int iStack_8c;
  undefined *puStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_60;
  float afStack_5c [3];
  
  DAT_003ca548 = DAT_003ca548 + 1;
  if (-1 < DAT_003ca544) {
    uVar5 = FUN_002e91c0();
    fVar9 = (float)FUN_002e9630(uVar5,DAT_003ca544);
    DAT_003c95a8 = DAT_003c95a8 + fVar9;
  }
  iVar1 = param_2[1];
  uStack_60 = 0;
  if (param_2 == (int *)(iVar1 + 0x5c)) {
    iVar7 = *(int *)(iVar1 + 0x94);
  }
  else {
    iVar7 = 0;
    if (*(int *)(iVar1 + 0x50) != 0) {
      iVar7 = *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x50));
    }
  }
  if (iVar7 == 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x10) + 0x54);
    iVar1 = *piVar2;
    lVar6 = (**(code **)(iVar1 + 0x1c))
                      ((int)piVar2 + (int)*(short *)(iVar1 + 0x18),*(undefined4 *)(param_1 + 0x14),
                       param_2,&uStack_60);
  }
  else {
    iVar1 = param_2[1];
    if (param_2 == (int *)(iVar1 + 0x5c)) {
      piVar2 = *(int **)(iVar1 + 0x94);
    }
    else if (*(int *)(iVar1 + 0x50) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(*param_2 * 4 + *(int *)(iVar1 + 0x50));
    }
    lVar6 = (**(code **)(*piVar2 + 0x34))
                      ((int)piVar2 + (int)*(short *)(*piVar2 + 0x30),*(undefined4 *)(param_1 + 0x14)
                       ,param_2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x54),&uStack_60);
  }
  if (lVar6 == 0) {
    return 1;
  }
  iVar1 = param_2[1];
  if (param_2 == (int *)(iVar1 + 0x5c)) {
    *(undefined4 *)(iVar1 + 0x90) = uStack_60;
  }
  else {
    if (*(int *)(iVar1 + 0x4c) == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      goto LAB_0038f7cc;
    }
    *(undefined4 *)(*param_2 * 4 + *(int *)(iVar1 + 0x4c)) = uStack_60;
  }
  iVar1 = *(int *)(param_1 + 0x10);
LAB_0038f7cc:
  iVar7 = param_2[1];
  iVar8 = **(int **)(iVar1 + 0x58);
  if (param_2 == (int *)(iVar7 + 0x5c)) {
    iVar7 = iVar7 + 0x78;
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14;
  }
  lVar6 = (**(code **)(iVar8 + 0x14))
                    ((int)*(int **)(iVar1 + 0x58) + (int)*(short *)(iVar8 + 0x10),
                     *(undefined4 *)(param_1 + 0x14),iVar7,*(undefined4 *)(param_1 + 8),afStack_5c);
  if (lVar6 != 0) {
    iVar1 = param_2[1];
    if (param_2 == (int *)(iVar1 + 0x5c)) {
      fVar9 = *(float *)(iVar1 + 0x90);
    }
    else if (*(int *)(iVar1 + 0x4c) == 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = *(float *)(*param_2 * 4 + *(int *)(iVar1 + 0x4c));
    }
    fVar9 = *(float *)(**(int **)(param_1 + 4) * 4 + DAT_003ca534) + fVar9;
    afStack_5c[0] = fVar9 + afStack_5c[0];
    if (param_2 == (int *)(iVar1 + 0x5c)) {
      piVar2 = (int *)(iVar1 + 0x78);
    }
    else {
      piVar2 = (int *)(*(int *)(iVar1 + 0x18) +
                      *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x3c)) * 0x14);
    }
    iVar1 = *piVar2;
    iVar8 = iVar1 * 8 + DAT_003ca52c;
    iVar7 = iVar1 * 8 + DAT_003ca530;
    if (*(int *)(iVar7 + 4) == 0) {
      if (*(int *)(iVar8 + 4) == 0) {
        iVar7 = param_2[1];
        if (param_2 == (int *)(iVar7 + 0x5c)) {
          piVar2 = (int *)(iVar7 + 0x78);
        }
        else {
          piVar2 = (int *)(*(int *)(iVar7 + 0x18) +
                          *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14);
        }
        *(float *)(*piVar2 * 4 + DAT_003ca534) = fVar9;
        iVar7 = param_2[1];
        if (param_2 == (int *)(iVar7 + 0x5c)) {
          piVar2 = (int *)(iVar7 + 0x78);
        }
        else {
          piVar2 = (int *)(*(int *)(iVar7 + 0x18) +
                          *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14);
        }
        *(float *)(*piVar2 * 4 + DAT_003ca538) = afStack_5c[0];
        iVar7 = param_2[1];
        if (param_2 == (int *)(iVar7 + 0x5c)) {
          piVar2 = (int *)(iVar7 + 0x78);
        }
        else {
          piVar2 = (int *)(*(int *)(iVar7 + 0x18) +
                          *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14);
        }
        if (*(int *)(piVar2[4] + 0x1c) != 0) {
          *(int **)(*piVar2 * 4 + *(int *)(piVar2[4] + 0x1c)) = param_2;
        }
        iVar7 = param_2[1];
        if (param_2 == (int *)(iVar7 + 0x5c)) {
          iVar7 = iVar7 + 0x78;
        }
        else {
          iVar7 = *(int *)(iVar7 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14;
        }
        FUN_002ed3a8(&puStack_90,DAT_003ca524,iVar7);
        *(int *)(iVar1 * 8 + DAT_003ca52c + 4) = iStack_8c;
      }
      else {
        puStack_90 = &DAT_003ebe30;
        iStack_8c = *(int *)(iVar8 + 4);
        if (iStack_8c == 0) {
          return 0;
        }
        if (afStack_5c[0] < *(float *)(**(int **)(iStack_8c + 4) * 4 + DAT_003ca538)) {
          iVar7 = param_2[1];
          if (param_2 == (int *)(iVar7 + 0x5c)) {
            piVar2 = (int *)(iVar7 + 0x78);
          }
          else {
            piVar2 = (int *)(*(int *)(iVar7 + 0x18) +
                            *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14);
          }
          *(float *)(*piVar2 * 4 + DAT_003ca534) = fVar9;
          iVar7 = param_2[1];
          if (param_2 == (int *)(iVar7 + 0x5c)) {
            piVar2 = (int *)(iVar7 + 0x78);
          }
          else {
            piVar2 = (int *)(*(int *)(iVar7 + 0x18) +
                            *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14);
          }
          *(float *)(*piVar2 * 4 + DAT_003ca538) = afStack_5c[0];
          iVar7 = DAT_003ca524;
          *(undefined1 *)(iStack_8c + 0x10) = 0;
          if (iStack_8c == *(int *)(iVar7 + 8)) {
            *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iStack_8c + 0xc);
            iVar8 = *(int *)(iVar7 + 0xc);
          }
          else {
            iVar8 = *(int *)(iVar7 + 0xc);
          }
          if (iStack_8c == iVar8) {
            *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iStack_8c + 8);
            iVar8 = *(int *)(iStack_8c + 8);
          }
          else {
            iVar8 = *(int *)(iStack_8c + 8);
          }
          if (iVar8 == 0) {
            iVar8 = *(int *)(iStack_8c + 0xc);
          }
          else {
            *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iStack_8c + 0xc);
            iVar8 = *(int *)(iStack_8c + 0xc);
          }
          if (iVar8 == 0) {
            uVar4 = *(undefined4 *)(iVar7 + 0x10);
          }
          else {
            *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iStack_8c + 8);
            uVar4 = *(undefined4 *)(iVar7 + 0x10);
          }
          iVar8 = DAT_003ca524;
          *(undefined4 *)(iStack_8c + 0xc) = uVar4;
          *(int *)(iVar7 + 0x10) = iStack_8c;
          *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + -1;
          iVar7 = param_2[1];
          if (param_2 == (int *)(iVar7 + 0x5c)) {
            iVar7 = iVar7 + 0x78;
          }
          else {
            iVar7 = *(int *)(iVar7 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14;
          }
          FUN_002ed3a8(auStack_70,iVar8,iVar7);
          *(undefined4 *)(iVar1 * 8 + DAT_003ca52c + 4) = uStack_6c;
          iVar1 = param_2[1];
          if (param_2 == (int *)(iVar1 + 0x5c)) {
            piVar2 = (int *)(iVar1 + 0x78);
          }
          else {
            piVar2 = (int *)(*(int *)(iVar1 + 0x18) +
                            *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x3c)) * 0x14);
          }
          if (*(int *)(piVar2[4] + 0x1c) != 0) {
            *(int **)(*piVar2 * 4 + *(int *)(piVar2[4] + 0x1c)) = param_2;
          }
        }
      }
    }
    else {
      puStack_90 = &DAT_003ebe30;
      iStack_8c = *(int *)(iVar7 + 4);
      piVar2 = *(int **)(iStack_8c + 4);
      if (iStack_8c == 0) {
        return 0;
      }
      if (afStack_5c[0] < *(float *)(*piVar2 * 4 + DAT_003ca538)) {
        iVar7 = param_2[1];
        if (param_2 == (int *)(iVar7 + 0x5c)) {
          piVar3 = (int *)(iVar7 + 0x78);
        }
        else {
          piVar3 = (int *)(*(int *)(iVar7 + 0x18) +
                          *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14);
        }
        *(float *)(*piVar3 * 4 + DAT_003ca534) = fVar9;
        iVar7 = param_2[1];
        if (param_2 == (int *)(iVar7 + 0x5c)) {
          piVar3 = (int *)(iVar7 + 0x78);
        }
        else {
          piVar3 = (int *)(*(int *)(iVar7 + 0x18) +
                          *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14);
        }
        *(float *)(*piVar3 * 4 + DAT_003ca538) = afStack_5c[0];
        iVar7 = DAT_003ca528;
        uStack_7c = 0;
        *(undefined4 *)(*piVar2 * 8 + DAT_003ca530 + 4) = 0;
        puStack_80 = &DAT_003e0040;
        *(undefined1 *)(iStack_8c + 0x10) = 0;
        if (iStack_8c == *(int *)(iVar7 + 8)) {
          *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iStack_8c + 0xc);
          iVar8 = *(int *)(iVar7 + 0xc);
        }
        else {
          iVar8 = *(int *)(iVar7 + 0xc);
        }
        if (iStack_8c == iVar8) {
          *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iStack_8c + 8);
          iVar8 = *(int *)(iStack_8c + 8);
        }
        else {
          iVar8 = *(int *)(iStack_8c + 8);
        }
        if (iVar8 == 0) {
          iVar8 = *(int *)(iStack_8c + 0xc);
        }
        else {
          *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iStack_8c + 0xc);
          iVar8 = *(int *)(iStack_8c + 0xc);
        }
        if (iVar8 == 0) {
          uVar4 = *(undefined4 *)(iVar7 + 0x10);
        }
        else {
          *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iStack_8c + 8);
          uVar4 = *(undefined4 *)(iVar7 + 0x10);
        }
        *(undefined4 *)(iStack_8c + 0xc) = uVar4;
        *(int *)(iVar7 + 0x10) = iStack_8c;
        *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + -1;
        iVar7 = param_2[1];
        if (param_2 == (int *)(iVar7 + 0x5c)) {
          piVar2 = (int *)(iVar7 + 0x78);
        }
        else {
          piVar2 = (int *)(*(int *)(iVar7 + 0x18) +
                          *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14);
        }
        if (*(int *)(piVar2[4] + 0x1c) != 0) {
          *(int **)(*piVar2 * 4 + *(int *)(piVar2[4] + 0x1c)) = param_2;
        }
        iVar7 = param_2[1];
        if (param_2 == (int *)(iVar7 + 0x5c)) {
          iVar7 = iVar7 + 0x78;
        }
        else {
          iVar7 = *(int *)(iVar7 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar7 + 0x3c)) * 0x14;
        }
        FUN_002ed3a8(&puStack_80,DAT_003ca524,iVar7);
        *(undefined4 *)(iVar1 * 8 + DAT_003ca52c + 4) = uStack_7c;
      }
    }
    return 1;
  }
  return 1;
}


// ==== Kaim_CFindNearestData_0038ff70 @ 0038ff70 ====

/* Strings referenciadas:
     "Q24Kaim16CFindNearestData" */

undefined8 Kaim_CFindNearestData_0038ff70(void)

{
  if (DAT_0049bb10 == 0) {
    FUN_00390060();
    Kaim_CMetaClass_ctor(0x49bb10,0x407248,0x49bb20);
  }
  return 0x49bb10;
}


// ==== FUN_00390038 @ 00390038 ====

undefined4 FUN_00390038(undefined8 param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 0) {
    return *param_2;
  }
  if (param_3 != 1) {
    return param_2[2];
  }
  return param_2[1];
}


// ==== FUN_00390060 @ 00390060 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim10CGraphData" */

undefined4 * FUN_00390060(void)

{
  if (DAT_0049bb20 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x407288);
    }
    Kaim_CMetaClass_ctor(0x49bb20,0x407298,0x40ebc0);
  }
  return &DAT_0049bb20;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim10CGraphDataZPFPQ24Kaim13CSpatialGraph_PQ24Kaim10CGraphData_003900d8 @ 003900d8 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim10CGraphDataZPFPQ24Kaim13CSpatialGraph_PQ24Kaim10CGraphData" */

undefined8
Kaimt_CMetaClass2ZQ24Kaim10CGraphDataZPFPQ24Kaim13CSpatialGraph_PQ24Kaim10CGraphData_003900d8(void)

{
  if (DAT_0040ec28 == 0) {
    FUN_00370188(0x40ec28,0x4072b0);
  }
  return 0x40ec28;
}


// ==== FUN_00390118 @ 00390118 ====

void FUN_00390118(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003ec200;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00390148 @ 00390148 ====

undefined8 FUN_00390148(undefined8 param_1)

{
  if (DAT_003ec8f8 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003ec8f8 = 0;
  return param_1;
}


// ==== FUN_00390168 @ 00390168 ====

undefined * FUN_00390168(void)

{
  if (DAT_00451770 == 0) {
    FUN_00390148(0x3ec4f0);
    DAT_00451770 = 1;
    FUN_0035e690(0x2f23e8);
  }
  return &DAT_003ec4f0;
}


// ==== FUN_003901c0 @ 003901c0 ====

void FUN_003901c0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CConstraintShortestPath_003901f8 @ 003901f8 ====

/* Strings referenciadas:
     "Q24Kaim23CConstraintShortestPath" */

undefined8 Kaim_CConstraintShortestPath_003901f8(void)

{
  if (DAT_0049bb30 == 0) {
    Kaim_CConstraint_003909a8();
    Kaim_CMetaClass_ctor(0x49bb30,0x407418,0x49bbb0);
  }
  return 0x49bb30;
}


// ==== FUN_00390270 @ 00390270 ====

void FUN_00390270(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CConstraintStealthPath_003902a8 @ 003902a8 ====

/* Strings referenciadas:
     "Q24Kaim22CConstraintStealthPath" */

undefined8 Kaim_CConstraintStealthPath_003902a8(void)

{
  if (DAT_0049bb40 == 0) {
    Kaim_CConstraint_003909a8();
    Kaim_CMetaClass_ctor(0x49bb40,0x407440,0x49bbb0);
  }
  return 0x49bb40;
}


// ==== FUN_00390318 @ 00390318 ====

void FUN_00390318(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CConstraintConeVisionStealthPath_00390350 @ 00390350 ====

/* Strings referenciadas:
     "Q24Kaim32CConstraintConeVisionStealthPath" */

undefined8 Kaim_CConstraintConeVisionStealthPath_00390350(void)

{
  if (DAT_0049bb50 == 0) {
    Kaim_CConstraint_003909a8();
    Kaim_CMetaClass_ctor(0x49bb50,0x407460,0x49bbb0);
  }
  return 0x49bb50;
}


// ==== FUN_003903b8 @ 003903b8 ====

void FUN_003903b8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CConstraintPointToFleePath_003903f0 @ 003903f0 ====

/* Strings referenciadas:
     "Q24Kaim26CConstraintPointToFleePath" */

undefined8 Kaim_CConstraintPointToFleePath_003903f0(void)

{
  if (DAT_0049bb60 == 0) {
    Kaim_CConstraint_003909a8();
    Kaim_CMetaClass_ctor(0x49bb60,0x407490,0x49bbb0);
  }
  return 0x49bb60;
}


// ==== FUN_00390460 @ 00390460 ====

void FUN_00390460(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00390498 @ 00390498 ====

/* Strings referenciadas:
     "Q24Kaim23CConstraintShortestPath"
     "Q24Kaim17CSphereConstraint" */

undefined4 * FUN_00390498(void)

{
  if (DAT_0049bb70 == 0) {
    if (DAT_0049bb30 == 0) {
      Kaim_CConstraint_003909a8();
      Kaim_CMetaClass_ctor(0x49bb30,0x407418,0x49bbb0);
    }
    Kaim_CMetaClass_ctor(0x49bb70,0x4074b8,0x49bb30);
  }
  return &DAT_0049bb70;
}


// ==== FUN_003905a8 @ 003905a8 ====

void FUN_003905a8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CHeuristicEuclidianDistance_003905e0 @ 003905e0 ====

/* Strings referenciadas:
     "Q24Kaim27CHeuristicEuclidianDistance" */

undefined8 Kaim_CHeuristicEuclidianDistance_003905e0(void)

{
  if (DAT_0049bb80 == 0) {
    FUN_00390ae0();
    Kaim_CMetaClass_ctor(0x49bb80,0x4074d8,0x49bbc0);
  }
  return 0x49bb80;
}


// ==== FUN_00390640 @ 00390640 ====

/* WARNING: Removing unreachable block (ram,0x003906a0) */

undefined4
FUN_00390640(undefined8 param_1,undefined8 param_2,int param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_3 + 4) - *(float *)(param_4 + 4);
  fVar2 = *(float *)(param_3 + 0xc) - *(float *)(param_4 + 0xc);
  fVar1 = *(float *)(param_3 + 8) - *(float *)(param_4 + 8);
  *param_5 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  return 1;
}


// ==== FUN_003906c0 @ 003906c0 ====

void FUN_003906c0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CZeroHeuristic_003906f8 @ 003906f8 ====

/* Strings referenciadas:
     "Q24Kaim14CZeroHeuristic" */

undefined8 Kaim_CZeroHeuristic_003906f8(void)

{
  if (DAT_0049bb90 == 0) {
    FUN_00390ae0();
    Kaim_CMetaClass_ctor(0x49bb90,0x407500,0x49bbc0);
  }
  return 0x49bb90;
}


// ==== FUN_00390768 @ 00390768 ====

void FUN_00390768(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CPathCostHeuristic_003907a0 @ 003907a0 ====

/* Strings referenciadas:
     "Q24Kaim18CPathCostHeuristic" */

undefined8 Kaim_CPathCostHeuristic_003907a0(void)

{
  if (DAT_0049bba0 == 0) {
    FUN_00390ae0();
    Kaim_CMetaClass_ctor(0x49bba0,0x407518,0x49bbc0);
  }
  return 0x49bba0;
}


// ==== FUN_00390818 @ 00390818 ====

undefined8
FUN_00390818(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
            )

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar2 = 0;
  piVar7[0x44] = (int)&DAT_003e00b0;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_00390168();
  piVar6 = piVar1;
  piVar5 = piVar1;
  if (piVar1[0x100] < 1) {
    iVar2 = piVar1[0x100];
  }
  else {
    do {
      lVar3 = strcmp(*piVar5 + 8,piVar7 + 2);
      iVar2 = iVar2 + 1;
      if (lVar3 == 0) {
        *piVar6 = (int)piVar7;
        bVar4 = true;
        goto LAB_0039090c;
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < piVar1[0x100]);
    iVar2 = piVar1[0x100];
  }
  if (iVar2 == 0x100) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    piVar1[iVar2] = (int)piVar7;
    piVar1[0x100] = piVar1[0x100] + 1;
  }
LAB_0039090c:
  if (bVar4) {
    iVar2 = FUN_00390168();
    *piVar7 = *(int *)(iVar2 + 0x400) + -1;
  }
  else {
    *piVar7 = -1;
  }
  piVar7[1] = param_3;
  piVar7[0x42] = param_4;
  if (param_5 == '\x01') {
    iVar2 = FUN_002e10b8();
    piVar7[0x43] = iVar2;
  }
  else {
    piVar7[0x43] = 0;
  }
  if (param_6 != '\0') {
    DAT_003c7a20 = DAT_003c7a20 | piVar7[0x43];
  }
  return param_1;
}


// ==== Kaim_CConstraint_003909a8 @ 003909a8 ====

/* Strings referenciadas:
     "Q24Kaim11CConstraint" */

undefined8 Kaim_CConstraint_003909a8(void)

{
  if (DAT_0049bbb0 == 0) {
    Kaim_IConstraint_00390b58();
    Kaim_CMetaClass_ctor(0x49bbb0,0x407590,0x49bbe0);
  }
  return 0x49bbb0;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim10CHeuristicZPFv_PQ24Kaim10CHeuristic_003909f8 @ 003909f8 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim10CHeuristicZPFv_PQ24Kaim10CHeuristic" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim10CHeuristicZPFv_PQ24Kaim10CHeuristic_003909f8(void)

{
  if (DAT_0040ec30 == 0) {
    FUN_00370188(0x40ec30,0x4075a8);
  }
  return 0x40ec30;
}


// ==== FUN_00390a38 @ 00390a38 ====

void FUN_00390a38(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e00b0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CHeuristicClass_00390a68 @ 00390a68 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim10CHeuristicZPFv_PQ24Kaim10CHeuristic"
     "Q24Kaim15CHeuristicClass" */

undefined4 * Kaim_CHeuristicClass_00390a68(void)

{
  if (DAT_0049bbd0 == 0) {
    if (DAT_0040ec30 == 0) {
      FUN_00370188(0x40ec30,0x4075a8);
    }
    Kaim_CMetaClass_ctor(0x49bbd0,0x4075f0,0x40ec30);
  }
  return &DAT_0049bbd0;
}


// ==== FUN_00390ae0 @ 00390ae0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim10CHeuristic" */

undefined4 * FUN_00390ae0(void)

{
  if (DAT_0049bbc0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x407538);
    }
    Kaim_CMetaClass_ctor(0x49bbc0,0x407610,0x40ebc0);
  }
  return &DAT_0049bbc0;
}


// ==== Kaim_IConstraint_00390b58 @ 00390b58 ====

/* Strings referenciadas:
     "Q24Kaim11IConstraint" */

undefined8 Kaim_IConstraint_00390b58(void)

{
  if (DAT_0049bbe0 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49bbe0,0x407628,0x40ebc0);
  }
  return 0x49bbe0;
}


// ==== FUN_00390ba8 @ 00390ba8 ====

undefined8 FUN_00390ba8(undefined8 param_1)

{
  if (DAT_003eda28 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003eda28 = 0;
  return param_1;
}


// ==== FUN_00390bc8 @ 00390bc8 ====

undefined * FUN_00390bc8(void)

{
  if (DAT_00452150 == 0) {
    FUN_00390ba8(0x3ed620);
    DAT_00452150 = 1;
    FUN_0035e690(0x2f3398);
  }
  return &DAT_003ed620;
}


// ==== Kaim_CObject_00390c20 @ 00390c20 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaim13CGraphManager9CGraphMap" */

undefined4 * Kaim_CObject_00390c20(void)

{
  if (DAT_0049bbf0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4076c8);
    }
    Kaim_CMetaClass_ctor(0x49bbf0,0x4076d8,0x40ebc0);
  }
  return &DAT_0049bbf0;
}


// ==== Kaim_CGraphManager_00390c98 @ 00390c98 ====

/* Strings referenciadas:
     "Q24Kaim13CGraphManager" */

undefined8 Kaim_CGraphManager_00390c98(void)

{
  if (DAT_0049bc00 == 0) {
    Kaim_CWorldService_0038afb8();
    Kaim_CMetaClass_ctor(0x49bc00,0x407700,0x49ab88);
  }
  return 0x49bc00;
}


// ==== FUN_00390cf8 @ 00390cf8 ====

int FUN_00390cf8(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_00390bc8();
    piVar4 = piVar1;
    piVar3 = piVar1;
    if (0 < piVar1[0x100]) {
      do {
        lVar2 = strcmp(*piVar3 + 8,param_1);
        iVar5 = iVar5 + 1;
        if (lVar2 == 0) {
          return *piVar4;
        }
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar5 < piVar1[0x100]);
    }
  }
  return 0;
}


// ==== FUN_00390d98 @ 00390d98 ====

void FUN_00390d98(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CGraphWrapper_00390dd0 @ 00390dd0 ====

/* Strings referenciadas:
     "Q24Kaim13CGraphWrapper" */

undefined8 Kaim_CGraphWrapper_00390dd0(void)

{
  if (DAT_0049bc10 == 0) {
    FUN_00390e48();
    Kaim_CMetaClass_ctor(0x49bc10,0x4077a0,0x49bc20);
  }
  return 0x49bc10;
}


// ==== FUN_00390e48 @ 00390e48 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim22CPointContainerWrapper" */

undefined4 * FUN_00390e48(void)

{
  if (DAT_0049bc20 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4077b8);
    }
    Kaim_CMetaClass_ctor(0x49bc20,0x4077c8,0x40ebc0);
  }
  return &DAT_0049bc20;
}


// ==== FUN_00390ec0 @ 00390ec0 ====

void FUN_00390ec0(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003ec200;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CGraphDataClass_00390ef0 @ 00390ef0 ====

/* Strings referenciadas:
     "Q24Kaim15CGraphDataClass" */

undefined8 Kaim_CGraphDataClass_00390ef0(void)

{
  if (DAT_0049bc30 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim10CGraphDataZPFPQ24Kaim13CSpatialGraph_PQ24Kaim10CGraphData_003900d8();
    Kaim_CMetaClass_ctor(0x49bc30,0x407858,0x40ec28);
  }
  return 0x49bc30;
}


// ==== FUN_00390f40 @ 00390f40 ====

undefined8
FUN_00390f40(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
            )

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar2 = 0;
  piVar7[0x44] = (int)&DAT_003ec200;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_00390bc8();
  piVar6 = piVar1;
  piVar5 = piVar1;
  if (piVar1[0x100] < 1) {
    iVar2 = piVar1[0x100];
  }
  else {
    do {
      lVar3 = strcmp(*piVar5 + 8,piVar7 + 2);
      iVar2 = iVar2 + 1;
      if (lVar3 == 0) {
        *piVar6 = (int)piVar7;
        bVar4 = true;
        goto LAB_00391034;
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < piVar1[0x100]);
    iVar2 = piVar1[0x100];
  }
  if (iVar2 == 0x100) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    piVar1[iVar2] = (int)piVar7;
    piVar1[0x100] = piVar1[0x100] + 1;
  }
LAB_00391034:
  if (bVar4) {
    iVar2 = FUN_00390bc8();
    *piVar7 = *(int *)(iVar2 + 0x400) + -1;
  }
  else {
    *piVar7 = -1;
  }
  piVar7[1] = param_3;
  piVar7[0x42] = param_4;
  if (param_5 == '\x01') {
    iVar2 = FUN_002e10b8();
    piVar7[0x43] = iVar2;
  }
  else {
    piVar7[0x43] = 0;
  }
  if (param_6 != '\0') {
    DAT_003c7a20 = DAT_003c7a20 | piVar7[0x43];
  }
  return param_1;
}


// ==== Kaim_CPathCostData_003910d0 @ 003910d0 ====

/* Strings referenciadas:
     "Q24Kaim13CPathCostData" */

undefined8 Kaim_CPathCostData_003910d0(void)

{
  if (DAT_0049bc40 == 0) {
    FUN_00390060();
    Kaim_CMetaClass_ctor(0x49bc40,0x407920,0x49bb20);
  }
  return 0x49bc40;
}


// ==== FUN_003911b0 @ 003911b0 ====

void FUN_003911b0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CPathObject_CLinkedEdge_003911e8 @ 003911e8 ====

/* Strings referenciadas:
     "Q34Kaim11CPathObject11CLinkedEdge" */

undefined8 Kaim_CPathObject_CLinkedEdge_003911e8(void)

{
  if (DAT_0049bc50 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49bc50,0x407a30,0x40ebc0);
  }
  return 0x49bc50;
}


// ==== Kaim_CPathObject_00391238 @ 00391238 ====

/* Strings referenciadas:
     "Q24Kaim11CPathObject" */

undefined8 Kaim_CPathObject_00391238(void)

{
  if (DAT_0049bc60 == 0) {
    FUN_0038cb28();
    Kaim_CMetaClass_ctor(0x49bc60,0x407a58,0x49b4e8);
  }
  return 0x49bc60;
}


// ==== FUN_00391288 @ 00391288 ====

void FUN_00391288(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                 undefined8 param_5)

{
  (**(code **)(*param_4 + 0x1c))
            ((int)param_4 + (int)*(short *)(*param_4 + 0x18),param_2,param_3,param_5);
  return;
}


// ==== FUN_00391380 @ 00391380 ====

void FUN_00391380(int *param_1)

{
  (**(code **)(*param_1 + 0x5c))((int)param_1 + (int)*(short *)(*param_1 + 0x58),0);
  return;
}


// ==== FUN_003913b0 @ 003913b0 ====

void FUN_003913b0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_003913e8 @ 003913e8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim10CPointPair" */

undefined4 * FUN_003913e8(void)

{
  if (DAT_0049bc70 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x407b00);
    }
    Kaim_CMetaClass_ctor(0x49bc70,0x407b10,0x40ebc0);
  }
  return &DAT_0049bc70;
}


// ==== Kaim_CPathObjectManager_00391460 @ 00391460 ====

/* Strings referenciadas:
     "Q24Kaim18CPathObjectManager" */

undefined8 Kaim_CPathObjectManager_00391460(void)

{
  if (DAT_0049bc80 == 0) {
    Kaim_CWorldService_0038afb8();
    Kaim_CMetaClass_ctor(0x49bc80,0x407b28,0x49ab88);
  }
  return 0x49bc80;
}


// ==== FUN_003914c0 @ 003914c0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim5CPath" */

undefined4 * FUN_003914c0(void)

{
  if (DAT_0049bc90 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x407bd0);
    }
    Kaim_CMetaClass_ctor(0x49bc90,0x407be0,0x40ebc0);
  }
  return &DAT_0049bc90;
}


// ==== FUN_00391548 @ 00391548 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim13CSpatialGraph" */

undefined4 * FUN_00391548(void)

{
  if (DAT_0049bca0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x407bd0);
    }
    Kaim_CMetaClass_ctor(0x49bca0,0x407bf0,0x40ebc0);
  }
  return &DAT_0049bca0;
}


// ==== FUN_003915c0 @ 003915c0 ====

void FUN_003915c0(void)

{
  return;
}


// ==== FUN_003915c8 @ 003915c8 ====

void FUN_003915c8(void)

{
  return;
}


// ==== FUN_00391620 @ 00391620 ====

undefined4 FUN_00391620(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ==== FUN_00391710 @ 00391710 ====

bool FUN_00391710(int param_1)

{
  return (*(uint *)(param_1 + 4) & 8) != 0;
}


// ==== FUN_00391720 @ 00391720 ====

bool FUN_00391720(int param_1)

{
  return (*(uint *)(param_1 + 4) & 0x10) != 0;
}


// ==== FUN_00391730 @ 00391730 ====

void FUN_00391730(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== SaveFastBinaryGraphTraversal_00391768 @ 00391768 ====

/* Strings referenciadas:
     "28SaveFastBinaryGraphTraversal" */

undefined8 SaveFastBinaryGraphTraversal_00391768(void)

{
  if (DAT_0049bcb0 == 0) {
    Kaim_CGraphTraversal_00391d88();
    Kaim_CMetaClass_ctor(0x49bcb0,0x407c08,0x49bcc0);
  }
  return 0x49bcb0;
}


// ==== FUN_003917b8 @ 003917b8 ====

undefined4 FUN_003917b8(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint auStack_a0 [4];
  
  iVar4 = param_2[4];
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[1];
  uStack_ac = param_2[2];
  lVar3 = FUN_00391720(iVar4);
  if (lVar3 == 0) {
    uVar6 = 0;
    iVar5 = 0;
    uVar7 = 0;
    while (uVar1 = FUN_00391620(iVar4), uStack_a4 = uVar6, uVar7 < uVar1) {
      lVar3 = FUN_00383d40(*(int *)(iVar4 + 0x34) + iVar5 * 8);
      if (lVar3 != -1) {
        uVar7 = uVar7 + 1;
        if (*(int *)(iVar5 * 4 + *(int *)(iVar4 + 0x3c)) == *param_2) {
          uVar6 = uVar6 + 1;
        }
      }
      iVar5 = iVar5 + 1;
    }
  }
  else {
    uStack_a4 = 0;
    iVar5 = *(int *)(*param_2 * 4 + *(int *)(iVar4 + 0x20));
    if (iVar5 != -1) {
      do {
        iVar5 = *(int *)(iVar5 * 4 + *(int *)(iVar4 + 0x40));
        uStack_a4 = uStack_a4 + 1;
      } while (iVar5 != -1);
    }
  }
  iVar4 = param_2[4];
  if (*(int *)(iVar4 + 0x30) == 0) {
    auStack_a0[0] = 0;
  }
  else {
    lVar3 = FUN_00391710(iVar4);
    if (lVar3 == 0) {
      uVar6 = 0;
      iVar5 = 0;
      uVar7 = 0;
      while (uVar1 = FUN_00391620(iVar4), auStack_a0[0] = uVar6, uVar7 < uVar1) {
        lVar3 = FUN_00383d40(*(int *)(iVar4 + 0x34) + iVar5 * 8);
        if (lVar3 != -1) {
          uVar7 = uVar7 + 1;
          if (*(int *)(iVar5 * 4 + *(int *)(iVar4 + 0x38)) == *param_2) {
            uVar6 = uVar6 + 1;
          }
        }
        iVar5 = iVar5 + 1;
      }
    }
    else {
      iVar5 = *(int *)(*param_2 * 4 + *(int *)(iVar4 + 0x24));
      auStack_a0[0] = 0;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(iVar5 * 4 + *(int *)(iVar4 + 0x44));
          auStack_a0[0] = auStack_a0[0] + 1;
        } while (iVar5 != -1);
      }
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  if ((iVar4 != 0) && (iVar4 == 1)) {
    uStack_b0 = uStack_b0 >> 0x18 | uStack_b0 >> 8 & 0xff00 | (uStack_b0 & 0xff00) << 8 |
                uStack_b0 << 0x18;
    iVar4 = *(int *)(param_1 + 8);
  }
  if (iVar4 == 0) {
LAB_00391a40:
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    if (iVar4 == 1) {
      uStack_ac = uStack_ac >> 0x18 | uStack_ac >> 8 & 0xff00 | (uStack_ac & 0xff00) << 8 |
                  uStack_ac << 0x18;
      goto LAB_00391a40;
    }
    iVar4 = *(int *)(param_1 + 8);
  }
  if (iVar4 == 0) {
LAB_00391a84:
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    if (iVar4 == 1) {
      uStack_a8 = uStack_a8 >> 0x18 | uStack_a8 >> 8 & 0xff00 | (uStack_a8 & 0xff00) << 8 |
                  uStack_a8 << 0x18;
      goto LAB_00391a84;
    }
    iVar4 = *(int *)(param_1 + 8);
  }
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      iVar4 = *(int *)(param_1 + 8);
      goto LAB_00391acc;
    }
    uStack_a4 = uStack_a4 >> 0x18 | uStack_a4 >> 8 & 0xff00 | (uStack_a4 & 0xff00) << 8 |
                uStack_a4 << 0x18;
  }
  iVar4 = *(int *)(param_1 + 8);
LAB_00391acc:
  if ((iVar4 != 0) && (iVar4 == 1)) {
    auStack_a0[0] =
         auStack_a0[0] >> 0x18 | auStack_a0[0] >> 8 & 0xff00 | (auStack_a0[0] & 0xff00) << 8 |
         auStack_a0[0] << 0x18;
  }
  lVar3 = (*DAT_0045128c)(&uStack_b0,4,1,*(undefined4 *)(param_1 + 4));
  uVar2 = 0;
  if (lVar3 == 1) {
    lVar3 = (*DAT_0045128c)((uint)&uStack_b0 | 4,4,1,*(undefined4 *)(param_1 + 4));
    uVar2 = 0;
    if (lVar3 == 1) {
      lVar3 = (*DAT_0045128c)((uint)&uStack_b0 | 8,4,1,*(undefined4 *)(param_1 + 4));
      uVar2 = 0;
      if (lVar3 == 1) {
        lVar3 = (*DAT_0045128c)((uint)&uStack_b0 | 0xc,4,1,*(undefined4 *)(param_1 + 4));
        uVar2 = 0;
        if (lVar3 == 1) {
          lVar3 = (*DAT_0045128c)(auStack_a0,4,1,*(undefined4 *)(param_1 + 4));
          uVar2 = 0;
          if (lVar3 == 1) {
            uVar2 = 1;
          }
        }
      }
    }
  }
  return uVar2;
}


// ==== FUN_00391bf8 @ 00391bf8 ====

undefined4 FUN_00391bf8(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  uint uStack_50;
  uint uStack_4c;
  
  iVar4 = param_2[1];
  if (param_2 == (int *)(iVar4 + 0x5c)) {
    puVar1 = (uint *)(iVar4 + 100);
  }
  else {
    puVar1 = (uint *)(*(int *)(iVar4 + 0x18) +
                     *(int *)(*param_2 * 4 + *(int *)(iVar4 + 0x38)) * 0x14);
  }
  uStack_50 = *puVar1;
  iVar4 = param_2[1];
  if (param_2 == (int *)(iVar4 + 0x5c)) {
    puVar1 = (uint *)(iVar4 + 0x78);
  }
  else {
    puVar1 = (uint *)(*(int *)(iVar4 + 0x18) +
                     *(int *)(*param_2 * 4 + *(int *)(iVar4 + 0x3c)) * 0x14);
  }
  uStack_4c = *puVar1;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != 1) {
      iVar4 = *(int *)(param_1 + 8);
      goto LAB_00391cdc;
    }
    uStack_50 = uStack_50 >> 0x18 | uStack_50 >> 8 & 0xff00 | (uStack_50 & 0xff00) << 8 |
                uStack_50 << 0x18;
  }
  iVar4 = *(int *)(param_1 + 8);
LAB_00391cdc:
  if ((iVar4 != 0) && (iVar4 == 1)) {
    uStack_4c = uStack_4c >> 0x18 | uStack_4c >> 8 & 0xff00 | (uStack_4c & 0xff00) << 8 |
                uStack_4c << 0x18;
  }
  lVar3 = (*DAT_0045128c)(&uStack_50,4,1,*(undefined4 *)(param_1 + 4));
  uVar2 = 0;
  if (lVar3 == 1) {
    lVar3 = (*DAT_0045128c)((uint)&uStack_50 | 4,4,1,*(undefined4 *)(param_1 + 4));
    uVar2 = 0;
    if (lVar3 == 1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== Kaim_CGraphTraversal_00391d88 @ 00391d88 ====

/* Strings referenciadas:
     "Q24Kaim15CGraphTraversal" */

undefined8 Kaim_CGraphTraversal_00391d88(void)

{
  if (DAT_0049bcc0 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49bcc0,0x407c40,0x40ebc0);
  }
  return 0x49bcc0;
}


// ==== FUN_00391dd8 @ 00391dd8 ====

void FUN_00391dd8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00391e20 @ 00391e20 ====

void FUN_00391e20(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00391e58 @ 00391e58 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim15CGraphTraversal"
     "26FindNearestVertexTraversal" */

undefined4 * FUN_00391e58(void)

{
  if (DAT_0049bcd0 == 0) {
    if (DAT_0049bcc0 == 0) {
      if (DAT_0040ebc0 == 0) {
        FUN_00370188(0x40ebc0,0x407c70);
      }
      Kaim_CMetaClass_ctor(0x49bcc0,0x407c80,0x40ebc0);
    }
    Kaim_CMetaClass_ctor(0x49bcd0,0x407ca0,0x49bcc0);
  }
  return &DAT_0049bcd0;
}


// ==== FUN_00391f00 @ 00391f00 ====

undefined4 FUN_00391f00(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar1 = param_2[4];
    iVar5 = 0;
    if (*(int *)(iVar1 + 0x30) != 0) {
      lVar3 = FUN_00391710(iVar1);
      if (lVar3 == 0) {
        iVar5 = 0;
        iVar6 = 0;
        uVar7 = 0;
        while (uVar2 = FUN_00391620(iVar1), uVar7 < uVar2) {
          lVar3 = FUN_00383d40(*(int *)(iVar1 + 0x34) + iVar6 * 8);
          if (lVar3 != -1) {
            uVar7 = uVar7 + 1;
            if (*(int *)(iVar6 * 4 + *(int *)(iVar1 + 0x38)) == *param_2) {
              iVar5 = iVar5 + 1;
            }
          }
          iVar6 = iVar6 + 1;
        }
      }
      else {
        iVar6 = *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x24));
        iVar5 = 0;
        if (iVar6 != -1) {
          do {
            iVar6 = *(int *)(iVar6 * 4 + *(int *)(iVar1 + 0x44));
            iVar5 = iVar5 + 1;
          } while (iVar6 != -1);
        }
      }
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    iVar1 = param_2[4];
    lVar3 = FUN_00391720(iVar1);
    if (lVar3 == 0) {
      iVar5 = 0;
      iVar6 = 0;
      uVar7 = 0;
      while (uVar2 = FUN_00391620(iVar1), uVar7 < uVar2) {
        lVar3 = FUN_00383d40(*(int *)(iVar1 + 0x34) + iVar6 * 8);
        if (lVar3 != -1) {
          uVar7 = uVar7 + 1;
          if (*(int *)(iVar6 * 4 + *(int *)(iVar1 + 0x3c)) == *param_2) {
            iVar5 = iVar5 + 1;
          }
        }
        iVar6 = iVar6 + 1;
      }
    }
    else {
      iVar6 = *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x20));
      iVar5 = 0;
      if (iVar6 != -1) {
        do {
          iVar6 = *(int *)(iVar6 * 4 + *(int *)(iVar1 + 0x40));
          iVar5 = iVar5 + 1;
        } while (iVar6 != -1);
      }
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  uVar4 = FUN_00291f58(ABS(*(float *)(param_1 + 0x1c) - (float)param_2[3]) +
                       ABS(*(float *)(param_1 + 0x14) - (float)param_2[1]) +
                       ABS(*(float *)(param_1 + 0x18) - (float)param_2[2]));
  lVar3 = FUN_002919f8(*(undefined8 *)(param_1 + 8),0xbff0000000000000);
  if ((lVar3 != 0) && (lVar3 = FUN_002919f8(uVar4,*(undefined8 *)(param_1 + 8)), -1 < lVar3)) {
    return 1;
  }
  *(int **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = uVar4;
  lVar3 = FUN_002919f8(uVar4,0);
  if (lVar3 != 0) {
    return 1;
  }
  return 0;
}


// ==== FUN_003921a0 @ 003921a0 ====

void FUN_003921a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


// ==== FUN_003921b8 @ 003921b8 ====

void FUN_003921b8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_003921f0 @ 003921f0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim15CGraphTraversal"
     "27FindNearestVisibleTraversal" */

undefined4 * FUN_003921f0(void)

{
  if (DAT_0049bce0 == 0) {
    if (DAT_0049bcc0 == 0) {
      if (DAT_0040ebc0 == 0) {
        FUN_00370188(0x40ebc0,0x407c70);
      }
      Kaim_CMetaClass_ctor(0x49bcc0,0x407c80,0x40ebc0);
    }
    Kaim_CMetaClass_ctor(0x49bce0,0x407cc0,0x49bcc0);
  }
  return &DAT_0049bce0;
}


// ==== FUN_00392298 @ 00392298 ====

undefined4 FUN_00392298(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    iVar1 = param_2[4];
    iVar5 = 0;
    if (*(int *)(iVar1 + 0x30) != 0) {
      lVar3 = FUN_00391710(iVar1);
      if (lVar3 == 0) {
        iVar5 = 0;
        iVar6 = 0;
        uVar7 = 0;
        while (uVar2 = FUN_00391620(iVar1), uVar7 < uVar2) {
          lVar3 = FUN_00383d40(*(int *)(iVar1 + 0x34) + iVar6 * 8);
          if (lVar3 != -1) {
            uVar7 = uVar7 + 1;
            if (*(int *)(iVar6 * 4 + *(int *)(iVar1 + 0x38)) == *param_2) {
              iVar5 = iVar5 + 1;
            }
          }
          iVar6 = iVar6 + 1;
        }
      }
      else {
        iVar6 = *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x24));
        iVar5 = 0;
        if (iVar6 != -1) {
          do {
            iVar6 = *(int *)(iVar6 * 4 + *(int *)(iVar1 + 0x44));
            iVar5 = iVar5 + 1;
          } while (iVar6 != -1);
        }
      }
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (*(char *)(param_1 + 0x2d) != '\0') {
    iVar1 = param_2[4];
    lVar3 = FUN_00391720(iVar1);
    if (lVar3 == 0) {
      iVar5 = 0;
      iVar6 = 0;
      uVar7 = 0;
      while (uVar2 = FUN_00391620(iVar1), uVar7 < uVar2) {
        lVar3 = FUN_00383d40(*(int *)(iVar1 + 0x34) + iVar6 * 8);
        if (lVar3 != -1) {
          uVar7 = uVar7 + 1;
          if (*(int *)(iVar6 * 4 + *(int *)(iVar1 + 0x3c)) == *param_2) {
            iVar5 = iVar5 + 1;
          }
        }
        iVar6 = iVar6 + 1;
      }
    }
    else {
      iVar6 = *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x20));
      iVar5 = 0;
      if (iVar6 != -1) {
        do {
          iVar6 = *(int *)(iVar6 * 4 + *(int *)(iVar1 + 0x40));
          iVar5 = iVar5 + 1;
        } while (iVar6 != -1);
      }
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  fVar8 = *(float *)(param_1 + 0x1c) - (float)param_2[2];
  fVar10 = *(float *)(param_1 + 0x18) - (float)param_2[1];
  fVar9 = *(float *)(param_1 + 0x20) - (float)param_2[3];
  uVar4 = FUN_00291f58(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  lVar3 = FUN_002919f8(*(undefined8 *)(param_1 + 8),0xbff0000000000000);
  if (lVar3 == 0) {
    *(int **)(param_1 + 0x14) = param_2;
  }
  else {
    lVar3 = FUN_002919f8(uVar4,*(undefined8 *)(param_1 + 8));
    if (-1 < lVar3) {
      return 1;
    }
    lVar3 = FUN_002e27f8(*(undefined4 *)(param_1 + 0x24),param_1 + 0x18,param_2 + 1,
                         *(undefined4 *)(param_1 + 0x28),2);
    if (lVar3 == 0) {
      return 1;
    }
    *(int **)(param_1 + 0x14) = param_2;
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
  return 1;
}


// ==== FUN_00392550 @ 00392550 ====

void FUN_00392550(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


// ==== FUN_00392568 @ 00392568 ====

void FUN_00392568(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_003925a0 @ 003925a0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim15CGraphTraversal"
     "34FindNearestLocallyVisibleTraversal" */

undefined4 * FUN_003925a0(void)

{
  if (DAT_0049bcf0 == 0) {
    if (DAT_0049bcc0 == 0) {
      if (DAT_0040ebc0 == 0) {
        FUN_00370188(0x40ebc0,0x407c70);
      }
      Kaim_CMetaClass_ctor(0x49bcc0,0x407c80,0x40ebc0);
    }
    Kaim_CMetaClass_ctor(0x49bcf0,0x407ce0,0x49bcc0);
  }
  return &DAT_0049bcf0;
}


// ==== FUN_00392648 @ 00392648 ====

undefined4 FUN_00392648(int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = *(float *)(param_1 + 0x20) - (float)param_2[2];
  fVar14 = *(float *)(param_1 + 0x1c) - (float)param_2[1];
  fVar12 = *(float *)(param_1 + 0x24) - (float)param_2[3];
  uVar5 = FUN_00291f58(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12);
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar6 = FUN_00291f58(*(undefined4 *)(param_1 + 0x34));
    lVar7 = FUN_002919f8(uVar5,uVar6);
    if (lVar7 < 0) {
      cVar2 = *(char *)(param_1 + 0x38);
      goto LAB_00392720;
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      return 1;
    }
  }
  uVar6 = FUN_00291f58(*(undefined4 *)(param_1 + 0x34));
  lVar7 = FUN_002919f8(uVar5,uVar6);
  if (lVar7 < 0) {
    return 1;
  }
  cVar2 = *(char *)(param_1 + 0x38);
LAB_00392720:
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1 + 0x39);
  }
  else {
    iVar3 = param_2[4];
    iVar9 = 0;
    if (*(int *)(iVar3 + 0x30) != 0) {
      lVar7 = FUN_00391710(iVar3);
      if (lVar7 == 0) {
        iVar9 = 0;
        iVar10 = 0;
        uVar11 = 0;
        while (uVar4 = FUN_00391620(iVar3), uVar11 < uVar4) {
          lVar7 = FUN_00383d40(*(int *)(iVar3 + 0x34) + iVar10 * 8);
          if (lVar7 != -1) {
            uVar11 = uVar11 + 1;
            if (*(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x38)) == *param_2) {
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        }
      }
      else {
        iVar10 = *(int *)(*param_2 * 4 + *(int *)(iVar3 + 0x24));
        iVar9 = 0;
        if (iVar10 != -1) {
          do {
            iVar10 = *(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x44));
            iVar9 = iVar9 + 1;
          } while (iVar10 != -1);
        }
      }
    }
    if (iVar9 == 0) {
      return 1;
    }
    cVar2 = *(char *)(param_1 + 0x39);
  }
  if (cVar2 == '\0') {
    fVar12 = *(float *)(param_1 + 0x10);
  }
  else {
    iVar3 = param_2[4];
    lVar7 = FUN_00391720(iVar3);
    if (lVar7 == 0) {
      iVar9 = 0;
      iVar10 = 0;
      uVar11 = 0;
      while (uVar4 = FUN_00391620(iVar3), uVar11 < uVar4) {
        lVar7 = FUN_00383d40(*(int *)(iVar3 + 0x34) + iVar10 * 8);
        if (lVar7 != -1) {
          uVar11 = uVar11 + 1;
          if (*(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x3c)) == *param_2) {
            iVar9 = iVar9 + 1;
          }
        }
        iVar10 = iVar10 + 1;
      }
    }
    else {
      iVar10 = *(int *)(*param_2 * 4 + *(int *)(iVar3 + 0x20));
      iVar9 = 0;
      if (iVar10 != -1) {
        do {
          iVar10 = *(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x40));
          iVar9 = iVar9 + 1;
        } while (iVar10 != -1);
      }
    }
    if (iVar9 == 0) {
      return 1;
    }
    fVar12 = *(float *)(param_1 + 0x10);
  }
  if (fVar12 != -1.0) {
    uVar6 = FUN_00291f58(*(float *)(param_1 + 0x20) - (float)param_2[2]);
    uVar8 = FUN_00291f58(*(undefined4 *)(param_1 + 0x10));
    uVar8 = FUN_00291410(uVar8,uVar8);
    lVar7 = FUN_002919f8(uVar6,uVar8);
    if (0 < lVar7) {
      return 1;
    }
    uVar6 = FUN_00291f58((float)param_2[2] - *(float *)(param_1 + 0x20));
    uVar8 = FUN_00291f58(*(undefined4 *)(param_1 + 0x10));
    uVar8 = FUN_002914d0(uVar8,0x3ff8000000000000);
    lVar7 = FUN_002919f8(uVar6,uVar8);
    if (0 < lVar7) {
      return 1;
    }
  }
  lVar7 = FUN_002919f8(*(undefined8 *)(param_1 + 8),0xbff0000000000000);
  if ((lVar7 != 0) && (lVar7 = FUN_002919f8(uVar5,*(undefined8 *)(param_1 + 8)), -1 < lVar7)) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x31) != '\0') &&
     (lVar7 = FUN_002e27f8(*(undefined4 *)(param_1 + 0x28),param_1 + 0x1c,param_2 + 1,
                           *(undefined4 *)(param_1 + 0x2c),2), lVar7 == 0)) {
    return 1;
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  iVar3 = DAT_003c9ed4;
  fVar12 = 0.0;
  bVar1 = DAT_003c9ed4 != 0;
  *(int **)(param_1 + 0x18) = param_2;
  if (bVar1) {
    fVar12 = *(float *)(iVar3 + 0xc);
  }
  fVar13 = 0.0;
  if (iVar3 != 0) {
    fVar13 = *(float *)(iVar3 + 0xc);
  }
  uVar5 = FUN_00291f58(fVar12 * 0.1 * fVar13 * 0.1);
  lVar7 = FUN_002919f8(*(undefined8 *)(param_1 + 8),uVar5);
  if (-1 < lVar7) {
    return 1;
  }
  return 0;
}


// ==== FUN_00392a50 @ 00392a50 ====

void FUN_00392a50(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// ==== FUN_00392a68 @ 00392a68 ====

void FUN_00392a68(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00392aa0 @ 00392aa0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim15CGraphTraversal"
     "24FindNearestEdgeTraversal" */

undefined4 * FUN_00392aa0(void)

{
  if (DAT_0049bd00 == 0) {
    if (DAT_0049bcc0 == 0) {
      if (DAT_0040ebc0 == 0) {
        FUN_00370188(0x40ebc0,0x407c70);
      }
      Kaim_CMetaClass_ctor(0x49bcc0,0x407c80,0x40ebc0);
    }
    Kaim_CMetaClass_ctor(0x49bd00,0x407d08,0x49bcc0);
  }
  return &DAT_0049bd00;
}


// ==== FUN_00392b48 @ 00392b48 ====

/* WARNING: Removing unreachable block (ram,0x00392cd8) */

undefined4 FUN_00392b48(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
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
  
  iVar1 = param_2[1];
  if (param_2 == (int *)(iVar1 + 0x5c)) {
    iVar1 = iVar1 + 100;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x38)) * 0x14;
  }
  if (ABS(*(float *)(param_1 + 0x1c) - *(float *)(iVar1 + 8)) <=
      *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x10)) {
    iVar1 = param_2[1];
    if (param_2 == (int *)(iVar1 + 0x5c)) {
      iVar4 = iVar1 + 100;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x38)) * 0x14;
    }
    if (param_2 == (int *)(iVar1 + 0x5c)) {
      iVar1 = iVar1 + 0x78;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar1 + 0x3c)) * 0x14;
    }
    fStack_58 = *(float *)(iVar4 + 0xc) - *(float *)(param_1 + 0x20);
    fStack_60 = *(float *)(iVar4 + 4) - *(float *)(param_1 + 0x18);
    fStack_5c = *(float *)(iVar4 + 8) - *(float *)(param_1 + 0x1c);
    fStack_50 = *(float *)(iVar1 + 4) - *(float *)(param_1 + 0x18);
    fStack_48 = *(float *)(iVar1 + 0xc) - *(float *)(param_1 + 0x20);
    fStack_70 = fStack_60 + fStack_50;
    fStack_4c = *(float *)(iVar1 + 8) - *(float *)(param_1 + 0x1c);
    fStack_68 = fStack_58 + fStack_48;
    fStack_6c = fStack_5c + fStack_4c;
    fVar5 = (float)FUN_00389140(&fStack_70);
    uVar2 = FUN_00291f58(SQRT(fVar5));
    lVar3 = FUN_002919f8(*(undefined8 *)(param_1 + 8),0xbff0000000000000);
    if ((lVar3 == 0) || (lVar3 = FUN_002919f8(uVar2,*(undefined8 *)(param_1 + 8)), lVar3 < 0)) {
      *(int **)(param_1 + 0x14) = param_2;
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return 1;
}


// ==== FUN_00392d38 @ 00392d38 ====

void FUN_00392d38(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


// ==== Kaim_CAccessWaysData_00392d50 @ 00392d50 ====

/* Strings referenciadas:
     "Q24Kaim15CAccessWaysData" */

undefined8 Kaim_CAccessWaysData_00392d50(void)

{
  if (DAT_0049bd10 == 0) {
    FUN_00390060();
    Kaim_CMetaClass_ctor(0x49bd10,0x407d78,0x49bb20);
  }
  return 0x49bd10;
}


// ==== FUN_00392dc0 @ 00392dc0 ====

void FUN_00392dc0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== ComputeAccessWaysTraversal_00392df8 @ 00392df8 ====

/* Strings referenciadas:
     "26ComputeAccessWaysTraversal" */

undefined8 ComputeAccessWaysTraversal_00392df8(void)

{
  if (DAT_0049bd20 == 0) {
    Kaim_CGraphTraversal_00391d88();
    Kaim_CMetaClass_ctor(0x49bd20,0x407d98,0x49bcc0);
  }
  return 0x49bd20;
}


// ==== FUN_00392e48 @ 00392e48 ====

void FUN_00392e48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// ==== FUN_00392e50 @ 00392e50 ====

undefined4 FUN_00392e50(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined *puStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  short sStack_b4;
  undefined4 auStack_b0 [4];
  
  puStack_d0 = &DAT_003ef3a0;
  iStack_bc = 0;
  iStack_b8 = 0;
  sStack_b4 = 0;
  iStack_c4 = param_2[3];
  iStack_c8 = param_2[2];
  uStack_c0 = *(undefined4 *)(param_1 + 8);
  iStack_cc = param_2[1];
  iVar6 = *(int *)(param_1 + 4);
  (*(code *)PTR_FUN_003ef3b4)((int)&puStack_d0 + (int)DAT_003ef3b0,iVar6);
  uVar11 = 0;
  uVar9 = 0;
  if (*(int *)(iVar6 + 0x14) != 0) {
    iVar10 = 0;
    do {
      if (uVar11 < *(uint *)(iVar6 + 0xc)) {
        piVar5 = (int *)(iVar10 + *(int *)(iVar6 + 0x18));
        piVar7 = (int *)0x0;
        if (*piVar5 != -1) {
          piVar7 = piVar5;
        }
      }
      else {
        piVar7 = (int *)0x0;
      }
      if (piVar7 == (int *)0x0) {
        uVar2 = *(uint *)(iVar6 + 0x14);
      }
      else {
        uVar9 = uVar9 + 1;
        lVar3 = (**(code **)(puStack_d0 + 0x24))
                          ((int)&puStack_d0 + (int)*(short *)(puStack_d0 + 0x20));
        if (lVar3 == 0) break;
        uVar2 = *(uint *)(iVar6 + 0x14);
      }
      iVar10 = iVar10 + 0x14;
      uVar11 = uVar11 + 1;
    } while (uVar9 < uVar2);
  }
  iVar6 = *(int *)(param_1 + 4);
  (**(code **)(puStack_d0 + 0x1c))((int)&puStack_d0 + (int)*(short *)(puStack_d0 + 0x18),iVar6);
  uVar11 = 0;
  uVar9 = 0;
  if (*(int *)(iVar6 + 0x30) != 0) {
    do {
      if (uVar11 < *(uint *)(iVar6 + 0x28)) {
        piVar5 = (int *)(uVar11 * 8 + *(int *)(iVar6 + 0x34));
        piVar7 = (int *)0x0;
        if (*piVar5 != -1) {
          piVar7 = piVar5;
        }
      }
      else {
        piVar7 = (int *)0x0;
      }
      if (piVar7 == (int *)0x0) {
        uVar2 = *(uint *)(iVar6 + 0x30);
      }
      else {
        uVar9 = uVar9 + 1;
        lVar3 = (**(code **)(puStack_d0 + 0x2c))
                          ((int)&puStack_d0 + (int)*(short *)(puStack_d0 + 0x28));
        if (lVar3 == 0) {
          iVar6 = *(int *)(param_1 + 8);
          goto LAB_00393034;
        }
        uVar2 = *(uint *)(iVar6 + 0x30);
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 < uVar2);
  }
  iVar6 = *(int *)(param_1 + 8);
LAB_00393034:
  *(short *)(*param_2 * 2 + *(int *)(iVar6 + 0xc)) = sStack_b4;
  iVar8 = (int)sStack_b4 << 1;
  iVar6 = *param_2;
  iVar10 = *(int *)(*(int *)(param_1 + 8) + 8);
  auStack_b0[0] = 0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,auStack_b0);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_b0[0],iVar8,uVar4);
  }
  *(undefined4 *)(iVar6 * 4 + iVar10) = auStack_b0[0];
  memcpy(*(undefined4 *)(*param_2 * 4 + *(int *)(*(int *)(param_1 + 8) + 8)),iStack_b8,iVar8);
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x14);
  if (pcVar1 != (code *)0x0) {
    iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    if (iVar6 == 0) {
      trap(7);
    }
    (*pcVar1)((*param_2 * 100) / iVar6);
  }
  puStack_d0 = &DAT_003ef3a0;
  if (iStack_bc != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    iStack_bc = 0;
  }
  if (iStack_b8 != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return 1;
}


// ==== FUN_00393200 @ 00393200 ====

/* Strings referenciadas:
     "Q24Kaim15CGraphTraversal"
     "26ComputeVisibilityTraversal" */

undefined4 * FUN_00393200(void)

{
  if (DAT_0049bd30 == 0) {
    if (DAT_0049bcc0 == 0) {
      Kaim_CObject_00389100();
      Kaim_CMetaClass_ctor(0x49bcc0,0x407dd8,0x40ebc0);
    }
    Kaim_CMetaClass_ctor(0x49bd30,0x407e70,0x49bcc0);
  }
  return &DAT_0049bd30;
}


// ==== FUN_00393288 @ 00393288 ====

void FUN_00393288(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003ef3a0;
  if (puVar1[5] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    puVar1[5] = 0;
  }
  if (puVar1[6] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    puVar1[6] = 0;
  }
  *puVar1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00393320 @ 00393320 ====

void FUN_00393320(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 auStack_40 [4];
  
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  auStack_40[0] = 0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),uVar1,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],uVar1,uVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = auStack_40[0];
  return;
}


// ==== FUN_00393398 @ 00393398 ====

undefined4 FUN_00393398(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *param_2;
  uVar2 = FUN_002e27d0(param_1 + 4,param_2 + 1,0,1);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + iVar1) = uVar2;
  return 1;
}


// ==== FUN_003933f0 @ 003933f0 ====

void FUN_003933f0(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  iVar2 = *(int *)(param_2 + 0x30) << 1;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],iVar2,uVar1);
  }
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = auStack_40[0];
  return;
}


// ==== Kaim_CAstarData_00393548 @ 00393548 ====

/* Strings referenciadas:
     "Q24Kaim10CAstarData" */

undefined8 Kaim_CAstarData_00393548(void)

{
  if (DAT_0049bd40 == 0) {
    FUN_00390060();
    Kaim_CMetaClass_ctor(0x49bd40,0x407ed8,0x49bb20);
  }
  return 0x49bd40;
}


// ==== FUN_003935b8 @ 003935b8 ====

undefined8 FUN_003935b8(undefined8 param_1)

{
  if (DAT_003efcc8 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003efcc8 = 0;
  return param_1;
}


// ==== FUN_003935d8 @ 003935d8 ====

undefined * FUN_003935d8(void)

{
  if (DAT_004548a4 == 0) {
    FUN_003935b8(0x3ef8c0);
    DAT_004548a4 = 1;
    FUN_0035e690(0x305438);
  }
  return &DAT_003ef8c0;
}


// ==== FUN_00393630 @ 00393630 ====

undefined8 FUN_00393630(undefined8 param_1)

{
  if (DAT_003efd18 != '\0') {
    *(undefined4 *)((int)param_1 + 0x40) = 0;
  }
  DAT_003efd18 = 0;
  return param_1;
}


// ==== FUN_00393650 @ 00393650 ====

undefined * FUN_00393650(void)

{
  if (DAT_004548a8 == 0) {
    FUN_00393630(0x3efcd0);
    DAT_004548a8 = 1;
    FUN_0035e690(0x305448);
  }
  return &DAT_003efcd0;
}


// ==== FUN_003936a8 @ 003936a8 ====

undefined8 FUN_003936a8(undefined8 param_1)

{
  if (DAT_003efd68 != '\0') {
    *(undefined4 *)((int)param_1 + 0x40) = 0;
  }
  DAT_003efd68 = 0;
  return param_1;
}


// ==== FUN_003936c8 @ 003936c8 ====

undefined * FUN_003936c8(void)

{
  if (DAT_004548ac == 0) {
    FUN_003936a8(0x3efd20);
    DAT_004548ac = 1;
    FUN_0035e690(0x305460);
  }
  return &DAT_003efd20;
}


// ==== FUN_00393720 @ 00393720 ====

undefined8 FUN_00393720(undefined8 param_1)

{
  if (DAT_003efdb8 != '\0') {
    *(undefined4 *)((int)param_1 + 0x40) = 0;
  }
  DAT_003efdb8 = 0;
  return param_1;
}


// ==== FUN_00393740 @ 00393740 ====

undefined * FUN_00393740(void)

{
  if (DAT_004548b0 == 0) {
    FUN_00393720(0x3efd70);
    DAT_004548b0 = 1;
    FUN_0035e690(0x305478);
  }
  return &DAT_003efd70;
}


// ==== FUN_00393798 @ 00393798 ====

undefined8 FUN_00393798(undefined8 param_1)

{
  if (DAT_003efe08 != '\0') {
    *(undefined4 *)((int)param_1 + 0x40) = 0;
  }
  DAT_003efe08 = 0;
  return param_1;
}


// ==== FUN_003937b8 @ 003937b8 ====

undefined * FUN_003937b8(void)

{
  if (DAT_004548b4 == 0) {
    FUN_00393798(0x3efdc0);
    DAT_004548b4 = 1;
    FUN_0035e690(0x305490);
  }
  return &DAT_003efdc0;
}


// ==== FUN_00393810 @ 00393810 ====

float FUN_00393810(float *param_1)

{
  return *param_1 * *param_1 + param_1[2] * param_1[2];
}


// ==== FUN_00393828 @ 00393828 ====

void FUN_00393828(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_00393860 @ 00393860 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaim11CPathFinder15CConstraintInfo" */

undefined4 * Kaim_CObject_00393860(void)

{
  if (DAT_0049bd50 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4083a0);
    }
    Kaim_CMetaClass_ctor(0x49bd50,0x4083c8,0x40ebc0);
  }
  return &DAT_0049bd50;
}


// ==== Kaim_CPathFinder_003938d8 @ 003938d8 ====

/* Strings referenciadas:
     "Q24Kaim11CPathFinder" */

undefined8 Kaim_CPathFinder_003938d8(void)

{
  if (DAT_0049bd60 == 0) {
    Kaim_IPathFinder_0038d280();
    Kaim_CMetaClass_ctor(0x49bd60,0x4083f0,0x49b940);
  }
  return 0x49bd60;
}


// ==== FUN_00393950 @ 00393950 ====

void FUN_00393950(int param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  FUN_002fb6d8(*(undefined4 *)(param_1 + 100),param_2,param_3,param_4);
  return;
}


// ==== FUN_00393978 @ 00393978 ====

int FUN_00393978(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_003935d8();
    piVar4 = piVar1;
    piVar3 = piVar1;
    if (0 < piVar1[0x100]) {
      do {
        lVar2 = strcmp(*piVar3 + 8,param_1);
        iVar5 = iVar5 + 1;
        if (lVar2 == 0) {
          return *piVar4;
        }
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar5 < piVar1[0x100]);
    }
  }
  return 0;
}


// ==== FUN_00393a18 @ 00393a18 ====

undefined4 FUN_00393a18(char *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar3 = (int *)FUN_00393650();
  piVar1 = piVar3 + 0x10;
  iVar7 = 0;
  if (0 < *piVar1) {
    piVar6 = piVar3;
    do {
      iVar5 = 0;
      if (*(char *)(*piVar3 + 4) == *param_1) {
        cVar2 = *param_1;
        pcVar4 = param_1;
        while( true ) {
          if (cVar2 == '\0') {
            return *(undefined4 *)(*piVar6 + 0x104);
          }
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 1;
          if (*(char *)(*piVar3 + 4 + iVar5) != *pcVar4) break;
          cVar2 = *pcVar4;
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar7 < *piVar1);
  }
  return 0;
}


// ==== FUN_00393ac0 @ 00393ac0 ====

undefined4 FUN_00393ac0(char *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar3 = (int *)FUN_003936c8();
  piVar1 = piVar3 + 0x10;
  iVar7 = 0;
  if (0 < *piVar1) {
    piVar6 = piVar3;
    do {
      iVar5 = 0;
      if (*(char *)(*piVar3 + 4) == *param_1) {
        cVar2 = *param_1;
        pcVar4 = param_1;
        while( true ) {
          if (cVar2 == '\0') {
            return *(undefined4 *)(*piVar6 + 0x104);
          }
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 1;
          if (*(char *)(*piVar3 + 4 + iVar5) != *pcVar4) break;
          cVar2 = *pcVar4;
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar7 < *piVar1);
  }
  return 0;
}


// ==== FUN_00393b68 @ 00393b68 ====

undefined4 FUN_00393b68(char *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar3 = (int *)FUN_00393740();
  piVar1 = piVar3 + 0x10;
  iVar7 = 0;
  if (0 < *piVar1) {
    piVar6 = piVar3;
    do {
      iVar5 = 0;
      if (*(char *)(*piVar3 + 4) == *param_1) {
        cVar2 = *param_1;
        pcVar4 = param_1;
        while( true ) {
          if (cVar2 == '\0') {
            return *(undefined4 *)(*piVar6 + 0x104);
          }
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 1;
          if (*(char *)(*piVar3 + 4 + iVar5) != *pcVar4) break;
          cVar2 = *pcVar4;
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar7 < *piVar1);
  }
  return 0;
}


// ==== FUN_00393c10 @ 00393c10 ====

undefined4 FUN_00393c10(char *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar3 = (int *)FUN_003937b8();
  piVar1 = piVar3 + 0x10;
  iVar7 = 0;
  if (0 < *piVar1) {
    piVar6 = piVar3;
    do {
      iVar5 = 0;
      if (*(char *)(*piVar3 + 4) == *param_1) {
        cVar2 = *param_1;
        pcVar4 = param_1;
        while( true ) {
          if (cVar2 == '\0') {
            return *(undefined4 *)(*piVar6 + 0x104);
          }
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 1;
          if (*(char *)(*piVar3 + 4 + iVar5) != *pcVar4) break;
          cVar2 = *pcVar4;
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar7 < *piVar1);
  }
  return 0;
}


// ==== Kaimt_CStringMap2ZPFRQ24Kaim11CPathFinder_UcUi16_00393cb8 @ 00393cb8 ====

/* Strings referenciadas:
     "Q24Kaimt10CStringMap2ZPFRQ24Kaim11CPathFinder_UcUi16" */

undefined8 Kaimt_CStringMap2ZPFRQ24Kaim11CPathFinder_UcUi16_00393cb8(void)

{
  if (DAT_0049bd70 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49bd70,0x408460,0x40ebc0);
  }
  return 0x49bd70;
}


// ==== Kaimt_CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim7CVectorUcUc_PQ24Kaim7CVertexUi16_00393d08 @ 00393d08 ====

/* Strings referenciadas:
     "Q24Kaimt10CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim7CVectorUcUc_PQ24Kaim7CVertexUi16" */

undefined8
Kaimt_CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim7CVectorUcUc_PQ24Kaim7CVertexUi16_00393d08(void)

{
  if (DAT_0049bd80 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49bd80,0x408498,0x40ebc0);
  }
  return 0x49bd80;
}


// ==== Kaimt_CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim7CVector_UcUi16_00393d58 @ 00393d58 ====

/* Strings referenciadas:
     "Q24Kaimt10CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim7CVector_UcUi16" */

undefined8 Kaimt_CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim7CVector_UcUi16_00393d58(void)

{
  if (DAT_0049bd90 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49bd90,0x4084f0,0x40ebc0);
  }
  return 0x49bd90;
}


// ==== Kaimt_CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim4MoveRCQ24Kaim7CVector_UcUi16_00393da8 @ 00393da8 ====

/* Strings referenciadas:
     "Q24Kaimt10CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim4MoveRCQ24Kaim7CVector_UcUi16" */

undefined8
Kaimt_CStringMap2ZPFRQ24Kaim11CPathFinderRQ24Kaim4MoveRCQ24Kaim7CVector_UcUi16_00393da8(void)

{
  if (DAT_0049bda0 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49bda0,0x408538,0x40ebc0);
  }
  return 0x49bda0;
}


// ==== FUN_00393df8 @ 00393df8 ====

void FUN_00393df8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00393e30 @ 00393e30 ====

void FUN_00393e30(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00393e68 @ 00393e68 ====

void FUN_00393e68(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00393ea0 @ 00393ea0 ====

void FUN_00393ea0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CRepulsorDynamicAvoidance_00393ed8 @ 00393ed8 ====

/* Strings referenciadas:
     "Q24Kaim25CRepulsorDynamicAvoidance" */

undefined8 Kaim_CRepulsorDynamicAvoidance_00393ed8(void)

{
  if (DAT_0049bdb0 == 0) {
    Kaim_IDynamicAvoidance_00393f78();
    Kaim_CMetaClass_ctor(0x49bdb0,0x408690,0x49bdc0);
  }
  return 0x49bdb0;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim17IDynamicAvoidanceZPFPQ24Kaim11CPathFinder_PQ24Kaim17IDynamicAvoidance_00393f38 @ 00393f38 ====

/* Strings referenciadas:
     
   "Q24Kaimt10CMetaClass2ZQ24Kaim17IDynamicAvoidanceZPFPQ24Kaim11CPathFinder_PQ24Kaim17IDynamicAvoidance"
    */

undefined8
Kaimt_CMetaClass2ZQ24Kaim17IDynamicAvoidanceZPFPQ24Kaim11CPathFinder_PQ24Kaim17IDynamicAvoidance_00393f38
          (void)

{
  if (DAT_0040ec38 == 0) {
    FUN_00370188(0x40ec38,0x4086b8);
  }
  return 0x40ec38;
}


// ==== Kaim_IDynamicAvoidance_00393f78 @ 00393f78 ====

/* Strings referenciadas:
     "Q24Kaim17IDynamicAvoidance" */

undefined8 Kaim_IDynamicAvoidance_00393f78(void)

{
  if (DAT_0049bdc0 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49bdc0,0x408720,0x40ebc0);
  }
  return 0x49bdc0;
}


// ==== FUN_00393fc8 @ 00393fc8 ====

void FUN_00393fc8(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003f07a0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00393ff8 @ 00393ff8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim4CGap" */

undefined4 * FUN_00393ff8(void)

{
  if (DAT_0049bdd0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408888);
    }
    Kaim_CMetaClass_ctor(0x49bdd0,0x4088e0,0x40ebc0);
  }
  return &DAT_0049bdd0;
}


// ==== FUN_00394070 @ 00394070 ====

void FUN_00394070(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_003940a8 @ 003940a8 ====

void FUN_003940a8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_003940e0 @ 003940e0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim13EntityTracker" */

undefined4 * FUN_003940e0(void)

{
  if (DAT_0049bde0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408888);
    }
    Kaim_CMetaClass_ctor(0x49bde0,0x4088f0,0x40ebc0);
  }
  return &DAT_0049bde0;
}


// ==== Kaim_CObject_00394158 @ 00394158 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaim20CGapDynamicAvoidance16CCandidateTarget" */

undefined4 * Kaim_CObject_00394158(void)

{
  if (DAT_0049bdf0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408888);
    }
    Kaim_CMetaClass_ctor(0x49bdf0,0x408908,0x40ebc0);
  }
  return &DAT_0049bdf0;
}


// ==== Kaim_CGapDynamicAvoidance_003941d0 @ 003941d0 ====

/* Strings referenciadas:
     "Q24Kaim20CGapDynamicAvoidance" */

undefined8 Kaim_CGapDynamicAvoidance_003941d0(void)

{
  if (DAT_0049be00 == 0) {
    Kaim_IDynamicAvoidance_00393f78();
    Kaim_CMetaClass_ctor(0x49be00,0x408938,0x49bdc0);
  }
  return 0x49be00;
}


// ==== FUN_00394230 @ 00394230 ====

void FUN_00394230(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_003942b8 @ 003942b8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaimt8CVarList1ZQ34Kaim20CGapDynamicAvoidance16CCandidateTarget" */

undefined4 * Kaim_CObject_003942b8(void)

{
  if (DAT_0049be10 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408888);
    }
    Kaim_CMetaClass_ctor(0x49be10,0x408958,0x40ebc0);
  }
  return &DAT_0049be10;
}


// ==== FUN_00394330 @ 00394330 ====

void FUN_00394330(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  param_1[1] = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_00394370 @ 00394370 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZQ34Kaim20CGapDynamicAvoidance16CCandidateTarget5CCell" */

undefined4 * Kaim_CObject_00394370(void)

{
  if (DAT_0049be20 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408888);
    }
    Kaim_CMetaClass_ctor(0x49be20,0x4089a0,0x40ebc0);
  }
  return &DAT_0049be20;
}


// ==== FUN_003943e8 @ 003943e8 ====

void FUN_003943e8(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003f0948;
  if ((puVar4[6] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) {
    piVar3 = piVar1 + piVar1[-4] * 0xd;
    if (piVar1 == piVar3) {
      iVar2 = puVar4[1];
    }
    else {
      do {
        piVar3 = piVar3 + -0xd;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[1] != piVar3);
      iVar2 = puVar4[1];
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2 + -0x10);
  }
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_003944c0 @ 003944c0 ====

void FUN_003944c0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_003944f8 @ 003944f8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZQ34Kaim20CGapDynamicAvoidance16CCandidateTarget9CIterator" */

undefined4 * Kaim_CObject_003944f8(void)

{
  if (DAT_0049be30 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408888);
    }
    Kaim_CMetaClass_ctor(0x49be30,0x4089f0,0x40ebc0);
  }
  return &DAT_0049be30;
}


// ==== FUN_00394570 @ 00394570 ====

void FUN_00394570(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_003945a8 @ 003945a8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZQ24Kaim4CGap9CIterator" */

undefined4 * Kaim_CObject_003945a8(void)

{
  if (DAT_0049be40 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408888);
    }
    Kaim_CMetaClass_ctor(0x49be40,0x408a40,0x40ebc0);
  }
  return &DAT_0049be40;
}


// ==== Kaim_CObject_00394620 @ 00394620 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaimt8CVarList1ZQ24Kaim4CGap" */

undefined4 * Kaim_CObject_00394620(void)

{
  if (DAT_0049be50 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408b18);
    }
    Kaim_CMetaClass_ctor(0x49be50,0x408b38,0x40ebc0);
  }
  return &DAT_0049be50;
}


// ==== FUN_00394698 @ 00394698 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim11CGapManager" */

undefined4 * FUN_00394698(void)

{
  if (DAT_0049be60 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408b18);
    }
    Kaim_CMetaClass_ctor(0x49be60,0x408b58,0x40ebc0);
  }
  return &DAT_0049be60;
}


// ==== FUN_00394710 @ 00394710 ====

void FUN_00394710(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  param_1[1] = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_00394750 @ 00394750 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZQ24Kaim4CGap5CCell" */

undefined4 * Kaim_CObject_00394750(void)

{
  if (DAT_0049be70 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x408b18);
    }
    Kaim_CMetaClass_ctor(0x49be70,0x408b70,0x40ebc0);
  }
  return &DAT_0049be70;
}


// ==== FUN_003947c8 @ 003947c8 ====

void FUN_003947c8(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003f0f18;
  if ((puVar4[6] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) {
    piVar3 = piVar1 + piVar1[-4] * 10;
    if (piVar1 == piVar3) {
      iVar2 = puVar4[1];
    }
    else {
      do {
        piVar3 = piVar3 + -10;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[1] != piVar3);
      iVar2 = puVar4[1];
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2 + -0x10);
  }
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_003948a0 @ 003948a0 ====

void FUN_003948a0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003f0f00;
  piVar1 = (int *)puVar2[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  *puVar2 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00394920 @ 00394920 ====

void FUN_00394920(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003f07a0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CDynamicAvoidanceClass_00394950 @ 00394950 ====

/* Strings referenciadas:
     "Q24Kaim22CDynamicAvoidanceClass" */

undefined8 Kaim_CDynamicAvoidanceClass_00394950(void)

{
  if (DAT_0049be80 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim17IDynamicAvoidanceZPFPQ24Kaim11CPathFinder_PQ24Kaim17IDynamicAvoidance_00393f38
              ();
    Kaim_CMetaClass_ctor(0x49be80,0x408bd8,0x40ec38);
  }
  return 0x49be80;
}


// ==== FUN_003949a0 @ 003949a0 ====

undefined8
FUN_003949a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
            )

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar2 = 0;
  piVar7[0x44] = (int)&DAT_003f07a0;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_003935d8();
  piVar6 = piVar1;
  piVar5 = piVar1;
  if (piVar1[0x100] < 1) {
    iVar2 = piVar1[0x100];
  }
  else {
    do {
      lVar3 = strcmp(*piVar5 + 8,piVar7 + 2);
      iVar2 = iVar2 + 1;
      if (lVar3 == 0) {
        *piVar6 = (int)piVar7;
        bVar4 = true;
        goto LAB_00394a94;
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < piVar1[0x100]);
    iVar2 = piVar1[0x100];
  }
  if (iVar2 == 0x100) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    piVar1[iVar2] = (int)piVar7;
    piVar1[0x100] = piVar1[0x100] + 1;
  }
LAB_00394a94:
  if (bVar4) {
    iVar2 = FUN_003935d8();
    *piVar7 = *(int *)(iVar2 + 0x400) + -1;
  }
  else {
    *piVar7 = -1;
  }
  piVar7[1] = param_3;
  piVar7[0x42] = param_4;
  if (param_5 == '\x01') {
    iVar2 = FUN_002e10b8();
    piVar7[0x43] = iVar2;
  }
  else {
    piVar7[0x43] = 0;
  }
  if (param_6 != '\0') {
    DAT_003c7a20 = DAT_003c7a20 | piVar7[0x43];
  }
  return param_1;
}


// ==== Kaim_CSound_00394b30 @ 00394b30 ====

/* Strings referenciadas:
     "Q24Kaim6CSound" */

undefined8 Kaim_CSound_00394b30(void)

{
  if (DAT_0049be90 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49be90,0x408d48,0x40ebc0);
  }
  return 0x49be90;
}


// ==== FUN_00394b80 @ 00394b80 ====

void FUN_00394b80(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CSoundManager_00394bc0 @ 00394bc0 ====

/* Strings referenciadas:
     "Q24Kaim13CSoundManager" */

undefined8 Kaim_CSoundManager_00394bc0(void)

{
  if (DAT_0049bea0 == 0) {
    Kaim_CWorldService_0038afb8();
    Kaim_CMetaClass_ctor(0x49bea0,0x408d58,0x49ab88);
  }
  return 0x49bea0;
}


// ==== FUN_00394c20 @ 00394c20 ====

bool FUN_00394c20(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  return param_1[0x12] == -1;
}


// ==== FUN_00394c68 @ 00394c68 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim11CInfoEntity" */

undefined4 * FUN_00394c68(void)

{
  if (DAT_0049beb0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x409080);
    }
    Kaim_CMetaClass_ctor(0x49beb0,0x4090c0,0x40ebc0);
  }
  return &DAT_0049beb0;
}


// ==== FUN_00394ce0 @ 00394ce0 ====

void FUN_00394ce0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityManager_00394d18 @ 00394d18 ====

/* Strings referenciadas:
     "Q24Kaim14CEntityManager" */

undefined8 Kaim_CEntityManager_00394d18(void)

{
  if (DAT_0049bec0 == 0) {
    Kaim_CBrainService_0038d390();
    Kaim_CMetaClass_ctor(0x49bec0,0x4090d8,0x49b950);
  }
  return 0x49bec0;
}


