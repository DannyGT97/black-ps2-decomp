// ==== FUN_00388dd8 @ 00388dd8 ====

bool FUN_00388dd8(int param_1)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar1 = FUN_002851e0();
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}


// ==== FUN_00388e18 @ 00388e18 ====

int FUN_00388e18(int param_1)

{
  return param_1 + 0xb308;
}


// ==== FUN_00388e30 @ 00388e30 ====

void FUN_00388e30(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_00388e40 @ 00388e40 ====

undefined4 FUN_00388e40(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== FUN_00388e48 @ 00388e48 ====

void FUN_00388e48(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_00388e58 @ 00388e58 ====

undefined4 FUN_00388e58(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_00388e70 @ 00388e70 ====

void FUN_00388e70(void)

{
  return;
}


// ==== FUN_00388e88 @ 00388e88 ====

void FUN_00388e88(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00388ed0 @ 00388ed0 ====

ulong FUN_00388ed0(int param_1,ulong param_2)

{
  return (*(ulong *)((int)(param_2 & 0xff) * 8 + *(int *)(param_1 + 8)) >> (param_2 & 0xff) & 0xff ^
         1) & 1;
}


// ==== FUN_00388ef8 @ 00388ef8 ====

void FUN_00388ef8(undefined8 param_1,ulong param_2)

{
  FUN_002e34b8(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00388f48 @ 00388f48 ====

undefined8 FUN_00388f48(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = (**(code **)(*param_1 + 0xa4))((int)param_1 + (int)*(short *)(*param_1 + 0xa0));
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = param_1[0x19] + -1;
    if (-1 < iVar4) {
      iVar1 = iVar4 * 0x10 + param_1[0x18];
      do {
        if (*(int *)(iVar1 + 8) == param_2) {
          if (*(int *)(iVar1 + 0xc) == 0) {
            return 1;
          }
          uVar3 = FUN_00388f48();
          return uVar3;
        }
        iVar4 = iVar4 + -1;
        iVar1 = iVar1 + -0x10;
      } while (-1 < iVar4);
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_00388fe8 @ 00388fe8 ====

void FUN_00388fe8(undefined8 param_1,ulong param_2)

{
  FUN_002f4a90(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00389060 @ 00389060 ====

uint FUN_00389060(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x70) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x78) + 8);
    do {
      if (((int *)*piVar2 != (int *)0x0) && (*(int *)*piVar2 == *param_2)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x70));
  }
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x74) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x7c) + 8);
    do {
      if (((int *)*piVar2 != (int *)0x0) && (*(int *)*piVar2 == *param_2)) {
        return uVar1 + *(int *)(param_1 + 0x70);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x74));
  }
  return 0xffffffff;
}


// ==== Kaim_CObject_00389100 @ 00389100 ====

/* Strings referenciadas:
     "Q24Kaim7CObject" */

undefined8 Kaim_CObject_00389100(void)

{
  if (DAT_0040ebc0 == 0) {
    FUN_00370188(0x40ebc0,0x404100);
  }
  return 0x40ebc0;
}


// ==== FUN_00389140 @ 00389140 ====

float FUN_00389140(float *param_1)

{
  return *param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2];
}


// ==== FUN_00389178 @ 00389178 ====

void FUN_00389178(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CGraphPoint_003891b0 @ 003891b0 ====

/* Strings referenciadas:
     "Q24Kaim11CGraphPoint" */

undefined8 Kaim_CGraphPoint_003891b0(void)

{
  if (DAT_0049a8f8 == 0) {
    Kaim_CPointWrapper_003893b0();
    Kaim_CMetaClass_ctor(0x49a8f8,0x404110,0x49a928);
  }
  return 0x49a8f8;
}


// ==== Kaim_CFleeAgent_00389240 @ 00389240 ====

/* Strings referenciadas:
     "Q24Kaim10CFleeAgent" */

undefined8 Kaim_CFleeAgent_00389240(void)

{
  if (DAT_0049a908 == 0) {
    Kaim_CAgent_0038ba88();
    Kaim_CMetaClass_ctor(0x49a908,0x404128,0x49a948);
  }
  return 0x49a908;
}


// ==== FUN_003892e0 @ 003892e0 ====

void FUN_003892e0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_RecursiveFlightTraversal_00389318 @ 00389318 ====

/* Strings referenciadas:
     "Q24Kaim24RecursiveFlightTraversal" */

undefined8 Kaim_RecursiveFlightTraversal_00389318(void)

{
  if (DAT_0049a918 == 0) {
    Kaim_CVertexTraversal_00389400();
    Kaim_CMetaClass_ctor(0x49a918,0x404140,0x49a938);
  }
  return 0x49a918;
}


// ==== FUN_00389368 @ 00389368 ====

void FUN_00389368(void)

{
  return;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim6CAgentZPFPQ24Kaim6CBrain_PQ24Kaim6CAgent_00389370 @ 00389370 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim6CAgentZPFPQ24Kaim6CBrain_PQ24Kaim6CAgent" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim6CAgentZPFPQ24Kaim6CBrain_PQ24Kaim6CAgent_00389370(void)

{
  if (DAT_0040ebc8 == 0) {
    FUN_00370188(0x40ebc8,0x404168);
  }
  return 0x40ebc8;
}


// ==== Kaim_CPointWrapper_003893b0 @ 003893b0 ====

/* Strings referenciadas:
     "Q24Kaim13CPointWrapper" */

undefined8 Kaim_CPointWrapper_003893b0(void)

{
  if (DAT_0049a928 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49a928,0x4041b0,0x40ebc0);
  }
  return 0x49a928;
}


// ==== Kaim_CVertexTraversal_00389400 @ 00389400 ====

/* Strings referenciadas:
     "Q24Kaim16CVertexTraversal" */

undefined8 Kaim_CVertexTraversal_00389400(void)

{
  if (DAT_0049a938 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49a938,0x4041c8,0x40ebc0);
  }
  return 0x49a938;
}


// ==== FUN_00389450 @ 00389450 ====

void FUN_00389450(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e2ae0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CFollowerAgent_00389480 @ 00389480 ====

/* Strings referenciadas:
     "Q24Kaim14CFollowerAgent" */

undefined8 Kaim_CFollowerAgent_00389480(void)

{
  if (DAT_0049a958 == 0) {
    Kaim_CAgent_0038ba88();
    Kaim_CMetaClass_ctor(0x49a958,0x404260,0x49a948);
  }
  return 0x49a958;
}


// ==== Kaim_CGotoAgent_00389500 @ 00389500 ====

/* Strings referenciadas:
     "Q24Kaim10CGotoAgent" */

undefined8 Kaim_CGotoAgent_00389500(void)

{
  if (DAT_0049a968 == 0) {
    Kaim_CAgent_0038ba88();
    Kaim_CMetaClass_ctor(0x49a968,0x4042e0,0x49a948);
  }
  return 0x49a968;
}


// ==== Kaim_CHideAgent_00389578 @ 00389578 ====

/* Strings referenciadas:
     "Q24Kaim10CHideAgent" */

undefined8 Kaim_CHideAgent_00389578(void)

{
  if (DAT_0049a978 == 0) {
    Kaim_CAgent_0038ba88();
    Kaim_CMetaClass_ctor(0x49a978,0x404438,0x49a948);
  }
  return 0x49a978;
}


// ==== Kaim_CPathWayAgent_00389618 @ 00389618 ====

/* Strings referenciadas:
     "Q24Kaim13CPathWayAgent" */

undefined8 Kaim_CPathWayAgent_00389618(void)

{
  if (DAT_0049a988 == 0) {
    Kaim_CAgent_0038ba88();
    Kaim_CMetaClass_ctor(0x49a988,0x404540,0x49a948);
  }
  return 0x49a988;
}


// ==== Kaim_CObject_003896a8 @ 003896a8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim7CEntity9CIterator" */

undefined4 * Kaim_CObject_003896a8(void)

{
  if (DAT_0049a998 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x404640);
    }
    Kaim_CMetaClass_ctor(0x49a998,0x404650,0x40ebc0);
  }
  return &DAT_0049a998;
}


// ==== Kaim_CShooterAgent_00389720 @ 00389720 ====

/* Strings referenciadas:
     "Q24Kaim13CShooterAgent" */

undefined8 Kaim_CShooterAgent_00389720(void)

{
  if (DAT_0049a9a8 == 0) {
    Kaim_CAgent_0038ba88();
    Kaim_CMetaClass_ctor(0x49a9a8,0x404680,0x49a948);
  }
  return 0x49a9a8;
}


// ==== Kaim_CWanderAgent_003897c8 @ 003897c8 ====

/* Strings referenciadas:
     "Q24Kaim12CWanderAgent" */

undefined8 Kaim_CWanderAgent_003897c8(void)

{
  if (DAT_0049a9b8 == 0) {
    Kaim_CAgent_0038ba88();
    Kaim_CMetaClass_ctor(0x49a9b8,0x404730,0x49a948);
  }
  return 0x49a9b8;
}


// ==== Kaim_CActionAcceleration_00389840 @ 00389840 ====

/* Strings referenciadas:
     "Q24Kaim19CActionAcceleration" */

undefined8 Kaim_CActionAcceleration_00389840(void)

{
  if (DAT_0049a9c8 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49a9c8,0x4047d0,0x49a9d8);
  }
  return 0x49a9c8;
}


