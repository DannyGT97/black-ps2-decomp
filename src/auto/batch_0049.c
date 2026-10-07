// ==== FUN_00394e20 @ 00394e20 ====

undefined8 FUN_00394e20(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_3[1]);
  auVar1 = _lqc2(*param_2);
  auVar3 = _vmax(auVar2,auVar3);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vmini(auVar1,auVar2);
  auVar2 = _sqc2(auVar3);
  ((undefined1 (*) [16])param_1)[1] = auVar2;
  auVar2 = _sqc2(auVar1);
  *(undefined1 (*) [16])param_1 = auVar2;
  _sqc2(auVar1);
  _sqc2(auVar3);
  return param_1;
}


// ==== FUN_00394e58 @ 00394e58 ====

void FUN_00394e58(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003f15d0;
  DAT_003f15b4 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00394e90 @ 00394e90 ====

bool FUN_00394e90(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*param_2 == *param_1) && (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) {
    bVar1 = param_2[3] == param_1[3];
  }
  return bVar1;
}


// ==== FUN_00394ee0 @ 00394ee0 ====

undefined8 FUN_00394ee0(undefined8 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  puVar5 = (undefined4 *)param_1;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = param_2;
  puVar5[4] = param_2;
  (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  if ((*param_3 == 0) && (param_3[2] == 0)) {
    puVar5[3] = 0;
  }
  else {
    iVar2 = 0;
    for (piVar1 = param_3; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar2 = iVar2 + 1;
    }
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    puVar3 = (undefined8 *)
             (**(code **)(*param_2 + 0xc))
                       ((int)param_2 + (int)*(short *)(*param_2 + 8),iVar2 * 0xc,&uStack_60);
    puVar4 = puVar3;
    while( true ) {
      iVar2 = param_3[2];
      *puVar4 = *(undefined8 *)param_3;
      *(int *)(puVar4 + 1) = iVar2;
      param_3 = (int *)param_3[2];
      if (param_3 == (int *)0x0) break;
      *(undefined8 **)(puVar4 + 1) = (undefined8 *)((int)puVar4 + 0xc);
      puVar4 = (undefined8 *)((int)puVar4 + 0xc);
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar5[3] = puVar3;
  }
  iVar2 = *(int *)puVar5[2];
  (**(code **)(iVar2 + 0x1c))((int)puVar5[2] + (int)*(short *)(iVar2 + 0x18));
  return param_1;
}


// ==== FUN_00395078 @ 00395078 ====

void FUN_00395078(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)param_2 + 8) != 0) {
    FUN_00395078();
  }
  iVar2 = (int)param_1;
  if (*(int *)((int)param_2 + 0xc) == 0) {
    piVar1 = *(int **)(iVar2 + 8);
  }
  else {
    FUN_00395078(param_1);
    piVar1 = *(int **)(iVar2 + 8);
  }
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),param_2,0);
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  return;
}


// ==== FUN_003950f8 @ 003950f8 ====

void FUN_003950f8(int *param_1)

{
  if (*param_1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_00395078();
    *param_1 = 0;
  }
  return;
}


// ==== FUN_00395130 @ 00395130 ====

void FUN_00395130(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_003950f8();
  iVar2 = (int)param_1;
  iVar1 = **(int **)(iVar2 + 8);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(iVar2 + 8) + (int)*(short *)(iVar1 + 0x20));
  if (*(int *)(iVar2 + 0xc) != 0) {
    iVar1 = **(int **)(iVar2 + 0x10);
    (**(code **)(iVar1 + 0x14))
              ((int)*(int **)(iVar2 + 0x10) + (int)*(short *)(iVar1 + 0x10),*(int *)(iVar2 + 0xc),0)
    ;
  }
  iVar1 = **(int **)(iVar2 + 0x10);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(iVar2 + 0x10) + (int)*(short *)(iVar1 + 0x20));
  if ((param_2 & 1) != 0) {
    FUN_00107d48(param_1);
  }
  return;
}


// ==== FUN_003951d8 @ 003951d8 ====

undefined8 FUN_003951d8(undefined8 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  puVar5 = (undefined4 *)param_1;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = param_2;
  puVar5[4] = param_2;
  (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  if ((*param_3 == 0) && (param_3[2] == 0)) {
    puVar5[3] = 0;
  }
  else {
    iVar2 = 0;
    for (piVar1 = param_3; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar2 = iVar2 + 1;
    }
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    puVar3 = (undefined8 *)
             (**(code **)(*param_2 + 0xc))
                       ((int)param_2 + (int)*(short *)(*param_2 + 8),iVar2 * 0xc,&uStack_60);
    puVar4 = puVar3;
    while( true ) {
      iVar2 = param_3[2];
      *puVar4 = *(undefined8 *)param_3;
      *(int *)(puVar4 + 1) = iVar2;
      param_3 = (int *)param_3[2];
      if (param_3 == (int *)0x0) break;
      *(undefined8 **)(puVar4 + 1) = (undefined8 *)((int)puVar4 + 0xc);
      puVar4 = (undefined8 *)((int)puVar4 + 0xc);
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar5[3] = puVar3;
  }
  iVar2 = *(int *)puVar5[2];
  (**(code **)(iVar2 + 0x1c))((int)puVar5[2] + (int)*(short *)(iVar2 + 0x18));
  return param_1;
}


// ==== FUN_00395370 @ 00395370 ====

void FUN_00395370(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)param_2 + 8) != 0) {
    FUN_00395370();
  }
  iVar2 = (int)param_1;
  if (*(int *)((int)param_2 + 0xc) == 0) {
    piVar1 = *(int **)(iVar2 + 8);
  }
  else {
    FUN_00395370(param_1);
    piVar1 = *(int **)(iVar2 + 8);
  }
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),param_2,0);
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  return;
}


// ==== FUN_003953f0 @ 003953f0 ====

void FUN_003953f0(int *param_1)

{
  if (*param_1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_00395370();
    *param_1 = 0;
  }
  return;
}


// ==== FUN_00395428 @ 00395428 ====

