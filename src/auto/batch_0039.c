// ==== FUN_0031d4c8 @ 0031d4c8 ====

int FUN_0031d4c8(void)

{
  uint uVar1;
  
  uVar1 = FUN_0031d510();
  if (uVar1 < uGpffff8fd8) {
    uVar1 = uVar1 - 1;
  }
  return uVar1 - uGpffff8fd8;
}


// ==== FUN_0031d510 @ 0031d510 ====

undefined4 FUN_0031d510(void)

{
  return Count;
}


// ==== FUN_0031d520 @ 0031d520 ====

undefined4 FUN_0031d520(void)

{
  return 0x11940000;
}


// ==== FUN_0031d528 @ 0031d528 ====

void FUN_0031d528(int param_1)

{
  if ((*(uint *)(param_1 + 0x54) & 0x40) == 0) {
    FUN_00324fa0();
  }
  else {
    FUN_00315ff0();
  }
  return;
}


// ==== FUN_0031d568 @ 0031d568 ====

undefined4 FUN_0031d568(void)

{
  long lVar1;
  
  uGpffff8fe4 = 0;
  uGpffff8a18 = 1;
  lVar1 = FUN_00317e40(0x5c,8,0x40,0,0x458718,0x4080a);
  if (lVar1 != 0) {
    lVar1 = FUN_00317e40(0x18,8,0x40,0,0x458740,0x4080a);
    if (lVar1 != 0) {
      lVar1 = FUN_00317e40(8,8,0x40,0,0x458768,0x4080a);
      if (lVar1 != 0) {
        uGpffff8a14 = 1;
        lVar1 = FUN_0031dc40(0,0,0x458790,0,0,0x4080a);
        iGpffff8fe0 = (int)lVar1;
        if (lVar1 != 0) {
          FUN_0031de30(lVar1,0x3cea30,0);
          *(undefined2 *)(iGpffff8fe0 + 0x46) = 1;
          uGpffff8a18 = 0;
          return 1;
        }
        FUN_00317fc0(0x458768);
      }
      FUN_00317fc0(0x458740);
    }
    FUN_00317fc0(0x458718);
  }
  uGpffff8a14 = 0;
  uGpffff8a18 = 0;
  return 0;
}


// ==== FUN_0031d6a8 @ 0031d6a8 ====

void FUN_0031d6a8(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if ((*(uint *)(iVar4 + 0xc) & 4) != 0) {
    FUN_0031db28(param_1,1);
    FUN_0031db28(param_1,2);
  }
  FUN_00316758(param_1);
  if ((*(uint *)(iVar4 + 0xc) & 4) == 0) {
    uVar3 = *(uint *)(iVar4 + 0xc);
  }
  else {
    puVar1 = *(undefined4 **)(iVar4 + 0x4c);
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    puVar1[2] = puVar1 + 1;
    puVar1[1] = puVar1 + 1;
    *puVar1 = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    uVar3 = *(uint *)(iVar4 + 0xc);
  }
  if ((uVar3 & 8) == 0) {
    *(undefined4 *)(iVar4 + 0x48) = 0;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x50);
    *(int *)(iVar2 + 4) = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(iVar4 + 0x48) = 0;
  }
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(int *)(iVar4 + 0x40) = (DAT_003c3229 + -1) * 0x10000000;
  *(undefined2 *)(iVar4 + 0x46) = 8;
  *(undefined2 *)(iVar4 + 0x44) = 0;
  *(undefined4 *)(iVar4 + 0x54) = 0;
  *(int *)(iVar4 + 0x14) = iVar4 + 0x10;
  *(int *)(iVar4 + 0x24) = iVar4 + 0x20;
  *(int *)(iVar4 + 0x10) = iVar4 + 0x10;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(int *)(iVar4 + 0x20) = iVar4 + 0x20;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  return;
}


// ==== FUN_0031d7a8 @ 0031d7a8 ====

undefined4 FUN_0031d7a8(long param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  iVar5 = *(int *)(iVar8 + 0x10);
  if (iVar5 == iVar8 + 0x10) {
    pcVar2 = *(code **)(iVar8 + 0x38);
  }
  else {
    do {
      lVar4 = FUN_0031d7a8(iVar5 + -0x18);
      if (lVar4 == 0) {
        return 0;
      }
      iVar5 = *(int *)(iVar8 + 0x10);
    } while (iVar5 != iVar8 + 0x10);
    pcVar2 = *(code **)(iVar8 + 0x38);
  }
  if (pcVar2 == (code *)0x0) {
    uVar3 = *(uint *)(iVar8 + 0xc);
  }
  else {
    (*pcVar2)(param_1);
    uVar3 = *(uint *)(iVar8 + 0xc);
  }
  if ((uVar3 & 4) == 0) {
LAB_0031d844:
    uVar3 = *(uint *)(iVar8 + 0xc);
  }
  else {
    iVar5 = *(int *)(iVar8 + 0x4c);
    iVar6 = *(int *)(iVar5 + 4);
    if (iVar6 != iVar5 + 4) {
      do {
        FUN_00311b50(iVar6 + -0x14);
        iVar6 = *(int *)(iVar5 + 4);
      } while (iVar6 != iVar5 + 4);
      goto LAB_0031d844;
    }
    uVar3 = *(uint *)(iVar8 + 0xc);
  }
  if ((uVar3 & 8) == 0) {
    iVar5 = *(int *)(iVar8 + 0x48);
  }
  else {
    piVar1 = *(int **)(iVar8 + 0x50);
    piVar7 = (int *)*piVar1;
    if (piVar7 == piVar1) {
      iVar5 = *(int *)(iVar8 + 0x48);
    }
    else {
      do {
        FUN_00323d58(piVar7 + -8);
        piVar7 = (int *)*piVar1;
      } while (piVar7 != piVar1);
      iVar5 = *(int *)(iVar8 + 0x48);
    }
  }
  if (iVar5 != 0) {
    if ((*(uint *)(iVar8 + 0xc) & 0x40) == 0) {
      if ((*(uint *)(iVar8 + 0xc) & 0x80) == 0) {
        *(undefined4 *)(iVar8 + 0x48) = 0;
      }
      else {
        FUN_003187f8();
        *(undefined4 *)(iVar8 + 0x48) = 0;
      }
    }
    else {
      FUN_00317fc0();
      *(undefined4 *)(iVar8 + 0x48) = 0;
    }
  }
  if (param_1 != 0x458790) {
    **(undefined4 **)(iVar8 + 0x1c) = *(undefined4 *)(iVar8 + 0x18);
    *(undefined4 *)(*(int *)(iVar8 + 0x18) + 4) = *(undefined4 *)(iVar8 + 0x1c);
  }
  FUN_0031e4c0(param_1);
  FUN_00316668(param_1);
  uVar3 = *(uint *)(iVar8 + 0xc);
  if (((uVar3 & 8) != 0) && ((uVar3 & 0x20) == 0)) {
    FUN_00317c20(0x458768,*(undefined4 *)(iVar8 + 0x50));
    uVar3 = *(uint *)(iVar8 + 0xc);
  }
  if ((uVar3 & 4) != 0) {
    if ((uVar3 & 0x10) != 0) {
      uVar3 = *(uint *)(iVar8 + 0xc);
      goto LAB_0031d94c;
    }
    FUN_00317c20(0x458740,*(undefined4 *)(iVar8 + 0x4c));
  }
  uVar3 = *(uint *)(iVar8 + 0xc);
LAB_0031d94c:
  if ((uVar3 & 2) != 0) {
    FUN_00317c20(0x458718,param_1);
  }
  return 1;
}


// ==== FUN_0031d988 @ 0031d988 ====

undefined8 FUN_0031d988(undefined8 param_1,long param_2,ushort param_3,long param_4,ushort param_5)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (uint)param_3;
  uVar7 = (uint)param_5;
  iVar5 = (int)param_1;
  if ((param_2 == 0) && (param_4 == 0)) {
    *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) & 0xfffffffe;
    uVar1 = FUN_00312c48((uVar6 + uVar7) * 0x18,0x3080a);
    *(undefined4 *)(*(int *)(iVar5 + 0x4c) + 0x10) = uVar1;
    iVar3 = *(int *)(*(int *)(iVar5 + 0x4c) + 0x10);
    if (iVar3 == 0) {
      param_1 = 0;
    }
    else {
      *(uint *)(*(int *)(iVar5 + 0x4c) + 0x14) = uVar6 * 0x18 + iVar3;
    }
  }
  else {
    uVar4 = 0;
    if (uVar6 != 0) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + (int)param_2;
        lVar2 = FUN_00312880(iVar3 + 0xc);
        if (lVar2 == 0) {
          return 0;
        }
        if (*(int *)(iVar3 + 0x14) == 0) {
          *(undefined1 **)(iVar3 + 0x14) = &LAB_0031e648;
        }
        uVar4 = uVar4 + 1 & 0xffff;
        iVar3 = uVar4 * 0x18;
      } while (uVar4 < uVar6);
    }
    uVar6 = 0;
    *(int *)(*(int *)(iVar5 + 0x4c) + 0x10) = (int)param_2;
    *(ushort *)(*(int *)(iVar5 + 0x4c) + 0xc) = param_3;
    if (uVar7 != 0) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + (int)param_4;
        lVar2 = FUN_00312880(iVar3 + 0xc);
        if (lVar2 == 0) {
          return 0;
        }
        if (*(int *)(iVar3 + 0x14) == 0) {
          *(undefined1 **)(iVar3 + 0x14) = &LAB_0031e648;
        }
        uVar6 = uVar6 + 1 & 0xffff;
        iVar3 = uVar6 * 0x18;
      } while (uVar6 < uVar7);
    }
    *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | 1;
    *(int *)(*(int *)(iVar5 + 0x4c) + 0x14) = (int)param_4;
    *(ushort *)(*(int *)(iVar5 + 0x4c) + 0xe) = param_5;
  }
  return param_1;
}


// ==== FUN_0031db28 @ 0031db28 ====

void FUN_0031db28(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = FUN_00312b78(0x455fd0,0);
  iVar2 = *(int *)(param_1 + 0x4c);
  if (param_2 == 1) {
    uVar5 = 0;
    uVar1 = *(ushort *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + iVar2;
        *(undefined4 *)(iVar4 + 0xc) = uVar3;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(undefined1 **)(iVar4 + 0x14) = &LAB_0031e648;
        FUN_00316758();
        uVar5 = uVar5 + 1 & 0xffff;
        iVar4 = uVar5 * 0x18;
      } while (uVar5 < uVar1);
    }
  }
  else {
    uVar5 = 0;
    uVar1 = *(ushort *)(iVar2 + 0xe);
    iVar2 = *(int *)(iVar2 + 0x14);
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + iVar2;
        *(undefined4 *)(iVar4 + 0xc) = uVar3;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(undefined1 **)(iVar4 + 0x14) = &LAB_0031e648;
        FUN_00316758();
        uVar5 = uVar5 + 1 & 0xffff;
        iVar4 = uVar5 * 0x18;
      } while (uVar5 < uVar1);
    }
  }
  return;
}


// ==== FUN_0031dc40 @ 0031dc40 ====

long FUN_0031dc40(int param_1,ulong param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  if ((param_1 == 0) && (param_1 = iGpffff8fe0, iGpffff8a18 != 0)) {
    param_1 = 0;
  }
  if (param_3 == 0) {
    param_3 = FUN_00317a78(0x458718,0x3080a);
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_3 + 0xc) = 2;
  }
  else {
    *(undefined4 *)((int)param_3 + 0xc) = 0;
  }
  iVar3 = (int)param_3;
  *(undefined4 *)(iVar3 + 0x58) = param_6;
  if ((param_2 & 4) == 0) {
LAB_0031dd18:
    if ((param_2 & 8) != 0) {
      if (param_5 == 0) {
        lVar2 = FUN_00317a78(0x458768,0x3080a);
        *(int *)(iVar3 + 0x50) = (int)lVar2;
        if (lVar2 == 0) goto LAB_0031dd48;
      }
      else {
        *(int *)(iVar3 + 0x50) = (int)param_5;
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x20;
      }
      FUN_0035c6ec(*(undefined4 *)(iVar3 + 0x50),0,8);
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 8;
    }
    FUN_0031d6a8(param_3);
    if (param_1 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(int *)(iVar3 + 0x1c) = param_1 + 0x10;
      *(undefined4 *)(iVar3 + 0x18) = uVar1;
      *(int *)(*(int *)(param_1 + 0x10) + 4) = iVar3 + 0x18;
      *(int *)(param_1 + 0x10) = iVar3 + 0x18;
    }
  }
  else {
    if (param_4 != 0) {
      *(int *)(iVar3 + 0x4c) = (int)param_4;
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x10;
LAB_0031dcfc:
      FUN_0035c6ec(*(undefined4 *)(iVar3 + 0x4c),0,0x18);
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 4;
      goto LAB_0031dd18;
    }
    lVar2 = FUN_00317a78(0x458740,0x3080a);
    *(int *)(iVar3 + 0x4c) = (int)lVar2;
    if (lVar2 != 0) goto LAB_0031dcfc;
LAB_0031dd48:
    FUN_0031e428(param_3);
    param_3 = 0;
  }
  return param_3;
}


// ==== FUN_0031ddd8 @ 0031ddd8 ====

undefined8 FUN_0031ddd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00311848(param_2,param_1,1);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    **(undefined4 **)((int)param_1 + 0x4c) = (int)param_2;
  }
  return param_1;
}


// ==== FUN_0031de30 @ 0031de30 ====

undefined8 FUN_0031de30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003165c8(param_1,param_3);
  FUN_00316618(param_1,param_2);
  return param_1;
}


// ==== FUN_0031de78 @ 0031de78 ====

undefined8 FUN_0031de78(undefined8 param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)((int)param_1 + 0x3c);
  if (pcVar1 == (code *)0x0) {
    param_1 = 0;
  }
  else {
    (*pcVar1)(0);
  }
  return param_1;
}


// ==== FUN_0031deb8 @ 0031deb8 ====

undefined8 FUN_0031deb8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 auStack_30 [4];
  
  uStack_40 = *param_2;
  uStack_38 = param_2[1];
  uVar1 = FUN_0031e0e0(param_1,auStack_30,0x31e5a0,&uStack_40,1);
  if (param_3 != 0) {
    *(undefined4 *)param_3 = auStack_30[0];
  }
  return uVar1;
}


// ==== FUN_0031df28 @ 0031df28 ====

undefined8 FUN_0031df28(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x10);
  do {
    if (puVar1 == (undefined4 *)((int)param_1 + 0x10)) {
      return 0;
    }
    puVar2 = puVar1 + -6;
    puVar1 = (undefined4 *)*puVar1;
  } while (puVar2 != param_2);
  return param_1;
}


// ==== FUN_0031df58 @ 0031df58 ====

bool FUN_0031df58(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_20;
  int iStack_1c;
  
  uStack_20 = param_2;
  iStack_1c = param_3;
  FUN_0031e0e0(param_1,0,0x31e5c8,&uStack_20,1);
  return iStack_1c != 0;
}


// ==== FUN_0031e000 @ 0031e000 ====

undefined4 FUN_0031e000(undefined4 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      lVar1 = (*(code *)*param_1)();
      uVar2 = uVar2 + 1;
      if (lVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}


// ==== FUN_0031e070 @ 0031e070 ====

undefined4 FUN_0031e070(undefined4 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      lVar1 = (*(code *)*param_1)();
      uVar2 = uVar2 + 1;
      if (lVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}


// ==== FUN_0031e0e0 @ 0031e0e0 ====

undefined4 *
FUN_0031e0e0(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar4 = puGpffff8fe0;
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = param_1;
  }
  piVar5 = (int *)param_2;
  if (param_5 == 1) {
    lVar3 = (*(code *)param_3)(puVar4,puVar4,param_4);
    if (lVar3 == 1) {
      if (param_2 == 0) {
        return puVar4;
      }
      *piVar5 = (int)puVar4;
      return puVar4;
    }
    puVar1 = (undefined4 *)puVar4[4];
  }
  else {
    puVar1 = (undefined4 *)puVar4[4];
  }
  while( true ) {
    if (puVar1 == puVar4 + 4) {
      if (param_2 != 0) {
        *piVar5 = 0;
      }
      return (undefined4 *)0x0;
    }
    puVar2 = puVar1 + -6;
    lVar3 = (*(code *)param_3)(puVar4,puVar2,param_4);
    if (lVar3 == 1) break;
    puVar2 = (undefined4 *)FUN_0031e0e0(puVar2,param_2,param_3,param_4,0);
    if (puVar2 != (undefined4 *)0x0) {
      return puVar2;
    }
    puVar1 = (undefined4 *)*puVar1;
  }
  if (param_2 == 0) {
    return puVar2;
  }
  *piVar5 = (int)puVar4;
  return puVar2;
}


// ==== FUN_0031e1f8 @ 0031e1f8 ====

undefined8 FUN_0031e1f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x48) == 0) {
    if (*(ushort *)(iVar3 + 0x46) < 2) {
      *(undefined4 *)(iVar3 + 0x48) = 1;
    }
    else if (param_3 == 0) {
      uVar1 = FUN_003186f0(param_2,*(undefined2 *)(iVar3 + 0x46),
                           1 << (*(uint *)(iVar3 + 0x40) >> 0x1c),1,0);
      *(undefined4 *)(iVar3 + 0x48) = uVar1;
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x80;
    }
    else {
      uVar1 = FUN_00317e40(param_2,*(undefined2 *)(iVar3 + 0x46),
                           1 << (*(uint *)(iVar3 + 0x40) >> 0x1c),1,0,0x3080a);
      *(undefined4 *)(iVar3 + 0x48) = uVar1;
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x40;
    }
    uVar2 = 0;
    if (*(int *)(iVar3 + 0x48) != 0) {
      uVar2 = param_1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0031e2c0 @ 0031e2c0 ====

void FUN_0031e2c0(int param_1,undefined8 param_2)

{
  if ((*(uint *)(param_1 + 0xc) & 0x40) == 0) {
    if ((*(uint *)(param_1 + 0xc) & 0x80) == 0) {
      FUN_00312c48(param_2,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      FUN_00318880(*(undefined4 *)(param_1 + 0x48),param_2);
    }
  }
  else {
    FUN_00317a78(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x58));
  }
  return;
}


// ==== FUN_0031e320 @ 0031e320 ====

void FUN_0031e320(int *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_70 [16];
  
  uVar1 = param_1[7];
  iVar2 = *param_1;
  if ((uVar1 & 8) == 0) {
    piVar4 = param_1;
    if ((uVar1 & 0x10) != 0) {
      iVar3 = FUN_003111a8(iVar2,uVar1 & 7,auStack_70);
      piVar4 = *(int **)((int)param_1 + iVar3);
    }
  }
  else {
    piVar4 = (int *)param_1[-1];
  }
  iVar3 = *(int *)(iVar2 + 0x48);
  if (iVar3 == 0) {
LAB_0031e3f4:
    if (param_2 != 0) {
      (*(code *)param_2)(piVar4,param_3);
    }
  }
  else {
    if (param_2 == 0) {
      uVar1 = *(uint *)(iVar2 + 0xc);
    }
    else {
      if ((param_1[7] & 0x20U) != 0) goto LAB_0031e3f4;
      uVar1 = *(uint *)(iVar2 + 0xc);
    }
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x80) == 0) {
        FUN_00312c70(piVar4);
      }
      else {
        FUN_00318950(iVar3,piVar4);
      }
    }
    else {
      FUN_00317c20(iVar3,piVar4);
    }
  }
  return;
}


// ==== FUN_0031e428 @ 0031e428 ====

void FUN_0031e428(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_0031e4c0();
  FUN_00316668(param_1);
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(iVar2 + 0xc);
  if (((uVar1 & 8) != 0) && ((uVar1 & 0x20) == 0)) {
    FUN_00317c20(0x458768,*(undefined4 *)(iVar2 + 0x50));
    uVar1 = *(uint *)(iVar2 + 0xc);
  }
  if ((uVar1 & 4) != 0) {
    if ((uVar1 & 0x10) != 0) {
      uVar1 = *(uint *)(iVar2 + 0xc);
      goto LAB_0031e498;
    }
    FUN_00317c20(0x458740,*(undefined4 *)(iVar2 + 0x4c));
  }
  uVar1 = *(uint *)(iVar2 + 0xc);
LAB_0031e498:
  if ((uVar1 & 2) != 0) {
    FUN_00317c20(0x458718,param_1);
  }
  return;
}


// ==== FUN_0031e4c0 @ 0031e4c0 ====

undefined8 FUN_0031e4c0(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if ((*(uint *)(iVar4 + 0xc) & 4) != 0) {
    uVar1 = *(ushort *)(*(int *)(iVar4 + 0x4c) + 0xc);
    iVar2 = *(int *)(*(int *)(iVar4 + 0x4c) + 0x10);
    if (uVar1 != 0) {
      uVar3 = (uint)uVar1;
      do {
        uVar3 = uVar3 - 1 & 0xffff;
        FUN_00316668(uVar3 * 0x18 + iVar2);
      } while (uVar3 != 0);
    }
    uVar1 = *(ushort *)(*(int *)(iVar4 + 0x4c) + 0xe);
    iVar2 = *(int *)(*(int *)(iVar4 + 0x4c) + 0x14);
    if (uVar1 != 0) {
      uVar3 = (uint)uVar1;
      do {
        uVar3 = uVar3 - 1 & 0xffff;
        FUN_00316668(uVar3 * 0x18 + iVar2);
      } while (uVar3 != 0);
    }
    if ((*(uint *)(iVar4 + 0xc) & 1) == 0) {
      FUN_00312c70(*(undefined4 *)(*(int *)(iVar4 + 0x4c) + 0x10));
      iVar2 = *(int *)(iVar4 + 0x4c);
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x4c);
    }
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0x4c) + 0x14) = 0;
  }
  return param_1;
}


// ==== FUN_0031e5a0 @ 0031e5a0 ====

bool FUN_0031e5a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00316400(*param_2,param_3);
  return lVar1 == 0;
}


// ==== FUN_0031e5c8 @ 0031e5c8 ====

undefined8 FUN_0031e5c8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  if (((((*(uint *)((int)param_2 + 0xc) & 4) != 0) && (param_3[1] != 0)) &&
      (lVar1 = FUN_00311848(*param_3,param_2,0), lVar1 != 0)) &&
     (lVar1 = FUN_00318120(param_3[1],param_2), lVar1 == 0)) {
    FUN_00318340(param_3[1]);
    param_3[1] = 0;
  }
  return 0;
}


// ==== FUN_0031e650 @ 0031e650 ====

uint FUN_0031e650(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 undefined8 param_6,uint param_7,uint param_8,uint param_9)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int aiStack_f0 [8];
  int aiStack_d0 [8];
  int iStack_b0;
  int iStack_ac;
  uint uStack_a8;
  
  if (param_8 == param_7) {
LAB_0031e99c:
    uVar9 = 0;
  }
  else {
    iStack_b0 = param_1;
    iStack_ac = param_2;
    uStack_a8 = param_7;
    if (param_8 == 0) {
      uVar9 = 0;
      FUN_00315048(param_1,aiStack_f0,1);
      aiStack_f0[0] = iStack_ac;
      FUN_00315048(param_3,aiStack_d0,1);
      aiStack_d0[0] = param_4;
      do {
        iVar7 = uVar9 * 0x4c;
        if (*(int *)(&DAT_00458828 + iVar7) != 0) {
          lVar4 = FUN_00314d60(aiStack_f0,&DAT_004587f0 + iVar7);
          if ((lVar4 != 0) && (lVar4 = FUN_00314d60(aiStack_d0,&DAT_0045880c + iVar7), lVar4 != 0))
          {
            uVar9 = 0;
            if (*(int *)(&DAT_00458828 + iVar7) != 0) {
              puVar5 = (undefined4 *)(&DAT_0045882c + iVar7);
              do {
                uVar1 = *puVar5;
                uVar9 = uVar9 + 1;
                puVar5 = puVar5 + 1;
                *param_5 = uVar1;
                param_5 = param_5 + 1;
              } while (uVar9 < *(uint *)(&DAT_00458828 + iVar7));
              return *(uint *)(&DAT_00458828 + iVar7);
            }
            return 0;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 5);
      uVar9 = 0;
      ppuVar6 = &PTR_PTR_003cffd0;
      do {
        piVar2 = (int *)*ppuVar6;
        if ((iStack_b0 == *piVar2) && (param_3 == piVar2[1])) {
          if (iStack_ac == param_4) {
            *param_5 = ppuVar6;
            return 1;
          }
          if ((piVar2[2] & 1U) != 0) {
            *param_5 = ppuVar6;
            return 1;
          }
        }
        uVar9 = uVar9 + 1;
        ppuVar6 = ppuVar6 + 2;
      } while (uVar9 < 0x33);
    }
    ppuVar6 = &PTR_PTR_003cffd0;
    puVar10 = (undefined4 *)param_6;
    puVar5 = puVar10 + param_8;
    uVar9 = 0;
    do {
      bVar3 = false;
      if ((iStack_b0 == *(int *)*ppuVar6) && (bVar3 = true, param_8 != 0)) {
        if ((undefined **)*puVar10 == ppuVar6) {
          bVar3 = false;
        }
        else {
          for (uVar8 = 1; uVar8 < param_8; uVar8 = uVar8 + 1) {
            if ((undefined **)puVar10[uVar8] == ppuVar6) {
              bVar3 = false;
              break;
            }
          }
        }
      }
      if (bVar3) {
        if (param_3 == *(int *)(*ppuVar6 + 4)) {
          if (iStack_ac == param_4) {
            *puVar5 = ppuVar6;
LAB_0031e864:
            FUN_0035c544(param_5,param_6,(param_8 + 1) * 4);
            if (param_8 != 0) {
              return param_8;
            }
            return 1;
          }
          if ((*(uint *)(*ppuVar6 + 8) & 1) != 0) {
            *puVar5 = ppuVar6;
            goto LAB_0031e864;
          }
        }
        *puVar5 = ppuVar6;
        if (param_8 == param_9) goto LAB_0031e99c;
        iVar7 = iStack_ac;
        if ((*(uint *)(*ppuVar6 + 8) & 1) != 0) {
          iVar7 = param_4;
        }
        uVar8 = FUN_0031e650(*(undefined4 *)(*ppuVar6 + 4),iVar7,param_3,param_4,param_5,param_6,
                             uStack_a8,param_8 + 1);
        if (uVar8 != 0) {
          param_9 = uVar8;
        }
      }
      uVar9 = uVar9 + 1;
      ppuVar6 = ppuVar6 + 2;
    } while (uVar9 < 0x33);
    uVar9 = 0;
    if ((param_9 != 0xffffffff) && (uVar9 = param_9, param_8 == 0)) {
      iVar7 = iGpffff8a1c * 0x4c;
      uVar9 = param_9 + 1;
      FUN_00315048(iStack_b0,&DAT_004587f0 + iVar7,1);
      FUN_00315048(param_3,&DAT_0045880c + iVar7,1);
      uVar8 = 0;
      *(int *)(&DAT_0045880c + iVar7) = param_4;
      *(int *)(&DAT_004587f0 + iVar7) = iStack_ac;
      *(uint *)(&DAT_00458828 + iVar7) = uVar9;
      if (uVar9 != 0) {
        puVar5 = (undefined4 *)(&DAT_0045882c + iVar7);
        do {
          uVar1 = *param_5;
          uVar8 = uVar8 + 1;
          param_5 = param_5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (uVar8 < uVar9);
      }
      iGpffff8a1c = iGpffff8a1c + 1;
      if (iGpffff8a1c == 5) {
        iGpffff8a1c = 0;
      }
    }
  }
  return uVar9;
}


// ==== FUN_0031e9d8 @ 0031e9d8 ====

undefined4
FUN_0031e9d8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            long param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  int aiStack_110 [4];
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  uStack_ac = param_2;
  lVar1 = FUN_00314d60(param_1,param_3);
  puVar8 = (undefined8 *)param_1;
  if (lVar1 == 0) {
    uVar5 = 0;
    ppuVar3 = &PTR_PTR_003cffd0;
    ppuVar7 = ppuVar3;
    do {
      lVar1 = FUN_003150d0(*(undefined4 *)*ppuVar3,param_1);
      uVar5 = uVar5 + 1;
      if (lVar1 != 0) {
        uVar9 = *(undefined4 *)*ppuVar7;
        goto LAB_0031ea94;
      }
      ppuVar3 = ppuVar3 + 2;
      ppuVar7 = ppuVar7 + 2;
    } while (uVar5 < 0x33);
    uVar9 = 0;
LAB_0031ea94:
    uVar5 = 0;
    ppuVar3 = &PTR_PTR_003cffd0;
    ppuVar7 = ppuVar3;
    do {
      lVar1 = FUN_003150d0(*(undefined4 *)(*ppuVar3 + 4),param_3);
      uVar5 = uVar5 + 1;
      if (lVar1 != 0) {
        uVar2 = *(undefined4 *)(*ppuVar7 + 4);
        goto LAB_0031ead4;
      }
      ppuVar3 = ppuVar3 + 2;
      ppuVar7 = ppuVar7 + 2;
    } while (uVar5 < 0x33);
    uVar2 = 0;
LAB_0031ead4:
    uVar5 = FUN_0031e650(uVar9,*(undefined4 *)puVar8,uVar2,*(undefined4 *)param_3,aiStack_110,
                         auStack_100,4,0);
    uStack_f0 = *puVar8;
    uStack_e8 = puVar8[1];
    uStack_e0 = puVar8[2];
    uStack_d8 = *(undefined4 *)(puVar8 + 3);
    uVar6 = 0;
    if (uVar5 != 0) {
      piVar4 = aiStack_110;
      do {
        FUN_00315048(*(undefined4 *)(*(int *)*piVar4 + 4),&uStack_d0,1);
        uStack_d0 = (undefined4)uStack_f0;
        if ((*(uint *)(*(int *)*piVar4 + 8) & 1) != 0) {
          uStack_d0 = *(undefined4 *)param_3;
        }
        lVar1 = (**(code **)(*piVar4 + 4))(&uStack_f0,uStack_ac,param_4,&uStack_d0,0,&uStack_b0);
        uStack_c8 = (int)lVar1;
        if (lVar1 == 0) {
          return 0;
        }
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 1;
        uStack_f0 = CONCAT44(uStack_cc,uStack_d0);
        uStack_e8 = CONCAT44(uStack_c4,(int)lVar1);
        uStack_e0 = uStack_c0;
        uStack_d8 = uStack_b8;
        param_4 = uStack_b0;
      } while (uVar6 < uVar5);
    }
    if (param_5 != 0) {
      *(undefined4 *)param_5 = uStack_b0;
    }
  }
  else {
    if (param_5 != 0) {
      *(undefined4 *)param_5 = param_4;
    }
    uStack_c8 = *(undefined4 *)(puVar8 + 1);
  }
  return uStack_c8;
}


// ==== FUN_0031ec28 @ 0031ec28 ====

uint FUN_0031ec28(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int aiStack_120 [4];
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  
  uStack_bc = param_2;
  uStack_b8 = param_3;
  uStack_b4 = param_5;
  lVar3 = FUN_00314d60(param_1,param_4);
  puVar10 = (undefined8 *)param_1;
  if (lVar3 == 0) {
    uVar6 = 0;
    ppuVar5 = &PTR_PTR_003cffd0;
    ppuVar7 = ppuVar5;
    do {
      lVar3 = FUN_003150d0(*(undefined4 *)*ppuVar5,param_1);
      uVar6 = uVar6 + 1;
      if (lVar3 != 0) {
        uVar13 = *(undefined4 *)*ppuVar7;
        goto LAB_0031ece4;
      }
      ppuVar5 = ppuVar5 + 2;
      ppuVar7 = ppuVar7 + 2;
    } while (uVar6 < 0x33);
    uVar13 = 0;
LAB_0031ece4:
    uVar6 = 0;
    ppuVar5 = &PTR_PTR_003cffd0;
    ppuVar7 = ppuVar5;
    do {
      lVar3 = FUN_003150d0(*(undefined4 *)(*ppuVar5 + 4),param_4);
      uVar6 = uVar6 + 1;
      if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(*ppuVar7 + 4);
        goto LAB_0031ed24;
      }
      ppuVar5 = ppuVar5 + 2;
      ppuVar7 = ppuVar7 + 2;
    } while (uVar6 < 0x33);
    uVar4 = 0;
LAB_0031ed24:
    puVar12 = (undefined4 *)param_4;
    uStack_b0 = FUN_0031e650(uVar13,*(undefined4 *)puVar10,uVar4,*puVar12,aiStack_120,auStack_110,4,
                             0);
    lVar8 = 0;
    uVar6 = 0;
    uStack_100 = *puVar10;
    uStack_f8 = puVar10[1];
    uStack_f0 = puVar10[2];
    iStack_e8 = *(int *)(puVar10 + 3);
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = (uint)uStack_d4._2_2_ << 0x10;
    uStack_c8 = (uint)uStack_c8._2_2_ << 0x10;
    iStack_d0 = 0;
    uStack_cc = 0;
    lVar3 = FUN_00312ca0(*(undefined4 *)(puVar10 + 1),1,0x10806);
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uStack_ac = *(uint *)(puVar10 + 1);
      uVar14 = 0;
      FUN_0035c544(lVar3,uStack_bc,uStack_ac);
      if (uStack_b0 != 0) {
        piVar11 = aiStack_120;
        lVar9 = lVar8;
        do {
          lVar8 = lVar3;
          FUN_00315048(*(undefined4 *)(*(int *)*piVar11 + 4),&uStack_e0,1);
          uStack_e0 = (undefined4)uStack_100;
          if ((*(uint *)(*(int *)*piVar11 + 8) & 1) != 0) {
            uStack_e0 = *puVar12;
          }
          uStack_d8 = (**(code **)(*piVar11 + 4))
                                (&uStack_100,uStack_bc,uStack_b8,&uStack_e0,0,&uStack_c0);
          lVar3 = lVar9;
          uVar15 = uVar6;
          if (uVar6 < uStack_d8) {
            if (lVar9 != 0) {
              FUN_00312c70(lVar9);
            }
            lVar3 = FUN_00312ca0(uStack_d8,1,0x10806);
            uVar15 = uStack_d8;
            if (lVar3 == 0) {
              if (lVar8 == 0) {
                return 0;
              }
              FUN_00312c70(lVar8);
              return 0;
            }
          }
          uVar6 = uStack_d8;
          iVar1 = puVar12[4];
          iStack_d0 = iVar1;
          uStack_cc = puVar12[5];
          uVar2 = (**(code **)(*piVar11 + 4))(&uStack_100,lVar8,0,&uStack_e0,lVar3,0);
          if (uVar6 != uVar2) {
            if (lVar3 != 0) {
              FUN_00312c70(lVar3);
            }
            if (lVar8 == 0) {
              return 0;
            }
            FUN_00312c70(lVar8);
            return 0;
          }
          if (uVar14 == uStack_b0 - 1) {
            puVar12[4] = iStack_d0;
            puVar12[5] = uStack_cc;
          }
          else if (iVar1 == 0) {
            FUN_00315180(&uStack_e0);
          }
          uVar6 = uStack_ac;
          iStack_e8 = uStack_c8;
          uVar14 = uVar14 + 1;
          piVar11 = piVar11 + 1;
          uStack_ac = uVar15;
          uStack_100 = CONCAT44(uStack_dc,uStack_e0);
          uStack_f8 = CONCAT44(uStack_d4,uStack_d8);
          uStack_f0 = CONCAT44(uStack_cc,iStack_d0);
          uStack_b8 = uStack_c0;
          lVar9 = lVar8;
        } while (uVar14 < uStack_b0);
      }
      uVar6 = uStack_d8;
      FUN_0035c544(uStack_b4,lVar3,uStack_d8);
      FUN_00312c70(lVar3);
      FUN_00312c70(lVar8);
    }
  }
  else {
    FUN_0035c544(uStack_b4,uStack_bc,*(undefined4 *)(puVar10 + 1));
    uVar6 = *(uint *)(puVar10 + 1);
  }
  return uVar6;
}


