// ==== Pool_RoundSize @ 00250370 ====

/* redondea tamano a multiplo de 4 con minimo del pool */

uint Pool_RoundSize(int param_1,uint param_2)

{
  byte bVar1;
  
  if ((param_2 & 3) == 0) {
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  else {
    param_2 = (param_2 & 0xfffffffc) + 4;
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  if (param_2 < (bVar1 & 0xf)) {
    param_2 = bVar1 & 0xf;
  }
  return param_2;
}


// ==== FUN_002503a8 @ 002503a8 ====

long FUN_002503a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00248c78(DAT_003bfab8 + 8,param_3);
  if ((lVar1 == 0) || ((*(int *)lVar1 >> 4 & 1U) != 1)) {
    lVar1 = FUN_00248c78(DAT_003bfabc + 8,param_3);
  }
  return lVar1;
}


// ==== FUN_00250418 @ 00250418 ====

undefined4 FUN_00250418(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_00248c78(DAT_003bfab8 + 8,param_3);
  if (lVar1 == 0) {
    FUN_002488d0(param_1 + 8,param_3,param_4);
  }
  return 1;
}


// ==== FUN_00250480 @ 00250480 ====

void FUN_00250480(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  FUN_0024f790(param_1);
  return;
}


// ==== FUN_002504d0 @ 002504d0 ====

void FUN_002504d0(undefined8 param_1)

{
  int iVar1;
  
  FUN_0024f770();
  iVar1 = *(int *)((int)param_1 + 0x1c);
  if (iVar1 != 0) {
    (*DAT_003bfab0)(param_1,iVar1,0x3ff7f0);
  }
  return;
}


// ==== FUN_00250518 @ 00250518 ====

/* Strings referenciadas:
     "registerClass" */

undefined4 FUN_00250518(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = strcmp(*param_3 + 8,0x3ff808);
  uVar1 = 0;
  if (lVar2 == 0) {
    uVar1 = DAT_0043df78;
  }
  return uVar1;
}


// ==== FUN_00250550 @ 00250550 ====

void FUN_00250550(void)

{
  FUN_0024f770();
  return;
}


// ==== FUN_00250570 @ 00250570 ====

void FUN_00250570(void)

{
  FUN_0024f790();
  return;
}


// ==== FUN_00250590 @ 00250590 ====

/* Strings referenciadas:
     "__INTERFACEs__" */

void FUN_00250590(int param_1,undefined8 param_2,undefined1 param_3)

{
  short sVar1;
  short *apsStack_50 [4];
  
  String_ctor_cstr(apsStack_50,0x3ff818);
  FUN_002488d0(param_1 + 8,apsStack_50,param_2);
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  sVar1 = *apsStack_50[0];
  *apsStack_50[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
  }
  return;
}


// ==== FUN_00250618 @ 00250618 ====

/* Strings referenciadas:
     "__INTERFACES__" */

undefined8 FUN_00250618(int param_1,uint *param_2)

{
  short sVar1;
  undefined8 uVar2;
  short *apsStack_30 [4];
  
  *param_2 = (uint)*(byte *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar2 = 0;
  }
  else {
    String_ctor_cstr(apsStack_30,0x3fd578);
    uVar2 = FUN_00248c78(param_1 + 8,apsStack_30);
    sVar1 = *apsStack_30[0];
    *apsStack_30[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_30[0],(ushort)apsStack_30[0][2] + 9);
    }
  }
  return uVar2;
}


// ==== FUN_002506a0 @ 002506a0 ====

/* Strings referenciadas:
     "__INTERFACES__" */

undefined4 FUN_002506a0(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  short *apsStack_50 [4];
  
  iVar3 = *(int *)(param_1 + 0x10);
  do {
    if (iVar3 == 0) {
      cVar1 = *(char *)(param_1 + 0x1c);
LAB_00250714:
      if (cVar1 != '\0') {
        String_ctor_cstr(apsStack_50,0x3fd578);
        iVar3 = FUN_00248c78(param_1 + 8,apsStack_50);
        uVar6 = 0;
        if (*(char *)(param_1 + 0x1c) != '\0') {
          iVar4 = *(int *)(iVar3 + 0x20);
          while( true ) {
            if (*(int *)(uVar6 * 4 + iVar4) == param_2) {
              sVar2 = *apsStack_50[0];
              *apsStack_50[0] = sVar2 + -1;
              if ((short)(sVar2 + -1) != 0) {
                return 1;
              }
              Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
              return 1;
            }
            uVar6 = uVar6 + 1;
            if (*(byte *)(param_1 + 0x1c) <= uVar6) break;
            iVar4 = *(int *)(iVar3 + 0x20);
          }
        }
        sVar2 = *apsStack_50[0];
        *apsStack_50[0] = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
        }
      }
      return 0;
    }
    if (iVar3 == param_2) {
      return 1;
    }
    lVar5 = (**(code **)(*(int *)(iVar3 + 4) + 0x2c))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x28));
    if (lVar5 == 0) {
      cVar1 = *(char *)(param_1 + 0x1c);
      goto LAB_00250714;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x24))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x20));
    iVar3 = *(int *)(iVar3 + 8);
  } while( true );
}


// ==== FUN_002507f0 @ 002507f0 ====

undefined8 FUN_002507f0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_00386ec8(param_1,0x1a);
  iVar6 = (int)param_1;
  *(undefined **)(iVar6 + 4) = &DAT_003e1f88;
  Pow2Container_ctor(iVar6 + 8,8);
  *(undefined1 *)(iVar6 + 0x1c) = 0;
  *(undefined **)(iVar6 + 4) = &DAT_003e14b8;
  *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffcff;
  puVar5 = (uint *)param_2;
  uVar4 = 0;
  if ((*puVar5 >> 0x19) - 0xc < 8) {
    uVar4 = (int)*puVar5 >> 4 & 1;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(iVar6 + 0x20) = 0;
    return param_1;
  }
  lVar3 = FUN_00387080(param_2);
  bVar1 = false;
  if (lVar3 == 0xd) {
    lVar3 = FUN_003871c0(param_2);
    bVar1 = lVar3 == 0;
  }
  if (!bVar1) {
    lVar3 = FUN_00387080(param_2);
    bVar1 = false;
    if (lVar3 == 0x12) {
      lVar3 = FUN_003871c0(param_2);
      bVar1 = lVar3 == 0;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_002508f0;
  }
  bVar2 = true;
LAB_002508f0:
  if (bVar2) {
    *(uint **)(iVar6 + 0x20) = puVar5;
  }
  else {
    lVar3 = FUN_00387080(param_2);
    bVar1 = false;
    if (lVar3 == 0xf) {
      lVar3 = FUN_003871c0(param_2);
      bVar1 = lVar3 == 0;
    }
    if (!bVar1) {
      return param_1;
    }
    *(uint **)(iVar6 + 0x20) = puVar5;
  }
  (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
  return param_1;
}


// ==== FUN_00250970 @ 00250970 ====

void FUN_00250970(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x24);
  }
  return;
}


// ==== FUN_00250da0 @ 00250da0 ====

undefined4 FUN_00250da0(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    uVar2 = FUN_0024c300(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4));
    fVar3 = (float)(uVar2 & 0xff);
    FUN_0023ccc8((float)(uVar2 >> 0x10 & 0xff),iVar1,8,0);
    FUN_0023ccc8((float)((int)(uVar2 & 0xff00) >> 8),iVar1,9,0);
    FUN_0023ccc8(fVar3,iVar1,10,0);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0xfffeffff | 0x10000;
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  return DAT_0043df40;
}


// ==== FUN_00250e98 @ 00250e98 ====

uint * FUN_00250e98(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = *(int *)(param_1 + 0x20);
  puVar5 = DAT_0043df40;
  if (iVar1 != 0) {
    fVar7 = (float)FUN_0023c8e8(iVar1,8);
    fVar8 = (float)FUN_0023c8e8(iVar1,9);
    fVar9 = (float)FUN_0023c8e8(iVar1,10);
    puVar5 = DAT_003bfaec;
    uVar6 = (int)fVar7 << 0x10 | (int)fVar8 << 8 | (int)fVar9;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar6;
      puVar5[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar4 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar4;
      piVar3 = DAT_003be8e0;
      iVar1 = DAT_003be8e0[1];
      if (iVar1 < *DAT_003be8e0) {
        *(uint **)(iVar1 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar3[1] = iVar1 + 1;
      }
      else {
        *puVar5 = uVar2 & 0xfffffffb;
      }
      puVar5[2] = uVar6;
    }
  }
  return puVar5;
}


// ==== FUN_00250fc0 @ 00250fc0 ====

int FUN_00250fc0(int param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  float fVar9;
  
  iVar6 = DAT_0043df40;
  if ((param_2 < 1) && (piVar1 = *(int **)(param_1 + 0x20), (*piVar1 >> 4 & 1U) != 0)) {
    iVar6 = FUN_0024fa38(DAT_0043dee4,0x20);
    FUN_00386ec8(iVar6,0x1b);
    *(undefined **)(iVar6 + 4) = &DAT_003e1f88;
    Pow2Container_ctor(iVar6 + 8,8);
    *(undefined1 *)(iVar6 + 0x1c) = 0;
    *(undefined **)(iVar6 + 4) = &DAT_003e1e78;
    *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffcff;
    puVar7 = DAT_003bfaec;
    fVar9 = (float)piVar1[10];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = (int)(fVar9 * 100.0);
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar5;
      piVar4 = DAT_003be8e0;
      iVar8 = DAT_003be8e0[1];
      if (iVar8 < *DAT_003be8e0) {
        *(uint **)(iVar8 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar8 + 1;
      }
      else {
        *puVar7 = uVar2 & 0xfffffffb;
      }
      puVar7[2] = (int)(fVar9 * 100.0);
    }
    iVar8 = iVar6 + 8;
    FUN_002488d0(iVar8,0x43de00,puVar7);
    puVar7 = DAT_003bfaec;
    fVar9 = (float)piVar1[0xb];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = (int)(fVar9 * 100.0);
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar5;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar2 & 0xfffffffb;
      }
      puVar7[2] = (int)(fVar9 * 100.0);
    }
    FUN_002488d0(iVar8,0x43dd00,puVar7);
    puVar7 = DAT_003bfaec;
    fVar9 = (float)piVar1[0xc];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = (int)(fVar9 * 100.0);
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar5;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar2 & 0xfffffffb;
      }
      puVar7[2] = (int)(fVar9 * 100.0);
    }
    FUN_002488d0(iVar8,0x43dcac,puVar7);
    puVar7 = DAT_003bfaec;
    fVar9 = (float)piVar1[9];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = (int)(fVar9 * 100.0);
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar5;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar2 & 0xfffffffb;
      }
      puVar7[2] = (int)(fVar9 * 100.0);
    }
    FUN_002488d0(iVar8,0x43dc8c,puVar7);
    puVar7 = DAT_003bfaec;
    fVar9 = (float)piVar1[0xe];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = (int)(fVar9 * 255.0);
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar5;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar2 & 0xfffffffb;
      }
      puVar7[2] = (int)(fVar9 * 255.0);
    }
    FUN_002488d0(iVar8,0x43de08,puVar7);
    puVar7 = DAT_003bfaec;
    fVar9 = (float)piVar1[0xf];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = (int)(fVar9 * 255.0);
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar5;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar2 & 0xfffffffb;
      }
      puVar7[2] = (int)(fVar9 * 255.0);
    }
    FUN_002488d0(iVar8,0x43dd04,puVar7);
    puVar7 = DAT_003bfaec;
    fVar9 = (float)piVar1[0x10];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = (int)(fVar9 * 255.0);
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar5;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar2 & 0xfffffffb;
      }
      puVar7[2] = (int)(fVar9 * 255.0);
    }
    FUN_002488d0(iVar8,0x43dcb0,puVar7);
    puVar7 = DAT_003bfaec;
    fVar9 = (float)piVar1[0xd];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = (int)(fVar9 * 255.0);
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar5;
      piVar1 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar1[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar2 & 0xfffffffb;
      }
      puVar7[2] = (int)(fVar9 * 255.0);
    }
    FUN_002488d0(iVar8,0x43dc90,puVar7);
  }
  return iVar6;
}


// ==== FUN_002516a8 @ 002516a8 ====

undefined4 FUN_002516a8(int param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (0 < param_2) {
    piVar1 = *(int **)(param_1 + 0x20);
    puVar7 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    if ((piVar1 != (int *)0x0) && ((*piVar1 >> 4 & 1U) == 1)) {
      uVar2 = *puVar7;
      uVar6 = (int)uVar2 >> 4 & 1;
      if (uVar6 != 0) {
        uVar5 = 0;
        if (uVar2 >> 0x19 == 0x1b) {
          uVar5 = uVar6;
        }
        if (uVar5 != 0) {
          puVar7 = puVar7 + 2;
          lVar4 = FUN_00248c78(puVar7,0x43de00);
          if (lVar4 != 0) {
            iVar3 = FUN_0024c300(lVar4);
            piVar1[10] = (int)((float)iVar3 / 100.0);
          }
          lVar4 = FUN_00248c78(puVar7,0x43de08);
          if (lVar4 != 0) {
            iVar3 = FUN_0024c300(lVar4);
            piVar1[0xe] = (int)((float)iVar3 / 255.0);
          }
          lVar4 = FUN_00248c78(puVar7,0x43dd00);
          if (lVar4 != 0) {
            iVar3 = FUN_0024c300(lVar4);
            piVar1[0xb] = (int)((float)iVar3 / 100.0);
          }
          lVar4 = FUN_00248c78(puVar7,0x43dd04);
          if (lVar4 != 0) {
            iVar3 = FUN_0024c300(lVar4);
            piVar1[0xf] = (int)((float)iVar3 / 255.0);
          }
          lVar4 = FUN_00248c78(puVar7,0x43dcac);
          if (lVar4 != 0) {
            iVar3 = FUN_0024c300(lVar4);
            piVar1[0xc] = (int)((float)iVar3 / 100.0);
          }
          lVar4 = FUN_00248c78(puVar7,0x43dcb0);
          if (lVar4 != 0) {
            iVar3 = FUN_0024c300(lVar4);
            piVar1[0x10] = (int)((float)iVar3 / 255.0);
          }
          lVar4 = FUN_00248c78(puVar7,0x43dc8c);
          if (lVar4 != 0) {
            iVar3 = FUN_0024c300(lVar4);
            piVar1[9] = (int)((float)iVar3 / 100.0);
          }
          lVar4 = FUN_00248c78(puVar7,0x43dc90);
          if (lVar4 != 0) {
            iVar3 = FUN_0024c300(lVar4);
            piVar1[0xd] = (int)((float)iVar3 / 255.0);
          }
        }
      }
    }
  }
  return DAT_0043df40;
}


// ==== FUN_00251938 @ 00251938 ====

void FUN_00251938(undefined8 param_1)

{
  int iVar1;
  
  FUN_00250550();
  iVar1 = *(int *)((int)param_1 + 0x20);
  if (iVar1 != 0) {
    (*DAT_003bfab0)(param_1,iVar1,0x3ff828);
  }
  return;
}


// ==== FUN_00251980 @ 00251980 ====

void FUN_00251980(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  FUN_00250570(param_1);
  return;
}


// ==== FUN_002519d0 @ 002519d0 ====

void FUN_002519d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_003bfadc = *(int *)(param_1 + 0x30);
  DAT_003bfad0 = FUN_00107d20(DAT_003bfadc << 2);
  iVar2 = 0;
  DAT_003bfad4 = DAT_003bfad0;
  if (0 < DAT_003bfadc) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + DAT_003bfad0) = DAT_0043df40;
    } while (iVar2 < DAT_003bfadc);
  }
  DAT_003bfad8 = 0;
  return;
}


// ==== FUN_00251a60 @ 00251a60 ====

void FUN_00251a60(void)

{
  int iVar1;
  
  iVar1 = DAT_003bfad8 * 4;
  DAT_003bfad8 = 0;
  DAT_003bfad4 = DAT_003bfad4 + iVar1;
  return;
}


// ==== FUN_00251a88 @ 00251a88 ====

void FUN_00251a88(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < DAT_003bfad8) {
    do {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(iVar2 + DAT_003bfad4);
      iVar2 = *piVar3;
      *piVar3 = DAT_0043df40;
      iVar1 = *(int *)(iVar2 + 4);
      (**(code **)(iVar1 + 0x14))(iVar2 + *(short *)(iVar1 + 0x10));
    } while (iVar4 < DAT_003bfad8);
  }
  iVar4 = DAT_003bfad4;
  DAT_003bfad4 = param_1;
  DAT_003bfad8 = iVar4 - param_1 >> 2;
  return;
}


// ==== FUN_00251b38 @ 00251b38 ====

undefined8
FUN_00251b38(undefined8 param_1,undefined8 param_2,long param_3,uint *param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  
  FUN_00386ec8();
  iVar8 = (int)param_1;
  *(undefined **)(iVar8 + 4) = &DAT_003e1f88;
  Pow2Container_ctor(iVar8 + 8,8);
  *(undefined1 *)(iVar8 + 0x1c) = 0;
  *(undefined **)(iVar8 + 4) = &DAT_003e1d18;
  *(uint **)(iVar8 + 0x20) = param_4;
  *(undefined4 *)(iVar8 + 0x24) = 0;
  *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & 0xfffffcff;
  *(undefined4 *)(iVar8 + 0x28) = 0;
  *(undefined2 *)(iVar8 + 0x2c) = 0;
  if (param_3 != 0) {
    iVar4 = *(int *)((int)param_3 + 4);
    (**(code **)(iVar4 + 0xcc))((int)param_3 + (int)*(short *)(iVar4 + 200));
    iVar4 = DAT_003bfae0;
    bVar1 = DAT_003bfae0 != 0;
    *(int *)(iVar8 + 0x28) = DAT_003bfae0;
    if (bVar1) {
      iVar2 = *(int *)(iVar4 + 4);
      (**(code **)(iVar2 + 0xc))(iVar4 + *(short *)(iVar2 + 8));
    }
  }
  uVar6 = 0;
  if ((*param_4 >> 0x19) - 0xc < 8) {
    uVar6 = (int)*param_4 >> 4 & 1;
  }
  if (uVar6 == 0) {
    uVar3 = FUN_00218930(0);
    *(undefined4 *)(iVar8 + 0x24) = uVar3;
  }
  else {
    uVar3 = FUN_0023e5f0(*(undefined4 *)(iVar8 + 0x20));
    *(undefined4 *)(iVar8 + 0x24) = uVar3;
  }
  iVar4 = *(int *)(*(int *)(iVar8 + 0x20) + 4);
  (**(code **)(iVar4 + 0xc))(*(int *)(iVar8 + 0x20) + (int)*(short *)(iVar4 + 8));
  iVar4 = *(int *)(*(int *)(iVar8 + 0x24) + 4);
  (**(code **)(iVar4 + 0xc))(*(int *)(iVar8 + 0x24) + (int)*(short *)(iVar4 + 8));
  *(short *)(*(int *)(iVar8 + 0x24) + 0x58) = *(short *)(*(int *)(iVar8 + 0x24) + 0x58) + 1;
  if (param_5 != 0) {
    lVar5 = FUN_0024fa38(DAT_0043dee4,0x20);
    FUN_00386ec8(lVar5,0x1c);
    puVar7 = (uint *)lVar5;
    puVar7[1] = (uint)&DAT_003e1f88;
    Pow2Container_ctor(puVar7 + 2,8);
    puVar7[1] = (uint)&DAT_003e1f00;
    *puVar7 = *puVar7 & 0xffffffdf;
    puVar7[7] = 0;
    if (lVar5 != 0) {
      (*(code *)PTR_FUN_003e1f0c)((int)puVar7 + (int)DAT_003e1f08);
    }
    iVar4 = *(int *)(iVar8 + 0x14);
    if (iVar4 == 0) {
      *(uint **)(iVar8 + 0x14) = puVar7;
    }
    else {
      (**(code **)(*(int *)(iVar4 + 4) + 0x14))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x10));
      *(uint **)(iVar8 + 0x14) = puVar7;
    }
    iVar4 = (**(code **)(puVar7[1] + 0x24))((int)puVar7 + (int)*(short *)(puVar7[1] + 0x20));
    iVar8 = DAT_003bfab4;
    if (DAT_003bfab4 == 0) {
      iVar2 = *(int *)(iVar4 + 8);
    }
    else {
      (**(code **)(*(int *)(DAT_003bfab4 + 4) + 0xc))
                (DAT_003bfab4 + *(short *)(*(int *)(DAT_003bfab4 + 4) + 8));
      iVar2 = *(int *)(iVar4 + 8);
    }
    if (iVar2 == 0) {
      *(int *)(iVar4 + 8) = iVar8;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 4) + 0x14))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x10));
      *(int *)(iVar4 + 8) = iVar8;
    }
  }
  return param_1;
}


// ==== FUN_00251d98 @ 00251d98 ====

undefined8 FUN_00251d98(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  FUN_00386ec8();
  iVar6 = (int)param_1;
  *(undefined **)(iVar6 + 4) = &DAT_003e1f88;
  Pow2Container_ctor(iVar6 + 8,8);
  *(undefined1 *)(iVar6 + 0x1c) = 0;
  *(undefined **)(iVar6 + 4) = &DAT_003e1d18;
  *(uint **)(iVar6 + 0x20) = (uint *)param_4;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffcff;
  *(undefined2 *)(iVar6 + 0x2c) = 0;
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  uVar1 = *(uint *)param_4;
  uVar5 = 0;
  if ((uVar1 >> 0x19) - 0xc < 8) {
    uVar5 = (int)uVar1 >> 4 & 1;
  }
  if (uVar5 == 0) {
    uVar4 = FUN_00218930(0);
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
  }
  else {
    uVar4 = FUN_0023e5f0(param_4);
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
  }
  iVar2 = *(int *)(iVar6 + 0x28);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar6 + 0x20);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
    iVar2 = *(int *)(iVar6 + 0x20);
  }
  (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
  iVar2 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  (**(code **)(iVar2 + 0xc))(*(int *)(iVar6 + 0x24) + (int)*(short *)(iVar2 + 8));
  *(short *)(*(int *)(iVar6 + 0x24) + 0x58) = *(short *)(*(int *)(iVar6 + 0x24) + 0x58) + 1;
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 0) {
    iVar3 = *(int *)(iVar6 + 0x14);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
    iVar3 = *(int *)(iVar6 + 0x14);
  }
  if (iVar3 == 0) {
    *(int *)(iVar6 + 0x14) = iVar2;
  }
  else {
    (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
    *(int *)(iVar6 + 0x14) = iVar2;
  }
  iVar2 = *(int *)(param_3 + 0x10);
  if (iVar2 == 0) {
    iVar3 = *(int *)(iVar6 + 0x10);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
    iVar3 = *(int *)(iVar6 + 0x10);
  }
  if (iVar3 == 0) {
    *(int *)(iVar6 + 0x10) = iVar2;
  }
  else {
    (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
    *(int *)(iVar6 + 0x10) = iVar2;
  }
  return param_1;
}


// ==== FUN_00251f70 @ 00251f70 ====

void FUN_00251f70(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x30);
  }
  return;
}


// ==== FUN_00251fe0 @ 00251fe0 ====

undefined8 FUN_00251fe0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_00251b38(param_1,0x2b,param_2,param_4,1);
  *(undefined4 *)((int)param_1 + 0x30) = param_3;
  *(undefined **)((int)param_1 + 4) = &DAT_003e1c40;
  return param_1;
}


// ==== FUN_00252030 @ 00252030 ====

undefined8 FUN_00252030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00251d98(param_1,0x2b,param_2,param_3);
  *(undefined **)((int)param_1 + 4) = &DAT_003e1c40;
  *(undefined4 *)((int)param_1 + 0x30) = *(undefined4 *)((int)param_2 + 0x30);
  return param_1;
}


// ==== FUN_00252088 @ 00252088 ====

undefined8 FUN_00252088(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_00251b38(param_1,0x2c,param_2,param_4,1);
  *(undefined4 *)((int)param_1 + 0x30) = param_3;
  *(undefined **)((int)param_1 + 4) = &DAT_003e1b68;
  return param_1;
}


// ==== FUN_002520d8 @ 002520d8 ====

undefined8 FUN_002520d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00251d98(param_1,0x2c,param_2,param_3);
  *(undefined **)((int)param_1 + 4) = &DAT_003e1b68;
  *(undefined4 *)((int)param_1 + 0x30) = *(undefined4 *)((int)param_2 + 0x30);
  return param_1;
}


// ==== FUN_00252130 @ 00252130 ====

void FUN_00252130(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1c40;
  FUN_00251f70(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x34);
  }
  return;
}


// ==== FUN_00252190 @ 00252190 ====

void FUN_00252190(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1b68;
  FUN_00251f70(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x34);
  }
  return;
}


// ==== FUN_002521f8 @ 002521f8 ====

void FUN_002521f8(undefined8 param_1)

{
  int iVar1;
  
  FUN_00250550();
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x28) != 0) {
    (*DAT_003bfab0)(param_1,*(int *)(iVar1 + 0x28),0x3fcd80);
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    (*DAT_003bfab0)(param_1,*(int *)(iVar1 + 0x20),0x3ff828);
  }
  if (*(int *)(iVar1 + 0x24) != 0) {
    (*DAT_003bfab0)(param_1,*(int *)(iVar1 + 0x24),0x3ff830);
  }
  return;
}


// ==== FUN_00252280 @ 00252280 ====

void FUN_00252280(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x28);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)(iVar2 + 0x20) + (int)*(short *)(iVar1 + 0x10));
  *(undefined4 *)(iVar2 + 0x20) = 0;
  iVar1 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)(iVar2 + 0x24) + (int)*(short *)(iVar1 + 0x10));
  FUN_0023e698(*(undefined4 *)(iVar2 + 0x24));
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_00250570(param_1);
  return;
}


// ==== FUN_00252310 @ 00252310 ====

void FUN_00252310(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = DAT_003bfae0;
  DAT_003bfae0 = 0;
  return;
}


// ==== FUN_00252328 @ 00252328 ====

void FUN_00252328(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (DAT_003bfae0 != 0) {
    puVar1 = (undefined4 *)
             (**(code **)(*(int *)(DAT_003bfae0 + 4) + 0x24))
                       (DAT_003bfae0 + *(short *)(*(int *)(DAT_003bfae0 + 4) + 0x20));
    *(short *)(param_1 + 0x2c) = (short)*puVar1;
    (**(code **)(*(int *)(DAT_003bfae0 + 4) + 0x14))
              (DAT_003bfae0 + *(short *)(*(int *)(DAT_003bfae0 + 4) + 0x10));
  }
  DAT_003bfae0 = *param_2;
  return;
}


// ==== FUN_002523a8 @ 002523a8 ====

undefined4 FUN_002523a8(int param_1)

{
  return *(undefined4 *)(param_1 * 4 + DAT_003bfad4);
}


// ==== FUN_002523c0 @ 002523c0 ====

void FUN_002523c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_003bfad8 < param_1 + 1) {
    DAT_003bfad8 = param_1 + 1;
  }
  piVar3 = (int *)(param_1 * 4 + DAT_003bfad4);
  iVar1 = *piVar3;
  *piVar3 = param_2;
  (**(code **)(*(int *)(param_2 + 4) + 0xc))(param_2 + *(short *)(*(int *)(param_2 + 4) + 8));
  iVar2 = *(int *)(iVar1 + 4);
  (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
  return;
}


// ==== AS_ResolveRootParent @ 00252440 ====

/* resuelve _root/_parent en el interprete de ActionScript */

void AS_ResolveRootParent(int param_1,int param_2,undefined8 param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *apsStack_60 [4];
  
  FUN_00252310();
  *(int *)(param_2 + 4) = DAT_003bfad4;
  iVar5 = DAT_003bfad8 * 4;
  DAT_003bfad8 = 0;
  DAT_003bfad4 = DAT_003bfad4 + iVar5;
  iVar5 = *(int *)(param_1 + 0x30);
  iVar7 = 1;
  if ((*(ushort *)(iVar5 + 10) & 1) != 0) {
    iVar7 = 2;
    uVar3 = FUN_0024ee48(*(undefined4 *)(param_1 + 0x20),0x43dea8,0);
    FUN_002523c0(1,uVar3);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  iVar6 = iVar7;
  if ((*(ushort *)(iVar5 + 10) & 4) != 0) {
    iVar6 = iVar7 + 1;
    FUN_002523c0(iVar7,DAT_0043df40);
  }
  iVar5 = *(int *)(param_1 + 0x30);
  iVar7 = iVar6;
  if ((*(ushort *)(iVar5 + 10) & 0x10) == 0) goto LAB_00252560;
  lVar4 = FUN_0024ee48(param_3,0x43de98,0);
  if (lVar4 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x20);
LAB_00252540:
    lVar4 = FUN_0024ee48(uVar2,0x43de98,0);
  }
  else if ((*(int *)lVar4 >> 4 & 1U) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    goto LAB_00252540;
  }
  iVar7 = iVar6 + 1;
  FUN_002523c0(iVar6,lVar4);
  iVar5 = *(int *)(param_1 + 0x30);
LAB_00252560:
  if ((*(ushort *)(iVar5 + 10) & 0x40) != 0) {
    String_ctor_cstr(apsStack_60,0x3ff1c0);
    uVar3 = FUN_0024ee48(*(undefined4 *)(param_1 + 0x20),apsStack_60,0);
    FUN_002523c0(iVar7,uVar3);
    iVar7 = iVar7 + 1;
    sVar1 = *apsStack_60[0];
    *apsStack_60[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
  }
  iVar5 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar5 + 10) & 0x80) != 0) {
    String_ctor_cstr(apsStack_60,0x3ff1d0);
    iVar5 = FUN_0024ee48(*(undefined4 *)(param_1 + 0x20),apsStack_60,0);
    if (iVar5 == 0) {
      iVar5 = DAT_0043df40;
    }
    FUN_002523c0(iVar7,iVar5);
    iVar7 = iVar7 + 1;
    sVar1 = *apsStack_60[0];
    *apsStack_60[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
    iVar5 = *(int *)(param_1 + 0x30);
  }
  if ((*(ushort *)(iVar5 + 10) & 0x100) != 0) {
    FUN_002523c0(iVar7,DAT_003bfabc);
  }
  return;
}


// ==== FUN_00252680 @ 00252680 ====

void FUN_00252680(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_00252328();
  if (0 < DAT_003bfad8) {
    do {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(iVar2 + DAT_003bfad4);
      iVar2 = *piVar3;
      *piVar3 = DAT_0043df40;
      iVar1 = *(int *)(iVar2 + 4);
      (**(code **)(iVar1 + 0x14))(iVar2 + *(short *)(iVar1 + 0x10));
    } while (iVar4 < DAT_003bfad8);
  }
  DAT_003bfad8 = DAT_003bfad4 - *(int *)(param_2 + 4) >> 2;
  DAT_003bfad4 = *(undefined4 *)(param_2 + 4);
  return;
}


// ==== FUN_00252740 @ 00252740 ====

undefined8
FUN_00252740(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  FUN_00251b38(param_1,0x2d,param_7,param_6,0);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x34) = param_3;
  *(undefined4 *)(iVar1 + 0x30) = param_2;
  *(undefined4 *)(iVar1 + 0x38) = param_5;
  *(undefined **)(iVar1 + 4) = &DAT_003e1a90;
  *(undefined8 *)(iVar1 + 0x3c) = param_4;
  return param_1;
}


// ==== FUN_002527c8 @ 002527c8 ====

void FUN_002527c8(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e13a8;
  FUN_00252830(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_00252830 @ 00252830 ====

void FUN_00252830(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_002528a0 @ 002528a0 ====

void FUN_002528a0(void)

{
  int iVar1;
  
  iVar1 = DAT_003bfae4;
  while (DAT_003bfae4 = iVar1, DAT_003bfae4 != 0) {
    iVar1 = *(int *)(DAT_003bfae4 + 8);
    (**(code **)(*(int *)(DAT_003bfae4 + 4) + 100))
              (DAT_003bfae4 + *(short *)(*(int *)(DAT_003bfae4 + 4) + 0x60));
    if (DAT_003bfae4 != 0) {
      (**(code **)(*(int *)(DAT_003bfae4 + 4) + 0x7c))
                (DAT_003bfae4 + *(short *)(*(int *)(DAT_003bfae4 + 4) + 0x78),3);
    }
  }
  return;
}


// ==== FUN_00252958 @ 00252958 ====

void FUN_00252958(void)

{
  int iVar1;
  
  iVar1 = DAT_003bfae8;
  while (DAT_003bfae8 = iVar1, DAT_003bfae8 != 0) {
    iVar1 = *(int *)(DAT_003bfae8 + 8);
    (**(code **)(*(int *)(DAT_003bfae8 + 4) + 100))
              (DAT_003bfae8 + *(short *)(*(int *)(DAT_003bfae8 + 4) + 0x60));
    if (DAT_003bfae8 != 0) {
      (**(code **)(*(int *)(DAT_003bfae8 + 4) + 0x7c))
                (DAT_003bfae8 + *(short *)(*(int *)(DAT_003bfae8 + 4) + 0x78),3);
    }
  }
  return;
}


// ==== FUN_00252a10 @ 00252a10 ====

void FUN_00252a10(void)

{
  int iVar1;
  
  iVar1 = DAT_003bfaec;
  while (DAT_003bfaec = iVar1, DAT_003bfaec != 0) {
    iVar1 = *(int *)(DAT_003bfaec + 8);
    (**(code **)(*(int *)(DAT_003bfaec + 4) + 100))
              (DAT_003bfaec + *(short *)(*(int *)(DAT_003bfaec + 4) + 0x60));
    if (DAT_003bfaec != 0) {
      (**(code **)(*(int *)(DAT_003bfaec + 4) + 0x7c))
                (DAT_003bfaec + *(short *)(*(int *)(DAT_003bfaec + 4) + 0x78),3);
    }
  }
  return;
}


// ==== FUN_00252ac8 @ 00252ac8 ====

undefined8 FUN_00252ac8(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  *piVar2 = param_2;
  piVar2[1] = 0;
  iVar1 = Pool_Alloc(DAT_0043dee0,param_2 << 2);
  piVar2[2] = iVar1;
  return param_1;
}


// ==== FUN_00252b10 @ 00252b10 ====

void FUN_00252b10(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    while( true ) {
      *(int *)(param_1 + 4) = iVar2 + -1;
      puVar1 = *(uint **)((iVar2 + -1) * 4 + *(int *)(param_1 + 8));
      if ((*puVar1 >> 6 & 0xfff) == 0) {
        (**(code **)(puVar1[1] + 0x1c))((int)puVar1 + (int)*(short *)(puVar1[1] + 0x18));
      }
      else {
        *puVar1 = *puVar1 & 0xfffffffb;
      }
      if (*(int *)(param_1 + 4) == 0) break;
      iVar2 = *(int *)(param_1 + 4);
    }
  }
  return;
}


// ==== FUN_00252bb8 @ 00252bb8 ====

undefined8 FUN_00252bb8(undefined8 param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  if (param_2 == 0) {
    *piVar3 = (int)&DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  else {
    uVar2 = (int)param_2 + 0xcU & 0xfffffffc;
    puVar1 = (undefined2 *)Pool_Alloc(DAT_0043dee0,uVar2);
    *piVar3 = (int)puVar1;
    *puVar1 = 1;
    *(short *)(*piVar3 + 4) = (short)uVar2 + -9;
    *(undefined2 *)(*piVar3 + 2) = 0;
    *(undefined2 *)(*piVar3 + 6) = 0;
    *(undefined1 *)(*piVar3 + 8) = 0;
  }
  return param_1;
}


// ==== FUN_00252c58 @ 00252c58 ====

undefined8 FUN_00252c58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  if (param_3 == 0) {
    *piVar3 = (int)&DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  else {
    uVar2 = (int)param_3 + 0xcU & 0xfffffffc;
    puVar1 = (undefined2 *)Pool_Alloc(DAT_0043dee0,uVar2);
    *piVar3 = (int)puVar1;
    *puVar1 = 1;
    *(short *)(*piVar3 + 4) = (short)uVar2 + -9;
    memset(*piVar3 + 8,param_2,param_3);
    *(short *)(*piVar3 + 2) = (short)param_3;
    *(undefined2 *)(*piVar3 + 6) = 0;
    *(undefined1 *)(*piVar3 + (int)param_3 + 8) = 0;
  }
  return param_1;
}


// ==== FUN_00252d28 @ 00252d28 ====

undefined8 FUN_00252d28(undefined8 param_1,int *param_2)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  uVar1 = *(ushort *)(*piVar6 + 2);
  if (uVar1 == 0) {
    *(short *)*param_2 = *(short *)*param_2 + 1;
    psVar4 = (short *)*piVar6;
    sVar2 = *psVar4;
    *psVar4 = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
    }
    *piVar6 = *param_2;
  }
  else {
    uVar3 = *(ushort *)(*param_2 + 2);
    if (uVar3 != 0) {
      iVar5 = (uint)uVar1 + (uint)uVar3;
      FUN_00253e60(param_1,iVar5,0,uVar1,0,iVar5);
      memcpy(*piVar6 + 8 + (uint)uVar1,*param_2 + 8,uVar3 + 1);
    }
  }
  return param_1;
}


// ==== FUN_00252e10 @ 00252e10 ====

undefined8 FUN_00252e10(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  short *apsStack_60 [4];
  
  piVar6 = (int *)param_1;
  uVar1 = *(ushort *)(*piVar6 + 2);
  if (uVar1 == 0) {
    String_ctor_cstr(apsStack_60);
    *apsStack_60[0] = *apsStack_60[0] + 1;
    psVar3 = (short *)*piVar6;
    sVar2 = *psVar3;
    *psVar3 = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
    }
    *piVar6 = (int)apsStack_60[0];
    sVar2 = *apsStack_60[0];
    *apsStack_60[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
  }
  else {
    lVar4 = strlen(param_2);
    iVar5 = (uint)uVar1 + (int)lVar4;
    if (lVar4 != 0) {
      FUN_00253e60(param_1,iVar5,0,uVar1,0,iVar5);
      memcpy(*piVar6 + 8 + (uint)uVar1,param_2,(int)lVar4 + 1);
    }
  }
  return param_1;
}


// ==== FUN_00252f20 @ 00252f20 ====

undefined8 FUN_00252f20(undefined8 param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  short *psVar4;
  int iVar5;
  short *apsStack_90 [4];
  
  uVar1 = *(ushort *)(*param_3 + 2);
  if (uVar1 == 0) {
    String_ctor_cstr();
  }
  else {
    lVar3 = strlen(param_2);
    iVar5 = (int)lVar3 + (uint)uVar1;
    if (lVar3 == 0) {
      psVar4 = (short *)*param_3;
      *(undefined4 *)param_1 = psVar4;
      *psVar4 = *psVar4 + 1;
    }
    else {
      FUN_00252bb8(apsStack_90,iVar5);
      psVar4 = apsStack_90[0] + 4;
      memcpy(psVar4,param_2,lVar3);
      memcpy((int)psVar4 + (int)lVar3,*param_3 + 8,uVar1);
      *(undefined1 *)((int)psVar4 + iVar5) = 0;
      apsStack_90[0][1] = (short)iVar5;
      apsStack_90[0][3] = 0;
      *(undefined4 *)param_1 = apsStack_90[0];
      *apsStack_90[0] = *apsStack_90[0] + 1;
      sVar2 = *apsStack_90[0];
      *apsStack_90[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
      }
    }
  }
  return param_1;
}


// ==== FUN_00253058 @ 00253058 ====

undefined8 FUN_00253058(undefined8 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = *(ushort *)(*param_2 + 2);
  FUN_002530e8(param_1,uVar1);
  piVar3 = (int *)param_1;
  iVar2 = *piVar3;
  memcpy(iVar2 + 8,*param_2 + 8,uVar1);
  *(undefined1 *)(iVar2 + 8 + (uint)uVar1) = 0;
  *(ushort *)(*piVar3 + 2) = uVar1;
  *(undefined2 *)(*piVar3 + 6) = *(undefined2 *)(*param_2 + 6);
  return param_1;
}


// ==== FUN_002530e8 @ 002530e8 ====

void FUN_002530e8(int *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (*(ushort *)(*param_1 + 2) <= param_2) {
    uVar1 = (ulong)*(ushort *)(*param_1 + 2);
  }
  FUN_00253e60(param_1,param_2,0,uVar1,1,uVar1);
  return;
}


// ==== FUN_00253128 @ 00253128 ====

bool FUN_00253128(int *param_1,ulong param_2)

{
  return param_2 < *(ushort *)(*param_1 + 4);
}


// ==== FUN_00253138 @ 00253138 ====

undefined8 FUN_00253138(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_3 != 0) {
    pcVar3 = (char *)param_2;
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      uVar5 = uVar5 + 1;
      if (param_3 <= uVar5) break;
      cVar1 = *pcVar3;
    }
  }
  if (uVar5 != 0) {
    uVar2 = *(ushort *)(*(int *)param_1 + 2);
    iVar4 = uVar2 + uVar5;
    FUN_00253e60(param_1,iVar4,0,uVar2,1,iVar4);
    memcpy(*(int *)param_1 + 8 + (uint)uVar2,param_2,uVar5);
  }
  return param_1;
}


// ==== FUN_002531f0 @ 002531f0 ====

void FUN_002531f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_00253238(param_1,param_2,&uStack_30);
  return;
}


// ==== FUN_00253238 @ 00253238 ====

void FUN_00253238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = strlen(param_2);
  iVar1 = iVar1 << 2;
  while( true ) {
    FUN_00253e60(param_1,iVar1,0,0,0,0);
    piVar4 = (int *)param_1;
    iVar3 = *piVar4 + 8;
    lVar2 = FUN_0035e610(iVar3,*(undefined2 *)(*piVar4 + 4),param_2,param_3);
    if (-1 < lVar2) break;
    iVar1 = iVar1 << 1;
  }
  *(undefined1 *)(iVar3 + (int)lVar2) = 0;
  *(short *)(*piVar4 + 2) = (short)lVar2;
  *(undefined2 *)(*piVar4 + 6) = 0;
  return;
}


// ==== FUN_002532f0 @ 002532f0 ====

int FUN_002532f0(int *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  if (param_3 < (long)(ulong)*(ushort *)(*param_1 + 2)) {
    iVar2 = 0;
    if (-1 < param_3) {
      iVar2 = (int)param_3;
    }
    lVar1 = FUN_00360a50(*param_1 + 8 + iVar2);
    if (lVar1 != 0) {
      return (int)lVar1 - (*param_1 + 8);
    }
  }
  return -1;
}


// ==== FUN_00253358 @ 00253358 ====

int FUN_00253358(int *param_1,undefined1 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  if (param_3 < (long)(ulong)*(ushort *)(*param_1 + 2)) {
    iVar2 = 0;
    if (-1 < param_3) {
      iVar2 = (int)param_3;
    }
    lVar1 = FUN_0035c8d4(*param_1 + 8 + iVar2,param_2);
    if (lVar1 != 0) {
      return (int)lVar1 - (*param_1 + 8);
    }
  }
  return -1;
}


// ==== FUN_002533c8 @ 002533c8 ====

int FUN_002533c8(undefined8 param_1,int param_2,long param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  uVar8 = param_2 + (int)param_3;
  piVar9 = (int *)param_1;
  if ((param_3 < 1) || ((int)uVar8 < 1)) {
    psVar4 = (short *)*piVar9;
    sVar1 = *psVar4;
    *psVar4 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
    }
    param_2 = 0;
    *piVar9 = (int)&DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  else {
    iVar3 = *piVar9;
    uVar2 = *(ushort *)(iVar3 + 2);
    uVar5 = (uint)uVar2;
    if (param_2 < 0) {
      param_2 = 0;
    }
    if ((int)uVar5 <= (int)uVar8) {
      uVar8 = uVar5;
    }
    if (param_2 == 0) {
      param_2 = uVar2 - uVar8;
      FUN_00253e60(param_1,param_2,uVar8,param_2,1,param_2);
    }
    else {
      iVar6 = uVar2 - uVar8;
      if (uVar8 == uVar5) {
        FUN_00253e60(param_1,param_2,0,param_2,1,param_2);
      }
      else {
        iVar7 = param_2 + iVar6;
        FUN_00253e60(param_1,iVar7,0,param_2,0,iVar7);
        memcpy(*piVar9 + 8 + param_2,iVar3 + 8 + uVar8,iVar6 + 1);
        param_2 = iVar7;
      }
    }
  }
  return param_2;
}


// ==== FUN_00253528 @ 00253528 ====

undefined8 FUN_00253528(undefined8 param_1,undefined4 *param_2,ulong param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *apsStack_30 [4];
  
  puVar2 = (undefined4 *)param_1;
  if ((long)param_3 < 1) {
    *puVar2 = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  else {
    apsStack_30[0] = (short *)*param_2;
    if (param_3 < (ushort)apsStack_30[0][1]) {
      *apsStack_30[0] = *apsStack_30[0] + 1;
      FUN_00253e60(apsStack_30,param_3,0,param_3,1,param_3);
      *puVar2 = apsStack_30[0];
      *apsStack_30[0] = *apsStack_30[0] + 1;
      sVar1 = *apsStack_30[0];
      *apsStack_30[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_30[0],(ushort)apsStack_30[0][2] + 9);
      }
    }
    else {
      *puVar2 = apsStack_30[0];
      *apsStack_30[0] = *apsStack_30[0] + 1;
    }
  }
  return param_1;
}


// ==== FUN_00253608 @ 00253608 ====

undefined8 FUN_00253608(undefined8 param_1,undefined4 *param_2,long param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  short *apsStack_30 [4];
  
  puVar4 = (undefined4 *)param_1;
  if (param_3 < 1) {
    psVar2 = (short *)*param_2;
    *puVar4 = psVar2;
    *psVar2 = *psVar2 + 1;
  }
  else {
    apsStack_30[0] = (short *)*param_2;
    iVar3 = (uint)(ushort)apsStack_30[0][1] - (int)param_3;
    if (iVar3 < 1) {
      *puVar4 = &DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
    }
    else {
      *apsStack_30[0] = *apsStack_30[0] + 1;
      FUN_00253e60(apsStack_30,iVar3,param_3,iVar3,1,iVar3);
      *puVar4 = apsStack_30[0];
      *apsStack_30[0] = *apsStack_30[0] + 1;
      sVar1 = *apsStack_30[0];
      *apsStack_30[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_30[0],(ushort)apsStack_30[0][2] + 9);
      }
    }
  }
  return param_1;
}


// ==== FUN_002536d8 @ 002536d8 ====

undefined8 FUN_002536d8(undefined8 param_1,undefined4 *param_2,long param_3,int param_4)

{
  short sVar1;
  int iVar2;
  long lVar3;
  short *apsStack_30 [4];
  
  lVar3 = param_3;
  if (param_3 < 0) {
    param_4 = param_4 + (int)param_3;
    lVar3 = 0;
  }
  if (0 < param_4) {
    apsStack_30[0] = (short *)*param_2;
    iVar2 = (uint)(ushort)apsStack_30[0][1] - (int)lVar3;
    if (0 < iVar2) {
      if (param_4 < iVar2) {
        iVar2 = param_4;
      }
      *apsStack_30[0] = *apsStack_30[0] + 1;
      FUN_00253e60(apsStack_30,iVar2,param_3,iVar2,1,iVar2);
      *(undefined4 *)param_1 = apsStack_30[0];
      *apsStack_30[0] = *apsStack_30[0] + 1;
      sVar1 = *apsStack_30[0];
      *apsStack_30[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) != 0) {
        return param_1;
      }
      Pool_Free(DAT_0043dee0,apsStack_30[0],(ushort)apsStack_30[0][2] + 9);
      return param_1;
    }
  }
  *(undefined4 *)param_1 = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  return param_1;
}


// ==== FUN_002537b0 @ 002537b0 ====

undefined8 FUN_002537b0(undefined8 param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(*(int *)param_1 + 2);
  FUN_00253e60(param_1,uVar1,0,uVar1,1,uVar1);
  FUN_003608b8(*(int *)param_1 + 8);
  return param_1;
}


// ==== FUN_00253810 @ 00253810 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0x003bfaf8 : 0x002538b0 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN_00253810(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  short *apsStack_90 [4];
  
  piVar8 = (int *)param_1;
  uVar2 = *(ushort *)(*piVar8 + 2);
  puVar6 = (undefined1 *)(*piVar8 + (uint)uVar2 + 7);
  for (uVar7 = 0; uVar7 < uVar2; uVar7 = uVar7 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + -1;
    lVar5 = FUN_0035c8d4(param_2,uVar1);
    if (lVar5 == 0) break;
  }
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  FUN_00253528(apsStack_90,param_1,uVar2 - uVar7);
  *apsStack_90[0] = *apsStack_90[0] + 1;
  DAT_003bfaf8 = DAT_003bfaf8 + -1;
  if (DAT_003bfaf8 == 0) {
    Pool_Free(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
  }
  sVar3 = *apsStack_90[0];
  *apsStack_90[0] = sVar3 + -1;
  if ((short)(sVar3 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
  }
  *apsStack_90[0] = *apsStack_90[0] + 1;
  psVar4 = (short *)*piVar8;
  sVar3 = *psVar4;
  *psVar4 = sVar3 + -1;
  if ((short)(sVar3 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  *piVar8 = (int)apsStack_90[0];
  sVar3 = *apsStack_90[0];
  *apsStack_90[0] = sVar3 + -1;
  if ((short)(sVar3 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
  }
  return param_1;
}


// ==== FUN_002539c0 @ 002539c0 ====

undefined4 FUN_002539c0(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  short *apsStack_60 [4];
  
  piVar7 = (int *)param_1;
  uVar1 = *(ushort *)(*piVar7 + 2);
  uVar5 = strlen(param_2);
  uVar4 = 0;
  if (uVar5 <= uVar1) {
    lVar6 = FUN_0035c4b0((*piVar7 + 8 + (uint)uVar1) - (int)uVar5,param_2,uVar5);
    uVar4 = 0;
    if (lVar6 == 0) {
      FUN_00253528(apsStack_60,param_1,(uint)uVar1 - (int)uVar5);
      *apsStack_60[0] = *apsStack_60[0] + 1;
      psVar3 = (short *)*piVar7;
      sVar2 = *psVar3;
      *psVar3 = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        Pool_Free(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
      }
      *piVar7 = (int)apsStack_60[0];
      sVar2 = *apsStack_60[0];
      *apsStack_60[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


// ==== FUN_00253ac8 @ 00253ac8 ====

int FUN_00253ac8(int *param_1)

{
  int iVar1;
  int iVar2;
  int aiStack_30 [4];
  
  iVar2 = 0;
  iVar1 = *param_1 + 8;
  while (iVar1 = FUN_00387510(iVar1,aiStack_30), aiStack_30[0] != 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ==== FUN_00253b10 @ 00253b10 ====

undefined8 FUN_00253b10(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_70 [4];
  
  iVar2 = 0;
  if (param_3 < 0) {
    param_3 = 0;
  }
  iVar3 = *(int *)param_2 + 8;
  iVar1 = iVar3;
  if (0 < param_3) {
    do {
      iVar1 = FUN_00387510(iVar1,aiStack_70);
      if (aiStack_70[0] == 0) {
        iVar1 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  if (iVar1 == 0) {
    *(undefined4 *)param_1 = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  else {
    FUN_00253608(param_1,param_2,iVar1 - iVar3);
  }
  return param_1;
}


// ==== FUN_00253be0 @ 00253be0 ====

undefined8 FUN_00253be0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_80;
  int aiStack_7c [3];
  
  if (param_3 < 0) {
    param_4 = param_4 - param_3;
    param_3 = 0;
  }
  if (0 < param_4) {
    iVar2 = 0;
    iVar4 = *(int *)param_2 + 8;
    iVar1 = iVar4;
    if (0 < param_3) {
      do {
        iVar1 = FUN_00387510(iVar1,&iStack_80);
        if (iStack_80 == 0) {
          iVar1 = 0;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    if (iVar1 != 0) {
      iVar3 = 0;
      iVar2 = iVar1;
      if (0 < param_4) {
        do {
          iVar2 = FUN_00387510(iVar2,aiStack_7c);
          if (aiStack_7c[0] == 0) {
            iVar2 = 0;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_4);
      }
      if (iVar2 != 0) {
        FUN_002536d8(param_1,param_2,iVar1 - iVar4,iVar2 - iVar1);
        return param_1;
      }
      FUN_00253608(param_1,param_2,iVar1 - iVar4);
      return param_1;
    }
  }
  *(undefined4 *)param_1 = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  return param_1;
}


// ==== FUN_00253d30 @ 00253d30 ====

int FUN_00253d30(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int aiStack_70 [4];
  
  iVar4 = 0;
  pbVar5 = (byte *)(*(int *)param_1 + 8);
  pbVar1 = pbVar5;
  if (0 < param_3) {
    do {
      pbVar1 = (byte *)FUN_00387510(pbVar1,aiStack_70);
      if (aiStack_70[0] == 0) {
        pbVar1 = (byte *)0x0;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  iVar4 = (int)pbVar1 - (int)pbVar5;
  if ((pbVar1 == (byte *)0x0) || (iVar2 = FUN_002532f0(param_1,param_2,iVar4), iVar2 < 0)) {
    param_3 = -1;
  }
  else {
    for (; iVar4 < iVar2; iVar4 = iVar4 + iVar3) {
      if ((char)*pbVar5 < '\0') {
        if ((*pbVar5 & 0xe0) == 0xc0) {
          iVar3 = 2;
        }
        else {
          iVar3 = 4;
          if ((*pbVar5 & 0xf0) == 0xe0) {
            iVar3 = 3;
          }
        }
      }
      else {
        iVar3 = 1;
      }
      pbVar5 = pbVar5 + iVar3;
      param_3 = param_3 + 1;
    }
  }
  return param_3;
}


// ==== FUN_00253e60 @ 00253e60 ====

void FUN_00253e60(int *param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                 int param_6)

{
  short *psVar1;
  short sVar2;
  undefined2 *puVar3;
  uint uVar4;
  
  psVar1 = (short *)*param_1;
  if (*psVar1 == 1) {
    if (param_2 <= (ushort)psVar1[2]) {
      if (param_3 != 0) {
        FUN_0035c5f0(psVar1 + 4,(int)(psVar1 + 4) + (int)param_3,param_4);
      }
      *(short *)(*param_1 + 2) = (short)param_6;
      *(undefined2 *)(*param_1 + 6) = 0;
      if (param_5 == 0) {
        return;
      }
      *(undefined1 *)(*param_1 + param_6 + 8) = 0;
      return;
    }
    psVar1 = (short *)*param_1;
  }
  else {
    psVar1 = (short *)*param_1;
  }
  if (param_2 == 0) {
    *param_1 = (int)&DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  else {
    uVar4 = (uint)param_2 + ((uint)param_2 >> 3) + 0xc & 0xfffffffc;
    puVar3 = (undefined2 *)Pool_Alloc(DAT_0043dee0,uVar4);
    *param_1 = (int)puVar3;
    *puVar3 = 1;
    *(short *)(*param_1 + 4) = (short)uVar4 + -9;
    *(short *)(*param_1 + 2) = (short)param_6;
    *(undefined2 *)(*param_1 + 6) = 0;
    memcpy(*param_1 + 8,(int)psVar1 + (int)param_3 + 8,param_4);
    if (param_5 == 0) {
      sVar2 = *psVar1;
      goto LAB_00253f98;
    }
    *(undefined1 *)(*param_1 + param_6 + 8) = 0;
  }
  sVar2 = *psVar1;
LAB_00253f98:
  *psVar1 = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar1,(ushort)psVar1[2] + 9);
  }
  return;
}


// ==== String_ctor_cstr @ 00253ff0 ====

/* string con refcount (short refs; short len; short cap) copiando de char* */

void String_ctor_cstr(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  if (*(char *)param_2 == '\0') {
    *param_1 = (int)&DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  else {
    iVar1 = strlen(param_2);
    uVar3 = iVar1 + 0xcU & 0xfffffffc;
    puVar2 = (undefined2 *)Pool_Alloc(DAT_0043dee0,uVar3);
    *param_1 = (int)puVar2;
    *puVar2 = 1;
    *(short *)(*param_1 + 4) = (short)uVar3 + -9;
    *(short *)(*param_1 + 2) = (short)iVar1;
    *(undefined2 *)(*param_1 + 6) = 0;
    memcpy(*param_1 + 8,param_2,iVar1 + 1);
  }
  return;
}


// ==== FUN_002540b8 @ 002540b8 ====

void FUN_002540b8(int *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0x9dc5;
  cVar1 = *(char *)(*param_1 + 8);
  pcVar2 = (char *)(*param_1 + 9);
  while (cVar1 != '\0') {
    uVar4 = (uint)cVar1;
    if (uVar4 - 0x41 < 0x1a) {
      uVar4 = uVar4 + 0x20;
    }
    uVar5 = (uVar5 ^ uVar4) * 0x1000193;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  }
  uVar3 = 0x4567;
  if ((uVar5 & 0xffff) != 0) {
    uVar3 = (short)uVar5;
  }
  *(undefined2 *)(*param_1 + 6) = uVar3;
  return;
}


// ==== AS_Interpreter_main @ 00254120 ====

/* interprete de ActionScript de los menus (propiedades _alpha/_xscale, substr, split...) */

void AS_Interpreter_main(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  short *apsStack_b0 [4];
  
  piVar4 = (int *)&DAT_0043dc18;
  iVar5 = 0xb1;
  do {
    iVar5 = iVar5 + -1;
    if (*piVar4 == 0) {
      *piVar4 = (int)&DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
    }
    piVar4 = piVar4 + 1;
  } while (-1 < iVar5);
  String_ctor_cstr(apsStack_b0,0x3ff840);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc18;
  sVar1 = *DAT_0043dc18;
  *DAT_0043dc18 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc18 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe788);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc1c;
  sVar1 = *DAT_0043dc1c;
  *DAT_0043dc1c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc1c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe9b0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc20;
  sVar1 = *DAT_0043dc20;
  *DAT_0043dc20 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc20 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff850);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc24;
  sVar1 = *DAT_0043dc24;
  *DAT_0043dc24 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc24 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe980);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc28;
  sVar1 = *DAT_0043dc28;
  *DAT_0043dc28 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc28 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe778);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc2c;
  sVar1 = *DAT_0043dc2c;
  *DAT_0043dc2c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc2c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe8a0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc30;
  sVar1 = *DAT_0043dc30;
  *DAT_0043dc30 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc30 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff1d8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc34;
  sVar1 = *DAT_0043dc34;
  *DAT_0043dc34 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc34 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fda40);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc38;
  sVar1 = *DAT_0043dc38;
  *DAT_0043dc38 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc38 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe8e8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc3c;
  sVar1 = *DAT_0043dc3c;
  *DAT_0043dc3c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc3c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff858);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc40;
  sVar1 = *DAT_0043dc40;
  *DAT_0043dc40 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc40 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe6d0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc44;
  sVar1 = *DAT_0043dc44;
  *DAT_0043dc44 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc44 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fea58);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc48;
  sVar1 = *DAT_0043dc48;
  *DAT_0043dc48 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc48 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff860);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc4c;
  sVar1 = *DAT_0043dc4c;
  *DAT_0043dc4c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc4c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fea20);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc50;
  sVar1 = *DAT_0043dc50;
  *DAT_0043dc50 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc50 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe748);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc54;
  sVar1 = *DAT_0043dc54;
  *DAT_0043dc54 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc54 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe928);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc58;
  sVar1 = *DAT_0043dc58;
  *DAT_0043dc58 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc58 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fea10);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc5c;
  sVar1 = *DAT_0043dc5c;
  *DAT_0043dc5c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc5c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff868);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc60;
  sVar1 = *DAT_0043dc60;
  *DAT_0043dc60 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc60 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff870);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc64;
  sVar1 = *DAT_0043dc64;
  *DAT_0043dc64 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc64 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe708);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc68;
  sVar1 = *DAT_0043dc68;
  *DAT_0043dc68 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc68 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe6f8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc6c;
  sVar1 = *DAT_0043dc6c;
  *DAT_0043dc6c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc6c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fdaf8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc70;
  sVar1 = *DAT_0043dc70;
  *DAT_0043dc70 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc70 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe720);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc74;
  sVar1 = *DAT_0043dc74;
  *DAT_0043dc74 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc74 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe740);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc78;
  sVar1 = *DAT_0043dc78;
  *DAT_0043dc78 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc78 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe858);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc7c;
  sVar1 = *DAT_0043dc7c;
  *DAT_0043dc7c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc7c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe878);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc80;
  sVar1 = *DAT_0043dc80;
  *DAT_0043dc80 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc80 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe890);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc84;
  sVar1 = *DAT_0043dc84;
  *DAT_0043dc84 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc84 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe990);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc88;
  sVar1 = *DAT_0043dc88;
  *DAT_0043dc88 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc88 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff878);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc8c;
  sVar1 = *DAT_0043dc8c;
  *DAT_0043dc8c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc8c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff880);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc90;
  sVar1 = *DAT_0043dc90;
  *DAT_0043dc90 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc90 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe248);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc94;
  sVar1 = *DAT_0043dc94;
  *DAT_0043dc94 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc94 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe250);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc98;
  sVar1 = *DAT_0043dc98;
  *DAT_0043dc98 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc98 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fcfd8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dc9c;
  sVar1 = *DAT_0043dc9c;
  *DAT_0043dc9c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dc9c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe280);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dca0;
  sVar1 = *DAT_0043dca0;
  *DAT_0043dca0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dca0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe288);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dca4;
  sVar1 = *DAT_0043dca4;
  *DAT_0043dca4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dca4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe260);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dca8;
  sVar1 = *DAT_0043dca8;
  *DAT_0043dca8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dca8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff888);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcac;
  sVar1 = *DAT_0043dcac;
  *DAT_0043dcac = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcac = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff890);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcb0;
  sVar1 = *DAT_0043dcb0;
  *DAT_0043dcb0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcb0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff898);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcb4;
  sVar1 = *DAT_0043dcb4;
  *DAT_0043dcb4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcb4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe218);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcb8;
  sVar1 = *DAT_0043dcb8;
  *DAT_0043dcb8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcb8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fcda0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcbc;
  sVar1 = *DAT_0043dcbc;
  *DAT_0043dcbc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcbc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fed48);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcc0;
  sVar1 = *DAT_0043dcc0;
  *DAT_0043dcc0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcc0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fed68);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcc4;
  sVar1 = *DAT_0043dcc4;
  *DAT_0043dcc4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcc4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd460);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcc8;
  sVar1 = *DAT_0043dcc8;
  *DAT_0043dcc8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcc8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8c0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dccc;
  sVar1 = *DAT_0043dccc;
  *DAT_0043dccc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dccc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff8a0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcd0;
  sVar1 = *DAT_0043dcd0;
  *DAT_0043dcd0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcd0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff8b0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcd4;
  sVar1 = *DAT_0043dcd4;
  *DAT_0043dcd4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcd4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe210);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcd8;
  sVar1 = *DAT_0043dcd8;
  *DAT_0043dcd8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcd8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd020);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcdc;
  sVar1 = *DAT_0043dcdc;
  *DAT_0043dcdc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcdc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fcdb0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dce0;
  sVar1 = *DAT_0043dce0;
  *DAT_0043dce0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dce0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe228);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dce4;
  sVar1 = *DAT_0043dce4;
  *DAT_0043dce4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dce4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fefc0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dce8;
  sVar1 = *DAT_0043dce8;
  *DAT_0043dce8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dce8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe208);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcec;
  sVar1 = *DAT_0043dcec;
  *DAT_0043dcec = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcec = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fedb0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcf0;
  sVar1 = *DAT_0043dcf0;
  *DAT_0043dcf0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcf0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff8c0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcf4;
  sVar1 = *DAT_0043dcf4;
  *DAT_0043dcf4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcf4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe440);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcf8;
  sVar1 = *DAT_0043dcf8;
  *DAT_0043dcf8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcf8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe450);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dcfc;
  sVar1 = *DAT_0043dcfc;
  *DAT_0043dcfc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dcfc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff8d0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd00;
  sVar1 = *DAT_0043dd00;
  *DAT_0043dd00 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd00 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff8d8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd04;
  sVar1 = *DAT_0043dd04;
  *DAT_0043dd04 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd04 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fea78);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd08;
  sVar1 = *DAT_0043dd08;
  *DAT_0043dd08 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd08 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fea68);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd0c;
  sVar1 = *DAT_0043dd0c;
  *DAT_0043dd0c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd0c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff8e0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd10;
  sVar1 = *DAT_0043dd10;
  *DAT_0043dd10 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd10 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff8e8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd14;
  sVar1 = *DAT_0043dd14;
  *DAT_0043dd14 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd14 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff8f0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd18;
  sVar1 = *DAT_0043dd18;
  *DAT_0043dd18 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd18 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff900);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd1c;
  sVar1 = *DAT_0043dd1c;
  *DAT_0043dd1c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd1c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff910);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd20;
  sVar1 = *DAT_0043dd20;
  *DAT_0043dd20 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd20 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff920);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd24;
  sVar1 = *DAT_0043dd24;
  *DAT_0043dd24 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd24 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff930);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd28;
  sVar1 = *DAT_0043dd28;
  *DAT_0043dd28 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd28 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff940);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd2c;
  sVar1 = *DAT_0043dd2c;
  *DAT_0043dd2c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd2c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff948);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd30;
  sVar1 = *DAT_0043dd30;
  *DAT_0043dd30 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd30 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff958);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd34;
  sVar1 = *DAT_0043dd34;
  *DAT_0043dd34 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd34 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff960);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd38;
  sVar1 = *DAT_0043dd38;
  *DAT_0043dd38 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd38 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff978);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd3c;
  sVar1 = *DAT_0043dd3c;
  *DAT_0043dd3c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd3c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff988);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd40;
  sVar1 = *DAT_0043dd40;
  *DAT_0043dd40 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd40 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff998);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd44;
  sVar1 = *DAT_0043dd44;
  *DAT_0043dd44 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd44 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff9a8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd48;
  sVar1 = *DAT_0043dd48;
  *DAT_0043dd48 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd48 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff9b8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd4c;
  sVar1 = *DAT_0043dd4c;
  *DAT_0043dd4c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd4c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff9c8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd50;
  sVar1 = *DAT_0043dd50;
  *DAT_0043dd50 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd50 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff9e0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd54;
  sVar1 = *DAT_0043dd54;
  *DAT_0043dd54 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd54 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ff9f0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd58;
  sVar1 = *DAT_0043dd58;
  *DAT_0043dd58 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd58 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa00);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd5c;
  sVar1 = *DAT_0043dd5c;
  *DAT_0043dd5c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd5c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa10);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd60;
  sVar1 = *DAT_0043dd60;
  *DAT_0043dd60 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd60 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fed50);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd64;
  sVar1 = *DAT_0043dd64;
  *DAT_0043dd64 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd64 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8b8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd68;
  sVar1 = *DAT_0043dd68;
  *DAT_0043dd68 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd68 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fed78);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd6c;
  sVar1 = *DAT_0043dd6c;
  *DAT_0043dd6c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd6c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fcd90);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd70;
  sVar1 = *DAT_0043dd70;
  *DAT_0043dd70 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd70 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8d0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd74;
  sVar1 = *DAT_0043dd74;
  *DAT_0043dd74 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd74 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa18);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd78;
  sVar1 = *DAT_0043dd78;
  *DAT_0043dd78 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd78 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa20);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd7c;
  sVar1 = *DAT_0043dd7c;
  *DAT_0043dd7c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd7c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd060);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd80;
  sVar1 = *DAT_0043dd80;
  *DAT_0043dd80 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd80 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe268);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd84;
  sVar1 = *DAT_0043dd84;
  *DAT_0043dd84 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd84 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe238);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd88;
  sVar1 = *DAT_0043dd88;
  *DAT_0043dd88 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd88 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe270);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd8c;
  sVar1 = *DAT_0043dd8c;
  *DAT_0043dd8c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd8c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa28);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd90;
  sVar1 = *DAT_0043dd90;
  *DAT_0043dd90 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd90 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa38);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd94;
  sVar1 = *DAT_0043dd94;
  *DAT_0043dd94 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd94 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa48);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd98;
  sVar1 = *DAT_0043dd98;
  *DAT_0043dd98 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd98 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fefc8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dd9c;
  sVar1 = *DAT_0043dd9c;
  *DAT_0043dd9c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dd9c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa58);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dda0;
  sVar1 = *DAT_0043dda0;
  *DAT_0043dda0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dda0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa60);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dda4;
  sVar1 = *DAT_0043dda4;
  *DAT_0043dda4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dda4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa68);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dda8;
  sVar1 = *DAT_0043dda8;
  *DAT_0043dda8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dda8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe850);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddac;
  sVar1 = *DAT_0043ddac;
  *DAT_0043ddac = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddac = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe9e0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddb0;
  sVar1 = *DAT_0043ddb0;
  *DAT_0043ddb0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddb0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe970);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddb4;
  sVar1 = *DAT_0043ddb4;
  *DAT_0043ddb4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddb4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe818);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddb8;
  sVar1 = *DAT_0043ddb8;
  *DAT_0043ddb8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddb8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe960);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddbc;
  sVar1 = *DAT_0043ddbc;
  *DAT_0043ddbc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddbc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe828);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddc0;
  sVar1 = *DAT_0043ddc0;
  *DAT_0043ddc0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddc0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe7d0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddc4;
  sVar1 = *DAT_0043ddc4;
  *DAT_0043ddc4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddc4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe918);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddc8;
  sVar1 = *DAT_0043ddc8;
  *DAT_0043ddc8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddc8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe868);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddcc;
  sVar1 = *DAT_0043ddcc;
  *DAT_0043ddcc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddcc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe830);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddd0;
  sVar1 = *DAT_0043ddd0;
  *DAT_0043ddd0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddd0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe7d8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddd4;
  sVar1 = *DAT_0043ddd4;
  *DAT_0043ddd4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddd4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe790);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddd8;
  sVar1 = *DAT_0043ddd8;
  *DAT_0043ddd8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddd8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe7a8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dddc;
  sVar1 = *DAT_0043dddc;
  *DAT_0043dddc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dddc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe800);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dde0;
  sVar1 = *DAT_0043dde0;
  *DAT_0043dde0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dde0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe940);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dde4;
  sVar1 = *DAT_0043dde4;
  *DAT_0043dde4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dde4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe8b0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dde8;
  sVar1 = *DAT_0043dde8;
  *DAT_0043dde8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dde8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe8f8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddec;
  sVar1 = *DAT_0043ddec;
  *DAT_0043ddec = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddec = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd4b8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddf0;
  sVar1 = *DAT_0043ddf0;
  *DAT_0043ddf0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddf0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe200);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddf4;
  sVar1 = *DAT_0043ddf4;
  *DAT_0043ddf4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddf4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa70);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddf8;
  sVar1 = *DAT_0043ddf8;
  *DAT_0043ddf8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddf8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8c8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ddfc;
  sVar1 = *DAT_0043ddfc;
  *DAT_0043ddfc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ddfc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa80);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de00;
  sVar1 = *DAT_0043de00;
  *DAT_0043de00 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de00 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe230);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de04;
  sVar1 = *DAT_0043de04;
  *DAT_0043de04 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de04 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa88);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de08;
  sVar1 = *DAT_0043de08;
  *DAT_0043de08 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de08 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8e8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de0c;
  sVar1 = *DAT_0043de0c;
  *DAT_0043de0c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de0c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fcda8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de10;
  sVar1 = *DAT_0043de10;
  *DAT_0043de10 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de10 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe220);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de14;
  sVar1 = *DAT_0043de14;
  *DAT_0043de14 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de14 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa90);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de18;
  sVar1 = *DAT_0043de18;
  *DAT_0043de18 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de18 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffa98);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de1c;
  sVar1 = *DAT_0043de1c;
  *DAT_0043de1c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de1c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffaa8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de20;
  sVar1 = *DAT_0043de20;
  *DAT_0043de20 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de20 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffab0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de24;
  sVar1 = *DAT_0043de24;
  *DAT_0043de24 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de24 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffac0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de28;
  sVar1 = *DAT_0043de28;
  *DAT_0043de28 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de28 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffad0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de2c;
  sVar1 = *DAT_0043de2c;
  *DAT_0043de2c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de2c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffae0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de30;
  sVar1 = *DAT_0043de30;
  *DAT_0043de30 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de30 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffaf0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de34;
  sVar1 = *DAT_0043de34;
  *DAT_0043de34 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de34 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb00);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de38;
  sVar1 = *DAT_0043de38;
  *DAT_0043de38 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de38 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb08);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de3c;
  sVar1 = *DAT_0043de3c;
  *DAT_0043de3c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de3c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb18);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de40;
  sVar1 = *DAT_0043de40;
  *DAT_0043de40 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de40 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb20);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de44;
  sVar1 = *DAT_0043de44;
  *DAT_0043de44 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de44 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb30);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de48;
  sVar1 = *DAT_0043de48;
  *DAT_0043de48 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de48 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb40);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de4c;
  sVar1 = *DAT_0043de4c;
  *DAT_0043de4c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de4c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb50);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de50;
  sVar1 = *DAT_0043de50;
  *DAT_0043de50 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de50 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb60);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de54;
  sVar1 = *DAT_0043de54;
  *DAT_0043de54 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de54 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb78);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de58;
  sVar1 = *DAT_0043de58;
  *DAT_0043de58 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de58 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb88);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de5c;
  sVar1 = *DAT_0043de5c;
  *DAT_0043de5c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de5c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffb98);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de60;
  sVar1 = *DAT_0043de60;
  *DAT_0043de60 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de60 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffba8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de64;
  sVar1 = *DAT_0043de64;
  *DAT_0043de64 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de64 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd4c0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de68;
  sVar1 = *DAT_0043de68;
  *DAT_0043de68 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de68 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe258);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de6c;
  sVar1 = *DAT_0043de6c;
  *DAT_0043de6c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de6c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8d8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de70;
  sVar1 = *DAT_0043de70;
  *DAT_0043de70 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de70 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd890);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de74;
  sVar1 = *DAT_0043de74;
  *DAT_0043de74 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de74 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd898);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de78;
  sVar1 = *DAT_0043de78;
  *DAT_0043de78 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de78 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fcfd0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de7c;
  sVar1 = *DAT_0043de7c;
  *DAT_0043de7c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de7c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8e0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de80;
  sVar1 = *DAT_0043de80;
  *DAT_0043de80 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de80 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fed40);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de84;
  sVar1 = *DAT_0043de84;
  *DAT_0043de84 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de84 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe240);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de88;
  sVar1 = *DAT_0043de88;
  *DAT_0043de88 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de88 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffbb0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de8c;
  sVar1 = *DAT_0043de8c;
  *DAT_0043de8c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de8c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fed88);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de90;
  sVar1 = *DAT_0043de90;
  *DAT_0043de90 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de90 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fed58);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de94;
  sVar1 = *DAT_0043de94;
  *DAT_0043de94 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de94 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd498);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de98;
  sVar1 = *DAT_0043de98;
  *DAT_0043de98 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de98 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fe278);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043de9c;
  sVar1 = *DAT_0043de9c;
  *DAT_0043de9c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043de9c = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3feed0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dea0;
  sVar1 = *DAT_0043dea0;
  *DAT_0043dea0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dea0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd070);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dea4;
  sVar1 = *DAT_0043dea4;
  *DAT_0043dea4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dea4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd4b0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dea8;
  sVar1 = *DAT_0043dea8;
  *DAT_0043dea8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dea8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fed90);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043deac;
  sVar1 = *DAT_0043deac;
  *DAT_0043deac = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043deac = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8a8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043deb0;
  sVar1 = *DAT_0043deb0;
  *DAT_0043deb0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043deb0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3feda0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043deb4;
  sVar1 = *DAT_0043deb4;
  *DAT_0043deb4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043deb4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fcd98);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043deb8;
  sVar1 = *DAT_0043deb8;
  *DAT_0043deb8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043deb8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffbb8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043debc;
  sVar1 = *DAT_0043debc;
  *DAT_0043debc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043debc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffbc8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dec0;
  sVar1 = *DAT_0043dec0;
  *DAT_0043dec0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dec0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd8a0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dec4;
  sVar1 = *DAT_0043dec4;
  *DAT_0043dec4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dec4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffbd8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dec8;
  sVar1 = *DAT_0043dec8;
  *DAT_0043dec8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dec8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffbe0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043decc;
  sVar1 = *DAT_0043decc;
  *DAT_0043decc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043decc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffbe8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ded0;
  sVar1 = *DAT_0043ded0;
  *DAT_0043ded0 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ded0 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3fd468);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ded4;
  sVar1 = *DAT_0043ded4;
  *DAT_0043ded4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ded4 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffbf0);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043ded8;
  sVar1 = *DAT_0043ded8;
  *DAT_0043ded8 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043ded8 = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  String_ctor_cstr(apsStack_b0,0x3ffbf8);
  *apsStack_b0[0] = *apsStack_b0[0] + 1;
  psVar2 = DAT_0043dedc;
  sVar1 = *DAT_0043dedc;
  *DAT_0043dedc = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  DAT_0043dedc = apsStack_b0[0];
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  uVar3 = Pool_Alloc(DAT_0043dee0,param_1 << 2);
  DAT_003bfb08 = (undefined4)uVar3;
  memset(uVar3,0,param_1 << 2);
  DAT_003bfb0c = param_1;
  return;
}


// ==== FUN_00259558 @ 00259558 ====

uint * FUN_00259558(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  short *psVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  short *apsStack_90 [4];
  
  uVar12 = 0x9dc5;
  pcVar13 = (char *)param_1;
  cVar1 = *pcVar13;
  while (cVar1 != '\0') {
    pcVar13 = pcVar13 + 1;
    uVar9 = (uint)cVar1;
    if (uVar9 - 0x41 < 0x1a) {
      uVar9 = uVar9 + 0x20;
    }
    uVar12 = (uVar12 ^ uVar9) * 0x1000193;
    cVar1 = *pcVar13;
  }
  uVar9 = 0x4567;
  if ((uVar12 & 0xffff) != 0) {
    uVar9 = uVar12 & 0xffff;
  }
  uVar12 = (int)uVar9 % DAT_003bfb0c & 0xffff;
  puVar6 = *(uint **)(uVar12 * 4 + DAT_003bfb08);
  if (puVar6 != (uint *)0x0) {
    uVar10 = puVar6[2];
    while( true ) {
      if (*(ushort *)(uVar10 + 6) == uVar9) {
        lVar7 = strcmp(uVar10 + 8,param_1);
        if (lVar7 == 0) {
          uVar12 = *puVar6;
          if ((uVar12 >> 0x12 & 0x3f) == 0x3f) {
            return puVar6;
          }
          uVar9 = uVar12 >> 0x12 & 0x3f;
          if (0x3e < uVar9) {
            return puVar6;
          }
          *puVar6 = uVar12 & 0xff03ffff | (uVar9 + 1 & 0x3f) << 0x12;
          return puVar6;
        }
        puVar6 = (uint *)puVar6[3];
      }
      else {
        puVar6 = (uint *)puVar6[3];
      }
      if (puVar6 == (uint *)0x0) break;
      uVar10 = puVar6[2];
    }
  }
  puVar6 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar8 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar6 = (uint *)FUN_0024ad08(uVar8);
  }
  else {
    uVar9 = *DAT_003bfb10;
    puVar5 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar9 | 4;
    DAT_003bfb10 = puVar5;
    piVar4 = DAT_003be8e0;
    iVar11 = DAT_003be8e0[1];
    if (iVar11 < *DAT_003be8e0) {
      *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar4[1] = iVar11 + 1;
    }
    else {
      *puVar6 = uVar9 & 0xfffffffb;
    }
    lVar7 = FUN_003872a8(puVar6 + 2);
    if (lVar7 == 0) {
      FUN_002530e8(puVar6 + 2,0);
    }
  }
  String_ctor_cstr(apsStack_90,param_1);
  *apsStack_90[0] = *apsStack_90[0] + 1;
  psVar3 = (short *)puVar6[2];
  sVar2 = *psVar3;
  *psVar3 = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
  }
  puVar6[2] = (uint)apsStack_90[0];
  sVar2 = *apsStack_90[0];
  *apsStack_90[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
  }
  FUN_002540b8(puVar6 + 2);
  iVar11 = uVar12 * 4;
  puVar6[3] = *(uint *)(iVar11 + DAT_003bfb08);
  *(uint **)(iVar11 + DAT_003bfb08) = puVar6;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  uVar12 = *puVar6 >> 0x12 & 0x3f;
  if (uVar12 < 0x3f) {
    *puVar6 = *puVar6 & 0xff03ffff | (uVar12 + 1 & 0x3f) << 0x12;
  }
  return puVar6;
}


// ==== FUN_00259848 @ 00259848 ====

void FUN_00259848(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar4 = uVar1 >> 0x12 & 0x3f;
  if (uVar4 != 0x3f) {
    if ((uVar1 & 0xfc0000) != 0) {
      *param_1 = uVar1 & 0xff03ffff | ((uVar1 >> 0x12 & 0x3f) - 1 & 0x3f) << 0x12;
    }
    if (uVar4 == 1) {
      puVar3 = (uint *)(((int)(uint)*(ushort *)(param_1[2] + 6) % DAT_003bfb0c & 0xffffU) * 4 +
                       DAT_003bfb08);
      puVar2 = (uint *)*puVar3;
      if (puVar2 == param_1) {
        *puVar3 = param_1[3];
        (**(code **)(param_1[1] + 0x14))((int)param_1 + (int)*(short *)(param_1[1] + 0x10));
      }
      else {
        if ((uint *)puVar2[3] != param_1) {
          for (puVar2 = (uint *)puVar2[3]; (uint *)puVar2[3] != param_1; puVar2 = (uint *)puVar2[3])
          {
          }
        }
        puVar2[3] = param_1[3];
        (**(code **)(param_1[1] + 0x14))((int)param_1 + (int)*(short *)(param_1[1] + 0x10));
      }
    }
  }
  return;
}


// ==== FUN_00259950 @ 00259950 ====

void FUN_00259950(void)

{
  int iVar1;
  
  iVar1 = DAT_003bfb10;
  while (DAT_003bfb10 = iVar1, DAT_003bfb10 != 0) {
    iVar1 = *(int *)(DAT_003bfb10 + 0xc);
    (**(code **)(*(int *)(DAT_003bfb10 + 4) + 100))
              (DAT_003bfb10 + *(short *)(*(int *)(DAT_003bfb10 + 4) + 0x60));
    if (DAT_003bfb10 != 0) {
      (**(code **)(*(int *)(DAT_003bfb10 + 4) + 0x7c))
                (DAT_003bfb10 + *(short *)(*(int *)(DAT_003bfb10 + 4) + 0x78),3);
    }
  }
  return;
}


// ==== FUN_002599d8 @ 002599d8 ====

/* WARNING: Removing unreachable block (ram,0x00259c3c) */

void FUN_002599d8(long param_1,long param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_a4;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      puVar4 = &DAT_0043dee0;
      do {
        puVar4 = puVar4 + -1;
        psVar2 = (short *)*puVar4;
        sVar1 = *psVar2;
        *psVar2 = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
        }
      } while (puVar4 != &DAT_0043dc18);
      if (DAT_0043db94 != 0) {
        Pool_Free(DAT_0043dee0,DAT_0043db94,DAT_0043db90 << 2);
      }
      if (DAT_0043db88 != 0) {
        Pool_Free(DAT_0043dee0,DAT_0043db88,DAT_0043db84 << 2);
      }
      if (DAT_0043db7c != 0) {
        Pool_Free(DAT_0043dee0,DAT_0043db7c,DAT_0043db78 << 2);
      }
      if (DAT_0043db70 != 0) {
        Pool_Free(DAT_0043dee0,DAT_0043db70,DAT_0043db6c << 2);
      }
      psVar2 = DAT_0043db20;
      sVar1 = *DAT_0043db20;
      *DAT_0043db20 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
    }
    else {
      FUN_002183a8(0x43da70);
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      DAT_0043db20 = &DAT_003bfaf8;
      DAT_0043db28._0_4_ = 0x200;
      DAT_0043db28._4_4_ = 0x200;
      DAT_0043db48._4_4_ = 0x20;
      DAT_0043db40._4_4_ = 0x40;
      DAT_0043db48._0_4_ = 0x180;
      DAT_0043db50._0_4_ = 0x100;
      DAT_0043db50._4_4_ = 0x400;
      DAT_0043db58._0_4_ = 0x80;
      DAT_0043db58._4_4_ = 8;
      puVar4 = &DAT_0043dc18;
      DAT_0043db60._1_1_ = 0;
      DAT_0043db68 = 0;
      DAT_0043db7c = 0;
      DAT_0043db88 = 0;
      DAT_0043db8c = 0;
      DAT_0043db94 = 0;
      DAT_0043db30._0_4_ = 0x40;
      DAT_0043db30._4_4_ = 0x100;
      DAT_0043db38._0_4_ = 0x40;
      DAT_0043db38._4_4_ = 0x100;
      DAT_0043db40._0_4_ = 0x180;
      DAT_0043db60._0_1_ = 0;
      DAT_0043db6c = 0;
      iVar3 = 0xb1;
      DAT_0043db70 = 0;
      DAT_0043db74 = 0;
      DAT_0043db78 = 0;
      DAT_0043db80 = 0;
      DAT_0043db84 = 0;
      DAT_0043db90 = 0;
      DAT_0043dbd8 = 0x4b400000;
      DAT_0043dbdc = uStack_a4;
      DAT_0043dbe8 = 0x3e800000;
      DAT_0043dbec = uStack_a4;
      DAT_0043dbf8 = 0x42a33457;
      DAT_0043dbfc = uStack_a4;
      DAT_0043dc08 = 0;
      DAT_0043dc0c = uStack_a4;
      DAT_0043dbd0 = 0x3fc90fdb;
      DAT_0043dbd4 = 0xbe22f983;
      DAT_0043dbe0 = 0xbe22f983;
      DAT_0043dbe4 = 0x3f000000;
      DAT_0043dbf0 = 0xc2992661;
      DAT_0043dbf4 = 0xc2255de0;
      DAT_0043dc00 = 0x421ed7b7;
      DAT_0043dc04 = 0x40c90fda;
      DAT_0043dc10 = 0x3f800000;
      DAT_0043dc14 = 0x3faaaaab;
      do {
        iVar3 = iVar3 + -1;
        *puVar4 = &DAT_003bfaf8;
        DAT_003bfaf8 = DAT_003bfaf8 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 != -1);
    }
  }
  return;
}


// ==== FUN_00259d68 @ 00259d68 ====

void FUN_00259d68(void)

{
  FUN_002599d8(1,0xffff);
  return;
}


// ==== FUN_00259d88 @ 00259d88 ====

void FUN_00259d88(void)

{
  FUN_002599d8(0,0xffff);
  return;
}


// ==== FUN_00259da8 @ 00259da8 ====

/* WARNING: Removing unreachable block (ram,0x0025afe4) */
/* WARNING: Removing unreachable block (ram,0x0025ad08) */
/* WARNING: Removing unreachable block (ram,0x0025b27c) */
/* WARNING: Removing unreachable block (ram,0x0025b0e4) */
/* WARNING: Removing unreachable block (ram,0x0025b3e8) */
/* WARNING: Removing unreachable block (ram,0x0025b334) */
/* WARNING: Removing unreachable block (ram,0x0025af30) */
/* WARNING: Removing unreachable block (ram,0x0025ae78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00259da8(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 in_vf0 [16];
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
  undefined4 auStack_1f0 [4];
  undefined1 auStack_1e0 [16];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [8];
  float fStack_178;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [8];
  float fStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 *puStack_c0;
  int iStack_bc;
  int *piStack_b8;
  int iStack_b4;
  
  iVar11 = 0;
  DAT_003bfb1c = 0;
  auStack_1f0[0] = 0;
  DAT_003bfb18 = 0;
  FUN_00334340();
  FUN_00107b08(0x40f0f0,0,0);
  FUN_00107ab8(0x40f0f0,0xb,0);
  puStack_c0 = auStack_1e0;
  piVar9 = param_1;
  do {
    piVar9 = piVar9 + 0x14;
    FUN_0025ce90(piVar9);
    iVar12 = iVar11 + 0x22b0;
    iVar11 = iVar11 + 1;
    *(undefined1 *)((int)param_1 + iVar12) = 0;
  } while (iVar11 < 0x6e);
  piStack_b8 = param_1 + 2;
  iVar11 = 0;
  piVar9 = param_1 + 0x8c8;
  do {
    FUN_0025ce90(piVar9);
    piVar9 = piVar9 + 0x14;
    iVar12 = iVar11 + 0x2960;
    iVar11 = iVar11 + 1;
    *(undefined1 *)((int)param_1 + iVar12) = 0;
  } while (iVar11 < 0x14);
  piVar9 = param_1 + 0x22c2;
  iVar11 = 0;
  do {
    FUN_00260c18(piVar9);
    piVar9 = piVar9 + 7;
    iVar12 = iVar11 + 0x8b40;
    iVar11 = iVar11 + 1;
    *(undefined1 *)((int)param_1 + iVar12) = 0;
  } while (iVar11 < 2);
  FUN_00107b08(0x40f0f0,0xb,0);
  FUN_00107ab8(0x40f0f0,0xc,0);
  FUN_0032e0e0(puStack_c0,0x43ea10);
  auStack_1f0[0] = FUN_00107c98(0x40f0f0,puStack_c0);
  iVar11 = FUN_0032bdc0(auStack_1f0,0x43ea10);
  *param_1 = iVar11;
  FUN_0032e5d8(puStack_c0,0x43ea10);
  auStack_1f0[0] = FUN_00107c98(0x40f0f0,puStack_c0);
  uVar5 = FUN_0032e618(auStack_1f0,0x43ea10);
  FUN_0032e120(*param_1,uVar5);
  FUN_00107b08(0x40f0f0,0xc,0);
  FUN_00107ab8(0x40f0f0,0xb,0);
  iVar11 = FUN_0032e320(*param_1);
  auVar17 = _lqc2(_DAT_0043ea50);
  auVar16 = _qmtc2(*(undefined4 *)(iVar11 + 0x380));
  auVar15 = _vmulbc(auVar17,auVar16);
  auVar17 = _sqc2(auVar17);
  *(undefined1 (*) [16])(iVar11 + 0x360) = auVar17;
  auVar17 = _vmulbc(auVar15,auVar16);
  auVar17 = _sqc2(auVar17);
  *(undefined1 (*) [16])(iVar11 + 0x370) = auVar17;
  iVar11 = FUN_0032e320(*param_1);
  *(undefined4 *)(iVar11 + 0x38c) = 0x14;
  iVar11 = FUN_0032e320(*param_1);
  *(undefined4 *)(iVar11 + 0x390) = 0x3c23d70a;
  iVar11 = FUN_0032e320(*param_1);
  *(undefined4 *)(iVar11 + 0x398) = 10;
  iVar11 = FUN_0032e320(*param_1);
  *(undefined4 *)(iVar11 + 0x14) = 2;
  *(undefined4 *)(*param_1 + 4) = 9;
  *(undefined4 *)(*(int *)(*param_1 + 0x18) + 0x388) = 0x3ccccccd;
  uStack_1d0 = 0x28;
  uStack_1cc = 4;
  FUN_00107cc8(0x40f0f0,4);
  puVar2 = (undefined4 *)FUN_00107cf8(0x10);
  puVar2[1] = 0xe;
  *puVar2 = 0xe;
  puVar2[2] = 7;
  puVar3 = (undefined1 *)FUN_00107d20(0x40);
  iVar11 = puVar2[2];
  uVar8 = 0;
  puVar3[0x3f] = 0;
  *puVar3 = 0;
  if (iVar11 != 0) {
    puVar6 = puVar2 + 3;
    do {
      *puVar6 = 0;
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 < (uint)puVar2[2]);
  }
  uVar8 = puVar2[1] * 4 + 4;
  puVar2[3] = puVar2[3] | 1;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  iVar11 = 0;
  uVar8 = puVar2[1] * 6 + 6;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 9 + 9;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xb + 0xb;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 4 + 7;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 6 + 7;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 5 + 7;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 3 + 7;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 7 + 4;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 7 + 6;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 7 + 5;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 7 + 3;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 5 + 4;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 5 + 6;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 3 + 4;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 4 + 3;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xd + 0xd;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xd + 4;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xd + 6;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xd + 3;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xd + 5;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xd + 7;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 4 + 0xd;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 6 + 0xd;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 3 + 0xd;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 5 + 0xd;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 7 + 0xd;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  puVar2[(puVar2[1] + 7 >> 5) + 3] = puVar2[(puVar2[1] + 7 >> 5) + 3] | 1 << (puVar2[1] + 7 & 0x1f);
  uVar8 = puVar2[1] * 7 + 1;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  puVar2[(puVar2[1] + 8 >> 5) + 3] = puVar2[(puVar2[1] + 8 >> 5) + 3] | 1 << (puVar2[1] + 8 & 0x1f);
  uVar8 = puVar2[1] * 8 + 1;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  puVar2[(puVar2[1] + 9 >> 5) + 3] = puVar2[(puVar2[1] + 9 >> 5) + 3] | 1 << (puVar2[1] + 9 & 0x1f);
  uVar8 = puVar2[1] * 9 + 1;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  puVar2[(puVar2[1] + 0xb >> 5) + 3] =
       puVar2[(puVar2[1] + 0xb >> 5) + 3] | 1 << (puVar2[1] + 0xb & 0x1f);
  uVar8 = puVar2[1] * 0xb + 1;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  puVar2[(puVar2[1] + 0xd >> 5) + 3] =
       puVar2[(puVar2[1] + 0xd >> 5) + 3] | 1 << (puVar2[1] + 0xd & 0x1f);
  uVar8 = puVar2[1] * 0xd + 1;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  puVar2[(puVar2[1] + 3 >> 5) + 3] = puVar2[(puVar2[1] + 3 >> 5) + 3] | 1 << (puVar2[1] + 3 & 0x1f);
  uVar8 = puVar2[1] * 3 + 1;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 2 + 7;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 7 + 2;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 2 + 8;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 8 + 2;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 2 + 9;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 9 + 2;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 2 + 0xb;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xb + 2;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 2 + 0xd;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  uVar8 = puVar2[1] * 0xd + 2;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  puVar2[((puVar2[1] & 0x7fffffff) >> 4) + 3] =
       puVar2[((puVar2[1] & 0x7fffffff) >> 4) + 3] | 1 << ((puVar2[1] & 0xf) << 1);
  uVar8 = puVar2[1] * 2 + 1;
  puVar2[3] = puVar2[3] | 4;
  puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  puVar2[(puVar2[1] + 2 >> 5) + 3] = puVar2[(puVar2[1] + 2 >> 5) + 3] | 1 << (puVar2[1] + 2 & 0x1f);
  puVar2[((uint)puVar2[1] >> 5) + 3] = puVar2[((uint)puVar2[1] >> 5) + 3] | 1 << (puVar2[1] & 0x1f);
  puVar2[3] = puVar2[3] | 2;
  do {
    uVar8 = puVar2[1] * 0xc + iVar11;
    puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
    iVar12 = iVar11 * puVar2[1];
    iVar11 = iVar11 + 1;
    uVar8 = iVar12 + 0xc;
    puVar2[(uVar8 >> 5) + 3] = puVar2[(uVar8 >> 5) + 3] | 1 << (uVar8 & 0x1f);
  } while (iVar11 < 0xe);
  *(undefined4 **)(*param_1 + 0xd8) = puVar2;
  FUN_0032b860(puStack_c0,1,0);
  fVar14 = 0.5;
  auStack_1f0[0] = FUN_00107c98(0x40f0f0,puStack_c0);
  iVar11 = FUN_0032bb28(auStack_1f0,1,0);
  param_1[1] = iVar11;
  iStack_bc = 0;
  iVar11 = *(int *)(iVar11 + 4);
  *(undefined4 *)(iVar11 + 0x44) = 0x3ecccccd;
  *(undefined4 *)(iVar11 + 0x40) = 0x3ecccccd;
  *(undefined4 *)(*(int *)(param_1[1] + 4) + 0x48) = 0x3dcccccd;
  iVar11 = 1;
  do {
    iStack_b4 = iStack_bc << 2;
    iVar12 = 0;
    piVar9 = piStack_b8 + iStack_bc * 2;
    iStack_bc = iVar11;
    do {
      FUN_0032abd0(auStack_1e0,*(undefined4 *)param_1[1],((undefined4 *)param_1[1])[2]);
      auStack_1f0[0] = FUN_00107c98(0x40f0f0,puStack_c0);
      iVar11 = FUN_0032ad30(auStack_1f0,param_1[1]);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar16 = _vsub(in_vf0,in_vf0);
      auVar18 = _vaddbc(in_vf0,in_vf0);
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auStack_1b0 = _sqc2(auVar17);
      auStack_1a0 = _sqc2(auVar15);
      auStack_190 = _sqc2(auVar16);
      *piVar9 = iVar11;
      auStack_1c0 = _sqc2(auVar18);
      iVar11 = *(int *)(iVar11 + 0xc);
      pauVar10 = *(undefined1 (**) [16])(iVar11 + 0x58);
      if (pauVar10 != (undefined1 (*) [16])0x0) {
        pauVar4 = *(undefined1 (**) [16])(iVar11 + 0x50);
        if (pauVar4 == (undefined1 (*) [16])0x0) {
          _lqc2(pauVar10[4]);
          auVar17 = _vmove(auVar18);
          _lqc2(pauVar10[5]);
          auVar17 = _sqc2(auVar17);
          pauVar10[4] = auVar17;
          _lqc2(pauVar10[6]);
          _lqc2(pauVar10[1]);
          auVar17 = _lqc2(auStack_1b0);
          auVar17 = _vmove(auVar17);
          auVar17 = _sqc2(auVar17);
          pauVar10[5] = auVar17;
          auVar17 = _lqc2(auStack_1a0);
          auVar17 = _vmove(auVar17);
          auVar17 = _sqc2(auVar17);
          pauVar10[6] = auVar17;
          auVar17 = _lqc2(auStack_190);
          auVar17 = _vmove(auVar17);
          auVar17 = _sqc2(auVar17);
          pauVar10[1] = auVar17;
          auVar16 = _lqc2(auStack_1b0);
          auVar17 = _lqc2(auStack_1c0);
          auVar17 = _vaddbc(auVar17,auVar16);
          auVar15 = _lqc2(auStack_1a0);
          auVar17 = _vaddbc(auVar17,auVar15);
          auVar17 = _qmfc2(auVar17._0_4_);
          if (auVar17._0_4_ <= 0.0) {
            auVar17 = _sqc2(auVar16);
            auVar15 = _lqc2(auStack_1c0);
            auVar15 = _qmfc2(auVar15._0_4_);
            auStack_180._4_4_ = auVar17._4_4_;
            auVar17 = _lqc2(auStack_1a0);
            if ((float)auStack_180._4_4_ <= auVar15._0_4_) {
              _auStack_180 = _sqc2(auVar17);
              auVar17 = _lqc2(auStack_1c0);
              auVar17 = _qmfc2(auVar17._0_4_);
              bVar1 = auVar17._0_4_ < fStack_178;
              uVar7 = 0;
              if (bVar1) {
                uVar7 = 2;
              }
            }
            else {
              auVar17 = _sqc2(auVar17);
              fStack_178 = auVar17._8_4_;
              auVar17 = _lqc2(auStack_1b0);
              auVar17 = _sqc2(auVar17);
              auStack_180._4_4_ = auVar17._4_4_;
              bVar1 = (float)auStack_180._4_4_ < fStack_178;
              uVar7 = 1;
              _auStack_180 = auVar17;
              if (bVar1) {
                uVar7 = 2;
              }
            }
            if (uVar7 != 1) {
              if (uVar7 < 2) {
                auVar17 = _lqc2(auStack_1b0);
                if (uVar7 == 0) {
                  auVar16 = _qmtc2(0x3f800000);
                  auVar15 = _lqc2(auStack_1a0);
                  auVar15 = _vaddbc(auVar17,auVar15);
                  auVar17 = _lqc2(auStack_1c0);
                  auVar17 = _vsubbc(auVar17,auVar15);
                  auVar17 = _vaddbc(auVar17,auVar16);
                  auVar17 = _qmfc2(auVar17._0_4_);
                  _lqc2(*pauVar10);
                  fVar13 = fVar14 / SQRT(auVar17._0_4_);
                  auVar17 = _qmtc2(SQRT(auVar17._0_4_) * fVar14);
                  auVar17 = _vaddbc(in_vf0,auVar17);
                  auVar17 = _sqc2(auVar17);
                  *pauVar10 = auVar17;
                  auVar16 = _qmtc2(fVar13);
                  auVar18 = _qmtc2(fVar13);
                  auVar15 = _lqc2(auStack_1a0);
                  auVar17 = _lqc2(auStack_1b0);
                  auVar17 = _vsubbc(auVar17,auVar15);
                  auVar17 = _vmulbc(auVar17,auVar16);
                  auVar17 = _vmulbc(in_vf0,auVar17);
                  auVar17 = _sqc2(auVar17);
                  *pauVar10 = auVar17;
                  auVar15 = _lqc2(auStack_1b0);
                  auVar17 = _lqc2(auStack_1c0);
                  auVar17 = _vaddbc(auVar17,auVar15);
                  auVar17 = _vmulbc(auVar17,auVar18);
                  auVar17 = _vaddbc(in_vf0,auVar17);
                  auVar17 = _sqc2(auVar17);
                  *pauVar10 = auVar17;
                  auVar17 = _lqc2(auStack_1c0);
                  auVar15 = _lqc2(auStack_1a0);
                  auVar17 = _vaddbc(auVar17,auVar15);
                  auVar17 = _vmulbc(auVar17,auVar16);
                  auVar17 = _vaddbc(in_vf0,auVar17);
                  auVar17 = _sqc2(auVar17);
                  *pauVar10 = auVar17;
                  goto LAB_0025b464;
                }
                pauVar4 = *(undefined1 (**) [16])(pauVar10[5] + 0xc);
              }
              else {
                auVar17 = _lqc2(auStack_1c0);
                if (uVar7 == 2) {
                  auVar16 = _qmtc2(0x3f800000);
                  auVar15 = _lqc2(auStack_1b0);
                  auVar15 = _vaddbc(auVar17,auVar15);
                  auVar17 = _lqc2(auStack_1a0);
                  auVar17 = _vsubbc(auVar17,auVar15);
                  auVar17 = _vaddbc(auVar17,auVar16);
                  _auStack_180 = _sqc2(auVar17);
                  _lqc2(*pauVar10);
                  fVar13 = fVar14 / SQRT(fStack_178);
                  auVar17 = _qmtc2(SQRT(fStack_178) * fVar14);
                  auVar17 = _vaddbc(in_vf0,auVar17);
                  auVar17 = _sqc2(auVar17);
                  *pauVar10 = auVar17;
                  auVar16 = _qmtc2(fVar13);
                  auVar18 = _qmtc2(fVar13);
                  auVar15 = _lqc2(auStack_1b0);
                  auVar17 = _lqc2(auStack_1c0);
                  auVar17 = _vsubbc(auVar17,auVar15);
                  auVar17 = _vmulbc(auVar17,auVar16);
                  auVar17 = _vmulbc(in_vf0,auVar17);
                  auVar17 = _sqc2(auVar17);
                  *pauVar10 = auVar17;
                  auVar15 = _lqc2(auStack_1c0);
                  auVar17 = _lqc2(auStack_1a0);
                  auVar17 = _vaddbc(auVar17,auVar15);
                  auVar17 = _vmulbc(auVar17,auVar18);
                  auVar17 = _vaddbc(in_vf0,auVar17);
                  auVar17 = _sqc2(auVar17);
                  *pauVar10 = auVar17;
                  auVar17 = _lqc2(auStack_1a0);
                  auVar15 = _lqc2(auStack_1b0);
                  goto LAB_0025b454;
                }
                pauVar4 = *(undefined1 (**) [16])(pauVar10[5] + 0xc);
              }
              goto LAB_0025b468;
            }
            auVar15 = _lqc2(auStack_1a0);
            auVar16 = _qmtc2(0x3f800000);
            auVar17 = _lqc2(auStack_1c0);
            auVar15 = _vaddbc(auVar15,auVar17);
            auVar17 = _lqc2(auStack_1b0);
            auVar17 = _vsubbc(auVar17,auVar15);
            auVar17 = _vaddbc(auVar17,auVar16);
            _auStack_180 = _sqc2(auVar17);
            _lqc2(*pauVar10);
            fVar13 = fVar14 / SQRT((float)auStack_180._4_4_);
            auVar17 = _qmtc2(SQRT((float)auStack_180._4_4_) * fVar14);
            auVar17 = _vaddbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            auVar16 = _qmtc2(fVar13);
            auVar18 = _qmtc2(fVar13);
            auVar15 = _lqc2(auStack_1c0);
            auVar17 = _lqc2(auStack_1a0);
            auVar17 = _vsubbc(auVar17,auVar15);
            auVar17 = _vmulbc(auVar17,auVar16);
            auVar17 = _vmulbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            auVar15 = _lqc2(auStack_1a0);
            auVar17 = _lqc2(auStack_1b0);
            auVar17 = _vaddbc(auVar17,auVar15);
            auVar17 = _vmulbc(auVar17,auVar18);
            auVar17 = _vaddbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            auVar17 = _lqc2(auStack_1b0);
            auVar15 = _lqc2(auStack_1c0);
            auVar17 = _vaddbc(auVar17,auVar15);
            auVar17 = _vmulbc(auVar17,auVar16);
            auVar17 = _vaddbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            goto LAB_0025b464;
          }
          fVar13 = SQRT(auVar17._0_4_ + 1.0);
          auVar17 = _lqc2(auStack_1b0);
          _lqc2(*pauVar10);
          auVar17 = _vsubbc(auVar17,auVar15);
          auVar17 = _vaddbc(in_vf0,auVar17);
          auVar17 = _sqc2(auVar17);
          *pauVar10 = auVar17;
          auVar18 = _qmtc2(0);
          auVar15 = _lqc2(auStack_1c0);
          auVar17 = _lqc2(auStack_1a0);
          auVar17 = _vsubbc(auVar17,auVar15);
          auVar17 = _vaddbc(in_vf0,auVar17);
          auVar16 = _qmtc2(fVar14 / fVar13);
          auVar17 = _sqc2(auVar17);
          *pauVar10 = auVar17;
          auVar19 = _qmtc2(fVar13 * fVar14);
          auVar15 = _lqc2(auStack_1b0);
          auVar17 = _lqc2(auStack_1c0);
LAB_0025b144:
          auVar17 = _vsubbc(auVar17,auVar15);
          auVar17 = _vaddbc(in_vf0,auVar17);
          _vmove(auVar17);
          auVar15 = _vmulbc(in_vf0,auVar18);
          auVar17 = _sqc2(auVar17);
          *pauVar10 = auVar17;
          auVar17 = _vmove(auVar15);
          auVar17 = _vmulbc(auVar17,auVar16);
          auVar17 = _sqc2(auVar17);
          *pauVar10 = auVar17;
          auVar17 = _vmulbc(in_vf0,auVar19);
          auVar17 = _sqc2(auVar17);
          *pauVar10 = auVar17;
LAB_0025b464:
          pauVar4 = *(undefined1 (**) [16])(pauVar10[5] + 0xc);
        }
        else {
          auVar16 = _lqc2(*pauVar4);
          _sqc2(auVar16);
          _vmove(auVar16);
          auVar15 = _lqc2(pauVar4[1]);
          auVar20 = _vaddbc(in_vf0,auVar15);
          _vmove(auVar20);
          _sqc2(auVar15);
          _vmove(auVar15);
          auVar19 = _vaddbc(in_vf0,auVar16);
          auVar17 = _lqc2(pauVar4[2]);
          _vmove(auVar19);
          auVar22 = _vaddbc(in_vf0,auVar17);
          auVar23 = _vaddbc(in_vf0,auVar17);
          _sqc2(auVar17);
          _vmove(auVar17);
          auVar21 = _vaddbc(in_vf0,auVar16);
          auVar18 = _lqc2(pauVar4[3]);
          _vmove(auVar21);
          auVar16 = _vmulbc(auVar22,auVar18);
          auVar17 = _vmulbc(auVar23,auVar18);
          auVar24 = _vaddbc(in_vf0,auVar15);
          auVar15 = _vmulbc(auVar24,auVar18);
          auVar17 = _vadd(auVar16,auVar17);
          _sqc2(auVar20);
          auVar17 = _vadd(auVar17,auVar15);
          _sqc2(auVar19);
          auVar17 = _vsub(in_vf0,auVar17);
          _sqc2(auVar21);
          _auStack_180 = _sqc2(auVar22);
          _sqc2(auVar18);
          auStack_170 = _sqc2(auVar23);
          auStack_160 = _sqc2(auVar24);
          auStack_150 = _sqc2(auVar17);
          auVar18 = _lqc2(auStack_1c0);
          auVar21 = _lqc2(auStack_1b0);
          auVar20 = _lqc2(auStack_1a0);
          auVar17 = _lqc2(_auStack_180);
          _vmulabc(auVar18,auVar17);
          _vmaddabc(auVar21,auVar17);
          auVar19 = _vmaddbc(auVar20,auVar17);
          auVar22 = _lqc2(auStack_190);
          _auStack_100 = _sqc2(auVar19);
          auVar17 = _lqc2(auStack_170);
          _vmulabc(auVar18,auVar17);
          _vmaddabc(auVar21,auVar17);
          auVar16 = _vmaddbc(auVar20,auVar17);
          auStack_f0 = _sqc2(auVar16);
          auVar17 = _lqc2(auStack_160);
          _vmulabc(auVar18,auVar17);
          _vmaddabc(auVar21,auVar17);
          auVar15 = _vmaddbc(auVar20,auVar17);
          auStack_e0 = _sqc2(auVar15);
          auVar17 = _lqc2(auStack_150);
          _vmulabc(auVar18,auVar17);
          _vmaddabc(auVar21,auVar17);
          _vmaddabc(auVar20,auVar17);
          auVar17 = _vmaddbc(auVar22,in_vf0);
          auStack_130 = _sqc2(auVar16);
          auStack_120 = _sqc2(auVar15);
          auStack_110 = _sqc2(auVar17);
          auStack_d0 = _sqc2(auVar17);
          auStack_140 = _sqc2(auVar19);
          pauVar10 = *(undefined1 (**) [16])(iVar11 + 0x58);
          _lqc2(pauVar10[4]);
          auVar17 = _vmove(auVar19);
          auVar17 = _sqc2(auVar17);
          pauVar10[4] = auVar17;
          auVar17 = _lqc2(auStack_130);
          _lqc2(pauVar10[5]);
          auVar17 = _vmove(auVar17);
          _lqc2(pauVar10[6]);
          auVar17 = _sqc2(auVar17);
          pauVar10[5] = auVar17;
          _lqc2(pauVar10[1]);
          auVar17 = _lqc2(auStack_120);
          auVar17 = _vmove(auVar17);
          auVar17 = _sqc2(auVar17);
          pauVar10[6] = auVar17;
          auVar17 = _lqc2(auStack_110);
          auVar17 = _vmove(auVar17);
          auVar17 = _sqc2(auVar17);
          pauVar10[1] = auVar17;
          auVar16 = _lqc2(auStack_130);
          auVar17 = _lqc2(auStack_140);
          auVar17 = _vaddbc(auVar17,auVar16);
          auVar15 = _lqc2(auStack_120);
          auVar17 = _vaddbc(auVar17,auVar15);
          auVar17 = _qmfc2(auVar17._0_4_);
          if (0.0 < auVar17._0_4_) {
            fVar13 = SQRT(auVar17._0_4_ + 1.0);
            auVar17 = _lqc2(auStack_130);
            _lqc2(*pauVar10);
            auVar17 = _vsubbc(auVar17,auVar15);
            auVar17 = _vaddbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            auVar18 = _qmtc2(0);
            auVar15 = _lqc2(auStack_140);
            auVar17 = _lqc2(auStack_120);
            auVar17 = _vsubbc(auVar17,auVar15);
            auVar17 = _vaddbc(in_vf0,auVar17);
            auVar16 = _qmtc2(fVar14 / fVar13);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            auVar19 = _qmtc2(fVar13 * fVar14);
            auVar15 = _lqc2(auStack_130);
            auVar17 = _lqc2(auStack_140);
            goto LAB_0025b144;
          }
          auVar17 = _sqc2(auVar16);
          auVar15 = _lqc2(auStack_140);
          auVar15 = _qmfc2(auVar15._0_4_);
          auStack_100._4_4_ = auVar17._4_4_;
          auVar17 = _lqc2(auStack_120);
          if ((float)auStack_100._4_4_ <= auVar15._0_4_) {
            _auStack_100 = _sqc2(auVar17);
            auVar17 = _lqc2(auStack_140);
            auVar17 = _qmfc2(auVar17._0_4_);
            bVar1 = auVar17._0_4_ < fStack_f8;
            uVar7 = 0;
            if (bVar1) {
              uVar7 = 2;
            }
          }
          else {
            auVar17 = _sqc2(auVar17);
            fStack_f8 = auVar17._8_4_;
            auVar17 = _lqc2(auStack_130);
            auVar17 = _sqc2(auVar17);
            auStack_100._4_4_ = auVar17._4_4_;
            bVar1 = (float)auStack_100._4_4_ < fStack_f8;
            uVar7 = 1;
            _auStack_100 = auVar17;
            if (bVar1) {
              uVar7 = 2;
            }
          }
          if (uVar7 == 1) {
            auVar15 = _lqc2(auStack_120);
            auVar16 = _qmtc2(0x3f800000);
            auVar17 = _lqc2(auStack_140);
            auVar15 = _vaddbc(auVar15,auVar17);
            auVar17 = _lqc2(auStack_130);
            auVar17 = _vsubbc(auVar17,auVar15);
            auVar17 = _vaddbc(auVar17,auVar16);
            _auStack_100 = _sqc2(auVar17);
            _lqc2(*pauVar10);
            fVar13 = fVar14 / SQRT((float)auStack_100._4_4_);
            auVar17 = _qmtc2(SQRT((float)auStack_100._4_4_) * fVar14);
            auVar17 = _vaddbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            auVar16 = _qmtc2(fVar13);
            auVar18 = _qmtc2(fVar13);
            auVar15 = _lqc2(auStack_140);
            auVar17 = _lqc2(auStack_120);
            auVar17 = _vsubbc(auVar17,auVar15);
            auVar17 = _vmulbc(auVar17,auVar16);
            auVar17 = _vmulbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            auVar15 = _lqc2(auStack_120);
            auVar17 = _lqc2(auStack_130);
            auVar17 = _vaddbc(auVar17,auVar15);
            auVar17 = _vmulbc(auVar17,auVar18);
            auVar17 = _vaddbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            auVar17 = _lqc2(auStack_130);
            auVar15 = _lqc2(auStack_140);
            auVar17 = _vaddbc(auVar17,auVar15);
            auVar17 = _vmulbc(auVar17,auVar16);
            auVar17 = _vaddbc(in_vf0,auVar17);
            auVar17 = _sqc2(auVar17);
            *pauVar10 = auVar17;
            goto LAB_0025b464;
          }
          if (uVar7 < 2) {
            auVar17 = _lqc2(auStack_130);
            if (uVar7 == 0) {
              auVar16 = _qmtc2(0x3f800000);
              auVar15 = _lqc2(auStack_120);
              auVar15 = _vaddbc(auVar17,auVar15);
              auVar17 = _lqc2(auStack_140);
              auVar17 = _vsubbc(auVar17,auVar15);
              auVar17 = _vaddbc(auVar17,auVar16);
              auVar17 = _qmfc2(auVar17._0_4_);
              _lqc2(*pauVar10);
              fVar13 = fVar14 / SQRT(auVar17._0_4_);
              auVar17 = _qmtc2(SQRT(auVar17._0_4_) * fVar14);
              auVar17 = _vaddbc(in_vf0,auVar17);
              auVar17 = _sqc2(auVar17);
              *pauVar10 = auVar17;
              auVar16 = _qmtc2(fVar13);
              auVar18 = _qmtc2(fVar13);
              auVar15 = _lqc2(auStack_120);
              auVar17 = _lqc2(auStack_130);
              auVar17 = _vsubbc(auVar17,auVar15);
              auVar17 = _vmulbc(auVar17,auVar16);
              auVar17 = _vmulbc(in_vf0,auVar17);
              auVar17 = _sqc2(auVar17);
              *pauVar10 = auVar17;
              auVar15 = _lqc2(auStack_130);
              auVar17 = _lqc2(auStack_140);
              auVar17 = _vaddbc(auVar17,auVar15);
              auVar17 = _vmulbc(auVar17,auVar18);
              auVar17 = _vaddbc(in_vf0,auVar17);
              auVar17 = _sqc2(auVar17);
              *pauVar10 = auVar17;
              auVar17 = _lqc2(auStack_140);
              auVar15 = _lqc2(auStack_120);
              auVar17 = _vaddbc(auVar17,auVar15);
              auVar17 = _vmulbc(auVar17,auVar16);
              auVar17 = _vaddbc(in_vf0,auVar17);
              auVar17 = _sqc2(auVar17);
              *pauVar10 = auVar17;
              goto LAB_0025b464;
            }
            pauVar4 = *(undefined1 (**) [16])(pauVar10[5] + 0xc);
          }
          else {
            auVar17 = _lqc2(auStack_140);
            if (uVar7 == 2) {
              auVar16 = _qmtc2(0x3f800000);
              auVar15 = _lqc2(auStack_130);
              auVar15 = _vaddbc(auVar17,auVar15);
              auVar17 = _lqc2(auStack_120);
              auVar17 = _vsubbc(auVar17,auVar15);
              auVar17 = _vaddbc(auVar17,auVar16);
              _auStack_100 = _sqc2(auVar17);
              _lqc2(*pauVar10);
              fVar13 = fVar14 / SQRT(fStack_f8);
              auVar17 = _qmtc2(SQRT(fStack_f8) * fVar14);
              auVar17 = _vaddbc(in_vf0,auVar17);
              auVar17 = _sqc2(auVar17);
              *pauVar10 = auVar17;
              auVar16 = _qmtc2(fVar13);
              auVar18 = _qmtc2(fVar13);
              auVar15 = _lqc2(auStack_130);
              auVar17 = _lqc2(auStack_140);
              auVar17 = _vsubbc(auVar17,auVar15);
              auVar17 = _vmulbc(auVar17,auVar16);
              auVar17 = _vmulbc(in_vf0,auVar17);
              auVar17 = _sqc2(auVar17);
              *pauVar10 = auVar17;
              auVar15 = _lqc2(auStack_140);
              auVar17 = _lqc2(auStack_120);
              auVar17 = _vaddbc(auVar17,auVar15);
              auVar17 = _vmulbc(auVar17,auVar18);
              auVar17 = _vaddbc(in_vf0,auVar17);
              auVar17 = _sqc2(auVar17);
              *pauVar10 = auVar17;
              auVar17 = _lqc2(auStack_120);
              auVar15 = _lqc2(auStack_130);
LAB_0025b454:
              auVar17 = _vaddbc(auVar17,auVar15);
              auVar17 = _vmulbc(auVar17,auVar16);
              auVar17 = _vaddbc(in_vf0,auVar17);
              auVar17 = _sqc2(auVar17);
              *pauVar10 = auVar17;
              goto LAB_0025b464;
            }
            pauVar4 = *(undefined1 (**) [16])(pauVar10[5] + 0xc);
          }
        }
LAB_0025b468:
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          auVar16 = _lqc2(*pauVar4);
          _lqc2(pauVar10[7]);
          _lqc2(pauVar10[8]);
          auVar23 = _lqc2(pauVar10[4]);
          auVar22 = _lqc2(pauVar10[5]);
          auVar21 = _lqc2(pauVar10[6]);
          auVar17 = _vmulbc(auVar23,auVar16);
          auVar15 = _vmulbc(auVar22,auVar16);
          auVar16 = _vmulbc(auVar21,auVar16);
          auVar18 = _vaddbc(in_vf0,auVar23);
          auVar19 = _vaddbc(in_vf0,auVar22);
          auVar20 = _vaddbc(in_vf0,auVar21);
          _vmulabc(auVar17,auVar23);
          _vmaddabc(auVar15,auVar22);
          auVar24 = _vmaddbc(auVar16,auVar21);
          _vmulabc(auVar17,auVar23);
          _vmaddabc(auVar15,auVar22);
          _vmaddbc(auVar16,auVar21);
          _vmulabc(auVar18,auVar17);
          _vmaddabc(auVar19,auVar15);
          auVar15 = _vmaddbc(auVar20,auVar16);
          auVar17 = _sqc2(auVar24);
          pauVar10[7] = auVar17;
          auVar17 = _sqc2(auVar15);
          pauVar10[8] = auVar17;
          *(undefined4 *)(pauVar10[7] + 0xc) = *(undefined4 *)pauVar4[1];
        }
      }
      *(undefined4 *)(iVar11 + 0x10) = auStack_1c0._0_4_;
      *(undefined4 *)(iVar11 + 0x14) = auStack_1c0._4_4_;
      *(undefined4 *)(iVar11 + 0x18) = auStack_1c0._8_4_;
      *(undefined4 *)(iVar11 + 0x1c) = auStack_1c0._12_4_;
      *(undefined4 *)(iVar11 + 0x20) = auStack_1b0._0_4_;
      *(undefined4 *)(iVar11 + 0x24) = auStack_1b0._4_4_;
      *(undefined4 *)(iVar11 + 0x28) = auStack_1b0._8_4_;
      *(undefined4 *)(iVar11 + 0x2c) = auStack_1b0._12_4_;
      *(undefined4 *)(iVar11 + 0x30) = auStack_1a0._0_4_;
      *(undefined4 *)(iVar11 + 0x34) = auStack_1a0._4_4_;
      *(undefined4 *)(iVar11 + 0x38) = auStack_1a0._8_4_;
      *(undefined4 *)(iVar11 + 0x3c) = auStack_1a0._12_4_;
      *(undefined4 *)(iVar11 + 0x40) = auStack_190._0_4_;
      *(undefined4 *)(iVar11 + 0x44) = auStack_190._4_4_;
      *(undefined4 *)(iVar11 + 0x48) = auStack_190._8_4_;
      *(undefined4 *)(iVar11 + 0x4c) = auStack_190._12_4_;
      if (iVar12 == 0) {
        FUN_00262668(param_1 + 10,100);
      }
      else {
        FUN_00262668(param_1 + iVar12 * 4 + 10,10);
      }
      iVar11 = *piVar9;
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 1;
      *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iStack_b4 + 0x3ffff8);
    } while (iVar12 < 2);
    iVar11 = iStack_bc + 1;
    if (3 < iStack_bc) {
      param_1[0x22d1] = 1;
      param_1[0x22c0] = 0;
      FUN_00107b08(0x40f0f0,0xb,0);
      FUN_00107ab8(0x40f0f0,0,0);
      return;
    }
  } while( true );
}


// ==== FUN_0025b5d0 @ 0025b5d0 ====

undefined4 FUN_0025b5d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar1 = FUN_0032e320(*param_1);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x360));
  fVar5 = *(float *)(DAT_0040f0e0 + 0x2013c);
  iVar3 = 0x6d;
  *(float *)(iVar1 + 0x380) = fVar5;
  auVar7 = _qmtc2(fVar5);
  auVar6 = _vmulbc(auVar6,auVar7);
  puVar4 = (undefined1 *)((int)param_1 + 0x231d);
  auVar6 = _vmulbc(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  *(undefined1 (*) [16])(iVar1 + 0x370) = auVar6;
  *(float *)(iVar1 + 900) = 1.0 / fVar5;
  do {
    *puVar4 = 0;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar3);
  iVar1 = 0xa5;
  puVar2 = &DAT_0043f684;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  puVar4 = (undefined1 *)((int)param_1 + 0x8b41);
  do {
    *puVar4 = 0;
    iVar1 = iVar1 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar1);
  param_1[0x22c1] = 0xffffffff;
  param_1[0x22d1] = 0x1c;
  param_1[0x22c0] = 0;
  return 1;
}


// ==== FUN_0025b6d0 @ 0025b6d0 ====

void FUN_0025b6d0(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 in_a2_qw [16];
  int iVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  puVar19 = (undefined4 *)param_1;
  iVar16 = 0;
  puVar13 = puVar19;
  do {
    puVar13 = puVar13 + 0x14;
    if (*(char *)((int)puVar19 + iVar16 + 0x22b0) != '\0') {
      FUN_0025d098(puVar13);
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x6e);
  iVar16 = 0;
  puVar13 = puVar19 + 0x8c8;
  do {
    if (*(char *)((int)puVar19 + iVar16 + 0x2960) != '\0') {
      FUN_0025d098(puVar13);
    }
    iVar16 = iVar16 + 1;
    puVar13 = puVar13 + 0x14;
  } while (iVar16 < 0x14);
  puVar13 = puVar19 + 0x22c2;
  iVar16 = 0;
  do {
    if (*(char *)((int)puVar19 + iVar16 + 0x8b40) != '\0') {
      FUN_00260cf8(puVar13);
    }
    iVar16 = iVar16 + 1;
    puVar13 = puVar13 + 7;
  } while (iVar16 < 2);
  FUN_0032e328(*puVar19);
  if (DAT_003bfb28 != 0) {
    DAT_003bfb28 = 0;
  }
  iVar16 = 0;
  puVar13 = puVar19;
  do {
    puVar13 = puVar13 + 0x14;
    if (*(char *)((int)puVar19 + iVar16 + 0x22b0) != '\0') {
      FUN_0025d110(puVar13);
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x6e);
  iVar16 = 0;
  puVar13 = puVar19 + 0x8c8;
  do {
    if (*(char *)((int)puVar19 + iVar16 + 0x2960) != '\0') {
      FUN_0025d110(puVar13);
    }
    iVar16 = iVar16 + 1;
    puVar13 = puVar13 + 0x14;
  } while (iVar16 < 0x14);
  puVar13 = puVar19 + 0x22c2;
  iVar16 = 0;
  do {
    if (*(char *)((int)puVar19 + iVar16 + 0x8b40) != '\0') {
      FUN_00260f80(puVar13);
    }
    iVar16 = iVar16 + 1;
    puVar13 = puVar13 + 7;
  } while (iVar16 < 2);
  puVar19[0x22c0] = 0;
  iVar16 = FUN_0032e320(*puVar19);
  iVar16 = *(int *)(iVar16 + 0x34);
  if (((0 < iVar16) && (iVar17 = 0, 0 < iVar16)) && (iVar16 < 0x208)) {
    do {
      iVar7 = FUN_0032e320(*puVar19);
      if (*(int *)(iVar7 + 0x34) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 0xc) + iVar17 * 0x70;
      }
      lVar9 = FUN_0025cc48(param_1,*(undefined4 *)(iVar7 + 0x60));
      lVar10 = FUN_0025cc48(param_1,*(undefined4 *)(iVar7 + 100));
      in_a2_qw._0_8_ = (long)*(int *)(*(int *)(iVar7 + 0x60) + 0x8c) & 1;
      uVar18 = *(uint *)(*(int *)(iVar7 + 100) + 0x8c) & 1;
      if (((in_a2_qw._0_8_ != 0) && (lVar9 != 0)) &&
         (iVar1 = *(int *)((int)lVar9 + 0x30), iVar1 != 0)) {
        if ((*(int *)(iVar1 + 0xc4) - 3U < 2) || (bVar3 = false, *(int *)(iVar1 + 0xc4) == 7)) {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(char *)(iVar1 + 0x13d) == '\0') {
            cVar6 = '\0';
          }
          else {
            cVar6 = *(char *)(*(int *)(iVar1 + 0x11c) + 0x44);
          }
          if (cVar6 != '\0') {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = in_a2_qw._8_8_;
            in_a2_qw = auVar20 << 0x40;
          }
        }
      }
      if (((uVar18 != 0) && (lVar10 != 0)) && (iVar1 = *(int *)((int)lVar10 + 0x30), iVar1 != 0)) {
        if ((*(int *)(iVar1 + 0xc4) - 3U < 2) || (bVar3 = false, *(int *)(iVar1 + 0xc4) == 7)) {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(char *)(iVar1 + 0x13d) == '\0') {
            cVar6 = '\0';
          }
          else {
            cVar6 = *(char *)(*(int *)(iVar1 + 0x11c) + 0x44);
          }
          if (cVar6 != '\0') {
            uVar18 = 0;
          }
        }
      }
      lVar11 = in_a2_qw._0_8_;
      if ((((lVar9 != 0) || (lVar11 != 0)) && ((lVar10 != 0 || (uVar18 != 0)))) &&
         ((lVar9 != 0 || (lVar10 != 0)))) {
        auVar22 = _vaddbc(in_vf0,in_vf0);
        auVar24 = _vmove(auVar22);
        puVar14 = (undefined8 *)(puVar19 + puVar19[0x22c0] * 0xc + 0xa60);
        uVar25 = *(undefined4 *)(iVar7 + 0x34);
        uVar4 = *(undefined4 *)(iVar7 + 0x38);
        uVar5 = *(undefined4 *)(iVar7 + 0x3c);
        *(undefined4 *)puVar14 = *(undefined4 *)(iVar7 + 0x30);
        *(undefined4 *)((int)puVar14 + 4) = uVar25;
        *(undefined4 *)(puVar14 + 1) = uVar4;
        *(undefined4 *)((int)puVar14 + 0xc) = uVar5;
        auVar21 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x40));
        auVar20 = _vmul(auVar21,auVar21);
        *(undefined4 *)(puVar14 + 4) = 0;
        _vaddabc(auVar20,auVar20);
        auVar20 = _vmaddbc(auVar22,auVar20);
        auVar22 = _qmfc2(auVar20._0_4_);
        auVar20 = _sqc2(auVar21);
        *(undefined1 (*) [16])(puVar14 + 2) = auVar20;
        if (2.3283064e-10 <= auVar22._0_4_) {
          auVar22 = _lqc2(*(undefined1 (*) [16])(puVar14 + 2));
          auVar20 = _vmul(auVar22,auVar22);
          _vaddabc(auVar20,auVar20);
          auVar20 = _vmaddbc(auVar24,auVar20);
          auVar22 = _vmove(auVar22);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar20);
          uVar25 = _vwaitq();
          auVar22 = _vmulq(auVar22,uVar25);
          auVar20 = _sqc2(auVar22);
          *(undefined1 (*) [16])(puVar14 + 2) = auVar20;
          if (lVar11 == 0) {
            auVar23 = _vaddbc(in_vf0,in_vf0);
            auVar21 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x30));
            _sqc2(auVar21);
            iVar1 = *(int *)(iVar7 + 0x60);
            auVar20 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
            auVar20 = _vsub(auVar21,auVar20);
            auVar21 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
            _lqc2(auStack_d0);
            _vopmula(auVar21,auVar20);
            auVar21 = _vopmsub(auVar20,auVar21);
            auVar20 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
            auVar21 = _vadd(auVar21,auVar20);
            auVar20 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 900));
            auStack_d0 = _sqc2(auVar21);
            auVar21 = _vmulbc(auVar21,auVar20);
            auVar20 = _vmul(auVar22,auVar21);
            _vaddabc(auVar20,auVar20);
            auVar20 = _vmaddbc(auVar23,auVar20);
            auVar20 = _vsub(in_vf0,auVar20);
            auVar20 = _qmfc2(auVar20._0_4_);
            if (0.0 < auVar20._0_4_) {
              auVar22 = _vmul(auVar21,auVar21);
              _vaddabc(auVar22,auVar22);
              auVar22 = _vmaddbc(auVar24,auVar22);
              _vnop();
              _vnop();
              _vnop();
              _vsqrt(auVar22);
              auVar22 = _vaddbc(in_vf0,in_vf0);
              uVar25 = _vwaitq();
              auVar22 = _vmulq(auVar22,uVar25);
              auVar22 = _qmfc2(auVar22._0_4_);
              *(float *)(puVar14 + 4) =
                   *(float *)(puVar14 + 4) +
                   auVar22._0_4_ * (1.0 / *(float *)(iVar1 + 0x7c)) * auVar20._0_4_;
            }
          }
          if (uVar18 == 0) {
            auVar23 = _vaddbc(in_vf0,in_vf0);
            auVar21 = _lqc2(*(undefined1 (*) [16])(puVar14 + 2));
            auVar22 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x30));
            _sqc2(auVar22);
            iVar1 = *(int *)(iVar7 + 100);
            auVar20 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
            auVar20 = _vsub(auVar22,auVar20);
            auVar22 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
            _lqc2(auStack_c0);
            _vopmula(auVar22,auVar20);
            auVar22 = _vopmsub(auVar20,auVar22);
            auVar20 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
            auVar22 = _vadd(auVar22,auVar20);
            auVar20 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 900));
            auStack_c0 = _sqc2(auVar22);
            auVar22 = _vmulbc(auVar22,auVar20);
            auVar20 = _vmul(auVar21,auVar22);
            _vaddabc(auVar20,auVar20);
            auVar20 = _vmaddbc(auVar23,auVar20);
            auVar20 = _vsub(in_vf0,auVar20);
            auVar20 = _qmfc2(auVar20._0_4_);
            if (0.0 < auVar20._0_4_) {
              auVar22 = _vmul(auVar22,auVar22);
              _vaddabc(auVar22,auVar22);
              auVar22 = _vmaddbc(auVar24,auVar22);
              _vnop();
              _vnop();
              _vnop();
              _vsqrt(auVar22);
              auVar22 = _vaddbc(in_vf0,in_vf0);
              uVar25 = _vwaitq();
              auVar22 = _vmulq(auVar22,uVar25);
              auVar22 = _qmfc2(auVar22._0_4_);
              *(float *)(puVar14 + 4) =
                   *(float *)(puVar14 + 4) +
                   auVar22._0_4_ * (1.0 / *(float *)(iVar1 + 0x7c)) * auVar20._0_4_;
            }
          }
          if (lVar11 != 0) {
            *(undefined4 *)((int)puVar14 + 0x24) = 0;
          }
          else {
            *(undefined4 *)((int)puVar14 + 0x24) = *(undefined4 *)((int)lVar9 + 0x30);
          }
          if (uVar18 != 0) {
            *(undefined4 *)(puVar14 + 5) = 0;
          }
          else {
            *(undefined4 *)(puVar14 + 5) = *(undefined4 *)((int)lVar10 + 0x30);
          }
          if ((*(int *)((int)puVar14 + 0x24) != 0) || (*(int *)(puVar14 + 5) != 0)) {
            uVar15 = 0;
            if (lVar11 != 0) {
              uVar15 = FUN_0025cca0(param_1,*(undefined4 *)(iVar7 + 0x60));
            }
            if (uVar18 == 0) {
              iVar7 = *(int *)((int)puVar14 + 0x24);
            }
            else {
              lVar9 = FUN_0025cca0(param_1,*(undefined4 *)(iVar7 + 100));
              uVar15 = (ulong)(uVar15 != 0 || lVar9 != 0);
              iVar7 = *(int *)((int)puVar14 + 0x24);
            }
            *(char *)((int)puVar14 + 0x2c) = (char)uVar15;
            if (iVar7 == 0) {
              *(undefined1 *)(*(int *)(*(int *)(puVar14 + 5) + 0xb4) + 0x3d) = 1;
              uVar25 = *(undefined4 *)((int)puVar14 + 4);
              uVar4 = *(undefined4 *)(puVar14 + 1);
              uVar5 = *(undefined4 *)((int)puVar14 + 0xc);
              puVar13 = *(undefined4 **)(*(int *)(puVar14 + 5) + 0xb4);
              *puVar13 = *(undefined4 *)puVar14;
              puVar13[1] = uVar25;
              puVar13[2] = uVar4;
              puVar13[3] = uVar5;
              auVar2 = *(undefined1 (*) [12])(puVar14 + 2);
              uVar25 = *(undefined4 *)((int)puVar14 + 0x1c);
              iVar7 = *(int *)(*(int *)(puVar14 + 5) + 0xb4);
              *(int *)(iVar7 + 0x10) = auVar2._0_4_;
              *(int *)(iVar7 + 0x14) = auVar2._4_4_;
              *(int *)(iVar7 + 0x18) = auVar2._8_4_;
              *(undefined4 *)(iVar7 + 0x1c) = uVar25;
              iVar7 = *(int *)(puVar14 + 5);
LAB_0025bda0:
              *(undefined4 *)(*(int *)(iVar7 + 0xb4) + 0x20) = *(undefined4 *)(puVar14 + 4);
            }
            else {
              if (*(int *)(puVar14 + 5) == 0) {
                *(undefined1 *)(*(int *)(iVar7 + 0xb4) + 0x3d) = 1;
                uVar25 = *(undefined4 *)((int)puVar14 + 4);
                uVar4 = *(undefined4 *)(puVar14 + 1);
                uVar5 = *(undefined4 *)((int)puVar14 + 0xc);
                puVar13 = *(undefined4 **)(*(int *)((int)puVar14 + 0x24) + 0xb4);
                *puVar13 = *(undefined4 *)puVar14;
                puVar13[1] = uVar25;
                puVar13[2] = uVar4;
                puVar13[3] = uVar5;
                auVar2 = *(undefined1 (*) [12])(puVar14 + 2);
                uVar25 = *(undefined4 *)((int)puVar14 + 0x1c);
                iVar7 = *(int *)(*(int *)((int)puVar14 + 0x24) + 0xb4);
                *(int *)(iVar7 + 0x10) = auVar2._0_4_;
                *(int *)(iVar7 + 0x14) = auVar2._4_4_;
                *(int *)(iVar7 + 0x18) = auVar2._8_4_;
                *(undefined4 *)(iVar7 + 0x1c) = uVar25;
                iVar7 = *(int *)((int)puVar14 + 0x24);
                goto LAB_0025bda0;
              }
              *(undefined1 *)(*(int *)(iVar7 + 0xb4) + 0x3e) = 1;
              *(undefined1 *)(*(int *)(*(int *)(puVar14 + 5) + 0xb4) + 0x3e) = 1;
              iVar7 = *(int *)(*(int *)((int)puVar14 + 0x24) + 0xc4);
              if ((iVar7 - 3U < 2) || (bVar3 = false, iVar7 == 7)) {
                bVar3 = true;
              }
              if (bVar3) {
                if ((*(int *)(*(int *)(puVar14 + 5) + 0xc4) - 3U < 2) ||
                   (bVar3 = false, *(int *)(*(int *)(puVar14 + 5) + 0xc4) == 7)) {
                  bVar3 = true;
                }
                if (bVar3) {
                  iVar7 = *(int *)(*(int *)((int)puVar14 + 0x24) + 0x10);
                  (**(code **)(iVar7 + 0x54))
                            (*(undefined4 *)(puVar14 + 4),
                             *(int *)((int)puVar14 + 0x24) + (int)*(short *)(iVar7 + 0x50),*puVar14)
                  ;
                  auVar20 = _lqc2(*(undefined1 (*) [16])(puVar14 + 2));
                  iVar7 = *(int *)(*(int *)(puVar14 + 5) + 0x10);
                  auVar20 = _vsub(in_vf0,auVar20);
                  in_a2_qw = _qmfc2(auVar20._0_4_);
                  (**(code **)(iVar7 + 0x54))
                            (*(undefined4 *)(puVar14 + 4),
                             *(int *)(puVar14 + 5) + (int)*(short *)(iVar7 + 0x50),*puVar14,
                             in_a2_qw._0_8_,*(undefined4 *)((int)puVar14 + 0x24));
                }
              }
            }
            if (uVar18 != 0 || lVar11 != 0) {
              iVar7 = *(int *)((int)puVar14 + 0x24);
LAB_0025bf60:
              if (iVar7 == 0) {
                iVar7 = puVar19[0x22c0];
              }
              else {
                iVar1 = *(int *)(puVar14 + 5);
                if (iVar1 == 0) {
LAB_0025bfc4:
                  iVar7 = puVar19[0x22c0];
                }
                else if (*(int *)(iVar7 + 0xc4) == 1) {
                  if (*(int *)(iVar1 + 0xc4) == 1) {
                    FUN_00134bb8(*(undefined4 *)(puVar14 + 4),iVar7,*puVar14);
                    auVar20 = _lqc2(*(undefined1 (*) [16])(puVar14 + 2));
                    auVar20 = _vsub(in_vf0,auVar20);
                    in_a2_qw = _qmfc2(auVar20._0_4_);
                    FUN_00134bb8(*(undefined4 *)(puVar14 + 4),iVar1,*puVar14,in_a2_qw._0_8_,iVar7);
                    goto LAB_0025bfc4;
                  }
                  iVar7 = puVar19[0x22c0];
                }
                else {
                  iVar7 = puVar19[0x22c0];
                }
              }
            }
            else {
              iVar7 = *(int *)((int)puVar14 + 0x24);
              if (iVar7 != 0) {
                iVar1 = *(int *)(puVar14 + 5);
                if (iVar1 != 0) {
                  if (*(int *)(iVar7 + 0xc4) - 1U < 2) {
                    auVar21._8_8_ = in_a2_qw._8_8_;
                    auVar22._8_8_ = 0;
                    auVar22._0_8_ = auVar21._8_8_;
                    if ((*(int *)(iVar1 + 0xc4) - 3U < 2) ||
                       (bVar3 = false, in_a2_qw = auVar22 << 0x40, *(int *)(iVar1 + 0xc4) == 7)) {
                      auVar21._0_8_ = 1;
                      bVar3 = true;
                      in_a2_qw = auVar21;
                    }
                    if (!bVar3) {
                      iVar8 = *(int *)(iVar1 + 0xc4);
                      goto LAB_0025bef0;
                    }
                    iVar12 = *(int *)((int)puVar14 + 0x24);
                  }
                  else {
                    iVar8 = *(int *)(iVar1 + 0xc4);
LAB_0025bef0:
                    iVar12 = 0;
                    if (iVar8 - 1U < 2) {
                      if ((*(int *)(iVar7 + 0xc4) - 3U < 2) ||
                         (bVar3 = false, *(int *)(iVar7 + 0xc4) == 7)) {
                        bVar3 = true;
                      }
                      if (bVar3) {
                        iVar12 = iVar1;
                      }
                    }
                  }
                  if (iVar12 == 0) {
                    iVar7 = *(int *)((int)puVar14 + 0x24);
                    goto LAB_0025bf60;
                  }
                  auVar2._4_8_ = in_a2_qw._8_8_;
                  auVar2._0_4_ = *(undefined4 *)((int)puVar14 + 0x14);
                  in_a2_qw._0_8_ = auVar2._0_8_ << 0x20;
                  in_a2_qw._8_4_ = *(undefined4 *)(puVar14 + 3);
                  in_a2_qw._12_4_ = *(undefined4 *)((int)puVar14 + 0x1c);
                  (**(code **)(*(int *)(iVar12 + 0x10) + 0x54))
                            (*(undefined4 *)(puVar14 + 4),
                             iVar12 + *(short *)(*(int *)(iVar12 + 0x10) + 0x50),*puVar14);
                }
                iVar7 = *(int *)((int)puVar14 + 0x24);
                goto LAB_0025bf60;
              }
              iVar7 = puVar19[0x22c0];
            }
            puVar19[0x22c0] = iVar7 + 1;
          }
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar16);
  }
  return;
}


// ==== FUN_0025c020 @ 0025c020 ====

void FUN_0025c020(void)

{
  return;
}


// ==== FUN_0025c028 @ 0025c028 ====

undefined4 FUN_0025c028(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b44) = 0x37;
  return 1;
}


// ==== FUN_0025c040 @ 0025c040 ====

void FUN_0025c040(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2 + 0x700;
  iVar6 = 3;
  cVar1 = *(char *)(param_2 + 0x39);
  piVar4 = param_1 + cVar1 + 2;
  do {
    **(int **)(*piVar4 + 0xc) = iVar5;
    if (*(int *)(iVar5 + 0x40) != 0) {
      FUN_0032cb58(*param_1,*piVar4,1);
      iVar2 = *(int *)(*(int *)(*piVar4 + 0xc) + 0x58);
      piVar3 = (int *)FUN_0032e320(*param_1);
      *(undefined4 *)(&DAT_0043f3f0 + ((iVar2 - *piVar3) * -0x45d1745d >> 4) * 4) = 0;
    }
    iVar5 = iVar5 + 0x60;
    iVar6 = iVar6 + -1;
    piVar4 = piVar4 + 2;
  } while (-1 < iVar6);
  FUN_002632b8(param_1 + cVar1 * 4 + 10,*param_1);
  iVar5 = FUN_002633d0(param_1 + cVar1 * 4 + 10);
  piVar4 = (int *)FUN_0032e320(*param_1);
  *(undefined4 *)(&DAT_0043f3f0 + ((iVar5 - *piVar4) * -0x45d1745d >> 4) * 4) = 0;
  return;
}


// ==== FUN_0025c180 @ 0025c180 ====

void FUN_0025c180(undefined4 *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 3;
  cVar1 = *(char *)(param_2 + 0x39);
  puVar3 = param_1 + cVar1 + 2;
  do {
    lVar2 = FUN_0032e1b0(*param_1,*puVar3);
    if (lVar2 != 0) {
      FUN_0032cde0(*param_1,*puVar3);
    }
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 2;
  } while (-1 < iVar4);
  FUN_00263360(param_1 + cVar1 * 4 + 10,*param_1);
  return;
}


// ==== FUN_0025c210 @ 0025c210 ====

undefined4 FUN_0025c210(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = FUN_0025c758();
  FUN_0025cef8(uVar3,param_2);
  iVar4 = (int)uVar3;
  *(undefined1 *)(iVar4 + 0x3c) = 0;
  FUN_0032cb58(*param_1,*(undefined4 *)(iVar4 + 0x34),4);
  iVar1 = *(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0xc) + 0x58);
  *(uint *)(iVar1 + 0x8c) = *(uint *)(iVar1 + 0x8c) | 8;
  iVar1 = *(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0xc) + 0x58);
  piVar2 = (int *)FUN_0032e320(*param_1);
  *(int *)(&DAT_0043f3f0 + ((iVar1 - *piVar2) * -0x45d1745d >> 4) * 4) = iVar4;
  return 1;
}


// ==== FUN_0025c2c8 @ 0025c2c8 ====

void FUN_0025c2c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (*(int *)(iVar1 + 0x350) != 0) {
    FUN_0025c4c8();
  }
  FUN_00136f10(param_2,1);
  FUN_0025c798(param_1,*(undefined4 *)(iVar1 + 0xb4));
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  return;
}


// ==== FUN_0025c320 @ 0025c320 ====

int FUN_0025c320(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = param_1 + 0x8b08;
  iVar5 = 0;
  iVar4 = -1;
  iVar2 = 0;
  fVar6 = -1.0;
  do {
    fVar7 = fVar6;
    iVar1 = iVar4;
    if ((*(char *)(param_1 + 0x8b40 + iVar2) == '\0') &&
       (fVar7 = *(float *)(iVar3 + 0x14), iVar1 = iVar2, *(float *)(iVar3 + 0x14) <= fVar6)) {
      fVar7 = fVar6;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x1c;
    fVar6 = fVar7;
  } while (iVar2 < 2);
  if (-1 < iVar4) {
    iVar5 = param_1 + iVar4 * 0x1c + 0x8b08;
    *(undefined1 *)(param_1 + 0x8b40 + iVar4) = 1;
  }
  return iVar5;
}


// ==== FUN_0025c3b8 @ 0025c3b8 ====

void FUN_0025c3b8(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = (int *)param_2;
  lVar4 = FUN_0032e1b0(*param_1,piVar7[3]);
  if (lVar4 == 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x30);
  }
  else {
    FUN_0032cde0(*param_1,piVar7[3]);
    uVar1 = *(undefined4 *)(param_3 + 0x30);
  }
  FUN_00260c70(param_2,uVar1);
  iVar2 = piVar7[3];
  FUN_0032cb58(*param_1,iVar2,4);
  iVar5 = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + iVar6 + 0x58);
      *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) | 8;
      iVar6 = iVar6 + 0x70;
    } while (iVar5 < *(int *)(iVar2 + 8));
  }
  *(undefined4 *)(*(int *)(param_3 + 0x34) + 0x18) = 0xc;
  FUN_0032b700(piVar7[3]);
  FUN_001a5b10(*(undefined4 *)(*piVar7 + 0x330),0);
  iVar2 = *piVar7;
  *(undefined4 *)(iVar2 + 0x150) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(iVar2 + 0x154) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(iVar2 + 0x158) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(iVar2 + 0x15c) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(iVar2 + 0x160) = *(undefined4 *)(iVar2 + 0x80);
  *(undefined4 *)(iVar2 + 0x164) = *(undefined4 *)(iVar2 + 0x84);
  *(undefined4 *)(iVar2 + 0x168) = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(iVar2 + 0x16c) = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(iVar2 + 0x170) = *(undefined4 *)(iVar2 + 0x90);
  *(undefined4 *)(iVar2 + 0x174) = *(undefined4 *)(iVar2 + 0x94);
  *(undefined4 *)(iVar2 + 0x178) = *(undefined4 *)(iVar2 + 0x98);
  *(undefined4 *)(iVar2 + 0x17c) = *(undefined4 *)(iVar2 + 0x9c);
  *(undefined4 *)(iVar2 + 0x180) = *(undefined4 *)(iVar2 + 0xa0);
  *(undefined4 *)(iVar2 + 0x184) = *(undefined4 *)(iVar2 + 0xa4);
  *(undefined4 *)(iVar2 + 0x188) = *(undefined4 *)(iVar2 + 0xa8);
  *(undefined4 *)(iVar2 + 0x18c) = *(undefined4 *)(iVar2 + 0xac);
  return;
}


// ==== FUN_0025c4c8 @ 0025c4c8 ====

void FUN_0025c4c8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x22c2;
  iVar2 = 0;
  do {
    if (puVar1 == param_2) {
      FUN_0032cde0(*param_1,puVar1[3]);
      FUN_0032cb58(*param_1,puVar1[3],1);
      FUN_00260fa0(puVar1);
      *(undefined1 *)((int)param_1 + iVar2 + 0x8b40) = 0;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (iVar2 < 2);
  return;
}


// ==== FUN_0025c558 @ 0025c558 ====

undefined4
FUN_0025c558(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  lVar4 = FUN_0025c6b8(param_1,param_4,param_5);
  if (lVar4 == 0) {
    return 0;
  }
  FUN_0025cef8(lVar4,param_2);
  iVar6 = (int)lVar4;
  *(undefined1 *)(iVar6 + 0x3c) = 1;
  puVar7 = (undefined4 *)param_1;
  if (*(char *)((int)param_2 + 0x13b) == '\0') {
    if ((*(ushort *)(*(int *)((int)param_2 + 0xb4) + 0x40) & 4) == 0) {
      uVar1 = *puVar7;
      goto LAB_0025c5d0;
    }
    uVar5 = 4;
    if (param_3 == 0) {
      FUN_0032cb58(*puVar7,*(undefined4 *)(iVar6 + 0x34),4);
      FUN_0032b798(*(undefined4 *)(iVar6 + 0x34));
      iVar2 = *(int *)(iVar6 + 0x34);
      goto LAB_0025c60c;
    }
    uVar1 = *puVar7;
  }
  else {
    uVar1 = *puVar7;
LAB_0025c5d0:
    uVar5 = 1;
  }
  FUN_0032cb58(uVar1,*(undefined4 *)(iVar6 + 0x34),uVar5);
  iVar2 = *(int *)(iVar6 + 0x34);
LAB_0025c60c:
  iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 0x58);
  *(uint *)(iVar2 + 0x8c) = *(uint *)(iVar2 + 0x8c) | 8;
  iVar2 = *(int *)(*(int *)(*(int *)(iVar6 + 0x34) + 0xc) + 0x58);
  piVar3 = (int *)FUN_0032e320(*puVar7);
  *(int *)(&DAT_0043f3f0 + ((iVar2 - *piVar3) * -0x45d1745d >> 4) * 4) = iVar6;
  puVar7[0x22c1] = 0xffffffff;
  return 1;
}


// ==== FUN_0025c690 @ 0025c690 ====

void FUN_0025c690(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0xb4) != 0) {
    FUN_0025ca10();
  }
  return;
}


// ==== FUN_0025c6b8 @ 0025c6b8 ====

int FUN_0025c6b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_3 == -1) {
    param_3 = FUN_0025c910(param_1,param_2);
  }
  if (param_3 == -1) {
    iVar1 = 0;
  }
  else {
    pcVar2 = (char *)((int)param_1 + 0x22b0 + (int)param_3);
    if (*pcVar2 != '\0') {
      FUN_0025c870(param_1,param_3);
    }
    *pcVar2 = '\x01';
    iVar1 = (int)param_1 + (int)param_3 * 0x50 + 0x50;
  }
  return iVar1;
}


// ==== FUN_0025c758 @ 0025c758 ====

int FUN_0025c758(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(param_1 + 0x2960);
  iVar2 = 0;
  param_1 = param_1 + 0x2320;
  do {
    iVar2 = iVar2 + 1;
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
      return param_1;
    }
    param_1 = param_1 + 0x50;
    pcVar1 = pcVar1 + 1;
  } while (iVar2 < 0x14);
  return 0;
}


// ==== FUN_0025c798 @ 0025c798 ====

void FUN_0025c798(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  iVar2 = 0;
  pcVar4 = (char *)(param_1 + 0xa58);
  puVar3 = param_1 + 0x8c8;
  while ((iVar2 = iVar2 + 1, puVar3 != param_2 || (*pcVar4 == '\0'))) {
    pcVar4 = pcVar4 + 1;
    puVar3 = puVar3 + 0x14;
    if (0x13 < iVar2) {
      return;
    }
  }
  iVar2 = *(int *)(*(int *)(puVar3[0xd] + 0xc) + 0x58);
  piVar1 = (int *)FUN_0032e320(*param_1);
  *(undefined4 *)(&DAT_0043f3f0 + ((iVar2 - *piVar1) * -0x45d1745d >> 4) * 4) = 0;
  FUN_0032cde0(*param_1,puVar3[0xd]);
  *(undefined4 *)(puVar3[0xc] + 0xb4) = 0;
  puVar3[0xc] = 0;
  *pcVar4 = '\0';
  return;
}


// ==== FUN_0025c870 @ 0025c870 ====

void FUN_0025c870(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + param_2 * 0x50 + 0x50;
  iVar1 = *(int *)(*(int *)(iVar2 + 0x30) + 0x10);
  (**(code **)(iVar1 + 0x74))
            (*(int *)(iVar2 + 0x30) + (int)*(short *)(iVar1 + 0x70),
             *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x34) + 0xc) + 0x58) + 0x8c) >> 2 & 1U ^ 1)
  ;
  if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x34) + 0xc) + 0x58) + 0x8c) >> 2 & 1U) != 0) {
    FUN_0025dac0(iVar2);
  }
  FUN_0025ca10(param_1,iVar2);
  return;
}


// ==== FUN_0025c910 @ 0025c910 ====

int FUN_0025c910(undefined8 param_1,long param_2)

{
  float fVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  iVar6 = (int)param_1;
  iVar4 = 0;
  iVar7 = -1;
  fVar9 = -1.0;
  pcVar2 = (char *)(iVar6 + 0x22b0);
  do {
    if (*pcVar2 == '\0') {
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    pcVar2 = (char *)(iVar6 + 0x22b0) + iVar4;
  } while (iVar4 < 0x6e);
  iVar4 = 0;
  pfVar5 = (float *)(iVar6 + 0x88);
  do {
    iVar6 = iVar6 + 0x50;
    lVar3 = FUN_0025cce8(param_1,iVar6);
    fVar1 = fVar9;
    iVar8 = iVar7;
    if ((lVar3 == param_2) && (fVar1 = *pfVar5, iVar8 = iVar4, *pfVar5 <= fVar9)) {
      fVar1 = fVar9;
      iVar8 = iVar7;
    }
    fVar9 = fVar1;
    iVar7 = iVar8;
    if (lVar3 < param_2) {
      fVar9 = *pfVar5;
      param_2 = lVar3;
      iVar7 = iVar4;
    }
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 0x14;
  } while (iVar4 < 0x6e);
  return iVar7;
}


// ==== FUN_0025ca10 @ 0025ca10 ====

void FUN_0025ca10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  pcVar4 = (char *)(param_1 + 0x8ac);
  puVar1 = param_1;
  while( true ) {
    iVar3 = iVar3 + 1;
    if ((puVar1 + 0x14 == param_2) && (*pcVar4 != '\0')) break;
    pcVar4 = pcVar4 + 1;
    puVar1 = puVar1 + 0x14;
    if (0x6d < iVar3) {
      return;
    }
  }
  iVar3 = *(int *)(*(int *)(puVar1[0x21] + 0xc) + 0x58);
  piVar2 = (int *)FUN_0032e320(*param_1);
  *(undefined4 *)(&DAT_0043f3f0 + ((iVar3 - *piVar2) * -0x45d1745d >> 4) * 4) = 0;
  FUN_0032cde0(*param_1,puVar1[0x21]);
  *(undefined4 *)(puVar1[0x20] + 0xb4) = 0;
  puVar1[0x20] = 0;
  *pcVar4 = '\0';
  return;
}


// ==== FUN_0025cae8 @ 0025cae8 ====

void FUN_0025cae8(undefined8 param_1,undefined8 param_2)

{
  FUN_0025da20(param_2);
  return;
}


// ==== FUN_0025cb08 @ 0025cb08 ====

void FUN_0025cb08(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_0032cde0(*param_1,*(undefined4 *)(param_2 + 0x34));
  FUN_0032cb58(*param_1,*(undefined4 *)(param_2 + 0x34),1);
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x34) + 0xc) + 0x58);
  *(uint *)(iVar1 + 0x8c) = *(uint *)(iVar1 + 0x8c) | 8;
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x34) + 0xc) + 0x58);
  piVar2 = (int *)FUN_0032e320(*param_1);
  *(int *)(&DAT_0043f3f0 + ((iVar1 - *piVar2) * -0x45d1745d >> 4) * 4) = param_2;
  return;
}


// ==== FUN_0025cba8 @ 0025cba8 ====

void FUN_0025cba8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_0032cde0(*param_1,*(undefined4 *)(param_2 + 0x34));
  FUN_0032cb58(*param_1,*(undefined4 *)(param_2 + 0x34),4);
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x34) + 0xc) + 0x58);
  *(uint *)(iVar1 + 0x8c) = *(uint *)(iVar1 + 0x8c) | 8;
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x34) + 0xc) + 0x58);
  piVar2 = (int *)FUN_0032e320(*param_1);
  *(int *)(&DAT_0043f3f0 + ((iVar1 - *piVar2) * -0x45d1745d >> 4) * 4) = param_2;
  return;
}


// ==== FUN_0025cc48 @ 0025cc48 ====

undefined4 FUN_0025cc48(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0032e320(*param_1);
  return *(undefined4 *)(&DAT_0043f3f0 + ((param_2 - *piVar1) * -0x45d1745d >> 4) * 4);
}


// ==== FUN_0025cca0 @ 0025cca0 ====

undefined4 FUN_0025cca0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x20);
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*(int *)(*(int *)(*piVar1 + 0xc) + 0x58) == param_2) {
      return 1;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 2);
  return 0;
}


// ==== FUN_0025ccd8 @ 0025ccd8 ====

int FUN_0025ccd8(int param_1,int param_2)

{
  return param_1 + param_2 * 0x10 + 0x28;
}


// ==== FUN_0025cce8 @ 0025cce8 ====

undefined4 FUN_0025cce8(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if (*(int *)(iVar1 + 0xc4) - 1U < 2) {
    return 9;
  }
  if (*(char *)(iVar1 + 0x13b) != '\0') {
    return 8;
  }
  uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(param_2 + 0x34) + 0xc) + 0x58) + 0x8c);
  if ((uVar2 & 1) != 0) {
    return 6;
  }
  if ((*(ushort *)(param_2 + 0x40) & 0x40) != 0) {
    return 7;
  }
  if (((int)uVar2 >> 2 & 1U) != 0) {
    uVar3 = 3;
    if (*(char *)(iVar1 + 0x13a) == '\0') {
      uVar3 = 5;
    }
    return uVar3;
  }
  if (*(int *)(iVar1 + 0xc4) == 7) {
    return 2;
  }
  if (((int)uVar2 >> 1 & 1U) != 0) {
    uVar3 = 1;
    if (*(char *)(iVar1 + 0x13a) == '\0') {
      uVar3 = 4;
    }
    return uVar3;
  }
  return 8;
}


// ==== FUN_0025cda0 @ 0025cda0 ====

bool FUN_0025cda0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0025c910(param_1,param_3);
  *(undefined4 *)((int)param_1 + 0x8b04) = uVar1;
  *param_2 = uVar1;
  return *(int *)((int)param_1 + 0x8b04) != -1;
}


// ==== FUN_0025cdf0 @ 0025cdf0 ====

undefined4 FUN_0025cdf0(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = (char *)(param_1 + 0x2960);
  do {
    iVar2 = iVar2 + 1;
    if (*pcVar1 == '\0') {
      return 1;
    }
    pcVar1 = (char *)(param_1 + 0x2960) + iVar2;
  } while (iVar2 < 0x14);
  return 0;
}


// ==== FUN_0025ce28 @ 0025ce28 ====

void FUN_0025ce28(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b04) = 0xffffffff;
  return;
}


// ==== FUN_0025ce40 @ 0025ce40 ====

void FUN_0025ce40(undefined4 *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0032e1b0(*param_1,*(undefined4 *)(param_2 + 0x34));
  if (lVar1 != 0) {
    FUN_00100290(*param_1,*(undefined4 *)(*(int *)(param_2 + 0x34) + 0xc),1);
  }
  return;
}


// ==== FUN_0025ce90 @ 0025ce90 ====

void FUN_0025ce90(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  FUN_00107b78(0x40f0f0,0xb,0x10,0);
  uVar1 = FUN_00107d20(0x90);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}


// ==== FUN_0025cef8 @ 0025cef8 ====

undefined4 FUN_0025cef8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_1;
  iVar7 = (int)param_2;
  *(int *)(iVar6 + 0x30) = iVar7;
  *(undefined2 *)(iVar6 + 0x40) = 0;
  *(int *)(iVar7 + 0xb4) = iVar6;
  *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  iVar3 = *(int *)(*(int *)(iVar6 + 0x30) + 0xc4);
  if ((iVar3 - 3U < 2) || (bVar2 = false, iVar3 == 7)) {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_0032b6e0(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(*(int *)(iVar6 + 0x30) + 0x128));
    iVar3 = *(int *)(iVar7 + 0xc4);
    if (iVar3 == 4) {
      iVar3 = FUN_001484c8(param_2);
      *(undefined2 *)(iVar6 + 0x40) =
           *(undefined2 *)(*(int *)(*(int *)(iVar7 + 0x118) + 0x48) + iVar3 * 0xd0 + 0x58);
    }
    else if (iVar3 == 3) {
      iVar3 = FUN_00151e60(param_2);
      *(undefined2 *)(iVar6 + 0x40) = *(undefined2 *)(iVar3 + 0x58);
    }
    else if (iVar3 == 7) {
      *(undefined2 *)(iVar6 + 0x40) = 4;
    }
    if (*(int *)(*(int *)(iVar6 + 0x30) + 0xc4) == 7) {
      iVar3 = *(int *)(iVar6 + 0x34);
      uVar4 = 0xd;
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x34);
      if ((*(ushort *)(iVar6 + 0x40) & 0x80) == 0) {
        uVar4 = 9;
      }
      else {
        uVar4 = 8;
      }
    }
  }
  else {
    iVar1 = *(int *)(iVar6 + 0x30);
    FUN_0032b6e0(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar1 + 0x35c));
    uVar4 = 3;
    if (*(int *)(iVar7 + 0xc4) == 2) {
      iVar3 = *(int *)(iVar6 + 0x34);
    }
    else {
      lVar5 = FUN_00137a78(iVar1);
      uVar4 = 5;
      if (lVar5 == 0) {
        iVar3 = *(int *)(iVar6 + 0x34);
        if (*(int *)(iVar1 + 0x3a4) == 0) {
          uVar4 = 4;
        }
        else {
          uVar4 = 6;
        }
      }
      else {
        iVar3 = *(int *)(iVar6 + 0x34);
      }
    }
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  FUN_00388190(param_1);
  *(undefined1 *)(iVar6 + 0x3f) = 0;
  *(undefined1 *)(iVar6 + 0x3d) = 0;
  *(undefined1 *)(iVar6 + 0x3e) = 0;
  return 1;
}


// ==== FUN_0025d098 @ 0025d098 ====

void FUN_0025d098(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  FUN_00388190();
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x3c) == '\0') {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58) + 0xac) = 0;
    iVar1 = *(int *)(iVar3 + 0x30);
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x30);
  }
  if (*(int *)(iVar1 + 0xc4) == 3) {
    lVar2 = FUN_00152690();
    if (lVar2 == 0) {
      *(undefined1 *)(iVar3 + 0x3d) = 0;
    }
    else {
      FUN_0025db20(param_1);
      *(undefined1 *)(iVar3 + 0x3d) = 0;
    }
  }
  else {
    *(undefined1 *)(iVar3 + 0x3d) = 0;
  }
  *(undefined1 *)(iVar3 + 0x3e) = 0;
  return;
}


// ==== FUN_0025d110 @ 0025d110 ====

void FUN_0025d110(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uStack_24;
  
  FUN_00387fc0();
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x3c) == '\0') {
    auVar4._12_4_ = uStack_24;
    auVar4._0_12_ = ZEXT812(0);
    auVar5 = _lqc2(auVar4);
    iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58);
    _lqc2(*(undefined1 (*) [16])(iVar2 + 0x20));
    auVar4 = _qmtc2(*(undefined4 *)(*(int *)(iVar2 + 0x4c) + 0x380));
    auVar4 = _vmulbc(auVar5,auVar4);
    auVar4 = _vmove(auVar4);
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])(iVar2 + 0x20) = auVar4;
    iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58);
    _lqc2(*(undefined1 (*) [16])(iVar2 + 0x30));
    auVar4 = _qmtc2(*(undefined4 *)(*(int *)(iVar2 + 0x4c) + 0x380));
    auVar4 = _vmulbc(auVar5,auVar4);
    auVar4 = _vmove(auVar4);
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])(iVar2 + 0x30) = auVar4;
    iVar2 = *(int *)(iVar3 + 0x34);
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x34);
  }
  if ((uint)*(byte *)(iVar3 + 0x3f) !=
      (*(int *)(*(int *)(*(int *)(iVar2 + 0xc) + 0x58) + 0x8c) >> 2 & 1U)) {
    iVar2 = *(int *)(*(int *)(iVar3 + 0x30) + 0xc4);
    if ((iVar2 - 3U < 2) || (bVar1 = false, iVar2 == 7)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(byte *)(iVar3 + 0x3f) == 0) {
        FUN_0025daf0(param_1);
      }
      else {
        FUN_0025dac0(param_1);
        if (*(int *)(*(int *)(iVar3 + 0x30) + 0xc4) == 3) {
          FUN_001529d0();
        }
      }
    }
  }
  return;
}


// ==== FUN_0025d240 @ 0025d240 ====

void FUN_0025d240(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uStack_9c;
  undefined4 uStack_88;
  
  auVar4 = _qmtc2(param_1);
  auVar6 = _qmtc2(param_4);
  auVar6 = _vmulbc(auVar6,auVar4);
  iVar3 = (int)param_2;
  auVar4 = _qmtc2(0x3d1d89d9);
  auVar4 = _vmulbc(auVar6,auVar4);
  auVar4 = _sqc2(auVar4);
  if (((*(uint *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58) + 0x8c) & 1) != 0) &&
     (lVar2 = FUN_0025da10(param_2), lVar2 == 0)) {
    FUN_0025cba8(DAT_0040f4cc,param_2);
    iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58);
    _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
    auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x4c) + 0x370));
    _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
    auVar6 = _vmove(auVar6);
    auVar5 = _vsub(in_vf0,in_vf0);
    auVar6 = _sqc2(auVar6);
    *(undefined1 (*) [16])(iVar1 + 0x90) = auVar6;
    auVar6 = _sqc2(auVar5);
    *(undefined1 (*) [16])(iVar1 + 0xa0) = auVar6;
  }
  lVar2 = FUN_0025da10(param_2);
  if (lVar2 == 0) {
    if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58) + 0x8c) >> 1 & 1U) == 0) {
      iVar3 = *(int *)(iVar3 + 0x34);
    }
    else {
      FUN_0032b700(*(int *)(iVar3 + 0x34));
      iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58);
      _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
      auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x4c) + 0x370));
      _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
      auVar6 = _vmove(auVar6);
      auVar5 = _vsub(in_vf0,in_vf0);
      auVar6 = _sqc2(auVar6);
      *(undefined1 (*) [16])(iVar1 + 0x90) = auVar6;
      auVar6 = _sqc2(auVar5);
      *(undefined1 (*) [16])(iVar1 + 0xa0) = auVar6;
      FUN_0012c650(DAT_0040f4d0,param_2,*(undefined8 *)(*(int *)(iVar3 + 0x30) + 0xa0));
      iVar3 = *(int *)(iVar3 + 0x34);
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x34);
  }
  auVar8 = _lqc2(auVar4);
  iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 0x58);
  auVar7 = _qmtc2(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 0x380));
  auVar5 = _vmulbc(auVar8,auVar7);
  auVar6 = _qmfc2(auVar5._0_4_);
  auVar4 = _sqc2(auVar5);
  uStack_9c = auVar4._4_4_;
  auVar4 = _sqc2(auVar5);
  uStack_88 = auVar4._8_4_;
  auVar4._8_4_ = in_a1_udw;
  auVar4._0_8_ = param_3;
  auVar4._12_4_ = in_register_0000005c;
  auVar4 = _lqc2(auVar4);
  _vopmula(auVar4,auVar8);
  auVar4 = _vopmsub(auVar8,auVar4);
  auVar7 = _vmulbc(auVar4,auVar7);
  *(float *)(iVar3 + 0x90) = *(float *)(iVar3 + 0x90) + auVar6._0_4_;
  *(float *)(iVar3 + 0x94) = *(float *)(iVar3 + 0x94) + uStack_9c;
  *(float *)(iVar3 + 0x98) = *(float *)(iVar3 + 0x98) + uStack_88;
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0x70));
  auVar6 = _vmulbc(auVar7,auVar4);
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0xa0));
  auVar6 = _vaddbc(auVar6,auVar4);
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0x74));
  auVar5 = _vmulbc(auVar7,auVar4);
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0x78));
  auVar6 = _vaddbc(auVar6,auVar5);
  auVar4 = _vmulbc(auVar7,auVar4);
  auVar4 = _vaddbc(auVar6,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  *(int *)(iVar3 + 0xa0) = auVar4._0_4_;
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0x74));
  auVar6 = _vmulbc(auVar7,auVar4);
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0xa4));
  auVar6 = _vaddbc(auVar6,auVar4);
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0x84));
  auVar5 = _vmulbc(auVar7,auVar4);
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0x88));
  auVar6 = _vaddbc(auVar6,auVar5);
  auVar4 = _vmulbc(auVar7,auVar4);
  auVar4 = _vaddbc(auVar6,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  *(int *)(iVar3 + 0xa4) = auVar4._0_4_;
  auVar5 = _qmtc2(*(undefined4 *)(iVar3 + 0xa8));
  auVar4 = _qmtc2(*(undefined4 *)(iVar3 + 0x78));
  auVar4 = _vmulbc(auVar7,auVar4);
  auVar6 = _qmtc2(*(undefined4 *)(iVar3 + 0x88));
  auVar4 = _vaddbc(auVar4,auVar5);
  auVar6 = _vmulbc(auVar7,auVar6);
  auVar5 = _qmtc2(*(undefined4 *)(iVar3 + 0x80));
  auVar4 = _vaddbc(auVar4,auVar6);
  auVar6 = _vmulbc(auVar7,auVar5);
  auVar4 = _vaddbc(auVar4,auVar6);
  auVar4 = _qmfc2(auVar4._0_4_);
  *(int *)(iVar3 + 0xa8) = auVar4._0_4_;
  *(undefined4 *)(iVar3 + 0xac) = 0;
  return;
}


// ==== FUN_0025d510 @ 0025d510 ====

void FUN_0025d510(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_ac;
  float fStack_98;
  undefined1 auStack_50 [16];
  
  auVar5 = _qmtc2(param_1);
  auVar7 = _qmtc2(param_4);
  auVar7 = _vmulbc(auVar7,auVar5);
  auVar5 = _qmtc2(0x3d1d89d9);
  iVar4 = (int)param_2;
  auVar5 = _vmulbc(auVar7,auVar5);
  auStack_50 = _sqc2(auVar5);
  if (*(int *)(*(int *)(iVar4 + 0x30) + 0xc4) == 3) {
    lVar3 = FUN_00151e60();
    if (lVar3 == 0) {
      iVar2 = *(int *)(iVar4 + 0x34);
      goto LAB_0025d598;
    }
    if (*(int *)((int)lVar3 + 0x54) != 3) {
      iVar2 = *(int *)(iVar4 + 0x34);
      goto LAB_0025d598;
    }
    auVar7 = _lqc2(auStack_50);
    auVar5 = _qmtc2(0x3f333333);
    auVar5 = _vaddbc(auVar7,auVar5);
    auVar5 = _vaddbc(in_vf0,auVar5);
    auStack_50 = _sqc2(auVar5);
  }
  iVar2 = *(int *)(iVar4 + 0x34);
LAB_0025d598:
  if (((*(uint *)(*(int *)(*(int *)(iVar2 + 0xc) + 0x58) + 0x8c) & 1) != 0) &&
     (lVar3 = FUN_0025da10(param_2), lVar3 == 0)) {
    FUN_0025cba8(DAT_0040f4cc,param_2);
    iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0xc) + 0x58);
    _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
    auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x4c) + 0x370));
    _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar5 = _vmove(auVar5);
    auVar7 = _vsub(in_vf0,in_vf0);
    auVar5 = _sqc2(auVar5);
    *(undefined1 (*) [16])(iVar2 + 0x90) = auVar5;
    auVar5 = _sqc2(auVar7);
    *(undefined1 (*) [16])(iVar2 + 0xa0) = auVar5;
  }
  lVar3 = FUN_0025da10(param_2);
  if (lVar3 == 0) {
    if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0xc) + 0x58) + 0x8c) >> 1 & 1U) == 0) {
      uVar1 = *(ushort *)(iVar4 + 0x40);
    }
    else {
      FUN_0032b700(*(int *)(iVar4 + 0x34));
      iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0xc) + 0x58);
      _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
      auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x4c) + 0x370));
      _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
      auVar5 = _vmove(auVar5);
      auVar7 = _vsub(in_vf0,in_vf0);
      auVar5 = _sqc2(auVar5);
      *(undefined1 (*) [16])(iVar2 + 0x90) = auVar5;
      auVar5 = _sqc2(auVar7);
      *(undefined1 (*) [16])(iVar2 + 0xa0) = auVar5;
      FUN_0012c650(DAT_0040f4d0,param_2,*(undefined8 *)(*(int *)(iVar4 + 0x30) + 0xa0));
      uVar1 = *(ushort *)(iVar4 + 0x40);
    }
  }
  else {
    uVar1 = *(ushort *)(iVar4 + 0x40);
  }
  if ((uVar1 & 0x40) == 0) {
    auVar9 = _lqc2(auStack_50);
    iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0xc) + 0x58);
    auVar8 = _qmtc2(*(undefined4 *)(*(int *)(iVar4 + 0x4c) + 0x380));
    auVar6 = _vmulbc(auVar9,auVar8);
    auVar7 = _qmfc2(auVar6._0_4_);
    auVar5 = _sqc2(auVar6);
    fStack_ac = auVar5._4_4_;
    auVar5 = _sqc2(auVar6);
    fStack_98 = auVar5._8_4_;
    auVar5._8_4_ = in_a1_udw;
    auVar5._0_8_ = param_3;
    auVar5._12_4_ = in_register_0000005c;
    auVar5 = _lqc2(auVar5);
    _vopmula(auVar5,auVar9);
    auVar5 = _vopmsub(auVar9,auVar5);
    auVar8 = _vmulbc(auVar5,auVar8);
    *(float *)(iVar4 + 0x90) = *(float *)(iVar4 + 0x90) + auVar7._0_4_;
    *(float *)(iVar4 + 0x94) = *(float *)(iVar4 + 0x94) + fStack_ac;
    *(float *)(iVar4 + 0x98) = *(float *)(iVar4 + 0x98) + fStack_98;
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0x70));
    auVar7 = _vmulbc(auVar8,auVar5);
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0xa0));
    auVar7 = _vaddbc(auVar7,auVar5);
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0x74));
    auVar6 = _vmulbc(auVar8,auVar5);
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0x78));
    auVar7 = _vaddbc(auVar7,auVar6);
    auVar5 = _vmulbc(auVar8,auVar5);
    auVar5 = _vaddbc(auVar7,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    *(int *)(iVar4 + 0xa0) = auVar5._0_4_;
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0x74));
    auVar7 = _vmulbc(auVar8,auVar5);
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0xa4));
    auVar7 = _vaddbc(auVar7,auVar5);
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0x84));
    auVar6 = _vmulbc(auVar8,auVar5);
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0x88));
    auVar7 = _vaddbc(auVar7,auVar6);
    auVar5 = _vmulbc(auVar8,auVar5);
    auVar5 = _vaddbc(auVar7,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    *(int *)(iVar4 + 0xa4) = auVar5._0_4_;
    auVar6 = _qmtc2(*(undefined4 *)(iVar4 + 0xa8));
    auVar5 = _qmtc2(*(undefined4 *)(iVar4 + 0x78));
    auVar5 = _vmulbc(auVar8,auVar5);
    auVar7 = _qmtc2(*(undefined4 *)(iVar4 + 0x88));
    auVar5 = _vaddbc(auVar5,auVar6);
    auVar7 = _vmulbc(auVar8,auVar7);
    auVar6 = _qmtc2(*(undefined4 *)(iVar4 + 0x80));
    auVar5 = _vaddbc(auVar5,auVar7);
    auVar7 = _vmulbc(auVar8,auVar6);
    auVar5 = _vaddbc(auVar5,auVar7);
    auVar5 = _qmfc2(auVar5._0_4_);
    *(int *)(iVar4 + 0xa8) = auVar5._0_4_;
    *(undefined4 *)(iVar4 + 0xac) = 0;
  }
  return;
}


// ==== FUN_0025d840 @ 0025d840 ====

void FUN_0025d840(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  auVar2 = _qmtc2(param_2);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 0x58);
  _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
  auVar2 = _vmove(auVar2);
  auVar2 = _sqc2(auVar2);
  *(undefined1 (*) [16])(iVar1 + 0x20) = auVar2;
  return;
}


// ==== FUN_0025d860 @ 0025d860 ====

void FUN_0025d860(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 0x58) + 0x8c) >> 1 & 1U) == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  else {
    FUN_0032b700(*(int *)(param_1 + 0x34));
    iVar1 = *(int *)(param_1 + 0x34);
  }
  auVar2._8_4_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = in_register_0000005c;
  auVar3 = _lqc2(auVar2);
  iVar1 = *(int *)(*(int *)(iVar1 + 0xc) + 0x58);
  _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
  auVar2 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x380));
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _vmove(auVar2);
  auVar2 = _sqc2(auVar2);
  *(undefined1 (*) [16])(iVar1 + 0x20) = auVar2;
  return;
}


// ==== FUN_0025d8e0 @ 0025d8e0 ====

undefined8 FUN_0025d8e0(int param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 0x58);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
  auVar2 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 900));
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_8_;
}


// ==== FUN_0025d910 @ 0025d910 ====

void FUN_0025d910(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 0x58) + 0x8c) >> 1 & 1U) == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  else {
    FUN_0032b700(*(int *)(param_1 + 0x34));
    iVar1 = *(int *)(param_1 + 0x34);
  }
  auVar2._8_4_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = in_register_0000005c;
  auVar3 = _lqc2(auVar2);
  iVar1 = *(int *)(*(int *)(iVar1 + 0xc) + 0x58);
  _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
  auVar2 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x380));
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _vmove(auVar2);
  auVar2 = _sqc2(auVar2);
  *(undefined1 (*) [16])(iVar1 + 0x30) = auVar2;
  return;
}


// ==== FUN_0025d990 @ 0025d990 ====

undefined8 FUN_0025d990(int param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 0x58);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
  auVar2 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 900));
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_8_;
}


// ==== FUN_0025d9c0 @ 0025d9c0 ====

float FUN_0025d9c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  
  fVar5 = 0.0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x34) + 8);
  uVar4 = 0;
  if (uVar1 != 0) {
    piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 0x54);
    do {
      iVar2 = *piVar3;
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0x1c;
      fVar5 = fVar5 + 1.0 / *(float *)(iVar2 + 0x10);
    } while (uVar4 < uVar1);
  }
  return fVar5;
}


// ==== FUN_0025da10 @ 0025da10 ====

ushort FUN_0025da10(int param_1)

{
  return *(ushort *)(param_1 + 0x40) >> 9 & 1;
}


// ==== FUN_0025da20 @ 0025da20 ====

void FUN_0025da20(undefined8 param_1)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  iVar1 = (int)param_1;
  if ((*(uint *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x34) + 0xc) + 0x58) + 0x8c) & 1) != 0) {
    FUN_0025cba8(DAT_0040f4cc,param_1);
  }
  if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x34) + 0xc) + 0x58) + 0x8c) >> 1 & 1U) == 0) {
    iVar1 = *(int *)(iVar1 + 0x34);
  }
  else {
    FUN_0032b700(*(int *)(iVar1 + 0x34));
    iVar1 = *(int *)(iVar1 + 0x34);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0xc) + 0x58);
  _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x4c) + 0x370));
  _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar3 = _vmove(auVar3);
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(iVar1 + 0x90) = auVar3;
  auVar3 = _sqc2(auVar2);
  *(undefined1 (*) [16])(iVar1 + 0xa0) = auVar3;
  return;
}


// ==== FUN_0025dac0 @ 0025dac0 ====

void FUN_0025dac0(int param_1)

{
  FUN_0014c330(*(undefined4 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return;
}


// ==== FUN_0025daf0 @ 0025daf0 ====

void FUN_0025daf0(int param_1)

{
  FUN_0014c380(*(undefined4 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x3f) = 1;
  return;
}


// ==== FUN_0025db20 @ 0025db20 ====

void FUN_0025db20(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (((*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x34) + 0xc) + 0x58) + 0xac) == 10) &&
      (*(char *)(iVar1 + 0x3d) != '\0')) &&
     (0.5 <= (float)((ulong)*(undefined8 *)(iVar1 + 0x10) >> 0x20))) {
    FUN_0025dac0(param_1);
    FUN_0025ca10(DAT_0040f4cc,param_1);
  }
  return;
}


// ==== FUN_0025dba8 @ 0025dba8 ====

void FUN_0025dba8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  iVar3 = (int)param_1;
  if (((*(uint *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58) + 0x8c) & 1) != 0) &&
     (lVar2 = FUN_0025da10(param_1), lVar2 == 0)) {
    FUN_0025cba8(DAT_0040f4cc,param_1);
  }
  lVar2 = FUN_0025da10(param_1);
  if (lVar2 == 0) {
    if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58) + 0x8c) >> 1 & 1U) == 0) {
      *(undefined1 *)(iVar3 + 0x3f) = 0;
    }
    else {
      FUN_0032b700(*(int *)(iVar3 + 0x34));
      iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0xc) + 0x58);
      _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
      auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x4c) + 0x370));
      _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
      auVar5 = _vmove(auVar5);
      auVar4 = _vsub(in_vf0,in_vf0);
      auVar5 = _sqc2(auVar5);
      *(undefined1 (*) [16])(iVar1 + 0x90) = auVar5;
      auVar5 = _sqc2(auVar4);
      *(undefined1 (*) [16])(iVar1 + 0xa0) = auVar5;
      FUN_0012c650(DAT_0040f4d0,param_1,*(undefined8 *)(*(int *)(iVar3 + 0x30) + 0xa0));
      *(undefined1 *)(iVar3 + 0x3f) = 0;
    }
  }
  else {
    *(undefined1 *)(iVar3 + 0x3f) = 0;
  }
  return;
}


// ==== FUN_0025dc98 @ 0025dc98 ====

int FUN_0025dc98(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 1;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  iVar4 = 0;
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      bVar1 = iVar3 != 0;
      iVar3 = 0;
      if ((bVar1) &&
         (iVar3 = 1,
         (*(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc) + iVar5 + 0x58) + 0x8c) & 2) ==
         0)) {
        iVar3 = 0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while ((iVar4 < iVar2) && (iVar3 != 0));
  }
  return iVar3;
}


// ==== FUN_0025dd08 @ 0025dd08 ====

undefined8 FUN_0025dd08(int param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc) + 200);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
  auVar2 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 900));
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_8_;
}


// ==== FUN_0025dd38 @ 0025dd38 ====

void FUN_0025dd38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 auStack_c0 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  auStack_c0[0] = 0;
  FUN_0032b860(&uStack_b0,0xd,0xc);
  auStack_c0[0] = FUN_00107c98(0x40f0f0,&uStack_b0);
  uVar2 = FUN_0032bb28(auStack_c0,0xd,0xc);
  uStack_9c = 4;
  uStack_a0 = 0x24;
  *(undefined4 *)(param_1 + 8) = uVar2;
  FUN_00107cc8(0x40f0f0,4);
  puVar3 = (undefined4 *)FUN_00107cf8(0x10);
  puVar3[1] = 0xd;
  puVar3[2] = 6;
  *puVar3 = 0xd;
  puVar4 = (undefined1 *)FUN_00107d20(0x80);
  *puVar4 = 0;
  uVar6 = 0;
  if (puVar3[2] != 0) {
    puVar5 = puVar3 + 3;
    do {
      *puVar5 = 0;
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < (uint)puVar3[2]);
  }
  puVar3[3] = puVar3[3] | 4;
  puVar3[((puVar3[1] & 0x7fffffff) >> 4) + 3] =
       puVar3[((puVar3[1] & 0x7fffffff) >> 4) + 3] | 1 << ((puVar3[1] & 0xf) << 1);
  uVar8 = 0;
  uVar6 = puVar3[1] * 2 + 5;
  iVar9 = 0;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  uVar6 = puVar3[1] * 5 + 2;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  puVar3[3] = puVar3[3] | 0x20;
  puVar3[((uint)(puVar3[1] * 5) >> 5) + 3] =
       puVar3[((uint)(puVar3[1] * 5) >> 5) + 3] | 1 << (puVar3[1] * 5 & 0x1fU);
  puVar3[((uint)puVar3[1] >> 5) + 3] = puVar3[((uint)puVar3[1] >> 5) + 3] | 1 << (puVar3[1] & 0x1f);
  puVar3[3] = puVar3[3] | 2;
  uVar6 = puVar3[1] * 5 + 9;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  uVar6 = puVar3[1] * 9 + 5;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  puVar3[3] = puVar3[3] | 8;
  puVar3[((uint)(puVar3[1] * 3) >> 5) + 3] =
       puVar3[((uint)(puVar3[1] * 3) >> 5) + 3] | 1 << (puVar3[1] * 3 & 0x1fU);
  uVar6 = puVar3[1] * 3 + 6;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  uVar6 = puVar3[1] * 6 + 3;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  uVar6 = puVar3[1] * 6 + 10;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  uVar6 = puVar3[1] * 10 + 6;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  puVar3[3] = puVar3[3] | 0x10;
  puVar3[((puVar3[1] & 0x3fffffff) >> 3) + 3] =
       puVar3[((puVar3[1] & 0x3fffffff) >> 3) + 3] | 1 << ((puVar3[1] & 7) << 2);
  puVar3[(puVar3[1] + 7 >> 5) + 3] = puVar3[(puVar3[1] + 7 >> 5) + 3] | 1 << (puVar3[1] + 7 & 0x1f);
  uVar6 = puVar3[1] * 7 + 1;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  uVar6 = puVar3[1] * 7 + 0xb;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  uVar6 = puVar3[1] * 0xb + 7;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  puVar3[(puVar3[1] + 8 >> 5) + 3] = puVar3[(puVar3[1] + 8 >> 5) + 3] | 1 << (puVar3[1] + 8 & 0x1f);
  uVar6 = puVar3[1] * 8 + 1;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  uVar6 = puVar3[1] * 8 + 0xc;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  iVar1 = *(int *)(param_1 + 8);
  uVar6 = puVar3[1] * 0xc + 8;
  puVar3[(uVar6 >> 5) + 3] = puVar3[(uVar6 >> 5) + 3] | 1 << (uVar6 & 0x1f);
  *(undefined4 **)(iVar1 + 0x18) = puVar3;
  do {
    if (uVar8 < 2) {
      uStack_b0 = 0x60;
      uStack_ac = 0x10;
      auStack_c0[0] = FUN_00107c98(0x40f0f0,&uStack_b0);
      uVar7 = 4;
    }
    else if (uVar8 < 4) {
      uStack_b0 = 0x60;
      uStack_ac = 0x10;
      auStack_c0[0] = FUN_00107c98(0x40f0f0,&uStack_b0);
      uVar7 = 1;
    }
    else {
      uStack_b0 = 0x60;
      uStack_ac = 0x10;
      auStack_c0[0] = FUN_00107c98(0x40f0f0,&uStack_b0);
      uVar7 = 2;
    }
    uVar2 = FUN_00334268(auStack_c0,uVar7);
    uVar8 = uVar8 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + iVar9) = uVar2;
    iVar9 = iVar9 + 0xa0;
  } while (uVar8 < 0xd);
  return;
}


// ==== FUN_0025e2d0 @ 0025e2d0 ====

/* WARNING: Removing unreachable block (ram,0x00260994) */
/* WARNING: Removing unreachable block (ram,0x00260b2c) */
/* WARNING: Removing unreachable block (ram,0x00260a60) */
/* WARNING: Removing unreachable block (ram,0x0025ff40) */
/* WARNING: Removing unreachable block (ram,0x002601bc) */
/* WARNING: Removing unreachable block (ram,0x00260288) */
/* WARNING: Removing unreachable block (ram,0x002600f0) */
/* WARNING: Removing unreachable block (ram,0x002606d8) */
/* WARNING: Removing unreachable block (ram,0x00260390) */
/* WARNING: Removing unreachable block (ram,0x0026060c) */
/* WARNING: Removing unreachable block (ram,0x00260540) */
/* WARNING: Removing unreachable block (ram,0x002607e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0025e2d0(int param_1,int *param_2)

{
  bool bVar1;
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined1 (*pauVar16) [16];
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined1 (*pauVar21) [16];
  undefined4 *puVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  uint in_hi;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 in_vf0 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 in_vuI;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined1 auStack_520 [4];
  undefined1 auStack_51c [8];
  undefined4 uStack_514;
  undefined1 auStack_510 [16];
  undefined1 auStack_500 [16];
  undefined1 auStack_4f0 [16];
  undefined1 auStack_4e0 [16];
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [16];
  undefined1 auStack_460 [16];
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [16];
  undefined1 auStack_430 [16];
  undefined1 auStack_420 [16];
  undefined1 auStack_410 [16];
  undefined1 auStack_400 [16];
  undefined1 auStack_3f0 [16];
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [16];
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [16];
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [8];
  float fStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int *piStack_12c;
  int iStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 *puStack_e0;
  
  puStack_e0 = auStack_510;
  iVar24 = 0;
  fVar32 = 0.5;
  iStack_128 = *param_2;
  fVar33 = 1.0;
  iVar17 = 0;
  iStack_130 = param_1;
  piStack_12c = param_2;
  do {
    auVar34 = _auStack_520;
    puVar22 = *(undefined4 **)(*(int *)(*(int *)(iStack_130 + 8) + 4) + iVar24);
    if (iVar17 == 2) {
      uVar30 = 3;
    }
    else if (iVar17 == 3) {
      uVar30 = 5;
    }
    else {
      uVar30 = (&DAT_00400018)[iVar17];
    }
    pauVar16 = (undefined1 (*) [16])FUN_00138378(uVar30);
    uVar3 = *(undefined4 *)*pauVar16;
    uVar4 = *(undefined4 *)(*pauVar16 + 4);
    uVar5 = *(undefined4 *)(*pauVar16 + 8);
    uVar6 = *(undefined4 *)(*pauVar16 + 0xc);
    auVar35 = *pauVar16;
    uVar7 = *(undefined4 *)pauVar16[1];
    uVar8 = *(undefined4 *)(pauVar16[1] + 4);
    uVar9 = *(undefined4 *)(pauVar16[1] + 8);
    uVar10 = *(undefined4 *)(pauVar16[1] + 0xc);
    auVar36 = pauVar16[1];
    uVar11 = *(undefined4 *)pauVar16[2];
    uVar12 = *(undefined4 *)(pauVar16[2] + 4);
    uVar13 = *(undefined4 *)(pauVar16[2] + 8);
    uVar14 = *(undefined4 *)(pauVar16[2] + 0xc);
    auVar39 = pauVar16[2];
    uStack_530 = *(undefined4 *)pauVar16[3];
    uStack_52c = *(undefined4 *)(pauVar16[3] + 4);
    uStack_528 = *(undefined4 *)(pauVar16[3] + 8);
    uStack_524 = *(undefined4 *)(pauVar16[3] + 0xc);
    if (iVar17 < 0) {
LAB_0025e49c:
      fVar26 = (float)FUN_00138348(uVar30);
      fVar29 = (float)FUN_00138360(uVar30);
      puVar22[0x10] = fVar26 * fVar32 - fVar29;
      uVar27 = FUN_00138360(uVar30);
      puVar22[0x13] = uVar27;
      fVar28 = (float)FUN_00138360(uVar30);
      fVar28 = fVar28 + fVar28;
      fVar29 = (float)FUN_00138348(uVar30);
      fVar26 = fVar28;
    }
    else if (iVar17 < 2) {
      auStack_520 = (undefined1  [4])FUN_00138348(uVar30);
      auStack_520 = (undefined1  [4])((float)auStack_520 * fVar32);
      auStack_51c._0_4_ = FUN_00138360(uVar30);
      auStack_51c._0_4_ = (float)auStack_51c._0_4_ * fVar32;
      fVar26 = (float)FUN_00138348(uVar30);
      uStack_514 = auVar34._12_4_;
      auStack_51c._4_4_ = fVar26 * fVar32;
      auVar37 = _lqc2(_auStack_520);
      auVar34 = _qmfc2(auVar37._0_4_);
      puVar22[0x10] = auVar34._0_4_;
      auVar34 = _sqc2(auVar37);
      auStack_51c._0_4_ = auVar34._4_4_;
      puVar22[0x11] = auStack_51c._0_4_;
      _auStack_520 = _sqc2(auVar37);
      puVar22[0x12] = auStack_51c._4_4_;
      fVar26 = (float)FUN_00138348(uVar30);
      fVar28 = (float)FUN_00138360(uVar30);
      fVar29 = fVar26;
    }
    else {
      if (3 < iVar17) goto LAB_0025e49c;
      uVar27 = FUN_00138360(uVar30);
      puVar22[0x13] = uVar27;
      uStack_530 = DAT_004432a0;
      uStack_52c = DAT_004432a4;
      uStack_528 = DAT_004432a8;
      uStack_524 = DAT_004432ac;
      fVar28 = (float)FUN_00138360(uVar30);
      fVar28 = fVar28 + fVar28;
      fVar26 = fVar28;
      fVar29 = fVar28;
    }
    piVar15 = piStack_12c;
    *puVar22 = uVar3;
    puVar22[1] = uVar4;
    puVar22[2] = uVar5;
    puVar22[3] = uVar6;
    puVar22[4] = uVar7;
    puVar22[5] = uVar8;
    puVar22[6] = uVar9;
    puVar22[7] = uVar10;
    puVar22[8] = uVar11;
    puVar22[9] = uVar12;
    puVar22[10] = uVar13;
    puVar22[0xb] = uVar14;
    puVar22[0xc] = uStack_530;
    puVar22[0xd] = uStack_52c;
    puVar22[0xe] = uStack_528;
    puVar22[0xf] = uStack_524;
    auVar37 = _lqc2(auVar35);
    auVar38 = _lqc2(auVar36);
    auVar39 = _lqc2(auVar39);
    _vmove(auVar37);
    _vmove(auVar38);
    auVar41 = _vaddbc(in_vf0,auVar38);
    auVar40 = _vaddbc(in_vf0,auVar37);
    _vmove(auVar39);
    auVar44 = _vaddbc(in_vf0,auVar37);
    _vmove(auVar41);
    _vmove(auVar40);
    auVar50 = _vaddbc(in_vf0,auVar39);
    auVar34._4_4_ = uStack_52c;
    auVar34._0_4_ = uStack_530;
    auVar34._8_4_ = uStack_528;
    auVar34._12_4_ = uStack_524;
    auVar36 = _lqc2(auVar34);
    auVar52 = _vaddbc(in_vf0,auVar39);
    _vmove(auVar44);
    auVar35 = _vmulbc(auVar50,auVar36);
    auVar47 = _vaddbc(in_vf0,auVar38);
    auVar34 = _vmulbc(auVar52,auVar36);
    auVar35 = _vadd(auVar35,auVar34);
    auVar34 = _vmulbc(auVar47,auVar36);
    _sqc2(auVar37);
    auVar34 = _vadd(auVar35,auVar34);
    _sqc2(auVar38);
    auVar34 = _vsub(in_vf0,auVar34);
    _sqc2(auVar39);
    _sqc2(auVar36);
    _sqc2(auVar41);
    _sqc2(auVar40);
    _sqc2(auVar44);
    auStack_4e0 = _sqc2(auVar34);
    auStack_510 = _sqc2(auVar50);
    auStack_500 = _sqc2(auVar52);
    auStack_4f0 = _sqc2(auVar47);
    iVar20 = *(int *)(*(int *)(iStack_130 + 8) + 4) + iVar24;
    *(uint *)(iVar20 + 0x90) = (uint)(puStack_e0 != (undefined1 *)0x0);
    if (puStack_e0 != (undefined1 *)0x0) {
      *(int *)(iVar20 + 0x50) = auStack_510._0_4_;
      *(int *)(iVar20 + 0x54) = auStack_510._4_4_;
      *(undefined4 *)(iVar20 + 0x58) = auStack_510._8_4_;
      *(undefined4 *)(iVar20 + 0x5c) = auStack_510._12_4_;
      *(int *)(iVar20 + 0x60) = auStack_500._0_4_;
      *(int *)(iVar20 + 100) = auStack_500._4_4_;
      *(undefined4 *)(iVar20 + 0x68) = auStack_500._8_4_;
      *(undefined4 *)(iVar20 + 0x6c) = auStack_500._12_4_;
      *(int *)(iVar20 + 0x70) = auStack_4f0._0_4_;
      *(int *)(iVar20 + 0x74) = auStack_4f0._4_4_;
      *(undefined4 *)(iVar20 + 0x78) = auStack_4f0._8_4_;
      *(undefined4 *)(iVar20 + 0x7c) = auStack_4f0._12_4_;
      *(int *)(iVar20 + 0x80) = auStack_4e0._0_4_;
      *(int *)(iVar20 + 0x84) = auStack_4e0._4_4_;
      *(undefined4 *)(iVar20 + 0x88) = auStack_4e0._8_4_;
      *(undefined4 *)(iVar20 + 0x8c) = auStack_4e0._12_4_;
    }
    fVar31 = *(float *)((in_hi | 0x43ea90) + iVar17 * 0xc);
    iVar20 = *(int *)(*(int *)(iStack_130 + 8) + 4) + iVar24;
    fStack_140 = 12.0 / (fVar31 * (fVar28 * fVar28 + fVar29 * fVar29));
    fStack_13c = 12.0 / (fVar31 * (fVar26 * fVar26 + fVar29 * fVar29));
    fStack_138 = 12.0 / (fVar31 * (fVar26 * fVar26 + fVar28 * fVar28));
    uStack_134 = uStack_514;
    *(float *)(iVar20 + 0x10) = fStack_140;
    *(float *)(iVar20 + 0x14) = fStack_13c;
    *(float *)(iVar20 + 0x18) = fStack_138;
    *(undefined4 *)(iVar20 + 0x1c) = uStack_514;
    auVar35._4_4_ = fStack_13c;
    auVar35._0_4_ = fStack_140;
    auVar35._8_4_ = fStack_138;
    auVar35._12_4_ = uStack_514;
    auVar34 = _lqc2(auVar35);
    auVar35 = _qmfc2(auVar34._0_4_);
    auVar34 = _sqc2(auVar34);
    auStack_51c._0_4_ = auVar34._4_4_;
    auVar36._4_4_ = fStack_13c;
    auVar36._0_4_ = fStack_140;
    auVar36._8_4_ = fStack_138;
    auVar36._12_4_ = uStack_514;
    auVar34 = _lqc2(auVar36);
    if (auVar35._0_4_ < (float)auStack_51c._0_4_) {
      auVar34 = _qmfc2(auVar34._0_4_);
      *(int *)(iVar20 + 0x24) = auVar34._0_4_;
    }
    else {
      auVar34 = _sqc2(auVar34);
      auStack_51c._0_4_ = auVar34._4_4_;
      *(undefined4 *)(iVar20 + 0x24) = auStack_51c._0_4_;
    }
    auVar39._4_4_ = fStack_13c;
    auVar39._0_4_ = fStack_140;
    auVar39._8_4_ = fStack_138;
    auVar39._12_4_ = uStack_514;
    auVar34 = _lqc2(auVar39);
    auVar34 = _sqc2(auVar34);
    fVar26 = *(float *)(iVar20 + 0x24);
    auStack_51c._4_4_ = auVar34._8_4_;
    auVar2 = auVar34._4_12_;
    if ((float)auStack_51c._4_4_ <= fVar26) {
      auVar37._4_4_ = fStack_13c;
      auVar37._0_4_ = fStack_140;
      auVar37._8_4_ = fStack_138;
      auVar37._12_4_ = uStack_514;
      auVar34 = _lqc2(auVar37);
      auVar34 = _sqc2(auVar34);
      _auStack_51c = auVar34._4_12_;
      auVar2 = _auStack_51c;
      auStack_51c._4_4_ = auVar34._8_4_;
      fVar26 = (float)auStack_51c._4_4_;
    }
    _auStack_51c = auVar2;
    in_hi = iVar17 * 0xc >> 0x1f;
    *(undefined4 *)(iVar20 + 0x28) = 0x3ecccccd;
    *(undefined4 *)(iVar20 + 0x2c) = 0x3ee66666;
    *(float *)(iVar20 + 0x24) = fVar33 / fVar26;
    *(float *)(iVar20 + 0x20) = fVar33 / fVar31;
    iVar25 = iVar17 + 1;
    *(undefined4 *)(iVar20 + 0x30) = (&DAT_0043eb30)[iVar17 * 3];
    *(undefined4 *)(iVar20 + 0x34) = (&DAT_0043eb34)[iVar17 * 3];
    iVar17 = *(int *)(*(int *)(iStack_130 + 8) + 4) + iVar24;
    auStack_51c._4_4_ = 0x3e4ccccd;
    _auStack_520 = 0x3f3333333f4ccccd;
    *(undefined4 *)(iVar17 + 0x40) = 0x3f4ccccd;
    *(undefined4 *)(iVar17 + 0x44) = 0x3f333333;
    *(undefined4 *)(iVar17 + 0x48) = 0x3e4ccccd;
    iVar24 = iVar24 + 0xa0;
    iVar17 = iVar25;
  } while (iVar25 < 0xd);
  iVar17 = 0;
  do {
    iVar20 = iVar17 * 0x10;
    puVar23 = (uint *)(&DAT_00400080 + iVar20);
    *(uint *)(*(int *)(*(int *)(iStack_130 + 8) + 0x14) + iVar17 * 8) = *puVar23;
    *(undefined4 *)(*(int *)(*(int *)(iStack_130 + 8) + 0x14) + iVar17 * 8 + 4) =
         *(undefined4 *)(&DAT_00400084 + iVar20);
    iVar24 = *(int *)(&DAT_0040008c + iVar20);
    puVar22 = (undefined4 *)(*(int *)(*(int *)(iStack_130 + 8) + 0xc) + iVar17 * 0x40);
    puVar22[0xe] = (&DAT_0043f230)[iVar24 * 8];
    uVar30 = (&DAT_0043f234)[iVar24 * 8];
    puVar22[10] = uVar30;
    uVar30 = FUN_0029da28(uVar30);
    puVar22[0xc] = uVar30;
    puVar22[0xf] = (&DAT_0043f238)[iVar24 * 8];
    uVar30 = (&DAT_0043f23c)[iVar24 * 8];
    puVar22[0xb] = uVar30;
    uVar30 = FUN_0029da28(uVar30);
    puVar22[0xd] = uVar30;
    auVar2 = *(undefined1 (*) [12])(&DAT_0043f240 + iVar24 * 8);
    uVar30 = (&DAT_0043f24c)[iVar24 * 8];
    puVar22[8] = 0x3dcccccd;
    *puVar22 = auVar2._0_4_;
    puVar22[1] = auVar2._4_4_;
    puVar22[2] = auVar2._8_4_;
    puVar22[3] = uVar30;
    puVar22[9] = 0x3dcccccd;
    uVar18 = *puVar23;
    pauVar16 = (undefined1 (*) [16])(*(int *)(*(int *)(iStack_130 + 8) + 0x10) + iVar17 * 0x50);
    if (uVar18 == 2) {
      iVar24 = 3;
    }
    else if (uVar18 == 3) {
      iVar24 = 5;
    }
    else {
      iVar24 = (&DAT_00400018)[uVar18];
    }
    pauVar21 = (undefined1 (*) [16])(*(int *)(iStack_128 + 0x54) + piVar15[iVar24 + 3] * 0x40);
    auVar34 = *pauVar21;
    auVar35 = pauVar21[1];
    auVar36 = pauVar21[2];
    auVar39 = pauVar21[3];
    pauVar21 = (undefined1 (*) [16])FUN_00138378();
    auStack_4f0 = pauVar21[3];
    if (*puVar23 < 4) {
      auVar37 = _lqc2(*pauVar21);
      if (1 < *puVar23) {
        auStack_4f0._4_4_ = DAT_004432a4;
        auStack_4f0._0_4_ = DAT_004432a0;
        auStack_4f0._8_4_ = DAT_004432a8;
        auStack_4f0._12_4_ = DAT_004432ac;
        goto LAB_0025e924;
      }
    }
    else {
LAB_0025e924:
      auVar37 = _lqc2(*pauVar21);
    }
    auVar41 = _lqc2(pauVar21[1]);
    auVar38 = _lqc2(pauVar21[2]);
    _vmove(auVar37);
    _vmove(auVar41);
    auVar44 = _vaddbc(in_vf0,auVar41);
    auVar47 = _vaddbc(in_vf0,auVar37);
    _vmove(auVar38);
    auVar50 = _vaddbc(in_vf0,auVar37);
    _vmove(auVar44);
    _vmove(auVar47);
    auVar52 = _vaddbc(in_vf0,auVar38);
    auVar40 = _lqc2(auStack_4f0);
    auVar45 = _vaddbc(in_vf0,auVar38);
    _vmove(auVar50);
    auVar38 = _vmulbc(auVar52,auVar40);
    auVar41 = _vaddbc(in_vf0,auVar41);
    auVar37 = _vmulbc(auVar45,auVar40);
    _sqc2(auVar44);
    auVar37 = _vadd(auVar38,auVar37);
    _sqc2(auVar47);
    auVar38 = _vmulbc(auVar41,auVar40);
    _sqc2(auVar50);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _vsub(in_vf0,auVar37);
    iVar24 = *(int *)(&DAT_00400084 + iVar20);
    auStack_4f0 = _sqc2(auVar37);
    auVar37 = _sqc2(auVar52);
    auStack_510 = _sqc2(auVar45);
    auStack_500 = _sqc2(auVar41);
    if (iVar24 == 2) {
      iVar24 = 3;
    }
    else if (iVar24 == 3) {
      iVar24 = 5;
    }
    else {
      iVar24 = (&DAT_00400018)[iVar24];
    }
    puVar22 = (undefined4 *)(*(int *)(iStack_128 + 0x54) + piVar15[iVar24 + 3] * 0x40);
    uStack_4d0 = *puVar22;
    uStack_4cc = puVar22[1];
    uStack_4c8 = puVar22[2];
    uStack_4c4 = puVar22[3];
    uStack_4c0 = puVar22[4];
    uStack_4bc = puVar22[5];
    uStack_4b8 = puVar22[6];
    uStack_4b4 = puVar22[7];
    uStack_4b0 = puVar22[8];
    uStack_4ac = puVar22[9];
    uStack_4a8 = puVar22[10];
    uStack_4a4 = puVar22[0xb];
    uStack_4a0 = puVar22[0xc];
    uStack_49c = puVar22[0xd];
    uStack_498 = puVar22[0xe];
    uStack_494 = puVar22[0xf];
    pauVar21 = (undefined1 (*) [16])FUN_00138378();
    auStack_460 = pauVar21[3];
    if (*(uint *)(&DAT_00400084 + iVar20) < 4) {
      auVar38 = _lqc2(*pauVar21);
      if (1 < *(uint *)(&DAT_00400084 + iVar20)) {
        auStack_460._4_4_ = DAT_004432a4;
        auStack_460._0_4_ = DAT_004432a0;
        auStack_460._8_4_ = DAT_004432a8;
        auStack_460._12_4_ = DAT_004432ac;
        goto LAB_0025ea5c;
      }
    }
    else {
LAB_0025ea5c:
      auVar38 = _lqc2(*pauVar21);
    }
    auVar50 = _lqc2(pauVar21[2]);
    iVar24 = iVar17 * 0x60;
    auVar52 = _lqc2(pauVar21[1]);
    auVar44._4_4_ = uStack_4ac;
    auVar44._0_4_ = uStack_4b0;
    auVar44._8_4_ = uStack_4a8;
    auVar44._12_4_ = uStack_4a4;
    auVar45 = _lqc2(auVar44);
    auVar40._4_4_ = uStack_4cc;
    auVar40._0_4_ = uStack_4d0;
    auVar40._8_4_ = uStack_4c8;
    auVar40._12_4_ = uStack_4c4;
    auVar40 = _lqc2(auVar40);
    auVar41._4_4_ = uStack_4bc;
    auVar41._0_4_ = uStack_4c0;
    auVar41._8_4_ = uStack_4b8;
    auVar41._12_4_ = uStack_4b4;
    auVar42 = _lqc2(auVar41);
    _sqc2(auVar45);
    _sqc2(auVar40);
    _sqc2(auVar42);
    _vmove(auVar38);
    _vmove(auVar52);
    auVar48 = _vaddbc(in_vf0,auVar52);
    _vmove(auVar50);
    auVar41 = _vaddbc(in_vf0,auVar38);
    auVar47._4_4_ = uStack_49c;
    auVar47._0_4_ = uStack_4a0;
    auVar47._8_4_ = uStack_498;
    auVar47._12_4_ = uStack_494;
    auVar44 = _lqc2(auVar47);
    auVar55 = _vaddbc(in_vf0,auVar38);
    _vmove(auVar40);
    _vmove(auVar42);
    _vmove(auVar45);
    _vmove(auVar48);
    auVar53 = _vaddbc(in_vf0,auVar42);
    _vmove(auVar41);
    auVar47 = _vaddbc(in_vf0,auVar40);
    _vmove(auVar55);
    auVar56 = _vaddbc(in_vf0,auVar40);
    auVar40 = _lqc2(auStack_460);
    auVar58 = _vaddbc(in_vf0,auVar50);
    auVar52 = _vaddbc(in_vf0,auVar52);
    auVar50 = _vaddbc(in_vf0,auVar50);
    _sqc2(auVar48);
    auVar38 = _vmulbc(auVar50,auVar40);
    _sqc2(auVar41);
    auVar41 = _vmulbc(auVar58,auVar40);
    _sqc2(auVar55);
    auVar41 = _vadd(auVar41,auVar38);
    _sqc2(auVar44);
    auVar38 = _vmulbc(auVar52,auVar40);
    _sqc2(auVar53);
    auVar38 = _vadd(auVar41,auVar38);
    _sqc2(auVar47);
    auVar38 = _vsub(in_vf0,auVar38);
    _sqc2(auVar56);
    _vmove(auVar53);
    _vmove(auVar47);
    auVar47 = _vaddbc(in_vf0,auVar45);
    auVar45 = _vaddbc(in_vf0,auVar45);
    _vmove(auVar56);
    auStack_460 = _sqc2(auVar38);
    auVar41 = _vaddbc(in_vf0,auVar42);
    auVar38 = _vmulbc(auVar47,auVar44);
    auVar40 = _vmulbc(auVar45,auVar44);
    auVar40 = _vadd(auVar38,auVar40);
    auVar38 = _vmulbc(auVar41,auVar44);
    auStack_490 = _sqc2(auVar58);
    auVar38 = _vadd(auVar40,auVar38);
    auStack_480 = _sqc2(auVar50);
    auVar40 = _vsub(in_vf0,auVar38);
    auStack_470 = _sqc2(auVar52);
    auStack_450 = _sqc2(auVar47);
    auStack_440 = _sqc2(auVar45);
    auStack_430 = _sqc2(auVar41);
    auStack_420 = _sqc2(auVar40);
    auVar38 = _sqc2(auVar40);
    uVar18 = *puVar23;
    auVar40 = _sqc2(auVar40);
    if (uVar18 == 3) {
LAB_0025ed44:
      auVar41 = _qmtc2(0x3f9c61aa);
      auVar41 = _vaddbc(in_vf0,auVar41);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar41 = _vsubi(auVar41,in_vuI);
      auVar44 = _vmaxbc(in_vf0,in_vf0);
      auVar41 = _vabs(auVar41);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar41,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar44,in_vuI);
      _vmaddai(auVar44,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar41,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar41 = _vmsubi(auVar44,in_vuI);
      auVar41 = _vabs(auVar41);
      _ctc2(0x3e800000);
      _vnop();
      auVar41 = _vsubi(auVar41,in_vuI);
      auVar52 = _vmul(auVar41,auVar41);
      _ctc2(0xc2992661);
      _vnop();
      auVar44 = _vmuli(auVar41,in_vuI);
      auVar48 = _vmul(auVar52,auVar52);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar50 = _vmuli(auVar41,in_vuI);
      auVar47 = _vmul(auVar44,auVar52);
      _ctc2(0x42a33457);
      _vnop();
      auVar45 = _vmuli(auVar41,in_vuI);
      auVar44 = _vmul(auVar48,auVar48);
      _ctc2(0xc2255de0);
      _vnop();
      auVar42 = _vmuli(auVar41,in_vuI);
      _lqc2(auStack_310);
      _vmula(auVar42,auVar52);
      _vmadda(auVar47,auVar48);
      _ctc2(0x40c90fda);
      _vmadda(auVar45,auVar48);
      _vmaddai(auVar41,in_vuI);
      auVar41 = _vmadd(auVar50,auVar44);
      _lqc2(auStack_300);
      auVar44 = _vsub(in_vf0,auVar41);
      auVar47 = _vaddbc(in_vf0,auVar41);
      auVar50 = _vaddbc(in_vf0,auVar44);
      _vmove(auVar47);
      _vmove(auVar50);
      auVar52 = _vaddbc(in_vf0,auVar41);
      auVar45 = _vaddbc(in_vf0,auVar41);
      _sqc2(auVar47);
      auVar44 = _qmtc2(0);
      _sqc2(auVar50);
      auVar41 = _pextlw(0x3f800000,0);
      uVar19 = auVar41._0_8_;
LAB_0025eea0:
      _vmove(auVar45);
      auVar47 = _vadd(in_vf0,in_vf0);
      _vmove(auVar52);
      auVar50 = _vaddbc(in_vf0,auVar44);
      auVar41 = _pextlw(0,uVar19);
      auVar44 = _vaddbc(in_vf0,auVar44);
      _sqc2(auVar52);
      _sqc2(auVar45);
      auStack_390 = _sqc2(auVar44);
      auStack_380 = _sqc2(auVar50);
      uStack_370 = auVar41._0_4_;
      uStack_36c = auVar41._4_4_;
      uStack_368 = auVar41._8_4_;
      uStack_364 = auVar41._12_4_;
      auStack_360 = _sqc2(auVar47);
      _sqc2(auVar44);
      _sqc2(auVar50);
      _auStack_2d0 = _sqc2(auVar47);
      _sqc2(auVar47);
      _sqc2(auVar44);
      _sqc2(auVar50);
      _sqc2(auVar47);
    }
    else {
      if (uVar18 < 4) {
        if (uVar18 == 2) {
LAB_0025ebe4:
          auVar41 = _qmtc2(0xbf9c61aa);
          auVar41 = _vaddbc(in_vf0,auVar41);
          _ctc2(0x3fc90fdb);
          _vnop();
          auVar41 = _vsubi(auVar41,in_vuI);
          auVar44 = _vmaxbc(in_vf0,in_vf0);
          auVar41 = _vabs(auVar41);
          _ctc2(0xbe22f983);
          _vnop();
          _vmulai(auVar41,in_vuI);
          _ctc2(0x4b400000);
          _vnop();
          _vmsubai(auVar44,in_vuI);
          _vmaddai(auVar44,in_vuI);
          _ctc2(0xbe22f983);
          _vnop();
          _vmsubai(auVar41,in_vuI);
          _ctc2(0x3f000000);
          _vnop();
          auVar41 = _vmsubi(auVar44,in_vuI);
          auVar41 = _vabs(auVar41);
          _ctc2(0x3e800000);
          _vnop();
          auVar41 = _vsubi(auVar41,in_vuI);
          auVar52 = _vmul(auVar41,auVar41);
          _ctc2(0xc2992661);
          _vnop();
          auVar44 = _vmuli(auVar41,in_vuI);
          auVar48 = _vmul(auVar52,auVar52);
          auVar47 = _vmul(auVar44,auVar52);
          _ctc2(0x42a33457);
          _vnop();
          auVar45 = _vmuli(auVar41,in_vuI);
          _ctc2(0x421ed7b7);
          _vnop();
          auVar50 = _vmuli(auVar41,in_vuI);
          auVar44 = _vmul(auVar48,auVar48);
          _ctc2(0xc2255de0);
          _vnop();
          auVar42 = _vmuli(auVar41,in_vuI);
          _lqc2(auStack_310);
          _vmula(auVar42,auVar52);
          _vmadda(auVar47,auVar48);
          _ctc2(0x40c90fda);
          _vmadda(auVar45,auVar48);
          _vmaddai(auVar41,in_vuI);
          auVar41 = _vmadd(auVar50,auVar44);
          _lqc2(auStack_300);
          auVar44 = _vsub(in_vf0,auVar41);
          auVar47 = _vaddbc(in_vf0,auVar41);
          auVar50 = _vaddbc(in_vf0,auVar44);
          _vmove(auVar47);
          _vmove(auVar50);
          auVar45 = _vaddbc(in_vf0,auVar41);
          auVar52 = _vaddbc(in_vf0,auVar41);
          _sqc2(auVar47);
          auVar41 = _pextlw(0x3f800000,0);
          uVar19 = auVar41._0_8_;
          auVar44 = _qmtc2(0);
          _sqc2(auVar50);
          goto LAB_0025eea0;
        }
      }
      else {
        if (uVar18 == 5) goto LAB_0025ebe4;
        if (uVar18 == 6) goto LAB_0025ed44;
      }
      auStack_390._4_4_ = DAT_00443354;
      auStack_390._0_4_ = DAT_00443350;
      auStack_390._8_4_ = DAT_00443358;
      auStack_390._12_4_ = DAT_0044335c;
      auStack_380._4_4_ = DAT_00443364;
      auStack_380._0_4_ = DAT_00443360;
      auStack_380._8_4_ = DAT_00443368;
      auStack_380._12_4_ = DAT_0044336c;
      uStack_370 = DAT_00443370;
      uStack_36c = DAT_00443374;
      uStack_368 = DAT_00443378;
      uStack_364 = DAT_0044337c;
      auStack_360 = _DAT_00443380;
    }
    auVar45 = _lqc2(*(undefined1 (*) [16])(&DAT_0043ebd0 + iVar24));
    auVar41 = _lqc2(*(undefined1 (*) [16])(&DAT_0043ebe0 + iVar24));
    auVar52 = _lqc2(auStack_390);
    auVar47 = _lqc2(auStack_380);
    auVar50._4_4_ = uStack_36c;
    auVar50._0_4_ = uStack_370;
    auVar50._8_4_ = uStack_368;
    auVar50._12_4_ = uStack_364;
    auVar44 = _lqc2(auVar50);
    _vmulabc(auVar52,auVar45);
    _vmaddabc(auVar47,auVar45);
    auVar42 = _vmaddbc(auVar44,auVar45);
    _vmulabc(auVar52,auVar41);
    _vmaddabc(auVar47,auVar41);
    auVar48 = _vmaddbc(auVar44,auVar41);
    auVar50 = _lqc2(*(undefined1 (*) [16])(&DAT_0043ebf0 + iVar24));
    auVar41 = _lqc2(auVar38);
    auVar38 = _lqc2(auStack_360);
    _vmulabc(auVar52,auVar50);
    _vmaddabc(auVar47,auVar50);
    auVar53 = _vmaddbc(auVar44,auVar50);
    _vmulabc(auVar52,auVar41);
    _vmaddabc(auVar47,auVar41);
    _vmaddabc(auVar44,auVar41);
    auVar45 = _vmaddbc(auVar38,in_vf0);
    _sqc2(auVar42);
    _sqc2(auVar48);
    _sqc2(auVar53);
    _sqc2(auVar45);
    auVar38 = _sqc2(auVar42);
    auVar41 = _sqc2(auVar48);
    _sqc2(auVar53);
    _sqc2(auVar45);
    auVar44 = _sqc2(auVar42);
    auVar47 = _sqc2(auVar48);
    _sqc2(auVar53);
    _sqc2(auVar45);
    auVar50 = _sqc2(auVar42);
    auVar52 = _sqc2(auVar48);
    _sqc2(auVar53);
    auVar45 = _sqc2(auVar45);
    auVar42 = _sqc2(auVar42);
    auVar48 = _sqc2(auVar48);
    auVar53 = _sqc2(auVar53);
    switch(*(undefined4 *)(&DAT_00400084 + iVar20)) {
    case 5:
    case 9:
      auVar38 = _qmtc2(0xbf9c61aa);
      auVar38 = _vaddbc(in_vf0,auVar38);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar38 = _vsubi(auVar38,in_vuI);
      auVar41 = _vmaxbc(in_vf0,in_vf0);
      auVar38 = _vabs(auVar38);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar38,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar41,in_vuI);
      _vmaddai(auVar41,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar38,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar38 = _vmsubi(auVar41,in_vuI);
      auVar38 = _vabs(auVar38);
      _ctc2(0x3e800000);
      _vnop();
      auVar38 = _vsubi(auVar38,in_vuI);
      auVar52 = _vmul(auVar38,auVar38);
      _ctc2(0xc2992661);
      _vnop();
      auVar41 = _vmuli(auVar38,in_vuI);
      auVar56 = _vmul(auVar52,auVar52);
      auVar44 = _vmul(auVar41,auVar52);
      _ctc2(0xc2255de0);
      _vnop();
      auVar55 = _vmuli(auVar38,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar45 = _vmuli(auVar38,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar47 = _vmuli(auVar38,in_vuI);
      auVar41 = _vmul(auVar56,auVar56);
      _lqc2(_auStack_2d0);
      _vmula(auVar55,auVar52);
      _vmadda(auVar44,auVar56);
      _ctc2(0x40c90fda);
      _vmadda(auVar45,auVar56);
      _vmaddai(auVar38,in_vuI);
      auVar38 = _vmadd(auVar47,auVar41);
      _lqc2(auVar50);
      auVar41 = _vsub(in_vf0,auVar38);
      auVar44 = _vaddbc(in_vf0,auVar38);
      auVar47 = _vaddbc(in_vf0,auVar41);
      _vmove(auVar44);
      _vmove(auVar47);
      auVar50 = _vaddbc(in_vf0,auVar38);
      auVar52 = _vaddbc(in_vf0,auVar38);
      _sqc2(auVar44);
      auVar41 = _qmtc2(0);
      _sqc2(auVar47);
      auVar38 = _pextlw(0x3f800000,0);
      uVar19 = auVar38._0_8_;
      _vmove(auVar52);
      goto LAB_0025f2b0;
    case 6:
    case 10:
      auVar38 = _qmtc2(0x3f9c61aa);
      auVar38 = _vaddbc(in_vf0,auVar38);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar38 = _vsubi(auVar38,in_vuI);
      auVar41 = _vmaxbc(in_vf0,in_vf0);
      auVar38 = _vabs(auVar38);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar38,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar41,in_vuI);
      _vmaddai(auVar41,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar38,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar38 = _vmsubi(auVar41,in_vuI);
      auVar38 = _vabs(auVar38);
      _ctc2(0x3e800000);
      _vnop();
      auVar38 = _vsubi(auVar38,in_vuI);
      auVar52 = _vmul(auVar38,auVar38);
      _ctc2(0xc2992661);
      _vnop();
      auVar41 = _vmuli(auVar38,in_vuI);
      auVar56 = _vmul(auVar52,auVar52);
      auVar44 = _vmul(auVar41,auVar52);
      _ctc2(0x42a33457);
      _vnop();
      auVar45 = _vmuli(auVar38,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar47 = _vmuli(auVar38,in_vuI);
      auVar41 = _vmul(auVar56,auVar56);
      _ctc2(0xc2255de0);
      _vnop();
      auVar55 = _vmuli(auVar38,in_vuI);
      _lqc2(_auStack_2d0);
      _vmula(auVar55,auVar52);
      _vmadda(auVar44,auVar56);
      _ctc2(0x40c90fda);
      _vmadda(auVar45,auVar56);
      _vmaddai(auVar38,in_vuI);
      auVar38 = _vmadd(auVar47,auVar41);
      _lqc2(auVar50);
      auVar41 = _vsub(in_vf0,auVar38);
      auVar44 = _vaddbc(in_vf0,auVar38);
      auVar47 = _vaddbc(in_vf0,auVar41);
      _vmove(auVar44);
      _vmove(auVar47);
      auVar50 = _vaddbc(in_vf0,auVar38);
      auVar52 = _vaddbc(in_vf0,auVar38);
      _sqc2(auVar44);
      auVar41 = _qmtc2(0);
      _sqc2(auVar47);
      auVar38 = _pextlw(0x3f800000,0);
      uVar19 = auVar38._0_8_;
      _vmove(auVar52);
LAB_0025f2b0:
      auVar38 = _vadd(in_vf0,in_vf0);
      _vmove(auVar50);
      auVar44 = _vaddbc(in_vf0,auVar41);
      auStack_330 = _pextlw(0,uVar19);
      auVar41 = _vaddbc(in_vf0,auVar41);
      _sqc2(auVar50);
      _sqc2(auVar52);
      auStack_350 = _sqc2(auVar41);
      auStack_340 = _sqc2(auVar44);
      auStack_320 = _sqc2(auVar38);
      _sqc2(auVar41);
      _sqc2(auVar44);
      _sqc2(auVar38);
      _sqc2(auVar38);
      _sqc2(auVar41);
      _sqc2(auVar44);
      _sqc2(auVar38);
      break;
    case 7:
      auVar52 = _qmtc2(0xbf1c61aa);
      auVar50 = _pextlw(0x3f34fdf4,0);
      auVar52 = _vaddbc(in_vf0,auVar52);
      auVar50 = _pextlw(0x3f34fdf4,auVar50._0_8_);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar52 = _vsubi(auVar52,in_vuI);
      auVar61 = _qmtc2(auVar50._0_4_);
      auVar54 = _vmaxbc(in_vf0,in_vf0);
      auVar50 = _vabs(auVar52);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar50,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar54,in_vuI);
      _vmaddai(auVar54,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar50,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar55 = _vmsubi(auVar54,in_vuI);
      auVar50 = _vaddbc(in_vf0,in_vf0);
      auVar52 = _vmul(auVar61,auVar61);
      _vaddabc(auVar52,auVar52);
      auVar50 = _vmaddbc(auVar50,auVar52);
      auVar52 = _vabs(auVar55);
      auVar55 = _vmove(auVar61);
      _ctc2(0x3e800000);
      _vnop();
      auVar52 = _vsubi(auVar52,in_vuI);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar50);
      uVar30 = _vwaitq();
      auVar58 = _vmulq(auVar55,uVar30);
      auVar56 = _qmtc2(0x3e32b8c2);
      auVar49 = _vmul(auVar52,auVar52);
      auVar50 = _qmtc2(0x3f800000);
      _lqc2(auStack_120);
      auVar51 = _vmul(auVar49,auVar49);
      _ctc2(0xc2992661);
      _vnop();
      auVar55 = _vmuli(auVar52,in_vuI);
      auVar50 = _vaddbc(in_vf0,auVar50);
      auStack_120 = _sqc2(auVar50);
      auVar46 = _vmul(auVar51,auVar51);
      auVar43 = _vmul(auVar55,auVar49);
      _ctc2(0xc2255de0);
      _vnop();
      auVar57 = _vmuli(auVar52,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar55 = _vmuli(auVar52,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar50 = _vmuli(auVar52,in_vuI);
      _vmula(auVar57,auVar49);
      _vmadda(auVar43,auVar51);
      _ctc2(0x40c90fda);
      _vmadda(auVar55,auVar51);
      _vmaddai(auVar52,in_vuI);
      auVar55 = _vmadd(auVar50,auVar46);
      auVar52 = _vmulbc(auVar58,auVar58);
      _lqc2(auStack_110);
      auVar50 = _vmulbc(auVar58,auVar58);
      _vaddbc(in_vf0,auVar52);
      auVar52 = _vmul(auVar58,auVar58);
      _vaddbc(in_vf0,auVar50);
      auVar57 = _vsub(in_vf0,auVar52);
      auVar50 = _lqc2(auStack_120);
      auVar52 = _vaddbc(in_vf0,auVar56);
      auVar50 = _vsubbc(auVar50,auVar55);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar56 = _vsubi(auVar52,in_vuI);
      auVar55 = _vaddbc(in_vf0,auVar50);
      auVar50 = _vmulbc(auVar58,auVar58);
      auVar52 = _lqc2(auStack_120);
      auVar50 = _vaddbc(in_vf0,auVar50);
      auVar50 = _vmulbc(auVar50,auVar55);
      auVar52 = _vaddbc(auVar57,auVar52);
      auStack_110 = _sqc2(auVar50);
      auVar58 = _vmulbc(auVar58,auVar55);
      auVar57 = _vmulbc(auVar52,auVar55);
      _lqc2(auVar45);
      auVar50 = _lqc2(auStack_120);
      auVar45 = _vabs(auVar56);
      auVar50 = _vsubbc(auVar50,auVar57);
      _lqc2(auVar44);
      auVar52 = _lqc2(auStack_110);
      auVar43 = _vaddbc(in_vf0,auVar50);
      auVar44 = _vsubbc(auVar52,auVar58);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar45,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar54,in_vuI);
      _vmaddai(auVar54,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar45,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar45 = _vmsubi(auVar54,in_vuI);
      auVar49 = _vaddbc(in_vf0,auVar44);
      auVar44 = _lqc2(auStack_120);
      auVar50 = _vaddbc(auVar52,auVar58);
      auVar52 = _vabs(auVar45);
      _ctc2(0x3e800000);
      _vnop();
      auVar55 = _vsubi(auVar52,in_vuI);
      auVar45 = _vsubbc(auVar44,auVar57);
      auVar46 = _vmul(auVar55,auVar55);
      auVar44 = _lqc2(auStack_110);
      auVar54 = _vmul(auVar46,auVar46);
      auVar56 = _vaddbc(auVar44,auVar58);
      _ctc2(0xc2992661);
      _vnop();
      auVar52 = _vmuli(auVar55,in_vuI);
      auVar44 = _vmul(auVar54,auVar54);
      auVar52 = _vmul(auVar52,auVar46);
      _ctc2(0x42a33457);
      _vnop();
      auVar59 = _vmuli(auVar55,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar51 = _vmuli(auVar55,in_vuI);
      _ctc2(0xc2255de0);
      _vnop();
      auVar60 = _vmuli(auVar55,in_vuI);
      _vmula(auVar60,auVar46);
      _vmadda(auVar52,auVar54);
      _ctc2(0x40c90fda);
      _vmadda(auVar59,auVar54);
      _vmaddai(auVar55,in_vuI);
      auVar52 = _vmadd(auVar51,auVar44);
      _vmove(auVar43);
      _sqc2(auVar43);
      auVar46 = _vaddbc(in_vf0,auVar50);
      auVar44 = _lqc2(auStack_110);
      auVar43 = _qmtc2(0);
      _lqc2(auVar38);
      auVar38 = _vsubbc(auVar44,auVar58);
      _vmove(auVar46);
      auVar55 = _vaddbc(in_vf0,auVar43);
      auVar50 = _vaddbc(in_vf0,auVar38);
      _lqc2(auVar47);
      _lqc2(auVar41);
      auVar41 = _vaddbc(in_vf0,auVar56);
      auVar38 = _lqc2(auStack_120);
      goto LAB_0025f8f0;
    case 8:
      auVar52 = _qmtc2(0x3f1c61aa);
      auVar50 = _pextlw(0x3f34fdf4,0);
      auVar52 = _vaddbc(in_vf0,auVar52);
      auVar50 = _pextlw(0x3f34fdf4,auVar50._0_8_);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar52 = _vsubi(auVar52,in_vuI);
      auVar61 = _qmtc2(auVar50._0_4_);
      auVar54 = _vmaxbc(in_vf0,in_vf0);
      auVar50 = _vabs(auVar52);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar50,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar54,in_vuI);
      _vmaddai(auVar54,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar50,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar55 = _vmsubi(auVar54,in_vuI);
      auVar50 = _vaddbc(in_vf0,in_vf0);
      auVar52 = _vmul(auVar61,auVar61);
      _vaddabc(auVar52,auVar52);
      auVar50 = _vmaddbc(auVar50,auVar52);
      auVar52 = _vabs(auVar55);
      auVar55 = _vmove(auVar61);
      _ctc2(0x3e800000);
      _vnop();
      auVar52 = _vsubi(auVar52,in_vuI);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar50);
      uVar30 = _vwaitq();
      auVar58 = _vmulq(auVar55,uVar30);
      auVar56 = _qmtc2(0x3e32b8c2);
      auVar49 = _vmul(auVar52,auVar52);
      auVar50 = _qmtc2(0x3f800000);
      _lqc2(auStack_100);
      auVar51 = _vmul(auVar49,auVar49);
      _ctc2(0xc2992661);
      _vnop();
      auVar55 = _vmuli(auVar52,in_vuI);
      auVar50 = _vaddbc(in_vf0,auVar50);
      auStack_100 = _sqc2(auVar50);
      auVar46 = _vmul(auVar51,auVar51);
      auVar43 = _vmul(auVar55,auVar49);
      _ctc2(0xc2255de0);
      _vnop();
      auVar57 = _vmuli(auVar52,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar55 = _vmuli(auVar52,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar50 = _vmuli(auVar52,in_vuI);
      _vmula(auVar57,auVar49);
      _vmadda(auVar43,auVar51);
      _ctc2(0x40c90fda);
      _vmadda(auVar55,auVar51);
      _vmaddai(auVar52,in_vuI);
      auVar55 = _vmadd(auVar50,auVar46);
      auVar52 = _vmulbc(auVar58,auVar58);
      _lqc2(auStack_f0);
      auVar50 = _vmulbc(auVar58,auVar58);
      _vaddbc(in_vf0,auVar52);
      auVar52 = _vmul(auVar58,auVar58);
      _vaddbc(in_vf0,auVar50);
      auVar57 = _vsub(in_vf0,auVar52);
      auVar50 = _lqc2(auStack_100);
      auVar52 = _vaddbc(in_vf0,auVar56);
      auVar50 = _vsubbc(auVar50,auVar55);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar56 = _vsubi(auVar52,in_vuI);
      auVar55 = _vaddbc(in_vf0,auVar50);
      auVar50 = _vmulbc(auVar58,auVar58);
      auVar52 = _lqc2(auStack_100);
      auVar50 = _vaddbc(in_vf0,auVar50);
      auVar50 = _vmulbc(auVar50,auVar55);
      auVar52 = _vaddbc(auVar57,auVar52);
      auStack_f0 = _sqc2(auVar50);
      auVar58 = _vmulbc(auVar58,auVar55);
      auVar57 = _vmulbc(auVar52,auVar55);
      _lqc2(auVar45);
      auVar50 = _lqc2(auStack_100);
      auVar45 = _vabs(auVar56);
      auVar50 = _vsubbc(auVar50,auVar57);
      _lqc2(auVar44);
      auVar52 = _lqc2(auStack_f0);
      auVar43 = _vaddbc(in_vf0,auVar50);
      auVar44 = _vsubbc(auVar52,auVar58);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar45,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar54,in_vuI);
      _vmaddai(auVar54,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar45,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar45 = _vmsubi(auVar54,in_vuI);
      auVar49 = _vaddbc(in_vf0,auVar44);
      auVar44 = _lqc2(auStack_100);
      auVar50 = _vaddbc(auVar52,auVar58);
      auVar52 = _vabs(auVar45);
      _ctc2(0x3e800000);
      _vnop();
      auVar55 = _vsubi(auVar52,in_vuI);
      auVar45 = _vsubbc(auVar44,auVar57);
      auVar46 = _vmul(auVar55,auVar55);
      auVar44 = _lqc2(auStack_f0);
      auVar54 = _vmul(auVar46,auVar46);
      auVar56 = _vaddbc(auVar44,auVar58);
      _ctc2(0xc2992661);
      _vnop();
      auVar52 = _vmuli(auVar55,in_vuI);
      auVar44 = _vmul(auVar54,auVar54);
      auVar52 = _vmul(auVar52,auVar46);
      _ctc2(0x42a33457);
      _vnop();
      auVar59 = _vmuli(auVar55,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar51 = _vmuli(auVar55,in_vuI);
      _ctc2(0xc2255de0);
      _vnop();
      auVar60 = _vmuli(auVar55,in_vuI);
      _vmula(auVar60,auVar46);
      _vmadda(auVar52,auVar54);
      _ctc2(0x40c90fda);
      _vmadda(auVar59,auVar54);
      _vmaddai(auVar55,in_vuI);
      auVar52 = _vmadd(auVar51,auVar44);
      _vmove(auVar43);
      _sqc2(auVar43);
      auVar46 = _vaddbc(in_vf0,auVar50);
      auVar44 = _lqc2(auStack_f0);
      auVar43 = _qmtc2(0);
      _lqc2(auVar38);
      auVar38 = _vsubbc(auVar44,auVar58);
      _vmove(auVar46);
      auVar55 = _vaddbc(in_vf0,auVar43);
      auVar50 = _vaddbc(in_vf0,auVar38);
      _lqc2(auVar47);
      _lqc2(auVar41);
      auVar41 = _vaddbc(in_vf0,auVar56);
      auVar38 = _lqc2(auStack_100);
LAB_0025f8f0:
      auVar43 = _vaddbc(in_vf0,auVar43);
      _vmove(auVar55);
      auVar51 = _vaddbc(in_vf0,auVar52);
      auVar56 = _vsubbc(auVar38,auVar57);
      auVar47 = _vsubbc(auVar44,auVar58);
      auVar38 = _vsub(in_vf0,auVar52);
      _vmove(auVar49);
      _vmove(auVar41);
      auVar57 = _vaddbc(in_vf0,auVar45);
      _vmove(auVar51);
      auVar47 = _vaddbc(in_vf0,auVar47);
      auVar45 = _vaddbc(in_vf0,auVar38);
      auVar38 = _pextlw(0,0x3f800000);
      _sqc2(auVar49);
      auVar38 = _pextlw(0,auVar38._0_8_);
      _sqc2(auVar41);
      auVar44 = _vaddbc(auVar44,auVar58);
      _vmove(auVar57);
      auVar41 = _vadd(in_vf0,in_vf0);
      _vmove(auVar43);
      auVar58 = _vaddbc(in_vf0,auVar44);
      _vmove(auVar47);
      auVar49 = _vaddbc(in_vf0,auVar52);
      auVar44 = _qmtc2(auVar38._0_4_);
      auVar38 = _vaddbc(in_vf0,auVar56);
      _sqc2(auVar46);
      _sqc2(auVar57);
      _sqc2(auVar55);
      _sqc2(auVar43);
      _sqc2(auVar47);
      _sqc2(auVar50);
      _sqc2(auVar58);
      _sqc2(auVar41);
      _sqc2(auVar44);
      _sqc2(auVar51);
      _sqc2(auVar49);
      auStack_4e0 = _sqc2(auVar61);
      _sqc2(auVar38);
      _vmove(auVar49);
      _sqc2(auVar41);
      auVar47 = _vaddbc(in_vf0,auVar52);
      _sqc2(auVar44);
      _vmulabc(auVar44,auVar38);
      _vmaddabc(auVar45,auVar38);
      auVar56 = _vmaddbc(auVar47,auVar38);
      _vmulabc(auVar44,auVar41);
      _vmaddabc(auVar45,auVar41);
      _vmaddabc(auVar47,auVar41);
      auVar57 = _vmaddbc(auVar41,in_vf0);
      _sqc2(auVar45);
      _vmulabc(auVar44,auVar50);
      _vmaddabc(auVar45,auVar50);
      auVar52 = _vmaddbc(auVar47,auVar50);
      _vmulabc(auVar44,auVar58);
      _vmaddabc(auVar45,auVar58);
      auVar55 = _vmaddbc(auVar47,auVar58);
      _sqc2(auVar47);
      _sqc2(auVar41);
      _sqc2(auVar50);
      _sqc2(auVar58);
      _sqc2(auVar38);
      _sqc2(auVar41);
      _sqc2(auVar41);
      _sqc2(auVar44);
      _sqc2(auVar45);
      _sqc2(auVar47);
      auStack_350 = _sqc2(auVar52);
      auStack_340 = _sqc2(auVar55);
      auStack_330 = _sqc2(auVar56);
      auStack_320 = _sqc2(auVar57);
      _sqc2(auVar52);
      _sqc2(auVar55);
      _sqc2(auVar56);
      _sqc2(auVar57);
      _sqc2(auVar52);
      _sqc2(auVar55);
      _sqc2(auVar56);
      _sqc2(auVar57);
      break;
    case 0xb:
    case 0xc:
      auVar38 = _qmtc2(0xbe32b8c2);
      auVar38 = _vaddbc(in_vf0,auVar38);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar41 = _vsubi(auVar38,in_vuI);
      auVar38 = _vmaxbc(in_vf0,in_vf0);
      auVar41 = _vabs(auVar41);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar41,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar38,in_vuI);
      _vmaddai(auVar38,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar41,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar38 = _vmsubi(auVar38,in_vuI);
      auVar38 = _vabs(auVar38);
      _ctc2(0x3e800000);
      _vnop();
      auVar38 = _vsubi(auVar38,in_vuI);
      auVar47 = _vmul(auVar38,auVar38);
      _ctc2(0xc2992661);
      _vnop();
      auVar41 = _vmuli(auVar38,in_vuI);
      auVar56 = _vmul(auVar47,auVar47);
      _ctc2(0x42a33457);
      _vnop();
      auVar55 = _vmuli(auVar38,in_vuI);
      _lqc2(auVar50);
      auVar50 = _qmtc2(0);
      auVar44 = _vmul(auVar41,auVar47);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar45 = _vmuli(auVar38,in_vuI);
      auVar41 = _vmul(auVar56,auVar56);
      _ctc2(0xc2255de0);
      _vnop();
      auVar58 = _vmuli(auVar38,in_vuI);
      _lqc2(auVar52);
      _vmula(auVar58,auVar47);
      _vmadda(auVar44,auVar56);
      _ctc2(0x40c90fda);
      _vmadda(auVar55,auVar56);
      _vmaddai(auVar38,in_vuI);
      auVar44 = _vmadd(auVar45,auVar41);
      auVar38 = _vaddbc(in_vf0,auVar50);
      auVar47 = _vaddbc(in_vf0,auVar50);
      _vmove(auVar38);
      auVar50 = _vaddbc(in_vf0,auVar44);
      _sqc2(auVar38);
      _sqc2(auVar47);
      auVar41 = _vsub(in_vf0,auVar44);
      _vmove(auVar47);
      auVar47 = _vaddbc(in_vf0,auVar44);
      auVar38 = _pextlw(0,0x3f800000);
      _vmove(auVar50);
      auStack_350 = _pextlw(0,auVar38._0_8_);
      auVar41 = _vaddbc(in_vf0,auVar41);
      _vmove(auVar47);
      auVar38 = _vadd(in_vf0,in_vf0);
      auVar44 = _vaddbc(in_vf0,auVar44);
      _sqc2(auVar50);
      _sqc2(auVar47);
      auStack_340 = _sqc2(auVar41);
      auStack_330 = _sqc2(auVar44);
      auStack_320 = _sqc2(auVar38);
      _sqc2(auVar41);
      _sqc2(auVar44);
      _sqc2(auVar38);
      _sqc2(auVar38);
      _sqc2(auVar41);
      _sqc2(auVar44);
      _sqc2(auVar38);
      break;
    default:
      auStack_350._4_4_ = DAT_00443354;
      auStack_350._0_4_ = DAT_00443350;
      auStack_350._8_4_ = DAT_00443358;
      auStack_350._12_4_ = DAT_0044335c;
      auStack_340._4_4_ = DAT_00443364;
      auStack_340._0_4_ = DAT_00443360;
      auStack_340._8_4_ = DAT_00443368;
      auStack_340._12_4_ = DAT_0044336c;
      auStack_330._4_4_ = DAT_00443374;
      auStack_330._0_4_ = DAT_00443370;
      auStack_330._8_4_ = DAT_00443378;
      auStack_330._12_4_ = DAT_0044337c;
      auStack_320 = _DAT_00443380;
    }
    auVar50 = _lqc2(*(undefined1 (*) [16])(&DAT_0043ec00 + iVar24));
    auVar38 = _lqc2(*(undefined1 (*) [16])(&DAT_0043ec10 + iVar24));
    auVar47 = _lqc2(auStack_350);
    pauVar21 = pauVar16 + 3;
    auVar44 = _lqc2(auStack_340);
    auVar41 = _lqc2(auStack_330);
    _vmulabc(auVar47,auVar50);
    _vmaddabc(auVar44,auVar50);
    auVar58 = _vmaddbc(auVar41,auVar50);
    _vmulabc(auVar47,auVar38);
    _vmaddabc(auVar44,auVar38);
    auVar56 = _vmaddbc(auVar41,auVar38);
    auVar50 = _lqc2(*(undefined1 (*) [16])(&DAT_0043ec20 + iVar24));
    auVar40 = _lqc2(auVar40);
    auVar38 = _lqc2(auStack_320);
    auVar57 = _lqc2(auStack_420);
    _vmulabc(auVar47,auVar50);
    _vmaddabc(auVar44,auVar50);
    auVar55 = _vmaddbc(auVar41,auVar50);
    _vmulabc(auVar47,auVar40);
    _vmaddabc(auVar44,auVar40);
    _vmaddabc(auVar41,auVar40);
    auVar38 = _vmaddbc(auVar38,in_vf0);
    auVar47 = _lqc2(auVar37);
    auVar44 = _lqc2(auStack_510);
    auVar41 = _lqc2(auStack_500);
    auVar37 = _lqc2(auVar34);
    auVar34 = _lqc2(auVar35);
    _sqc2(auVar38);
    _vmulabc(auVar47,auVar37);
    _vmaddabc(auVar44,auVar37);
    auVar37 = _vmaddbc(auVar41,auVar37);
    _vmulabc(auVar47,auVar34);
    _vmaddabc(auVar44,auVar34);
    auVar40 = _vmaddbc(auVar41,auVar34);
    _sqc2(auVar38);
    _sqc2(auVar38);
    _sqc2(auVar38);
    _sqc2(auVar58);
    _sqc2(auVar56);
    _sqc2(auVar55);
    _sqc2(auVar58);
    _sqc2(auVar56);
    _sqc2(auVar55);
    _sqc2(auVar58);
    _sqc2(auVar56);
    _sqc2(auVar55);
    _sqc2(auVar58);
    _sqc2(auVar56);
    _sqc2(auVar55);
    _sqc2(auVar58);
    _sqc2(auVar56);
    _sqc2(auVar55);
    _sqc2(auVar57);
    _sqc2(auVar37);
    auVar36 = _lqc2(auVar36);
    auVar35 = _lqc2(auVar39);
    auVar34 = _lqc2(auStack_4f0);
    _vmulabc(auVar47,auVar36);
    _vmaddabc(auVar44,auVar36);
    auVar36 = _vmaddbc(auVar41,auVar36);
    _vmulabc(auVar47,auVar35);
    _vmaddabc(auVar44,auVar35);
    _vmaddabc(auVar41,auVar35);
    auVar39 = _vmaddbc(auVar34,in_vf0);
    auVar35 = _lqc2(auVar42);
    auVar34 = _lqc2(auVar48);
    _vmulabc(auVar37,auVar35);
    _vmaddabc(auVar40,auVar35);
    auVar47 = _vmaddbc(auVar36,auVar35);
    _vmulabc(auVar37,auVar34);
    _vmaddabc(auVar40,auVar34);
    auVar48 = _vmaddbc(auVar36,auVar34);
    auVar35 = _lqc2(auVar53);
    auVar34 = _lqc2(auStack_420);
    _vmulabc(auVar37,auVar35);
    _vmaddabc(auVar40,auVar35);
    auVar50 = _vmaddbc(auVar36,auVar35);
    _vmulabc(auVar37,auVar34);
    _vmaddabc(auVar40,auVar34);
    _vmaddabc(auVar36,auVar34);
    auVar34 = _vmaddbc(auVar39,in_vf0);
    _sqc2(auVar40);
    _sqc2(auVar36);
    _sqc2(auVar39);
    _sqc2(auVar37);
    _sqc2(auVar40);
    _sqc2(auVar36);
    _sqc2(auVar39);
    auStack_150 = _sqc2(auVar34);
    auStack_190 = _sqc2(auVar34);
    auStack_1d0 = _sqc2(auVar34);
    auStack_3e0 = _sqc2(auVar34);
    auStack_180 = _sqc2(auVar47);
    auStack_170 = _sqc2(auVar48);
    auStack_160 = _sqc2(auVar50);
    auStack_1c0 = _sqc2(auVar47);
    auStack_1b0 = _sqc2(auVar48);
    auStack_1a0 = _sqc2(auVar50);
    _sqc2(auVar47);
    _sqc2(auVar48);
    _sqc2(auVar50);
    auStack_410 = _sqc2(auVar47);
    auStack_400 = _sqc2(auVar48);
    auStack_3f0 = _sqc2(auVar50);
    _sqc2(auVar47);
    _sqc2(auVar48);
    _sqc2(auVar50);
    _sqc2(auVar34);
    auVar40 = _lqc2(auStack_480);
    auVar36 = _lqc2(auStack_470);
    auVar44 = _lqc2(auStack_490);
    auVar38._4_4_ = uStack_4cc;
    auVar38._0_4_ = uStack_4d0;
    auVar38._8_4_ = uStack_4c8;
    auVar38._12_4_ = uStack_4c4;
    auVar35 = _lqc2(auVar38);
    auVar52._4_4_ = uStack_4bc;
    auVar52._0_4_ = uStack_4c0;
    auVar52._8_4_ = uStack_4b8;
    auVar52._12_4_ = uStack_4b4;
    auVar34 = _lqc2(auVar52);
    _vmulabc(auVar44,auVar35);
    _vmaddabc(auVar40,auVar35);
    auVar37 = _vmaddbc(auVar36,auVar35);
    _vmulabc(auVar44,auVar34);
    _vmaddabc(auVar40,auVar34);
    auVar41 = _vmaddbc(auVar36,auVar34);
    auVar42._4_4_ = uStack_49c;
    auVar42._0_4_ = uStack_4a0;
    auVar42._8_4_ = uStack_498;
    auVar42._12_4_ = uStack_494;
    auVar35 = _lqc2(auVar42);
    auVar34 = _lqc2(auStack_460);
    auVar45._4_4_ = uStack_4ac;
    auVar45._0_4_ = uStack_4b0;
    auVar45._8_4_ = uStack_4a8;
    auVar45._12_4_ = uStack_4a4;
    auVar39 = _lqc2(auVar45);
    _vmulabc(auVar44,auVar39);
    _vmaddabc(auVar40,auVar39);
    auVar39 = _vmaddbc(auVar36,auVar39);
    _vmulabc(auVar44,auVar35);
    _vmaddabc(auVar40,auVar35);
    _vmaddabc(auVar36,auVar35);
    auVar40 = _vmaddbc(auVar34,in_vf0);
    _sqc2(auVar37);
    _vmulabc(auVar37,auVar58);
    _vmaddabc(auVar41,auVar58);
    auVar34 = _vmaddbc(auVar39,auVar58);
    _vmulabc(auVar37,auVar56);
    _vmaddabc(auVar41,auVar56);
    auVar35 = _vmaddbc(auVar39,auVar56);
    _vmulabc(auVar37,auVar55);
    _vmaddabc(auVar41,auVar55);
    auVar36 = _vmaddbc(auVar39,auVar55);
    _vmulabc(auVar37,auVar57);
    _vmaddabc(auVar41,auVar57);
    _vmaddabc(auVar39,auVar57);
    auVar38 = _vmaddbc(auVar40,in_vf0);
    _sqc2(auVar41);
    _sqc2(auVar39);
    _sqc2(auVar40);
    _sqc2(auVar34);
    auStack_210 = _sqc2(auVar34);
    auStack_200 = _sqc2(auVar35);
    auStack_1f0 = _sqc2(auVar36);
    auStack_250 = _sqc2(auVar34);
    auStack_240 = _sqc2(auVar35);
    auStack_230 = _sqc2(auVar36);
    auStack_290 = _sqc2(auVar34);
    auStack_280 = _sqc2(auVar35);
    auStack_270 = _sqc2(auVar36);
    auStack_3d0 = _sqc2(auVar34);
    auStack_3c0 = _sqc2(auVar35);
    auStack_3b0 = _sqc2(auVar36);
    _auStack_2d0 = _sqc2(auVar37);
    auStack_2c0 = _sqc2(auVar41);
    auStack_2b0 = _sqc2(auVar39);
    auStack_2a0 = _sqc2(auVar40);
    auStack_1e0 = _sqc2(auVar38);
    auStack_220 = _sqc2(auVar38);
    auStack_260 = _sqc2(auVar38);
    auStack_3a0 = _sqc2(auVar38);
    _sqc2(auVar35);
    _sqc2(auVar36);
    _sqc2(auVar38);
    auVar34 = _sqc2(auVar47);
    auVar35 = _sqc2(auVar48);
    auVar36 = _sqc2(auVar50);
    auVar38 = _lqc2(auVar35);
    auVar39 = _lqc2(auVar34);
    auVar39 = _vaddbc(auVar39,auVar38);
    auVar37 = _lqc2(auVar36);
    auVar39 = _vaddbc(auVar39,auVar37);
    auVar39 = _qmfc2(auVar39._0_4_);
    if (0.0 < auVar39._0_4_) {
      fVar32 = SQRT(auVar39._0_4_ + 1.0);
      auVar39 = _lqc2(auVar35);
      _lqc2(pauVar16[3]);
      auVar39 = _vsubbc(auVar39,auVar37);
      auVar39 = _vaddbc(in_vf0,auVar39);
      auVar39 = _sqc2(auVar39);
      pauVar16[3] = auVar39;
      auVar39 = _lqc2(auVar34);
      auVar36 = _lqc2(auVar36);
      auVar36 = _vsubbc(auVar36,auVar39);
      auVar36 = _vaddbc(in_vf0,auVar36);
      auVar37 = _qmtc2(0);
      auVar36 = _sqc2(auVar36);
      pauVar16[3] = auVar36;
      auVar36 = _qmtc2(0.5 / fVar32);
      auVar35 = _lqc2(auVar35);
      auVar39 = _qmtc2(fVar32 * 0.5);
      auVar34 = _lqc2(auVar34);
      auVar34 = _vsubbc(auVar34,auVar35);
      auVar34 = _vaddbc(in_vf0,auVar34);
      _vmove(auVar34);
      auVar35 = _vmulbc(in_vf0,auVar37);
      auVar34 = _sqc2(auVar34);
      pauVar16[3] = auVar34;
      auVar34 = _vmove(auVar35);
      auVar34 = _vmulbc(auVar34,auVar36);
      auVar34 = _sqc2(auVar34);
      pauVar16[3] = auVar34;
      auVar34 = _vmulbc(in_vf0,auVar39);
      auVar34 = _sqc2(auVar34);
      pauVar16[3] = auVar34;
    }
    else {
      auVar39 = _sqc2(auVar38);
      auVar37 = _lqc2(auVar34);
      auVar37 = _qmfc2(auVar37._0_4_);
      auStack_2d0._4_4_ = auVar39._4_4_;
      auVar39 = _lqc2(auVar36);
      if ((float)auStack_2d0._4_4_ <= auVar37._0_4_) {
        _auStack_2d0 = _sqc2(auVar39);
        auVar39 = _lqc2(auVar34);
        auVar39 = _qmfc2(auVar39._0_4_);
        uVar18 = (uint)(auVar39._0_4_ < fStack_2c8) << 1;
      }
      else {
        auVar39 = _sqc2(auVar39);
        fStack_2c8 = auVar39._8_4_;
        auVar39 = _lqc2(auVar35);
        auVar39 = _sqc2(auVar39);
        auStack_2d0._4_4_ = auVar39._4_4_;
        bVar1 = (float)auStack_2d0._4_4_ < fStack_2c8;
        uVar18 = 1;
        _auStack_2d0 = auVar39;
        if (bVar1) {
          uVar18 = 2;
        }
      }
      if (uVar18 == 1) {
        auVar39 = _lqc2(auVar34);
        auVar37 = _lqc2(auVar36);
        auVar37 = _vaddbc(auVar37,auVar39);
        auVar39 = _lqc2(auVar35);
        auVar37 = _vsubbc(auVar39,auVar37);
        auVar39 = _qmtc2(0x3f800000);
        auVar39 = _vaddbc(auVar37,auVar39);
        _auStack_2d0 = _sqc2(auVar39);
        _lqc2(*pauVar21);
        fVar32 = 0.5 / SQRT((float)auStack_2d0._4_4_);
        auVar39 = _qmtc2(SQRT((float)auStack_2d0._4_4_) * 0.5);
        auVar39 = _vaddbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar21 = auVar39;
        auVar40 = _qmtc2(fVar32);
        auVar38 = _qmtc2(fVar32);
        auVar37 = _lqc2(auVar34);
        auVar39 = _lqc2(auVar36);
        auVar39 = _vsubbc(auVar39,auVar37);
        auVar39 = _vmulbc(auVar39,auVar40);
        auVar39 = _vmulbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar21 = auVar39;
        auVar39 = _lqc2(auVar36);
        auVar36 = _lqc2(auVar35);
        auVar36 = _vaddbc(auVar36,auVar39);
        auVar36 = _vmulbc(auVar36,auVar38);
        auVar36 = _vaddbc(in_vf0,auVar36);
        auVar36 = _sqc2(auVar36);
        *pauVar21 = auVar36;
        auVar35 = _lqc2(auVar35);
        auVar34 = _lqc2(auVar34);
        auVar34 = _vaddbc(auVar35,auVar34);
        auVar34 = _vmulbc(auVar34,auVar40);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
      }
      else if (uVar18 < 2) {
        if (uVar18 == 0) {
          auVar39 = _lqc2(auVar36);
          auVar37 = _lqc2(auVar35);
          auVar38 = _vaddbc(auVar37,auVar39);
          auVar37 = _lqc2(auVar34);
          auVar39 = _qmtc2(0x3f800000);
          auVar37 = _vsubbc(auVar37,auVar38);
          auVar39 = _vaddbc(auVar37,auVar39);
          auVar39 = _qmfc2(auVar39._0_4_);
          _lqc2(*pauVar21);
          fVar32 = 0.5 / SQRT(auVar39._0_4_);
          auVar39 = _qmtc2(SQRT(auVar39._0_4_) * 0.5);
          auVar39 = _vaddbc(in_vf0,auVar39);
          auVar39 = _sqc2(auVar39);
          *pauVar21 = auVar39;
          auVar40 = _qmtc2(fVar32);
          auVar38 = _qmtc2(fVar32);
          auVar37 = _lqc2(auVar36);
          auVar39 = _lqc2(auVar35);
          auVar39 = _vsubbc(auVar39,auVar37);
          auVar39 = _vmulbc(auVar39,auVar40);
          auVar39 = _vmulbc(in_vf0,auVar39);
          auVar39 = _sqc2(auVar39);
          *pauVar21 = auVar39;
          auVar39 = _lqc2(auVar35);
          auVar35 = _lqc2(auVar34);
          auVar35 = _vaddbc(auVar35,auVar39);
          auVar35 = _vmulbc(auVar35,auVar38);
          auVar35 = _vaddbc(in_vf0,auVar35);
          auVar35 = _sqc2(auVar35);
          *pauVar21 = auVar35;
          auVar34 = _lqc2(auVar34);
          auVar35 = _lqc2(auVar36);
          auVar34 = _vaddbc(auVar34,auVar35);
          auVar34 = _vmulbc(auVar34,auVar40);
          auVar34 = _vaddbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar21 = auVar34;
        }
      }
      else if (uVar18 == 2) {
        auVar39 = _lqc2(auVar35);
        auVar37 = _lqc2(auVar34);
        auVar37 = _vaddbc(auVar37,auVar39);
        auVar39 = _lqc2(auVar36);
        auVar37 = _vsubbc(auVar39,auVar37);
        auVar39 = _qmtc2(0x3f800000);
        auVar39 = _vaddbc(auVar37,auVar39);
        _auStack_2d0 = _sqc2(auVar39);
        _lqc2(*pauVar21);
        fVar32 = 0.5 / SQRT(fStack_2c8);
        auVar39 = _qmtc2(SQRT(fStack_2c8) * 0.5);
        auVar39 = _vaddbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar21 = auVar39;
        auVar40 = _qmtc2(fVar32);
        auVar38 = _qmtc2(fVar32);
        auVar37 = _lqc2(auVar35);
        auVar39 = _lqc2(auVar34);
        auVar39 = _vsubbc(auVar39,auVar37);
        auVar39 = _vmulbc(auVar39,auVar40);
        auVar39 = _vmulbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar21 = auVar39;
        auVar39 = _lqc2(auVar34);
        auVar34 = _lqc2(auVar36);
        auVar34 = _vaddbc(auVar34,auVar39);
        auVar34 = _vmulbc(auVar34,auVar38);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
        auVar34 = _lqc2(auVar36);
        auVar35 = _lqc2(auVar35);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar40);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
      }
    }
    auVar36 = _lqc2(auStack_400);
    auVar34 = _lqc2(auStack_410);
    auVar34 = _vaddbc(auVar34,auVar36);
    auVar35 = _lqc2(auStack_3f0);
    auVar34 = _vaddbc(auVar34,auVar35);
    auVar34 = _qmfc2(auVar34._0_4_);
    if (0.0 < auVar34._0_4_) {
      fVar32 = SQRT(auVar34._0_4_ + 1.0);
      auVar34 = _lqc2(auStack_400);
      _lqc2(*pauVar16);
      auVar34 = _vsubbc(auVar34,auVar35);
      auVar34 = _vaddbc(in_vf0,auVar34);
      auVar34 = _sqc2(auVar34);
      *pauVar16 = auVar34;
      auVar35 = _lqc2(auStack_410);
      auVar34 = _lqc2(auStack_3f0);
      auVar34 = _vsubbc(auVar34,auVar35);
      auVar34 = _vaddbc(in_vf0,auVar34);
      auVar37 = _qmtc2(0);
      auVar34 = _sqc2(auVar34);
      *pauVar16 = auVar34;
      auVar36 = _qmtc2(0.5 / fVar32);
      auVar35 = _lqc2(auStack_400);
      auVar39 = _qmtc2(fVar32 * 0.5);
      auVar34 = _lqc2(auStack_410);
      auVar34 = _vsubbc(auVar34,auVar35);
      auVar34 = _vaddbc(in_vf0,auVar34);
      _vmove(auVar34);
      auVar35 = _vmulbc(in_vf0,auVar37);
      auVar34 = _sqc2(auVar34);
      *pauVar16 = auVar34;
      auVar34 = _vmove(auVar35);
      auVar34 = _vmulbc(auVar34,auVar36);
      auVar34 = _sqc2(auVar34);
      *pauVar16 = auVar34;
      auVar34 = _vmulbc(in_vf0,auVar39);
      auVar34 = _sqc2(auVar34);
      *pauVar16 = auVar34;
    }
    else {
      auVar34 = _sqc2(auVar36);
      auVar35 = _lqc2(auStack_410);
      auVar35 = _qmfc2(auVar35._0_4_);
      auStack_2d0._4_4_ = auVar34._4_4_;
      auVar34 = _lqc2(auStack_3f0);
      if ((float)auStack_2d0._4_4_ <= auVar35._0_4_) {
        _auStack_2d0 = _sqc2(auVar34);
        auVar34 = _lqc2(auStack_410);
        auVar34 = _qmfc2(auVar34._0_4_);
        uVar18 = (uint)(auVar34._0_4_ < fStack_2c8) << 1;
      }
      else {
        auVar34 = _sqc2(auVar34);
        fStack_2c8 = auVar34._8_4_;
        auVar34 = _lqc2(auStack_400);
        auVar34 = _sqc2(auVar34);
        auStack_2d0._4_4_ = auVar34._4_4_;
        bVar1 = (float)auStack_2d0._4_4_ < fStack_2c8;
        uVar18 = 1;
        _auStack_2d0 = auVar34;
        if (bVar1) {
          uVar18 = 2;
        }
      }
      if (uVar18 == 1) {
        auVar34 = _lqc2(auStack_410);
        auVar35 = _lqc2(auStack_3f0);
        auVar35 = _vaddbc(auVar35,auVar34);
        auVar34 = _lqc2(auStack_400);
        auVar35 = _vsubbc(auVar34,auVar35);
        auVar34 = _qmtc2(0x3f800000);
        auVar34 = _vaddbc(auVar35,auVar34);
        _auStack_2d0 = _sqc2(auVar34);
        _lqc2(*pauVar16);
        fVar32 = 0.5 / SQRT((float)auStack_2d0._4_4_);
        auVar34 = _qmtc2(SQRT((float)auStack_2d0._4_4_) * 0.5);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar16 = auVar34;
        auVar39 = _qmtc2(fVar32);
        auVar36 = _qmtc2(fVar32);
        auVar35 = _lqc2(auStack_410);
        auVar34 = _lqc2(auStack_3f0);
        auVar34 = _vsubbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar39);
        auVar34 = _vmulbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar16 = auVar34;
        auVar35 = _lqc2(auStack_3f0);
        auVar34 = _lqc2(auStack_400);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar36);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar16 = auVar34;
        auVar34 = _lqc2(auStack_400);
        auVar35 = _lqc2(auStack_410);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar39);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar16 = auVar34;
      }
      else if (uVar18 < 2) {
        if (uVar18 == 0) {
          auVar34 = _lqc2(auStack_3f0);
          auVar35 = _lqc2(auStack_400);
          auVar36 = _vaddbc(auVar35,auVar34);
          auVar35 = _lqc2(auStack_410);
          auVar34 = _qmtc2(0x3f800000);
          auVar35 = _vsubbc(auVar35,auVar36);
          auVar34 = _vaddbc(auVar35,auVar34);
          auVar34 = _qmfc2(auVar34._0_4_);
          _lqc2(*pauVar16);
          fVar32 = 0.5 / SQRT(auVar34._0_4_);
          auVar34 = _qmtc2(SQRT(auVar34._0_4_) * 0.5);
          auVar34 = _vaddbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar16 = auVar34;
          auVar39 = _qmtc2(fVar32);
          auVar36 = _qmtc2(fVar32);
          auVar35 = _lqc2(auStack_3f0);
          auVar34 = _lqc2(auStack_400);
          auVar34 = _vsubbc(auVar34,auVar35);
          auVar34 = _vmulbc(auVar34,auVar39);
          auVar34 = _vmulbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar16 = auVar34;
          auVar35 = _lqc2(auStack_400);
          auVar34 = _lqc2(auStack_410);
          auVar34 = _vaddbc(auVar34,auVar35);
          auVar34 = _vmulbc(auVar34,auVar36);
          auVar34 = _vaddbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar16 = auVar34;
          auVar34 = _lqc2(auStack_410);
          auVar35 = _lqc2(auStack_3f0);
          auVar34 = _vaddbc(auVar34,auVar35);
          auVar34 = _vmulbc(auVar34,auVar39);
          auVar34 = _vaddbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar16 = auVar34;
        }
      }
      else if (uVar18 == 2) {
        auVar34 = _lqc2(auStack_400);
        auVar35 = _lqc2(auStack_410);
        auVar35 = _vaddbc(auVar35,auVar34);
        auVar34 = _lqc2(auStack_3f0);
        auVar35 = _vsubbc(auVar34,auVar35);
        auVar34 = _qmtc2(0x3f800000);
        auVar34 = _vaddbc(auVar35,auVar34);
        _auStack_2d0 = _sqc2(auVar34);
        _lqc2(*pauVar16);
        fVar32 = 0.5 / SQRT(fStack_2c8);
        auVar34 = _qmtc2(SQRT(fStack_2c8) * 0.5);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar16 = auVar34;
        auVar39 = _qmtc2(fVar32);
        auVar36 = _qmtc2(fVar32);
        auVar35 = _lqc2(auStack_400);
        auVar34 = _lqc2(auStack_410);
        auVar34 = _vsubbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar39);
        auVar34 = _vmulbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar16 = auVar34;
        auVar35 = _lqc2(auStack_410);
        auVar34 = _lqc2(auStack_3f0);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar36);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar16 = auVar34;
        auVar34 = _lqc2(auStack_3f0);
        auVar35 = _lqc2(auStack_400);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar39);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar16 = auVar34;
      }
    }
    pauVar21 = pauVar16 + 1;
    auStack_2e0 = *(undefined1 (*) [16])PTR_DAT_0040e408;
    auVar36 = _lqc2(auStack_3c0);
    auVar34 = _lqc2(auStack_3d0);
    auVar34 = _vaddbc(auVar34,auVar36);
    auVar35 = _lqc2(auStack_3b0);
    auVar34 = _vaddbc(auVar34,auVar35);
    auVar34 = _qmfc2(auVar34._0_4_);
    if (0.0 < auVar34._0_4_) {
      fVar32 = SQRT(auVar34._0_4_ + 1.0);
      auVar34 = _lqc2(auStack_3c0);
      _lqc2(pauVar16[1]);
      auVar34 = _vsubbc(auVar34,auVar35);
      auVar34 = _vaddbc(in_vf0,auVar34);
      auVar34 = _sqc2(auVar34);
      pauVar16[1] = auVar34;
      auVar35 = _lqc2(auStack_3d0);
      auVar34 = _lqc2(auStack_3b0);
      auVar34 = _vsubbc(auVar34,auVar35);
      auVar34 = _vaddbc(in_vf0,auVar34);
      auVar37 = _qmtc2(0);
      auVar34 = _sqc2(auVar34);
      pauVar16[1] = auVar34;
      auVar36 = _qmtc2(0.5 / fVar32);
      auVar35 = _lqc2(auStack_3c0);
      auVar39 = _qmtc2(fVar32 * 0.5);
      auVar34 = _lqc2(auStack_3d0);
      auVar34 = _vsubbc(auVar34,auVar35);
      auVar34 = _vaddbc(in_vf0,auVar34);
      _vmove(auVar34);
      auVar35 = _vmulbc(in_vf0,auVar37);
      auVar34 = _sqc2(auVar34);
      pauVar16[1] = auVar34;
      auVar34 = _vmove(auVar35);
      auVar34 = _vmulbc(auVar34,auVar36);
      auVar34 = _sqc2(auVar34);
      pauVar16[1] = auVar34;
      auVar34 = _vmulbc(in_vf0,auVar39);
      auVar34 = _sqc2(auVar34);
      pauVar16[1] = auVar34;
    }
    else {
      auVar34 = _sqc2(auVar36);
      auVar35 = _lqc2(auStack_3d0);
      auVar35 = _qmfc2(auVar35._0_4_);
      auStack_2d0._4_4_ = auVar34._4_4_;
      auVar34 = _lqc2(auStack_3b0);
      if ((float)auStack_2d0._4_4_ <= auVar35._0_4_) {
        _auStack_2d0 = _sqc2(auVar34);
        auVar34 = _lqc2(auStack_3d0);
        auVar34 = _qmfc2(auVar34._0_4_);
        uVar18 = (uint)(auVar34._0_4_ < fStack_2c8) << 1;
      }
      else {
        auVar34 = _sqc2(auVar34);
        fStack_2c8 = auVar34._8_4_;
        auVar34 = _lqc2(auStack_3c0);
        auVar34 = _sqc2(auVar34);
        auStack_2d0._4_4_ = auVar34._4_4_;
        bVar1 = (float)auStack_2d0._4_4_ < fStack_2c8;
        uVar18 = 1;
        _auStack_2d0 = auVar34;
        if (bVar1) {
          uVar18 = 2;
        }
      }
      if (uVar18 == 1) {
        auVar34 = _lqc2(auStack_3d0);
        auVar35 = _lqc2(auStack_3b0);
        auVar35 = _vaddbc(auVar35,auVar34);
        auVar34 = _lqc2(auStack_3c0);
        auVar35 = _vsubbc(auVar34,auVar35);
        auVar34 = _qmtc2(0x3f800000);
        auVar34 = _vaddbc(auVar35,auVar34);
        _auStack_2d0 = _sqc2(auVar34);
        _lqc2(*pauVar21);
        fVar32 = 0.5 / SQRT((float)auStack_2d0._4_4_);
        auVar34 = _qmtc2(SQRT((float)auStack_2d0._4_4_) * 0.5);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
        auVar39 = _qmtc2(fVar32);
        auVar36 = _qmtc2(fVar32);
        auVar35 = _lqc2(auStack_3d0);
        auVar34 = _lqc2(auStack_3b0);
        auVar34 = _vsubbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar39);
        auVar34 = _vmulbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
        auVar35 = _lqc2(auStack_3b0);
        auVar34 = _lqc2(auStack_3c0);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar36);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
        auVar34 = _lqc2(auStack_3c0);
        auVar35 = _lqc2(auStack_3d0);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar39);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
      }
      else if (uVar18 < 2) {
        if (uVar18 == 0) {
          auVar34 = _lqc2(auStack_3b0);
          auVar35 = _lqc2(auStack_3c0);
          auVar36 = _vaddbc(auVar35,auVar34);
          auVar35 = _lqc2(auStack_3d0);
          auVar34 = _qmtc2(0x3f800000);
          auVar35 = _vsubbc(auVar35,auVar36);
          auVar34 = _vaddbc(auVar35,auVar34);
          auVar34 = _qmfc2(auVar34._0_4_);
          _lqc2(*pauVar21);
          fVar32 = 0.5 / SQRT(auVar34._0_4_);
          auVar34 = _qmtc2(SQRT(auVar34._0_4_) * 0.5);
          auVar34 = _vaddbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar21 = auVar34;
          auVar39 = _qmtc2(fVar32);
          auVar36 = _qmtc2(fVar32);
          auVar35 = _lqc2(auStack_3b0);
          auVar34 = _lqc2(auStack_3c0);
          auVar34 = _vsubbc(auVar34,auVar35);
          auVar34 = _vmulbc(auVar34,auVar39);
          auVar34 = _vmulbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar21 = auVar34;
          auVar35 = _lqc2(auStack_3c0);
          auVar34 = _lqc2(auStack_3d0);
          auVar34 = _vaddbc(auVar34,auVar35);
          auVar34 = _vmulbc(auVar34,auVar36);
          auVar34 = _vaddbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar21 = auVar34;
          auVar34 = _lqc2(auStack_3d0);
          auVar35 = _lqc2(auStack_3b0);
          auVar34 = _vaddbc(auVar34,auVar35);
          auVar34 = _vmulbc(auVar34,auVar39);
          auVar34 = _vaddbc(in_vf0,auVar34);
          auVar34 = _sqc2(auVar34);
          *pauVar21 = auVar34;
        }
      }
      else if (uVar18 == 2) {
        auVar34 = _lqc2(auStack_3c0);
        auVar35 = _lqc2(auStack_3d0);
        auVar35 = _vaddbc(auVar35,auVar34);
        auVar34 = _lqc2(auStack_3b0);
        auVar35 = _vsubbc(auVar34,auVar35);
        auVar34 = _qmtc2(0x3f800000);
        auVar34 = _vaddbc(auVar35,auVar34);
        _auStack_2d0 = _sqc2(auVar34);
        _lqc2(*pauVar21);
        fVar32 = 0.5 / SQRT(fStack_2c8);
        auVar34 = _qmtc2(SQRT(fStack_2c8) * 0.5);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
        auVar39 = _qmtc2(fVar32);
        auVar36 = _qmtc2(fVar32);
        auVar35 = _lqc2(auStack_3c0);
        auVar34 = _lqc2(auStack_3d0);
        auVar34 = _vsubbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar39);
        auVar34 = _vmulbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
        auVar35 = _lqc2(auStack_3d0);
        auVar34 = _lqc2(auStack_3b0);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar36);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
        auVar34 = _lqc2(auStack_3b0);
        auVar35 = _lqc2(auStack_3c0);
        auVar34 = _vaddbc(auVar34,auVar35);
        auVar34 = _vmulbc(auVar34,auVar39);
        auVar34 = _vaddbc(in_vf0,auVar34);
        auVar34 = _sqc2(auVar34);
        *pauVar21 = auVar34;
      }
    }
    iVar17 = iVar17 + 1;
    *(undefined4 *)pauVar16[4] = auStack_3e0._0_4_;
    *(undefined4 *)(pauVar16[4] + 4) = auStack_3e0._4_4_;
    *(undefined4 *)(pauVar16[4] + 8) = auStack_3e0._8_4_;
    *(undefined4 *)(pauVar16[4] + 0xc) = auStack_3e0._12_4_;
    *(int *)pauVar16[2] = auStack_3a0._0_4_;
    *(int *)(pauVar16[2] + 4) = auStack_3a0._4_4_;
    *(undefined4 *)(pauVar16[2] + 8) = auStack_3a0._8_4_;
    *(undefined4 *)(pauVar16[2] + 0xc) = auStack_3a0._12_4_;
    auStack_310 = auStack_3d0;
    auStack_300 = auStack_3c0;
    auStack_2f0 = auStack_3b0;
    if (0xb < iVar17) {
      return;
    }
  } while( true );
}


// ==== FUN_00260c18 @ 00260c18 ====

void FUN_00260c18(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  FUN_0025dd38();
  FUN_00107b78(0x40f0f0,0xb,0x10,0);
  uVar1 = FUN_00107d20(0x750);
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_00260c70 @ 00260c70 ====

undefined4 FUN_00260c70(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = (int)param_2;
  uVar1 = FUN_00135570(param_2);
  puVar2[1] = uVar1;
  puVar2[5] = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  if (*(char *)(puVar2 + 4) == '\0') {
    *(undefined1 *)(puVar2 + 4) = 1;
    FUN_0025e2d0(param_1);
  }
  FUN_0032b6e0(puVar2[3],puVar2[2]);
  *(undefined4 *)(puVar2[3] + 0x18) = 7;
  FUN_002611d0(param_1);
  *(undefined1 *)(puVar2 + 6) = 0;
  return 1;
}


// ==== FUN_00260cf8 @ 00260cf8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00260cf8(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  float fVar1;
  long lVar2;
  undefined8 extraout_v0_udw;
  int iVar3;
  int iVar4;
  undefined1 in_a2_qw [16];
  uint uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined1 auStack_80 [32];
  float fStack_60;
  
  auVar14 = _vaddbc(in_vf0,in_vf0);
  piVar6 = (int *)param_1;
  if ((char)piVar6[6] == '\0') {
    iVar4 = *piVar6;
    *(undefined1 *)(piVar6 + 6) = 1;
    uVar15 = DAT_004432a0;
    if (*(char *)(*(int *)(iVar4 + 0xb4) + 0x3c) == '\0') {
      if (*(char *)(iVar4 + 0x3af) != '\0') {
        uVar15 = SUB164(*(undefined1 (*) [16])(iVar4 + 0x1b0),0);
      }
    }
    else {
      auVar14._0_8_ = FUN_0025d8e0();
      auVar14._8_8_ = extraout_v0_udw;
      auVar14 = _por(in_zero_qw,auVar14);
      uVar15 = auVar14._0_4_;
    }
    auVar13 = _qmtc2(uVar15);
    uVar5 = 0;
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = in_a2_qw._8_8_;
    auVar12 = auVar10 << 0x40;
    do {
      uVar5 = uVar5 + 1;
      iVar3 = auVar12._0_4_;
      iVar4 = *(int *)(*(int *)(piVar6[3] + 0xc) + iVar3 + 0x58);
      _lqc2(*(undefined1 (*) [16])(iVar4 + 0x20));
      auVar10 = _qmtc2(*(undefined4 *)(*(int *)(iVar4 + 0x4c) + 0x380));
      auVar10 = _vmulbc(auVar13,auVar10);
      auVar10 = _vmove(auVar10);
      auVar10 = _sqc2(auVar10);
      *(undefined1 (*) [16])(iVar4 + 0x20) = auVar10;
      iVar4 = *(int *)(*(int *)(piVar6[3] + 0xc) + iVar3 + 0x58);
      auVar12._0_8_ = (long)(iVar3 + 0x70);
      _lqc2(*(undefined1 (*) [16])(iVar4 + 0x90));
      auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar4 + 0x4c) + 0x370));
      _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
      auVar10 = _vmove(auVar10);
      auVar11 = _vsub(in_vf0,in_vf0);
      auVar10 = _sqc2(auVar10);
      *(undefined1 (*) [16])(iVar4 + 0x90) = auVar10;
      auVar10 = _sqc2(auVar11);
      *(undefined1 (*) [16])(iVar4 + 0xa0) = auVar10;
    } while (uVar5 < 0xd);
  }
  iVar4 = *(int *)(*(int *)(piVar6[3] + 0xc) + 0x138);
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x20));
  auVar10 = _qmtc2(*(undefined4 *)(*(int *)(iVar4 + 0x4c) + 900));
  fVar9 = 0.4;
  auVar12 = _vmulbc(auVar12,auVar10);
  fVar8 = 0.45;
  auVar10 = _vmul(auVar12,auVar12);
  _vaddabc(auVar10,auVar10);
  auVar14 = _vmaddbc(auVar14,auVar10);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar14);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar14 = _vmulq(auVar14,uVar15);
  auVar14 = _qmfc2(auVar14._0_4_);
  fVar1 = auVar14._0_4_;
  if (0.1 <= fVar1 * *(float *)(DAT_0040f4d0 + 0x1c)) {
    fVar7 = *(float *)(DAT_0040f4d0 + 0x1c) * 8.0;
    auVar14 = _qmtc2(fVar7);
    auVar14 = _vmulbc(auVar12,auVar14);
    auVar10 = _qmtc2((int)*(undefined8 *)(iVar4 + 0x10));
    auVar14 = _vadd(auVar10,auVar14);
    auVar14 = _qmfc2(auVar14._0_4_);
    lVar2 = FUN_0012ae58(DAT_0040f4d0,*(undefined8 *)(iVar4 + 0x10),auVar14._0_8_,3,0,1,auStack_80);
    if (lVar2 != 0) {
      fVar9 = fVar1 * fVar7 * fStack_60 * 0.25 * 0.75;
      fVar8 = (fVar9 / 0.4) * fVar8;
    }
  }
  else {
    fVar9 = 0.2;
    fVar8 = 0.225;
  }
  uVar5 = 0;
  iVar4 = 0;
  do {
    uVar5 = uVar5 + 1;
    iVar3 = *(int *)(piVar6[2] + 4) + iVar4;
    iVar4 = iVar4 + 0xa0;
    *(float *)(iVar3 + 0x2c) = fVar8;
    *(float *)(iVar3 + 0x28) = fVar9;
  } while (uVar5 < 0xd);
  if (cGpffff8678 != '\0') {
    FUN_002611d0(param_1);
    FUN_0032b700(piVar6[3]);
  }
  return;
}


// ==== FUN_00260f80 @ 00260f80 ====

void FUN_00260f80(void)

{
  FUN_002611c8();
  return;
}


// ==== FUN_00260fa0 @ 00260fa0 ====

undefined4 FUN_00260fa0(undefined4 *param_1)

{
  *param_1 = 0;
  return 1;
}


// ==== FUN_00260fb0 @ 00260fb0 ====

void FUN_00260fb0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  float fStack_5c;
  float fStack_48;
  
  auVar3 = _qmtc2(param_5);
  auVar2 = _qmtc2(0x3f000000);
  auVar2 = _vaddbc(auVar3,auVar2);
  auVar3 = _vaddbc(in_vf0,auVar2);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _vmul(auVar3,auVar3);
  auVar7 = _qmtc2(param_1);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar2);
  uVar8 = _vwaitq();
  auVar2 = _vmulq(auVar3,uVar8);
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0xc) +
                   *(int *)(&DAT_00400050 + param_3 * 4) * 0x70 + 0x58);
  auVar7 = _vmulbc(auVar2,auVar7);
  auVar6 = _qmtc2(param_4);
  auVar5 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x380));
  auVar4 = _vmulbc(auVar7,auVar5);
  auVar3 = _qmfc2(auVar4._0_4_);
  auVar2 = _sqc2(auVar4);
  fStack_5c = auVar2._4_4_;
  auVar2 = _sqc2(auVar4);
  fStack_48 = auVar2._8_4_;
  _vopmula(auVar6,auVar7);
  auVar2 = _vopmsub(auVar7,auVar6);
  auVar7 = _vmulbc(auVar2,auVar5);
  *(float *)(iVar1 + 0x90) = *(float *)(iVar1 + 0x90) + auVar3._0_4_;
  *(float *)(iVar1 + 0x94) = *(float *)(iVar1 + 0x94) + fStack_5c;
  *(float *)(iVar1 + 0x98) = *(float *)(iVar1 + 0x98) + fStack_48;
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0x70));
  auVar3 = _vmulbc(auVar7,auVar2);
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0xa0));
  auVar3 = _vaddbc(auVar3,auVar2);
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0x74));
  auVar4 = _vmulbc(auVar7,auVar2);
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0x78));
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar2 = _vmulbc(auVar7,auVar2);
  auVar2 = _vaddbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  *(int *)(iVar1 + 0xa0) = auVar2._0_4_;
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0x74));
  auVar3 = _vmulbc(auVar7,auVar2);
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0xa4));
  auVar3 = _vaddbc(auVar3,auVar2);
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0x84));
  auVar4 = _vmulbc(auVar7,auVar2);
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0x88));
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar2 = _vmulbc(auVar7,auVar2);
  auVar2 = _vaddbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  *(int *)(iVar1 + 0xa4) = auVar2._0_4_;
  auVar4 = _qmtc2(*(undefined4 *)(iVar1 + 0xa8));
  auVar2 = _qmtc2(*(undefined4 *)(iVar1 + 0x78));
  auVar2 = _vmulbc(auVar7,auVar2);
  auVar3 = _qmtc2(*(undefined4 *)(iVar1 + 0x88));
  auVar2 = _vaddbc(auVar2,auVar4);
  auVar3 = _vmulbc(auVar7,auVar3);
  auVar4 = _qmtc2(*(undefined4 *)(iVar1 + 0x80));
  auVar2 = _vaddbc(auVar2,auVar3);
  auVar3 = _vmulbc(auVar7,auVar4);
  auVar2 = _vaddbc(auVar2,auVar3);
  auVar2 = _qmfc2(auVar2._0_4_);
  *(int *)(iVar1 + 0xa8) = auVar2._0_4_;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  return;
}


// ==== FUN_002611c8 @ 002611c8 ====

void FUN_002611c8(void)

{
  return;
}


// ==== FUN_002611d0 @ 002611d0 ====

/* WARNING: Removing unreachable block (ram,0x002616fc) */
/* WARNING: Removing unreachable block (ram,0x00261420) */
/* WARNING: Removing unreachable block (ram,0x00261998) */
/* WARNING: Removing unreachable block (ram,0x00261800) */
/* WARNING: Removing unreachable block (ram,0x00261b04) */
/* WARNING: Removing unreachable block (ram,0x00261a50) */
/* WARNING: Removing unreachable block (ram,0x00261648) */
/* WARNING: Removing unreachable block (ram,0x00261590) */

void FUN_002611d0(undefined4 *param_1)

{
  bool bVar1;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 (*pauVar39) [16];
  ulong uVar40;
  undefined4 uVar41;
  undefined1 (*pauVar42) [16];
  int iVar43;
  int iVar44;
  float fVar45;
  float fVar46;
  undefined1 in_vf0 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [8];
  float fStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [8];
  float fStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  iVar44 = 0;
  fVar46 = 0.5;
  do {
    if (iVar44 == 2) {
      uVar41 = 3;
    }
    else if (iVar44 == 3) {
      uVar41 = 5;
    }
    else {
      uVar41 = (&DAT_00400018)[iVar44];
    }
    FUN_00135940(&uStack_1a0,*param_1,uVar41);
    iVar43 = *(int *)(param_1[3] + 0xc) + iVar44 * 0x70;
    pauVar42 = *(undefined1 (**) [16])(iVar43 + 0x58);
    if (pauVar42 != (undefined1 (*) [16])0x0) {
      pauVar39 = *(undefined1 (**) [16])(iVar43 + 0x50);
      if (pauVar39 == (undefined1 (*) [16])0x0) {
        auVar47._4_4_ = uStack_19c;
        auVar47._0_4_ = uStack_1a0;
        auVar47._8_4_ = uStack_198;
        auVar47._12_4_ = uStack_194;
        auVar47 = _lqc2(auVar47);
        _lqc2(pauVar42[4]);
        auVar47 = _vmove(auVar47);
        _lqc2(pauVar42[5]);
        auVar47 = _sqc2(auVar47);
        pauVar42[4] = auVar47;
        _lqc2(pauVar42[6]);
        _lqc2(pauVar42[1]);
        auVar49._4_4_ = uStack_18c;
        auVar49._0_4_ = uStack_190;
        auVar49._8_4_ = uStack_188;
        auVar49._12_4_ = uStack_184;
        auVar47 = _lqc2(auVar49);
        auVar47 = _vmove(auVar47);
        auVar47 = _sqc2(auVar47);
        pauVar42[5] = auVar47;
        auVar51._4_4_ = uStack_17c;
        auVar51._0_4_ = uStack_180;
        auVar51._8_4_ = uStack_178;
        auVar51._12_4_ = uStack_174;
        auVar47 = _lqc2(auVar51);
        auVar47 = _vmove(auVar47);
        auVar47 = _sqc2(auVar47);
        pauVar42[6] = auVar47;
        auVar53._4_4_ = uStack_16c;
        auVar53._0_4_ = uStack_170;
        auVar53._8_4_ = uStack_168;
        auVar53._12_4_ = uStack_164;
        auVar47 = _lqc2(auVar53);
        auVar47 = _vmove(auVar47);
        auVar47 = _sqc2(auVar47);
        pauVar42[1] = auVar47;
        auVar50._4_4_ = uStack_18c;
        auVar50._0_4_ = uStack_190;
        auVar50._8_4_ = uStack_188;
        auVar50._12_4_ = uStack_184;
        auVar49 = _lqc2(auVar50);
        auVar48._4_4_ = uStack_19c;
        auVar48._0_4_ = uStack_1a0;
        auVar48._8_4_ = uStack_198;
        auVar48._12_4_ = uStack_194;
        auVar47 = _lqc2(auVar48);
        auVar47 = _vaddbc(auVar47,auVar49);
        auVar52._4_4_ = uStack_17c;
        auVar52._0_4_ = uStack_180;
        auVar52._8_4_ = uStack_178;
        auVar52._12_4_ = uStack_174;
        auVar48 = _lqc2(auVar52);
        auVar47 = _vaddbc(auVar47,auVar48);
        auVar47 = _qmfc2(auVar47._0_4_);
        if (auVar47._0_4_ <= 0.0) {
          auVar47 = _sqc2(auVar49);
          auVar54._4_4_ = uStack_19c;
          auVar54._0_4_ = uStack_1a0;
          auVar54._8_4_ = uStack_198;
          auVar54._12_4_ = uStack_194;
          auVar48 = _lqc2(auVar54);
          auVar48 = _qmfc2(auVar48._0_4_);
          auStack_160._4_4_ = auVar47._4_4_;
          auVar55._4_4_ = uStack_17c;
          auVar55._0_4_ = uStack_180;
          auVar55._8_4_ = uStack_178;
          auVar55._12_4_ = uStack_174;
          auVar47 = _lqc2(auVar55);
          if ((float)auStack_160._4_4_ <= auVar48._0_4_) {
            _auStack_160 = _sqc2(auVar47);
            auVar56._4_4_ = uStack_19c;
            auVar56._0_4_ = uStack_1a0;
            auVar56._8_4_ = uStack_198;
            auVar56._12_4_ = uStack_194;
            auVar47 = _lqc2(auVar56);
            auVar47 = _qmfc2(auVar47._0_4_);
            bVar1 = auVar47._0_4_ < fStack_158;
            uVar40 = 0;
            if (bVar1) {
              uVar40 = 2;
            }
          }
          else {
            auVar47 = _sqc2(auVar47);
            fStack_158 = auVar47._8_4_;
            auVar17._4_4_ = uStack_18c;
            auVar17._0_4_ = uStack_190;
            auVar17._8_4_ = uStack_188;
            auVar17._12_4_ = uStack_184;
            auVar47 = _lqc2(auVar17);
            auVar47 = _sqc2(auVar47);
            auStack_160._4_4_ = auVar47._4_4_;
            bVar1 = (float)auStack_160._4_4_ < fStack_158;
            uVar40 = 1;
            _auStack_160 = auVar47;
            if (bVar1) {
              uVar40 = 2;
            }
          }
          if (uVar40 != 1) {
            if (uVar40 < 2) {
              if (uVar40 == 0) {
                auVar18._4_4_ = uStack_18c;
                auVar18._0_4_ = uStack_190;
                auVar18._8_4_ = uStack_188;
                auVar18._12_4_ = uStack_184;
                auVar48 = _lqc2(auVar18);
                auVar49 = _qmtc2(0x3f800000);
                auVar29._4_4_ = uStack_17c;
                auVar29._0_4_ = uStack_180;
                auVar29._8_4_ = uStack_178;
                auVar29._12_4_ = uStack_174;
                auVar47 = _lqc2(auVar29);
                auVar48 = _vaddbc(auVar48,auVar47);
                auVar6._4_4_ = uStack_19c;
                auVar6._0_4_ = uStack_1a0;
                auVar6._8_4_ = uStack_198;
                auVar6._12_4_ = uStack_194;
                auVar47 = _lqc2(auVar6);
                auVar47 = _vsubbc(auVar47,auVar48);
                auVar47 = _vaddbc(auVar47,auVar49);
                auVar47 = _qmfc2(auVar47._0_4_);
                _lqc2(*pauVar42);
                fVar45 = fVar46 / SQRT(auVar47._0_4_);
                auVar47 = _qmtc2(SQRT(auVar47._0_4_) * fVar46);
                auVar47 = _vaddbc(in_vf0,auVar47);
                auVar47 = _sqc2(auVar47);
                *pauVar42 = auVar47;
                auVar50 = _qmtc2(fVar45);
                auVar49 = _qmtc2(fVar45);
                auVar30._4_4_ = uStack_17c;
                auVar30._0_4_ = uStack_180;
                auVar30._8_4_ = uStack_178;
                auVar30._12_4_ = uStack_174;
                auVar48 = _lqc2(auVar30);
                auVar19._4_4_ = uStack_18c;
                auVar19._0_4_ = uStack_190;
                auVar19._8_4_ = uStack_188;
                auVar19._12_4_ = uStack_184;
                auVar47 = _lqc2(auVar19);
                auVar47 = _vsubbc(auVar47,auVar48);
                auVar47 = _vmulbc(auVar47,auVar50);
                auVar47 = _vmulbc(in_vf0,auVar47);
                auVar47 = _sqc2(auVar47);
                *pauVar42 = auVar47;
                auVar20._4_4_ = uStack_18c;
                auVar20._0_4_ = uStack_190;
                auVar20._8_4_ = uStack_188;
                auVar20._12_4_ = uStack_184;
                auVar48 = _lqc2(auVar20);
                auVar7._4_4_ = uStack_19c;
                auVar7._0_4_ = uStack_1a0;
                auVar7._8_4_ = uStack_198;
                auVar7._12_4_ = uStack_194;
                auVar47 = _lqc2(auVar7);
                auVar47 = _vaddbc(auVar47,auVar48);
                auVar47 = _vmulbc(auVar47,auVar49);
                auVar47 = _vaddbc(in_vf0,auVar47);
                auVar47 = _sqc2(auVar47);
                *pauVar42 = auVar47;
                auVar8._4_4_ = uStack_19c;
                auVar8._0_4_ = uStack_1a0;
                auVar8._8_4_ = uStack_198;
                auVar8._12_4_ = uStack_194;
                auVar47 = _lqc2(auVar8);
                auVar31._4_4_ = uStack_17c;
                auVar31._0_4_ = uStack_180;
                auVar31._8_4_ = uStack_178;
                auVar31._12_4_ = uStack_174;
                auVar48 = _lqc2(auVar31);
                auVar47 = _vaddbc(auVar47,auVar48);
                auVar47 = _vmulbc(auVar47,auVar50);
                auVar47 = _vaddbc(in_vf0,auVar47);
                auVar47 = _sqc2(auVar47);
                *pauVar42 = auVar47;
                goto LAB_00261b80;
              }
              pauVar39 = *(undefined1 (**) [16])(pauVar42[5] + 0xc);
            }
            else {
              if (uVar40 == 2) {
                auVar5._4_4_ = uStack_19c;
                auVar5._0_4_ = uStack_1a0;
                auVar5._8_4_ = uStack_198;
                auVar5._12_4_ = uStack_194;
                auVar48 = _lqc2(auVar5);
                auVar49 = _qmtc2(0x3f800000);
                auVar24._4_4_ = uStack_18c;
                auVar24._0_4_ = uStack_190;
                auVar24._8_4_ = uStack_188;
                auVar24._12_4_ = uStack_184;
                auVar47 = _lqc2(auVar24);
                auVar48 = _vaddbc(auVar48,auVar47);
                auVar35._4_4_ = uStack_17c;
                auVar35._0_4_ = uStack_180;
                auVar35._8_4_ = uStack_178;
                auVar35._12_4_ = uStack_174;
                auVar47 = _lqc2(auVar35);
                auVar47 = _vsubbc(auVar47,auVar48);
                auVar47 = _vaddbc(auVar47,auVar49);
                _auStack_160 = _sqc2(auVar47);
                _lqc2(*pauVar42);
                fVar45 = fVar46 / SQRT(fStack_158);
                auVar47 = _qmtc2(SQRT(fStack_158) * fVar46);
                auVar47 = _vaddbc(in_vf0,auVar47);
                auVar47 = _sqc2(auVar47);
                *pauVar42 = auVar47;
                auVar50 = _qmtc2(fVar45);
                auVar49 = _qmtc2(fVar45);
                auVar25._4_4_ = uStack_18c;
                auVar25._0_4_ = uStack_190;
                auVar25._8_4_ = uStack_188;
                auVar25._12_4_ = uStack_184;
                auVar48 = _lqc2(auVar25);
                auVar12._4_4_ = uStack_19c;
                auVar12._0_4_ = uStack_1a0;
                auVar12._8_4_ = uStack_198;
                auVar12._12_4_ = uStack_194;
                auVar47 = _lqc2(auVar12);
                auVar47 = _vsubbc(auVar47,auVar48);
                auVar47 = _vmulbc(auVar47,auVar50);
                auVar47 = _vmulbc(in_vf0,auVar47);
                auVar47 = _sqc2(auVar47);
                *pauVar42 = auVar47;
                auVar13._4_4_ = uStack_19c;
                auVar13._0_4_ = uStack_1a0;
                auVar13._8_4_ = uStack_198;
                auVar13._12_4_ = uStack_194;
                auVar48 = _lqc2(auVar13);
                auVar36._4_4_ = uStack_17c;
                auVar36._0_4_ = uStack_180;
                auVar36._8_4_ = uStack_178;
                auVar36._12_4_ = uStack_174;
                auVar47 = _lqc2(auVar36);
                auVar47 = _vaddbc(auVar47,auVar48);
                auVar47 = _vmulbc(auVar47,auVar49);
                auVar47 = _vaddbc(in_vf0,auVar47);
                auVar47 = _sqc2(auVar47);
                *pauVar42 = auVar47;
                auVar37._4_4_ = uStack_17c;
                auVar37._0_4_ = uStack_180;
                auVar37._8_4_ = uStack_178;
                auVar37._12_4_ = uStack_174;
                auVar47 = _lqc2(auVar37);
                auVar26._4_4_ = uStack_18c;
                auVar26._0_4_ = uStack_190;
                auVar26._8_4_ = uStack_188;
                auVar26._12_4_ = uStack_184;
                auVar48 = _lqc2(auVar26);
                goto LAB_00261b70;
              }
              pauVar39 = *(undefined1 (**) [16])(pauVar42[5] + 0xc);
            }
            goto LAB_00261b84;
          }
          auVar32._4_4_ = uStack_17c;
          auVar32._0_4_ = uStack_180;
          auVar32._8_4_ = uStack_178;
          auVar32._12_4_ = uStack_174;
          auVar48 = _lqc2(auVar32);
          auVar49 = _qmtc2(0x3f800000);
          auVar9._4_4_ = uStack_19c;
          auVar9._0_4_ = uStack_1a0;
          auVar9._8_4_ = uStack_198;
          auVar9._12_4_ = uStack_194;
          auVar47 = _lqc2(auVar9);
          auVar48 = _vaddbc(auVar48,auVar47);
          auVar21._4_4_ = uStack_18c;
          auVar21._0_4_ = uStack_190;
          auVar21._8_4_ = uStack_188;
          auVar21._12_4_ = uStack_184;
          auVar47 = _lqc2(auVar21);
          auVar47 = _vsubbc(auVar47,auVar48);
          auVar47 = _vaddbc(auVar47,auVar49);
          _auStack_160 = _sqc2(auVar47);
          _lqc2(*pauVar42);
          fVar45 = fVar46 / SQRT((float)auStack_160._4_4_);
          auVar47 = _qmtc2(SQRT((float)auStack_160._4_4_) * fVar46);
          auVar47 = _vaddbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          auVar50 = _qmtc2(fVar45);
          auVar49 = _qmtc2(fVar45);
          auVar10._4_4_ = uStack_19c;
          auVar10._0_4_ = uStack_1a0;
          auVar10._8_4_ = uStack_198;
          auVar10._12_4_ = uStack_194;
          auVar48 = _lqc2(auVar10);
          auVar33._4_4_ = uStack_17c;
          auVar33._0_4_ = uStack_180;
          auVar33._8_4_ = uStack_178;
          auVar33._12_4_ = uStack_174;
          auVar47 = _lqc2(auVar33);
          auVar47 = _vsubbc(auVar47,auVar48);
          auVar47 = _vmulbc(auVar47,auVar50);
          auVar47 = _vmulbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          auVar34._4_4_ = uStack_17c;
          auVar34._0_4_ = uStack_180;
          auVar34._8_4_ = uStack_178;
          auVar34._12_4_ = uStack_174;
          auVar48 = _lqc2(auVar34);
          auVar22._4_4_ = uStack_18c;
          auVar22._0_4_ = uStack_190;
          auVar22._8_4_ = uStack_188;
          auVar22._12_4_ = uStack_184;
          auVar47 = _lqc2(auVar22);
          auVar47 = _vaddbc(auVar47,auVar48);
          auVar47 = _vmulbc(auVar47,auVar49);
          auVar47 = _vaddbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          auVar23._4_4_ = uStack_18c;
          auVar23._0_4_ = uStack_190;
          auVar23._8_4_ = uStack_188;
          auVar23._12_4_ = uStack_184;
          auVar47 = _lqc2(auVar23);
          auVar11._4_4_ = uStack_19c;
          auVar11._0_4_ = uStack_1a0;
          auVar11._8_4_ = uStack_198;
          auVar11._12_4_ = uStack_194;
          auVar48 = _lqc2(auVar11);
          auVar47 = _vaddbc(auVar47,auVar48);
          auVar47 = _vmulbc(auVar47,auVar50);
          auVar47 = _vaddbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          goto LAB_00261b80;
        }
        fVar45 = SQRT(auVar47._0_4_ + 1.0);
        auVar15._4_4_ = uStack_18c;
        auVar15._0_4_ = uStack_190;
        auVar15._8_4_ = uStack_188;
        auVar15._12_4_ = uStack_184;
        auVar47 = _lqc2(auVar15);
        _lqc2(*pauVar42);
        auVar47 = _vsubbc(auVar47,auVar48);
        auVar47 = _vaddbc(in_vf0,auVar47);
        auVar47 = _sqc2(auVar47);
        *pauVar42 = auVar47;
        auVar50 = _qmtc2(0);
        auVar3._4_4_ = uStack_19c;
        auVar3._0_4_ = uStack_1a0;
        auVar3._8_4_ = uStack_198;
        auVar3._12_4_ = uStack_194;
        auVar48 = _lqc2(auVar3);
        auVar28._4_4_ = uStack_17c;
        auVar28._0_4_ = uStack_180;
        auVar28._8_4_ = uStack_178;
        auVar28._12_4_ = uStack_174;
        auVar47 = _lqc2(auVar28);
        auVar47 = _vsubbc(auVar47,auVar48);
        auVar47 = _vaddbc(in_vf0,auVar47);
        auVar49 = _qmtc2(fVar46 / fVar45);
        auVar47 = _sqc2(auVar47);
        *pauVar42 = auVar47;
        auVar51 = _qmtc2(fVar45 * fVar46);
        auVar16._4_4_ = uStack_18c;
        auVar16._0_4_ = uStack_190;
        auVar16._8_4_ = uStack_188;
        auVar16._12_4_ = uStack_184;
        auVar48 = _lqc2(auVar16);
        auVar4._4_4_ = uStack_19c;
        auVar4._0_4_ = uStack_1a0;
        auVar4._8_4_ = uStack_198;
        auVar4._12_4_ = uStack_194;
        auVar47 = _lqc2(auVar4);
LAB_00261860:
        auVar47 = _vsubbc(auVar47,auVar48);
        auVar47 = _vaddbc(in_vf0,auVar47);
        _vmove(auVar47);
        auVar48 = _vmulbc(in_vf0,auVar50);
        auVar47 = _sqc2(auVar47);
        *pauVar42 = auVar47;
        auVar47 = _vmove(auVar48);
        auVar47 = _vmulbc(auVar47,auVar49);
        auVar47 = _sqc2(auVar47);
        *pauVar42 = auVar47;
        auVar47 = _vmulbc(in_vf0,auVar51);
        auVar47 = _sqc2(auVar47);
        *pauVar42 = auVar47;
LAB_00261b80:
        pauVar39 = *(undefined1 (**) [16])(pauVar42[5] + 0xc);
      }
      else {
        auVar49 = _lqc2(*pauVar39);
        _sqc2(auVar49);
        _vmove(auVar49);
        auVar48 = _lqc2(pauVar39[1]);
        auVar52 = _vaddbc(in_vf0,auVar48);
        _vmove(auVar52);
        _sqc2(auVar48);
        _vmove(auVar48);
        auVar51 = _vaddbc(in_vf0,auVar49);
        auVar47 = _lqc2(pauVar39[2]);
        _vmove(auVar51);
        auVar54 = _vaddbc(in_vf0,auVar47);
        auVar55 = _vaddbc(in_vf0,auVar47);
        _sqc2(auVar47);
        _vmove(auVar47);
        auVar53 = _vaddbc(in_vf0,auVar49);
        auVar50 = _lqc2(pauVar39[3]);
        _vmove(auVar53);
        auVar49 = _vmulbc(auVar54,auVar50);
        auVar47 = _vmulbc(auVar55,auVar50);
        auVar56 = _vaddbc(in_vf0,auVar48);
        auVar48 = _vmulbc(auVar56,auVar50);
        auVar47 = _vadd(auVar49,auVar47);
        _sqc2(auVar52);
        auVar47 = _vadd(auVar47,auVar48);
        _sqc2(auVar51);
        auVar47 = _vsub(in_vf0,auVar47);
        _sqc2(auVar53);
        _auStack_160 = _sqc2(auVar54);
        _sqc2(auVar50);
        auStack_150 = _sqc2(auVar55);
        auStack_140 = _sqc2(auVar56);
        auStack_130 = _sqc2(auVar47);
        auVar2._4_4_ = uStack_19c;
        auVar2._0_4_ = uStack_1a0;
        auVar2._8_4_ = uStack_198;
        auVar2._12_4_ = uStack_194;
        auVar50 = _lqc2(auVar2);
        auVar14._4_4_ = uStack_18c;
        auVar14._0_4_ = uStack_190;
        auVar14._8_4_ = uStack_188;
        auVar14._12_4_ = uStack_184;
        auVar52 = _lqc2(auVar14);
        auVar27._4_4_ = uStack_17c;
        auVar27._0_4_ = uStack_180;
        auVar27._8_4_ = uStack_178;
        auVar27._12_4_ = uStack_174;
        auVar51 = _lqc2(auVar27);
        auVar47 = _lqc2(_auStack_160);
        _vmulabc(auVar50,auVar47);
        _vmaddabc(auVar52,auVar47);
        auVar53 = _vmaddbc(auVar51,auVar47);
        auVar38._4_4_ = uStack_16c;
        auVar38._0_4_ = uStack_170;
        auVar38._8_4_ = uStack_168;
        auVar38._12_4_ = uStack_164;
        auVar54 = _lqc2(auVar38);
        _auStack_e0 = _sqc2(auVar53);
        auVar47 = _lqc2(auStack_150);
        _vmulabc(auVar50,auVar47);
        _vmaddabc(auVar52,auVar47);
        auVar49 = _vmaddbc(auVar51,auVar47);
        auStack_d0 = _sqc2(auVar49);
        auVar47 = _lqc2(auStack_140);
        _vmulabc(auVar50,auVar47);
        _vmaddabc(auVar52,auVar47);
        auVar48 = _vmaddbc(auVar51,auVar47);
        auStack_c0 = _sqc2(auVar48);
        auVar47 = _lqc2(auStack_130);
        _vmulabc(auVar50,auVar47);
        _vmaddabc(auVar52,auVar47);
        _vmaddabc(auVar51,auVar47);
        auVar47 = _vmaddbc(auVar54,in_vf0);
        auStack_110 = _sqc2(auVar49);
        auStack_100 = _sqc2(auVar48);
        auStack_f0 = _sqc2(auVar47);
        auStack_b0 = _sqc2(auVar47);
        auStack_120 = _sqc2(auVar53);
        pauVar42 = *(undefined1 (**) [16])(iVar43 + 0x58);
        _lqc2(pauVar42[4]);
        auVar47 = _vmove(auVar53);
        auVar47 = _sqc2(auVar47);
        pauVar42[4] = auVar47;
        auVar47 = _lqc2(auStack_110);
        _lqc2(pauVar42[5]);
        auVar47 = _vmove(auVar47);
        _lqc2(pauVar42[6]);
        auVar47 = _sqc2(auVar47);
        pauVar42[5] = auVar47;
        _lqc2(pauVar42[1]);
        auVar47 = _lqc2(auStack_100);
        auVar47 = _vmove(auVar47);
        auVar47 = _sqc2(auVar47);
        pauVar42[6] = auVar47;
        auVar47 = _lqc2(auStack_f0);
        auVar47 = _vmove(auVar47);
        auVar47 = _sqc2(auVar47);
        pauVar42[1] = auVar47;
        auVar49 = _lqc2(auStack_110);
        auVar47 = _lqc2(auStack_120);
        auVar47 = _vaddbc(auVar47,auVar49);
        auVar48 = _lqc2(auStack_100);
        auVar47 = _vaddbc(auVar47,auVar48);
        auVar47 = _qmfc2(auVar47._0_4_);
        if (0.0 < auVar47._0_4_) {
          fVar45 = SQRT(auVar47._0_4_ + 1.0);
          auVar47 = _lqc2(auStack_110);
          _lqc2(*pauVar42);
          auVar47 = _vsubbc(auVar47,auVar48);
          auVar47 = _vaddbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          auVar50 = _qmtc2(0);
          auVar48 = _lqc2(auStack_120);
          auVar47 = _lqc2(auStack_100);
          auVar47 = _vsubbc(auVar47,auVar48);
          auVar47 = _vaddbc(in_vf0,auVar47);
          auVar49 = _qmtc2(fVar46 / fVar45);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          auVar51 = _qmtc2(fVar45 * fVar46);
          auVar48 = _lqc2(auStack_110);
          auVar47 = _lqc2(auStack_120);
          goto LAB_00261860;
        }
        auVar47 = _sqc2(auVar49);
        auVar48 = _lqc2(auStack_120);
        auVar48 = _qmfc2(auVar48._0_4_);
        auStack_e0._4_4_ = auVar47._4_4_;
        auVar47 = _lqc2(auStack_100);
        if ((float)auStack_e0._4_4_ <= auVar48._0_4_) {
          _auStack_e0 = _sqc2(auVar47);
          auVar47 = _lqc2(auStack_120);
          auVar47 = _qmfc2(auVar47._0_4_);
          bVar1 = auVar47._0_4_ < fStack_d8;
          uVar40 = 0;
          if (bVar1) {
            uVar40 = 2;
          }
        }
        else {
          auVar47 = _sqc2(auVar47);
          fStack_d8 = auVar47._8_4_;
          auVar47 = _lqc2(auStack_110);
          auVar47 = _sqc2(auVar47);
          auStack_e0._4_4_ = auVar47._4_4_;
          bVar1 = (float)auStack_e0._4_4_ < fStack_d8;
          uVar40 = 1;
          _auStack_e0 = auVar47;
          if (bVar1) {
            uVar40 = 2;
          }
        }
        if (uVar40 == 1) {
          auVar48 = _lqc2(auStack_100);
          auVar49 = _qmtc2(0x3f800000);
          auVar47 = _lqc2(auStack_120);
          auVar48 = _vaddbc(auVar48,auVar47);
          auVar47 = _lqc2(auStack_110);
          auVar47 = _vsubbc(auVar47,auVar48);
          auVar47 = _vaddbc(auVar47,auVar49);
          _auStack_e0 = _sqc2(auVar47);
          _lqc2(*pauVar42);
          fVar45 = fVar46 / SQRT((float)auStack_e0._4_4_);
          auVar47 = _qmtc2(SQRT((float)auStack_e0._4_4_) * fVar46);
          auVar47 = _vaddbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          auVar50 = _qmtc2(fVar45);
          auVar49 = _qmtc2(fVar45);
          auVar48 = _lqc2(auStack_120);
          auVar47 = _lqc2(auStack_100);
          auVar47 = _vsubbc(auVar47,auVar48);
          auVar47 = _vmulbc(auVar47,auVar50);
          auVar47 = _vmulbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          auVar48 = _lqc2(auStack_100);
          auVar47 = _lqc2(auStack_110);
          auVar47 = _vaddbc(auVar47,auVar48);
          auVar47 = _vmulbc(auVar47,auVar49);
          auVar47 = _vaddbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          auVar47 = _lqc2(auStack_110);
          auVar48 = _lqc2(auStack_120);
          auVar47 = _vaddbc(auVar47,auVar48);
          auVar47 = _vmulbc(auVar47,auVar50);
          auVar47 = _vaddbc(in_vf0,auVar47);
          auVar47 = _sqc2(auVar47);
          *pauVar42 = auVar47;
          goto LAB_00261b80;
        }
        if (uVar40 < 2) {
          auVar47 = _lqc2(auStack_110);
          if (uVar40 == 0) {
            auVar49 = _qmtc2(0x3f800000);
            auVar48 = _lqc2(auStack_100);
            auVar48 = _vaddbc(auVar47,auVar48);
            auVar47 = _lqc2(auStack_120);
            auVar47 = _vsubbc(auVar47,auVar48);
            auVar47 = _vaddbc(auVar47,auVar49);
            auVar47 = _qmfc2(auVar47._0_4_);
            _lqc2(*pauVar42);
            fVar45 = fVar46 / SQRT(auVar47._0_4_);
            auVar47 = _qmtc2(SQRT(auVar47._0_4_) * fVar46);
            auVar47 = _vaddbc(in_vf0,auVar47);
            auVar47 = _sqc2(auVar47);
            *pauVar42 = auVar47;
            auVar50 = _qmtc2(fVar45);
            auVar49 = _qmtc2(fVar45);
            auVar48 = _lqc2(auStack_100);
            auVar47 = _lqc2(auStack_110);
            auVar47 = _vsubbc(auVar47,auVar48);
            auVar47 = _vmulbc(auVar47,auVar50);
            auVar47 = _vmulbc(in_vf0,auVar47);
            auVar47 = _sqc2(auVar47);
            *pauVar42 = auVar47;
            auVar48 = _lqc2(auStack_110);
            auVar47 = _lqc2(auStack_120);
            auVar47 = _vaddbc(auVar47,auVar48);
            auVar47 = _vmulbc(auVar47,auVar49);
            auVar47 = _vaddbc(in_vf0,auVar47);
            auVar47 = _sqc2(auVar47);
            *pauVar42 = auVar47;
            auVar47 = _lqc2(auStack_120);
            auVar48 = _lqc2(auStack_100);
            auVar47 = _vaddbc(auVar47,auVar48);
            auVar47 = _vmulbc(auVar47,auVar50);
            auVar47 = _vaddbc(in_vf0,auVar47);
            auVar47 = _sqc2(auVar47);
            *pauVar42 = auVar47;
            goto LAB_00261b80;
          }
          pauVar39 = *(undefined1 (**) [16])(pauVar42[5] + 0xc);
        }
        else {
          auVar47 = _lqc2(auStack_120);
          if (uVar40 == 2) {
            auVar49 = _qmtc2(0x3f800000);
            auVar48 = _lqc2(auStack_110);
            auVar48 = _vaddbc(auVar47,auVar48);
            auVar47 = _lqc2(auStack_100);
            auVar47 = _vsubbc(auVar47,auVar48);
            auVar47 = _vaddbc(auVar47,auVar49);
            _auStack_e0 = _sqc2(auVar47);
            _lqc2(*pauVar42);
            fVar45 = fVar46 / SQRT(fStack_d8);
            auVar47 = _qmtc2(SQRT(fStack_d8) * fVar46);
            auVar47 = _vaddbc(in_vf0,auVar47);
            auVar47 = _sqc2(auVar47);
            *pauVar42 = auVar47;
            auVar50 = _qmtc2(fVar45);
            auVar49 = _qmtc2(fVar45);
            auVar48 = _lqc2(auStack_110);
            auVar47 = _lqc2(auStack_120);
            auVar47 = _vsubbc(auVar47,auVar48);
            auVar47 = _vmulbc(auVar47,auVar50);
            auVar47 = _vmulbc(in_vf0,auVar47);
            auVar47 = _sqc2(auVar47);
            *pauVar42 = auVar47;
            auVar48 = _lqc2(auStack_120);
            auVar47 = _lqc2(auStack_100);
            auVar47 = _vaddbc(auVar47,auVar48);
            auVar47 = _vmulbc(auVar47,auVar49);
            auVar47 = _vaddbc(in_vf0,auVar47);
            auVar47 = _sqc2(auVar47);
            *pauVar42 = auVar47;
            auVar47 = _lqc2(auStack_100);
            auVar48 = _lqc2(auStack_110);
LAB_00261b70:
            auVar47 = _vaddbc(auVar47,auVar48);
            auVar47 = _vmulbc(auVar47,auVar50);
            auVar47 = _vaddbc(in_vf0,auVar47);
            auVar47 = _sqc2(auVar47);
            *pauVar42 = auVar47;
            goto LAB_00261b80;
          }
          pauVar39 = *(undefined1 (**) [16])(pauVar42[5] + 0xc);
        }
      }
LAB_00261b84:
      if (pauVar39 != (undefined1 (*) [16])0x0) {
        auVar49 = _lqc2(*pauVar39);
        _lqc2(pauVar42[7]);
        _lqc2(pauVar42[8]);
        auVar56 = _lqc2(pauVar42[4]);
        auVar54 = _lqc2(pauVar42[5]);
        auVar53 = _lqc2(pauVar42[6]);
        auVar47 = _vmulbc(auVar56,auVar49);
        auVar48 = _vmulbc(auVar54,auVar49);
        auVar49 = _vmulbc(auVar53,auVar49);
        auVar50 = _vaddbc(in_vf0,auVar56);
        auVar51 = _vaddbc(in_vf0,auVar54);
        auVar52 = _vaddbc(in_vf0,auVar53);
        _vmulabc(auVar47,auVar56);
        _vmaddabc(auVar48,auVar54);
        auVar55 = _vmaddbc(auVar49,auVar53);
        _vmulabc(auVar47,auVar56);
        _vmaddabc(auVar48,auVar54);
        _vmaddbc(auVar49,auVar53);
        _vmulabc(auVar50,auVar47);
        _vmaddabc(auVar51,auVar48);
        auVar48 = _vmaddbc(auVar52,auVar49);
        auVar47 = _sqc2(auVar55);
        pauVar42[7] = auVar47;
        auVar47 = _sqc2(auVar48);
        pauVar42[8] = auVar47;
        *(undefined4 *)(pauVar42[7] + 0xc) = *(undefined4 *)pauVar39[1];
      }
    }
    iVar44 = iVar44 + 1;
    *(undefined4 *)(iVar43 + 0x10) = uStack_1a0;
    *(undefined4 *)(iVar43 + 0x14) = uStack_19c;
    *(undefined4 *)(iVar43 + 0x18) = uStack_198;
    *(undefined4 *)(iVar43 + 0x1c) = uStack_194;
    *(undefined4 *)(iVar43 + 0x20) = uStack_190;
    *(undefined4 *)(iVar43 + 0x24) = uStack_18c;
    *(undefined4 *)(iVar43 + 0x28) = uStack_188;
    *(undefined4 *)(iVar43 + 0x2c) = uStack_184;
    *(undefined4 *)(iVar43 + 0x30) = uStack_180;
    *(undefined4 *)(iVar43 + 0x34) = uStack_17c;
    *(undefined4 *)(iVar43 + 0x38) = uStack_178;
    *(undefined4 *)(iVar43 + 0x3c) = uStack_174;
    *(undefined4 *)(iVar43 + 0x40) = uStack_170;
    *(undefined4 *)(iVar43 + 0x44) = uStack_16c;
    *(undefined4 *)(iVar43 + 0x48) = uStack_168;
    *(undefined4 *)(iVar43 + 0x4c) = uStack_164;
    if (0xc < iVar44) {
      return;
    }
  } while( true );
}


// ==== FUN_00261c50 @ 00261c50 ====

void FUN_00261c50(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 in_zero_qw [16];
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [12];
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
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
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  iVar1 = *(int *)param_1[1];
  if (0 < *(int *)(iVar1 + 0x5c)) {
    puVar4 = &DAT_0043e970;
    iVar11 = 0;
    do {
      *puVar4 = 0;
      iVar10 = iVar11 + 1;
      puVar4 = (undefined1 *)(iVar11 + 0x43e971);
      iVar11 = iVar10;
    } while (iVar10 < *(int *)(iVar1 + 0x5c));
  }
  piVar12 = &DAT_00400018;
  iVar10 = 0;
  iVar11 = 0xc;
  do {
    if (-1 < *piVar12) {
      iVar7 = *(int *)(param_1[3] + 0xc) + iVar10;
      iVar2 = *(int *)(iVar7 + 0x58);
      iVar3 = *(int *)(param_1[1] + *piVar12 * 4 + 0xc);
      if (iVar2 == 0) {
        auStack_2b0 = *(undefined1 (*) [16])(iVar7 + 0x10);
        auStack_2a0 = *(undefined1 (*) [16])(iVar7 + 0x20);
        auStack_290 = *(undefined1 (*) [16])(iVar7 + 0x30);
        auStack_280 = *(undefined1 (*) [16])(iVar7 + 0x40);
      }
      else {
        pauVar5 = *(undefined1 (**) [16])(iVar7 + 0x50);
        if (pauVar5 == (undefined1 (*) [16])0x0) {
          auStack_280 = *(undefined1 (*) [16])(iVar2 + 0x10);
          auStack_2b0 = *(undefined1 (*) [16])(iVar2 + 0x40);
          auStack_2a0 = *(undefined1 (*) [16])(iVar2 + 0x50);
          auStack_290 = *(undefined1 (*) [16])(iVar2 + 0x60);
        }
        else {
          auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x40));
          auStack_240 = *(undefined1 (*) [16])(iVar2 + 0x10);
          auStack_260 = *(undefined1 (*) [16])(iVar2 + 0x50);
          auStack_250 = *(undefined1 (*) [16])(iVar2 + 0x60);
          _sqc2(auVar16);
          auVar14 = _lqc2(auStack_250);
          auVar13 = _lqc2(*pauVar5);
          auVar19 = _lqc2(auStack_260);
          _vmulabc(auVar16,auVar13);
          _vmaddabc(auVar19,auVar13);
          auVar20 = _vmaddbc(auVar14,auVar13);
          auStack_230 = _sqc2(auVar20);
          auVar14 = _lqc2(auStack_250);
          auVar13 = _lqc2(pauVar5[1]);
          auVar19 = _lqc2(auStack_260);
          _vmulabc(auVar16,auVar13);
          _vmaddabc(auVar19,auVar13);
          auVar18 = _vmaddbc(auVar14,auVar13);
          auStack_220 = _sqc2(auVar18);
          auVar14 = _lqc2(auStack_250);
          auVar13 = _lqc2(pauVar5[2]);
          auVar19 = _lqc2(auStack_260);
          _vmulabc(auVar16,auVar13);
          _vmaddabc(auVar19,auVar13);
          auVar15 = _vmaddbc(auVar14,auVar13);
          auStack_210 = _sqc2(auVar15);
          auVar17 = _lqc2(pauVar5[3]);
          auVar19 = _lqc2(auStack_260);
          auVar14 = _lqc2(auStack_250);
          auVar13 = _lqc2(auStack_240);
          _vmulabc(auVar16,auVar17);
          _vmaddabc(auVar19,auVar17);
          _vmaddabc(auVar14,auVar17);
          auVar13 = _vmaddbc(auVar13,in_vf0);
          auStack_2b0 = _sqc2(auVar20);
          auStack_2a0 = _sqc2(auVar18);
          auStack_290 = _sqc2(auVar15);
          auStack_280 = _sqc2(auVar13);
          auStack_200 = _sqc2(auVar13);
        }
      }
      auStack_270._0_4_ = auStack_2b0._0_4_;
      puVar8 = (undefined4 *)(param_3[iVar3] * 0x40 + param_2);
      *puVar8 = auStack_270._0_4_;
      auStack_270._4_4_ = auStack_2b0._4_4_;
      puVar8[1] = auStack_270._4_4_;
      auStack_270._8_4_ = auStack_2b0._8_4_;
      puVar8[2] = auStack_270._8_4_;
      auStack_270._0_4_ = auStack_2a0._0_4_;
      puVar8[4] = auStack_270._0_4_;
      auStack_270._4_4_ = auStack_2a0._4_4_;
      puVar8[5] = auStack_270._4_4_;
      auStack_270._8_4_ = auStack_2a0._8_4_;
      puVar8[6] = auStack_270._8_4_;
      auStack_270._0_4_ = auStack_290._0_4_;
      puVar8[8] = auStack_270._0_4_;
      auStack_270._4_4_ = auStack_290._4_4_;
      puVar8[9] = auStack_270._4_4_;
      auStack_270._8_4_ = auStack_290._8_4_;
      puVar8[10] = auStack_270._8_4_;
      auStack_270 = auStack_280;
      auVar13 = auStack_270;
      auStack_270._0_4_ = auStack_280._0_4_;
      puVar8[0xc] = auStack_270._0_4_;
      auStack_270._4_4_ = auStack_280._4_4_;
      puVar8[0xd] = auStack_270._4_4_;
      auStack_270._8_4_ = auStack_280._8_4_;
      puVar8[0xe] = auStack_270._8_4_;
      puVar8[3] = 3;
      (&DAT_0043e970)[iVar3] = 1;
      auStack_270 = auVar13;
    }
    iVar10 = iVar10 + 0x70;
    iVar11 = iVar11 + -1;
    piVar12 = piVar12 + 1;
  } while (-1 < iVar11);
  FUN_00138320(param_1[1]);
  iVar11 = 0;
  if (0 < *(int *)(iVar1 + 0x5c)) {
    piVar12 = (int *)&UNK_00400150;
    do {
      if ((&DAT_0043e970)[iVar11] == '\0') {
        iVar10 = *piVar12;
        if (iVar10 < 0) {
          iVar10 = *(int *)(param_1[1] + 0x14);
        }
        pauVar5 = (undefined1 (*) [16])(*(int *)(iVar1 + 0x54) + iVar10 * 0x40);
        auVar25 = _lqc2(*pauVar5);
        _sqc2(auVar25);
        auVar23 = _lqc2(pauVar5[1]);
        _sqc2(auVar23);
        auVar22 = _lqc2(pauVar5[2]);
        _sqc2(auVar22);
        auVar26 = _lqc2(pauVar5[3]);
        _sqc2(auVar26);
        pauVar5 = (undefined1 (*) [16])(*(int *)(iVar1 + 0x54) + iVar11 * 0x40);
        auVar14 = _lqc2(*pauVar5);
        _sqc2(auVar14);
        _vmove(auVar14);
        auVar19 = _lqc2(pauVar5[1]);
        auVar21 = _vaddbc(in_vf0,auVar19);
        _vmove(auVar21);
        _sqc2(auVar19);
        _vmove(auVar19);
        auVar20 = _vaddbc(in_vf0,auVar14);
        auVar13 = _lqc2(pauVar5[2]);
        _vmove(auVar20);
        auVar18 = _vaddbc(in_vf0,auVar13);
        auVar16 = _vaddbc(in_vf0,auVar13);
        _sqc2(auVar13);
        _vmulabc(auVar25,auVar18);
        _vmaddabc(auVar23,auVar18);
        auVar24 = _vmaddbc(auVar22,auVar18);
        _vmulabc(auVar25,auVar16);
        _vmaddabc(auVar23,auVar16);
        auVar27 = _vmaddbc(auVar22,auVar16);
        _vmove(auVar13);
        auVar28 = _vaddbc(in_vf0,auVar14);
        _vmove(auVar28);
        auVar15 = _lqc2(pauVar5[3]);
        auVar17 = _vaddbc(in_vf0,auVar19);
        auVar13 = _vmulbc(auVar16,auVar15);
        auVar19 = _vmulbc(auVar18,auVar15);
        auVar14 = _vmulbc(auVar17,auVar15);
        auVar13 = _vadd(auVar19,auVar13);
        auVar13 = _vadd(auVar13,auVar14);
        _sqc2(auVar15);
        auVar13 = _vsub(in_vf0,auVar13);
        _sqc2(auVar21);
        _vmulabc(auVar25,auVar17);
        _vmaddabc(auVar23,auVar17);
        auVar14 = _vmaddbc(auVar22,auVar17);
        _vmulabc(auVar25,auVar13);
        _vmaddabc(auVar23,auVar13);
        _vmaddabc(auVar22,auVar13);
        auVar19 = _vmaddbc(auVar26,in_vf0);
        _sqc2(auVar20);
        _sqc2(auVar28);
        _sqc2(auVar18);
        _sqc2(auVar16);
        _sqc2(auVar17);
        _sqc2(auVar13);
        _sqc2(auVar14);
        _sqc2(auVar19);
        _sqc2(auVar14);
        _sqc2(auVar19);
        _sqc2(auVar24);
        _sqc2(auVar27);
        auVar13 = _sqc2(auVar24);
        _sqc2(auVar27);
        _sqc2(auVar24);
        _sqc2(auVar24);
        _sqc2(auVar27);
        _sqc2(auVar14);
        puVar8 = (undefined4 *)(param_3[iVar10] * 0x40 + param_2);
        _sqc2(auVar19);
        _sqc2(auVar14);
        _sqc2(auVar19);
        auVar14 = _sqc2(auVar14);
        auVar19 = _sqc2(auVar19);
        _sqc2(auVar27);
        auVar15 = _sqc2(auVar24);
        auVar16 = _sqc2(auVar27);
        auStack_1b0._4_4_ = puVar8[1];
        auStack_1b0._0_4_ = *puVar8;
        auStack_1b0._12_4_ = auVar13._12_4_;
        auStack_230._8_4_ = puVar8[2];
        auStack_230._0_8_ = auStack_1b0._0_8_;
        auStack_230._12_4_ = auStack_1b0._12_4_;
        auStack_220._12_4_ = auStack_1b0._12_4_;
        auStack_220._0_12_ = *(undefined1 (*) [12])(puVar8 + 4);
        auStack_210._12_4_ = auStack_1b0._12_4_;
        auStack_210._0_12_ = *(undefined1 (*) [12])(puVar8 + 8);
        puVar9 = (undefined4 *)(param_3[iVar11] * 0x40 + param_2);
        auStack_1b0._0_12_ = *(undefined1 (*) [12])(puVar8 + 0xc);
        auVar21 = _lqc2(auStack_1b0);
        auVar18 = _lqc2(auStack_220);
        auVar20 = _lqc2(auStack_210);
        auVar17 = _lqc2(auStack_230);
        auVar15 = _lqc2(auVar15);
        auVar13 = _lqc2(auVar16);
        _vmulabc(auVar17,auVar15);
        _vmaddabc(auVar18,auVar15);
        auVar16 = _vmaddbc(auVar20,auVar15);
        _vmulabc(auVar17,auVar13);
        _vmaddabc(auVar18,auVar13);
        auVar15 = _vmaddbc(auVar20,auVar13);
        auVar14 = _lqc2(auVar14);
        auVar13 = _lqc2(auVar19);
        _vmulabc(auVar17,auVar14);
        _vmaddabc(auVar18,auVar14);
        auVar14 = _vmaddbc(auVar20,auVar14);
        _vmulabc(auVar17,auVar13);
        _vmaddabc(auVar18,auVar13);
        _vmaddabc(auVar20,auVar13);
        auVar13 = _vmaddbc(auVar21,in_vf0);
        _sqc2(auVar18);
        _sqc2(auVar20);
        _sqc2(auVar21);
        _sqc2(auVar17);
        auStack_1e0 = _sqc2(auVar15);
        auStack_1d0 = _sqc2(auVar14);
        auStack_1c0 = _sqc2(auVar13);
        auStack_200 = _sqc2(auVar21);
        auStack_170 = _sqc2(auVar16);
        auStack_160 = _sqc2(auVar15);
        auStack_150 = _sqc2(auVar14);
        auStack_140 = _sqc2(auVar13);
        _sqc2(auVar16);
        auStack_1a0 = _sqc2(auVar15);
        auStack_190 = _sqc2(auVar14);
        auStack_180 = _sqc2(auVar13);
        auStack_1f0 = _sqc2(auVar16);
        auVar13 = _sqc2(auVar16);
        auStack_1b0._0_4_ = auVar13._0_4_;
        auStack_1b0._4_4_ = auVar13._4_4_;
        *puVar9 = auStack_1b0._0_4_;
        puVar9[1] = auStack_1b0._4_4_;
        auStack_1b0._8_4_ = auVar13._8_4_;
        puVar9[2] = auStack_1b0._8_4_;
        auStack_1b0._0_4_ = auStack_1e0._0_4_;
        puVar9[4] = auStack_1b0._0_4_;
        auStack_1b0._4_4_ = auStack_1e0._4_4_;
        puVar9[5] = auStack_1b0._4_4_;
        auStack_1b0._8_4_ = auStack_1e0._8_4_;
        puVar9[6] = auStack_1b0._8_4_;
        auStack_1b0._0_4_ = auStack_1d0._0_4_;
        puVar9[8] = auStack_1b0._0_4_;
        auStack_1b0._4_4_ = auStack_1d0._4_4_;
        puVar9[9] = auStack_1b0._4_4_;
        auStack_1b0._8_4_ = auStack_1d0._8_4_;
        puVar9[10] = auStack_1b0._8_4_;
        auStack_1b0._0_4_ = auStack_1c0._0_4_;
        puVar9[0xc] = auStack_1b0._0_4_;
        auStack_1b0._4_4_ = auStack_1c0._4_4_;
        puVar9[0xd] = auStack_1b0._4_4_;
        auStack_1b0._8_4_ = auStack_1c0._8_4_;
        puVar9[0xe] = auStack_1b0._8_4_;
        puVar9[3] = 3;
        iVar10 = *(int *)(iVar1 + 0x5c);
        auStack_1b0 = auStack_1c0;
      }
      else {
        iVar10 = *(int *)(iVar1 + 0x5c);
      }
      iVar11 = iVar11 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar11 < iVar10);
  }
  pauVar6 = (undefined1 (*) [12])(*param_3 * 0x40 + param_2);
  auStack_2b0._12_4_ = auStack_230._12_4_;
  auStack_2b0._0_12_ = *pauVar6;
  auStack_2a0._12_4_ = auStack_230._12_4_;
  auStack_2a0._0_12_ = *(undefined1 (*) [12])(pauVar6[1] + 4);
  auStack_290._12_4_ = auStack_230._12_4_;
  auStack_290._0_12_ = *(undefined1 (*) [12])(pauVar6[2] + 8);
  auStack_230._0_12_ = pauVar6[4];
  auStack_280._12_4_ = auStack_230._12_4_;
  auStack_280._0_12_ = auStack_230._0_12_;
  auStack_270._12_4_ = auStack_230._12_4_;
  auStack_270._0_12_ = *pauVar6;
  auStack_250._12_4_ = auStack_230._12_4_;
  auStack_250._0_12_ = *(undefined1 (*) [12])(pauVar6[2] + 8);
  auStack_260._12_4_ = auStack_230._12_4_;
  auStack_260._0_12_ = *(undefined1 (*) [12])(pauVar6[1] + 4);
  auStack_240._12_4_ = auStack_230._12_4_;
  auStack_240._0_12_ = auStack_230._0_12_;
  FUN_00125f88(*param_1,auStack_2b0);
  auVar17 = _lqc2(auStack_2b0);
  iVar11 = 0;
  auVar15 = _lqc2(auStack_2a0);
  auVar16 = _lqc2(auStack_290);
  _vmove(auVar17);
  _vmove(auVar15);
  auVar20 = _vaddbc(in_vf0,auVar15);
  auVar18 = _vaddbc(in_vf0,auVar17);
  _vmove(auVar16);
  auVar21 = _vaddbc(in_vf0,auVar17);
  _vmove(auVar20);
  _vmove(auVar18);
  auVar23 = _vaddbc(in_vf0,auVar16);
  auVar19 = _lqc2(auStack_280);
  auVar25 = _vaddbc(in_vf0,auVar16);
  _vmove(auVar21);
  auVar14 = _vmulbc(auVar23,auVar19);
  auVar22 = _vaddbc(in_vf0,auVar15);
  auVar13 = _vmulbc(auVar25,auVar19);
  auVar14 = _vadd(auVar14,auVar13);
  auVar13 = _vmulbc(auVar22,auVar19);
  _sqc2(auVar17);
  auVar13 = _vadd(auVar14,auVar13);
  _sqc2(auVar15);
  auVar13 = _vsub(in_vf0,auVar13);
  _sqc2(auVar16);
  _sqc2(auVar19);
  _sqc2(auVar20);
  _sqc2(auVar18);
  _sqc2(auVar21);
  auStack_240 = _sqc2(auVar13);
  auStack_270 = _sqc2(auVar23);
  auStack_260 = _sqc2(auVar25);
  auStack_250 = _sqc2(auVar22);
  piVar12 = param_3;
  if (0 < *(int *)(iVar1 + 0x5c)) {
    do {
      if (-1 < *piVar12) {
        pauVar6 = (undefined1 (*) [12])(*piVar12 * 0x40 + param_2);
        auStack_230._12_4_ = auStack_1b0._12_4_;
        auStack_230._0_12_ = *pauVar6;
        auStack_220._12_4_ = auStack_1b0._12_4_;
        auStack_220._0_12_ = *(undefined1 (*) [12])(pauVar6[1] + 4);
        auStack_210._12_4_ = auStack_1b0._12_4_;
        auStack_210._0_12_ = *(undefined1 (*) [12])(pauVar6[2] + 8);
        auStack_1b0._0_12_ = pauVar6[4];
        auVar18 = _lqc2(auStack_1b0);
        auVar13 = _lqc2(auStack_230);
        _sqc2(auVar18);
        _sqc2(auVar13);
        auVar17 = _lqc2(auStack_220);
        auVar16 = _lqc2(auStack_210);
        auVar15 = _lqc2(auStack_270);
        auVar19 = _lqc2(auStack_260);
        auVar14 = _lqc2(auStack_250);
        _vmulabc(auVar15,auVar13);
        _vmaddabc(auVar19,auVar13);
        auVar20 = _vmaddbc(auVar14,auVar13);
        _vmulabc(auVar15,auVar17);
        _vmaddabc(auVar19,auVar17);
        auVar21 = _vmaddbc(auVar14,auVar17);
        _sqc2(auVar17);
        _sqc2(auVar20);
        auVar13 = _lqc2(auStack_240);
        _vmulabc(auVar15,auVar16);
        _vmaddabc(auVar19,auVar16);
        auVar17 = _vmaddbc(auVar14,auVar16);
        _vmulabc(auVar15,auVar18);
        _vmaddabc(auVar19,auVar18);
        _vmaddabc(auVar14,auVar18);
        auVar15 = _vmaddbc(auVar13,in_vf0);
        auVar13 = _sqc2(auVar20);
        _sqc2(auVar16);
        _sqc2(auVar18);
        _sqc2(auVar21);
        _sqc2(auVar17);
        _sqc2(auVar15);
        auStack_b0 = _sqc2(auVar20);
        auStack_a0 = _sqc2(auVar21);
        auStack_90 = _sqc2(auVar17);
        auStack_80 = _sqc2(auVar15);
        auStack_f0 = _sqc2(auVar20);
        auStack_e0 = _sqc2(auVar21);
        auStack_d0 = _sqc2(auVar17);
        auStack_c0 = _sqc2(auVar15);
        auStack_130 = _sqc2(auVar20);
        auStack_120 = _sqc2(auVar21);
        auStack_110 = _sqc2(auVar17);
        auStack_100 = _sqc2(auVar15);
        _sqc2(auVar20);
        auVar14 = _sqc2(auVar21);
        auVar19 = _sqc2(auVar17);
        auVar15 = _sqc2(auVar15);
        auStack_1f0._0_4_ = auVar13._0_4_;
        auStack_1f0._4_4_ = auVar13._4_4_;
        *(undefined4 *)*pauVar6 = auStack_1f0._0_4_;
        *(undefined4 *)(*pauVar6 + 4) = auStack_1f0._4_4_;
        auStack_1f0._8_4_ = auVar13._8_4_;
        *(undefined4 *)(*pauVar6 + 8) = auStack_1f0._8_4_;
        auStack_1f0._0_4_ = auVar14._0_4_;
        *(undefined4 *)(pauVar6[1] + 4) = auStack_1f0._0_4_;
        auStack_1f0._4_4_ = auVar14._4_4_;
        *(undefined4 *)(pauVar6[1] + 8) = auStack_1f0._4_4_;
        auStack_1f0._8_4_ = auVar14._8_4_;
        *(undefined4 *)pauVar6[2] = auStack_1f0._8_4_;
        auStack_1f0._0_4_ = auVar19._0_4_;
        *(undefined4 *)(pauVar6[2] + 8) = auStack_1f0._0_4_;
        auStack_1f0._4_4_ = auVar19._4_4_;
        *(undefined4 *)pauVar6[3] = auStack_1f0._4_4_;
        auStack_1f0._8_4_ = auVar19._8_4_;
        *(undefined4 *)(pauVar6[3] + 4) = auStack_1f0._8_4_;
        auStack_1f0._0_4_ = auVar15._0_4_;
        *(undefined4 *)pauVar6[4] = auStack_1f0._0_4_;
        auStack_1f0._4_4_ = auVar15._4_4_;
        *(undefined4 *)(pauVar6[4] + 4) = auStack_1f0._4_4_;
        auStack_1f0._8_4_ = auVar15._8_4_;
        *(undefined4 *)(pauVar6[4] + 8) = auStack_1f0._8_4_;
        *(undefined4 *)pauVar6[1] = 3;
      }
      iVar11 = iVar11 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar11 < *(int *)(iVar1 + 0x5c));
  }
  pauVar6 = (undefined1 (*) [12])(param_3[2] * 0x40 + param_2);
  auStack_230._12_4_ = auStack_1b0._12_4_;
  auStack_230._0_12_ = *pauVar6;
  auStack_220._12_4_ = auStack_1b0._12_4_;
  auStack_220._0_12_ = *(undefined1 (*) [12])(pauVar6[1] + 4);
  auStack_210._12_4_ = auStack_1b0._12_4_;
  auStack_210._0_12_ = *(undefined1 (*) [12])(pauVar6[2] + 8);
  auStack_1b0._0_12_ = pauVar6[4];
  auStack_200._12_4_ = auStack_1b0._12_4_;
  auStack_200._0_12_ = auStack_1b0._0_12_;
  auVar13 = _por(in_zero_qw,auStack_1b0);
  auStack_1f0._12_4_ = auStack_1b0._12_4_;
  auStack_1f0._0_12_ = *pauVar6;
  auStack_1e0._12_4_ = auStack_1b0._12_4_;
  auStack_1e0._0_12_ = *(undefined1 (*) [12])(pauVar6[1] + 4);
  auStack_1d0._12_4_ = auStack_1b0._12_4_;
  auStack_1d0._0_12_ = *(undefined1 (*) [12])(pauVar6[2] + 8);
  auStack_1c0._12_4_ = auStack_1b0._12_4_;
  auStack_1c0._0_12_ = auStack_1b0._0_12_;
  FUN_00126058(*param_1,auVar13._0_8_);
  return;
}


// ==== FUN_00262668 @ 00262668 ====

/* WARNING: Removing unreachable block (ram,0x00262cc4) */
/* WARNING: Removing unreachable block (ram,0x002629ac) */
/* WARNING: Removing unreachable block (ram,0x00262f80) */
/* WARNING: Removing unreachable block (ram,0x00263114) */
/* WARNING: Removing unreachable block (ram,0x0026304c) */
/* WARNING: Removing unreachable block (ram,0x00262bfc) */
/* WARNING: Removing unreachable block (ram,0x00262b30) */
/* WARNING: Removing unreachable block (ram,0x00262dd4) */

void FUN_00262668(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  uint uVar6;
  int *piVar7;
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
  undefined1 auVar18 [16];
  undefined4 auStack_1a0 [4];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_140 [8];
  float fStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [8];
  float fStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar12 = _vsub(in_vf0,in_vf0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  piVar7 = (int *)param_1;
  *(short *)(piVar7 + 3) = (short)param_2;
  *(undefined2 *)((int)piVar7 + 0xe) = 0;
  auStack_190 = _sqc2(auVar9);
  auStack_180 = _sqc2(auVar10);
  auStack_170 = _sqc2(auVar11);
  auStack_160 = _sqc2(auVar12);
  auStack_1a0[0] = 0;
  iVar2 = FUN_00107d20(param_2 << 3);
  *piVar7 = iVar2;
  FUN_0032b860(&uStack_150,1,0);
  auStack_1a0[0] = FUN_00107c98(0x40f0f0,&uStack_150);
  iVar2 = FUN_0032bb28(auStack_1a0,1,0);
  piVar7[1] = iVar2;
  iVar2 = *(int *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 0x44) = 0x3ecccccd;
  *(undefined4 *)(iVar2 + 0x40) = 0x3ecccccd;
  *(undefined4 *)(*(int *)(piVar7[1] + 4) + 0x48) = 0x3dcccccd;
  FUN_003349c0(&uStack_150,param_2,0x3d12c8,0x40);
  auStack_1a0[0] = FUN_00107c98(0x40f0f0,&uStack_150);
  iVar3 = FUN_003349e0(auStack_1a0,param_2,0x3d12c8,0x40);
  uStack_150 = 0x60;
  uStack_14c = 0x10;
  auStack_1a0[0] = FUN_00107c98(0x40f0f0,&uStack_150);
  iVar2 = FUN_00334268(auStack_1a0,5);
  *(int *)(iVar2 + 0x40) = iVar3;
  **(int **)(piVar7[1] + 4) = iVar2;
  FUN_0032abd0(&uStack_150,*(undefined4 *)piVar7[1],((undefined4 *)piVar7[1])[2]);
  auStack_1a0[0] = FUN_00107c98(0x40f0f0,&uStack_150);
  iVar2 = FUN_0032ad30(auStack_1a0,piVar7[1]);
  piVar7[2] = iVar2;
  iVar2 = *(int *)(iVar2 + 0xc);
  pauVar5 = *(undefined1 (**) [16])(iVar2 + 0x58);
  if (pauVar5 == (undefined1 (*) [16])0x0) goto LAB_0026320c;
  pauVar4 = *(undefined1 (**) [16])(iVar2 + 0x50);
  if (pauVar4 == (undefined1 (*) [16])0x0) {
    auVar9 = _lqc2(auStack_190);
    _lqc2(pauVar5[4]);
    auVar9 = _vmove(auVar9);
    _lqc2(pauVar5[5]);
    auVar9 = _sqc2(auVar9);
    pauVar5[4] = auVar9;
    _lqc2(pauVar5[6]);
    _lqc2(pauVar5[1]);
    auVar9 = _lqc2(auStack_180);
    auVar9 = _vmove(auVar9);
    auVar9 = _sqc2(auVar9);
    pauVar5[5] = auVar9;
    auVar9 = _lqc2(auStack_170);
    auVar9 = _vmove(auVar9);
    auVar9 = _sqc2(auVar9);
    pauVar5[6] = auVar9;
    auVar9 = _lqc2(auStack_160);
    auVar9 = _vmove(auVar9);
    auVar9 = _sqc2(auVar9);
    pauVar5[1] = auVar9;
    auVar11 = _lqc2(auStack_180);
    auVar9 = _lqc2(auStack_190);
    auVar9 = _vaddbc(auVar9,auVar11);
    auVar10 = _lqc2(auStack_170);
    auVar9 = _vaddbc(auVar9,auVar10);
    auVar9 = _qmfc2(auVar9._0_4_);
    if (auVar9._0_4_ <= 0.0) {
      auVar9 = _sqc2(auVar11);
      auVar10 = _lqc2(auStack_190);
      auVar10 = _qmfc2(auVar10._0_4_);
      auStack_140._4_4_ = auVar9._4_4_;
      auVar9 = _lqc2(auStack_170);
      if ((float)auStack_140._4_4_ <= auVar10._0_4_) {
        _auStack_140 = _sqc2(auVar9);
        auVar9 = _lqc2(auStack_190);
        auVar9 = _qmfc2(auVar9._0_4_);
        uVar6 = (uint)(auVar9._0_4_ < fStack_138) << 1;
      }
      else {
        auVar9 = _sqc2(auVar9);
        fStack_138 = auVar9._8_4_;
        auVar9 = _lqc2(auStack_180);
        auVar9 = _sqc2(auVar9);
        auStack_140._4_4_ = auVar9._4_4_;
        bVar1 = (float)auStack_140._4_4_ < fStack_138;
        uVar6 = 1;
        _auStack_140 = auVar9;
        if (bVar1) {
          uVar6 = 2;
        }
      }
      if (uVar6 != 1) {
        if (uVar6 < 2) {
          auVar9 = _lqc2(auStack_170);
          if (uVar6 == 0) {
            auVar10 = _lqc2(auStack_180);
            auVar11 = _vaddbc(auVar10,auVar9);
            auVar9 = _lqc2(auStack_190);
            auVar10 = _qmtc2(0x3f800000);
            auVar9 = _vsubbc(auVar9,auVar11);
            auVar9 = _vaddbc(auVar9,auVar10);
            auVar9 = _qmfc2(auVar9._0_4_);
            _lqc2(*pauVar5);
            fVar8 = 0.5 / SQRT(auVar9._0_4_);
            auVar9 = _qmtc2(SQRT(auVar9._0_4_) * 0.5);
            auVar9 = _vaddbc(in_vf0,auVar9);
            auVar9 = _sqc2(auVar9);
            *pauVar5 = auVar9;
            auVar12 = _qmtc2(fVar8);
            auVar11 = _qmtc2(fVar8);
            auVar10 = _lqc2(auStack_170);
            auVar9 = _lqc2(auStack_180);
            auVar9 = _vsubbc(auVar9,auVar10);
            auVar9 = _vmulbc(auVar9,auVar12);
            auVar9 = _vmulbc(in_vf0,auVar9);
            auVar9 = _sqc2(auVar9);
            *pauVar5 = auVar9;
            auVar10 = _lqc2(auStack_180);
            auVar9 = _lqc2(auStack_190);
            auVar9 = _vaddbc(auVar9,auVar10);
            auVar9 = _vmulbc(auVar9,auVar11);
            auVar9 = _vaddbc(in_vf0,auVar9);
            auVar9 = _sqc2(auVar9);
            *pauVar5 = auVar9;
            auVar9 = _lqc2(auStack_190);
            auVar10 = _lqc2(auStack_170);
            auVar9 = _vaddbc(auVar9,auVar10);
            auVar9 = _vmulbc(auVar9,auVar12);
            auVar9 = _vaddbc(in_vf0,auVar9);
            auVar9 = _sqc2(auVar9);
            *pauVar5 = auVar9;
            goto LAB_00263198;
          }
          pauVar4 = *(undefined1 (**) [16])(pauVar5[5] + 0xc);
        }
        else {
          auVar9 = _lqc2(auStack_180);
          if (uVar6 == 2) {
            auVar10 = _lqc2(auStack_190);
            auVar10 = _vaddbc(auVar10,auVar9);
            auVar9 = _lqc2(auStack_170);
            auVar9 = _vsubbc(auVar9,auVar10);
            auVar10 = _qmtc2(0x3f800000);
            auVar9 = _vaddbc(auVar9,auVar10);
            _auStack_140 = _sqc2(auVar9);
            _lqc2(*pauVar5);
            fVar8 = 0.5 / SQRT(fStack_138);
            auVar9 = _qmtc2(SQRT(fStack_138) * 0.5);
            auVar9 = _vaddbc(in_vf0,auVar9);
            auVar9 = _sqc2(auVar9);
            *pauVar5 = auVar9;
            auVar12 = _qmtc2(fVar8);
            auVar11 = _qmtc2(fVar8);
            auVar10 = _lqc2(auStack_180);
            auVar9 = _lqc2(auStack_190);
            auVar9 = _vsubbc(auVar9,auVar10);
            auVar9 = _vmulbc(auVar9,auVar12);
            auVar9 = _vmulbc(in_vf0,auVar9);
            auVar9 = _sqc2(auVar9);
            *pauVar5 = auVar9;
            auVar10 = _lqc2(auStack_190);
            auVar9 = _lqc2(auStack_170);
            auVar9 = _vaddbc(auVar9,auVar10);
            auVar9 = _vmulbc(auVar9,auVar11);
            auVar9 = _vaddbc(in_vf0,auVar9);
            auVar9 = _sqc2(auVar9);
            *pauVar5 = auVar9;
            auVar9 = _lqc2(auStack_170);
            auVar10 = _lqc2(auStack_180);
            goto LAB_00263188;
          }
          pauVar4 = *(undefined1 (**) [16])(pauVar5[5] + 0xc);
        }
        goto LAB_0026319c;
      }
      auVar9 = _lqc2(auStack_190);
      auVar10 = _lqc2(auStack_170);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar9 = _lqc2(auStack_180);
      auVar9 = _vsubbc(auVar9,auVar10);
      auVar10 = _qmtc2(0x3f800000);
      auVar9 = _vaddbc(auVar9,auVar10);
      _auStack_140 = _sqc2(auVar9);
      _lqc2(*pauVar5);
      fVar8 = 0.5 / SQRT((float)auStack_140._4_4_);
      auVar9 = _qmtc2(SQRT((float)auStack_140._4_4_) * 0.5);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      auVar12 = _qmtc2(fVar8);
      auVar11 = _qmtc2(fVar8);
      auVar10 = _lqc2(auStack_190);
      auVar9 = _lqc2(auStack_170);
      auVar9 = _vsubbc(auVar9,auVar10);
      auVar9 = _vmulbc(auVar9,auVar12);
      auVar9 = _vmulbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      auVar10 = _lqc2(auStack_170);
      auVar9 = _lqc2(auStack_180);
      auVar9 = _vaddbc(auVar9,auVar10);
      auVar9 = _vmulbc(auVar9,auVar11);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      auVar9 = _lqc2(auStack_180);
      auVar10 = _lqc2(auStack_190);
      auVar9 = _vaddbc(auVar9,auVar10);
      auVar9 = _vmulbc(auVar9,auVar12);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      goto LAB_00263198;
    }
    fVar8 = SQRT(auVar9._0_4_ + 1.0);
    auVar9 = _lqc2(auStack_180);
    _lqc2(*pauVar5);
    auVar9 = _vsubbc(auVar9,auVar10);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar9 = _sqc2(auVar9);
    *pauVar5 = auVar9;
    auVar10 = _lqc2(auStack_190);
    auVar9 = _lqc2(auStack_170);
    auVar9 = _vsubbc(auVar9,auVar10);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar13 = _qmtc2(0);
    auVar9 = _sqc2(auVar9);
    *pauVar5 = auVar9;
    auVar11 = _qmtc2(0.5 / fVar8);
    auVar10 = _lqc2(auStack_180);
    auVar12 = _qmtc2(fVar8 * 0.5);
    auVar9 = _lqc2(auStack_190);
LAB_00262e3c:
    auVar9 = _vsubbc(auVar9,auVar10);
    auVar9 = _vaddbc(in_vf0,auVar9);
    _vmove(auVar9);
    auVar10 = _vmulbc(in_vf0,auVar13);
    auVar9 = _sqc2(auVar9);
    *pauVar5 = auVar9;
    auVar9 = _vmove(auVar10);
    auVar9 = _vmulbc(auVar9,auVar11);
    auVar9 = _sqc2(auVar9);
    *pauVar5 = auVar9;
    auVar9 = _vmulbc(in_vf0,auVar12);
    auVar9 = _sqc2(auVar9);
    *pauVar5 = auVar9;
LAB_00263198:
    pauVar4 = *(undefined1 (**) [16])(pauVar5[5] + 0xc);
  }
  else {
    auVar11 = _lqc2(*pauVar4);
    _sqc2(auVar11);
    _vmove(auVar11);
    auVar10 = _lqc2(pauVar4[1]);
    auVar14 = _vaddbc(in_vf0,auVar10);
    _vmove(auVar14);
    _sqc2(auVar10);
    _vmove(auVar10);
    auVar13 = _vaddbc(in_vf0,auVar11);
    auVar9 = _lqc2(pauVar4[2]);
    _vmove(auVar13);
    auVar16 = _vaddbc(in_vf0,auVar9);
    auVar17 = _vaddbc(in_vf0,auVar9);
    _sqc2(auVar9);
    _vmove(auVar9);
    auVar15 = _vaddbc(in_vf0,auVar11);
    auVar12 = _lqc2(pauVar4[3]);
    _vmove(auVar15);
    auVar11 = _vmulbc(auVar16,auVar12);
    auVar9 = _vmulbc(auVar17,auVar12);
    auVar18 = _vaddbc(in_vf0,auVar10);
    auVar10 = _vmulbc(auVar18,auVar12);
    auVar9 = _vadd(auVar11,auVar9);
    _sqc2(auVar14);
    auVar9 = _vadd(auVar9,auVar10);
    _sqc2(auVar13);
    auVar9 = _vsub(in_vf0,auVar9);
    _sqc2(auVar15);
    _auStack_140 = _sqc2(auVar16);
    _sqc2(auVar12);
    auStack_130 = _sqc2(auVar17);
    auStack_120 = _sqc2(auVar18);
    auStack_110 = _sqc2(auVar9);
    auVar12 = _lqc2(auStack_190);
    auVar14 = _lqc2(auStack_180);
    auVar13 = _lqc2(auStack_170);
    auVar9 = _lqc2(_auStack_140);
    _vmulabc(auVar12,auVar9);
    _vmaddabc(auVar14,auVar9);
    auVar15 = _vmaddbc(auVar13,auVar9);
    auVar16 = _lqc2(auStack_160);
    _auStack_c0 = _sqc2(auVar15);
    auVar9 = _lqc2(auStack_130);
    _vmulabc(auVar12,auVar9);
    _vmaddabc(auVar14,auVar9);
    auVar11 = _vmaddbc(auVar13,auVar9);
    auStack_b0 = _sqc2(auVar11);
    auVar9 = _lqc2(auStack_120);
    _vmulabc(auVar12,auVar9);
    _vmaddabc(auVar14,auVar9);
    auVar10 = _vmaddbc(auVar13,auVar9);
    auStack_a0 = _sqc2(auVar10);
    auVar9 = _lqc2(auStack_110);
    _vmulabc(auVar12,auVar9);
    _vmaddabc(auVar14,auVar9);
    _vmaddabc(auVar13,auVar9);
    auVar9 = _vmaddbc(auVar16,in_vf0);
    auStack_f0 = _sqc2(auVar11);
    auStack_e0 = _sqc2(auVar10);
    auStack_d0 = _sqc2(auVar9);
    auStack_90 = _sqc2(auVar9);
    auStack_100 = _sqc2(auVar15);
    pauVar5 = *(undefined1 (**) [16])(iVar2 + 0x58);
    _lqc2(pauVar5[4]);
    auVar9 = _vmove(auVar15);
    auVar9 = _sqc2(auVar9);
    pauVar5[4] = auVar9;
    auVar9 = _lqc2(auStack_f0);
    _lqc2(pauVar5[5]);
    auVar9 = _vmove(auVar9);
    _lqc2(pauVar5[6]);
    auVar9 = _sqc2(auVar9);
    pauVar5[5] = auVar9;
    _lqc2(pauVar5[1]);
    auVar9 = _lqc2(auStack_e0);
    auVar9 = _vmove(auVar9);
    auVar9 = _sqc2(auVar9);
    pauVar5[6] = auVar9;
    auVar9 = _lqc2(auStack_d0);
    auVar9 = _vmove(auVar9);
    auVar9 = _sqc2(auVar9);
    pauVar5[1] = auVar9;
    auVar11 = _lqc2(auStack_f0);
    auVar9 = _lqc2(auStack_100);
    auVar9 = _vaddbc(auVar9,auVar11);
    auVar10 = _lqc2(auStack_e0);
    auVar9 = _vaddbc(auVar9,auVar10);
    auVar9 = _qmfc2(auVar9._0_4_);
    if (0.0 < auVar9._0_4_) {
      fVar8 = SQRT(auVar9._0_4_ + 1.0);
      auVar9 = _lqc2(auStack_f0);
      _lqc2(*pauVar5);
      auVar9 = _vsubbc(auVar9,auVar10);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      auVar10 = _lqc2(auStack_100);
      auVar9 = _lqc2(auStack_e0);
      auVar9 = _vsubbc(auVar9,auVar10);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar13 = _qmtc2(0);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      auVar11 = _qmtc2(0.5 / fVar8);
      auVar10 = _lqc2(auStack_f0);
      auVar12 = _qmtc2(fVar8 * 0.5);
      auVar9 = _lqc2(auStack_100);
      goto LAB_00262e3c;
    }
    auVar9 = _sqc2(auVar11);
    auVar10 = _lqc2(auStack_100);
    auVar10 = _qmfc2(auVar10._0_4_);
    auStack_c0._4_4_ = auVar9._4_4_;
    auVar9 = _lqc2(auStack_e0);
    if ((float)auStack_c0._4_4_ <= auVar10._0_4_) {
      _auStack_c0 = _sqc2(auVar9);
      auVar9 = _lqc2(auStack_100);
      auVar9 = _qmfc2(auVar9._0_4_);
      uVar6 = (uint)(auVar9._0_4_ < fStack_b8) << 1;
    }
    else {
      auVar9 = _sqc2(auVar9);
      fStack_b8 = auVar9._8_4_;
      auVar9 = _lqc2(auStack_f0);
      auVar9 = _sqc2(auVar9);
      auStack_c0._4_4_ = auVar9._4_4_;
      bVar1 = (float)auStack_c0._4_4_ < fStack_b8;
      uVar6 = 1;
      _auStack_c0 = auVar9;
      if (bVar1) {
        uVar6 = 2;
      }
    }
    if (uVar6 == 1) {
      auVar9 = _lqc2(auStack_100);
      auVar10 = _lqc2(auStack_e0);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar9 = _lqc2(auStack_f0);
      auVar9 = _vsubbc(auVar9,auVar10);
      auVar10 = _qmtc2(0x3f800000);
      auVar9 = _vaddbc(auVar9,auVar10);
      _auStack_c0 = _sqc2(auVar9);
      _lqc2(*pauVar5);
      fVar8 = 0.5 / SQRT((float)auStack_c0._4_4_);
      auVar9 = _qmtc2(SQRT((float)auStack_c0._4_4_) * 0.5);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      auVar12 = _qmtc2(fVar8);
      auVar11 = _qmtc2(fVar8);
      auVar10 = _lqc2(auStack_100);
      auVar9 = _lqc2(auStack_e0);
      auVar9 = _vsubbc(auVar9,auVar10);
      auVar9 = _vmulbc(auVar9,auVar12);
      auVar9 = _vmulbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      auVar10 = _lqc2(auStack_e0);
      auVar9 = _lqc2(auStack_f0);
      auVar9 = _vaddbc(auVar9,auVar10);
      auVar9 = _vmulbc(auVar9,auVar11);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      auVar9 = _lqc2(auStack_f0);
      auVar10 = _lqc2(auStack_100);
      auVar9 = _vaddbc(auVar9,auVar10);
      auVar9 = _vmulbc(auVar9,auVar12);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
      goto LAB_00263198;
    }
    if (uVar6 < 2) {
      auVar9 = _lqc2(auStack_e0);
      if (uVar6 == 0) {
        auVar10 = _lqc2(auStack_f0);
        auVar11 = _vaddbc(auVar10,auVar9);
        auVar9 = _lqc2(auStack_100);
        auVar10 = _qmtc2(0x3f800000);
        auVar9 = _vsubbc(auVar9,auVar11);
        auVar9 = _vaddbc(auVar9,auVar10);
        auVar9 = _qmfc2(auVar9._0_4_);
        _lqc2(*pauVar5);
        fVar8 = 0.5 / SQRT(auVar9._0_4_);
        auVar9 = _qmtc2(SQRT(auVar9._0_4_) * 0.5);
        auVar9 = _vaddbc(in_vf0,auVar9);
        auVar9 = _sqc2(auVar9);
        *pauVar5 = auVar9;
        auVar12 = _qmtc2(fVar8);
        auVar11 = _qmtc2(fVar8);
        auVar10 = _lqc2(auStack_e0);
        auVar9 = _lqc2(auStack_f0);
        auVar9 = _vsubbc(auVar9,auVar10);
        auVar9 = _vmulbc(auVar9,auVar12);
        auVar9 = _vmulbc(in_vf0,auVar9);
        auVar9 = _sqc2(auVar9);
        *pauVar5 = auVar9;
        auVar10 = _lqc2(auStack_f0);
        auVar9 = _lqc2(auStack_100);
        auVar9 = _vaddbc(auVar9,auVar10);
        auVar9 = _vmulbc(auVar9,auVar11);
        auVar9 = _vaddbc(in_vf0,auVar9);
        auVar9 = _sqc2(auVar9);
        *pauVar5 = auVar9;
        auVar9 = _lqc2(auStack_100);
        auVar10 = _lqc2(auStack_e0);
        auVar9 = _vaddbc(auVar9,auVar10);
        auVar9 = _vmulbc(auVar9,auVar12);
        auVar9 = _vaddbc(in_vf0,auVar9);
        auVar9 = _sqc2(auVar9);
        *pauVar5 = auVar9;
        goto LAB_00263198;
      }
      pauVar4 = *(undefined1 (**) [16])(pauVar5[5] + 0xc);
    }
    else {
      auVar9 = _lqc2(auStack_f0);
      if (uVar6 == 2) {
        auVar10 = _lqc2(auStack_100);
        auVar10 = _vaddbc(auVar10,auVar9);
        auVar9 = _lqc2(auStack_e0);
        auVar9 = _vsubbc(auVar9,auVar10);
        auVar10 = _qmtc2(0x3f800000);
        auVar9 = _vaddbc(auVar9,auVar10);
        _auStack_c0 = _sqc2(auVar9);
        _lqc2(*pauVar5);
        fVar8 = 0.5 / SQRT(fStack_b8);
        auVar9 = _qmtc2(SQRT(fStack_b8) * 0.5);
        auVar9 = _vaddbc(in_vf0,auVar9);
        auVar9 = _sqc2(auVar9);
        *pauVar5 = auVar9;
        auVar12 = _qmtc2(fVar8);
        auVar11 = _qmtc2(fVar8);
        auVar10 = _lqc2(auStack_f0);
        auVar9 = _lqc2(auStack_100);
        auVar9 = _vsubbc(auVar9,auVar10);
        auVar9 = _vmulbc(auVar9,auVar12);
        auVar9 = _vmulbc(in_vf0,auVar9);
        auVar9 = _sqc2(auVar9);
        *pauVar5 = auVar9;
        auVar10 = _lqc2(auStack_100);
        auVar9 = _lqc2(auStack_e0);
        auVar9 = _vaddbc(auVar9,auVar10);
        auVar9 = _vmulbc(auVar9,auVar11);
        auVar9 = _vaddbc(in_vf0,auVar9);
        auVar9 = _sqc2(auVar9);
        *pauVar5 = auVar9;
        auVar9 = _lqc2(auStack_e0);
        auVar10 = _lqc2(auStack_f0);
LAB_00263188:
        auVar9 = _vaddbc(auVar9,auVar10);
        auVar9 = _vmulbc(auVar9,auVar12);
        auVar9 = _vaddbc(in_vf0,auVar9);
        auVar9 = _sqc2(auVar9);
        *pauVar5 = auVar9;
        goto LAB_00263198;
      }
      pauVar4 = *(undefined1 (**) [16])(pauVar5[5] + 0xc);
    }
  }
LAB_0026319c:
  if (pauVar4 != (undefined1 (*) [16])0x0) {
    auVar11 = _lqc2(*pauVar4);
    _lqc2(pauVar5[7]);
    _lqc2(pauVar5[8]);
    auVar18 = _lqc2(pauVar5[4]);
    auVar17 = _lqc2(pauVar5[5]);
    auVar15 = _lqc2(pauVar5[6]);
    auVar9 = _vmulbc(auVar18,auVar11);
    auVar10 = _vmulbc(auVar17,auVar11);
    auVar11 = _vmulbc(auVar15,auVar11);
    auVar12 = _vaddbc(in_vf0,auVar18);
    auVar13 = _vaddbc(in_vf0,auVar17);
    auVar14 = _vaddbc(in_vf0,auVar15);
    _vmulabc(auVar9,auVar18);
    _vmaddabc(auVar10,auVar17);
    auVar16 = _vmaddbc(auVar11,auVar15);
    _vmulabc(auVar9,auVar18);
    _vmaddabc(auVar10,auVar17);
    _vmaddbc(auVar11,auVar15);
    _vmulabc(auVar12,auVar9);
    _vmaddabc(auVar13,auVar10);
    auVar10 = _vmaddbc(auVar14,auVar11);
    auVar9 = _sqc2(auVar16);
    pauVar5[7] = auVar9;
    auVar9 = _sqc2(auVar10);
    pauVar5[8] = auVar9;
    *(undefined4 *)(pauVar5[7] + 0xc) = *(undefined4 *)pauVar4[1];
  }
LAB_0026320c:
  uVar6 = 0;
  *(undefined4 *)(iVar2 + 0x10) = auStack_190._0_4_;
  *(undefined4 *)(iVar2 + 0x14) = auStack_190._4_4_;
  *(undefined4 *)(iVar2 + 0x18) = auStack_190._8_4_;
  *(undefined4 *)(iVar2 + 0x1c) = auStack_190._12_4_;
  *(undefined4 *)(iVar2 + 0x20) = auStack_180._0_4_;
  *(undefined4 *)(iVar2 + 0x24) = auStack_180._4_4_;
  *(undefined4 *)(iVar2 + 0x28) = auStack_180._8_4_;
  *(undefined4 *)(iVar2 + 0x2c) = auStack_180._12_4_;
  *(undefined4 *)(iVar2 + 0x30) = auStack_170._0_4_;
  *(undefined4 *)(iVar2 + 0x34) = auStack_170._4_4_;
  *(undefined4 *)(iVar2 + 0x38) = auStack_170._8_4_;
  *(undefined4 *)(iVar2 + 0x3c) = auStack_170._12_4_;
  *(undefined4 *)(iVar2 + 0x40) = auStack_160._0_4_;
  *(undefined4 *)(iVar2 + 0x44) = auStack_160._4_4_;
  *(undefined4 *)(iVar2 + 0x48) = auStack_160._8_4_;
  *(undefined4 *)(iVar2 + 0x4c) = auStack_160._12_4_;
  *(undefined4 *)(piVar7[2] + 0x18) = 0;
  if (0 < param_2) {
    do {
      FUN_003342d0(*(int *)(iVar3 + 0x30) + (uVar6 & 0xffff) * 0x60,4);
      FUN_00263558(param_1,(short)uVar6);
      iVar2 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar2 + *piVar7) = 0;
      *(undefined4 *)(iVar2 + *piVar7 + 4) = 0xff;
    } while ((int)uVar6 < param_2);
  }
  return;
}


// ==== FUN_002632b8 @ 002632b8 ====

undefined4 FUN_002632b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = 0;
  iVar5 = (int)param_1;
  iVar1 = *(int *)(**(int **)(*(int *)(iVar5 + 4) + 4) + 0x40);
  if (0 < *(short *)(iVar5 + 0xc)) {
    iVar2 = 0;
    do {
      iVar3 = (int)lVar4 + 1;
      lVar4 = (long)iVar3;
      FUN_00263558(param_1,iVar2 >> 0x10);
      iVar2 = iVar3 * 0x10000;
    } while (lVar4 < *(short *)(iVar5 + 0xc));
  }
  iVar2 = *(int *)(iVar1 + 0x20);
  (**(code **)(iVar2 + 0x18))(iVar1 + *(short *)(iVar2 + 0x14));
  FUN_0032cb58(param_2,*(undefined4 *)(iVar5 + 8),1);
  return 1;
}


// ==== FUN_00263360 @ 00263360 ====

undefined4 FUN_00263360(int param_1,undefined8 param_2)

{
  FUN_0032cde0(param_2,*(undefined4 *)(param_1 + 8));
  return 1;
}


// ==== FUN_00263388 @ 00263388 ====

void FUN_00263388(int param_1)

{
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}


// ==== FUN_00263390 @ 00263390 ====

void FUN_00263390(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  param_3 = param_4 + param_3;
  for (; param_4 < param_3; param_4 = param_4 + 1) {
    *(undefined4 *)(param_4 * 8 + *param_1) = param_2;
  }
  return;
}


// ==== FUN_002633d0 @ 002633d0 ====

undefined4 FUN_002633d0(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x58);
}


// ==== FUN_002633e0 @ 002633e0 ====

void FUN_002633e0(int *param_1,ushort param_2,uint param_3,undefined8 param_4,undefined4 *param_5,
                 long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_a3_udw;
  undefined4 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_60 [16];
  
  auStack_60._4_4_ = (undefined4)((ulong)param_4 >> 0x20);
  if ((long)(int)(short)param_2 < (long)*(short *)((int)param_1 + 0xe)) {
    *(uint *)((short)param_2 * 8 + *param_1 + 4) = param_3 & 0xff;
    iVar1 = *(int *)(**(int **)(param_1[1] + 4) + 0x40);
    if (param_6 == 0) {
      puVar7 = (undefined4 *)(*(int *)(iVar1 + 0x30) + (uint)param_2 * 0x60);
      FUN_003342d0(puVar7,4);
      auVar8 = _qmtc2((int)param_4);
      auVar4 = _qmfc2(auVar8._0_4_);
      auVar8 = _qmfc2(auVar8._0_4_);
      auStack_60._0_4_ = auVar4._0_4_;
      auStack_60._8_4_ = auVar8._8_4_;
      auStack_60._12_4_ = auVar8._12_4_;
      auVar8 = _lqc2(auStack_60);
      auVar4 = _qmfc2(auVar8._0_4_);
      puVar7[0x10] = auVar4._0_4_;
      auVar4 = _sqc2(auVar8);
      auStack_60._4_4_ = auVar4._4_4_;
      puVar7[0x11] = auStack_60._4_4_;
      auVar4 = _sqc2(auVar8);
      auStack_60._8_4_ = auVar4._8_4_;
      puVar7[0x12] = auStack_60._8_4_;
    }
    else {
      puVar7 = (undefined4 *)(*(int *)(iVar1 + 0x30) + (uint)param_2 * 0x60);
      FUN_003342d0(puVar7,2);
      puVar7[0x10] = in_a3_udw;
      puVar7[0x13] = auStack_60._4_4_;
    }
    puVar7[0x17] = puVar7[0x17] | 1;
    uVar5 = param_5[1];
    uVar6 = param_5[2];
    uVar3 = param_5[3];
    *puVar7 = *param_5;
    puVar7[1] = uVar5;
    puVar7[2] = uVar6;
    puVar7[3] = uVar3;
    uVar2 = *(undefined8 *)(param_5 + 4);
    uVar5 = param_5[6];
    uVar6 = param_5[7];
    puVar7[4] = (int)uVar2;
    puVar7[5] = (int)((ulong)uVar2 >> 0x20);
    puVar7[6] = uVar5;
    puVar7[7] = uVar6;
    uVar5 = param_5[9];
    uVar6 = param_5[10];
    uVar3 = param_5[0xb];
    puVar7[8] = param_5[8];
    puVar7[9] = uVar5;
    puVar7[10] = uVar6;
    puVar7[0xb] = uVar3;
    uVar2 = *(undefined8 *)(param_5 + 0xc);
    uVar5 = param_5[0xe];
    uVar6 = param_5[0xf];
    puVar7[0xc] = (int)uVar2;
    puVar7[0xd] = (int)((ulong)uVar2 >> 0x20);
    puVar7[0xe] = uVar5;
    puVar7[0xf] = uVar6;
    (**(code **)(*(int *)(iVar1 + 0x20) + 0x18))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 0x14));
  }
  return;
}


// ==== FUN_00263558 @ 00263558 ====

void FUN_00263558(int param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_10 [16];
  
  pauVar2 = (undefined1 (*) [16])
            (*(int *)(*(int *)(**(int **)(*(int *)(param_1 + 4) + 4) + 0x40) + 0x30) +
            (param_2 & 0xffff) * 0x60);
  *(uint *)(pauVar2[5] + 0xc) = *(uint *)(pauVar2[5] + 0xc) & 0xfffffffe;
  auStack_10._0_12_ = ZEXT812(0);
  auVar3 = _lqc2(auStack_10);
  auVar1 = _qmfc2(auVar3._0_4_);
  *(int *)pauVar2[4] = auVar1._0_4_;
  auVar1 = _sqc2(auVar3);
  auStack_10._4_4_ = auVar1._4_4_;
  *(undefined4 *)(pauVar2[4] + 4) = auStack_10._4_4_;
  auVar1 = _sqc2(auVar3);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar3 = _vsub(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _qmtc2(0);
  _vmove(auVar3);
  auStack_10._8_4_ = auVar1._8_4_;
  auVar4 = _vaddbc(in_vf0,auVar5);
  auVar1 = _sqc2(auVar3);
  pauVar2[3] = auVar1;
  _vmove(auVar4);
  auVar3 = _qmtc2(0xc2c80000);
  auVar1 = _vaddbc(in_vf0,auVar5);
  *(undefined4 *)(pauVar2[4] + 8) = auStack_10._8_4_;
  auVar1 = _sqc2(auVar1);
  pauVar2[3] = auVar1;
  auVar3 = _vaddbc(in_vf0,auVar3);
  auVar1 = _sqc2(auVar6);
  *pauVar2 = auVar1;
  auVar1 = _sqc2(auVar3);
  pauVar2[3] = auVar1;
  auVar1 = _sqc2(auVar7);
  pauVar2[1] = auVar1;
  auVar1 = _sqc2(auVar8);
  pauVar2[2] = auVar1;
  return;
}


// ==== FUN_00263630 @ 00263630 ====

void FUN_00263630(undefined8 param_1,short param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int *piVar18;
  long lVar17;
  
  iVar15 = (param_2 + 1) * 0x10000 >> 0x10;
  lVar17 = (long)iVar15;
  piVar18 = (int *)param_1;
  iVar16 = *(int *)(param_2 * 8 + *piVar18);
  iVar1 = *(int *)(**(int **)(piVar18[1] + 4) + 0x40);
  if (lVar17 < *(short *)((int)piVar18 + 0xe)) {
    iVar4 = iVar15 * 8;
    iVar2 = *(int *)(iVar4 + *piVar18);
    while (iVar2 == iVar16) {
      uVar3 = (uint)lVar17;
      puVar5 = (undefined4 *)((uVar3 & 0xffff) * 0x60 + *(int *)(iVar1 + 0x30));
      puVar7 = puVar5 + 0x18;
      puVar6 = (undefined4 *)((uVar3 - 1 & 0xffff) * 0x60 + *(int *)(iVar1 + 0x30));
      do {
        uVar8 = puVar5[1];
        uVar9 = puVar5[2];
        uVar10 = puVar5[3];
        uVar11 = puVar5[4];
        uVar12 = puVar5[5];
        uVar13 = puVar5[6];
        uVar14 = puVar5[7];
        *puVar6 = *puVar5;
        puVar6[1] = uVar8;
        puVar6[2] = uVar9;
        puVar6[3] = uVar10;
        puVar6[4] = uVar11;
        puVar6[5] = uVar12;
        puVar6[6] = uVar13;
        puVar6[7] = uVar14;
        puVar5 = puVar5 + 8;
        puVar6 = puVar6 + 8;
      } while (puVar5 != puVar7);
      iVar15 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
      lVar17 = (long)iVar15;
      ((undefined8 *)(iVar4 + *piVar18))[-1] = *(undefined8 *)(iVar4 + *piVar18);
      iVar4 = iVar15 * 8;
      if (*(short *)((int)piVar18 + 0xe) <= lVar17) break;
      iVar2 = *(int *)(iVar4 + *piVar18);
    }
  }
  iVar16 = (iVar15 + -1) * 0x10000 >> 0x10;
  FUN_00263558(param_1,iVar16);
  iVar16 = iVar16 * 8;
  *(undefined4 *)(iVar16 + *piVar18) = 0;
  *(undefined4 *)(iVar16 + *piVar18 + 4) = 0xff;
  (**(code **)(*(int *)(iVar1 + 0x20) + 0x18))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 0x14));
  return;
}


// ==== FUN_00263798 @ 00263798 ====

void FUN_00263798(undefined8 param_1,short param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar5;
  int *piVar6;
  long lVar4;
  
  iVar3 = (int)param_2;
  lVar4 = (long)iVar3;
  iVar5 = iVar3 * 8;
  piVar6 = (int *)param_1;
  iVar1 = *(int *)(**(int **)(piVar6[1] + 4) + 0x40);
  if (lVar4 < *(short *)((int)piVar6 + 0xe)) {
    if (*(int *)(iVar5 + *piVar6) != param_3) {
      iVar3 = *(int *)(iVar1 + 0x20);
      goto LAB_00263874;
    }
    iVar3 = iVar3 * 0x10000;
    piVar2 = (int *)(iVar5 + *piVar6);
    do {
      iVar3 = iVar3 + 0x10000;
      *piVar2 = 0;
      *(undefined4 *)(iVar5 + *piVar6 + 4) = 0xff;
      iVar5 = iVar5 + 8;
      FUN_00263558(param_1,lVar4);
      lVar4 = (long)(iVar3 >> 0x10);
      if (*(short *)((int)piVar6 + 0xe) <= lVar4) break;
      piVar2 = (int *)(iVar5 + *piVar6);
    } while (*piVar2 == param_3);
  }
  iVar3 = *(int *)(iVar1 + 0x20);
LAB_00263874:
  (**(code **)(iVar3 + 0x18))(iVar1 + *(short *)(iVar3 + 0x14));
  return;
}


// ==== FUN_002638b0 @ 002638b0 ====

void FUN_002638b0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (param_3 << 0x10) >> 0xd;
  iVar1 = *(int *)(iVar2 + *param_1);
  iVar3 = iVar2 + *param_1;
  do {
    iVar2 = iVar2 + 8;
    if ((param_2 & 0xff) < *(uint *)(iVar3 + 4)) {
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) - 1;
    }
    iVar3 = iVar2 + *param_1;
  } while (*(int *)(iVar2 + *param_1) == iVar1);
  return;
}


// ==== FUN_00263908 @ 00263908 ====

long FUN_00263908(int *param_1,short param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  sVar1 = *(short *)((int)param_1 + 0xe);
  lVar5 = (long)sVar1;
  lVar6 = (long)((int)sVar1 + (int)param_2);
  if ((int)(short)param_1[3] - (int)sVar1 < (int)param_2) {
    return -1;
  }
  if (lVar5 < lVar6) {
    iVar2 = sVar1 * 0x10000;
    lVar4 = lVar5;
    do {
      iVar2 = iVar2 + 0x10000;
      iVar3 = (int)lVar4 * 8;
      lVar4 = (long)(iVar2 >> 0x10);
      *(undefined4 *)(iVar3 + *param_1) = param_3;
      *(undefined4 *)(iVar3 + *param_1 + 4) = 0xff;
    } while (lVar4 < lVar6);
  }
  *(short *)((int)param_1 + 0xe) = param_2 + *(short *)((int)param_1 + 0xe);
  return lVar5;
}


// ==== FUN_002639a0 @ 002639a0 ====

undefined8 FUN_002639a0(int *param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_1d0 [208];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
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
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  long lVar6;
  
  iVar5 = (int)param_4;
  lVar6 = (long)iVar5;
  auVar9 = _qmtc2(param_2);
  auVar8 = _qmtc2(param_3);
  iStack_c0 = *(int *)(iVar5 * 8 + *param_1);
  iVar1 = *(int *)(**(int **)(param_1[1] + 4) + 0x40);
  if (lVar6 < *(short *)((int)param_1 + 0xe)) {
    auVar3 = _qmfc2(auVar9._0_4_);
    auVar4 = _qmfc2(auVar8._0_4_);
    uVar2 = auVar3._0_4_;
    iVar5 = iVar5 * 0x10000;
    auVar9 = _qmfc2(auVar9._0_4_);
    auVar8 = _qmfc2(auVar8._0_4_);
    iVar7 = *(int *)(iVar1 + 0x30);
    while( true ) {
      iVar5 = iVar5 + 0x10000;
      uStack_dc = auVar9._4_4_;
      uStack_d8 = auVar9._8_4_;
      iVar7 = iVar7 + ((uint)lVar6 & 0xffff) * 0x60;
      uStack_f0 = auVar8._0_4_;
      uStack_fc = auVar8._4_4_;
      uStack_f8 = auVar8._8_4_;
      uStack_e4 = auVar8._12_4_;
      uStack_d4 = 0;
      uStack_f4 = 0;
      uStack_c4 = 0;
      if ((*(uint *)(iVar7 + 0x5c) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        uStack_100 = auVar4._0_4_;
        uStack_ec = uStack_fc;
        uStack_e8 = uStack_f8;
        uStack_e0 = uVar2;
        uStack_d0 = auVar4._0_4_;
        uStack_cc = uStack_fc;
        uStack_c8 = uStack_f8;
        lVar6 = (**(code **)(*(int *)(iVar7 + 0x58) + 0x28))
                          (iVar7 + *(short *)(*(int *)(iVar7 + 0x58) + 0x24),&uStack_e0,&uStack_d0,0
                           ,auStack_1d0);
      }
      if (lVar6 != 0) {
        return 1;
      }
      lVar6 = (long)(iVar5 >> 0x10);
      if (*(int *)((iVar5 >> 0x10) * 8 + *param_1) != iStack_c0) {
        return 0;
      }
      if (*(short *)((int)param_1 + 0xe) <= lVar6) break;
      iVar7 = *(int *)(iVar1 + 0x30);
    }
  }
  return 0;
}


// ==== FUN_00263b70 @ 00263b70 ====

bool FUN_00263b70(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_120 [208];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  auVar4 = _qmtc2(param_2);
  auVar2 = _qmfc2(auVar4._0_4_);
  auVar5 = _qmtc2(param_3);
  uStack_30 = auVar2._0_4_;
  auVar2 = _qmfc2(auVar5._0_4_);
  uStack_50 = auVar2._0_4_;
  auVar2 = _sqc2(auVar4);
  iVar3 = *(int *)(*(int *)(**(int **)(*(int *)(param_1 + 4) + 4) + 0x40) + 0x30) +
          (param_4 & 0xffff) * 0x60;
  auStack_40._4_4_ = auVar2._4_4_;
  auVar2 = _sqc2(auVar4);
  auStack_40._8_4_ = auVar2._8_4_;
  auVar2 = _sqc2(auVar5);
  uStack_2c = auStack_40._4_4_;
  uStack_28 = auStack_40._8_4_;
  uStack_24 = 0;
  auStack_40._4_4_ = auVar2._4_4_;
  uStack_4c = auStack_40._4_4_;
  auVar2 = _sqc2(auVar5);
  auStack_40._8_4_ = auVar2._8_4_;
  uStack_48 = auStack_40._8_4_;
  uStack_44 = 0;
  uStack_1c = auStack_40._4_4_;
  uStack_18 = auStack_40._8_4_;
  uStack_14 = 0;
  if ((*(uint *)(iVar3 + 0x5c) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    auStack_40 = auVar2;
    uStack_20 = uStack_50;
    lVar1 = (**(code **)(*(int *)(iVar3 + 0x58) + 0x28))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x58) + 0x24),&uStack_30,&uStack_20,0,
                       auStack_120);
  }
  return lVar1 != 0;
}


// ==== FUN_00263c58 @ 00263c58 ====

undefined8
FUN_00263c58(int *param_1,undefined4 param_2,undefined4 param_3,short param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_1d0 [64];
  float fStack_190;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
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
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  long lVar6;
  
  iVar5 = (int)param_4;
  lVar6 = (long)iVar5;
  auVar10 = _qmtc2(param_2);
  auVar9 = _qmtc2(param_3);
  uVar8 = 0;
  iStack_c0 = *(int *)(iVar5 * 8 + *param_1);
  iStack_bc = *(int *)(**(int **)(param_1[1] + 4) + 0x40);
  if (lVar6 < *(short *)((int)param_1 + 0xe)) {
    auVar4 = _qmfc2(auVar10._0_4_);
    iVar5 = iVar5 * 0x10000;
    uVar2 = auVar4._0_4_;
    auVar4 = _qmfc2(auVar9._0_4_);
    auVar10 = _qmfc2(auVar10._0_4_);
    puStack_b8 = &uStack_e0;
    puStack_b4 = &uStack_d0;
    auVar9 = _qmfc2(auVar9._0_4_);
    do {
      iVar5 = iVar5 + 0x10000;
      uStack_dc = auVar10._4_4_;
      uStack_d8 = auVar10._8_4_;
      iVar7 = *(int *)(iStack_bc + 0x30) + ((uint)lVar6 & 0xffff) * 0x60;
      uStack_f0 = auVar9._0_4_;
      uStack_fc = auVar9._4_4_;
      uStack_f8 = auVar9._8_4_;
      uStack_e4 = auVar9._12_4_;
      uStack_d4 = 0;
      uStack_f4 = 0;
      uStack_c4 = 0;
      if ((*(uint *)(iVar7 + 0x5c) & 1) == 0) {
        lVar3 = 0;
      }
      else {
        uStack_100 = auVar4._0_4_;
        uStack_ec = uStack_fc;
        uStack_e8 = uStack_f8;
        uStack_e0 = uVar2;
        uStack_d0 = auVar4._0_4_;
        uStack_cc = uStack_fc;
        uStack_c8 = uStack_f8;
        lVar3 = (**(code **)(*(int *)(iVar7 + 0x58) + 0x28))
                          (iVar7 + *(short *)(*(int *)(iVar7 + 0x58) + 0x24),puStack_b8,puStack_b4,0
                           ,auStack_1d0);
      }
      if ((lVar3 != 0) && (fStack_190 < (float)param_5[8])) {
        uVar8 = 1;
        *param_5 = auStack_1d0._16_4_;
        param_5[1] = auStack_1d0._20_4_;
        param_5[2] = auStack_1d0._24_4_;
        param_5[3] = auStack_1d0._28_4_;
        param_5[4] = auStack_1d0._32_4_;
        param_5[5] = auStack_1d0._36_4_;
        param_5[6] = auStack_1d0._40_4_;
        param_5[7] = auStack_1d0._44_4_;
        param_5[8] = fStack_190;
        uVar1 = *(undefined1 *)((uint)lVar6 * 8 + *param_1 + 4);
        param_5[10] = 0;
        *(undefined1 *)(param_5 + 0xb) = uVar1;
      }
      lVar6 = (long)(iVar5 >> 0x10);
    } while ((*(int *)((iVar5 >> 0x10) * 8 + *param_1) == iStack_c0) &&
            (lVar6 < *(short *)((int)param_1 + 0xe)));
  }
  return uVar8;
}


// ==== FUN_00263e80 @ 00263e80 ====

undefined4 FUN_00263e80(int *param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int aiStack_b0 [4];
  long lVar7;
  
  iVar6 = (int)param_4;
  lVar7 = (long)iVar6;
  iVar1 = *(int *)(iVar6 * 8 + *param_1);
  iVar2 = *(int *)(**(int **)(param_1[1] + 4) + 0x40);
  if (lVar7 < *(short *)((int)param_1 + 0xe)) {
    iVar6 = iVar6 * 0x10000;
    do {
      iVar6 = iVar6 + 0x10000;
      aiStack_b0[0] = *(int *)(iVar2 + 0x30) + ((uint)lVar7 & 0xffff) * 0x60;
      iVar3 = *(int *)(DAT_0040f4d0 + 0x5a94);
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(int **)iVar3 = aiStack_b0;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x38) = param_2;
      *(undefined4 *)(iVar3 + 0x3c) = param_3;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      iVar3 = FUN_0033b688(*(undefined4 *)(DAT_0040f4d0 + 0x5a94));
      iVar5 = 0;
      if (0 < iVar3) {
        pfVar4 = (float *)(*(int *)(*(int *)(DAT_0040f4d0 + 0x5a94) + 0x30) + 0x2e0);
        do {
          if (*pfVar4 < 0.0) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          pfVar4 = pfVar4 + 0x108;
        } while (iVar5 < iVar3);
      }
      lVar7 = (long)(iVar6 >> 0x10);
    } while ((*(int *)((iVar6 >> 0x10) * 8 + *param_1) == iVar1) &&
            (lVar7 < *(short *)((int)param_1 + 0xe)));
  }
  return 0;
}


// ==== FUN_00264018 @ 00264018 ====

undefined8 FUN_00264018(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_0028fbb8();
  memset(0x1ff0000,0x65,0xf000);
  FUN_00274228();
  FUN_00125208(0x40f0f0);
  uVar2 = FUN_00107cf8(0x210d0);
  uVar2 = FUN_00387e50(uVar2);
  DAT_0040f0e0 = (int)uVar2;
  FUN_001020c0(uVar2);
  while (lVar3 = FUN_00102930(DAT_0040f0e0), lVar3 == 0) {
    FUN_001031f8(DAT_0040f0e0);
  }
  cVar1 = *(char *)(DAT_0040f0e0 + 0x210ca);
  while (cVar1 == '\0') {
    FUN_00102bd0(DAT_0040f0e0);
    cVar1 = *(char *)(DAT_0040f0e0 + 0x210ca);
  }
  do {
    lVar3 = FUN_00103158(DAT_0040f0e0);
  } while (lVar3 == 0);
  FUN_001031a0(DAT_0040f0e0);
  FUN_00125588(0x40f0f0);
  return 0;
}


// ==== FUN_00264130 @ 00264130 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00264130(long param_1,long param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 in_vf0 [16];
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uStack_2b4;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_0043e9a8 = 0x4b400000;
    DAT_0043e9ac = uStack_2b4;
    fVar15 = 0.25;
    DAT_0043e9b8 = 0x3e800000;
    DAT_0043e9bc = uStack_2b4;
    DAT_0043e9c8 = 0x42a33457;
    DAT_0043e9cc = uStack_2b4;
    uVar7 = 0;
    auVar16 = _qmtc2(0);
    DAT_0043e9d8 = 0;
    DAT_0043e9dc = uStack_2b4;
    auVar29 = _qmtc2(0);
    auVar25 = _qmtc2(0);
    auVar2 = _qmfc2(auVar25._0_4_);
    auVar16 = _sqc2(auVar16);
    auVar5 = _qmfc2(auVar29._0_4_);
    auVar17 = _qmtc2(0x3f000000);
    DAT_0043e9e0 = 0x43f59407;
    DAT_0043e9e4 = 0x44345569;
    DAT_0043e9e8 = 0x4409ee8c;
    DAT_0043e9ec = 0x43968fcd;
    auVar17 = _sqc2(auVar17);
    auVar18 = _qmtc2(0x3f000000);
    auVar25 = _sqc2(auVar25);
    auVar29 = _sqc2(auVar29);
    auVar18 = _sqc2(auVar18);
    auVar19 = _qmtc2(0x3f800000);
    DAT_0043e9f8 = 0x4b000000;
    DAT_0043e9fc = 0x4b000000;
    auVar36 = _sqc2(auVar19);
    auVar26 = _qmtc2(0x3f800000);
    DAT_0043e9a0 = 0x3fc90fdb;
    DAT_0043e9a4 = 0xbe22f983;
    auVar30 = _qmtc2(0x3f800000);
    auVar38 = _sqc2(auVar26);
    DAT_0043e9b0 = 0xbe22f983;
    DAT_0043e9b4 = 0x3f000000;
    auVar4 = _qmfc2(auVar19._0_4_);
    auVar19 = _sqc2(auVar30);
    DAT_0043e9c0 = 0xc2992661;
    DAT_0043e9c4 = 0xc2255de0;
    auVar6 = _qmfc2(auVar26._0_4_);
    DAT_0043e9d0 = 0x421ed7b7;
    DAT_0043e9d4 = 0x40c90fda;
    auVar3 = _qmfc2(auVar30._0_4_);
    DAT_0043e9f0 = 0x4b000000;
    DAT_0043e9f4 = 0x4b000000;
    DAT_0043ea00 = 0x3f800000;
    DAT_0043ea04 = 0x3faaaaab;
    FUN_0032e048(0x3f800000,0x43ea10,0xa6,0xa6,0x400,0x800,0x18);
    DAT_0043ea5c = 0x4b000000;
    DAT_0043ea54 = 0xc1c80000;
    uVar11 = 0x42480000;
    DAT_0043ea6c = 0x3f800000;
    DAT_0043ea60 = 0x3f800000;
    DAT_0043ea64 = 0x3f800000;
    DAT_0043ea74 = 0x3f800000;
    DAT_0043ea7c = 0x3f800000;
    DAT_0043ea88 = 0x3f800000;
    DAT_0043ea8c = 0x3f800000;
    uVar13 = 0x41500000;
    DAT_0043ea80 = 0x3f800000;
    DAT_0043ea84 = 0x3f800000;
    DAT_0043ea50 = uVar7;
    DAT_0043ea58 = uVar7;
    DAT_0043ea68 = uVar7;
    DAT_0043ea70 = uVar7;
    DAT_0043ea78 = uVar7;
    memset(0x43ea90,0,0xc);
    uVar7 = DAT_00400008;
    DAT_0043ea90 = 0x41f00000;
    DAT_0043ea94 = DAT_00400010;
    DAT_0043ea98 = DAT_00400008;
    uVar8 = DAT_00400010;
    memset(0x43ea9c,0,0xc);
    DAT_0043eaa4 = uVar7;
    uVar14 = 0x40e00000;
    DAT_0043ea9c = uVar11;
    DAT_0043eaa0 = uVar8;
    memset(0x43eaa8,0,0xc);
    uVar10 = 0;
    DAT_0043eaa8 = 0x40a00000;
    DAT_0043eab0 = uVar7;
    DAT_0043eaac = uVar8;
    memset(0x43eab4,0,0xc);
    auVar26 = _qmtc2(0x3f774bc7);
    auVar26 = _sqc2(auVar26);
    auVar30 = _qmtc2(0x3f774bc7);
    DAT_0043eab4 = 0x40a00000;
    auVar20 = _qmtc2(0xbe841893);
    DAT_0043eabc = uVar7;
    auVar30 = _sqc2(auVar30);
    auVar20 = _sqc2(auVar20);
    DAT_0043eab8 = uVar8;
    memset(0x43eac0,0,0xc);
    DAT_0043eac0 = 0x41a00000;
    auVar21 = _qmtc2(0x3e841893);
    DAT_0043eac8 = uVar7;
    auVar21 = _sqc2(auVar21);
    auVar22 = _qmtc2(0x3f5db22d);
    auVar22 = _sqc2(auVar22);
    DAT_0043eac4 = uVar8;
    memset(0x43eacc,0,0xc);
    auVar27 = _qmtc2(0xbf34fdf4);
    DAT_0043ead4 = uVar7;
    auVar23 = _qmtc2(0x3f5db22d);
    auVar27 = _sqc2(auVar27);
    auVar23 = _sqc2(auVar23);
    DAT_0043eacc = uVar13;
    DAT_0043ead0 = uVar8;
    memset(0x43ead8,0,0xc);
    auVar31 = _qmtc2(0x3f774bc7);
    auVar35 = _qmtc2(0xbf34fdf4);
    auVar31 = _sqc2(auVar31);
    DAT_0043eae0 = uVar7;
    auVar35 = _sqc2(auVar35);
    DAT_0043ead8 = uVar13;
    DAT_0043eadc = uVar8;
    memset(0x43eae4,0,0xc);
    DAT_0043eae4 = 0x41680000;
    DAT_0043eaec = uVar7;
    DAT_0043eae8 = uVar8;
    memset(0x43eaf0,0,0xc);
    DAT_0043eaf0 = 0x41680000;
    DAT_0043eaf8 = uVar7;
    DAT_0043eaf4 = uVar8;
    memset(0x43eafc,0,0xc);
    DAT_0043eb04 = uVar7;
    DAT_0043eafc = uVar14;
    DAT_0043eb00 = uVar8;
    memset(0x43eb08,0,0xc);
    DAT_0043eb10 = uVar7;
    DAT_0043eb08 = uVar14;
    DAT_0043eb0c = uVar8;
    memset(0x43eb14,0,0xc);
    DAT_0043eb14 = 0x41480000;
    DAT_0043eb1c = uVar7;
    DAT_0043eb18 = uVar8;
    memset(0x43eb20,0,0xc);
    DAT_0043eb20 = 0x41480000;
    DAT_0043eb28 = uVar7;
    DAT_0043eb24 = uVar8;
    memset(0x43eb2c,0,0xc);
    fVar1 = DAT_0040000c;
    fVar9 = DAT_0040000c * 1.5;
    DAT_0043eb2c = 0x41f00000;
    fVar15 = DAT_0040000c * fVar15;
    DAT_0043eb30 = DAT_00400014;
    fVar12 = DAT_0040000c * 0.5;
    uVar7 = DAT_00400014;
    DAT_0043eb34 = fVar9;
    memset(0x43eb38,0,0xc);
    DAT_0043eb38 = uVar11;
    DAT_0043eb3c = uVar7;
    DAT_0043eb40 = fVar9;
    memset(0x43eb44,0,0xc);
    DAT_0043eb44 = 0x40a00000;
    DAT_0043eb48 = uVar7;
    DAT_0043eb4c = fVar12;
    memset(0x43eb50,0,0xc);
    DAT_0043eb50 = 0x40a00000;
    DAT_0043eb54 = uVar7;
    DAT_0043eb58 = fVar12;
    memset(0x43eb5c,0,0xc);
    DAT_0043eb5c = 0x41a00000;
    DAT_0043eb60 = uVar7;
    DAT_0043eb64 = fVar12;
    memset(0x43eb68,0,0xc);
    DAT_0043eb68 = uVar13;
    DAT_0043eb6c = uVar7;
    DAT_0043eb70 = fVar15;
    memset(0x43eb74,0,0xc);
    DAT_0043eb74 = uVar13;
    DAT_0043eb78 = uVar7;
    DAT_0043eb7c = fVar15;
    memset(0x43eb80,0,0xc);
    DAT_0043eb80 = 0x41680000;
    DAT_0043eb88 = fVar1;
    DAT_0043eb84 = uVar7;
    memset(0x43eb8c,0,0xc);
    DAT_0043eb8c = 0x41680000;
    DAT_0043eb94 = fVar1;
    DAT_0043eb90 = uVar7;
    memset(0x43eb98,0,0xc);
    DAT_0043eb98 = uVar14;
    DAT_0043eb9c = uVar7;
    DAT_0043eba0 = fVar1 * 0.05;
    memset(0x43eba4,0,0xc);
    DAT_0043eba4 = uVar14;
    DAT_0043eba8 = uVar7;
    DAT_0043ebac = fVar1 * 0.05;
    memset(0x43ebb0,0,0xc);
    DAT_0043ebb0 = 0x41480000;
    DAT_0043ebb4 = uVar7;
    DAT_0043ebb8 = fVar12;
    memset(0x43ebbc,0,0xc);
    DAT_0043ebbc = 0x41480000;
    DAT_0043ebc0 = uVar7;
    DAT_0043ebc4 = fVar12;
    memset(0x43ebd0,0,0x60);
    auVar24 = _lqc2(auVar16);
    auVar28 = _lqc2(auVar26);
    _lqc2(_DAT_0043ebf0);
    _lqc2(_DAT_0043ec00);
    auVar33 = _vaddbc(in_vf0,auVar28);
    _lqc2(_DAT_0043ebd0);
    auVar28 = _vaddbc(in_vf0,auVar24);
    _lqc2(_DAT_0043ebe0);
    auVar34 = _vaddbc(in_vf0,auVar24);
    auVar32 = _vaddbc(in_vf0,auVar24);
    auVar24 = _lqc2(auVar16);
    auVar36 = _lqc2(auVar36);
    _lqc2(_DAT_0043ec10);
    _lqc2(_DAT_0043ec20);
    auVar24 = _vaddbc(in_vf0,auVar24);
    auVar36 = _vaddbc(in_vf0,auVar36);
    auVar37 = _lqc2(auVar30);
    auVar39 = _lqc2(auVar25);
    _vmove(auVar34);
    _vmove(auVar32);
    auVar32 = _vaddbc(in_vf0,auVar37);
    auVar40 = _lqc2(auVar25);
    auVar34 = _vaddbc(in_vf0,auVar39);
    auVar37 = _lqc2(auVar20);
    auVar39 = _lqc2(auVar38);
    _sqc2(auVar33);
    _sqc2(auVar28);
    _sqc2(auVar24);
    _sqc2(auVar32);
    _sqc2(auVar34);
    _sqc2(auVar36);
    _vmove(auVar33);
    auVar38 = _vaddbc(in_vf0,auVar37);
    _vmove(auVar28);
    auVar28 = _lqc2(auVar21);
    auVar32 = _vaddbc(in_vf0,auVar39);
    _sqc2(auVar38);
    auVar28 = _vaddbc(in_vf0,auVar28);
    _vmove(auVar36);
    _vmove(auVar24);
    auVar34 = _vaddbc(in_vf0,auVar40);
    auVar36 = _lqc2(auVar19);
    auVar33 = _vaddbc(in_vf0,auVar40);
    _sqc2(auVar32);
    auVar24 = _vaddbc(in_vf0,auVar36);
    auVar38 = _lqc2(auVar29);
    _sqc2(auVar33);
    auVar32 = _vaddbc(in_vf0,auVar38);
    auVar33 = _vaddbc(in_vf0,auVar38);
    _sqc2(auVar34);
    auVar36 = _vaddbc(in_vf0,auVar36);
    auVar38 = _vaddbc(in_vf0,auVar38);
    _DAT_0043ebd0 = _sqc2(auVar28);
    _DAT_0043ebe0 = _sqc2(auVar24);
    _DAT_0043ebf0 = _sqc2(auVar32);
    _DAT_0043ec00 = _sqc2(auVar33);
    _DAT_0043ec10 = _sqc2(auVar36);
    _DAT_0043ec20 = _sqc2(auVar38);
    memset(0x43ec30,0,0x60);
    auVar36 = _lqc2(auVar16);
    auVar38 = _lqc2(auVar26);
    _lqc2(_DAT_0043ec50);
    _lqc2(_DAT_0043ec30);
    auVar28 = _vaddbc(in_vf0,auVar38);
    _lqc2(_DAT_0043ec40);
    auVar33 = _vaddbc(in_vf0,auVar36);
    auVar38 = _lqc2(auVar17);
    auVar24 = _vaddbc(in_vf0,auVar36);
    _lqc2(_DAT_0043ec60);
    auVar36 = _lqc2(auVar16);
    auVar32 = _vaddbc(in_vf0,auVar38);
    auVar34 = _lqc2(auVar22);
    _lqc2(_DAT_0043ec70);
    _lqc2(_DAT_0043ec80);
    auVar38 = _vaddbc(in_vf0,auVar36);
    auVar39 = _lqc2(auVar25);
    auVar36 = _vaddbc(in_vf0,auVar34);
    auVar34 = _lqc2(auVar30);
    _vmove(auVar33);
    _vmove(auVar24);
    auVar37 = _vaddbc(in_vf0,auVar34);
    auVar40 = _lqc2(auVar20);
    auVar24 = _vaddbc(in_vf0,auVar39);
    auVar34 = _lqc2(auVar23);
    auVar33 = _qmtc2(0xbf000000);
    _vmove(auVar32);
    _sqc2(auVar28);
    auVar34 = _vaddbc(in_vf0,auVar34);
    _sqc2(auVar32);
    _sqc2(auVar38);
    _sqc2(auVar37);
    _sqc2(auVar24);
    _sqc2(auVar36);
    _vmove(auVar36);
    auVar32 = _vaddbc(in_vf0,auVar33);
    _vmove(auVar38);
    auVar24 = _vaddbc(in_vf0,auVar39);
    _vmove(auVar28);
    auVar38 = _lqc2(auVar21);
    auVar36 = _vaddbc(in_vf0,auVar40);
    _sqc2(auVar36);
    auVar33 = _vaddbc(in_vf0,auVar38);
    auVar37 = _lqc2(auVar19);
    _sqc2(auVar34);
    auVar38 = _vaddbc(in_vf0,auVar37);
    auVar36 = _lqc2(auVar29);
    _sqc2(auVar24);
    auVar24 = _vaddbc(in_vf0,auVar36);
    auVar28 = _vaddbc(in_vf0,auVar36);
    _sqc2(auVar32);
    auVar32 = _vaddbc(in_vf0,auVar37);
    auVar36 = _vaddbc(in_vf0,auVar36);
    _DAT_0043ec30 = _sqc2(auVar33);
    _DAT_0043ec40 = _sqc2(auVar38);
    _DAT_0043ec50 = _sqc2(auVar24);
    _DAT_0043ec60 = _sqc2(auVar28);
    _DAT_0043ec70 = _sqc2(auVar32);
    _DAT_0043ec80 = _sqc2(auVar36);
    memset(0x43ec90,0,0x60);
    auVar36 = _lqc2(auVar16);
    _lqc2(_DAT_0043ec90);
    _lqc2(_DAT_0043eca0);
    auVar24 = _vaddbc(in_vf0,auVar36);
    auVar32 = _vaddbc(in_vf0,auVar36);
    auVar38 = _lqc2(auVar26);
    auVar36 = _qmtc2(0xbf000000);
    auVar34 = _lqc2(auVar22);
    _lqc2(_DAT_0043ecb0);
    _lqc2(_DAT_0043ecc0);
    auVar33 = _vaddbc(in_vf0,auVar38);
    _lqc2(_DAT_0043ece0);
    auVar28 = _vaddbc(in_vf0,auVar36);
    auVar38 = _vaddbc(in_vf0,auVar34);
    auVar37 = _lqc2(auVar16);
    auVar36 = _qmtc2(0x3f000000);
    auVar34 = _lqc2(auVar23);
    _lqc2(_DAT_0043ecd0);
    _vmove(auVar28);
    auVar23 = _vaddbc(in_vf0,auVar37);
    _vmove(auVar38);
    auVar37 = _vaddbc(in_vf0,auVar34);
    auVar39 = _vaddbc(in_vf0,auVar36);
    auVar34 = _lqc2(auVar30);
    auVar36 = _lqc2(auVar25);
    _vmove(auVar32);
    _vmove(auVar24);
    auVar36 = _vaddbc(in_vf0,auVar36);
    auVar32 = _lqc2(auVar20);
    auVar24 = _vaddbc(in_vf0,auVar34);
    auVar34 = _lqc2(auVar25);
    _sqc2(auVar28);
    _sqc2(auVar23);
    _sqc2(auVar33);
    _sqc2(auVar24);
    _sqc2(auVar36);
    _sqc2(auVar38);
    _vmove(auVar33);
    auVar36 = _lqc2(auVar21);
    auVar38 = _vaddbc(in_vf0,auVar32);
    _sqc2(auVar38);
    auVar24 = _vaddbc(in_vf0,auVar36);
    _vmove(auVar23);
    auVar28 = _vaddbc(in_vf0,auVar34);
    auVar38 = _lqc2(auVar19);
    _sqc2(auVar37);
    auVar36 = _vaddbc(in_vf0,auVar38);
    auVar23 = _lqc2(auVar29);
    _sqc2(auVar28);
    auVar28 = _vaddbc(in_vf0,auVar23);
    auVar32 = _vaddbc(in_vf0,auVar23);
    _sqc2(auVar39);
    auVar38 = _vaddbc(in_vf0,auVar38);
    auVar23 = _vaddbc(in_vf0,auVar23);
    _DAT_0043ec90 = _sqc2(auVar24);
    _DAT_0043eca0 = _sqc2(auVar36);
    _DAT_0043ecb0 = _sqc2(auVar28);
    _DAT_0043ecc0 = _sqc2(auVar32);
    _DAT_0043ecd0 = _sqc2(auVar38);
    _DAT_0043ece0 = _sqc2(auVar23);
    memset(0x43ecf0,0,0x60);
    auVar38 = _lqc2(auVar16);
    _lqc2(_DAT_0043ecf0);
    _lqc2(_DAT_0043ed00);
    auVar36 = _vaddbc(in_vf0,auVar38);
    auVar23 = _vaddbc(in_vf0,auVar38);
    auVar38 = _lqc2(auVar26);
    auVar26 = _lqc2(auVar30);
    _lqc2(_DAT_0043ed10);
    _vmove(auVar36);
    auVar30 = _vaddbc(in_vf0,auVar38);
    auVar24 = _vaddbc(in_vf0,auVar26);
    auVar36 = _lqc2(auVar16);
    auVar28 = _lqc2(auVar4);
    auVar20 = _lqc2(auVar20);
    _lqc2(_DAT_0043ed20);
    _lqc2(_DAT_0043ed30);
    auVar26 = _vaddbc(in_vf0,auVar36);
    _lqc2(_DAT_0043ed40);
    auVar38 = _vaddbc(in_vf0,auVar36);
    _vmove(auVar30);
    auVar36 = _vaddbc(in_vf0,auVar28);
    auVar25 = _lqc2(auVar25);
    auVar28 = _vaddbc(in_vf0,auVar20);
    _vmove(auVar23);
    auVar20 = _lqc2(auVar6);
    auVar25 = _vaddbc(in_vf0,auVar25);
    auVar23 = _lqc2(auVar2);
    auVar32 = _lqc2(auVar2);
    _sqc2(auVar26);
    _sqc2(auVar30);
    _sqc2(auVar38);
    _sqc2(auVar36);
    _sqc2(auVar24);
    _sqc2(auVar25);
    _vmove(auVar26);
    auVar30 = _vaddbc(in_vf0,auVar20);
    auVar25 = _lqc2(auVar21);
    _sqc2(auVar28);
    auVar26 = _vaddbc(in_vf0,auVar25);
    _vmove(auVar38);
    auVar38 = _vaddbc(in_vf0,auVar23);
    _vmove(auVar36);
    auVar25 = _lqc2(auVar19);
    auVar19 = _vaddbc(in_vf0,auVar32);
    _sqc2(auVar30);
    auVar36 = _vaddbc(in_vf0,auVar25);
    auVar25 = _lqc2(auVar29);
    _sqc2(auVar38);
    auVar30 = _vaddbc(in_vf0,auVar25);
    auVar25 = _lqc2(auVar5);
    _sqc2(auVar19);
    auVar29 = _vaddbc(in_vf0,auVar25);
    auVar38 = _vaddbc(in_vf0,auVar25);
    auVar25 = _lqc2(auVar3);
    _DAT_0043ecf0 = _sqc2(auVar26);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _DAT_0043ed00 = _sqc2(auVar36);
    _DAT_0043ed10 = _sqc2(auVar30);
    _DAT_0043ed20 = _sqc2(auVar29);
    _DAT_0043ed30 = _sqc2(auVar25);
    _DAT_0043ed40 = _sqc2(auVar38);
    memset(0x43ed50,0,0x60);
    auVar25 = _lqc2(auVar16);
    _lqc2(_DAT_0043ed70);
    _lqc2(_DAT_0043ed60);
    auVar38 = _vaddbc(in_vf0,auVar25);
    auVar36 = _vaddbc(in_vf0,auVar25);
    auVar30 = _lqc2(auVar4);
    auVar25 = _lqc2(auVar16);
    _lqc2(_DAT_0043ed90);
    _lqc2(_DAT_0043eda0);
    auVar29 = _vaddbc(in_vf0,auVar25);
    _lqc2(_DAT_0043ed50);
    auVar25 = _vaddbc(in_vf0,auVar25);
    auVar19 = _vaddbc(in_vf0,auVar30);
    auVar26 = _lqc2(auVar2);
    _vmove(auVar19);
    auVar19 = _vaddbc(in_vf0,auVar26);
    auVar26 = _lqc2(auVar6);
    _lqc2(_DAT_0043ed80);
    _vmove(auVar36);
    auVar36 = _vaddbc(in_vf0,auVar30);
    auVar30 = _lqc2(auVar2);
    auVar26 = _vaddbc(in_vf0,auVar26);
    auVar20 = _lqc2(auVar2);
    auVar23 = _lqc2(auVar6);
    auVar24 = _lqc2(auVar2);
    _sqc2(auVar38);
    _sqc2(auVar36);
    _sqc2(auVar29);
    _sqc2(auVar25);
    _sqc2(auVar19);
    _sqc2(auVar26);
    _vmove(auVar38);
    auVar38 = _vaddbc(in_vf0,auVar30);
    _vmove(auVar36);
    auVar30 = _lqc2(auVar5);
    auVar19 = _vaddbc(in_vf0,auVar20);
    _sqc2(auVar38);
    auVar36 = _vaddbc(in_vf0,auVar30);
    _sqc2(auVar19);
    auVar38 = _vaddbc(in_vf0,auVar30);
    _vmove(auVar29);
    auVar19 = _vaddbc(in_vf0,auVar30);
    auVar29 = _vaddbc(in_vf0,auVar23);
    _vmove(auVar25);
    auVar25 = _lqc2(auVar3);
    auVar26 = _vaddbc(in_vf0,auVar24);
    _sqc2(auVar29);
    auVar29 = _vaddbc(in_vf0,auVar25);
    _sqc2(auVar26);
    auVar26 = _vaddbc(in_vf0,auVar30);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _DAT_0043ed50 = _sqc2(auVar36);
    _DAT_0043ed60 = _sqc2(auVar38);
    _DAT_0043ed70 = _sqc2(auVar29);
    _DAT_0043ed80 = _sqc2(auVar19);
    _DAT_0043ed90 = _sqc2(auVar26);
    _DAT_0043eda0 = _sqc2(auVar25);
    memset(0x43edb0,0,0x60);
    auVar25 = _lqc2(auVar4);
    _lqc2(_DAT_0043edb0);
    auVar26 = _vaddbc(in_vf0,auVar25);
    auVar38 = _lqc2(auVar16);
    auVar25 = _lqc2(auVar4);
    _lqc2(_DAT_0043edd0);
    _lqc2(_DAT_0043ede0);
    auVar19 = _vaddbc(in_vf0,auVar38);
    _lqc2(_DAT_0043edf0);
    auVar36 = _vaddbc(in_vf0,auVar25);
    _lqc2(_DAT_0043ee00);
    auVar29 = _vaddbc(in_vf0,auVar38);
    _lqc2(_DAT_0043edc0);
    auVar25 = _vaddbc(in_vf0,auVar38);
    auVar38 = _vaddbc(in_vf0,auVar38);
    auVar30 = _lqc2(auVar2);
    auVar20 = _lqc2(auVar6);
    _vmove(auVar26);
    _vmove(auVar38);
    auVar38 = _vaddbc(in_vf0,auVar30);
    auVar30 = _lqc2(auVar2);
    auVar26 = _vaddbc(in_vf0,auVar20);
    auVar20 = _lqc2(auVar6);
    auVar23 = _lqc2(auVar2);
    _sqc2(auVar19);
    _sqc2(auVar36);
    _sqc2(auVar29);
    _sqc2(auVar25);
    _sqc2(auVar38);
    _sqc2(auVar26);
    _vmove(auVar19);
    _vmove(auVar36);
    auVar36 = _vaddbc(in_vf0,auVar30);
    auVar24 = _lqc2(auVar5);
    auVar38 = _vaddbc(in_vf0,auVar30);
    _sqc2(auVar36);
    auVar36 = _vaddbc(in_vf0,auVar24);
    _sqc2(auVar38);
    auVar38 = _vaddbc(in_vf0,auVar24);
    _vmove(auVar29);
    auVar19 = _vaddbc(in_vf0,auVar24);
    auVar29 = _vaddbc(in_vf0,auVar20);
    _vmove(auVar25);
    auVar25 = _lqc2(auVar3);
    auVar26 = _vaddbc(in_vf0,auVar23);
    _sqc2(auVar29);
    auVar29 = _vaddbc(in_vf0,auVar25);
    _sqc2(auVar26);
    auVar26 = _vaddbc(in_vf0,auVar24);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _DAT_0043edb0 = _sqc2(auVar36);
    _DAT_0043edc0 = _sqc2(auVar38);
    _DAT_0043edd0 = _sqc2(auVar29);
    _DAT_0043ede0 = _sqc2(auVar19);
    _DAT_0043edf0 = _sqc2(auVar26);
    _DAT_0043ee00 = _sqc2(auVar25);
    memset(0x43ee10,0,0x60);
    auVar25 = _qmtc2(0xbf774bc7);
    auVar36 = _qmtc2(0x3e841893);
    auVar25 = _sqc2(auVar25);
    auVar29 = _qmtc2(0xbf800000);
    auVar19 = _lqc2(auVar16);
    auVar29 = _sqc2(auVar29);
    auVar38 = _lqc2(auVar25);
    _lqc2(_DAT_0043ee10);
    _lqc2(_DAT_0043ee20);
    auVar38 = _vaddbc(in_vf0,auVar38);
    auVar30 = _vaddbc(in_vf0,auVar36);
    _lqc2(_DAT_0043ee30);
    auVar36 = _qmtc2(0x3f34fdf4);
    _lqc2(_DAT_0043ee40);
    auVar20 = _vaddbc(in_vf0,auVar19);
    _lqc2(_DAT_0043ee50);
    _lqc2(_DAT_0043ee60);
    auVar24 = _vaddbc(in_vf0,auVar19);
    auVar36 = _sqc2(auVar36);
    auVar19 = _vaddbc(in_vf0,auVar19);
    auVar28 = _lqc2(auVar2);
    auVar26 = _lqc2(auVar29);
    auVar32 = _lqc2(auVar6);
    auVar23 = _vaddbc(in_vf0,auVar26);
    auVar33 = _lqc2(auVar2);
    auVar34 = _lqc2(auVar27);
    auVar37 = _lqc2(auVar36);
    _sqc2(auVar38);
    _vmove(auVar38);
    _sqc2(auVar30);
    auVar26 = _qmtc2(0x3f34fdf4);
    _vmove(auVar30);
    auVar30 = _vaddbc(in_vf0,auVar28);
    auVar38 = _sqc2(auVar26);
    auVar28 = _vaddbc(in_vf0,auVar28);
    _sqc2(auVar23);
    _sqc2(auVar24);
    _sqc2(auVar19);
    _sqc2(auVar28);
    _sqc2(auVar30);
    _sqc2(auVar20);
    _vmove(auVar20);
    auVar30 = _lqc2(auVar21);
    auVar20 = _vaddbc(in_vf0,auVar32);
    _sqc2(auVar20);
    auVar30 = _vaddbc(in_vf0,auVar30);
    _vmove(auVar24);
    auVar21 = _vaddbc(in_vf0,auVar34);
    _vmove(auVar23);
    auVar23 = _lqc2(auVar31);
    auVar20 = _vaddbc(in_vf0,auVar33);
    _sqc2(auVar20);
    auVar20 = _vaddbc(in_vf0,auVar23);
    _vmove(auVar19);
    auVar23 = _vaddbc(in_vf0,auVar37);
    auVar24 = _lqc2(auVar5);
    _sqc2(auVar21);
    auVar19 = _vaddbc(in_vf0,auVar24);
    _sqc2(auVar23);
    auVar21 = _vaddbc(in_vf0,auVar24);
    _DAT_0043ee10 = _sqc2(auVar30);
    auVar30 = _vaddbc(in_vf0,auVar26);
    auVar26 = _vaddbc(in_vf0,auVar26);
    _DAT_0043ee20 = _sqc2(auVar20);
    _DAT_0043ee30 = _sqc2(auVar19);
    _DAT_0043ee40 = _sqc2(auVar21);
    _DAT_0043ee50 = _sqc2(auVar30);
    _DAT_0043ee60 = _sqc2(auVar26);
    memset(0x43ee70,0,0x60);
    auVar23 = _lqc2(auVar16);
    auVar19 = _qmtc2(0xbe841893);
    auVar25 = _lqc2(auVar25);
    _lqc2(_DAT_0043ee70);
    _lqc2(_DAT_0043ee80);
    auVar26 = _vaddbc(in_vf0,auVar25);
    _lqc2(_DAT_0043eeb0);
    auVar19 = _vaddbc(in_vf0,auVar19);
    auVar21 = _vaddbc(in_vf0,auVar23);
    auVar25 = _lqc2(auVar29);
    auVar29 = _lqc2(auVar27);
    _lqc2(_DAT_0043ee90);
    _lqc2(_DAT_0043eea0);
    auVar30 = _vaddbc(in_vf0,auVar23);
    _lqc2(_DAT_0043eec0);
    auVar20 = _vaddbc(in_vf0,auVar25);
    _vmove(auVar21);
    auVar25 = _vaddbc(in_vf0,auVar23);
    auVar28 = _vaddbc(in_vf0,auVar29);
    auVar29 = _lqc2(auVar2);
    auVar24 = _lqc2(auVar6);
    auVar32 = _lqc2(auVar2);
    auVar33 = _lqc2(auVar36);
    _vmove(auVar19);
    _vmove(auVar26);
    auVar23 = _vaddbc(in_vf0,auVar29);
    _vmove(auVar30);
    auVar27 = _vaddbc(in_vf0,auVar29);
    _sqc2(auVar26);
    auVar26 = _vaddbc(in_vf0,auVar24);
    _sqc2(auVar19);
    auVar29 = _qmtc2(0xbe841893);
    _sqc2(auVar30);
    _sqc2(auVar20);
    _sqc2(auVar21);
    _sqc2(auVar27);
    _sqc2(auVar23);
    auVar29 = _vaddbc(in_vf0,auVar29);
    _sqc2(auVar26);
    _sqc2(auVar25);
    _vmove(auVar20);
    _vmove(auVar25);
    auVar19 = _vaddbc(in_vf0,auVar32);
    auVar25 = _lqc2(auVar31);
    auVar26 = _vaddbc(in_vf0,auVar33);
    _sqc2(auVar19);
    auVar19 = _vaddbc(in_vf0,auVar25);
    auVar25 = _lqc2(auVar5);
    _sqc2(auVar26);
    auVar26 = _vaddbc(in_vf0,auVar25);
    _sqc2(auVar28);
    auVar30 = _vaddbc(in_vf0,auVar25);
    auVar25 = _lqc2(auVar38);
    auVar20 = _vaddbc(in_vf0,auVar25);
    _DAT_0043ee70 = _sqc2(auVar29);
    _DAT_0043ee80 = _sqc2(auVar19);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _DAT_0043ee90 = _sqc2(auVar26);
    _DAT_0043eea0 = _sqc2(auVar30);
    _DAT_0043eeb0 = _sqc2(auVar20);
    _DAT_0043eec0 = _sqc2(auVar25);
    memset(0x43eed0,0,0x60);
    auVar21 = _lqc2(auVar16);
    auVar23 = _qmtc2(0xbf5db22d);
    auVar19 = _lqc2(auVar4);
    auVar25 = _lqc2(auVar17);
    auVar20 = _lqc2(auVar22);
    _lqc2(_DAT_0043eef0);
    _lqc2(_DAT_0043ef00);
    auVar26 = _vaddbc(in_vf0,auVar21);
    _lqc2(_DAT_0043ef10);
    auVar30 = _vaddbc(in_vf0,auVar25);
    _lqc2(_DAT_0043ef20);
    auVar29 = _vaddbc(in_vf0,auVar21);
    _lqc2(_DAT_0043eed0);
    auVar25 = _vaddbc(in_vf0,auVar20);
    _lqc2(_DAT_0043eee0);
    auVar20 = _vaddbc(in_vf0,auVar19);
    auVar19 = _vaddbc(in_vf0,auVar21);
    auVar21 = _lqc2(auVar2);
    auVar27 = _lqc2(auVar6);
    _vmove(auVar20);
    _vmove(auVar19);
    auVar19 = _vaddbc(in_vf0,auVar21);
    _vmove(auVar30);
    auVar20 = _vaddbc(in_vf0,auVar27);
    _vmove(auVar26);
    auVar22 = _vaddbc(in_vf0,auVar21);
    auVar31 = _lqc2(auVar2);
    auVar21 = _vaddbc(in_vf0,auVar21);
    _sqc2(auVar30);
    _sqc2(auVar26);
    _sqc2(auVar29);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _vmove(auVar29);
    auVar20 = _vaddbc(in_vf0,auVar27);
    _sqc2(auVar25);
    _vmove(auVar25);
    auVar25 = _lqc2(auVar5);
    auVar27 = _vaddbc(in_vf0,auVar31);
    _sqc2(auVar21);
    auVar19 = _vaddbc(in_vf0,auVar25);
    _sqc2(auVar22);
    auVar26 = _vaddbc(in_vf0,auVar25);
    auVar30 = _vaddbc(in_vf0,auVar23);
    auVar29 = _lqc2(auVar3);
    _sqc2(auVar20);
    auVar29 = _vaddbc(in_vf0,auVar29);
    _sqc2(auVar27);
    auVar20 = _vaddbc(in_vf0,auVar25);
    auVar25 = _lqc2(auVar18);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _DAT_0043eed0 = _sqc2(auVar19);
    _DAT_0043eee0 = _sqc2(auVar26);
    _DAT_0043eef0 = _sqc2(auVar29);
    _DAT_0043ef00 = _sqc2(auVar30);
    _DAT_0043ef10 = _sqc2(auVar20);
    _DAT_0043ef20 = _sqc2(auVar25);
    memset(0x43ef30,0,0x60);
    auVar30 = _lqc2(auVar16);
    auVar20 = _qmtc2(0xbf5db22d);
    auVar25 = _lqc2(auVar4);
    auVar17 = _lqc2(auVar17);
    _lqc2(_DAT_0043ef30);
    _lqc2(_DAT_0043ef40);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _lqc2(_DAT_0043ef50);
    auVar29 = _vaddbc(in_vf0,auVar30);
    _lqc2(_DAT_0043ef60);
    auVar19 = _vaddbc(in_vf0,auVar30);
    _lqc2(_DAT_0043ef70);
    auVar26 = _vaddbc(in_vf0,auVar17);
    _lqc2(_DAT_0043ef80);
    auVar30 = _vaddbc(in_vf0,auVar30);
    auVar17 = _vaddbc(in_vf0,auVar20);
    auVar22 = _lqc2(auVar2);
    auVar23 = _lqc2(auVar6);
    auVar31 = _lqc2(auVar2);
    _vmove(auVar29);
    _vmove(auVar26);
    auVar21 = _vaddbc(in_vf0,auVar23);
    _vmove(auVar25);
    auVar27 = _vaddbc(in_vf0,auVar22);
    _vmove(auVar19);
    auVar20 = _vaddbc(in_vf0,auVar22);
    _sqc2(auVar25);
    auVar22 = _vaddbc(in_vf0,auVar22);
    _sqc2(auVar29);
    auVar25 = _qmtc2(0x3f5db22d);
    _sqc2(auVar26);
    _sqc2(auVar30);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar21);
    _vmove(auVar30);
    auVar30 = _vaddbc(in_vf0,auVar23);
    _sqc2(auVar17);
    _vmove(auVar17);
    auVar17 = _lqc2(auVar5);
    auVar20 = _vaddbc(in_vf0,auVar31);
    _sqc2(auVar22);
    auVar29 = _vaddbc(in_vf0,auVar17);
    _sqc2(auVar27);
    auVar19 = _vaddbc(in_vf0,auVar17);
    auVar26 = _vaddbc(in_vf0,auVar25);
    auVar25 = _lqc2(auVar3);
    _sqc2(auVar30);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _sqc2(auVar20);
    auVar17 = _vaddbc(in_vf0,auVar17);
    auVar18 = _lqc2(auVar18);
    auVar18 = _vaddbc(in_vf0,auVar18);
    _DAT_0043ef30 = _sqc2(auVar29);
    _DAT_0043ef40 = _sqc2(auVar19);
    _DAT_0043ef50 = _sqc2(auVar25);
    _DAT_0043ef60 = _sqc2(auVar26);
    _DAT_0043ef70 = _sqc2(auVar17);
    _DAT_0043ef80 = _sqc2(auVar18);
    memset(0x43ef90,0,0x60);
    auVar17 = _lqc2(auVar16);
    _lqc2(_DAT_0043efb0);
    _lqc2(_DAT_0043efa0);
    auVar18 = _vaddbc(in_vf0,auVar17);
    auVar29 = _vaddbc(in_vf0,auVar17);
    auVar30 = _lqc2(auVar4);
    auVar25 = _lqc2(auVar16);
    _lqc2(_DAT_0043efe0);
    _lqc2(_DAT_0043ef90);
    auVar17 = _vaddbc(in_vf0,auVar25);
    _lqc2(_DAT_0043efd0);
    auVar19 = _vaddbc(in_vf0,auVar30);
    auVar25 = _vaddbc(in_vf0,auVar25);
    auVar26 = _lqc2(auVar2);
    _vmove(auVar19);
    auVar19 = _vaddbc(in_vf0,auVar26);
    auVar26 = _lqc2(auVar6);
    _lqc2(_DAT_0043efc0);
    _vmove(auVar29);
    auVar29 = _vaddbc(in_vf0,auVar30);
    auVar30 = _lqc2(auVar2);
    auVar26 = _vaddbc(in_vf0,auVar26);
    auVar20 = _lqc2(auVar2);
    auVar21 = _lqc2(auVar36);
    auVar22 = _lqc2(auVar36);
    _sqc2(auVar18);
    _sqc2(auVar29);
    _sqc2(auVar17);
    _sqc2(auVar19);
    _sqc2(auVar26);
    _sqc2(auVar25);
    _vmove(auVar18);
    auVar18 = _vaddbc(in_vf0,auVar30);
    _vmove(auVar29);
    auVar26 = _lqc2(auVar5);
    auVar19 = _vaddbc(in_vf0,auVar20);
    _sqc2(auVar18);
    auVar29 = _vaddbc(in_vf0,auVar26);
    _sqc2(auVar19);
    auVar18 = _vaddbc(in_vf0,auVar26);
    _vmove(auVar25);
    auVar26 = _vaddbc(in_vf0,auVar26);
    auVar25 = _vaddbc(in_vf0,auVar21);
    _vmove(auVar17);
    auVar17 = _lqc2(auVar3);
    auVar19 = _vaddbc(in_vf0,auVar22);
    _sqc2(auVar19);
    auVar19 = _vaddbc(in_vf0,auVar17);
    _sqc2(auVar25);
    auVar17 = _lqc2(auVar35);
    auVar25 = _lqc2(auVar38);
    auVar17 = _vaddbc(in_vf0,auVar17);
    _DAT_0043ef90 = _sqc2(auVar29);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _DAT_0043efa0 = _sqc2(auVar18);
    _DAT_0043efb0 = _sqc2(auVar19);
    _DAT_0043efc0 = _sqc2(auVar26);
    _DAT_0043efd0 = _sqc2(auVar17);
    _DAT_0043efe0 = _sqc2(auVar25);
    memset(0x43eff0,0,0x60);
    auVar26 = _lqc2(auVar16);
    auVar17 = _lqc2(auVar4);
    _lqc2(_DAT_0043f020);
    _lqc2(_DAT_0043eff0);
    auVar29 = _vaddbc(in_vf0,auVar17);
    _lqc2(_DAT_0043f000);
    auVar19 = _vaddbc(in_vf0,auVar17);
    auVar17 = _vaddbc(in_vf0,auVar26);
    auVar20 = _lqc2(auVar6);
    _lqc2(_DAT_0043f010);
    _lqc2(_DAT_0043f030);
    auVar18 = _vaddbc(in_vf0,auVar26);
    _lqc2(_DAT_0043f040);
    auVar25 = _vaddbc(in_vf0,auVar26);
    _vmove(auVar17);
    auVar17 = _vaddbc(in_vf0,auVar26);
    auVar30 = _lqc2(auVar2);
    auVar26 = _vaddbc(in_vf0,auVar20);
    _vmove(auVar19);
    auVar19 = _lqc2(auVar36);
    auVar20 = _vaddbc(in_vf0,auVar30);
    auVar22 = _lqc2(auVar2);
    auVar21 = _lqc2(auVar36);
    _vmove(auVar18);
    _sqc2(auVar18);
    auVar18 = _vaddbc(in_vf0,auVar30);
    _sqc2(auVar29);
    _sqc2(auVar25);
    _sqc2(auVar17);
    _sqc2(auVar20);
    _sqc2(auVar26);
    _vmove(auVar29);
    auVar29 = _vaddbc(in_vf0,auVar22);
    _vmove(auVar17);
    auVar17 = _lqc2(auVar5);
    auVar26 = _vaddbc(in_vf0,auVar19);
    _sqc2(auVar18);
    auVar19 = _vaddbc(in_vf0,auVar17);
    _sqc2(auVar29);
    auVar29 = _vaddbc(in_vf0,auVar17);
    _vmove(auVar25);
    auVar36 = _vaddbc(in_vf0,auVar17);
    auVar25 = _vaddbc(in_vf0,auVar21);
    auVar17 = _lqc2(auVar3);
    _sqc2(auVar25);
    auVar18 = _vaddbc(in_vf0,auVar17);
    _sqc2(auVar26);
    auVar17 = _lqc2(auVar35);
    auVar25 = _lqc2(auVar38);
    auVar17 = _vaddbc(in_vf0,auVar17);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _DAT_0043eff0 = _sqc2(auVar19);
    _DAT_0043f000 = _sqc2(auVar29);
    _DAT_0043f010 = _sqc2(auVar18);
    _DAT_0043f020 = _sqc2(auVar36);
    _DAT_0043f030 = _sqc2(auVar17);
    _DAT_0043f040 = _sqc2(auVar25);
    memset(0x43f050,0,0x60);
    auVar38 = _lqc2(auVar16);
    auVar25 = _lqc2(auVar4);
    _lqc2(_DAT_0043f070);
    _lqc2(_DAT_0043f080);
    auVar29 = _vaddbc(in_vf0,auVar38);
    _lqc2(_DAT_0043f090);
    auVar18 = _vaddbc(in_vf0,auVar25);
    _lqc2(_DAT_0043f0a0);
    auVar17 = _vaddbc(in_vf0,auVar38);
    _lqc2(_DAT_0043f050);
    auVar16 = _vaddbc(in_vf0,auVar38);
    _lqc2(_DAT_0043f060);
    auVar36 = _vaddbc(in_vf0,auVar25);
    auVar25 = _vaddbc(in_vf0,auVar38);
    auVar19 = _lqc2(auVar2);
    auVar38 = _lqc2(auVar6);
    _vmove(auVar17);
    _vmove(auVar36);
    auVar26 = _vaddbc(in_vf0,auVar38);
    _vmove(auVar25);
    auVar25 = _vaddbc(in_vf0,auVar19);
    auVar30 = _lqc2(auVar2);
    auVar36 = _vaddbc(in_vf0,auVar38);
    _sqc2(auVar29);
    _sqc2(auVar18);
    _sqc2(auVar17);
    _vmove(auVar29);
    _sqc2(auVar16);
    auVar17 = _vaddbc(in_vf0,auVar19);
    _sqc2(auVar25);
    _sqc2(auVar36);
    _vmove(auVar16);
    auVar36 = _vaddbc(in_vf0,auVar19);
    _vmove(auVar18);
    auVar38 = _lqc2(auVar5);
    auVar16 = _vaddbc(in_vf0,auVar30);
    _sqc2(auVar17);
    auVar17 = _vaddbc(in_vf0,auVar38);
    _sqc2(auVar16);
    auVar25 = _vaddbc(in_vf0,auVar38);
    auVar18 = _vaddbc(in_vf0,auVar38);
    auVar16 = _lqc2(auVar3);
    _sqc2(auVar26);
    auVar29 = _vaddbc(in_vf0,auVar16);
    _sqc2(auVar36);
    auVar36 = _vaddbc(in_vf0,auVar38);
    auVar16 = _vaddbc(in_vf0,auVar16);
    _DAT_0043f050 = _sqc2(auVar17);
    _DAT_0043f0a0 = _sqc2(auVar16);
    _DAT_0043f060 = _sqc2(auVar25);
    _DAT_0043f070 = _sqc2(auVar29);
    _DAT_0043f080 = _sqc2(auVar18);
    _DAT_0043f090 = _sqc2(auVar36);
    memset(0x43f0b0,0,0x20);
    DAT_0043f0b0 = 1;
    DAT_0043f0b4 = 0x40490625;
    DAT_0043f0c8 = 0x3f000000;
    DAT_0043f0cc = 0x3f800000;
    DAT_0043f0b8 = 1;
    DAT_0043f0bc = 0x40490625;
    DAT_0043f0c0 = 0x3f000000;
    DAT_0043f0c4 = 0x3f000000;
    memset(0x43f0d0,0,0x20);
    DAT_0043f0d0 = 2;
    DAT_0043f0d4 = 0x40490625;
    DAT_0043f0dc = 0x40490625;
    DAT_0043f0d8 = 1;
    DAT_0043f0ec = 0x3f800000;
    DAT_0043f0e0 = uVar10;
    DAT_0043f0e4 = uVar10;
    DAT_0043f0e8 = uVar10;
    memset(0x43f0f0,0,0x20);
    DAT_0043f0f0 = 1;
    DAT_0043f0f8 = 1;
    DAT_0043f0f4 = 0x40490625;
    DAT_0043f0fc = 0x40490625;
    DAT_0043f10c = 0x3f800000;
    DAT_0043f100 = uVar10;
    DAT_0043f104 = uVar10;
    DAT_0043f108 = uVar10;
    memset(0x43f110,0,0x20);
    DAT_0043f110 = 2;
    DAT_0043f114 = 0x40490625;
    DAT_0043f11c = 0x40490625;
    DAT_0043f118 = 1;
    DAT_0043f12c = 0x3f800000;
    DAT_0043f120 = uVar10;
    DAT_0043f124 = uVar10;
    DAT_0043f128 = uVar10;
    memset(0x43f130,0,0x20);
    DAT_0043f130 = 1;
    DAT_0043f138 = 1;
    DAT_0043f134 = 0x40490625;
    DAT_0043f13c = 0x40490625;
    DAT_0043f14c = 0x3f800000;
    DAT_0043f140 = uVar10;
    DAT_0043f144 = uVar10;
    DAT_0043f148 = uVar10;
    memset(0x43f150,0,0x20);
    DAT_0043f150 = 2;
    DAT_0043f154 = 0x40490625;
    DAT_0043f15c = 0x40490625;
    DAT_0043f158 = 1;
    DAT_0043f16c = 0x3f800000;
    DAT_0043f160 = uVar10;
    DAT_0043f164 = uVar10;
    DAT_0043f168 = uVar10;
    memset(0x43f170,0,0x20);
    DAT_0043f170 = 1;
    DAT_0043f178 = 1;
    DAT_0043f174 = 0x40490625;
    DAT_0043f17c = 0x40490625;
    DAT_0043f18c = 0x3f800000;
    DAT_0043f180 = uVar10;
    DAT_0043f184 = uVar10;
    DAT_0043f188 = uVar10;
    memset(0x43f190,0,0x20);
    DAT_0043f190 = 1;
    DAT_0043f19c = 0x40490625;
    DAT_0043f194 = 0x40490625;
    DAT_0043f198 = 1;
    DAT_0043f1ac = 0x3f800000;
    DAT_0043f1a0 = 0x3fe00000;
    DAT_0043f1a4 = uVar10;
    DAT_0043f1a8 = uVar10;
    FUN_00388c30(0x43f1b0);
    FUN_00388c30(0x43f1d0);
    FUN_00388c30(0x43f1f0);
    FUN_00388c30(0x43f210);
    memset(0x43f230,0,0x20);
    DAT_0043f234 = 0x3f23d70a;
    DAT_0043f23c = 0x3f49374c;
    DAT_0043f230 = 1;
    DAT_0043f238 = 1;
    DAT_0043f24c = 0x3f800000;
    DAT_0043f240 = uVar10;
    DAT_0043f244 = uVar10;
    DAT_0043f248 = uVar10;
    memset(0x43f250,0,0x20);
    DAT_0043f250 = 2;
    DAT_0043f25c = 0x3dcccccd;
    DAT_0043f254 = 0x3f03126f;
    DAT_0043f26c = 0x3f800000;
    DAT_0043f260 = uVar10;
    DAT_0043f264 = uVar10;
    DAT_0043f268 = uVar10;
    memset(0x43f270,0,0x20);
    DAT_0043f270 = 1;
    DAT_0043f27c = 0x3f49374c;
    DAT_0043f274 = 0x3f03126f;
    DAT_0043f278 = 1;
    DAT_0043f28c = 0x3f800000;
    DAT_0043f280 = uVar10;
    DAT_0043f284 = uVar10;
    DAT_0043f288 = uVar10;
    memset(0x43f290,0,0x20);
    DAT_0043f290 = 2;
    DAT_0043f29c = 0x3dcccccd;
    DAT_0043f294 = 0x3f49374c;
    DAT_0043f298 = 1;
    DAT_0043f2ac = 0x3f800000;
    DAT_0043f2a0 = uVar10;
    DAT_0043f2a4 = uVar10;
    DAT_0043f2a8 = uVar10;
    memset(0x43f2b0,0,0x20);
    DAT_0043f2b0 = 1;
    DAT_0043f2bc = 0x3f48f5c3;
    DAT_0043f2b8 = 1;
    DAT_0043f2b4 = 0x3f03126f;
    DAT_0043f2cc = 0x3f800000;
    DAT_0043f2c0 = uVar10;
    DAT_0043f2c4 = uVar10;
    DAT_0043f2c8 = uVar10;
    memset(0x43f2d0,0,0x20);
    DAT_0043f2d0 = 2;
    DAT_0043f2dc = 0x3dcccccd;
    DAT_0043f2d4 = 0x3f860419;
    DAT_0043f2ec = 0x3f800000;
    DAT_0043f2e0 = uVar10;
    DAT_0043f2e4 = uVar10;
    DAT_0043f2e8 = uVar10;
    memset(0x43f2f0,0,0x20);
    DAT_0043f2f0 = 1;
    DAT_0043f2fc = 0x3f23d70a;
    DAT_0043f2f4 = 0x3e83126f;
    DAT_0043f2f8 = 1;
    DAT_0043f30c = 0x3f800000;
    DAT_0043f300 = uVar10;
    DAT_0043f304 = uVar10;
    DAT_0043f308 = uVar10;
    memset(0x43f310,0,0x20);
    DAT_0043f310 = 1;
    DAT_0043f31c = 0x3f860419;
    DAT_0043f314 = 0x3f860419;
    DAT_0043f318 = 1;
    DAT_0043f32c = 0x3f800000;
    DAT_0043f320 = 0x3fe00000;
    DAT_0043f324 = uVar10;
    DAT_0043f328 = uVar10;
    FUN_00388c30(0x43f330);
    FUN_00388c30(0x43f350);
    FUN_00388c30(0x43f370);
    FUN_00388c30(0x43f390);
    DAT_0043f3b0 = 0x40000000;
    DAT_0043f3b4 = 0xc0000000;
    DAT_0043f3b8 = 0x3f800000;
    DAT_0043f3bc = 0x3f800000;
    DAT_0043f3c8 = 0xc0000000;
    DAT_0043f3cc = 0xbf800000;
    DAT_0043f3c0 = 0xc0400000;
    DAT_0043f3c4 = 0x40400000;
    DAT_0043f3d8 = 0x3f800000;
    DAT_0043f3e0 = 0x3f800000;
    DAT_0043f3d0 = uVar10;
    DAT_0043f3d4 = uVar10;
    DAT_0043f3dc = uVar10;
    DAT_0043f3e4 = uVar10;
    DAT_0043f3e8 = uVar10;
    DAT_0043f3ec = uVar10;
  }
  return;
}


// ==== FUN_00265c18 @ 00265c18 ====

void FUN_00265c18(void)

{
  FUN_00264130(1,0xffff);
  return;
}


// ==== FUN_00265c38 @ 00265c38 ====

void FUN_00265c38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  undefined8 *puVar30;
  uint uVar31;
  
  puVar30 = (undefined8 *)&DAT_00440ef0;
  *DAT_00442ed4 = *DAT_00442ed4 | 0x8000;
  uVar31 = (int)DAT_00442ed0 - 0x440ee8U >> 4;
  FUN_002b3d88(0xffffffff80000000,uVar31);
  iVar29 = 0;
  if (0 < (int)(uVar31 - 8)) {
    do {
      uVar1 = *puVar30;
      uVar5 = *(undefined4 *)(puVar30 + 1);
      uVar6 = *(undefined4 *)((int)puVar30 + 0xc);
      uVar2 = puVar30[2];
      uVar7 = *(undefined4 *)(puVar30 + 3);
      uVar8 = *(undefined4 *)((int)puVar30 + 0x1c);
      uVar3 = puVar30[4];
      uVar9 = *(undefined4 *)(puVar30 + 5);
      uVar10 = *(undefined4 *)((int)puVar30 + 0x2c);
      uVar4 = puVar30[6];
      uVar11 = *(undefined4 *)(puVar30 + 7);
      uVar12 = *(undefined4 *)((int)puVar30 + 0x3c);
      uVar13 = *(undefined4 *)(puVar30 + 8);
      uVar14 = *(undefined4 *)((int)puVar30 + 0x44);
      uVar15 = *(undefined4 *)(puVar30 + 9);
      uVar16 = *(undefined4 *)((int)puVar30 + 0x4c);
      uVar17 = *(undefined4 *)(puVar30 + 10);
      uVar18 = *(undefined4 *)((int)puVar30 + 0x54);
      uVar19 = *(undefined4 *)(puVar30 + 0xb);
      uVar20 = *(undefined4 *)((int)puVar30 + 0x5c);
      uVar21 = *(undefined4 *)(puVar30 + 0xc);
      uVar22 = *(undefined4 *)((int)puVar30 + 100);
      uVar23 = *(undefined4 *)(puVar30 + 0xd);
      uVar24 = *(undefined4 *)((int)puVar30 + 0x6c);
      uVar25 = *(undefined4 *)(puVar30 + 0xe);
      uVar26 = *(undefined4 *)((int)puVar30 + 0x74);
      uVar27 = *(undefined4 *)(puVar30 + 0xf);
      uVar28 = *(undefined4 *)((int)puVar30 + 0x7c);
      puVar30 = puVar30 + 0x10;
      *DAT_0040e5f0 = (int)uVar1;
      DAT_0040e5f0[1] = (int)((ulong)uVar1 >> 0x20);
      DAT_0040e5f0[2] = uVar5;
      DAT_0040e5f0[3] = uVar6;
      DAT_0040e5f0[4] = (int)uVar2;
      DAT_0040e5f0[5] = (int)((ulong)uVar2 >> 0x20);
      DAT_0040e5f0[6] = uVar7;
      DAT_0040e5f0[7] = uVar8;
      DAT_0040e5f0[8] = (int)uVar3;
      DAT_0040e5f0[9] = (int)((ulong)uVar3 >> 0x20);
      DAT_0040e5f0[10] = uVar9;
      DAT_0040e5f0[0xb] = uVar10;
      DAT_0040e5f0[0xc] = (int)uVar4;
      DAT_0040e5f0[0xd] = (int)((ulong)uVar4 >> 0x20);
      DAT_0040e5f0[0xe] = uVar11;
      DAT_0040e5f0[0xf] = uVar12;
      DAT_0040e5f0[0x10] = uVar13;
      DAT_0040e5f0[0x11] = uVar14;
      DAT_0040e5f0[0x12] = uVar15;
      DAT_0040e5f0[0x13] = uVar16;
      DAT_0040e5f0[0x14] = uVar17;
      DAT_0040e5f0[0x15] = uVar18;
      DAT_0040e5f0[0x16] = uVar19;
      DAT_0040e5f0[0x17] = uVar20;
      DAT_0040e5f0[0x18] = uVar21;
      DAT_0040e5f0[0x19] = uVar22;
      DAT_0040e5f0[0x1a] = uVar23;
      DAT_0040e5f0[0x1b] = uVar24;
      DAT_0040e5f0[0x1c] = uVar25;
      DAT_0040e5f0[0x1d] = uVar26;
      DAT_0040e5f0[0x1e] = uVar27;
      DAT_0040e5f0[0x1f] = uVar28;
      iVar29 = iVar29 + 8;
      DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
    } while (iVar29 < (int)(uVar31 - 8));
  }
  if (iVar29 < (int)uVar31) {
    iVar29 = uVar31 - iVar29;
    do {
      uVar1 = *puVar30;
      uVar5 = *(undefined4 *)(puVar30 + 1);
      uVar6 = *(undefined4 *)((int)puVar30 + 0xc);
      puVar30 = puVar30 + 2;
      *DAT_0040e5f0 = (int)uVar1;
      DAT_0040e5f0[1] = (int)((ulong)uVar1 >> 0x20);
      DAT_0040e5f0[2] = uVar5;
      DAT_0040e5f0[3] = uVar6;
      iVar29 = iVar29 + -1;
      DAT_0040e5f0 = DAT_0040e5f0 + 4;
    } while (iVar29 != 0);
  }
  DAT_00442ed0 = &DAT_00440ef0;
  DAT_00442ed4 = (uint *)0x0;
  DAT_00442ed8 = 0xc;
  return;
}


// ==== FUN_00265da8 @ 00265da8 ====

void FUN_00265da8(void)

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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 in_a0_udw;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 in_t2_udw;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulong in_t8_udw;
  ulong in_t9_udw;
  
  auVar16._8_8_ = in_t8_udw;
  auVar16._0_8_ = 0x1400000000000001;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = in_t9_udw;
  auVar44 = _pcpyld(auVar40 << 0x40,auVar16);
  auVar17._8_8_ = in_t8_udw;
  auVar17._0_8_ = 0x2400000000000001;
  auVar31._8_8_ = in_t9_udw;
  auVar31._0_8_ = 0x10;
  auVar31 = _pcpyld(auVar31,auVar17);
  DAT_00442f20 = 0x41;
  auVar18._8_8_ = in_t8_udw;
  auVar18._0_8_ = 0x2400000000000000;
  auVar34._8_8_ = in_t9_udw;
  auVar34._0_8_ = 0x55;
  auVar34 = _pcpyld(auVar34,auVar18);
  DAT_00442f28 = 0x56;
  auVar19._8_8_ = in_t8_udw;
  auVar19._0_8_ = 0x4400000000000000;
  auVar35._8_8_ = in_t9_udw;
  auVar35._0_8_ = 0x5252;
  auVar35 = _pcpyld(auVar35,auVar19);
  DAT_00442f30 = 0x46;
  auVar20._8_8_ = in_t8_udw;
  auVar20._0_8_ = 0x2400000000000000;
  auVar36._8_8_ = in_t9_udw;
  auVar36._0_8_ = 0x55;
  auVar40 = _pcpyld(auVar36,auVar20);
  DAT_00442f38 = 0x53;
  auVar21._8_8_ = in_t8_udw;
  auVar21._0_8_ = 0x6400000000000000;
  auVar38._8_8_ = in_t9_udw;
  auVar38._0_8_ = 0x525252;
  auVar42 = _pcpyld(auVar38,auVar21);
  DAT_00442f40 = 0x5b;
  auVar29._8_8_ = in_a0_udw;
  auVar29._0_8_ = 0x42;
  auVar22._8_8_ = in_t8_udw;
  auVar22._0_8_ = 0x9400000000000000;
  auVar39._8_8_ = in_t9_udw;
  auVar39._0_8_ = 0x512512512;
  auVar43 = _pcpyld(auVar39,auVar22);
  DAT_00442f48 = 0x43;
  auVar37._8_8_ = in_t2_udw;
  auVar37._0_8_ = 0xe;
  auVar23._8_8_ = in_t8_udw;
  auVar23._0_8_ = 0x3400000000000000;
  auVar41._8_8_ = in_t9_udw;
  auVar41._0_8_ = 0x555;
  auVar41 = _pcpyld(auVar41,auVar23);
  DAT_00442f50 = 0x4b;
  auVar24._8_8_ = in_t8_udw;
  auVar24._0_8_ = 0x6400000000000000;
  auVar10._8_8_ = in_t9_udw;
  auVar10._0_8_ = 0x515151;
  auVar39 = _pcpyld(auVar10,auVar24);
  DAT_00442f58 = 0x54;
  auVar25._8_8_ = in_t8_udw;
  auVar25._0_8_ = 0x2400000000000000;
  auVar11._8_8_ = in_t9_udw;
  auVar11._0_8_ = 0x52;
  auVar36 = _pcpyld(auVar11,auVar25);
  DAT_00442f60 = 0x5c;
  auVar26._8_8_ = in_t8_udw;
  auVar26._0_8_ = 0x3400000000000000;
  auVar12._8_8_ = in_t9_udw;
  auVar12._0_8_ = 0x512;
  auVar23 = _pcpyld(auVar12,auVar26);
  DAT_00442f68 = 0x44;
  auVar27._8_8_ = in_t8_udw;
  auVar27._0_8_ = 0x1400000000000000;
  auVar13._8_8_ = in_t9_udw;
  auVar13._0_8_ = 5;
  auVar16 = _pcpyld(auVar13,auVar27);
  auVar24 = _pcpyld(auVar29,auVar29);
  auVar32._8_8_ = auVar31._8_8_;
  auVar32._0_8_ = 8;
  DAT_00442f70 = 0x4c;
  auVar28._8_8_ = in_t8_udw;
  auVar28._0_8_ = 0x2400000000000000;
  auVar14._8_8_ = in_t9_udw;
  auVar14._0_8_ = 0x51;
  auVar17 = _pcpyld(auVar14,auVar28);
  auVar30._8_8_ = in_t8_udw;
  auVar30._0_8_ = 0x1000000000000000;
  auVar38 = _pcpyld(auVar37,auVar30);
  auVar33._8_8_ = in_t8_udw;
  auVar33._0_8_ = 0x44;
  auVar18 = _pcpyld(auVar29,auVar33);
  auVar1._8_8_ = in_t8_udw;
  auVar1._0_8_ = 0x48;
  auVar25 = _pcpyld(auVar29,auVar1);
  auVar2._8_8_ = in_t8_udw;
  auVar2._0_8_ = 0x2a;
  auVar19 = _pcpyld(auVar29,auVar2);
  auVar3._8_8_ = in_t8_udw;
  auVar3._0_8_ = 0x54;
  auVar26 = _pcpyld(auVar29,auVar3);
  auVar4._8_8_ = in_t8_udw;
  auVar4._0_8_ = 0x58;
  auVar20 = _pcpyld(auVar29,auVar4);
  auVar5._8_8_ = in_t8_udw;
  auVar5._0_8_ = 0x52;
  auVar27 = _pcpyld(auVar29,auVar5);
  auVar6._8_8_ = in_t8_udw;
  auVar6._0_8_ = 0x6a;
  auVar30 = _pcpyld(auVar29,auVar6);
  auVar7._8_8_ = in_t8_udw;
  auVar7._0_8_ = 5;
  auVar21 = _pcpyld(auVar32,auVar7);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = in_t8_udw;
  auVar28 = _pcpyld(auVar32,auVar15 << 0x40);
  auVar8._8_8_ = in_t8_udw;
  auVar8._0_8_ = 1;
  auVar22 = _pcpyld(auVar32,auVar8);
  auVar9._8_8_ = in_t8_udw;
  auVar9._0_8_ = 4;
  auVar33 = _pcpyld(auVar32,auVar9);
  DAT_00442f00 = auVar44._0_4_;
  DAT_00442f04 = auVar44._4_4_;
  DAT_00442f08 = auVar44._8_4_;
  DAT_00442f0c = auVar44._12_4_;
  DAT_00442f10 = auVar31._0_4_;
  DAT_00442f14 = auVar31._4_4_;
  DAT_00442f18 = auVar31._8_4_;
  DAT_00442f1c = auVar31._12_4_;
  DAT_00442f80 = auVar34._0_4_;
  DAT_00442f84 = auVar34._4_4_;
  DAT_00442f88 = auVar34._8_4_;
  DAT_00442f8c = auVar34._12_4_;
  DAT_00442f90 = auVar35._0_4_;
  DAT_00442f94 = auVar35._4_4_;
  DAT_00442f98 = auVar35._8_4_;
  DAT_00442f9c = auVar35._12_4_;
  DAT_00442fa0 = auVar40._0_4_;
  DAT_00442fa4 = auVar40._4_4_;
  DAT_00442fa8 = auVar40._8_4_;
  DAT_00442fac = auVar40._12_4_;
  DAT_00442fb0 = auVar42._0_4_;
  DAT_00442fb4 = auVar42._4_4_;
  DAT_00442fb8 = auVar42._8_4_;
  DAT_00442fbc = auVar42._12_4_;
  DAT_00442fc0 = auVar43._0_4_;
  DAT_00442fc4 = auVar43._4_4_;
  DAT_00442fc8 = auVar43._8_4_;
  DAT_00442fcc = auVar43._12_4_;
  DAT_00442fd0 = auVar41._0_4_;
  DAT_00442fd4 = auVar41._4_4_;
  DAT_00442fd8 = auVar41._8_4_;
  DAT_00442fdc = auVar41._12_4_;
  DAT_00442fe0 = auVar39._0_4_;
  DAT_00442fe4 = auVar39._4_4_;
  DAT_00442fe8 = auVar39._8_4_;
  DAT_00442fec = auVar39._12_4_;
  DAT_00442ff0 = auVar36._0_4_;
  DAT_00442ff4 = auVar36._4_4_;
  DAT_00442ff8 = auVar36._8_4_;
  DAT_00442ffc = auVar36._12_4_;
  DAT_00443000 = auVar23._0_4_;
  DAT_00443004 = auVar23._4_4_;
  DAT_00443008 = auVar23._8_4_;
  DAT_0044300c = auVar23._12_4_;
  DAT_00443010 = auVar16._0_4_;
  DAT_00443014 = auVar16._4_4_;
  DAT_00443018 = auVar16._8_4_;
  DAT_0044301c = auVar16._12_4_;
  DAT_00443020 = auVar17._0_4_;
  DAT_00443024 = auVar17._4_4_;
  DAT_00443028 = auVar17._8_4_;
  DAT_0044302c = auVar17._12_4_;
  DAT_00443030 = auVar38._0_4_;
  DAT_00443034 = auVar38._4_4_;
  DAT_00443038 = auVar38._8_4_;
  DAT_0044303c = auVar38._12_4_;
  DAT_00443040 = auVar18._0_4_;
  DAT_00443044 = auVar18._4_4_;
  DAT_00443048 = auVar18._8_4_;
  DAT_0044304c = auVar18._12_4_;
  DAT_00443050 = auVar25._0_4_;
  DAT_00443054 = auVar25._4_4_;
  DAT_00443058 = auVar25._8_4_;
  DAT_0044305c = auVar25._12_4_;
  DAT_00443060 = auVar24._0_4_;
  DAT_00443064 = auVar24._4_4_;
  DAT_00443068 = auVar24._8_4_;
  DAT_0044306c = auVar24._12_4_;
  DAT_00443070 = auVar19._0_4_;
  DAT_00443074 = auVar19._4_4_;
  DAT_00443078 = auVar19._8_4_;
  DAT_0044307c = auVar19._12_4_;
  DAT_00443080 = auVar26._0_4_;
  DAT_00443084 = auVar26._4_4_;
  DAT_00443088 = auVar26._8_4_;
  DAT_0044308c = auVar26._12_4_;
  DAT_00443090 = auVar20._0_4_;
  DAT_00443094 = auVar20._4_4_;
  DAT_00443098 = auVar20._8_4_;
  DAT_0044309c = auVar20._12_4_;
  DAT_004430a0 = auVar27._0_4_;
  DAT_004430a4 = auVar27._4_4_;
  DAT_004430a8 = auVar27._8_4_;
  DAT_004430ac = auVar27._12_4_;
  DAT_004430b0 = auVar30._0_4_;
  DAT_004430b4 = auVar30._4_4_;
  DAT_004430b8 = auVar30._8_4_;
  DAT_004430bc = auVar30._12_4_;
  DAT_004430c0 = auVar21._0_4_;
  DAT_004430c4 = auVar21._4_4_;
  DAT_004430c8 = auVar21._8_4_;
  DAT_004430cc = auVar21._12_4_;
  DAT_004430d0 = auVar28._0_4_;
  DAT_004430d4 = auVar28._4_4_;
  DAT_004430d8 = auVar28._8_4_;
  DAT_004430dc = auVar28._12_4_;
  DAT_004430e0 = auVar22._0_4_;
  DAT_004430e4 = auVar22._4_4_;
  DAT_004430e8 = auVar22._8_4_;
  DAT_004430ec = auVar22._12_4_;
  DAT_004430f0 = auVar33._0_4_;
  DAT_004430f4 = auVar33._4_4_;
  DAT_004430f8 = auVar33._8_4_;
  DAT_004430fc = auVar33._12_4_;
  return;
}


// ==== FUN_00266088 @ 00266088 ====

void FUN_00266088(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 in_v0_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_v1_udw;
  undefined1 auVar7 [16];
  undefined8 in_a0_udw;
  undefined1 auVar8 [16];
  undefined8 in_a1_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_a3_udw;
  undefined1 auVar11 [16];
  undefined8 in_t3_udw;
  undefined8 in_t4_udw;
  undefined8 in_t5_udw;
  undefined8 in_t6_udw;
  
  auVar9._8_8_ = in_a1_udw;
  auVar9._0_8_ = 0x42;
  iVar1 = *(int *)(DAT_00449438 + 0x60);
  auVar3._8_8_ = in_t6_udw;
  auVar3._0_8_ = DAT_0040e000;
  auVar10 = _pcpyld(auVar9,auVar3);
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = 0x14;
  DAT_00443100 = auVar10._0_4_;
  DAT_00443104 = auVar10._4_4_;
  DAT_00443108 = auVar10._8_4_;
  DAT_0044310c = auVar10._12_4_;
  auVar2._8_8_ = in_t5_udw;
  auVar2._0_8_ = DAT_0040dff8;
  auVar10 = _pcpyld(auVar8,auVar2);
  auVar4._8_8_ = in_v0_udw;
  auVar4._0_8_ = 8;
  DAT_00443110 = auVar10._0_4_;
  DAT_00443114 = auVar10._4_4_;
  DAT_00443118 = auVar10._8_4_;
  DAT_0044311c = auVar10._12_4_;
  auVar5._8_8_ = in_t4_udw;
  auVar5._0_8_ = DAT_0040dff0;
  auVar5 = _pcpyld(auVar4,auVar5);
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = 0x4c;
  DAT_00443120 = auVar5._0_4_;
  DAT_00443124 = auVar5._4_4_;
  DAT_00443128 = auVar5._8_4_;
  DAT_0044312c = auVar5._12_4_;
  auVar10._8_8_ = in_t3_udw;
  auVar10._0_8_ = DAT_0040dfd0;
  auVar10 = _pcpyld(auVar7,auVar10);
  DAT_00443140 = auVar10._0_4_;
  DAT_00443144 = auVar10._4_4_;
  DAT_00443148 = auVar10._8_4_;
  DAT_0044314c = auVar10._12_4_;
  auVar11._8_8_ = in_a3_udw;
  auVar11._0_8_ = 0x40;
  auVar6._8_8_ = auVar5._8_8_;
  DAT_00442ef0 = (int)DAT_00449450;
  auVar6._0_8_ = (long)*(short *)(iVar1 + 0x1c) |
                 (long)((int)*(short *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0xc) + -1) << 0x10 |
                 (long)*(short *)(iVar1 + 0x1e) << 0x20 |
                 (long)((int)*(short *)(iVar1 + 0x1e) + *(int *)(iVar1 + 0x10) + -1) << 0x30;
  auVar10 = _pcpyld(auVar11,auVar6);
  DAT_00443130 = auVar10._0_4_;
  DAT_00443134 = auVar10._4_4_;
  DAT_00443138 = auVar10._8_4_;
  DAT_0044313c = auVar10._12_4_;
  DAT_00442ed8 = 0xc;
  DAT_00442ee8 = DAT_0040e690;
  DAT_00442eec = 0xffffffff;
  DAT_00442ed0 = &DAT_00440ef0;
  DAT_00442ed4 = 0;
  DAT_0040e598._0_1_ = 1;
  DAT_0040e594._3_1_ = 0;
  uGpffff8da9 = 1;
  DAT_00442ef4 = DAT_00442ef0;
  FUN_00268928();
  DAT_00442ef8 = *(short *)(iVar1 + 0x1c) * 0x10 + ((uint)DAT_0040dfe0 & 0xffff);
  DAT_0043f700 = (float)DAT_00442ef8 * 0.0625;
  DAT_00442efc = *(short *)(iVar1 + 0x1e) * 0x10 + ((uint)((ulong)DAT_0040dfe0 >> 0x20) & 0xffff);
  DAT_0043f704 = (float)DAT_00442efc * 0.0625;
  DAT_0043f708 = DAT_0043f700;
  DAT_0043f70c = DAT_0043f704;
  return;
}


// ==== FUN_002662a8 @ 002662a8 ====

void FUN_002662a8(void)

{
  int *piVar1;
  int iVar2;
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
  int *piVar13;
  int iVar14;
  int iVar15;
  int in_v0_udw;
  int in_register_0000002c;
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 in_t0_udw;
  undefined8 in_t3_udw;
  undefined8 in_t4_udw;
  
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 7) {
    FUN_00265c38();
  }
  iVar14 = DAT_0044303c;
  iVar15 = DAT_00443038;
  iVar2 = DAT_00443034;
  if (DAT_00442ed8 != 0xb) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 0xb;
    *DAT_00442ed0 = DAT_00443030;
    piVar1[1] = iVar2;
    piVar1[2] = iVar15;
    piVar1[3] = iVar14;
    DAT_00442ed4 = DAT_00442ed0;
    in_v0_udw = iVar15;
    in_register_0000002c = iVar14;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  piVar1 = DAT_00442ed0;
  if ((DAT_0040e690 != 0) && (DAT_0040e690 != DAT_00442ee8)) {
    auVar16._8_8_ = in_v1_udw;
    auVar16._0_8_ = *(undefined8 *)(DAT_0040e690 + 0x3c);
    auVar9._8_8_ = in_a1_udw;
    auVar9._0_8_ = 6;
    auVar16 = _pcpyld(auVar9,auVar16);
    *DAT_00442ed0 = auVar16._0_4_;
    piVar1[1] = auVar16._4_4_;
    piVar1[2] = auVar16._8_4_;
    piVar1[3] = auVar16._12_4_;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *DAT_00442ed4 = *DAT_00442ed4 + 1;
  }
  piVar1 = DAT_00442ed0;
  auVar3._8_4_ = in_v0_udw;
  auVar3._0_8_ = 0x42;
  auVar3._12_4_ = in_register_0000002c;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = DAT_0040e000;
  auVar16 = _pcpyld(auVar3,auVar8);
  *DAT_00442ed0 = auVar16._0_4_;
  piVar1[1] = auVar16._4_4_;
  piVar1[2] = auVar16._8_4_;
  piVar1[3] = auVar16._12_4_;
  piVar13 = DAT_00442ed0;
  auVar17._8_8_ = auVar16._8_8_;
  auVar17._0_8_ = 0x14;
  auVar6._8_8_ = in_v1_udw;
  auVar6._0_8_ = DAT_0040dff8;
  auVar16 = _pcpyld(auVar17,auVar6);
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = auVar16._0_4_;
  piVar13[5] = auVar16._4_4_;
  piVar13[6] = auVar16._8_4_;
  piVar13[7] = auVar16._12_4_;
  piVar13 = DAT_00442ed0;
  auVar4._8_4_ = in_v0_udw;
  auVar4._0_8_ = DAT_0040dff0;
  auVar4._12_4_ = in_register_0000002c;
  auVar10._8_8_ = in_t0_udw;
  auVar10._0_8_ = 8;
  auVar16 = _pcpyld(auVar10,auVar4);
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = auVar16._0_4_;
  piVar13[5] = auVar16._4_4_;
  piVar13[6] = auVar16._8_4_;
  piVar13[7] = auVar16._12_4_;
  piVar13 = DAT_00442ed0;
  iVar2 = *(int *)(DAT_00449438 + 0x60);
  iVar15 = (int)*(short *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0xc) + -1;
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = CONCAT44(*(short *)(iVar2 + 0x1c) >> 0xf,(int)*(short *)(iVar2 + 0x1c)) |
                 CONCAT44((int)(short)((uint)iVar15 >> 0x10),iVar15 * 0x10000) |
                 (long)*(short *)(iVar2 + 0x1e) << 0x20 |
                 (long)((int)*(short *)(iVar2 + 0x1e) + *(int *)(iVar2 + 0x10) + -1) << 0x30;
  auVar12._8_8_ = in_t4_udw;
  auVar12._0_8_ = 0x40;
  auVar16 = _pcpyld(auVar12,auVar7);
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = auVar16._0_4_;
  piVar13[5] = auVar16._4_4_;
  piVar13[6] = auVar16._8_4_;
  piVar13[7] = auVar16._12_4_;
  piVar13 = DAT_00442ed0;
  auVar5._8_4_ = in_v0_udw;
  auVar5._0_8_ = DAT_0040dfd0;
  auVar5._12_4_ = in_register_0000002c;
  auVar11._8_8_ = in_t3_udw;
  auVar11._0_8_ = 0x4c;
  auVar16 = _pcpyld(auVar11,auVar5);
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = auVar16._0_4_;
  piVar13[5] = auVar16._4_4_;
  piVar13[6] = auVar16._8_4_;
  piVar13[7] = auVar16._12_4_;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 5;
  FUN_00265c38();
  DAT_00442ed0 = (int *)0x0;
  return;
}


// ==== FUN_002664a0 @ 002664a0 ====

void FUN_002664a0(void)

{
  int *piVar1;
  int iVar2;
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
  int *piVar13;
  int iVar14;
  int iVar15;
  int in_v0_udw;
  int in_register_0000002c;
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 in_t0_udw;
  undefined8 in_t3_udw;
  undefined8 in_t4_udw;
  
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 7) {
    FUN_00265c38();
  }
  iVar14 = DAT_0044303c;
  iVar15 = DAT_00443038;
  iVar2 = DAT_00443034;
  if (DAT_00442ed8 != 0xb) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 0xb;
    *DAT_00442ed0 = DAT_00443030;
    piVar1[1] = iVar2;
    piVar1[2] = iVar15;
    piVar1[3] = iVar14;
    DAT_00442ed4 = DAT_00442ed0;
    in_v0_udw = iVar15;
    in_register_0000002c = iVar14;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  piVar1 = DAT_00442ed0;
  if ((DAT_0040e690 != 0) && (DAT_0040e690 != DAT_00442ee8)) {
    auVar16._8_8_ = in_v1_udw;
    auVar16._0_8_ = *(undefined8 *)(DAT_0040e690 + 0x3c);
    auVar9._8_8_ = in_a1_udw;
    auVar9._0_8_ = 6;
    auVar16 = _pcpyld(auVar9,auVar16);
    *DAT_00442ed0 = auVar16._0_4_;
    piVar1[1] = auVar16._4_4_;
    piVar1[2] = auVar16._8_4_;
    piVar1[3] = auVar16._12_4_;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *DAT_00442ed4 = *DAT_00442ed4 + 1;
  }
  piVar1 = DAT_00442ed0;
  auVar3._8_4_ = in_v0_udw;
  auVar3._0_8_ = 0x42;
  auVar3._12_4_ = in_register_0000002c;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = DAT_0040e000;
  auVar16 = _pcpyld(auVar3,auVar8);
  *DAT_00442ed0 = auVar16._0_4_;
  piVar1[1] = auVar16._4_4_;
  piVar1[2] = auVar16._8_4_;
  piVar1[3] = auVar16._12_4_;
  piVar13 = DAT_00442ed0;
  auVar17._8_8_ = auVar16._8_8_;
  auVar17._0_8_ = 0x14;
  auVar6._8_8_ = in_v1_udw;
  auVar6._0_8_ = DAT_0040dff8;
  auVar16 = _pcpyld(auVar17,auVar6);
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = auVar16._0_4_;
  piVar13[5] = auVar16._4_4_;
  piVar13[6] = auVar16._8_4_;
  piVar13[7] = auVar16._12_4_;
  piVar13 = DAT_00442ed0;
  auVar4._8_4_ = in_v0_udw;
  auVar4._0_8_ = DAT_0040dff0;
  auVar4._12_4_ = in_register_0000002c;
  auVar10._8_8_ = in_t0_udw;
  auVar10._0_8_ = 8;
  auVar16 = _pcpyld(auVar10,auVar4);
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = auVar16._0_4_;
  piVar13[5] = auVar16._4_4_;
  piVar13[6] = auVar16._8_4_;
  piVar13[7] = auVar16._12_4_;
  piVar13 = DAT_00442ed0;
  iVar2 = *(int *)(DAT_00449438 + 0x60);
  iVar15 = (int)*(short *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0xc) + -1;
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = CONCAT44(*(short *)(iVar2 + 0x1c) >> 0xf,(int)*(short *)(iVar2 + 0x1c)) |
                 CONCAT44((int)(short)((uint)iVar15 >> 0x10),iVar15 * 0x10000) |
                 (long)*(short *)(iVar2 + 0x1e) << 0x20 |
                 (long)((int)*(short *)(iVar2 + 0x1e) + *(int *)(iVar2 + 0x10) + -1) << 0x30;
  auVar12._8_8_ = in_t4_udw;
  auVar12._0_8_ = 0x40;
  auVar16 = _pcpyld(auVar12,auVar7);
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = auVar16._0_4_;
  piVar13[5] = auVar16._4_4_;
  piVar13[6] = auVar16._8_4_;
  piVar13[7] = auVar16._12_4_;
  piVar13 = DAT_00442ed0;
  auVar5._8_4_ = in_v0_udw;
  auVar5._0_8_ = DAT_0040dfd0;
  auVar5._12_4_ = in_register_0000002c;
  auVar11._8_8_ = in_t3_udw;
  auVar11._0_8_ = 0x4c;
  auVar16 = _pcpyld(auVar11,auVar5);
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = auVar16._0_4_;
  piVar13[5] = auVar16._4_4_;
  piVar13[6] = auVar16._8_4_;
  piVar13[7] = auVar16._12_4_;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 5;
  FUN_00265c38();
  DAT_00442ed0 = (int *)0x0;
  return;
}


// ==== FUN_00266698 @ 00266698 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00266698(void)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  DAT_00442ee8 = DAT_0040e690;
  DAT_00442ed0 = &DAT_00440ef0;
  DAT_00442ed8 = 0xc;
  DAT_00442ed4 = (int *)0x0;
  FUN_00268928();
  iVar5 = DAT_0044303c;
  iVar4 = DAT_00443038;
  uVar3 = _DAT_00443030;
  if (DAT_00442ed8 != 0xb) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 0xb;
    *DAT_00442ed0 = (int)_DAT_00443030;
    piVar1[1] = (int)((ulong)uVar3 >> 0x20);
    piVar1[2] = iVar4;
    piVar1[3] = iVar5;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  iVar5 = DAT_0044310c;
  iVar4 = DAT_00443108;
  uVar3 = _DAT_00443100;
  piVar1 = DAT_00442ed0;
  *DAT_00442ed0 = (int)_DAT_00443100;
  piVar1[1] = (int)((ulong)uVar3 >> 0x20);
  piVar1[2] = iVar4;
  piVar1[3] = iVar5;
  iVar5 = DAT_0044311c;
  iVar4 = DAT_00443118;
  uVar3 = _DAT_00443110;
  piVar2 = DAT_00442ed0;
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = (int)_DAT_00443110;
  piVar2[5] = (int)((ulong)uVar3 >> 0x20);
  piVar2[6] = iVar4;
  piVar2[7] = iVar5;
  iVar5 = DAT_0044312c;
  iVar4 = DAT_00443128;
  uVar3 = _DAT_00443120;
  piVar2 = DAT_00442ed0;
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = (int)_DAT_00443120;
  piVar2[5] = (int)((ulong)uVar3 >> 0x20);
  piVar2[6] = iVar4;
  piVar2[7] = iVar5;
  iVar5 = DAT_0044313c;
  iVar4 = DAT_00443138;
  uVar3 = _DAT_00443130;
  piVar2 = DAT_00442ed0;
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = (int)_DAT_00443130;
  piVar2[5] = (int)((ulong)uVar3 >> 0x20);
  piVar2[6] = iVar4;
  piVar2[7] = iVar5;
  iVar5 = DAT_0044314c;
  iVar4 = DAT_00443148;
  uVar3 = _DAT_00443140;
  piVar2 = DAT_00442ed0;
  piVar1 = DAT_00442ed0 + 4;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *piVar1 = (int)_DAT_00443140;
  piVar2[5] = (int)((ulong)uVar3 >> 0x20);
  piVar2[6] = iVar4;
  piVar2[7] = iVar5;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 5;
  return;
}


// ==== FUN_002667e8 @ 002667e8 ====

void FUN_002667e8(undefined8 param_1)

{
  FUN_00266808(param_1,0);
  return;
}


// ==== FUN_00266808 @ 00266808 ====

void FUN_00266808(int param_1,int param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  int iVar8;
  undefined4 uVar9;
  undefined8 in_a0_udw;
  undefined1 auVar10 [16];
  
  if ((param_1 == DAT_00442ee8) && (param_2 == DAT_00442eec)) {
    return;
  }
  DAT_00442ee8 = param_1;
  DAT_00442eec = param_2;
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (DAT_00442ed4 != (int *)0x0) {
      FUN_00265c38();
    }
    if (DAT_0040e690 != param_1) {
      FUN_002cdea0(param_1);
      lVar1 = FUN_002cd230(param_1,0);
      if (lVar1 != 0) {
        DAT_0040e690 = param_1;
      }
    }
    if (DAT_00442eec < 1) {
      return;
    }
    auVar10._8_4_ = in_v0_udw;
    auVar10._0_8_ = 6;
    auVar10._12_4_ = in_register_0000002c;
    auVar4._4_4_ = *(int *)(param_1 + 0x40) +
                   (uint)*(ushort *)(param_1 + DAT_00442eec * 2 + 0x90) * 0x20;
    auVar4._0_4_ = *(undefined4 *)(param_1 + 0x3c);
    auVar4._8_8_ = in_a0_udw;
    auVar10 = _pcpyld(auVar10,auVar4);
    if (DAT_00442ed8 == 0xb) goto LAB_002669d0;
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
  }
  else {
    if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 2) {
      FUN_00265c38();
    }
    if (DAT_00442eec < 1) {
      iVar8 = *(int *)(param_1 + 0x40);
      uVar9 = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x3c);
      iVar8 = *(int *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + DAT_00442eec * 2 + 0x90) * 0x20
      ;
    }
    auVar2._8_4_ = in_v0_udw;
    auVar2._0_8_ = 6;
    auVar2._12_4_ = in_register_0000002c;
    auVar3._4_4_ = iVar8;
    auVar3._0_4_ = uVar9;
    auVar3._8_8_ = in_a0_udw;
    auVar10 = _pcpyld(auVar2,auVar3);
    if (DAT_00442ed8 == 0xb) goto LAB_002669d0;
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
  }
  iVar7 = DAT_0044303c;
  iVar6 = DAT_00443038;
  iVar8 = DAT_00443034;
  piVar5 = DAT_00442ed0;
  DAT_00442ed8 = 0xb;
  *DAT_00442ed0 = DAT_00443030;
  piVar5[1] = iVar8;
  piVar5[2] = iVar6;
  piVar5[3] = iVar7;
  DAT_00442ed4 = DAT_00442ed0;
  DAT_00442ed0 = DAT_00442ed0 + 4;
LAB_002669d0:
  piVar5 = DAT_00442ed0;
  *DAT_00442ed0 = auVar10._0_4_;
  piVar5[1] = auVar10._4_4_;
  piVar5[2] = auVar10._8_4_;
  piVar5[3] = auVar10._12_4_;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 1;
  return;
}


// ==== FUN_00266a18 @ 00266a18 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00266a18(undefined4 param_1,float *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  ulong *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  ulong *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  auVar12 = _lqc2(_DAT_0043f6f0);
  auVar13 = _qmtc2(param_1);
  auVar12 = _vmul(auVar13,auVar12);
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x881dd) >> 4)) < param_3 + 3) {
    auVar12 = _sqc2(auVar12);
    FUN_00265c38();
    auVar12 = _lqc2(auVar12);
  }
  iVar8 = DAT_00442f1c;
  iVar7 = DAT_00442f18;
  uVar3 = _DAT_00442f10;
  auVar13 = _sqc2(auVar12);
  auVar5 = _qmfc2(auVar12._0_4_);
  fStack_7c = auVar13._4_4_;
  auVar13 = _sqc2(auVar12);
  fStack_78 = auVar13._8_4_;
  auVar12 = _sqc2(auVar12);
  fStack_74 = auVar12._12_4_;
  uVar9 = (long)(int)auVar5._0_4_ | (long)(int)fStack_7c << 8 | (long)(int)fStack_78 << 0x10 |
          (long)(int)fStack_74 << 0x18 | 0x3f80000000000000;
  if ((DAT_00442ed8 != 0) || (uVar9 != DAT_00442ee0)) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 1;
    }
    puVar6 = DAT_00442ed0;
    DAT_00442ed8 = 0;
    DAT_00442ee0 = uVar9;
    *(int *)DAT_00442ed0 = (int)_DAT_00442f10;
    *(int *)((int)puVar6 + 4) = (int)((ulong)uVar3 >> 0x20);
    *(int *)(puVar6 + 1) = iVar7;
    *(int *)((int)puVar6 + 0xc) = iVar8;
    puVar2 = DAT_00442ed0;
    DAT_00442ed0[2] = DAT_00442f20;
    DAT_00442ed0[3] = uVar9;
    iVar4 = DAT_00442f8c;
    iVar8 = DAT_00442f88;
    iVar7 = DAT_00442f84;
    puVar6 = DAT_00442ed0 + 4;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *(int *)puVar6 = DAT_00442f80;
    *(int *)((int)puVar2 + 0x24) = iVar7;
    *(int *)(puVar2 + 5) = iVar8;
    *(int *)((int)puVar2 + 0x2c) = iVar4;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 2;
  }
  iVar7 = DAT_00442efc;
  fVar11 = param_2[1];
  iVar8 = DAT_00442ef8 +
          (int)(float)(int)(*param_2 * 16.0 +
                           (float)((uint)(*param_2 * 16.0) & 0x80000000 | 0x3f000000));
  *(int *)DAT_00442ed4 = (int)*DAT_00442ed4 + param_3;
  iVar7 = iVar7 + (int)(float)(int)(fVar11 * 16.0 +
                                   (float)((uint)(fVar11 * 16.0) & 0x80000000 | 0x3f000000));
  do {
    param_3 = param_3 + -1;
    pfVar10 = param_4 + 2;
    *DAT_00442ed0 =
         (long)((int)(*param_4 * 16.0) + iVar8) | (long)((int)(param_4[1] * 16.0) + iVar7) << 0x10 |
         (long)DAT_00442ef4 << 0x20;
    puVar6 = DAT_00442ed0 + 1;
    DAT_00442ed0 = DAT_00442ed0 + 2;
    pfVar1 = param_4 + 3;
    param_4 = param_4 + 4;
    *puVar6 = (long)((int)(*pfVar10 * 16.0) + iVar8) | (long)((int)(*pfVar1 * 16.0) + iVar7) << 0x10
              | (long)DAT_00442ef4 << 0x20;
  } while (0 < param_3);
  return;
}


// ==== FUN_00266d28 @ 00266d28 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00266d28(undefined4 param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined1 in_zero_qw [16];
  undefined8 uVar4;
  undefined1 auVar3 [16];
  undefined8 in_v1_udw;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_a1_udw;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar10 = _lqc2(_DAT_0043f6f0);
  auVar12 = _qmtc2(param_1);
  auVar10 = _vmulbc(auVar12,auVar10);
  auVar10 = _sqc2(auVar10);
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < param_3 * 2 + 3) {
    FUN_00265c38();
  }
  auVar12 = _DAT_00442f10;
  auVar10 = _lqc2(auVar10);
  auVar10 = _vftoi0(auVar10);
  auVar10 = _qmfc2(auVar10._0_4_);
  auVar10 = _ppach(in_zero_qw,auVar10);
  auVar9 = _ppacb(in_zero_qw,auVar10);
  uVar8 = auVar9._0_8_ | 0x3f80000000000000;
  if ((DAT_00442ed8 != 1) || (uVar4 = auVar10._8_8_, uVar8 != DAT_00442ee0)) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 1;
    DAT_00442ee0 = uVar8;
    *DAT_00442ed0 = DAT_00442f10;
    piVar1[1] = auVar12._4_4_;
    piVar1[2] = auVar12._8_4_;
    piVar1[3] = auVar12._12_4_;
    piVar2 = DAT_00442ed0;
    in_v1_udw = auVar12._8_8_;
    *(undefined8 *)(DAT_00442ed0 + 4) = DAT_00442f28;
    *(ulong *)(DAT_00442ed0 + 6) = uVar8;
    auVar10 = _DAT_00442f90;
    piVar1 = DAT_00442ed0 + 8;
    DAT_00442ed0 = DAT_00442ed0 + 8;
    *piVar1 = DAT_00442f90;
    piVar2[9] = auVar10._4_4_;
    piVar2[10] = auVar10._8_4_;
    piVar2[0xb] = auVar10._12_4_;
    uVar4 = auVar10._8_8_;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  auVar9._8_8_ = in_v1_udw;
  auVar9._0_8_ = 0x43f700;
  *DAT_00442ed4 = *DAT_00442ed4 + param_3;
  auVar12._0_8_ = (ulong)DAT_00442ef4;
  auVar12._8_8_ = uVar4;
  auVar11 = _lqc2(_DAT_0043f700);
  auVar10._8_4_ = *(undefined4 *)param_2;
  auVar10._0_8_ = *param_2;
  auVar10._12_4_ = *(undefined4 *)((int)param_2 + 4);
  auVar10 = _lqc2(auVar10);
  uVar8 = auVar12._0_8_ << 0x20;
  auVar10 = _vadd(auVar10,auVar11);
  do {
    auVar5._8_8_ = auVar9._8_8_;
    auVar5._0_8_ = *param_4;
    param_3 = param_3 + -1;
    uVar4 = *param_5;
    auVar3._8_8_ = auVar12._8_8_;
    auVar3._0_8_ = param_4[1];
    auVar12 = _pcpyld(auVar3,auVar5);
    param_4 = param_4 + 2;
    auVar9 = _qmtc2(auVar12._0_4_);
    auVar9 = _vadd(auVar9,auVar10);
    auVar7._8_8_ = auVar12._8_8_;
    auVar7._0_8_ = param_5[1];
    auVar12 = _vftoi4(auVar9);
    param_5 = param_5 + 2;
    auVar9 = _qmfc2(auVar12._0_4_);
    auVar12 = _ppach(in_zero_qw,auVar9);
    auVar6._8_8_ = auVar9._8_8_;
    auVar6._0_8_ = auVar12._0_8_ & 0xffffffff | uVar8;
    auVar11._8_8_ = in_a1_udw;
    auVar11._0_8_ = uVar4;
    auVar9 = _pcpyld(auVar6,auVar11);
    *DAT_00442ed0 = auVar9._0_4_;
    DAT_00442ed0[1] = auVar9._4_4_;
    DAT_00442ed0[2] = auVar9._8_4_;
    DAT_00442ed0[3] = auVar9._12_4_;
    auVar12._0_8_ = auVar12._0_8_ >> 0x20 | uVar8;
    auVar9 = _pcpyld(auVar12,auVar7);
    DAT_00442ed0[4] = auVar9._0_4_;
    DAT_00442ed0[5] = auVar9._4_4_;
    DAT_00442ed0[6] = auVar9._8_4_;
    DAT_00442ed0[7] = auVar9._12_4_;
    DAT_00442ed0 = DAT_00442ed0 + 8;
  } while (0 < param_3);
  return;
}


// ==== FUN_00266f50 @ 00266f50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00266f50(undefined4 param_1,float *param_2,int param_3,float *param_4)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  int in_v1_udw;
  int in_register_0000003c;
  int iVar9;
  int iVar10;
  ulong uVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  auVar15 = _lqc2(_DAT_0043f6f0);
  auVar16 = _qmtc2(param_1);
  auVar15 = _vmul(auVar16,auVar15);
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < param_3 + 3) {
    auVar15 = _sqc2(auVar15);
    FUN_00265c38();
    auVar15 = _lqc2(auVar15);
  }
  iVar13 = DAT_00442f1c;
  iVar10 = DAT_00442f18;
  iVar9 = DAT_00442f14;
  auVar16 = _sqc2(auVar15);
  auVar7 = _qmfc2(auVar15._0_4_);
  fStack_7c = auVar16._4_4_;
  auVar16 = _sqc2(auVar15);
  uVar8 = auVar7._8_8_;
  fStack_78 = auVar16._8_4_;
  auVar15 = _sqc2(auVar15);
  fStack_74 = auVar15._12_4_;
  uVar11 = (long)(int)auVar7._0_4_ | (long)(int)fStack_7c << 8 | (long)(int)fStack_78 << 0x10 |
           CONCAT44((int)(int3)((uint)(int)fStack_74 >> 8),(int)fStack_74 << 0x18) |
           0x3f80000000000000;
  if ((DAT_00442ed8 != 2) || (uVar11 != DAT_00442ee0)) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 2;
    DAT_00442ee0 = uVar11;
    *DAT_00442ed0 = DAT_00442f10;
    piVar1[1] = iVar9;
    piVar1[2] = iVar10;
    piVar1[3] = iVar13;
    piVar4 = DAT_00442ed0;
    *(undefined8 *)(DAT_00442ed0 + 4) = DAT_00442f30;
    *(ulong *)(DAT_00442ed0 + 6) = uVar11;
    iVar6 = DAT_00442fac;
    iVar9 = DAT_00442fa8;
    uVar5 = _DAT_00442fa0;
    uVar8 = CONCAT44(DAT_00442fac,DAT_00442fa8);
    piVar1 = DAT_00442ed0 + 8;
    DAT_00442ed0 = DAT_00442ed0 + 8;
    *piVar1 = (int)_DAT_00442fa0;
    piVar4[9] = (int)((ulong)uVar5 >> 0x20);
    piVar4[10] = iVar9;
    piVar4[0xb] = iVar6;
    DAT_00442ed4 = DAT_00442ed0;
    in_v1_udw = iVar10;
    in_register_0000003c = iVar13;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  iVar9 = DAT_00442efc;
  fVar14 = param_2[1];
  iVar10 = DAT_00442ef8 +
           (int)(float)(int)(*param_2 * 16.0 +
                            (float)((uint)(*param_2 * 16.0) & 0x80000000 | 0x3f000000));
  *DAT_00442ed4 = *DAT_00442ed4 + param_3;
  iVar13 = (int)(float)(int)(fVar14 * 16.0 +
                            (float)((uint)(fVar14 * 16.0) & 0x80000000 | 0x3f000000));
  auVar15._0_8_ = (long)iVar13;
  auVar15._8_8_ = uVar8;
  iVar9 = iVar9 + iVar13;
  do {
    piVar1 = DAT_00442ed0;
    fVar14 = *param_4;
    param_3 = param_3 + -1;
    pfVar2 = param_4 + 1;
    pfVar12 = param_4 + 2;
    pfVar3 = param_4 + 3;
    param_4 = param_4 + 4;
    auVar7._8_8_ = auVar15._8_8_;
    auVar7._0_8_ = (long)((int)(*pfVar12 * 16.0) + iVar10) |
                   (long)((int)(*pfVar3 * 16.0) + iVar9) << 0x10 | (long)DAT_00442ef4 << 0x20;
    auVar16._8_4_ = in_v1_udw;
    auVar16._0_8_ =
         (long)((int)(fVar14 * 16.0) + iVar10) | (long)((int)(*pfVar2 * 16.0) + iVar9) << 0x10 |
         (long)DAT_00442ef4 << 0x20;
    auVar16._12_4_ = in_register_0000003c;
    auVar15 = _pcpyld(auVar7,auVar16);
    *DAT_00442ed0 = auVar15._0_4_;
    piVar1[1] = auVar15._4_4_;
    piVar1[2] = auVar15._8_4_;
    piVar1[3] = auVar15._12_4_;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  } while (0 < param_3);
  return;
}


// ==== FUN_00267258 @ 00267258 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00267258(undefined4 param_1,float *param_2,int param_3,float *param_4,undefined8 *param_5)

{
  int *piVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 in_v1_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_a1_udw;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  auVar16 = _lqc2(_DAT_0043f6f0);
  auVar17 = _qmtc2(param_1);
  auVar16 = _vmulbc(auVar17,auVar16);
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < param_3 * 3 + 3) {
    auVar16 = _sqc2(auVar16);
    FUN_00265c38();
    auVar16 = _lqc2(auVar16);
  }
  auVar3 = _DAT_00442f10;
  auVar17 = _sqc2(auVar16);
  auVar6 = _qmfc2(auVar16._0_4_);
  fStack_ac = auVar17._4_4_;
  auVar17 = _sqc2(auVar16);
  fStack_a8 = auVar17._8_4_;
  auVar16 = _sqc2(auVar16);
  fStack_a4 = auVar16._12_4_;
  uVar10 = (long)(int)auVar6._0_4_ | (long)(int)fStack_ac << 8 | (long)(int)fStack_a8 << 0x10 |
           (long)(int)fStack_a4 << 0x18 | 0x3f80000000000000;
  if ((DAT_00442ed8 != 3) || (uVar10 != DAT_00442ee0)) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 3;
    DAT_00442ee0 = uVar10;
    *DAT_00442ed0 = DAT_00442f10;
    piVar1[1] = auVar3._4_4_;
    piVar1[2] = auVar3._8_4_;
    piVar1[3] = auVar3._12_4_;
    piVar4 = DAT_00442ed0;
    in_v1_udw = auVar3._8_8_;
    *(undefined8 *)(DAT_00442ed0 + 4) = DAT_00442f38;
    *(ulong *)(DAT_00442ed0 + 6) = uVar10;
    iVar5 = DAT_00442fbc;
    iVar14 = DAT_00442fb8;
    iVar11 = DAT_00442fb4;
    piVar1 = DAT_00442ed0 + 8;
    DAT_00442ed0 = DAT_00442ed0 + 8;
    *piVar1 = DAT_00442fb0;
    piVar4[9] = iVar11;
    piVar4[10] = iVar14;
    piVar4[0xb] = iVar5;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  iVar11 = DAT_00442efc;
  fVar15 = param_2[1];
  iVar14 = (int)(float)(int)(*param_2 * 16.0 +
                            (float)((uint)(*param_2 * 16.0) & 0x80000000 | 0x3f000000));
  auVar16._0_8_ = (long)iVar14;
  auVar16._8_8_ = in_v1_udw;
  iVar14 = DAT_00442ef8 + iVar14;
  *DAT_00442ed4 = *DAT_00442ed4 + param_3;
  iVar11 = iVar11 + (int)(float)(int)(fVar15 * 16.0 +
                                     (float)((uint)(fVar15 * 16.0) & 0x80000000 | 0x3f000000));
  do {
    piVar1 = DAT_00442ed0;
    param_3 = param_3 + -1;
    auVar7._8_8_ = auVar16._8_8_;
    auVar7._0_8_ = (long)((int)(*param_4 * 16.0) + iVar14) |
                   (long)((int)(param_4[1] * 16.0) + iVar11) << 0x10 | (long)DAT_00442ef4 << 0x20;
    auVar17._8_8_ = in_a1_udw;
    auVar17._0_8_ = *param_5;
    auVar16 = _pcpyld(auVar7,auVar17);
    *DAT_00442ed0 = auVar16._0_4_;
    piVar1[1] = auVar16._4_4_;
    piVar1[2] = auVar16._8_4_;
    piVar1[3] = auVar16._12_4_;
    piVar4 = DAT_00442ed0;
    pfVar13 = param_4 + 4;
    puVar12 = param_5 + 2;
    auVar8._8_8_ = auVar16._8_8_;
    auVar8._0_8_ = (long)((int)(param_4[2] * 16.0) + iVar14) |
                   (long)((int)(param_4[3] * 16.0) + iVar11) << 0x10 | (long)DAT_00442ef4 << 0x20;
    auVar3._8_8_ = in_a1_udw;
    auVar3._0_8_ = param_5[1];
    auVar16 = _pcpyld(auVar8,auVar3);
    piVar1 = DAT_00442ed0 + 4;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *piVar1 = auVar16._0_4_;
    piVar4[5] = auVar16._4_4_;
    piVar4[6] = auVar16._8_4_;
    piVar4[7] = auVar16._12_4_;
    piVar4 = DAT_00442ed0;
    pfVar2 = param_4 + 5;
    param_4 = param_4 + 6;
    param_5 = param_5 + 3;
    auVar9._8_8_ = auVar16._8_8_;
    auVar9._0_8_ = (long)((int)(*pfVar13 * 16.0) + iVar14) |
                   (long)((int)(*pfVar2 * 16.0) + iVar11) << 0x10 | (long)DAT_00442ef4 << 0x20;
    auVar6._8_8_ = in_a1_udw;
    auVar6._0_8_ = *puVar12;
    auVar16 = _pcpyld(auVar9,auVar6);
    piVar1 = DAT_00442ed0 + 4;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *piVar1 = auVar16._0_4_;
    piVar4[5] = auVar16._4_4_;
    piVar4[6] = auVar16._8_4_;
    piVar4[7] = auVar16._12_4_;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  } while (0 < param_3);
  return;
}


// ==== FUN_00267670 @ 00267670 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00267670(undefined4 param_1,float *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  ulong *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  auVar12 = _lqc2(_DAT_0043f6f0);
  auVar13 = _qmtc2(param_1);
  auVar12 = _vmul(auVar13,auVar12);
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x881dd) >> 4)) < (param_3 * 3 + 1) / 2 + 3) {
    auVar12 = _sqc2(auVar12);
    FUN_00265c38();
    auVar12 = _lqc2(auVar12);
  }
  iVar8 = DAT_00442f1c;
  iVar7 = DAT_00442f18;
  uVar3 = _DAT_00442f10;
  auVar13 = _sqc2(auVar12);
  auVar5 = _qmfc2(auVar12._0_4_);
  fStack_7c = auVar13._4_4_;
  auVar13 = _sqc2(auVar12);
  fStack_78 = auVar13._8_4_;
  auVar12 = _sqc2(auVar12);
  fStack_74 = auVar12._12_4_;
  uVar9 = (long)(int)auVar5._0_4_ | (long)(int)fStack_7c << 8 | (long)(int)fStack_78 << 0x10 |
          (long)(int)fStack_74 << 0x18 | 0x3f80000000000000;
  if ((DAT_00442ed8 != 5) || (uVar9 != DAT_00442ee0)) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 1;
    }
    puVar6 = DAT_00442ed0;
    DAT_00442ed8 = 5;
    DAT_00442ee0 = uVar9;
    *(int *)DAT_00442ed0 = (int)_DAT_00442f10;
    *(int *)((int)puVar6 + 4) = (int)((ulong)uVar3 >> 0x20);
    *(int *)(puVar6 + 1) = iVar7;
    *(int *)((int)puVar6 + 0xc) = iVar8;
    puVar2 = DAT_00442ed0;
    DAT_00442ed0[2] = DAT_00442f48;
    DAT_00442ed0[3] = uVar9;
    iVar7 = DAT_00442fdc;
    auVar4 = _DAT_00442fd0;
    puVar6 = DAT_00442ed0 + 4;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *(int *)puVar6 = DAT_00442fd0;
    *(int *)((int)puVar2 + 0x24) = auVar4._4_4_;
    *(int *)(puVar2 + 5) = auVar4._8_4_;
    *(int *)((int)puVar2 + 0x2c) = iVar7;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 2;
  }
  iVar7 = DAT_00442efc;
  fVar11 = param_2[1];
  iVar8 = DAT_00442ef8 +
          (int)(float)(int)(*param_2 * 16.0 +
                           (float)((uint)(*param_2 * 16.0) & 0x80000000 | 0x3f000000));
  *(int *)DAT_00442ed4 = (int)*DAT_00442ed4 + param_3;
  iVar7 = iVar7 + (int)(float)(int)(fVar11 * 16.0 +
                                   (float)((uint)(fVar11 * 16.0) & 0x80000000 | 0x3f000000));
  do {
    param_3 = param_3 + -1;
    *DAT_00442ed0 =
         (long)((int)(*param_4 * 16.0) + iVar8) | (long)((int)(param_4[1] * 16.0) + iVar7) << 0x10 |
         (long)DAT_00442ef4 << 0x20;
    puVar6 = DAT_00442ed0 + 3;
    pfVar10 = param_4 + 4;
    DAT_00442ed0[1] =
         (long)((int)(param_4[2] * 16.0) + iVar8) | (long)((int)(param_4[3] * 16.0) + iVar7) << 0x10
         | (long)DAT_00442ef4 << 0x20;
    pfVar1 = param_4 + 5;
    param_4 = param_4 + 6;
    DAT_00442ed0[2] =
         (long)((int)(*pfVar10 * 16.0) + iVar8) | (long)((int)(*pfVar1 * 16.0) + iVar7) << 0x10 |
         (long)DAT_00442ef4 << 0x20;
    DAT_00442ed0 = puVar6;
  } while (0 < param_3);
  return;
}


// ==== FUN_002679e8 @ 002679e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002679e8(undefined4 param_1,float *param_2,int param_3,float *param_4,undefined8 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 in_zero_qw [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_v1_udw;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  undefined8 in_a0_udw;
  ulong uVar13;
  undefined1 auVar14 [16];
  int iVar15;
  undefined8 *puVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar22 = _qmtc2(param_1);
  auVar20 = _lqc2(_DAT_0043f6f0);
  auVar20 = _vmulbc(auVar22,auVar20);
  auVar20 = _sqc2(auVar20);
  iVar19 = DAT_00442ef8 +
           (int)(float)(int)(*param_2 * 16.0 +
                            (float)((uint)(*param_2 * 16.0) & 0x80000000 | 0x3f000000));
  iVar18 = DAT_00442efc +
           (int)(float)(int)(param_2[1] * 16.0 +
                            (float)((uint)(param_2[1] * 16.0) & 0x80000000 | 0x3f000000));
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < param_3 + 5) {
    FUN_00265c38();
  }
  auVar22 = _DAT_00442f10;
  auVar20 = _lqc2(auVar20);
  auVar20 = _vftoi0(auVar20);
  auVar20 = _qmfc2(auVar20._0_4_);
  auVar20 = _ppach(in_zero_qw,auVar20);
  auVar14 = _ppacb(in_zero_qw,auVar20);
  uVar13 = auVar14._0_8_ | 0x3f80000000000000;
  if (DAT_00442ed8 == 7) {
    bVar4 = false;
    if (uVar13 == DAT_00442ee0) {
      lVar12 = 0;
      goto LAB_00267c08;
    }
  }
  if (((uint)DAT_00442ed0 & 0xf) != 0) {
    DAT_00442ed0 = DAT_00442ed0 + 2;
  }
  piVar1 = DAT_00442ed0;
  DAT_00442ed8 = 7;
  DAT_00442ee0 = uVar13;
  *DAT_00442ed0 = DAT_00442f10;
  piVar1[1] = auVar22._4_4_;
  piVar1[2] = auVar22._8_4_;
  piVar1[3] = auVar22._12_4_;
  piVar5 = DAT_00442ed0;
  bVar4 = true;
  lVar12 = (long)(int)DAT_00442ed0;
  in_v1_udw = auVar22._8_8_;
  *(undefined8 *)(DAT_00442ed0 + 4) = DAT_00442f58;
  *(ulong *)(DAT_00442ed0 + 6) = uVar13;
  iVar7 = DAT_00442ffc;
  iVar15 = DAT_00442ff8;
  uVar6 = _DAT_00442ff0;
  auVar20._8_8_ = CONCAT44(DAT_00442ffc,DAT_00442ff8);
  piVar1 = DAT_00442ed0 + 8;
  DAT_00442ed0 = DAT_00442ed0 + 8;
  *piVar1 = (int)_DAT_00442ff0;
  piVar5[9] = (int)((ulong)uVar6 >> 0x20);
  piVar5[10] = iVar15;
  piVar5[0xb] = iVar7;
  DAT_00442ed4 = DAT_00442ed0;
  DAT_00442ed0 = DAT_00442ed0 + 4;
LAB_00267c08:
  auVar22._8_8_ = in_a0_udw;
  auVar22._0_8_ = lVar12;
  if (bVar4) {
    *DAT_00442ed4 = *DAT_00442ed4 + param_3;
    pfVar17 = param_4;
    puVar16 = param_5;
  }
  else {
    pfVar17 = param_4 + 2;
    puVar16 = param_5 + 1;
    *DAT_00442ed4 = *DAT_00442ed4 + 2 + param_3;
    piVar1 = DAT_00442ed0;
    param_3 = param_3 + -1;
    auVar20 = *(undefined1 (*) [16])(DAT_00442ed0 + -4);
    *DAT_00442ed0 = auVar20._0_4_;
    piVar1[1] = auVar20._4_4_;
    piVar1[2] = auVar20._8_4_;
    piVar1[3] = auVar20._12_4_;
    piVar5 = DAT_00442ed0;
    auVar22._0_8_ = *param_5;
    auVar20._0_8_ =
         (long)((int)(*param_4 * 16.0) + iVar19) | (long)((int)(param_4[1] * 16.0) + iVar18) << 0x10
         | (long)DAT_00442ef4 << 0x20;
    auVar14 = _pcpyld(auVar20,auVar22);
    piVar1 = DAT_00442ed0 + 4;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *piVar1 = auVar14._0_4_;
    piVar5[5] = auVar14._4_4_;
    piVar5[6] = auVar14._8_4_;
    piVar5[7] = auVar14._12_4_;
    piVar5 = DAT_00442ed0;
    piVar1 = DAT_00442ed0 + 4;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *piVar1 = auVar14._0_4_;
    piVar5[5] = auVar14._4_4_;
    piVar5[6] = auVar14._8_4_;
    piVar5[7] = auVar14._12_4_;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  auVar10._8_8_ = in_v1_udw;
  auVar10._0_8_ = 0x43f700;
  iVar15 = 0;
  lVar12 = (long)DAT_00442ef4;
  auVar21 = _lqc2(_DAT_0043f700);
  auVar14._8_4_ = *param_2;
  auVar14._0_8_ = *(undefined8 *)param_2;
  auVar14._12_4_ = param_2[1];
  auVar14 = _lqc2(auVar14);
  auVar14 = _vadd(auVar14,auVar21);
  auVar21._1_7_ = 0;
  auVar21[0] = 0 < param_3;
  auVar21._8_8_ = auVar20._8_8_;
  if (0 < param_3 + -2) {
    do {
      iVar15 = iVar15 + 2;
      auVar11._8_8_ = auVar10._8_8_;
      auVar8._8_8_ = auVar21._8_8_;
      auVar11._0_8_ = *(undefined8 *)pfVar17;
      auVar8._0_8_ = *(undefined8 *)(pfVar17 + 2);
      auVar20 = _pcpyld(auVar8,auVar11);
      auVar22 = _qmtc2(auVar20._0_4_);
      uVar2 = *(undefined4 *)(puVar16 + 1);
      auVar21 = _vadd(auVar22,auVar14);
      auVar22._8_8_ = auVar20._8_8_;
      auVar20 = _vftoi4(auVar21);
      uVar3 = *(undefined4 *)((int)puVar16 + 0xc);
      auVar20 = _qmfc2(auVar20._0_4_);
      auVar20 = _ppach(in_zero_qw,auVar20);
      auVar9._0_8_ = auVar20._0_8_ & 0xffffffff | lVar12 << 0x20;
      auVar9._8_8_ = auVar8._8_8_;
      auVar22._4_4_ = *(undefined4 *)((int)puVar16 + 4);
      auVar22._0_4_ = *(undefined4 *)puVar16;
      auVar10._8_8_ = auVar20._8_8_;
      auVar21 = _pcpyld(auVar9,auVar22);
      *DAT_00442ed0 = auVar21._0_4_;
      DAT_00442ed0[1] = auVar21._4_4_;
      DAT_00442ed0[2] = auVar21._8_4_;
      DAT_00442ed0[3] = auVar21._12_4_;
      auVar21._4_4_ = uVar3;
      auVar21._0_4_ = uVar2;
      auVar21._8_8_ = auVar8._8_8_;
      auVar10._0_8_ = auVar20._0_8_ >> 0x20 | lVar12 << 0x20;
      pfVar17 = pfVar17 + 4;
      auVar20 = _pcpyld(auVar10,auVar21);
      puVar16 = puVar16 + 2;
      DAT_00442ed0[4] = auVar20._0_4_;
      DAT_00442ed0[5] = auVar20._4_4_;
      DAT_00442ed0[6] = auVar20._8_4_;
      DAT_00442ed0[7] = auVar20._12_4_;
      DAT_00442ed0 = DAT_00442ed0 + 8;
    } while (iVar15 < param_3 + -2);
    auVar21._1_7_ = 0;
    auVar21[0] = iVar15 < param_3;
  }
  if (auVar21._0_8_ != 0) {
    param_3 = param_3 - iVar15;
    do {
      param_3 = param_3 + -1;
      auVar22._0_8_ = *puVar16;
      puVar16 = puVar16 + 1;
      auVar21._0_8_ =
           (long)((int)(*pfVar17 * 16.0) + iVar19) |
           (long)((int)(pfVar17[1] * 16.0) + iVar18) << 0x10 | (long)DAT_00442ef4 << 0x20;
      pfVar17 = pfVar17 + 2;
      auVar20 = _pcpyld(auVar21,auVar22);
      *DAT_00442ed0 = auVar20._0_4_;
      DAT_00442ed0[1] = auVar20._4_4_;
      DAT_00442ed0[2] = auVar20._8_4_;
      DAT_00442ed0[3] = auVar20._12_4_;
      DAT_00442ed0 = DAT_00442ed0 + 4;
    } while (param_3 != 0);
  }
  return;
}


// ==== FUN_00267eb0 @ 00267eb0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00267eb0(undefined4 param_1,float *param_2,int param_3,float *param_4)

{
  ulong *puVar1;
  float *pfVar2;
  ulong *puVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  ulong uVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  auVar16 = _qmtc2(param_1);
  auVar15 = _lqc2(_DAT_0043f6f0);
  pfVar13 = param_4 + param_3 * 2;
  auVar15 = _vmul(auVar16,auVar15);
  iVar12 = DAT_00442ef8 +
           (int)(float)(int)(*param_2 * 16.0 +
                            (float)((uint)(*param_2 * 16.0) & 0x80000000 | 0x3f000000));
  iVar11 = DAT_00442efc +
           (int)(float)(int)(param_2[1] * 16.0 +
                            (float)((uint)(param_2[1] * 16.0) & 0x80000000 | 0x3f000000));
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x881dd) >> 4)) < (param_3 + 1) / 2 + 4) {
    auVar15 = _sqc2(auVar15);
    FUN_00265c38();
    auVar15 = _lqc2(auVar15);
  }
  iVar7 = DAT_00442f1c;
  iVar6 = DAT_00442f18;
  uVar5 = _DAT_00442f10;
  auVar16 = _sqc2(auVar15);
  auVar9 = _qmfc2(auVar15._0_4_);
  fStack_9c = auVar16._4_4_;
  auVar16 = _sqc2(auVar15);
  fStack_98 = auVar16._8_4_;
  auVar15 = _sqc2(auVar15);
  fStack_94 = auVar15._12_4_;
  uVar10 = (long)(int)auVar9._0_4_ | (long)(int)fStack_9c << 8 | (long)(int)fStack_98 << 0x10 |
           (long)(int)fStack_94 << 0x18 | 0x3f80000000000000;
  if ((DAT_00442ed8 == 9) && (uVar10 == DAT_00442ee0)) {
    bVar4 = false;
  }
  else {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 1;
    }
    puVar1 = DAT_00442ed0;
    DAT_00442ed8 = 9;
    DAT_00442ee0 = uVar10;
    *(int *)DAT_00442ed0 = (int)_DAT_00442f10;
    *(int *)((int)puVar1 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(int *)(puVar1 + 1) = iVar6;
    *(int *)((int)puVar1 + 0xc) = iVar7;
    puVar3 = DAT_00442ed0;
    bVar4 = true;
    DAT_00442ed0[2] = DAT_00442f68;
    DAT_00442ed0[3] = uVar10;
    iVar6 = DAT_0044301c;
    auVar8 = _DAT_00443010;
    puVar1 = DAT_00442ed0 + 4;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *(int *)puVar1 = DAT_00443010;
    *(int *)((int)puVar3 + 0x24) = auVar8._4_4_;
    *(int *)(puVar3 + 5) = auVar8._8_4_;
    *(int *)((int)puVar3 + 0x2c) = iVar6;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 2;
  }
  if (bVar4) {
    *(int *)DAT_00442ed4 = (int)*DAT_00442ed4 + param_3;
  }
  else {
    *(int *)DAT_00442ed4 = (int)*DAT_00442ed4 + 2 + param_3;
    *DAT_00442ed0 = DAT_00442ed0[-1];
    pfVar2 = param_4 + 1;
    fVar14 = *param_4;
    param_4 = param_4 + 2;
    DAT_00442ed0[1] =
         (long)((int)(fVar14 * 16.0) + iVar12) | (long)((int)(*pfVar2 * 16.0) + iVar11) << 0x10 |
         (long)DAT_00442ef4 << 0x20;
    puVar1 = DAT_00442ed0 + 1;
    puVar3 = DAT_00442ed0 + 2;
    DAT_00442ed0 = DAT_00442ed0 + 2;
    *puVar3 = *puVar1;
    DAT_00442ed0 = DAT_00442ed0 + 1;
  }
  do {
    pfVar2 = param_4 + 1;
    fVar14 = *param_4;
    param_4 = param_4 + 2;
    *DAT_00442ed0 =
         (long)((int)(fVar14 * 16.0) + iVar12) | (long)((int)(*pfVar2 * 16.0) + iVar11) << 0x10 |
         (long)DAT_00442ef4 << 0x20;
    DAT_00442ed0 = DAT_00442ed0 + 1;
  } while (param_4 != pfVar13);
  return;
}


// ==== FUN_00268250 @ 00268250 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00268250(long param_1)

{
  int *piVar1;
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 3) {
    FUN_00265c38();
    in_v0_udw = extraout_v0_udw;
  }
  auVar3 = _DAT_00443030;
  if (DAT_00442ed8 != 0xb) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 0xb;
    *DAT_00442ed0 = DAT_00443030;
    piVar1[1] = auVar3._4_4_;
    piVar1[2] = auVar3._8_4_;
    piVar1[3] = auVar3._12_4_;
    in_v0_udw = auVar3._8_8_;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  piVar1 = DAT_00442ed0;
  DAT_00443100 = (&DAT_00443040)[iVar8 * 4];
  iVar5 = (&DAT_00443044)[iVar8 * 4];
  iVar7 = (&DAT_00443048)[iVar8 * 4];
  iVar8 = (&DAT_0044304c)[iVar8 * 4];
  DAT_00443104 = iVar5;
  DAT_00443108 = iVar7;
  DAT_0044310c = iVar8;
  *DAT_00442ed0 = DAT_00443100;
  piVar1[1] = iVar5;
  piVar1[2] = iVar7;
  piVar1[3] = iVar8;
  piVar1 = DAT_00442ed0;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  if (param_1 == 7) {
    uVar4 = (undefined4)(DAT_0040dfd0 & 0xffffffffffffff);
    uVar6 = (uint)((DAT_0040dfd0 & 0xffffffffffffff) >> 0x20);
  }
  else {
    uVar6 = (uint)(DAT_0040dfd0 >> 0x20) | 0xff000000;
    uVar4 = (undefined4)DAT_0040dfd0;
  }
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0x4c;
  auVar3._4_4_ = uVar6;
  auVar3._0_4_ = uVar4;
  auVar3._8_4_ = iVar7;
  auVar3._12_4_ = iVar8;
  auVar3 = _pcpyld(auVar2,auVar3);
  DAT_00443140 = auVar3._0_4_;
  DAT_00443144 = auVar3._4_4_;
  DAT_00443148 = auVar3._8_4_;
  DAT_0044314c = auVar3._12_4_;
  *DAT_00442ed0 = DAT_00443140;
  piVar1[5] = auVar3._4_4_;
  piVar1[6] = auVar3._8_4_;
  piVar1[7] = auVar3._12_4_;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 2;
  return;
}


// ==== FUN_002683a0 @ 002683a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002683a0(long param_1)

{
  int *piVar1;
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 in_a0_udw;
  
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 2) {
    FUN_00265c38();
    in_v0_udw = extraout_v0_udw;
  }
  auVar3 = _DAT_00443030;
  if (DAT_00442ed8 != 0xb) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 0xb;
    *DAT_00442ed0 = DAT_00443030;
    piVar1[1] = auVar3._4_4_;
    piVar1[2] = auVar3._8_4_;
    piVar1[3] = auVar3._12_4_;
    in_v0_udw = auVar3._8_8_;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  piVar1 = DAT_00442ed0;
  if (param_1 == 0) {
    DAT_0040dff8 = DAT_0040dff8 & 0xfffffffffffffe1f | 0x120;
  }
  else {
    if (param_1 != 1) {
      uVar4 = (undefined4)DAT_0040dff8;
      uVar5 = (undefined4)(DAT_0040dff8 >> 0x20);
      goto LAB_00268490;
    }
    DAT_0040dff8 = DAT_0040dff8 & 0xfffffffffffffe1f;
  }
  uVar4 = (undefined4)DAT_0040dff8;
  uVar5 = (undefined4)(DAT_0040dff8 >> 0x20);
LAB_00268490:
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0x14;
  auVar3._4_4_ = uVar5;
  auVar3._0_4_ = uVar4;
  auVar3._8_8_ = in_a0_udw;
  auVar3 = _pcpyld(auVar2,auVar3);
  DAT_00443110 = auVar3._0_4_;
  DAT_00443114 = auVar3._4_4_;
  DAT_00443118 = auVar3._8_4_;
  DAT_0044311c = auVar3._12_4_;
  *DAT_00442ed0 = DAT_00443110;
  piVar1[1] = auVar3._4_4_;
  piVar1[2] = auVar3._8_4_;
  piVar1[3] = auVar3._12_4_;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 1;
  return;
}


// ==== FUN_002684e0 @ 002684e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002684e0(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 2) {
    FUN_00265c38();
  }
  iVar4 = DAT_0044303c;
  iVar3 = DAT_00443038;
  uVar2 = _DAT_00443030;
  if (DAT_00442ed8 != 0xb) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar1 = DAT_00442ed0;
    DAT_00442ed8 = 0xb;
    *DAT_00442ed0 = (int)_DAT_00443030;
    piVar1[1] = (int)((ulong)uVar2 >> 0x20);
    piVar1[2] = iVar3;
    piVar1[3] = iVar4;
    DAT_00442ed4 = DAT_00442ed0;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  piVar1 = DAT_00442ed0;
  iVar4 = (&DAT_004430c8)[param_1 * 4];
  iVar5 = (&DAT_004430cc)[param_1 * 4];
  DAT_00443120 = (int)*(undefined8 *)(&DAT_004430c0 + param_1 * 4);
  iVar3 = (int)((ulong)*(undefined8 *)(&DAT_004430c0 + param_1 * 4) >> 0x20);
  DAT_00443124 = iVar3;
  DAT_00443128 = iVar4;
  DAT_0044312c = iVar5;
  *DAT_00442ed0 = DAT_00443120;
  piVar1[1] = iVar3;
  piVar1[2] = iVar4;
  piVar1[3] = iVar5;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 1;
  return;
}


// ==== FUN_002685d0 @ 002685d0 ====

void FUN_002685d0(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_v0_udw;
  int in_register_0000002c;
  undefined8 in_a1_udw;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 2) {
    FUN_00265c38();
  }
  iVar9 = DAT_0044303c;
  iVar2 = DAT_00443038;
  iVar1 = DAT_00443034;
  if (DAT_00442ed8 != 0xb) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar4 = DAT_00442ed0;
    DAT_00442ed8 = 0xb;
    *DAT_00442ed0 = DAT_00443030;
    piVar4[1] = iVar1;
    piVar4[2] = iVar2;
    piVar4[3] = iVar9;
    DAT_00442ed4 = DAT_00442ed0;
    in_v0_udw = iVar2;
    in_register_0000002c = iVar9;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  piVar4 = DAT_00442ed0;
  iVar1 = *(int *)(DAT_00449438 + 0x60);
  iVar10 = (int)(*param_1 + 0.5);
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar7 = (int)(param_1[1] + 0.5);
  iVar8 = (int)(param_2[1] - 0.5);
  iVar9 = (int)(*param_2 - 0.5);
  if ((((iVar10 < iVar2) && (0 < iVar9)) && (iVar3 = *(int *)(iVar1 + 0x10), iVar7 < iVar3)) &&
     (0 < iVar8)) {
    if (iVar2 <= iVar9) {
      iVar9 = iVar2 + -1;
    }
    if (iVar3 <= iVar8) {
      iVar8 = iVar3 + -1;
    }
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
  }
  else {
    iVar10 = 0;
    iVar9 = -1;
    iVar7 = -1;
    iVar8 = 0;
  }
  auVar5._8_8_ = in_a1_udw;
  auVar5._0_8_ = 0x40;
  auVar6._8_4_ = in_v0_udw;
  auVar6._0_8_ = (long)(*(short *)(iVar1 + 0x1c) + iVar10) |
                 (long)(*(short *)(iVar1 + 0x1c) + iVar9) << 0x10 |
                 (long)(*(short *)(iVar1 + 0x1e) + iVar7) << 0x20 |
                 (long)(*(short *)(iVar1 + 0x1e) + iVar8) << 0x30;
  auVar6._12_4_ = in_register_0000002c;
  auVar6 = _pcpyld(auVar5,auVar6);
  DAT_00443130 = auVar6._0_4_;
  DAT_00443134 = auVar6._4_4_;
  DAT_00443138 = auVar6._8_4_;
  DAT_0044313c = auVar6._12_4_;
  *DAT_00442ed0 = DAT_00443130;
  piVar4[1] = auVar6._4_4_;
  piVar4[2] = auVar6._8_4_;
  piVar4[3] = auVar6._12_4_;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 1;
  return;
}


// ==== FUN_002687b8 @ 002687b8 ====

void FUN_002687b8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_v0_udw;
  int in_register_0000002c;
  undefined1 in_a3_qw [16];
  undefined8 uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar7 = in_a3_qw._8_8_;
  if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 2) {
    FUN_00265c38();
    uVar7 = in_a3_qw._8_8_;
  }
  iVar4 = DAT_0044303c;
  iVar3 = DAT_00443038;
  iVar1 = DAT_00443034;
  if (DAT_00442ed8 != 0xb) {
    if (((uint)DAT_00442ed0 & 0xf) != 0) {
      DAT_00442ed0 = DAT_00442ed0 + 2;
    }
    piVar2 = DAT_00442ed0;
    DAT_00442ed8 = 0xb;
    *DAT_00442ed0 = DAT_00443030;
    piVar2[1] = iVar1;
    piVar2[2] = iVar3;
    piVar2[3] = iVar4;
    DAT_00442ed4 = DAT_00442ed0;
    in_v0_udw = iVar3;
    in_register_0000002c = iVar4;
    DAT_00442ed0 = DAT_00442ed0 + 4;
  }
  piVar2 = DAT_00442ed0;
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = 0x40;
  iVar1 = *(int *)(DAT_00449438 + 0x60);
  auVar6._8_4_ = in_v0_udw;
  auVar6._0_8_ = CONCAT44(*(short *)(iVar1 + 0x1c) >> 0xf,(int)*(short *)(iVar1 + 0x1c)) |
                 (long)((int)*(short *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0xc) + -1) << 0x10 |
                 (long)*(short *)(iVar1 + 0x1e) << 0x20 |
                 (long)((int)*(short *)(iVar1 + 0x1e) + *(int *)(iVar1 + 0x10) + -1) << 0x30;
  auVar6._12_4_ = in_register_0000002c;
  auVar6 = _pcpyld(auVar5,auVar6);
  DAT_00443130 = auVar6._0_4_;
  DAT_00443134 = auVar6._4_4_;
  DAT_00443138 = auVar6._8_4_;
  DAT_0044313c = auVar6._12_4_;
  *DAT_00442ed0 = DAT_00443130;
  piVar2[1] = auVar6._4_4_;
  piVar2[2] = auVar6._8_4_;
  piVar2[3] = auVar6._12_4_;
  DAT_00442ed0 = DAT_00442ed0 + 4;
  *DAT_00442ed4 = *DAT_00442ed4 + 1;
  return;
}


// ==== FUN_002688e0 @ 002688e0 ====

void FUN_002688e0(float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong in_v0_udw;
  undefined1 auVar3 [16];
  undefined8 in_v1_udw;
  undefined8 in_a2_udw;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_v0_udw;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = (long)(int)(*(float *)(DAT_00449438 + 0x90) +
                            *(float *)(DAT_00449438 + 0x8c) / param_1);
  auVar3 = _pmaxw(auVar3,auVar2 << 0x40);
  auVar1._8_8_ = in_a2_udw;
  auVar1._0_8_ = (long)DAT_00442ef0;
  auVar3 = _pminw(auVar3,auVar1);
  auVar3 = _pextlw(0,auVar3._0_8_);
  DAT_00442ef4 = auVar3._0_4_;
  return;
}


// ==== FUN_00268928 @ 00268928 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00268928(void)

{
  undefined1 auVar1 [16];
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 in_a1_udw;
  uint uVar8;
  undefined8 in_a2_udw;
  undefined1 auVar9 [16];
  
  lVar7 = 2;
  lVar6 = 1;
  if (DAT_0040e594._3_1_ != '\0') {
    lVar6 = lVar7;
  }
  if ((char)DAT_0040e598 == '\0') {
    lVar7 = 0;
  }
  uVar8 = (uint)(DAT_0040e598._1_1_ == '\0') | (uint)(lVar7 << 0xc) |
          (uint)(lVar6 << 0x11) | 0x10000;
  if (DAT_00443150 != uVar8) {
    auVar9._8_8_ = in_a1_udw;
    auVar9._0_8_ = 0x47;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = uVar8;
    auVar1._8_8_ = in_a2_udw;
    auVar9 = _pcpyld(auVar9,auVar1);
    DAT_00443150 = (ulong)uVar8;
    if ((int)(0x1fe - ((uint)(DAT_00442ed0 + -0x1103ba) >> 4)) < 2) {
      FUN_00265c38();
    }
    iVar5 = DAT_0044303c;
    iVar4 = DAT_00443038;
    uVar3 = _DAT_00443030;
    if (DAT_00442ed8 != 0xb) {
      if (((uint)DAT_00442ed0 & 0xf) != 0) {
        DAT_00442ed0 = DAT_00442ed0 + 2;
      }
      piVar2 = DAT_00442ed0;
      DAT_00442ed8 = 0xb;
      *DAT_00442ed0 = (int)_DAT_00443030;
      piVar2[1] = (int)((ulong)uVar3 >> 0x20);
      piVar2[2] = iVar4;
      piVar2[3] = iVar5;
      DAT_00442ed4 = DAT_00442ed0;
      DAT_00442ed0 = DAT_00442ed0 + 4;
    }
    piVar2 = DAT_00442ed0;
    *DAT_00442ed0 = auVar9._0_4_;
    piVar2[1] = auVar9._4_4_;
    piVar2[2] = auVar9._8_4_;
    piVar2[3] = auVar9._12_4_;
    DAT_00442ed0 = DAT_00442ed0 + 4;
    *DAT_00442ed4 = *DAT_00442ed4 + 1;
  }
  return;
}


// ==== FUN_00268a50 @ 00268a50 ====

void FUN_00268a50(ulong param_1)

{
  if (param_1 != DAT_0040e594._3_1_) {
    uGpffff8da7 = (char)param_1;
    FUN_00268928();
  }
  return;
}


// ==== FUN_00268a78 @ 00268a78 ====

void FUN_00268a78(ulong param_1)

{
  if (param_1 != (byte)DAT_0040e598) {
    uGpffff8da8 = (char)param_1;
    FUN_00268928();
  }
  return;
}


// ==== FUN_00268aa0 @ 00268aa0 ====

void FUN_00268aa0(ulong param_1)

{
  if (param_1 != DAT_0040e598._1_1_) {
    uGpffff8da9 = (char)param_1;
    FUN_00268928();
  }
  return;
}


// ==== FUN_00268ac8 @ 00268ac8 ====

void FUN_00268ac8(int param_1,int param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  
  FUN_0027b408();
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
  param_2 = param_2 + DAT_0040e68c;
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0x88));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0x9c));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xb0));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xc4));
  auVar1 = _vmulbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0x8c));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xa0));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xb4));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 200));
  auVar1 = _vmulbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0x90));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xa4));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xb8));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xcc));
  auVar1 = _vmulbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0x94));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xa8));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xbc));
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar1;
  auVar1 = _qmtc2(*(undefined4 *)(param_2 + 0xd0));
  auVar1 = _vmulbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar1;
  return;
}


// ==== FUN_00268c68 @ 00268c68 ====

bool FUN_00268c68(undefined8 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,int param_10)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  uVar7 = 0;
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x114) = param_3;
  *(undefined4 *)(iVar3 + 0x118) = param_4;
  *(undefined4 *)(iVar3 + 0x10c) = param_5;
  if (param_2 != 0) {
    do {
      iVar5 = uVar7 * 0x40;
      iVar6 = uVar7 * 0x800;
      uVar7 = uVar7 + 1;
      *(int *)(iVar5 + *(int *)(iVar3 + 0x114) + 0x3c) = *(int *)(iVar3 + 0x118) + iVar6;
    } while (uVar7 < param_2);
  }
  lVar4 = FUN_0027c9a0(param_1,param_2,param_6);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    uStack_b8 = 0;
    uStack_bc = 1;
    uVar7 = 0;
    if (param_2 != 0) {
      do {
        uVar2 = CreateSema(auStack_c0);
        iVar5 = uVar7 * 0x40;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(iVar5 + *(int *)(iVar3 + 0x114) + 0x34) = uVar2;
      } while (uVar7 < param_2);
    }
    uStack_b8 = 1;
    DAT_0040eb6c = CreateSema(auStack_c0);
    DAT_0040eb70 = 0;
    FUN_0036d518();
    FUN_0036a460(4,0x2697e0,param_1);
    FUN_0036a460(5,0x269820,param_1);
    FUN_0036d568();
    do {
      FUN_0036af20(0x4926c8,0x475453,0);
      iVar3 = 0x270e;
      do {
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    } while (DAT_004926ec == 0);
    DAT_0049270c = param_9;
    DAT_00492700 = param_2;
    DAT_00492704 = param_7;
    DAT_00492708 = param_8;
    if (param_10 == 0) {
      DAT_00492710 = 0;
    }
    else {
      FUN_0035d1a0(0x492710,param_10,0x20);
    }
    FlushCache(0);
    FUN_0036b100(0x4926c8,1,0,0x492700,0x30,0x48f6c0,0x10,0);
    bVar1 = DAT_0048f6c0 != 0;
  }
  return bVar1;
}


// ==== FUN_00268ea0 @ 00268ea0 ====

void FUN_00268ea0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x28) + 0x34))
            (param_1 + *(short *)(*(int *)(param_1 + 0x28) + 0x30),0);
  return;
}


// ==== FUN_00268ed0 @ 00268ed0 ====

undefined4 FUN_00268ed0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_b0 [64];
  
  uVar2 = FUN_0027c860(param_3);
  lVar3 = FUN_0027c8b0(auStack_b0,0x40,0x40de70,uVar2,0x5c);
  if (lVar3 == 0) {
    uVar1 = 5;
  }
  else {
    uVar1 = 4;
    if ((param_4 & 0xe) == 0) {
      if ((param_4 & 0x10) == 0) {
        param_1[8] = 0;
      }
      else {
        param_1[8] = 1;
      }
      FUN_0035d1a0(0x492700,auStack_b0,0x100);
      PollSema(param_1[0xd]);
      WaitSema(DAT_0040eb6c);
      FUN_0036b100(0x4926c8,3,0,0x492700,0x40,0x492800,0x10,0);
      SignalSema(DAT_0040eb6c);
      if (DAT_00492800 < 0) {
        uVar1 = 2;
      }
      else {
        param_1[0xc] = DAT_00492800;
        *(undefined8 *)(param_1 + 4) = 0;
        uVar1 = 0;
        uVar4 = (ulong)DAT_00492804;
        param_1[0xe] = 0x800;
        *(ulong *)(param_1 + 2) = uVar4;
        *param_1 = param_2;
        param_1[6] = 1;
        param_1[7] = 0;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00269020 @ 00269020 ====

void FUN_00269020(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  DAT_00492700 = *(undefined4 *)(param_1 + 0x30);
  PollSema(*(undefined4 *)(param_1 + 0x34));
  WaitSema(DAT_0040eb6c);
  FUN_0036b100(0x4926c8,4,0,0x492700,0x10,0,0,0);
  SignalSema(DAT_0040eb6c);
  return;
}


// ==== FUN_002690a0 @ 002690a0 ====

undefined4 FUN_002690a0(int param_1,uint param_2,uint param_3)

{
  param_2 = param_2 & 0xfffffff;
  FUN_003680a0(param_2,param_2 + param_3 + -1);
  DAT_00492700 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)param_3;
  DAT_00492704 = param_3 >> 0xb;
  DAT_00492708 = param_2;
  PollSema(*(undefined4 *)(param_1 + 0x34));
  WaitSema(DAT_0040eb6c);
  FUN_0036b100(0x4926c8,5,0,0x492700,0x10,0,0,0);
  SignalSema(DAT_0040eb6c);
  return 1;
}


// ==== FUN_00269188 @ 00269188 ====

ulong FUN_00269188(undefined8 param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  param_2 = param_2 & 0xfffffff;
  iVar9 = (int)param_1;
  lVar4 = *(long *)(iVar9 + 0x10);
  lVar5 = *(long *)(iVar9 + 8);
  if (lVar4 < lVar5) {
    if (lVar5 < (long)(param_3 + lVar4)) {
      uVar2 = lVar5 + 0x7ffU & 0xfffff800;
      iVar1 = (int)lVar5 - (int)lVar4;
      if ((long)uVar2 <= (long)(lVar4 + (param_3 & 0xffffffff))) {
        iVar1 = (int)uVar2 - (int)lVar4;
      }
      param_3 = (ulong)iVar1;
      iVar1 = *(int *)(iVar9 + 0x20);
      uVar2 = (long)((int)*(undefined8 *)(iVar9 + 8) - (int)*(undefined8 *)(iVar9 + 0x10));
    }
    else {
      iVar1 = *(int *)(iVar9 + 0x20);
      uVar2 = param_3;
    }
    if (iVar1 == 0) {
      if (param_3 != 0) {
        while( true ) {
          if (*(int *)(iVar9 + 0x38) < 0x800) {
            if (*(int *)(iVar9 + 0x38) == 0) {
              lVar5 = *(long *)(iVar9 + 0x10);
              lVar4 = lVar5 + 0x7ff;
              if (-1 < lVar5) {
                lVar4 = lVar5;
              }
              *(int *)(iVar9 + 0x38) = (int)lVar5 + (int)(lVar4 >> 0xb) * -0x800;
            }
            uVar3 = (ulong)(0x800 - *(int *)(iVar9 + 0x38));
            uVar6 = param_3;
            if (uVar3 <= param_3) {
              uVar6 = uVar3;
            }
            param_3 = (ulong)((int)param_3 - (int)uVar6);
            memcpy(param_2,(*(uint *)(iVar9 + 0x3c) | 0x30000000) + *(int *)(iVar9 + 0x38),uVar6);
            lVar4 = *(long *)(iVar9 + 0x10);
            if (*(long *)(iVar9 + 8) < (long)(uVar6 + lVar4)) {
              uVar6 = (ulong)((int)*(long *)(iVar9 + 8) - (int)lVar4);
            }
            *(ulong *)(iVar9 + 0x10) = uVar6 + lVar4;
            param_2 = param_2 + (int)uVar6;
            *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (int)uVar6;
          }
          uVar7 = param_2;
          if ((0x7ff < param_3) && ((param_2 & 0xf) == 0)) {
            uVar8 = (uint)param_3 >> 0xb;
            if ((*(ulong *)(iVar9 + 0x10) & 0x7ff) == 0) {
              uVar7 = param_2 + uVar8 * 0x800;
              param_3 = (ulong)(int)((uint)param_3 + uVar8 * -0x800);
              FUN_003680a0(param_2,uVar7 - 1);
              DAT_00492700 = *(undefined4 *)(iVar9 + 0x30);
              *(undefined4 *)(iVar9 + 0x18) = 2;
              *(ulong *)(iVar9 + 0x10) = *(long *)(iVar9 + 0x10) + (ulong)(uVar8 * 0x800);
              DAT_00492704 = uVar8;
              DAT_00492708 = param_2;
              PollSema(*(undefined4 *)(iVar9 + 0x34));
              WaitSema(DAT_0040eb6c);
              FUN_0036b100(0x4926c8,5,0,0x492700,0x10,0,0,0);
              SignalSema(DAT_0040eb6c);
              (**(code **)(*(int *)(iVar9 + 0x28) + 0x34))
                        (iVar9 + *(short *)(*(int *)(iVar9 + 0x28) + 0x30),1);
            }
          }
          if (param_3 == 0) break;
          DAT_00492700 = *(undefined4 *)(iVar9 + 0x30);
          *(undefined4 *)(iVar9 + 0x18) = 2;
          DAT_00492704 = 1;
          DAT_00492708 = *(uint *)(iVar9 + 0x3c);
          PollSema(*(undefined4 *)(iVar9 + 0x34));
          WaitSema(DAT_0040eb6c);
          FUN_0036b100(0x4926c8,5,0,0x492700,0x10,0,0,0);
          SignalSema(DAT_0040eb6c);
          (**(code **)(*(int *)(iVar9 + 0x28) + 0x34))
                    (iVar9 + *(short *)(*(int *)(iVar9 + 0x28) + 0x30),1);
          lVar5 = *(long *)(iVar9 + 0x10);
          lVar4 = lVar5 + 0x7ff;
          if (-1 < lVar5) {
            lVar4 = lVar5;
          }
          *(int *)(iVar9 + 0x38) = (int)lVar5 + (int)(lVar4 >> 0xb) * -0x800;
          param_2 = uVar7;
        }
      }
    }
    else {
      FUN_002690a0(param_1,param_2,param_3);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_002694e8 @ 002694e8 ====

long FUN_002694e8(int param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_3 == 1) {
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar2 < *(long *)(param_1 + 0x10)) {
      lVar3 = lVar2;
    }
    lVar3 = lVar3 + param_2;
  }
  else if (param_3 < 2) {
    if (param_3 == 0) {
      lVar2 = *(long *)(param_1 + 8);
      lVar3 = param_2;
    }
    else {
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  else if (param_3 == 2) {
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = lVar2 - param_2;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
  }
  if ((lVar3 <= lVar2) && (lVar2 = lVar3, lVar3 < 0)) {
    lVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((long)iVar1 < 0x800) {
    lVar3 = *(long *)(param_1 + 0x10) - (long)iVar1;
    if ((lVar3 <= lVar2) && (lVar2 <= (long)(*(long *)(param_1 + 0x10) + (ulong)(0x800 - iVar1)))) {
      *(long *)(param_1 + 0x10) = lVar2;
      *(int *)(param_1 + 0x38) = (int)lVar2 - (int)lVar3;
      return lVar2;
    }
  }
  DAT_00492700 = *(undefined4 *)(param_1 + 0x30);
  lVar3 = lVar2 + 0x7ff;
  if (-1 < lVar2) {
    lVar3 = lVar2;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined4 *)(param_1 + 0x38) = 0x800;
  DAT_00492704 = (undefined4)((ulong)(lVar3 << 0x15) >> 0x20);
  DAT_00492708 = 0;
  PollSema(*(undefined4 *)(param_1 + 0x34));
  WaitSema(DAT_0040eb6c);
  FUN_0036b100(0x4926c8,6,0,0x492700,0x10,0,0,0);
  SignalSema(DAT_0040eb6c);
  if (*(int *)(param_1 + 0x20) == 0) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x34))
              (param_1 + *(short *)(*(int *)(param_1 + 0x28) + 0x30),1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
  }
  return lVar3;
}


// ==== FUN_002696a8 @ 002696a8 ====

int FUN_002696a8(int param_1,long param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x18) != 2) {
      return *(int *)(param_1 + 0x18);
    }
    do {
      WaitSema(*(undefined4 *)(param_1 + 0x34));
      if (param_2 == 0) {
        return *(int *)(param_1 + 0x18);
      }
    } while (*(int *)(param_1 + 0x18) == 2);
  }
  return *(int *)(param_1 + 0x18);
}


// ==== FUN_00269718 @ 00269718 ====

undefined4 FUN_00269718(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x18) != 2)) {
    uVar1 = 0;
  }
  else {
    if (DAT_0040eb70 != 0) {
      do {
        lVar2 = sceSifDmaStat(DAT_0040eb70);
      } while (-1 < lVar2);
      DAT_0040eb70 = 0;
    }
    DAT_0049284c = *(byte *)(param_1 + 0x30) | 0x100;
    do {
      lVar2 = FUN_0036a660(4,0x492840,0x10,0,0,0);
      DAT_0040eb70 = (int)lVar2;
    } while (lVar2 == 0);
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_002697e0 @ 002697e0 ====

void FUN_002697e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x114) + (uint)*(byte *)(param_1 + 0xc) * 0x40;
  *(undefined4 *)(iVar1 + 0x18) = 1;
  iSignalSema(*(undefined4 *)(iVar1 + 0x34));
  SYNC(0);
  EI();
  return;
}


// ==== FUN_00269880 @ 00269880 ====

void FUN_00269880(undefined8 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x114) = param_3;
  uVar3 = 0;
  *(undefined4 *)(iVar4 + 0x118) = param_4;
  if (param_2 != 0) {
    do {
      iVar1 = uVar3 * 0x40;
      iVar2 = uVar3 * 0x10000;
      uVar3 = uVar3 + 1;
      *(int *)(iVar1 + *(int *)(iVar4 + 0x114) + 0x38) = *(int *)(iVar4 + 0x118) + iVar2;
    } while (uVar3 < param_2);
  }
  *(undefined4 *)(iVar4 + 0x10c) = param_5;
  FUN_0027c9a0(param_1,param_2,param_6);
  return;
}


// ==== FUN_002698f8 @ 002698f8 ====

undefined8 FUN_002698f8(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x28) + 0x34))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x28) + 0x30),0);
  }
  return uVar1;
}