void FUN_00395428(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_003953f0();
  iVar2 = (int)param_1;
  iVar1 = **(int **)(iVar2 + 8);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(iVar2 + 8) + (int)*(short *)(iVar1 + 0x20));
  if (*(int *)(iVar2 + 0xc) != 0) {
    iVar1 = **(int **)(iVar2 + 0x10);
    (**(code **)(iVar1 + 0x14))
              ((int)*(int **)(iVar2 + 0x10) + (int)*(short *)(iVar1 + 0x10),*(int *)(iVar2 + 0xc),0)
    ;
  }
  iVar1 = **(int **)(iVar2 + 0x10);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(iVar2 + 0x10) + (int)*(short *)(iVar1 + 0x20));
  if ((param_2 & 1) != 0) {
    FUN_00107d48(param_1);
  }
  return;
}


// ==== FUN_003954d0 @ 003954d0 ====

undefined8 FUN_003954d0(undefined8 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  puVar5 = (undefined4 *)param_1;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = param_2;
  puVar5[4] = param_2;
  (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  if ((*param_3 == 0) && (param_3[2] == 0)) {
    puVar5[3] = 0;
  }
  else {
    iVar2 = 0;
    for (piVar1 = param_3; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar2 = iVar2 + 1;
    }
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    puVar3 = (undefined8 *)
             (**(code **)(*param_2 + 0xc))
                       ((int)param_2 + (int)*(short *)(*param_2 + 8),iVar2 * 0xc,&uStack_60);
    puVar4 = puVar3;
    while( true ) {
      iVar2 = param_3[2];
      *puVar4 = *(undefined8 *)param_3;
      *(int *)(puVar4 + 1) = iVar2;
      param_3 = (int *)param_3[2];
      if (param_3 == (int *)0x0) break;
      *(undefined8 **)(puVar4 + 1) = (undefined8 *)((int)puVar4 + 0xc);
      puVar4 = (undefined8 *)((int)puVar4 + 0xc);
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar5[3] = puVar3;
  }
  iVar2 = *(int *)puVar5[2];
  (**(code **)(iVar2 + 0x1c))((int)puVar5[2] + (int)*(short *)(iVar2 + 0x18));
  return param_1;
}


// ==== FUN_00395668 @ 00395668 ====

void FUN_00395668(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)param_2 + 8) != 0) {
    FUN_00395668();
  }
  iVar2 = (int)param_1;
  if (*(int *)((int)param_2 + 0xc) == 0) {
    piVar1 = *(int **)(iVar2 + 8);
  }
  else {
    FUN_00395668(param_1);
    piVar1 = *(int **)(iVar2 + 8);
  }
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),param_2,0);
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  return;
}


// ==== FUN_003956e8 @ 003956e8 ====

void FUN_003956e8(int *param_1)

{
  if (*param_1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_00395668();
    *param_1 = 0;
  }
  return;
}


// ==== FUN_00395720 @ 00395720 ====

void FUN_00395720(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_003956e8();
  iVar2 = (int)param_1;
  iVar1 = **(int **)(iVar2 + 8);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(iVar2 + 8) + (int)*(short *)(iVar1 + 0x20));
  if (*(int *)(iVar2 + 0xc) != 0) {
    iVar1 = **(int **)(iVar2 + 0x10);
    (**(code **)(iVar1 + 0x14))
              ((int)*(int **)(iVar2 + 0x10) + (int)*(short *)(iVar1 + 0x10),*(int *)(iVar2 + 0xc),0)
    ;
  }
  iVar1 = **(int **)(iVar2 + 0x10);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(iVar2 + 0x10) + (int)*(short *)(iVar1 + 0x20));
  if ((param_2 & 1) != 0) {
    FUN_00107d48(param_1);
  }
  return;
}


// ==== FUN_003957c8 @ 003957c8 ====

void FUN_003957c8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  piVar1 = *(int **)(iVar5 + 8);
  iVar2 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 8) = piVar1[3];
  if (piVar1[3] == 0) {
    iVar5 = *param_2;
  }
  else {
    *(int *)(piVar1[3] + 4) = *param_2;
    iVar5 = *param_2;
  }
  piVar1[3] = iVar5;
  *(int **)(*param_2 + 4) = piVar1;
  piVar3 = (int *)*param_2;
  iVar5 = -1;
  if ((int *)piVar3[2] != (int *)0x0) {
    iVar5 = *(int *)piVar3[2];
  }
  iVar4 = -1;
  if ((int *)piVar3[3] != (int *)0x0) {
    iVar4 = *(int *)piVar3[3];
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar3 = iVar4 + 1;
  iVar5 = -1;
  if ((int *)piVar1[2] != (int *)0x0) {
    iVar5 = *(int *)piVar1[2];
  }
  iVar4 = -1;
  if ((int *)*param_2 != (int *)0x0) {
    iVar4 = *(int *)*param_2;
  }
  piVar1[1] = iVar2;
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar1 = iVar4 + 1;
  if (iVar2 == 0) {
    *param_1 = (int)piVar1;
  }
  else if (*(int *)(iVar2 + 8) == *param_2) {
    *(int **)(iVar2 + 8) = piVar1;
  }
  else {
    *(int **)(iVar2 + 0xc) = piVar1;
  }
  *param_2 = (int)piVar1;
  return;
}


// ==== FUN_00395890 @ 00395890 ====

void FUN_00395890(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  piVar1 = *(int **)(iVar5 + 0xc);
  iVar2 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 0xc) = piVar1[2];
  if (piVar1[2] == 0) {
    iVar5 = *param_2;
  }
  else {
    *(int *)(piVar1[2] + 4) = *param_2;
    iVar5 = *param_2;
  }
  piVar1[2] = iVar5;
  *(int **)(*param_2 + 4) = piVar1;
  piVar3 = (int *)*param_2;
  iVar5 = -1;
  if ((int *)piVar3[2] != (int *)0x0) {
    iVar5 = *(int *)piVar3[2];
  }
  iVar4 = -1;
  if ((int *)piVar3[3] != (int *)0x0) {
    iVar4 = *(int *)piVar3[3];
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar3 = iVar4 + 1;
  iVar5 = -1;
  if ((int *)piVar1[3] != (int *)0x0) {
    iVar5 = *(int *)piVar1[3];
  }
  iVar4 = -1;
  if ((int *)*param_2 != (int *)0x0) {
    iVar4 = *(int *)*param_2;
  }
  piVar1[1] = iVar2;
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar1 = iVar4 + 1;
  if (iVar2 == 0) {
    *param_1 = (int)piVar1;
  }
  else if (*(int *)(iVar2 + 8) == *param_2) {
    *(int **)(iVar2 + 8) = piVar1;
  }
  else {
    *(int **)(iVar2 + 0xc) = piVar1;
  }
  *param_2 = (int)piVar1;
  return;
}


