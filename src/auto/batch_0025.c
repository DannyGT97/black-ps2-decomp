// ==== FUN_0023b468 @ 0023b468 ====

void FUN_0023b468(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 != 0) && (iVar1 != -0x45520ff3)) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8));
  }
  return;
}


// ==== FUN_0023b4b0 @ 0023b4b0 ====

void FUN_0023b4b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else if (iVar1 == -0x45520ff3) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x1c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x18));
    iVar1 = *(int *)(param_1 + 0x44);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


// ==== FUN_0023b528 @ 0023b528 ====

void FUN_0023b528(uint *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  
  piVar6 = DAT_0043df68;
  if ((param_1[0x16] >> 0x12 & 3) == 1) {
    return;
  }
  if (((int)*param_1 >> 4 & 1U) != 1) {
    return;
  }
  if ((short)DAT_0043df68[4] != 0) {
    uVar7 = (uint)*(ushort *)((int)DAT_0043df68 + 0x12);
    iVar13 = 0;
    if (uVar7 != 0) {
      puVar11 = (undefined4 *)DAT_0043df68[5];
      bVar5 = uVar7 != 0;
      if ((uint *)*puVar11 == param_1) {
LAB_0023b5dc:
        if (bVar5) {
          piVar1 = DAT_0043df68 + 5;
          *(short *)(DAT_0043df68 + 4) = (short)DAT_0043df68[4] + -1;
          iVar3 = *(int *)(iVar13 * 4 + *piVar1);
          iVar4 = *(int *)(iVar3 + 4);
          (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
          *(undefined4 *)(iVar13 * 4 + piVar6[5]) = 0;
        }
      }
      else {
        for (iVar13 = 1; puVar11 = puVar11 + 1, iVar13 < (int)uVar7; iVar13 = iVar13 + 1) {
          if ((uint *)*puVar11 == param_1) {
            bVar5 = iVar13 < (int)uVar7;
            goto LAB_0023b5dc;
          }
        }
      }
    }
  }
  if ((uint *)DAT_0043df68[0x12] == param_1) {
    DAT_0043df68[0x12] = DAT_0043df40;
    puVar8 = (uint *)DAT_0043df68[0x13];
  }
  else {
    puVar8 = (uint *)DAT_0043df68[0x13];
  }
  if (puVar8 == param_1) {
    DAT_0043df68[0x13] = DAT_0043df40;
  }
  piVar6 = DAT_0043df68;
  if ((short)DAT_0043df68[2] != 0) {
    uVar7 = (uint)*(ushort *)((int)DAT_0043df68 + 10);
    iVar13 = 0;
    if (uVar7 != 0) {
      puVar11 = (undefined4 *)DAT_0043df68[3];
      bVar5 = uVar7 != 0;
      if ((uint *)*puVar11 == param_1) {
LAB_0023b6ac:
        if (bVar5) {
          piVar1 = DAT_0043df68 + 3;
          *(short *)(DAT_0043df68 + 2) = (short)DAT_0043df68[2] + -1;
          iVar3 = *(int *)(iVar13 * 4 + *piVar1);
          iVar4 = *(int *)(iVar3 + 4);
          (**(code **)(iVar4 + 0x14))(iVar3 + *(short *)(iVar4 + 0x10));
          *(undefined4 *)(iVar13 * 4 + piVar6[3]) = 0;
        }
      }
      else {
        for (iVar13 = 1; puVar11 = puVar11 + 1, iVar13 < (int)uVar7; iVar13 = iVar13 + 1) {
          if ((uint *)*puVar11 == param_1) {
            bVar5 = iVar13 < (int)uVar7;
            goto LAB_0023b6ac;
          }
        }
      }
    }
  }
  iVar13 = 0;
  if (0 < DAT_0043df68[1]) {
    do {
      if (*(uint **)(iVar13 * 4 + *DAT_0043df68) == param_1) {
        (**(code **)(param_1[1] + 0x14))((int)param_1 + (int)*(short *)(param_1[1] + 0x10));
        *(undefined4 *)(iVar13 * 4 + *DAT_0043df68) =
             *(undefined4 *)(DAT_0043df68[1] * 4 + *DAT_0043df68 + -4);
        DAT_0043df68[1] = DAT_0043df68[1] + -1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < DAT_0043df68[1]);
  }
  lVar9 = FUN_00387080(param_1);
  bVar5 = false;
  if (lVar9 == 0x12) {
    lVar9 = FUN_003871c0(param_1);
    bVar5 = lVar9 == 0;
  }
  if (bVar5) {
    FUN_00231fa0(DAT_0043df68,param_1);
  }
  if (param_1[0x12] == 0) goto LAB_0023bad0;
  if (param_2 == 1) {
    lVar9 = FUN_00387080(param_1);
    bVar5 = false;
    if (lVar9 == 0xd) {
      lVar9 = FUN_003871c0(param_1);
      bVar5 = lVar9 == 0;
    }
    if (bVar5) {
      FUN_0023de70(param_1,4,0,0);
      lVar9 = FUN_0024ee48(param_1,0x43ddec,0);
      if (lVar9 != 0) {
        uVar7 = (int)*(uint *)lVar9 >> 4 & 1;
        if (uVar7 != 0) {
          uVar12 = 0;
          if ((*(uint *)lVar9 >> 0x19) - 0x2b < 3) {
            uVar12 = uVar7;
          }
          if (uVar12 != 0) {
            FUN_0021ea58(0x43db68,param_1,lVar9,0);
            if (0 < DAT_0043db68) {
              iVar13 = *(int *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
              iVar3 = *(int *)(iVar13 + 4);
              (**(code **)(iVar3 + 0x14))(iVar13 + *(short *)(iVar3 + 0x10));
              DAT_0043db68 = DAT_0043db68 + -1;
            }
          }
        }
      }
    }
  }
  if (DAT_0043dbc4 == '\0') {
    if ((short)param_1[0x16] == 0) {
      uVar7 = *param_1;
    }
    else {
      lVar9 = FUN_00387080(param_1);
      bVar5 = false;
      if (lVar9 == 0x12) {
        lVar9 = FUN_003871c0(param_1);
        bVar5 = lVar9 == 0;
      }
      if (bVar5) {
        puVar8 = (uint *)FUN_00218930(0);
        if (param_1 != puVar8) {
          if (DAT_003be8e4 == (int *)0x0) {
            uVar7 = param_1[0x16];
          }
          else {
            if (DAT_003be8e4[1] < *DAT_003be8e4) {
              FUN_00241128(param_1[0x12] + 0x24,1);
              uVar10 = (**(code **)(param_1[1] + 0x24))
                                 ((int)param_1 + (int)*(short *)(param_1[1] + 0x20));
              FUN_00248d98(uVar10);
              if (*(int *)(DAT_003be8e0 + 4) == 0) {
                sVar2 = (short)param_1[0x16];
              }
              else {
                FUN_00252b10();
                sVar2 = (short)param_1[0x16];
              }
              if (sVar2 != 0) {
                param_1[0x16] = param_1[0x16] & 0xfffeffff;
                (**(code **)(param_1[1] + 0x3c))
                          ((int)param_1 + (int)*(short *)(param_1[1] + 0x38),0);
                uVar7 = *param_1;
                *param_1 = uVar7 | 4;
                piVar6 = DAT_003be8e4;
                iVar13 = DAT_003be8e4[1];
                if (iVar13 < *DAT_003be8e4) {
                  *(uint **)(iVar13 * 4 + DAT_003be8e4[2]) = param_1;
                  piVar6[1] = iVar13 + 1;
                }
                else {
                  *param_1 = uVar7 & 0xfffffffb;
                }
                param_1[0x16] = param_1[0x16] & 0xfff3ffff | 0x40000;
                if (cGpffff8623 != '\0') {
                  FUN_00242150(param_1);
                }
                FUN_0021ad88();
                return;
              }
              goto LAB_0023ba68;
            }
            uVar7 = param_1[0x16];
          }
          param_1[0x16] = uVar7 & 0xfff3ffff | 0x80000;
          if (cGpffff8623 == '\0') {
            uVar7 = *param_1;
            goto LAB_0023ba6c;
          }
          FUN_00242150(param_1);
        }
LAB_0023ba68:
        uVar7 = *param_1;
      }
      else {
        uVar7 = *param_1;
      }
    }
  }
  else {
    uVar7 = *param_1;
  }
LAB_0023ba6c:
  *param_1 = uVar7 & 0xff03ffff;
  iVar13 = *(int *)(param_1[0x12] + 0x14);
  (**(code **)(iVar13 + 0xc))(param_1[0x12] + (int)*(short *)(iVar13 + 8));
  iVar13 = *(int *)(param_1[0x12] + 0x14);
  (**(code **)(iVar13 + 0x1c))(param_1[0x12] + (int)*(short *)(iVar13 + 0x18));
  uVar7 = param_1[0x12];
  if (uVar7 != 0) {
    (**(code **)(*(int *)(uVar7 + 0x14) + 0x14))
              (uVar7 + (int)*(short *)(*(int *)(uVar7 + 0x14) + 0x10),3);
  }
  param_1[0x12] = 0;
LAB_0023bad0:
  param_1[0x16] = param_1[0x16] & 0xfffeffff;
  (**(code **)(param_1[1] + 0x3c))((int)param_1 + (int)*(short *)(param_1[1] + 0x38),0);
  return;
}


// ==== FUN_0023bb28 @ 0023bb28 ====

/* Strings referenciadas:
     "Parent" */

void FUN_0023bb28(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_0023bc28();
  iVar1 = *(int *)((int)param_1 + 0x44);
  if (iVar1 != 0) {
    (*DAT_003bfab0)(param_1,iVar1,0x3fddd0);
  }
  if (lVar4 != 0) {
    FUN_00249958(lVar4,param_1);
  }
  lVar4 = FUN_00387080(param_1);
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
    if (!bVar2) goto LAB_0023bbe8;
  }
  bVar3 = true;
LAB_0023bbe8:
  if ((bVar3) && (iVar1 = *(int *)((int)param_1 + 0x48), iVar1 != 0)) {
    uVar5 = FUN_00241268(iVar1 + 0x24);
    FUN_0023ecc0(uVar5,param_1);
  }
  return;
}


// ==== FUN_0023bc28 @ 0023bc28 ====

undefined4 FUN_0023bc28(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00387080();
  bVar2 = false;
  if (lVar4 == 0x13) {
    lVar4 = FUN_003871c0(param_1);
    bVar2 = lVar4 == 0;
  }
  uVar3 = 0;
  if (((!bVar2) && (iVar1 = *(int *)((int)param_1 + 0x48), iVar1 != 0)) &&
     (uVar3 = 0, iVar1 != -0x45520ff3)) {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar3;
}


// ==== FUN_0023bca0 @ 0023bca0 ====

void FUN_0023bca0(void)

{
  FUN_0023bc28();
  return;
}


// ==== FUN_0023bcc0 @ 0023bcc0 ====

bool FUN_0023bcc0(void)

{
  long lVar1;
  
  lVar1 = FUN_0023bc28();
  return lVar1 != 0;
}


// ==== FUN_0023bce0 @ 0023bce0 ====

void FUN_0023bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00237c18(param_2,param_3);
  return;
}


// ==== FUN_0023bd28 @ 0023bd28 ====

void FUN_0023bd28(undefined8 param_1)

{
  if (((((uint *)param_1)[0x16] >> 0x12 & 3) != 1) || ((*(uint *)param_1 >> 6 & 0xfff) != 1)) {
    FUN_0024f5d8(param_1);
  }
  return;
}


// ==== FUN_0023bd70 @ 0023bd70 ====

void FUN_0023bd70(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  undefined2 *puStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x48);
  iVar3 = *(int *)(iVar1 + 8);
  FUN_002340d8(iVar1);
  if ((*(uint *)(iVar1 + 0x6c) & 1) != 0) {
    return;
  }
  if ((*(undefined **)(iVar1 + 0x20) != (undefined *)0x0) &&
     (*(undefined **)(iVar1 + 0x20) != &DAT_003bee84)) {
    (*DAT_0043dabc)();
  }
  if (*(undefined2 **)(iVar1 + 0x18) == &DAT_003bfaf8) {
    *(undefined **)(iVar1 + 0x20) = &DAT_003bee84;
    if (*(int *)(iVar1 + 0x38) != 3) {
      *(float *)(iVar1 + 0x58) = *(float *)(iVar1 + 0x50) + 4.0;
      *(float *)(iVar1 + 0x5c) = *(float *)(iVar1 + 0x54) + 4.0;
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    goto LAB_0023c08c;
  }
  uStack_9c = *(undefined4 *)(iVar3 + 0x2c);
  uStack_98 = *(undefined4 *)(iVar3 + 0x30);
  uStack_ac = *(undefined4 *)(iVar1 + 0x3c);
  uStack_a8 = *(undefined4 *)(iVar1 + 0x38);
  uStack_78 = *(undefined4 *)(iVar1 + 0x60);
  if (*(int *)(iVar1 + 0x68) == 0) {
    uStack_94 = *(uint *)(iVar1 + 0x24);
  }
  else {
    uStack_94 = *(uint *)(*(int *)(iVar1 + 0x68) + 8);
    if (uStack_94 == 0xffffffff) {
      uStack_94 = *(uint *)(iVar1 + 0x24);
    }
    else {
      uStack_94 = uStack_94 | 0xff000000;
    }
  }
  uStack_74 = *(undefined4 *)(iVar1 + 0x2c);
  if (*(undefined4 **)(iVar1 + 0x68) == (undefined4 *)0x0) {
    iVar3 = *(int *)(iVar3 + 0x18);
LAB_0023bebc:
    if (iVar3 < 0) {
      puStack_c0 = (undefined2 *)0x0;
    }
    else {
      puStack_c0 = *(undefined2 **)
                    (*(int *)(*(int *)(iVar1 + 100) * 4 +
                             *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x48) + 8) + 4) + 0x18))
                    + 8);
    }
  }
  else {
    puVar2 = (undefined2 *)**(undefined4 **)(iVar1 + 0x68);
    puStack_c0 = puVar2 + 4;
    if (puVar2 == &DAT_003bfaf8) {
      iVar3 = *(int *)(iVar3 + 0x18);
      goto LAB_0023bebc;
    }
  }
  iStack_6c = *(int *)(iVar1 + 0x1c) + 8;
  fStack_bc = *(float *)(iVar1 + 0x50);
  fStack_b4 = *(float *)(iVar1 + 0x58);
  uStack_b8 = *(undefined4 *)(iVar1 + 0x54);
  uStack_b0 = *(undefined4 *)(iVar1 + 0x5c);
  uStack_90 = *(undefined4 *)(iVar1 + 0x30);
  uStack_8c = *(undefined4 *)(iVar1 + 0x34);
  uStack_88 = *(uint *)(iVar1 + 0x74) >> 2 & 1;
  uStack_84 = *(uint *)(iVar1 + 0x74) >> 1 & 1;
  uStack_68 = *(undefined4 *)(iVar1 + 0x6c);
  uStack_64 = *(undefined4 *)(iVar1 + 0x20);
  if (*(int *)(iVar1 + 0x68) == 0) {
    iStack_60 = 0;
    uStack_54 = 0xffffffff;
    uStack_5c = 0xffffffff;
    uStack_58 = 0xffffffff;
  }
  else {
    iStack_60 = *(int *)(*(int *)(iVar1 + 0x68) + 0x10);
    if (iStack_60 == 2) {
      iStack_60 = 0;
    }
    uStack_5c = *(undefined4 *)(*(int *)(iVar1 + 0x68) + 0x14);
    uStack_58 = *(undefined4 *)(*(int *)(iVar1 + 0x68) + 0x18);
    uStack_54 = *(undefined4 *)(*(int *)(iVar1 + 0x68) + 0x1c);
  }
  uVar4 = (*DAT_0043dab8)(&puStack_c0);
  iVar3 = *(int *)(iVar1 + 0x38);
  *(undefined4 *)(iVar1 + 0x20) = uVar4;
  if (iVar3 != 3) {
    fVar6 = *(float *)(iVar1 + 0x58) - *(float *)(iVar1 + 0x50);
    if (iVar3 == 2) {
      FUN_0023ccc8(*(float *)(iVar5 + 0x1c) - ((fStack_b4 - fStack_bc) - fVar6) * 0.5,param_1,0,1);
    }
    else if (iVar3 == 1) {
      FUN_0023ccc8((*(float *)(iVar5 + 0x1c) + fVar6) - (fStack_b4 - fStack_bc),param_1,0,1);
    }
  }
  *(float *)(iVar1 + 0x50) = fStack_bc;
  *(float *)(iVar1 + 0x58) = fStack_b4;
  *(undefined4 *)(iVar1 + 0x54) = uStack_b8;
  *(undefined4 *)(iVar1 + 0x5c) = uStack_b0;
  *(int *)(iVar1 + 0x28) = iStack_a4;
  if (iStack_a4 < *(int *)(iVar1 + 0x2c)) {
    *(int *)(iVar1 + 0x2c) = iStack_a4;
  }
  *(undefined4 *)(iVar1 + 0x44) = uStack_80;
  *(undefined4 *)(iVar1 + 0x48) = uStack_7c;
  *(undefined4 *)(iVar1 + 0x4c) = uStack_a0;
LAB_0023c08c:
  *(undefined4 *)(iVar1 + 0x6c) = 1;
  return;
}


// ==== FUN_0023c0b8 @ 0023c0b8 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0x003bfaf8 : 0x0023c2c8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0023c0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  short *psStack_110;
  short *apsStack_100 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  fVar17 = (float)FUN_0023c8e8(param_1,0xb);
  if (fVar17 == 0.0) {
    return;
  }
  puVar5 = (uint *)param_1;
  if (((int)*puVar5 >> 4 & 1U) != 1) {
    return;
  }
  switch(*puVar5 >> 0x19) {
  case 0xc:
    FUN_002339f0(*(undefined4 *)(puVar5[0x12] + 8),param_2,param_4,0);
    break;
  case 0xd:
  case 0x12:
    uVar7 = puVar5[0x12];
    if ((*(uint *)(uVar7 + 0x1c) & 0xc000000) == 0) {
      if (*(int *)(uVar7 + 0xc) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = FUN_00248c78(*(int *)(uVar7 + 0xc),0x43dc60);
      }
      uVar10 = 0x4000000;
      if (lVar8 == 0) {
        uVar2 = *(uint *)(uVar7 + 0x1c);
        uVar10 = 0x8000000;
      }
      else {
        uVar2 = *(uint *)(uVar7 + 0x1c);
      }
      *(uint *)(uVar7 + 0x1c) = uVar2 & 0xf3ffffff | uVar10;
      uVar10 = *(uint *)(uVar7 + 0x1c);
    }
    else {
      uVar10 = *(uint *)(uVar7 + 0x1c);
    }
    if ((uVar10 & 0xc000000) != 0x4000000) {
      FUN_00240d10(uVar7 + 0x24,param_2,param_4);
      return;
    }
    if (*(int *)(uVar7 + 0xc) == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = (uint *)FUN_00248c78(*(int *)(uVar7 + 0xc),0x43dc60);
    }
    iVar15 = *(int *)(**(int **)(uVar7 + 0x24) + 0x50);
    puVar6 = (uint *)FUN_0021e420(0x43db68,param_1,0,0x43dc58,1,1,0);
    (**(code **)(puVar6[1] + 0xc))((int)puVar6 + (int)*(short *)(puVar6[1] + 8));
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    psStack_110 = &DAT_003bfaf8;
    if ((DAT_0043daf8 == (code *)0x0) ||
       (lVar8 = (*DAT_0043daf8)(*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x48) + 8) + 0x18)),
       lVar8 == 1)) {
      FUN_0024eb58(apsStack_100,param_1);
      *apsStack_100[0] = *apsStack_100[0] + 1;
      DAT_003bfaf8 = DAT_003bfaf8 + -1;
      if (DAT_003bfaf8 == 0) {
        FUN_00250198(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
      }
      psStack_110 = apsStack_100[0];
      sVar1 = *apsStack_100[0];
      *apsStack_100[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_100[0],(ushort)apsStack_100[0][2] + 9);
      }
      uVar7 = *puVar5;
    }
    else {
      uVar7 = *puVar5;
    }
    if (uVar7 >> 0x19 != 1) {
      puVar5 = (uint *)puVar5[8];
    }
    puVar11 = puVar6;
    if (*puVar6 >> 0x19 != 1) {
      puVar11 = (uint *)puVar6[8];
    }
    (*DAT_0043daf4)(puVar5[2] + 8,puVar11[2] + 8,
                    *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x48) + 8) + 0x18),psStack_110 + 4);
    (**(code **)(puVar6[1] + 0x14))((int)puVar6 + (int)*(short *)(puVar6[1] + 0x10));
    sVar1 = *psStack_110;
    *psStack_110 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psStack_110,(ushort)psStack_110[2] + 9);
      return;
    }
    break;
  case 0xe:
    break;
  case 0xf:
    puVar3 = *(undefined **)(puVar5[0x12] + 0x20);
    if ((puVar3 != (undefined *)0x0) && (puVar3 != &DAT_003bee84)) {
      (*DAT_0043dac0)(puVar3,param_4);
      return;
    }
    break;
  case 0x10:
    uVar7 = puVar5[0x12];
    FUN_00249e68(param_2);
    fVar20 = -1e+08;
    fVar21 = 0.0;
    fVar17 = fVar20;
    FUN_0024a000(param_2,*(int *)(uVar7 + 8) + 0x18);
    uStack_f0 = DAT_0043dee8;
    uStack_e8 = DAT_0043def0;
    uStack_e0 = DAT_0043def8;
    iVar15 = 0;
    if (0 < *(int *)(*(int *)(uVar7 + 8) + 0x30)) {
      do {
        FUN_00249d40(param_2);
        FUN_00249da0(param_2,*(int *)(*(int *)(uVar7 + 8) + 0x34) + iVar15 * 0x38 + 4);
        piVar12 = (int *)(iVar15 * 0x38 + *(int *)(*(int *)(uVar7 + 8) + 0x34));
        iVar4 = *(int *)(*piVar12 * 4 + *(int *)(*(int *)(*(int *)(uVar7 + 8) + 4) + 0x18));
        if ((fVar20 == (float)piVar12[9]) && (fVar17 == (float)piVar12[10])) {
          iVar9 = *(int *)(uVar7 + 8);
        }
        else {
          fVar21 = 0.0;
          iVar9 = *(int *)(uVar7 + 8);
        }
        iVar14 = 0;
        iVar16 = iVar15 + 1;
        iVar9 = iVar15 * 0x38 + *(int *)(iVar9 + 0x34);
        uVar18 = *(undefined4 *)(iVar9 + 0x2c);
        fVar20 = *(float *)(iVar9 + 0x24);
        fVar17 = *(float *)(iVar9 + 0x28);
        if (0 < *(int *)(iVar9 + 0x30)) {
          fVar19 = 20.0;
          do {
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar18);
            iVar9 = iVar14 * 4;
            uStack_e8 = CONCAT44(uVar18,(undefined4)uStack_e8);
            uStack_e0 = CONCAT44(fVar17,fVar20 + fVar21);
            iVar14 = iVar14 + 1;
            psVar13 = (short *)(*(int *)(iVar15 * 0x38 + *(int *)(*(int *)(uVar7 + 8) + 0x34) + 0x34
                                        ) + iVar9);
            FUN_002339f0(*(undefined4 *)(*psVar13 * 4 + *(int *)(iVar4 + 0x10)),param_2,param_4,
                         &uStack_f0);
            fVar21 = fVar21 + (float)(int)psVar13[1] / fVar19;
          } while (iVar14 < *(int *)(iVar15 * 0x38 + *(int *)(*(int *)(uVar7 + 8) + 0x34) + 0x30));
        }
        FUN_00249d70(param_2);
        iVar15 = iVar16;
      } while (iVar16 < *(int *)(*(int *)(uVar7 + 8) + 0x30));
    }
    FUN_00249eb8(param_2);
    return;
  case 0x11:
    uVar7 = puVar5[0x12];
    FUN_00249d40(param_2);
    *(float *)param_2 = 1.0 - *(float *)(uVar7 + 0x18);
    (*DAT_0043daec)(param_2);
    FUN_002339f0(*(undefined4 *)(*(int *)(uVar7 + 8) + 8),param_2,param_4,0);
    *(float *)param_2 = *(float *)(uVar7 + 0x18);
    (*DAT_0043daec)(param_2);
    FUN_002339f0(*(undefined4 *)(*(int *)(uVar7 + 8) + 0xc),param_2,param_4,0);
    FUN_00249d70(param_2);
  default:
    goto switchD_0023c160_default;
  }
switchD_0023c160_default:
  return;
}


// ==== FUN_0023c6c8 @ 0023c6c8 ====

void FUN_0023c6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = FUN_00387080();
  bVar2 = false;
  if (lVar4 == 0x13) {
    lVar4 = FUN_003871c0(param_1);
    bVar2 = lVar4 == 0;
  }
  if (bVar2) {
    return;
  }
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x48);
  FUN_00249e68(param_2);
  FUN_0024a000(param_2,iVar5 + 0xc);
  lVar4 = FUN_00387080(param_1);
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
    if (!bVar2) goto LAB_0023c7b0;
  }
  bVar3 = true;
LAB_0023c7b0:
  if (bVar3) {
    FUN_00240f78(*(int *)(iVar5 + 0x48) + 0x24,param_2);
  }
  else {
    lVar4 = FUN_00387080(param_1);
    bVar2 = false;
    if (lVar4 == 0xf) {
      lVar4 = FUN_003871c0(param_1);
      bVar2 = lVar4 == 0;
    }
    if (bVar2) {
      FUN_0024a040(param_2,param_3,*(int *)(iVar5 + 0x48) + 0x50);
    }
    else {
      lVar4 = FUN_00387080(param_1,param_3);
      bVar2 = false;
      if (lVar4 == 0x11) {
        lVar4 = FUN_003871c0(param_1);
        bVar2 = lVar4 == 0;
      }
      if (!bVar2) {
        FUN_00233a80(*(undefined4 *)(iVar1 + 8),param_2,param_3,0);
      }
    }
  }
  FUN_00249eb8(param_2);
  return;
}


// ==== FUN_0023c890 @ 0023c890 ====

void FUN_0023c890(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_2;
  puVar1[1] = 0x4e6e6b28;
  puVar1[3] = 0xce6e6b28;
  *puVar1 = 0x4e6e6b28;
  puVar1[2] = 0xce6e6b28;
  FUN_0023c6c8(param_1,DAT_0043df6c,param_2);
  return;
}


// ==== FUN_0023c8e8 @ 0023c8e8 ====

undefined4 FUN_0023c8e8(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x0023c918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_003fde00)[(int)param_2])();
    return uVar1;
  }
  return 0xbf800000;
}


// ==== FUN_0023ccc8 @ 0023ccc8 ====

void FUN_0023ccc8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x0023cd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003fde30)[(int)param_2])();
    return;
  }
  return;
}


// ==== FUN_0023d528 @ 0023d528 ====

undefined4 FUN_0023d528(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar4 = 5;
  iVar1 = *(int *)((int)param_1 + 4);
  iVar1 = (**(code **)(iVar1 + 0x24))((int)param_1 + (int)*(short *)(iVar1 + 0x20));
  puVar3 = &DAT_003bee88;
  do {
    if (((((*(uint *)(iVar1 + 0x10) & *puVar3) == 0) && ((*puVar3 & 0x201c7) != 0)) &&
        (lVar2 = FUN_0024ee48(param_1,&DAT_0043dc18 + puVar3[1],0), lVar2 != 0)) &&
       (*(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | *puVar3, (*puVar3 & 0x200c0) != 0)) {
      uVar5 = 1;
    }
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 2;
  } while (-1 < iVar4);
  return uVar5;
}


// ==== FUN_0023d638 @ 0023d638 ====

void FUN_0023d638(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  long lVar16;
  short *apsStack_c0 [4];
  undefined1 auStack_b0 [16];
  
  iVar7 = *(int *)(param_1 + 0x48);
  lVar8 = FUN_00387080();
  bVar4 = false;
  if (lVar8 == 0xd) {
    lVar8 = FUN_003871c0(param_1);
    bVar4 = lVar8 == 0;
  }
  if (bVar4) {
    iVar11 = *(int *)(param_1 + 0x48);
  }
  else {
    lVar8 = FUN_00387080(param_1);
    bVar4 = false;
    if (lVar8 == 0x12) {
      lVar8 = FUN_003871c0(param_1);
      bVar4 = lVar8 == 0;
    }
    if (!bVar4) {
      return;
    }
    iVar11 = *(int *)(param_1 + 0x48);
  }
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar11 = *(int *)(iVar7 + 8);
    iVar2 = *(int *)(iVar11 + 4);
    lVar8 = FUN_0024fa38(DAT_0043dee4,0x20);
    FUN_00386ec8(lVar8,0x1c);
    puVar14 = (uint *)lVar8;
    puVar14[1] = (uint)&DAT_003e1f88;
    FUN_00248678(puVar14 + 2,8);
    puVar14[1] = (uint)&DAT_003e1f00;
    *puVar14 = *puVar14 & 0xffffffdf;
    puVar14[7] = 0;
    iVar6 = *(int *)(iVar7 + 0xc);
    if (lVar8 != 0) {
      (*(code *)PTR_FUN_003e1f0c)((int)puVar14 + (int)DAT_003e1f08);
    }
    iVar13 = *(int *)(iVar6 + 0xc);
    if (iVar13 == 0) {
      *(uint **)(iVar6 + 0xc) = puVar14;
    }
    else {
      (**(code **)(*(int *)(iVar13 + 4) + 0x14))(iVar13 + *(short *)(*(int *)(iVar13 + 4) + 0x10));
      *(uint **)(iVar6 + 0xc) = puVar14;
    }
    iVar6 = FUN_00248c78(DAT_003bfabc + 8,0x43dd90);
    iVar6 = (**(code **)(*(int *)(iVar6 + 4) + 0x24))
                      (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x20));
    iVar6 = *(int *)(iVar6 + 0xc);
    iVar13 = *(int *)(iVar7 + 0xc);
    if (iVar6 != 0) {
      (**(code **)(*(int *)(iVar6 + 4) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 4) + 8));
    }
    iVar3 = *(int *)(iVar13 + 8);
    if (iVar3 == 0) {
      *(int *)(iVar13 + 8) = iVar6;
    }
    else {
      (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
      *(int *)(iVar13 + 8) = iVar6;
    }
    lVar8 = 0;
    if (0 < *(int *)(iVar2 + 0x30)) {
      iVar13 = 0;
      iVar6 = *(int *)(iVar2 + 0x34);
      while (puVar10 = (undefined4 *)(iVar13 * 8 + iVar6),
            iVar11 != *(int *)(puVar10[1] * 4 + *(int *)(iVar2 + 0x18))) {
        iVar13 = iVar13 + 1;
        if (*(int *)(iVar2 + 0x30) <= iVar13) goto LAB_0023da5c;
        iVar6 = *(int *)(iVar2 + 0x34);
      }
      lVar16 = 0;
      if (DAT_0043df74 != 0) {
        FUN_00253ff0(apsStack_c0,*puVar10);
        lVar16 = FUN_00248c78(DAT_0043df74,apsStack_c0);
        sVar1 = *apsStack_c0[0];
        *apsStack_c0[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
        }
      }
      if ((lVar16 != 0) && (piVar15 = (int *)lVar16, (*piVar15 >> 4 & 1U) != 0)) {
        iVar11 = (**(code **)(piVar15[1] + 0x24))((int)piVar15 + (int)*(short *)(piVar15[1] + 0x20))
        ;
        piVar15 = *(int **)(iVar11 + 0xc);
        if ((piVar15 != (int *)0x0) && ((*piVar15 >> 4 & 1U) != 0)) {
          iVar7 = *(int *)(iVar7 + 0xc);
          (**(code **)(piVar15[1] + 0xc))((int)piVar15 + (int)*(short *)(piVar15[1] + 8));
          iVar11 = *(int *)(iVar7 + 8);
          if (iVar11 == 0) {
            *(int **)(iVar7 + 8) = piVar15;
          }
          else {
            (**(code **)(*(int *)(iVar11 + 4) + 0x14))
                      (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x10));
            *(int **)(iVar7 + 8) = piVar15;
          }
        }
        FUN_0023e3d0(param_1);
        (**(code **)(*(int *)(param_1 + 4) + 0x3c))
                  (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x38),1);
        uVar9 = FUN_0021f0f8(0x43db68,auStack_b0);
        iVar7 = DAT_0043db74 * 4;
        DAT_0043db74 = DAT_0043db74 + 1;
        *(int *)(iVar7 + DAT_0043db7c) = param_1;
        (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1 + *(short *)(*(int *)(param_1 + 4) + 8));
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffdfffff | 0x200000;
        FUN_0021ea58(0x43db68,param_1,lVar16,0);
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffdfffff;
        iVar7 = *(int *)(DAT_0043db74 * 4 + DAT_0043db7c + -4);
        iVar11 = *(int *)(iVar7 + 4);
        (**(code **)(iVar11 + 0x14))(iVar7 + *(short *)(iVar11 + 0x10));
        DAT_0043db74 = DAT_0043db74 + -1;
        if (0 < DAT_0043db68) {
          iVar7 = *(int *)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
          iVar11 = *(int *)(iVar7 + 4);
          (**(code **)(iVar11 + 0x14))(iVar7 + *(short *)(iVar11 + 0x10));
          DAT_0043db68 = DAT_0043db68 + -1;
        }
        FUN_0021f120(0x43db68,uVar9,auStack_b0);
        lVar8 = FUN_0023d528(param_1);
      }
    }
LAB_0023da5c:
    iVar7 = DAT_0043df68;
    if (lVar8 != 0) {
      iVar11 = 0;
      if (*(ushort *)(DAT_0043df68 + 0x12) != 0) {
        piVar15 = *(int **)(DAT_0043df68 + 0x14);
        do {
          if (*piVar15 == param_1) {
            bVar4 = true;
            goto LAB_0023daa4;
          }
          iVar11 = iVar11 + 1;
          piVar15 = piVar15 + 1;
        } while (iVar11 < (int)(uint)*(ushort *)(DAT_0043df68 + 0x12));
      }
      bVar4 = false;
LAB_0023daa4:
      if (!bVar4) {
        uVar5 = *(short *)(DAT_0043df68 + 0x10) + 1;
        *(ushort *)(DAT_0043df68 + 0x10) = uVar5;
        uVar12 = (uint)uVar5;
        if (*(int *)((uint)uVar5 * 4 + *(int *)(iVar7 + 0x14)) == 0) {
          iVar7 = *(int *)(iVar7 + 0x14);
        }
        else {
          bVar4 = uVar12 < *(ushort *)(iVar7 + 0x12);
          do {
            if (!bVar4) {
              uVar12 = 0;
            }
            uVar12 = uVar12 + 1;
            bVar4 = (int)uVar12 < (int)(uint)*(ushort *)(iVar7 + 0x12);
          } while (*(int *)(uVar12 * 4 + *(int *)(iVar7 + 0x14)) != 0);
          iVar7 = *(int *)(iVar7 + 0x14);
        }
        *(int *)(uVar12 * 4 + iVar7) = param_1;
        (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1 + *(short *)(*(int *)(param_1 + 4) + 8));
      }
    }
  }
  return;
}


// ==== FUN_0023db58 @ 0023db58 ====

void FUN_0023db58(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar1 = *(int *)((int)param_1 + 0x48);
  if (((-1 < param_2) && (param_2 < *(int *)(*(int *)(iVar1 + 8) + 8))) &&
     (param_2 != *(int *)(iVar1 + 0x18))) {
    if (param_2 == *(int *)(iVar1 + 0x18) + 1) {
      *(int *)(iVar1 + 0x18) = param_2;
      FUN_002481e0(*(int *)(iVar1 + 8) + 8,iVar1 + 0x24,param_1,param_2);
      uVar5 = *(undefined4 *)(iVar1 + 0x18);
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      lVar6 = FUN_00250058(DAT_0043dee0,8);
      uVar7 = FUN_00250058(DAT_0043dee0,0x14);
      uVar4 = FUN_0023e8b8(uVar7,0,0,0,0);
      puVar9 = (undefined4 *)lVar6;
      *puVar9 = uVar4;
      puVar9[1] = (int)param_1;
      iVar2 = *(int *)(iVar1 + 0x18);
      iVar8 = 0;
      if (iVar2 < param_2) {
        iVar8 = iVar2;
      }
      while ((*(int *)(iVar1 + 0x18) = iVar8, iVar8 <= param_2 &&
             (iVar8 < *(int *)(*(int *)(iVar1 + 8) + 8)))) {
        FUN_00247f60(*(int *)(iVar1 + 8) + 8,lVar6,*(undefined4 *)(iVar1 + 0x18));
        iVar8 = *(int *)(iVar1 + 0x18) + 1;
      }
      *(int *)(iVar1 + 0x18) = param_2;
      FUN_00241480(iVar1 + 0x24,lVar6,uVar5,iVar2 < param_2);
      if (lVar6 == 0) {
        uVar5 = *(undefined4 *)(iVar1 + 0x18);
      }
      else {
        FUN_0023e958(lVar6);
        puVar9 = (undefined4 *)*puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)puVar9[1];
          *puVar9 = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            FUN_00386668(puVar3,0x1c);
            puVar9[1] = 0;
          }
          FUN_00386698(puVar9,0x14);
        }
        FUN_003866c8(lVar6,8);
        uVar5 = *(undefined4 *)(iVar1 + 0x18);
      }
    }
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    FUN_00248550(*(int *)(iVar1 + 8) + 8,param_1,uVar5);
  }
  return;
}


// ==== FUN_0023dd28 @ 0023dd28 ====

void FUN_0023dd28(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x24))
                    (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x20));
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | param_2;
  return;
}


// ==== FUN_0023dd68 @ 0023dd68 ====

void FUN_0023dd68(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x24))
                    (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x20));
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & ~param_2;
  return;
}


// ==== FUN_0023ddb0 @ 0023ddb0 ====

undefined4 FUN_0023ddb0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x24))
                    (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x20));
  if (((*(int *)(*(int *)(param_1 + 0x48) + 0x1c) << 8) >> 8 & param_2) == 0) {
    iVar3 = *(int *)(iVar2 + 8);
    if (iVar3 == 0) {
      uVar1 = *(uint *)(iVar2 + 0x10);
    }
    else {
      iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x24))
                        (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x20));
      if ((*(uint *)(iVar3 + 0x10) & param_2) != 0) {
        return 1;
      }
      uVar1 = *(uint *)(iVar2 + 0x10);
    }
    if ((uVar1 & param_2) == 0) {
      return 0;
    }
  }
  return 1;
}


// ==== FUN_0023de70 @ 0023de70 ====

undefined4 FUN_0023de70(int param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  int iStack_b8;
  uint uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  iStack_bc = param_4;
  lVar4 = FUN_00387080();
  bVar2 = false;
  if (lVar4 == 0xf) {
    lVar4 = FUN_003871c0(param_1);
    bVar2 = lVar4 == 0;
  }
  if (bVar2) {
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x48);
  lVar4 = FUN_0023ddb0(param_1,param_2);
  if (lVar4 == 0) {
    return 0;
  }
  piVar9 = *(int **)(iVar10 + 0x20);
  uVar11 = 0;
  if ((piVar9 != (int *)0x0) && (iStack_b8 = 0, 0 < *piVar9)) {
    iStack_b0 = 0;
    iStack_ac = 0;
    uStack_b4 = (uint)param_3 >> 0x11;
    iStack_a8 = 0;
    do {
      uVar3 = DAT_003be8d8;
      puVar7 = (uint *)(iStack_a8 + piVar9[1]);
      if ((*puVar7 & param_2) != 0) {
        if (param_2 == 0x200) {
LAB_0023e00c:
          iVar8 = 0x75;
          if (param_2 == 0x200) {
            iVar8 = 0x6b;
          }
          uVar11 = 1;
          uVar6 = FUN_0024fa38(DAT_0043dee4,0x44);
          uVar6 = FUN_00252740(uVar6,*(undefined4 *)
                                      (iStack_ac + *(int *)(*(int *)(iVar10 + 0x20) + 4) + 8),
                               0xffffffffffffffff,DAT_0043db9c,(&DAT_0043dc18)[iVar8] + 8,param_1,0)
          ;
          uVar5 = FUN_0021f0f8(0x43db68,auStack_c0);
          iVar8 = DAT_0043db8c * 4;
          DAT_0043db8c = DAT_0043db8c + 1;
          *(int *)(iVar8 + DAT_0043db94) = param_1;
          (**(code **)(*(int *)(param_1 + 4) + 0xc))
                    (param_1 + *(short *)(*(int *)(param_1 + 4) + 8));
          iVar8 = (int)uVar6;
          (**(code **)(*(int *)(iVar8 + 4) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 4) + 8));
          FUN_0021ea58(0x43db68,param_1,uVar6,0);
          (**(code **)(*(int *)(iVar8 + 4) + 0x14))(iVar8 + *(short *)(*(int *)(iVar8 + 4) + 0x10));
          iVar8 = *(int *)(DAT_0043db8c * 4 + DAT_0043db94 + -4);
          iVar1 = *(int *)(iVar8 + 4);
          (**(code **)(iVar1 + 0x14))(iVar8 + *(short *)(iVar1 + 0x10));
          DAT_0043db8c = DAT_0043db8c + -1;
          FUN_0021f120(0x43db68,uVar5,auStack_c0);
        }
        else if ((int)param_2 < 0x201) {
          if (param_2 == 2) {
            uVar11 = 1;
            uVar6 = FUN_00386860(DAT_0043df68);
            FUN_00232a00(uVar6,puVar7 + 2,param_1,uVar3);
          }
          else {
            if (param_2 == 4) goto LAB_0023e00c;
            iVar8 = *(int *)(iVar10 + 0x20);
LAB_0023e17c:
            uVar11 = 1;
            iVar8 = iStack_b0 + *(int *)(iVar8 + 4);
            uVar6 = FUN_00386860(DAT_0043df68);
            FUN_00232958(uVar6,iVar8 + 8,param_1,param_3);
          }
        }
        else {
          if (param_2 != 0x20000) {
            if (param_2 != 0x40000) {
              iVar8 = *(int *)(iVar10 + 0x20);
              goto LAB_0023e17c;
            }
            goto LAB_0023e00c;
          }
          if (puVar7[1] == uStack_b4) {
            uVar11 = 1;
            uVar6 = FUN_00386860(DAT_0043df68);
            FUN_00232a00(uVar6,puVar7 + 2,param_1,param_3);
          }
        }
      }
      iStack_b8 = iStack_b8 + 1;
      piVar9 = *(int **)(iVar10 + 0x20);
      iStack_ac = iStack_ac + 0xc;
      iStack_b0 = iStack_b0 + 0xc;
      iStack_a8 = iStack_a8 + 0xc;
    } while (iStack_b8 < *piVar9);
  }
  if (iStack_bc == 0) {
    return uVar11;
  }
  iVar10 = 0;
  if ((DAT_003bee88 & param_2) == 0) {
    iVar8 = 1;
    while ((iVar10 = 0, iVar8 < 6 && (iVar10 = iVar8, ((&DAT_003bee88)[iVar8 * 2] & param_2) == 0)))
    {
      iVar8 = iVar8 + 1;
    }
  }
  uVar6 = (**(code **)(*(int *)(param_1 + 4) + 0x24))
                    (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x20));
  lVar4 = FUN_00248c78(uVar6,&DAT_0043dc18 + *(int *)(&DAT_003bee8c + iVar10 * 8));
  if (lVar4 == 0) {
    lVar4 = FUN_0024ee48(param_1,&DAT_0043dc18 + *(int *)(&DAT_003bee8c + iVar10 * 8),0);
    if (lVar4 == 0) {
      return uVar11;
    }
    piVar9 = (int *)lVar4;
    if ((*piVar9 >> 4 & 1U) == 0) {
      return uVar11;
    }
    if (piVar9[8] != param_1) {
      lVar4 = (**(code **)(piVar9[1] + 0x84))
                        ((int)piVar9 + (int)*(short *)(piVar9[1] + 0x80),param_1);
      *(uint *)lVar4 = *(uint *)lVar4 & 0xff03ffff | 0x40000;
    }
    iVar10 = (&DAT_003bee88)[iVar10 * 2];
    if (((iVar10 == 0x4000) || (iVar10 == 0x2000)) || (iVar10 == 1)) goto LAB_0023e348;
  }
  else if (((&DAT_003bee88)[iVar10 * 2] == 0x4000) || ((&DAT_003bee88)[iVar10 * 2] == 0x2000)) {
LAB_0023e348:
    uVar6 = FUN_00386860(DAT_0043df68);
    FUN_00232aa8(uVar6,param_1,lVar4,0,param_3);
    return 1;
  }
  uVar6 = FUN_00386860(DAT_0043df68);
  FUN_00232b78(uVar6,param_1,lVar4,0,param_3);
  return 1;
}


// ==== FUN_0023e3d0 @ 0023e3d0 ====

void FUN_0023e3d0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = FUN_00387080();
  bVar4 = false;
  if (lVar7 == 0xd) {
    lVar7 = FUN_003871c0(param_1);
    bVar4 = lVar7 == 0;
  }
  if (bVar4) {
LAB_0023e450:
    bVar5 = true;
  }
  else {
    lVar7 = FUN_00387080(param_1);
    bVar4 = false;
    if (lVar7 == 0x12) {
      lVar7 = FUN_003871c0(param_1);
      bVar4 = lVar7 == 0;
    }
    bVar5 = false;
    if (bVar4) goto LAB_0023e450;
  }
  if (!bVar5) {
    return;
  }
  iVar1 = *(int *)((int)param_1 + 0x48);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  if ((*(uint *)(iVar1 + 0x1c) & 0x2000000) == 0) {
LAB_0023e520:
    uVar3 = *(uint *)(iVar1 + 0x1c);
  }
  else {
    if (*(int *)(iVar1 + 0x2c) == 1) {
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    else {
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    }
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x18) == 1) {
      iVar6 = *(int *)(iVar2 + 8);
      if (iVar6 == 1) {
        *(undefined4 *)(iVar1 + 0x18) = 0;
        goto LAB_0023e520;
      }
    }
    else {
      iVar6 = *(int *)(iVar2 + 8);
    }
    if (*(int *)(iVar1 + 0x18) != iVar6) {
      if (((*(uint *)(iVar1 + 0x1c) & 0x2000000) != 0) &&
         (FUN_002481e0(iVar2 + 8,iVar1 + 0x24,param_1), (*(uint *)(iVar1 + 0x1c) & 0x2000000) != 0))
      {
        *(int *)(iVar1 + 0x28) = -*(int *)(iVar1 + 0x18);
        FUN_00248550(*(int *)(iVar1 + 8) + 8,param_1);
        *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x18);
      }
      goto LAB_0023e520;
    }
    FUN_0023db58(param_1,0);
    uVar3 = *(uint *)(iVar1 + 0x1c);
  }
  if ((uVar3 & 0x1000000) != 0) {
    lVar7 = FUN_00387080(param_1);
    bVar4 = false;
    if (lVar7 == 0x12) {
      lVar7 = FUN_003871c0(param_1);
      bVar4 = lVar7 == 0;
    }
    if (!bVar4) {
      uVar3 = *(uint *)(iVar1 + 0x1c);
      goto LAB_0023e590;
    }
  }
  lVar7 = FUN_0023ddb0(param_1,2);
  if (lVar7 != 0) {
    FUN_0023de70(param_1,2,DAT_003be8d8,1);
  }
  uVar3 = *(uint *)(iVar1 + 0x1c);
LAB_0023e590:
  if ((uVar3 & 0x1000000) != 0) {
    FUN_0023de70(param_1,1,DAT_003be8d8,1);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfeffffff;
  }
  FUN_00241048(iVar1 + 0x24);
  return;
}


// ==== FUN_0023e5f0 @ 0023e5f0 ====

int FUN_0023e5f0(int param_1)

{
  bool bVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = FUN_00387080(param_1);
    bVar1 = false;
    if (lVar2 == 0x12) {
      lVar2 = FUN_003871c0(param_1);
      bVar1 = lVar2 == 0;
    }
    if (bVar1) {
      return param_1;
    }
    lVar2 = FUN_00387080(param_1);
    bVar1 = false;
    if (lVar2 == 0x13) {
      lVar2 = FUN_003871c0(param_1);
      bVar1 = lVar2 == 0;
    }
    if (bVar1) break;
    param_1 = *(int *)(param_1 + 0x44);
  }
  return param_1;
}


// ==== FUN_0023e698 @ 0023e698 ====

void FUN_0023e698(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x58) + -1;
  *(short *)(param_1 + 0x58) = sVar1;
  if (sVar1 == 0) {
    FUN_0021adb8(0);
  }
  return;
}


// ==== FUN_0023e6d8 @ 0023e6d8 ====

void FUN_0023e6d8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_2;
  switch(*(uint *)param_1 >> 0x19) {
  case 0xc:
    piVar5[6] = piVar5[6] + 1;
    break;
  case 0xd:
    piVar5[1] = piVar5[1] + 1;
    break;
  case 0xf:
    piVar5[4] = piVar5[4] + 1;
    break;
  case 0x10:
    piVar5[3] = piVar5[3] + 1;
    break;
  case 0x11:
    piVar5[5] = piVar5[5] + 1;
    break;
  case 0x12:
    *piVar5 = *piVar5 + 1;
  }
  lVar3 = FUN_00387080(param_1);
  bVar1 = false;
  if (lVar3 == 0xd) {
    lVar3 = FUN_003871c0(param_1);
    bVar1 = lVar3 == 0;
  }
  if (!bVar1) {
    lVar3 = FUN_00387080(param_1);
    bVar1 = false;
    if (lVar3 == 0x12) {
      lVar3 = FUN_003871c0(param_1);
      bVar1 = lVar3 == 0;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_0023e7f4;
  }
  bVar2 = true;
LAB_0023e7f4:
  if (bVar2) {
    uVar4 = FUN_00241268(((uint *)param_1)[0x12] + 0x24);
    FUN_002418d8(uVar4,param_2);
  }
  return;
}


// ==== FUN_0023e830 @ 0023e830 ====

undefined8 FUN_0023e830(undefined8 param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)param_1;
  *(undefined2 *)(puVar2 + 6) = param_3;
  uVar4 = *(undefined4 *)(param_2 + 4);
  *puVar2 = param_4;
  puVar2[5] = uVar4;
  *(undefined2 *)((int)puVar2 + 0x1a) = *(undefined2 *)(param_2 + 0x38);
  puVar3 = (uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 4) & 4) == 0) {
    puVar2[1] = 0;
  }
  else {
    puVar2[1] = param_2 + 0x10;
  }
  iVar1 = param_2 + 0x28;
  if ((*puVar3 & 8) == 0) {
    iVar1 = 0;
  }
  puVar2[2] = iVar1;
  uVar4 = 0;
  if ((*puVar3 & 0x80) != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x3c);
  }
  puVar2[3] = uVar4;
  uVar4 = 0;
  if ((*puVar3 & 0x10) != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x30);
  }
  puVar2[4] = uVar4;
  return param_1;
}


// ==== FUN_0023e8b8 @ 0023e8b8 ====

undefined8
FUN_0023e8b8(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[4] = param_4;
  *puVar3 = (int *)param_2;
  if (param_2 == 0) {
    puVar3[1] = 0;
  }
  else if (*(int *)param_2 == 3) {
    uVar2 = FUN_00250058(DAT_0043dee0,0x1c);
    uVar1 = FUN_0023e830(uVar2,param_2,param_3,param_5);
    puVar3[1] = uVar1;
  }
  else {
    puVar3[1] = 0;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  return param_1;
}


// ==== FUN_0023e958 @ 0023e958 ====

void FUN_0023e958(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(*param_1 + 8);
  while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar3[1];
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        FUN_00386668(puVar2,0x1c);
        puVar3[1] = 0;
      }
      FUN_00386698(puVar3,0x14);
    }
  }
  return;
}


// ==== FUN_0023e9e0 @ 0023e9e0 ====

void FUN_0023e9e0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = *(int *)(*param_1 + 8);
  do {
    if (iVar1 == 0) {
      *param_4 = 0;
LAB_0023ea24:
      *param_3 = iVar2;
      return;
    }
    if (param_2 <= *(int *)(iVar1 + 0x10)) {
      if (iVar1 == 0) {
        *param_4 = 0;
      }
      else if (*(int *)(iVar1 + 0x10) == param_2) {
        *param_4 = iVar1;
      }
      else {
        *param_4 = 0;
      }
      goto LAB_0023ea24;
    }
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar1 + 8);
  } while( true );
}


// ==== FUN_0023ea30 @ 0023ea30 ====

void FUN_0023ea30(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_50;
  int aiStack_4c [3];
  
  FUN_0023e9e0(param_1,*(undefined4 *)((int)param_2 + 0x10),&uStack_50,aiStack_4c);
  if (aiStack_4c[0] == 0) {
    FUN_0023eac8(param_1,uStack_50,param_2);
  }
  else {
    FUN_0023eae8(param_1);
    FUN_0023e9e0(param_1,*(undefined4 *)((int)param_2 + 0x10),&uStack_50,aiStack_4c);
    FUN_0023eac8(param_1,uStack_50,param_2);
  }
  return;
}


// ==== FUN_0023eac8 @ 0023eac8 ====

void FUN_0023eac8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_3 + 0xc) = param_2;
  *(int *)(param_3 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = param_3;
  }
  *(int *)(*(int *)(param_3 + 0xc) + 8) = param_3;
  return;
}


// ==== FUN_0023eae8 @ 0023eae8 ====

void FUN_0023eae8(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_2;
  if (puVar3[3] == 0) {
    iVar2 = puVar3[2];
  }
  else {
    *(undefined4 *)(puVar3[3] + 8) = puVar3[2];
    iVar2 = puVar3[2];
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = puVar3[3];
  }
  if (param_2 != 0) {
    puVar1 = (undefined4 *)puVar3[1];
    *puVar3 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      FUN_00386668(puVar1,0x1c);
      puVar3[1] = 0;
    }
    FUN_00386698(param_2,0x14);
  }
  return;
}


// ==== FUN_0023eb78 @ 0023eb78 ====

void FUN_0023eb78(int *param_1,int param_2,long param_3,int *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  
  piVar6 = (int *)*param_1;
  piVar1 = (int *)piVar6[0x14];
  if (param_3 != 0) {
    if (piVar1 != (int *)0x0) {
      iVar5 = *piVar1;
      do {
        if ((iVar5 >> 4 & 1U) != 1) {
          iVar5 = *(int *)param_3;
          iVar2 = piVar1[2];
          bVar4 = false;
          if (*(short *)(iVar5 + 2) == *(short *)(iVar2 + 2)) {
            if (iVar5 != iVar2) {
              lVar7 = FUN_0035c4b0(iVar5 + 8,iVar2 + 8);
              bVar4 = false;
              if (lVar7 != 0) goto LAB_0023ec18;
            }
            bVar4 = true;
          }
LAB_0023ec18:
          if (bVar4) {
            *param_5 = piVar1;
            goto LAB_0023ec8c;
          }
        }
        piVar3 = (int *)piVar1[0x14];
        if (piVar3 == (int *)0x0) goto code_r0x0023ec34;
        iVar5 = *piVar3;
        piVar6 = piVar1;
        piVar1 = piVar3;
      } while( true );
    }
    *param_5 = 0;
    goto LAB_0023ec8c;
  }
  goto LAB_0023ec38;
code_r0x0023ec34:
  piVar6 = (int *)*param_1;
LAB_0023ec38:
  for (piVar1 = (int *)piVar6[0x14]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x14]) {
    if (param_2 <= (piVar1[0x15] << 0xf) >> 0xf) {
      if (piVar1 == (int *)0x0) {
        *param_5 = 0;
      }
      else if ((piVar1[0x15] << 0xf) >> 0xf == param_2) {
        *param_5 = piVar1;
      }
      else {
        *param_5 = 0;
      }
      goto LAB_0023ec8c;
    }
    piVar6 = piVar1;
  }
  *param_5 = 0;
LAB_0023ec8c:
  *param_4 = (int)piVar6;
  return;
}


// ==== FUN_0023ecc0 @ 0023ecc0 ====

void FUN_0023ecc0(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x50)) {
    (*DAT_003bfab0)(param_2,iVar1,0x3fde80);
  }
  return;
}


// ==== FUN_0023ed28 @ 0023ed28 ====

undefined8 FUN_0023ed28(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  
  lVar2 = FUN_00387080(param_3);
  bVar1 = false;
  if (lVar2 == 0xd) {
    lVar2 = FUN_003871c0(param_3);
    bVar1 = lVar2 == 0;
  }
  if (bVar1) {
    uVar3 = *(undefined4 *)(param_2 + 0x50);
  }
  else {
    lVar2 = FUN_00387080(param_3);
    if (lVar2 == 0x12) {
      FUN_003871c0(param_3);
    }
    uVar3 = *(undefined4 *)(param_2 + 0x50);
  }
  iVar4 = (int)param_3;
  *(int *)(iVar4 + 0x4c) = param_2;
  *(undefined4 *)(iVar4 + 0x50) = uVar3;
  (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8));
  if (*(int *)(iVar4 + 0x50) != 0) {
    *(int *)(*(int *)(iVar4 + 0x50) + 0x4c) = iVar4;
  }
  *(int *)(*(int *)(iVar4 + 0x4c) + 0x50) = iVar4;
  return param_3;
}


// ==== FUN_0023ee00 @ 0023ee00 ====

void FUN_0023ee00(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  undefined4 auStack_70 [4];
  
  uVar1 = FUN_0024fa38(DAT_0043dee4,0x60);
  FUN_00386f98(uVar1,param_3,0);
  puVar2 = (uint *)uVar1;
  puVar2[1] = (uint)&DAT_003e2340;
  FUN_003872c0(puVar2 + 2);
  puVar2[0x12] = param_4;
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
  FUN_00387140(uVar1,1);
  puVar2[0x15] = puVar2[0x15] | 0x7ffe0000;
  *puVar2 = *puVar2 & 0xffffffdf;
  puVar2[0x17] = 0;
  puVar2[0x16] = puVar2[0x16] & 0xffdfffff | 0x100000;
  FUN_0023eb78(param_1,param_2,0,auStack_70,(uint)auStack_70 | 4);
  puVar2[0x12] = param_4;
  puVar2[0x15] = puVar2[0x15] & 0xfffe0000 | (uint)param_2 & 0x1ffff;
  FUN_0023ed28(param_1,auStack_70[0],uVar1);
  return;
}


// ==== FUN_0023ef98 @ 0023ef98 ====

undefined8 FUN_0023ef98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 auStack_50 [4];
  
  FUN_0023eb78(param_1,param_2,0,auStack_50,(uint)auStack_50 | 4);
  uVar1 = FUN_0023ed28(param_1,auStack_50[0],param_3);
  *(uint *)((int)uVar1 + 0x54) = *(uint *)((int)uVar1 + 0x54) & 0xfffe0000 | (uint)param_2 & 0x1ffff
  ;
  return uVar1;
}


// ==== FUN_0023f020 @ 0023f020 ====

undefined8 FUN_0023f020(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x4c) == 0) {
    iVar1 = *(int *)(iVar2 + 0x50);
  }
  else {
    *(undefined4 *)(*(int *)(iVar2 + 0x4c) + 0x50) = *(undefined4 *)(iVar2 + 0x50);
    iVar1 = *(int *)(iVar2 + 0x50);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  }
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  return param_1;
}


// ==== FUN_0023f058 @ 0023f058 ====

void FUN_0023f058(undefined8 param_1,undefined8 param_2,int *param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined4 param_7,undefined4 *param_8,int *param_9)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  undefined4 *puVar15;
  short *apsStack_d0 [4];
  undefined1 auStack_c0 [4];
  uint *puStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  int iStack_ac;
  
  puVar12 = (uint *)0x0;
  iStack_b8 = (int)param_2;
  puVar15 = (undefined4 *)param_1;
  uStack_b4 = param_7;
  puStack_b0 = param_8;
  FUN_0023eb78(*puVar15,param_2,param_4,auStack_c0,&puStack_bc);
  iStack_ac = 0;
  puVar13 = (uint *)param_4;
  puVar7 = puVar12;
  if (puStack_bc == (uint *)0x0) {
    iStack_ac = 1;
  }
  else if (param_6 == 0) {
    puVar7 = puStack_bc;
    if (((int)*puStack_bc >> 4 & 1U) != 1) {
      if (param_4 != 0) {
        uVar11 = puStack_bc[2];
        uVar9 = *puVar13;
        bVar3 = false;
        if (*(short *)(uVar9 + 2) == *(short *)(uVar11 + 2)) {
          if (uVar9 != uVar11) {
            lVar8 = FUN_0035c4b0(uVar9 + 8,uVar11 + 8);
            bVar3 = false;
            if (lVar8 != 0) goto LAB_0023f140;
          }
          bVar3 = true;
        }
LAB_0023f140:
        if (bVar3) {
          *puStack_bc = *puStack_bc | 0x10;
          puVar12 = puStack_bc;
        }
      }
      iStack_ac = 1;
      puVar7 = puVar12;
    }
  }
  else {
    iStack_ac = 1;
    FUN_0023f020();
    FUN_002405e8(param_1,puStack_bc);
    puStack_bc = (uint *)0x0;
  }
  uVar10 = 0;
  uVar11 = (uint)param_5;
  if (iStack_ac != 0) {
    iVar6 = *param_3;
    iVar14 = 0xd;
    if (iVar6 == 5) {
      uVar10 = FUN_00250058(DAT_0043dee0,0x30);
      FUN_00233b30(uVar10);
      iVar6 = (int)uVar10;
      *(undefined **)(iVar6 + 0x14) = &DAT_003e1230;
      *(undefined4 *)(iVar6 + 0x18) = 0xffffffff;
      *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x3000000;
    }
    else if (iVar6 == 2) {
      iVar14 = 0xf;
      uVar10 = FUN_00250058(DAT_0043dee0,0x78);
      uVar10 = FUN_00234398(uVar10);
      iVar6 = (int)uVar10;
      *(int **)(iVar6 + 8) = param_3;
      *(int *)(iVar6 + 0x24) = param_3[8];
      *(int *)(iVar6 + 0x60) = param_3[9];
      *(int *)(iVar6 + 0x3c) = param_3[7];
      *(int *)(iVar6 + 100) = param_3[6];
      *(int *)(iVar6 + 0x5c) = param_3[5];
      *(int *)(iVar6 + 0x50) = param_3[2];
      *(int *)(iVar6 + 0x58) = param_3[4];
      *(int *)(iVar6 + 0x54) = param_3[3];
    }
    else {
      if (iVar6 == 10) {
        iVar14 = 0x10;
        uVar10 = FUN_00250058(DAT_0043dee0,0x18);
        *(undefined4 *)uVar10 = 0xffffffff;
        ((undefined4 *)uVar10)[5] = &DAT_003e12a8;
      }
      else if (iVar6 == 1) {
        iVar14 = 0xc;
        uVar10 = FUN_00250058(DAT_0043dee0,0x18);
        *(undefined4 *)uVar10 = 0xffffffff;
        ((undefined4 *)uVar10)[5] = &DAT_003e12d0;
      }
      else {
        if (iVar6 != 8) goto LAB_0023f304;
        iVar14 = 0x11;
        uVar10 = FUN_00250058(DAT_0043dee0,0x1c);
        *(undefined4 *)uVar10 = 0xffffffff;
        ((undefined4 *)uVar10)[5] = &DAT_003e1280;
      }
      iVar6 = (int)uVar10;
      *(undefined1 *)(iVar6 + 0x10) = 0;
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar6 + 0xc) = 0;
    }
LAB_0023f304:
    lVar8 = FUN_00387080(param_5);
    bVar3 = false;
    if (lVar8 == 0xd) {
      lVar8 = FUN_003871c0(param_5);
      bVar3 = lVar8 == 0;
    }
    if (bVar3) {
LAB_0023f36c:
      bVar4 = true;
    }
    else {
      lVar8 = FUN_00387080(param_5);
      bVar3 = false;
      if (lVar8 == 0x12) {
        lVar8 = FUN_003871c0(param_5);
        bVar3 = lVar8 == 0;
      }
      bVar4 = false;
      if (bVar3) goto LAB_0023f36c;
    }
    uVar9 = (uint)uVar10;
    if (bVar4) {
      *(undefined4 *)(uVar9 + 4) = *(undefined4 *)(*(int *)(uVar11 + 0x48) + 0x18);
    }
    else {
      *(undefined4 *)(uVar9 + 4) = 0xffffffff;
    }
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)FUN_0023ee00(*puVar15,iStack_b8,iVar14,uVar10);
    }
    else if (iStack_b8 == (int)(puVar7[0x15] << 0xf) >> 0xf) {
      puVar7[0x12] = uVar9;
    }
    else {
      FUN_0023f020(puVar7);
      FUN_0023ef98(*puVar15,iStack_b8,puVar7);
      (**(code **)(puVar7[1] + 0x14))((int)puVar7 + (int)*(short *)(puVar7[1] + 0x10));
      puVar7[0x12] = uVar9;
    }
    lVar8 = FUN_00387080(param_5);
    bVar3 = false;
    if (lVar8 == 0xd) {
      lVar8 = FUN_003871c0(param_5);
      bVar3 = lVar8 == 0;
    }
    if (bVar3) {
LAB_0023f460:
      bVar4 = true;
    }
    else {
      lVar8 = FUN_00387080(param_5);
      bVar3 = false;
      if (lVar8 == 0x12) {
        lVar8 = FUN_003871c0(param_5);
        bVar3 = lVar8 == 0;
      }
      bVar4 = false;
      if (bVar3) goto LAB_0023f460;
    }
    if (bVar4) {
      puVar7[0x15] = puVar7[0x15] & 0x8001ffff | (*(uint *)(uVar9 + 4) & 0x3fff) << 0x11;
    }
    else {
      puVar7[0x15] = puVar7[0x15] | 0x7ffe0000;
    }
    if (param_4 != 0) {
      *(short *)*puVar13 = *(short *)*puVar13 + 1;
      psVar2 = (short *)puVar7[2];
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      puVar7[2] = *puVar13;
      if ((undefined2 *)*puVar13 != &DAT_003bfaf8) {
        lVar8 = FUN_00248c78(*(undefined4 *)(*(int *)(uVar11 + 0x48) + 0xc),param_4);
        if (lVar8 == 0) {
          iVar6 = *(int *)(uVar11 + 0x48);
        }
        else {
          if ((*(uint *)lVar8 >> 0x19) - 0xc < 8) goto LAB_0023f544;
          iVar6 = *(int *)(uVar11 + 0x48);
        }
        FUN_002488d0(*(undefined4 *)(iVar6 + 0xc),param_4,puVar7);
      }
    }
LAB_0023f544:
    piVar5 = DAT_0043df68;
    if (iVar14 - 0xdU < 2) {
      iVar6 = DAT_0043df68[1];
      *(uint **)(iVar6 * 4 + *DAT_0043df68) = puVar7;
      piVar5[1] = iVar6 + 1;
      (**(code **)(puVar7[1] + 0xc))((int)puVar7 + (int)*(short *)(puVar7[1] + 8));
      iVar6 = *(int *)(uVar11 + 4);
      goto LAB_0023f7cc;
    }
    if (iVar14 != 0xf) {
      iVar6 = *(int *)(uVar11 + 4);
      goto LAB_0023f7cc;
    }
    uVar9 = puVar7[0x12];
    if (*(int *)(*(int *)(uVar9 + 8) + 0x34) == 0) {
      FUN_00253ff0(apsStack_d0,0x40de10);
      *apsStack_d0[0] = *apsStack_d0[0] + 1;
      psVar2 = *(short **)(uVar9 + 0x18);
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      *(short **)(uVar9 + 0x18) = apsStack_d0[0];
      sVar1 = *apsStack_d0[0];
      *apsStack_d0[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_d0[0],(ushort)apsStack_d0[0][2] + 9);
      }
LAB_0023f6a8:
      iVar6 = *(int *)(uVar9 + 8);
    }
    else {
      FUN_00253ff0(apsStack_d0);
      *apsStack_d0[0] = *apsStack_d0[0] + 1;
      psVar2 = *(short **)(uVar9 + 0x18);
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      *(short **)(uVar9 + 0x18) = apsStack_d0[0];
      sVar1 = *apsStack_d0[0];
      *apsStack_d0[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) != 0) goto LAB_0023f6a8;
      FUN_00250198(DAT_0043dee0,apsStack_d0[0],(ushort)apsStack_d0[0][2] + 9);
      iVar6 = *(int *)(uVar9 + 8);
    }
    if (*(int *)(iVar6 + 0x38) == 0) {
      FUN_00253ff0(apsStack_d0,0x40de10);
      *apsStack_d0[0] = *apsStack_d0[0] + 1;
      psVar2 = *(short **)(uVar9 + 0x1c);
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      *(short **)(uVar9 + 0x1c) = apsStack_d0[0];
      sVar1 = *apsStack_d0[0];
      *apsStack_d0[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_d0[0],(ushort)apsStack_d0[0][2] + 9);
      }
    }
    else {
      FUN_00253ff0(apsStack_d0);
      *apsStack_d0[0] = *apsStack_d0[0] + 1;
      psVar2 = *(short **)(uVar9 + 0x1c);
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      *(short **)(uVar9 + 0x1c) = apsStack_d0[0];
      sVar1 = *apsStack_d0[0];
      *apsStack_d0[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_d0[0],(ushort)apsStack_d0[0][2] + 9);
      }
    }
    FUN_00233d18(uVar9,param_5);
    *(undefined4 *)(uVar9 + 0x6c) = 6;
  }
  iVar6 = *(int *)(uVar11 + 4);
LAB_0023f7cc:
  (**(code **)(iVar6 + 0xc))(uVar11 + (int)*(short *)(iVar6 + 8));
  uVar9 = puVar7[0x11];
  if (uVar9 == 0) {
    uVar9 = puVar7[0x12];
  }
  else {
    (**(code **)(*(int *)(uVar9 + 4) + 0x14))(uVar9 + (int)*(short *)(*(int *)(uVar9 + 4) + 0x10));
    uVar9 = puVar7[0x12];
  }
  puVar7[0x11] = uVar11;
  *(int **)(uVar9 + 8) = param_3;
  *(undefined4 *)puVar7[0x12] = uStack_b4;
  *puStack_b0 = puVar7;
  *param_9 = iStack_ac;
  return;
}


// ==== FUN_0023f858 @ 0023f858 ====

/* WARNING: Removing unreachable block (ram,0x0023fa08) */
/* WARNING: Removing unreachable block (ram,0x0023f910) */
/* WARNING: Removing unreachable block (ram,0x0023f868) */
/* WARNING: Removing unreachable block (ram,0x0023f8bc) */
/* WARNING: Removing unreachable block (ram,0x0023f9b4) */
/* WARNING: Removing unreachable block (ram,0x0023fa5c) */
/* WARNING: Removing unreachable block (ram,0x0023f97c) */
/* WARNING: Removing unreachable block (ram,0x0023fac8) */

void FUN_0023f858(float *param_1,uint *param_2)

{
  *param_1 = (float)(*param_2 >> 0x18) / 255.0;
  param_1[1] = (float)((*param_2 & 0xff0000) >> 0x10) / 255.0;
  param_1[2] = (float)((*param_2 & 0xff00) >> 8) / 255.0;
  param_1[3] = (float)(*param_2 & 0xff) / 255.0;
  param_1[4] = (float)(param_2[1] >> 0x18) / 255.0;
  param_1[5] = (float)((param_2[1] & 0xff0000) >> 0x10) / 255.0;
  param_1[6] = (float)((param_2[1] & 0xff00) >> 8) / 255.0;
  param_1[7] = (float)(param_2[1] & 0xff) / 255.0;
  return;
}


// ==== FUN_0023faf8 @ 0023faf8 ====

void FUN_0023faf8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9,int param_10)

{
  undefined1 auStack_e0 [32];
  undefined4 uStack_c0;
  
  uStack_c0 = param_9;
  if (param_10 != 0) {
    FUN_0023f858(auStack_e0,param_10);
  }
  FUN_0023fe48(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uStack_c0);
  return;
}


// ==== FUN_0023fbe8 @ 0023fbe8 ====

void FUN_0023fbe8(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_2 + 0x48);
  if ((**(int **)(iVar1 + 8) != 4) && (**(int **)(iVar1 + 8) == 5)) {
    piVar4 = *(int **)(iVar1 + 0x20);
    iVar8 = 0;
    if (piVar4 != (int *)0x0) {
      bVar7 = false;
      if (0 < *piVar4) {
        iVar6 = 0;
        do {
          if ((*(uint *)(iVar6 + piVar4[1]) & 0x201c7) == 0) {
            iVar2 = *piVar4;
          }
          else {
            *(uint *)(iVar1 + 0x1c) =
                 *(uint *)(iVar1 + 0x1c) & 0xff000000 |
                 ((int)(*(uint *)(iVar1 + 0x1c) << 8) >> 8 | *(uint *)(iVar6 + piVar4[1])) &
                 0xffffff;
            if ((*(uint *)(iVar6 + piVar4[1]) & 0x200c0) != 0) {
              bVar7 = true;
            }
            iVar2 = *piVar4;
          }
          iVar8 = iVar8 + 1;
          iVar6 = iVar6 + 0xc;
        } while (iVar8 < iVar2);
      }
      iVar8 = DAT_0043df68;
      if (bVar7) {
        iVar6 = 0;
        if (*(ushort *)(DAT_0043df68 + 0x12) != 0) {
          piVar4 = *(int **)(DAT_0043df68 + 0x14);
          do {
            if (*piVar4 == param_2) {
              bVar7 = true;
              goto LAB_0023fd14;
            }
            iVar6 = iVar6 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar6 < (int)(uint)*(ushort *)(DAT_0043df68 + 0x12));
        }
        bVar7 = false;
LAB_0023fd14:
        if (!bVar7) {
          uVar3 = *(short *)(DAT_0043df68 + 0x10) + 1;
          *(ushort *)(DAT_0043df68 + 0x10) = uVar3;
          uVar5 = (uint)uVar3;
          if (*(int *)((uint)uVar3 * 4 + *(int *)(iVar8 + 0x14)) == 0) {
            iVar8 = *(int *)(iVar8 + 0x14);
          }
          else {
            bVar7 = uVar5 < *(ushort *)(iVar8 + 0x12);
            do {
              if (!bVar7) {
                uVar5 = 0;
              }
              uVar5 = uVar5 + 1;
              bVar7 = (int)uVar5 < (int)(uint)*(ushort *)(iVar8 + 0x12);
            } while (*(int *)(uVar5 * 4 + *(int *)(iVar8 + 0x14)) != 0);
            iVar8 = *(int *)(iVar8 + 0x14);
          }
          *(int *)(uVar5 * 4 + iVar8) = param_2;
          (**(code **)(*(int *)(param_2 + 4) + 0xc))
                    (param_2 + *(short *)(*(int *)(param_2 + 4) + 8));
        }
      }
      if (param_3 != 0) {
        *(uint *)(iVar1 + 0x1c) =
             *(uint *)(iVar1 + 0x1c) & 0xff000000 |
             (int)(*(uint *)(iVar1 + 0x1c) << 8) >> 8 & 0xffffffU | 0x40200;
        FUN_0023de70(param_2,0x200,DAT_003be8d8,1);
        FUN_0023de70(param_2,0x40000,DAT_003be8d8,1);
        *(uint *)(iVar1 + 0x1c) =
             *(uint *)(iVar1 + 0x1c) & 0xff000000 |
             (int)(*(uint *)(iVar1 + 0x1c) << 8) >> 8 & 0xfbfdffU;
      }
    }
  }
  return;
}


// ==== FUN_0023fe48 @ 0023fe48 ====

int FUN_0023fe48(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 *param_10,undefined8 *param_11,int param_12,
                int *param_13)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iStack_80;
  int iStack_7c;
  
  iStack_80 = (int)param_3;
  iStack_7c = 0;
  if ((param_3 == 0) &&
     (FUN_0023f058(param_2,param_4,param_5,param_6,param_7,param_8,param_9,&iStack_80),
     iStack_80 == 0)) {
    return 0;
  }
  iVar5 = iStack_80;
  if (param_10 != (undefined8 *)0x0) {
    uVar6 = param_10[1];
    uVar7 = param_10[2];
    uVar8 = param_10[3];
    *(undefined8 *)(iStack_80 + 0x24) = *param_10;
    *(undefined8 *)(iStack_80 + 0x2c) = uVar6;
    *(undefined8 *)(iStack_80 + 0x34) = uVar7;
    *(undefined8 *)(iStack_80 + 0x3c) = uVar8;
  }
  if (param_11 != (undefined8 *)0x0) {
    uVar6 = param_11[1];
    uVar7 = param_11[2];
    *(undefined8 *)(iStack_80 + 0xc) = *param_11;
    *(undefined8 *)(iStack_80 + 0x14) = uVar6;
    *(undefined8 *)(iStack_80 + 0x1c) = uVar7;
  }
  if (param_12 != 0) {
    *(int *)(*(int *)(iStack_80 + 0x48) + 0x20) = param_12;
  }
  lVar3 = FUN_00387080(iStack_80);
  bVar1 = false;
  if (lVar3 == 0x11) {
    lVar3 = FUN_003871c0(iVar5);
    bVar1 = lVar3 == 0;
  }
  if (bVar1) {
    *(undefined4 *)(*(int *)(iStack_80 + 0x48) + 0x18) = param_1;
  }
  if (iStack_7c != 0) {
    FUN_0023fbe8(param_2,iStack_80,1);
  }
  iVar5 = iStack_80;
  lVar3 = FUN_00387080(iStack_80);
  bVar1 = false;
  if (lVar3 == 0xd) {
    lVar3 = FUN_003871c0(iVar5);
    bVar1 = lVar3 == 0;
  }
  if (!bVar1) {
    lVar3 = FUN_00387080(iVar5);
    bVar1 = false;
    if (lVar3 == 0x12) {
      lVar3 = FUN_003871c0(iVar5);
      bVar1 = lVar3 == 0;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_00240020;
  }
  bVar2 = true;
LAB_00240020:
  if (bVar2) {
    if ((param_13 != (int *)0x0) && ((*param_13 >> 4 & 1U) != 0)) {
      uVar6 = (**(code **)(param_13[1] + 0x24))((int)param_13 + (int)*(short *)(param_13[1] + 0x20))
      ;
      lVar3 = FUN_00248ee0(uVar6);
      if (lVar3 != 0) {
        iVar5 = *(int *)lVar3;
        do {
          bVar1 = false;
          if (*(short *)(iVar5 + 2) == *(short *)(DAT_0043dc18 + 2)) {
            if (iVar5 != DAT_0043dc18) {
              lVar4 = FUN_0035c4b0(iVar5 + 8,DAT_0043dc18 + 8);
              bVar1 = false;
              if (lVar4 != 0) goto LAB_002400b0;
            }
            bVar1 = true;
          }
LAB_002400b0:
          if (!bVar1) {
            iVar5 = *(int *)lVar3;
            bVar1 = false;
            if (*(short *)(iVar5 + 2) == *(short *)(DAT_0043ddf8 + 2)) {
              if (iVar5 != DAT_0043ddf8) {
                lVar4 = FUN_0035c4b0(iVar5 + 8,DAT_0043ddf8 + 8);
                bVar1 = false;
                if (lVar4 != 0) goto LAB_002400f0;
              }
              bVar1 = true;
            }
LAB_002400f0:
            if (!bVar1) {
              FUN_0021c268(0x43db68,iStack_80,0,lVar3,((int *)lVar3)[1],1,1,0);
            }
          }
          lVar3 = FUN_00248f48(uVar6,lVar3);
          if (lVar3 == 0) break;
          iVar5 = *(int *)lVar3;
        } while( true );
      }
    }
    FUN_0023d638(iStack_80);
  }
  return iStack_80;
}


// ==== FUN_00240168 @ 00240168 ====

undefined8 FUN_00240168(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  short sVar1;
  undefined8 uVar2;
  short **ppsVar3;
  undefined4 uVar4;
  short *apsStack_a0 [4];
  short *apsStack_90 [4];
  short *apsStack_80 [4];
  undefined1 auStack_70 [4];
  int aiStack_6c [3];
  
  if ((*param_2 & 2) == 0) {
    if ((*param_2 & 1) == 0) {
      return 0;
    }
    FUN_0023eb78(*(undefined4 *)param_1,param_2[1],0,auStack_70,aiStack_6c);
    if (aiStack_6c[0] != 0) {
      if ((*(ushort *)(aiStack_6c[0] + 0x5a) & 1) != 0) {
        return 0;
      }
      uVar2 = FUN_0023faf8(param_2[0xb],param_1,aiStack_6c[0],0,0,0,param_3,0,0xffffffffffffffff);
      return uVar2;
    }
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    uVar4 = *(undefined4 *)
             (param_2[2] * 4 +
             *(int *)(*(int *)(*(int *)(*(int *)((int)param_3 + 0x48) + 8) + 4) + 0x18));
    apsStack_a0[0] = &DAT_003bfaf8;
    ppsVar3 = (short **)0x0;
    if ((*param_2 & 0x20) == 0) goto LAB_0024032c;
    FUN_00253ff0(apsStack_80,param_2[0xc]);
    *apsStack_80[0] = *apsStack_80[0] + 1;
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    }
  }
  else {
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    uVar4 = *(undefined4 *)
             (param_2[2] * 4 +
             *(int *)(*(int *)(*(int *)(*(int *)((int)param_3 + 0x48) + 8) + 4) + 0x18));
    apsStack_a0[0] = &DAT_003bfaf8;
    ppsVar3 = (short **)0x0;
    if ((*param_2 & 0x20) == 0) goto LAB_0024032c;
    FUN_00253ff0(apsStack_90,param_2[0xc]);
    *apsStack_90[0] = *apsStack_90[0] + 1;
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    apsStack_80[0] = apsStack_90[0];
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
      apsStack_80[0] = apsStack_90[0];
    }
  }
  ppsVar3 = apsStack_a0;
  sVar1 = *apsStack_80[0];
  *apsStack_80[0] = sVar1 + -1;
  apsStack_a0[0] = apsStack_80[0];
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
  }
LAB_0024032c:
  uVar2 = FUN_0023faf8(param_2[0xb],param_1,0,param_2[1],uVar4,ppsVar3,param_3,0,param_2[0xd]);
  sVar1 = *apsStack_a0[0];
  *apsStack_a0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
  }
  return uVar2;
}


// ==== FUN_00240460 @ 00240460 ====

undefined8 FUN_00240460(undefined8 param_1,int *param_2,undefined8 param_3)

{
  short sVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  short **ppsVar4;
  short *apsStack_70 [4];
  short *apsStack_60 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_70[0] = &DAT_003bfaf8;
  ppsVar4 = (short **)0x0;
  if ((*(uint *)(*param_2 + 4) & 0x20) != 0) {
    FUN_00253ff0(apsStack_60,*(undefined4 *)(*param_2 + 0x34),param_3,0x3c0000,0);
    *apsStack_60[0] = *apsStack_60[0] + 1;
    sVar1 = *apsStack_70[0];
    *apsStack_70[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
    }
    apsStack_70[0] = apsStack_60[0];
    sVar1 = *apsStack_60[0];
    *apsStack_60[0] = sVar1 + -1;
    ppsVar4 = apsStack_70;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
    }
  }
  puVar2 = (undefined4 *)param_2[1];
  uVar3 = FUN_0023faf8(puVar2[4],param_1,0,param_2[4],*puVar2,ppsVar4,param_3,1,
                       *(undefined2 *)((int)puVar2 + 0x1a));
  *(uint *)((int)uVar3 + 0x54) =
       *(uint *)((int)uVar3 + 0x54) & 0x8001ffff |
       ((int)*(short *)(param_2[1] + 0x18) & 0x3fffU) << 0x11;
  sVar1 = *apsStack_70[0];
  *apsStack_70[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_70[0],(ushort)apsStack_70[0][2] + 9);
  }
  return uVar3;
}


// ==== FUN_002405e8 @ 002405e8 ====

void FUN_002405e8(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  if ((param_2 != 0) && (piVar4 = (int *)param_2, (*piVar4 >> 4 & 1U) == 1)) {
    iVar1 = piVar4[0x11];
    if ((iVar1 != 0) &&
       (((lVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x24))
                            (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x20)),
         (undefined2 *)piVar4[2] != &DAT_003bfaf8 && (lVar2 != 0)) &&
        (lVar3 = FUN_00248c78(lVar2,piVar4 + 2), lVar3 == param_2)))) {
      FUN_00248a98(lVar2,piVar4 + 2);
    }
    FUN_0023f020(param_2);
    FUN_0023b3a0(param_2);
  }
  return;
}


// ==== FUN_002406a0 @ 002406a0 ====

void FUN_002406a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  
  FUN_0023eb78(*(undefined4 *)param_1,param_2,0,auStack_30,(uint)auStack_30 | 4);
  FUN_002405e8(param_1,uStack_2c);
  return;
}


// ==== FUN_002406e0 @ 002406e0 ====

void FUN_002406e0(undefined8 param_1,undefined4 *param_2)

{
  FUN_002406a0(param_1,*param_2);
  return;
}


// ==== FUN_00240700 @ 00240700 ====

void FUN_00240700(undefined8 param_1,int param_2)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_0023eb78(*(undefined4 *)param_1,(*(int *)(param_2 + 0x54) << 0xf) >> 0xf,0,&uStack_30,
               (uint)&uStack_30 | 4);
  FUN_002405e8(param_1,uStack_2c);
  return;
}


// ==== FUN_00240758 @ 00240758 ====

undefined8 FUN_00240758(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00250058(DAT_0043dee0,4);
  uVar1 = FUN_00241928(uVar2);
  *(undefined4 *)param_1 = uVar1;
  return param_1;
}


// ==== FUN_00240798 @ 00240798 ====

void FUN_00240798(undefined8 param_1,ulong param_2)

{
  FUN_00241128(param_1,0);
  if (*(int *)param_1 != 0) {
    FUN_00241ad8(*(int *)param_1,3);
  }
  if ((param_2 & 1) != 0) {
    FUN_00107d48(param_1);
  }
  return;
}


// ==== FUN_002407f8 @ 002407f8 ====

void FUN_002407f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  pauVar11 = (undefined1 (*) [16])param_1;
  pauVar12 = pauVar11 + *(int *)(pauVar11[0x3b] + 8) * 2 + 2;
  *(int *)(pauVar11[0x3b] + 8) = *(int *)(pauVar11[0x3b] + 8) + 1;
  for (iVar8 = 0; iVar8 != -1; iVar8 = iVar8 + -1) {
  }
  iVar8 = (int)param_2;
  auVar23 = *(undefined1 (*) [16])(iVar8 + 0x24);
  auVar25 = *(undefined1 (*) [16])(iVar8 + 0x34);
  uVar9 = *(undefined8 *)*pauVar11;
  uVar4 = *(undefined4 *)(*pauVar11 + 8);
  uVar5 = *(undefined4 *)(*pauVar11 + 0xc);
  *(int *)*pauVar12 = (int)uVar9;
  *(int *)(*pauVar12 + 4) = (int)((ulong)uVar9 >> 0x20);
  *(undefined4 *)(*pauVar12 + 8) = uVar4;
  *(undefined4 *)(*pauVar12 + 0xc) = uVar5;
  auVar24 = _lqc2(auVar23);
  auVar23 = _lqc2(*pauVar11);
  uVar9 = *(undefined8 *)pauVar11[1];
  uVar4 = *(undefined4 *)(pauVar11[1] + 8);
  uVar5 = *(undefined4 *)(pauVar11[1] + 0xc);
  auVar23 = _vmul(auVar23,auVar24);
  auVar23 = _sqc2(auVar23);
  *pauVar11 = auVar23;
  *(int *)pauVar12[1] = (int)uVar9;
  *(int *)(pauVar12[1] + 4) = (int)((ulong)uVar9 >> 0x20);
  *(undefined4 *)(pauVar12[1] + 8) = uVar4;
  *(undefined4 *)(pauVar12[1] + 0xc) = uVar5;
  auVar25 = _lqc2(auVar25);
  auVar23 = _lqc2(pauVar11[1]);
  auVar23 = _vadd(auVar23,auVar25);
  _sqc2(auVar25);
  auVar23 = _sqc2(auVar23);
  pauVar11[1] = auVar23;
  (*DAT_0043daec)(param_1);
  lVar3 = FUN_00387080(param_2);
  bVar1 = false;
  if (lVar3 == 0xf) {
    lVar3 = FUN_003871c0(param_2);
    bVar1 = lVar3 == 0;
  }
  if (bVar1) {
    FUN_0023bd70(param_2,*(undefined4 *)(iVar8 + 0x44));
    iVar2 = *(int *)(pauVar11[0x3b] + 0xc);
  }
  else {
    iVar2 = *(int *)(pauVar11[0x3b] + 0xc);
  }
  uVar9 = *(undefined8 *)(pauVar11[0x22] + 8);
  uVar10 = *(undefined8 *)pauVar11[0x23];
  *(undefined8 *)((int)pauVar11 + iVar2 * 0x18 + 0x238) = *(undefined8 *)pauVar11[0x22];
  *(undefined8 *)((int)pauVar11 + iVar2 * 0x18 + 0x240) = uVar9;
  *(undefined8 *)((int)pauVar11 + iVar2 * 0x18 + 0x248) = uVar10;
  *(int *)(pauVar11[0x3b] + 0xc) = iVar2 + 1;
  fVar16 = *(float *)(pauVar11[0x22] + 4);
  fVar18 = *(float *)(pauVar11[0x22] + 0xc);
  fVar14 = *(float *)(iVar8 + 0x1c);
  fVar13 = *(float *)(iVar8 + 0x20);
  fVar20 = *(float *)pauVar11[0x22];
  fVar19 = *(float *)(pauVar11[0x22] + 8);
  fVar17 = *(float *)(iVar8 + 0x14);
  fVar15 = *(float *)(iVar8 + 0x18);
  fVar21 = *(float *)pauVar11[0x23];
  fVar22 = *(float *)(pauVar11[0x23] + 4);
  *(ulong *)pauVar11[0x22] =
       CONCAT44(*(float *)(iVar8 + 0xc) * fVar16 + *(float *)(iVar8 + 0x10) * fVar18,
                *(float *)(iVar8 + 0xc) * fVar20 + *(float *)(iVar8 + 0x10) * fVar19);
  *(ulong *)(pauVar11[0x22] + 8) =
       CONCAT44(fVar17 * fVar16 + fVar15 * fVar18,fVar17 * fVar20 + fVar15 * fVar19);
  *(ulong *)pauVar11[0x23] =
       CONCAT44(fVar14 * fVar16 + fVar13 * fVar18 + fVar22,
                fVar14 * fVar20 + fVar13 * fVar19 + fVar21);
  (*DAT_0043dae8)(pauVar11 + 0x22);
  FUN_0023c0b8(param_2,param_1,0,param_3);
  iVar8 = *(int *)(pauVar11[0x3b] + 0xc) + -1;
  *(int *)(pauVar11[0x3b] + 0xc) = iVar8;
  uVar9 = *(undefined8 *)((int)pauVar11 + iVar8 * 0x18 + 0x240);
  uVar10 = *(undefined8 *)((int)pauVar11 + iVar8 * 0x18 + 0x248);
  *(undefined8 *)pauVar11[0x22] = *(undefined8 *)((int)pauVar11 + iVar8 * 0x18 + 0x238);
  *(undefined8 *)(pauVar11[0x22] + 8) = uVar9;
  *(undefined8 *)pauVar11[0x23] = uVar10;
  (*DAT_0043dae8)(pauVar11 + 0x22);
  uVar9 = *(undefined8 *)*pauVar12;
  uVar4 = *(undefined4 *)(*pauVar12 + 8);
  uVar5 = *(undefined4 *)(*pauVar12 + 0xc);
  iVar8 = *(int *)(pauVar11[0x3b] + 8);
  *(int *)*pauVar11 = (int)uVar9;
  *(int *)(*pauVar11 + 4) = (int)((ulong)uVar9 >> 0x20);
  *(undefined4 *)(*pauVar11 + 8) = uVar4;
  *(undefined4 *)(*pauVar11 + 0xc) = uVar5;
  uVar4 = *(undefined4 *)pauVar12[1];
  uVar5 = *(undefined4 *)(pauVar12[1] + 4);
  uVar6 = *(undefined4 *)(pauVar12[1] + 8);
  uVar7 = *(undefined4 *)(pauVar12[1] + 0xc);
  *(int *)(pauVar11[0x3b] + 8) = iVar8 + -1;
  *(undefined4 *)pauVar11[1] = uVar4;
  *(undefined4 *)(pauVar11[1] + 4) = uVar5;
  *(undefined4 *)(pauVar11[1] + 8) = uVar6;
  *(undefined4 *)(pauVar11[1] + 0xc) = uVar7;
  return;
}


// ==== FUN_00240b08 @ 00240b08 ====

void FUN_00240b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  lVar4 = FUN_00387080(param_2);
  bVar2 = false;
  if (lVar4 == 0xf) {
    lVar4 = FUN_003871c0(param_2);
    bVar2 = lVar4 == 0;
  }
  iVar6 = (int)param_2;
  uVar1 = uGpffff8656;
  if (bVar2) {
    FUN_0023bd70(param_2,*(undefined4 *)(iVar6 + 0x44));
    uVar1 = DAT_0040de46;
  }
  pauVar3 = (undefined1 (*) [16])(DAT_003beef0 + (uint)uVar1 * 0x60);
  auVar8 = _lqc2(*pauVar3);
  auVar9 = _lqc2(pauVar3[1]);
  auVar10 = _lqc2(pauVar3[2]);
  auVar11 = _lqc2(pauVar3[3]);
  auVar14 = _lqc2(pauVar3[4]);
  auVar16 = _lqc2(pauVar3[5]);
  DAT_0040de46 = DAT_0040de46 + 1;
  pauVar3 = (undefined1 (*) [16])(DAT_003beef0 + (uint)DAT_0040de46 * 0x60);
  *(undefined4 *)*pauVar3 = *(undefined4 *)(iVar6 + 0xc);
  uVar7 = *(undefined4 *)(iVar6 + 0x10);
  *(undefined4 *)(*pauVar3 + 8) = 0;
  *(undefined4 *)(*pauVar3 + 4) = uVar7;
  *(undefined4 *)(*pauVar3 + 0xc) = 0;
  *(undefined4 *)pauVar3[1] = *(undefined4 *)(iVar6 + 0x14);
  uVar7 = *(undefined4 *)(iVar6 + 0x18);
  *(undefined4 *)(pauVar3[1] + 8) = 0;
  *(undefined4 *)(pauVar3[1] + 4) = uVar7;
  *(undefined4 *)(pauVar3[1] + 0xc) = 0;
  *(undefined4 *)pauVar3[2] = 0;
  *(undefined4 *)(pauVar3[2] + 4) = 0;
  *(undefined4 *)(pauVar3[2] + 8) = 0x3f800000;
  *(undefined4 *)(pauVar3[2] + 0xc) = 0;
  *(undefined4 *)pauVar3[3] = *(undefined4 *)(iVar6 + 0x1c);
  uVar7 = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(pauVar3[3] + 0xc) = 0x3f800000;
  *(undefined4 *)(pauVar3[3] + 4) = uVar7;
  *(undefined4 *)(pauVar3[3] + 8) = 0;
  uVar5 = *(undefined8 *)(iVar6 + 0x2c);
  *(undefined8 *)pauVar3[4] = *(undefined8 *)(iVar6 + 0x24);
  *(undefined8 *)(pauVar3[4] + 8) = uVar5;
  uVar5 = *(undefined8 *)(iVar6 + 0x3c);
  *(undefined8 *)pauVar3[5] = *(undefined8 *)(iVar6 + 0x34);
  *(undefined8 *)(pauVar3[5] + 8) = uVar5;
  auVar12 = _lqc2(pauVar3[4]);
  auVar15 = _vmul(auVar14,auVar12);
  auVar12 = _lqc2(pauVar3[5]);
  auVar17 = _vadd(auVar16,auVar12);
  auVar12 = _lqc2(*pauVar3);
  auVar16 = _lqc2(pauVar3[1]);
  auVar13 = _lqc2(pauVar3[3]);
  _vmulabc(auVar8,auVar12);
  auVar14 = _vmaddbc(auVar9,auVar12);
  _vmulabc(auVar8,auVar16);
  auVar12 = _sqc2(auVar15);
  pauVar3[4] = auVar12;
  auVar16 = _vmaddbc(auVar9,auVar16);
  _vmulabc(auVar8,auVar13);
  auVar12 = _sqc2(auVar17);
  pauVar3[5] = auVar12;
  _vmaddabc(auVar9,auVar13);
  auVar9 = _vmaddbc(auVar11,auVar13);
  auVar12 = _vmove(auVar14);
  auVar8 = _vmove(auVar16);
  auVar9 = _vmove(auVar9);
  auVar12 = _sqc2(auVar12);
  *pauVar3 = auVar12;
  auVar12 = _sqc2(auVar8);
  pauVar3[1] = auVar12;
  auVar12 = _sqc2(auVar10);
  pauVar3[2] = auVar12;
  auVar12 = _sqc2(auVar9);
  pauVar3[3] = auVar12;
  FUN_0023c0b8(param_2,param_1,pauVar3,param_3);
  DAT_0040de46 = DAT_0040de46 - 1;
  return;
}


// ==== FUN_00240d10 @ 00240d10 ====

void FUN_00240d10(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int aiStack_f0 [32];
  int iStack_70;
  
  iVar4 = *(int *)(*(int *)*param_1 + 0x50);
  iStack_70 = 0;
  if ((DAT_003be8f0 & 4) == 0) {
    pcVar7 = FUN_002407f8;
  }
  else {
    pcVar7 = FUN_00240b08;
  }
  do {
    while( true ) {
      while( true ) {
        if (iVar4 == 0) {
          for (; 0 < iStack_70; iStack_70 = iStack_70 + -1) {
            (*pcVar7)(param_2,aiStack_f0[0],0xffffffffffffffff);
            iVar4 = 0;
            piVar3 = aiStack_f0;
            if (0 < iStack_70 + -1) {
              do {
                iVar4 = iVar4 + 1;
                *piVar3 = piVar3[1];
                piVar3 = piVar3 + 1;
              } while (iVar4 < iStack_70 + -1);
            }
          }
          return;
        }
        lVar2 = FUN_00387080(iVar4);
        bVar1 = false;
        if (lVar2 == 0x13) {
          lVar2 = FUN_003871c0(iVar4);
          bVar1 = lVar2 == 0;
        }
        if (!bVar1) break;
        iVar4 = *(int *)(iVar4 + 0x50);
      }
      iVar5 = **(int **)(iVar4 + 0x48);
      if (iVar5 < 0) break;
      iVar6 = 0;
      if ((0 < iStack_70) && (iVar5 <= **(int **)(aiStack_f0[0] + 0x48))) {
        iVar6 = 1;
        piVar3 = aiStack_f0;
        while ((piVar3 = piVar3 + 1, iVar6 < iStack_70 &&
               (**(int **)(iVar4 + 0x48) <= **(int **)(*piVar3 + 0x48)))) {
          iVar6 = iVar6 + 1;
        }
      }
      if (iVar6 < iStack_70) {
        piVar3 = aiStack_f0 + iStack_70;
        iVar5 = iStack_70;
        do {
          iVar5 = iVar5 + -1;
          *piVar3 = piVar3[-1];
          piVar3 = piVar3 + -1;
        } while (iVar6 < iVar5);
      }
      aiStack_f0[iVar6] = iVar4;
      iStack_70 = iStack_70 + 1;
      (*pcVar7)(param_2,iVar4,1);
      iVar4 = *(int *)(iVar4 + 0x50);
    }
    iVar5 = iStack_70 + -1;
    if (0 < iStack_70) {
      iVar6 = *(int *)(iVar4 + 0x54);
      while (**(int **)(aiStack_f0[iVar5] + 0x48) < (iVar6 << 0xf) >> 0xf) {
        (*pcVar7)(param_2,aiStack_f0[iVar5],0xffffffffffffffff);
        iVar5 = iStack_70;
        iStack_70 = iStack_70 + -1;
        if (iStack_70 < 1) break;
        iVar5 = iVar5 + -2;
        iVar6 = *(int *)(iVar4 + 0x54);
      }
    }
    (*pcVar7)(param_2,iVar4,param_3);
    iVar4 = *(int *)(iVar4 + 0x50);
  } while( true );
}


// ==== FUN_00240f78 @ 00240f78 ====

void FUN_00240f78(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)*param_1 + 0x50);
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    while( true ) {
      if ((iVar2 >> 4 & 1U) == 1) {
        lVar3 = FUN_00387080(piVar4);
        bVar1 = false;
        if (lVar3 == 0x13) {
          lVar3 = FUN_003871c0(piVar4);
          bVar1 = lVar3 == 0;
        }
        if (bVar1) {
          piVar4 = (int *)piVar4[0x14];
        }
        else if (*(int *)piVar4[0x12] < 0) {
          FUN_0023c6c8(piVar4,param_2,param_3);
          piVar4 = (int *)piVar4[0x14];
        }
        else {
          piVar4 = (int *)piVar4[0x14];
        }
      }
      else {
        piVar4 = (int *)piVar4[0x14];
      }
      if (piVar4 == (int *)0x0) break;
      iVar2 = *piVar4;
    }
  }
  return;
}


// ==== FUN_00241048 @ 00241048 ====

void FUN_00241048(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  iVar1 = *(int *)(*(int *)*param_1 + 0x50);
  do {
    if (iVar1 == 0) {
      return;
    }
    lVar4 = FUN_00387080(iVar1);
    bVar2 = false;
    if (lVar4 == 0xd) {
      lVar4 = FUN_003871c0(iVar1);
      bVar2 = lVar4 == 0;
    }
    if (bVar2) {
LAB_002410e4:
      bVar3 = true;
    }
    else {
      lVar4 = FUN_00387080(iVar1);
      bVar2 = false;
      if (lVar4 == 0x12) {
        lVar4 = FUN_003871c0(iVar1);
        bVar2 = lVar4 == 0;
      }
      bVar3 = false;
      if (bVar2) goto LAB_002410e4;
    }
    if (bVar3) {
      FUN_0023e3d0(iVar1);
      iVar1 = *(int *)(iVar1 + 0x50);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x50);
    }
  } while( true );
}


// ==== FUN_00241128 @ 00241128 ====

void FUN_00241128(undefined8 param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  if (((int *)*(int *)param_1 == (int *)0x0) ||
     (puVar3 = *(uint **)(*(int *)*(int *)param_1 + 0x50), puVar3 == (uint *)0x0)) {
    return;
  }
  uVar2 = puVar3[1];
  do {
    puVar1 = (uint *)puVar3[0x14];
    (**(code **)(uVar2 + 0xc))((int)puVar3 + (int)*(short *)(uVar2 + 8));
    FUN_002405e8(param_1,puVar3);
    if (param_2 != 0) {
      *puVar3 = *puVar3 & 0xff03ffff;
      FUN_0023b528(puVar3,1);
    }
    if (*(int *)(DAT_003be8e0 + 4) == 0) {
LAB_002411dc:
      uVar2 = puVar3[1];
    }
    else {
      if (DAT_0043db68 == 0) {
        FUN_00252b10();
        goto LAB_002411dc;
      }
      uVar2 = puVar3[1];
    }
    (**(code **)(uVar2 + 0x14))((int)puVar3 + (int)*(short *)(uVar2 + 0x10));
    if (puVar1 == (uint *)0x0) {
      return;
    }
    uVar2 = puVar1[1];
    puVar3 = puVar1;
  } while( true );
}


// ==== FUN_00241228 @ 00241228 ====

void FUN_00241228(undefined8 param_1)

{
  int *piVar1;
  
  FUN_00241128(param_1,0);
  piVar1 = (int *)param_1;
  if (*piVar1 == 0) {
    *piVar1 = 0;
  }
  else {
    FUN_00241ad8(*piVar1,3);
    *piVar1 = 0;
  }
  return;
}


// ==== FUN_00241268 @ 00241268 ====

undefined4 FUN_00241268(undefined4 *param_1)

{
  return *param_1;
}


// ==== FUN_00241270 @ 00241270 ====

void FUN_00241270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_002405e8(param_1,param_3);
  return;
}


// ==== FUN_00241290 @ 00241290 ====

undefined8 FUN_00241290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_00232230(*(int *)(*(int *)(*(int *)((int)param_4 + 0x48) + 8) + 4) + 8,param_4,
               *(undefined4 *)(*(int *)param_3 + 0xc));
  uVar2 = FUN_00240460(param_1,param_3,param_4);
  iVar3 = (int)uVar2;
  if (*(undefined2 **)(iVar3 + 8) != &DAT_003bfaf8) {
    FUN_002488d0(param_2,iVar3 + 8,uVar2);
  }
  *(int *)(DAT_0043df68[1] * 4 + *DAT_0043df68) = iVar3;
  iVar3 = *(int *)(DAT_0043df68[1] * 4 + *DAT_0043df68);
  iVar1 = *(int *)(iVar3 + 4);
  (**(code **)(iVar1 + 0xc))(iVar3 + *(short *)(iVar1 + 8));
  DAT_0043df68[1] = DAT_0043df68[1] + 1;
  return uVar2;
}


// ==== FUN_00241388 @ 00241388 ====

void FUN_00241388(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (int)param_4;
  piVar1 = *(int **)(iVar5 + 4);
  if (*piVar1 == 0) {
    if ((*(ushort *)(param_3 + 0x5a) & 1) == 0) {
      if ((piVar1[5] & 8U) == 0) {
        iVar5 = *(int *)(iVar5 + 4);
      }
      else {
        FUN_0023f858(param_3 + 0x24,piVar1[2]);
        iVar5 = *(int *)(iVar5 + 4);
      }
      if ((*(uint *)(iVar5 + 0x14) & 4) != 0) {
        puVar2 = *(undefined8 **)(iVar5 + 4);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        *(undefined8 *)(param_3 + 0xc) = *puVar2;
        *(undefined8 *)(param_3 + 0x14) = uVar3;
        *(undefined8 *)(param_3 + 0x1c) = uVar4;
      }
    }
  }
  else {
    FUN_00241270();
    FUN_00241290(param_1,param_2,param_4,param_5);
  }
  return;
}


// ==== FUN_00241480 @ 00241480 ====

void FUN_00241480(undefined8 param_1,int *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  
  puVar15 = *(uint **)(*(int *)*(undefined4 *)param_1 + 0x50);
  puVar14 = *(undefined4 **)(*param_2 + 8);
  if (puVar15 != (uint *)0x0) {
    uVar7 = puVar15[0x15];
    while (iVar11 = (int)(uVar7 << 0xf) >> 0xf, iVar11 < 0x4000) {
      if (puVar14 == (undefined4 *)0x0) {
LAB_002417e0:
        puVar2 = (uint *)puVar15[0x14];
        if (param_4 == 0) {
          FUN_00241270(param_1,param_3,puVar15);
        }
      }
      else {
        iVar1 = puVar14[4];
        if (iVar1 == iVar11) {
          lVar10 = FUN_00387080(puVar15);
          bVar5 = false;
          if (lVar10 == 0xd) {
            lVar10 = FUN_003871c0(puVar15);
            bVar5 = lVar10 == 0;
          }
          if (bVar5) {
LAB_002415e4:
            bVar6 = true;
          }
          else {
            lVar10 = FUN_00387080(puVar15);
            bVar5 = false;
            if (lVar10 == 0x12) {
              lVar10 = FUN_003871c0(puVar15);
              bVar5 = lVar10 == 0;
            }
            bVar6 = false;
            if (bVar5) goto LAB_002415e4;
          }
          if (bVar6) {
            if (*(int *)(puVar15[0x12] + 0x2c) != 0) {
              puVar14 = (undefined4 *)puVar14[2];
              puVar2 = (uint *)puVar15[0x14];
              goto LAB_00241858;
            }
            piVar8 = (int *)*puVar14;
          }
          else {
            piVar8 = (int *)*puVar14;
          }
          puVar2 = (uint *)puVar15[0x14];
          if (*piVar8 == 3) {
            piVar8 = (int *)puVar14[1];
            if (piVar8 == (int *)0x0) {
              iVar11 = param_2[1];
LAB_002417a0:
              FUN_00241388(param_1,param_3,puVar15,puVar14,iVar11);
            }
            else {
              if ((long)(short)piVar8[6] == (long)((int)(puVar15[0x15] << 1) >> 0x12)) {
                piVar9 = (int *)*piVar8;
              }
              else {
                if (*puVar15 >> 0x19 != 0x12) {
                  iVar11 = param_2[1];
                  goto LAB_002417a0;
                }
                piVar9 = (int *)*piVar8;
              }
              if (piVar9 == (int *)0x0) {
                if ((*(ushort *)((int)puVar15 + 0x5a) & 1) != 0) goto LAB_002417d0;
                if ((piVar8[5] & 8U) == 0) {
                  iVar11 = puVar14[1];
                }
                else {
                  iVar11 = piVar8[2];
LAB_00241748:
                  FUN_0023f858(puVar15 + 9,iVar11);
                  iVar11 = puVar14[1];
                }
                uVar7 = *(uint *)(iVar11 + 0x14);
              }
              else {
                iVar11 = *piVar9;
                if (iVar11 == 2) {
                  uVar7 = 0xf;
LAB_002416dc:
                  uVar3 = *puVar15;
                }
                else {
                  if (2 < iVar11) {
                    if (iVar11 == 4) {
                      uVar7 = 0xe;
                    }
                    else {
                      uVar7 = 3;
                      if (iVar11 == 5) {
                        uVar7 = 0xd;
                      }
                    }
                    goto LAB_002416dc;
                  }
                  uVar7 = 3;
                  if (iVar11 == 1) {
                    uVar7 = 0xc;
                    goto LAB_002416dc;
                  }
                  uVar3 = *puVar15;
                }
                if ((((uVar3 >> 0x19 != uVar7) || (*piVar8 != *(int *)(puVar15[0x12] + 8))) ||
                    ((long)(short)piVar8[6] != (long)((int)(puVar15[0x15] << 1) >> 0x12))) &&
                   (uVar3 >> 0x19 != 0x12)) {
                  iVar11 = param_2[1];
                  goto LAB_002417a0;
                }
                if ((*(ushort *)((int)puVar15 + 0x5a) & 1) != 0) goto LAB_002417d0;
                iVar11 = puVar14[1];
                if ((*(uint *)(iVar11 + 0x14) & 8) != 0) {
                  iVar11 = *(int *)(iVar11 + 8);
                  goto LAB_00241748;
                }
                uVar7 = *(uint *)(iVar11 + 0x14);
              }
              if ((uVar7 & 4) != 0) {
                puVar4 = *(undefined8 **)(iVar11 + 4);
                uVar12 = puVar4[1];
                uVar13 = puVar4[2];
                *(undefined8 *)(puVar15 + 3) = *puVar4;
                *(undefined8 *)(puVar15 + 5) = uVar12;
                *(undefined8 *)(puVar15 + 7) = uVar13;
              }
            }
          }
          else {
            FUN_00241270(param_1,param_3,puVar15);
          }
LAB_002417d0:
          puVar14 = (undefined4 *)puVar14[2];
        }
        else {
          if (iVar11 < iVar1) goto LAB_002417e0;
          puVar2 = puVar15;
          if (iVar1 < iVar11) {
            piVar8 = (int *)*puVar14;
            while( true ) {
              if (*piVar8 == 3) {
                FUN_00241290(param_1,param_3,puVar14,param_2[1]);
                puVar14 = (undefined4 *)puVar14[2];
              }
              else {
                puVar14 = (undefined4 *)puVar14[2];
              }
              if ((puVar14 == (undefined4 *)0x0) ||
                 ((int)(puVar15[0x15] << 0xf) >> 0xf <= (int)puVar14[4])) break;
              piVar8 = (int *)*puVar14;
            }
          }
        }
      }
LAB_00241858:
      puVar15 = puVar2;
      if (puVar15 == (uint *)0x0) goto LAB_00241860;
      uVar7 = puVar15[0x15];
    }
    if (puVar14 == (undefined4 *)0x0) {
      return;
    }
    if ((int)puVar14[4] < iVar11) {
      piVar8 = (int *)*puVar14;
      while( true ) {
        if (*piVar8 == 3) {
          FUN_00241290(param_1,param_3,puVar14,param_2[1]);
          puVar14 = (undefined4 *)puVar14[2];
        }
        else {
          puVar14 = (undefined4 *)puVar14[2];
        }
        if (puVar14 == (undefined4 *)0x0) {
          return;
        }
        if ((int)(puVar15[0x15] << 0xf) >> 0xf <= (int)puVar14[4]) break;
        piVar8 = (int *)*puVar14;
      }
    }
  }
LAB_00241860:
  if (puVar14 != (undefined4 *)0x0) {
    piVar8 = (int *)*puVar14;
    while( true ) {
      if (*piVar8 == 3) {
        FUN_00241290(param_1,param_3,puVar14,param_2[1]);
        puVar14 = (undefined4 *)puVar14[2];
      }
      else {
        puVar14 = (undefined4 *)puVar14[2];
      }
      if (puVar14 == (undefined4 *)0x0) break;
      piVar8 = (int *)*puVar14;
    }
  }
  return;
}


// ==== FUN_002418d8 @ 002418d8 ====

void FUN_002418d8(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x50)) {
    FUN_0023e6d8(iVar1,param_2);
  }
  return;
}


// ==== FUN_00241928 @ 00241928 ====

undefined8 FUN_00241928(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  int *piVar4;
  
  uVar2 = FUN_0024fa38(DAT_0043dee4,0x60);
  FUN_00386f98(uVar2,0x2e,0);
  puVar3 = (uint *)uVar2;
  puVar3[1] = (uint)&DAT_003e2340;
  FUN_003872c0(puVar3 + 2);
  puVar3[0x12] = 0xbaadf00d;
  puVar3[0x16] = puVar3[0x16] & 0xfff0ffff;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  *(undefined2 *)(puVar3 + 0x16) = 0;
  puVar3[0xc] = 0x3f800000;
  puVar3[3] = 0x3f800000;
  puVar3[6] = 0x3f800000;
  puVar3[9] = 0x3f800000;
  puVar3[10] = 0x3f800000;
  puVar3[0xb] = 0x3f800000;
  FUN_00387140(uVar2,1);
  *puVar3 = *puVar3 & 0xffffffdf;
  puVar3[0x15] = puVar3[0x15] | 0x7ffe0000;
  puVar3[0x16] = puVar3[0x16] & 0xffdfffff | 0x100000;
  puVar3[0x17] = 0;
  piVar4 = (int *)param_1;
  *piVar4 = (int)puVar3;
  *puVar3 = *puVar3 & 0xffffffef;
  *(uint *)*piVar4 = *(uint *)*piVar4 & 0xff03ffff | 0x40000;
  iVar1 = *(int *)(*piVar4 + 4);
  (**(code **)(iVar1 + 0xc))(*piVar4 + (int)*(short *)(iVar1 + 8));
  *(uint *)(*piVar4 + 0x54) = *(uint *)(*piVar4 + 0x54) | 0x1ffff;
  *(undefined4 *)(*piVar4 + 0x50) = 0;
  *(undefined4 *)(*piVar4 + 0x4c) = 0;
  return param_1;
}


// ==== FUN_00241ad8 @ 00241ad8 ====

void FUN_00241ad8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(*(int *)param_1 + 0x48) = 0;
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(iVar1 + 4);
  (**(code **)(iVar2 + 0x1c))(iVar1 + *(short *)(iVar2 + 0x18));
  if ((param_2 & 1) != 0) {
    FUN_00250198(DAT_0043dee0,param_1,4);
  }
  return;
}


// ==== FUN_00241b40 @ 00241b40 ====

void FUN_00241b40(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (DAT_0040eb64 == (undefined1 *)0x0) {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    puVar4 = (undefined4 *)(param_2 + 0x70000000 + param_1 * -0x10);
    DAT_0040eb64 = (undefined1 *)register0x000001d0;
    DAT_0040eb68 = param_1;
    for (; param_1 != 0; param_1 = param_1 + -1) {
      uVar1 = *(undefined8 *)register0x000001d0;
      uVar2 = *(undefined4 *)((int)register0x000001d0 + 8);
      uVar3 = *(undefined4 *)((int)register0x000001d0 + 0xc);
      register0x000001d0 = (BADSPACEBASE *)((int)register0x000001d0 + 0x10);
      *puVar4 = (int)uVar1;
      puVar4[1] = (int)((ulong)uVar1 >> 0x20);
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 4;
    }
    EI();
  }
  return;
}


// ==== FUN_00241bc0 @ 00241bc0 ====

void FUN_00241bc0(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_0040eb64 != (undefined4 *)0x0) {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    for (; DAT_0040eb68 != 0; DAT_0040eb68 = DAT_0040eb68 + -1) {
      uVar1 = *(undefined8 *)register0x000001d0;
      uVar2 = *(undefined4 *)((int)register0x000001d0 + 8);
      uVar3 = *(undefined4 *)((int)register0x000001d0 + 0xc);
      register0x000001d0 = (BADSPACEBASE *)((int)register0x000001d0 + 0x10);
      *DAT_0040eb64 = (int)uVar1;
      DAT_0040eb64[1] = (int)((ulong)uVar1 >> 0x20);
      DAT_0040eb64[2] = uVar2;
      DAT_0040eb64[3] = uVar3;
      DAT_0040eb64 = DAT_0040eb64 + 4;
    }
    DAT_0040eb64 = (undefined4 *)0x0;
    DAT_0040eb68 = 0;
    EI();
  }
  return;
}


// ==== FUN_00241c40 @ 00241c40 ====

void FUN_00241c40(void)

{
  return;
}


// ==== FUN_00241c48 @ 00241c48 ====

void FUN_00241c48(undefined8 param_1,uint *param_2)

{
  if (((int)*param_2 >> 1 & 1U) == 0) {
    *param_2 = *param_2 | 2;
    (**(code **)(param_2[1] + 0x74))((int)param_2 + (int)*(short *)(param_2[1] + 0x70));
  }
  return;
}


// ==== FUN_00241c88 @ 00241c88 ====

/* WARNING: Removing unreachable block (ram,0x00241d10) */

void FUN_00241c88(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_00252b10(DAT_003be8e0);
  lVar4 = FUN_0024fd18(DAT_0043dee4);
  uVar2 = DAT_003bfab0;
  DAT_003bfab0 = FUN_00241c48;
  if (lVar4 != 0) {
    uVar1 = *(uint *)lVar4;
    while( true ) {
      if (((uVar1 >> 0x12 & 0x3f) != 0) && (((int)uVar1 >> 1 & 1U) == 0)) {
        puVar5 = (uint *)lVar4;
        *puVar5 = uVar1 & 0xfffffffd | 2;
        (**(code **)(puVar5[1] + 0x74))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x70));
      }
      lVar4 = FUN_0024fb00(DAT_0043dee4,lVar4);
      if (lVar4 == 0) break;
      uVar1 = *(uint *)lVar4;
    }
  }
  FUN_0021afe0();
  DAT_003bfab0 = (code *)uVar2;
  lVar4 = FUN_0024fd18(DAT_0043dee4);
  uVar3 = DAT_0040de48;
  uGpffff8658 = 1;
  if (lVar4 != 0) {
    iVar6 = *(int *)lVar4;
    while( true ) {
      if ((iVar6 >> 1 & 1U) == 0) {
        iVar6 = (int)lVar4;
        (**(code **)(*(int *)(iVar6 + 4) + 0x5c))(iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x58));
        (**(code **)(*(int *)(iVar6 + 4) + 100))(iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x60));
      }
      lVar4 = FUN_0024fb00(DAT_0043dee4,lVar4);
      if (lVar4 == 0) break;
      iVar6 = *(int *)lVar4;
    }
  }
  uGpffff8658 = uVar3;
  lVar4 = FUN_0024fd18(DAT_0043dee4);
  if (lVar4 != 0) {
    uVar1 = *(uint *)lVar4;
    while( true ) {
      puVar5 = (uint *)lVar4;
      if (((int)uVar1 >> 1 & 1U) == 0) {
        (**(code **)(puVar5[1] + 0x54))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x50));
      }
      else {
        *puVar5 = uVar1 & 0xfffffffd;
      }
      lVar4 = FUN_0024fb00(DAT_0043dee4,lVar4);
      if (lVar4 == 0) break;
      uVar1 = *(uint *)lVar4;
    }
  }
  FUN_00252b10(DAT_003be8e0);
  FUN_002528a0();
  FUN_00252a10();
  FUN_00252958();
  FUN_00259950();
  return;
}


// ==== FUN_00241ea0 @ 00241ea0 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0x003bfaf8 : 0x00241fcc */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00241ea0(void)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint *puVar10;
  short *psStack_a0;
  short *apsStack_90 [4];
  
  puVar2 = DAT_003bfab0;
  DAT_003bfab0 = &LAB_00241e98;
  lVar4 = FUN_0024fd18(DAT_0043dee4);
  if (lVar4 == 0) {
LAB_002420cc:
    lVar4 = FUN_0024fd18(DAT_0043dee4);
    if (lVar4 != 0) {
      iVar3 = *(int *)((int)lVar4 + 4);
      while( true ) {
        (**(code **)(iVar3 + 0x74))((int)lVar4 + (int)*(short *)(iVar3 + 0x70));
        lVar4 = FUN_0024fb00(DAT_0043dee4,lVar4);
        if (lVar4 == 0) break;
        iVar3 = *(int *)((int)lVar4 + 4);
      }
    }
    FUN_0021afe0();
    DAT_003bfab0 = puVar2;
    return;
  }
  uVar7 = *(uint *)lVar4;
  do {
    uVar9 = 0;
    if ((uVar7 >> 0x19) - 0x2b < 3) {
      uVar9 = (int)uVar7 >> 4 & 1;
    }
    if (uVar9 == 0) {
      uVar9 = 0;
      if ((uVar7 >> 0x19) - 0xc < 8) {
        uVar9 = (int)uVar7 >> 4 & 1;
      }
      if (uVar9 != 0) goto LAB_00241f54;
    }
    else {
LAB_00241f54:
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      puVar10 = (uint *)lVar4;
      uVar7 = 0;
      if ((*puVar10 >> 0x19) - 0xc < 8) {
        uVar7 = (int)*puVar10 >> 4 & 1;
      }
      if (uVar7 == 0) {
        lVar6 = (**(code **)(puVar10[1] + 0x8c))((int)puVar10 + (int)*(short *)(puVar10[1] + 0x88));
        if (lVar6 == 0) {
          lVar6 = 0x40de10;
        }
        FUN_00253ff0(apsStack_90,lVar6);
        *apsStack_90[0] = *apsStack_90[0] + 1;
        DAT_003bfaf8 = DAT_003bfaf8 + -1;
        if (DAT_003bfaf8 == 0) {
          FUN_00250198(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
        }
        psStack_a0 = apsStack_90[0];
        sVar1 = *apsStack_90[0];
        *apsStack_90[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
        }
      }
      else {
        uVar5 = FUN_0023e5f0(lVar4);
        lVar6 = FUN_00387080(uVar5);
        if (lVar6 == 0x12) {
          FUN_003871c0(uVar5);
          psVar8 = (short *)puVar10[2];
        }
        else {
          psVar8 = (short *)puVar10[2];
        }
        *psVar8 = *psVar8 + 1;
        DAT_003bfaf8 = DAT_003bfaf8 + -1;
        if (DAT_003bfaf8 == 0) {
          FUN_00250198(DAT_0043dee0,&DAT_003bfaf8,DAT_003bfafc + 9);
        }
        psStack_a0 = (short *)puVar10[2];
      }
      sVar1 = *psStack_a0;
      *psStack_a0 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psStack_a0,(ushort)psStack_a0[2] + 9);
      }
    }
    lVar4 = FUN_0024fb00(DAT_0043dee4,lVar4);
    if (lVar4 == 0) goto LAB_002420cc;
    uVar7 = *(uint *)lVar4;
  } while( true );
}


// ==== FUN_00242150 @ 00242150 ====

void FUN_00242150(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = FUN_0024fd18(DAT_0043dee4);
  DAT_003bfab0 = &LAB_00242148;
  if (lVar2 != 0) {
    uVar4 = *(uint *)lVar2;
    while( true ) {
      uVar5 = 0;
      if ((uVar4 >> 0x19) - 0x2b < 3) {
        uVar5 = (int)uVar4 >> 4 & 1;
      }
      if (((uVar5 != 0) && ((uVar4 >> 6 & 0xfff) != 0)) && (*(int *)((int)lVar2 + 0x24) == param_1))
      {
        DAT_003beebc = (int)lVar2;
        lVar3 = FUN_0024fd18(DAT_0043dee4);
        if (lVar3 != 0) {
          iVar1 = *(int *)((int)lVar3 + 4);
          while( true ) {
            (**(code **)(iVar1 + 0x74))((int)lVar3 + (int)*(short *)(iVar1 + 0x70));
            lVar3 = FUN_0024fb00(DAT_0043dee4,lVar3);
            if (lVar3 == 0) break;
            iVar1 = *(int *)((int)lVar3 + 4);
          }
        }
        FUN_0021afe0();
      }
      lVar2 = FUN_0024fb00(DAT_0043dee4,lVar2);
      if (lVar2 == 0) break;
      uVar4 = *(uint *)lVar2;
    }
  }
  return;
}


// ==== FUN_00242260 @ 00242260 ====

void FUN_00242260(int param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = 0;
  lVar5 = 0;
  uVar3 = 0;
  if (*(short *)(param_1 + 0x12) != 0) {
    if (*(short *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      do {
        iVar2 = *(int *)(iVar4 * 4 + iVar2);
        if ((iVar2 != 0) && (lVar1 = FUN_00232140(DAT_0043df68,iVar2), lVar1 == 0)) {
          if (param_3 == 0) {
            if ((((param_4 & 3) == 1) && ((uint)param_4 >> 0x11 == 0x1f6)) ||
               ((uint)param_4 >> 0x11 == 0x1f5)) {
              FUN_0023de70(iVar2,0x40,param_4,0);
              uVar3 = uVar3 + 1;
            }
            else if ((param_4 & 3) == 1) {
              FUN_0023de70(iVar2,0x40,param_4,0);
              if (lVar5 == 0) {
                lVar5 = FUN_0023de70(iVar2,0x20000,param_4,1);
                goto LAB_002423a8;
              }
              uVar3 = uVar3 + 1;
            }
            else {
              uVar3 = uVar3 + 1;
            }
          }
          else if (param_3 == 1) {
            if ((param_4 & 3) == 1) {
              FUN_0023de70(iVar2,0x80,param_4,0);
LAB_002423a8:
              uVar3 = uVar3 + 1;
            }
            else {
              uVar3 = uVar3 + 1;
            }
          }
          else {
            uVar3 = uVar3 + 1;
          }
        }
        iVar4 = iVar4 + 1;
        if ((int)(uint)*(ushort *)(param_1 + 0x12) <= iVar4) {
          return;
        }
        if (uVar3 == *(ushort *)(param_1 + 0x10)) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x14);
      } while( true );
    }
  }
  return;
}


// ==== FUN_00242408 @ 00242408 ====

void FUN_00242408(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_3 < 2) {
    iVar3 = (int)param_1;
    iVar4 = 0;
    if ((*(short *)(iVar3 + 10) != 0) && (*(short *)(iVar3 + 8) != 0)) {
      iVar2 = *(int *)(iVar3 + 0xc);
      while( true ) {
        iVar2 = *(int *)(iVar4 * 4 + iVar2);
        if (iVar2 == 0) {
          uVar1 = *(ushort *)(iVar3 + 10);
        }
        else {
          if (param_3 == 0) {
            FUN_00242500(param_1,iVar2,0x40,param_4);
          }
          else if (param_3 == 1) {
            FUN_00242500(param_1,iVar2,0x80,param_4);
          }
          uVar5 = uVar5 + 1;
          uVar1 = *(ushort *)(iVar3 + 10);
        }
        iVar4 = iVar4 + 1;
        if (((int)(uint)uVar1 <= iVar4) || (uVar5 == *(ushort *)(iVar3 + 8))) break;
        iVar2 = *(int *)(iVar3 + 0xc);
      }
    }
  }
  return;
}


// ==== FUN_00242500 @ 00242500 ====

void FUN_00242500(undefined8 param_1,uint *param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  uVar8 = 0;
  if ((*param_2 >> 0x19) - 0xc < 8) {
    uVar8 = (int)*param_2 >> 4 & 1;
  }
  if (uVar8 == 0) {
    uVar8 = param_2[1];
  }
  else {
    lVar4 = FUN_0023ddb0(param_2,param_3);
    if (lVar4 == 0) {
      return;
    }
    uVar8 = param_2[1];
  }
  iVar3 = (**(code **)(uVar8 + 0x24))((int)param_2 + (int)*(short *)(uVar8 + 0x20));
  uVar8 = 0;
  if ((*param_2 >> 0x19) - 0xc < 8) {
    uVar8 = (int)*param_2 >> 4 & 1;
  }
  if ((((uVar8 != 0) || ((*(uint *)(iVar3 + 0x10) & param_3) != 0)) ||
      (iVar3 = *(int *)(iVar3 + 8), iVar3 == 0)) ||
     (iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x24))
                        (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x20)),
     (*(uint *)(iVar3 + 0x10) & param_3) != 0)) {
    puVar10 = &DAT_003beec0;
    iVar3 = 5;
    do {
      if (((*puVar10 & param_3) != 0) &&
         (lVar4 = FUN_0024ee48(param_2,&DAT_0043dc18 + puVar10[1],0), lVar4 != 0)) {
        puVar9 = (uint *)lVar4;
        uVar8 = (int)*puVar9 >> 4 & 1;
        if (uVar8 != 0) {
          uVar7 = 0;
          if ((*puVar9 >> 0x19) - 0x2b < 3) {
            uVar7 = uVar8;
          }
          if (uVar7 != 0) {
            puVar1 = (uint *)puVar9[8];
            if (puVar1 != param_2) {
              lVar4 = (**(code **)(puVar9[1] + 0x84))
                                ((int)puVar9 + (int)*(short *)(puVar9[1] + 0x80),param_2);
              puVar9 = (uint *)lVar4;
              FUN_0023e698(puVar9[9]);
              iVar2 = *(int *)(puVar9[9] + 4);
              (**(code **)(iVar2 + 0x14))(puVar9[9] + (int)*(short *)(iVar2 + 0x10));
              puVar9[9] = (uint)puVar1;
              *(short *)(puVar1 + 0x16) = (short)puVar1[0x16] + 1;
              iVar2 = *(int *)(puVar9[9] + 4);
              (**(code **)(iVar2 + 0xc))(puVar9[9] + (int)*(short *)(iVar2 + 8));
              *puVar9 = *puVar9 & 0xff03ffff | 0x40000;
            }
            iVar2 = *(int *)((int)lVar4 + 4);
            uVar5 = (**(code **)(iVar2 + 0x94))((int)lVar4 + (int)*(short *)(iVar2 + 0x90));
            uVar6 = FUN_00386860(DAT_0043df68);
            FUN_00232aa8(uVar6,param_2,lVar4,uVar5,param_4);
          }
        }
      }
      iVar3 = iVar3 + -1;
      puVar10 = puVar10 + 2;
    } while (-1 < iVar3);
  }
  return;
}


// ==== FUN_00242778 @ 00242778 ====

void FUN_00242778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)param_2;
  uVar2 = uVar1 >> 10 & 0x7f;
  uVar3 = uVar1 >> 2 & 0xff;
  FUN_00242260(param_1,uVar1 >> 0x11,uVar2,param_2,uVar3,param_3);
  FUN_00242408(param_1,uVar1 >> 0x11,uVar2,param_2,uVar3);
  return;
}


// ==== FUN_00242800 @ 00242800 ====

void FUN_00242800(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar4 = 0;
  if (0 < *(int *)(iVar5 + 0x24)) {
    iVar3 = *(int *)(iVar5 + 0x28);
    while( true ) {
      iVar2 = iVar4 * 4;
      bVar1 = iVar4 == 0;
      iVar4 = iVar4 + 1;
      FUN_00242778(param_1,*(undefined4 *)(iVar2 + iVar3),bVar1);
      if (*(int *)(iVar5 + 0x24) <= iVar4) break;
      iVar3 = *(int *)(iVar5 + 0x28);
    }
  }
  *(undefined4 *)(iVar5 + 0x24) = 0;
  return;
}


// ==== FUN_00242870 @ 00242870 ====

undefined4 FUN_00242870(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    iVar3 = FUN_0035ccd8(param_1);
    iVar4 = FUN_0035ccd8(param_2);
    if (iVar3 == iVar4) {
      iVar4 = 0;
      if (0 < iVar3) {
        pcVar5 = (char *)param_1;
        do {
          cVar1 = *pcVar5;
          lVar6 = (long)cVar1;
          cVar2 = *(char *)((int)param_2 + iVar4);
          lVar8 = (long)cVar2;
          if (lVar6 != lVar8) {
            if ((int)cVar1 - 0x61U < 0x1a) {
              lVar6 = (long)((cVar1 + -0x20) * 0x1000000 >> 0x18);
            }
            else if (lVar6 == 0x5c) {
              lVar6 = 0x2f;
            }
            if (lVar6 != lVar8) {
              if ((int)cVar2 - 0x61U < 0x1a) {
                lVar7 = (long)((cVar2 + -0x20) * 0x1000000 >> 0x18);
              }
              else {
                lVar7 = 0x2f;
                if (lVar8 != 0x5c) {
                  lVar7 = lVar8;
                }
              }
              if (lVar6 != lVar7) {
                return 0;
              }
            }
          }
          iVar4 = iVar4 + 1;
          pcVar5 = (char *)param_1 + iVar4;
        } while (iVar4 < iVar3);
      }
      return 1;
    }
  }
  return 0;
}


// ==== FUN_00242968 @ 00242968 ====

undefined8 FUN_00242968(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  piVar1 = (int *)*param_2;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      *(int *)param_1 = 0;
      return param_1;
    }
    lVar3 = FUN_00242870(*(int *)(*piVar1 + 4) + 8,*param_3 + 8);
    if (lVar3 == 1) break;
    piVar1 = (int *)piVar1[1];
  }
  iVar2 = *piVar1;
  *(int *)param_1 = iVar2;
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_00244cd8();
  return param_1;
}


// ==== FUN_00242a10 @ 00242a10 ====

void FUN_00242a10(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == param_2) {
    if (piVar1 != (int *)0x0) {
      iVar2 = piVar1[1];
      FUN_00250198(DAT_0043dee0,piVar1,8);
      *param_1 = iVar2;
    }
  }
  else {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      bVar3 = false;
      if ((int *)piVar1[1] != (int *)0x0) {
        bVar3 = *(int *)piVar1[1] == param_2;
      }
      if (bVar3) {
        iVar2 = piVar1[1];
        if (iVar2 != 0) {
          piVar1[1] = *(int *)(iVar2 + 4);
        }
        FUN_00250198(DAT_0043dee0,iVar2,8);
        return;
      }
    }
  }
  return;
}


// ==== FUN_00242ae8 @ 00242ae8 ====

void FUN_00242ae8(undefined8 param_1,int *param_2)

{
  long lVar1;
  int aiStack_30 [4];
  
  aiStack_30[0] = *param_2;
  if (aiStack_30[0] != 0) {
    FUN_00244cd8();
  }
  FUN_00244df8(aiStack_30);
  if ((*param_2 != 0) && (lVar1 = FUN_00244ce8(), lVar1 == 0)) {
    FUN_00244cf8(*param_2);
  }
  return;
}


// ==== FUN_00242b48 @ 00242b48 ====

undefined8 FUN_00242b48(undefined8 param_1)

{
  long lVar1;
  int aiStack_30 [4];
  
  FUN_00242968(aiStack_30);
  if ((aiStack_30[0] == 0) ||
     ((*(int *)(aiStack_30[0] + 8) != 4 && (*(int *)(aiStack_30[0] + 8) != 5)))) {
    *(int *)param_1 = 0;
    if ((aiStack_30[0] != 0) && (lVar1 = FUN_00244ce8(), lVar1 == 0)) {
      FUN_00244cf8(aiStack_30[0]);
    }
  }
  else {
    *(int *)param_1 = aiStack_30[0];
    if (aiStack_30[0] != 0) {
      FUN_00244cd8();
    }
    if ((aiStack_30[0] != 0) && (lVar1 = FUN_00244ce8(), lVar1 == 0)) {
      FUN_00244cf8(aiStack_30[0]);
    }
  }
  return param_1;
}


// ==== FUN_00242bf0 @ 00242bf0 ====

undefined8 FUN_00242bf0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int aiStack_80 [4];
  undefined4 *puStack_70;
  
  FUN_00242968(aiStack_80);
  if (aiStack_80[0] == 0) {
    lVar2 = FUN_00250058(DAT_0043dee0,0x18);
    puVar3 = (undefined4 *)lVar2;
    *puVar3 = 0;
    FUN_00387308(puVar3 + 1,param_3);
    puVar3[3] = 0;
    puVar3[2] = 1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puStack_70 = puVar3;
    if (lVar2 != 0) {
      FUN_00244cd8(lVar2);
    }
    puVar1 = (undefined4 *)FUN_00250058(DAT_0043dee0,8);
    puVar1[1] = 0;
    *puVar1 = puVar3;
    puVar1[1] = *param_2;
    *param_2 = puVar1;
    *(int *)param_1 = (int)puStack_70;
    if (puStack_70 != (undefined4 *)0x0) {
      FUN_00244cd8();
    }
    if ((puStack_70 != (undefined4 *)0x0) && (lVar2 = FUN_00244ce8(), lVar2 == 0)) {
      FUN_00244cf8(puStack_70);
    }
    if ((aiStack_80[0] != 0) && (lVar2 = FUN_00244ce8(), lVar2 == 0)) {
      FUN_00244cf8(aiStack_80[0]);
    }
  }
  else {
    *(int *)param_1 = aiStack_80[0];
    if (aiStack_80[0] != 0) {
      FUN_00244cd8();
    }
    if ((aiStack_80[0] != 0) && (lVar2 = FUN_00244ce8(), lVar2 == 0)) {
      FUN_00244cf8(aiStack_80[0]);
    }
  }
  return param_1;
}


// ==== FUN_00242d50 @ 00242d50 ====

undefined4 FUN_00242d50(undefined8 param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int aiStack_90 [4];
  short *apsStack_80 [4];
  
  iVar5 = 0;
  uVar6 = 1;
  if (0 < *(int *)(*(int *)(*param_2 + 0x10) + 0x28)) {
    iVar4 = *param_2;
    while( true ) {
      FUN_00253ff0(apsStack_80,
                   *(undefined4 *)(iVar5 * 0x10 + *(int *)(*(int *)(iVar4 + 0x10) + 0x2c)));
      FUN_00242b48(aiStack_90,param_1,apsStack_80);
      bVar2 = aiStack_90[0] == 0;
      if ((aiStack_90[0] != 0) && (lVar3 = FUN_00244ce8(), lVar3 == 0)) {
        FUN_00244cf8(aiStack_90[0]);
      }
      sVar1 = *apsStack_80[0];
      *apsStack_80[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_80[0],(ushort)apsStack_80[0][2] + 9);
      }
      if (bVar2) break;
      iVar5 = iVar5 + 1;
      if (*(int *)(*(int *)(*param_2 + 0x10) + 0x28) <= iVar5) goto LAB_00242e40;
      iVar4 = *param_2;
    }
    uVar6 = 0;
  }
LAB_00242e40:
  if ((*param_2 != 0) && (lVar3 = FUN_00244ce8(), lVar3 == 0)) {
    FUN_00244cf8(*param_2);
  }
  return uVar6;
}


// ==== FUN_00242e90 @ 00242e90 ====

void FUN_00242e90(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  int *piStack_d0;
  int *apiStack_b0 [4];
  
  piVar5 = (int *)param_1;
  piStack_d0 = (int *)*piVar5;
  do {
    bVar3 = false;
    for (; piStack_d0 != (int *)0x0; piStack_d0 = (int *)piStack_d0[1]) {
      piVar1 = (int *)*piStack_d0;
      if (piVar1 != (int *)0x0) {
        FUN_00244cd8();
      }
      while( true ) {
        while (iVar2 = piVar1[2], iVar2 == 1) {
          piVar1[2] = 2;
          apiStack_b0[0] = piVar1;
          if (piVar1 != (int *)0x0) {
            FUN_00244cd8();
          }
          (*DAT_0043da90)(piVar1[1] + 8,apiStack_b0);
          piStack_d0 = (int *)*piVar5;
          apiStack_b0[0] = piStack_d0;
        }
        if (iVar2 == 2) break;
        if (iVar2 == 3) {
          apiStack_b0[0] = piVar1;
          if (piVar1 != (int *)0x0) {
            FUN_00244cd8();
          }
          lVar4 = FUN_00242d50(param_1,apiStack_b0);
          if (lVar4 == 0) break;
          bVar3 = true;
          piVar1[2] = 4;
          FUN_00231358(piVar1[4] + 8,piVar1[4],piVar1[5]);
          apiStack_b0[0] = piVar1;
          if (piVar1 != (int *)0x0) {
            FUN_00244cd8();
          }
          FUN_00242ae8(param_1,apiStack_b0);
          piStack_d0 = (int *)*piVar5;
          apiStack_b0[0] = piStack_d0;
        }
        else {
          if (iVar2 - 4U < 2) break;
          piStack_d0 = (int *)*piVar5;
          apiStack_b0[0] = piStack_d0;
        }
      }
      if ((piVar1 != (int *)0x0) && (lVar4 = FUN_00244ce8(), lVar4 == 0)) {
        FUN_00244cf8(piVar1);
      }
    }
    if (!bVar3) {
      return;
    }
    piStack_d0 = (int *)*piVar5;
  } while( true );
}


// ==== FUN_00243060 @ 00243060 ====

void FUN_00243060(undefined8 param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar4 = (int)param_4;
    iVar5 = (int)param_3;
    if (*(int *)(iVar4 + 0x14) != 0) {
      *(int *)(iVar4 + 0x14) = iVar5 + *(int *)(iVar4 + 0x14);
    }
    FUN_00230b70(*(int *)(iVar4 + 0x14) + 8,param_3,param_4,param_5);
    uVar1 = *(undefined4 *)(iVar4 + 0x14);
    iVar2 = *param_2;
    *(int *)(iVar2 + 0x14) = (int)param_5;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(int *)(iVar2 + 0xc) = iVar5;
    *(undefined4 *)(*param_2 + 8) = 3;
    if (*(int *)(iVar4 + 0x14) != 0) {
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) - iVar5;
    }
    (*DAT_0043da98)(param_4);
  }
  if ((*param_2 != 0) && (lVar3 = FUN_00244ce8(), lVar3 == 0)) {
    FUN_00244cf8(*param_2);
  }
  return;
}


// ==== FUN_00243140 @ 00243140 ====

/* WARNING: Removing unreachable block (ram,0x002438d8) */
/* WARNING: Removing unreachable block (ram,0x00243634) */
/* WARNING: Removing unreachable block (ram,0x00243654) */
/* WARNING: Removing unreachable block (ram,0x002438fc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00243140(int *param_1)

{
  bool bVar1;
  ushort uVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  int **ppiVar6;
  int **ppiVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  int **ppiVar14;
  int **ppiVar15;
  int **ppiVar16;
  int **ppiVar17;
  int *piStack_220;
  int **ppiStack_208;
  int *apiStack_204 [5];
  int *apiStack_1f0 [4];
  int *piStack_1e0;
  undefined4 uStack_1dc;
  int *piStack_1d0;
  int *piStack_1cc;
  int *piStack_1c8;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_b0;
  int iStack_ac;
  int *piStack_a8;
  int **ppiStack_a4;
  
  piStack_b0 = param_1;
  FUN_00242e90(DAT_0043df7c);
  if (DAT_0043df50 != 0) {
    iVar8 = DAT_0043df84[2];
    if (iVar8 != *DAT_0043df84 * 8 + DAT_0043df84[2]) {
      do {
        if ((*(int *)(iVar8 + 4) != 3) && (*(int *)(iVar8 + 4) != 2)) {
          bVar1 = false;
          goto LAB_0024323c;
        }
        iVar8 = iVar8 + 8;
      } while (iVar8 != *DAT_0043df84 * 8 + DAT_0043df84[2]);
    }
    bVar1 = true;
LAB_0024323c:
    if (!bVar1) {
      return;
    }
  }
  iStack_ac = piStack_b0[1];
  piStack_220 = (int *)piStack_b0[3];
  piStack_a8 = piStack_b0 + 1;
  do {
    piVar13 = DAT_0043df84;
    apiStack_204[2] = (int *)(piStack_a8[2] + piStack_b0[1] * 4);
    apiStack_204[1] = (int *)piStack_a8[2];
    if (piStack_220 == apiStack_204[2]) {
      if (DAT_0043df50 != 0) {
        ppiVar15 = apiStack_204;
        iVar8 = 1;
        do {
          iVar8 = iVar8 + -1;
          FUN_003872c0(ppiVar15);
          ppiVar15[1] = (int *)0x0;
          ppiVar15 = ppiVar15 + 2;
        } while (iVar8 != -1);
        ppiStack_a4 = (int **)(piVar13 + 3);
        *piVar13 = 0;
        piVar13[1] = 0;
        ppiStack_208 = (int **)piVar13[2];
        piVar13[2] = (int)ppiStack_a4;
        if (ppiStack_208 == ppiStack_a4) {
          ppiStack_208 = apiStack_204;
        }
        iVar8 = 1;
        ppiVar15 = apiStack_204;
        ppiVar14 = apiStack_1f0;
        do {
          iVar8 = iVar8 + -1;
          FUN_003872c0(ppiVar14);
          ppiVar17 = ppiStack_a4;
          ppiVar14[1] = (int *)0x0;
          ppiVar14 = ppiVar14 + 2;
        } while (iVar8 != -1);
        FUN_003872c0(&piStack_1e0);
        uStack_1dc = 0;
        FUN_00387398(apiStack_1f0 + 2,&piStack_1e0);
        apiStack_1f0[3] = (int *)uStack_1dc;
        FUN_00387328(&piStack_1e0,2);
        ppiVar16 = apiStack_1f0;
        ppiVar14 = ppiStack_a4;
        ppiVar7 = ppiStack_a4;
        while (ppiVar6 = ppiVar15, ppiStack_a4 = ppiVar14, ppiVar7 != (int **)(piVar13 + 7)) {
          FUN_00387398(ppiVar16,ppiVar17);
          ppiVar16[1] = ppiVar17[1];
          ppiVar17 = ppiVar17 + 2;
          ppiVar16 = ppiVar16 + 2;
          ppiVar14 = ppiStack_a4;
          ppiVar7 = ppiVar17;
        }
        for (; ppiVar17 = apiStack_1f0, ppiVar6 != apiStack_204 + 4; ppiVar6 = ppiVar6 + 2) {
          FUN_00387398(ppiVar14,ppiVar6);
          ppiVar14[1] = ppiVar6[1];
          ppiVar14 = ppiVar14 + 2;
        }
        for (; ppiVar17 != &piStack_1e0; ppiVar17 = ppiVar17 + 2) {
          FUN_00387398(ppiVar15,ppiVar17);
          ppiVar15[1] = ppiVar17[1];
          ppiVar15 = ppiVar15 + 2;
        }
        if (apiStack_1f0 != &piStack_1e0) {
          for (ppiVar15 = apiStack_1f0 + 2; FUN_00387328(ppiVar15,2), apiStack_1f0 != ppiVar15;
              ppiVar15 = ppiVar15 + -2) {
          }
        }
        if (ppiStack_208 != apiStack_204) {
          if (ppiStack_208 == (int **)0x0) {
            puVar9 = (undefined4 *)FUN_00107d20(0x10);
            *puVar9 = 0;
          }
          else {
            ppiVar15 = ppiStack_208 + (int)ppiStack_208[-4] * 2;
            while (ppiStack_208 != ppiVar15) {
              ppiVar15 = ppiVar15 + -2;
              FUN_00387328(ppiVar15,2);
            }
            FUN_00107d50(ppiStack_208 + -4);
          }
        }
        if ((&stack0x00000000 != (undefined1 *)0x204) && (apiStack_204 != apiStack_204 + 4)) {
          for (ppiVar15 = apiStack_204 + 2; FUN_00387328(ppiVar15,2), apiStack_204 != ppiVar15;
              ppiVar15 = ppiVar15 + -2) {
          }
        }
      }
      if (0 < iStack_ac) {
        ppiVar15 = apiStack_204;
        iVar8 = 1;
        ppiVar14 = (int **)(piStack_b0 + 4);
        do {
          *ppiVar15 = (int *)0x0;
          iVar8 = iVar8 + -1;
          ppiVar15 = ppiVar15 + 1;
        } while (iVar8 != -1);
        piStack_b0[1] = 0;
        ppiStack_208 = (int **)piStack_a8[2];
        piStack_a8[1] = 0;
        piStack_a8[2] = (int)ppiVar14;
        if (ppiStack_208 == ppiVar14) {
          ppiStack_208 = apiStack_204;
        }
        iVar8 = 1;
        ppiVar17 = (int **)(piStack_a8 + 5);
        ppiVar14 = (int **)(piStack_a8 + 3);
        ppiVar15 = apiStack_1f0;
        do {
          *ppiVar15 = (int *)0x0;
          iVar8 = iVar8 + -1;
          ppiVar15 = ppiVar15 + 1;
        } while (iVar8 != -1);
        piStack_1e0 = (int *)0x0;
        if ((apiStack_1f0[1] != (int *)0x0) && (lVar12 = FUN_00244ce8(), lVar12 == 0)) {
          FUN_00244cf8(apiStack_1f0[1]);
        }
        apiStack_1f0[1] = piStack_1e0;
        if (piStack_1e0 != (int *)0x0) {
          FUN_00244cd8();
        }
        ppiVar15 = apiStack_1f0;
        ppiVar16 = ppiVar14;
        if ((piStack_1e0 != (int *)0x0) && (lVar12 = FUN_00244ce8(), lVar12 == 0)) {
          FUN_00244cf8(piStack_1e0);
        }
        while (ppiVar6 = ppiVar16, ppiVar7 = ppiVar15, ppiVar6 != ppiVar17) {
          ppiVar16 = ppiVar6 + 1;
          ppiVar15 = ppiVar7 + 1;
          if (ppiVar6 != ppiVar7) {
            if (*ppiVar7 == (int *)0x0) {
              piVar13 = *ppiVar6;
            }
            else {
              lVar12 = FUN_00244ce8();
              if (lVar12 == 0) {
                FUN_00244cf8(*ppiVar7);
                piVar13 = *ppiVar6;
              }
              else {
                piVar13 = *ppiVar6;
              }
            }
            *ppiVar7 = piVar13;
            if (piVar13 != (int *)0x0) {
              FUN_00244cd8();
            }
          }
        }
        ppiVar15 = apiStack_204;
        while (ppiVar16 = ppiVar15, ppiVar17 = ppiVar14, ppiVar16 != apiStack_204 + 2) {
          ppiVar15 = ppiVar16 + 1;
          ppiVar14 = ppiVar17 + 1;
          if (ppiVar16 != ppiVar17) {
            if (*ppiVar17 == (int *)0x0) {
              piVar13 = *ppiVar16;
            }
            else {
              lVar12 = FUN_00244ce8();
              if (lVar12 == 0) {
                FUN_00244cf8(*ppiVar17);
                piVar13 = *ppiVar16;
              }
              else {
                piVar13 = *ppiVar16;
              }
            }
            *ppiVar17 = piVar13;
            if (piVar13 != (int *)0x0) {
              FUN_00244cd8();
            }
          }
        }
        ppiVar15 = apiStack_1f0;
        ppiVar14 = apiStack_204;
        while (ppiVar16 = ppiVar14, ppiVar17 = ppiVar15, ppiVar17 != apiStack_1f0 + 2) {
          ppiVar15 = ppiVar17 + 1;
          ppiVar14 = ppiVar16 + 1;
          if (ppiVar17 != ppiVar16) {
            if (*ppiVar16 == (int *)0x0) {
              piVar13 = *ppiVar17;
            }
            else {
              lVar12 = FUN_00244ce8();
              if (lVar12 == 0) {
                FUN_00244cf8(*ppiVar16);
                piVar13 = *ppiVar17;
              }
              else {
                piVar13 = *ppiVar17;
              }
            }
            *ppiVar16 = piVar13;
            if (piVar13 != (int *)0x0) {
              FUN_00244cd8();
            }
          }
        }
        if (apiStack_1f0 != apiStack_1f0 + 2) {
          ppiVar15 = apiStack_1f0 + 1;
          while( true ) {
            if ((*ppiVar15 != (int *)0x0) && (lVar12 = FUN_00244ce8(), lVar12 == 0)) {
              FUN_00244cf8(*ppiVar15);
            }
            if (apiStack_1f0 == ppiVar15) break;
            ppiVar15 = ppiVar15 + -1;
          }
        }
        FUN_00231c50(DAT_0043df68);
        if (ppiStack_208 != apiStack_204) {
          if (ppiStack_208 == (int **)0x0) {
            puVar9 = (undefined4 *)FUN_0021b078(0x10);
            *puVar9 = 0;
          }
          else {
            ppiVar15 = ppiStack_208 + (int)ppiStack_208[-4];
            while (ppiStack_208 != ppiVar15) {
              ppiVar15 = ppiVar15 + -1;
              if ((*ppiVar15 != (int *)0x0) && (lVar12 = FUN_00244ce8(), lVar12 == 0)) {
                FUN_00244cf8(*ppiVar15);
              }
            }
            FUN_0021b0b0(ppiStack_208 + -4);
          }
        }
        if (apiStack_204 != apiStack_204 + 2) {
          ppiVar15 = apiStack_204 + 1;
          do {
            if ((*ppiVar15 != (int *)0x0) && (lVar12 = FUN_00244ce8(), lVar12 == 0)) {
              FUN_00244cf8(*ppiVar15);
            }
            bVar1 = apiStack_204 != ppiVar15;
            ppiVar15 = ppiVar15 + -1;
          } while (bVar1);
        }
      }
      return;
    }
    piVar13 = (int *)*piStack_220;
    bVar1 = false;
    if (piVar13 != (int *)0x0) {
      FUN_00244cd8();
    }
    piVar3 = (int *)*piStack_b0;
    apiStack_1f0[0] = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      do {
        apiStack_204[1] = piVar3;
        apiStack_1f0[0] = (int *)*apiStack_204[1];
        if (apiStack_1f0[0] != (int *)0x0) {
          FUN_00244d78();
        }
        bVar5 = false;
        piStack_1e0 = (int *)apiStack_1f0[0][1];
        if (piStack_1e0 != (int *)0x0) {
          FUN_00244cd8();
        }
        if ((piStack_1e0 == piVar13) && ((char)apiStack_1f0[0][3] == '\0')) {
          bVar5 = true;
        }
        if ((piStack_1e0 != (int *)0x0) && (lVar12 = FUN_00244ce8(), lVar12 == 0)) {
          FUN_00244cf8(piStack_1e0);
        }
        if (bVar5) {
          piStack_1d0 = piVar13;
          if (piVar13 != (int *)0x0) {
            FUN_00244cd8();
          }
          uVar10 = FUN_00250058(DAT_0043dee0,0x38);
          uVar10 = FUN_002311f0(uVar10,&piStack_1d0);
          puVar4 = (uint *)apiStack_1f0[0][2];
          lVar12 = FUN_0021ada8();
          if (lVar12 == 0) {
            uVar11 = FUN_00231308(uVar10,1);
            FUN_0021ad98(uVar11);
          }
          FUN_0023b528(puVar4,1);
          puVar4[0x12] = (uint)uVar10;
          *puVar4 = *puVar4 & 0x1ffffff | 0x24000010;
          *(undefined4 *)((uint)uVar10 + 0x18) = 0xffffffff;
          *(uint *)(puVar4[0x12] + 0x1c) = *(uint *)(puVar4[0x12] + 0x1c) | 0x1000000;
          FUN_0023e3d0(puVar4);
          *(undefined1 *)(apiStack_1f0[0] + 3) = 1;
          if (DAT_0043da9c != (code *)0x0) {
            (*DAT_0043da9c)(piVar13[1] + 8,puVar4[2] + 8);
          }
          if (DAT_003be8dc != 0) {
            uVar2 = *(ushort *)(piVar13[1] + 2);
            piStack_1c0 = DAT_0043df64;
            uStack_1bc = (int *)CONCAT31(uStack_1bc._1_3_,6);
            FUN_0035cbc0((int)&uStack_1bc + 1,piVar13[1] + 8);
            (*DAT_0043da88)(&piStack_1c0,uVar2 + 6);
          }
          iVar8 = piStack_b0[1];
          if (iStack_ac != iVar8) {
            piStack_220 = (int *)piStack_a8[2];
            iStack_ac = iVar8;
            piStack_1cc = piStack_220;
            piStack_1c8 = piStack_220 + iVar8;
            piStack_1c0 = piStack_220;
            uStack_1bc = piStack_220 + iVar8;
            piStack_1d0 = piStack_220;
            bVar1 = true;
            piVar3 = apiStack_204[1];
            if ((apiStack_1f0[0] != (int *)0x0) &&
               (lVar12 = FUN_00244d88(), piVar3 = apiStack_204[1], lVar12 == 0)) {
              FUN_00244d98(apiStack_1f0[0]);
              piVar3 = apiStack_204[1];
            }
            break;
          }
        }
        if ((apiStack_1f0[0] != (int *)0x0) && (lVar12 = FUN_00244d88(), lVar12 == 0)) {
          FUN_00244d98(apiStack_1f0[0]);
        }
        piVar3 = (int *)apiStack_204[1][1];
        apiStack_1f0[0] = (int *)0x0;
        piStack_1e0 = apiStack_204[1];
      } while (piVar3 != (int *)0x0);
    }
    apiStack_204[1] = piVar3;
    if (!bVar1) {
      piStack_220 = piStack_220 + 1;
    }
    if ((piVar13 != (int *)0x0) && (lVar12 = FUN_00244ce8(), lVar12 == 0)) {
      FUN_00244cf8(piVar13);
    }
  } while( true );
}


// ==== FUN_00243bf0 @ 00243bf0 ====

void FUN_00243bf0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int **ppiVar11;
  int iVar12;
  int *piStack_140;
  int *piStack_13c;
  int *piStack_138;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_128;
  int *piStack_120;
  int *piStack_11c;
  undefined8 uStack_f0;
  int *piStack_e8;
  undefined8 uStack_e0;
  int *piStack_d8;
  int *piStack_c0;
  int *piStack_bc;
  int **ppiStack_b8;
  int **ppiStack_b4;
  int iStack_b0;
  int iStack_ac;
  
  piVar7 = (int *)(param_1 + 4);
  piVar3 = *(int **)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4) * 4;
  if (piVar3 != (int *)(iVar2 + *(int *)(param_1 + 0xc))) {
    do {
      iVar8 = *piVar3;
      piVar3 = piVar3 + 1;
      if (iVar8 == *param_2) goto LAB_002440b0;
    } while (piVar3 != (int *)(iVar2 + *(int *)(param_1 + 0xc)));
  }
  piVar10 = param_2 + 1;
  piVar3 = *(int **)(param_1 + 0xc);
  piVar9 = piVar3 + *(int *)(param_1 + 4);
  iVar2 = (int)piVar10 - (int)param_2 >> 2;
  ppiStack_b8 = &piStack_c0;
  ppiStack_b4 = &piStack_bc;
  piStack_c0 = param_2;
  piStack_bc = piVar10;
  if (iVar2 == 0) goto LAB_002440b0;
  iVar8 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4) + iVar2;
  piStack_13c = piVar3;
  piStack_138 = piVar9;
  piStack_130 = piVar3;
  piStack_12c = piVar9;
  if (iVar2 < iVar8) {
    piStack_140 = piVar9;
    iStack_ac = iVar2 * 4;
    piVar3 = param_2;
    while (piVar1 = piVar3, piVar4 = piVar9, piVar1 != piVar10) {
      piVar3 = piVar1 + 1;
      piVar9 = piVar4 + 1;
      if (piVar1 != piVar4) {
        if (*piVar4 == 0) {
          iVar8 = *piVar1;
        }
        else {
          lVar6 = FUN_00244ce8();
          if (lVar6 == 0) {
            FUN_00244cf8(*piVar4);
            iVar8 = *piVar1;
          }
          else {
            iVar8 = *piVar1;
          }
        }
        *piVar4 = iVar8;
        if (iVar8 != 0) {
          FUN_00244cd8();
        }
      }
    }
    ppiVar11 = (int **)(iStack_ac + *(int *)(param_1 + 0xc));
    piStack_130 = (int *)0x0;
    if (&piStack_130 != ppiVar11) {
      if ((*ppiVar11 != (int *)0x0) && (lVar6 = FUN_00244ce8(), lVar6 == 0)) {
        FUN_00244cf8(*ppiVar11);
      }
      *ppiVar11 = piStack_130;
      if (piStack_130 != (int *)0x0) {
        FUN_00244cd8();
      }
    }
    if (piStack_130 == (int *)0x0) {
      *piVar7 = iVar2;
    }
    else {
      lVar6 = FUN_00244ce8();
      if (lVar6 == 0) {
        FUN_00244cf8(piStack_130);
        *piVar7 = iVar2;
      }
      else {
        *piVar7 = iVar2;
      }
    }
    goto LAB_002440b0;
  }
  iStack_b0 = (int)piVar9 - (int)piVar3 >> 2;
  iVar12 = (int)((float)iVar8 + (float)iVar8);
  if (iVar12 < iVar2) {
    iVar12 = iVar2;
  }
  if (iVar8 < iVar12) {
    if (iVar12 < 2) {
      *(int *)(param_1 + 8) = iVar12;
      goto LAB_00244060;
    }
    piStack_140 = piVar3;
    piVar3 = (int *)FUN_0021b078((iVar12 + 1) * 4 + 0x10);
    piVar9 = piVar3 + 4;
    *piVar3 = iVar12 + 1;
    piVar3 = piVar9;
    for (iVar2 = iVar12; iVar2 != -1; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    piStack_140 = *(int **)(param_1 + 0xc);
    piStack_138 = piStack_140 + *piVar7;
    piVar3 = piVar9;
    piStack_13c = piStack_140;
    piStack_130 = piStack_138;
    piStack_12c = piStack_140;
    piStack_128 = piStack_138;
    piStack_120 = piStack_140;
    piStack_11c = piStack_138;
    if (piStack_140 != piStack_138) {
      do {
        piVar10 = piStack_140;
        uStack_f0 = CONCAT44(piStack_13c,piStack_140);
        piStack_d8 = piStack_138;
        piVar4 = piStack_140 + 1;
        piStack_e8 = piStack_138;
        uStack_e0 = uStack_f0;
        if (piStack_140 != piVar3) {
          if (*piVar3 == 0) {
            iVar2 = *piStack_140;
            piStack_140 = piVar4;
          }
          else {
            piStack_140 = piVar4;
            lVar6 = FUN_00244ce8();
            if (lVar6 == 0) {
              FUN_00244cf8(*piVar3);
              iVar2 = *piVar10;
            }
            else {
              iVar2 = *piVar10;
            }
          }
          *piVar3 = iVar2;
          piVar4 = piStack_140;
          if (iVar2 != 0) {
            FUN_00244cd8();
            piVar4 = piStack_140;
          }
        }
        piStack_140 = piVar4;
        piVar3 = piVar3 + 1;
      } while (piStack_140 != piStack_130);
    }
    piVar3 = *(int **)(param_1 + 0xc);
    *(int *)(param_1 + 8) = iVar12;
    if (piVar3 != (int *)(param_1 + 0x10)) {
      if (piVar3 == (int *)0x0) {
        puVar5 = (undefined4 *)FUN_0021b078(0x10);
        *puVar5 = 0;
      }
      else {
        piVar10 = piVar3 + piVar3[-4];
        while (piVar3 != piVar10) {
          piVar10 = piVar10 + -1;
          if ((*piVar10 != 0) && (lVar6 = FUN_00244ce8(), lVar6 == 0)) {
            FUN_00244cf8(*piVar10);
          }
        }
        FUN_0021b0b0(piVar3 + -4);
      }
    }
    *(int **)(param_1 + 0xc) = piVar9;
    ppiVar11 = (int **)(piVar9 + *piVar7);
    piStack_140 = (int *)0x0;
    if (&piStack_140 != ppiVar11) {
      if ((*ppiVar11 != (int *)0x0) && (lVar6 = FUN_00244ce8(), lVar6 == 0)) {
        FUN_00244cf8(*ppiVar11);
      }
      *ppiVar11 = piStack_140;
      if (piStack_140 != (int *)0x0) {
        FUN_00244cd8();
      }
    }
    if (piStack_140 == (int *)0x0) {
      iVar2 = *piVar7;
    }
    else {
      lVar6 = FUN_00244ce8();
      if (lVar6 == 0) {
        FUN_00244cf8(piStack_140);
        goto LAB_00244060;
      }
      iVar2 = *piVar7;
    }
  }
  else {
LAB_00244060:
    iVar2 = *piVar7;
  }
  piStack_13c = *(int **)(param_1 + 0xc);
  piStack_138 = piStack_13c + iVar2;
  piStack_140 = piStack_13c + iStack_b0;
  piStack_130 = piStack_13c;
  piStack_12c = piStack_13c;
  piStack_128 = piStack_138;
  piStack_120 = piStack_13c;
  piStack_11c = piStack_138;
  FUN_003875e8(piVar7,ppiStack_b8,ppiStack_b4,&piStack_140);
LAB_002440b0:
  if ((*param_2 != 0) && (lVar6 = FUN_00244ce8(), lVar6 == 0)) {
    FUN_00244cf8(*param_2);
  }
  return;
}


// ==== FUN_00244108 @ 00244108 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000004 : 0x00244474 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00244108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  short *psVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  int aiStack_100 [4];
  int *apiStack_f0 [4];
  int aiStack_e0 [4];
  undefined4 *puStack_d0;
  int iStack_c0;
  int *piStack_b0;
  undefined4 uStack_a0;
  
  uVar7 = FUN_00218930(0);
  puVar4 = (uint *)FUN_0021e420(0x43db68,uVar7,0,param_3,1,1,0);
  puVar16 = (undefined4 *)param_3;
  if (puVar4 == (uint *)0x0) {
    psVar13 = (short *)*puVar16;
    goto LAB_00244b38;
  }
  uVar12 = 0;
  if ((*puVar4 >> 0x19) - 0xc < 8) {
    uVar12 = (int)*puVar4 >> 4 & 1;
  }
  if (uVar12 != 0) {
    aiStack_100[0] = 0;
    FUN_00253ff0(apiStack_f0,0x40de10);
    piVar15 = (int *)*(int *)param_2;
    bVar2 = false;
    if (*(short *)((int)piVar15 + 2) == *(short *)((int)apiStack_f0[0] + 2)) {
      if (piVar15 != apiStack_f0[0]) {
        lVar8 = FUN_0035c4b0(piVar15 + 2,apiStack_f0[0] + 2);
        bVar2 = false;
        if (lVar8 != 0) goto LAB_002441ec;
      }
      bVar2 = true;
    }
LAB_002441ec:
    sVar3 = (short)*apiStack_f0[0] + -1;
    *(short *)apiStack_f0[0] = sVar3;
    if (sVar3 == 0) {
      FUN_00250198(DAT_0043dee0,apiStack_f0[0],*(ushort *)(apiStack_f0[0] + 1) + 9);
    }
    if (!bVar2) {
      FUN_00242b48(aiStack_e0,DAT_0043df7c,param_2);
      if (aiStack_e0 != aiStack_100) {
        if ((aiStack_100[0] != 0) && (lVar8 = FUN_00244ce8(), lVar8 == 0)) {
          FUN_00244cf8(aiStack_100[0]);
        }
        aiStack_100[0] = aiStack_e0[0];
        if (aiStack_e0[0] != 0) {
          FUN_00244cd8();
        }
      }
      if ((aiStack_e0[0] != 0) && (lVar8 = FUN_00244ce8(), lVar8 == 0)) {
        FUN_00244cf8(aiStack_e0[0]);
      }
      if (aiStack_100[0] == 0) {
        FUN_00242bf0(aiStack_e0,DAT_0043df7c,param_2);
        if (aiStack_e0 != aiStack_100) {
          if ((aiStack_100[0] != 0) && (lVar8 = FUN_00244ce8(), lVar8 == 0)) {
            FUN_00244cf8(aiStack_100[0]);
          }
          aiStack_100[0] = aiStack_e0[0];
          if (aiStack_e0[0] != 0) {
            FUN_00244cd8();
          }
        }
        if ((aiStack_e0[0] != 0) && (lVar8 = FUN_00244ce8(), lVar8 == 0)) {
          FUN_00244cf8(aiStack_e0[0],1);
        }
      }
      else {
        aiStack_e0[0] = aiStack_100[0];
        if (aiStack_100[0] != 0) {
          FUN_00244cd8(aiStack_100[0],DAT_0043df7c);
        }
        FUN_00243bf0(param_1,aiStack_e0);
      }
    }
    FUN_0023b528(puVar4,1);
    if (DAT_0040de42 == '\0') {
      uVar12 = puVar4[0x16];
    }
    else {
      FUN_00241ea0(*(int *)param_2 + 8);
      uVar12 = puVar4[0x16];
    }
    piVar15 = (int *)param_1;
    if ((uVar12 >> 0x12 & 3) == 1) {
      for (apiStack_f0[0] = (int *)*piVar15; iStack_c0 = 0, apiStack_f0[0] != (int *)0x0;
          apiStack_f0[0] = (int *)apiStack_f0[0][1]) {
        if (*(uint **)(*apiStack_f0[0] + 8) == puVar4) goto LAB_002443b8;
      }
      apiStack_f0[0] = (int *)0x0;
LAB_002443b8:
      puStack_d0 = (undefined4 *)*apiStack_f0[0];
      if (puStack_d0 != (undefined4 *)0x0) {
        FUN_00244d78();
      }
      iStack_c0 = puStack_d0[1];
      if (iStack_c0 != 0) {
        FUN_00244cd8();
      }
      iVar1 = iStack_c0;
      iVar10 = iRam00000008;
      if (iStack_c0 != 0) {
        lVar8 = FUN_00244ce8(iStack_c0);
        if (lVar8 == 0) {
          FUN_00244cf8(iStack_c0);
          iVar10 = *(int *)(iVar1 + 8);
        }
        else {
          iVar10 = *(int *)(iVar1 + 8);
        }
      }
      piVar14 = apiStack_f0[0];
      if (iVar10 != 5) {
        piVar11 = (int *)*piVar15;
        if (apiStack_f0[0] == piVar11) {
          if (apiStack_f0[0] != (int *)0x0) {
            iVar10 = apiStack_f0[0][1];
            if ((*apiStack_f0[0] != 0) && (lVar8 = FUN_00244d88(), lVar8 == 0)) {
              FUN_00244d98(*piVar14);
            }
            FUN_00250198(DAT_0043dee0,piVar14,8);
            *piVar15 = iVar10;
          }
        }
        else {
          piVar14 = piRam00000004;
          if (piVar11 != (int *)0x0) {
            if ((int *)piVar11[1] == apiStack_f0[0]) {
              piVar14 = (int *)piVar11[1];
            }
            else {
              for (piVar11 = (int *)piVar11[1]; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1])
              {
                if ((int *)piVar11[1] == apiStack_f0[0]) {
                  piVar14 = (int *)piVar11[1];
                  break;
                }
              }
            }
          }
          if ((piVar14 != (int *)0x0) && (piVar11[1] = piVar14[1], piVar14 != (int *)0x0)) {
            if ((*piVar14 != 0) && (lVar8 = FUN_00244d88(), lVar8 == 0)) {
              FUN_00244d98(*piVar14);
            }
            FUN_00250198(DAT_0043dee0,piVar14,8);
          }
        }
        *(undefined4 *)(iVar1 + 8) = 5;
      }
      puVar5 = (uint *)FUN_0024fa38(DAT_0043dee4,0x60);
      uVar12 = puVar4[0x11];
      FUN_00386f98(puVar5,0x13,0);
      puVar5[1] = (uint)&DAT_003e2340;
      FUN_003872c0(puVar5 + 2);
      puVar5[0x12] = 0;
      puVar5[0xc] = 0x3f800000;
      puVar5[3] = 0x3f800000;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0x3f800000;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0x3f800000;
      puVar5[10] = 0x3f800000;
      puVar5[0xb] = 0x3f800000;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = uVar12;
      if (uVar12 != 0) {
        (**(code **)(*(int *)(uVar12 + 4) + 0xc))
                  (uVar12 + (int)*(short *)(*(int *)(uVar12 + 4) + 8));
      }
      puVar5[0x16] = puVar5[0x16] & 0xfff0ffff;
      *(undefined2 *)(puVar5 + 0x16) = 0;
      FUN_00387140(puVar5,1);
      uVar12 = puVar5[0x15];
      puVar5[0x16] = puVar5[0x16] & 0xffdfffff | 0x100000;
      puVar5[0x15] = uVar12 | 0x7ffe0000;
      *puVar5 = *puVar5 & 0xffffffdf;
      puVar5[0x17] = 0;
      puVar5[0x15] = uVar12 & 0xfffe0000 | 0x7ffe0000 | puVar4[0x15] & 0x1ffff;
      *(short *)puVar4[2] = *(short *)puVar4[2] + 1;
      psVar13 = (short *)puVar5[2];
      sVar3 = *psVar13;
      *psVar13 = sVar3 + -1;
      if ((short)(sVar3 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar13,(ushort)psVar13[2] + 9);
      }
      puVar5[2] = puVar4[2];
      if (puVar4[0x11] == 0) {
        puVar5[0x13] = puVar4[0x13];
        puVar5[0x14] = puVar4[0x14];
        FUN_0023f020(puVar4);
        if (puVar5[0x13] != 0) {
          *(uint **)(puVar5[0x13] + 0x50) = puVar5;
        }
        if (puVar5[0x14] != 0) {
          *(uint **)(puVar5[0x14] + 0x4c) = puVar5;
        }
      }
      else {
        puVar5[0x13] = puVar4[0x13];
        puVar5[0x14] = puVar4[0x14];
        iVar1 = *(int *)(puVar4[0x11] + 4);
        uVar7 = (**(code **)(iVar1 + 0x24))(puVar4[0x11] + (int)*(short *)(iVar1 + 0x20));
        FUN_002488d0(uVar7,puVar4 + 2,puVar5);
        FUN_002405e8(*(int *)(puVar4[0x11] + 0x48) + 0x24,puVar4);
        if (puVar5[0x13] != 0) {
          *(uint **)(puVar5[0x13] + 0x50) = puVar5;
        }
        if (puVar5[0x14] != 0) {
          *(uint **)(puVar5[0x14] + 0x4c) = puVar5;
        }
        (**(code **)(puVar4[1] + 0xc))((int)puVar4 + (int)*(short *)(puVar4[1] + 8));
        FUN_0023fe48(0,*(int *)(puVar5[0x11] + 0x48) + 0x24,puVar5,(int)(puVar5[0x15] << 0xf) >> 0xf
                     ,0,puVar5 + 2,puVar5[0x11],1,0xffffffffffffffff);
        *puVar4 = *puVar4 | 0x10;
        iVar1 = *(int *)(puVar5[0x11] + 4);
        (**(code **)(iVar1 + 0x14))(puVar5[0x11] + (int)*(short *)(iVar1 + 0x10));
        puVar4[0x11] = 0;
      }
      (**(code **)(puVar5[1] + 0xc))((int)puVar5 + (int)*(short *)(puVar5[1] + 8));
      *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
      if (puStack_d0 == (undefined4 *)0x0) {
        uVar12 = *puVar5;
      }
      else {
        lVar8 = FUN_00244d88();
        if (lVar8 == 0) {
          FUN_00244d98(puStack_d0);
          uVar12 = *puVar5;
        }
        else {
          uVar12 = *puVar5;
        }
      }
    }
    else {
      uVar12 = *puVar4;
      puVar5 = puVar4;
    }
    puVar5[0x12] = 0;
    *puVar5 = uVar12 & 0x1ffffff | 0x26000010;
    for (piStack_b0 = (int *)*piVar15; uStack_a0 = 0, piStack_b0 != (int *)0x0;
        piStack_b0 = (int *)piStack_b0[1]) {
      apiStack_f0[0] = piStack_b0;
      if (*(uint **)(*piStack_b0 + 8) == puVar5) goto LAB_00244860;
    }
    apiStack_f0[0] = (int *)0x0;
LAB_00244860:
    piVar14 = apiStack_f0[0];
    aiStack_e0[0] = 0;
    if (apiStack_f0[0] == (int *)0x0) {
      if (aiStack_100[0] != 0) {
        lVar8 = FUN_00250058(DAT_0043dee0,0x10);
        iStack_c0 = aiStack_100[0];
        if (aiStack_100[0] != 0) {
          FUN_00244cd8();
        }
        puVar6 = (undefined4 *)lVar8;
        *puVar6 = 0;
        puVar6[1] = iStack_c0;
        if (iStack_c0 != 0) {
          FUN_00244cd8();
        }
        puVar6[2] = puVar5;
        *(undefined1 *)(puVar6 + 3) = 0;
        if ((iStack_c0 != 0) && (lVar9 = FUN_00244ce8(), lVar9 == 0)) {
          FUN_00244cf8(iStack_c0);
        }
        puStack_d0 = puVar6;
        if (lVar8 != 0) {
          FUN_00244d78(lVar8);
        }
        puVar6 = (undefined4 *)FUN_00250058(DAT_0043dee0,8);
        *puVar6 = puStack_d0;
        if (puStack_d0 != (undefined4 *)0x0) {
          FUN_00244d78();
        }
        puVar6[1] = 0;
        puVar6[1] = *piVar15;
        *piVar15 = (int)puVar6;
        if ((puStack_d0 != (undefined4 *)0x0) && (lVar8 = FUN_00244d88(), lVar8 == 0)) {
          FUN_00244d98(puStack_d0);
        }
      }
    }
    else {
      piVar11 = (int *)*piVar15;
      if (apiStack_f0[0] == piVar11) {
        if (apiStack_f0[0] != (int *)0x0) {
          iVar1 = apiStack_f0[0][1];
          if ((*apiStack_f0[0] != 0) && (lVar8 = FUN_00244d88(), lVar8 == 0)) {
            FUN_00244d98(*piVar14);
          }
          FUN_00250198(DAT_0043dee0,piVar14,8);
          *piVar15 = iVar1;
        }
      }
      else {
        piVar14 = piRam00000004;
        if (piVar11 != (int *)0x0) {
          if ((int *)piVar11[1] == apiStack_f0[0]) {
            piVar14 = (int *)piVar11[1];
          }
          else {
            for (piVar11 = (int *)piVar11[1]; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
              if ((int *)piVar11[1] == apiStack_f0[0]) {
                piVar14 = (int *)piVar11[1];
                break;
              }
            }
          }
        }
        if ((piVar14 != (int *)0x0) && (piVar11[1] = piVar14[1], piVar14 != (int *)0x0)) {
          if ((*piVar14 != 0) && (lVar8 = FUN_00244d88(), lVar8 == 0)) {
            FUN_00244d98(*piVar14);
          }
          FUN_00250198(DAT_0043dee0,piVar14,8);
        }
      }
      if (aiStack_100[0] != 0) {
        lVar8 = FUN_00250058(DAT_0043dee0,0x10);
        iStack_c0 = aiStack_100[0];
        if (aiStack_100[0] != 0) {
          FUN_00244cd8();
        }
        puVar6 = (undefined4 *)lVar8;
        *puVar6 = 0;
        puVar6[1] = iStack_c0;
        if (iStack_c0 != 0) {
          FUN_00244cd8();
        }
        puVar6[2] = puVar5;
        *(undefined1 *)(puVar6 + 3) = 0;
        if ((iStack_c0 != 0) && (lVar9 = FUN_00244ce8(), lVar9 == 0)) {
          FUN_00244cf8(iStack_c0);
        }
        puStack_d0 = puVar6;
        if (lVar8 != 0) {
          FUN_00244d78(lVar8);
        }
        puVar6 = (undefined4 *)FUN_00250058(DAT_0043dee0,8);
        *puVar6 = puStack_d0;
        if (puStack_d0 != (undefined4 *)0x0) {
          FUN_00244d78();
        }
        puVar6[1] = 0;
        puVar6[1] = *piVar15;
        *piVar15 = (int)puVar6;
        if ((puStack_d0 != (undefined4 *)0x0) && (lVar8 = FUN_00244d88(), lVar8 == 0)) {
          FUN_00244d98(puStack_d0);
        }
      }
    }
    if (aiStack_100[0] == 0) {
      psVar13 = (short *)*puVar16;
      goto LAB_00244b38;
    }
    lVar8 = FUN_00244ce8();
    if (lVar8 != 0) {
      psVar13 = (short *)*puVar16;
      goto LAB_00244b38;
    }
    FUN_00244cf8(aiStack_100[0]);
  }
  psVar13 = (short *)*puVar16;
LAB_00244b38:
  sVar3 = *psVar13;
  *psVar13 = sVar3 + -1;
  if ((short)(sVar3 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar13,(ushort)psVar13[2] + 9);
  }
  return;
}


// ==== FUN_00244b90 @ 00244b90 ====

void FUN_00244b90(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int *piStack_70;
  
  for (piStack_70 = (int *)*param_1; piStack_70 != (int *)0x0; piStack_70 = (int *)piStack_70[1]) {
    if (*(int *)(*piStack_70 + 8) == param_2) goto LAB_00244bd8;
  }
  piStack_70 = (int *)0x0;
LAB_00244bd8:
  if (piStack_70 != (int *)0x0) {
    piVar3 = (int *)*param_1;
    if (piStack_70 == piVar3) {
      if (piStack_70 != (int *)0x0) {
        iVar1 = piStack_70[1];
        if ((*piStack_70 != 0) && (lVar2 = FUN_00244d88(), lVar2 == 0)) {
          FUN_00244d98(*piStack_70);
        }
        FUN_00250198(DAT_0043dee0,piStack_70,8);
        *param_1 = iVar1;
      }
    }
    else {
      piVar4 = piRam00000004;
      if (piVar3 != (int *)0x0) {
        if ((int *)piVar3[1] == piStack_70) {
          piVar4 = (int *)piVar3[1];
        }
        else {
          for (piVar3 = (int *)piVar3[1]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
            if ((int *)piVar3[1] == piStack_70) {
              piVar4 = (int *)piVar3[1];
              break;
            }
          }
        }
      }
      if ((piVar4 != (int *)0x0) && (piVar3[1] = piVar4[1], piVar4 != (int *)0x0)) {
        if ((*piVar4 != 0) && (lVar2 = FUN_00244d88(), lVar2 == 0)) {
          FUN_00244d98(*piVar4);
        }
        FUN_00250198(DAT_0043dee0,piVar4,8);
      }
    }
  }
  return;
}


// ==== FUN_00244cd8 @ 00244cd8 ====

void FUN_00244cd8(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}


// ==== FUN_00244ce8 @ 00244ce8 ====

void FUN_00244ce8(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


// ==== FUN_00244cf8 @ 00244cf8 ====

void FUN_00244cf8(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_00242a10(DAT_0043df7c,param_1);
    iVar1 = (int)param_1;
    if (*(int *)(iVar1 + 8) - 3U < 3) {
      FUN_00230c40(*(int *)(iVar1 + 0x10) + 8,*(undefined4 *)(iVar1 + 0xc));
      (*DAT_0043da94)(*(undefined4 *)(iVar1 + 0x14));
    }
    FUN_00387328(iVar1 + 4,2);
    FUN_00386968(param_1,0x18);
  }
  return;
}


// ==== FUN_00244d78 @ 00244d78 ====

void FUN_00244d78(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}


// ==== FUN_00244d88 @ 00244d88 ====

void FUN_00244d88(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


// ==== FUN_00244d98 @ 00244d98 ====

void FUN_00244d98(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((*(int *)((int)param_1 + 4) != 0) && (lVar1 = FUN_00244ce8(), lVar1 == 0)) {
      FUN_00244cf8(*(undefined4 *)((int)param_1 + 4));
    }
    FUN_00250198(DAT_0043dee0,param_1,0x10);
  }
  return;
}


// ==== FUN_00244df8 @ 00244df8 ====

void FUN_00244df8(int *param_1)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  int aiStack_1a0 [4];
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_180;
  int iStack_17c;
  int aiStack_178 [6];
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_150;
  int iStack_14c;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  undefined8 uStack_130;
  int iStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_100;
  int iStack_fc;
  ulong uStack_f0;
  int iStack_e8;
  ulong uStack_e0;
  int iStack_d8;
  ulong uStack_d0;
  int iStack_c8;
  int *piStack_c0;
  int *piStack_bc;
  int **ppiStack_b8;
  int **ppiStack_b4;
  int iStack_b0;
  
  aiStack_1a0[0] = *param_1;
  if (aiStack_1a0[0] != 0) {
    FUN_00244cd8();
  }
  FUN_00243bf0(DAT_0043df80,aiStack_1a0);
  piVar1 = DAT_0043df84;
  if (DAT_0043df50 != 0) {
    iVar6 = *param_1;
    iStack_190 = DAT_0043df84[2];
    iStack_188 = *DAT_0043df84 * 8 + iStack_190;
    aiStack_178[2] = DAT_0043df84[2];
    aiStack_178[3] = *DAT_0043df84 * 8 + aiStack_178[2];
    iStack_18c = iStack_190;
    if (iStack_190 != aiStack_178[3]) {
      do {
        iStack_180 = aiStack_178[3];
        iStack_17c = aiStack_178[2];
        aiStack_178[0] = aiStack_178[3];
        lVar5 = FUN_00387410(iStack_190,iVar6 + 4);
        if (lVar5 != 0) {
          if (*(int *)(iStack_190 + 4) != 1) {
            iVar6 = *param_1;
            goto LAB_00245480;
          }
          *(undefined4 *)(iStack_190 + 4) = 3;
          goto LAB_0024547c;
        }
        iStack_190 = iStack_190 + 8;
        aiStack_178[2] = piVar1[2];
        aiStack_178[3] = *piVar1 * 8 + aiStack_178[2];
      } while (iStack_190 != aiStack_178[3]);
    }
    iStack_180 = aiStack_178[3];
    iStack_17c = aiStack_178[2];
    aiStack_178[0] = aiStack_178[3];
    FUN_00387308(&iStack_180,iVar6 + 4);
    ppiStack_b8 = &piStack_c0;
    piVar3 = &iStack_180;
    ppiStack_b4 = &piStack_bc;
    iStack_17c = 2;
    iVar6 = (int)aiStack_178 - (int)piVar3 >> 3;
    iStack_15c = piVar1[2];
    iStack_160 = *piVar1 * 8 + iStack_15c;
    iStack_158 = iStack_160;
    iStack_150 = iStack_15c;
    iStack_14c = iStack_160;
    piStack_c0 = piVar3;
    piStack_bc = aiStack_178;
    if (iVar6 != 0) {
      iVar8 = *piVar1;
      iVar11 = iVar8 + iVar6;
      if (iVar11 < piVar1[1]) {
        iStack_13c = piVar1[2];
        iStack_140 = iVar8 * 8 + iStack_13c;
        uStack_130 = CONCAT44(iStack_140,iStack_13c);
        iStack_138 = iStack_140;
        if (iStack_160 == iStack_140) {
          iVar6 = piVar1[2] + *piVar1 * 8;
          for (; piVar3 != aiStack_178; piVar3 = piVar3 + 2) {
            FUN_00387398(iVar6,piVar3);
            *(int *)(iVar6 + 4) = piVar3[1];
            iVar6 = iVar6 + 8;
          }
          FUN_003872c0(&uStack_130);
          uStack_130 = uStack_130 & 0xffffffff;
          iVar6 = iVar11 * 8 + piVar1[2];
          FUN_00387398(iVar6,&uStack_130);
          *(undefined4 *)(iVar6 + 4) = uStack_130._4_4_;
          FUN_00387328(&uStack_130,2);
          *piVar1 = iVar11;
        }
        else {
          uStack_130 = CONCAT44(iStack_15c,iStack_160);
          uStack_120._4_4_ = piVar1[2];
          iStack_118 = *piVar1 * 8 + uStack_120._4_4_;
          iVar9 = iStack_118 - iStack_160 >> 3;
          iStack_110 = piVar1[2];
          iStack_108 = *piVar1 * 8 + iStack_110;
          iStack_128 = iStack_160;
          iVar8 = iStack_118;
          iStack_10c = iStack_110;
          iStack_100 = iStack_110;
          iStack_fc = iStack_108;
          iVar6 = iVar6 * 8 + (iStack_160 - iStack_110 >> 3) * 8 + piVar1[2] + iVar9 * 8;
          while (iVar9 = iVar9 + -1, iVar9 != -1) {
            uStack_120._0_4_ = iVar8 + -8;
            FUN_00387398(iVar6 + -8,(int)uStack_120);
            *(undefined4 *)(iVar6 + -4) = *(undefined4 *)(iVar8 + -4);
            iVar8 = (int)uStack_120;
            iVar6 = iVar6 + -8;
          }
          piVar10 = *ppiStack_b4;
          uStack_120 = CONCAT44(iStack_15c,iStack_160);
          iStack_118 = iStack_158;
          for (piVar3 = *ppiStack_b8; uVar2 = uStack_120, piVar3 != piVar10; piVar3 = piVar3 + 2) {
            uStack_d0 = uStack_120;
            iStack_c8 = iStack_118;
            iVar6 = (int)uStack_120;
            uStack_120 = CONCAT44(uStack_120._4_4_,(int)uStack_120 + 8);
            uStack_e0 = uVar2;
            iStack_d8 = iStack_118;
            FUN_00387398(iVar6,piVar3);
            *(int *)(iVar6 + 4) = piVar3[1];
          }
          uStack_130 = uStack_120;
          iStack_128 = iStack_118;
          FUN_003872c0(&uStack_130);
          uStack_130 = uStack_130 & 0xffffffff;
          iVar6 = iVar11 * 8 + piVar1[2];
          FUN_00387398(iVar6,&uStack_130);
          *(undefined4 *)(iVar6 + 4) = uStack_130._4_4_;
          FUN_00387328(&uStack_130,2);
          *piVar1 = iVar11;
        }
      }
      else {
        fVar12 = (float)piVar1[1];
        iStack_140 = piVar1[2];
        iStack_b0 = iStack_160 - iStack_140 >> 3;
        iStack_138 = iVar8 * 8 + iStack_140;
        iVar6 = (int)(fVar12 + fVar12);
        uStack_130 = CONCAT44(iStack_138,iStack_140);
        if (iVar6 < iVar11) {
          iVar6 = iVar11;
        }
        if (piVar1[1] < iVar6) {
          if (iVar6 < 2) {
            piVar1[1] = iVar6;
          }
          else {
            iStack_13c = iStack_140;
            piVar3 = (int *)FUN_00107d20((iVar6 + 1) * 8 + 0x10);
            piVar10 = piVar3 + 4;
            *piVar3 = iVar6 + 1;
            piVar3 = piVar10;
            for (iVar8 = iVar6; iVar8 != -1; iVar8 = iVar8 + -1) {
              FUN_003872c0(piVar3);
              piVar3[1] = 0;
              piVar3 = piVar3 + 2;
            }
            iStack_140 = piVar1[2];
            iStack_138 = *piVar1 * 8 + iStack_140;
            iVar8 = piVar1[2];
            iStack_128 = *piVar1 * 8 + iVar8;
            uStack_120 = CONCAT44(iStack_128,iVar8);
            uStack_130 = CONCAT44(iVar8,iStack_128);
            piVar3 = piVar10;
            iStack_13c = iStack_140;
            if (iStack_140 != iStack_128) {
              do {
                iVar8 = iStack_140;
                uStack_f0 = CONCAT44(iStack_13c,iStack_140);
                iStack_d8 = iStack_138;
                iStack_140 = iStack_140 + 8;
                iStack_e8 = iStack_138;
                uStack_e0 = uStack_f0;
                FUN_00387398(piVar3,iVar8);
                piVar3[1] = *(int *)(iVar8 + 4);
                piVar3 = piVar3 + 2;
              } while (iStack_140 != (int)uStack_130);
            }
            piVar3 = (int *)piVar1[2];
            piVar1[1] = iVar6;
            if (piVar3 != piVar1 + 3) {
              if (piVar3 == (int *)0x0) {
                puVar4 = (undefined4 *)FUN_00107d20(0x10);
                *puVar4 = 0;
              }
              else {
                piVar7 = piVar3 + piVar3[-4] * 2;
                while (piVar3 != piVar7) {
                  piVar7 = piVar7 + -2;
                  FUN_00387328(piVar7,2);
                }
                FUN_00107d50(piVar3 + -4);
              }
            }
            piVar1[2] = (int)piVar10;
            iVar6 = *piVar1;
            FUN_003872c0(&iStack_140);
            iStack_13c = 0;
            iVar6 = iVar6 * 8 + piVar1[2];
            FUN_00387398(iVar6,&iStack_140);
            *(int *)(iVar6 + 4) = iStack_13c;
            FUN_00387328(&iStack_140,2);
          }
        }
        iStack_13c = piVar1[2];
        iStack_138 = *piVar1 * 8 + iStack_13c;
        iStack_140 = iStack_b0 * 8 + iStack_13c;
        uStack_120 = CONCAT44(iStack_138,iStack_13c);
        uStack_130 = CONCAT44(iStack_13c,iStack_13c);
        iStack_128 = iStack_138;
        FUN_00386998(piVar1,ppiStack_b8,ppiStack_b4,&iStack_140);
      }
    }
    FUN_00387328(&iStack_180,2);
  }
LAB_0024547c:
  iVar6 = *param_1;
LAB_00245480:
  if ((iVar6 != 0) && (lVar5 = FUN_00244ce8(), lVar5 == 0)) {
    FUN_00244cf8(*param_1);
  }
  return;
}


// ==== FUN_002454d0 @ 002454d0 ====

void FUN_002454d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = DAT_003fdeb0;
  uVar1 = DAT_003fdea8;
  FUN_0035c6ec(&uStack_20,0,0x10);
  puVar3 = (undefined4 *)(DAT_003beef0 + (uint)uGpffff8656 * 0x60);
  puVar3[0xf] = 0x3f800000;
  *puVar3 = 0x3f800000;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0x3f800000;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0x3f800000;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x12) = uVar2;
  *(undefined8 *)(puVar3 + 0x14) = uStack_20;
  *(undefined8 *)(puVar3 + 0x16) = uStack_18;
  return;
}


// ==== FUN_002455c0 @ 002455c0 ====

void FUN_002455c0(void)

{
  sGpffff8656 = sGpffff8656 + 1;
  FUN_002454d0();
  return;
}


// ==== FUN_002455e8 @ 002455e8 ====

void FUN_002455e8(int param_1)

{
  if ((DAT_003be8f0 & 1) == 0) {
    DAT_003beef4 = (undefined4 *)FUN_00250058(DAT_0043dee0,param_1 * 0x60 | 0x10);
    DAT_003beef0 = DAT_003beef4;
    if (((uint)DAT_003beef4 & 0xf) != 0) {
      DAT_003beef0 = (undefined4 *)((uint)(DAT_003beef4 + 4) & 0xfffffff0);
    }
  }
  else {
    DAT_003beef4 = &DAT_70002000;
    DAT_003beef0 = &DAT_70002000;
  }
  uGpffff8654 = (undefined2)param_1;
  uGpffff8656 = 0;
  FUN_002454d0();
  return;
}


// ==== FUN_00246060 @ 00246060 ====

uint * FUN_00246060(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  puVar6 = DAT_003bfae4;
  if ((DAT_0043dba4 & 3) == 1) {
    uVar7 = DAT_0043dba4 >> 0x11;
    if (uVar7 - 0x20 < 0x5f) {
      if ((*(byte *)((int)&PTR_DAT_0040a991 + uVar7) & 2) != 0) {
        uVar7 = uVar7 - 0x20;
      }
    }
    else if (uVar7 < 0x14) {
      uVar7 = *(uint *)(&DAT_003ffc50 + uVar7 * 4);
    }
    uVar5 = FUN_0024c300(*(undefined4 *)(DAT_0043db68 * 4 + DAT_0043db70 + -4));
    puVar6 = DAT_003bfae4;
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar1 = *DAT_003bfae4;
      uVar4 = DAT_003bfae4[2];
      *DAT_003bfae4 = uVar1 | 4;
      DAT_003bfae4 = (uint *)uVar4;
      piVar3 = DAT_003be8e0;
      iVar2 = DAT_003be8e0[1];
      if (iVar2 < *DAT_003be8e0) {
        *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar6;
        piVar3[1] = iVar2 + 1;
      }
      else {
        *puVar6 = uVar1 & 0xfffffffb;
      }
      *(bool *)(puVar6 + 2) = uVar7 == uVar5;
      return puVar6;
    }
    puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,5);
    *(bool *)(puVar6 + 2) = uVar7 == uVar5;
  }
  else {
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar7 = *DAT_003bfae4;
      uVar5 = DAT_003bfae4[2];
      *DAT_003bfae4 = uVar7 | 4;
      DAT_003bfae4 = (uint *)uVar5;
      piVar3 = DAT_003be8e0;
      iVar2 = DAT_003be8e0[1];
      if (iVar2 < *DAT_003be8e0) {
        *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar6;
        piVar3[1] = iVar2 + 1;
      }
      else {
        *puVar6 = uVar7 & 0xfffffffb;
      }
      *(undefined1 *)(puVar6 + 2) = 0;
      return puVar6;
    }
    puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,5);
    *(undefined1 *)(puVar6 + 2) = 0;
  }
  puVar6[1] = (uint)&DAT_003e2120;
  return puVar6;
}


// ==== FUN_00246248 @ 00246248 ====

uint * FUN_00246248(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    puVar5 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
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
  return puVar5;
}


// ==== FUN_00246308 @ 00246308 ====

uint * FUN_00246308(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar5 = DAT_003bfaec;
  uVar6 = DAT_0043dba4 >> 0x11;
  if (uVar6 - 0x20 < 0x5f) {
    if ((*(byte *)((int)&PTR_DAT_0040a991 + uVar6) & 2) != 0) {
      uVar6 = uVar6 - 0x20;
    }
  }
  else if (uVar6 < 0x14) {
    uVar6 = *(uint *)(&DAT_003ffc50 + uVar6 * 4);
  }
  if (DAT_003bfaec == (uint *)0x0) {
    puVar5 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,7);
    puVar5[2] = uVar6;
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
    puVar5[2] = uVar6;
  }
  return puVar5;
}


// ==== FUN_00246420 @ 00246420 ====

uint * FUN_00246420(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  puVar4 = DAT_003bfaec;
  uVar7 = DAT_0043dba4 >> 0x11;
  if ((DAT_0043dba4 >> 2 & 0xff) == 0) {
    if (DAT_003bfaec == (uint *)0x0) {
LAB_00246514:
      puVar4 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar4,7);
      puVar4[2] = uVar7;
      puVar4[1] = (uint)&DAT_003e2230;
      return puVar4;
    }
    uVar5 = *DAT_003bfaec | 4;
    uVar2 = DAT_003bfaec[2];
    *DAT_003bfaec = uVar5;
    DAT_003bfaec = (uint *)uVar2;
    iVar6 = DAT_003be8e0[1];
    if (iVar6 < *DAT_003be8e0) {
      iVar3 = DAT_003be8e0[2];
LAB_002464f4:
      piVar1 = DAT_003be8e0;
      *(uint **)(iVar6 * 4 + iVar3) = puVar4;
      piVar1[1] = iVar6 + 1;
      goto LAB_00246508;
    }
  }
  else {
    if (uVar7 < 0x14) {
      uVar7 = *(uint *)(&DAT_003ffc50 + uVar7 * 4);
    }
    if (DAT_003bfaec == (uint *)0x0) goto LAB_00246514;
    uVar5 = *DAT_003bfaec | 4;
    uVar2 = DAT_003bfaec[2];
    *DAT_003bfaec = uVar5;
    DAT_003bfaec = (uint *)uVar2;
    iVar6 = DAT_003be8e0[1];
    if (iVar6 < *DAT_003be8e0) {
      iVar3 = DAT_003be8e0[2];
      goto LAB_002464f4;
    }
  }
  *puVar4 = uVar5 & 0xfffffffb;
LAB_00246508:
  puVar4[2] = uVar7;
  return puVar4;
}


// ==== FUN_00246560 @ 00246560 ====

uint * FUN_00246560(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar5 = DAT_003bfaec;
  uVar6 = (DAT_0043dba4 >> 2 & 0xff) - 2;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar5 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,7);
    puVar5[2] = uVar6;
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
    puVar5[2] = uVar6;
  }
  return puVar5;
}


// ==== FUN_00246638 @ 00246638 ====

undefined4 FUN_00246638(undefined8 param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = DAT_0043df68;
  if (param_2 == 1) {
    puVar1 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    uVar8 = (int)*puVar1 >> 4 & 1;
    if (uVar8 != 0) {
      uVar4 = 0;
      if ((*puVar1 >> 0x19) - 0xc < 8) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) || ((puVar1[0x16] >> 0x12 & 3) == 0)) {
        iVar7 = 0;
        if (*(ushort *)(DAT_0043df68 + 10) != 0) {
          puVar5 = *(undefined4 **)(DAT_0043df68 + 0xc);
          do {
            iVar7 = iVar7 + 1;
            if ((uint *)*puVar5 == puVar1) {
              bVar2 = true;
              goto LAB_00246714;
            }
            puVar5 = puVar5 + 1;
          } while (iVar7 < (int)(uint)*(ushort *)(DAT_0043df68 + 10));
        }
        bVar2 = false;
LAB_00246714:
        if (!bVar2) {
          uVar3 = *(short *)(DAT_0043df68 + 8) + 1;
          *(ushort *)(DAT_0043df68 + 8) = uVar3;
          uVar8 = (uint)uVar3;
          if (*(int *)((uint)uVar3 * 4 + *(int *)(iVar6 + 0xc)) == 0) {
            iVar6 = *(int *)(iVar6 + 0xc);
          }
          else {
            bVar2 = uVar8 < *(ushort *)(iVar6 + 10);
            do {
              if (!bVar2) {
                uVar8 = 0;
              }
              uVar8 = uVar8 + 1;
              bVar2 = (int)uVar8 < (int)(uint)*(ushort *)(iVar6 + 10);
            } while (*(int *)(uVar8 * 4 + *(int *)(iVar6 + 0xc)) != 0);
            iVar6 = *(int *)(iVar6 + 0xc);
          }
          *(uint **)(uVar8 * 4 + iVar6) = puVar1;
          (**(code **)(puVar1[1] + 0xc))((int)puVar1 + (int)*(short *)(puVar1[1] + 8));
        }
      }
    }
  }
  return DAT_0043df40;
}


// ==== FUN_002467b0 @ 002467b0 ====

uint * FUN_002467b0(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = DAT_0043df68;
  puVar6 = DAT_003bfae4;
  if (param_2 == 1) {
    piVar1 = *(int **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    if ((*piVar1 >> 4 & 1U) != 0) {
      iVar9 = 0;
      if (*(ushort *)(DAT_0043df68 + 10) != 0) {
        puVar8 = *(undefined4 **)(DAT_0043df68 + 0xc);
        do {
          iVar9 = iVar9 + 1;
          if ((int *)*puVar8 == piVar1) {
            bVar4 = true;
            goto LAB_00246884;
          }
          puVar8 = puVar8 + 1;
        } while (iVar9 < (int)(uint)*(ushort *)(DAT_0043df68 + 10));
      }
      bVar4 = false;
LAB_00246884:
      if (bVar4) {
        if (*(short *)(DAT_0043df68 + 8) != 0) {
          uVar5 = (uint)*(ushort *)(DAT_0043df68 + 10);
          iVar9 = 0;
          if (uVar5 != 0) {
            puVar8 = *(undefined4 **)(DAT_0043df68 + 0xc);
            bVar4 = uVar5 != 0;
            if ((int *)*puVar8 == piVar1) {
LAB_002468e4:
              if (bVar4) {
                piVar1 = (int *)(DAT_0043df68 + 0xc);
                *(short *)(DAT_0043df68 + 8) = *(short *)(DAT_0043df68 + 8) + -1;
                iVar2 = *(int *)(iVar9 * 4 + *piVar1);
                iVar3 = *(int *)(iVar2 + 4);
                (**(code **)(iVar3 + 0x14))(iVar2 + *(short *)(iVar3 + 0x10));
                *(undefined4 *)(iVar9 * 4 + *(int *)(iVar10 + 0xc)) = 0;
              }
            }
            else {
              for (iVar9 = 1; puVar8 = puVar8 + 1, iVar9 < (int)uVar5; iVar9 = iVar9 + 1) {
                if ((int *)*puVar8 == piVar1) {
                  bVar4 = iVar9 < (int)uVar5;
                  goto LAB_002468e4;
                }
              }
            }
          }
        }
        puVar6 = DAT_003bfae4;
        if (DAT_003bfae4 != (uint *)0x0) {
          uVar5 = *DAT_003bfae4;
          uVar7 = DAT_003bfae4[2];
          *DAT_003bfae4 = uVar5 | 4;
          DAT_003bfae4 = (uint *)uVar7;
          piVar1 = DAT_003be8e0;
          iVar10 = DAT_003be8e0[1];
          if (iVar10 < *DAT_003be8e0) {
            *(uint **)(iVar10 * 4 + DAT_003be8e0[2]) = puVar6;
            piVar1[1] = iVar10 + 1;
          }
          else {
            *puVar6 = uVar5 & 0xfffffffb;
          }
          *(undefined1 *)(puVar6 + 2) = 1;
          return puVar6;
        }
        puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar6,5);
        *(undefined1 *)(puVar6 + 2) = 1;
        goto LAB_00246a50;
      }
    }
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar7 = *DAT_003bfae4 | 4;
      uVar5 = DAT_003bfae4[2];
      *DAT_003bfae4 = uVar7;
      DAT_003bfae4 = (uint *)uVar5;
      iVar10 = DAT_003be8e0[1];
      if (iVar10 < *DAT_003be8e0) {
        iVar9 = DAT_003be8e0[2];
        goto LAB_00246a04;
      }
      goto LAB_002469f8;
    }
  }
  else if (DAT_003bfae4 != (uint *)0x0) {
    uVar7 = *DAT_003bfae4 | 4;
    uVar5 = DAT_003bfae4[2];
    *DAT_003bfae4 = uVar7;
    DAT_003bfae4 = (uint *)uVar5;
    iVar10 = DAT_003be8e0[1];
    if (iVar10 < *DAT_003be8e0) {
      iVar9 = DAT_003be8e0[2];
LAB_00246a04:
      piVar1 = DAT_003be8e0;
      *(uint **)(iVar10 * 4 + iVar9) = puVar6;
      piVar1[1] = iVar10 + 1;
      goto LAB_00246a18;
    }
LAB_002469f8:
    *puVar6 = uVar7 & 0xfffffffb;
LAB_00246a18:
    *(undefined1 *)(puVar6 + 2) = 0;
    return puVar6;
  }
  puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
  FUN_00386ec8(puVar6,5);
  *(undefined1 *)(puVar6 + 2) = 0;
LAB_00246a50:
  puVar6[1] = (uint)&DAT_003e2120;
  return puVar6;
}


// ==== FUN_00246a78 @ 00246a78 ====

/* Strings referenciadas:
     "fXAxisValue"
     "fYAxisValue" */

undefined8 FUN_00246a78(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  short *apsStack_b0 [4];
  short *apsStack_a0 [4];
  
  uVar11 = 0;
  uVar10 = 0x1f7;
  if (DAT_0043dba4 != 0) {
    uVar10 = DAT_0043dba4 >> 0x11;
    uVar11 = DAT_0043dba4 >> 2 & 0xff;
  }
  uVar8 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(uVar8,0x1b);
  iVar9 = (int)uVar8;
  *(undefined **)(iVar9 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar9 + 8,8);
  *(undefined1 *)(iVar9 + 0x1c) = 0;
  *(undefined **)(iVar9 + 4) = &DAT_003e1e78;
  *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xfffffcff;
  puVar6 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,7);
    puVar6[2] = uVar11 - 2;
    puVar6[1] = (uint)&DAT_003e2230;
  }
  else {
    uVar2 = *DAT_003bfaec;
    puVar7 = (uint *)DAT_003bfaec[2];
    *DAT_003bfaec = uVar2 | 4;
    DAT_003bfaec = puVar7;
    piVar4 = DAT_003be8e0;
    iVar3 = DAT_003be8e0[1];
    if (iVar3 < *DAT_003be8e0) {
      *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar6;
      piVar4[1] = iVar3 + 1;
    }
    else {
      *puVar6 = uVar2 & 0xfffffffb;
    }
    puVar6[2] = uVar11 - 2;
  }
  iVar9 = iVar9 + 8;
  FUN_002488d0(iVar9,0x43dcd4,puVar6);
  FUN_00253ff0(apsStack_b0,0x3fe440);
  puVar6 = DAT_003bfae8;
  if (uVar10 == 0x1f5) {
    uVar11 = *(uint *)(DAT_0043df68 + 0x5c);
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,6);
      puVar6[2] = uVar11;
      puVar6[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar10 = *DAT_003bfae8;
      puVar7 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar10 | 4;
      DAT_003bfae8 = puVar7;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar6;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar6 = uVar10 & 0xfffffffb;
      }
      puVar6[2] = uVar11;
    }
    puVar7 = DAT_003bfae8;
    uVar11 = *(uint *)(DAT_0043df68 + 0x60);
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar7 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,6);
      puVar7[2] = uVar11;
      puVar7[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar10 = *DAT_003bfae8;
      puVar5 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar10 | 4;
      DAT_003bfae8 = puVar5;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar10 & 0xfffffffb;
      }
      puVar7[2] = uVar11;
    }
    FUN_002488d0(iVar9,apsStack_b0,puVar6);
    FUN_00253ff0(apsStack_a0,0x3fe450);
    *apsStack_a0[0] = *apsStack_a0[0] + 1;
    sVar1 = *apsStack_b0[0];
    *apsStack_b0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
    }
    apsStack_b0[0] = apsStack_a0[0];
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    }
    FUN_002488d0(iVar9,apsStack_b0,puVar7);
  }
  else if (uVar10 == 0x1f6) {
    uVar11 = *(uint *)(DAT_0043df68 + 0x6c);
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,6);
      puVar6[2] = uVar11;
      puVar6[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar10 = *DAT_003bfae8;
      puVar7 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar10 | 4;
      DAT_003bfae8 = puVar7;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar6;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar6 = uVar10 & 0xfffffffb;
      }
      puVar6[2] = uVar11;
    }
    puVar7 = DAT_003bfae8;
    uVar11 = *(uint *)(DAT_0043df68 + 0x70);
    if (DAT_003bfae8 == (uint *)0x0) {
      puVar7 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar7,6);
      puVar7[2] = uVar11;
      puVar7[1] = (uint)&DAT_003e2098;
    }
    else {
      uVar10 = *DAT_003bfae8;
      puVar5 = (uint *)DAT_003bfae8[2];
      *DAT_003bfae8 = uVar10 | 4;
      DAT_003bfae8 = puVar5;
      piVar4 = DAT_003be8e0;
      iVar3 = DAT_003be8e0[1];
      if (iVar3 < *DAT_003be8e0) {
        *(uint **)(iVar3 * 4 + DAT_003be8e0[2]) = puVar7;
        piVar4[1] = iVar3 + 1;
      }
      else {
        *puVar7 = uVar10 & 0xfffffffb;
      }
      puVar7[2] = uVar11;
    }
    FUN_00253ff0(apsStack_a0,0x3fe440);
    *apsStack_a0[0] = *apsStack_a0[0] + 1;
    sVar1 = *apsStack_b0[0];
    *apsStack_b0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
    }
    apsStack_b0[0] = apsStack_a0[0];
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    }
    FUN_002488d0(iVar9,apsStack_b0,puVar6);
    FUN_00253ff0(apsStack_a0,0x3fe450);
    *apsStack_a0[0] = *apsStack_a0[0] + 1;
    sVar1 = *apsStack_b0[0];
    *apsStack_b0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
    }
    apsStack_b0[0] = apsStack_a0[0];
    sVar1 = *apsStack_a0[0];
    *apsStack_a0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
    }
    FUN_002488d0(iVar9,apsStack_b0,puVar7);
  }
  sVar1 = *apsStack_b0[0];
  *apsStack_b0[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
  }
  return uVar8;
}


// ==== FUN_00247388 @ 00247388 ====

/* Strings referenciadas:
     "message" */

undefined4 FUN_00247388(int param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  short sVar1;
  long lVar2;
  short *apsStack_50 [4];
  
  lVar2 = FUN_0035ca74(*param_3 + 8,0x3fe460);
  if (lVar2 == 0) {
    apsStack_50[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_4,apsStack_50);
    param_1 = param_1 + 0x20;
  }
  else {
    lVar2 = FUN_0035ca74(*param_3 + 8,0x3fe468);
    if (lVar2 != 0) {
      return 0;
    }
    apsStack_50[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_4,apsStack_50);
    param_1 = param_1 + 0x24;
  }
  FUN_00253058(param_1,apsStack_50);
  sVar1 = *apsStack_50[0];
  *apsStack_50[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
  }
  return 1;
}


// ==== FUN_00247488 @ 00247488 ====

void FUN_00247488(undefined8 param_1,ulong param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 4) = &DAT_003e1320;
  psVar2 = *(short **)(iVar3 + 0x24);
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  psVar2 = *(short **)(iVar3 + 0x20);
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  *(undefined **)(iVar3 + 4) = &DAT_003e1e78;
  FUN_002486d8(iVar3 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x28);
  }
  return;
}


// ==== FUN_00247560 @ 00247560 ====

uint * FUN_00247560(undefined8 param_1)

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
  undefined1 auStack_50 [16];
  
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
  FUN_0024e8c8(apsStack_60,param_1);
  FUN_003872e0(auStack_50,apsStack_60[0] + 4);
  FUN_00387398(puVar6 + 2,auStack_50);
  FUN_00387328(auStack_50,2);
  sVar1 = *apsStack_60[0];
  *apsStack_60[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_60[0],(ushort)apsStack_60[0][2] + 9);
  }
  return puVar6;
}


// ==== FUN_00247880 @ 00247880 ====

void FUN_00247880(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short *apsStack_c0 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  
  uStack_b0 = param_3;
  uVar9 = FUN_00250058(DAT_0043dee0,0x14);
  iVar5 = FUN_00248678(uVar9,2);
  param_1[2] = iVar5;
  iVar5 = (int)param_2;
  if (param_1[1] != 0) {
    param_1[1] = iVar5 + param_1[1];
  }
  if (*param_1 < 1) {
    return;
  }
  iVar10 = param_1[1];
  uVar14 = 0;
  do {
    iVar6 = uVar14 * 8;
    iVar12 = *(int *)(iVar6 + iVar10 + 4);
    if (iVar12 != 0) {
      *(int *)(iVar6 + iVar10 + 4) = iVar5 + iVar12;
    }
    uStack_ac = uVar14 + 1;
    iVar10 = 0;
    if (0 < *(int *)(iVar6 + param_1[1])) {
      piVar11 = (int *)(iVar6 + param_1[1]);
      iVar12 = 0;
      do {
        iVar7 = *(int *)(iVar12 + piVar11[1]);
        if (iVar7 != 0) {
          *(int *)(iVar12 + piVar11[1]) = iVar5 + iVar7;
        }
        piVar11 = *(int **)(iVar12 + *(int *)(iVar6 + param_1[1] + 4));
        iVar7 = *piVar11;
        if (iVar7 == 2) {
          if (piVar11[1] != 0) {
            piVar11[1] = iVar5 + piVar11[1];
          }
          FUN_00253ff0(apsStack_c0,
                       *(undefined4 *)(*(int *)(iVar12 + *(int *)(iVar6 + param_1[1] + 4)) + 4));
          puVar8 = DAT_003bfaec;
          if (DAT_003bfaec == (uint *)0x0) {
            puVar8 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
            FUN_00386ec8(puVar8,7);
            puVar8[2] = uVar14;
            puVar8[1] = (uint)&DAT_003e2230;
          }
          else {
            uVar3 = *DAT_003bfaec;
            puVar4 = (uint *)DAT_003bfaec[2];
            *DAT_003bfaec = uVar3 | 4;
            DAT_003bfaec = puVar4;
            piVar11 = DAT_003be8e0;
            iVar12 = DAT_003be8e0[1];
            if (iVar12 < *DAT_003be8e0) {
              *(uint **)(iVar12 * 4 + DAT_003be8e0[2]) = puVar8;
              piVar11[1] = iVar12 + 1;
            }
            else {
              *puVar8 = uVar3 & 0xfffffffb;
            }
            puVar8[2] = uVar14;
          }
          FUN_002488d0(param_1[2],apsStack_c0,puVar8);
          sVar1 = *apsStack_c0[0];
          *apsStack_c0[0] = sVar1 + -1;
          if ((short)(sVar1 + -1) == 0) {
            FUN_00250198(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
          }
          goto LAB_00247c0c;
        }
        if (iVar7 < 3) {
          if (iVar7 == 1) {
            if (piVar11[1] != 0) {
              piVar11[1] = iVar5 + piVar11[1];
            }
            FUN_0021bae0(*(undefined4 *)(*(int *)(iVar12 + *(int *)(iVar6 + param_1[1] + 4)) + 4),
                         param_2,uStack_b0,param_4);
            iVar12 = param_1[1];
          }
          else {
            iVar12 = param_1[1];
          }
        }
        else if (iVar7 == 3) {
          if (piVar11[0xd] != 0) {
            piVar11[0xd] = iVar5 + piVar11[0xd];
          }
          iVar7 = *(int *)(iVar12 + *(int *)(iVar6 + param_1[1] + 4));
          iVar13 = *(int *)(iVar7 + 0x3c);
          if (iVar13 != 0) {
            *(int *)(iVar7 + 0x3c) = iVar5 + iVar13;
          }
          piVar11 = *(int **)(*(int *)(iVar12 + *(int *)(iVar6 + param_1[1] + 4)) + 0x3c);
          if (piVar11 != (int *)0x0) {
            if (piVar11[1] != 0) {
              piVar11[1] = iVar5 + piVar11[1];
            }
            iVar12 = 0;
            if (0 < *piVar11) {
              iVar13 = 0;
              iVar7 = piVar11[1];
              while( true ) {
                iVar2 = *(int *)(iVar13 + iVar7 + 8);
                if (iVar2 != 0) {
                  *(int *)(iVar13 + iVar7 + 8) = iVar5 + iVar2;
                }
                iVar7 = iVar13 + piVar11[1];
                iVar12 = iVar12 + 1;
                iVar13 = iVar13 + 0xc;
                FUN_0021bae0(*(undefined4 *)(iVar7 + 8),param_2,uStack_b0,param_4);
                if (*piVar11 <= iVar12) break;
                iVar7 = piVar11[1];
              }
              iVar12 = param_1[1];
              goto LAB_00247c10;
            }
          }
LAB_00247c0c:
          iVar12 = param_1[1];
        }
        else if (iVar7 == 8) {
          if (piVar11[2] != 0) {
            piVar11[2] = iVar5 + piVar11[2];
          }
          FUN_0021bae0(*(undefined4 *)(*(int *)(iVar12 + *(int *)(iVar6 + param_1[1] + 4)) + 8),
                       param_2,uStack_b0,param_4);
          iVar12 = param_1[1];
        }
        else {
          iVar12 = param_1[1];
        }
LAB_00247c10:
        iVar10 = iVar10 + 1;
        piVar11 = (int *)(iVar6 + iVar12);
        iVar12 = iVar10 * 4;
      } while (iVar10 < *piVar11);
    }
    if (*param_1 <= (int)uStack_ac) {
      return;
    }
    iVar10 = param_1[1];
    uVar14 = uStack_ac;
  } while( true );
}


// ==== FUN_00247c70 @ 00247c70 ====

void FUN_00247c70(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = 0;
  iVar8 = (int)param_2;
  if (*param_1 < 1) {
LAB_00247ef4:
    if (param_1[1] != 0) {
      param_1[1] = param_1[1] - iVar8;
    }
    if (param_1[2] != 0) {
      FUN_002487e0();
      if (param_1[2] == 0) {
        param_1[2] = 0;
      }
      else {
        FUN_002486d8(param_1[2],3);
        param_1[2] = 0;
      }
    }
    return;
  }
  iVar6 = 0;
  do {
    iVar7 = param_1[1];
    iVar3 = iVar3 + 1;
    iVar9 = 0;
    if (0 < *(int *)(iVar6 + iVar7)) {
      do {
        iVar4 = iVar9 * 4;
        piVar5 = *(int **)(iVar4 + *(int *)(iVar6 + iVar7 + 4));
        iVar7 = *piVar5;
        if (iVar7 == 2) {
          iVar7 = piVar5[1];
LAB_00247e80:
          iVar2 = iVar7 - iVar8;
          if (iVar7 != 0) {
LAB_00247e88:
            piVar5[1] = iVar2;
          }
LAB_00247e8c:
          iVar7 = param_1[1];
        }
        else {
          if (2 < iVar7) {
            if (iVar7 != 3) {
              if (iVar7 != 8) {
                iVar7 = param_1[1];
                goto LAB_00247e90;
              }
              FUN_0021bac0(piVar5[2],param_2,param_3);
              iVar7 = *(int *)(iVar4 + *(int *)(iVar6 + param_1[1] + 4));
              iVar2 = *(int *)(iVar7 + 8);
              if (iVar2 != 0) {
                *(int *)(iVar7 + 8) = iVar2 - iVar8;
              }
              piVar5 = *(int **)(iVar4 + *(int *)(iVar6 + param_1[1] + 4));
              if (-1 < piVar5[1]) goto LAB_00247e8c;
              iVar2 = -piVar5[1];
              goto LAB_00247e88;
            }
            piVar5 = (int *)piVar5[0xf];
            if (piVar5 != (int *)0x0) {
              iVar7 = 0;
              if (0 < *piVar5) {
                iVar2 = 0;
                do {
                  FUN_0021bac0(*(undefined4 *)(iVar2 + piVar5[1] + 8),param_2,param_3);
                  iVar1 = *(int *)(iVar2 + piVar5[1] + 8);
                  if (iVar1 != 0) {
                    *(int *)(iVar2 + piVar5[1] + 8) = iVar1 - iVar8;
                  }
                  iVar7 = iVar7 + 1;
                  iVar2 = iVar2 + 0xc;
                } while (iVar7 < *piVar5);
              }
              if (piVar5[1] != 0) {
                piVar5[1] = piVar5[1] - iVar8;
              }
            }
            iVar7 = *(int *)(iVar4 + *(int *)(iVar6 + param_1[1] + 4));
            iVar2 = *(int *)(iVar7 + 0x34);
            if (iVar2 != 0) {
              *(int *)(iVar7 + 0x34) = iVar2 - iVar8;
            }
            iVar7 = *(int *)(iVar4 + *(int *)(iVar6 + param_1[1] + 4));
            iVar2 = *(int *)(iVar7 + 0x3c);
            if (iVar2 != 0) {
              *(int *)(iVar7 + 0x3c) = iVar2 - iVar8;
            }
            goto LAB_00247e8c;
          }
          if (iVar7 == 1) {
            FUN_0021bac0(piVar5[1],param_2,param_3);
            piVar5 = *(int **)(iVar4 + *(int *)(iVar6 + param_1[1] + 4));
            iVar7 = piVar5[1];
            goto LAB_00247e80;
          }
          iVar7 = param_1[1];
        }
LAB_00247e90:
        iVar9 = iVar9 + 1;
        piVar5 = (int *)(iVar4 + *(int *)(iVar6 + iVar7 + 4));
        iVar7 = *piVar5;
        if (iVar7 != 0) {
          *piVar5 = iVar7 - iVar8;
        }
        iVar7 = param_1[1];
      } while (iVar9 < *(int *)(iVar6 + iVar7));
    }
    iVar7 = *(int *)(iVar6 + param_1[1] + 4);
    if (iVar7 != 0) {
      *(int *)(iVar6 + param_1[1] + 4) = iVar7 - iVar8;
    }
    if (*param_1 <= iVar3) goto LAB_00247ef4;
    iVar6 = iVar3 * 8;
  } while( true );
}


// ==== FUN_00247f60 @ 00247f60 ====

void FUN_00247f60(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  
  iVar8 = 0;
  iVar5 = (int)param_3 * 8;
  iVar1 = *(int *)((int)param_2 + 4);
  if (*(int *)(iVar5 + *(int *)(param_1 + 4)) < 1) {
    return;
  }
  iVar5 = iVar5 + *(int *)(param_1 + 4);
  do {
    puVar2 = *(undefined4 **)(iVar8 * 4 + *(int *)(iVar5 + 4));
    switch(*puVar2) {
    case 3:
      FUN_0023e9e0(param_2,puVar2[2],auStack_a0,(uint)auStack_a0 | 4);
      uVar9 = 0;
      iVar5 = puVar2[3];
      if (iVar5 != -1) {
        uVar9 = *(undefined4 *)
                 (iVar5 * 4 + *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x48) + 8) + 4) + 0x18));
      }
      if ((iStack_9c == 0) || (iVar5 != -1)) {
        uVar4 = FUN_00250058(DAT_0043dee0,0x14);
        uVar3 = puVar2[2];
        goto LAB_00248134;
      }
      puVar6 = puVar2 + 4;
      if ((puVar2[1] & 4) == 0) {
        puVar6 = *(undefined4 **)(*(int *)(iStack_9c + 4) + 4);
      }
      *(undefined4 **)(*(int *)(iStack_9c + 4) + 4) = puVar6;
      puVar6 = puVar2 + 10;
      if ((puVar2[1] & 8) == 0) {
        puVar6 = *(undefined4 **)(*(int *)(iStack_9c + 4) + 8);
      }
      *(undefined4 **)(*(int *)(iStack_9c + 4) + 8) = puVar6;
      if ((puVar2[1] & 0x80) == 0) {
        uVar9 = *(undefined4 *)(*(int *)(iStack_9c + 4) + 0xc);
      }
      else {
        uVar9 = puVar2[0xf];
      }
      *(undefined4 *)(*(int *)(iStack_9c + 4) + 0xc) = uVar9;
      if ((puVar2[1] & 0x10) == 0) {
        uVar9 = *(undefined4 *)(*(int *)(iStack_9c + 4) + 0x10);
      }
      else {
        uVar9 = puVar2[0xc];
      }
      *(undefined4 *)(*(int *)(iStack_9c + 4) + 0x10) = uVar9;
      *(uint *)(*(int *)(iStack_9c + 4) + 0x14) =
           *(uint *)(*(int *)(iStack_9c + 4) + 0x14) | puVar2[1];
    default:
switchD_00247fec_caseD_1:
      iVar7 = *(int *)(param_1 + 4);
      break;
    case 4:
      uVar4 = FUN_00250058(DAT_0043dee0,0x14);
      uVar3 = puVar2[1];
      uVar9 = 0;
LAB_00248134:
      uVar4 = FUN_0023e8b8(uVar4,puVar2,param_3,uVar3,uVar9);
      FUN_0023ea30(param_2,uVar4);
      iVar7 = *(int *)(param_1 + 4);
      break;
    case 6:
      if (iVar1 == 0) {
        iVar7 = *(int *)(param_1 + 4);
      }
      else {
        if (param_3 == 0) {
          (*DAT_0043dacc)(*(undefined4 *)
                           (*(int *)(puVar2[1] * 4 +
                                    *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x48) + 8) + 4) +
                                            0x18)) + 8),0);
          goto switchD_00247fec_caseD_1;
        }
        iVar7 = *(int *)(param_1 + 4);
      }
    }
    iVar5 = (int)param_3 * 8;
    iVar8 = iVar8 + 1;
    if (*(int *)(iVar5 + iVar7) <= iVar8) {
      return;
    }
    iVar5 = iVar5 + iVar7;
  } while( true );
}


// ==== FUN_002481e0 @ 002481e0 ====

void FUN_002481e0(int param_1,undefined8 param_2,long param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_b0 [16];
  
  iVar7 = 0;
  iVar5 = param_4 * 8;
  iVar3 = *(int *)(param_1 + 4);
  if (0 < *(int *)(iVar5 + iVar3)) {
    iVar5 = iVar5 + iVar3;
    do {
      piVar1 = *(int **)(iVar7 * 4 + *(int *)(iVar5 + 4));
      if (*piVar1 == 8) {
        if (-1 < piVar1[1]) {
          uVar4 = FUN_0021f0f8(0x43db68,auStack_b0);
          if (param_3 == 0) {
            uVar6 = 0;
          }
          else {
            iVar3 = FUN_0023e5f0(param_3);
            uVar6 = *(undefined4 *)(iVar3 + 0x48);
          }
          FUN_00220828(0x43db68,piVar1[2],param_3,0xffffffffffffffff,uVar6);
          piVar1[1] = -piVar1[1];
          FUN_0021f120(0x43db68,uVar4,auStack_b0);
        }
        iVar3 = *(int *)(param_1 + 4);
      }
      else {
        iVar3 = *(int *)(param_1 + 4);
      }
      iVar7 = iVar7 + 1;
      iVar5 = param_4 * 8 + iVar3;
    } while (iVar7 < *(int *)(param_4 * 8 + iVar3));
    iVar3 = *(int *)(param_1 + 4);
    iVar5 = param_4 << 3;
  }
  iVar7 = 0;
  if (0 < *(int *)(iVar5 + iVar3)) {
    do {
      puVar2 = *(undefined4 **)(iVar7 * 4 + *(int *)(iVar5 + iVar3 + 4));
      switch(*puVar2) {
      case 3:
        FUN_00232230(*(int *)(*(int *)(*(int *)((int)param_3 + 0x48) + 8) + 4) + 8,param_3,puVar2[3]
                    );
        FUN_00240168(param_2,puVar2 + 1,param_3);
        iVar3 = *(int *)(param_1 + 4);
        break;
      case 4:
        FUN_002406e0(param_2,puVar2 + 1);
        iVar3 = *(int *)(param_1 + 4);
        break;
      case 5:
        if (DAT_0040e594._2_1_ == '\0') {
          (*DAT_0043da80)(puVar2[1]);
          DAT_0040e594._2_1_ = '\x01';
          goto switchD_00248334_caseD_1;
        }
        iVar3 = *(int *)(param_1 + 4);
        break;
      case 6:
        (*DAT_0043dacc)(*(undefined4 *)
                         (*(int *)(puVar2[1] * 4 +
                                  *(int *)(*(int *)(*(int *)(*(int *)((int)param_3 + 0x48) + 8) + 4)
                                          + 0x18)) + 8),0);
      default:
switchD_00248334_caseD_1:
        iVar3 = *(int *)(param_1 + 4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar5 + iVar3));
  }
  return;
}


// ==== FUN_00248438 @ 00248438 ====

void FUN_00248438(int param_1,long param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_b0 [16];
  
  iVar5 = 0;
  if (0 < *(int *)(param_3 * 8 + *(int *)(param_1 + 4))) {
    iVar3 = param_3 * 8 + *(int *)(param_1 + 4);
    while( true ) {
      piVar1 = *(int **)(iVar5 * 4 + *(int *)(iVar3 + 4));
      if (*piVar1 == 1) {
        uVar2 = FUN_0021f0f8(0x43db68,auStack_b0);
        if (param_2 == 0) {
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_0023e5f0(param_2);
          uVar4 = *(undefined4 *)(iVar3 + 0x48);
        }
        FUN_00220828(0x43db68,piVar1[1],param_2,0xffffffffffffffff,uVar4);
        FUN_0021f120(0x43db68,uVar2,auStack_b0);
        iVar3 = *(int *)(param_1 + 4);
      }
      else {
        iVar3 = *(int *)(param_1 + 4);
      }
      iVar5 = iVar5 + 1;
      if (*(int *)(param_3 * 8 + iVar3) <= iVar5) break;
      iVar3 = param_3 * 8 + iVar3;
    }
  }
  return;
}


// ==== FUN_00248550 @ 00248550 ====

void FUN_00248550(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = 0;
  param_3 = param_3 * 8;
  iVar1 = *(int *)(param_1 + 4);
  if (0 < *(int *)(param_3 + iVar1)) {
    do {
      uVar3 = DAT_003be8d8;
      piVar2 = *(int **)(iVar5 * 4 + *(int *)(param_3 + iVar1 + 4));
      if (*piVar2 == 1) {
        uVar4 = FUN_00386860(DAT_0043df68);
        FUN_00232958(uVar4,piVar2 + 1,param_2,uVar3);
        iVar1 = *(int *)(param_1 + 4);
      }
      else {
        iVar1 = *(int *)(param_1 + 4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_3 + iVar1));
  }
  return;
}


// ==== FUN_00248640 @ 00248640 ====

undefined8 FUN_00248640(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00248c78(*(undefined4 *)(param_1 + 8));
  if (lVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = FUN_0024c300(lVar1);
  }
  return uVar2;
}


// ==== FUN_00248678 @ 00248678 ====

undefined8 FUN_00248678(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)param_1;
  *puVar2 = param_2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  if ((param_2 & param_2 - 1) != 0) {
    if ((int)param_2 < 2) {
      *puVar2 = 1;
    }
    else {
      for (uVar1 = 2; (int)uVar1 < (int)param_2; uVar1 = uVar1 << 1) {
      }
      *puVar2 = uVar1;
    }
  }
  return param_1;
}


// ==== FUN_002486d8 @ 002486d8 ====

void FUN_002486d8(undefined8 param_1,ulong param_2)

{
  short sVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  if (piVar7[1] != 0) {
    iVar4 = *piVar7;
    iVar6 = 0;
    if (0 < iVar4) {
      iVar4 = piVar7[1];
      while( true ) {
        piVar3 = (int *)(iVar6 * 8 + iVar4);
        if (*piVar3 == 0) {
          iVar4 = *piVar7;
        }
        else {
          if (piVar3[1] != 0) {
            piVar3[1] = 0;
          }
          puVar5 = (undefined4 *)(iVar6 * 8 + piVar7[1]);
          psVar2 = (short *)*puVar5;
          sVar1 = *psVar2;
          *psVar2 = sVar1 + -1;
          if ((short)(sVar1 + -1) == 0) {
            FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
          }
          *puVar5 = 0;
          iVar4 = *piVar7;
        }
        iVar6 = iVar6 + 1;
        if (iVar4 <= iVar6) break;
        iVar4 = piVar7[1];
      }
    }
    FUN_00250198(DAT_0043dee0,piVar7[1],iVar4 << 3);
    piVar7[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00250198(DAT_0043dee0,param_1,0x14);
  }
  return;
}


// ==== FUN_002487e0 @ 002487e0 ====

void FUN_002487e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  if (iVar2 == 0) {
    iVar2 = param_1[2];
  }
  else {
    (**(code **)(*(int *)(iVar2 + 4) + 0x14))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x10));
    param_1[3] = 0;
    iVar2 = param_1[2];
  }
  if (iVar2 == 0) {
    iVar2 = param_1[1];
  }
  else {
    (**(code **)(*(int *)(iVar2 + 4) + 0x14))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x10));
    param_1[2] = 0;
    iVar2 = param_1[1];
  }
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < *param_1) {
      iVar1 = param_1[1];
      while( true ) {
        iVar1 = *(int *)(iVar2 * 8 + iVar1 + 4);
        if (iVar1 == 0) {
          iVar1 = *param_1;
        }
        else {
          (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
          *(undefined4 *)(iVar2 * 8 + param_1[1] + 4) = 0;
          iVar1 = *param_1;
        }
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        iVar1 = param_1[1];
      }
    }
    param_1[4] = 0;
  }
  return;
}


// ==== FUN_002488d0 @ 002488d0 ====

void FUN_002488d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if (param_3 == 0) {
    FUN_00248a98();
    return;
  }
  piVar7 = (int *)param_2;
  if ((undefined2 *)*piVar7 == &DAT_003bfaf8) {
    return;
  }
  if (((undefined2 *)*piVar7)[3] == 0) {
    FUN_002540b8(param_2);
    iVar3 = *piVar7;
  }
  else {
    iVar3 = *piVar7;
  }
  sVar1 = *(short *)(iVar3 + 6);
  iVar5 = (int)param_3;
  iVar6 = (int)param_1;
  if (sVar1 == 0x699) {
    bVar2 = false;
    if (*(short *)(iVar3 + 2) == *(short *)(DAT_0043ddf8 + 2)) {
      if (iVar3 != DAT_0043ddf8) {
        lVar4 = FUN_00360838(iVar3 + 8,DAT_0043ddf8 + 8);
        bVar2 = false;
        if (lVar4 != 0) goto LAB_00248978;
      }
      bVar2 = true;
    }
LAB_00248978:
    if (bVar2) {
      if (param_3 == 0) {
        iVar3 = *(int *)(iVar6 + 0xc);
      }
      else {
        (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
        iVar3 = *(int *)(iVar6 + 0xc);
      }
      if (iVar3 == 0) {
        *(int *)(iVar6 + 0xc) = iVar5;
        return;
      }
      (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
      *(int *)(iVar6 + 0xc) = iVar5;
      return;
    }
  }
  if (sVar1 != 0x6bbd) {
    iVar3 = *(int *)(iVar6 + 4);
    goto LAB_00248a58;
  }
  iVar3 = *piVar7;
  bVar2 = false;
  if (*(short *)(iVar3 + 2) == *(short *)(DAT_0043dc18 + 2)) {
    if (iVar3 != DAT_0043dc18) {
      lVar4 = FUN_00360838(iVar3 + 8,DAT_0043dc18 + 8);
      bVar2 = false;
      if (lVar4 != 0) goto LAB_00248a08;
    }
    bVar2 = true;
  }
LAB_00248a08:
  if (bVar2) {
    if (param_3 == 0) {
      iVar3 = *(int *)(iVar6 + 8);
    }
    else {
      (**(code **)(*(int *)(iVar5 + 4) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 8));
      iVar3 = *(int *)(iVar6 + 8);
    }
    if (iVar3 == 0) {
      *(int *)(iVar6 + 8) = iVar5;
      return;
    }
    (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
    *(int *)(iVar6 + 8) = iVar5;
    return;
  }
  iVar3 = *(int *)(iVar6 + 4);
LAB_00248a58:
  if (iVar3 == 0) {
    FUN_00387c70(param_1);
  }
  FUN_002490a8(param_1,param_2,param_3);
  return;
}


// ==== FUN_00248a98 @ 00248a98 ====

void FUN_00248a98(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = (int *)param_2;
  if ((undefined2 *)*piVar7 == &DAT_003bfaf8) {
    return;
  }
  if (((undefined2 *)*piVar7)[3] == 0) {
    FUN_002540b8(param_2);
    iVar4 = *piVar7;
  }
  else {
    iVar4 = *piVar7;
  }
  iVar8 = (int)param_1;
  sVar1 = *(short *)(iVar4 + 6);
  if ((*(int *)(iVar8 + 4) != 0) && (lVar5 = FUN_00249508(param_1,param_2), lVar5 != 0)) {
    puVar6 = (undefined4 *)lVar5;
    psVar2 = (short *)*puVar6;
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *puVar6 = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    iVar4 = *(int *)(puVar6[1] + 4);
    (**(code **)(iVar4 + 0x14))(puVar6[1] + (int)*(short *)(iVar4 + 0x10));
    puVar6[1] = 0;
    return;
  }
  if (sVar1 == 0x699) {
    iVar4 = *piVar7;
    bVar3 = false;
    if (*(short *)(iVar4 + 2) == *(short *)(DAT_0043ddf8 + 2)) {
      if (iVar4 != DAT_0043ddf8) {
        lVar5 = FUN_00360838(iVar4 + 8,DAT_0043ddf8 + 8);
        bVar3 = false;
        if (lVar5 != 0) goto LAB_00248bac;
      }
      bVar3 = true;
    }
LAB_00248bac:
    if (bVar3) {
      iVar4 = *(int *)(iVar8 + 0xc);
      if (iVar4 == 0) {
        return;
      }
      (**(code **)(*(int *)(iVar4 + 4) + 0x14))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x10));
      *(undefined4 *)(iVar8 + 0xc) = 0;
      return;
    }
  }
  if (sVar1 != 0x6bbd) {
    return;
  }
  iVar4 = *piVar7;
  bVar3 = false;
  if (*(short *)(iVar4 + 2) == *(short *)(DAT_0043dc18 + 2)) {
    if (iVar4 != DAT_0043dc18) {
      lVar5 = FUN_00360838(iVar4 + 8,DAT_0043dc18 + 8);
      bVar3 = false;
      if (lVar5 != 0) goto LAB_00248c20;
    }
    bVar3 = true;
  }
LAB_00248c20:
  if ((bVar3) && (iVar4 = *(int *)(iVar8 + 8), iVar4 != 0)) {
    (**(code **)(*(int *)(iVar4 + 4) + 0x14))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x10));
    *(undefined4 *)(iVar8 + 8) = 0;
  }
  return;
}


// ==== FUN_00248c78 @ 00248c78 ====

undefined4 FUN_00248c78(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = (int *)param_2;
  iVar3 = *piVar6;
  if (*(short *)(iVar3 + 6) == 0) {
    FUN_002540b8(param_2);
    iVar3 = *piVar6;
  }
  iVar7 = (int)param_1;
  sVar1 = *(short *)(iVar3 + 6);
  if ((*(int *)(iVar7 + 4) != 0) && (lVar5 = FUN_00249508(param_1,param_2), lVar5 != 0)) {
    return *(undefined4 *)((int)lVar5 + 4);
  }
  if (sVar1 == 0x699) {
    iVar3 = *piVar6;
    bVar2 = false;
    if (*(short *)(iVar3 + 2) == *(short *)(DAT_0043ddf8 + 2)) {
      if (iVar3 != DAT_0043ddf8) {
        lVar5 = FUN_00360838(iVar3 + 8,DAT_0043ddf8 + 8);
        bVar2 = false;
        if (lVar5 != 0) goto LAB_00248d18;
      }
      bVar2 = true;
    }
LAB_00248d18:
    if (bVar2) {
      return *(undefined4 *)(iVar7 + 0xc);
    }
  }
  if (sVar1 != 0x6bbd) {
    return 0;
  }
  iVar3 = *piVar6;
  bVar2 = false;
  if (*(short *)(iVar3 + 2) == *(short *)(DAT_0043dc18 + 2)) {
    if (iVar3 != DAT_0043dc18) {
      lVar5 = FUN_00360838(iVar3 + 8,DAT_0043dc18 + 8);
      bVar2 = false;
      if (lVar5 != 0) goto LAB_00248d6c;
    }
    bVar2 = true;
  }
LAB_00248d6c:
  uVar4 = 0;
  if (bVar2) {
    uVar4 = *(undefined4 *)(iVar7 + 8);
  }
  return uVar4;
}


// ==== FUN_00248d98 @ 00248d98 ====

void FUN_00248d98(int *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1[3];
  if (iVar3 == 0) {
    iVar3 = param_1[2];
  }
  else {
    (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
    param_1[3] = 0;
    iVar3 = param_1[2];
  }
  if (iVar3 == 0) {
    iVar3 = param_1[1];
  }
  else {
    (**(code **)(*(int *)(iVar3 + 4) + 0x14))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
    param_1[2] = 0;
    iVar3 = param_1[1];
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar3 = *param_1;
    if (0 < iVar3) {
      iVar3 = param_1[1];
      while( true ) {
        iVar4 = iVar5 * 8;
        if (*(int *)(iVar4 + iVar3) == 0) {
          iVar3 = *param_1;
        }
        else {
          iVar3 = ((int *)(iVar4 + iVar3))[1];
          if (iVar3 == 0) {
            iVar3 = param_1[1];
          }
          else {
            (**(code **)(*(int *)(iVar3 + 4) + 0x14))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10));
            *(undefined4 *)(iVar4 + param_1[1] + 4) = 0;
            iVar3 = param_1[1];
          }
          psVar2 = *(short **)(iVar4 + iVar3);
          sVar1 = *psVar2;
          *psVar2 = sVar1 + -1;
          if ((short)(sVar1 + -1) == 0) {
            FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
          }
          *(undefined4 *)(iVar4 + iVar3) = 0;
          iVar3 = *param_1;
        }
        iVar5 = iVar5 + 1;
        if (iVar3 <= iVar5) break;
        iVar3 = param_1[1];
      }
    }
    FUN_00250198(DAT_0043dee0,param_1[1],iVar3 << 3);
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}


// ==== FUN_00248ee0 @ 00248ee0 ====

undefined4 * FUN_00248ee0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar2 = 0;
  puVar3 = puVar1;
  if (0 < *param_1) {
    do {
      if (((undefined2 *)*puVar3 != (undefined2 *)0x0) && ((undefined2 *)*puVar3 != &DAT_003bfaf8))
      {
        return puVar1 + iVar2 * 2;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar2 < *param_1);
  }
  return (undefined4 *)0x0;
}


// ==== FUN_00248f48 @ 00248f48 ====

undefined4 * FUN_00248f48(int *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1[1] == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)(param_2 + 8);
  puVar2 = (undefined4 *)(param_1[1] + *param_1 * 8);
  if (puVar3 < puVar2) {
    puVar1 = (undefined2 *)*puVar3;
    while( true ) {
      if ((puVar1 != (undefined2 *)0x0) && (puVar1 != &DAT_003bfaf8)) {
        return puVar3;
      }
      puVar3 = puVar3 + 2;
      if (puVar2 <= puVar3) break;
      puVar1 = (undefined2 *)*puVar3;
    }
  }
  return (undefined4 *)0x0;
}


// ==== FUN_00248fb0 @ 00248fb0 ====

void FUN_00248fb0(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iStack_60;
  int iStack_5c;
  
  iVar4 = 0;
  FUN_00248678(&iStack_60,*param_1 << 1);
  uVar1 = FUN_00250058(DAT_0043dee0,iStack_60 << 3);
  iStack_5c = (int)uVar1;
  FUN_0035c6ec(uVar1,0,iStack_60 << 3);
  if (0 < *param_1) {
    iVar2 = param_1[1];
    while( true ) {
      puVar3 = (undefined4 *)(iVar2 + iVar4 * 8);
      if ((undefined2 *)*puVar3 == (undefined2 *)0x0) {
        iVar2 = *param_1;
      }
      else if ((undefined2 *)*puVar3 == &DAT_003bfaf8) {
        iVar2 = *param_1;
      }
      else {
        FUN_002490a8(&iStack_60,puVar3,puVar3[1]);
        iVar2 = *param_1;
      }
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) break;
      iVar2 = param_1[1];
    }
  }
  iVar4 = param_1[1];
  iVar2 = *param_1;
  *param_1 = iStack_60;
  param_1[1] = iStack_5c;
  iStack_60 = iVar2;
  iStack_5c = iVar4;
  FUN_002487e0(&iStack_60);
  FUN_002486d8(&iStack_60,2);
  return;
}


// ==== FUN_002490a8 @ 002490a8 ====

void FUN_002490a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  
  puVar18 = (undefined4 *)param_2;
  psVar2 = (short *)*puVar18;
  piVar15 = (int *)param_1;
  uVar13 = (uint)(ushort)psVar2[3] & *piVar15 - 1U;
  puVar7 = (undefined4 *)(uVar13 * 8 + piVar15[1]);
  psVar3 = (short *)*puVar7;
  iVar14 = (int)param_3;
  if (psVar3 == (short *)0x0) {
    *puVar7 = psVar2;
    *psVar2 = *psVar2 + 1;
    (**(code **)(*(int *)(iVar14 + 4) + 0xc))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 8));
    iVar8 = uVar13 * 8 + piVar15[1];
    goto LAB_002494d0;
  }
  uVar17 = uVar13;
  if (psVar3 == &DAT_003bfaf8) {
LAB_002491c8:
    iVar16 = uVar13 - 8;
    if (iVar16 < 0) {
      iVar16 = 0;
      iVar8 = 0x10;
      if (*piVar15 < 0x11) {
        iVar8 = *piVar15 + -1;
      }
    }
    else {
      iVar11 = *piVar15 + -1;
      iVar8 = uVar13 + 8;
      if ((iVar11 < (int)(uVar13 + 8)) && (iVar16 = *piVar15 + -0x11, iVar8 = iVar11, iVar16 < 0)) {
        iVar16 = 0;
      }
    }
    iVar11 = (iVar8 - uVar13) + -1;
    if (iVar11 != -1) {
      iVar8 = uVar13 << 3;
      iVar9 = piVar15[1];
      uVar12 = uVar13;
      while( true ) {
        iVar8 = iVar8 + 8;
        puVar4 = *(undefined2 **)(iVar8 + iVar9);
        uVar12 = uVar12 + 1;
        if (puVar4 == (undefined2 *)0x0) break;
        if (puVar4 == &DAT_003bfaf8) {
          if (uVar17 == 0xffffffff) {
            uVar17 = uVar12;
          }
        }
        else {
          puVar5 = (undefined2 *)*puVar18;
          if (puVar4 == puVar5) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
            if (puVar4[3] == puVar5[3]) {
              lVar10 = FUN_00360838(puVar4 + 4,puVar5 + 4);
              bVar6 = lVar10 == 0;
            }
          }
          if (bVar6) {
            iVar16 = *(int *)(iVar8 + piVar15[1] + 4);
            (**(code **)(*(int *)(iVar14 + 4) + 0xc))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 8))
            ;
            if (iVar16 == 0) {
              iVar16 = piVar15[1];
            }
            else {
              (**(code **)(*(int *)(iVar16 + 4) + 0x14))
                        (iVar16 + *(short *)(*(int *)(iVar16 + 4) + 0x10));
              iVar16 = piVar15[1];
            }
            iVar8 = iVar8 + iVar16;
            goto LAB_002494d0;
          }
        }
        iVar11 = iVar11 + -1;
        if (iVar11 == -1) goto LAB_00249304;
        iVar9 = piVar15[1];
      }
      psVar2 = (short *)*puVar18;
      *(short **)(iVar8 + iVar9) = psVar2;
      *psVar2 = *psVar2 + 1;
      (**(code **)(*(int *)(iVar14 + 4) + 0xc))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 8));
      iVar8 = iVar8 + piVar15[1];
      goto LAB_002494d0;
    }
LAB_00249304:
    iVar16 = (uVar13 - iVar16) + -1;
    if (iVar16 != -1) {
      iVar8 = uVar13 << 3;
      iVar11 = piVar15[1];
      while( true ) {
        iVar8 = iVar8 + -8;
        puVar4 = *(undefined2 **)(iVar8 + iVar11);
        uVar13 = uVar13 - 1;
        if (puVar4 == (undefined2 *)0x0) break;
        if (puVar4 == &DAT_003bfaf8) {
          if (uVar17 == 0xffffffff) {
            uVar17 = uVar13;
          }
        }
        else {
          puVar5 = (undefined2 *)*puVar18;
          if (puVar4 == puVar5) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
            if (puVar4[3] == puVar5[3]) {
              lVar10 = FUN_00360838(puVar4 + 4,puVar5 + 4);
              bVar6 = lVar10 == 0;
            }
          }
          if (bVar6) {
            iVar16 = *(int *)(iVar8 + piVar15[1] + 4);
            (**(code **)(*(int *)(iVar14 + 4) + 0xc))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 8))
            ;
            if (iVar16 == 0) {
              iVar16 = piVar15[1];
            }
            else {
              (**(code **)(*(int *)(iVar16 + 4) + 0x14))
                        (iVar16 + *(short *)(*(int *)(iVar16 + 4) + 0x10));
              iVar16 = piVar15[1];
            }
            iVar8 = iVar8 + iVar16;
            goto LAB_002494d0;
          }
        }
        iVar16 = iVar16 + -1;
        if (iVar16 == -1) goto LAB_002493d4;
        iVar11 = piVar15[1];
      }
      psVar2 = (short *)*puVar18;
      *(short **)(iVar8 + iVar11) = psVar2;
      *psVar2 = *psVar2 + 1;
      (**(code **)(*(int *)(iVar14 + 4) + 0xc))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 8));
      iVar8 = iVar8 + piVar15[1];
      goto LAB_002494d0;
    }
LAB_002493d4:
    if (uVar17 == 0xffffffff) {
      FUN_00248fb0(param_1);
      FUN_002490a8(param_1,param_2,param_3);
      return;
    }
    iVar8 = uVar17 * 8;
    iVar16 = piVar15[1];
    *(short *)*puVar18 = *(short *)*puVar18 + 1;
    psVar2 = *(short **)(iVar8 + iVar16);
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *(undefined4 *)(iVar8 + iVar16) = *puVar18;
    (**(code **)(*(int *)(iVar14 + 4) + 0xc))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 8));
    iVar16 = piVar15[1];
  }
  else {
    bVar6 = true;
    if ((psVar3 != psVar2) && (bVar6 = false, (uint)(ushort)psVar3[3] == (uint)(ushort)psVar2[3])) {
      lVar10 = FUN_00360838(psVar3 + 4,psVar2 + 4);
      bVar6 = lVar10 == 0;
    }
    iVar8 = uVar13 * 8;
    uVar17 = 0xffffffff;
    if (!bVar6) goto LAB_002491c8;
    iVar16 = *(int *)(iVar8 + piVar15[1] + 4);
    (**(code **)(*(int *)(iVar14 + 4) + 0xc))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 8));
    if (iVar16 == 0) {
      iVar16 = piVar15[1];
    }
    else {
      (**(code **)(*(int *)(iVar16 + 4) + 0x14))(iVar16 + *(short *)(*(int *)(iVar16 + 4) + 0x10));
      iVar16 = piVar15[1];
    }
  }
  iVar8 = iVar8 + iVar16;
LAB_002494d0:
  *(int *)(iVar8 + 4) = iVar14;
  return;
}


// ==== FUN_00249508 @ 00249508 ====

int FUN_00249508(int *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  puVar1 = (undefined2 *)*param_2;
  uVar9 = (uint)(ushort)puVar1[3] & *param_1 - 1U;
  puVar2 = *(undefined2 **)(uVar9 * 8 + param_1[1]);
  if (puVar2 == (undefined2 *)0x0) {
    return 0;
  }
  if (puVar2 != &DAT_003bfaf8) {
    bVar3 = true;
    if ((puVar2 != puVar1) && (bVar3 = false, puVar2[3] == puVar1[3])) {
      lVar4 = FUN_00360838(puVar2 + 4,puVar1 + 4);
      bVar3 = lVar4 == 0;
    }
    if (bVar3) {
      return param_1[1] + uVar9 * 8;
    }
  }
  iVar8 = uVar9 - 8;
  if (iVar8 < 0) {
    iVar8 = 0;
    iVar6 = 0x10;
    if (*param_1 < 0x11) {
      iVar6 = *param_1 + -1;
    }
  }
  else {
    iVar5 = *param_1 + -1;
    iVar6 = uVar9 + 8;
    if ((iVar5 < (int)(uVar9 + 8)) && (iVar8 = *param_1 + -0x11, iVar6 = iVar5, iVar8 < 0)) {
      iVar8 = 0;
    }
  }
  iVar6 = iVar6 - uVar9;
  uVar7 = uVar9;
joined_r0x0024961c:
  do {
    iVar6 = iVar6 + -1;
    if (iVar6 == -1) {
      iVar8 = uVar9 - iVar8;
      uVar7 = uVar9;
      do {
        do {
          iVar8 = iVar8 + -1;
          if (iVar8 == -1) {
            return 0;
          }
          uVar7 = uVar7 - 1;
          puVar1 = *(undefined2 **)(uVar7 * 8 + param_1[1]);
          if (puVar1 == (undefined2 *)0x0) {
            return 0;
          }
        } while (puVar1 == &DAT_003bfaf8);
        puVar2 = (undefined2 *)*param_2;
        if (puVar1 == puVar2) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
          if (puVar1[3] == puVar2[3]) {
            lVar4 = FUN_00360838(puVar1 + 4,puVar2 + 4);
            bVar3 = lVar4 == 0;
          }
        }
      } while (!bVar3);
LAB_002495d8:
      return param_1[1] + uVar7 * 8;
    }
    uVar7 = uVar7 + 1;
    puVar1 = *(undefined2 **)(uVar7 * 8 + param_1[1]);
    if (puVar1 == (undefined2 *)0x0) {
      return 0;
    }
    if (puVar1 == &DAT_003bfaf8) goto joined_r0x0024961c;
    puVar2 = (undefined2 *)*param_2;
    if (puVar1 == puVar2) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
      if (puVar1[3] == puVar2[3]) {
        lVar4 = FUN_00360838(puVar1 + 4,puVar2 + 4);
        bVar3 = lVar4 == 0;
      }
    }
    if (bVar3) goto LAB_002495d8;
  } while( true );
}


// ==== FUN_00249750 @ 00249750 ====

void FUN_00249750(int param_1,uint *param_2,int *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((*param_2 >> 0x19) - 0xc < 8) {
    uVar3 = (int)*param_2 >> 4 & 1;
  }
  if ((((uVar3 == 0) &&
       (lVar2 = FUN_0024a7f8(*param_3 + 8,*(undefined2 *)(*param_3 + 2)), lVar2 != 0)) &&
      (iVar1 = *(int *)((int)lVar2 + 4), 199 < iVar1)) &&
     (uVar3 = *(uint *)((iVar1 + -200) * 4 + 0x3ffc00), uVar3 != 0xffffffff)) {
    if (param_4 == 0) {
      uVar3 = *(uint *)(param_1 + 0x10) | uVar3;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x10) & ~uVar3;
    }
    *(uint *)(param_1 + 0x10) = uVar3;
  }
  return;
}


// ==== FUN_00249810 @ 00249810 ====

void FUN_00249810(int *param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *apsStack_90 [4];
  
  if (param_1[2] != 0) {
    (*DAT_003bfab0)(param_2,param_1[2],DAT_0043dc18 + 8);
  }
  if (param_1[3] != 0) {
    (*DAT_003bfab0)(param_2,param_1[3],DAT_0043ddf8 + 8);
  }
  if ((param_1[1] != 0) && (iVar3 = 0, 0 < *param_1)) {
    iVar2 = param_1[1];
    while( true ) {
      if (*(int *)(iVar3 * 8 + iVar2 + 4) != 0) {
        FUN_00252f20(apsStack_90,param_3);
        iVar2 = *(int *)(iVar3 * 8 + param_1[1] + 4);
        if (iVar2 != 0) {
          (*DAT_003bfab0)(param_2,iVar2,apsStack_90[0] + 4);
        }
        sVar1 = *apsStack_90[0];
        *apsStack_90[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,apsStack_90[0],(ushort)apsStack_90[0][2] + 9);
        }
      }
      iVar3 = iVar3 + 1;
      if (*param_1 <= iVar3) break;
      iVar2 = param_1[1];
    }
  }
  return;
}


// ==== FUN_00249958 @ 00249958 ====

void FUN_00249958(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[2] != 0) {
    (*DAT_003bfab0)(param_2,param_1[2],DAT_0043dc18 + 8);
  }
  if (param_1[3] != 0) {
    (*DAT_003bfab0)(param_2,param_1[3],DAT_0043ddf8 + 8);
  }
  if ((param_1[1] != 0) && (iVar3 = 0, 0 < *param_1)) {
    iVar2 = param_1[1];
    while( true ) {
      piVar1 = (int *)(iVar3 * 8 + iVar2);
      iVar2 = piVar1[1];
      if (iVar2 != 0) {
        (*DAT_003bfab0)(param_2,iVar2,*piVar1 + 8);
      }
      iVar3 = iVar3 + 1;
      if (*param_1 <= iVar3) break;
      iVar2 = param_1[1];
    }
  }
  return;
}


// ==== FUN_00249a38 @ 00249a38 ====

uint FUN_00249a38(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar6 = &DAT_0043df98;
  puVar8 = &DAT_0043dfa0;
  puVar7 = &DAT_0043e5cc;
  if (DAT_003bf050 < -1) {
    FUN_00249c80(0x1105);
  }
  DAT_003bf050 = 0x26f;
  DAT_0043df90 = &DAT_0043df9c;
  iVar5 = 0xe3;
  uVar3 = DAT_0043df98;
  uVar1 = DAT_0043df9c;
  do {
    uVar4 = uVar1;
    uVar3 = *puVar7 ^ (uVar3 & 0x80000000 | uVar4 & 0x7fffffff) >> 1;
    uVar1 = uVar3 ^ 0x9908b0df;
    if ((uVar4 & 1) == 0) {
      uVar1 = uVar3;
    }
    puVar7 = puVar7 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    uVar3 = uVar4;
  } while (iVar5 != 0);
  puVar7 = &DAT_0043df98;
  iVar5 = 0x18c;
  do {
    uVar2 = uVar1;
    uVar3 = *puVar7 ^ (uVar4 & 0x80000000 | uVar2 & 0x7fffffff) >> 1;
    uVar1 = uVar3 ^ 0x9908b0df;
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar3;
    }
    puVar7 = puVar7 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    uVar4 = uVar2;
  } while (iVar5 != 0);
  uVar1 = *puVar7 ^ (uVar2 & 0x80000000 | DAT_0043df98 & 0x7fffffff) >> 1;
  if ((DAT_0043df98 & 1) != 0) {
    uVar1 = uVar1 ^ 0x9908b0df;
  }
  uVar3 = DAT_0043df98 ^ DAT_0043df98 >> 0xb;
  *puVar6 = uVar1;
  uVar3 = uVar3 ^ (uVar3 & 0x13a58ad) << 7;
  uVar3 = uVar3 ^ (uVar3 & 0x1df8c) << 0xf;
  return uVar3 ^ uVar3 >> 0x12;
}


// ==== FUN_00249c00 @ 00249c00 ====

uint FUN_00249c00(void)

{
  uint uVar1;
  
  DAT_003bf050 = DAT_003bf050 + -1;
  if (DAT_003bf050 < 0) {
    uVar1 = FUN_00249a38();
  }
  else {
    uVar1 = *DAT_0043df90;
    DAT_0043df90 = DAT_0043df90 + 1;
    uVar1 = uVar1 ^ uVar1 >> 0xb;
    uVar1 = uVar1 ^ (uVar1 & 0x13a58ad) << 7;
    uVar1 = uVar1 ^ (uVar1 & 0x1df8c) << 0xf;
    uVar1 = uVar1 ^ uVar1 >> 0x12;
  }
  return uVar1;
}


// ==== FUN_00249c80 @ 00249c80 ====

void FUN_00249c80(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  param_1 = param_1 | 1;
  DAT_003bf050 = 0;
  iVar2 = 0x26f;
  puVar1 = &DAT_0043df9c;
  DAT_0043df98 = param_1;
  do {
    param_1 = param_1 * 0x10dcd;
    iVar2 = iVar2 + -1;
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return;
}


// ==== FUN_00249cc8 @ 00249cc8 ====

undefined8 FUN_00249cc8(undefined8 param_1)

{
  FUN_00249cf0();
  return param_1;
}


// ==== FUN_00249cf0 @ 00249cf0 ====

void FUN_00249cf0(undefined4 *param_1)

{
  param_1[0xef] = 0;
  param_1[0x8b] = 0x3f800000;
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x88] = 0x3f800000;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0xee] = 0;
  return;
}


// ==== FUN_00249d40 @ 00249d40 ====

void FUN_00249d40(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = param_1[0xee];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  param_1[0xee] = iVar1 + 1;
  puVar3 = param_1 + iVar1 * 8 + 8;
  *puVar3 = *param_1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar4 = param_1[6];
  uVar5 = param_1[7];
  puVar3[4] = (int)uVar2;
  puVar3[5] = (int)((ulong)uVar2 >> 0x20);
  puVar3[6] = uVar4;
  puVar3[7] = uVar5;
  return;
}


// ==== FUN_00249d70 @ 00249d70 ====

void FUN_00249d70(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  iVar1 = param_1[0xee];
  param_1[0xee] = iVar1 + -1;
  puVar6 = (undefined8 *)(param_1 + (iVar1 + -1) * 8 + 8);
  uVar2 = *puVar6;
  uVar3 = *(undefined4 *)(puVar6 + 1);
  uVar4 = *(undefined4 *)((int)puVar6 + 0xc);
  *param_1 = (int)uVar2;
  param_1[1] = (int)((ulong)uVar2 >> 0x20);
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar3 = *(undefined4 *)((int)puVar6 + 0x14);
  uVar4 = *(undefined4 *)(puVar6 + 3);
  uVar5 = *(undefined4 *)((int)puVar6 + 0x1c);
  param_1[4] = *(undefined4 *)(puVar6 + 2);
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  return;
}


// ==== FUN_00249da0 @ 00249da0 ====

void FUN_00249da0(undefined8 param_1,undefined1 (*param_2) [16])

{
  bool bVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  auVar7 = _lqc2(param_2[1]);
  pauVar3 = (undefined1 (*) [16])param_1;
  auVar5 = _lqc2(*pauVar3);
  auVar4 = _lqc2(pauVar3[1]);
  auVar6 = _lqc2(*param_2);
  auVar4 = _vadd(auVar4,auVar7);
  auVar5 = _vmul(auVar5,auVar6);
  auVar4 = _sqc2(auVar4);
  pauVar3[1] = auVar4;
  auVar4 = _sqc2(auVar5);
  *pauVar3 = auVar4;
  _sqc2(auVar7);
  (*DAT_0043daec)(param_1);
  return;
}


// ==== FUN_00249e68 @ 00249e68 ====

void FUN_00249e68(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x3bc);
  iVar2 = iVar1 * 0x18 + param_1;
  uVar3 = *(undefined8 *)(param_1 + 0x228);
  uVar4 = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(iVar2 + 0x238) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(iVar2 + 0x240) = uVar3;
  *(undefined8 *)(iVar2 + 0x248) = uVar4;
  *(int *)(param_1 + 0x3bc) = iVar1 + 1;
  return;
}


// ==== FUN_00249eb8 @ 00249eb8 ====

void FUN_00249eb8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x3bc) + -1;
  *(int *)(param_1 + 0x3bc) = iVar1;
  iVar1 = iVar1 * 0x18 + param_1;
  uVar3 = *(undefined8 *)(iVar1 + 0x240);
  uVar2 = *(undefined8 *)(iVar1 + 0x248);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(iVar1 + 0x238);
  *(undefined8 *)(param_1 + 0x228) = uVar3;
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  (*DAT_0043dae8)(param_1 + 0x220);
  return;
}


// ==== FUN_00249f28 @ 00249f28 ====

void FUN_00249f28(float *param_1,float *param_2,undefined8 *param_3)

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
  
  fVar7 = param_1[2];
  fVar4 = param_2[5];
  fVar1 = param_1[1];
  fVar6 = param_1[3];
  fVar2 = param_2[4];
  fVar8 = *param_1;
  fVar5 = param_2[2];
  fVar3 = param_2[3];
  fVar10 = param_1[5];
  fVar9 = param_1[4];
  *param_3 = CONCAT44(*param_2 * fVar1 + param_2[1] * fVar6,*param_2 * fVar8 + param_2[1] * fVar7);
  param_3[1] = CONCAT44(fVar5 * fVar1 + fVar3 * fVar6,fVar5 * fVar8 + fVar3 * fVar7);
  param_3[2] = CONCAT44(fVar2 * fVar1 + fVar4 * fVar6 + fVar10,fVar2 * fVar8 + fVar4 * fVar7 + fVar9
                       );
  return;
}


// ==== FUN_0024a000 @ 0024a000 ====

void FUN_0024a000(int param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x220;
  FUN_00249f28(param_1,param_2,param_1);
  (*DAT_0043dae8)(param_1);
  return;
}


// ==== FUN_0024a040 @ 0024a040 ====

void FUN_0024a040(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float afStack_40 [4];
  float afStack_30 [4];
  float afStack_20 [4];
  float afStack_10 [4];
  
  pfVar1 = afStack_40;
  pfVar3 = afStack_20;
  pfVar4 = afStack_10;
  fVar14 = *(float *)(param_1 + 0x234);
  fVar15 = *(float *)(param_1 + 0x220);
  pfVar2 = afStack_30;
  fVar12 = *(float *)(param_1 + 0x228);
  fVar13 = *(float *)(param_1 + 0x230);
  iVar5 = 3;
  fVar10 = *(float *)(param_1 + 0x224);
  fVar11 = *(float *)(param_1 + 0x22c);
  afStack_30[1] = param_3[1];
  afStack_40[2] = param_3[2];
  afStack_40[3] = *param_3;
  afStack_30[3] = param_3[3];
  afStack_40[0] = *param_3;
  afStack_30[0] = param_3[1];
  afStack_40[1] = param_3[2];
  afStack_30[2] = param_3[3];
  pfVar6 = pfVar3;
  pfVar7 = pfVar4;
  do {
    iVar5 = iVar5 + -1;
    *pfVar6 = fVar15 * *pfVar1 + fVar12 * *pfVar2 + fVar13;
    pfVar6 = pfVar6 + 1;
    fVar9 = *pfVar1;
    fVar8 = *pfVar2;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
    *pfVar7 = fVar10 * fVar9 + fVar11 * fVar8 + fVar14;
    pfVar7 = pfVar7 + 1;
  } while (-1 < iVar5);
  iVar5 = 0;
  do {
    if (*pfVar3 < *param_2) {
      *param_2 = *pfVar3;
    }
    if (param_2[2] < *pfVar3) {
      param_2[2] = *pfVar3;
    }
    if (*pfVar4 < param_2[1]) {
      param_2[1] = *pfVar4;
    }
    if (param_2[3] < *pfVar4) {
      param_2[3] = *pfVar4;
    }
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar5 < 4);
  return;
}


// ==== FUN_0024a188 @ 0024a188 ====

/* WARNING: Removing unreachable block (ram,0x0024a1bc) */
/* WARNING: Removing unreachable block (ram,0x0024a1c4) */
/* WARNING: Removing unreachable block (ram,0x0024a210) */

undefined ** FUN_0024a188(byte *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte abStack_120 [8];
  undefined8 auStack_118 [31];
  
  pbVar5 = abStack_120;
  if (param_2 - 4U < 8) {
    puVar3 = &DAT_003fe4b0;
    do {
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      *(undefined8 *)pbVar5 = *puVar3;
      *(undefined8 *)((int)pbVar5 + 8) = uVar6;
      *(undefined8 *)((int)pbVar5 + 0x10) = uVar7;
      *(undefined8 *)((int)pbVar5 + 0x18) = uVar8;
      puVar3 = puVar3 + 4;
      pbVar5 = (byte *)((int)pbVar5 + 0x20);
    } while (puVar3 != (undefined8 *)&UNK_003fe5b0);
    uVar4 = param_2 + (uint)abStack_120[param_1[param_2 + -1]] + (uint)abStack_120[*param_1];
    if (uVar4 < 0xc) {
      pcVar1 = (&PTR_DAT_003bf058)[uVar4 * 2];
      if ((long)(int)(char)*param_1 != (long)*pcVar1) {
        return (undefined **)0x0;
      }
      lVar2 = FUN_0035ca74(param_1 + 1,pcVar1 + 1);
      if (lVar2 == 0) {
        return &PTR_DAT_003bf058 + uVar4 * 2;
      }
    }
  }
  return (undefined **)0x0;
}


// ==== FUN_0024a2c8 @ 0024a2c8 ====

undefined8 FUN_0024a2c8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00386ec8(param_1,0x15);
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar2 + 8,8);
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined **)(iVar2 + 4) = &DAT_003e17e8;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffcff;
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x48) + 8) + 4);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  return param_1;
}


// ==== FUN_0024a4d0 @ 0024a4d0 ====

undefined4 FUN_0024a4d0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 >> 0x19 == 0x15) {
    uVar1 = (int)*param_1 >> 4 & 1;
  }
  if ((uVar1 != 0) && (param_1[9] != 0)) {
    (*DAT_0043dacc)(param_1[9],param_1[10]);
  }
  return DAT_0043df40;
}


// ==== FUN_0024a540 @ 0024a540 ====

uint * FUN_0024a540(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_0024a188(*param_3 + 8,*(undefined2 *)(*param_3 + 2));
  }
  if (lVar2 == 0) {
    puVar4 = (uint *)0x0;
  }
  else {
    iVar1 = *(int *)((int)lVar2 + 4);
    if (iVar1 == 2) {
      puVar4 = DAT_003bf0bc;
      if (DAT_003bf0bc == (uint *)0x0) {
        uVar3 = FUN_0024fa38(DAT_0043dee4,0x24);
        FUN_00386ec8(uVar3,9);
        puVar4 = (uint *)uVar3;
        puVar4[1] = (uint)&DAT_003e1f88;
        FUN_00248678(puVar4 + 2,8);
        *(undefined1 *)(puVar4 + 7) = 0;
        puVar4[1] = (uint)&DAT_003e1df0;
        puVar4[8] = (uint)FUN_0024a4d0;
        puVar4[7] = puVar4[7] & 0xfffffcff;
        DAT_003bf0bc = puVar4;
        *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
        (**(code **)(DAT_003bf0bc[1] + 0xc))
                  ((int)DAT_003bf0bc + (int)*(short *)(DAT_003bf0bc[1] + 8));
        puVar4 = DAT_003bf0bc;
      }
    }
    else if (iVar1 < 3) {
      puVar4 = (uint *)0x0;
      if ((iVar1 == 1) && (puVar4 = DAT_003bf0b8, DAT_003bf0b8 == (uint *)0x0)) {
        uVar3 = FUN_0024fa38(DAT_0043dee4,0x24);
        FUN_00386ec8(uVar3,9);
        puVar4 = (uint *)uVar3;
        puVar4[1] = (uint)&DAT_003e1f88;
        FUN_00248678(puVar4 + 2,8);
        *(undefined1 *)(puVar4 + 7) = 0;
        puVar4[1] = (uint)&DAT_003e1df0;
        puVar4[8] = (uint)&LAB_0024a360;
        puVar4[7] = puVar4[7] & 0xfffffcff;
        DAT_003bf0b8 = puVar4;
        *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
        (**(code **)(DAT_003bf0b8[1] + 0xc))
                  ((int)DAT_003bf0b8 + (int)*(short *)(DAT_003bf0b8[1] + 8));
        puVar4 = DAT_003bf0b8;
      }
    }
    else {
      puVar4 = (uint *)0x0;
      if ((iVar1 == 3) && (puVar4 = DAT_003bf0c0, DAT_003bf0c0 == (uint *)0x0)) {
        uVar3 = FUN_0024fa38(DAT_0043dee4,0x24);
        FUN_00386ec8(uVar3,9);
        puVar4 = (uint *)uVar3;
        puVar4[1] = (uint)&DAT_003e1f88;
        FUN_00248678(puVar4 + 2,8);
        *(undefined1 *)(puVar4 + 7) = 0;
        puVar4[1] = (uint)&DAT_003e1df0;
        puVar4[8] = (uint)&LAB_0024a530;
        puVar4[7] = puVar4[7] & 0xfffffcff;
        DAT_003bf0c0 = puVar4;
        *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
        (**(code **)(DAT_003bf0c0[1] + 0xc))
                  ((int)DAT_003bf0c0 + (int)*(short *)(DAT_003bf0c0[1] + 8));
        puVar4 = DAT_003bf0c0;
      }
    }
  }
  return puVar4;
}


// ==== FUN_0024a7f8 @ 0024a7f8 ====

/* WARNING: Removing unreachable block (ram,0x0024a828) */
/* WARNING: Removing unreachable block (ram,0x0024a82c) */
/* WARNING: Removing unreachable block (ram,0x0024a878) */

undefined ** FUN_0024a7f8(byte *param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte abStack_120 [8];
  undefined8 auStack_118 [31];
  
  pbVar4 = abStack_120;
  if (param_2 - 2U < 0x13) {
    pcVar3 = (char *)&DAT_003fe5d0;
    do {
      uVar5 = *(undefined8 *)(pcVar3 + 8);
      uVar6 = *(undefined8 *)(pcVar3 + 0x10);
      uVar7 = *(undefined8 *)(pcVar3 + 0x18);
      *(undefined8 *)pbVar4 = *(undefined8 *)pcVar3;
      *(undefined8 *)((int)pbVar4 + 8) = uVar5;
      *(undefined8 *)((int)pbVar4 + 0x10) = uVar6;
      *(undefined8 *)((int)pbVar4 + 0x18) = uVar7;
      pcVar3 = pcVar3 + 0x20;
      pbVar4 = (byte *)((int)pbVar4 + 0x20);
    } while (pcVar3 != "_name");
    switch(param_2) {
    case 1:
      break;
    default:
      param_2 = param_2 + (uint)abStack_120[param_1[7]];
    case 6:
    case 7:
      param_2 = param_2 + (uint)abStack_120[param_1[5]];
    case 2:
    case 3:
    case 4:
    case 5:
      param_2 = param_2 + (uint)abStack_120[param_1[1]];
    }
    bVar1 = abStack_120[*param_1];
    if (param_2 + (uint)bVar1 < 0xd4) {
      pcVar3 = (&PTR_DAT_003bf0c8)[(param_2 + (uint)bVar1) * 2];
      if ((long)(int)(char)*param_1 != (long)*pcVar3) {
        return (undefined **)0x0;
      }
      lVar2 = FUN_0035ca74(param_1 + 1,pcVar3 + 1);
      if (lVar2 == 0) {
        return &PTR_DAT_003bf0c8 + (param_2 + (uint)bVar1) * 2;
      }
    }
  }
  return (undefined **)0x0;
}


// ==== FUN_0024ab20 @ 0024ab20 ====

/* WARNING: Removing unreachable block (ram,0x0024ab5c) */
/* WARNING: Removing unreachable block (ram,0x0024ab64) */
/* WARNING: Removing unreachable block (ram,0x0024abb0) */

undefined ** FUN_0024ab20(byte *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  byte abStack_140 [8];
  undefined8 auStack_138 [31];
  
  pbVar6 = abStack_140;
  if (param_2 - 5U < 8) {
    pcVar4 = 
    "\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17\x17"
    ;
    do {
      uVar7 = *(undefined8 *)(pcVar4 + 8);
      uVar8 = *(undefined8 *)(pcVar4 + 0x10);
      uVar9 = *(undefined8 *)(pcVar4 + 0x18);
      *(undefined8 *)pbVar6 = *(undefined8 *)pcVar4;
      *(undefined8 *)((int)pbVar6 + 8) = uVar7;
      *(undefined8 *)((int)pbVar6 + 0x10) = uVar8;
      *(undefined8 *)((int)pbVar6 + 0x18) = uVar9;
      pcVar4 = pcVar4 + 0x20;
      pbVar6 = (byte *)((int)pbVar6 + 0x20);
    } while (pcVar4 != "split");
    uVar5 = param_2 + (uint)abStack_140[param_1[param_2 + -1]] + (uint)abStack_140[*param_1];
    if (uVar5 < 0x17) {
      cVar1 = (&DAT_003bf818)[uVar5];
      if (-1 < cVar1) {
        pcVar4 = (&PTR_s_split_003bf7b0)[cVar1 * 2];
        if ((long)(int)(char)*param_1 != (long)*pcVar4) {
          return (undefined **)0x0;
        }
        lVar3 = FUN_0035ca74(param_1 + 1,pcVar4 + 1);
        if (lVar3 != 0) {
          return (undefined **)0x0;
        }
        return &PTR_s_split_003bf7b0 + cVar1 * 2;
      }
      if (cVar1 < -0xd) {
        iVar2 = -(int)cVar1;
        ppuVar10 = (undefined **)(&DAT_003bf818 + *(char *)(iVar2 + 0x3bf80a) * 8);
        ppuVar11 = ppuVar10 + *(char *)(iVar2 + 0x3bf80b) * -2;
        if (ppuVar11 <= ppuVar10) {
          return (undefined **)0x0;
        }
        pbVar6 = *ppuVar10;
        while( true ) {
          if ((*param_1 == *pbVar6) && (lVar3 = FUN_0035ca74(param_1 + 1,pbVar6 + 1), lVar3 == 0)) {
            return ppuVar10;
          }
          ppuVar10 = ppuVar10 + 2;
          if (ppuVar11 <= ppuVar10) break;
          pbVar6 = *ppuVar10;
        }
      }
    }
  }
  return (undefined **)0x0;
}


// ==== FUN_0024ad08 @ 0024ad08 ====

undefined8 FUN_0024ad08(undefined8 param_1)

{
  int iVar1;
  
  FUN_00386ec8(param_1,1);
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 4) = &DAT_003e22b8;
  *(short **)(iVar1 + 8) = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return param_1;
}


// ==== FUN_0024ad60 @ 0024ad60 ====

void FUN_0024ad60(undefined8 param_1,ulong param_2)

{
  short sVar1;
  short *psVar2;
  
  *(undefined **)((int)param_1 + 4) = &DAT_003e22b8;
  psVar2 = *(short **)((int)param_1 + 8);
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_00250198(DAT_0043dee0,param_1,0x10);
  }
  return;
}


// ==== FUN_0024adf0 @ 0024adf0 ====

undefined8 FUN_0024adf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00386ec8(param_1,1);
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 4) = &DAT_003e22b8;
  FUN_00253ff0(iVar1 + 8,param_2);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return param_1;
}


// ==== FUN_0024ae48 @ 0024ae48 ====

void FUN_0024ae48(int param_1)

{
  long lVar1;
  
  *(int *)(param_1 + 0xc) = DAT_003bfb10;
  DAT_003bfb10 = param_1;
  lVar1 = FUN_00253128(param_1 + 8,0x21);
  if (lVar1 != 0) {
    FUN_003874a8(param_1 + 8);
  }
  return;
}


// ==== FUN_0024ae98 @ 0024ae98 ====

void FUN_0024ae98(int param_1)

{
  long lVar1;
  
  *(int *)(param_1 + 0xc) = DAT_003bfb10;
  DAT_003bfb10 = param_1;
  lVar1 = FUN_00253128(param_1 + 8,0x21);
  if (lVar1 != 0) {
    FUN_003874a8(param_1 + 8);
  }
  return;
}


// ==== FUN_0024b178 @ 0024b178 ====

uint * FUN_0024b178(undefined8 param_1,long param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  short *apsStack_50 [4];
  
  if (param_2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_0024ab20(*param_3 + 8,*(undefined2 *)(*param_3 + 2));
  }
  if (lVar8 == 0) {
    puVar7 = (uint *)0x0;
  }
  else {
    iVar2 = *(int *)((int)lVar8 + 4);
    if (iVar2 == 1) {
      apsStack_50[0] = &DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      FUN_0024c6d0(param_2,apsStack_50);
      uVar6 = FUN_00253ac8(apsStack_50);
      puVar7 = DAT_003bfaec;
      if (DAT_003bfaec == (uint *)0x0) {
        puVar7 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
        FUN_00386ec8(puVar7,7);
        puVar7[2] = uVar6;
        puVar7[1] = (uint)&DAT_003e2230;
      }
      else {
        uVar3 = *DAT_003bfaec;
        puVar5 = (uint *)DAT_003bfaec[2];
        *DAT_003bfaec = uVar3 | 4;
        DAT_003bfaec = puVar5;
        piVar4 = DAT_003be8e0;
        iVar2 = DAT_003be8e0[1];
        if (iVar2 < *DAT_003be8e0) {
          *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar7;
          piVar4[1] = iVar2 + 1;
        }
        else {
          *puVar7 = uVar3 & 0xfffffffb;
        }
        puVar7[2] = uVar6;
      }
      sVar1 = *apsStack_50[0];
      *apsStack_50[0] = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
      }
    }
    else {
      puVar7 = (uint *)0x0;
      if ((iVar2 == 0xb) && (puVar7 = DAT_003bf830, DAT_003bf830 == (uint *)0x0)) {
        uVar9 = FUN_0024fa38(DAT_0043dee4,0x24);
        FUN_00386ec8(uVar9,9);
        puVar7 = (uint *)uVar9;
        puVar7[1] = (uint)&DAT_003e1f88;
        FUN_00248678(puVar7 + 2,8);
        *(undefined1 *)(puVar7 + 7) = 0;
        puVar7[1] = (uint)&DAT_003e1df0;
        puVar7[8] = (uint)&LAB_0024aef0;
        puVar7[7] = puVar7[7] & 0xfffffcff;
        DAT_003bf830 = puVar7;
        *puVar7 = *puVar7 & 0xff03ffff | 0x40000;
        (**(code **)(DAT_003bf830[1] + 0xc))
                  ((int)DAT_003bf830 + (int)*(short *)(DAT_003bf830[1] + 8));
        puVar7 = DAT_003bf830;
      }
    }
  }
  return puVar7;
}


// ==== FUN_0024b3b0 @ 0024b3b0 ====

uint * FUN_0024b3b0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [16];
  
  puVar5 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar6 = FUN_00250058(DAT_0043dee0,0x10);
    puVar5 = (uint *)FUN_0024adf0(uVar6,param_1);
  }
  else {
    uVar1 = *DAT_003bfb10;
    puVar4 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar1 | 4;
    DAT_003bfb10 = puVar4;
    piVar3 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar3[1] = iVar2 + 1;
    }
    else {
      *puVar5 = uVar1 & 0xfffffffb;
    }
    if ((undefined2 *)puVar5[2] != &DAT_003bfaf8) {
      FUN_002530e8(puVar5 + 2,0);
    }
    FUN_003872e0(auStack_50,param_1);
    FUN_00387398(puVar5 + 2,auStack_50);
    FUN_00387328(auStack_50,2);
  }
  return puVar5;
}


// ==== FUN_0024b4a8 @ 0024b4a8 ====

/* WARNING: Removing unreachable block (ram,0x0024b4d8) */
/* WARNING: Removing unreachable block (ram,0x0024b4dc) */
/* WARNING: Removing unreachable block (ram,0x0024b528) */
/* Strings referenciadas:
     "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% %%%" */

undefined ** FUN_0024b4a8(byte *param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte abStack_120 [8];
  undefined8 auStack_118 [31];
  
  pbVar4 = abStack_120;
  if (param_2 - 3U < 9) {
    pcVar3 = "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n%%%";
    do {
      uVar5 = *(undefined8 *)(pcVar3 + 8);
      uVar6 = *(undefined8 *)(pcVar3 + 0x10);
      uVar7 = *(undefined8 *)(pcVar3 + 0x18);
      *(undefined8 *)pbVar4 = *(undefined8 *)pcVar3;
      *(undefined8 *)((int)pbVar4 + 8) = uVar5;
      *(undefined8 *)((int)pbVar4 + 0x10) = uVar6;
      *(undefined8 *)((int)pbVar4 + 0x18) = uVar7;
      pcVar3 = pcVar3 + 0x20;
      pbVar4 = (byte *)((int)pbVar4 + 0x20);
    } while (pcVar3 != "url");
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      break;
    default:
      param_2 = param_2 + (uint)abStack_120[param_1[7]];
    case 6:
    case 7:
      param_2 = param_2 + (uint)abStack_120[param_1[5]];
    }
    bVar1 = abStack_120[*param_1];
    if (param_2 + (uint)bVar1 < 0x25) {
      pcVar3 = (&PTR_DAT_003bf838)[(param_2 + (uint)bVar1) * 2];
      if ((long)(int)(char)*param_1 != (long)*pcVar3) {
        return (undefined **)0x0;
      }
      lVar2 = FUN_0035ca74(param_1 + 1,pcVar3 + 1);
      if (lVar2 == 0) {
        return &PTR_DAT_003bf838 + (param_2 + (uint)bVar1) * 2;
      }
    }
  }
  return (undefined **)0x0;
}


// ==== FUN_0024b618 @ 0024b618 ====

uint * FUN_0024b618(int param_1,long param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  undefined1 auStack_60 [16];
  
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_0024b4a8(*param_3 + 8,*(undefined2 *)(*param_3 + 2));
  }
  puVar5 = DAT_003bfb10;
  puVar3 = DAT_003bfaec;
  puVar2 = DAT_003bfae8;
  puVar6 = DAT_003bfae4;
  if (lVar7 == 0) {
    return (uint *)0x0;
  }
  switch(*(undefined4 *)((int)lVar7 + 4)) {
  case 1:
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar8 = FUN_00250058(DAT_0043dee0,0x10);
      puVar5 = (uint *)FUN_0024ad08(uVar8);
      iVar12 = *(int *)(param_1 + 0x2c);
    }
    else {
      uVar14 = *DAT_003bfb10;
      puVar6 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar14 | 4;
      DAT_003bfb10 = puVar6;
      piVar1 = DAT_003be8e0;
      iVar12 = DAT_003be8e0[1];
      if (iVar12 < *DAT_003be8e0) {
        *(uint **)(iVar12 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar1[1] = iVar12 + 1;
      }
      else {
        *puVar5 = uVar14 & 0xfffffffb;
      }
      lVar7 = FUN_003872a8(puVar5 + 2);
      if (lVar7 == 0) {
        FUN_002530e8(puVar5 + 2,0);
        iVar12 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar12 = *(int *)(param_1 + 0x2c);
      }
    }
    if (iVar12 == 1) {
      FUN_00387398(puVar5 + 2,0x43de10);
      return puVar5;
    }
    if (iVar12 < 2) {
      if (iVar12 != 0) {
        return DAT_0043df40;
      }
      FUN_00387398(puVar5 + 2,0x43dd70);
      return puVar5;
    }
    if (iVar12 != 2) {
      return DAT_0043df40;
    }
    FUN_00387398(puVar5 + 2,0x43dcbc);
    return puVar5;
  default:
    return (uint *)0x0;
  case 3:
    if ((*(uint *)(param_1 + 0x30) & 0x10000) == 0) {
      return DAT_0043df40;
    }
    bVar13 = (bool)((byte)*(uint *)(param_1 + 0x30) & 1);
    if (DAT_003bfae4 == (uint *)0x0) goto LAB_0024bc24;
    uVar9 = *DAT_003bfae4 | 4;
    uVar14 = DAT_003bfae4[2];
    *DAT_003bfae4 = uVar9;
    DAT_003bfae4 = (uint *)uVar14;
    iVar12 = DAT_003be8e0[1];
    if (iVar12 < *DAT_003be8e0) {
      iVar4 = DAT_003be8e0[2];
      goto LAB_0024b818;
    }
    goto LAB_0024b80c;
  case 5:
    if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
      return DAT_0043df40;
    }
    uVar14 = *(uint *)(param_1 + 0x28) & 0xffffff;
    if (DAT_003bfaec == (uint *)0x0) {
      puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,7);
      puVar6[2] = uVar14;
      puVar11 = &DAT_003e2230;
      goto LAB_0024bc50;
    }
    uVar10 = *DAT_003bfaec | 4;
    uVar9 = DAT_003bfaec[2];
    *DAT_003bfaec = uVar10;
    DAT_003bfaec = (uint *)uVar9;
    iVar12 = DAT_003be8e0[1];
    if (*DAT_003be8e0 <= iVar12) goto LAB_0024b890;
    iVar4 = DAT_003be8e0[2];
    goto LAB_0024b89c;
  case 6:
    if (*(undefined2 **)(param_1 + 0x20) == &DAT_003bfaf8) {
      return DAT_0043df40;
    }
    if (DAT_003bfb10 == (uint *)0x0) {
      uVar8 = FUN_00250058(DAT_0043dee0,0x10);
      puVar5 = (uint *)FUN_0024ad08(uVar8);
    }
    else {
      uVar14 = *DAT_003bfb10;
      puVar6 = (uint *)DAT_003bfb10[3];
      *DAT_003bfb10 = uVar14 | 4;
      DAT_003bfb10 = puVar6;
      piVar1 = DAT_003be8e0;
      iVar12 = DAT_003be8e0[1];
      if (iVar12 < *DAT_003be8e0) {
        *(uint **)(iVar12 * 4 + DAT_003be8e0[2]) = puVar5;
        piVar1[1] = iVar12 + 1;
      }
      else {
        *puVar5 = uVar14 & 0xfffffffb;
      }
      lVar7 = FUN_003872a8(puVar5 + 2);
      if (lVar7 == 0) {
        FUN_002530e8(puVar5 + 2,0);
      }
    }
    FUN_003872e0(auStack_60,*(int *)(param_1 + 0x20) + 8);
    FUN_00387398(puVar5 + 2,auStack_60);
    FUN_00387328(auStack_60,2);
    return puVar5;
  case 7:
    uVar14 = *(uint *)(param_1 + 0x34);
    if (uVar14 == 0xffffffff) {
      return DAT_0043df40;
    }
    if (DAT_003bfaec == (uint *)0x0) {
      puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,7);
      puVar6[2] = uVar14;
      puVar11 = &DAT_003e2230;
      goto LAB_0024bc50;
    }
    uVar9 = DAT_003bfaec[2];
    break;
  case 8:
    if ((*(uint *)(param_1 + 0x30) & 0x100000) == 0) {
      return DAT_0043df40;
    }
    uVar14 = *(uint *)(param_1 + 0x30) & 0x10;
    goto LAB_0024ba68;
  case 10:
    uVar14 = *(uint *)(param_1 + 0x38);
    if (uVar14 == 0xffffffff) {
      return DAT_0043df40;
    }
    if (DAT_003bfaec == (uint *)0x0) {
      puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,7);
      puVar6[2] = uVar14;
      puVar11 = &DAT_003e2230;
      goto LAB_0024bc50;
    }
    uVar9 = DAT_003bfaec[2];
    break;
  case 0xb:
    uVar14 = *(uint *)(param_1 + 0x3c);
    if (uVar14 == 0xffffffff) {
      return DAT_0043df40;
    }
    if (DAT_003bfaec == (uint *)0x0) {
      puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,7);
      puVar6[2] = uVar14;
      puVar11 = &DAT_003e2230;
      goto LAB_0024bc50;
    }
    uVar9 = DAT_003bfaec[2];
    break;
  case 0xe:
    fVar15 = *(float *)(param_1 + 0x24);
    if (fVar15 == -1.0) {
      return DAT_0043df40;
    }
    if (DAT_003bfae8 != (uint *)0x0) {
      uVar14 = *DAT_003bfae8;
      uVar9 = DAT_003bfae8[2];
      *DAT_003bfae8 = uVar14 | 4;
      DAT_003bfae8 = (uint *)uVar9;
      piVar1 = DAT_003be8e0;
      iVar12 = DAT_003be8e0[1];
      if (iVar12 < *DAT_003be8e0) {
        *(uint **)(iVar12 * 4 + DAT_003be8e0[2]) = puVar2;
        piVar1[1] = iVar12 + 1;
      }
      else {
        *puVar2 = uVar14 & 0xfffffffb;
      }
      puVar2[2] = (uint)fVar15;
      return puVar2;
    }
    puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar6,6);
    puVar6[2] = (uint)fVar15;
    puVar11 = &DAT_003e2098;
    goto LAB_0024bc50;
  case 0xf:
    if ((*(uint *)(param_1 + 0x30) & 0x1000000) == 0) {
      return DAT_0043df40;
    }
    uVar14 = *(uint *)(param_1 + 0x30) & 0x100;
LAB_0024ba68:
    bVar13 = uVar14 != 0;
    if (DAT_003bfae4 == (uint *)0x0) {
LAB_0024bc24:
      puVar6 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
      FUN_00386ec8(puVar6,5);
      *(bool *)(puVar6 + 2) = bVar13;
      puVar11 = &DAT_003e2120;
LAB_0024bc50:
      puVar6[1] = (uint)puVar11;
      return puVar6;
    }
    uVar9 = *DAT_003bfae4 | 4;
    uVar14 = DAT_003bfae4[2];
    *DAT_003bfae4 = uVar9;
    DAT_003bfae4 = (uint *)uVar14;
    iVar12 = DAT_003be8e0[1];
    if (iVar12 < *DAT_003be8e0) {
      iVar4 = DAT_003be8e0[2];
LAB_0024b818:
      piVar1 = DAT_003be8e0;
      *(uint **)(iVar12 * 4 + iVar4) = puVar6;
      piVar1[1] = iVar12 + 1;
    }
    else {
LAB_0024b80c:
      *puVar6 = uVar9 & 0xfffffffb;
    }
    *(bool *)(puVar6 + 2) = bVar13;
    return puVar6;
  }
  uVar10 = *DAT_003bfaec | 4;
  *DAT_003bfaec = uVar10;
  DAT_003bfaec = (uint *)uVar9;
  iVar12 = DAT_003be8e0[1];
  if (iVar12 < *DAT_003be8e0) {
    iVar4 = DAT_003be8e0[2];
LAB_0024b89c:
    piVar1 = DAT_003be8e0;
    *(uint **)(iVar12 * 4 + iVar4) = puVar3;
    piVar1[1] = iVar12 + 1;
  }
  else {
LAB_0024b890:
    *puVar3 = uVar10 & 0xfffffffb;
  }
  puVar3[2] = uVar14;
  return puVar3;
}


// ==== FUN_0024bc80 @ 0024bc80 ====

/* Strings referenciadas:
     "center"
     "right"
     "false" */

undefined4 FUN_0024bc80(int param_1,long param_2,int *param_3,undefined8 param_4)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  short *apsStack_40 [4];
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_0024b4a8(*param_3 + 8,*(undefined2 *)(*param_3 + 2));
  }
  if (lVar3 == 0) {
    return 0;
  }
  switch(*(undefined4 *)((int)lVar3 + 4)) {
  case 1:
    apsStack_40[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_4,apsStack_40);
    lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fcd90);
    if ((lVar3 == 0) || (lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fcd98), lVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fcda0);
      if (lVar3 == 0) {
        uVar5 = 2;
      }
      else {
        lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fcda8);
        if (lVar3 == 0) {
          uVar5 = 1;
        }
        else {
          lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fefc0);
          if ((lVar3 != 0) && (lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fefc8), lVar3 != 0))
          goto LAB_0024bdc8;
          uVar5 = 3;
        }
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
    }
LAB_0024bdc8:
    sVar1 = *apsStack_40[0];
    *apsStack_40[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
      return 1;
    }
    break;
  case 2:
  case 4:
  case 9:
  case 0xc:
  case 0xd:
  case 0x10:
    break;
  case 3:
    apsStack_40[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_4,apsStack_40);
    lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fcd98);
    if (lVar3 == 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10001;
    }
    lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fefc0);
    if (lVar3 == 0) {
      uVar2 = *(uint *)(param_1 + 0x30);
      uVar4 = uVar2 | 0x10000;
      *(uint *)(param_1 + 0x30) = uVar4;
      if ((uVar2 & 1) != 0) {
        *(uint *)(param_1 + 0x30) = uVar4 ^ 1;
      }
    }
    sVar1 = *apsStack_40[0];
    *apsStack_40[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
      return 1;
    }
    break;
  case 5:
    uVar2 = FUN_0024c300(param_4);
    *(uint *)(param_1 + 0x28) = uVar2 & 0xffffff;
    break;
  case 6:
    FUN_0024c6d0(param_4,param_1 + 0x20);
    return 1;
  case 7:
    uVar5 = FUN_0024c300(param_4);
    *(undefined4 *)(param_1 + 0x34) = uVar5;
    break;
  case 8:
    apsStack_40[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_4,apsStack_40);
    lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fcd98);
    if (lVar3 == 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100010;
    }
    else {
      lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fefc0);
      uVar2 = *(uint *)(param_1 + 0x30);
      if (lVar3 == 0) {
        uVar4 = uVar2 | 0x100000;
        *(uint *)(param_1 + 0x30) = uVar4;
        if ((uVar2 & 0x10) == 0) goto LAB_0024bf98;
      }
      else {
        uVar4 = uVar2 | 0x10;
      }
      *(uint *)(param_1 + 0x30) = uVar4 ^ 0x10;
    }
LAB_0024bf98:
    sVar1 = *apsStack_40[0];
    *apsStack_40[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
      return 1;
    }
    break;
  case 10:
    uVar5 = FUN_0024c300(param_4);
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    break;
  case 0xb:
    uVar5 = FUN_0024c300(param_4);
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    break;
  case 0xe:
    uVar5 = FUN_0024c410(param_4);
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    break;
  case 0xf:
    apsStack_40[0] = &DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    FUN_0024c6d0(param_4,apsStack_40);
    lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fcd98);
    if (lVar3 == 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000100;
    }
    else {
      lVar3 = FUN_0035ca74(apsStack_40[0] + 4,0x3fefc0);
      uVar2 = *(uint *)(param_1 + 0x30);
      if ((lVar3 != 0) || (*(uint *)(param_1 + 0x30) = uVar2 | 0x1000000, (uVar2 & 0x100) != 0)) {
        *(uint *)(param_1 + 0x30) = (uVar2 | 0x1000000) ^ 0x100;
      }
    }
    sVar1 = *apsStack_40[0];
    *apsStack_40[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,apsStack_40[0],(ushort)apsStack_40[0][2] + 9);
      return 1;
    }
    break;
  default:
    return 0;
  }
  return 1;
}


// ==== FUN_0024c0e8 @ 0024c0e8 ====

/* WARNING: Removing unreachable block (ram,0x0024c120) */
/* WARNING: Removing unreachable block (ram,0x0024c124) */
/* WARNING: Removing unreachable block (ram,0x0024c170) */

undefined ** FUN_0024c0e8(byte *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  byte abStack_140 [8];
  undefined8 auStack_138 [31];
  
  pbVar6 = abStack_140;
  if (param_2 - 3U < 6) {
    puVar5 = &DAT_003ff010;
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
    } while (puVar5 != (undefined8 *)&UNK_003ff110);
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
      break;
    default:
      param_2 = param_2 + (uint)abStack_140[param_1[6]];
    case 5:
    case 6:
      param_2 = param_2 + (uint)abStack_140[param_1[4]];
    }
    if (param_2 + (uint)abStack_140[*param_1] < 0x26) {
      cVar1 = (&DAT_003bfa88)[param_2 + (uint)abStack_140[*param_1]];
      if (-1 < cVar1) {
        pcVar2 = (&PTR_DAT_003bf960)[cVar1 * 2];
        if ((long)(int)(char)*param_1 != (long)*pcVar2) {
          return (undefined **)0x0;
        }
        lVar4 = FUN_0035ca74(param_1 + 1,pcVar2 + 1);
        if (lVar4 != 0) {
          return (undefined **)0x0;
        }
        return &PTR_DAT_003bf960 + cVar1 * 2;
      }
      if (cVar1 < -0x25) {
        iVar3 = -(int)cVar1;
        ppuVar10 = (undefined **)(&DAT_003bfa88 + *(char *)(iVar3 + 0x3bfa62) * 8);
        ppuVar11 = ppuVar10 + *(char *)(iVar3 + 0x3bfa63) * -2;
        if (ppuVar11 <= ppuVar10) {
          return (undefined **)0x0;
        }
        pbVar6 = *ppuVar10;
        while( true ) {
          if ((*param_1 == *pbVar6) && (lVar4 = FUN_0035ca74(param_1 + 1,pbVar6 + 1), lVar4 == 0)) {
            return ppuVar10;
          }
          ppuVar10 = ppuVar10 + 2;
          if (ppuVar11 <= ppuVar10) break;
          pbVar6 = *ppuVar10;
        }
      }
    }
  }
  return (undefined **)0x0;
}


// ==== FUN_0024c300 @ 0024c300 ====

uint FUN_0024c300(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((int)*param_1 >> 4 & 1U) == 1) {
    switch(*param_1 >> 0x19) {
    case 1:
    case 0x2a:
      if (*param_1 >> 0x19 != 1) {
        param_1 = (uint *)param_1[8];
      }
      uVar1 = param_1[2];
      if ((*(ushort *)(uVar1 + 2) < 3) || (*(char *)(uVar1 + 8) != '0')) {
        uVar1 = param_1[2];
      }
      else {
        if (*(char *)(uVar1 + 9) == 'x') {
          uVar1 = FUN_00364da8(uVar1 + 8,0,0x10);
          return uVar1;
        }
        uVar1 = param_1[2];
      }
      uVar1 = FUN_0035e750(uVar1 + 8);
      break;
    default:
      uVar1 = (uint)(param_1 != DAT_0043df40);
      break;
    case 5:
      uVar1 = (uint)(byte)param_1[2];
      break;
    case 6:
      uVar1 = (uint)(float)param_1[2];
      break;
    case 7:
      uVar1 = param_1[2];
    }
  }
  return uVar1;
}


// ==== FUN_0024c410 @ 0024c410 ====

float FUN_0024c410(uint *param_1)

{
  float fVar1;
  
  if (((int)*param_1 >> 4 & 1U) != 1) {
    return 0.0;
  }
  switch(*param_1 >> 0x19) {
  case 1:
  case 0x2a:
    if (*param_1 >> 0x19 != 1) {
      param_1 = (uint *)param_1[8];
    }
    fVar1 = (float)FUN_0021aa98(param_1[2] + 8);
    break;
  default:
    if (param_1 == DAT_0043df40) {
      return 0.0;
    }
    goto LAB_0024c4dc;
  case 5:
    if ((char)param_1[2] == '\0') {
      return 0.0;
    }
LAB_0024c4dc:
    fVar1 = 1.0;
    break;
  case 6:
    fVar1 = (float)param_1[2];
    break;
  case 7:
    fVar1 = (float)(int)param_1[2];
  }
  return fVar1;
}


// ==== FUN_0024c4f0 @ 0024c4f0 ====

bool FUN_0024c4f0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  
  switch(*param_1 >> 0x19) {
  case 1:
  case 0x2a:
    lVar3 = FUN_0021ada8();
    uVar2 = *param_1;
    if (lVar3 != 7) {
      puVar4 = param_1;
      if (uVar2 >> 0x19 != 1) {
        puVar4 = (uint *)param_1[8];
      }
      uVar1 = puVar4[2];
      if (((2 < *(ushort *)(uVar1 + 2)) && (*(char *)(uVar1 + 8) == '0')) &&
         (*(char *)(uVar1 + 9) == 'x')) {
        lVar3 = FUN_00364da8(uVar1 + 8,0,0x10);
        return lVar3 != 0;
      }
      if (uVar2 >> 0x19 != 1) {
        param_1 = (uint *)param_1[8];
      }
      fVar6 = (float)FUN_0021aa98(param_1[2] + 8);
      fVar5 = 0.0;
      goto LAB_0024c5f4;
    }
    if (uVar2 >> 0x19 != 1) {
      param_1 = (uint *)param_1[8];
    }
    uVar2 = param_1[2] ^ 0x3bfaf8;
    break;
  default:
    uVar2 = (uint)param_1 ^ DAT_0043df40;
    break;
  case 5:
    return (bool)(char)param_1[2];
  case 6:
    fVar5 = (float)param_1[2];
    fVar6 = 0.0;
LAB_0024c5f4:
    if (fVar6 != fVar5) {
      return true;
    }
    return false;
  case 7:
    uVar2 = param_1[2];
  }
  return uVar2 != 0;
}


// ==== FUN_0024c650 @ 0024c650 ====

void FUN_0024c650(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short *apsStack_30 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_30[0] = &DAT_003bfaf8;
  FUN_0024c6d0(param_1,apsStack_30);
  FUN_0035cbc0(param_2,apsStack_30[0] + 4);
  sVar1 = *apsStack_30[0];
  *apsStack_30[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_30[0],(ushort)apsStack_30[0][2] + 9);
  }
  return;
}


// ==== FUN_0024c6d0 @ 0024c6d0 ====

/* Strings referenciadas:
     "[sound]"
     "[native function 0x%08x]"
     "[function]"
     "[object Object]"
     "[object]"
     "[object (prototype)]"
     "[MovieClip]"
     "[Register]"
     "[Lookup]"
     "[Extern]"
     "[FrameStack]"
     "[Extension]"
     ... */

void FUN_0024c6d0(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  char acStack_d0 [128];
  short *apsStack_50 [4];
  
  pcVar5 = acStack_d0;
  puVar6 = (uint *)param_1;
  puVar7 = (uint *)param_2;
  if (((int)*puVar6 >> 4 & 1U) != 1) {
    psVar2 = (short *)*puVar7;
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *puVar7 = (uint)&DAT_003bfaf8;
    DAT_003bfaf8 = DAT_003bfaf8 + 1;
    return;
  }
  switch(*puVar6 >> 0x19) {
  case 1:
  case 0x2a:
    if (*puVar6 >> 0x19 != 1) {
      puVar6 = (uint *)puVar6[8];
    }
    *(short *)puVar6[2] = *(short *)puVar6[2] + 1;
    psVar2 = (short *)*puVar7;
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *puVar7 = puVar6[2];
    return;
  default:
    FUN_0035d728(acStack_d0,0x3ff590,*puVar6 >> 0x19);
    FUN_00253ff0(apsStack_50,acStack_d0);
    *apsStack_50[0] = *apsStack_50[0] + 1;
    psVar2 = (short *)*puVar7;
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *puVar7 = (uint)apsStack_50[0];
    sVar1 = *apsStack_50[0];
    *apsStack_50[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      return;
    }
    FUN_00250198(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
    return;
  case 4:
    pcVar5 = "[Register]";
    break;
  case 5:
    if ((char)puVar6[2] != '\0') {
      *DAT_0043deb8 = *DAT_0043deb8 + 1;
      psVar2 = (short *)*puVar7;
      sVar1 = *psVar2;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
      }
      *puVar7 = (uint)DAT_0043deb8;
      return;
    }
    *DAT_0043dce8 = *DAT_0043dce8 + 1;
    psVar2 = (short *)*puVar7;
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *puVar7 = (uint)DAT_0043dce8;
    return;
  case 6:
    uVar3 = FUN_00291f58(puVar6[2]);
    uVar3 = FUN_0029dea8(uVar3,0x3ff0000000000000);
    lVar4 = FUN_002919f8(uVar3,0);
    if (lVar4 == 0) {
      FUN_0035d728(acStack_d0,0x3ff498,(int)(float)puVar6[2]);
    }
    else {
      uVar3 = FUN_00291f58(puVar6[2]);
      FUN_0035d728(acStack_d0,0x3ff4a0,uVar3);
      pcVar5 = acStack_d0;
    }
    break;
  case 7:
    FUN_0035d728(acStack_d0,0x3ff498,puVar6[2]);
    pcVar5 = acStack_d0;
    break;
  case 8:
    pcVar5 = "[Lookup]";
    break;
  case 9:
    FUN_0035d728(acStack_d0,0x3ff4b0,puVar6[8]);
    pcVar5 = acStack_d0;
    break;
  case 0xb:
    pcVar5 = "[Extern]";
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
    FUN_0021e0b8(param_1,param_2);
    return;
  case 0x14:
    pcVar5 = "[FrameStack]";
    break;
  case 0x15:
    pcVar5 = "[sound]";
    break;
  case 0x16:
    FUN_002334f0(param_1,param_2,0x40de50);
    return;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1f:
  case 0x24:
  case 0x27:
    pcVar5 = "[object Object]";
    break;
  case 0x1c:
    pcVar5 = "[object (prototype)]";
    break;
  case 0x1d:
    FUN_0024c6d0(param_1,param_2);
    return;
  case 0x1e:
    pcVar5 = "[MovieClip]";
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    pcVar5 = "[object]";
    break;
  case 0x25:
    pcVar5 = "[Extension]";
    break;
  case 0x26:
    pcVar5 = "[GlobalExtension]";
    break;
  case 0x29:
    *(short *)puVar6[8] = *(short *)puVar6[8] + 1;
    psVar2 = (short *)*puVar7;
    sVar1 = *psVar2;
    *psVar2 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
    }
    *puVar7 = puVar6[8];
    return;
  case 0x2b:
  case 0x2c:
  case 0x2d:
    pcVar5 = "[function]";
  }
  FUN_00253ff0(apsStack_50,pcVar5);
  *apsStack_50[0] = *apsStack_50[0] + 1;
  psVar2 = (short *)*puVar7;
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  *puVar7 = (uint)apsStack_50[0];
  sVar1 = *apsStack_50[0];
  *apsStack_50[0] = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    FUN_00250198(DAT_0043dee0,apsStack_50[0],(ushort)apsStack_50[0][2] + 9);
  }
  return;
}


// ==== FUN_0024cbb0 @ 0024cbb0 ====

uint * FUN_0024cbb0(undefined8 param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  
  puVar5 = DAT_003bfae4;
  if (param_2 == 2) {
    puVar10 = *(uint **)(DAT_0043db68 * 4 + DAT_0043db70 + -4);
    uVar7 = (int)*puVar10 >> 4 & 1;
    uVar8 = *puVar10 >> 0x19;
    if (uVar7 != 0) {
      if ((uVar8 == 1) || (bVar1 = false, uVar8 == 0x2a)) {
        bVar1 = uVar7 == 1;
      }
      if (bVar1) {
        puVar2 = *(uint **)((DAT_0043db68 + -1) * 4 + DAT_0043db70 + -4);
        if (((int)*puVar10 >> 4 & 1U) == 1) {
          if (DAT_0043df74 == 0) {
            uVar6 = FUN_00250058(DAT_0043dee0,0x14);
            DAT_0043df74 = FUN_00248678(uVar6,8);
            uVar8 = *puVar2;
          }
          else {
            uVar8 = *puVar2;
          }
          if (uVar8 >> 0x19 == 3) {
            if (*puVar10 >> 0x19 != 1) {
              puVar10 = (uint *)puVar10[8];
            }
            FUN_00248a98(DAT_0043df74,puVar10 + 2);
          }
          else {
            if (*puVar10 >> 0x19 != 1) {
              puVar10 = (uint *)puVar10[8];
            }
            FUN_002488d0(DAT_0043df74,puVar10 + 2,puVar2);
          }
          puVar5 = DAT_003bfae4;
          if (DAT_003bfae4 != (uint *)0x0) {
            uVar8 = *DAT_003bfae4;
            uVar7 = DAT_003bfae4[2];
            *DAT_003bfae4 = uVar8 | 4;
            DAT_003bfae4 = (uint *)uVar7;
            piVar3 = DAT_003be8e0;
            iVar9 = DAT_003be8e0[1];
            if (iVar9 < *DAT_003be8e0) {
              *(uint **)(iVar9 * 4 + DAT_003be8e0[2]) = puVar5;
              piVar3[1] = iVar9 + 1;
            }
            else {
              *puVar5 = uVar8 & 0xfffffffb;
            }
            *(undefined1 *)(puVar5 + 2) = 1;
            return puVar5;
          }
          puVar5 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
          FUN_00386ec8(puVar5,5);
          *(undefined1 *)(puVar5 + 2) = 1;
          goto LAB_0024ce68;
        }
        goto LAB_0024cbcc;
      }
    }
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar7 = *DAT_003bfae4 | 4;
      uVar8 = DAT_003bfae4[2];
      *DAT_003bfae4 = uVar7;
      DAT_003bfae4 = (uint *)uVar8;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        iVar4 = DAT_003be8e0[2];
        goto LAB_0024ce1c;
      }
      goto LAB_0024ce10;
    }
  }
  else {
LAB_0024cbcc:
    if (DAT_003bfae4 != (uint *)0x0) {
      uVar7 = *DAT_003bfae4 | 4;
      uVar8 = DAT_003bfae4[2];
      *DAT_003bfae4 = uVar7;
      DAT_003bfae4 = (uint *)uVar8;
      iVar9 = DAT_003be8e0[1];
      if (iVar9 < *DAT_003be8e0) {
        iVar4 = DAT_003be8e0[2];
LAB_0024ce1c:
        piVar3 = DAT_003be8e0;
        *(uint **)(iVar9 * 4 + iVar4) = puVar5;
        piVar3[1] = iVar9 + 1;
        goto LAB_0024ce30;
      }
LAB_0024ce10:
      *puVar5 = uVar7 & 0xfffffffb;
LAB_0024ce30:
      *(undefined1 *)(puVar5 + 2) = 0;
      return puVar5;
    }
  }
  puVar5 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
  FUN_00386ec8(puVar5,5);
  *(undefined1 *)(puVar5 + 2) = 0;
LAB_0024ce68:
  puVar5[1] = (uint)&DAT_003e2120;
  return puVar5;
}


// ==== FUN_0024ce90 @ 0024ce90 ====

void FUN_0024ce90(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  FUN_00252b10(DAT_003be8e0);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43dda8,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43dc9c,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43de7c,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43dcc8,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43dcdc,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43dea4,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43dd90,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43ded4,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43dce0,uVar6);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  iVar4 = (int)uVar6;
  *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar4 + 8,8);
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_003e1df0;
  *(undefined1 **)(iVar4 + 0x20) = &LAB_0024cba0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffcff;
  FUN_002488d0(DAT_003bfabc + 8,0x43de8c,uVar6);
  puVar3 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43dda8);
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(uVar6,0x1c);
  puVar5 = (uint *)uVar6;
  puVar5[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar5 + 2,8);
  puVar5[7] = 0;
  *puVar5 = *puVar5 & 0xffffffdf;
  puVar5[1] = (uint)&DAT_003e1f00;
  DAT_003bfab4 = puVar5;
  iVar4 = (**(code **)(puVar3[1] + 0x24))((int)puVar3 + (int)*(short *)(puVar3[1] + 0x20));
  puVar5 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 0xc);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 0xc);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar5;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar5;
  }
  DAT_0043df44 = DAT_003bfab4;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  *DAT_003bfab4 = *DAT_003bfab4 & 0xff03ffff | 0x40000;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43dc9c);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[7] = 0;
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar2 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 8) = puVar2;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 8) = puVar2;
  }
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43de7c);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[7] = 0;
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar2 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 8) = puVar2;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 8) = puVar2;
  }
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43dcc8);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[7] = 0;
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar2 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 8) = puVar2;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 8) = puVar2;
  }
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43dcdc);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[7] = 0;
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar2 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 8) = puVar2;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 8) = puVar2;
  }
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43dea4);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[7] = 0;
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar2 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 8) = puVar2;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 8) = puVar2;
  }
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43dd90);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  puVar3[7] = 0;
  DAT_0043df48 = puVar3;
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar5 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
  }
  *(uint **)(iVar4 + 8) = puVar5;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43ded4);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[7] = 0;
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar2 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 8) = puVar2;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 8) = puVar2;
  }
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43dce0);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[7] = 0;
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar2 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 8) = puVar2;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 8) = puVar2;
  }
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  puVar5 = (uint *)FUN_00248c78(DAT_003bfabc + 8,0x43de8c);
  lVar7 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(lVar7,0x1c);
  puVar3 = (uint *)lVar7;
  puVar3[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar3 + 2,8);
  puVar3[7] = 0;
  puVar3[1] = (uint)&DAT_003e1f00;
  *puVar3 = *puVar3 & 0xffffffdf;
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  if (lVar7 != 0) {
    (**(code **)(puVar3[1] + 0xc))((int)puVar3 + (int)*(short *)(puVar3[1] + 8));
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 0xc) = puVar3;
  }
  iVar4 = (**(code **)(puVar5[1] + 0x24))((int)puVar5 + (int)*(short *)(puVar5[1] + 0x20));
  puVar2 = DAT_003bfab4;
  if (DAT_003bfab4 == (uint *)0x0) {
    iVar1 = *(int *)(iVar4 + 8);
  }
  else {
    (**(code **)(DAT_003bfab4[1] + 0xc))((int)DAT_003bfab4 + (int)*(short *)(DAT_003bfab4[1] + 8));
    iVar1 = *(int *)(iVar4 + 8);
  }
  if (iVar1 == 0) {
    *(uint **)(iVar4 + 8) = puVar2;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(uint **)(iVar4 + 8) = puVar2;
  }
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  *puVar3 = *puVar3 & 0xff03ffff | 0x40000;
  uVar6 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar6,9);
  puVar5 = (uint *)uVar6;
  puVar5[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar5 + 2,8);
  *(undefined1 *)(puVar5 + 7) = 0;
  puVar5[8] = (uint)FUN_0024cbb0;
  puVar5[1] = (uint)&DAT_003e1df0;
  puVar5[7] = puVar5[7] & 0xfffffcff;
  DAT_0043df78 = puVar5;
  *puVar5 = *puVar5 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043df78[1] + 0xc))((int)DAT_0043df78 + (int)*(short *)(DAT_0043df78[1] + 8));
  FUN_00252b10(DAT_003be8e0);
  return;
}


// ==== FUN_0024e078 @ 0024e078 ====

void FUN_0024e078(void)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  uVar5 = FUN_00250058(DAT_0043dee0,8);
  FUN_00386ec8(uVar5,3);
  *(undefined **)((int)uVar5 + 4) = &DAT_003e1760;
  FUN_00387100(uVar5,0);
  FUN_00387090(uVar5,0xfff);
  DAT_0043df40 = (int)uVar5;
  uVar5 = FUN_00250058(DAT_0043dee0,0x3d0);
  DAT_0043e960 = FUN_00249cc8(uVar5);
  uVar5 = FUN_00250058(DAT_0043dee0,8);
  FUN_00386ec8(uVar5,0xb);
  *(undefined **)((int)uVar5 + 4) = &DAT_003e16d8;
  FUN_00387140(uVar5,1);
  FUN_00387090(uVar5,0xfff);
  DAT_0043df6c = DAT_0043e960;
  if ((DAT_0043e960 & 0xf) != 0) {
    DAT_0043df6c = (DAT_0043e960 + 0x10) - (DAT_0043e960 & 0xf);
  }
  DAT_0043df70 = (int)uVar5;
  FUN_00249cf0(DAT_0043df6c);
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(uVar5,0x18);
  iVar7 = (int)uVar5;
  *(undefined **)(iVar7 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar7 + 8,8);
  *(undefined1 *)(iVar7 + 0x1c) = 0;
  *(undefined **)(iVar7 + 4) = &DAT_003e1650;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffcff;
  FUN_00387140(uVar5,1);
  DAT_0043df3c = iVar7;
  (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(uVar5,0x27);
  iVar7 = (int)uVar5;
  *(undefined **)(iVar7 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar7 + 8,8);
  *(undefined1 *)(iVar7 + 0x1c) = 0;
  *(undefined **)(iVar7 + 4) = &DAT_003e1158;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffcff;
  FUN_00387140(uVar5,1);
  DAT_0043df4c = iVar7;
  (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(uVar5,0x19);
  iVar7 = (int)uVar5;
  *(undefined **)(iVar7 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar7 + 8,0xb);
  *(undefined1 *)(iVar7 + 0x1c) = 0;
  *(undefined **)(iVar7 + 4) = &DAT_003e15c8;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffcff;
  FUN_00387140(uVar5,1);
  DAT_003bfabc = iVar7;
  (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x20);
  FUN_00386ec8(uVar5,0x26);
  iVar7 = (int)uVar5;
  *(undefined **)(iVar7 + 4) = &DAT_003e1f88;
  FUN_00248678(iVar7 + 8,8);
  *(undefined1 *)(iVar7 + 0x1c) = 0;
  *(undefined **)(iVar7 + 4) = &DAT_003e1540;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffcff;
  FUN_00387140(uVar5,1);
  DAT_003bfab8 = iVar7;
  (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 8));
  puVar4 = DAT_003bfb10;
  if (DAT_003bfb10 == (uint *)0x0) {
    uVar5 = FUN_00250058(DAT_0043dee0,0x10);
    puVar4 = (uint *)FUN_0024ad08(uVar5);
  }
  else {
    uVar1 = *DAT_003bfb10;
    puVar3 = (uint *)DAT_003bfb10[3];
    *DAT_003bfb10 = uVar1 | 4;
    DAT_003bfb10 = puVar3;
    piVar2 = DAT_003be8e0;
    iVar7 = DAT_003be8e0[1];
    if (iVar7 < *DAT_003be8e0) {
      *(uint **)(iVar7 * 4 + DAT_003be8e0[2]) = puVar4;
      piVar2[1] = iVar7 + 1;
    }
    else {
      *puVar4 = uVar1 & 0xfffffffb;
    }
    lVar6 = FUN_003872a8(puVar4 + 2);
    if (lVar6 == 0) {
      FUN_002530e8(puVar4 + 2,0);
    }
  }
  DAT_0043e95c = puVar4;
  *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043e95c[1] + 0xc))((int)DAT_0043e95c + (int)*(short *)(DAT_0043e95c[1] + 8));
  DAT_0043df74 = 0;
  FUN_0024ce90();
  DAT_0043df00 = 0x3f800000;
  DAT_0043df1c = 0;
  DAT_0043dee8._0_4_ = 0x3f800000;
  DAT_0043def0._4_4_ = 0x3f800000;
  DAT_0043def8._4_4_ = 0;
  DAT_0043df04 = 0x3f800000;
  DAT_0043df08 = 0x3f800000;
  DAT_0043df0c = 0x3f800000;
  DAT_0043df10 = 0;
  DAT_0043df14 = 0;
  DAT_0043df18 = 0;
  DAT_0043dee8._4_4_ = 0;
  DAT_0043def0._0_4_ = 0;
  DAT_0043def8._0_4_ = 0;
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar5,9);
  puVar4 = (uint *)uVar5;
  puVar4[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar4 + 2,8);
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[8] = (uint)FUN_0021c740;
  puVar4[1] = (uint)&DAT_003e1df0;
  puVar4[7] = puVar4[7] & 0xfffffcff;
  DAT_0043df20 = puVar4;
  *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043df20[1] + 0xc))((int)DAT_0043df20 + (int)*(short *)(DAT_0043df20[1] + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar5,9);
  puVar4 = (uint *)uVar5;
  puVar4[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar4 + 2,8);
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[8] = (uint)FUN_0021cb40;
  puVar4[1] = (uint)&DAT_003e1df0;
  puVar4[7] = puVar4[7] & 0xfffffcff;
  DAT_0043df24 = puVar4;
  *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043df24[1] + 0xc))((int)DAT_0043df24 + (int)*(short *)(DAT_0043df24[1] + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar5,9);
  puVar4 = (uint *)uVar5;
  puVar4[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar4 + 2,8);
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[8] = (uint)&LAB_0021cc78;
  puVar4[1] = (uint)&DAT_003e1df0;
  puVar4[7] = puVar4[7] & 0xfffffcff;
  DAT_0043df28 = puVar4;
  *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043df28[1] + 0xc))((int)DAT_0043df28 + (int)*(short *)(DAT_0043df28[1] + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar5,9);
  puVar4 = (uint *)uVar5;
  puVar4[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar4 + 2,8);
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[8] = (uint)FUN_0021d188;
  puVar4[1] = (uint)&DAT_003e1df0;
  puVar4[7] = puVar4[7] & 0xfffffcff;
  DAT_0043df2c = puVar4;
  *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043df2c[1] + 0xc))((int)DAT_0043df2c + (int)*(short *)(DAT_0043df2c[1] + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar5,9);
  puVar4 = (uint *)uVar5;
  puVar4[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar4 + 2,8);
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[8] = (uint)FUN_0021d348;
  puVar4[1] = (uint)&DAT_003e1df0;
  puVar4[7] = puVar4[7] & 0xfffffcff;
  DAT_0043df30 = puVar4;
  *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043df30[1] + 0xc))((int)DAT_0043df30 + (int)*(short *)(DAT_0043df30[1] + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar5,9);
  puVar4 = (uint *)uVar5;
  puVar4[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar4 + 2,8);
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[8] = (uint)FUN_0021d4e0;
  puVar4[1] = (uint)&DAT_003e1df0;
  puVar4[7] = puVar4[7] & 0xfffffcff;
  DAT_0043df34 = puVar4;
  *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043df34[1] + 0xc))((int)DAT_0043df34 + (int)*(short *)(DAT_0043df34[1] + 8));
  uVar5 = FUN_0024fa38(DAT_0043dee4,0x24);
  FUN_00386ec8(uVar5,9);
  puVar4 = (uint *)uVar5;
  puVar4[1] = (uint)&DAT_003e1f88;
  FUN_00248678(puVar4 + 2,8);
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[1] = (uint)&DAT_003e1df0;
  puVar4[8] = (uint)&LAB_0021dd30;
  puVar4[7] = puVar4[7] & 0xfffffcff;
  DAT_0043df38 = puVar4;
  *puVar4 = *puVar4 & 0xff03ffff | 0x40000;
  (**(code **)(DAT_0043df38[1] + 0xc))((int)DAT_0043df38 + (int)*(short *)(DAT_0043df38[1] + 8));
  FUN_0035c6ec(0x43dba8,0,0x10);
  FUN_00252b10(DAT_003be8e0);
  return;
}


// ==== FUN_0024e8c8 @ 0024e8c8 ====

undefined8 FUN_0024e8c8(undefined8 param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  short *apsStack_b0 [4];
  short *apsStack_a0 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_b0[0] = &DAT_003bfaf8;
  puVar8 = (undefined4 *)param_1;
  if ((*param_2 >> 4 & 1U) == 0) {
    *puVar8 = &DAT_003bfaf8;
    uVar2 = DAT_003bfafc;
    if (DAT_003bfaf8 != 0) {
      return param_1;
    }
  }
  else {
    lVar4 = (**(code **)(param_2[1] + 0x24))((int)param_2 + (int)*(short *)(param_2[1] + 0x20));
    if (lVar4 != 0) {
      apsStack_a0[0] = &DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      lVar5 = FUN_00248ee0(lVar4);
      if (lVar5 == 0) {
LAB_0024eab4:
        FUN_002539c0(apsStack_b0,0x40de60);
        *puVar8 = apsStack_b0[0];
        *apsStack_b0[0] = *apsStack_b0[0] + 1;
        sVar1 = *apsStack_a0[0];
        *apsStack_a0[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,apsStack_a0[0],(ushort)apsStack_a0[0][2] + 9);
        }
        sVar1 = *apsStack_b0[0];
        *apsStack_b0[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) != 0) {
          return param_1;
        }
        FUN_00250198(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
        return param_1;
      }
      iVar7 = *(int *)lVar5;
      do {
        bVar3 = false;
        if (*(short *)(iVar7 + 2) == *(short *)(DAT_0043dc18 + 2)) {
          if (iVar7 != DAT_0043dc18) {
            lVar6 = FUN_00360838(iVar7 + 8,DAT_0043dc18 + 8);
            bVar3 = false;
            if (lVar6 != 0) goto LAB_0024ea10;
          }
          bVar3 = true;
        }
LAB_0024ea10:
        if (!bVar3) {
          iVar7 = *(int *)lVar5;
          bVar3 = false;
          if (*(short *)(iVar7 + 2) == *(short *)(DAT_0043ddf8 + 2)) {
            if (iVar7 != DAT_0043ddf8) {
              lVar6 = FUN_00360838(iVar7 + 8,DAT_0043ddf8 + 8);
              bVar3 = false;
              if (lVar6 != 0) goto LAB_0024ea50;
            }
            bVar3 = true;
          }
LAB_0024ea50:
          if (!bVar3) {
            FUN_0024c6d0(((int *)lVar5)[1],apsStack_a0);
            FUN_00252d28(apsStack_b0,lVar5);
            FUN_00252e10(apsStack_b0,0x40de58);
            FUN_00252d28(apsStack_b0,apsStack_a0);
            FUN_00252e10(apsStack_b0,0x40de60);
          }
        }
        lVar5 = FUN_00248f48(lVar4,lVar5);
        if (lVar5 == 0) goto LAB_0024eab4;
        iVar7 = *(int *)lVar5;
      } while( true );
    }
    *puVar8 = apsStack_b0[0];
    *apsStack_b0[0] = *apsStack_b0[0] + 1;
    sVar1 = *apsStack_b0[0];
    *apsStack_b0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      return param_1;
    }
    uVar2 = apsStack_b0[0][2];
  }
  FUN_00250198(DAT_0043dee0,apsStack_b0[0],uVar2 + 9);
  return param_1;
}


// ==== FUN_0024eb58 @ 0024eb58 ====

/* Strings referenciadas:
     "_proto__" */

undefined8 FUN_0024eb58(undefined8 param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  short *apsStack_d0 [4];
  short *apsStack_c0 [4];
  short *apsStack_b0 [4];
  
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  apsStack_d0[0] = &DAT_003bfaf8;
  puVar10 = (undefined4 *)param_1;
  if ((*param_2 >> 4 & 1U) == 0) {
    *puVar10 = &DAT_003bfaf8;
    uVar2 = DAT_003bfafc;
    if (DAT_003bfaf8 != 0) {
      return param_1;
    }
  }
  else {
    lVar5 = (**(code **)(param_2[1] + 0x24))((int)param_2 + (int)*(short *)(param_2[1] + 0x20));
    if (lVar5 != 0) {
      apsStack_c0[0] = &DAT_003bfaf8;
      DAT_003bfaf8 = DAT_003bfaf8 + 1;
      lVar6 = FUN_00248ee0(lVar5);
      if (lVar6 == 0) {
LAB_0024ed9c:
        FUN_002539c0(apsStack_d0,0x40de60);
        *puVar10 = apsStack_d0[0];
        *apsStack_d0[0] = *apsStack_d0[0] + 1;
        sVar1 = *apsStack_c0[0];
        *apsStack_c0[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          FUN_00250198(DAT_0043dee0,apsStack_c0[0],(ushort)apsStack_c0[0][2] + 9);
        }
        sVar1 = *apsStack_d0[0];
        *apsStack_d0[0] = sVar1 + -1;
        if ((short)(sVar1 + -1) != 0) {
          return param_1;
        }
        FUN_00250198(DAT_0043dee0,apsStack_d0[0],(ushort)apsStack_d0[0][2] + 9);
        return param_1;
      }
      apsStack_b0[0] = (short *)*(undefined4 *)lVar6;
      do {
        *apsStack_b0[0] = *apsStack_b0[0] + 1;
        if ((char)apsStack_b0[0][4] == '_') {
          iVar9 = (int)apsStack_b0[0] + 9;
          lVar7 = FUN_0035ca74(iVar9,0x3ff658);
          if ((lVar7 != 0) && (lVar7 = FUN_0035ca74(iVar9,0x3fdb00), lVar7 != 0)) {
            puVar3 = *(uint **)((int)lVar6 + 4);
            uVar4 = *puVar3;
            uVar8 = 0;
            if (uVar4 >> 0x19 == 9) {
              uVar8 = (int)uVar4 >> 4 & 1;
            }
            if (uVar8 == 0) {
              FUN_0024c6d0(puVar3,apsStack_c0);
              FUN_00252d28(apsStack_d0,apsStack_b0);
              FUN_00252e10(apsStack_d0,0x40de58);
              FUN_00252d28(apsStack_d0,apsStack_c0);
              FUN_00252e10(apsStack_d0,0x40de60);
            }
            goto LAB_0024ed5c;
          }
          sVar1 = *apsStack_b0[0];
          *apsStack_b0[0] = sVar1 + -1;
          if ((short)(sVar1 + -1) == 0) {
            FUN_00250198(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
          }
        }
        else {
LAB_0024ed5c:
          sVar1 = *apsStack_b0[0];
          *apsStack_b0[0] = sVar1 + -1;
          if ((short)(sVar1 + -1) == 0) {
            FUN_00250198(DAT_0043dee0,apsStack_b0[0],(ushort)apsStack_b0[0][2] + 9);
          }
        }
        lVar6 = FUN_00248f48(lVar5,lVar6);
        if (lVar6 == 0) goto LAB_0024ed9c;
        apsStack_b0[0] = (short *)*(undefined4 *)lVar6;
      } while( true );
    }
    *puVar10 = apsStack_d0[0];
    *apsStack_d0[0] = *apsStack_d0[0] + 1;
    sVar1 = *apsStack_d0[0];
    *apsStack_d0[0] = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      return param_1;
    }
    uVar2 = apsStack_d0[0][2];
  }
  FUN_00250198(DAT_0043dee0,apsStack_d0[0],uVar2 + 9);
  return param_1;
}


// ==== FUN_0024ee48 @ 0024ee48 ====

uint * FUN_0024ee48(uint *param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  puVar6 = param_1;
  if (param_3 != (uint *)0x0) {
    puVar6 = param_3;
  }
  iVar10 = *(int *)param_2;
  lVar7 = FUN_0024c0e8(iVar10 + 8,*(undefined2 *)(iVar10 + 2));
  if (lVar7 == 0) {
    if (((int)*puVar6 >> 4 & 1U) == 1) {
      pcVar5 = *(code **)(puVar6[1] + 0x24);
      iVar10 = (int)puVar6 + (int)*(short *)(puVar6[1] + 0x20);
      while (lVar7 = (*pcVar5)(iVar10), lVar7 != 0) {
        puVar6 = (uint *)FUN_00248c78(lVar7,param_2);
        if (puVar6 != (uint *)0x0) {
          return puVar6;
        }
        iVar10 = *(int *)((int)lVar7 + 8);
        if (iVar10 == 0) break;
        pcVar5 = *(code **)(*(int *)(iVar10 + 4) + 0x24);
        iVar10 = iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x20);
      }
      puVar6 = (uint *)FUN_00248c78(DAT_003bfab8 + 8,param_2);
      if (puVar6 != (uint *)0x0) {
        return puVar6;
      }
      puVar6 = (uint *)FUN_00248c78(DAT_003bfabc + 2,param_2);
      return puVar6;
    }
    goto switchD_0024eeac_caseD_1;
  }
  switch(*(undefined4 *)((int)lVar7 + 4)) {
  case 2:
    puVar6 = *(uint **)(DAT_0043db8c * 4 + DAT_0043db94 + -4);
    if (puVar6 != param_1) {
      if (DAT_0043db74 < 1) {
        uVar9 = param_1[1];
      }
      else {
        puVar2 = *(uint **)(DAT_0043db74 * 4 + DAT_0043db7c + -4);
        if (((int)*puVar2 >> 4 & 1U) == 1) {
          if (puVar6 == puVar2) {
            return puVar2;
          }
          lVar7 = (**(code **)(puVar2[1] + 0x24))((int)puVar2 + (int)*(short *)(puVar2[1] + 0x20));
          while (lVar7 != 0) {
            puVar1 = *(uint **)((int)lVar7 + 8);
            if (puVar1 == (uint *)0x0) {
              uVar9 = param_1[1];
              goto LAB_0024ef6c;
            }
            if (puVar1 == puVar6) {
              return puVar2;
            }
            lVar7 = (**(code **)(puVar1[1] + 0x24))((int)puVar1 + (int)*(short *)(puVar1[1] + 0x20))
            ;
          }
          uVar9 = param_1[1];
        }
        else {
          uVar9 = param_1[1];
        }
      }
LAB_0024ef6c:
      lVar7 = (**(code **)(uVar9 + 0x24))((int)param_1 + (int)*(short *)(uVar9 + 0x20));
      while ((lVar7 != 0 && (puVar2 = *(uint **)((int)lVar7 + 8), puVar2 != (uint *)0x0))) {
        if (puVar2 == puVar6) {
          return param_1;
        }
        lVar7 = (**(code **)(puVar2[1] + 0x24))((int)puVar2 + (int)*(short *)(puVar2[1] + 0x20));
      }
      param_1 = *(uint **)(DAT_0043db8c * 4 + DAT_0043db94 + -4);
    }
    break;
  case 3:
    bVar3 = (*puVar6 >> 0x19) - 0xc < 8;
    uVar4 = 0;
    uVar9 = (int)*puVar6 >> 4;
    if (bVar3) {
      uVar4 = uVar9 & 1;
    }
    if (uVar4 == 0) {
      puVar6 = *(uint **)(DAT_0043db98 + 0x24);
      if (puVar6 != (uint *)0x0) {
        uVar9 = 0;
        if ((*puVar6 >> 0x19) - 0xc < 8) {
          uVar9 = (int)*puVar6 >> 4 & 1;
        }
        if (uVar9 != 0) {
          if (puVar6[0x11] == 0) {
            return puVar6;
          }
          for (puVar6 = (uint *)puVar6[0x11]; puVar6[0x11] != 0; puVar6 = (uint *)puVar6[0x11]) {
          }
          return puVar6;
        }
      }
      puVar6 = (uint *)FUN_00218930(0);
      return puVar6;
    }
    uVar4 = 0;
    if (bVar3) {
      uVar4 = uVar9 & 1;
    }
    if (uVar4 != 0) {
      if (puVar6[0x11] == 0) {
        return puVar6;
      }
      for (puVar6 = (uint *)puVar6[0x11]; puVar6[0x11] != 0; puVar6 = (uint *)puVar6[0x11]) {
      }
      return puVar6;
    }
  default:
switchD_0024eeac_caseD_1:
    param_1 = (uint *)0x0;
    break;
  case 4:
    param_1 = DAT_0043df3c;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    uVar8 = FUN_0035e750(*(int *)param_2 + 0xe);
    param_1 = (uint *)FUN_00218930(uVar8);
    break;
  case 0x10:
    uVar9 = 0;
    if ((*puVar6 >> 0x19) - 0xc < 8) {
      uVar9 = (int)*puVar6 >> 4 & 1;
    }
    param_1 = (uint *)0x0;
    if (uVar9 != 0) {
      param_1 = (uint *)puVar6[0x11];
    }
    break;
  case 0x11:
    param_1 = DAT_0043df70;
    break;
  case 0x12:
    puVar6 = *(uint **)(DAT_0043db8c * 4 + DAT_0043db94 + -4);
    lVar7 = (**(code **)(puVar6[1] + 0x24))((int)puVar6 + (int)*(short *)(puVar6[1] + 0x20));
    if (lVar7 == 0) {
      return DAT_0043df40;
    }
    puVar2 = *(uint **)((int)lVar7 + 8);
    if (puVar2 == (uint *)0x0) {
      return DAT_0043df40;
    }
    if (puVar6 == param_1) {
      uVar9 = *puVar6;
    }
    else {
      lVar7 = FUN_0024f440(puVar6);
      if (lVar7 == 0) {
        uVar9 = *puVar6;
      }
      else {
        uVar11 = *puVar6 >> 0x19;
        uVar4 = 0;
        uVar9 = (int)*puVar6 >> 4;
        if (uVar11 - 0xc < 8) {
          uVar4 = uVar9 & 1;
        }
        if (uVar4 == 0) {
          uVar4 = 0;
          if (uVar11 == 0x1b) {
            uVar4 = uVar9 & 1;
          }
          if (uVar4 == 0) {
            return puVar2;
          }
          if ((puVar6[7] >> 9 & 1) == 0) {
            return puVar2;
          }
          lVar7 = (**(code **)(puVar2[1] + 0x24))((int)puVar2 + (int)*(short *)(puVar2[1] + 0x20));
          if (lVar7 == 0) {
            return puVar2;
          }
          return *(uint **)((int)lVar7 + 8);
        }
        uVar9 = *puVar6;
      }
    }
    uVar11 = uVar9 >> 0x19;
    uVar4 = 0;
    uVar9 = (int)uVar9 >> 4;
    if (uVar11 == 0x1c) {
      uVar4 = uVar9 & 1;
    }
    if (uVar4 != 0) {
      return puVar2;
    }
    uVar4 = 0;
    if (*puVar2 >> 0x19 == 0x1c) {
      uVar4 = (int)*puVar2 >> 4 & 1;
    }
    if (uVar4 == 0) {
      uVar9 = puVar2[1];
    }
    else {
      if (puVar2[7] != 0) {
        if (DAT_0043db74 < 1) {
          return puVar2;
        }
        if (*(uint **)(DAT_0043db74 * 4 + DAT_0043db7c + -4) != puVar6) {
          return puVar2;
        }
        uVar4 = 0;
        if (uVar11 - 0xc < 8) {
          uVar4 = uVar9 & 1;
        }
        if (uVar4 == 0) {
          uVar4 = 0;
          if (uVar11 == 0x1b) {
            uVar4 = uVar9 & 1;
          }
          if (uVar4 == 0) {
            return puVar2;
          }
          lVar7 = (**(code **)(puVar6[1] + 0x34))((int)puVar6 + (int)*(short *)(puVar6[1] + 0x30));
          if (lVar7 == 0) {
            return puVar2;
          }
          uVar9 = puVar2[1];
        }
        else {
          if (((int)puVar6[0x16] >> 0x15 & 1U) != 0) {
            return puVar2;
          }
          uVar9 = puVar2[1];
        }
        iVar10 = (**(code **)(uVar9 + 0x24))((int)puVar2 + (int)*(short *)(uVar9 + 0x20));
        return *(uint **)(iVar10 + 8);
      }
      uVar9 = puVar2[1];
    }
    lVar7 = (**(code **)(uVar9 + 0x24))((int)puVar2 + (int)*(short *)(uVar9 + 0x20));
    if (lVar7 == 0) {
      return DAT_0043df40;
    }
    puVar6 = *(uint **)((int)lVar7 + 8);
    if (puVar6 != (uint *)0x0) {
      return puVar6;
    }
  case 5:
  case 0x14:
    param_1 = DAT_0043df40;
    break;
  case 0x13:
    param_1 = DAT_003bfabc;
    break;
  case 0x24:
    param_1 = DAT_0043e95c;
    break;
  case 0x25:
    param_1 = DAT_0043df4c;
  }
  return param_1;
}


// ==== FUN_0024f440 @ 0024f440 ====

undefined4 FUN_0024f440(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar2 = FUN_00248c78(DAT_003bfabc + 8,0x43dd90);
  iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x24))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x20));
  iVar2 = *(int *)(iVar2 + 0xc);
  iVar3 = FUN_00248c78(DAT_003bfabc + 8,0x43dda8);
  iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x24))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x20));
  iVar3 = *(int *)(iVar3 + 0xc);
  if (param_1 == iVar2) {
    uVar4 = 1;
  }
  else {
    lVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x24))
                      (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x20));
    while (lVar5 != 0) {
      iVar1 = *(int *)((int)lVar5 + 8);
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 == iVar2) {
        return 1;
      }
      if (iVar1 == iVar3) {
        return 0;
      }
      lVar5 = (**(code **)(*(int *)(iVar1 + 4) + 0x24))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x20));
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ==== FUN_0024f538 @ 0024f538 ====

undefined4 FUN_0024f538(uint *param_1)

{
  switch(*param_1 >> 0x19) {
  case 1:
  case 9:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x21:
  case 0x24:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    return 1;
  default:
    return 0;
  }
}


// ==== FUN_0024f578 @ 0024f578 ====

void FUN_0024f578(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*param_1 >> 6 & 0xfff) + 1;
  if (uVar2 < 0x1000) {
    uVar1 = *param_1;
  }
  else {
    uVar2 = 0xfff;
    *param_1 = *param_1 & 0xfeffffff | 0x1000000;
    uVar1 = *param_1;
  }
  *param_1 = uVar1 & 0xfffc003f | (uVar2 & 0xfff) << 6;
  return;
}


// ==== FUN_0024f5d8 @ 0024f5d8 ====

void FUN_0024f5d8(uint *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (*param_1 >> 6 & 0xfff) - 1;
  uVar5 = uVar4;
  if (0xfff < uVar4) {
    uVar5 = 0xfff;
    *param_1 = *param_1 & 0xfeffffff | 0x1000000;
  }
  *param_1 = *param_1 & 0xfffc003f | (uVar5 & 0xfff) << 6;
  if (uVar4 == 0) {
    if (cGpffff8658 == '\0') {
      uVar5 = *param_1;
    }
    else {
      lVar3 = (**(code **)(param_1[1] + 0x6c))((int)param_1 + (int)*(short *)(param_1[1] + 0x68));
      if (lVar3 != 0) {
        return;
      }
      uVar5 = *param_1;
    }
    if (((int)uVar5 >> 0x18 & 1U) == 0) {
      if (((int)uVar5 >> 5 & 1U) == 0) {
        (**(code **)(param_1[1] + 0x1c))((int)param_1 + (int)*(short *)(param_1[1] + 0x18));
      }
      else if (((int)uVar5 >> 2 & 1U) == 0) {
        if (DAT_003be8e0[1] < *DAT_003be8e0) {
          *param_1 = uVar5 | 4;
          piVar2 = DAT_003be8e0;
          iVar1 = DAT_003be8e0[1];
          if (iVar1 < *DAT_003be8e0) {
            *(uint **)(iVar1 * 4 + DAT_003be8e0[2]) = param_1;
            piVar2[1] = iVar1 + 1;
          }
          else {
            *param_1 = uVar5 & 0xfffffffb;
          }
        }
        else {
          (**(code **)(param_1[1] + 0x1c))((int)param_1 + (int)*(short *)(param_1[1] + 0x18));
        }
      }
    }
    else {
      *param_1 = uVar5 & 0xfffc003f | 0x3ffc0;
    }
  }
  return;
}


// ==== FUN_0024f760 @ 0024f760 ====

int FUN_0024f760(int param_1)

{
  return param_1 + 8;
}


// ==== FUN_0024f770 @ 0024f770 ====

void FUN_0024f770(undefined8 param_1)

{
  FUN_00249958((int)param_1 + 8,param_1);
  return;
}


// ==== FUN_0024f790 @ 0024f790 ====

void FUN_0024f790(int param_1)

{
  FUN_002487e0(param_1 + 8);
  return;
}


// ==== FUN_0024f7b0 @ 0024f7b0 ====

void FUN_0024f7b0(void)

{
  FUN_0024b3b0();
  return;
}


// ==== FUN_0024f7d0 @ 0024f7d0 ====

uint * FUN_0024f7d0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = DAT_003bfaec;
  if (DAT_003bfaec == (uint *)0x0) {
    puVar5 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,7);
    puVar5[2] = param_1;
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
    puVar5[2] = param_1;
  }
  return puVar5;
}


// ==== FUN_0024f898 @ 0024f898 ====

uint * FUN_0024f898(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = DAT_003bfae8;
  if (DAT_003bfae8 == (uint *)0x0) {
    puVar5 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,6);
    puVar5[2] = param_1;
    puVar5[1] = (uint)&DAT_003e2098;
  }
  else {
    uVar1 = *DAT_003bfae8;
    puVar4 = (uint *)DAT_003bfae8[2];
    *DAT_003bfae8 = uVar1 | 4;
    DAT_003bfae8 = puVar4;
    piVar3 = DAT_003be8e0;
    iVar2 = DAT_003be8e0[1];
    if (iVar2 < *DAT_003be8e0) {
      *(uint **)(iVar2 * 4 + DAT_003be8e0[2]) = puVar5;
      piVar3[1] = iVar2 + 1;
    }
    else {
      *puVar5 = uVar1 & 0xfffffffb;
    }
    puVar5[2] = param_1;
  }
  return puVar5;
}


// ==== FUN_0024f960 @ 0024f960 ====

uint * FUN_0024f960(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = DAT_003bfae4;
  if (DAT_003bfae4 == (uint *)0x0) {
    puVar5 = (uint *)FUN_00250058(DAT_0043dee0,0xc);
    FUN_00386ec8(puVar5,5);
    *(undefined1 *)(puVar5 + 2) = param_1;
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
    *(undefined1 *)(puVar5 + 2) = param_1;
  }
  return puVar5;
}


// ==== FUN_0024fa38 @ 0024fa38 ====

undefined8 FUN_0024fa38(void)

{
  undefined8 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_00250058();
  puVar2 = (uint *)uVar1;
  if (DAT_0040eb63 == '\x04') {
    puVar2[1] = puVar2[1] | 1;
  }
  else if (DAT_0040eb63 == '\0') {
    *puVar2 = *puVar2 | 1;
  }
  return uVar1;
}


// ==== FUN_0024fa98 @ 0024fa98 ====

void FUN_0024fa98(undefined8 param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00250198();
  if (lVar1 != 0) {
    if (cGpffff9373 == '\x04') {
      param_2[1] = param_2[1] & 0xfffffffe;
    }
    else if (cGpffff9373 == '\0') {
      *param_2 = *param_2 & 0xfffffffe;
    }
  }
  return;
}


// ==== FUN_0024fb00 @ 0024fb00 ====

uint * FUN_0024fb00(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)((int)param_1 + 4);
  do {
    bVar1 = false;
    if ((piVar5 + 3 <= param_2) &&
       (bVar1 = true, (uint *)((int)piVar5 + (piVar5[1] - piVar5[2]) + 0xc) <= param_2)) {
      bVar1 = false;
    }
  } while ((!bVar1) && (piVar5 = (int *)*piVar5, piVar5 != (int *)0x0));
  if (piVar5 == (int *)0x0) {
    puVar3 = (uint *)FUN_00250038(param_1,param_2);
    return puVar3;
  }
  if (cGpffff9373 == '\x04') {
    bVar2 = (byte)param_2[1] & 1;
  }
  else if (cGpffff9373 == '\0') {
    bVar2 = (byte)*param_2 & 1;
  }
  else {
    bVar2 = 0;
  }
  if (bVar2 == 0) {
    if (cGpffff9373 == '\x04') {
      uVar4 = param_2[1];
    }
    else {
      if (cGpffff9373 != '\0') {
        uVar4 = 0;
        goto LAB_0024fbf8;
      }
      uVar4 = *param_2;
    }
    uVar4 = uVar4 & 0xfffffffe;
  }
  else {
    uVar4 = FUN_0021b048(param_2);
  }
LAB_0024fbf8:
  param_2 = (uint *)((int)param_2 + uVar4);
  bVar1 = false;
  if ((piVar5 + 3 <= param_2) &&
     (bVar1 = true, (uint *)((int)piVar5 + (piVar5[1] - piVar5[2]) + 0xc) <= param_2)) {
    bVar1 = false;
  }
  if (!bVar1) {
    piVar5 = (int *)*piVar5;
    param_2 = (uint *)(piVar5 + 3);
    if (piVar5 == (int *)0x0) goto LAB_0024fcf8;
  }
  while (piVar5 != (int *)0x0) {
    while( true ) {
      bVar1 = false;
      if ((piVar5 + 3 <= param_2) &&
         (bVar1 = true, (uint *)((int)piVar5 + (piVar5[1] - piVar5[2]) + 0xc) <= param_2)) {
        bVar1 = false;
      }
      if (!bVar1) break;
      if (cGpffff9373 == '\x04') {
        bVar2 = (byte)param_2[1] & 1;
      }
      else if (cGpffff9373 == '\0') {
        bVar2 = (byte)*param_2 & 1;
      }
      else {
        bVar2 = 0;
      }
      if (bVar2 != 0) {
        return param_2;
      }
      if (cGpffff9373 == '\x04') {
        uVar4 = param_2[1];
LAB_0024fca4:
        uVar4 = uVar4 & 0xfffffffe;
      }
      else {
        if (cGpffff9373 == '\0') {
          uVar4 = *param_2;
          goto LAB_0024fca4;
        }
        uVar4 = 0;
      }
      param_2 = (uint *)((int)param_2 + uVar4);
    }
    piVar5 = (int *)*piVar5;
    param_2 = (uint *)(piVar5 + 3);
  }
LAB_0024fcf8:
  puVar3 = (uint *)FUN_00250018(param_1);
  return puVar3;
}


// ==== FUN_0024fd18 @ 0024fd18 ====

uint * FUN_0024fd18(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 4);
  do {
    puVar4 = (uint *)(piVar5 + 3);
    while( true ) {
      bVar1 = false;
      if ((piVar5 + 3 <= puVar4) &&
         (bVar1 = true, (uint *)((int)piVar5 + (piVar5[1] - piVar5[2]) + 0xc) <= puVar4)) {
        bVar1 = false;
      }
      if (!bVar1) break;
      if (cGpffff9373 == '\x04') {
        bVar2 = (byte)puVar4[1] & 1;
      }
      else if (cGpffff9373 == '\0') {
        bVar2 = (byte)*puVar4 & 1;
      }
      else {
        bVar2 = 0;
      }
      if (bVar2 != 0) {
        return puVar4;
      }
      if (cGpffff9373 == '\x04') {
        uVar3 = puVar4[1];
LAB_0024fd7c:
        uVar3 = uVar3 & 0xfffffffe;
      }
      else {
        if (cGpffff9373 == '\0') {
          uVar3 = *puVar4;
          goto LAB_0024fd7c;
        }
        uVar3 = 0;
      }
      puVar4 = (uint *)((int)puVar4 + uVar3);
    }
    piVar5 = (int *)*piVar5;
    if (piVar5 == (int *)0x0) {
      return (uint *)0x0;
    }
  } while( true );
}


// ==== FUN_0024fde0 @ 0024fde0 ====

void FUN_0024fde0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  DAT_0040eb62 = 4;
  DAT_0040eb60 = 8;
  DAT_0040eb63 = 0;
  DAT_0040eb5c = 0;
  uVar2 = 1000000;
  iVar3 = 1;
  do {
    uVar1 = (uint)(byte)(&DAT_003fd110)[iVar3];
    iVar3 = iVar3 + 1;
    if (uVar1 < uVar2) {
      uVar2 = uVar1;
    }
    if (DAT_0040eb5c < uVar1) {
      DAT_0040eb5c = uVar1;
    }
  } while (iVar3 < 0x2f);
  if (uVar2 < 0xc) {
    uVar2 = 0xc;
  }
  uGpffff9371 = (char)uVar2;
  return;
}


// ==== FUN_0024fe68 @ 0024fe68 ====

void FUN_0024fe68(void)

{
  (*DAT_0043da70)();
  return;
}


// ==== FUN_0024fea8 @ 0024fea8 ====

undefined8
FUN_0024fea8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            uint param_5,uint param_6,uint param_7,uint param_8,byte param_9,byte param_10,
            byte param_11)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[2] = param_3;
  puVar3[3] = param_5;
  puVar3[4] = puVar3[4] & 0x8fffffff | (param_7 & 1) << 0x1c | (param_9 & 1) << 0x1d |
              (param_11 & 1) << 0x1e;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  uVar2 = (*DAT_0043da70)(param_5 + 4);
  *puVar3 = uVar2;
  uVar2 = (*DAT_0043da70)(param_2);
  puVar3[1] = uVar2;
  FUN_0035c6ec(*puVar3,0,param_5 + 4);
  puVar1 = (undefined4 *)puVar3[1];
  *(char *)(puVar3 + 4) = (char)((param_6 & 0xff) >> 2);
  iVar4 = (int)param_2 + -0xf;
  *(char *)((int)puVar3 + 0x11) = (char)((param_8 & 0xff) >> 2);
  *(byte *)((int)puVar3 + 0x12) = param_10 >> 2;
  puVar1[2] = iVar4;
  puVar1[1] = iVar4;
  *puVar1 = 0;
  puVar3[4] = puVar3[4] & 0xf0ffffff | (param_5 & 0xf) << 0x18;
  return param_1;
}


// ==== FUN_00250018 @ 00250018 ====

int FUN_00250018(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x14) + 8;
}


// ==== FUN_00250038 @ 00250038 ====

int FUN_00250038(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + -8) == 0) {
    return 0;
  }
  return *(int *)(param_2 + -8) + 8;
}


// ==== FUN_00250058 @ 00250058 ====

int * FUN_00250058(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  uVar4 = FUN_00250370();
  piVar6 = (int *)param_1;
  piVar6[6] = piVar6[6] + 1;
  if ((uint)piVar6[3] < uVar4) {
    piVar5 = (int *)(*DAT_0043da70)(param_2 + 8);
    piVar5[1] = 0;
    *piVar5 = piVar6[5];
    if (piVar6[5] != 0) {
      *(int **)(piVar6[5] + 4) = piVar5;
    }
    piVar6[5] = (int)piVar5;
    piVar5 = piVar5 + 2;
  }
  else if (*(int *)((uVar4 & 0xfffffffc) + *piVar6) == 0) {
    piVar5 = (int *)piVar6[1];
    uVar1 = piVar5[2];
    while (uVar1 < uVar4) {
      piVar5 = (int *)*piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)(*DAT_0043da70)(piVar6[2]);
        iVar2 = piVar6[2];
        iVar3 = piVar6[1];
        piVar5[2] = iVar2 + -0xf;
        *piVar5 = iVar3;
        piVar5[1] = iVar2 + -0xf;
        piVar6[1] = (int)piVar5;
        iVar2 = piVar5[2];
        piVar5[2] = iVar2 - uVar4;
        return (int *)((int)piVar5 + (piVar5[1] - iVar2) + 0xc);
      }
      uVar1 = piVar5[2];
    }
    piVar5[2] = uVar1 - uVar4;
    piVar5 = (int *)((int)piVar5 + (piVar5[1] - uVar1) + 0xc);
  }
  else {
    piVar5 = (int *)FUN_00250260(param_1,uVar4);
  }
  return piVar5;
}


// ==== FUN_00250198 @ 00250198 ====

undefined4 FUN_00250198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00250370(param_1,param_3);
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + -1;
  if (*(uint *)(iVar4 + 0xc) < uVar2) {
    iVar5 = (int)param_2;
    if (*(int *)(iVar5 + -8) != 0) {
      *(undefined4 *)(*(int *)(iVar5 + -8) + 4) = *(undefined4 *)(iVar5 + -4);
    }
    if (*(undefined4 **)(iVar5 + -4) == (undefined4 *)0x0) {
      iVar1 = *(int *)(iVar4 + 0x14);
    }
    else {
      **(undefined4 **)(iVar5 + -4) = *(undefined4 *)(iVar5 + -8);
      iVar1 = *(int *)(iVar4 + 0x14);
    }
    if (iVar1 == iVar5 + -8) {
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar5 + -8);
    }
    (*DAT_0043da78)(iVar5 + -8,(int)param_3 + 8);
    uVar3 = 0;
  }
  else {
    FUN_002502d0(param_1,param_2);
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_00250260 @ 00250260 ====

int FUN_00250260(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((param_2 & 0xfffffffc) + *param_1);
  iVar1 = *piVar3;
  iVar2 = *(int *)((uint)*(byte *)(param_1 + 4) * 4 + iVar1);
  param_1[7] = param_1[7] + -1;
  *piVar3 = iVar2;
  if (((param_1[4] & 0x20000000U) != 0) && (iVar2 != 0)) {
    *(undefined4 *)((uint)*(byte *)((int)param_1 + 0x12) * 4 + iVar2) = 0;
  }
  return iVar1;
}


// ==== FUN_002502d0 @ 002502d0 ====

void FUN_002502d0(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)((param_3 & 0xfffffffc) + *param_1);
  iVar2 = *piVar4;
  param_1[7] = param_1[7] + 1;
  *piVar4 = param_2;
  *(int *)((uint)*(byte *)(param_1 + 4) * 4 + param_2) = iVar2;
  if ((param_1[4] & 0x10000000U) == 0) {
    uVar3 = param_1[4];
  }
  else {
    *(uint *)((uint)*(byte *)((int)param_1 + 0x11) * 4 + param_2) = param_3;
    uVar3 = param_1[4];
  }
  if ((uVar3 & 0x20000000) != 0) {
    bVar1 = *(byte *)((int)param_1 + 0x12);
    if (iVar2 != 0) {
      *(int *)((uint)bVar1 * 4 + iVar2) = param_2;
      bVar1 = *(byte *)((int)param_1 + 0x12);
    }
    *(undefined4 *)((uint)bVar1 * 4 + param_2) = 0;
  }
  return;
}