// ==== FUN_0031f008 @ 0031f008 ====

uint FUN_0031f008(uint *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar3;
  
  bVar1 = (byte)param_3[3];
  uVar5 = (uint)(bVar1 >> 3);
  if ((int)param_1[2] < 0) {
    bVar2 = (byte)param_3[3];
    bVar3 = (byte)param_1[3];
  }
  else {
    bVar3 = (byte)param_1[3];
    bVar2 = bVar1;
  }
  if ((int)*param_3 < 0) {
    uVar6 = *param_1;
  }
  else {
    uVar6 = *param_1;
  }
  uVar6 = (uint)(float)((int)((float)param_1[2] *
                             ((float)bVar2 / (float)bVar3) *
                             ((float)*(byte *)((int)param_3 + 0xd) /
                             (float)*(byte *)((int)param_1 + 0xd)) *
                             ((float)*param_3 / (float)uVar6)) + -1 + uVar5 & ~(uVar5 - 1));
  if ((int)uVar6 < 0) {
    uVar4 = param_1[2];
  }
  else {
    uVar4 = param_1[2];
  }
  uVar6 = (uint)((float)param_2 * ((float)uVar6 / (float)uVar4));
  if ((uVar6 & uVar5 - 1) != 0) {
    if (uVar5 == 0) {
      trap(7);
    }
    uVar6 = ((int)(uVar6 - (bVar1 >> 4)) / (int)uVar5) * uVar5;
  }
  return uVar6;
}


// ==== FUN_0031f210 @ 0031f210 ====

int FUN_0031f210(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                long param_6)

{
  byte bVar1;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint *puVar16;
  uint *puVar17;
  int *piVar18;
  int aiStack_80 [4];
  byte bVar2;
  
  piVar18 = aiStack_80;
  if (param_6 != 0) {
    piVar18 = (int *)param_6;
  }
  iVar6 = FUN_0031f008(param_1,param_3,param_4);
  puVar15 = (ushort *)(param_2 + (int)param_3);
  *piVar18 = iVar6;
  puVar16 = (uint *)param_1;
  uVar3 = puVar16[2];
  puVar17 = (uint *)param_4;
  bVar1 = (byte)puVar17[3];
  bVar4 = bVar1 >> 3;
  if ((int)uVar3 < 0) {
    bVar1 = (byte)puVar17[3];
    bVar2 = (byte)puVar16[3];
  }
  else {
    bVar2 = (byte)puVar16[3];
  }
  if ((int)*puVar17 < 0) {
    uVar7 = *puVar16;
  }
  else {
    uVar7 = *puVar16;
  }
  uVar7 = (int)((float)uVar3 *
               ((float)bVar1 / (float)bVar2) *
               ((float)*(byte *)((int)puVar17 + 0xd) / (float)*(byte *)((int)puVar16 + 0xd)) *
               ((float)*puVar17 / (float)uVar7)) + -1 + (uint)bVar4 & -(uint)bVar4;
  if ((int)uVar7 < 0) {
    bVar1 = (byte)puVar16[3];
  }
  else {
    bVar1 = (byte)puVar16[3];
  }
  uVar3 = (int)(uVar3 - (int)param_3) / (int)(uint)(bVar1 >> 3);
  if (bVar1 >> 3 == 0) {
    trap(7);
  }
  if ((param_5 != 0) && (puVar14 = (ushort *)((int)param_5 + *piVar18), puVar14 != (ushort *)0x0)) {
    if ((*(char *)((int)puVar16 + 0xd) == '\x01') && (*(char *)((int)puVar17 + 0xd) == '\x02')) {
      uVar13 = 0;
      if (bVar1 == 8) {
        uVar11 = 0;
        if (uVar3 != 0) {
          do {
            iVar6 = uVar13 + 1;
            uVar11 = uVar11 + 1;
            *(char *)((int)puVar14 + uVar13) = (char)*puVar15;
            uVar13 = uVar13 + 2;
            uVar5 = *puVar15;
            puVar15 = (ushort *)((int)puVar15 + 1);
            *(char *)((int)puVar14 + iVar6) = (char)uVar5;
          } while (uVar11 < uVar3);
        }
      }
      else if (uVar3 != 0) {
        do {
          uVar13 = uVar13 + 1;
          *puVar14 = *puVar15;
          uVar5 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar14[1] = uVar5;
          puVar14 = puVar14 + 2;
        } while (uVar13 < uVar3);
      }
    }
    else if ((*(char *)((int)puVar16 + 0xd) == '\x02') && (*(char *)((int)puVar17 + 0xd) == '\x01'))
    {
      if (bVar1 == 8) {
        uVar13 = 0;
        if ((puVar16[6] & 1) == 0) {
          iVar6 = 0;
          if (uVar3 != 0) {
            do {
              uVar5 = *puVar15;
              puVar9 = (undefined1 *)((int)puVar14 + iVar6);
              pcVar12 = (char *)((int)puVar15 + 1);
              uVar13 = uVar13 + 2;
              iVar6 = iVar6 + 1;
              puVar15 = puVar15 + 1;
              uVar11 = (int)(char)uVar5 + (int)*pcVar12;
              *puVar9 = (char)((int)(((int)(uVar11 * 0x10000) >> 0x10) + ((uVar11 & 0xffff) >> 0xf))
                              >> 1);
            } while (uVar13 < uVar3);
          }
        }
        else {
          uVar11 = 0;
          if (uVar3 != 0) {
            do {
              pbVar8 = (byte *)((int)puVar15 + uVar11);
              puVar9 = (undefined1 *)((int)puVar14 + uVar13);
              iVar6 = uVar11 + 1;
              uVar13 = uVar13 + 1;
              uVar11 = uVar11 + 2;
              *puVar9 = (char)((uint)*(byte *)((int)puVar15 + iVar6) + (uint)*pbVar8 >> 1);
            } while (uVar11 < uVar3);
          }
        }
      }
      else if ((puVar16[6] & 1) == 0) {
        uVar13 = 0;
        if (uVar3 != 0) {
          do {
            uVar5 = *puVar15;
            uVar13 = uVar13 + 2;
            puVar10 = puVar15 + 1;
            puVar15 = puVar15 + 2;
            *puVar14 = (ushort)(((int)(short)uVar5 + (int)(short)*puVar10) / 2);
            puVar14 = puVar14 + 1;
          } while (uVar13 < uVar3);
        }
      }
      else {
        uVar13 = 0;
        if (uVar3 != 0) {
          do {
            uVar5 = *puVar15;
            uVar13 = uVar13 + 2;
            puVar10 = puVar15 + 1;
            puVar15 = puVar15 + 2;
            *puVar14 = (ushort)((uint)uVar5 + (uint)*puVar10 >> 1);
            puVar14 = puVar14 + 1;
          } while (uVar13 < uVar3);
        }
      }
    }
    else {
      FUN_0035c544(puVar14,puVar15);
    }
  }
  return (int)(float)uVar7;
}


// ==== FUN_0031f628 @ 0031f628 ====

int FUN_0031f628(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                int *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  ushort *puVar11;
  float *pfVar12;
  uint uVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  ushort *puVar21;
  int *piVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float afStack_d0 [6];
  float afStack_b8 [6];
  int aiStack_a0 [4];
  
  pfVar12 = afStack_d0;
  piVar22 = aiStack_a0;
  if (param_6 != (int *)0x0) {
    piVar22 = param_6;
  }
  iVar5 = FUN_0031f008(param_1,param_3,param_4);
  puVar21 = (ushort *)(param_2 + (int)param_3);
  *piVar22 = iVar5;
  puVar19 = (uint *)param_4;
  puVar20 = (uint *)param_1;
  uVar16 = (uint)(byte)((byte)puVar19[3] >> 3);
  if ((int)puVar20[2] < 0) {
    bVar1 = *(byte *)((int)puVar19 + 0xd);
  }
  else {
    bVar1 = *(byte *)((int)puVar19 + 0xd);
  }
  uVar13 = (uint)bVar1;
  uVar3 = *puVar19;
  if ((int)uVar3 < 0) {
    uVar4 = *puVar20;
  }
  else {
    uVar4 = *puVar20;
  }
  uVar16 = (int)((float)puVar20[2] *
                ((float)(byte)puVar19[3] / (float)(byte)puVar20[3]) *
                ((float)bVar1 / (float)*(byte *)((int)puVar20 + 0xd)) *
                ((float)uVar3 / (float)uVar4)) + -1 + uVar16 & -uVar16;
  if ((int)uVar16 < 0) {
    iVar5 = *piVar22;
  }
  else {
    iVar5 = *piVar22;
  }
  iVar23 = (int)(float)uVar16;
  if (param_5 != 0) {
    param_5 = param_5 + iVar5;
  }
  if ((byte)puVar19[3] == 8) {
    bVar2 = (byte)puVar19[6];
    uVar16 = 2;
    uVar8 = 1;
  }
  else {
    bVar2 = (byte)puVar19[6];
    uVar16 = 4;
    uVar8 = 3;
  }
  if ((bVar2 & 1) != 0) {
    uVar16 = uVar8;
  }
  uVar6 = (uint)(byte)((byte)puVar19[3] >> 3);
  uVar8 = (iVar23 - iVar5) / (int)uVar6;
  if (uVar6 == 0) {
    trap(7);
  }
  fVar25 = 0.0;
  if (1 < uVar13) {
    uVar8 = uVar8 & -(uint)bVar1;
  }
  if (param_5 == 0) {
    iVar5 = *piVar22;
  }
  else {
    if (uVar4 != uVar3) {
      uVar6 = 0;
      if (uVar13 != 0) {
        puVar9 = puVar21;
        puVar11 = puVar21;
        do {
          if (uVar16 == 2) {
            fVar25 = (float)(int)(char)(byte)*puVar9;
            *pfVar12 = fVar25;
          }
          else if (uVar16 < 3) {
            if (uVar16 != 1) {
              return 0;
            }
            fVar25 = (float)(byte)*puVar9;
            *pfVar12 = fVar25;
          }
          else if (uVar16 == 3) {
            fVar25 = (float)*puVar11;
            *pfVar12 = fVar25;
          }
          else {
            if (uVar16 != 4) {
              return 0;
            }
            fVar25 = (float)(int)(short)*puVar11;
            *pfVar12 = fVar25;
          }
          uVar6 = uVar6 + 1;
          pfVar12 = pfVar12 + 1;
          puVar11 = puVar11 + 1;
          puVar9 = (ushort *)((int)puVar9 + 1);
        } while (uVar6 < uVar13);
      }
      fVar24 = 0.0;
      uVar6 = 0;
      if (uVar8 == 0) {
        return iVar23;
      }
      iVar5 = 0;
      do {
        fVar27 = fVar24 - (float)(uint)(int)fVar24;
        uVar17 = 0;
        fVar24 = fVar24 + (float)uVar4 / (float)uVar3;
        if (uVar13 != 0) {
          puVar9 = puVar21 + iVar5;
          puVar10 = (undefined2 *)(uVar6 * 2 + param_5);
          iVar18 = 0;
          pbVar15 = (byte *)(iVar5 + (int)puVar21);
          puVar14 = (undefined1 *)(uVar6 + param_5);
          pfVar12 = afStack_d0;
          do {
            if (uVar16 == 2) {
              uVar7 = (uint)(char)*pbVar15;
LAB_0031fa40:
              fVar25 = (float)(int)uVar7;
            }
            else {
              if (2 < uVar16) {
                if (uVar16 == 3) {
                  uVar7 = (uint)*puVar9;
                }
                else {
                  if (uVar16 != 4) goto LAB_0031fa4c;
                  uVar7 = (uint)(short)*puVar9;
                }
                goto LAB_0031fa40;
              }
              if (uVar16 == 1) {
                uVar7 = (uint)*pbVar15;
                goto LAB_0031fa40;
              }
            }
LAB_0031fa4c:
            pfVar12[6] = fVar25;
            fVar26 = fVar25 * fVar27 + *pfVar12 * (1.0 - fVar27);
            if (uVar16 == 2) {
LAB_0031fa98:
              *puVar14 = (char)(int)fVar26;
            }
            else if (2 < uVar16) {
              if ((uVar16 == 3) || (uVar16 == 4)) {
                *puVar10 = (short)(int)fVar26;
              }
            }
            else if (uVar16 == 1) goto LAB_0031fa98;
            uVar17 = uVar17 + 1;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
            uVar6 = uVar6 + 1;
            *pfVar12 = *(float *)((int)afStack_b8 + iVar18);
            iVar18 = iVar18 + 4;
            pfVar12 = pfVar12 + 1;
            puVar9 = puVar9 + 1;
            pbVar15 = pbVar15 + 1;
          } while (uVar17 < uVar13);
        }
        for (; 1.0 < fVar24; fVar24 = fVar24 - 1.0) {
          iVar5 = iVar5 + uVar13;
        }
        if (uVar8 <= uVar6) {
          return iVar23;
        }
      } while( true );
    }
    FUN_0035c544(param_5,puVar21,iVar23);
    iVar5 = *piVar22;
  }
  return iVar23 - iVar5;
}


// ==== FUN_0031fb58 @ 0031fb58 ====

uint FUN_0031fb58(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined2 *param_5,long param_6)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint auStack_80 [4];
  
  puVar16 = auStack_80;
  if (param_6 != 0) {
    puVar16 = (uint *)param_6;
  }
  uVar6 = FUN_0031f008(param_1,param_3,param_4);
  iVar15 = (int)param_3;
  puVar13 = (ushort *)(param_2 + iVar15);
  *puVar16 = uVar6;
  if (param_5 != (undefined2 *)0x0) {
    param_5 = (undefined2 *)((int)param_5 + uVar6);
  }
  iVar12 = (int)param_1;
  iVar4 = *(int *)(iVar12 + 8);
  cVar1 = *(char *)(iVar12 + 0xc);
  iVar14 = (int)param_4;
  if ((cVar1 == '\b') && (*(char *)(iVar14 + 0xc) == '\x10')) {
    uVar6 = iVar4 - iVar15;
    uVar9 = iVar4 << 1;
    if ((*(byte *)(iVar12 + 0x18) & 1) == 0) {
      if ((*(byte *)(iVar14 + 0x18) & 1) == 0) {
        if (param_5 == (undefined2 *)0x0) {
          return uVar9;
        }
        uVar11 = 0;
        if (iVar4 == iVar15) {
          return uVar9;
        }
        do {
          uVar5 = *puVar13;
          uVar11 = uVar11 + 1;
          puVar13 = (ushort *)((int)puVar13 + 1);
          *param_5 = (short)(int)(((float)(int)(char)uVar5 + 0.0) * fGpffff80c8);
          param_5 = param_5 + 1;
        } while (uVar11 < uVar6);
        return uVar9;
      }
      if (param_5 == (undefined2 *)0x0) {
        return uVar9;
      }
      uVar11 = 0;
      if (iVar4 == iVar15) {
        return uVar9;
      }
      do {
        uVar5 = *puVar13;
        uVar11 = uVar11 + 1;
        puVar13 = (ushort *)((int)puVar13 + 1);
        *param_5 = (short)(int)(((float)(int)(char)uVar5 + 128.0) * fGpffff80c4);
        param_5 = param_5 + 1;
      } while (uVar11 < uVar6);
      return uVar9;
    }
    if ((*(byte *)(iVar14 + 0x18) & 1) == 0) {
      if (param_5 == (undefined2 *)0x0) {
        return uVar9;
      }
      uVar11 = 0;
      if (iVar4 == iVar15) {
        return uVar9;
      }
      do {
        pbVar7 = (byte *)((int)puVar13 + uVar11);
        uVar11 = uVar11 + 1;
        *param_5 = (short)(int)(((float)*pbVar7 + -128.0) * fGpffff80c0);
        param_5 = param_5 + 1;
      } while (uVar11 < uVar6);
      return uVar9;
    }
    if (param_5 == (undefined2 *)0x0) {
      return uVar9;
    }
    uVar11 = 0;
    if (iVar4 == iVar15) {
      return uVar9;
    }
    do {
      pbVar7 = (byte *)((int)puVar13 + uVar11);
      uVar11 = uVar11 + 1;
      *param_5 = (short)(int)(((float)*pbVar7 + 0.0) * fGpffff80bc);
      param_5 = param_5 + 1;
    } while (uVar11 < uVar6);
    return uVar9;
  }
  if (cVar1 == '\x10') {
    if (*(char *)(iVar14 + 0xc) == '\b') {
      uVar6 = *puVar16;
      uVar11 = *(uint *)(iVar12 + 8) >> 1;
      uVar9 = uVar11 - uVar6;
      if ((*(byte *)(iVar12 + 0x18) & 1) == 0) {
        if ((*(byte *)(iVar14 + 0x18) & 1) == 0) {
          if (param_5 == (undefined2 *)0x0) {
            return uVar11;
          }
          uVar10 = 0;
          if (uVar11 == uVar6) {
            return uVar11;
          }
          do {
            uVar5 = *puVar13;
            puVar8 = (undefined1 *)((int)param_5 + uVar10);
            uVar10 = uVar10 + 1;
            puVar13 = puVar13 + 1;
            *puVar8 = (char)(int)(((float)(int)(short)uVar5 + 0.0) * 0.0038757324);
          } while (uVar10 < uVar9);
          return uVar11;
        }
        if (param_5 == (undefined2 *)0x0) {
          return uVar11;
        }
        uVar10 = 0;
        if (uVar11 == uVar6) {
          return uVar11;
        }
        do {
          uVar5 = *puVar13;
          puVar8 = (undefined1 *)((int)param_5 + uVar10);
          uVar10 = uVar10 + 1;
          puVar13 = puVar13 + 1;
          *puVar8 = (char)(int)(((float)(int)(short)uVar5 + 32768.0) * 0.0038757324);
        } while (uVar10 < uVar9);
        return uVar11;
      }
      if ((*(byte *)(iVar14 + 0x18) & 1) == 0) {
        if (param_5 == (undefined2 *)0x0) {
          return uVar11;
        }
        uVar10 = 0;
        if (uVar11 == uVar6) {
          return uVar11;
        }
        do {
          uVar5 = *puVar13;
          puVar8 = (undefined1 *)((int)param_5 + uVar10);
          uVar10 = uVar10 + 1;
          puVar13 = puVar13 + 1;
          *puVar8 = (char)(int)(((float)uVar5 + -32768.0) * 0.0038757324);
        } while (uVar10 < uVar9);
        return uVar11;
      }
      if (param_5 == (undefined2 *)0x0) {
        return uVar11;
      }
      uVar10 = 0;
      if (uVar11 == uVar6) {
        return uVar11;
      }
      do {
        uVar5 = *puVar13;
        puVar8 = (undefined1 *)((int)param_5 + uVar10);
        uVar10 = uVar10 + 1;
        puVar13 = puVar13 + 1;
        *puVar8 = (char)(int)(((float)uVar5 + 0.0) * 0.0038909912);
      } while (uVar10 < uVar9);
      return uVar11;
    }
    bVar2 = *(byte *)(iVar12 + 0x18);
  }
  else {
    bVar2 = *(byte *)(iVar12 + 0x18);
  }
  if ((bVar2 & 1) == 0) {
    if ((*(byte *)(iVar14 + 0x18) & 1) != 0) {
      uVar6 = *(uint *)(iVar12 + 8);
      if ((cVar1 == '\b') && (*(char *)(iVar14 + 0xc) == '\b')) {
        uVar9 = *puVar16;
        if (param_5 == (undefined2 *)0x0) {
          return uVar6;
        }
        uVar11 = 0;
        if (uVar6 == uVar9) {
          return uVar6;
        }
        do {
          uVar5 = *puVar13;
          puVar8 = (undefined1 *)((int)param_5 + uVar11);
          uVar11 = uVar11 + 1;
          puVar13 = (ushort *)((int)puVar13 + 1);
          *puVar8 = (char)(int)((float)(int)(char)uVar5 + 128.0);
        } while (uVar11 < uVar6 - uVar9);
        return uVar6;
      }
      if (cVar1 != '\x10') {
        return 0;
      }
      if (*(char *)(iVar14 + 0xc) != '\x10') {
        return 0;
      }
      uVar9 = *puVar16;
      if (param_5 == (undefined2 *)0x0) {
        return uVar6;
      }
      uVar11 = 0;
      if (uVar6 >> 1 == uVar9) {
        return uVar6;
      }
      do {
        uVar5 = *puVar13;
        uVar11 = uVar11 + 1;
        puVar13 = puVar13 + 1;
        *param_5 = (short)(int)((float)(int)(short)uVar5 + 32768.0);
        param_5 = param_5 + 1;
      } while (uVar11 < (uVar6 >> 1) - uVar9);
      return uVar6;
    }
    if ((bVar2 & 1) == 0) {
      cVar3 = *(char *)(iVar14 + 0xc);
      goto LAB_00320160;
    }
  }
  if ((*(byte *)(iVar14 + 0x18) & 1) == 0) {
    uVar6 = *(uint *)(iVar12 + 8);
    if ((cVar1 == '\b') && (*(char *)(iVar14 + 0xc) == '\b')) {
      uVar9 = *puVar16;
      if (param_5 == (undefined2 *)0x0) {
        return uVar6;
      }
      uVar11 = 0;
      if (uVar6 == uVar9) {
        return uVar6;
      }
      do {
        pbVar7 = (byte *)((int)puVar13 + uVar11);
        puVar8 = (undefined1 *)((int)param_5 + uVar11);
        uVar11 = uVar11 + 1;
        *puVar8 = (char)(int)((float)*pbVar7 + -128.0);
      } while (uVar11 < uVar6 - uVar9);
      return uVar6;
    }
    if (cVar1 != '\x10') {
      return 0;
    }
    if (*(char *)(iVar14 + 0xc) != '\x10') {
      return 0;
    }
    uVar9 = *puVar16;
    if (param_5 == (undefined2 *)0x0) {
      return uVar6;
    }
    uVar11 = 0;
    if (uVar6 >> 1 == uVar9) {
      return uVar6;
    }
    do {
      uVar5 = *puVar13;
      uVar11 = uVar11 + 1;
      puVar13 = puVar13 + 1;
      *param_5 = (short)(int)((float)uVar5 + -32768.0);
      param_5 = param_5 + 1;
    } while (uVar11 < (uVar6 >> 1) - uVar9);
    return uVar6;
  }
  cVar3 = *(char *)(iVar14 + 0xc);
LAB_00320160:
  uVar6 = 0;
  if (cVar1 == cVar3) {
    if (param_5 != (undefined2 *)0x0) {
      FUN_0035c544(param_5,puVar13,*(undefined4 *)(iVar12 + 8));
    }
    uVar6 = *(uint *)(iVar12 + 8);
  }
  return uVar6;
}


// ==== FUN_003201a8 @ 003201a8 ====

undefined4
FUN_003201a8(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5,
            undefined4 *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  uint *puVar11;
  long lVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [4];
  
  lVar12 = 0;
  uVar4 = *(undefined4 *)(param_1 + 1);
  uStack_e0 = *param_1;
  uVar7 = param_1[1];
  uStack_d0 = param_1[2];
  uStack_c8 = *(undefined4 *)(param_1 + 3);
  if (param_6 == (undefined4 *)0x0) {
    param_6 = auStack_a0;
  }
  else {
    *param_6 = param_3;
  }
  puVar11 = (uint *)param_4;
  bVar8 = (byte)puVar11[3];
  uStack_d8._4_1_ = (byte)(uVar7 >> 0x20);
  bVar10 = uStack_d8._4_1_;
  bVar1 = uStack_d8._4_1_ == bVar8;
  lVar5 = param_5;
  uStack_d8 = uVar7;
  auStack_a0[0] = param_3;
  if (bVar1) {
LAB_003203e4:
    if (((byte)uStack_c8 & 1) == ((byte)puVar11[6] & 1)) goto LAB_00320428;
  }
  else {
    uVar2 = *puVar11;
    if ((uint)uStack_e0 != uVar2) {
      uStack_d8._0_4_ = (int)uVar7;
      uStack_d8._4_4_ = (uint)(uVar7 >> 0x20);
      if (param_5 != 0) {
        uStack_bc = (undefined4)((ulong)uStack_e0 >> 0x20);
        iStack_b8 = (int)uStack_d8;
        uStack_b4 = uStack_d8._4_4_;
        uVar3 = uStack_b4;
        if ((int)uStack_d8 < 0) {
          bVar10 = (byte)puVar11[3];
        }
        else {
          bVar10 = (byte)puVar11[3];
        }
        uStack_b4._1_1_ = (byte)(uVar7 >> 0x28);
        uVar6 = uStack_d8._4_4_ & 0xff;
        uVar9 = (uint)uStack_b4._1_1_;
        uStack_c0 = uVar2;
        uStack_b4 = uVar3;
        uStack_b0 = uStack_d0;
        uStack_a8 = uStack_c8;
        lVar5 = FUN_00312ca0((int)(float)((int)((float)(uVar7 & 0xffffffff) *
                                               ((float)bVar10 / (float)uVar6) *
                                               ((float)*(byte *)((int)puVar11 + 0xd) / (float)uVar9)
                                               * ((float)*puVar11 / (float)uVar2)) + -1 +
                                          (uint)(bVar8 >> 3) & -(uint)(bVar8 >> 3)),1,0x10806);
        if (lVar5 == 0) {
          return 0;
        }
        bVar8 = (byte)puVar11[3];
        lVar12 = lVar5;
        bVar10 = uStack_d8._4_1_;
        uVar7 = uStack_d8;
      }
    }
    uStack_d8 = uVar7;
    if (bVar10 == bVar8) goto LAB_003203e4;
  }
  uVar4 = FUN_0031fb58(&uStack_e0,param_2,param_3,param_4,lVar5,param_6);
  uStack_d8._0_5_ = CONCAT14((char)puVar11[3],uVar4);
  param_3 = *param_6;
LAB_00320428:
  if (lVar12 != 0) {
    lVar5 = param_5;
    param_2 = lVar12;
  }
  if ((uint)uStack_e0 != *puVar11) {
    uVar4 = FUN_0031f628(&uStack_e0,param_2,param_3,param_4,lVar5,param_6);
  }
  if (lVar12 != 0) {
    FUN_00312c70(lVar12);
  }
  return uVar4;
}