// ==== FUN_00395958 @ 00395958 ====

void FUN_00395958(undefined8 param_1,undefined8 param_2)

{
  FUN_00395890(param_1,*(int *)param_2 + 8);
  FUN_003957c8(param_1,param_2);
  return;
}


// ==== FUN_003959a0 @ 003959a0 ====

void FUN_003959a0(undefined8 param_1,undefined8 param_2)

{
  FUN_003957c8(param_1,*(int *)param_2 + 0xc);
  FUN_00395890(param_1,param_2);
  return;
}


// ==== FUN_003959e8 @ 003959e8 ====

undefined4 *
FUN_003959e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  piVar6 = (int *)param_2;
  iVar3 = *piVar6;
  piVar8 = (int *)param_3;
  if (iVar3 == 0) {
    iVar7 = (int)param_1;
    puVar2 = *(undefined4 **)(iVar7 + 0xc);
    iVar3 = **(int **)(iVar7 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_0046c608;
    }
    puVar2 = (undefined4 *)
             (**(code **)(iVar3 + 0xc))
                       ((int)*(int **)(iVar7 + 8) + (int)*(short *)(iVar3 + 8),0x18,puVar2);
    if (puVar2 == (undefined4 *)0x0) {
      *piVar6 = 0;
    }
    else {
      uVar1 = *(undefined4 *)param_4;
      puVar2[4] = *piVar8;
      puVar2[5] = uVar1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *piVar6 = (int)puVar2;
    }
    *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
    return puVar2;
  }
  if (*piVar8 < *(int *)(iVar3 + 0x10)) {
    puVar2 = (undefined4 *)FUN_003959e8(param_1,iVar3 + 8,param_3,param_4);
    if (puVar2[1] == 0) {
      puVar2[1] = *piVar6;
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar6 = (int *)*piVar6;
    }
    piVar4 = (int *)piVar6[2];
    iVar3 = -1;
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
    }
    piVar5 = (int *)piVar6[3];
    iVar7 = -1;
    if (piVar5 != (int *)0x0) {
      iVar7 = *piVar5;
    }
    if (iVar7 == iVar3 + -2) {
      if (*piVar8 < piVar4[4]) {
        FUN_003957c8(param_1,param_2);
        return puVar2;
      }
      FUN_00395958(param_1,param_2);
      return puVar2;
    }
  }
  else {
    if (*piVar8 <= *(int *)(iVar3 + 0x10)) {
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)param_4;
      return (undefined4 *)*piVar6;
    }
    puVar2 = (undefined4 *)FUN_003959e8(param_1,iVar3 + 0xc,param_3,param_4);
    if (puVar2[1] == 0) {
      puVar2[1] = *piVar6;
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar6 = (int *)*piVar6;
    }
    piVar5 = (int *)piVar6[3];
    iVar3 = -1;
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
    }
    piVar4 = (int *)piVar6[2];
    iVar7 = -1;
    if (piVar4 != (int *)0x0) {
      iVar7 = *piVar4;
    }
    if (iVar7 == iVar3 + -2) {
      if (piVar5[4] < *piVar8) {
        FUN_00395890(param_1,param_2);
        return puVar2;
      }
      FUN_003959a0(param_1,param_2);
      return puVar2;
    }
  }
  iVar3 = -1;
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
  }
  iVar7 = -1;
  if (piVar5 != (int *)0x0) {
    iVar7 = *piVar5;
  }
  if (iVar7 <= iVar3) {
    iVar7 = iVar3;
  }
  *piVar6 = iVar7 + 1;
  return puVar2;
}


// ==== FUN_00395c18 @ 00395c18 ====

undefined8 FUN_00395c18(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_003959e8(param_2);
  *(undefined4 *)param_1 = uVar1;
  return param_1;
}


// ==== FUN_00395c48 @ 00395c48 ====

void FUN_00395c48(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  piVar1 = *(int **)(iVar5 + 8);
  iVar2 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 8) = piVar1[3];
  if (piVar1[3] == 0) {
    iVar5 = *param_2;
  }
  else {
    *(int *)(piVar1[3] + 4) = *param_2;
    iVar5 = *param_2;
  }
  piVar1[3] = iVar5;
  *(int **)(*param_2 + 4) = piVar1;
  piVar3 = (int *)*param_2;
  iVar5 = -1;
  if ((int *)piVar3[2] != (int *)0x0) {
    iVar5 = *(int *)piVar3[2];
  }
  iVar4 = -1;
  if ((int *)piVar3[3] != (int *)0x0) {
    iVar4 = *(int *)piVar3[3];
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar3 = iVar4 + 1;
  iVar5 = -1;
  if ((int *)piVar1[2] != (int *)0x0) {
    iVar5 = *(int *)piVar1[2];
  }
  iVar4 = -1;
  if ((int *)*param_2 != (int *)0x0) {
    iVar4 = *(int *)*param_2;
  }
  piVar1[1] = iVar2;
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar1 = iVar4 + 1;
  if (iVar2 == 0) {
    *param_1 = (int)piVar1;
  }
  else if (*(int *)(iVar2 + 8) == *param_2) {
    *(int **)(iVar2 + 8) = piVar1;
  }
  else {
    *(int **)(iVar2 + 0xc) = piVar1;
  }
  *param_2 = (int)piVar1;
  return;
}


// ==== FUN_00395d10 @ 00395d10 ====

