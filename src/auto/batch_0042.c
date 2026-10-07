// ==== FUN_0034b4e8 @ 0034b4e8 ====

undefined4 FUN_0034b4e8(float param_1,float param_2,ulong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((param_3 & 0x10) != 0) && (param_1 == 0.0)) {
    return 1;
  }
  if ((param_3 & 2) == 0) {
    if ((param_3 & 1) != 0) goto LAB_0034b53c;
  }
  else if ((param_3 & 1) != 1) {
LAB_0034b53c:
    if (param_1 <= param_2) {
      return 0;
    }
    return 1;
  }
  bVar1 = false;
  if ((param_2 < 0.0) && (0.0 <= param_1)) {
    bVar1 = true;
  }
  if (param_2 <= param_1) {
    if (bVar1) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_0034b5a8 @ 0034b5a8 ====

undefined4 FUN_0034b5a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ==== FUN_0034b5b0 @ 0034b5b0 ====

undefined8
FUN_0034b5b0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,ulong param_6)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_80 [16];
  
  iVar5 = (int)param_4;
  if (*(int *)(iVar5 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = (int)param_3;
    if (*(short *)(iVar4 + 8) == -1) {
      uVar2 = FUN_003487e0();
      *(undefined2 *)(iVar4 + 8) = uVar2;
      uVar1 = *(undefined4 *)(iVar5 + 0x10);
    }
    else {
      uVar1 = *(undefined4 *)(iVar5 + 0x10);
    }
    FUN_0034f420(auStack_80,param_3,uVar1);
    uVar3 = FUN_0034b5a8(*(undefined4 *)(iVar5 + 0x10));
    fVar6 = (float)FUN_0034eaa0(param_4,param_5);
    *(uint *)(iVar4 + 0x998) = *(uint *)(iVar4 + 0x998) | *(uint *)(*(int *)(iVar5 + 0x10) + 8);
    *(undefined4 *)(iVar4 + 0x984) = *(undefined4 *)(iVar5 + 0x10);
    if ((param_6 & 4) == 0) {
      uVar3 = FUN_0034f430(param_1,param_2,fVar6,fVar6 / (float)(int)uVar3,auStack_80,uVar3,param_6)
      ;
    }
    else {
      uVar3 = FUN_0034f668(param_1,param_2,auStack_80,uVar3,param_6);
    }
  }
  return uVar3;
}


// ==== FUN_0034b6e0 @ 0034b6e0 ====

undefined8
FUN_0034b6e0(float param_1,float param_2,undefined4 param_3,float param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar6 = (int)param_6;
  fVar11 = param_1 - param_2;
  if (*(char *)(iVar6 + 1) < '\x02') {
    uVar3 = 0;
  }
  else {
    pfVar1 = *(float **)(iVar6 + 8);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    fVar7 = *pfVar1;
    uVar2 = *(undefined4 *)(iVar6 + 0x14);
    if (fVar7 <= param_1) {
      fVar9 = pfVar1[1];
      if (param_1 < fVar7 + fVar9) {
        fVar10 = 1.0;
        fVar9 = ((param_1 - fVar7) + 1.0) / (fVar9 + 1.0);
        uVar8 = FUN_0034eaa0(param_6,param_7);
        fVar7 = (float)FUN_00350a50(*pfVar1,uVar8,param_1,pfVar1);
        if (pfVar1[2] == 1.4013e-45) {
          uVar8 = FUN_0034eaa0(param_6,param_7);
          fVar7 = (float)FUN_0034b498(fVar7,uVar8);
        }
        uVar3 = FUN_0034d960(fVar7,fVar7 - fVar11,param_3,param_4 * (fVar10 - fVar9),param_5,uVar5,
                             param_7,param_8);
        if (pfVar1[3] == 1.4013e-45) {
          param_1 = 0.0;
          fVar11 = 0.0 - fVar11;
        }
        else {
          param_1 = param_1 - *pfVar1;
          fVar11 = param_1 - fVar11;
        }
        uVar4 = FUN_0034d960(param_1,fVar11,param_3,param_4 * fVar9,param_5,uVar2,param_7,param_8);
        uVar3 = FUN_00346230(fVar9,param_5,uVar3,uVar4,param_8);
        return uVar3;
      }
      if (pfVar1[3] == 1.4013e-45) {
        param_1 = (param_1 - fVar7) - fVar9;
      }
      else {
        param_1 = param_1 - fVar7;
      }
      param_2 = param_1 - fVar11;
      uVar5 = uVar2;
    }
    uVar3 = FUN_0034d960(param_1,param_2,param_3,param_4,param_5,uVar5,param_7,param_8);
  }
  return uVar3;
}


// ==== FUN_0034b910 @ 0034b910 ====

undefined8
FUN_0034b910(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  
  lVar7 = (long)*(char *)(param_6 + 1);
  fVar9 = 0.0;
  if (lVar7 == 0) {
    uVar2 = 0;
  }
  else {
    puVar8 = (undefined4 *)(param_6 + 0x10);
    lVar4 = 0;
    iVar3 = 0;
    fVar10 = fVar9;
    puVar6 = puVar8;
    puVar5 = puVar8;
    if (0 < lVar7) {
      do {
        fVar9 = (float)FUN_0034eaa0(*puVar5,param_7);
        fVar9 = fVar10 + fVar9;
        iVar3 = (int)lVar4 + 1;
        lVar4 = (long)iVar3;
        if (param_1 < fVar9) {
          uVar1 = *puVar6;
          param_1 = param_1 - fVar10;
          fVar9 = fVar10;
          goto LAB_0034b9f8;
        }
        fVar10 = fVar9;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar4 < lVar7);
    }
    param_1 = param_1 - fVar9;
    uVar1 = puVar8[iVar3 + -1];
LAB_0034b9f8:
    uVar2 = FUN_0034d960(param_1,param_2 - fVar9,param_3,param_4,param_5,uVar1,param_7,param_8);
  }
  return uVar2;
}


// ==== FUN_0034ba50 @ 0034ba50 ====

long FUN_0034ba50(int param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  float *pfVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar9 = 0;
  puVar2 = *(undefined4 **)(param_2 + 8);
  fVar12 = 0.0;
  pfVar4 = (float *)FUN_003500e0(param_3,*puVar2);
  fVar10 = *pfVar4;
  if (puVar2[1] == 0) {
    lVar5 = (long)*(char *)(param_2 + 1);
  }
  else {
    lVar5 = (long)*(char *)(param_2 + 1);
    if (*(int *)(param_1 + 0x998) != 0) {
      lVar8 = 0;
      if (0 < lVar5) {
        piVar6 = (int *)(param_2 + 0x10);
        do {
          bVar1 = lVar8 != (int)fVar10;
          lVar8 = (long)((int)lVar8 + 1);
          if (bVar1) {
            fVar12 = fVar12 + **(float **)(*piVar6 + 0xc);
          }
          piVar6 = piVar6 + 1;
        } while (lVar8 < lVar5);
      }
      goto LAB_0034bb1c;
    }
  }
  if (0 < lVar5) {
    piVar6 = (int *)(param_2 + 0x10);
    do {
      iVar7 = *piVar6;
      lVar5 = (long)((int)lVar5 + -1);
      piVar6 = piVar6 + 1;
      fVar12 = fVar12 + **(float **)(iVar7 + 0xc);
    } while (lVar5 != 0);
  }
LAB_0034bb1c:
  fVar11 = (float)FUN_00351a08();
  fVar11 = fVar11 * fVar12;
  fVar12 = 0.0;
  if (puVar2[1] == 0) {
    cVar3 = *(char *)(param_2 + 1);
  }
  else {
    lVar5 = 0;
    if (*(int *)(param_1 + 0x998) != 0) {
      while( true ) {
        if ((int)*(char *)(param_2 + 1) <= lVar5) {
          return 0;
        }
        if (lVar5 != (int)fVar10) {
          fVar12 = fVar12 + **(float **)(*(int *)(param_2 + (int)lVar5 * 4 + 0x10) + 0xc);
        }
        if (fVar11 < fVar12) break;
        lVar5 = (long)((int)lVar5 + 1);
      }
      return lVar5;
    }
    cVar3 = *(char *)(param_2 + 1);
  }
  if ('\0' < cVar3) {
    fVar10 = **(float **)(*(int *)(param_2 + 0x10) + 0xc) + 0.0;
    lVar9 = 0;
    if (fVar11 < fVar10) {
      lVar9 = 0;
    }
    else {
      do {
        iVar7 = (int)lVar9 + 1;
        lVar9 = (long)iVar7;
        if ((int)*(char *)(param_2 + 1) <= lVar9) {
          return 0;
        }
        fVar10 = fVar10 + **(float **)(*(int *)(param_2 + iVar7 * 4 + 0x10) + 0xc);
      } while (fVar10 <= fVar11);
    }
  }
  return lVar9;
}


// ==== FUN_0034bc30 @ 0034bc30 ====

undefined8
FUN_0034bc30(float param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9,code *param_10,
            long param_11)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar9 = (int)param_7;
  puVar1 = *(undefined4 **)(iVar9 + 8);
  pfVar2 = (float *)FUN_003500e0(param_8,*puVar1);
  uVar4 = 0;
  if (*pfVar2 < (float)(int)*(char *)(iVar9 + 1)) {
    if (param_11 == 0) {
      uVar11 = FUN_0034eaa0(param_7,param_8);
      lVar6 = FUN_0034b4e8(param_1,param_2,uVar11,param_9);
    }
    else {
      lVar6 = 1;
    }
    iVar7 = (int)param_6;
    lVar8 = 0;
    if (*(int *)(iVar7 + 0x984) == 0) {
      lVar6 = 1;
    }
    if (((0.0 < param_4) && ((float)(int)param_11 == 0.0)) && (lVar8 = 1, (param_9 & 0x10) != 0)) {
      lVar8 = 0;
    }
    iVar9 = iVar9 + 0x10;
    if (lVar6 != 0) {
      if (lVar8 != 0) {
        pfVar2 = (float *)FUN_003500e0(param_1,param_8,*puVar1);
        fVar10 = *pfVar2;
        *(undefined4 *)(iVar7 + 0x9b8) = param_2;
        *(int *)(iVar7 + 0x9b4) = (int)fVar10;
      }
      iVar3 = (*param_10)(param_1,param_6,param_7,param_8,param_9);
      uVar11 = FUN_0034eaa0(*(undefined4 *)(iVar9 + iVar3 * 4),param_8);
      uVar12 = FUN_0034eaa0(param_7,param_8);
      param_1 = (float)FUN_0034edb8(uVar11,uVar12,param_1,param_6,param_7,param_8,param_9);
      pfVar2 = (float *)FUN_003500e0(param_8,*puVar1);
      *pfVar2 = (float)iVar3;
    }
    uVar11 = *puVar1;
    if (lVar8 == 0) {
      pfVar2 = (float *)FUN_003500e0(param_8,uVar11);
      uVar4 = FUN_0034d960(param_1,param_2,param_3,param_5,param_6,
                           *(undefined4 *)(iVar9 + (int)*pfVar2 * 4),param_8,param_9);
    }
    else {
      param_4 = param_1 / param_4;
      if (-1 < *(int *)(iVar7 + 0x9b4)) {
        pfVar2 = (float *)FUN_003500e0(param_8,uVar11);
        if (*(int *)(iVar7 + 0x9b4) == (int)*pfVar2) {
          uVar11 = *puVar1;
        }
        else {
          if (param_4 < 1.0) {
            uVar4 = FUN_0034d960(*(undefined4 *)(iVar7 + 0x9b8),*(undefined4 *)(iVar7 + 0x9b8),
                                 param_3,(1.0 - param_4) * param_5,param_6,
                                 *(undefined4 *)(iVar9 + *(int *)(iVar7 + 0x9b4) * 4),param_8,
                                 param_9);
            pfVar2 = (float *)FUN_003500e0(param_8,*puVar1);
            uVar5 = FUN_0034d960(param_1,param_2,param_3,param_4 * param_5,param_6,
                                 *(undefined4 *)(iVar9 + (int)*pfVar2 * 4),param_8,param_9);
            uVar4 = FUN_00346230(param_4,param_6,uVar4,uVar5,param_9);
            return uVar4;
          }
          uVar11 = *puVar1;
        }
      }
      pfVar2 = (float *)FUN_003500e0(param_8,uVar11);
      uVar4 = FUN_0034d960(param_1,param_2,param_3,param_5,param_6,
                           *(undefined4 *)(iVar9 + (int)*pfVar2 * 4),param_8,param_9);
    }
  }
  return uVar4;
}


// ==== FUN_0034bfb8 @ 0034bfb8 ====

void FUN_0034bfb8(void)

{
  FUN_0034bc30();
  return;
}


// ==== FUN_0034bfe8 @ 0034bfe8 ====

undefined8
FUN_0034bfe8(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  if (*(char *)((int)param_6 + 1) == '\0') {
    uVar1 = 0;
  }
  else {
    fVar2 = (float)FUN_0034eaa0(param_6,param_7);
    param_1 = (fVar2 - 1.0) - param_1;
    fVar2 = (float)FUN_0034eaa0(param_6,param_7);
    uVar1 = FUN_0034b910(param_1,(fVar2 - 1.0) - param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8 ^ 2);
  }
  return uVar1;
}


// ==== FUN_0034c0c8 @ 0034c0c8 ====

float FUN_0034c0c8(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7)

{
  if ((param_7 & 0x68) == 0) {
    param_2 = param_2 * (param_3 / param_1);
    FUN_0034eda0((param_2 - param_3) / param_4);
    param_3 = param_2;
  }
  return param_3;
}


// ==== FUN_0034c128 @ 0034c128 ====

undefined8
FUN_0034c128(float param_1,float param_2,float param_3,undefined4 param_4,float param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = (int)param_7;
  if (*(char *)(iVar3 + 1) < '\x02') {
    return 0;
  }
  uVar8 = *(undefined4 *)(iVar3 + 0x10);
  uVar4 = *(undefined4 *)(iVar3 + 0x14);
  if (param_3 <= 0.0) {
    if ((param_9 & 8) == 0) {
      uVar4 = FUN_0034eaa0(param_7,param_8);
      uVar7 = FUN_0034eaa0(uVar8,param_8);
      fVar9 = (float)FUN_0034c0c8(uVar4,uVar7,param_1,param_4,param_6,param_7,param_9);
    }
    else {
      fVar5 = (float)FUN_0034eaa0(param_7,param_8);
      fVar9 = (float)FUN_0034eaa0(uVar8,param_8);
      fVar9 = fVar9 * (param_1 / fVar5);
    }
    fVar5 = (float)FUN_0034eaa0(param_7,param_8);
    fVar6 = (float)FUN_0034eaa0(uVar8,param_8);
    uVar1 = FUN_0034d960(fVar9,fVar6 * (param_2 / fVar5),param_4,param_5,param_6,uVar8,param_8,
                         param_9);
    fVar5 = (float)FUN_0034eaa0(param_7,param_8);
    fVar6 = (float)FUN_0034eaa0(uVar8,param_8);
    uVar4 = uVar8;
    if (fVar5 == fVar6) {
      return uVar1;
    }
  }
  else {
    fVar9 = 1.0;
    if (param_3 < 1.0) {
      fVar5 = (float)FUN_0034eaa0(uVar8,param_8);
      fVar6 = (float)FUN_0034eaa0(uVar4,param_8);
      iVar3 = (int)param_6;
      if (fVar5 == fVar6) {
        fVar9 = fVar9 - param_3;
        if (*(int *)(iVar3 + 0x994) != 0) {
          FUN_00351ae0(fVar9);
        }
        uVar1 = FUN_0034d960(param_1,param_2,param_4,param_5 * fVar9,param_6,uVar8,param_8,param_9);
        if ((*(int *)(iVar3 + 0x994) != 0) && (FUN_00351ad0(), *(int *)(iVar3 + 0x994) != 0)) {
          FUN_00351ae0(param_3);
        }
        uVar2 = FUN_0034d960(param_1,param_2,param_4,param_5 * param_3,param_6,uVar4,param_8,param_9
                            );
        if (*(int *)(iVar3 + 0x994) != 0) {
          FUN_00351ad0();
        }
      }
      else {
        if (param_10 == 0) {
          fVar9 = (float)FUN_0034eaa0(uVar8,param_8);
          fVar5 = (float)FUN_0034eaa0(uVar4,param_8);
          uVar7 = uVar8;
          if (fVar9 <= fVar5) {
            uVar7 = uVar4;
          }
          fVar9 = (float)FUN_0034eaa0(uVar7,param_8);
        }
        else {
          fVar9 = (float)FUN_0034eaa0(uVar8,param_8);
          fVar5 = (float)FUN_0034eaa0(uVar4,param_8);
          fVar6 = (float)FUN_0034eaa0(uVar8,param_8);
          fVar9 = fVar9 + (fVar5 - fVar6) * param_3;
        }
        fVar5 = (float)FUN_0034eaa0(uVar8,param_8);
        FUN_00347238(param_1,param_2,fVar9 / fVar5,param_4,param_6,uVar8,param_8,param_9 | 0x20);
        fVar5 = (float)FUN_0034eaa0(uVar4,param_8);
        FUN_00347238(param_1,param_2,fVar9 / fVar5,param_4,param_6,uVar4,param_8,param_9 | 0x20);
        if (param_10 == 0) {
          fVar9 = (float)FUN_0034eaa0(uVar8,param_8);
          fVar5 = (float)FUN_0034eaa0(uVar4,param_8);
          uVar7 = uVar8;
          if (fVar9 <= fVar5) {
            uVar7 = uVar4;
          }
          fVar9 = (float)FUN_0034eaa0(uVar7,param_8);
        }
        else {
          fVar9 = (float)FUN_0034eaa0(uVar8,param_8);
          fVar5 = (float)FUN_0034eaa0(uVar4,param_8);
          fVar6 = (float)FUN_0034eaa0(uVar8,param_8);
          fVar9 = fVar9 + (fVar5 - fVar6) * param_3;
        }
        if ((param_9 & 8) == 0) {
          uVar7 = FUN_0034eaa0(param_7,param_8);
          fVar5 = (float)FUN_0034c0c8(uVar7,fVar9,param_1,param_4,param_6,param_7,param_9);
        }
        else {
          fVar5 = (float)FUN_0034eaa0(param_7,param_8);
          fVar5 = fVar9 * (param_1 / fVar5);
        }
        fVar6 = (float)FUN_0034eaa0(param_7,param_8);
        fVar10 = fVar9 * (param_2 / fVar6);
        fVar6 = (float)FUN_0034eaa0(uVar8,param_8);
        fVar6 = fVar9 / fVar6;
        if (*(int *)(iVar3 + 0x994) != 0) {
          FUN_00351ae0(1.0 - param_3,*(int *)(iVar3 + 0x994),uVar8);
        }
        uVar1 = FUN_00347238(fVar5,fVar10,fVar6,param_4,param_6,uVar8,param_8,param_9);
        if ((*(int *)(iVar3 + 0x994) != 0) && (FUN_00351ad0(), *(int *)(iVar3 + 0x994) != 0)) {
          FUN_00351ae0(param_3);
        }
        fVar6 = (float)FUN_0034eaa0(uVar4,param_8);
        uVar2 = FUN_00347238(fVar5,fVar10,fVar9 / fVar6,param_4,param_6,uVar4,param_8,param_9);
        if (*(int *)(iVar3 + 0x994) != 0) {
          FUN_00351ad0();
        }
        fVar6 = (float)FUN_0034eaa0(param_7,param_8);
        if (fVar6 != fVar9) {
          uVar8 = FUN_0034eaa0(param_7,param_8,uVar2);
          FUN_0034edb8(fVar9,uVar8,fVar5,param_6,param_7,param_8,param_9);
        }
      }
      uVar1 = FUN_00346230(param_3,param_6,uVar1,uVar2,param_9);
      return uVar1;
    }
    if ((param_9 & 8) == 0) {
      uVar8 = FUN_0034eaa0(param_7,param_8);
      uVar7 = FUN_0034eaa0(uVar4,param_8);
      fVar9 = (float)FUN_0034c0c8(uVar8,uVar7,param_1,param_4,param_6,param_7,param_9);
    }
    else {
      fVar5 = (float)FUN_0034eaa0(param_7,param_8);
      fVar9 = (float)FUN_0034eaa0(uVar4,param_8);
      fVar9 = fVar9 * (param_1 / fVar5);
    }
    fVar5 = (float)FUN_0034eaa0(param_7,param_8);
    fVar6 = (float)FUN_0034eaa0(uVar4,param_8);
    uVar1 = FUN_0034d960(fVar9,fVar6 * (param_2 / fVar5),param_4,param_5,param_6,uVar4,param_8,
                         param_9);
    fVar5 = (float)FUN_0034eaa0(param_7,param_8);
    fVar6 = (float)FUN_0034eaa0(uVar4,param_8);
    if (fVar5 == fVar6) {
      return uVar1;
    }
  }
  uVar8 = FUN_0034eaa0(uVar4,param_8);
  uVar4 = FUN_0034eaa0(param_7,param_8);
  FUN_0034edb8(uVar8,uVar4,fVar9,param_6,param_7,param_8,param_9);
  return uVar1;
}


// ==== FUN_0034c7d8 @ 0034c7d8 ====

void FUN_0034c7d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)param_6 + 8);
  FUN_0034e758();
  puVar2 = (undefined4 *)FUN_003500e0(param_7,*(undefined4 *)(iVar1 + 0xc));
  FUN_0034c128(param_1,param_2,*puVar2,param_3,param_4,param_5,param_6,param_7,param_8,1);
  return;
}


// ==== FUN_0034c898 @ 0034c898 ====

void FUN_0034c898(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,int param_6)

{
  FUN_0034c128(param_1,param_2,**(undefined4 **)(param_6 + 8),param_3,param_4);
  return;
}


// ==== FUN_0034c8c8 @ 0034c8c8 ====

long FUN_0034c8c8(undefined8 param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  float fVar6;
  
  fVar6 = (float)FUN_00348a38(*(undefined4 *)(*(int *)(param_2 + 8) + 4),param_1);
  lVar4 = (long)*(char *)(param_2 + 1);
  if ((lVar4 != 0) && (lVar3 = 0, 0 < lVar4)) {
    piVar5 = (int *)(param_2 + 0x10);
    do {
      pfVar1 = *(float **)(*piVar5 + 0xc);
      iVar2 = (int)lVar3;
      if (pfVar1 == (float *)0x0) {
        lVar3 = (long)(iVar2 + 1);
      }
      else if (*pfVar1 <= fVar6) {
        if (fVar6 <= pfVar1[1]) {
          return lVar3;
        }
        lVar3 = (long)(iVar2 + 1);
      }
      else {
        lVar3 = (long)(iVar2 + 1);
      }
      piVar5 = piVar5 + 1;
    } while (lVar3 < lVar4);
  }
  return 0;
}


// ==== FUN_0034c968 @ 0034c968 ====

void FUN_0034c968(void)

{
  FUN_0034bc30();
  return;
}


// ==== FUN_0034c998 @ 0034c998 ====

undefined8
FUN_0034c998(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,int param_5
            )

{
  undefined8 uVar1;
  
  if (*(char *)(param_5 + 1) < '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00347238(param_1,param_2,**(undefined4 **)(param_5 + 8),param_3,param_4,
                         *(undefined4 *)(param_5 + 0x10));
  }
  return uVar1;
}


// ==== FUN_0034c9d8 @ 0034c9d8 ====

undefined8
FUN_0034c9d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,int param_5
            )

{
  undefined8 uVar1;
  
  if (*(char *)(param_5 + 1) < '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00347280(param_1,param_2,**(undefined4 **)(param_5 + 8),param_3,param_4,
                         *(undefined4 *)(param_5 + 0x10));
  }
  return uVar1;
}


// ==== FUN_0034ca18 @ 0034ca18 ====

undefined8 FUN_0034ca18(float param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  if (*(char *)(param_3 + 1) < '\x01') {
    uVar1 = 0;
  }
  else {
    fVar2 = (*(float **)(param_3 + 8))[1];
    param_1 = param_1 + **(float **)(param_3 + 8);
    if (param_1 <= fVar2) {
      fVar2 = param_1;
    }
    uVar1 = FUN_0034d960(fVar2,param_2,*(undefined4 *)(param_3 + 0x10));
  }
  return uVar1;
}


// ==== FUN_0034ca68 @ 0034ca68 ====

long FUN_0034ca68(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  if (*(char *)(param_2 + 1) < '\x01') {
    lVar3 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    iVar4 = (int)param_1;
    *(undefined4 *)(iVar4 + 0x960) = *puVar1;
    *(undefined4 *)(iVar4 + 0x964) = puVar1[1];
    *(undefined4 *)(iVar4 + 0x968) = puVar1[2];
    lVar3 = FUN_0034d960(param_1,uVar2);
    if (lVar3 != 0) {
      FUN_00343bc0(*puVar1,puVar1[1],puVar1[2],lVar3);
    }
  }
  return lVar3;
}


// ==== FUN_0034cae8 @ 0034cae8 ====

undefined8
FUN_0034cae8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((param_8 & 0x20) == 0) {
    if ('\0' < *(char *)((int)param_6 + 1)) {
      iVar1 = *(int *)((int)param_6 + 0x10);
      if (((((param_8 & 8) == 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x10) != 0)) &&
         ((iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x10), iVar2 != 0 &&
          (iVar2 = *(int *)(iVar2 + 0x10), iVar2 != 0)))) {
        uVar4 = FUN_0034eaa0(param_6,param_7);
        FUN_003487f0(param_1,param_2,uVar4,iVar2,param_5,param_8);
      }
      uVar3 = FUN_0034d960(param_1,param_2,param_3,param_4,param_5,iVar1,param_7,param_8);
      return uVar3;
    }
  }
  return 0;
}


// ==== FUN_0034cc00 @ 0034cc00 ====

undefined8
FUN_0034cc00(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  param_2 = param_1 - param_2;
  if (*(char *)(param_6 + 1) < '\x02') {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_6 + 0x10);
    uVar2 = *(undefined4 *)(param_6 + 0x14);
    uVar6 = FUN_0034eaa0(uVar1,param_7);
    fVar7 = (float)FUN_0034b498(param_1,uVar6);
    uVar6 = FUN_0034eaa0(uVar2,param_7);
    fVar8 = (float)FUN_0034b498(param_1,uVar6);
    if (*(char *)(param_6 + 1) < '\x03') {
      uVar3 = FUN_0034d960(fVar7,fVar7 - param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
      uVar4 = FUN_0034d960(fVar8,fVar8 - param_2,param_3,param_4,param_5,uVar2,param_7,param_8);
      uVar3 = FUN_00346668(param_5,uVar3,uVar4,param_8);
    }
    else {
      uVar6 = *(undefined4 *)(param_6 + 0x18);
      uVar9 = FUN_0034eaa0(uVar6,param_7);
      fVar10 = (float)FUN_0034b498(param_1,uVar9);
      uVar3 = FUN_0034d960(fVar7,fVar7 - param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
      uVar4 = FUN_0034d960(fVar8,fVar8 - param_2,param_3,param_4,param_5,uVar2,param_7,param_8);
      uVar5 = FUN_0034d960(fVar10,fVar10 - param_2,param_3,param_4,param_5,uVar6,param_7,param_8);
      uVar4 = FUN_00346940(param_5,uVar4,uVar5,param_8);
      uVar3 = FUN_00346668(param_5,uVar3,uVar4,param_8);
    }
  }
  return uVar3;
}


// ==== FUN_0034ce20 @ 0034ce20 ====

undefined8
FUN_0034ce20(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  param_2 = param_1 - param_2;
  if (*(char *)(param_6 + 1) < '\x02') {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_6 + 0x10);
    uVar2 = *(undefined4 *)(param_6 + 0x14);
    uVar6 = FUN_0034eaa0(uVar1,param_7);
    fVar7 = (float)FUN_0034b498(param_1,uVar6);
    uVar6 = FUN_0034eaa0(uVar2,param_7);
    fVar8 = (float)FUN_0034b498(param_1,uVar6);
    if (*(char *)(param_6 + 1) < '\x03') {
      uVar3 = FUN_0034d960(fVar7,fVar7 - param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
      uVar4 = FUN_0034d960(fVar8,fVar8 - param_2,param_3,param_4,param_5,uVar2,param_7,param_8);
      uVar3 = FUN_00346940(param_5,uVar3,uVar4,param_8);
    }
    else {
      uVar6 = *(undefined4 *)(param_6 + 0x18);
      uVar9 = FUN_0034eaa0(uVar6,param_7);
      fVar10 = (float)FUN_0034b498(param_1,uVar9);
      uVar3 = FUN_0034d960(fVar7,fVar7 - param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
      uVar4 = FUN_0034d960(fVar8,fVar8 - param_2,param_3,param_4,param_5,uVar2,param_7,param_8);
      uVar5 = FUN_0034d960(fVar10,fVar10 - param_2,param_3,param_4,param_5,uVar6,param_7,param_8);
      uVar4 = FUN_00346940(param_5,uVar4,uVar5,param_8);
      uVar3 = FUN_00346940(param_5,uVar3,uVar4,param_8);
    }
  }
  return uVar3;
}


// ==== FUN_0034d040 @ 0034d040 ====

undefined8 FUN_0034d040(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 1) < '\x01') {
    uVar1 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(param_2 + 8);
    uVar1 = FUN_0034d960(param_1,*(undefined4 *)(param_2 + 0x10));
    uVar1 = FUN_00346cb0(uVar2,param_1,uVar1,param_4);
  }
  return uVar1;
}