// ==== FUN_003898a8 @ 003898a8 ====

void FUN_003898a8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00389908 @ 00389908 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim16CActionAttribute" */

undefined4 * FUN_00389908(void)

{
  if (DAT_0049a9d8 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4047f0);
    }
    Kaim_CMetaClass_ctor(0x49a9d8,0x404800,0x40ebc0);
  }
  return &DAT_0049a9d8;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim16CActionAttributeZPFv_PQ24Kaim16CActionAttribute_00389980 @ 00389980 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim16CActionAttributeZPFv_PQ24Kaim16CActionAttribute" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim16CActionAttributeZPFv_PQ24Kaim16CActionAttribute_00389980(void)

{
  if (DAT_0040ebd0 == 0) {
    FUN_00370188(0x40ebd0,0x404820);
  }
  return 0x40ebd0;
}


// ==== FUN_003899c0 @ 003899c0 ====

void FUN_003899c0(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e3d38;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CActionCrouch_003899f0 @ 003899f0 ====

/* Strings referenciadas:
     "Q24Kaim13CActionCrouch" */

undefined8 Kaim_CActionCrouch_003899f0(void)

{
  if (DAT_0049a9e8 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49a9e8,0x404890,0x49a9d8);
  }
  return 0x49a9e8;
}


// ==== FUN_00389a58 @ 00389a58 ====

void FUN_00389a58(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionJump_00389ab8 @ 00389ab8 ====

/* Strings referenciadas:
     "Q24Kaim11CActionJump" */

undefined8 Kaim_CActionJump_00389ab8(void)

{
  if (DAT_0049a9f8 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49a9f8,0x404948,0x49a9d8);
  }
  return 0x49a9f8;
}


// ==== FUN_00389b20 @ 00389b20 ====

void FUN_00389b20(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionRotate_00389b80 @ 00389b80 ====

/* Strings referenciadas:
     "Q24Kaim13CActionRotate" */

undefined8 Kaim_CActionRotate_00389b80(void)

{
  if (DAT_0049aa08 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49aa08,0x404a00,0x49a9d8);
  }
  return 0x49aa08;
}


// ==== FUN_00389be8 @ 00389be8 ====

void FUN_00389be8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionShoot_00389c48 @ 00389c48 ====

/* Strings referenciadas:
     "Q24Kaim12CActionShoot" */

undefined8 Kaim_CActionShoot_00389c48(void)

{
  if (DAT_0049aa18 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49aa18,0x404ab8,0x49a9d8);
  }
  return 0x49aa18;
}


// ==== FUN_00389cb0 @ 00389cb0 ====

void FUN_00389cb0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionSpeed_00389d40 @ 00389d40 ====

/* Strings referenciadas:
     "Q24Kaim12CActionSpeed" */

undefined8 Kaim_CActionSpeed_00389d40(void)

{
  if (DAT_0049aa28 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49aa28,0x404b70,0x49a9d8);
  }
  return 0x49aa28;
}


// ==== FUN_00389da8 @ 00389da8 ====

void FUN_00389da8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionSteering_00389e08 @ 00389e08 ====

/* Strings referenciadas:
     "Q24Kaim15CActionSteering" */

undefined8 Kaim_CActionSteering_00389e08(void)

{
  if (DAT_0049aa38 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49aa38,0x404c28,0x49a9d8);
  }
  return 0x49aa38;
}


// ==== FUN_00389e70 @ 00389e70 ====

void FUN_00389e70(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityCanFly_00389ed0 @ 00389ed0 ====

/* Strings referenciadas:
     "Q24Kaim13CEntityCanFly" */

undefined8 Kaim_CEntityCanFly_00389ed0(void)

{
  if (DAT_0049aa48 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aa48,0x404cf8,0x49aa58);
  }
  return 0x49aa48;
}


// ==== FUN_00389f38 @ 00389f38 ====

void FUN_00389f38(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00389f90 @ 00389f90 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim16CEntityAttribute" */

undefined4 * FUN_00389f90(void)

{
  if (DAT_0049aa58 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x404d10);
    }
    Kaim_CMetaClass_ctor(0x49aa58,0x404d20,0x40ebc0);
  }
  return &DAT_0049aa58;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim16CEntityAttributeZPFv_PQ24Kaim16CEntityAttribute_0038a008 @ 0038a008 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim16CEntityAttributeZPFv_PQ24Kaim16CEntityAttribute" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim16CEntityAttributeZPFv_PQ24Kaim16CEntityAttribute_0038a008(void)

{
  if (DAT_0040ebd8 == 0) {
    FUN_00370188(0x40ebd8,0x404d40);
  }
  return 0x40ebd8;
}


// ==== FUN_0038a048 @ 0038a048 ====