void FUN_00395d10(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  piVar1 = *(int **)(iVar5 + 0xc);
  iVar2 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 0xc) = piVar1[2];
  if (piVar1[2] == 0) {
    iVar5 = *param_2;
  }
  else {
    *(int *)(piVar1[2] + 4) = *param_2;
    iVar5 = *param_2;
  }
  piVar1[2] = iVar5;
  *(int **)(*param_2 + 4) = piVar1;
  piVar3 = (int *)*param_2;
  iVar5 = -1;
  if ((int *)piVar3[2] != (int *)0x0) {
    iVar5 = *(int *)piVar3[2];
  }
  iVar4 = -1;
  if ((int *)piVar3[3] != (int *)0x0) {
    iVar4 = *(int *)piVar3[3];
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar3 = iVar4 + 1;
  iVar5 = -1;
  if ((int *)piVar1[3] != (int *)0x0) {
    iVar5 = *(int *)piVar1[3];
  }
  iVar4 = -1;
  if ((int *)*param_2 != (int *)0x0) {
    iVar4 = *(int *)*param_2;
  }
  piVar1[1] = iVar2;
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar1 = iVar4 + 1;
  if (iVar2 == 0) {
    *param_1 = (int)piVar1;
  }
  else if (*(int *)(iVar2 + 8) == *param_2) {
    *(int **)(iVar2 + 8) = piVar1;
  }
  else {
    *(int **)(iVar2 + 0xc) = piVar1;
  }
  *param_2 = (int)piVar1;
  return;
}


// ==== FUN_00395dd8 @ 00395dd8 ====

void FUN_00395dd8(undefined8 param_1,undefined8 param_2)

{
  FUN_00395d10(param_1,*(int *)param_2 + 8);
  FUN_00395c48(param_1,param_2);
  return;
}


// ==== FUN_00395e20 @ 00395e20 ====

void FUN_00395e20(undefined8 param_1,undefined8 param_2)

{
  FUN_00395c48(param_1,*(int *)param_2 + 0xc);
  FUN_00395d10(param_1,param_2);
  return;
}


// ==== FUN_00395e68 @ 00395e68 ====

undefined4 *
FUN_00395e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  piVar6 = (int *)param_2;
  iVar3 = *piVar6;
  piVar8 = (int *)param_3;
  if (iVar3 == 0) {
    iVar7 = (int)param_1;
    puVar2 = *(undefined4 **)(iVar7 + 0xc);
    iVar3 = **(int **)(iVar7 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_0046c608;
    }
    puVar2 = (undefined4 *)
             (**(code **)(iVar3 + 0xc))
                       ((int)*(int **)(iVar7 + 8) + (int)*(short *)(iVar3 + 8),0x18,puVar2);
    if (puVar2 == (undefined4 *)0x0) {
      *piVar6 = 0;
    }
    else {
      uVar1 = *(undefined4 *)param_4;
      puVar2[4] = *piVar8;
      puVar2[5] = uVar1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *piVar6 = (int)puVar2;
    }
    *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
    return puVar2;
  }
  if (*piVar8 < *(int *)(iVar3 + 0x10)) {
    puVar2 = (undefined4 *)FUN_00395e68(param_1,iVar3 + 8,param_3,param_4);
    if (puVar2[1] == 0) {
      puVar2[1] = *piVar6;
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar6 = (int *)*piVar6;
    }
    piVar4 = (int *)piVar6[2];
    iVar3 = -1;
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
    }
    piVar5 = (int *)piVar6[3];
    iVar7 = -1;
    if (piVar5 != (int *)0x0) {
      iVar7 = *piVar5;
    }
    if (iVar7 == iVar3 + -2) {
      if (*piVar8 < piVar4[4]) {
        FUN_00395c48(param_1,param_2);
        return puVar2;
      }
      FUN_00395dd8(param_1,param_2);
      return puVar2;
    }
  }
  else {
    if (*piVar8 <= *(int *)(iVar3 + 0x10)) {
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)param_4;
      return (undefined4 *)*piVar6;
    }
    puVar2 = (undefined4 *)FUN_00395e68(param_1,iVar3 + 0xc,param_3,param_4);
    if (puVar2[1] == 0) {
      puVar2[1] = *piVar6;
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar6 = (int *)*piVar6;
    }
    piVar5 = (int *)piVar6[3];
    iVar3 = -1;
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
    }
    piVar4 = (int *)piVar6[2];
    iVar7 = -1;
    if (piVar4 != (int *)0x0) {
      iVar7 = *piVar4;
    }
    if (iVar7 == iVar3 + -2) {
      if (piVar5[4] < *piVar8) {
        FUN_00395d10(param_1,param_2);
        return puVar2;
      }
      FUN_00395e20(param_1,param_2);
      return puVar2;
    }
  }
  iVar3 = -1;
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
  }
  iVar7 = -1;
  if (piVar5 != (int *)0x0) {
    iVar7 = *piVar5;
  }
  if (iVar7 <= iVar3) {
    iVar7 = iVar3;
  }
  *piVar6 = iVar7 + 1;
  return puVar2;
}


// ==== FUN_00396098 @ 00396098 ====

undefined8 FUN_00396098(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00395e68(param_2);
  *(undefined4 *)param_1 = uVar1;
  return param_1;
}


// ==== FUN_003960c8 @ 003960c8 ====

void FUN_003960c8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  piVar1 = *(int **)(iVar5 + 8);
  iVar2 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 8) = piVar1[3];
  if (piVar1[3] == 0) {
    iVar5 = *param_2;
  }
  else {
    *(int *)(piVar1[3] + 4) = *param_2;
    iVar5 = *param_2;
  }
  piVar1[3] = iVar5;
  *(int **)(*param_2 + 4) = piVar1;
  piVar3 = (int *)*param_2;
  iVar5 = -1;
  if ((int *)piVar3[2] != (int *)0x0) {
    iVar5 = *(int *)piVar3[2];
  }
  iVar4 = -1;
  if ((int *)piVar3[3] != (int *)0x0) {
    iVar4 = *(int *)piVar3[3];
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar3 = iVar4 + 1;
  iVar5 = -1;
  if ((int *)piVar1[2] != (int *)0x0) {
    iVar5 = *(int *)piVar1[2];
  }
  iVar4 = -1;
  if ((int *)*param_2 != (int *)0x0) {
    iVar4 = *(int *)*param_2;
  }
  piVar1[1] = iVar2;
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar1 = iVar4 + 1;
  if (iVar2 == 0) {
    *param_1 = (int)piVar1;
  }
  else if (*(int *)(iVar2 + 8) == *param_2) {
    *(int **)(iVar2 + 8) = piVar1;
  }
  else {
    *(int **)(iVar2 + 0xc) = piVar1;
  }
  *param_2 = (int)piVar1;
  return;
}