// ==== FUN_0034d0b0 @ 0034d0b0 ====

undefined8
FUN_0034d0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  puVar1 = *(undefined4 **)(param_6 + 8);
  if (*(char *)(param_6 + 1) < '\x01') {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_6 + 0x10);
    fVar4 = (float)FUN_00348a38(*puVar1,param_5);
    fVar4 = (fVar4 - (float)puVar1[1]) / (float)puVar1[2];
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    else if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    uVar3 = FUN_0034d960(param_1,param_2,param_3,param_4,param_5,uVar2,param_7,param_8);
    uVar3 = FUN_00346cb0(fVar4,param_5,uVar3,param_8);
  }
  return uVar3;
}


// ==== FUN_0034d1e0 @ 0034d1e0 ====

undefined8
FUN_0034d1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,int param_6,undefined8 param_7,ulong param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_6 + 1) < '\x02') {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_6 + 0x14);
    uVar2 = *(undefined4 *)(param_6 + 0x10);
    uVar5 = FUN_0034eaa0(uVar1,param_7);
    uVar5 = FUN_0034b498(param_1,uVar5);
    uVar3 = FUN_0034d960(param_1,param_2,param_3,param_4,param_5,uVar2,param_7,param_8);
    uVar4 = FUN_0034d960(uVar5,param_2,param_3,param_4,param_5,uVar1,param_7,param_8 | 0x40);
    uVar3 = FUN_00346510(param_5,uVar3,uVar4,param_8);
  }
  return uVar3;
}


// ==== FUN_0034d300 @ 0034d300 ====

void FUN_0034d300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  iVar1 = *(int *)((int)param_6 + 8);
  uVar5 = FUN_0034eaa0(param_6,param_7);
  lVar2 = FUN_0034b4e8(param_1,param_2,uVar5,param_8);
  if (lVar2 != 0) {
    pfVar3 = (float *)FUN_003500e0(param_7,*(undefined4 *)(iVar1 + 4));
    fVar10 = *pfVar3;
    if (*(float *)(iVar1 + 8) < *(float *)(iVar1 + 0xc)) {
      pfVar3 = (float *)FUN_003500e0(param_7,*(undefined4 *)(iVar1 + 4));
      fVar8 = (float)FUN_00351a08();
      *pfVar3 = *(float *)(iVar1 + 8) +
                (*(float *)(iVar1 + 0xc) - *(float *)(iVar1 + 8)) * fVar8 + fVar8;
    }
    else {
      puVar4 = (undefined4 *)FUN_003500e0(param_7,*(undefined4 *)(iVar1 + 4));
      *puVar4 = *(undefined4 *)(iVar1 + 8);
    }
    pfVar3 = (float *)FUN_003500e0(param_7,*(undefined4 *)(iVar1 + 4));
    if (*pfVar3 != fVar10) {
      fVar8 = 1.0;
      fVar6 = (float)FUN_0034eaa0(param_6,param_7);
      fVar10 = fVar10 + fVar8;
      fVar7 = (float)FUN_0034eaa0(param_6,param_7);
      fVar10 = (fVar6 / fVar10) * (fVar7 + fVar8);
      uVar5 = FUN_0034eaa0(param_6,param_7);
      param_1 = FUN_0034edb8(fVar10,uVar5,param_1,param_5,param_6,param_7,param_8);
      pfVar3 = (float *)FUN_003500e0(param_7,*(undefined2 *)((int)param_6 + 2));
      *pfVar3 = fVar10;
    }
  }
  fVar10 = (float)FUN_0034eaa0(param_6,param_7);
  fVar8 = (float)FUN_0034eaa0(param_6,param_7);
  fVar10 = fVar10 / (fVar8 + 1.0);
  uVar5 = FUN_0034b498(param_1,fVar10);
  uVar9 = FUN_0034b498(param_2,fVar10);
  FUN_0034b910(uVar5,uVar9,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// ==== FUN_0034d530 @ 0034d530 ====

undefined8
FUN_0034d530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  
  iVar6 = (int)param_5;
  if (*(char *)(iVar6 + 1) < '\x01') {
    return 0;
  }
  puVar3 = *(undefined4 **)(iVar6 + 8);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (puVar3[2] == 0) {
    uVar7 = FUN_0034eaa0(param_5,param_6);
    lVar4 = FUN_0034b4e8(param_1,param_2,uVar7,param_7);
    if (lVar4 == 0) {
      piVar1 = *(int **)(iVar6 + 0xc);
      goto LAB_0034d5d8;
    }
  }
  FUN_0034e828(param_4,param_5,param_6);
  piVar1 = *(int **)(iVar6 + 0xc);
LAB_0034d5d8:
  if (*piVar1 == 0) {
    fVar8 = (float)FUN_0034eaa0(iVar6,param_6);
    pfVar2 = (float *)FUN_003500e0(param_6,*puVar3);
    fVar8 = (float)(int)((fVar8 - 1.0) * *pfVar2 + 1.0);
  }
  else {
    fVar8 = (float)FUN_0034eaa0(iVar6,param_6);
    pfVar2 = (float *)FUN_003500e0(param_6,*puVar3);
    fVar8 = fVar8 * *pfVar2;
  }
  if (fVar8 == 0.0) {
    fVar8 = 1.0;
  }
  uVar7 = FUN_0034eaa0(param_5,param_6);
  uVar7 = FUN_0034c0c8(uVar7,fVar8,param_1,param_3,param_4,param_5,param_7);
  puVar3 = (undefined4 *)FUN_003500e0(param_6,*puVar3);
  uVar5 = FUN_00347238(uVar7,param_2,*puVar3,param_3,param_4,iVar6,param_6,param_7);
  uVar9 = FUN_0034eaa0(param_5,param_6);
  FUN_0034edb8(fVar8,uVar9,uVar7,param_4,param_5,param_6,param_7);
  return uVar5;
}


// ==== FUN_0034d738 @ 0034d738 ====

undefined8
FUN_0034d738(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = (int)param_6;
  if (*(char *)(iVar5 + 1) < '\x01') {
    uVar4 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(iVar5 + 8);
    uVar2 = *(undefined4 *)(iVar5 + 0x10);
    FUN_00348a38(*puVar1,param_5);
    FUN_0034e908(param_5,param_6,param_7);
    fVar6 = (float)FUN_0034eaa0(uVar2,param_7);
    pfVar3 = (float *)FUN_003500e0(param_7,puVar1[3]);
    fVar6 = (fVar6 - 1.0) * *pfVar3;
    uVar4 = FUN_0034d960(fVar6,fVar6,param_3,param_4,param_5,uVar2,param_7,param_8);
  }
  return uVar4;
}


// ==== FUN_0034d838 @ 0034d838 ====

void FUN_0034d838(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  
  FUN_0034e7c0();
  puVar1 = (undefined4 *)FUN_003500e0(param_7,*(undefined4 *)(*(int *)((int)param_6 + 8) + 0xc));
  FUN_0034c128(param_1,param_2,*puVar1,param_3,param_4,param_5,param_6,param_7,param_8,0);
  return;
}


// ==== FUN_0034d8f0 @ 0034d8f0 ====

undefined8 FUN_0034d8f0(int param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x9c0) == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x9c0))();
  }
  return uVar1;
}


// ==== FUN_0034d920 @ 0034d920 ====

void FUN_0034d920(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0034b910();
  FUN_00347430(param_1,uVar1,param_2);
  return;
}


// ==== FUN_0034d960 @ 0034d960 ====

void FUN_0034d960(undefined8 param_1,byte *param_2)

{
  DAT_003d339c = DAT_003d339c + 1;
  (*(code *)(&PTR_FUN_003d33a0)[*param_2 & 0x3f])();
  return;
}


// ==== FUN_0034d9b0 @ 0034d9b0 ====

undefined8
FUN_0034d9b0(undefined4 param_1,undefined4 param_2,float param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,int *param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (float)param_7[2];
  if (((*(uint *)param_4 & 0x1000000) != 0) && (bVar1 = 0.5 < fVar7, fVar7 = 0.0, bVar1)) {
    fVar7 = 1.0;
  }
  uVar2 = FUN_00291f58(0.0 - fVar7);
  lVar3 = FUN_002919f8(uVar2,0);
  if (lVar3 < 0) {
    uVar2 = FUN_00291468(0,uVar2);
  }
  lVar3 = FUN_002919f8(uVar2,0x3f50624de0000000);
  if (lVar3 < 0) {
    iVar5 = *param_7;
  }
  else {
    fVar6 = 1.0 - fVar7;
    uVar2 = FUN_00291f58(fVar6,param_4);
    lVar3 = FUN_002919f8(uVar2,0);
    if (lVar3 < 0) {
      uVar2 = FUN_00291468(0,uVar2);
    }
    lVar3 = FUN_002919f8(uVar2,0x3f50624de0000000);
    if (-1 < lVar3) {
      lVar3 = FUN_0034d960((float)*param_7,param_1,param_2,param_3 * fVar6,param_4,param_5,param_6,
                           param_8);
      lVar4 = FUN_0034d960((float)param_7[1],param_1,param_2,param_3 * fVar7,param_4,param_5,param_6
                           ,param_8);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        uVar2 = FUN_00346230(fVar7,param_4,lVar3,lVar4,param_8);
        return uVar2;
      }
      return 0;
    }
    iVar5 = param_7[1];
  }
  uVar2 = FUN_0034d960((float)iVar5,param_1,param_2,param_3,param_4,param_5,param_6,param_8);
  return uVar2;
}


// ==== FUN_0034dbf8 @ 0034dbf8 ====

undefined4 FUN_0034dbf8(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x9c4) == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x9c4))();
  }
  return uVar1;
}


// ==== FUN_0034dc68 @ 0034dc68 ====

float FUN_0034dc68(undefined8 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)FUN_003487d0(iVar1);
    if (*(int *)(iVar1 + 8) == 0) {
      fVar2 = (float)(int)fVar2;
    }
  }
  return fVar2;
}


// ==== FUN_0034dcc8 @ 0034dcc8 ====

undefined4 FUN_0034dcc8(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 1) < '\x02') {
    uVar1 = 0x3f800000;
  }
  else {
    FUN_0034e530(param_1,*(undefined4 *)(param_2 + 0x10));
    uVar1 = FUN_00350ac8(param_1,*(undefined4 *)(param_2 + 0x14),param_3,
                         *(undefined4 *)(param_2 + 8));
  }
  return uVar1;
}


// ==== FUN_0034dd38 @ 0034dd38 ====

float FUN_0034dd38(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  lVar2 = (long)*(char *)(param_2 + 1);
  if (lVar2 == 0) {
    fVar5 = 1.0;
  }
  else {
    puVar3 = (undefined4 *)(param_2 + 0x10);
    if (0 < lVar2) {
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        fVar4 = (float)FUN_0034e530(param_1,uVar1,param_3);
        lVar2 = (long)((int)lVar2 + -1);
        fVar5 = fVar5 + fVar4;
      } while (lVar2 != 0);
    }
  }
  return fVar5;
}


// ==== FUN_0034ddd0 @ 0034ddd0 ====

undefined4 FUN_0034ddd0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  lVar3 = (long)*(char *)(param_2 + 1);
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (lVar3 == 0) {
    uVar6 = 0x3f800000;
  }
  else {
    puVar5 = (undefined4 *)(param_2 + 0x10);
    if (0 < lVar3) {
      uVar6 = *puVar5;
      puVar4 = puVar5;
      while( true ) {
        puVar4 = puVar4 + 1;
        FUN_0034e530(param_1,uVar6,param_3);
        lVar3 = (long)((int)lVar3 + -1);
        if (lVar3 == 0) break;
        uVar6 = *puVar4;
      }
    }
    pfVar2 = (float *)FUN_003500e0(param_3,*puVar1);
    uVar6 = FUN_0034eaa0(puVar5[(int)*pfVar2],param_3);
  }
  return uVar6;
}


// ==== FUN_0034de98 @ 0034de98 ====

undefined4 FUN_0034de98(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 1) < '\x01') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = FUN_0034e530(param_1,*(undefined4 *)(param_2 + 0x10));
  }
  return uVar1;
}


// ==== FUN_0034ded0 @ 0034ded0 ====

float FUN_0034ded0(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  lVar1 = (long)*(char *)(param_2 + 1);
  if (lVar1 == 0) {
    fVar4 = 1.0;
  }
  else {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    if (0 < lVar1) {
      do {
        fVar3 = (float)FUN_0034e530(param_1,*puVar2,param_3);
        if (fVar4 < fVar3) {
          fVar4 = fVar3;
        }
        lVar1 = (long)((int)lVar1 + -1);
        puVar2 = puVar2 + 1;
      } while (lVar1 != 0);
    }
  }
  return fVar4;
}


// ==== FUN_0034df70 @ 0034df70 ====

float FUN_0034df70(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(param_2 + 1) < '\x01') {
    fVar2 = 1.0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x10);
    FUN_0034e530(param_1,iVar1,param_3);
    fVar3 = **(float **)(param_2 + 8);
    if (**(int **)(iVar1 + 0xc) == 0) {
      fVar2 = (float)FUN_0034eaa0(iVar1,param_3);
      fVar2 = (float)(int)((fVar2 - 1.0) * fVar3 + 1.0);
    }
    else {
      fVar2 = (float)FUN_0034eaa0(iVar1,param_3);
      fVar2 = fVar2 * fVar3;
    }
    if (fVar2 == 0.0) {
      fVar2 = 1.0;
    }
  }
  return fVar2;
}


// ==== FUN_0034e060 @ 0034e060 ====

float FUN_0034e060(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_2 + 1) < '\x01') {
    fVar3 = 1.0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x10);
    FUN_0034e530(param_1,iVar1,param_3);
    pfVar2 = (float *)FUN_003500e0(param_3,**(undefined4 **)(param_2 + 8));
    fVar4 = *pfVar2;
    if (**(int **)(iVar1 + 0xc) == 0) {
      fVar3 = (float)FUN_0034eaa0(iVar1,param_3);
      fVar3 = (float)(int)((fVar3 - 1.0) * fVar4 + 1.0);
    }
    else {
      fVar3 = (float)FUN_0034eaa0(iVar1,param_3);
      fVar3 = fVar3 * fVar4;
    }
    if (fVar3 == 0.0) {
      fVar3 = 1.0;
    }
  }
  return fVar3;
}


// ==== FUN_0034e158 @ 0034e158 ====

float FUN_0034e158(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_2 + 1) < '\x01') {
    fVar4 = 1.0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    fVar4 = 1.0;
    FUN_0034e530(param_1,uVar1,param_3);
    pfVar2 = *(float **)(param_2 + 8);
    fVar5 = (pfVar2[1] - *pfVar2) + fVar4;
    fVar3 = (float)FUN_0034eaa0(uVar1,param_3);
    if (fVar3 < fVar5) {
      fVar4 = (float)FUN_0034eaa0(uVar1,param_3);
    }
    else {
      fVar4 = (pfVar2[1] - *pfVar2) + fVar4;
    }
  }
  return fVar4;
}


// ==== FUN_0034e220 @ 0034e220 ====

float FUN_0034e220(float param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(param_3 + 1) < '\x02') {
    fVar3 = 1.0;
  }
  else {
    fVar1 = (float)FUN_0034e530(param_2,*(undefined4 *)(param_3 + 0x10),param_4);
    fVar2 = (float)FUN_0034e530(param_2,*(undefined4 *)(param_3 + 0x14),param_4);
    fVar3 = fVar1;
    if (param_5 == 0) {
      if (fVar1 <= fVar2) {
        fVar3 = fVar2;
      }
    }
    else if (((0.0 < param_1) && (fVar3 = fVar2, param_1 < 1.0)) && (fVar3 = fVar1, fVar1 != fVar2))
    {
      fVar3 = fVar1 + (fVar2 - fVar1) * param_1;
    }
  }
  return fVar3;
}


// ==== FUN_0034e328 @ 0034e328 ====

void FUN_0034e328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_003500e0(param_3,*(undefined4 *)(*(int *)((int)param_2 + 8) + 0xc));
  FUN_0034e220(*puVar1,param_1,param_2,param_3,1);
  return;
}


// ==== FUN_0034e388 @ 0034e388 ====

void FUN_0034e388(undefined8 param_1,int param_2)

{
  FUN_0034e220(**(undefined4 **)(param_2 + 8));
  return;
}


// ==== FUN_0034e3c0 @ 0034e3c0 ====

float FUN_0034e3c0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  fVar3 = (float)FUN_0034dd38();
  pfVar2 = (float *)FUN_003500e0(param_3,*(undefined4 *)(iVar1 + 4));
  return *pfVar2 * fVar3 + fVar3;
}


// ==== FUN_0034e418 @ 0034e418 ====

undefined4 FUN_0034e418(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 1) < '\x01') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = FUN_0034e530(param_1,*(undefined4 *)(param_2 + 0x10),param_3);
    if ('\x01' < *(char *)(param_2 + 1)) {
      FUN_0034e530(param_1,*(undefined4 *)(param_2 + 0x14),param_3);
    }
  }
  return uVar1;
}


// ==== FUN_0034e4a8 @ 0034e4a8 ====

void FUN_0034e4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_003500e0(param_3,*(undefined4 *)(*(int *)((int)param_2 + 8) + 0xc));
  FUN_0034e220(*puVar1,param_1,param_2,param_3,0);
  return;
}


// ==== FUN_0034e508 @ 0034e508 ====

undefined4 FUN_0034e508(void)

{
  FUN_0034de98();
  return 0x3f800000;
}


// ==== FUN_0034e530 @ 0034e530 ====

undefined4 FUN_0034e530(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f800000;
  if ((*param_2 & 0x3f) < 0x1a) {
    uVar2 = (*(code *)(&PTR_FUN_003d3408)[*param_2 & 0x3f])();
  }
  if (*(short *)(param_2 + 2) < 0x46) {
    puVar1 = (undefined4 *)FUN_003500e0(param_3);
    *puVar1 = uVar2;
  }
  else {
    *(undefined4 *)(param_2 + 4) = uVar2;
  }
  return uVar2;
}


// ==== FUN_0034e5c0 @ 0034e5c0 ====

undefined8
FUN_0034e5c0(float param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,ulong param_6)

{
  int iVar1;
  float *pfVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_a0 [16];
  
  iVar1 = *(int *)((int)param_4 + 0x10);
  pfVar2 = *(float **)((int)param_4 + 8);
  FUN_0034f420(auStack_a0,param_3,iVar1);
  if (iVar1 != 0) {
    if (*(short *)((int)param_3 + 8) == -1) {
      uVar3 = FUN_003487e0(iVar1);
      *(undefined2 *)((int)param_3 + 8) = uVar3;
    }
    if ((param_6 & 0x20) == 0) {
      if ((param_6 & 8) == 0) {
        uVar6 = FUN_0034eaa0(param_4,param_5);
        FUN_003487f0(param_1,param_2,uVar6,iVar1,param_3,param_6);
        fVar5 = *pfVar2;
      }
      else {
        fVar5 = *pfVar2;
      }
      param_1 = param_1 + fVar5;
      if (pfVar2[1] + 1.0 <= param_1) {
        param_1 = pfVar2[1] + 0.999;
      }
      fVar5 = pfVar2[2];
      uVar6 = FUN_0034eaa0(param_4,param_5);
      uVar4 = FUN_0034b5a8(iVar1);
      if ((param_6 & 4) == 0) {
        uVar4 = FUN_0034f430(param_1,param_2,uVar6,fVar5,auStack_a0,uVar4,param_6);
        return uVar4;
      }
      uVar4 = FUN_0034f668(param_1,param_2,uVar6,fVar5,auStack_a0,uVar4,param_6);
      return uVar4;
    }
  }
  return 0;
}


// ==== FUN_0034e758 @ 0034e758 ====

void FUN_0034e758(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  fVar3 = (float)FUN_00348a38(*puVar1,param_1);
  pfVar2 = (float *)FUN_003500e0(param_3,puVar1[3]);
  *pfVar2 = (fVar3 - (float)puVar1[1]) / (float)puVar1[2];
  return;
}


// ==== FUN_0034e7c0 @ 0034e7c0 ====

void FUN_0034e7c0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  fVar3 = (float)FUN_00348a38(*puVar1,param_1);
  pfVar2 = (float *)FUN_003500e0(param_3,puVar1[3]);
  *pfVar2 = (fVar3 - (float)puVar1[1]) / (float)puVar1[2];
  return;
}


// ==== FUN_0034e828 @ 0034e828 ====

void FUN_0034e828(undefined8 param_1,int param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 8);
  fVar3 = (float)FUN_00348a38(puVar2[1],param_1);
  if (fVar3 == 0.0) {
    puVar2 = (undefined4 *)FUN_003500e0(param_3,*puVar2);
    *puVar2 = 0x447a0000;
  }
  else {
    fVar4 = 10000.0;
    pfVar1 = (float *)FUN_003500e0(param_3,*puVar2);
    *pfVar1 = 1.0 / fVar3;
    pfVar1 = (float *)FUN_003500e0(param_3,*puVar2);
    if (fVar4 < *pfVar1) {
      pfVar1 = (float *)FUN_003500e0(param_3,*puVar2);
      *pfVar1 = fVar4;
    }
  }
  return;
}


// ==== FUN_0034e908 @ 0034e908 ====

void FUN_0034e908(undefined8 param_1,int param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  puVar2 = *(undefined4 **)(param_2 + 8);
  fVar5 = 0.0;
  fVar4 = (float)FUN_00348a38(*puVar2,param_1);
  pfVar1 = (float *)FUN_003500e0(param_3,puVar2[3]);
  *pfVar1 = (fVar4 - (float)puVar2[1]) / (float)puVar2[2];
  pfVar1 = (float *)FUN_003500e0(param_3,puVar2[3]);
  uVar3 = puVar2[3];
  if (*pfVar1 < fVar5) {
    pfVar1 = (float *)FUN_003500e0(param_3,uVar3);
    *pfVar1 = fVar5;
    uVar3 = puVar2[3];
  }
  pfVar1 = (float *)FUN_003500e0(param_3,uVar3);
  if (1.0 < *pfVar1) {
    puVar2 = (undefined4 *)FUN_003500e0(param_3,puVar2[3]);
    *puVar2 = 0x3f800000;
  }
  return;
}


// ==== FUN_0034e9e0 @ 0034e9e0 ====

void FUN_0034e9e0(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  
  bVar1 = *param_2;
  uVar2 = bVar1 & 0x3f;
  if (uVar2 < 0x1a) {
    if (*(code **)(&DAT_003d3470 + uVar2 * 4) != (code *)0x0) {
      (**(code **)(&DAT_003d3470 + uVar2 * 4))();
    }
    if (((bVar1 & 0x3f) != 0) && (lVar4 = 0, '\0' < (char)param_2[1])) {
      pbVar3 = param_2 + 0x10;
      do {
        lVar4 = (long)((int)lVar4 + 1);
        FUN_0034e9e0(param_1,*(undefined4 *)pbVar3,param_3);
        pbVar3 = pbVar3 + 4;
      } while (lVar4 < (char)param_2[1]);
    }
  }
  return;
}


// ==== FUN_0034eaa0 @ 0034eaa0 ====

undefined4 FUN_0034eaa0(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 2) < 0x46) {
    puVar1 = (undefined4 *)FUN_003500e0(param_2);
    uVar2 = *puVar1;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  return uVar2;
}


// ==== FUN_0034eae0 @ 0034eae0 ====

void FUN_0034eae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 8;
  param_1[1] = param_2;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  param_1[0x21] = param_3;
  param_1[0x26d] = 0xffffffff;
  param_1[0x26e] = 0xbf800000;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x72) = 0xffff;
  param_1[5] = 0;
  param_1[6] = 0xbf800000;
  param_1[7] = 0x3f800000;
  param_1[0x254] = 0;
  param_1[0x266] = 0;
  param_1[600] = 0x3f800000;
  param_1[0x25a] = 0x3f800000;
  param_1[0x259] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[0x263] = 0;
  param_1[0x262] = 0;
  param_1[0x265] = 0;
  param_1[0x25c] = 0;
  param_1[0x260] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}


// ==== FUN_0034eb88 @ 0034eb88 ====

undefined4 FUN_0034eb88(int param_1,int *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  lVar2 = (**(code **)(*param_2 + 0xc))
                    ((int)param_2 + (int)*(short *)(*param_2 + 8),0x11c,&uStack_50);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00350060(lVar2);
    *(undefined4 *)(param_1 + 0x98c) = uVar1;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    lVar2 = (**(code **)(*param_2 + 0xc))
                      ((int)param_2 + (int)*(short *)(*param_2 + 8),0x11c,&uStack_50);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00350060(lVar2);
      *(undefined4 *)(param_1 + 0x988) = uVar1;
      if (*(int *)(param_1 + 0x994) == 0) {
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        lVar2 = (**(code **)(*param_2 + 0xc))
                          ((int)param_2 + (int)*(short *)(*param_2 + 8),0x84,&uStack_50);
        if (lVar2 == 0) {
          return 0;
        }
        uVar1 = FUN_00351a40(lVar2);
        *(undefined4 *)(param_1 + 0x994) = uVar1;
      }
      puVar3 = (undefined4 *)(param_1 + 0x8c);
      iVar4 = 0;
      do {
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        lVar2 = (**(code **)(*param_2 + 0xc))
                          ((int)param_2 + (int)*(short *)(*param_2 + 8),0x11c,&uStack_50);
        if (lVar2 == 0) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        uVar1 = FUN_00350060(lVar2);
        *puVar3 = uVar1;
        puVar3 = puVar3 + 10;
      } while (iVar4 < 8);
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_0034ecd8 @ 0034ecd8 ====

bool FUN_0034ecd8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x98c);
  if (iVar1 != 0) {
    (**(code **)(*param_2 + 0x14))((int)param_2 + (int)*(short *)(*param_2 + 0x10),iVar1,0);
    *(undefined4 *)(param_1 + 0x98c) = 0;
  }
  piVar3 = (int *)(param_1 + 0x8c);
  iVar2 = *piVar3;
  while( true ) {
    if (iVar2 != 0) {
      (**(code **)(*param_2 + 0x14))((int)param_2 + (int)*(short *)(*param_2 + 0x10),iVar2,0);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 10;
    if (param_1 + 0x1cc <= (int)piVar3) break;
    iVar2 = *piVar3;
  }
  return iVar1 != 0;
}