void FUN_0038a048(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e4728;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CEntityEyePosition_0038a078 @ 0038a078 ====

/* Strings referenciadas:
     "Q24Kaim18CEntityEyePosition" */

undefined8 Kaim_CEntityEyePosition_0038a078(void)

{
  if (DAT_0049aa68 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aa68,0x404db8,0x49aa58);
  }
  return 0x49aa68;
}


// ==== FUN_0038a0e0 @ 0038a0e0 ====

void FUN_0038a0e0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityGunPosition_0038a170 @ 0038a170 ====

/* Strings referenciadas:
     "Q24Kaim18CEntityGunPosition" */

undefined8 Kaim_CEntityGunPosition_0038a170(void)

{
  if (DAT_0049aa78 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aa78,0x404e80,0x49aa58);
  }
  return 0x49aa78;
}


// ==== FUN_0038a1d8 @ 0038a1d8 ====

void FUN_0038a1d8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityHeadDirection_0038a268 @ 0038a268 ====

/* Strings referenciadas:
     "Q24Kaim20CEntityHeadDirection" */

undefined8 Kaim_CEntityHeadDirection_0038a268(void)

{
  if (DAT_0049aa88 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aa88,0x404f48,0x49aa58);
  }
  return 0x49aa88;
}


// ==== FUN_0038a2d0 @ 0038a2d0 ====

void FUN_0038a2d0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityHearingAcuteness_0038a360 @ 0038a360 ====

/* Strings referenciadas:
     "Q24Kaim23CEntityHearingAcuteness" */

undefined8 Kaim_CEntityHearingAcuteness_0038a360(void)

{
  if (DAT_0049aa98 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aa98,0x405010,0x49aa58);
  }
  return 0x49aa98;
}


// ==== FUN_0038a3c8 @ 0038a3c8 ====

void FUN_0038a3c8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityHeight_0038a440 @ 0038a440 ====

/* Strings referenciadas:
     "Q24Kaim13CEntityHeight" */

undefined8 Kaim_CEntityHeight_0038a440(void)

{
  if (DAT_0049aaa8 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aaa8,0x4050d8,0x49aa58);
  }
  return 0x49aaa8;
}


// ==== FUN_0038a4d0 @ 0038a4d0 ====

void FUN_0038a4d0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityKneePosition_0038a528 @ 0038a528 ====

/* Strings referenciadas:
     "Q24Kaim19CEntityKneePosition" */

undefined8 Kaim_CEntityKneePosition_0038a528(void)

{
  if (DAT_0049aab8 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aab8,0x405198,0x49aa58);
  }
  return 0x49aab8;
}


// ==== FUN_0038a590 @ 0038a590 ====

void FUN_0038a590(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityLength_0038a620 @ 0038a620 ====

/* Strings referenciadas:
     "Q24Kaim13CEntityLength" */

undefined8 Kaim_CEntityLength_0038a620(void)

{
  if (DAT_0049aac8 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aac8,0x405258,0x49aa58);
  }
  return 0x49aac8;
}


// ==== FUN_0038a6b0 @ 0038a6b0 ====

void FUN_0038a6b0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityMaxSpeed_0038a708 @ 0038a708 ====

/* Strings referenciadas:
     "Q24Kaim15CEntityMaxSpeed" */

undefined8 Kaim_CEntityMaxSpeed_0038a708(void)

{
  if (DAT_0049aad8 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aad8,0x405310,0x49aa58);
  }
  return 0x49aad8;
}


// ==== FUN_0038a790 @ 0038a790 ====

void FUN_0038a790(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityTeamSide_0038a7e8 @ 0038a7e8 ====

/* Strings referenciadas:
     "Q24Kaim15CEntityTeamSide" */

undefined8 Kaim_CEntityTeamSide_0038a7e8(void)

{
  if (DAT_0049aae8 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aae8,0x4053d0,0x49aa58);
  }
  return 0x49aae8;
}


// ==== FUN_0038a858 @ 0038a858 ====

void FUN_0038a858(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityTorsoOrientation_0038a8b0 @ 0038a8b0 ====

/* Strings referenciadas:
     "Q24Kaim23CEntityTorsoOrientation" */

undefined8 Kaim_CEntityTorsoOrientation_0038a8b0(void)

{
  if (DAT_0049aaf8 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49aaf8,0x405498,0x49aa58);
  }
  return 0x49aaf8;
}


// ==== FUN_0038a918 @ 0038a918 ====

void FUN_0038a918(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityVisualAcuteness_0038a988 @ 0038a988 ====

/* Strings referenciadas:
     "Q24Kaim22CEntityVisualAcuteness" */

undefined8 Kaim_CEntityVisualAcuteness_0038a988(void)

{
  if (DAT_0049ab08 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49ab08,0x405568,0x49aa58);
  }
  return 0x49ab08;
}


// ==== FUN_0038aa20 @ 0038aa20 ====

void FUN_0038aa20(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CEntityWidth_0038aaa0 @ 0038aaa0 ====

/* Strings referenciadas:
     "Q24Kaim12CEntityWidth" */

undefined8 Kaim_CEntityWidth_0038aaa0(void)

{
  if (DAT_0049ab18 == 0) {
    FUN_00389f90();
    Kaim_CMetaClass_ctor(0x49ab18,0x405628,0x49aa58);
  }
  return 0x49ab18;
}


// ==== FUN_0038ab30 @ 0038ab30 ====

void FUN_0038ab30(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionActivate_0038ab88 @ 0038ab88 ====

/* Strings referenciadas:
     "Q24Kaim15CActionActivate" */

undefined8 Kaim_CActionActivate_0038ab88(void)

{
  if (DAT_0049ab28 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49ab28,0x4056e0,0x49a9d8);
  }
  return 0x49ab28;
}


// ==== FUN_0038abf0 @ 0038abf0 ====

void FUN_0038abf0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionHeadRotate_0038ac50 @ 0038ac50 ====

/* Strings referenciadas:
     "Q24Kaim17CActionHeadRotate" */

undefined8 Kaim_CActionHeadRotate_0038ac50(void)

{
  if (DAT_0049ab38 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49ab38,0x4057a8,0x49a9d8);
  }
  return 0x49ab38;
}


// ==== FUN_0038acb8 @ 0038acb8 ====

void FUN_0038acb8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionTorsoRotate_0038ad30 @ 0038ad30 ====

/* Strings referenciadas:
     "Q24Kaim18CActionTorsoRotate" */

undefined8 Kaim_CActionTorsoRotate_0038ad30(void)

{
  if (DAT_0049ab48 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49ab48,0x405870,0x49a9d8);
  }
  return 0x49ab48;
}


// ==== FUN_0038ad98 @ 0038ad98 ====

void FUN_0038ad98(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CActionVerticalSpeed_0038ae10 @ 0038ae10 ====

/* Strings referenciadas:
     "Q24Kaim20CActionVerticalSpeed" */

undefined8 Kaim_CActionVerticalSpeed_0038ae10(void)

{
  if (DAT_0049ab58 == 0) {
    FUN_00389908();
    Kaim_CMetaClass_ctor(0x49ab58,0x405938,0x49a9d8);
  }
  return 0x49ab58;
}


// ==== FUN_0038ae78 @ 0038ae78 ====

void FUN_0038ae78(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038aee0 @ 0038aee0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaim15CPathWayManager11CPathWayMap" */

undefined4 * Kaim_CObject_0038aee0(void)

{
  if (DAT_0049ab68 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x405a18);
    }
    Kaim_CMetaClass_ctor(0x49ab68,0x405a28,0x40ebc0);
  }
  return &DAT_0049ab68;
}