// ==== FUN_003204a0 @ 003204a0 ====

int FUN_003204a0(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,int param_5,
                int *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  int iStack_c0;
  uint uStack_bc;
  int iStack_b8;
  int *piStack_b4;
  int iStack_b0;
  
  piStack_b4 = param_6;
  if (param_6 == (int *)0x0) {
    piStack_b4 = &iStack_c0;
  }
  iVar2 = (int)param_1;
  uStack_bc = param_3;
  iStack_b8 = param_5;
  lVar4 = FUN_00316400(*(undefined4 *)(iVar2 + 4),0x4092e0);
  iVar7 = (int)param_2;
  if (lVar4 == 0) {
    iVar15 = (int)param_4;
    lVar4 = FUN_00316400(*(undefined4 *)(iVar15 + 4),0x409300);
    if (lVar4 == 0) {
      if (*(byte *)(iVar2 + 0xd) == 0) {
        trap(7);
      }
      uVar3 = *(int *)(iVar2 + 8) / (int)(uint)*(byte *)(iVar2 + 0xd);
      iVar1 = (uVar3 >> 1) + 0xd;
      *piStack_b4 = (int)((uStack_bc >> 1) + 0xd) / 0xe << 3;
      uVar5 = (uint)*(byte *)(iVar2 + 0xd);
      iVar13 = (iVar1 / 0xe) * 8;
      iStack_b0 = iVar13 * (uint)*(byte *)(iVar2 + 0xd);
      uVar16 = CONCAT44(iVar1 % 0xe >> 0x1f,iStack_b0 >> 0x1f);
      if (iStack_b8 == 0) {
        return iStack_b0;
      }
      if (1 < *(byte *)(iVar15 + 0xd)) {
        param_2 = FUN_00312ca0(1,*(undefined4 *)(iVar2 + 8),0x10806);
        if (param_2 == 0) {
          return 0;
        }
        uVar3 = uVar3 & 0xfffffffe;
        uVar5 = 0;
        if (*(char *)(iVar2 + 0xd) != '\0') {
          iVar1 = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12 + 1;
            puVar8 = (undefined2 *)(iVar7 + iVar1);
            uVar16 = CONCAT44((int)(uVar16 >> 0x20),(int)(uVar3 * uVar12) >> 0x1f);
            puVar10 = (undefined2 *)(uVar3 * uVar12 + (int)param_2);
            for (uVar5 = uVar3; uVar5 != 0; uVar5 = uVar5 - 2) {
              *puVar10 = *puVar8;
              puVar10 = puVar10 + 1;
              puVar8 = puVar8 + *(byte *)(iVar2 + 0xd);
            }
            uVar5 = (uint)*(byte *)(iVar2 + 0xd);
            iVar1 = uVar6 * 2;
            uVar12 = uVar6;
          } while (uVar6 < uVar5);
        }
      }
      uVar12 = 0;
      if (uVar5 != 0) {
        iVar1 = (int)param_2 + uStack_bc;
        iVar14 = uVar3 - uStack_bc;
        iVar7 = iStack_b8;
        do {
          FUN_0035c6ec(iVar7,0,iVar13);
          lVar4 = FUN_00320868(iVar1,iVar14,param_1,param_4);
          if (lVar4 == 0) goto LAB_0032082c;
          uVar12 = uVar12 + 1;
          FUN_00320ad0(iVar1,iVar14,iVar7,1,0,iVar13 - *piStack_b4);
          iVar1 = iVar1 + uVar3;
          iVar7 = iVar7 + iVar13;
        } while (uVar12 < *(byte *)(iVar2 + 0xd));
      }
      if (*(byte *)(iVar15 + 0xd) < 2) {
        return iStack_b0;
      }
      uVar3 = 0;
      if (*(char *)(iVar15 + 0xd) != '\0') {
        iVar2 = 0;
        uVar5 = 0;
        do {
          uVar12 = uVar5 + 1;
          puVar11 = (undefined8 *)((int)param_2 + iVar2);
          lVar4 = ((long)iStack_b8 | uVar16) + (long)(int)(iVar13 * uVar5);
          puVar9 = (undefined8 *)lVar4;
          uVar16 = (ulong)(int)((ulong)lVar4 >> 0x20);
          for (iVar2 = iVar13; iVar2 != 0; iVar2 = iVar2 + -8) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + *(byte *)(iVar15 + 0xd);
          }
          uVar3 = (uint)*(byte *)(iVar15 + 0xd);
          iVar2 = uVar12 * 8;
          uVar5 = uVar12;
        } while (uVar12 < uVar3);
      }
      FUN_0035c544(iStack_b8,param_2,iVar13 * uVar3);
      FUN_00312c70(param_2);
      return iStack_b0;
    }
  }
  *piStack_b4 = (uStack_bc >> 3) * 0x1c;
  if ((*(uint **)(iVar2 + 0x10) == (uint *)0x0) || (*(int *)(iVar2 + 0x14) != 0x60)) {
    uVar3 = (*(uint *)(iVar2 + 8) >> 3) * 0x1c >> 1;
  }
  else {
    uVar3 = **(uint **)(iVar2 + 0x10);
    uVar3 = uVar3 >> 0x18 | uVar3 >> 8 & 0xff00 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  }
  iStack_b0 = uVar3 << 1;
  iVar15 = iStack_b0;
  if (iStack_b8 != 0) {
    if (*(int *)(iVar2 + 0x10) == 0) {
LAB_0032082c:
      iVar15 = 0;
    }
    else {
      iVar15 = 0;
      if (*(int *)(iVar2 + 0x14) == 0x60) {
        iStack_b8 = iStack_b8 + *piStack_b4;
        iVar7 = iVar7 + uStack_bc;
        FUN_0035c6ec(iStack_b8,0,iStack_b0);
        FUN_00321068(param_1,iVar7,iStack_b8);
        iVar15 = iStack_b0;
      }
    }
  }
  return iVar15;
}


// ==== FUN_00320868 @ 00320868 ====

/* WARNING: Removing unreachable block (ram,0x0032097c) */

undefined4 FUN_00320868(ushort *param_1,uint param_2,int param_3,undefined8 param_4)

{
  float *pfVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = (int)param_4;
  if (*(uint *)(iVar8 + 0x14) < 0x60) {
    FUN_00315180(param_4);
  }
  if (*(int *)(iVar8 + 0x10) == 0) {
    lVar4 = FUN_00312c48(0x60,0x30806);
    *(int *)(iVar8 + 0x10) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar8 + 0x14) = 0x60;
    puVar2 = *(uint **)(iVar8 + 0x10);
  }
  else {
    puVar2 = *(uint **)(iVar8 + 0x10);
  }
  FUN_0035c6ec(puVar2,0,0x60);
  lVar4 = FUN_00316400(*(undefined4 *)(param_3 + 4),0x4092d0);
  if (lVar4 == 0) {
    uVar3 = param_2 * 7 >> 2;
  }
  else {
    lVar4 = FUN_00316400(*(undefined4 *)(param_3 + 4),0x4092e0);
    uVar3 = 0;
    if (lVar4 == 0) {
      if (*(char *)(param_3 + 0xc) == '\x10') {
        uVar3 = param_2 >> 1;
      }
      else {
        uVar3 = param_2;
        if (*(char *)(param_3 + 0xc) != '\b') {
          uVar3 = 0;
        }
      }
    }
  }
  *puVar2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  pfVar6 = (float *)&DAT_003cfeb8;
  puVar5 = puVar2 + 7;
  uVar7 = 0;
  uVar3 = ((int)uVar3 / 0xe) * 0x10 + (int)uVar3 % 0xe + 1;
  puVar2[1] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
              (uVar3 & 0xfe) << 0x18;
  do {
    uVar7 = uVar7 + 1;
    *(ushort *)puVar5 =
         (ushort)(byte)((uint)(int)(*pfVar6 * 2048.0) >> 8) | (short)(int)(*pfVar6 * 2048.0) << 8;
    pfVar1 = pfVar6 + 1;
    pfVar6 = pfVar6 + 2;
    *(ushort *)((int)puVar5 + 2) =
         (ushort)(byte)((uint)(int)(*pfVar1 * 2048.0) >> 8) | (short)(int)(*pfVar1 * 2048.0) << 8;
    puVar5 = puVar5 + 1;
  } while (uVar7 < 8);
  *(ushort *)(puVar2 + 0x10) = *param_1 >> 8 | *param_1 << 8;
  *(ushort *)((int)puVar2 + 0x42) = param_1[1] >> 8 | param_1[1] << 8;
  return 0x60;
}


// ==== FUN_00320ad0 @ 00320ad0 ====

int FUN_00320ad0(int param_1,uint param_2,ulong *param_3,char param_4,char param_5)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float afStack_1a0 [16];
  float afStack_160 [16];
  undefined8 uStack_120;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  ulong *puStack_104;
  uint uStack_100;
  ulong *puStack_fc;
  int iStack_f8;
  float *pfStack_f4;
  byte *pbStack_f0;
  int iStack_ec;
  undefined4 *puStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  iVar11 = (int)param_4;
  iVar12 = (int)(param_2 >> 1) / iVar11;
  iStack_10c = (int)param_5;
  psVar13 = (short *)(param_1 + iStack_10c * 2);
  uVar18 = 0;
  if (iVar11 == 0) {
    trap(7);
  }
  uVar17 = iVar12 - 2;
  uStack_100 = (iVar12 + 0xd) / 0xe;
  iStack_110 = param_1;
  puStack_104 = param_3;
  iStack_108 = FUN_00312c48(uStack_100,0x10806);
  iStack_ec = iVar11 * 2;
  psVar14 = psVar13 + iVar11;
  psVar15 = psVar14 + iVar11;
  fVar26 = (float)(int)*psVar13 * 3.0517578e-05;
  fVar28 = (float)(int)*psVar14 * 3.0517578e-05;
  if (uStack_100 != 0) {
    do {
      uVar16 = 0xe;
      if (uVar17 < 0xe) {
        uVar16 = uVar17;
      }
      uVar20 = uVar18 + 1;
      FUN_0035c6ec(afStack_1a0,0,0x38);
      uVar17 = uVar17 - uVar16;
      uVar8 = 0;
      pfVar5 = afStack_1a0;
      if (uVar16 != 0) {
        do {
          sVar1 = *psVar15;
          uVar8 = uVar8 + 1;
          psVar15 = (short *)((int)psVar15 + iStack_ec);
          *pfVar5 = (float)(int)sVar1 * 3.0517578e-05;
          pfVar5 = pfVar5 + 1;
        } while (uVar8 < uVar16);
      }
      uVar8 = 0xffffffff;
      iVar2 = 0;
      fVar24 = DAT_0040e210;
      uVar16 = 0;
      do {
        uVar9 = 0;
        uVar4 = uVar16 + 1;
        fVar27 = 0.0;
        fVar23 = fVar26;
        fVar21 = fVar28;
        pfVar5 = afStack_1a0;
        do {
          fVar25 = fVar21;
          fVar21 = *pfVar5;
          fVar22 = ABS(fVar21 - (*(float *)((int)&DAT_003cfeb8 + iVar2) * fVar25 +
                                *(float *)((int)&DAT_003cfebc + iVar2) * fVar23));
          if (fVar22 < fVar27) {
            fVar22 = fVar27;
          }
          uVar9 = uVar9 + 1;
          pfVar5 = pfVar5 + 1;
          fVar27 = fVar22;
          fVar23 = fVar25;
        } while (uVar9 < 0xe);
        if (fVar24 < fVar22) {
          fVar22 = fVar24;
          uVar16 = uVar8;
        }
        uVar8 = uVar16;
        iVar2 = uVar4 * 8;
        fVar24 = fVar22;
        uVar16 = uVar4;
      } while (uVar4 < 8);
      *(char *)(iStack_108 + uVar18) = (char)uVar8;
      fVar26 = fVar25;
      fVar28 = fVar21;
      uVar18 = uVar20;
    } while (uVar20 < uStack_100);
  }
  iStack_ec = iVar11 * 2;
  uVar18 = iVar12 - 2;
  psVar13 = (short *)(iStack_110 + iStack_10c * 2);
  fVar28 = 0.0;
  psVar14 = psVar13 + iVar11;
  fVar27 = 0.0;
  psVar15 = psVar14 + iVar11;
  fVar24 = (float)(int)*psVar13 * 3.0517578e-05;
  iStack_f8 = uStack_100 << 3;
  fVar26 = (float)(int)*psVar14 * 3.0517578e-05;
  if (uStack_100 != 0) {
    pfStack_f4 = afStack_160;
    pbStack_f0 = (byte *)((int)&uStack_120 + 1);
    lVar7 = 0x7fff;
    uVar17 = 0;
    do {
      uVar16 = 0xe;
      if (uVar18 < 0xe) {
        uVar16 = uVar18;
      }
      uStack_d0 = (undefined4)lVar7;
      uStack_cc = (undefined4)((ulong)lVar7 >> 0x20);
      FUN_0035c6ec(afStack_1a0,0,0x38);
      pbVar10 = pbStack_f0;
      uVar20 = uVar17 + 1;
      uVar18 = uVar18 - uVar16;
      uVar8 = 0;
      puStack_fc = puStack_104 + 1;
      lVar7 = CONCAT44(uStack_cc,uStack_d0);
      pbVar19 = (byte *)(iStack_108 + uVar17);
      pfVar5 = afStack_1a0;
      if (uVar16 != 0) {
        do {
          sVar1 = *psVar15;
          uVar8 = uVar8 + 1;
          psVar15 = (short *)((int)psVar15 + iStack_ec);
          *pfVar5 = (float)(int)sVar1 * 3.0517578e-05;
          pfVar5 = pfVar5 + 1;
        } while (uVar8 < uVar16);
      }
      uVar17 = 0;
      fVar23 = 0.0;
      fVar21 = fVar24;
      pfVar5 = pfStack_f4;
      pfVar3 = afStack_1a0;
      do {
        fVar24 = fVar26;
        fVar26 = *pfVar3;
        fVar21 = (fVar26 - ((float)(&DAT_003cfeb8)[(uint)*pbVar19 * 2] * fVar24 +
                           (float)(&DAT_003cfebc)[(uint)*pbVar19 * 2] * fVar21)) * fGpffff80cc;
        fVar22 = ABS(fVar21);
        *pfVar5 = fVar21;
        if (fVar22 <= fVar23) {
          fVar22 = fVar23;
        }
        uVar17 = uVar17 + 1;
        pfVar5 = pfVar5 + 1;
        pfVar3 = pfVar3 + 1;
        fVar23 = fVar22;
        fVar21 = fVar24;
      } while (uVar17 < 0xe);
      lVar6 = (long)(int)fVar22;
      if (lVar7 < (int)fVar22) {
        lVar6 = lVar7;
      }
      if (lVar6 <= lVar7) {
        lVar6 = 0;
      }
      iVar12 = 0xc;
      if (((int)lVar6 + 0x800U & 0x4000) == 0) {
        uVar17 = 0x4000;
        for (iVar12 = 0xb; -1 < iVar12; iVar12 = iVar12 + -1) {
          if (((int)lVar6 + (uVar17 >> 4) & uVar17 >> 1) != 0) goto LAB_00320ecc;
          uVar17 = uVar17 >> 1;
        }
LAB_00320ed4:
        iVar12 = 0;
      }
      else {
LAB_00320ecc:
        if (iVar12 < 0) goto LAB_00320ed4;
        if (0xc < iVar12) {
          iVar12 = 0xc;
        }
      }
      uVar17 = 0;
      uStack_120 = (ulong)(byte)(*pbVar19 << 4 | (byte)iVar12);
      if (uVar16 != 0) {
        puStack_e0 = &DAT_003cfebc;
        uStack_dc = 0;
        fVar21 = (float)FUN_0036f230(1L << (long)(int)(0xcU - iVar12));
        lVar7 = CONCAT44(uStack_cc,uStack_d0);
        fVar23 = fVar27;
        pfVar5 = pfStack_f4;
        do {
          fVar27 = fVar28;
          fVar28 = *pfVar5 - ((float)(&DAT_003cfeb8)[(uint)*pbVar19 * 2] * fVar27 +
                             (float)puStack_e0[(uint)*pbVar19 * 2] * fVar23);
          uVar8 = 0x8000;
          if (lVar7 < (int)((int)(fVar28 * fVar21) + 0x800U & 0xfffff000)) {
            uVar8 = 0x7fff;
          }
          if ((uVar17 & 1) == 0) {
            *pbVar10 = (byte)(uVar8 >> 8) & 0xf0;
          }
          else {
            *pbVar10 = *pbVar10 | (byte)(uVar8 >> 0xc);
            pbVar10 = pbVar10 + 1;
          }
          uVar17 = uVar17 + 1;
          pfVar5 = pfVar5 + 1;
          fVar28 = (float)((int)uVar8 >> (0xcU - iVar12 & 0x1f)) - fVar28;
          fVar23 = fVar27;
        } while (uVar17 < uVar16);
      }
      *puStack_104 = uStack_120;
      puStack_104 = puStack_fc;
      uVar17 = uVar20;
    } while (uVar20 < uStack_100);
  }
  FUN_00312c70(iStack_108);
  return iStack_f8;
}


// ==== FUN_00321068 @ 00321068 ====

/* WARNING: Removing unreachable block (ram,0x00321108) */

void FUN_00321068(int param_1,byte *param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint *puVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint *puVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 unaff_s0;
  uint uVar15;
  undefined8 unaff_s1;
  uint uVar16;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar17;
  ushort auStack_90 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar9 = auStack_90;
  uVar10 = 0;
  uStack_30 = (int)unaff_s2;
  uStack_2c = (int)((ulong)unaff_s2 >> 0x20);
  uStack_10 = (int)unaff_s0;
  uStack_c = (int)((ulong)unaff_s0 >> 0x20);
  uStack_20 = (int)unaff_s1;
  uStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  uStack_40 = (int)unaff_s3;
  uStack_3c = (int)((ulong)unaff_s3 >> 0x20);
  uStack_50 = (int)unaff_s4;
  uStack_4c = (int)((ulong)unaff_s4 >> 0x20);
  uStack_60 = (int)unaff_s5;
  uStack_5c = (int)((ulong)unaff_s5 >> 0x20);
  uStack_70 = (int)unaff_s6;
  uStack_6c = (int)((ulong)unaff_s6 >> 0x20);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar7 = *puVar4;
  puVar8 = puVar4 + 7;
  uVar7 = uVar7 >> 0x18 | uVar7 >> 8 & 0xff00 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  uVar16 = uVar7 - 2;
  do {
    uVar15 = *puVar8;
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)((int)puVar8 + 2);
    *puVar9 = (ushort)uVar15 >> 8 | (ushort)uVar15 << 8;
    puVar9 = puVar9 + 1;
  } while (uVar10 < 0x10);
  uVar7 = (int)(uVar7 + 0xb) / 0xe;
  uVar6 = (ushort)puVar4[0x10] >> 8 | (ushort)puVar4[0x10] << 8;
  uVar5 = *(ushort *)((int)puVar4 + 0x42) >> 8 | *(ushort *)((int)puVar4 + 0x42) << 8;
  iVar14 = (int)(short)uVar6;
  *param_3 = uVar6;
  iVar11 = (int)(short)uVar5;
  param_3[1] = uVar5;
  uVar10 = 0;
  param_3 = param_3 + 2;
  if (uVar7 != 0) {
    bVar1 = *param_2;
    while( true ) {
      uVar10 = uVar10 + 1;
      uVar15 = 0xe;
      if (uVar16 < 0xe) {
        uVar15 = uVar16;
      }
      param_2 = param_2 + 1;
      uVar16 = uVar16 - uVar15;
      uVar13 = 0;
      uVar5 = auStack_90[(uint)(bVar1 >> 4) * 2];
      sVar3 = *(short *)((int)auStack_90 + ((uint)(bVar1 >> 4) * 4 | 2));
      if (uVar15 != 0) {
        do {
          iVar12 = iVar11;
          bVar2 = *param_2;
          iVar17 = (int)sVar3;
          if ((uVar13 & 1) == 0) {
            iVar11 = 0x8000;
            if (0x7fff < (((int)((uint)bVar2 << 0x18) >> 0x1c) << (bVar1 & 0xf)) +
                         ((short)uVar5 * iVar12 >> 0xb) + (iVar17 * iVar14 >> 0xb)) {
              iVar11 = 0x7fff;
            }
          }
          else {
            param_2 = param_2 + 1;
            iVar11 = 0x8000;
            if (0x7fff < (((int)((uint)bVar2 << 0x1c) >> 0x1c) << (bVar1 & 0xf)) +
                         ((short)uVar5 * iVar12 >> 0xb) + (iVar17 * iVar14 >> 0xb)) {
              iVar11 = 0x7fff;
            }
          }
          *param_3 = (ushort)iVar11;
          uVar13 = uVar13 + 1;
          param_3 = param_3 + 1;
          iVar14 = iVar12;
        } while (uVar13 < uVar15);
      }
      if (uVar7 <= uVar10) break;
      bVar1 = *param_2;
    }
  }
  return;
}


// ==== FUN_00321290 @ 00321290 ====

uint FUN_00321290(int param_1,long param_2,int param_3,int param_4,long param_5,uint *param_6)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uStack_c0;
  int iStack_bc;
  int iStack_b8;
  uint *puStack_b4;
  uint uStack_b0;
  
  puStack_b4 = param_6;
  if (param_6 == (uint *)0x0) {
    puStack_b4 = &uStack_c0;
  }
  iStack_bc = param_3;
  iStack_b8 = param_4;
  lVar2 = FUN_00316400(*(undefined4 *)(param_1 + 4),0x4092e0);
  iVar6 = (int)param_2;
  iVar15 = (int)param_5;
  if ((lVar2 == 0) && (lVar2 = FUN_00316400(*(undefined4 *)(iStack_b8 + 4),0x4092d0), lVar2 == 0)) {
    if (*(byte *)(param_1 + 0xd) == 0) {
      trap(7);
    }
    uVar4 = *(int *)(param_1 + 8) / (int)(uint)*(byte *)(param_1 + 0xd);
    *puStack_b4 = (iStack_bc << 1) / 7 + 0xfU & 0xfffffff0;
    uVar3 = (uint)*(byte *)(param_1 + 0xd);
    uVar14 = (int)(uVar4 << 1) / 7 + 0xfU & 0xfffffff0;
    uStack_b0 = uVar14 * *(byte *)(param_1 + 0xd);
    if (param_5 != 0) {
      if (1 < *(byte *)(iStack_b8 + 0xd)) {
        param_2 = FUN_00312ca0(1,*(undefined4 *)(param_1 + 8),0x10806);
        if (param_2 == 0) {
          return 0;
        }
        uVar4 = uVar4 & 0xfffffffe;
        uVar3 = 0;
        if (*(char *)(param_1 + 0xd) != '\0') {
          iVar1 = 0;
          uVar13 = 0;
          do {
            uVar5 = uVar13 + 1;
            puVar11 = (undefined2 *)(iVar6 + iVar1);
            puVar8 = (undefined2 *)(uVar4 * uVar13 + (int)param_2);
            for (uVar3 = uVar4; uVar3 != 0; uVar3 = uVar3 - 2) {
              *puVar8 = *puVar11;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + *(byte *)(param_1 + 0xd);
            }
            uVar3 = (uint)*(byte *)(param_1 + 0xd);
            iVar1 = uVar5 * 2;
            uVar13 = uVar5;
          } while (uVar5 < uVar3);
        }
      }
      uVar13 = 0;
      if (uVar3 != 0) {
        iVar1 = 0;
        iVar6 = (int)param_2 + iStack_bc;
        do {
          uVar13 = uVar13 + 1;
          iVar9 = iVar15 + *puStack_b4 + iVar1;
          iVar1 = iVar1 + uVar14;
          FUN_0035c6ec(iVar9,0,uVar14);
          FUN_00322068(iVar6,uVar4 - iStack_bc,iVar9,1,0,uVar14 - *puStack_b4);
          iVar6 = iVar6 + uVar4;
        } while (uVar13 < *(byte *)(param_1 + 0xd));
      }
      if (1 < *(byte *)(iStack_b8 + 0xd)) {
        uVar4 = 0;
        if (*(char *)(iStack_b8 + 0xd) != '\0') {
          iVar6 = 0;
          uVar3 = 0;
          do {
            uVar13 = uVar3 + 1;
            puVar10 = (undefined8 *)((int)param_2 + iVar6);
            puVar12 = (undefined8 *)(uVar14 * uVar3 + iVar15);
            for (uVar4 = uVar14; uVar4 != 0; uVar4 = uVar4 - 0x10) {
              uVar7 = puVar12[1];
              *puVar10 = *puVar12;
              puVar10[1] = uVar7;
              puVar12 = puVar12 + 2;
              puVar10 = puVar10 + (uint)*(byte *)(iStack_b8 + 0xd) * 2;
            }
            uVar4 = (uint)*(byte *)(iStack_b8 + 0xd);
            iVar6 = uVar13 * 0x10;
            uVar3 = uVar13;
          } while (uVar13 < uVar4);
        }
        FUN_0035c544(param_5,param_2,uVar14 * uVar4);
        FUN_00312c70(param_2);
      }
    }
  }
  else {
    uVar4 = (uint)(iStack_bc * 7) >> 1;
    *puStack_b4 = uVar4;
    uStack_b0 = (uint)(*(int *)(param_1 + 8) * 7) >> 1;
    if (param_5 != 0) {
      FUN_0035c6ec(iVar15 + uVar4,0,uStack_b0 - uVar4);
      FUN_00322230(iVar6 + iStack_bc,iVar15 + uVar4,*(uint *)(param_1 + 8) >> 4);
    }
  }
  return uStack_b0;
}


// ==== FUN_00321600 @ 00321600 ====

void FUN_00321600(short *param_1,byte *param_2,int *param_3,int *param_4,float *param_5,
                 float *param_6)

{
  bool bVar1;
  short sVar2;
  float *pfVar3;
  short *psVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  byte *pbVar18;
  uint in_hi;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float afStack_340 [8];
  undefined1 auStack_320 [560];
  short asStack_f0 [32];
  undefined1 *puStack_b0;
  
  pfVar7 = afStack_340;
  iVar13 = 0x1b;
  puStack_b0 = auStack_320;
  psVar4 = asStack_f0;
  do {
    if (*param_1 < 0x7800) {
      if (*param_1 < -0x7800) {
        *psVar4 = -0x7800;
      }
      else {
        *psVar4 = *param_1;
      }
    }
    else {
      *psVar4 = 0x77ff;
    }
    psVar4 = psVar4 + 1;
    iVar13 = iVar13 + -1;
    param_1 = param_1 + 1;
  } while (-1 < iVar13);
  pfVar3 = (float *)&DAT_003cfe68;
  iVar10 = 0;
  pbVar18 = param_2 + 2;
  pfVar12 = (float *)&DAT_003cfe6c;
  iVar11 = 0;
  fVar20 = fGpffff80d0;
  iVar13 = 0;
  while( true ) {
    iVar17 = *param_3;
    pfVar5 = (float *)(puStack_b0 + iVar11);
    iVar9 = *param_4;
    *pfVar7 = 0.0;
    iVar14 = 0x1b;
    fVar22 = *pfVar3;
    fVar21 = *pfVar12;
    psVar4 = asStack_f0;
    do {
      iVar8 = iVar17;
      fVar19 = (float)(int)*psVar4 + fVar22 * (float)iVar8 + fVar21 * (float)iVar9;
      *pfVar5 = fVar19;
      fVar19 = ABS(fVar19);
      if (*pfVar7 < fVar19) {
        *pfVar7 = fVar19;
      }
      pfVar5 = pfVar5 + 1;
      sVar2 = *psVar4;
      iVar14 = iVar14 + -1;
      psVar4 = psVar4 + 1;
      iVar9 = iVar8;
      iVar17 = (int)sVar2;
    } while (-1 < iVar14);
    fVar21 = *pfVar7;
    iVar17 = iVar10;
    if (fVar20 <= fVar21) {
      fVar21 = fVar20;
      iVar17 = iVar13;
    }
    bVar1 = iVar10 == 0;
    iVar10 = iVar10 + 1;
    if ((bVar1) && (afStack_340[0] <= 7.0)) break;
    pfVar7 = pfVar7 + 1;
    pfVar12 = pfVar12 + 2;
    pfVar3 = pfVar3 + 2;
    iVar11 = iVar11 + 0x70;
    fVar20 = fVar21;
    iVar13 = iVar17;
    if (4 < iVar10) {
LAB_00321794:
      *param_3 = (int)sVar2;
      iVar13 = (int)afStack_340[iVar17];
      *param_4 = iVar8;
      if (iVar13 < 0x8000) {
        if (iVar13 < -0x8000) {
          iVar13 = 0;
        }
      }
      else {
        iVar13 = 0x7fff;
      }
      lVar16 = 0;
      if ((iVar13 + 0x800U & 0x4000) == 0) {
        iVar10 = 1;
        uVar15 = 0x4000;
        while( true ) {
          lVar16 = (long)iVar10;
          if ((0xb < lVar16) || ((iVar13 + ((int)uVar15 >> 4) & (int)uVar15 >> 1) != 0)) break;
          iVar10 = iVar10 + 1;
          uVar15 = (int)uVar15 >> 1;
        }
      }
      *param_2 = (byte)(iVar17 << 4) | (byte)lVar16 & 0xf;
      param_2[1] = 0;
      uVar15 = 0;
      fVar20 = (float)FUN_0036f230(1L << lVar16);
      pfVar7 = (float *)(((uint)puStack_b0 | in_hi) + iVar17 * 0x70);
      do {
        fVar21 = *pfVar7 + (float)(&DAT_003cfe68)[iVar17 * 2] * *param_5 +
                 (float)(&DAT_003cfe6c)[iVar17 * 2] * *param_6;
        uVar6 = (int)(fVar21 * fVar20) + 0x800U & 0xfffff000;
        if ((int)uVar6 < 0x8000) {
          if ((int)uVar6 < -0x8000) {
            uVar6 = 0xffff8000;
          }
        }
        else {
          uVar6 = 0x7fff;
        }
        if ((uVar15 & 1) == 0) {
          *pbVar18 = (byte)((int)uVar6 >> 0xc) & 0xf;
        }
        else {
          *pbVar18 = *pbVar18 | (byte)(uVar6 >> 8) & 0xf0;
          pbVar18 = pbVar18 + 1;
        }
        uVar15 = uVar15 + 1;
        *param_6 = *param_5;
        pfVar7 = pfVar7 + 1;
        *param_5 = (float)((int)uVar6 >> ((uint)lVar16 & 0x1f)) - fVar21;
      } while ((int)uVar15 < 0x1c);
      return;
    }
  }
  iVar17 = 0;
  goto LAB_00321794;
}