// ==== FUN_0034ed88 @ 0034ed88 ====

void FUN_0034ed88(float param_1)

{
  DAT_003d4460 = DAT_003d4460 + param_1;
  return;
}


// ==== FUN_0034eda0 @ 0034eda0 ====

void FUN_0034eda0(float param_1)

{
  DAT_003d4464 = DAT_003d4464 + param_1;
  return;
}


// ==== FUN_0034edb8 @ 0034edb8 ====

float FUN_0034edb8(float param_1,float param_2,float param_3,uint *param_4,int param_5,
                  undefined8 param_6,ulong param_7)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  uVar3 = param_7 & 1;
  if (uVar3 != 0) {
    FUN_0034ed88(param_2 - param_1);
  }
  if ((param_7 & 2) == 0) {
    if (uVar3 == 0) {
      uVar1 = *param_4;
      goto LAB_0034ee48;
    }
  }
  else if (uVar3 == 1) {
    uVar1 = *param_4;
    goto LAB_0034ee48;
  }
  param_3 = param_1 - 1.0;
  uVar1 = *param_4;
LAB_0034ee48:
  *param_4 = uVar1 | 0x14;
  pfVar2 = (float *)FUN_003500e0(param_6,*(undefined2 *)(param_5 + 2));
  *pfVar2 = param_1;
  return param_3;
}


// ==== FUN_0034ee90 @ 0034ee90 ====

undefined8 FUN_0034ee90(float param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  puVar3 = (uint *)param_2;
  if (puVar3[0x266] != 0) {
    *puVar3 = *puVar3 & 0xfffffffe;
  }
  uVar1 = *puVar3;
  if ((uVar1 & 0x81) != 0) {
    return 0;
  }
  if (puVar3[3] == 0) {
    puVar3[5] = (uint)((float)puVar3[5] + param_1);
    return 0;
  }
  uVar4 = 0xfffffffffffffffc;
  *puVar3 = uVar1 & 0xfffffffd;
  if ((uVar1 & 8) == 0) {
    fVar7 = (float)puVar3[5];
    if ((short)puVar3[0x72] == 0) {
      iVar2 = 7;
    }
    else {
      iVar2 = (short)puVar3[0x72] + -1;
    }
    fVar6 = fVar7 + param_1;
    puVar3[5] = (uint)fVar6;
    if (puVar3[0x266] == 0) {
      fVar5 = (float)puVar3[7] - 1.0;
      puVar3[5] = (int)fVar6 * (uint)(fVar6 < fVar5) | (int)fVar5 * (uint)(fVar6 >= fVar5);
    }
    if (puVar3[iVar2 * 10 + 0x29] == 1) {
      fVar6 = (float)FUN_0034b498(puVar3[5],(float)puVar3[7] + (float)puVar3[iVar2 * 10 + 0x27]);
      fVar5 = (float)FUN_0034b498(puVar3[6],(float)puVar3[7] + (float)puVar3[iVar2 * 10 + 0x27]);
    }
    else {
      fVar6 = (float)FUN_0034b498(puVar3[5],puVar3[7]);
      fVar5 = (float)FUN_0034b498(puVar3[6],puVar3[7]);
    }
    if (fVar6 < fVar5) {
      uVar1 = puVar3[0x266];
    }
    else if ((float)puVar3[7] <= param_1) {
      uVar1 = puVar3[0x266];
    }
    else if (((float)puVar3[5] <= ((float)puVar3[7] - 1.0) - param_1) ||
            (uVar1 = 0, uVar4 = 0xfffffffffffffffc, puVar3[0x266] != 0)) goto LAB_0034f03c;
    if (uVar1 == 0) {
      puVar3[5] = (uint)fVar7;
      uVar1 = *puVar3 | 1;
    }
    else {
      uVar1 = *puVar3 | 7;
    }
    *puVar3 = uVar1;
    uVar4 = 0xfffffffffffffffe;
  }
  else {
    *puVar3 = uVar1 & 0xfffffff5;
  }
LAB_0034f03c:
  uVar4 = FUN_00350650(param_2,uVar4);
  return uVar4;
}


// ==== FUN_0034f080 @ 0034f080 ====

undefined8 FUN_0034f080(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  float fVar5;
  
  DAT_003d4460 = 0.0;
  DAT_003d4464 = 0.0;
  puVar4 = (uint *)param_1;
  uVar1 = *puVar4;
  uVar3 = (int)uVar1 >> 6 & 1;
  if ((uVar1 & 0x800) != 0) {
    uVar3 = uVar3 | 0x80;
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar3 = uVar3 | 4;
  }
  if ((float)puVar4[5] < (float)puVar4[7]) {
    uVar3 = uVar3 | 0x10;
  }
  *(undefined2 *)(puVar4 + 2) = 0xffff;
  puVar4[600] = 0x3f800000;
  puVar4[0x25a] = 0x3f800000;
  puVar4[0x259] = 0x3f800000;
  puVar4[0x260] = puVar4[0x25c];
  uVar2 = FUN_00350f28(puVar4[5],puVar4[6],param_1,puVar4[3],puVar4[0x263],uVar3,(short)puVar4[0x72]
                      );
  if ((short)puVar4[2] == -1) {
    *(undefined2 *)(puVar4 + 2) = 0;
  }
  FUN_00343c28(param_2,uVar2);
  FUN_00351030(param_1,puVar4[3],puVar4[0x263]);
  if ((float)puVar4[5] != (float)puVar4[6]) {
    puVar4[5] = (uint)((float)puVar4[5] - DAT_003d4460);
  }
  fVar5 = (float)puVar4[5] + DAT_003d4464;
  puVar4[6] = (uint)fVar5;
  puVar4[5] = (uint)fVar5;
  return uVar2;
}


// ==== FUN_0034f1c0 @ 0034f1c0 ====

void FUN_0034f1c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  float fVar4;
  
  DAT_003d4460 = 0.0;
  DAT_003d4464 = 0.0;
  piVar3 = (int *)param_1;
  iVar1 = *piVar3;
  FUN_003461e0();
  *(undefined2 *)(piVar3 + 2) = 0xffff;
  piVar3[600] = 0x3f800000;
  piVar3[0x25a] = 0x3f800000;
  piVar3[0x259] = 0x3f800000;
  uVar2 = FUN_00350f28(piVar3[5],piVar3[6],param_1,piVar3[3],piVar3[0x263],iVar1 >> 6 & 1U | 4,
                       (short)piVar3[0x72]);
  if ((short)piVar3[2] == -1) {
    *(undefined2 *)(piVar3 + 2) = 0;
  }
  FUN_00343c28(param_2,uVar2);
  FUN_00351030(param_1,piVar3[3],piVar3[0x263]);
  if ((float)piVar3[5] != (float)piVar3[6]) {
    piVar3[5] = (int)((float)piVar3[5] - DAT_003d4460);
  }
  fVar4 = (float)piVar3[5] + DAT_003d4464;
  piVar3[6] = (int)fVar4;
  piVar3[5] = (int)fVar4;
  return;
}


// ==== FUN_0034f2e0 @ 0034f2e0 ====

float FUN_0034f2e0(int param_1)

{
  if (*(float *)(param_1 + 0x9c8) != 0.0) {
    return *(float *)(param_1 + 0x9c8) * 59.94;
  }
  return 59.94;
}


// ==== FUN_0034f360 @ 0034f360 ====

undefined8 FUN_0034f360(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[2] = param_4;
  puVar1[1] = param_4 + -1;
  FUN_00343fc8(puVar1 + 4);
  FUN_00343fc8(puVar1 + 0xc);
  FUN_00343fc8(puVar1 + 0x14);
  FUN_00343fc8(puVar1 + 0x1c);
  FUN_00343fc8(puVar1 + 0x24);
  FUN_00344008(puVar1 + 4);
  FUN_00344008(puVar1 + 0xc);
  FUN_00344008(puVar1 + 0x14);
  FUN_00344008(puVar1 + 0x1c);
  FUN_00344008(puVar1 + 0x24);
  return param_1;
}


// ==== FUN_0034f420 @ 0034f420 ====

undefined8 FUN_0034f420(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)param_1 = param_2;
  ((undefined4 *)param_1)[1] = param_3;
  return param_1;
}


// ==== FUN_0034f430 @ 0034f430 ====

long FUN_0034f430(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_1a0 [16];
  undefined4 auStack_190 [4];
  undefined4 auStack_180 [4];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  
  FUN_0034fe70(auStack_1a0);
  FUN_0034fe70(auStack_190);
  FUN_0034fe70(auStack_180);
  FUN_0034fe88(param_1,param_3,param_4,auStack_1a0,param_6);
  FUN_0034ffa0(param_1,param_3,param_4,auStack_190,param_6);
  FUN_0034ffa0(param_2,param_3,param_4,auStack_180,param_6);
  FUN_0034f360(&uStack_170,auStack_190[0],auStack_180[0],param_6);
  lVar1 = FUN_0034f980(param_5,auStack_160,uStack_170,param_7);
  if (lVar1 != 0) {
    lVar1 = FUN_0034faf8(param_5,auStack_100,auStack_160,auStack_160);
    if (lVar1 != 0) {
      lVar1 = FUN_0034fa60(param_5,auStack_e0,auStack_160,uStack_16c,param_7);
      if ((lVar1 != 0) &&
         (lVar1 = FUN_0034fc80(param_5,auStack_140,auStack_160,auStack_190,param_7), lVar1 != 0)) {
        lVar1 = FUN_0034fb58(param_5,auStack_160,auStack_1a0,param_7);
        if (lVar1 == 0) {
          return 0;
        }
        if ((param_1 == 0.0) && (param_2 == 0.0)) {
          FUN_00344020(lVar1,auStack_140);
        }
        else {
          lVar2 = FUN_0034fc80(param_5,auStack_120,auStack_160,auStack_180,param_7);
          if (lVar2 == 0) {
            return 0;
          }
          FUN_00343a30(lVar1,auStack_140,auStack_120,auStack_100,auStack_e0,0);
        }
        FUN_0034fe10(param_5,lVar1);
        return lVar1;
      }
    }
  }
  return 0;
}


// ==== FUN_0034f668 @ 0034f668 ====

long FUN_0034f668(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_90 [32];
  
  FUN_00343fc8(auStack_90);
  lVar1 = FUN_0034f730(param_1,param_2,param_3,param_4,param_5,auStack_90,param_6,param_7);
  lVar2 = 0;
  if ((lVar1 != 0) && (lVar2 = FUN_003461f0(), lVar2 != 0)) {
    FUN_00344020(lVar2,auStack_90);
  }
  return lVar2;
}


// ==== FUN_0034f730 @ 0034f730 ====

undefined8
FUN_0034f730(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 auStack_1a0 [16];
  undefined4 auStack_190 [4];
  undefined4 auStack_180 [4];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  
  FUN_0034fe70(auStack_1a0);
  FUN_0034fe70(auStack_190);
  FUN_0034fe70(auStack_180);
  FUN_0034fe88(param_1,param_3,param_4,auStack_1a0,param_7);
  FUN_0034ffa0(param_1,param_3,param_4,auStack_190,param_7);
  FUN_0034ffa0(param_2,param_3,param_4,auStack_180,param_7);
  FUN_0034f360(&uStack_170,auStack_190[0],auStack_180[0],param_7);
  lVar1 = FUN_0034f980(param_5,auStack_160,uStack_170,param_8);
  if (lVar1 != 0) {
    lVar1 = FUN_0034faf8(param_5,auStack_100,auStack_160,auStack_160);
    if (lVar1 != 0) {
      lVar1 = FUN_0034fa60(param_5,auStack_e0,auStack_160,uStack_16c,param_8);
      if (lVar1 != 0) {
        lVar1 = FUN_0034fc80(param_5,auStack_140,auStack_160,auStack_190,param_8);
        if (lVar1 == 0) {
          return 0;
        }
        if ((param_1 == 0.0) && (param_2 == 0.0)) {
          FUN_00344020(param_6,auStack_140);
        }
        else {
          lVar1 = FUN_0034fc80(param_5,auStack_120,auStack_160,auStack_180,param_8);
          if (lVar1 == 0) {
            return 0;
          }
          FUN_00343a30(param_6,auStack_140,auStack_120,auStack_100,auStack_e0,0);
        }
        FUN_0034fe10(param_5,param_6);
        return param_6;
      }
    }
  }
  return 0;
}


// ==== FUN_0034f950 @ 0034f950 ====

void FUN_0034f950(undefined4 *param_1,int param_2)

{
  FUN_003474f8((float)param_2,*param_1,param_1[1]);
  return;
}


// ==== FUN_0034f980 @ 0034f980 ====

void FUN_0034f980(undefined4 *param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(param_1[1] + 0x10) < 0) {
    FUN_00344008(param_2);
  }
  else {
    FUN_00347558((float)param_3,param_2,*param_1,param_1[1]);
  }
  return;
}


// ==== FUN_0034f9d0 @ 0034f9d0 ====

long FUN_0034f9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_0034f950(param_1,param_3,param_4);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 4);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 < 0) {
      FUN_00344008(lVar3);
    }
    else {
      FUN_003438e0(lVar3,(int)lVar3 + iVar2 * 0x20 + 0x20,param_2,*(undefined4 *)(iVar1 + 0xc));
    }
  }
  return lVar3;
}


// ==== FUN_0034fa60 @ 0034fa60 ====

undefined8
FUN_0034fa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [32];
  
  FUN_00343fc8(auStack_80);
  lVar1 = FUN_0034f980(param_1,auStack_80,param_4,param_5);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_003438e0(param_2,auStack_80,param_3,
                         *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xc));
  }
  return uVar2;
}


// ==== FUN_0034faf8 @ 0034faf8 ====

void FUN_0034faf8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [32];
  
  FUN_00343fe0(auStack_60,param_4);
  FUN_003438e0(param_2,auStack_60,param_3,*(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
  return;
}


// ==== FUN_0034fb58 @ 0034fb58 ====

long FUN_0034fb58(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = *param_3;
  if (iVar1 == param_3[1]) {
    lVar2 = FUN_0034f9d0();
  }
  else {
    iVar5 = iVar1;
    if ((ABS(0.0 - (float)param_3[2]) < 0.001) ||
       (iVar5 = param_3[1], ABS(1.0 - (float)param_3[2]) < 0.001)) {
      lVar2 = FUN_0034f9d0(param_1,param_2,iVar5,param_4);
    }
    else {
      lVar3 = FUN_0034f9d0(param_1,param_2,iVar1,param_4);
      lVar4 = FUN_0034f9d0(param_1,param_2,param_3[1],param_4);
      lVar2 = lVar4;
      if ((lVar3 != 0) && (lVar2 = lVar3, lVar4 != 0)) {
        lVar2 = FUN_00346230(param_3[2],*(undefined4 *)param_1,lVar3,lVar4,param_4);
      }
    }
  }
  return lVar2;
}


// ==== FUN_0034fc80 @ 0034fc80 ====

undefined8
FUN_0034fc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  
  puVar4 = auStack_c0;
  if (*param_4 == param_4[1]) {
    uVar1 = FUN_0034fa60();
  }
  else if (ABS(0.0 - (float)param_4[2]) < 0.001) {
    uVar1 = FUN_0034fa60(param_1,param_2,param_3,*param_4,param_5);
  }
  else if (ABS(1.0 - (float)param_4[2]) < 0.001) {
    uVar1 = FUN_0034fa60(param_1,param_2,param_3,param_4[1],param_5);
  }
  else {
    FUN_00343fc8(auStack_c0);
    FUN_00343fc8(auStack_a0);
    lVar2 = FUN_0034fa60(param_1,auStack_c0,param_3,*param_4,param_5);
    lVar3 = FUN_0034fa60(param_1,auStack_a0,param_3,param_4[1],param_5);
    if (lVar2 == 0) {
      puVar4 = auStack_a0;
      if (lVar3 == 0) {
        return 0;
      }
    }
    else if (lVar3 != 0) {
      uVar1 = FUN_00344178(param_4[2],param_2,auStack_c0,auStack_a0);
      return uVar1;
    }
    uVar1 = FUN_00344020(param_2,puVar4);
  }
  return uVar1;
}


// ==== FUN_0034fe10 @ 0034fe10 ====

undefined8 FUN_0034fe10(int *param_1,undefined8 param_2)

{
  float fVar1;
  
  if ((*param_1 != 0) && (fVar1 = *(float *)(*param_1 + 0x60), fVar1 != 1.0)) {
    FUN_00343bc0(fVar1,fVar1,fVar1,param_2);
  }
  return param_2;
}


// ==== FUN_0034fe70 @ 0034fe70 ====

undefined8 FUN_0034fe70(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return param_1;
}


// ==== FUN_0034fe88 @ 0034fe88 ====

void FUN_0034fe88(float param_1,float param_2,float param_3,int *param_4,long param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)param_5 + -1;
  param_1 = param_1 / param_3;
  if ((param_5 < 2) || (param_1 < (float)iVar1)) {
    iVar1 = (int)param_1;
    *param_4 = iVar1;
    if ((int)param_2 == 0) {
      trap(7);
    }
    param_4[2] = (int)(param_1 - (float)iVar1);
    param_4[1] = (iVar1 + 1) % (int)param_2;
  }
  else {
    fVar2 = (float)(int)param_5;
    *param_4 = iVar1;
    fVar3 = (param_1 - fVar2) + 1.0;
    param_4[1] = 0;
    if ((fVar3 == 0.0) || (fVar2 = (param_2 / param_3 - fVar2) + 1.0, fVar2 == 0.0)) {
      param_4[2] = 0;
    }
    else {
      param_4[2] = (int)(fVar3 / fVar2);
    }
  }
  *(bool *)(param_4 + 3) = param_4[1] < *param_4;
  return;
}


// ==== FUN_0034ffa0 @ 0034ffa0 ====

void FUN_0034ffa0(float param_1,undefined4 param_2,float param_3,int *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 / param_3;
  if (param_5 < 2) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  else if (param_1 < 0.0) {
    param_4[2] = (int)param_1;
    param_4[1] = 1;
    *param_4 = 0;
  }
  else {
    iVar2 = (int)param_5 + -1;
    iVar1 = (int)param_5 + -2;
    if ((float)iVar2 < param_1) {
      param_4[1] = iVar2;
    }
    else {
      iVar1 = (int)param_1;
      param_4[1] = iVar1 + 1;
    }
    *param_4 = iVar1;
    param_4[2] = (int)(param_1 - (float)iVar1);
  }
  *(bool *)(param_4 + 3) = param_4[1] < *param_4;
  return;
}


// ==== FUN_00350060 @ 00350060 ====

undefined8 FUN_00350060(undefined8 param_1)

{
  *(undefined4 *)((int)param_1 + 0x118) = 0;
  memset(param_1,0,0x118);
  return param_1;
}


// ==== FUN_00350098 @ 00350098 ====

void FUN_00350098(int param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  return;
}


// ==== FUN_003500a8 @ 003500a8 ====

void FUN_003500a8(long param_1,long param_2)

{
  if (param_1 != param_2) {
    *(undefined4 *)((int)param_1 + 0x118) = *(undefined4 *)((int)param_2 + 0x118);
    memcpy(param_1,param_2,*(int *)((int)param_2 + 0x118) << 2);
  }
  return;
}


// ==== FUN_003500e0 @ 003500e0 ====

int FUN_003500e0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x118);
  uVar3 = param_2 + 1;
  if (uVar1 < uVar3) {
    puVar2 = (undefined4 *)(uVar1 * 4 + param_1);
    do {
      *puVar2 = 0;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < uVar3);
  }
  if (*(uint *)(param_1 + 0x118) < uVar3) {
    *(uint *)(param_1 + 0x118) = uVar3;
  }
  return param_1 + param_2 * 4;
}


// ==== FUN_00350140 @ 00350140 ====

void FUN_00350140(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 7;
  *(undefined4 *)(param_1 + 0x88) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x8c);
  while( true ) {
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1[2] = 0x3f800000;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[5] = 1;
    puVar1[7] = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    FUN_00350098(*puVar1);
    if (iVar2 < 0) break;
    puVar1[9] = 0;
    puVar1 = puVar1 + 10;
  }
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  return;
}


// ==== FUN_003501d8 @ 003501d8 ====

void FUN_003501d8(undefined4 param_1,undefined4 param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_3 + *(short *)(param_3 + 0x1c8) * 0x28 + 0x88);
  *puVar5 = *(undefined4 *)(param_3 + 0xc);
  FUN_003500a8(puVar5[1],*(undefined4 *)(param_3 + 0x98c));
  puVar5[2] = param_1;
  puVar5[3] = *(undefined4 *)(param_3 + 0x1c);
  if (param_4 == 0) {
    *(undefined2 *)(puVar5 + 9) = 0;
  }
  else {
    uVar4 = ((undefined8 *)param_4)[1];
    *(undefined8 *)(puVar5 + 4) = *(undefined8 *)param_4;
    *(undefined8 *)(puVar5 + 6) = uVar4;
    *(undefined2 *)(puVar5 + 9) = 1;
  }
  puVar5[8] = param_2;
  iVar2 = (*(ushort *)(param_3 + 0x1c8) + 1) * 0x10000;
  iVar3 = iVar2 >> 0x10;
  iVar1 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  *(short *)(param_3 + 0x1c8) = (short)((uint)iVar2 >> 0x10) + (short)(iVar1 >> 3) * -8;
  return;
}


// ==== FUN_003502c0 @ 003502c0 ====

int * FUN_003502c0(int param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = (long)(param_2 + -1);
  piVar2 = (int *)0x0;
  if (lVar1 < 0) {
    lVar1 = (long)(param_2 + 7);
  }
  if (lVar1 != *(short *)(param_1 + 0x1c8)) {
    piVar2 = (int *)(param_1 + (int)lVar1 * 0x28 + 0x88);
    if (*piVar2 == 0) {
      piVar2 = (int *)0x0;
    }
    else if ((short)piVar2[9] == 0) {
      piVar2 = (int *)0x0;
    }
  }
  return piVar2;
}


// ==== FUN_00350308 @ 00350308 ====

float FUN_00350308(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_2 + 0x18);
  iVar2 = (int)param_1;
  if (fVar3 < 0.0) {
    uVar1 = FUN_003432e8(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(param_2 + 0x14));
    FUN_0034e9e0(param_1,uVar1,*(undefined4 *)(iVar2 + 0x988));
    FUN_0034e530(param_1,uVar1,*(undefined4 *)(iVar2 + 0x988));
    fVar3 = (float)FUN_0034eaa0(uVar1,*(undefined4 *)(iVar2 + 0x988));
    if (*(float *)(param_2 + 0x18) == -1.0) {
      fVar4 = *(float *)(iVar2 + 0x14) / *(float *)(iVar2 + 0x1c);
      fVar3 = (fVar4 - (float)(int)fVar4) * fVar3;
    }
    else {
      fVar3 = -*(float *)(param_2 + 0x18) * fVar3;
    }
  }
  else if (fVar3 == 0.0) {
    fVar3 = *(float *)(iVar2 + 0x14);
  }
  else {
    fVar3 = fVar3 - 1.0;
  }
  return fVar3;
}


// ==== FUN_00350410 @ 00350410 ====

void FUN_00350410(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)param_1;
  uVar1 = FUN_003432e8(puVar3[1]);
  if (puVar3[4] == param_2) {
    uVar2 = puVar3[0x25c];
  }
  else {
    *puVar3 = *puVar3 | 0x20;
    uVar2 = puVar3[0x25c];
  }
  puVar3[4] = param_2;
  puVar3[0x25c] = uVar2 + 1;
  puVar3[3] = uVar1;
  FUN_00350098(puVar3[0x263]);
  *puVar3 = *puVar3 & 0xfffffffe | 0x410;
  FUN_0034e9e0(param_1,puVar3[3],puVar3[0x263]);
  FUN_0034e530(param_1,puVar3[3],puVar3[0x263]);
  FUN_00351030(param_1,puVar3[3],puVar3[0x263]);
  puVar3[0x26d] = 0xffffffff;
  return;
}


// ==== FUN_003504c8 @ 003504c8 ====

void FUN_003504c8(uint param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  int iVar2;
  
  if (param_4 == 0) {
    param_1 = FUN_00350308(param_2,param_3);
  }
  puVar1 = (uint *)param_2;
  iVar2 = (int)param_3;
  if ((*puVar1 & 2) == 0) {
    FUN_003501d8(puVar1[5],param_1,param_2,iVar2 + 0x1c);
  }
  else {
    FUN_003501d8(puVar1[6],param_1,param_2,iVar2 + 0x1c);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  FUN_00350410(param_2,*(undefined4 *)(iVar2 + 0x14));
  puVar1[6] = param_1;
  puVar1[5] = param_1;
  return;
}


// ==== FUN_00350570 @ 00350570 ====

void FUN_00350570(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = (int)param_2;
  puVar4 = (undefined4 *)(iVar5 + *(short *)(iVar5 + 0x1c8) * 0x28 + 0x88);
  *puVar4 = *(undefined4 *)(iVar5 + 0xc);
  FUN_003500a8(puVar4[1],*(undefined4 *)(iVar5 + 0x98c));
  puVar4[2] = *(undefined4 *)(iVar5 + 0x14);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  puVar4[8] = 0;
  puVar4[3] = uVar6;
  *(undefined2 *)(puVar4 + 9) = 0;
  iVar2 = (*(ushort *)(iVar5 + 0x1c8) + 1) * 0x10000;
  iVar3 = iVar2 >> 0x10;
  iVar1 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  *(short *)(iVar5 + 0x1c8) = (short)((uint)iVar2 >> 0x10) + (short)(iVar1 >> 3) * -8;
  FUN_00350410(param_2,param_3);
  if (param_4 != 0) {
    *(undefined4 *)(iVar5 + 0x14) = param_1;
  }
  uVar6 = *(undefined4 *)(iVar5 + 0x14);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = uVar6;
  return;
}


// ==== FUN_00350650 @ 00350650 ====

int FUN_00350650(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar6 = (uint *)param_1;
  fVar8 = (float)FUN_0034b498(puVar6[5],puVar6[7]);
  if ((*puVar6 & 0x200) != 0) {
    return 0;
  }
  fVar10 = 0.0;
  iVar7 = 0;
LAB_00350774:
  while( true ) {
    iVar2 = FUN_00343508(puVar6[1]);
    if (iVar2 <= iVar7) {
      return 0;
    }
    uVar3 = FUN_003433c8(puVar6[1],iVar7);
    puVar5 = (uint *)uVar3;
    if (*puVar5 == 0xffffffff) break;
    if (*puVar5 == puVar6[4]) {
      uVar1 = puVar6[1];
      goto LAB_00350700;
    }
    iVar7 = iVar7 + 1;
  }
  uVar1 = puVar6[1];
LAB_00350700:
  lVar4 = FUN_00343470(uVar1,puVar5[5]);
  if (lVar4 == 0) {
    iVar7 = iVar7 + 1;
    goto LAB_00350774;
  }
  if (puVar5[3] == 0xfffffffc) {
    uVar1 = puVar5[4];
  }
  else {
    if (puVar5[3] != param_2) {
      iVar7 = iVar7 + 1;
      goto LAB_00350774;
    }
    uVar1 = puVar5[4];
  }
  if (uVar1 == 0) {
    fVar9 = (float)puVar5[1];
  }
  else {
    fVar9 = (float)FUN_00352048(uVar1,param_1);
    if (fVar9 == fVar10) {
      iVar7 = iVar7 + 1;
      goto LAB_00350774;
    }
    fVar9 = (float)puVar5[1];
  }
  if (fVar9 <= fVar8) {
    if (fVar8 <= (float)puVar5[2]) {
      FUN_003504c8(0,param_1,uVar3,0);
      return iVar7 + 1;
    }
    iVar7 = iVar7 + 1;
  }
  else {
    iVar7 = iVar7 + 1;
  }
  goto LAB_00350774;
}


// ==== FUN_003507c0 @ 003507c0 ====

undefined8 FUN_003507c0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = 0;
LAB_00350854:
  iVar4 = (int)param_1;
  iVar1 = FUN_00343508(*(undefined4 *)(iVar4 + 4));
  if (iVar1 <= iVar5) {
    return 0;
  }
  uVar2 = FUN_003433c8(*(undefined4 *)(iVar4 + 4),iVar5);
  piVar3 = (int *)uVar2;
  if (*piVar3 == -1) {
    iVar1 = piVar3[5];
  }
  else {
    if (*piVar3 != *(int *)(iVar4 + 0x10)) {
      iVar5 = iVar5 + 1;
      goto LAB_00350854;
    }
    iVar1 = piVar3[5];
  }
  if (iVar1 == param_2) {
    if (piVar3[4] == 0) {
      return uVar2;
    }
    fVar6 = (float)FUN_00352048(piVar3[4],param_1);
    iVar5 = iVar5 + 1;
    if (fVar6 != 0.0) {
      return uVar2;
    }
  }
  else {
    iVar5 = iVar5 + 1;
  }
  goto LAB_00350854;
}


