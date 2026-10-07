// ==== FUN_00293e90 @ 00293e90 ====

/* Strings referenciadas:
     "Unknown buff type." */

void FUN_00293e90(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xff7fffff | 0x800000;
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x87c) == 0) {
    *(undefined **)(iVar2 + 0x830) = &DAT_70003600;
    *(undefined4 *)(iVar2 + 0x5a0) = 0x70000000;
    *(undefined **)(iVar2 + 0x5a4) = &DAT_70001800;
    *(undefined **)(iVar2 + 0x6e0) = &DAT_70001b00;
    *(undefined **)(iVar2 + 0x6e4) = &DAT_70003300;
    *(undefined4 *)(iVar2 + 0x820) = 0;
    return;
  }
  if (*(int *)(iVar2 + 0x87c) == 1) {
    *(int *)(iVar2 + 0x830) = iVar2 + 0xe80;
    *(uint *)(iVar2 + 0x5a4) = iVar2 + 0x880U & 0xfffffff | 0x30000000;
    *(uint *)(iVar2 + 0x6e4) = iVar2 + 0xb80U & 0xfffffff | 0x30000000;
    *(undefined4 *)(iVar2 + 0x820) = 0;
    *(undefined4 *)(iVar2 + 0x5a0) = 0;
    *(undefined4 *)(iVar2 + 0x6e0) = 0;
    return;
  }
  FUN_00296468(param_1,0x4016c0);
  return;
}


// ==== FUN_00293f60 @ 00293f60 ====

/* WARNING: Removing unreachable block (ram,0x00294160) */
/* Strings referenciadas:
     "internal alignment error. _bstag:%d"
     "internal alignment error. _idct:%d"
     "The size of work area is too small" */

undefined4 FUN_00293f60(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  memset(param_2,0);
  uVar2 = (int)param_2 + 3;
  uVar4 = uVar2 & 0xfffffffc;
  param_3 = param_3 - (uVar4 - (int)param_2);
  if (param_3 < 0x19a0) {
    FUN_00296468(uVar4,0x401728);
    uVar1 = 0;
  }
  else {
    iVar3 = uVar4 + 0x118;
    puVar5 = (undefined4 *)param_1;
    puVar5[0x10] = uVar4;
    FUN_00294e80(iVar3,uVar4 + 0x19a0,param_3 + -0x19a0);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined8 *)(puVar5 + 4) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined4 *)(uVar4 + 200) = 0;
    *(undefined4 *)(uVar4 + 0xcc) = 0;
    *(undefined4 *)(uVar4 + 0xd0) = 0;
    *(undefined4 *)(uVar4 + 0xd4) = 0;
    *(undefined4 *)(uVar4 + 0xd8) = 0;
    *(undefined4 *)(uVar4 + 0xdc) = 0;
    *(undefined4 *)(uVar4 + 0xe0) = 0;
    *(undefined4 *)(uVar4 + 0xe4) = 0;
    *(undefined4 *)(uVar4 + 0xe8) = 0;
    *(undefined4 *)(uVar4 + 0xec) = 0;
    *(undefined4 *)(uVar4 + 0xf0) = 0;
    *(undefined4 *)(uVar4 + 0xf4) = 0;
    *(undefined4 *)(uVar4 + 0xf8) = 0;
    *(undefined4 *)(uVar4 + 0xfc) = 0;
    *(undefined4 *)(uVar4 + 0x108) = 0;
    *(undefined4 *)(uVar4 + 0xc) = 0;
    *(undefined4 *)(uVar4 + 0x18) = 0;
    *(undefined4 *)(uVar4 + 0x3c) = 0;
    *(undefined4 *)(uVar4 + 0x48) = 0;
    *(undefined4 *)(uVar4 + 0x54) = 0;
    *(undefined8 *)(uVar4 + 0x100) = 0xffffffffffffffff;
    *(code **)(uVar4 + 0x24) = FUN_00294f28;
    *(code **)(uVar4 + 0x30) = FUN_00294f50;
    uVar1 = FUN_00294eb8(uVar4,iVar3,0x800,8);
    *(undefined4 *)(uVar4 + 100) = 0;
    *(undefined4 *)(uVar4 + 0x10c) = 0;
    *(undefined4 *)(uVar4 + 0x110) = 0;
    *(undefined4 *)(uVar4 + 0x114) = 0;
    *(undefined4 *)(uVar4 + 0x8c) = 0;
    *(undefined8 *)(uVar4 + 0x90) = 0;
    *(undefined4 *)(uVar4 + 0x98) = 0xffffffff;
    *(undefined8 *)(uVar4 + 0xa0) = 0;
    *(undefined4 *)(uVar4 + 0x9c) = 0;
    *(undefined4 *)(uVar4 + 0xc0) = 0;
    *(undefined4 *)(uVar4 + 0xa8) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0xac) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0xb0) = 0xffffffff;
    *(undefined4 **)(uVar4 + 0x868) = puVar5;
    *(undefined4 *)(uVar4 + 0x60) = uVar1;
    *(undefined4 *)(uVar4 + 0xc4) = 1;
    FUN_00293e90(uVar4);
    FUN_00294b18(param_1);
    FUN_00294d30(param_1);
    *(uint *)(uVar4 + 0x1c8) = uVar4 + 0x1f8;
    *(uint *)(uVar4 + 0x1cc) = uVar4 + 0x260;
    *(uint *)(uVar4 + 0x1d4) = uVar4 + 0x2c8;
    *(uint *)(uVar4 + 0x1d8) = uVar4 + 0x330;
    *(uint *)(uVar4 + 0x1dc) = uVar4 + 0x398;
    *(uint *)(uVar4 + 0x1e4) = uVar4 + 0x400;
    *(uint *)(uVar4 + 0x1e8) = uVar4 + 0x468;
    *(uint *)(uVar4 + 0x1ec) = uVar4 + 0x4d0;
    *(uint *)(uVar4 + 500) = uVar4 + 0x538;
    FUN_00294e98(iVar3);
    *(undefined4 *)(uVar4 + 0x860) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x85c) = 0;
    *(undefined4 *)(uVar4 + 0x864) = 0;
    if ((uVar2 & 0x3c) == 0) {
      uVar1 = 1;
    }
    else {
      FUN_002964c0(uVar4,"internal alignment error. _bstag:%d");
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_00294198 @ 00294198 ====

void FUN_00294198(int param_1)

{
  uint uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x828) = 1;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  lVar2 = FUN_0036d518();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0;
  REG_DMAC_9_SPR_TO_CHCR = 0;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    FUN_0036d568();
  }
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_9_SPR_TO_QWC = 0;
  REG_IPU_CTRL = 0x40000000;
  FUN_00371848(0,0);
  return;
}


// ==== FUN_00294260 @ 00294260 ====

/* Strings referenciadas:
     "image buffer needs to be aligned to 64byte boundary(0x%08x)"
     "Need to re-setup libipu since sceMpegGetPicture was aborted "
     "sceMpegGetPicture is aborted " */

undefined8 FUN_00294260(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  piVar1 = *(int **)(param_1 + 0x40);
  *piVar1 = 0;
  if ((piVar1[0x3b] & 0x3fU) == 0) {
    if (piVar1[0x21e] == 0) {
      piVar1[0x20d] = 0;
      do {
        do {
          uVar3 = FUN_0029aef8(piVar1);
          if ((long)uVar3 < 0) {
            return 0xffffffffffffffff;
          }
        } while (((uVar3 != 0) && (piVar1[0x61] != piVar1[0x3a])) && (piVar1[0x216] != 0));
        if (uVar3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00294340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&PTR_LAB_004017f0)[(int)uVar3])();
          return uVar2;
        }
        if (piVar1[0x21e] != 0) {
          FUN_0036a038(0x4017d0);
          return 0xffffffffffffffff;
        }
        if (piVar1[0x20d] != 0) {
          return 1;
        }
      } while (*piVar1 == 0);
      uVar2 = 1;
    }
    else {
      FUN_0036a038(0x401790);
      uVar2 = 0xffffffffffffffff;
    }
  }
  else {
    FUN_002964c0(piVar1,0x401750);
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}


// ==== FUN_00294418 @ 00294418 ====

bool FUN_00294418(int param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = *(int *)(param_1 + 0x184);
  iVar3 = *(int *)(param_1 + 0x160);
  iVar5 = 0;
  bVar8 = false;
  iVar7 = 4;
  if (iVar6 == 3) {
    iVar7 = 2;
  }
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1d4);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1e4);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 500);
    if (iVar7 <= *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0xb8)) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      *(undefined4 *)(param_1 + 0x1b4) = 0;
    }
    if (*(int *)(param_1 + 0xfc) == 0) {
      if (*(int *)(param_1 + 0x1b8) != 0) {
        iVar3 = *(int *)(param_1 + 0x1b4);
        goto LAB_00294498;
      }
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1b4);
LAB_00294498:
      if (iVar3 == 0) {
        iVar6 = *(int *)(param_1 + 0x1d8);
        *(undefined4 *)(*(int *)(param_1 + 0x1c8) + 0x28) = 0;
        iVar3 = *(int *)(param_1 + 0x1e8);
        *(undefined4 *)(iVar6 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x28) = 0;
        iVar6 = *(int *)(param_1 + 0x184);
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (iVar6 == 3) {
      if (*(int *)(*(int *)(param_1 + 0x1c8) + 0x28) == 1) {
        iVar3 = *(int *)(param_1 + 0x1cc);
      }
      else {
        if (*(int *)(param_1 + 0x1b4) == 0) goto LAB_00294608;
        iVar3 = *(int *)(param_1 + 0x1cc);
      }
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x1d8) + 0x28) == 1) {
        if (*(int *)(*(int *)(param_1 + 0x1e8) + 0x28) != 1) {
          iVar3 = *(int *)(param_1 + 0x1b4);
          goto LAB_0029451c;
        }
        iVar3 = *(int *)(param_1 + 0x1dc);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x1b4);
LAB_0029451c:
        if (iVar3 == 0) goto LAB_00294608;
        iVar3 = *(int *)(param_1 + 0x1dc);
      }
      if (*(int *)(iVar3 + 0x28) != 1) goto LAB_00294608;
      iVar3 = *(int *)(param_1 + 0x1ec);
    }
    bVar8 = *(int *)(iVar3 + 0x28) == 1;
  }
  else {
    if (param_2 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x1cc);
      *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1c8);
      uVar1 = *(undefined4 *)(param_1 + 0x1dc);
      *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1d8);
      uVar2 = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)(param_1 + 0x1c8) = uVar4;
      *(undefined4 *)(param_1 + 0x1d8) = uVar1;
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1ec) = uVar2;
      uVar4 = *(undefined4 *)(param_1 + 0x1cc);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x1cc);
    }
    *(undefined4 *)(param_1 + 0x1d0) = uVar4;
    *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1dc);
    *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1ec);
    if (iVar6 == 3) {
      if (iVar3 == 2) {
        iVar3 = *(int *)(param_1 + 0x1c8);
LAB_002945f4:
        if (*(int *)(iVar3 + 0x28) == 1) goto LAB_00294600;
      }
      else {
        bVar8 = true;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x1ec);
      if (iVar6 != 1) {
        iVar7 = *(int *)(param_1 + 0x1dc);
      }
      if (iVar3 == 2) {
        if (param_2 == 0) {
          iVar3 = *(int *)(param_1 + 0x1d8);
        }
        else {
          if (*(int *)(iVar7 + 0x28) == 1) {
            bVar8 = true;
            goto LAB_00294608;
          }
          iVar3 = *(int *)(param_1 + 0x1d8);
        }
        if (*(int *)(iVar3 + 0x28) == 1) {
          iVar3 = *(int *)(param_1 + 0x1e8);
          goto LAB_002945f4;
        }
      }
      else {
LAB_00294600:
        bVar8 = true;
      }
    }
  }
LAB_00294608:
  if (iVar6 == 2) {
    iVar5 = *(int *)(param_1 + 0x1f0);
  }
  else if (iVar6 < 3) {
    if (iVar6 != 1) {
      uRam00000028 = 0;
      goto LAB_00294644;
    }
    iVar5 = *(int *)(param_1 + 0x1e0);
  }
  else {
    if (iVar6 != 3) {
      uRam00000028 = 0;
      goto LAB_00294644;
    }
    iVar5 = *(int *)(param_1 + 0x1d0);
  }
  *(undefined4 *)(iVar5 + 0x28) = 0;
LAB_00294644:
  uVar4 = *(undefined4 *)(param_1 + 0x160);
  *(undefined8 *)(iVar5 + 0x18) = *(undefined8 *)(param_1 + 0x838);
  *(undefined4 *)(iVar5 + 0x2c) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x184);
  *(undefined8 *)(iVar5 + 0x20) = *(undefined8 *)(param_1 + 0x840);
  *(undefined4 *)(iVar5 + 0x30) = uVar4;
  *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(param_1 + 0x15c);
  return bVar8;
}


// ==== FUN_002946d0 @ 002946d0 ====

ulong FUN_002946d0(long param_1,long param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined4 auStack_70 [8];
  
  bVar2 = false;
  iVar7 = (int)param_1;
  iVar1 = *(int *)(iVar7 + 0x40);
  if ((param_3 == -1) || (param_2 < param_3)) {
    if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 *)(iVar7 + 8) = 0;
      *(undefined4 *)(iVar1 + 8) = 1;
    }
    lVar4 = FUN_00294418(iVar1,0);
    uVar6 = 0;
    if (lVar4 != 0) {
      lVar4 = FUN_00294db0(iVar1);
      uVar6 = (ulong)(lVar4 != 0);
    }
  }
  else {
    uVar6 = FUN_00294418(iVar1,0);
    auStack_70[0] = 1;
    if (param_1 != 0) {
      iVar3 = *(int *)(iVar7 + 0x40);
      bVar2 = true;
      if (iVar3 == 0) goto LAB_002947ac;
      if (*(code **)(iVar3 + 0x18) == (code *)0x0) {
        iVar3 = *(int *)(iVar1 + 0x878);
        goto LAB_002947b0;
      }
      (**(code **)(iVar3 + 0x18))(param_1,auStack_70,*(undefined4 *)(iVar3 + 0x1c));
    }
    bVar2 = true;
  }
LAB_002947ac:
  iVar3 = *(int *)(iVar1 + 0x878);
LAB_002947b0:
  uVar5 = 0;
  if (iVar3 == 0) {
    FUN_002959a8(iVar1,*(undefined4 *)(iVar1 + 0x128),*(undefined4 *)(iVar1 + 4));
    if (*(int *)(iVar1 + 0x184) == 3) {
      iVar3 = *(int *)(iVar1 + 0xc0);
    }
    else if (bVar2) {
      iVar3 = *(int *)(iVar1 + 0xc0);
    }
    else {
      *(uint *)(iVar1 + 0x130) = (uint)(*(int *)(iVar1 + 0x130) == 0);
      iVar3 = *(int *)(iVar1 + 0xc0);
    }
    *(int *)(iVar7 + 8) = *(int *)(iVar1 + 0x128) - iVar3;
    uVar5 = uVar6;
    if (*(int *)(iVar1 + 0x130) == 0) {
      *(int *)(iVar1 + 0x128) = *(int *)(iVar1 + 0x128) + 1;
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
  }
  return uVar5;
}


// ==== FUN_00294840 @ 00294840 ====

undefined4 FUN_00294840(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 auStack_80 [8];
  
  bVar2 = false;
  iVar6 = (int)param_1;
  puVar1 = *(undefined4 **)(iVar6 + 0x40);
  puVar1[0x4c] = 0;
  if ((param_3 == -1) || (param_2 < param_3)) {
    bVar2 = true;
    iVar3 = puVar1[2];
  }
  else {
    iVar3 = puVar1[2];
  }
  if (iVar3 == 0) {
    *(undefined4 *)(iVar6 + 8) = 0;
    puVar1[2] = 1;
  }
  lVar5 = FUN_00294418(puVar1,0);
  if (lVar5 == 0) {
    iVar3 = puVar1[0x21e];
  }
  else if (bVar2) {
    FUN_00294db0(puVar1);
    iVar3 = puVar1[0x21e];
  }
  else {
    iVar3 = puVar1[0x21e];
  }
  if (iVar3 != 0) {
    return 0;
  }
  puVar1[0x4c] = 1;
  lVar5 = FUN_0029aef8(puVar1);
  if (lVar5 == 0) {
    FUN_002958e8(param_1);
    *puVar1 = 1;
    return 0;
  }
  iVar3 = 2;
  if (puVar1[0x3a] != 1) {
    iVar3 = 1;
  }
  if (puVar1[0x61] != iVar3) {
    return 0xffffffff;
  }
  lVar5 = FUN_00294418(puVar1,1);
  uVar7 = 0;
  if (lVar5 != 0) {
    if (!bVar2) {
      iVar3 = puVar1[0x21e];
      goto LAB_00294940;
    }
    lVar5 = FUN_00294db0(puVar1);
    if (lVar5 != 0) {
      uVar7 = 1;
    }
  }
  iVar3 = puVar1[0x21e];
LAB_00294940:
  uVar4 = 0;
  if (iVar3 == 0) {
    FUN_002959a8(puVar1,puVar1[0x4a],puVar1[1]);
    puVar1[0x4c] = 0;
    *(undefined4 *)(iVar6 + 8) = puVar1[0x4a] - puVar1[0x30];
    puVar1[0x4a] = puVar1[0x4a] + 1;
    puVar1[1] = puVar1[1] + 1;
    uVar4 = uVar7;
    if ((((!bVar2) && (auStack_80[0] = 1, param_1 != 0)) &&
        (iVar6 = *(int *)(iVar6 + 0x40), iVar6 != 0)) && (*(code **)(iVar6 + 0x18) != (code *)0x0))
    {
      (**(code **)(iVar6 + 0x18))(param_1,auStack_80,*(undefined4 *)(iVar6 + 0x1c));
    }
  }
  return uVar4;
}


// ==== FUN_00294a08 @ 00294a08 ====

undefined4 FUN_00294a08(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0036d518();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  uVar1 = REG_DMAC_3_IPU_FROM_CHCR;
  REG_DMAC_3_IPU_FROM_CHCR = uVar1 & 0xfffffeff;
  uVar1 = REG_DMAC_4_IPU_TO_CHCR;
  REG_DMAC_4_IPU_TO_CHCR = uVar1 & 0xfffffeff;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    FUN_0036d568();
  }
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  FUN_00371928();
  return 1;
}


// ==== FUN_00294ab8 @ 00294ab8 ====

undefined4 FUN_00294ab8(void)

{
  return 1;
}


// ==== FUN_00294ac8 @ 00294ac8 ====

void FUN_00294ac8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xc4) = 1;
  *(uint *)(iVar1 + 0xec) = param_2 & 0xfffffff | 0x20000000;
  *(undefined4 *)(iVar1 + 0xf8) = param_3;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  FUN_00294260();
  return;
}


// ==== FUN_00294b18 @ 00294b18 ====

undefined4 FUN_00294b18(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  puVar1[0x21e] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1[0x30] = 0;
  puVar1[0x26] = 0xffffffff;
  FUN_00294198(puVar1);
  puVar1[0x216] = 0;
  puVar1[0x4a] = 0;
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xff7fffff | 0x800000;
  return 1;
}


// ==== FUN_00294b98 @ 00294b98 ====

undefined4 FUN_00294b98(int param_1)

{
  return **(undefined4 **)(param_1 + 0x40);
}


// ==== FUN_00294bb0 @ 00294bb0 ====

undefined4 FUN_00294bb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x40) + 0xc + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x40) + param_2 * 0xc;
  uVar1 = *puVar2;
  *puVar2 = param_3;
  *(undefined4 *)(iVar3 + 0x10) = param_4;
  *(BADSPACEBASE **)(iVar3 + 0x14) = register0x000001c0;
  return uVar1;
}


// ==== FUN_00294bf8 @ 00294bf8 ====

undefined8 FUN_00294bf8(long param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)((int)param_1 + 0x40), iVar1 != 0)) &&
     (pcVar2 = *(code **)(iVar1 + *param_2 * 0xc + 0xc), pcVar2 != (code *)0x0)) {
    uVar3 = (*pcVar2)((int)param_1,param_2,*(undefined4 *)(*param_2 * 0xc + iVar1 + 0x10));
  }
  return uVar3;
}


// ==== FUN_00294c70 @ 00294c70 ====

undefined4 FUN_00294c70(long param_1)

{
  int iVar1;
  undefined4 auStack_40 [8];
  
  auStack_40[0] = 1;
  if (((param_1 != 0) && (iVar1 = *(int *)((int)param_1 + 0x40), iVar1 != 0)) &&
     (*(code **)(iVar1 + 0x18) != (code *)0x0)) {
    (**(code **)(iVar1 + 0x18))((int)param_1,auStack_40,*(undefined4 *)(iVar1 + 0x1c));
  }
  return 1;
}


// ==== FUN_00294ce8 @ 00294ce8 ====

void FUN_00294ce8(undefined8 param_1)

{
  if (*(int *)(*(int *)((int)param_1 + 0x40) + 0x184) == 3) {
    FUN_002946d0(param_1);
  }
  else {
    FUN_00294840(param_1);
  }
  return;
}


// ==== FUN_00294d30 @ 00294d30 ====

undefined4 FUN_00294d30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(iVar1 + 0x1c8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1c8) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1d8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1d8) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1e8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1cc) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1cc) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1dc) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1dc) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1ec) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1ec) + 0x28) = 0;
  }
  return 1;
}


// ==== FUN_00294db0 @ 00294db0 ====

/* Strings referenciadas:
     "odd number of field pictures"
     "unknown picture sutructure" */

long FUN_00294db0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x184);
  if ((iVar2 == 3) && (*(int *)(iVar3 + 0x130) != 0)) {
    FUN_00296468(param_1,0x401808);
    *(undefined4 *)(iVar3 + 0x130) = 0;
    iVar2 = *(int *)(iVar3 + 0x184);
  }
  if (iVar2 == 2) {
    iVar2 = *(int *)(iVar3 + 0x1f0);
  }
  else {
    if (iVar2 < 3) {
      if (iVar2 == 1) {
        iVar2 = *(int *)(iVar3 + 0x1e0);
        goto LAB_00294e4c;
      }
      iVar2 = *(int *)(iVar3 + 0x1d0);
    }
    else {
      if (iVar2 == 3) {
        iVar2 = *(int *)(iVar3 + 0x1d0);
        goto LAB_00294e4c;
      }
      iVar2 = *(int *)(iVar3 + 0x1d0);
    }
    FUN_00296468(param_1,0x401828);
  }
LAB_00294e4c:
  lVar1 = FUN_00297688(param_1);
  if (lVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x28) = 1;
  }
  return lVar1;
}


// ==== FUN_00294e80 @ 00294e80 ====

void FUN_00294e80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = param_2;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = param_2;
  return;
}


// ==== FUN_00294e98 @ 00294e98 ====

void FUN_00294e98(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== FUN_00294ea8 @ 00294ea8 ====

void FUN_00294ea8(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== FUN_00294eb8 @ 00294eb8 ====

/* Strings referenciadas:
     "work area size is too small" */

int FUN_00294eb8(undefined8 param_1,int *param_2,int param_3,long param_4)

{
  int iVar1;
  
  iVar1 = (int)param_4;
  if (param_4 == 0) {
    trap(7);
  }
  iVar1 = ((param_2[2] + iVar1 + -1) / iVar1) * iVar1;
  if ((uint)(*param_2 + param_2[1]) < (uint)(iVar1 + param_3)) {
    FUN_00296468(param_1,0x401848);
    iVar1 = 0;
  }
  else {
    param_2[2] = iVar1 + param_3;
  }
  return iVar1;
}


// ==== FUN_00294f28 @ 00294f28 ====

undefined4 FUN_00294f28(int param_1)

{
  FUN_00371610(*(int *)(param_1 + 0x40) + 0x68);
  return 1;
}


// ==== FUN_00294f50 @ 00294f50 ====

undefined4 FUN_00294f50(int param_1)

{
  FUN_003716f8(*(int *)(param_1 + 0x40) + 0x68);
  return 1;
}


// ==== FUN_00294f78 @ 00294f78 ====

void FUN_00294f78(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 in_hi;
  ulong uVar11;
  int iStack_ac;
  uint uStack_a8;
  
  uVar7 = *param_2 & 0xfffffff;
  uStack_a8 = *(uint *)(param_1 + 0xec) & 0xfffffff;
  if (*(int *)(param_1 + 0x184) == 3) {
    iVar9 = *(int *)(param_1 + 0xf4);
    uVar3 = param_2[4];
  }
  else {
    if (*(int *)(param_1 + 0xf4) != 0) {
      iVar10 = (*(int *)(param_1 + 0xf4) >> 4) * 0xc0;
      iVar8 = ((int)param_2[4] >> 1) * 0x180;
      iStack_ac = 2;
      goto LAB_0029504c;
    }
    uVar3 = param_2[4];
    iVar9 = 0;
  }
  iVar8 = uVar3 * 0x180;
  iVar10 = iVar8;
  if (iVar9 != 0) {
    iVar10 = (iVar9 >> 4) * 0x180;
  }
  iStack_ac = 1;
LAB_0029504c:
  uVar11 = CONCAT44((int)((ulong)in_hi >> 0x20),iVar10 >> 0x1f);
  iVar9 = 0;
  if (iStack_ac != 0) {
    uVar3 = param_2[3];
    do {
      iVar5 = 0;
      uVar6 = uStack_a8;
      if (0 < (int)uVar3) {
        do {
          lVar4 = FUN_0036d518();
          REG_DMAC_9_SPR_TO_SADR = 0;
          REG_DMAC_9_SPR_TO_MADR = uVar7;
          REG_DMAC_9_SPR_TO_QWC = iVar8 >> 4;
          REG_DMAC_9_SPR_TO_CHCR = 0x101;
          if (lVar4 != 0) {
            FUN_0036d568();
          }
          uVar7 = uVar7 + iVar8;
          iVar5 = iVar5 + 1;
          do {
            uVar3 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar3 & 0x100) != 0);
          lVar4 = FUN_0036d518();
          REG_DMAC_8_SPR_FROM_SADR = 0;
          REG_DMAC_8_SPR_FROM_MADR = uVar6;
          REG_DMAC_8_SPR_FROM_QWC = iVar8 >> 4;
          REG_DMAC_8_SPR_FROM_CHCR = 0x100;
          if (lVar4 != 0) {
            FUN_0036d568();
          }
          uVar3 = param_2[3];
          do {
            uVar1 = REG_DMAC_8_SPR_FROM_CHCR;
          } while ((uVar1 & 0x100) != 0);
          do {
            iVar2 = REG_DMAC_8_SPR_FROM_QWC;
          } while (iVar2 != 0);
          uVar6 = uVar6 + iVar10;
        } while (iVar5 < (int)uVar3);
      }
      iVar9 = iVar9 + 1;
      lVar4 = ((long)(int)uStack_a8 | uVar11) + (long)(*(int *)(param_1 + 0xf8) * 0xc0);
      uStack_a8 = (uint)lVar4;
      uVar11 = (ulong)(int)((ulong)lVar4 >> 0x20);
    } while (iVar9 < iStack_ac);
  }
  return;
}


// ==== FUN_00295208 @ 00295208 ====

/* Strings referenciadas:
     "Too small buffer size for %dx%d picture " */

void FUN_00295208(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  undefined1 auStack_190 [256];
  
  iVar12 = (int)param_1;
  iVar14 = *(int *)(iVar12 + 0x868);
  plVar15 = (long *)(iVar14 + 0x10);
  puVar16 = (undefined8 *)(iVar14 + 0x18);
  puVar17 = (ulong *)(iVar14 + 0x20);
  iVar13 = (int)param_2;
  if (*(int *)(iVar12 + 0x8c) == 0) {
    *plVar15 = *(long *)(iVar13 + 0x18);
  }
  else {
    lVar8 = *(long *)(iVar13 + 0x18);
    if (lVar8 < 0) {
      if (*(int *)(iVar12 + 0x98) < 0) {
        *plVar15 = lVar8;
      }
      else {
        uVar6 = *(uint *)(iVar12 + 0x9c);
        uVar10 = (ulong)(int)*(undefined8 *)(iVar12 + 0xa0);
        uVar9 = *(undefined8 *)(iVar12 + 0x90);
        uVar11 = uVar10 & 1;
        lVar8 = FUN_00290488(uVar9,uVar10);
        *(long *)(iVar14 + 0x10) =
             (long)(int)(*(int *)(iVar12 + 0x98) +
                        (int)((ulong)(lVar8 << 0x1f) >> 0x20) +
                        ((uint)uVar11 & uVar6 & 1 & (uint)uVar9 & 1));
        iVar14 = *(int *)(iVar12 + 0x868);
        if ((uVar11 & *(ulong *)(iVar12 + 0x90)) != 0) {
          *(int *)(iVar12 + 0x9c) = *(int *)(iVar12 + 0x9c) + 1;
        }
      }
    }
    else {
      *plVar15 = lVar8;
    }
  }
  if (*(int *)(iVar12 + 0x108) == 2) {
    if (*(long *)(iVar12 + 0x100) < 0) {
      lVar8 = (long)*(int *)(iVar13 + 0x40);
    }
    else {
      *plVar15 = *(long *)(iVar12 + 0x100);
      *(undefined4 *)(iVar12 + 0x108) = 0;
      *(undefined8 *)(iVar12 + 0x100) = 0xffffffffffffffff;
      lVar8 = (long)*(int *)(iVar13 + 0x40);
    }
  }
  else {
    lVar8 = (long)*(int *)(iVar13 + 0x40);
  }
  iVar1 = *(int *)(iVar13 + 0x3c);
  iVar2 = *(int *)(iVar13 + 0x34);
  iVar3 = *(int *)(iVar13 + 0x2c);
  iVar4 = *(int *)(iVar13 + 0x38);
  iVar5 = *(int *)(iVar13 + 0x30);
  *puVar16 = *(undefined8 *)(iVar13 + 0x20);
  *puVar17 = (long)iVar2 << 8 | (long)iVar3 | lVar8 << 5 | (long)iVar1 << 6 |
             (long)iVar4 << 7 | (long)iVar5 << 3;
  lVar8 = *(long *)(iVar14 + 0x20);
  *(undefined4 *)(iVar12 + 0x98) = *(undefined4 *)(iVar14 + 0x10);
  uVar6 = *(uint *)(&DAT_003c1428 + ((uint)((ulong)(lVar8 << 0x1b) >> 0x20) & 0xf) * 4);
  *(undefined4 *)(iVar12 + 0xe0) = *(undefined4 *)(iVar13 + 0x5c);
  *(ulong *)(iVar12 + 0xa0) = (ulong)uVar6;
  *(undefined4 *)(iVar12 + 0xe4) = *(undefined4 *)(iVar13 + 0x60);
  *(undefined4 *)(iVar12 + 200) = *(undefined4 *)(iVar13 + 0x44);
  *(undefined4 *)(iVar12 + 0xcc) = *(undefined4 *)(iVar13 + 0x48);
  *(undefined4 *)(iVar12 + 0xd0) = *(undefined4 *)(iVar13 + 0x4c);
  *(undefined4 *)(iVar12 + 0xd4) = *(undefined4 *)(iVar13 + 0x50);
  *(undefined4 *)(iVar12 + 0xd8) = *(undefined4 *)(iVar13 + 0x54);
  *(undefined4 *)(iVar12 + 0xdc) = *(undefined4 *)(iVar13 + 0x58);
  if (*(int *)(iVar12 + 0xf4) == 0) {
    bVar7 = *(int *)(iVar13 + 0xc) * *(int *)(iVar13 + 0x10) <= *(int *)(iVar12 + 0xf8);
  }
  else {
    bVar7 = false;
    if (*(int *)(iVar13 + 4) <= *(int *)(iVar12 + 0xf0)) {
      bVar7 = *(int *)(iVar13 + 8) <= *(int *)(iVar12 + 0xf4);
    }
  }
  if (bVar7) {
    iVar14 = *(int *)(iVar13 + 0x28);
  }
  else {
    FUN_00369ff0(auStack_190,0x100,0x401868,*(undefined4 *)(iVar13 + 4),*(undefined4 *)(iVar13 + 8))
    ;
    FUN_00296468(param_1,auStack_190);
    if (!bVar7) {
      return;
    }
    iVar14 = *(int *)(iVar13 + 0x28);
  }
  if (iVar14 == 1) {
    if (*(int *)(iVar12 + 0xc4) == 0) {
      FUN_00294f78(param_1,param_2);
      iVar14 = *(int *)(iVar12 + 8);
    }
    else {
      FUN_00295bf8(param_1);
      iVar14 = *(int *)(iVar12 + 8);
    }
    if (iVar14 != 2) {
      *(undefined4 *)(iVar12 + 8) = 2;
      *(undefined4 *)(iVar12 + 0xc0) = *(undefined4 *)(iVar12 + 0x128);
    }
    *(undefined4 *)(iVar12 + 0x834) = 1;
  }
  return;
}


// ==== FUN_002954c8 @ 002954c8 ====

/* Strings referenciadas:
     "Too small buffer size for %dx%d picture " */

void FUN_002954c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined1 auStack_1b0 [256];
  int iStack_b0;
  undefined8 *puStack_ac;
  ulong *puStack_a8;
  
  iVar16 = (int)param_1;
  iStack_b0 = 0;
  uVar13 = param_3;
  uVar20 = param_2;
  if (*(int *)(iVar16 + 0x184) == 2) {
    iStack_b0 = 0x40;
    uVar13 = param_2;
    uVar20 = param_3;
  }
  iVar17 = *(int *)(iVar16 + 0x868);
  iVar10 = *(int *)(iVar16 + 0x8c);
  puStack_ac = (undefined8 *)(iVar17 + 0x18);
  puStack_a8 = (ulong *)(iVar17 + 0x20);
  plVar21 = (long *)(iVar17 + 0x10);
  iVar18 = (int)uVar13;
  if (iVar10 == 0) {
    *plVar21 = *(long *)(iVar18 + 0x18);
  }
  else {
    lVar11 = *(long *)(iVar18 + 0x18);
    if (lVar11 < 0) {
      if (*(int *)(iVar16 + 0x98) < 0) {
        *plVar21 = lVar11;
      }
      else {
        uVar1 = *(uint *)(iVar16 + 0x9c);
        uVar9 = (ulong)(int)*(undefined8 *)(iVar16 + 0xa0);
        uVar13 = *(undefined8 *)(iVar16 + 0x90);
        uVar12 = uVar9 & 1;
        lVar11 = FUN_00290488(uVar13,uVar9);
        *(long *)(iVar17 + 0x10) =
             (long)(int)(*(int *)(iVar16 + 0x98) +
                        (int)((ulong)(lVar11 << 0x1f) >> 0x20) +
                        ((uint)uVar12 & uVar1 & 1 & (uint)uVar13 & 1));
        iVar17 = *(int *)(iVar16 + 0x868);
        if ((uVar12 & *(ulong *)(iVar16 + 0x90)) == 0) {
          iVar10 = *(int *)(iVar16 + 0x8c);
        }
        else {
          iVar10 = *(int *)(iVar16 + 0x8c);
          *(int *)(iVar16 + 0x9c) = *(int *)(iVar16 + 0x9c) + 1;
        }
      }
    }
    else {
      *plVar21 = lVar11;
    }
  }
  if (*(int *)(iVar16 + 0x108) == 2) {
    if (*(long *)(iVar16 + 0x100) < 0) {
      lVar11 = (long)*(int *)(iVar18 + 0x40);
    }
    else {
      *plVar21 = *(long *)(iVar16 + 0x100);
      *(undefined4 *)(iVar16 + 0x108) = 0;
      *(undefined8 *)(iVar16 + 0x100) = 0xffffffffffffffff;
      lVar11 = (long)*(int *)(iVar18 + 0x40);
    }
  }
  else {
    lVar11 = (long)*(int *)(iVar18 + 0x40);
  }
  iVar2 = *(int *)(iVar18 + 0x3c);
  plVar21 = (long *)(iVar17 + 0x28);
  iVar19 = *(int *)(iVar18 + 0x38);
  iVar3 = *(int *)(iVar18 + 0x30);
  iVar4 = *(int *)(iVar18 + 0x34);
  iVar5 = *(int *)(iVar18 + 0x2c);
  puVar14 = (undefined8 *)(iVar17 + 0x30);
  *puStack_ac = *(undefined8 *)(iVar18 + 0x20);
  puVar15 = (ulong *)(iVar17 + 0x38);
  *puStack_a8 = (long)iVar4 << 8 | (long)iVar5 | lVar11 << 5 | (long)iVar2 << 6 |
                (long)iVar19 << 7 | (long)iVar3 << 3;
  iVar2 = *(int *)(iVar17 + 0x10);
  *(undefined8 *)(iVar16 + 0xa0) = 1;
  *(int *)(iVar16 + 0x98) = iVar2;
  iVar19 = (int)uVar20;
  if (iVar10 == 0) {
    *plVar21 = *(long *)(iVar19 + 0x18);
  }
  else {
    lVar11 = *(long *)(iVar19 + 0x18);
    if (lVar11 < 0) {
      if (iVar2 < 0) {
        *plVar21 = lVar11;
      }
      else {
        *(long *)(iVar17 + 0x28) =
             (long)(int)(iVar2 + (*(uint *)(iVar16 + 0x9c) & 1 & (uint)*(long *)(iVar16 + 0x90) & 1)
                                 + (int)((ulong)(*(long *)(iVar16 + 0x90) << 0x1f) >> 0x20));
        iVar17 = *(int *)(iVar16 + 0x868);
        if ((*(ulong *)(iVar16 + 0x90) & 1) != 0) {
          *(int *)(iVar16 + 0x9c) = *(int *)(iVar16 + 0x9c) + 1;
        }
      }
    }
    else {
      *plVar21 = lVar11;
    }
  }
  if (*(int *)(iVar16 + 0x108) == 2) {
    if (*(long *)(iVar16 + 0x100) < 0) {
      lVar11 = (long)*(int *)(iVar19 + 0x40);
    }
    else {
      *plVar21 = *(long *)(iVar16 + 0x100);
      *(undefined4 *)(iVar16 + 0x108) = 0;
      *(undefined8 *)(iVar16 + 0x100) = 0xffffffffffffffff;
      lVar11 = (long)*(int *)(iVar19 + 0x40);
    }
  }
  else {
    lVar11 = (long)*(int *)(iVar19 + 0x40);
  }
  iVar10 = *(int *)(iVar19 + 0x3c);
  iVar2 = *(int *)(iVar19 + 0x34);
  iVar3 = *(int *)(iVar19 + 0x2c);
  iVar4 = *(int *)(iVar19 + 0x38);
  iVar5 = *(int *)(iVar19 + 0x30);
  *puVar14 = *(undefined8 *)(iVar19 + 0x20);
  iVar6 = *(int *)(iVar16 + 0xf4);
  *puVar15 = (long)iVar2 << 8 | (long)iVar3 | lVar11 << 5 | (long)iVar10 << 6 |
             (long)iVar4 << 7 | (long)iVar5 << 3;
  uVar7 = *(undefined4 *)(iVar17 + 0x28);
  *(undefined8 *)(iVar16 + 0xa0) = 1;
  *(undefined4 *)(iVar16 + 0x98) = uVar7;
  uVar9 = *(ulong *)(iVar17 + 0x20);
  uVar12 = *(ulong *)(iVar17 + 0x38);
  *(undefined4 *)(iVar16 + 0xe0) = *(undefined4 *)(iVar18 + 0x5c);
  *(ulong *)(iVar17 + 0x20) = uVar9 | (long)iStack_b0;
  uVar7 = *(undefined4 *)(iVar18 + 0x60);
  *(ulong *)(iVar17 + 0x38) = uVar12 | (long)iStack_b0;
  *(undefined4 *)(iVar16 + 0xe4) = uVar7;
  *(undefined4 *)(iVar16 + 200) = *(undefined4 *)(iVar18 + 0x44);
  *(undefined4 *)(iVar16 + 0xcc) = *(undefined4 *)(iVar19 + 0x48);
  *(undefined4 *)(iVar16 + 0xd4) = *(undefined4 *)(iVar18 + 0x50);
  *(undefined4 *)(iVar16 + 0xd8) = *(undefined4 *)(iVar19 + 0x54);
  iVar17 = (int)param_2;
  if (iVar6 == 0) {
    bVar8 = *(int *)(iVar17 + 0xc) * *(int *)(iVar17 + 0x10) <= *(int *)(iVar16 + 0xf8);
  }
  else {
    bVar8 = false;
    if (*(int *)(iVar17 + 4) <= *(int *)(iVar16 + 0xf0)) {
      bVar8 = *(int *)(iVar17 + 8) <= iVar6;
    }
  }
  if (bVar8) {
    iVar10 = *(int *)(iVar17 + 0x28);
  }
  else {
    FUN_00369ff0(auStack_1b0,0x100,0x401868,*(undefined4 *)(iVar17 + 4),*(undefined4 *)(iVar17 + 8))
    ;
    FUN_00296468(param_1,auStack_1b0);
    if (!bVar8) {
      return;
    }
    iVar10 = *(int *)(iVar17 + 0x28);
  }
  if ((iVar10 == 1) && (*(int *)((int)param_3 + 0x28) == 1)) {
    *(int *)(iVar17 + 0x10) = *(int *)(iVar17 + 0x10) << 1;
    if (*(int *)(iVar16 + 0xc4) == 0) {
      FUN_00294f78(param_1,param_2);
      iVar10 = *(int *)(iVar17 + 0x10);
    }
    else {
      FUN_00295bf8(param_1,param_2);
      iVar10 = *(int *)(iVar17 + 0x10);
    }
    *(int *)(iVar17 + 0x10) = iVar10 >> 1;
    if (*(int *)(iVar16 + 8) != 2) {
      *(undefined4 *)(iVar16 + 8) = 2;
      *(undefined4 *)(iVar16 + 0xc0) = *(undefined4 *)(iVar16 + 0x128);
    }
    *(undefined4 *)(iVar16 + 0x834) = 1;
  }
  return;
}


// ==== FUN_002958e8 @ 002958e8 ====

/* Strings referenciadas:
     "the second field is missing" */

undefined4 FUN_002958e8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar3 = 0;
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(iVar1 + 8) != 0)) {
    if (*(int *)(iVar1 + 0x130) == 0) {
      if (*(int *)(iVar1 + 0x184) == 3) {
        FUN_00295208(iVar1,*(undefined4 *)(iVar1 + 0x1cc),*(int *)(iVar1 + 0x128) + -1);
        iVar2 = *(int *)(iVar1 + 0x128);
      }
      else {
        FUN_002954c8(iVar1,*(undefined4 *)(iVar1 + 0x1dc),*(undefined4 *)(iVar1 + 0x1ec),
                     *(int *)(iVar1 + 0x128) + -1);
        iVar2 = *(int *)(iVar1 + 0x128);
      }
    }
    else {
      FUN_00296468(iVar1,0x401898);
      iVar2 = *(int *)(iVar1 + 0x128);
    }
    uVar3 = 1;
    *(undefined4 *)(iVar1 + 0x130) = 0;
    *(int *)(param_1 + 8) = iVar2 - *(int *)(iVar1 + 0xc0);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return uVar3;
}


// ==== FUN_002959a8 @ 002959a8 ====

void FUN_002959a8(undefined8 param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (param_3 != 0) {
    if (*(int *)(iVar4 + 0x184) == 3) {
      if (*(int *)(iVar4 + 0x160) == 3) {
        uVar1 = *(undefined4 *)(iVar4 + 0x1d4);
      }
      else {
        uVar1 = *(undefined4 *)(iVar4 + 0x1c8);
      }
      FUN_00295208(param_1,uVar1,param_2 + -1);
      iVar3 = *(int *)(iVar4 + 0x108);
      goto LAB_00295a18;
    }
    if (*(int *)(iVar4 + 0x160) == 3) {
      uVar1 = *(undefined4 *)(iVar4 + 0x1e4);
      uVar2 = *(undefined4 *)(iVar4 + 500);
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x1d8);
      uVar2 = *(undefined4 *)(iVar4 + 0x1e8);
    }
    FUN_002954c8(param_1,uVar1,uVar2,param_2 + -1);
  }
  iVar3 = *(int *)(iVar4 + 0x108);
LAB_00295a18:
  if (iVar3 == 1) {
    *(undefined4 *)(iVar4 + 0x108) = 2;
  }
  return;
}


// ==== FUN_00295a38 @ 00295a38 ====

/* WARNING: Removing unreachable block (ram,0x00295a70) */
/* Strings referenciadas:
     "CSC handler error " */

void FUN_00295a38(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 auStack_80 [8];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  uint uStack_54;
  int iStack_50;
  
  uStack_54 = param_2 + 0xffc00 & 0xfffffff;
  iStack_5c = 0;
  iStack_60 = 0;
  iStack_50 = param_3 / 0x3ff + 1;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  iStack_58 = param_3;
  uVar2 = AddDmacHandler(3,0x2960d0,0,&iStack_60);
  REG_DMAC_STAT = 8;
  FUN_003683a0(3);
  lVar3 = FUN_0036d518();
  REG_DMAC_3_IPU_FROM_MADR = param_2 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = 0xffc0;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  if (lVar3 != 0) {
    FUN_0036d568();
  }
  REG_IPU_CMD = 0x700003ff;
  auStack_80[0] = 4;
  FUN_00294bf8(*(undefined4 *)((int)param_1 + 0x868),auStack_80);
  do {
  } while (iStack_60 < iStack_50);
  if (iStack_5c != 0) {
    FUN_00296468(param_1,0x4018b8);
  }
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  FUN_00368338(3);
  RemoveDmacHandler(3,uVar2);
  return;
}


// ==== FUN_00295bf8 @ 00295bf8 ====

void FUN_00295bf8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 auStack_d0 [8];
  uint uStack_b0;
  uint uStack_ac;
  undefined4 auStack_a0 [8];
  
  iVar7 = (int)param_1;
  uVar5 = param_2[3] * param_2[4];
  auStack_d0[0] = 2;
  FUN_00294bf8(*(undefined4 *)(iVar7 + 0x868),auStack_d0);
  uVar1 = REG_IPU_CTRL;
  if ((uVar1 & 0x4000) != 0) {
    REG_IPU_CTRL = 0x40000000;
  }
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  REG_IPU_CMD = 0;
  *(undefined4 *)(iVar7 + 0x828) = 1;
  *(undefined4 *)(iVar7 + 0x82c) = 0;
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  FlushCache(0);
  uStack_b0 = uVar5 * 0x18;
  uStack_ac = *param_2 & 0xfffffff;
  if (uStack_b0 < 0x10000) {
    lVar4 = FUN_0036d518();
    REG_DMAC_4_IPU_TO_MADR = *param_2 & 0xfffffff;
    REG_DMAC_4_IPU_TO_QWC = uStack_b0;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    if (lVar4 != 0) {
      FUN_0036d568();
    }
    uStack_b0 = 0;
    if (0x3ff < (int)uVar5) {
      FUN_00295a38(param_1,*(undefined4 *)(iVar7 + 0xec),uVar5);
      uVar6 = *(undefined4 *)(iVar7 + 0x868);
    }
    else {
      uVar1 = *(uint *)(iVar7 + 0xec);
      do {
        iVar2 = REG_IPU_CTRL;
      } while (iVar2 < 0);
      lVar4 = FUN_0036d518();
      REG_DMAC_3_IPU_FROM_MADR = uVar1 & 0xfffffff;
      REG_DMAC_3_IPU_FROM_QWC = uVar5 * 0x40;
      REG_DMAC_3_IPU_FROM_CHCR = 0x100;
      if (lVar4 != 0) {
        FUN_0036d568();
      }
      REG_IPU_CMD = uVar5 | 0x70000000;
      uVar5 = uVar5 & 0xf0000000 | 0x70000000;
      *(uint *)(iVar7 + 0x82c) = uVar5;
      if (((uVar5 == 0x20000000) || (uVar5 == 0x30000000)) || (uVar5 == 0x40000000)) {
        *(undefined4 *)(iVar7 + 0x828) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x828) = 1;
      }
      auStack_a0[0] = 4;
      FUN_00294bf8(*(undefined4 *)(iVar7 + 0x868),auStack_a0);
      do {
        uVar5 = REG_DMAC_3_IPU_FROM_CHCR;
      } while ((uVar5 >> 8 & 1) != 0);
      do {
        iVar2 = REG_IPU_CTRL;
      } while (iVar2 < 0);
      uVar6 = *(undefined4 *)(iVar7 + 0x868);
    }
  }
  else {
    uVar3 = AddDmacHandler(4,0x296218,0,&uStack_b0);
    REG_DMAC_STAT = 0x10;
    FUN_003683a0(4);
    lVar4 = FUN_0036d518();
    REG_DMAC_4_IPU_TO_MADR = uStack_ac;
    REG_DMAC_4_IPU_TO_QWC = 0xffff;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    if (lVar4 != 0) {
      FUN_0036d568();
    }
    uStack_ac = uStack_ac + 0xffff0 & 0xfffffff;
    uStack_b0 = uStack_b0 - 0xffff;
    if (0x3ff < (int)uVar5) {
      FUN_00295a38(param_1,*(undefined4 *)(iVar7 + 0xec),uVar5);
    }
    else {
      uVar1 = *(uint *)(iVar7 + 0xec);
      do {
        iVar2 = REG_IPU_CTRL;
      } while (iVar2 < 0);
      lVar4 = FUN_0036d518();
      REG_DMAC_3_IPU_FROM_MADR = uVar1 & 0xfffffff;
      REG_DMAC_3_IPU_FROM_QWC = uVar5 * 0x40;
      REG_DMAC_3_IPU_FROM_CHCR = 0x100;
      if (lVar4 != 0) {
        FUN_0036d568();
      }
      REG_IPU_CMD = uVar5 | 0x70000000;
      uVar5 = uVar5 & 0xf0000000 | 0x70000000;
      *(uint *)(iVar7 + 0x82c) = uVar5;
      if (((uVar5 == 0x20000000) || (uVar5 == 0x30000000)) || (uVar5 == 0x40000000)) {
        *(undefined4 *)(iVar7 + 0x828) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x828) = 1;
      }
      auStack_a0[0] = 4;
      FUN_00294bf8(*(undefined4 *)(iVar7 + 0x868),auStack_a0);
      do {
        uVar5 = REG_DMAC_3_IPU_FROM_CHCR;
      } while ((uVar5 >> 8 & 1) != 0);
      do {
        iVar2 = REG_IPU_CTRL;
      } while (iVar2 < 0);
    }
    FUN_00368338(4);
    RemoveDmacHandler(4,uVar3);
    uVar6 = *(undefined4 *)(iVar7 + 0x868);
  }
  auStack_d0[0] = 3;
  FUN_00294bf8(uVar6,auStack_d0);
  return;
}


// ==== FUN_002962f0 @ 002962f0 ====

/* Strings referenciadas:
     "[MPEG ERROR]%s " */

void FUN_002962f0(undefined8 param_1)

{
  FUN_0036a038(0x4018f0,param_1);
  return;
}


// ==== FUN_00296300 @ 00296300 ====

void FUN_00296300(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0036d518();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    FUN_0036d568();
  }
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_IPU_CTRL = 0x40000000;
  return;
}


// ==== FUN_002963a0 @ 002963a0 ====

/* Strings referenciadas:
     "Error code detected(BDEC)" */

void FUN_002963a0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 auStack_40 [8];
  
  FUN_00296468(param_1,0x4018d0);
  auStack_40[0] = 2;
  FUN_00294bf8(*(undefined4 *)((int)param_1 + 0x868),auStack_40);
  REG_IPU_CTRL = 0x40000000;
  auStack_40[0] = 3;
  FUN_00294bf8(*(undefined4 *)((int)param_1 + 0x868),auStack_40);
  lVar2 = FUN_0036d518();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    FUN_0036d568();
  }
  REG_DMAC_3_IPU_FROM_QWC = 0;
  return;
}


// ==== FUN_00296468 @ 00296468 ====

void FUN_00296468(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)((int)param_1 + 0x868);
  if (((iVar1 == 0) || (param_1 == 0)) || (*(int *)((int)param_1 + 0xc) == 0)) {
    FUN_002962f0(param_2);
  }
  else {
    uStack_1c = (undefined4)param_2;
    uStack_20 = 0;
    FUN_00294bf8(iVar1,&uStack_20);
  }
  return;
}


// ==== FUN_002964c0 @ 002964c0 ====

void FUN_002964c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_120 [256];
  
  FUN_00369ff0(auStack_120,0x100,param_2,param_3);
  FUN_00296468(param_1,auStack_120);
  return;
}


// ==== FUN_00296500 @ 00296500 ====

void FUN_00296500(int param_1,int *param_2,int *param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_5;
  iVar1 = (int)param_4;
  iVar4 = iVar1 >> 1;
  iVar2 = iVar5 >> 1;
  if (*(int *)(param_1 + 0x184) != 3) {
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    *param_2 = iVar4 + *param_3;
    if (0 < param_5) {
      iVar2 = iVar5 + 1 >> 1;
    }
    iVar2 = iVar2 + param_3[1];
    param_2[1] = iVar2;
    if (*(int *)(param_1 + 0x184) != 1) {
      param_2[1] = iVar2 + 1;
      return;
    }
    param_2[1] = iVar2 + -1;
    return;
  }
  if (*(int *)(param_1 + 0x188) == 0) {
    iVar3 = iVar1 * 3;
    if (0 < param_4) {
      iVar3 = iVar3 + 1;
    }
    *param_2 = (iVar3 >> 1) + *param_3;
    iVar3 = iVar5 * 3;
    if (0 < param_5) {
      iVar3 = iVar3 + 1;
    }
    param_2[1] = (iVar3 >> 1) + param_3[1] + -1;
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    param_2[2] = iVar4 + *param_3;
    iVar1 = param_3[1];
    if (param_5 < 1) goto LAB_00296598;
    iVar5 = iVar5 + 1;
  }
  else {
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    *param_2 = iVar4 + *param_3;
    if (0 < param_5) {
      iVar2 = iVar5 + 1 >> 1;
    }
    param_2[1] = iVar2 + param_3[1] + -1;
    iVar1 = iVar1 * 3;
    if (0 < param_4) {
      iVar1 = iVar1 + 1;
    }
    param_2[2] = (iVar1 >> 1) + *param_3;
    iVar5 = iVar5 * 3;
    iVar1 = param_3[1];
    if (0 < param_5) {
      iVar5 = iVar5 + 1;
    }
  }
  iVar2 = iVar5 >> 1;
LAB_00296598:
  param_2[3] = iVar2 + iVar1 + 1;
  return;
}


// ==== FUN_00296688 @ 00296688 ====

/* Strings referenciadas:
     "(a) invalid motion_type(%d)-0"
     "(b) invalid motion_type(%d)-1"
     "(c) invalid motion_type(%d)-2" */

void FUN_00296688(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5
                 ,undefined4 *param_6,uint *param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_d0 [16];
  undefined4 auStack_c0 [4];
  uint uStack_b0;
  
  iVar8 = (int)param_1;
  uStack_b0 = param_4;
  param_4 = param_4 & 8;
  *(undefined4 *)(*(int *)(iVar8 + 0x820) * 0x140 + iVar8 + 0x6cc) = 0;
  if ((param_4 == 0) && (*(int *)(iVar8 + 0x160) != 2)) goto LAB_00296b70;
  if (*(int *)(iVar8 + 0x184) == 3) {
    if ((param_5 == 2) || (param_4 == 0)) {
      uVar6 = *(undefined4 *)(iVar8 + 0x1c8);
      uVar4 = 0;
      uVar5 = 0;
      uVar7 = 0x10;
    }
    else {
      if (param_5 == 1) {
        FUN_00296fe0(param_1,*(undefined4 *)(iVar8 + 0x1c8),*param_7,0,0,8,param_2,param_3);
        FUN_00296fe0(param_1,*(undefined4 *)(iVar8 + 0x1c8),param_7[2],1,0,8,param_2,param_3);
        goto LAB_00296b70;
      }
      if (param_5 != 3) {
        FUN_002964c0(param_1,0x401900,param_5);
        goto LAB_00296b70;
      }
      FUN_00296500(param_1,auStack_d0,param_8,*param_6,(int)param_6[1] >> 1);
      FUN_00296fe0(param_1,*(undefined4 *)(iVar8 + 0x1c8),0,0,0,8,param_2,param_3);
      FUN_00296fe0(param_1,*(undefined4 *)(iVar8 + 0x1c8),1,0,0,8,param_2,param_3);
      FUN_00296fe0(param_1,*(undefined4 *)(iVar8 + 0x1c8),1,1,0,8,param_2,param_3);
      uVar6 = *(undefined4 *)(iVar8 + 0x1c8);
      uVar4 = 1;
      uVar5 = 0;
      uVar7 = 8;
    }
  }
  else {
    uVar10 = (uint)(*(int *)(iVar8 + 0x184) == 2);
    uVar9 = 0;
    auStack_c0[0] = *(undefined4 *)(iVar8 + 0x1d8);
    auStack_c0[1] = *(undefined4 *)(iVar8 + 0x1e8);
    auStack_c0[2] = *(undefined4 *)(iVar8 + 0x1dc);
    auStack_c0[3] = *(undefined4 *)(iVar8 + 0x1ec);
    if ((*(int *)(iVar8 + 0x160) == 2) && (uVar9 = 0, *(int *)(iVar8 + 0x130) != 0)) {
      uVar9 = (uint)(uVar10 != *param_7);
    }
    if (param_5 == 1) {
      uVar10 = *param_7;
LAB_00296980:
      uVar6 = auStack_c0[uVar9 * 2 + uVar10];
    }
    else {
      if (param_4 == 0) {
        uVar10 = *param_7;
        goto LAB_00296980;
      }
      if (param_5 == 2) {
        FUN_00296fe0(param_1,auStack_c0[uVar9 * 2 + *param_7],0,0,0,8,param_2,param_3);
        uVar9 = 0;
        if (*(int *)(iVar8 + 0x160) == 2) {
          uVar2 = param_7[2];
          if (*(int *)(iVar8 + 0x130) != 0) {
            uVar9 = (uint)(uVar10 != uVar2);
          }
        }
        else {
          uVar2 = param_7[2];
        }
        uVar4 = 0;
        uVar6 = auStack_c0[uVar9 * 2 + uVar2];
        uVar5 = 8;
        uVar7 = 8;
        goto LAB_00296b48;
      }
      if (param_5 != 3) {
        FUN_002964c0(param_1,0x401920,param_5);
        goto LAB_00296b70;
      }
      iVar1 = *(int *)(iVar8 + 0x130);
      FUN_00296500(param_1,auStack_d0,param_8,*param_6,param_6[1]);
      FUN_00296fe0(param_1,auStack_c0[uVar10],0,0,0,0x10,param_2,param_3);
      iVar3 = (uint)(iVar1 != 0) * 8;
      iVar1 = iVar3 + 4;
      if (uVar10 != 0) {
        iVar1 = iVar3;
      }
      uVar6 = *(undefined4 *)((int)auStack_c0 + iVar1);
    }
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0x10;
  }
LAB_00296b48:
  FUN_00296fe0(param_1,uVar6,0,uVar4,uVar5,uVar7,param_2,param_3);
LAB_00296b70:
  if ((uStack_b0 & 4) != 0) {
    if (*(int *)(iVar8 + 0x184) == 3) {
      if (param_5 != 2) {
        FUN_00296fe0(param_1,*(undefined4 *)(iVar8 + 0x1cc),param_7[1],0,0,8,param_2,param_3);
        uVar6 = 8;
        uVar9 = param_7[3];
      }
      else {
        uVar9 = 0;
        uVar6 = 0x10;
      }
      FUN_00296fe0(param_1,*(undefined4 *)(iVar8 + 0x1cc),uVar9,param_5 != 2,0,uVar6,param_2,param_3
                  );
    }
    else if (param_5 == 1) {
      if (param_7[1] == 0) {
        uVar6 = *(undefined4 *)(iVar8 + 0x1dc);
      }
      else {
        uVar6 = *(undefined4 *)(iVar8 + 0x1ec);
      }
      FUN_00296fe0(param_1,uVar6,0,0,0,0x10,param_2,param_3);
    }
    else if (param_5 == 2) {
      if (param_7[1] == 0) {
        uVar6 = *(undefined4 *)(iVar8 + 0x1dc);
      }
      else {
        uVar6 = *(undefined4 *)(iVar8 + 0x1ec);
      }
      FUN_00296fe0(param_1,uVar6,0,0,0,8,param_2,param_3);
      if (param_7[3] == 0) {
        uVar6 = *(undefined4 *)(iVar8 + 0x1dc);
      }
      else {
        uVar6 = *(undefined4 *)(iVar8 + 0x1ec);
      }
      FUN_00296fe0(param_1,uVar6,0,0,8,8,param_2,param_3);
    }
    else {
      FUN_002964c0(param_1,0x401940,param_5);
    }
  }
  return;
}


// ==== FUN_00296d90 @ 00296d90 ====

/* Strings referenciadas:
     "Invalid modion type -- ignored(%d)" */

undefined4 FUN_00296d90(undefined8 param_1,int param_2,int param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar3 = *(int *)(iVar5 + 0x13c);
  iVar1 = param_2 / iVar3;
  param_2 = param_2 % iVar3;
  if (iVar3 == 0) {
    trap(7);
  }
  if ((param_4 & 1) == 0) {
    if (2 < (int)param_5 - 1U) {
      FUN_002964c0(param_1,0x401960,param_5);
      *(undefined4 *)(iVar5 + 300) = 1;
      return 0;
    }
    FUN_00296688(param_1,param_2 << 4,iVar1 << 4,param_4);
    do {
      uVar2 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar2 >> 8 & 1) != 0);
    FUN_00299038(param_1);
    *(undefined4 *)(*(int *)(iVar5 + 0x820) * 0x140 + iVar5 + 0x6d8) = 1;
  }
  else {
    do {
      uVar2 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar2 >> 8 & 1) != 0);
    *(undefined4 *)(*(int *)(iVar5 + 0x820) * 0x140 + iVar5 + 0x6d8) = 0;
  }
  if (param_3 == 1) {
    if ((param_4 & 2) != 0) {
      *(undefined4 *)(*(int *)(iVar5 + 0x820) * 0x140 + iVar5 + 0x6d4) = 1;
      goto LAB_00296f14;
    }
    iVar3 = *(int *)(iVar5 + 0x820);
  }
  else {
    iVar3 = *(int *)(iVar5 + 0x820);
  }
  *(undefined4 *)(iVar3 * 0x140 + iVar5 + 0x6d4) = 0;
LAB_00296f14:
  *(uint *)(*(int *)(iVar5 + 0x820) * 0x140 + iVar5 + 0x6d0) = (uint)param_4 & 1;
  if (*(int *)(iVar5 + 0x184) == 3) {
    *(int *)(*(int *)(iVar5 + 0x820) * 0x140 + iVar5 + 0x6c8) =
         **(int **)(iVar5 + 0x1d0) + (param_2 * (*(int **)(iVar5 + 0x1d0))[4] + iVar1) * 0x180;
  }
  else {
    if (*(int *)(iVar5 + 0x184) == 2) {
      piVar4 = *(int **)(iVar5 + 0x1f0);
    }
    else {
      piVar4 = *(int **)(iVar5 + 0x1e0);
    }
    *(int *)(*(int *)(iVar5 + 0x820) * 0x140 + iVar5 + 0x6c8) =
         *piVar4 + (param_2 * piVar4[4] + iVar1) * 0x180;
  }
  return 1;
}


// ==== FUN_00296fe0 @ 00296fe0 ====

void FUN_00296fe0(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9,uint param_10,uint param_11,int param_12)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar6 = *(int *)(param_1 + 0x820);
  iVar3 = iVar6 * 0x140;
  iVar4 = *(int *)(param_1 + 0x830);
  iVar1 = *(int *)(param_1 + 0x6cc + iVar3);
  iVar3 = param_1 + iVar3 + 0x5a0;
  iVar7 = ((int)param_9 >> 1) + param_7;
  piVar11 = (int *)(iVar3 + iVar1 * 0x1c + 0xb8);
  piVar10 = (int *)(iVar3 + iVar1 * 0x1c + 0x48);
  iVar3 = (int)param_10 >> 1;
  if (param_11 != 0) {
    iVar3 = iVar3 << 1;
  }
  iVar9 = iVar3 + param_8 + param_5 + param_3;
  iVar3 = param_2[4];
  iVar14 = iVar7 >> 4;
  iVar13 = *param_2;
  iVar15 = iVar9 >> 4;
  iVar5 = iVar14 * iVar3 + iVar15;
  iVar12 = iVar13 + iVar5 * 0x180;
  piVar10[1] = iVar7 + iVar14 * -0x10;
  iVar13 = (iVar5 + iVar3) * 0x180 + iVar13;
  iVar6 = param_1 + iVar1 * 4 + iVar6 * 0x140;
  iVar9 = iVar9 + iVar15 * -0x10;
  *(int *)(iVar6 + 0x5a8) = iVar12;
  *(int *)(iVar6 + 0x5b8) = iVar13;
  *piVar10 = iVar4 + (param_4 + param_5) * 0x20;
  if ((param_10 & 1) == 0) {
    if (iVar9 + (param_6 << (param_11 & 0x1f)) < 0x11) {
      piVar10[2] = param_6;
      goto LAB_0029719c;
    }
    iVar6 = (0x10 >> (param_11 & 0x1f)) - (iVar9 >> (param_11 & 0x1f));
    piVar10[2] = iVar6;
    piVar10[3] = param_6 - iVar6;
  }
  else if (iVar9 + (param_6 << (param_11 & 0x1f)) < 0x10) {
    piVar10[2] = param_6;
LAB_0029719c:
    piVar10[3] = 0;
  }
  else {
    iVar6 = ((0x10 >> (param_11 & 0x1f)) - (iVar9 >> (param_11 & 0x1f))) + -1;
    piVar10[2] = iVar6;
    piVar10[3] = param_6 - iVar6;
  }
  if (*(int *)(param_1 + 0x87c) == 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x820) * 0x140 + param_1 + 0x5a0) + iVar1 * 0x600;
    piVar10[5] = iVar6 + iVar9 * 0x10;
    piVar10[6] = iVar6 + iVar9 * 0x10 + 0x300;
  }
  else {
    piVar10[6] = iVar13 + iVar9 * 0x10;
    piVar10[5] = iVar12 + iVar9 * 0x10;
    iVar6 = iVar12;
  }
  param_6 = param_6 >> 1;
  param_5 = param_5 >> 1;
  piVar10[4] = 0x10 << (param_11 & 0x1f);
  iVar7 = ((int)(param_9 - ((int)param_9 >> 0x1f)) >> 2) + (param_7 >> 1);
  iVar3 = (int)(param_10 - ((int)param_10 >> 0x1f)) >> 2;
  if (param_11 == 0) {
    iVar3 = iVar3 + (param_8 >> 1) + param_5 + param_3;
  }
  else {
    iVar3 = iVar3 * 2 + (param_8 >> 1) + param_5 + param_3;
  }
  iVar5 = iVar7 >> 3;
  iVar9 = iVar3 + (iVar3 >> 3) * -8;
  uVar8 = (int)param_10 / 2 & 1;
  piVar11[1] = iVar7 + iVar5 * -8;
  *piVar11 = iVar4 + (param_4 + param_5) * 0x10 + 0x200;
  if (uVar8 == 0) {
    if (8 < iVar9 + (param_6 << (param_11 & 0x1f))) {
      iVar4 = (8 >> (param_11 & 0x1f)) - (iVar9 >> (param_11 & 0x1f));
      piVar11[2] = iVar4;
      piVar11[3] = param_6 - iVar4;
      goto LAB_0029733c;
    }
    piVar11[2] = param_6;
  }
  else {
    if (7 < iVar9 + (param_6 << (param_11 & 0x1f))) {
      iVar4 = ((8 >> (param_11 & 0x1f)) - (iVar9 >> (param_11 & 0x1f))) + -1;
      piVar11[2] = iVar4;
      piVar11[3] = param_6 - iVar4;
      goto LAB_0029733c;
    }
    piVar11[2] = param_6;
  }
  piVar11[3] = 0;
LAB_0029733c:
  iVar4 = ((iVar5 - iVar14) * 2 + ((iVar3 >> 3) - iVar15)) * 0x180;
  if (*(int *)(param_1 + 0x87c) == 0) {
    piVar11[6] = iVar6 + iVar4 + iVar9 * 8 + 0x400;
    piVar11[5] = iVar6 + iVar4 + iVar9 * 8 + 0x100;
  }
  else {
    iVar6 = iVar9 * 8 + 0x100;
    if ((uint)(iVar4 + iVar6) < 0x301) {
      iVar6 = iVar12 + iVar4 + iVar6;
    }
    else {
      iVar6 = iVar13 + iVar4 + iVar6 + -0x300;
    }
    piVar11[5] = iVar6;
    piVar11[6] = iVar13 + iVar4 + iVar9 * 8 + 0x100;
  }
  piVar11[4] = 8 << (param_11 & 0x1f);
  iVar6 = *(int *)(param_1 + 0x820) * 0x140;
  piVar10 = (int *)(param_1 + 0x6cc + iVar6);
  param_1 = param_1 + iVar1 * 4 + iVar6;
  iVar6 = *piVar10;
  *(undefined **)(param_1 + 0x5c8) =
       (&PTR_LAB_003c1468)[param_12 << 2 | (param_9 & 1) << 1 | param_10 & 1];
  puVar2 = (&PTR_LAB_003c1488)[param_12 << 2 | ((int)param_9 / 2 & 1U) << 1 | uVar8];
  *piVar10 = iVar6 + 1;
  *(undefined **)(param_1 + 0x5d8) = puVar2;
  return;
}


// ==== FUN_00297468 @ 00297468 ====

/* Strings referenciadas:
     "intra && skip MB" */

void FUN_00297468(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_a8;
  
  iVar6 = (int)param_1;
  if ((*(int *)(iVar6 + param_2 * 0x140 + 0x6d8) != 0) &&
     (iVar7 = 0, 0 < *(int *)(iVar6 + 0x6cc + param_2 * 0x140))) {
    do {
      iVar4 = iVar7 * 4;
      iVar1 = param_2 * 0x140;
      iVar2 = iVar7 * 0x1c;
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + iVar1;
      iVar5 = iVar6 + iVar1 + 0x5a0;
      (**(code **)(iVar6 + 0x5c8 + iVar4))(iVar5 + iVar2 + 0x48);
      (**(code **)(iVar6 + 0x5d8 + iVar4))(iVar5 + iVar2 + 0xb8);
    } while (iVar7 < *(int *)(iVar6 + 0x6cc + iVar1));
  }
  iStack_a8 = iVar6 + 0x6d0;
  if ((*(int *)(iStack_a8 + param_2 * 0x140) != 0) &&
     (*(int *)(iVar6 + param_2 * 0x140 + 0x6dc) != 0)) {
    FUN_00296468(param_1,0x401988);
  }
  param_2 = param_2 * 0x140;
  if (*(int *)(iStack_a8 + param_2) == 0) {
    puVar3 = (undefined4 *)(iVar6 + 0x6c8 + param_2);
    if (*(int *)(iVar6 + param_2 + 0x6dc) == 0) {
      FUN_00298e88(*puVar3,*(undefined4 *)(iVar6 + 0x830),*(undefined4 *)(iVar6 + param_2 + 0x5a4));
      return;
    }
    FUN_00298f78(*puVar3,*(undefined4 *)(iVar6 + 0x830));
    return;
  }
  FUN_00298f78(*(undefined4 *)(iVar6 + 0x6c8 + param_2),*(undefined4 *)(iVar6 + param_2 + 0x5a4));
  return;
}


// ==== FUN_00297688 @ 00297688 ====

/* Strings referenciadas:
     "= Skip to the next picture =" */

bool FUN_00297688(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 0x820) = 0;
  iVar4 = *(int *)(iVar6 + 0x13c) * *(int *)(iVar6 + 0x140);
  *(undefined4 *)(iVar6 + 0x824) = 0;
  if (*(int *)(iVar6 + 0x184) != 3) {
    iVar4 = iVar4 >> 1;
  }
  do {
    do {
      lVar5 = FUN_002978c8(param_1,iVar4);
    } while (lVar5 == 1);
  } while (lVar5 == 3);
  FUN_00298d88();
  FUN_00298d88(param_1);
  iVar4 = REG_DMAC_3_IPU_FROM_QWC;
  if (iVar4 != 0) {
    uVar2 = REG_IPU_CTRL;
    while ((uVar2 & 0x4000) == 0) {
      iVar4 = REG_DMAC_4_IPU_TO_QWC;
      if (iVar4 == 0) {
        uVar2 = REG_DMAC_4_IPU_TO_CHCR;
        if ((uVar2 & 0x100) == 0) {
          FUN_00294c70(*(undefined4 *)(iVar6 + 0x868));
          iVar4 = *(int *)(iVar6 + 0x878);
        }
        else {
          iVar4 = *(int *)(iVar6 + 0x878);
        }
      }
      else {
        iVar4 = *(int *)(iVar6 + 0x878);
      }
      if (iVar4 != 0) {
        FUN_00296300();
        bVar1 = false;
        goto LAB_00297824;
      }
      iVar4 = REG_DMAC_3_IPU_FROM_QWC;
      if (iVar4 == 0) break;
      uVar2 = REG_IPU_CTRL;
    }
  }
  uVar2 = REG_IPU_BP;
  lVar3 = REG_IPU_TOP;
  *(int *)(iVar6 + 0x848) = (int)lVar3;
  if (lVar3 < 0) {
    if ((uVar2 & 0x1f) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0x20 - (uVar2 & 0x1f);
    }
  }
  else {
    iVar4 = 0x20;
  }
  *(int *)(iVar6 + 0x84c) = iVar4;
  uVar2 = REG_IPU_CTRL;
  bVar1 = (uVar2 & 0x4000) == 0;
  if (!bVar1) {
    FUN_002963a0(param_1);
  }
LAB_00297824:
  if (!bVar1) {
    if (*(int *)(iVar6 + 0x878) != 0) {
      return (bool)4;
    }
    lVar5 = 2;
  }
  do {
    uVar2 = REG_DMAC_9_SPR_TO_CHCR;
  } while ((uVar2 >> 8 & 1) != 0);
  if (lVar5 == 0) {
    FUN_00297468(param_1,*(int *)(iVar6 + 0x820) == 0);
  }
  if ((int)lVar5 - 1U < 2) {
    FUN_00296468(param_1,0x4019a0);
  }
  return lVar5 == 0;
}


// ==== FUN_002978c8 @ 002978c8 ====

/* Strings referenciadas:
     "Too many macroblocks in picture" */

long FUN_002978c8(undefined8 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  
  iStack_a0 = 0;
  iStack_9c = 0;
  lVar4 = FUN_00299f48(param_1,param_2,&iStack_a0,&iStack_9c,auStack_e0);
  if (lVar4 == 0) {
    iVar5 = (int)param_1;
    *(undefined4 *)(iVar5 + 300) = 0;
    for (; iStack_a0 < param_2; iStack_a0 = iStack_a0 + 1) {
      *(undefined4 *)(*(int *)(iVar5 + 0x820) * 0x140 + iVar5 + 0x6dc) = 0;
      FUN_00298d88(param_1);
      iVar3 = REG_DMAC_3_IPU_FROM_QWC;
      if (iVar3 != 0) {
        uVar2 = REG_IPU_CTRL;
        while ((uVar2 & 0x4000) == 0) {
          iVar3 = REG_DMAC_4_IPU_TO_QWC;
          if (iVar3 == 0) {
            uVar2 = REG_DMAC_4_IPU_TO_CHCR;
            if ((uVar2 & 0x100) == 0) {
              FUN_00294c70(*(undefined4 *)(iVar5 + 0x868));
              iVar3 = *(int *)(iVar5 + 0x878);
            }
            else {
              iVar3 = *(int *)(iVar5 + 0x878);
            }
          }
          else {
            iVar3 = *(int *)(iVar5 + 0x878);
          }
          if (iVar3 != 0) {
            FUN_00296300();
            bVar1 = false;
            goto LAB_00297a64;
          }
          iVar3 = REG_DMAC_3_IPU_FROM_QWC;
          if (iVar3 == 0) break;
          uVar2 = REG_IPU_CTRL;
        }
      }
      uVar2 = REG_IPU_BP;
      lVar4 = REG_IPU_TOP;
      *(int *)(iVar5 + 0x848) = (int)lVar4;
      if (lVar4 < 0) {
        if ((uVar2 & 0x1f) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = 0x20 - (uVar2 & 0x1f);
        }
      }
      else {
        iVar3 = 0x20;
      }
      *(int *)(iVar5 + 0x84c) = iVar3;
      uVar2 = REG_IPU_CTRL;
      bVar1 = (uVar2 & 0x4000) == 0;
      if (!bVar1) {
        FUN_002963a0(param_1);
      }
LAB_00297a64:
      if (!bVar1) {
        if (*(int *)(iVar5 + 0x878) != 0) {
          return 4;
        }
        return 2;
      }
      if (iStack_9c == 0) {
        lVar4 = FUN_00298c60(param_1,0x17);
        if (lVar4 == 0) {
          *(undefined4 *)(iVar5 + 300) = 0;
          return 3;
        }
        if (*(int *)(iVar5 + 300) != 0) {
          *(undefined4 *)(iVar5 + 300) = 0;
          return 3;
        }
        iStack_9c = FUN_00298718(param_1);
        if (*(int *)(iVar5 + 300) != 0) goto LAB_00297b28;
      }
      if (param_2 <= iStack_a0) {
        FUN_00296468(param_1,0x4019c0);
        return 2;
      }
      if (iStack_9c == 1) {
        lVar4 = FUN_002981c0(param_1,&uStack_98,&uStack_94,auStack_90,auStack_e0,auStack_c0,
                             auStack_b0);
        if (lVar4 == 0) {
LAB_00297b28:
          *(undefined4 *)(iVar5 + 300) = 0;
          return 1;
        }
      }
      else {
        lVar4 = FUN_00298dc8(param_1,auStack_e0,&uStack_94,auStack_c0,&uStack_98);
        if (lVar4 == 0) goto LAB_00297b80;
      }
      lVar4 = FUN_00296d90(param_1,iStack_a0,iStack_9c,uStack_98,uStack_94,auStack_e0,auStack_c0,
                           auStack_b0);
      if (lVar4 == 0) {
LAB_00297b80:
        *(undefined4 *)(iVar5 + 300) = 0;
        return 2;
      }
      if (iStack_a0 == 0) {
        uVar2 = *(uint *)(iVar5 + 0x820);
        iStack_a0 = 0;
      }
      else {
        FUN_00297468(param_1,*(uint *)(iVar5 + 0x820) ^ 1);
        uVar2 = *(uint *)(iVar5 + 0x820);
      }
      iStack_9c = iStack_9c + -1;
      *(uint *)(iVar5 + 0x820) = uVar2 ^ 1;
    }
    lVar4 = 0;
  }
  return lVar4;
}


// ==== FUN_00297bf8 @ 00297bf8 ====

void FUN_00297bf8(undefined8 param_1,int *param_2,int *param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  FUN_00298d88();
  REG_IPU_CMD = 0x38000000;
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x828) = 0;
  *(undefined4 *)(iVar7 + 0x82c) = 0x30000000;
  iVar2 = FUN_002989f8(param_1);
  uVar6 = REG_IPU_BP;
  lVar1 = REG_IPU_TOP;
  *(int *)(iVar7 + 0x848) = (int)lVar1;
  if (lVar1 < 0) {
    uVar6 = -(uVar6 & 0x1f) & 0x1f;
  }
  else {
    uVar6 = 0x20;
  }
  *(uint *)(iVar7 + 0x84c) = uVar6;
  *(uint *)(iVar7 + 300) = (uint)(iVar2 == 0);
  uVar6 = (uint)(short)iVar2;
  if (param_4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (uVar6 != 0) {
      iVar2 = FUN_00298b78(param_1,param_4);
    }
  }
  uVar8 = (uint)param_4;
  iVar5 = 0x10 << (uVar8 & 0x1f);
  iVar4 = *param_2;
  if (param_8 != 0) {
    iVar4 = *param_2 >> 1;
  }
  if ((int)uVar6 < 1) {
    iVar3 = iVar4 << 1;
    if ((int)uVar6 < 0) {
      iVar4 = (iVar4 + -1) - ((~uVar6 << (uVar8 & 0x1f)) + iVar2);
      if (iVar4 < -iVar5) {
        iVar4 = iVar4 + iVar5 * 2;
      }
      goto LAB_00297d64;
    }
  }
  else {
    iVar4 = iVar4 + 1 + (uVar6 - 1 << (uVar8 & 0x1f)) + iVar2;
    iVar3 = iVar4 * 2;
    if (iVar5 <= iVar4) {
      iVar4 = iVar4 + iVar5 * -2;
LAB_00297d64:
      iVar3 = iVar4 << 1;
    }
  }
  if (param_8 == 0) {
    iVar3 = iVar4;
  }
  *param_2 = iVar3;
  if (param_6 != 0) {
    FUN_00298d88(param_1);
    REG_IPU_CMD = 0x3c000000;
    *(undefined4 *)(iVar7 + 0x828) = 0;
    *(undefined4 *)(iVar7 + 0x82c) = 0x30000000;
    iVar2 = FUN_002989f8(param_1);
    uVar6 = REG_IPU_BP;
    lVar1 = REG_IPU_TOP;
    *(int *)(iVar7 + 0x848) = (int)lVar1;
    if (lVar1 < 0) {
      uVar6 = -(uVar6 & 0x1f) & 0x1f;
    }
    else {
      uVar6 = 0x20;
    }
    *(uint *)(iVar7 + 0x84c) = uVar6;
    *(uint *)(iVar7 + 300) = (uint)(iVar2 == 0);
    *param_3 = (int)(short)iVar2;
  }
  FUN_00298d88(param_1);
  REG_IPU_CMD = 0x38000000;
  *(undefined4 *)(iVar7 + 0x828) = 0;
  *(undefined4 *)(iVar7 + 0x82c) = 0x30000000;
  iVar2 = FUN_002989f8(param_1);
  uVar6 = REG_IPU_BP;
  lVar1 = REG_IPU_TOP;
  *(int *)(iVar7 + 0x848) = (int)lVar1;
  if (lVar1 < 0) {
    uVar6 = -(uVar6 & 0x1f) & 0x1f;
  }
  else {
    uVar6 = 0x20;
  }
  *(uint *)(iVar7 + 0x84c) = uVar6;
  *(uint *)(iVar7 + 300) = (uint)(iVar2 == 0);
  uVar6 = (uint)(short)iVar2;
  if ((param_5 == 0) || (uVar6 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00298b78(param_1,param_5);
  }
  if (param_7 == 0) {
    iVar4 = param_2[1];
  }
  else {
    param_2[1] = param_2[1] >> 1;
    iVar4 = param_2[1];
  }
  uVar8 = (uint)param_5;
  iVar5 = 0x10 << (uVar8 & 0x1f);
  if (param_8 != 0) {
    iVar4 = iVar4 >> 1;
  }
  if ((int)uVar6 < 1) {
    iVar3 = iVar4 << 1;
    if (-1 < (int)uVar6) goto LAB_00297f40;
    iVar4 = (iVar4 + -1) - ((~uVar6 << (uVar8 & 0x1f)) + iVar2);
    if (iVar4 < -iVar5) {
      iVar4 = iVar4 + iVar5 * 2;
    }
  }
  else {
    iVar4 = iVar4 + 1 + (uVar6 - 1 << (uVar8 & 0x1f)) + iVar2;
    iVar3 = iVar4 * 2;
    if (iVar4 < iVar5) goto LAB_00297f40;
    iVar4 = iVar4 + iVar5 * -2;
  }
  iVar3 = iVar4 << 1;
LAB_00297f40:
  if (param_8 == 0) {
    iVar3 = iVar4;
  }
  param_2[1] = iVar3;
  if (param_7 != 0) {
    param_2[1] = param_2[1] << 1;
  }
  if (param_6 != 0) {
    FUN_00298d88(param_1);
    REG_IPU_CMD = 0x3c000000;
    *(undefined4 *)(iVar7 + 0x828) = 0;
    *(undefined4 *)(iVar7 + 0x82c) = 0x30000000;
    iVar2 = FUN_002989f8(param_1);
    uVar6 = REG_IPU_BP;
    lVar1 = REG_IPU_TOP;
    *(int *)(iVar7 + 0x848) = (int)lVar1;
    if (lVar1 < 0) {
      uVar6 = -(uVar6 & 0x1f) & 0x1f;
    }
    else {
      uVar6 = 0x20;
    }
    *(uint *)(iVar7 + 0x84c) = uVar6;
    *(uint *)(iVar7 + 300) = (uint)(iVar2 == 0);
    param_3[1] = (int)(short)iVar2;
  }
  return;
}


// ==== FUN_00298020 @ 00298020 ====

void FUN_00298020(undefined8 param_1,int param_2,undefined8 param_3,int param_4,int param_5,
                 long param_6,long param_7,undefined8 param_8,undefined4 param_9,int param_10,
                 undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_6 != 1) {
    uVar1 = FUN_00298b78(param_1,1);
    puVar2 = (undefined4 *)(param_5 * 4 + param_4);
    *puVar2 = uVar1;
    FUN_00297bf8(param_1,param_2 + param_5 * 8,param_3,param_8,param_9,param_10,param_11,0);
    uVar1 = FUN_00298b78(param_1,1);
    puVar2[2] = uVar1;
    FUN_00297bf8(param_1,param_2 + param_5 * 8 + 0x10,param_3,param_8,param_9,param_10,param_11,0);
    return;
  }
  if ((param_7 == 0) && (param_10 == 0)) {
    uVar1 = FUN_00298b78(param_1,1);
    puVar2 = (undefined4 *)(param_5 * 4 + param_4);
    puVar2[2] = uVar1;
    *puVar2 = uVar1;
  }
  puVar2 = (undefined4 *)(param_2 + param_5 * 8);
  FUN_00297bf8(param_1,puVar2,param_3,param_8,param_9,param_10,param_11,0);
  puVar2[4] = *puVar2;
  puVar2[5] = puVar2[1];
  return;
}


// ==== FUN_002981c0 @ 002981c0 ====

/* Strings referenciadas:
     "Invalid macroblock_type code: 0" */

undefined4
FUN_002981c0(undefined8 param_1,uint *param_2,int *param_3,int *param_4,undefined8 param_5,
            uint *param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  iVar6 = (int)param_1;
  uVar5 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar5 & 0xf8ffffff | *(int *)(iVar6 + 0x160) << 0x18;
  FUN_00298d88(param_1);
  REG_IPU_CMD = 0x34000000;
  *(undefined4 *)(iVar6 + 0x828) = 0;
  *(undefined4 *)(iVar6 + 0x82c) = 0x30000000;
  iVar3 = FUN_002989f8(param_1);
  uVar5 = REG_IPU_BP;
  lVar2 = REG_IPU_TOP;
  *(int *)(iVar6 + 0x848) = (int)lVar2;
  if (lVar2 < 0) {
    uVar5 = -(uVar5 & 0x1f) & 0x1f;
  }
  else {
    uVar5 = 0x20;
  }
  *(uint *)(iVar6 + 0x84c) = uVar5;
  uVar5 = (uint)(short)iVar3;
  *(uint *)(iVar6 + 300) = (uint)(iVar3 == 0);
  *param_2 = uVar5;
  if (uVar5 == 0) {
    FUN_00296468(param_1,0x401a10);
    *(undefined4 *)(iVar6 + 300) = 1;
    return 0;
  }
  if ((uVar5 & 0xc) == 0) {
    if ((uVar5 & 1) != 0) {
      iVar3 = 1;
      if (*(int *)(iVar6 + 400) != 0) {
        if (*(int *)(iVar6 + 0x184) == 3) {
          iVar3 = 2;
        }
        *param_3 = iVar3;
      }
      goto LAB_00298350;
    }
    iVar3 = *(int *)(iVar6 + 0x184);
  }
  else {
    if ((*(int *)(iVar6 + 0x184) == 3) && (*(int *)(iVar6 + 0x18c) != 0)) {
      *param_3 = 2;
    }
    else {
      iVar3 = FUN_00298b78(param_1,2);
      *param_3 = iVar3;
    }
LAB_00298350:
    iVar3 = *(int *)(iVar6 + 0x184);
  }
  iVar1 = *param_3;
  if (iVar3 == 3) {
    uVar8 = 1;
    if (iVar1 == 1) {
      uVar8 = 2;
    }
    bVar9 = iVar1 == 2;
  }
  else {
    bVar9 = false;
    uVar8 = 1;
    if (iVar1 == 2) {
      uVar8 = 2;
    }
  }
  if (((iVar3 == 3) && (*(int *)(iVar6 + 0x18c) == 0)) && ((*param_2 & 3) != 0)) {
    iVar3 = FUN_00298b78(param_1,1);
  }
  else {
    iVar3 = 0;
  }
  *param_4 = iVar3;
  uVar5 = *param_2;
  if ((uVar5 & 0x10) != 0) {
    uVar4 = FUN_00298b78(param_1,5);
    *(undefined4 *)(iVar6 + 0x1c4) = uVar4;
    uVar5 = *param_2;
  }
  if ((uVar5 & 8) == 0) {
    if ((uVar5 & 1) == 0) {
      iVar3 = *(int *)(iVar6 + 300);
    }
    else {
      if (*(int *)(iVar6 + 400) != 0) {
        iVar3 = *(int *)(iVar6 + 0x858);
        goto LAB_00298434;
      }
      iVar3 = *(int *)(iVar6 + 300);
    }
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x858);
LAB_00298434:
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar6 + 0x168) + -1;
      FUN_00297bf8(param_1,param_5,param_7,iVar3,iVar3,0,0,*(undefined4 *)(iVar6 + 0x164));
      iVar3 = *(int *)(iVar6 + 300);
    }
    else {
      FUN_00298020(param_1,param_5,param_7,param_6,0,uVar8,bVar9,*(int *)(iVar6 + 0x174) + -1);
      iVar3 = *(int *)(iVar6 + 300);
    }
  }
  if (iVar3 != 0) {
    return 0;
  }
  puVar7 = (undefined4 *)param_5;
  iVar3 = 0;
  if ((*param_2 & 4) != 0) {
    if (*(int *)(iVar6 + 0x858) == 0) {
      iVar3 = *(int *)(iVar6 + 0x170) + -1;
      FUN_00297bf8(param_1,puVar7 + 2,param_7,iVar3,iVar3,0,0,*(undefined4 *)(iVar6 + 0x16c));
      iVar3 = *(int *)(iVar6 + 300);
    }
    else {
      FUN_00298020(param_1,param_5,param_7,param_6,1,uVar8,bVar9,*(int *)(iVar6 + 0x17c) + -1);
      iVar3 = *(int *)(iVar6 + 300);
    }
  }
  if (iVar3 != 0) {
    return 0;
  }
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) && (*(int *)(iVar6 + 400) != 0)) {
    thunk_FUN_00298cf0(param_1,1);
    uVar5 = *param_2;
  }
  if ((uVar5 & 3) == 0) {
    *(undefined4 *)(*(int *)(iVar6 + 0x820) * 0x140 + iVar6 + 0x6dc) = 1;
  }
  else {
    FUN_00299ea8(*(undefined4 *)(*(int *)(iVar6 + 0x820) * 0x140 + iVar6 + 0x5a4),0x300);
    FUN_00298d88(param_1);
    uVar5 = (*param_2 & 1) << 0x1b | *param_4 << 0x19 | *(int *)(iVar6 + 0x1c0) << 0x1a |
            *(int *)(iVar6 + 0x1c4) << 0x10 | 0x20000000U;
    REG_IPU_CMD = uVar5;
    uVar5 = uVar5 & 0xf0000000;
    *(uint *)(iVar6 + 0x82c) = uVar5;
    if (((uVar5 == 0x20000000) || (uVar5 == 0x30000000)) || (uVar5 == 0x40000000)) {
      *(undefined4 *)(iVar6 + 0x828) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x828) = 1;
    }
  }
  *(undefined4 *)(iVar6 + 0x1c0) = 0;
  if (*(int *)(iVar6 + 300) != 0) {
    return 0;
  }
  if ((*param_2 & 1) == 0) {
    *(undefined4 *)(iVar6 + 0x1c0) = 1;
    if ((*param_2 & 1) == 0) {
      iVar3 = *(int *)(iVar6 + 0x160);
      goto LAB_00298688;
    }
    iVar3 = *(int *)(iVar6 + 400);
  }
  else {
    iVar3 = *(int *)(iVar6 + 400);
  }
  if (iVar3 == 0) {
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    iVar3 = *(int *)(iVar6 + 0x160);
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x160);
  }
LAB_00298688:
  if ((iVar3 == 2) && ((*param_2 & 9) == 0)) {
    *puVar7 = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    if (*(int *)(iVar6 + 0x184) == 3) {
      *param_3 = 2;
    }
    else {
      *param_3 = 1;
      *param_6 = (uint)(*(int *)(iVar6 + 0x184) == 2);
    }
  }
  return 1;
}


// ==== FUN_00298718 @ 00298718 ====

/* Strings referenciadas:
     "Invalid macroblock_address_increment code(0x%08x)" */

int FUN_00298718(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    FUN_00298d88(param_1);
    REG_IPU_CMD = 0x30000000;
    iVar5 = (int)param_1;
    *(undefined4 *)(iVar5 + 0x82c) = 0x30000000;
    *(undefined4 *)(iVar5 + 0x828) = 0;
    iVar2 = FUN_002989f8(param_1);
    uVar4 = REG_IPU_BP;
    lVar3 = REG_IPU_TOP;
    *(int *)(iVar5 + 0x848) = (int)lVar3;
    if (lVar3 < 0) {
      *(uint *)(iVar5 + 0x84c) = 0x20 - (uVar4 & 0x1f) & 0x1f;
    }
    else {
      *(undefined4 *)(iVar5 + 0x84c) = 0x20;
    }
    uVar4 = (uint)(short)iVar2;
    *(uint *)(iVar5 + 300) = (uint)(iVar2 == 0);
    if (uVar4 == 0x22) {
LAB_00298838:
      bVar1 = true;
    }
    else {
      if (uVar4 < 0x23) {
        if (uVar4 == 0) {
          lVar3 = FUN_00298c60(param_1,0xb);
          if ((*(int *)(iVar5 + 0x858) == 0) || (lVar3 != 0xf)) {
            FUN_002964c0(param_1,0x401a30,0);
            *(undefined4 *)(iVar5 + 300) = 1;
            return 1;
          }
          thunk_FUN_00298cf0(param_1,0xb);
          goto LAB_00298838;
        }
      }
      else if (uVar4 == 0x23) {
        bVar1 = true;
        iVar6 = iVar6 + 0x21;
        goto LAB_00298864;
      }
      iVar6 = iVar6 + uVar4;
      bVar1 = false;
    }
LAB_00298864:
    if (!bVar1) {
      return iVar6;
    }
  } while( true );
}


// ==== FUN_00298890 @ 00298890 ====

void FUN_00298890(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = REG_IPU_CTRL;
  if ((uVar3 & 0x80004000) == 0x80000000) {
    do {
      uVar3 = REG_IPU_BP;
      iVar1 = *(int *)(param_1 + 0x82c);
      if ((((iVar1 == 0x20000000) || (iVar1 == 0x30000000)) || (iVar1 == 0x40000000)) &&
         (((((uVar3 & 0xff00) >> 1) + ((uVar3 & 0x30000) >> 9)) - (uVar3 & 0x7f) < 0x20 &&
          (iVar1 = REG_DMAC_4_IPU_TO_QWC, iVar1 == 0)))) {
        FUN_00294c70(*(undefined4 *)(param_1 + 0x868));
        iVar4 = 0;
        if (*(int *)(param_1 + 0x878) != 0) goto LAB_002989a4;
      }
      bVar2 = 5000 < iVar4;
      iVar4 = iVar4 + 1;
      if (bVar2) {
        FUN_00294c70(*(undefined4 *)(param_1 + 0x868));
        iVar4 = 0;
        if (*(int *)(param_1 + 0x878) != 0) {
LAB_002989a4:
          FUN_00296300();
          *(undefined4 *)(param_1 + 0x82c) = 0;
          return;
        }
      }
      uVar3 = REG_IPU_CTRL;
    } while ((uVar3 & 0x80004000) == 0x80000000);
    *(undefined4 *)(param_1 + 0x82c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x82c) = 0;
  }
  return;
}


// ==== FUN_002989f8 @ 002989f8 ====

long FUN_002989f8(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = 0;
  lVar5 = REG_IPU_CMD;
  if (lVar5 < 0) {
    uVar3 = REG_IPU_CTRL;
    if ((uVar3 & 0x4000) == 0) {
      do {
        uVar3 = REG_IPU_BP;
        iVar1 = *(int *)(param_1 + 0x82c);
        if ((((iVar1 == 0x20000000) || (iVar1 == 0x30000000)) || (iVar1 == 0x40000000)) &&
           (((((uVar3 & 0xff00) >> 1) + ((uVar3 & 0x30000) >> 9)) - (uVar3 & 0x7f) < 0x20 &&
            (iVar1 = REG_DMAC_4_IPU_TO_QWC, iVar1 == 0)))) {
          FUN_00294c70(*(undefined4 *)(param_1 + 0x868));
          iVar4 = 0;
          if (*(int *)(param_1 + 0x878) != 0) goto LAB_00298b14;
        }
        bVar2 = 500 < iVar4;
        iVar4 = iVar4 + 1;
        if (bVar2) {
          FUN_00294c70(*(undefined4 *)(param_1 + 0x868));
          iVar4 = 0;
          if (*(int *)(param_1 + 0x878) != 0) {
LAB_00298b14:
            FUN_00296300();
            *(undefined4 *)(param_1 + 0x82c) = 0;
            return lVar5;
          }
        }
        lVar5 = REG_IPU_CMD;
        if (-1 < lVar5) {
          *(undefined4 *)(param_1 + 0x82c) = 0;
          return lVar5;
        }
        uVar3 = REG_IPU_CTRL;
      } while ((uVar3 & 0x4000) == 0);
      *(undefined4 *)(param_1 + 0x82c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x82c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x82c) = 0;
  }
  return lVar5;
}


// ==== FUN_00298b78 @ 00298b78 ====

uint FUN_00298b78(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  FUN_00298d88();
  iVar4 = (int)param_1;
  if ((*(int *)(iVar4 + 0x828) != 0) || (*(int *)(iVar4 + 0x84c) < (int)param_2)) {
    REG_IPU_CMD = 0x40000000;
    *(undefined4 *)(iVar4 + 0x828) = 0;
    *(undefined4 *)(iVar4 + 0x82c) = 0x40000000;
    uVar2 = FUN_002989f8(param_1);
    *(undefined4 *)(iVar4 + 0x848) = uVar2;
  }
  *(undefined4 *)(iVar4 + 0x84c) = 0x20;
  uVar1 = *(uint *)(iVar4 + 0x848);
  uVar3 = param_2 & 0xf0000000 | 0x40000000;
  REG_IPU_CMD = param_2 | 0x40000000;
  *(uint *)(iVar4 + 0x82c) = uVar3;
  if (uVar3 != 0x20000000) {
    if (uVar3 == 0x30000000) {
      *(undefined4 *)(iVar4 + 0x828) = 0;
      goto LAB_00298c34;
    }
    if (uVar3 != 0x40000000) {
      *(undefined4 *)(iVar4 + 0x828) = 1;
      goto LAB_00298c34;
    }
  }
  *(undefined4 *)(iVar4 + 0x828) = 0;
LAB_00298c34:
  uVar2 = FUN_002989f8(param_1);
  *(undefined4 *)(iVar4 + 0x848) = uVar2;
  return uVar1 >> (0x20 - param_2 & 0x1f);
}


// ==== FUN_00298c60 @ 00298c60 ====

uint FUN_00298c60(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if ((*(int *)(iVar3 + 0x828) == 0) && (param_2 <= *(int *)(iVar3 + 0x84c))) {
    uVar2 = *(uint *)(iVar3 + 0x848);
  }
  else {
    FUN_00298d88(param_1);
    REG_IPU_CMD = 0x40000000;
    *(undefined4 *)(iVar3 + 0x828) = 0;
    *(undefined4 *)(iVar3 + 0x82c) = 0x40000000;
    uVar1 = FUN_002989f8(param_1);
    *(undefined4 *)(iVar3 + 0x848) = uVar1;
    *(undefined4 *)(iVar3 + 0x84c) = 0x20;
    uVar2 = *(uint *)(iVar3 + 0x848);
  }
  return uVar2 >> (-param_2 & 0x1fU);
}


// ==== FUN_00298cf0 @ 00298cf0 ====

void FUN_00298cf0(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  
  FUN_00298d88();
  REG_IPU_CMD = (uint)param_2 | 0x40000000;
  uVar2 = param_2 & 0xfffffffff0000000 | 0x40000000;
  iVar3 = (int)param_1;
  *(int *)(iVar3 + 0x82c) = (int)uVar2;
  if (uVar2 != 0x20000000) {
    if (uVar2 == 0x30000000) {
      *(undefined4 *)(iVar3 + 0x828) = 0;
      goto LAB_00298d54;
    }
    if (uVar2 != 0x40000000) {
      *(undefined4 *)(iVar3 + 0x828) = 1;
      goto LAB_00298d54;
    }
  }
  *(undefined4 *)(iVar3 + 0x828) = 0;
LAB_00298d54:
  uVar1 = FUN_002989f8(param_1);
  *(undefined4 *)(iVar3 + 0x84c) = 0x20;
  *(undefined4 *)(iVar3 + 0x848) = uVar1;
  return;
}


// ==== FUN_00298d88 @ 00298d88 ====

void FUN_00298d88(void)

{
  uint uVar1;
  
  uVar1 = REG_IPU_CTRL;
  if ((uVar1 & 0x80004000) == 0x80000000) {
    FUN_00298890();
    return;
  }
  return;
}


// ==== FUN_00298dc8 @ 00298dc8 ====

/* Strings referenciadas:
     "skiped macroblock in I picure is not allowed" */

bool FUN_00298dc8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,
                 uint *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(*(int *)(iVar4 + 0x820) * 0x140 + iVar4 + 0x6dc) = 1;
  *(undefined4 *)(iVar4 + 0x1c0) = 1;
  if (*(int *)(iVar4 + 0x160) == 2) {
    *param_2 = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    iVar3 = *(int *)(iVar4 + 0x184);
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x184);
  }
  if (iVar3 == 3) {
    *param_3 = 2;
  }
  else {
    *param_3 = 1;
    uVar2 = (uint)(*(int *)(iVar4 + 0x184) == 2);
    *param_4 = uVar2;
    param_4[1] = uVar2;
  }
  bVar1 = *(int *)(iVar4 + 0x160) == 1;
  if (bVar1) {
    FUN_00296468(param_1,0x4019e0);
    uVar2 = *param_5;
  }
  else {
    uVar2 = *param_5;
  }
  *param_5 = uVar2 & 0xfffffffe;
  return !bVar1;
}


// ==== FUN_00298e88 @ 00298e88 ====

void FUN_00298e88(undefined4 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = auRam00299020;
  iVar2 = 0x18;
  do {
    iVar2 = iVar2 + -4;
    auVar8 = param_3[7];
    auVar3 = _paddh(*param_2,*param_3);
    auVar3 = _pminh(auVar3,auVar1);
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    auVar4 = _paddh(param_2[1],param_3[1]);
    auVar4 = _pminh(auVar4,auVar1);
    auVar4 = _pmaxh(auVar4,in_zero_qw);
    auVar4 = _ppacb(auVar4,auVar3);
    auVar3 = _paddh(param_2[2],param_3[2]);
    auVar3 = _pminh(auVar3,auVar1);
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    auVar5 = _paddh(param_2[3],param_3[3]);
    auVar5 = _pminh(auVar5,auVar1);
    auVar5 = _pmaxh(auVar5,in_zero_qw);
    auVar5 = _ppacb(auVar5,auVar3);
    auVar3 = _paddh(param_2[4],param_3[4]);
    auVar3 = _pminh(auVar3,auVar1);
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    auVar6 = _paddh(param_2[5],param_3[5]);
    auVar6 = _pminh(auVar6,auVar1);
    auVar6 = _pmaxh(auVar6,in_zero_qw);
    auVar6 = _ppacb(auVar6,auVar3);
    auVar7 = _paddh(param_2[6],param_3[6]);
    auVar3 = param_2[7];
    auVar7 = _pminh(auVar7,auVar1);
    auVar7 = _pmaxh(auVar7,in_zero_qw);
    *param_1 = auVar4._0_4_;
    param_1[1] = auVar4._4_4_;
    param_1[2] = auVar4._8_4_;
    param_1[3] = auVar4._12_4_;
    auVar8 = _paddh(auVar3,auVar8);
    auVar8 = _pminh(auVar8,auVar1);
    auVar8 = _pmaxh(auVar8,in_zero_qw);
    auVar8 = _ppacb(auVar8,auVar7);
    param_1[4] = auVar5._0_4_;
    param_1[5] = auVar5._4_4_;
    param_1[6] = auVar5._8_4_;
    param_1[7] = auVar5._12_4_;
    param_1[8] = auVar6._0_4_;
    param_1[9] = auVar6._4_4_;
    param_1[10] = auVar6._8_4_;
    param_1[0xb] = auVar6._12_4_;
    param_1[0xc] = auVar8._0_4_;
    param_1[0xd] = auVar8._4_4_;
    param_1[0xe] = auVar8._8_4_;
    param_1[0xf] = auVar8._12_4_;
    param_2 = param_2 + 8;
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 8;
  } while (iVar2 != 0);
  return;
}


// ==== FUN_00298f78 @ 00298f78 ====

void FUN_00298f78(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = auRam00299020;
  iVar2 = 0x18;
  do {
    iVar2 = iVar2 + -4;
    auVar3 = _pminh(*param_2,auVar1);
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    auVar4 = _pminh(param_2[1],auVar1);
    auVar4 = _pmaxh(auVar4,in_zero_qw);
    auVar3 = _ppacb(auVar4,auVar3);
    auVar4 = _pminh(param_2[2],auVar1);
    auVar4 = _pmaxh(auVar4,in_zero_qw);
    auVar5 = _pminh(param_2[3],auVar1);
    auVar5 = _pmaxh(auVar5,in_zero_qw);
    auVar4 = _ppacb(auVar5,auVar4);
    auVar5 = _pminh(param_2[4],auVar1);
    auVar5 = _pmaxh(auVar5,in_zero_qw);
    auVar6 = _pminh(param_2[5],auVar1);
    auVar6 = _pmaxh(auVar6,in_zero_qw);
    auVar5 = _ppacb(auVar6,auVar5);
    auVar6 = _pminh(param_2[6],auVar1);
    auVar6 = _pmaxh(auVar6,in_zero_qw);
    auVar7 = _pminh(param_2[7],auVar1);
    auVar7 = _pmaxh(auVar7,in_zero_qw);
    auVar6 = _ppacb(auVar7,auVar6);
    *param_1 = auVar3._0_4_;
    param_1[1] = auVar3._4_4_;
    param_1[2] = auVar3._8_4_;
    param_1[3] = auVar3._12_4_;
    param_1[4] = auVar4._0_4_;
    param_1[5] = auVar4._4_4_;
    param_1[6] = auVar4._8_4_;
    param_1[7] = auVar4._12_4_;
    param_1[8] = auVar5._0_4_;
    param_1[9] = auVar5._4_4_;
    param_1[10] = auVar5._8_4_;
    param_1[0xb] = auVar5._12_4_;
    param_1[0xc] = auVar6._0_4_;
    param_1[0xd] = auVar6._4_4_;
    param_1[0xe] = auVar6._8_4_;
    param_1[0xf] = auVar6._12_4_;
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 8;
  } while (iVar2 != 0);
  return;
}


// ==== FUN_00299038 @ 00299038 ====

void FUN_00299038(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  
  if (*(int *)(param_1 + 0x87c) == 0) {
    iVar1 = *(int *)(param_1 + 0x820);
    iVar6 = 0;
    iVar2 = *(int *)(iVar1 * 0x140 + param_1 + 0x6cc);
    puVar7 = &DAT_204436c0;
    if (0 < iVar2) {
      do {
        lVar5 = 3;
        if (iVar6 == iVar2 + -1) {
          lVar5 = 0;
        }
        iVar4 = iVar6 * 4 + iVar1 * 0x140;
        iVar6 = iVar6 + 1;
        iVar3 = *(int *)(param_1 + 0x5b8 + iVar4);
        *puVar7 = ((long)*(int *)(param_1 + 0x5a8 + iVar4) & 0xfffffffU) << 0x20 | 0x30000030;
        puVar7[2] = ((long)iVar3 & 0xfffffffU) << 0x20 | lVar5 << 0x1c | 0x30;
        puVar7 = puVar7 + 4;
      } while (iVar6 < iVar2);
    }
    lVar5 = FUN_0036d518();
    SYNC(0);
    REG_DMAC_9_SPR_TO_SADR = *(undefined4 *)(*(int *)(param_1 + 0x820) * 0x140 + param_1 + 0x5a0);
    REG_DMAC_9_SPR_TO_TADR = 0x4436c0;
    REG_DMAC_9_SPR_TO_QWC = 0;
    REG_DMAC_9_SPR_TO_CHCR = 0x105;
    if (lVar5 != 0) {
      FUN_0036d568();
      return;
    }
  }
  return;
}


// ==== FUN_00299ea8 @ 00299ea8 ====

void FUN_00299ea8(uint param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0036d518();
  if (param_1 >> 0x1c == 7) {
    param_1 = param_1 & 0xfffffff | 0x80000000;
  }
  else {
    param_1 = param_1 & 0xfffffff;
  }
  REG_DMAC_3_IPU_FROM_MADR = param_1;
  REG_DMAC_3_IPU_FROM_QWC = param_2 >> 4;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  if (lVar1 != 0) {
    FUN_0036d568();
    return;
  }
  return;
}


// ==== FUN_00299f48 @ 00299f48 ====

/* Strings referenciadas:
     "slice_start_code(0x%08x) out of range"
     "_sceMpegSliceA0(): error happens" */

undefined4
FUN_00299f48(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 300) = 0;
  FUN_0029b058();
  while ((lVar3 = FUN_00298c60(param_1,0x18), lVar3 != 1 && (*(int *)(iVar5 + 0x878) == 0))) {
    thunk_FUN_00298cf0(param_1,8);
  }
  uVar4 = FUN_00298c60(param_1,0x20);
  if ((uint)uVar4 - 0x101 < 0xaf) {
    FUN_0029b050(param_1);
    uVar1 = FUN_00298b78(param_1,5);
    *(undefined4 *)(iVar5 + 0x1c4) = uVar1;
    lVar3 = FUN_00298b78(param_1,1);
    if (lVar3 != 0) {
      FUN_00298b78(param_1,1);
      thunk_FUN_00298cf0(param_1,7);
      while (lVar3 = FUN_00298b78(param_1,1), lVar3 != 0) {
        thunk_FUN_00298cf0(param_1,8);
      }
    }
    iVar2 = FUN_00298718(param_1);
    *param_4 = iVar2;
    if (*(int *)(iVar5 + 300) == 0) {
      uVar1 = 0;
      *param_3 = (((uint)uVar4 & 0xff) - 1) * *(int *)(iVar5 + 0x13c) + iVar2 + -1;
      *param_4 = 1;
      *(undefined4 *)(iVar5 + 0x1c0) = 1;
      param_5[2] = 0;
      param_5[5] = 0;
      param_5[4] = 0;
      param_5[1] = 0;
      *param_5 = 0;
      param_5[7] = 0;
      param_5[6] = 0;
      param_5[3] = 0;
    }
    else {
      FUN_00296468(param_1,0x401a90);
      uVar1 = 1;
    }
  }
  else {
    FUN_002964c0(param_1,0x401a68,uVar4);
    uVar1 = 2;
  }
  return uVar1;
}


// ==== FUN_0029a0e8 @ 0029a0e8 ====

void FUN_0029a0e8(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = param_1[0x10];
  if (*(int *)(iVar1 + 0x858) == 0) {
    *(undefined4 *)(iVar1 + 0x184) = 3;
    *(undefined4 *)(iVar1 + 0x18c) = 1;
    *(undefined4 *)(iVar1 + 0x154) = 5;
    *(undefined4 *)(iVar1 + 0x14c) = 1;
    *(undefined4 *)(iVar1 + 0x150) = 1;
    *(undefined4 *)(iVar1 + 0x198) = 1;
    iVar12 = *(int *)(iVar1 + 0x134);
  }
  else {
    iVar12 = *(int *)(iVar1 + 0x134);
  }
  *(int *)(iVar1 + 0x13c) = iVar12 + 0xf >> 4;
  if (*(int *)(iVar1 + 0x858) == 0) {
    iVar12 = *(int *)(iVar1 + 0x138);
  }
  else {
    iVar12 = *(int *)(iVar1 + 0x138);
    if (*(int *)(iVar1 + 0x14c) == 0) {
      uVar2 = (iVar12 + 0x1f >> 5) << 1;
      goto LAB_0029a180;
    }
  }
  uVar2 = iVar12 + 0xf >> 4;
LAB_0029a180:
  *(uint *)(iVar1 + 0x140) = uVar2;
  iVar13 = uVar2 * 0x10;
  iVar12 = *(int *)(iVar1 + 0x13c) * 0x10;
  if ((iVar12 != *param_1) || (iVar13 != param_1[1])) {
    iVar11 = iVar1 + 0x118;
    *param_1 = iVar12;
    param_1[1] = iVar13;
    uVar10 = iVar12 * uVar2 * 0x1800 >> 8;
    FUN_00294ea8(iVar11);
    uVar3 = FUN_00294eb8(iVar1,iVar11,uVar10,0x40);
    *(undefined4 *)(iVar1 + 0x10c) = uVar3;
    uVar3 = FUN_00294eb8(iVar1,iVar11,uVar10,0x40);
    *(undefined4 *)(iVar1 + 0x110) = uVar3;
    uVar10 = FUN_00294eb8(iVar1,iVar11,uVar10,0x40);
    *(uint *)(iVar1 + 0x114) = uVar10;
    iVar11 = iVar12 >> 4;
    if (*(int *)(iVar1 + 0x87c) == 0) {
      iVar6 = *param_1 * param_1[1];
      uVar7 = *(uint *)(iVar1 + 0x10c) & 0xfffffff | 0x20000000;
      uVar5 = *(uint *)(iVar1 + 0x110) & 0xfffffff | 0x20000000;
      iVar8 = iVar6 + 0x1ff;
      if (-1 < iVar6) {
        iVar8 = iVar6;
      }
      uVar10 = uVar10 & 0xfffffff | 0x20000000;
      *(uint *)(iVar1 + 0x1f8) = uVar7;
      iVar6 = (iVar8 >> 9) * 0x180;
      *(uint *)(iVar1 + 0x260) = uVar5;
      *(uint *)(iVar1 + 0x330) = uVar7;
      *(uint *)(iVar1 + 0x398) = uVar5;
      *(uint *)(iVar1 + 0x2c8) = uVar10;
      *(uint *)(iVar1 + 0x468) = uVar7 + iVar6;
      *(uint *)(iVar1 + 0x4d0) = uVar5 + iVar6;
      *(uint *)(iVar1 + 0x538) = uVar10 + iVar6;
      *(uint *)(iVar1 + 0x400) = uVar10;
    }
    else if (*(int *)(iVar1 + 0x87c) == 1) {
      iVar6 = *(int *)(iVar1 + 0x10c);
      iVar9 = *param_1 * param_1[1];
      iVar8 = *(int *)(iVar1 + 0x110);
      *(int *)(iVar1 + 0x1f8) = iVar6;
      *(int *)(iVar1 + 0x260) = iVar8;
      *(int *)(iVar1 + 0x330) = iVar6;
      iVar4 = iVar9 + 0x1ff;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(iVar1 + 0x398) = iVar8;
      *(uint *)(iVar1 + 0x2c8) = uVar10;
      iVar9 = (iVar4 >> 9) * 0x180;
      *(uint *)(iVar1 + 0x400) = uVar10;
      *(int *)(iVar1 + 0x468) = iVar6 + iVar9;
      *(int *)(iVar1 + 0x4d0) = iVar8 + iVar9;
      *(uint *)(iVar1 + 0x538) = uVar10 + iVar9;
    }
    iVar8 = iVar13 >> 4;
    *(int *)(iVar1 + 0x208) = iVar8;
    *(int *)(iVar1 + 0x1fc) = iVar12;
    iVar6 = iVar13 + ((uVar2 & 0xfffffff) >> 0x1b);
    *(int *)(iVar1 + 0x200) = iVar13;
    iVar9 = iVar6 >> 5;
    *(int *)(iVar1 + 0x204) = iVar11;
    iVar6 = iVar6 >> 1;
    *(int *)(iVar1 + 0x270) = iVar8;
    *(int *)(iVar1 + 0x264) = iVar12;
    *(int *)(iVar1 + 0x268) = iVar13;
    *(int *)(iVar1 + 0x26c) = iVar11;
    *(int *)(iVar1 + 0x2d8) = iVar8;
    *(int *)(iVar1 + 0x2cc) = iVar12;
    *(int *)(iVar1 + 0x2d0) = iVar13;
    *(int *)(iVar1 + 0x2d4) = iVar11;
    *(int *)(iVar1 + 0x340) = iVar9;
    *(int *)(iVar1 + 0x334) = iVar12;
    *(int *)(iVar1 + 0x338) = iVar6;
    *(int *)(iVar1 + 0x33c) = iVar11;
    *(int *)(iVar1 + 0x3a8) = iVar9;
    *(int *)(iVar1 + 0x39c) = iVar12;
    *(int *)(iVar1 + 0x3a0) = iVar6;
    *(int *)(iVar1 + 0x3a4) = iVar11;
    *(int *)(iVar1 + 0x410) = iVar9;
    *(int *)(iVar1 + 0x404) = iVar12;
    *(int *)(iVar1 + 0x408) = iVar6;
    *(int *)(iVar1 + 0x40c) = iVar11;
    *(int *)(iVar1 + 0x478) = iVar9;
    *(int *)(iVar1 + 0x46c) = iVar12;
    *(int *)(iVar1 + 0x470) = iVar6;
    *(int *)(iVar1 + 0x474) = iVar11;
    *(int *)(iVar1 + 0x4e0) = iVar9;
    *(int *)(iVar1 + 0x4d4) = iVar12;
    *(int *)(iVar1 + 0x4d8) = iVar6;
    *(int *)(iVar1 + 0x4dc) = iVar11;
    *(int *)(iVar1 + 0x53c) = iVar12;
    *(int *)(iVar1 + 0x540) = iVar6;
    *(int *)(iVar1 + 0x548) = iVar9;
    *(int *)(iVar1 + 0x544) = iVar11;
  }
  return;
}


// ==== FUN_0029a400 @ 0029a400 ====

/* Strings referenciadas:
     "vertical size > 2800" */

void FUN_0029a400(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 auStack_60 [8];
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0xe8) = 0;
  uVar1 = FUN_00298b78(param_1,0x20);
  uVar2 = uVar1 >> 8 & 0xfff;
  *(uint *)(iVar4 + 0x134) = uVar1 >> 0x14;
  *(uint *)(iVar4 + 0x138) = uVar2;
  if (0xaf0 < uVar2) {
    FUN_00296468(param_1,0x401ab8);
  }
  uVar1 = FUN_00298b78(param_1,0x1e);
  *(uint *)(iVar4 + 0x144) = uVar1 >> 0xc;
  *(uint *)(iVar4 + 0x148) = uVar1 >> 1 & 0x3ff;
  lVar3 = FUN_00298b78(param_1,1);
  *(int *)(iVar4 + 0x850) = (int)lVar3;
  if (lVar3 == 0) {
    auStack_60[0] = 2;
    FUN_00294bf8(*(undefined4 *)(iVar4 + 0x868),auStack_60);
    FUN_0029aeb8(param_1);
    REG_IPU_CMD = 0;
    FUN_0029aeb8(param_1);
    lVar3 = FUN_0036d518();
    REG_DMAC_4_IPU_TO_MADR = 0x3c14c0;
    REG_DMAC_4_IPU_TO_QWC = 4;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    if (lVar3 != 0) {
      FUN_0036d568();
    }
    REG_IPU_CMD = 0x50000000;
    *(undefined4 *)(iVar4 + 0x82c) = 0x50000000;
    *(undefined4 *)(iVar4 + 0x828) = 1;
    FUN_0029aeb8(param_1);
    auStack_60[0] = 3;
    FUN_00294bf8(*(undefined4 *)(iVar4 + 0x868),auStack_60);
  }
  else {
    FUN_0029aeb8(param_1);
    REG_IPU_CMD = 0x50000000;
    *(undefined4 *)(iVar4 + 0x82c) = 0x50000000;
    *(undefined4 *)(iVar4 + 0x828) = 1;
    FUN_0029aeb8(param_1);
  }
  lVar3 = FUN_00298b78(param_1,1);
  *(int *)(iVar4 + 0x854) = (int)lVar3;
  if (lVar3 == 0) {
    auStack_60[0] = 2;
    FUN_00294bf8(*(undefined4 *)(iVar4 + 0x868),auStack_60);
    FUN_0029aeb8(param_1);
    REG_IPU_CMD = 0;
    FUN_0029aeb8(param_1);
    lVar3 = FUN_0036d518();
    REG_DMAC_4_IPU_TO_MADR = 0x3c1500;
    REG_DMAC_4_IPU_TO_QWC = 4;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    if (lVar3 != 0) {
      FUN_0036d568();
    }
    REG_IPU_CMD = 0x58000000;
    *(undefined4 *)(iVar4 + 0x82c) = 0x50000000;
    *(undefined4 *)(iVar4 + 0x828) = 1;
    FUN_0029aeb8(param_1);
    auStack_60[0] = 3;
    FUN_00294bf8(*(undefined4 *)(iVar4 + 0x868),auStack_60);
  }
  else {
    FUN_0029aeb8(param_1);
    REG_IPU_CMD = 0x58000000;
    *(undefined4 *)(iVar4 + 0x82c) = 0x50000000;
    *(undefined4 *)(iVar4 + 0x828) = 1;
    FUN_0029aeb8(param_1);
  }
  FUN_0029ace8(param_1);
  FUN_0029a0e8(*(undefined4 *)(iVar4 + 0x868));
  return;
}


// ==== FUN_0029a6b0 @ 0029a6b0 ====

void FUN_0029a6b0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  *(undefined4 *)(iVar2 + 0x864) = 1;
  *(int *)(iVar2 + 0x85c) = *(int *)(iVar2 + 0x860) + 1;
  FUN_00298b78(param_1,1);
  FUN_00298b78(param_1,5);
  FUN_00298b78(param_1,6);
  FUN_00298b78(param_1,1);
  FUN_00298b78(param_1,6);
  FUN_00298b78(param_1,6);
  uVar1 = FUN_00298b78(param_1,1);
  *(undefined4 *)(iVar2 + 0x1b4) = uVar1;
  uVar1 = FUN_00298b78(param_1,1);
  *(undefined4 *)(iVar2 + 0x1b8) = uVar1;
  FUN_0029ace8(param_1);
  return;
}


// ==== FUN_0029a750 @ 0029a750 ====

void FUN_0029a750(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = FUN_00298b78(param_1,10);
  uVar2 = FUN_00298b78(param_1,3);
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 0x160) = uVar2;
  FUN_00298b78(param_1,0x10);
  iVar5 = *(int *)(iVar6 + 0x160);
  if (iVar5 - 2U < 2) {
    uVar2 = FUN_00298b78(param_1,1);
    *(undefined4 *)(iVar6 + 0x164) = uVar2;
    uVar2 = FUN_00298b78(param_1,3);
    *(undefined4 *)(iVar6 + 0x168) = uVar2;
    iVar5 = *(int *)(iVar6 + 0x160);
  }
  if (iVar5 == 3) {
    uVar2 = FUN_00298b78(param_1,1);
    *(undefined4 *)(iVar6 + 0x16c) = uVar2;
    uVar2 = FUN_00298b78(param_1,3);
    *(undefined4 *)(iVar6 + 0x170) = uVar2;
  }
  while (lVar4 = FUN_00298b78(param_1,1), lVar4 != 0) {
    thunk_FUN_00298cf0(param_1,8);
  }
  FUN_0029ace8(param_1);
  bVar1 = false;
  lVar4 = 0;
  if (*(int *)(iVar6 + 0x160) == 3) {
LAB_0029a848:
    iVar5 = *(int *)(iVar6 + 0x85c);
  }
  else {
    if (lVar3 != 0) {
      lVar4 = lVar3;
      if (lVar3 < 0) {
        bVar1 = *(int *)(iVar6 + 0x864) == 0;
        *(undefined4 *)(iVar6 + 0x864) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x864) = 0;
      }
      goto LAB_0029a848;
    }
    iVar5 = *(int *)(iVar6 + 0x85c);
  }
  iVar5 = iVar5 + (int)lVar3;
  *(int *)(iVar6 + 0x1bc) = iVar5;
  if (bVar1) {
    if (lVar4 < lVar3) {
      iVar5 = *(int *)(iVar6 + 0x860);
      goto LAB_0029a870;
    }
    *(int *)(iVar6 + 0x1bc) = iVar5 + 0x400;
  }
  iVar5 = *(int *)(iVar6 + 0x860);
LAB_0029a870:
  if (iVar5 < *(int *)(iVar6 + 0x1bc)) {
    iVar5 = *(int *)(iVar6 + 0x1bc);
  }
  *(int *)(iVar6 + 0x860) = iVar5;
  return;
}


// ==== FUN_0029a898 @ 0029a898 ====

/* Strings referenciadas:
     "_chroma_format needs to be 1: 420"
     "Unsupported profile/level" */

void FUN_0029a898(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x858) = 1;
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xff7fffff;
  uVar1 = FUN_00298b78(param_1,0x1c);
  uVar2 = uVar1 >> 0x11 & 3;
  *(uint *)(iVar4 + 0x150) = uVar2;
  if (uVar2 != 1) {
    FUN_00296468(param_1,0x401ad0);
  }
  *(uint *)(iVar4 + 0x14c) = uVar1 >> 0x13 & 1;
  uVar3 = uVar1 >> 0x14;
  uVar2 = FUN_00298b78(param_1,0x10);
  if (((uVar3 != 0x48) && (uVar3 != 0x58)) && (uVar3 != 0x44)) {
    FUN_00296468(param_1,0x401af8);
  }
  *(uint *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + (uVar2 >> 8) * 0x400;
  *(uint *)(iVar4 + 0x134) = (uVar1 >> 0xf & 3) << 0xc | *(uint *)(iVar4 + 0x134) & 0xfff;
  *(uint *)(iVar4 + 0x138) = (uVar1 >> 0xd & 3) << 0xc | *(uint *)(iVar4 + 0x138) & 0xfff;
  *(uint *)(iVar4 + 0x144) = *(int *)(iVar4 + 0x144) + (uVar1 >> 1 & 0xfff) * 0x40000;
  return;
}


// ==== FUN_0029a9d8 @ 0029a9d8 ====

/* Strings referenciadas:
     "load_chroma_intra_quantizer_matrix == 1"
     "load_chroma_non_intra_quantizer_matrix == 1" */

void FUN_0029a9d8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_00298b78(param_1,1);
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0x850) = (int)lVar1;
  if (lVar1 != 0) {
    FUN_0029aeb8(param_1);
    REG_IPU_CMD = 0x50000000;
    *(undefined4 *)(iVar2 + 0x82c) = 0x50000000;
    *(undefined4 *)(iVar2 + 0x828) = 1;
    FUN_0029aeb8(param_1);
  }
  lVar1 = FUN_00298b78(param_1,1);
  *(int *)(iVar2 + 0x854) = (int)lVar1;
  if (lVar1 != 0) {
    FUN_0029aeb8(param_1);
    REG_IPU_CMD = 0x58000000;
    *(undefined4 *)(iVar2 + 0x82c) = 0x50000000;
    *(undefined4 *)(iVar2 + 0x828) = 1;
    FUN_0029aeb8(param_1);
  }
  lVar1 = FUN_00298b78(param_1,1);
  if (lVar1 != 0) {
    FUN_00296468(param_1,0x401b18);
  }
  lVar1 = FUN_00298b78(param_1,1);
  if (lVar1 != 0) {
    FUN_00296468(param_1,0x401b40);
    return;
  }
  return;
}


// ==== FUN_0029ace8 @ 0029ace8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0029ace8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uStack_90 = _PTR_LAB_00401c28;
  uStack_88 = _PTR_FUN_00401c30;
  uStack_80 = _PTR_FUN_00401c38;
  uStack_78 = _PTR_LAB_00401c40;
  uStack_70 = _PTR_LAB_00401c48;
  puStack_68 = PTR_LAB_00401c50;
  FUN_0029b058();
  while( true ) {
    lVar1 = FUN_00298c60(param_1,0x18);
    iVar3 = (int)param_1;
    if ((lVar1 == 1) || (*(int *)(iVar3 + 0x878) != 0)) break;
    thunk_FUN_00298cf0(param_1,8);
  }
  while( true ) {
    while (lVar1 = FUN_00298c60(param_1,0x20), lVar1 == 0x1b5) {
      FUN_0029b050(param_1);
      uVar2 = FUN_00298b78(param_1,4);
      if (10 < uVar2) {
        uVar2 = 0;
      }
      (**(code **)((int)&uStack_90 + (int)uVar2 * 4))(param_1);
      FUN_0029b058(param_1);
      while ((lVar1 = FUN_00298c60(param_1,0x18), lVar1 != 1 && (*(int *)(iVar3 + 0x878) == 0))) {
        thunk_FUN_00298cf0(param_1,8);
      }
    }
    if (lVar1 != 0x1b2) break;
    FUN_0029b050(param_1);
    FUN_0029b058(param_1);
    while ((lVar1 = FUN_00298c60(param_1,0x18), lVar1 != 1 && (*(int *)(iVar3 + 0x878) == 0))) {
      thunk_FUN_00298cf0(param_1,8);
    }
  }
  return;
}


// ==== FUN_0029aeb8 @ 0029aeb8 ====

void FUN_0029aeb8(void)

{
  uint uVar1;
  
  uVar1 = REG_IPU_CTRL;
  if ((uVar1 & 0x80004000) == 0x80000000) {
    FUN_00298890();
    return;
  }
  return;
}


// ==== FUN_0029aef8 @ 0029aef8 ====

undefined4 FUN_0029aef8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x878);
  while( true ) {
    while( true ) {
      while( true ) {
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        FUN_0029b058(param_1);
        while ((lVar2 = FUN_00298c60(param_1,0x18), lVar2 != 1 && (*(int *)(iVar4 + 0x878) == 0))) {
          thunk_FUN_00298cf0(param_1,8);
        }
        uVar3 = FUN_00298b78(param_1,0x20);
        if (uVar3 != 0x1b3) break;
        FUN_0029a400(param_1);
        iVar1 = *(int *)(iVar4 + 0x878);
      }
      if (uVar3 < 0x1b4) break;
      if (uVar3 == 0x1b7) {
        return 0;
      }
      if (uVar3 == 0x1b8) {
        FUN_0029a6b0(param_1);
        iVar1 = *(int *)(iVar4 + 0x878);
      }
      else {
        iVar1 = *(int *)(iVar4 + 0x878);
      }
    }
    if (uVar3 == 0x100) break;
    iVar1 = *(int *)(iVar4 + 0x878);
  }
  FUN_0029a750(param_1);
  auStack_b0[0] = 5;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  FUN_00294bf8(*(undefined4 *)(iVar4 + 0x868),auStack_b0);
  *(undefined8 *)(iVar4 + 0x840) = uStack_a0;
  *(undefined8 *)(iVar4 + 0x838) = uStack_a8;
  return *(undefined4 *)(iVar4 + 0x160);
}


// ==== FUN_0029b050 @ 0029b050 ====

void FUN_0029b050(undefined8 param_1)

{
  thunk_FUN_00298cf0(param_1,0x20);
  return;
}


// ==== FUN_0029b058 @ 0029b058 ====

void FUN_0029b058(undefined8 param_1)

{
  uint uVar1;
  
  FUN_0029aeb8();
  uVar1 = REG_IPU_BP;
  if ((-(uVar1 & 7) & 7) != 0) {
    thunk_FUN_00298cf0(param_1);
    return;
  }
  return;
}


// ==== FUN_0029b0a8 @ 0029b0a8 ====

void FUN_0029b0a8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00298b78(param_1,3);
  lVar1 = FUN_00298b78(param_1,1);
  iVar3 = (int)param_1;
  if (lVar1 != 0) {
    FUN_00298b78(param_1,8);
    FUN_00298b78(param_1,8);
    uVar2 = FUN_00298b78(param_1,8);
    *(undefined4 *)(iVar3 + 0x154) = uVar2;
  }
  uVar2 = FUN_00298b78(param_1,0xe);
  *(undefined4 *)(iVar3 + 0x158) = uVar2;
  FUN_00298b78(param_1,1);
  uVar2 = FUN_00298b78(param_1,0xe);
  *(undefined4 *)(iVar3 + 0x15c) = uVar2;
  return;
}


// ==== FUN_0029b138 @ 0029b138 ====

void FUN_0029b138(undefined8 param_1)

{
  FUN_00298b78(param_1,1);
  FUN_00298b78(param_1,8);
  FUN_00298b78(param_1,1);
  FUN_00298b78(param_1,7);
  FUN_00298b78(param_1,1);
  FUN_00298b78(param_1,0x14);
  FUN_00298b78(param_1,1);
  FUN_00298b78(param_1,0x16);
  FUN_00298b78(param_1,1);
  FUN_00298b78(param_1,0x16);
  return;
}


// ==== FUN_0029b1d0 @ 0029b1d0 ====

void FUN_0029b1d0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x14c) == 0) {
    if (*(int *)(iVar3 + 0x184) == 3) {
      iVar5 = 2;
      if (*(int *)(iVar3 + 0x194) != 0) {
        iVar5 = 3;
      }
      goto LAB_0029b238;
    }
  }
  else if (*(int *)(iVar3 + 0x194) != 0) {
    iVar5 = 2;
    if (*(int *)(iVar3 + 0x188) != 0) {
      iVar5 = 3;
    }
    goto LAB_0029b238;
  }
  iVar5 = 1;
LAB_0029b238:
  iVar4 = 0;
  if (iVar5 != 0) {
    do {
      uVar1 = FUN_00298b78(param_1,0x10);
      iVar2 = iVar4 * 4;
      *(undefined4 *)(iVar3 + 0x19c + iVar2) = uVar1;
      FUN_00298b78(param_1,1);
      iVar4 = iVar4 + 1;
      uVar1 = FUN_00298b78(param_1,0x10);
      *(undefined4 *)(iVar3 + 0x1a8 + iVar2) = uVar1;
      FUN_00298b78(param_1,1);
    } while (iVar4 < iVar5);
  }
  return;
}


// ==== FUN_0029b2c8 @ 0029b2c8 ====

uint FUN_0029b2c8(void)

{
  ulong uVar1;
  short *psVar2;
  uint uVar3;
  long lVar4;
  
  psVar2 = (short *)FUN_0029b4f0();
  if (*(int *)(psVar2 + 4) == 0) {
    FUN_00367cf0();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar1 = REG_GS_CSR;
      uVar3 = (uint)(uVar1 >> 0xd) & 1;
    }
  }
  else {
    lVar4 = FUN_00367d80();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar3 = (uint)(lVar4 >> 0xd) & 1;
    }
  }
  return uVar3;
}


// ==== FUN_0029b360 @ 0029b360 ====

void FUN_0029b360(short param_1,ushort param_2,ushort param_3,ushort param_4)

{
  undefined8 uVar1;
  ushort *puVar2;
  
  if (param_1 == 1) {
    REG_GS_CSR = 0x100;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      puVar2 = (ushort *)FUN_0029b4f0();
      REG_GS_CSR = 0x200;
      *puVar2 = param_2;
      uVar1 = REG_GS_CSR;
      puVar2[1] = param_3;
      puVar2[3] = (ushort)((ulong)uVar1 >> 0x10) & 0xff;
      GsPutIMR(0xff00);
      puVar2[2] = (ushort)(param_4 != 0);
      if (*(int *)(puVar2 + 4) != 0) {
        FUN_00368268(2);
        RemoveIntcHandler(2,*(undefined4 *)(puVar2 + 6));
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
      }
      SetGsCrt(param_2 & 1,param_3 & 0xff,param_4 & 1);
      return;
    }
  }
  else if (param_1 == 5) {
    puVar2 = (ushort *)FUN_0029b4f0();
    uVar1 = REG_GS_CSR;
    puVar2[2] = (ushort)(param_4 != 0);
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[3] = (ushort)((ulong)uVar1 >> 0x10) & 0xff;
    SetGsCrt(param_2 & 1,param_3 & 0xff,param_4 & 1);
    return;
  }
  return;
}


// ==== FUN_0029b4f0 @ 0029b4f0 ====

undefined * FUN_0029b4f0(void)

{
  return &DAT_003c1550;
}


// ==== FUN_0029b500 @ 0029b500 ====

undefined4 FUN_0029b500(void)

{
  FUN_0036b100(0x4438c0,0xffffffff80001363,0,0x4439c0,0x90,0x4439c0,0x90,0);
  return DAT_004439c0;
}


// ==== FUN_0029b558 @ 0029b558 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "libdbc: bind failed "
     "libdbc: Module version mismatch "
     "[libdbc.a = %d.%02x, dbcman.irx = %d.%02x] "
     "sceDbc_sema"
     "libdbc: SifDmaAddr %08x " */

undefined4 FUN_0029b558(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  char *pcStack_ac;
  
  if (ram0x003c1570 == 1) {
    return 1;
  }
  DAT_00445d80 = 0;
  FUN_0036a8d8(0);
  while (lVar4 = FUN_0036af20(0x4438c0,0xffffffff80001300,0), -1 < lVar4) {
    iVar6 = 0x10000;
    if (DAT_004438e4 != 0) {
      uVar1 = FUN_0029b500();
      if ((int)uVar1 >> 4 != 0x31) {
        FUN_0036a038(0x401c70);
        FUN_0036a038(0x401c98,3,0x10,(int)uVar1 >> 8,uVar1 & 0xff);
        return 0;
      }
      goto LAB_0029b67c;
    }
    do {
      iVar6 = iVar6 + -1;
    } while (iVar6 != -1);
  }
LAB_0029b760:
  FUN_0029c110(0x401c58);
  return 0;
LAB_0029b67c:
  lVar4 = FUN_0036af20(0x443910,0xffffffff8000131c,0);
  if (lVar4 < 0) goto LAB_0029b760;
  if (DAT_00443934 != 0) {
    iVar6 = 0;
    piVar8 = &DAT_0044395c;
    iVar7 = 0;
    while (lVar4 = FUN_0036af20(iVar7 + 0x443938,iVar6 + -0x7fffece2,0), -1 < lVar4) {
      iVar5 = 0x10000;
      if (*piVar8 == 0) {
        do {
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
      else {
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 10;
        iVar7 = iVar7 + 0x28;
        if (1 < iVar6) {
          uStack_b8 = 1;
          uStack_bc = 0x7f;
          pcStack_ac = "sceDbc_sema";
          lVar4 = CreateSema(auStack_c0);
          DAT_00445d80 = (undefined4)lVar4;
          if (lVar4 < 0) {
            uVar3 = 0;
          }
          else {
            iVar6 = 0xf;
            puVar2 = (undefined4 *)&DAT_00445d7c;
            do {
              *puVar2 = 0;
              iVar6 = iVar6 + -1;
              puVar2 = puVar2 + -1;
            } while (-1 < iVar6);
            FUN_0029c110(0x401cd8,0x445cc0);
            FUN_0029b7f8(0x445cc0);
            uVar3 = 1;
            ram0x003c1570 = 1;
          }
          return uVar3;
        }
      }
    }
    goto LAB_0029b760;
  }
  iVar6 = 0x10000;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  goto LAB_0029b67c;
}


// ==== FUN_0029b7f8 @ 0029b7f8 ====

/* Strings referenciadas:
     "sceDbcSetWorkAddr: rpc error " */

undefined4 FUN_0029b7f8(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  DAT_004439c4 = param_1;
  lVar2 = FUN_0036b100(0x4438c0,0xffffffff80001304,0,0x4439c0,0x90,0x4439c0,0x90,0);
  uVar1 = DAT_004439c0;
  if (lVar2 < 0) {
    FUN_0029c110(0x401cf8);
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0029b868 @ 0029b868 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "sceDbcCreateSocket: rpc error " */

undefined4 FUN_0029b868(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  
  if (ram0x003c1570 == 0) {
    uVar2 = 0;
  }
  else {
    WaitSema(DAT_00445d80);
    DAT_004439c0 = *param_1;
    iVar5 = 0;
    DAT_004439c4 = param_1[1];
    DAT_004439c8 = param_1[2];
    DAT_004439cc = param_1[3];
    DAT_004439d0 = param_1[4];
    DAT_004439e8 = param_2;
    DAT_004439ec = param_3;
    do {
      iVar1 = iVar5 + 0x14;
      puVar4 = &DAT_004439d4 + iVar5;
      iVar5 = iVar5 + 1;
      *puVar4 = *(undefined1 *)((int)param_1 + iVar1);
    } while (iVar5 < 0x10);
    lVar3 = FUN_0036b100(0x4438c0,0xffffffff80001301,0,0x4439c0,0x90,0x4439c0,0x90,0);
    uVar2 = DAT_004439e4;
    if (lVar3 < 0) {
      FUN_0029c110(0x401d18);
      SignalSema(DAT_00445d80);
      uVar2 = 0;
    }
    else {
      SignalSema(DAT_00445d80);
    }
  }
  return uVar2;
}


// ==== FUN_0029b998 @ 0029b998 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "sceDbcDeleteSocket: rpc error " */

undefined4 FUN_0029b998(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (ram0x003c1570 == 0) {
    uVar1 = 0;
  }
  else {
    WaitSema(DAT_00445d80);
    DAT_004439c0 = param_1;
    lVar2 = FUN_0036b100(0x4438c0,0xffffffff80001302,0,0x4439c0,0x90,0x4439c0,0x90,0);
    uVar1 = DAT_004439c4;
    if (lVar2 < 0) {
      FUN_0029c110(0x401d38);
      SignalSema(DAT_00445d80);
      uVar1 = 0;
    }
    else {
      SignalSema(DAT_00445d80);
    }
  }
  return uVar1;
}


// ==== FUN_0029ba58 @ 0029ba58 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "sceDbcGetDepNumber: rpc error " */

undefined4 FUN_0029ba58(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_003680a0(0x445cc0,0x445d40);
  FUN_0036d518();
  DAT_00445d40 = DAT_00445cc0;
  DAT_00445d48 = DAT_00445cc8;
  DAT_00445d50 = DAT_00445cd0;
  DAT_00445d58 = DAT_00445cd8;
  DAT_00445d60 = DAT_00445ce0;
  DAT_00445d68 = DAT_00445ce8;
  DAT_00445d70 = DAT_00445cf0;
  _DAT_00445d78 = DAT_00445cf8;
  FUN_0036d568();
  uVar1 = 0xfffffff4;
  if (*(int *)((int)&DAT_00445d40 + param_1 * 4) == 1) {
    WaitSema(DAT_00445d80);
    DAT_004439c0 = param_1;
    lVar2 = FUN_0036b100(0x4438c0,0xffffffff80001303,0,0x4439c0,0x90,0x4439c0,0x90,0);
    uVar1 = DAT_004439c4;
    if (lVar2 < 0) {
      FUN_0029c110(0x401d58);
      SignalSema(DAT_00445d80);
      uVar1 = 0;
    }
    else {
      SignalSema(DAT_00445d80);
    }
  }
  return uVar1;
}


// ==== FUN_0029bbc8 @ 0029bbc8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0029bbc8(int param_1)

{
  undefined4 uVar1;
  
  FUN_003680a0(0x445cc0,0x445d40);
  FUN_0036d518();
  DAT_00445d40 = DAT_00445cc0;
  DAT_00445d48 = DAT_00445cc8;
  DAT_00445d50 = DAT_00445cd0;
  DAT_00445d58 = DAT_00445cd8;
  DAT_00445d60 = DAT_00445ce0;
  DAT_00445d68 = DAT_00445ce8;
  DAT_00445d70 = DAT_00445cf0;
  _DAT_00445d78 = DAT_00445cf8;
  FUN_0036d568();
  uVar1 = 3;
  if (*(int *)((int)&DAT_00445d40 + param_1 * 4) == 1) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_0029bce0 @ 0029bce0 ====

/* Strings referenciadas:
     "libdbc: SendData2 data length too long [%d] "
     "dbcman : SendData2 BUSY "
     "sceDbcSendData2: rpc error " */

undefined4 FUN_0029bce0(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_3 < 0x81) {
    WaitSema(DAT_00445d80);
    DAT_003c1574 = DAT_003c1574 + 1;
    if (1 < DAT_003c1574) {
      DAT_003c1574 = 0;
    }
    iVar1 = DAT_003c1574 * 0xc0;
    *(undefined4 *)(&DAT_00445b40 + iVar1) = param_1;
    *(undefined4 *)(&DAT_00445b44 + iVar1) = param_2;
    *(int *)(&DAT_00445b48 + iVar1) = *param_3;
    iVar6 = 0;
    if (0 < *param_3) {
      puVar2 = param_4;
      do {
        puVar4 = (undefined1 *)(iVar1 + 0x445b4c + iVar6);
        iVar6 = iVar6 + 1;
        *puVar4 = *puVar2;
        puVar2 = param_4 + iVar6;
      } while (iVar6 < *param_3);
    }
    lVar3 = FUN_0036b300(DAT_003c1574 * 0x28 + 0x443938);
    if (lVar3 == 1) {
      pcVar5 = "dbcman : SendData2 BUSY\n";
    }
    else {
      lVar3 = FUN_0036b100(DAT_003c1574 * 0x28 + 0x443938,DAT_003c1574,1,
                           &DAT_00445b40 + DAT_003c1574 * 0xc0,0x90,
                           &DAT_00445b40 + DAT_003c1574 * 0xc0,0x90,0);
      if (-1 < lVar3) {
        SignalSema(DAT_00445d80);
        return 1;
      }
      pcVar5 = "sceDbcSendData2: rpc error\n";
    }
    FUN_0029c110(pcVar5);
    SignalSema(DAT_00445d80);
  }
  else {
    FUN_0029c110(0x401e20,*param_3);
  }
  return 0;
}


// ==== FUN_0029be90 @ 0029be90 ====

/* Strings referenciadas:
     "libdbc: SendData3 data length too long [%d] "
     "dbcman : SendData3 BUSY " */

undefined4
FUN_0029be90(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4,
            undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  
  if (*param_3 < 0x2081) {
    WaitSema(DAT_00445d80);
    lVar2 = FUN_0036b300(0x443910);
    if (lVar2 == 1) {
      FUN_0029c110(0x401ec0);
    }
    else {
      DAT_00443a88 = *param_3;
      iVar4 = 0;
      puVar1 = param_4;
      DAT_00443a80 = param_1;
      DAT_00443a84 = param_2;
      if (0 < *param_3) {
        do {
          puVar3 = &DAT_00443a8c + iVar4;
          iVar4 = iVar4 + 1;
          *puVar3 = *puVar1;
          puVar1 = param_4 + iVar4;
        } while (iVar4 < *param_3);
      }
      lVar2 = FUN_0036b100(0x443910,0xffffffff8000131c,1,0x443a80,0x2090,0x443a80,0x2090,param_5);
      if (-1 < lVar2) {
        SignalSema(DAT_00445d80);
        return 1;
      }
    }
    SignalSema(DAT_00445d80);
  }
  else {
    FUN_0029c110(0x401e90,*param_3);
  }
  return 0;
}


// ==== FUN_0029bfe8 @ 0029bfe8 ====

/* Strings referenciadas:
     "sceDbcReceiveData: rpc error " */

int FUN_0029bfe8(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  WaitSema(DAT_00445d80);
  DAT_004439c8 = *param_3;
  DAT_004439c0 = param_1;
  DAT_004439c4 = param_2;
  lVar3 = FUN_0036b100(0x4438c0,0xffffffff8000131a,0,0x4439c0,0x90,0x4439c0,0x90,0);
  if (lVar3 < 0) {
    FUN_0029c110(0x401ee0);
    SignalSema(DAT_00445d80);
    iVar2 = 0;
  }
  else {
    if (-1 < DAT_00443a4c) {
      *param_3 = DAT_004439c8;
      if (0 < DAT_004439c8) {
        puVar1 = &DAT_004439cc;
        iVar2 = 0;
        do {
          iVar4 = iVar2 + 1;
          *(undefined1 *)(param_4 + iVar2) = *(undefined1 *)puVar1;
          puVar1 = (undefined4 *)((int)&DAT_004439cc + iVar2 + 1);
          iVar2 = iVar4;
        } while (iVar4 < DAT_004439c8);
      }
    }
    iVar2 = DAT_00443a4c;
    SignalSema(DAT_00445d80);
  }
  return iVar2;
}


// ==== FUN_0029c110 @ 0029c110 ====

void FUN_0029c110(void)

{
  return;
}


// ==== FUN_0029c138 @ 0029c138 ====

/* Strings referenciadas:
     "libdma: sync timeout " */

void FUN_0029c138(undefined8 param_1)

{
  int iVar1;
  
  if ((*(uint *)param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        FUN_0036a038(0x401f00);
        FUN_0029c628(param_1);
      }
      iVar1 = iVar1 + -1;
    } while ((*(uint *)param_1 & 0x100) != 0);
  }
  return;
}


// ==== FUN_0029c1b0 @ 0029c1b0 ====

uint FUN_0029c1b0(uint param_1)

{
  if (param_1 >> 0x1c == 7) {
    param_1 = param_1 & 0xfffffff | 0x80000000;
  }
  return param_1;
}


// ==== FUN_0029c1d8 @ 0029c1d8 ====

void FUN_0029c1d8(undefined1 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}


// ==== FUN_0029c210 @ 0029c210 ====

undefined * FUN_0029c210(ulong param_1)

{
  if (param_1 < 10) {
    return (&PTR_REG_DMAC_0_VIF0_CHCR_003c1588)[(int)param_1];
  }
  return (undefined *)0x0;
}


// ==== FUN_0029c238 @ 0029c238 ====

uint FUN_0029c238(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_50 [32];
  
  ppuVar4 = &PTR_REG_DMAC_0_VIF0_CHCR_003c1588;
  uVar2 = REG_DMAC_CTRL;
  piVar6 = &DAT_00401f18;
  iVar5 = 9;
  do {
    if (*piVar6 != 0) {
      puVar1 = (undefined4 *)*ppuVar4;
      puVar1[0x20] = 0;
      *puVar1 = 0;
      puVar1[0xc] = 0;
      puVar1[4] = 0;
      puVar1[0x14] = 0;
      puVar1[0x10] = 0;
    }
    ppuVar4 = ppuVar4 + 1;
    iVar5 = iVar5 + -1;
    piVar6 = piVar6 + 1;
  } while (-1 < iVar5);
  REG_DMAC_STAT = 0xff1f;
  uVar3 = REG_DMAC_STAT;
  REG_DMAC_STAT = uVar3 & 0xff1f0000;
  FUN_0029c1d8(auStack_50,0x14);
  FUN_0029c318(auStack_50);
  if (param_1 == 1) {
    uVar3 = REG_DMAC_CTRL;
    REG_DMAC_CTRL = uVar3 | 1;
  }
  return uVar2 & 1;
}


// ==== FUN_0029c318 @ 0029c318 ====

undefined4 FUN_0029c318(byte *param_1)

{
  uint uVar1;
  
  uVar1 = REG_DMAC_CTRL;
  if (9 < *param_1) {
    return 0xffffffff;
  }
  if (9 < param_1[1]) {
    return 0xfffffffe;
  }
  if (9 < param_1[2]) {
    return 0xfffffffd;
  }
  if (6 < param_1[3]) {
    return 0xfffffffc;
  }
  uVar1 = uVar1 & 0xffffffcf | (uint)(byte)(&DAT_00401f40)[*param_1] << 4;
  if (param_1[3] == 0) {
    uVar1 = uVar1 & 0xffffff31 | (uint)(byte)(&DAT_00401f50)[param_1[1]] << 6 |
            (uint)(byte)(&DAT_00401f60)[param_1[2]] << 2;
  }
  else {
    uVar1 = (uVar1 & 0xffffff33 | (uint)(byte)(&DAT_00401f50)[param_1[1]] << 6 |
            (uint)(byte)(&DAT_00401f60)[param_1[2]] << 2) & 0xfffffcff | 2 |
            (param_1[3] - 1) * 0x100;
  }
  REG_DMAC_CTRL = uVar1;
  REG_DMAC_PCR = CONCAT22(*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6));
  REG_DMAC_SQWC = *(undefined4 *)(param_1 + 8);
  REG_DMAC_RBOR = *(undefined4 *)(param_1 + 0xc);
  REG_DMAC_RBSR = *(undefined4 *)(param_1 + 0x10);
  DAT_00445d88 = *(undefined8 *)param_1;
  DAT_00445d90 = *(undefined8 *)(param_1 + 8);
  DAT_00445d98 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}


// ==== FUN_0029c4f8 @ 0029c4f8 ====

void FUN_0029c4f8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = FUN_0029c1b0(param_2);
  FUN_0029c138(param_1);
  puVar2 = (uint *)param_1;
  if (puVar2[0xc] != 0xffffffff) {
    puVar2[0xc] = uVar1;
  }
  puVar2[8] = 0;
  *puVar2 = *puVar2 & 0xfffffff3 | 0x105;
  return;
}


// ==== FUN_0029c560 @ 0029c560 ====

void FUN_0029c560(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = FUN_0029c1b0(param_2);
  FUN_0029c138(param_1);
  puVar2 = (uint *)param_1;
  if (puVar2[4] != 0xffffffff) {
    puVar2[4] = uVar1;
  }
  puVar2[8] = param_3;
  *puVar2 = *puVar2 & 0xfffffff3 | 0x101;
  return;
}


// ==== FUN_0029c5e8 @ 0029c5e8 ====

uint FUN_0029c5e8(uint *param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = *param_1 >> 8 & 1;
  }
  else {
    FUN_0029c138();
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0029c628 @ 0029c628 ====

uint FUN_0029c628(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = FUN_0036d518();
  uVar3 = REG_DMAC_ENABLER;
  if ((uVar3 & 0x10000) == 0) {
    REG_DMAC_ENABLEW = uVar3 | 0x10000;
  }
  uVar2 = REG_DMAC_CTRL;
  uVar1 = *param_1;
  uVar5 = uVar1 & 0xfffffeff;
  *param_1 = uVar5;
  REG_DMAC_ENABLEW = uVar3;
  if (lVar4 != 0) {
    FUN_0036d568(uVar5,uVar2);
  }
  return uVar1;
}


// ==== FUN_0029c6c8 @ 0029c6c8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0029c6c8(void)

{
  undefined4 *puVar1;
  
  ram0x003c15c0 = 1;
  puVar1 = &DAT_00445da0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 0xcd;
  } while ((int)puVar1 < 0x4490e0);
  return 1;
}


// ==== FUN_0029c708 @ 0029c708 ====

/* Strings referenciadas:
     "libpad2: buffer addr is not 64 byte align. %08x " */

long FUN_0029c708(long param_1,ulong param_2)

{
  long lVar1;
  uint *puVar2;
  uint auStack_70 [5];
  ulong uStack_5c;
  undefined8 uStack_54;
  
  if ((param_2 & 0x3f) == 0) {
    if (param_1 == 0) {
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      auStack_70[4] = 0;
      uStack_5c = uStack_5c & 0xffffffffffffff00;
      auStack_70[0] = 0;
    }
    else {
      puVar2 = (uint *)param_1;
      auStack_70[0] = *puVar2;
      auStack_70[2] = puVar2[1];
      auStack_70[3] = puVar2[2];
      auStack_70[4] = puVar2[3];
      uStack_5c = *(ulong *)(puVar2 + 4);
      uStack_54 = *(undefined8 *)(puVar2 + 6);
    }
    auStack_70[1] = 1;
    auStack_70[0] = auStack_70[0] | 1;
    lVar1 = FUN_0029b868(auStack_70,param_2,(int)param_2 + 0x80);
    if (-1 < lVar1) {
      *(int *)(&DAT_00445db0 + (int)lVar1 * 0x334) = (int)param_2;
      (&DAT_00445da0)[(int)lVar1 * 0xcd] = 1;
      FUN_0029cc30(lVar1);
    }
  }
  else {
    FUN_0036a038(0x401f70);
    lVar1 = -1;
  }
  return lVar1;
}


// ==== FUN_0029c810 @ 0029c810 ====

long FUN_0029c810(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0029b998();
  if (-1 < lVar1) {
    lVar1 = 1;
    (&DAT_00445da0)[param_1 * 0xcd] = 0;
    (&DAT_00445da4)[param_1 * 0xcd] = 0;
    (&DAT_00445dac)[param_1 * 0xcd] = 0;
  }
  return lVar1;
}


// ==== FUN_0029c868 @ 0029c868 ====

uint FUN_0029c868(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar4;
  int iVar5;
  int iVar3;
  
  iVar5 = (int)param_1;
  uVar2 = 0xffffffff;
  if ((&DAT_00445da0)[iVar5 * 0xcd] != 0) {
    if (((&DAT_00445da4)[iVar5 * 0xcd] == 0) && (lVar4 = FUN_0029cca8(param_1), lVar4 < 0)) {
      return 0xffffffff;
    }
    iVar1 = FUN_0029cd00(param_1);
    if (*(char *)(iVar1 + 2) == '\0') {
      iVar3 = *(int *)(iVar1 + 4);
    }
    else {
      iVar3 = iRamffffffe8;
      if (iVar1 != -0x1c) {
        memcpy(param_2);
        FUN_0029ce30(iVar1 + *(byte *)(iVar1 + 2) + 0x1c,&DAT_00445db4 + iVar5 * 0x334);
        iVar3 = *(int *)(iVar1 + 4);
      }
    }
    if (iVar3 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uint)*(byte *)(iVar1 + 2);
    }
  }
  return uVar2;
}


// ==== FUN_0029c940 @ 0029c940 ====

uint FUN_0029c940(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  FUN_0029ca10();
  if (((&DAT_00445da4)[(int)param_1 * 0xcd] == 0) && (lVar3 = FUN_0029cca8(param_1), lVar3 < 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_0029cd68(param_1);
  if ((*(char *)(iVar1 + 3) != '\0') && (iVar1 != -0x1c)) {
    memcpy(param_2,(uint)*(byte *)(iVar1 + 2) + iVar1 + 0x1c);
    FUN_0029ce30(iVar1 + *(byte *)(iVar1 + 2) + 0x1c,&DAT_00445db4 + (int)param_1 * 0x334);
  }
  if (*(int *)(iVar1 + 4) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)(iVar1 + 3);
  }
  return uVar2;
}


// ==== FUN_0029ca10 @ 0029ca10 ====

undefined1 FUN_0029ca10(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  
  if (((&DAT_00445da4)[(int)param_1 * 0xcd] == 0) && (lVar2 = FUN_0029cca8(param_1), lVar2 < 0)) {
    return 0;
  }
  lVar2 = FUN_0029cdd0(param_1);
  if (lVar2 == 0) {
    lVar2 = FUN_0029bfe8(param_1,0x101800c,(uint)auStack_50 | 4,auStack_50);
    if (-1 < lVar2) {
      return auStack_50[0];
    }
  }
  else {
    puVar1 = (undefined1 *)FUN_0029cd68(param_1);
    if (*(int *)(puVar1 + 4) != 0) {
      return *puVar1;
    }
    lVar2 = FUN_0029cca8(param_1);
    if (-1 < lVar2) {
      return *puVar1;
    }
  }
  (&DAT_00445da4)[(int)param_1 * 0xcd] = 0;
  FUN_0029cc30(param_1);
  return 0;
}


// ==== FUN_0029cb50 @ 0029cb50 ====

uint FUN_0029cb50(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  iVar2 = param_3 * 0x10 + param_1 * 0x334;
  iStack_10 = (int)*(undefined8 *)(&DAT_00445db4 + iVar2);
  iStack_c = (int)((ulong)*(undefined8 *)(&DAT_00445db4 + iVar2) >> 0x20);
  if (iStack_10 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iStack_8 = (int)*(undefined8 *)(&DAT_00445dbc + iVar2);
    uStack_4 = (uint)((ulong)*(undefined8 *)(&DAT_00445dbc + iVar2) >> 0x20);
    if (iStack_c == 1) {
      uVar1 = (uint)(((int)(uint)*(byte *)(param_2 + iStack_8) >> (uStack_4 & 0x1f) & 1U) == 0);
    }
    else {
      uVar1 = 0xffffffff;
      if ((iStack_c == 8) &&
         (uVar1 = (int)(uint)*(byte *)(param_2 + iStack_8) >> (uStack_4 & 0x1f) & 0xff,
         uStack_4 != 0)) {
        uVar1 = uVar1 | (uint)*(byte *)(param_2 + iStack_8 + 1) << (8 - uStack_4 & 0x1f) & 0xff;
      }
    }
  }
  return uVar1;
}


// ==== FUN_0029cc30 @ 0029cc30 ====

void FUN_0029cc30(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 1;
  puVar2 = *(undefined1 **)(&DAT_00445db0 + param_1 * 0x334);
  *puVar2 = 0;
  while( true ) {
    puVar1 = puVar2 + 0x1c;
    *(undefined4 *)(puVar2 + 0x7c) = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    iVar3 = iVar3 + -1;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2 = puVar2 + 0x80;
    memset(puVar1,0xff,0x20);
    if (iVar3 < 0) break;
    *puVar2 = 0;
  }
  return;
}


// ==== FUN_0029cca8 @ 0029cca8 ====

long FUN_0029cca8(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0029ba58();
  if (-1 < lVar1) {
    (&DAT_00445dac)[param_1 * 0xcd] = (int)lVar1;
    (&DAT_00445da4)[param_1 * 0xcd] = 1;
  }
  return lVar1;
}


// ==== FUN_0029cd00 @ 0029cd00 ====

int FUN_0029cd00(int param_1)

{
  int aiStack_20 [4];
  
  aiStack_20[0] = *(int *)(&DAT_00445db0 + param_1 * 0x334);
  aiStack_20[1] = aiStack_20[0] + 0x80;
  FUN_003680a0(aiStack_20[0],aiStack_20[0] + 0xff);
  return aiStack_20[*(int *)(aiStack_20[0] + 0x7c) < *(int *)(aiStack_20[1] + 0x7c)];
}


// ==== FUN_0029cd68 @ 0029cd68 ====

int FUN_0029cd68(int param_1)

{
  int aiStack_20 [4];
  
  aiStack_20[0] = *(int *)(&DAT_00445db0 + param_1 * 0x334);
  aiStack_20[1] = aiStack_20[0] + 0x80;
  FUN_003680a0(aiStack_20[0],aiStack_20[0] + 0x100);
  return aiStack_20[*(int *)(aiStack_20[0] + 0x7c) < *(int *)(aiStack_20[1] + 0x7c)];
}


// ==== FUN_0029cdd0 @ 0029cdd0 ====

undefined4 FUN_0029cdd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0029cd00();
  iVar1 = *(int *)(iVar1 + 0x7c);
  if ((iVar1 == 0) || (iVar1 == (&DAT_00445da8)[param_1 * 0xcd])) {
    uVar2 = 0;
  }
  else {
    (&DAT_00445da8)[param_1 * 0xcd] = iVar1;
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_0029ce30 @ 0029ce30 ====

undefined4 FUN_0029ce30(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (((int)(uint)*param_1 >> (uVar3 & 0x1f) & 1U) == 0) {
      *param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
    else {
      *param_2 = 1;
      param_2[2] = iVar4;
      param_2[3] = uVar2;
      if ((iVar1 - 0x10U < 0x10) || (iVar1 - 0x23U < 4)) {
        param_2[1] = 8;
        iVar4 = iVar4 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        param_2[1] = 1;
        if ((uVar2 & 7) == 0) {
          iVar4 = iVar4 + 1;
          uVar2 = 0;
        }
      }
    }
    uVar3 = uVar3 + 1;
    iVar1 = iVar1 + 1;
    if ((uVar3 & 7) == 0) {
      param_1 = param_1 + 1;
      uVar3 = 0;
    }
    param_2 = param_2 + 4;
  } while (iVar1 < 0x28);
  return 1;
}


// ==== FUN_0029cee8 @ 0029cee8 ====

/* Strings referenciadas:
     "rom0:ROMVER" */

undefined1 * FUN_0029cee8(void)

{
  long lVar1;
  
  if ((DAT_003c15f8 == '\0') && (lVar1 = FUN_0036bd20(0x401fd0,1), -1 < lVar1)) {
    FUN_0036c368(lVar1,0x3c15f8,0xe);
    FUN_0036bfb0(lVar1);
  }
  return &DAT_003c15f8;
}


// ==== FUN_0029cf58 @ 0029cf58 ====

bool FUN_0029cf58(void)

{
  if (DAT_003c15f8 == '\0') {
    FUN_0029cee8();
  }
  return DAT_003c15fc == 'T';
}


// ==== FUN_0029cf98 @ 0029cf98 ====

uint FUN_0029cf98(void)

{
  uint uVar1;
  long lVar2;
  uint auStack_20 [4];
  
  GetOsdConfigParam(auStack_20);
  lVar2 = FUN_0029cf58();
  if (lVar2 == 0) {
    GetOsdConfigParam(auStack_20);
    if ((auStack_20[0] >> 0xd & 7) == 0) {
      uVar1 = auStack_20[0] >> 4 & 1;
    }
    else {
      uVar1 = auStack_20[0] >> 0x10 & 0x1f;
    }
  }
  else {
    uVar1 = (uint)DAT_003c15f4;
  }
  return uVar1;
}


// ==== FUN_0029d000 @ 0029d000 ====

uint FUN_0029d000(void)

{
  uint uVar1;
  long lVar2;
  uint auStack_20 [4];
  
  lVar2 = FUN_0029cf58();
  if (lVar2 == 0) {
    GetOsdConfigParam(auStack_20);
    uVar1 = auStack_20[0] >> 1 & 3;
  }
  else {
    uVar1 = (uint)DAT_003c15f2;
  }
  return uVar1;
}


// ==== FUN_0029d048 @ 0029d048 ====

long FUN_0029d048(void)

{
  long lVar1;
  uint auStack_20 [4];
  
  lVar1 = FUN_0029cf58();
  if (lVar1 == 0) {
    GetOsdConfigParam(auStack_20);
    lVar1 = (long)((int)auStack_20[0] >> 0x15);
    if ((auStack_20[0] >> 0xd & 7) == 0) {
      lVar1 = 0x21c;
    }
  }
  else {
    lVar1 = (long)DAT_003c15f0;
  }
  return lVar1;
}


// ==== FUN_0029d0a0 @ 0029d0a0 ====

byte FUN_0029d0a0(void)

{
  byte bVar1;
  long lVar2;
  uint uStack_20;
  byte bStack_1c;
  
  lVar2 = FUN_0029cf58();
  bVar1 = DAT_003c15f6;
  if (lVar2 == 0) {
    GetOsdConfigParam(&uStack_20);
    if ((uStack_20 >> 0xd & 7) == 0) {
      bVar1 = 0;
    }
    else {
      GetOsdConfigParam2((uint)&uStack_20 | 4,1,1);
      bVar1 = bStack_1c >> 4 & 1;
    }
  }
  return bVar1;
}


// ==== FUN_0029d108 @ 0029d108 ====

/* WARNING: Removing unreachable block (ram,0x0029d118) */

uint FUN_0029d108(uint param_1)

{
  return ((param_1 & 0xff) / 10) * 6 + (param_1 & 0xff) & 0xff;
}


// ==== FUN_0029d138 @ 0029d138 ====

uint FUN_0029d138(uint param_1)

{
  return (param_1 & 0xff) + ((param_1 & 0xff) >> 4) * -6 & 0xff;
}


// ==== FUN_0029d158 @ 0029d158 ====

void FUN_0029d158(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0029d138(*(undefined1 *)(param_1 + 7));
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = FUN_0029d138(*(undefined1 *)(param_1 + 6));
  *(undefined1 *)(param_1 + 6) = uVar1;
  uVar1 = FUN_0029d138(*(undefined1 *)(param_1 + 5));
  *(undefined1 *)(param_1 + 5) = uVar1;
  uVar1 = FUN_0029d138(*(undefined1 *)(param_1 + 3));
  *(undefined1 *)(param_1 + 3) = uVar1;
  uVar1 = FUN_0029d138(*(undefined1 *)(param_1 + 2));
  *(undefined1 *)(param_1 + 2) = uVar1;
  uVar1 = FUN_0029d138(*(undefined1 *)(param_1 + 1));
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ==== FUN_0029d1c0 @ 0029d1c0 ====

void FUN_0029d1c0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0029d108(*(undefined1 *)(param_1 + 7));
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = FUN_0029d108(*(undefined1 *)(param_1 + 6));
  *(undefined1 *)(param_1 + 6) = uVar1;
  uVar1 = FUN_0029d108(*(undefined1 *)(param_1 + 5));
  *(undefined1 *)(param_1 + 5) = uVar1;
  uVar1 = FUN_0029d108(*(undefined1 *)(param_1 + 3));
  *(undefined1 *)(param_1 + 3) = uVar1;
  uVar1 = FUN_0029d108(*(undefined1 *)(param_1 + 2));
  *(undefined1 *)(param_1 + 2) = uVar1;
  uVar1 = FUN_0029d108(*(undefined1 *)(param_1 + 1));
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ==== FUN_0029d228 @ 0029d228 ====

void FUN_0029d228(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cStack_11;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uVar1 = DAT_00401fe0;
  uStack_10 = DAT_00401fe0;
  uStack_8 = DAT_00401fe8;
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  if ((*(byte *)(param_1 + 7) & 3) == 0) {
    uStack_10._2_6_ = (undefined6)((ulong)uVar1 >> 0x10);
    uStack_10._0_2_ = CONCAT11(0x1d,(char)uVar1);
  }
  if ((long)(&cStack_11)[*(byte *)(param_1 + 6)] < (long)(ulong)*(byte *)(param_1 + 5)) {
    *(undefined1 *)(param_1 + 5) = 1;
    cVar2 = *(char *)(param_1 + 6) + '\x01';
    *(char *)(param_1 + 6) = cVar2;
    if (cVar2 == '\r') {
      if (*(char *)(param_1 + 7) == 'c') {
        *(undefined1 *)(param_1 + 7) = 0;
      }
      else {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      }
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}


// ==== FUN_0029d2e0 @ 0029d2e0 ====

void FUN_0029d2e0(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uStack_11;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uVar1 = DAT_00401fe0;
  uStack_10 = DAT_00401fe0;
  uStack_8 = DAT_00401fe8;
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
  if ((*(byte *)(param_1 + 7) & 3) == 0) {
    uStack_10._2_6_ = (undefined6)((ulong)uVar1 >> 0x10);
    uStack_10._0_2_ = CONCAT11(0x1d,(char)uVar1);
  }
  if (*(char *)(param_1 + 5) == '\0') {
    cVar2 = *(char *)(param_1 + 6) + -1;
    *(char *)(param_1 + 6) = cVar2;
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_1 + 7) + -1;
      if (*(char *)(param_1 + 7) == '\0') {
        cVar2 = 'c';
      }
      *(char *)(param_1 + 7) = cVar2;
      *(undefined1 *)(param_1 + 6) = 0xc;
    }
    *(undefined1 *)(param_1 + 5) = (&uStack_11)[*(byte *)(param_1 + 6)];
  }
  return;
}


// ==== FUN_0029d388 @ 0029d388 ====

void FUN_0029d388(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  cVar1 = *(char *)(iVar2 + 3) + '\x01';
  *(char *)(iVar2 + 3) = cVar1;
  if (cVar1 == '\x18') {
    *(undefined1 *)(iVar2 + 3) = 0;
    FUN_0029d228(param_1);
    return;
  }
  return;
}


// ==== FUN_0029d3b8 @ 0029d3b8 ====

void FUN_0029d3b8(int param_1)

{
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined1 *)(param_1 + 3) = 0x17;
    FUN_0029d2e0();
    return;
  }
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + -1;
  return;
}


// ==== FUN_0029d3e0 @ 0029d3e0 ====

void FUN_0029d3e0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  FUN_0029d158();
  iVar1 = (int)param_1;
  param_2 = (uint)*(byte *)(iVar1 + 2) + param_2;
  if (param_2 < 0) {
    do {
      param_2 = param_2 + 0x3c;
      FUN_0029d3b8(param_1);
    } while (param_2 < 0);
    *(char *)(iVar1 + 2) = (char)param_2;
  }
  else if (param_2 < 0x3c) {
    *(char *)(iVar1 + 2) = (char)param_2;
  }
  else {
    do {
      param_2 = param_2 + -0x3c;
      FUN_0029d388(param_1);
    } while (0x3b < param_2);
    *(char *)(iVar1 + 2) = (char)param_2;
  }
  FUN_0029d1c0(param_1);
  return;
}


// ==== FUN_0029d470 @ 0029d470 ====

void FUN_0029d470(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0029d158();
  iVar2 = (int)param_1;
  iVar1 = *(byte *)(iVar2 + 2) - 0x21c;
  if (iVar1 < 0) {
    for (iVar1 = *(byte *)(iVar2 + 2) - 0x1e0; FUN_0029d3b8(param_1), iVar1 < 0;
        iVar1 = iVar1 + 0x3c) {
    }
    *(char *)(iVar2 + 2) = (char)iVar1;
  }
  else if (iVar1 < 0x3c) {
    *(char *)(iVar2 + 2) = (char)iVar1;
  }
  else {
    do {
      iVar1 = iVar1 + -0x3c;
      FUN_0029d388(param_1);
    } while (0x3b < iVar1);
    *(char *)(iVar2 + 2) = (char)iVar1;
  }
  FUN_0029d1c0(param_1);
  return;
}


// ==== FUN_0029d478 @ 0029d478 ====

void FUN_0029d478(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0029d048();
  iVar2 = FUN_0029d0a0();
  FUN_0029d3e0(param_1,iVar1 + iVar2 * 0x3c + -0x21c);
  return;
}


// ==== FUN_0029d4c0 @ 0029d4c0 ====

void FUN_0029d4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong unaff_s4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 auStack_98 [40];
  undefined4 auStack_70 [4];
  
  auStack_70[0] = 0x28;
  iStack_9c = (int)param_4;
  memcpy((uint)&uStack_a0 | 8,param_5,param_4);
  uStack_a0 = (undefined4)param_2;
  memcpy(auStack_98 + (int)param_4,param_3,param_2);
  FUN_0029bce0(param_1,unaff_s4 & 0xffffffff00000000 | 0x103400b,auStack_70,&uStack_a0);
  return;
}


// ==== FUN_0029d5b0 @ 0029d5b0 ====

void FUN_0029d5b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = param_1 >> 0x20 & 0x7fffffff;
  if (uVar2 < 0x3fe921fc) {
    FUN_002a2788(param_1,0,0);
    return;
  }
  lVar1 = param_1;
  if (0x7fefffff < uVar2) goto LAB_0029d690;
  uVar2 = FUN_0029f3d0(param_1,&uStack_20);
  uVar2 = uVar2 & 3;
  if (uVar2 == 1) {
    FUN_002a19d0(uStack_20,uStack_18);
    return;
  }
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      FUN_002a2788(uStack_20,uStack_18,1);
      return;
    }
LAB_0029d680:
    lVar1 = FUN_002a19d0(uStack_20,uStack_18);
  }
  else {
    if (uVar2 != 2) goto LAB_0029d680;
    lVar1 = FUN_002a2788(uStack_20,uStack_18,1);
  }
  param_1 = 0;
LAB_0029d690:
  FUN_00291468(param_1,lVar1);
  return;
}


// ==== FUN_0029d6a8 @ 0029d6a8 ====

float FUN_0029d6a8(float param_1)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (undefined *)((uint)param_1 & 0x7fffffff);
  if ((undefined *)0x507fffff < puVar2) {
    if ((undefined *)0x7f800000 < puVar2) {
      return param_1 + param_1;
    }
    if (0 < (int)param_1) {
      return DAT_00401ffc + DAT_0040200c;
    }
    return -DAT_00401ffc - DAT_0040200c;
  }
  if (puVar2 < (undefined *)0x3ee00000) {
    iVar1 = -1;
    fVar5 = param_1;
    if (puVar2 <= &UNK_30ffffff) {
      if (1.0 < param_1 + 1e+30) {
        return param_1;
      }
      fVar6 = param_1 * param_1;
      goto LAB_0029d860;
    }
  }
  else {
    fVar5 = (float)FUN_0029db10();
    if (puVar2 < (undefined *)0x3f980000) {
      iVar1 = 0;
      if (puVar2 < (undefined *)0x3f300000) {
        fVar5 = ((fVar5 + fVar5) - 1.0) / (fVar5 + 2.0);
        fVar6 = fVar5 * fVar5;
        goto LAB_0029d860;
      }
      fVar5 = (fVar5 - 1.0) / (fVar5 + 1.0);
      iVar1 = 1;
    }
    else {
      iVar1 = 3;
      if (puVar2 < (undefined *)0x401c0000) {
        fVar5 = (fVar5 - 1.5) / (fVar5 * 1.5 + 1.0);
        iVar1 = 2;
      }
      else {
        fVar5 = -1.0 / fVar5;
      }
    }
  }
  fVar6 = fVar5 * fVar5;
LAB_0029d860:
  fVar4 = fVar6 * fVar6;
  fVar3 = fVar4 * (DAT_00402014 +
                  fVar4 * (DAT_0040201c +
                          fVar4 * (DAT_00402024 + fVar4 * (DAT_0040202c + fVar4 * DAT_00402034))));
  fVar6 = fVar6 * (DAT_00402010 +
                  fVar4 * (DAT_00402018 +
                          fVar4 * (DAT_00402020 +
                                  fVar4 * (DAT_00402028 +
                                          fVar4 * (DAT_00402030 + fVar4 * DAT_00402038)))));
  if (iVar1 < 0) {
    fVar5 = fVar5 - fVar5 * (fVar6 + fVar3);
  }
  else {
    fVar5 = *(float *)(&UNK_00401ff0 + iVar1 * 4) -
            ((fVar5 * (fVar6 + fVar3) - *(float *)(&UNK_00402000 + iVar1 * 4)) - fVar5);
    if ((int)param_1 < 0) {
      fVar5 = -fVar5;
    }
  }
  return fVar5;
}


// ==== FUN_0029d950 @ 0029d950 ====

float FUN_0029d950(float param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((int)param_1 >> 0x17 & 0xffU) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (0.0 < param_1 + 1e+30) {
        if ((int)param_1 < 0) {
          param_1 = -0.0;
        }
        else if (param_1 != 0.0) {
          param_1 = 1.0;
        }
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uint)param_1 & uVar2) == 0) {
        return param_1;
      }
      if (0.0 < param_1 + 1e+30) {
        if (0 < (int)param_1) {
          param_1 = (float)((int)param_1 + (0x800000 >> (uVar1 & 0x1f)));
        }
        param_1 = (float)((uint)param_1 & ~uVar2);
      }
    }
    return param_1;
  }
  if (uVar1 != 0x80) {
    return param_1;
  }
  return param_1 + param_1;
}


// ==== FUN_0029da28 @ 0029da28 ====

float FUN_0029da28(float param_1)

{
  ulong uVar1;
  float fVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((uint)ABS(param_1) < 0x3f490fd9) {
    param_1 = (float)FUN_002a2960(param_1,0);
  }
  else if ((uint)ABS(param_1) < 0x7f800000) {
    uVar1 = FUN_002a14b8(&uStack_20);
    uVar1 = uVar1 & 3;
    if (uVar1 == 1) {
      param_1 = (float)FUN_002a3408(uStack_20,uStack_1c,1);
      param_1 = -param_1;
    }
    else {
      if (uVar1 < 2) {
        if (uVar1 == 0) {
          fVar2 = (float)FUN_002a2960(uStack_20,uStack_1c);
          return fVar2;
        }
      }
      else if (uVar1 == 2) {
        fVar2 = (float)FUN_002a2960(uStack_20,uStack_1c);
        return -fVar2;
      }
      param_1 = (float)FUN_002a3408(uStack_20,uStack_1c,1);
    }
  }
  else {
    param_1 = param_1 - param_1;
  }
  return param_1;
}


// ==== FUN_0029db10 @ 0029db10 ====

uint FUN_0029db10(uint param_1)

{
  return param_1 & 0x7fffffff;
}


// ==== FUN_0029db30 @ 0029db30 ====

float FUN_0029db30(float param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((int)param_1 >> 0x17 & 0xffU) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (0.0 < param_1 + 1e+30) {
        if ((int)param_1 < 0) {
          if (ABS(param_1) != 0.0) {
            param_1 = -1.0;
          }
        }
        else {
          param_1 = 0.0;
        }
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uint)param_1 & uVar2) == 0) {
        return param_1;
      }
      if (0.0 < param_1 + 1e+30) {
        if ((int)param_1 < 0) {
          param_1 = (float)((int)param_1 + (0x800000 >> (uVar1 & 0x1f)));
        }
        param_1 = (float)((uint)param_1 & ~uVar2);
      }
    }
    return param_1;
  }
  if (uVar1 != 0x80) {
    return param_1;
  }
  return param_1 + param_1;
}


// ==== FUN_0029dc18 @ 0029dc18 ====

float FUN_0029dc18(float param_1)

{
  ulong uVar1;
  float fVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((uint)ABS(param_1) < 0x3f490fd9) {
    param_1 = (float)FUN_002a3408(param_1,0,0);
  }
  else if ((uint)ABS(param_1) < 0x7f800000) {
    uVar1 = FUN_002a14b8(&uStack_20);
    uVar1 = uVar1 & 3;
    if (uVar1 == 1) {
      param_1 = (float)FUN_002a2960(uStack_20,uStack_1c);
    }
    else {
      if (uVar1 < 2) {
        if (uVar1 == 0) {
          fVar2 = (float)FUN_002a3408(uStack_20,uStack_1c,1);
          return fVar2;
        }
      }
      else if (uVar1 == 2) {
        fVar2 = (float)FUN_002a3408(uStack_20,uStack_1c,1);
        return -fVar2;
      }
      param_1 = (float)FUN_002a2960(uStack_20,uStack_1c);
      param_1 = -param_1;
    }
  }
  else {
    param_1 = param_1 - param_1;
  }
  return param_1;
}


// ==== FUN_0029dd08 @ 0029dd08 ====

float FUN_0029dd08(float param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fStack_20;
  undefined4 uStack_1c;
  
  if ((uint)ABS(param_1) < 0x3f490fdb) {
    uStack_1c = 0;
    iVar2 = 1;
  }
  else {
    if (0x7f7fffff < (uint)ABS(param_1)) {
      return param_1 - param_1;
    }
    uVar1 = FUN_002a14b8(&fStack_20);
    iVar2 = (uVar1 & 1) * -2 + 1;
    param_1 = fStack_20;
  }
  fVar3 = (float)FUN_002a3510(param_1,uStack_1c,iVar2);
  return fVar3;
}


// ==== FUN_0029dd90 @ 0029dd90 ====

/* Strings referenciadas:
     "atan2" */

undefined8 FUN_0029dd90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uStack_90;
  char *pcStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  
  uStack_78 = FUN_0029eca8();
  iVar1 = DAT_00402b40;
  if ((((DAT_00402b40 != -1) && (lVar4 = FUN_002a3dc8(param_2), lVar4 == 0)) &&
      (lVar4 = FUN_002a3dc8(param_1), lVar4 == 0)) &&
     ((lVar4 = FUN_002919f8(param_2,0), lVar4 == 0 && (lVar4 = FUN_002919f8(param_1,0), lVar4 == 0))
     )) {
    uStack_90 = 1;
    pcStack_8c = "atan2";
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_88 = param_1;
    uStack_80 = param_2;
    if ((iVar1 == 2) || (lVar4 = FUN_002a3e00(&uStack_90), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_0035c4a0();
      *puVar2 = 0x21;
    }
    if (iStack_70 != 0) {
      piVar3 = (int *)FUN_0035c4a0();
      *piVar3 = iStack_70;
    }
  }
  return uStack_78;
}


// ==== FUN_0029dea8 @ 0029dea8 ====

undefined8 FUN_0029dea8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uStack_90;
  undefined *puStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  
  uStack_78 = FUN_0029efe0();
  iVar1 = DAT_00402b40;
  if ((((DAT_00402b40 != -1) && (lVar4 = FUN_002a3dc8(param_2), lVar4 == 0)) &&
      (lVar4 = FUN_002a3dc8(param_1), lVar4 == 0)) && (lVar4 = FUN_002919f8(param_2,0), lVar4 == 0))
  {
    uStack_90 = 1;
    puStack_8c = &DAT_00402050;
    iStack_70 = 0;
    uStack_78 = param_1;
    if (iVar1 != 0) {
      uStack_78 = DAT_00402058;
    }
    uStack_88 = param_1;
    uStack_80 = param_2;
    if ((DAT_00402b40 == 2) || (lVar4 = FUN_002a3e00(&uStack_90), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_0035c4a0();
      *puVar2 = 0x21;
    }
    if (iStack_70 != 0) {
      piVar3 = (int *)FUN_0035c4a0();
      *piVar3 = iStack_70;
    }
  }
  return uStack_78;
}


// ==== FUN_0029dfc8 @ 0029dfc8 ====

undefined8 FUN_0029dfc8(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uStack_90;
  undefined *puStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  
  uStack_78 = FUN_0029f8f0();
  iVar1 = DAT_00402b40;
  if (((DAT_00402b40 != -1) && (lVar4 = FUN_002a3dc8(param_1), lVar4 == 0)) &&
     (lVar4 = FUN_002919f8(param_1,0), lVar4 < 0)) {
    uStack_90 = 1;
    puStack_8c = &DAT_00402060;
    iStack_70 = 0;
    if (iVar1 == 0) {
      uStack_78 = 0;
    }
    else {
      uStack_78 = DAT_00402068;
    }
    uStack_88 = param_1;
    uStack_80 = param_1;
    if ((DAT_00402b40 == 2) || (lVar4 = FUN_002a3e00(&uStack_90), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_0035c4a0();
      *puVar2 = 0x21;
    }
    if (iStack_70 != 0) {
      piVar3 = (int *)FUN_0035c4a0();
      *piVar3 = iStack_70;
    }
  }
  return uStack_78;
}


// ==== FUN_0029e0d8 @ 0029e0d8 ====

/* Strings referenciadas:
     "acosf" */

undefined4 FUN_0029e0d8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uStack_60;
  char *pcStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  
  uVar5 = FUN_0029fbf8();
  iVar1 = DAT_00402b40;
  if (((DAT_00402b40 != -1) && (lVar4 = FUN_002a4208(param_1), lVar4 == 0)) &&
     (fVar6 = (float)FUN_0029db10(param_1), 1.0 < fVar6)) {
    uStack_60 = 1;
    pcStack_5c = "acosf";
    iStack_40 = 0;
    uStack_58 = FUN_00291f58(param_1);
    uStack_48 = 0;
    uStack_50 = uStack_58;
    if ((iVar1 == 2) || (lVar4 = FUN_002a3e00(&uStack_60), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_0035c4a0();
      *puVar2 = 0x21;
    }
    if (iStack_40 != 0) {
      piVar3 = (int *)FUN_0035c4a0();
      *piVar3 = iStack_40;
    }
    uVar5 = FUN_00291c68(uStack_48);
  }
  return uVar5;
}


// ==== FUN_0029e1d8 @ 0029e1d8 ====

/* Strings referenciadas:
     "asinf" */

undefined4 FUN_0029e1d8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uStack_60;
  char *pcStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  
  uVar5 = FUN_002a0028();
  iVar1 = DAT_00402b40;
  if (((DAT_00402b40 != -1) && (lVar4 = FUN_002a4208(param_1), lVar4 == 0)) &&
     (fVar6 = (float)FUN_0029db10(param_1), 1.0 < fVar6)) {
    uStack_60 = 1;
    pcStack_5c = "asinf";
    iStack_40 = 0;
    uStack_58 = FUN_00291f58(param_1);
    uStack_48 = 0;
    uStack_50 = uStack_58;
    if ((iVar1 == 2) || (lVar4 = FUN_002a3e00(&uStack_60), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_0035c4a0();
      *puVar2 = 0x21;
    }
    if (iStack_40 != 0) {
      piVar3 = (int *)FUN_0035c4a0();
      *piVar3 = iStack_40;
    }
    uVar5 = FUN_00291c68(uStack_48);
  }
  return uVar5;
}


// ==== FUN_0029e2d8 @ 0029e2d8 ====

/* Strings referenciadas:
     "atan2f" */

undefined4 FUN_0029e2d8(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uStack_70;
  char *pcStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  
  uVar5 = FUN_002a03c8();
  iVar1 = DAT_00402b40;
  if ((((DAT_00402b40 != -1) && (lVar4 = FUN_002a4208(param_2), lVar4 == 0)) &&
      (lVar4 = FUN_002a4208(param_1), lVar4 == 0)) && ((param_2 == 0.0 && (param_1 == 0.0)))) {
    uStack_68 = FUN_00291f58(param_1);
    uStack_60 = FUN_00291f58(param_2);
    uStack_58 = 0;
    uStack_70 = 1;
    pcStack_6c = "atan2f";
    iStack_50 = 0;
    if ((iVar1 == 2) || (lVar4 = FUN_002a3e00(&uStack_70), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_0035c4a0();
      *puVar2 = 0x21;
    }
    if (iStack_50 != 0) {
      piVar3 = (int *)FUN_0035c4a0();
      *piVar3 = iStack_50;
    }
    uVar5 = FUN_00291c68(uStack_58);
  }
  return uVar5;
}


// ==== FUN_0029e400 @ 0029e400 ====

/* Strings referenciadas:
     "fmodf" */

undefined4 FUN_0029e400(undefined4 param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uStack_80;
  char *pcStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  
  uVar5 = FUN_002a06b0();
  iVar1 = DAT_00402b40;
  if ((((DAT_00402b40 != -1) && (lVar4 = FUN_002a4208(param_2), lVar4 == 0)) &&
      (lVar4 = FUN_002a4208(param_1), lVar4 == 0)) && (param_2 == 0.0)) {
    uStack_80 = 1;
    pcStack_7c = "fmodf";
    iStack_60 = 0;
    uStack_78 = FUN_00291f58(param_1);
    uStack_70 = FUN_00291f58(param_2);
    if (iVar1 == 0) {
      uStack_68 = FUN_00291f58(param_1);
    }
    else {
      uStack_68 = DAT_00402090;
    }
    if ((DAT_00402b40 == 2) || (lVar4 = FUN_002a3e00(&uStack_80), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_0035c4a0();
      *puVar2 = 0x21;
    }
    if (iStack_60 != 0) {
      piVar3 = (int *)FUN_0035c4a0();
      *piVar3 = iStack_60;
    }
    uVar5 = FUN_00291c68(uStack_68);
  }
  return uVar5;
}


// ==== FUN_0029e540 @ 0029e540 ====

undefined4 FUN_0029e540(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uStack_70;
  undefined *puStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  
  uVar5 = FUN_002a0900();
  iVar1 = DAT_00402b40;
  if (DAT_00402b40 == -1) {
    return uVar5;
  }
  lVar4 = FUN_002a4208(param_1);
  if (lVar4 != 0) {
    return uVar5;
  }
  if (0.0 < param_1) {
    return uVar5;
  }
  iStack_50 = 0;
  puStack_6c = &DAT_00402098;
  uStack_68 = FUN_00291f58(param_1);
  uStack_60 = uStack_68;
  if (iVar1 == 0) {
    uStack_58 = DAT_004020a0;
  }
  else {
    uStack_58 = FUN_00291468(0,DAT_00402b38);
  }
  if (param_1 == 0.0) {
    uStack_70 = 2;
    if (DAT_00402b40 != 2) goto LAB_0029e628;
    puVar2 = (undefined4 *)FUN_0035c4a0();
    uVar5 = 0x22;
  }
  else {
    uStack_70 = 1;
    if (DAT_00402b40 != 2) {
LAB_0029e628:
      lVar4 = FUN_002a3e00(&uStack_70);
      if (lVar4 != 0) goto LAB_0029e64c;
    }
    puVar2 = (undefined4 *)FUN_0035c4a0();
    uVar5 = 0x21;
  }
  *puVar2 = uVar5;
LAB_0029e64c:
  if (iStack_50 != 0) {
    piVar3 = (int *)FUN_0035c4a0();
    *piVar3 = iStack_50;
  }
  uVar5 = FUN_00291c68(uStack_58);
  return uVar5;
}


// ==== FUN_0029e688 @ 0029e688 ====

float FUN_0029e688(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uStack_a0;
  undefined *puStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  
  fVar8 = (float)FUN_002a0c28();
  iVar1 = DAT_00402b40;
  if (DAT_00402b40 == -1) {
    return fVar8;
  }
  lVar4 = FUN_002a4208(param_2);
  if (lVar4 != 0) {
    return fVar8;
  }
  lVar4 = FUN_002a4208(param_1);
  if (lVar4 == 0) {
    if (param_1 == 0.0) {
      if (param_2 == 0.0) {
        uStack_a0 = 1;
        puStack_9c = &DAT_004020a8;
        iStack_80 = 0;
        uStack_98 = FUN_00291f58(param_1);
        uStack_90 = FUN_00291f58(param_2);
        uStack_88 = 0;
        if (iVar1 != 0) goto LAB_0029e748;
        lVar4 = FUN_002a3e00(&uStack_a0);
        if (lVar4 != 0) goto LAB_0029eb38;
        puVar2 = (undefined4 *)FUN_0035c4a0();
        uVar9 = 0x21;
      }
      else {
        lVar4 = FUN_002a41e0(param_2);
        if (lVar4 == 0) {
          return fVar8;
        }
        if (0.0 <= param_2) {
          return fVar8;
        }
        uStack_a0 = 1;
        puStack_9c = &DAT_004020a8;
        iStack_80 = 0;
        uStack_98 = FUN_00291f58(param_1);
        uStack_90 = FUN_00291f58(param_2);
        if (iVar1 == 0) {
          uStack_88 = 0;
        }
        else {
          uStack_88 = FUN_00291468(0,DAT_00402b38);
        }
        if ((DAT_00402b40 != 2) && (lVar4 = FUN_002a3e00(&uStack_a0), lVar4 != 0))
        goto LAB_0029eb38;
        puVar2 = (undefined4 *)FUN_0035c4a0();
        uVar9 = 0x21;
      }
    }
    else {
      lVar4 = FUN_002a41e0(fVar8);
      if (((lVar4 == 0) && (lVar4 = FUN_002a41e0(param_1), lVar4 != 0)) &&
         (lVar4 = FUN_002a41e0(param_2), lVar4 != 0)) {
        lVar4 = FUN_002a4208(fVar8);
        if (lVar4 != 0) {
          uStack_a0 = 1;
          puStack_9c = &DAT_004020a8;
          iStack_80 = 0;
          uStack_98 = FUN_00291f58(param_1);
          uStack_90 = FUN_00291f58(param_2);
          if (iVar1 == 0) {
            uStack_88 = 0;
          }
          else {
            uStack_88 = DAT_004020b0;
          }
          if ((DAT_00402b40 != 2) && (lVar4 = FUN_002a3e00(&uStack_a0), lVar4 != 0))
          goto LAB_0029eb38;
          puVar2 = (undefined4 *)FUN_0035c4a0();
          uVar9 = 0x21;
          goto LAB_0029eb30;
        }
        uStack_a0 = 3;
        puStack_9c = &DAT_004020a8;
        iStack_80 = 0;
        uStack_98 = FUN_00291f58(param_1);
        uStack_90 = FUN_00291f58(param_2);
        uVar5 = DAT_00402b38;
        if (iVar1 == 0) {
          uStack_88 = DAT_004020b8;
          uVar5 = FUN_00291f58(param_2);
          uVar5 = FUN_002914d0(uVar5,0x3fe0000000000000);
          uVar9 = FUN_00291c68(uVar5);
          uVar5 = FUN_00291f58(param_1);
          lVar4 = FUN_002919f8(uVar5,0);
          if (lVar4 < 0) {
            uVar5 = FUN_00291f58(uVar9);
            uVar5 = FUN_002a3e28(uVar5);
            uVar6 = FUN_00291f58(uVar9);
            lVar4 = FUN_002919f8(uVar5,uVar6);
            if (lVar4 != 0) {
              uStack_88 = DAT_004020c0;
            }
          }
        }
        else {
          uStack_88 = DAT_00402b38;
          uVar6 = FUN_00291f58(param_2);
          uVar6 = FUN_002914d0(uVar6,0x3fe0000000000000);
          uVar9 = FUN_00291c68(uVar6);
          uVar6 = FUN_00291f58(param_1);
          lVar4 = FUN_002919f8(uVar6,0);
          if (lVar4 < 0) {
            uVar6 = FUN_00291f58(uVar9);
            uVar6 = FUN_002a3e28(uVar6);
            uVar7 = FUN_00291f58(uVar9);
            lVar4 = FUN_002919f8(uVar6,uVar7);
            if (lVar4 != 0) {
              uStack_88 = FUN_00291468(0,uVar5);
            }
          }
        }
      }
      else {
        if (fVar8 != 0.0) {
          return fVar8;
        }
        lVar4 = FUN_002a41e0(param_1);
        if (lVar4 == 0) {
          return fVar8;
        }
        lVar4 = FUN_002a41e0(param_2);
        if (lVar4 == 0) {
          return fVar8;
        }
        uStack_a0 = 4;
        puStack_9c = &DAT_004020a8;
        iStack_80 = 0;
        uStack_98 = FUN_00291f58(param_1);
        uStack_90 = FUN_00291f58(param_2);
        uStack_88 = 0;
      }
      if ((DAT_00402b40 != 2) && (lVar4 = FUN_002a3e00(&uStack_a0), lVar4 != 0)) goto LAB_0029eb38;
      puVar2 = (undefined4 *)FUN_0035c4a0();
      uVar9 = 0x22;
    }
  }
  else {
    if (param_2 != 0.0) {
      return fVar8;
    }
    uStack_a0 = 1;
    puStack_9c = &DAT_004020a8;
    iStack_80 = 0;
    uStack_98 = FUN_00291f58(param_1);
    uStack_90 = FUN_00291f58(param_2);
    uStack_88 = FUN_00291f58(param_1);
    if (iVar1 == 2) {
LAB_0029e748:
      uStack_88 = 0x3ff0000000000000;
      goto LAB_0029eb38;
    }
    lVar4 = FUN_002a3e00(&uStack_a0);
    if (lVar4 != 0) goto LAB_0029eb38;
    puVar2 = (undefined4 *)FUN_0035c4a0();
    uVar9 = 0x21;
  }
LAB_0029eb30:
  *puVar2 = uVar9;
LAB_0029eb38:
  if (iStack_80 != 0) {
    piVar3 = (int *)FUN_0035c4a0();
    *piVar3 = iStack_80;
  }
  fVar8 = (float)FUN_00291c68(uStack_88);
  return fVar8;
}


// ==== FUN_0029eb90 @ 0029eb90 ====

/* Strings referenciadas:
     "sqrtf" */

undefined4 FUN_0029eb90(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uStack_70;
  char *pcStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  
  uVar5 = FUN_002a1898();
  iVar1 = DAT_00402b40;
  if (((DAT_00402b40 != -1) && (lVar4 = FUN_002a4208(param_1), lVar4 == 0)) && (param_1 < 0.0)) {
    uStack_70 = 1;
    pcStack_6c = "sqrtf";
    iStack_50 = 0;
    uStack_68 = FUN_00291f58(param_1);
    if (iVar1 == 0) {
      uStack_58 = 0;
    }
    else {
      uStack_58 = DAT_004020d0;
    }
    uStack_60 = uStack_68;
    if ((DAT_00402b40 == 2) || (lVar4 = FUN_002a3e00(&uStack_70), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_0035c4a0();
      *puVar2 = 0x21;
    }
    if (iStack_50 != 0) {
      piVar3 = (int *)FUN_0035c4a0();
      *piVar3 = iStack_50;
    }
    uVar5 = FUN_00291c68(uStack_58);
  }
  return uVar5;
}


// ==== FUN_0029eca8 @ 0029eca8 ====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0029eca8(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar7 = (uint)param_2;
  uVar9 = param_2 >> 0x20 & 0x7fffffff;
  uVar6 = (uint)param_1;
  uVar8 = (long)param_1 >> 0x20 & 0x7fffffff;
  if ((0x7ff00000 < (uVar9 | (long)(int)((uVar7 | -uVar7) >> 0x1f))) ||
     (0x7ff00000 < (uVar8 | (long)(int)((uVar6 | -uVar6) >> 0x1f)))) {
    uVar8 = FUN_00291410(param_2,param_1);
    return uVar8;
  }
  iVar3 = (int)((ulong)param_2 >> 0x20);
  if (iVar3 == 0x3ff00000 && uVar7 == 0) {
    uVar8 = FUN_002a37a8(param_1);
    return uVar8;
  }
  uVar10 = (uint)(param_1 >> 0x3f) | iVar3 >> 0x1e & 2U;
  if (uVar8 == 0 && uVar6 == 0) {
    if (uVar10 == 2) {
      return DAT_00402140;
    }
    if (uVar10 < 3) {
      return param_1;
    }
    if (uVar10 == 3) {
      return DAT_00402148;
    }
  }
  uVar1 = DAT_00402110;
  uVar2 = DAT_00402118;
  if (uVar9 == 0 && uVar7 == 0) goto joined_r0x0029eec4;
  if (uVar9 == 0x7ff00000) {
    if (uVar8 == 0x7ff00000) {
      if (uVar10 == 1) {
        return DAT_00402128;
      }
      uVar1 = DAT_00402130;
      uVar2 = DAT_00402138;
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          return DAT_00402120;
        }
      }
      else {
joined_r0x0029ee68:
        if (uVar10 == 2) {
          return uVar1;
        }
        if (uVar10 == 3) {
          return uVar2;
        }
      }
    }
    else {
      if (uVar10 == 1) {
        return DAT_00402108;
      }
      uVar1 = DAT_00402140;
      uVar2 = DAT_00402148;
      if (1 < uVar10) goto joined_r0x0029ee68;
      if (uVar10 == 0) {
        return 0;
      }
    }
  }
  uVar1 = DAT_00402150;
  uVar2 = DAT_00402158;
  if (uVar8 == 0x7ff00000) {
joined_r0x0029eec4:
    if (-1 < (long)param_1 >> 0x20) {
      return uVar1;
    }
    return uVar2;
  }
  iVar3 = (int)uVar8 - (int)uVar9 >> 0x14;
  uVar8 = DAT_00402160;
  if ((iVar3 < 0x3d) && ((-1 < param_2 >> 0x20 || (uVar8 = 0, -0x3d < iVar3)))) {
    uVar5 = FUN_00291778(param_1);
    uVar5 = FUN_002a3bb8(uVar5);
    uVar8 = FUN_002a37a8(uVar5);
  }
  if (uVar10 == 1) {
    return uVar8 & 0xffffffff | ((long)uVar8 >> 0x20 ^ 0xffffffff80000000U) << 0x20;
  }
  if (uVar10 < 2) {
    if (uVar10 == 0) {
      return uVar8;
    }
  }
  else if (uVar10 == 2) {
    uVar4 = FUN_00291468(uVar8,DAT_00402168);
    uVar5 = DAT_00402170;
    goto LAB_0029efc4;
  }
  uVar5 = FUN_00291468(uVar8,DAT_00402178);
  uVar4 = DAT_00402180;
LAB_0029efc4:
  uVar8 = FUN_00291468(uVar5,uVar4);
  return uVar8;
}


// ==== FUN_0029efe0 @ 0029efe0 ====

ulong FUN_0029efe0(ulong param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
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
    uVar4 = FUN_002914d0();
    uVar14 = FUN_00291778(uVar4,uVar4);
    return uVar14;
  }
  if ((long)uVar12 <= (long)uVar16) {
    if ((long)uVar12 < (long)uVar16) {
      return param_1;
    }
    if (uVar14 < uVar18) {
      return param_1;
    }
    if (uVar14 == uVar18) goto LAB_0029f38c;
  }
  iVar11 = (int)uVar12;
  if ((long)uVar12 < 0x100000) {
    iVar3 = iVar11 << 0xb;
    if (uVar12 == 0) {
      iVar8 = -0x413;
      for (uVar5 = uVar14; 0 < (long)uVar5; uVar5 = (ulong)((int)uVar5 << 1)) {
        iVar8 = iVar8 + -1;
      }
    }
    else {
      iVar8 = -0x3fe;
      for (; 0 < iVar3; iVar3 = iVar3 << 1) {
        iVar8 = iVar8 + -1;
      }
    }
  }
  else {
    iVar8 = (iVar11 >> 0x14) + -0x3ff;
  }
  uVar15 = (uint)uVar16;
  if (uVar16 < 0x100000) {
    iVar3 = uVar15 << 0xb;
    if (uVar16 == 0) {
      iVar7 = -0x413;
      for (uVar16 = uVar18; 0 < (long)uVar16; uVar16 = (ulong)((int)uVar16 << 1)) {
        iVar7 = iVar7 + -1;
      }
    }
    else {
      iVar7 = -0x3fe;
      for (; 0 < iVar3; iVar3 = iVar3 << 1) {
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
  bVar2 = iVar7 < -0x3fe;
  if (bVar2) {
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
    iVar3 = (int)uVar14;
    iVar11 = (int)uVar12;
    if (bVar1) break;
    iVar6 = (iVar11 - uVar17) - (uint)(uVar14 < uVar18);
    iVar9 = iVar3 - (int)uVar18;
    if (iVar6 < 0) {
      uVar12 = (ulong)(iVar11 * 2 - (iVar3 >> 0x1f));
      uVar14 = (ulong)(iVar3 << 1);
    }
    else {
      if (iVar6 == 0 && iVar9 == 0) goto LAB_0029f38c;
      uVar12 = (ulong)(iVar6 * 2 - (iVar9 >> 0x1f));
      uVar14 = (ulong)(iVar9 * 2);
    }
  }
  uVar16 = (ulong)(int)((iVar11 - uVar17) - (uint)(uVar14 < uVar18));
  if (-1 < (long)uVar16) {
    uVar12 = uVar16;
    uVar14 = (long)(iVar3 - (int)uVar18);
  }
  if (uVar12 != 0 || uVar14 != 0) {
    if ((long)uVar12 < 0x100000) {
      do {
        uVar12 = (ulong)((int)uVar12 * 2 - ((int)uVar14 >> 0x1f));
        uVar14 = (ulong)((int)uVar14 << 1);
        iVar7 = iVar7 + -1;
      } while ((long)uVar12 < 0x100000);
      bVar2 = iVar7 < -0x3fe;
    }
    iVar11 = (int)uVar12;
    if (!bVar2) {
      return ((long)(int)(iVar11 - 0x100000U | (iVar7 + 0x3ff) * 0x100000) | uVar19) << 0x20 |
             uVar14 & 0xffffffff;
    }
    uVar17 = -iVar7 - 0x3fe;
    if ((int)uVar17 < 0x15) {
      uVar13 = (uint)uVar14 >> (uVar17 & 0x1f) | iVar11 << (-uVar17 & 0x1f);
      uVar12 = (long)(iVar11 >> (uVar17 & 0x1f));
    }
    else {
      uVar12 = uVar19;
      if ((int)uVar17 < 0x20) {
        uVar13 = iVar11 << (-uVar17 & 0x1f) | (uint)uVar14 >> (uVar17 & 0x1f);
      }
      else {
        uVar13 = iVar11 >> (uVar17 & 0x1f);
      }
    }
    return (uVar12 | uVar19) << 0x20 | (ulong)uVar13;
  }
LAB_0029f38c:
  return *(ulong *)(&DAT_00402190 + ((int)uVar19 >> 0x1f) * -8);
}


// ==== FUN_0029f3d0 @ 0029f3d0 ====

int FUN_0029f3d0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_d0 [6];
  
  puVar11 = auStack_d0;
  uVar14 = (long)param_1 >> 0x20;
  uVar9 = uVar14 & 0x7fffffff;
  puVar12 = (ulong *)param_2;
  if (uVar9 < 0x3fe921fc) {
    *puVar12 = param_1;
    puVar12[1] = 0;
    return 0;
  }
  if (uVar9 < 0x4002d97c) {
    if (0 < (long)uVar14) {
      uVar2 = FUN_00291468(param_1,DAT_00402378);
      uVar3 = DAT_00402390;
      uVar4 = DAT_00402380;
      if (uVar9 == 0x3ff921fb) {
        uVar2 = FUN_00291468(uVar2,DAT_00402388);
        uVar4 = uVar3;
      }
      uVar9 = FUN_00291468(uVar2,uVar4);
      *puVar12 = uVar9;
      uVar3 = FUN_00291468(uVar2,uVar9);
      uVar9 = FUN_00291468(uVar3,uVar4);
      puVar12[1] = uVar9;
      return 1;
    }
    uVar2 = FUN_00291410(param_1,DAT_00402398);
    uVar3 = DAT_004023b0;
    uVar4 = DAT_004023a0;
    if (uVar9 == 0x3ff921fb) {
      uVar2 = FUN_00291410(uVar2,DAT_004023a8);
      uVar4 = uVar3;
    }
    uVar9 = FUN_00291410(uVar2,uVar4);
    *puVar12 = uVar9;
    uVar3 = FUN_00291468(uVar2,uVar9);
    uVar9 = FUN_00291410(uVar3,uVar4);
    puVar12[1] = uVar9;
    return -1;
  }
  iVar8 = (int)uVar9 >> 0x14;
  if (0x413921fb < uVar9) {
    if (0x7fefffff < uVar9) {
      uVar9 = FUN_00291468(param_1,param_1);
      *puVar12 = uVar9;
      puVar12[1] = uVar9;
      return 0;
    }
    uVar9 = param_1 & 0xffffffff | (long)((int)uVar9 + (iVar8 + -0x416) * -0x100000) << 0x20;
    iVar1 = 1;
    do {
      iVar1 = iVar1 + -1;
      uVar3 = FUN_00291b00(uVar9);
      uVar3 = FUN_00291a48(uVar3);
      *puVar11 = uVar3;
      puVar11 = puVar11 + 1;
      uVar3 = FUN_00291468(uVar9,uVar3);
      uVar9 = FUN_002914d0(uVar3,0x4170000000000000);
    } while (-1 < iVar1);
    auStack_d0[2] = uVar9;
    iVar1 = 3;
    do {
      iVar10 = iVar1;
      iVar1 = iVar10 + -1;
      lVar7 = FUN_002919f8(auStack_d0[iVar1],0);
    } while (lVar7 == 0);
    iVar1 = FUN_002a1c20(auStack_d0,param_2,iVar8 + -0x416,iVar10,2,0x4021a0);
    if (-1 < (long)uVar14) {
      return iVar1;
    }
    uVar14 = FUN_00291468(0,*puVar12);
    uVar9 = puVar12[1];
    *puVar12 = uVar14;
    goto LAB_0029f8a4;
  }
  uVar3 = FUN_002a3bb8();
  uVar4 = FUN_002914d0(uVar3,DAT_004023b8);
  uVar4 = FUN_00291410(uVar4,0x3fe0000000000000);
  iVar1 = FUN_00291b00(uVar4);
  uVar4 = FUN_00291a48(iVar1);
  uVar2 = FUN_002914d0(uVar4,DAT_004023c0);
  uVar3 = FUN_00291468(uVar3,uVar2);
  uVar2 = FUN_002914d0(uVar4,DAT_004023c8);
  if ((iVar1 < 0x20) && (uVar9 != (long)*(int *)(&DAT_004022a8 + (iVar1 + -1) * 4))) {
LAB_0029f740:
    uVar9 = FUN_00291468(uVar3,uVar2);
    *puVar12 = uVar9;
    uVar13 = *puVar12;
  }
  else {
    uVar9 = FUN_00291468(uVar3,uVar2);
    *puVar12 = uVar9;
    if ((int)(iVar8 - ((uint)(uVar9 >> 0x34) & 0x7ff)) < 0x11) {
      uVar13 = *puVar12;
    }
    else {
      uVar2 = FUN_002914d0(uVar4,DAT_004023d0);
      uVar5 = FUN_00291468(uVar3,uVar2);
      uVar6 = FUN_002914d0(uVar4,DAT_004023d8);
      uVar3 = FUN_00291468(uVar3,uVar5);
      uVar3 = FUN_00291468(uVar3,uVar2);
      uVar2 = FUN_00291468(uVar6,uVar3);
      uVar9 = FUN_00291468(uVar5,uVar2);
      *puVar12 = uVar9;
      if (0x31 < (int)(iVar8 - ((uint)(uVar9 >> 0x34) & 0x7ff))) {
        uVar2 = FUN_002914d0(uVar4,DAT_004023e0);
        uVar3 = FUN_00291468(uVar5,uVar2);
        uVar4 = FUN_002914d0(uVar4,DAT_004023e8);
        uVar5 = FUN_00291468(uVar5,uVar3);
        uVar2 = FUN_00291468(uVar5,uVar2);
        uVar2 = FUN_00291468(uVar4,uVar2);
        goto LAB_0029f740;
      }
      uVar13 = *puVar12;
      uVar3 = uVar5;
    }
  }
  uVar3 = FUN_00291468(uVar3,uVar13);
  uVar9 = FUN_00291468(uVar3,uVar2);
  puVar12[1] = uVar9;
  if (-1 < (long)uVar14) {
    return iVar1;
  }
  uVar14 = FUN_00291468(0,uVar13);
  *puVar12 = uVar14;
LAB_0029f8a4:
  uVar9 = FUN_00291468(0,uVar9);
  puVar12[1] = uVar9;
  return -iVar1;
}


// ==== FUN_0029f8f0 @ 0029f8f0 ====

ulong FUN_0029f8f0(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar10 = (long)param_1 >> 0x20;
  uVar11 = (uint)param_1;
  if ((uVar10 & 0x7ff00000) == 0x7ff00000) {
    uVar5 = FUN_002914d0(param_1,param_1);
    uVar10 = FUN_00291410(uVar5,param_1);
    return uVar10;
  }
  iVar8 = (int)((long)param_1 >> 0x34);
  if ((long)uVar10 < 1) {
    if ((uVar10 & 0x7fffffff) == 0 && uVar11 == 0) {
      return param_1;
    }
    if ((long)uVar10 < 0) {
      uVar5 = FUN_00291468(param_1,param_1);
      uVar10 = FUN_00291778(uVar5,uVar5);
      return uVar10;
    }
  }
  if (iVar8 == 0) {
    iVar8 = 0;
    while (uVar10 == 0) {
      uVar2 = uVar11 >> 0xb;
      iVar8 = iVar8 + -0x15;
      uVar11 = uVar11 << 0x15;
      uVar10 = (ulong)(int)uVar2;
    }
    uVar2 = 0;
    if ((uVar10 & 0x100000) == 0) {
      do {
        uVar10 = (ulong)((int)uVar10 << 1);
        uVar2 = uVar2 + 1;
      } while ((uVar10 & 0x100000) == 0);
      uVar12 = -uVar2;
    }
    else {
      uVar12 = 0;
    }
    iVar8 = (iVar8 + 1) - uVar2;
    uVar10 = uVar10 | (long)(int)(uVar11 >> (uVar12 & 0x1f));
    uVar11 = uVar11 << (uVar2 & 0x1f);
  }
  uVar2 = (uint)uVar10 & 0xfffff | 0x100000;
  if ((iVar8 - 0x3ffU & 1) != 0) {
    iVar13 = (int)uVar11 >> 0x1f;
    uVar11 = uVar11 << 1;
    uVar2 = uVar2 * 2 - iVar13;
  }
  iVar3 = uVar2 * 2 - ((int)uVar11 >> 0x1f);
  uVar11 = uVar11 << 1;
  uVar14 = 0;
  iVar13 = 0;
  uVar15 = 0;
  uVar2 = 0;
  uVar12 = 0x200000;
  do {
    iVar7 = iVar13 + uVar12;
    if (iVar7 <= iVar3) {
      iVar3 = iVar3 - iVar7;
      iVar13 = iVar7 + uVar12;
      uVar2 = uVar2 + uVar12;
    }
    uVar12 = uVar12 >> 1;
    iVar7 = (int)uVar11 >> 0x1f;
    uVar11 = uVar11 << 1;
    iVar3 = iVar3 * 2 - iVar7;
  } while (uVar12 != 0);
  uVar12 = 0x80000000;
  do {
    uVar9 = uVar14 + uVar12;
    if ((iVar13 < iVar3) || ((uVar4 = uVar11 & 0x80000000, iVar13 == iVar3 && (uVar9 <= uVar11)))) {
      bVar1 = uVar11 < uVar9;
      uVar14 = uVar9 + uVar12;
      iVar3 = iVar3 - iVar13;
      if (((uVar9 & 0x80000000) == 0x80000000) && ((uVar14 & 0x80000000) == 0)) {
        iVar13 = iVar13 + 1;
      }
      uVar11 = uVar11 - uVar9;
      iVar3 = iVar3 - (uint)bVar1;
      uVar15 = uVar15 + uVar12;
      uVar4 = uVar11 & 0x80000000;
    }
    uVar12 = uVar12 >> 1;
    uVar11 = uVar11 << 1;
    iVar3 = iVar3 * 2 - ((int)uVar4 >> 0x1f);
  } while (uVar12 != 0);
  uVar10 = (ulong)(int)(uVar15 >> 1);
  if (iVar3 != 0 || uVar11 != 0) {
    lVar6 = FUN_002919f8(0x3ff0000000000000,0x3ff0000000000000);
    uVar10 = (ulong)(int)(uVar15 >> 1);
    if (-1 < lVar6) {
      if (uVar15 == 0xffffffff) {
        uVar15 = 0;
        uVar2 = uVar2 + 1;
      }
      else {
        lVar6 = FUN_002919f8(0x3ff0000000000000,0x3ff0000000000000);
        if (lVar6 < 1) {
          uVar15 = uVar15 + (uVar15 & 1);
        }
        else {
          if (uVar15 == 0xfffffffe) {
            uVar2 = uVar2 + 1;
          }
          uVar15 = uVar15 + 2;
        }
      }
      uVar10 = (ulong)(int)(uVar15 >> 1);
    }
  }
  if ((uVar2 & 1) != 0) {
    uVar10 = uVar10 | 0xffffffff80000000;
  }
  return (long)(((int)uVar2 >> 1) + 0x3fe00000 + ((int)(iVar8 - 0x3ffU) >> 1) * 0x100000) << 0x20 |
         uVar10 & 0xffffffff;
}


// ==== FUN_0029fbf8 @ 0029fbf8 ====

float FUN_0029fbf8(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = ABS(param_1);
  if (fVar1 == 1.0) {
    fVar1 = 0.0;
    if ((int)param_1 < 1) {
      fVar1 = 3.1415927;
    }
  }
  else if ((uint)fVar1 < 0x3f800001) {
    if ((uint)fVar1 < 0x3f000000) {
      if ((uint)fVar1 < 0x23000001) {
        fVar1 = 1.5707964;
      }
      else {
        fVar1 = param_1 * param_1;
        fVar1 = 1.5707963 -
                (param_1 -
                (7.5497894e-08 -
                param_1 * ((fVar1 * (fVar1 * (fVar1 * (fVar1 * (fVar1 * (fVar1 * 3.479331e-05 +
                                                                        0.000791535) + -0.040055536)
                                                      + 0.20121253) + -0.32556581) + 0.16666667)) /
                          (fVar1 * (fVar1 * (fVar1 * (fVar1 * 0.077038154 + -0.688284) + 2.0209458)
                                   + -2.403395) + 1.0))));
      }
    }
    else if ((int)param_1 < 0) {
      fVar2 = (param_1 + 1.0) * 0.5;
      fVar1 = (float)FUN_002a1898(fVar2);
      fVar1 = fVar1 + (((fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * 3.479331e-05 +
                                                                     0.000791535) + -0.040055536) +
                                                   0.20121253) + -0.32556581) + 0.16666667)) /
                       (fVar2 * (fVar2 * (fVar2 * (fVar2 * 0.077038154 + -0.688284) + 2.0209458) +
                                -2.403395) + 1.0)) * fVar1 - 7.5497894e-08);
      fVar1 = 3.1415925 - (fVar1 + fVar1);
    }
    else {
      fVar3 = (1.0 - param_1) * 0.5;
      fVar2 = (float)FUN_002a1898(fVar3);
      fVar1 = (float)((uint)fVar2 & 0xfffff000);
      fVar1 = fVar1 + ((fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * 3.479331e-05 +
                                                                    0.000791535) + -0.040055536) +
                                                  0.20121253) + -0.32556581) + 0.16666667)) /
                      (fVar3 * (fVar3 * (fVar3 * (fVar3 * 0.077038154 + -0.688284) + 2.0209458) +
                               -2.403395) + 1.0)) * fVar2 +
                      (fVar3 - fVar1 * fVar1) / (fVar2 + fVar1);
      fVar1 = fVar1 + fVar1;
    }
  }
  else {
    fVar1 = (param_1 - param_1) / (param_1 - param_1);
  }
  return fVar1;
}


// ==== FUN_002a0028 @ 002a0028 ====

float FUN_002a0028(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_f20;
  float fVar4;
  float fVar5;
  
  fVar1 = ABS(param_1);
  if (fVar1 == 1.0) {
    fVar1 = param_1 * 1.5707963 + param_1 * 7.5497894e-08;
  }
  else if ((uint)fVar1 < 0x3f800001) {
    if ((uint)fVar1 < 0x3f000000) {
      if ((uint)fVar1 < 0x32000000) {
        if (1.0 < param_1 + 1e+30) {
          return param_1;
        }
      }
      else {
        unaff_f20 = param_1 * param_1;
      }
      fVar1 = param_1 + param_1 * ((unaff_f20 *
                                   (unaff_f20 *
                                    (unaff_f20 *
                                     (unaff_f20 *
                                      (unaff_f20 * (unaff_f20 * 3.479331e-05 + 0.000791535) +
                                      -0.040055536) + 0.20121253) + -0.32556581) + 0.16666667)) /
                                  (unaff_f20 *
                                   (unaff_f20 *
                                    (unaff_f20 * (unaff_f20 * 0.077038154 + -0.688284) + 2.0209458)
                                   + -2.403395) + 1.0));
    }
    else {
      fVar2 = (float)FUN_0029db10();
      fVar4 = (1.0 - fVar2) * 0.5;
      fVar5 = fVar4 * (fVar4 * (fVar4 * (fVar4 * 0.077038154 + -0.688284) + 2.0209458) + -2.403395)
              + 1.0;
      fVar3 = fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * 3.479331e-05 + 0.000791535) +
                                                 -0.040055536) + 0.20121253) + -0.32556581) +
                      0.16666667);
      fVar2 = (float)FUN_002a1898(fVar4);
      if ((uint)fVar1 < 0x3f79999a) {
        fVar1 = (float)((uint)fVar2 & 0xfffff000);
        fVar4 = (fVar4 - fVar1 * fVar1) / (fVar2 + fVar1);
        fVar1 = 0.7853982 -
                (((fVar2 + fVar2) * (fVar3 / fVar5) - (7.5497894e-08 - (fVar4 + fVar4))) -
                (0.7853982 - (fVar1 + fVar1)));
      }
      else {
        fVar2 = fVar2 + fVar2 * (fVar3 / fVar5);
        fVar1 = 1.5707963 - ((fVar2 + fVar2) - 7.5497894e-08);
      }
      if ((int)param_1 < 1) {
        fVar1 = -fVar1;
      }
    }
  }
  else {
    fVar1 = (param_1 - param_1) / (param_1 - param_1);
  }
  return fVar1;
}


// ==== FUN_002a03c8 @ 002a03c8 ====

undefined * FUN_002a03c8(undefined *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  fVar3 = ABS(param_2);
  fVar2 = ABS((float)param_1);
  if ((0x7f800000 < (uint)fVar3) || (0x7f800000 < (uint)fVar2)) {
    return (undefined *)(param_2 + (float)param_1);
  }
  if (param_2 == 1.0) {
    puVar5 = (undefined *)FUN_0029d6a8(param_1);
    return puVar5;
  }
  uVar4 = (uint)param_1 >> 0x1f | (int)param_2 >> 0x1e & 2U;
  if (fVar2 == 0.0) {
    if (uVar4 == 2) {
      return (undefined *)0x40490fda;
    }
    if (uVar4 < 3) {
      if (-1 < (int)uVar4) {
        return param_1;
      }
    }
    else if (uVar4 == 3) {
      return (undefined *)0xc0490fda;
    }
  }
  if (fVar3 != 0.0) {
    if (fVar3 == INFINITY) {
      if (fVar2 == INFINITY) {
        if (uVar4 == 1) {
          return (undefined *)0xbf490fdb;
        }
        if (uVar4 < 2) {
          if (uVar4 == 0) {
            return (undefined *)0x3f490fdb;
          }
        }
        else {
          if (uVar4 == 2) {
            return (undefined *)0x4016cbe4;
          }
          if (uVar4 == 3) {
            return (undefined *)0xc016cbe4;
          }
        }
      }
      else {
        if (uVar4 == 1) {
          return DAT_00402408;
        }
        if (uVar4 < 2) {
          if (uVar4 == 0) {
            return (undefined *)0x0;
          }
        }
        else {
          if (uVar4 == 2) {
            return (undefined *)0x40490fda;
          }
          if (uVar4 == 3) {
            return (undefined *)0xc0490fda;
          }
        }
      }
    }
    if (fVar2 != INFINITY) {
      iVar1 = (int)fVar2 - (int)fVar3 >> 0x17;
      if (iVar1 < 0x3d) {
        if ((-1 < (int)param_2) || (puVar5 = (undefined *)0x0, -0x3d < iVar1)) {
          uVar6 = FUN_0029db10((float)param_1 / param_2);
          puVar5 = (undefined *)FUN_0029d6a8(uVar6);
        }
      }
      else {
        puVar5 = (undefined *)0x3fc90fdc;
      }
      if (uVar4 != 1) {
        if (uVar4 < 2) {
          if (uVar4 == 0) {
            return puVar5;
          }
        }
        else if (uVar4 == 2) {
          return (undefined *)(3.1415925 - ((float)puVar5 - 1.5099579e-07));
        }
        return (undefined *)(((float)puVar5 - 1.5099579e-07) - 3.1415925);
      }
      return (undefined *)((uint)puVar5 ^ 0x80000000);
    }
  }
  puVar5 = (undefined *)0x3fc90fdb;
  if ((int)param_1 < 0) {
    puVar5 = &DAT_bfc90fdb;
  }
  return puVar5;
}


// ==== FUN_002a06b0 @ 002a06b0 ====

float FUN_002a06b0(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  
  fVar7 = ABS(param_2);
  fVar5 = (float)((uint)param_1 ^ (uint)param_1 & 0x80000000);
  if (((fVar7 == 0.0) || (0x7f7fffff < (int)fVar5)) || (0x7f800000 < (uint)fVar7)) {
    return (param_1 * param_2) / (param_1 * param_2);
  }
  if ((int)fVar5 < (int)fVar7) {
    return param_1;
  }
  if (fVar5 != fVar7) {
    if ((int)fVar5 < 0x800000) {
      iVar9 = -0x7e;
      for (iVar3 = (int)param_1 << 8; 0 < iVar3; iVar3 = iVar3 << 1) {
        iVar9 = iVar9 + -1;
      }
    }
    else {
      iVar9 = ((int)fVar5 >> 0x17) + -0x7f;
    }
    if ((uint)fVar7 < 0x800000) {
      iVar3 = -0x7e;
      for (iVar4 = (int)param_2 << 8; -1 < iVar4; iVar4 = iVar4 << 1) {
        iVar3 = iVar3 + -1;
      }
    }
    else {
      iVar3 = ((int)fVar7 >> 0x17) + -0x7f;
    }
    if (iVar9 < -0x7e) {
      uVar6 = (int)fVar5 << (-iVar9 - 0x7eU & 0x1f);
    }
    else {
      uVar6 = (uint)fVar5 & 0x7fffff | 0x800000;
    }
    bVar2 = iVar3 < -0x7e;
    if (bVar2) {
      uVar8 = (int)fVar7 << (-iVar3 - 0x7eU & 0x1f);
    }
    else {
      uVar8 = (uint)param_2 & 0x7fffff | 0x800000;
    }
    iVar9 = iVar9 - iVar3;
    do {
      bVar1 = iVar9 == 0;
      iVar9 = iVar9 + -1;
      if (bVar1) {
        if (-1 < (int)(uVar6 - uVar8)) {
          uVar6 = uVar6 - uVar8;
        }
        if (uVar6 != 0) {
          if ((int)uVar6 < 0x800000) {
            do {
              uVar6 = uVar6 << 1;
              iVar3 = iVar3 + -1;
            } while ((int)uVar6 < 0x800000);
            bVar2 = iVar3 < -0x7e;
          }
          if (bVar2) {
            uVar6 = (int)uVar6 >> (-iVar3 - 0x7eU & 0x1f);
          }
          else {
            uVar6 = uVar6 - 0x800000 | (iVar3 + 0x7f) * 0x800000;
          }
          return (float)(uVar6 | (uint)param_1 & 0x80000000);
        }
        break;
      }
      iVar4 = uVar6 - uVar8;
      uVar6 = uVar6 << 1;
    } while ((iVar4 < 0) || (uVar6 = iVar4 * 2, iVar4 != 0));
  }
  return *(float *)(&DAT_00402418 + ((int)param_1 >> 0x1f) * -4);
}


// ==== FUN_002a0900 @ 002a0900 ====

float FUN_002a0900(float param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = 0;
  if ((int)param_1 < 0x800000) {
    if (ABS(param_1) == 0.0) {
      return DAT_0040244c;
    }
    iVar3 = -0x19;
    if ((int)param_1 < 0) {
      return (param_1 - param_1) / 0.0;
    }
    param_1 = param_1 * 33554432.0;
  }
  if (0x7f7fffff < (int)param_1) {
    return param_1 + param_1;
  }
  uVar2 = (uint)param_1 & 0x7fffff;
  uVar1 = uVar2 + 0x4afb20 & 0x800000;
  iVar3 = iVar3 + -0x7f + ((int)param_1 >> 0x17) + ((int)uVar1 >> 0x17);
  fVar8 = (float)(uVar2 | uVar1 ^ 0x3f800000) - 1.0;
  if ((uVar2 + 0xf & 0x7fffff) < 0x10) {
    fVar4 = 0.0;
    if (fVar8 != 0.0) {
      fVar4 = fVar8 * fVar8 * (0.5 - fVar8 * 0.33333334);
      if (iVar3 == 0) {
        return fVar8 - fVar4;
      }
      return (float)iVar3 * 0.6931381 - ((fVar4 - (float)iVar3 * 9.058001e-06) - fVar8);
    }
    if (iVar3 != 0) {
      return (float)iVar3 * 0.6931381 + (float)iVar3 * 9.058001e-06;
    }
  }
  else {
    fVar7 = fVar8 / (fVar8 + 2.0);
    fVar6 = (float)iVar3;
    fVar5 = fVar7 * fVar7;
    fVar4 = fVar5 * fVar5;
    fVar4 = fVar5 * (fVar4 * (fVar4 * (fVar4 * 0.14798199 + 0.18183573) + 0.2857143) + 0.6666667) +
            fVar4 * (fVar4 * (fVar4 * 0.15313838 + 0.22222199) + 0.4);
    if (0 < (int)(uVar2 - 0x30a3d0 | 0x35c288 - uVar2)) {
      fVar5 = fVar8 * 0.5 * fVar8;
      if (iVar3 == 0) {
        return fVar8 - (fVar5 - fVar7 * (fVar5 + fVar4));
      }
      return fVar6 * 0.6931381 -
             ((fVar5 - (fVar7 * (fVar5 + fVar4) + fVar6 * 9.058001e-06)) - fVar8);
    }
    if (iVar3 == 0) {
      return fVar8 - fVar7 * (fVar8 - fVar4);
    }
    fVar4 = fVar6 * 0.6931381 - ((fVar7 * (fVar8 - fVar4) - fVar6 * 9.058001e-06) - fVar8);
  }
  return fVar4;
}


// ==== FUN_002a0c28 @ 002a0c28 ====

float FUN_002a0c28(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = ABS(param_2);
  fVar7 = ABS(param_1);
  if (fVar13 == 0.0) {
    return 1.0;
  }
  if (0x7f800000 < (uint)fVar7) {
    return param_1 + param_2;
  }
  if (0x7f800000 < (uint)fVar13) {
    return param_1 + param_2;
  }
  iVar6 = 0;
  if ((int)param_1 < 0) {
    if ((uint)fVar13 < 0x4b800000) {
      if ((0x3f7fffff < (uint)fVar13) &&
         (uVar3 = 0x96 - ((int)fVar13 >> 0x17), uVar5 = (int)fVar13 >> (uVar3 & 0x1f),
         (float)(uVar5 << (uVar3 & 0x1f)) == fVar13)) {
        iVar6 = 2 - (uVar5 & 1);
      }
    }
    else {
      iVar6 = 2;
    }
  }
  if (fVar13 == INFINITY) {
    if (fVar7 == 1.0) {
      return param_2 - param_2;
    }
    if (0x3f800000 < (uint)fVar7) {
      if (-1 < (int)param_2) {
        return param_2;
      }
      return 0.0;
    }
    if ((int)param_2 < 0) {
      return -param_2;
    }
    return 0.0;
  }
  if (fVar13 == 1.0) {
    if (-1 < (int)param_2) {
      return param_1;
    }
    return 1.0 / param_1;
  }
  if (param_2 == 2.0) {
    return param_1 * param_1;
  }
  if ((param_2 == 0.5) && (-1 < (int)param_1)) {
    fVar7 = (float)FUN_002a1898(param_1);
    return fVar7;
  }
  fVar10 = param_2;
  fVar8 = (float)FUN_0029db10(param_1);
  if (((fVar7 == INFINITY) || (fVar7 == 0.0)) || (fVar7 == 1.0)) {
    if ((int)param_2 < 0) {
      fVar8 = 1.0 / fVar8;
    }
    if (-1 < (int)param_1) {
      return fVar8;
    }
    if (fVar7 == 1.0 && iVar6 == 0) {
      return (fVar8 - fVar8) / (fVar8 - fVar8);
    }
    if (iVar6 != 1) {
      return fVar8;
    }
    return -fVar8;
  }
  if ((int)param_1 < 0 && iVar6 == 0) {
    return (param_1 - param_1) / (param_1 - param_1);
  }
  if ((uint)fVar13 < 0x4d000001) {
    iVar4 = 0;
    if ((uint)fVar7 < 0x800000) {
      iVar4 = -0x18;
      fVar7 = fVar8 * 16777216.0;
    }
    uVar3 = (uint)fVar7 & 0x7fffff;
    iVar4 = iVar4 + -0x7f + ((int)fVar7 >> 0x17);
    fVar7 = (float)(uVar3 | 0x3f800000);
    if (uVar3 < 0x1cc472) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
      if (0x5db3d6 < uVar3) {
        iVar2 = 0;
        fVar7 = (float)((int)fVar7 - 0x800000);
        iVar4 = iVar4 + 1;
      }
    }
    iVar1 = iVar2 * 4;
    fVar9 = *(float *)(&DAT_00402450 + iVar1);
    fVar11 = 1.0 / (fVar7 + fVar9);
    fVar14 = (fVar7 - fVar9) * fVar11;
    fVar13 = (float)((uint)fVar14 & 0xfffff000);
    fVar8 = (float)(((int)fVar7 >> 1 | 0x20000000U) + iVar2 * 0x200000 + 0x40000);
    fVar12 = fVar14 * fVar14;
    fVar11 = fVar11 * (((fVar7 - fVar9) - fVar13 * fVar8) - fVar13 * (fVar7 - (fVar8 - fVar9)));
    fVar8 = fVar12 * fVar12 *
            (fVar12 * (fVar12 * (fVar12 * (fVar12 * (fVar12 * 0.20697501 + 0.23066075) + 0.27272812)
                                + 0.33333334) + 0.42857143) + 0.6) + fVar11 * (fVar13 + fVar14);
    fVar7 = (float)((uint)(fVar13 * fVar13 + 3.0 + fVar8) & 0xfffff000);
    fVar11 = fVar11 * fVar7 + (fVar8 - ((fVar7 - 3.0) - fVar13 * fVar13)) * fVar14;
    fVar8 = (float)((uint)(fVar13 * fVar7 + fVar11) & 0xfffff000);
    fVar13 = fVar8 * 4.7017384e-06 + (fVar11 - (fVar8 - fVar13 * fVar7)) * 0.9617967 +
             *(float *)(&DAT_00402460 + iVar1);
    fVar7 = (float)((uint)(fVar8 * 0.961792 + fVar13 + *(float *)(&DAT_00402458 + iVar1) +
                          (float)iVar4) & 0xfffff000);
    fVar13 = fVar13 - (((fVar7 - (float)iVar4) - *(float *)(&DAT_00402458 + iVar1)) -
                      fVar8 * 0.961792);
  }
  else {
    if ((uint)fVar7 < 0x3f7ffff8) {
      if ((int)param_2 < 0) {
        return DAT_004024d4;
      }
      return 0.0;
    }
    if (0x3f800007 < (uint)fVar7) {
      if (0 < (int)param_2) {
        return DAT_004024d4;
      }
      return 0.0;
    }
    fVar8 = param_1 - 1.0;
    fVar13 = fVar8 * 7.0526075e-06 -
             fVar8 * fVar8 * (0.5 - fVar8 * (0.33333334 - fVar8 * 0.25)) * 1.442695;
    fVar7 = (float)((uint)(fVar8 * 1.442688 + fVar13) & 0xfffff000);
    fVar13 = fVar13 - (fVar7 - fVar8 * 1.442688);
  }
  fVar8 = 1.0;
  if ((int)param_1 < 0 && iVar6 == 1) {
    fVar8 = -1.0;
  }
  fVar11 = (float)((uint)fVar10 & 0xfffff000) * fVar7;
  fVar7 = (fVar10 - (float)((uint)fVar10 & 0xfffff000)) * fVar7 + fVar10 * fVar13;
  fVar13 = fVar7 + fVar11;
  if ((int)fVar13 < 0x43000001) {
    if (fVar13 == 128.0) {
      if (fVar7 + 4.2995666e-08 <= 128.0 - fVar11) {
LAB_002a12d4:
        fVar10 = fVar13;
        iVar6 = 0;
        if (0x3f000000 < (uint)ABS(fVar13)) {
          uVar5 = (int)fVar13 + (0x800000 >> (((int)ABS(fVar13) >> 0x17) - 0x7eU & 0x1f));
          uVar3 = ((int)(uVar5 & 0x7fffffff) >> 0x17) - 0x7f;
          fVar11 = fVar11 - (float)(uVar5 & ~(0x7fffff >> (uVar3 & 0x1f)));
          iVar6 = (int)(uVar5 & 0x7fffff | 0x800000) >> (0x17 - uVar3 & 0x1f);
          fVar10 = fVar7 + fVar11;
          if ((int)fVar13 < 0) {
            iVar6 = -iVar6;
          }
        }
        fVar10 = (float)((uint)fVar10 & 0xfffff000);
        fVar13 = (fVar7 - (fVar10 - fVar11)) * 0.6931472 + fVar10 * 1.4286065e-06;
        fVar11 = fVar10 * 0.69314575 + fVar13;
        fVar7 = fVar11 * fVar11;
        fVar13 = fVar13 - (fVar11 - fVar10 * 0.69314575);
        fVar7 = fVar11 - fVar7 * (fVar7 * (fVar7 * (fVar7 * (fVar7 * 4.138137e-08 + -1.6533902e-06)
                                                   + 6.613756e-05) + -0.0027777778) + 0.16666667);
        fVar13 = 1.0 - (((fVar11 * fVar7) / (fVar7 - 2.0) - (fVar13 + fVar11 * fVar13)) - fVar11);
        fVar7 = (float)((int)fVar13 + iVar6 * 0x800000);
        if ((int)fVar7 >> 0x17 < 1) {
          fVar7 = (float)FUN_002a4230(fVar13,iVar6);
        }
        return fVar8 * fVar7;
      }
      fVar7 = 1e+30;
      fVar8 = fVar8 * 1e+30;
    }
    else {
      if (((uint)ABS(fVar13) < 0x43160001) && ((fVar13 != -150.0 || (-150.0 - fVar11 < fVar7))))
      goto LAB_002a12d4;
      fVar7 = 1e-30;
      fVar8 = fVar8 * 1e-30;
    }
  }
  else {
    fVar7 = 1e+30;
    fVar8 = fVar8 * 1e+30;
  }
  return fVar8 * fVar7;
}


// ==== FUN_002a14b8 @ 002a14b8 ====

int FUN_002a14b8(float param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float afStack_50 [4];
  
  pfVar3 = afStack_50;
  afStack_50[2] = ABS(param_1);
  pfVar4 = (float *)param_2;
  if ((uint)afStack_50[2] < 0x3f490fd9) {
    *pfVar4 = param_1;
    pfVar4[1] = 0.0;
    return 0;
  }
  if ((uint)afStack_50[2] < 0x4016cbe4) {
    if (0 < (int)param_1) {
      fVar9 = param_1 - 1.5707855;
      if (((uint)param_1 & 0x7ffffff0) == 0x3fc90fd0) {
        fVar6 = 6.0771e-11;
        fVar9 = fVar9 - 1.0804273e-05;
        fVar5 = fVar9 - 6.0771e-11;
      }
      else {
        fVar6 = 1.0804334e-05;
        fVar5 = fVar9 - 1.0804334e-05;
      }
      *pfVar4 = fVar5;
      pfVar4[1] = (fVar9 - fVar5) - fVar6;
      return 1;
    }
    fVar9 = param_1 + 1.5707855;
    if (((uint)param_1 & 0x7ffffff0) == 0x3fc90fd0) {
      fVar6 = 6.0771e-11;
      fVar9 = fVar9 + 1.0804273e-05;
      fVar5 = fVar9 + 6.0771e-11;
    }
    else {
      fVar6 = 1.0804334e-05;
      fVar5 = fVar9 + 1.0804334e-05;
    }
    *pfVar4 = fVar5;
    pfVar4[1] = (fVar9 - fVar5) + fVar6;
    return -1;
  }
  iVar2 = (int)afStack_50[2] >> 0x17;
  if (0x43490f80 < (uint)afStack_50[2]) {
    if (0x7f7fffff < (uint)afStack_50[2]) {
      *pfVar4 = param_1 - param_1;
      pfVar4[1] = param_1 - param_1;
      return 0;
    }
    afStack_50[2] = (float)((int)afStack_50[2] + (iVar2 + -0x86) * -0x800000);
    iVar7 = 1;
    do {
      iVar7 = iVar7 + -1;
      *pfVar3 = (float)(int)afStack_50[2];
      pfVar3 = pfVar3 + 1;
      afStack_50[2] = (afStack_50[2] - (float)(int)afStack_50[2]) * 256.0;
    } while (-1 < iVar7);
    iVar7 = 3;
    if (afStack_50[2] == 0.0) {
      iVar1 = 2;
      do {
        iVar7 = iVar1;
        iVar1 = iVar7 + -1;
      } while (afStack_50[iVar7 + -1] == 0.0);
    }
    iVar7 = FUN_002a2ab8(afStack_50,param_2,iVar2 + -0x86,iVar7,2,0x4024d8);
    if (-1 < (int)param_1) {
      return iVar7;
    }
    fVar9 = *pfVar4;
    fVar6 = pfVar4[1];
    goto LAB_002a186c;
  }
  fVar5 = (float)FUN_0029db10();
  iVar7 = (int)(fVar5 * 0.6366198 + 0.5);
  fVar9 = (float)iVar7;
  fVar6 = fVar9 * 1.0804334e-05;
  fVar5 = fVar5 - fVar9 * 1.5707855;
  if ((iVar7 < 0x20) &&
     (((uint)param_1 & 0x7fffff00) != *(uint *)(&DAT_004027f0 + (iVar7 + -1) * 4))) {
    *pfVar4 = fVar5 - fVar6;
LAB_002a1768:
    fVar9 = *pfVar4;
    fVar8 = fVar5;
  }
  else {
    *pfVar4 = fVar5 - fVar6;
    if ((int)(iVar2 - ((uint)(fVar5 - fVar6) >> 0x17 & 0xff)) < 9) {
      fVar9 = *pfVar4;
      fVar8 = fVar5;
    }
    else {
      fVar8 = fVar5 - fVar9 * 1.0804273e-05;
      fVar6 = fVar9 * 6.0771e-11 - ((fVar5 - fVar8) - fVar9 * 1.0804273e-05);
      *pfVar4 = fVar8 - fVar6;
      if (0x19 < (int)(iVar2 - ((uint)(fVar8 - fVar6) >> 0x17 & 0xff))) {
        fVar5 = fVar8 - fVar9 * 6.0770944e-11;
        fVar6 = fVar9 * 6.123234e-17 - ((fVar8 - fVar5) - fVar9 * 6.0770944e-11);
        *pfVar4 = fVar5 - fVar6;
        goto LAB_002a1768;
      }
      fVar9 = *pfVar4;
    }
  }
  fVar6 = (fVar8 - fVar9) - fVar6;
  pfVar4[1] = fVar6;
  if (-1 < (int)param_1) {
    return iVar7;
  }
LAB_002a186c:
  *pfVar4 = -fVar9;
  pfVar4[1] = -fVar6;
  return -iVar7;
}


// ==== FUN_002a1898 @ 002a1898 ====

float FUN_002a1898(float param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    return param_1 * param_1 + param_1;
  }
  iVar4 = (int)param_1 >> 0x17;
  if (0 < (int)param_1) {
LAB_002a18fc:
    if (iVar4 == 0) {
      iVar4 = 0;
      if (((uint)param_1 & 0x800000) == 0) {
        do {
          param_1 = (float)((int)param_1 << 1);
          iVar4 = iVar4 + 1;
        } while (((uint)param_1 & 0x800000) == 0);
        iVar4 = 1 - iVar4;
      }
      else {
        iVar4 = 1;
      }
    }
    iVar3 = (((uint)param_1 & 0x7fffff | 0x800000) << (iVar4 - 0x7fU & 1)) << 1;
    iVar6 = 0;
    uVar2 = 0;
    uVar5 = 0x1000000;
    do {
      iVar1 = iVar6 + uVar5;
      if (iVar1 <= iVar3) {
        iVar3 = iVar3 - iVar1;
        iVar6 = iVar1 + uVar5;
        uVar2 = uVar2 + uVar5;
      }
      uVar5 = uVar5 >> 1;
      iVar3 = iVar3 << 1;
    } while (uVar5 != 0);
    if (iVar3 != 0) {
      uVar2 = uVar2 + (uVar2 & 1);
    }
    return (float)(((int)uVar2 >> 1) + 0x3f000000 + ((int)(iVar4 - 0x7fU) >> 1) * 0x800000);
  }
  if (ABS(param_1) != 0.0) {
    if (-1 < (int)param_1) goto LAB_002a18fc;
    param_1 = (param_1 - param_1) / (param_1 - param_1);
  }
  return param_1;
}


// ==== FUN_002a19d0 @ 002a19d0 ====

undefined8 FUN_002a19d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = param_1 >> 0x20 & 0x7fffffff;
  if ((uVar6 < 0x3e400000) && (lVar1 = FUN_00291b00(), lVar1 == 0)) {
    uVar2 = 0x3ff0000000000000;
  }
  else {
    uVar2 = FUN_002914d0(param_1,param_1);
    uVar3 = FUN_002914d0(uVar2,DAT_004028d0);
    uVar3 = FUN_00291410(uVar3,DAT_004028d8);
    uVar3 = FUN_002914d0(uVar2,uVar3);
    uVar3 = FUN_00291410(uVar3,DAT_004028e0);
    uVar3 = FUN_002914d0(uVar2,uVar3);
    uVar3 = FUN_00291410(uVar3,DAT_004028e8);
    uVar3 = FUN_002914d0(uVar2,uVar3);
    uVar3 = FUN_00291410(uVar3,DAT_004028f0);
    uVar3 = FUN_002914d0(uVar2,uVar3);
    uVar3 = FUN_00291410(uVar3,DAT_004028f8);
    uVar3 = FUN_002914d0(uVar2,uVar3);
    if (uVar6 < 0x3fd33333) {
      uVar4 = FUN_002914d0(uVar2,0x3fe0000000000000);
      uVar2 = FUN_002914d0(uVar2,uVar3);
      uVar3 = FUN_002914d0(param_1,param_2);
      uVar2 = FUN_00291468(uVar2,uVar3);
      uVar2 = FUN_00291468(uVar4,uVar2);
      uVar5 = 0x3ff0000000000000;
    }
    else {
      if (uVar6 < 0x3fe90001) {
        lVar1 = (long)((int)uVar6 + -0x200000) << 0x20;
      }
      else {
        lVar1 = 0x3fd2000000000000;
      }
      uVar4 = FUN_002914d0(uVar2,0x3fe0000000000000);
      uVar4 = FUN_00291468(uVar4,lVar1);
      uVar5 = FUN_00291468(0x3ff0000000000000,lVar1);
      uVar2 = FUN_002914d0(uVar2,uVar3);
      uVar3 = FUN_002914d0(param_1,param_2);
      uVar2 = FUN_00291468(uVar2,uVar3);
      uVar2 = FUN_00291468(uVar4,uVar2);
    }
    uVar2 = FUN_00291468(uVar5,uVar2);
  }
  return uVar2;
}


// ==== FUN_002a1c20 @ 002a1c20 ====

/* WARNING: Removing unreachable block (ram,0x002a1c90) */

uint FUN_002a1c20(int param_1,undefined8 *param_2,int param_3,int param_4,long param_5,int param_6)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  uint auStack_310 [20];
  undefined8 auStack_2c0 [20];
  undefined8 auStack_220 [20];
  undefined1 auStack_180 [160];
  int iStack_e0;
  undefined8 *puStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined1 *puStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  
  iStack_d0 = (param_3 + -3) / 0x18;
  iStack_d8 = (int)param_5;
  param_4 = param_4 + -1;
  iVar17 = 0;
  iStack_e0 = param_1;
  iVar15 = *(int *)(&DAT_00402900 + iStack_d8 * 4);
  puStack_dc = param_2;
  iStack_cc = iVar15;
  iStack_d4 = param_6;
  if (iStack_d0 < 0) {
    iStack_d0 = 0;
  }
  iVar14 = iStack_d0 - param_4;
  iStack_c8 = param_3 - (iStack_d0 * 0x18 + 0x18);
  if (param_4 + iVar15 < 0) {
    puStack_bc = auStack_180;
    uStack_b0 = (uint)(iVar15 < 0);
    uStack_b4 = (uint)(iStack_d8 < 3);
  }
  else {
    puStack_bc = auStack_180;
    uStack_b4 = (uint)(param_5 < 3);
    uStack_b0 = (uint)(iVar15 < 0);
    do {
      if (iVar14 < 0) {
        auStack_2c0[iVar17] = 0;
      }
      else {
        uVar6 = FUN_00291a48(*(undefined4 *)(iVar14 * 4 + iStack_d4));
        auStack_2c0[iVar17] = uVar6;
      }
      iVar17 = iVar17 + 1;
      iVar14 = iVar14 + 1;
    } while (iVar17 <= param_4 + iVar15);
  }
  iVar15 = iStack_cc;
  if (uStack_b0 == 0) {
    iVar17 = 0;
    do {
      iVar15 = 0;
      uVar6 = 0;
      if (-1 < param_4) {
        do {
          iVar14 = (param_4 + iVar17) - iVar15;
          iVar10 = iVar15 * 8;
          iVar15 = iVar15 + 1;
          uVar7 = FUN_002914d0(*(undefined8 *)(iVar10 + iStack_e0),auStack_2c0[iVar14]);
          uVar6 = FUN_00291410(uVar6,uVar7);
        } while (iVar15 <= param_4);
      }
      iVar14 = iVar17 + 1;
      *(undefined8 *)(puStack_bc + iVar17 * 8) = uVar6;
      iVar17 = iVar14;
      iVar15 = iStack_cc;
    } while (iVar14 <= iStack_cc);
  }
LAB_002a1e00:
  uVar6 = *(undefined8 *)(puStack_bc + iVar15 * 8);
  if (0 < iVar15) {
    puVar16 = (undefined8 *)(puStack_bc + iVar15 * 8 + -8);
    puVar11 = auStack_310;
    iVar17 = iVar15;
    do {
      iVar17 = iVar17 + -1;
      uVar7 = FUN_002914d0(uVar6,0x3e70000000000000);
      uVar7 = FUN_00291b00(uVar7);
      uVar7 = FUN_00291a48(uVar7);
      uVar8 = FUN_002914d0(uVar7,0x4170000000000000);
      uVar6 = FUN_00291468(uVar6,uVar8);
      uVar3 = FUN_00291b00(uVar6);
      uVar6 = *puVar16;
      *puVar11 = uVar3;
      puVar16 = puVar16 + -1;
      uVar6 = FUN_00291410(uVar6,uVar7);
      puVar11 = puVar11 + 1;
    } while (0 < iVar17);
  }
  uVar6 = FUN_002a4028(uVar6,iStack_c8);
  uVar7 = FUN_002914d0(uVar6,0x3fc0000000000000);
  uVar7 = FUN_002a3bf0(uVar7);
  uVar7 = FUN_002914d0(uVar7,0x4020000000000000);
  uVar6 = FUN_00291468(uVar6,uVar7);
  uVar4 = FUN_00291b00(uVar6);
  uVar7 = FUN_00291a48(uVar4);
  uVar6 = FUN_00291468(uVar6,uVar7);
  if (iStack_c8 < 1) {
    if (iStack_c8 == 0) {
      iStack_c4 = (int)auStack_310[iVar15 + -1] >> 0x17;
    }
    else {
      iStack_c4 = 2;
      lVar9 = FUN_002919f8(uVar6,0x3fe0000000000000);
      if (lVar9 < 0) {
        iStack_c4 = 0;
      }
    }
  }
  else {
    uVar5 = auStack_310[iVar15 + -1];
    iVar17 = (int)uVar5 >> (0x18U - iStack_c8 & 0x1f);
    uVar4 = uVar4 + iVar17;
    uVar5 = uVar5 - (iVar17 << (0x18U - iStack_c8 & 0x1f));
    iStack_c4 = (int)uVar5 >> (0x17U - iStack_c8 & 0x1f);
    auStack_310[iVar15 + -1] = uVar5;
  }
  if (0 < iStack_c4) {
    uVar4 = uVar4 + 1;
    bVar2 = false;
    puVar11 = auStack_310;
    iVar17 = iVar15;
    if (0 < iVar15) {
      do {
        iVar14 = *puVar11;
        if (bVar2) {
          iVar10 = 0xffffff - iVar14;
LAB_002a1fe4:
          *puVar11 = iVar10;
        }
        else {
          iVar10 = 0x1000000 - iVar14;
          if (iVar14 != 0) {
            bVar2 = true;
            goto LAB_002a1fe4;
          }
        }
        iVar17 = iVar17 + -1;
        puVar11 = puVar11 + 1;
      } while (iVar17 != 0);
    }
    if (0 < iStack_c8) {
      if (iStack_c8 == 1) {
        uVar5 = 0x7f0000;
      }
      else {
        if (iStack_c8 != 2) goto LAB_002a204c;
        uVar5 = 0x3f0000;
      }
      auStack_310[iVar15 + -1] = auStack_310[iVar15 + -1] & (uVar5 | 0xffff);
    }
LAB_002a204c:
    if ((iStack_c4 == 2) && (uVar6 = FUN_00291468(0x3ff0000000000000,uVar6), bVar2)) {
      uVar7 = FUN_002a4028(0x3ff0000000000000,iStack_c8);
      uVar6 = FUN_00291468(uVar6,uVar7);
    }
  }
  lVar9 = FUN_002919f8(uVar6,0);
  if (lVar9 == 0) {
    iVar17 = iVar15 + -1;
    uVar5 = 0;
    if (iStack_cc <= iVar17) {
      puVar11 = auStack_310 + iVar17;
      do {
        uVar1 = *puVar11;
        iVar17 = iVar17 + -1;
        puVar11 = puVar11 + -1;
        uVar5 = uVar5 | uVar1;
      } while (iStack_cc <= iVar17);
    }
    if (uVar5 != 0) goto LAB_002a2214;
    iStack_c0 = 1;
    if (auStack_310[iStack_cc + -1] == 0) {
      do {
        iStack_c0 = iStack_c0 + 1;
      } while (auStack_310[iStack_cc - iStack_c0] == 0);
      iStack_c0 = iVar15 + iStack_c0;
    }
    else {
      iStack_c0 = iVar15 + 1;
    }
    iVar17 = iVar15 + 1;
    iVar15 = iStack_c0;
    if (iVar17 <= iStack_c0) {
      do {
        iVar15 = 0;
        uVar7 = 0;
        uVar6 = FUN_00291a48(*(undefined4 *)((iStack_d0 + iVar17) * 4 + iStack_d4));
        auStack_2c0[param_4 + iVar17] = uVar6;
        if (-1 < param_4) {
          do {
            iVar14 = (param_4 + iVar17) - iVar15;
            iVar10 = iVar15 * 8;
            iVar15 = iVar15 + 1;
            uVar6 = FUN_002914d0(*(undefined8 *)(iVar10 + iStack_e0),auStack_2c0[iVar14]);
            uVar7 = FUN_00291410(uVar7,uVar6);
          } while (iVar15 <= param_4);
        }
        iVar14 = iVar17 + 1;
        *(undefined8 *)(puStack_bc + iVar17 * 8) = uVar7;
        iVar15 = iStack_c0;
        iVar17 = iVar14;
      } while (iVar14 <= iStack_c0);
    }
    goto LAB_002a1e00;
  }
LAB_002a2214:
  lVar9 = FUN_002919f8(uVar6,0);
  if (lVar9 == 0) {
    iVar15 = iVar15 + -1;
    iStack_c8 = iStack_c8 + -0x18;
    uStack_b8 = uVar4 & 7;
    if (auStack_310[iVar15] == 0) {
      do {
        iVar15 = iVar15 + -1;
        iStack_c8 = iStack_c8 + -0x18;
      } while (auStack_310[iVar15] == 0);
    }
  }
  else {
    uVar6 = FUN_002a4028(uVar6,-iStack_c8);
    lVar9 = FUN_002919f8(uVar6,0x4170000000000000);
    if (lVar9 < 0) {
      iVar17 = iVar15 << 2;
      uStack_b8 = uVar4 & 7;
    }
    else {
      uStack_b8 = uVar4 & 7;
      iStack_c8 = iStack_c8 + 0x18;
      uVar7 = FUN_002914d0(uVar6,0x3e70000000000000);
      uVar7 = FUN_00291b00(uVar7);
      uVar7 = FUN_00291a48(uVar7);
      puVar11 = auStack_310 + iVar15;
      iVar15 = iVar15 + 1;
      uVar8 = FUN_002914d0(uVar7,0x4170000000000000);
      uVar6 = FUN_00291468(uVar6,uVar8);
      uVar4 = FUN_00291b00(uVar6);
      iVar17 = iVar15 * 4;
      *puVar11 = uVar4;
      uVar6 = uVar7;
    }
    uVar3 = FUN_00291b00(uVar6);
    *(undefined4 *)((int)auStack_310 + iVar17) = uVar3;
  }
  uVar7 = FUN_002a4028(0x3ff0000000000000,iStack_c8);
  iVar17 = iVar15;
  uVar6 = auStack_220[0];
  if (-1 < iVar15) {
    puVar16 = (undefined8 *)(puStack_bc + iVar15 * 8);
    puVar11 = auStack_310 + iVar15;
    iVar14 = iVar15;
    do {
      uVar4 = *puVar11;
      iVar14 = iVar14 + -1;
      puVar11 = puVar11 + -1;
      uVar6 = FUN_00291a48(uVar4);
      uVar6 = FUN_002914d0(uVar7,uVar6);
      *puVar16 = uVar6;
      uVar7 = FUN_002914d0(uVar7,0x3e70000000000000);
      puVar16 = puVar16 + -1;
      uVar6 = auStack_220[0];
    } while (-1 < iVar14);
  }
  do {
    auStack_220[0] = uVar6;
    if (iVar17 < 0) {
      if (uStack_b4 == 0) {
        if (iStack_d8 == 3) {
          uStack_b4 = 0;
          iStack_d8 = 3;
          iVar17 = iVar15;
          while (iVar14 = iVar15, uVar6 = auStack_220[1], 0 < iVar17) {
            uVar8 = auStack_220[iVar17];
            uVar7 = auStack_220[iVar17 + -1];
            uVar6 = FUN_00291410(uVar7,uVar8);
            uVar7 = FUN_00291468(uVar7,uVar6);
            uVar7 = FUN_00291410(uVar8,uVar7);
            auStack_220[iVar17] = uVar7;
            auStack_220[iVar17 + -1] = uVar6;
            iVar17 = iVar17 + -1;
          }
          while (1 < iVar14) {
            uVar8 = auStack_220[iVar14];
            uVar7 = auStack_220[iVar14 + -1];
            auStack_220[1] = uVar6;
            uVar6 = FUN_00291410(uVar7,uVar8);
            uVar7 = FUN_00291468(uVar7,uVar6);
            uVar7 = FUN_00291410(uVar8,uVar7);
            auStack_220[iVar14] = uVar7;
            auStack_220[iVar14 + -1] = uVar6;
            iVar14 = iVar14 + -1;
            uVar6 = auStack_220[1];
          }
          uVar7 = 0;
          for (; 1 < iVar15; iVar15 = iVar15 + -1) {
            uVar7 = FUN_00291410(uVar7,auStack_220[iVar15]);
          }
          if (iStack_c4 == 0) {
            puStack_dc[2] = uVar7;
            *puStack_dc = auStack_220[0];
            puStack_dc[1] = uVar6;
          }
          else {
            uVar8 = FUN_00291468(0,auStack_220[0]);
            *puStack_dc = uVar8;
            uVar6 = FUN_00291468(0,uVar6);
            puStack_dc[1] = uVar6;
            uVar6 = FUN_00291468(0,uVar7);
            puStack_dc[2] = uVar6;
          }
        }
      }
      else if (iStack_d8 < 1) {
        if (iStack_d8 == 0) {
          uVar6 = 0;
          iStack_d8 = 0;
          for (; -1 < iVar15; iVar15 = iVar15 + -1) {
            uVar6 = FUN_00291410(uVar6,auStack_220[iVar15]);
          }
          *puStack_dc = uVar6;
          if (iStack_c4 != 0) {
            uVar6 = FUN_00291468(0,uVar6);
            *puStack_dc = uVar6;
          }
        }
      }
      else {
        uVar7 = 0;
        for (iVar17 = iVar15; -1 < iVar17; iVar17 = iVar17 + -1) {
          uVar7 = FUN_00291410(uVar7,auStack_220[iVar17]);
        }
        *puStack_dc = uVar7;
        if (iStack_c4 != 0) {
          uVar8 = FUN_00291468(0,uVar7);
          *puStack_dc = uVar8;
        }
        uVar6 = FUN_00291468(uVar6,uVar7);
        iVar17 = 1;
        if (0 < iVar15) {
          iVar14 = 8;
          do {
            iVar17 = iVar17 + 1;
            uVar6 = FUN_00291410(uVar6,*(undefined8 *)((int)auStack_220 + iVar14));
            iVar14 = iVar17 * 8;
          } while (iVar17 <= iVar15);
        }
        puStack_dc[1] = uVar6;
        if (iStack_c4 != 0) {
          uVar6 = FUN_00291468(0,uVar6);
          puStack_dc[1] = uVar6;
        }
      }
      return uStack_b8;
    }
    uVar6 = 0;
    iVar14 = 0;
    if (uStack_b0 == 0) {
      iVar10 = iVar15 - iVar17;
      if (iVar10 < 0) goto LAB_002a244c;
      do {
        iVar12 = iVar17 + iVar14;
        iVar13 = iVar14 * 8;
        iVar14 = iVar14 + 1;
        uVar7 = FUN_002914d0(*(undefined8 *)(&DAT_00402910 + iVar13),
                             *(undefined8 *)(puStack_bc + iVar12 * 8));
        uVar6 = FUN_00291410(uVar6,uVar7);
        if (iStack_cc < iVar14) goto LAB_002a244c;
        iVar12 = iVar10 * 8;
      } while (iVar14 <= iVar10);
    }
    else {
      iVar10 = iVar15 - iVar17;
LAB_002a244c:
      iVar12 = iVar10 << 3;
    }
    *(undefined8 *)((int)auStack_220 + iVar12) = uVar6;
    iVar17 = iVar17 + -1;
    uVar6 = auStack_220[0];
  } while( true );
}


// ==== FUN_002a2788 @ 002a2788 ====

long FUN_002a2788(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((0x3e3fffff < (param_1 >> 0x20 & 0x7fffffffU)) || (lVar1 = FUN_00291b00(param_1), lVar1 != 0))
  {
    uVar2 = FUN_002914d0(param_1,param_1);
    uVar3 = FUN_002914d0(uVar2,param_1);
    uVar4 = FUN_002914d0(uVar2,DAT_004029a8);
    uVar4 = FUN_00291410(uVar4,DAT_004029b0);
    uVar4 = FUN_002914d0(uVar2,uVar4);
    uVar4 = FUN_00291410(uVar4,DAT_004029b8);
    uVar4 = FUN_002914d0(uVar2,uVar4);
    uVar4 = FUN_00291410(uVar4,DAT_004029c0);
    uVar4 = FUN_002914d0(uVar2,uVar4);
    uVar4 = FUN_00291410(uVar4,DAT_004029c8);
    if (param_3 == 0) {
      uVar2 = FUN_002914d0(uVar2,uVar4);
      uVar2 = FUN_00291410(uVar2,DAT_004029d0);
      uVar2 = FUN_002914d0(uVar3,uVar2);
      param_1 = FUN_00291410(param_1,uVar2);
    }
    else {
      uVar5 = FUN_002914d0(param_2,0x3fe0000000000000);
      uVar4 = FUN_002914d0(uVar3,uVar4);
      uVar4 = FUN_00291468(uVar5,uVar4);
      uVar2 = FUN_002914d0(uVar2,uVar4);
      uVar2 = FUN_00291468(uVar2,param_2);
      uVar3 = FUN_002914d0(uVar3,DAT_004029d8);
      uVar2 = FUN_00291468(uVar2,uVar3);
      param_1 = FUN_00291468(param_1,uVar2);
    }
  }
  return param_1;
}


// ==== FUN_002a2960 @ 002a2960 ====

float FUN_002a2960(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = ABS(param_1);
  if (((uint)fVar1 < 0x32000000) && ((int)param_1 == 0)) {
    return 1.0;
  }
  fVar3 = param_1 * param_1;
  fVar2 = fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * -1.1359648e-11 + 2.0875723e-09) +
                                             -2.7557314e-07) + 2.4801588e-05) + -0.0013888889) +
                  0.041666668);
  if (0x3e999999 < (uint)fVar1) {
    if ((uint)fVar1 < 0x3f480001) {
      fVar1 = (float)((int)fVar1 - 0x1000000);
    }
    else {
      fVar1 = 0.28125;
    }
    return (1.0 - fVar1) - ((fVar3 * 0.5 - fVar1) - (fVar3 * fVar2 - param_1 * param_2));
  }
  return 1.0 - (fVar3 * 0.5 - (fVar3 * fVar2 - param_1 * param_2));
}


// ==== FUN_002a2ab8 @ 002a2ab8 ====

uint FUN_002a2ab8(int param_1,float *param_2,int param_3,int param_4,long param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint auStack_210 [20];
  float afStack_1c0 [20];
  float afStack_170 [19];
  float afStack_124 [21];
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  
  iVar13 = param_3 + 4;
  if (-1 < param_3 + -3) {
    iVar13 = param_3 + -3;
  }
  iStack_cc = (int)param_5;
  iVar13 = iVar13 >> 3;
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  param_4 = param_4 + -1;
  param_3 = param_3 + (iVar13 + 1) * -8;
  iVar8 = iVar13 - param_4;
  iVar9 = 0;
  iVar10 = *(int *)(&DAT_004029e0 + iStack_cc * 4);
  iStack_d0 = param_1;
  iStack_c8 = param_6;
  if (param_4 + iVar10 < 0) {
    uStack_bc = (uint)(iVar10 < 0);
    uStack_c0 = (uint)(iStack_cc < 3);
  }
  else {
    uStack_bc = (uint)(iVar10 < 0);
    uStack_c0 = (uint)(param_5 < 3);
    do {
      if (iVar8 < 0) {
        afStack_1c0[iVar9] = 0.0;
      }
      else {
        afStack_1c0[iVar9] = (float)*(int *)(iVar8 * 4 + iStack_c8);
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar9 <= param_4 + iVar10);
  }
  iVar8 = iVar10;
  if (uStack_bc == 0) {
    iVar9 = 0;
    do {
      fVar17 = 0.0;
      iVar12 = 0;
      if (-1 < param_4) {
        do {
          iVar2 = (param_4 + iVar9) - iVar12;
          iVar4 = iVar12 * 4;
          iVar12 = iVar12 + 1;
          fVar17 = fVar17 + *(float *)(iVar4 + iStack_d0) * afStack_1c0[iVar2];
        } while (iVar12 <= param_4);
      }
      iVar12 = iVar9 + 1;
      afStack_124[iVar9 + 1] = fVar17;
      iVar9 = iVar12;
    } while (iVar12 <= iVar10);
  }
LAB_002a2c54:
  fVar17 = afStack_124[iVar8 + 1];
  if (0 < iVar8) {
    pfVar7 = afStack_124 + iVar8;
    puVar5 = auStack_210;
    iVar9 = iVar8;
    do {
      fVar14 = *pfVar7;
      pfVar7 = pfVar7 + -1;
      iVar9 = iVar9 + -1;
      fVar15 = fVar17 - (float)(int)(fVar17 * 0.00390625) * 256.0;
      fVar17 = fVar14 + (float)(int)(fVar17 * 0.00390625);
      *puVar5 = (int)fVar15;
      puVar5 = puVar5 + 1;
    } while (0 < iVar9);
  }
  fVar17 = (float)FUN_002a4230(fVar17,param_3);
  iStack_c4 = 0;
  fVar14 = (float)FUN_0029db30(fVar17 * 0.125);
  fVar17 = fVar17 - fVar14 * 8.0;
  uVar16 = (uint)fVar17;
  fVar17 = fVar17 - (float)(int)uVar16;
  if (param_3 < 1) {
    if (param_3 == 0) {
      iStack_c4 = (int)auStack_210[iVar8 + -1] >> 8;
    }
    else if (0.5 <= fVar17) {
      iStack_c4 = 2;
    }
  }
  else {
    uVar3 = auStack_210[iVar8 + -1];
    iVar9 = (int)uVar3 >> (8U - param_3 & 0x1f);
    uVar16 = uVar16 + iVar9;
    uVar3 = uVar3 - (iVar9 << (8U - param_3 & 0x1f));
    iStack_c4 = (int)uVar3 >> (7U - param_3 & 0x1f);
    auStack_210[iVar8 + -1] = uVar3;
  }
  if (0 < iStack_c4) {
    uVar16 = uVar16 + 1;
    bVar11 = false;
    puVar5 = auStack_210;
    iVar9 = iVar8;
    if (0 < iVar8) {
      do {
        iVar12 = *puVar5;
        if (bVar11) {
          iVar2 = 0xff - iVar12;
LAB_002a2dd4:
          *puVar5 = iVar2;
        }
        else {
          iVar2 = 0x100 - iVar12;
          if (iVar12 != 0) {
            bVar11 = true;
            goto LAB_002a2dd4;
          }
        }
        iVar9 = iVar9 + -1;
        puVar5 = puVar5 + 1;
      } while (iVar9 != 0);
    }
    if (0 < param_3) {
      if (param_3 == 1) {
        puVar5 = auStack_210 + iVar8 + -1;
        uVar3 = *puVar5 & 0x7f;
      }
      else {
        if (param_3 != 2) goto LAB_002a2e3c;
        puVar5 = auStack_210 + iVar8 + -1;
        uVar3 = *puVar5 & 0x3f;
      }
      *puVar5 = uVar3;
    }
LAB_002a2e3c:
    if ((iStack_c4 == 2) && (fVar17 = 1.0 - fVar17, bVar11)) {
      fVar14 = (float)FUN_002a4230(param_3);
      fVar17 = fVar17 - fVar14;
    }
  }
  iVar9 = iVar8 + -1;
  if (fVar17 == 0.0) {
    uVar3 = 0;
    if (iVar10 <= iVar9) {
      puVar5 = auStack_210 + iVar9;
      do {
        uVar1 = *puVar5;
        iVar9 = iVar9 + -1;
        puVar5 = puVar5 + -1;
        uVar3 = uVar3 | uVar1;
      } while (iVar10 <= iVar9);
    }
    if (uVar3 != 0) goto LAB_002a2fbc;
    iVar9 = 1;
    if (auStack_210[iVar10 + -1] == 0) {
      do {
        iVar9 = iVar9 + 1;
      } while (auStack_210[iVar10 - iVar9] == 0);
      iVar9 = iVar8 + iVar9;
    }
    else {
      iVar9 = iVar8 + 1;
    }
    iVar12 = iVar8 + 1;
    iVar8 = iVar9;
    if (iVar12 <= iVar9) {
      do {
        iVar2 = 0;
        fVar17 = 0.0;
        afStack_1c0[param_4 + iVar12] = (float)*(int *)((iVar13 + iVar12) * 4 + iStack_c8);
        if (-1 < param_4) {
          do {
            iVar4 = (param_4 + iVar12) - iVar2;
            iVar6 = iVar2 * 4;
            iVar2 = iVar2 + 1;
            fVar17 = fVar17 + *(float *)(iVar6 + iStack_d0) * afStack_1c0[iVar4];
          } while (iVar2 <= param_4);
        }
        iVar2 = iVar12 + 1;
        afStack_124[iVar12 + 1] = fVar17;
        iVar12 = iVar2;
      } while (iVar2 <= iVar9);
    }
    goto LAB_002a2c54;
  }
LAB_002a2fbc:
  if (fVar17 == 0.0) {
    iVar8 = iVar8 + -1;
    uVar3 = auStack_210[iVar8];
    while (param_3 = param_3 + -8, uVar3 == 0) {
      iVar8 = iVar8 + -1;
      uVar3 = auStack_210[iVar8];
    }
  }
  else {
    fVar17 = (float)FUN_002a4230(fVar17,-param_3);
    puVar5 = auStack_210 + iVar8;
    if (256.0 <= fVar17) {
      iVar8 = iVar8 + 1;
      *puVar5 = (int)(fVar17 - (float)(int)(fVar17 * 0.00390625) * 256.0);
      auStack_210[iVar8] = (int)(float)(int)(fVar17 * 0.00390625);
      param_3 = param_3 + 8;
    }
    else {
      auStack_210[iVar8] = (int)fVar17;
    }
  }
  fVar17 = (float)FUN_002a4230(0x3f800000,param_3);
  iVar13 = iVar8;
  if (-1 < iVar8) {
    puVar5 = auStack_210 + iVar8;
    pfVar7 = afStack_124 + iVar8 + 1;
    iVar9 = iVar8;
    do {
      uVar3 = *puVar5;
      iVar9 = iVar9 + -1;
      puVar5 = puVar5 + -1;
      fVar14 = fVar17 * (float)(int)uVar3;
      fVar17 = fVar17 * 0.00390625;
      *pfVar7 = fVar14;
      pfVar7 = pfVar7 + -1;
    } while (-1 < iVar9);
  }
  do {
    if (iVar13 < 0) {
      if (uStack_c0 == 0) {
        iVar13 = iVar8;
        if (iStack_cc == 3) {
          while (iVar10 = iVar8, 0 < iVar13) {
            fVar17 = afStack_170[iVar13];
            fVar14 = afStack_170[iVar13 + -1];
            fVar15 = fVar14 + fVar17;
            afStack_170[iVar13] = fVar17 + (fVar14 - fVar15);
            afStack_170[iVar13 + -1] = fVar15;
            iVar13 = iVar13 + -1;
          }
          while (1 < iVar10) {
            fVar17 = afStack_170[iVar10];
            fVar14 = afStack_170[iVar10 + -1];
            fVar15 = fVar14 + fVar17;
            afStack_170[iVar10] = fVar17 + (fVar14 - fVar15);
            afStack_170[iVar10 + -1] = fVar15;
            iVar10 = iVar10 + -1;
          }
          fVar17 = 0.0;
          for (; 1 < iVar8; iVar8 = iVar8 + -1) {
            fVar17 = fVar17 + afStack_170[iVar8];
          }
          if (iStack_c4 == 0) {
            param_2[2] = fVar17;
            *param_2 = afStack_170[0];
            param_2[1] = afStack_170[1];
          }
          else {
            *param_2 = -afStack_170[0];
            param_2[1] = -afStack_170[1];
            param_2[2] = -fVar17;
          }
        }
      }
      else if (iStack_cc < 1) {
        if (iStack_cc == 0) {
          fVar17 = 0.0;
          if (iVar8 < 0) {
            *param_2 = 0.0;
          }
          else {
            do {
              pfVar7 = afStack_170 + iVar8;
              iVar8 = iVar8 + -1;
              fVar17 = fVar17 + *pfVar7;
            } while (-1 < iVar8);
            *param_2 = fVar17;
          }
          if (iStack_c4 != 0) {
            *param_2 = -fVar17;
          }
        }
      }
      else {
        fVar17 = 0.0;
        iVar13 = iVar8;
        if (iVar8 < 0) {
          *param_2 = 0.0;
        }
        else {
          do {
            iVar10 = iVar13 + -1;
            fVar17 = fVar17 + afStack_170[iVar13];
            iVar13 = iVar10;
          } while (-1 < iVar10);
          *param_2 = fVar17;
        }
        if (iStack_c4 != 0) {
          *param_2 = -fVar17;
        }
        afStack_170[0] = afStack_170[0] - fVar17;
        iVar13 = 1;
        if (0 < iVar8) {
          do {
            pfVar7 = afStack_170 + iVar13;
            iVar13 = iVar13 + 1;
            afStack_170[0] = afStack_170[0] + *pfVar7;
          } while (iVar13 <= iVar8);
        }
        param_2[1] = afStack_170[0];
        if (iStack_c4 != 0) {
          param_2[1] = -afStack_170[0];
        }
      }
      return uVar16 & 7;
    }
    fVar17 = 0.0;
    iVar9 = 0;
    if (uStack_bc == 0) {
      iVar12 = iVar8 - iVar13;
      if (iVar12 < 0) goto LAB_002a3170;
      do {
        iVar2 = iVar13 + iVar9;
        iVar4 = iVar9 * 4;
        iVar9 = iVar9 + 1;
        fVar17 = fVar17 + *(float *)(&DAT_004029f0 + iVar4) * afStack_124[iVar2 + 1];
        if (iVar10 < iVar9) goto LAB_002a3170;
        iVar2 = iVar12 * 4;
      } while (iVar9 <= iVar12);
    }
    else {
      iVar12 = iVar8 - iVar13;
LAB_002a3170:
      iVar2 = iVar12 << 2;
    }
    *(float *)((int)afStack_170 + iVar2) = fVar17;
    iVar13 = iVar13 + -1;
  } while( true );
}


// ==== FUN_002a3408 @ 002a3408 ====

float FUN_002a3408(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((uint)ABS(param_1) < 0x32000000) && ((int)param_1 == 0)) {
    return param_1;
  }
  fVar2 = param_1 * param_1;
  fVar3 = fVar2 * param_1;
  fVar1 = fVar2 * (fVar2 * (fVar2 * (fVar2 * 1.589691e-10 + -2.505076e-08) + 2.7557314e-06) +
                  -0.0001984127) + 0.008333334;
  if (param_3 != 0) {
    return param_1 - ((fVar2 * (param_2 * 0.5 - fVar3 * fVar1) - param_2) - fVar3 * -0.16666667);
  }
  return param_1 + fVar3 * (fVar2 * fVar1 + -0.16666667);
}


// ==== FUN_002a3510 @ 002a3510 ====

float FUN_002a3510(float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = (undefined *)((uint)param_1 & 0x7fffffff);
  if ((&UNK_317fffff < puVar1) || ((int)param_1 != 0)) {
    if (puVar1 < (undefined *)0x3f2ca140) {
      fVar2 = param_1 * param_1;
      fVar3 = param_1;
    }
    else {
      fVar2 = param_1;
      if ((int)param_1 < 0) {
        fVar2 = -param_1;
        param_2 = -param_2;
      }
      fVar3 = 3.7748947e-08 - param_2;
      param_2 = 0.0;
      fVar3 = (0.7853981 - fVar2) + fVar3;
      fVar2 = fVar3 * fVar3;
    }
    fVar5 = fVar2 * fVar2;
    fVar2 = param_2 + fVar2 * (fVar2 * fVar3 *
                               (DAT_00402a44 +
                                fVar5 * (DAT_00402a4c +
                                        fVar5 * (DAT_00402a54 +
                                                fVar5 * (DAT_00402a5c +
                                                        fVar5 * (DAT_00402a64 + fVar5 * DAT_00402a6c
                                                                )))) +
                               fVar2 * (DAT_00402a48 +
                                       fVar5 * (DAT_00402a50 +
                                               fVar5 * (DAT_00402a58 +
                                                       fVar5 * (DAT_00402a60 +
                                                               fVar5 * (DAT_00402a68 +
                                                                       fVar5 * (float)DAT_00402a70))
                                                       )))) + param_2) +
            DAT_00402a40 * fVar2 * fVar3;
    fVar5 = fVar3 + fVar2;
    if (puVar1 < (undefined *)0x3f2ca140) {
      param_1 = fVar5;
      if (param_3 != 1) {
        param_1 = (float)((uint)(-1.0 / fVar5) & 0xfffff000);
        param_1 = param_1 + (-1.0 / fVar5) *
                            (param_1 * (float)((uint)fVar5 & 0xfffff000) + 1.0 +
                            param_1 * (fVar2 - ((float)((uint)fVar5 & 0xfffff000) - fVar3)));
      }
    }
    else {
      fVar4 = (float)(int)param_3;
      fVar3 = fVar3 - ((fVar5 * fVar5) / (fVar5 + fVar4) - fVar2);
      param_1 = (float)(int)(1 - ((int)param_1 >> 0x1e & 2U)) * (fVar4 - (fVar3 + fVar3));
    }
  }
  else if (puVar1 == (undefined *)0x0 && (int)param_3 == -1) {
    fVar2 = (float)FUN_0029db10();
    param_1 = 1.0 / fVar2;
  }
  else if (param_3 != 1) {
    param_1 = -1.0 / param_1;
  }
  return param_1;
}


// ==== FUN_002a37a8 @ 002a37a8 ====

long FUN_002a37a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = param_1 >> 0x20;
  uVar5 = uVar7 & 0x7fffffff;
  if (uVar5 < 0x44100000) {
    if (uVar5 < 0x3fdc0000) {
      iVar6 = -1;
      if (uVar5 < 0x3e200000) {
        uVar2 = FUN_00291410(param_1,DAT_00402b20);
        lVar1 = FUN_002919f8(uVar2,0x3ff0000000000000);
        if (0 < lVar1) {
          return param_1;
        }
        iVar6 = -1;
      }
    }
    else {
      uVar2 = FUN_002a3bb8(param_1);
      if (uVar5 < 0x3ff30000) {
        if (uVar5 < 0x3fe60000) {
          uVar3 = FUN_00291410(uVar2,uVar2);
          iVar6 = 0;
          uVar3 = FUN_00291468(uVar3,0x3ff0000000000000);
          uVar2 = FUN_00291410(uVar2,0x4000000000000000);
        }
        else {
          iVar6 = 1;
          uVar3 = FUN_00291468(uVar2,0x3ff0000000000000);
          uVar2 = FUN_00291410(uVar2,0x3ff0000000000000);
        }
      }
      else if (uVar5 < 0x40038000) {
        iVar6 = 2;
        uVar3 = FUN_00291468(uVar2,0x3ff8000000000000);
        uVar2 = FUN_002914d0(uVar2,0x3ff8000000000000);
        uVar2 = FUN_00291410(uVar2,0x3ff0000000000000);
      }
      else {
        uVar3 = 0xbff0000000000000;
        iVar6 = 3;
      }
      param_1 = FUN_00291778(uVar3,uVar2);
    }
    uVar2 = FUN_002914d0(param_1,param_1);
    uVar3 = FUN_002914d0(uVar2,uVar2);
    uVar4 = FUN_002914d0(uVar3,DAT_00402b08);
    uVar4 = FUN_00291410(DAT_00402af8,uVar4);
    uVar4 = FUN_002914d0(uVar3,uVar4);
    uVar4 = FUN_00291410(DAT_00402ae8,uVar4);
    uVar4 = FUN_002914d0(uVar3,uVar4);
    uVar4 = FUN_00291410(DAT_00402ad8,uVar4);
    uVar4 = FUN_002914d0(uVar3,uVar4);
    uVar4 = FUN_00291410(DAT_00402ac8,uVar4);
    uVar4 = FUN_002914d0(uVar3,uVar4);
    uVar4 = FUN_00291410(DAT_00402ab8,uVar4);
    uVar2 = FUN_002914d0(uVar2,uVar4);
    uVar4 = FUN_002914d0(uVar3,DAT_00402b00);
    uVar4 = FUN_00291410(DAT_00402af0,uVar4);
    uVar4 = FUN_002914d0(uVar3,uVar4);
    uVar4 = FUN_00291410(DAT_00402ae0,uVar4);
    uVar4 = FUN_002914d0(uVar3,uVar4);
    uVar4 = FUN_00291410(DAT_00402ad0,uVar4);
    uVar4 = FUN_002914d0(uVar3,uVar4);
    uVar4 = FUN_00291410(DAT_00402ac0,uVar4);
    uVar3 = FUN_002914d0(uVar3,uVar4);
    if (iVar6 < 0) {
      uVar2 = FUN_00291410(uVar2,uVar3);
      uVar2 = FUN_002914d0(param_1,uVar2);
      lVar1 = FUN_00291468(param_1,uVar2);
    }
    else {
      uVar2 = FUN_00291410(uVar2,uVar3);
      uVar2 = FUN_002914d0(param_1,uVar2);
      uVar2 = FUN_00291468(uVar2,*(undefined8 *)(&UNK_00402a98 + iVar6 * 8));
      uVar2 = FUN_00291468(uVar2,param_1);
      lVar1 = FUN_00291468(*(undefined8 *)(&UNK_00402a78 + iVar6 * 8),uVar2);
      if ((long)uVar7 < 0) {
        lVar1 = FUN_00291468(0,lVar1);
      }
    }
  }
  else if ((uVar5 < 0x7ff00001) && ((uVar5 != 0x7ff00000 || ((int)param_1 == 0)))) {
    if ((long)uVar7 < 1) {
      uVar2 = FUN_00291468(0,DAT_00402a90);
      lVar1 = FUN_00291468(uVar2,DAT_00402ab0);
    }
    else {
      lVar1 = FUN_00291410(DAT_00402a90,DAT_00402ab0);
    }
  }
  else {
    lVar1 = FUN_00291410(param_1,param_1);
  }
  return lVar1;
}


// ==== FUN_002a3bb8 @ 002a3bb8 ====

ulong FUN_002a3bb8(ulong param_1)

{
  return param_1 & 0xffffffff | ((long)param_1 >> 0x20 & 0x7fffffffU) << 0x20;
}


// ==== FUN_002a3bf0 @ 002a3bf0 ====

ulong FUN_002a3bf0(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar7 = (uint)param_1;
  uVar8 = (ulong)(int)uVar7;
  uVar5 = (long)param_1 >> 0x20;
  iVar4 = (int)(param_1 >> 0x20);
  uVar9 = iVar4 >> 0x14 & 0x7ff;
  uVar6 = uVar9 - 0x3ff;
  if ((int)uVar6 < 0x14) {
    if ((int)uVar6 < 0) {
      uVar1 = FUN_00291410(param_1,DAT_00402b30);
      lVar2 = FUN_002919f8(uVar1,0);
      uVar3 = uVar8 << 0x20;
      if (lVar2 < 1) goto LAB_002a3d98;
      if ((long)uVar5 < 0) {
        uVar3 = uVar8 << 0x20;
        if ((uVar5 & 0x7fffffff) == 0 && uVar8 == 0) goto LAB_002a3d98;
        uVar5 = 0xffffffffbff00000;
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        uVar5 = 0;
      }
    }
    else {
      uVar10 = (ulong)(0xfffff >> (uVar6 & 0x1f));
      if ((uVar5 & uVar10) == 0 && uVar8 == 0) {
        return param_1;
      }
      uVar1 = FUN_00291410(param_1,DAT_00402b30);
      lVar2 = FUN_002919f8(uVar1,0);
      uVar3 = uVar8 << 0x20;
      if (lVar2 < 1) goto LAB_002a3d98;
      if ((long)uVar5 < 0) {
        uVar5 = (ulong)(iVar4 + (0x100000 >> (uVar6 & 0x1f)));
      }
      uVar3 = 0;
      uVar5 = uVar5 & ~uVar10;
    }
  }
  else {
    if (0x33 < (int)uVar6) {
      if (uVar6 != 0x400) {
        return param_1;
      }
      uVar5 = FUN_00291410(param_1);
      return uVar5;
    }
    uVar9 = 0xffffffff >> (uVar9 - 0x413 & 0x1f);
    if ((uVar7 & uVar9) == 0) {
      return param_1;
    }
    uVar1 = FUN_00291410(param_1,DAT_00402b30);
    lVar2 = FUN_002919f8(uVar1,0);
    uVar3 = uVar8 << 0x20;
    if (lVar2 < 1) goto LAB_002a3d98;
    uVar3 = uVar8;
    if ((long)uVar5 < 0) {
      if (uVar6 == 0x14) {
        iVar4 = iVar4 + 1;
      }
      else {
        uVar3 = (ulong)(int)(uVar7 + (1 << (0x34 - uVar6 & 0x1f)));
        iVar4 = iVar4 + (uint)(uVar3 < uVar8);
      }
      uVar5 = (ulong)iVar4;
    }
    uVar3 = uVar3 & ~(long)(int)uVar9;
  }
  uVar3 = uVar3 << 0x20;
LAB_002a3d98:
  return uVar5 << 0x20 | uVar3 >> 0x20;
}


// ==== FUN_002a3dc8 @ 002a3dc8 ====

uint FUN_002a3dc8(undefined8 param_1)

{
  return 0x7ff00000 -
         ((uint)((ulong)param_1 >> 0x20) & 0x7fffffff | ((uint)param_1 | -(uint)param_1) >> 0x1f) >>
         0x1f;
}


// ==== FUN_002a3e00 @ 002a3e00 ====

undefined8 FUN_002a3e00(int param_1)

{
  FUN_002919f8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8));
  return 0;
}


// ==== FUN_002a3e28 @ 002a3e28 ====

ulong FUN_002a3e28(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar7 = (uint)param_1;
  uVar8 = (ulong)(int)uVar7;
  uVar6 = (long)param_1 >> 0x20;
  uVar4 = (uint)(param_1 >> 0x20);
  uVar3 = (int)uVar4 >> 0x14 & 0x7ff;
  uVar9 = uVar3 - 0x3ff;
  iVar1 = (int)uVar4 >> 0x1f;
  if ((int)uVar9 < 0x14) {
    if ((int)uVar9 < 0) {
      if ((uVar6 & 0x7fffffff) == 0 && uVar8 == 0) {
        return param_1;
      }
      uVar7 = uVar7 | uVar4 & 0xfffff;
      uVar10 = *(undefined8 *)(&DAT_00402b48 + iVar1 * -8);
      uVar2 = FUN_00291410(uVar10,param_1 & 0xffffffff |
                                  (uVar6 & 0xfffffffffffe0000 |
                                  (long)(int)((uVar7 | -uVar7) >> 0xc) & 0x80000U) << 0x20);
      uVar6 = FUN_00291468(uVar2,uVar10);
      return uVar6 & 0xffffffff |
             ((long)uVar6 >> 0x20 & 0x7fffffffU | (long)(iVar1 * -0x80000000)) << 0x20;
    }
    uVar3 = 0xfffff >> (uVar9 & 0x1f);
    uVar5 = (ulong)(int)(uVar3 >> 1);
    if ((uVar6 & (long)(int)uVar3) == 0 && uVar8 == 0) {
      return param_1;
    }
    if ((uVar6 & uVar5) != 0 || uVar8 != 0) {
      if (uVar9 == 0x13) {
        uVar8 = 0x40000000;
      }
      else {
        uVar6 = uVar6 & ~uVar5 | (long)(0x20000 >> (uVar9 & 0x1f));
      }
    }
  }
  else {
    if (0x33 < (int)uVar9) {
      if (uVar9 != 0x400) {
        return param_1;
      }
      uVar6 = FUN_00291410(param_1);
      return uVar6;
    }
    uVar3 = uVar3 - 0x413;
    uVar4 = 0xffffffff >> (uVar3 & 0x1f);
    uVar9 = uVar4 >> 1;
    if ((uVar7 & uVar4) == 0) {
      return param_1;
    }
    if ((uVar7 & uVar9) != 0) {
      uVar8 = uVar8 & ~(long)(int)uVar9 | (long)(0x40000000 >> (uVar3 & 0x1f));
    }
  }
  uVar10 = *(undefined8 *)(&DAT_00402b48 + iVar1 * -8);
  uVar2 = FUN_00291410(uVar10,uVar6 << 0x20 | uVar8 & 0xffffffff);
  uVar6 = FUN_00291468(uVar2,uVar10);
  return uVar6;
}


// ==== FUN_002a4028 @ 002a4028 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_002a4028(ulong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = (long)param_1 >> 0x20;
  iVar2 = (int)((uint)(param_1 >> 0x20) & 0x7ff00000) >> 0x14;
  if (iVar2 == 0) {
    if ((int)param_1 == 0 && (uVar5 & 0x7fffffff) == 0) {
      return param_1;
    }
    param_1 = FUN_002914d0(param_1,0x4350000000000000);
    uVar5 = (long)param_1 >> 0x20;
    iVar2 = ((int)((uint)(param_1 >> 0x20) & 0x7ff00000) >> 0x14) + -0x36;
    uVar4 = DAT_00402b78;
    if (param_2 < -50000) goto LAB_002a41c0;
  }
  uVar1 = _DAT_00402b80;
  uVar4 = DAT_00402b78;
  iVar3 = iVar2 + param_2;
  if (iVar2 == 0x7ff) {
    uVar5 = FUN_00291410(param_1,param_1);
    return uVar5;
  }
  if (iVar3 < 0x7ff) {
    if (0 < iVar3) {
      return param_1 & 0xffffffff | (uVar5 & 0xffffffff800fffff | (long)(iVar3 * 0x100000)) << 0x20;
    }
    if (iVar3 < -0x35) {
      if (param_2 < 0xc351) {
        param_1 = FUN_002a4390(DAT_00402b78,param_1);
      }
      else {
        param_1 = FUN_002a4390(_DAT_00402b80,param_1);
        uVar4 = uVar1;
      }
    }
    else {
      param_1 = param_1 & 0xffffffff |
                (uVar5 & 0xffffffff800fffff | (long)((iVar3 + 0x36) * 0x100000)) << 0x20;
      uVar4 = 0x3c90000000000000;
    }
  }
  else {
    param_1 = FUN_002a4390(_DAT_00402b80,param_1);
    uVar4 = uVar1;
  }
LAB_002a41c0:
  uVar5 = FUN_002914d0(param_1,uVar4);
  return uVar5;
}


// ==== FUN_002a41e0 @ 002a41e0 ====

uint FUN_002a41e0(uint param_1)

{
  return (param_1 & 0x7fffffff) + 0x80800000 >> 0x1f;
}


// ==== FUN_002a4208 @ 002a4208 ====

uint FUN_002a4208(uint param_1)

{
  return 0x7f800000 - (param_1 & 0x7fffffff) >> 0x1f;
}


// ==== FUN_002a4230 @ 002a4230 ====

float FUN_002a4230(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (int)((uint)param_1 & 0x7f800000) >> 0x17;
  if (iVar1 == 0) {
    if (ABS(param_1) == 0.0) {
      return param_1;
    }
    param_1 = param_1 * 33554432.0;
    iVar1 = ((int)((uint)param_1 & 0x7f800000) >> 0x17) + -0x19;
    if (param_2 < -50000) {
      return param_1 * 1e-30;
    }
  }
  iVar2 = iVar1 + (int)param_2;
  if (iVar1 == 0xff) {
    return param_1 + param_1;
  }
  if (iVar2 < 0xff) {
    if (0 < iVar2) {
      return (float)((uint)param_1 & 0x807fffff | iVar2 * 0x800000);
    }
    if (-0x19 < iVar2) {
      return (float)((uint)param_1 & 0x807fffff | (iVar2 + 0x19) * 0x800000) * 2.9802322e-08;
    }
    fVar4 = 1e-30;
    if (param_2 < 0xc351) goto LAB_002a4340;
  }
  fVar4 = 1e+30;
LAB_002a4340:
  fVar3 = (float)FUN_002a43d8(fVar4,param_1);
  return fVar3 * fVar4;
}


// ==== FUN_002a4390 @ 002a4390 ====

ulong FUN_002a4390(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff |
         ((long)param_1 >> 0x20 & 0x7fffffffU | param_2 >> 0x20 & 0xffffffff80000000U) << 0x20;
}


// ==== FUN_002a43d8 @ 002a43d8 ====

uint FUN_002a43d8(uint param_1,uint param_2)

{
  return param_1 & 0x7fffffff | param_2 & 0x80000000;
}


// ==== FUN_002a4410 @ 002a4410 ====

/* Strings referenciadas:
     "SceCdNcmdSema"
     "SceCdScmdSema"
     "SceCdRcmdSema"
     "SceCdCallbackSema" */

void FUN_002a4410(void)

{
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  char *pcStack_4c;
  
  if (((DAT_003c1668 == -1) || (DAT_003c166c == -1)) || (DAT_003c1670 == -1)) {
    uStack_5c = 1;
    pcStack_4c = "SceCdNcmdSema";
    uStack_58 = 1;
    DAT_003c1668 = CreateSema(auStack_60);
    pcStack_4c = "SceCdScmdSema";
    DAT_003c166c = CreateSema(auStack_60);
    pcStack_4c = "SceCdRcmdSema";
    DAT_003c1670 = CreateSema(auStack_60);
    pcStack_4c = "SceCdCallbackSema";
    uStack_58 = 0;
    DAT_003c1660 = CreateSema(auStack_60);
    DAT_003c1674 = 0;
  }
  return;
}


// ==== FUN_002a44f8 @ 002a44f8 ====

void FUN_002a44f8(void)

{
  long lVar1;
  
  if (DAT_003c1654 != 0) {
    DAT_003c16a0 = 0xffffffff;
    SignalSema(DAT_003c1660);
  }
  DeleteSema(DAT_003c1668);
  DeleteSema(DAT_003c166c);
  DeleteSema(DAT_003c1670);
  DeleteSema(DAT_003c1660);
  lVar1 = FUN_0036d518();
  FUN_0036a4d8(0xffffffff80000012);
  if (lVar1 == 0) {
    return;
  }
  FUN_0036d568();
  return;
}


// ==== FUN_002a4598 @ 002a4598 ====

void FUN_002a4598(void)

{
  if ((DAT_00449108 != (code *)0x0) && (DAT_003c1664 == 0)) {
    (*DAT_00449108)(DAT_00449110);
  }
  return;
}


// ==== FUN_002a45f0 @ 002a45f0 ====

undefined4 FUN_002a45f0(void)

{
  long lVar1;
  
  DAT_003c1664 = 1;
  lVar1 = FUN_0036d518();
  FUN_0036a460(0xffffffff80000012,0x2a4598,0);
  if (lVar1 != 0) {
    FUN_0036d568();
  }
  DAT_003c1664 = 0;
  DAT_003c1688 = 1;
  return 1;
}


// ==== FUN_002a4678 @ 002a4678 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "S cmd wait " */

undefined8 FUN_002a4678(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    if (0 < ram0x003c1650) {
      FUN_0036a038(0x402cd0);
    }
    while( true ) {
      lVar1 = FUN_0036b300(0x3c31c0);
      uVar2 = 0;
      if (lVar1 == 0) break;
      FUN_00368670(4000);
    }
  }
  else {
    uVar2 = FUN_0036b300(0x3c31c0);
  }
  return uVar2;
}


// ==== FUN_002a46e8 @ 002a46e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "Scmd fail sema cur_cmd:%d keep_cmd:%d "
     "Libcdvd bind err S cmd " */

undefined4 FUN_002a46e8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_002a4410();
  iVar1 = PollSema(DAT_003c166c);
  if (DAT_003c166c == iVar1) {
    DAT_003c1658 = (undefined4)param_1;
    lVar2 = FUN_002a4678(1);
    if (lVar2 == 0) {
      FUN_0036a8d8(0);
      if (-1 < DAT_003c1694) {
        return 1;
      }
      while( true ) {
        while (lVar2 = FUN_0036af20(0x3c31c0,0xffffffff80000593,0), lVar2 < 0) {
          if (0 < ram0x003c1650) {
            FUN_0036a038(0x402d08);
          }
          iVar1 = 0x100000;
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
        if (DAT_003c31e4 != 0) break;
        iVar1 = 0x100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      DAT_003c1694 = 0;
      return 1;
    }
    SignalSema(DAT_003c166c);
  }
  else if (0 < ram0x003c1650) {
    FUN_0036a038(0x402ce0,param_1,DAT_003c1658);
    return 0;
  }
  return 0;
}


// ==== FUN_002a4840 @ 002a4840 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "Libcdvd bind err %d CD_Init %d "
     "Libcdvd Exit " */

undefined4 FUN_002a4840(int param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_002a4678(1);
  uVar3 = 0;
  if (lVar2 == 0) {
    FUN_0036a8d8(0);
    DAT_003c1664 = 1;
    DAT_003c169c = DAT_003c169c + 1;
    DAT_003c1688 = 0xffffffff;
    DAT_003c168c = 0xffffffff;
    DAT_003c167c = 0xffffffff;
    DAT_003c1694 = 0xffffffff;
    DAT_003c1690 = 0xffffffff;
    DAT_003c1678 = 0;
    DAT_003c1698 = 0xffffffff;
    while( true ) {
      while (lVar2 = FUN_0036af20(0x449328,0xffffffff80000592,0), lVar2 < 0) {
        if (0 < ram0x003c1650) {
          FUN_0036a038(0x402d20,lVar2,DAT_003c169c);
        }
        iVar1 = 0x100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      if (DAT_0044934c != 0) break;
      iVar1 = 0x100000;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    DAT_003c1698 = 0;
    DAT_00449380 = param_1;
    FUN_0036a828(0x449380,4);
    lVar2 = FUN_0036b100(0x449328,0,0,0x449380,4,0x3c2840,0x10,0);
    if (lVar2 < 0) {
      DAT_003c1664 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      if (DAT_203c284c != 0xff) {
        if (DAT_203c284c == 0xfe) {
          ram0x003c1650 = 1;
        }
        else {
          iVar1 = DAT_203c2844 + 0xff;
          if (-1 < DAT_203c2844) {
            iVar1 = DAT_203c2844;
          }
          if (iVar1 >> 8 < 2) {
            uVar3 = 2;
          }
          else {
            iVar1 = DAT_203c2848 + 0xff;
            if (-1 < DAT_203c2848) {
              iVar1 = DAT_203c2848;
            }
            if (iVar1 >> 8 < 2) {
              uVar3 = 2;
            }
          }
        }
      }
      DAT_003c1664 = 0;
      if (((param_1 < 0) || (param_1 < 2)) || (param_1 != 5)) {
        FUN_002a4410();
        FUN_002a45f0();
        DAT_003c1684 = 1;
      }
      else {
        if (0 < ram0x003c1650) {
          FUN_0036a038(0x402d40);
        }
        FUN_002a44f8();
        DAT_003c1668 = 0xffffffff;
        DAT_003c166c = 0xffffffff;
        DAT_003c1660 = 0xffffffff;
        DAT_003c1684 = 0;
      }
    }
  }
  return uVar3;
}


// ==== FUN_002a4b28 @ 002a4b28 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "OLD DiskReady Call "
     "Libcdvd bind err CdDiskReady "
     "DiskReady ended " */

undefined4 FUN_002a4b28(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (0 < ram0x003c1650) {
    FUN_0036a038(0x402d50);
  }
  lVar3 = FUN_0036d518();
  DAT_003c1680 = 1;
  if (lVar3 != 0) {
    FUN_0036d568();
  }
  FUN_002a4410();
  iVar1 = PollSema(DAT_003c166c);
  uVar2 = 6;
  if (DAT_003c166c == iVar1) {
    lVar3 = FUN_002a4678(1);
    if (lVar3 == 0) {
      FUN_0036a8d8(0);
      if (DAT_003c1690 < 0) {
        while( true ) {
          while (lVar3 = FUN_0036af20(0x449350,0xffffffff8000059a,0), lVar3 < 0) {
            if (0 < ram0x003c1650) {
              FUN_0036a038(0x402d68);
            }
            iVar1 = 0x100000;
            do {
              iVar1 = iVar1 + -1;
            } while (iVar1 != -1);
          }
          iVar1 = 0x100000;
          if (DAT_00449374 != 0) break;
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
        DAT_003c1690 = 0;
      }
      DAT_00449390 = (undefined4)param_1;
      FUN_0036a828(0x449390,4);
      lVar3 = FUN_0036b100(0x449350,0,0,0x449390,4,0x3c2840,4,0);
      if (-1 < lVar3) {
        if (0 < ram0x003c1650) {
          FUN_0036a038(0x402d88);
        }
        uVar2 = DAT_203c2840;
        SignalSema(DAT_003c166c);
        return uVar2;
      }
    }
    SignalSema(DAT_003c166c);
    uVar2 = 6;
    if (param_1 == 8) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


// ==== FUN_002a4d40 @ 002a4d40 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "Libcdvd bind err CdDiskReady "
     "DiskReady ended "
     "NEW DiskReady Call " */

undefined4 FUN_002a4d40(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  if (0 < ram0x003c1650) {
    FUN_0036a038(0x402da0);
  }
  FUN_002a4410();
  iVar2 = PollSema(DAT_003c1670);
  if (DAT_003c1670 == iVar2) {
    FUN_0036a8d8(0);
    iVar2 = 0;
    if (DAT_003c1690 < 0) {
      while( true ) {
        while (lVar4 = FUN_0036af20(0x449350,0xffffffff8000059c,0), lVar4 < 0) {
          if (0 < ram0x003c1650) {
            FUN_0036a038(0x402d68);
          }
          iVar5 = 0x100000;
          do {
            iVar5 = iVar5 + -1;
          } while (iVar5 != -1);
        }
        bVar1 = 0x10 < iVar2;
        if (DAT_00449374 != 0) break;
        iVar2 = iVar2 + 1;
        if (bVar1) {
          SignalSema(DAT_003c1670);
          uVar3 = FUN_002a4b28(param_1);
          return uVar3;
        }
        iVar5 = 0x100000;
        do {
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
      DAT_003c1690 = 0;
    }
    lVar4 = FUN_0036d518();
    DAT_003c1680 = 0;
    if (lVar4 != 0) {
      FUN_0036d568();
    }
    DAT_00449390 = (undefined4)param_1;
    FUN_0036a828(0x449390,4);
    lVar4 = FUN_0036b100(0x449350,0,0,0x449390,4,0x3c30c0,4,0);
    if (-1 < lVar4) {
      if (0 < ram0x003c1650) {
        FUN_0036a038(0x402d88);
      }
      uVar3 = DAT_203c30c0;
      SignalSema(DAT_003c1670);
      return uVar3;
    }
    SignalSema(DAT_003c1670);
  }
  uVar3 = 6;
  if (param_1 == 8) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// ==== FUN_002a4f60 @ 002a4f60 ====

undefined4 FUN_002a4f60(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_002a46e8(0x22);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    DAT_003c2c80 = param_1;
    FUN_0036a828(0x3c2c80,4);
    lVar2 = FUN_0036b100(0x3c31c0,DAT_003c31e8,0,0x3c2c80,DAT_003c31ec,0x3c2840,DAT_003c31f0,0);
    uVar1 = DAT_203c2840;
    if (lVar2 < 0) {
      SignalSema(DAT_003c166c);
      uVar1 = 0;
    }
    else {
      SignalSema(DAT_003c166c);
    }
  }
  return uVar1;
}


// ==== FUN_002a5038 @ 002a5038 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002a5038(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_002a46e8(0xf);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_0036b100(0x3c31c0,1,0,0,0,0x3c2840,0x10,0);
    if (lVar2 < 0) {
      SignalSema(DAT_003c166c);
      uVar1 = 0;
    }
    else {
      *param_1 = _DAT_203c2844;
      uVar1 = DAT_203c2840;
      SignalSema(DAT_003c166c);
    }
  }
  return uVar1;
}


// ==== FUN_002a50f8 @ 002a50f8 ====

undefined4 FUN_002a50f8(undefined4 *param_1)

{
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 0xd:
  case 0x13:
    return 0;
  default:
    return 0;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x1a:
    return 1;
  }
}


// ==== FUN_002a5140 @ 002a5140 ====

undefined4 FUN_002a5140(undefined8 param_1,int param_2,long param_3,uint *param_4)

{
  bool bVar1;
  long lVar2;
  int iStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  int iStack_110;
  undefined4 uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  uint *puStack_b0;
  
  iStack_b4 = param_2;
  puStack_b0 = param_4;
  while( true ) {
    lVar2 = FUN_002a7050(param_1,&iStack_120,0xc);
    if (lVar2 == 0xc) {
      uStack_10c = uStack_11c;
      iStack_110 = iStack_120;
      if ((uStack_118 & 0xffff0000) == 0) {
        uStack_108 = uStack_118 << 8;
        uStack_104 = 0;
      }
      else {
        uStack_104 = uStack_118 & 0xffff;
        uStack_108 = (uStack_118 >> 0xe & 0x3ff00) + 0x30000 | uStack_118 >> 0x10 & 0x3f;
      }
      uStack_100 = FUN_002a50f8(&iStack_110);
      if (&stack0x00000000 != (undefined1 *)0xc0) {
        iStack_c0 = iStack_110;
      }
      if (&stack0x00000000 != (undefined1 *)0xbc) {
        uStack_bc = uStack_10c;
      }
      if (&stack0x00000000 != (undefined1 *)0xb8) {
        uStack_b8 = uStack_108;
      }
      bVar1 = true;
    }
    else {
      uStack_f0 = 1;
      uStack_ec = FUN_002a5548(0xffffffff8000001a);
      FUN_002a55d8(&uStack_f0);
      bVar1 = false;
    }
    if (!bVar1) {
      return 0;
    }
    if (iStack_c0 == iStack_b4) break;
    lVar2 = FUN_002a73d8(param_1,uStack_bc);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (uStack_b8 < 0x35000) {
    uStack_e0 = 1;
    uStack_dc = FUN_002a5548(0xffffffff80000004);
    FUN_002a55d8(&uStack_e0);
    return 0;
  }
  if (uStack_b8 < 0x37003) {
    if (param_3 != 0) {
      *(undefined4 *)param_3 = uStack_bc;
    }
    if (puStack_b0 != (uint *)0x0) {
      *puStack_b0 = uStack_b8;
    }
    return 1;
  }
  uStack_d0 = 1;
  uStack_cc = FUN_002a5548(0xffffffff80000004);
  FUN_002a55d8(&uStack_d0);
  return 0;
}


// ==== FUN_002a5350 @ 002a5350 ====

void FUN_002a5350(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                 )

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uStack_18 = (param_4 - 0x30000 & 0x3ff00) << 0xe | (param_4 & 0x3f) << 0x10 | param_5 & 0xffff;
  uStack_20 = param_2;
  uStack_1c = param_3;
  FUN_002a71e0(param_1,&uStack_20,0xc);
  return;
}


// ==== FUN_002a53a8 @ 002a53a8 ====

undefined8 FUN_002a53a8(undefined8 param_1)

{
  FUN_002a71e0();
  return param_1;
}


// ==== FUN_002a53d0 @ 002a53d0 ====

undefined8 FUN_002a53d0(undefined8 param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = FUN_002a7050();
  if (lVar1 == 0) {
    uStack_30 = 1;
    uStack_2c = FUN_002a5548(0xffffffff8000001a);
    FUN_002a55d8(&uStack_30);
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_002a5420 @ 002a5420 ====

undefined4 FUN_002a5420(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  lVar2 = FUN_002a7050(param_1,&uStack_90,0xc);
  if (lVar2 == 0xc) {
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    if ((uStack_88 & 0xffff0000) == 0) {
      uStack_78 = uStack_88 << 8;
      uStack_74 = 0;
    }
    else {
      uStack_78 = (uStack_88 >> 0xe & 0x3ff00) + 0x30000 | uStack_88 >> 0x10 & 0x3f;
      uStack_74 = uStack_88 & 0xffff;
    }
    FUN_002a50f8(&uStack_80);
    if (param_2 != 0) {
      *(undefined4 *)param_2 = uStack_80;
    }
    if (param_3 != 0) {
      *(undefined4 *)param_3 = uStack_7c;
    }
    if (param_5 != 0) {
      *(uint *)param_5 = uStack_74;
    }
    if (param_4 != 0) {
      *(uint *)param_4 = uStack_78;
    }
    uVar1 = 1;
  }
  else {
    uStack_60 = 1;
    uStack_5c = FUN_002a5548(0xffffffff8000001a);
    FUN_002a55d8(&uStack_60);
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_002a5548 @ 002a5548 ====

undefined8 FUN_002a5548(undefined8 param_1)

{
  return param_1;
}


// ==== FUN_002a55d8 @ 002a55d8 ====

undefined8 FUN_002a55d8(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)&DAT_00449438 + iGpffff8db0);
  if ((*piVar1 == 0) && (*(int *)(&DAT_0044943c + iGpffff8db0) == -0x80000000)) {
    piVar2 = (int *)param_1;
    if (piVar2[1] < 0) {
      *piVar1 = 0;
    }
    else {
      *piVar1 = *piVar2;
    }
    *(int *)(&DAT_0044943c + iGpffff8db0) = piVar2[1];
  }
  return param_1;
}


// ==== FUN_002a5640 @ 002a5640 ====

void FUN_002a5640(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar7 = *param_3;
  fVar3 = *param_2;
  fVar20 = param_3[2];
  fVar18 = param_3[4];
  fVar8 = param_2[1];
  fVar5 = param_2[4];
  fVar11 = param_2[5];
  fVar1 = param_3[6];
  fVar4 = param_2[8];
  fVar9 = param_2[9];
  fVar6 = param_3[1];
  fVar19 = param_3[5];
  fVar21 = param_3[10];
  fVar14 = param_3[8];
  fVar10 = param_2[2];
  fVar12 = param_2[6];
  fVar13 = param_2[10];
  fVar15 = param_3[9];
  fVar2 = param_2[0xc];
  fVar17 = param_2[0xd];
  fVar16 = param_2[0xe];
  *param_1 = fVar3 * fVar7 + fVar8 * fVar18 + fVar10 * fVar14;
  param_1[1] = fVar3 * fVar6 + fVar8 * fVar19 + fVar10 * fVar15;
  param_1[6] = fVar5 * fVar20 + fVar11 * fVar1 + fVar12 * fVar21;
  param_1[10] = fVar4 * fVar20 + fVar9 * fVar1 + fVar13 * fVar21;
  param_1[2] = fVar3 * fVar20 + fVar8 * fVar1 + fVar10 * fVar21;
  param_1[4] = fVar5 * fVar7 + fVar11 * fVar18 + fVar12 * fVar14;
  param_1[5] = fVar5 * fVar6 + fVar11 * fVar19 + fVar12 * fVar15;
  param_1[8] = fVar4 * fVar7 + fVar9 * fVar18 + fVar13 * fVar14;
  param_1[9] = fVar4 * fVar6 + fVar9 * fVar19 + fVar13 * fVar15;
  param_1[0xc] = fVar2 * fVar7 + fVar17 * fVar18 + fVar16 * fVar14 + param_3[0xc];
  fVar1 = param_3[6];
  param_1[0xd] = fVar2 * fVar6 + fVar17 * fVar19 + fVar16 * fVar15 + param_3[0xd];
  param_1[0xe] = fVar2 * fVar20 + fVar17 * fVar1 + fVar16 * fVar21 + param_3[0xe];
  return;
}


// ==== FUN_002a5850 @ 002a5850 ====

undefined8 FUN_002a5850(undefined8 param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pfVar5 = (float *)param_1;
  if (param_2 == (float *)0x0) {
    param_2 = (float *)(&DAT_00449444 + iGpffff8db8);
  }
  fVar14 = pfVar5[1];
  fVar15 = pfVar5[5];
  fVar11 = pfVar5[4];
  fVar17 = *pfVar5;
  fVar13 = pfVar5[6];
  fVar12 = pfVar5[9];
  fVar10 = pfVar5[2];
  fVar9 = pfVar5[8];
  fVar16 = pfVar5[10];
  fVar18 = fVar9 * fVar9 + fVar12 * fVar12;
  fVar8 = (fVar17 * fVar17 + fVar14 * fVar14 + fVar10 * fVar10) - 1.0;
  fVar6 = (fVar11 * fVar11 + fVar15 * fVar15 + fVar13 * fVar13) - 1.0;
  fVar7 = (fVar18 + fVar16 * fVar16) - 1.0;
  bVar1 = *param_2 < fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar8 = fVar9 * fVar17 + fVar12 * fVar14 + fVar16 * fVar10;
  fVar7 = fVar11 * fVar9 + fVar15 * fVar12 + fVar13 * fVar16;
  fVar6 = fVar17 * fVar11 + fVar14 * fVar15 + fVar10 * fVar13;
  bVar2 = param_2[1] < fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6;
  bVar3 = false;
  if (((!bVar1) && (!bVar2)) &&
     ((fVar17 - 1.0) * (fVar17 - 1.0) + fVar14 * fVar14 + fVar10 * fVar10 +
      fVar11 * fVar11 + (fVar15 - 1.0) * (fVar15 - 1.0) + fVar13 * fVar13 +
      fVar18 + (fVar16 - 1.0) * (fVar16 - 1.0) +
      pfVar5[0xc] * pfVar5[0xc] + pfVar5[0xd] * pfVar5[0xd] + pfVar5[0xe] * pfVar5[0xe] <=
      param_2[2])) {
    bVar3 = true;
  }
  if (bVar1) {
    uVar4 = (uint)pfVar5[3] & 0xfffffffe;
  }
  else {
    uVar4 = (uint)pfVar5[3] | 1;
  }
  if (bVar2) {
    uVar4 = uVar4 & 0xfffffffd;
  }
  else {
    uVar4 = uVar4 | 2;
  }
  if (bVar3) {
    fVar6 = (float)(uVar4 | 0x20000);
  }
  else {
    fVar6 = (float)(uVar4 & 0xfffdffff);
  }
  pfVar5[3] = fVar6;
  return param_1;
}


// ==== FUN_002a5a90 @ 002a5a90 ====

undefined4 FUN_002a5a90(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(&DAT_00449444 + iGpffff8db8) = *param_1;
  *(undefined4 *)((int)&DAT_0044944c + iGpffff8db8) = uVar1;
  return 1;
}


// ==== FUN_002a5ac8 @ 002a5ac8 ====

void FUN_002a5ac8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  uint uVar1;
  uint uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar3 = _lqc2(*param_2);
  auVar4 = _lqc2(param_2[1]);
  auVar5 = _lqc2(param_2[2]);
  auVar6 = _lqc2(param_2[3]);
  uVar1 = *(uint *)(*param_2 + 0xc);
  auVar7 = _lqc2(*param_3);
  auVar8 = _lqc2(param_3[1]);
  auVar9 = _lqc2(param_3[2]);
  auVar10 = _lqc2(param_3[3]);
  uVar2 = *(uint *)(*param_3 + 0xc);
  _vmulabc(auVar7,auVar3);
  _vmaddabc(auVar8,auVar3);
  auVar3 = _vmaddbc(auVar9,auVar3);
  _vmulabc(auVar7,auVar4);
  _vmaddabc(auVar8,auVar4);
  auVar4 = _vmaddbc(auVar9,auVar4);
  _vmulabc(auVar7,auVar5);
  _vmaddabc(auVar8,auVar5);
  auVar5 = _vmaddbc(auVar9,auVar5);
  _vmulabc(auVar7,auVar6);
  _vmaddabc(auVar8,auVar6);
  _vmaddabc(auVar9,auVar6);
  auVar6 = _vmaddbc(auVar10,in_vf0);
  auVar3 = _sqc2(auVar3);
  *param_1 = auVar3;
  auVar3 = _sqc2(auVar4);
  param_1[1] = auVar3;
  auVar3 = _sqc2(auVar5);
  param_1[2] = auVar3;
  auVar3 = _sqc2(auVar6);
  param_1[3] = auVar3;
  *(uint *)(*param_1 + 0xc) = uVar2 & uVar1;
  return;
}