// ==== FUN_00321960 @ 00321960 ====

/* WARNING: Removing unreachable block (ram,0x00321c9c) */
/* WARNING: Removing unreachable block (ram,0x00321c58) */

int FUN_00321960(undefined8 param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                int *param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  int *piStack_b0;
  int iStack_ac;
  
  piStack_b0 = param_6;
  if (param_6 == (int *)0x0) {
    piStack_b0 = &iStack_c0;
  }
  iVar13 = (int)param_1;
  iStack_ac = 0;
  iStack_bc = param_2;
  uStack_b8 = param_3;
  uStack_b4 = param_5;
  lVar5 = FUN_00316400(*(undefined4 *)(iVar13 + 4),0x4092e0);
  if (lVar5 == 0) {
    iVar18 = (int)param_4;
    lVar5 = FUN_00316400(*(undefined4 *)(iVar18 + 4),0x409310);
    if ((lVar5 == 0) || (lVar5 = FUN_00316400(*(undefined4 *)(iVar18 + 4),0x409370), lVar5 == 0)) {
      uVar7 = (uStack_b8 >> 1) + 0x3f >> 6;
      if (*(byte *)(iVar13 + 0xd) == 0) {
        trap(7);
      }
      uVar17 = *(int *)(iVar13 + 8) / (int)(uint)*(byte *)(iVar13 + 0xd);
      *piStack_b0 = uVar7 * 0x24;
      uVar9 = (uint)*(byte *)(iVar13 + 0xd);
      iVar3 = ((uVar17 >> 1) + 0x3f >> 6) * 0x24;
      lVar5 = (long)iVar3 * (long)(int)(uint)*(byte *)(iVar13 + 0xd);
      uVar19 = (ulong)(int)((ulong)lVar5 >> 0x20);
      iStack_ac = (int)lVar5 + uVar7 * -0x24;
      if (uStack_b4 == 0) {
        return iStack_ac;
      }
      iVar4 = iStack_bc;
      if (1 < *(byte *)(iVar18 + 0xd)) {
        iVar4 = FUN_00312ca0(1,*(undefined4 *)(iVar13 + 8),0x10806);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = 0;
        uVar17 = uVar17 & 0xfffffffe;
        uVar9 = 0;
        if (*(char *)(iVar13 + 0xd) != '\0') {
          do {
            uVar15 = uVar7 + 1;
            puVar12 = (undefined2 *)(iStack_bc + uVar7 * 2);
            uVar19 = (ulong)(uint)((int)(uVar17 * uVar7) >> 0x1f);
            puVar10 = (undefined2 *)(uVar17 * uVar7 + iVar4);
            for (uVar7 = uVar17; uVar7 != 0; uVar7 = uVar7 - 2) {
              *puVar10 = *puVar12;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + *(byte *)(iVar13 + 0xd);
            }
            uVar9 = (uint)*(byte *)(iVar13 + 0xd);
            uVar7 = uVar15;
          } while (uVar15 < uVar9);
        }
      }
      uVar7 = 0;
      if (uVar9 != 0) {
        iVar16 = 0;
        iVar8 = iVar4 + uStack_b8;
        do {
          uVar7 = uVar7 + 1;
          iVar11 = uStack_b4 + *piStack_b0 + iVar16;
          iVar16 = iVar16 + iVar3;
          FUN_0035c6ec(iVar11,0,iVar3);
          FUN_003224e8(iVar8,uVar17 - uStack_b8,iVar11,1,0,iVar3 - *piStack_b0);
          iVar8 = iVar8 + uVar17;
        } while (uVar7 < *(byte *)(iVar13 + 0xd));
      }
      if (*(byte *)(iVar18 + 0xd) < 2) {
        return iStack_ac;
      }
      uVar7 = 0;
      uVar6 = FUN_00314630(param_4);
      if (*(char *)(iVar18 + 0xd) == '\0') {
        bVar2 = *(byte *)(iVar18 + 0xd);
      }
      else {
        do {
          uVar17 = uVar7 + 1;
          iVar14 = (int)uVar6;
          iVar13 = iVar14 * uVar7;
          iVar11 = iVar13 + iVar4;
          iVar16 = (uStack_b4 | (uint)uVar19) + iVar3 * uVar7;
          for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 - iVar14) {
            FUN_0035c544(iVar11,iVar16,uVar6);
            iVar13 = iVar14 * (uint)*(byte *)(iVar18 + 0xd);
            iVar11 = iVar13 + iVar11;
            iVar16 = iVar16 + iVar14;
          }
          uVar19 = (ulong)(uint)(iVar13 >> 0x1f);
          uVar7 = uVar17;
        } while (uVar17 < *(byte *)(iVar18 + 0xd));
        bVar2 = *(byte *)(iVar18 + 0xd);
      }
      FUN_0035c544(uStack_b4,iVar4,iVar3 * (uint)bVar2);
      FUN_00312c70(iVar4);
      return iStack_ac;
    }
    cVar1 = *(char *)(iVar13 + 0xd);
  }
  else {
    cVar1 = *(char *)(iVar13 + 0xd);
  }
  if (cVar1 == '\x01') {
    *piStack_b0 = (int)uStack_b8 / 0x24 << 7;
    iStack_ac = *(int *)(iVar13 + 8) / 0x24 << 7;
  }
  else if (cVar1 == '\x02') {
    *piStack_b0 = (int)uStack_b8 / 0x48 << 8;
    iStack_ac = *(int *)(iVar13 + 8) / 0x48 << 8;
  }
  iStack_ac = iStack_ac - *piStack_b0;
  if (uStack_b4 != 0) {
    uStack_b4 = uStack_b4 + *piStack_b0;
    FUN_0035c6ec(uStack_b4,0,iStack_ac);
    iStack_bc = iStack_bc + uStack_b8;
    FUN_00322558(param_1,iStack_bc,uStack_b4);
  }
  return iStack_ac;
}


// ==== FUN_00321d58 @ 00321d58 ====

undefined4 FUN_00321d58(uint *param_1,short *param_2,long param_3)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  uint uStack_a4;
  
  iVar5 = (int)param_3 + -1;
  if (param_3 == 0) {
LAB_00321ea8:
    uVar3 = 1;
  }
  else {
    uVar7 = *param_1;
    while( true ) {
      uStack_ac = uVar7 >> 0x10 & 0x7f;
      sVar2 = (short)param_1[1];
      uStack_a4 = param_1[1] >> 0x10 & 0x7f;
      iStack_b0 = (int)(short)uVar7;
      iStack_a8 = (int)sVar2;
      param_1 = param_1 + 2;
      if ((0x58 < uStack_ac) || (0x58 < uStack_a4)) break;
      iVar5 = iVar5 + -1;
      *param_2 = (short)uVar7;
      param_2[1] = sVar2;
      param_2 = param_2 + 2;
      uVar7 = *param_1;
      iVar9 = 0;
      while( true ) {
        iVar8 = 0;
        uVar6 = param_1[1];
        param_1 = param_1 + 2;
        while( true ) {
          bVar1 = iVar8 < 8;
          if (iVar9 == 7) {
            bVar1 = iVar8 < 7;
          }
          uVar4 = uVar7 & 0xf;
          if (!bVar1) break;
          uVar7 = uVar7 >> 4;
          FUN_003225d0(uVar4,&iStack_b0,&uStack_ac);
          iVar8 = iVar8 + 1;
          uVar4 = uVar6 & 0xf;
          uVar6 = uVar6 >> 4;
          FUN_003225d0(uVar4,&iStack_a8,&uStack_a4);
          *param_2 = (short)iStack_b0;
          param_2[1] = (short)iStack_a8;
          param_2 = param_2 + 2;
        }
        if (7 < iVar9 + 1) break;
        uVar7 = *param_1;
        iVar9 = iVar9 + 1;
      }
      if (iVar5 == -1) goto LAB_00321ea8;
      uVar7 = *param_1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00321ee0 @ 00321ee0 ====

undefined4 FUN_00321ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_20 [4];
  
  FUN_0031e9d8(param_1,param_2,param_4,param_3,auStack_20);
  return auStack_20[0];
}


// ==== FUN_00321f10 @ 00321f10 ====

void FUN_00321f10(void)

{
  FUN_0031e9d8();
  return;
}


// ==== FUN_00321f30 @ 00321f30 ====

uint FUN_00321f30(int param_1,int param_2,uint param_3,undefined8 param_4,long param_5,uint *param_6
                 )

{
  short sVar1;
  long lVar2;
  uint uVar3;
  short *psVar4;
  float *pfVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint *puVar9;
  float fVar10;
  uint auStack_70 [4];
  
  puVar9 = auStack_70;
  if (param_6 != (uint *)0x0) {
    puVar9 = param_6;
  }
  auStack_70[0] = 0;
  lVar2 = FUN_00316400(*(undefined4 *)(param_1 + 4),0x4092e0);
  uVar3 = *(uint *)(param_1 + 8);
  if (lVar2 == 0) {
    pfVar5 = (float *)((int)param_5 + param_3 * 2);
    *puVar9 = param_3 * 2;
    uVar3 = uVar3 * 2;
    psVar4 = (short *)(param_2 + param_3);
    uVar8 = uVar3 + param_3 * -2 >> 2;
    if ((param_5 != 0) && (uVar6 = 0, uVar8 != 0)) {
      do {
        sVar1 = *psVar4;
        uVar6 = uVar6 + 1;
        psVar4 = psVar4 + 1;
        *pfVar5 = (float)(int)sVar1 * 3.0517578e-05;
        pfVar5 = pfVar5 + 1;
      } while (uVar6 < uVar8);
    }
  }
  else {
    uVar8 = param_3 >> 1;
    puVar7 = (undefined2 *)((int)param_5 + uVar8);
    *puVar9 = uVar8;
    uVar3 = uVar3 >> 1;
    pfVar5 = (float *)(param_2 + param_3);
    uVar8 = uVar3 - uVar8 >> 1;
    if ((param_5 != 0) && (uVar6 = 0, uVar8 != 0)) {
      do {
        fVar10 = *pfVar5;
        uVar6 = uVar6 + 1;
        pfVar5 = pfVar5 + 1;
        *puVar7 = (short)(int)(fVar10 * 32768.0);
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar8);
    }
  }
  return uVar3;
}


// ==== FUN_00322068 @ 00322068 ====

int FUN_00322068(int param_1,uint param_2,undefined8 *param_3,char param_4,char param_5,int param_6)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined6 uStack_11e;
  undefined8 uStack_118;
  undefined2 auStack_110 [32];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  int iStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  
  iStack_bc = (int)param_5;
  uStack_b8 = param_2 >> 1;
  iVar9 = 0;
  iVar8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  if (0xf < param_6) {
    puStack_b0 = &uStack_d0;
    iStack_b4 = param_4 * 0x1c;
    puStack_ac = &uStack_cc;
    puStack_a8 = &uStack_c8;
    iVar2 = iVar9;
    iStack_c0 = param_1;
    do {
      iVar9 = iVar2 + 0x10;
      iVar7 = uStack_b8 - iVar8;
      if (0x1c < iVar7) {
        iVar7 = 0x1c;
      }
      iVar5 = 0;
      if (0 < iVar7) {
        puVar6 = (undefined2 *)((iVar8 + iStack_bc) * 2 + iStack_c0);
        iVar4 = iVar7;
        puVar3 = auStack_110;
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + param_4;
          iVar4 = iVar4 + -1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
          iVar5 = iVar7;
        } while (iVar4 != 0);
      }
      if (iVar5 < 0x1c) {
        puVar3 = auStack_110 + iVar5;
        do {
          *puVar3 = 0;
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar5 < 0x1c);
      }
      FUN_00321600(auStack_110,&uStack_120,puStack_b0,puStack_ac,puStack_a8,&uStack_c4);
      uStack_11f = 2;
      iVar8 = iVar8 + iStack_b4;
      iVar7 = iVar2 + 0x20;
      *param_3 = CONCAT62(uStack_11e,CONCAT11(2,uStack_120));
      param_3[1] = uStack_118;
      iVar2 = iVar9;
      param_3 = param_3 + 2;
    } while (iVar7 <= param_6);
  }
  return iVar9;
}


// ==== FUN_00322230 @ 00322230 ====

void FUN_00322230(byte *param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = 0;
  iVar5 = 0;
  while (param_3 != 0) {
    bVar1 = *param_1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 2;
    iVar6 = (uint)(bVar1 >> 4) * 8;
    uVar7 = 0x1c - (bVar1 & 0xf);
    iVar2 = *(int *)(&DAT_003cfe94 + iVar6);
    iVar6 = *(int *)(&DAT_003cfe90 + iVar6);
    iVar8 = 0xd;
    do {
      iVar8 = iVar8 + -1;
      iVar3 = iVar5 * iVar6 + iVar4 * iVar2 +
              (((int)((uint)*param_1 << 0x1c) >> 0x1c) << (uVar7 & 0x1f));
      iVar4 = iVar3 >> 0x10;
      *param_2 = (short)((uint)iVar3 >> 0x10);
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar3 = iVar4 * iVar6 + iVar5 * iVar2 +
              (((int)((uint)(bVar1 >> 4) << 0x1c) >> 0x1c) << (uVar7 & 0x1f));
      iVar5 = iVar3 >> 0x10;
      param_2[1] = (short)((uint)iVar3 >> 0x10);
      param_2 = param_2 + 2;
    } while (-1 < iVar8);
  }
  return;
}


// ==== FUN_00322340 @ 00322340 ====

int FUN_00322340(undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5,
                int *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_c0 [16];
  int aiStack_b0 [4];
  
  piVar4 = aiStack_b0;
  if (param_6 != (int *)0x0) {
    piVar4 = param_6;
  }
  iVar1 = *(int *)((int)param_1 + 8);
  *piVar4 = param_3;
  iVar2 = iVar1 * (uint)*(byte *)((int)param_1 + 0xd);
  if (param_5 != 0) {
    FUN_0035c6ec(auStack_c0,0,4);
    iVar5 = (int)param_5 + *piVar4;
    FUN_0035c6ec(iVar5,0,iVar1);
    lVar3 = FUN_00320868(auStack_c0,iVar1 - param_3,param_1,param_4);
    if (lVar3 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_00322430(param_2 + param_3,iVar1 - param_3,iVar5);
    }
  }
  return iVar2;
}


// ==== FUN_00322430 @ 00322430 ====

int FUN_00322430(byte *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_2 + 0x1e;
  if (-1 < param_2 + 0xf) {
    iVar3 = param_2 + 0xf;
  }
  iVar3 = iVar3 >> 4;
  iVar6 = 0;
  if (0 < iVar3) {
    bVar1 = *param_1;
    while( true ) {
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 2;
      iVar5 = 0;
      bVar1 = bVar1 & 0xf0 | 0xc - (bVar1 & 0xf);
      *param_3 = bVar1;
      while( true ) {
        iVar5 = iVar5 + 1;
        param_3 = param_3 + 1;
        iVar4 = 6;
        do {
          bVar2 = *param_1;
          iVar4 = iVar4 + -1;
          param_1 = param_1 + 1;
          *param_3 = bVar2 >> 4 | bVar2 << 4;
          param_3 = param_3 + 1;
        } while (-1 < iVar4);
        if (1 < iVar5) break;
        *param_3 = bVar1;
      }
      if (iVar3 <= iVar6) break;
      bVar1 = *param_1;
    }
  }
  return iVar3 << 4;
}


// ==== FUN_003224e8 @ 003224e8 ====

undefined8 FUN_003224e8(undefined8 param_1,int param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_4;
  iVar1 = (param_2 >> 1) / iVar3;
  if (iVar3 == 0) {
    trap(7);
  }
  uVar2 = 0;
  if (iVar3 == 1) {
    uVar2 = FUN_003228d0(param_1,param_3,iVar1);
  }
  else if (iVar3 == 2) {
    uVar2 = FUN_00322a00(param_1,param_3,iVar1);
  }
  return uVar2;
}


// ==== FUN_00322558 @ 00322558 ====

void FUN_00322558(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xd);
  if (uVar1 * 0x24 == 0) {
    trap(7);
  }
  if (uVar1 == 1) {
    FUN_00322690(param_2,param_3);
  }
  else if (uVar1 == 2) {
    FUN_00321d58(param_2,param_3,*(int *)(param_1 + 8) / (int)(uVar1 * 0x24));
  }
  return;
}


// ==== FUN_003225d0 @ 003225d0 ====

void FUN_003225d0(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = ((param_1 & 7) * 2 + 1) * (int)*(short *)(&DAT_003cff18 + *param_3 * 2) >> 3;
  if ((param_1 & 8) == 0) {
    iVar1 = *param_2 + uVar2;
  }
  else {
    iVar1 = *param_2 - uVar2;
  }
  *param_2 = iVar1;
  if (*param_2 < -0x8000) {
    *param_2 = -0x8000;
  }
  else if (0x7fff < *param_2) {
    *param_2 = 0x7fff;
  }
  iVar1 = *param_3 + (int)*(short *)(&DAT_003cfef8 + param_1 * 2);
  *param_3 = iVar1;
  if (iVar1 < 0) {
    *param_3 = 0;
    return;
  }
  if (0x58 < iVar1) {
    *param_3 = 0x58;
  }
  return;
}


// ==== FUN_00322690 @ 00322690 ====

undefined4 FUN_00322690(uint *param_1,short *param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iStack_b0;
  uint auStack_ac [3];
  
  iVar4 = (int)param_3 + -1;
  if (param_3 == 0) {
LAB_00322780:
    uVar2 = 1;
  }
  else {
    uVar5 = *param_1;
    while( true ) {
      param_1 = param_1 + 1;
      auStack_ac[0] = uVar5 >> 0x10 & 0x7f;
      iStack_b0 = (int)(short)uVar5;
      if (0x58 < auStack_ac[0]) break;
      iVar4 = iVar4 + -1;
      *param_2 = (short)uVar5;
      param_2 = param_2 + 1;
      uVar5 = *param_1;
      iVar7 = 0;
      while( true ) {
        iVar6 = 0;
        param_1 = param_1 + 1;
        while( true ) {
          bVar1 = iVar6 < 8;
          if (iVar7 == 7) {
            bVar1 = iVar6 < 7;
          }
          uVar3 = uVar5 & 0xf;
          if (!bVar1) break;
          uVar5 = uVar5 >> 4;
          FUN_003225d0(uVar3,&iStack_b0,auStack_ac);
          iVar6 = iVar6 + 1;
          *param_2 = (short)iStack_b0;
          param_2 = param_2 + 1;
        }
        if (7 < iVar7 + 1) break;
        uVar5 = *param_1;
        iVar7 = iVar7 + 1;
      }
      if (iVar4 == -1) goto LAB_00322780;
      uVar5 = *param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_003227b8 @ 003227b8 ====

uint FUN_003227b8(short param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  uVar3 = 0;
  iVar2 = iVar5 - *param_2;
  iVar1 = (uint)*(ushort *)(&DAT_003cff18 + *param_3 * 2) << 0x10;
  if (iVar2 < 0) {
    uVar3 = 8;
    iVar2 = -iVar2;
  }
  if (iVar1 >> 0x10 <= iVar2) {
    iVar2 = iVar2 - (iVar1 >> 0x10);
    uVar3 = uVar3 | 4;
  }
  if (iVar1 >> 0x11 <= iVar2) {
    iVar2 = iVar2 - (iVar1 >> 0x11);
    uVar3 = uVar3 | 2;
  }
  uVar4 = uVar3;
  if (iVar1 >> 0x12 <= iVar2) {
    iVar2 = iVar2 - (iVar1 >> 0x12);
    uVar4 = uVar3 | 1;
  }
  if ((uVar3 & 8) == 0) {
    iVar2 = (iVar5 - iVar2) + (iVar1 >> 0x13);
  }
  else {
    iVar2 = (iVar5 + iVar2) - (iVar1 >> 0x13);
  }
  *param_2 = iVar2;
  if (*param_2 < 0x8000) {
    if (*param_2 < -0x8000) {
      *param_2 = -0x8000;
    }
  }
  else {
    *param_2 = 0x7fff;
  }
  iVar2 = *param_3 + (int)*(short *)(&DAT_003cfef8 + uVar4 * 2);
  *param_3 = iVar2;
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else if (0x58 < iVar2) {
    *param_3 = 0x58;
  }
  return uVar4;
}


// ==== FUN_003228d0 @ 003228d0 ====

int FUN_003228d0(ushort *param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iStack_b0;
  int aiStack_ac [3];
  
  uVar4 = param_3 + 0x3fU >> 6;
  iVar1 = uVar4 * 0x24;
  aiStack_ac[0] = 0;
  if (uVar4 != 0) {
    uVar3 = *param_1;
    while( true ) {
      uVar4 = uVar4 - 1;
      param_1 = param_1 + 1;
      iStack_b0 = (int)(short)uVar3;
      param_3 = param_3 + -1;
      uVar5 = 0;
      uVar6 = 0;
      *param_2 = (uint)uVar3 | aiStack_ac[0] << 0x10;
      param_2 = param_2 + 1;
      do {
        if (param_3 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          if ((int)uVar6 < 0x3f) {
            uVar3 = *param_1;
            param_3 = param_3 + -1;
            param_1 = param_1 + 1;
          }
        }
        iVar2 = FUN_003227b8(uVar3,&iStack_b0,aiStack_ac);
        uVar5 = uVar5 >> 4 | iVar2 << 0x1c;
        if ((uVar6 & 7) == 7) {
          *param_2 = uVar5;
          param_2 = param_2 + 1;
          uVar5 = 0;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0x40);
      if (uVar4 == 0) break;
      uVar3 = *param_1;
    }
  }
  return iVar1;
}


// ==== FUN_00322a00 @ 00322a00 ====

undefined8 FUN_00322a00(void)

{
  return 0;
}


// ==== FUN_00322a08 @ 00322a08 ====

undefined8 FUN_00322a08(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x458970;
  lVar1 = FUN_00311bf8(0x458970);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x458970,0x409cf0,0);
    FUN_00311e60(0x458970,0x3d0168,0x11,0x3d02c0,0x12);
  }
  return uVar2;
}


// ==== FUN_00322a78 @ 00322a78 ====

void FUN_00322a78(void)

{
  FUN_00311ca0(0x458970);
  return;
}


// ==== FUN_00322a98 @ 00322a98 ====

undefined8 FUN_00322a98(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x458998;
  lVar1 = FUN_00311bf8(0x458998);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x458998,0x409d40,0);
    FUN_00311e60(0x458998,0x3d0428,8,0x3d04c8,9);
  }
  return uVar2;
}


// ==== FUN_00322b08 @ 00322b08 ====

void FUN_00322b08(void)

{
  FUN_00311ca0(0x458998);
  return;
}


// ==== FUN_00322b28 @ 00322b28 ====

undefined8 FUN_00322b28(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x4589c0;
  lVar1 = FUN_00311bf8(0x4589c0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x4589c0,0x409e60,0);
    FUN_00311e60(0x4589c0,0x3d0580,5,0x3d05e8,6);
  }
  return uVar2;
}


// ==== FUN_00322b98 @ 00322b98 ====

void FUN_00322b98(void)

{
  FUN_00311ca0(0x4589c0);
  return;
}


// ==== FUN_00322bb8 @ 00322bb8 ====

undefined8 FUN_00322bb8(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1)[8];
  iVar2 = 1;
  if (-1 < param_3[1]) {
    iVar2 = param_3[1];
  }
  puVar1[7] = iVar2;
  iVar2 = *param_3;
  puVar1[4] = 0;
  puVar1[5] = 0;
  iVar5 = 1;
  if (-1 < iVar2) {
    iVar5 = iVar2;
  }
  puVar1[6] = 0;
  puVar1[3] = iVar5;
  puVar1[9] = 0;
  iVar2 = param_3[4];
  puVar1[8] = 1;
  puVar1[10] = 2;
  puVar1[0xb] = iVar2;
  uVar4 = FUN_00311db8(0x409f48);
  uVar3 = FUN_00311568(uVar4,*(undefined4 *)param_1,param_3[5],param_3[6]);
  *puVar1 = uVar3;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return param_1;
}


// ==== FUN_00322c70 @ 00322c70 ====

void FUN_00322c70(int param_1)

{
  FUN_00311b50(*(undefined4 *)(param_1 + 0x40));
  return;
}


// ==== FUN_00322c90 @ 00322c90 ====

void FUN_00322c90(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0x28) == 1) goto LAB_00322cf4;
  uVar2 = *(uint *)(iVar1 + 0x20);
  if (uVar2 == 2) {
    uVar4 = 6;
LAB_00322ce4:
    *(undefined4 *)(iVar1 + 0x28) = uVar4;
LAB_00322ce8:
    iVar5 = *(int *)(iVar1 + 0x24);
  }
  else if (uVar2 < 3) {
    if (uVar2 == 1) {
      *(undefined4 *)(iVar1 + 0x28) = 3;
      goto LAB_00322ce8;
    }
    iVar5 = *(int *)(iVar1 + 0x24);
  }
  else {
    uVar4 = 4;
    if (uVar2 == 3) goto LAB_00322ce4;
    iVar5 = *(int *)(iVar1 + 0x24);
  }
  *(int *)(iVar1 + 0x24) = iVar5 + 1;
LAB_00322cf4:
  puVar3 = *(undefined4 **)(iVar1 + 0x2c);
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)*puVar3)(param_1,puVar3[1]);
  }
  return;
}


// ==== FUN_00322d20 @ 00322d20 ====

void FUN_00322d20(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 6;
    return;
  }
  if (uVar1 < 3) {
    if (uVar1 == 1) {
      if (*(int *)(param_1 + 0x14) != 0) {
        **(int **)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      *(undefined4 *)(param_1 + 0x68) = 3;
      return;
    }
    return;
  }
  if (uVar1 != 3) {
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 5;
  return;
}


// ==== FUN_00322da8 @ 00322da8 ====

undefined8 FUN_00322da8(undefined8 param_1,undefined4 *param_2)

{
  param_2[3] = 1;
  param_2[1] = 0xffffffff;
  param_2[6] = 0;
  *param_2 = 0xffffffff;
  param_2[4] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  return param_1;
}


// ==== FUN_00322dd8 @ 00322dd8 ====

undefined4 FUN_00322dd8(undefined8 param_1)

{
  undefined4 auStack_20 [4];
  
  FUN_00322e00(param_1,0,auStack_20);
  return auStack_20[0];
}


// ==== FUN_00322e00 @ 00322e00 ====

void FUN_00322e00(int param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x28);
  return;
}


// ==== FUN_00322e18 @ 00322e18 ====

undefined8 FUN_00322e18(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_3;
  iVar4 = (int)param_1;
  iVar3 = *(int *)(iVar4 + 0x20);
  if (uVar1 != 2) {
    if (uVar1 < 3) {
      if (uVar1 != 1) {
        *(uint *)(iVar3 + 0x20) = uVar1;
        goto LAB_00322e88;
      }
      if (*(int *)(iVar3 + 0x28) != 3) {
        *(undefined4 *)(iVar3 + 0x28) = 8;
      }
    }
    else {
      if (uVar1 != 3) {
        *(uint *)(iVar3 + 0x20) = uVar1;
        goto LAB_00322e88;
      }
      if (*(int *)(iVar3 + 0x28) != 5) {
        *(undefined4 *)(iVar3 + 0x28) = 4;
      }
    }
  }
  *(uint *)(iVar3 + 0x20) = uVar1;
LAB_00322e88:
  if (*(int *)(iVar4 + 0x14) == 0) {
    iVar3 = *(int *)(iVar4 + 0x24);
  }
  else {
    **(int **)(iVar4 + 0x18) = *(int *)(iVar4 + 0x14);
    *(undefined4 *)(*(int *)(iVar4 + 0x14) + 4) = *(undefined4 *)(iVar4 + 0x18);
    iVar3 = *(int *)(iVar4 + 0x24);
  }
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  *(int *)(iVar4 + 0x18) = iVar3 + 0xc;
  *(undefined4 *)(iVar4 + 0x14) = uVar2;
  *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar4 + 0x14;
  *(int *)(*(int *)(iVar4 + 0x24) + 0xc) = iVar4 + 0x14;
  return param_1;
}


// ==== FUN_00322ee0 @ 00322ee0 ====

undefined8 FUN_00322ee0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *(int *)param_3[1] = (int)param_1;
  *(undefined1 **)(param_3[1] + 4) = &LAB_00322ed8;
  *(undefined4 *)(param_3[1] + 8) = *param_3;
  return param_1;
}


// ==== FUN_00322f10 @ 00322f10 ====

void FUN_00322f10(int param_1,undefined8 param_2,int param_3)

{
  *(int *)(param_3 + 4) = param_1 + 0x50;
  return;
}


// ==== FUN_00322f20 @ 00322f20 ====

void FUN_00322f20(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 auStack_40 [4];
  
  auStack_40[0] = param_4;
  FUN_003230c0(param_3,*(undefined4 *)((int)param_3 + 0x40),1,auStack_40);
  auStack_40[0] = param_2;
  FUN_00323090(param_1,*(undefined4 *)((int)param_1 + 0x40),1,auStack_40);
  return;
}


// ==== FUN_00322f80 @ 00322f80 ====

void FUN_00322f80(undefined4 *param_1)

{
  (*(code *)param_1[1])(*param_1,param_1[2]);
  return;
}


// ==== FUN_00322fd8 @ 00322fd8 ====

void FUN_00322fd8(undefined1 *param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  param_1[3] = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_00322ff0 @ 00322ff0 ====

uint * FUN_00322ff0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  bVar1 = param_1[1];
  puVar3 = (uint *)0x0;
  if (bVar1 != param_1[3]) {
    uVar2 = (uint)*param_1 + (uint)bVar1;
    param_1[1] = bVar1 + 1;
    if (param_1[3] <= uVar2) {
      uVar2 = uVar2 - param_1[3];
    }
    puVar3 = (uint *)(*(int *)(param_1 + 4) + uVar2 * 0x14);
  }
  *puVar3 = *puVar3 & 0xfffffff7;
  return puVar3;
}