// ==== FUN_00350890 @ 00350890 ====

undefined4 FUN_00350890(undefined4 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = 0;
  iVar4 = (int)param_2;
  fVar6 = (float)FUN_0034b498(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x1c));
LAB_003508e8:
  do {
    iVar1 = FUN_00343508(*(undefined4 *)(iVar4 + 4));
    lVar2 = 0;
    if (iVar1 <= iVar5) goto LAB_0035095c;
    lVar2 = FUN_003433c8(*(undefined4 *)(iVar4 + 4),iVar5);
    piVar3 = (int *)lVar2;
    if (*piVar3 == -1) {
      iVar1 = piVar3[5];
    }
    else {
      if (*piVar3 != *(int *)(iVar4 + 0x10)) {
        iVar5 = iVar5 + 1;
        goto LAB_003508e8;
      }
      iVar1 = piVar3[5];
    }
    iVar5 = iVar5 + 1;
    if (((iVar1 == param_3) && ((float)piVar3[1] <= fVar6)) && (fVar6 <= (float)piVar3[2])) {
LAB_0035095c:
      if (lVar2 == 0) {
        lVar2 = 0x46c5d0;
        DAT_0046c5e8 = 0x3f800000;
        DAT_0046c5f0 = 0x41200000;
        DAT_0046c5ec = 0;
        DAT_0046c5f8 = 0;
        DAT_0046c5f4 = 0;
        DAT_0046c5d4 = 0x3f800000;
        DAT_0046c5e4 = param_3;
      }
      FUN_003504c8(param_1,param_2,lVar2,param_4);
      return 1;
    }
  } while( true );
}


// ==== FUN_003509e0 @ 003509e0 ====

void FUN_003509e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_50 = *(undefined4 *)(param_4 + 0x10);
  fStack_48 = *(float *)(param_4 + 0x1c) + 1.0;
  uStack_44 = 0xfffffffd;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_3c = param_5;
  uStack_38 = param_1;
  uStack_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_6;
  uStack_28 = param_7;
  FUN_003504c8(param_4,&uStack_50,0);
  return;
}


// ==== FUN_00350a50 @ 00350a50 ====

float FUN_00350a50(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  
  fVar1 = param_1;
  if (*(int *)(param_4 + 8) != 2) {
    if (*(int *)(param_4 + 8) == 1) {
      fVar1 = param_1 + param_3;
    }
    else {
      fVar1 = (float)((int)(param_1 / param_2) + 1) * param_2 - 1.0;
      if (param_1 + param_3 < fVar1) {
        fVar1 = param_1 + param_3;
      }
    }
  }
  return fVar1;
}


// ==== FUN_00350ac8 @ 00350ac8 ====

float FUN_00350ac8(void)

{
  float *in_a3_lo;
  float fVar1;
  
  fVar1 = (float)FUN_0034e530();
  if (in_a3_lo[3] == 1.4013e-45) {
    fVar1 = fVar1 + *in_a3_lo + in_a3_lo[1];
  }
  else if (fVar1 < in_a3_lo[1]) {
    fVar1 = in_a3_lo[1] + *in_a3_lo;
  }
  else {
    fVar1 = fVar1 + *in_a3_lo;
  }
  return fVar1;
}


// ==== FUN_00350b30 @ 00350b30 ====

void FUN_00350b30(float param_1,float param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                 short param_9)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  lVar2 = FUN_003502c0(param_4,param_8);
  if ((lVar2 == 0) || (puVar6 = (undefined4 *)lVar2, *(short *)(puVar6 + 9) == 0)) {
    fVar8 = 0.0;
    if (0.0 <= param_1) {
      fVar8 = (float)FUN_0034b498(param_1,param_3,param_4);
      param_2 = fVar8 - (param_1 - param_2);
    }
LAB_00350ce0:
    FUN_0034d960(fVar8,param_2,0x3f800000,0x3f800000,param_4,param_5,param_6,param_7);
    return;
  }
  fVar14 = param_1 - param_2;
  fVar8 = (float)puVar6[4];
  puVar7 = (uint *)param_4;
  if (param_1 - (float)puVar6[8] < fVar8) {
    puVar7[0x25c] = puVar7[0x25c] - 1;
    FUN_00350b30(((float)puVar6[2] + param_1) - (float)puVar6[8],
                 ((float)puVar6[2] + param_2) - (float)puVar6[8],puVar6[3],param_4,*puVar6,puVar6[1]
                 ,param_7 | 8,(int)param_8 + -1,*(undefined2 *)((int)puVar6 + 0x26));
    puVar7[0x25c] = puVar7[0x25c] + 1;
    return;
  }
  fVar9 = fVar8 + (float)puVar6[5];
  if (fVar9 <= param_1 - (float)puVar6[8]) {
    if (puVar6[7] != 1) {
      fVar9 = fVar8;
    }
    uVar12 = FUN_0034eaa0(param_5,param_6);
    fVar8 = (float)FUN_0034b498(param_1 - fVar9,uVar12);
    param_2 = fVar8 - fVar14;
    goto LAB_00350ce0;
  }
  fVar8 = (float)FUN_00350a50(puVar6[2],puVar6[3],puVar6 + 4);
  uVar1 = puVar7[0x25c];
  if (puVar7[0x260] == uVar1) {
    fVar9 = (float)puVar6[4];
    fVar13 = (float)puVar6[5];
    fVar10 = param_1 - (float)puVar6[8];
    fVar11 = (float)FUN_0034f2e0(param_4);
    puVar7[0x25d] = (uint)((float)puVar7[8] + ((fVar13 + fVar9) - fVar10) / fVar11);
    fVar9 = (float)FUN_0034f2e0(param_4);
    puVar7[0x25e] =
         (uint)((float)puVar7[8] - ((param_1 - (float)puVar6[8]) - (float)puVar6[4]) / fVar9);
    puVar7[0x25f] = puVar6[6];
    uVar1 = puVar7[0x25c];
  }
  puVar7[0x25c] = uVar1 - 1;
  uVar3 = FUN_00350b30(fVar8,fVar8 - fVar14,puVar6[3],param_4,*puVar6,puVar6[1],param_7 | 8,
                       (int)param_8 + -1,*(undefined2 *)((int)puVar6 + 0x26));
  puVar7[0x25c] = puVar7[0x25c] + 1;
  if (0.0 < (float)puVar6[5]) {
    fVar8 = ((param_1 - (float)puVar6[8]) - (float)puVar6[4]) / (float)puVar6[5];
  }
  else {
    fVar8 = 1.0;
  }
  if ((*puVar7 & 4) != 0) {
    fVar10 = (float)puVar6[3];
    fVar9 = (float)FUN_0034e530(param_4,*puVar6,puVar6[1]);
    if (fVar9 == fVar10) {
      iVar5 = puVar6[7];
      goto LAB_00350e4c;
    }
    puVar6[3] = fVar9;
    puVar6[2] = (float)puVar6[2] * (fVar9 / fVar10);
  }
  iVar5 = puVar6[7];
LAB_00350e4c:
  if (iVar5 == 1) {
    param_1 = 0.0;
  }
  else {
    param_1 = param_1 - (float)puVar6[4];
  }
  uVar12 = FUN_0034eaa0(param_5,param_6);
  fVar9 = (float)FUN_0034b498(param_1,uVar12);
  puVar7[600] = 0x3f800000;
  puVar7[0x25a] = 0x3f800000;
  puVar7[0x259] = 0x3f800000;
  uVar4 = FUN_0034d960(fVar9,fVar9 - fVar14,0x3f800000,0x3f800000,param_4,param_5,param_6,param_7);
  if ((*(short *)((int)puVar6 + 0x26) != 0) && (param_9 == 0)) {
    param_7 = param_7 | 0x100;
  }
  FUN_00346230(fVar8,param_4,uVar3,uVar4,param_7);
  return;
}


// ==== FUN_00350f28 @ 00350f28 ====

undefined8
FUN_00350f28(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (('\0' < (char)((byte *)param_4)[1]) || (uVar1 = 0, (*(byte *)param_4 & 0x80) == 0)) {
    puVar2 = (uint *)param_3;
    if ((*puVar2 & 4) != 0) {
      uVar3 = puVar2[7];
      *puVar2 = *puVar2 & 0xfffffffb | 0x10;
      FUN_00351030(param_3,param_4,param_5);
      param_1 = FUN_0034edb8(puVar2[7],uVar3,param_1,param_3,param_4,param_5,param_6);
    }
    uVar1 = FUN_00350b30(param_1,param_2,puVar2[7],param_3,param_4,param_5,param_6,param_7,0);
  }
  return uVar1;
}


// ==== FUN_00351030 @ 00351030 ====

uint FUN_00351030(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  puVar4 = (uint *)param_1;
  if ((*param_2 & 0x80) == 0) {
    uVar1 = *puVar4;
  }
  else {
    if ((char)param_2[1] < '\x01') {
      puVar4[7] = 0x3f800000;
      goto LAB_0035114c;
    }
    uVar1 = *puVar4;
  }
  if ((uVar1 & 0x10) == 0) {
    return puVar4[7];
  }
  fVar6 = (float)puVar4[7];
  fVar5 = (float)FUN_0034e530(param_1);
  if (fVar5 == fVar6) {
    uVar1 = *puVar4;
  }
  else {
    fVar7 = fVar5 / fVar6;
    puVar4[5] = (uint)((float)puVar4[5] +
                      (fVar5 - fVar6) * (float)(int)((float)puVar4[5] / (float)puVar4[7]));
    if ((*puVar4 & 0x400) == 0) {
      lVar3 = FUN_003502c0(param_1,(short)puVar4[0x72]);
      if (lVar3 != 0) {
        iVar2 = (int)lVar3;
        *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) * fVar7;
        *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) * fVar7;
        *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) * fVar7;
        goto LAB_00351128;
      }
      uVar1 = *puVar4;
    }
    else {
LAB_00351128:
      uVar1 = *puVar4;
    }
    *puVar4 = uVar1 & 0xfffffbff;
    uVar1 = *puVar4;
  }
  puVar4[7] = (uint)fVar5;
  *puVar4 = uVar1 & 0xffffffef;
LAB_0035114c:
  return puVar4[7];
}


// ==== FUN_00351168 @ 00351168 ====