// ==== Kaim_CPathWayManager_0038af58 @ 0038af58 ====

/* Strings referenciadas:
     "Q24Kaim15CPathWayManager" */

undefined8 Kaim_CPathWayManager_0038af58(void)

{
  if (DAT_0049ab78 == 0) {
    Kaim_CWorldService_0038afb8();
    Kaim_CMetaClass_ctor(0x49ab78,0x405a50,0x49ab88);
  }
  return 0x49ab78;
}


// ==== Kaim_CWorldService_0038afb8 @ 0038afb8 ====

/* Strings referenciadas:
     "Q24Kaim13CWorldService" */

undefined8 Kaim_CWorldService_0038afb8(void)

{
  if (DAT_0049ab88 == 0) {
    Kaim_CBaseService_0038e6e0();
    Kaim_CMetaClass_ctor(0x49ab88,0x405a70,0x49ab98);
  }
  return 0x49ab88;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim13CWorldServiceZPFv_PQ24Kaim13CWorldService_0038b008 @ 0038b008 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim13CWorldServiceZPFv_PQ24Kaim13CWorldService" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim13CWorldServiceZPFv_PQ24Kaim13CWorldService_0038b008(void)

{
  if (DAT_0040ebe0 == 0) {
    FUN_00370188(0x40ebe0,0x405a88);
  }
  return 0x40ebe0;
}


// ==== FUN_0038b048 @ 0038b048 ====

void FUN_0038b048(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e5e40;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_0038b078 @ 0038b078 ====

undefined8 FUN_0038b078(undefined8 param_1)

{
  if (DAT_003e6430 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003e6430 = 0;
  return param_1;
}


// ==== FUN_0038b098 @ 0038b098 ====

undefined * FUN_0038b098(void)

{
  if (DAT_00450fd0 == 0) {
    FUN_0038b078(0x3e6028);
    DAT_00450fd0 = 1;
    FUN_0035e690(0x2dc9f0);
  }
  return &DAT_003e6028;
}


// ==== Kaim_CPointMapper_0038b0f0 @ 0038b0f0 ====

/* Strings referenciadas:
     "Q24Kaim12CPointMapper" */

undefined8 Kaim_CPointMapper_0038b0f0(void)

{
  if (DAT_0049aba8 == 0) {
    Kaim_CWorldService_0038afb8();
    Kaim_CMetaClass_ctor(0x49aba8,0x405b80,0x49ab88);
  }
  return 0x49aba8;
}


// ==== FUN_0038b150 @ 0038b150 ====

int FUN_0038b150(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_0038b098();
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


// ==== Kaim_CObject_0038b1f0 @ 0038b1f0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaim14CScriptManager10CScriptMap" */

undefined4 * Kaim_CObject_0038b1f0(void)

{
  if (DAT_0049abb8 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x405c60);
    }
    Kaim_CMetaClass_ctor(0x49abb8,0x405c70,0x40ebc0);
  }
  return &DAT_0049abb8;
}


// ==== Kaim_CScriptManager_0038b268 @ 0038b268 ====

/* Strings referenciadas:
     "Q24Kaim14CScriptManager" */

undefined8 Kaim_CScriptManager_0038b268(void)

{
  if (DAT_0049abc8 == 0) {
    Kaim_CWorldService_0038afb8();
    Kaim_CMetaClass_ctor(0x49abc8,0x405c98,0x49ab88);
  }
  return 0x49abc8;
}


// ==== FUN_0038b2c8 @ 0038b2c8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim9CScriptWP" */

undefined4 * FUN_0038b2c8(void)

{
  if (DAT_0049abd8 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x405e48);
    }
    Kaim_CMetaClass_ctor(0x49abd8,0x405e58,0x40ebc0);
  }
  return &DAT_0049abd8;
}


// ==== FUN_0038b340 @ 0038b340 ====

void FUN_0038b340(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_0038b378 @ 0038b378 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim8CPathWay" */

undefined4 * FUN_0038b378(void)

{
  if (DAT_0049abe8 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x405e48);
    }
    Kaim_CMetaClass_ctor(0x49abe8,0x405e70,0x40ebc0);
  }
  return &DAT_0049abe8;
}


// ==== Kaim_CScript_0038b3f8 @ 0038b3f8 ====

/* Strings referenciadas:
     "Q24Kaim7CScript" */

undefined8 Kaim_CScript_0038b3f8(void)

{
  if (DAT_0049abf8 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49abf8,0x405ec0,0x40ebc0);
  }
  return 0x49abf8;
}


// ==== FUN_0038b448 @ 0038b448 ====

undefined8 FUN_0038b448(undefined8 param_1)

{
  if (DAT_003e6cf0 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003e6cf0 = 0;
  return param_1;
}


// ==== FUN_0038b468 @ 0038b468 ====

undefined * FUN_0038b468(void)

{
  if (DAT_0045120c == 0) {
    FUN_0038b448(0x3e68e8);
    DAT_0045120c = 1;
    FUN_0035e690(0x2dfef0);
  }
  return &DAT_003e68e8;
}


// ==== FUN_0038b4c0 @ 0038b4c0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim7CAction" */

undefined4 * FUN_0038b4c0(void)

{
  if (DAT_0049b010 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x405ef0);
    }
    Kaim_CMetaClass_ctor(0x49b010,0x405f00,0x40ebc0);
  }
  return &DAT_0049b010;
}


// ==== FUN_0038b538 @ 0038b538 ====

undefined * FUN_0038b538(void)

{
  if (DAT_00451208 == 0) {
    FUN_0038b690(0x49ac08);
    DAT_00451208 = 1;
    FUN_0035e690(0x2dff00);
  }
  return &DAT_0049ac08;
}


// ==== FUN_0038b590 @ 0038b590 ====