// ==== FUN_00323058 @ 00323058 ====

void FUN_00323058(byte *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 1;
  if (param_1[3] <= uVar1) {
    uVar1 = uVar1 - param_1[3];
  }
  param_1[1] = param_1[1] - 1;
  *param_1 = (byte)uVar1;
  return;
}


// ==== FUN_00323090 @ 00323090 ====

void FUN_00323090(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_2 + 4) + param_3 * 8);
  (*(code *)*puVar1)(param_1,*(undefined2 *)(puVar1 + 1),param_4);
  return;
}


// ==== FUN_003230c0 @ 003230c0 ====

void FUN_003230c0(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_2 + 8) + param_3 * 8);
  (*(code *)*puVar1)(param_1,*(undefined2 *)(puVar1 + 1),param_4);
  return;
}


// ==== FUN_003230f0 @ 003230f0 ====

undefined4 FUN_003230f0(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)(*(int *)(param_2 + 8) + param_3 * 8);
  (*(code *)*puVar1)(param_1,*(undefined2 *)(puVar1 + 1),auStack_20);
  return auStack_20[0];
}


// ==== FUN_00323150 @ 00323150 ====

void FUN_00323150(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)(*(int *)(param_2 + 4) + param_3 * 8);
  auStack_20[0] = param_4;
  (*(code *)*puVar1)(param_1,*(undefined2 *)(puVar1 + 1),auStack_20);
  return;
}


// ==== FUN_00323188 @ 00323188 ====

void FUN_00323188(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)(*(int *)(param_2 + 4) + param_3 * 8);
  auStack_20[0] = param_4;
  (*(code *)*puVar1)(param_1,*(undefined2 *)(puVar1 + 1),auStack_20);
  return;
}


// ==== FUN_003231d0 @ 003231d0 ====

void FUN_003231d0(undefined4 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)(*(int *)(param_3 + 4) + param_4 * 8);
  auStack_20[0] = param_1;
  (*(code *)*puVar1)(param_2,*(undefined2 *)(puVar1 + 1),auStack_20);
  return;
}


// ==== FUN_00323230 @ 00323230 ====

undefined4 FUN_00323230(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)(*(int *)(param_2 + 8) + param_3 * 8);
  (*(code *)*puVar1)(param_1,*(undefined2 *)(puVar1 + 1),auStack_20);
  return auStack_20[0];
}


// ==== FUN_003232a8 @ 003232a8 ====

void FUN_003232a8(void)

{
  FUN_00312c70();
  return;
}


// ==== FUN_003232c8 @ 003232c8 ====

void FUN_003232c8(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0031de30(param_1,0x409f20,0);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x40) = 0x100;
  uVar1 = FUN_003186b0(0x40);
  if ((1 << (uVar1 & 0x1f) & 0xffffU) != 0) {
    FUN_003186b0(0x40);
  }
  uVar1 = FUN_003186b0(0x40);
  if (((1 << (uVar1 & 0x1f) & 0xffffU) == 0) ||
     (uVar1 = FUN_003186b0(0x40), (1 << (uVar1 & 0x1f) & 0xff00U) == 0)) {
    uVar1 = FUN_003186b0(0x40);
    if ((1 << (uVar1 & 0x1f) & 0xffffU) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_003186b0(0x40);
      uVar1 = 1 << (uVar1 & 0x1f) & 0xffff;
    }
    iVar2 = (char)(&DAT_003c3228)[uVar1] + -1;
  }
  else {
    uVar1 = FUN_003186b0(0x40);
    if ((1 << (uVar1 & 0x1f) & 0xffffU) == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = FUN_003186b0(0x40);
      iVar2 = (int)(1 << (uVar1 & 0x1f) & 0xffffU) >> 8;
    }
    iVar2 = (char)(&DAT_003c3228)[iVar2] + 7;
  }
  *(uint *)(iVar3 + 0x40) = iVar2 << 0x1c | 0x100;
  *(code **)(iVar3 + 0x28) = FUN_003237e8;
  *(code **)(iVar3 + 0x34) = FUN_00323940;
  *(undefined1 **)(iVar3 + 0x2c) = &LAB_00323a00;
  *(code **)(iVar3 + 0x30) = FUN_00323458;
  *(code **)(iVar3 + 0x3c) = FUN_00323a08;
  *(undefined2 *)(iVar3 + 0x44) = 0x38;
  *(undefined **)(iVar3 + 0x54) = &DAT_003cfe38;
  *(undefined2 *)(iVar3 + 0x46) = 2;
  return;
}


// ==== FUN_00323458 @ 00323458 ====

undefined8 FUN_00323458(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  
  iVar6 = (int)param_1;
  piVar8 = (int *)(iVar6 + 0x68);
  iVar5 = *(int *)(iVar6 + 0x20);
  if (*(int *)(iVar6 + 0x68) == 2) {
    FUN_00322c90();
  }
  FUN_0031bb08(iVar5);
  uVar1 = *(uint *)(iVar6 + 0x60);
  if (uVar1 == 2) {
    if ((*(int *)(iVar6 + 0x68) != 6) && (*(int *)(iVar6 + 0x68) != 9)) {
      FUN_0031bfe8(param_1);
    }
  }
  else if (uVar1 < 3) {
    if ((uVar1 == 1) && (*(int *)(iVar6 + 0x68) != 3)) {
      FUN_0031cac8(param_1);
    }
  }
  else if ((uVar1 == 3) && (*(int *)(iVar6 + 0x68) != 5)) {
    FUN_0031ca08(param_1);
  }
  FUN_0031c820(iVar5);
  if (*piVar8 != 3) {
    if (*piVar8 != 8) {
      iVar2 = FUN_0031c728(iVar5);
      lVar4 = FUN_0031cc58(iVar5);
      lVar7 = 0;
      if (iVar2 != 0) {
        if (lVar4 != 0) {
          iVar3 = *piVar8;
          goto LAB_003235d0;
        }
        lVar7 = FUN_0031bd20(iVar5);
        iVar2 = iVar2 - (int)lVar7;
      }
      iVar3 = *piVar8;
LAB_003235d0:
      switch(iVar3) {
      case 4:
        if (iVar2 == 0) {
          *piVar8 = 5;
          return param_1;
        }
        return param_1;
      default:
        return param_1;
      case 6:
        lVar4 = FUN_0031c9d0(iVar5);
        if (lVar4 == 0) {
          if (iVar2 == 0) {
            return param_1;
          }
          if (lVar7 != 0) {
            return param_1;
          }
        }
        else {
          *piVar8 = 7;
        }
switchD_003235f0_caseD_7:
        lVar4 = FUN_0031c968(iVar5);
        if (lVar4 == 0) {
          return param_1;
        }
        *piVar8 = 9;
        return param_1;
      case 7:
        goto switchD_003235f0_caseD_7;
      case 9:
        lVar4 = FUN_0031c978(iVar5);
        if (lVar4 == 0) {
          return param_1;
        }
        *(undefined4 *)(iVar6 + 0x60) = 1;
        return param_1;
      }
    }
    iVar5 = **(int **)(*(int *)(iVar5 + 0xa8) + 0x90);
    if ((iVar5 != 3) && (iVar5 != 1)) {
      iVar5 = *(int *)(iVar6 + 0x14);
      goto LAB_00323570;
    }
    *piVar8 = 3;
  }
  iVar5 = *(int *)(iVar6 + 0x14);
LAB_00323570:
  if (iVar5 != 0) {
    **(int **)(iVar6 + 0x18) = iVar5;
    *(undefined4 *)(*(int *)(iVar6 + 0x14) + 4) = *(undefined4 *)(iVar6 + 0x18);
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined4 *)(iVar6 + 0x14) = 0;
    return param_1;
  }
  return param_1;
}


// ==== FUN_00323688 @ 00323688 ====

long FUN_00323688(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_0031deb8(0,0x40a0f0,0);
  lVar2 = FUN_0031dc40(uVar1,0xc,0x4589e8,0x458a48,&gp0xffff8fe8,0x3080f);
  lVar4 = 0;
  if (lVar2 != 0) {
    FUN_003232c8(lVar2);
    lVar3 = FUN_0031d988(lVar2,0x3d0670,5,0x3d06e8,6);
    lVar4 = lVar2;
    if (lVar3 == 0) {
      FUN_0031d7a8(lVar2);
      lVar4 = 0;
    }
  }
  return lVar4;
}


// ==== FUN_00323730 @ 00323730 ====

void FUN_00323730(void)

{
  FUN_0031d7a8(0x4589e8);
  return;
}


// ==== FUN_00323780 @ 00323780 ====

void FUN_00323780(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x20);
  if (param_2 != 0) {
    iVar2 = *(int *)(iVar1 + 0x48);
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 0x10))(iVar2,(*(undefined4 **)(iVar2 + 0x10))[1]);
      *(undefined4 *)(iVar1 + 0x48) = 0;
    }
    FUN_0031c600(iVar1);
    FUN_0031cac8(param_1);
  }
  return;
}


// ==== FUN_003237e8 @ 003237e8 ====

undefined8
FUN_003237e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1;
  iVar1 = puVar6[8];
  lVar3 = FUN_00322bb8();
  if (lVar3 != 0) {
    uVar4 = FUN_00311db8(0x409fa8);
    iVar5 = (int)param_3;
    uVar2 = FUN_00311568(uVar4,*puVar6,*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18));
    *(undefined4 *)(iVar1 + 0x40) = uVar2;
    uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x1c) + 0x20);
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x44) = uVar2;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar5 + 0xc);
    FUN_0031c7c0(iVar1);
    FUN_0031c600(iVar1);
    *(undefined4 *)(iVar1 + 0xc4) = **(undefined4 **)(iVar5 + 0x2c);
    *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(iVar5 + 0x2c);
    *(int *)(**(int **)(iVar5 + 0x2c) + 4) = iVar1 + 0xc4;
    **(int **)(iVar5 + 0x2c) = iVar1 + 0xc4;
    *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(iVar5 + 0x2c);
    lVar3 = FUN_0031c1c8(param_1,param_2,param_3,param_4,param_5);
    if (lVar3 != 0) {
      FUN_0031c918(iVar1,*(undefined4 *)(iVar5 + 0x30));
      FUN_00323150(param_1,puVar6[0x10],0,1);
      FUN_00322c90(param_1);
      return param_1;
    }
    FUN_0031c800(iVar1);
    FUN_0031c960(iVar1);
    FUN_00322c70(param_1,0,0);
  }
  return 0;
}


// ==== FUN_00323940 @ 00323940 ====

void FUN_00323940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 0x9c);
  FUN_00323780(param_1,1);
  FUN_0031cb80(param_1,param_2,param_3);
  FUN_0031c800(iVar1);
  if ((iVar2 >> 5 & 1U) != 0) {
    *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) | 0x20;
  }
  FUN_0031c960(iVar1);
  *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) & 0xffffffdf;
  FUN_00311b50(*(undefined4 *)(iVar1 + 0x40));
  FUN_00322c70(param_1,param_2,param_3);
  return;
}


// ==== FUN_00323a08 @ 00323a08 ====

undefined8 FUN_00323a08(undefined8 param_1,undefined4 *param_2)

{
  FUN_00322da8();
  param_2[3] = 2;
  param_2[8] = &PTR_LAB_003d0660;
  *param_2 = 1;
  param_2[0xd] = 0;
  param_2[7] = 0;
  param_2[1] = 0;
  return param_1;
}


// ==== FUN_00323a68 @ 00323a68 ====

undefined8 FUN_00323a68(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  float afStack_30 [4];
  
  afStack_30[0] = (float)*param_3;
  FUN_0031cd28(*(undefined4 *)((int)param_1 + 0x20),0x31cda8,afStack_30);
  return param_1;
}


// ==== FUN_00323af8 @ 00323af8 ====

undefined8 FUN_00323af8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = *param_3;
  iVar1 = *(int *)((int)param_1 + 0x20);
  FUN_0031cd28(iVar1,0x31cdc8,auStack_40);
  *(undefined4 *)(iVar1 + 0xbc) = auStack_40[0];
  return param_1;
}


// ==== FUN_00323bb0 @ 00323bb0 ====

undefined8 FUN_00323bb0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)param_1 + 0x20);
  iVar3 = FUN_0031c6e0(iVar1);
  puVar4 = (undefined8 *)(iVar3 * 0x18 + *(int *)(iVar1 + 0x50));
  uVar5 = puVar4[1];
  *(undefined8 *)(iVar1 + 0x74) = *puVar4;
  *(undefined8 *)(iVar1 + 0x7c) = uVar5;
  piVar2 = *(int **)(*(int *)(iVar1 + 0xa8) + 0x90);
  iVar6 = *piVar2;
  if (iVar6 == 3) {
    iVar6 = *(int *)(iVar1 + 100);
  }
  else if (iVar6 == 1) {
    iVar6 = *(int *)(iVar1 + 100);
  }
  else {
    iVar6 = piVar2[5];
  }
  *(int *)(iVar1 + 0x7c) = *(int *)(iVar1 + 0x7c) + (iVar6 - iVar3 * *(int *)(iVar1 + 0xb4));
  *param_3 = iVar1 + 0x74;
  return param_1;
}


// ==== FUN_00323c78 @ 00323c78 ====

undefined8 FUN_00323c78(undefined8 param_1)

{
  FUN_00322ee0(param_1,0);
  return param_1;
}


// ==== FUN_00323ca8 @ 00323ca8 ====

undefined8 FUN_00323ca8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00322dd8();
  *param_3 = uVar1;
  return param_1;
}


// ==== FUN_00323ce0 @ 00323ce0 ====

undefined8 FUN_00323ce0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x20);
  if (*param_3 != 0) {
    iVar2 = *(int *)(iVar1 + 0x48);
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 0x10))(iVar2,(*(undefined4 **)(iVar2 + 0x10))[1]);
      *(undefined4 *)(iVar1 + 0x48) = 0;
    }
    FUN_0031c600(iVar1);
    FUN_0031cac8(param_1);
  }
  return param_1;
}


// ==== FUN_00323d58 @ 00323d58 ====

void FUN_00323d58(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  **(undefined4 **)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(*(int *)(iVar1 + 0x20) + 4) = *(undefined4 *)(iVar1 + 0x24);
  FUN_00316668();
  FUN_00312c70(param_1);
  return;
}


// ==== FUN_00323e20 @ 00323e20 ====

void FUN_00323e20(void)

{
  FUN_00311ca0(0x458a60);
  return;
}


// ==== FUN_00323e40 @ 00323e40 ====

undefined8 FUN_00323e40(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x458a88;
  lVar1 = FUN_00311bf8(0x458a88);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x458a88,0x409fa8,0);
    FUN_00311e60(0x458a88,0x3d07e0,5,0x3d0848,6);
  }
  return uVar2;
}


// ==== FUN_00323eb0 @ 00323eb0 ====

void FUN_00323eb0(void)

{
  FUN_00311ca0(0x458a88);
  return;
}


// ==== FUN_00323ed0 @ 00323ed0 ====

undefined4 FUN_00323ed0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = 0;
  uGpffff8a30 = param_1;
  uGpffff8a38 = param_2;
  uVar1 = GetThreadId();
  uGpffff8a28 = ChangeThreadPriority(uVar1,0x32);
  uGpffff8a48 = 0;
  uGpffff8a4c = 0;
  lVar2 = FUN_0031d268(&uGpffff8ff8,0,0x40);
  if (lVar2 != 0) {
    lVar2 = FUN_0031d268(&uGpffff8ffc,1,0x40);
    if (lVar2 == 0) {
      DeleteSema(uGpffff8ff8);
      return 0;
    }
    DAT_00458dd0 = &DAT_00458e00;
    lVar2 = FUN_0031d2e0(0x458dc0,0x3246e0,param_3,0x800);
    if (lVar2 == 0) {
      DeleteSema(uGpffff8ffc);
      DeleteSema(uGpffff8ff8);
      return 0;
    }
    lVar2 = FUN_0031d3c0(0x458dc0,0);
    if (lVar2 == 0) {
      FUN_0031d130(0x458dc0);
      DeleteSema(uGpffff8ffc);
      DeleteSema(uGpffff8ff8);
      return 0;
    }
    iGpffff8a44 = 0;
    uGpffff8a2c = 1;
    FUN_003242b0(0,0,0,1,0,0,0,0);
    if (iGpffff8a44 == 0) {
      do {
        uVar3 = uVar3 + 1;
        FlushCache(0);
        FUN_0029b2c8(0);
        if (iGpffff8a44 != 0) break;
      } while (uVar3 < 600);
    }
    if ((uVar3 != 600) && (iGpffff8a44 == 0x115)) {
      iGpffff8a3c = 0;
      uVar3 = 0;
      FUN_003242b0(0,0,0,2,0,0,0,0);
      if (iGpffff8a3c == 0) {
        do {
          uVar3 = uVar3 + 1;
          FlushCache(0);
          FUN_0029b2c8(0);
          if (iGpffff8a3c != 0) break;
        } while (uVar3 < 600);
      }
      if (uVar3 != 600) {
        return 1;
      }
    }
    FUN_003245c0();
  }
  return 0;
}


// ==== FUN_003240d0 @ 003240d0 ====

undefined4 FUN_003240d0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = (int)param_1;
  switch(*(undefined4 *)(iVar2 + 0x10)) {
  case 9:
    DAT_0040e234 = *(undefined4 *)(iVar2 + 0x24);
    iVar2 = *(int *)(iVar2 + 0x2c);
    goto LAB_003241f8;
  case 10:
    DAT_0040e22c = *(int *)(iVar2 + 0x24);
    DAT_0040e230 = DAT_0040e22c + 0x400;
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if (*(int *)(iVar2 + 0x2c) == 0) {
      return 1;
    }
    if (*(int *)(iVar2 + 0x10) != 0xc) goto LAB_00324180;
    pcVar1 = *(code **)(iVar2 + 0x14);
    goto LAB_00324188;
  case 0xf:
    if (*(int *)(iVar2 + 0x2c) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = 7;
      iVar4 = 0x200000;
      if (*(int *)(iVar2 + 0x20) < 0x200001) {
        iVar4 = *(int *)(iVar2 + 0x20);
      }
      FUN_0036a660(0,param_1,0x30,*(undefined4 *)(iVar2 + 0x18),DAT_0040e22c,iVar4);
      iVar2 = *(int *)(iVar2 + 0x2c);
      goto LAB_003241f8;
    }
LAB_00324180:
    DAT_0040e224 = 0;
    pcVar1 = *(code **)(iVar2 + 0x14);
LAB_00324188:
    if (pcVar1 == (code *)0x0) {
      iVar2 = *(int *)(iVar2 + 0x2c);
    }
    else {
      (*pcVar1)(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28));
      iVar2 = *(int *)(iVar2 + 0x2c);
    }
    goto LAB_003241f8;
  case 0x10:
    if (*(code **)(iVar2 + 0x14) != (code *)0x0) {
      (**(code **)(iVar2 + 0x14))(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28));
    }
    DAT_0040e224 = 0;
    iVar2 = *(int *)(iVar2 + 0x2c);
    goto LAB_003241f8;
  default:
    if (DAT_0040e220 != (code *)0x0) {
      (*DAT_0040e220)(DAT_0040e228,*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x24),
                      *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x14));
    }
  }
  iVar2 = *(int *)(iVar2 + 0x2c);
LAB_003241f8:
  if (((iVar2 != 0) && (DAT_0040e224 == 0)) && (DAT_0040e244 < DAT_0040e248)) {
    iVar2 = (DAT_0040e244 & 0x3f) * 0x40;
    if (*(int *)(&DAT_0045ae10 + iVar2) == 7) {
      DAT_0040e224 = 1;
    }
    if ((DAT_0040e7e4 == 0) || (lVar3 = sceSifDmaStat(), lVar3 < 0)) {
      DAT_0040e7e4 = FUN_0036a660(0,iVar2 + 0x45ae00,0x30,*(undefined4 *)(&DAT_0045ae30 + iVar2),
                                  *(undefined4 *)(&DAT_0045ae34 + iVar2),
                                  *(undefined4 *)(&DAT_0045ae38 + iVar2));
      DAT_0040e244 = DAT_0040e244 + 1;
    }
  }
  return 1;
}


// ==== FUN_003242b0 @ 003242b0 ====

/* Strings referenciadas:
     "EE  RwaRPCTransfer : ERROR! DMA command queue FULL! Discarding oldest command! " */

void FUN_003242b0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong in_hi;
  
  uVar9 = 0;
  lVar10 = 1;
  WaitSema(DAT_0040e7ec);
  iVar8 = 0;
  iVar7 = 0;
  uVar5 = 0;
  switch(param_4) {
  case 3:
  case 5:
  case 6:
  case 0x19:
    break;
  default:
    uVar9 = 0xffc00;
    iVar8 = param_2;
    iVar7 = param_1;
    uVar5 = param_3;
    break;
  case 7:
    uVar9 = 0x200000;
    iVar8 = param_2;
    iVar7 = DAT_0040e22c;
    uVar5 = 0x200000;
    if (param_3 < 0x200000) {
      uVar5 = param_3;
    }
    goto joined_r0x0032436c;
  case 8:
joined_r0x0032436c:
    if (DAT_0040e224 == 0) {
      DAT_0040e224 = 1;
      goto LAB_003243a0;
    }
    lVar10 = 2;
  }
LAB_003243a0:
  if ((lVar10 == 2) && (DAT_0040e244 + 0x40U <= DAT_0040e248)) {
    FUN_0035d530(0x40a040);
    DAT_0040e244 = DAT_0040e244 + 1;
  }
  if (lVar10 != 0) {
    puVar6 = &DAT_0040e240;
    if (lVar10 == 2) {
      puVar6 = &DAT_0040e248;
    }
    do {
      uVar2 = *puVar6 & 0x3f;
      if (lVar10 == 2) {
        iVar3 = uVar2 * 0x40 + 0x45ae00;
      }
      else {
        lVar1 = (in_hi | 0x45a200) + (long)(int)(uVar2 * 0x30);
        iVar3 = (int)lVar1;
        in_hi = (ulong)(int)((ulong)lVar1 >> 0x20);
      }
      *(undefined4 *)(iVar3 + 0x10) = param_4;
      uVar4 = uVar9;
      if (uVar5 < uVar9) {
        uVar4 = uVar5;
      }
      *(int *)(iVar3 + 0x18) = param_2;
      *(uint *)(iVar3 + 0x20) = param_3;
      *(int *)(iVar3 + 0x1c) = param_1;
      *(undefined4 *)(iVar3 + 0x24) = param_7;
      *(undefined4 *)(iVar3 + 0x28) = param_8;
      *(undefined4 *)(iVar3 + 0x14) = param_6;
      if (uVar4 == uVar5) {
        *(undefined4 *)(iVar3 + 0x2c) = 1;
      }
      else {
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      if (lVar10 == 2) {
        iVar3 = uVar2 * 0x40;
        *(int *)(&DAT_0045ae30 + iVar3) = iVar8;
        *(int *)(&DAT_0045ae34 + iVar3) = iVar7;
        *(uint *)(&DAT_0045ae38 + iVar3) = uVar4;
      }
      else {
        FUN_0036a660(0,iVar3,0x30,iVar8,iVar7,uVar4);
      }
      uVar5 = uVar5 - uVar4;
      iVar8 = iVar8 + uVar4;
      iVar7 = iVar7 + uVar4;
      *puVar6 = *puVar6 + 1;
    } while (uVar5 != 0);
  }
  SignalSema(DAT_0040e7ec);
  return;
}


// ==== FUN_00324530 @ 00324530 ====

void FUN_00324530(void)

{
  long unaff_s0;
  
  FUN_0036a190();
  if (DAT_0040e214 == 2) {
    unaff_s0 = FUN_0036d518();
  }
  FUN_0036a448(0x458ac0,0x40);
  FUN_0036a460(1,0x324660,0);
  if ((DAT_0040e214 == 2) && (unaff_s0 == 1)) {
    FUN_0036d568();
  }
  return;
}


// ==== FUN_003245c0 @ 003245c0 ====

void FUN_003245c0(void)

{
  DAT_0040e22c = 0;
  FUN_0036a4d8(1);
  DAT_0040e7e0 = 0;
  if ((DAT_0040e214 == 2) && (SignalSema(DAT_0040e7e8), DAT_0040e214 == 2)) {
    WaitSema(DAT_0040e7e8);
  }
  FUN_0031d130(0x458dc0);
  DeleteSema(DAT_0040e7e8);
  DeleteSema(DAT_0040e7ec);
  DAT_0040e21c = 0;
  return;
}


// ==== FUN_00324640 @ 00324640 ====

undefined4 FUN_00324640(void)

{
  return DAT_0040e224;
}


// ==== FUN_00324650 @ 00324650 ====

undefined4 FUN_00324650(void)

{
  return DAT_00458dc0;
}


// ==== FUN_00324660 @ 00324660 ====

void FUN_00324660(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_0040e23c < DAT_0040e238 + 0x40) {
    iVar1 = DAT_0040e23c + 0x3f;
    if (-1 < DAT_0040e23c) {
      iVar1 = DAT_0040e23c;
    }
    iVar1 = DAT_0040e23c + (iVar1 >> 6) * -0x40;
    DAT_0040e23c = DAT_0040e23c + 1;
    FUN_0035c544(&DAT_00459600 + iVar1 * 0x30,param_1,0x30);
    iSignalSema(DAT_0040e7e8);
  }
  return;
}


// ==== FUN_003246e0 @ 003246e0 ====

undefined4 * FUN_003246e0(void)

{
  int iVar1;
  long lVar2;
  
  DAT_0040e7e0 = 1;
  do {
    if (DAT_0040e214 == 2) {
      WaitSema(DAT_0040e7e8);
    }
    if (DAT_0040e7e0 == 0) break;
    iVar1 = DAT_0040e238 + 0x3f;
    if (-1 < DAT_0040e238) {
      iVar1 = DAT_0040e238;
    }
    lVar2 = FUN_003240d0(&DAT_00459600 + (DAT_0040e238 + (iVar1 >> 6) * -0x40) * 0x30);
    DAT_0040e7e0 = (int)lVar2;
    DAT_0040e238 = DAT_0040e238 + 1;
  } while (lVar2 != 0);
  return &DAT_0040e7e8;
}


// ==== FUN_003247a0 @ 003247a0 ====

void FUN_003247a0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  DAT_0040e24c = param_1;
  DAT_0040e250 = param_2;
  uVar1 = FUN_00312c48(param_1 * 0x70,0x40801);
  DAT_0040e258 = (undefined4)uVar1;
  FUN_0035c6ec(uVar1,0,DAT_0040e24c * 0x70);
  uVar1 = FUN_00312c48(DAT_0040e24c * 0xc,0x40801);
  DAT_0040e254 = (undefined4)uVar1;
  FUN_0035c6ec(uVar1,0,DAT_0040e24c * 0xc);
  uVar1 = FUN_00312c48(DAT_0040e24c * 0x14,0x40801);
  DAT_0040e264 = (int)uVar1;
  FUN_0035c6ec(uVar1,0,DAT_0040e24c * 0x14);
  iVar3 = 0;
  if (0 < DAT_0040e24c) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + DAT_0040e264 + 8) = 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < DAT_0040e24c);
  }
  return;
}


// ==== FUN_003248a8 @ 003248a8 ====

int FUN_003248a8(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (uGpffff8a5c != 0) {
    iVar3 = 0;
    do {
      uVar1 = *(uint *)(iVar3 + iGpffff8a68 + 0x1c);
      if ((uVar1 & 4) == 0) {
        *(uint *)(iVar3 + iGpffff8a68 + 0x1c) = uVar1 | 4;
        return uVar2 + 1;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (uVar2 < uGpffff8a5c);
  }
  return 0;
}


// ==== FUN_00324900 @ 00324900 ====

void FUN_00324900(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1 + -1) * 0x70;
  iVar2 = iVar1 + iGpffff8a68;
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffb;
  iVar1 = iVar1 + iGpffff8a68;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd;
  return;
}


// ==== FUN_00324948 @ 00324948 ====

uint FUN_00324948(int param_1)

{
  return *(uint *)((param_1 + -1) * 0x70 + iGpffff8a68 + 0x1c) & 2;
}


// ==== FUN_00324968 @ 00324968 ====

void FUN_00324968(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(iGpffff8a64 + (param_1 + -1) * 0xc);
  piVar1[2] = param_3;
  *piVar1 = param_1;
  piVar1[1] = param_2;
  return;
}


// ==== FUN_00324990 @ 00324990 ====

undefined8 FUN_00324990(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003248a8();
  FUN_0035cbc0(iGpffff8a68 + ((int)uVar1 + -1) * 0x70 + 0x24,param_1);
  return uVar1;
}


// ==== FUN_003249e8 @ 003249e8 ====

void FUN_003249e8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1 + -1;
  iVar1 = iGpffff8a74 + iVar3 * 0x14;
  piVar2 = (int *)(iGpffff8a68 + iVar3 * 0x70);
  *(int *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = 3;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *piVar2 = iVar3;
  piVar2[4] = 1;
  FUN_003680a0(piVar2,(int)piVar2 + 0x6f);
  FUN_003242b0(iGpffff9000 + iVar3 * 0x70,piVar2,0x70,0x32,0,0,iVar3,0);
  return;
}


// ==== FUN_00324a88 @ 00324a88 ====

void FUN_00324a88(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1 + -1;
  puVar2 = (undefined4 *)(iGpffff8a74 + iVar4 * 0x14);
  piVar3 = (int *)(iGpffff8a68 + iVar4 * 0x70);
  if ((piVar3[7] & 2U) == 0) {
    piVar3[7] = piVar3[7] | 2;
  }
  iVar1 = iVar4 * 0x70 + iGpffff8a68;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x10;
  *puVar2 = param_6;
  puVar2[1] = param_1;
  puVar2[2] = 5;
  puVar2[3] = param_7;
  puVar2[4] = param_5;
  piVar3[1] = param_2;
  piVar3[2] = param_4;
  piVar3[4] = 3;
  piVar3[3] = piVar3[3] + param_3;
  piVar3[5] = (int)FUN_00324e48;
  piVar3[6] = param_5;
  *piVar3 = iVar4;
  piVar3[7] = piVar3[7] & 0xfffffff7;
  FUN_003680a0(piVar3,(int)piVar3 + 0x6f);
  FUN_003242b0(iGpffff9000 + iVar4 * 0x70,piVar3,0x70,0x32,0,0,iVar4,0);
  return;
}


// ==== FUN_00324ba0 @ 00324ba0 ====

void FUN_00324ba0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1 + -1;
  iVar1 = iVar4 * 0x70;
  *(uint *)(iVar1 + iGpffff8a68 + 0x1c) = *(uint *)(iVar1 + iGpffff8a68 + 0x1c) | 0x10;
  piVar3 = (int *)(iGpffff8a68 + iVar1);
  puVar2 = (undefined4 *)(iGpffff8a74 + iVar4 * 0x14);
  if ((piVar3[7] & 2U) == 0) {
    piVar3[7] = piVar3[7] | 2;
  }
  *puVar2 = param_5;
  puVar2[1] = param_1;
  puVar2[3] = param_6;
  puVar2[4] = param_4;
  puVar2[2] = 5;
  *piVar3 = iVar4;
  piVar3[1] = param_2;
  piVar3[2] = param_3;
  piVar3[4] = 2;
  piVar3[5] = (int)FUN_00324e48;
  piVar3[6] = param_4;
  piVar3[7] = piVar3[7] & 0xfffffff7;
  FUN_003680a0(piVar3,(int)piVar3 + 0x6f);
  FUN_003242b0(iGpffff9000 + iVar1,piVar3,0x70,0x32,0,0,iVar4,0);
  return;
}