undefined4 FUN_00351168(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_003502c0();
  uVar1 = 0;
  if (lVar2 != 0) {
    iVar3 = (int)lVar2;
    uVar1 = 0;
    if ((*(short *)(iVar3 + 0x24) != 0) &&
       (uVar1 = 1,
       *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x14) <=
       *(float *)(param_1 + 0x14) - *(float *)(iVar3 + 0x20))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_003511d0 @ 003511d0 ====

void FUN_003511d0(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 (*pauVar5) [16];
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  int *piVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  int *piVar19;
  int iVar20;
  undefined4 uVar21;
  undefined1 in_vf0 [16];
  undefined1 extraout_vf2 [16];
  undefined1 extraout_vf3 [16];
  undefined1 auVar22 [16];
  undefined1 extraout_vf4 [16];
  undefined1 auVar23 [16];
  undefined1 extraout_vf9 [16];
  undefined1 auVar24 [16];
  undefined1 extraout_vf10 [16];
  undefined1 extraout_vf11 [16];
  undefined1 extraout_vf12 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [12];
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [48];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 (*pauStack_f0) [16];
  uint uStack_ec;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e4) [16];
  undefined1 (*pauStack_e0) [16];
  undefined4 *puStack_dc;
  undefined1 (*pauStack_d8) [16];
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 *puStack_c0;
  undefined4 uStack_bc;
  
  iVar20 = (int)param_1;
  pauStack_e8 = *(undefined1 (**) [16])(iVar20 + 0x50);
  piVar8 = (int *)FUN_003489a8();
  if (*(int *)(iVar20 + 0x54) != 0) {
    piVar1 = (int *)piVar8[1];
    auVar10._4_4_ = in_zero_hi;
    auVar10._0_4_ = in_zero_lo;
    auVar10._8_4_ = in_zero_udw;
    auVar10._12_4_ = in_register_0000000c;
    auVar11._4_4_ = in_zero_hi;
    auVar11._0_4_ = in_zero_lo;
    auVar11._8_4_ = in_zero_udw;
    auVar11._12_4_ = in_register_0000000c;
    auVar10 = _pand(auVar10,auVar11);
    *(undefined4 *)*pauStack_e8 = 0x3f800000;
    *(undefined4 *)(*pauStack_e8 + 4) = 0;
    *(int *)(*pauStack_e8 + 8) = auVar10._8_4_;
    *(int *)(*pauStack_e8 + 0xc) = auVar10._12_4_;
    auVar10 = _pextlw(0x3f800000,0);
    *(int *)pauStack_e8[1] = auVar10._0_4_;
    *(int *)(pauStack_e8[1] + 4) = auVar10._4_4_;
    *(int *)(pauStack_e8[1] + 8) = auVar10._8_4_;
    *(int *)(pauStack_e8[1] + 0xc) = auVar10._12_4_;
    auVar11 = _pextlw(0,auVar10._0_8_);
    *(int *)pauStack_e8[2] = auVar11._0_4_;
    *(int *)(pauStack_e8[2] + 4) = auVar11._4_4_;
    *(int *)(pauStack_e8[2] + 8) = auVar11._8_4_;
    *(int *)(pauStack_e8[2] + 0xc) = auVar11._12_4_;
    auVar10 = _pextlw(auVar10._0_8_,0);
    *(int *)pauStack_e8[3] = auVar10._0_4_;
    *(int *)(pauStack_e8[3] + 4) = auVar10._4_4_;
    *(int *)(pauStack_e8[3] + 8) = auVar10._8_4_;
    *(int *)(pauStack_e8[3] + 0xc) = auVar10._12_4_;
    lVar14 = 1;
    pauVar18 = (undefined1 (*) [16])(param_2 + 0x40);
    *(undefined4 *)*pauStack_e8 = *(undefined4 *)(iVar20 + 0x60);
    *(undefined4 *)(pauStack_e8[1] + 4) = *(undefined4 *)(iVar20 + 0x60);
    *(undefined4 *)(pauStack_e8[2] + 8) = *(undefined4 *)(iVar20 + 0x60);
    if (1 < *piVar8) {
      pauStack_e4 = &auStack_1d0;
      pauStack_e0 = (undefined1 (*) [16])auStack_180;
      lVar15 = (long)(int)auStack_1c0;
      puStack_dc = &uStack_190;
      pauStack_d8 = (undefined1 (*) [16])auStack_130;
      pauVar5 = pauStack_e8;
      do {
        pauVar16 = pauVar5 + 4;
        piVar19 = piVar1 + 2;
        iStack_d0 = (int)lVar14;
        uStack_cc = (undefined4)((ulong)lVar14 >> 0x20);
        puStack_c0 = (undefined4 *)lVar15;
        uStack_bc = (undefined4)((ulong)lVar15 >> 0x20);
        pauVar17 = pauStack_e8 + *piVar19 * 4;
        FUN_003478f0(param_1,lVar14,&pauStack_f0,&uStack_ec);
        lVar15 = CONCAT44(uStack_bc,puStack_c0);
        if (pauStack_f0 == (undefined1 (*) [16])0x0) {
          _lqc2(*pauVar18);
          _vcallms(0x1a8);
          _vnop();
          auVar10 = _sqc2(extraout_vf2);
          *pauVar16 = auVar10;
          auVar10 = _sqc2(extraout_vf3);
          pauVar5[5] = auVar10;
          auVar10 = _sqc2(extraout_vf4);
          pauVar5[6] = auVar10;
          if ((piVar1[3] & 4U) == 0) {
            *(undefined4 *)pauVar5[7] = *(undefined4 *)pauVar18[1];
            *(undefined4 *)(pauVar5[7] + 4) = *(undefined4 *)(pauVar18[1] + 4);
            uVar21 = *(undefined4 *)(pauVar18[1] + 8);
          }
          else {
            iVar2 = *(int *)(((int)piVar19 - piVar8[1] >> 3) * 4 + *(int *)(iVar20 + 0x70));
            *(undefined4 *)pauVar5[7] = *(undefined4 *)(iVar2 + 0x30);
            *(undefined4 *)(pauVar5[7] + 4) = *(undefined4 *)(iVar2 + 0x34);
            uVar21 = *(undefined4 *)(iVar2 + 0x38);
          }
          *(undefined4 *)(pauVar5[7] + 0xc) = 0x3f800000;
          *(undefined4 *)(pauVar5[7] + 8) = uVar21;
          auVar10 = extraout_vf9;
          auVar11 = extraout_vf10;
          auVar22 = extraout_vf11;
          auVar23 = extraout_vf12;
          if ((piVar1[3] & 8U) != 0) {
            auVar10 = _lqc2(*(undefined1 (*) [16])
                             (*(int *)(((int)piVar19 - piVar8[1] >> 3) * 4 + *(int *)(iVar20 + 0x70)
                                      ) + 0x40));
            auVar11 = _lqc2(*pauVar16);
            auVar11 = _vmulbc(auVar11,auVar10);
            auVar22 = _lqc2(pauVar5[5]);
            auVar11 = _sqc2(auVar11);
            *pauVar16 = auVar11;
            auVar23 = _vmulbc(auVar22,auVar10);
            auVar11 = _lqc2(pauVar5[6]);
            auVar23 = _sqc2(auVar23);
            pauVar5[5] = auVar23;
            auVar23 = _vmulbc(auVar11,auVar10);
            auVar24 = _sqc2(auVar23);
            pauVar5[6] = auVar24;
          }
          if (pauVar17 == (undefined1 (*) [16])0x0) {
            lVar9 = (long)*piVar8;
          }
          else {
            if ((piVar1[3] & 1U) == 0) {
              _lqc2(*pauVar16);
              _lqc2(pauVar5[5]);
              _lqc2(pauVar5[6]);
              _lqc2(pauVar5[7]);
              _lqc2(*pauVar17);
              _lqc2(pauVar17[1]);
              _lqc2(pauVar17[2]);
              _lqc2(pauVar17[3]);
              _vcallms(0);
              _vnop();
              auVar10 = _sqc2(auVar10);
              *pauVar16 = auVar10;
              auVar10 = _sqc2(auVar11);
              pauVar5[5] = auVar10;
              auVar10 = _sqc2(auVar22);
              pauVar5[6] = auVar10;
              auVar10 = _sqc2(auVar23);
              pauVar5[7] = auVar10;
            }
            else {
              auVar11 = _lqc2(*pauVar17);
              auVar22 = _vaddbc(in_vf0,in_vf0);
              auVar10 = _vmul(auVar11,auVar11);
              _vaddabc(auVar10,auVar10);
              _vmaddabc(auVar22,auVar10);
              auVar10 = _vmaddbc(auVar22,auVar10);
              _vrsqrt(in_vf0,auVar10);
              auVar10 = _qmfc2(auVar10._0_4_);
              uVar21 = _vwaitq();
              auVar11 = _vmulq(auVar11,uVar21);
              auStack_170 = _sqc2(auVar11);
              if (auVar10._0_4_ < 9.313226e-10) {
                auStack_170._4_4_ = in_zero_hi;
                auStack_170._0_4_ = in_zero_lo;
                auStack_170._8_4_ = in_zero_udw;
                auStack_170._12_4_ = in_register_0000000c;
              }
              auVar11 = _lqc2(pauVar17[1]);
              auVar22 = _vaddbc(in_vf0,in_vf0);
              auVar10 = _vmul(auVar11,auVar11);
              _vaddabc(auVar10,auVar10);
              _vmaddabc(auVar22,auVar10);
              auVar10 = _vmaddbc(auVar22,auVar10);
              _vrsqrt(in_vf0,auVar10);
              auVar10 = _qmfc2(auVar10._0_4_);
              uVar21 = _vwaitq();
              auVar11 = _vmulq(auVar11,uVar21);
              auStack_160 = _sqc2(auVar11);
              if (auVar10._0_4_ < 9.313226e-10) {
                auStack_160._4_4_ = in_zero_hi;
                auStack_160._0_4_ = in_zero_lo;
                auStack_160._8_4_ = in_zero_udw;
                auStack_160._12_4_ = in_register_0000000c;
              }
              auVar11 = _lqc2(pauVar17[2]);
              auVar22 = _vaddbc(in_vf0,in_vf0);
              auVar10 = _vmul(auVar11,auVar11);
              _vaddabc(auVar10,auVar10);
              _vmaddabc(auVar22,auVar10);
              auVar10 = _vmaddbc(auVar22,auVar10);
              _vrsqrt(in_vf0,auVar10);
              auVar10 = _qmfc2(auVar10._0_4_);
              uVar21 = _vwaitq();
              auVar11 = _vmulq(auVar11,uVar21);
              auStack_150 = _sqc2(auVar11);
              if (auVar10._0_4_ < 9.313226e-10) {
                auStack_150._4_4_ = in_zero_hi;
                auStack_150._0_4_ = in_zero_lo;
                auStack_150._8_4_ = in_zero_udw;
                auStack_150._12_4_ = in_register_0000000c;
              }
              auVar11 = _lqc2(pauVar17[3]);
              auVar24 = _vaddbc(in_vf0,in_vf0);
              auVar10 = _vmul(auVar11,auVar11);
              _vaddabc(auVar10,auVar10);
              _vmaddabc(auVar24,auVar10);
              auVar22 = _vmaddbc(auVar24,auVar10);
              _vrsqrt(in_vf0,auVar22);
              auVar10 = _qmfc2(auVar22._0_4_);
              uVar21 = _vwaitq();
              auVar23 = _vmulq(auVar11,uVar21);
              auStack_140 = _sqc2(auVar23);
              if (auVar10._0_4_ < 9.313226e-10) {
                auStack_140._4_4_ = in_zero_hi;
                auStack_140._0_4_ = in_zero_lo;
                auStack_140._8_4_ = in_zero_udw;
                auStack_140._12_4_ = in_register_0000000c;
              }
              _lqc2(*pauVar16);
              _lqc2(pauVar5[5]);
              _lqc2(pauVar5[6]);
              _lqc2(pauVar5[7]);
              _lqc2(*pauVar17);
              _lqc2(pauVar17[1]);
              _lqc2(pauVar17[2]);
              _lqc2(pauVar17[3]);
              _vcallms(0);
              _vnop();
              auVar10 = _sqc2(auVar11);
              *pauStack_d8 = auVar10;
              auVar10 = _sqc2(auVar22);
              pauStack_d8[1] = auVar10;
              auVar10 = _sqc2(auVar23);
              pauStack_d8[2] = auVar10;
              auVar10 = _sqc2(auVar24);
              pauStack_d8[3] = auVar10;
              _lqc2(*pauVar16);
              _lqc2(pauVar5[5]);
              _lqc2(pauVar5[6]);
              _lqc2(pauVar5[7]);
              _lqc2(auStack_170);
              _lqc2(auStack_160);
              _lqc2(auStack_150);
              _lqc2(auStack_140);
              _vcallms(0);
              _vnop();
              auVar10 = _sqc2(auVar11);
              *pauVar16 = auVar10;
              auVar10 = _sqc2(auVar22);
              pauVar5[5] = auVar10;
              auVar10 = _sqc2(auVar23);
              pauVar5[6] = auVar10;
              auVar10 = _sqc2(auVar24);
              pauVar5[7] = auVar10;
              *(undefined4 *)pauVar5[7] = uStack_100;
              *(undefined4 *)(pauVar5[7] + 4) = uStack_fc;
              *(undefined4 *)(pauVar5[7] + 8) = uStack_f8;
            }
LAB_00351918:
            lVar9 = (long)*piVar8;
          }
        }
        else if ((uStack_ec & 1) == 0) {
          if ((uStack_ec & 4) == 0) {
            _lqc2(*pauVar18);
            _vcallms(0x1a8);
            _vnop();
            auVar10 = _sqc2(extraout_vf2);
            *pauVar16 = auVar10;
            auVar10 = _sqc2(extraout_vf3);
            pauVar5[5] = auVar10;
            auVar10 = _sqc2(extraout_vf4);
            pauVar5[6] = auVar10;
            uVar21 = *(undefined4 *)(*pauVar17 + 4);
            uVar13 = *(undefined4 *)(*pauVar17 + 8);
            uVar6 = *(undefined4 *)(*pauVar17 + 0xc);
            auVar3 = *(undefined1 (*) [12])pauVar17[1];
            uVar12 = *(undefined4 *)(pauVar17[1] + 0xc);
            *puStack_c0 = *(undefined4 *)*pauVar17;
            puStack_c0[1] = uVar21;
            puStack_c0[2] = uVar13;
            puStack_c0[3] = uVar6;
            auVar4 = *(undefined1 (*) [12])pauVar17[2];
            uVar21 = *(undefined4 *)(pauVar17[2] + 0xc);
            puStack_c0[4] = auVar3._0_4_;
            puStack_c0[5] = auVar3._4_4_;
            puStack_c0[6] = auVar3._8_4_;
            puStack_c0[7] = uVar12;
            auVar3 = *(undefined1 (*) [12])pauVar17[3];
            uVar13 = *(undefined4 *)(pauVar17[3] + 0xc);
            puStack_c0[8] = auVar4._0_4_;
            puStack_c0[9] = auVar4._4_4_;
            puStack_c0[10] = auVar4._8_4_;
            puStack_c0[0xb] = uVar21;
            puStack_c0[0xc] = auVar3._0_4_;
            puStack_c0[0xd] = auVar3._4_4_;
            puStack_c0[0xe] = auVar3._8_4_;
            puStack_c0[0xf] = uVar13;
          }
          else {
            _lqc2(*pauStack_f0);
            _vcallms(0x1a8);
            _vnop();
            auVar10 = _sqc2(extraout_vf2);
            *pauVar16 = auVar10;
            auVar10 = _sqc2(extraout_vf3);
            pauVar5[5] = auVar10;
            auVar10 = _sqc2(extraout_vf4);
            pauVar5[6] = auVar10;
            auVar22._4_4_ = in_zero_hi;
            auVar22._0_4_ = in_zero_lo;
            auVar22._8_4_ = in_zero_udw;
            auVar22._12_4_ = in_register_0000000c;
            auVar23._4_4_ = in_zero_hi;
            auVar23._0_4_ = in_zero_lo;
            auVar23._8_4_ = in_zero_udw;
            auVar23._12_4_ = in_register_0000000c;
            auVar10 = _pand(auVar22,auVar23);
            *puStack_c0 = 0x3f800000;
            puStack_c0[1] = 0;
            puStack_c0[2] = auVar10._8_4_;
            puStack_c0[3] = auVar10._12_4_;
            auVar10 = _pextlw(0x3f800000,0);
            puStack_c0[4] = auVar10._0_4_;
            puStack_c0[5] = auVar10._4_4_;
            puStack_c0[6] = auVar10._8_4_;
            puStack_c0[7] = auVar10._12_4_;
            auVar10 = _pextlw(0,auVar10._0_8_);
            puStack_c0[8] = auVar10._0_4_;
            puStack_c0[9] = auVar10._4_4_;
            puStack_c0[10] = auVar10._8_4_;
            puStack_c0[0xb] = auVar10._12_4_;
            auVar10 = pauVar17[3];
            *puStack_dc = auVar10._0_4_;
            puStack_dc[1] = auVar10._4_4_;
            puStack_dc[2] = auVar10._8_4_;
            puStack_dc[3] = auVar10._12_4_;
          }
          if ((uStack_ec & 8) == 0) {
            if ((piVar1[3] & 4U) == 0) {
              *(undefined4 *)pauVar5[7] = *(undefined4 *)pauVar18[1];
              *(undefined4 *)(pauVar5[7] + 4) = *(undefined4 *)(pauVar18[1] + 4);
              uVar21 = *(undefined4 *)(pauVar18[1] + 8);
            }
            else {
              iVar2 = *(int *)(((int)piVar19 - piVar8[1] >> 3) * 4 + *(int *)(iVar20 + 0x70));
              *(undefined4 *)pauVar5[7] = *(undefined4 *)(iVar2 + 0x30);
              *(undefined4 *)(pauVar5[7] + 4) = *(undefined4 *)(iVar2 + 0x34);
              uVar21 = *(undefined4 *)(iVar2 + 0x38);
            }
            *(undefined4 *)(pauVar5[7] + 0xc) = 0x3f800000;
            *(undefined4 *)(pauVar5[7] + 8) = uVar21;
          }
          else {
            *(undefined4 *)pauVar5[7] = *(undefined4 *)pauStack_f0[1];
            *(undefined4 *)(pauVar5[7] + 4) = *(undefined4 *)(pauStack_f0[1] + 4);
            uVar21 = *(undefined4 *)(pauStack_f0[1] + 8);
            *(undefined4 *)(pauVar5[7] + 0xc) = 0x3f800000;
            *(undefined4 *)(pauVar5[7] + 8) = uVar21;
            uStack_190 = 0;
            uStack_18c = 0;
            uStack_188 = 0;
            uStack_184 = 0x3f800000;
          }
          _lqc2(*pauVar16);
          _lqc2(pauVar5[5]);
          _lqc2(pauVar5[6]);
          _lqc2(pauVar5[7]);
          _lqc2(auStack_1c0);
          _lqc2(auStack_1b0);
          _lqc2(auStack_1a0);
          auVar24._4_4_ = uStack_18c;
          auVar24._0_4_ = uStack_190;
          auVar24._8_4_ = uStack_188;
          auVar24._12_4_ = uStack_184;
          _lqc2(auVar24);
          _vcallms(0);
          _vnop();
          auVar10 = _sqc2(extraout_vf9);
          *pauVar16 = auVar10;
          auVar10 = _sqc2(extraout_vf10);
          pauVar5[5] = auVar10;
          auVar10 = _sqc2(extraout_vf11);
          pauVar5[6] = auVar10;
          auVar10 = _sqc2(extraout_vf12);
          pauVar5[7] = auVar10;
          lVar9 = (long)*piVar8;
        }
        else {
          _lqc2(*pauVar18);
          _vcallms(0x1a8);
          _vnop();
          auVar10 = _sqc2(extraout_vf2);
          *pauVar16 = auVar10;
          auVar10 = _sqc2(extraout_vf3);
          pauVar5[5] = auVar10;
          auVar10 = _sqc2(extraout_vf4);
          pauVar5[6] = auVar10;
          if ((piVar1[3] & 4U) == 0) {
            *(undefined4 *)pauVar5[7] = *(undefined4 *)pauVar18[1];
            *(undefined4 *)(pauVar5[7] + 4) = *(undefined4 *)(pauVar18[1] + 4);
            uVar21 = *(undefined4 *)(pauVar18[1] + 8);
          }
          else {
            iVar2 = *(int *)(((int)piVar19 - piVar8[1] >> 3) * 4 + *(int *)(iVar20 + 0x70));
            *(undefined4 *)pauVar5[7] = *(undefined4 *)(iVar2 + 0x30);
            *(undefined4 *)(pauVar5[7] + 4) = *(undefined4 *)(iVar2 + 0x34);
            uVar21 = *(undefined4 *)(iVar2 + 0x38);
          }
          *(undefined4 *)(pauVar5[7] + 0xc) = 0x3f800000;
          *(undefined4 *)(pauVar5[7] + 8) = uVar21;
          _lqc2(*pauVar16);
          auVar11 = _lqc2(pauVar5[5]);
          auVar22 = _lqc2(pauVar5[6]);
          auVar23 = _lqc2(pauVar5[7]);
          _lqc2(*pauVar17);
          _lqc2(pauVar17[1]);
          _lqc2(pauVar17[2]);
          _lqc2(pauVar17[3]);
          _vcallms(0);
          _vnop();
          auVar10 = _sqc2(extraout_vf9);
          *pauVar16 = auVar10;
          auVar10 = _sqc2(extraout_vf10);
          pauVar5[5] = auVar10;
          auVar10 = _sqc2(extraout_vf11);
          pauVar5[6] = auVar10;
          auVar10 = _sqc2(extraout_vf12);
          pauVar5[7] = auVar10;
          if ((uStack_ec & 4) == 0) {
            if ((uStack_ec & 8) == 0) goto LAB_00351918;
            auStack_180._0_4_ = *(undefined4 *)pauStack_f0[1];
            auStack_180._4_4_ = *(undefined4 *)(pauStack_f0[1] + 4);
            auStack_180._8_4_ = *(undefined4 *)(pauStack_f0[1] + 8);
            uStack_174 = 0x3f800000;
            auVar10 = _lqc2(*pauVar16);
            auVar11 = _lqc2(pauVar5[5]);
            auVar22 = _lqc2(pauVar5[6]);
            auVar23 = _lqc2(pauVar5[7]);
            auVar24 = _lqc2(*pauStack_e0);
            _vmulabc(auVar10,auVar24);
            _vmaddabc(auVar11,auVar24);
            _vmaddabc(auVar22,auVar24);
            auVar10 = _vmaddbc(auVar23,auVar24);
            auVar10 = _sqc2(auVar10);
            pauVar5[7] = auVar10;
            lVar9 = (long)*piVar8;
          }
          else {
            _lqc2(*pauStack_f0);
            _vcallms(0x1a8);
            _vnop();
            auVar10 = _sqc2(auVar11);
            auVar11 = _sqc2(auVar22);
            auVar22 = _sqc2(auVar23);
            auVar23 = _sqc2(in_vf0);
            *pauStack_e4 = auVar23;
            if ((uStack_ec & 8) != 0) {
              auStack_1d0._0_4_ = *(undefined4 *)pauStack_f0[1];
              auStack_1d0._4_4_ = *(undefined4 *)(pauStack_f0[1] + 4);
              auStack_1d0._8_4_ = *(undefined4 *)(pauStack_f0[1] + 8);
            }
            _lqc2(auVar10);
            _lqc2(auVar11);
            _lqc2(auVar22);
            auVar7._4_4_ = auStack_1d0._4_4_;
            auVar7._0_4_ = auStack_1d0._0_4_;
            auVar7._8_4_ = auStack_1d0._8_4_;
            auVar7._12_4_ = auStack_1d0._12_4_;
            _lqc2(auVar7);
            _lqc2(*pauVar16);
            _lqc2(pauVar5[5]);
            _lqc2(pauVar5[6]);
            _lqc2(pauVar5[7]);
            _vcallms(0);
            _vnop();
            auVar10 = _sqc2(extraout_vf9);
            *pauVar16 = auVar10;
            auVar10 = _sqc2(extraout_vf10);
            pauVar5[5] = auVar10;
            auVar10 = _sqc2(extraout_vf11);
            pauVar5[6] = auVar10;
            auVar10 = _sqc2(extraout_vf12);
            pauVar5[7] = auVar10;
            lVar9 = (long)*piVar8;
          }
        }
        lVar14 = (long)(iStack_d0 + 1);
        pauVar18 = pauVar18 + 2;
        piVar1 = piVar19;
        pauVar5 = pauVar16;
      } while (lVar14 < lVar9);
    }
  }
  return;
}


// ==== FUN_003519a0 @ 003519a0 ====

void FUN_003519a0(undefined8 param_1,int param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 extraout_vf1 [16];
  undefined1 extraout_vf2 [16];
  undefined1 extraout_vf3 [16];
  undefined1 extraout_vf4 [16];
  
  iVar2 = FUN_003489a8();
  pauVar3 = (undefined1 (*) [16])(param_2 * 0x40 + *(int *)(iVar2 + 8));
  _lqc2(*param_3);
  _lqc2(param_3[1]);
  _lqc2(param_3[2]);
  _lqc2(param_3[3]);
  _vcallms(0x490);
  _vnop();
  auVar1 = _sqc2(extraout_vf1);
  *pauVar3 = auVar1;
  auVar1 = _sqc2(extraout_vf2);
  pauVar3[1] = auVar1;
  auVar1 = _sqc2(extraout_vf3);
  pauVar3[2] = auVar1;
  auVar1 = _sqc2(extraout_vf4);
  pauVar3[3] = auVar1;
  return;
}


// ==== FUN_00351a08 @ 00351a08 ====

undefined4 FUN_00351a08(void)

{
  uint uVar1;
  
  uVar1 = DAT_003d5328 & DAT_003d532c;
  DAT_003d5328 = DAT_003d5328 + 1;
  return *(undefined4 *)(&DAT_003d5330 + uVar1 * 4);
}


// ==== FUN_00351a40 @ 00351a40 ====

undefined8 FUN_00351a40(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0xf;
  puVar1 = (undefined4 *)param_1 + 1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (iVar2 != -1);
  *(undefined4 *)param_1 = 0;
  return param_1;
}


// ==== FUN_00351a78 @ 00351a78 ====

void FUN_00351a78(int param_1,ulong param_2)

{
  int iVar1;
  
  if ((param_1 != -4) && (param_1 + 4 != param_1 + 0x84)) {
    for (iVar1 = param_1 + 0x7c; param_1 + 4 != iVar1; iVar1 = iVar1 + -8) {
    }
  }
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00351ad0 @ 00351ad0 ====

void FUN_00351ad0(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


// ==== FUN_00351ae0 @ 00351ae0 ====

void FUN_00351ae0(float param_1,int *param_2)

{
  int iVar1;
  
  param_2[*param_2 * 2 + 1] = (int)param_1;
  iVar1 = *param_2;
  if (iVar1 == 0) {
    param_2[2] = (int)param_1;
  }
  else {
    param_2[iVar1 * 2 + 2] = (int)((float)param_2[(iVar1 + -1) * 2 + 2] * param_1);
  }
  *param_2 = *param_2 + 1;
  return;
}


// ==== FUN_00351b78 @ 00351b78 ====

undefined4 FUN_00351b78(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  lVar3 = 0;
  cVar1 = *(char *)(param_1 + 1);
  if ((long)cVar1 < 1) {
LAB_00351bec:
    uVar5 = 0x3f800000;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    while( true ) {
      fVar4 = (float)FUN_00352048(*(undefined4 *)((int)lVar3 * 4 + iVar2),param_2);
      lVar3 = (long)((int)lVar3 + 1);
      if (fVar4 == 0.0) break;
      if (cVar1 <= lVar3) goto LAB_00351bec;
      iVar2 = *(int *)(param_1 + 8);
    }
    uVar5 = 0;
  }
  return uVar5;
}


// ==== FUN_00351c18 @ 00351c18 ====

undefined4 FUN_00351c18(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  lVar3 = 0;
  cVar1 = *(char *)(param_1 + 1);
  if ((long)cVar1 < 1) {
LAB_00351c98:
    uVar5 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    while( true ) {
      fVar4 = (float)FUN_00352048(*(undefined4 *)((int)lVar3 * 4 + iVar2),param_2);
      lVar3 = (long)((int)lVar3 + 1);
      if (fVar4 == 1.0) break;
      if (cVar1 <= lVar3) goto LAB_00351c98;
      iVar2 = *(int *)(param_1 + 8);
    }
    uVar5 = 0x3f800000;
  }
  return uVar5;
}


// ==== FUN_00351cc0 @ 00351cc0 ====

float FUN_00351cc0(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  
  lVar3 = 0;
  uVar4 = 0;
  cVar1 = *(char *)(param_1 + 1);
  if (0 < (long)cVar1) {
    iVar2 = *(int *)(param_1 + 8);
    uVar4 = 0;
    while( true ) {
      fVar5 = (float)FUN_00352048(*(undefined4 *)((int)lVar3 * 4 + iVar2),param_2);
      if (fVar5 == 1.0) {
        uVar4 = uVar4 ^ 1;
      }
      lVar3 = (long)((int)lVar3 + 1);
      if (cVar1 <= lVar3) break;
      iVar2 = *(int *)(param_1 + 8);
    }
  }
  return (float)uVar4;
}


// ==== FUN_00351d70 @ 00351d70 ====

undefined4 FUN_00351d70(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)FUN_00352048(**(undefined4 **)(param_1 + 8));
  uVar2 = 0x3f800000;
  if (fVar1 != 0.0) {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_00351db0 @ 00351db0 ====

undefined4 FUN_00351db0(int param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)FUN_00352048(**(undefined4 **)(param_1 + 8));
  fVar2 = (float)FUN_00352048(*(undefined4 *)(*(int *)(param_1 + 8) + 4),param_2);
  uVar3 = 0x3f800000;
  if (fVar1 != fVar2) {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00351e18 @ 00351e18 ====

undefined4 FUN_00351e18(int param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)FUN_00352048(**(undefined4 **)(param_1 + 8));
  fVar2 = (float)FUN_00352048(*(undefined4 *)(*(int *)(param_1 + 8) + 4),param_2);
  uVar3 = 0x3f800000;
  if (fVar1 == fVar2) {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00351e80 @ 00351e80 ====

undefined4 FUN_00351e80(int param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)FUN_00352048(**(undefined4 **)(param_1 + 8));
  fVar2 = (float)FUN_00352048(*(undefined4 *)(*(int *)(param_1 + 8) + 4),param_2);
  uVar3 = 0x3f800000;
  if (fVar1 <= fVar2) {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00351ee8 @ 00351ee8 ====

undefined4 FUN_00351ee8(int param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)FUN_00352048(**(undefined4 **)(param_1 + 8));
  fVar2 = (float)FUN_00352048(*(undefined4 *)(*(int *)(param_1 + 8) + 4),param_2);
  uVar3 = 0x3f800000;
  if (fVar2 <= fVar1) {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00351f50 @ 00351f50 ====

undefined4 FUN_00351f50(int param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)FUN_00352048(**(undefined4 **)(param_1 + 8));
  fVar2 = (float)FUN_00352048(*(undefined4 *)(*(int *)(param_1 + 8) + 4),param_2);
  uVar3 = 0x3f800000;
  if (fVar1 < fVar2) {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00351fb8 @ 00351fb8 ====

undefined4 FUN_00351fb8(int param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)FUN_00352048(**(undefined4 **)(param_1 + 8));
  fVar2 = (float)FUN_00352048(*(undefined4 *)(*(int *)(param_1 + 8) + 4),param_2);
  uVar3 = 0x3f800000;
  if (fVar2 < fVar1) {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00352020 @ 00352020 ====

void FUN_00352020(int param_1)

{
  FUN_00348a38(*(undefined2 *)(param_1 + 2));
  return;
}


// ==== FUN_00352048 @ 00352048 ====

undefined4 FUN_00352048(byte *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 < 0xc) {
    uVar1 = (*(code *)(&PTR_FUN_003d5060)[*param_1])();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00352098 @ 00352098 ====

void FUN_00352098(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                 undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [3];
  
  auVar3 = _auStack_a0;
  auVar2._4_8_ = uStack_98;
  auVar2._0_4_ = param_2;
  auStack_a0 = (undefined1  [8])(auVar2._0_8_ << 0x20);
  uStack_98._4_4_ = auVar3._12_4_;
  uStack_98._0_4_ = param_3;
  auStack_a0._0_4_ = param_1;
  auVar3 = _lqc2(_auStack_a0);
  _lqc2(_auStack_a0);
  auVar5 = _qmtc2(0x3f000000);
  auVar3 = _vmulbc(auVar3,auVar5);
  auVar3 = _sqc2(auVar3);
  auStack_a0._0_4_ = auVar3._0_4_;
  FUN_00352848(auStack_a0._0_4_,&fStack_40,&fStack_3c);
  auStack_a0._4_4_ = auVar3._4_4_;
  FUN_00352848(auStack_a0._4_4_,&uStack_38,&uStack_34);
  uStack_98._0_4_ = auVar3._8_4_;
  FUN_00352848((undefined4)uStack_98,&uStack_30,auStack_2c);
  auStack_70._4_4_ = -fStack_3c;
  auStack_70._0_4_ = fStack_3c;
  fStack_68 = -fStack_40;
  fStack_64 = fStack_40;
  auStack_a0._4_4_ = fStack_40;
  auStack_a0._0_4_ = fStack_40;
  uStack_98._0_4_ = fStack_3c;
  uStack_98._4_4_ = fStack_3c;
  auVar5 = _lqc2(_auStack_a0);
  auVar3._4_4_ = uStack_34;
  auVar3._0_4_ = uStack_34;
  auVar3._8_4_ = uStack_34;
  auVar3._12_4_ = uStack_34;
  auVar3 = _lqc2(auVar3);
  auVar3 = _vmul(auVar5,auVar3);
  auVar3 = _sqc2(auVar3);
  auVar3 = _lqc2(auVar3);
  auVar5._4_4_ = auStack_2c[0];
  auVar5._0_4_ = uStack_30;
  auVar5._8_4_ = uStack_30;
  auVar5._12_4_ = auStack_2c[0];
  auVar5 = _lqc2(auVar5);
  auVar3 = _vmul(auVar3,auVar5);
  auVar3 = _sqc2(auVar3);
  auVar5 = _lqc2(_auStack_70);
  auVar4._4_4_ = uStack_38;
  auVar4._0_4_ = uStack_38;
  auVar4._8_4_ = uStack_38;
  auVar4._12_4_ = uStack_38;
  auVar4 = _lqc2(auVar4);
  auVar5 = _vmul(auVar5,auVar4);
  auVar5 = _sqc2(auVar5);
  auVar5 = _lqc2(auVar5);
  auVar1._4_4_ = uStack_30;
  auVar1._0_4_ = auStack_2c[0];
  auVar1._8_4_ = auStack_2c[0];
  auVar1._12_4_ = uStack_30;
  auVar4 = _lqc2(auVar1);
  auVar5 = _vmul(auVar5,auVar4);
  auVar5 = _sqc2(auVar5);
  auVar3 = _lqc2(auVar3);
  auVar5 = _lqc2(auVar5);
  auVar3 = _vadd(auVar3,auVar5);
  auVar3 = _sqc2(auVar3);
  *param_4 = auVar3;
  return;
}


// ==== FUN_00352210 @ 00352210 ====

void FUN_00352210(float *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = *param_1;
  fVar9 = fVar2 * fVar2;
  fVar5 = param_1[1];
  fVar4 = param_1[2];
  fVar7 = param_1[3];
  fVar11 = fVar2 * fVar5;
  fVar1 = fVar9 + fVar5 * fVar5;
  fVar6 = 1.0 - (fVar1 + fVar1);
  fVar1 = fVar2 * fVar4 + fVar5 * fVar7;
  fVar10 = fVar4 * fVar4;
  fVar1 = fVar1 + fVar1;
  if (fVar6 == 0.0) {
    puVar3 = (undefined *)0x3fc90fdb;
    if (fVar1 < 0.0) {
      puVar3 = &DAT_bfc90fdb;
    }
  }
  else {
    fVar8 = fVar1 / fVar6;
    if (fVar6 < 0.0) {
      if (fVar1 < 0.0) {
        fVar1 = (float)FUN_0029d6a8(fVar8);
        puVar3 = (undefined *)(fVar1 - 3.1415927);
      }
      else {
        fVar1 = (float)FUN_0029d6a8(fVar8);
        puVar3 = (undefined *)(fVar1 + 3.1415927);
      }
    }
    else {
      puVar3 = (undefined *)FUN_0029d6a8(fVar8);
    }
  }
  fVar1 = fVar5 * fVar4 - fVar2 * fVar7;
  *param_2 = puVar3;
  fVar1 = fVar1 + fVar1;
  fVar1 = (float)((int)fVar1 * (uint)(fVar1 < 1.0) | (uint)(fVar1 >= 1.0) * 0x3f800000);
  fVar1 = (float)FUN_0029e1d8((int)fVar1 * (uint)(-1.0 < fVar1) |
                              (uint)(-1.0 >= fVar1) * -0x40800000);
  *param_3 = -fVar1;
  fVar11 = fVar11 + fVar4 * fVar7;
  fVar1 = 1.0 - (fVar9 + fVar10 + fVar9 + fVar10);
  fVar11 = fVar11 + fVar11;
  if (fVar1 == 0.0) {
    if (fVar11 < 0.0) {
      *param_4 = (float)&DAT_bfc90fdb;
    }
    else {
      *param_4 = 1.5707964;
    }
  }
  else {
    fVar2 = fVar11 / fVar1;
    if (fVar1 < 0.0) {
      if (fVar11 < 0.0) {
        fVar1 = (float)FUN_0029d6a8(fVar2);
        fVar1 = fVar1 - 3.1415927;
      }
      else {
        fVar1 = (float)FUN_0029d6a8(fVar2);
        fVar1 = fVar1 + 3.1415927;
      }
    }
    else {
      fVar1 = (float)FUN_0029d6a8(fVar2);
    }
    *param_4 = fVar1;
  }
  return;
}


// ==== FUN_00352490 @ 00352490 ====

undefined4 FUN_00352490(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  int *piVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  float fVar21;
  undefined1 in_vf0 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = (int)unaff_s0;
  uStack_c = (int)((ulong)unaff_s0 >> 0x20);
  uStack_20 = (int)unaff_s1;
  uStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  iVar15 = 0;
  aiStack_40[4] = (int)unaff_s2;
  aiStack_40[5] = (int)((ulong)unaff_s2 >> 0x20);
  iVar12 = 0;
  iVar13 = 3;
  piVar16 = aiStack_40 + 3;
  do {
    *piVar16 = 0;
    iVar13 = iVar13 + -1;
    piVar16 = piVar16 + -1;
  } while (-1 < iVar13);
  iVar13 = 0;
  while( true ) {
    fVar21 = 0.0;
    iVar14 = 0;
    piVar16 = aiStack_40;
    do {
      if (*piVar16 != 1) {
        iVar10 = 0;
        pauVar7 = param_1 + iVar14;
        piVar5 = aiStack_40;
        do {
          if (*piVar5 == 0) {
            if (fVar21 <= ABS(*(float *)*pauVar7)) {
              fVar21 = ABS(*(float *)*pauVar7);
              iVar15 = iVar10;
              iVar12 = iVar14;
            }
          }
          else if (1 < *piVar5) {
            return 0xffffffff;
          }
          iVar10 = iVar10 + 1;
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + 4);
          piVar5 = piVar5 + 1;
        } while (iVar10 < 4);
      }
      iVar14 = iVar14 + 1;
      piVar16 = piVar16 + 1;
    } while (iVar14 < 4);
    piVar16 = aiStack_40 + iVar15;
    *piVar16 = *piVar16 + 1;
    if (iVar12 != iVar15) {
      pauVar8 = param_1 + iVar12;
      pauVar7 = param_1 + iVar15;
      uVar1 = *(undefined8 *)*pauVar8;
      uVar17 = *(undefined4 *)(*pauVar8 + 8);
      uVar18 = *(undefined4 *)(*pauVar8 + 0xc);
      uVar2 = *(undefined8 *)*pauVar7;
      uVar19 = *(undefined4 *)(*pauVar7 + 8);
      uVar20 = *(undefined4 *)(*pauVar7 + 0xc);
      *(int *)*pauVar7 = (int)uVar1;
      *(int *)(*pauVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
      *(undefined4 *)(*pauVar7 + 8) = uVar17;
      *(undefined4 *)(*pauVar7 + 0xc) = uVar18;
      *(int *)*pauVar8 = (int)uVar2;
      *(int *)(*pauVar8 + 4) = (int)((ulong)uVar2 >> 0x20);
      *(undefined4 *)(*pauVar8 + 8) = uVar19;
      *(undefined4 *)(*pauVar8 + 0xc) = uVar20;
      pauVar8 = param_2 + iVar12;
      pauVar7 = param_2 + iVar15;
      uVar1 = *(undefined8 *)*pauVar8;
      uVar17 = *(undefined4 *)(*pauVar8 + 8);
      uVar18 = *(undefined4 *)(*pauVar8 + 0xc);
      uVar2 = *(undefined8 *)*pauVar7;
      uVar19 = *(undefined4 *)(*pauVar7 + 8);
      uVar20 = *(undefined4 *)(*pauVar7 + 0xc);
      *(int *)*pauVar7 = (int)uVar1;
      *(int *)(*pauVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
      *(undefined4 *)(*pauVar7 + 8) = uVar17;
      *(undefined4 *)(*pauVar7 + 0xc) = uVar18;
      *(int *)*pauVar8 = (int)uVar2;
      *(int *)(*pauVar8 + 4) = (int)((ulong)uVar2 >> 0x20);
      *(undefined4 *)(*pauVar8 + 8) = uVar19;
      *(undefined4 *)(*pauVar8 + 0xc) = uVar20;
    }
    pfVar11 = (float *)(iVar15 * 0x14 + (int)param_1);
    aiStack_50[iVar13] = iVar12;
    aiStack_60[iVar13] = iVar15;
    fVar21 = *pfVar11;
    if (fVar21 == 0.0) break;
    fVar21 = 1.0 / fVar21;
    *pfVar11 = 1.0;
    pauVar6 = param_1 + iVar15;
    auVar22 = _lqc2(*pauVar6);
    auVar23 = _qmtc2(fVar21);
    auVar22 = _vmulbc(auVar22,auVar23);
    auVar22 = _sqc2(auVar22);
    *pauVar6 = auVar22;
    pauVar3 = param_2 + iVar15;
    auVar22 = _lqc2(*pauVar3);
    auVar23 = _qmtc2(fVar21);
    auVar22 = _vmulbc(auVar22,auVar23);
    auVar22 = _sqc2(auVar22);
    *pauVar3 = auVar22;
    iVar13 = iVar13 + 1;
    pfVar11 = (float *)(*param_1 + iVar15 * 4);
    iVar14 = 0;
    pauVar7 = param_2;
    pauVar8 = param_1;
    do {
      if (iVar14 != iVar15) {
        fVar21 = *pfVar11;
        *pfVar11 = 0.0;
        auVar22 = _lqc2(*pauVar8);
        auVar23 = _lqc2(*pauVar6);
        auVar24 = _qmtc2(-fVar21);
        _vaddabc(auVar22,in_vf0);
        auVar22 = _vmaddbc(auVar23,auVar24);
        auVar22 = _sqc2(auVar22);
        *pauVar8 = auVar22;
        auVar22 = _lqc2(*pauVar7);
        auVar23 = _lqc2(*pauVar3);
        auVar24 = _qmtc2(-fVar21);
        _vaddabc(auVar22,in_vf0);
        auVar22 = _vmaddbc(auVar23,auVar24);
        auVar22 = _sqc2(auVar22);
        *pauVar7 = auVar22;
      }
      iVar14 = iVar14 + 1;
      pauVar7 = pauVar7 + 1;
      pfVar11 = pfVar11 + 4;
      pauVar8 = pauVar8 + 1;
    } while (iVar14 < 4);
    if (3 < iVar13) {
      iVar15 = 3;
      iVar12 = 0xc;
      while( true ) {
        iVar15 = iVar15 + -1;
        if (*(int *)((int)aiStack_50 + iVar12) != *(int *)((int)aiStack_60 + iVar12)) {
          puVar9 = (undefined4 *)(*param_1 + *(int *)((int)aiStack_60 + iVar12) * 4);
          iVar13 = 3;
          puVar4 = (undefined4 *)(*param_1 + *(int *)((int)aiStack_50 + iVar12) * 4);
          do {
            iVar13 = iVar13 + -1;
            uVar17 = *puVar4;
            *puVar4 = *puVar9;
            *puVar9 = uVar17;
            puVar4 = puVar4 + 4;
            puVar9 = puVar9 + 4;
          } while (-1 < iVar13);
        }
        if (iVar15 < 0) break;
        iVar12 = iVar15 * 4;
      }
      return 0;
    }
  }
  return 0xfffffffe;
}


// ==== FUN_00352770 @ 00352770 ====

void FUN_00352770(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 in_zero_qw [16];
  undefined4 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  puVar9 = (undefined4 *)param_2;
  *puVar9 = *param_1;
  puVar9[1] = uVar1;
  puVar9[2] = uVar2;
  puVar9[3] = uVar3;
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_1[10];
  uVar8 = param_1[0xb];
  puVar9[4] = uVar4;
  puVar9[5] = uVar5;
  puVar9[6] = uVar6;
  puVar9[7] = uVar7;
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  puVar9[8] = uVar1;
  puVar9[9] = uVar2;
  puVar9[10] = uVar3;
  puVar9[0xb] = uVar8;
  puVar9[0xc] = uVar4;
  puVar9[0xd] = uVar5;
  puVar9[0xe] = uVar6;
  puVar9[0xf] = uVar7;
  auVar10 = _pand(in_zero_qw,in_zero_qw);
  uStack_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = auVar10._8_4_;
  uStack_44 = auVar10._12_4_;
  auVar10 = _pextlw(0x3f800000,0);
  uStack_40 = auVar10._0_4_;
  uStack_3c = auVar10._4_4_;
  uStack_38 = auVar10._8_4_;
  uStack_34 = auVar10._12_4_;
  auVar11 = _pextlw(0,auVar10._0_8_);
  uStack_30 = auVar11._0_4_;
  uStack_2c = auVar11._4_4_;
  uStack_28 = auVar11._8_4_;
  uStack_24 = auVar11._12_4_;
  auVar10 = _pextlw(auVar10._0_8_,0);
  uStack_20 = auVar10._0_4_;
  uStack_1c = auVar10._4_4_;
  uStack_18 = auVar10._8_4_;
  uStack_14 = auVar10._12_4_;
  FUN_00352490(param_2,&uStack_50);
  return;
}


// ==== FUN_003527e8 @ 003527e8 ====

undefined4 FUN_003527e8(float param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (int)(param_1 * 166886.05) + 0x40000U & 0xfffff;
  iVar2 = uVar1 - 0x40000;
  if (0 < (int)(uVar1 - 0x80000)) {
    iVar2 = 0x80000 - iVar2;
  }
  auVar3 = _qmtc2(iVar2);
  _vcallms(0x2b8);
  _vnop();
  auVar3 = _qmfc2(auVar3._0_4_);
  return auVar3._0_4_;
}


// ==== FUN_00352848 @ 00352848 ====

void FUN_00352848(float param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = _pextlw(0x40000,0x40000);
  auVar1 = _pextlw((long)((int)(param_1 * 166886.05) + auVar2._0_4_),
                   (long)(int)(param_1 * 166886.05));
  auVar3 = _pextlw(0xfffff,0xfffff);
  auVar1 = _pand(auVar1,auVar3);
  auVar1 = _paddw(auVar1,auVar2);
  auVar1 = _pand(auVar1,auVar3);
  auVar1 = _psubw(auVar1,auVar2);
  auVar2 = _pcgtw(auVar1,auVar2);
  auVar1 = _pxor(auVar1,auVar2);
  auVar1 = _psubw(auVar1,auVar2);
  auVar2 = _psrlw(auVar2,0x1f);
  auVar2 = _psllw(auVar2,0x13);
  auVar1 = _paddw(auVar1,auVar2);
  auVar1 = _qmtc2(auVar1._0_4_);
  _vcallms(0x2b8);
  _vnop();
  auVar1 = _qmfc2(auVar1._0_4_);
  *param_2 = auVar1._0_4_;
  *param_3 = auVar1._4_4_;
  return;
}


// ==== FUN_003528e0 @ 003528e0 ====

void FUN_003528e0(void)

{
  uint uVar1;
  
  REG_DMAC_0_VIF0_QWC = (uint)DAT_003bb6d0;
  REG_DMAC_0_VIF0_MADR = 0x3bb6e0;
  REG_DMAC_STAT = 1;
  REG_DMAC_0_VIF0_CHCR = 0x101;
  uVar1 = REG_DMAC_0_VIF0_CHCR;
  while ((uVar1 & 0x100) != 0) {
    SYNC(0);
    uVar1 = REG_DMAC_0_VIF0_CHCR;
  }
  return;
}


// ==== FUN_00352958 @ 00352958 ====

void FUN_00352958(float param_1,float param_2,float param_3,undefined1 (*param_4) [16])

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
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  FUN_00352848(param_1 * 0.5,auStack_70,auStack_60);
  FUN_00352848(param_2 * 0.5,(uint)auStack_70 | 4,auStack_60 + 4);
  FUN_00352848(param_3 * 0.5,(uint)auStack_70 | 8,auStack_60 + 8);
  auVar6 = _lqc2(auStack_70);
  auVar7 = _lqc2(auStack_60);
  auVar9 = _vsub(in_vf0,in_vf0);
  auVar4 = _vmulbc(auVar7,auVar7);
  auVar1 = _vmulbc(auVar6,auVar6);
  auVar2 = _vmulbc(auVar7,auVar6);
  auVar3 = _vmulbc(auVar6,auVar7);
  _vmulabc(auVar7,auVar4);
  auVar5 = _vmaddbc(auVar6,auVar1);
  _vmulabc(auVar7,auVar3);
  auVar8 = _vmsubbc(auVar6,auVar2);
  _vmulabc(auVar7,auVar1);
  auVar4 = _vmaddbc(auVar6,auVar4);
  _vmulabc(auVar7,auVar2);
  auVar1 = _vmsubbc(auVar6,auVar3);
  _vaddbc(auVar9,auVar5);
  _vaddbc(in_vf0,auVar8);
  _vaddbc(in_vf0,auVar4);
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *param_4 = auVar1;
  return;
}


// ==== FUN_00352a30 @ 00352a30 ====

int FUN_00352a30(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_1 != 0) {
    pcVar4 = (char *)param_1;
    cVar1 = *pcVar4;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      iVar3 = (int)cVar1;
      iVar2 = iVar3 + 0x20;
      if ((*(byte *)((int)&PTR_DAT_0040a991 + iVar3) & 1) == 0) {
        iVar2 = iVar3;
      }
      iVar5 = iVar5 * 0x1003f + iVar2;
      cVar1 = *pcVar4;
    }
  }
  return iVar5;
}


// ==== FUN_00352a90 @ 00352a90 ====

int FUN_00352a90(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (byte *)0x0) {
    pbVar1 = param_1 + param_2;
    for (; param_1 < pbVar1; param_1 = param_1 + 1) {
      iVar2 = iVar2 * 0x1003f + (uint)*param_1;
    }
  }
  return iVar2;
}


// ==== FUN_00352b00 @ 00352b00 ====

void FUN_00352b00(long param_1,long param_2)

{
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_0046c608 = 0;
    DAT_0046c610 = 0;
    DAT_0046c60c = 0;
  }
  return;
}


// ==== FUN_00352b30 @ 00352b30 ====

void FUN_00352b30(void)

{
  FUN_00352b00(1,0xffff);
  return;
}


// ==== FUN_00352b50 @ 00352b50 ====

long FUN_00352b50(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)param_1;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    uStack_3c = 10000;
    uStack_38 = 0;
    uVar1 = CreateSema(auStack_40);
    *puVar2 = uVar1;
  }
  return param_1;
}


// ==== FUN_00352ba0 @ 00352ba0 ====

void FUN_00352ba0(int *param_1)

{
  if (-1 < *param_1) {
    DeleteSema();
  }
  return;
}


// ==== FUN_00352bc8 @ 00352bc8 ====

undefined4 FUN_00352bc8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = GetThreadId();
  if ((param_1[2] == 0) || (param_1[1] != iVar2)) {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    iVar1 = param_1[2];
    while (iVar1 != 0) {
      param_1[3] = param_1[3] + 1;
      EI();
      WaitSema(*param_1);
      do {
        DI();
        SYNC(0x10);
      } while ((Status & 0x10000) != 0);
      iVar1 = param_1[2];
    }
    param_1[1] = iVar2;
    param_1[2] = param_1[2] + 1;
    EI();
  }
  else {
    param_1[2] = param_1[2] + 1;
  }
  return param_1[2];
}


// ==== FUN_00352cb0 @ 00352cb0 ====

int FUN_00352cb0(undefined4 *param_1)

{
  int iVar1;
  
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  param_1[2] = param_1[2] + -1;
  iVar1 = param_1[2];
  if ((iVar1 == 0) && (param_1[3] != 0)) {
    param_1[3] = param_1[3] + -1;
    EI();
    SignalSema(*param_1);
  }
  else {
    EI();
  }
  return iVar1;
}


// ==== FUN_00352d38 @ 00352d38 ====

undefined4 FUN_00352d38(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ==== FUN_00352d50 @ 00352d50 ====

undefined8
FUN_00352d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  memset(puVar1 + 2,0,0x28);
  memset(puVar1 + 0xc,0,0x400);
  memset(puVar1 + 0x10c,0,0x10);
  puVar1[0x110] = 0;
  puVar1[0x111] = 0;
  memset(puVar1 + 0x112,0,0x2c);
  puVar1[0x11d] = 0;
  puVar1[0x11e] = 0;
  puVar1[0x120] = 0;
  puVar1[0x122] = 0;
  puVar1[0x123] = 0;
  puVar1[0x124] = 0;
  puVar1[0x125] = 0;
  puVar1[0x126] = 0;
  puVar1[0x127] = 0;
  puVar1[0x128] = 0;
  puVar1[0x129] = 0;
  puVar1[0x12a] = 0;
  puVar1[0x11f] = 1;
  *(undefined1 *)(puVar1 + 0x121) = 9;
  *(undefined1 *)((int)puVar1 + 0x485) = 10;
  memset(puVar1 + 299,0,0x10);
  puVar1[0x12f] = 0;
  puVar1[0x130] = 0;
  puVar1[0x132] = 0;
  puVar1[0x133] = 0;
  puVar1[0x134] = 0;
  puVar1[0x135] = 0;
  puVar1[0x136] = 0;
  puVar1[0x137] = 0;
  puVar1[0x138] = 0;
  puVar1[0x13c] = 0;
  puVar1[0x13d] = 0;
  puVar1[0x131] = 0x100;
  puVar1[0x139] = 0x1000;
  puVar1[0x13a] = 0x400000;
  puVar1[0x13b] = 0x100000;
  memset(puVar1 + 0x13e,0,0x20);
  *(undefined1 *)(puVar1 + 0x146) = 0xdd;
  *(undefined1 *)((int)puVar1 + 0x519) = 0xde;
  *(undefined1 *)((int)puVar1 + 0x51a) = 0xcd;
  *(undefined1 *)((int)puVar1 + 0x51b) = 0xab;
  *(undefined1 *)(puVar1 + 0x147) = 0xfe;
  puVar1[0x133] = puVar1;
  puVar1[0x135] = puVar1;
  puVar1[0x132] = &LAB_003536d0;
  puVar1[0x134] = FUN_00353700;
  FUN_00352f30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}


// ==== FUN_00352f30 @ 00352f30 ====

undefined4
FUN_00352f30(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar5 = (int *)param_1;
  if (*piVar5 == 0) {
    *piVar5 = 1;
    FUN_00353118(param_1,0,1);
    iVar1 = piVar5[0x13d];
    if (iVar1 != 0) {
      FUN_00352bc8();
    }
    piVar5[1] = 0x40;
    piVar4 = piVar5 + 0xc;
    memset(piVar5 + 2,0,0x28);
    piVar6 = piVar5 + 0x112;
    memset(piVar4,0,0x400);
    piVar7 = piVar5 + 299;
    iVar3 = 0x7e;
    piVar2 = piVar4;
    do {
      piVar2[2] = (int)piVar2;
      iVar3 = iVar3 + -1;
      piVar2[3] = (int)piVar2;
      piVar2 = piVar2 + 2;
    } while (-1 < iVar3);
    memset(piVar5 + 0x10c,0,0x10);
    piVar5[0x110] = (int)piVar4;
    piVar5[0x111] = 0;
    memset(piVar6,0,0x2c);
    piVar5[0x11c] = (int)piVar6;
    piVar5[0x11b] = (int)piVar6;
    piVar5[0x11d] = 0;
    piVar5[0x11e] = 0;
    piVar5[0x126] = 0;
    piVar5[0x127] = 0;
    piVar5[0x128] = 0x10000;
    piVar5[0x129] = 0x20000;
    piVar5[0x12a] = 0;
    piVar5[1] = piVar5[1] & 1U | 0x48;
    memset(piVar7,0,0x10);
    piVar5[0x12e] = (int)piVar7;
    piVar5[0x136] = 0x20000;
    piVar5[0x137] = 0x10000;
    piVar5[0x12d] = (int)piVar7;
    piVar5[0x138] = piVar5[0x110];
    iVar3 = FUN_00353360();
    piVar5[0x139] = iVar3;
    if (iVar1 != 0) {
      FUN_00352cb0();
    }
  }
  if ((param_2 != 0) || (param_3 != 0)) {
    FUN_00354cf0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return 1;
}


// ==== FUN_00353118 @ 00353118 ====

void FUN_00353118(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x0035314c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_0040a6d0)[(int)param_2])();
    return;
  }
  return;
}


// ==== FUN_00353360 @ 00353360 ====

undefined4 FUN_00353360(void)

{
  return 0x1000;
}


// ==== FUN_00353368 @ 00353368 ====

int FUN_00353368(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 >> 6) + 0x38;
  if ((((0x20 < param_1 >> 6) && (iVar1 = (param_1 >> 9) + 0x5b, 0x14 < param_1 >> 9)) &&
      (iVar1 = (param_1 >> 0xc) + 0x6e, 10 < param_1 >> 0xc)) &&
     (iVar1 = (param_1 >> 0xf) + 0x77, 4 < param_1 >> 0xf)) {
    iVar1 = 0x7e;
    if (param_1 >> 0x12 < 3) {
      iVar1 = (param_1 >> 0x12) + 0x7c;
    }
  }
  return iVar1;
}


// ==== FUN_003533c8 @ 003533c8 ====

uint FUN_003533c8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  puVar7 = *(uint **)(param_1 + 0x46c);
  uVar4 = param_1 + 0x30;
  if (puVar7 != (uint *)(param_1 + 0x448U)) {
    uVar6 = puVar7[1];
    while( true ) {
      uVar8 = *puVar7;
      uVar6 = (int)puVar7 + (uVar6 - 0x10);
      if (uVar8 < uVar6) {
        uVar2 = *(uint *)(uVar8 + 4);
        uVar5 = uVar4;
        uVar4 = uVar8;
        uVar8 = uVar9;
        while( true ) {
          uVar2 = uVar2 & 0x7ffffff8;
          uVar3 = uVar4 + uVar2;
          uVar1 = uVar5;
          uVar9 = uVar8;
          if ((*(uint *)(uVar3 + 4) & 1) == 0) {
            if ((0x2000 < uVar2) || (uVar3 == uVar6)) goto LAB_00353470;
            uVar1 = uVar4;
            uVar9 = uVar2;
            if (uVar2 <= uVar8) {
              uVar1 = uVar5;
              uVar9 = uVar8;
            }
          }
          uVar5 = uVar1;
          if (uVar6 <= uVar3) break;
          uVar2 = *(uint *)(uVar3 + 4);
          uVar4 = uVar3;
          uVar8 = uVar9;
        }
        puVar7 = (uint *)puVar7[9];
        uVar4 = uVar5;
      }
      else {
        puVar7 = (uint *)puVar7[9];
      }
      if (puVar7 == (uint *)(param_1 + 0x448U)) break;
      uVar6 = puVar7[1];
    }
  }
LAB_00353470:
  if (uVar4 == param_1 + 0x30U) {
    *(uint *)(param_1 + 0x440) = uVar4;
  }
  else {
    *(undefined4 *)(*(int *)(uVar4 + 8) + 0xc) = *(undefined4 *)(uVar4 + 0xc);
    *(undefined4 *)(*(int *)(uVar4 + 0xc) + 8) = *(undefined4 *)(uVar4 + 8);
    *(uint *)(uVar4 + 0xc) = uVar4;
    *(uint *)(uVar4 + 8) = uVar4;
    *(uint *)(param_1 + 0x440) = uVar4;
  }
  return uVar4;
}