// ==== FUN_00396190 @ 00396190 ====

void FUN_00396190(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  piVar1 = *(int **)(iVar5 + 0xc);
  iVar2 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 0xc) = piVar1[2];
  if (piVar1[2] == 0) {
    iVar5 = *param_2;
  }
  else {
    *(int *)(piVar1[2] + 4) = *param_2;
    iVar5 = *param_2;
  }
  piVar1[2] = iVar5;
  *(int **)(*param_2 + 4) = piVar1;
  piVar3 = (int *)*param_2;
  iVar5 = -1;
  if ((int *)piVar3[2] != (int *)0x0) {
    iVar5 = *(int *)piVar3[2];
  }
  iVar4 = -1;
  if ((int *)piVar3[3] != (int *)0x0) {
    iVar4 = *(int *)piVar3[3];
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar3 = iVar4 + 1;
  iVar5 = -1;
  if ((int *)piVar1[3] != (int *)0x0) {
    iVar5 = *(int *)piVar1[3];
  }
  iVar4 = -1;
  if ((int *)*param_2 != (int *)0x0) {
    iVar4 = *(int *)*param_2;
  }
  piVar1[1] = iVar2;
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  *piVar1 = iVar4 + 1;
  if (iVar2 == 0) {
    *param_1 = (int)piVar1;
  }
  else if (*(int *)(iVar2 + 8) == *param_2) {
    *(int **)(iVar2 + 8) = piVar1;
  }
  else {
    *(int **)(iVar2 + 0xc) = piVar1;
  }
  *param_2 = (int)piVar1;
  return;
}


// ==== FUN_00396258 @ 00396258 ====

void FUN_00396258(undefined8 param_1,undefined8 param_2)

{
  FUN_00396190(param_1,*(int *)param_2 + 8);
  FUN_003960c8(param_1,param_2);
  return;
}


// ==== FUN_003962a0 @ 003962a0 ====

void FUN_003962a0(undefined8 param_1,undefined8 param_2)

{
  FUN_003960c8(param_1,*(int *)param_2 + 0xc);
  FUN_00396190(param_1,param_2);
  return;
}


// ==== FUN_003962e8 @ 003962e8 ====

undefined4 *
FUN_003962e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  piVar6 = (int *)param_2;
  iVar3 = *piVar6;
  piVar8 = (int *)param_3;
  if (iVar3 == 0) {
    iVar7 = (int)param_1;
    puVar2 = *(undefined4 **)(iVar7 + 0xc);
    iVar3 = **(int **)(iVar7 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_0046c608;
    }
    puVar2 = (undefined4 *)
             (**(code **)(iVar3 + 0xc))
                       ((int)*(int **)(iVar7 + 8) + (int)*(short *)(iVar3 + 8),0x18,puVar2);
    if (puVar2 == (undefined4 *)0x0) {
      *piVar6 = 0;
    }
    else {
      uVar1 = *(undefined4 *)param_4;
      puVar2[4] = *piVar8;
      puVar2[5] = uVar1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *piVar6 = (int)puVar2;
    }
    *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
    return puVar2;
  }
  if (*piVar8 < *(int *)(iVar3 + 0x10)) {
    puVar2 = (undefined4 *)FUN_003962e8(param_1,iVar3 + 8,param_3,param_4);
    if (puVar2[1] == 0) {
      puVar2[1] = *piVar6;
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar6 = (int *)*piVar6;
    }
    piVar4 = (int *)piVar6[2];
    iVar3 = -1;
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
    }
    piVar5 = (int *)piVar6[3];
    iVar7 = -1;
    if (piVar5 != (int *)0x0) {
      iVar7 = *piVar5;
    }
    if (iVar7 == iVar3 + -2) {
      if (*piVar8 < piVar4[4]) {
        FUN_003960c8(param_1,param_2);
        return puVar2;
      }
      FUN_00396258(param_1,param_2);
      return puVar2;
    }
  }
  else {
    if (*piVar8 <= *(int *)(iVar3 + 0x10)) {
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)param_4;
      return (undefined4 *)*piVar6;
    }
    puVar2 = (undefined4 *)FUN_003962e8(param_1,iVar3 + 0xc,param_3,param_4);
    if (puVar2[1] == 0) {
      puVar2[1] = *piVar6;
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar6 = (int *)*piVar6;
    }
    piVar5 = (int *)piVar6[3];
    iVar3 = -1;
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
    }
    piVar4 = (int *)piVar6[2];
    iVar7 = -1;
    if (piVar4 != (int *)0x0) {
      iVar7 = *piVar4;
    }
    if (iVar7 == iVar3 + -2) {
      if (piVar5[4] < *piVar8) {
        FUN_00396190(param_1,param_2);
        return puVar2;
      }
      FUN_003962a0(param_1,param_2);
      return puVar2;
    }
  }
  iVar3 = -1;
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
  }
  iVar7 = -1;
  if (piVar5 != (int *)0x0) {
    iVar7 = *piVar5;
  }
  if (iVar7 <= iVar3) {
    iVar7 = iVar3;
  }
  *piVar6 = iVar7 + 1;
  return puVar2;
}


// ==== FUN_00396518 @ 00396518 ====

undefined8 FUN_00396518(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_003962e8(param_2);
  *(undefined4 *)param_1 = uVar1;
  return param_1;
}


// ==== FUN_00396548 @ 00396548 ====