// ==== FUN_00324cb0 @ 00324cb0 ====

void FUN_00324cb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1 + -1;
  iVar1 = iVar4 * 0x70;
  *(uint *)(iVar1 + iGpffff8a68 + 0x1c) = *(uint *)(iVar1 + iGpffff8a68 + 0x1c) | 0x10;
  piVar3 = (int *)(iGpffff8a68 + iVar1);
  puVar2 = (undefined4 *)(iGpffff8a74 + iVar4 * 0x14);
  if ((piVar3[7] & 2U) == 0) {
    piVar3[7] = piVar3[7] | 2;
  }
  *puVar2 = param_3;
  puVar2[1] = param_1;
  puVar2[3] = param_4;
  puVar2[2] = 4;
  puVar2[4] = 0;
  *piVar3 = iVar4;
  piVar3[6] = 0;
  piVar3[3] = param_2;
  piVar3[4] = 4;
  piVar3[5] = (int)FUN_00324e48;
  FUN_003680a0(piVar3,(int)piVar3 + 0x6f);
  FUN_003242b0(iGpffff9000 + iVar1,piVar3,0x70,0x32,0,0,iVar4,0);
  return;
}


// ==== FUN_00324d98 @ 00324d98 ====

bool FUN_00324d98(int param_1,long param_2)

{
  int iVar1;
  
  iVar1 = iGpffff8a68 + (param_1 + -1) * 0x70;
  if (param_2 != 0) {
    do {
    } while ((*(uint *)(iVar1 + 0x1c) & 0x10) != 0);
  }
  return (*(uint *)(iVar1 + 0x1c) & 0x10) == 0;
}


// ==== FUN_00324de8 @ 00324de8 ====

undefined8 FUN_00324de8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0036cd08(0,param_1,0);
  FUN_00324e38(uVar1,param_1);
  return uVar1;
}


// ==== FUN_00324e38 @ 00324e38 ====

void FUN_00324e38(undefined4 param_1,undefined4 param_2)

{
  uGpffff8a6c = param_1;
  uGpffff8a70 = param_2;
  return;
}


// ==== FUN_00324e48 @ 00324e48 ====

void FUN_00324e48(undefined8 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iVar3 = param_2 * 0x70 + iGpffff8a68;
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xffffffef;
  puVar5 = (undefined4 *)(iGpffff8a74 + param_2 * 0x14);
  iVar3 = iGpffff8a68 + param_2 * 0x70;
  piVar4 = (int *)(iGpffff8a64 + param_2 * 0xc);
  if ((undefined4 *)puVar5[4] != (undefined4 *)0x0) {
    *(undefined4 *)puVar5[4] = (int)param_1;
  }
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar2 == 1) {
    FUN_00324900(puVar5[1]);
    if (*piVar4 == puVar5[1]) {
      if ((code *)piVar4[1] != (code *)0x0) {
        (*(code *)piVar4[1])(*piVar4,0,1,3,piVar4[2]);
      }
      piVar4[2] = 0;
      *piVar4 = 0;
      piVar4[1] = 0;
      iVar2 = *(int *)(iVar3 + 0x10);
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x10);
    }
  }
  if (iVar2 == 2) {
    FUN_003680a0(*(int *)(iVar3 + 4),*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8));
    pcVar1 = (code *)*puVar5;
  }
  else {
    pcVar1 = (code *)*puVar5;
  }
  if (pcVar1 != (code *)0x0) {
    *puVar5 = 0;
    uStack_60 = (undefined4)*(undefined8 *)(puVar5 + 1);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(puVar5 + 1) >> 0x20);
    (*pcVar1)(uStack_60,param_1,2,uStack_5c,puVar5[3]);
  }
  return;
}


// ==== FUN_00324f98 @ 00324f98 ====

undefined4 FUN_00324f98(void)

{
  return uGpffff8a78;
}


// ==== FUN_00324fa0 @ 00324fa0 ====

undefined8 FUN_00324fa0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_0045be00 = param_2;
  iVar1 = FUN_00328eb8(*(undefined4 *)((int)param_1 + 0x4c));
  DAT_0045be04 = iVar1 + param_2;
  DAT_0045be10 = *(undefined4 *)((int)param_1 + 0x34);
  DAT_0045be08 = param_3;
  DAT_0045be0c = param_4;
  FUN_003680a0(0x45be00,0x45be13);
  FUN_003242b0(uGpffff8a40,0x45be00,0x14,0x46,0,0x3250d0,0,0);
  uGpffff8a78 = 1;
  return param_1;
}


// ==== FUN_00325058 @ 00325058 ====

void FUN_00325058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 * 0x24;
  FUN_003680a0(param_1,(int)param_1 + iVar1 + -1);
  FUN_003242b0(param_2,param_1,iVar1,0x48,0,0,param_2,param_3);
  return;
}


// ==== FUN_003250d8 @ 003250d8 ====

undefined4 FUN_003250d8(void)

{
  long lVar1;
  
  lVar1 = FUN_00311a70(0x3d0918,3);
  if (((lVar1 != 0) && (lVar1 = FUN_0031e000(0x3d08d8,6), lVar1 != 0)) &&
     (lVar1 = FUN_003155e0(0x3d0908,1), lVar1 != 0)) {
    return 1;
  }
  FUN_00325138();
  return 0;
}


// ==== FUN_00325138 @ 00325138 ====

undefined4 FUN_00325138(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00311ae0(0x3d0928,3);
  uVar1 = 0;
  if (lVar2 == 1) {
    lVar2 = FUN_0031e070(0x3d08f0,6);
    if (lVar2 == 1) {
      lVar2 = FUN_00315650(0x3d0910,1);
      uVar1 = 1;
      if (lVar2 != 1) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_003251b8 @ 003251b8 ====

void FUN_003251b8(int param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,long param_5
                 )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = DAT_0045bf44;
  puVar1 = DAT_0045bf04;
  switch(param_2) {
  case 0x12:
    uGpffff8a88 = 0;
    break;
  default:
    goto switchD_003251fc_caseD_13;
  case 0x19:
    FUN_00326d80(uGpffff8aa0,param_3);
    break;
  case 0x1a:
    uGpffff8a88 = 1;
    puGpffff9000 = param_3;
    break;
  case 0x1b:
    puGpffff8a80 = param_3;
    uGpffff8a84 = (int)param_4;
    break;
  case 0x1c:
    *(undefined4 **)(param_1 + 0x13ac) = param_3;
    goto switchD_003251fc_caseD_13;
  case 0x1d:
    uGpffff8a8c = 0;
    break;
  case 0x1e:
    DAT_0045bf00 = &DAT_0045bf00;
    DAT_0045bf04 = param_3;
    FUN_003680a0(0x45bf00,0x45bf3f);
    uVar6 = 0x45bf00;
    uVar5 = 0x20;
    goto LAB_0032540c;
  case 0x1f:
    uVar5 = 0x45bf00;
    lVar3 = FUN_00326028(DAT_0045bf14,DAT_0045bf10,0x45bf18);
    if (lVar3 != 0) {
      lVar3 = FUN_00328df8(DAT_0045bf0c);
      DAT_0045bf24 = (undefined4)lVar3;
      if (lVar3 == 0) {
        FUN_003264a0(0x45bf18);
      }
      else {
        DAT_0045bf20 = FUN_00328eb8(lVar3);
      }
    }
    FUN_003680a0(0x45bf00,0x45bf3f);
    uVar4 = 0x21;
    goto LAB_003253b4;
  case 0x22:
    uVar6 = 0x45bf00;
    FUN_003264a0(0x45bf18);
    FUN_00328e60(DAT_0045bf24);
    FUN_003680a0(0x45bf00,0x45bf3f);
    uVar5 = 0x23;
    param_3 = puVar1;
    goto LAB_0032540c;
  case 0x24:
    uVar6 = 0x45bf40;
    DAT_0045bf40 = &DAT_0045bf40;
    DAT_0045bf44 = param_3;
    FUN_003680a0(0x45bf40,0x45bf7f);
    uVar5 = 0x26;
    goto LAB_0032540c;
  case 0x25:
    uVar5 = 0x45bf40;
    DAT_0045bf54 = FUN_00328ff0(DAT_0045bf50);
    FUN_003680a0(0x45bf40,0x45bf7f);
    uVar4 = 0x27;
    puVar1 = puVar2;
LAB_003253b4:
    FUN_003242b0(puVar1,uVar5,0x40,uVar4,0,0,puVar1,uVar5);
    break;
  case 0x28:
    uVar6 = 0x45bf40;
    DAT_0045bf54 = FUN_00329030(DAT_0045bf50);
    FUN_003680a0(0x45bf40,0x45bf7f);
    uVar5 = 0x29;
    param_3 = puVar2;
LAB_0032540c:
    FUN_003242b0(0,0,0,uVar5,0,0,param_3,uVar6);
    break;
  case 0x2b:
  case 0x2d:
  case 0x2f:
  case 0x31:
  case 0x35:
  case 0x37:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x41:
  case 0x4b:
  case 0x4d:
  case 0x4f:
  case 0x51:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (int)param_4;
    }
    if (param_5 < 1) {
      return;
    }
    WakeupThread(param_5);
switchD_003251fc_caseD_13:
    break;
  case 0x33:
  case 0x47:
    (*(code *)param_5)(param_3,param_4);
    break;
  case 0x42:
    if (DAT_0045cb04 == 6) {
      (*DAT_0045cb18)(0x45cb08,DAT_0045cb1c,0x45cb20,0);
    }
    FUN_003680a0(0x45cb00,0x45cb7f);
    FUN_003242b0(uGpffff8ab4,0x45cb00,0x80,0x43,0,param_5,0,0);
  }
  return;
}


// ==== FUN_003254d0 @ 003254d0 ====

void FUN_003254d0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0031de30(param_1,0x40a0f0,0);
  iVar3 = (int)param_1;
  *(undefined2 *)(iVar3 + 0x46) = 1;
  *(undefined4 *)(iVar3 + 0x40) = 0x1400;
  uVar1 = FUN_003186b0(0x40);
  if ((1 << (uVar1 & 0x1f) & 0xffffU) != 0) {
    FUN_003186b0(0x40);
  }
  uVar1 = FUN_003186b0(0x40);
  if (((1 << (uVar1 & 0x1f) & 0xffffU) == 0) ||
     (uVar1 = FUN_003186b0(0x40), (1 << (uVar1 & 0x1f) & 0xff00U) == 0)) {
    uVar1 = FUN_003186b0(0x40);
    if ((1 << (uVar1 & 0x1f) & 0xffffU) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_003186b0(0x40);
      uVar1 = 1 << (uVar1 & 0x1f) & 0xffff;
    }
    iVar2 = (char)(&DAT_003c3228)[uVar1] + -1;
  }
  else {
    uVar1 = FUN_003186b0(0x40);
    if ((1 << (uVar1 & 0x1f) & 0xffffU) == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = FUN_003186b0(0x40);
      iVar2 = (int)(1 << (uVar1 & 0x1f) & 0xffffU) >> 8;
    }
    iVar2 = (char)(&DAT_003c3228)[iVar2] + 7;
  }
  *(uint *)(iVar3 + 0x40) = iVar2 << 0x1c | 0x1400;
  *(code **)(iVar3 + 0x28) = FUN_00325650;
  *(undefined1 **)(iVar3 + 0x34) = &LAB_003268c0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(code **)(iVar3 + 0x30) = FUN_00325980;
  *(undefined1 **)(iVar3 + 0x3c) = &LAB_003269d0;
  *(undefined2 *)(iVar3 + 0x44) = 0x18;
  FUN_00324530();
  return;
}


// ==== FUN_00325650 @ 00325650 ====

undefined8 FUN_00325650(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uGpffff9018 = 0;
  iVar7 = (int)param_1;
  iVar6 = iVar7 + 0x40;
  uGpffff901c = 0;
  uGpffff900c = 0;
  *(undefined4 *)(iVar7 + 0x13c0) = 0;
  *(undefined4 *)(iVar7 + 0x13d8) = 0;
  *(undefined4 *)(iVar7 + 0x13c4) = 0;
  *(undefined4 *)(iVar7 + 0x13d0) = 0;
  *(undefined4 *)(iVar7 + 0x13d4) = 0;
  uStack_90 = DAT_0040a200;
  uStack_88 = DAT_0040a208;
  uStack_80 = DAT_0040a210;
  uStack_78 = DAT_0040a218;
  uStack_70 = DAT_0040a220;
  uStack_68 = DAT_0040a228;
  uVar1 = *param_3;
  *(undefined4 *)(iVar7 + 0x6a4) = 1;
  *(undefined4 *)(iVar7 + 0x13e0) = uVar1;
  *(undefined4 *)(iVar7 + 0x6a0) = 0xffff;
  *(undefined4 *)(iVar7 + 0x1420) = 0;
  *(undefined4 *)(iVar7 + 0x13b0) = 0;
  *(undefined4 *)(iVar7 + 0xd30) = 0;
  *(undefined4 *)(iVar7 + 0x6b0) = 0;
  *(undefined4 *)(iVar7 + 0x674) = 0;
  *(undefined4 *)(iVar7 + 0x670) = 0;
  *(undefined4 *)(iVar7 + 0x67c) = 0;
  *(undefined4 *)(iVar7 + 0x678) = 0;
  *(undefined4 *)(iVar7 + 0x684) = 0;
  *(undefined4 *)(iVar7 + 0x680) = 0;
  *(undefined4 *)(iVar7 + 0x68c) = 0;
  *(undefined4 *)(iVar7 + 0x688) = 0;
  *(undefined4 *)(iVar7 + 0x694) = 0;
  *(undefined4 *)(iVar7 + 0x690) = 0;
  uGpffff9008 = 0;
  uVar3 = 0;
  iGpffff8aa0 = iVar6;
  if (param_3[1] == 0) {
    if (param_3[2] != 0) {
      uGpffff9008 = 2;
    }
    iVar4 = 0;
    puVar5 = &DAT_0045be40;
    do {
      puVar2 = (undefined1 *)(iVar7 + 0x640 + iVar4);
      *puVar5 = 0;
      iVar4 = iVar4 + 1;
      *puVar2 = 0;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 0x30);
    if (uGpffff9008 != 0) {
      FUN_00325ad0(param_1,&uStack_90);
    }
    FUN_00323ed0(0x3251b8,iVar6,0x16);
    FUN_003247a0(param_3[4],param_3[5]);
    iGpffff8a88 = 0;
    *(undefined4 *)(iVar7 + 0x13e4) = param_3[3];
    iVar6 = param_3[3];
    *(uint *)(iVar7 + 0x13e8) = 0x1fff80U - iVar6;
    FUN_003242b0(0,0,0,0x11,0,0,(uint)*(ushort *)(iVar7 + 0x13e0) | param_3[5] << 0x10,
                 0x1fff80U - iVar6 & 0xffffff | param_3[4] << 0x18);
    while (iGpffff8a88 == 0) {
      FlushCache(0);
    }
    iGpffff8a80 = -1;
    iGpffff8a84 = -1;
    FUN_003242b0(0,0,0,0x13,0,0,0,0);
    while (iGpffff8a80 == -1) {
      if (iGpffff8a84 != -1) {
        *(undefined4 *)(iVar7 + 0x13ec) = 0;
        goto LAB_003258bc;
      }
      FlushCache(0);
    }
    *(undefined4 *)(iVar7 + 0x13ec) = 0;
LAB_003258bc:
    FUN_003680a0(iVar7 + 0xd40,iVar7 + 0x13bf);
    FUN_003242b0(0,0,0,0x15,0,0,iVar7 + 0xd40,0);
    iVar6 = *(int *)(iVar7 + 0x13ec);
    while (iVar6 == 0) {
      FlushCache(0);
      iVar6 = *(int *)(iVar7 + 0x13ec);
    }
    FUN_00328d58();
    if ((uGpffff9008 & 1) != 0) {
      FUN_00328ce8(0x1fff80,0x80);
    }
    if ((uGpffff9008 & 2) != 0) {
      FUN_00328ce8(*(undefined4 *)(iVar7 + 0x13e8),*(undefined4 *)(iVar7 + 0x13e4));
    }
    uGpffff8aa8 = 0;
    *(undefined4 *)(iVar7 + 0x13c0) = 1;
    uVar3 = param_1;
  }
  return uVar3;
}


// ==== FUN_00325980 @ 00325980 ====

undefined8 FUN_00325980(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  iVar12 = (int)param_1;
  piVar11 = (int *)(iVar12 + 0x40);
  FUN_00311398(param_1,1);
  if (*(int *)(iVar12 + 0x13b0U | 0x20000000) == iGpffff900c) {
    piVar4 = (int *)(iVar12 + 0x6c0);
    piVar3 = piVar11;
    piVar5 = piVar4;
    do {
      uVar1 = *(undefined8 *)piVar3;
      iVar7 = piVar3[2];
      iVar8 = piVar3[3];
      uVar2 = *(undefined8 *)(piVar3 + 4);
      iVar9 = piVar3[6];
      iVar10 = piVar3[7];
      *piVar5 = (int)uVar1;
      piVar5[1] = (int)((ulong)uVar1 >> 0x20);
      piVar5[2] = iVar7;
      piVar5[3] = iVar8;
      piVar5[4] = (int)uVar2;
      piVar5[5] = (int)((ulong)uVar2 >> 0x20);
      piVar5[6] = iVar9;
      piVar5[7] = iVar10;
      piVar3 = piVar3 + 8;
      piVar5 = piVar5 + 8;
    } while (piVar3 != piVar4);
    iGpffff900c = iGpffff900c + 1;
    *(int *)(iVar12 + 0xd30) = iGpffff900c;
    FUN_003680a0(piVar4,iVar12 + 0xd3f);
    FUN_003242b0(*(undefined4 *)(iVar12 + 0x13ec),piVar4,0x680,0x14,0,0,iGpffff900c,0);
    iVar7 = 0;
    if (0 < *(int *)(iVar12 + 0x13e0)) {
      uVar6 = iVar12 + 0xd40;
      do {
        iVar8 = *piVar11;
        if (*(int *)(uVar6 | 0x20000000) == 1) {
          if (iVar8 != 2) {
            *piVar11 = 3;
          }
          iVar8 = *piVar11;
        }
        if (iVar8 == 4) {
          iVar9 = ((int *)(uVar6 | 0x20000000))[5];
LAB_00325a98:
          piVar11[5] = iVar9;
        }
        else {
          iVar9 = piVar11[6];
          if (iVar8 != 2) goto LAB_00325a98;
          *piVar11 = 4;
          piVar11[5] = iVar9;
          piVar11[6] = 0;
        }
        iVar7 = iVar7 + 1;
        uVar6 = uVar6 + 0x20;
        piVar11 = piVar11 + 8;
      } while (iVar7 < *(int *)(iVar12 + 0x13e0));
    }
  }
  return param_1;
}


// ==== FUN_00325ad0 @ 00325ad0 ====

void FUN_00325ad0(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x13f0) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x13f8) = uVar3;
  *(undefined8 *)(param_1 + 0x1400) = uVar4;
  *(undefined8 *)(param_1 + 0x1408) = uVar5;
  uVar3 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x1410) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x1418) = uVar3;
  *(undefined4 *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (*param_2 == -10000) {
    uVar2 = 1;
  }
  else {
    if ((float)param_2[9] < 100.0) {
      if (param_2[5] < 0) {
        *(int *)(param_1 + 0x6a8) = (int)(((float)param_2[6] / fGpffff80d4) * 127.0);
        uVar2 = 9;
        if (fGpffff80d8 <= (float)param_2[8]) {
          *(undefined4 *)(param_1 + 0x698) = 8;
          fVar6 = (float)FUN_0029e688(0x41200000,(float)param_2[5] / 2000.0);
          *(int *)(param_1 + 0x6ac) = (int)(fVar6 * 127.0);
          goto LAB_00325cc8;
        }
        goto LAB_00325cc4;
      }
      fVar6 = (float)param_2[3];
    }
    else {
      fVar6 = (float)param_2[3];
    }
    if (4.0 < fVar6) {
      uVar2 = 7;
      if ((float)param_2[4] <= 0.5) {
        uVar2 = 6;
      }
    }
    else if (3.0 < fVar6) {
      uVar2 = 6;
      if ((float)param_2[4] <= 1.0) {
        uVar2 = 5;
      }
    }
    else if (2.0 < fVar6) {
      uVar2 = 4;
      if (400 < param_2[5]) {
        uVar2 = 10;
      }
    }
    else {
      uVar2 = 3;
      if (0.5 < (float)param_2[4]) {
        uVar2 = 2;
      }
    }
  }
LAB_00325cc4:
  *(undefined4 *)(param_1 + 0x698) = uVar2;
LAB_00325cc8:
  fVar6 = (float)FUN_0029e688(0x41200000,(float)*param_2 / 2000.0);
  uVar1 = (undefined2)(int)(fVar6 * fGpffff80dc);
  *(undefined2 *)(param_1 + 0x69e) = uVar1;
  *(undefined2 *)(param_1 + 0x69c) = uVar1;
  return;
}


// ==== FUN_00325d20 @ 00325d20 ====

long FUN_00325d20(long param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  
  FUN_0036d518();
  iVar8 = (int)param_1;
  uVar2 = *(ulong *)(iVar8 + 0x58) & 3;
  uVar6 = 0x18;
  if (uVar2 != 2) {
    uVar6 = 0;
  }
  uVar9 = 0x30;
  if (uVar2 == 1) {
    uVar9 = 0x18;
  }
  lVar10 = 0;
  if (uVar6 < uVar9) {
    piVar7 = &DAT_0045be40 + uVar6;
    iVar3 = uVar6 * 2 + -0x30;
    uVar5 = uVar6;
    do {
      if (*piVar7 == 0) {
        *piVar7 = iVar8;
        *(uint *)(iVar8 + 0x30) = iGpffff8aa0 + uVar5 * 0x20;
        *(undefined1 *)(iGpffff8aa0 + uVar5 + 0x600) = 1;
        if ((int)uVar5 < 0x18) {
          *(char *)(iVar8 + 0x5e) = (char)(uVar5 << 1);
          *(int *)(iVar8 + 0x60) = 1 << (uVar5 & 0x1f);
        }
        else {
          *(byte *)(iVar8 + 0x5e) = (byte)iVar3 | 1;
          *(int *)(iVar8 + 0x60) = 1 << (uVar5 - 0x18 & 0x1f);
        }
        puVar4 = (uint *)(iGpffff8aa0 + 0x630 + (*(byte *)(iVar8 + 0x5e) & 1) * 4);
        *puVar4 = *puVar4 | *(uint *)(iVar8 + 0x60);
        puVar4 = (uint *)(iGpffff8aa0 + 0x638 + (*(byte *)(iVar8 + 0x5e) & 1) * 4);
        *puVar4 = *puVar4 | *(uint *)(iVar8 + 0x60);
        puVar4 = (uint *)(iGpffff8aa0 + 0x640 + (*(byte *)(iVar8 + 0x5e) & 1) * 4);
        *puVar4 = *puVar4 | *(uint *)(iVar8 + 0x60);
        puVar4 = (uint *)(iGpffff8aa0 + 0x648 + (*(byte *)(iVar8 + 0x5e) & 1) * 4);
        *puVar4 = *puVar4 | *(uint *)(iVar8 + 0x60);
        puVar4 = (uint *)(iGpffff8aa0 + 0x650 + (*(byte *)(iVar8 + 0x5e) & 1) * 4);
        *puVar4 = *puVar4 | *(uint *)(iVar8 + 0x60);
        lVar10 = param_1;
        break;
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 2;
      piVar7 = piVar7 + 1;
    } while ((int)uVar5 < (int)uVar9);
  }
  if ((lVar10 != 0) && ((*(uint *)(iVar8 + 0x58) & 0x20) != 0)) {
    bVar1 = false;
    if (uVar6 < uVar9) {
      piVar7 = &DAT_0045be40 + uVar6;
      iVar3 = 4;
      do {
        if (*piVar7 == 0) {
          *piVar7 = 1;
          bVar1 = true;
          *(uint *)(iVar8 + 0x3c) = iGpffff8aa0 + uVar6 * 0x20;
          *(undefined1 *)(iGpffff8aa0 + uVar6 + 0x600) = 1;
          if ((int)uVar6 < 0x18) {
            iVar3 = 0;
          }
          puVar4 = (uint *)(iGpffff8aa0 + 0x630 + iVar3);
          uVar6 = 1 << (uVar6 - 0x18 & 0x1f);
          *puVar4 = *puVar4 | uVar6;
          puVar4 = (uint *)(iGpffff8aa0 + 0x638 + iVar3);
          *puVar4 = *puVar4 | uVar6;
          puVar4 = (uint *)(iGpffff8aa0 + 0x640 + iVar3);
          *puVar4 = *puVar4 | uVar6;
          puVar4 = (uint *)(iGpffff8aa0 + 0x648 + iVar3);
          *puVar4 = *puVar4 | uVar6;
          puVar4 = (uint *)(iGpffff8aa0 + 0x650 + iVar3);
          *puVar4 = *puVar4 | uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      } while ((int)uVar6 < (int)uVar9);
    }
    if (!bVar1) {
      *(uint *)(iVar8 + 0x58) = *(uint *)(iVar8 + 0x58) & 0xffffffdf | 0x10;
    }
  }
  FUN_0036d568();
  return lVar10;
}


// ==== FUN_00326028 @ 00326028 ====

undefined4 FUN_00326028(ulong param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  FUN_0036d518();
  uVar2 = 0x18;
  if ((param_1 & 3) != 2) {
    uVar2 = 0;
  }
  uVar4 = 0x30;
  if ((param_1 & 3) == 1) {
    uVar4 = 0x18;
  }
  param_3[1] = 0;
  *param_3 = 0;
  if (param_2 != 0) {
    if (uVar2 < uVar4) {
      piVar5 = &DAT_0045be40 + uVar2;
      iVar1 = *piVar5;
      while( true ) {
        if (iVar1 == 0) {
          *piVar5 = 1;
          *(undefined1 *)(iGpffff8aa0 + uVar2 + 0x600) = 1;
          if (uVar2 < 0x18) {
            *param_3 = *param_3 | 1 << (uVar2 & 0x1f);
          }
          else {
            param_3[1] = param_3[1] | 1 << (uVar2 - 0x18 & 0x1f);
          }
          param_2 = param_2 + -1;
        }
        piVar5 = piVar5 + 1;
        uVar2 = uVar2 + 1;
        if (param_2 == 0) goto LAB_0032618c;
        if (uVar4 <= uVar2) break;
        iVar1 = *piVar5;
      }
    }
    if (param_2 != 0) {
      uVar4 = 0;
      uVar2 = *param_3;
      while( true ) {
        uVar3 = 1 << (uVar4 & 0x1f);
        if ((uVar2 & uVar3) != 0) {
          (&DAT_0045be40)[uVar4] = 0;
          *(undefined1 *)(iGpffff8aa0 + uVar4 + 0x600) = 0;
        }
        if ((param_3[1] & uVar3) != 0) {
          (&DAT_0045be40)[uVar4 + 0x18] = 0;
          *(undefined1 *)(iGpffff8aa0 + uVar4 + 0x18 + 0x600) = 0;
        }
        uVar4 = uVar4 + 1 & 0xff;
        if (0x17 < uVar4) break;
        uVar2 = *param_3;
      }
      *param_3 = 0;
      uVar6 = 0;
      param_3[1] = 0;
    }
  }
LAB_0032618c:
  FUN_0036d568();
  return uVar6;
}


// ==== FUN_003261b8 @ 003261b8 ====

int FUN_003261b8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  FUN_0036d518();
  iVar3 = 4;
  iVar5 = 0;
  piVar4 = &DAT_0045be40;
  do {
    if (param_1 == *piVar4) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        uVar2 = (uint)(*(int *)(param_1 + 0x3c) - iGpffff8aa0) >> 5;
        *(undefined1 *)(iGpffff8aa0 + uVar2 + 0x600) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        if (uVar2 < 0x18) {
          iVar3 = 0;
        }
        puVar1 = (uint *)(iGpffff8aa0 + 0x630 + iVar3);
        uVar2 = ~(1 << (uVar2 - 0x18 & 0x1f));
        *puVar1 = *puVar1 & uVar2;
        puVar1 = (uint *)(iGpffff8aa0 + 0x638 + iVar3);
        *puVar1 = *puVar1 & uVar2;
        puVar1 = (uint *)(iGpffff8aa0 + 0x640 + iVar3);
        *puVar1 = *puVar1 & uVar2;
        puVar1 = (uint *)(iGpffff8aa0 + 0x648 + iVar3);
        *puVar1 = *puVar1 & uVar2;
        puVar1 = (uint *)(iGpffff8aa0 + 0x650 + iVar3);
        *puVar1 = *puVar1 & uVar2;
      }
      if ((*(uint *)(param_1 + 0x58) & 0x40) == 0) {
        *(undefined1 *)(iGpffff8aa0 + iVar5 + 0x600) = 0;
        *piVar4 = 0;
      }
      else {
        *piVar4 = 1;
      }
      puVar1 = (uint *)(iGpffff8aa0 + 0x630 + (*(byte *)(param_1 + 0x5e) & 1) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x60);
      puVar1 = (uint *)(iGpffff8aa0 + 0x638 + (*(byte *)(param_1 + 0x5e) & 1) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x60);
      puVar1 = (uint *)(iGpffff8aa0 + 0x640 + (*(byte *)(param_1 + 0x5e) & 1) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x60);
      puVar1 = (uint *)(iGpffff8aa0 + 0x648 + (*(byte *)(param_1 + 0x5e) & 1) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x60);
      puVar1 = (uint *)(iGpffff8aa0 + 0x650 + (*(byte *)(param_1 + 0x5e) & 1) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x60);
      iVar6 = param_1;
      break;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    iVar6 = 0;
  } while (iVar5 < 0x30);
  FUN_0036d568();
  return iVar6;
}