// ==== FUN_003534a8 @ 003534a8 ====

undefined4 FUN_003534a8(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_2 + 4) & 0x7ffffff8) < 0x10) {
    iVar1 = FUN_00354ca0();
    uVar2 = 1;
    if (param_2 < (iVar1 + *(int *)(iVar1 + 4)) - 0x10U) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_00353518 @ 00353518 ====

void FUN_00353518(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x474) != 0) && (iVar1 = *(int *)(param_1 + 0x440), iVar1 != 0)) {
    *(uint *)(param_1 + 0x474) = iVar1 + ((*(uint *)(iVar1 + 4) & 0x7ffffff8) >> 1);
  }
  return;
}


// ==== FUN_00353550 @ 00353550 ====

void FUN_00353550(int param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x440);
  *(int *)(param_1 + 0x440) = param_2;
  *(int *)(param_2 + 8) = param_2;
  *(int *)(param_2 + 0xc) = param_2;
  if (iVar2 != param_1 + 0x30) {
    if (param_3 == 0) {
      iVar2 = *(int *)(param_1 + 0x478);
      goto LAB_00353590;
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    *(int *)(iVar2 + 8) = param_1 + 0x30;
    *(int *)(iVar2 + 0xc) = iVar1;
    *(int *)(param_1 + 0x3c) = iVar2;
    *(int *)(iVar1 + 8) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x478);
LAB_00353590:
  if (iVar2 == 0) {
    FUN_00353518();
  }
  return;
}


// ==== FUN_003535b0 @ 003535b0 ====

void FUN_003535b0(undefined8 param_1,int param_2,uint param_3)

{
  *(uint *)(param_2 + 4) = param_3 | 1;
  *(int *)(param_2 + 0xc) = param_2;
  *(int *)(param_2 + 8) = param_2;
  *(uint *)(param_2 + param_3) = param_3;
  FUN_00353518();
  return;
}


// ==== FUN_003535e0 @ 003535e0 ====

bool FUN_003535e0(int param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x474);
  if (uVar1 == 0) {
    return true;
  }
  if (param_2 != 0) {
    return uVar1 <= param_3 + param_4;
  }
  return param_3 < uVar1;
}


// ==== FUN_00353610 @ 00353610 ====

void FUN_00353610(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(uint *)(param_1 + 4) & 0x7ffffff8;
  uVar1 = uVar2 - 0x10;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x80000007 | uVar1;
  puVar3 = (undefined4 *)(param_1 + (uVar2 - 8));
  ((uint *)(param_1 + uVar1))[1] = param_2 | 8;
  *(uint *)(param_1 + uVar1) = uVar1;
  *puVar3 = 8;
  puVar3[1] = 9;
  return;
}


// ==== FUN_00353670 @ 00353670 ====

undefined8 FUN_00353670(undefined8 param_1,uint param_2,uint param_3)

{
  ((undefined4 *)param_1)[1] = param_2 | param_3;
  *(undefined4 *)param_1 = 0;
  FUN_00353610(param_1,0);
  return param_1;
}


// ==== FUN_00353700 @ 00353700 ====

void FUN_00353700(undefined8 param_1)

{
  FUN_0036a038(0x40a718,param_1);
  return;
}


// ==== FUN_00353758 @ 00353758 ====

int FUN_00353758(undefined8 param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uStack_11c;
  int iStack_118;
  uint uStack_114;
  
  uStack_11c = param_3;
LAB_00353790:
  uStack_114 = 0;
  do {
    iStack_118 = 0;
    if ((ulong)(long)(param_2 + 0xb) < 0x11) {
      uVar23 = 0x10;
    }
    else {
      uVar23 = (long)(param_2 + 0xb) & 0xfffffffffffffff8;
    }
    iVar22 = (int)param_1;
    uVar16 = (uint)uVar23;
    if (uVar23 <= (ulong)(long)*(int *)(iVar22 + 4)) {
      piVar12 = (int *)(iVar22 + (uVar16 >> 3) * 4);
      iVar17 = *piVar12;
      if (iVar17 != 0) {
        *(uint *)(iVar17 + 4) = *(uint *)(iVar17 + 4) & 0x7ffffffb;
        *piVar12 = *(int *)(iVar17 + 0xc);
        return iVar17 + 8;
      }
    }
    bVar1 = uVar23 < 0x200;
    uVar15 = uStack_11c & 1;
    if (bVar1) {
      uVar21 = uVar16 >> 3;
      iVar2 = uVar21 * 8 + iVar22;
      iVar17 = *(int *)(iVar2 + 0x30);
      if (iVar17 != iVar2 + 0x28) {
        lVar8 = FUN_003535e0(param_1,uVar15,iVar17,uVar23);
        if (lVar8 != 0) {
          *(uint *)(iVar17 + uVar16 + 4) = *(uint *)(iVar17 + uVar16 + 4) | 1;
          *(undefined4 *)(*(int *)(iVar17 + 8) + 0xc) = *(undefined4 *)(iVar17 + 0xc);
          *(undefined4 *)(*(int *)(iVar17 + 0xc) + 8) = *(undefined4 *)(iVar17 + 8);
          return iVar17 + 8;
        }
      }
    }
    else {
      uVar21 = FUN_00353368(uVar23);
      if ((*(uint *)(iVar22 + 4) & 1) != 0) {
        FUN_00354a70(param_1);
      }
    }
    iVar17 = iVar22 + 0x30;
LAB_00353910:
    iVar2 = *(int *)(iVar22 + 0x38);
    if (iVar2 != iVar17) {
      iVar10 = *(int *)(iVar2 + 4);
      do {
        iVar20 = *(int *)(iVar2 + 8);
        uVar19 = (long)iVar10 & 0x7ffffff8;
        lVar8 = FUN_003535e0(param_1,uVar15,iVar2,uVar19);
        uVar14 = (uint)uVar19;
        if (bVar1) {
          if (iVar2 == *(int *)(iVar22 + 0x444)) {
            if (iVar20 == iVar17) {
              if ((uVar23 & 0xffffffff) + 0x10 < uVar19) {
                iVar10 = iVar2 + uVar16;
                if (lVar8 == 0) goto LAB_00353988;
                uVar14 = uVar14 - uVar16;
                *(int *)(iVar22 + 0x3c) = iVar10;
                *(int *)(iVar22 + 0x38) = iVar10;
                *(int *)(iVar22 + 0x444) = iVar10;
                puVar4 = (uint *)(iVar10 + uVar14);
                *(int *)(iVar10 + 8) = iVar17;
                *(int *)(iVar10 + 0xc) = iVar17;
                *(uint *)(iVar2 + 4) = uVar16 | 1;
                goto LAB_00353b40;
              }
              *(int *)(iVar22 + 0x38) = iVar20;
            }
            else {
              *(int *)(iVar22 + 0x38) = iVar20;
            }
          }
          else {
            *(int *)(iVar22 + 0x38) = iVar20;
          }
        }
        else {
LAB_00353988:
          *(int *)(iVar22 + 0x38) = iVar20;
        }
        *(int *)(iVar20 + 0xc) = iVar17;
        if ((uVar19 == uVar23) && (iVar10 = iVar2 + uVar16, lVar8 != 0)) goto LAB_003538cc;
        if (uVar19 < 0x200) {
          uVar11 = uVar14 >> 3;
          iVar20 = uVar14 + iVar22 + 0x28;
          iVar13 = *(int *)(uVar14 + iVar22 + 0x34);
        }
        else {
          uVar11 = FUN_00353368(uVar19);
          iVar3 = uVar11 * 8 + iVar22;
          iVar18 = iVar3 + 0x28;
          iVar10 = *(int *)(iVar3 + 0x34);
          iVar20 = iVar18;
          iVar13 = iVar10;
          if ((iVar18 != iVar10) &&
             (iVar20 = *(int *)(iVar3 + 0x30), iVar13 = iVar18,
             (ulong)(long)*(int *)(iVar20 + 4) <= uVar19)) {
            if (uVar19 < ((long)*(int *)(iVar10 + 4) & 0x7ffffff8U)) {
              iVar10 = *(int *)(iVar10 + 0xc);
              while (uVar19 < ((long)*(int *)(iVar10 + 4) & 0x7ffffff8U)) {
                iVar10 = *(int *)(iVar10 + 0xc);
              }
            }
            iVar20 = *(int *)(iVar10 + 8);
            iVar13 = iVar10;
          }
        }
        puVar4 = (uint *)(iVar22 + 0x430 + ((int)uVar11 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << (uVar11 & 0x1f);
        *(int *)(iVar2 + 8) = iVar20;
        *(int *)(iVar2 + 0xc) = iVar13;
        *(int *)(iVar13 + 8) = iVar2;
        *(int *)(iVar20 + 0xc) = iVar2;
        iVar2 = *(int *)(iVar22 + 0x38);
        if (iVar2 == iVar17) break;
        iVar10 = *(int *)(iVar2 + 4);
      } while( true );
    }
    if (!bVar1) {
      iVar2 = uVar21 * 8 + iVar22;
      iVar10 = iVar2 + 0x28;
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar2 != iVar10) {
        iVar20 = *(int *)(iVar2 + 4);
        do {
          uVar19 = (long)iVar20 & 0x7ffffff8;
          if (uVar19 < uVar23) {
            iVar2 = *(int *)(iVar2 + 8);
          }
          else {
            lVar8 = FUN_003535e0(param_1,uVar15,iVar2,uVar19);
            if (lVar8 != 0) {
              uVar14 = (int)uVar19 - uVar16;
              *(undefined4 *)(*(int *)(iVar2 + 8) + 0xc) = *(undefined4 *)(iVar2 + 0xc);
              *(undefined4 *)(*(int *)(iVar2 + 0xc) + 8) = *(undefined4 *)(iVar2 + 8);
              if (0xf < uVar14) {
                iVar10 = iVar2 + uVar16;
                *(int *)(iVar22 + 0x3c) = iVar10;
                puVar4 = (uint *)(iVar10 + uVar14);
                *(int *)(iVar22 + 0x38) = iVar10;
                *(int *)(iVar10 + 8) = iVar17;
                *(int *)(iVar10 + 0xc) = iVar17;
                *(uint *)(iVar2 + 4) = uVar16 | 1;
LAB_00353b40:
                *(uint *)(iVar10 + 4) = uVar14 | 1;
                *puVar4 = uVar14;
                return iVar2 + 8;
              }
              goto LAB_003538c8;
            }
            iVar2 = *(int *)(iVar2 + 8);
          }
          if (iVar2 == iVar10) break;
          iVar20 = *(int *)(iVar2 + 4);
        } while( true );
      }
    }
    uVar21 = uVar21 + 1;
    uVar11 = (int)uVar21 >> 5;
    puVar4 = (uint *)(iVar22 + 0x430 + uVar11 * 4);
    iVar20 = uVar21 * 8 + iVar22 + 0x28;
    uVar14 = *puVar4;
    uVar21 = 1 << (uVar21 & 0x1f);
    iVar10 = uVar11 * 0x100 + 0x30 + iVar22;
LAB_00353ba8:
    if ((uVar21 <= uVar14) && (uVar5 = uVar21 & uVar14, uVar21 != 0)) goto code_r0x00353c0c;
    puVar9 = (uint *)(uVar11 * 4 + iVar22 + 0x430);
    while( true ) {
      iVar20 = iVar10;
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
      iVar10 = iVar20 + 0x100;
      if (3 < uVar11) break;
      uVar14 = *puVar9;
      if (uVar14 != 0) goto code_r0x00353be8;
    }
    uVar21 = *(uint *)(iVar22 + 0x440);
    uVar14 = *(uint *)(uVar21 + 4) & 0x7ffffff8;
    if ((uVar23 & 0xffffffff) + 0x10 <= (ulong)(long)(int)uVar14) {
      if ((*(int *)(iVar22 + 0x474) == 0) || (uVar15 == 0)) {
        uVar11 = uVar14 - uVar16;
        *(uint *)(uVar21 + 4) = uVar16 | 1;
        uVar16 = uVar21 + uVar16;
        *(uint *)(uVar16 + 4) = uVar11 | 1;
        uVar15 = uVar21;
      }
      else {
        uVar15 = (uVar21 + uVar14) - uVar16;
        if ((uVar15 & 7) == 0) {
          uVar11 = uVar14 - uVar16;
        }
        else {
          uVar15 = uVar15 & 0xfffffff8;
          uVar11 = uVar15 - uVar21;
          uVar23 = (ulong)(int)(uVar14 - uVar11);
        }
        iVar17 = (int)uVar23;
        *(int *)(uVar15 + 4) = iVar17;
        piVar12 = (int *)(uVar15 + iVar17);
        *piVar12 = iVar17;
        piVar12[1] = piVar12[1] | 1;
        uVar16 = uVar21;
      }
      *(uint *)(iVar22 + 0x440) = uVar16;
      FUN_003535b0(param_1,uVar16,uVar11);
      return uVar15 + 8;
    }
    if ((*(uint *)(iVar22 + 4) & 1) != 0) {
      FUN_00354a70(param_1);
      uVar21 = uVar16 >> 3;
      goto LAB_00353910;
    }
    if (*(int *)(iVar22 + 0x474) == 0) {
      iVar17 = *(int *)(iVar22 + 0x47c);
    }
    else {
      if ((uStack_11c & 0x40000000) == 0) {
        if (uVar15 == 0) {
          uStack_11c = uStack_11c | 0x40000001;
        }
        else {
          uStack_11c = uStack_11c & 0xfffffffc | 0x40000000;
        }
        goto LAB_00353790;
      }
      iVar17 = *(int *)(iVar22 + 0x47c);
    }
    if (iVar17 != 0) {
      lVar8 = FUN_00354e78(param_1,uVar23);
      iVar17 = (int)lVar8;
      if (lVar8 != 0) {
        iVar2 = iVar17 + (*(uint *)(iVar17 + 4) & 0x7ffffff8);
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
        iStack_118 = iVar17 + 8;
      }
    }
    if (iStack_118 != 0) {
      return iStack_118;
    }
    if (*(int *)(iVar22 + 0x4bc) == 0) {
      return 0;
    }
    uStack_114 = uStack_114 + 1;
    if (*(uint *)(iVar22 + 0x4c4) <= uStack_114) {
      return 0;
    }
    iVar17 = FUN_00352d38(*(undefined4 *)(iVar22 + 0x4f4));
    if (iVar17 < 1) {
      pcVar7 = *(code **)(iVar22 + 0x4bc);
    }
    else {
      uVar6 = *(undefined4 *)(iVar22 + 0x4f4);
      iVar2 = iVar17;
      while( true ) {
        iVar2 = iVar2 + -1;
        FUN_00352cb0(uVar6);
        if (iVar2 == 0) break;
        uVar6 = *(undefined4 *)(iVar22 + 0x4f4);
      }
      pcVar7 = *(code **)(iVar22 + 0x4bc);
    }
    lVar8 = (*pcVar7)(param_1,param_2,param_2 + 0x40,*(undefined4 *)(iVar22 + 0x4c0));
    if (0 < iVar17) {
      uVar6 = *(undefined4 *)(iVar22 + 0x4f4);
      while( true ) {
        iVar17 = iVar17 + -1;
        FUN_00352bc8(uVar6);
        if (iVar17 == 0) break;
        uVar6 = *(undefined4 *)(iVar22 + 0x4f4);
      }
    }
    if (lVar8 == 0) {
      return 0;
    }
  } while( true );
code_r0x00353be8:
  iVar20 = iVar20 + 0xf8;
  uVar21 = 1;
  while( true ) {
    uVar5 = uVar21 & uVar14;
code_r0x00353c0c:
    if (uVar5 != 0) break;
    uVar21 = uVar21 << 1;
    iVar20 = iVar20 + 8;
  }
  iVar2 = *(int *)(iVar20 + 8);
  if (iVar2 == iVar20) {
    iVar20 = iVar2 + 8;
    uVar14 = uVar14 & ~uVar21;
    uVar21 = uVar21 << 1;
    *puVar4 = uVar14;
  }
  else {
    uVar19 = (long)*(int *)(iVar2 + 4) & 0x7ffffff8;
    if (*(int *)(iVar22 + 0x474) == 0) {
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
LAB_00353cc0:
      uVar15 = (int)uVar19 - uVar16;
      *(undefined4 *)(*(int *)(iVar2 + 8) + 0xc) = uVar6;
      *(undefined4 *)(*(int *)(iVar2 + 0xc) + 8) = *(undefined4 *)(iVar2 + 8);
      if (0xf < uVar15) {
        iVar10 = iVar2 + uVar16;
        *(int *)(iVar22 + 0x3c) = iVar10;
        *(int *)(iVar22 + 0x38) = iVar10;
        *(int *)(iVar10 + 8) = iVar17;
        *(int *)(iVar10 + 0xc) = iVar17;
        if (bVar1) {
          *(int *)(iVar22 + 0x444) = iVar10;
        }
        *(uint *)(iVar2 + 4) = uVar16 | 1;
        *(uint *)(iVar10 + 4) = uVar15 | 1;
        *(uint *)(iVar10 + uVar15) = uVar15;
        return iVar2 + 8;
      }
LAB_003538c8:
      iVar10 = iVar2 + (int)uVar19;
LAB_003538cc:
      *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) | 1;
      return iVar2 + 8;
    }
    while (iVar2 != iVar20) {
      lVar8 = FUN_003535e0(param_1,uVar15,iVar2,uVar19);
      if (lVar8 != 0) {
        uVar6 = *(undefined4 *)(iVar2 + 0xc);
        goto LAB_00353cc0;
      }
      iVar2 = *(int *)(iVar2 + 8);
      uVar19 = (long)*(int *)(iVar2 + 4) & 0x7ffffff8;
    }
    iVar20 = iVar2 + 8;
    uVar21 = uVar21 << 1;
  }
  goto LAB_00353ba8;
}