undefined4 FUN_00396548(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *apiStack_70 [4];
  
  iVar8 = 0;
  piVar6 = (int *)param_1;
  iVar5 = *piVar6;
  uVar9 = 0;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0x10);
    iVar7 = iVar8;
    while( true ) {
      if (*param_2 < iVar4) {
        iVar5 = *(int *)(iVar5 + 8);
        iVar8 = iVar7;
      }
      else {
        iVar8 = iVar5;
        if (iVar4 < *param_2) {
          iVar5 = *(int *)(iVar5 + 0xc);
          iVar8 = iVar7;
        }
      }
      if ((iVar5 == 0) || (iVar8 != 0)) break;
      iVar4 = *(int *)(iVar5 + 0x10);
      iVar7 = iVar8;
    }
  }
  if (iVar8 != 0) {
    apiStack_70[0] = *(int **)(iVar8 + 0xc);
    uVar9 = 1;
    if (apiStack_70[0] == (int *)0x0) {
      iVar5 = *(int *)(iVar8 + 4);
      piVar1 = *(int **)(iVar8 + 8);
      if (iVar5 == 0) {
        *piVar6 = (int)piVar1;
      }
      else if (iVar8 == *(int *)(iVar5 + 8)) {
        *(int **)(iVar5 + 8) = piVar1;
      }
      else {
        *(int **)(iVar5 + 0xc) = piVar1;
      }
      apiStack_70[0] = *(int **)(iVar8 + 4);
      if (piVar1 != (int *)0x0) {
        piVar1[1] = (int)apiStack_70[0];
        apiStack_70[0] = piVar1;
      }
    }
    else if (apiStack_70[0][2] == 0) {
      iVar5 = *(int *)(iVar8 + 4);
      if (iVar5 == 0) {
        *piVar6 = (int)apiStack_70[0];
      }
      else if (iVar8 == *(int *)(iVar5 + 8)) {
        *(int **)(iVar5 + 8) = apiStack_70[0];
      }
      else {
        *(int **)(iVar5 + 0xc) = apiStack_70[0];
      }
      apiStack_70[0][1] = *(int *)(iVar8 + 4);
      apiStack_70[0][2] = *(int *)(iVar8 + 8);
      if (*(int *)(iVar8 + 8) != 0) {
        *(int **)(*(int *)(iVar8 + 8) + 4) = apiStack_70[0];
      }
    }
    else {
      for (iVar5 = apiStack_70[0][2]; *(int *)(iVar5 + 8) != 0; iVar5 = *(int *)(iVar5 + 8)) {
      }
      apiStack_70[0] = *(int **)(iVar5 + 4);
      *(undefined4 *)(*(int *)(iVar5 + 4) + 8) = *(undefined4 *)(iVar5 + 0xc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        uVar3 = *(undefined4 *)(iVar8 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(iVar5 + 0xc) + 4) = *(undefined4 *)(iVar5 + 4);
        uVar3 = *(undefined4 *)(iVar8 + 4);
      }
      *(undefined4 *)(iVar5 + 4) = uVar3;
      iVar4 = *(int *)(iVar8 + 4);
      if (iVar4 == 0) {
        *piVar6 = iVar5;
      }
      else if (iVar8 == *(int *)(iVar4 + 8)) {
        *(int *)(iVar4 + 8) = iVar5;
      }
      else {
        *(int *)(iVar4 + 0xc) = iVar5;
      }
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar8 + 8);
      if (*(int *)(iVar8 + 8) != 0) {
        *(int *)(*(int *)(iVar8 + 8) + 4) = iVar5;
      }
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar8 + 0xc);
      *(int *)(*(int *)(iVar8 + 0xc) + 4) = iVar5;
    }
    for (; apiStack_70[0] != (int *)0x0; apiStack_70[0] = (int *)apiStack_70[0][1]) {
      piVar1 = (int *)apiStack_70[0][2];
      iVar5 = -1;
      if (piVar1 != (int *)0x0) {
        iVar5 = *piVar1;
      }
      piVar2 = (int *)apiStack_70[0][3];
      iVar4 = -1;
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
      }
      if (iVar5 - iVar4 == 2) {
        iVar5 = -1;
        if ((int *)piVar1[2] != (int *)0x0) {
          iVar5 = *(int *)piVar1[2];
        }
        iVar4 = -1;
        if ((int *)piVar1[3] != (int *)0x0) {
          iVar4 = *(int *)piVar1[3];
        }
        if (iVar5 - iVar4 < 0) {
          FUN_00395958(param_1,apiStack_70);
        }
        else {
          FUN_003957c8(param_1,apiStack_70);
        }
      }
      else if (iVar5 - iVar4 == -2) {
        iVar5 = -1;
        if ((int *)piVar2[3] != (int *)0x0) {
          iVar5 = *(int *)piVar2[3];
        }
        iVar4 = -1;
        if ((int *)piVar2[2] != (int *)0x0) {
          iVar4 = *(int *)piVar2[2];
        }
        if (iVar5 - iVar4 < 0) {
          FUN_003959a0(param_1,apiStack_70);
        }
        else {
          FUN_00395890(param_1,apiStack_70);
        }
      }
      iVar5 = -1;
      if ((int *)apiStack_70[0][2] != (int *)0x0) {
        iVar5 = *(int *)apiStack_70[0][2];
      }
      iVar4 = -1;
      if ((int *)apiStack_70[0][3] != (int *)0x0) {
        iVar4 = *(int *)apiStack_70[0][3];
      }
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      *apiStack_70[0] = iVar4 + 1;
    }
    iVar5 = *(int *)piVar6[2];
    (**(code **)(iVar5 + 0x14))(piVar6[2] + (int)*(short *)(iVar5 + 0x10),iVar8,0);
    piVar6[1] = piVar6[1] + -1;
  }
  return uVar9;
}


// ==== FUN_00396858 @ 00396858 ====