// ==== FUN_003263d8 @ 003263d8 ====

undefined8 FUN_003263d8(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = (int)param_1;
  FUN_0036d518();
  uVar1 = (uint)param_2;
  uVar4 = 0;
  if ((&DAT_0045be40)[uVar1] == 1) {
    (&DAT_0045be40)[uVar1] = iVar3;
    *(uint *)(iVar3 + 0x30) = iGpffff8aa0 + uVar1 * 0x20;
    *(undefined1 *)(iGpffff8aa0 + uVar1 + 0x600) = 1;
    if (param_2 < 0x18) {
      bVar2 = (byte)(uVar1 << 1);
    }
    else {
      uVar1 = uVar1 - 0x18;
      bVar2 = (char)uVar1 * '\x02' | 1;
    }
    *(int *)(iVar3 + 0x60) = 1 << (uVar1 & 0x1f);
    *(byte *)(iVar3 + 0x5e) = bVar2;
    uVar4 = param_1;
  }
  FUN_0036d568();
  return uVar4;
}


// ==== FUN_003264a0 @ 003264a0 ====

void FUN_003264a0(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  FUN_0036d518();
  puVar2 = &DAT_0045be40;
  uVar1 = 0;
  do {
    if (uVar1 < 0x18) {
      if ((*param_1 & 1 << (uVar1 & 0x1f)) != 0) {
        *puVar2 = 0;
LAB_00326508:
        *(undefined1 *)(iGpffff8aa0 + uVar1 + 0x600) = 0;
      }
    }
    else if ((param_1[1] & 1 << (uVar1 - 0x18 & 0x1f)) != 0) {
      *puVar2 = 0;
      goto LAB_00326508;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
    if (0x2f < uVar1) {
      FUN_0036d568();
      return;
    }
  } while( true );
}


// ==== FUN_00326538 @ 00326538 ====

void FUN_00326538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00310978(0x45bf80,0,param_2,param_1,param_3,param_4);
  return;
}


// ==== FUN_003265d0 @ 003265d0 ====

undefined8 FUN_003265d0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if (iGpffff8a7c != 0) {
    lVar1 = FUN_00326ed8();
    if (lVar1 == 0) {
      return 0;
    }
    iGpffff8a7c = 0;
  }
  uVar2 = FUN_0031d7a8(0x45bf80);
  return uVar2;
}


// ==== FUN_00326610 @ 00326610 ====

long FUN_00326610(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0031dc40(uGpffff8fe0,0xc,0x45bf80,0x45bfe0,&gp0xffff9010,0x3080c);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_003254d0(lVar1);
    lVar2 = FUN_0031d988(lVar1,0x3d0938,7,0x3d09e0,6);
    if ((lVar2 == 0) || (lVar2 = FUN_00326e68(), lVar2 == 0)) {
      FUN_0031d7a8(lVar1);
      lVar2 = 0;
    }
    else {
      FUN_0031ddd8(lVar1,lVar2);
      uGpffff8a7c = 1;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


// ==== FUN_003266c8 @ 003266c8 ====

void FUN_003266c8(undefined4 param_1)

{
  undefined8 uVar1;
  
  uGpffff8a9c = param_1;
  uVar1 = GetThreadId();
  FUN_003242b0(0,0,0,0x30,0,uVar1,uGpffff8a9c,0);
  SleepThread();
  return;
}


// ==== FUN_00326718 @ 00326718 ====

void FUN_00326718(int param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x13d4) != 0) {
    if (*param_2 == 0) {
      FUN_003242b0(0,0,0,0x17,0,0,0,0);
      if (iGpffff8a8c == 0) {
        iVar1 = *(int *)(param_1 + 0x13d4);
      }
      else {
        do {
          FlushCache(0);
        } while (iGpffff8a8c != 0);
        iVar1 = *(int *)(param_1 + 0x13d4);
      }
      *(undefined4 *)(param_1 + 0x13c8) = 0;
      *(undefined4 *)(param_1 + 0x13cc) = 0;
      if (iVar1 != 0) {
        FUN_00312c70();
      }
      *(undefined4 *)(param_1 + 0x13c4) = 0;
      *(undefined4 *)(param_1 + 0x13d4) = 0;
      *(undefined4 *)(param_1 + 0x13d0) = 0;
    }
    else {
      *(int *)(param_1 + 0x13c8) = param_2[2];
      iVar1 = param_2[1];
      *(int *)(param_1 + 0x13cc) = iVar1;
      lVar2 = FUN_00312ca0(iVar1 * 4 + 0x40,1,0x3080d);
      *(int *)(param_1 + 0x13d4) = (int)lVar2;
      *(uint *)(param_1 + 0x13d0) = (int)lVar2 + 0x3fU & 0xffffffc0;
      *(int *)(param_1 + 0x13c4) = *param_2;
      if (lVar2 != 0) {
        FUN_003242b0(0,0,0,0x16,0,0,*(int *)(param_1 + 0x13cc) << 3,0);
        iGpffff8a8c = 1;
      }
    }
  }
  return;
}


// ==== FUN_00326858 @ 00326858 ====

void FUN_00326858(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = GetThreadId();
  FUN_003242b0(0,0,0,0x4e,0,uVar1,param_1,0);
  SleepThread();
  return;
}


// ==== FUN_00326ac0 @ 00326ac0 ====

undefined8 FUN_00326ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00325ad0(param_1,param_3);
  return param_1;
}


// ==== FUN_00326b80 @ 00326b80 ====

undefined8 FUN_00326b80(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x13d4) != 0) {
    if (*param_3 == 0) {
      FUN_003242b0(0,0,0,0x17,0,0,0,0);
      if (iGpffff8a8c == 0) {
        iVar1 = *(int *)(iVar3 + 0x13d4);
      }
      else {
        do {
          FlushCache(0);
        } while (iGpffff8a8c != 0);
        iVar1 = *(int *)(iVar3 + 0x13d4);
      }
      *(undefined4 *)(iVar3 + 0x13c8) = 0;
      *(undefined4 *)(iVar3 + 0x13cc) = 0;
      if (iVar1 != 0) {
        FUN_00312c70();
      }
      *(undefined4 *)(iVar3 + 0x13c4) = 0;
      *(undefined4 *)(iVar3 + 0x13d4) = 0;
      *(undefined4 *)(iVar3 + 0x13d0) = 0;
    }
    else {
      *(int *)(iVar3 + 0x13c8) = param_3[2];
      iVar1 = param_3[1];
      *(int *)(iVar3 + 0x13cc) = iVar1;
      lVar2 = FUN_00312ca0(iVar1 * 4 + 0x40,1,0x3080d);
      *(int *)(iVar3 + 0x13d4) = (int)lVar2;
      *(uint *)(iVar3 + 0x13d0) = (int)lVar2 + 0x3fU & 0xffffffc0;
      *(int *)(iVar3 + 0x13c4) = *param_3;
      if (lVar2 != 0) {
        FUN_003242b0(0,0,0,0x16,0,0,*(int *)(iVar3 + 0x13cc) << 3,0);
        iGpffff8a8c = 1;
      }
    }
  }
  return param_1;
}


// ==== FUN_00326d80 @ 00326d80 ====

void FUN_00326d80(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (int)param_1;
    if (*(code **)(iVar1 + 0x1398) == (code *)0x0) {
      if ((*(code **)(iVar1 + 0x1384) != (code *)0x0) && (*(int *)(iVar1 + 0x1390) != 0)) {
        iVar1 = (**(code **)(iVar1 + 0x1384))((uint)param_3 >> 2,*(undefined4 *)(iVar1 + 5000));
        iVar1 = **(int **)(iVar1 + 4);
        if ((iVar1 != 0) && (param_2 != 0)) {
          FlushCache(0);
          FUN_003242b0(param_2,iVar1,param_3,4,0,0,0,0);
        }
      }
    }
    else {
      iVar1 = (**(code **)(iVar1 + 0x1398))(param_3,*(undefined4 *)(iVar1 + 0x139c));
      if (**(int **)(iVar1 + 4) != 0) {
        FUN_003242b0(param_2,**(int **)(iVar1 + 4),param_3,4,0,0,0,0);
      }
    }
  }
  return;
}


// ==== FUN_00326e68 @ 00326e68 ====

undefined8 FUN_00326e68(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x45bff8;
  lVar1 = FUN_00311bf8(0x45bff8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x45bff8,0x40a230,0);
    FUN_00311e60(0x45bff8,0x3d0a70,7,0x3d0b00,6);
  }
  return uVar2;
}


// ==== FUN_00326ed8 @ 00326ed8 ====

void FUN_00326ed8(void)

{
  FUN_00311ca0(0x45bff8);
  return;
}


// ==== FUN_00326ef8 @ 00326ef8 ====

void FUN_00326ef8(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0031de30(param_1,0x40a260,0);
  iVar3 = (int)param_1;
  *(undefined2 *)(iVar3 + 0x46) = 8;
  *(undefined4 *)(iVar3 + 0x40) = 0xa0;
  uVar1 = FUN_003186b0(0x30);
  if ((1 << (uVar1 & 0x1f) & 0xffffU) != 0) {
    FUN_003186b0(0x30);
  }
  uVar1 = FUN_003186b0(0x30);
  if (((1 << (uVar1 & 0x1f) & 0xffffU) == 0) ||
     (uVar1 = FUN_003186b0(0x30), (1 << (uVar1 & 0x1f) & 0xff00U) == 0)) {
    uVar1 = FUN_003186b0(0x30);
    if ((1 << (uVar1 & 0x1f) & 0xffffU) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_003186b0(0x30);
      uVar1 = 1 << (uVar1 & 0x1f) & 0xffff;
    }
    iVar2 = (char)(&DAT_003c3228)[uVar1] + -1;
  }
  else {
    uVar1 = FUN_003186b0(0x30);
    if ((1 << (uVar1 & 0x1f) & 0xffffU) == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = FUN_003186b0(0x30);
      iVar2 = (int)(1 << (uVar1 & 0x1f) & 0xffffU) >> 8;
    }
    iVar2 = (char)(&DAT_003c3228)[iVar2] + 7;
  }
  *(uint *)(iVar3 + 0x40) = iVar2 << 0x1c | 0xa0;
  *(code **)(iVar3 + 0x28) = FUN_00327070;
  *(code **)(iVar3 + 0x34) = FUN_003281d8;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(code **)(iVar3 + 0x30) = FUN_00327248;
  *(undefined1 **)(iVar3 + 0x3c) = &LAB_003281f8;
  *(undefined2 *)(iVar3 + 0x44) = 8;
  return;
}


// ==== FUN_00327070 @ 00327070 ====

undefined8 FUN_00327070(undefined8 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  iVar5 = (int)param_1;
  piVar4 = (int *)(iVar5 + 0x30);
  *(undefined4 *)(iVar5 + 0x34) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  *(uint *)(iVar5 + 0x58) = uVar1;
  if ((uVar1 & 0x40) == 0) {
    lVar2 = FUN_00325d20(param_1);
  }
  else {
    if ((uVar1 & 0x20) == 0) {
      uVar1 = param_3[1];
    }
    else {
      *(uint *)(iVar5 + 0x58) = uVar1 & 0xffffffdf | 0x10;
      uVar1 = param_3[1];
    }
    lVar2 = FUN_003263d8(param_1,uVar1);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    *(undefined4 *)(iVar5 + 0x48) = 0;
    *(undefined4 *)(iVar5 + 0xc0) = 0;
    *(undefined4 *)(iVar5 + 0x54) = 0;
    *(undefined2 *)(iVar5 + 0x5c) = 0;
    *(undefined4 *)(iVar5 + 0x38) = 0;
    *(undefined4 *)(iVar5 + 0x40) = 0;
    *(uint *)(iVar5 + 0xbc) = (int)*(uint *)(iVar5 + 0x58) >> 7 & 1;
    *(uint *)(iVar5 + 0x44) = *(uint *)(iVar5 + 0x58) & 0x38;
    *(undefined4 *)(iVar5 + 0x98) = uGpffff80f0;
    *(undefined4 *)(iVar5 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar5 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb8) = uGpffff80f4;
    *(undefined4 *)(iVar5 + 0xa0) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x9c) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xa4) = 0x3f000000;
    *(undefined4 *)(iVar5 + 0xa8) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xac) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x4c) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x50) = 0x3f800000;
    FUN_0035c6ec(&uStack_40,0,0xc);
    *(undefined8 *)(iVar5 + 0x68) = uStack_40;
    *(undefined4 *)(iVar5 + 0x70) = uStack_38;
    uVar3 = 3;
    *(undefined8 *)(iVar5 + 0x74) = uStack_40;
    *(undefined4 *)(iVar5 + 0x7c) = uStack_38;
    *(undefined8 *)(iVar5 + 0x80) = uStack_40;
    *(undefined4 *)(iVar5 + 0x88) = uStack_38;
    *(undefined8 *)(iVar5 + 0x8c) = uStack_40;
    *(undefined4 *)(iVar5 + 0x94) = uStack_38;
    *(undefined4 *)(*piVar4 + 4) = 0;
    *(undefined4 *)(*piVar4 + 8) = 0;
    if ((*(uint *)(iVar5 + 0x58) & 0x40) != 0) {
      uVar3 = 5;
    }
    *(undefined4 *)*piVar4 = uVar3;
    *(undefined4 *)(*piVar4 + 0xc) = 0x5622;
    *(undefined4 *)(*piVar4 + 0x10) = 0x40004000;
    *(undefined4 *)(*piVar4 + 0x14) = 0;
    *(undefined4 *)(*piVar4 + 0x18) = 0;
    *(undefined4 *)(*piVar4 + 0x1c) = 0;
  }
  return param_1;
}


// ==== FUN_00327248 @ 00327248 ====

undefined8 FUN_00327248(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  float *pfVar14;
  uint uVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b4;
  float fStack_b0;
  float fStack_a0;
  float fStack_9c;
  
  iVar17 = (int)param_1;
  uVar16 = *(ushort *)(iVar17 + 0x5c);
  piVar1 = *(int **)(iVar17 + 0x30);
  iVar18 = *(int *)(*(int *)(iVar17 + 0x34) + 0x20);
  if (uVar16 != 0) {
    iVar19 = *(int *)(iVar17 + 0x38);
    if ((*(uint *)(iVar17 + 0x58) & 0x40) == 0) {
      uVar7 = uVar16 & 0x200;
      if (((uVar16 & 0x40) != 0) && (iVar19 != 0)) {
        uVar8 = FUN_00328eb8(*(undefined4 *)(iVar19 + 0x4c));
        *(undefined4 *)(*(int *)(iVar17 + 0x30) + 4) = uVar8;
        if ((uVar16 & 0x200) == 0) {
          *(undefined4 *)(*(int *)(iVar17 + 0x30) + 8) = uVar8;
        }
        iVar9 = *(int *)(iVar17 + 0x30);
        if ((uVar16 & 0x80) == 0) {
          *(undefined4 *)(iVar9 + 0x18) = 0;
          iVar9 = *(int *)(iVar17 + 0x30);
        }
        *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar9 + 0x18);
        if ((uVar16 & 1) == 0) {
          uVar15 = *(uint *)(iVar19 + 0x2c);
          if ((int)uVar15 < 0) {
            *(float *)(iVar17 + 0x98) = (float)uVar15;
          }
          else {
            *(float *)(iVar17 + 0x98) = (float)(int)uVar15;
          }
          uVar16 = uVar16 | 1;
        }
        *(undefined4 *)(iVar17 + 0xa8) = 0x3f800000;
        *(undefined4 *)(iVar17 + 0xac) = 0x3f800000;
        *(undefined4 *)(iVar17 + 0xb0) = 0x3f000000;
        uVar15 = *(int *)(iVar19 + 0x54) >> 1 & 1;
        *(uint *)(iVar17 + 0xbc) = uVar15;
        if (uVar15 == 0) {
          *(undefined4 *)(iVar17 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar17 + 0xb8) = uGpffff80f8;
          *(undefined4 *)(iVar17 + 0x4c) = 0x3f800000;
          *(undefined4 *)(iVar17 + 0x50) = 0x3f800000;
          *(undefined4 *)(iVar17 + 0x48) = 0;
          uVar7 = *(ushort *)(iVar17 + 0x5c);
          *(ushort *)(iVar17 + 0x5c) = uVar7 | 1;
          *(undefined4 *)(iVar17 + 0x98) = *(undefined4 *)(iVar17 + 0x98);
          *(ushort *)(iVar17 + 0x5c) = uVar7 | 3;
          *(undefined4 *)(iVar17 + 0xa0) = *(undefined4 *)(iVar17 + 0xa0);
          if ((uVar16 & 4) == 0) {
            FUN_00328180(param_1);
          }
          if (*(int *)(iVar17 + 0xbc) != 0) goto LAB_003273c4;
          *(undefined4 *)(iVar17 + 0x48) = 0;
        }
        else {
LAB_003273c4:
          if (*(int *)(iVar18 + 0x664) < 4) {
            *(undefined4 *)(iVar17 + 0x48) = 0;
          }
          else if (*(uint *)(iVar17 + 0x44) == 0) {
            *(undefined4 *)(iVar17 + 0x48) = 0;
          }
          else {
            *(undefined4 *)(iVar17 + 0x48) = 0x10;
            if (((*(uint *)(iVar17 + 0x44) & 0x20) != 0) &&
               (iVar9 = *(int *)(iVar17 + 0x3c), iVar9 != 0)) {
              *(undefined4 *)(iVar17 + 0x48) = 0x20;
              *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xfffffff9;
            }
          }
        }
        piVar1[7] = piVar1[7] & 0xfffffff9;
        goto LAB_0032742c;
      }
    }
    else {
LAB_0032742c:
      uVar7 = uVar16 & 0x200;
    }
    if (uVar7 != 0) {
      iVar9 = *(int *)(iVar17 + 0x30);
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + *(int *)(iVar9 + 4);
    }
    if ((uVar16 & 0x100) != 0) {
      uVar15 = *(uint *)(iVar17 + 0x60);
      uVar11 = *(byte *)(iVar17 + 0x5e) & 1;
      if (0.0 < *(float *)(iVar17 + 0x9c)) {
        iVar9 = uVar11 * 4;
        puVar12 = (uint *)(iVar18 + 0x640 + iVar9);
        puVar13 = (uint *)(iVar18 + 0x648 + iVar9);
        *puVar12 = *puVar12 | uVar15;
        *puVar13 = *puVar13 | uVar15;
      }
      else {
        iVar9 = uVar11 * 4;
        puVar13 = (uint *)(iVar18 + 0x640 + iVar9);
        puVar12 = (uint *)(iVar18 + 0x648 + iVar9);
        *puVar13 = *puVar13 & ~uVar15;
        *puVar12 = *puVar12 & ~uVar15;
      }
    }
    if ((uVar16 & 1) != 0) {
      *(int *)(*(int *)(iVar17 + 0x30) + 0xc) =
           (int)(*(float *)(iVar17 + 0x98) * *(float *)(iVar17 + 0xa8));
    }
    if ((uVar16 & 6) == 0) {
      iVar9 = *(int *)(iVar17 + 0x48);
    }
    else {
      FUN_00327d10(param_1);
      iVar9 = *(int *)(iVar17 + 0x48);
    }
    if (iVar9 == 0x20) {
      piVar2 = *(int **)(iVar17 + 0x3c);
      uVar15 = FUN_00328f00(iVar19 + 0x2c);
      *piVar2 = *piVar1;
      piVar2[3] = piVar1[3];
      piVar2[4] = piVar1[4];
      piVar2[7] = piVar1[7];
      if (uVar15 < 0x8d) {
        piVar2[1] = piVar1[1];
        piVar2[2] = piVar1[2];
        piVar2[5] = piVar1[5];
        piVar2[6] = piVar1[6];
      }
      else {
        piVar2[1] = piVar1[1] + 0x80;
        piVar2[2] = piVar1[2] + 0x80;
        if (uVar15 - 0x8c < (uint)piVar1[6]) {
          piVar1[6] = uVar15 - 0x8c;
        }
        piVar2[6] = piVar1[6] + 0x80;
        uVar11 = piVar1[5] + 0x80;
        piVar2[5] = uVar11;
        if (uVar15 <= uVar11) {
          if ((piVar1[7] & 1U) == 0) {
            piVar2[5] = uVar15 - 0x1c;
          }
          else {
            piVar2[5] = uVar11 - uVar15;
          }
        }
      }
      *(undefined2 *)(iVar17 + 0x5c) = 0;
    }
    else {
      *(undefined2 *)(iVar17 + 0x5c) = 0;
    }
  }
  *(undefined4 *)(iVar17 + 0x54) = 0;
  if (*piVar1 == 3) {
    return param_1;
  }
  bVar4 = true;
  if (*piVar1 == 1) {
    bVar4 = false;
  }
  else if (*(int *)(iVar17 + 0xbc) == 0) {
    bVar4 = false;
  }
  if (bVar4) {
    uStack_c8 = *(undefined4 *)(iVar17 + 0xb4);
  }
  else {
    if (*(int *)(iVar17 + 0x40) == 0) {
      return param_1;
    }
    uStack_c8 = *(undefined4 *)(iVar17 + 0xb4);
  }
  uStack_c4 = *(undefined4 *)(iVar17 + 0xb8);
  uStack_e0 = *(undefined8 *)(iVar17 + 0x68);
  uStack_d8 = *(undefined4 *)(iVar17 + 0x70);
  uStack_d4 = *(undefined8 *)(iVar17 + 0x74);
  uStack_cc = *(undefined4 *)(iVar17 + 0x7c);
  FUN_003178f0(*(undefined4 *)(iVar18 + 0x13e0),param_1,&uStack_e0,&fStack_c0,
               *(undefined4 *)(iVar18 + 0x664),7);
  *(undefined8 *)(iVar17 + 0x80) = uStack_e0;
  *(undefined4 *)(iVar17 + 0x88) = uStack_d8;
  *(undefined8 *)(iVar17 + 0x8c) = uStack_d4;
  *(undefined4 *)(iVar17 + 0x94) = uStack_cc;
  piVar2 = *(int **)(iVar17 + 0x40);
  uVar15 = 0;
  if (piVar2 != (int *)0x0) {
    fVar24 = 0.0;
    iVar19 = *piVar2;
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    uVar11 = *(uint *)(iVar19 + 4);
    iVar9 = *(int *)(iVar19 + 0xc);
    do {
      switch(*(undefined4 *)(uVar15 * 0xc + iVar9 + 4)) {
      case 1:
        fStack_a0 = fStack_a0 - *(float *)(uVar15 * 4 + piVar2[1]);
        goto LAB_00327770;
      case 2:
        fStack_a0 = fStack_a0 + *(float *)(uVar15 * 4 + piVar2[1]);
LAB_00327770:
        fStack_9c = fStack_9c + *(float *)(uVar15 * 4 + piVar2[1]);
        break;
      case 3:
        fStack_a0 = fStack_a0 - *(float *)(uVar15 * 4 + piVar2[1]);
        goto LAB_003277a8;
      case 4:
        fStack_a0 = fStack_a0 + *(float *)(uVar15 * 4 + piVar2[1]);
LAB_003277a8:
        fStack_9c = fStack_9c - *(float *)(uVar15 * 4 + piVar2[1]);
        break;
      case 5:
        fVar24 = *(float *)(uVar15 * 4 + piVar2[1]);
        break;
      case 7:
        uVar10 = *(byte *)(iVar17 + 0x5e) & 1;
        uVar3 = *(uint *)(iVar17 + 0x60);
        if (0.0 < *(float *)(uVar15 * 4 + piVar2[1])) {
          iVar20 = uVar10 * 4;
          puVar12 = (uint *)(iVar18 + 0x640 + iVar20);
          puVar13 = (uint *)(iVar18 + 0x648 + iVar20);
          *puVar12 = *puVar12 | uVar3;
          *puVar13 = *puVar13 | uVar3;
        }
        else {
          iVar20 = uVar10 * 4;
          puVar13 = (uint *)(iVar18 + 0x640 + iVar20);
          puVar12 = (uint *)(iVar18 + 0x648 + iVar20);
          *puVar13 = *puVar13 & ~uVar3;
          *puVar12 = *puVar12 & ~uVar3;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 <= uVar11);
    if (*(int *)(iVar19 + 0x10) != 0) {
      fStack_c0 = (float)FUN_002a76c0(&fStack_a0);
      if (1.0 < fStack_c0) {
        fStack_c0 = 1.0;
      }
      if (*(int *)(iVar17 + 0x48) == 0) {
        fVar21 = 0.5;
        fStack_a0 = fStack_a0 * 0.5;
        if ((0.5 < fStack_a0) || (fVar21 = -0.5, fStack_a0 < -0.5)) {
          fStack_9c = 0.0;
          fStack_a0 = fVar21;
        }
        else {
          fStack_9c = 0.0;
        }
      }
      else if (0.0 < fStack_c0) {
        FUN_002a76e0(&fStack_a0,&fStack_a0);
        fStack_a0 = fStack_a0 * 0.5;
        fStack_9c = fStack_9c * 0.5;
      }
      fStack_a0 = fStack_a0 + 0.5;
      fStack_9c = 0.5 - fStack_9c;
    }
    if (0.0 < fVar24) {
      fStack_9c = 0.0;
      fStack_a0 = 0.5;
      fStack_c0 = fVar24;
    }
    fStack_b0 = fStack_9c;
    fStack_b4 = fStack_a0;
  }
  *(float *)(iVar17 + 0xac) = fStack_c0;
  if ((*(uint *)(iVar17 + 0x58) & 4) != 0) {
    *(undefined4 *)(iVar17 + 0xa8) = uStack_bc;
  }
  *(float *)(iVar17 + 0xb0) = fStack_b4;
  if (*(uint *)(iVar17 + 0x48) != 0) {
    fVar24 = *(float *)(iVar17 + 0xc0);
    *(float *)(iVar17 + 0xc0) = fStack_b0;
    iVar18 = (int)(fStack_b0 * 255.0);
    iVar19 = (int)(fStack_b4 * 255.0);
    if ((*(uint *)(iVar17 + 0x48) & 0x20) == 0) {
      bVar6 = false;
      bVar4 = 0x7f < iVar18;
      bVar5 = false;
      if (bVar4) {
        pfVar14 = (float *)(&DAT_003cef80 + (0xff - iVar18) * 4);
        *(float *)(iVar17 + 0x4c) = *(float *)(&DAT_003cef80 + iVar19 * 4) * *pfVar14;
        fVar21 = *(float *)(&DAT_003cef80 + (0xff - iVar19) * 4);
      }
      else {
        pfVar14 = (float *)(&DAT_003cef80 + iVar18 * 4);
        *(float *)(iVar17 + 0x4c) = *(float *)(&DAT_003cef80 + iVar19 * 4) * *pfVar14;
        fVar21 = *(float *)(&DAT_003cef80 + (0xff - iVar19) * 4);
      }
      *(float *)(iVar17 + 0x50) = fVar21 * *pfVar14;
      uVar15 = piVar1[7];
      uVar11 = uVar15 & 6;
      if ((uVar11 == 4) || (uVar11 == 2)) {
        uVar11 = 1;
      }
      if ((int)(fVar24 * 255.0) < 0x80) {
        if (bVar4) {
          bVar5 = true;
        }
        else {
          bVar6 = uVar11 != 0;
        }
      }
      else if (bVar4) {
        bVar5 = uVar11 == 0;
      }
      else {
        bVar6 = true;
      }
      if (bVar5) {
        if (*(float *)(iVar17 + 0x4c) < *(float *)(iVar17 + 0x50)) {
          if ((uVar15 & 2) == 0) {
            uVar11 = uVar15 | 4;
            goto LAB_00327ca8;
          }
          uVar11 = 0xfffffffb;
        }
        else {
          if ((uVar15 & 4) == 0) {
            piVar1[7] = uVar15 | 2;
            goto LAB_00327cac;
          }
LAB_00327c9c:
          uVar11 = 0xfffffffd;
        }
LAB_00327ca4:
        uVar11 = uVar15 & uVar11;
      }
      else {
        if (!bVar6) {
          uVar15 = *(uint *)(iVar17 + 0x48);
          goto LAB_00327cb0;
        }
        if (*(float *)(iVar17 + 0x4c) < *(float *)(iVar17 + 0x50)) {
          if ((uVar15 & 2) == 0) {
            uVar11 = 0xfffffffb;
            goto LAB_00327ca4;
          }
          uVar11 = uVar15 | 4;
        }
        else {
          uVar11 = uVar15 | 2;
          if ((uVar15 & 4) == 0) goto LAB_00327c9c;
        }
      }
LAB_00327ca8:
      piVar1[7] = uVar11;
    }
    else {
      fVar23 = *(float *)(&DAT_003cef80 + (0xff - iVar18) * 4);
      iVar20 = (int)((fStack_b4 * fGpffff80fc + fGpffff8100) * 255.0);
      iVar9 = *(int *)(iVar17 + 0x3c);
      fVar21 = *(float *)(&DAT_003cef80 + (0xff - iVar20) * 4);
      fVar22 = *(float *)(&DAT_003cef80 + iVar20 * 4);
      *(float *)(iVar17 + 0x4c) =
           *(float *)(&DAT_003cef80 + iVar19 * 4) * *(float *)(&DAT_003cef80 + iVar18 * 4);
      iVar20 = (int)(*(float *)(iVar17 + 0x98) * *(float *)(iVar17 + 0xa8));
      *(float *)(iVar17 + 0x50) =
           *(float *)(&DAT_003cef80 + (0xff - iVar19) * 4) * *(float *)(&DAT_003cef80 + iVar18 * 4);
      piVar1[3] = iVar20;
      *(int *)(iVar9 + 0xc) = iVar20;
      fVar24 = *(float *)(iVar17 + 0xa0) * *(float *)(iVar17 + 0xac);
      piVar1[4] = (int)(*(float *)(iVar17 + 0x50) * fVar24 * fGpffff8104) |
                  (int)(*(float *)(iVar17 + 0x4c) * fVar24 * fGpffff8104) << 0x10;
      *(int *)(iVar9 + 0x10) =
           (int)(-fVar21 * fVar23 * fVar24 * fGpffff8104) |
           (int)(fVar22 * fVar23 * fVar24 * fGpffff8104) << 0x10;
    }
  }
LAB_00327cac:
  uVar15 = *(uint *)(iVar17 + 0x48);
LAB_00327cb0:
  if ((uVar15 & 0x20) == 0) {
    *(ushort *)(iVar17 + 0x5c) = *(ushort *)(iVar17 + 0x5c) | 1;
    *(undefined4 *)(iVar17 + 0x98) = *(undefined4 *)(iVar17 + 0x98);
    FUN_00327d10(param_1);
  }
  return param_1;
}


// ==== FUN_00327d10 @ 00327d10 ====

void FUN_00327d10(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  piVar1 = *(int **)(param_1 + 0x20);
  fVar5 = (float)piVar1[0x1c] * (float)piVar1[0x1f];
  if ((piVar1[6] & 0x18U) != 0) {
    fVar4 = (float)piVar1[7] * fVar5 * fGpffff8108;
    fVar5 = (float)piVar1[8] * fVar5 * fGpffff8108;
    goto LAB_00327f10;
  }
  if ((piVar1[6] & 0x20U) != 0) {
    return;
  }
  if (piVar1[0x23] == 0) {
    fVar6 = (float)piVar1[0x1d];
  }
  else {
    fVar6 = (float)piVar1[0x20];
  }
  fVar6 = fVar6 - 0.5;
  switch(*(undefined4 *)(*(int *)(piVar1[1] + 0x20) + 0x664)) {
  case 1:
  case 4:
  case 5:
    break;
  case 2:
    fVar6 = fVar6 * 0.0;
    break;
  case 3:
    fVar6 = fVar6 * fGpffff810c;
    break;
  default:
    goto switchD_00327db8_default;
  }
switchD_00327db8_default:
  fVar6 = fVar6 + 0.5;
  fVar4 = 1.0 - fVar6;
  if (fVar4 != 0.0) {
    uVar3 = ((uint)fVar4 >> 0x17) - 0x7f;
    uVar2 = (uint)fVar4 & 0x7fffff;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar2 | 0x800000;
    }
    fVar4 = (float)((int)*(short *)(&DAT_003ced80 + (uVar2 >> 0x10) * 2) << 0x10 |
                   (((int)(uVar3 * 0x10000) >> 0x11) + 0x7f) * 0x800000);
  }
  if (fVar6 != 0.0) {
    uVar3 = ((uint)fVar6 >> 0x17) - 0x7f;
    uVar2 = (uint)fVar6 & 0x7fffff;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar2 | 0x800000;
    }
    fVar6 = (float)((int)*(short *)(&DAT_003ced80 + (uVar2 >> 0x10) * 2) << 0x10 |
                   (((int)(uVar3 * 0x10000) >> 0x11) + 0x7f) * 0x800000);
  }
  fVar4 = fVar4 * fVar5 * fGpffff8110;
  fVar5 = fVar6 * fVar5 * fGpffff8110;