// ==== FUN_00353f50 @ 00353f50 ====

void FUN_00353f50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x4f4);
  if (iVar1 != 0) {
    FUN_00352bc8();
  }
  FUN_00353fb0(param_1,param_2);
  if (iVar1 != 0) {
    FUN_00352cb0();
  }
  return;
}


// ==== FUN_00353fb0 @ 00353fb0 ====

void FUN_00353fb0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = (int)param_2;
  puVar7 = (uint *)(iVar4 + -8);
  iVar9 = (int)param_1;
  uVar8 = *(uint *)(iVar4 + -4) & 0x7ffffff8;
  if (*(uint *)(iVar9 + 4) < uVar8) {
    uVar1 = *(uint *)(iVar4 + -4);
  }
  else {
    lVar3 = FUN_003535e0(param_1,0,puVar7,uVar8);
    if (lVar3 != 0) {
      puVar5 = (undefined4 *)(iVar9 + (uVar8 >> 1));
      *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 1;
      *(undefined4 *)(iVar4 + 4) = *puVar5;
      *(uint *)(iVar4 + -4) = *(uint *)(iVar4 + -4) | 0x80000004;
      *puVar5 = puVar7;
      return;
    }
    uVar1 = *(uint *)(iVar4 + -4);
  }
  if ((uVar1 & 2) != 0) {
    return;
  }
  puVar6 = (uint *)((int)puVar7 + uVar8);
  uVar2 = puVar6[1];
  if ((uVar1 & 1) == 0) {
    uVar8 = uVar8 + *puVar7;
    puVar7 = (uint *)((int)puVar7 - *puVar7);
    puVar7[1] = uVar8 | 1;
    *puVar6 = uVar8;
    *(uint *)(puVar7[2] + 0xc) = puVar7[3];
    *(uint *)(puVar7[3] + 8) = puVar7[2];
  }
  if ((*(uint *)((int)puVar6 + (uVar2 & 0x7ffffff8) + 4) & 1) == 0) {
    uVar8 = uVar8 + (uVar2 & 0x7ffffff8);
    *(uint *)(puVar6[2] + 0xc) = puVar6[3];
    *(uint *)(puVar6[3] + 8) = puVar6[2];
    puVar7[1] = uVar8 | 1;
    *(uint *)((int)puVar7 + uVar8) = uVar8;
  }
  else {
    *puVar6 = uVar8;
    puVar6[1] = puVar6[1] & 0xfffffffe;
  }
  if (puVar7 == *(uint **)(iVar9 + 0x440)) {
    *(uint **)(iVar9 + 0x440) = puVar7;
  }
  else {
    if (puVar6 != *(uint **)(iVar9 + 0x440)) {
      uVar1 = *(uint *)(iVar9 + 0x3c);
      puVar7[2] = iVar9 + 0x30;
      puVar7[3] = uVar1;
      *(uint **)(iVar9 + 0x3c) = puVar7;
      *(uint **)(uVar1 + 8) = puVar7;
      goto LAB_00354134;
    }
    *(uint **)(iVar9 + 0x440) = puVar7;
  }
  FUN_003535b0(param_1,puVar7,uVar8);
LAB_00354134:
  if (((0xffff < uVar8) && (lVar3 = FUN_003534a8(param_1,(int)puVar7 + uVar8), lVar3 != 0)) &&
     (*(uint *)(iVar9 + 0x4d8) <= uVar8)) {
    FUN_003550e8(param_1,*(undefined4 *)(iVar9 + 0x4dc));
  }
  return;
}


// ==== FUN_00354190 @ 00354190 ====

undefined8
FUN_00354190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x4f4);
  if (iVar1 != 0) {
    FUN_00352bc8();
  }
  uVar2 = FUN_00354228(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    FUN_00352cb0();
  }
  return uVar2;
}


// ==== FUN_00354228 @ 00354228 ====

uint * FUN_00354228(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,ulong param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  ulong uVar13;
  int iVar14;
  
  if ((param_3 < 9) && (param_4 == 0)) {
    puVar3 = (uint *)FUN_00353758(param_1,param_2,param_5);
  }
  else {
    if (param_3 < 0x10) {
      param_3 = 0x10;
    }
    uVar7 = param_3 - 1;
    if ((param_3 & uVar7) != 0) {
      uVar7 = uVar7 >> 1 | uVar7;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      param_3 = (uVar7 | uVar7 >> 0x10) + 1;
    }
    if ((param_4 & 7) != 0) {
      param_4 = param_4 + 7 & 0xfffffff8;
    }
    uVar8 = (ulong)((int)param_2 + 0xb);
    uVar13 = 0x10;
    if (0x10 < uVar8) {
      uVar13 = uVar8 & 0xfffffffffffffff8;
    }
    uVar7 = (uint)uVar13;
    iVar14 = (int)param_1;
    if ((param_5 & 4) != 0) {
      iVar11 = iVar14 + 0x30;
      iVar9 = *(int *)(iVar14 + 0x3c);
      if (iVar9 != iVar11) {
        iVar1 = *(int *)(iVar9 + 4);
        while( true ) {
          if (((long)iVar1 & 0x7ffffff8U) == uVar13) {
            puVar3 = (uint *)(iVar9 + 8);
            if ((param_3 == 0) || (((int)puVar3 + param_4 & param_3 - 1) == 0)) goto LAB_003543c8;
            iVar9 = *(int *)(iVar9 + 0xc);
          }
          else {
            iVar9 = *(int *)(iVar9 + 0xc);
          }
          if (iVar9 == iVar11) break;
          iVar1 = *(int *)(iVar9 + 4);
        }
      }
      uVar4 = uVar7 >> 3;
      if (0x1ff < uVar13) {
        uVar4 = FUN_00353368(uVar13);
      }
      iVar11 = *(int *)(iVar11 + uVar4 * 4);
      iVar9 = *(int *)(iVar11 + 0xc);
      if (iVar9 != iVar11) {
        iVar1 = *(int *)(iVar9 + 4);
        do {
          if (((long)iVar1 & 0x7ffffff8U) == uVar13) {
            puVar3 = (uint *)(iVar9 + 8);
            if ((param_3 == 0) || (((int)puVar3 + param_4 & param_3 - 1) == 0)) {
LAB_003543c8:
              *(uint *)(iVar9 + uVar7 + 4) = *(uint *)(iVar9 + uVar7 + 4) | 1;
              *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = *(undefined4 *)(iVar9 + 0xc);
              *(undefined4 *)(*(int *)(iVar9 + 0xc) + 8) = *(undefined4 *)(iVar9 + 8);
              return puVar3;
            }
            iVar9 = *(int *)(iVar9 + 0xc);
          }
          else {
            iVar9 = *(int *)(iVar9 + 0xc);
          }
          if (iVar9 == iVar11) break;
          iVar1 = *(int *)(iVar9 + 4);
        } while( true );
      }
    }
    lVar6 = FUN_00353758(param_1,uVar7 + param_3 + param_4 + 0x10,param_5);
    iVar9 = (int)lVar6;
    if (lVar6 == 0) {
      puVar3 = (uint *)0x0;
    }
    else {
      if (param_3 == 0) {
        trap(7);
      }
      puVar3 = (uint *)(iVar9 + -8);
      puVar12 = puVar3;
      if ((int)(iVar9 + param_4) % (int)param_3 != 0) {
        puVar5 = (uint *)(((iVar9 + param_4 + (param_3 - 1) & -param_3) - 8) - param_4);
        puVar12 = (uint *)((int)puVar5 + param_3);
        if (0xf < (int)puVar5 - (int)puVar3) {
          puVar12 = puVar5;
        }
        uVar10 = (int)puVar12 - (int)puVar3;
        uVar4 = (*(uint *)(iVar9 + -4) & 0x7ffffff8) - uVar10;
        if ((*(uint *)(iVar9 + -4) & 2) != 0) {
          iVar14 = *(int *)(iVar9 + -8);
          puVar12[1] = uVar4 | 2;
          *puVar12 = iVar14 + uVar10;
          return puVar12 + 2;
        }
        puVar3 = (uint *)((int)puVar12 + uVar4);
        puVar12[1] = uVar4 | 1;
        *puVar3 = uVar4;
        puVar3[1] = puVar3[1] | 1;
        *(uint *)(iVar9 + -4) = *(uint *)(iVar9 + -4) & 0x80000007 | uVar10;
        *puVar12 = uVar10;
        uVar2 = *(undefined4 *)(iVar14 + 0x488);
        *(undefined4 *)(iVar14 + 0x488) = 0;
        FUN_00353fb0(param_1,lVar6);
        *(undefined4 *)(iVar14 + 0x488) = uVar2;
      }
      puVar3 = puVar12 + 2;
      if (((long)(int)puVar12[1] & 2U) == 0) {
        uVar8 = (long)(int)puVar12[1] & 0x7ffffff8;
        uVar4 = (int)uVar8 - uVar7;
        if ((uVar13 & 0xffffffff) + 0x10 < uVar8) {
          iVar9 = (int)puVar12 + uVar7;
          *(uint *)(iVar9 + 4) = uVar4 | 1;
          iVar11 = iVar9 + uVar4;
          puVar12[1] = puVar12[1] & 0x80000007 | uVar7;
          uVar7 = *(uint *)(iVar11 + 4) & 0x7ffffff8;
          if ((*(uint *)(iVar11 + uVar7 + 4) & 1) == 0) {
            uVar4 = uVar4 + uVar7;
            *(undefined4 *)(*(int *)(iVar11 + 8) + 0xc) = *(undefined4 *)(iVar11 + 0xc);
            *(undefined4 *)(*(int *)(iVar11 + 0xc) + 8) = *(undefined4 *)(iVar11 + 8);
            *(uint *)(iVar9 + 4) = uVar4 | 1;
            *(uint *)(iVar9 + uVar4) = uVar4;
            if ((iVar9 == *(int *)(iVar14 + 0x440)) || (iVar11 == *(int *)(iVar14 + 0x440))) {
              *(int *)(iVar14 + 0x440) = iVar9;
              FUN_003535b0(param_1,iVar9,uVar4);
            }
            else {
              iVar11 = *(int *)(iVar14 + 0x3c);
              *(int *)(iVar9 + 8) = iVar14 + 0x30;
              *(int *)(iVar9 + 0xc) = iVar11;
              *(int *)(iVar14 + 0x3c) = iVar9;
              *(int *)(iVar11 + 8) = iVar9;
            }
          }
          else {
            uVar2 = *(undefined4 *)(iVar14 + 0x488);
            *(undefined4 *)(iVar14 + 0x488) = 0;
            FUN_00353fb0(param_1,iVar9 + 8);
            *(undefined4 *)(iVar14 + 0x488) = uVar2;
          }
        }
        puVar3 = puVar12 + 2;
      }
    }
  }
  return puVar3;
}


// ==== FUN_00354a70 @ 00354a70 ====

void FUN_00354a70(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  
  iVar9 = (int)param_1;
  uVar2 = *(uint *)(iVar9 + 4);
  if (uVar2 == 0) {
    FUN_00352f30(param_1,0,0,1,0,0,0);
  }
  else {
    piVar10 = (int *)(iVar9 + 8);
    do {
      puVar6 = (uint *)*piVar10;
      if (puVar6 != (uint *)0x0) {
        *piVar10 = 0;
        uVar3 = puVar6[1];
        while( true ) {
          puVar4 = (uint *)puVar6[3];
          uVar8 = uVar3 & 0x7ffffff8;
          puVar6[1] = uVar3 & 0x7ffffffb;
          puVar7 = (uint *)((int)puVar6 + uVar8);
          uVar5 = puVar7[1];
          if ((uVar3 & 1) == 0) {
            uVar8 = uVar8 + *puVar6;
            puVar6 = (uint *)((int)puVar6 - *puVar6);
            puVar6[1] = uVar8 | 1;
            *puVar7 = uVar8;
            *(uint *)(puVar6[2] + 0xc) = puVar6[3];
            *(uint *)(puVar6[3] + 8) = puVar6[2];
          }
          if ((*(uint *)((int)puVar7 + (uVar5 & 0x7ffffff8) + 4) & 1) == 0) {
            uVar8 = uVar8 + (uVar5 & 0x7ffffff8);
            *(uint *)(puVar7[2] + 0xc) = puVar7[3];
            *(uint *)(puVar7[3] + 8) = puVar7[2];
            puVar6[1] = uVar8 | 1;
            *(uint *)((int)puVar6 + uVar8) = uVar8;
          }
          else {
            *puVar7 = uVar8;
            puVar7[1] = puVar7[1] & 0xfffffffe;
          }
          if ((puVar6 == *(uint **)(iVar9 + 0x440)) || (puVar7 == *(uint **)(iVar9 + 0x440))) {
            *(uint **)(iVar9 + 0x440) = puVar6;
            FUN_003535b0(param_1,puVar6,uVar8);
          }
          else {
            uVar3 = *(uint *)(iVar9 + 0x3c);
            puVar6[2] = iVar9 + 0x30;
            puVar6[3] = uVar3;
            *(uint **)(iVar9 + 0x3c) = puVar6;
            *(uint **)(uVar3 + 8) = puVar6;
          }
          if (puVar4 == (uint *)0x0) break;
          uVar3 = puVar4[1];
          puVar6 = puVar4;
        }
      }
      bVar1 = piVar10 != (int *)(iVar9 + (uVar2 >> 3) * 4);
      piVar10 = piVar10 + 1;
    } while (bVar1);
    *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) & 0xfffffffe;
  }
  return;
}


// ==== FUN_00354c60 @ 00354c60 ====

void FUN_00354c60(undefined8 param_1,int param_2,int param_3)

{
  *(int *)(param_2 + 0x28) = param_3;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(int *)(param_3 + 0x24) = param_2;
  *(int *)(*(int *)(param_2 + 0x24) + 0x28) = param_2;
  return;
}


// ==== FUN_00354c80 @ 00354c80 ====

void FUN_00354c80(undefined8 param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return;
}


// ==== FUN_00354ca0 @ 00354ca0 ====

uint FUN_00354ca0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x46c);
  while( true ) {
    while( true ) {
      if (uVar1 == param_1 + 0x448U) {
        return 0;
      }
      if (uVar1 <= param_2) break;
      uVar1 = *(uint *)(uVar1 + 0x24);
    }
    if (param_2 < uVar1 + *(int *)(uVar1 + 4)) break;
    uVar1 = *(uint *)(uVar1 + 0x24);
  }
  return uVar1;
}


// ==== FUN_00354cf0 @ 00354cf0 ====

undefined4
FUN_00354cf0(undefined8 param_1,long param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  uint *puVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar1 = *(int *)(iVar6 + 0x4f4);
  if (iVar1 != 0) {
    FUN_00352bc8();
  }
  if (param_2 == 0) {
    if ((param_3 == 0) ||
       (lVar3 = FUN_00354f58(param_1,(param_3 - 1) + *(int *)(iVar6 + 0x4e4) &
                                     -*(int *)(iVar6 + 0x4e4)), lVar3 == 0)) goto LAB_00354e3c;
    bVar4 = true;
  }
  else {
    if (param_3 < 0x40) {
LAB_00354e3c:
      if (iVar1 == 0) {
        return 0;
      }
      FUN_00352cb0();
      return 0;
    }
    iVar2 = *(int *)(iVar6 + 0x4e4);
    if (iVar2 == 0) {
      trap(7);
    }
    if ((int)param_3 % iVar2 != 0) {
      param_3 = param_3 & -iVar2;
    }
    puVar5 = (uint *)param_2;
    puVar5[5] = param_4;
    puVar5[6] = param_5;
    puVar5[7] = param_6;
    puVar5[8] = param_7;
    puVar5[1] = param_3;
    puVar5[2] = param_3;
    puVar5[3] = 0;
    puVar5[4] = param_4;
    *puVar5 = (int)puVar5 + 0x33U & 0xfffffff8;
    FUN_00354c60(param_1,param_2,iVar6 + 0x448);
    lVar3 = FUN_00353670(*puVar5,param_3 - (*puVar5 - (int)puVar5),1);
    bVar4 = *(int *)(iVar6 + 0x440) != iVar6 + 0x30;
  }
  FUN_00353550(param_1,lVar3,bVar4);
  if (iVar1 != 0) {
    FUN_00352cb0();
  }
  return 1;
}


// ==== FUN_00354e78 @ 00354e78 ====

long FUN_00354e78(undefined8 param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = 0;
  lVar4 = 0;
  iVar5 = (int)param_1;
  bVar1 = false;
  if (*(int *)(iVar5 + 0x4bc) == 0) {
    lVar4 = FUN_00354f58(param_1);
    if (lVar4 == 0) {
      return 0;
    }
    FUN_00353550(param_1,lVar4,1);
    bVar1 = true;
    uVar2 = *(uint *)((int)lVar4 + 4) & 0x7ffffff8;
  }
  if ((lVar4 != 0) && (param_2 < uVar2)) {
    uVar2 = uVar2 - param_2;
    *(uint *)((int)lVar4 + 4) = param_2 | 1;
    puVar3 = (uint *)((int)lVar4 + param_2);
    *puVar3 = param_2;
    puVar3[1] = uVar2;
    *(uint *)((int)puVar3 + uVar2) = uVar2;
    if (bVar1) {
      FUN_00353550(param_1,puVar3,0);
    }
    else {
      uVar2 = *(uint *)(iVar5 + 0x3c);
      puVar3[2] = iVar5 + 0x30;
      puVar3[3] = uVar2;
      *(uint **)(iVar5 + 0x3c) = puVar3;
      *(uint **)(uVar2 + 8) = puVar3;
    }
  }
  return lVar4;
}


// ==== FUN_00354f58 @ 00354f58 ====

undefined8 FUN_00354f58(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar1 = *(int *)(iVar7 + 0x4e4);
  uVar4 = param_2 + -1 + iVar1 & -iVar1;
  uVar6 = uVar4;
  if (uVar4 < *(uint *)(iVar7 + 0x4e8)) {
    uVar6 = (*(uint *)(iVar7 + 0x4e8) - 1) + iVar1 & -iVar1;
  }
  do {
    lVar2 = FUN_0035e7d8(uVar6);
    if (lVar2 != 0) {
      iVar1 = *(int *)(iVar7 + 0x470);
      puVar5 = (uint *)lVar2;
      *puVar5 = (int)puVar5 + 0x33U & 0xfffffff8;
      uVar4 = (uint)(iVar1 != iVar7 + 0x448);
      puVar5[6] = uVar4;
      puVar5[1] = uVar6;
      puVar5[2] = uVar6;
      puVar5[3] = 0;
      puVar5[4] = uVar4;
      puVar5[5] = 1;
      puVar5[7] = 0;
      puVar5[8] = 0;
      FUN_00354c60(param_1,lVar2);
      if (*(int *)(iVar7 + 0x474) == 0) {
        uVar4 = *puVar5;
      }
      else if (*(int *)(iVar7 + 0x470) == *(int *)(iVar7 + 0x46c)) {
        uVar4 = *puVar5;
      }
      else {
        *(undefined4 *)(iVar7 + 0x478) = 1;
        *(undefined4 *)(iVar7 + 0x474) = 0;
        uVar4 = *puVar5;
      }
      uVar3 = FUN_00353670(uVar4,uVar6 - (uVar4 - (int)puVar5),1);
      return uVar3;
    }
    uVar6 = uVar6 * 3 >> 2;
  } while (uVar4 <= uVar6);
  return 0;
}


// ==== FUN_00355080 @ 00355080 ====