undefined4 FUN_00396858(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *apiStack_70 [4];
  
  iVar8 = 0;
  piVar6 = (int *)param_1;
  iVar5 = *piVar6;
  uVar9 = 0;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0x10);
    iVar7 = iVar8;
    while( true ) {
      if (*param_2 < iVar4) {
        iVar5 = *(int *)(iVar5 + 8);
        iVar8 = iVar7;
      }
      else {
        iVar8 = iVar5;
        if (iVar4 < *param_2) {
          iVar5 = *(int *)(iVar5 + 0xc);
          iVar8 = iVar7;
        }
      }
      if ((iVar5 == 0) || (iVar8 != 0)) break;
      iVar4 = *(int *)(iVar5 + 0x10);
      iVar7 = iVar8;
    }
  }
  if (iVar8 != 0) {
    apiStack_70[0] = *(int **)(iVar8 + 0xc);
    uVar9 = 1;
    if (apiStack_70[0] == (int *)0x0) {
      iVar5 = *(int *)(iVar8 + 4);
      piVar1 = *(int **)(iVar8 + 8);
      if (iVar5 == 0) {
        *piVar6 = (int)piVar1;
      }
      else if (iVar8 == *(int *)(iVar5 + 8)) {
        *(int **)(iVar5 + 8) = piVar1;
      }
      else {
        *(int **)(iVar5 + 0xc) = piVar1;
      }
      apiStack_70[0] = *(int **)(iVar8 + 4);
      if (piVar1 != (int *)0x0) {
        piVar1[1] = (int)apiStack_70[0];
        apiStack_70[0] = piVar1;
      }
    }
    else if (apiStack_70[0][2] == 0) {
      iVar5 = *(int *)(iVar8 + 4);
      if (iVar5 == 0) {
        *piVar6 = (int)apiStack_70[0];
      }
      else if (iVar8 == *(int *)(iVar5 + 8)) {
        *(int **)(iVar5 + 8) = apiStack_70[0];
      }
      else {
        *(int **)(iVar5 + 0xc) = apiStack_70[0];
      }
      apiStack_70[0][1] = *(int *)(iVar8 + 4);
      apiStack_70[0][2] = *(int *)(iVar8 + 8);
      if (*(int *)(iVar8 + 8) != 0) {
        *(int **)(*(int *)(iVar8 + 8) + 4) = apiStack_70[0];
      }
    }
    else {
      for (iVar5 = apiStack_70[0][2]; *(int *)(iVar5 + 8) != 0; iVar5 = *(int *)(iVar5 + 8)) {
      }
      apiStack_70[0] = *(int **)(iVar5 + 4);
      *(undefined4 *)(*(int *)(iVar5 + 4) + 8) = *(undefined4 *)(iVar5 + 0xc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        uVar3 = *(undefined4 *)(iVar8 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(iVar5 + 0xc) + 4) = *(undefined4 *)(iVar5 + 4);
        uVar3 = *(undefined4 *)(iVar8 + 4);
      }
      *(undefined4 *)(iVar5 + 4) = uVar3;
      iVar4 = *(int *)(iVar8 + 4);
      if (iVar4 == 0) {
        *piVar6 = iVar5;
      }
      else if (iVar8 == *(int *)(iVar4 + 8)) {
        *(int *)(iVar4 + 8) = iVar5;
      }
      else {
        *(int *)(iVar4 + 0xc) = iVar5;
      }
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar8 + 8);
      if (*(int *)(iVar8 + 8) != 0) {
        *(int *)(*(int *)(iVar8 + 8) + 4) = iVar5;
      }
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar8 + 0xc);
      *(int *)(*(int *)(iVar8 + 0xc) + 4) = iVar5;
    }
    for (; apiStack_70[0] != (int *)0x0; apiStack_70[0] = (int *)apiStack_70[0][1]) {
      piVar1 = (int *)apiStack_70[0][2];
      iVar5 = -1;
      if (piVar1 != (int *)0x0) {
        iVar5 = *piVar1;
      }
      piVar2 = (int *)apiStack_70[0][3];
      iVar4 = -1;
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
      }
      if (iVar5 - iVar4 == 2) {
        iVar5 = -1;
        if ((int *)piVar1[2] != (int *)0x0) {
          iVar5 = *(int *)piVar1[2];
        }
        iVar4 = -1;
        if ((int *)piVar1[3] != (int *)0x0) {
          iVar4 = *(int *)piVar1[3];
        }
        if (iVar5 - iVar4 < 0) {
          FUN_00395dd8(param_1,apiStack_70);
        }
        else {
          FUN_00395c48(param_1,apiStack_70);
        }
      }
      else if (iVar5 - iVar4 == -2) {
        iVar5 = -1;
        if ((int *)piVar2[3] != (int *)0x0) {
          iVar5 = *(int *)piVar2[3];
        }
        iVar4 = -1;
        if ((int *)piVar2[2] != (int *)0x0) {
          iVar4 = *(int *)piVar2[2];
        }
        if (iVar5 - iVar4 < 0) {
          FUN_00395e20(param_1,apiStack_70);
        }
        else {
          FUN_00395d10(param_1,apiStack_70);
        }
      }
      iVar5 = -1;
      if ((int *)apiStack_70[0][2] != (int *)0x0) {
        iVar5 = *(int *)apiStack_70[0][2];
      }
      iVar4 = -1;
      if ((int *)apiStack_70[0][3] != (int *)0x0) {
        iVar4 = *(int *)apiStack_70[0][3];
      }
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      *apiStack_70[0] = iVar4 + 1;
    }
    iVar5 = *(int *)piVar6[2];
    (**(code **)(iVar5 + 0x14))(piVar6[2] + (int)*(short *)(iVar5 + 0x10),iVar8,0);
    piVar6[1] = piVar6[1] + -1;
  }
  return uVar9;
}


// ==== FUN_00396b68 @ 00396b68 ====