void FUN_0038b590(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e0128;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CActionClass_0038b5c0 @ 0038b5c0 ====

/* Strings referenciadas:
     "Q24Kaim12CActionClass" */

undefined8 Kaim_CActionClass_0038b5c0(void)

{
  if (DAT_0049b020 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim7CActionZPFv_PQ24Kaim7CAction_0038b9d0();
    Kaim_CMetaClass_ctor(0x49b020,0x405f10,0x40ebe8);
  }
  return 0x49b020;
}


// ==== FUN_0038b610 @ 0038b610 ====

void FUN_0038b610(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e3d38;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CActionAttributeClass_0038b640 @ 0038b640 ====

/* Strings referenciadas:
     "Q24Kaim21CActionAttributeClass" */

undefined8 Kaim_CActionAttributeClass_0038b640(void)

{
  if (DAT_0049b030 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim16CActionAttributeZPFv_PQ24Kaim16CActionAttribute_00389980();
    Kaim_CMetaClass_ctor(0x49b030,0x405f28,0x40ebd0);
  }
  return 0x49b030;
}


// ==== FUN_0038b690 @ 0038b690 ====

undefined8 FUN_0038b690(undefined8 param_1)

{
  if (DAT_003c7784 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003c7784 = 0;
  return param_1;
}


// ==== FUN_0038b6b0 @ 0038b6b0 ====

undefined8
FUN_0038b6b0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
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
  piVar7[0x44] = (int)&DAT_003e0128;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038b468();
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
        goto LAB_0038b7a4;
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
LAB_0038b7a4:
  if (bVar4) {
    iVar2 = FUN_0038b468();
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


// ==== FUN_0038b840 @ 0038b840 ====

undefined8
FUN_0038b840(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
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
  piVar7[0x44] = (int)&DAT_003e3d38;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038b538();
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
        goto LAB_0038b934;
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
LAB_0038b934:
  if (bVar4) {
    iVar2 = FUN_0038b538();
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


// ==== Kaimt_CMetaClass2ZQ24Kaim7CActionZPFv_PQ24Kaim7CAction_0038b9d0 @ 0038b9d0 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim7CActionZPFv_PQ24Kaim7CAction" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim7CActionZPFv_PQ24Kaim7CAction_0038b9d0(void)

{
  if (DAT_0040ebe8 == 0) {
    FUN_00370188(0x40ebe8,0x405f48);
  }
  return 0x40ebe8;
}


// ==== FUN_0038ba10 @ 0038ba10 ====

undefined8 FUN_0038ba10(undefined8 param_1)

{
  if (DAT_003e7550 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003e7550 = 0;
  return param_1;
}


// ==== FUN_0038ba30 @ 0038ba30 ====

undefined * FUN_0038ba30(void)

{
  if (DAT_00451210 == 0) {
    FUN_0038ba10(0x3e7148);
    DAT_00451210 = 1;
    FUN_0035e690(0x2e0130);
  }
  return &DAT_003e7148;
}


// ==== Kaim_CAgent_0038ba88 @ 0038ba88 ====

/* Strings referenciadas:
     "Q24Kaim6CAgent" */

undefined8 Kaim_CAgent_0038ba88(void)

{
  if (DAT_0049a948 == 0) {
    Kaim_CObject_00389100();
    Kaim_CMetaClass_ctor(0x49a948,0x405ff0,0x40ebc0);
  }
  return 0x49a948;
}


// ==== FUN_0038bad8 @ 0038bad8 ====

undefined4 FUN_0038bad8(undefined8 param_1,long param_2)

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


// ==== FUN_0038bb30 @ 0038bb30 ====

void FUN_0038bb30(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e2ae0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CAgentClass_0038bb60 @ 0038bb60 ====

/* Strings referenciadas:
     "Q24Kaim11CAgentClass" */

undefined8 Kaim_CAgentClass_0038bb60(void)

{
  if (DAT_0049b040 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim6CAgentZPFPQ24Kaim6CBrain_PQ24Kaim6CAgent_00389370();
    Kaim_CMetaClass_ctor(0x49b040,0x406010,0x40ebc8);
  }
  return 0x49b040;
}


// ==== FUN_0038bbb0 @ 0038bbb0 ====

undefined8
FUN_0038bbb0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
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
  piVar7[0x44] = (int)&DAT_003e2ae0;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038ba30();
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
        goto LAB_0038bca4;
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
LAB_0038bca4:
  if (bVar4) {
    iVar2 = FUN_0038ba30();
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


// ==== FUN_0038bd40 @ 0038bd40 ====

undefined8 FUN_0038bd40(undefined8 param_1)

{
  if (DAT_003e7c08 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003e7c08 = 0;
  return param_1;
}


// ==== FUN_0038bd60 @ 0038bd60 ====

undefined * FUN_0038bd60(void)

{
  if (DAT_00451214 == 0) {
    FUN_0038bd40(0x3e7800);
    DAT_00451214 = 1;
    FUN_0035e690(0x2e1508);
  }
  return &DAT_003e7800;
}


// ==== FUN_0038bdb8 @ 0038bdb8 ====

undefined8 FUN_0038bdb8(undefined8 param_1)

{
  if (DAT_003e8018 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003e8018 = 0;
  return param_1;
}


// ==== FUN_0038bdd8 @ 0038bdd8 ====

undefined * FUN_0038bdd8(void)

{
  if (DAT_00451218 == 0) {
    FUN_0038bdb8(0x3e7c10);
    DAT_00451218 = 1;
    FUN_0035e690(0x2e1518);
  }
  return &DAT_003e7c10;
}


// ==== FUN_0038be30 @ 0038be30 ====

undefined8 FUN_0038be30(undefined8 param_1)

{
  if (DAT_003e8428 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003e8428 = 0;
  return param_1;
}


// ==== FUN_0038be50 @ 0038be50 ====

undefined * FUN_0038be50(void)

{
  if (DAT_0045121c == 0) {
    FUN_0038be30(0x3e8020);
    DAT_0045121c = 1;
    FUN_0035e690(0x2e1538);
  }
  return &DAT_003e8020;
}


// ==== FUN_0038bea8 @ 0038bea8 ====

void FUN_0038bea8(undefined8 param_1,ulong param_2)

{
  FUN_002e34b8(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== Kaim_CEntityDefinition_0038bef8 @ 0038bef8 ====

/* Strings referenciadas:
     "Q24Kaim17CEntityDefinition" */

undefined8 Kaim_CEntityDefinition_0038bef8(void)

{
  if (DAT_0049b050 == 0) {
    FUN_0038c898();
    Kaim_CMetaClass_ctor(0x49b050,0x406140,0x49b080);
  }
  return 0x49b050;
}


// ==== FUN_0038bf48 @ 0038bf48 ====

void FUN_0038bf48(undefined8 param_1,ulong param_2)

{
  FUN_002e34b8(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== Kaim_CTeamDefinition_0038bf98 @ 0038bf98 ====

/* Strings referenciadas:
     "Q24Kaim15CTeamDefinition" */

undefined8 Kaim_CTeamDefinition_0038bf98(void)

{
  if (DAT_0049b060 == 0) {
    FUN_0038c898();
    Kaim_CMetaClass_ctor(0x49b060,0x406160,0x49b080);
  }
  return 0x49b060;
}


// ==== FUN_0038bfe8 @ 0038bfe8 ====

void FUN_0038bfe8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038c020 @ 0038c020 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim5CTeam9CIterator" */

undefined4 * Kaim_CObject_0038c020(void)

{
  if (DAT_0049b070 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406100);
    }
    Kaim_CMetaClass_ctor(0x49b070,0x406180,0x40ebc0);
  }
  return &DAT_0049b070;
}


// ==== FUN_0038c098 @ 0038c098 ====

int FUN_0038c098(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_0038bd60();
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


// ==== FUN_0038c138 @ 0038c138 ====

int FUN_0038c138(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_0038bdd8();
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


// ==== FUN_0038c1d8 @ 0038c1d8 ====

int FUN_0038c1d8(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_0038b468();
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


// ==== FUN_0038c278 @ 0038c278 ====

int FUN_0038c278(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_0038be50();
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


// ==== FUN_0038c318 @ 0038c318 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim6CBrain" */

undefined4 * FUN_0038c318(void)

{
  if (DAT_0049b090 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4061d8);
    }
    Kaim_CMetaClass_ctor(0x49b090,0x4061e8,0x40ebc0);
  }
  return &DAT_0049b090;
}


// ==== FUN_0038c390 @ 0038c390 ====

undefined4 FUN_0038c390(undefined8 param_1,long param_2)

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


// ==== FUN_0038c3e0 @ 0038c3e0 ====

undefined * FUN_0038c3e0(void)

{
  if (DAT_00451220 == 0) {
    FUN_0038c5f8(0x3eab88);
    DAT_00451220 = 1;
    FUN_0035e690(0x2e1e08);
  }
  return &DAT_003eab88;
}


// ==== FUN_0038c438 @ 0038c438 ====

int FUN_0038c438(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_0038c3e0();
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


// ==== FUN_0038c4d8 @ 0038c4d8 ====

int FUN_0038c4d8(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = 0;
    piVar1 = (int *)FUN_0038ba30();
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


// ==== FUN_0038c578 @ 0038c578 ====

void FUN_0038c578(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e0110;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CBrainClass_0038c5a8 @ 0038c5a8 ====

/* Strings referenciadas:
     "Q24Kaim11CBrainClass" */

undefined8 Kaim_CBrainClass_0038c5a8(void)

{
  if (DAT_0049b0a0 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim6CBrainZPFPQ24Kaim7CEntityRQ24Kaim12CActionClass_PQ24Kaim6CBrain_0038c7a8
              ();
    Kaim_CMetaClass_ctor(0x49b0a0,0x4061f8,0x40ebf0);
  }
  return 0x49b0a0;
}


// ==== FUN_0038c5f8 @ 0038c5f8 ====

undefined8 FUN_0038c5f8(undefined8 param_1)

{
  if (DAT_003c7fa1 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003c7fa1 = 0;
  return param_1;
}


// ==== FUN_0038c618 @ 0038c618 ====

undefined8
FUN_0038c618(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
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
  piVar7[0x44] = (int)&DAT_003e0110;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038bdd8();
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
        goto LAB_0038c70c;
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
LAB_0038c70c:
  if (bVar4) {
    iVar2 = FUN_0038bdd8();
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


// ==== Kaimt_CMetaClass2ZQ24Kaim6CBrainZPFPQ24Kaim7CEntityRQ24Kaim12CActionClass_PQ24Kaim6CBrain_0038c7a8 @ 0038c7a8 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim6CBrainZPFPQ24Kaim7CEntityRQ24Kaim12CActionClass_PQ24Kaim6CBrain"
    */

undefined8
Kaimt_CMetaClass2ZQ24Kaim6CBrainZPFPQ24Kaim7CEntityRQ24Kaim12CActionClass_PQ24Kaim6CBrain_0038c7a8
          (void)

{
  if (DAT_0040ebf0 == 0) {
    FUN_00370188(0x40ebf0,0x406210);
  }
  return 0x40ebf0;
}


// ==== FUN_0038c7e8 @ 0038c7e8 ====

void FUN_0038c7e8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_0038c820 @ 0038c820 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim12CTraceResult" */

undefined4 * FUN_0038c820(void)

{
  if (DAT_0049b0b0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406280);
    }
    Kaim_CMetaClass_ctor(0x49b0b0,0x406290,0x40ebc0);
  }
  return &DAT_0049b0b0;
}


// ==== FUN_0038c898 @ 0038c898 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim5CData" */

undefined4 * FUN_0038c898(void)

{
  if (DAT_0049b080 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4062b8);
    }
    Kaim_CMetaClass_ctor(0x49b080,0x4062c8,0x40ebc0);
  }
  return &DAT_0049b080;
}


// ==== Kaim_CObject_0038c928 @ 0038c928 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaimt8CVarList1ZPQ24Kaim7CEntity" */

undefined4 * Kaim_CObject_0038c928(void)

{
  if (DAT_0049b0c0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4062e8);
    }
    Kaim_CMetaClass_ctor(0x49b0c0,0x4062f8,0x40ebc0);
  }
  return &DAT_0049b0c0;
}


// ==== FUN_0038c9a0 @ 0038c9a0 ====

void FUN_0038c9a0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038c9d8 @ 0038c9d8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim7CEntity5CCell" */

undefined4 * Kaim_CObject_0038c9d8(void)

{
  if (DAT_0049b0d0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x4062e8);
    }
    Kaim_CMetaClass_ctor(0x49b0d0,0x406350,0x40ebc0);
  }
  return &DAT_0049b0d0;
}


// ==== FUN_0038ca50 @ 0038ca50 ====

void FUN_0038ca50(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e8ee8;
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


// ==== FUN_0038cb28 @ 0038cb28 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim7CEntity" */

undefined4 * FUN_0038cb28(void)

{
  if (DAT_0049b4e8 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406398);
    }
    Kaim_CMetaClass_ctor(0x49b4e8,0x4063d8,0x40ebc0);
  }
  return &DAT_0049b4e8;
}


// ==== Kaim_CObject_0038cba8 @ 0038cba8 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaimt8CVarList1ZPQ24Kaim5CTeam" */

undefined4 * Kaim_CObject_0038cba8(void)

{
  if (DAT_0049b4f8 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406398);
    }
    Kaim_CMetaClass_ctor(0x49b4f8,0x4063e8,0x40ebc0);
  }
  return &DAT_0049b4f8;
}


// ==== FUN_0038cc20 @ 0038cc20 ====

undefined * FUN_0038cc20(void)

{
  if (DAT_004512a0 == 0) {
    FUN_0038cf00(0x49b0e0);
    DAT_004512a0 = 1;
    FUN_0035e690(0x2e4e18);
  }
  return &DAT_0049b0e0;
}


// ==== FUN_0038cc78 @ 0038cc78 ====

void FUN_0038cc78(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038ccb0 @ 0038ccb0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim5CTeam5CCell" */

undefined4 * Kaim_CObject_0038ccb0(void)

{
  if (DAT_0049b508 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406398);
    }
    Kaim_CMetaClass_ctor(0x49b508,0x406440,0x40ebc0);
  }
  return &DAT_0049b508;
}


// ==== FUN_0038cd28 @ 0038cd28 ====

void FUN_0038cd28(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e90a8;
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


// ==== FUN_0038ce00 @ 0038ce00 ====

void FUN_0038ce00(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e00f8;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CEntityClass_0038ce30 @ 0038ce30 ====

/* Strings referenciadas:
     "Q24Kaim12CEntityClass" */

undefined8 Kaim_CEntityClass_0038ce30(void)

{
  if (DAT_0049b518 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim7CEntityZPFPCcPv_PQ24Kaim7CEntity_0038d240();
    Kaim_CMetaClass_ctor(0x49b518,0x406468,0x40ebf8);
  }
  return 0x49b518;
}


// ==== FUN_0038ce80 @ 0038ce80 ====

void FUN_0038ce80(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e4728;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_CEntityAttributeClass_0038ceb0 @ 0038ceb0 ====

/* Strings referenciadas:
     "Q24Kaim21CEntityAttributeClass" */

undefined8 Kaim_CEntityAttributeClass_0038ceb0(void)

{
  if (DAT_0049b528 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim16CEntityAttributeZPFv_PQ24Kaim16CEntityAttribute_0038a008();
    Kaim_CMetaClass_ctor(0x49b528,0x406480,0x40ebd8);
  }
  return 0x49b528;
}


// ==== FUN_0038cf00 @ 0038cf00 ====

undefined8 FUN_0038cf00(undefined8 param_1)

{
  if (DAT_003c8980 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003c8980 = 0;
  return param_1;
}


// ==== FUN_0038cf20 @ 0038cf20 ====

undefined8
FUN_0038cf20(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
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
  piVar7[0x44] = (int)&DAT_003e00f8;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038bd60();
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
        goto LAB_0038d014;
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
LAB_0038d014:
  if (bVar4) {
    iVar2 = FUN_0038bd60();
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


// ==== FUN_0038d0b0 @ 0038d0b0 ====

undefined8
FUN_0038d0b0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
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
  piVar7[0x44] = (int)&DAT_003e4728;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038cc20();
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
        goto LAB_0038d1a4;
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
LAB_0038d1a4:
  if (bVar4) {
    iVar2 = FUN_0038cc20();
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


// ==== Kaimt_CMetaClass2ZQ24Kaim7CEntityZPFPCcPv_PQ24Kaim7CEntity_0038d240 @ 0038d240 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim7CEntityZPFPCcPv_PQ24Kaim7CEntity" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim7CEntityZPFPCcPv_PQ24Kaim7CEntity_0038d240(void)

{
  if (DAT_0040ebf8 == 0) {
    FUN_00370188(0x40ebf8,0x4064a0);
  }
  return 0x40ebf8;
}


// ==== Kaim_IPathFinder_0038d280 @ 0038d280 ====

/* Strings referenciadas:
     "Q24Kaim11IPathFinder" */

undefined8 Kaim_IPathFinder_0038d280(void)

{
  if (DAT_0049b940 == 0) {
    Kaim_CBrainService_0038d390();
    Kaim_CMetaClass_ctor(0x49b940,0x406570,0x49b950);
  }
  return 0x49b940;
}


// ==== FUN_0038d2d0 @ 0038d2d0 ====

void FUN_0038d2d0(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *param_1;
  sVar1 = *(short *)(iVar2 + 0x30);
  uVar3 = (**(code **)(*param_2 + 0x14))((int)param_2 + (int)*(short *)(*param_2 + 0x10));
  (**(code **)(iVar2 + 0x34))((int)param_1 + (int)sVar1,uVar3);
  return;
}


// ==== FUN_0038d338 @ 0038d338 ====

undefined * FUN_0038d338(void)

{
  if (DAT_004512a8 == 0) {
    FUN_0038d4a0(0x49b538);
    DAT_004512a8 = 1;
    FUN_0035e690(0x2e5278);
  }
  return &DAT_0049b538;
}


// ==== Kaim_CBrainService_0038d390 @ 0038d390 ====

/* Strings referenciadas:
     "Q24Kaim13CBrainService" */

undefined8 Kaim_CBrainService_0038d390(void)

{
  if (DAT_0049b950 == 0) {
    Kaim_CBaseService_0038e6e0();
    Kaim_CMetaClass_ctor(0x49b950,0x406588,0x49ab98);
  }
  return 0x49b950;
}


// ==== Kaimt_CMetaClass2ZQ24Kaim13CBrainServiceZPFPQ24Kaim6CBrain_PQ24Kaim13CBrainService_0038d3e0 @ 0038d3e0 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim13CBrainServiceZPFPQ24Kaim6CBrain_PQ24Kaim13CBrainService" */

undefined8
Kaimt_CMetaClass2ZQ24Kaim13CBrainServiceZPFPQ24Kaim6CBrain_PQ24Kaim13CBrainService_0038d3e0(void)

{
  if (DAT_0040ec00 == 0) {
    FUN_00370188(0x40ec00,0x4065a0);
  }
  return 0x40ec00;
}


// ==== FUN_0038d420 @ 0038d420 ====

void FUN_0038d420(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e00c8;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== Kaim_IConstraintClass_0038d450 @ 0038d450 ====

/* Strings referenciadas:
     "Q24Kaim16IConstraintClass" */

undefined8 Kaim_IConstraintClass_0038d450(void)

{
  if (DAT_0049b960 == 0) {
    Kaimt_CMetaClass2ZQ24Kaim11IConstraintZPFv_PQ24Kaim11IConstraint_0038d650();
    Kaim_CMetaClass_ctor(0x49b960,0x4065f8,0x40ec08);
  }
  return 0x49b960;
}


// ==== FUN_0038d4a0 @ 0038d4a0 ====

undefined8 FUN_0038d4a0(undefined8 param_1)

{
  if (DAT_003c8c00 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003c8c00 = 0;
  return param_1;
}


// ==== FUN_0038d4c0 @ 0038d4c0 ====

undefined8
FUN_0038d4c0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
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
  piVar7[0x44] = (int)&DAT_003e00c8;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038d338();
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
        goto LAB_0038d5b4;
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
LAB_0038d5b4:
  if (bVar4) {
    iVar2 = FUN_0038d338();
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


// ==== Kaimt_CMetaClass2ZQ24Kaim11IConstraintZPFv_PQ24Kaim11IConstraint_0038d650 @ 0038d650 ====

/* Strings referenciadas:
     "Q24Kaimt10CMetaClass2ZQ24Kaim11IConstraintZPFv_PQ24Kaim11IConstraint" */

undefined8 Kaimt_CMetaClass2ZQ24Kaim11IConstraintZPFv_PQ24Kaim11IConstraint_0038d650(void)

{
  if (DAT_0040ec08 == 0) {
    FUN_00370188(0x40ec08,0x406618);
  }
  return 0x40ec08;
}


// ==== FUN_0038d690 @ 0038d690 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim14CBaseAllocator"
     "Q24Kaim10CAllocator"
     "Q24Kaim15CBasicAllocator" */

undefined4 * FUN_0038d690(void)

{
  if (DAT_0049b990 == 0) {
    if (DAT_0049b980 == 0) {
      if (DAT_0049b970 == 0) {
        if (DAT_0040ebc0 == 0) {
          FUN_00370188(0x40ebc0,0x406700);
        }
        Kaim_CMetaClass_ctor(0x49b970,0x406710,0x40ebc0);
      }
      Kaim_CMetaClass_ctor(0x49b980,0x406728,0x49b970);
    }
    Kaim_CMetaClass_ctor(0x49b990,0x406740,0x49b980);
  }
  return &DAT_0049b990;
}


// ==== FUN_0038d760 @ 0038d760 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim14CBaseAllocator"
     "Q24Kaim10CAllocator"
     "Q24Kaim19CPoolBasedAllocator" */

undefined4 * FUN_0038d760(void)

{
  if (DAT_0049b9a0 == 0) {
    if (DAT_0049b980 == 0) {
      if (DAT_0049b970 == 0) {
        if (DAT_0040ebc0 == 0) {
          FUN_00370188(0x40ebc0,0x406700);
        }
        Kaim_CMetaClass_ctor(0x49b970,0x406710,0x40ebc0);
      }
      Kaim_CMetaClass_ctor(0x49b980,0x406728,0x49b970);
    }
    Kaim_CMetaClass_ctor(0x49b9a0,0x406760,0x49b980);
  }
  return &DAT_0049b9a0;
}


// ==== FUN_0038d830 @ 0038d830 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim14CBaseAllocator" */

undefined4 * FUN_0038d830(void)

{
  if (DAT_0049b970 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406700);
    }
    Kaim_CMetaClass_ctor(0x49b970,0x406710,0x40ebc0);
  }
  return &DAT_0049b970;
}


// ==== FUN_0038d8a8 @ 0038d8a8 ====

void FUN_0038d8a8(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003e9c60;
  piVar1 = (int *)puVar2[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  *puVar2 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_0038d928 @ 0038d928 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim14CBaseAllocator"
     "Q24Kaim10CAllocator" */

undefined4 * FUN_0038d928(void)

{
  if (DAT_0049b980 == 0) {
    if (DAT_0049b970 == 0) {
      if (DAT_0040ebc0 == 0) {
        FUN_00370188(0x40ebc0,0x406700);
      }
      Kaim_CMetaClass_ctor(0x49b970,0x406710,0x40ebc0);
    }
    Kaim_CMetaClass_ctor(0x49b980,0x406728,0x49b970);
  }
  return &DAT_0049b980;
}


// ==== Kaim_CObject_0038d9e0 @ 0038d9e0 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaimt8CVarList1ZPQ24Kaim14CFreeListBlock" */

undefined4 * Kaim_CObject_0038d9e0(void)

{
  if (DAT_0049b9b0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406700);
    }
    Kaim_CMetaClass_ctor(0x49b9b0,0x406780,0x40ebc0);
  }
  return &DAT_0049b9b0;
}


// ==== FUN_0038da58 @ 0038da58 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaim14CBaseAllocator"
     "Q24Kaim9CFreeList" */

undefined4 * FUN_0038da58(void)

{
  if (DAT_0049b9c0 == 0) {
    if (DAT_0049b970 == 0) {
      if (DAT_0040ebc0 == 0) {
        FUN_00370188(0x40ebc0,0x406700);
      }
      Kaim_CMetaClass_ctor(0x49b970,0x406710,0x40ebc0);
    }
    Kaim_CMetaClass_ctor(0x49b9c0,0x4067b0,0x49b970);
  }
  return &DAT_0049b9c0;
}


// ==== FUN_0038db00 @ 0038db00 ====

void FUN_0038db00(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038db38 @ 0038db38 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim14CFreeListBlock9CIterator" */

undefined4 * Kaim_CObject_0038db38(void)

{
  if (DAT_0049b9d0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406700);
    }
    Kaim_CMetaClass_ctor(0x49b9d0,0x4067c8,0x40ebc0);
  }
  return &DAT_0049b9d0;
}


// ==== FUN_0038dbb0 @ 0038dbb0 ====

void FUN_0038dbb0(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 0x28) = &DAT_003e0040;
  FUN_002e5d90(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== Kaim_CFreeListBlock_0038dc08 @ 0038dc08 ====

/* Strings referenciadas:
     "Q24Kaim14CFreeListBlock" */

undefined8 Kaim_CFreeListBlock_0038dc08(void)

{
  if (DAT_0049b9e0 == 0) {
    FUN_0038d760();
    Kaim_CMetaClass_ctor(0x49b9e0,0x406800,0x49b9a0);
  }
  return 0x49b9e0;
}


// ==== Kaim_CObject_0038dc58 @ 0038dc58 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q24Kaimt8CVarList1ZPQ24Kaim14CBaseAllocator" */

undefined4 * Kaim_CObject_0038dc58(void)

{
  if (DAT_0049b9f0 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406700);
    }
    Kaim_CMetaClass_ctor(0x49b9f0,0x406818,0x40ebc0);
  }
  return &DAT_0049b9f0;
}


// ==== FUN_0038dcd0 @ 0038dcd0 ====

void FUN_0038dcd0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038dd08 @ 0038dd08 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim14CBaseAllocator5CCell" */

undefined4 * Kaim_CObject_0038dd08(void)

{
  if (DAT_0049ba00 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406700);
    }
    Kaim_CMetaClass_ctor(0x49ba00,0x406848,0x40ebc0);
  }
  return &DAT_0049ba00;
}


// ==== FUN_0038dd80 @ 0038dd80 ====

void FUN_0038dd80(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e9a80;
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


// ==== FUN_0038de58 @ 0038de58 ====

void FUN_0038de58(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038de90 @ 0038de90 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim14CBaseAllocator9CIterator" */

undefined4 * Kaim_CObject_0038de90(void)

{
  if (DAT_0049ba10 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406700);
    }
    Kaim_CMetaClass_ctor(0x49ba10,0x406880,0x40ebc0);
  }
  return &DAT_0049ba10;
}


// ==== FUN_0038df08 @ 0038df08 ====

void FUN_0038df08(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== Kaim_CObject_0038df40 @ 0038df40 ====

/* Strings referenciadas:
     "Q24Kaim7CObject"
     "Q34Kaimt8CVarList1ZPQ24Kaim14CFreeListBlock5CCell" */

undefined4 * Kaim_CObject_0038df40(void)

{
  if (DAT_0049ba20 == 0) {
    if (DAT_0040ebc0 == 0) {
      FUN_00370188(0x40ebc0,0x406700);
    }
    Kaim_CMetaClass_ctor(0x49ba20,0x4068b8,0x40ebc0);
  }
  return &DAT_0049ba20;
}


// ==== FUN_0038dfb8 @ 0038dfb8 ====

void FUN_0038dfb8(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e9b40;
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


// ==== FUN_0038e090 @ 0038e090 ====

undefined8 FUN_0038e090(undefined8 param_1)

{
  if (DAT_003ea770 != '\0') {
    *(undefined4 *)((int)param_1 + 0x400) = 0;
  }
  DAT_003ea770 = 0;
  return param_1;
}


// ==== FUN_0038e0b0 @ 0038e0b0 ====

undefined * FUN_0038e0b0(void)

{
  if (DAT_004513d4 == 0) {
    FUN_0038e090(0x3ea368);
    DAT_004513d4 = 1;
    FUN_0035e690(0x2e7490);
  }
  return &DAT_003ea368;
}


// ==== FUN_0038e108 @ 0038e108 ====

undefined8
FUN_0038e108(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5,char param_6
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
  piVar7[0x44] = (int)&DAT_003ea790;
  strcpy(piVar7 + 2);
  piVar1 = (int *)FUN_0038e0b0();
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
        goto LAB_0038e1fc;
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
LAB_0038e1fc:
  if (bVar4) {
    iVar2 = FUN_0038e0b0();
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


