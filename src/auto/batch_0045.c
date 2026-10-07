// ==== FUN_00370270 @ 00370270 ====

int FUN_00370270(int param_1,undefined8 param_2,long param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uStack_ac;
  
  lVar3 = FUN_00370100();
  iVar2 = param_4;
  if (lVar3 == 0) {
    uVar5 = *(uint *)(param_1 + 0xc);
    iVar2 = 0;
    uStack_ac = 0;
    if (uVar5 != 0) {
      iVar8 = 0;
      do {
        if (param_3 == 0) {
          iVar1 = *(int *)(param_1 + 8);
LAB_00370308:
          uVar5 = ((int *)(iVar8 + iVar1))[1];
          puVar6 = (undefined4 *)(param_4 + (uVar5 & 0x1fffffff));
          if ((uVar5 >> 0x1d & 1) != 0) {
            puVar6 = (undefined4 *)*puVar6;
          }
          iVar1 = *(int *)(iVar8 + iVar1);
          iVar7 = *(int *)(iVar1 + 4);
          iVar1 = (**(code **)(iVar7 + 0x14))
                            (iVar1 + *(short *)(iVar7 + 0x10),param_2,param_3,puVar6,param_5,param_6
                            );
          if (iVar1 == 0) {
            uVar5 = *(uint *)(param_1 + 0xc);
          }
          else if (iVar2 == 0) {
LAB_003703f8:
            uVar5 = *(uint *)(param_1 + 0xc);
            iVar2 = iVar1;
          }
          else if (iVar2 == iVar1) {
            uVar5 = *(uint *)(param_1 + 0xc);
          }
          else {
            if (param_5 == 0) {
              return 0;
            }
            iVar7 = (int)param_2;
            lVar3 = (**(code **)(*(int *)(iVar7 + 4) + 0x14))
                              (iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0x10),param_5,1,iVar2,0,0);
            lVar4 = (**(code **)(*(int *)(iVar7 + 4) + 0x14))
                              (iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0x10),param_5,1,iVar1,0,0);
            if (lVar3 == lVar4) {
              return 0;
            }
            if (lVar3 != param_6) {
              if (lVar4 != param_6) {
                return 0;
              }
              goto LAB_003703f8;
            }
            uVar5 = *(uint *)(param_1 + 0xc);
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 8);
          if (*(uint *)(iVar8 + iVar1 + 4) >> 0x1e == 1) goto LAB_00370308;
        }
        uStack_ac = uStack_ac + 1;
        iVar8 = iVar8 + 8;
      } while (uStack_ac < uVar5);
    }
  }
  return iVar2;
}


// ==== __class_type_info_00370468 @ 00370468 ====

/* Strings referenciadas:
     "17__class_type_info" */

undefined8 __class_type_info_00370468(void)

{
  if (DAT_0049bee0 == 0) {
    __user_type_info_00370580();
    Kaim_CMetaClass_ctor(0x49bee0,0x40bf70,0x49bef0);
  }
  return 0x49bee0;
}


// ==== FUN_003704b8 @ 003704b8 ====

void FUN_003704b8(void)

{
  FUN_003700d0();
  return;
}


// ==== __si_type_info_003704f8 @ 003704f8 ====

/* Strings referenciadas:
     "14__si_type_info" */

undefined8 __si_type_info_003704f8(void)

{
  if (DAT_0049bf00 == 0) {
    __user_type_info_00370580();
    Kaim_CMetaClass_ctor(0x49bf00,0x40bf88,0x49bef0);
  }
  return 0x49bf00;
}


// ==== FUN_00370548 @ 00370548 ====

void FUN_00370548(void)

{
  FUN_003700d0();
  return;
}


// ==== __user_type_info_00370580 @ 00370580 ====

/* Strings referenciadas:
     "16__user_type_info" */

undefined8 __user_type_info_00370580(void)

{
  if (DAT_0049bef0 == 0) {
    type_info_00370760();
    Kaim_CMetaClass_ctor(0x49bef0,0x40bfa0,0x40ec48);
  }
  return 0x49bef0;
}


// ==== FUN_003705d0 @ 003705d0 ====

void FUN_003705d0(void)

{
  FUN_003700d0();
  return;
}


// ==== FUN_003705f0 @ 003705f0 ====

void FUN_003705f0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_0040bea0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== bad_typeid_00370638 @ 00370638 ====

/* Strings referenciadas:
     "10bad_typeid" */

undefined8 bad_typeid_00370638(void)

{
  if (DAT_0049bf10 == 0) {
    exception_00370090();
    Kaim_CMetaClass_ctor(0x49bf10,0x40bfb8,0x40ec40);
  }
  return 0x49bf10;
}


// ==== FUN_00370688 @ 00370688 ====

void FUN_00370688(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_0040bea0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== bad_cast_003706d0 @ 003706d0 ====

/* Strings referenciadas:
     "8bad_cast" */

undefined8 bad_cast_003706d0(void)

{
  if (DAT_0049bf20 == 0) {
    exception_00370090();
    Kaim_CMetaClass_ctor(0x49bf20,0x40bfc8,0x40ec40);
  }
  return 0x49bf20;
}


// ==== FUN_00370720 @ 00370720 ====

ulong FUN_00370720(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00370100();
  return uVar1 ^ 1;
}


// ==== type_info_00370760 @ 00370760 ====

/* Strings referenciadas:
     "9type_info" */

undefined8 type_info_00370760(void)

{
  if (DAT_0040ec48 == 0) {
    FUN_00370188(0x40ec48,0x40bfd8);
  }
  return 0x40ec48;
}


// ==== FUN_003707a0 @ 003707a0 ====

uint FUN_003707a0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = strcmp(*param_1,*param_2);
  return uVar1 >> 0x1f;
}


// ==== FUN_003707c8 @ 003707c8 ====

undefined4 FUN_003707c8(int param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar2 = FUN_00370100();
  if (lVar2 != 0) {
    return param_3;
  }
  iVar5 = (int)param_2;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar5 + 4) + 2),0x370580,1,
                         iVar5 + **(short **)(iVar5 + 4),0x370760,param_2);
  }
  if (lVar2 == 0) {
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar5 + 4) + 2),0x3714b0,1,
                           iVar5 + **(short **)(iVar5 + 4),0x370760,param_2);
    }
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = 0;
    if (param_1 != 0) {
      lVar3 = FUN_00370da8(*(undefined4 *)(*(short **)(param_1 + 4) + 2),0x3714b0,1,
                           param_1 + **(short **)(param_1 + 4),0x370760,param_1);
    }
    if (lVar3 == 0) {
      return 0;
    }
    iVar5 = *(int *)((int)lVar2 + 8);
    param_1 = *(int *)((int)lVar3 + 8);
    lVar2 = 0;
    if (iVar5 != 0) {
      lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar5 + 4) + 2),0x371440,1,
                           iVar5 + **(short **)(iVar5 + 4),0x370760,iVar5);
    }
    uVar8 = 0;
    if (lVar2 != 0) {
      iVar5 = *(int *)((int)lVar2 + 8);
      uVar8 = *(uint *)((int)lVar2 + 0xc);
    }
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(param_1 + 4) + 2),0x371440,1,
                           param_1 + **(short **)(param_1 + 4),0x370760,param_1);
    }
    uVar7 = 0;
    if (lVar2 != 0) {
      param_1 = *(int *)((int)lVar2 + 8);
      uVar7 = *(uint *)((int)lVar2 + 0xc);
    }
    uVar9 = uVar7 & 1;
    if (uVar9 < (uVar8 & 1)) {
      return 0;
    }
    if ((uVar7 & 2) < (uVar8 & 2)) {
      return 0;
    }
    lVar2 = FUN_00370100(param_1,iVar5);
    if (lVar2 != 0) {
      return param_3;
    }
    uVar4 = FUN_00370e58();
    lVar2 = FUN_00370100(param_1,uVar4);
    if (lVar2 != 0) {
      if (iVar5 == 0) {
        return param_3;
      }
      lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar5 + 4) + 2),0x371360,1,
                           iVar5 + **(short **)(iVar5 + 4),0x370760,iVar5);
      if (lVar2 == 0) {
        return param_3;
      }
    }
    if (iVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar5 + 4) + 2),0x370580,1,
                           iVar5 + **(short **)(iVar5 + 4),0x370760,iVar5);
    }
    if (lVar2 == 0) {
      if (iVar5 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar5 + 4) + 2),0x3714b0,1,
                             iVar5 + **(short **)(iVar5 + 4),0x370760,iVar5);
      }
      if (lVar2 == 0) {
        return 0;
      }
      if (param_1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_00370da8(*(undefined4 *)(*(short **)(param_1 + 4) + 2),0x3714b0,1,
                             param_1 + **(short **)(param_1 + 4),0x370760,param_1);
      }
      if (lVar3 == 0) {
        return 0;
      }
      iVar5 = *(int *)((int)lVar3 + 8);
      iVar6 = *(int *)((int)lVar2 + 8);
      while( true ) {
        lVar2 = 0;
        if (iVar6 != 0) {
          lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar6 + 4) + 2),0x371440,1,
                               iVar6 + **(short **)(iVar6 + 4),0x370760,iVar6);
        }
        uVar8 = 0;
        if (lVar2 != 0) {
          iVar6 = *(int *)((int)lVar2 + 8);
          uVar8 = *(uint *)((int)lVar2 + 0xc);
        }
        lVar2 = 0;
        if (iVar5 != 0) {
          lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar5 + 4) + 2),0x371440,1,
                               iVar5 + **(short **)(iVar5 + 4),0x370760,iVar5);
        }
        uVar7 = 0;
        if (lVar2 != 0) {
          iVar5 = *(int *)((int)lVar2 + 8);
          uVar7 = *(uint *)((int)lVar2 + 0xc);
        }
        if ((uVar7 & 1) < (uVar8 & 1)) {
          return 0;
        }
        if ((uVar7 & 2) < (uVar8 & 2)) {
          return 0;
        }
        if (uVar9 == 0) {
          if ((uVar8 & 1) < (uVar7 & 1)) {
            return 0;
          }
          if ((uVar8 & 2) < (uVar7 & 2)) {
            return 0;
          }
        }
        lVar2 = FUN_00370100(iVar5,iVar6);
        if (lVar2 != 0) {
          return param_3;
        }
        if (iVar5 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar5 + 4) + 2),0x3714b0,1,
                               iVar5 + **(short **)(iVar5 + 4),0x370760,iVar5);
        }
        if (iVar6 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = FUN_00370da8(*(undefined4 *)(*(short **)(iVar6 + 4) + 2),0x3714b0,1,
                               iVar6 + **(short **)(iVar6 + 4),0x370760,iVar6);
        }
        if (lVar2 == 0) break;
        if (lVar3 == 0) {
          return 0;
        }
        iVar5 = *(int *)((int)lVar2 + 8);
        iVar6 = *(int *)((int)lVar3 + 8);
        if (((uVar7 ^ 1) & 1) != 0) {
          uVar9 = 0;
        }
      }
      return 0;
    }
    iVar5 = *(int *)((int)lVar2 + 4);
  }
  else {
    iVar5 = *(int *)((int)lVar2 + 4);
  }
  uVar1 = (**(code **)(iVar5 + 0x14))
                    ((int)lVar2 + (int)*(short *)(iVar5 + 0x10),param_1,1,param_3,0,0);
  return uVar1;
}


// ==== FUN_00370c90 @ 00370c90 ====

bool FUN_00370c90(long param_1)

{
  short *psVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    psVar1 = *(short **)((int)param_1 + 4);
    lVar2 = FUN_00370da8(*(undefined4 *)(psVar1 + 2),0x3714b0,1,(int)param_1 + (int)*psVar1,0x370760
                         ,param_1);
  }
  return lVar2 != 0;
}


// ==== FUN_00370da8 @ 00370da8 ====

void FUN_00370da8(code *param_1,code *param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar3 = (*param_1)();
  iVar2 = *(int *)(iVar3 + 4);
  sVar1 = *(short *)(iVar2 + 0x10);
  uVar4 = (*param_2)();
  uVar5 = (*param_5)();
  (**(code **)(iVar2 + 0x14))(iVar3 + sVar1,uVar4,param_3,param_4,uVar5,param_6);
  return;
}


// ==== FUN_00370e58 @ 00370e58 ====

undefined4 * FUN_00370e58(void)

{
  if (DAT_003d8f38 == (undefined *)0x0) {
    DAT_003d8f3c = &DAT_0040c0c0;
    DAT_003d8f38 = &DAT_0040bff8;
  }
  return &DAT_003d8f38;
}


// ==== __array_type_info_00371210 @ 00371210 ====

/* Strings referenciadas:
     "17__array_type_info" */

undefined8 __array_type_info_00371210(void)

{
  if (DAT_0049bf30 == 0) {
    type_info_00370760();
    Kaim_CMetaClass_ctor(0x49bf30,0x40c0f0,0x40ec48);
  }
  return 0x49bf30;
}


// ==== FUN_00371260 @ 00371260 ====

void FUN_00371260(void)

{
  FUN_003700d0();
  return;
}


// ==== __ptmd_type_info_00371280 @ 00371280 ====

/* Strings referenciadas:
     "16__ptmd_type_info" */

undefined8 __ptmd_type_info_00371280(void)

{
  if (DAT_0049bf40 == 0) {
    type_info_00370760();
    Kaim_CMetaClass_ctor(0x49bf40,0x40c108,0x40ec48);
  }
  return 0x49bf40;
}


// ==== FUN_003712d0 @ 003712d0 ====

void FUN_003712d0(void)

{
  FUN_003700d0();
  return;
}


// ==== __ptmf_type_info_003712f0 @ 003712f0 ====

/* Strings referenciadas:
     "16__ptmf_type_info" */

undefined8 __ptmf_type_info_003712f0(void)

{
  if (DAT_0049bf50 == 0) {
    type_info_00370760();
    Kaim_CMetaClass_ctor(0x49bf50,0x40c120,0x40ec48);
  }
  return 0x49bf50;
}


// ==== FUN_00371340 @ 00371340 ====

void FUN_00371340(void)

{
  FUN_003700d0();
  return;
}


// ==== __func_type_info_00371360 @ 00371360 ====

/* Strings referenciadas:
     "16__func_type_info" */

undefined8 __func_type_info_00371360(void)

{
  if (DAT_0049bf60 == 0) {
    type_info_00370760();
    Kaim_CMetaClass_ctor(0x49bf60,0x40c138,0x40ec48);
  }
  return 0x49bf60;
}


// ==== FUN_003713b0 @ 003713b0 ====

void FUN_003713b0(void)

{
  FUN_003700d0();
  return;
}


// ==== __builtin_type_info_003713d0 @ 003713d0 ====

/* Strings referenciadas:
     "19__builtin_type_info" */

undefined8 __builtin_type_info_003713d0(void)

{
  if (DAT_0049bf70 == 0) {
    type_info_00370760();
    Kaim_CMetaClass_ctor(0x49bf70,0x40c150,0x40ec48);
  }
  return 0x49bf70;
}


// ==== FUN_00371420 @ 00371420 ====

void FUN_00371420(void)

{
  FUN_003700d0();
  return;
}


// ==== __attr_type_info_00371440 @ 00371440 ====

/* Strings referenciadas:
     "16__attr_type_info" */

undefined8 __attr_type_info_00371440(void)

{
  if (DAT_0049bf80 == 0) {
    type_info_00370760();
    Kaim_CMetaClass_ctor(0x49bf80,0x40c168,0x40ec48);
  }
  return 0x49bf80;
}


// ==== FUN_00371490 @ 00371490 ====

void FUN_00371490(void)

{
  FUN_003700d0();
  return;
}


// ==== __pointer_type_info_003714b0 @ 003714b0 ====

/* Strings referenciadas:
     "19__pointer_type_info" */

undefined8 __pointer_type_info_003714b0(void)

{
  if (DAT_0049bf90 == 0) {
    type_info_00370760();
    Kaim_CMetaClass_ctor(0x49bf90,0x40c180,0x40ec48);
  }
  return 0x49bf90;
}


// ==== FUN_00371500 @ 00371500 ====

void FUN_00371500(void)

{
  FUN_003700d0();
  return;
}


// ==== FUN_00371520 @ 00371520 ====

void FUN_00371520(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0036d518();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    FUN_0036d568();
    return;
  }
  return;
}


// ==== FUN_00371598 @ 00371598 ====

void FUN_00371598(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0036d518();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    FUN_0036d568();
    return;
  }
  return;
}


// ==== FUN_00371610 @ 00371610 ====

void FUN_00371610(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_00371598(1);
  uVar2 = REG_DMAC_4_IPU_TO_MADR;
  *param_1 = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_TADR;
  param_1[1] = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_QWC;
  param_1[2] = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_CHCR;
  param_1[3] = uVar2;
  do {
    uVar1 = REG_IPU_CTRL;
  } while ((uVar1 & 0xf0) != 0);
  FUN_00371520(0);
  uVar2 = REG_DMAC_3_IPU_FROM_MADR;
  param_1[4] = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_QWC;
  param_1[5] = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  param_1[6] = uVar2;
  uVar2 = REG_IPU_BP;
  param_1[7] = uVar2;
  uVar2 = REG_IPU_CTRL;
  param_1[8] = uVar2;
  return;
}


// ==== FUN_003716f8 @ 003716f8 ====

void FUN_003716f8(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1[7];
  iVar3 = (uVar1 >> 0x10 & 3) + (uVar1 >> 8 & 0xf);
  iVar4 = param_1[2] + iVar3;
  iVar3 = *param_1 + iVar3 * -0x10;
  if ((param_1[4] != 0) && (param_1[5] != 0)) {
    REG_DMAC_3_IPU_FROM_MADR = param_1[4];
    REG_DMAC_3_IPU_FROM_QWC = param_1[5];
    FUN_00371520(param_1[6] | 0x100);
  }
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  REG_IPU_CMD = uVar1 & 0x7f;
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  if ((iVar3 != 0) && (iVar4 != 0)) {
    REG_DMAC_4_IPU_TO_MADR = iVar3;
    REG_DMAC_4_IPU_TO_TADR = param_1[1];
    REG_DMAC_4_IPU_TO_QWC = iVar4;
    FUN_00371598(param_1[3] | 0x100);
    return;
  }
  return;
}


// ==== FUN_00371848 @ 00371848 ====

uint FUN_00371848(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    do {
      iVar1 = REG_IPU_CTRL;
    } while (iVar1 < 0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_1 == 1) {
      uVar2 = REG_IPU_CTRL;
      uVar2 = uVar2 >> 0x1f;
    }
  }
  return uVar2;
}


// ==== FUN_003718b0 @ 003718b0 ====

void FUN_003718b0(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0036d518();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    FUN_0036d568();
    return;
  }
  return;
}


// ==== FUN_00371928 @ 00371928 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00371928(void)

{
  int iVar1;
  
  FUN_003718b0(1);
  REG_IPU_CTRL = 0x40000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_IN_FIFO = (int)_DAT_003d9450;
  DAT_10007014 = (int)((ulong)_DAT_003d9450 >> 0x20);
  DAT_10007018 = DAT_003d9458;
  DAT_1000701c = DAT_003d945c;
  REG_IPU_IN_FIFO = DAT_003d9460;
  DAT_10007014 = DAT_003d9464;
  DAT_10007018 = PTR_DAT_003d9468;
  DAT_1000701c = PTR_DAT_003d946c;
  REG_IPU_IN_FIFO = DAT_003d9470;
  DAT_10007014 = PTR_DAT_003d9474;
  DAT_10007018 = DAT_003d9478;
  DAT_1000701c = DAT_003d947c;
  REG_IPU_IN_FIFO = DAT_003d9480;
  DAT_10007014 = PTR_DAT_003d9484;
  DAT_10007018 = DAT_003d9488;
  DAT_1000701c = DAT_003d948c;
  REG_IPU_IN_FIFO = DAT_003d9490;
  DAT_10007014 = DAT_003d9494;
  DAT_10007018 = DAT_003d9498;
  DAT_1000701c = DAT_003d949c;
  REG_IPU_IN_FIFO = DAT_003d9490;
  DAT_10007014 = DAT_003d9494;
  DAT_10007018 = DAT_003d9498;
  DAT_1000701c = DAT_003d949c;
  REG_IPU_IN_FIFO = DAT_003d9490;
  DAT_10007014 = DAT_003d9494;
  DAT_10007018 = DAT_003d9498;
  DAT_1000701c = DAT_003d949c;
  REG_IPU_IN_FIFO = DAT_003d9490;
  DAT_10007014 = DAT_003d9494;
  DAT_10007018 = DAT_003d9498;
  DAT_1000701c = DAT_003d949c;
  REG_IPU_CMD = 0x50000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0x58000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_IN_FIFO = (int)_DAT_003d94a0;
  DAT_10007014 = (int)((ulong)_DAT_003d94a0 >> 0x20);
  DAT_10007018 = DAT_003d94a8;
  DAT_1000701c = PTR_DAT_003d94ac;
  REG_IPU_IN_FIFO = DAT_003d94b0;
  DAT_10007014 = DAT_003d94b4;
  DAT_10007018 = DAT_003d94b8;
  DAT_1000701c = DAT_003d94bc;
  REG_IPU_CMD = 0x60000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0x90000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CTRL = 0x40000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  return;
}


// ==== FUN_00371b60 @ 00371b60 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00371b60(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 in_vc12;
  undefined4 in_vc13;
  
  REG_VIF1_FBRST = 1;
  REG_VIF1_ERR = 2;
  SYNC(0);
  uVar1 = _cfc2(in_vc12);
  _ctc2((uint)uVar1 | 0x200);
  SYNC(0x10);
  do {
    uVar2 = _cfc2(in_vc13);
  } while ((uVar2 & 0x100) != 0);
  _ctc2(0x404);
  REG_VIF1_FIFO = DAT_003d94c0;
  DAT_10005004 = PTR_DAT_003d94c4;
  DAT_10005008 = DAT_003d94c8;
  DAT_1000500c = DAT_003d94cc;
  REG_VIF1_FIFO = (int)_DAT_003d94d0;
  DAT_10005004 = (int)((ulong)_DAT_003d94d0 >> 0x20);
  DAT_10005008 = DAT_003d94d8;
  DAT_1000500c = DAT_003d94dc;
  REG_GIF_CTRL = 1;
  return;
}


// ==== FUN_00371c00 @ 00371c00 ====

undefined8 FUN_00371c00(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  undefined4 in_vc13;
  
  do {
    uVar2 = REG_DMAC_1_VIF1_CHCR;
    uVar3 = REG_DMAC_2_GIF_CHCR;
    uVar1 = REG_VIF1_STAT;
    bVar4 = (uVar2 & 0x100) != 0;
    if ((uVar3 & 0x100) != 0) {
      bVar4 = bVar4 | 2;
    }
    if ((uVar1 & 3) != 0) {
      bVar4 = bVar4 | 4;
    }
    uVar5 = _cfc2(in_vc13);
    uVar1 = REG_GIF_STAT;
    if ((uVar5 & 0x100) != 0) {
      bVar4 = bVar4 | 8;
    }
    if ((uVar1 & 0xc00) != 0) {
      bVar4 = bVar4 | 0x10;
    }
  } while (bVar4 != 0);
  return 0;
}


// ==== FUN_00371c88 @ 00371c88 ====

/* Strings referenciadas:
     "rom0:ROMVER" */

uint FUN_00371c88(void)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined1 auStack_149 [9];
  char acStack_140 [256];
  
  pcVar4 = acStack_140;
  lVar3 = FUN_0036bd20(0x40c198,1);
  uVar2 = 0;
  if (lVar3 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (; uVar2 < 0x100; uVar2 = uVar2 + 1) {
      FUN_0036c368(lVar3,pcVar4,1);
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == '\0') break;
    }
    FUN_0036bfb0(lVar3);
    lVar3 = atoi(auStack_149 + uVar2);
    uVar2 = (uint)(0x1315670 < lVar3);
  }
  return uVar2;
}


// ==== FUN_00371d28 @ 00371d28 ====

void FUN_00371d28(void)

{
  syscall(0x80);
  return;
}


// ==== FUN_00371d38 @ 00371d38 ====

/* Strings referenciadas:
     "sceGsDefDispEnv:Not support displaymode for 0x%x!! " */

void FUN_00371d38(undefined8 *param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar12 = (int)param_4;
  iVar11 = (int)param_3;
  iVar14 = (int)param_5;
  iVar13 = (int)param_6;
  psVar3 = (short *)FUN_0029b4f0();
  uVar7 = psVar3[1];
  if (uVar7 - 2 < 2) {
LAB_00371dd8:
    uStack_84 = 0;
    uStack_88 = 0;
    iStack_8c = 0;
    iStack_90 = 0;
  }
  else {
    lVar5 = FUN_00371c88();
    if (lVar5 == 0) {
      uVar7 = psVar3[1];
      goto LAB_00371dd8;
    }
    FUN_00371d28(psVar3[1],&iStack_90,(uint)&iStack_90 | 4,(uint)&iStack_90 | 8,
                 (uint)&iStack_90 | 0xc);
    uVar7 = psVar3[1];
  }
  sVar2 = *psVar3;
  *param_1 = 0x66;
  uVar4 = 2;
  if ((*psVar3 != 0) && (uVar4 = 3, psVar3[2] == 0)) {
    uVar4 = 1;
  }
  param_1[1] = uVar4;
  param_1[2] = ((long)(int)param_2 & 0xfU) << 0xf | ((long)(iVar11 + 0x3f >> 6) & 0x3fU) << 9;
  if (uVar7 == 2) {
    if (sVar2 != 1) {
      if (iVar11 == 0) {
        trap(7);
      }
      lVar5 = (long)iStack_90 + 0x27c;
      iVar13 = iVar13 + iStack_8c + 0x19;
LAB_00371fb8:
      iVar1 = (iVar11 + 0x9ff) / iVar11;
      param_1[3] = (long)(iVar1 + -1) << 0x17 | (long)(iVar1 * iVar11 + -1) << 0x20 |
                   iVar14 * iVar1 + lVar5 & 0xfffU | (long)(iVar12 + -1) << 0x2c |
                   ((long)iVar13 & 0xfffU) << 0xc;
      goto LAB_00372080;
    }
    if (iVar11 == 0) {
      trap(7);
    }
    iVar1 = (iVar11 + 0x9ff) / iVar11;
    uVar9 = ((long)(iVar13 + iStack_8c + 0x32) & 0xfffU) << 0xc;
    uVar10 = (long)(iVar1 + -1) << 0x17;
    uVar6 = (long)(iVar1 * iVar11 + -1) << 0x20;
    uVar8 = (long)(iVar14 * iVar1) + (long)iStack_90 + 0x27c & 0xfff;
    if (psVar3[2] == 0) {
LAB_00371f70:
      lVar5 = (long)(iVar12 + -1);
      uVar10 = uVar10 | uVar6;
    }
    else {
      uVar10 = uVar10 | uVar6;
      lVar5 = (long)(iVar12 * 2 + -1);
    }
  }
  else {
    if (uVar7 != 3) {
      if (uVar7 == 0x50) {
        param_1[3] = (long)(iVar12 + -1) << 0x2c | (long)(iVar11 * 2 + -1) << 0x20 |
                     (long)((0x2d0 - iVar11) / 2 << 1) + (long)iStack_90 +
                     (long)(iVar14 << 1) + 0xe8 & 0xfffU | 0x800000 |
                     ((long)(iVar13 + iStack_8c + 0x23) & 0xfffU) << 0xc;
      }
      else {
        FUN_0036a038(0x40c1a8);
      }
      goto LAB_00372080;
    }
    if (sVar2 != 1) {
      if (iVar11 == 0) {
        trap(7);
      }
      lVar5 = (long)iStack_90 + 0x290;
      iVar13 = iVar13 + iStack_8c + 0x24;
      goto LAB_00371fb8;
    }
    if (iVar11 == 0) {
      trap(7);
    }
    iVar1 = (iVar11 + 0x9ff) / iVar11;
    uVar9 = ((long)(iVar13 + iStack_8c + 0x48) & 0xfffU) << 0xc;
    uVar10 = (long)(iVar1 + -1) << 0x17;
    uVar6 = (long)(iVar1 * iVar11 + -1) << 0x20;
    uVar8 = (long)(iVar14 * iVar1) + (long)iStack_90 + 0x290 & 0xfff;
    if (psVar3[2] == 0) goto LAB_00371f70;
    uVar10 = uVar10 | uVar6;
    lVar5 = (long)(iVar12 * 2 + -1);
  }
  param_1[3] = uVar10 | uVar8 | lVar5 << 0x2c | uVar9;
LAB_00372080:
  param_1[4] = 0;
  return;
}


// ==== FUN_003720b0 @ 003720b0 ====

void FUN_003720b0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0029b4f0();
  if (*(short *)(iVar1 + 6) == 1) {
    REG_GS_PMODE = *param_1;
    REG_GS_DISPFB1 = param_1[2];
    REG_GS_DISPLAY1 = param_1[3];
    REG_GS_EXTDATA = param_1[4];
  }
  else {
    REG_GS_PMODE = *param_1;
    REG_GS_SMODE2 = param_1[1];
    REG_GS_DISPFB2 = param_1[2];
    REG_GS_DISPLAY2 = param_1[3];
    REG_GS_BGCOLOR = param_1[4];
  }
  return;
}


// ==== FUN_00372170 @ 00372170 ====

undefined4
FUN_00372170(ulong *param_1,short param_2,short param_3,short param_4,short param_5,short param_6)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar4 = (int)param_3;
  uVar5 = (ulong)(int)param_2;
  iVar3 = (int)param_4;
  uVar6 = (ulong)(int)param_5;
  param_1[1] = 0x4c;
  *param_1 = ((long)(iVar4 + 0x3f >> 6) & 0x3fU) << 0x10 | (uVar5 & 0xf) << 0x18;
  param_1[3] = 0x4e;
  if (uVar6 == 0) {
    sVar1 = FUN_00372d68(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18 | 0x100000000;
  }
  else {
    sVar1 = FUN_00372d68(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18;
  }
  param_1[2] = uVar2;
  param_1[5] = 0x18;
  param_1[4] = (0x800 - (long)(param_3 >> 1)) * 0x10 | 0x800 - (long)(param_4 >> 1) << 0x24;
  param_1[7] = 0x40;
  param_1[6] = (long)(iVar4 + -1) << 0x10 | (long)(iVar3 + -1) << 0x30;
  param_1[9] = 0x1a;
  param_1[8] = param_1[8] | 1;
  param_1[0xb] = 0x46;
  param_1[10] = param_1[10] | 1;
  param_1[0xd] = 0x45;
  if ((uVar5 & 2) == 0) {
    uVar5 = param_1[0xc] & 0xfffffffffffffffe;
  }
  else {
    uVar5 = param_1[0xc] | 1;
  }
  param_1[0xc] = uVar5;
  param_1[0xf] = 0x47;
  if (uVar6 == 0) {
    uVar5 = 0x30000;
  }
  else {
    uVar5 = (uVar6 & 3) << 0x11 | 0x10000;
  }
  param_1[0xe] = uVar5;
  SYNC(0);
  return 8;
}


// ==== FUN_00372358 @ 00372358 ====

undefined4
FUN_00372358(undefined4 *param_1,short param_2,int param_3,short param_4,short param_5,int param_6,
            short param_7,short param_8)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0x6008000;
  *(undefined8 *)(param_1 + 0x1a) = 0x53;
  param_1[2] = 0x13000000;
  param_1[3] = 0x50000006;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffff8000 | 0x1000000000008005;
  *(ulong *)(param_1 + 6) = *(ulong *)(param_1 + 6) & 0xfffffffffffffff0 | 0xe;
  *(long *)(param_1 + 8) =
       (long)(param_3 << 0x10) | (long)param_2 | ((long)(int)param_4 << 0x30) >> 0x18;
  *(undefined8 *)(param_1 + 10) = 0x50;
  *(long *)(param_1 + 0xc) = (long)(param_6 << 0x10) | (long)param_5;
  *(undefined8 *)(param_1 + 0xe) = 0x51;
  *(long *)(param_1 + 0x10) = (long)param_7 | ((long)(int)param_8 << 0x30) >> 0x10;
  *(undefined8 *)(param_1 + 0x12) = 0x52;
  *(undefined8 *)(param_1 + 0x16) = 0x61;
  *(undefined8 *)(param_1 + 0x18) = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  SYNC(0);
  return 7;
}


// ==== FUN_00372498 @ 00372498 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "sceGsExecStoreImage: DMA Ch.1 does not terminate "
     "sceGsExecStoreImage: GS does not terminate "
     "sceGsExecStoreImage: DMA Ch.1 (GS->MEM) does not terminate "
     "sceGsExecStoreImage: Enough data does not reach VIF1 " */

undefined4 FUN_00372498(uint param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar6 = 0;
  uVar15 = 0;
  uVar20 = 0;
  uVar5 = 0;
  uVar19 = 0;
  uVar7 = (uint)*(undefined8 *)(param_1 + 0x40);
  uVar18 = uVar7 & 0xfff;
  uVar17 = (uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) & 0xfff;
  uVar13 = 0;
  switch((uint)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x18) & 0x3f) {
  case 0:
  case 0x30:
    uVar15 = uVar18 * uVar17 * 4;
    uVar5 = (int)uVar15 >> 4;
    uVar15 = uVar15 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 3 & 0x1ffc;
      iVar6 = (int)(uVar18 * uVar13) >> 2;
LAB_00372668:
      iVar6 = ((iVar6 - uVar20) - uVar5) + -1;
      goto switchD_0037252c_caseD_3;
    }
    break;
  case 1:
  case 0x31:
    uVar15 = uVar18 * uVar17 * 3;
    uVar5 = (int)uVar15 >> 4;
    uVar15 = uVar15 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 0xf & 0x1ff0;
      iVar6 = ((((int)(uVar18 * uVar13 * 3) >> 4) - uVar20) - uVar5) + -1;
      goto switchD_0037252c_caseD_3;
    }
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    uVar15 = uVar18 * uVar17 * 2;
    uVar5 = (int)uVar15 >> 4;
    uVar15 = uVar15 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar18 * uVar13) >> 3;
      goto LAB_00372668;
    }
    break;
  default:
    goto switchD_0037252c_caseD_3;
  case 0x13:
  case 0x1b:
    uVar5 = (int)(uVar18 * uVar17) >> 4;
    uVar15 = uVar18 * uVar17 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar18 * uVar13) >> 4;
      goto LAB_00372668;
    }
    break;
  case 0x14:
  case 0x24:
  case 0x2c:
    uVar5 = (int)(uVar18 * uVar17) >> 5;
    uVar15 = (int)(uVar18 * uVar17) >> 1 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar18 * uVar13) >> 5;
      goto LAB_00372668;
    }
  }
  iVar6 = 0;
  uVar13 = uVar17;
switchD_0037252c_caseD_3:
  if (uVar15 != 0) {
    *(ulong *)(param_1 + 0x40 | 0x20000000) = (long)(int)(uVar7 & 0xfff) | (ulong)uVar13 << 0x20;
  }
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar19;
    uVar19 = uVar19 + 1;
    if (bVar1) goto LAB_00372840;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar9 = GsGetIMR();
  uVar10 = GsPutIMR(uVar9 | 0x200);
  REG_GS_CSR = 2;
  REG_DMAC_1_VIF1_QWC = 7;
  if ((param_1 & 0x70000000) == 0x70000000) {
    param_1 = param_1 & 0xfffffff | 0x80000000;
  }
  else {
    param_1 = param_1 & 0xfffffff;
  }
  REG_DMAC_1_VIF1_MADR = param_1;
  REG_DMAC_1_VIF1_CHCR = 0x101;
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar19;
    uVar19 = uVar19 + 1;
    if (bVar1) {
LAB_00372840:
      FUN_0036a038(0x40c1e0);
      return 0xffffffff;
    }
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar9 = REG_GS_CSR;
  while ((uVar9 & 2) == 0) {
    bVar1 = 0x1000000 < uVar19;
    uVar19 = uVar19 + 1;
    if (bVar1) {
      FUN_0036a038(0x40c218);
      REG_VIF1_FIFO = (int)_DAT_003d94e0;
      DAT_10005004 = (int)((ulong)_DAT_003d94e0 >> 0x20);
      DAT_10005008 = DAT_003d94e8;
      DAT_1000500c = DAT_003d94ec;
      return 0xffffffff;
    }
    uVar9 = REG_GS_CSR;
  }
  REG_VIF1_STAT = 0x800000;
  REG_GS_BUSDIR = 1;
  if (uVar20 != 0) {
    REG_DMAC_1_VIF1_QWC = uVar20;
    if ((param_2 & 0x70000000) == 0x70000000) {
      uVar7 = param_2 & 0xfffffff | 0x80000000;
    }
    else {
      uVar7 = param_2 & 0xfffffff;
    }
    REG_DMAC_1_VIF1_MADR = uVar7;
    REG_DMAC_1_VIF1_CHCR = 0x100;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar7 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar19;
      uVar19 = uVar19 + 1;
      if (bVar1) {
        pcVar12 = "sceGsExecStoreImage: DMA Ch.1 (GS->MEM) does not terminate\r\n";
        goto LAB_00372898;
      }
      uVar7 = REG_DMAC_1_VIF1_CHCR;
    }
  }
  iVar14 = 0;
  if (uVar5 != 0) {
    puVar16 = (undefined4 *)(uVar20 * 0x10 + param_2);
    do {
      uVar7 = REG_VIF1_STAT;
      while ((uVar7 & 0x1f000000) == 0) {
        bVar1 = 0x1000000 < uVar19;
        uVar19 = uVar19 + 1;
        if (bVar1) goto LAB_00372890;
        uVar7 = REG_VIF1_STAT;
      }
      uVar2 = REG_VIF1_FIFO;
      uVar3 = DAT_10005008;
      uVar4 = DAT_1000500c;
      iVar14 = iVar14 + 1;
      *puVar16 = (int)uVar2;
      puVar16[1] = (int)((ulong)uVar2 >> 0x20);
      puVar16[2] = uVar3;
      puVar16[3] = uVar4;
      puVar16 = puVar16 + 4;
    } while (iVar14 < (int)uVar5);
  }
  if (uVar15 != 0) {
    uVar7 = REG_VIF1_STAT;
    while ((uVar7 & 0x1f000000) == 0) {
      bVar1 = 0x1000000 < uVar19;
      uVar19 = uVar19 + 1;
      if (bVar1) {
LAB_00372890:
        pcVar12 = "sceGsExecStoreImage: Enough data does not reach VIF1\n";
LAB_00372898:
        FUN_0036a038(pcVar12);
        REG_GS_CSR = 0x100;
        REG_GS_BUSDIR = 0;
        REG_GIF_CTRL = 1;
        REG_VIF1_FBRST = 1;
        return 0xffffffff;
      }
      uVar7 = REG_VIF1_STAT;
    }
    iVar14 = 0;
    uVar2 = REG_VIF1_FIFO;
    uStack_88 = DAT_10005008;
    uStack_84 = DAT_1000500c;
    uStack_90 = (int)uVar2;
    uStack_8c = (int)((ulong)uVar2 >> 0x20);
    if (uVar15 != 0) {
      do {
        puVar8 = (undefined1 *)((int)&uStack_90 + iVar14);
        puVar11 = (undefined1 *)((uVar20 + uVar5) * 0x10 + param_2 + iVar14);
        iVar14 = iVar14 + 1;
        *puVar11 = *puVar8;
      } while (iVar14 < (int)uVar15);
    }
    iVar14 = 0;
    if (0 < iVar6) {
      do {
        uVar15 = REG_VIF1_STAT;
        while ((uVar15 & 0x1f000000) == 0) {
          bVar1 = 0x1000000 < uVar19;
          uVar19 = uVar19 + 1;
          if (bVar1) goto LAB_00372890;
          uVar15 = REG_VIF1_STAT;
        }
        uVar2 = REG_VIF1_FIFO;
        uStack_88 = DAT_10005008;
        uStack_84 = DAT_1000500c;
        iVar14 = iVar14 + 1;
        uStack_90 = (undefined4)uVar2;
        uStack_8c = (undefined4)((ulong)uVar2 >> 0x20);
      } while (iVar14 < iVar6);
    }
  }
  REG_VIF1_STAT = 0;
  REG_GS_BUSDIR = 0;
  GsPutIMR(uVar10);
  REG_GS_CSR = 2;
  REG_VIF1_FIFO = (int)_DAT_003d94e0;
  DAT_10005004 = (int)((ulong)_DAT_003d94e0 >> 0x20);
  DAT_10005008 = DAT_003d94e8;
  DAT_1000500c = DAT_003d94ec;
  return 0;
}


// ==== FUN_00372b28 @ 00372b28 ====

undefined4
FUN_00372b28(ulong *param_1,short param_2,ushort param_3,short param_4,short param_5,short param_6)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar4 = (int)((uint)param_3 << 0x10) >> 0x10;
  uVar5 = (ulong)(int)param_2;
  iVar3 = (int)param_4;
  uVar6 = (ulong)(int)param_5;
  param_1[1] = 0x4d;
  *param_1 = ((long)((int)((uint)param_3 << 0x10) >> 0x16) & 0x3fU) << 0x10 | (uVar5 & 0xf) << 0x18;
  param_1[3] = 0x4f;
  if (uVar6 == 0) {
    sVar1 = FUN_00372d68(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18 | 0x100000000;
  }
  else {
    sVar1 = FUN_00372d68(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18;
  }
  param_1[2] = uVar2;
  param_1[5] = 0x19;
  param_1[4] = (0x800 - (long)((short)param_3 >> 1)) * 0x10 | 0x800 - (long)(param_4 >> 1) << 0x24;
  param_1[7] = 0x41;
  param_1[6] = (long)(iVar4 + -1) << 0x10 | (long)(iVar3 + -1) << 0x30;
  param_1[9] = 0x1a;
  param_1[8] = param_1[8] | 1;
  param_1[0xb] = 0x46;
  param_1[10] = param_1[10] | 1;
  param_1[0xd] = 0x45;
  if ((uVar5 & 2) == 0) {
    uVar5 = param_1[0xc] & 0xfffffffffffffffe;
  }
  else {
    uVar5 = param_1[0xc] | 1;
  }
  param_1[0xc] = uVar5;
  param_1[0xf] = 0x48;
  if (uVar6 == 0) {
    uVar5 = 0x30000;
  }
  else {
    uVar5 = (uVar6 & 3) << 0x11 | 0x10000;
  }
  param_1[0xe] = uVar5;
  SYNC(0);
  return 8;
}


// ==== FUN_00372d08 @ 00372d08 ====

void FUN_00372d08(int param_1,uint param_2)

{
  FUN_003720b0((param_2 & 1) * 0x28 + param_1);
  if ((param_2 & 1) == 0) {
    FUN_00372e30(param_1 + 0x50);
  }
  else {
    FUN_00372e30(param_1 + 0x1c0);
  }
  return;
}


// ==== FUN_00372d68 @ 00372d68 ====

int FUN_00372d68(ulong param_1,short param_2,short param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  puVar1 = (ulong *)FUN_0029b4f0();
  iVar2 = param_2 + 0x3f;
  iVar3 = param_2 + 0x7e;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if ((param_1 & 2) == 0) {
    iVar2 = iVar4 + 0x3e;
    if (-1 < iVar4 + 0x1f) {
      iVar2 = iVar4 + 0x1f;
    }
    iVar2 = iVar2 >> 5;
  }
  else {
    iVar2 = iVar4 + 0x7e;
    if (-1 < iVar4 + 0x3f) {
      iVar2 = iVar4 + 0x3f;
    }
    iVar2 = iVar2 >> 6;
  }
  iVar2 = (iVar3 >> 6) * iVar2;
  if ((*puVar1 & 0xffff0000ffff) == 1) {
    iVar2 = iVar2 * 0x10000;
  }
  else {
    iVar2 = iVar2 * 0x20000;
  }
  return iVar2 >> 0x10;
}


// ==== FUN_00372e30 @ 00372e30 ====

/* Strings referenciadas:
     "sceGsPutDrawEnv: DMA Ch.2 does not terminate " */

undefined4 FUN_00372e30(undefined8 *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = REG_DMAC_2_GIF_CHCR;
  uVar3 = 0;
  while( true ) {
    if ((uVar2 & 0x100) == 0) {
      REG_DMAC_2_GIF_QWC = ((uint)*param_1 & 0x7fff) + 1;
      if (((uint)param_1 & 0x70000000) == 0x70000000) {
        uVar2 = (uint)param_1 & 0xfffffff | 0x80000000;
      }
      else {
        uVar2 = (uint)param_1 & 0xfffffff;
      }
      REG_DMAC_2_GIF_MADR = uVar2;
      REG_DMAC_2_GIF_CHCR = 0x101;
      return 0;
    }
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) break;
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
  FUN_0036a038(0x40c3b0);
  return 0xffffffff;
}


// ==== FUN_00373148 @ 00373148 ====

undefined8 FUN_00373148(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    lVar4 = FUN_002e3918();
    uVar3 = 0;
    if (lVar4 != 0) {
      lVar4 = (*DAT_0045127c)(lVar4,0x40c418);
      uVar3 = 0;
      if (lVar4 != 0) {
        (*DAT_00451294)(lVar4,0,2);
        uVar3 = (*DAT_00451298)(lVar4);
        (*DAT_00451280)(lVar4);
      }
    }
  }
  else {
    uVar2 = (*DAT_00451298)(iVar1);
    (*DAT_00451294)(iVar1,0,2);
    uVar3 = (*DAT_00451298)(iVar1);
    (*DAT_00451294)(iVar1,uVar2,0);
  }
  return uVar3;
}


// ==== FUN_00373250 @ 00373250 ====

undefined8 FUN_00373250(undefined8 param_1)

{
  *(undefined4 *)param_1 = &DAT_003f2048;
  return param_1;
}


// ==== FUN_00373268 @ 00373268 ====

void FUN_00373268(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_003732a0 @ 003732a0 ====

undefined4 FUN_003732a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_002e3918(param_2);
  iVar2 = (int)param_2;
  if (lVar1 == 0) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  else {
    lVar1 = (*DAT_0045127c)(lVar1,0x40c418);
    if (lVar1 != 0) {
      *(int *)(iVar2 + 8) = (int)lVar1;
      return 1;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return 0;
}


// ==== FUN_00373300 @ 00373300 ====

undefined8 FUN_00373300(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_00451290)(param_3,1,param_4,*(int *)(param_2 + 8));
  }
  return uVar1;
}


// ==== FUN_00373348 @ 00373348 ====

void FUN_00373348(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    (*DAT_00451280)();
  }
  return;
}


// ==== FUN_00373a08 @ 00373a08 ====

undefined8 FUN_00373a08(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x48aa70;
  lVar1 = FUN_00311bf8(0x48aa70);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x48aa70,0x40c470,0);
    FUN_00311e60(0x48aa70,0x3d9720,6,0x3d9798,10);
  }
  return uVar2;
}


// ==== FUN_00373a78 @ 00373a78 ====

void FUN_00373a78(void)

{
  FUN_00311ca0(0x48aa70);
  return;
}


// ==== FUN_00373a98 @ 00373a98 ====

void FUN_00373a98(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0031de30(param_1,0x40c580,0);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x40) = 0x240;
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
  *(uint *)(iVar3 + 0x40) = iVar2 << 0x1c | 0x240;
  *(code **)(iVar3 + 0x28) = FUN_003741a8;
  *(code **)(iVar3 + 0x34) = FUN_00374348;
  *(code **)(iVar3 + 0x2c) = FUN_00373c18;
  *(code **)(iVar3 + 0x3c) = FUN_003743a8;
  *(undefined2 *)(iVar3 + 0x44) = 0x60;
  *(undefined **)(iVar3 + 0x54) = &DAT_003d9958;
  *(undefined2 *)(iVar3 + 0x46) = 2;
  return;
}


// ==== FUN_00373c18 @ 00373c18 ====

undefined8 FUN_00373c18(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  uVar1 = *(uint *)(iVar4 + 0x60);
  if (uVar1 == 2) {
    if (1 < *(int *)(iVar4 + 0x68) - 6U) {
      FUN_00322d20(param_1);
    }
    if ((*(uint *)(iVar4 + 0x224) & 0x20000) == 0) {
      uVar2 = 6;
      if ((*(int *)(iVar4 + 0x1e4) == *(int *)(iVar4 + 0x1dc)) &&
         (*(int *)(*(int *)(iVar4 + 0x1e4) * 0x14 + *(int *)(iVar4 + 0x1d8) + 0x10) == 1)) {
        uVar2 = 7;
      }
      *(undefined4 *)(iVar4 + 0x68) = uVar2;
    }
    else {
      uVar2 = 7;
      if (((*(uint *)(*(int *)(iVar4 + 0x208) * 0x14 + *(int *)(iVar4 + 0x1fc) + 0x10) & 1) == 0) &&
         (uVar2 = 7,
         (*(uint *)(*(int *)(iVar4 + 0x208) * 0x14 + *(int *)(iVar4 + 0x1fc) + 0x10) & 4) == 0)) {
        uVar2 = 6;
      }
      *(undefined4 *)(iVar4 + 0x68) = uVar2;
    }
  }
  else {
    if (uVar1 < 3) {
      if (uVar1 != 1) {
        return param_1;
      }
      if (*(int *)(iVar4 + 0x68) == 3) {
        return param_1;
      }
      FUN_00322d20(param_1);
      return param_1;
    }
    if (uVar1 != 3) {
      return param_1;
    }
  }
  lVar3 = FUN_00376f70(iVar4 + 0x84);
  if ((int)lVar3 - 3U < 2) {
    if (*(int *)(iVar4 + 0x68) == 4) {
      FUN_00322d20(param_1);
    }
    if ((lVar3 == 4) && (*(int *)(iVar4 + 0x60) == 2)) {
      *(undefined4 *)(iVar4 + 0x60) = 1;
      FUN_00322d20(param_1);
    }
  }
  FUN_003761b8(iVar4 + 0x84);
  return param_1;
}


// ==== FUN_00373dc0 @ 00373dc0 ====

undefined8 FUN_00373dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  int *apiStack_60 [4];
  
  if (*(char *)(param_1 + 0x239) == *(char *)(param_1 + 0x23b)) {
    uVar6 = 0;
  }
  else {
    lVar5 = FUN_00376be8(param_1 + 0x84,apiStack_60);
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar6 = FUN_00322ff0(param_1 + 0x238);
      puVar8 = (uint *)uVar6;
      puVar8[1] = (uint)lVar5;
      *(undefined4 *)(puVar8[3] + 0xc) = 2;
      *(uint *)puVar8[3] = (uint)(*apiStack_60[0] - *(int *)(*(int *)(param_1 + 0x1a8) + 0x10)) >> 5
      ;
      uVar2 = FUN_00377a20(param_1 + 0x84,apiStack_60[0],0);
      *(undefined4 *)(puVar8[3] + 8) = uVar2;
      if ((*(int *)(param_1 + 0x18c) == 0) && ((*(uint *)(param_1 + 0x224) & 0x8000) == 0)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
        iVar3 = FUN_00314f08(*(int *)(iVar1 + 0x14),*(undefined4 *)(*(int *)(iVar1 + 0x14) + 8));
        iVar4 = FUN_00314f08(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x20));
        uVar7 = iVar3 - apiStack_60[0][1] * iVar4;
        puVar8[2] = uVar7;
        if (*(int *)(iVar1 + 0xc) == 0) {
          trap(7);
        }
        uVar7 = (int)(uVar7 * *(ushort *)(iVar1 + 0x1a) *
                     (uint)*(byte *)(*(int *)(iVar1 + 0x14) + 0xd)) / *(int *)(iVar1 + 0xc);
        puVar8[2] = uVar7;
        if (*(uint *)(iVar1 + 0x20) < uVar7) {
          puVar8[2] = *(uint *)(iVar1 + 0x20);
        }
        *puVar8 = *puVar8 | 8;
      }
    }
  }
  return uVar6;
}


// ==== FUN_00373f20 @ 00373f20 ====

void FUN_00373f20(int param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  iVar8 = param_1 + 0x84;
  if (param_2[1] != 0) {
    FUN_00377628(iVar8);
  }
  param_2 = (int *)*param_2;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  if (param_2[3] == 1) {
    puVar4 = *(uint **)(iVar3 + 0x14);
    if ((int)*puVar4 < 0) {
      fVar9 = (float)param_2[2];
    }
    else {
      fVar9 = (float)param_2[2];
    }
    iVar5 = *(int *)(iVar3 + 0xc);
    uVar7 = (int)(fVar9 * (float)*puVar4) + -1 + iVar5 & -iVar5;
  }
  else {
    uVar7 = param_2[2];
    puVar4 = *(uint **)(iVar3 + 0x14);
    iVar5 = *(int *)(iVar3 + 0xc);
  }
  if (iVar5 == 0) {
    trap(7);
  }
  uVar2 = *(ushort *)(iVar3 + 0x1a);
  bVar1 = *(byte *)((int)puVar4 + 0xd);
  uVar6 = param_2[1];
  if (uVar6 == 2) {
    FUN_00377868(iVar8,*param_2);
  }
  else if (uVar6 < 3) {
    if (uVar6 == 1) {
      FUN_003778a0(iVar8,*param_2);
    }
  }
  else if (uVar6 == 3) {
    *(int *)(param_1 + 0x1d0) = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + *param_2 * 0x20;
  }
  FUN_003772b8(iVar8,0,((int)uVar7 / iVar5) * (uint)uVar2 * (uint)bVar1);
  return;
}


// ==== FUN_00374090 @ 00374090 ====

long FUN_00374090(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0031dc40(DAT_0040e7d0,0xc,0x48aa98,0x48aaf8,0x40e9e8,0x3080f);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_00373a98(lVar1);
    lVar2 = FUN_0031d988(lVar1,0x3d9860,5,0x3d98d8,5);
    if ((lVar2 == 0) || (lVar2 = FUN_00379330(), lVar2 == 0)) {
      FUN_0031d7a8(lVar1);
      lVar2 = 0;
    }
    else {
      FUN_0031ddd8(lVar1,lVar2);
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


// ==== FUN_00374140 @ 00374140 ====

undefined8 FUN_00374140(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003793a0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0031d7a8(0x48aa98);
  }
  return uVar2;
}


// ==== FUN_00374188 @ 00374188 ====

void FUN_00374188(int param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00377628(param_1 + 0x84);
  }
  return;
}


// ==== FUN_003741a8 @ 003741a8 ====

undefined8
FUN_003741a8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
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
  undefined4 uStack_c0;
  code *pcStack_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b0;
  
  puVar5 = (undefined4 *)param_1;
  iVar4 = (int)param_3;
  uStack_100 = *(undefined4 *)(iVar4 + 0x1c);
  uStack_e8 = *(undefined4 *)(iVar4 + 0x34);
  uStack_e4 = *(undefined4 *)(iVar4 + 0x38);
  uStack_f8 = *(undefined4 *)(iVar4 + 0x24);
  uStack_f0 = *(undefined4 *)(iVar4 + 0x2c);
  uStack_ec = *(undefined4 *)(iVar4 + 0x30);
  uStack_fc = *(undefined4 *)(iVar4 + 0x20);
  uStack_c4 = *(undefined4 *)(iVar4 + 0x58);
  uStack_c8 = *(undefined4 *)(iVar4 + 0x54);
  uStack_cc = *(undefined4 *)(iVar4 + 0x50);
  uStack_e0 = *(undefined4 *)(iVar4 + 0x3c);
  uStack_dc = *(undefined4 *)(iVar4 + 0x40);
  uStack_d4 = *(undefined4 *)(iVar4 + 0x48);
  uStack_d8 = *(undefined4 *)(iVar4 + 0x44);
  uStack_f4 = *(undefined4 *)(iVar4 + 0x28);
  uStack_d0 = *(undefined4 *)(iVar4 + 0x4c);
  pcStack_bc = FUN_00374640;
  uStack_c0 = *(undefined4 *)(iVar4 + 0x5c);
  puStack_b8 = puVar5;
  uStack_b0 = param_2;
  FUN_00322fd8(puVar5 + 0x8e,0,0);
  if (puVar5[5] != 0) {
    *(undefined4 *)puVar5[6] = puVar5[5];
    *(undefined4 *)(puVar5[5] + 4) = puVar5[6];
    puVar5[6] = 0;
    puVar5[5] = 0;
  }
  lVar2 = FUN_00322bb8(param_1,uStack_b0,param_3,param_4,param_5);
  if ((lVar2 == 0) || (lVar2 = FUN_00375178(puVar5 + 0x21,&uStack_100), lVar2 == 0)) {
    param_1 = 0;
  }
  else {
    uVar3 = FUN_00311db8(0x40c6e0);
    uVar1 = FUN_00311568(uVar3,*puVar5,*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    puVar5[0x20] = uVar1;
  }
  return param_1;
}


// ==== FUN_00374348 @ 00374348 ====

void FUN_00374348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00374188(param_1,1);
  FUN_00311b50(*(undefined4 *)((int)param_1 + 0x80));
  FUN_00377840((int)param_1 + 0x84);
  FUN_00322c70(param_1,param_2,param_3);
  return;
}


// ==== FUN_003743a8 @ 003743a8 ====

undefined8 FUN_003743a8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_00322da8();
  *param_2 = 0;
  FUN_003777e0(&uStack_80);
  param_2[0x12] = uStack_54;
  param_2[7] = uStack_80;
  param_2[0x11] = uStack_58;
  param_2[0xd] = uStack_68;
  param_2[0xe] = uStack_64;
  param_2[9] = uStack_78;
  param_2[0xb] = uStack_70;
  param_2[0xc] = uStack_6c;
  param_2[10] = uStack_74;
  param_2[8] = uStack_7c;
  param_2[0x16] = uStack_44;
  param_2[0x15] = uStack_48;
  param_2[0xf] = uStack_60;
  param_2[0x10] = uStack_5c;
  return param_1;
}


// ==== FUN_00374458 @ 00374458 ====

undefined8 FUN_00374458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00373f20(param_1,param_3);
  return param_1;
}


// ==== FUN_00374488 @ 00374488 ====

undefined8 FUN_00374488(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  uVar1 = param_3[1];
  piVar2 = (int *)(*(int *)(iVar3 + 0x1d8) + *(int *)(iVar3 + 0x1e0) * 0x14);
  if (uVar1 == 2) {
    *param_3 = *(uint *)*piVar2;
  }
  else if ((uVar1 < 3) && (uVar1 == 1)) {
    *param_3 = *(uint *)(*piVar2 + 4);
  }
  else {
    param_3[1] = 3;
    *param_3 = (uint)(*piVar2 - *(int *)(*(int *)(iVar3 + 0x1a8) + 0x10)) >> 5;
  }
  param_3[3] = 2;
  uVar1 = FUN_00377a20(iVar3 + 0x84,piVar2,0);
  param_3[2] = uVar1;
  return param_1;
}


// ==== FUN_003745b8 @ 003745b8 ====

undefined8 FUN_003745b8(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_00322ee0(param_1,0);
  *(code **)(*(int *)(param_3 + 4) + 4) = FUN_00373dc0;
  *(int *)(*(int *)(param_3 + 4) + 8) = (int)param_1;
  return param_1;
}


// ==== FUN_00374608 @ 00374608 ====

undefined8 FUN_00374608(undefined8 param_1,undefined8 param_2,int *param_3)

{
  if (*param_3 != 0) {
    FUN_00377628((int)param_1 + 0x84);
  }
  return param_1;
}


// ==== FUN_00374640 @ 00374640 ====

void FUN_00374640(int param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (int)param_3;
  if (param_2 == 0) {
    iVar5 = *(int *)(iVar7 + 0x230);
    uVar1 = *(uint *)(iVar7 + 500);
    *(code **)(iVar7 + 0x240) = FUN_00374700;
    puVar2 = *(undefined4 **)(iVar7 + 0x234);
    uVar6 = 0;
    *(int *)(iVar7 + 0x244) = iVar7;
    puVar4 = puVar2;
    if (uVar1 != 0) {
      do {
        *puVar4 = 0;
        uVar6 = uVar6 + 1;
        puVar4[1] = iVar7;
        puVar4[4] = iVar7 + 0x240;
        uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x124) + 0x18) + 0x20);
        puVar4[3] = iVar5;
        puVar4[2] = uVar3;
        *(undefined4 *)(iVar5 + 4) = 3;
        *(undefined4 *)(iVar5 + 0xc) = 2;
        iVar5 = iVar5 + 0x10;
        puVar4 = puVar4 + 5;
      } while (uVar6 < uVar1);
    }
    FUN_00322fd8(iVar7 + 0x238,puVar2);
  }
  else {
    *(undefined4 *)(iVar7 + 0x68) = 1;
  }
  FUN_00322c90(param_3);
  return;
}


// ==== FUN_00374700 @ 00374700 ====

void FUN_00374700(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 auStack_40 [4];
  
  puVar1 = (uint *)param_1;
  if ((*puVar1 & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
    auStack_40[0] = 1;
    FUN_00322e18(param_2,0,auStack_40);
  }
  FUN_00376de0((int)param_2 + 0x84,puVar1[1]);
  FUN_00323058((int)param_2 + 0x238,param_1);
  return;
}


// ==== FUN_00374780 @ 00374780 ====

void FUN_00374780(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0031de30(param_1,0x40c590,0);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x40) = 0xc0;
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
  *(uint *)(iVar3 + 0x40) = iVar2 << 0x1c | 0xc0;
  *(code **)(iVar3 + 0x28) = FUN_003748f8;
  *(undefined1 **)(iVar3 + 0x34) = &LAB_00374ee8;
  *(undefined1 **)(iVar3 + 0x2c) = &LAB_00374f48;
  *(undefined1 **)(iVar3 + 0x30) = &LAB_00375020;
  *(code **)(iVar3 + 0x3c) = FUN_00375028;
  *(undefined2 *)(iVar3 + 0x44) = 0x20;
  return;
}


// ==== FUN_003748f8 @ 003748f8 ====

undefined8 FUN_003748f8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  
  puVar14 = (undefined4 *)param_1;
  lVar6 = FUN_00322bb8();
  if (lVar6 != 0) {
    uVar7 = FUN_00311db8(0x409f48);
    uVar3 = FUN_00311568(uVar7,*puVar14,0,0);
    puVar14[0x20] = uVar3;
    iVar5 = *(int *)(*(int *)(param_3 + 8) + 0x14);
    puVar14[0x21] = *(undefined4 *)(param_3 + 0x1c);
    puVar1 = *(undefined8 **)(param_3 + 8);
    uVar7 = puVar1[1];
    uVar10 = puVar1[2];
    uVar12 = puVar1[3];
    *(undefined8 *)(puVar14 + 0x22) = *puVar1;
    *(undefined8 *)(puVar14 + 0x24) = uVar7;
    *(undefined8 *)(puVar14 + 0x26) = uVar10;
    *(undefined8 *)(puVar14 + 0x28) = uVar12;
    uVar3 = *(undefined4 *)(puVar1 + 5);
    *(undefined8 *)(puVar14 + 0x2a) = puVar1[4];
    puVar14[0x2c] = uVar3;
    iVar9 = *(int *)(param_3 + 0xc);
    puVar14[0x2d] = iVar9;
    lVar6 = (**(code **)puVar14[0x21])
                      (iVar9 * 0x18 + iVar5 * (iVar9 * 0x14 + 0x18),((undefined4 *)puVar14[0x21])[2]
                      );
    puVar14[0x2f] = (int)lVar6;
    if (lVar6 != 0) {
      iVar9 = puVar14[0x2d];
      uVar13 = 0;
      iVar8 = (int)lVar6 + iVar9 * 4;
      iVar4 = iVar8 + iVar9 * 4;
      puVar14[0x30] = iVar8;
      iVar8 = iVar4 + iVar5 * 4;
      puVar14[0x31] = iVar4;
      iVar4 = iVar8 + iVar5 * 4;
      puVar14[0x32] = iVar8;
      puVar14[0x33] = iVar4;
      iVar4 = iVar9 * iVar5 * 0x14 + iVar4;
      puVar14[0x34] = iVar4;
      puVar14[0x35] = iVar4 + iVar5 * 8;
      if (iVar9 != 0) {
        iVar5 = puVar14[0x30];
        while( true ) {
          *(undefined4 *)(uVar13 * 4 + iVar5) = 0;
          *(undefined4 *)(uVar13 * 4 + puVar14[0x2f]) = 0;
          uVar13 = uVar13 + 1;
          if ((uint)puVar14[0x2d] <= uVar13) break;
          iVar5 = puVar14[0x30];
        }
      }
      if (*(int *)(*(int *)(param_3 + 8) + 0x14) != 0) {
        iVar5 = puVar14[0x31];
        uVar13 = 0;
        while( true ) {
          iVar9 = uVar13 * 8;
          uVar11 = 0;
          *(undefined4 *)(uVar13 * 4 + iVar5) = 0;
          *(undefined4 *)(uVar13 * 4 + puVar14[0x32]) = 0;
          *(undefined4 **)(iVar9 + puVar14[0x35]) = puVar14 + 0x10;
          *(uint *)(iVar9 + puVar14[0x35] + 4) = uVar13;
          *(code **)(iVar9 + puVar14[0x34]) = FUN_00374d48;
          *(int *)(iVar9 + puVar14[0x34] + 4) = puVar14[0x35] + iVar9;
          uVar2 = puVar14[0x2d];
          if (uVar2 != 0) {
            do {
              iVar5 = uVar13 * uVar2 + uVar11;
              uVar11 = uVar11 + 1;
              *(int *)(iVar5 * 0x14 + puVar14[0x33] + 0x10) = puVar14[0x34] + iVar9;
              uVar2 = puVar14[0x2d];
            } while (uVar11 < uVar2);
          }
          if (*(uint *)(*(int *)(param_3 + 8) + 0x14) <= uVar13 + 1) break;
          iVar5 = puVar14[0x31];
          uVar13 = uVar13 + 1;
        }
      }
      puVar14[0x2e] = 0;
      FUN_00322c90(param_1);
      return param_1;
    }
  }
  return 0;
}


// ==== FUN_00374b90 @ 00374b90 ====

undefined4 * FUN_00374b90(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x68) != 3) {
    puVar4 = (uint *)(*(int *)(param_1 + 0xc4) + param_2 * 4);
    if (*(int *)(*puVar4 * 4 + *(int *)(param_1 + 0xc0)) == 0) {
      uVar1 = FUN_00322f80(param_1 + 0x50);
      *(undefined4 *)(*puVar4 * 4 + *(int *)(param_1 + 0xc0)) = uVar1;
      if (*(int *)(*puVar4 * 4 + *(int *)(param_1 + 0xc0)) == 0) {
        *(undefined4 *)(param_1 + 0xb8) = 1;
        return (undefined4 *)0x0;
      }
      *(undefined4 *)(*puVar4 * 4 + *(int *)(param_1 + 0xbc)) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      uVar2 = *puVar4;
    }
    else {
      uVar2 = *puVar4;
    }
    if ((*(uint *)(uVar2 * 4 + *(int *)(param_1 + 0xbc)) & 1 << (param_2 & 0x1f)) != 0) {
      puVar3 = (undefined4 *)
               (*(int *)(param_1 + 0xcc) + (param_2 * *(int *)(param_1 + 0xb4) + uVar2) * 0x14);
      *puVar3 = **(undefined4 **)(uVar2 * 4 + *(int *)(param_1 + 0xc0));
      puVar3[3] = *(undefined4 *)(*(int *)(*puVar4 * 4 + *(int *)(param_1 + 0xc0)) + 0xc);
      puVar3[2] = *(undefined4 *)(param_2 * 0x28 + *(int *)(param_1 + 0xa0) + 0x20);
      puVar3[1] = *(int *)(*(int *)(*puVar4 * 4 + *(int *)(param_1 + 0xc0)) + 4) +
                  *(int *)(param_2 * 0x28 + *(int *)(param_1 + 0xa0) + 0x24);
      uVar2 = *puVar4;
      *puVar4 = uVar2 + 1;
      if (uVar2 + 1 < *(uint *)(param_1 + 0xb4)) {
        return puVar3;
      }
      *puVar4 = 0;
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}


// ==== FUN_00374d48 @ 00374d48 ====

void FUN_00374d48(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  puVar6 = (uint *)(*(int *)(iVar1 + 0x88) + param_2[1] * 4);
  puVar5 = (uint *)(*puVar6 * 4 + *(int *)(iVar1 + 0x7c));
  *puVar5 = *puVar5 & ~(1 << (param_2[1] & 0x1fU));
  if ((*(uint *)(*puVar6 * 4 + *(int *)(iVar1 + 0x7c)) &
      (1 << (*(uint *)(iVar1 + 0x5c) & 0x1f)) - 1U) == 0) {
    iVar2 = *(int *)(*puVar6 * 4 + *(int *)(iVar1 + 0x80));
    puVar3 = *(undefined4 **)(iVar2 + 0x10);
    (*(code *)*puVar3)(iVar2,puVar3[1]);
    *(undefined4 *)(*puVar6 * 4 + *(int *)(iVar1 + 0x80)) = 0;
    uVar4 = *puVar6;
  }
  else {
    uVar4 = *puVar6;
  }
  *puVar6 = uVar4 + 1;
  if (*(uint *)(iVar1 + 0x74) <= uVar4 + 1) {
    *puVar6 = 0;
  }
  return;
}


// ==== FUN_00374e28 @ 00374e28 ====

long FUN_00374e28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_0031dc40(uGpffff8fe0,0xc,0x48ab10,0x48ab70,&gp0xffff9200,0x3080f);
  lVar3 = 0;
  if (lVar1 != 0) {
    FUN_00374780(lVar1);
    lVar2 = FUN_0031d988(lVar1,0x3d9970,3,0x3d99b8,2);
    lVar3 = lVar1;
    if (lVar2 == 0) {
      FUN_0031d7a8(lVar1);
      lVar3 = 0;
    }
  }
  return lVar3;
}


// ==== FUN_00374eb8 @ 00374eb8 ====

void FUN_00374eb8(void)

{
  FUN_0031d7a8(0x48ab10);
  return;
}


// ==== FUN_00375028 @ 00375028 ====

undefined8 FUN_00375028(undefined8 param_1,undefined4 *param_2)

{
  FUN_00322da8();
  param_2[1] = 1;
  param_2[7] = &PTR_LAB_003d0660;
  *param_2 = 1;
  return param_1;
}


// ==== FUN_00375078 @ 00375078 ====

undefined8 FUN_00375078(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 auStack_30 [4];
  
  auStack_30[0] = *param_3;
  FUN_00322e18(param_1,0,auStack_30);
  return param_1;
}


// ==== FUN_003750b0 @ 003750b0 ====

undefined8 FUN_003750b0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_00322ee0(param_1,0);
  *(undefined4 *)(param_3[1] + 8) = *param_3;
  *(code **)(param_3[1] + 4) = FUN_00374b90;
  return param_1;
}


// ==== FUN_00375108 @ 00375108 ====

undefined8 FUN_00375108(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00322dd8();
  *param_3 = uVar1;
  return param_1;
}


// ==== FUN_00375140 @ 00375140 ====

undefined8 FUN_00375140(undefined8 param_1)

{
  FUN_00322f10(param_1,0);
  return param_1;
}


// ==== FUN_00375178 @ 00375178 ====

undefined4 FUN_00375178(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1;
  puVar5 = puVar6 + 0x4f;
  puVar6[0x68] = 0;
  *puVar6 = 0;
  puVar6[0x3f] = 0;
  puVar6[0x40] = 0;
  puVar6[0x41] = 0;
  puVar6[0x42] = 0;
  puVar6[0x49] = 0;
  puVar6[0x44] = *param_2;
  puVar6[0x45] = param_2[1];
  puVar6[0x46] = param_2[2];
  puVar6[0x47] = param_2[0x11];
  puVar6[0x48] = param_2[0x12];
  puVar6[0x67] = param_2[8];
  puVar6[0x66] = param_2[9];
  FUN_00316758(puVar5);
  FUN_003165c8(puVar5,param_2[7]);
  FUN_00316618(puVar5,param_2[6]);
  puVar6[0x5d] = param_2[0xf];
  puVar6[0x5f] = param_2[0xe];
  puVar6[0x54] = param_2[0xb];
  iVar1 = param_2[10];
  puVar6[0x58] = 0;
  puVar6[0x59] = 0;
  puVar6[0x57] = 0;
  puVar6[0x5a] = 0;
  puVar6[0x5b] = iVar1;
  puVar6[0x56] = 0;
  iVar1 = param_2[0xc];
  puVar6[0x61] = 0;
  puVar6[0x55] = iVar1;
  puVar6[0x60] = 0;
  puVar6[0x3e] = 0;
  iVar1 = param_2[0xd];
  puVar6[0x5e] = 0;
  puVar6[0x62] = iVar1;
  iVar1 = param_2[0x10];
  puVar6[100] = 0;
  puVar6[99] = iVar1;
  puVar6[0x65] = 0;
  if (*param_2 == 0) {
    *param_2 = (int)&LAB_00377be0;
    iVar1 = param_2[1];
  }
  else {
    iVar1 = param_2[1];
  }
  if (iVar1 == 0) {
    param_2[1] = (int)&LAB_00377c28;
  }
  lVar3 = FUN_00377c80(puVar6 + 0x26,puVar6 + 0x2a,3);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (puVar6[0x54] == 0) {
      iVar1 = puVar6[0x5d];
    }
    else {
      puVar6[0x68] = puVar6[0x68] | 1;
      iVar1 = puVar6[0x5d];
    }
    if (iVar1 == 0) {
      iVar1 = puVar6[0x55];
    }
    else {
      puVar6[0x68] = puVar6[0x68] | 2;
      iVar1 = puVar6[0x55];
    }
    if (iVar1 != 0) {
      puVar6[0x68] = puVar6[0x68] | 0x200000;
    }
    lVar3 = FUN_0031d268(puVar6 + 0x69,1,1);
    if (lVar3 == 0) {
      FUN_003753e0(param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if (param_2[5] == 1) {
        uVar4 = FUN_003792d0(param_2[4]);
        puVar6[0x23] = 0x80d;
        puVar6[0x68] = puVar6[0x68] | 0x20;
        lVar3 = (*DAT_00449528)(uVar4,0x40e4e8);
        if ((lVar3 != 0) && (lVar3 = (*DAT_00449528)(uVar4,0x40e4f0), lVar3 != 0)) {
          return 0;
        }
        FUN_00319368(puVar6 + 1,puVar6 + 10,2,1,param_2[4],0x375590,param_1);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


// ==== FUN_003753e0 @ 003753e0 ====

void FUN_003753e0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x1a0) & 0x2000) == 0) {
    if ((*(uint *)(param_1 + 0x1a0) & 8) == 0) {
      iVar1 = *(int *)(param_1 + 0x150);
    }
    else {
      FUN_00319410(param_1 + 0x28);
      iVar1 = *(int *)(param_1 + 0x150);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x174);
    }
    else if ((*(uint *)(param_1 + 0x1a0) & 1) == 0) {
      if (*(int *)(param_1 + 0x18c) == 2) {
        FUN_0036cd88();
        *(undefined4 *)(param_1 + 0x150) = 0;
      }
      else {
        FUN_00312d08();
        *(undefined4 *)(param_1 + 0x150) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x174);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x174);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x154);
    }
    else if ((*(uint *)(param_1 + 0x1a0) & 2) == 0) {
      if (*(int *)(param_1 + 0x18c) == 2) {
        FUN_0036cd88();
        *(undefined4 *)(param_1 + 0x174) = 0;
      }
      else {
        FUN_00312d08();
        *(undefined4 *)(param_1 + 0x174) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x154);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x154);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x18c);
    }
    else if ((*(uint *)(param_1 + 0x1a0) & 0x200000) == 0) {
      FUN_00312c70();
      iVar1 = *(int *)(param_1 + 0x18c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x18c);
    }
    if (iVar1 == 2) {
      if (*(int *)(param_1 + 0x178) == 0) {
        iVar1 = *(int *)(param_1 + 0x194);
      }
      else {
        FUN_00312c70();
        iVar1 = *(int *)(param_1 + 0x194);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x194);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 400);
    }
    else {
      if ((*(uint *)(param_1 + 0x1a0) & 4) == 0) {
        *(undefined4 *)(param_1 + 0x194) = 0;
      }
      else {
        FUN_0036cd88();
        *(undefined4 *)(param_1 + 0x194) = 0;
      }
      iVar1 = *(int *)(param_1 + 400);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x124);
    }
    else {
      FUN_00312d08();
      *(undefined4 *)(param_1 + 400) = 0;
      iVar1 = *(int *)(param_1 + 0x124);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1a4);
    }
    else {
      (**(code **)(param_1 + 0x114))(iVar1,*(undefined4 *)(param_1 + 0x118));
      *(undefined4 *)(param_1 + 0x124) = 0;
      iVar1 = *(int *)(param_1 + 0x1a4);
    }
    if (0 < iVar1) {
      DeleteSema();
    }
    FUN_00377cd0(param_1 + 0x98);
    *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) | 0x2000;
  }
  return;
}


// ==== FUN_00375590 @ 00375590 ====

void FUN_00375590(undefined8 param_1,int param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (int)param_5;
  if ((*(uint *)(iVar10 + 0x1a0) & 0x10) != 0) {
    iVar2 = *(int *)(*(int *)(iVar10 + 0x124) + 0x20);
    *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xffffffef;
    if (iGpffff8a24 == 2) {
      WaitSema(*(undefined4 *)(iVar10 + 0x1a4));
    }
    if ((*(uint *)(iVar10 + 0x1a0) & 0x4000) != 0) {
      if (iGpffff8a24 != 2) {
        return;
      }
      SignalSema(*(undefined4 *)(iVar10 + 0x1a4));
      return;
    }
    while (param_2 != 0) {
      iVar7 = *(int *)(iVar10 + 0x154);
      if ((*(uint *)(*(int *)(iVar10 + 0x15c) * 0x14 + iVar7 + 0x10) & 0x10) == 0) {
        *(undefined4 *)(*(int *)(iVar10 + 0x15c) * 0x14 + iVar7 + 0x10) = 2;
      }
      else {
        *(undefined4 *)(*(int *)(iVar10 + 0x15c) * 0x14 + iVar7 + 0x10) = 0x12;
        if ((*(int *)(iVar10 + 0x174) != 0) && (*(int *)(iVar10 + 0xf8) != -1)) {
          iVar7 = *(int *)(iVar10 + 0x15c) * 0x14 + *(int *)(iVar10 + 0x154);
          *(uint *)(iVar7 + 0x10) = *(uint *)(iVar7 + 0x10) | 4;
        }
      }
      param_2 = param_2 - iVar2;
      iVar7 = *(int *)(iVar10 + 0x15c) + 1;
      if (iVar7 == *(int *)(iVar10 + 0x170)) {
        iVar7 = 0;
      }
      *(int *)(iVar10 + 0x15c) = iVar7;
    }
    if (iGpffff8a24 == 2) {
      SignalSema(*(undefined4 *)(iVar10 + 0x1a4));
    }
LAB_0037612c:
    if ((*(uint *)(iVar10 + 0x1a0) & 0x40000) == 0) {
      if ((((*(short *)(iVar10 + 0x9e) != *(short *)(iVar10 + 0xa0)) ||
           (*(short *)(iVar10 + 0xa2) != 0)) || (*(int *)(iVar10 + 0xf4) != 0)) &&
         ((*(int *)(iVar10 + 0xf4) != 0 ||
          (lVar6 = FUN_00377e10(iVar10 + 0x98,iVar10 + 0xe4), lVar6 != 0)))) {
        FUN_00376358(param_5);
      }
    }
    else {
      uVar5 = FUN_0032a938(*(undefined4 *)(*(int *)(iVar10 + 0x28) + 0xc));
      *(undefined4 *)(iVar10 + 0x1a8) = uVar5;
    }
    return;
  }
  if ((*(uint *)(iVar10 + 0x1a0) & 0x40) != 0) {
    *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xffffffbf;
    goto LAB_0037612c;
  }
  if ((*(uint *)(iVar10 + 0x1a0) & 0x20) != 0) {
    *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xffffffdf;
    if (param_3 != 4) {
      *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 8;
      *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 0x80;
      FUN_00319578(*(undefined4 *)(iVar10 + 0x28),iVar10 + 0x28,*(undefined4 *)(iVar10 + 0x8c),
                   iVar10 + 0x8c,0x375590,param_5);
      return;
    }
    pcVar3 = *(code **)(iVar10 + 0x11c);
    if (pcVar3 == (code *)0x0) goto LAB_00375c5c;
    uVar5 = *(undefined4 *)(iVar10 + 0x120);
    param_3 = 6;
    goto LAB_00375c54;
  }
  if ((*(uint *)(iVar10 + 0x1a0) & 0x80) == 0) {
    if ((*(uint *)(iVar10 + 0x1a0) & 0x100) != 0) {
      *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xfffffeff;
      if (param_3 == 4) {
        pcVar3 = *(code **)(iVar10 + 0x11c);
        if (pcVar3 == (code *)0x0) goto LAB_00375c5c;
        uVar5 = *(undefined4 *)(iVar10 + 0x120);
        param_3 = 5;
        goto LAB_00375c54;
      }
      if (*(int *)(iVar10 + 0x140) == 0) {
        if (*(int *)(iVar10 + 0x13c) != 0) {
          iVar2 = *(int *)(iVar10 + 0x130);
          goto LAB_003758d0;
        }
        uVar4 = *(uint *)(iVar10 + 0x1a0) | 0x200;
        iVar7 = *(int *)(iVar10 + 0x128);
      }
      else {
        iVar2 = *(int *)(iVar10 + 0x130);
LAB_003758d0:
        iVar7 = 0x10;
        if (iVar2 == 0) {
          iVar7 = 0;
        }
        uVar4 = *(uint *)(iVar10 + 0x1a0) | 0x1000;
        if (*(int *)(iVar10 + 0x138) != 0) {
          iVar7 = iVar7 + *(int *)(iVar10 + 0x138);
        }
      }
      *(uint *)(iVar10 + 0x1a0) = uVar4;
      lVar6 = (**(code **)(iVar10 + 0x110))(iVar7,*(undefined4 *)(iVar10 + 0x118));
      *(int *)(iVar10 + 0x124) = (int)lVar6;
      if (lVar6 != 0) {
        FUN_003194a0(iVar10 + 0x28,lVar6,iVar7,0x375590,param_5);
        return;
      }
      pcVar3 = *(code **)(iVar10 + 0x11c);
      goto LAB_00375c44;
    }
    if ((*(uint *)(iVar10 + 0x1a0) & 0x1000) == 0) {
      if ((*(uint *)(iVar10 + 0x1a0) & 0x200) == 0) {
        if ((*(uint *)(iVar10 + 0x1a0) & 0x400) == 0) {
          if ((*(uint *)(iVar10 + 0x1a0) & 0x800) == 0) goto LAB_0037612c;
          iVar2 = *(int *)(iVar10 + 0x124);
          iVar7 = *(int *)(iVar2 + 0x20);
          *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xfffff7ff;
          if ((param_3 == 4) || (*(int *)(iVar10 + 0x8c) != 0x80f)) {
            pcVar3 = *(code **)(iVar10 + 0x114);
            goto LAB_00375c34;
          }
          if (*(int *)(iVar10 + 0x150) == 0) {
            if (*(int *)(iVar10 + 0x16c) == 0) {
              iVar2 = *(int *)(iVar10 + 0x198);
              iVar9 = 0;
              if (iVar2 == 0) {
                iVar2 = 2;
              }
              if ((*(int *)(iVar10 + 0x154) == 0) && (*(int *)(iVar10 + 0x18c) != 2)) {
                iVar9 = 0x38;
              }
              *(int *)(iVar10 + 0x16c) = (iVar9 + iVar7) * iVar2;
              iVar2 = *(int *)(iVar10 + 0x18c);
            }
            else {
              iVar2 = *(int *)(iVar10 + 0x18c);
            }
            if (iVar2 == 2) {
              uVar5 = FUN_0036cd08(0,*(undefined4 *)(iVar10 + 0x16c),0);
              *(undefined4 *)(iVar10 + 0x150) = uVar5;
            }
            else {
              uVar5 = FUN_00312cc8(*(undefined4 *)(iVar10 + 0x16c),0x3080f);
              *(undefined4 *)(iVar10 + 0x150) = uVar5;
            }
            if (*(int *)(iVar10 + 0x150) == 0) {
              FUN_003753e0(param_5);
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(iVar10 + 0x150);
            }
            if (iVar2 == 0) {
              pcVar3 = *(code **)(iVar10 + 0x11c);
              goto LAB_00375df4;
            }
            iVar2 = *(int *)(iVar10 + 0x17c);
          }
          else {
            iVar2 = *(int *)(iVar10 + 0x17c);
          }
          if (iVar2 == 0) {
            if (*(int *)(iVar10 + 0x188) != 0) {
              iVar9 = *(int *)(iVar10 + 0x174);
              goto LAB_00375d28;
            }
            iVar2 = *(int *)(iVar10 + 0x18c);
LAB_00375e84:
            if (iVar2 == 2) {
              if (iVar7 == 0) {
                trap(7);
              }
              *(int *)(iVar10 + 0x170) = *(int *)(iVar10 + 0x16c) / iVar7;
              *(int *)(iVar10 + 0x188) = *(int *)(iVar10 + 0x17c) / iVar7;
              goto LAB_00375ee8;
            }
            iVar2 = *(int *)(iVar10 + 0x16c);
          }
          else {
            iVar9 = *(int *)(iVar10 + 0x174);
LAB_00375d28:
            if (iVar9 == 0) {
              if (iVar2 == 0) {
                iVar2 = *(int *)(iVar10 + 0x188);
                if (iVar2 != 0) {
                  iVar9 = iVar7 * iVar2;
                  if (*(int *)(iVar10 + 0x18c) != 2) {
                    iVar9 = iVar2 * 0x14 + iVar9;
                  }
                  *(int *)(iVar10 + 0x17c) = iVar9;
                }
                iVar2 = *(int *)(iVar10 + 0x18c);
              }
              else {
                iVar2 = *(int *)(iVar10 + 0x18c);
              }
              iVar9 = *(int *)(iVar10 + 0x17c);
              if (iVar2 == 2) {
                iVar2 = *(int *)(*(int *)(iVar10 + 0x124) + 0x14) * 0x48;
                iVar9 = iVar9 + iVar2;
                uVar5 = FUN_00312cc8(iVar2,0x3080f);
                *(undefined4 *)(iVar10 + 400) = uVar5;
              }
              if (*(int *)(iVar10 + 0x18c) == 2) {
                uVar5 = FUN_0036cd08(0,iVar9,0);
                *(undefined4 *)(iVar10 + 0x174) = uVar5;
              }
              else {
                uVar5 = FUN_00312cc8(iVar9,0x3080f);
                *(undefined4 *)(iVar10 + 0x174) = uVar5;
              }
              if (*(int *)(iVar10 + 0x174) == 0) {
                FUN_003753e0(param_5);
                iVar2 = 0;
              }
              else {
                iVar2 = *(int *)(iVar10 + 0x150);
              }
              if (iVar2 == 0) {
                pcVar3 = *(code **)(iVar10 + 0x11c);
LAB_00375df4:
                if (pcVar3 == (code *)0x0) {
                  return;
                }
                (*pcVar3)(param_5,param_3 | 1,*(undefined4 *)(iVar10 + 0x120));
                return;
              }
              if (*(int *)(iVar10 + 0x18c) == 2) {
                *(int *)(iVar10 + 0x194) = *(int *)(iVar10 + 0x174) + *(int *)(iVar10 + 0x17c);
                goto LAB_00375e80;
              }
              iVar2 = *(int *)(iVar10 + 0x16c);
            }
            else {
              if (*(int *)(iVar10 + 0x18c) == 2) {
                iVar2 = *(int *)(*(int *)(iVar10 + 0x124) + 0x14) * 0x24;
                uVar5 = FUN_0036cd08(0,iVar2,0);
                *(undefined4 *)(iVar10 + 0x194) = uVar5;
                uVar5 = FUN_00312cc8(iVar2,0x3080f);
                *(undefined4 *)(iVar10 + 400) = uVar5;
                *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 4;
LAB_00375e80:
                iVar2 = *(int *)(iVar10 + 0x18c);
                goto LAB_00375e84;
              }
              iVar2 = *(int *)(iVar10 + 0x16c);
            }
          }
          if (iVar7 + 0x38 == 0) {
            trap(7);
          }
          *(int *)(iVar10 + 0x170) = iVar2 / (iVar7 + 0x38);
          *(int *)(iVar10 + 0x188) = *(int *)(iVar10 + 0x17c) / (iVar7 + 0x14);
LAB_00375ee8:
          iVar2 = *(int *)(iVar10 + 0x170) * iVar7;
          *(int *)(iVar10 + 0x16c) = iVar2;
          if (*(int *)(iVar10 + 0x154) == 0) {
            if (*(int *)(iVar10 + 0x18c) == 2) {
              uVar5 = FUN_00312c48(*(int *)(iVar10 + 0x170) * 0x38,0x3080f);
              *(undefined4 *)(iVar10 + 0x154) = uVar5;
            }
            else {
              *(int *)(iVar10 + 0x154) = *(int *)(iVar10 + 0x150) + iVar2;
            }
          }
          iVar7 = *(int *)(iVar10 + 0x188) * iVar7;
          iVar2 = *(int *)(iVar10 + 0x154) + *(int *)(iVar10 + 0x170) * 0x14;
          *(int *)(iVar10 + 0x1ac) = iVar2;
          *(int *)(iVar10 + 0x1b0) = iVar2 + *(int *)(iVar10 + 0x170) * 0x10;
          *(int *)(iVar10 + 0x17c) = iVar7;
          if (iVar7 == 0) {
            if ((*(uint *)(iVar10 + 0x1a0) & 2) == 0) {
              if (*(int *)(iVar10 + 0x174) == 0) {
                *(undefined4 *)(iVar10 + 0x174) = 0;
              }
              else {
                FUN_00312c70();
                *(undefined4 *)(iVar10 + 0x174) = 0;
              }
            }
            else {
              *(undefined4 *)(iVar10 + 0x174) = 0;
            }
          }
          if (*(int *)(iVar10 + 0x18c) == 2) {
            if (*(int *)(iVar10 + 0x188) == 0) {
              *(undefined4 *)(iVar10 + 0x178) = 0;
            }
            else {
              uVar5 = FUN_00312c48(*(int *)(iVar10 + 0x188) * 0x14,0x3080f);
              *(undefined4 *)(iVar10 + 0x178) = uVar5;
            }
          }
          else {
            *(int *)(iVar10 + 0x178) = *(int *)(iVar10 + 0x174) + *(int *)(iVar10 + 0x17c);
          }
          uVar4 = *(uint *)(iVar10 + 0x19c);
          if (uVar4 == 0) {
            uVar4 = *(uint *)(iVar10 + 0x170) >> 1;
            *(uint *)(iVar10 + 0x19c) = uVar4;
            if (uVar4 == 0) {
              *(undefined4 *)(iVar10 + 0x19c) = 1;
            }
            uVar4 = *(uint *)(iVar10 + 0x19c);
            uVar8 = *(uint *)(iVar10 + 0x170);
          }
          else {
            uVar8 = *(uint *)(iVar10 + 0x170);
          }
          if (uVar8 <= uVar4) {
            *(uint *)(iVar10 + 0x19c) = uVar8;
          }
          uVar4 = *(uint *)(iVar10 + 0x198);
          if (uVar4 == 0) {
            uVar4 = *(uint *)(iVar10 + 0x170) >> 1;
            *(uint *)(iVar10 + 0x198) = uVar4;
            if (uVar4 == 0) {
              *(undefined4 *)(iVar10 + 0x198) = 1;
            }
            iVar2 = *(int *)(iVar10 + 0x198);
            if (iVar2 == 0) {
              iVar2 = 1;
            }
            *(int *)(iVar10 + 0x198) = iVar2;
            uVar4 = *(uint *)(iVar10 + 0x198);
            uVar8 = *(uint *)(iVar10 + 0x170);
          }
          else {
            uVar8 = *(uint *)(iVar10 + 0x170);
          }
          if (uVar8 <= uVar4) {
            *(uint *)(iVar10 + 0x198) = uVar8;
          }
          uVar4 = *(uint *)(iVar10 + 0x188);
          uVar8 = 0;
          if (uVar4 != 0) {
            iVar2 = 0;
            do {
              uVar8 = uVar8 + 1;
              *(undefined4 *)(iVar2 + *(int *)(iVar10 + 0x178) + 0xc) = 0;
              *(undefined4 *)(iVar2 + *(int *)(iVar10 + 0x178) + 0x10) = 1;
              iVar2 = iVar2 + 0x14;
            } while (uVar8 < uVar4);
          }
          uVar4 = *(uint *)(iVar10 + 0x170);
          uVar8 = 0;
          if (uVar4 != 0) {
            iVar2 = 0;
            do {
              uVar8 = uVar8 + 1;
              *(undefined4 *)(iVar2 + *(int *)(iVar10 + 0x1b0)) = 0;
              *(undefined4 *)(iVar2 + *(int *)(iVar10 + 0x154) + 0xc) = 0;
              *(undefined4 *)(iVar2 + *(int *)(iVar10 + 0x154) + 0x10) = 1;
              iVar2 = iVar2 + 0x14;
            } while (uVar8 < uVar4);
          }
          uVar5 = *(undefined4 *)(*(int *)(iVar10 + 0x124) + 0x10);
          *(undefined4 *)(iVar10 + 0x14c) = uVar5;
          *(undefined4 *)(iVar10 + 0x148) = uVar5;
          uVar5 = FUN_00377ac8(param_5);
          *(undefined4 *)(iVar10 + 0xf8) = uVar5;
          *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 0x10000;
          if (*(code **)(iVar10 + 0x11c) == (code *)0x0) {
            return;
          }
          (**(code **)(iVar10 + 0x11c))(param_5,param_3 == 4,*(undefined4 *)(iVar10 + 0x120));
          return;
        }
        *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xfffffbff;
        if (param_3 != 4) {
          *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 0x800;
          FUN_003195d0(iVar10 + 0x28,iVar10 + 0x8c,0x375590,param_5);
          return;
        }
        (**(code **)(iVar10 + 0x114))
                  (*(undefined4 *)(iVar10 + 0x124),*(undefined4 *)(iVar10 + 0x118));
        pcVar3 = *(code **)(iVar10 + 0x11c);
        *(undefined4 *)(iVar10 + 0x124) = 0;
        if (pcVar3 == (code *)0x0) goto LAB_00375c5c;
        uVar5 = *(undefined4 *)(iVar10 + 0x120);
        param_3 = 5;
      }
      else {
        *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xfffffdff;
        if (param_3 != 4) {
          lVar6 = FUN_00378dc8(*(undefined4 *)(iVar10 + 0x124));
          if (lVar6 != 0) {
            *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 0x400;
            iVar2 = FUN_00319610(iVar10 + 0x28);
            iVar7 = (*(int *)(iVar10 + 0x90) + -0x14) - *(int *)(iVar10 + 0x128);
            goto LAB_00375b58;
          }
          pcVar3 = *(code **)(iVar10 + 0x114);
          iVar2 = *(int *)(iVar10 + 0x124);
LAB_00375c34:
          (*pcVar3)(iVar2,*(undefined4 *)(iVar10 + 0x118));
          pcVar3 = *(code **)(iVar10 + 0x11c);
          *(undefined4 *)(iVar10 + 0x124) = 0;
          goto LAB_00375c44;
        }
        pcVar3 = *(code **)(iVar10 + 0x11c);
        if (pcVar3 == (code *)0x0) goto LAB_00375c5c;
        uVar5 = *(undefined4 *)(iVar10 + 0x120);
        param_3 = 5;
      }
    }
    else {
      iVar2 = 0;
      iVar7 = 0;
      *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xffffefff;
      bVar1 = false;
      if (param_3 != 4) {
        if (*(int *)(iVar10 + 0x130) != 0) {
          iVar2 = *(int *)(iVar10 + 0x124);
        }
        if (*(int *)(iVar10 + 0x138) != 0) {
          iVar7 = *(int *)(iVar10 + 0x124) + *(int *)(iVar10 + 0x130);
        }
        if ((iVar2 != 0) && (*(int *)(iVar10 + 0x13c) != 0)) {
          lVar6 = FUN_00316400();
          bVar1 = lVar6 == 0;
        }
        if (iVar7 == 0) {
          pcVar3 = *(code **)(iVar10 + 0x114);
        }
        else {
          if ((*(int *)(iVar10 + 0x140) != 0) && (lVar6 = (*DAT_00449520)(iVar7), lVar6 == 0)) {
            bVar1 = true;
          }
          pcVar3 = *(code **)(iVar10 + 0x114);
        }
        (*pcVar3)(*(undefined4 *)(iVar10 + 0x124),*(undefined4 *)(iVar10 + 0x118));
        *(undefined4 *)(iVar10 + 0x124) = 0;
        if (bVar1) {
          *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 0x100;
          FUN_00316758(iVar10 + 0x13c);
          iVar2 = FUN_00319610(iVar10 + 0x28);
          FUN_003194d8(iVar10 + 0x28,iVar2 - (*(int *)(iVar10 + 0x130) + *(int *)(iVar10 + 0x138)),
                       0x375590,param_5);
          return;
        }
        *(undefined4 *)(iVar10 + 0x8c) = 0x80d;
        *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 0x20;
        iVar2 = FUN_00319610(iVar10 + 0x28);
        iVar7 = *(int *)(iVar10 + 0x90) -
                (*(int *)(iVar10 + 0x138) + *(int *)(iVar10 + 0x130) + 0x14);
LAB_00375b58:
        FUN_003194d8(iVar10 + 0x28,iVar2 + iVar7,0x375590,param_5);
        return;
      }
      (**(code **)(iVar10 + 0x114))(*(undefined4 *)(iVar10 + 0x124),*(undefined4 *)(iVar10 + 0x118))
      ;
      pcVar3 = *(code **)(iVar10 + 0x11c);
      *(undefined4 *)(iVar10 + 0x124) = 0;
      if (pcVar3 == (code *)0x0) goto LAB_00375c5c;
      uVar5 = *(undefined4 *)(iVar10 + 0x120);
      param_3 = 5;
    }
  }
  else {
    *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) & 0xffffff7f;
    if (param_3 == 4) {
      pcVar3 = *(code **)(iVar10 + 0x11c);
    }
    else {
      if (*(int *)(iVar10 + 0x8c) - 0x80dU < 2) {
        if (*(int *)(iVar10 + 0x8c) == 0x80d) {
          *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 0x80;
          FUN_00319578(*(undefined4 *)(iVar10 + 0x28),iVar10 + 0x28,0x80e,iVar10 + 0x8c,0x375590,
                       param_5);
          return;
        }
        *(uint *)(iVar10 + 0x1a0) = *(uint *)(iVar10 + 0x1a0) | 0x100;
        FUN_003194a0(iVar10 + 0x28,iVar10 + 0x128,0x14,0x375590,param_5);
        return;
      }
      pcVar3 = *(code **)(iVar10 + 0x11c);
    }
LAB_00375c44:
    param_3 = param_3 | 1;
    if (pcVar3 == (code *)0x0) goto LAB_00375c5c;
    uVar5 = *(undefined4 *)(iVar10 + 0x120);
  }
LAB_00375c54:
  (*pcVar3)(param_5,param_3,uVar5);
LAB_00375c5c:
  FUN_003753e0(param_5);
  return;
}


// ==== FUN_003761b8 @ 003761b8 ====

void FUN_003761b8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (((((*(short *)(iVar4 + 0x9e) != *(short *)(iVar4 + 0xa0)) || (*(short *)(iVar4 + 0xa2) != 0))
       && ((*(uint *)(iVar4 + 0x1a0) & 0x5ff0) == 0)) &&
      (((*(uint *)(iVar4 + 0x1a0) & 0x40000) == 0 &&
       (lVar3 = FUN_00324d98(*(undefined4 *)(iVar4 + 0x84),0), lVar3 == 1)))) &&
     (lVar3 = FUN_00377e10(iVar4 + 0x98,iVar4 + 0xe4), lVar3 != 0)) {
    FUN_00376358(param_1);
  }
  iVar1 = *(int *)(iVar4 + 0x154);
  if ((((*(uint *)(*(int *)(iVar4 + 0x168) * 0x14 + iVar1 + 0x10) & 1) == 0) &&
      (*(int *)(iVar4 + 0x174) != 0)) &&
     (iVar2 = *(int *)(iVar4 + 0x178),
     (*(uint *)(*(int *)(iVar4 + 0x180) * 0x14 + iVar2 + 0x10) & 6) == 0)) {
    if (((*(int *)(*(int *)(iVar4 + 0x160) * 0x14 + iVar1 + 0xc) == 0) &&
        (*(int *)(*(int *)(iVar4 + 0x180) * 0x14 + iVar2 + 0xc) == 0)) &&
       (((*(uint *)(*(int *)(iVar4 + 0x160) * 0x14 + iVar1 + 0x10) & 0x10) == 0 ||
        (*(int *)(iVar4 + 0xf8) == -1)))) {
      if (*(int *)(*(int *)(iVar4 + 0x184) * 0x14 + iVar2 + 0x10) == 1) {
        *(uint *)(iVar4 + 0x1a0) = *(uint *)(iVar4 + 0x1a0) & 0xfffdffff;
      }
    }
    else {
      *(uint *)(iVar4 + 0x1a0) = *(uint *)(iVar4 + 0x1a0) | 0x20000;
      FUN_00376488(param_1);
    }
  }
  return;
}


// ==== FUN_00376358 @ 00376358 ====

void FUN_00376358(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (((*(uint *)(iVar3 + 0x1a0) & 0x5ff0) == 0) &&
     (lVar2 = FUN_00324d98(*(undefined4 *)(iVar3 + 0x84),0), lVar2 != 0)) {
    uVar1 = *(uint *)(iVar3 + 0xf4);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 1) != 0) {
        *(uint *)(iVar3 + 0xf4) = uVar1 & 0xfffffffe;
        *(uint *)(iVar3 + 0x1a0) = *(uint *)(iVar3 + 0x1a0) | 0x40;
        if (*(int *)(iVar3 + 0x18c) == 2) {
          FUN_00324cb0(*(undefined4 *)(iVar3 + 0x84),*(undefined4 *)(iVar3 + 0xf0),0x375590,param_1)
          ;
        }
        else {
          FUN_003194d8(iVar3 + 0x28,*(undefined4 *)(iVar3 + 0xf0),0x375590,param_1);
        }
      }
    }
    else {
      *(uint *)(iVar3 + 0xf4) = uVar1 & 0xfffffffb;
      *(uint *)(iVar3 + 0x1a0) = *(uint *)(iVar3 + 0x1a0) | 0x10;
      if (*(int *)(iVar3 + 0x18c) == 2) {
        FUN_00324a88(*(undefined4 *)(iVar3 + 0x84),*(undefined4 *)(iVar3 + 0xe8),0x1000,
                     *(undefined4 *)(iVar3 + 0xec),0,0x375590,param_1);
      }
      else {
        FUN_003194a0(iVar3 + 0x28,*(undefined4 *)(iVar3 + 0xe8),*(undefined4 *)(iVar3 + 0xec),
                     0x375590,param_1);
      }
    }
  }
  return;
}


// ==== FUN_00376488 @ 00376488 ====

int FUN_00376488(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  uint uStack_100;
  undefined1 auStack_fc [4];
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 *puStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  
  iStack_e4 = *(int *)(param_1 + 0x124);
  iStack_f0 = 0;
  iStack_e0 = 0;
  iStack_ec = *(int *)(iStack_e4 + 0x20);
  iStack_e8 = *(int *)(iStack_e4 + 0x14);
  uVar25 = *(uint *)(param_1 + 0x154);
  if ((*(uint *)(*(int *)(param_1 + 0x168) * 0x14 + uVar25 + 0x10) & 2) == 0) {
    iVar29 = *(int *)(param_1 + 0x18c);
  }
  else {
    do {
      uVar32 = 0;
      iStack_d8 = *(int *)(param_1 + 0x180) * iStack_ec;
      puStack_d0 = (undefined4 *)((uVar25 | iStack_d8 >> 0x1f) + *(int *)(param_1 + 0x168) * 0x14);
      iStack_dc = *(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x168) * iStack_ec;
      puStack_d4 = (undefined4 *)(*(int *)(param_1 + 0x178) + *(int *)(param_1 + 0x180) * 0x14);
      uStack_cc = puStack_d0[3];
      iStack_d8 = *(int *)(param_1 + 0x174) + iStack_d8;
      uStack_c8 = puStack_d4[3];
      if (iStack_e8 != 0) {
        do {
          iStack_b0 = (int)uVar32;
          iVar29 = *(int *)(iStack_e4 + 0x18) + iStack_b0 * 0x28;
          uVar3 = *(ushort *)(iVar29 + 0x1a);
          uVar25 = (uint)uVar3;
          uVar4 = *(ushort *)(iVar29 + 0x18);
          uVar27 = (uint)uVar4;
          bVar1 = *(byte *)(*(int *)(iVar29 + 0x14) + 0xd);
          if ((uVar3 & 1) == 0) {
            uStack_bc = 2;
            uVar26 = (uint)(uVar3 >> 1);
          }
          else if ((uVar3 & 3) == 0) {
            uStack_bc = 3;
            uVar26 = (uint)(uVar3 >> 2);
          }
          else if ((uVar3 & 7) == 0) {
            uStack_bc = 4;
            uVar26 = (uint)(uVar3 >> 3);
          }
          else if ((uVar3 & 0xf) == 0) {
            uStack_bc = 5;
            uVar26 = (uint)(uVar3 >> 4);
          }
          else {
            uStack_bc = 1;
            uVar26 = uVar25;
          }
          iVar17 = (uint)*(ushort *)(iVar29 + 0x1c) * (uint)uVar4;
          uStack_ac = (undefined4)(uVar32 >> 0x20);
          FUN_00318478(uStack_cc,iVar17,&uStack_100,auStack_fc);
          FUN_00318478(uStack_c8,iVar17,(uint)&uStack_100 | 8,auStack_fc);
          lVar33 = CONCAT44(uStack_ac,iStack_b0);
          iVar6 = iVar17;
          if ((puStack_d0[4] & 0x10) != 0) {
            FUN_00318478(*(undefined4 *)(param_1 + 0xf8),iVar17,(uint)&uStack_100 | 0xc,auStack_fc);
            if (uVar25 == 0) {
              trap(7);
            }
            lVar33 = CONCAT44(uStack_ac,iStack_b0);
            iVar6 = ((int)(iStack_f4 + uVar25 + -1) / (int)uVar25) * uVar25;
          }
          iStack_f4 = iVar6;
          uVar3 = *(ushort *)(iVar29 + 0x1a);
          iStack_b8 = iStack_e8 + -1;
          if (uVar3 == 0) {
            trap(7);
          }
          uStack_100 = ((int)(uStack_100 + uVar3 + -1) / (int)(uint)uVar3) * (uint)uVar3;
          uVar3 = *(ushort *)(iVar29 + 0x1a);
          iStack_f8 = ((int)(iStack_f8 + (uint)uVar3 + -1) / (int)(uint)uVar3) * (uint)uVar3;
          uVar30 = iStack_f4 - uStack_100;
          if ((uint)(iVar17 - iStack_f8) < iStack_f4 - uStack_100) {
            uVar30 = iVar17 - iStack_f8;
          }
          if (iStack_b8 == lVar33) {
            uStack_c4 = (uint)(iStack_f4 == uStack_100 + uVar30);
            uStack_c0 = (uint)(iVar17 == iStack_f8 + uVar30);
          }
          if (uVar27 == 0) {
            trap(7);
          }
          uVar28 = (uint)uVar4;
          iVar6 = ((int)uStack_100 / (int)(uint)uVar4 & 0xffffU) * uVar28;
          iVar7 = (iStack_f8 / (int)uVar28 & 0xffffU) * uVar28;
          iVar8 = uVar28 * (bVar1 - 1);
          uVar28 = (uStack_100 & 0xffff) - iVar6 & 0xffff;
          uVar31 = iStack_f8 - iVar7;
          puVar18 = (undefined8 *)
                    (iStack_dc + *(int *)(iVar29 + 0x24) + uVar28 + iVar6 * (uint)bVar1);
          puVar21 = (undefined8 *)
                    (iStack_d8 + *(int *)(iVar29 + 0x24) + uVar31 + iVar7 * (uint)bVar1);
          if (*(int *)(param_1 + 0x18c) == 2) {
            iVar29 = iStack_e0 * 0x24;
            iStack_e0 = iStack_e0 + 1;
            puVar10 = (uint *)(*(int *)(param_1 + 400) + iVar29);
            puVar10[8] = uVar25;
            *puVar10 = (uint)bVar1;
            puVar10[1] = (uint)puVar18;
            puVar10[2] = (uint)puVar21;
            puVar10[3] = uVar27;
            puVar10[5] = uVar28;
            puVar10[6] = uVar31;
            puVar10[7] = uVar30;
          }
          else {
            bVar15 = 0;
            if (bVar1 != 0) {
LAB_00376808:
              uVar14 = uVar27 - uVar31;
              puVar23 = (undefined8 *)((int)puVar18 + uVar27);
              puVar24 = (undefined8 *)((int)puVar21 + uVar27);
              uVar16 = uVar27 - uVar28 & 0xffff;
              bVar15 = bVar15 + 1;
              uVar20 = uVar30;
joined_r0x00376828:
              uVar9 = uVar20 & 0xffff;
              if (uVar9 == 0) goto LAB_003769c8;
              if (uVar16 == 0) {
                puVar18 = (undefined8 *)((int)puVar18 + iVar8);
                uVar16 = uVar27;
              }
              uVar19 = uVar14 & 0xffff;
              if ((uVar14 & 0xffff) == 0) {
                puVar21 = (undefined8 *)((int)puVar21 + iVar8);
                uVar19 = uVar27;
              }
              uVar22 = uVar16 - uVar25;
              uVar14 = uVar19 - uVar25;
              uVar20 = uVar9 - uVar25;
              switch(uStack_bc) {
              case 1:
                uVar22 = uVar16 - uVar25;
                uVar14 = uVar19 - uVar25;
                uVar20 = uVar9 - uVar25;
                uVar16 = 0;
                if (uVar26 != 0) {
                  do {
                    uVar2 = *(undefined1 *)puVar18;
                    uVar16 = uVar16 + 1 & 0xffff;
                    puVar18 = (undefined8 *)((int)puVar18 + 1);
                    *(undefined1 *)puVar21 = uVar2;
                    puVar21 = (undefined8 *)((int)puVar21 + 1);
                  } while (uVar16 < uVar26);
                  uVar16 = uVar22 & 0xffff;
                  goto joined_r0x00376828;
                }
                break;
              case 2:
                uVar22 = uVar16 - uVar25;
                uVar14 = uVar19 - uVar25;
                uVar20 = uVar9 - uVar25;
                uVar16 = 0;
                if (uVar26 != 0) {
                  do {
                    uVar5 = *(undefined2 *)puVar18;
                    uVar16 = uVar16 + 1 & 0xffff;
                    puVar18 = (undefined8 *)((int)puVar18 + 2);
                    *(undefined2 *)puVar21 = uVar5;
                    puVar21 = (undefined8 *)((int)puVar21 + 2);
                  } while (uVar16 < uVar26);
                  uVar16 = uVar22 & 0xffff;
                  goto joined_r0x00376828;
                }
                break;
              case 3:
                uVar22 = uVar16 - uVar25;
                uVar14 = uVar19 - uVar25;
                uVar20 = uVar9 - uVar25;
                uVar16 = 0;
                if (uVar26 != 0) {
                  do {
                    uVar12 = *(undefined4 *)puVar18;
                    uVar16 = uVar16 + 1 & 0xffff;
                    puVar18 = (undefined8 *)((int)puVar18 + 4);
                    *(undefined4 *)puVar21 = uVar12;
                    puVar21 = (undefined8 *)((int)puVar21 + 4);
                  } while (uVar16 < uVar26);
                  uVar16 = uVar22 & 0xffff;
                  goto joined_r0x00376828;
                }
                break;
              case 4:
                uVar22 = uVar16 - uVar25;
                uVar14 = uVar19 - uVar25;
                uVar20 = uVar9 - uVar25;
                uVar16 = 0;
                if (uVar26 == 0) break;
                do {
                  uVar11 = *puVar18;
                  uVar16 = uVar16 + 1 & 0xffff;
                  puVar18 = puVar18 + 1;
                  *puVar21 = uVar11;
                  puVar21 = puVar21 + 1;
                } while (uVar16 < uVar26);
                uVar16 = uVar22 & 0xffff;
                goto joined_r0x00376828;
              case 5:
                uVar22 = uVar16 - uVar25;
                uVar14 = uVar19 - uVar25;
                uVar20 = uVar9 - uVar25;
                uVar16 = 0;
                if (uVar26 != 0) {
                  do {
                    uVar11 = *puVar18;
                    uVar12 = *(undefined4 *)(puVar18 + 1);
                    uVar13 = *(undefined4 *)((int)puVar18 + 0xc);
                    uVar16 = uVar16 + 1 & 0xffff;
                    puVar18 = puVar18 + 2;
                    *(int *)puVar21 = (int)uVar11;
                    *(int *)((int)puVar21 + 4) = (int)((ulong)uVar11 >> 0x20);
                    *(undefined4 *)(puVar21 + 1) = uVar12;
                    *(undefined4 *)((int)puVar21 + 0xc) = uVar13;
                    puVar21 = puVar21 + 2;
                  } while (uVar16 < uVar26);
                }
              }
              uVar16 = uVar22 & 0xffff;
              goto joined_r0x00376828;
            }
          }
LAB_003769dc:
          iStack_b4 = (int)lVar33 + 1;
          if (iStack_b8 == lVar33) {
            *puStack_d4 = *puStack_d0;
            puStack_d4[1] = puStack_d0[1];
            puStack_d4[2] = *(undefined4 *)(param_1 + 0xfc);
            if (uStack_c0 == 0) {
              if (iVar17 == 0) {
                trap(7);
              }
              FUN_00318478(iStack_f8 + uVar30,-1 / iVar17,auStack_fc,puStack_d4 + 3);
              puStack_d4[3] = puStack_d4[3] + 1;
            }
            else {
              puStack_d4[3] = 0;
              puStack_d4[4] = 2;
              iStack_f0 = iStack_d8;
              *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
              if (*(int *)(param_1 + 0x180) == *(int *)(param_1 + 0x188)) {
                *(undefined4 *)(param_1 + 0x180) = 0;
              }
            }
            if (uStack_c4 == 0) {
              if (iVar17 == 0) {
                trap(7);
              }
              FUN_00318478(uStack_100 + uVar30,-1 / iVar17,auStack_fc,puStack_d0 + 3);
              puStack_d0[3] = puStack_d0[3] + 1;
              uVar32 = (ulong)iStack_b4;
            }
            else {
              if (DAT_0040e214 == 2) {
                WaitSema(*(undefined4 *)(param_1 + 0x1a4));
              }
              puStack_d0[3] = 0;
              puStack_d0[4] = 1;
              iVar29 = *(int *)(param_1 + 0x168);
              iVar17 = iVar29 + 1;
              if (iVar17 == *(int *)(param_1 + 0x170)) {
                iVar17 = 0;
              }
              *(int *)(param_1 + 0x168) = iVar17;
              if (*(int *)(param_1 + 0x160) == iVar29) {
                *(int *)(param_1 + 0x160) = iVar17;
                *(int *)(param_1 + 0x164) = iVar17;
              }
              uVar32 = (ulong)iStack_b4;
              if (DAT_0040e214 == 2) {
                SignalSema(*(undefined4 *)(param_1 + 0x1a4));
                uVar32 = (ulong)iStack_b4;
              }
            }
          }
          else {
            uVar32 = (ulong)iStack_b4;
          }
        } while (uVar32 < (ulong)(long)iStack_e8);
      }
      if (iStack_f0 != 0) {
        iVar29 = *(int *)(param_1 + 0x18c);
        goto LAB_00376b90;
      }
      uVar25 = *(uint *)(param_1 + 0x154);
    } while ((*(uint *)(*(int *)(param_1 + 0x168) * 0x14 + uVar25 + 0x10) & 2) != 0);
    iVar29 = *(int *)(param_1 + 0x18c);
  }
LAB_00376b90:
  if ((iVar29 == 2) && (iStack_e0 != 0)) {
    FUN_00325058(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),iStack_e0);
  }
  return iStack_f0;
LAB_003769c8:
  puVar18 = puVar23;
  puVar21 = puVar24;
  if (bVar1 <= bVar15) goto LAB_003769dc;
  goto LAB_00376808;
}


// ==== FUN_00376be8 @ 00376be8 ====

int FUN_00376be8(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (iGpffff8a24 == 2) {
    WaitSema(*(undefined4 *)(param_1 + 0x1a4));
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x124) + 0x20);
  if ((*(uint *)(param_1 + 0x1a0) & 0x20000) == 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x164) * 0x14 + *(int *)(param_1 + 0x154) + 0x10);
    if ((*(uint *)(param_1 + 0x1a0) & 0x4000) == 0) {
      if ((uVar1 & 6) != 2) goto LAB_00376d28;
    }
    else if ((uVar1 & 2) == 0) goto LAB_00376d28;
    iVar4 = *(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x164) * iVar2;
    *param_2 = *(int *)(param_1 + 0x164) * 0x14 + *(int *)(param_1 + 0x154);
    *(undefined4 *)(*(int *)(param_1 + 0x164) * 0x14 + *(int *)(param_1 + 0x154) + 0x10) = 4;
    iVar2 = *(int *)(param_1 + 0x164);
    iVar3 = iVar2 + 1;
    if (iVar3 == *(int *)(param_1 + 0x170)) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x164) = iVar3;
    if (*(int *)(param_1 + 0x168) == iVar2) {
      *(int *)(param_1 + 0x168) = iVar3;
    }
    iVar2 = *(int *)(param_1 + 0x108);
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x184) * 0x14 + *(int *)(param_1 + 0x178) + 0x10);
    if ((*(uint *)(param_1 + 0x1a0) & 0x4000) == 0) {
      if ((uVar1 & 6) != 2) goto LAB_00376d28;
    }
    else if ((uVar1 & 2) == 0) {
LAB_00376d28:
      if (iGpffff8a24 == 2) {
        SignalSema(*(undefined4 *)(param_1 + 0x1a4));
      }
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x174) + *(int *)(param_1 + 0x184) * iVar2;
    *param_2 = *(int *)(param_1 + 0x184) * 0x14 + *(int *)(param_1 + 0x178);
    *(undefined4 *)(*(int *)(param_1 + 0x184) * 0x14 + *(int *)(param_1 + 0x178) + 0x10) = 4;
    iVar2 = *(int *)(param_1 + 0x184) + 1;
    if (iVar2 == *(int *)(param_1 + 0x188)) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x184) = iVar2;
    iVar2 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar2 + -1;
  if (iGpffff8a24 != 2) {
    return iVar4;
  }
  SignalSema(*(undefined4 *)(param_1 + 0x1a4));
  return iVar4;
}


// ==== FUN_00376de0 @ 00376de0 ====

void FUN_00376de0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  if (iGpffff8a24 == 2) {
    WaitSema(*(undefined4 *)(param_1 + 0x1a4));
  }
  uVar1 = *(uint *)(param_1 + 0x150);
  iVar4 = *(int *)(*(int *)(param_1 + 0x124) + 0x20);
  if ((param_2 < uVar1) || (uVar1 + *(int *)(param_1 + 0x16c) <= param_2)) {
    if (iVar4 == 0) {
      trap(7);
    }
    *(undefined4 *)
     (((int)(param_2 - *(int *)(param_1 + 0x174)) / iVar4) * 0x14 + *(int *)(param_1 + 0x178) + 0x10
     ) = 1;
  }
  else {
    if (iVar4 == 0) {
      trap(7);
    }
    iVar4 = (int)(param_2 - uVar1) / iVar4;
    iVar2 = iVar4 + 1;
    *(undefined4 *)(iVar4 * 0x14 + *(int *)(param_1 + 0x154) + 0x10) = 1;
    if (iVar2 == *(int *)(param_1 + 0x170)) {
      iVar2 = 0;
    }
    if (iVar2 == *(int *)(param_1 + 0x164)) {
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x168);
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x160);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x160);
      bVar3 = true;
      if ((*(uint *)(iVar4 * 0x14 + *(int *)(param_1 + 0x154) + 0x10) & 1) != 0) {
        iVar4 = iVar4 + 1;
        if (iVar4 != *(int *)(param_1 + 0x170)) goto LAB_00376ed8;
        do {
          iVar4 = 0;
          bVar3 = false;
LAB_00376ed8:
          do {
            if ((*(uint *)(iVar4 * 0x14 + *(int *)(param_1 + 0x154) + 0x10) & 1) == 0)
            goto LAB_00376f08;
            iVar4 = iVar4 + 1;
          } while (iVar4 != *(int *)(param_1 + 0x170));
          iVar4 = 0;
        } while (bVar3);
      }
LAB_00376f08:
      *(int *)(param_1 + 0x160) = iVar4;
    }
  }
  if (iGpffff8a24 == 2) {
    SignalSema(*(undefined4 *)(param_1 + 0x1a4));
  }
  return;
}


// ==== FUN_00376f70 @ 00376f70 ====

undefined4 FUN_00376f70(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  
  while( true ) {
    iVar7 = (int)param_1;
    if (iGpffff8a24 == 2) {
      WaitSema(*(undefined4 *)(iVar7 + 0x1a4));
      uVar1 = *(uint *)(iVar7 + 0x158);
    }
    else {
      uVar1 = *(uint *)(iVar7 + 0x158);
    }
    if (*(int *)(uVar1 * 0x14 + *(int *)(iVar7 + 0x154) + 0x10) != 1) break;
    iVar5 = *(int *)(*(int *)(iVar7 + 0x124) + 0x20);
    if (*(uint *)(iVar7 + 0x160) == uVar1) {
      uVar8 = *(uint *)(iVar7 + 0x170);
      uVar9 = uVar8;
    }
    else if (*(uint *)(iVar7 + 0x160) < uVar1) {
      uVar8 = *(uint *)(iVar7 + 0x170);
      uVar9 = uVar8 - (uVar1 - *(int *)(iVar7 + 0x160));
    }
    else {
      uVar8 = *(uint *)(iVar7 + 0x170);
      uVar9 = *(int *)(iVar7 + 0x160) - uVar1;
    }
    if (uVar9 < uVar8 - *(int *)(iVar7 + 0x19c)) break;
    uVar8 = *(uint *)(iVar7 + 0x104);
    if (uVar8 != 0) {
      uVar3 = *(uint *)(iVar7 + 0x198);
      if (uVar9 < *(uint *)(iVar7 + 0x198)) {
        uVar3 = uVar9;
      }
      uVar11 = 1;
      if (uVar8 < uVar3) {
        uVar3 = uVar8;
      }
      uVar8 = *(int *)(iVar7 + 0x16c) - uVar1 * iVar5;
      if ((int)uVar3 < 0) {
        uVar3 = 0x7fffffff;
      }
      uVar3 = iVar5 * uVar3;
      if (uVar3 < uVar8) {
        uVar8 = uVar3;
      }
      iVar10 = uVar3 - uVar8;
      uVar9 = 0;
      if ((uVar8 != 0) &&
         (lVar4 = FUN_00377cf0(iVar7 + 0x98,*(int *)(iVar7 + 0x150) + uVar1 * iVar5,uVar8,0,0,4),
         uVar9 = uVar8, lVar4 == 0)) {
        if (iGpffff8a24 != 2) {
          return 2;
        }
        SignalSema(*(undefined4 *)(iVar7 + 0x1a4));
        return 2;
      }
      if (iVar10 != 0) {
        lVar4 = FUN_00377cf0(iVar7 + 0x98,*(undefined4 *)(iVar7 + 0x150),iVar10,0,0,4);
        if (lVar4 == 0) {
          uVar11 = 2;
        }
        else {
          uVar9 = uVar9 + iVar10;
        }
      }
      if (uVar9 == 0) {
        iVar5 = *(int *)(iVar7 + 0x104);
      }
      else {
        do {
          puVar6 = (undefined4 *)(*(int *)(iVar7 + 0x154) + *(int *)(iVar7 + 0x158) * 0x14);
          puVar6[1] = *(int *)(iVar7 + 0x10c) - *(int *)(iVar7 + 0x104);
          uVar2 = *(undefined4 *)(iVar7 + 0x148);
          puVar6[4] = 8;
          *puVar6 = uVar2;
          if (*(int *)(iVar7 + 0xfc) == *(int *)(iVar7 + 0x100)) {
            puVar6[3] = 0;
          }
          else {
            puVar6[3] = *(int *)(iVar7 + 0x100);
            *(undefined4 *)(iVar7 + 0xfc) = *(undefined4 *)(iVar7 + 0x100);
          }
          uVar9 = uVar9 - iVar5;
          puVar6[2] = *(undefined4 *)(iVar7 + 0xfc);
          iVar10 = *(int *)(iVar7 + 0x158) + 1;
          if (iVar10 == *(int *)(iVar7 + 0x170)) {
            iVar10 = 0;
          }
          *(int *)(iVar7 + 0x104) = *(int *)(iVar7 + 0x104) + -1;
          *(int *)(iVar7 + 0x158) = iVar10;
        } while (uVar9 != 0);
        iVar5 = *(int *)(iVar7 + 0x104);
      }
      if (((iVar5 == 0) && (*(int *)(iVar7 + 0xf8) != -1)) &&
         ((*(uint *)(iVar7 + 0x1a0) & 0x8000) != 0)) {
        iVar5 = *(int *)(iVar7 + 0x158);
        if (iVar5 == 0) {
          iVar5 = *(int *)(iVar7 + 0x170);
        }
        iVar5 = (iVar5 + -1) * 0x14 + *(int *)(iVar7 + 0x154);
        *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x10;
      }
      if (iGpffff8a24 != 2) {
        return uVar11;
      }
      SignalSema(*(undefined4 *)(iVar7 + 0x1a4));
      return uVar11;
    }
    if (iGpffff8a24 == 2) {
      SignalSema(*(undefined4 *)(iVar7 + 0x1a4));
    }
    if ((*(uint *)(iVar7 + 0x1a0) & 0x8000) == 0) {
      return 4;
    }
    lVar4 = FUN_003772b8(param_1,0,0);
    if (lVar4 == 0) {
      return 0;
    }
  }
  if (iGpffff8a24 != 2) {
    return 3;
  }
  SignalSema(*(undefined4 *)(iVar7 + 0x1a4));
  return 3;
}


// ==== FUN_003772b8 @ 003772b8 ====

undefined4 FUN_003772b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  uint uStack_a4;
  undefined1 auStack_a0 [4];
  uint auStack_9c [3];
  
  uVar10 = 1;
  iVar9 = *(int *)(*(int *)(param_1 + 0x124) + 0x18) + param_2 * 0x28;
  iVar1 = *(int *)(iVar9 + 0x20);
  iVar6 = param_3 / iVar1;
  if (iVar1 == 0) {
    trap(7);
  }
  FUN_00318478(iVar6,iVar1,auStack_b0,(uint)auStack_b0 | 4);
  param_3 = param_3 - iStack_ac;
  if ((*(byte *)(*(int *)(iVar9 + 0x14) + 0x18) & 4) == 0) {
    uVar10 = (uint)*(byte *)(*(int *)(iVar9 + 0x14) + 0xd);
  }
  iVar1 = *(ushort *)(iVar9 + 0x1a) * uVar10;
  if (iVar1 == 0) {
    trap(7);
  }
  uStack_a4 = param_3;
  if (param_3 % iVar1 != 0) {
    if (iVar1 == 0) {
      trap(7);
    }
    uStack_a4 = ((param_3 + iVar1 + -1) / iVar1) * iVar1;
  }
  iVar1 = *(ushort *)(iVar9 + 0x1a) * uVar10;
  uStack_a4 = (int)uStack_a4 / iVar1;
  if (iVar1 == 0) {
    trap(7);
  }
  FUN_00318478(uStack_a4,-1 / (*(int *)(iVar9 + 0x20) / (int)(*(ushort *)(iVar9 + 0x1a) * uVar10)),
               (uint)auStack_b0 | 8,(uint)auStack_b0 | 0xc);
  if ((uStack_a4 & 0xfffffffe) != 0) {
    uStack_a4 = uStack_a4 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x124);
  uVar8 = 0;
  if (*(uint *)(iVar1 + 0x14) != 0) {
    puVar7 = (ushort *)(*(int *)(iVar1 + 0x18) + 0x1a);
    do {
      iVar9 = *puVar7 * uVar10;
      if (iVar9 == 0) {
        trap(7);
      }
      if (param_3 % iVar9 != 0) {
        if (iVar9 == 0) {
          trap(7);
        }
        param_3 = ((param_3 + iVar9 + -1) / iVar9) * iVar9;
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 0x14;
    } while (uVar8 < *(uint *)(iVar1 + 0x14));
  }
  iVar9 = *(int *)(iVar1 + 0x20);
  iVar1 = *(int *)(iVar1 + 0x24);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14c) + 0x1c);
  if (iGpffff8a24 == 2) {
    WaitSema(*(undefined4 *)(param_1 + 0x1a4));
  }
  lVar5 = FUN_00377cf0(param_1 + 0x98,0,0,iVar6 * iVar9 + iVar1 + iVar2,0,1);
  if (lVar5 == 0) {
    uVar4 = 0;
    if (iGpffff8a24 == 2) {
      SignalSema(*(undefined4 *)(param_1 + 0x1a4));
      uVar4 = 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14c);
    uVar10 = 0;
    if (*(int *)(param_1 + 0x148) != iVar1) {
      *(int *)(param_1 + 0x148) = iVar1;
      uVar11 = 0;
      uVar8 = 0;
      iVar9 = *(int *)(*(int *)(param_1 + 0x124) + 0x18);
      if (*(int *)(*(int *)(param_1 + 0x124) + 0x14) != 0) {
        do {
          uVar3 = *(uint *)(uVar11 * 4 + *(int *)(iVar1 + 0xc));
          if (uVar10 < uVar3) {
            auStack_9c[0] = (int)uVar3 % *(int *)(iVar9 + 0x20);
            if (*(int *)(iVar9 + 0x20) == 0) {
              trap(7);
            }
            FUN_00318478(auStack_9c[0],-1 / *(int *)(iVar9 + 0x20),auStack_a0,auStack_9c);
            auStack_9c[0] = auStack_9c[0] + 1;
            uVar10 = uVar3;
            if (uVar8 < auStack_9c[0]) {
              uVar8 = auStack_9c[0];
            }
          }
          uVar11 = uVar11 + 1;
          iVar9 = iVar9 + 0x28;
        } while (uVar11 < *(uint *)(*(int *)(param_1 + 0x124) + 0x14));
      }
      if (uVar8 == 1) {
        uVar8 = 0xffffffff;
      }
      *(uint *)(param_1 + 0xf8) = uVar8;
    }
    *(uint *)(param_1 + 0x100) = uStack_a4;
    iVar1 = *(int *)(*(int *)(param_1 + 0x124) + 0x20);
    if (iVar1 == 0) {
      trap(7);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x148) + 0x18) / iVar1;
    iVar6 = iVar1 - iVar6;
    *(int *)(param_1 + 0x10c) = iVar1;
    *(int *)(param_1 + 0x108) = iVar6;
    *(int *)(param_1 + 0x104) = iVar6;
    uVar4 = 1;
    if (iGpffff8a24 == 2) {
      SignalSema(*(undefined4 *)(param_1 + 0x1a4));
      uVar4 = 1;
    }
  }
  return uVar4;
}


// ==== FUN_00377628 @ 00377628 ====

void FUN_00377628(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [16];
  
  iVar5 = (int)param_1;
  if ((*(uint *)(iVar5 + 0x1a0) & 0x10000) != 0) {
    FUN_00377f00(iVar5 + 0x98);
    FUN_00319480(iVar5 + 0x28);
    *(uint *)(iVar5 + 0x1a0) = *(uint *)(iVar5 + 0x1a0) & 0xffffffaf;
    if (iGpffff8a24 == 2) {
      WaitSema(*(undefined4 *)(iVar5 + 0x1a4));
    }
    iVar4 = *(int *)(iVar5 + 0x154);
    *(uint *)(iVar5 + 0x1a0) = *(uint *)(iVar5 + 0x1a0) | 0x4000;
    uVar3 = *(uint *)(*(int *)(iVar5 + 0x15c) * 0x14 + iVar4 + 0x10);
    while ((uVar3 & 8) != 0) {
      iVar1 = *(int *)(iVar5 + 0x15c);
      *(undefined4 *)(iVar1 * 0x14 + iVar4 + 0x10) = 1;
      *(int *)(iVar5 + 0x15c) = iVar1 + 1;
      if (*(int *)(iVar5 + 0x15c) == *(int *)(iVar5 + 0x170)) {
        *(undefined4 *)(iVar5 + 0x15c) = 0;
      }
      iVar4 = *(int *)(iVar5 + 0x154);
      uVar3 = *(uint *)(*(int *)(iVar5 + 0x15c) * 0x14 + iVar4 + 0x10);
    }
    if (iGpffff8a24 == 2) {
      SignalSema(*(undefined4 *)(iVar5 + 0x1a4));
    }
    while (lVar2 = FUN_00376be8(param_1,auStack_30), lVar2 != 0) {
      FUN_00376de0(param_1,lVar2);
    }
    if ((*(uint *)(iVar5 + 0x1a0) & 0x20000) == 0) {
      iVar4 = *(int *)(iVar5 + 0x178);
    }
    else {
      uVar3 = 0;
      if (*(int *)(iVar5 + 0x170) != 0) {
        iVar4 = 0;
        do {
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar4 + *(int *)(iVar5 + 0x154) + 0x10) = 1;
          iVar4 = iVar4 + 0x14;
        } while (uVar3 < *(uint *)(iVar5 + 0x170));
      }
      iVar4 = *(int *)(iVar5 + 0x178);
    }
    if (iVar4 != 0) {
      *(undefined4 *)(*(int *)(iVar5 + 0x180) * 0x14 + iVar4 + 0xc) = 0;
    }
    *(undefined4 *)(iVar5 + 0x160) = 0;
    *(undefined4 *)(iVar5 + 0x164) = 0;
    *(undefined4 *)(iVar5 + 0x15c) = 0;
    *(undefined4 *)(iVar5 + 0x168) = 0;
    *(undefined4 *)(iVar5 + 0x158) = 0;
    *(uint *)(iVar5 + 0x1a0) = *(uint *)(iVar5 + 0x1a0) & 0xffffbfff;
  }
  return;
}


// ==== FUN_003777e0 @ 003777e0 ====

void FUN_003777e0(undefined4 *param_1)

{
  *param_1 = &LAB_00377be0;
  param_1[1] = &LAB_00377c28;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  return;
}


// ==== FUN_00377840 @ 00377840 ====

void FUN_00377840(void)

{
  FUN_003753e0();
  return;
}


// ==== FUN_00377868 @ 00377868 ====

void FUN_00377868(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_003778d8();
  *(int *)(param_1 + 0x14c) = *(int *)(*(int *)(param_1 + 0x124) + 0x10) + iVar1 * 0x20;
  return;
}


// ==== FUN_003778a0 @ 003778a0 ====

void FUN_003778a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00377968();
  *(int *)(param_1 + 0x14c) = *(int *)(*(int *)(param_1 + 0x124) + 0x10) + iVar1 * 0x20;
  return;
}


// ==== FUN_003778d8 @ 003778d8 ====

uint FUN_003778d8(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(*(int *)(param_1 + 0x124) + 0xc) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x124) + 0x10);
    while( true ) {
      iVar2 = *(int *)(uVar3 * 0x20 + iVar2);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x124);
      }
      else {
        lVar1 = FUN_00316400(iVar2,param_2);
        if (lVar1 == 0) {
          return uVar3;
        }
        iVar2 = *(int *)(param_1 + 0x124);
      }
      uVar3 = uVar3 + 1;
      if (*(uint *)(iVar2 + 0xc) <= uVar3) break;
      iVar2 = *(int *)(iVar2 + 0x10);
    }
  }
  return 0;
}


// ==== FUN_00377968 @ 00377968 ====

uint FUN_00377968(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(*(int *)(param_1 + 0x124) + 0xc) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x124) + 0x10);
    while( true ) {
      iVar2 = *(int *)(uVar3 * 0x20 + iVar2 + 4);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x124);
      }
      else {
        lVar1 = (*DAT_00449520)(iVar2,param_2);
        if (lVar1 == 0) {
          return uVar3;
        }
        iVar2 = *(int *)(param_1 + 0x124);
      }
      uVar3 = uVar3 + 1;
      if (*(uint *)(iVar2 + 0xc) <= uVar3) break;
      iVar2 = *(int *)(iVar2 + 0x10);
    }
  }
  return 0;
}


// ==== FUN_00377a20 @ 00377a20 ====

int FUN_00377a20(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int aiStack_40 [4];
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x124) + 0x18) + param_3 * 0x28;
  if (*(ushort *)(iVar4 + 0x1a) == 0) {
    trap(7);
  }
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = (*(int *)(iVar4 + 0x20) / (int)(uint)*(ushort *)(iVar4 + 0x1a)) * *(int *)(iVar4 + 0xc);
  FUN_00318478(*(undefined4 *)(param_2 + 8),iVar3,aiStack_40,(uint)aiStack_40 | 4);
  aiStack_40[0] = iVar2 * iVar3 + aiStack_40[0];
  if (((*(byte *)(*(int *)(iVar4 + 0x14) + 0x18) & 4) == 0) &&
     (bVar1 = *(byte *)(*(int *)(iVar4 + 0x14) + 0xd),
     aiStack_40[0] = aiStack_40[0] / (int)(uint)bVar1, bVar1 == 0)) {
    trap(7);
  }
  return aiStack_40[0];
}


// ==== FUN_00377ac8 @ 00377ac8 ====

uint FUN_00377ac8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_90 [4];
  int aiStack_8c [3];
  
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x148);
  iVar3 = *(int *)(*(int *)(param_1 + 0x124) + 0x18);
  if (*(int *)(*(int *)(param_1 + 0x124) + 0x14) != 0) {
    do {
      uVar2 = *(uint *)(uVar5 * 4 + *(int *)(iVar1 + 0xc));
      if (uVar6 < uVar2) {
        aiStack_8c[0] = (int)uVar2 % *(int *)(iVar3 + 0x20);
        if (*(int *)(iVar3 + 0x20) == 0) {
          trap(7);
        }
        FUN_00318478(aiStack_8c[0],-1 / *(int *)(iVar3 + 0x20),auStack_90,aiStack_8c);
        uVar6 = uVar2;
        if (uVar4 < aiStack_8c[0] + 1U) {
          uVar4 = aiStack_8c[0] + 1U;
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar5 < *(uint *)(*(int *)(param_1 + 0x124) + 0x14));
  }
  uVar6 = 0xffffffff;
  if (uVar4 != 1) {
    uVar6 = uVar4;
  }
  return uVar6;
}


// ==== FUN_00377c80 @ 00377c80 ====

undefined8 FUN_00377c80(undefined8 param_1,undefined4 param_2,undefined2 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = param_2;
  *(undefined2 *)(puVar2 + 1) = param_3;
  *(undefined2 *)((int)puVar2 + 6) = 0;
  *(undefined2 *)(puVar2 + 2) = 0;
  *(undefined2 *)((int)puVar2 + 10) = 0;
  lVar1 = FUN_0031d268(puVar2 + 3,1,1);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_00377cd0 @ 00377cd0 ====

void FUN_00377cd0(int param_1)

{
  DeleteSema(*(undefined4 *)(param_1 + 0xc));
  return;
}


// ==== FUN_00377cf0 @ 00377cf0 ====

undefined4
FUN_00377cf0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (iGpffff8a24 == 2) {
    WaitSema(param_1[3]);
  }
  if ((*(ushort *)((int)param_1 + 6) == *(ushort *)(param_1 + 2)) &&
     (*(short *)((int)param_1 + 10) != 0)) {
    uVar2 = 0;
    if (iGpffff8a24 == 2) {
      SignalSema(param_1[3]);
      uVar2 = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)(*param_1 + (uint)*(ushort *)((int)param_1 + 6) * 0x14);
    *puVar1 = param_5;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[4] = param_6;
    puVar1[3] = param_4;
    uVar3 = *(ushort *)((int)param_1 + 6) + 1;
    if (uVar3 == *(ushort *)(param_1 + 1)) {
      uVar3 = 0;
    }
    if (uVar3 == *(ushort *)(param_1 + 2)) {
      *(undefined2 *)((int)param_1 + 10) = 1;
      *(short *)((int)param_1 + 6) = (short)uVar3;
    }
    else {
      *(short *)((int)param_1 + 6) = (short)uVar3;
    }
    uVar2 = 1;
    if (iGpffff8a24 == 2) {
      SignalSema(param_1[3]);
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_00377e10 @ 00377e10 ====

undefined4 FUN_00377e10(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (iGpffff8a24 == 2) {
    WaitSema(param_1[3]);
  }
  if (*(short *)((int)param_1 + 6) == (short)param_1[2]) {
    if (*(short *)((int)param_1 + 10) == 0) {
      if (iGpffff8a24 != 2) {
        return 0;
      }
      SignalSema(param_1[3]);
      return 0;
    }
    uVar1 = *(ushort *)(param_1 + 2);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 2);
  }
  puVar2 = (undefined4 *)(*param_1 + (uint)uVar1 * 0x14);
  param_2[1] = puVar2[1];
  *param_2 = *puVar2;
  param_2[4] = puVar2[4];
  param_2[3] = puVar2[3];
  param_2[2] = puVar2[2];
  *(undefined2 *)((int)param_1 + 10) = 0;
  uVar3 = *(ushort *)(param_1 + 2) + 1;
  if (uVar3 == *(ushort *)(param_1 + 1)) {
    uVar3 = 0;
  }
  *(short *)(param_1 + 2) = (short)uVar3;
  if (iGpffff8a24 == 2) {
    SignalSema(param_1[3]);
  }
  return 1;
}


// ==== FUN_00377f00 @ 00377f00 ====

void FUN_00377f00(int param_1)

{
  if (iGpffff8a24 == 2) {
    WaitSema(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 6);
  if (iGpffff8a24 == 2) {
    SignalSema(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}


// ==== FUN_00377f60 @ 00377f60 ====

void FUN_00377f60(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  FUN_0031de30(param_1,0x40c5d8,0);
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x40) = 0x340;
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
  *(uint *)(iVar4 + 0x40) = iVar2 << 0x1c | 0x340;
  *(undefined1 **)(iVar4 + 0x28) = &LAB_00378698;
  *(code **)(iVar4 + 0x34) = FUN_003786e0;
  *(code **)(iVar4 + 0x30) = FUN_00378740;
  *(undefined1 **)(iVar4 + 0x3c) = &LAB_00378770;
  *(undefined2 *)(iVar4 + 0x44) = 0xc;
  puGpffff9218 = (undefined1 *)&puGpffff9218;
  puGpffff921c = puGpffff9218;
  lVar3 = FUN_0031d268(&uGpffff9210,1,1);
  if (lVar3 != 0) {
    lVar3 = FUN_0031d268(&gp0xffff9214,0,1);
    if (lVar3 == 0) {
      DeleteSema(uGpffff9210);
    }
    else {
      uGpffff9220 = 0;
    }
  }
  return;
}


// ==== FUN_00378118 @ 00378118 ====

void FUN_00378118(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  
  if (DAT_0040e214 == 2) {
    WaitSema(DAT_0040ea00);
  }
  lVar3 = FUN_0037b288(param_1 + 0x104,param_1 + 0x16c);
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[2] = 0;
    if (DAT_0040e214 != 2) {
      return;
    }
    SignalSema(DAT_0040ea00);
    return;
  }
  if (DAT_0040e214 == 2) {
    SignalSema(DAT_0040ea00);
    iVar1 = *(int *)(param_1 + 0x118);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x118);
  }
  piVar5 = (int *)lVar3;
  if (param_2[3] == 1) {
    if (piVar5[2] < 0) {
      iVar2 = *(int *)(param_1 + 0x110);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x110);
    }
    param_2[2] = (int)((float)(uint)piVar5[2] / (float)**(uint **)(*(int *)(iVar2 + 0x18) + 0x14));
  }
  else {
    if (param_2[3] != 2) {
      uVar4 = param_2[1];
      goto LAB_00378248;
    }
    param_2[2] = piVar5[2];
  }
  uVar4 = param_2[1];
LAB_00378248:
  if (uVar4 == 2) {
    *param_2 = *(int *)(*piVar5 * 0x20 + *(int *)(*(int *)(iVar1 + 0x1a8) + 0x10));
  }
  else if (uVar4 < 3) {
    if (uVar4 == 1) {
      *param_2 = *(int *)(*piVar5 * 0x20 + *(int *)(*(int *)(iVar1 + 0x1a8) + 0x10) + 4);
    }
  }
  else if (uVar4 == 3) {
    *param_2 = *piVar5;
  }
  return;
}


// ==== FUN_003782e8 @ 003782e8 ====

void FUN_003782e8(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = 0;
  if (DAT_0040e214 == 2) {
    WaitSema(DAT_0040ea00);
  }
  uVar6 = param_2[1];
  iVar4 = *(int *)(param_1 + 0x118);
  if (uVar6 == 2) {
    iVar3 = FUN_003778d8(iVar4 + 0x84,*param_2);
  }
  else if (uVar6 < 3) {
    if (uVar6 == 1) {
      iVar3 = FUN_00377968(iVar4 + 0x84,*param_2);
    }
  }
  else if (uVar6 == 3) {
    iVar3 = *param_2;
  }
  iVar4 = FUN_003230f0(iVar4,*(undefined4 *)(iVar4 + 0x80),2);
  iVar5 = *(int *)(iVar4 + 0x10) + iVar3 * 0x20;
  if (iVar5 == 0) {
    param_2[4] = 0;
  }
  else {
    if (*(int *)(iVar4 + 0x14) != 0) {
      iVar5 = **(int **)(iVar5 + 0xc);
      param_2[2] = iVar5;
      iVar2 = *(int *)(iVar4 + 0x14);
      param_2[1] = 3;
      param_2[4] = iVar2;
      *param_2 = iVar3;
      iVar3 = *(int *)(iVar4 + 0x18);
      if (*(ushort *)(iVar3 + 0x1a) == 0) {
        trap(7);
      }
      uVar6 = (iVar5 * *(int *)(iVar3 + 0xc)) / (int)(uint)*(ushort *)(iVar3 + 0x1a);
      if ((*(byte *)(*(int *)(iVar3 + 0x14) + 0x18) & 4) == 0) {
        bVar1 = *(byte *)(*(int *)(iVar3 + 0x14) + 0xd);
        uVar6 = (int)uVar6 / (int)(uint)bVar1;
        if (bVar1 == 0) {
          trap(7);
        }
        iVar3 = param_2[3];
      }
      else {
        iVar3 = param_2[3];
      }
      param_2[2] = uVar6;
      if (iVar3 == 1) {
        if ((int)uVar6 < 0) {
          iVar3 = *(int *)(iVar4 + 0x18);
        }
        else {
          iVar3 = *(int *)(iVar4 + 0x18);
        }
        param_2[2] = (int)((float)uVar6 / (float)**(uint **)(iVar3 + 0x14));
      }
      if (DAT_0040e214 != 2) {
        return;
      }
      SignalSema(DAT_0040ea00);
      return;
    }
    param_2[4] = 0;
  }
  param_2[1] = 0;
  param_2[3] = 0;
  if (DAT_0040e214 == 2) {
    SignalSema(DAT_0040ea00);
  }
  return;
}


// ==== FUN_00378500 @ 00378500 ====

long FUN_00378500(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0031deb8(0,0x40a0f0,0);
  lVar2 = FUN_0031dc40(uVar1,0,0x48eb90,0,0,0x3080f);
  lVar3 = 0;
  if (lVar2 != 0) {
    FUN_00377f60(lVar2);
    lVar3 = lVar2;
  }
  return lVar3;
}


// ==== FUN_00378570 @ 00378570 ====

void FUN_00378570(void)

{
  DeleteSema(DAT_0040ea00);
  DeleteSema(DAT_0040ea04);
  FUN_0031d7a8(0x48eb90);
  return;
}


// ==== FUN_003785a8 @ 003785a8 ====

long FUN_003785a8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0031deb8(0,0x40a0f0,0);
  lVar2 = FUN_0031dc40(uVar1,0xc,0x48eb90,0x48ebf0,0x40e9f8,0x3080f);
  lVar3 = 0;
  if (lVar2 != 0) {
    FUN_00377f60(lVar2);
    lVar3 = FUN_0031d988(lVar2,0x3d99e8,6,0x3d9a78,10);
    if (lVar3 == 0) {
      FUN_0031d7a8(lVar2);
      lVar3 = 0;
    }
    else {
      uVar1 = FUN_00311db8(0x40c470);
      FUN_0031ddd8(lVar2,uVar1);
      lVar3 = lVar2;
    }
  }
  return lVar3;
}


// ==== FUN_003786e0 @ 003786e0 ====

void FUN_003786e0(int param_1)

{
  if (DAT_0040e214 == 2) {
    WaitSema(DAT_0040ea00);
  }
  FUN_0037b450(param_1 + 0x104,param_1 + 0x16c);
  if (DAT_0040e214 == 2) {
    SignalSema(DAT_0040ea00);
  }
  return;
}


// ==== FUN_00378740 @ 00378740 ====

undefined8 FUN_00378740(undefined8 param_1)

{
  FUN_0037b220((int)param_1 + 0x104);
  return param_1;
}


// ==== FUN_00378788 @ 00378788 ====

undefined8 FUN_00378788(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined8 *)(iVar3 + 0x40) = *(undefined8 *)param_3;
  uVar2 = ((undefined8 *)*param_3)[1];
  *(undefined8 *)(iVar3 + 0x48) = *(undefined8 *)*param_3;
  *(undefined8 *)(iVar3 + 0x50) = uVar2;
  *(int *)(iVar3 + 0x40) = iVar3 + 0x48;
  piVar1 = (int *)*param_3;
  if (piVar1[1] == 1) {
    strlen(*piVar1);
    FUN_0035d1a0(iVar3 + 0x58,*(undefined4 *)*param_3,0x80);
  }
  else if (piVar1[1] == 2) {
    uVar2 = ((undefined8 *)*piVar1)[1];
    *(undefined8 *)(iVar3 + 0xf4) = *(undefined8 *)*piVar1;
    *(undefined8 *)(iVar3 + 0xfc) = uVar2;
  }
  if (DAT_0040e214 == 2) {
    WaitSema(DAT_0040ea00);
  }
  FUN_0032a530(iVar3 + 0x174,iVar3 + 0x40);
  if (DAT_0040e214 == 2) {
    SignalSema(DAT_0040ea00);
  }
  return param_1;
}


// ==== FUN_00378898 @ 00378898 ====

undefined8 FUN_00378898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00378118(param_1,param_3);
  return param_1;
}


// ==== FUN_003788c8 @ 003788c8 ====

undefined8 FUN_003788c8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  if (iGpffff8a24 == 2) {
    WaitSema(uGpffff9210);
  }
  FUN_0032a548((int)param_1 + 0x174,uVar1);
  if (iGpffff8a24 == 2) {
    SignalSema(uGpffff9210);
  }
  return param_1;
}


// ==== FUN_00378938 @ 00378938 ====

undefined8 FUN_00378938(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if (iGpffff8a24 == 2) {
    WaitSema(uGpffff9210);
  }
  iVar7 = (int)param_1;
  iVar6 = 0;
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_3 + 1);
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar2 = *(undefined4 *)(puVar1 + 3);
      *(undefined8 *)(iVar7 + 0xd8) = *puVar1;
      *(undefined8 *)(iVar7 + 0xe0) = uVar3;
      *(undefined8 *)(iVar7 + 0xe8) = uVar4;
      *(undefined4 *)(iVar7 + 0xf0) = uVar2;
    }
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(iVar7 + 0x310) = *param_3;
    *(undefined8 *)(iVar7 + 0x318) = uVar3;
    *(undefined8 *)(iVar7 + 800) = uVar4;
    *(undefined8 *)(iVar7 + 0x328) = uVar5;
    uVar3 = param_3[5];
    *(undefined8 *)(iVar7 + 0x330) = param_3[4];
    *(undefined8 *)(iVar7 + 0x338) = uVar3;
    iVar6 = iVar7 + 0x310;
    *(int *)(iVar7 + 0x318) = iVar7 + 0xd8;
  }
  FUN_0032a4f0(iVar7 + 0x174,iVar6);
  if (iGpffff8a24 == 2) {
    SignalSema(uGpffff9210);
  }
  return param_1;
}


// ==== FUN_00378a60 @ 00378a60 ====

undefined8 FUN_00378a60(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  if (iGpffff8a24 == 2) {
    WaitSema(uGpffff9210);
  }
  FUN_0032a560((int)param_1 + 0x174,uVar1);
  if (iGpffff8a24 == 2) {
    SignalSema(uGpffff9210);
  }
  return param_1;
}


// ==== FUN_00378b00 @ 00378b00 ====

undefined8 FUN_00378b00(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  if (iGpffff8a24 == 2) {
    WaitSema(uGpffff9210);
  }
  FUN_0032a5a8(param_3[1],(int)param_1 + 0x174,(int)param_1 + 0x16c,*param_3);
  if (iGpffff8a24 == 2) {
    SignalSema(uGpffff9210);
  }
  return param_1;
}


// ==== FUN_00378b98 @ 00378b98 ====

undefined8 FUN_00378b98(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  if (iGpffff8a24 == 2) {
    WaitSema(uGpffff9210);
  }
  FUN_0032a578(uVar1,(int)param_1 + 0x174,(int)param_1 + 0x16c);
  if (iGpffff8a24 == 2) {
    SignalSema(uGpffff9210);
  }
  return param_1;
}


// ==== FUN_00378c18 @ 00378c18 ====

undefined8 FUN_00378c18(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (iGpffff8a24 == 2) {
    WaitSema(uGpffff9210);
  }
  iVar2 = *(int *)((int)param_1 + 0x118);
  iVar2 = FUN_003230f0(iVar2,*(undefined4 *)(iVar2 + 0x80),2);
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  if (iGpffff8a24 == 2) {
    SignalSema(uGpffff9210);
    *param_3 = uVar1;
  }
  else {
    *param_3 = uVar1;
  }
  return param_1;
}


// ==== FUN_00378ca0 @ 00378ca0 ====

undefined8 FUN_00378ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003782e8(param_1,param_3);
  return param_1;
}


// ==== FUN_00378cd0 @ 00378cd0 ====

undefined8 FUN_00378cd0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (iGpffff8a24 == 2) {
    WaitSema(uGpffff9210);
  }
  iVar1 = *(int *)((int)param_1 + 0x118);
  iVar1 = FUN_003230f0(iVar1,*(undefined4 *)(iVar1 + 0x80),2);
  if ((*(uint *)(param_3 + 8) < *(uint *)(iVar1 + 0x14)) &&
     (iVar1 = *(int *)(iVar1 + 0x18) + *(uint *)(param_3 + 8) * 0x28, iVar1 != 0)) {
    iVar1 = *(int *)(iVar1 + 0x14);
    uVar2 = 1;
    if ((*(byte *)(iVar1 + 0x18) & 4) == 0) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xd);
    }
    *(uint *)(param_3 + 0xc) = uVar2;
  }
  else {
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  if (iGpffff8a24 == 2) {
    SignalSema(uGpffff9210);
  }
  return param_1;
}


// ==== FUN_00378d90 @ 00378d90 ====

undefined8 FUN_00378d90(undefined8 param_1)

{
  FUN_0037b2d0((int)param_1 + 0x104,(int)param_1 + 0x16c);
  return param_1;
}


// ==== FUN_00378dc8 @ 00378dc8 ====

undefined8 FUN_00378dc8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  
  piVar10 = (int *)param_1;
  piVar9 = piVar10 + 0xb;
  if (*piVar10 != 0) {
    FUN_00316618(param_1,piVar9);
    piVar9 = piVar10 + 0xf;
  }
  if (piVar10[1] != 0) {
    FUN_003165c8(param_1,piVar9);
    iVar1 = (*DAT_0044952c)(piVar9);
    piVar9 = (int *)((int)piVar9 + (iVar1 + iGpffff8f80 & -iGpffff8f80));
  }
  uVar6 = 0;
  iVar1 = piVar10[5];
  piVar10[4] = (int)piVar9;
  piVar9 = piVar9 + piVar10[3] * 8;
  if (piVar10[3] != 0) {
    iVar2 = piVar10[4];
    while( true ) {
      iVar2 = iVar2 + uVar6 * 0x20;
      if (*(int *)(iVar2 + 0xc) == 0) {
        uVar7 = piVar10[3];
      }
      else {
        *(int **)(iVar2 + 0xc) = piVar9;
        piVar9 = piVar9 + iVar1;
        uVar7 = piVar10[3];
      }
      uVar6 = uVar6 + 1;
      if (uVar7 <= uVar6) break;
      iVar2 = piVar10[4];
    }
  }
  uVar7 = 0;
  uVar6 = 0;
  if (piVar10[3] != 0) {
    iVar1 = piVar10[4];
    while( true ) {
      piVar4 = (int *)(uVar7 * 0x20 + iVar1);
      if (*piVar4 == 0) {
        uVar6 = piVar10[3];
      }
      else {
        FUN_00316618(piVar4,piVar9);
        piVar9 = piVar9 + 4;
        uVar6 = piVar10[3];
      }
      uVar7 = uVar7 + 1;
      if (uVar6 <= uVar7) break;
      iVar1 = piVar10[4];
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  if (uVar6 != 0) {
    iVar1 = piVar10[4];
    while( true ) {
      iVar1 = uVar8 * 0x20 + iVar1;
      if (*(int *)(iVar1 + 4) == 0) {
        uVar7 = piVar10[3];
      }
      else {
        FUN_003165c8(iVar1,piVar9);
        iVar1 = (*DAT_0044952c)(piVar9);
        piVar9 = (int *)((int)piVar9 + (iVar1 + iGpffff8f80 & -iGpffff8f80));
        uVar7 = piVar10[3];
      }
      uVar8 = uVar8 + 1;
      if (uVar7 <= uVar8) break;
      iVar1 = piVar10[4];
    }
  }
  uVar8 = 0;
  uVar6 = 0;
  if (uVar7 != 0) {
    iVar1 = piVar10[4];
    while( true ) {
      iVar1 = iVar1 + uVar8 * 0x20;
      if (*(int *)(iVar1 + 0x14) == 0) {
        uVar6 = piVar10[3];
      }
      else {
        *(int **)(iVar1 + 0x14) = piVar9;
        piVar9 = piVar9 + *(int *)(iVar1 + 0x10) * 5;
        uVar6 = piVar10[3];
      }
      uVar8 = uVar8 + 1;
      if (uVar6 <= uVar8) break;
      iVar1 = piVar10[4];
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  if (uVar6 != 0) {
    iVar1 = piVar10[4];
    while( true ) {
      iVar2 = uVar8 * 0x20;
      uVar8 = uVar8 + 1;
      iVar1 = iVar1 + iVar2;
      uVar6 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        iVar2 = 0;
        do {
          piVar4 = (int *)(iVar2 + *(int *)(iVar1 + 0x14));
          if (*piVar4 == 0) {
            uVar7 = *(uint *)(iVar1 + 0x10);
          }
          else {
            FUN_00316618(piVar4,piVar9);
            piVar9 = piVar9 + 4;
            uVar7 = *(uint *)(iVar1 + 0x10);
          }
          uVar6 = uVar6 + 1;
          iVar2 = iVar2 + 0x14;
        } while (uVar6 < uVar7);
      }
      uVar7 = piVar10[3];
      if (uVar7 <= uVar8) break;
      iVar1 = piVar10[4];
    }
  }
  uVar6 = 0;
  if (uVar7 != 0) {
    iVar1 = piVar10[4];
    while( true ) {
      iVar2 = uVar6 * 0x20;
      uVar6 = uVar6 + 1;
      iVar1 = iVar1 + iVar2;
      uVar7 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        iVar2 = 0;
        do {
          iVar5 = iVar2 + *(int *)(iVar1 + 0x14);
          if (*(int *)(iVar5 + 4) == 0) {
            uVar8 = *(uint *)(iVar1 + 0x10);
          }
          else {
            FUN_003165c8(iVar5,piVar9);
            iVar5 = (*DAT_0044952c)(piVar9);
            piVar9 = (int *)((int)piVar9 + (iVar5 + iGpffff8f80 & -iGpffff8f80));
            uVar8 = *(uint *)(iVar1 + 0x10);
          }
          uVar7 = uVar7 + 1;
          iVar2 = iVar2 + 0x14;
        } while (uVar7 < uVar8);
      }
      if ((uint)piVar10[3] <= uVar6) break;
      iVar1 = piVar10[4];
    }
  }
  piVar10[6] = (int)piVar9;
  uVar6 = 0;
  piVar9 = piVar9 + piVar10[5] * 10;
  if (piVar10[5] != 0) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + piVar10[6] + 0x14) != 0) {
        *(int **)(iVar1 + piVar10[6] + 0x14) = piVar9;
        lVar3 = FUN_00314848(piVar9,piVar9,0,0);
        if (lVar3 == 0) {
          return 0;
        }
        iVar2 = FUN_003151d8(piVar9);
        piVar9 = (int *)((int)piVar9 + (iVar2 + -1 + iGpffff8f80 & -iGpffff8f80));
      }
      uVar6 = uVar6 + 1;
      iVar1 = iVar1 + 0x28;
    } while (uVar6 < (uint)piVar10[5]);
  }
  lVar3 = FUN_00316400(*(undefined4 *)(*(int *)(piVar10[6] + 0x14) + 4),0x409310);
  if ((lVar3 == 0) ||
     (lVar3 = FUN_00316400(*(undefined4 *)(*(int *)(piVar10[6] + 0x14) + 4),0x409370), lVar3 == 0))
  {
    if (*(char *)(*(int *)(piVar10[6] + 0x14) + 0xd) == '\x02') {
      *(undefined4 *)(piVar10[6] + 0xc) = 0x40;
      *(undefined2 *)(piVar10[6] + 0x1a) = 0x24;
      *(undefined2 *)(piVar10[6] + 0x18) = 4;
      iVar1 = piVar10[5];
    }
    else {
      iVar1 = piVar10[5];
    }
  }
  else {
    iVar1 = piVar10[5];
  }
  uVar7 = 0;
  uVar6 = 0;
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + piVar10[6]) == 0) {
        uVar6 = piVar10[5];
      }
      else {
        FUN_00316618((int *)(iVar1 + piVar10[6]),piVar9);
        piVar9 = piVar9 + 4;
        uVar6 = piVar10[5];
      }
      uVar7 = uVar7 + 1;
      iVar1 = iVar1 + 0x28;
    } while (uVar7 < uVar6);
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + piVar10[6] + 4) == 0) {
        uVar6 = piVar10[5];
      }
      else {
        FUN_003165c8(iVar1 + piVar10[6],piVar9);
        iVar2 = (*DAT_0044952c)(piVar9);
        piVar9 = (int *)((int)piVar9 + (iVar2 + iGpffff8f80 & -iGpffff8f80));
        uVar6 = piVar10[5];
      }
      uVar7 = uVar7 + 1;
      iVar1 = iVar1 + 0x28;
    } while (uVar7 < uVar6);
  }
  return param_1;
}


// ==== FUN_003792d0 @ 003792d0 ====

char * FUN_003792d0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  cVar1 = *pcVar2;
  while( true ) {
    if (cVar1 == '.') {
      return pcVar2 + 1;
    }
    pcVar2 = pcVar2 + -1;
    if (pcVar2 == param_1) break;
    cVar1 = *pcVar2;
  }
  return pcVar2;
}


// ==== FUN_00379330 @ 00379330 ====

undefined8 FUN_00379330(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x48ec20;
  lVar1 = FUN_00311bf8(0x48ec20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x48ec20,0x40c6e0,0);
    FUN_00311e60(0x48ec20,0x3d9b68,5,0x3d9bd0,5);
  }
  return uVar2;
}


// ==== FUN_003793a0 @ 003793a0 ====

void FUN_003793a0(void)

{
  FUN_00311ca0(0x48ec20);
  return;
}


// ==== FUN_003793c0 @ 003793c0 ====

int FUN_003793c0(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 5) {
    uVar1 = *(uint *)(param_1 + 0x38);
    puVar6 = (undefined4 *)(param_1 + 0x20);
    puVar5 = *(undefined4 **)(param_1 + 0x20);
    if (uVar1 == 2) {
      bVar2 = true;
      iVar3 = 6;
      while (puVar5 != puVar6) {
        lVar4 = FUN_00323230(puVar5 + -0x11,puVar5[-1],0);
        if (lVar4 == 7) {
          iVar3 = 7;
          break;
        }
        puVar5 = (undefined4 *)*puVar5;
        if (lVar4 != 3) {
          bVar2 = false;
        }
      }
      if ((iVar3 == 6) && (bVar2)) {
        iVar3 = 3;
      }
    }
    else if (uVar1 < 3) {
      if (uVar1 == 1) {
        for (; iVar3 = 3, puVar5 != puVar6; puVar5 = (undefined4 *)*puVar5) {
          lVar4 = FUN_00323230(puVar5 + -0x11,puVar5[-1],0);
          if (lVar4 != 3) {
            return 8;
          }
        }
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0;
      if (uVar1 == 3) {
        for (; iVar3 = 5, puVar5 != puVar6; puVar5 = (undefined4 *)*puVar5) {
          lVar4 = FUN_00323230(puVar5 + -0x11,puVar5[-1],0);
          if (lVar4 != 5) {
            return 4;
          }
        }
      }
    }
  }
  else if (uVar1 < 6) {
    iVar3 = 0;
    if (1 < uVar1) {
      iVar3 = 2;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


// ==== FUN_00379528 @ 00379528 ====

long FUN_00379528(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  uVar1 = *(uint *)(iVar5 + 8);
  if (uVar1 == 5) {
    lVar2 = FUN_003793c0(param_1);
    if (*(uint *)(iVar5 + 8) < 6) {
      if (*(uint *)(iVar5 + 8) < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_00323230(*(int *)(iVar5 + 0x14),*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x80),3
                            );
      }
    }
    else {
      lVar4 = 0;
    }
    uVar1 = *(uint *)(iVar5 + 0x38);
    lVar3 = lVar2;
    if (uVar1 != 2) {
      if (uVar1 < 3) {
        if (uVar1 == 1) {
          lVar3 = 8;
          if ((lVar4 == 3) && (lVar2 == 3)) {
            lVar3 = 3;
          }
        }
        else {
          lVar3 = 0;
        }
      }
      else {
        lVar3 = 0;
        if ((uVar1 == 3) && (((lVar4 == 5 || (lVar3 = 4, lVar4 == 3)) && (lVar3 = 5, lVar2 != 5))))
        {
          lVar3 = 4;
        }
      }
    }
  }
  else if (uVar1 < 6) {
    lVar3 = 0;
    if (1 < uVar1) {
      lVar3 = 2;
    }
  }
  else {
    lVar3 = 0;
    if (uVar1 == 6) {
      lVar3 = 9;
    }
  }
  return lVar3;
}


// ==== FUN_00379658 @ 00379658 ====

undefined4 FUN_00379658(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  
  puVar10 = (uint *)param_3;
  uVar11 = 0;
  iVar9 = (int)param_1;
  if ((*puVar10 & 4) != 0) {
    lVar5 = FUN_0031d1f0(iVar9 + 4,0);
    if (lVar5 != 0) {
      uVar6 = *(uint *)(iVar9 + 8);
      goto LAB_00379914;
    }
    uVar6 = *(uint *)(iVar9 + 0x5c);
    if ((uVar6 & 1) == 0) {
      iVar1 = *(int *)(iVar9 + 0x14);
      if (iVar1 == 0) {
        puVar2 = *(undefined4 **)(iVar9 + 0x20);
      }
      else {
        if (*(int *)(iVar1 + 0x108) != 0) {
          lVar5 = FUN_00324d98(*(int *)(iVar1 + 0x108),0);
          if (lVar5 != 0) {
            FUN_00324968(*(undefined4 *)(iVar1 + 0x108),0x37bef0,param_1);
            puVar2 = *(undefined4 **)(iVar9 + 0x20);
            *(uint *)(iVar9 + 0x5c) = *(uint *)(iVar9 + 0x5c) | 1;
            puVar7 = (undefined4 *)0x0;
            do {
              puVar4 = puVar7;
              if (puVar2 == (undefined4 *)(iVar9 + 0x20)) {
                while (puVar4 != (undefined4 *)0x0) {
                  puVar2 = (undefined4 *)puVar4[0x14];
                  FUN_0037b8a8(puVar4,param_1);
                  puVar4 = puVar2;
                }
                puVar2 = *(undefined4 **)(iVar9 + 0x18);
                while (puVar2 != (undefined4 *)(iVar9 + 0x18)) {
                  puVar7 = puVar2 + -0x11;
                  puVar2 = (undefined4 *)*puVar2;
                  FUN_0037b8a8(puVar7,param_1);
                }
                *(undefined4 *)(iVar9 + 0x14) = 0;
                return 0;
              }
              puVar8 = puVar2 + -0x11;
              puVar2 = (undefined4 *)*puVar2;
              do {
                puVar3 = (undefined4 *)puVar8[0x14];
                puVar7 = puVar8;
                if ((*(undefined4 **)(iVar9 + 0x14) == puVar8) ||
                   (lVar5 = FUN_00316400(*(undefined4 *)*puVar8,0x40c590), lVar5 == 0)) break;
                FUN_0037b8a8(puVar8,param_1);
                puVar8 = puVar3;
                puVar7 = puVar4;
              } while (puVar3 != (undefined4 *)0x0);
            } while( true );
          }
          goto LAB_00379910;
        }
        puVar2 = *(undefined4 **)(iVar9 + 0x20);
      }
      puVar7 = (undefined4 *)0x0;
joined_r0x003797f8:
      puVar4 = puVar7;
      if (puVar2 != (undefined4 *)(iVar9 + 0x20)) {
        puVar8 = puVar2 + -0x11;
        puVar2 = (undefined4 *)*puVar2;
        do {
          puVar3 = (undefined4 *)puVar8[0x14];
          puVar7 = puVar8;
          if ((*(undefined4 **)(iVar9 + 0x14) == puVar8) ||
             (lVar5 = FUN_00316400(*(undefined4 *)*puVar8,0x40c590), lVar5 == 0)) break;
          FUN_0037b8a8(puVar8,param_1);
          puVar8 = puVar3;
          puVar7 = puVar4;
        } while (puVar3 != (undefined4 *)0x0);
        goto joined_r0x003797f8;
      }
      while (puVar4 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar4[0x14];
        FUN_0037b8a8(puVar4,param_1);
        puVar4 = puVar2;
      }
      puVar2 = *(undefined4 **)(iVar9 + 0x18);
      while (puVar2 != (undefined4 *)(iVar9 + 0x18)) {
        puVar7 = puVar2 + -0x11;
        puVar2 = (undefined4 *)*puVar2;
        FUN_0037b8a8(puVar7,param_1);
      }
      *(undefined4 *)(iVar9 + 0x14) = 0;
      *(undefined4 *)(iVar9 + 8) = 2;
    }
    else {
      if ((uVar6 & 2) == 0) {
        return 0;
      }
      *(undefined4 *)(iVar9 + 8) = 2;
      *(uint *)(iVar9 + 0x5c) = uVar6 & 0xfffffffc;
    }
    *puVar10 = *puVar10 & 0xfffffffb;
  }
LAB_00379910:
  uVar6 = *(uint *)(iVar9 + 8);
LAB_00379914:
  if (uVar6 < 5) {
    FUN_0037ae38(param_1,param_2,param_3);
    uVar6 = *(uint *)(iVar9 + 8);
    if (uVar6 < 5) {
      return 0;
    }
    uVar11 = 1;
  }
  if (uVar6 != 6) {
    if ((*puVar10 & 8) != 0) {
      FUN_0037b740(param_1,param_2,param_3);
      *puVar10 = *puVar10 & 0xfffffff7;
    }
    if ((*puVar10 & 0x20) != 0) {
      FUN_0037bb90(param_1,param_2,param_3);
      *puVar10 = *puVar10 & 0xffffffdf;
    }
    if ((*puVar10 & 0x10) != 0) {
      FUN_0037b910(param_1,param_2,param_3);
      *puVar10 = *puVar10 & 0xffffffef;
    }
    if ((*puVar10 & 0x40) != 0) {
      FUN_0037bb58(param_1,param_3);
      *puVar10 = *puVar10 & 0xffffffbf;
    }
    if ((*puVar10 & 0x80) != 0) {
      if (*(uint *)(iVar9 + 0x38) != puVar10[1]) {
        FUN_0037ba00(param_1,param_2);
        *(uint *)(iVar9 + 0x38) = puVar10[1];
      }
      *puVar10 = *puVar10 & 0xffffff7f;
    }
  }
  return uVar11;
}


// ==== FUN_00379a88 @ 00379a88 ====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00379a88(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *****pppppuVar2;
  undefined4 uVar3;
  undefined4 ******ppppppuVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined4 ****ppppuVar10;
  undefined4 *puVar11;
  undefined4 *******pppppppuVar12;
  undefined4 ****ppppuVar13;
  undefined1 *puVar14;
  undefined4 ******ppppppuVar15;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  undefined4 uStack_c8;
  undefined4 *******pppppppuStack_c0;
  undefined4 *******pppppppuStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [4];
  undefined4 ******ppppppuStack_ac;
  undefined1 *puStack_a8;
  
  uVar1 = param_2[1];
  ppppppuStack_ac = (undefined4 ******)0x0;
  if (uVar1 == 2) {
    if (param_2[2] != 0) {
      uStack_b8 = 0;
      pppppppuStack_c0 = &pppppppuStack_c0;
      pppppppuStack_bc = &pppppppuStack_c0;
      uVar6 = FUN_00311db8(0x40c6e0);
      lVar7 = FUN_0031df58(0,uVar6,&pppppppuStack_c0);
      if (lVar7 == 0) {
        return 0;
      }
      if ((undefined4 ********)pppppppuStack_bc != &pppppppuStack_c0) {
        ppppppuVar15 = pppppppuStack_bc[2];
        pppppppuVar12 = pppppppuStack_bc;
        while( true ) {
          ppppuVar13 = (undefined4 ****)0x0;
          pppppuVar2 = ppppppuVar15[0x15];
          while ((ppppppuVar4 = ppppppuStack_ac, ppppuVar13 < pppppuVar2[4] &&
                 (lVar7 = FUN_003150d0(pppppuVar2[3][(int)ppppuVar13],param_2[2]),
                 ppppppuVar4 = ppppppuVar15, lVar7 == 0))) {
            ppppuVar13 = (undefined4 ****)((int)ppppuVar13 + 1);
          }
          ppppppuStack_ac = ppppppuVar4;
          pppppppuVar12 = (undefined4 *******)pppppppuVar12[1];
          if ((undefined4 ********)pppppppuVar12 == &pppppppuStack_c0) break;
          ppppppuVar15 = pppppppuVar12[2];
        }
      }
      FUN_00318340(&pppppppuStack_c0);
    }
  }
  else if (uVar1 < 3) {
    if (uVar1 == 1) {
      uStack_c8 = 0;
      puStack_d0 = (undefined1 *)&puStack_d0;
      puStack_cc = (undefined1 *)&puStack_d0;
      uVar6 = FUN_00311db8(0x40c6e0);
      lVar7 = FUN_0031df58(0,uVar6,&puStack_d0);
      if (lVar7 == 0) {
        return 0;
      }
      iVar9 = *param_2;
      iVar5 = FUN_003792d0(iVar9);
      if (iVar5 == iVar9) {
        FUN_00318340(&puStack_d0);
        return 0;
      }
      puStack_a8 = (undefined1 *)&puStack_d0;
      if ((undefined1 **)puStack_cc != &puStack_d0) {
        ppppppuVar15 = *(undefined4 *******)(puStack_cc + 8);
        puVar14 = puStack_cc;
        puStack_a8 = (undefined1 *)&puStack_d0;
        do {
          pppppuVar2 = ppppppuVar15[0x15];
          for (ppppuVar13 = (undefined4 ****)0x0; ppppppuVar4 = ppppppuStack_ac,
              ppppuVar13 < pppppuVar2[2]; ppppuVar13 = (undefined4 ****)((int)ppppuVar13 + 1)) {
            ppppuVar10 = pppppuVar2[1] + (int)ppppuVar13;
            uVar6 = (*DAT_0044952c)(*ppppuVar10);
            lVar7 = FUN_00316840(*ppppuVar10,iVar5,uVar6);
            ppppppuVar4 = ppppppuVar15;
            if (lVar7 == 0) break;
          }
          ppppppuStack_ac = ppppppuVar4;
          puVar14 = *(undefined1 **)(puVar14 + 4);
          if ((puVar14 == puStack_a8) || (ppppppuStack_ac != (undefined4 ******)0x0)) break;
          ppppppuVar15 = *(undefined4 *******)(puVar14 + 8);
        } while( true );
      }
      FUN_00318340(&puStack_d0);
    }
  }
  else if (uVar1 == 3) {
    ppppppuStack_ac = (undefined4 ******)FUN_0031deb8(0,0x40c580,auStack_b0);
  }
  if (ppppppuStack_ac != (undefined4 ******)0x0) {
    lVar7 = FUN_00312c48(*(undefined2 *)(ppppppuStack_ac + 0x11),0x1080f);
    if (lVar7 == 0) {
      return 0;
    }
    lVar8 = FUN_0031de78(ppppppuStack_ac,lVar7);
    if (lVar8 != 0) {
      puVar11 = (undefined4 *)lVar7;
      puVar11[1] = 1;
      puVar11[4] = param_1 + 0x28;
      *puVar11 = 0;
      puVar11[2] = 0;
      puVar11[0xb] = *param_2;
      puVar11[0xc] = param_2[1];
      puVar11[10] = param_2[2];
      puVar11[0xd] = param_2[3];
      puVar11[0xe] = param_2[4];
      puVar11[0x10] = param_2[8];
      puVar11[0x11] = param_2[7];
      puVar11[0x17] = param_2[9];
      *(int *)(param_1 + 0x10) = param_2[10];
      if (param_2[0xb] == 0) {
        puVar11[0x14] = 0;
      }
      else {
        puVar11[0x14] = param_2[10];
      }
      puVar11[0xf] = 0;
      puVar11[0x12] = param_2[5];
      iVar9 = param_2[6];
      puVar11[0x16] = 0;
      puVar11[0x13] = iVar9;
      puVar11[0x15] = 0;
      lVar8 = FUN_00310978(ppppppuStack_ac,0,0,lVar7,*(undefined4 *)(param_1 + 0x50),
                           *(undefined4 *)(param_1 + 0x58));
      if (lVar8 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        iVar9 = (int)lVar8;
        *(int *)(iVar9 + 0x48) = param_1 + 0x18;
        *(undefined4 *)(iVar9 + 0x44) = uVar3;
        *(int *)(*(int *)(param_1 + 0x18) + 4) = iVar9 + 0x44;
        *(int *)(param_1 + 0x14) = iVar9;
        *(int *)(param_1 + 0x18) = iVar9 + 0x44;
        FUN_00312c70(lVar7);
        return 1;
      }
    }
    FUN_00312c70(lVar7);
  }
  return 0;
}


// ==== FUN_00379df8 @ 00379df8 ====

bool FUN_00379df8(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6,undefined8 param_7,undefined4 *param_8)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 *puStack_b4;
  int iStack_b0;
  int iStack_ac;
  
  iStack_b0 = *(int *)(param_5 + 4);
  if (iStack_b0 != param_5) {
    iStack_ac = param_3 * 0x28;
    uStack_bc = param_4;
    iStack_b8 = param_5;
    puStack_b4 = param_8;
    do {
      bVar3 = false;
      puVar5 = (undefined4 *)*param_6;
      iVar2 = *(int *)(iStack_b0 + 8);
      iVar8 = *(int *)(iVar2 + 0x54);
      while (puVar5 != param_6) {
        if (puVar5[-0x12] == iVar2) {
          if (puVar5[-1] == param_3) {
            bVar3 = true;
            break;
          }
          puVar5 = (undefined4 *)*puVar5;
        }
        else {
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      if (!bVar3) {
        puVar9 = (undefined8 *)param_1;
        if (*(int *)(iVar8 + 4) == 0) {
          FUN_0031de78(iVar2,&uStack_120);
          iVar8 = (int)param_7;
          iStack_118 = *(int *)(iVar8 + 0xc);
          uStack_c8 = *(undefined4 *)(iVar8 + 0x10);
          uStack_cc = *(undefined4 *)(iStack_ac + *(int *)(iStack_118 + 0x18) + 0x20);
          uStack_104 = *puVar9;
          uStack_fc = puVar9[1];
          uStack_f4 = puVar9[2];
          uStack_ec = *(undefined4 *)(puVar9 + 3);
          puVar9 = (undefined8 *)param_2;
          uStack_e8 = *puVar9;
          uStack_e0 = puVar9[1];
          uStack_d8 = puVar9[2];
          uStack_d0 = *(undefined4 *)(puVar9 + 3);
          lVar4 = FUN_00310978(iVar2,0,4,&uStack_120,*(undefined4 *)(iVar8 + 0x50),
                               *(undefined4 *)(iVar8 + 0x58));
          if (lVar4 != 0) {
            FUN_003110b0(lVar4,*(undefined4 *)(iVar8 + 0x54),*(undefined4 *)(iVar8 + 0x58));
            lVar4 = FUN_0037bce0(param_6,iVar2,uStack_bc,param_1,param_2,param_3,0);
            return lVar4 != 0;
          }
        }
        else {
          uVar7 = 0;
          if (*(int *)(iVar8 + 8) != 0) {
            iVar6 = 0;
            do {
              lVar4 = FUN_003150d0(**(undefined4 **)(iVar6 + *(int *)(iVar8 + 4)),param_1);
              if (lVar4 != 0) {
                lVar4 = FUN_003150d0(*(undefined4 *)(*(int *)(iVar6 + *(int *)(iVar8 + 4)) + 4),
                                     param_2);
                if (lVar4 != 0) {
                  lVar4 = FUN_0037bce0(param_6,iVar2,uStack_bc,param_1,param_2,param_3,0);
                  if (lVar4 == 0) {
                    return false;
                  }
                  if (puStack_b4 != (undefined4 *)0x0) {
                    *puStack_b4 = (int)lVar4;
                    return true;
                  }
                  return true;
                }
                uStack_11c = 0;
                iStack_118 = 0;
                uStack_114 = 0;
                uStack_113 = 0;
                uStack_108 = 0;
                uStack_107 = 0;
                uStack_110 = 0;
                uStack_10c = 0;
                uStack_120 = *(undefined4 *)puVar9;
                FUN_00315048(*(undefined4 *)(*(int *)(iVar6 + *(int *)(iVar8 + 4)) + 4),&uStack_120,
                             1);
                lVar4 = FUN_00379df8(&uStack_120,param_2,param_3,uStack_bc,iStack_b8,param_6,param_7
                                     ,&uStack_c0);
                if (lVar4 != 0) {
                  lVar4 = FUN_0037bce0(param_6,iVar2,uStack_bc,param_1,param_2,param_3,uStack_c0);
                  if (lVar4 == 0) {
                    puVar5 = (undefined4 *)*param_6;
                    if (puVar5 != param_6) {
                      do {
                        piVar1 = puVar5 + -1;
                        puVar5 = (undefined4 *)*puVar5;
                        if (param_3 == *piVar1) {
                          FUN_0037be10();
                        }
                      } while (puVar5 != param_6);
                      return false;
                    }
                    return false;
                  }
                  if (puStack_b4 == (undefined4 *)0x0) {
                    return true;
                  }
                  *puStack_b4 = (int)lVar4;
                  return true;
                }
              }
              uVar7 = uVar7 + 1;
              iVar6 = iVar6 + 4;
            } while (uVar7 < *(uint *)(iVar8 + 8));
          }
        }
      }
      iStack_b0 = *(int *)(iStack_b0 + 4);
    } while (iStack_b0 != iStack_b8);
  }
  return false;
}


// ==== FUN_0037a160 @ 0037a160 ====

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_0037a160(int param_1,undefined4 param_2,int param_3,int ******param_4,int ******param_5,
            int param_6)

{
  int ******ppppppiVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *******pppppppiVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  int *******pppppppiVar9;
  uint uVar10;
  int iVar11;
  int *****pppppiVar12;
  uint uVar13;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  int *******pppppppiStack_d0;
  int *******pppppppiStack_cc;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int ******ppppppiStack_b4;
  int iStack_b0;
  int iStack_ac;
  
  pppppiVar12 = (int *****)0x0;
  iStack_ac = 0;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x14) == 0) {
    return 1;
  }
  ppppppiVar1 = (int ******)*param_5;
  iStack_c0 = param_1;
  uStack_bc = param_2;
  iStack_b8 = param_3;
  ppppppiStack_b4 = param_4;
  iStack_b0 = param_6;
  do {
    bVar6 = false;
    for (; ppppppiVar1 != param_5; ppppppiVar1 = (int ******)*ppppppiVar1) {
      if (ppppppiVar1[-1] == pppppiVar12) {
        bVar6 = true;
        break;
      }
    }
    if (!bVar6) {
      if (iStack_b8 == 0) {
        return 0;
      }
      if (iStack_ac == 0) {
        uStack_f8 = 0;
        puStack_100 = (undefined1 *)&puStack_100;
        puStack_fc = (undefined1 *)&puStack_100;
        lVar7 = FUN_0031df58(0,iStack_b8,&puStack_100);
        if (lVar7 == 0) {
          return 0;
        }
        iStack_ac = 1;
      }
      pppppppiStack_d0 = (int *******)&pppppppiStack_d0;
      uVar13 = 0;
      bVar6 = false;
      puVar2 = *(undefined4 **)
                ((int)pppppiVar12 * 0x28 + *(int *)(*(int *)(iStack_c0 + 0xc) + 0x18) + 0x14);
      pppppppiStack_cc = pppppppiStack_d0;
      do {
        iVar11 = 0;
        iVar8 = *(int *)(iStack_b0 + 4);
        uVar10 = 0xffffffff;
        if (iVar8 != iStack_b0) {
          iVar3 = *(int *)(iVar8 + 8);
          while( true ) {
            uVar4 = *(uint *)(*(int *)(iVar3 + 0x54) + 0x10);
            iVar8 = *(int *)(iVar8 + 4);
            if ((uVar13 <= uVar4) && (uVar13 <= uVar10)) {
              uVar10 = uVar4;
              iVar11 = iVar3;
            }
            if (iVar8 == iStack_b0) break;
            iVar3 = *(int *)(iVar8 + 8);
          }
        }
        if (iVar11 == 0) break;
        iVar8 = *(int *)(iVar11 + 0x54);
        uVar10 = 0;
        uVar13 = *(int *)(iVar8 + 0x10) + 1;
        if (*(int *)(iVar8 + 8) != 0) {
          do {
            uStack_ec = 0;
            uStack_e8 = 0;
            uStack_e4 = 0;
            uStack_e3 = 0;
            uStack_d8 = 0;
            uStack_d7 = 0;
            uStack_e0 = 0;
            uStack_dc = 0;
            uStack_f0 = *puVar2;
            FUN_00315048(*(undefined4 *)(uVar10 * 4 + *(int *)(iVar8 + 4)),&uStack_f0,0);
            lVar7 = FUN_00379df8(puVar2,&uStack_f0,pppppiVar12,iStack_b8,&puStack_100,
                                 &pppppppiStack_d0,iStack_c0,0);
            if (lVar7 != 0) {
              bVar6 = true;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(iVar8 + 8));
          if (iVar11 == 0) break;
        }
      } while (!bVar6);
      if (!bVar6) {
        FUN_00318340(&puStack_100);
        return 0;
      }
      pppppppiStack_d0[-2] = ppppppiStack_b4;
      lVar7 = FUN_0037bce0(&pppppppiStack_d0,iVar11,uStack_bc,&uStack_f0,0,pppppiVar12,
                           pppppppiStack_cc + -0x13);
      if (lVar7 == 0) {
        FUN_00318340(&puStack_100);
        FUN_0037be50(&pppppppiStack_d0);
        return 0;
      }
      pppppppiVar9 = pppppppiStack_d0;
      if ((int ********)pppppppiStack_d0 != &pppppppiStack_d0) {
        do {
          pppppppiVar5 = (int *******)*pppppppiVar9;
          *pppppppiVar9[1] = (int *****)pppppppiVar5;
          (*pppppppiVar9)[1] = (int *****)pppppppiVar9[1];
          pppppppiVar9[1] = (int ******)0x0;
          *pppppppiVar9 = (int ******)0x0;
          ppppppiVar1 = (int ******)*param_5;
          pppppppiVar9[1] = param_5;
          *pppppppiVar9 = ppppppiVar1;
          (*param_5)[1] = (int ****)pppppppiVar9;
          *param_5 = (int *****)pppppppiVar9;
          pppppppiVar9 = pppppppiVar5;
        } while ((int ********)pppppppiVar5 != &pppppppiStack_d0);
      }
    }
    pppppiVar12 = (int *****)((int)pppppiVar12 + 1);
    if (*(int ******)(*(int *)(iStack_c0 + 0xc) + 0x14) <= pppppiVar12) {
      return 1;
    }
    ppppppiVar1 = (int ******)*param_5;
  } while( true );
}


// ==== FUN_0037a478 @ 0037a478 ====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0037a478(undefined8 param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  undefined4 *****pppppuVar3;
  undefined4 ***pppuVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  int *piVar9;
  int **ppiVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 **ppuVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined4 ****ppppuVar21;
  undefined4 ******ppppppuVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  ushort uVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  undefined4 **ppuVar30;
  undefined4 **ppuVar31;
  undefined4 ****ppppuVar32;
  int *piVar33;
  undefined4 *******pppppppuVar34;
  int iVar35;
  undefined2 uVar36;
  int *piStack_1c0;
  undefined1 *puStack_1bc;
  undefined4 *******pppppppuStack_1b0;
  undefined4 *******pppppppuStack_1ac;
  undefined4 uStack_1a8;
  undefined4 *puStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_16b;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 auStack_140 [8];
  int iStack_138;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 *puStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint *puStack_e0;
  undefined4 **ppuStack_dc;
  undefined4 *puStack_d8;
  int iStack_d4;
  undefined1 *puStack_d0;
  int iStack_cc;
  undefined4 **ppuStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  piStack_1c0 = (int *)&piStack_1c0;
  puStack_1bc = (undefined1 *)&piStack_1c0;
  iVar35 = (int)param_1;
  *(undefined4 *)(iVar35 + 0x44) = 0x20;
  *(undefined4 *)(iVar35 + 0x40) = 0;
  if (*(int *)(iVar35 + 0xc) == 0) {
    return 0;
  }
  uVar28 = *(uint *)(*(int *)(iVar35 + 0xc) + 0x14);
  param_2[1] = uVar28;
  puStack_e0 = param_2;
  if (uVar28 < 2) {
    uStack_15c = 0;
    uStack_198 = FUN_00311db8(0x40c6e0);
    puStack_1a0 = *(undefined4 **)(iVar35 + 0x14);
    uStack_19c = *puStack_1a0;
    uStack_158 = 0xffffffff;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_16b = 0;
    uStack_160 = 0;
    uStack_15f = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_150 = 0;
    ppuStack_dc = &puStack_1a0;
    uStack_154 = 0;
  }
  else {
    piStack_1c0 = (int *)&piStack_1c0;
    puStack_1bc = (undefined1 *)&piStack_1c0;
    uVar16 = FUN_0031deb8(0,0x40c590,0);
    uVar17 = FUN_00311db8(0x409f48);
    lVar18 = FUN_0037bce0(&piStack_1c0,uVar16,uVar17,0,0,0xffffffffffffffff,0);
    if (lVar18 == 0) {
      return 0;
    }
    ppuStack_dc = (undefined4 **)lVar18;
  }
  puStack_d8 = (undefined4 *)FUN_00311db8(0x409fa8);
  iStack_d4 = FUN_00311db8(0x40c758);
  pppppppuStack_1b0 = &pppppppuStack_1b0;
  uStack_1a8 = 0;
  pppppppuStack_1ac = pppppppuStack_1b0;
  lVar18 = FUN_0031df58(0,puStack_d8,pppppppuStack_1b0);
  if (lVar18 == 0) {
    return 0;
  }
  iVar20 = *(int *)(iVar35 + 0xc);
  uVar27 = 0;
  puStack_d0 = (undefined1 *)&piStack_1c0;
  ppiVar10 = &piStack_1c0;
  if (*(int *)(iVar20 + 0x14) != 0) {
LAB_0037a620:
    puStack_d0 = (undefined1 *)ppiVar10;
    puVar2 = *(uint **)((int)uVar27 * 0x28 + *(int *)(iVar20 + 0x18) + 0x14);
    ppppppuVar22 = (undefined4 ******)0x0;
    if ((undefined4 ********)pppppppuStack_1ac != &pppppppuStack_1b0) {
      ppppppuVar22 = pppppppuStack_1ac[2];
      pppppppuVar34 = pppppppuStack_1ac;
      do {
        pppppuVar3 = ppppppuVar22[0x15];
        ppppuVar32 = (undefined4 ****)0x0;
        if (pppppuVar3[2] != (undefined4 ****)0x0) {
          ppppuVar21 = pppppuVar3[1];
          do {
            uVar28 = puVar2[6];
            pppuVar4 = ppppuVar21[(int)ppppuVar32];
            bVar1 = *(byte *)(pppuVar4 + 4);
            uStack_b0 = (undefined4)uVar27;
            uStack_ac = (undefined4)(uVar27 >> 0x20);
            lVar18 = FUN_00316400(puVar2[1],*pppuVar4);
            uVar27 = CONCAT44(uStack_ac,uStack_b0);
            if (lVar18 == 0) {
              if ((char)puVar2[3] == *(char *)(pppuVar4 + 1)) {
                if ((bVar1 & 1) == ((byte)uVar28 & 1)) {
                  if (*(char *)((int)puVar2 + 0xd) == *(char *)((int)pppuVar4 + 5)) {
                    if ((undefined4 **)*puVar2 <= pppuVar4[3]) {
                      if ((undefined4 **)*puVar2 < pppuVar4[2]) goto LAB_0037a6e0;
                      goto LAB_0037a708;
                    }
                    ppppuVar21 = pppppuVar3[2];
                  }
                  else {
                    ppppuVar21 = pppppuVar3[2];
                  }
                }
                else {
                  ppppuVar21 = pppppuVar3[2];
                }
              }
              else {
                ppppuVar21 = pppppuVar3[2];
              }
            }
            else {
LAB_0037a6e0:
              ppppuVar21 = pppppuVar3[2];
            }
            ppppuVar32 = (undefined4 ****)((int)ppppuVar32 + 1);
            if (ppppuVar21 <= ppppuVar32) break;
            ppppuVar21 = pppppuVar3[1];
          } while( true );
        }
        pppppppuVar34 = (undefined4 *******)pppppppuVar34[1];
        if ((undefined4 ********)pppppppuVar34 == &pppppppuStack_1b0) goto code_r0x0037a704;
        ppppppuVar22 = pppppppuVar34[2];
      } while( true );
    }
    goto LAB_0037a708;
  }
LAB_0037a75c:
  bVar8 = true;
LAB_0037a760:
  if (!bVar8) {
LAB_0037a790:
    FUN_00318340(&pppppppuStack_1b0);
    return 0;
  }
  lVar18 = FUN_0037a160(param_1,puStack_d8,iStack_d4,ppuStack_dc,&piStack_1c0,&pppppppuStack_1b0);
  if (lVar18 == 0) {
    FUN_0037be50(&piStack_1c0);
    goto LAB_0037a790;
  }
  FUN_00318340(&pppppppuStack_1b0);
  uVar28 = 0;
  iVar20 = *(int *)(*(int *)(iVar35 + 0xc) + 0x18);
  uVar26 = 0;
  uVar25 = 0;
  uVar24 = 0xffffffff;
  piVar23 = piStack_1c0;
  if ((int **)piStack_1c0 != &piStack_1c0) {
    do {
      if ((undefined4 *)piVar23[-0x11] == puStack_d8) {
        uVar5 = *(uint *)(*(int *)(piVar23[-0x12] + 0x54) + 0xc);
        if (uVar5 == 0) {
          *puStack_e0 = *puStack_e0 | 1;
        }
        else {
          if (uVar5 < uVar24) {
            uVar24 = uVar5;
          }
          uVar5 = **(uint **)(piVar23[-1] * 0x28 + iVar20 + 0x14);
          if (uVar25 < uVar5) {
            uVar25 = uVar5;
          }
        }
        if (uVar28 < **(uint **)(piVar23[-1] * 0x28 + iVar20 + 0x14)) {
          if (uVar28 != 0) {
            *puStack_e0 = *puStack_e0 | 3;
          }
          uVar28 = **(uint **)(piVar23[-1] * 0x28 + *(int *)(*(int *)(iVar35 + 0xc) + 0x18) + 0x14);
          iVar29 = piVar23[-0x12];
        }
        else {
          iVar29 = piVar23[-0x12];
        }
      }
      else {
        iVar29 = piVar23[-0x12];
      }
      piVar23 = (int *)*piVar23;
      if (uVar26 < *(ushort *)(iVar29 + 0x44)) {
        uVar26 = *(ushort *)(iVar29 + 0x44);
      }
    } while ((int **)piVar23 != &piStack_1c0);
  }
  *(uint *)(iVar35 + 0x44) = uVar24;
  *(uint *)(iVar35 + 0x40) = uVar25;
  lVar18 = FUN_00312c48(uVar26,0x1080f);
  if (lVar18 == 0) goto LAB_0037a980;
  iVar20 = (int)lVar18;
  if (ppuStack_dc == &puStack_1a0) goto LAB_0037a9dc;
  lVar19 = FUN_0031de78(ppuStack_dc[1],lVar18);
  if (lVar19 != 0) {
    if (iGpffff8a24 == 2) {
      iStack_cc = FUN_0036d518();
    }
    *(int *)(iVar35 + 4) = *(int *)(iVar35 + 4) + 1;
    if (iGpffff8a24 == 2) {
      if (iStack_cc == 1) {
        FUN_0036d568();
        goto LAB_0037a930;
      }
      uVar12 = *(undefined4 *)(iVar35 + 0xc);
    }
    else {
LAB_0037a930:
      uVar12 = *(undefined4 *)(iVar35 + 0xc);
    }
    *(undefined4 *)(iVar20 + 8) = uVar12;
    uVar12 = *(undefined4 *)(iVar35 + 0x10);
    *(int *)(iVar20 + 0x10) = iVar35 + 0x28;
    *(undefined4 *)(iVar20 + 0xc) = uVar12;
    lVar19 = FUN_00310978(ppuStack_dc[1],0,4,lVar18,*(undefined4 *)(iVar35 + 0x50),
                          *(undefined4 *)(iVar35 + 0x58));
    *ppuStack_dc = (undefined4 *)lVar19;
    if (lVar19 != 0) {
      ((undefined4 *)lVar19)[0x11] = *(undefined4 *)(iVar35 + 0x18);
      (*ppuStack_dc)[0x12] = iVar35 + 0x18;
      *(undefined4 **)(*(int *)(iVar35 + 0x18) + 4) = *ppuStack_dc + 0x11;
      *(undefined4 **)(iVar35 + 0x18) = *ppuStack_dc + 0x11;
      FUN_00322f20(*(undefined4 *)(iVar35 + 0x14),0,*ppuStack_dc,0);
LAB_0037a9dc:
      iStack_bc = iVar35 + 0x60;
      *(int *)(iVar35 + 0x60) = iStack_bc;
      *(int *)(iVar35 + 100) = iStack_bc;
      do {
        ppuVar13 = (undefined4 **)FUN_0037beb8(&piStack_1c0,puStack_d8);
        ppuStack_c8 = (undefined4 **)0x0;
        if (ppuVar13 == (undefined4 **)0x0) break;
        do {
          ppuVar31 = (undefined4 **)0x0;
          if (ppuVar13 != (undefined4 **)0x0) {
            puVar15 = *ppuVar13;
            ppuVar30 = ppuVar13;
            while (ppuVar31 = ppuStack_c8, puVar15 == (undefined4 *)0x0) {
              ppuVar31 = (undefined4 **)ppuVar30[0x11];
              ppuStack_c8 = ppuVar30;
              if (ppuVar31 == (undefined4 **)0x0) {
                ppuVar31 = (undefined4 **)0x0;
                puVar15 = puRam00000004;
                goto LAB_0037aa38;
              }
              ppuVar30 = ppuVar31;
              puVar15 = *ppuVar31;
            }
          }
          puVar15 = ppuVar31[1];
LAB_0037aa38:
          lVar19 = FUN_0031de78(puVar15,lVar18);
          if (lVar19 == 0) goto LAB_0037a978;
          uVar12 = *(undefined4 *)(iVar35 + 0xc);
          *(int *)(iVar20 + 0x10) = iVar35 + 0x28;
          *(undefined4 *)(iVar20 + 8) = uVar12;
          if (ppuVar31[2] == puStack_d8) {
            uStack_c4 = 0;
            uVar12 = 0;
            iVar29 = *(int *)(*(int *)(iVar35 + 0xc) + 0x18) + (int)ppuVar31[0x12] * 0x28;
            uVar36 = 0;
            if (ppuVar31[0x11][2] == iStack_d4) {
              uStack_c4 = *(undefined4 *)(iVar29 + 0x14);
              *(undefined4 ***)(iVar29 + 0x14) = ppuVar31 + 3;
              uVar12 = *(undefined4 *)(iVar29 + 0xc);
              uVar36 = *(undefined2 *)(iVar29 + 0x1a);
              uVar14 = FUN_00314b98(ppuVar31 + 3);
              *(undefined4 *)(iVar29 + 0xc) = uVar14;
              uVar11 = FUN_00314630(*(undefined4 *)(iVar29 + 0x14));
              *(undefined2 *)(iVar29 + 0x1a) = uVar11;
            }
            *(int *)(iVar20 + 0x1c) = iVar29;
            *(int *)(iVar20 + 0x2c) = iStack_bc;
            uVar14 = *(undefined4 *)(iVar35 + 0x10);
            *(int *)(iVar20 + 0x28) = iVar35;
            *(undefined4 *)(iVar20 + 0xc) = uVar14;
            *(undefined1 **)(iVar20 + 0x24) = &LAB_0037bc58;
            if (*(int *)(*(int *)(iVar35 + 0x14) + 0x210) == 2) {
              *(undefined4 *)(iVar20 + 0x30) = 0;
            }
            else {
              *(undefined4 *)(iVar20 + 0x30) = 1;
            }
            if (iGpffff8a24 == 2) {
              iStack_c0 = FUN_0036d518();
            }
            *(int *)(iVar35 + 4) = *(int *)(iVar35 + 4) + 1;
            if (iGpffff8a24 == 2) {
              if (iStack_c0 == 1) {
                FUN_0036d568();
                goto LAB_0037ab60;
              }
              puVar15 = ppuVar31[1];
            }
            else {
LAB_0037ab60:
              puVar15 = ppuVar31[1];
            }
            puVar15 = (undefined4 *)
                      FUN_00310978(puVar15,*(undefined4 *)(iVar35 + 0x48),4,lVar18,
                                   *(undefined4 *)(iVar35 + 0x50),*(undefined4 *)(iVar35 + 0x58));
            *ppuVar31 = puVar15;
            if (ppuVar31[0x11][2] == iStack_d4) {
              *(undefined4 *)(iVar29 + 0xc) = uVar12;
              *(undefined2 *)(iVar29 + 0x1a) = uVar36;
              *(undefined4 *)(iVar29 + 0x14) = uStack_c4;
              puVar15 = *ppuVar31;
            }
            else {
              puVar15 = *ppuVar31;
            }
            piVar23 = (int *)(iVar35 + 0x20);
            if (puVar15 == (undefined4 *)0x0) goto LAB_0037a978;
            puVar15[0x19] = ppuVar31[0x12];
            piVar6 = *(int **)(iVar35 + 0x20);
            piVar33 = (int *)0x0;
            if (piVar6 != piVar23) {
              puVar15 = (undefined4 *)piVar6[8];
              while ((piVar9 = piVar6, puVar15 <= ppuVar31[0x12] &&
                     (piVar6 = (int *)*piVar9, piVar33 = piVar9, piVar6 != piVar23))) {
                puVar15 = (undefined4 *)piVar6[8];
              }
            }
            if (piVar33 == (int *)0x0) {
              (*ppuVar31)[0x11] = *(undefined4 *)(iVar35 + 0x20);
              (*ppuVar31)[0x12] = piVar23;
              *(undefined4 **)(*(int *)(iVar35 + 0x20) + 4) = *ppuVar31 + 0x11;
              *(undefined4 **)(iVar35 + 0x20) = *ppuVar31 + 0x11;
            }
            else {
              (*ppuVar31)[0x11] = *piVar33;
              (*ppuVar31)[0x12] = piVar33;
              *(undefined4 **)(*piVar33 + 4) = *ppuVar31 + 0x11;
              *piVar33 = (int)(*ppuVar31 + 0x11);
            }
          }
          else {
            puVar15 = ppuVar31[1];
            puVar7 = ppuVar31[0x12];
            FUN_0031de78(puVar15,auStack_140);
            iStack_138 = *(int *)(iVar35 + 0xc);
            uStack_e8 = *(undefined4 *)(iVar35 + 0x10);
            uStack_ec = *(undefined4 *)((int)puVar7 * 0x28 + *(int *)(iStack_138 + 0x18) + 0x20);
            uStack_124 = *(undefined8 *)(ppuVar31 + 3);
            uStack_11c = *(undefined8 *)(ppuVar31 + 5);
            uStack_114 = *(undefined8 *)(ppuVar31 + 7);
            puStack_10c = ppuVar31[9];
            uStack_108 = *(undefined8 *)(ppuVar31 + 10);
            uStack_100 = *(undefined8 *)(ppuVar31 + 0xc);
            uStack_f8 = *(undefined8 *)(ppuVar31 + 0xe);
            puStack_f0 = ppuVar31[0x10];
            lVar19 = FUN_00310978(puVar15,0,4,auStack_140,*(undefined4 *)(iVar35 + 0x50),
                                  *(undefined4 *)(iVar35 + 0x58));
            *ppuVar31 = (undefined4 *)lVar19;
            if (lVar19 == 0) goto LAB_0037a978;
            ((undefined4 *)lVar19)[0x11] = *(undefined4 *)(iVar35 + 0x18);
            (*ppuVar31)[0x12] = iVar35 + 0x18;
            *(undefined4 **)(*(int *)(iVar35 + 0x18) + 4) = *ppuVar31 + 0x11;
            *(undefined4 **)(iVar35 + 0x18) = *ppuVar31 + 0x11;
          }
          puVar15 = (undefined4 *)0x0;
          if ((undefined4 **)ppuVar31[0x11] == ppuStack_dc) {
            puVar15 = ppuVar31[0x12];
          }
          FUN_00322f20((undefined4 *)*ppuVar31[0x11],puVar15,*ppuVar31,0);
        } while (ppuVar31 != ppuVar13);
        ppuVar31 = ppuVar13;
        if (ppuVar13 != ppuStack_dc) {
          do {
            ppuStack_c8 = ppuVar31;
            ppuVar31 = (undefined4 **)ppuStack_c8[0x11];
            FUN_0037be10(ppuStack_c8);
          } while (ppuVar31 != ppuStack_dc);
        }
      } while (ppuVar13 != (undefined4 **)0x0);
      piVar23 = *(int **)(iVar35 + 0x20);
      if (piVar23 != (int *)(iVar35 + 0x20)) {
        piVar23[8] = 1;
        while (piVar23 = (int *)*piVar23, piVar23 != (int *)(iVar35 + 0x20)) {
          piVar23[8] = 1;
        }
      }
      FUN_00312c70(lVar18);
      FUN_0037be50(&piStack_1c0);
      return 1;
    }
  }
LAB_0037a978:
  FUN_00312c70(lVar18);
LAB_0037a980:
  FUN_0037be50(&piStack_1c0);
  return 0;
code_r0x0037a704:
  ppppppuVar22 = (undefined4 ******)0x0;
LAB_0037a708:
  if (ppppppuVar22 != (undefined4 ******)0x0) {
    uStack_b0 = (undefined4)uVar27;
    uStack_ac = (undefined4)(uVar27 >> 0x20);
    lVar18 = FUN_0037bce0(puStack_d0,ppppppuVar22,puStack_d8,puVar2,0,uVar27,ppuStack_dc);
    uVar27 = CONCAT44(uStack_ac,uStack_b0);
    if (lVar18 == 0) {
      FUN_0037be50(puStack_d0);
      bVar8 = false;
      goto LAB_0037a760;
    }
  }
  iVar20 = *(int *)(iVar35 + 0xc);
  uVar27 = (ulong)((int)uVar27 + 1);
  ppiVar10 = (int **)puStack_d0;
  if ((ulong)(long)*(int *)(iVar20 + 0x14) <= uVar27) goto LAB_0037a75c;
  goto LAB_0037a620;
}


// ==== FUN_0037ae38 @ 0037ae38 ====

void FUN_0037ae38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long unaff_s3;
  
  puVar15 = (undefined4 *)param_1;
  bVar1 = false;
  switch(puVar15[2]) {
  case 2:
    if (*(int *)((int)param_3 + 8) == 0) {
      puVar15[2] = 6;
      goto LAB_0037b0bc;
    }
    if (iGpffff8a24 == 2) {
      param_4 = FUN_0036d518();
    }
    *puVar15 = 0;
    if (iGpffff8a24 == 2) {
      if (param_4 == 1) {
        FUN_0036d568();
      }
      if (iGpffff8a24 == 2) {
        unaff_s3 = FUN_0036d518();
      }
    }
    puVar15[1] = 1;
    if ((iGpffff8a24 == 2) && (unaff_s3 == 1)) {
      FUN_0036d568(param_1);
    }
    puVar15[0xe] = 1;
    lVar9 = FUN_00379a88(param_1,*(undefined4 *)((int)param_3 + 8));
    if (lVar9 != 0) {
      puVar15[2] = 3;
      goto LAB_0037b0bc;
    }
    break;
  case 3:
    lVar9 = FUN_0031d1f0(param_1,0);
    if (0 < lVar9) {
      bVar1 = true;
      goto LAB_0037b0bc;
    }
    lVar9 = FUN_0031d1f0(puVar15 + 1,0);
    if (0 < lVar9) goto LAB_0037b0bc;
    uVar7 = FUN_003230f0(puVar15[5],*(undefined4 *)(puVar15[5] + 0x80),2);
    puVar15[3] = uVar7;
    lVar9 = FUN_0037a478(param_1,param_2);
    if (lVar9 != 0) {
      puVar15[2] = 4;
      goto switchD_0037ae98_caseD_4;
    }
    break;
  case 4:
switchD_0037ae98_caseD_4:
    lVar9 = FUN_0031d1f0(param_1,0);
    bVar1 = 0 < lVar9;
    if (bVar1) {
      puVar15[2] = 6;
    }
    lVar9 = FUN_0031d1f0(puVar15 + 1,0);
    if (lVar9 < 1) {
      FUN_0032a4b0(param_3,param_2);
      iVar5 = 0;
      for (puVar3 = (undefined4 *)puVar15[8]; puVar3 != puVar15 + 8; puVar3 = (undefined4 *)*puVar3)
      {
        if (*(int *)(*(int *)(puVar3[-0x11] + 0x54) + 0xc) != 0) {
          uVar13 = **(uint **)(iVar5 * 0x28 + *(int *)(puVar15[3] + 0x18) + 0x14);
          if ((*(uint *)param_2 & 2) != 0) {
            uVar10 = puVar15[0x11];
            iVar8 = 2;
            if (uVar10 < 0x20) {
              uVar11 = puVar15[0x10];
              iVar2 = puVar15[0x13];
              if (uVar13 == uVar11) {
                if (uVar13 != 0) {
                  do {
                    uVar11 = uVar11 >> 1;
                    iVar8 = iVar8 + -1;
                    if (uVar13 != uVar11) break;
                  } while (uVar13 != 0);
                  goto LAB_0037b070;
                }
                uVar10 = uVar10 - 2;
              }
              else {
LAB_0037b070:
                uVar10 = uVar10 - iVar8;
              }
              if (iVar2 == 0) {
                trap(7);
              }
              uVar13 = (uint)(((int)(uVar13 << (uVar10 & 0x1f)) / iVar2) * iVar2) >> (uVar10 & 0x1f)
              ;
            }
          }
          FUN_00323150(puVar3 + -0x11,puVar3[0xf],0,uVar13);
        }
        iVar5 = iVar5 + 1;
      }
      puVar15[2] = 5;
    }
    goto LAB_0037b0bc;
  }
  bVar1 = true;
LAB_0037b0bc:
  if (bVar1) {
    puVar3 = (undefined4 *)puVar15[8];
    puVar12 = (undefined4 *)0x0;
joined_r0x0037b0d4:
    puVar6 = puVar12;
    if (puVar3 != puVar15 + 8) {
      puVar14 = puVar3 + -0x11;
      puVar3 = (undefined4 *)*puVar3;
      do {
        puVar4 = (undefined4 *)puVar14[0x14];
        puVar12 = puVar14;
        if (((undefined4 *)puVar15[5] == puVar14) ||
           (lVar9 = FUN_00316400(*(undefined4 *)*puVar14,0x40c590), lVar9 == 0)) break;
        FUN_0037b8a8(puVar14,param_1);
        puVar14 = puVar4;
        puVar12 = puVar6;
      } while (puVar4 != (undefined4 *)0x0);
      goto joined_r0x0037b0d4;
    }
    while (puVar6 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar6[0x14];
      FUN_0037b8a8(puVar6,param_1);
      puVar6 = puVar3;
    }
    puVar3 = (undefined4 *)puVar15[6];
    while (puVar3 != puVar15 + 6) {
      puVar12 = puVar3 + -0x11;
      puVar3 = (undefined4 *)*puVar3;
      FUN_0037b8a8(puVar12,param_1);
    }
    puVar15[2] = 6;
  }
  return;
}


// ==== FUN_0037b1d0 @ 0037b1d0 ====

void FUN_0037b1d0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0037b318(param_1,param_1 + 0x68,param_1 + 0x70,param_2,param_3,param_4,param_5,param_6
                      );
  if (lVar2 != 0) {
    iVar1 = (int)lVar2;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
    *(undefined4 *)(iVar1 + 0x150) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
  }
  return;
}


// ==== FUN_0037b220 @ 0037b220 ====

undefined8 FUN_0037b220(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  uVar1 = FUN_00379658(param_1,iVar2 + 0x68,iVar2 + 0x70);
  if ((*(uint *)(iVar2 + 0x5c) & 1) == 0) {
    FUN_0037b470(param_1,iVar2 + 0x68,iVar2 + 0x148);
  }
  return uVar1;
}


// ==== FUN_0037b288 @ 0037b288 ====

undefined8 FUN_0037b288(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)param_1 + 8) == 5) {
    uVar1 = FUN_0037b988(param_1,param_2,0);
    uVar1 = FUN_003230f0(uVar1,*(undefined4 *)((int)uVar1 + 0x80),3);
  }
  return uVar1;
}


// ==== FUN_0037b2d0 @ 0037b2d0 ====

void FUN_0037b2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0037b988(param_1,param_2,*(undefined4 *)((int)param_3 + 4));
  FUN_003230c0(uVar1,*(undefined4 *)((int)uVar1 + 0x80),2,param_3);
  return;
}


// ==== FUN_0037b318 @ 0037b318 ====

undefined8
FUN_0037b318(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_0031d178(param_1,0);
  iVar2 = (int)param_1;
  if (lVar1 != 0) {
    lVar1 = FUN_0031d178(iVar2 + 4,0);
    if ((lVar1 != 0) && (lVar1 = FUN_0031d178(iVar2 + 0x3c,0), lVar1 != 0)) {
      param_2[1] = 0;
      *param_2 = 0;
      FUN_0032a488(param_3);
      *(int *)(iVar2 + 0x1c) = iVar2 + 0x18;
      *(int *)(iVar2 + 0x24) = iVar2 + 0x20;
      *(code **)(iVar2 + 0x28) = FUN_0037b518;
      *(undefined4 *)(iVar2 + 0x38) = 1;
      *(undefined4 *)(iVar2 + 0x34) = 0x3f800000;
      *(undefined4 *)(iVar2 + 8) = 6;
      *(undefined4 *)(iVar2 + 0x48) = param_4;
      *(undefined4 *)(iVar2 + 0x44) = 0x20;
      *(undefined4 *)(iVar2 + 0x4c) = param_5;
      *(undefined4 *)(iVar2 + 0x50) = param_6;
      *(undefined4 *)(iVar2 + 0x54) = param_7;
      *(undefined4 *)(iVar2 + 0x58) = param_8;
      *(int *)(iVar2 + 0x18) = iVar2 + 0x18;
      *(int *)(iVar2 + 0x20) = iVar2 + 0x20;
      *(int *)(iVar2 + 0x2c) = iVar2;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x40) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x5c) = 0;
      return param_1;
    }
  }
  return 0;
}


// ==== FUN_0037b450 @ 0037b450 ====

void FUN_0037b450(void)

{
  FUN_0037b608();
  return;
}


// ==== FUN_0037b470 @ 0037b470 ====

void FUN_0037b470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_00379528();
  puVar4 = (undefined4 *)param_3;
  *puVar4 = uVar3;
  uVar1 = *(uint *)((int)param_1 + 8);
  if ((uVar1 < 6) && (2 < uVar1)) {
    iVar2 = *(int *)((int)param_1 + 0x14);
    uVar3 = FUN_00323230(iVar2,*(undefined4 *)(iVar2 + 0x80),3);
  }
  else {
    uVar3 = 0;
  }
  puVar4[1] = uVar3;
  uVar3 = FUN_003793c0(param_1);
  puVar4[2] = uVar3;
  FUN_0037bf28(param_1,param_2,param_3);
  return;
}


// ==== FUN_0037b518 @ 0037b518 ====

void FUN_0037b518(int param_1,int *param_2)

{
  long lVar1;
  long unaff_s3;
  long unaff_s4;
  
  lVar1 = FUN_00323230(param_1,*(undefined4 *)(param_1 + 0x40),0);
  if (lVar1 == 1) {
    if (iGpffff8a24 == 2) {
      unaff_s3 = FUN_0036d518();
    }
    *param_2 = *param_2 + 1;
    if (iGpffff8a24 != 2) goto LAB_0037b5b8;
    if (unaff_s3 == 1) {
      FUN_0036d568();
    }
  }
  if (iGpffff8a24 == 2) {
    unaff_s4 = FUN_0036d518();
  }
LAB_0037b5b8:
  param_2[1] = param_2[1] + -1;
  if ((iGpffff8a24 == 2) && (unaff_s4 == 1)) {
    FUN_0036d568();
  }
  return;
}


// ==== FUN_0037b608 @ 0037b608 ====

void FUN_0037b608(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  puVar1 = *(undefined4 **)(iVar7 + 0x20);
  puVar5 = (undefined4 *)0x0;
  do {
    puVar3 = puVar5;
    if (puVar1 == (undefined4 *)(iVar7 + 0x20)) {
      while (puVar3 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar3[0x14];
        FUN_0037b8a8(puVar3,param_1);
        puVar3 = puVar1;
      }
      puVar1 = *(undefined4 **)(iVar7 + 0x18);
      while (puVar1 != (undefined4 *)(iVar7 + 0x18)) {
        puVar5 = puVar1 + -0x11;
        puVar1 = (undefined4 *)*puVar1;
        FUN_0037b8a8(puVar5,param_1);
      }
      return;
    }
    puVar6 = puVar1 + -0x11;
    puVar1 = (undefined4 *)*puVar1;
    do {
      puVar2 = (undefined4 *)puVar6[0x14];
      puVar5 = puVar6;
      if ((*(undefined4 **)(iVar7 + 0x14) == puVar6) ||
         (lVar4 = FUN_00316400(*(undefined4 *)*puVar6,0x40c590), lVar4 == 0)) break;
      FUN_0037b8a8(puVar6,param_1);
      puVar6 = puVar2;
      puVar5 = puVar3;
    } while (puVar2 != (undefined4 *)0x0);
  } while( true );
}


// ==== FUN_0037b740 @ 0037b740 ====

void FUN_0037b740(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar1 = *(int *)(*(int *)(param_3 + 0xc) + 4);
  iVar9 = (int)param_1;
  if ((iVar1 == 0) && (*(int *)(iVar9 + 0x38) == 1)) {
    uVar2 = *(undefined4 *)(iVar9 + 0x38);
  }
  else {
    puVar3 = *(undefined4 **)(iVar9 + 0x20);
    puVar5 = (undefined4 *)0x0;
joined_r0x0037b7a4:
    puVar8 = puVar5;
    if (puVar3 != (undefined4 *)(iVar9 + 0x20)) {
      puVar7 = puVar3 + -0x11;
      puVar3 = (undefined4 *)*puVar3;
      do {
        puVar4 = (undefined4 *)puVar7[0x14];
        puVar5 = puVar7;
        if ((*(undefined4 **)(iVar9 + 0x14) == puVar7) ||
           (lVar6 = FUN_00316400(*(undefined4 *)*puVar7,0x40c590), lVar6 == 0)) break;
        FUN_0037b8e8(puVar7,iVar1);
        puVar7 = puVar4;
        puVar5 = puVar8;
      } while (puVar4 != (undefined4 *)0x0);
      goto joined_r0x0037b7a4;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 0xc) + 4);
    do {
      puVar3 = (undefined4 *)puVar8[0x14];
      FUN_0037b8e8(puVar8,uVar2);
      puVar8 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    uVar2 = *(undefined4 *)(iVar9 + 0x38);
  }
  FUN_0037ba00(param_1,param_2,uVar2);
  *(undefined4 *)(*(int *)(param_3 + 0xc) + 4) = 0;
  FUN_00323090(*(int *)(iVar9 + 0x14),*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x80),0,
               *(undefined4 *)(param_3 + 0xc));
  return;
}


// ==== FUN_0037b8a8 @ 0037b8a8 ====

void FUN_0037b8a8(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  **(undefined4 **)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)(*(int *)(iVar1 + 0x44) + 4) = *(undefined4 *)(iVar1 + 0x48);
  FUN_003110b0(param_1,*(undefined4 *)(param_2 + 0x54),*(undefined4 *)(param_2 + 0x58));
  return;
}


// ==== FUN_0037b8e8 @ 0037b8e8 ====

void FUN_0037b8e8(int param_1,undefined8 param_2)

{
  FUN_00323188(param_1,*(undefined4 *)(param_1 + 0x40),2,param_2);
  return;
}


// ==== FUN_0037b910 @ 0037b910 ====

void FUN_0037b910(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (*(int *)(param_2 + 4) != 0) {
    puVar2 = (undefined4 *)(param_3 + 0x18);
    do {
      uVar4 = *puVar2;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
      FUN_003231d0(uVar4,puVar1 + -0x11,puVar1[0xf],1);
      puVar1 = (undefined4 *)*puVar1;
    } while (uVar3 < *(uint *)(param_2 + 4));
  }
  return;
}


// ==== FUN_0037b988 @ 0037b988 ====

int * FUN_0037b988(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = *(uint *)(param_2 + 4);
  if (param_3 < uVar4 >> 1) {
    piVar5 = *(int **)(param_1 + 0x20);
    uVar4 = 1;
    if (param_3 != 0) {
      do {
        piVar5 = (int *)*piVar5;
        bVar1 = uVar4 != param_3;
        uVar4 = uVar4 + 1;
      } while (bVar1);
      return piVar5 + -0x11;
    }
  }
  else {
    piVar5 = *(int **)(param_1 + 0x24);
    uVar3 = uVar4 - 2;
    uVar4 = uVar4 - 1;
    while (uVar2 = uVar3, uVar4 != param_3) {
      piVar5 = (int *)piVar5[1];
      uVar3 = uVar2 - 1;
      uVar4 = uVar2;
    }
  }
  return piVar5 + -0x11;
}


// ==== FUN_0037ba00 @ 0037ba00 ====

void FUN_0037ba00(int param_1,int param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_3 == 2) {
    if (iGpffff8a24 == 2) {
      param_4 = FUN_0036d518();
      uVar5 = *(undefined4 *)(param_2 + 4);
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 4);
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    if ((iGpffff8a24 == 2) && (param_4 == 1)) {
      FUN_0036d568();
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  puVar6 = (undefined4 *)0x0;
  while (puVar7 = puVar6, puVar1 != (undefined4 *)(param_1 + 0x20)) {
    puVar6 = puVar1 + -0x11;
    puVar1 = (undefined4 *)*puVar1;
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    while( true ) {
      puVar3 = (undefined4 *)puVar6[0x14];
      if (((puVar2 == puVar6) || (lVar4 = FUN_00316400(*(undefined4 *)*puVar6,0x40c590), lVar4 == 0)
          ) || (FUN_0037bf00(puVar6,param_3), puVar6 = puVar7, puVar3 == (undefined4 *)0x0)) break;
      puVar2 = *(undefined4 **)(param_1 + 0x14);
      puVar6 = puVar3;
    }
  }
  do {
    puVar1 = (undefined4 *)puVar7[0x14];
    FUN_0037bf00(puVar7,param_3);
    puVar7 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  return;
}


// ==== FUN_0037bb58 @ 0037bb58 ====

void FUN_0037bb58(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x14);
  FUN_00323188(*(int *)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x80),1,
               *(undefined4 *)(param_2 + 0x14));
  return;
}


// ==== FUN_0037bb90 @ 0037bb90 ====

void FUN_0037bb90(int param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x10);
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != (int *)(param_1 + 0x20)) {
    puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x18) + 0x14);
    puVar1 = (uint *)*puVar3;
    while( true ) {
      puVar3 = puVar3 + 10;
      if ((int)*puVar1 < 0) {
        fVar4 = *(float *)(param_1 + 0x34);
      }
      else {
        fVar4 = *(float *)(param_1 + 0x34);
      }
      FUN_00323150(piVar2 + -0x11,piVar2[0xf],0,(int)((float)*puVar1 * fVar4));
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)(param_1 + 0x20)) break;
      puVar1 = (uint *)*puVar3;
    }
  }
  return;
}


// ==== FUN_0037bce0 @ 0037bce0 ====

long FUN_0037bce0(int *param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  lVar3 = FUN_00312c48(0x54,0x3080f);
  puVar6 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    iVar1 = *param_1;
    puVar6[0x14] = param_1;
    puVar6[0x13] = iVar1;
    *(undefined4 **)(*param_1 + 4) = puVar6 + 0x13;
    *param_1 = (int)(puVar6 + 0x13);
    if (param_4 != 0) {
      puVar7 = (undefined8 *)param_4;
      uVar4 = puVar7[1];
      uVar5 = puVar7[2];
      uVar2 = *(undefined4 *)(puVar7 + 3);
      *(undefined8 *)(puVar6 + 3) = *puVar7;
      *(undefined8 *)(puVar6 + 5) = uVar4;
      *(undefined8 *)(puVar6 + 7) = uVar5;
      puVar6[9] = uVar2;
    }
    if (param_5 == 0) {
      puVar6[1] = param_2;
    }
    else {
      puVar7 = (undefined8 *)param_5;
      uVar4 = puVar7[1];
      uVar5 = puVar7[2];
      uVar2 = *(undefined4 *)(puVar7 + 3);
      *(undefined8 *)(puVar6 + 10) = *puVar7;
      *(undefined8 *)(puVar6 + 0xc) = uVar4;
      *(undefined8 *)(puVar6 + 0xe) = uVar5;
      puVar6[0x10] = uVar2;
      puVar6[1] = param_2;
    }
    puVar6[2] = param_3;
    puVar6[0x12] = param_6;
    puVar6[0x11] = param_7;
    *puVar6 = 0;
  }
  return lVar3;
}


// ==== FUN_0037be10 @ 0037be10 ====

void FUN_0037be10(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    **(int **)(param_1 + 0x50) = *(int *)(param_1 + 0x4c);
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = *(undefined4 *)(param_1 + 0x50);
  }
  FUN_00312c70();
  return;
}


// ==== FUN_0037be50 @ 0037be50 ====

void FUN_0037be50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    if (*piVar1 != 0) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    FUN_00312c70();
    piVar1 = (int *)*param_1;
  }
  return;
}


// ==== FUN_0037beb8 @ 0037beb8 ====

undefined4 * FUN_0037beb8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar1 == param_1) {
      return (undefined4 *)0x0;
    }
    if (puVar1[-0x11] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + -0x13;
}


// ==== FUN_0037bf00 @ 0037bf00 ====

void FUN_0037bf00(int param_1,undefined8 param_2)

{
  FUN_00323150(param_1,*(undefined4 *)(param_1 + 0x40),0,param_2);
  return;
}


// ==== FUN_0037bf28 @ 0037bf28 ====

void FUN_0037bf28(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x34);
  lVar4 = FUN_0037b288();
  if (lVar4 != 0) {
    iVar3 = FUN_003230f0(*(int *)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x80),2
                        );
    piVar8 = (int *)lVar4;
    uVar6 = *(undefined8 *)(piVar8 + 2);
    *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)piVar8;
    *(undefined8 *)(param_3 + 0x1c) = uVar6;
    *(undefined4 *)(param_3 + 0xc) = **(undefined4 **)(*(int *)(iVar3 + 0x18) + 0x14);
    uVar1 = *(undefined4 *)(*piVar8 * 0x20 + *(int *)(iVar3 + 0x10) + 4);
    uVar5 = strlen(uVar1);
    uVar7 = 0x7f;
    if (uVar5 < 0x81) {
      uVar7 = uVar5;
    }
    FUN_0035d1a0(param_3 + 0x24,uVar1,uVar7);
    *(undefined1 *)(param_3 + 0x24 + (int)uVar7) = 0;
    puVar2 = *(undefined8 **)(*piVar8 * 0x20 + *(int *)(iVar3 + 0x10));
    uVar6 = puVar2[1];
    *(undefined8 *)(param_3 + 0xa4) = *puVar2;
    *(undefined8 *)(param_3 + 0xac) = uVar6;
  }
  return;
}


// ==== FUN_0037c048 @ 0037c048 ====

void FUN_0037c048(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(0x40ea20,2);
      FUN_00100230(0x40ea18,2);
    }
    else {
      FUN_00100228(0x40ea18);
      FUN_00100258(0x40ea20);
      DAT_0048ec70 = 0x3fc90fdb;
      DAT_0048ec74 = 0xbe22f983;
      DAT_0048ec78 = 0x4b400000;
      DAT_0048ec7c = uStack_44;
      DAT_0048ec80 = 0xbe22f983;
      DAT_0048ec84 = 0x3f000000;
      DAT_0048ec88 = 0x3e800000;
      DAT_0048ec8c = uStack_34;
      DAT_0048ec90 = 0xc2992661;
      DAT_0048ec94 = 0xc2255de0;
      DAT_0048ec98 = 0x42a33457;
      DAT_0048ec9c = uStack_24;
      DAT_0048eca0 = 0x421ed7b7;
      DAT_0048eca4 = 0x40c90fda;
      DAT_0048eca8 = 0;
      DAT_0048ecac = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037c190 @ 0037c190 ====

undefined8 FUN_0037c190(undefined8 param_1,int param_2,int param_3)

{
  ((uint *)param_1)[1] = 0x40;
  *(uint *)param_1 = param_2 * 0x100 + param_3 * 0xb0 + 0x3fU & 0xffffffc0;
  return param_1;
}


// ==== FUN_0037c1f0 @ 0037c1f0 ====

undefined4 FUN_0037c1f0(undefined4 *param_1)

{
  return *param_1;
}


// ==== FUN_0037c1f8 @ 0037c1f8 ====

void FUN_0037c1f8(void)

{
  FUN_0037c048(1,0xffff);
  return;
}


// ==== FUN_0037c218 @ 0037c218 ====

void FUN_0037c218(void)

{
  FUN_0037c048(0,0xffff);
  return;
}


// ==== FUN_0037c238 @ 0037c238 ====

int * FUN_0037c238(int *param_1,uint param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uStack_4;
  
  uVar7 = 0xa6;
  if (param_2 < 0xa6) {
    uVar7 = param_2;
  }
  param_1 = (int *)*param_1;
  iVar9 = (int)param_3;
  *param_1 = (int)(param_1 + 0xec);
  param_1[0x53] = (int)(param_1 + 0x44);
  param_1[0x4f] = (int)(param_1 + 0x44);
  param_1[0x7f] = (int)(param_1 + 0x70);
  param_1[0x7b] = (int)(param_1 + 0x70);
  param_1[2] = (int)&DAT_70001680;
  param_1[0xab] = (int)(param_1 + 0x9c);
  param_1[0x12] = uVar7;
  param_1[6] = uVar7;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xa7] = (int)(param_1 + 0x9c);
  if (uVar7 == 0) {
    param_1[0x27] = (int)(param_1 + 0x18);
    param_1[0x23] = (int)(param_1 + 0x18);
  }
  else {
    piVar5 = param_1 + 0x18;
    piVar4 = (int *)*param_1;
    puVar8 = &DAT_70001680;
    uVar6 = 0;
    piVar2 = piVar5;
    piVar3 = piVar5;
    if (uVar7 != 1) {
      do {
        piVar3 = piVar4;
        piVar3[0xf] = (int)piVar2;
        uVar6 = uVar6 + 1;
        piVar3[7] = (int)puVar8;
        piVar3[0x23] = 0;
        puVar8 = puVar8 + 0x40;
        piVar3[0x13] = (int)param_1;
        piVar4 = piVar3 + 0x2c;
        piVar3[0xb] = (int)piVar4;
        piVar2 = piVar3;
      } while (uVar6 < uVar7 - 1);
    }
    piVar4[0xf] = (int)piVar3;
    piVar4[0xb] = (int)piVar5;
    piVar4[7] = (int)puVar8;
    iVar1 = *param_1;
    piVar4[0x23] = 0;
    param_1[0x23] = iVar1;
    piVar4[0x13] = (int)param_1;
    param_1[0x27] = uVar7 * 0xb0 + *param_1 + -0xb0;
  }
  piVar4 = param_1 + 200;
  param_1[1] = (int)(param_1 + 0xec + uVar7 * 0x2c);
  param_1[0xd0] = (int)(param_1 + 0xd0);
  param_1[0xd1] = (int)(param_1 + 0xd0);
  param_1[0x13] = iVar9;
  param_1[0x14] = 0;
  if (param_3 == 0) {
    param_1[200] = (int)piVar4;
    param_1[0xc9] = (int)piVar4;
  }
  else {
    param_1[200] = param_1[1];
    uVar7 = 0;
    param_1[0xc9] = iVar9 * 0x20 + param_1[1] + -0x20;
    piVar2 = (int *)param_1[1];
    piVar3 = piVar4;
    piVar5 = piVar4;
    if (iVar9 != 1) {
      do {
        piVar5 = piVar2;
        piVar5[1] = (int)piVar3;
        uVar7 = uVar7 + 1;
        piVar2 = piVar5 + 8;
        *piVar5 = (int)piVar2;
        piVar3 = piVar5;
      } while (uVar7 < iVar9 - 1U);
    }
    *piVar2 = (int)piVar4;
    piVar2[1] = (int)piVar5;
  }
  auVar10._12_4_ = uStack_4;
  auVar10._0_12_ = ZEXT812(0xc416000000000000);
  auVar12 = _lqc2(auVar10);
  auVar11 = _qmtc2(0x3c888889);
  auVar10 = _vmulbc(auVar12,auVar11);
  auVar10 = _vmulbc(auVar10,auVar11);
  param_1[0xe1] = 0x42700000;
  param_1[0xe2] = 0x40000000;
  param_1[0xe3] = 0x1e;
  param_1[0xe4] = 0x3ccccccd;
  param_1[0xe5] = 0x1e3ce508;
  param_1[0xe6] = 0x32;
  auVar10 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0xdc) = auVar10;
  auVar10 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0xd8) = auVar10;
  param_1[0xe0] = 0x3c888889;
  param_1[0xe8] = 0;
  param_1[5] = 0;
  return param_1;
}


// ==== FUN_0037c4e0 @ 0037c4e0 ====

undefined4 FUN_0037c4e0(undefined8 param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined1 (*pauVar6) [16];
  byte bVar7;
  int iVar8;
  undefined1 in_vf0 [16];
  uint uVar5;
  
  iVar8 = (int)param_1;
  if (*(int *)(iVar8 + 0x24) == 0) {
    return 0;
  }
  FUN_0037e800(param_1);
  FUN_0037f198(param_1);
  FUN_003680a0(*(undefined4 *)(iVar8 + 0x10),
               *(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 0x40) * *(int *)(iVar8 + 0x28) + -1);
  bVar7 = *(int *)(iVar8 + 0x30) != 0;
  if (*(int *)(iVar8 + 0x38) != 0) {
    bVar7 = bVar7 | 2;
  }
  REG_DMAC_0_VIF0_TADR = 0x3bbc20;
  REG_DMAC_0_VIF0_QWC = 0;
  REG_DMAC_0_VIF0_CHCR = 0x145;
  iVar3 = 0x53;
  pauVar6 = (undefined1 (*) [16])&DAT_70001680;
  while (bVar1 = 0 < iVar3, iVar3 = iVar3 + -1, bVar1) {
    auVar2 = _sqc2(in_vf0);
    *pauVar6 = auVar2;
    auVar2 = _sqc2(in_vf0);
    pauVar6[1] = auVar2;
    auVar2 = _sqc2(in_vf0);
    pauVar6[2] = auVar2;
    auVar2 = _sqc2(in_vf0);
    pauVar6[3] = auVar2;
    auVar2 = _sqc2(in_vf0);
    pauVar6[4] = auVar2;
    auVar2 = _sqc2(in_vf0);
    pauVar6[5] = auVar2;
    auVar2 = _sqc2(in_vf0);
    pauVar6[6] = auVar2;
    auVar2 = _sqc2(in_vf0);
    pauVar6[7] = auVar2;
    pauVar6 = pauVar6 + 8;
  }
  uVar4 = REG_DMAC_0_VIF0_CHCR;
  do {
    uVar5 = uVar4 & 0x100;
    uVar4 = REG_DMAC_0_VIF0_CHCR;
  } while (uVar5 != 0);
  if (bVar7 == 2) {
    FUN_0037d9c8(param_1);
  }
  else if (bVar7 < 3) {
    if (bVar7 == 1) {
      FUN_0037d2a0(param_1);
    }
  }
  else if (bVar7 == 3) {
    FUN_0037e078(param_1);
  }
  FUN_00381a28(param_1);
  if (*(uint *)(iVar8 + 0x14) == 0) {
    return 1;
  }
  if (*(int *)(iVar8 + 0x30) != 0) {
    if ((*(uint *)(iVar8 + 0x14) & 2) == 0) {
      iVar3 = *(int *)(iVar8 + 0x38);
      goto LAB_0037c650;
    }
    FUN_0037ec50(param_1);
  }
  iVar3 = *(int *)(iVar8 + 0x38);
LAB_0037c650:
  if ((iVar3 != 0) && ((*(uint *)(iVar8 + 0x14) & 1) != 0)) {
    FUN_0037f278(param_1);
  }
  return 1;
}


// ==== FUN_0037c688 @ 0037c688 ====

/* WARNING: Removing unreachable block (ram,0x0037cb5c) */
/* WARNING: Removing unreachable block (ram,0x0037ca90) */
/* WARNING: Removing unreachable block (ram,0x0037c9c0) */
/* WARNING: Removing unreachable block (ram,0x0037c808) */

undefined1 (*) [16]
FUN_0037c688(int param_1,undefined1 (*param_2) [16],undefined4 param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
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
  float fStack_9c;
  float fStack_88;
  float fStack_7c;
  float fStack_68;
  float fStack_5c;
  float fStack_48;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return (undefined1 (*) [16])0x0;
  }
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x8c);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  *(undefined4 *)(*(int *)(pauVar1[2] + 0xc) + 0x3c) = *(undefined4 *)(pauVar1[3] + 0xc);
  *(undefined4 *)(*(int *)(pauVar1[3] + 0xc) + 0x2c) = *(undefined4 *)(pauVar1[2] + 0xc);
  if (param_4 == 1) {
    iVar6 = param_1 + 0x110;
    *(undefined4 *)(pauVar1[10] + 0xc) = 0;
    *(int *)(pauVar1[2] + 0xc) = iVar6;
    iVar3 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(pauVar1[3] + 0xc) = *(undefined4 *)(param_1 + 0x14c);
    *(int *)(param_1 + 0x1c) = iVar3 + 1;
LAB_0037c75c:
    iVar3 = *(int *)(iVar6 + 0x3c);
  }
  else {
    iVar6 = param_1 + 0x270;
    if (param_4 != 2) {
      *(undefined4 *)(pauVar1[10] + 0xc) = 0;
      *(int *)(pauVar1[2] + 0xc) = iVar6;
      iVar3 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(pauVar1[3] + 0xc) = *(undefined4 *)(param_1 + 0x2ac);
      *(int *)(param_1 + 0x24) = iVar3 + 1;
      goto LAB_0037c75c;
    }
    iVar6 = param_1 + 0x1c0;
    uVar7 = *(undefined4 *)(param_1 + 0x38c);
    *(int *)(pauVar1[2] + 0xc) = iVar6;
    *(undefined4 *)(pauVar1[10] + 0xc) = uVar7;
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(pauVar1[3] + 0xc) = *(undefined4 *)(param_1 + 0x1fc);
    iVar3 = *(int *)(param_1 + 0x1fc);
    *(int *)(param_1 + 0x20) = iVar2 + 1;
  }
  *(undefined1 (**) [16])(iVar3 + 0x2c) = pauVar1;
  *(undefined1 (**) [16])(iVar6 + 0x3c) = pauVar1;
  auVar10 = _lqc2(*param_2);
  _lqc2(pauVar1[4]);
  auVar10 = _vmove(auVar10);
  _lqc2(pauVar1[5]);
  auVar10 = _sqc2(auVar10);
  pauVar1[4] = auVar10;
  _lqc2(pauVar1[6]);
  _lqc2(pauVar1[1]);
  auVar10 = _lqc2(param_2[1]);
  auVar10 = _vmove(auVar10);
  auVar10 = _sqc2(auVar10);
  pauVar1[5] = auVar10;
  *(int *)(pauVar1[8] + 0xc) = (int)param_4;
  *(undefined4 *)(pauVar1[5] + 0xc) = param_3;
  auVar10 = _lqc2(param_2[2]);
  auVar10 = _vmove(auVar10);
  auVar10 = _sqc2(auVar10);
  pauVar1[6] = auVar10;
  auVar10 = _lqc2(param_2[3]);
  auVar10 = _vmove(auVar10);
  auVar10 = _sqc2(auVar10);
  pauVar1[1] = auVar10;
  auVar11 = _lqc2(param_2[1]);
  auVar10 = _lqc2(*param_2);
  auVar10 = _vaddbc(auVar10,auVar11);
  auVar9 = _lqc2(param_2[2]);
  auVar10 = _vaddbc(auVar10,auVar9);
  auVar10 = _qmfc2(auVar10._0_4_);
  if (0.0 < auVar10._0_4_) {
    fVar8 = SQRT(auVar10._0_4_ + 1.0);
    auVar9 = _lqc2(param_2[2]);
    auVar10 = _lqc2(param_2[1]);
    _lqc2(*pauVar1);
    auVar10 = _vsubbc(auVar10,auVar9);
    auVar10 = _vaddbc(in_vf0,auVar10);
    auVar10 = _sqc2(auVar10);
    *pauVar1 = auVar10;
    auVar9 = _lqc2(*param_2);
    auVar10 = _lqc2(param_2[2]);
    auVar10 = _vsubbc(auVar10,auVar9);
    auVar10 = _vaddbc(in_vf0,auVar10);
    auVar13 = _qmtc2(0);
    auVar10 = _sqc2(auVar10);
    *pauVar1 = auVar10;
    auVar11 = _qmtc2(0.5 / fVar8);
    auVar9 = _lqc2(param_2[1]);
    auVar12 = _qmtc2(fVar8 * 0.5);
    auVar10 = _lqc2(*param_2);
    auVar10 = _vsubbc(auVar10,auVar9);
    auVar10 = _vaddbc(in_vf0,auVar10);
    _vmove(auVar10);
    auVar9 = _vmulbc(in_vf0,auVar13);
    auVar10 = _sqc2(auVar10);
    *pauVar1 = auVar10;
    auVar10 = _vmove(auVar9);
    auVar10 = _vmulbc(auVar10,auVar11);
    auVar10 = _sqc2(auVar10);
    *pauVar1 = auVar10;
    auVar10 = _vmulbc(in_vf0,auVar12);
    auVar10 = _sqc2(auVar10);
    *pauVar1 = auVar10;
  }
  else {
    auVar10 = _sqc2(auVar11);
    auVar9 = _lqc2(*param_2);
    auVar9 = _qmfc2(auVar9._0_4_);
    fStack_9c = auVar10._4_4_;
    if (fStack_9c <= auVar9._0_4_) {
      auVar10 = _lqc2(param_2[2]);
      auVar10 = _sqc2(auVar10);
      auVar9 = _lqc2(*param_2);
      auVar9 = _qmfc2(auVar9._0_4_);
      fStack_68 = auVar10._8_4_;
      uVar5 = (uint)(auVar9._0_4_ < fStack_68) << 1;
    }
    else {
      auVar10 = _lqc2(param_2[2]);
      auVar10 = _sqc2(auVar10);
      fStack_88 = auVar10._8_4_;
      auVar10 = _lqc2(param_2[1]);
      auVar10 = _sqc2(auVar10);
      fStack_7c = auVar10._4_4_;
      uVar5 = 1;
      if (fStack_7c < fStack_88) {
        uVar5 = 2;
      }
    }
    if (uVar5 == 1) {
      auVar10 = _lqc2(*param_2);
      auVar9 = _lqc2(param_2[2]);
      auVar9 = _vaddbc(auVar9,auVar10);
      auVar10 = _lqc2(param_2[1]);
      auVar10 = _vsubbc(auVar10,auVar9);
      auVar9 = _qmtc2(0x3f800000);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _sqc2(auVar10);
      fStack_5c = auVar10._4_4_;
      _lqc2(*pauVar1);
      fVar8 = 0.5 / SQRT(fStack_5c);
      auVar10 = _qmtc2(SQRT(fStack_5c) * 0.5);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar12 = _qmtc2(fVar8);
      auVar11 = _qmtc2(fVar8);
      auVar9 = _lqc2(*param_2);
      auVar10 = _lqc2(param_2[2]);
      auVar10 = _vsubbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar12);
      auVar10 = _vmulbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar9 = _lqc2(param_2[2]);
      auVar10 = _lqc2(param_2[1]);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar11);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar9 = _lqc2(*param_2);
      auVar10 = _lqc2(param_2[1]);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar12);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
    }
    else if (uVar5 < 2) {
      if (uVar5 != 0) {
        pauVar4 = *(undefined1 (**) [16])(pauVar1[5] + 0xc);
        goto LAB_0037cbe4;
      }
      auVar10 = _lqc2(param_2[2]);
      auVar9 = _lqc2(param_2[1]);
      auVar11 = _vaddbc(auVar9,auVar10);
      auVar10 = _lqc2(*param_2);
      auVar9 = _qmtc2(0x3f800000);
      auVar10 = _vsubbc(auVar10,auVar11);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _qmfc2(auVar10._0_4_);
      _lqc2(*pauVar1);
      fVar8 = 0.5 / SQRT(auVar10._0_4_);
      auVar10 = _qmtc2(SQRT(auVar10._0_4_) * 0.5);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar12 = _qmtc2(fVar8);
      auVar11 = _qmtc2(fVar8);
      auVar9 = _lqc2(param_2[2]);
      auVar10 = _lqc2(param_2[1]);
      auVar10 = _vsubbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar12);
      auVar10 = _vmulbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar9 = _lqc2(param_2[1]);
      auVar10 = _lqc2(*param_2);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar11);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar9 = _lqc2(param_2[2]);
      auVar10 = _lqc2(*param_2);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar12);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
    }
    else {
      if (uVar5 != 2) {
        pauVar4 = *(undefined1 (**) [16])(pauVar1[5] + 0xc);
        goto LAB_0037cbe4;
      }
      auVar10 = _lqc2(param_2[1]);
      auVar9 = _lqc2(*param_2);
      auVar9 = _vaddbc(auVar9,auVar10);
      auVar10 = _lqc2(param_2[2]);
      auVar10 = _vsubbc(auVar10,auVar9);
      auVar9 = _qmtc2(0x3f800000);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _sqc2(auVar10);
      fStack_48 = auVar10._8_4_;
      _lqc2(*pauVar1);
      fVar8 = 0.5 / SQRT(fStack_48);
      auVar10 = _qmtc2(SQRT(fStack_48) * 0.5);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar12 = _qmtc2(fVar8);
      auVar11 = _qmtc2(fVar8);
      auVar9 = _lqc2(param_2[1]);
      auVar10 = _lqc2(*param_2);
      auVar10 = _vsubbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar12);
      auVar10 = _vmulbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar9 = _lqc2(*param_2);
      auVar10 = _lqc2(param_2[2]);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar11);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
      auVar9 = _lqc2(param_2[1]);
      auVar10 = _lqc2(param_2[2]);
      auVar10 = _vaddbc(auVar10,auVar9);
      auVar10 = _vmulbc(auVar10,auVar12);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar10 = _sqc2(auVar10);
      *pauVar1 = auVar10;
    }
  }
  pauVar4 = *(undefined1 (**) [16])(pauVar1[5] + 0xc);
LAB_0037cbe4:
  if (pauVar4 == (undefined1 (*) [16])0x0) {
    iVar3 = *(int *)(pauVar1[4] + 0xc);
  }
  else {
    auVar11 = _lqc2(*pauVar4);
    _lqc2(pauVar1[7]);
    _lqc2(pauVar1[8]);
    auVar18 = _lqc2(pauVar1[4]);
    auVar16 = _lqc2(pauVar1[5]);
    auVar15 = _lqc2(pauVar1[6]);
    auVar10 = _vmulbc(auVar18,auVar11);
    auVar9 = _vmulbc(auVar16,auVar11);
    auVar11 = _vmulbc(auVar15,auVar11);
    auVar12 = _vaddbc(in_vf0,auVar18);
    auVar13 = _vaddbc(in_vf0,auVar16);
    auVar14 = _vaddbc(in_vf0,auVar15);
    _vmulabc(auVar10,auVar18);
    _vmaddabc(auVar9,auVar16);
    auVar17 = _vmaddbc(auVar11,auVar15);
    _vmulabc(auVar10,auVar18);
    _vmaddabc(auVar9,auVar16);
    _vmaddbc(auVar11,auVar15);
    _vmulabc(auVar12,auVar10);
    _vmaddabc(auVar13,auVar9);
    auVar9 = _vmaddbc(auVar14,auVar11);
    uVar7 = *(undefined4 *)pauVar4[1];
    auVar10 = _sqc2(auVar17);
    pauVar1[7] = auVar10;
    auVar10 = _sqc2(auVar9);
    pauVar1[8] = auVar10;
    *(undefined4 *)(pauVar1[7] + 0xc) = uVar7;
    iVar3 = *(int *)(pauVar1[4] + 0xc);
  }
  _lqc2(pauVar1[9]);
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x370));
  auVar10 = _vmove(auVar10);
  _lqc2(pauVar1[10]);
  _lqc2(pauVar1[2]);
  auVar12 = _vsub(in_vf0,in_vf0);
  _lqc2(pauVar1[3]);
  auVar11 = _vsub(in_vf0,in_vf0);
  auVar9 = _vsub(in_vf0,in_vf0);
  auVar10 = _sqc2(auVar10);
  pauVar1[9] = auVar10;
  auVar10 = _sqc2(auVar12);
  pauVar1[10] = auVar10;
  auVar10 = _sqc2(auVar11);
  pauVar1[2] = auVar10;
  auVar10 = _sqc2(auVar9);
  pauVar1[3] = auVar10;
  return pauVar1;
}


// ==== FUN_0037cca8 @ 0037cca8 ====

void FUN_0037cca8(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9240,2);
      FUN_00100230(&gp0xffff9238,2);
    }
    else {
      FUN_00100228(&gp0xffff9238);
      FUN_00100258(&gp0xffff9240);
      DAT_0048ecb0 = 0x3fc90fdb;
      DAT_0048ecb4 = 0xbe22f983;
      DAT_0048ecb8 = 0x4b400000;
      DAT_0048ecbc = uStack_44;
      DAT_0048ecc0 = 0xbe22f983;
      DAT_0048ecc4 = 0x3f000000;
      DAT_0048ecc8 = 0x3e800000;
      DAT_0048eccc = uStack_34;
      DAT_0048ecd0 = 0xc2992661;
      DAT_0048ecd4 = 0xc2255de0;
      DAT_0048ecd8 = 0x42a33457;
      DAT_0048ecdc = uStack_24;
      DAT_0048ece0 = 0x421ed7b7;
      DAT_0048ece4 = 0x40c90fda;
      DAT_0048ece8 = 0;
      DAT_0048ecec = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037cdf0 @ 0037cdf0 ====

undefined8 FUN_0037cdf0(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0xa6;
  if (param_2 < 0xa6) {
    uVar1 = param_2;
  }
  ((int *)param_1)[1] = 0x10;
  *(int *)param_1 = uVar1 * 0xb0 + 0x3b0 + param_3 * 0x20;
  return param_1;
}


// ==== FUN_0037ce60 @ 0037ce60 ====

undefined4 FUN_0037ce60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = 0x100;
  *(int *)(param_1 + 0xc) = param_3 * 0x100 + param_2;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined4 *)(param_1 + 0x28) = 0xb0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 1;
}


// ==== FUN_0037cec8 @ 0037cec8 ====

void FUN_0037cec8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x8c);
  *(undefined4 *)(*(int *)(param_2 + 0x2c) + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = uVar2 & 7;
  *(undefined4 *)(*(int *)(param_2 + 0x3c) + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(int *)(param_2 + 0x2c) = param_1 + 0x60;
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x9c);
  *(int *)(*(int *)(param_1 + 0x9c) + 0x2c) = param_2;
  *(int *)(param_1 + 0x9c) = param_2;
  if (uVar2 == 1) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  else if (uVar2 == 2) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x8c) = 0;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  return;
}


// ==== FUN_0037cf60 @ 0037cf60 ====

void FUN_0037cf60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x38c);
  *(undefined4 *)(*(int *)(param_2 + 0x2c) + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(uint *)(param_2 + 0x8c);
  *(int *)(param_2 + 0xac) = iVar1 + -1;
  *(undefined4 *)(*(int *)(param_2 + 0x3c) + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(int *)(param_2 + 0x2c) = param_1 + 0x270;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x2ac);
  *(uint *)(param_2 + 0x8c) = uVar2 & 8 | 4;
  *(int *)(param_1 + 0x24) = iVar3 + 1;
  *(int *)(*(int *)(param_1 + 0x2ac) + 0x2c) = param_2;
  *(int *)(param_1 + 0x2ac) = param_2;
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}


// ==== FUN_0037cfd0 @ 0037cfd0 ====

void FUN_0037cfd0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38c);
  *(undefined4 *)(*(int *)(param_2 + 0x2c) + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0xac) = uVar1;
  uVar2 = *(uint *)(param_2 + 0x8c);
  *(undefined4 *)(*(int *)(param_2 + 0x3c) + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(int *)(param_2 + 0x2c) = param_1 + 0x1c0;
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x1fc);
  *(uint *)(param_2 + 0x8c) = uVar2 & 8 | 2;
  *(int *)(param_1 + 0x20) = iVar4 + 1;
  *(int *)(*(int *)(param_1 + 0x1fc) + 0x2c) = param_2;
  *(int *)(param_1 + 0x1fc) = param_2;
  *(int *)(param_1 + 0x24) = iVar3 + -1;
  return;
}


// ==== FUN_0037d038 @ 0037d038 ====

int * FUN_0037d038(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    piVar1 = *(int **)(param_1 + 800);
    piVar1[7] = 0;
    *(int *)(*piVar1 + 4) = piVar1[1];
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *piVar3 = iVar2;
    *piVar1 = param_1 + 0x340;
    iVar2 = *(int *)(param_1 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x344);
    piVar1[3] = param_2;
    piVar1[1] = iVar4;
    piVar1[2] = param_3;
    piVar3 = *(int **)(param_1 + 0x344);
    piVar1[4] = param_4;
    *piVar3 = (int)piVar1;
    *(int **)(param_1 + 0x344) = piVar1;
    piVar1[5] = param_5;
    *(int *)(param_1 + 0x4c) = iVar2 + -1;
    return piVar1;
  }
  return (int *)0x0;
}


// ==== FUN_0037d0c8 @ 0037d0c8 ====

void FUN_0037d0c8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(*param_2 + 4) = param_2[1];
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = *param_2;
  piVar4 = (int *)param_2[1];
  *(int *)(param_1 + 0x4c) = iVar1 + 1;
  *piVar4 = iVar3;
  *param_2 = param_1 + 800;
  *(int *)(param_1 + 0x50) = iVar2 + -1;
  param_2[1] = *(int *)(param_1 + 0x324);
  **(undefined4 **)(param_1 + 0x324) = param_2;
  *(int **)(param_1 + 0x324) = param_2;
  return;
}


// ==== FUN_0037d118 @ 0037d118 ====

void FUN_0037d118(void)

{
  FUN_0037cca8(1,0xffff);
  return;
}


// ==== FUN_0037d138 @ 0037d138 ====

void FUN_0037d138(void)

{
  FUN_0037cca8(0,0xffff);
  return;
}


// ==== FUN_0037d158 @ 0037d158 ====

void FUN_0037d158(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9250,2);
      FUN_00100230(&gp0xffff9248,2);
    }
    else {
      FUN_00100228(&gp0xffff9248);
      FUN_00100258(&gp0xffff9250);
      DAT_0048ecf0 = 0x3fc90fdb;
      DAT_0048ecf4 = 0xbe22f983;
      DAT_0048ecf8 = 0x4b400000;
      DAT_0048ecfc = uStack_44;
      DAT_0048ed00 = 0xbe22f983;
      DAT_0048ed04 = 0x3f000000;
      DAT_0048ed08 = 0x3e800000;
      DAT_0048ed0c = uStack_34;
      DAT_0048ed10 = 0xc2992661;
      DAT_0048ed14 = 0xc2255de0;
      DAT_0048ed18 = 0x42a33457;
      DAT_0048ed1c = uStack_24;
      DAT_0048ed20 = 0x421ed7b7;
      DAT_0048ed24 = 0x40c90fda;
      DAT_0048ed28 = 0;
      DAT_0048ed2c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037d2a0 @ 0037d2a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037d2a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  int iVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  undefined1 (*in_t0_lo) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*in_t1_lo) [16];
  undefined8 in_t7_udw;
  int iVar21;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  undefined4 uVar22;
  int unaff_s2_lo;
  undefined1 (*unaff_s3_lo) [16];
  int unaff_s4_lo;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_vf16 [16];
  undefined1 in_vf17 [16];
  undefined1 in_vf18 [16];
  undefined1 in_vf19 [16];
  undefined1 in_vf20 [16];
  undefined1 in_vf21 [16];
  undefined1 in_vf22 [16];
  undefined1 in_vf23 [16];
  
  iVar23 = *(int *)(param_1 + 0x398);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 + -0x1e < 1) {
    pauVar15 = (undefined1 (*) [16])&DAT_70000000;
    REG_DMAC_9_SPR_TO_MADR = iVar1;
    REG_DMAC_9_SPR_TO_SADR = 0x70000000;
    REG_DMAC_9_SPR_TO_QWC = iVar2 * 0xb;
    REG_DMAC_9_SPR_TO_CHCR = 0x100;
    SYNC(0);
    SYNC(0x10);
    uVar11 = REG_DMAC_9_SPR_TO_CHCR;
    do {
      uVar8 = uVar11 & 0x100;
      uVar11 = REG_DMAC_9_SPR_TO_CHCR;
    } while (uVar8 != 0);
    uVar8 = (uint)DAT_7000000e;
    bVar5 = false;
    auVar24 = _lqc2(_DAT_70000020);
    _lqc2(_DAT_70000050);
    _ctc2((uint)DAT_7000000e);
    pauVar12 = (undefined1 (*) [16])(DAT_7000000c | 0x70000000);
    auVar3._12_2_ = DAT_7000000c;
    auVar3._0_12_ = _DAT_70000000;
    auVar3._14_2_ = DAT_7000000e;
    _lqc2(auVar3);
    _lqc2(pauVar12[3]);
    _lqc2(pauVar12[2]);
    _lqc2(pauVar12[1]);
    _lqc2(*pauVar12);
    pauVar14 = (undefined1 (*) [16])(DAT_7000001c | 0x70000000);
    uVar11 = iVar2 * 2;
    pauVar19 = (undefined1 (*) [16])0x100;
    iVar16 = iVar2;
    if (uVar8 != 0) {
      auVar4._12_2_ = DAT_7000001c;
      auVar4._0_12_ = _DAT_70000010;
      auVar4._14_2_ = uRam7000001e;
      _lqc2(auVar4);
      _lqc2(pauVar14[3]);
      _lqc2(pauVar14[2]);
      _lqc2(pauVar14[1]);
      _lqc2(*pauVar14);
    }
    while( true ) {
      pauVar20 = pauVar14;
      _vcallms(0);
      _lqc2(pauVar15[3]);
      _lqc2(pauVar15[4]);
      _lqc2(pauVar15[6]);
      _lqc2(pauVar15[7]);
      _lqc2(pauVar15[8]);
      if (uVar8 != 0) {
        _lqc2(pauVar15[9]);
        _lqc2(pauVar15[10]);
      }
      _vcallms(0xa0);
      if (bVar5) {
        auVar25 = _sqc2(in_vf16);
        pauVar19[3] = auVar25;
        auVar25 = _sqc2(in_vf17);
        pauVar19[2] = auVar25;
        auVar25 = _sqc2(in_vf18);
        pauVar19[1] = auVar25;
        auVar25 = _sqc2(in_vf19);
        *pauVar19 = auVar25;
        if (uVar11 != 0) {
          auVar25 = _sqc2(in_vf20);
          in_t1_lo[3] = auVar25;
          auVar25 = _sqc2(in_vf21);
          in_t1_lo[2] = auVar25;
          auVar25 = _sqc2(in_vf22);
          in_t1_lo[1] = auVar25;
          auVar25 = _sqc2(in_vf23);
          *in_t1_lo = auVar25;
        }
      }
      pauVar19 = pauVar15 + 5;
      _ctc2(pauVar12);
      _ctc2(pauVar20);
      if (iVar16 + -1 < 1) {
        iVar23 = iVar23 + -1;
        pauVar15 = (undefined1 (*) [16])&DAT_70000000;
        uVar9 = (uint)DAT_7000000e;
        if (iVar23 < 1) {
          pauVar13 = (undefined1 (*) [16])0x0;
          pauVar14 = (undefined1 (*) [16])0x0;
          iVar16 = iVar2;
        }
        else {
          pauVar13 = (undefined1 (*) [16])(DAT_7000000c | 0x70000000);
          pauVar14 = (undefined1 (*) [16])(DAT_7000001c | 0x70000000);
          iVar16 = iVar2;
        }
      }
      else {
        uVar9 = (uint)*(ushort *)(pauVar15[0xb] + 0xe);
        pauVar13 = (undefined1 (*) [16])(*(ushort *)(pauVar15[0xb] + 0xc) | 0x70000000);
        pauVar14 = (undefined1 (*) [16])(*(ushort *)(pauVar15[0xc] + 0xc) | 0x70000000);
        pauVar15 = pauVar15 + 0xb;
        iVar16 = iVar16 + -1;
      }
      _ctc2(pauVar13);
      _ctc2(pauVar14);
      _ctc2(uVar9);
      _vcallms(0x1e0);
      auVar24 = _sqc2(auVar24);
      *pauVar19 = auVar24;
      if (iVar23 < 1) break;
      _lqc2(*pauVar15);
      if (pauVar13 != pauVar20 && pauVar13 != pauVar12) {
        _lqc2(pauVar13[3]);
        _lqc2(pauVar13[2]);
        _lqc2(pauVar13[1]);
        _lqc2(*pauVar13);
      }
      _lqc2(pauVar15[1]);
      if (((pauVar14 != pauVar20 && pauVar14 != pauVar12) & uVar9) != 0) {
        _lqc2(pauVar14[3]);
        _lqc2(pauVar14[2]);
        _lqc2(pauVar14[1]);
        _lqc2(*pauVar14);
      }
      _lqc2(pauVar15[5]);
      auVar24 = _lqc2(pauVar15[2]);
      bVar5 = true;
      uVar11 = uVar8;
      pauVar19 = pauVar12;
      pauVar12 = pauVar13;
      in_t1_lo = pauVar20;
      uVar8 = uVar9;
    }
    REG_DMAC_8_SPR_FROM_MADR = iVar1;
    REG_DMAC_8_SPR_FROM_SADR = 0x70000000;
    REG_DMAC_8_SPR_FROM_QWC = iVar2 * 0xb;
    _vcallms(0x6f0);
    auVar24 = _sqc2(in_vf16);
    pauVar12[3] = auVar24;
    auVar24 = _sqc2(in_vf17);
    pauVar12[2] = auVar24;
    auVar24 = _sqc2(in_vf18);
    pauVar12[1] = auVar24;
    auVar24 = _sqc2(in_vf19);
    *pauVar12 = auVar24;
    if (uVar8 != 0) {
      auVar24 = _sqc2(in_vf20);
      pauVar20[3] = auVar24;
      auVar24 = _sqc2(in_vf21);
      pauVar20[2] = auVar24;
      auVar24 = _sqc2(in_vf22);
      pauVar20[1] = auVar24;
      auVar24 = _sqc2(in_vf23);
      *pauVar20 = auVar24;
    }
    REG_DMAC_8_SPR_FROM_CHCR = 0x100;
  }
  else {
    auVar24._8_8_ = in_t7_udw;
    auVar24._0_8_ = 0xf;
    iVar21 = iVar2 + -0xf;
    uVar22 = 0;
    REG_DMAC_SQWC = 0x1000a;
    REG_DMAC_9_SPR_TO_MADR = iVar1;
    REG_DMAC_9_SPR_TO_SADR = 0x70000000;
    REG_DMAC_9_SPR_TO_QWC = 0xa5;
    REG_DMAC_9_SPR_TO_CHCR = 0x100;
    SYNC(0);
    SYNC(0x10);
    iVar16 = iVar1;
    pauVar15 = (undefined1 (*) [16])&DAT_70000000;
    while( true ) {
      if (iVar23 < 1) break;
      uVar8 = REG_DMAC_8_SPR_FROM_CHCR;
      uVar11 = REG_DMAC_9_SPR_TO_CHCR;
      do {
        uVar9 = uVar8 | uVar11;
        uVar8 = REG_DMAC_8_SPR_FROM_CHCR;
        uVar11 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar9 & 0x100) != 0);
      REG_DMAC_8_SPR_FROM_MADR = unaff_s2_lo;
      REG_DMAC_8_SPR_FROM_SADR = unaff_s3_lo;
      REG_DMAC_8_SPR_FROM_QWC = unaff_s4_lo;
      unaff_s3_lo = pauVar15 + 0xa5;
      unaff_s4_lo = auVar24._0_4_;
      unaff_s2_lo = iVar16 + 0x50;
      bVar5 = false;
      if (iVar21 < 1) {
        auVar24._0_8_ = 0xf;
        iVar18 = 0xa5;
        iVar21 = iVar2 + -0xf;
        iVar23 = iVar23 + -1;
        iVar16 = iVar1;
      }
      else {
        auVar25._8_4_ = in_s0_udw;
        auVar25._0_8_ = (long)iVar21;
        auVar25._12_4_ = in_register_0000010c;
        auVar24 = _pminw(auVar24,auVar25);
        iVar18 = unaff_s4_lo * 0xb;
        iVar21 = iVar21 - auVar24._0_4_;
        iVar16 = iVar16 + unaff_s4_lo * 0xb0;
      }
      REG_DMAC_9_SPR_TO_MADR = iVar16;
      REG_DMAC_9_SPR_TO_SADR = (undefined1 (*) [16])((uint)pauVar15 ^ 0xb40);
      REG_DMAC_9_SPR_TO_QWC = iVar18;
      REG_DMAC_8_SPR_FROM_CHCR = uVar22;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar7 = *(ushort *)(*pauVar15 + 0xe);
      auVar25 = _lqc2(pauVar15[2]);
      _lqc2(pauVar15[5]);
      _ctc2((uint)uVar7);
      pauVar12 = (undefined1 (*) [16])(*(ushort *)(*pauVar15 + 0xc) | 0x70000000);
      _lqc2(*pauVar15);
      _lqc2(pauVar12[3]);
      _lqc2(pauVar12[2]);
      _lqc2(pauVar12[1]);
      _lqc2(*pauVar12);
      pauVar14 = (undefined1 (*) [16])(*(ushort *)(pauVar15[1] + 0xc) | 0x70000000);
      pauVar19 = in_t1_lo;
      pauVar20 = in_t0_lo;
      pauVar13 = pauVar15;
      pauVar17 = unaff_s3_lo;
      iVar18 = unaff_s4_lo;
      uVar10 = 0x100;
      if (uVar7 != 0) {
        _lqc2(pauVar15[1]);
        _lqc2(pauVar14[3]);
        _lqc2(pauVar14[2]);
        _lqc2(pauVar14[1]);
        _lqc2(*pauVar14);
      }
      while( true ) {
        uVar6 = uVar7;
        in_t0_lo = pauVar12;
        in_t1_lo = pauVar14;
        _vcallms(0);
        _lqc2(pauVar13[3]);
        _lqc2(pauVar13[4]);
        _lqc2(pauVar13[6]);
        _lqc2(pauVar13[7]);
        _lqc2(pauVar13[8]);
        if (uVar6 != 0) {
          _lqc2(pauVar13[9]);
          _lqc2(pauVar13[10]);
        }
        _vcallms(0xa0);
        iVar18 = iVar18 + -1;
        if (bVar5) {
          auVar3 = _sqc2(in_vf16);
          pauVar20[3] = auVar3;
          auVar3 = _sqc2(in_vf17);
          pauVar20[2] = auVar3;
          auVar3 = _sqc2(in_vf18);
          pauVar20[1] = auVar3;
          auVar3 = _sqc2(in_vf19);
          *pauVar20 = auVar3;
          if (uVar10 != 0) {
            auVar3 = _sqc2(in_vf20);
            pauVar19[3] = auVar3;
            auVar3 = _sqc2(in_vf21);
            pauVar19[2] = auVar3;
            auVar3 = _sqc2(in_vf22);
            pauVar19[1] = auVar3;
            auVar3 = _sqc2(in_vf23);
            *pauVar19 = auVar3;
          }
        }
        _ctc2(in_t0_lo);
        _ctc2(in_t1_lo);
        pauVar12 = (undefined1 (*) [16])0x0;
        pauVar14 = (undefined1 (*) [16])0x0;
        uVar7 = uVar6;
        if (0 < iVar18) {
          uVar7 = *(ushort *)(pauVar13[0xb] + 0xe);
          _ctc2((uint)uVar7);
          pauVar12 = (undefined1 (*) [16])(*(ushort *)(pauVar13[0xb] + 0xc) | 0x70000000);
          pauVar14 = (undefined1 (*) [16])(*(ushort *)(pauVar13[0xc] + 0xc) | 0x70000000);
        }
        _ctc2(pauVar12);
        _ctc2(pauVar14);
        _vcallms(0x1e0);
        auVar25 = _sqc2(auVar25);
        *pauVar17 = auVar25;
        pauVar17 = pauVar17 + 1;
        if (iVar18 < 1) break;
        _lqc2(pauVar13[0xb]);
        if (pauVar12 != in_t1_lo && pauVar12 != in_t0_lo) {
          _lqc2(pauVar12[3]);
          _lqc2(pauVar12[2]);
          _lqc2(pauVar12[1]);
          _lqc2(*pauVar12);
        }
        _lqc2(pauVar13[0xc]);
        if (((pauVar14 != in_t1_lo && pauVar14 != in_t0_lo) & uVar7) != 0) {
          _lqc2(pauVar14[3]);
          _lqc2(pauVar14[2]);
          _lqc2(pauVar14[1]);
          _lqc2(*pauVar14);
        }
        _lqc2(pauVar13[0x10]);
        auVar25 = _lqc2(pauVar13[0xd]);
        bVar5 = true;
        pauVar19 = in_t1_lo;
        pauVar20 = in_t0_lo;
        pauVar13 = pauVar13 + 0xb;
        uVar10 = uVar6;
      }
      _vcallms(0x6f0);
      auVar25 = _sqc2(in_vf16);
      in_t0_lo[3] = auVar25;
      auVar25 = _sqc2(in_vf17);
      in_t0_lo[2] = auVar25;
      auVar25 = _sqc2(in_vf18);
      in_t0_lo[1] = auVar25;
      auVar25 = _sqc2(in_vf19);
      *in_t0_lo = auVar25;
      if (uVar6 != 0) {
        auVar25 = _sqc2(in_vf20);
        in_t1_lo[3] = auVar25;
        auVar25 = _sqc2(in_vf21);
        in_t1_lo[2] = auVar25;
        auVar25 = _sqc2(in_vf22);
        in_t1_lo[1] = auVar25;
        auVar25 = _sqc2(in_vf23);
        *in_t1_lo = auVar25;
      }
      uVar22 = 0x108;
      pauVar15 = (undefined1 (*) [16])((uint)pauVar15 ^ 0xb40);
    }
    uVar11 = REG_DMAC_8_SPR_FROM_CHCR;
    do {
      uVar8 = uVar11 & 0x100;
      uVar11 = REG_DMAC_8_SPR_FROM_CHCR;
    } while (uVar8 != 0);
    REG_DMAC_8_SPR_FROM_MADR = unaff_s2_lo;
    REG_DMAC_8_SPR_FROM_SADR = unaff_s3_lo;
    REG_DMAC_8_SPR_FROM_QWC = unaff_s4_lo;
    REG_DMAC_8_SPR_FROM_CHCR = uVar22;
  }
  SYNC(0);
  SYNC(0x10);
  uVar11 = REG_DMAC_8_SPR_FROM_CHCR;
  do {
    uVar8 = uVar11 & 0x100;
    uVar11 = REG_DMAC_8_SPR_FROM_CHCR;
  } while (uVar8 != 0);
  return;
}


// ==== FUN_0037d840 @ 0037d840 ====

void FUN_0037d840(void)

{
  FUN_0037d158(1,0xffff);
  return;
}


// ==== FUN_0037d860 @ 0037d860 ====

void FUN_0037d860(void)

{
  FUN_0037d158(0,0xffff);
  return;
}


// ==== FUN_0037d880 @ 0037d880 ====

void FUN_0037d880(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9260,2);
      FUN_00100230(&gp0xffff9258,2);
    }
    else {
      FUN_00100228(&gp0xffff9258);
      FUN_00100258(&gp0xffff9260);
      DAT_0048ed30 = 0x3fc90fdb;
      DAT_0048ed34 = 0xbe22f983;
      DAT_0048ed38 = 0x4b400000;
      DAT_0048ed3c = uStack_44;
      DAT_0048ed40 = 0xbe22f983;
      DAT_0048ed44 = 0x3f000000;
      DAT_0048ed48 = 0x3e800000;
      DAT_0048ed4c = uStack_34;
      DAT_0048ed50 = 0xc2992661;
      DAT_0048ed54 = 0xc2255de0;
      DAT_0048ed58 = 0x42a33457;
      DAT_0048ed5c = uStack_24;
      DAT_0048ed60 = 0x421ed7b7;
      DAT_0048ed64 = 0x40c90fda;
      DAT_0048ed68 = 0;
      DAT_0048ed6c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037d9c8 @ 0037d9c8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037d9c8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong in_t0;
  ulong uVar20;
  ulong in_t1;
  undefined8 in_t7_udw;
  int iVar21;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  undefined4 uVar22;
  int unaff_s2_lo;
  undefined1 (*unaff_s3_lo) [16];
  int unaff_s4_lo;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_vf28 [16];
  undefined1 in_vf29 [16];
  undefined1 in_vf30 [16];
  undefined1 in_vf31 [16];
  
  iVar23 = *(int *)(param_1 + 0x398);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x38);
  if ((int)(iVar2 - 0x14U) < 1) {
    uVar20 = 0x100;
    REG_DMAC_9_SPR_TO_MADR = iVar1;
    REG_DMAC_9_SPR_TO_SADR = 0x70000000;
    REG_DMAC_9_SPR_TO_QWC = iVar2 << 4;
    REG_DMAC_9_SPR_TO_CHCR = 0x100;
    SYNC(0);
    SYNC(0x10);
    uVar7 = REG_DMAC_9_SPR_TO_CHCR;
    do {
      uVar6 = uVar7 & 0x100;
      uVar7 = REG_DMAC_9_SPR_TO_CHCR;
    } while (uVar6 != 0);
    bVar5 = false;
    uVar12 = ZEXT48(_DAT_7000000c);
    uVar15 = ZEXT48(_DAT_7000001c);
    _ctc2(DAT_7000002c & 1);
    auVar26._12_4_ = _DAT_7000000c;
    auVar26._0_12_ = _DAT_70000000;
    auVar24 = _lqc2(auVar26);
    auVar3._12_4_ = _DAT_7000001c;
    auVar3._0_12_ = _DAT_70000010;
    auVar25 = _lqc2(auVar3);
    _lqc2(*_DAT_7000000c);
    _lqc2(_DAT_7000000c[2]);
    _lqc2(*_DAT_7000001c);
    _lqc2(_DAT_7000001c[2]);
    auVar4._12_4_ = DAT_7000002c;
    auVar4._0_12_ = _DAT_70000020;
    _lqc2(auVar4);
    _lqc2(_DAT_70000030);
    _lqc2(_DAT_70000040);
    _lqc2(_DAT_70000050);
    _lqc2(_DAT_70000060);
    _lqc2(_DAT_70000070);
    _lqc2(_DAT_70000080);
    _lqc2(_DAT_70000090);
    _lqc2(_DAT_700000a0);
    _lqc2(_DAT_700000b0);
    uVar7 = iVar2 - 0x14U;
    pauVar16 = (undefined1 (*) [16])&DAT_70000000;
    iVar18 = iVar2;
    uVar6 = DAT_7000002c & 1;
    while( true ) {
      _vcallms(0x388);
      _lqc2(pauVar16[0xc]);
      _lqc2(pauVar16[0xd]);
      _lqc2(pauVar16[0xe]);
      _lqc2(pauVar16[0xf]);
      if (bVar5) {
        auVar26 = _sqc2(in_vf28);
        *(undefined1 (*) [16])uVar20 = auVar26;
        auVar26 = _sqc2(in_vf29);
        ((undefined1 (*) [16])uVar20)[2] = auVar26;
        if (uVar7 != 0) {
          auVar26 = _sqc2(in_vf30);
          *(undefined1 (*) [16])in_t1 = auVar26;
          auVar26 = _sqc2(in_vf31);
          ((undefined1 (*) [16])in_t1)[2] = auVar26;
        }
      }
      pauVar8 = (undefined1 (*) [16])uVar12;
      uVar20 = (ulong)(int)pauVar8;
      pauVar13 = (undefined1 (*) [16])uVar15;
      in_t1 = (ulong)(int)pauVar13;
      _ctc2(pauVar8);
      _ctc2(pauVar13);
      if (iVar18 + -1 < 1) {
        iVar23 = iVar23 + -1;
        pauVar10 = (undefined1 (*) [16])&DAT_70000000;
        uVar17 = DAT_7000002c;
        if (iVar23 < 1) {
          uVar12 = 0;
          uVar15 = 0;
          iVar18 = iVar2;
        }
        else {
          uVar12 = ZEXT48(_DAT_7000000c);
          uVar15 = ZEXT48(_DAT_7000001c);
          iVar18 = iVar2;
        }
      }
      else {
        pauVar10 = pauVar16 + 0x10;
        uVar12 = (ulong)*(uint *)(pauVar16[0x10] + 0xc);
        uVar15 = (ulong)*(uint *)(pauVar16[0x11] + 0xc);
        iVar18 = iVar18 + -1;
        uVar17 = *(uint *)(pauVar16[0x12] + 0xc);
      }
      pauVar9 = (undefined1 (*) [16])uVar12;
      _ctc2(pauVar9);
      pauVar11 = (undefined1 (*) [16])uVar15;
      _ctc2(pauVar11);
      uVar17 = uVar17 & 1;
      _vcallms(0x510);
      auVar24 = _sqc2(auVar24);
      pauVar16[9] = auVar24;
      auVar24 = _sqc2(auVar25);
      pauVar16[10] = auVar24;
      if (iVar23 < 1) break;
      _ctc2(uVar17);
      _lqc2(pauVar10[2]);
      _lqc2(pauVar10[3]);
      _lqc2(pauVar10[4]);
      _lqc2(pauVar10[5]);
      _lqc2(pauVar10[6]);
      _lqc2(pauVar10[7]);
      _lqc2(pauVar10[8]);
      _lqc2(pauVar10[9]);
      _lqc2(pauVar10[10]);
      _lqc2(pauVar10[0xb]);
      auVar24 = _lqc2(*pauVar10);
      if (uVar12 != in_t1 && uVar12 != uVar20) {
        _lqc2(*pauVar9);
        _lqc2(pauVar9[2]);
      }
      auVar25 = _lqc2(pauVar10[1]);
      if (((uVar15 != in_t1 && uVar15 != uVar20) & uVar17) != 0) {
        _lqc2(*pauVar11);
        _lqc2(pauVar11[2]);
      }
      bVar5 = true;
      uVar7 = uVar6;
      pauVar16 = pauVar10;
      uVar6 = uVar17;
    }
    REG_DMAC_8_SPR_FROM_MADR = iVar1;
    REG_DMAC_8_SPR_FROM_SADR = 0x70000000;
    REG_DMAC_8_SPR_FROM_QWC = iVar2 << 4;
    _vcallms(0x6f0);
    auVar24 = _sqc2(in_vf28);
    *pauVar8 = auVar24;
    auVar24 = _sqc2(in_vf29);
    pauVar8[2] = auVar24;
    if (uVar6 != 0) {
      auVar24 = _sqc2(in_vf30);
      *pauVar13 = auVar24;
      auVar24 = _sqc2(in_vf31);
      pauVar13[2] = auVar24;
    }
    REG_DMAC_8_SPR_FROM_CHCR = 0x100;
  }
  else {
    auVar24._8_8_ = in_t7_udw;
    auVar24._0_8_ = 10;
    iVar21 = iVar2 + -10;
    uVar22 = 0;
    REG_DMAC_SQWC = 0x2000e;
    REG_DMAC_9_SPR_TO_MADR = iVar1;
    REG_DMAC_9_SPR_TO_SADR = 0x70000000;
    REG_DMAC_9_SPR_TO_QWC = 0xa0;
    REG_DMAC_9_SPR_TO_CHCR = 0x100;
    SYNC(0);
    SYNC(0x10);
    iVar18 = iVar1;
    pauVar16 = (undefined1 (*) [16])&DAT_70000000;
    while( true ) {
      if (iVar23 < 1) break;
      uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
      uVar7 = REG_DMAC_9_SPR_TO_CHCR;
      do {
        uVar17 = uVar6 | uVar7;
        uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
        uVar7 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar17 & 0x100) != 0);
      REG_DMAC_8_SPR_FROM_MADR = unaff_s2_lo;
      REG_DMAC_8_SPR_FROM_SADR = unaff_s3_lo;
      REG_DMAC_8_SPR_FROM_QWC = unaff_s4_lo;
      unaff_s3_lo = pauVar16 + 0xa0;
      iVar19 = auVar24._0_4_;
      unaff_s2_lo = iVar18 + 0x90;
      unaff_s4_lo = iVar19 << 1;
      bVar5 = false;
      if (iVar21 < 1) {
        auVar24._0_8_ = 10;
        iVar21 = iVar2 + -10;
        iVar23 = iVar23 + -1;
        iVar18 = iVar1;
      }
      else {
        auVar25._8_4_ = in_s0_udw;
        auVar25._0_8_ = (long)iVar21;
        auVar25._12_4_ = in_register_0000010c;
        auVar24 = _pminw(auVar24,auVar25);
        in_t0 = (ulong)(iVar19 * 0x100);
        iVar21 = iVar21 - auVar24._0_4_;
        iVar18 = iVar18 + iVar19 * 0x100;
      }
      REG_DMAC_9_SPR_TO_MADR = iVar18;
      REG_DMAC_9_SPR_TO_SADR = (undefined1 (*) [16])((uint)pauVar16 ^ 0xb40);
      REG_DMAC_9_SPR_TO_QWC = auVar24._0_4_ << 4;
      REG_DMAC_8_SPR_FROM_CHCR = uVar22;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      pauVar8 = *(undefined1 (**) [16])(*pauVar16 + 0xc);
      uVar20 = ZEXT48(pauVar8);
      uVar6 = *(uint *)(pauVar16[2] + 0xc) & 1;
      pauVar13 = *(undefined1 (**) [16])(pauVar16[1] + 0xc);
      uVar12 = ZEXT48(pauVar13);
      _ctc2(uVar6);
      auVar25 = _lqc2(*pauVar16);
      auVar26 = _lqc2(pauVar16[1]);
      _lqc2(*pauVar8);
      _lqc2(pauVar8[2]);
      _lqc2(*pauVar13);
      _lqc2(pauVar13[2]);
      _lqc2(pauVar16[2]);
      _lqc2(pauVar16[3]);
      _lqc2(pauVar16[4]);
      _lqc2(pauVar16[5]);
      _lqc2(pauVar16[6]);
      _lqc2(pauVar16[7]);
      _lqc2(pauVar16[8]);
      _lqc2(pauVar16[9]);
      _lqc2(pauVar16[10]);
      _lqc2(pauVar16[0xb]);
      pauVar8 = pauVar16;
      pauVar13 = unaff_s3_lo;
      uVar7 = 0x100;
      while( true ) {
        _vcallms(0x388);
        _lqc2(pauVar8[0xc]);
        _lqc2(pauVar8[0xd]);
        _lqc2(pauVar8[0xe]);
        _lqc2(pauVar8[0xf]);
        iVar19 = iVar19 + -1;
        if (bVar5) {
          auVar3 = _sqc2(in_vf28);
          *(undefined1 (*) [16])in_t0 = auVar3;
          auVar3 = _sqc2(in_vf29);
          ((undefined1 (*) [16])in_t0)[2] = auVar3;
          if (uVar7 != 0) {
            auVar3 = _sqc2(in_vf30);
            *(undefined1 (*) [16])in_t1 = auVar3;
            auVar3 = _sqc2(in_vf31);
            ((undefined1 (*) [16])in_t1)[2] = auVar3;
          }
        }
        pauVar10 = (undefined1 (*) [16])uVar20;
        in_t0 = (ulong)(int)pauVar10;
        pauVar9 = (undefined1 (*) [16])uVar12;
        in_t1 = (ulong)(int)pauVar9;
        _ctc2(pauVar10);
        uVar20 = 0;
        _ctc2(pauVar9);
        uVar12 = 0;
        uVar17 = uVar6;
        if (0 < iVar19) {
          uVar17 = *(uint *)(pauVar8[0x12] + 0xc) & 1;
          uVar20 = (ulong)*(uint *)(pauVar8[0x10] + 0xc);
          uVar12 = (ulong)*(uint *)(pauVar8[0x11] + 0xc);
        }
        pauVar11 = (undefined1 (*) [16])uVar20;
        _ctc2(pauVar11);
        pauVar14 = (undefined1 (*) [16])uVar12;
        _ctc2(pauVar14);
        _vcallms(0x510);
        auVar25 = _sqc2(auVar25);
        *pauVar13 = auVar25;
        auVar25 = _sqc2(auVar26);
        pauVar13[1] = auVar25;
        if (iVar19 < 1) break;
        pauVar13 = pauVar13 + 2;
        _ctc2(uVar17);
        _lqc2(pauVar8[0x12]);
        _lqc2(pauVar8[0x13]);
        _lqc2(pauVar8[0x14]);
        _lqc2(pauVar8[0x15]);
        _lqc2(pauVar8[0x16]);
        _lqc2(pauVar8[0x17]);
        _lqc2(pauVar8[0x18]);
        _lqc2(pauVar8[0x19]);
        _lqc2(pauVar8[0x1a]);
        _lqc2(pauVar8[0x1b]);
        auVar25 = _lqc2(pauVar8[0x10]);
        if (uVar20 != in_t1 && uVar20 != in_t0) {
          _lqc2(*pauVar11);
          _lqc2(pauVar11[2]);
        }
        auVar26 = _lqc2(pauVar8[0x11]);
        if (((uVar12 != in_t1 && uVar12 != in_t0) & uVar17) != 0) {
          _lqc2(*pauVar14);
          _lqc2(pauVar14[2]);
        }
        bVar5 = true;
        pauVar8 = pauVar8 + 0x10;
        uVar7 = uVar6;
        uVar6 = uVar17;
      }
      _vcallms(0x6f0);
      auVar25 = _sqc2(in_vf28);
      *pauVar10 = auVar25;
      auVar25 = _sqc2(in_vf29);
      pauVar10[2] = auVar25;
      if (uVar6 != 0) {
        auVar25 = _sqc2(in_vf30);
        *pauVar9 = auVar25;
        auVar25 = _sqc2(in_vf31);
        pauVar9[2] = auVar25;
      }
      uVar22 = 0x108;
      pauVar16 = (undefined1 (*) [16])((uint)pauVar16 ^ 0xb40);
    }
    uVar7 = REG_DMAC_8_SPR_FROM_CHCR;
    do {
      uVar6 = uVar7 & 0x100;
      uVar7 = REG_DMAC_8_SPR_FROM_CHCR;
    } while (uVar6 != 0);
    REG_DMAC_8_SPR_FROM_MADR = unaff_s2_lo;
    REG_DMAC_8_SPR_FROM_SADR = unaff_s3_lo;
    REG_DMAC_8_SPR_FROM_QWC = unaff_s4_lo;
    REG_DMAC_8_SPR_FROM_CHCR = uVar22;
  }
  SYNC(0);
  SYNC(0x10);
  uVar7 = REG_DMAC_8_SPR_FROM_CHCR;
  do {
    uVar6 = uVar7 & 0x100;
    uVar7 = REG_DMAC_8_SPR_FROM_CHCR;
  } while (uVar6 != 0);
  return;
}


// ==== FUN_0037def0 @ 0037def0 ====

void FUN_0037def0(void)

{
  FUN_0037d880(1,0xffff);
  return;
}


// ==== FUN_0037df10 @ 0037df10 ====

void FUN_0037df10(void)

{
  FUN_0037d880(0,0xffff);
  return;
}


// ==== FUN_0037df30 @ 0037df30 ====

void FUN_0037df30(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9270,2);
      FUN_00100230(&gp0xffff9268,2);
    }
    else {
      FUN_00100228(&gp0xffff9268);
      FUN_00100258(&gp0xffff9270);
      DAT_0048ed70 = 0x3fc90fdb;
      DAT_0048ed74 = 0xbe22f983;
      DAT_0048ed78 = 0x4b400000;
      DAT_0048ed7c = uStack_44;
      DAT_0048ed80 = 0xbe22f983;
      DAT_0048ed84 = 0x3f000000;
      DAT_0048ed88 = 0x3e800000;
      DAT_0048ed8c = uStack_34;
      DAT_0048ed90 = 0xc2992661;
      DAT_0048ed94 = 0xc2255de0;
      DAT_0048ed98 = 0x42a33457;
      DAT_0048ed9c = uStack_24;
      DAT_0048eda0 = 0x421ed7b7;
      DAT_0048eda4 = 0x40c90fda;
      DAT_0048eda8 = 0;
      DAT_0048edac = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037e078 @ 0037e078 ====

void FUN_0037e078(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  uint uVar22;
  undefined1 (*pauVar23) [16];
  int iVar24;
  ulong in_t0;
  ulong in_t1;
  int iVar25;
  int iVar26;
  undefined1 (*pauVar27) [16];
  undefined8 in_t7_udw;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar31;
  int iVar32;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  undefined4 uVar33;
  int unaff_s2_lo;
  undefined1 (*unaff_s3_lo) [16];
  int unaff_s4_lo;
  undefined4 unaff_s6_lo;
  int iVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_vf16 [16];
  undefined1 in_vf17 [16];
  undefined1 in_vf18 [16];
  undefined1 in_vf19 [16];
  undefined1 in_vf20 [16];
  undefined1 in_vf21 [16];
  undefined1 in_vf22 [16];
  undefined1 in_vf23 [16];
  undefined1 in_vf28 [16];
  undefined1 in_vf29 [16];
  undefined1 in_vf30 [16];
  undefined1 in_vf31 [16];
  uint uVar14;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  uVar13 = *(uint *)(param_1 + 0x30);
  uVar14 = *(uint *)(param_1 + 0x38);
  iVar34 = *(int *)(param_1 + 0x398);
  auVar36._8_8_ = in_t7_udw;
  auVar36._0_8_ = 0xe;
  auVar28._4_4_ = 0;
  auVar28._0_4_ = uVar13;
  auVar28._8_4_ = in_s0_udw;
  auVar28._12_4_ = in_register_0000010c;
  auVar28 = _pminw(auVar36,auVar28);
  pauVar27 = (undefined1 (*) [16])&DAT_70000000;
  uVar33 = 0;
  iVar31 = uVar13 - auVar28._0_4_;
  iVar32 = iVar31 >> 0x1f;
  REG_DMAC_9_SPR_TO_MADR = iVar1;
  REG_DMAC_9_SPR_TO_SADR = 0x70000000;
  REG_DMAC_9_SPR_TO_QWC = auVar28._0_4_ * 0xb;
  REG_DMAC_9_SPR_TO_CHCR = 0x100;
  SYNC(0);
  SYNC(0x10);
  iVar26 = iVar1;
  while( true ) {
    bVar6 = true;
    if (iVar34 < 1) break;
    while (bVar6) {
      uVar10 = REG_DMAC_8_SPR_FROM_CHCR;
      uVar12 = REG_DMAC_9_SPR_TO_CHCR;
      do {
        uVar22 = uVar10 | uVar12;
        uVar10 = REG_DMAC_8_SPR_FROM_CHCR;
        uVar12 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar22 & 0x100) != 0);
      REG_DMAC_8_SPR_FROM_MADR = unaff_s2_lo;
      REG_DMAC_8_SPR_FROM_SADR = unaff_s3_lo;
      REG_DMAC_8_SPR_FROM_QWC = unaff_s4_lo;
      REG_DMAC_SQWC = unaff_s6_lo;
      unaff_s3_lo = pauVar27 + 0xa0;
      unaff_s4_lo = auVar28._0_4_;
      unaff_s2_lo = iVar26 + 0x50;
      unaff_s6_lo = 0x1000a;
      bVar7 = false;
      if (CONCAT44(iVar32,iVar31) < 1) {
        auVar29._8_8_ = auVar28._8_8_;
        auVar29._0_8_ = 10;
        bVar6 = false;
        auVar4._4_4_ = 0;
        auVar4._0_4_ = uVar14;
        auVar4._8_4_ = in_s0_udw;
        auVar4._12_4_ = in_register_0000010c;
        auVar28 = _pminw(auVar29,auVar4);
        iVar24 = auVar28._0_4_ << 4;
        iVar31 = uVar14 - auVar28._0_4_;
        iVar26 = iVar2;
      }
      else {
        auVar3._4_4_ = iVar32;
        auVar3._0_4_ = iVar31;
        auVar3._8_4_ = in_s0_udw;
        auVar3._12_4_ = in_register_0000010c;
        auVar28 = _pminw(auVar28,auVar3);
        iVar24 = unaff_s4_lo * 0xb;
        iVar31 = iVar31 - auVar28._0_4_;
        iVar26 = iVar26 + unaff_s4_lo * 0xb0;
      }
      iVar32 = iVar31 >> 0x1f;
      REG_DMAC_9_SPR_TO_MADR = iVar26;
      REG_DMAC_9_SPR_TO_SADR = (undefined1 (*) [16])((uint)pauVar27 ^ 0xb40);
      REG_DMAC_9_SPR_TO_QWC = iVar24;
      REG_DMAC_8_SPR_FROM_CHCR = uVar33;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar9 = *(ushort *)(*pauVar27 + 0xe);
      auVar36 = _lqc2(pauVar27[2]);
      _lqc2(pauVar27[5]);
      _ctc2((uint)uVar9);
      uVar18 = (ulong)*(ushort *)(*pauVar27 + 0xc) | 0x70000000;
      _lqc2(*pauVar27);
      pauVar15 = (undefined1 (*) [16])uVar18;
      _lqc2(pauVar15[3]);
      _lqc2(pauVar15[2]);
      _lqc2(pauVar15[1]);
      _lqc2(*pauVar15);
      uVar21 = (ulong)*(ushort *)(pauVar27[1] + 0xc) | 0x70000000;
      pauVar15 = pauVar27;
      pauVar23 = unaff_s3_lo;
      iVar24 = unaff_s4_lo;
      uVar11 = 0x100;
      if (uVar9 != 0) {
        _lqc2(pauVar27[1]);
        pauVar16 = (undefined1 (*) [16])uVar21;
        in_vf31 = _lqc2(pauVar16[3]);
        in_vf30 = _lqc2(pauVar16[2]);
        in_vf29 = _lqc2(pauVar16[1]);
        in_vf28 = _lqc2(*pauVar16);
      }
      while( true ) {
        uVar8 = uVar9;
        _vcallms(0);
        _lqc2(pauVar15[3]);
        _lqc2(pauVar15[4]);
        _lqc2(pauVar15[6]);
        _lqc2(pauVar15[7]);
        _lqc2(pauVar15[8]);
        if (uVar8 != 0) {
          _lqc2(pauVar15[9]);
          _lqc2(pauVar15[10]);
        }
        _vcallms(0xa0);
        iVar24 = iVar24 + -1;
        if (bVar7) {
          pauVar16 = (undefined1 (*) [16])in_t0;
          auVar35 = _sqc2(in_vf16);
          pauVar16[3] = auVar35;
          auVar35 = _sqc2(in_vf17);
          pauVar16[2] = auVar35;
          auVar35 = _sqc2(in_vf18);
          pauVar16[1] = auVar35;
          auVar35 = _sqc2(in_vf19);
          *pauVar16 = auVar35;
          if (uVar11 != 0) {
            pauVar16 = (undefined1 (*) [16])in_t1;
            auVar35 = _sqc2(in_vf20);
            pauVar16[3] = auVar35;
            auVar35 = _sqc2(in_vf21);
            pauVar16[2] = auVar35;
            auVar35 = _sqc2(in_vf22);
            pauVar16[1] = auVar35;
            auVar35 = _sqc2(in_vf23);
            *pauVar16 = auVar35;
          }
        }
        pauVar16 = (undefined1 (*) [16])uVar18;
        in_t0 = (ulong)(int)pauVar16;
        pauVar19 = (undefined1 (*) [16])uVar21;
        in_t1 = (ulong)(int)pauVar19;
        _ctc2(pauVar16);
        _ctc2(pauVar19);
        uVar18 = 0;
        uVar21 = 0;
        uVar9 = uVar8;
        if (0 < iVar24) {
          uVar9 = *(ushort *)(pauVar15[0xb] + 0xe);
          _ctc2((uint)uVar9);
          uVar18 = (ulong)*(ushort *)(pauVar15[0xb] + 0xc) | 0x70000000;
          uVar21 = (ulong)*(ushort *)(pauVar15[0xc] + 0xc) | 0x70000000;
        }
        pauVar17 = (undefined1 (*) [16])uVar18;
        _ctc2(pauVar17);
        pauVar20 = (undefined1 (*) [16])uVar21;
        _ctc2(pauVar20);
        _vcallms(0x1e0);
        auVar36 = _sqc2(auVar36);
        *pauVar23 = auVar36;
        pauVar23 = pauVar23 + 1;
        if (iVar24 < 1) break;
        _lqc2(pauVar15[0xb]);
        if (uVar18 != in_t1 && uVar18 != in_t0) {
          _lqc2(pauVar17[3]);
          _lqc2(pauVar17[2]);
          _lqc2(pauVar17[1]);
          _lqc2(*pauVar17);
        }
        _lqc2(pauVar15[0xc]);
        if (((uVar21 != in_t1 && uVar21 != in_t0) & uVar9) != 0) {
          in_vf31 = _lqc2(pauVar20[3]);
          in_vf30 = _lqc2(pauVar20[2]);
          in_vf29 = _lqc2(pauVar20[1]);
          in_vf28 = _lqc2(*pauVar20);
        }
        _lqc2(pauVar15[0x10]);
        auVar36 = _lqc2(pauVar15[0xd]);
        bVar7 = true;
        pauVar15 = pauVar15 + 0xb;
        uVar11 = uVar8;
      }
      _vcallms(0x6f0);
      auVar36 = _sqc2(in_vf16);
      pauVar16[3] = auVar36;
      auVar36 = _sqc2(in_vf17);
      pauVar16[2] = auVar36;
      auVar36 = _sqc2(in_vf18);
      pauVar16[1] = auVar36;
      auVar36 = _sqc2(in_vf19);
      *pauVar16 = auVar36;
      if (uVar8 != 0) {
        auVar36 = _sqc2(in_vf20);
        pauVar19[3] = auVar36;
        auVar36 = _sqc2(in_vf21);
        pauVar19[2] = auVar36;
        auVar36 = _sqc2(in_vf22);
        pauVar19[1] = auVar36;
        auVar36 = _sqc2(in_vf23);
        *pauVar19 = auVar36;
      }
      uVar33 = 0x108;
      pauVar27 = (undefined1 (*) [16])((uint)pauVar27 ^ 0xb40);
    }
    bVar6 = true;
    while (bVar6) {
      uVar10 = REG_DMAC_8_SPR_FROM_CHCR;
      uVar12 = REG_DMAC_9_SPR_TO_CHCR;
      do {
        uVar22 = uVar10 | uVar12;
        uVar10 = REG_DMAC_8_SPR_FROM_CHCR;
        uVar12 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar22 & 0x100) != 0);
      REG_DMAC_8_SPR_FROM_MADR = unaff_s2_lo;
      REG_DMAC_8_SPR_FROM_SADR = unaff_s3_lo;
      REG_DMAC_8_SPR_FROM_QWC = unaff_s4_lo;
      REG_DMAC_SQWC = unaff_s6_lo;
      unaff_s3_lo = pauVar27 + 0xa0;
      iVar24 = auVar28._0_4_;
      unaff_s2_lo = iVar26 + 0x90;
      unaff_s4_lo = iVar24 << 1;
      unaff_s6_lo = 0x2000e;
      bVar7 = false;
      if (CONCAT44(iVar32,iVar31) < 1) {
        auVar30._8_8_ = auVar28._8_8_;
        auVar30._0_8_ = 0xe;
        auVar35._4_4_ = 0;
        auVar35._0_4_ = uVar13;
        auVar35._8_4_ = in_s0_udw;
        auVar35._12_4_ = in_register_0000010c;
        auVar28 = _pminw(auVar30,auVar35);
        bVar6 = false;
        iVar31 = uVar13 - auVar28._0_4_;
        iVar25 = auVar28._0_4_ * 0xb;
        iVar26 = iVar1;
      }
      else {
        auVar5._4_4_ = iVar32;
        auVar5._0_4_ = iVar31;
        auVar5._8_4_ = in_s0_udw;
        auVar5._12_4_ = in_register_0000010c;
        auVar28 = _pminw(auVar28,auVar5);
        iVar25 = iVar24 << 4;
        iVar31 = iVar31 - auVar28._0_4_;
        iVar26 = iVar26 + iVar24 * 0x100;
      }
      iVar32 = iVar31 >> 0x1f;
      REG_DMAC_9_SPR_TO_MADR = iVar26;
      REG_DMAC_9_SPR_TO_SADR = (undefined1 (*) [16])((uint)pauVar27 ^ 0xb40);
      REG_DMAC_9_SPR_TO_QWC = iVar25;
      REG_DMAC_8_SPR_FROM_CHCR = uVar33;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      pauVar15 = *(undefined1 (**) [16])(*pauVar27 + 0xc);
      uVar18 = ZEXT48(pauVar15);
      uVar10 = *(uint *)(pauVar27[2] + 0xc) & 1;
      pauVar23 = *(undefined1 (**) [16])(pauVar27[1] + 0xc);
      uVar21 = ZEXT48(pauVar23);
      _ctc2(uVar10);
      auVar36 = _lqc2(*pauVar27);
      auVar35 = _lqc2(pauVar27[1]);
      _lqc2(*pauVar15);
      _lqc2(pauVar15[2]);
      _lqc2(*pauVar23);
      _lqc2(pauVar23[2]);
      _lqc2(pauVar27[2]);
      _lqc2(pauVar27[3]);
      _lqc2(pauVar27[4]);
      _lqc2(pauVar27[5]);
      _lqc2(pauVar27[6]);
      _lqc2(pauVar27[7]);
      _lqc2(pauVar27[8]);
      _lqc2(pauVar27[9]);
      in_vf16 = _lqc2(pauVar27[10]);
      in_vf17 = _lqc2(pauVar27[0xb]);
      pauVar15 = pauVar27;
      pauVar23 = unaff_s3_lo;
      uVar12 = 0x100;
      while( true ) {
        _vcallms(0x388);
        _lqc2(pauVar15[0xc]);
        _lqc2(pauVar15[0xd]);
        _lqc2(pauVar15[0xe]);
        _lqc2(pauVar15[0xf]);
        iVar24 = iVar24 + -1;
        if (bVar7) {
          auVar30 = _sqc2(in_vf28);
          *(undefined1 (*) [16])in_t0 = auVar30;
          auVar30 = _sqc2(in_vf29);
          ((undefined1 (*) [16])in_t0)[2] = auVar30;
          if (uVar12 != 0) {
            auVar30 = _sqc2(in_vf30);
            *(undefined1 (*) [16])in_t1 = auVar30;
            auVar30 = _sqc2(in_vf31);
            ((undefined1 (*) [16])in_t1)[2] = auVar30;
          }
        }
        pauVar16 = (undefined1 (*) [16])uVar18;
        in_t0 = (ulong)(int)pauVar16;
        pauVar19 = (undefined1 (*) [16])uVar21;
        in_t1 = (ulong)(int)pauVar19;
        _ctc2(pauVar16);
        uVar18 = 0;
        _ctc2(pauVar19);
        uVar21 = 0;
        uVar22 = uVar10;
        if (0 < iVar24) {
          uVar22 = *(uint *)(pauVar15[0x12] + 0xc) & 1;
          uVar18 = (ulong)*(uint *)(pauVar15[0x10] + 0xc);
          uVar21 = (ulong)*(uint *)(pauVar15[0x11] + 0xc);
        }
        pauVar17 = (undefined1 (*) [16])uVar18;
        _ctc2(pauVar17);
        pauVar20 = (undefined1 (*) [16])uVar21;
        _ctc2(pauVar20);
        _vcallms(0x510);
        auVar36 = _sqc2(auVar36);
        *pauVar23 = auVar36;
        auVar36 = _sqc2(auVar35);
        pauVar23[1] = auVar36;
        if (iVar24 < 1) break;
        pauVar23 = pauVar23 + 2;
        _ctc2(uVar22);
        _lqc2(pauVar15[0x12]);
        _lqc2(pauVar15[0x13]);
        _lqc2(pauVar15[0x14]);
        _lqc2(pauVar15[0x15]);
        _lqc2(pauVar15[0x16]);
        _lqc2(pauVar15[0x17]);
        _lqc2(pauVar15[0x18]);
        _lqc2(pauVar15[0x19]);
        in_vf16 = _lqc2(pauVar15[0x1a]);
        in_vf17 = _lqc2(pauVar15[0x1b]);
        auVar36 = _lqc2(pauVar15[0x10]);
        if (uVar18 != in_t1 && uVar18 != in_t0) {
          _lqc2(*pauVar17);
          _lqc2(pauVar17[2]);
        }
        auVar35 = _lqc2(pauVar15[0x11]);
        if (((uVar21 != in_t1 && uVar21 != in_t0) & uVar22) != 0) {
          _lqc2(*pauVar20);
          _lqc2(pauVar20[2]);
        }
        bVar7 = true;
        pauVar15 = pauVar15 + 0x10;
        uVar12 = uVar10;
        uVar10 = uVar22;
      }
      _vcallms(0x6f0);
      auVar36 = _sqc2(in_vf28);
      *pauVar16 = auVar36;
      auVar36 = _sqc2(in_vf29);
      pauVar16[2] = auVar36;
      if (uVar10 != 0) {
        auVar36 = _sqc2(in_vf30);
        *pauVar19 = auVar36;
        auVar36 = _sqc2(in_vf31);
        pauVar19[2] = auVar36;
      }
      uVar33 = 0x108;
      pauVar27 = (undefined1 (*) [16])((uint)pauVar27 ^ 0xb40);
    }
    iVar34 = iVar34 + -1;
  }
  uVar13 = REG_DMAC_8_SPR_FROM_CHCR;
  do {
    uVar14 = uVar13 & 0x100;
    uVar13 = REG_DMAC_8_SPR_FROM_CHCR;
  } while (uVar14 != 0);
  REG_DMAC_8_SPR_FROM_MADR = unaff_s2_lo;
  REG_DMAC_8_SPR_FROM_SADR = unaff_s3_lo;
  REG_DMAC_8_SPR_FROM_QWC = unaff_s4_lo;
  REG_DMAC_SQWC = unaff_s6_lo;
  REG_DMAC_8_SPR_FROM_CHCR = uVar33;
  SYNC(0);
  SYNC(0x10);
  uVar13 = REG_DMAC_8_SPR_FROM_CHCR;
  do {
    uVar14 = uVar13 & 0x100;
    uVar13 = REG_DMAC_8_SPR_FROM_CHCR;
  } while (uVar14 != 0);
  return;
}


// ==== FUN_0037e678 @ 0037e678 ====

void FUN_0037e678(void)

{
  FUN_0037df30(1,0xffff);
  return;
}


// ==== FUN_0037e698 @ 0037e698 ====

void FUN_0037e698(void)

{
  FUN_0037df30(0,0xffff);
  return;
}


// ==== FUN_0037e6b8 @ 0037e6b8 ====

void FUN_0037e6b8(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9280,2);
      FUN_00100230(&gp0xffff9278,2);
    }
    else {
      FUN_00100228(&gp0xffff9278);
      FUN_00100258(&gp0xffff9280);
      DAT_0048edb0 = 0x3fc90fdb;
      DAT_0048edb4 = 0xbe22f983;
      DAT_0048edb8 = 0x4b400000;
      DAT_0048edbc = uStack_44;
      DAT_0048edc0 = 0xbe22f983;
      DAT_0048edc4 = 0x3f000000;
      DAT_0048edc8 = 0x3e800000;
      DAT_0048edcc = uStack_34;
      DAT_0048edd0 = 0xc2992661;
      DAT_0048edd4 = 0xc2255de0;
      DAT_0048edd8 = 0x42a33457;
      DAT_0048eddc = uStack_24;
      DAT_0048ede0 = 0x421ed7b7;
      DAT_0048ede4 = 0x40c90fda;
      DAT_0048ede8 = 0;
      DAT_0048edec = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037e800 @ 0037e800 ====

void FUN_0037e800(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined1 (*pauVar7) [16];
  int iVar8;
  float in_f0;
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
  undefined4 uVar30;
  
  iVar8 = *(int *)(param_1 + 0x30);
  pauVar7 = *(undefined1 (**) [16])(param_1 + 0xc);
  while (bVar1 = 0 < iVar8, iVar8 = iVar8 + -1, bVar1) {
    iVar2 = *(int *)(*pauVar7 + 0xc);
    iVar3 = *(int *)(pauVar7[1] + 0xc);
    uVar4 = *(uint *)(iVar2 + 0x8c);
    uVar5 = *(uint *)(iVar3 + 0x8c);
    auVar9 = _lqc2(pauVar7[2]);
    auVar10 = _lqc2(pauVar7[3]);
    auVar11 = _lqc2(pauVar7[4]);
    auVar12 = _lqc2(*pauVar7);
    auVar13 = _lqc2(pauVar7[1]);
    auVar14 = _lqc2(pauVar7[5]);
    auVar15 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x70));
    _lqc2(*(undefined1 (*) [16])(iVar2 + 0x80));
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
    _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
    auVar19 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
    auVar21 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
    auVar22 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    auVar23 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar18 = _vsub(auVar12,auVar17);
    auVar20 = _vsub(auVar13,auVar19);
    auVar17 = _vmove(auVar12);
    auVar19 = _vmove(auVar13);
    if ((uVar5 & uVar4 & 4) == 0) {
      uVar6 = 0;
      if ((uVar4 & 4) == 0) {
        _vopmula(auVar24,auVar20);
        auVar23 = _vopmsub(auVar20,auVar24);
        auVar21 = _vadd(auVar22,auVar14);
        auVar22 = _vsub(auVar12,auVar13);
        auVar13 = _vmulbc(auVar14,auVar9);
        _vaddbc(auVar16,in_vf0);
        auVar12 = _vadd(auVar21,auVar23);
        auVar9 = _vsub(in_vf0,auVar9);
        auVar10 = _vsub(in_vf0,auVar10);
        auVar29 = _vmaxbc(in_vf0,in_vf0);
        auVar21 = _vsub(auVar22,auVar12);
        _vopmula(auVar20,auVar9);
        auVar23 = _vopmsub(auVar9,auVar20);
        _vopmula(auVar20,auVar10);
        auVar24 = _vopmsub(auVar10,auVar20);
        _vopmula(auVar20,auVar11);
        auVar25 = _vopmsub(auVar11,auVar20);
        auVar12 = _sqc2(auVar20);
        *pauVar7 = auVar12;
        auVar12 = _sqc2(auVar18);
        pauVar7[1] = auVar12;
        auVar12 = _sqc2(auVar16);
        pauVar7[7] = auVar12;
        auVar12 = _sqc2(auVar19);
        pauVar7[8] = auVar12;
        auVar12 = _sqc2(auVar15);
        pauVar7[9] = auVar12;
        auVar12 = _sqc2(auVar17);
        pauVar7[10] = auVar12;
        _vaddbc(in_vf0,auVar16);
        _vaddbc(in_vf0,auVar19);
        auVar14 = _vaddbc(in_vf0,auVar19);
        auVar12 = _vaddbc(in_vf0,auVar16);
        _vmulabc(auVar16,auVar23);
        _vmaddabc(auVar12,auVar23);
        auVar15 = _vmaddbc(auVar14,auVar23);
        _vmulabc(auVar16,auVar24);
        _vmaddabc(auVar12,auVar24);
        auVar17 = _vmaddbc(auVar14,auVar24);
        _vmulabc(auVar16,auVar25);
        _vmaddabc(auVar12,auVar25);
        auVar16 = _vmaddbc(auVar14,auVar25);
        auVar12 = _vmul(auVar23,auVar15);
        auVar14 = _vmul(auVar24,auVar17);
        auVar15 = _vmul(auVar25,auVar16);
      }
      else {
        _vopmula(auVar23,auVar18);
        auVar23 = _vopmsub(auVar18,auVar23);
        auVar22 = _vsub(auVar13,auVar12);
        _vaddbc(auVar15,in_vf0);
        auVar29 = _vmaxbc(in_vf0,in_vf0);
        auVar12 = _vadd(auVar21,auVar23);
        auVar21 = _vadd(auVar22,auVar14);
        _vsuba(in_vf0,in_vf0);
        auVar13 = _vmsubbc(auVar14,auVar9);
        _vopmula(auVar18,auVar9);
        auVar23 = _vopmsub(auVar9,auVar18);
        auVar21 = _vsub(auVar21,auVar12);
        _vopmula(auVar18,auVar10);
        auVar24 = _vopmsub(auVar10,auVar18);
        _vopmula(auVar18,auVar11);
        auVar25 = _vopmsub(auVar11,auVar18);
        auVar12 = _sqc2(auVar18);
        *pauVar7 = auVar12;
        auVar12 = _sqc2(auVar20);
        pauVar7[1] = auVar12;
        auVar12 = _sqc2(auVar15);
        pauVar7[7] = auVar12;
        auVar12 = _sqc2(auVar17);
        pauVar7[8] = auVar12;
        auVar12 = _sqc2(auVar16);
        pauVar7[9] = auVar12;
        auVar12 = _sqc2(auVar19);
        pauVar7[10] = auVar12;
        _vaddbc(in_vf0,auVar17);
        auVar12 = _vaddbc(in_vf0,auVar15);
        _vaddbc(in_vf0,auVar15);
        auVar14 = _vaddbc(in_vf0,auVar12);
        _vmulabc(auVar15,auVar23);
        _vmaddabc(auVar12,auVar23);
        auVar17 = _vmaddbc(auVar14,auVar23);
        _vmulabc(auVar15,auVar24);
        _vmaddabc(auVar12,auVar24);
        auVar16 = _vmaddbc(auVar14,auVar24);
        _vmulabc(auVar15,auVar25);
        _vmaddabc(auVar12,auVar25);
        auVar15 = _vmaddbc(auVar14,auVar25);
        auVar12 = _vmul(auVar23,auVar17);
        auVar14 = _vmul(auVar24,auVar16);
        auVar15 = _vmul(auVar25,auVar15);
      }
    }
    else {
      uVar6 = 1;
      _vopmula(auVar23,auVar18);
      auVar23 = _vopmsub(auVar18,auVar23);
      _vopmula(auVar24,auVar20);
      auVar24 = _vopmsub(auVar20,auVar24);
      auVar21 = _vadd(auVar21,auVar23);
      auVar23 = _vadd(auVar22,auVar24);
      auVar22 = _vsub(auVar13,auVar12);
      _vaddbc(auVar15,auVar16);
      auVar29 = _vmaxbc(in_vf0,in_vf0);
      auVar12 = _vsub(auVar23,auVar21);
      auVar21 = _vadd(auVar22,auVar14);
      _vsuba(in_vf0,in_vf0);
      auVar13 = _vmsubbc(auVar14,auVar9);
      _vopmula(auVar18,auVar9);
      auVar23 = _vopmsub(auVar9,auVar18);
      auVar21 = _vadd(auVar12,auVar21);
      _vopmula(auVar18,auVar10);
      auVar24 = _vopmsub(auVar10,auVar18);
      _vopmula(auVar18,auVar11);
      auVar25 = _vopmsub(auVar11,auVar18);
      _vopmula(auVar20,auVar9);
      auVar26 = _vopmsub(auVar9,auVar20);
      _vopmula(auVar20,auVar10);
      auVar27 = _vopmsub(auVar10,auVar20);
      _vopmula(auVar20,auVar11);
      auVar28 = _vopmsub(auVar11,auVar20);
      auVar12 = _sqc2(auVar18);
      *pauVar7 = auVar12;
      auVar12 = _sqc2(auVar20);
      pauVar7[1] = auVar12;
      auVar12 = _sqc2(auVar15);
      pauVar7[7] = auVar12;
      auVar12 = _sqc2(auVar17);
      pauVar7[8] = auVar12;
      auVar12 = _sqc2(auVar16);
      pauVar7[9] = auVar12;
      auVar12 = _sqc2(auVar19);
      pauVar7[10] = auVar12;
      _vaddbc(in_vf0,auVar15);
      _vaddbc(in_vf0,auVar17);
      auVar14 = _vaddbc(in_vf0,auVar17);
      auVar12 = _vaddbc(in_vf0,auVar15);
      _vaddbc(in_vf0,auVar16);
      _vaddbc(in_vf0,auVar19);
      auVar19 = _vaddbc(in_vf0,auVar19);
      auVar17 = _vaddbc(in_vf0,auVar16);
      _vmulabc(auVar15,auVar23);
      _vmaddabc(auVar12,auVar23);
      auVar18 = _vmaddbc(auVar14,auVar23);
      _vmulabc(auVar15,auVar24);
      _vmaddabc(auVar12,auVar24);
      auVar20 = _vmaddbc(auVar14,auVar24);
      _vmulabc(auVar15,auVar25);
      _vmaddabc(auVar12,auVar25);
      auVar15 = _vmaddbc(auVar14,auVar25);
      _vmulabc(auVar16,auVar26);
      _vmaddabc(auVar17,auVar26);
      auVar12 = _vmaddbc(auVar19,auVar26);
      _vmulabc(auVar16,auVar27);
      _vmaddabc(auVar17,auVar27);
      auVar14 = _vmaddbc(auVar19,auVar27);
      _vmulabc(auVar16,auVar28);
      _vmaddabc(auVar17,auVar28);
      auVar17 = _vmaddbc(auVar19,auVar28);
      _vmula(auVar23,auVar18);
      auVar12 = _vmadd(auVar26,auVar12);
      _vmula(auVar24,auVar20);
      auVar14 = _vmadd(auVar27,auVar14);
      _vmula(auVar25,auVar15);
      auVar15 = _vmadd(auVar28,auVar17);
    }
    _vaddabc(auVar12,auVar12);
    _vmaddabc(auVar29,auVar12);
    _vaddabc(auVar14,auVar14);
    _vmaddabc(auVar29,auVar14);
    _vaddabc(auVar15,auVar15);
    _vmaddabc(auVar29,auVar15);
    auVar12 = _vmaddbc(auVar29,auVar29);
    auVar14 = _vmove(auVar10);
    auVar15 = _vmove(auVar11);
    _vmr32(auVar10);
    _vdiv(in_vf0,0,auVar12,0);
    auVar11 = _vmr32(auVar11);
    auVar10 = _vmr32(auVar9);
    _vmr32(auVar9);
    _vmr32(auVar10);
    _vwaitq();
    uVar30 = _vdiv(in_vf0,0,auVar12,0);
    auVar12 = _vaddq(in_vf0,uVar30);
    auVar9 = _vmove(auVar11);
    auVar10 = _vmr32(auVar11);
    _vmr32(auVar10);
    auVar11 = _vmr32(auVar9);
    _vwaitq();
    uVar30 = _vdiv(in_vf0,0,auVar12,0);
    _vaddq(in_vf0,uVar30);
    _vmr32(auVar9);
    _vmr32(auVar10);
    auVar12 = _vmove(auVar14);
    auVar14 = _vmove(auVar15);
    uVar30 = _vwaitq();
    _vaddq(in_vf0,uVar30);
    auVar17 = _vmove(auVar13);
    _vmulabc(auVar12,auVar22);
    _vmaddabc(auVar14,auVar22);
    auVar10 = _vmaddbc(auVar11,auVar22);
    _vmulabc(auVar12,auVar21);
    _vmaddabc(auVar14,auVar21);
    _vmaddbc(auVar11,auVar21);
    auVar15 = _vmr32(auVar10);
    _vmulabc(auVar12,auVar13);
    _vmaddabc(auVar14,auVar13);
    auVar13 = _vmaddbc(auVar11,auVar13);
    auVar19 = _vsub(in_vf0,in_vf0);
    auVar9 = _sqc2(auVar17);
    pauVar7[2] = auVar9;
    auVar16 = _vadd(auVar13,auVar10);
    auVar9 = _qmfc2(auVar15._0_4_);
    auVar10 = _qmfc2(auVar10._0_4_);
    auVar11 = _qmfc2(auVar13._0_4_);
    in_f0 = in_f0 - in_f0;
    if (auVar11._0_4_ < auVar9._0_4_) {
      if (auVar10._0_4_ < in_f0) {
        if (auVar11._0_4_ < in_f0) {
          auVar15 = _vsubbc(auVar15,auVar16);
        }
      }
      else {
        auVar15 = _vsubbc(auVar15,auVar13);
      }
    }
    auVar9 = _vmul(auVar15,auVar17);
    auVar10 = _vmulbc(auVar9,auVar17);
    *(undefined2 *)(*pauVar7 + 0xe) = uVar6;
    *(short *)(pauVar7[1] + 0xe) = (short)(((uVar5 | uVar4) & 8) >> 3);
    auVar9 = _sqc2(auVar12);
    pauVar7[3] = auVar9;
    auVar9 = _sqc2(auVar14);
    pauVar7[4] = auVar9;
    auVar9 = _sqc2(auVar19);
    pauVar7[5] = auVar9;
    auVar9 = _sqc2(auVar10);
    pauVar7[6] = auVar9;
    pauVar7 = pauVar7 + 0xb;
  }
  return;
}


// ==== FUN_0037ec10 @ 0037ec10 ====

void FUN_0037ec10(void)

{
  FUN_0037e6b8(1,0xffff);
  return;
}


// ==== FUN_0037ec30 @ 0037ec30 ====

void FUN_0037ec30(void)

{
  FUN_0037e6b8(0,0xffff);
  return;
}


// ==== FUN_0037ec50 @ 0037ec50 ====

void FUN_0037ec50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  undefined4 uStack_10c;
  undefined4 uStack_fc;
  undefined4 uStack_e4;
  undefined4 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_88;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar11 = 0;
  pauVar9 = *(undefined1 (**) [16])(param_1 + 0xc);
  pauVar10 = pauVar9;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      if (*(short *)(pauVar9[1] + 0xe) == 0) {
        uVar4 = *(uint *)(param_1 + 0x30);
      }
      else {
        auVar17 = _lqc2(pauVar9[5]);
        auVar5 = _qmfc2(auVar17._0_4_);
        if (0.0 < auVar5._0_4_) {
          auVar14 = _lqc2(pauVar9[3]);
          auVar6 = _qmfc2(auVar14._0_4_);
          auVar15 = _lqc2(pauVar9[4]);
          _vopmula(auVar14,auVar15);
          auVar16 = _vopmsub(auVar15,auVar14);
          auVar7 = _qmfc2(auVar15._0_4_);
          iVar1 = *(int *)(pauVar9[8] + 0xc);
          iVar2 = *(int *)(pauVar9[10] + 0xc);
          auVar8 = _qmfc2(auVar16._0_4_);
          uVar3 = *(undefined4 *)(pauVar9[2] + 0xc);
          auVar19 = _lqc2(*pauVar9);
          auVar20 = _lqc2(pauVar9[1]);
          auVar7._4_4_ = auVar7._0_4_;
          auVar7._0_4_ = auVar6._0_4_;
          auVar7._8_4_ = auVar8._0_4_;
          auVar7._12_4_ = uStack_124;
          auVar7 = _lqc2(auVar7);
          auVar6 = _sqc2(auVar14);
          uStack_11c = auVar6._4_4_;
          auVar6 = _sqc2(auVar15);
          uStack_10c = auVar6._4_4_;
          auVar6 = _sqc2(auVar16);
          uStack_fc = auVar6._4_4_;
          auVar6 = _sqc2(auVar14);
          uStack_d8 = auVar6._8_4_;
          auVar6 = _sqc2(auVar15);
          uStack_c8 = auVar6._8_4_;
          auVar6 = _sqc2(auVar16);
          uStack_b8 = auVar6._8_4_;
          auVar5 = _qmtc2(auVar5._0_4_);
          auVar16 = _vmulbc(auVar7,auVar5);
          auVar5 = _sqc2(auVar7);
          auVar6 = _sqc2(auVar17);
          uStack_9c = auVar6._4_4_;
          auVar6._4_4_ = uStack_10c;
          auVar6._0_4_ = uStack_11c;
          auVar6._8_4_ = uStack_fc;
          auVar6._12_4_ = uStack_e4;
          auVar7 = _lqc2(auVar6);
          auVar6 = _qmtc2(uStack_9c);
          auVar7 = _vmulbc(auVar7,auVar6);
          auVar17 = _sqc2(auVar17);
          uStack_88 = auVar17._8_4_;
          fVar12 = *(float *)(pauVar9[9] + 0xc);
          auVar18 = _qmtc2(*(float *)(pauVar9[7] + 0xc));
          fVar13 = *(float *)(pauVar9[7] + 0xc) + fVar12;
          auVar17._4_4_ = uStack_c8;
          auVar17._0_4_ = uStack_d8;
          auVar17._8_4_ = uStack_b8;
          auVar17._12_4_ = uStack_a4;
          auVar17 = _lqc2(auVar17);
          auVar6 = _qmtc2(uStack_88);
          auVar17 = _vmulbc(auVar17,auVar6);
          auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
          auVar17 = _vadd(auVar7,auVar17);
          auVar8 = _vadd(auVar6,auVar19);
          auVar6 = _qmtc2(fVar13);
          auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
          auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
          auVar15 = _vmulbc(auVar17,auVar6);
          auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x30));
          auVar16 = _vmulbc(auVar16,auVar6);
          _vopmula(auVar17,auVar20);
          auVar6 = _vopmsub(auVar20,auVar17);
          auVar17 = _sqc2(auVar16);
          pauVar10[4] = auVar17;
          auVar16 = _qmtc2(fVar12);
          auVar17 = _sqc2(auVar15);
          pauVar10[5] = auVar17;
          _vopmula(auVar14,auVar19);
          auVar14 = _vopmsub(auVar19,auVar14);
          auVar17 = _vadd(auVar7,auVar20);
          *(undefined4 *)(pauVar10[6] + 8) = uVar3;
          *(int *)pauVar10[6] = iVar1;
          auVar6 = _vadd(auVar17,auVar6);
          *(int *)(pauVar10[6] + 4) = iVar2;
          auVar17 = _vadd(auVar8,auVar14);
          auVar7 = _vmulbc(auVar17,auVar18);
          auVar17 = _qmtc2(1.0 / fVar13);
          auVar6 = _vmulbc(auVar6,auVar16);
          auVar6 = _vadd(auVar7,auVar6);
          auVar17 = _vmulbc(auVar6,auVar17);
          uStack_158 = auVar5._8_4_;
          uStack_154 = auVar5._12_4_;
          auVar17 = _sqc2(auVar17);
          *(int *)*pauVar10 = auVar5._0_4_;
          *(int *)(*pauVar10 + 4) = auVar5._4_4_;
          *(undefined4 *)(*pauVar10 + 8) = uStack_158;
          *(undefined4 *)(*pauVar10 + 0xc) = uStack_154;
          *(undefined4 *)pauVar10[1] = uStack_11c;
          *(undefined4 *)(pauVar10[1] + 4) = uStack_10c;
          *(undefined4 *)(pauVar10[1] + 8) = uStack_fc;
          *(undefined4 *)(pauVar10[1] + 0xc) = uStack_e4;
          *(undefined4 *)pauVar10[2] = uStack_d8;
          *(undefined4 *)(pauVar10[2] + 4) = uStack_c8;
          *(undefined4 *)(pauVar10[2] + 8) = uStack_b8;
          *(undefined4 *)(pauVar10[2] + 0xc) = uStack_a4;
          uStack_48 = auVar17._8_4_;
          uStack_44 = auVar17._12_4_;
          *(int *)pauVar10[3] = auVar17._0_4_;
          *(int *)(pauVar10[3] + 4) = auVar17._4_4_;
          *(undefined4 *)(pauVar10[3] + 8) = uStack_48;
          *(undefined4 *)(pauVar10[3] + 0xc) = uStack_44;
          pauVar10 = pauVar10 + 7;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          uVar4 = *(uint *)(param_1 + 0x30);
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x30);
        }
      }
      uVar11 = uVar11 + 1;
      pauVar9 = pauVar9 + 0xb;
    } while (uVar11 < uVar4);
  }
  return;
}