undefined4 FUN_00396b68(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *apiStack_70 [4];
  
  iVar8 = 0;
  piVar6 = (int *)param_1;
  iVar5 = *piVar6;
  uVar9 = 0;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0x10);
    iVar7 = iVar8;
    while( true ) {
      if (*param_2 < iVar4) {
        iVar5 = *(int *)(iVar5 + 8);
        iVar8 = iVar7;
      }
      else {
        iVar8 = iVar5;
        if (iVar4 < *param_2) {
          iVar5 = *(int *)(iVar5 + 0xc);
          iVar8 = iVar7;
        }
      }
      if ((iVar5 == 0) || (iVar8 != 0)) break;
      iVar4 = *(int *)(iVar5 + 0x10);
      iVar7 = iVar8;
    }
  }
  if (iVar8 != 0) {
    apiStack_70[0] = *(int **)(iVar8 + 0xc);
    uVar9 = 1;
    if (apiStack_70[0] == (int *)0x0) {
      iVar5 = *(int *)(iVar8 + 4);
      piVar1 = *(int **)(iVar8 + 8);
      if (iVar5 == 0) {
        *piVar6 = (int)piVar1;
      }
      else if (iVar8 == *(int *)(iVar5 + 8)) {
        *(int **)(iVar5 + 8) = piVar1;
      }
      else {
        *(int **)(iVar5 + 0xc) = piVar1;
      }
      apiStack_70[0] = *(int **)(iVar8 + 4);
      if (piVar1 != (int *)0x0) {
        piVar1[1] = (int)apiStack_70[0];
        apiStack_70[0] = piVar1;
      }
    }
    else if (apiStack_70[0][2] == 0) {
      iVar5 = *(int *)(iVar8 + 4);
      if (iVar5 == 0) {
        *piVar6 = (int)apiStack_70[0];
      }
      else if (iVar8 == *(int *)(iVar5 + 8)) {
        *(int **)(iVar5 + 8) = apiStack_70[0];
      }
      else {
        *(int **)(iVar5 + 0xc) = apiStack_70[0];
      }
      apiStack_70[0][1] = *(int *)(iVar8 + 4);
      apiStack_70[0][2] = *(int *)(iVar8 + 8);
      if (*(int *)(iVar8 + 8) != 0) {
        *(int **)(*(int *)(iVar8 + 8) + 4) = apiStack_70[0];
      }
    }
    else {
      for (iVar5 = apiStack_70[0][2]; *(int *)(iVar5 + 8) != 0; iVar5 = *(int *)(iVar5 + 8)) {
      }
      apiStack_70[0] = *(int **)(iVar5 + 4);
      *(undefined4 *)(*(int *)(iVar5 + 4) + 8) = *(undefined4 *)(iVar5 + 0xc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        uVar3 = *(undefined4 *)(iVar8 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(iVar5 + 0xc) + 4) = *(undefined4 *)(iVar5 + 4);
        uVar3 = *(undefined4 *)(iVar8 + 4);
      }
      *(undefined4 *)(iVar5 + 4) = uVar3;
      iVar4 = *(int *)(iVar8 + 4);
      if (iVar4 == 0) {
        *piVar6 = iVar5;
      }
      else if (iVar8 == *(int *)(iVar4 + 8)) {
        *(int *)(iVar4 + 8) = iVar5;
      }
      else {
        *(int *)(iVar4 + 0xc) = iVar5;
      }
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar8 + 8);
      if (*(int *)(iVar8 + 8) != 0) {
        *(int *)(*(int *)(iVar8 + 8) + 4) = iVar5;
      }
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar8 + 0xc);
      *(int *)(*(int *)(iVar8 + 0xc) + 4) = iVar5;
    }
    for (; apiStack_70[0] != (int *)0x0; apiStack_70[0] = (int *)apiStack_70[0][1]) {
      piVar1 = (int *)apiStack_70[0][2];
      iVar5 = -1;
      if (piVar1 != (int *)0x0) {
        iVar5 = *piVar1;
      }
      piVar2 = (int *)apiStack_70[0][3];
      iVar4 = -1;
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
      }
      if (iVar5 - iVar4 == 2) {
        iVar5 = -1;
        if ((int *)piVar1[2] != (int *)0x0) {
          iVar5 = *(int *)piVar1[2];
        }
        iVar4 = -1;
        if ((int *)piVar1[3] != (int *)0x0) {
          iVar4 = *(int *)piVar1[3];
        }
        if (iVar5 - iVar4 < 0) {
          FUN_00396258(param_1,apiStack_70);
        }
        else {
          FUN_003960c8(param_1,apiStack_70);
        }
      }
      else if (iVar5 - iVar4 == -2) {
        iVar5 = -1;
        if ((int *)piVar2[3] != (int *)0x0) {
          iVar5 = *(int *)piVar2[3];
        }
        iVar4 = -1;
        if ((int *)piVar2[2] != (int *)0x0) {
          iVar4 = *(int *)piVar2[2];
        }
        if (iVar5 - iVar4 < 0) {
          FUN_003962a0(param_1,apiStack_70);
        }
        else {
          FUN_00396190(param_1,apiStack_70);
        }
      }
      iVar5 = -1;
      if ((int *)apiStack_70[0][2] != (int *)0x0) {
        iVar5 = *(int *)apiStack_70[0][2];
      }
      iVar4 = -1;
      if ((int *)apiStack_70[0][3] != (int *)0x0) {
        iVar4 = *(int *)apiStack_70[0][3];
      }
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      *apiStack_70[0] = iVar4 + 1;
    }
    iVar5 = *(int *)piVar6[2];
    (**(code **)(iVar5 + 0x14))(piVar6[2] + (int)*(short *)(iVar5 + 0x10),iVar8,0);
    piVar6[1] = piVar6[1] + -1;
  }
  return uVar9;
}


// ==== Kaim_CXmlDataReader_00396e78 @ 00396e78 ====

/* Strings referenciadas:
     "Q24Kaim14CXmlDataReader" */

undefined8 Kaim_CXmlDataReader_00396e78(void)

{
  if (DAT_0049bfa0 == 0) {
    FUN_00396ec8();
    Kaim_CMetaClass_ctor(0x49bfa0,0x40c420,0x49bfb0);
  }
  return 0x49bfa0;
}


// ==== FUN_00396ec8 @ 00396ec8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim11CDataReader" */

undefined4 * FUN_00396ec8(void)

{
  if (DAT_0049bfb0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x40c438);
    }
    Kaim_CMetaClass_ctor(0x49bfb0,0x40c448,0x40ebc0);
  }
  return &DAT_0049bfb0;
}