undefined4 FUN_00355080(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  uVar1 = 0;
  if ((*(int *)(iVar2 + 0x10) != 0) || ((param_3 != 0 && (uVar1 = 0, *(int *)(iVar2 + 0x14) != 0))))
  {
    if (*(code **)(iVar2 + 0x1c) == (code *)0x0) {
      FUN_0035e828(param_2);
    }
    else {
      (**(code **)(iVar2 + 0x1c))
                (param_1,iVar2,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0x20));
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_003550e8 @ 003550e8 ====

int FUN_003550e8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = (int)param_1;
  iVar1 = *(int *)(iVar9 + 0x4f4);
  if (iVar1 != 0) {
    FUN_00352bc8();
  }
  piVar7 = *(int **)(iVar9 + 0x46c);
  iVar10 = 0;
  if (piVar7 != (int *)(iVar9 + 0x448)) {
    iVar4 = piVar7[4];
    do {
      if (iVar4 == 0) {
        piVar7 = (int *)piVar7[9];
      }
      else {
        iVar4 = piVar7[1];
        if ((*(uint *)((int)piVar7 + iVar4 + -0xc) & 1) == 0) {
          uVar6 = (int)piVar7 + ((iVar4 + -0x10) - *(int *)((int)piVar7 + iVar4 + -0x10));
          piVar8 = piVar7;
          if (uVar6 < *piVar7 + 0x10U) {
            iVar4 = *(int *)(uVar6 + 8);
            iVar2 = *(int *)(uVar6 + 0xc);
            *(int *)(iVar4 + 0xc) = iVar2;
            *(undefined4 *)(*(int *)(uVar6 + 0xc) + 8) = *(undefined4 *)(uVar6 + 8);
            piVar8 = (int *)piVar7[10];
            FUN_00354c80(param_1,piVar7);
            iVar3 = piVar7[1];
            lVar5 = FUN_00355080(param_1,piVar7,0);
            if (lVar5 == 0) {
              *(int *)(uVar6 + 8) = iVar4;
              *(int *)(uVar6 + 0xc) = iVar2;
              *(uint *)(iVar4 + 0xc) = uVar6;
              *(uint *)(iVar2 + 8) = uVar6;
              FUN_00354c60(param_1,piVar7,piVar8);
              piVar8 = piVar7;
            }
            else {
              iVar10 = iVar10 + iVar3;
              if (uVar6 == *(uint *)(iVar9 + 0x440)) {
                *(int *)(iVar9 + 0x440) = iVar9 + 0x30;
                FUN_003533c8(param_1);
                piVar7 = (int *)piVar8[9];
                goto LAB_00355214;
              }
            }
          }
          piVar7 = (int *)piVar8[9];
        }
        else {
          piVar7 = (int *)piVar7[9];
        }
      }
LAB_00355214:
      if (piVar7 == (int *)(iVar9 + 0x448)) break;
      iVar4 = piVar7[4];
    } while( true );
  }
  if (iVar1 != 0) {
    FUN_00352cb0();
  }
  return iVar10;
}


// ==== FUN_00355278 @ 00355278 ====

/* Strings referenciadas:
     "sceMc2_sema_main"
     "sceMc2_sema_start"
     "sceMc2_sema_end"
     "sceMc2_basic_thread" */

undefined4 FUN_00355278(void)

{
  long lVar1;
  undefined1 auStack_100 [4];
  undefined1 *puStack_fc;
  undefined *puStack_f8;
  undefined4 uStack_f4;
  undefined1 *puStack_f0;
  undefined4 uStack_ec;
  char *pcStack_e0;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  char *pcStack_8c;
  
  if (DAT_003d6340 == 1) {
    FUN_00355420();
  }
  pcStack_8c = "sceMc2_sema_main";
  DAT_0046cb6c = 0xffffffff;
  DAT_0046cb60 = 0xffffffff;
  DAT_0046cb64 = 0xffffffff;
  DAT_0046cb68 = 0xffffffff;
  uStack_98 = 1;
  uStack_9c = 0x7f;
  lVar1 = CreateSema(auStack_a0);
  DAT_0046cb6c = (undefined4)lVar1;
  if (-1 < lVar1) {
    uStack_98 = 0;
    uStack_9c = 0x7f;
    pcStack_8c = "sceMc2_sema_start";
    lVar1 = CreateSema(auStack_a0);
    DAT_0046cb64 = (undefined4)lVar1;
    if (-1 < lVar1) {
      uStack_9c = 0x7f;
      pcStack_8c = "sceMc2_sema_end";
      uStack_98 = 0;
      lVar1 = CreateSema(auStack_a0);
      DAT_0046cb68 = (undefined4)lVar1;
      if (-1 < lVar1) {
        DAT_0046c644 = 0;
        puStack_fc = &LAB_00355d70;
        puStack_f8 = &DAT_0046cb80;
        uStack_f4 = 0xc000;
        puStack_f0 = &_mips_gp0_value;
        pcStack_e0 = "sceMc2_basic_thread";
        uStack_ec = 1;
        lVar1 = CreateThread(auStack_100);
        DAT_0046cb60 = (undefined4)lVar1;
        if (lVar1 < 0) {
          DAT_003d6340 = 1;
          FUN_00355420();
          return 0x81018004;
        }
        lVar1 = FUN_0035b5c8();
        if (lVar1 != 0) {
          FUN_0035a990();
          FUN_00356690();
          FUN_00368738(DAT_0046cb60,0);
          DAT_003d6340 = 1;
          return 0;
        }
      }
    }
  }
  DAT_003d6340 = 1;
  FUN_00355420();
  return 0x81018003;
}


// ==== FUN_00355420 @ 00355420 ====

/* Strings referenciadas:
     "libmc2: TerminateTread faild " */

undefined4 FUN_00355420(void)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    if (DAT_0046c644 != 0) {
      FUN_00356058(0,0);
    }
    if (-1 < DAT_0046cb60) {
      lVar2 = TerminateThread();
      if (lVar2 < 0) {
        FUN_0036a038(0x40a828);
      }
      DeleteThread(DAT_0046cb60);
    }
    if (-1 < DAT_0046cb64) {
      DeleteSema();
    }
    if (-1 < DAT_0046cb68) {
      DeleteSema();
    }
    if (-1 < DAT_0046cb6c) {
      DeleteSema();
    }
    FUN_0035b658();
    DAT_003d6340 = 0;
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_003554f8 @ 003554f8 ====

undefined8 FUN_003554f8(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0xffffffff81018001;
  }
  else if ((*(int *)(param_1 + 4) - 2U < 2) && (*(int *)(param_1 + 8) == 0)) {
    lVar2 = FUN_0035c308();
    if (lVar2 < 0) {
      uVar1 = 0xffffffff81010017;
    }
    else {
      FUN_003566f0(lVar2);
      uVar1 = FUN_0035c470(lVar2);
    }
  }
  else {
    uVar1 = 0xffffffff81010016;
  }
  return uVar1;
}


// ==== FUN_00355598 @ 00355598 ====

undefined4 FUN_00355598(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    lVar2 = FUN_0035c428(param_1);
    if (lVar2 < 0) {
      uVar1 = 0x81018002;
    }
    else {
      WaitSema(DAT_0046cb6c);
      if (DAT_0046c644 == 0) {
        DAT_0046c640 = (undefined4)lVar2;
        DAT_0046c644 = 3;
        SignalSema(DAT_0046cb64);
        SignalSema(DAT_0046cb6c);
        uVar1 = 0;
      }
      else {
        SignalSema(DAT_0046cb6c);
        uVar1 = 0x81010010;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00355648 @ 00355648 ====

undefined4 FUN_00355648(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    lVar2 = FUN_0035c428(param_1);
    if (lVar2 < 0) {
      uVar1 = 0x81018002;
    }
    else {
      WaitSema(DAT_0046cb6c);
      if (DAT_0046c644 == 0) {
        DAT_0046c640 = (undefined4)lVar2;
        DAT_0046c644 = 2;
        DAT_0046c64c = param_2;
        SignalSema(DAT_0046cb64);
        SignalSema(DAT_0046cb6c);
        uVar1 = 0;
      }
      else {
        SignalSema(DAT_0046cb6c);
        uVar1 = 0x81010010;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00355708 @ 00355708 ====

undefined4 FUN_00355708(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    lVar2 = FUN_0035c428(param_1);
    if (lVar2 < 0) {
      uVar1 = 0x81018002;
    }
    else {
      uVar3 = strlen(param_2);
      if (uVar3 < 0x80) {
        WaitSema(DAT_0046cb6c);
        if (DAT_0046c644 == 0) {
          DAT_0046c640 = (undefined4)lVar2;
          DAT_0046c644 = 0xe;
          strcpy(0x46ca5c,param_2);
          DAT_0046c64c = param_3;
          SignalSema(DAT_0046cb64);
          SignalSema(DAT_0046cb6c);
          uVar1 = 0;
        }
        else {
          SignalSema(DAT_0046cb6c);
          uVar1 = 0x81010010;
        }
      }
      else {
        uVar1 = 0x8101005b;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00355808 @ 00355808 ====

undefined4
FUN_00355808(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    lVar2 = FUN_0035c428(param_1);
    if (lVar2 < 0) {
      uVar1 = 0x81018002;
    }
    else {
      uVar3 = strlen(param_2);
      if (uVar3 < 0x80) {
        WaitSema(DAT_0046cb6c);
        if (DAT_0046c644 == 0) {
          DAT_0046c640 = (undefined4)lVar2;
          DAT_0046c644 = 5;
          strcpy(0x46ca5c,param_2);
          DAT_0046c64c = param_3;
          DAT_0046c650 = param_4;
          DAT_0046c654 = param_5;
          SignalSema(DAT_0046cb64);
          SignalSema(DAT_0046cb6c);
          uVar1 = 0;
        }
        else {
          SignalSema(DAT_0046cb6c);
          uVar1 = 0x81010010;
        }
      }
      else {
        uVar1 = 0x8101005b;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00355928 @ 00355928 ====

undefined4
FUN_00355928(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    lVar2 = FUN_0035c428(param_1);
    if (lVar2 < 0) {
      uVar1 = 0x81018002;
    }
    else {
      uVar3 = strlen(param_2);
      if (uVar3 < 0x80) {
        WaitSema(DAT_0046cb6c);
        if (DAT_0046c644 == 0) {
          DAT_0046c640 = (undefined4)lVar2;
          DAT_0046c644 = 6;
          strcpy(0x46ca5c,param_2);
          DAT_0046c64c = param_3;
          DAT_0046c650 = param_4;
          DAT_0046c654 = param_5;
          SignalSema(DAT_0046cb64);
          SignalSema(DAT_0046cb6c);
          uVar1 = 0;
        }
        else {
          SignalSema(DAT_0046cb6c);
          uVar1 = 0x81010010;
        }
      }
      else {
        uVar1 = 0x8101005b;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00355a48 @ 00355a48 ====

undefined4 FUN_00355a48(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    lVar2 = FUN_0035c428(param_1);
    if (lVar2 < 0) {
      uVar1 = 0x81018002;
    }
    else {
      uVar3 = strlen(param_2);
      if (uVar3 < 0x80) {
        WaitSema(DAT_0046cb6c);
        if (DAT_0046c644 == 0) {
          DAT_0046c640 = (undefined4)lVar2;
          DAT_0046c644 = 7;
          strcpy(0x46ca5c,param_2);
          DAT_0046c64c = 0x8417;
          SignalSema(DAT_0046cb64);
          SignalSema(DAT_0046cb6c);
          uVar1 = 0;
        }
        else {
          SignalSema(DAT_0046cb6c);
          uVar1 = 0x81010010;
        }
      }
      else {
        uVar1 = 0x8101005b;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00355b40 @ 00355b40 ====

undefined4
FUN_00355b40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    lVar2 = FUN_0035c428(param_1);
    if (lVar2 < 0) {
      uVar1 = 0x81018002;
    }
    else {
      uVar3 = strlen(param_2);
      if (uVar3 < 0x80) {
        WaitSema(DAT_0046cb6c);
        if (DAT_0046c644 == 0) {
          DAT_0046c640 = (undefined4)lVar2;
          DAT_0046c644 = 10;
          strcpy(0x46ca5c,param_2);
          DAT_0046c64c = param_3;
          DAT_0046c650 = param_4;
          DAT_0046c654 = param_5;
          DAT_0046c658 = param_6;
          SignalSema(DAT_0046cb64);
          SignalSema(DAT_0046cb6c);
          uVar1 = 0;
        }
        else {
          SignalSema(DAT_0046cb6c);
          uVar1 = 0x81010010;
        }
      }
      else {
        uVar1 = 0x8101005b;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00355c70 @ 00355c70 ====

undefined4 FUN_00355c70(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_003d6340 == 0) {
    uVar1 = 0x81018001;
  }
  else {
    lVar2 = FUN_0035c428(param_1);
    if (lVar2 < 0) {
      uVar1 = 0x81018002;
    }
    else {
      uVar3 = strlen(param_2);
      if (uVar3 < 0x80) {
        WaitSema(DAT_0046cb6c);
        if (DAT_0046c644 == 0) {
          DAT_0046c640 = (undefined4)lVar2;
          DAT_0046c644 = 0xb;
          strcpy(0x46ca5c,param_2);
          DAT_0046c64c = 0x8427;
          SignalSema(DAT_0046cb64);
          SignalSema(DAT_0046cb6c);
          uVar1 = 0;
        }
        else {
          SignalSema(DAT_0046cb6c);
          uVar1 = 0x81010010;
        }
      }
      else {
        uVar1 = 0x8101005b;
      }
    }
  }
  return uVar1;
}


// ==== FUN_00355f88 @ 00355f88 ====

undefined4 FUN_00355f88(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_0046c644 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != 0) {
      *(int *)param_2 = DAT_0046c644;
    }
    if (param_1 == 0) {
      WaitSema(DAT_0046cb68);
    }
    else {
      lVar2 = PollSema(DAT_0046cb68);
      if (lVar2 < 0) {
        return 0;
      }
    }
    if (param_3 != 0) {
      *(undefined4 *)param_3 = DAT_0046c648;
    }
    if (param_2 != 0) {
      *(int *)param_2 = DAT_0046c644;
    }
    DAT_0046c644 = 0;
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00356030 @ 00356030 ====

void FUN_00356030(undefined8 param_1,undefined8 param_2)

{
  FUN_00355f88(1,param_1,param_2);
  return;
}


// ==== FUN_00356058 @ 00356058 ====

void FUN_00356058(undefined8 param_1,undefined8 param_2)

{
  FUN_00355f88(0,param_1,param_2);
  return;
}


// ==== FUN_003560f0 @ 003560f0 ====

int FUN_003560f0(char *param_1,char param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  lVar2 = (long)(int)param_2;
  pcVar3 = param_1;
  if ((long)*param_1 != 0) {
    if (*param_1 == lVar2) goto LAB_0035613c;
    do {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      if ((long)*pcVar3 == 0) break;
    } while (*pcVar3 != lVar2);
  }
  if ((int)cVar1 != lVar2) {
    return -1;
  }
LAB_0035613c:
  return (int)pcVar3 - (int)param_1;
}


// ==== FUN_00356150 @ 00356150 ====

undefined4 FUN_00356150(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = FUN_0035c8d4(param_1,0x2f);
  if (lVar3 == 0) {
    uVar4 = strlen(param_1);
    uVar2 = 0;
    if (uVar4 < 0x20) {
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_00360a00(param_1,0x2f);
    uVar4 = strlen(iVar1 + 1);
    uVar2 = 1;
    if (0x1f < uVar4) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ==== FUN_003561c0 @ 003561c0 ====

undefined4 FUN_003561c0(char *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  cVar2 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    if (((cVar2 == '?') || (cVar2 == '*')) || (param_1 = param_1 + 1, cVar2 < ' ')) break;
    cVar1 = *param_1;
    cVar2 = *param_1;
  }
  return 0;
}


// ==== FUN_00356220 @ 00356220 ====

bool FUN_00356220(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  do {
    lVar4 = FUN_003560f0(param_2,0x3f);
    lVar5 = FUN_003560f0(param_2,0x2a);
    if ((lVar4 < 0) && (lVar5 < 0)) {
      lVar4 = strcmp(param_2,param_1);
      return lVar4 == 0;
    }
    lVar6 = lVar5;
    if (((-1 < lVar4) && (lVar6 = lVar4, -1 < lVar5)) && (lVar5 <= lVar4)) {
      lVar6 = lVar5;
    }
    lVar4 = FUN_0035cfd8(param_2,param_1,lVar6);
    if (lVar4 != 0) {
      return false;
    }
    param_2 = param_2 + (int)lVar6;
    param_1 = param_1 + (int)lVar6;
    cVar2 = *param_2;
    cVar1 = *param_2;
    while (cVar1 == '?') {
      param_2 = param_2 + 1;
      if (*param_1 == '\0') goto LAB_0035631c;
      param_1 = param_1 + 1;
      cVar2 = *param_2;
      cVar1 = *param_2;
    }
  } while (cVar2 != '*');
  do {
    do {
      param_2 = param_2 + 1;
      cVar1 = *param_2;
      cVar2 = *param_2;
    } while (cVar1 == '*');
  } while (cVar1 == '?');
  if (cVar1 == '\0') {
LAB_0035631c:
    bVar3 = true;
  }
  else {
    while( true ) {
      lVar4 = FUN_003560f0(param_1,cVar2);
      if (lVar4 < 0) break;
      lVar5 = FUN_00356220(param_1 + (int)lVar4,param_2);
      if (lVar5 == 1) goto LAB_0035631c;
      cVar2 = *param_2;
      param_1 = param_1 + (int)lVar4 + 1;
    }
    bVar3 = false;
  }
  return bVar3;
}


// ==== FUN_003563a0 @ 003563a0 ====

char * FUN_003563a0(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 == 0) {
    if (DAT_00478b80 == (char *)0x0) {
      return (char *)0x0;
    }
    cVar2 = *DAT_00478b80;
    pcVar4 = DAT_00478b80;
  }
  else {
    strcpy(0x478b88,param_1);
    cVar2 = DAT_00478b88;
    pcVar4 = &DAT_00478b88;
  }
  cVar1 = *pcVar4;
  if (cVar2 == '\0') {
    pcVar4 = (char *)0x0;
  }
  else {
    while( true ) {
      pcVar5 = pcVar4 + 1;
      lVar3 = FUN_0035c8d4(param_2,cVar1);
      if (lVar3 == 0) break;
      if (*pcVar4 == '\0') {
        return (char *)0x0;
      }
      cVar1 = *pcVar5;
      pcVar4 = pcVar5;
    }
    if (*pcVar4 == '\"') {
      cVar2 = *pcVar5;
      pcVar4 = pcVar5;
      while( true ) {
        pcVar6 = pcVar4 + 1;
        lVar3 = FUN_0035c8d4(0x40a8c0,cVar2);
        if (lVar3 != 0) break;
        cVar2 = *pcVar6;
        pcVar4 = pcVar6;
      }
      cVar2 = *pcVar4;
      pcVar4 = pcVar5;
    }
    else {
      cVar2 = *pcVar5;
      while( true ) {
        pcVar6 = pcVar5 + 1;
        lVar3 = FUN_0035c8d4(param_2,cVar2);
        if (lVar3 != 0) break;
        cVar2 = *pcVar6;
        pcVar5 = pcVar6;
      }
      cVar2 = *pcVar5;
    }
    DAT_00478b80 = pcVar6;
    if (cVar2 == '\0') {
      DAT_00478b80 = (char *)0x0;
    }
    pcVar6[-1] = '\0';
  }
  return pcVar4;
}


// ==== FUN_003564c0 @ 003564c0 ====

int FUN_003564c0(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = *param_1;
  cVar2 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    if (cVar2 == '/') {
      iVar3 = iVar3 + 1;
    }
    cVar2 = *param_1;
  }
  return iVar3;
}


// ==== FUN_00356508 @ 00356508 ====

undefined4 FUN_00356508(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = strlen(param_2);
  if (uVar5 < 0x80) {
    strcpy(param_3,&DAT_00479490 + param_1 * 0x898);
    uVar1 = DAT_0040a8c9;
    puVar3 = (undefined1 *)param_3;
    if (*(char *)param_2 == '/') {
      *puVar3 = DAT_0040a8c8;
      puVar3[1] = uVar1;
      lVar6 = FUN_003563a0((char *)param_2 + 1,0x40a8c8);
    }
    else {
      lVar6 = FUN_003563a0(param_2,0x40a8c8);
    }
    while (lVar6 != 0) {
      lVar7 = strcmp(lVar6,0x40a8b0);
      if (lVar7 != 0) {
        lVar7 = strcmp(lVar6,0x40a8b8);
        if (lVar7 == 0) {
          iVar2 = strlen(param_3);
          puVar3[iVar2 + -1] = 0;
          lVar6 = FUN_00360a00(param_3,0x2f);
          if (lVar6 == 0) goto LAB_00356540;
          *(undefined1 *)((int)lVar6 + 1) = 0;
        }
        else {
          FUN_0035c7a4(param_3,lVar6);
          FUN_0035c7a4(param_3,0x40a8c8);
        }
      }
      lVar6 = FUN_003563a0(0,0x40a8c8);
    }
    lVar6 = strcmp(param_3,0x40a8c8);
    if (lVar6 != 0) {
      puVar3 = (undefined1 *)FUN_00360a00(param_3,0x2f);
      *puVar3 = 0;
    }
    uVar4 = 1;
  }
  else {
LAB_00356540:
    uVar4 = 0;
  }
  return uVar4;
}


// ==== FUN_00356690 @ 00356690 ====

undefined4 FUN_00356690(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_00479490;
  iVar3 = 1;
  do {
    *(undefined4 *)(puVar2 + -8) = 0xffffffff;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(puVar2 + -4) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x8c) = 0;
    *(undefined4 *)(puVar2 + 0x80) = 1;
    *(undefined4 *)(puVar2 + 0x84) = 0;
    *(undefined4 *)(puVar2 + 0x88) = 0;
    uVar1 = DAT_0040a8c9;
    *puVar2 = DAT_0040a8c8;
    puVar2[1] = uVar1;
    puVar2 = puVar2 + 0x898;
  } while (-1 < iVar3);
  return 1;
}


// ==== FUN_003566f0 @ 003566f0 ====

undefined4 FUN_003566f0(int param_1)

{
  undefined1 uVar1;
  
  (&DAT_00479488)[param_1 * 0x226] = 0xffffffff;
  (&DAT_0047948c)[param_1 * 0x226] = 0xffffffff;
  (&DAT_0047951c)[param_1 * 0x226] = 0;
  (&DAT_00479510)[param_1 * 0x226] = 1;
  (&DAT_00479514)[param_1 * 0x226] = 0;
  (&DAT_00479518)[param_1 * 0x226] = 0;
  uVar1 = DAT_0040a8c9;
  (&DAT_00479490)[param_1 * 0x898] = DAT_0040a8c8;
  (&DAT_00479491)[param_1 * 0x898] = uVar1;
  return 1;
}


// ==== FUN_00356758 @ 00356758 ====

int FUN_00356758(undefined8 param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar3 = param_2;
  if (param_2 < 0) {
    iVar3 = param_2 + 0xffff;
  }
  iVar2 = param_2 + 0xff;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  iVar3 = iVar3 >> 0x10;
  if ((&DAT_0047948c)[iVar4 * 0x226] != iVar3) {
    lVar1 = FUN_0035ac60(param_1,&DAT_00478c88 + iVar4 * 0x898,
                         *(undefined4 *)(iVar4 * 0x184 + iVar3 * 4 + 0x3d6398),1);
    if (lVar1 == 0) {
      *param_3 = 0x8101006f;
      return 0;
    }
    (&DAT_0047948c)[iVar4 * 0x226] = iVar3;
  }
  iVar3 = *(int *)(&DAT_00478c88 + ((iVar2 >> 8) + iVar3 * -0x100) * 4 + iVar4 * 0x898);
  if (iVar3 < 0) {
    iVar3 = 0;
    *param_3 = 0x81019001;
  }
  else {
    *param_3 = 0;
  }
  return iVar3;
}


// ==== FUN_00356878 @ 00356878 ====

undefined4 FUN_00356878(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if ((((int)(&DAT_00479488)[iVar3 * 0x226] < 1) || ((&DAT_0047951c)[iVar3 * 0x226] != 1)) ||
     (lVar2 = FUN_0035aca0(param_1,&DAT_00479088 + iVar3 * 0x898,(&DAT_00479488)[iVar3 * 0x226],1),
     lVar2 != 0)) {
    uVar1 = 1;
    (&DAT_0047951c)[iVar3 * 0x226] = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00356908 @ 00356908 ====

undefined4 FUN_00356908(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2 + 0xff;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  iVar1 = FUN_00356758();
  uVar2 = 0;
  if (*param_3 == 0) {
    iVar5 = (int)param_1;
    if ((&DAT_00479488)[iVar5 * 0x226] != iVar1) {
      lVar3 = FUN_00356878(param_1);
      if ((lVar3 == 0) ||
         (lVar3 = FUN_0035ac60(param_1,&DAT_00479088 + iVar5 * 0x898,iVar1,1), lVar3 == 0)) {
        *param_3 = -0x7efeff91;
        return 0;
      }
      (&DAT_00479488)[iVar5 * 0x226] = iVar1;
    }
    uVar2 = *(undefined4 *)(&DAT_00479088 + (param_2 + (iVar4 >> 8) * -0x100) * 4 + iVar5 * 0x898);
    *param_3 = 0;
  }
  return uVar2;
}


// ==== FUN_00356a20 @ 00356a20 ====

long FUN_00356a20(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = FUN_00356908();
  if (lVar1 == 0x7fffffff) {
    *param_3 = 0x81019002;
  }
  return lVar1;
}


// ==== FUN_00356a68 @ 00356a68 ====

ulong FUN_00356a68(undefined8 param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00356a20();
  uVar2 = 0;
  if (*param_3 == 0) {
    if (uVar1 == 0xffffffffffffffff) {
      uVar2 = 0xffffffffffffffff;
      *param_3 = -0x7efeffa7;
    }
    else {
      uVar2 = uVar1 & 0x7fffffff;
    }
  }
  return uVar2;
}


// ==== FUN_00356ad0 @ 00356ad0 ====

undefined4 FUN_00356ad0(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = param_2 + 0xff;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  iVar1 = FUN_00356758(param_1,param_2,param_4);
  piVar6 = (int *)param_4;
  uVar2 = 0;
  if (*piVar6 == 0) {
    iVar5 = (int)param_1;
    if ((&DAT_00479488)[iVar5 * 0x226] != iVar1) {
      lVar3 = FUN_00356878(param_1);
      if ((lVar3 == 0) ||
         (lVar3 = FUN_0035ac60(param_1,&DAT_00479088 + iVar5 * 0x898,iVar1,1), lVar3 == 0)) {
        *piVar6 = -0x7efeff91;
        return 0;
      }
      (&DAT_00479488)[iVar5 * 0x226] = iVar1;
    }
    uVar2 = 1;
    *(undefined4 *)(&DAT_00479088 + (param_2 + (iVar4 >> 8) * -0x100) * 4 + iVar5 * 0x898) = param_3
    ;
    (&DAT_0047951c)[iVar5 * 0x226] = 1;
    *piVar6 = 0;
  }
  return uVar2;
}


// ==== FUN_00356c00 @ 00356c00 ====

int FUN_00356c00(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  piVar4 = (int *)param_2;
  *piVar4 = 0;
  iVar2 = *(int *)(&DAT_003d64b8 + iVar5 * 0x184);
  do {
    iVar3 = (&DAT_00479518)[iVar5 * 0x226];
    if (iVar3 < iVar2) {
      do {
        uVar1 = FUN_00356908(param_1,iVar3,param_2);
        if (*piVar4 != 0) {
          return 0;
        }
        if ((uVar1 & 0xffffffff80000000) == 0) {
          *piVar4 = 0;
          (&DAT_00479518)[iVar5 * 0x226] = iVar3;
          return iVar3;
        }
        iVar2 = *(int *)(&DAT_003d64b8 + iVar5 * 0x184);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if ((&DAT_00479518)[iVar5 * 0x226] == 0) {
      *piVar4 = -0x7efeffe4;
      return 0;
    }
    (&DAT_00479518)[iVar5 * 0x226] = 0;
  } while( true );
}


// ==== FUN_00356d30 @ 00356d30 ====

int FUN_00356d30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1 * 0x184;
  *(int *)param_2 = 0;
  iVar3 = (&DAT_00479518)[(int)param_1 * 0x226];
  iVar4 = 0;
  if (iVar3 < *(int *)(&DAT_003d64b8 + iVar1)) {
    do {
      uVar2 = FUN_00356908(param_1,iVar3,param_2);
      if (*(int *)param_2 != 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      if ((uVar2 & 0xffffffff80000000) == 0) {
        iVar4 = iVar4 + 1;
      }
    } while (iVar3 < *(int *)(&DAT_003d64b8 + iVar1));
  }
  return iVar4;
}


