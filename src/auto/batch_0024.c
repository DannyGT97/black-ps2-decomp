// ==== FUN_002210f0 @ 002210f0 ====

void FUN_002210f0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  FUN_0023db58(iVar1,*(int *)(*(int *)(iVar1 + 0x48) + 0x18) + 1);
  *(uint *)(*(int *)(iVar1 + 0x48) + 0x1c) = *(uint *)(*(int *)(iVar1 + 0x48) + 0x1c) & 0xfdffffff;
  return;
}


// ==== FUN_00221140 @ 00221140 ====

void FUN_00221140(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  FUN_0023db58(iVar1,*(int *)(*(int *)(iVar1 + 0x48) + 0x18) + -1);
  *(uint *)(*(int *)(iVar1 + 0x48) + 0x1c) = *(uint *)(*(int *)(iVar1 + 0x48) + 0x1c) & 0xfdffffff;
  return;
}


// ==== FUN_00221190 @ 00221190 ====

void FUN_00221190(undefined8 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_2 + 4);
  if ((*piVar1 >> 4 & 1U) != 1) {
    return;
  }
  lVar3 = FUN_00387080(piVar1);
  bVar2 = false;
  if (lVar3 == 0x13) {
    lVar3 = FUN_003871c0(piVar1);
    bVar2 = lVar3 == 0;
  }
  if (bVar2) {
    return;
  }
  puVar4 = *(uint **)(param_2 + 8);
  if (puVar4 == (uint *)0x0) {
    puVar4 = *(uint **)(param_2 + 4);
  }
  else {
    uVar5 = 0;
    if ((*puVar4 >> 0x19) - 0xc < 8) {
      uVar5 = (int)*puVar4 >> 4 & 1;
    }
    if (uVar5 != 0) {
      uVar5 = puVar4[0x12];
      goto LAB_00221268;
    }
    puVar4 = *(uint **)(param_2 + 4);
  }
  uVar5 = 0;
  if ((*puVar4 >> 0x19) - 0xc < 8) {
    uVar5 = (int)*puVar4 >> 4 & 1;
  }
  if (uVar5 == 0) {
    return;
  }
  uVar5 = piVar1[0x12];
LAB_00221268:
  *(uint *)(uVar5 + 0x1c) = *(uint *)(uVar5 + 0x1c) | 0x2000000;
  return;
}


// ==== FUN_00221290 @ 00221290 ====

void FUN_00221290(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  
  piVar1 = *(int **)(param_2 + 4);
  if ((*piVar1 >> 4 & 1U) == 1) {
    lVar4 = FUN_00387080(piVar1);
    bVar3 = false;
    if (lVar4 == 0x13) {
      lVar4 = FUN_003871c0(piVar1);
      bVar3 = lVar4 == 0;
    }
    if ((!bVar3) && (iVar2 = piVar1[0x12], iVar2 != 0)) {
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfdffffff;
    }
  }
  return;
}


// ==== FUN_00221330 @ 00221330 ====

void FUN_00221330(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar10 = FUN_0021ada8();
  puVar7 = DAT_003bfaec;
  puVar8 = (uint *)0x0;
  if ((lVar10 == 7) && ((((int)*puVar2 >> 4 & 1U) != 1 || (((int)*puVar1 >> 4 & 1U) != 1)))) {
    puVar8 = DAT_0043df40;
  }
  if (puVar8 != (uint *)0x0) {
    iVar9 = *param_1;
    goto LAB_00221574;
  }
  uVar12 = 0;
  if (*puVar2 >> 0x19 == 7) {
    uVar12 = (int)*puVar2 >> 4 & 1;
  }
  if (uVar12 == 0) {
LAB_002214b8:
    fVar14 = (float)FUN_0024c410(puVar2);
    fVar15 = (float)FUN_0024c410(puVar1);
    puVar8 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,6);
      puVar8[2] = (uint)(fVar14 + fVar15);
      puVar11 = &DAT_003e2098;
LAB_0022156c:
      puVar8[1] = (uint)puVar11;
    }
    else {
      uVar12 = *DAT_003bfae8;
      puVar1 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar12 | 4;
      DAT_003bfae8 = puVar1;
      piVar6 = DAT_003be8e0;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar8;
        piVar6[1] = iVar9 + 1;
      }
      else {
        *puVar8 = uVar12 & 0xfffffffb;
      }
      puVar8[2] = (uint)(fVar14 + fVar15);
    }
  }
  else {
    uVar12 = 0;
    if (*puVar1 >> 0x19 == 7) {
      uVar12 = (int)*puVar1 >> 4 & 1;
    }
    if (uVar12 == 0) goto LAB_002214b8;
    uVar12 = puVar2[2];
    uVar3 = puVar1[2];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,7);
      puVar8[2] = uVar12 + uVar3;
      puVar11 = &DAT_003e2230;
      goto LAB_0022156c;
    }
    uVar4 = *DAT_003bfaec;
    puVar1 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar4 | 4;
    DAT_003bfaec = puVar1;
    piVar6 = DAT_003be8e0;
    iVar9 = DAT_003be8e0[1];
    if (iVar9 < *DAT_003be8e0) {
      *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar6[1] = iVar9 + 1;
    }
    else {
      *puVar7 = uVar4 & 0xfffffffb;
    }
    puVar7[2] = uVar12 + uVar3;
    puVar8 = puVar7;
  }
  iVar9 = *param_1;
LAB_00221574:
  if (1 < iVar9) {
    iVar13 = 1;
    iVar9 = *param_1;
    do {
      iVar9 = iVar9 - iVar13;
      iVar13 = iVar13 + 1;
      iVar9 = *(int *)(iVar9 * 4 + param_1[2]);
      iVar5 = *(int *)(iVar9 + 4);
      (**(code **)(iVar5 + 0x14))(iVar9 + *(short *)(iVar5 + 0x10));
      iVar9 = *param_1;
    } while (iVar13 < 3);
    *param_1 = iVar9 + -2;
  }
  iVar9 = *param_1;
  *(uint **)(iVar9 * 4 + param_1[2]) = puVar8;
  *param_1 = iVar9 + 1;
  (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
  return;
}


// ==== FUN_00221618 @ 00221618 ====

void FUN_00221618(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar10 = FUN_0021ada8();
  puVar7 = DAT_003bfaec;
  puVar8 = (uint *)0x0;
  if ((lVar10 == 7) && ((((int)*puVar2 >> 4 & 1U) != 1 || (((int)*puVar1 >> 4 & 1U) != 1)))) {
    puVar8 = DAT_0043df40;
  }
  if (puVar8 != (uint *)0x0) {
    iVar9 = *param_1;
    goto LAB_0022185c;
  }
  uVar12 = 0;
  if (*puVar2 >> 0x19 == 7) {
    uVar12 = (int)*puVar2 >> 4 & 1;
  }
  if (uVar12 == 0) {
LAB_002217a0:
    fVar14 = (float)FUN_0024c410(puVar2);
    fVar15 = (float)FUN_0024c410(puVar1);
    puVar8 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,6);
      puVar8[2] = (uint)(fVar15 - fVar14);
      puVar11 = &DAT_003e2098;
LAB_00221854:
      puVar8[1] = (uint)puVar11;
    }
    else {
      uVar12 = *DAT_003bfae8;
      puVar1 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar12 | 4;
      DAT_003bfae8 = puVar1;
      piVar6 = DAT_003be8e0;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar8;
        piVar6[1] = iVar9 + 1;
      }
      else {
        *puVar8 = uVar12 & 0xfffffffb;
      }
      puVar8[2] = (uint)(fVar15 - fVar14);
    }
  }
  else {
    uVar12 = 0;
    if (*puVar1 >> 0x19 == 7) {
      uVar12 = (int)*puVar1 >> 4 & 1;
    }
    if (uVar12 == 0) goto LAB_002217a0;
    uVar12 = puVar2[2];
    uVar3 = puVar1[2];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,7);
      puVar8[2] = uVar3 - uVar12;
      puVar11 = &DAT_003e2230;
      goto LAB_00221854;
    }
    uVar4 = *DAT_003bfaec;
    puVar1 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar4 | 4;
    DAT_003bfaec = puVar1;
    piVar6 = DAT_003be8e0;
    iVar9 = DAT_003be8e0[1];
    if (iVar9 < *DAT_003be8e0) {
      *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar6[1] = iVar9 + 1;
    }
    else {
      *puVar7 = uVar4 & 0xfffffffb;
    }
    puVar7[2] = uVar3 - uVar12;
    puVar8 = puVar7;
  }
  iVar9 = *param_1;
LAB_0022185c:
  if (1 < iVar9) {
    iVar13 = 1;
    iVar9 = *param_1;
    do {
      iVar9 = iVar9 - iVar13;
      iVar13 = iVar13 + 1;
      iVar9 = *(int *)(iVar9 * 4 + param_1[2]);
      iVar5 = *(int *)(iVar9 + 4);
      (**(code **)(iVar5 + 0x14))(iVar9 + *(short *)(iVar5 + 0x10));
      iVar9 = *param_1;
    } while (iVar13 < 3);
    *param_1 = iVar9 + -2;
  }
  iVar9 = *param_1;
  *(uint **)(iVar9 * 4 + param_1[2]) = puVar8;
  *param_1 = iVar9 + 1;
  (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
  return;
}


// ==== FUN_00221900 @ 00221900 ====

void FUN_00221900(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar10 = FUN_0021ada8();
  puVar7 = DAT_003bfaec;
  puVar8 = (uint *)0x0;
  if ((lVar10 == 7) && ((((int)*puVar2 >> 4 & 1U) != 1 || (((int)*puVar1 >> 4 & 1U) != 1)))) {
    puVar8 = DAT_0043df40;
  }
  if (puVar8 != (uint *)0x0) {
    iVar9 = *param_1;
    goto LAB_00221b44;
  }
  uVar12 = 0;
  if (*puVar2 >> 0x19 == 7) {
    uVar12 = (int)*puVar2 >> 4 & 1;
  }
  if (uVar12 == 0) {
LAB_00221a88:
    fVar14 = (float)FUN_0024c410(puVar2);
    fVar15 = (float)FUN_0024c410(puVar1);
    puVar8 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,6);
      puVar8[2] = (uint)(fVar14 * fVar15);
      puVar11 = &DAT_003e2098;
LAB_00221b3c:
      puVar8[1] = (uint)puVar11;
    }
    else {
      uVar12 = *DAT_003bfae8;
      puVar1 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar12 | 4;
      DAT_003bfae8 = puVar1;
      piVar6 = DAT_003be8e0;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar8;
        piVar6[1] = iVar9 + 1;
      }
      else {
        *puVar8 = uVar12 & 0xfffffffb;
      }
      puVar8[2] = (uint)(fVar14 * fVar15);
    }
  }
  else {
    uVar12 = 0;
    if (*puVar1 >> 0x19 == 7) {
      uVar12 = (int)*puVar1 >> 4 & 1;
    }
    if (uVar12 == 0) goto LAB_00221a88;
    uVar12 = puVar2[2];
    uVar3 = puVar1[2];
    if (DAT_003bfaec == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,7);
      puVar8[2] = uVar12 * uVar3;
      puVar11 = &DAT_003e2230;
      goto LAB_00221b3c;
    }
    uVar4 = *DAT_003bfaec;
    puVar1 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar4 | 4;
    DAT_003bfaec = puVar1;
    piVar6 = DAT_003be8e0;
    iVar9 = DAT_003be8e0[1];
    if (iVar9 < *DAT_003be8e0) {
      *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar6[1] = iVar9 + 1;
    }
    else {
      *puVar7 = uVar4 & 0xfffffffb;
    }
    puVar7[2] = uVar12 * uVar3;
    puVar8 = puVar7;
  }
  iVar9 = *param_1;
LAB_00221b44:
  if (1 < iVar9) {
    iVar13 = 1;
    iVar9 = *param_1;
    do {
      iVar9 = iVar9 - iVar13;
      iVar13 = iVar13 + 1;
      iVar9 = *(int *)(iVar9 * 4 + param_1[2]);
      iVar5 = *(int *)(iVar9 + 4);
      (**(code **)(iVar5 + 0x14))(iVar9 + *(short *)(iVar5 + 0x10));
      iVar9 = *param_1;
    } while (iVar13 < 3);
    *param_1 = iVar9 + -2;
  }
  iVar9 = *param_1;
  *(uint **)(iVar9 * 4 + param_1[2]) = puVar8;
  *param_1 = iVar9 + 1;
  (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
  return;
}


// ==== FUN_00221be8 @ 00221be8 ====

void FUN_00221be8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  piVar1 = *(int **)((*param_1 + -1) * 4 + param_1[2] + -4);
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  lVar8 = FUN_0021ada8();
  puVar6 = (uint *)0x0;
  if ((lVar8 == 7) && (((*piVar2 >> 4 & 1U) != 1 || ((*piVar1 >> 4 & 1U) != 1)))) {
    puVar6 = DAT_0043df40;
  }
  if (puVar6 == (uint *)0x0) {
    fVar10 = (float)FUN_0024c410(piVar2);
    fVar11 = (float)FUN_0024c410(piVar1);
    puVar5 = DAT_003bfae8;
    puVar6 = DAT_0043df40;
    if (fVar10 != 0.0) {
      if (DAT_003bfae8 == (uint *)0x0) {
        puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar6,6);
        puVar6[2] = (uint)(fVar11 / fVar10);
        puVar6[1] = (uint)&DAT_003e2098;
      }
      else {
        uVar3 = *DAT_003bfae8;
        puVar6 = (uint *)DAT_003bfae8[2];
        *DAT_003bfae8 = uVar3 | 4;
        DAT_003bfae8 = puVar6;
        piVar1 = DAT_003be8e0;
        iVar7 = DAT_003be8e0[1];
        if (iVar7 < *DAT_003be8e0) {
          *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar5;
          piVar1[1] = iVar7 + 1;
        }
        else {
          *puVar5 = uVar3 & 0xfffffffb;
        }
        puVar5[2] = (uint)(fVar11 / fVar10);
        puVar6 = puVar5;
      }
    }
    iVar7 = *param_1;
  }
  else {
    iVar7 = *param_1;
  }
  if (1 < iVar7) {
    iVar9 = 1;
    iVar7 = *param_1;
    do {
      iVar7 = iVar7 - iVar9;
      iVar9 = iVar9 + 1;
      iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar7 + 4);
      (**(code **)(iVar4 + 0x14))(iVar7 + *(short *)(iVar4 + 0x10));
      iVar7 = *param_1;
    } while (iVar9 < 3);
    *param_1 = iVar7 + -2;
  }
  iVar7 = *param_1;
  *(uint **)(iVar7 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_00221e08 @ 00221e08 ====

void FUN_00221e08(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar8 = FUN_0021ada8();
  puVar5 = DAT_003bfae4;
  puVar6 = (uint *)0x0;
  if ((lVar8 == 7) && ((((int)*puVar2 >> 4 & 1U) != 1 || (((int)*puVar1 >> 4 & 1U) != 1)))) {
    puVar6 = DAT_0043df40;
  }
  if (puVar6 != (uint *)0x0) {
    iVar7 = *param_1;
    goto LAB_0022201c;
  }
  uVar9 = 0;
  if (*puVar2 >> 0x19 == 7) {
    uVar9 = (int)*puVar2 >> 4 & 1;
  }
  if (uVar9 == 0) {
LAB_00221f38:
    fVar12 = (float)FUN_0024c410(puVar2);
    fVar13 = (float)FUN_0024c410(puVar1);
    puVar6 = DAT_003bfae4;
    bVar11 = ABS(fVar12 - fVar13) < 0.001;
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar9 = *DAT_003bfae4 | 4;
      puVar1 = (uint *)DAT_003bfae4[2];
      *DAT_003bfae4 = uVar9;
      DAT_003bfae4 = puVar1;
      iVar7 = DAT_003be8e0[1];
      if (iVar7 < *DAT_003be8e0) {
        iVar10 = DAT_003be8e0[2];
        goto LAB_00221fc4;
      }
LAB_00221fb8:
      *puVar6 = uVar9 & 0xfffffffb;
      goto LAB_00221fd8;
    }
LAB_00221fe4:
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,5);
    *(bool *)(puVar6 + 2) = bVar11;
    puVar6[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar9 = 0;
    if (*puVar1 >> 0x19 == 7) {
      uVar9 = (int)*puVar1 >> 4 & 1;
    }
    if (uVar9 == 0) goto LAB_00221f38;
    bVar11 = puVar2[2] == puVar1[2];
    if (DAT_003bfae4 == (uint *)0x0) goto LAB_00221fe4;
    uVar9 = *DAT_003bfae4 | 4;
    puVar1 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar9;
    DAT_003bfae4 = puVar1;
    iVar7 = DAT_003be8e0[1];
    puVar6 = puVar5;
    if (*DAT_003be8e0 <= iVar7) goto LAB_00221fb8;
    iVar10 = DAT_003be8e0[2];
LAB_00221fc4:
    piVar4 = DAT_003be8e0;
    *(uint **)(iVar7 * 4 + iVar10) = puVar6;
    piVar4[1] = iVar7 + 1;
LAB_00221fd8:
    *(bool *)(puVar6 + 2) = bVar11;
  }
  iVar7 = *param_1;
LAB_0022201c:
  if (1 < iVar7) {
    iVar10 = 1;
    iVar7 = *param_1;
    do {
      iVar7 = iVar7 - iVar10;
      iVar10 = iVar10 + 1;
      iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
      iVar3 = *(int *)(iVar7 + 4);
      (**(code **)(iVar3 + 0x14))(iVar7 + *(short *)(iVar3 + 0x10));
      iVar7 = *param_1;
    } while (iVar10 < 3);
    *param_1 = iVar7 + -2;
  }
  iVar7 = *param_1;
  *(uint **)(iVar7 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_002220c0 @ 002220c0 ====

void FUN_002220c0(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar8 = FUN_0021ada8();
  puVar5 = DAT_003bfae4;
  puVar6 = (uint *)0x0;
  if ((lVar8 == 7) && ((((int)*puVar2 >> 4 & 1U) != 1 || (((int)*puVar1 >> 4 & 1U) != 1)))) {
    puVar6 = DAT_0043df40;
  }
  if (puVar6 != (uint *)0x0) {
    iVar7 = *param_1;
    goto LAB_002222bc;
  }
  uVar9 = 0;
  if (*puVar2 >> 0x19 == 7) {
    uVar9 = (int)*puVar2 >> 4 & 1;
  }
  if (uVar9 == 0) {
LAB_002221ec:
    fVar12 = (float)FUN_0024c410(puVar2);
    fVar13 = (float)FUN_0024c410(puVar1);
    puVar6 = DAT_003bfae4;
    bVar11 = fVar13 < fVar12;
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar9 = *DAT_003bfae4 | 4;
      puVar1 = (uint *)DAT_003bfae4[2];
      *DAT_003bfae4 = uVar9;
      DAT_003bfae4 = puVar1;
      iVar7 = DAT_003be8e0[1];
      if (iVar7 < *DAT_003be8e0) {
        iVar10 = DAT_003be8e0[2];
        goto LAB_00222264;
      }
LAB_00222258:
      *puVar6 = uVar9 & 0xfffffffb;
      goto LAB_00222278;
    }
LAB_00222284:
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,5);
    *(bool *)(puVar6 + 2) = bVar11;
    puVar6[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar9 = 0;
    if (*puVar1 >> 0x19 == 7) {
      uVar9 = (int)*puVar1 >> 4 & 1;
    }
    if (uVar9 == 0) goto LAB_002221ec;
    bVar11 = (int)puVar1[2] < (int)puVar2[2];
    if (DAT_003bfae4 == (uint *)0x0) goto LAB_00222284;
    uVar9 = *DAT_003bfae4 | 4;
    puVar1 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar9;
    DAT_003bfae4 = puVar1;
    iVar7 = DAT_003be8e0[1];
    puVar6 = puVar5;
    if (*DAT_003be8e0 <= iVar7) goto LAB_00222258;
    iVar10 = DAT_003be8e0[2];
LAB_00222264:
    piVar4 = DAT_003be8e0;
    *(uint **)(iVar7 * 4 + iVar10) = puVar6;
    piVar4[1] = iVar7 + 1;
LAB_00222278:
    *(bool *)(puVar6 + 2) = bVar11;
  }
  iVar7 = *param_1;
LAB_002222bc:
  if (1 < iVar7) {
    iVar10 = 1;
    iVar7 = *param_1;
    do {
      iVar7 = iVar7 - iVar10;
      iVar10 = iVar10 + 1;
      iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
      iVar3 = *(int *)(iVar7 + 4);
      (**(code **)(iVar3 + 0x14))(iVar7 + *(short *)(iVar3 + 0x10));
      iVar7 = *param_1;
    } while (iVar10 < 3);
    *param_1 = iVar7 + -2;
  }
  iVar7 = *param_1;
  *(uint **)(iVar7 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_00222360 @ 00222360 ====

void FUN_00222360(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar8 = FUN_0021ada8();
  puVar5 = DAT_003bfae4;
  puVar6 = (uint *)0x0;
  if ((lVar8 == 7) && ((((int)*puVar2 >> 4 & 1U) != 1 || (((int)*puVar1 >> 4 & 1U) != 1)))) {
    puVar6 = DAT_0043df40;
  }
  if (puVar6 != (uint *)0x0) {
    iVar7 = *param_1;
    goto LAB_00222580;
  }
  uVar10 = 0;
  if (*puVar2 >> 0x19 == 7) {
    uVar10 = (int)*puVar2 >> 4 & 1;
  }
  if (uVar10 == 0) {
LAB_0022249c:
    fVar12 = (float)FUN_0024c410(puVar2);
    fVar13 = (float)FUN_0024c410(puVar1);
    puVar6 = DAT_003bfae4;
    bVar9 = false;
    if ((fVar12 != 0.0) && (fVar13 != 0.0)) {
      bVar9 = true;
    }
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar10 = *DAT_003bfae4 | 4;
      puVar1 = (uint *)DAT_003bfae4[2];
      *DAT_003bfae4 = uVar10;
      DAT_003bfae4 = puVar1;
      iVar7 = DAT_003be8e0[1];
      if (iVar7 < *DAT_003be8e0) {
        iVar11 = DAT_003be8e0[2];
        goto LAB_00222528;
      }
LAB_0022251c:
      *puVar6 = uVar10 & 0xfffffffb;
      goto LAB_0022253c;
    }
LAB_00222548:
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,5);
    *(bool *)(puVar6 + 2) = bVar9;
    puVar6[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar10 = 0;
    if (*puVar1 >> 0x19 == 7) {
      uVar10 = (int)*puVar1 >> 4 & 1;
    }
    if (uVar10 == 0) goto LAB_0022249c;
    bVar9 = puVar2[2] != 0 && puVar1[2] != 0;
    if (DAT_003bfae4 == (uint *)0x0) goto LAB_00222548;
    uVar10 = *DAT_003bfae4 | 4;
    puVar1 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar10;
    DAT_003bfae4 = puVar1;
    iVar7 = DAT_003be8e0[1];
    puVar6 = puVar5;
    if (*DAT_003be8e0 <= iVar7) goto LAB_0022251c;
    iVar11 = DAT_003be8e0[2];
LAB_00222528:
    piVar4 = DAT_003be8e0;
    *(uint **)(iVar7 * 4 + iVar11) = puVar6;
    piVar4[1] = iVar7 + 1;
LAB_0022253c:
    *(bool *)(puVar6 + 2) = bVar9;
  }
  iVar7 = *param_1;
LAB_00222580:
  if (1 < iVar7) {
    iVar11 = 1;
    iVar7 = *param_1;
    do {
      iVar7 = iVar7 - iVar11;
      iVar11 = iVar11 + 1;
      iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
      iVar3 = *(int *)(iVar7 + 4);
      (**(code **)(iVar3 + 0x14))(iVar7 + *(short *)(iVar3 + 0x10));
      iVar7 = *param_1;
    } while (iVar11 < 3);
    *param_1 = iVar7 + -2;
  }
  iVar7 = *param_1;
  *(uint **)(iVar7 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_00222628 @ 00222628 ====

void FUN_00222628(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar8 = FUN_0021ada8();
  puVar5 = DAT_003bfae4;
  puVar6 = (uint *)0x0;
  if ((lVar8 == 7) && ((((int)*puVar2 >> 4 & 1U) != 1 || (((int)*puVar1 >> 4 & 1U) != 1)))) {
    puVar6 = DAT_0043df40;
  }
  if (puVar6 != (uint *)0x0) {
    iVar7 = *param_1;
    goto LAB_00222850;
  }
  uVar9 = 0;
  if (*puVar2 >> 0x19 == 7) {
    uVar9 = (int)*puVar2 >> 4 & 1;
  }
  if (uVar9 == 0) {
LAB_00222768:
    fVar12 = (float)FUN_0024c410(puVar2);
    fVar13 = (float)FUN_0024c410(puVar1);
    puVar6 = DAT_003bfae4;
    uVar11 = 0;
    if ((fVar12 != 0.0) || (fVar13 != 0.0)) {
      uVar11 = 1;
    }
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar9 = *DAT_003bfae4 | 4;
      puVar1 = (uint *)DAT_003bfae4[2];
      *DAT_003bfae4 = uVar9;
      DAT_003bfae4 = puVar1;
      iVar7 = DAT_003be8e0[1];
      if (iVar7 < *DAT_003be8e0) {
        iVar10 = DAT_003be8e0[2];
        goto LAB_002227f8;
      }
LAB_002227ec:
      *puVar6 = uVar9 & 0xfffffffb;
      goto LAB_0022280c;
    }
LAB_00222818:
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,5);
    *(undefined1 *)(puVar6 + 2) = uVar11;
    puVar6[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar9 = 0;
    if (*puVar1 >> 0x19 == 7) {
      uVar9 = (int)*puVar1 >> 4 & 1;
    }
    uVar11 = 0;
    if (uVar9 == 0) goto LAB_00222768;
    if ((puVar2[2] != 0) || (puVar1[2] != 0)) {
      uVar11 = 1;
    }
    if (DAT_003bfae4 == (uint *)0x0) goto LAB_00222818;
    uVar9 = *DAT_003bfae4 | 4;
    puVar1 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar9;
    DAT_003bfae4 = puVar1;
    iVar7 = DAT_003be8e0[1];
    puVar6 = puVar5;
    if (*DAT_003be8e0 <= iVar7) goto LAB_002227ec;
    iVar10 = DAT_003be8e0[2];
LAB_002227f8:
    piVar4 = DAT_003be8e0;
    *(uint **)(iVar7 * 4 + iVar10) = puVar6;
    piVar4[1] = iVar7 + 1;
LAB_0022280c:
    *(undefined1 *)(puVar6 + 2) = uVar11;
  }
  iVar7 = *param_1;
LAB_00222850:
  if (1 < iVar7) {
    iVar10 = 1;
    iVar7 = *param_1;
    do {
      iVar7 = iVar7 - iVar10;
      iVar10 = iVar10 + 1;
      iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
      iVar3 = *(int *)(iVar7 + 4);
      (**(code **)(iVar3 + 0x14))(iVar7 + *(short *)(iVar3 + 0x10));
      iVar7 = *param_1;
    } while (iVar10 < 3);
    *param_1 = iVar7 + -2;
  }
  iVar7 = *param_1;
  *(uint **)(iVar7 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_002228f8 @ 002228f8 ====

void FUN_002228f8(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  byte bVar6;
  undefined8 uVar7;
  uint *puVar8;
  
  bVar6 = FUN_0024c4f0(*(undefined4 *)(*param_1 * 4 + param_1[2] + -4));
  puVar8 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    uVar7 = Pool_Alloc(DAT_0043dee0,0xc);
    puVar8 = (uint *)uVar7;
    FUN_00386ec8(uVar7,5);
    *(byte *)(puVar8 + 2) = bVar6 ^ 1;
    puVar8[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar1 = *DAT_003bfae4;
    puVar5 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar1 | 4;
    DAT_003bfae4 = puVar5;
    piVar4 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar8;
      piVar4[1] = iVar2 + 1;
    }
    else {
      *puVar8 = uVar1 & 0xfffffffb;
    }
    *(byte *)(puVar8 + 2) = bVar6 ^ 1;
  }
  if (0 < *param_1) {
    iVar2 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar3 = *(int *)(iVar2 + 4);
    (**(code **)(iVar3 + 0x14))(iVar2 + *(short *)(iVar3 + 0x10));
    *param_1 = *param_1 + -1;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar8;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
  return;
}


// ==== FUN_00222a58 @ 00222a58 ====

void FUN_00222a58(int *param_1)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  byte bVar13;
  uint *puVar14;
  short *apsStack_a0 [4];
  short *apsStack_90 [4];
  
  bVar13 = 0;
  puVar14 = (uint *)0x0;
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  piVar3 = *(int **)((*param_1 + -1) * 4 + param_1[2] + -4);
  lVar11 = FUN_0021ada8();
  puVar8 = DAT_003bfae4;
  puVar9 = puVar14;
  if (lVar11 == 7) {
    bVar13 = (*piVar2 >> 4 & 1U) == 0;
    if ((*piVar3 >> 4 & 1U) == 0) {
      bVar13 = bVar13 + 1;
    }
    puVar9 = DAT_0043df40;
    if (((bVar13 != 1) && (puVar9 = puVar14, 1 < bVar13)) && (bVar13 == 2)) {
      if (DAT_003bfae4 == (uint *)0x0) {
        puVar9 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar9,5);
        *(undefined1 *)(puVar9 + 2) = 1;
        puVar9[1] = (uint)&DAT_003e2120;
      }
      else {
        uVar4 = *DAT_003bfae4;
        puVar9 = (uint *)DAT_003bfae4[2];
        *DAT_003bfae4 = uVar4 | 4;
        DAT_003bfae4 = puVar9;
        piVar7 = DAT_003be8e0;
        iVar10 = DAT_003be8e0[1];
        if (iVar10 < *DAT_003be8e0) {
          *(uint **)(iVar10 * 4 + DAT_003be8e0[2]) = puVar8;
          piVar7[1] = iVar10 + 1;
        }
        else {
          *puVar8 = uVar4 & 0xfffffffb;
        }
        *(undefined1 *)(puVar8 + 2) = 1;
        puVar9 = puVar8;
      }
    }
  }
  if (puVar9 != (uint *)0x0) {
    iVar10 = *param_1;
    goto LAB_00222d24;
  }
  apsStack_90[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 2;
  apsStack_a0[0] = &DAT_003bfaf8;
  FUN_0024c6d0(piVar2,apsStack_a0);
  FUN_0024c6d0(piVar3,apsStack_90);
  bVar6 = false;
  if (apsStack_a0[0][1] == apsStack_90[0][1]) {
    if (apsStack_a0[0] != apsStack_90[0]) {
      lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,apsStack_90[0] + 4);
      bVar6 = false;
      if (lVar11 != 0) goto LAB_00222c1c;
    }
    bVar6 = true;
  }
LAB_00222c1c:
  puVar9 = DAT_003bfae4;
  if (bVar6) {
    bVar13 = 1;
  }
  if (DAT_003bfae4 == (uint *)0x0) {
    puVar9 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar9,5);
    *(bool *)(puVar9 + 2) = bVar13 != 0;
    puVar9[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar4 = *DAT_003bfae4;
    puVar8 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar4 | 4;
    DAT_003bfae4 = puVar8;
    piVar2 = DAT_003be8e0;
    iVar10 = DAT_003be8e0[1];
    if (iVar10 < *DAT_003be8e0) {
      *(uint **)(iVar10 * 4 + DAT_003be8e0[2]) = puVar9;
      piVar2[1] = iVar10 + 1;
    }
    else {
      *puVar9 = uVar4 & 0xfffffffb;
    }
    *(bool *)(puVar9 + 2) = bVar13 != 0;
  }
  sVar1 = *apsStack_90[0];
  *apsStack_90[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
  }
  sVar1 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
  iVar10 = *param_1;
LAB_00222d24:
  if (1 < iVar10) {
    iVar12 = 1;
    iVar10 = *param_1;
    do {
      iVar10 = iVar10 - iVar12;
      iVar12 = iVar12 + 1;
      iVar10 = *(int *)(iVar10 * 4 + param_1[2]);
      iVar5 = *(int *)(iVar10 + 4);
      (**(code **)(iVar5 + 0x14))(iVar10 + *(short *)(iVar5 + 0x10));
      iVar10 = *param_1;
    } while (iVar12 < 3);
    *param_1 = iVar10 + -2;
  }
  iVar10 = *param_1;
  *(uint **)(iVar10 * 4 + param_1[2]) = puVar9;
  *param_1 = iVar10 + 1;
  (**(code **)(puVar9[1] + 0xc))((int)puVar9 + (int)*(short *)(puVar9[1] + 8));
  return;
}


// ==== FUN_00222dd0 @ 00222dd0 ====

void FUN_00222dd0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  uint *puVar10;
  short *apsStack_60 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_60[0] = &DAT_003bfaf8;
  FUN_0024c6d0(*(undefined4 *)(*param_1 * 4 + param_1[2] + -4),apsStack_60);
  puVar10 = DAT_003bfaec;
  uVar1 = apsStack_60[0][1];
  if (DAT_003bfaec == (uint *)0x0) {
    uVar8 = Pool_Alloc(DAT_0043dee0,0xc);
    puVar10 = (uint *)uVar8;
    FUN_00386ec8(uVar8,7);
    puVar10[2] = (uint)uVar1;
    puVar10[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar3 = *DAT_003bfaec;
    puVar6 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar3 | 4;
    DAT_003bfaec = puVar6;
    piVar5 = DAT_003be8e0;
    iVar7 = DAT_003be8e0[1];
    if (iVar7 < *DAT_003be8e0) {
      *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar10;
      piVar5[1] = iVar7 + 1;
    }
    else {
      *puVar10 = uVar3 & 0xfffffffb;
    }
    puVar10[2] = (uint)uVar1;
  }
  if (0 < *param_1) {
    iVar9 = 1;
    iVar7 = *param_1;
    do {
      iVar7 = iVar7 - iVar9;
      iVar9 = iVar9 + 1;
      iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar7 + 4);
      (**(code **)(iVar4 + 0x14))(iVar7 + *(short *)(iVar4 + 0x10));
      iVar7 = *param_1;
    } while (iVar9 < 2);
    *param_1 = iVar7 + -1;
  }
  iVar7 = *param_1;
  *(uint **)(iVar7 * 4 + param_1[2]) = puVar10;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar10[1] + 0xc))((int)puVar10 + (int)*(short *)(puVar10[1] + 8));
  sVar2 = *apsStack_60[0];
  *apsStack_60[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  return;
}


// ==== FUN_00222f98 @ 00222f98 ====

void FUN_00222f98(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  short *apsStack_a0 [4];
  short *apsStack_90 [4];
  
  iVar9 = *param_1;
  iVar14 = param_1[2];
  uVar2 = *(undefined4 *)((iVar9 + -2) * 4 + iVar14 + -4);
  uVar3 = *(undefined4 *)((iVar9 + -1) * 4 + iVar14 + -4);
  lVar11 = FUN_0024c300(*(undefined4 *)(iVar9 * 4 + iVar14 + -4));
  iVar9 = FUN_0024c300(uVar3);
  iVar9 = iVar9 + -1;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_a0[0] = &DAT_003bfaf8;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  FUN_0024c6d0(uVar2,apsStack_a0);
  puVar10 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar13 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar10 = (uint *)FUN_0024ad08(uVar13);
  }
  else {
    uVar4 = *DAT_003bfb10;
    puVar8 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar4 | 4;
    DAT_003bfb10 = puVar8;
    piVar7 = DAT_003be8e0;
    iVar14 = DAT_003be8e0[1];
    if (iVar14 < *DAT_003be8e0) {
      *(uint **)(iVar14 * 4 + DAT_003be8e0[2]) = puVar10;
      piVar7[1] = iVar14 + 1;
    }
    else {
      *puVar10 = uVar4 & 0xfffffffb;
    }
    lVar12 = FUN_003872a8(puVar10 + 2);
    if (lVar12 == 0) {
      FUN_002530e8(puVar10 + 2,0);
    }
  }
  if (lVar11 == 0) {
    psVar5 = (short *)puVar10[2];
    sVar1 = *psVar5;
    *psVar5 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar5,(ushort)psVar5[2] + 9);
    }
    puVar10[2] = (uint)&DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
  }
  else if (lVar11 < 0) {
    FUN_00253b10(apsStack_90,apsStack_a0,iVar9);
    *apsStack_90[0] = *apsStack_90[0] + 1;
    psVar5 = (short *)puVar10[2];
    sVar1 = *psVar5;
    *psVar5 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar5,(ushort)psVar5[2] + 9);
    }
    puVar10[2] = (uint)apsStack_90[0];
    sVar1 = *apsStack_90[0];
    *apsStack_90[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
      iVar9 = *param_1;
      goto LAB_0022323c;
    }
  }
  else {
    FUN_00253be0(apsStack_90,apsStack_a0,iVar9,lVar11);
    *apsStack_90[0] = *apsStack_90[0] + 1;
    psVar5 = (short *)puVar10[2];
    sVar1 = *psVar5;
    *psVar5 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar5,(ushort)psVar5[2] + 9);
    }
    puVar10[2] = (uint)apsStack_90[0];
    sVar1 = *apsStack_90[0];
    *apsStack_90[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
    }
  }
  iVar9 = *param_1;
LAB_0022323c:
  if (2 < iVar9) {
    iVar14 = 1;
    iVar9 = *param_1;
    do {
      iVar9 = iVar9 - iVar14;
      iVar14 = iVar14 + 1;
      iVar9 = *(int *)(iVar9 * 4 + param_1[2]);
      iVar6 = *(int *)(iVar9 + 4);
      (**(code **)(iVar6 + 0x14))(iVar9 + *(short *)(iVar6 + 0x10));
      iVar9 = *param_1;
    } while (iVar14 < 4);
    *param_1 = iVar9 + -3;
  }
  iVar9 = *param_1;
  *(uint **)(iVar9 * 4 + param_1[2]) = puVar10;
  *param_1 = iVar9 + 1;
  (**(code **)(puVar10[1] + 0xc))((int)puVar10 + (int)*(short *)(puVar10[1] + 8));
  sVar1 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
  return;
}


// ==== FUN_00223318 @ 00223318 ====

void FUN_00223318(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if ((param_1[0x16] < iVar1) && (0 < iVar1)) {
    iVar2 = *(int *)(iVar1 * 4 + param_1[2] + -4);
    iVar3 = *(int *)(iVar2 + 4);
    (**(code **)(iVar3 + 0x14))(iVar2 + *(short *)(iVar3 + 0x10));
    *param_1 = *param_1 + -1;
  }
  if ((iVar1 == 1) && (*(int *)(DAT_003be8e0 + 4) != 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_002233b0 @ 002233b0 ====

void FUN_002233b0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  
  piVar1 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  lVar8 = FUN_0021ada8();
  puVar6 = (uint *)0x0;
  if ((lVar8 == 7) && ((*piVar1 >> 4 & 1U) != 1)) {
    puVar6 = DAT_0043df40;
  }
  if (puVar6 == (uint *)0x0) {
    uVar5 = FUN_0024c300(piVar1);
    puVar6 = DAT_003bfaec;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,7);
      puVar6[2] = uVar5;
      puVar6[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar2 = *DAT_003bfaec;
      puVar4 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar2 | 4;
      DAT_003bfaec = puVar4;
      piVar1 = DAT_003be8e0;
      iVar7 = DAT_003be8e0[1];
      if (iVar7 < *DAT_003be8e0) {
        *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar6;
        piVar1[1] = iVar7 + 1;
      }
      else {
        *puVar6 = uVar2 & 0xfffffffb;
      }
      puVar6[2] = uVar5;
    }
    iVar7 = *param_1;
  }
  else {
    iVar7 = *param_1;
  }
  if (0 < iVar7) {
    iVar7 = *(int *)(iVar7 * 4 + param_1[2] + -4);
    iVar3 = *(int *)(iVar7 + 4);
    (**(code **)(iVar3 + 0x14))(iVar7 + *(short *)(iVar3 + 0x10));
    *param_1 = *param_1 + -1;
  }
  iVar7 = *param_1;
  *(uint **)(iVar7 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_00223548 @ 00223548 ====

void FUN_00223548(undefined8 param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *apsStack_40 [4];
  
  piVar6 = (int *)param_1;
  piVar2 = *(int **)(*piVar6 * 4 + piVar6[2] + -4);
  if ((*piVar2 >> 4 & 1U) == 1) {
    apsStack_40[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(piVar2,apsStack_40);
    iVar5 = FUN_0021e420(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         apsStack_40,1,1,0);
    if (0 < *piVar6) {
      iVar3 = *(int *)(*piVar6 * 4 + piVar6[2] + -4);
      iVar4 = *(int *)(iVar3 + 4);
      (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
      *piVar6 = *piVar6 + -1;
    }
    iVar3 = *piVar6;
    *(int *)(iVar3 * 4 + piVar6[2]) = iVar5;
    *piVar6 = iVar3 + 1;
    (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
    sVar1 = *apsStack_40[0];
    *apsStack_40[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
    }
  }
  return;
}


// ==== FUN_00223678 @ 00223678 ====

void FUN_00223678(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *apsStack_70 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_70[0] = &DAT_003bfaf8;
  piVar6 = (int *)param_1;
  uVar1 = *(undefined4 *)(*piVar6 * 4 + piVar6[2] + -4);
  FUN_0024c6d0(*(undefined4 *)((*piVar6 + -1) * 4 + piVar6[2] + -4),apsStack_70);
  FUN_0021c268(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),apsStack_70,uVar1,1
               ,1,0);
  if (1 < *piVar6) {
    iVar5 = 1;
    iVar4 = *piVar6;
    do {
      iVar4 = iVar4 - iVar5;
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(iVar4 * 4 + piVar6[2]);
      iVar2 = *(int *)(iVar4 + 4);
      (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
      iVar4 = *piVar6;
    } while (iVar5 < 3);
    *piVar6 = iVar4 + -2;
  }
  if (*(int *)(DAT_003be8e0 + 4) != 0) {
    if (*piVar6 != 0) {
      sVar3 = *apsStack_70[0];
      goto LAB_00223794;
    }
    FUN_00252b10();
  }
  sVar3 = *apsStack_70[0];
LAB_00223794:
  *apsStack_70[0] = sVar3 + -1;
  if ((short)(sVar3 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  return;
}


// ==== FUN_002237d8 @ 002237d8 ====

void FUN_002237d8(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *apsStack_40 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_40[0] = &DAT_003bfaf8;
  FUN_0024c6d0(*(undefined4 *)(*param_1 * 4 + param_1[2] + -4),apsStack_40);
  if (apsStack_40[0][1] == 0) {
    iVar3 = *(int *)(param_2 + 8);
    if (iVar3 == 0) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  else {
    iVar3 = FUN_0021bdb8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),apsStack_40);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(int *)(param_2 + 8) = iVar3;
    (**(code **)(*(int *)(iVar3 + 4) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 8));
  }
  if (0 < *param_1) {
    iVar3 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar2 = *(int *)(iVar3 + 4);
    (**(code **)(iVar2 + 0x14))(iVar3 + *(short *)(iVar2 + 0x10));
    *param_1 = *param_1 + -1;
  }
  sVar1 = *apsStack_40[0];
  *apsStack_40[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
  }
  return;
}


// ==== FUN_00223900 @ 00223900 ====

void FUN_00223900(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  undefined1 auStack_80 [16];
  
  puVar1 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar9 = FUN_0021ada8();
  puVar6 = DAT_003bfb10;
  puVar11 = puVar1;
  puVar13 = puVar2;
  if (lVar9 == 7) {
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar10 = Pool_Alloc(DAT_0043dee0,0x10);
      puVar6 = (uint *)FUN_0024ad08(uVar10);
    }
    else {
      uVar3 = *DAT_003bfb10;
      puVar11 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar3 | 4;
      DAT_003bfb10 = puVar11;
      piVar5 = DAT_003be8e0;
      iVar7 = DAT_003be8e0[1];
      if (iVar7 < *DAT_003be8e0) {
        *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar6;
        piVar5[1] = iVar7 + 1;
      }
      else {
        *puVar6 = uVar3 & 0xfffffffb;
      }
      lVar9 = FUN_003872a8(puVar6 + 2);
      if (lVar9 == 0) {
        FUN_002530e8(puVar6 + 2,0);
      }
    }
    FUN_003872e0(auStack_80,DAT_0043debc + 8);
    FUN_00387398(puVar6 + 2,auStack_80);
    FUN_00387328(auStack_80,2);
    puVar13 = puVar6;
    if (((int)*puVar2 >> 4 & 1U) != 0) {
      puVar13 = puVar2;
    }
    puVar11 = puVar6;
    if (((int)*puVar1 >> 4 & 1U) != 0) {
      puVar11 = puVar1;
    }
  }
  iVar7 = FUN_002205d0(puVar13,puVar11);
  if (1 < *param_1) {
    iVar12 = 1;
    iVar8 = *param_1;
    do {
      iVar8 = iVar8 - iVar12;
      iVar12 = iVar12 + 1;
      iVar8 = *(int *)(iVar8 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar8 + 4);
      (**(code **)(iVar4 + 0x14))(iVar8 + *(short *)(iVar4 + 0x10));
      iVar8 = *param_1;
    } while (iVar12 < 3);
    *param_1 = iVar8 + -2;
  }
  iVar8 = *param_1;
  *(int *)(iVar8 * 4 + param_1[2]) = iVar7;
  *param_1 = iVar8 + 1;
  (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
  return;
}


// ==== FUN_00223b18 @ 00223b18 ====

void FUN_00223b18(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int aiStack_60 [4];
  
  piVar5 = (int *)param_1;
  uVar1 = *(undefined4 *)(*piVar5 * 4 + piVar5[2] + -4);
  FUN_0021e960(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
               *(undefined4 *)((*piVar5 + -1) * 4 + piVar5[2] + -4),aiStack_60);
  if (aiStack_60[0] == 0) {
    if (1 < *piVar5) {
      iVar4 = 1;
      iVar3 = *piVar5;
      do {
        iVar3 = iVar3 - iVar4;
        iVar4 = iVar4 + 1;
        iVar3 = *(int *)(iVar3 * 4 + piVar5[2]);
        iVar6 = *(int *)(iVar3 + 4);
        (**(code **)(iVar6 + 0x14))(iVar3 + *(short *)(iVar6 + 0x10));
        iVar3 = *piVar5;
      } while (iVar4 < 3);
      *piVar5 = iVar3 + -2;
    }
    iVar4 = DAT_0043df40;
    iVar3 = *piVar5;
    *(int *)(iVar3 * 4 + piVar5[2]) = DAT_0043df40;
    *piVar5 = iVar3 + 1;
    iVar3 = *(int *)(iVar4 + 4);
    (**(code **)(iVar3 + 0xc))(iVar4 + *(short *)(iVar3 + 8));
  }
  else {
    iVar3 = FUN_0024c300(uVar1);
    iVar3 = FUN_0021e420(param_1,aiStack_60[0],*(undefined4 *)(param_2 + 8),
                         &DAT_0043dc18 + *(int *)(&DAT_003be908 + iVar3 * 4),1,1,0);
    if (*piVar5 < 2) {
      iVar4 = *piVar5;
    }
    else {
      iVar6 = 1;
      iVar4 = *piVar5;
      do {
        iVar4 = iVar4 - iVar6;
        iVar6 = iVar6 + 1;
        iVar4 = *(int *)(iVar4 * 4 + piVar5[2]);
        iVar2 = *(int *)(iVar4 + 4);
        (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
        iVar4 = *piVar5;
      } while (iVar6 < 3);
      *piVar5 = iVar4 + -2;
      iVar4 = *piVar5;
    }
    *(int *)(iVar4 * 4 + piVar5[2]) = iVar3;
    *piVar5 = iVar4 + 1;
    (**(code **)(*(int *)(iVar3 + 4) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 8));
  }
  return;
}


// ==== FUN_00223d08 @ 00223d08 ====

void FUN_00223d08(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int aiStack_60 [4];
  
  piVar6 = (int *)param_1;
  iVar4 = *piVar6;
  iVar5 = piVar6[2];
  uVar1 = *(undefined4 *)((iVar4 + -1) * 4 + iVar5 + -4);
  uVar2 = *(undefined4 *)(iVar4 * 4 + iVar5 + -4);
  FUN_0021e960(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
               *(undefined4 *)((iVar4 + -2) * 4 + iVar5 + -4),aiStack_60);
  iVar4 = FUN_0024c300(uVar1);
  if (aiStack_60[0] != 0) {
    FUN_0021c268(param_1,aiStack_60[0],*(undefined4 *)(param_2 + 8),
                 &DAT_0043dc18 + *(int *)(&DAT_003be908 + iVar4 * 4),uVar2,1,1,0);
  }
  if (2 < *piVar6) {
    iVar5 = 1;
    iVar4 = *piVar6;
    do {
      iVar4 = iVar4 - iVar5;
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(iVar4 * 4 + piVar6[2]);
      iVar3 = *(int *)(iVar4 + 4);
      (**(code **)(iVar3 + 0x14))(iVar4 + *(short *)(iVar3 + 0x10));
      iVar4 = *piVar6;
    } while (iVar5 < 4);
    *piVar6 = iVar4 + -3;
  }
  return;
}


// ==== FUN_00223e38 @ 00223e38 ====

void FUN_00223e38(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar4 = *piVar7;
  iVar6 = piVar7[2];
  uVar1 = *(undefined4 *)((iVar4 + -2) * 4 + iVar6 + -4);
  uVar2 = *(undefined4 *)((iVar4 + -1) * 4 + iVar6 + -4);
  uVar5 = FUN_0024c300(*(undefined4 *)(iVar4 * 4 + iVar6 + -4));
  FUN_0021e170(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),uVar1,uVar2,uVar5,0
              );
  if (2 < *piVar7) {
    iVar6 = 1;
    iVar4 = *piVar7;
    do {
      iVar4 = iVar4 - iVar6;
      iVar6 = iVar6 + 1;
      iVar4 = *(int *)(iVar4 * 4 + piVar7[2]);
      iVar3 = *(int *)(iVar4 + 4);
      (**(code **)(iVar3 + 0x14))(iVar4 + *(short *)(iVar3 + 0x10));
      iVar4 = *piVar7;
    } while (iVar6 < 4);
    *piVar7 = iVar4 + -3;
  }
  return;
}


// ==== FUN_00223f30 @ 00223f30 ====

void FUN_00223f30(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *apuStack_30 [4];
  
  piVar1 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  if ((*piVar1 >> 4 & 1U) == 1) {
    FUN_0021e960(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),piVar1,apuStack_30);
    if (apuStack_30[0] == (uint *)0x0) {
      iVar3 = *param_1;
      goto LAB_00223fc8;
    }
    uVar4 = 0;
    if ((*apuStack_30[0] >> 0x19) - 0xc < 8) {
      uVar4 = (int)*apuStack_30[0] >> 4 & 1;
    }
    if (uVar4 == 0) {
      iVar3 = *param_1;
      goto LAB_00223fc8;
    }
    FUN_00240700(*(int *)(apuStack_30[0][0x11] + 0x48) + 0x24);
  }
  iVar3 = *param_1;
LAB_00223fc8:
  if (0 < iVar3) {
    iVar3 = *(int *)(iVar3 * 4 + param_1[2] + -4);
    iVar2 = *(int *)(iVar3 + 4);
    (**(code **)(iVar2 + 0x14))(iVar3 + *(short *)(iVar2 + 0x10));
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_00224010 @ 00224010 ====

/* Strings referenciadas:
     "AptTrace: " */

void FUN_00224010(int *param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  short *apsStack_70 [4];
  short *apsStack_60 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  apsStack_70[0] = &DAT_003bfaf8;
  lVar8 = FUN_0021ada8();
  puVar7 = DAT_003bfb10;
  puVar10 = (uint *)0x0;
  if ((lVar8 == 7) && ((*piVar2 >> 4 & 1U) != 1)) {
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar9 = Pool_Alloc(DAT_0043dee0,0x10);
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
    FUN_003872e0(apsStack_60,DAT_0043debc + 8);
    FUN_00387398(puVar7 + 2,apsStack_60);
    FUN_00387328(apsStack_60,2);
    FUN_0024c6d0(puVar7,apsStack_70);
    puVar10 = puVar7;
  }
  if (puVar10 == (uint *)0x0) {
    FUN_0024c6d0(piVar2,apsStack_70);
  }
  String_ctor_cstr(apsStack_60,0x3fd480);
  FUN_00252d28(apsStack_60,apsStack_70);
  FUN_00252e10(apsStack_60,0x40de30);
  (*DAT_0043da84)(0x3fd490,apsStack_60[0] + 4);
  if (0 < *param_1) {
    iVar4 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar5 = *(int *)(iVar4 + 4);
    (**(code **)(iVar5 + 0x14))(iVar4 + *(short *)(iVar5 + 0x10));
    *param_1 = *param_1 + -1;
  }
  sVar1 = *apsStack_60[0];
  *apsStack_60[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  sVar1 = *apsStack_70[0];
  *apsStack_70[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  return;
}


// ==== FUN_00224270 @ 00224270 ====

void FUN_00224270(undefined8 param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  short *apsStack_70 [4];
  undefined4 auStack_60 [4];
  
  piVar9 = (int *)param_1;
  puVar4 = *(uint **)(*piVar9 * 4 + piVar9[2] + -4);
  uVar6 = *puVar4 >> 0x19;
  if ((uVar6 == 1) || (bVar1 = false, uVar6 == 0x2a)) {
    bVar1 = ((int)*puVar4 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    auStack_60[0] = 0;
    apsStack_70[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    if (*puVar4 >> 0x19 != 1) {
      puVar4 = (uint *)puVar4[8];
    }
    FUN_0021bee8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),puVar4 + 2,auStack_60,
                 apsStack_70);
    puVar4 = (uint *)FUN_0021e420(param_1,auStack_60[0],*(undefined4 *)(param_2 + 8),apsStack_70,1,1
                                  ,0);
    sVar2 = *apsStack_70[0];
    *apsStack_70[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
    }
  }
  iVar10 = 3;
  (**(code **)(puVar4[1] + 0xc))((int)puVar4 + (int)*(short *)(puVar4[1] + 8));
  *(uint **)(DAT_0043df68 + 0x2c) = puVar4;
  *(undefined4 *)(DAT_0043df68 + 0x40) = 0;
  *(undefined4 *)(DAT_0043df68 + 0x44) = 0;
  *(undefined4 *)(DAT_0043df68 + 0x30) = 0xc61c3c00;
  *(undefined4 *)(DAT_0043df68 + 0x34) = 0xc61c3c00;
  *(undefined4 *)(DAT_0043df68 + 0x38) = 0xc61c3c00;
  *(undefined4 *)(DAT_0043df68 + 0x3c) = 0xc61c3c00;
  uVar6 = **(uint **)((*piVar9 + -1) * 4 + piVar9[2] + -4);
  uVar7 = 0;
  if (uVar6 >> 0x19 == 7) {
    uVar7 = (int)uVar6 >> 4 & 1;
  }
  if (uVar7 == 0) {
    *(float *)(DAT_0043df68 + 0x40) = (float)*(int *)(DAT_0043df68 + 0x54) - (float)puVar4[7];
    *(float *)(DAT_0043df68 + 0x44) = (float)*(int *)(DAT_0043df68 + 0x58) - (float)puVar4[8];
    iVar8 = *piVar9;
  }
  else {
    iVar8 = *piVar9;
  }
  uVar6 = **(uint **)((iVar8 + -2) * 4 + piVar9[2] + -4);
  uVar7 = 0;
  if (uVar6 >> 0x19 == 7) {
    uVar7 = (int)uVar6 >> 4 & 1;
  }
  if (uVar7 != 0) {
    iVar10 = 7;
    uVar11 = FUN_0024c410(*(undefined4 *)((iVar8 + -3) * 4 + piVar9[2] + -4));
    *(undefined4 *)(DAT_0043df68 + 0x3c) = uVar11;
    uVar11 = FUN_0024c410(*(undefined4 *)((*piVar9 + -4) * 4 + piVar9[2] + -4));
    *(undefined4 *)(DAT_0043df68 + 0x38) = uVar11;
    uVar11 = FUN_0024c410(*(undefined4 *)((*piVar9 + -5) * 4 + piVar9[2] + -4));
    *(undefined4 *)(DAT_0043df68 + 0x34) = uVar11;
    uVar11 = FUN_0024c410(*(undefined4 *)((*piVar9 + -6) * 4 + piVar9[2] + -4));
    *(undefined4 *)(DAT_0043df68 + 0x30) = uVar11;
  }
  if (iVar10 <= *piVar9) {
    iVar8 = 1;
    if (iVar10 != 0) {
      iVar5 = *piVar9;
      while( true ) {
        iVar5 = iVar5 - iVar8;
        iVar8 = iVar8 + 1;
        iVar5 = *(int *)(iVar5 * 4 + piVar9[2]);
        iVar3 = *(int *)(iVar5 + 4);
        (**(code **)(iVar3 + 0x14))(iVar5 + *(short *)(iVar3 + 0x10));
        if (iVar10 < iVar8) break;
        iVar5 = *piVar9;
      }
    }
    *piVar9 = *piVar9 - iVar10;
  }
  return;
}


// ==== FUN_00224590 @ 00224590 ====

void FUN_00224590(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0043df68 + 0x2c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
  }
  *(undefined4 *)(DAT_0043df68 + 0x2c) = DAT_0043df40;
  return;
}


// ==== FUN_002245f0 @ 002245f0 ====

void FUN_002245f0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  
  piVar1 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  uVar8 = 0;
  if ((*piVar1 >> 4 & 1U) == 1) {
    iVar4 = FUN_00249c00();
    iVar5 = FUN_0024c300(piVar1);
    uVar8 = iVar4 % iVar5;
  }
  puVar7 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    uVar6 = Pool_Alloc(DAT_0043dee0,0xc);
    puVar7 = (uint *)uVar6;
    FUN_00386ec8(uVar6,7);
    puVar7[2] = uVar8;
    puVar7[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar2 = *DAT_003bfaec;
    puVar3 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar2 | 4;
    DAT_003bfaec = puVar3;
    piVar1 = DAT_003be8e0;
    iVar4 = DAT_003be8e0[1];
    if (iVar4 < *DAT_003be8e0) {
      *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar1[1] = iVar4 + 1;
    }
    else {
      *puVar7 = uVar2 & 0xfffffffb;
    }
    puVar7[2] = uVar8;
  }
  if (0 < *param_1) {
    iVar4 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar5 = *(int *)(iVar4 + 4);
    (**(code **)(iVar5 + 0x14))(iVar4 + *(short *)(iVar5 + 0x10));
    *param_1 = *param_1 + -1;
  }
  iVar4 = *param_1;
  *(uint **)(iVar4 * 4 + param_1[2]) = puVar7;
  *param_1 = iVar4 + 1;
  (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
  return;
}


// ==== FUN_00224788 @ 00224788 ====

void FUN_00224788(int *param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  short *apsStack_60 [4];
  
  puVar8 = DAT_003bfb10;
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  if ((*piVar2 >> 4 & 1U) == 1) {
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar10 = Pool_Alloc(DAT_0043dee0,0x10);
      puVar8 = (uint *)FUN_0024ad08(uVar10);
    }
    else {
      uVar3 = *DAT_003bfb10;
      puVar7 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar3 | 4;
      DAT_003bfb10 = puVar7;
      piVar6 = DAT_003be8e0;
      iVar11 = DAT_003be8e0[1];
      if (iVar11 < *DAT_003be8e0) {
        *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar8;
        piVar6[1] = iVar11 + 1;
      }
      else {
        *puVar8 = uVar3 & 0xfffffffb;
      }
      lVar9 = FUN_003872a8(puVar8 + 2);
      if (lVar9 == 0) {
        FUN_002530e8(puVar8 + 2,0);
      }
    }
    uVar10 = FUN_0024c300(piVar2);
    FUN_00252c58(apsStack_60,uVar10,1);
    *apsStack_60[0] = *apsStack_60[0] + 1;
    psVar4 = (short *)puVar8[2];
    sVar1 = *psVar4;
    *psVar4 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
    }
    puVar8[2] = (uint)apsStack_60[0];
    sVar1 = *apsStack_60[0];
    *apsStack_60[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
    if (0 < *param_1) {
      iVar11 = *(int *)(*param_1 * 4 + param_1[2] + -4);
      iVar5 = *(int *)(iVar11 + 4);
      (**(code **)(iVar5 + 0x14))(iVar11 + *(short *)(iVar5 + 0x10));
      *param_1 = *param_1 + -1;
    }
    iVar11 = *param_1;
    *(uint **)(iVar11 * 4 + param_1[2]) = puVar8;
    *param_1 = iVar11 + 1;
    (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
  }
  else {
    if (*param_1 < 1) {
      iVar11 = *param_1;
    }
    else {
      (**(code **)(piVar2[1] + 0x14))((int)piVar2 + (int)*(short *)(piVar2[1] + 0x10));
      *param_1 = *param_1 + -1;
      iVar11 = *param_1;
    }
    iVar5 = DAT_0043df40;
    *(int *)(iVar11 * 4 + param_1[2]) = DAT_0043df40;
    *param_1 = iVar11 + 1;
    iVar11 = *(int *)(iVar5 + 4);
    (**(code **)(iVar11 + 0xc))(iVar5 + *(short *)(iVar11 + 8));
  }
  return;
}


// ==== FUN_002249e0 @ 002249e0 ====

void FUN_002249e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar4 = DAT_0043df64;
  puVar6 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,7);
    puVar6[2] = uVar4;
    puVar6[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar1 = *DAT_003bfaec;
    puVar5 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar1 | 4;
    DAT_003bfaec = puVar5;
    piVar3 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar3[1] = iVar2 + 1;
    }
    else {
      *puVar6 = uVar1 & 0xfffffffb;
    }
    puVar6[2] = uVar4;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_00224b00 @ 00224b00 ====

void FUN_00224b00(undefined8 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  short *apsStack_60 [4];
  
  piVar11 = (int *)param_1;
  iVar7 = *(int *)((*piVar11 + -1) * 4 + piVar11[2] + -4);
  uVar2 = *(undefined4 *)(*piVar11 * 4 + piVar11[2] + -4);
  lVar9 = (**(code **)(*(int *)(iVar7 + 4) + 0x2c))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0x28));
  if (lVar9 != 0) {
    apsStack_60[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(uVar2,apsStack_60);
    FUN_0021c268(param_1,iVar7,*(undefined4 *)(param_2 + 8),apsStack_60,0,1,1,0);
    sVar1 = *apsStack_60[0];
    *apsStack_60[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
  }
  if (1 < *piVar11) {
    iVar10 = 1;
    iVar7 = *piVar11;
    do {
      iVar7 = iVar7 - iVar10;
      iVar10 = iVar10 + 1;
      iVar7 = *(int *)(iVar7 * 4 + piVar11[2]);
      iVar3 = *(int *)(iVar7 + 4);
      (**(code **)(iVar3 + 0x14))(iVar7 + *(short *)(iVar3 + 0x10));
      iVar7 = *piVar11;
    } while (iVar10 < 3);
    *piVar11 = iVar7 + -2;
  }
  puVar8 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar8,7);
    puVar8[2] = 1;
    puVar8[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar4 = *DAT_003bfaec;
    puVar6 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar4 | 4;
    DAT_003bfaec = puVar6;
    piVar5 = DAT_003be8e0;
    iVar7 = DAT_003be8e0[1];
    if (iVar7 < *DAT_003be8e0) {
      *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar8;
      piVar5[1] = iVar7 + 1;
    }
    else {
      *puVar8 = uVar4 & 0xfffffffb;
    }
    puVar8[2] = 1;
  }
  iVar7 = *piVar11;
  *(uint **)(iVar7 * 4 + piVar11[2]) = puVar8;
  *piVar11 = iVar7 + 1;
  (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
  return;
}


// ==== FUN_00224d20 @ 00224d20 ====

void FUN_00224d20(undefined8 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  short *apsStack_50 [4];
  
  piVar8 = (int *)param_1;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_50[0] = &DAT_003bfaf8;
  FUN_0024c6d0(*(undefined4 *)(*piVar8 * 4 + piVar8[2] + -4),apsStack_50);
  FUN_0021c268(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),apsStack_50,0,1,1,0
              );
  if (0 < *piVar8) {
    iVar2 = *(int *)(*piVar8 * 4 + piVar8[2] + -4);
    iVar3 = *(int *)(iVar2 + 4);
    (**(code **)(iVar3 + 0x14))(iVar2 + *(short *)(iVar3 + 0x10));
    *piVar8 = *piVar8 + -1;
  }
  puVar7 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar7,7);
    puVar7[2] = 1;
    puVar7[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar4 = *DAT_003bfaec;
    puVar6 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar4 | 4;
    DAT_003bfaec = puVar6;
    piVar5 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar5[1] = iVar2 + 1;
    }
    else {
      *puVar7 = uVar4 & 0xfffffffb;
    }
    puVar7[2] = 1;
  }
  iVar2 = *piVar8;
  *(uint **)(iVar2 * 4 + piVar8[2]) = puVar7;
  *piVar8 = iVar2 + 1;
  (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
  sVar1 = *apsStack_50[0];
  *apsStack_50[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
  }
  return;
}


// ==== FUN_00224ee8 @ 00224ee8 ====

void FUN_00224ee8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  uVar1 = *(undefined4 *)(*piVar6 * 4 + piVar6[2] + -4);
  puVar4 = *(uint **)((*piVar6 + -1) * 4 + piVar6[2] + -4);
  if (piVar6[0xc] == 0) {
    if (*puVar4 >> 0x19 != 1) {
      puVar4 = (uint *)puVar4[8];
    }
    FUN_0021c268(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),puVar4 + 2,uVar1,
                 0,1,0);
    iVar3 = *piVar6;
  }
  else {
    if (*puVar4 >> 0x19 != 1) {
      puVar4 = (uint *)puVar4[8];
    }
    if (DAT_003bfae0 == 0) {
      FUN_00385660(piVar6[0xc]);
    }
    FUN_002488d0(DAT_003bfae0 + 8,puVar4 + 2,uVar1);
    iVar3 = *piVar6;
  }
  if (1 < iVar3) {
    iVar5 = 1;
    iVar3 = *piVar6;
    do {
      iVar3 = iVar3 - iVar5;
      iVar5 = iVar5 + 1;
      iVar3 = *(int *)(iVar3 * 4 + piVar6[2]);
      iVar2 = *(int *)(iVar3 + 4);
      (**(code **)(iVar2 + 0x14))(iVar3 + *(short *)(iVar2 + 0x10));
      iVar3 = *piVar6;
    } while (iVar5 < 3);
    *piVar6 = iVar3 + -2;
  }
  return;
}


// ==== FUN_00225030 @ 00225030 ====

void FUN_00225030(undefined8 param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  short *apsStack_90 [4];
  int aiStack_80 [4];
  
  piVar9 = (int *)param_1;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  puVar4 = *(uint **)(*piVar9 * 4 + piVar9[2] + -4);
  apsStack_90[0] = &DAT_003bfaf8;
  uVar6 = FUN_0024c300(*(undefined4 *)((*piVar9 + -1) * 4 + piVar9[2] + -4));
  aiStack_80[0] = 0;
  uVar7 = 0;
  if (*puVar4 >> 0x19 == 0x16) {
    uVar7 = (int)*puVar4 >> 4 & 1;
  }
  if (uVar7 != 0) {
    puVar4 = (uint *)FUN_002334a0(puVar4,0);
  }
  uVar7 = *puVar4;
  if ((uVar7 >> 0x19 == 1) || (bVar1 = false, uVar7 >> 0x19 == 0x2a)) {
    bVar1 = ((int)uVar7 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    if (uVar7 >> 0x19 != 1) {
      puVar4 = (uint *)puVar4[8];
    }
    FUN_0021bee8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),puVar4 + 2,aiStack_80,
                 apsStack_90);
    puVar4 = (uint *)FUN_0021e420(param_1,aiStack_80[0],*(undefined4 *)(param_2 + 8),apsStack_90,1,1
                                  ,0);
  }
  (**(code **)(puVar4[1] + 0xc))((int)puVar4 + (int)*(short *)(puVar4[1] + 8));
  if (1 < *piVar9) {
    iVar8 = 1;
    iVar5 = *piVar9;
    do {
      iVar5 = iVar5 - iVar8;
      iVar8 = iVar8 + 1;
      iVar5 = *(int *)(iVar5 * 4 + piVar9[2]);
      iVar3 = *(int *)(iVar5 + 4);
      (**(code **)(iVar3 + 0x14))(iVar5 + *(short *)(iVar3 + 0x10));
      iVar5 = *piVar9;
    } while (iVar8 < 3);
    *piVar9 = iVar5 + -2;
  }
  iVar5 = aiStack_80[0];
  if (aiStack_80[0] == 0) {
    iVar5 = *(int *)(param_2 + 4);
  }
  FUN_0021ea58(param_1,iVar5,puVar4,uVar6);
  (**(code **)(puVar4[1] + 0x14))((int)puVar4 + (int)*(short *)(puVar4[1] + 0x10));
  sVar2 = *apsStack_90[0];
  *apsStack_90[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
  }
  return;
}


// ==== FUN_00225270 @ 00225270 ====

void FUN_00225270(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  uint uVar12;
  
  piVar1 = *(int **)((*param_1 + -1) * 4 + param_1[2] + -4);
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  lVar8 = FUN_0021ada8();
  puVar6 = (uint *)0x0;
  if ((lVar8 == 7) && (((*piVar2 >> 4 & 1U) != 1 || ((*piVar1 >> 4 & 1U) != 1)))) {
    puVar6 = DAT_0043df40;
  }
  if (puVar6 == (uint *)0x0) {
    fVar10 = (float)FUN_0024c410(piVar2);
    puVar6 = DAT_0043df40;
    if (fVar10 != 0.0) {
      uVar11 = FUN_0024c410(piVar1);
      uVar12 = fmodf(uVar11,fVar10);
      puVar6 = DAT_003bfae8;
      if (DAT_003bfae8 == (uint *)0x0) {
        puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar6,6);
        puVar6[2] = uVar12;
        puVar6[1] = (uint)&DAT_003e2098;
      }
      else {
        uVar3 = *DAT_003bfae8;
        puVar5 = (uint *)DAT_003bfae8[2];
        *DAT_003bfae8 = uVar3 | 4;
        DAT_003bfae8 = puVar5;
        piVar1 = DAT_003be8e0;
        iVar7 = DAT_003be8e0[1];
        if (iVar7 < *DAT_003be8e0) {
          *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar6;
          piVar1[1] = iVar7 + 1;
        }
        else {
          *puVar6 = uVar3 & 0xfffffffb;
        }
        puVar6[2] = uVar12;
      }
    }
    iVar7 = *param_1;
  }
  else {
    iVar7 = *param_1;
  }
  if (1 < iVar7) {
    iVar9 = 1;
    iVar7 = *param_1;
    do {
      iVar7 = iVar7 - iVar9;
      iVar9 = iVar9 + 1;
      iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar7 + 4);
      (**(code **)(iVar4 + 0x14))(iVar7 + *(short *)(iVar4 + 0x10));
      iVar7 = *param_1;
    } while (iVar9 < 3);
    *param_1 = iVar7 + -2;
  }
  iVar7 = *param_1;
  *(uint **)(iVar7 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_00225490 @ 00225490 ====

void FUN_00225490(undefined8 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  short *apsStack_70 [4];
  
  piVar8 = (int *)param_1;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  uVar2 = *(undefined4 *)((*piVar8 + -1) * 4 + piVar8[2] + -4);
  apsStack_70[0] = &DAT_003bfaf8;
  FUN_0024c6d0(*(undefined4 *)(*piVar8 * 4 + piVar8[2] + -4),apsStack_70);
  uVar5 = FUN_0024c300(uVar2);
  if (*piVar8 < 2) {
    uVar2 = *(undefined4 *)(param_2 + 8);
  }
  else {
    iVar7 = 1;
    iVar4 = *piVar8;
    do {
      iVar4 = iVar4 - iVar7;
      iVar7 = iVar7 + 1;
      iVar4 = *(int *)(iVar4 * 4 + piVar8[2]);
      iVar3 = *(int *)(iVar4 + 4);
      (**(code **)(iVar3 + 0x14))(iVar4 + *(short *)(iVar3 + 0x10));
      iVar4 = *piVar8;
    } while (iVar7 < 3);
    *piVar8 = iVar4 + -2;
    uVar2 = *(undefined4 *)(param_2 + 8);
  }
  lVar6 = FUN_0021f1c8(param_1,*(undefined4 *)(param_2 + 4),uVar2,apsStack_70,uVar5,1);
  iVar7 = DAT_0043df40;
  iVar4 = *piVar8;
  if (lVar6 == 0) {
    *(int *)(iVar4 * 4 + piVar8[2]) = DAT_0043df40;
    *piVar8 = iVar4 + 1;
    iVar4 = *(int *)(iVar7 + 4);
    (**(code **)(iVar4 + 0xc))(iVar7 + *(short *)(iVar4 + 8));
  }
  else {
    iVar7 = (int)lVar6;
    *(int *)(iVar4 * 4 + piVar8[2]) = iVar7;
    *piVar8 = iVar4 + 1;
    (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
    (**(code **)(*(int *)(iVar7 + 4) + 0x14))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0x10));
  }
  sVar1 = *apsStack_70[0];
  *apsStack_70[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  return;
}


// ==== FUN_00225650 @ 00225650 ====

void FUN_00225650(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  int *piVar8;
  
  piVar8 = (int *)param_1;
  puVar7 = *(uint **)(*piVar8 * 4 + piVar8[2] + -4);
  if (*puVar7 >> 0x19 != 1) {
    puVar7 = (uint *)puVar7[8];
  }
  iVar5 = piVar8[0xc];
  puVar7 = puVar7 + 2;
  if (iVar5 == 0) {
    piVar4 = (int *)FUN_0021e420(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                                 puVar7,0,1,0);
    if ((*piVar4 >> 4 & 1U) != 1) {
      FUN_0021c268(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),puVar7,
                   DAT_0043df40,0,1,0);
    }
    iVar5 = *piVar8;
  }
  else {
    iVar1 = DAT_003bfae0;
    if ((DAT_003bfae0 == 0) && (iVar1 = *(int *)(iVar5 + 0x28), *(int *)(iVar5 + 0x28) == 0)) {
      bVar2 = false;
    }
    else {
      lVar6 = FUN_00248c78(iVar1 + 8,puVar7);
      bVar2 = lVar6 != 0;
    }
    uVar3 = DAT_0043df40;
    if (bVar2) {
      iVar5 = *piVar8;
    }
    else {
      if (DAT_003bfae0 == 0) {
        FUN_00385660(iVar5);
      }
      FUN_002488d0(DAT_003bfae0 + 8,puVar7,uVar3);
      iVar5 = *piVar8;
    }
  }
  if (0 < iVar5) {
    iVar5 = *(int *)(iVar5 * 4 + piVar8[2] + -4);
    iVar1 = *(int *)(iVar5 + 4);
    (**(code **)(iVar1 + 0x14))(iVar5 + *(short *)(iVar1 + 0x10));
    *piVar8 = *piVar8 + -1;
  }
  return;
}


// ==== FUN_002257d8 @ 002257d8 ====

void FUN_002257d8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_0024c300(*(undefined4 *)(*param_1 * 4 + param_1[2] + -4));
  if (0 < *param_1) {
    iVar5 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar2 = *(int *)(iVar5 + 4);
    (**(code **)(iVar2 + 0x14))(iVar5 + *(short *)(iVar2 + 0x10));
    *param_1 = *param_1 + -1;
  }
  uVar3 = FUN_0024fa38(DAT_0043dee4,0x2c);
  uVar3 = FUN_002330d8(uVar3);
  iVar6 = (int)uVar3;
  (**(code **)(*(int *)(iVar6 + 4) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 4) + 8));
  iVar5 = *param_1;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = iVar2 + 1;
      FUN_002333e8(uVar3,iVar2,*(undefined4 *)((iVar5 - iVar2) * 4 + param_1[2] + -4));
      iVar5 = *param_1;
      iVar2 = iVar4;
    } while (iVar4 < iVar1);
    if (0 < iVar1) {
      if (iVar5 < iVar1) {
        iVar5 = *param_1;
      }
      else {
        iVar5 = 1;
        if (0 < iVar1) {
          iVar2 = *param_1;
          while( true ) {
            iVar2 = iVar2 - iVar5;
            iVar5 = iVar5 + 1;
            iVar2 = *(int *)(iVar2 * 4 + param_1[2]);
            iVar4 = *(int *)(iVar2 + 4);
            (**(code **)(iVar4 + 0x14))(iVar2 + *(short *)(iVar4 + 0x10));
            if (iVar1 < iVar5) break;
            iVar2 = *param_1;
          }
        }
        *param_1 = *param_1 - iVar1;
        iVar5 = *param_1;
      }
    }
  }
  *(int *)(iVar5 * 4 + param_1[2]) = iVar6;
  *param_1 = iVar5 + 1;
  return;
}


// ==== FUN_00225958 @ 00225958 ====

void FUN_00225958(undefined8 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *apsStack_b0 [4];
  
  piVar7 = (int *)param_1;
  iVar4 = FUN_0024c300(*(undefined4 *)(*piVar7 * 4 + piVar7[2] + -4));
  if (0 < *piVar7) {
    iVar9 = *(int *)(*piVar7 * 4 + piVar7[2] + -4);
    iVar8 = *(int *)(iVar9 + 4);
    (**(code **)(iVar8 + 0x14))(iVar9 + *(short *)(iVar8 + 0x10));
    *piVar7 = *piVar7 + -1;
  }
  lVar6 = FUN_0021f1c8(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),0x43dda8,0,
                       1);
  iVar9 = 0;
  if (lVar6 != 0) {
    iVar10 = iVar4 * 2;
    iVar5 = (int)lVar6;
    iVar8 = iVar4;
    if (0 < iVar4) {
      do {
        uVar2 = *(undefined4 *)((*piVar7 - iVar9) * 4 + piVar7[2] + -4);
        DAT_003bfaf8 = DAT_003bfaf8 + 1;
        apsStack_b0[0] = &DAT_003bfaf8;
        FUN_0024c6d0(*(undefined4 *)((*piVar7 - (iVar9 + 1)) * 4 + piVar7[2] + -4),apsStack_b0);
        FUN_002488d0(iVar5 + 8,apsStack_b0,uVar2);
        sVar1 = *apsStack_b0[0];
        *apsStack_b0[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
        }
        iVar8 = iVar8 + -1;
        iVar9 = iVar9 + 2;
      } while (iVar8 != 0);
    }
    if (*piVar7 < iVar10) {
      iVar4 = *piVar7;
    }
    else {
      iVar9 = 1;
      if (0 < iVar10) {
        iVar8 = *piVar7;
        while( true ) {
          iVar8 = iVar8 - iVar9;
          iVar9 = iVar9 + 1;
          iVar8 = *(int *)(iVar8 * 4 + piVar7[2]);
          iVar3 = *(int *)(iVar8 + 4);
          (**(code **)(iVar3 + 0x14))(iVar8 + *(short *)(iVar3 + 0x10));
          if (iVar10 < iVar9) break;
          iVar8 = *piVar7;
        }
      }
      *piVar7 = *piVar7 + iVar4 * -2;
      iVar4 = *piVar7;
    }
    *(int *)(iVar4 * 4 + piVar7[2]) = iVar5;
    *piVar7 = iVar4 + 1;
    (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
    (**(code **)(*(int *)(iVar5 + 4) + 0x14))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x10));
    return;
  }
  iVar9 = iVar4 * 2;
  if (0 < iVar9) {
    if (*piVar7 < iVar9) {
      iVar4 = *piVar7;
      goto LAB_00225bd0;
    }
    iVar8 = 1;
    if (0 < iVar9) {
      iVar5 = *piVar7;
      while( true ) {
        iVar5 = iVar5 - iVar8;
        iVar8 = iVar8 + 1;
        iVar5 = *(int *)(iVar5 * 4 + piVar7[2]);
        iVar10 = *(int *)(iVar5 + 4);
        (**(code **)(iVar10 + 0x14))(iVar5 + *(short *)(iVar10 + 0x10));
        if (iVar9 < iVar8) break;
        iVar5 = *piVar7;
      }
    }
    *piVar7 = *piVar7 + iVar4 * -2;
  }
  iVar4 = *piVar7;
LAB_00225bd0:
  iVar9 = DAT_0043df40;
  *(int *)(iVar4 * 4 + piVar7[2]) = DAT_0043df40;
  *piVar7 = iVar4 + 1;
  iVar4 = *(int *)(iVar9 + 4);
  (**(code **)(iVar4 + 0xc))(iVar9 + *(short *)(iVar4 + 8));
  return;
}


// ==== FUN_00225c30 @ 00225c30 ====

void FUN_00225c30(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_60 [16];
  
  puVar6 = DAT_003bfb10;
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar9 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar6 = (uint *)FUN_0024ad08(uVar9);
  }
  else {
    uVar13 = *DAT_003bfb10;
    puVar5 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar13 | 4;
    DAT_003bfb10 = puVar5;
    piVar4 = DAT_003be8e0;
    iVar14 = DAT_003be8e0[1];
    if (iVar14 < *DAT_003be8e0) {
      *(uint **)(iVar14 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar4[1] = iVar14 + 1;
    }
    else {
      *puVar6 = uVar13 & 0xfffffffb;
    }
    lVar8 = FUN_003872a8(puVar6 + 2);
    if (lVar8 == 0) {
      FUN_002530e8(puVar6 + 2,0);
    }
  }
  uVar13 = *puVar2;
  uVar7 = (int)uVar13 >> 4;
  uVar11 = uVar7 & 1;
  uVar10 = uVar13 >> 0x19;
  if (uVar11 == 0) {
    FUN_003872e0(auStack_60,DAT_0043debc + 8);
    FUN_00387398(puVar6 + 2,auStack_60);
    FUN_00387328(auStack_60,2);
LAB_00225fd8:
    iVar14 = *param_1;
  }
  else {
    uVar12 = 0;
    if (uVar10 == 7) {
      uVar12 = uVar11;
    }
    iVar14 = DAT_0043dda4;
    if (uVar12 == 0) {
      uVar12 = 0;
      if (uVar10 == 6) {
        uVar12 = uVar11;
      }
      iVar14 = DAT_0043dda4;
      if (uVar12 == 0) {
        uVar12 = 0;
        if (uVar10 == 5) {
          uVar12 = uVar11;
        }
        iVar14 = DAT_0043dcb4;
        if (uVar12 == 0) {
          if ((uVar10 == 1) || (bVar1 = false, uVar10 == 0x2a)) {
            bVar1 = uVar11 == 1;
          }
          iVar14 = DAT_0043de8c;
          if (!bVar1) {
            uVar13 = uVar13 >> 0x19;
            uVar10 = 0;
            if (uVar13 == 0x1b) {
              uVar10 = uVar7 & 1;
            }
            iVar14 = DAT_0043dda8;
            if (uVar10 == 0) {
              uVar10 = 0;
              if (uVar13 == 0x16) {
                uVar10 = uVar7 & 1;
              }
              if (uVar10 == 0) {
                uVar10 = 0;
                if (uVar13 - 0xc < 8) {
                  uVar10 = uVar7 & 1;
                }
                if (uVar10 == 0) {
                  iVar14 = DAT_0043dda0;
                  if ((((uVar13 != 3) && (iVar14 = DAT_0043debc, (uVar7 & 1) == 1)) &&
                      (iVar14 = DAT_0043dcf4, 2 < uVar13 - 0x2b)) &&
                     (iVar14 = DAT_0043dcf4, uVar13 != 9)) goto LAB_00225fd8;
                }
                else {
                  lVar8 = FUN_00387080(puVar2);
                  bVar1 = false;
                  if (lVar8 == 0xd) {
                    lVar8 = FUN_003871c0(puVar2);
                    bVar1 = lVar8 == 0;
                  }
                  iVar14 = DAT_0043dd90;
                  if (!bVar1) {
                    lVar8 = FUN_00387080(puVar2);
                    bVar1 = false;
                    if (lVar8 == 0x12) {
                      lVar8 = FUN_003871c0(puVar2);
                      bVar1 = lVar8 == 0;
                    }
                    iVar14 = DAT_0043dd90;
                    if (!bVar1) {
                      lVar8 = FUN_00387080(puVar2);
                      bVar1 = false;
                      if (lVar8 == 0x13) {
                        lVar8 = FUN_003871c0(puVar2);
                        bVar1 = lVar8 == 0;
                      }
                      iVar14 = DAT_0043dda8;
                      if (bVar1) {
                        iVar14 = DAT_0043debc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_003872e0(auStack_60,iVar14 + 8);
    FUN_00387398(puVar6 + 2,auStack_60);
    FUN_00387328(auStack_60,2);
    iVar14 = *param_1;
  }
  if (0 < iVar14) {
    iVar14 = *(int *)(iVar14 * 4 + param_1[2] + -4);
    iVar3 = *(int *)(iVar14 + 4);
    (**(code **)(iVar3 + 0x14))(iVar14 + *(short *)(iVar3 + 0x10));
    *param_1 = *param_1 + -1;
  }
  iVar14 = *param_1;
  *(uint **)(iVar14 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar14 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_00226060 @ 00226060 ====

void FUN_00226060(int *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  short *apsStack_70 [4];
  short *apsStack_60 [4];
  uint *apuStack_50 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_70[0] = &DAT_003bfaf8;
  FUN_0021e960(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
               *(undefined4 *)(*param_1 * 4 + param_1[2] + -4),apuStack_50);
  if (apuStack_50[0] == (uint *)0x0) {
    if (0 < *param_1) {
      iVar3 = *(int *)(*param_1 * 4 + param_1[2] + -4);
      iVar4 = *(int *)(iVar3 + 4);
      (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
      *param_1 = *param_1 + -1;
    }
    iVar4 = DAT_0043df40;
    iVar3 = *param_1;
    *(int *)(iVar3 * 4 + param_1[2]) = DAT_0043df40;
    *param_1 = iVar3 + 1;
    iVar3 = *(int *)(iVar4 + 4);
    (**(code **)(iVar3 + 0xc))(iVar4 + *(short *)(iVar3 + 8));
  }
  else {
    uVar10 = 0;
    if ((*apuStack_50[0] >> 0x19) - 0xc < 8) {
      uVar10 = (int)*apuStack_50[0] >> 4 & 1;
    }
    if (uVar10 == 0) {
      String_ctor_cstr(apsStack_60,0x40de10);
      *apsStack_60[0] = *apsStack_60[0] + 1;
      sVar1 = *apsStack_70[0];
      *apsStack_70[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
      }
      apsStack_70[0] = apsStack_60[0];
      sVar1 = *apsStack_60[0];
      *apsStack_60[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
      }
    }
    else {
      FUN_0021e0b8(apuStack_50[0],apsStack_70);
    }
    puVar7 = DAT_003bfb10;
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar9 = Pool_Alloc(DAT_0043dee0,0x10);
      puVar7 = (uint *)FUN_0024ad08(uVar9);
    }
    else {
      uVar10 = *DAT_003bfb10;
      puVar6 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar10 | 4;
      DAT_003bfb10 = puVar6;
      piVar5 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar5[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar10 & 0xfffffffb;
      }
      lVar8 = FUN_003872a8(puVar7 + 2);
      if (lVar8 == 0) {
        FUN_002530e8(puVar7 + 2,0);
      }
    }
    *apsStack_70[0] = *apsStack_70[0] + 1;
    psVar2 = (short *)puVar7[2];
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    puVar7[2] = (uint)apsStack_70[0];
    if (0 < *param_1) {
      iVar3 = *(int *)(*param_1 * 4 + param_1[2] + -4);
      iVar4 = *(int *)(iVar3 + 4);
      (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
      *param_1 = *param_1 + -1;
    }
    iVar3 = *param_1;
    *(uint **)(iVar3 * 4 + param_1[2]) = puVar7;
    *param_1 = iVar3 + 1;
    (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
  }
  sVar1 = *apsStack_70[0];
  *apsStack_70[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  return;
}


// ==== FUN_00226380 @ 00226380 ====

void FUN_00226380(undefined8 param_1,int param_2)

{
  FUN_002202c8(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return;
}


// ==== FUN_002263a0 @ 002263a0 ====

void FUN_002263a0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a0 [16];
  
  puVar5 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  puVar6 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  lVar10 = FUN_0021ada8();
  puVar15 = DAT_003bfb10;
  uVar12 = *puVar5 >> 0x19;
  if ((uVar12 == 1) || (bVar1 = false, uVar12 == 0x2a)) {
    bVar1 = ((int)*puVar5 >> 4 & 1U) == 1;
  }
  if (bVar1) {
LAB_00226488:
    if (lVar10 == 7) {
      if (((int)*puVar5 >> 4 & 1U) != 1) {
        if (DAT_003bfb10 == (uint *)0x0) {
          uVar11 = Pool_Alloc(DAT_0043dee0,0x10);
          puVar5 = (uint *)FUN_0024ad08(uVar11);
        }
        else {
          uVar12 = *DAT_003bfb10;
          puVar5 = (uint *)DAT_003bfb10[3];
          *DAT_003bfb10 = uVar12 | 4;
          DAT_003bfb10 = puVar5;
          piVar3 = DAT_003be8e0;
          iVar7 = DAT_003be8e0[1];
          if (iVar7 < *DAT_003be8e0) {
            *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar15;
            piVar3[1] = iVar7 + 1;
          }
          else {
            *puVar15 = uVar12 & 0xfffffffb;
          }
          lVar10 = FUN_003872a8(puVar15 + 2);
          puVar5 = puVar15;
          if (lVar10 == 0) {
            FUN_002530e8(puVar15 + 2,0);
          }
        }
        puVar15 = puVar5;
        if (*puVar5 >> 0x19 != 1) {
          puVar15 = (uint *)puVar5[8];
        }
        FUN_003872e0(auStack_a0,DAT_0043debc + 8);
        FUN_00387398(puVar15 + 2,auStack_a0);
        FUN_00387328(auStack_a0,2);
      }
      puVar15 = DAT_003bfb10;
      if (((int)*puVar6 >> 4 & 1U) != 1) {
        if (DAT_003bfb10 == (uint *)0x0) {
          uVar11 = Pool_Alloc(DAT_0043dee0,0x10);
          puVar6 = (uint *)FUN_0024ad08(uVar11);
        }
        else {
          uVar12 = *DAT_003bfb10;
          puVar6 = (uint *)DAT_003bfb10[3];
          *DAT_003bfb10 = uVar12 | 4;
          DAT_003bfb10 = puVar6;
          piVar3 = DAT_003be8e0;
          iVar7 = DAT_003be8e0[1];
          if (iVar7 < *DAT_003be8e0) {
            *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar15;
            piVar3[1] = iVar7 + 1;
          }
          else {
            *puVar15 = uVar12 & 0xfffffffb;
          }
          lVar10 = FUN_003872a8(puVar15 + 2);
          puVar6 = puVar15;
          if (lVar10 == 0) {
            FUN_002530e8(puVar15 + 2,0);
          }
        }
        puVar15 = puVar6;
        if (*puVar6 >> 0x19 != 1) {
          puVar15 = (uint *)puVar6[8];
        }
        FUN_003872e0(auStack_a0,DAT_0043debc + 8);
        FUN_00387398(puVar15 + 2,auStack_a0);
        FUN_00387328(auStack_a0,2);
      }
    }
    iVar7 = FUN_002205d0(puVar5,puVar6);
    if (1 < *param_1) {
      iVar16 = 1;
      iVar8 = *param_1;
      do {
        iVar8 = iVar8 - iVar16;
        iVar16 = iVar16 + 1;
        iVar8 = *(int *)(iVar8 * 4 + param_1[2]);
        iVar17 = *(int *)(iVar8 + 4);
        (**(code **)(iVar17 + 0x14))(iVar8 + *(short *)(iVar17 + 0x10));
        iVar8 = *param_1;
      } while (iVar16 < 3);
      *param_1 = iVar8 + -2;
    }
    iVar8 = *param_1;
    *(int *)(iVar8 * 4 + param_1[2]) = iVar7;
    *param_1 = iVar8 + 1;
    (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
    return;
  }
  uVar12 = *puVar6;
  uVar4 = (int)uVar12 >> 4;
  if ((uVar12 >> 0x19 == 1) || (bVar1 = false, uVar12 >> 0x19 == 0x2a)) {
    bVar1 = (uVar4 & 1) == 1;
  }
  if (bVar1) goto LAB_00226488;
  uVar14 = *puVar5;
  uVar13 = 0;
  uVar9 = (int)uVar14 >> 4;
  if (uVar14 >> 0x19 == 7) {
    uVar13 = uVar9 & 1;
  }
  if (uVar13 == 0) {
    uVar13 = 0;
    if (uVar12 >> 0x19 == 7) {
      uVar13 = uVar4 & 1;
    }
    if (uVar13 != 0) goto LAB_0022677c;
LAB_00226970:
    if (lVar10 != 7) {
LAB_00226a3c:
      fVar18 = (float)FUN_0024c410(puVar5);
      fVar19 = (float)FUN_0024c410(puVar6);
      if (1 < *param_1) {
        iVar8 = 1;
        iVar7 = *param_1;
        do {
          iVar7 = iVar7 - iVar8;
          iVar8 = iVar8 + 1;
          iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
          iVar16 = *(int *)(iVar7 + 4);
          (**(code **)(iVar16 + 0x14))(iVar7 + *(short *)(iVar16 + 0x10));
          iVar7 = *param_1;
        } while (iVar8 < 3);
        *param_1 = iVar7 + -2;
      }
      puVar5 = DAT_003bfae8;
      if (DAT_003bfae8 == (uint *)0x0) {
        puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar5,6);
        puVar5[2] = (uint)(fVar18 + fVar19);
        puVar5[1] = (uint)&DAT_003e2098;
      }
      else {
        uVar12 = *DAT_003bfae8;
        puVar6 = (uint *)DAT_003bfae8[2];
        *DAT_003bfae8 = uVar12 | 4;
        DAT_003bfae8 = puVar6;
        piVar3 = DAT_003be8e0;
        iVar7 = DAT_003be8e0[1];
        if (iVar7 < *DAT_003be8e0) {
          *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar5;
          piVar3[1] = iVar7 + 1;
        }
        else {
          *puVar5 = uVar12 & 0xfffffffb;
        }
        puVar5[2] = (uint)(fVar18 + fVar19);
      }
      iVar7 = *param_1;
      *(uint **)(iVar7 * 4 + param_1[2]) = puVar5;
      *param_1 = iVar7 + 1;
      (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
      return;
    }
    if ((uVar9 & 1) == 1) {
      if ((uVar4 & 1) == 1) goto LAB_00226a3c;
      iVar7 = *param_1;
    }
    else {
      iVar7 = *param_1;
    }
    if (1 < iVar7) {
      iVar8 = 1;
      iVar7 = *param_1;
      do {
        iVar7 = iVar7 - iVar8;
        iVar8 = iVar8 + 1;
        iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
        iVar16 = *(int *)(iVar7 + 4);
        (**(code **)(iVar16 + 0x14))(iVar7 + *(short *)(iVar16 + 0x10));
        iVar7 = *param_1;
      } while (iVar8 < 3);
LAB_002269fc:
      *param_1 = iVar7 + -2;
    }
  }
  else {
LAB_0022677c:
    uVar13 = 0;
    if (uVar14 >> 0x19 == 6) {
      uVar13 = uVar9 & 1;
    }
    if (uVar13 != 0) goto LAB_00226970;
    uVar14 = 0;
    if (uVar12 >> 0x19 == 6) {
      uVar14 = uVar4 & 1;
    }
    if (uVar14 != 0) goto LAB_00226970;
    if (lVar10 != 7) {
LAB_00226848:
      iVar7 = FUN_0024c300(puVar5);
      iVar8 = FUN_0024c300(puVar6);
      if (1 < *param_1) {
        iVar17 = 1;
        iVar16 = *param_1;
        do {
          iVar16 = iVar16 - iVar17;
          iVar17 = iVar17 + 1;
          iVar16 = *(int *)(iVar16 * 4 + param_1[2]);
          iVar2 = *(int *)(iVar16 + 4);
          (**(code **)(iVar2 + 0x14))(iVar16 + *(short *)(iVar2 + 0x10));
          iVar16 = *param_1;
        } while (iVar17 < 3);
        *param_1 = iVar16 + -2;
      }
      puVar5 = DAT_003bfaec;
      if (DAT_003bfaec == (uint *)0x0) {
        puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar5,7);
        puVar5[2] = iVar7 + iVar8;
        puVar5[1] = (uint)&DAT_003e2230;
      }
      else {
        uVar12 = *DAT_003bfaec;
        puVar6 = (uint *)DAT_003bfaec[2];
        *DAT_003bfaec = uVar12 | 4;
        DAT_003bfaec = puVar6;
        piVar3 = DAT_003be8e0;
        iVar16 = DAT_003be8e0[1];
        if (iVar16 < *DAT_003be8e0) {
          *(uint **)(iVar16 * 4 + DAT_003be8e0[2]) = puVar5;
          piVar3[1] = iVar16 + 1;
        }
        else {
          *puVar5 = uVar12 & 0xfffffffb;
        }
        puVar5[2] = iVar7 + iVar8;
      }
      iVar7 = *param_1;
      iVar8 = param_1[2];
      goto LAB_00226a0c;
    }
    if ((uVar9 & 1) == 1) {
      if ((uVar4 & 1) == 1) goto LAB_00226848;
      iVar7 = *param_1;
    }
    else {
      iVar7 = *param_1;
    }
    if (1 < iVar7) {
      iVar8 = 1;
      iVar7 = *param_1;
      do {
        iVar7 = iVar7 - iVar8;
        iVar8 = iVar8 + 1;
        iVar7 = *(int *)(iVar7 * 4 + param_1[2]);
        iVar16 = *(int *)(iVar7 + 4);
        (**(code **)(iVar16 + 0x14))(iVar7 + *(short *)(iVar16 + 0x10));
        iVar7 = *param_1;
      } while (iVar8 < 3);
      goto LAB_002269fc;
    }
  }
  iVar7 = *param_1;
  iVar8 = param_1[2];
  puVar5 = DAT_0043df40;
LAB_00226a0c:
  *(uint **)(iVar7 * 4 + iVar8) = puVar5;
  *param_1 = iVar7 + 1;
  (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
  return;
}


// ==== FUN_00226bb0 @ 00226bb0 ====

void FUN_00226bb0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  short *apsStack_80 [4];
  char *pcStack_70;
  char *apcStack_6c [3];
  
  puVar14 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar17 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar11 = FUN_0021ada8();
  uVar10 = *puVar17;
  if (lVar11 == 7) {
    if (((int)uVar10 >> 4 & 1U) == 1) {
      if (((int)*puVar14 >> 4 & 1U) == 1) {
        uVar10 = *puVar17;
        goto LAB_00226c90;
      }
      iVar8 = *param_1;
    }
    else {
      iVar8 = *param_1;
    }
    if (iVar8 < 2) goto LAB_00227618;
    iVar19 = 1;
    iVar8 = *param_1;
    do {
      iVar8 = iVar8 - iVar19;
      iVar19 = iVar19 + 1;
      iVar8 = *(int *)(iVar8 * 4 + param_1[2]);
      iVar5 = *(int *)(iVar8 + 4);
      (**(code **)(iVar5 + 0x14))(iVar8 + *(short *)(iVar5 + 0x10));
      iVar8 = *param_1;
    } while (iVar19 < 3);
  }
  else {
LAB_00226c90:
    uVar9 = (int)uVar10 >> 4;
    if ((uVar10 >> 0x19 == 1) || (bVar1 = false, uVar10 >> 0x19 == 0x2a)) {
      bVar1 = (uVar9 & 1) == 1;
    }
    bVar2 = false;
    if (bVar1) {
      uVar15 = *puVar14;
      if ((uVar15 >> 0x19 == 1) || (uVar15 >> 0x19 == 0x2a)) {
        bVar2 = ((int)uVar15 >> 4 & 1U) == 1;
      }
      if (bVar2) {
        if (uVar15 >> 0x19 != 1) {
          puVar14 = (uint *)puVar14[8];
        }
        if (uVar10 >> 0x19 != 1) {
          puVar17 = (uint *)puVar17[8];
        }
        uVar10 = strcmp(puVar14[2] + 8,puVar17[2] + 8);
        uVar10 = uVar10 >> 0x1f;
        goto LAB_002276e0;
      }
    }
    uVar15 = uVar10 >> 0x19;
    uVar16 = 0;
    if (uVar15 == 7) {
      uVar16 = uVar9 & 1;
    }
    bVar1 = false;
    if (uVar16 == 0) {
      uVar16 = 0;
      if (uVar15 == 6) {
        uVar16 = uVar9 & 1;
      }
      bVar1 = false;
      if (uVar16 == 0) {
        bVar1 = false;
        if ((uVar15 == 1) || (uVar15 == 0x2a)) {
          bVar1 = (uVar9 & 1) == 1;
        }
        if (bVar1) {
          apsStack_80[0] = &DAT_003bfaf8;
          DAT_003bfaf8 = DAT_003bfaf8 + 1;
          FUN_0024c6d0(puVar17);
          if (apsStack_80[0][1] == 0) {
            sVar7 = *apsStack_80[0];
            *apsStack_80[0] = sVar7 + -1;
            if ((short)(sVar7 + -1) == 0) {
              Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
              bVar1 = true;
            }
            else {
LAB_00227170:
              bVar1 = true;
            }
          }
          else if (((((char)apsStack_80[0][4] == '0') && (2 < (ushort)apsStack_80[0][1])) &&
                   (*(char *)((int)apsStack_80[0] + 9) == 'x')) &&
                  (strtol(apsStack_80[0] + 4,&pcStack_70,0x10), *pcStack_70 == '\0')) {
            sVar7 = *apsStack_80[0];
            *apsStack_80[0] = sVar7 + -1;
            if ((short)(sVar7 + -1) != 0) goto LAB_00227168;
            Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
            bVar1 = false;
          }
          else {
            bVar1 = false;
            cVar3 = *(char *)((int)apsStack_80[0] + (ushort)apsStack_80[0][1] + 7);
            if (((cVar3 == '-') || (cVar3 == '+')) || ((cVar3 == 'e' || (cVar3 == '.')))) {
              cVar3 = (char)apsStack_80[0][4];
            }
            else {
              if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) == 0) {
                sVar7 = *apsStack_80[0];
                *apsStack_80[0] = sVar7 + -1;
                if ((short)(sVar7 + -1) != 0) goto LAB_00227170;
                Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                bVar1 = true;
                goto LAB_00227174;
              }
              cVar3 = (char)apsStack_80[0][4];
            }
            if (((cVar3 == '.') || (cVar3 == '-')) ||
               ((cVar3 == '+' || ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) != 0)))) {
              iVar8 = 1;
              if (1 < (ushort)apsStack_80[0][1]) {
                pcVar18 = (char *)((int)apsStack_80[0] + 9);
                do {
                  if ((*pcVar18 != '.') || (bVar1)) {
                    if (*(char *)((int)apsStack_80[0] + iVar8 + 8) == 'e') {
                      if (iVar8 != 1) {
                        if (iVar8 != 2) {
                          uVar4 = apsStack_80[0][1];
LAB_00227044:
                          if ((int)(uint)uVar4 <= iVar8 + 1) {
                            uVar10 = (uint)(ushort)apsStack_80[0][1];
                            goto LAB_002270f4;
                          }
                          cVar3 = pcVar18[1];
                          if (((cVar3 == '-') || (cVar3 == '+')) ||
                             ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) != 0)) {
                            pcVar18 = pcVar18 + 1;
                            iVar8 = iVar8 + 1;
                            goto LAB_002270f0;
                          }
                          sVar7 = *apsStack_80[0];
                          *apsStack_80[0] = sVar7 + -1;
                          if ((short)(sVar7 + -1) != 0) goto LAB_00227170;
                          Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                          bVar1 = true;
                          goto LAB_00227174;
                        }
                        if ((char)apsStack_80[0][4] == '+') {
                          sVar7 = *apsStack_80[0];
                        }
                        else {
                          if ((char)apsStack_80[0][4] != '-') {
                            uVar4 = apsStack_80[0][1];
                            goto LAB_00227044;
                          }
                          sVar7 = *apsStack_80[0];
                        }
                        *apsStack_80[0] = sVar7 + -1;
                        if ((short)(sVar7 + -1) != 0) goto LAB_00227170;
                        Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                        bVar1 = true;
                        goto LAB_00227174;
                      }
                      cVar3 = *pcVar18;
                    }
                    else {
                      cVar3 = *pcVar18;
                    }
                    if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) == 0) {
                      sVar7 = *apsStack_80[0];
                      *apsStack_80[0] = sVar7 + -1;
                      if ((short)(sVar7 + -1) != 0) goto LAB_00227170;
                      Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                      bVar1 = true;
                      goto LAB_00227174;
                    }
                    uVar10 = (uint)(ushort)apsStack_80[0][1];
                  }
                  else {
                    bVar1 = true;
LAB_002270f0:
                    uVar10 = (uint)(ushort)apsStack_80[0][1];
                  }
LAB_002270f4:
                  iVar8 = iVar8 + 1;
                  pcVar18 = pcVar18 + 1;
                } while (iVar8 < (int)uVar10);
              }
              sVar7 = *apsStack_80[0];
              *apsStack_80[0] = sVar7 + -1;
              if ((short)(sVar7 + -1) != 0) goto LAB_00227168;
              Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
              bVar1 = false;
            }
            else {
              sVar7 = *apsStack_80[0];
              *apsStack_80[0] = sVar7 + -1;
              if ((short)(sVar7 + -1) != 0) goto LAB_00227170;
              Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
              bVar1 = true;
            }
          }
        }
        else if (((uVar9 & 1) != 1) || (bVar1 = true, uVar10 >> 0x19 == 3)) {
          lVar11 = FUN_0021ada8(0,apsStack_80);
          bVar1 = true;
          if (lVar11 != 7) {
LAB_00227168:
            bVar1 = false;
          }
        }
      }
    }
LAB_00227174:
    if (bVar1) {
      iVar8 = *param_1;
    }
    else {
      uVar10 = *puVar14;
      uVar16 = 0;
      uVar15 = uVar10 >> 0x19;
      uVar9 = (int)uVar10 >> 4;
      if (uVar15 == 7) {
        uVar16 = uVar9 & 1;
      }
      bVar1 = false;
      if (uVar16 == 0) {
        uVar16 = 0;
        if (uVar15 == 6) {
          uVar16 = uVar9 & 1;
        }
        bVar1 = false;
        if (uVar16 == 0) {
          if ((uVar15 == 1) || (bVar1 = false, uVar15 == 0x2a)) {
            bVar1 = (uVar9 & 1) == 1;
          }
          if (bVar1) {
            apsStack_80[0] = &DAT_003bfaf8;
            DAT_003bfaf8 = DAT_003bfaf8 + 1;
            FUN_0024c6d0(puVar14,apsStack_80);
            if (apsStack_80[0][1] == 0) {
              sVar7 = *apsStack_80[0];
              *apsStack_80[0] = sVar7 + -1;
              if ((short)(sVar7 + -1) == 0) {
                Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                bVar1 = true;
              }
              else {
LAB_002275a8:
                bVar1 = true;
              }
            }
            else if (((((char)apsStack_80[0][4] == '0') && (2 < (ushort)apsStack_80[0][1])) &&
                     (*(char *)((int)apsStack_80[0] + 9) == 'x')) &&
                    (strtol(apsStack_80[0] + 4,apcStack_6c,0x10), *apcStack_6c[0] == '\0')) {
              sVar7 = *apsStack_80[0];
              *apsStack_80[0] = sVar7 + -1;
              if ((short)(sVar7 + -1) != 0) goto LAB_002275a0;
              Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
              bVar1 = false;
            }
            else {
              bVar1 = false;
              cVar3 = *(char *)((int)apsStack_80[0] + (ushort)apsStack_80[0][1] + 7);
              if (((cVar3 == '-') || (cVar3 == '+')) || ((cVar3 == 'e' || (cVar3 == '.')))) {
                cVar3 = (char)apsStack_80[0][4];
              }
              else {
                if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) == 0) {
                  sVar7 = *apsStack_80[0];
                  *apsStack_80[0] = sVar7 + -1;
                  if ((short)(sVar7 + -1) != 0) goto LAB_002275a8;
                  Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                  bVar1 = true;
                  goto LAB_002275ac;
                }
                cVar3 = (char)apsStack_80[0][4];
              }
              if (((cVar3 == '.') || (cVar3 == '-')) ||
                 ((cVar3 == '+' || ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) != 0)))) {
                iVar8 = 1;
                if (1 < (ushort)apsStack_80[0][1]) {
                  pcVar18 = (char *)((int)apsStack_80[0] + 9);
                  do {
                    if ((*pcVar18 != '.') || (bVar1)) {
                      if (*(char *)((int)apsStack_80[0] + iVar8 + 8) == 'e') {
                        if (iVar8 != 1) {
                          if (iVar8 != 2) {
                            uVar4 = apsStack_80[0][1];
LAB_0022747c:
                            if ((int)(uint)uVar4 <= iVar8 + 1) {
                              uVar10 = (uint)(ushort)apsStack_80[0][1];
                              goto LAB_0022752c;
                            }
                            cVar3 = pcVar18[1];
                            if (((cVar3 == '-') || (cVar3 == '+')) ||
                               ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) != 0)) {
                              pcVar18 = pcVar18 + 1;
                              iVar8 = iVar8 + 1;
                              goto LAB_00227528;
                            }
                            sVar7 = *apsStack_80[0];
                            *apsStack_80[0] = sVar7 + -1;
                            if ((short)(sVar7 + -1) != 0) goto LAB_002275a8;
                            Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                            bVar1 = true;
                            goto LAB_002275ac;
                          }
                          if ((char)apsStack_80[0][4] == '+') {
                            sVar7 = *apsStack_80[0];
                          }
                          else {
                            if ((char)apsStack_80[0][4] != '-') {
                              uVar4 = apsStack_80[0][1];
                              goto LAB_0022747c;
                            }
                            sVar7 = *apsStack_80[0];
                          }
                          *apsStack_80[0] = sVar7 + -1;
                          if ((short)(sVar7 + -1) != 0) goto LAB_002275a8;
                          Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                          bVar1 = true;
                          goto LAB_002275ac;
                        }
                        cVar3 = *pcVar18;
                      }
                      else {
                        cVar3 = *pcVar18;
                      }
                      if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) == 0) {
                        sVar7 = *apsStack_80[0];
                        *apsStack_80[0] = sVar7 + -1;
                        if ((short)(sVar7 + -1) != 0) goto LAB_002275a8;
                        Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                        bVar1 = true;
                        goto LAB_002275ac;
                      }
                      uVar10 = (uint)(ushort)apsStack_80[0][1];
                    }
                    else {
                      bVar1 = true;
LAB_00227528:
                      uVar10 = (uint)(ushort)apsStack_80[0][1];
                    }
LAB_0022752c:
                    iVar8 = iVar8 + 1;
                    pcVar18 = pcVar18 + 1;
                  } while (iVar8 < (int)uVar10);
                }
                sVar7 = *apsStack_80[0];
                *apsStack_80[0] = sVar7 + -1;
                if ((short)(sVar7 + -1) != 0) goto LAB_002275a0;
                Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                bVar1 = false;
              }
              else {
                sVar7 = *apsStack_80[0];
                *apsStack_80[0] = sVar7 + -1;
                if ((short)(sVar7 + -1) != 0) goto LAB_002275a8;
                Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                bVar1 = true;
              }
            }
          }
          else if (((uVar9 & 1) != 1) || (bVar1 = true, uVar10 >> 0x19 == 3)) {
            lVar11 = FUN_0021ada8();
            bVar1 = true;
            if (lVar11 != 7) {
LAB_002275a0:
              bVar1 = false;
            }
          }
        }
      }
LAB_002275ac:
      if (!bVar1) {
        uVar10 = 0;
        if (*puVar17 >> 0x19 == 6) {
          uVar10 = (int)*puVar17 >> 4 & 1;
        }
        if (uVar10 == 0) {
          uVar10 = 0;
          if (*puVar14 >> 0x19 == 6) {
            uVar10 = (int)*puVar14 >> 4 & 1;
          }
          if (uVar10 == 0) {
            lVar11 = FUN_0024c300(puVar14);
            lVar12 = FUN_0024c300(puVar17);
            uVar10 = (uint)(lVar11 < lVar12);
            goto LAB_002276e0;
          }
        }
        fVar20 = (float)FUN_0024c410(puVar14);
        fVar21 = (float)FUN_0024c410(puVar17);
        uVar10 = 1;
        if (fVar21 <= fVar20) {
          uVar10 = 0;
        }
LAB_002276e0:
        puVar14 = DAT_003bfae4;
        if (DAT_003bfae4 == (uint *)0x0) {
          uVar13 = Pool_Alloc(DAT_0043dee0,0xc);
          puVar14 = (uint *)uVar13;
          FUN_00386ec8(uVar13,5);
          *(bool *)(puVar14 + 2) = uVar10 != 0;
          puVar14[1] = (uint)&DAT_003e2120;
        }
        else {
          uVar9 = *DAT_003bfae4;
          puVar17 = (uint *)DAT_003bfae4[2];
          *DAT_003bfae4 = uVar9 | 4;
          DAT_003bfae4 = puVar17;
          piVar6 = DAT_003be8e0;
          iVar8 = DAT_003be8e0[1];
          if (iVar8 < *DAT_003be8e0) {
            *(uint **)(iVar8 * 4 + DAT_003be8e0[2]) = puVar14;
            piVar6[1] = iVar8 + 1;
          }
          else {
            *puVar14 = uVar9 & 0xfffffffb;
          }
          *(bool *)(puVar14 + 2) = uVar10 != 0;
        }
        if (1 < *param_1) {
          iVar19 = 1;
          iVar8 = *param_1;
          do {
            iVar8 = iVar8 - iVar19;
            iVar19 = iVar19 + 1;
            iVar8 = *(int *)(iVar8 * 4 + param_1[2]);
            iVar5 = *(int *)(iVar8 + 4);
            (**(code **)(iVar5 + 0x14))(iVar8 + *(short *)(iVar5 + 0x10));
            iVar8 = *param_1;
          } while (iVar19 < 3);
          *param_1 = iVar8 + -2;
        }
        iVar8 = *param_1;
        *(uint **)(iVar8 * 4 + param_1[2]) = puVar14;
        *param_1 = iVar8 + 1;
        (**(code **)(puVar14[1] + 0xc))((int)puVar14 + (int)*(short *)(puVar14[1] + 8));
        return;
      }
      iVar8 = *param_1;
    }
    if (iVar8 < 2) goto LAB_00227618;
    iVar19 = 1;
    iVar8 = *param_1;
    do {
      iVar8 = iVar8 - iVar19;
      iVar19 = iVar19 + 1;
      iVar8 = *(int *)(iVar8 * 4 + param_1[2]);
      iVar5 = *(int *)(iVar8 + 4);
      (**(code **)(iVar5 + 0x14))(iVar8 + *(short *)(iVar5 + 0x10));
      iVar8 = *param_1;
    } while (iVar19 < 3);
  }
  *param_1 = iVar8 + -2;
LAB_00227618:
  iVar19 = DAT_0043df40;
  iVar8 = *param_1;
  *(int *)(iVar8 * 4 + param_1[2]) = DAT_0043df40;
  *param_1 = iVar8 + 1;
  iVar8 = *(int *)(iVar19 + 4);
  (**(code **)(iVar8 + 0xc))(iVar19 + *(short *)(iVar8 + 8));
  return;
}


// ==== FUN_00227830 @ 00227830 ====

void FUN_00227830(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  int *piVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  short *apsStack_c0 [4];
  short *apsStack_b0 [4];
  char *pcStack_a0;
  char *apcStack_9c [3];
  
  puVar11 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  puVar16 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  if (*puVar11 >> 0x19 == 0x13) {
    puVar11 = DAT_0043df40;
  }
  if (*puVar16 >> 0x19 == 0x13) {
    puVar16 = DAT_0043df40;
  }
  lVar12 = FUN_0021ada8();
  uVar14 = *puVar11;
  if (lVar12 == 7) {
    uVar14 = (int)uVar14 >> 4 & 1U ^ 1;
    if (((int)*puVar16 >> 4 & 1U) == 0) {
      uVar14 = uVar14 + 1;
    }
    if (uVar14 != 0) {
      if (1 < *param_1) {
        iVar22 = 1;
        iVar10 = *param_1;
        do {
          iVar10 = iVar10 - iVar22;
          iVar22 = iVar22 + 1;
          iVar10 = *(int *)(iVar10 * 4 + param_1[2]);
          iVar5 = *(int *)(iVar10 + 4);
          (**(code **)(iVar5 + 0x14))(iVar10 + *(short *)(iVar5 + 0x10));
          iVar10 = *param_1;
        } while (iVar22 < 3);
        *param_1 = iVar10 + -2;
      }
      puVar11 = DAT_003bfae4;
      if (DAT_003bfae4 == (uint *)0x0) {
        puVar11 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar11,5);
        *(bool *)(puVar11 + 2) = uVar14 == 2;
        puVar11[1] = (uint)&DAT_003e2120;
      }
      else {
        uVar9 = *DAT_003bfae4;
        puVar16 = (uint *)DAT_003bfae4[2];
        *DAT_003bfae4 = uVar9 | 4;
        DAT_003bfae4 = puVar16;
        piVar7 = DAT_003be8e0;
        iVar10 = DAT_003be8e0[1];
        if (iVar10 < *DAT_003be8e0) {
          *(uint **)(iVar10 * 4 + DAT_003be8e0[2]) = puVar11;
          piVar7[1] = iVar10 + 1;
        }
        else {
          *puVar11 = uVar9 & 0xfffffffb;
        }
        *(bool *)(puVar11 + 2) = uVar14 == 2;
      }
      iVar10 = *param_1;
      *(uint **)(iVar10 * 4 + param_1[2]) = puVar11;
      *param_1 = iVar10 + 1;
      (**(code **)(puVar11[1] + 0xc))((int)puVar11 + (int)*(short *)(puVar11[1] + 8));
      return;
    }
    uVar14 = *puVar11;
  }
  bVar6 = false;
  uVar18 = 0;
  uVar15 = uVar14 >> 0x19;
  uVar9 = (int)uVar14 >> 4;
  if (uVar15 == 7) {
    uVar18 = uVar9 & 1;
  }
  if (uVar18 == 0) {
    uVar18 = 0;
    if (uVar15 == 6) {
      uVar18 = uVar9 & 1;
    }
    if (uVar18 != 0) {
      uVar15 = *puVar16;
      goto LAB_00227acc;
    }
    uVar18 = 0;
    if (uVar15 == 5) {
      uVar18 = uVar9 & 1;
    }
    if (uVar18 != 0) {
      uVar15 = *puVar16;
      goto LAB_00227acc;
    }
    if ((uVar15 == 1) || (bVar1 = false, uVar15 == 0x2a)) {
      bVar1 = (uVar9 & 1) == 1;
    }
    uVar15 = *puVar16;
    if (bVar1) {
      uVar15 = *puVar16;
      goto LAB_00227acc;
    }
LAB_00227b6c:
    if (uVar14 >> 0x19 == uVar15 >> 0x19) goto LAB_00227b7c;
    if (((uVar9 & 1) != 1) && (((int)uVar15 >> 4 & 1U) == 0)) {
      bVar6 = true;
    }
  }
  else {
    uVar15 = *puVar16;
LAB_00227acc:
    uVar21 = 0;
    uVar19 = uVar15 >> 0x19;
    uVar18 = (int)uVar15 >> 4;
    if (uVar19 == 7) {
      uVar21 = uVar18 & 1;
    }
    if (uVar21 == 0) {
      uVar21 = 0;
      if (uVar19 == 6) {
        uVar21 = uVar18 & 1;
      }
      if (uVar21 == 0) {
        uVar21 = 0;
        if (uVar19 == 5) {
          uVar21 = uVar18 & 1;
        }
        if (uVar21 == 0) {
          if ((uVar19 == 1) || (bVar1 = false, uVar19 == 0x2a)) {
            bVar1 = (uVar18 & 1) == 1;
          }
          if (!bVar1) goto LAB_00227b6c;
        }
      }
    }
LAB_00227b7c:
    if ((uVar9 & 1) == 1) {
      uVar18 = (int)uVar15 >> 4;
      if (uVar14 >> 0x19 == 7) {
        uVar19 = 0;
        if (uVar15 >> 0x19 == 7) {
          uVar19 = uVar18 & 1;
        }
        if (uVar19 == 0) goto LAB_00227bdc;
LAB_00228a20:
        lVar12 = FUN_0024c300(puVar11);
        lVar13 = FUN_0024c300(puVar16);
        bVar6 = lVar12 == lVar13;
      }
      else {
LAB_00227bdc:
        uVar19 = 0;
        if (uVar14 >> 0x19 == 6) {
          uVar19 = uVar9 & 1;
        }
        if (uVar19 == 0) {
LAB_00227c48:
          if ((uVar14 >> 0x19 == 1) || (bVar6 = false, uVar14 >> 0x19 == 0x2a)) {
            bVar6 = (uVar9 & 1) == 1;
          }
          if (bVar6) {
            if ((uVar15 >> 0x19 == 1) || (bVar6 = false, uVar15 >> 0x19 == 0x2a)) {
              bVar6 = (uVar18 & 1) == 1;
            }
            if (bVar6) {
              if (uVar15 >> 0x19 != 1) {
                puVar16 = (uint *)puVar16[8];
              }
              if (uVar14 >> 0x19 != 1) {
                puVar11 = (uint *)puVar11[8];
              }
              uVar14 = puVar16[2];
              uVar9 = puVar11[2];
              bVar6 = false;
              if (*(short *)(uVar14 + 2) == *(short *)(uVar9 + 2)) {
                if (uVar14 != uVar9) {
                  lVar12 = FUN_0035c4b0(uVar14 + 8,uVar9 + 8);
                  bVar6 = false;
                  if (lVar12 != 0) goto LAB_00228a6c;
                }
                bVar6 = true;
              }
              goto LAB_00228a6c;
            }
          }
          uVar19 = 0;
          if (uVar14 >> 0x19 == 7) {
            uVar19 = uVar9 & 1;
          }
          if (uVar19 == 0) {
            uVar19 = 0;
            if (uVar14 >> 0x19 == 6) {
              uVar19 = uVar9 & 1;
            }
            if (uVar19 != 0) goto LAB_00227d64;
LAB_0022816c:
            uVar15 = *puVar16 >> 0x19;
            uVar18 = 0;
            uVar9 = (int)*puVar16 >> 4;
            if (uVar15 == 7) {
              uVar18 = uVar9 & 1;
            }
            if (uVar18 == 0) {
              uVar18 = 0;
              if (uVar15 == 6) {
                uVar18 = uVar9 & 1;
              }
              if (uVar18 != 0) goto LAB_002281b4;
            }
            else {
LAB_002281b4:
              uVar15 = uVar14 >> 0x19;
              uVar18 = 0;
              uVar9 = (int)uVar14 >> 4;
              if (uVar15 == 7) {
                uVar18 = uVar9 & 1;
              }
              bVar6 = false;
              if (uVar18 == 0) {
                uVar18 = 0;
                if (uVar15 == 6) {
                  uVar18 = uVar9 & 1;
                }
                bVar6 = false;
                if (uVar18 == 0) {
                  bVar6 = false;
                  if ((uVar15 == 1) || (uVar15 == 0x2a)) {
                    bVar6 = (uVar9 & 1) == 1;
                  }
                  if (bVar6) {
                    apsStack_c0[0] = &DAT_003bfaf8;
                    DAT_003bfaf8 = DAT_003bfaf8 + 1;
                    FUN_0024c6d0(puVar11,apsStack_c0);
                    if (apsStack_c0[0][1] == 0) {
                      sVar8 = *apsStack_c0[0];
                      *apsStack_c0[0] = sVar8 + -1;
                      if ((short)(sVar8 + -1) == 0) {
                        Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                      }
LAB_002285cc:
                      bVar6 = true;
                      uVar14 = *puVar11;
                    }
                    else {
                      if (((((char)apsStack_c0[0][4] == '0') && (2 < (ushort)apsStack_c0[0][1])) &&
                          (*(char *)((int)apsStack_c0[0] + 9) == 'x')) &&
                         (strtol(apsStack_c0[0] + 4,apcStack_9c,0x10), *apcStack_9c[0] == '\0')) {
                        sVar8 = *apsStack_c0[0];
                        *apsStack_c0[0] = sVar8 + -1;
                        if ((short)(sVar8 + -1) == 0) {
                          Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                        }
                      }
                      else {
                        bVar6 = false;
                        cVar3 = *(char *)((int)apsStack_c0[0] + (ushort)apsStack_c0[0][1] + 7);
                        if (((cVar3 == '-') || (cVar3 == '+')) || ((cVar3 == 'e' || (cVar3 == '.')))
                           ) {
                          cVar3 = (char)apsStack_c0[0][4];
                        }
                        else {
                          if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) == 0) {
                            sVar8 = *apsStack_c0[0];
                            *apsStack_c0[0] = sVar8 + -1;
                            if ((short)(sVar8 + -1) == 0) {
                              Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                            }
                            goto LAB_002285cc;
                          }
                          cVar3 = (char)apsStack_c0[0][4];
                        }
                        if (((cVar3 != '.') && (cVar3 != '-')) &&
                           ((cVar3 != '+' &&
                            ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) == 0)))) {
                          sVar8 = *apsStack_c0[0];
                          *apsStack_c0[0] = sVar8 + -1;
                          if ((short)(sVar8 + -1) == 0) {
                            Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                          }
                          goto LAB_002285cc;
                        }
                        iVar10 = 1;
                        if (1 < (ushort)apsStack_c0[0][1]) {
                          pcVar20 = (char *)((int)apsStack_c0[0] + 9);
                          do {
                            if ((*pcVar20 != '.') || (bVar6)) {
                              if (*(char *)((int)apsStack_c0[0] + iVar10 + 8) == 'e') {
                                if (iVar10 != 1) {
                                  if (iVar10 == 2) {
                                    if ((char)apsStack_c0[0][4] == '+') {
                                      sVar8 = *apsStack_c0[0];
                                    }
                                    else {
                                      if ((char)apsStack_c0[0][4] != '-') {
                                        uVar4 = apsStack_c0[0][1];
                                        goto LAB_002284a4;
                                      }
                                      sVar8 = *apsStack_c0[0];
                                    }
                                    *apsStack_c0[0] = sVar8 + -1;
                                    if ((short)(sVar8 + -1) == 0) {
                                      Pool_Free(DAT_0043dee0,apsStack_c0[0],
                                                (ushort)apsStack_c0[0][2] + 9);
                                    }
                                  }
                                  else {
                                    uVar4 = apsStack_c0[0][1];
LAB_002284a4:
                                    if ((int)(uint)uVar4 <= iVar10 + 1) {
                                      uVar14 = (uint)(ushort)apsStack_c0[0][1];
                                      goto LAB_00228554;
                                    }
                                    cVar3 = pcVar20[1];
                                    if (((cVar3 == '-') || (cVar3 == '+')) ||
                                       ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) != 0))
                                    {
                                      pcVar20 = pcVar20 + 1;
                                      iVar10 = iVar10 + 1;
                                      goto LAB_00228550;
                                    }
                                    sVar8 = *apsStack_c0[0];
                                    *apsStack_c0[0] = sVar8 + -1;
                                    if ((short)(sVar8 + -1) == 0) {
                                      Pool_Free(DAT_0043dee0,apsStack_c0[0],
                                                (ushort)apsStack_c0[0][2] + 9);
                                    }
                                  }
                                  goto LAB_002285cc;
                                }
                                cVar3 = *pcVar20;
                              }
                              else {
                                cVar3 = *pcVar20;
                              }
                              if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) == 0) {
                                sVar8 = *apsStack_c0[0];
                                *apsStack_c0[0] = sVar8 + -1;
                                if ((short)(sVar8 + -1) == 0) {
                                  Pool_Free(DAT_0043dee0,apsStack_c0[0],
                                            (ushort)apsStack_c0[0][2] + 9);
                                }
                                goto LAB_002285cc;
                              }
                              uVar14 = (uint)(ushort)apsStack_c0[0][1];
                            }
                            else {
                              bVar6 = true;
LAB_00228550:
                              uVar14 = (uint)(ushort)apsStack_c0[0][1];
                            }
LAB_00228554:
                            iVar10 = iVar10 + 1;
                            pcVar20 = pcVar20 + 1;
                          } while (iVar10 < (int)uVar14);
                        }
                        sVar8 = *apsStack_c0[0];
                        *apsStack_c0[0] = sVar8 + -1;
                        if ((short)(sVar8 + -1) == 0) {
                          Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                        }
                      }
LAB_002285d8:
                      bVar6 = false;
                      uVar14 = *puVar11;
                    }
                  }
                  else if (((uVar9 & 1) != 1) || (bVar6 = true, uVar14 >> 0x19 == 3)) {
                    lVar12 = FUN_0021ada8();
                    if (lVar12 != 7) goto LAB_002285d8;
                    goto LAB_002285cc;
                  }
                }
              }
              if (!bVar6) goto LAB_002285ec;
            }
            if ((uVar14 >> 0x19 == 1) || (bVar6 = false, uVar14 >> 0x19 == 0x2a)) {
              bVar6 = ((int)uVar14 >> 4 & 1U) == 1;
            }
            if (bVar6) {
              uVar9 = 0;
              if (*puVar16 >> 0x19 == 5) {
                uVar9 = (int)*puVar16 >> 4 & 1;
              }
              if (uVar9 == 0) {
                apsStack_b0[0] = &DAT_003bfaf8;
                DAT_003bfaf8 = DAT_003bfaf8 + 2;
                apsStack_c0[0] = &DAT_003bfaf8;
                FUN_0024c6d0(puVar11,apsStack_c0);
                FUN_0024c6d0(puVar16,apsStack_b0);
                bVar6 = false;
                if (apsStack_c0[0][1] == apsStack_b0[0][1]) {
                  if (apsStack_c0[0] != apsStack_b0[0]) {
                    lVar12 = FUN_0035c4b0(apsStack_c0[0] + 4,apsStack_b0[0] + 4);
                    bVar6 = false;
                    if (lVar12 != 0) goto LAB_0022895c;
                  }
                  bVar6 = true;
                }
LAB_0022895c:
                sVar8 = *apsStack_b0[0];
                *apsStack_b0[0] = sVar8 + -1;
                if ((short)(sVar8 + -1) == 0) {
                  Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
                }
                sVar8 = *apsStack_c0[0];
                *apsStack_c0[0] = sVar8 + -1;
                if ((short)(sVar8 + -1) == 0) {
                  Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                  iVar10 = *param_1;
                  goto LAB_00228a70;
                }
                goto LAB_00228a6c;
              }
            }
            uVar9 = 0;
            if (uVar14 >> 0x19 == 5) {
              uVar9 = (int)uVar14 >> 4 & 1;
            }
            if (uVar9 != 0) {
              uVar14 = *puVar16 >> 0x19;
              bVar6 = false;
              if ((uVar14 == 1) || (uVar14 == 0x2a)) {
                bVar6 = ((int)*puVar16 >> 4 & 1U) == 1;
              }
              if (!bVar6) goto LAB_00228a20;
            }
            bVar6 = puVar11 == puVar16;
            goto LAB_00228a6c;
          }
LAB_00227d64:
          uVar15 = uVar15 >> 0x19;
          uVar9 = 0;
          if (uVar15 == 7) {
            uVar9 = uVar18 & 1;
          }
          bVar6 = false;
          if (uVar9 == 0) {
            uVar9 = 0;
            if (uVar15 == 6) {
              uVar9 = uVar18 & 1;
            }
            bVar6 = false;
            if (uVar9 == 0) {
              if ((uVar15 == 1) || (bVar6 = false, uVar15 == 0x2a)) {
                bVar6 = (uVar18 & 1) == 1;
              }
              if (bVar6) {
                apsStack_c0[0] = &DAT_003bfaf8;
                DAT_003bfaf8 = DAT_003bfaf8 + 1;
                FUN_0024c6d0(puVar16,apsStack_c0);
                if (apsStack_c0[0][1] == 0) {
                  sVar8 = *apsStack_c0[0];
                  *apsStack_c0[0] = sVar8 + -1;
                  if ((short)(sVar8 + -1) == 0) {
                    Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                  }
                  bVar6 = true;
                  uVar14 = *puVar11;
                }
                else if (((((char)apsStack_c0[0][4] == '0') && (2 < (ushort)apsStack_c0[0][1])) &&
                         (*(char *)((int)apsStack_c0[0] + 9) == 'x')) &&
                        (strtol(apsStack_c0[0] + 4,&pcStack_a0,0x10), *pcStack_a0 == '\0')) {
                  sVar8 = *apsStack_c0[0];
                  *apsStack_c0[0] = sVar8 + -1;
                  if ((short)(sVar8 + -1) == 0) {
                    Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                  }
                  bVar6 = false;
                  uVar14 = *puVar11;
                }
                else {
                  bVar6 = false;
                  cVar3 = *(char *)((int)apsStack_c0[0] + (ushort)apsStack_c0[0][1] + 7);
                  if (((cVar3 == '-') || (cVar3 == '+')) || ((cVar3 == 'e' || (cVar3 == '.')))) {
                    cVar3 = (char)apsStack_c0[0][4];
                  }
                  else {
                    if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) == 0) {
                      sVar8 = *apsStack_c0[0];
                      *apsStack_c0[0] = sVar8 + -1;
                      if ((short)(sVar8 + -1) == 0) {
                        Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                      }
                      bVar6 = true;
                      uVar14 = *puVar11;
                      goto LAB_00228160;
                    }
                    cVar3 = (char)apsStack_c0[0][4];
                  }
                  if (((cVar3 == '.') || (cVar3 == '-')) ||
                     ((cVar3 == '+' || ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) != 0)))
                     ) {
                    iVar10 = 1;
                    if (1 < (ushort)apsStack_c0[0][1]) {
                      pcVar20 = (char *)((int)apsStack_c0[0] + 9);
                      do {
                        if ((*pcVar20 != '.') || (bVar6)) {
                          if (*(char *)((int)apsStack_c0[0] + iVar10 + 8) == 'e') {
                            if (iVar10 == 1) {
                              cVar3 = *pcVar20;
                              goto LAB_00228088;
                            }
                            if (iVar10 == 2) {
                              if ((char)apsStack_c0[0][4] == '+') {
                                sVar8 = *apsStack_c0[0];
                              }
                              else {
                                if ((char)apsStack_c0[0][4] != '-') {
                                  uVar4 = apsStack_c0[0][1];
                                  goto LAB_00228044;
                                }
                                sVar8 = *apsStack_c0[0];
                              }
                            }
                            else {
                              uVar4 = apsStack_c0[0][1];
LAB_00228044:
                              if ((int)(uint)uVar4 <= iVar10 + 1) {
                                uVar14 = (uint)(ushort)apsStack_c0[0][1];
                                goto LAB_002280d0;
                              }
                              cVar3 = pcVar20[1];
                              if (((cVar3 == '-') || (cVar3 == '+')) ||
                                 ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) != 0)) {
                                pcVar20 = pcVar20 + 1;
                                iVar10 = iVar10 + 1;
                                goto LAB_002280cc;
                              }
                              sVar8 = *apsStack_c0[0];
                            }
                          }
                          else {
                            cVar3 = *pcVar20;
LAB_00228088:
                            if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar3) & 4) != 0) {
                              uVar14 = (uint)(ushort)apsStack_c0[0][1];
                              goto LAB_002280d0;
                            }
                            sVar8 = *apsStack_c0[0];
                          }
                          *apsStack_c0[0] = sVar8 + -1;
                          if ((short)(sVar8 + -1) == 0) {
                            Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                          }
                          bVar6 = true;
                          uVar14 = *puVar11;
                          goto LAB_00228160;
                        }
                        bVar6 = true;
LAB_002280cc:
                        uVar14 = (uint)(ushort)apsStack_c0[0][1];
LAB_002280d0:
                        iVar10 = iVar10 + 1;
                        pcVar20 = pcVar20 + 1;
                      } while (iVar10 < (int)uVar14);
                    }
                    sVar8 = *apsStack_c0[0];
                    *apsStack_c0[0] = sVar8 + -1;
                    if ((short)(sVar8 + -1) == 0) {
                      Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                    }
                    bVar6 = false;
                    uVar14 = *puVar11;
                  }
                  else {
                    sVar8 = *apsStack_c0[0];
                    *apsStack_c0[0] = sVar8 + -1;
                    if ((short)(sVar8 + -1) == 0) {
                      Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
                    }
                    bVar6 = true;
                    uVar14 = *puVar11;
                  }
                }
              }
              else if ((((int)*puVar16 >> 4 & 1U) != 1) || (bVar6 = true, *puVar16 >> 0x19 == 3)) {
                lVar12 = FUN_0021ada8();
                bVar6 = false;
                if (lVar12 == 7) {
                  bVar6 = true;
                  uVar14 = *puVar11;
                }
                else {
                  uVar14 = *puVar11;
                }
              }
            }
          }
LAB_00228160:
          if (bVar6) goto LAB_0022816c;
LAB_002285ec:
          bVar1 = false;
          bVar6 = false;
          if ((uVar14 >> 0x19 == 1) || (bVar2 = false, uVar14 >> 0x19 == 0x2a)) {
            bVar2 = ((int)uVar14 >> 4 & 1U) == 1;
          }
          if (bVar2) {
            uVar14 = *puVar11;
LAB_00228654:
            uVar9 = 0;
            if (uVar14 >> 0x19 == 6) {
              uVar9 = (int)uVar14 >> 4 & 1;
            }
            if (uVar9 == 0) {
              puVar17 = puVar11;
              if (uVar14 >> 0x19 != 1) {
                puVar17 = (uint *)puVar11[8];
              }
              lVar12 = FUN_00253358(puVar17 + 2,0x2e,0);
              if (lVar12 == -1) {
                uVar14 = *puVar16;
                goto LAB_002286ac;
              }
            }
            bVar1 = true;
            uVar14 = *puVar16;
          }
          else {
            uVar9 = 0;
            if (uVar14 >> 0x19 == 6) {
              uVar9 = (int)uVar14 >> 4 & 1;
            }
            if (uVar9 != 0) {
              uVar14 = *puVar11;
              goto LAB_00228654;
            }
            uVar14 = *puVar16;
          }
LAB_002286ac:
          uVar9 = (int)uVar14 >> 4;
          if ((uVar14 >> 0x19 == 1) || (bVar2 = false, uVar14 >> 0x19 == 0x2a)) {
            bVar2 = (uVar9 & 1) == 1;
          }
          if (bVar2) {
LAB_0022870c:
            uVar15 = 0;
            if (uVar14 >> 0x19 == 6) {
              uVar15 = uVar9 & 1;
            }
            if (uVar15 != 0) {
              bVar6 = true;
              goto LAB_0022875c;
            }
            puVar17 = puVar16;
            if (uVar14 >> 0x19 != 1) {
              puVar17 = (uint *)puVar16[8];
            }
            lVar12 = FUN_00253358(puVar17 + 2,0x2e,0);
            if (lVar12 != -1) {
              bVar6 = true;
              goto LAB_0022875c;
            }
            uVar14 = *puVar11;
          }
          else {
            uVar15 = 0;
            if (uVar14 >> 0x19 == 6) {
              uVar15 = uVar9 & 1;
            }
            if (uVar15 != 0) goto LAB_0022870c;
LAB_0022875c:
            uVar14 = *puVar11;
          }
          uVar9 = 0;
          if (uVar14 >> 0x19 == 7) {
            uVar9 = (int)uVar14 >> 4 & 1;
          }
          if (uVar9 == 0) {
            uVar14 = 0;
            if (*puVar16 >> 0x19 == 7) {
              uVar14 = (int)*puVar16 >> 4 & 1;
            }
            if (uVar14 == 0) {
              fVar23 = (float)FUN_0024c410(puVar11);
              fVar24 = (float)FUN_0024c410(puVar16);
              bVar1 = ABS(fVar23 - fVar24) < 0.001;
            }
            else {
              lVar12 = FUN_0024c300(puVar16);
              if (!bVar1) goto LAB_00228840;
              fVar23 = (float)FUN_0024c410(puVar11);
              bVar1 = ABS(fVar23 - (float)(int)lVar12) < 0.001;
            }
          }
          else {
            lVar12 = FUN_0024c300(puVar11);
            puVar11 = puVar16;
            if (!bVar6) {
LAB_00228840:
              lVar13 = FUN_0024c300(puVar11);
              bVar6 = lVar13 == lVar12;
              goto LAB_00228a6c;
            }
            fVar23 = (float)FUN_0024c410(puVar16);
            bVar1 = ABS((float)(int)lVar12 - fVar23) < 0.001;
          }
        }
        else {
          uVar19 = 0;
          if (uVar15 >> 0x19 == 6) {
            uVar19 = uVar18 & 1;
          }
          if (uVar19 == 0) goto LAB_00227c48;
          fVar23 = (float)FUN_0024c410(puVar11);
          fVar24 = (float)FUN_0024c410(puVar16);
          bVar1 = fVar23 == fVar24;
        }
        bVar6 = true;
        if (bVar1) {
          iVar10 = *param_1;
          goto LAB_00228a70;
        }
        bVar6 = false;
      }
    }
    else {
      bVar6 = true;
    }
  }
LAB_00228a6c:
  iVar10 = *param_1;
LAB_00228a70:
  if (1 < iVar10) {
    iVar22 = 1;
    iVar10 = *param_1;
    do {
      iVar10 = iVar10 - iVar22;
      iVar22 = iVar22 + 1;
      iVar10 = *(int *)(iVar10 * 4 + param_1[2]);
      iVar5 = *(int *)(iVar10 + 4);
      (**(code **)(iVar5 + 0x14))(iVar10 + *(short *)(iVar5 + 0x10));
      iVar10 = *param_1;
    } while (iVar22 < 3);
    *param_1 = iVar10 + -2;
  }
  puVar11 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    puVar11 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar11,5);
    *(bool *)(puVar11 + 2) = bVar6;
    puVar11[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar14 = *DAT_003bfae4;
    puVar16 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar14 | 4;
    DAT_003bfae4 = puVar16;
    piVar7 = DAT_003be8e0;
    iVar10 = DAT_003be8e0[1];
    if (iVar10 < *DAT_003be8e0) {
      *(uint **)(iVar10 * 4 + DAT_003be8e0[2]) = puVar11;
      piVar7[1] = iVar10 + 1;
    }
    else {
      *puVar11 = uVar14 & 0xfffffffb;
    }
    *(bool *)(puVar11 + 2) = bVar6;
  }
  iVar10 = *param_1;
  *(uint **)(iVar10 * 4 + param_1[2]) = puVar11;
  *param_1 = iVar10 + 1;
  (**(code **)(puVar11[1] + 0xc))((int)puVar11 + (int)*(short *)(puVar11[1] + 8));
  return;
}


// ==== FUN_00228bc8 @ 00228bc8 ====

void FUN_00228bc8(int *param_1)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  short *apsStack_80 [4];
  char *apcStack_70 [4];
  
  puVar16 = DAT_0043df40;
  puVar4 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  uVar11 = *puVar4 >> 0x19;
  uVar13 = 0;
  uVar17 = (int)*puVar4 >> 4;
  if (uVar11 == 6) {
    uVar13 = uVar17 & 1;
  }
  if (uVar13 != 0) {
    return;
  }
  uVar13 = 0;
  if (uVar11 == 7) {
    uVar13 = uVar17 & 1;
  }
  if (uVar13 != 0) {
    return;
  }
  uVar13 = 0;
  if (uVar11 == 7) {
    uVar13 = uVar17 & 1;
  }
  bVar1 = false;
  if (uVar13 == 0) {
    uVar13 = 0;
    if (uVar11 == 6) {
      uVar13 = uVar17 & 1;
    }
    bVar1 = false;
    if (uVar13 == 0) {
      bVar1 = false;
      if ((uVar11 == 1) || (uVar11 == 0x2a)) {
        bVar1 = (uVar17 & 1) == 1;
      }
      if (bVar1) {
        apsStack_80[0] = &DAT_003bfaf8;
        DAT_003bfaf8 = DAT_003bfaf8 + 1;
        FUN_0024c6d0(puVar4,apsStack_80);
        if (apsStack_80[0][1] == 0) {
          sVar7 = *apsStack_80[0];
          *apsStack_80[0] = sVar7 + -1;
          if ((short)(sVar7 + -1) == 0) {
            Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
            bVar1 = true;
          }
          else {
LAB_00229064:
            bVar1 = true;
          }
        }
        else if (((((char)apsStack_80[0][4] == '0') && (2 < (ushort)apsStack_80[0][1])) &&
                 (*(char *)((int)apsStack_80[0] + 9) == 'x')) &&
                (strtol(apsStack_80[0] + 4,apcStack_70,0x10), *apcStack_70[0] == '\0')) {
          sVar7 = *apsStack_80[0];
          *apsStack_80[0] = sVar7 + -1;
          if ((short)(sVar7 + -1) != 0) goto LAB_0022905c;
          Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
          bVar1 = false;
        }
        else {
          bVar1 = false;
          cVar2 = *(char *)((int)apsStack_80[0] + (ushort)apsStack_80[0][1] + 7);
          if (((cVar2 == '-') || (cVar2 == '+')) || ((cVar2 == 'e' || (cVar2 == '.')))) {
            cVar2 = (char)apsStack_80[0][4];
          }
          else {
            if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar2) & 4) == 0) {
              sVar7 = *apsStack_80[0];
              *apsStack_80[0] = sVar7 + -1;
              if ((short)(sVar7 + -1) != 0) goto LAB_00229064;
              Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
              bVar1 = true;
              goto LAB_00229068;
            }
            cVar2 = (char)apsStack_80[0][4];
          }
          if (((cVar2 == '.') || (cVar2 == '-')) ||
             ((cVar2 == '+' || ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar2) & 4) != 0)))) {
            iVar15 = 1;
            if (1 < (ushort)apsStack_80[0][1]) {
              pcVar14 = (char *)((int)apsStack_80[0] + 9);
              do {
                if ((*pcVar14 != '.') || (bVar1)) {
                  if (*(char *)((int)apsStack_80[0] + iVar15 + 8) == 'e') {
                    if (iVar15 != 1) {
                      if (iVar15 != 2) {
                        uVar3 = apsStack_80[0][1];
LAB_00228f34:
                        if ((int)(uint)uVar3 <= iVar15 + 1) {
                          uVar17 = (uint)(ushort)apsStack_80[0][1];
                          goto LAB_00228fe4;
                        }
                        cVar2 = pcVar14[1];
                        if (((cVar2 == '-') || (cVar2 == '+')) ||
                           ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar2) & 4) != 0)) {
                          pcVar14 = pcVar14 + 1;
                          iVar15 = iVar15 + 1;
                          goto LAB_00228fe0;
                        }
                        sVar7 = *apsStack_80[0];
                        *apsStack_80[0] = sVar7 + -1;
                        if ((short)(sVar7 + -1) != 0) goto LAB_00229064;
                        Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                        bVar1 = true;
                        goto LAB_00229068;
                      }
                      if ((char)apsStack_80[0][4] == '+') {
                        sVar7 = *apsStack_80[0];
                      }
                      else {
                        if ((char)apsStack_80[0][4] != '-') {
                          uVar3 = apsStack_80[0][1];
                          goto LAB_00228f34;
                        }
                        sVar7 = *apsStack_80[0];
                      }
                      *apsStack_80[0] = sVar7 + -1;
                      if ((short)(sVar7 + -1) != 0) goto LAB_00229064;
                      Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                      bVar1 = true;
                      goto LAB_00229068;
                    }
                    cVar2 = *pcVar14;
                  }
                  else {
                    cVar2 = *pcVar14;
                  }
                  if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar2) & 4) == 0) {
                    sVar7 = *apsStack_80[0];
                    *apsStack_80[0] = sVar7 + -1;
                    if ((short)(sVar7 + -1) != 0) goto LAB_00229064;
                    Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
                    bVar1 = true;
                    goto LAB_00229068;
                  }
                  uVar17 = (uint)(ushort)apsStack_80[0][1];
                }
                else {
                  bVar1 = true;
LAB_00228fe0:
                  uVar17 = (uint)(ushort)apsStack_80[0][1];
                }
LAB_00228fe4:
                iVar15 = iVar15 + 1;
                pcVar14 = pcVar14 + 1;
              } while (iVar15 < (int)uVar17);
            }
            sVar7 = *apsStack_80[0];
            *apsStack_80[0] = sVar7 + -1;
            if ((short)(sVar7 + -1) != 0) goto LAB_0022905c;
            Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
            bVar1 = false;
          }
          else {
            sVar7 = *apsStack_80[0];
            *apsStack_80[0] = sVar7 + -1;
            if ((short)(sVar7 + -1) != 0) goto LAB_00229064;
            Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
            bVar1 = true;
          }
        }
      }
      else if ((((int)*puVar4 >> 4 & 1U) != 1) || (bVar1 = true, *puVar4 >> 0x19 == 3)) {
        lVar8 = FUN_0021ada8();
        bVar1 = true;
        if (lVar8 != 7) {
LAB_0022905c:
          bVar1 = false;
        }
      }
    }
  }
LAB_00229068:
  if (bVar1) {
    iVar15 = *param_1;
    goto LAB_002292e8;
  }
  lVar8 = FUN_0021ada8();
  if ((lVar8 == 7) && (((int)*puVar4 >> 4 & 1U) != 1)) {
    if (0 < *param_1) {
      iVar15 = *(int *)(*param_1 * 4 + param_1[2] + -4);
      iVar5 = *(int *)(iVar15 + 4);
      (**(code **)(iVar5 + 0x14))(iVar15 + *(short *)(iVar5 + 0x10));
      *param_1 = *param_1 + -1;
    }
    iVar15 = *param_1;
    *(uint **)(iVar15 * 4 + param_1[2]) = puVar16;
    *param_1 = iVar15 + 1;
    (**(code **)(puVar16[1] + 0xc))((int)puVar16 + (int)*(short *)(puVar16[1] + 8));
    return;
  }
  apsStack_80[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  FUN_0024c6d0(puVar4,apsStack_80);
  uVar9 = FUN_00253d30(apsStack_80,0x40de20,0);
  if ((uVar9 == 0xffffffffffffffff) || (uVar9 == (ushort)apsStack_80[0][1])) {
    uVar17 = FUN_0024c300(puVar4);
    puVar16 = DAT_003bfaec;
    if (DAT_003bfaec == (uint *)0x0) {
      uVar10 = Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(uVar10,7);
      *(uint *)((int)uVar10 + 8) = uVar17;
      puVar12 = &DAT_003e2230;
      goto LAB_002292b4;
    }
    uVar11 = *DAT_003bfaec;
    puVar4 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar11 | 4;
    DAT_003bfaec = puVar4;
    piVar6 = DAT_003be8e0;
    iVar15 = DAT_003be8e0[1];
    if (iVar15 < *DAT_003be8e0) {
      *(uint **)(iVar15 * 4 + DAT_003be8e0[2]) = puVar16;
      piVar6[1] = iVar15 + 1;
    }
    else {
      *puVar16 = uVar11 & 0xfffffffb;
    }
    puVar16[2] = uVar17;
  }
  else {
    uVar17 = FUN_0024c410(puVar4);
    puVar16 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      uVar10 = Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(uVar10,6);
      *(uint *)((int)uVar10 + 8) = uVar17;
      puVar12 = &DAT_003e2098;
LAB_002292b4:
      puVar16 = (uint *)uVar10;
      puVar16[1] = (uint)puVar12;
    }
    else {
      uVar11 = *DAT_003bfae8;
      puVar4 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar11 | 4;
      DAT_003bfae8 = puVar4;
      piVar6 = DAT_003be8e0;
      iVar15 = DAT_003be8e0[1];
      if (iVar15 < *DAT_003be8e0) {
        *(uint **)(iVar15 * 4 + DAT_003be8e0[2]) = puVar16;
        piVar6[1] = iVar15 + 1;
      }
      else {
        *puVar16 = uVar11 & 0xfffffffb;
      }
      puVar16[2] = uVar17;
    }
  }
  sVar7 = *apsStack_80[0];
  *apsStack_80[0] = sVar7 + -1;
  if ((short)(sVar7 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
  }
  iVar15 = *param_1;
LAB_002292e8:
  if (0 < iVar15) {
    iVar15 = *(int *)(iVar15 * 4 + param_1[2] + -4);
    iVar5 = *(int *)(iVar15 + 4);
    (**(code **)(iVar5 + 0x14))(iVar15 + *(short *)(iVar5 + 0x10));
    *param_1 = *param_1 + -1;
  }
  iVar15 = *param_1;
  *(uint **)(iVar15 * 4 + param_1[2]) = puVar16;
  *param_1 = iVar15 + 1;
  (**(code **)(puVar16[1] + 0xc))((int)puVar16 + (int)*(short *)(puVar16[1] + 8));
  return;
}


// ==== FUN_00229370 @ 00229370 ====

void FUN_00229370(int *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  short *apsStack_50 [4];
  
  puVar8 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  uVar11 = *puVar8 >> 0x19;
  bVar1 = false;
  if ((uVar11 == 1) || (uVar11 == 0x2a)) {
    bVar1 = ((int)*puVar8 >> 4 & 1U) == 1;
  }
  if (!bVar1) {
    lVar9 = FUN_0021ada8();
    puVar7 = DAT_003bfb10;
    if ((lVar9 == 7) && (((int)*puVar8 >> 4 & 1U) != 1)) {
      if (DAT_003bfb10 == (uint *)0x0) {
        uVar10 = Pool_Alloc(DAT_0043dee0,0x10);
        puVar7 = (uint *)FUN_0024ad08(uVar10);
      }
      else {
        uVar11 = *DAT_003bfb10;
        puVar8 = (uint *)DAT_003bfb10[3];
        *DAT_003bfb10 = uVar11 | 4;
        DAT_003bfb10 = puVar8;
        piVar6 = DAT_003be8e0;
        iVar3 = DAT_003be8e0[1];
        if (iVar3 < *DAT_003be8e0) {
          *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
          piVar6[1] = iVar3 + 1;
        }
        else {
          *puVar7 = uVar11 & 0xfffffffb;
        }
        lVar9 = FUN_003872a8(puVar7 + 2);
        if (lVar9 == 0) {
          FUN_002530e8(puVar7 + 2,0);
        }
      }
      FUN_003872e0(apsStack_50,DAT_0043debc + 8);
      FUN_00387398(puVar7 + 2,apsStack_50);
      FUN_00387328(apsStack_50,2);
      if (0 < *param_1) {
        iVar3 = *(int *)(*param_1 * 4 + param_1[2] + -4);
        iVar4 = *(int *)(iVar3 + 4);
        (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
        *param_1 = *param_1 + -1;
      }
      iVar3 = *param_1;
      *(uint **)(iVar3 * 4 + param_1[2]) = puVar7;
      *param_1 = iVar3 + 1;
      (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
    }
    else {
      apsStack_50[0] = &DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      FUN_0024c6d0(puVar8,apsStack_50);
      if (0 < *param_1) {
        iVar3 = *(int *)(*param_1 * 4 + param_1[2] + -4);
        iVar4 = *(int *)(iVar3 + 4);
        (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
        *param_1 = *param_1 + -1;
      }
      puVar8 = DAT_003bfb10;
      if (DAT_003bfb10 == (uint *)0x0) {
        uVar10 = Pool_Alloc(DAT_0043dee0,0x10);
        puVar8 = (uint *)FUN_0024ad08(uVar10);
      }
      else {
        uVar11 = *DAT_003bfb10;
        puVar7 = (uint *)DAT_003bfb10[3];
        *DAT_003bfb10 = uVar11 | 4;
        DAT_003bfb10 = puVar7;
        piVar6 = DAT_003be8e0;
        iVar3 = DAT_003be8e0[1];
        if (iVar3 < *DAT_003be8e0) {
          *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar8;
          piVar6[1] = iVar3 + 1;
        }
        else {
          *puVar8 = uVar11 & 0xfffffffb;
        }
        lVar9 = FUN_003872a8(puVar8 + 2);
        if (lVar9 == 0) {
          FUN_002530e8(puVar8 + 2,0);
        }
      }
      *apsStack_50[0] = *apsStack_50[0] + 1;
      psVar5 = (short *)puVar8[2];
      sVar2 = *psVar5;
      *psVar5 = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        Pool_Free(DAT_0043dee0,psVar5,(ushort)psVar5[2] + 9);
      }
      puVar8[2] = (uint)apsStack_50[0];
      iVar3 = *param_1;
      *(uint **)(iVar3 * 4 + param_1[2]) = puVar8;
      *param_1 = iVar3 + 1;
      (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
      sVar2 = *apsStack_50[0];
      *apsStack_50[0] = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
      }
    }
  }
  return;
}


// ==== FUN_00229700 @ 00229700 ====

void FUN_00229700(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  piVar3 = (int *)(iVar1 * 4 + param_1[2]);
  iVar2 = piVar3[-1];
  *piVar3 = iVar2;
  *param_1 = iVar1 + 1;
  (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
  return;
}


// ==== FUN_002297c0 @ 002297c0 ====

void FUN_002297c0(undefined8 param_1)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  short *apsStack_60 [4];
  
  piVar10 = (int *)param_1;
  iVar5 = *piVar10;
  puVar8 = *(uint **)(iVar5 * 4 + piVar10[2] + -4);
  puVar2 = *(uint **)((iVar5 + -1) * 4 + piVar10[2] + -4);
  if ((((int)*puVar2 >> 4 & 1U) != 1) || (uVar3 = *puVar8, ((int)uVar3 >> 4 & 1U) != 1)) {
    if (1 < iVar5) {
      iVar11 = 1;
      iVar5 = *piVar10;
      do {
        iVar5 = iVar5 - iVar11;
        iVar11 = iVar11 + 1;
        iVar5 = *(int *)(iVar5 * 4 + piVar10[2]);
        iVar12 = *(int *)(iVar5 + 4);
        (**(code **)(iVar12 + 0x14))(iVar5 + *(short *)(iVar12 + 0x10));
        iVar5 = *piVar10;
      } while (iVar11 < 3);
      *piVar10 = iVar5 + -2;
    }
    iVar11 = DAT_0043df40;
    iVar5 = *piVar10;
    *(int *)(iVar5 * 4 + piVar10[2]) = DAT_0043df40;
    *piVar10 = iVar5 + 1;
    iVar5 = *(int *)(iVar11 + 4);
    (**(code **)(iVar5 + 0xc))(iVar11 + *(short *)(iVar5 + 8));
    return;
  }
  if (*puVar2 >> 0x19 == 0x16) {
    if ((uVar3 >> 0x19 == 7) || (uVar3 >> 0x19 == 6)) {
      uVar6 = FUN_0024c300(puVar8);
      iVar5 = FUN_002334a0(puVar2,uVar6);
      if (*piVar10 < 2) {
        return;
      }
      iVar12 = 1;
      (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
      iVar11 = *piVar10;
      do {
        iVar11 = iVar11 - iVar12;
        iVar12 = iVar12 + 1;
        iVar11 = *(int *)(iVar11 * 4 + piVar10[2]);
        iVar4 = *(int *)(iVar11 + 4);
        (**(code **)(iVar4 + 0x14))(iVar11 + *(short *)(iVar4 + 0x10));
        iVar11 = *piVar10;
      } while (iVar12 < 3);
      iVar12 = piVar10[2];
      goto LAB_00229a74;
    }
    uVar7 = *puVar2;
  }
  else {
    uVar7 = *puVar2;
  }
  uVar9 = 0;
  if (uVar7 >> 0x19 == 0xb) {
    uVar9 = (int)uVar7 >> 4 & 1;
  }
  if (uVar9 == 0) {
    apsStack_60[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(puVar8,apsStack_60);
    iVar5 = FUN_0021e420(param_1,puVar2,0,apsStack_60,1,0,1);
    if (1 < *piVar10) {
      iVar12 = 1;
      (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
      iVar11 = *piVar10;
      do {
        iVar11 = iVar11 - iVar12;
        iVar12 = iVar12 + 1;
        iVar11 = *(int *)(iVar11 * 4 + piVar10[2]);
        iVar4 = *(int *)(iVar11 + 4);
        (**(code **)(iVar4 + 0x14))(iVar11 + *(short *)(iVar4 + 0x10));
        iVar11 = *piVar10;
      } while (iVar12 < 3);
      *(int *)((iVar11 + -2) * 4 + piVar10[2]) = iVar5;
      *piVar10 = *piVar10 + -1;
    }
    sVar1 = *apsStack_60[0];
    *apsStack_60[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      return;
    }
    Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    return;
  }
  if (uVar3 >> 0x19 != 1) {
    puVar8 = (uint *)puVar8[8];
  }
  iVar5 = (*DAT_0043dab0)(puVar8[2] + 8);
  if (*piVar10 < 2) {
    return;
  }
  iVar12 = 1;
  (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
  iVar11 = *piVar10;
  do {
    iVar11 = iVar11 - iVar12;
    iVar12 = iVar12 + 1;
    iVar11 = *(int *)(iVar11 * 4 + piVar10[2]);
    iVar4 = *(int *)(iVar11 + 4);
    (**(code **)(iVar4 + 0x14))(iVar11 + *(short *)(iVar4 + 0x10));
    iVar11 = *piVar10;
  } while (iVar12 < 3);
  iVar12 = piVar10[2];
LAB_00229a74:
  *(int *)((iVar11 + -2) * 4 + iVar12) = iVar5;
  *piVar10 = *piVar10 + -1;
  return;
}


// ==== FUN_00229bb0 @ 00229bb0 ====

void FUN_00229bb0(undefined8 param_1,int param_2)

{
  short sVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  short *apsStack_70 [4];
  
  uVar9 = 0;
  piVar14 = (int *)param_1;
  iVar6 = *piVar14;
  iVar13 = piVar14[2];
  puVar2 = *(uint **)((iVar6 + -2) * 4 + iVar13 + -4);
  uVar3 = *(undefined4 *)(iVar6 * 4 + iVar13 + -4);
  puVar11 = *(uint **)((iVar6 + -1) * 4 + iVar13 + -4);
  if (*puVar2 >> 0x19 == 0x16) {
    uVar9 = (int)*puVar2 >> 4 & 1;
  }
  if (uVar9 != 0) {
    uVar10 = *puVar11 >> 0x19;
    uVar12 = 0;
    uVar9 = (int)*puVar11 >> 4;
    if (uVar10 == 7) {
      uVar12 = uVar9 & 1;
    }
    if (uVar12 == 0) {
      uVar12 = 0;
      if (uVar10 == 6) {
        uVar12 = uVar9 & 1;
      }
      if (uVar12 == 0) {
        uVar9 = puVar2[1];
        goto LAB_00229c94;
      }
    }
    uVar7 = FUN_0024c300(puVar11);
    FUN_002333e8(puVar2,uVar7,uVar3);
    iVar6 = *piVar14;
    goto LAB_00229e9c;
  }
  uVar9 = puVar2[1];
LAB_00229c94:
  lVar8 = (**(code **)(uVar9 + 0x2c))((int)puVar2 + (int)*(short *)(uVar9 + 0x28));
  if (lVar8 == 0) {
    uVar12 = *puVar2 >> 0x19;
    uVar10 = 0;
    uVar9 = (int)*puVar2 >> 4;
    if (uVar12 - 0xc < 8) {
      uVar10 = uVar9 & 1;
    }
    if (uVar10 != 0) goto LAB_00229cd8;
    uVar10 = 0;
    if (uVar12 == 0xb) {
      uVar10 = uVar9 & 1;
    }
    if (uVar10 != 0) {
      apsStack_70[0] = &DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      FUN_0024c6d0(uVar3,apsStack_70);
      if (*puVar11 >> 0x19 != 1) {
        puVar11 = (uint *)puVar11[8];
      }
      (*DAT_0043daac)(puVar11[2] + 8,apsStack_70[0] + 4);
      sVar1 = *apsStack_70[0];
      *apsStack_70[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
      }
    }
  }
  else {
LAB_00229cd8:
    apsStack_70[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(puVar11,apsStack_70);
    FUN_0021c268(param_1,puVar2,*(undefined4 *)(param_2 + 8),apsStack_70,uVar3,1,0,1);
    bVar5 = false;
    if (apsStack_70[0][1] == DAT_0043dc18[1]) {
      if (apsStack_70[0] != DAT_0043dc18) {
        lVar8 = FUN_0035c4b0(apsStack_70[0] + 4,DAT_0043dc18 + 4);
        bVar5 = false;
        if (lVar8 != 0) goto LAB_00229d54;
      }
      bVar5 = true;
    }
LAB_00229d54:
    if (bVar5) {
      uVar10 = *puVar2 >> 0x19;
      uVar12 = 0;
      uVar9 = (int)*puVar2 >> 4;
      if (uVar10 == 0x1b) {
        uVar12 = uVar9 & 1;
      }
      if (uVar12 == 0) {
        uVar12 = 0;
        if (uVar10 - 0xc < 8) {
          uVar12 = uVar9 & 1;
        }
        if (uVar12 == 0) goto LAB_00229dc4;
        uVar9 = puVar2[1];
      }
      else {
        uVar9 = puVar2[1];
      }
      (**(code **)(uVar9 + 0x3c))((int)puVar2 + (int)*(short *)(uVar9 + 0x38),1);
    }
LAB_00229dc4:
    sVar1 = *apsStack_70[0];
    *apsStack_70[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
      iVar6 = *piVar14;
      goto LAB_00229e9c;
    }
  }
  iVar6 = *piVar14;
LAB_00229e9c:
  if (2 < iVar6) {
    iVar13 = 1;
    iVar6 = *piVar14;
    do {
      iVar6 = iVar6 - iVar13;
      iVar13 = iVar13 + 1;
      iVar6 = *(int *)(iVar6 * 4 + piVar14[2]);
      iVar4 = *(int *)(iVar6 + 4);
      (**(code **)(iVar4 + 0x14))(iVar6 + *(short *)(iVar4 + 0x10));
      iVar6 = *piVar14;
    } while (iVar13 < 4);
    *piVar14 = iVar6 + -3;
  }
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*piVar14 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_00229f40 @ 00229f40 ====

void FUN_00229f40(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  float fVar9;
  
  puVar1 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar6 = FUN_0021ada8();
  puVar5 = (uint *)0x0;
  if ((lVar6 == 7) && (((int)*puVar1 >> 4 & 1U) != 1)) {
    puVar5 = DAT_0043df40;
  }
  if (puVar5 != (uint *)0x0) {
    iVar4 = *param_1;
    goto LAB_0022a138;
  }
  uVar8 = 0;
  if (*puVar1 >> 0x19 == 7) {
    uVar8 = (int)*puVar1 >> 4 & 1;
  }
  if (uVar8 == 0) {
    fVar9 = (float)FUN_0024c410(puVar1);
    puVar5 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,6);
      puVar5[2] = (uint)(fVar9 + 1.0);
      puVar7 = &DAT_003e2098;
      goto LAB_0022a130;
    }
    uVar8 = *DAT_003bfae8;
    puVar1 = (uint *)DAT_003bfae8[2];
    *DAT_003bfae8 = uVar8 | 4;
    DAT_003bfae8 = puVar1;
    piVar3 = DAT_003be8e0;
    iVar4 = DAT_003be8e0[1];
    if (iVar4 < *DAT_003be8e0) {
      *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar3[1] = iVar4 + 1;
    }
    else {
      *puVar5 = uVar8 & 0xfffffffb;
    }
    puVar5[2] = (uint)(fVar9 + 1.0);
  }
  else {
    iVar4 = FUN_0024c300(puVar1);
    puVar5 = DAT_003bfaec;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = iVar4 + 1U;
      puVar7 = &DAT_003e2230;
LAB_0022a130:
      puVar5[1] = (uint)puVar7;
    }
    else {
      uVar8 = *DAT_003bfaec;
      puVar1 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar8 | 4;
      DAT_003bfaec = puVar1;
      piVar3 = DAT_003be8e0;
      iVar2 = DAT_003be8e0[1];
      if (iVar2 < *DAT_003be8e0) {
        *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar3[1] = iVar2 + 1;
      }
      else {
        *puVar5 = uVar8 & 0xfffffffb;
      }
      puVar5[2] = iVar4 + 1U;
    }
  }
  iVar4 = *param_1;
LAB_0022a138:
  if (0 < iVar4) {
    iVar4 = *(int *)(iVar4 * 4 + param_1[2] + -4);
    iVar2 = *(int *)(iVar4 + 4);
    (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
    *param_1 = *param_1 + -1;
  }
  iVar4 = *param_1;
  *(uint **)(iVar4 * 4 + param_1[2]) = puVar5;
  *param_1 = iVar4 + 1;
  (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
  return;
}


// ==== FUN_0022a1c0 @ 0022a1c0 ====

void FUN_0022a1c0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  float fVar9;
  
  puVar1 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar6 = FUN_0021ada8();
  puVar5 = (uint *)0x0;
  if ((lVar6 == 7) && (((int)*puVar1 >> 4 & 1U) != 1)) {
    puVar5 = DAT_0043df40;
  }
  if (puVar5 != (uint *)0x0) {
    iVar4 = *param_1;
    goto LAB_0022a3b8;
  }
  uVar8 = 0;
  if (*puVar1 >> 0x19 == 7) {
    uVar8 = (int)*puVar1 >> 4 & 1;
  }
  if (uVar8 == 0) {
    fVar9 = (float)FUN_0024c410(puVar1);
    puVar5 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,6);
      puVar5[2] = (uint)(fVar9 - 1.0);
      puVar7 = &DAT_003e2098;
      goto LAB_0022a3b0;
    }
    uVar8 = *DAT_003bfae8;
    puVar1 = (uint *)DAT_003bfae8[2];
    *DAT_003bfae8 = uVar8 | 4;
    DAT_003bfae8 = puVar1;
    piVar3 = DAT_003be8e0;
    iVar4 = DAT_003be8e0[1];
    if (iVar4 < *DAT_003be8e0) {
      *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar3[1] = iVar4 + 1;
    }
    else {
      *puVar5 = uVar8 & 0xfffffffb;
    }
    puVar5[2] = (uint)(fVar9 - 1.0);
  }
  else {
    iVar4 = FUN_0024c300(puVar1);
    puVar5 = DAT_003bfaec;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = iVar4 - 1U;
      puVar7 = &DAT_003e2230;
LAB_0022a3b0:
      puVar5[1] = (uint)puVar7;
    }
    else {
      uVar8 = *DAT_003bfaec;
      puVar1 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar8 | 4;
      DAT_003bfaec = puVar1;
      piVar3 = DAT_003be8e0;
      iVar2 = DAT_003be8e0[1];
      if (iVar2 < *DAT_003be8e0) {
        *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar3[1] = iVar2 + 1;
      }
      else {
        *puVar5 = uVar8 & 0xfffffffb;
      }
      puVar5[2] = iVar4 - 1U;
    }
  }
  iVar4 = *param_1;
LAB_0022a3b8:
  if (0 < iVar4) {
    iVar4 = *(int *)(iVar4 * 4 + param_1[2] + -4);
    iVar2 = *(int *)(iVar4 + 4);
    (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
    *param_1 = *param_1 + -1;
  }
  iVar4 = *param_1;
  *(uint **)(iVar4 * 4 + param_1[2]) = puVar5;
  *param_1 = iVar4 + 1;
  (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
  return;
}


// ==== FUN_0022a440 @ 0022a440 ====

/* Strings referenciadas:
     "super"
     "apply"
     "shift" */

void FUN_0022a440(undefined8 param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  short *apsStack_d0 [4];
  short *apsStack_c0 [4];
  uint *puStack_b0;
  int iStack_ac;
  int *piStack_a8;
  
  puVar5 = (uint *)0x0;
  piVar15 = (int *)param_1;
  iVar4 = *piVar15;
  iStack_ac = 0;
  iVar14 = piVar15[2];
  puStack_b0 = *(uint **)((iVar4 + -2) * 4 + iVar14 + -4);
  puVar3 = *(uint **)((iVar4 + -1) * 4 + iVar14 + -4);
  puVar16 = *(uint **)(iVar4 * 4 + iVar14 + -4);
  iVar4 = FUN_0024c300(puStack_b0);
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_d0[0] = &DAT_003bfaf8;
  if (puVar16 == DAT_0043df40) {
    String_ctor_cstr(apsStack_c0,0x3fd498);
    *apsStack_c0[0] = *apsStack_c0[0] + 1;
    sVar2 = *apsStack_d0[0];
    *apsStack_d0[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_d0[0],(ushort)apsStack_d0[0][2] + 9);
    }
    apsStack_d0[0] = apsStack_c0[0];
    sVar2 = *apsStack_c0[0];
    *apsStack_c0[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
    }
    uVar11 = 0;
    if (*puVar3 >> 0x19 == 0x1c) {
      uVar11 = (int)*puVar3 >> 4 & 1;
    }
    puVar5 = puVar3;
    if (uVar11 != 0) {
      puVar5 = (uint *)puVar3[7];
    }
  }
  else {
    FUN_0024c6d0(puVar16,apsStack_d0);
  }
  if (((int)*puVar3 >> 4 & 1U) != 1) {
    iVar4 = iVar4 + 3;
    if (*piVar15 < iVar4) {
      iVar4 = *piVar15;
    }
    else {
      iVar14 = 1;
      if (0 < iVar4) {
        iVar7 = *piVar15;
        while( true ) {
          iVar7 = iVar7 - iVar14;
          iVar14 = iVar14 + 1;
          iVar7 = *(int *)(iVar7 * 4 + piVar15[2]);
          iVar9 = *(int *)(iVar7 + 4);
          (**(code **)(iVar9 + 0x14))(iVar7 + *(short *)(iVar9 + 0x10));
          if (iVar4 < iVar14) break;
          iVar7 = *piVar15;
        }
      }
      *piVar15 = *piVar15 - iVar4;
      iVar4 = *piVar15;
    }
    *(uint **)(iVar4 * 4 + piVar15[2]) = DAT_0043df40;
    *piVar15 = iVar4 + 1;
    goto LAB_0022ae2c;
  }
  iVar14 = piVar15[9];
  piStack_a8 = piVar15 + 9;
  iVar7 = *(int *)(param_2 + 4);
  *(int *)(iVar14 * 4 + piVar15[0xb]) = iVar7;
  piVar15[9] = iVar14 + 1;
  (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
  if (0 < *piVar15) {
    iVar14 = *(int *)(*piVar15 * 4 + piVar15[2] + -4);
    iVar7 = *(int *)(iVar14 + 4);
    (**(code **)(iVar7 + 0x14))(iVar14 + *(short *)(iVar7 + 0x10));
    iVar14 = *piVar15;
    *piVar15 = iVar14 + -1;
    if ((0 < iVar14 + -1) && (*piVar15 = iVar14 + -2, 0 < iVar14 + -2)) {
      *piVar15 = iVar14 + -3;
    }
  }
  if ((puVar5 == (uint *)0x0) || (puVar5 == DAT_0043df40)) {
    puVar5 = (uint *)FUN_0021e420(param_1,puVar3,0,apsStack_d0,1,1,0);
  }
  puVar16 = puVar3;
  if ((puVar5 == (uint *)0x0) || (((int)*puVar5 >> 4 & 1U) != 1)) {
    lVar8 = stricmp(apsStack_d0[0] + 4,0x3fd4a0);
    if ((lVar8 == 0) || (lVar8 = stricmp(apsStack_d0[0] + 4,0x3fd4a8), lVar8 == 0)) {
      puVar16 = puStack_b0;
      uVar10 = *puStack_b0 >> 0x19;
      uVar12 = 0;
      uVar11 = (int)*puStack_b0 >> 4;
      if (uVar10 == 7) {
        uVar12 = uVar11 & 1;
      }
      if (uVar12 == 0) {
        uVar12 = 0;
        if (uVar10 == 6) {
          uVar12 = uVar11 & 1;
        }
        if (uVar12 != 0) goto LAB_0022a71c;
        iVar4 = FUN_0024c300(*(undefined4 *)(*piVar15 * 4 + piVar15[2] + -4));
        if (iVar4 < 2) {
          iVar14 = *piVar15;
        }
        else {
          iVar14 = *piVar15;
          puVar5 = *(uint **)((iVar14 + -1) * 4 + piVar15[2] + -4);
          if ((puVar5 != (uint *)0x0) && (puVar16 = puStack_b0, ((int)*puVar5 >> 4 & 1U) != 0)) {
            puVar16 = puVar5;
          }
          if (0 < iVar14) {
            iVar14 = *(int *)(iVar14 * 4 + piVar15[2] + -4);
            iVar7 = *(int *)(iVar14 + 4);
            (**(code **)(iVar7 + 0x14))(iVar14 + *(short *)(iVar7 + 0x10));
            *piVar15 = *piVar15 + -1;
          }
          iVar4 = iVar4 + -1;
          iVar14 = *piVar15;
        }
        if (0 < iVar14) {
          iVar14 = *(int *)(iVar14 * 4 + piVar15[2] + -4);
          iVar7 = *(int *)(iVar14 + 4);
          (**(code **)(iVar7 + 0x14))(iVar14 + *(short *)(iVar7 + 0x10));
          *piVar15 = *piVar15 + -1;
        }
      }
      else {
LAB_0022a71c:
        puVar16 = DAT_0043df40;
        if (0 < iVar4) {
          iVar14 = *piVar15;
          puVar16 = *(uint **)(iVar14 * 4 + piVar15[2] + -4);
          if ((puVar16 == (uint *)0x0) || (((int)*puVar16 >> 4 & 1U) != 1)) {
            puVar16 = DAT_0043df40;
          }
          if (0 < iVar14) {
            iVar14 = *(int *)(iVar14 * 4 + piVar15[2] + -4);
            iVar7 = *(int *)(iVar14 + 4);
            (**(code **)(iVar7 + 0x14))(iVar14 + *(short *)(iVar7 + 0x10));
            *piVar15 = *piVar15 + -1;
          }
          iVar4 = iVar4 + -1;
        }
      }
      lVar8 = stricmp(apsStack_d0[0] + 4,0x3fd4a0);
      if (lVar8 == 0) {
        puVar5 = *(uint **)(*piVar15 * 4 + piVar15[2] + -4);
        uVar11 = 0;
        if (*puVar5 >> 0x19 == 0x16) {
          uVar11 = (int)*puVar5 >> 4 & 1;
        }
        if (uVar11 == 0) {
          uVar11 = puVar16[1];
          puVar5 = puVar3;
        }
        else {
          if (*piVar15 < 1) {
            uVar11 = puVar5[10];
          }
          else {
            (**(code **)(puVar5[1] + 0x14))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x10));
            *piVar15 = *piVar15 + -1;
            uVar11 = puVar5[10];
          }
          iVar14 = uVar11 - 1;
          iVar4 = iVar4 + iVar14;
          if (-1 < iVar14) {
            uVar11 = puVar5[8];
            while( true ) {
              iVar9 = iVar14 * 4;
              iVar7 = *piVar15;
              iVar14 = iVar14 + -1;
              iVar9 = *(int *)(iVar9 + uVar11);
              *(int *)(iVar7 * 4 + piVar15[2]) = iVar9;
              *piVar15 = iVar7 + 1;
              (**(code **)(*(int *)(iVar9 + 4) + 0xc))(iVar9 + *(short *)(*(int *)(iVar9 + 4) + 8));
              if (iVar14 < 0) break;
              uVar11 = puVar5[8];
            }
          }
          uVar11 = puVar16[1];
          puVar5 = puVar3;
        }
      }
      else {
        uVar11 = puVar16[1];
        puVar5 = puVar3;
      }
    }
    else {
      uVar11 = puVar3[1];
    }
  }
  else {
    uVar11 = puVar3[1];
  }
  lVar8 = (**(code **)(uVar11 + 0x34))((int)puVar16 + (int)*(short *)(uVar11 + 0x30));
  bVar1 = true;
  if (lVar8 == 0) {
LAB_0022aaf4:
    uVar11 = *puVar16;
  }
  else {
    puVar6 = puVar16;
    if (piVar15[3] == 0) {
      if (puVar16 == *(uint **)(param_2 + 0x10)) {
        String_ctor_cstr(apsStack_c0,0x3fd4b0);
        puVar6 = (uint *)FUN_0021e420(param_1,*(undefined4 *)(param_2 + 4),0,apsStack_c0,1,1,0);
        sVar2 = *apsStack_c0[0];
        *apsStack_c0[0] = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
        }
      }
    }
    else {
      uVar11 = 0;
      puVar13 = *(uint **)(piVar15[3] * 4 + piVar15[5] + -4);
      if ((*puVar16 >> 0x19) - 0xc < 8) {
        uVar11 = (int)*puVar16 >> 4 & 1;
      }
      if (((uVar11 == 0) || ((uint *)puVar16[0x11] != puVar13)) && (puVar16 != puVar13)) {
        uVar11 = puVar13[1];
        do {
          lVar8 = (**(code **)(uVar11 + 0x24))((int)puVar13 + (int)*(short *)(uVar11 + 0x20));
          do {
            do {
              if (lVar8 == 0) goto LAB_0022aa84;
              puVar13 = *(uint **)((int)lVar8 + 8);
              lVar8 = 0;
            } while (puVar13 == (uint *)0x0);
            if (puVar13 == puVar16) {
              bVar1 = false;
              goto LAB_0022aa84;
            }
            lVar8 = 0;
          } while (puVar13 == (uint *)0x0);
          uVar11 = puVar13[1];
        } while( true );
      }
    }
LAB_0022aa84:
    if (bVar1) {
      iStack_ac = 1;
      uVar11 = 0;
      if (*puVar6 >> 0x19 == 0x1b) {
        uVar11 = (int)*puVar6 >> 4 & 1;
      }
      if (uVar11 == 0) {
        iVar14 = piVar15[3];
      }
      else {
        puVar6[7] = puVar6[7] | 0x200;
        iVar14 = piVar15[3];
      }
      *(uint **)(iVar14 * 4 + piVar15[5]) = puVar6;
      piVar15[3] = iVar14 + 1;
      (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
      goto LAB_0022aaf4;
    }
    uVar11 = *puVar16;
  }
  bVar1 = (uVar11 >> 6 & 0xfff) == 1;
  if (bVar1) {
    (**(code **)(puVar16[1] + 0xc))((int)puVar16 + (int)*(short *)(puVar16[1] + 8));
  }
  lVar8 = FUN_0024f440(puVar16);
  if (lVar8 == 0) {
    FUN_0021ea58(param_1,puVar16,puVar5,iVar4);
  }
  else {
    if (puVar16 == DAT_0043df48) {
      puVar16 = *(uint **)((piVar15[9] + -1) * 4 + piStack_a8[2] + -4);
      puVar6 = *(uint **)(param_2 + 0x10);
    }
    else {
      puVar6 = *(uint **)(param_2 + 0x10);
    }
    if (puVar16 == puVar6) {
      uVar11 = 0;
      if ((*puVar5 >> 0x19) - 0x2b < 3) {
        uVar11 = (int)*puVar5 >> 4 & 1;
      }
      if (uVar11 != 0) {
        uVar11 = puVar5[8];
        puVar5[8] = *(uint *)(param_2 + 4);
        FUN_0021ea58(param_1,puVar16,puVar5,iVar4);
        puVar5[8] = uVar11;
        goto LAB_0022abec;
      }
    }
    FUN_0021ea58(param_1,puVar16,puVar5,iVar4);
  }
LAB_0022abec:
  if (iStack_ac == 1) {
    puVar5 = *(uint **)(piVar15[3] * 4 + piVar15[5] + -4);
    uVar11 = 0;
    if (*puVar5 >> 0x19 == 0x1b) {
      uVar11 = (int)*puVar5 >> 4 & 1;
    }
    if (uVar11 != 0) {
      puVar5[7] = puVar5[7] & 0xfffffdff;
    }
    iVar4 = *(int *)(piVar15[3] * 4 + piVar15[5] + -4);
    iVar14 = *(int *)(iVar4 + 4);
    (**(code **)(iVar14 + 0x14))(iVar4 + *(short *)(iVar14 + 0x10));
    piVar15[3] = piVar15[3] + -1;
  }
  if (bVar1) {
    (**(code **)(puVar16[1] + 0x14))((int)puVar16 + (int)*(short *)(puVar16[1] + 0x10));
    iVar4 = *piVar15;
  }
  else {
    iVar4 = *piVar15;
  }
  if (*(uint **)(iVar4 * 4 + piVar15[2] + -4) != DAT_0043df40) {
    uVar11 = 0;
    if (*puVar16 >> 0x19 == 0x16) {
      uVar11 = (int)*puVar16 >> 4 & 1;
    }
    if ((uVar11 != 0) &&
       ((lVar8 = stricmp(apsStack_d0[0] + 4,0x3fd4b8), lVar8 == 0 ||
        (lVar8 = stricmp(apsStack_d0[0] + 4,0x3fd4c0), lVar8 == 0)))) {
      iVar4 = *(int *)(*piVar15 * 4 + piVar15[2] + -4);
      iVar14 = *(int *)(iVar4 + 4);
      (**(code **)(iVar14 + 0x14))(iVar4 + *(short *)(iVar14 + 0x10));
    }
  }
  iVar4 = *(int *)(piVar15[9] * 4 + piStack_a8[2] + -4);
  iVar14 = *(int *)(iVar4 + 4);
  (**(code **)(iVar14 + 0x14))(iVar4 + *(short *)(iVar14 + 0x10));
  piVar15[9] = piVar15[9] + -1;
  (**(code **)(puVar3[1] + 0x14))((int)puVar3 + (int)*(short *)(puVar3[1] + 0x10));
  (**(code **)(puStack_b0[1] + 0x14))((int)puStack_b0 + (int)*(short *)(puStack_b0[1] + 0x10));
LAB_0022ae2c:
  sVar2 = *apsStack_d0[0];
  *apsStack_d0[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_d0[0],(ushort)apsStack_d0[0][2] + 9);
  }
  return;
}


// ==== FUN_0022ae88 @ 0022ae88 ====

void FUN_0022ae88(undefined8 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  short *apsStack_60 [4];
  
  piVar8 = (int *)param_1;
  iVar5 = *piVar8;
  iVar4 = piVar8[2];
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  uVar2 = *(undefined4 *)((iVar5 + -2) * 4 + iVar4 + -4);
  iVar3 = *(int *)((iVar5 + -1) * 4 + iVar4 + -4);
  apsStack_60[0] = &DAT_003bfaf8;
  FUN_0024c6d0(*(undefined4 *)(iVar5 * 4 + iVar4 + -4),apsStack_60);
  uVar6 = FUN_0024c300(uVar2);
  if (0 < *piVar8) {
    iVar5 = *(int *)(*piVar8 * 4 + piVar8[2] + -4);
    iVar4 = *(int *)(iVar5 + 4);
    (**(code **)(iVar4 + 0x14))(iVar5 + *(short *)(iVar4 + 0x10));
    iVar5 = *piVar8;
    iVar4 = iVar5 + -1;
    *piVar8 = iVar4;
    if (0 < iVar4) {
      iVar5 = iVar5 + -2;
      *piVar8 = iVar5;
      if (0 < iVar5) {
        iVar5 = *(int *)(iVar5 * 4 + piVar8[2] + -4);
        iVar4 = *(int *)(iVar5 + 4);
        (**(code **)(iVar4 + 0x14))(iVar5 + *(short *)(iVar4 + 0x10));
        *piVar8 = *piVar8 + -1;
      }
    }
  }
  lVar7 = FUN_0021f1c8(param_1,iVar3,*(undefined4 *)(param_2 + 8),apsStack_60,uVar6,1);
  (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
  iVar4 = DAT_0043df40;
  iVar5 = *piVar8;
  if (lVar7 == 0) {
    *(int *)(iVar5 * 4 + piVar8[2]) = DAT_0043df40;
    *piVar8 = iVar5 + 1;
    iVar5 = *(int *)(iVar4 + 4);
    (**(code **)(iVar5 + 0xc))(iVar4 + *(short *)(iVar5 + 8));
  }
  else {
    iVar4 = (int)lVar7;
    *(int *)(iVar5 * 4 + piVar8[2]) = iVar4;
    *piVar8 = iVar5 + 1;
    (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
    (**(code **)(*(int *)(iVar4 + 4) + 0x14))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x10));
  }
  sVar1 = *apsStack_60[0];
  *apsStack_60[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  return;
}


// ==== FUN_0022b080 @ 0022b080 ====

void FUN_0022b080(undefined8 param_1,int param_2)

{
  FUN_002202c8(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return;
}


// ==== FUN_0022b0a0 @ 0022b0a0 ====

void FUN_0022b0a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  piVar1 = *(int **)((*param_1 + -1) * 4 + param_1[2] + -4);
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  lVar10 = FUN_0021ada8();
  puVar8 = (uint *)0x0;
  if ((lVar10 == 7) && (((*piVar2 >> 4 & 1U) != 1 || ((*piVar1 >> 4 & 1U) != 1)))) {
    puVar8 = DAT_0043df40;
  }
  if (puVar8 == (uint *)0x0) {
    uVar6 = FUN_0024c300(piVar2);
    uVar7 = FUN_0024c300(piVar1);
    puVar8 = DAT_003bfaec;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,7);
      puVar8[2] = uVar6 & uVar7;
      puVar8[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar3 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar3 | 4;
      DAT_003bfaec = puVar5;
      piVar1 = DAT_003be8e0;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar8;
        piVar1[1] = iVar9 + 1;
      }
      else {
        *puVar8 = uVar3 & 0xfffffffb;
      }
      puVar8[2] = uVar6 & uVar7;
    }
    iVar9 = *param_1;
  }
  else {
    iVar9 = *param_1;
  }
  if (1 < iVar9) {
    iVar11 = 1;
    (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
    iVar9 = *param_1;
    do {
      iVar9 = iVar9 - iVar11;
      iVar11 = iVar11 + 1;
      iVar9 = *(int *)(iVar9 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar9 + 4);
      (**(code **)(iVar4 + 0x14))(iVar9 + *(short *)(iVar4 + 0x10));
      iVar9 = *param_1;
    } while (iVar11 < 3);
    *(uint **)((iVar9 + -2) * 4 + param_1[2]) = puVar8;
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022b290 @ 0022b290 ====

void FUN_0022b290(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  piVar1 = *(int **)((*param_1 + -1) * 4 + param_1[2] + -4);
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  lVar10 = FUN_0021ada8();
  puVar8 = (uint *)0x0;
  if ((lVar10 == 7) && (((*piVar2 >> 4 & 1U) != 1 || ((*piVar1 >> 4 & 1U) != 1)))) {
    puVar8 = DAT_0043df40;
  }
  if (puVar8 == (uint *)0x0) {
    uVar6 = FUN_0024c300(piVar2);
    uVar7 = FUN_0024c300(piVar1);
    puVar8 = DAT_003bfaec;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,7);
      puVar8[2] = uVar6 | uVar7;
      puVar8[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar3 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar3 | 4;
      DAT_003bfaec = puVar5;
      piVar1 = DAT_003be8e0;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar8;
        piVar1[1] = iVar9 + 1;
      }
      else {
        *puVar8 = uVar3 & 0xfffffffb;
      }
      puVar8[2] = uVar6 | uVar7;
    }
    iVar9 = *param_1;
  }
  else {
    iVar9 = *param_1;
  }
  if (1 < iVar9) {
    iVar11 = 1;
    (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
    iVar9 = *param_1;
    do {
      iVar9 = iVar9 - iVar11;
      iVar11 = iVar11 + 1;
      iVar9 = *(int *)(iVar9 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar9 + 4);
      (**(code **)(iVar4 + 0x14))(iVar9 + *(short *)(iVar4 + 0x10));
      iVar9 = *param_1;
    } while (iVar11 < 3);
    *(uint **)((iVar9 + -2) * 4 + param_1[2]) = puVar8;
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022b480 @ 0022b480 ====

void FUN_0022b480(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  piVar1 = *(int **)((*param_1 + -1) * 4 + param_1[2] + -4);
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  lVar10 = FUN_0021ada8();
  puVar8 = (uint *)0x0;
  if ((lVar10 == 7) && (((*piVar2 >> 4 & 1U) != 1 || ((*piVar1 >> 4 & 1U) != 1)))) {
    puVar8 = DAT_0043df40;
  }
  if (puVar8 == (uint *)0x0) {
    uVar6 = FUN_0024c300(piVar2);
    uVar7 = FUN_0024c300(piVar1);
    puVar8 = DAT_003bfaec;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar8,7);
      puVar8[2] = uVar6 ^ uVar7;
      puVar8[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar3 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar3 | 4;
      DAT_003bfaec = puVar5;
      piVar1 = DAT_003be8e0;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar8;
        piVar1[1] = iVar9 + 1;
      }
      else {
        *puVar8 = uVar3 & 0xfffffffb;
      }
      puVar8[2] = uVar6 ^ uVar7;
    }
    iVar9 = *param_1;
  }
  else {
    iVar9 = *param_1;
  }
  if (1 < iVar9) {
    iVar11 = 1;
    (**(code **)(puVar8[1] + 0xc))((int)puVar8 + (int)*(short *)(puVar8[1] + 8));
    iVar9 = *param_1;
    do {
      iVar9 = iVar9 - iVar11;
      iVar11 = iVar11 + 1;
      iVar9 = *(int *)(iVar9 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar9 + 4);
      (**(code **)(iVar4 + 0x14))(iVar9 + *(short *)(iVar4 + 0x10));
      iVar9 = *param_1;
    } while (iVar11 < 3);
    *(uint **)((iVar9 + -2) * 4 + param_1[2]) = puVar8;
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022b670 @ 0022b670 ====

void FUN_0022b670(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  piVar1 = *(int **)((*param_1 + -1) * 4 + param_1[2] + -4);
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  lVar9 = FUN_0021ada8();
  puVar7 = (uint *)0x0;
  if ((lVar9 == 7) && (((*piVar1 >> 4 & 1U) != 1 || ((*piVar2 >> 4 & 1U) != 1)))) {
    puVar7 = DAT_0043df40;
  }
  if (puVar7 == (uint *)0x0) {
    uVar6 = FUN_0024c300(piVar2);
    iVar8 = FUN_0024c300(piVar1);
    puVar7 = DAT_003bfaec;
    uVar6 = iVar8 << (uVar6 & 0x1f);
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = uVar6;
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar3 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar3 | 4;
      DAT_003bfaec = puVar5;
      piVar1 = DAT_003be8e0;
      iVar8 = DAT_003be8e0[1];
      if (iVar8 < *DAT_003be8e0) {
        *(uint **)(iVar8 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar1[1] = iVar8 + 1;
      }
      else {
        *puVar7 = uVar3 & 0xfffffffb;
      }
      puVar7[2] = uVar6;
    }
    iVar8 = *param_1;
  }
  else {
    iVar8 = *param_1;
  }
  if (1 < iVar8) {
    iVar10 = 1;
    (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
    iVar8 = *param_1;
    do {
      iVar8 = iVar8 - iVar10;
      iVar10 = iVar10 + 1;
      iVar8 = *(int *)(iVar8 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar8 + 4);
      (**(code **)(iVar4 + 0x14))(iVar8 + *(short *)(iVar4 + 0x10));
      iVar8 = *param_1;
    } while (iVar10 < 3);
    *(uint **)((iVar8 + -2) * 4 + param_1[2]) = puVar7;
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022b860 @ 0022b860 ====

void FUN_0022b860(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  piVar1 = *(int **)((*param_1 + -1) * 4 + param_1[2] + -4);
  piVar2 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  lVar9 = FUN_0021ada8();
  puVar7 = (uint *)0x0;
  if ((lVar9 == 7) && (((*piVar1 >> 4 & 1U) != 1 || ((*piVar2 >> 4 & 1U) != 1)))) {
    puVar7 = DAT_0043df40;
  }
  if (puVar7 == (uint *)0x0) {
    uVar6 = FUN_0024c300(piVar2);
    iVar8 = FUN_0024c300(piVar1);
    puVar7 = DAT_003bfaec;
    uVar6 = iVar8 >> (uVar6 & 0x1f);
    if (DAT_003bfaec == (uint *)0x0) {
      puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,7);
      puVar7[2] = uVar6;
      puVar7[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar3 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar3 | 4;
      DAT_003bfaec = puVar5;
      piVar1 = DAT_003be8e0;
      iVar8 = DAT_003be8e0[1];
      if (iVar8 < *DAT_003be8e0) {
        *(uint **)(iVar8 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar1[1] = iVar8 + 1;
      }
      else {
        *puVar7 = uVar3 & 0xfffffffb;
      }
      puVar7[2] = uVar6;
    }
    iVar8 = *param_1;
  }
  else {
    iVar8 = *param_1;
  }
  if (1 < iVar8) {
    iVar10 = 1;
    (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
    iVar8 = *param_1;
    do {
      iVar8 = iVar8 - iVar10;
      iVar10 = iVar10 + 1;
      iVar8 = *(int *)(iVar8 * 4 + param_1[2]);
      iVar4 = *(int *)(iVar8 + 4);
      (**(code **)(iVar4 + 0x14))(iVar8 + *(short *)(iVar4 + 0x10));
      iVar8 = *param_1;
    } while (iVar10 < 3);
    *(uint **)((iVar8 + -2) * 4 + param_1[2]) = puVar7;
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022ba58 @ 0022ba58 ====

void FUN_0022ba58(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  puVar12 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  puVar10 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  if (*puVar12 >> 0x19 == 0x13) {
    puVar12 = DAT_0043df40;
  }
  if (*puVar10 >> 0x19 == 0x13) {
    puVar10 = DAT_0043df40;
  }
  lVar9 = FUN_0021ada8();
  puVar5 = DAT_003bfae4;
  uVar7 = *puVar12;
  if (lVar9 == 7) {
    uVar7 = (int)uVar7 >> 4 & 1U ^ 1;
    if (((int)*puVar10 >> 4 & 1U) == 0) {
      uVar7 = uVar7 + 1;
    }
    if (uVar7 == 0) {
      uVar7 = *puVar12;
      goto LAB_0022bc1c;
    }
    if (DAT_003bfae4 == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,5);
      *(bool *)(puVar5 + 2) = uVar7 == 2;
      puVar5[1] = (uint)&DAT_003e2120;
    }
    else {
      uVar8 = *DAT_003bfae4;
      puVar12 = (uint *)DAT_003bfae4[2];
      *DAT_003bfae4 = uVar8 | 4;
      DAT_003bfae4 = puVar12;
      piVar4 = DAT_003be8e0;
      iVar6 = DAT_003be8e0[1];
      if (iVar6 < *DAT_003be8e0) {
        *(uint **)(iVar6 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar4[1] = iVar6 + 1;
      }
      else {
        *puVar5 = uVar8 & 0xfffffffb;
      }
      *(bool *)(puVar5 + 2) = uVar7 == 2;
    }
    if (*param_1 < 2) {
      return;
    }
    iVar13 = 1;
    (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
    iVar6 = *param_1;
    do {
      iVar6 = iVar6 - iVar13;
      iVar13 = iVar13 + 1;
      iVar6 = *(int *)(iVar6 * 4 + param_1[2]);
      iVar1 = *(int *)(iVar6 + 4);
      (**(code **)(iVar1 + 0x14))(iVar6 + *(short *)(iVar1 + 0x10));
      iVar6 = *param_1;
    } while (iVar13 < 3);
    iVar13 = param_1[2];
    goto LAB_0022bf7c;
  }
LAB_0022bc1c:
  bVar2 = false;
  uVar8 = 0;
  if (uVar7 >> 0x19 == 7) {
    uVar8 = (int)uVar7 >> 4 & 1;
  }
  if (uVar8 == 0) {
    uVar8 = 0;
    if (uVar7 >> 0x19 == 6) {
      uVar8 = (int)uVar7 >> 4 & 1;
    }
    uVar11 = *puVar10;
    if (uVar8 != 0) {
      uVar11 = *puVar10;
      goto LAB_0022bc68;
    }
LAB_0022bcb0:
    if (uVar7 >> 0x19 == uVar11 >> 0x19) goto LAB_0022bcc4;
    goto LAB_0022be70;
  }
  uVar11 = *puVar10;
LAB_0022bc68:
  uVar8 = 0;
  if (uVar11 >> 0x19 == 7) {
    uVar8 = (int)uVar11 >> 4 & 1;
  }
  if (uVar8 == 0) {
    uVar8 = 0;
    if (uVar11 >> 0x19 == 6) {
      uVar8 = (int)uVar11 >> 4 & 1;
    }
    if (uVar8 == 0) goto LAB_0022bcb0;
  }
LAB_0022bcc4:
  switch(uVar7 >> 0x19) {
  case 1:
  case 0x2a:
    if (uVar11 >> 0x19 != 1) {
      puVar10 = (uint *)puVar10[8];
    }
    if (uVar7 >> 0x19 != 1) {
      puVar12 = (uint *)puVar12[8];
    }
    uVar7 = puVar10[2];
    uVar8 = puVar12[2];
    bVar2 = false;
    if (*(short *)(uVar7 + 2) == *(short *)(uVar8 + 2)) {
      if (uVar7 != uVar8) {
        lVar9 = stricmp(uVar7 + 8,uVar8 + 8);
        bVar2 = false;
        if (lVar9 != 0) break;
      }
      bVar2 = true;
    }
    break;
  default:
    uVar7 = (uint)puVar12 ^ (uint)puVar10;
    goto LAB_0022be68;
  case 5:
  case 7:
    uVar7 = FUN_0024c300(puVar12);
    uVar8 = 0;
    if (*puVar10 >> 0x19 == 7) {
      uVar8 = (int)*puVar10 >> 4 & 1;
    }
    if (uVar8 == 0) {
      fVar15 = (float)FUN_0024c410(puVar10);
      bVar3 = ABS((float)(int)uVar7 - fVar15) < 0.001;
      goto code_r0x0022be54;
    }
    uVar8 = FUN_0024c300(puVar10);
    uVar7 = uVar7 ^ uVar8;
LAB_0022be68:
    bVar2 = uVar7 == 0;
    break;
  case 6:
    fVar15 = (float)FUN_0024c410(puVar12);
    uVar7 = 0;
    if (*puVar10 >> 0x19 == 7) {
      uVar7 = (int)*puVar10 >> 4 & 1;
    }
    if (uVar7 == 0) {
      fVar14 = (float)FUN_0024c410(puVar10);
      bVar3 = ABS(fVar15 - fVar14) < 0.001;
    }
    else {
      iVar6 = FUN_0024c300();
      bVar3 = ABS(fVar15 - (float)iVar6) < 0.001;
    }
code_r0x0022be54:
    bVar2 = true;
    if (!bVar3) {
      bVar2 = false;
    }
  }
LAB_0022be70:
  puVar5 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,5);
    *(bool *)(puVar5 + 2) = bVar2;
    puVar5[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar7 = *DAT_003bfae4;
    puVar12 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar7 | 4;
    DAT_003bfae4 = puVar12;
    piVar4 = DAT_003be8e0;
    iVar6 = DAT_003be8e0[1];
    if (iVar6 < *DAT_003be8e0) {
      *(uint **)(iVar6 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar4[1] = iVar6 + 1;
    }
    else {
      *puVar5 = uVar7 & 0xfffffffb;
    }
    *(bool *)(puVar5 + 2) = bVar2;
  }
  if (1 < *param_1) {
    iVar13 = 1;
    (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
    iVar6 = *param_1;
    do {
      iVar6 = iVar6 - iVar13;
      iVar13 = iVar13 + 1;
      iVar6 = *(int *)(iVar6 * 4 + param_1[2]);
      iVar1 = *(int *)(iVar6 + 4);
      (**(code **)(iVar1 + 0x14))(iVar6 + *(short *)(iVar1 + 0x10));
      iVar6 = *param_1;
    } while (iVar13 < 3);
    iVar13 = param_1[2];
LAB_0022bf7c:
    *(uint **)((iVar6 + -2) * 4 + iVar13) = puVar5;
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022bfb8 @ 0022bfb8 ====

void FUN_0022bfb8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  puVar11 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  puVar9 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  lVar6 = FUN_0021ada8();
  uVar5 = *puVar9;
  if (lVar6 == 7) {
    if (((int)uVar5 >> 4 & 1U) != 1) {
      iVar4 = *param_1;
LAB_0022c03c:
      if (1 < iVar4) {
        iVar12 = 1;
        iVar4 = *param_1;
        do {
          iVar4 = iVar4 - iVar12;
          iVar12 = iVar12 + 1;
          iVar4 = *(int *)(iVar4 * 4 + param_1[2]);
          iVar2 = *(int *)(iVar4 + 4);
          (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
          iVar4 = *param_1;
        } while (iVar12 < 3);
        *param_1 = iVar4 + -2;
      }
      iVar12 = DAT_0043df40;
      iVar4 = *param_1;
      *(int *)(iVar4 * 4 + param_1[2]) = DAT_0043df40;
      *param_1 = iVar4 + 1;
      iVar4 = *(int *)(iVar12 + 4);
      (**(code **)(iVar4 + 0xc))(iVar12 + *(short *)(iVar4 + 8));
      return;
    }
    if (((int)*puVar11 >> 4 & 1U) != 1) {
      iVar4 = *param_1;
      goto LAB_0022c03c;
    }
    uVar5 = *puVar9;
  }
  if ((uVar5 >> 0x19 == 1) || (bVar1 = false, uVar5 >> 0x19 == 0x2a)) {
    bVar1 = ((int)uVar5 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    uVar10 = *puVar11;
    if ((uVar10 >> 0x19 == 1) || (bVar1 = false, uVar10 >> 0x19 == 0x2a)) {
      bVar1 = ((int)uVar10 >> 4 & 1U) == 1;
    }
    if (bVar1) {
      if (uVar5 >> 0x19 != 1) {
        puVar9 = (uint *)puVar9[8];
      }
      if (uVar10 >> 0x19 != 1) {
        puVar11 = (uint *)puVar11[8];
      }
      uVar5 = strcmp(puVar9[2] + 8,puVar11[2] + 8);
      uVar5 = uVar5 >> 0x1f;
      goto LAB_0022c21c;
    }
  }
  uVar10 = 0;
  if (uVar5 >> 0x19 == 6) {
    uVar10 = (int)uVar5 >> 4 & 1;
  }
  if (uVar10 == 0) {
    uVar5 = 0;
    if (*puVar11 >> 0x19 == 6) {
      uVar5 = (int)*puVar11 >> 4 & 1;
    }
    if (uVar5 == 0) {
      lVar6 = FUN_0024c300(puVar11);
      lVar7 = FUN_0024c300(puVar9);
      uVar5 = (uint)(lVar7 < lVar6);
      goto LAB_0022c21c;
    }
  }
  fVar13 = (float)FUN_0024c410(puVar11);
  fVar14 = (float)FUN_0024c410(puVar9);
  uVar5 = 1;
  if (fVar13 <= fVar14) {
    uVar5 = 0;
  }
LAB_0022c21c:
  puVar11 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    uVar8 = Pool_Alloc(DAT_0043dee0,0xc);
    puVar11 = (uint *)uVar8;
    FUN_00386ec8(uVar8,5);
    *(bool *)(puVar11 + 2) = uVar5 != 0;
    puVar11[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar10 = *DAT_003bfae4;
    puVar9 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar10 | 4;
    DAT_003bfae4 = puVar9;
    piVar3 = DAT_003be8e0;
    iVar4 = DAT_003be8e0[1];
    if (iVar4 < *DAT_003be8e0) {
      *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar11;
      piVar3[1] = iVar4 + 1;
    }
    else {
      *puVar11 = uVar10 & 0xfffffffb;
    }
    *(bool *)(puVar11 + 2) = uVar5 != 0;
  }
  if (1 < *param_1) {
    iVar12 = 1;
    (**(code **)(puVar11[1] + 0xc))((int)puVar11 + (int)*(short *)(puVar11[1] + 8));
    iVar4 = *param_1;
    do {
      iVar4 = iVar4 - iVar12;
      iVar12 = iVar12 + 1;
      iVar4 = *(int *)(iVar4 * 4 + param_1[2]);
      iVar2 = *(int *)(iVar4 + 4);
      (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
      iVar4 = *param_1;
    } while (iVar12 < 3);
    *(uint **)((iVar4 + -2) * 4 + param_1[2]) = puVar11;
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022c368 @ 0022c368 ====

void FUN_0022c368(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)param_2[2];
  puVar3 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar3 + 1);
  if (puVar4 == (uint *)0x0) {
    puVar1 = (uint *)param_2[1];
  }
  else {
    uVar2 = 0;
    if ((*puVar4 >> 0x19) - 0xc < 8) {
      uVar2 = (int)*puVar4 >> 4 & 1;
    }
    if (uVar2 != 0) goto LAB_0022c400;
    puVar1 = (uint *)param_2[1];
  }
  uVar2 = 0;
  if ((*puVar1 >> 0x19) - 0xc < 8) {
    uVar2 = (int)*puVar1 >> 4 & 1;
  }
  puVar4 = (uint *)0x0;
  if (uVar2 != 0) {
    puVar4 = puVar1;
  }
LAB_0022c400:
  if (puVar4 != (uint *)0x0) {
    FUN_0023db58(puVar4,*puVar3);
    *(uint *)(puVar4[0x12] + 0x1c) = *(uint *)(puVar4[0x12] + 0x1c) & 0xfdffffff;
  }
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*param_1 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022c468 @ 0022c468 ====

void FUN_0022c468(undefined8 param_1,int *param_2)

{
  short sVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  char acStack_464 [1028];
  undefined1 auStack_60 [16];
  short *apsStack_50 [4];
  short *apsStack_40 [4];
  
  puVar4 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar4 + 2);
  lVar2 = FUN_00221050(param_1,*puVar4);
  if (lVar2 == 0) {
    strcpy(acStack_464 + 4,*puVar4);
    lVar2 = strlen(acStack_464 + 4);
    iVar3 = (int)lVar2;
    if ((((acStack_464[iVar3 + 3] == 'f') || (acStack_464[iVar3 + 3] == 'F')) &&
        ((acStack_464[iVar3 + 2] == 'w' || (acStack_464[iVar3 + 2] == 'W')))) &&
       ((acStack_464[iVar3 + 1] == 's' || (acStack_464[iVar3 + 1] == 'S')))) {
      if (acStack_464[iVar3] == '.') {
        acStack_464[iVar3] = '\0';
        String_ctor_cstr(auStack_60,puVar4[1]);
        String_ctor_cstr(apsStack_50,acStack_464 + 4);
        FUN_00244108(DAT_0043df80,apsStack_50,auStack_60);
        sVar1 = *apsStack_50[0];
        *apsStack_50[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) != 0) {
          return;
        }
        Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
        return;
      }
    }
    if (lVar2 == 0) {
      String_ctor_cstr(auStack_60,puVar4[1]);
      String_ctor_cstr(apsStack_40,0x40de10);
      FUN_00244108(DAT_0043df80,apsStack_40,auStack_60);
      sVar1 = *apsStack_40[0];
      *apsStack_40[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
      }
    }
  }
  else {
    FUN_00221098(param_1,*puVar4,puVar4[1]);
  }
  return;
}


// ==== FUN_0022c618 @ 0022c618 ====

void FUN_0022c618(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar1 + 1);
  FUN_002523c0(*puVar1,*(undefined4 *)(*param_1 * 4 + param_1[2] + -4));
  return;
}


// ==== FUN_0022c6a8 @ 0022c6a8 ====

void FUN_0022c6a8(undefined8 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  short *apsStack_40 [4];
  
  puVar5 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar5 + 1);
  if (*(char *)*puVar5 == '\0') {
    iVar3 = param_2[2];
    if (iVar3 == 0) {
      param_2[2] = 0;
      return;
    }
    (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
    param_2[2] = 0;
    return;
  }
  String_ctor_cstr(apsStack_40);
  pbVar4 = (byte *)*puVar5;
  if (*pbVar4 - 0x2e < 2) {
    iVar3 = param_2[1];
    if (*pbVar4 == 0x2e) {
      if (pbVar4[1] != 0x2e) {
        param_2[2] = iVar3;
        goto LAB_0022c7b4;
      }
      iVar2 = *(int *)(iVar3 + 0x44);
      if (*(int *)(iVar3 + 0x44) != 0) {
        do {
          iVar3 = iVar2;
          if (pbVar4[2] != 0x2e) {
            param_2[2] = iVar3;
            goto LAB_0022c7b4;
          }
          if (pbVar4[3] != 0x2e) {
            param_2[2] = iVar3;
            goto LAB_0022c7b4;
          }
          pbVar4 = pbVar4 + 2;
          iVar2 = *(int *)(iVar3 + 0x44);
        } while (*(int *)(iVar3 + 0x44) != 0);
        param_2[2] = iVar3;
        goto LAB_0022c7b4;
      }
    }
  }
  else {
    FUN_00253810(apsStack_40,0x40de18);
    iVar3 = FUN_0021bdb8(param_2[1],0,apsStack_40);
  }
  param_2[2] = iVar3;
LAB_0022c7b4:
  param_2[3] = 0;
  (**(code **)(*(int *)(iVar3 + 4) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 8));
  sVar1 = *apsStack_40[0];
  *apsStack_40[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
  }
  return;
}


// ==== FUN_0022c810 @ 0022c810 ====

void FUN_0022c810(undefined8 param_1,int *param_2)

{
  short sVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  short *apsStack_40 [4];
  
  puVar3 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar3 + 1);
  String_ctor_cstr(apsStack_40,*puVar3);
  puVar5 = (uint *)param_2[2];
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)param_2[1];
  }
  else {
    uVar4 = 0;
    if ((*puVar5 >> 0x19) - 0xc < 8) {
      uVar4 = (int)*puVar5 >> 4 & 1;
    }
    if (uVar4 == 0) {
      puVar5 = (uint *)param_2[1];
    }
  }
  lVar2 = FUN_00248640(*(int *)(puVar5[0x12] + 8) + 8,apsStack_40);
  if (-1 < lVar2) {
    FUN_0023db58(puVar5,lVar2);
    *(uint *)(puVar5[0x12] + 0x1c) = *(uint *)(puVar5[0x12] + 0x1c) & 0xfdffffff;
  }
  sVar1 = *apsStack_40[0];
  *apsStack_40[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
  }
  return;
}


// ==== FUN_0022c908 @ 0022c908 ====

void FUN_0022c908(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int aiStack_50 [4];
  
  piVar4 = (int *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(piVar4 + 1);
  piVar1 = *(int **)(*param_1 * 4 + param_1[2] + -4);
  if ((*piVar1 >> 4 & 1U) == 1) {
    FUN_0021e960(param_2[1],0,piVar1,aiStack_50);
    iVar2 = *piVar4;
    param_2[2] = aiStack_50[0];
    param_2[3] = iVar2;
    (**(code **)(*(int *)(aiStack_50[0] + 4) + 0xc))
              (aiStack_50[0] + *(short *)(*(int *)(aiStack_50[0] + 4) + 8));
  }
  else {
    param_2[2] = 0;
    *param_2 = *piVar4;
  }
  if (0 < *param_1) {
    iVar2 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar3 = *(int *)(iVar2 + 4);
    (**(code **)(iVar3 + 0x14))(iVar2 + *(short *)(iVar3 + 0x10));
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022ca00 @ 0022ca00 ====

void FUN_0022ca00(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = 0;
  piVar7 = (int *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(piVar7 + 2);
  if (0 < *piVar7) {
    iVar4 = piVar7[1];
    while( true ) {
      puVar3 = *(uint **)(iVar6 * 4 + iVar4);
      uVar5 = *puVar3 >> 0x19;
      uVar2 = 0;
      uVar1 = (int)*puVar3 >> 4;
      if (uVar5 == 8) {
        uVar2 = uVar1 & 1;
      }
      if (uVar2 == 0) {
        uVar2 = 0;
        if (uVar5 == 4) {
          uVar2 = uVar1 & 1;
        }
        if (uVar2 != 0) {
          puVar3 = (uint *)FUN_002523a8(puVar3[2]);
        }
      }
      else {
        puVar3 = *(uint **)(puVar3[2] * 4 + param_1[0xe]);
      }
      iVar4 = *param_1;
      iVar6 = iVar6 + 1;
      *(uint **)(iVar4 * 4 + param_1[2]) = puVar3;
      *param_1 = iVar4 + 1;
      (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
      if (*piVar7 <= iVar6) break;
      iVar4 = piVar7[1];
    }
  }
  return;
}


// ==== FUN_0022cb30 @ 0022cb30 ====

void FUN_0022cb30(undefined8 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  short *apsStack_b0 [4];
  short *apsStack_a0 [4];
  short *apsStack_90 [4];
  short *apsStack_80 [4];
  
  piVar13 = (int *)param_1;
  DAT_003bfaf8 = DAT_003bfaf8 + 2;
  puVar8 = *(uint **)(*piVar13 * 4 + piVar13[2] + -4);
  apsStack_b0[0] = &DAT_003bfaf8;
  apsStack_a0[0] = &DAT_003bfaf8;
  FUN_0024c6d0(*(undefined4 *)((*piVar13 + -1) * 4 + piVar13[2] + -4));
  lVar10 = FUN_00221050(param_1,apsStack_a0[0] + 4);
  if (lVar10 == 0) {
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    uVar3 = apsStack_a0[0][1];
    apsStack_90[0] = &DAT_003bfaf8;
    if (uVar3 == 0) {
LAB_0022cc6c:
      FUN_0024c6d0(puVar8,apsStack_b0);
      *apsStack_a0[0] = *apsStack_a0[0] + 1;
      sVar4 = *apsStack_90[0];
      *apsStack_90[0] = sVar4 + -1;
      if ((short)(sVar4 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
      }
      apsStack_90[0] = apsStack_a0[0];
      if (3 < (ushort)apsStack_a0[0][1]) {
        FUN_002533c8(apsStack_90,(ushort)apsStack_a0[0][1] - 4,4);
      }
      uVar11 = FUN_0021e420(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                            apsStack_b0,1,1,0);
      uVar7 = 0;
      if ((*(uint *)uVar11 >> 0x19) - 0xc < 8) {
        uVar7 = (int)*(uint *)uVar11 >> 4 & 1;
      }
      if (uVar7 == 0) {
        iVar9 = *piVar13;
      }
      else {
        FUN_0021e0b8(uVar11,apsStack_b0);
        iVar9 = *piVar13;
      }
      if (1 < iVar9) {
        iVar12 = 1;
        iVar9 = *piVar13;
        do {
          iVar9 = iVar9 - iVar12;
          iVar12 = iVar12 + 1;
          iVar9 = *(int *)(iVar9 * 4 + piVar13[2]);
          iVar6 = *(int *)(iVar9 + 4);
          (**(code **)(iVar6 + 0x14))(iVar9 + *(short *)(iVar6 + 0x10));
          iVar9 = *piVar13;
        } while (iVar12 < 3);
        *piVar13 = iVar9 + -2;
      }
      apsStack_80[0] = apsStack_b0[0];
      *apsStack_b0[0] = *apsStack_b0[0] + 1;
      FUN_00244108(DAT_0043df80,apsStack_90,apsStack_80);
      sVar4 = *apsStack_90[0];
      *apsStack_90[0] = sVar4 + -1;
      if ((short)(sVar4 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
      }
      sVar4 = *apsStack_a0[0];
      *apsStack_a0[0] = sVar4 + -1;
      if ((short)(sVar4 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
      }
      sVar4 = *apsStack_b0[0];
      *apsStack_b0[0] = sVar4 + -1;
      if ((short)(sVar4 + -1) != 0) {
        return;
      }
      Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
      return;
    }
    cVar2 = *(char *)((int)apsStack_a0[0] + uVar3 + 7);
    if ((cVar2 == 'f') || (cVar2 == 'F')) {
      cVar2 = *(char *)((int)apsStack_a0[0] + uVar3 + 6);
      if ((cVar2 == 'w') || (cVar2 == 'W')) {
        cVar2 = *(char *)((int)apsStack_a0[0] + uVar3 + 5);
        if ((cVar2 == 's') || (cVar2 == 'S')) {
          if (*(char *)((int)apsStack_a0[0] + uVar3 + 4) == '.') goto LAB_0022cc6c;
          uVar7 = *puVar8;
        }
        else {
          uVar7 = *puVar8;
        }
      }
      else {
        uVar7 = *puVar8;
      }
    }
    else {
      uVar7 = *puVar8;
    }
    if ((uVar7 >> 0x19 == 1) || (bVar1 = false, uVar7 >> 0x19 == 0x2a)) {
      bVar1 = ((int)uVar7 >> 4 & 1U) == 1;
    }
    if (bVar1) {
      if (uVar7 >> 0x19 != 1) {
        puVar8 = (uint *)puVar8[8];
      }
      puVar8 = (uint *)FUN_0021e420(param_1,*(undefined4 *)(param_2 + 4),
                                    *(undefined4 *)(param_2 + 8),puVar8 + 2,1,1,0);
      uVar5 = *(undefined4 *)(param_2 + 8);
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 8);
    }
    FUN_0021bb00(param_1,puVar8,uVar5,apsStack_a0);
    sVar4 = *apsStack_90[0];
    *apsStack_90[0] = sVar4 + -1;
    if ((short)(sVar4 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
    }
    iVar9 = *piVar13;
  }
  else {
    FUN_0024c6d0(puVar8,apsStack_b0);
    FUN_00221098(param_1,apsStack_a0[0] + 4,apsStack_b0[0] + 4);
    iVar9 = *piVar13;
  }
  if (1 < iVar9) {
    iVar12 = 1;
    iVar9 = *piVar13;
    do {
      iVar9 = iVar9 - iVar12;
      iVar12 = iVar12 + 1;
      iVar9 = *(int *)(iVar9 * 4 + piVar13[2]);
      iVar6 = *(int *)(iVar9 + 4);
      (**(code **)(iVar6 + 0x14))(iVar9 + *(short *)(iVar6 + 0x10));
      iVar9 = *piVar13;
    } while (iVar12 < 3);
    *piVar13 = iVar9 + -2;
  }
  sVar4 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar4 + -1;
  if ((short)(sVar4 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
  sVar4 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar4 + -1;
  if ((short)(sVar4 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  return;
}


// ==== FUN_0022cfe0 @ 0022cfe0 ====

void FUN_0022cfe0(undefined8 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  short *apsStack_70 [4];
  short *apsStack_60 [4];
  
  puVar4 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar4 + 6);
  *param_2 = (int)(puVar4 + 6) + puVar4[3];
  piVar6 = (int *)param_1;
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(piVar6 + 0xd);
  String_ctor_cstr(apsStack_70,*puVar4);
  iVar2 = param_2[1];
  uVar3 = FUN_0024fa38(DAT_0043dee4,0x34);
  uVar3 = FUN_00251fe0(uVar3,piVar6[0xc],puVar4,iVar2);
  if (*(char *)*puVar4 == '\0') {
    iVar2 = *piVar6;
    iVar5 = (int)uVar3;
    *(int *)(iVar2 * 4 + piVar6[2]) = iVar5;
    *piVar6 = iVar2 + 1;
    (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
  }
  else {
    String_ctor_cstr(apsStack_60);
    *apsStack_60[0] = *apsStack_60[0] + 1;
    sVar1 = *apsStack_70[0];
    *apsStack_70[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
    }
    apsStack_70[0] = apsStack_60[0];
    sVar1 = *apsStack_60[0];
    *apsStack_60[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
    FUN_0021c268(param_1,param_2[1],param_2[2],apsStack_70,uVar3,1,1,0);
  }
  sVar1 = *apsStack_70[0];
  *apsStack_70[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  return;
}


// ==== FUN_0022d198 @ 0022d198 ====

void FUN_0022d198(undefined8 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  short *apsStack_60 [4];
  
  puVar4 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar4 + 7);
  *param_2 = (int)(puVar4 + 7) + puVar4[4];
  piVar6 = (int *)param_1;
  *(undefined8 *)(puVar4 + 5) = *(undefined8 *)(piVar6 + 0xd);
  iVar2 = param_2[1];
  uVar3 = FUN_0024fa38(DAT_0043dee4,0x34);
  uVar3 = FUN_00252088(uVar3,piVar6[0xc],puVar4,iVar2);
  if (*(char *)*puVar4 == '\0') {
    iVar2 = *piVar6;
    iVar5 = (int)uVar3;
    *(int *)(iVar2 * 4 + piVar6[2]) = iVar5;
    *piVar6 = iVar2 + 1;
    (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
  }
  else {
    String_ctor_cstr(apsStack_60);
    FUN_0021c268(param_1,param_2[1],param_2[2],apsStack_60,uVar3,1,1,0);
    sVar1 = *apsStack_60[0];
    *apsStack_60[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
  }
  return;
}


// ==== FUN_0022d2d8 @ 0022d2d8 ====

void FUN_0022d2d8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(piVar4 + 1);
  lVar3 = FUN_0024c4f0(*(undefined4 *)(*param_1 * 4 + param_1[2] + -4));
  if (lVar3 == 1) {
    *param_2 = *param_2 + *piVar4;
    iVar2 = *param_1;
  }
  else {
    iVar2 = *param_1;
  }
  if (0 < iVar2) {
    iVar2 = *(int *)(iVar2 * 4 + param_1[2] + -4);
    iVar1 = *(int *)(iVar2 + 4);
    (**(code **)(iVar1 + 0x14))(iVar2 + *(short *)(iVar1 + 0x10));
    *param_1 = *param_1 + -1;
  }
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*param_1 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022d3c0 @ 0022d3c0 ====

void FUN_0022d3c0(int *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  short *apsStack_60 [4];
  int aiStack_50 [4];
  
  bVar1 = false;
  puVar6 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  uVar5 = *puVar6 >> 0x19;
  lVar7 = -1;
  if ((uVar5 == 1) || (uVar5 == 0x2a)) {
    bVar1 = ((int)*puVar6 >> 4 & 1U) == 1;
  }
  if (bVar1) {
    apsStack_60[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    if (*puVar6 >> 0x19 != 1) {
      puVar6 = (uint *)puVar6[8];
    }
    FUN_0021bee8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),puVar6 + 2,aiStack_50,
                 apsStack_60);
    lVar7 = FUN_00248640(*(int *)(*(int *)(aiStack_50[0] + 0x48) + 8) + 8,apsStack_60);
    sVar2 = *apsStack_60[0];
    *apsStack_60[0] = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
      iVar4 = *param_1;
      goto LAB_0022d500;
    }
  }
  else {
    uVar5 = 0;
    if (*puVar6 >> 0x19 == 7) {
      uVar5 = (int)*puVar6 >> 4 & 1;
    }
    if (uVar5 == 0) {
      iVar4 = *param_1;
      goto LAB_0022d500;
    }
    lVar7 = FUN_0024c300(puVar6);
  }
  iVar4 = *param_1;
LAB_0022d500:
  if (0 < iVar4) {
    iVar4 = *(int *)(iVar4 * 4 + param_1[2] + -4);
    iVar3 = *(int *)(iVar4 + 4);
    (**(code **)(iVar3 + 0x14))(iVar4 + *(short *)(iVar3 + 0x10));
    *param_1 = *param_1 + -1;
  }
  if (lVar7 != -1) {
    FUN_00248438(*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x48) + 8) + 8,*(int *)(param_2 + 4),
                 lVar7);
  }
  return;
}


// ==== FUN_0022d570 @ 0022d570 ====

void FUN_0022d570(int *param_1,int *param_2)

{
  bool bVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  short *apsStack_a0 [4];
  uint *apuStack_90 [4];
  
  puVar12 = (uint *)param_2[2];
  piVar13 = (int *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(piVar13 + 1);
  puVar10 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  if (puVar12 == (uint *)0x0) {
    puVar3 = (uint *)param_2[1];
LAB_0022d610:
    uVar8 = 0;
    if ((*puVar3 >> 0x19) - 0xc < 8) {
      uVar8 = (int)*puVar3 >> 4 & 1;
    }
    puVar12 = (uint *)0x0;
    if (uVar8 != 0) {
      puVar12 = puVar3;
    }
  }
  else {
    uVar8 = 0;
    if ((*puVar12 >> 0x19) - 0xc < 8) {
      uVar8 = (int)*puVar12 >> 4 & 1;
    }
    if (uVar8 == 0) {
      puVar3 = (uint *)param_2[1];
      goto LAB_0022d610;
    }
  }
  uVar8 = *puVar10;
  lVar11 = -1;
  if ((uVar8 >> 0x19 == 1) || (bVar1 = false, uVar8 >> 0x19 == 0x2a)) {
    bVar1 = ((int)uVar8 >> 4 & 1U) == 1;
  }
  if (!bVar1) {
    uVar9 = 0;
    if (uVar8 >> 0x19 == 7) {
      uVar9 = (int)uVar8 >> 4 & 1;
    }
    if (uVar9 != 0) {
      lVar11 = FUN_0024c300(puVar10);
    }
    goto LAB_0022d7e8;
  }
  apsStack_a0[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  if (*puVar10 >> 0x19 != 1) {
    puVar10 = (uint *)puVar10[8];
  }
  FUN_0021bee8(param_2[1],param_2[2],puVar10 + 2,apuStack_90,apsStack_a0);
  puVar10 = apuStack_90[0];
  uVar8 = 0;
  if ((*apuStack_90[0] >> 0x19) - 0xc < 8) {
    uVar8 = (int)*apuStack_90[0] >> 4 & 1;
  }
  if (uVar8 != 0) {
    lVar7 = FUN_00387080(apuStack_90[0]);
    bVar1 = false;
    if (lVar7 == 0xd) {
      lVar7 = FUN_003871c0(puVar10);
      bVar1 = lVar7 == 0;
    }
    if (bVar1) {
LAB_0022d75c:
      bVar6 = true;
    }
    else {
      lVar7 = FUN_00387080(puVar10);
      bVar1 = false;
      if (lVar7 == 0x12) {
        lVar7 = FUN_003871c0(puVar10);
        bVar1 = lVar7 == 0;
      }
      bVar6 = false;
      if (bVar1) goto LAB_0022d75c;
    }
    if (bVar6) {
      lVar11 = FUN_00248640(*(int *)(apuStack_90[0][0x12] + 8) + 8,apsStack_a0);
    }
  }
  sVar2 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar2 + -1;
  if ((short)(sVar2 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
LAB_0022d7e8:
  if (lVar11 != -1) {
    FUN_0023db58(puVar12,lVar11);
    *(uint *)(puVar12[0x12] + 0x1c) =
         *(uint *)(puVar12[0x12] + 0x1c) & 0xfdffffff | (uint)(*piVar13 != 0) << 0x19;
  }
  if (0 < *param_1) {
    iVar4 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar5 = *(int *)(iVar4 + 4);
    (**(code **)(iVar5 + 0x14))(iVar4 + *(short *)(iVar5 + 0x10));
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_0022d8e8 @ 0022d8e8 ====

void FUN_0022d8e8(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar7 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar9 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar7 = (uint *)FUN_0024ad08(uVar9);
  }
  else {
    uVar2 = *DAT_003bfb10;
    puVar6 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar2 | 4;
    DAT_003bfb10 = puVar6;
    piVar5 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar5[1] = iVar3 + 1;
    }
    else {
      *puVar7 = uVar2 & 0xfffffffb;
    }
    lVar8 = FUN_003872a8(puVar7 + 2);
    if (lVar8 == 0) {
      FUN_002530e8(puVar7 + 2,0);
    }
  }
  *DAT_0043dea8 = *DAT_0043dea8 + 1;
  psVar4 = (short *)puVar7[2];
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  puVar7[2] = (uint)DAT_0043dea8;
  iVar3 = *param_1;
  *(uint **)(iVar3 * 4 + param_1[2]) = puVar7;
  *param_1 = iVar3 + 1;
  (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
  return;
}


// ==== FUN_0022da38 @ 0022da38 ====

void FUN_0022da38(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar7 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar9 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar7 = (uint *)FUN_0024ad08(uVar9);
  }
  else {
    uVar2 = *DAT_003bfb10;
    puVar6 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar2 | 4;
    DAT_003bfb10 = puVar6;
    piVar5 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar5[1] = iVar3 + 1;
    }
    else {
      *puVar7 = uVar2 & 0xfffffffb;
    }
    lVar8 = FUN_003872a8(puVar7 + 2);
    if (lVar8 == 0) {
      FUN_002530e8(puVar7 + 2,0);
    }
  }
  *DAT_0043dc34 = *DAT_0043dc34 + 1;
  psVar4 = (short *)puVar7[2];
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  puVar7[2] = (uint)DAT_0043dc34;
  iVar3 = *param_1;
  *(uint **)(iVar3 * 4 + param_1[2]) = puVar7;
  *param_1 = iVar3 + 1;
  (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
  return;
}


// ==== FUN_0022db88 @ 0022db88 ====

void FUN_0022db88(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,7);
    puVar5[2] = 0;
    puVar5[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar1 = *DAT_003bfaec;
    puVar4 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar1 | 4;
    DAT_003bfaec = puVar4;
    piVar3 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar3[1] = iVar2 + 1;
    }
    else {
      *puVar5 = uVar1 & 0xfffffffb;
    }
    puVar5[2] = 0;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar5;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
  return;
}


// ==== FUN_0022dc80 @ 0022dc80 ====

void FUN_0022dc80(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,7);
    puVar5[2] = 1;
    puVar5[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar1 = *DAT_003bfaec;
    puVar4 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar1 | 4;
    DAT_003bfaec = puVar4;
    piVar3 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar3[1] = iVar2 + 1;
    }
    else {
      *puVar5 = uVar1 & 0xfffffffb;
    }
    puVar5[2] = 1;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar5;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
  return;
}


// ==== FUN_0022dd88 @ 0022dd88 ====

void FUN_0022dd88(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,5);
    *(undefined1 *)(puVar5 + 2) = 1;
    puVar5[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar1 = *DAT_003bfae4;
    puVar4 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar1 | 4;
    DAT_003bfae4 = puVar4;
    piVar3 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar3[1] = iVar2 + 1;
    }
    else {
      *puVar5 = uVar1 & 0xfffffffb;
    }
    *(undefined1 *)(puVar5 + 2) = 1;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar5;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
  return;
}


// ==== FUN_0022de90 @ 0022de90 ====

void FUN_0022de90(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,5);
    *(undefined1 *)(puVar5 + 2) = 0;
    puVar5[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar1 = *DAT_003bfae4;
    puVar4 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar1 | 4;
    DAT_003bfae4 = puVar4;
    piVar3 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar3[1] = iVar2 + 1;
    }
    else {
      *puVar5 = uVar1 & 0xfffffffb;
    }
    *(undefined1 *)(puVar5 + 2) = 0;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar5;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
  return;
}


// ==== FUN_0022df90 @ 0022df90 ====

void FUN_0022df90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0043df40;
  iVar1 = *param_1;
  *(int *)(iVar1 * 4 + param_1[2]) = DAT_0043df40;
  *param_1 = iVar1 + 1;
  iVar1 = *(int *)(iVar2 + 4);
  (**(code **)(iVar1 + 0xc))(iVar2 + *(short *)(iVar1 + 8));
  return;
}


// ==== FUN_0022dfe0 @ 0022dfe0 ====

void FUN_0022dfe0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0043df40;
  iVar1 = *param_1;
  *(int *)(iVar1 * 4 + param_1[2]) = DAT_0043df40;
  *param_1 = iVar1 + 1;
  iVar1 = *(int *)(iVar2 + 4);
  (**(code **)(iVar1 + 0xc))(iVar2 + *(short *)(iVar1 + 8));
  return;
}


// ==== FUN_0022e030 @ 0022e030 ====

void FUN_0022e030(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00225030();
  if (0 < *param_1) {
    iVar1 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar2 = *(int *)(iVar1 + 4);
    (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
    *param_1 = *param_1 + -1;
  }
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*param_1 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022e0b8 @ 0022e0b8 ====

void FUN_0022e0b8(undefined8 param_1,undefined8 param_2)

{
  FUN_00225030();
  FUN_00223678(param_1,param_2);
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*(int *)param_1 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022e120 @ 0022e120 ====

void FUN_0022e120(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0022a440();
  if (0 < *param_1) {
    iVar1 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar2 = *(int *)(iVar1 + 4);
    (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
    *param_1 = *param_1 + -1;
  }
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*param_1 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022e1a8 @ 0022e1a8 ====

void FUN_0022e1a8(undefined8 param_1,undefined8 param_2)

{
  FUN_0022a440();
  FUN_00223678(param_1,param_2);
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*(int *)param_1 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022e210 @ 0022e210 ====

void FUN_0022e210(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_0021e420(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),0x43dea8,1,
                       1,0);
  piVar3 = (int *)param_1;
  iVar1 = *piVar3;
  *(int *)(iVar1 * 4 + piVar3[2]) = iVar2;
  *piVar3 = iVar1 + 1;
  (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
  return;
}


// ==== FUN_0022e288 @ 0022e288 ====

void FUN_0022e288(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_003bfabc;
  iVar1 = *param_1;
  *(int *)(iVar1 * 4 + param_1[2]) = DAT_003bfabc;
  *param_1 = iVar1 + 1;
  iVar1 = *(int *)(iVar2 + 4);
  (**(code **)(iVar1 + 0xc))(iVar2 + *(short *)(iVar1 + 8));
  return;
}


// ==== FUN_0022e2d8 @ 0022e2d8 ====

void FUN_0022e2d8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  
  puVar4 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar4 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar4,7);
    puVar4[2] = 0;
    puVar4[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar1 = *DAT_003bfaec;
    puVar3 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar1 | 4;
    DAT_003bfaec = puVar3;
    piVar5 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar4;
      piVar5[1] = iVar2 + 1;
    }
    else {
      *puVar4 = uVar1 & 0xfffffffb;
    }
    puVar4[2] = 0;
  }
  piVar5 = (int *)param_1;
  iVar2 = *piVar5;
  *(uint **)(iVar2 * 4 + piVar5[2]) = puVar4;
  *piVar5 = iVar2 + 1;
  (**(code **)(puVar4[1] + 0xc))((int)puVar4 + (int)*(short *)(puVar4[1] + 8));
  FUN_00223678(param_1,param_2);
  return;
}


// ==== FUN_0022e3e8 @ 0022e3e8 ====

void FUN_0022e3e8(int *param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  short *apsStack_60 [4];
  
  puVar11 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar11 + 1);
  puVar7 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar9 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar7 = (uint *)FUN_0024ad08(uVar9);
    uVar10 = *puVar11;
  }
  else {
    uVar2 = *DAT_003bfb10;
    puVar6 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar2 | 4;
    DAT_003bfb10 = puVar6;
    piVar5 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar5[1] = iVar3 + 1;
    }
    else {
      *puVar7 = uVar2 & 0xfffffffb;
    }
    lVar8 = FUN_003872a8(puVar7 + 2);
    if (lVar8 == 0) {
      FUN_002530e8(puVar7 + 2,0);
      uVar10 = *puVar11;
    }
    else {
      uVar10 = *puVar11;
    }
  }
  String_ctor_cstr(apsStack_60,uVar10);
  *apsStack_60[0] = *apsStack_60[0] + 1;
  psVar4 = (short *)puVar7[2];
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  puVar7[2] = (uint)apsStack_60[0];
  sVar1 = *apsStack_60[0];
  *apsStack_60[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  iVar3 = *param_1;
  *(uint **)(iVar3 * 4 + param_1[2]) = puVar7;
  *param_1 = iVar3 + 1;
  (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
  return;
}


// ==== FUN_0022e590 @ 0022e590 ====

void FUN_0022e590(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  iVar2 = *param_1;
  iVar3 = *(int *)((uint)bVar1 * 4 + param_1[0xe]);
  *(int *)(iVar2 * 4 + param_1[2]) = iVar3;
  *param_1 = iVar2 + 1;
  (**(code **)(*(int *)(iVar3 + 4) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 8));
  return;
}


// ==== FUN_0022e5f8 @ 0022e5f8 ====

void FUN_0022e5f8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)*param_2;
  *param_2 = (int)((ushort *)*param_2 + 1);
  iVar1 = *param_1;
  iVar2 = *(int *)((uint)uVar3 * 4 + param_1[0xe]);
  *(int *)(iVar1 * 4 + param_1[2]) = iVar2;
  *param_1 = iVar1 + 1;
  (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
  return;
}


// ==== FUN_0022e670 @ 0022e670 ====

void FUN_0022e670(undefined8 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  short *apsStack_60 [4];
  
  puVar5 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar5 + 1);
  String_ctor_cstr(apsStack_60,*puVar5);
  *apsStack_60[0] = *apsStack_60[0] + 1;
  psVar3 = DAT_0043db20;
  sVar1 = *DAT_0043db20;
  *DAT_0043db20 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
  }
  DAT_0043db20 = apsStack_60[0];
  sVar1 = *apsStack_60[0];
  *apsStack_60[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  iVar4 = FUN_0021e420(param_1,param_2[1],param_2[2],0x43db20,1,1,0);
  piVar6 = (int *)param_1;
  iVar2 = *piVar6;
  *(int *)(iVar2 * 4 + piVar6[2]) = iVar4;
  *piVar6 = iVar2 + 1;
  (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
  return;
}


// ==== FUN_0022e798 @ 0022e798 ====

void FUN_0022e798(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  short *apsStack_70 [4];
  
  puVar11 = (undefined4 *)(*(int *)param_2 + 3U & 0xfffffffc);
  *(int *)param_2 = (int)(puVar11 + 1);
  puVar6 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar8 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar6 = (uint *)FUN_0024ad08(uVar8);
    uVar9 = *puVar11;
  }
  else {
    uVar2 = *DAT_003bfb10;
    puVar5 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar2 | 4;
    DAT_003bfb10 = puVar5;
    piVar10 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar10[1] = iVar3 + 1;
    }
    else {
      *puVar6 = uVar2 & 0xfffffffb;
    }
    lVar7 = FUN_003872a8(puVar6 + 2);
    if (lVar7 == 0) {
      FUN_002530e8(puVar6 + 2,0);
      uVar9 = *puVar11;
    }
    else {
      uVar9 = *puVar11;
    }
  }
  String_ctor_cstr(apsStack_70,uVar9);
  *apsStack_70[0] = *apsStack_70[0] + 1;
  psVar4 = (short *)puVar6[2];
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  puVar6[2] = (uint)apsStack_70[0];
  sVar1 = *apsStack_70[0];
  *apsStack_70[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  piVar10 = (int *)param_1;
  iVar3 = *piVar10;
  *(uint **)(iVar3 * 4 + piVar10[2]) = puVar6;
  *piVar10 = iVar3 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  FUN_002297c0(param_1,param_2);
  return;
}


// ==== FUN_0022e958 @ 0022e958 ====

void FUN_0022e958(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  short *apsStack_70 [4];
  
  puVar11 = (undefined4 *)(*(int *)param_2 + 3U & 0xfffffffc);
  *(int *)param_2 = (int)(puVar11 + 1);
  puVar6 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar8 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar6 = (uint *)FUN_0024ad08(uVar8);
    uVar9 = *puVar11;
  }
  else {
    uVar2 = *DAT_003bfb10;
    puVar5 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar2 | 4;
    DAT_003bfb10 = puVar5;
    piVar10 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar10[1] = iVar3 + 1;
    }
    else {
      *puVar6 = uVar2 & 0xfffffffb;
    }
    lVar7 = FUN_003872a8(puVar6 + 2);
    if (lVar7 == 0) {
      FUN_002530e8(puVar6 + 2,0);
      uVar9 = *puVar11;
    }
    else {
      uVar9 = *puVar11;
    }
  }
  String_ctor_cstr(apsStack_70,uVar9);
  *apsStack_70[0] = *apsStack_70[0] + 1;
  psVar4 = (short *)puVar6[2];
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  puVar6[2] = (uint)apsStack_70[0];
  sVar1 = *apsStack_70[0];
  *apsStack_70[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  piVar10 = (int *)param_1;
  iVar3 = *piVar10;
  *(uint **)(iVar3 * 4 + piVar10[2]) = puVar6;
  *piVar10 = iVar3 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  FUN_00223678(param_1,param_2);
  return;
}


// ==== FUN_0022eb18 @ 0022eb18 ====

void FUN_0022eb18(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  short *apsStack_70 [4];
  
  puVar11 = (undefined4 *)(*(int *)param_2 + 3U & 0xfffffffc);
  *(int *)param_2 = (int)(puVar11 + 1);
  puVar6 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar8 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar6 = (uint *)FUN_0024ad08(uVar8);
    uVar9 = *puVar11;
  }
  else {
    uVar2 = *DAT_003bfb10;
    puVar5 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar2 | 4;
    DAT_003bfb10 = puVar5;
    piVar10 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar10[1] = iVar3 + 1;
    }
    else {
      *puVar6 = uVar2 & 0xfffffffb;
    }
    lVar7 = FUN_003872a8(puVar6 + 2);
    if (lVar7 == 0) {
      FUN_002530e8(puVar6 + 2,0);
      uVar9 = *puVar11;
    }
    else {
      uVar9 = *puVar11;
    }
  }
  String_ctor_cstr(apsStack_70,uVar9);
  *apsStack_70[0] = *apsStack_70[0] + 1;
  psVar4 = (short *)puVar6[2];
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  puVar6[2] = (uint)apsStack_70[0];
  sVar1 = *apsStack_70[0];
  *apsStack_70[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  piVar10 = (int *)param_1;
  iVar3 = *piVar10;
  *(uint **)(iVar3 * 4 + piVar10[2]) = puVar6;
  *piVar10 = iVar3 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  FUN_00229bb0(param_1,param_2);
  return;
}


// ==== FUN_0022ecd8 @ 0022ecd8 ====

void FUN_0022ecd8(undefined8 param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  piVar5 = (int *)param_1;
  puVar4 = *(uint **)((uint)bVar1 * 4 + piVar5[0xe]);
  if (*puVar4 >> 0x19 != 1) {
    puVar4 = (uint *)puVar4[8];
  }
  iVar3 = FUN_0021e420(param_1,param_2[1],param_2[2],puVar4 + 2,1,1,0);
  iVar2 = *piVar5;
  *(int *)(iVar2 * 4 + piVar5[2]) = iVar3;
  *piVar5 = iVar2 + 1;
  (**(code **)(*(int *)(iVar3 + 4) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 8));
  return;
}


// ==== FUN_0022ed80 @ 0022ed80 ====

void FUN_0022ed80(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  pbVar2 = (byte *)*(undefined4 *)param_2;
  bVar1 = *pbVar2;
  *(undefined4 *)param_2 = pbVar2 + 1;
  piVar5 = (int *)param_1;
  iVar3 = *piVar5;
  iVar4 = *(int *)((uint)bVar1 * 4 + piVar5[0xe]);
  *(int *)(iVar3 * 4 + piVar5[2]) = iVar4;
  *piVar5 = iVar3 + 1;
  (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
  FUN_002297c0(param_1,param_2);
  return;
}


// ==== FUN_0022ee08 @ 0022ee08 ====

void FUN_0022ee08(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  pbVar2 = (byte *)*(undefined4 *)param_2;
  bVar1 = *pbVar2;
  *(undefined4 *)param_2 = pbVar2 + 1;
  piVar5 = (int *)param_1;
  iVar3 = *piVar5;
  iVar4 = *(int *)((uint)bVar1 * 4 + piVar5[0xe]);
  *(int *)(iVar3 * 4 + piVar5[2]) = iVar4;
  *piVar5 = iVar3 + 1;
  (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
  FUN_00225030(param_1,param_2);
  if (0 < *piVar5) {
    iVar3 = *(int *)(*piVar5 * 4 + piVar5[2] + -4);
    iVar4 = *(int *)(iVar3 + 4);
    (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
    *piVar5 = *piVar5 + -1;
  }
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*piVar5 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022eef0 @ 0022eef0 ====

void FUN_0022eef0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  pbVar2 = (byte *)*(undefined4 *)param_2;
  bVar1 = *pbVar2;
  *(undefined4 *)param_2 = pbVar2 + 1;
  piVar5 = (int *)param_1;
  iVar3 = *piVar5;
  iVar4 = *(int *)((uint)bVar1 * 4 + piVar5[0xe]);
  *(int *)(iVar3 * 4 + piVar5[2]) = iVar4;
  *piVar5 = iVar3 + 1;
  (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
  FUN_00225030(param_1,param_2);
  FUN_00223678(param_1,param_2);
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*piVar5 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022efb0 @ 0022efb0 ====

void FUN_0022efb0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  pbVar2 = (byte *)*(undefined4 *)param_2;
  bVar1 = *pbVar2;
  *(undefined4 *)param_2 = pbVar2 + 1;
  piVar5 = (int *)param_1;
  iVar3 = *piVar5;
  iVar4 = *(int *)((uint)bVar1 * 4 + piVar5[0xe]);
  *(int *)(iVar3 * 4 + piVar5[2]) = iVar4;
  *piVar5 = iVar3 + 1;
  (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
  FUN_0022a440(param_1,param_2);
  if (0 < *piVar5) {
    iVar3 = *(int *)(*piVar5 * 4 + piVar5[2] + -4);
    iVar4 = *(int *)(iVar3 + 4);
    (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
    *piVar5 = *piVar5 + -1;
  }
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*piVar5 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022f098 @ 0022f098 ====

void FUN_0022f098(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  pbVar2 = (byte *)*(undefined4 *)param_2;
  bVar1 = *pbVar2;
  *(undefined4 *)param_2 = pbVar2 + 1;
  piVar5 = (int *)param_1;
  iVar3 = *piVar5;
  iVar4 = *(int *)((uint)bVar1 * 4 + piVar5[0xe]);
  *(int *)(iVar3 * 4 + piVar5[2]) = iVar4;
  *piVar5 = iVar3 + 1;
  (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
  FUN_0022a440(param_1,param_2);
  FUN_00223678(param_1,param_2);
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*piVar5 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022f158 @ 0022f158 ====

void FUN_0022f158(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = *(uint *)*param_2;
  *param_2 = (int)((uint *)*param_2 + 1);
  puVar6 = DAT_003bfae8;
  if (DAT_003bfae8 == (uint *)0x0) {
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,6);
    puVar6[2] = uVar3;
    puVar6[1] = (uint)&DAT_003e2098;
  }
  else {
    uVar1 = *DAT_003bfae8;
    puVar5 = (uint *)DAT_003bfae8[2];
    *DAT_003bfae8 = uVar1 | 4;
    DAT_003bfae8 = puVar5;
    piVar4 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar4[1] = iVar2 + 1;
    }
    else {
      *puVar6 = uVar1 & 0xfffffffb;
    }
    puVar6[2] = uVar3;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_0022f2d0 @ 0022f2d0 ====

void FUN_0022f2d0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  cVar1 = *(char *)*param_2;
  *param_2 = (char *)*param_2 + 1;
  puVar6 = DAT_003bfaec;
  uVar7 = (uint)cVar1;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,7);
    puVar6[2] = uVar7;
    puVar6[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar2 = *DAT_003bfaec;
    puVar5 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar2 | 4;
    DAT_003bfaec = puVar5;
    piVar4 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar4[1] = iVar3 + 1;
    }
    else {
      *puVar6 = uVar2 & 0xfffffffb;
    }
    puVar6[2] = uVar7;
  }
  iVar3 = *param_1;
  *(uint **)(iVar3 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar3 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_0022f3e0 @ 0022f3e0 ====

void FUN_0022f3e0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  sVar3 = *(short *)*param_2;
  *param_2 = (int)((short *)*param_2 + 1);
  puVar6 = DAT_003bfaec;
  uVar7 = (uint)sVar3;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,7);
    puVar6[2] = uVar7;
    puVar6[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar1 = *DAT_003bfaec;
    puVar5 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar1 | 4;
    DAT_003bfaec = puVar5;
    piVar4 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar4[1] = iVar2 + 1;
    }
    else {
      *puVar6 = uVar1 & 0xfffffffb;
    }
    puVar6[2] = uVar7;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_0022f508 @ 0022f508 ====

void FUN_0022f508(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = *(uint *)*param_2;
  *param_2 = (int)((uint *)*param_2 + 1);
  puVar6 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,7);
    puVar6[2] = uVar3;
    puVar6[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar1 = *DAT_003bfaec;
    puVar5 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar1 | 4;
    DAT_003bfaec = puVar5;
    piVar4 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar4[1] = iVar2 + 1;
    }
    else {
      *puVar6 = uVar1 & 0xfffffffb;
    }
    puVar6[2] = uVar3;
  }
  iVar2 = *param_1;
  *(uint **)(iVar2 * 4 + param_1[2]) = puVar6;
  *param_1 = iVar2 + 1;
  (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
  return;
}


// ==== FUN_0022f648 @ 0022f648 ====

void FUN_0022f648(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(piVar4 + 1);
  lVar3 = FUN_0024c4f0(*(undefined4 *)(*param_1 * 4 + param_1[2] + -4));
  if (lVar3 == 0) {
    *param_2 = *param_2 + *piVar4;
    iVar2 = *param_1;
  }
  else {
    iVar2 = *param_1;
  }
  if (0 < iVar2) {
    iVar2 = *(int *)(iVar2 * 4 + param_1[2] + -4);
    iVar1 = *(int *)(iVar2 + 4);
    (**(code **)(iVar1 + 0x14))(iVar2 + *(short *)(iVar1 + 0x10));
    *param_1 = *param_1 + -1;
  }
  if ((*(int *)(DAT_003be8e0 + 4) != 0) && (*param_1 == 0)) {
    FUN_00252b10();
  }
  return;
}


// ==== FUN_0022f728 @ 0022f728 ====

void FUN_0022f728(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  
  uVar1 = *(uint *)(*param_1 * 4 + param_1[2] + -4);
  puVar2 = *(uint **)((*param_1 + -1) * 4 + param_1[2] + -4);
  lVar7 = (**(code **)(*(int *)(uVar1 + 4) + 0x2c))
                    (uVar1 + (int)*(short *)(*(int *)(uVar1 + 4) + 0x28));
  if (lVar7 == 0) {
    iVar6 = *param_1;
  }
  else {
    uVar8 = 0;
    if ((*puVar2 >> 0x19) - 0x2b < 3) {
      uVar8 = (int)*puVar2 >> 4 & 1;
    }
    if (uVar8 == 0) {
      iVar6 = *param_1;
    }
    else {
      iVar6 = (**(code **)(*(int *)(uVar1 + 4) + 0x24))
                        (uVar1 + (int)*(short *)(*(int *)(uVar1 + 4) + 0x20));
      iVar9 = (**(code **)(puVar2[1] + 0x24))((int)puVar2 + (int)*(short *)(puVar2[1] + 0x20));
      puVar4 = *(uint **)(iVar6 + 0xc);
      puVar5 = *(uint **)(iVar9 + 0xc);
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)FUN_0024fa38(DAT_0043dee4,0x20);
        FUN_00386ec8(puVar4,0x1c);
        puVar4[1] = (uint)&DAT_003e1f88;
        Pow2Container_ctor(puVar4 + 2,8);
        puVar4[1] = (uint)&DAT_003e1f00;
        *puVar4 = *puVar4 & 0xffffffdf;
        puVar4[7] = 0;
        if (puVar4 != (uint *)0x0) {
          (*(code *)PTR_FUN_003e1f0c)((int)puVar4 + (int)DAT_003e1f08);
        }
        iVar3 = *(int *)(iVar6 + 0xc);
        if (iVar3 == 0) {
          *(uint **)(iVar6 + 0xc) = puVar4;
        }
        else {
          (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
          *(uint **)(iVar6 + 0xc) = puVar4;
        }
      }
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)FUN_0024fa38(DAT_0043dee4,0x20);
        FUN_00386ec8(puVar5,0x1c);
        puVar5[1] = (uint)&DAT_003e1f88;
        Pow2Container_ctor(puVar5 + 2,8);
        puVar5[1] = (uint)&DAT_003e1f00;
        *puVar5 = *puVar5 & 0xffffffdf;
        puVar5[7] = 0;
        if (puVar5 != (uint *)0x0) {
          (*(code *)PTR_FUN_003e1f0c)((int)puVar5 + (int)DAT_003e1f08);
        }
        iVar6 = *(int *)(iVar9 + 0xc);
        if (iVar6 == 0) {
          *(uint **)(iVar9 + 0xc) = puVar5;
        }
        else {
          (**(code **)(*(int *)(iVar6 + 4) + 0x14))(iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x10));
          *(uint **)(iVar9 + 0xc) = puVar5;
        }
        uVar8 = puVar5[7];
      }
      else {
        uVar8 = puVar5[7];
      }
      puVar5[7] = uVar1;
      if (uVar1 != 0) {
        (**(code **)(*(int *)(uVar1 + 4) + 0xc))(uVar1 + (int)*(short *)(*(int *)(uVar1 + 4) + 8));
      }
      if (uVar8 == 0) {
        iVar6 = *(int *)(uVar1 + 4);
      }
      else {
        (**(code **)(*(int *)(uVar8 + 4) + 0x14))
                  (uVar8 + (int)*(short *)(*(int *)(uVar8 + 4) + 0x10));
        iVar6 = *(int *)(uVar1 + 4);
      }
      (**(code **)(iVar6 + 0x3c))(uVar1 + (int)*(short *)(iVar6 + 0x38),1);
      (**(code **)(puVar2[1] + 0x3c))((int)puVar2 + (int)*(short *)(puVar2[1] + 0x38),1);
      iVar6 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
      if (puVar4 != (uint *)0x0) {
        (**(code **)(puVar4[1] + 0xc))((int)puVar4 + (int)*(short *)(puVar4[1] + 8));
      }
      iVar9 = *(int *)(iVar6 + 8);
      if (iVar9 == 0) {
        *(uint **)(iVar6 + 8) = puVar4;
      }
      else {
        (**(code **)(*(int *)(iVar9 + 4) + 0x14))(iVar9 + *(short *)(*(int *)(iVar9 + 4) + 0x10));
        *(uint **)(iVar6 + 8) = puVar4;
      }
      iVar6 = *param_1;
    }
  }
  if (1 < iVar6) {
    iVar9 = 1;
    iVar6 = *param_1;
    do {
      iVar6 = iVar6 - iVar9;
      iVar9 = iVar9 + 1;
      iVar6 = *(int *)(iVar6 * 4 + param_1[2]);
      iVar3 = *(int *)(iVar6 + 4);
      (**(code **)(iVar3 + 0x14))(iVar6 + *(short *)(iVar3 + 0x10));
      iVar6 = *param_1;
    } while (iVar9 < 3);
    *param_1 = iVar6 + -2;
  }
  return;
}


// ==== FUN_0022fa78 @ 0022fa78 ====

bool FUN_0022fa78(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  bVar1 = false;
  puVar9 = (uint *)param_1;
  lVar4 = (**(code **)(puVar9[1] + 0x2c))((int)puVar9 + (int)*(short *)(puVar9[1] + 0x28));
  if (lVar4 == 0) {
    uVar7 = *puVar9;
  }
  else {
    lVar4 = (**(code **)(param_2[1] + 0x2c))((int)param_2 + (int)*(short *)(param_2[1] + 0x28));
    if (lVar4 != 0) {
      iVar2 = (**(code **)(param_2[1] + 0x24))((int)param_2 + (int)*(short *)(param_2[1] + 0x20));
      iVar2 = *(int *)(iVar2 + 0xc);
      uVar7 = 0;
      if ((*puVar9 >> 0x19) - 0xc < 8) {
        uVar7 = (int)*puVar9 >> 4 & 1;
      }
      if (uVar7 == 0) {
        lVar4 = FUN_002506a0(param_1,iVar2);
        return lVar4 != 0;
      }
      iVar3 = (**(code **)(puVar9[1] + 0x24))((int)puVar9 + (int)*(short *)(puVar9[1] + 0x20));
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        return false;
      }
      iVar5 = *(int *)(iVar3 + 4);
      while( true ) {
        if (iVar3 == iVar2) {
          bVar1 = true;
        }
        iVar3 = (**(code **)(iVar5 + 0x24))(iVar3 + *(short *)(iVar5 + 0x20));
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 == 0) break;
        iVar5 = *(int *)(iVar3 + 4);
      }
      return bVar1;
    }
    uVar7 = *puVar9;
  }
  uVar6 = uVar7 >> 0x19;
  uVar8 = 0;
  if (uVar6 - 0x2b < 3) {
    uVar8 = (int)uVar7 >> 4 & 1;
  }
  bVar1 = false;
  if (uVar8 == 0) {
    uVar8 = 0;
    if (uVar6 == 0x1b) {
      uVar8 = (int)uVar7 >> 4 & 1;
    }
    bVar1 = false;
    if (uVar8 == 0) {
      bVar1 = uVar6 == *param_2 >> 0x19;
    }
  }
  return bVar1;
}


// ==== FUN_0022fbe8 @ 0022fbe8 ====

void FUN_0022fbe8(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  
  iVar9 = DAT_0043df40;
  iVar8 = *param_1;
  if (iVar8 < 2) {
    iVar10 = 1;
    (**(code **)(*(int *)(DAT_0043df40 + 4) + 0xc))
              (DAT_0043df40 + *(short *)(*(int *)(DAT_0043df40 + 4) + 8));
    iVar6 = *param_1;
    if (0 < iVar8) {
      do {
        iVar6 = iVar6 - iVar10;
        iVar10 = iVar10 + 1;
        iVar6 = *(int *)(iVar6 * 4 + param_1[2]);
        iVar1 = *(int *)(iVar6 + 4);
        (**(code **)(iVar1 + 0x14))(iVar6 + *(short *)(iVar1 + 0x10));
        iVar6 = *param_1;
      } while (iVar10 <= iVar8);
    }
    *(int *)((iVar6 - iVar8) * 4 + param_1[2]) = iVar9;
    iVar8 = (*param_1 + 1) - iVar8;
  }
  else {
    uVar5 = FUN_0022fa78(*(undefined4 *)(iVar8 * 4 + param_1[2] + -4),
                         *(undefined4 *)((iVar8 + -1) * 4 + param_1[2] + -4));
    puVar11 = DAT_003bfae4;
    if (DAT_003bfae4 == (uint *)0x0) {
      uVar7 = Pool_Alloc(DAT_0043dee0,0xc);
      puVar11 = (uint *)uVar7;
      FUN_00386ec8(uVar7,5);
      *(undefined1 *)(puVar11 + 2) = uVar5;
      puVar11[1] = (uint)&DAT_003e2120;
    }
    else {
      uVar2 = *DAT_003bfae4;
      puVar4 = (uint *)DAT_003bfae4[2];
      *DAT_003bfae4 = uVar2 | 4;
      DAT_003bfae4 = puVar4;
      piVar3 = DAT_003be8e0;
      iVar8 = DAT_003be8e0[1];
      if (iVar8 < *DAT_003be8e0) {
        *(uint **)(iVar8 * 4 + DAT_003be8e0[2]) = puVar11;
        piVar3[1] = iVar8 + 1;
      }
      else {
        *puVar11 = uVar2 & 0xfffffffb;
      }
      *(undefined1 *)(puVar11 + 2) = uVar5;
    }
    if (*param_1 < 2) {
      return;
    }
    iVar9 = 1;
    (**(code **)(puVar11[1] + 0xc))((int)puVar11 + (int)*(short *)(puVar11[1] + 8));
    iVar8 = *param_1;
    do {
      iVar8 = iVar8 - iVar9;
      iVar9 = iVar9 + 1;
      iVar8 = *(int *)(iVar8 * 4 + param_1[2]);
      iVar6 = *(int *)(iVar8 + 4);
      (**(code **)(iVar6 + 0x14))(iVar8 + *(short *)(iVar6 + 0x10));
      iVar8 = *param_1;
    } while (iVar9 < 3);
    *(uint **)((iVar8 + -2) * 4 + param_1[2]) = puVar11;
    iVar8 = *param_1 + -1;
  }
  *param_1 = iVar8;
  return;
}


// ==== FUN_0022fe00 @ 0022fe00 ====

void FUN_0022fe00(int *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_0043df40;
  iVar4 = *param_1;
  if (iVar4 < 2) {
    iVar6 = 1;
    (**(code **)(*(int *)(DAT_0043df40 + 4) + 0xc))
              (DAT_0043df40 + *(short *)(*(int *)(DAT_0043df40 + 4) + 8));
    iVar2 = *param_1;
    if (0 < iVar4) {
      do {
        iVar2 = iVar2 - iVar6;
        iVar6 = iVar6 + 1;
        iVar2 = *(int *)(iVar2 * 4 + param_1[2]);
        iVar1 = *(int *)(iVar2 + 4);
        (**(code **)(iVar1 + 0x14))(iVar2 + *(short *)(iVar1 + 0x10));
        iVar2 = *param_1;
      } while (iVar6 <= iVar4);
    }
    *(int *)((iVar2 - iVar4) * 4 + param_1[2]) = iVar5;
    iVar4 = (*param_1 + 1) - iVar4;
  }
  else {
    iVar5 = *(int *)(iVar4 * 4 + param_1[2] + -4);
    lVar3 = FUN_0022fa78(iVar5,*(undefined4 *)((iVar4 + -1) * 4 + param_1[2] + -4));
    if (lVar3 == 0) {
      if (1 < *param_1) {
        iVar5 = 1;
        iVar4 = *param_1;
        do {
          iVar4 = iVar4 - iVar5;
          iVar5 = iVar5 + 1;
          iVar4 = *(int *)(iVar4 * 4 + param_1[2]);
          iVar2 = *(int *)(iVar4 + 4);
          (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10));
          iVar4 = *param_1;
        } while (iVar5 < 3);
        *param_1 = iVar4 + -2;
      }
      iVar4 = *param_1 + 1;
      *(int *)(*param_1 * 4 + param_1[2]) = DAT_0043df40;
    }
    else {
      if (*param_1 < 2) {
        return;
      }
      iVar2 = 1;
      (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
      iVar4 = *param_1;
      do {
        iVar4 = iVar4 - iVar2;
        iVar2 = iVar2 + 1;
        iVar4 = *(int *)(iVar4 * 4 + param_1[2]);
        iVar6 = *(int *)(iVar4 + 4);
        (**(code **)(iVar6 + 0x14))(iVar4 + *(short *)(iVar6 + 0x10));
        iVar4 = *param_1;
      } while (iVar2 < 3);
      *(int *)((iVar4 + -2) * 4 + param_1[2]) = iVar5;
      iVar4 = *param_1 + -1;
    }
  }
  *param_1 = iVar4;
  return;
}


// ==== FUN_0022fff8 @ 0022fff8 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0x003bfaf8 : 0x00230120 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Strings referenciadas:
     "__INTERFACES__" */

void FUN_0022fff8(int *param_1)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  short *apsStack_b0 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  puVar2 = *(uint **)(*param_1 * 4 + param_1[2] + -4);
  iVar4 = FUN_0024c300(*(undefined4 *)((*param_1 + -1) * 4 + param_1[2] + -4));
  uVar12 = *puVar2 >> 0x19;
  uVar11 = 0;
  uVar5 = (int)*puVar2 >> 4;
  if (uVar12 - 0x2b < 3) {
    uVar11 = uVar5 & 1;
  }
  if (uVar11 == 0) {
    uVar11 = 0;
    if (uVar12 == 9) {
      uVar11 = uVar5 & 1;
    }
    if (uVar11 == 0) {
      iVar4 = iVar4 + 2;
      if (iVar4 <= *param_1) {
        iVar13 = 1;
        if (0 < iVar4) {
          iVar6 = *param_1;
          while( true ) {
            iVar6 = iVar6 - iVar13;
            iVar13 = iVar13 + 1;
            iVar6 = *(int *)(iVar6 * 4 + param_1[2]);
            iVar14 = *(int *)(iVar6 + 4);
            (**(code **)(iVar14 + 0x14))(iVar6 + *(short *)(iVar14 + 0x10));
            if (iVar4 < iVar13) break;
            iVar6 = *param_1;
          }
        }
        *param_1 = *param_1 - iVar4;
      }
      DAT_003bfaf8 = DAT_003bfaf8 + -1;
      if (DAT_003bfaf8 != 0) {
        return;
      }
      Pool_Free(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
      return;
    }
  }
  iVar13 = iVar4 + 2;
  uVar8 = FUN_0024fa38(DAT_0043dee4,0x2c);
  uVar8 = FUN_002330d8(uVar8);
  if (0 < iVar4) {
    iVar6 = *param_1;
    iVar14 = 0;
    while( true ) {
      iVar6 = *(int *)((iVar6 - (iVar14 + 2)) * 4 + param_1[2] + -4);
      iVar3 = *(int *)(iVar6 + 4);
      iVar6 = (**(code **)(iVar3 + 0x24))(iVar6 + *(short *)(iVar3 + 0x20));
      puVar7 = *(uint **)(iVar6 + 0xc);
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)FUN_0024fa38(DAT_0043dee4,0x20);
        FUN_00386ec8(puVar7,0x1c);
        puVar7[1] = (uint)&DAT_003e1f88;
        Pow2Container_ctor(puVar7 + 2,8);
        puVar7[7] = 0;
        puVar7[1] = (uint)&DAT_003e1f00;
        *puVar7 = *puVar7 & 0xffffffdf;
        if (puVar7 != (uint *)0x0) {
          (*(code *)PTR_FUN_003e1f0c)((int)puVar7 + (int)DAT_003e1f08);
        }
        iVar3 = *(int *)(iVar6 + 0xc);
        if (iVar3 == 0) {
          *(uint **)(iVar6 + 0xc) = puVar7;
        }
        else {
          (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
          *(uint **)(iVar6 + 0xc) = puVar7;
        }
      }
      FUN_002333e8(uVar8,iVar14,puVar7);
      if (iVar4 <= iVar14 + 1) break;
      iVar6 = *param_1;
      iVar14 = iVar14 + 1;
    }
  }
  lVar9 = (**(code **)(puVar2[1] + 0x24))((int)puVar2 + (int)*(short *)(puVar2[1] + 0x20));
  if (lVar9 != 0) {
    String_ctor_cstr(apsStack_b0,0x3fd578);
    uVar10 = (**(code **)(puVar2[1] + 0x24))((int)puVar2 + (int)*(short *)(puVar2[1] + 0x20));
    FUN_002488d0(uVar10,apsStack_b0,uVar8);
    sVar1 = *apsStack_b0[0];
    *apsStack_b0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
    }
  }
  if (iVar13 <= *param_1) {
    iVar4 = 1;
    if (0 < iVar13) {
      iVar6 = *param_1;
      while( true ) {
        iVar6 = iVar6 - iVar4;
        iVar4 = iVar4 + 1;
        iVar6 = *(int *)(iVar6 * 4 + param_1[2]);
        iVar14 = *(int *)(iVar6 + 4);
        (**(code **)(iVar14 + 0x14))(iVar6 + *(short *)(iVar14 + 0x10));
        if (iVar13 < iVar4) break;
        iVar6 = *param_1;
      }
    }
    *param_1 = *param_1 - iVar13;
  }
  DAT_003bfaf8 = DAT_003bfaf8 + -1;
  if (DAT_003bfaf8 == 0) {
    Pool_Free(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
  }
  return;
}


// ==== FUN_002303a8 @ 002303a8 ====

void FUN_002303a8(undefined8 param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  short *apsStack_80 [4];
  
  puVar11 = (uint *)param_1;
  uVar6 = *puVar11;
  piVar10 = (int *)(*param_2 + 3U & 0xfffffffc);
  piVar4 = piVar10 + 5;
  *param_2 = (int)piVar4;
  iVar5 = *piVar10;
  *param_2 = (int)piVar4 + iVar5;
  iVar5 = (int)piVar4 + iVar5 + piVar10[1];
  *param_2 = iVar5;
  *param_2 = iVar5 + piVar10[2];
  FUN_00220828(param_1,piVar4,param_2[1],*piVar10,param_2[6]);
  uVar8 = puVar11[0x15];
  if (uVar8 == 0) {
    bVar1 = *(byte *)(piVar10 + 3);
  }
  else {
    if ((*(byte *)(piVar10 + 3) & 1) != 0) {
      if ((*(byte *)(piVar10 + 3) >> 2 & 1) == 0) {
        String_ctor_cstr(apsStack_80,piVar10[4]);
        if (puVar11[0xc] == 0) {
          FUN_0021c268(param_1,param_2[1],0,apsStack_80,uVar8,1,1,0);
        }
        else {
          if (DAT_003bfae0 == 0) {
            FUN_00385660();
          }
          FUN_002488d0(DAT_003bfae0 + 8,apsStack_80,uVar8);
        }
        sVar2 = *apsStack_80[0];
        *apsStack_80[0] = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          Pool_Free(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
        }
        uVar8 = puVar11[0x15];
      }
      else {
        FUN_002523c0(*(undefined1 *)((int)piVar10 + 0xf),uVar8);
        uVar8 = puVar11[0x15];
      }
      (**(code **)(*(int *)(uVar8 + 4) + 0x14))(uVar8 + (int)*(short *)(*(int *)(uVar8 + 4) + 0x10))
      ;
      puVar11[0x15] = 0;
      FUN_00220828(param_1,(int)piVar10 + *piVar10 + 0x14,param_2[1],piVar10[1],param_2[6]);
    }
    bVar1 = *(byte *)(piVar10 + 3);
  }
  if ((bVar1 >> 1 & 1) == 0) {
    uVar8 = *puVar11;
  }
  else {
    uVar8 = puVar11[0x15];
    if (uVar8 == 0) {
      iVar5 = *piVar10;
    }
    else {
      (**(code **)(*(int *)(uVar8 + 4) + 0xc))(uVar8 + (int)*(short *)(*(int *)(uVar8 + 4) + 8));
      iVar5 = *(int *)(puVar11[0x15] + 4);
      (**(code **)(iVar5 + 0x14))(puVar11[0x15] + (int)*(short *)(iVar5 + 0x10));
      puVar11[0x15] = 0;
      iVar5 = *piVar10;
    }
    FUN_00220828(param_1,(int)piVar10 + piVar10[1] + iVar5 + 0x14,param_2[1],piVar10[2],param_2[6]);
    if (uVar8 == 0) {
      uVar8 = *puVar11;
    }
    else if (puVar11[0x15] == 0) {
      (**(code **)(*(int *)(uVar8 + 4) + 0xc))(uVar8 + (int)*(short *)(*(int *)(uVar8 + 4) + 8));
      puVar11[0x15] = uVar8;
      (**(code **)(*(int *)(uVar8 + 4) + 0x14))(uVar8 + (int)*(short *)(*(int *)(uVar8 + 4) + 0x10))
      ;
      uVar8 = *puVar11;
    }
    else {
      uVar8 = *puVar11;
    }
  }
  iVar5 = uVar8 - uVar6;
  if ((uVar6 < uVar8) && (iVar5 <= (int)uVar8)) {
    iVar9 = 1;
    if (0 < iVar5) {
      uVar6 = *puVar11;
      while( true ) {
        iVar7 = uVar6 - iVar9;
        iVar9 = iVar9 + 1;
        iVar7 = *(int *)(iVar7 * 4 + puVar11[2]);
        iVar3 = *(int *)(iVar7 + 4);
        (**(code **)(iVar3 + 0x14))(iVar7 + *(short *)(iVar3 + 0x10));
        if (iVar5 < iVar9) break;
        uVar6 = *puVar11;
      }
    }
    *puVar11 = *puVar11 - iVar5;
  }
  return;
}


// ==== FUN_00230680 @ 00230680 ====

void FUN_00230680(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_1 * 4 + param_1[2] + -4);
  (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8));
  param_1[0x15] = iVar1;
  if (0 < *param_1) {
    iVar1 = *(int *)(*param_1 * 4 + param_1[2] + -4);
    iVar2 = *(int *)(iVar1 + 4);
    (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
    *param_1 = *param_1 + -1;
  }
  return;
}


// ==== FUN_00230710 @ 00230710 ====

void FUN_00230710(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int aiStack_a0 [4];
  short *apsStack_90 [4];
  
  iVar12 = (int)param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = iVar12 + *(int *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = iVar12 + *(int *)(param_1 + 0x2c);
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar9 = *(int *)(param_1 + 0x2c);
    while( true ) {
      piVar5 = (int *)(iVar11 * 8 + iVar9);
      iVar9 = *piVar5;
      if (iVar9 != 0) {
        *piVar5 = iVar12 + iVar9;
      }
      iVar11 = iVar11 + 1;
      if (*(int *)(param_1 + 0x28) <= iVar11) break;
      iVar9 = *(int *)(param_1 + 0x2c);
    }
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar9 = *(int *)(param_1 + 0x10);
    do {
      iVar2 = iVar11 * 4;
      iVar7 = *(int *)(iVar2 + iVar9);
      if (iVar7 == 0) goto switchD_00230824_caseD_4;
      *(int *)(iVar2 + iVar9) = iVar12 + iVar7;
      iVar9 = (*(undefined4 **)(param_1 + 0x10))[iVar11];
      if (iVar9 == 0) {
        iVar9 = *(int *)(param_1 + 0xc);
        goto LAB_00230a0c;
      }
      *(undefined4 *)(iVar9 + 4) = **(undefined4 **)(param_1 + 0x10);
      switch(**(undefined4 **)(iVar2 + *(int *)(param_1 + 0x10))) {
      case 1:
        uVar3 = (*DAT_0043dae0)(param_4,iVar11);
        *(undefined4 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x10)) + 0x18) = uVar3;
        break;
      case 2:
        iVar9 = *(int *)(iVar2 + *(int *)(param_1 + 0x10));
        iVar7 = *(int *)(iVar9 + 0x34);
        if (iVar7 != 0) {
          *(int *)(iVar9 + 0x34) = iVar12 + iVar7;
        }
        iVar9 = *(int *)(iVar2 + *(int *)(param_1 + 0x10));
        iVar7 = *(int *)(iVar9 + 0x38);
        if (iVar7 != 0) {
          *(int *)(iVar9 + 0x38) = iVar12 + iVar7;
        }
        break;
      case 3:
        iVar9 = *(int *)(iVar2 + *(int *)(param_1 + 0x10));
        iVar7 = *(int *)(iVar9 + 8);
        if (iVar7 != 0) {
          *(int *)(iVar9 + 8) = iVar12 + iVar7;
        }
        iVar9 = *(int *)(iVar2 + *(int *)(param_1 + 0x10));
        iVar7 = *(int *)(iVar9 + 0x10);
        if (iVar7 != 0) {
          *(int *)(iVar9 + 0x10) = iVar12 + iVar7;
        }
        break;
      case 5:
      case 9:
        FUN_00247880(*(int *)(iVar2 + *(int *)(param_1 + 0x10)) + 8,param_2,param_3,param_1 + 0x30);
        iVar9 = *(int *)(param_1 + 0xc);
        goto LAB_00230a0c;
      case 6:
        iVar9 = *(int *)(param_1 + 0x28);
        uVar3 = 0;
        if (0 < iVar9) {
          puVar8 = *(undefined4 **)(param_1 + 0x2c);
          do {
            if (puVar8[1] == iVar11) {
              uVar3 = *puVar8;
            }
            iVar9 = iVar9 + -1;
            puVar8 = puVar8 + 2;
          } while (iVar9 != 0);
        }
        uVar3 = (*DAT_0043dac4)(param_4,iVar11,uVar3);
        iVar9 = *(int *)(param_1 + 0x10);
        goto LAB_00230948;
      case 7:
        uVar3 = (*DAT_0043dad4)(param_4,iVar11);
        iVar9 = *(int *)(param_1 + 0x10);
LAB_00230948:
        *(undefined4 *)(*(int *)(iVar2 + iVar9) + 8) = uVar3;
        break;
      case 10:
        iVar9 = *(int *)(iVar2 + *(int *)(param_1 + 0x10));
        iVar7 = *(int *)(iVar9 + 0x34);
        if (iVar7 != 0) {
          *(int *)(iVar9 + 0x34) = iVar12 + iVar7;
        }
        iVar9 = *(int *)(param_1 + 0x10);
        iVar7 = 0;
        if (0 < *(int *)(*(int *)(iVar2 + iVar9) + 0x30)) {
          iVar10 = 0;
          do {
            iVar6 = iVar10 + *(int *)(*(int *)(iVar2 + iVar9) + 0x34);
            iVar9 = *(int *)(iVar6 + 0x34);
            if (iVar9 != 0) {
              *(int *)(iVar6 + 0x34) = iVar12 + iVar9;
            }
            iVar9 = *(int *)(param_1 + 0x10);
            iVar7 = iVar7 + 1;
            iVar10 = iVar10 + 0x38;
          } while (iVar7 < *(int *)(*(int *)(iVar2 + iVar9) + 0x30));
        }
      }
switchD_00230824_caseD_4:
      iVar9 = *(int *)(param_1 + 0xc);
LAB_00230a0c:
      iVar11 = iVar11 + 1;
      if (iVar9 <= iVar11) break;
      iVar9 = *(int *)(param_1 + 0x10);
    } while( true );
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = iVar12 + *(int *)(param_1 + 0x24);
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar9 = *(int *)(param_1 + 0x24);
    while( true ) {
      iVar2 = iVar11 * 0x10;
      iVar7 = *(int *)(iVar2 + iVar9);
      if (iVar7 != 0) {
        *(int *)(iVar2 + iVar9) = iVar12 + iVar7;
      }
      iVar7 = iVar2 + *(int *)(param_1 + 0x24);
      iVar9 = *(int *)(iVar7 + 4);
      if (iVar9 != 0) {
        *(int *)(iVar7 + 4) = iVar12 + iVar9;
      }
      String_ctor_cstr(apsStack_90,*(undefined4 *)(iVar2 + *(int *)(param_1 + 0x24)));
      FUN_00242bf0(aiStack_a0,DAT_0043df7c,apsStack_90);
      piVar5 = (int *)(iVar2 + *(int *)(param_1 + 0x24) + 0xc);
      if (aiStack_a0 != piVar5) {
        if ((*piVar5 != 0) && (lVar4 = Refcount_Dec(), lVar4 == 0)) {
          FUN_00244cf8(*piVar5);
        }
        *piVar5 = aiStack_a0[0];
        if (aiStack_a0[0] != 0) {
          FUN_00244cd8();
        }
      }
      if ((aiStack_a0[0] != 0) && (lVar4 = Refcount_Dec(), lVar4 == 0)) {
        FUN_00244cf8(aiStack_a0[0]);
      }
      sVar1 = *apsStack_90[0];
      *apsStack_90[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
      }
      iVar11 = iVar11 + 1;
      if (*(int *)(param_1 + 0x20) <= iVar11) break;
      iVar9 = *(int *)(param_1 + 0x24);
    }
  }
  return;
}


// ==== FUN_00230b70 @ 00230b70 ====

void FUN_00230b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    *(int *)(iVar1 + 0x1c) = iVar1 + *(int *)(iVar1 + 0x1c);
  }
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  FUN_00230710(param_1,param_2,param_3);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) - iVar1;
  }
  return;
}


// ==== FUN_00230bc8 @ 00230bc8 ====

int FUN_00230bc8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  return -1;
}


// ==== FUN_00230c00 @ 00230c00 ====

int FUN_00230c00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x24) + 8);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x20));
  }
  return -1;
}


// ==== FUN_00230c40 @ 00230c40 ====

void FUN_00230c40(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int aiStack_90 [4];
  
  iVar11 = 0;
  iVar12 = (int)param_1;
  *(undefined4 *)(iVar12 + 0x30) = 0;
  iVar5 = *(int *)(iVar12 + 0xc);
  if (0 < iVar5) {
    iVar5 = *(int *)(iVar12 + 0x10);
    do {
      iVar9 = iVar11 * 4;
      if (*(int *)(iVar9 + iVar5) == 0) {
LAB_00230d08:
        iVar5 = *(int *)(iVar12 + 0xc);
      }
      else {
        lVar4 = FUN_00230c00(param_1,iVar11);
        if (lVar4 == -1) {
          piVar10 = *(int **)(iVar9 + *(int *)(iVar12 + 0x10));
          if (*piVar10 == 8) {
            uVar2 = FUN_00230bc8(param_1,piVar10[2]);
            *(undefined4 *)(*(int *)(iVar9 + *(int *)(iVar12 + 0x10)) + 8) = uVar2;
            uVar2 = FUN_00230bc8(param_1,*(undefined4 *)
                                          (*(int *)(iVar9 + *(int *)(iVar12 + 0x10)) + 0xc));
            *(undefined4 *)(*(int *)(iVar9 + *(int *)(iVar12 + 0x10)) + 0xc) = uVar2;
            goto LAB_00230d08;
          }
          iVar5 = *(int *)(iVar12 + 0xc);
        }
        else {
          iVar5 = *(int *)(iVar12 + 0xc);
        }
      }
      iVar11 = iVar11 + 1;
      if (iVar5 <= iVar11) goto code_r0x00230d1c;
      iVar5 = *(int *)(iVar12 + 0x10);
    } while( true );
  }
LAB_00230d20:
  iVar11 = 0;
  iVar9 = (int)param_2;
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + *(int *)(iVar12 + 0x10)) == 0) goto switchD_00230d94_caseD_4;
      lVar4 = FUN_00230c00(param_1,iVar11);
      if (lVar4 != -1) {
        iVar3 = *(int *)(iVar12 + 0xc);
        goto LAB_00230fb4;
      }
      iVar3 = *(int *)(iVar12 + 0x10);
      switch(**(undefined4 **)(iVar5 + iVar3)) {
      case 1:
        (*DAT_0043dae4)(*(undefined4 *)(*(int *)(iVar5 + *(int *)(iVar12 + 0x10)) + 0x18));
        *(int *)(*(int *)(iVar5 + *(int *)(iVar12 + 0x10)) + 0x18) = iVar11;
        break;
      case 2:
        iVar3 = *(int *)(iVar5 + *(int *)(iVar12 + 0x10));
        iVar7 = *(int *)(iVar3 + 0x34);
        if (iVar7 != 0) {
          *(int *)(iVar3 + 0x34) = iVar7 - iVar9;
        }
        iVar5 = *(int *)(iVar5 + *(int *)(iVar12 + 0x10));
        iVar3 = *(int *)(iVar5 + 0x38);
        if (iVar3 != 0) {
          *(int *)(iVar5 + 0x38) = iVar3 - iVar9;
        }
        break;
      case 3:
        iVar3 = *(int *)(iVar5 + *(int *)(iVar12 + 0x10));
        iVar7 = *(int *)(iVar3 + 8);
        if (iVar7 != 0) {
          *(int *)(iVar3 + 8) = iVar7 - iVar9;
        }
        iVar3 = *(int *)(iVar12 + 0x10);
        iVar7 = 0;
        if (0 < *(int *)(*(int *)(iVar5 + iVar3) + 0xc)) {
          do {
            iVar8 = iVar7 * 4;
            iVar7 = iVar7 + 1;
            uVar2 = FUN_00230bc8(param_1,*(undefined4 *)
                                          (iVar8 + *(int *)(*(int *)(iVar5 + iVar3) + 0x10)));
            *(undefined4 *)(iVar8 + *(int *)(*(int *)(iVar5 + *(int *)(iVar12 + 0x10)) + 0x10)) =
                 uVar2;
            iVar3 = *(int *)(iVar12 + 0x10);
          } while (iVar7 < *(int *)(*(int *)(iVar5 + iVar3) + 0xc));
        }
        iVar5 = *(int *)(iVar5 + *(int *)(iVar12 + 0x10));
        iVar3 = *(int *)(iVar5 + 0x10);
        if (iVar3 != 0) {
          *(int *)(iVar5 + 0x10) = iVar3 - iVar9;
        }
        break;
      case 5:
      case 9:
        FUN_00247c70(*(int *)(iVar5 + *(int *)(iVar12 + 0x10)) + 8,param_2,iVar12 + 0x30);
        iVar3 = *(int *)(iVar12 + 0xc);
        goto LAB_00230fb4;
      case 6:
        iVar3 = *(int *)(iVar12 + 0x10);
        pcVar1 = DAT_0043dac8;
        goto LAB_00230ee0;
      case 7:
        iVar3 = *(int *)(iVar12 + 0x10);
        pcVar1 = DAT_0043dad8;
LAB_00230ee0:
        (*pcVar1)(*(undefined4 *)(*(int *)(iVar5 + iVar3) + 8));
        *(int *)(*(int *)(iVar5 + *(int *)(iVar12 + 0x10)) + 8) = iVar11;
        break;
      case 10:
        iVar7 = 0;
        if (0 < *(int *)(*(int *)(iVar5 + iVar3) + 0x30)) {
          iVar8 = 0;
          piVar10 = (int *)(iVar5 + iVar3);
          do {
            iVar6 = iVar8 + *(int *)(*piVar10 + 0x34);
            iVar3 = *(int *)(iVar6 + 0x34);
            if (iVar3 != 0) {
              *(int *)(iVar6 + 0x34) = iVar3 - iVar9;
            }
            iVar7 = iVar7 + 1;
            piVar10 = (int *)(iVar5 + *(int *)(iVar12 + 0x10));
            iVar8 = iVar8 + 0x38;
          } while (iVar7 < *(int *)(*piVar10 + 0x30));
        }
        iVar5 = *(int *)(iVar5 + *(int *)(iVar12 + 0x10));
        iVar3 = *(int *)(iVar5 + 0x34);
        if (iVar3 != 0) {
          *(int *)(iVar5 + 0x34) = iVar3 - iVar9;
        }
      }
switchD_00230d94_caseD_4:
      iVar3 = *(int *)(iVar12 + 0xc);
LAB_00230fb4:
      iVar11 = iVar11 + 1;
      iVar5 = iVar11 * 4;
    } while (iVar11 < iVar3);
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar12 + 0x20)) {
    iVar11 = *(int *)(iVar12 + 0x24);
    while( true ) {
      iVar3 = iVar5 * 0x10;
      piVar10 = (int *)(iVar3 + iVar11 + 0xc);
      aiStack_90[0] = 0;
      if (aiStack_90 != piVar10) {
        if ((*piVar10 != 0) && (lVar4 = Refcount_Dec(), lVar4 == 0)) {
          FUN_00244cf8(*piVar10);
        }
        *piVar10 = aiStack_90[0];
        if (aiStack_90[0] != 0) {
          FUN_00244cd8();
        }
      }
      if (aiStack_90[0] == 0) {
        iVar11 = *(int *)(iVar12 + 0x24);
      }
      else {
        lVar4 = Refcount_Dec();
        if (lVar4 == 0) {
          FUN_00244cf8(aiStack_90[0]);
          iVar11 = *(int *)(iVar12 + 0x24);
        }
        else {
          iVar11 = *(int *)(iVar12 + 0x24);
        }
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(iVar3 + iVar11 + 8) * 4 + *(int *)(iVar12 + 0x10)) = 0;
      if (*(int *)(iVar12 + 0x20) <= iVar5) break;
      iVar11 = *(int *)(iVar12 + 0x24);
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar12 + 0xc)) {
    iVar11 = *(int *)(iVar12 + 0x10);
    while( true ) {
      iVar11 = *(int *)(iVar5 * 4 + iVar11);
      if (iVar11 == 0) {
        iVar11 = *(int *)(iVar12 + 0xc);
      }
      else {
        *(undefined4 *)(iVar11 + 4) = 0x9876543;
        piVar10 = (int *)(iVar5 * 4 + *(int *)(iVar12 + 0x10));
        iVar11 = *piVar10;
        if (iVar11 != 0) {
          *piVar10 = iVar11 - iVar9;
        }
        iVar11 = *(int *)(iVar12 + 0xc);
      }
      iVar5 = iVar5 + 1;
      if (iVar11 <= iVar5) break;
      iVar11 = *(int *)(iVar12 + 0x10);
    }
  }
  if (*(int *)(iVar12 + 0x10) != 0) {
    *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) - iVar9;
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar12 + 0x20)) {
    iVar11 = *(int *)(iVar12 + 0x24);
    while( true ) {
      piVar10 = (int *)(iVar5 * 0x10 + iVar11);
      iVar11 = *piVar10;
      if (iVar11 != 0) {
        *piVar10 = iVar11 - iVar9;
      }
      iVar3 = iVar5 * 0x10 + *(int *)(iVar12 + 0x24);
      iVar11 = *(int *)(iVar3 + 4);
      if (iVar11 != 0) {
        *(int *)(iVar3 + 4) = iVar11 - iVar9;
      }
      iVar5 = iVar5 + 1;
      if (*(int *)(iVar12 + 0x20) <= iVar5) break;
      iVar11 = *(int *)(iVar12 + 0x24);
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar12 + 0x28)) {
    iVar11 = *(int *)(iVar12 + 0x2c);
    while( true ) {
      piVar10 = (int *)(iVar5 * 8 + iVar11);
      iVar11 = *piVar10;
      if (iVar11 != 0) {
        *piVar10 = iVar11 - iVar9;
      }
      iVar3 = iVar5 * 8 + *(int *)(iVar12 + 0x2c);
      iVar11 = *(int *)(iVar3 + 4);
      if (iVar11 < 0) {
        *(int *)(iVar3 + 4) = -iVar11;
        iVar11 = *(int *)(iVar12 + 0x28);
      }
      else {
        iVar11 = *(int *)(iVar12 + 0x28);
      }
      iVar5 = iVar5 + 1;
      if (iVar11 <= iVar5) break;
      iVar11 = *(int *)(iVar12 + 0x2c);
    }
  }
  if (*(int *)(iVar12 + 0x24) != 0) {
    *(int *)(iVar12 + 0x24) = *(int *)(iVar12 + 0x24) - iVar9;
  }
  if (*(int *)(iVar12 + 0x2c) != 0) {
    *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) - iVar9;
  }
  *(undefined4 *)(iVar12 + 0x30) = 0;
  return;
code_r0x00230d1c:
  iVar5 = *(int *)(iVar12 + 0xc);
  goto LAB_00230d20;
}


// ==== FUN_002311f0 @ 002311f0 ====

undefined8 FUN_002311f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  FUN_00233b30();
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined **)(iVar3 + 0x14) = &DAT_003e1208;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  if (param_2 != (int *)(iVar3 + 0x34)) {
    iVar1 = *param_2;
    *(int *)(iVar3 + 0x34) = iVar1;
    if (iVar1 != 0) {
      FUN_00244cd8();
    }
  }
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(*param_2 + 0x10);
  if ((*param_2 != 0) && (lVar2 = Refcount_Dec(), lVar2 == 0)) {
    FUN_00244cf8(*param_2);
  }
  return param_1;
}


// ==== FUN_00231288 @ 00231288 ====

void FUN_00231288(undefined8 param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 0x14) = &DAT_003e1208;
  if ((*(int *)(iVar2 + 0x34) != 0) && (lVar1 = Refcount_Dec(), lVar1 == 0)) {
    FUN_00244cf8(*(undefined4 *)(iVar2 + 0x34));
  }
  FUN_00233c60(param_1,0);
  if ((param_2 & 1) != 0) {
    Pool_Free(DAT_0043dee0,param_1,0x38);
  }
  return;
}


// ==== FUN_00231308 @ 00231308 ====

int FUN_00231308(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
  if (*(char *)(iVar1 + 8) == ':') {
    return *(char *)(iVar1 + 9) + -0x30;
  }
  return 6;
}


// ==== FUN_00231338 @ 00231338 ====

void FUN_00231338(int param_1)

{
  FUN_00241128(param_1 + 0x24,0);
  return;
}


// ==== FUN_00231358 @ 00231358 ====

void FUN_00231358(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar3 = *(int *)(param_1 + 0x24);
    do {
      iVar1 = iVar8 * 0x10;
      iVar8 = iVar8 + 1;
      iVar3 = iVar1 + iVar3;
      iVar7 = *(int *)(iVar3 + 0xc);
      uVar6 = *(undefined4 *)(iVar3 + 4);
      iVar3 = 0;
      if (*(int *)(*(int *)(iVar7 + 0x10) + 0x30) < 1) {
LAB_0023141c:
        uVar6 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar7 + 0x10) + 0x34);
        while( true ) {
          lVar2 = strcmp(uVar6,*(undefined4 *)(iVar3 * 8 + iVar4));
          if (lVar2 == 0) break;
          iVar3 = iVar3 + 1;
          if (*(int *)(*(int *)(iVar7 + 0x10) + 0x30) <= iVar3) goto LAB_0023141c;
          iVar4 = *(int *)(*(int *)(iVar7 + 0x10) + 0x34);
        }
        uVar6 = *(undefined4 *)
                 (*(int *)(iVar3 * 8 + *(int *)(*(int *)(iVar7 + 0x10) + 0x34) + 4) * 4 +
                 *(int *)(*(int *)(iVar7 + 0x10) + 0x18));
      }
      *(undefined4 *)(*(int *)(iVar1 + *(int *)(param_1 + 0x24) + 8) * 4 + *(int *)(param_1 + 0x10))
           = uVar6;
      if (*(int *)(param_1 + 0x20) <= iVar8) break;
      iVar3 = *(int *)(param_1 + 0x24);
    } while( true );
  }
  if (*(int *)(param_1 + 0xc) < 1) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  do {
    iVar7 = iVar3 * 4;
    piVar5 = *(int **)(iVar7 + iVar8);
    if (piVar5 == (int *)0x0) {
LAB_00231570:
      iVar8 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar1 = *piVar5;
      if (iVar1 == 4) goto LAB_00231570;
      if (iVar1 < 5) {
        if (iVar1 == 3) {
          iVar8 = 0;
          if (0 < piVar5[3]) {
            iVar1 = *(int *)(param_1 + 0x10);
            while( true ) {
              iVar4 = iVar8 * 4;
              iVar8 = iVar8 + 1;
              piVar5 = (int *)(iVar4 + *(int *)(*(int *)(iVar7 + iVar1) + 0x10));
              *piVar5 = *(int *)(*piVar5 * 4 + iVar1);
              if (*(int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x10)) + 0xc) <= iVar8) break;
              iVar1 = *(int *)(param_1 + 0x10);
            }
          }
          goto LAB_00231570;
        }
        iVar8 = *(int *)(param_1 + 0xc);
      }
      else if (iVar1 == 7) {
        (*DAT_0043dadc)(param_3,iVar3,piVar5[2]);
        iVar8 = *(int *)(param_1 + 0xc);
      }
      else {
        if (iVar1 == 8) {
          piVar5[2] = *(int *)(piVar5[2] * 4 + iVar8);
          iVar8 = *(int *)(iVar7 + *(int *)(param_1 + 0x10));
          *(undefined4 *)(iVar8 + 0xc) =
               *(undefined4 *)(*(int *)(iVar8 + 0xc) * 4 + *(int *)(param_1 + 0x10));
          goto LAB_00231570;
        }
        iVar8 = *(int *)(param_1 + 0xc);
      }
    }
    if (iVar8 <= iVar3 + 1) {
      return;
    }
    iVar8 = *(int *)(param_1 + 0x10);
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== FUN_002315b0 @ 002315b0 ====

undefined8 FUN_002315b0(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)param_1;
  uVar1 = *(uint *)(param_2 + 8);
  *(short *)((int)puVar9 + 10) = (short)uVar1;
  uVar2 = Pool_Alloc(DAT_0043dee0,(uVar1 & 0xffff) << 2);
  puVar9[3] = uVar2;
  *(undefined2 *)(puVar9 + 2) = 0;
  memset(puVar9[3],0,(uint)*(ushort *)((int)puVar9 + 10) << 2);
  uVar1 = *(uint *)(param_2 + 4);
  *(short *)((int)puVar9 + 0x12) = (short)uVar1;
  uVar2 = Pool_Alloc(DAT_0043dee0,(uVar1 & 0xffff) << 2);
  puVar9[5] = uVar2;
  *(undefined2 *)(puVar9 + 4) = 0;
  memset(puVar9[5],0,(uint)*(ushort *)((int)puVar9 + 0x12) << 2);
  FUN_00240758(puVar9 + 6);
  iVar4 = *(int *)(param_2 + 0x18);
  puVar9[0x21] = iVar4;
  puVar9[0x22] = *(undefined4 *)(param_2 + 0x10);
  puVar9[0x23] = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = Pool_Alloc(DAT_0043dee0,iVar4 << 2);
  *puVar9 = uVar2;
  uVar5 = Pool_Alloc(DAT_0043dee0,0x14);
  iVar4 = *(int *)(param_2 + 0xc);
  puVar6 = (undefined4 *)uVar5;
  puVar6[4] = iVar4;
  uVar2 = FUN_0021b078(iVar4 * 0x14);
  puVar6[1] = uVar2;
  *puVar6 = uVar2;
  puVar6[2] = uVar2;
  FUN_00232878(uVar5);
  iVar4 = puVar9[0x22];
  puVar9[0x20] = puVar6;
  iVar8 = iVar4 + -1;
  piVar3 = (int *)FUN_0021b078(iVar4 << 5 | 0x10);
  *piVar3 = iVar4;
  if (iVar4 != 0) {
    piVar7 = piVar3 + 9;
    do {
      piVar7[-5] = 0;
      piVar7[-4] = 0;
      iVar8 = iVar8 + -1;
      piVar7[-3] = 0;
      piVar7[-2] = 0;
      *piVar7 = 0;
      piVar7[1] = 6;
      piVar7[2] = 0;
      iVar4 = Pool_Alloc(DAT_0043dee0,0x18);
      piVar7[2] = iVar4;
      piVar7 = piVar7 + 8;
    } while (iVar8 != -1);
  }
  puVar9[7] = piVar3 + 4;
  uVar2 = Pool_Alloc(DAT_0043dee0,puVar9[0x23] << 2);
  puVar9[10] = uVar2;
  puVar9[1] = 0;
  puVar9[9] = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  puVar9[8] = 0;
  puVar9[0x1f] = 0;
  puVar9[0xb] = DAT_0043df40;
  puVar9[0x12] = DAT_0043df40;
  puVar9[0x13] = DAT_0043df40;
  puVar9[0x14] = DAT_0043df40;
  return param_1;
}


// ==== FUN_002317b8 @ 002317b8 ====

void FUN_002317b8(int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  int iStack_b8;
  undefined4 *puStack_b0;
  undefined4 uStack_ac;
  
  iVar14 = *(int *)(param_1 + 0x20);
  iStack_b8 = 0;
  if (0 < *(int *)(DAT_0043df68 + 0x88)) {
    iVar16 = 0;
    iStack_bc = param_2;
    do {
      piVar3 = (int *)(iVar16 + *(int *)(param_1 + 0x1c));
      if (*piVar3 != 0) {
        piVar3[3] = (int)((float)piVar3[3] - (float)iStack_bc);
        iVar12 = iVar16 + *(int *)(param_1 + 0x1c);
        if (*(float *)(iVar12 + 0xc) < 0.0) {
          puVar1 = *(uint **)(iVar12 + 4);
          uVar10 = *puVar1 >> 0x19;
          uVar9 = 0;
          uVar4 = (int)*puVar1 >> 4;
          if (uVar10 - 0x2b < 3) {
            uVar9 = uVar4 & 1;
          }
          piVar3 = (int *)0x0;
          if (uVar9 != 0) {
            piVar3 = (int *)puVar1[8];
          }
          if (puVar1 == (uint *)0x0) {
            iVar12 = *(int *)(param_1 + 0x1c);
          }
          else {
            uVar9 = 0;
            if (uVar10 == 9) {
              uVar9 = uVar4 & 1;
            }
            if (uVar9 != 0) {
LAB_00231900:
              iVar12 = iVar16 + *(int *)(param_1 + 0x1c);
              piVar15 = *(int **)(iVar12 + 0x10);
              iVar13 = 0;
              iVar12 = *(int *)(iVar12 + 0x14);
              if (piVar15 == DAT_0043df40) {
                piVar15 = piVar3;
              }
              uVar7 = FUN_0021f0f8(0x43db68,auStack_c0);
              if (0 < iVar12) {
                puStack_b0 = &DAT_0043db68;
                uStack_ac = 0;
                do {
                  iVar8 = iVar16 + *(int *)(param_1 + 0x1c);
                  iVar11 = DAT_0043db68 * 4;
                  DAT_0043db68 = DAT_0043db68 + 1;
                  iVar5 = *(int *)(iVar8 + 0x14) - iVar13;
                  iVar13 = iVar13 + 1;
                  iVar5 = *(int *)(iVar5 * 4 + *(int *)(iVar8 + 0x1c) + -4);
                  *(int *)(iVar11 + puStack_b0[2]) = iVar5;
                  (**(code **)(*(int *)(iVar5 + 4) + 0xc))
                            (iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
                } while (iVar13 < iVar12);
              }
              FUN_0021ea58(0x43db68,piVar15,puVar1,iVar12);
              iVar13 = 1;
              FUN_0021f120(0x43db68,uVar7,auStack_c0);
              iVar12 = DAT_0043db68;
              if (0 < DAT_0043db68) {
                do {
                  iVar5 = DAT_0043db68 - iVar13;
                  iVar13 = iVar13 + 1;
                  iVar5 = *(int *)(iVar5 * 4 + DAT_0043db70);
                  iVar8 = *(int *)(iVar5 + 4);
                  (**(code **)(iVar8 + 0x14))(iVar5 + *(short *)(iVar8 + 0x10));
                } while (iVar13 <= iVar12);
              }
              DAT_0043db68 = DAT_0043db68 - iVar12;
              iVar12 = iVar16 + *(int *)(param_1 + 0x1c);
              *(float *)(iVar12 + 0xc) = *(float *)(iVar12 + 0xc) + *(float *)(iVar12 + 8);
              goto LAB_00231ae4;
            }
            if (piVar3 == (int *)0x0) {
              iVar12 = *(int *)(param_1 + 0x1c);
            }
            else if ((*piVar3 >> 4 & 1U) == 1) {
              lVar6 = FUN_00387080(piVar3);
              bVar2 = false;
              if (lVar6 == 0x13) {
                lVar6 = FUN_003871c0(piVar3);
                bVar2 = lVar6 == 0;
              }
              if (!bVar2) goto LAB_00231900;
              iVar12 = *(int *)(param_1 + 0x1c);
            }
            else {
              iVar12 = *(int *)(param_1 + 0x1c);
            }
          }
          iVar12 = *(int *)(iVar16 + iVar12 + 4);
          iVar13 = *(int *)(iVar12 + 4);
          (**(code **)(iVar13 + 0x14))(iVar12 + *(short *)(iVar13 + 0x10));
          iVar13 = iVar16 + *(int *)(param_1 + 0x1c);
          iVar12 = *(int *)(iVar13 + 0x14);
          if (iVar12 < 1) {
            iVar12 = *(int *)(param_1 + 0x1c);
          }
          else {
            do {
              iVar12 = iVar12 + -1;
              iVar5 = *(int *)(*(int *)(iVar13 + 0x14) * 4 + *(int *)(iVar13 + 0x1c) + -4);
              iVar8 = *(int *)(iVar5 + 4);
              (**(code **)(iVar8 + 0x14))(iVar5 + *(short *)(iVar8 + 0x10));
              *(int *)(iVar13 + 0x14) = *(int *)(iVar13 + 0x14) + -1;
            } while (iVar12 != 0);
            iVar12 = *(int *)(param_1 + 0x1c);
          }
          *(undefined4 *)(iVar16 + iVar12) = 0;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
LAB_00231ae4:
        iVar14 = iVar14 + -1;
        if (iVar14 == 0) {
          return;
        }
      }
      iStack_b8 = iStack_b8 + 1;
      iVar16 = iVar16 + 0x20;
    } while (iStack_b8 < *(int *)(DAT_0043df68 + 0x88));
  }
  return;
}


// ==== FUN_00231b48 @ 00231b48 ====

void FUN_00231b48(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < param_1[1]) {
    iVar6 = 0;
    iVar3 = *param_1;
    while( true ) {
      uVar1 = *(undefined4 *)(iVar6 + iVar3);
      lVar5 = FUN_00387080(uVar1);
      bVar2 = false;
      if (lVar5 == 0xd) {
        lVar5 = FUN_003871c0(uVar1);
        bVar2 = lVar5 == 0;
      }
      iVar3 = *param_1;
      if (bVar2) {
        if (*(int *)(*(int *)(*(int *)(iVar6 + iVar3) + 0x48) + 0x18) == -1) {
          FUN_0023e3d0();
          iVar3 = *param_1;
        }
        else {
          iVar3 = *param_1;
        }
      }
      iVar7 = iVar7 + 1;
      piVar4 = (int *)(iVar6 + iVar3);
      iVar6 = iVar6 + 4;
      iVar3 = *(int *)(*piVar4 + 4);
      (**(code **)(iVar3 + 0x14))(*piVar4 + (int)*(short *)(iVar3 + 0x10));
      if (param_1[1] <= iVar7) break;
      iVar3 = *param_1;
    }
  }
  param_1[1] = 0;
  return;
}


// ==== FUN_00231c50 @ 00231c50 ====

void FUN_00231c50(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 uStack_b0;
  undefined1 auStack_af [15];
  
  iVar1 = *(int *)((int)param_1 + 0x80);
  piVar6 = *(int **)(iVar1 + 4);
  if (piVar6 != *(int **)(iVar1 + 8)) {
    *(int **)(iVar1 + 0xc) = piVar6;
    while( true ) {
      if (*piVar6 == 1) {
        DAT_0043dba4 = piVar6[1];
        piVar2 = (int *)piVar6[4];
        if ((*piVar2 >> 4 & 1U) == 1) {
          lVar7 = FUN_00387080(piVar2);
          bVar3 = false;
          if (lVar7 == 0x13) {
            lVar7 = FUN_003871c0(piVar2);
            bVar3 = lVar7 == 0;
          }
          if ((!bVar3) &&
             (((-1 < piVar6[2] || (*(int *)(piVar6[4] + 0x48) == 0)) ||
              (-piVar6[2] == *(int *)(*(int *)(piVar6[4] + 0x48) + 0x18))))) {
            uVar8 = FUN_0021f0f8(0x43db68,&uStack_b0);
            if (piVar6[4] == 0) {
              uVar9 = 0;
            }
            else {
              iVar4 = FUN_0023e5f0();
              uVar9 = *(undefined4 *)(iVar4 + 0x48);
            }
            FUN_00220828(0x43db68,*(undefined4 *)piVar6[3],piVar6[4],0xffffffffffffffff,uVar9);
            FUN_0021f120(0x43db68,uVar8,&uStack_b0);
            FUN_00231b48(param_1);
          }
        }
      }
      else if (*piVar6 == 2) {
        DAT_0043dba4 = piVar6[1];
        iVar4 = piVar6[2];
        iVar5 = DAT_0043db8c * 4;
        DAT_0043db8c = DAT_0043db8c + 1;
        *(int *)(iVar5 + DAT_0043db94) = iVar4;
        (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
        uVar8 = FUN_0021f0f8(0x43db68,auStack_af);
        FUN_0021ea58(0x43db68,piVar6[2],piVar6[3],piVar6[4]);
        FUN_0021f120(0x43db68,uVar8,auStack_af);
        iVar4 = *(int *)(DAT_0043db8c * 4 + DAT_0043db94 + -4);
        iVar5 = *(int *)(iVar4 + 4);
        (**(code **)(iVar5 + 0x14))(iVar4 + *(short *)(iVar5 + 0x10));
        DAT_0043db8c = DAT_0043db8c + -1;
        if (0 < DAT_0043db68) {
          iVar4 = *(int *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
          iVar5 = *(int *)(iVar4 + 4);
          (**(code **)(iVar5 + 0x14))(iVar4 + *(short *)(iVar5 + 0x10));
          DAT_0043db68 = DAT_0043db68 + -1;
        }
      }
      if (0 < DAT_0043db68) {
        iVar4 = *(int *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
        iVar5 = *(int *)(iVar4 + 4);
        (**(code **)(iVar5 + 0x14))(iVar4 + *(short *)(iVar5 + 0x10));
        DAT_0043db68 = DAT_0043db68 + -1;
      }
      piVar6 = (int *)FUN_00386838(iVar1,piVar6);
      if (piVar6 == *(int **)(iVar1 + 8)) break;
      *(int **)(iVar1 + 0xc) = piVar6;
    }
  }
  FUN_00231b48(param_1);
  FUN_00232878(iVar1);
  return;
}


// ==== FUN_00231f28 @ 00231f28 ====

void FUN_00231f28(int param_1,undefined4 param_2)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x8c)) {
    *(undefined4 *)(*(int *)(param_1 + 0x24) * 4 + *(int *)(param_1 + 0x28)) = param_2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    if (DAT_003be8dc != 0) {
      uStack_20 = DAT_0043df64;
      uStack_1c = param_2;
      (*DAT_0043da88)(&uStack_20,8);
    }
  }
  return;
}


// ==== FUN_00231fa0 @ 00231fa0 ====

void FUN_00231fa0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if ((iVar6 != 0) && (iVar10 = 0, 0 < *(int *)(DAT_0043df68 + 0x88))) {
    iVar9 = 0;
    do {
      piVar4 = (int *)(iVar9 + *(int *)(param_1 + 0x1c));
      if (*piVar4 != 0) {
        if (*(int *)(param_2 + 0x48) != 0) {
          puVar1 = (uint *)piVar4[1];
          uVar5 = 0;
          if ((*puVar1 >> 0x19) - 0x2b < 3) {
            uVar5 = (int)*puVar1 >> 4 & 1;
          }
          if (uVar5 != 0) {
            if (*(int *)(puVar1[8] + 0x48) == 0) {
              uVar5 = puVar1[1];
            }
            else {
              if (*(int *)(puVar1[8] + 0x48) != *(int *)(param_2 + 0x48)) goto LAB_002320f0;
              uVar5 = puVar1[1];
            }
            (**(code **)(uVar5 + 0x14))((int)puVar1 + (int)*(short *)(uVar5 + 0x10));
            iVar7 = iVar9 + *(int *)(param_1 + 0x1c);
            iVar8 = *(int *)(iVar7 + 0x14);
            if (iVar8 < 1) {
              iVar8 = *(int *)(param_1 + 0x1c);
            }
            else {
              do {
                iVar8 = iVar8 + -1;
                iVar2 = *(int *)(*(int *)(iVar7 + 0x14) * 4 + *(int *)(iVar7 + 0x1c) + -4);
                iVar3 = *(int *)(iVar2 + 4);
                (**(code **)(iVar3 + 0x14))(iVar2 + *(short *)(iVar3 + 0x10));
                *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + -1;
              } while (iVar8 != 0);
              iVar8 = *(int *)(param_1 + 0x1c);
            }
            *(undefined4 *)(iVar9 + iVar8) = 0;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          }
        }
LAB_002320f0:
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          return;
        }
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x20;
    } while (iVar10 < *(int *)(DAT_0043df68 + 0x88));
  }
  return;
}


// ==== FUN_00232140 @ 00232140 ====

undefined4 FUN_00232140(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    while( true ) {
      if (param_2 == 0) {
        return 1;
      }
      if (param_2 == *(int *)(param_1 + 0x7c)) break;
      param_2 = *(int *)(param_2 + 0x44);
    }
  }
  return 0;
}


// ==== FUN_00232180 @ 00232180 ====

undefined4 FUN_00232180(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_2 * 0x10 + *(int *)(param_1 + 0x24) + 0xc) + 0x10);
  iVar5 = 0;
  if (*(int *)(iVar1 + 0x30) < 1) {
LAB_0023220c:
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x24);
    while( true ) {
      lVar3 = strcmp(*(undefined4 *)(param_2 * 0x10 + iVar4 + 4),
                     *(undefined4 *)(iVar5 * 8 + *(int *)(iVar1 + 0x34)));
      if (lVar3 == 0) break;
      iVar5 = iVar5 + 1;
      if (*(int *)(iVar1 + 0x30) <= iVar5) goto LAB_0023220c;
      iVar4 = *(int *)(param_1 + 0x24);
    }
    uVar2 = *(undefined4 *)(iVar5 * 8 + *(int *)(iVar1 + 0x34) + 4);
  }
  return uVar2;
}


// ==== FUN_00232230 @ 00232230 ====

void FUN_00232230(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(int *)(*(int *)((int)param_2 + 0x48) + 8) + 8);
  lVar2 = FUN_00230c00(param_1,param_3);
  if (lVar2 != -1) {
    param_3 = FUN_00232180(param_1,lVar2);
    if (param_3 != -1) {
      iVar4 = *(int *)(*(int *)((int)lVar2 * 0x10 + *(int *)(param_1 + 0x24) + 0xc) + 0x10);
      param_1 = iVar4 + 8;
      piVar5 = (int *)(*(int *)((int)param_3 * 4 + *(int *)(iVar4 + 0x18)) + 8);
    }
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    if (0 < *(int *)piVar5[1]) {
      iVar1 = ((int *)piVar5[1])[1];
      while( true ) {
        piVar3 = *(int **)(iVar4 * 4 + iVar1);
        if (*piVar3 == 3) {
          if (piVar3[3] != -1) {
            FUN_00232370(param_1,param_2);
          }
          piVar3 = (int *)piVar5[1];
        }
        else {
          piVar3 = (int *)piVar5[1];
        }
        iVar4 = iVar4 + 1;
        if (*piVar3 <= iVar4) break;
        iVar1 = piVar3[1];
      }
    }
  }
  if (param_3 != -1) {
    FUN_00232370(param_1,param_2,param_3);
  }
  return;
}


// ==== FUN_00232370 @ 00232370 ====

void FUN_00232370(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_80 [16];
  
  iVar6 = (int)param_1;
  iVar4 = 0;
  if (**(int **)(iVar6 + 4) < 1) {
    return;
  }
  iVar1 = (*(int **)(iVar6 + 4))[1];
  while( true ) {
    piVar3 = *(int **)(iVar4 * 4 + iVar1);
    if (*piVar3 == 8) {
      if (piVar3[1] == param_3) {
        FUN_00232490(param_1,param_2);
        uVar2 = FUN_0021f0f8(0x43db68,auStack_80);
        if (param_2 == 0) {
          uVar5 = 0;
        }
        else {
          iVar1 = FUN_0023e5f0(param_2);
          uVar5 = *(undefined4 *)(iVar1 + 0x48);
        }
        FUN_00220828(0x43db68,*(undefined4 *)
                               (*(int *)(iVar4 * 4 + *(int *)(*(int *)(iVar6 + 4) + 4)) + 8),param_2
                     ,0xffffffffffffffff,uVar5);
        FUN_0021f120(0x43db68,uVar2,auStack_80);
        piVar3[1] = -piVar3[1];
        return;
      }
      piVar3 = *(int **)(iVar6 + 4);
    }
    else {
      piVar3 = *(int **)(iVar6 + 4);
    }
    iVar4 = iVar4 + 1;
    if (*piVar3 <= iVar4) break;
    iVar1 = piVar3[1];
  }
  return;
}


// ==== FUN_00232490 @ 00232490 ====

/* Strings referenciadas:
     "__Packages." */

void FUN_00232490(int param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 auStack_b0 [16];
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar6 = 0;
    while (puVar7 = (undefined4 *)(iVar6 + *(int *)(param_1 + 0x2c)), -1 < (int)puVar7[1]) {
      iVar10 = iVar10 + 1;
      lVar4 = FUN_00360a50(*puVar7,0x3fd5e8);
      if (lVar4 == 0) {
        iVar6 = *(int *)(param_1 + 0x28);
      }
      else {
        piVar1 = *(int **)(param_1 + 4);
        iVar8 = 0;
        if (0 < *piVar1) {
          iVar3 = piVar1[1];
          while( true ) {
            piVar2 = *(int **)(iVar8 * 4 + iVar3);
            if ((*piVar2 == 8) && (piVar2[1] == *(int *)(iVar6 + *(int *)(param_1 + 0x2c) + 4))) {
              uVar5 = FUN_0021f0f8(0x43db68,auStack_b0);
              if (param_2 == 0) {
                uVar9 = 0;
              }
              else {
                iVar3 = FUN_0023e5f0(param_2);
                uVar9 = *(undefined4 *)(iVar3 + 0x48);
              }
              FUN_00220828(0x43db68,*(undefined4 *)
                                     (*(int *)(iVar8 * 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 8)
                           ,param_2,0xffffffffffffffff,uVar9);
              FUN_0021f120(0x43db68,uVar5,auStack_b0);
              iVar8 = *(int *)(param_1 + 0x2c);
              goto LAB_002325e4;
            }
            iVar8 = iVar8 + 1;
            if (*piVar1 <= iVar8) break;
            iVar3 = piVar1[1];
          }
        }
        iVar8 = *(int *)(param_1 + 0x2c);
LAB_002325e4:
        *(int *)(iVar6 + iVar8 + 4) = -*(int *)(iVar6 + iVar8 + 4);
        iVar6 = *(int *)(param_1 + 0x28);
      }
      if (iVar6 <= iVar10) {
        return;
      }
      iVar6 = iVar10 * 8;
    }
  }
  return;
}


// ==== FUN_00232638 @ 00232638 ====

/* Strings referenciadas:
     "AptAnimationPoolData::listenerSet.aElements"
     "AptAnimationPoolData::inputSet.aElements" */

void FUN_00232638(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1[0x1f] != 0) {
    (*DAT_003bfab0)(0,param_1[0x1f],0x3fd5f8);
  }
  iVar6 = 0;
  if (0 < param_1[1]) {
    iVar4 = *param_1;
    while( true ) {
      iVar2 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      (*DAT_003bfab0)(0,*(undefined4 *)(iVar2 + iVar4),0x3fd620);
      if (param_1[1] <= iVar6) break;
      iVar4 = *param_1;
    }
  }
  uVar1 = *(ushort *)((int)param_1 + 10);
  iVar6 = 0;
  if (uVar1 != 0) {
    iVar4 = param_1[3];
    while( true ) {
      iVar4 = *(int *)(iVar6 * 4 + iVar4);
      if (iVar4 != 0) {
        (*DAT_003bfab0)(0,iVar4,0x3fd648);
      }
      iVar6 = iVar6 + 1;
      if ((int)(uint)uVar1 <= iVar6) break;
      iVar4 = param_1[3];
    }
  }
  uVar1 = *(ushort *)((int)param_1 + 0x12);
  iVar6 = 0;
  if (uVar1 != 0) {
    iVar4 = param_1[5];
    while( true ) {
      iVar4 = *(int *)(iVar6 * 4 + iVar4);
      if (iVar4 != 0) {
        (*DAT_003bfab0)(0,iVar4,0x3fd678);
      }
      iVar6 = iVar6 + 1;
      if ((int)(uint)uVar1 <= iVar6) break;
      iVar4 = param_1[5];
    }
  }
  if (param_1[6] != 0) {
    FUN_0023ecc0(param_1[6],0);
  }
  FUN_00232e90(param_1[0x20]);
  iVar6 = 0;
  if (0 < param_1[0x22]) {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + 1;
      if (*(int *)(iVar4 + param_1[7]) == 0) {
LAB_00232830:
        iVar2 = param_1[0x22];
      }
      else {
        iVar7 = 0;
        (*DAT_003bfab0)(0,((int *)(iVar4 + param_1[7]))[1],0x3fd6a8);
        iVar2 = *(int *)(iVar4 + param_1[7] + 0x14);
        if (0 < iVar2) {
          iVar5 = param_1[7];
          while( true ) {
            iVar3 = *(int *)(iVar4 + iVar5 + 0x14) - iVar7;
            iVar7 = iVar7 + 1;
            (*DAT_003bfab0)(0,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar4 + iVar5 + 0x1c) + -4),
                            0x3fd6e0);
            if (iVar2 <= iVar7) break;
            iVar5 = param_1[7];
          }
          goto LAB_00232830;
        }
        iVar2 = param_1[0x22];
      }
      iVar4 = iVar6 * 0x20;
    } while (iVar6 < iVar2);
  }
  return;
}


// ==== FUN_00232878 @ 00232878 ====

void FUN_00232878(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  piVar2 = (int *)puVar3[1];
  if (piVar2 != (int *)puVar3[2]) {
    iVar1 = *piVar2;
    while( true ) {
      if (iVar1 == 1) {
        iVar1 = *(int *)(piVar2[4] + 4);
        (**(code **)(iVar1 + 0x14))(piVar2[4] + (int)*(short *)(iVar1 + 0x10));
        *piVar2 = 0;
      }
      else if (iVar1 == 2) {
        iVar1 = *(int *)(piVar2[2] + 4);
        (**(code **)(iVar1 + 0x14))(piVar2[2] + (int)*(short *)(iVar1 + 0x10));
        iVar1 = *(int *)(piVar2[3] + 4);
        (**(code **)(iVar1 + 0x14))(piVar2[3] + (int)*(short *)(iVar1 + 0x10));
        *piVar2 = 0;
      }
      else {
        *piVar2 = 0;
      }
      piVar2 = (int *)FUN_00386838(param_1,piVar2);
      if (piVar2 == (int *)puVar3[2]) break;
      iVar1 = *piVar2;
    }
  }
  puVar3[1] = *puVar3;
  puVar3[2] = *puVar3;
  return;
}


// ==== FUN_00232958 @ 00232958 ====

void FUN_00232958(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2] + 5;
  if (puVar1 == (undefined4 *)*param_1 + param_1[4] * 5) {
    puVar1 = (undefined4 *)*param_1;
  }
  if (puVar1 != (undefined4 *)param_1[1]) {
    *(undefined4 *)param_1[2] = 1;
    *(undefined4 *)(param_1[2] + 8) = *(undefined4 *)(*(int *)(param_3 + 0x48) + 0x28);
    *(undefined4 *)(param_1[2] + 0xc) = param_2;
    *(int *)(param_1[2] + 0x10) = param_3;
    (**(code **)(*(int *)(param_3 + 4) + 0xc))(param_3 + *(short *)(*(int *)(param_3 + 4) + 8));
    *(undefined4 *)(param_1[2] + 4) = param_4;
    param_1[2] = puVar1;
  }
  return;
}


// ==== FUN_00232a00 @ 00232a00 ====

void FUN_00232a00(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_1[1] - 0x14;
  if (uVar1 < *param_1) {
    uVar1 = *param_1 + param_1[4] * 0x14 + -0x14;
  }
  if (uVar1 != param_1[2]) {
    param_1[1] = uVar1;
    *(undefined4 *)(uVar1 + 8) = *(undefined4 *)(*(int *)(param_3 + 0x48) + 0x28);
    *(undefined4 *)param_1[1] = 1;
    *(undefined4 *)(param_1[1] + 0xc) = param_2;
    *(int *)(param_1[1] + 0x10) = param_3;
    (**(code **)(*(int *)(param_3 + 4) + 0xc))(param_3 + *(short *)(*(int *)(param_3 + 4) + 8));
    *(undefined4 *)(param_1[1] + 4) = param_4;
  }
  return;
}


// ==== FUN_00232aa8 @ 00232aa8 ====

void FUN_00232aa8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[2] + 5;
  if (puVar2 == (undefined4 *)*param_1 + param_1[4] * 5) {
    puVar2 = (undefined4 *)*param_1;
  }
  if (puVar2 != (undefined4 *)param_1[1]) {
    *(undefined4 *)param_1[2] = 2;
    *(undefined4 *)(param_1[2] + 4) = param_5;
    *(undefined4 *)(param_1[2] + 8) = param_2;
    iVar1 = *(int *)(*(int *)(param_1[2] + 8) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1[2] + 8) + (int)*(short *)(iVar1 + 8));
    *(undefined4 *)(param_1[2] + 0xc) = param_3;
    iVar1 = *(int *)(*(int *)(param_1[2] + 0xc) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1[2] + 0xc) + (int)*(short *)(iVar1 + 8));
    *(undefined4 *)(param_1[2] + 0x10) = param_4;
    param_1[2] = puVar2;
  }
  return;
}


// ==== FUN_00232b78 @ 00232b78 ====

void FUN_00232b78(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[1] + -0x14);
  if (puVar2 < (undefined4 *)*param_1) {
    puVar2 = (undefined4 *)*param_1 + param_1[4] * 5 + -5;
  }
  if (puVar2 != (undefined4 *)param_1[2]) {
    param_1[1] = puVar2;
    *puVar2 = 2;
    *(undefined4 *)(param_1[1] + 4) = param_5;
    *(undefined4 *)(param_1[1] + 8) = param_2;
    iVar1 = *(int *)(*(int *)(param_1[1] + 8) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1[1] + 8) + (int)*(short *)(iVar1 + 8));
    *(undefined4 *)(param_1[1] + 0xc) = param_3;
    iVar1 = *(int *)(*(int *)(param_1[1] + 0xc) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1[1] + 0xc) + (int)*(short *)(iVar1 + 8));
    *(undefined4 *)(param_1[1] + 0x10) = param_4;
  }
  return;
}


// ==== FUN_00232c48 @ 00232c48 ====

void FUN_00232c48(undefined8 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  
  puVar5 = (uint *)param_1;
  piVar2 = (int *)puVar5[1];
  if (piVar2 == (int *)puVar5[2]) {
    return;
  }
  iVar3 = *piVar2;
  do {
    if (((iVar3 == 1) && (piVar2[4] == param_2)) && (piVar2 != (int *)puVar5[3])) {
      if (piVar2 < (int *)puVar5[2]) {
        (**(code **)(*(int *)(param_2 + 4) + 0x14))
                  (param_2 + *(short *)(*(int *)(param_2 + 4) + 0x10));
        FUN_0035c5f0(piVar2,piVar2 + 5,
                     (((int)((puVar5[2] - (int)piVar2) * -0x33333333) >> 2) + -1) * 0x14);
        if (*puVar5 <= puVar5[2] - 0x14) {
          puVar5[2] = puVar5[2] - 0x14;
          return;
        }
        puVar5[2] = *puVar5 + puVar5[4] * 0x14 + -0x14;
        return;
      }
      if ((int *)puVar5[1] < piVar2) {
        (**(code **)(*(int *)(param_2 + 4) + 0x14))
                  (param_2 + *(short *)(*(int *)(param_2 + 4) + 0x10));
        uVar1 = puVar5[1];
        FUN_0035c5f0(uVar1 + 0x14,uVar1,((int)(((int)piVar2 - uVar1) * -0x33333333) >> 2) * 0x14);
        uVar1 = puVar5[1] + 0x14;
        if (puVar5[1] + 0x14 == *puVar5 + puVar5[4] * 0x14) {
          uVar1 = *puVar5;
        }
        puVar5[1] = uVar1;
        return;
      }
      if (piVar2 == (int *)puVar5[1]) {
        piVar4 = piVar2 + 5;
        if (piVar2 + 5 == (int *)*puVar5 + puVar5[4] * 5) {
          piVar4 = (int *)*puVar5;
        }
        puVar5[1] = (uint)piVar4;
        return;
      }
    }
    piVar2 = (int *)FUN_00386838(param_1,piVar2);
    if (piVar2 == (int *)puVar5[2]) {
      return;
    }
    iVar3 = *piVar2;
  } while( true );
}


// ==== FUN_00232e00 @ 00232e00 ====

int FUN_00232e00(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) * -0x33333333 >> 2;
  if (iVar1 < 0) {
    return iVar1 + *(int *)(param_1 + 0x10);
  }
  return iVar1;
}


// ==== FUN_00232e40 @ 00232e40 ====

int FUN_00232e40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = (((param_1[1] - iVar2) * -0x33333333 >> 2) + param_2) % param_1[4];
  if (iVar1 < 0) {
    return (iVar1 + param_1[4]) * 0x14 + iVar2;
  }
  return iVar1 * 0x14 + iVar2;
}


// ==== FUN_00232e90 @ 00232e90 ====

/* Strings referenciadas:
     "AptAnimationPoolData::action.pCIH" */

void FUN_00232e90(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_00232e00();
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_00232e40(param_1,iVar3);
      if (*piVar2 == 1) {
        (*DAT_003bfab0)(0,piVar2[4],0x3fd718);
      }
      else if (*piVar2 == 2) {
        (*DAT_003bfab0)(0,piVar2[2],0x3fd740);
        (*DAT_003bfab0)(0,piVar2[3],0x3fd768);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


// ==== FUN_00232f90 @ 00232f90 ====

/* WARNING: Removing unreachable block (ram,0x00232fc4) */
/* WARNING: Removing unreachable block (ram,0x00232fcc) */
/* WARNING: Removing unreachable block (ram,0x00233018) */

undefined ** FUN_00232f90(byte *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte abStack_120 [8];
  undefined8 auStack_118 [31];
  
  pbVar5 = abStack_120;
  if (param_2 - 3U < 6) {
    ppuVar3 = &PTR_DAT_003fd790;
    do {
      uVar6 = *(undefined8 *)(ppuVar3 + 2);
      uVar7 = *(undefined8 *)(ppuVar3 + 4);
      uVar8 = *(undefined8 *)(ppuVar3 + 6);
      *(undefined8 *)pbVar5 = *(undefined8 *)ppuVar3;
      *(undefined8 *)((int)pbVar5 + 8) = uVar6;
      *(undefined8 *)((int)pbVar5 + 0x10) = uVar7;
      *(undefined8 *)((int)pbVar5 + 0x18) = uVar8;
      ppuVar3 = ppuVar3 + 8;
      pbVar5 = (byte *)((int)pbVar5 + 0x20);
    } while (ppuVar3 != (undefined **)&DAT_003fd890);
    uVar4 = param_2 + (uint)abStack_120[param_1[param_2 + -1]] + (uint)abStack_120[*param_1];
    if (uVar4 < 0x1c) {
      pcVar1 = (&PTR_DAT_003bec48)[uVar4 * 2];
      if ((long)(int)(char)*param_1 != (long)*pcVar1) {
        return (undefined **)0x0;
      }
      lVar2 = strcmp(param_1 + 1,pcVar1 + 1);
      if (lVar2 == 0) {
        return &PTR_DAT_003bec48 + uVar4 * 2;
      }
    }
  }
  return (undefined **)0x0;
}


// ==== FUN_002330d8 @ 002330d8 ====

undefined8 FUN_002330d8(undefined8 param_1)

{
  int iVar1;
  
  FUN_00386ec8(param_1,0x16);
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 4) = &DAT_003e1f88;
  Pow2Container_ctor(iVar1 + 8,8);
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined **)(iVar1 + 4) = &DAT_003e1a08;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffcff;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return param_1;
}


// ==== FUN_00233150 @ 00233150 ====

void FUN_00233150(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x2c);
  }
  return;
}


// ==== FUN_002331c0 @ 002331c0 ====

void FUN_002331c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_00250570();
  if (*(int *)(param_1 + 0x28) < 1) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x28);
      }
      else {
        (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
        *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x20)) = 0;
        iVar1 = *(int *)(param_1 + 0x28);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    Pool_Free(DAT_0043dee0,iVar2,*(int *)(param_1 + 0x24) << 2);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ==== FUN_00233278 @ 00233278 ====

void FUN_00233278(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_00250550();
  iVar3 = (int)param_1;
  if (0 < *(int *)(iVar3 + 0x28)) {
    iVar1 = *(int *)(iVar3 + 0x20);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 != 0) {
        (*DAT_003bfab0)(param_1,iVar1,0x3fd8f0);
      }
      iVar2 = iVar2 + 1;
      if (*(int *)(iVar3 + 0x28) <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x20);
    }
  }
  return;
}


// ==== FUN_00233300 @ 00233300 ====

void FUN_00233300(int param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) < param_2) {
    for (param_2 = param_2 + -1; param_2 != 0; param_2 = param_2 >> 1) {
      uVar2 = uVar2 + 1;
    }
    iVar3 = 1 << (uVar2 & 0x1f);
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    uVar1 = Pool_Alloc(DAT_0043dee0,iVar3 << 2);
    memset(uVar1,0,iVar3 << 2);
    if (*(int *)(param_1 + 0x20) != 0) {
      memcpy(uVar1,*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24) << 2);
      Pool_Free(DAT_0043dee0,*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x24) << 2);
    }
    *(int *)(param_1 + 0x24) = iVar3;
    *(int *)(param_1 + 0x20) = (int)uVar1;
  }
  return;
}


// ==== FUN_002333e8 @ 002333e8 ====

void FUN_002333e8(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (-1 < param_2) {
    iVar3 = (int)param_2 + 1;
    iVar4 = (int)param_2 * 4;
    FUN_00233300(param_1,iVar3);
    iVar2 = (int)param_1;
    iVar1 = *(int *)(iVar4 + *(int *)(iVar2 + 0x20));
    (**(code **)(*(int *)(param_3 + 4) + 0xc))(param_3 + *(short *)(*(int *)(param_3 + 4) + 8));
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar2 + 0x20);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
      iVar1 = *(int *)(iVar2 + 0x20);
    }
    *(int *)(iVar4 + iVar1) = param_3;
    iVar1 = *(int *)(iVar2 + 0x28);
    if (*(int *)(iVar2 + 0x28) < iVar3) {
      iVar1 = iVar3;
    }
    *(int *)(iVar2 + 0x28) = iVar1;
  }
  return;
}


// ==== FUN_002334a0 @ 002334a0 ====

int FUN_002334a0(int param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
    iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x20));
    if (iVar1 == 0) {
      iVar1 = DAT_0043df40;
    }
    return iVar1;
  }
  return DAT_0043df40;
}


// ==== FUN_002334f0 @ 002334f0 ====

void FUN_002334f0(int param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short *apsStack_90 [4];
  
  String_ctor_cstr(apsStack_90,0x40de10);
  *apsStack_90[0] = *apsStack_90[0] + 1;
  psVar2 = (short *)*(undefined4 *)param_2;
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  *(undefined4 *)param_2 = apsStack_90[0];
  sVar1 = *apsStack_90[0];
  *apsStack_90[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = *(int *)(param_1 + 0x20);
    while( true ) {
      iVar3 = *(int *)(iVar4 * 4 + iVar3);
      if (iVar3 != 0) {
        apsStack_90[0] = &DAT_003bfaf8;
        DAT_003bfaf8 = DAT_003bfaf8 + 1;
        FUN_0024c6d0(iVar3,apsStack_90);
        FUN_00252d28(param_2,apsStack_90);
        sVar1 = *apsStack_90[0];
        *apsStack_90[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
        }
      }
      if (iVar4 < *(int *)(param_1 + 0x28) + -1) {
        FUN_00252e10(param_2,param_3);
      }
      iVar4 = iVar4 + 1;
      if (*(int *)(param_1 + 0x28) <= iVar4) break;
      iVar3 = *(int *)(param_1 + 0x20);
    }
  }
  return;
}


// ==== FUN_00233670 @ 00233670 ====

uint * FUN_00233670(int param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  int aiStack_50 [4];
  
  piVar9 = (int *)param_3;
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_00232f90(*piVar9 + 8,*(undefined2 *)(*piVar9 + 2));
  }
  puVar6 = DAT_003bfaec;
  if (lVar7 == 0) {
    iVar8 = *piVar9;
  }
  else {
    if (*(int *)((int)lVar7 + 4) == 1) {
      uVar2 = *(uint *)(param_1 + 0x28);
      if (DAT_003bfaec != (uint *)0x0) {
        uVar3 = *DAT_003bfaec;
        uVar4 = DAT_003bfaec[2];
        *DAT_003bfaec = uVar3 | 4;
        DAT_003bfaec = (uint *)uVar4;
        piVar9 = DAT_003be8e0;
        iVar8 = DAT_003be8e0[1];
        if (iVar8 < *DAT_003be8e0) {
          *(uint **)(iVar8 * 4 + DAT_003be8e0[2]) = puVar6;
          piVar9[1] = iVar8 + 1;
        }
        else {
          *puVar6 = uVar3 & 0xfffffffb;
        }
        puVar6[2] = uVar2;
        return puVar6;
      }
      puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,7);
      puVar6[2] = uVar2;
      puVar6[1] = (uint)&DAT_003e2230;
      return puVar6;
    }
    iVar8 = *piVar9;
  }
  aiStack_50[0] = 0;
  uVar5 = strtol(iVar8 + 8,aiStack_50,10);
  uVar1 = *(ushort *)(*piVar9 + 2);
  if ((uVar1 == 0) || (aiStack_50[0] != *piVar9 + 8 + (uint)uVar1)) {
    puVar6 = (uint *)FUN_00248c78(param_1 + 8,param_3);
  }
  else {
    puVar6 = (uint *)FUN_002334a0(param_2,uVar5);
  }
  return puVar6;
}


// ==== FUN_002337e0 @ 002337e0 ====

bool FUN_002337e0(char *param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = atoi();
  bVar1 = true;
  if (lVar2 == 0) {
    bVar1 = *param_1 == '0';
  }
  return bVar1;
}


// ==== FUN_00233818 @ 00233818 ====

undefined4 FUN_00233818(undefined8 param_1,undefined8 param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_002337e0(*param_3 + 8);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar3 = atoi(*param_3 + 8);
    if (param_4 == 0) {
      param_4 = DAT_0043df40;
    }
    FUN_002333e8(param_2,uVar3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00233890 @ 00233890 ====

/* WARNING: Removing unreachable block (ram,0x002338c0) */
/* WARNING: Removing unreachable block (ram,0x002338c4) */
/* WARNING: Removing unreachable block (ram,0x00233910) */

undefined ** FUN_00233890(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte abStack_120 [8];
  undefined8 auStack_118 [31];
  
  pbVar6 = abStack_120;
  if (0xd < param_2 - 4U) {
    return (undefined **)0x0;
  }
  puVar5 = &DAT_003fd8f8;
  do {
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    uVar9 = puVar5[3];
    *(undefined8 *)pbVar6 = *puVar5;
    *(undefined8 *)((int)pbVar6 + 8) = uVar7;
    *(undefined8 *)((int)pbVar6 + 0x10) = uVar8;
    *(undefined8 *)((int)pbVar6 + 0x18) = uVar9;
    puVar5 = puVar5 + 4;
    pbVar6 = (byte *)((int)pbVar6 + 0x20);
  } while (puVar5 != (undefined8 *)&UNK_003fd9f8);
  if (param_2 < 9) {
    if (param_2 < 2) {
      if (param_2 == 1) {
        bVar1 = *param_1;
        param_2 = 1;
        goto LAB_00233988;
      }
      goto LAB_00233964;
    }
  }
  else {
LAB_00233964:
    param_2 = param_2 + (uint)abStack_120[param_1[8]];
  }
  param_2 = param_2 + (uint)abStack_120[param_1[1]];
  bVar1 = *param_1;
LAB_00233988:
  bVar2 = abStack_120[bVar1];
  if (param_2 + (uint)bVar2 < 0x1e) {
    pcVar3 = (&PTR_DAT_003bed28)[(param_2 + (uint)bVar2) * 2];
    if ((long)(int)(char)bVar1 != (long)*pcVar3) {
      return (undefined **)0x0;
    }
    lVar4 = strcmp(param_1 + 1,pcVar3 + 1);
    if (lVar4 == 0) {
      return &PTR_DAT_003bed28 + (param_2 + (uint)bVar2) * 2;
    }
  }
  return (undefined **)0x0;
}


// ==== FUN_002339f0 @ 002339f0 ====

void FUN_002339f0(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    FUN_00249e68(param_2);
    FUN_0024a000(param_2,param_4);
  }
  if (*param_1 == 1) {
    (*DAT_0043daf0)(param_1[6],param_3);
  }
  if (param_4 != 0) {
    FUN_00249eb8(param_2);
  }
  return;
}


// ==== FUN_00233a80 @ 00233a80 ====

void FUN_00233a80(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    FUN_00249e68(param_2);
    FUN_0024a000(param_2,param_4);
  }
  iVar1 = *param_1;
  if (iVar1 == 10) {
    FUN_0024a040(param_2,param_3,param_1 + 2);
  }
  else if ((iVar1 < 0xb) && (iVar1 == 1)) {
    FUN_0024a040(param_2,param_3,param_1 + 2);
  }
  if (param_4 != 0) {
    FUN_00249eb8(param_2);
  }
  return;
}


// ==== FUN_00233b30 @ 00233b30 ====

undefined8 FUN_00233b30(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1;
  *puVar6 = 0xffffffff;
  *(undefined1 *)(puVar6 + 4) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[5] = &DAT_003e1258;
  FUN_00240758(puVar6 + 9);
  puVar6[8] = 0;
  puVar6[7] = puVar6[7] & 0xf2000000 | 0x2000000;
  puVar6[10] = 0;
  uVar5 = Pool_Alloc(DAT_0043dee0,0x14);
  uVar3 = Pow2Container_ctor(uVar5,8);
  puVar6[3] = uVar3;
  puVar6[6] = 0xffffffff;
  puVar6[0xb] = 0;
  iVar4 = FUN_00248c78(DAT_003bfabc + 8,0x43dd90);
  iVar4 = (**(code **)(*(int *)(iVar4 + 4) + 0x24))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x20));
  iVar4 = *(int *)(iVar4 + 0xc);
  iVar1 = puVar6[3];
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
  }
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
    *(int *)(iVar1 + 8) = iVar4;
  }
  else {
    (**(code **)(*(int *)(iVar2 + 4) + 0x14))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x10));
    *(int *)(iVar1 + 8) = iVar4;
  }
  return param_1;
}


// ==== FUN_00233c60 @ 00233c60 ====

void FUN_00233c60(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x14) = &DAT_003e1258;
  if (*(int *)(iVar1 + 0x2c) == 1) {
    Pool_Free(DAT_0043dee0,*(undefined4 *)(iVar1 + 8),0x3c);
  }
  FUN_00240798(iVar1 + 0x24,2);
  *(undefined **)(iVar1 + 0x14) = &DAT_003e12f8;
  if (*(int *)(iVar1 + 0xc) != 0) {
    FUN_002486d8(*(int *)(iVar1 + 0xc),3);
  }
  if ((param_2 & 1) != 0) {
    FUN_00107d48(param_1);
  }
  return;
}


// ==== FUN_00233cf8 @ 00233cf8 ====

void FUN_00233cf8(int param_1)

{
  FUN_00241228(param_1 + 0x24);
  return;
}


// ==== FUN_00233d18 @ 00233d18 ====

void FUN_00233d18(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  short *psVar11;
  int iVar12;
  short *apsStack_a0 [4];
  
  psVar11 = *(short **)(param_1 + 0x1c);
  if (psVar11 == &DAT_003bfaf8) {
    return;
  }
  if ((char)psVar11[4] == '$') {
    *psVar11 = *psVar11 + 1;
    psVar11 = *(short **)(param_1 + 0x18);
    sVar1 = *psVar11;
    *psVar11 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar11,(ushort)psVar11[2] + 9);
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
    return;
  }
  iVar12 = param_2;
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x44)) {
    lVar9 = FUN_00387080(param_2,iVar12);
    bVar3 = false;
    if (lVar9 == 0xd) {
      lVar9 = FUN_003871c0(param_2);
      bVar3 = lVar9 == 0;
    }
    if (bVar3) {
LAB_00233e28:
      bVar4 = true;
    }
    else {
      lVar9 = FUN_00387080(param_2);
      bVar3 = false;
      if (lVar9 == 0x12) {
        lVar9 = FUN_003871c0(param_2);
        bVar3 = lVar9 == 0;
      }
      bVar4 = false;
      if (bVar3) goto LAB_00233e28;
    }
    iVar12 = param_2;
    if (bVar4) break;
  }
  uVar10 = FUN_0021e420(0x43db68,iVar12,0,param_1 + 0x1c,1,1,0);
  puVar7 = DAT_003bfb10;
  if ((*(int *)uVar10 >> 4 & 1U) == 1) {
    FUN_0024c6d0(uVar10,param_1 + 0x18);
    return;
  }
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar10 = Pool_Alloc(DAT_0043dee0,0x10);
    puVar7 = (uint *)FUN_0024ad08(uVar10);
    iVar8 = *(int *)(param_1 + 8);
  }
  else {
    uVar2 = *DAT_003bfb10;
    puVar6 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar2 | 4;
    DAT_003bfb10 = puVar6;
    piVar5 = DAT_003be8e0;
    iVar8 = DAT_003be8e0[1];
    if (iVar8 < *DAT_003be8e0) {
      *(uint **)(iVar8 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar5[1] = iVar8 + 1;
    }
    else {
      *puVar7 = uVar2 & 0xfffffffb;
    }
    lVar9 = FUN_003872a8(puVar7 + 2);
    if (lVar9 == 0) {
      FUN_002530e8(puVar7 + 2,0);
      iVar8 = *(int *)(param_1 + 8);
    }
    else {
      iVar8 = *(int *)(param_1 + 8);
    }
  }
  if (*(int *)(iVar8 + 0x34) == 0) {
    String_ctor_cstr(apsStack_a0,0x40de10);
    *apsStack_a0[0] = *apsStack_a0[0] + 1;
    psVar11 = (short *)puVar7[2];
    sVar1 = *psVar11;
    *psVar11 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar11,(ushort)psVar11[2] + 9);
    }
    puVar7[2] = (uint)apsStack_a0[0];
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    }
  }
  else {
    String_ctor_cstr(apsStack_a0);
    *apsStack_a0[0] = *apsStack_a0[0] + 1;
    psVar11 = (short *)puVar7[2];
    sVar1 = *psVar11;
    *psVar11 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar11,(ushort)psVar11[2] + 9);
    }
    puVar7[2] = (uint)apsStack_a0[0];
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
      psVar11 = (short *)puVar7[2];
      goto LAB_00234034;
    }
  }
  psVar11 = (short *)puVar7[2];
LAB_00234034:
  *psVar11 = *psVar11 + 1;
  psVar11 = *(short **)(param_1 + 0x18);
  sVar1 = *psVar11;
  *psVar11 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar11,(ushort)psVar11[2] + 9);
  }
  *(uint *)(param_1 + 0x18) = puVar7[2];
  FUN_0021c268(0x43db68,iVar12,0,param_1 + 0x1c,puVar7,1,1,0);
  return;
}


// ==== FUN_002340d8 @ 002340d8 ====

void FUN_002340d8(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  short *psVar6;
  int iVar7;
  undefined *puVar8;
  short *apsStack_a0 [4];
  short *apsStack_90 [4];
  
  if (*(undefined2 **)(param_1 + 0x1c) == &DAT_003bfaf8) {
    return;
  }
  if (*(char *)(*(undefined2 **)(param_1 + 0x1c) + 4) == '$') {
    return;
  }
  apsStack_a0[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  iVar7 = param_2;
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x44)) {
    lVar4 = FUN_00387080(param_2,iVar7);
    bVar2 = false;
    if (lVar4 == 0xd) {
      lVar4 = FUN_003871c0(param_2);
      bVar2 = lVar4 == 0;
    }
    if (bVar2) {
LAB_002341b0:
      bVar3 = true;
    }
    else {
      lVar4 = FUN_00387080(param_2);
      bVar2 = false;
      if (lVar4 == 0x12) {
        lVar4 = FUN_003871c0(param_2);
        bVar2 = lVar4 == 0;
      }
      bVar3 = false;
      if (bVar2) goto LAB_002341b0;
    }
    iVar7 = param_2;
    if (bVar3) break;
  }
  uVar5 = FUN_0021e420(0x43db68,iVar7,0,param_1 + 0x1c,1,1,0);
  if ((*(int *)uVar5 >> 4 & 1U) == 1) {
    FUN_0024c6d0(uVar5,apsStack_a0);
LAB_002342ac:
    psVar6 = *(short **)(param_1 + 0x18);
  }
  else {
    puVar8 = *(undefined **)(*(int *)(param_1 + 8) + 0x34);
    if (puVar8 == (undefined *)0x0) {
      puVar8 = &DAT_0040de10;
    }
    String_ctor_cstr(apsStack_90,puVar8);
    *apsStack_90[0] = *apsStack_90[0] + 1;
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    }
    apsStack_a0[0] = apsStack_90[0];
    sVar1 = *apsStack_90[0];
    *apsStack_90[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) goto LAB_002342ac;
    Pool_Free(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
    psVar6 = *(short **)(param_1 + 0x18);
  }
  bVar2 = false;
  if (psVar6[1] == apsStack_a0[0][1]) {
    if (psVar6 != apsStack_a0[0]) {
      lVar4 = FUN_0035c4b0(psVar6 + 4,apsStack_a0[0] + 4);
      bVar2 = false;
      if (lVar4 != 0) goto LAB_002342e0;
    }
    bVar2 = true;
  }
LAB_002342e0:
  if (!bVar2) {
    *apsStack_a0[0] = *apsStack_a0[0] + 1;
    psVar6 = *(short **)(param_1 + 0x18);
    sVar1 = *psVar6;
    *psVar6 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar6,(ushort)psVar6[2] + 9);
    }
    *(short **)(param_1 + 0x18) = apsStack_a0[0];
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffffe | 2;
  }
  sVar1 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
  return;
}


// ==== FUN_00234398 @ 00234398 ====

undefined8 FUN_00234398(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[5] = &DAT_003e11e0;
  *puVar3 = 0xffffffff;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[6] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  puVar3[7] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  puVar3[0xb] = 1;
  uVar1 = puVar3[0x1d];
  puVar3[0xc] = 0xffffffff;
  puVar3[0xd] = 0xff000000;
  puVar3[0xe] = 3;
  puVar3[8] = 0;
  puVar3[0x1d] = uVar1 & 0xfffffff8;
  puVar3[10] = 1;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x1c] = 0;
  bVar2 = DAT_0040de12;
  puVar3[0x1a] = 0;
  puVar3[0x1d] = uVar1 & 0xfffffff0 | (bVar2 & 1) << 3;
  return param_1;
}


// ==== FUN_00234468 @ 00234468 ====

void FUN_00234468(undefined8 param_1,ulong param_2)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0x68);
  *(undefined **)(iVar5 + 0x14) = &DAT_003e11e0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 100) = 0;
  *(undefined4 *)(iVar5 + 0x60) = 0;
  if (iVar2 != 0) {
    FUN_00387328(iVar2,2);
    Pool_Free(DAT_0043dee0,iVar2,0x20);
    *(undefined4 *)(iVar5 + 0x68) = 0;
  }
  puVar3 = *(undefined **)(iVar5 + 0x20);
  if ((puVar3 != (undefined *)0x0) && (puVar3 != &DAT_003bee84)) {
    (*DAT_0043dabc)(puVar3,2);
    *(undefined4 *)(iVar5 + 0x20) = 0;
  }
  if ((*(uint *)(iVar5 + 0x74) & 1) == 0) {
    psVar4 = *(short **)(iVar5 + 0x1c);
  }
  else {
    if (*(int *)(iVar5 + 8) != 0) {
      Pool_Free(DAT_0043dee0,*(int *)(iVar5 + 8),0x3c);
    }
    psVar4 = *(short **)(iVar5 + 0x1c);
  }
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  psVar4 = *(short **)(iVar5 + 0x18);
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
  }
  *(undefined **)(iVar5 + 0x14) = &DAT_003e12f8;
  if (*(int *)(iVar5 + 0xc) != 0) {
    FUN_002486d8(*(int *)(iVar5 + 0xc),3);
  }
  if ((param_2 & 1) != 0) {
    Pool_Free(DAT_0043dee0,param_1,0x78);
  }
  return;
}


// ==== FUN_002345c0 @ 002345c0 ====

undefined4 FUN_002345c0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_2) {
    puVar5 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    lVar4 = FUN_00387080(param_1);
    bVar2 = false;
    if (lVar4 == 0x13) {
      lVar4 = FUN_003871c0(param_1);
      bVar2 = lVar4 == 0;
    }
    if (!bVar2) {
      uVar1 = *puVar5;
      bVar2 = false;
      if ((uVar1 >> 0x19 == 1) || (uVar1 >> 0x19 == 0x2a)) {
        bVar2 = ((int)uVar1 >> 4 & 1U) == 1;
      }
      if (bVar2) {
        if (uVar1 >> 0x19 != 1) {
          puVar5 = (uint *)puVar5[8];
        }
        iVar3 = FUN_00248640(*(int *)(*(int *)((int)param_1 + 0x48) + 8) + 8,puVar5 + 2);
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = FUN_0024c300(puVar5);
      }
      if (-1 < iVar3 + -1) {
        FUN_0023db58(param_1);
        iVar3 = *(int *)((int)param_1 + 0x48);
        *(uint *)(iVar3 + 0x1c) =
             *(uint *)(iVar3 + 0x1c) & 0xfdffffff | (uint)(param_3 != 0) << 0x19;
      }
    }
  }
  return DAT_0043df40;
}


// ==== FUN_00234738 @ 00234738 ====

void FUN_00234738(undefined8 param_1,undefined8 param_2)

{
  FUN_002345c0(param_1,param_2,1);
  return;
}


// ==== FUN_00234758 @ 00234758 ====

int FUN_00234758(int param_1)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *apsStack_d0 [4];
  short *apsStack_c0 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  uStack_b0 = *(undefined4 *)((DAT_0043db68 + -1) * 4 + DAT_0043db70 + -4);
  uStack_ac = *(undefined4 *)((DAT_0043db68 + -2) * 4 + DAT_0043db70 + -4);
  apsStack_d0[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  FUN_0024c6d0(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4),apsStack_d0);
  bVar3 = true;
  iVar5 = param_1;
  do {
    iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x48) + 8) + 4);
    iVar8 = 0;
    if (0 < *(int *)(iVar7 + 0x30)) {
      iVar4 = *(int *)(iVar7 + 0x34);
      while( true ) {
        iVar9 = iVar8 * 8;
        lVar6 = stricmp(apsStack_d0[0] + 4,*(undefined4 *)(iVar9 + iVar4));
        iVar8 = iVar8 + 1;
        if (lVar6 == 0) {
          iVar5 = *(int *)(iVar7 + 0x18);
          iVar7 = *(int *)(iVar9 + *(int *)(iVar7 + 0x34) + 4);
          goto LAB_002348f0;
        }
        if (*(int *)(iVar7 + 0x30) <= iVar8) break;
        iVar4 = *(int *)(iVar7 + 0x34);
      }
    }
    if (bVar3) {
      iVar8 = 0;
      if (0 < *(int *)(iVar7 + 0x28)) {
        iVar4 = *(int *)(iVar7 + 0x2c);
LAB_00234888:
        iVar9 = iVar8 * 0x10;
        lVar6 = stricmp(apsStack_d0[0] + 4,*(undefined4 *)(iVar9 + iVar4 + 4));
        iVar8 = iVar8 + 1;
        if (lVar6 == 0) {
          iVar5 = *(int *)(iVar7 + 0x18);
          iVar7 = *(int *)(iVar9 + *(int *)(iVar7 + 0x2c) + 8);
LAB_002348f0:
          iVar5 = *(int *)(iVar7 * 4 + iVar5);
          goto LAB_00234904;
        }
        if (iVar8 < *(int *)(iVar7 + 0x28)) break;
      }
      iVar5 = *(int *)(iVar5 + 0x44);
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x44);
    }
    if (iVar5 == 0) goto LAB_00234900;
    bVar3 = false;
  } while( true );
  iVar4 = *(int *)(iVar7 + 0x2c);
  goto LAB_00234888;
LAB_00234900:
  iVar5 = 0;
LAB_00234904:
  if (iVar5 != 0) {
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    apsStack_c0[0] = &DAT_003bfaf8;
    FUN_0024c6d0(uStack_b0,apsStack_c0);
    iVar7 = *(int *)(param_1 + 0x48);
    iVar8 = FUN_0024c300(uStack_ac);
    iVar5 = FUN_0023fe48(0,iVar7 + 0x24,0,iVar8 + 0x4000,iVar5,apsStack_c0,param_1,1,
                         0xffffffffffffffff);
    FUN_00231b48(DAT_0043df68);
    if (iVar5 != 0) {
      sVar1 = *apsStack_c0[0];
      *apsStack_c0[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
      }
      sVar1 = *apsStack_d0[0];
      *apsStack_d0[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) != 0) {
        return iVar5;
      }
      uVar2 = apsStack_d0[0][2];
      goto LAB_00234a20;
    }
    sVar1 = *apsStack_c0[0];
    *apsStack_c0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
    }
  }
  iVar5 = DAT_0043df40;
  sVar1 = *apsStack_d0[0];
  *apsStack_d0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) != 0) {
    return iVar5;
  }
  uVar2 = apsStack_d0[0][2];
LAB_00234a20:
  Pool_Free(DAT_0043dee0,apsStack_d0[0],uVar2 + 9);
  return iVar5;
}


// ==== FUN_00234a68 @ 00234a68 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0x003bfaf8 : 0x00234b5c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00234a68(undefined8 param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  short *apsStack_70 [4];
  short *apsStack_60 [4];
  short *apsStack_50 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_70[0] = &DAT_003bfaf8;
  FUN_0024c6d0(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4),apsStack_70);
  uVar2 = apsStack_70[0][1];
  uVar5 = (uint)uVar2;
  if (uVar2 != 0) {
    cVar1 = *(char *)((int)apsStack_70[0] + uVar2 + 7);
    if ((((cVar1 != 'f') && (cVar1 != 'F')) ||
        ((cVar1 = *(char *)((int)apsStack_70[0] + uVar2 + 6), cVar1 != 'w' && (cVar1 != 'W')))) ||
       (((cVar1 = *(char *)((int)apsStack_70[0] + uVar5 + 5), cVar1 != 's' && (cVar1 != 'S')) ||
        (*(char *)((int)apsStack_70[0] + uVar5 + 4) != '.')))) goto LAB_00234c0c;
  }
  apsStack_60[0] = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  *apsStack_70[0] = *apsStack_70[0] + 1;
  DAT_003bfaf8 = DAT_003bfaf8 + -1;
  if (DAT_003bfaf8 == 0) {
    Pool_Free(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
  }
  apsStack_60[0] = apsStack_70[0];
  if (3 < uVar2) {
    FUN_002533c8(apsStack_60,uVar5 - 4,4);
  }
  FUN_0021e0b8(param_1,apsStack_70);
  apsStack_50[0] = apsStack_70[0];
  *apsStack_70[0] = *apsStack_70[0] + 1;
  FUN_00244108(DAT_0043df80,apsStack_60,apsStack_50);
  sVar3 = *apsStack_60[0];
  *apsStack_60[0] = sVar3 + -1;
  if ((short)(sVar3 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
LAB_00234c0c:
  uVar4 = DAT_0043df40;
  sVar3 = *apsStack_70[0];
  *apsStack_70[0] = sVar3 + -1;
  if ((short)(sVar3 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  return uVar4;
}


// ==== FUN_00234c58 @ 00234c58 ====

undefined4 FUN_00234c58(undefined8 param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *apsStack_50 [4];
  short *apsStack_40 [4];
  short *apsStack_30 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_50[0] = &DAT_003bfaf8;
  FUN_0021e0b8(param_1,apsStack_50);
  apsStack_40[0] = apsStack_50[0];
  *apsStack_50[0] = *apsStack_50[0] + 1;
  String_ctor_cstr(apsStack_30,0x40de10);
  FUN_00244108(DAT_0043df80,apsStack_30,apsStack_40);
  sVar1 = *apsStack_30[0];
  *apsStack_30[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_30[0],(ushort)apsStack_30[0][2] + 9);
  }
  uVar2 = DAT_0043df40;
  sVar1 = *apsStack_50[0];
  *apsStack_50[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
  }
  return uVar2;
}


// ==== FUN_00234d30 @ 00234d30 ====

void FUN_00234d30(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
  if (param_2 < 3) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((DAT_0043db68 + -2) * 4 + DAT_0043db70 + -4);
  }
  iVar2 = FUN_0024c300(*(undefined4 *)((DAT_0043db68 + -1) * 4 + DAT_0043db70 + -4));
  FUN_0021e170(0x43db68,param_1,0,param_1,uVar1,iVar2 + 0x4000,uVar3);
  return;
}


// ==== FUN_00234de0 @ 00234de0 ====

undefined4 FUN_00234de0(undefined8 param_1)

{
  uint uVar1;
  uint *apuStack_20 [4];
  
  apuStack_20[0] = (uint *)0x0;
  FUN_0021e960(param_1,0,param_1,apuStack_20);
  if (apuStack_20[0] != (uint *)0x0) {
    uVar1 = 0;
    if ((*apuStack_20[0] >> 0x19) - 0xc < 8) {
      uVar1 = (int)*apuStack_20[0] >> 4 & 1;
    }
    if (uVar1 != 0) {
      FUN_00240700(*(int *)(apuStack_20[0][0x11] + 0x48) + 0x24);
    }
  }
  return DAT_0043df40;
}


// ==== FUN_00234e58 @ 00234e58 ====

undefined4 FUN_00234e58(undefined8 param_1)

{
  uint uVar1;
  uint *apuStack_20 [4];
  
  apuStack_20[0] = (uint *)0x0;
  FUN_0021e960(param_1,0,param_1,apuStack_20);
  if (apuStack_20[0] != (uint *)0x0) {
    uVar1 = 0;
    if ((*apuStack_20[0] >> 0x19) - 0xc < 8) {
      uVar1 = (int)*apuStack_20[0] >> 4 & 1;
    }
    if (uVar1 != 0) {
      FUN_00240700(*(int *)(apuStack_20[0][0x11] + 0x48) + 0x24);
    }
  }
  return DAT_0043df40;
}


// ==== FUN_00234ed0 @ 00234ed0 ====

undefined4 FUN_00234ed0(undefined8 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short *apsStack_d0 [4];
  
  uVar14 = DAT_0043df40;
  if (param_2 == 6) {
    uVar14 = *(undefined4 *)((DAT_0043db68 + -4) * 4 + DAT_0043db70 + -4);
    uVar12 = *(undefined4 *)((DAT_0043db68 + -2) * 4 + DAT_0043db70 + -4);
    uVar15 = *(undefined4 *)((DAT_0043db68 + -5) * 4 + DAT_0043db70 + -4);
    uVar2 = *(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    uVar13 = *(undefined4 *)((DAT_0043db68 + -3) * 4 + DAT_0043db70 + -4);
    iVar5 = FUN_0024c300(*(undefined4 *)((DAT_0043db68 + -1) * 4 + DAT_0043db70 + -4));
    uVar12 = FUN_0024c410(uVar12);
    uVar13 = FUN_0024c410(uVar13);
    uVar14 = FUN_0024c410(uVar14);
    uVar15 = FUN_0024c410(uVar15);
    apsStack_d0[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(uVar2,apsStack_d0);
    uVar7 = Pool_Alloc(DAT_0043dee0,0x3c);
    puVar10 = (undefined4 *)uVar7;
    *puVar10 = 2;
    puVar10[4] = uVar14;
    puVar10[5] = uVar15;
    puVar10[9] = 0x41400000;
    puVar10[6] = 0xffffffff;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    iVar11 = (int)param_1;
    puVar10[1] = *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x48) + 8) + 4);
    iVar3 = *(int *)(*(int *)(*(int *)(iVar11 + 0x48) + 8) + 4);
    iVar9 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      if (*(int *)**(undefined4 **)(iVar3 + 0x18) == 3) {
        puVar10[6] = 0;
      }
      else {
        iVar6 = *(int *)(iVar3 + 0x14);
        while( true ) {
          iVar9 = iVar9 + 1;
          if (iVar6 <= iVar9) break;
          if (*(int *)(*(undefined4 **)(iVar3 + 0x18))[iVar9] == 3) {
            puVar10[6] = iVar9;
            break;
          }
          iVar6 = *(int *)(iVar3 + 0x14);
        }
      }
    }
    uVar7 = FUN_0023fe48(0,*(int *)(iVar11 + 0x48) + 0x24,0,iVar5 + 0x4000,uVar7,apsStack_d0,param_1
                         ,1,0xffffffffffffffff);
    lVar8 = FUN_00387080(uVar7);
    bVar4 = false;
    if (lVar8 == 0xf) {
      lVar8 = FUN_003871c0(uVar7);
      bVar4 = lVar8 == 0;
    }
    if (bVar4) {
      iVar3 = *(int *)((int)uVar7 + 0x48);
      *(undefined4 *)(iVar3 + 0x30) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x34) = 0xff000000;
      *(uint *)(iVar3 + 0x74) = *(uint *)(iVar3 + 0x74) & 0xfffffff9 | 1;
      *(undefined4 *)(iVar3 + 0x5c) = puVar10[5];
      *(undefined4 *)(iVar3 + 0x50) = puVar10[2];
      *(undefined4 *)(iVar3 + 0x58) = puVar10[4];
      uVar14 = puVar10[3];
      *(undefined4 *)(iVar3 + 0x48) = 0;
      *(undefined4 *)(iVar3 + 0x54) = uVar14;
      *(undefined4 *)(iVar3 + 0x60) = 0x41400000;
      *(undefined4 *)(iVar3 + 0x44) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = puVar10[7];
      uVar14 = puVar10[6];
      *(undefined4 *)(iVar3 + 0x6c) = 6;
      *(undefined4 *)(iVar3 + 100) = uVar14;
      FUN_0023ccc8(uVar12,uVar7,0,0);
      FUN_0023ccc8(uVar13,uVar7,1,0);
    }
    uVar14 = DAT_0043df40;
    sVar1 = *apsStack_d0[0];
    *apsStack_d0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_d0[0],(ushort)apsStack_d0[0][2] + 9);
    }
  }
  return uVar14;
}


// ==== FUN_00235260 @ 00235260 ====

uint * FUN_00235260(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar4 = DAT_003bfaec;
  uVar6 = 0;
  if ((*param_1 >> 0x19) - 0xc < 8) {
    uVar6 = (int)*param_1 >> 4 & 1;
  }
  puVar5 = DAT_0043df40;
  if (uVar6 != 0) {
    uVar6 = ((int)(param_1[0x15] << 0xf) >> 0xf) - 0x4000;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar6;
      puVar5[1] = (uint)&DAT_003e2230;
    }
    else {
      uVar1 = *DAT_003bfaec;
      puVar5 = (uint *)DAT_003bfaec[2];
      *DAT_003bfaec = uVar1 | 4;
      DAT_003bfaec = puVar5;
      piVar3 = DAT_003be8e0;
      iVar2 = DAT_003be8e0[1];
      if (iVar2 < *DAT_003be8e0) {
        *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar4;
        piVar3[1] = iVar2 + 1;
      }
      else {
        *puVar4 = uVar1 & 0xfffffffb;
      }
      puVar4[2] = uVar6;
      puVar5 = puVar4;
    }
  }
  return puVar5;
}


// ==== FUN_00235368 @ 00235368 ====

undefined4 FUN_00235368(uint *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short *apsStack_50 [4];
  undefined4 uStack_40;
  uint *apuStack_3c [3];
  
  if (param_2 != 1) {
    uVar8 = 0;
    if ((*param_1 >> 0x19) - 0xc < 8) {
      uVar8 = (int)*param_1 >> 4 & 1;
    }
    if (uVar8 != 0) {
      return DAT_0043df40;
    }
  }
  puVar3 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
  apuStack_3c[0] = (uint *)0x0;
  uStack_40 = 0;
  uVar7 = *puVar3 >> 0x19;
  uVar9 = 0;
  uVar8 = (int)*puVar3 >> 4;
  if (uVar7 - 0xc < 8) {
    uVar9 = uVar8 & 1;
  }
  puVar4 = puVar3;
  if (uVar9 == 0) {
    if ((uVar7 == 1) || (bVar1 = false, uVar7 == 0x2a)) {
      bVar1 = (uVar8 & 1) == 1;
    }
    if (bVar1) {
      apsStack_50[0] = &DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      FUN_0024c6d0(puVar3,apsStack_50);
      FUN_0023eb78(*(undefined4 *)(*(int *)(param_1[0x11] + 0x48) + 0x24),0,apsStack_50,&uStack_40,
                   apuStack_3c);
      sVar2 = *apsStack_50[0];
      *apsStack_50[0] = sVar2 + -1;
      puVar4 = apuStack_3c[0];
      if ((short)(sVar2 + -1) == 0) {
        Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
        puVar4 = apuStack_3c[0];
      }
    }
    else {
      uVar7 = *puVar3 >> 0x19;
      uVar9 = 0;
      uVar8 = (int)*puVar3 >> 4;
      if (uVar7 == 7) {
        uVar9 = uVar8 & 1;
      }
      if (uVar9 == 0) {
        uVar9 = 0;
        if (uVar7 == 6) {
          uVar9 = uVar8 & 1;
        }
        puVar4 = apuStack_3c[0];
        if (uVar9 == 0) goto LAB_00235530;
      }
      iVar5 = FUN_0024c300(puVar3);
      if (iVar5 + 0x4000 == (int)(param_1[0x15] << 0xf) >> 0xf) {
        return DAT_0043df40;
      }
      FUN_0023eb78(*(undefined4 *)(*(int *)(param_1[0x11] + 0x48) + 0x24),iVar5 + 0x4000,0,
                   &uStack_40,apuStack_3c);
      puVar4 = apuStack_3c[0];
    }
  }
LAB_00235530:
  apuStack_3c[0] = puVar4;
  if (apuStack_3c[0] == (uint *)0x0) {
    uVar8 = *puVar3;
  }
  else if (((int)*apuStack_3c[0] >> 4 & 1U) == 0) {
    uVar8 = *puVar3;
  }
  else {
    if (apuStack_3c[0] != param_1) {
      uVar8 = apuStack_3c[0][0x15];
      apuStack_3c[0][0x15] = uVar8 & 0xfffe0000 | param_1[0x15] & 0x1ffff;
      param_1[0x15] = param_1[0x15] & 0xfffe0000 | uVar8 & 0x1ffff;
      FUN_0023f020(apuStack_3c[0]);
      FUN_0023f020(param_1);
      FUN_0023ef98(*(undefined4 *)(*(int *)(param_1[0x11] + 0x48) + 0x24),
                   (int)(param_1[0x15] << 0xf) >> 0xf,param_1);
      FUN_0023ef98(*(undefined4 *)(*(int *)(param_1[0x11] + 0x48) + 0x24),
                   (int)(apuStack_3c[0][0x15] << 0xf) >> 0xf);
      (**(code **)(param_1[1] + 0x14))((int)param_1 + (int)*(short *)(param_1[1] + 0x10));
      (**(code **)(apuStack_3c[0][1] + 0x14))
                ((int)apuStack_3c[0] + (int)*(short *)(apuStack_3c[0][1] + 0x10));
      return DAT_0043df40;
    }
    uVar8 = *puVar3;
  }
  uVar7 = 0;
  if (uVar8 >> 0x19 == 7) {
    uVar7 = (int)uVar8 >> 4 & 1;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
    if (uVar8 >> 0x19 == 6) {
      uVar7 = (int)uVar8 >> 4 & 1;
    }
    if (uVar7 == 0) {
      return DAT_0043df40;
    }
  }
  FUN_0023f020(param_1);
  iVar5 = *(int *)(param_1[0x11] + 0x48);
  iVar6 = FUN_0024c300(puVar3);
  FUN_0023ef98(*(undefined4 *)(iVar5 + 0x24),iVar6 + 0x4000,param_1);
  (**(code **)(param_1[1] + 0x14))((int)param_1 + (int)*(short *)(param_1[1] + 0x10));
  return DAT_0043df40;
}


// ==== FUN_002357b0 @ 002357b0 ====

int FUN_002357b0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  iVar4 = DAT_0043df40;
  if ((param_2 < 2) &&
     ((piVar7 = param_1, param_2 != 1 ||
      (piVar7 = *(int **)(DAT_0043db68 * 4 + DAT_0043db70 + -4), (*piVar7 >> 4 & 1U) == 1)))) {
    iVar4 = FUN_0024fa38(DAT_0043dee4,0x20);
    FUN_00386ec8(iVar4,0x1b);
    *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
    Pow2Container_ctor(iVar4 + 8,8);
    *(undefined1 *)(iVar4 + 0x1c) = 0;
    *(undefined **)(iVar4 + 4) = &DAT_003e1e78;
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
    FUN_0023c890(param_1,&fStack_80);
    puVar5 = DAT_003bfae8;
    fVar8 = fStack_78 - (float)piVar7[7];
    fStack_80 = fStack_80 - (float)piVar7[7];
    fStack_7c = fStack_7c - (float)piVar7[8];
    fStack_74 = fStack_74 - (float)piVar7[8];
    fStack_78 = fVar8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,6);
      puVar5[2] = (uint)fVar8;
      puVar5[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar1 = *DAT_003bfae8;
      puVar3 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar1 | 4;
      DAT_003bfae8 = puVar3;
      piVar7 = DAT_003be8e0;
      iVar6 = DAT_003be8e0[1];
      if (iVar6 < *DAT_003be8e0) {
        *(uint **)(iVar6 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar7[1] = iVar6 + 1;
      }
      else {
        *puVar5 = uVar1 & 0xfffffffb;
      }
      puVar5[2] = (uint)fVar8;
    }
    iVar6 = iVar4 + 8;
    FUN_002488d0(iVar6,0x43decc,puVar5);
    fVar8 = fStack_80;
    puVar5 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,6);
      puVar5[2] = (uint)fVar8;
      puVar5[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar1 = *DAT_003bfae8;
      puVar3 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar1 | 4;
      DAT_003bfae8 = puVar3;
      piVar7 = DAT_003be8e0;
      iVar2 = DAT_003be8e0[1];
      if (iVar2 < *DAT_003be8e0) {
        *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar7[1] = iVar2 + 1;
      }
      else {
        *puVar5 = uVar1 & 0xfffffffb;
      }
      puVar5[2] = (uint)fStack_80;
    }
    FUN_002488d0(iVar6,0x43ded0,puVar5);
    fVar8 = fStack_74;
    puVar5 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,6);
      puVar5[2] = (uint)fVar8;
      puVar5[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar1 = *DAT_003bfae8;
      puVar3 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar1 | 4;
      DAT_003bfae8 = puVar3;
      piVar7 = DAT_003be8e0;
      iVar2 = DAT_003be8e0[1];
      if (iVar2 < *DAT_003be8e0) {
        *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar7[1] = iVar2 + 1;
      }
      else {
        *puVar5 = uVar1 & 0xfffffffb;
      }
      puVar5[2] = (uint)fStack_74;
    }
    FUN_002488d0(iVar6,0x43ded8,puVar5);
    fVar8 = fStack_7c;
    puVar5 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,6);
      puVar5[2] = (uint)fVar8;
      puVar5[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar1 = *DAT_003bfae8;
      puVar3 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar1 | 4;
      DAT_003bfae8 = puVar3;
      piVar7 = DAT_003be8e0;
      iVar2 = DAT_003be8e0[1];
      if (iVar2 < *DAT_003be8e0) {
        *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar7[1] = iVar2 + 1;
      }
      else {
        *puVar5 = uVar1 & 0xfffffffb;
      }
      puVar5[2] = (uint)fStack_7c;
    }
    FUN_002488d0(iVar6,0x43dedc,puVar5);
  }
  return iVar4;
}


// ==== FUN_00235bc0 @ 00235bc0 ====

undefined4 FUN_00235bc0(int param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1 + *(short *)(*(int *)(param_1 + 4) + 8));
  *(int *)(DAT_0043df68 + 0x2c) = param_1;
  *(undefined4 *)(DAT_0043df68 + 0x40) = 0;
  *(undefined4 *)(DAT_0043df68 + 0x44) = 0;
  *(undefined4 *)(DAT_0043df68 + 0x30) = 0xc61c3c00;
  *(undefined4 *)(DAT_0043df68 + 0x34) = 0xc61c3c00;
  *(undefined4 *)(DAT_0043df68 + 0x38) = 0xc61c3c00;
  *(undefined4 *)(DAT_0043df68 + 0x3c) = 0xc61c3c00;
  if ((param_2 == 0) ||
     (lVar1 = FUN_0024c300(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4)), lVar1 == 0)) {
    *(float *)(DAT_0043df68 + 0x40) =
         (float)*(int *)(DAT_0043df68 + 0x54) - *(float *)(param_1 + 0x1c);
    *(float *)(DAT_0043df68 + 0x44) =
         (float)*(int *)(DAT_0043df68 + 0x58) - *(float *)(param_1 + 0x20);
  }
  if (0 < param_2) {
    uVar2 = FUN_0024c410(*(undefined4 *)((DAT_0043db68 + -1) * 4 + DAT_0043db70 + -4));
    *(undefined4 *)(DAT_0043df68 + 0x30) = uVar2;
    *(undefined4 *)(DAT_0043df68 + 0x34) = 0;
    *(undefined4 *)(DAT_0043df68 + 0x38) = 0;
    *(undefined4 *)(DAT_0043df68 + 0x3c) = 0;
  }
  if (1 < param_2) {
    uVar2 = FUN_0024c410(*(undefined4 *)((DAT_0043db68 + -2) * 4 + DAT_0043db70 + -4));
    *(undefined4 *)(DAT_0043df68 + 0x34) = uVar2;
  }
  if (2 < param_2) {
    uVar2 = FUN_0024c410(*(undefined4 *)((DAT_0043db68 + -3) * 4 + DAT_0043db70 + -4));
    *(undefined4 *)(DAT_0043df68 + 0x38) = uVar2;
  }
  if (3 < param_2) {
    uVar2 = FUN_0024c410(*(undefined4 *)((DAT_0043db68 + -4) * 4 + DAT_0043db70 + -4));
    *(undefined4 *)(DAT_0043df68 + 0x3c) = uVar2;
  }
  return DAT_0043df40;
}


// ==== FUN_00235da8 @ 00235da8 ====

uint * FUN_00235da8(undefined8 param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  if (param_2 == 1) {
    puVar5 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    if ((*puVar5 >> 0x19) - 0xc < 8) {
      FUN_0023c890(param_1,&fStack_a0);
      FUN_0023c890(puVar5,&fStack_90);
      puVar5 = DAT_003bfaec;
      if (((fStack_90 <= fStack_98) && (fStack_a0 <= fStack_88)) &&
         ((fStack_9c <= fStack_84 && (fStack_8c <= fStack_94)))) {
        if (DAT_003bfaec == (uint *)0x0) {
          puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
          FUN_00386ec8(puVar5,7);
          puVar5[2] = 1;
          goto LAB_00236198;
        }
        uVar6 = *DAT_003bfaec | 4;
        uVar4 = DAT_003bfaec[2];
        *DAT_003bfaec = uVar6;
        DAT_003bfaec = (uint *)uVar4;
        iVar7 = DAT_003be8e0[1];
        if (*DAT_003be8e0 <= iVar7) {
LAB_00235eb8:
          *puVar5 = uVar6 & 0xfffffffb;
          goto LAB_00235ed8;
        }
        iVar3 = DAT_003be8e0[2];
LAB_00235ec4:
        piVar1 = DAT_003be8e0;
        *(uint **)(iVar7 * 4 + iVar3) = puVar5;
        piVar1[1] = iVar7 + 1;
LAB_00235ed8:
        puVar5[2] = 1;
        return puVar5;
      }
    }
  }
  else if (1 < param_2) {
    lVar8 = 0;
    fVar9 = (float)FUN_0024c410(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4));
    fVar10 = (float)FUN_0024c410(*(undefined4 *)((DAT_0043db68 + -1) * 4 + DAT_0043db70 + -4));
    if (2 < param_2) {
      lVar8 = FUN_0024c300(*(undefined4 *)((DAT_0043db68 + -2) * 4 + DAT_0043db70 + -4));
    }
    if (lVar8 != 0) {
      uVar4 = (*DAT_0043dafc)(fVar9,fVar10,param_1);
      puVar5 = DAT_003bfaec;
      if (DAT_003bfaec != (uint *)0x0) {
        uVar6 = *DAT_003bfaec;
        uVar2 = DAT_003bfaec[2];
        *DAT_003bfaec = uVar6 | 4;
        DAT_003bfaec = (uint *)uVar2;
        piVar1 = DAT_003be8e0;
        iVar7 = DAT_003be8e0[1];
        if (iVar7 < *DAT_003be8e0) {
          *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar5;
          piVar1[1] = iVar7 + 1;
        }
        else {
          *puVar5 = uVar6 & 0xfffffffb;
        }
        puVar5[2] = uVar4;
        return puVar5;
      }
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar4;
      goto LAB_00236198;
    }
    FUN_0023c890(param_1,&fStack_a0);
    puVar5 = DAT_003bfaec;
    if ((((fStack_a0 <= fVar9) && (fVar9 <= fStack_98)) && (fStack_9c <= fVar10)) &&
       (fVar10 <= fStack_94)) {
      if (DAT_003bfaec == (uint *)0x0) {
        puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar5,7);
        puVar5[2] = 1;
        goto LAB_00236198;
      }
      uVar6 = *DAT_003bfaec | 4;
      uVar4 = DAT_003bfaec[2];
      *DAT_003bfaec = uVar6;
      DAT_003bfaec = (uint *)uVar4;
      iVar7 = DAT_003be8e0[1];
      if (*DAT_003be8e0 <= iVar7) goto LAB_00235eb8;
      iVar3 = DAT_003be8e0[2];
      goto LAB_00235ec4;
    }
  }
  puVar5 = DAT_003bfaec;
  if (DAT_003bfaec != (uint *)0x0) {
    uVar4 = *DAT_003bfaec;
    uVar6 = DAT_003bfaec[2];
    *DAT_003bfaec = uVar4 | 4;
    DAT_003bfaec = (uint *)uVar6;
    piVar1 = DAT_003be8e0;
    iVar7 = DAT_003be8e0[1];
    if (iVar7 < *DAT_003be8e0) {
      *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar1[1] = iVar7 + 1;
    }
    else {
      *puVar5 = uVar4 & 0xfffffffb;
    }
    puVar5[2] = 0;
    return puVar5;
  }
  puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
  FUN_00386ec8(puVar5,7);
  puVar5[2] = 0;
LAB_00236198:
  puVar5[1] = (uint)&DAT_003e2230;
  return puVar5;
}


// ==== FUN_002361d0 @ 002361d0 ====

uint * FUN_002361d0(undefined8 param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  short *apsStack_80 [4];
  
  puVar6 = DAT_0043df40;
  if (param_2 == 2) {
    uVar3 = *(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    iVar4 = FUN_0024c300(*(undefined4 *)((DAT_0043db68 + -1) * 4 + DAT_0043db70 + -4));
    uVar7 = Pool_Alloc(DAT_0043dee0,0x3c);
    puVar9 = (undefined4 *)uVar7;
    puVar9[2] = 0;
    *puVar9 = 5;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[1] = **(undefined4 **)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x48) + 8) + 4) + 0x18);
    apsStack_80[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(uVar3,apsStack_80);
    puVar5 = (uint *)FUN_0023fe48(0,*(int *)((int)param_1 + 0x48) + 0x24,0,iVar4 + 0x4000,uVar7,
                                  apsStack_80,param_1,1,0xffffffffffffffff);
    uVar8 = 0;
    if ((*puVar5 >> 0x19) - 0xc < 8) {
      uVar8 = (int)*puVar5 >> 4 & 1;
    }
    if (uVar8 != 0) {
      *(undefined4 *)(puVar5[0x12] + 0x2c) = 1;
    }
    puVar6 = DAT_0043df40;
    if (puVar5 == (uint *)0x0) {
      sVar1 = *apsStack_80[0];
      *apsStack_80[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) != 0) {
        return puVar6;
      }
      uVar2 = apsStack_80[0][2];
    }
    else {
      sVar1 = *apsStack_80[0];
      *apsStack_80[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) != 0) {
        return puVar5;
      }
      uVar2 = apsStack_80[0][2];
      puVar6 = puVar5;
    }
    Pool_Free(DAT_0043dee0,apsStack_80[0],uVar2 + 9);
  }
  return puVar6;
}


// ==== FUN_00236390 @ 00236390 ====

undefined4 FUN_00236390(undefined8 param_1,long param_2)

{
  short sVar1;
  short *apsStack_40 [4];
  
  if (0 < param_2) {
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    apsStack_40[0] = &DAT_003bfaf8;
    FUN_0024c6d0(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4),apsStack_40);
    FUN_0021bb00(0x43db68,param_1,0,apsStack_40);
    sVar1 = *apsStack_40[0];
    *apsStack_40[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
    }
  }
  return DAT_0043df40;
}


// ==== FUN_00236440 @ 00236440 ====

undefined4 FUN_00236440(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = FUN_00387080();
  bVar2 = false;
  if (lVar4 == 0xd) {
    lVar4 = FUN_003871c0(param_1);
    bVar2 = lVar4 == 0;
  }
  if (!bVar2) {
    lVar4 = FUN_00387080(param_1);
    bVar2 = false;
    if (lVar4 == 0x12) {
      lVar4 = FUN_003871c0(param_1);
      bVar2 = lVar4 == 0;
    }
    bVar3 = false;
    if (!bVar2) goto LAB_002364c4;
  }
  bVar3 = true;
LAB_002364c4:
  if (bVar3) {
    iVar1 = *(int *)((int)param_1 + 0x48);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfdffffff;
  }
  return DAT_0043df40;
}


// ==== FUN_00236508 @ 00236508 ====

undefined4 FUN_00236508(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = FUN_00387080();
  bVar2 = false;
  if (lVar4 == 0xd) {
    lVar4 = FUN_003871c0(param_1);
    bVar2 = lVar4 == 0;
  }
  if (!bVar2) {
    lVar4 = FUN_00387080(param_1);
    bVar2 = false;
    if (lVar4 == 0x12) {
      lVar4 = FUN_003871c0(param_1);
      bVar2 = lVar4 == 0;
    }
    bVar3 = false;
    if (!bVar2) goto LAB_0023658c;
  }
  bVar3 = true;
LAB_0023658c:
  if (bVar3) {
    iVar1 = *(int *)((int)param_1 + 0x48);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2000000;
  }
  return DAT_0043df40;
}


// ==== FUN_002365c8 @ 002365c8 ====

undefined4 FUN_002365c8(undefined8 param_1)

{
  int iVar1;
  
  FUN_0023db58(param_1,*(int *)(*(int *)((int)param_1 + 0x48) + 0x18) + 1);
  iVar1 = *(int *)((int)param_1 + 0x48);
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfdffffff;
  return DAT_0043df40;
}


// ==== FUN_00236618 @ 00236618 ====

undefined4 FUN_00236618(undefined8 param_1)

{
  int iVar1;
  
  FUN_0023db58(param_1,*(int *)(*(int *)((int)param_1 + 0x48) + 0x18) + -1);
  iVar1 = *(int *)((int)param_1 + 0x48);
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfdffffff;
  return DAT_0043df40;
}


// ==== FUN_00236668 @ 00236668 ====

uint * FUN_00236668(undefined8 param_1)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  float fVar9;
  short *apsStack_50 [4];
  
  puVar5 = DAT_003bfae8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_50[0] = &DAT_003bfaf8;
  puVar8 = (uint *)param_1;
  if (puVar8[0x12] == 0) {
    if (DAT_003bfae8 != (uint *)0x0) {
      uVar7 = *DAT_003bfae8;
      puVar8 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar7 | 4;
      DAT_003bfae8 = puVar8;
      piVar3 = DAT_003be8e0;
      iVar4 = DAT_003be8e0[1];
      if (iVar4 < *DAT_003be8e0) {
        *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar3[1] = iVar4 + 1;
      }
      else {
        *puVar5 = uVar7 & 0xfffffffb;
      }
      puVar5[2] = 0;
      goto LAB_0023689c;
    }
    puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,6);
    puVar5[2] = 0;
  }
  else {
    uVar7 = 0;
    if ((*puVar8 >> 0x19) - 0xc < 8) {
      uVar7 = (int)*puVar8 >> 4 & 1;
    }
    if (uVar7 != 0) {
      lVar6 = FUN_00387080(param_1);
      bVar2 = false;
      if (lVar6 == 0x12) {
        lVar6 = FUN_003871c0(param_1);
        bVar2 = lVar6 == 0;
      }
      if (bVar2) {
        FUN_00252d28(apsStack_50,*(int *)(puVar8[0x12] + 0x34) + 4);
      }
    }
    fVar9 = 0.0;
    lVar6 = FUN_00387080(param_1);
    bVar2 = false;
    if (lVar6 == 0x12) {
      lVar6 = FUN_003871c0(param_1);
      bVar2 = lVar6 == 0;
    }
    if (bVar2) {
      iVar4 = (*DAT_0043db04)(apsStack_50[0] + 4,0);
      fVar9 = (float)iVar4;
    }
    puVar5 = DAT_003bfae8;
    if (DAT_003bfae8 != (uint *)0x0) {
      uVar7 = *DAT_003bfae8;
      puVar8 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar7 | 4;
      DAT_003bfae8 = puVar8;
      piVar3 = DAT_003be8e0;
      iVar4 = DAT_003be8e0[1];
      if (iVar4 < *DAT_003be8e0) {
        *(uint **)(iVar4 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar3[1] = iVar4 + 1;
      }
      else {
        *puVar5 = uVar7 & 0xfffffffb;
      }
      puVar5[2] = (uint)fVar9;
      goto LAB_0023689c;
    }
    puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,6);
    puVar5[2] = (uint)fVar9;
  }
  puVar5[1] = (uint)&DAT_003e2098;
LAB_0023689c:
  sVar1 = *apsStack_50[0];
  *apsStack_50[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
  }
  return puVar5;
}


// ==== FUN_002368e8 @ 002368e8 ====

uint * FUN_002368e8(undefined8 param_1)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  short *apsStack_50 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_50[0] = &DAT_003bfaf8;
  uVar2 = *(uint *)param_1;
  uVar9 = 0;
  if ((uVar2 >> 0x19) - 0xc < 8) {
    uVar9 = (int)uVar2 >> 4 & 1;
  }
  if (uVar9 != 0) {
    lVar8 = FUN_00387080(param_1);
    bVar3 = false;
    if (lVar8 == 0x12) {
      lVar8 = FUN_003871c0(param_1);
      bVar3 = lVar8 == 0;
    }
    if (bVar3) {
      FUN_00252d28(apsStack_50,*(int *)(((uint *)param_1)[0x12] + 0x34) + 4);
    }
  }
  fVar10 = 0.0;
  lVar8 = FUN_00387080(param_1);
  bVar3 = false;
  if (lVar8 == 0x12) {
    lVar8 = FUN_003871c0(param_1);
    bVar3 = lVar8 == 0;
  }
  if (bVar3) {
    iVar6 = (*DAT_0043db08)(apsStack_50[0] + 4,0);
    fVar10 = (float)iVar6;
  }
  puVar7 = DAT_003bfae8;
  if (DAT_003bfae8 == (uint *)0x0) {
    puVar7 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar7,6);
    puVar7[2] = (uint)fVar10;
    puVar7[1] = (uint)&DAT_003e2098;
  }
  else {
    uVar2 = *DAT_003bfae8;
    puVar5 = (uint *)DAT_003bfae8[2];
    *DAT_003bfae8 = uVar2 | 4;
    DAT_003bfae8 = puVar5;
    piVar4 = DAT_003be8e0;
    iVar6 = DAT_003be8e0[1];
    if (iVar6 < *DAT_003be8e0) {
      *(uint **)(iVar6 * 4 + DAT_003be8e0[2]) = puVar7;
      piVar4[1] = iVar6 + 1;
    }
    else {
      *puVar7 = uVar2 & 0xfffffffb;
    }
    puVar7[2] = (uint)fVar10;
  }
  sVar1 = *apsStack_50[0];
  *apsStack_50[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
  }
  return puVar7;
}


// ==== FUN_00236ac0 @ 00236ac0 ====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00236ac0(int param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  ushort uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  undefined4 uVar19;
  short *apsStack_a0 [4];
  
  lVar11 = FUN_00387080();
  bVar4 = false;
  if (lVar11 == 0xf) {
    lVar11 = FUN_003871c0(param_1);
    bVar4 = lVar11 == 0;
  }
  piVar17 = (int *)param_2;
  piVar16 = (int *)param_3;
  if ((!bVar4) || (lVar11 = FUN_00233890(*piVar17 + 8,*(undefined2 *)(*piVar17 + 2)), lVar11 == 0))
  goto switchD_00236b64_default;
  iVar13 = *(int *)(param_1 + 0x48);
  switch(*(undefined4 *)((int)lVar11 + 4)) {
  case 1:
    apsStack_a0[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_3,apsStack_a0);
    FUN_002537b0(apsStack_a0);
    if (*(int *)(iVar13 + 0x38) == 3) {
      bVar4 = false;
      if (apsStack_a0[0][1] == DAT_0043dce8[1]) {
        if (apsStack_a0[0] != DAT_0043dce8) {
          lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,DAT_0043dce8 + 4);
          bVar4 = false;
          if (lVar11 != 0) goto LAB_00236be4;
        }
        bVar4 = true;
      }
LAB_00236be4:
      if (bVar4) {
        bVar4 = false;
        if (apsStack_a0[0][1] == DAT_0043dd9c[1]) {
          if (apsStack_a0[0] != DAT_0043dd9c) {
            lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,DAT_0043dd9c + 4);
            bVar4 = false;
            if (lVar11 != 0) goto LAB_00236c28;
          }
          bVar4 = true;
        }
LAB_00236c28:
        uVar10 = *(uint *)(iVar13 + 0x6c);
        if (bVar4) goto LAB_00236c3c;
      }
      else {
        uVar10 = *(uint *)(iVar13 + 0x6c);
      }
      uVar10 = uVar10 | 8;
    }
    else {
      uVar10 = *(uint *)(iVar13 + 0x6c);
LAB_00236c3c:
      uVar10 = uVar10 | 0x10;
    }
    *(uint *)(iVar13 + 0x6c) = uVar10;
    bVar4 = false;
    if (apsStack_a0[0][1] == DAT_0043dd70[1]) {
      if (apsStack_a0[0] != DAT_0043dd70) {
        lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,DAT_0043dd70 + 4);
        bVar4 = false;
        if (lVar11 != 0) goto LAB_00236c7c;
      }
      bVar4 = true;
    }
LAB_00236c7c:
    if (bVar4) {
      *(undefined4 *)(iVar13 + 0x38) = 0;
    }
    else {
      bVar4 = false;
      if (apsStack_a0[0][1] == DAT_0043deb8[1]) {
        if (apsStack_a0[0] != DAT_0043deb8) {
          lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,DAT_0043deb8 + 4);
          bVar4 = false;
          if (lVar11 != 0) goto LAB_00236cc0;
        }
        bVar4 = true;
      }
LAB_00236cc0:
      if (bVar4) {
        *(undefined4 *)(iVar13 + 0x38) = 0;
      }
      else {
        bVar4 = false;
        if (apsStack_a0[0][1] == DAT_0043dcbc[1]) {
          if (apsStack_a0[0] != DAT_0043dcbc) {
            lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,DAT_0043dcbc + 4);
            bVar4 = false;
            if (lVar11 != 0) goto LAB_00236d08;
          }
          bVar4 = true;
        }
LAB_00236d08:
        uVar19 = 2;
        if (!bVar4) {
          bVar4 = false;
          if (apsStack_a0[0][1] == DAT_0043de10[1]) {
            if (apsStack_a0[0] != DAT_0043de10) {
              lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,DAT_0043de10 + 4);
              bVar4 = false;
              if (lVar11 != 0) goto LAB_00236d4c;
            }
            bVar4 = true;
          }
LAB_00236d4c:
          uVar19 = 1;
          if (!bVar4) {
            bVar4 = false;
            if (apsStack_a0[0][1] == DAT_0043dce8[1]) {
              if (apsStack_a0[0] != DAT_0043dce8) {
                lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,DAT_0043dce8 + 4);
                bVar4 = false;
                if (lVar11 != 0) goto LAB_00236d90;
              }
              bVar4 = true;
            }
LAB_00236d90:
            uVar19 = 3;
            if (!bVar4) {
              bVar4 = false;
              if (apsStack_a0[0][1] == DAT_0043dd9c[1]) {
                if (apsStack_a0[0] != DAT_0043dd9c) {
                  lVar11 = FUN_0035c4b0(apsStack_a0[0] + 4,DAT_0043dd9c + 4);
                  bVar4 = false;
                  if (lVar11 != 0) goto LAB_00236dd4;
                }
                bVar4 = true;
              }
LAB_00236dd4:
              uVar19 = 3;
              if (!bVar4) goto LAB_00236de4;
            }
          }
        }
        *(undefined4 *)(iVar13 + 0x38) = uVar19;
      }
    }
LAB_00236de4:
    *(uint *)(iVar13 + 0x6c) = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 4;
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
      return 1;
    }
    break;
  case 2:
    uVar10 = FUN_0024c300(param_3);
    uVar12 = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x20;
    *(uint *)(iVar13 + 0x74) = *(uint *)(iVar13 + 0x74) & 0xfffffffb | (uVar10 & 1) << 2;
    goto LAB_00236efc;
  case 3:
    uVar10 = FUN_0024c300(param_3);
    uVar12 = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x40;
    *(uint *)(iVar13 + 0x30) = uVar10 | 0xff000000;
    goto LAB_00236efc;
  case 4:
    uVar10 = FUN_0024c300(param_3);
    uVar12 = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x80;
    *(uint *)(iVar13 + 0x74) = *(uint *)(iVar13 + 0x74) & 0xfffffffd | (uVar10 & 1) << 1;
    goto LAB_00236efc;
  case 5:
    uVar10 = FUN_0024c300(param_3);
    uVar12 = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x100;
    *(uint *)(iVar13 + 0x34) = uVar10 | 0xff000000;
LAB_00236efc:
    *(uint *)(iVar13 + 0x6c) = uVar12;
    break;
  case 6:
  case 8:
  case 0x10:
    break;
  case 7:
  case 9:
  case 0xe:
  case 0xf:
  case 0x15:
    goto switchD_00236b64_caseD_7;
  case 10:
    uVar19 = FUN_0024c300(param_3);
    *(undefined4 *)(*(int *)(iVar13 + 8) + 0x2c) = uVar19;
    goto switchD_00236b64_caseD_7;
  case 0xb:
    iVar8 = FUN_0024c300(param_3);
    iVar14 = *(int *)(iVar13 + 0x2c);
    if ((*(uint *)(iVar13 + 0x6c) & 4) != 0) {
      FUN_0023bd70(param_1,*(undefined4 *)(param_1 + 0x44));
    }
    *(int *)(iVar13 + 0x2c) = iVar8;
    if (*(int *)(iVar13 + 0x28) < iVar8) {
      *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x28);
    }
    iVar8 = *(int *)(iVar13 + 0x2c);
    if (iVar8 < 1) {
      *(undefined4 *)(iVar13 + 0x2c) = 1;
      iVar8 = *(int *)(iVar13 + 0x2c);
    }
    if (iVar14 != iVar8) {
      *(undefined4 *)(iVar13 + 0x6c) = 0x204;
    }
switchD_00236b64_caseD_7:
switchD_00236b64_default:
    lVar11 = FUN_00387080(param_1);
    bVar4 = false;
    if (lVar11 == 0xd) {
      lVar11 = FUN_003871c0(param_1);
      bVar4 = lVar11 == 0;
    }
    if (bVar4) {
LAB_002374c8:
      bVar5 = true;
    }
    else {
      lVar11 = FUN_00387080(param_1);
      bVar4 = false;
      if (lVar11 == 0x12) {
        lVar11 = FUN_003871c0(param_1);
        bVar4 = lVar11 == 0;
      }
      bVar5 = false;
      if (bVar4) goto LAB_002374c8;
    }
    if (bVar5) {
      iVar13 = *piVar17;
    }
    else {
      lVar11 = FUN_00387080(param_1);
      bVar4 = false;
      if (lVar11 == 0xf) {
        lVar11 = FUN_003871c0(param_1);
        bVar4 = lVar11 == 0;
      }
      if (bVar4) {
        iVar13 = *piVar17;
      }
      else {
        lVar11 = FUN_00387080(param_1);
        bVar4 = false;
        if (lVar11 == 0x13) {
          lVar11 = FUN_003871c0(param_1);
          bVar4 = lVar11 == 0;
        }
        if (!bVar4) {
          return 0;
        }
        iVar13 = *piVar17;
      }
    }
    lVar11 = FUN_0024a7f8(iVar13 + 8,*(undefined2 *)(iVar13 + 2));
    if (lVar11 == 0) {
      lVar11 = stricmp(*piVar17 + 8,0x3fd4b0);
      if (lVar11 == 0) {
        return 0;
      }
      return 0;
    }
    iVar14 = (int)lVar11;
    iVar13 = *(int *)(iVar14 + 4);
    if (iVar13 == 200) goto LAB_00237804;
    if (iVar13 < 0xc9) {
      if (iVar13 == 7) {
        if ((*piVar16 >> 4 & 1U) != 1) {
          return 0;
        }
        uVar19 = FUN_0024c410(param_3);
        uVar15 = 7;
      }
      else if (iVar13 < 8) {
        if (iVar13 == 2) {
          if ((*piVar16 >> 4 & 1U) != 1) {
            return 0;
          }
          uVar19 = FUN_0024c410(param_3);
          uVar15 = 1;
        }
        else if (iVar13 < 3) {
          if (iVar13 != 1) {
            return 0;
          }
          if ((*piVar16 >> 4 & 1U) != 1) {
            return 0;
          }
          uVar19 = FUN_0024c410(param_3);
          uVar15 = 0;
        }
        else if (iVar13 == 3) {
          if ((*piVar16 >> 4 & 1U) != 1) {
            return 0;
          }
          uVar19 = FUN_0024c410(param_3);
          uVar15 = 2;
        }
        else {
          if (iVar13 != 4) {
            return 0;
          }
          if ((*piVar16 >> 4 & 1U) != 1) {
            return 0;
          }
          uVar19 = FUN_0024c410(param_3);
          uVar15 = 3;
        }
      }
      else if (iVar13 == 9) {
        if ((*piVar16 >> 4 & 1U) != 1) {
          return 0;
        }
        uVar19 = FUN_0024c410(param_3);
        uVar15 = 4;
      }
      else if (iVar13 < 9) {
        if ((*piVar16 >> 4 & 1U) != 1) {
          return 0;
        }
        uVar19 = FUN_0024c410(param_3);
        uVar15 = 0xb;
      }
      else if (iVar13 == 10) {
        if ((*piVar16 >> 4 & 1U) != 1) {
          return 0;
        }
        uVar19 = FUN_0024c410(param_3);
        uVar15 = 5;
      }
      else {
        if (iVar13 != 0xb) {
          return 0;
        }
        if ((*piVar16 >> 4 & 1U) != 1) {
          return 0;
        }
        uVar19 = FUN_0024c410(param_3);
        uVar15 = 6;
      }
      FUN_0023ccc8(uVar19,param_1,uVar15,1);
      return 1;
    }
    if (iVar13 < 0xce) {
      if ((iVar13 < 0xcc) && (0xca < iVar13)) goto LAB_00237804;
    }
    else {
      if (0xd7 < iVar13) {
        if (iVar13 != 0xd9) {
          return 0;
        }
LAB_00237804:
        lVar11 = FUN_00387080(param_1);
        bVar4 = false;
        if (lVar11 == 0xf) {
          lVar11 = FUN_003871c0(param_1);
          bVar4 = lVar11 == 0;
        }
        if (!bVar4) {
          uVar19 = *(undefined4 *)((*(int *)(iVar14 + 4) + -200) * 4 + 0x3ffc00);
          uVar15 = (**(code **)(*(int *)(param_1 + 4) + 0x24))
                             (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x20));
          FUN_002488d0(uVar15,param_2,param_3);
          if ((param_3 != 0) && ((*piVar16 >> 4 & 1U) == 1)) {
            FUN_0023dd28(param_1,uVar19);
            return 1;
          }
          FUN_0023dd68(param_1,uVar19);
          return 1;
        }
        return 0;
      }
      if (iVar13 < 0xd0) {
        if (iVar13 != 0xcf) {
          return 0;
        }
        goto LAB_00237804;
      }
    }
    lVar11 = FUN_00387080(param_1);
    bVar4 = false;
    if (lVar11 == 0xf) {
      lVar11 = FUN_003871c0(param_1);
      bVar4 = lVar11 == 0;
    }
    if (bVar4) {
      return 0;
    }
    uVar19 = *(undefined4 *)((*(int *)(iVar14 + 4) + -200) * 4 + 0x3ffc00);
    uVar15 = (**(code **)(*(int *)(param_1 + 4) + 0x24))
                       (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x20));
    FUN_002488d0(uVar15,param_2,param_3);
    if ((param_3 != 0) && ((*piVar16 >> 4 & 1U) == 1)) {
      FUN_0023dd28(param_1,uVar19);
      lVar11 = FUN_00387080(param_1);
      bVar4 = false;
      if (lVar11 == 0xd) {
        lVar11 = FUN_003871c0(param_1);
        bVar4 = lVar11 == 0;
      }
      if (!bVar4) {
        lVar11 = FUN_00387080(param_1);
        bVar4 = false;
        if (lVar11 == 0x12) {
          lVar11 = FUN_003871c0(param_1);
          bVar4 = lVar11 == 0;
        }
        if (!bVar4) {
          return 1;
        }
      }
      iVar13 = DAT_0043df68;
      iVar14 = 0;
      if (*(ushort *)(DAT_0043df68 + 0x12) != 0) {
        piVar16 = *(int **)(DAT_0043df68 + 0x14);
        do {
          iVar14 = iVar14 + 1;
          if (*piVar16 == param_1) {
            bVar4 = true;
            goto LAB_00237b3c;
          }
          piVar16 = piVar16 + 1;
        } while (iVar14 < (int)(uint)*(ushort *)(DAT_0043df68 + 0x12));
      }
      bVar4 = false;
LAB_00237b3c:
      if (!bVar4) {
        uVar7 = *(short *)(DAT_0043df68 + 0x10) + 1;
        *(ushort *)(DAT_0043df68 + 0x10) = uVar7;
        uVar10 = (uint)uVar7;
        if (*(int *)((uint)uVar7 * 4 + *(int *)(iVar13 + 0x14)) == 0) {
          iVar13 = *(int *)(iVar13 + 0x14);
        }
        else {
          bVar4 = uVar10 < *(ushort *)(iVar13 + 0x12);
          do {
            if (!bVar4) {
              uVar10 = 0;
            }
            uVar10 = uVar10 + 1;
            bVar4 = (int)uVar10 < (int)(uint)*(ushort *)(iVar13 + 0x12);
          } while (*(int *)(uVar10 * 4 + *(int *)(iVar13 + 0x14)) != 0);
          iVar13 = *(int *)(iVar13 + 0x14);
        }
        *(int *)(uVar10 * 4 + iVar13) = param_1;
        (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1 + *(short *)(*(int *)(param_1 + 4) + 8));
        return 1;
      }
      return 1;
    }
    FUN_0023dd68(param_1);
    lVar11 = FUN_00387080(param_1);
    bVar4 = false;
    if (lVar11 == 0xd) {
      lVar11 = FUN_003871c0(param_1);
      bVar4 = lVar11 == 0;
    }
    if (bVar4) {
      lVar11 = FUN_0023ddb0(param_1,0x200c0);
      iVar13 = DAT_0043df68;
      if (lVar11 != 0) {
        return 1;
      }
      iVar14 = 0;
      if (*(ushort *)(DAT_0043df68 + 0x12) != 0) {
        piVar16 = *(int **)(DAT_0043df68 + 0x14);
        do {
          iVar14 = iVar14 + 1;
          if (*piVar16 == param_1) {
            bVar4 = true;
            goto LAB_002379e4;
          }
          piVar16 = piVar16 + 1;
        } while (iVar14 < (int)(uint)*(ushort *)(DAT_0043df68 + 0x12));
      }
      bVar4 = false;
LAB_002379e4:
      if ((bVar4) && (*(short *)(DAT_0043df68 + 0x10) != 0)) {
        uVar10 = (uint)*(ushort *)(DAT_0043df68 + 0x12);
        iVar14 = 0;
        if (uVar10 != 0) {
          piVar16 = *(int **)(DAT_0043df68 + 0x14);
          bVar4 = uVar10 != 0;
          if (*piVar16 == param_1) {
LAB_00237a44:
            if (bVar4) {
              piVar16 = (int *)(DAT_0043df68 + 0x14);
              *(short *)(DAT_0043df68 + 0x10) = *(short *)(DAT_0043df68 + 0x10) + -1;
              iVar8 = *(int *)(iVar14 * 4 + *piVar16);
              iVar3 = *(int *)(iVar8 + 4);
              (**(code **)(iVar3 + 0x14))(iVar8 + *(short *)(iVar3 + 0x10));
              *(undefined4 *)(iVar14 * 4 + *(int *)(iVar13 + 0x14)) = 0;
            }
          }
          else {
            for (iVar14 = 1; piVar16 = piVar16 + 1, iVar14 < (int)uVar10; iVar14 = iVar14 + 1) {
              if (*piVar16 == param_1) {
                bVar4 = iVar14 < (int)uVar10;
                goto LAB_00237a44;
              }
            }
          }
        }
      }
    }
    break;
  case 0xc:
    apsStack_a0[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_3,apsStack_a0);
    psVar2 = *(short **)(iVar13 + 0x18);
    bVar4 = false;
    if (psVar2[1] == apsStack_a0[0][1]) {
      if (psVar2 != apsStack_a0[0]) {
        lVar11 = FUN_0035c4b0(psVar2 + 4,apsStack_a0[0] + 4);
        bVar4 = false;
        if (lVar11 != 0) goto LAB_00236fdc;
      }
      bVar4 = true;
    }
LAB_00236fdc:
    if (!bVar4) {
      *apsStack_a0[0] = *apsStack_a0[0] + 1;
      psVar2 = *(short **)(iVar13 + 0x18);
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      *(short **)(iVar13 + 0x18) = apsStack_a0[0];
      if (*(undefined2 **)(iVar13 + 0x1c) != &DAT_003bfaf8) {
        iVar14 = param_1;
        for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x44)) {
          lVar11 = FUN_00387080(param_1);
          bVar4 = false;
          if (lVar11 == 0xd) {
            lVar11 = FUN_003871c0(param_1);
            bVar4 = lVar11 == 0;
          }
          if (bVar4) {
LAB_002370b8:
            bVar5 = true;
          }
          else {
            lVar11 = FUN_00387080(param_1);
            bVar4 = false;
            if (lVar11 == 0x12) {
              lVar11 = FUN_003871c0(param_1);
              bVar4 = lVar11 == 0;
            }
            bVar5 = false;
            if (bVar4) goto LAB_002370b8;
          }
          iVar14 = param_1;
          if (bVar5) break;
        }
        puVar9 = DAT_003bfb10;
        if (DAT_003bfb10 == (uint *)0x0) {
          uVar15 = Pool_Alloc(DAT_0043dee0,0x10);
          puVar9 = (uint *)FUN_0024ad08(uVar15);
        }
        else {
          uVar10 = *DAT_003bfb10;
          puVar6 = (uint *)DAT_003bfb10[3];
          *DAT_003bfb10 = uVar10 | 4;
          DAT_003bfb10 = puVar6;
          piVar16 = DAT_003be8e0;
          iVar8 = DAT_003be8e0[1];
          if (iVar8 < *DAT_003be8e0) {
            *(uint **)(iVar8 * 4 + DAT_003be8e0[2]) = puVar9;
            piVar16[1] = iVar8 + 1;
          }
          else {
            *puVar9 = uVar10 & 0xfffffffb;
          }
          lVar11 = FUN_003872a8(puVar9 + 2);
          if (lVar11 == 0) {
            FUN_002530e8(puVar9 + 2,0);
          }
        }
        *apsStack_a0[0] = *apsStack_a0[0] + 1;
        psVar2 = (short *)puVar9[2];
        sVar1 = *psVar2;
        *psVar2 = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
        }
        puVar9[2] = (uint)apsStack_a0[0];
        FUN_0021c268(0x43db68,iVar14,0,iVar13 + 0x1c,puVar9,1,1,0);
      }
      *(undefined4 *)(iVar13 + 0x6c) = 0x204;
    }
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
      return 1;
    }
    break;
  case 0xd:
    uVar10 = FUN_0024c300(param_3);
    *(uint *)(iVar13 + 0x24) = uVar10 | 0xff000000;
    *(uint *)(iVar13 + 0x6c) = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x400;
    if (*(int *)(iVar13 + 0x68) != 0) {
      *(uint *)(*(int *)(iVar13 + 0x68) + 8) = uVar10 & 0xffffff;
    }
    break;
  case 0x11:
    apsStack_a0[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_3,apsStack_a0);
    psVar2 = *(short **)(iVar13 + 0x1c);
    bVar4 = false;
    if (psVar2[1] == apsStack_a0[0][1]) {
      if (psVar2 != apsStack_a0[0]) {
        lVar11 = FUN_0035c4b0(psVar2 + 4,apsStack_a0[0] + 4);
        bVar4 = false;
        if (lVar11 != 0) goto LAB_002372c0;
      }
      bVar4 = true;
    }
LAB_002372c0:
    if (!bVar4) {
      *apsStack_a0[0] = *apsStack_a0[0] + 1;
      psVar2 = *(short **)(iVar13 + 0x1c);
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      *(short **)(iVar13 + 0x1c) = apsStack_a0[0];
      FUN_00233d18(iVar13,param_1);
      *(uint *)(iVar13 + 0x6c) = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x204;
    }
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
      return 1;
    }
    break;
  case 0x12:
    uVar19 = FUN_0024c300(param_3);
    *(undefined4 *)(*(int *)(iVar13 + 8) + 0x30) = uVar19;
    *(uint *)(iVar13 + 0x6c) = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x1004;
    return 1;
  case 0x13:
    if ((*piVar16 >> 4 & 1U) != 1) {
      return 0;
    }
    fVar18 = (float)FUN_0024c410(param_3);
    if (0.0 <= fVar18) {
      *(uint *)(iVar13 + 0x6c) = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x2004;
      *(float *)(iVar13 + 0x5c) = *(float *)(iVar13 + 0x54) + fVar18;
      return 1;
    }
    return 1;
  case 0x14:
    if ((*piVar16 >> 4 & 1U) != 1) {
      return 0;
    }
    fVar18 = (float)FUN_0024c410(param_3);
    if (0.0 <= fVar18) {
      *(uint *)(iVar13 + 0x6c) = *(uint *)(iVar13 + 0x6c) & 0xfffffffe | 0x4004;
      *(float *)(iVar13 + 0x58) = *(float *)(iVar13 + 0x50) + fVar18;
      return 1;
    }
    return 1;
  default:
    goto switchD_00236b64_default;
  }
  return 1;
}


// ==== FUN_00237c18 @ 00237c18 ====

/* Strings referenciadas:
     "dynamic" */

uint * FUN_00237c18(uint *param_1,int *param_2)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  short *psVar9;
  undefined *puVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  uint uVar15;
  float fVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = FUN_00387080();
  bVar14 = false;
  if (lVar6 == 0xf) {
    lVar6 = FUN_003871c0(param_1);
    bVar14 = lVar6 == 0;
  }
  if ((bVar14) &&
     (lVar6 = FUN_00233890(*param_2 + 8,*(undefined2 *)(*param_2 + 2)), puVar5 = DAT_003bfb10,
     puVar12 = DAT_003bfaec, puVar13 = DAT_003bfae4, lVar6 != 0)) {
    uVar15 = param_1[0x12];
    switch(*(undefined4 *)((int)lVar6 + 4)) {
    case 1:
      if (DAT_003bfb10 == (uint *)0x0) {
        uVar7 = Pool_Alloc(DAT_0043dee0,0x10);
        puVar5 = (uint *)FUN_0024ad08(uVar7);
        iVar11 = *(int *)(uVar15 + 0x38);
      }
      else {
        uVar8 = *DAT_003bfb10;
        puVar13 = (uint *)DAT_003bfb10[3];
        *DAT_003bfb10 = uVar8 | 4;
        DAT_003bfb10 = puVar13;
        piVar2 = DAT_003be8e0;
        iVar11 = DAT_003be8e0[1];
        if (iVar11 < *DAT_003be8e0) {
          *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar5;
          piVar2[1] = iVar11 + 1;
        }
        else {
          *puVar5 = uVar8 & 0xfffffffb;
        }
        lVar6 = FUN_003872a8(puVar5 + 2);
        if (lVar6 == 0) {
          FUN_002530e8(puVar5 + 2,0);
          iVar11 = *(int *)(uVar15 + 0x38);
        }
        else {
          iVar11 = *(int *)(uVar15 + 0x38);
        }
      }
      if (iVar11 == 1) {
        FUN_00387398(puVar5 + 2,0x43de10);
        return puVar5;
      }
      if (iVar11 < 2) {
        if (iVar11 == 0) {
          FUN_00387398(puVar5 + 2,0x43dd70);
          return puVar5;
        }
      }
      else {
        if (iVar11 == 2) {
          FUN_00387398(puVar5 + 2,0x43dcbc);
          return puVar5;
        }
        if (iVar11 == 3) {
          FUN_00387398(puVar5 + 2,0x43dd9c);
          return puVar5;
        }
      }
      FUN_00387398(puVar5 + 2,0x43dd9c);
      return puVar5;
    case 2:
      bVar14 = (bool)((byte)(*(int *)(uVar15 + 0x74) >> 2) & 1);
      if (DAT_003bfae4 == (uint *)0x0) {
        puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar5,5);
        *(bool *)(puVar5 + 2) = bVar14;
        puVar10 = &DAT_003e2120;
        break;
      }
      uVar8 = *DAT_003bfae4 | 4;
      uVar15 = DAT_003bfae4[2];
      *DAT_003bfae4 = uVar8;
      DAT_003bfae4 = (uint *)uVar15;
      iVar11 = DAT_003be8e0[1];
      if (iVar11 < *DAT_003be8e0) {
        iVar4 = DAT_003be8e0[2];
        goto LAB_00237e6c;
      }
      goto LAB_00237e60;
    case 3:
      uVar15 = *(uint *)(uVar15 + 0x30) & 0xffffff;
      if (DAT_003bfaec != (uint *)0x0) {
        uVar8 = *DAT_003bfaec | 4;
        uVar3 = DAT_003bfaec[2];
        *DAT_003bfaec = uVar8;
        DAT_003bfaec = (uint *)uVar3;
        iVar11 = DAT_003be8e0[1];
        if (iVar11 < *DAT_003be8e0) {
          iVar4 = DAT_003be8e0[2];
LAB_00237f18:
          piVar2 = DAT_003be8e0;
          *(uint **)(iVar11 * 4 + iVar4) = puVar12;
          piVar2[1] = iVar11 + 1;
          goto LAB_00237f2c;
        }
LAB_00237f0c:
        *puVar12 = uVar8 & 0xfffffffb;
LAB_00237f2c:
        puVar12[2] = uVar15;
        return puVar12;
      }
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar15;
      puVar10 = &DAT_003e2230;
      break;
    case 4:
      bVar14 = (bool)((byte)(*(int *)(uVar15 + 0x74) >> 1) & 1);
      if (DAT_003bfae4 == (uint *)0x0) {
        puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar5,5);
        *(bool *)(puVar5 + 2) = bVar14;
        puVar10 = &DAT_003e2120;
        break;
      }
LAB_00237f7c:
      uVar15 = DAT_003bfae4[2];
LAB_00237f88:
      DAT_003bfae4 = (uint *)uVar15;
      uVar8 = *puVar13 | 4;
      *puVar13 = uVar8;
      iVar11 = DAT_003be8e0[1];
      if (iVar11 < *DAT_003be8e0) {
        iVar4 = DAT_003be8e0[2];
LAB_00237e6c:
        piVar2 = DAT_003be8e0;
        *(uint **)(iVar11 * 4 + iVar4) = puVar13;
        piVar2[1] = iVar11 + 1;
        goto LAB_00237e80;
      }
LAB_00237e60:
      *puVar13 = uVar8 & 0xfffffffb;
LAB_00237e80:
      *(bool *)(puVar13 + 2) = bVar14;
      return puVar13;
    case 5:
      uVar15 = *(uint *)(uVar15 + 0x34) & 0xffffff;
      if (DAT_003bfaec != (uint *)0x0) {
LAB_00238000:
        uVar8 = DAT_003bfaec[2];
        puVar12 = DAT_003bfaec;
LAB_0023800c:
        DAT_003bfaec = (uint *)uVar8;
        uVar8 = *puVar12 | 4;
        *puVar12 = uVar8;
        iVar11 = DAT_003be8e0[1];
        if (iVar11 < *DAT_003be8e0) {
          iVar4 = DAT_003be8e0[2];
          goto LAB_00237f18;
        }
        goto LAB_00237f0c;
      }
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar15;
      puVar10 = &DAT_003e2230;
      break;
    default:
      goto switchD_00237cac_caseD_6;
    case 7:
      FUN_002340d8(uVar15,param_1);
      uVar15 = (uint)*(ushort *)(*(int *)(uVar15 + 0x18) + 2);
      if (DAT_003bfaec != (uint *)0x0) goto LAB_00238000;
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar15;
      puVar10 = &DAT_003e2230;
      break;
    case 8:
      return DAT_0043df40;
    case 9:
      if ((*(uint *)(uVar15 + 0x6c) & 4) != 0) {
        FUN_0023bd70(param_1,param_1[0x11]);
      }
      uVar15 = *(uint *)(uVar15 + 0x28);
      if (DAT_003bfaec != (uint *)0x0) {
        uVar8 = DAT_003bfaec[2];
        puVar12 = DAT_003bfaec;
        goto LAB_0023800c;
      }
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar15;
      puVar10 = &DAT_003e2230;
      break;
    case 10:
      bVar14 = (*(uint *)(*(int *)(uVar15 + 8) + 0x2c) & 0xffffff) != 0;
      if (DAT_003bfae4 != (uint *)0x0) goto LAB_00237f7c;
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,5);
      *(bool *)(puVar5 + 2) = bVar14;
      puVar10 = &DAT_003e2120;
      break;
    case 0xb:
      if ((*(uint *)(uVar15 + 0x6c) & 4) != 0) {
        FUN_0023bd70(param_1,param_1[0x11]);
      }
      uVar15 = *(uint *)(uVar15 + 0x2c);
      if (DAT_003bfaec != (uint *)0x0) {
        uVar8 = DAT_003bfaec[2];
        puVar12 = DAT_003bfaec;
        goto LAB_0023800c;
      }
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar15;
      puVar10 = &DAT_003e2230;
      break;
    case 0xc:
      FUN_002340d8(uVar15,param_1);
      puVar5 = DAT_003bfb10;
      if (DAT_003bfb10 == (uint *)0x0) {
        uVar7 = Pool_Alloc(DAT_0043dee0,0x10);
        puVar5 = (uint *)FUN_0024ad08(uVar7);
        psVar9 = *(short **)(uVar15 + 0x18);
      }
      else {
        uVar8 = *DAT_003bfb10;
        puVar13 = (uint *)DAT_003bfb10[3];
        *DAT_003bfb10 = uVar8 | 4;
        DAT_003bfb10 = puVar13;
        piVar2 = DAT_003be8e0;
        iVar11 = DAT_003be8e0[1];
        if (iVar11 < *DAT_003be8e0) {
          *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar5;
          piVar2[1] = iVar11 + 1;
        }
        else {
          *puVar5 = uVar8 & 0xfffffffb;
        }
        lVar6 = FUN_003872a8(puVar5 + 2);
        if (lVar6 == 0) {
          FUN_002530e8(puVar5 + 2,0);
          psVar9 = *(short **)(uVar15 + 0x18);
        }
        else {
          psVar9 = *(short **)(uVar15 + 0x18);
        }
      }
      *psVar9 = *psVar9 + 1;
      psVar9 = (short *)puVar5[2];
      sVar1 = *psVar9;
      *psVar9 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,psVar9,(ushort)psVar9[2] + 9);
      }
      uVar15 = *(uint *)(uVar15 + 0x18);
      goto LAB_00239ea0;
    case 0xd:
      uVar15 = *(uint *)(uVar15 + 0x24) & 0xffffff;
      if (DAT_003bfaec != (uint *)0x0) goto LAB_00238000;
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,7);
      puVar5[2] = uVar15;
      puVar10 = &DAT_003e2230;
      break;
    case 0xe:
      if ((*(uint *)(uVar15 + 0x6c) & 4) != 0) {
        FUN_0023bd70(param_1,param_1[0x11]);
      }
      puVar5 = DAT_003bfae8;
      fVar16 = *(float *)(uVar15 + 0x48);
      if (DAT_003bfae8 == (uint *)0x0) goto LAB_0023a214;
      uVar15 = *DAT_003bfae8 | 4;
      puVar13 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar15;
      DAT_003bfae8 = puVar13;
      iVar11 = DAT_003be8e0[1];
      if (iVar11 < *DAT_003be8e0) {
        iVar4 = DAT_003be8e0[2];
        goto LAB_00238384;
      }
      goto LAB_00238378;
    case 0xf:
      if ((*(uint *)(uVar15 + 0x6c) & 4) != 0) {
        FUN_0023bd70(param_1,param_1[0x11]);
      }
      fVar16 = *(float *)(uVar15 + 0x44);
      goto LAB_002383c0;
    case 0x10:
      if (DAT_003bfb10 == (uint *)0x0) {
        uVar7 = Pool_Alloc(DAT_0043dee0,0x10);
        puVar5 = (uint *)FUN_0024ad08(uVar7);
      }
      else {
        uVar15 = *DAT_003bfb10;
        puVar13 = (uint *)DAT_003bfb10[3];
        *DAT_003bfb10 = uVar15 | 4;
        DAT_003bfb10 = puVar13;
        piVar2 = DAT_003be8e0;
        iVar11 = DAT_003be8e0[1];
        if (iVar11 < *DAT_003be8e0) {
          *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar5;
          piVar2[1] = iVar11 + 1;
        }
        else {
          *puVar5 = uVar15 & 0xfffffffb;
        }
        lVar6 = FUN_003872a8(puVar5 + 2);
        if (lVar6 == 0) {
          FUN_002530e8(puVar5 + 2,0);
        }
      }
      FUN_003872e0(&uStack_90,0x3fdb68);
      FUN_00387398(puVar5 + 2,&uStack_90);
      FUN_00387328(&uStack_90,2);
      return puVar5;
    case 0x11:
      if (*(undefined2 **)(uVar15 + 0x1c) == &DAT_003bfaf8) {
        return DAT_0043df40;
      }
      if (DAT_003bfb10 == (uint *)0x0) {
        uVar7 = Pool_Alloc(DAT_0043dee0,0x10);
        puVar5 = (uint *)FUN_0024ad08(uVar7);
        psVar9 = *(short **)(uVar15 + 0x1c);
      }
      else {
        uVar8 = *DAT_003bfb10;
        puVar13 = (uint *)DAT_003bfb10[3];
        *DAT_003bfb10 = uVar8 | 4;
        DAT_003bfb10 = puVar13;
        piVar2 = DAT_003be8e0;
        iVar11 = DAT_003be8e0[1];
        if (iVar11 < *DAT_003be8e0) {
          *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar5;
          piVar2[1] = iVar11 + 1;
        }
        else {
          *puVar5 = uVar8 & 0xfffffffb;
        }
        lVar6 = FUN_003872a8(puVar5 + 2);
        if (lVar6 == 0) {
          FUN_002530e8(puVar5 + 2,0);
          psVar9 = *(short **)(uVar15 + 0x1c);
        }
        else {
          psVar9 = *(short **)(uVar15 + 0x1c);
        }
      }
      *psVar9 = *psVar9 + 1;
      psVar9 = (short *)puVar5[2];
      sVar1 = *psVar9;
      *psVar9 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        Pool_Free(DAT_0043dee0,psVar9,(ushort)psVar9[2] + 9);
      }
      uVar15 = *(uint *)(uVar15 + 0x1c);
LAB_00239ea0:
      puVar5[2] = uVar15;
      return puVar5;
    case 0x12:
      bVar14 = (*(uint *)(*(int *)(uVar15 + 8) + 0x30) & 0xffffff) != 0;
      if (DAT_003bfae4 != (uint *)0x0) goto LAB_00237f7c;
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,5);
      *(bool *)(puVar5 + 2) = bVar14;
      puVar10 = &DAT_003e2120;
      break;
    case 0x13:
      if ((*(uint *)(uVar15 + 0x6c) & 4) != 0) {
        FUN_0023bd70(param_1,param_1[0x11]);
      }
      FUN_0023c890(param_1,&uStack_90);
      fVar16 = uStack_88._4_4_ - uStack_90._4_4_;
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
      goto LAB_002383c0;
    case 0x14:
      if ((*(uint *)(uVar15 + 0x6c) & 4) != 0) {
        FUN_0023bd70(param_1,param_1[0x11]);
      }
      FUN_0023c890(param_1,&uStack_90);
      fVar16 = (float)uStack_88 - (float)(short *)uStack_90;
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
LAB_002383c0:
      if (DAT_003bfae8 == (uint *)0x0) goto LAB_0023a214;
      puVar13 = (uint *)DAT_003bfae8[2];
      puVar5 = DAT_003bfae8;
      goto LAB_002383d4;
    case 0x15:
      bVar14 = (bool)((byte)(*(int *)(uVar15 + 0x74) >> 3) & 1);
      if (DAT_003bfae4 != (uint *)0x0) goto LAB_00237f7c;
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,5);
      *(bool *)(puVar5 + 2) = bVar14;
      puVar10 = &DAT_003e2120;
    }
    goto LAB_0023a240;
  }
switchD_00237cac_caseD_6:
  lVar6 = 0;
  if (param_1 != (uint *)0x0) {
    uVar15 = 0;
    if ((*param_1 >> 0x19) - 0xc < 8) {
      uVar15 = (int)*param_1 >> 4 & 1;
    }
    lVar6 = 0;
    if (uVar15 != 0) {
      lVar6 = FUN_0024a7f8(*param_2 + 8,*(undefined2 *)(*param_2 + 2));
    }
  }
  puVar5 = DAT_003bfb10;
  if (lVar6 == 0) {
    return (uint *)0x0;
  }
  switch(*(undefined4 *)((int)lVar6 + 4)) {
  case 1:
    lVar6 = FUN_00387080(param_1);
    bVar14 = false;
    if (lVar6 == 0xf) {
      lVar6 = FUN_003871c0(param_1);
      bVar14 = lVar6 == 0;
    }
    if (bVar14) {
      iVar11 = *(int *)(param_1[0x12] + 0x38);
      if (((iVar11 != 3) && (iVar11 != 0)) && ((*(uint *)(param_1[0x12] + 0x6c) & 4) != 0)) {
        FUN_0023bd70(param_1,param_1[0x11]);
      }
    }
    uVar7 = 0;
    goto LAB_00238b14;
  case 2:
    uVar7 = 1;
    goto LAB_00238b14;
  case 3:
    uVar7 = 2;
    goto LAB_00238b14;
  case 4:
    uVar7 = 3;
    goto LAB_00238b14;
  case 5:
    fVar16 = (float)(*(int *)(param_1[0x12] + 0x18) + 1);
    goto LAB_0023a1fc;
  case 6:
  case 0xd:
    fVar16 = (float)*(int *)(*(int *)(param_1[0x12] + 8) + 8);
    goto LAB_0023a1fc;
  case 7:
    uVar7 = 7;
    goto LAB_00238b14;
  case 8:
    fVar16 = (float)FUN_0023c8e8(param_1,0xb);
    puVar13 = DAT_003bfae4;
    if (fVar16 == 1.0) {
      bVar14 = true;
      if (DAT_003bfae4 != (uint *)0x0) {
        uVar15 = DAT_003bfae4[2];
        goto LAB_00237f88;
      }
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,5);
      *(undefined1 *)(puVar5 + 2) = 1;
      puVar10 = &DAT_003e2120;
    }
    else {
      if (DAT_003bfae4 != (uint *)0x0) {
        uVar15 = *DAT_003bfae4;
        uVar8 = DAT_003bfae4[2];
        *DAT_003bfae4 = uVar15 | 4;
        DAT_003bfae4 = (uint *)uVar8;
        piVar2 = DAT_003be8e0;
        iVar11 = DAT_003be8e0[1];
        if (iVar11 < *DAT_003be8e0) {
          *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar13;
          piVar2[1] = iVar11 + 1;
        }
        else {
          *puVar13 = uVar15 & 0xfffffffb;
        }
        *(undefined1 *)(puVar13 + 2) = 0;
        return puVar13;
      }
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,5);
      *(undefined1 *)(puVar5 + 2) = 0;
      puVar10 = &DAT_003e2120;
    }
    goto LAB_0023a240;
  case 9:
    uVar7 = 4;
    goto LAB_00238b14;
  case 10:
    uVar7 = 5;
    goto LAB_00238b14;
  case 0xb:
    uVar7 = 6;
LAB_00238b14:
    fVar16 = (float)FUN_0023c8e8(param_1,uVar7);
LAB_0023a1fc:
    if (DAT_003bfae8 == (uint *)0x0) {
LAB_0023a214:
      puVar5 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar5,6);
      puVar5[2] = (uint)fVar16;
      puVar10 = &DAT_003e2098;
LAB_0023a240:
      puVar5[1] = (uint)puVar10;
    }
    else {
      puVar13 = (uint *)DAT_003bfae8[2];
      puVar5 = DAT_003bfae8;
LAB_002383d4:
      DAT_003bfae8 = puVar13;
      uVar15 = *puVar5 | 4;
      *puVar5 = uVar15;
      iVar11 = DAT_003be8e0[1];
      if (iVar11 < *DAT_003be8e0) {
        iVar4 = DAT_003be8e0[2];
LAB_00238384:
        piVar2 = DAT_003be8e0;
        *(uint **)(iVar11 * 4 + iVar4) = puVar5;
        piVar2[1] = iVar11 + 1;
      }
      else {
LAB_00238378:
        *puVar5 = uVar15 & 0xfffffffb;
      }
      puVar5[2] = (uint)fVar16;
    }
    break;
  case 0xc:
    uStack_90 = CONCAT44(uStack_90._4_4_,&DAT_003bfaf8);
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0021df70(param_1,&uStack_90);
    puVar5 = DAT_003bfb10;
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar7 = Pool_Alloc(DAT_0043dee0,0x10);
      puVar5 = (uint *)FUN_0024ad08(uVar7);
    }
    else {
      uVar15 = *DAT_003bfb10;
      puVar13 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar15 | 4;
      DAT_003bfb10 = puVar13;
      piVar2 = DAT_003be8e0;
      iVar11 = DAT_003be8e0[1];
      if (iVar11 < *DAT_003be8e0) {
        *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar2[1] = iVar11 + 1;
      }
      else {
        *puVar5 = uVar15 & 0xfffffffb;
      }
      lVar6 = FUN_003872a8(puVar5 + 2);
      if (lVar6 == 0) {
        FUN_002530e8(puVar5 + 2,0);
      }
    }
    *(short *)uStack_90 = *(short *)uStack_90 + 1;
    psVar9 = (short *)puVar5[2];
    sVar1 = *psVar9;
    *psVar9 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar9,(ushort)psVar9[2] + 9);
    }
    puVar5[2] = (uint)(short *)uStack_90;
    sVar1 = *(short *)uStack_90;
    *(short *)uStack_90 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,(short *)uStack_90,(ushort)((short *)uStack_90)[2] + 9);
    }
    break;
  case 0xe:
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar7 = Pool_Alloc(DAT_0043dee0,0x10);
      puVar5 = (uint *)FUN_0024ad08(uVar7);
      psVar9 = (short *)param_1[2];
    }
    else {
      uVar15 = *DAT_003bfb10;
      puVar13 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar15 | 4;
      DAT_003bfb10 = puVar13;
      piVar2 = DAT_003be8e0;
      iVar11 = DAT_003be8e0[1];
      if (iVar11 < *DAT_003be8e0) {
        *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar2[1] = iVar11 + 1;
      }
      else {
        *puVar5 = uVar15 & 0xfffffffb;
      }
      lVar6 = FUN_003872a8(puVar5 + 2);
      if (lVar6 == 0) {
        FUN_002530e8(puVar5 + 2,0);
        psVar9 = (short *)param_1[2];
      }
      else {
        psVar9 = (short *)param_1[2];
      }
    }
    *psVar9 = *psVar9 + 1;
    psVar9 = (short *)puVar5[2];
    sVar1 = *psVar9;
    *psVar9 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar9,(ushort)psVar9[2] + 9);
    }
    uVar15 = param_1[2];
    goto LAB_00239ea0;
  default:
    puVar5 = (uint *)0x0;
    break;
  case 0x10:
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar7 = Pool_Alloc(DAT_0043dee0,0x10);
      puVar5 = (uint *)FUN_0024ad08(uVar7);
    }
    else {
      uVar15 = *DAT_003bfb10;
      puVar13 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar15 | 4;
      DAT_003bfb10 = puVar13;
      piVar2 = DAT_003be8e0;
      iVar11 = DAT_003be8e0[1];
      if (iVar11 < *DAT_003be8e0) {
        *(uint **)(iVar11 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar2[1] = iVar11 + 1;
      }
      else {
        *puVar5 = uVar15 & 0xfffffffb;
      }
      lVar6 = FUN_003872a8(puVar5 + 2);
      if (lVar6 == 0) {
        FUN_002530e8(puVar5 + 2,0);
      }
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,&DAT_003bfaf8);
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0021e0b8(param_1,&uStack_90);
    FUN_003872e0(&uStack_80,(int)(short *)uStack_90 + 8);
    FUN_00387398(puVar5 + 2,&uStack_80);
    FUN_00387328(&uStack_80,2);
    sVar1 = *(short *)uStack_90;
    *(short *)uStack_90 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,(short *)uStack_90,(ushort)((short *)uStack_90)[2] + 9);
    }
    break;
  case 0x15:
    uStack_80 = DAT_0043dee8;
    uStack_78 = DAT_0043def0;
    uStack_70 = DAT_0043def8;
    if (param_1 != (uint *)0x0) {
      do {
        FUN_00249f28(&uStack_80,param_1 + 3,&uStack_80);
        param_1 = (uint *)param_1[0x11];
      } while (param_1 != (uint *)0x0);
    }
    fVar16 = ((float)*(int *)(DAT_0043df68 + 0x54) - (float)uStack_70) * (float)uStack_80 -
             ((float)*(int *)(DAT_0043df68 + 0x58) - uStack_70._4_4_) * uStack_80._4_4_;
    goto LAB_0023a1fc;
  case 0x16:
    uStack_90 = DAT_0043dee8;
    uStack_88 = DAT_0043def0;
    uStack_80 = DAT_0043def8;
    for (; param_1 != (uint *)0x0; param_1 = (uint *)param_1[0x11]) {
      FUN_00249f28(&uStack_90,param_1 + 3,&uStack_90);
    }
    uStack_80._4_4_ = (float)((ulong)uStack_80 >> 0x20);
    uStack_88._4_4_ = (float)((ulong)uStack_88 >> 0x20);
    fVar16 = ((float)*(int *)(DAT_0043df68 + 0x54) - (float)uStack_80) * (float)uStack_88 +
             ((float)*(int *)(DAT_0043df68 + 0x58) - uStack_80._4_4_) * uStack_88._4_4_;
    goto LAB_0023a1fc;
  case 0x18:
    puVar5 = DAT_0043df20;
    break;
  case 0x19:
    puVar5 = DAT_0043df24;
    break;
  case 0x1a:
    puVar5 = DAT_0043df28;
    break;
  case 0x1b:
    puVar5 = DAT_0043df2c;
    break;
  case 0x1c:
    puVar5 = DAT_0043df30;
    break;
  case 0x1d:
    puVar5 = DAT_0043df34;
    break;
  case 100:
    puVar5 = DAT_003bee20;
    if (DAT_003bee20 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00234758;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee20 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee20[1] + 0xc))((int)DAT_003bee20 + (int)*(short *)(DAT_003bee20[1] + 8))
      ;
      puVar5 = DAT_003bee20;
    }
    break;
  case 0x65:
    puVar5 = DAT_003bee2c;
    if (DAT_003bee2c == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00234d30;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee2c = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee2c[1] + 0xc))((int)DAT_003bee2c + (int)*(short *)(DAT_003bee2c[1] + 8))
      ;
      puVar5 = DAT_003bee2c;
    }
    break;
  case 0x67:
    puVar5 = DAT_003bee1c;
    if (DAT_003bee1c == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00234738;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee1c = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee1c[1] + 0xc))((int)DAT_003bee1c + (int)*(short *)(DAT_003bee1c[1] + 8))
      ;
      puVar5 = DAT_003bee1c;
    }
    break;
  case 0x68:
    puVar5 = DAT_003bee18;
    if (DAT_003bee18 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)&LAB_00234718;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee18 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee18[1] + 0xc))((int)DAT_003bee18 + (int)*(short *)(DAT_003bee18[1] + 8))
      ;
      puVar5 = DAT_003bee18;
    }
    break;
  case 0x69:
    puVar5 = DAT_003bee24;
    if (DAT_003bee24 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00234a68;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee24 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee24[1] + 0xc))((int)DAT_003bee24 + (int)*(short *)(DAT_003bee24[1] + 8))
      ;
      puVar5 = DAT_003bee24;
    }
    break;
  case 0x6a:
    puVar5 = DAT_003bee58;
    if (DAT_003bee58 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00236390;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee58 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee58[1] + 0xc))((int)DAT_003bee58 + (int)*(short *)(DAT_003bee58[1] + 8))
      ;
      puVar5 = DAT_003bee58;
    }
    break;
  case 0x6b:
    puVar5 = DAT_003bee60;
    if (DAT_003bee60 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00236508;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee60 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee60[1] + 0xc))((int)DAT_003bee60 + (int)*(short *)(DAT_003bee60[1] + 8))
      ;
      puVar5 = DAT_003bee60;
    }
    break;
  case 0x6c:
    puVar5 = DAT_003bee68;
    if (DAT_003bee68 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00236618;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee68 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee68[1] + 0xc))((int)DAT_003bee68 + (int)*(short *)(DAT_003bee68[1] + 8))
      ;
      puVar5 = DAT_003bee68;
    }
    break;
  case 0x6d:
    puVar5 = DAT_003bee30;
    if (DAT_003bee30 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00234de0;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee30 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee30[1] + 0xc))((int)DAT_003bee30 + (int)*(short *)(DAT_003bee30[1] + 8))
      ;
      puVar5 = DAT_003bee30;
    }
    break;
  case 0x6e:
    puVar5 = DAT_003bee5c;
    if (DAT_003bee5c == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00236440;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee5c = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee5c[1] + 0xc))((int)DAT_003bee5c + (int)*(short *)(DAT_003bee5c[1] + 8))
      ;
      puVar5 = DAT_003bee5c;
    }
    break;
  case 0x6f:
    puVar5 = DAT_003bee70;
    if (DAT_003bee70 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_002368e8;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee70 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee70[1] + 0xc))((int)DAT_003bee70 + (int)*(short *)(DAT_003bee70[1] + 8))
      ;
      puVar5 = DAT_003bee70;
    }
    break;
  case 0x70:
    puVar5 = DAT_003bee6c;
    if (DAT_003bee6c == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00236668;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee6c = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee6c[1] + 0xc))((int)DAT_003bee6c + (int)*(short *)(DAT_003bee6c[1] + 8))
      ;
      puVar5 = DAT_003bee6c;
    }
    break;
  case 0x71:
    puVar5 = DAT_003bee64;
    if (DAT_003bee64 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_002365c8;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee64 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee64[1] + 0xc))((int)DAT_003bee64 + (int)*(short *)(DAT_003bee64[1] + 8))
      ;
      puVar5 = DAT_003bee64;
    }
    break;
  case 0x72:
    puVar5 = DAT_003bee38;
    if (DAT_003bee38 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00234ed0;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee38 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee38[1] + 0xc))((int)DAT_003bee38 + (int)*(short *)(DAT_003bee38[1] + 8))
      ;
      puVar5 = DAT_003bee38;
    }
    break;
  case 0x73:
    puVar5 = DAT_003bee3c;
    if (DAT_003bee3c == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00235260;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee3c = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee3c[1] + 0xc))((int)DAT_003bee3c + (int)*(short *)(DAT_003bee3c[1] + 8))
      ;
      puVar5 = DAT_003bee3c;
    }
    break;
  case 0x74:
    puVar5 = DAT_003bee54;
    if (DAT_003bee54 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_002361d0;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee54 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee54[1] + 0xc))((int)DAT_003bee54 + (int)*(short *)(DAT_003bee54[1] + 8))
      ;
      puVar5 = DAT_003bee54;
    }
    break;
  case 0x75:
    puVar5 = DAT_003bee48;
    if (DAT_003bee48 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_002357b0;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee48 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee48[1] + 0xc))((int)DAT_003bee48 + (int)*(short *)(DAT_003bee48[1] + 8))
      ;
      puVar5 = DAT_003bee48;
    }
    break;
  case 0x76:
    puVar5 = DAT_003bee50;
    if (DAT_003bee50 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00235da8;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee50 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee50[1] + 0xc))((int)DAT_003bee50 + (int)*(short *)(DAT_003bee50[1] + 8))
      ;
      puVar5 = DAT_003bee50;
    }
    break;
  case 0x77:
    puVar5 = DAT_003bee34;
    if (DAT_003bee34 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00234e58;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee34 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee34[1] + 0xc))((int)DAT_003bee34 + (int)*(short *)(DAT_003bee34[1] + 8))
      ;
      puVar5 = DAT_003bee34;
    }
    break;
  case 0x78:
    puVar5 = DAT_003bee40;
    if (DAT_003bee40 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00235368;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee40 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee40[1] + 0xc))((int)DAT_003bee40 + (int)*(short *)(DAT_003bee40[1] + 8))
      ;
      puVar5 = DAT_003bee40;
    }
    break;
  case 0x79:
    puVar5 = DAT_003bee28;
    if (DAT_003bee28 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00234c58;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee28 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee28[1] + 0xc))((int)DAT_003bee28 + (int)*(short *)(DAT_003bee28[1] + 8))
      ;
      puVar5 = DAT_003bee28;
    }
    break;
  case 0x7a:
    puVar5 = DAT_003bee44;
    if (DAT_003bee44 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)&LAB_002356a8;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee44 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee44[1] + 0xc))((int)DAT_003bee44 + (int)*(short *)(DAT_003bee44[1] + 8))
      ;
      puVar5 = DAT_003bee44;
    }
    break;
  case 0x7b:
    puVar5 = DAT_003bee78;
    if (DAT_003bee78 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_0023a588;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee78 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee78[1] + 0xc))((int)DAT_003bee78 + (int)*(short *)(DAT_003bee78[1] + 8))
      ;
      puVar5 = DAT_003bee78;
    }
    break;
  case 0x7c:
    puVar5 = DAT_003bee7c;
    if (DAT_003bee7c == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_0023a9e8;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee7c = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee7c[1] + 0xc))((int)DAT_003bee7c + (int)*(short *)(DAT_003bee7c[1] + 8))
      ;
      puVar5 = DAT_003bee7c;
    }
    break;
  case 0x7d:
    puVar5 = DAT_003bee74;
    if (DAT_003bee74 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_0023a270;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee74 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee74[1] + 0xc))((int)DAT_003bee74 + (int)*(short *)(DAT_003bee74[1] + 8))
      ;
      puVar5 = DAT_003bee74;
    }
    break;
  case 0x7e:
    puVar5 = DAT_003bee4c;
    if (DAT_003bee4c == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_00235bc0;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee4c = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee4c[1] + 0xc))((int)DAT_003bee4c + (int)*(short *)(DAT_003bee4c[1] + 8))
      ;
      puVar5 = DAT_003bee4c;
    }
    break;
  case 0x7f:
    puVar5 = DAT_003bee80;
    if (DAT_003bee80 == (uint *)0x0) {
      uVar7 = FUN_0024fa38(DAT_0043dee4,0x24);
      FUN_00386ec8(uVar7,9);
      puVar13 = (uint *)uVar7;
      puVar13[1] = (uint)&DAT_003e1f88;
      Pow2Container_ctor(puVar13 + 2,8);
      *(undefined1 *)(puVar13 + 7) = 0;
      puVar13[1] = (uint)&DAT_003e1df0;
      puVar13[8] = (uint)FUN_0023b018;
      puVar13[7] = puVar13[7] & 0xfffffcff;
      DAT_003bee80 = puVar13;
      *puVar13 = *puVar13 & 0xff03ffff | 0x40000;
      (**(code **)(DAT_003bee80[1] + 0xc))((int)DAT_003bee80 + (int)*(short *)(DAT_003bee80[1] + 8))
      ;
      puVar5 = DAT_003bee80;
    }
  }
  return puVar5;
}


// ==== FUN_0023a270 @ 0023a270 ====

undefined4 FUN_0023a270(int param_1,long param_2)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  short *psVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  float fVar11;
  
  if (param_2 < 4) {
    puVar2 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    uVar8 = (int)*puVar2 >> 4 & 1;
    if (uVar8 != 0) {
      uVar7 = 0;
      if (*puVar2 >> 0x19 == 0x24) {
        uVar7 = uVar8;
      }
      if (uVar7 != 0) {
        iVar3 = *(int *)(param_1 + 0x48);
        iVar9 = *(int *)(iVar3 + 0x68);
        if (iVar9 == 0) {
          uVar5 = Pool_Alloc(DAT_0043dee0,0x20);
          puVar10 = puVar2 + 8;
          if (puVar2 == (uint *)0x0) {
            puVar10 = (uint *)0x0;
          }
          FUN_003872e0(uVar5,0x40de10);
          iVar9 = (int)uVar5;
          *(undefined4 *)(iVar9 + 0xc) = 3;
          *(undefined4 *)(iVar9 + 0x1c) = 0xffffffff;
          *(undefined4 *)(iVar9 + 8) = 0xffffffff;
          *(undefined4 *)(iVar9 + 0x14) = 0xffffffff;
          *(undefined4 *)(iVar9 + 0x18) = 0xffffffff;
          *(undefined4 *)(iVar9 + 4) = 0xbf800000;
          *(undefined4 *)(iVar9 + 0x10) = 2;
          FUN_00386030(uVar5,puVar10);
          *(int *)(iVar3 + 0x68) = iVar9;
          uVar8 = *(uint *)(iVar9 + 0x10) | puVar2[0xc];
        }
        else {
          puVar10 = (uint *)0x0;
          if (puVar2 != (uint *)0x0) {
            puVar10 = puVar2 + 8;
          }
          uVar8 = *(uint *)(iVar9 + 0x10) | puVar2[0xc];
          if (puVar10[3] != 3) {
            *(uint *)(iVar9 + 0xc) = puVar10[3];
          }
          if (puVar10[2] != 0xffffffff) {
            *(uint *)(iVar9 + 8) = puVar10[2];
          }
          lVar6 = FUN_00387480(puVar10,0x40de10);
          if (lVar6 != 0) {
            FUN_00387398(iVar9,puVar10);
          }
          if ((float)puVar10[1] != -1.0) {
            *(uint *)(iVar9 + 4) = puVar10[1];
          }
          if (puVar10[4] != 2) {
            *(uint *)(iVar9 + 0x10) = puVar10[4];
          }
          if (puVar10[5] != 0xffffffff) {
            *(uint *)(iVar9 + 0x14) = puVar10[5];
          }
          if (puVar10[6] != 0xffffffff) {
            *(uint *)(iVar9 + 0x18) = puVar10[6];
          }
          if (puVar10[7] != 0xffffffff) {
            *(uint *)(iVar9 + 0x1c) = puVar10[7];
          }
        }
        *(uint *)(*(int *)(iVar3 + 0x68) + 0x10) = uVar8;
        psVar4 = (short *)puVar2[8];
        if (psVar4 == &DAT_003bfaf8) {
          uVar8 = puVar2[10];
        }
        else {
          puVar10 = *(uint **)(iVar3 + 0x68);
          *psVar4 = *psVar4 + 1;
          psVar4 = (short *)*puVar10;
          sVar1 = *psVar4;
          *psVar4 = sVar1 + -1;
          if ((short)(sVar1 + -1) == 0) {
            Pool_Free(DAT_0043dee0,psVar4,(ushort)psVar4[2] + 9);
          }
          *puVar10 = puVar2[8];
          uVar8 = puVar2[10];
        }
        if (uVar8 != 0xffffffff) {
          *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) & 0xfffffffe | 0x10400;
        }
        fVar11 = (float)puVar2[9];
        if (fVar11 == -1.0) {
          uVar8 = puVar2[0xb];
        }
        else {
          *(float *)(iVar3 + 0x60) = fVar11;
          if ((int)fVar11 < 1) {
            *(undefined4 *)(iVar3 + 0x60) = 0x3f800000;
          }
          *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) & 0xfffffffe | 0x10004;
          uVar8 = puVar2[0xb];
        }
        if (uVar8 != 3) {
          *(uint *)(iVar3 + 0x3c) = uVar8;
          *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) & 0xfffffffe | 0x20004;
        }
        if (puVar2[10] != 0xffffffff) {
          *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) | 0x400;
        }
      }
    }
  }
  return DAT_0043df40;
}


// ==== FUN_0023a588 @ 0023a588 ====

/* Strings referenciadas:
     "center"
     "right" */

int FUN_0023a588(int param_1,long param_2)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  short *apsStack_c0 [4];
  
  if (0 < param_2) {
    return DAT_0043df40;
  }
  iVar6 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar6 + 0x68) == 0) {
    uVar7 = Pool_Alloc(DAT_0043dee0,0x20);
    iVar5 = DAT_0043df40;
    FUN_003872c0(uVar7);
    iVar10 = (int)uVar7;
    *(undefined4 *)(iVar10 + 4) = 0xbf800000;
    *(undefined4 *)(iVar10 + 8) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x1c) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x10) = 2;
    *(undefined4 *)(iVar10 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x18) = 0xffffffff;
    lVar8 = FUN_003871c0(iVar5);
    if (lVar8 == 0) {
      FUN_0024c6d0(iVar5,uVar7);
    }
    lVar8 = FUN_003871c0(iVar5);
    if (lVar8 == 0) {
      FUN_003872c0(apsStack_c0);
      FUN_0024c6d0(iVar5,apsStack_c0);
      lVar8 = FUN_00387458(apsStack_c0,0x3fcd90);
      if (lVar8 == 0) {
        lVar8 = FUN_00387458(apsStack_c0,0x3fcd98);
        if (lVar8 == 0) {
          lVar8 = FUN_00387458(apsStack_c0,0x3fcda0);
          if (lVar8 == 0) {
            lVar8 = FUN_00387458(apsStack_c0,0x3fcda8);
            uVar4 = 1;
            if (lVar8 == 0) {
              uVar4 = 3;
            }
            *(undefined4 *)(iVar10 + 0xc) = uVar4;
          }
          else {
            *(undefined4 *)(iVar10 + 0xc) = 2;
          }
        }
        else {
          *(undefined4 *)(iVar10 + 0xc) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar10 + 0xc) = 0;
      }
      FUN_00387328(apsStack_c0,2);
      *(int *)(iVar6 + 0x68) = iVar10;
    }
    else {
      *(undefined4 *)(iVar10 + 0xc) = 3;
      *(int *)(iVar6 + 0x68) = iVar10;
    }
  }
  iVar5 = FUN_0024fa38(DAT_0043dee4,0x40);
  puVar9 = (undefined4 *)(iVar5 + 0x20);
  iVar6 = *(int *)(*(int *)(param_1 + 0x48) + 0x68);
  FUN_00386ec8(iVar5,0x24);
  *(undefined **)(iVar5 + 4) = &DAT_003e1f88;
  Pow2Container_ctor(iVar5 + 8,8);
  *(undefined1 *)(iVar5 + 0x1c) = 0;
  *(undefined **)(iVar5 + 4) = &DAT_003e1e78;
  *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffcff;
  FUN_003872e0(puVar9,0x40de10);
  *(undefined4 *)(iVar5 + 0x24) = 0xbf800000;
  *(undefined4 *)(iVar5 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x2c) = 3;
  *(undefined4 *)(iVar5 + 0x30) = 2;
  *(undefined4 *)(iVar5 + 0x34) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x38) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x3c) = 0xffffffff;
  FUN_00386030(puVar9,iVar6);
  *(undefined **)(iVar5 + 4) = &DAT_003e18f8;
  if (*(int *)(iVar6 + 0xc) != 3) {
    *(int *)(iVar5 + 0x2c) = *(int *)(iVar6 + 0xc);
  }
  if (*(int *)(iVar6 + 8) != -1) {
    *(int *)(iVar5 + 0x28) = *(int *)(iVar6 + 8);
  }
  lVar8 = FUN_00387480(iVar6,0x40de10);
  if (lVar8 != 0) {
    FUN_00387398(puVar9,iVar6);
  }
  if (*(float *)(iVar6 + 4) != -1.0) {
    *(float *)(iVar5 + 0x24) = *(float *)(iVar6 + 4);
  }
  if (*(int *)(iVar6 + 0x10) != 2) {
    *(int *)(iVar5 + 0x30) = *(int *)(iVar6 + 0x10);
  }
  if (*(int *)(iVar6 + 0x14) != -1) {
    *(int *)(iVar5 + 0x34) = *(int *)(iVar6 + 0x14);
  }
  if (*(int *)(iVar6 + 0x18) != -1) {
    *(int *)(iVar5 + 0x38) = *(int *)(iVar6 + 0x18);
  }
  if (*(int *)(iVar6 + 0x1c) != -1) {
    *(int *)(iVar5 + 0x3c) = *(int *)(iVar6 + 0x1c);
  }
  iVar6 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar5 + 0x28) == -1) {
    *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar6 + 0x24);
    iVar6 = *(int *)(param_1 + 0x48);
  }
  iVar10 = *(int *)(*(int *)(iVar6 + 8) + 4);
  iVar6 = *(int *)(*(int *)(iVar6 + 8) + 0x18);
  if (((iVar6 < *(int *)(iVar10 + 0x14)) && (iVar6 != -1)) &&
     (piVar2 = *(int **)(iVar6 * 4 + *(int *)(iVar10 + 0x18)), *piVar2 == 3)) {
    String_ctor_cstr(apsStack_c0,piVar2[2]);
    *apsStack_c0[0] = *apsStack_c0[0] + 1;
    psVar3 = *(short **)(iVar5 + 0x20);
    sVar1 = *psVar3;
    *psVar3 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
    }
    *puVar9 = apsStack_c0[0];
    sVar1 = *apsStack_c0[0];
    *apsStack_c0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
      iVar6 = *(int *)(param_1 + 0x48);
      goto LAB_0023a998;
    }
  }
  else {
    String_ctor_cstr(apsStack_c0,0x40de10);
    *apsStack_c0[0] = *apsStack_c0[0] + 1;
    psVar3 = *(short **)(iVar5 + 0x20);
    sVar1 = *psVar3;
    *psVar3 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
    }
    *(short **)(iVar5 + 0x20) = apsStack_c0[0];
    sVar1 = *apsStack_c0[0];
    *apsStack_c0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
    }
  }
  iVar6 = *(int *)(param_1 + 0x48);
LAB_0023a998:
  *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar6 + 0x3c);
  *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x60);
  return iVar5;
}


// ==== FUN_0023a9e8 @ 0023a9e8 ====

/* Strings referenciadas:
     "center"
     "right" */

int FUN_0023a9e8(int param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  short *apsStack_b0 [4];
  
  if (2 < param_2) {
    return DAT_0043df40;
  }
  iVar7 = FUN_0024fa38(DAT_0043dee4,0x40);
  puVar8 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    puVar8 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar8,5);
    *(undefined1 *)(puVar8 + 2) = 1;
    puVar8[1] = (uint)&DAT_003e2120;
  }
  else {
    uVar2 = *DAT_003bfae4;
    puVar6 = (uint *)DAT_003bfae4[2];
    *DAT_003bfae4 = uVar2 | 4;
    DAT_003bfae4 = puVar6;
    piVar4 = DAT_003be8e0;
    iVar10 = DAT_003be8e0[1];
    if (iVar10 < *DAT_003be8e0) {
      *(uint **)(iVar10 * 4 + DAT_003be8e0[2]) = puVar8;
      piVar4[1] = iVar10 + 1;
    }
    else {
      *puVar8 = uVar2 & 0xfffffffb;
    }
    *(undefined1 *)(puVar8 + 2) = 1;
  }
  iVar10 = DAT_0043df40;
  FUN_00386ec8(iVar7,0x24);
  *(undefined **)(iVar7 + 4) = &DAT_003e1f88;
  Pow2Container_ctor(iVar7 + 8,8);
  *(undefined1 *)(iVar7 + 0x1c) = 0;
  *(undefined **)(iVar7 + 4) = &DAT_003e1e78;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffcff;
  FUN_003872c0(iVar7 + 0x20);
  *(undefined4 *)(iVar7 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(iVar7 + 0x34) = 0;
  *(undefined4 *)(iVar7 + 0x38) = 0;
  *(undefined4 *)(iVar7 + 0x3c) = 0;
  *(undefined4 *)(iVar7 + 0x30) = 0x1110002;
  lVar11 = FUN_003871c0(iVar10);
  if (lVar11 == 0) {
    FUN_0024c6d0(iVar10,iVar7 + 0x20);
  }
  lVar11 = FUN_003871c0(puVar8);
  if (lVar11 == 0) {
    FUN_003872c0(apsStack_b0);
    FUN_0024c6d0(puVar8,apsStack_b0);
    lVar11 = FUN_00387458(apsStack_b0,0x3fcd90);
    if (lVar11 == 0) {
      lVar11 = FUN_00387458(apsStack_b0,0x3fcd98);
      if (lVar11 == 0) {
        lVar11 = FUN_00387458(apsStack_b0,0x3fcda0);
        uVar9 = 2;
        if (lVar11 == 0) {
          lVar11 = FUN_00387458(apsStack_b0,0x3fcda8);
          uVar9 = 1;
          if (lVar11 == 0) {
            uVar9 = 3;
          }
        }
        *(undefined4 *)(iVar7 + 0x2c) = uVar9;
      }
      else {
        *(undefined4 *)(iVar7 + 0x2c) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar7 + 0x2c) = 0;
    }
    FUN_00387328(apsStack_b0,2);
  }
  else {
    *(undefined4 *)(iVar7 + 0x2c) = 3;
  }
  *(undefined **)(iVar7 + 4) = &DAT_003e18f8;
  iVar10 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar10 + 0x68) == 0) {
    uVar12 = Pool_Alloc(DAT_0043dee0,0x20);
    iVar3 = DAT_0043df40;
    FUN_003872c0(uVar12);
    iVar13 = (int)uVar12;
    *(undefined4 *)(iVar13 + 4) = 0xbf800000;
    *(undefined4 *)(iVar13 + 8) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x1c) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x10) = 2;
    *(undefined4 *)(iVar13 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x18) = 0xffffffff;
    lVar11 = FUN_003871c0(iVar3);
    if (lVar11 == 0) {
      FUN_0024c6d0(iVar3,uVar12);
    }
    lVar11 = FUN_003871c0(iVar3);
    if (lVar11 == 0) {
      FUN_003872c0(apsStack_b0);
      FUN_0024c6d0(iVar3,apsStack_b0);
      lVar11 = FUN_00387458(apsStack_b0,0x3fcd90);
      if (lVar11 == 0) {
        lVar11 = FUN_00387458(apsStack_b0,0x3fcd98);
        if (lVar11 == 0) {
          lVar11 = FUN_00387458(apsStack_b0,0x3fcda0);
          if (lVar11 == 0) {
            lVar11 = FUN_00387458(apsStack_b0,0x3fcda8);
            uVar9 = 1;
            if (lVar11 == 0) {
              uVar9 = 3;
            }
            *(undefined4 *)(iVar13 + 0xc) = uVar9;
          }
          else {
            *(undefined4 *)(iVar13 + 0xc) = 2;
          }
        }
        else {
          *(undefined4 *)(iVar13 + 0xc) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar13 + 0xc) = 0;
      }
      FUN_00387328(apsStack_b0,2);
      *(int *)(iVar10 + 0x68) = iVar13;
    }
    else {
      *(undefined4 *)(iVar13 + 0xc) = 3;
      *(int *)(iVar10 + 0x68) = iVar13;
    }
    iVar10 = *(int *)(param_1 + 0x48);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x48);
  }
  iVar10 = *(int *)(iVar10 + 0x68);
  if (*(int *)(iVar10 + 0xc) != 3) {
    *(int *)(iVar7 + 0x2c) = *(int *)(iVar10 + 0xc);
  }
  if (*(int *)(iVar10 + 8) != -1) {
    *(int *)(iVar7 + 0x28) = *(int *)(iVar10 + 8);
  }
  lVar11 = FUN_00387480(iVar10,0x40de10);
  if (lVar11 != 0) {
    FUN_00387398(iVar7 + 0x20,iVar10);
  }
  if (*(float *)(iVar10 + 4) != -1.0) {
    *(float *)(iVar7 + 0x24) = *(float *)(iVar10 + 4);
  }
  if (*(int *)(iVar10 + 0x10) != 2) {
    *(int *)(iVar7 + 0x30) = *(int *)(iVar10 + 0x10);
  }
  if (*(int *)(iVar10 + 0x14) != -1) {
    *(int *)(iVar7 + 0x34) = *(int *)(iVar10 + 0x14);
  }
  if (*(int *)(iVar10 + 0x18) != -1) {
    *(int *)(iVar7 + 0x38) = *(int *)(iVar10 + 0x18);
  }
  if (*(int *)(iVar10 + 0x1c) != -1) {
    *(int *)(iVar7 + 0x3c) = *(int *)(iVar10 + 0x1c);
  }
  uVar2 = *(uint *)(iVar7 + 0x30);
  if ((uVar2 & 0x100000) == 0) {
    *(uint *)(iVar7 + 0x30) = uVar2 | 0x100000;
    uVar2 = *(uint *)(iVar7 + 0x30);
  }
  if ((uVar2 & 0x1000000) == 0) {
    *(uint *)(iVar7 + 0x30) = uVar2 | 0x1000000;
    uVar2 = *(uint *)(iVar7 + 0x30);
  }
  else {
    uVar2 = *(uint *)(iVar7 + 0x30);
  }
  if ((uVar2 & 0x10000) == 0) {
    *(uint *)(iVar7 + 0x30) = uVar2 | 0x10000;
    iVar10 = *(int *)(iVar7 + 0x28);
  }
  else {
    iVar10 = *(int *)(iVar7 + 0x28);
  }
  if (iVar10 == -1) {
    *(uint *)(iVar7 + 0x28) = *(uint *)(*(int *)(param_1 + 0x48) + 0x24) & 0xffffff;
    iVar10 = *(int *)(param_1 + 0x48);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x48);
  }
  iVar3 = *(int *)(*(int *)(iVar10 + 8) + 4);
  iVar10 = *(int *)(*(int *)(iVar10 + 8) + 0x18);
  if (((iVar10 < *(int *)(iVar3 + 0x14)) && (iVar10 != -1)) &&
     (piVar4 = *(int **)(iVar10 * 4 + *(int *)(iVar3 + 0x18)), *piVar4 == 3)) {
    String_ctor_cstr(apsStack_b0,piVar4[2]);
    *apsStack_b0[0] = *apsStack_b0[0] + 1;
    psVar5 = *(short **)(iVar7 + 0x20);
    sVar1 = *psVar5;
    *psVar5 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar5,(ushort)psVar5[2] + 9);
    }
    *(short **)(iVar7 + 0x20) = apsStack_b0[0];
    sVar1 = *apsStack_b0[0];
    *apsStack_b0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
      iVar10 = *(int *)(param_1 + 0x48);
      goto LAB_0023afd0;
    }
  }
  else {
    String_ctor_cstr(apsStack_b0,0x40de10);
    *apsStack_b0[0] = *apsStack_b0[0] + 1;
    psVar5 = *(short **)(iVar7 + 0x20);
    sVar1 = *psVar5;
    *psVar5 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,psVar5,(ushort)psVar5[2] + 9);
    }
    *(short **)(iVar7 + 0x20) = apsStack_b0[0];
    sVar1 = *apsStack_b0[0];
    *apsStack_b0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
    }
  }
  iVar10 = *(int *)(param_1 + 0x48);
LAB_0023afd0:
  *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar10 + 0x3c);
  *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x60);
  return iVar7;
}


// ==== FUN_0023b018 @ 0023b018 ====

undefined4 FUN_0023b018(int param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  short *apsStack_b0 [4];
  short *apsStack_a0 [4];
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  
  uVar7 = DAT_0043df40;
  if (param_2 != 0) {
    iVar8 = *(int *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    String_ctor_cstr(apsStack_b0,0x40de38);
    iVar9 = iVar8 + 8;
    String_ctor_cstr(apsStack_a0,0x40de40);
    iVar5 = FUN_00248c78(iVar9,apsStack_b0);
    iVar9 = FUN_00248c78(iVar9,apsStack_a0);
    uStack_80 = *(uint *)(iVar5 + 8);
    uStack_7c = *(uint *)(iVar9 + 8);
    if (param_1 != 0) {
      do {
        FUN_00249f28(param_1 + 0xc,auStack_90,auStack_90);
        param_1 = *(int *)(param_1 + 0x44);
      } while (param_1 != 0);
    }
    uVar2 = uStack_80;
    puVar6 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,6);
      puVar6[2] = uVar2;
      puVar6[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar2 = *DAT_003bfae8;
      puVar4 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar2 | 4;
      DAT_003bfae8 = puVar4;
      piVar3 = DAT_003be8e0;
      iVar5 = DAT_003be8e0[1];
      if (iVar5 < *DAT_003be8e0) {
        *(uint **)(iVar5 * 4 + DAT_003be8e0[2]) = puVar6;
        piVar3[1] = iVar5 + 1;
      }
      else {
        *puVar6 = uVar2 & 0xfffffffb;
      }
      puVar6[2] = uStack_80;
    }
    iVar8 = iVar8 + 8;
    FUN_002488d0(iVar8,apsStack_b0,puVar6);
    uVar2 = uStack_7c;
    puVar6 = DAT_003bfae8;
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar6 = (uint *)Pool_Alloc(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,6);
      puVar6[2] = uVar2;
      puVar6[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar2 = *DAT_003bfae8;
      puVar4 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar2 | 4;
      DAT_003bfae8 = puVar4;
      piVar3 = DAT_003be8e0;
      iVar5 = DAT_003be8e0[1];
      if (iVar5 < *DAT_003be8e0) {
        *(uint **)(iVar5 * 4 + DAT_003be8e0[2]) = puVar6;
        piVar3[1] = iVar5 + 1;
      }
      else {
        *puVar6 = uVar2 & 0xfffffffb;
      }
      puVar6[2] = uStack_7c;
    }
    FUN_002488d0(iVar8,apsStack_a0,puVar6);
    uVar7 = DAT_0043df40;
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    }
    sVar1 = *apsStack_b0[0];
    *apsStack_b0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      Pool_Free(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
    }
  }
  return uVar7;
}


// ==== FUN_0023b2d0 @ 0023b2d0 ====

void FUN_0023b2d0(undefined8 param_1,ulong param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined **)(iVar4 + 4) = &DAT_003e2340;
  FUN_0023b528(param_1,0);
  if ((*(uint *)(iVar4 + 0x58) >> 0x12 & 3) == 1) {
    iVar2 = *(int *)(iVar4 + 0x5c);
  }
  else {
    FUN_0023f020(param_1);
    iVar2 = *(int *)(iVar4 + 0x5c);
  }
  if (iVar2 != 0) {
    Pool_Free(DAT_0043dee0,iVar2,4);
  }
  psVar3 = *(short **)(iVar4 + 8);
  sVar1 = *psVar3;
  *psVar3 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar3,(ushort)psVar3[2] + 9);
  }
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x60);
  }
  return;
}


// ==== FUN_0023b3a0 @ 0023b3a0 ====

void FUN_0023b3a0(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  
  FUN_00244b90(DAT_0043df80,param_1);
  if (DAT_0043dbc4 == '\0') {
    FUN_0023b528(param_1,1);
  }
  else {
    FUN_0023b528(param_1,0);
  }
  FUN_00232c48(*(undefined4 *)(DAT_0043df68 + 0x80),param_1);
  puVar2 = (uint *)param_1;
  if ((*puVar2 >> 6 & 0xfff) < 2) {
    uVar1 = puVar2[1];
  }
  else {
    FUN_0023f020(param_1);
    if ((puVar2[0x16] >> 0x12 & 3) == 0) {
      *puVar2 = *puVar2 & 0xffffffef;
      uVar1 = puVar2[1];
    }
    else {
      uVar1 = puVar2[1];
    }
  }
  (**(code **)(uVar1 + 0x14))((int)puVar2 + (int)*(short *)(uVar1 + 0x10));
  return;
}