LAB_00327f10:
  *(int *)(*piVar1 + 0x10) = (int)fVar5 | (int)fVar4 << 0x10;
  return;
}


// ==== FUN_00327f20 @ 00327f20 ====

void FUN_00327f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00310978(0x45c020,param_1,param_3,param_2,param_4,param_5);
  return;
}


// ==== FUN_00327f58 @ 00327f58 ====

long FUN_00327f58(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0031deb8(0,0x40a0f0,0);
  lVar2 = FUN_0031dc40(uVar1,0,0x45c020,0,0,0x3080e);
  lVar3 = 0;
  if (lVar2 != 0) {
    FUN_00326ef8(lVar2);
    lVar3 = lVar2;
  }
  return lVar3;
}


// ==== FUN_00327fc8 @ 00327fc8 ====

undefined8 FUN_00327fc8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if (iGpffff8aa4 != 0) {
    lVar1 = FUN_003286b0();
    if (lVar1 == 0) {
      return 0;
    }
    iGpffff8aa4 = 0;
  }
  uVar2 = FUN_0031d7a8(0x45c020);
  return uVar2;
}


// ==== FUN_00328008 @ 00328008 ====

long FUN_00328008(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0031deb8(0,0x40a0f0,0);
  lVar2 = FUN_0031dc40(uVar1,0xc,0x45c020,0x45c080,0x40e810,0x3080e);
  lVar3 = 0;
  if (lVar2 != 0) {
    FUN_00326ef8(lVar2);
    lVar3 = FUN_0031d988(lVar2,0x3d0b78,0x10,0x3d0cf8,0x11);
    if ((lVar3 == 0) || (lVar3 = FUN_00328640(), lVar3 == 0)) {
      FUN_0031d7a8(lVar2);
      lVar3 = 0;
    }
    else {
      FUN_0031ddd8(lVar2,lVar3);
      DAT_0040e294 = 1;
      lVar3 = lVar2;
    }
  }
  return lVar3;
}


// ==== FUN_00328108 @ 00328108 ====

void FUN_00328108(int param_1,long param_2)

{
  if (param_2 == 0) {
    *(uint *)(*(int *)(param_1 + 0x30) + 0x1c) =
         *(uint *)(*(int *)(param_1 + 0x30) + 0x1c) & 0xfffffffe;
    return;
  }
  *(uint *)(*(int *)(param_1 + 0x30) + 0x1c) = *(uint *)(*(int *)(param_1 + 0x30) + 0x1c) | 1;
  return;
}


// ==== FUN_00328140 @ 00328140 ====

void FUN_00328140(int param_1,long param_2)

{
  ushort uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    **(undefined4 **)(param_1 + 0x30) = 1;
  }
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x5c);
  }
  else {
    *(uint *)(param_1 + 0xbc) = *(int *)((int)param_2 + 0x54) >> 1 & 1;
    uVar1 = *(ushort *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x38) = (int)param_2;
  *(ushort *)(param_1 + 0x5c) = uVar1 | 0x40;
  return;
}


// ==== FUN_00328180 @ 00328180 ====

void FUN_00328180(float param_1,int param_2)

{
  *(ushort *)(param_2 + 0x5c) = *(ushort *)(param_2 + 0x5c) | 4;
  *(float *)(param_2 + 0xa4) = param_1 * 0.5 + 0.5;
  return;
}


// ==== FUN_003281b0 @ 003281b0 ====

void FUN_003281b0(undefined4 param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 2) != 0) {
    *(undefined4 *)(param_2 + 0x9c) = param_1;
    *(ushort *)(param_2 + 0x5c) = *(ushort *)(param_2 + 0x5c) | 0x100;
  }
  return;
}


// ==== FUN_003281d8 @ 003281d8 ====

void FUN_003281d8(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_003261b8();
  return;
}


// ==== FUN_00328640 @ 00328640 ====

undefined8 FUN_00328640(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x45c098;
  lVar1 = FUN_00311bf8(0x45c098);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x45c098,0x40a2a8,0);
    FUN_00311e60(0x45c098,0x3d0e90,0x10,0x3d0fd0,0x11);
  }
  return uVar2;
}


// ==== FUN_003286b0 @ 003286b0 ====

void FUN_003286b0(void)

{
  FUN_00311ca0(0x45c098);
  return;
}


// ==== FUN_003286d0 @ 003286d0 ====

long FUN_003286d0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  uVar1 = FUN_0031deb8(0,0x40a0f0,0);
  lVar2 = FUN_00314760(uVar1,0x45c0c0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00315278(lVar2,0x40a2d8,0);
    iVar4 = (int)lVar2;
    *(code **)(iVar4 + 0xc) = FUN_003287f0;
    *(code **)(iVar4 + 0x10) = FUN_00329078;
    *(code **)(iVar4 + 0x14) = FUN_00328968;
    *(code **)(iVar4 + 0x1c) = FUN_00328bc0;
    *(undefined1 **)(iVar4 + 0x18) = &LAB_00328bb8;
    *(code **)(iVar4 + 0x20) = FUN_003290d8;
    *(code **)(iVar4 + 0x2c) = FUN_003291e0;
    *(code **)(iVar4 + 0x24) = FUN_00329110;
    *(code **)(iVar4 + 0x28) = FUN_00329278;
    FUN_003153c0(lVar2,0x3d1128,2);
    lVar3 = FUN_0031deb8(0,0x409f20,0);
    if (lVar3 != 0) {
      iVar4 = *(int *)((int)lVar3 + 0x54);
      *(undefined4 *)(iVar4 + 8) = 2;
      *(undefined ***)(iVar4 + 4) = &PTR_PTR_003d1130;
    }
  }
  return lVar2;
}


// ==== FUN_003287f0 @ 003287f0 ====

undefined8 FUN_003287f0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined3 uStack_53;
  undefined8 uStack_50;
  uint uStack_48;
  
  iVar5 = (int)param_1;
  puVar6 = (undefined8 *)(iVar5 + 0x2c);
  lVar3 = FUN_003150d0(0x409840,puVar6);
  if (lVar3 == 0) {
    if ((*(byte *)(iVar5 + 0x29) & 1) == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(iVar5 + 0x14);
  }
  else {
    uVar1 = *(undefined4 *)(iVar5 + 0x14);
  }
  lVar3 = FUN_00316400(uVar1,0x4092d0);
  if ((lVar3 == 0) || ((*(byte *)(iVar5 + 0x29) & 1) == 0)) {
    uVar4 = FUN_00328df8(*(undefined4 *)(iVar5 + 0x34));
    *(int *)(iVar5 + 0x4c) = (int)uVar4;
    *(undefined4 *)(iVar5 + 0x50) = 1;
    uStack_50 = *(undefined8 *)(iVar5 + 0x3c);
    uStack_53 = (undefined3)((ulong)*(undefined8 *)(iVar5 + 0x34) >> 0x28);
    _uStack_58 = CONCAT14(0x10,(int)*(undefined8 *)(iVar5 + 0x34));
    _uStack_60 = CONCAT44(&DAT_004092e0,(int)*puVar6);
    uStack_48 = *(uint *)(iVar5 + 0x44) & 0xffffff00;
    iVar2 = FUN_00321f10(puVar6,uVar4,&uStack_60);
  }
  else {
    lVar3 = FUN_00316400(*(undefined4 *)(iVar5 + 0x14),0x4092e0);
    if (lVar3 == 0) {
      uVar1 = FUN_00312ca0(*(int *)(iVar5 + 0x18) << 1,1,0x30806);
      *(undefined4 *)(iVar5 + 0x4c) = uVar1;
      *(undefined4 *)(iVar5 + 0x50) = 4;
      iVar2 = *(int *)(iVar5 + 0x18) << 3;
    }
    else {
      uVar1 = FUN_00312ca0(*(undefined4 *)(iVar5 + 0x18),1,0x30806);
      *(undefined4 *)(iVar5 + 0x4c) = uVar1;
      *(undefined4 *)(iVar5 + 0x50) = 1;
      iVar2 = *(int *)(iVar5 + 0x18);
    }
  }
  *(int *)(iVar5 + 0x48) = iVar2;
  uVar4 = 0;
  if (*(int *)(iVar5 + 0x4c) != 0) {
    uVar4 = param_1;
  }
  return uVar4;
}


// ==== FUN_00328968 @ 00328968 ====

undefined8 FUN_00328968(undefined8 param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  
  iVar11 = (int)param_1;
  uVar5 = *(uint *)(iVar11 + 0x50);
  if ((uVar5 & 1) == 0) {
    if ((uVar5 & 2) == 0) {
      if ((uVar5 & 4) == 0) {
        param_1 = 0;
      }
      else {
        uVar5 = 0;
        puVar3 = (undefined8 *)(*(int *)(iVar11 + 0x4c) + param_2 * 2);
        if (param_4 != 0) {
          uVar4 = (uint)param_3 | (uint)puVar3;
          do {
            if ((uVar4 & 7) == 0) {
              puVar7 = puVar3;
              puVar6 = param_3;
              do {
                uVar8 = puVar6[1];
                uVar9 = puVar6[2];
                uVar10 = puVar6[3];
                *puVar7 = *puVar6;
                puVar7[1] = uVar8;
                puVar7[2] = uVar9;
                puVar7[3] = uVar10;
                puVar6 = puVar6 + 4;
                puVar7 = puVar7 + 4;
              } while (puVar6 != param_3 + 0x40);
            }
            else {
              puVar7 = puVar3;
              puVar6 = param_3;
              do {
                uVar8 = puVar6[1];
                uVar9 = puVar6[2];
                uVar10 = puVar6[3];
                *puVar7 = *puVar6;
                puVar7[1] = uVar8;
                puVar7[2] = uVar9;
                puVar7[3] = uVar10;
                puVar6 = puVar6 + 4;
                puVar7 = puVar7 + 4;
              } while (puVar6 != param_3 + 0x40);
            }
            param_3 = param_3 + 0x40;
            uVar5 = uVar5 + 0x200;
            puVar3 = puVar3 + 0x80;
            uVar4 = (uint)param_3 | (uint)puVar3;
          } while (uVar5 < param_4);
        }
      }
    }
    else {
      FUN_0035c544(*(int *)(iVar11 + 0x4c) + param_2,param_3,param_4);
    }
  }
  else {
    bVar1 = false;
    uVar5 = param_2 + param_4;
    if ((param_2 < 2) && (uVar5 != 0)) {
      bVar1 = *(char *)((int)param_3 + 1) == '\0';
    }
    if (param_2 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((int)param_3 + (param_4 - (uVar5 - 1))) = 6;
      }
      iVar2 = *(int *)(iVar11 + 0x34);
    }
    else {
      iVar2 = *(int *)(iVar11 + 0x34);
    }
    uVar4 = iVar2 - 0xf;
    if ((param_2 <= uVar4) && (uVar4 <= uVar5)) {
      *(undefined1 *)((int)param_3 + (param_4 - (uVar5 - uVar4))) = 3;
    }
    if (((bVar1) && (uVar4 = *(int *)(iVar11 + 0x34) - 0x1f, param_2 <= uVar4)) && (uVar4 <= uVar5))
    {
      *(undefined1 *)((int)param_3 + (param_4 - (uVar5 - uVar4))) = 3;
    }
    FUN_003680a0(param_3,(int)param_3 + (param_4 - 1));
    FUN_00329170(*(undefined4 *)(iVar11 + 0x4c),param_2,param_3,param_4);
  }
  return param_1;
}


// ==== FUN_00328bc0 @ 00328bc0 ====

void FUN_00328bc0(void)

{
  FUN_00324640();
  return;
}


// ==== FUN_00328be0 @ 00328be0 ====

bool FUN_00328be0(void)

{
  long lVar1;
  
  lVar1 = FUN_003152c8(0x45c0c0);
  return lVar1 != 0;
}


// ==== FUN_00328c08 @ 00328c08 ====

void FUN_00328c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00315790(0x45c0c0,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== FUN_00328c50 @ 00328c50 ====

void FUN_00328c50(void)

{
  FUN_00315f28();
  return;
}


// ==== FUN_00328c70 @ 00328c70 ====

int FUN_00328c70(void)

{
  int iVar1;
  
  if (DAT_003d1140 == (code *)0x0) {
    iVar1 = FUN_00329848(0x45c120);
    iVar1 = iVar1 * DAT_0045c134;
  }
  else {
    iVar1 = (*DAT_003d1140)();
  }
  return iVar1;
}


// ==== FUN_00328cc0 @ 00328cc0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00328cc0(undefined8 *param_1)

{
  _DAT_003d1138 = *param_1;
  DAT_003d1140 = *(undefined4 *)(param_1 + 1);
  return;
}


// ==== FUN_00328ce8 @ 00328ce8 ====

undefined4 FUN_00328ce8(undefined8 param_1,undefined8 param_2)

{
  FUN_003299e8(0x45c120,param_1,param_2,1);
  return 1;
}


// ==== FUN_00328d18 @ 00328d18 ====

void FUN_00328d18(undefined8 param_1,undefined8 param_2)

{
  FUN_003299e8(0x45c120,param_1,param_2,0);
  return;
}


// ==== FUN_00328d58 @ 00328d58 ====

void FUN_00328d58(void)

{
  FUN_00329370(0,0x200000,0x80,0x45c120,0x45c138);
  FUN_003299e8(0x45c120,0,0x5400,1);
  return;
}


// ==== FUN_00328db0 @ 00328db0 ====

void FUN_00328db0(void)

{
  FUN_003299e8(0x45c120,0,0x5400,0);
  FUN_00329958(0x45c120);
  return;
}


// ==== FUN_00328df8 @ 00328df8 ====

int FUN_00328df8(undefined8 param_1)

{
  int iVar1;
  int aiStack_30 [4];
  
  FUN_0036d518();
  if (DAT_003d1138 == (code *)0x0) {
    FUN_00329588(0x45c120,param_1,aiStack_30);
    FUN_0036d568();
    iVar1 = aiStack_30[0];
  }
  else {
    iVar1 = (*DAT_003d1138)(param_1);
    FUN_0036d568();
  }
  return iVar1;
}


// ==== FUN_00328e60 @ 00328e60 ====

void FUN_00328e60(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  FUN_0036d518();
  if (DAT_003d113c == (code *)0x0) {
    FUN_00329710(0x45c120,auStack_20);
    FUN_0036d568();
  }
  else {
    (*DAT_003d113c)(auStack_20[0]);
    FUN_0036d568();
  }
  return;
}


// ==== FUN_00328eb8 @ 00328eb8 ====

uint FUN_00328eb8(uint param_1)

{
  if (DAT_003d1138 != 0) {
    return param_1;
  }
  return (param_1 & (1 << (DAT_0045c128 & 0x1f)) - 1U) * DAT_0045c134 + DAT_0045c12c;
}


// ==== FUN_00328f00 @ 00328f00 ====

uint FUN_00328f00(int param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar2 = FUN_00316400(*(undefined4 *)(param_1 + 4),0x4092d0);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + 0xd) == '\x01') {
      uVar3 = (uVar1 >> 4) * 0x1c;
    }
    else {
      uVar3 = 0;
      if (*(char *)(param_1 + 0xd) == '\x02') {
        uVar3 = (uVar1 >> 4) * 0x1c >> 1;
      }
    }
  }
  else {
    lVar2 = FUN_00316400(*(undefined4 *)(param_1 + 4),0x4092e0);
    uVar3 = 0;
    if ((lVar2 == 0) && (uVar3 = 0, *(char *)(param_1 + 0xc) == DAT_004097b4)) {
      if (*(char *)(param_1 + 0xd) == '\x01') {
        uVar3 = uVar1 >> 1;
      }
      else {
        uVar3 = 0;
        if (*(char *)(param_1 + 0xd) == '\x02') {
          uVar3 = uVar1 >> 2;
        }
      }
    }
  }
  return uVar3;
}


// ==== FUN_00328ff0 @ 00328ff0 ====

ulong FUN_00328ff0(ulong param_1)

{
  FUN_0036d518();
  if ((param_1 & bGpffff8aa8) != 0) {
    param_1 = 0;
  }
  bGpffff8aa8 = bGpffff8aa8 | (byte)param_1;
  FUN_0036d568();
  return param_1;
}


// ==== FUN_00329030 @ 00329030 ====

ulong FUN_00329030(ulong param_1)

{
  ulong uVar1;
  
  FUN_0036d518();
  uVar1 = (ulong)bGpffff8aa8;
  bGpffff8aa8 = bGpffff8aa8 & (byte)~(param_1 & uVar1);
  FUN_0036d568();
  return param_1 & ~(param_1 & uVar1);
}


// ==== FUN_00329078 @ 00329078 ====

void FUN_00329078(int param_1)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + 0x29) & 1) == 0) ||
     (lVar1 = FUN_00316400(*(undefined4 *)(param_1 + 0x14),0x4092d0), lVar1 == 0)) {
    FUN_00328e60(*(undefined4 *)(param_1 + 0x4c));
  }
  else {
    FUN_00312c70(*(undefined4 *)(param_1 + 0x4c));
  }
  return;
}


// ==== FUN_003290d8 @ 003290d8 ====

undefined4 FUN_003290d8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_003287f0(param_1,*(undefined4 *)((int)param_1 + 0x58));
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)param_1 + 0x4c);
  }
  return uVar1;
}


// ==== FUN_00329110 @ 00329110 ====

void FUN_00329110(int param_1)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + 0x29) & 1) == 0) ||
     (lVar1 = FUN_00316400(*(undefined4 *)(param_1 + 0x14),0x4092d0), lVar1 == 0)) {
    FUN_00328e60(*(undefined4 *)(param_1 + 0x4c));
  }
  else {
    FUN_00312c70(*(undefined4 *)(param_1 + 0x4c));
  }
  return;
}


// ==== FUN_00329170 @ 00329170 ====

void FUN_00329170(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00328eb8();
  FUN_003242b0(iVar1 + param_2,param_3,param_4 + 0x3fU & 0xffffffc0,7,0,0,0,0);
  return;
}


// ==== FUN_003291e0 @ 003291e0 ====

void FUN_003291e0(int param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iStack_30;
  int iStack_2c;
  
  iStack_30 = (int)param_2;
  if (param_3 == 0) {
    if (DAT_003d1138 == 0) {
      uVar1 = FUN_00329928(0x45c120,param_2,*(undefined4 *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      return;
    }
    iStack_2c = *(int *)(param_1 + 0x4c) - iStack_30;
  }
  else if (DAT_003d1138 != 0) {
    iStack_2c = *(int *)(param_1 + 0x4c) + iStack_30;
  }
  else {
    FUN_003298d8(0x45c120,&iStack_30,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x18)
                 ,0x10,(uint)&iStack_30 | 4);
  }
  *(int *)(param_1 + 0x4c) = iStack_2c;
  return;
}


// ==== FUN_00329278 @ 00329278 ====

int FUN_00329278(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00324640();
  iVar1 = 0;
  if (lVar2 == 0) {
    if (iGpffff8aac == 0) {
      if (iGpffff8a6c == 0) {
        FUN_00324de8(0x10000);
      }
      if (uGpffff8a70 <= param_4) {
        param_4 = uGpffff8a70;
      }
      lVar2 = FUN_00324d98(param_1,0);
      if (lVar2 != 0) {
        iGpffff8aac = 0;
        FUN_00324a88(param_1,iGpffff8a6c,param_3,param_4,&iGpffff8aac,0,0);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00328eb8(param_2);
      FUN_003242b0(iVar1 + (int)param_3,iGpffff8a6c,iGpffff8aac + 0x3fU & 0xffffffc0,5,0,0,0,0);
      iVar1 = iGpffff8aac;
      iGpffff8aac = 0;
    }
  }
  return iVar1;
}


// ==== FUN_00329370 @ 00329370 ====

long FUN_00329370(undefined4 param_1,int param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  byte bStack_ac;
  
  bStack_ac = 0;
  if (param_4 == 0) {
    param_4 = FUN_00317a78(0x45c960,0x30800);
    bStack_ac = 1;
    if (param_4 == 0) {
      return 0;
    }
  }
  if (param_3 == 0) {
    trap(7);
  }
  uVar3 = param_2 / (int)param_3 + 7;
  bVar1 = false;
  if ((uVar3 & 0xffff0000) == 0) {
    if ((uVar3 & 0xff00) == 0) {
      cVar6 = (&DAT_003c3228)[uVar3 & 0xfffffff8];
    }
    else {
      cVar6 = (&DAT_003c3228)[uVar3 >> 8] + '\b';
    }
  }
  else if ((uVar3 >> 0x10 & 0xff00) == 0) {
    cVar6 = (&DAT_003c3228)[uVar3 >> 0x10] + '\x10';
  }
  else {
    cVar6 = (&DAT_003c3228)[uVar3 >> 0x18] + '\x18';
  }
  uVar3 = uVar3 >> 3;
  lVar2 = param_4;
  if (param_4 == 0) {
    lVar2 = FUN_00317a78(0x45c938,0x30800);
    bVar1 = true;
    if (lVar2 == 0) goto LAB_00329544;
  }
  puVar4 = (undefined4 *)lVar2;
  if (param_5 == 0) {
    param_5 = FUN_00312c48(uVar3,0x30000);
    if (param_5 != 0) {
      *(char *)(puVar4 + 2) = cVar6;
      goto LAB_003294d8;
    }
    if (bVar1) {
      FUN_00317c20(0x45c938,lVar2);
    }
    lVar2 = 0;
  }
  else {
    *(char *)(puVar4 + 2) = cVar6;
LAB_003294d8:
    *puVar4 = (int)param_5;
    FUN_0035c6ec(param_5,0,uVar3);
    puVar4[1] = uVar3;
    *(bool *)((int)puVar4 + 9) = bVar1;
  }
  if (lVar2 != 0) {
    iVar5 = (int)param_4;
    *(int *)(iVar5 + 0x14) = (int)param_3;
    *(byte *)(iVar5 + 9) = *(byte *)(iVar5 + 9) | bStack_ac;
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    *(int *)(iVar5 + 0x10) = param_2;
    return param_4;
  }
LAB_00329544:
  FUN_00317c20(0x45c960,param_4);
  return 0;
}


// ==== FUN_00329588 @ 00329588 ====

bool FUN_00329588(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  uVar6 = 0;
  uVar8 = 0;
  uVar5 = 0;
  piVar10 = (int *)param_1;
  iVar3 = piVar10[5];
  if (iVar3 == 0) {
    trap(7);
  }
  uVar1 = (param_2 + -1 + iVar3 & -iVar3) / iVar3;
  bVar4 = uVar1 != 0;
  if (piVar10[1] != 0) {
    uVar7 = 0;
    uVar9 = uVar5;
    do {
      cVar2 = *(char *)(*piVar10 + uVar6);
      if (cVar2 == '\0') {
        if (uVar9 == 0) {
          uVar8 = uVar7;
        }
        uVar9 = uVar9 + 8;
LAB_00329674:
        bVar4 = uVar9 < uVar1;
      }
      else {
        uVar5 = 0;
        if (cVar2 == -1) {
          uVar8 = uVar6 << 3;
          uVar9 = 0;
          goto LAB_00329674;
        }
        do {
          bVar4 = uVar9 < uVar1;
          if (7 < uVar5) goto LAB_00329678;
          if (((int)(uint)*(byte *)(*piVar10 + uVar6) >> (uVar5 & 0x1f) & 1U) == 0) {
            if (uVar9 == 0) {
              uVar8 = uVar7 + uVar5;
            }
            uVar9 = uVar9 + 1;
          }
          else {
            uVar8 = uVar7 + uVar5;
            uVar9 = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar9 != uVar1);
        bVar4 = uVar9 < uVar1;
      }
LAB_00329678:
      uVar6 = uVar6 + 1;
      uVar5 = uVar1;
    } while ((bVar4) && (uVar7 = uVar7 + 8, uVar5 = uVar9, uVar6 < (uint)piVar10[1]));
    bVar4 = uVar5 < uVar1;
  }
  if (!bVar4) {
    FUN_00329750(param_1,uVar8,uVar5,1);
    *param_3 = uVar8 | uVar5 << (*(byte *)(piVar10 + 2) & 0x1f);
  }
  else {
    *param_3 = 0;
  }
  return !bVar4;
}


// ==== FUN_00329710 @ 00329710 ====

void FUN_00329710(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (1 << (*(byte *)(param_1 + 8) & 0x1f)) - 1;
  FUN_00329750(param_1,*param_2 & uVar1,(*param_2 & ~uVar1) >> (*(byte *)(param_1 + 8) & 0x1f),0);
  return;
}


// ==== FUN_00329750 @ 00329750 ====

void FUN_00329750(int *param_1,uint param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2 >> 3;
  uVar4 = param_2 + param_3 >> 3;
  if (uVar5 <= uVar4) {
    uVar2 = uVar5;
    do {
      uVar1 = 0;
      if (uVar2 == uVar5) {
        uVar1 = param_2 & 7;
      }
      uVar3 = 8;
      if (uVar2 == uVar4) {
        uVar3 = param_2 + param_3 & 7;
      }
      if ((uVar1 == 0) && (uVar3 == 8)) {
        *(byte *)(*param_1 + uVar2) = ~((param_4 != 0) - 1U);
      }
      else {
        for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
          *(byte *)(*param_1 + uVar2) = *(byte *)(*param_1 + uVar2) & ~(byte)(1 << (uVar1 & 0x1f));
          *(byte *)(*param_1 + uVar2) =
               *(byte *)(*param_1 + uVar2) | (param_4 != 0) << (uVar1 & 0x1f);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= uVar4);
  }
  return;
}


// ==== FUN_00329848 @ 00329848 ====

int FUN_00329848(undefined4 *param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar5 = 0;
  if (param_1[1] != 0) {
    pcVar1 = (char *)*param_1;
    pcVar3 = pcVar1;
    do {
      if (*pcVar3 == '\0') {
        iVar5 = iVar5 + 8;
      }
      else if (*pcVar3 != -1) {
        uVar4 = 0;
        do {
          uVar2 = uVar4 & 0x1f;
          uVar4 = uVar4 + 1 & 0xff;
          if (((int)(uint)(byte)pcVar1[uVar6] >> uVar2 & 1U) == 0) {
            iVar5 = iVar5 + 1;
          }
        } while (uVar4 < 8);
      }
      uVar6 = uVar6 + 1;
      pcVar3 = pcVar1 + uVar6;
    } while (uVar6 < (uint)param_1[1]);
  }
  return iVar5;
}


// ==== FUN_003298d8 @ 003298d8 ====

void FUN_003298d8(int param_1,uint *param_2,int param_3,int param_4,int param_5,uint *param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    trap(7);
  }
  *param_6 = (*param_2 & (1 << (*(byte *)(param_1 + 8) & 0x1f)) - 1U) +
             ((param_3 - param_5) + iVar1) / iVar1 |
             param_4 / iVar1 << (*(byte *)(param_1 + 8) & 0x1f);
  return;
}


// ==== FUN_00329928 @ 00329928 ====

int FUN_00329928(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (1 << (*(byte *)(param_1 + 8) & 0x1f)) - 1;
  return ((param_3 & uVar1) - (param_2 & uVar1)) * *(int *)(param_1 + 0x14);
}


// ==== FUN_00329958 @ 00329958 ====

void FUN_00329958(undefined8 param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  bVar1 = (*(byte *)((int)puVar3 + 9) & 1) != 0;
  if (bVar1) {
    *(byte *)((int)puVar3 + 9) = *(byte *)((int)puVar3 + 9) & 0xfe;
  }
  if ((*(byte *)((int)puVar3 + 9) & 2) == 0) {
    bVar2 = *(byte *)((int)puVar3 + 9);
  }
  else {
    FUN_00312c70(*puVar3);
    bVar2 = *(byte *)((int)puVar3 + 9);
  }
  if ((bVar2 & 1) != 0) {
    FUN_00317c20(0x45c938,param_1);
  }
  if (bVar1) {
    FUN_00317c20(0x45c960,param_1);
  }
  return;
}


