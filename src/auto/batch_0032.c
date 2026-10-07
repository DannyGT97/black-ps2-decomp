// ==== FUN_002a5b60 @ 002a5b60 ====

undefined8 FUN_002a5b60(undefined8 param_1)

{
  *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) & 0xfffdfffc;
  return param_1;
}


// ==== FUN_002a5b98 @ 002a5b98 ====

undefined4 FUN_002a5b98(code *param_1)

{
  if (param_1 == (code *)0x0) {
    param_1 = FUN_002a5640;
  }
  *(code **)(&DAT_00449440 + iGpffff8db8) = param_1;
  return 1;
}


// ==== FUN_002a5bc8 @ 002a5bc8 ====

undefined8 FUN_002a5bc8(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  iGpffff8db8 = param_2;
  lVar1 = FUN_002a6010(0x40,uGpffff86ec,0x10,uGpffff86f0,0x449398,0x4000d);
  *(int *)((int)&DAT_00449438 + iGpffff8db8) = (int)lVar1;
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    *(undefined4 *)(&DAT_0044943c + iGpffff8db8) = 0x20000;
    *(code **)(&DAT_00449440 + iGpffff8db8) = FUN_002a5640;
    uStack_30 = DAT_00402e48;
    uStack_28 = DAT_00402e50;
    FUN_002a5a90(&uStack_30);
    iGpffff8dbc = iGpffff8dbc + 1;
  }
  return param_1;
}


// ==== FUN_002a5c80 @ 002a5c80 ====

undefined8 FUN_002a5c80(undefined8 param_1)

{
  if (*(int *)((int)&DAT_00449438 + iGpffff8db8) != 0) {
    FUN_002a65f0();
    *(undefined4 *)((int)&DAT_00449438 + iGpffff8db8) = 0;
  }
  iGpffff8dbc = iGpffff8dbc + -1;
  return param_1;
}


// ==== FUN_002a5ce8 @ 002a5ce8 ====

long FUN_002a5ce8(int param_1,uint param_2,long param_3,ulong param_4)

{
  bool bVar1;
  code *pcVar2;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar3;
  
  bVar1 = iGpffff86f4 != 0;
  uVar10 = (uint)bVar1;
  lVar4 = 0x10;
  if (param_3 != 0) {
    lVar4 = param_3;
  }
  pcVar2 = DAT_00449550;
  iVar13 = iGpffff86fc;
  if (iGpffff86fc == 0) {
    pcVar2 = DAT_00449540;
    iVar13 = 0x24;
  }
  lVar3 = (*pcVar2)(iVar13,param_4 & 0xff0000);
  if (lVar3 == 0) {
    return 0;
  }
  uVar14 = (uint)lVar4;
  uVar8 = param_1 + -1 + uVar14 & -uVar14;
  uVar12 = param_2 + 7 >> 3;
  puVar9 = (uint *)lVar3;
  puVar7 = puVar9 + 4;
  puVar9[6] = 2;
  *puVar9 = uVar8;
  puVar9[1] = param_2;
  puVar9[3] = uVar14;
  puVar9[2] = uVar12;
  puVar9[4] = (uint)puVar7;
  puVar9[5] = (uint)puVar7;
  if (uVar10 == 0) {
LAB_002a5fbc:
    puVar9[8] = (uint)&puGpffff8dc0;
    puVar9[7] = (uint)puGpffff8dc0;
    puGpffff8dc0[1] = (uint)(puVar9 + 7);
    puGpffff8dc0 = puVar9 + 7;
  }
  else {
    uVar11 = (uint)bVar1;
    uVar5 = -uVar11 & 3;
    iVar13 = uVar12 + param_2 * uVar8 + 8 + uVar14;
    if (uVar5 == 0) goto LAB_002a5ec4;
    if (uVar5 < 3) {
      if (uVar5 < 2) {
        lVar4 = (*DAT_00449540)(iVar13 + -1,param_4);
        puVar6 = (uint *)lVar4;
        if (lVar4 != 0) {
          uVar10 = puVar9[4];
          puVar6[1] = (uint)puVar7;
          *(uint **)(uVar10 + 4) = puVar6;
          *puVar6 = uVar10;
          uVar10 = uVar11 - 1;
          puVar9[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar12);
          goto LAB_002a5e40;
        }
      }
      else {
LAB_002a5e40:
        lVar4 = (*DAT_00449540)(iVar13 + -1,param_4);
        puVar6 = (uint *)lVar4;
        if (lVar4 != 0) {
          uVar8 = puVar9[4];
          puVar6[1] = (uint)puVar7;
          *(uint **)(uVar8 + 4) = puVar6;
          *puVar6 = uVar8;
          uVar10 = uVar10 - 1;
          puVar9[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar12);
          goto LAB_002a5e80;
        }
      }
    }
    else {
LAB_002a5e80:
      lVar4 = (*DAT_00449540)(iVar13 + -1,param_4);
      puVar6 = (uint *)lVar4;
      if (lVar4 != 0) {
        uVar8 = puVar9[4];
        puVar6[1] = (uint)puVar7;
        *(uint **)(uVar8 + 4) = puVar6;
        *puVar6 = uVar8;
        uVar10 = uVar10 - 1;
        while( true ) {
          puVar9[4] = (uint)lVar4;
          memset(puVar6 + 2,0,uVar12);
          if (uVar10 == 0) break;
LAB_002a5ec4:
          lVar4 = (*DAT_00449540)(iVar13 + -1,param_4);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a5d7c;
          uVar8 = puVar9[4];
          puVar6[1] = (uint)puVar7;
          *(uint **)(uVar8 + 4) = puVar6;
          *puVar6 = uVar8;
          puVar9[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar12);
          lVar4 = (*DAT_00449540)(iVar13 + -1,param_4);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a5d7c;
          uVar8 = puVar9[4];
          puVar6[1] = (uint)puVar7;
          *(uint **)(uVar8 + 4) = puVar6;
          *puVar6 = uVar8;
          puVar9[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar12);
          lVar4 = (*DAT_00449540)(iVar13 + -1,param_4);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a5d7c;
          uVar8 = puVar9[4];
          puVar6[1] = (uint)puVar7;
          *(uint **)(uVar8 + 4) = puVar6;
          *puVar6 = uVar8;
          puVar9[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar12);
          lVar4 = (*DAT_00449540)(iVar13 + -1,param_4);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a5d7c;
          uVar8 = puVar9[4];
          puVar6[1] = (uint)puVar7;
          *(uint **)(uVar8 + 4) = puVar6;
          *puVar6 = uVar8;
          uVar10 = uVar10 - 4;
        }
        goto LAB_002a5fbc;
      }
    }
LAB_002a5d7c:
    FUN_002a6c08(lVar3);
    lVar3 = 0;
  }
  return lVar3;
}


// ==== FUN_002a6010 @ 002a6010 ====

long FUN_002a6010(int param_1,uint param_2,long param_3,int param_4,long param_5,ulong param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar8 = 0;
  if (iGpffff86f4 != 0) {
    iVar8 = param_4;
  }
  lVar4 = 0x10;
  if (param_3 != 0) {
    lVar4 = param_3;
  }
  if (param_5 == 0) {
    pcVar1 = DAT_00449550;
    iVar10 = iGpffff86fc;
    if (iGpffff86fc == 0) {
      pcVar1 = DAT_00449540;
      iVar10 = 0x24;
    }
    param_5 = (*pcVar1)(iVar10,param_6 & 0xff0000);
    uVar2 = 2;
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = 3;
  }
  puVar7 = (uint *)param_5;
  puVar7[6] = uVar2;
  uVar11 = (uint)lVar4;
  uVar2 = param_1 + -1 + uVar11 & -uVar11;
  uVar9 = param_2 + 7 >> 3;
  puVar3 = puVar7 + 4;
  *puVar7 = uVar2;
  puVar7[1] = param_2;
  puVar7[3] = uVar11;
  puVar7[2] = uVar9;
  puVar7[4] = (uint)puVar3;
  puVar7[5] = (uint)puVar3;
  if (iVar8 == 0) {
LAB_002a62ec:
    puVar7[8] = (uint)&puGpffff8dc0;
    puVar7[7] = (uint)puGpffff8dc0;
    puGpffff8dc0[1] = (uint)(puVar7 + 7);
    puGpffff8dc0 = puVar7 + 7;
  }
  else {
    uVar5 = -iVar8 & 3;
    iVar10 = uVar9 + param_2 * uVar2 + 8 + uVar11;
    if (uVar5 == 0) goto LAB_002a61f4;
    if (uVar5 < 3) {
      if (uVar5 < 2) {
        lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
        puVar6 = (uint *)lVar4;
        if (lVar4 != 0) {
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          iVar8 = iVar8 + -1;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          goto LAB_002a6174;
        }
      }
      else {
LAB_002a6174:
        lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
        puVar6 = (uint *)lVar4;
        if (lVar4 != 0) {
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          iVar8 = iVar8 + -1;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          goto LAB_002a61b4;
        }
      }
    }
    else {
LAB_002a61b4:
      lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
      puVar6 = (uint *)lVar4;
      if (lVar4 != 0) {
        uVar2 = puVar7[4];
        puVar6[1] = (uint)puVar3;
        *(uint **)(uVar2 + 4) = puVar6;
        *puVar6 = uVar2;
        iVar8 = iVar8 + -1;
        while( true ) {
          puVar7[4] = (uint)lVar4;
          memset(puVar6 + 2,0,uVar9);
          if (iVar8 == 0) break;
LAB_002a61f4:
          lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a60ac;
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a60ac;
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a60ac;
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a60ac;
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          iVar8 = iVar8 + -4;
        }
        goto LAB_002a62ec;
      }
    }
LAB_002a60ac:
    FUN_002a6c08(param_5);
    param_5 = 0;
  }
  return param_5;
}


// ==== FUN_002a6340 @ 002a6340 ====

uint FUN_002a6340(int *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  int *piVar15;
  
  uVar5 = 0;
  piVar15 = (int *)param_1[4];
  uVar1 = param_1[2];
  if (piVar15 != param_1 + 4) {
    do {
      pbVar13 = (byte *)(piVar15 + 2);
      iVar10 = param_1[1];
      uVar14 = 0;
      if (uVar1 != 0) {
        iVar8 = 0;
        do {
          uVar12 = (uint)*pbVar13;
          if (uVar12 == 0xff) {
            iVar10 = iVar10 + -8;
          }
          else {
            uVar6 = 0;
            if (iVar10 != 0) {
              uVar3 = -iVar10 & 3;
              uVar7 = uVar6;
              iVar11 = iVar10;
              if (uVar3 == 0) goto LAB_002a6434;
              if (uVar3 < 3) {
                if (uVar3 < 2) {
                  bVar9 = 0x80;
                  if ((*pbVar13 & 0x80) != 0) {
                    uVar6 = 1;
                    iVar10 = iVar10 + -1;
                    goto LAB_002a63e0;
                  }
                  bVar2 = *pbVar13;
                }
                else {
LAB_002a63e0:
                  bVar9 = (byte)(0x80 >> uVar6);
                  if ((uVar12 & 0x80 >> uVar6 & 0xffU) != 0) {
                    uVar6 = uVar6 + 1;
                    iVar10 = iVar10 + -1;
                    if (7 < uVar6) goto LAB_002a6500;
                    goto LAB_002a6404;
                  }
                  bVar2 = *pbVar13;
                }
              }
              else {
LAB_002a6404:
                bVar9 = (byte)(0x80 >> uVar6);
                if ((uVar12 & 0x80 >> uVar6 & 0xffU) != 0) {
                  uVar7 = uVar6 + 1;
                  iVar10 = iVar10 + -1;
                  uVar6 = uVar7;
                  if (uVar7 < 8) {
                    while (iVar11 = iVar10, iVar10 != 0) {
LAB_002a6434:
                      bVar9 = (byte)(0x80 >> uVar6);
                      if ((uVar12 & 0x80 >> uVar6 & 0xffU) == 0) {
                        bVar2 = *pbVar13;
                        uVar6 = uVar7;
                        iVar10 = iVar11;
                        goto LAB_002a64d4;
                      }
                      uVar6 = uVar7 + 1;
                      iVar10 = iVar11 + -1;
                      if (7 < uVar6) break;
                      uVar3 = 0x80 >> (uVar6 & 0x1f);
                      bVar9 = (byte)uVar3;
                      if ((uVar12 & uVar3 & 0xff) == 0) {
                        bVar2 = *pbVar13;
                        goto LAB_002a64d4;
                      }
                      uVar6 = uVar7 + 2;
                      iVar10 = iVar11 + -2;
                      if (7 < uVar6) break;
                      uVar3 = 0x80 >> (uVar6 & 0x1f);
                      bVar9 = (byte)uVar3;
                      if ((uVar12 & uVar3 & 0xff) == 0) {
                        bVar2 = *pbVar13;
                        goto LAB_002a64d4;
                      }
                      uVar6 = uVar7 + 3;
                      iVar10 = iVar11 + -3;
                      if (7 < uVar6) break;
                      uVar3 = 0x80 >> (uVar6 & 0x1f);
                      bVar9 = (byte)uVar3;
                      if ((uVar12 & uVar3 & 0xff) == 0) {
                        bVar2 = *pbVar13;
                        goto LAB_002a64d4;
                      }
                      uVar7 = uVar7 + 4;
                      iVar10 = iVar11 + -4;
                      if (7 < uVar7) break;
                      uVar6 = uVar7 & 0x1f;
                    }
                  }
                  goto LAB_002a6500;
                }
                bVar2 = *pbVar13;
              }
LAB_002a64d4:
              *pbVar13 = bVar9 | bVar2;
              uVar5 = ((int)piVar15 + param_1[3] + uVar1 + 7 & -param_1[3]) +
                      (iVar8 + uVar6) * *param_1;
            }
          }
LAB_002a6500:
          if (uVar5 != 0) {
            piVar15 = (int *)*piVar15;
            goto LAB_002a6520;
          }
          uVar14 = uVar14 + 1;
          iVar8 = iVar8 + 8;
          pbVar13 = pbVar13 + 1;
        } while (uVar14 < uVar1);
      }
      piVar15 = (int *)*piVar15;
LAB_002a6520:
    } while ((piVar15 != param_1 + 4) && (uVar5 == 0));
  }
  if (uVar5 == 0) {
    lVar4 = (*DAT_00449540)(uVar1 + param_1[1] * *param_1 + param_1[3] + 7,param_2);
    piVar15 = (int *)lVar4;
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      memset(piVar15 + 2,0,uVar1);
      iVar10 = param_1[4];
      param_1[4] = (int)piVar15;
      *(int **)(iVar10 + 4) = piVar15;
      *(undefined1 *)(piVar15 + 2) = 0x80;
      piVar15[1] = (int)(param_1 + 4);
      *piVar15 = iVar10;
      uVar5 = (int)piVar15 + param_1[3] + uVar1 + 7 & -param_1[3];
    }
  }
  return uVar5;
}


// ==== FUN_002a65e0 @ 002a65e0 ====

undefined4 * FUN_002a65e0(void)

{
  return &DAT_00449540;
}


// ==== FUN_002a65f0 @ 002a65f0 ====

undefined4 FUN_002a65f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x1c);
  *piVar3 = iVar1;
  *(int **)(iVar1 + 4) = piVar3;
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)(param_1 + 0x10)) {
    iVar1 = *piVar3;
    while( true ) {
      piVar2 = (int *)piVar3[1];
      *(int **)(iVar1 + 4) = piVar2;
      *piVar2 = iVar1;
      (*DAT_00449544)(piVar3);
      piVar3 = *(int **)(param_1 + 0x10);
      if (piVar3 == (int *)(param_1 + 0x10)) break;
      iVar1 = *piVar3;
    }
  }
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    if ((iGpffff86fc == param_1) || (iGpffff86fc == 0)) {
      (*DAT_00449544)(param_1);
    }
    else {
      (*DAT_00449554)(iGpffff86fc,param_1);
    }
  }
  return 1;
}


// ==== FUN_002a6868 @ 002a6868 ====

undefined8 FUN_002a6868(undefined8 param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  piVar8 = (int *)param_1;
  uVar1 = piVar8[2];
  piVar3 = (int *)piVar8[4];
  while( true ) {
    if (piVar3 == piVar8 + 4) {
      return param_1;
    }
    lVar6 = (*DAT_00449540)(uVar1,0x10000);
    iVar4 = (int)lVar6;
    if (lVar6 == 0) break;
    memcpy(iVar4,piVar3 + 2,uVar1);
    piVar2 = (int *)*piVar3;
    if (uVar1 != 0) {
      iVar5 = uVar1 + 8;
      uVar11 = 0;
      do {
        uVar7 = uVar11 + 1;
        uVar10 = (uint)*(byte *)(iVar4 + uVar11);
        if (uVar10 != 0) {
          iVar9 = uVar11 << 3;
          uVar11 = 0;
          do {
            if ((uVar10 & 0x80 >> (uVar11 & 0x1f) & 0xffU) != 0) {
              (*param_2)(((int)piVar3 + piVar8[3] + iVar5 + -1 & -piVar8[3]) + iVar9 * *piVar8,
                         param_3);
            }
            if ((uVar10 & 0x80 >> (uVar11 + 1 & 0x1f) & 0xffU) != 0) {
              (*param_2)(((int)piVar3 + piVar8[3] + iVar5 + -1 & -piVar8[3]) + (iVar9 + 1) * *piVar8
                         ,param_3);
            }
            if ((uVar10 & 0x80 >> (uVar11 + 2 & 0x1f) & 0xffU) != 0) {
              (*param_2)(((int)piVar3 + piVar8[3] + iVar5 + -1 & -piVar8[3]) + (iVar9 + 2) * *piVar8
                         ,param_3);
            }
            if ((uVar10 & 0x80 >> (uVar11 + 3 & 0x1f) & 0xffU) != 0) {
              (*param_2)(((int)piVar3 + piVar8[3] + iVar5 + -1 & -piVar8[3]) + (iVar9 + 3) * *piVar8
                         ,param_3);
            }
            uVar11 = uVar11 + 4;
            iVar9 = iVar9 + 4;
          } while (uVar11 < 8);
        }
        uVar11 = uVar7;
      } while (uVar7 < uVar1);
    }
    (*DAT_00449544)(iVar4);
    piVar3 = piVar2;
  }
  return 0;
}


// ==== FUN_002a6ab8 @ 002a6ab8 ====

void FUN_002a6ab8(void)

{
  while ((undefined1 **)puGpffff8dc0 != &puGpffff8dc0) {
    FUN_002a65f0(puGpffff8dc0 + -0x1c);
  }
  FUN_002a65f0(uGpffff86fc);
  uGpffff86fc = 0;
  uGpffff86f8 = 0;
  return;
}


// ==== FUN_002a6b08 @ 002a6b08 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002a6b08(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  
  puGpffff8dc0 = (undefined1 *)&puGpffff8dc0;
  uGpffff86f8 = 1;
  puGpffff8dc4 = puGpffff8dc0;
  lVar4 = FUN_002a6cc8(0x24,0x10,0x10,0,0x4493c0,0x40000);
  iGpffff86fc = (int)lVar4;
  if (lVar4 != 0) {
    iVar1 = *(int *)(iGpffff86fc + 0x1c);
    piVar2 = *(int **)(iGpffff86fc + 0x20);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  else {
    uGpffff86f8 = 0;
  }
  uVar3 = 0;
  if (lVar4 != 0) {
    if (param_1 == 0) {
      _DAT_00449540 = 0x35e828002a6ff0;
      _DAT_00449548 = 0x2a7030002a7010;
      uVar3 = 1;
    }
    else {
      _DAT_00449540 = *(undefined8 *)param_1;
      _DAT_00449548 = ((undefined8 *)param_1)[1];
      uVar3 = 1;
    }
  }
  return uVar3;
}


// ==== FUN_002a6c00 @ 002a6c00 ====

void FUN_002a6c00(undefined4 param_1)

{
  uGpffff86f4 = param_1;
  return;
}


// ==== FUN_002a6c08 @ 002a6c08 ====

void FUN_002a6c08(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)(param_1 + 0x10)) {
    iVar1 = *piVar3;
    while( true ) {
      piVar2 = (int *)piVar3[1];
      *(int **)(iVar1 + 4) = piVar2;
      *piVar2 = iVar1;
      (*DAT_00449544)(piVar3);
      piVar3 = *(int **)(param_1 + 0x10);
      if (piVar3 == (int *)(param_1 + 0x10)) break;
      iVar1 = *piVar3;
    }
  }
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    if ((iGpffff86fc == param_1) || (iGpffff86fc == 0)) {
      (*DAT_00449544)(param_1);
    }
    else {
      (*DAT_00449554)(iGpffff86fc,param_1);
    }
  }
  return;
}


// ==== FUN_002a6cc8 @ 002a6cc8 ====

long FUN_002a6cc8(int param_1,uint param_2,long param_3,int param_4,long param_5,ulong param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar8 = 0;
  if (iGpffff86f4 != 0) {
    iVar8 = param_4;
  }
  lVar4 = 0x10;
  if (param_3 != 0) {
    lVar4 = param_3;
  }
  if (param_5 == 0) {
    pcVar1 = DAT_00449550;
    iVar10 = iGpffff86fc;
    if (iGpffff86fc == 0) {
      pcVar1 = DAT_00449540;
      iVar10 = 0x24;
    }
    param_5 = (*pcVar1)(iVar10,param_6 & 0xff0000);
    if (param_5 == 0) {
      return 0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  puVar7 = (uint *)param_5;
  puVar7[6] = uVar2;
  uVar11 = (uint)lVar4;
  uVar2 = param_1 + -1 + uVar11 & -uVar11;
  uVar9 = param_2 + 7 >> 3;
  puVar3 = puVar7 + 4;
  *puVar7 = uVar2;
  puVar7[1] = param_2;
  puVar7[3] = uVar11;
  puVar7[2] = uVar9;
  puVar7[4] = (uint)puVar3;
  puVar7[5] = (uint)puVar3;
  if (iVar8 == 0) {
LAB_002a6fa4:
    puVar7[8] = (uint)&puGpffff8dc0;
    puVar7[7] = (uint)puGpffff8dc0;
    puGpffff8dc0[1] = (uint)(puVar7 + 7);
    puGpffff8dc0 = puVar7 + 7;
  }
  else {
    uVar5 = -iVar8 & 3;
    iVar10 = uVar9 + param_2 * uVar2 + 8 + uVar11;
    if (uVar5 == 0) goto LAB_002a6eac;
    if (uVar5 < 3) {
      if (uVar5 < 2) {
        lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
        puVar6 = (uint *)lVar4;
        if (lVar4 != 0) {
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          iVar8 = iVar8 + -1;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          goto LAB_002a6e2c;
        }
      }
      else {
LAB_002a6e2c:
        lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
        puVar6 = (uint *)lVar4;
        if (lVar4 != 0) {
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          iVar8 = iVar8 + -1;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          goto LAB_002a6e6c;
        }
      }
    }
    else {
LAB_002a6e6c:
      lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
      puVar6 = (uint *)lVar4;
      if (lVar4 != 0) {
        uVar2 = puVar7[4];
        puVar6[1] = (uint)puVar3;
        *(uint **)(uVar2 + 4) = puVar6;
        *puVar6 = uVar2;
        iVar8 = iVar8 + -1;
        while( true ) {
          puVar7[4] = (uint)lVar4;
          memset(puVar6 + 2,0,uVar9);
          if (iVar8 == 0) break;
LAB_002a6eac:
          lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a6d64;
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a6d64;
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a6d64;
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          puVar7[4] = (uint)puVar6;
          memset(puVar6 + 2,0,uVar9);
          lVar4 = (*DAT_00449540)(iVar10 + -1,param_6);
          puVar6 = (uint *)lVar4;
          if (lVar4 == 0) goto LAB_002a6d64;
          uVar2 = puVar7[4];
          puVar6[1] = (uint)puVar3;
          *(uint **)(uVar2 + 4) = puVar6;
          *puVar6 = uVar2;
          iVar8 = iVar8 + -4;
        }
        goto LAB_002a6fa4;
      }
    }
LAB_002a6d64:
    FUN_002a6c08(param_5);
    param_5 = 0;
  }
  return param_5;
}


// ==== FUN_002a6ff0 @ 002a6ff0 ====

void FUN_002a6ff0(void)

{
  FUN_0035e7d8();
  return;
}


// ==== FUN_002a7010 @ 002a7010 ====

void FUN_002a7010(void)

{
  FUN_0035f660();
  return;
}


// ==== FUN_002a7030 @ 002a7030 ====

void FUN_002a7030(void)

{
  FUN_0035e778();
  return;
}


// ==== FUN_002a7050 @ 002a7050 ====

uint FUN_002a7050(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uVar2 = *param_1;
  if (uVar2 == 3) {
    uVar2 = param_1[3];
    uVar1 = param_1[4];
    if (uVar1 - uVar2 < param_3) {
      uStack_70 = 1;
      uStack_6c = FUN_002a5548(5);
      FUN_002a55d8(&uStack_70);
      param_3 = uVar1 - uVar2;
    }
    memcpy(param_2,param_1[5] + param_1[3],param_3);
    param_1[3] = param_1[3] + param_3;
  }
  else {
    if (uVar2 < 4) {
      if (uVar2 != 0) {
        uVar2 = param_1[3];
        uVar1 = FUN_0032a750(param_2,1,param_3,uVar2);
        if (uVar1 == param_3) {
          return uVar1;
        }
        lVar3 = FUN_0032a8c8(uVar2);
        if (lVar3 != 0) {
          uStack_90 = 1;
          uStack_8c = FUN_002a5548(5);
          FUN_002a55d8(&uStack_90);
          return uVar1;
        }
        uStack_80 = 1;
        uStack_7c = FUN_002a5548(0xffffffff8000001a);
        FUN_002a55d8(&uStack_80);
        return uVar1;
      }
    }
    else if (uVar2 == 4) {
      uVar2 = (*(code *)param_1[4])(param_1[7],param_2,param_3);
      return uVar2;
    }
    uStack_60 = 1;
    uStack_5c = FUN_002a5548(0xe);
    FUN_002a55d8(&uStack_60);
    param_3 = 0;
  }
  return param_3;
}


// ==== FUN_002a71e0 @ 002a71e0 ====

undefined8 FUN_002a71e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  puVar4 = &uStack_a0;
  puVar6 = (uint *)param_1;
  uVar2 = *puVar6;
  if (uVar2 == 3) {
    puVar5 = puVar6 + 3;
    if (puVar6[5] == 0) {
      lVar3 = (*DAT_00449540)(0x200,0x30404);
      puVar6[5] = (uint)lVar3;
      if (lVar3 == 0) {
        uStack_90 = 1;
        uStack_8c = FUN_002a5548(0xffffffff80000013,0x200);
        puVar4 = &uStack_90;
        goto LAB_002a73ac;
      }
      puVar6[4] = 0x200;
      uVar2 = puVar6[4];
    }
    else {
      uVar2 = puVar6[4];
    }
    if (uVar2 - *puVar5 < param_3) {
      uVar1 = param_3 + uVar2;
      if (param_3 < 0x200) {
        uVar1 = uVar2 + 0x200;
      }
      lVar3 = (*DAT_00449548)(puVar6[5],uVar1,0x1030404);
      if (lVar3 == 0) {
        uStack_80 = 1;
        uStack_7c = FUN_002a5548(0xffffffff80000013,uVar1 - puVar6[4]);
        puVar4 = &uStack_80;
        goto LAB_002a73ac;
      }
      puVar6[5] = (uint)lVar3;
      puVar6[4] = uVar1;
    }
    memcpy(puVar6[5] + *puVar5,param_2,param_3);
    *puVar5 = *puVar5 + param_3;
    return param_1;
  }
  if (uVar2 < 4) {
    if (uVar2 != 0) {
      uVar2 = FUN_0032a7a0(param_2,1,param_3,puVar6[3]);
      if (uVar2 == param_3) {
        return param_1;
      }
      uStack_a0 = 1;
      uStack_9c = FUN_002a5548(0xffffffff8000001c);
      goto LAB_002a73ac;
    }
  }
  else if (uVar2 == 4) {
    lVar3 = (*(code *)puVar6[5])(puVar6[7],param_2,param_3);
    if (lVar3 != 0) {
      return param_1;
    }
    return 0;
  }
  uStack_70 = 1;
  uStack_6c = FUN_002a5548(0xe);
  puVar4 = &uStack_70;
LAB_002a73ac:
  FUN_002a55d8(puVar4);
  return 0;
}


// ==== FUN_002a73d8 @ 002a73d8 ====

undefined8 FUN_002a73d8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 == 0) {
    return param_1;
  }
  puVar4 = (uint *)param_1;
  uVar2 = *puVar4;
  if (uVar2 == 3) {
    uVar2 = puVar4[3] + (int)param_2;
    if (uVar2 <= puVar4[4]) {
      puVar4[3] = uVar2;
      return param_1;
    }
    puVar4[3] = puVar4[4];
    uStack_50 = 1;
    uStack_4c = FUN_002a5548(5);
    puVar3 = &uStack_50;
  }
  else {
    if (uVar2 < 4) {
      if (uVar2 != 0) {
        uVar2 = puVar4[3];
        lVar1 = FUN_0032a7f0(uVar2,param_2 & 0xffffffff,1);
        if (lVar1 == 0) {
          return param_1;
        }
        lVar1 = FUN_0032a8c8(uVar2);
        if (lVar1 == 0) {
          return 0;
        }
        uStack_60 = 1;
        uStack_5c = FUN_002a5548(5);
        FUN_002a55d8(&uStack_60);
        return 0;
      }
    }
    else if (uVar2 == 4) {
      lVar1 = (*(code *)puVar4[6])(puVar4[7]);
      if (lVar1 == 0) {
        return 0;
      }
      return param_1;
    }
    uStack_40 = 1;
    uStack_3c = FUN_002a5548(0xe);
    puVar3 = &uStack_40;
  }
  FUN_002a55d8(puVar3);
  return 0;
}


// ==== FUN_002a7598 @ 002a7598 ====

undefined8 FUN_002a7598(undefined8 param_1)

{
  if (*(int *)((int)&DAT_00449438 + iGpffff8dc8) != 0) {
    FUN_002a65f0();
  }
  iGpffff8dcc = iGpffff8dcc + -1;
  return param_1;
}


// ==== FUN_002a75f0 @ 002a75f0 ====

float FUN_002a75f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fVar3 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  if (0.0 < fVar3) {
    fVar2 = 1.0 / fVar3;
    fVar1 = *param_2;
  }
  else {
    fVar1 = *param_2;
    fVar2 = fVar3;
  }
  *param_1 = fVar1 * fVar2;
  param_1[1] = param_2[1] * fVar2;
  param_1[2] = param_2[2] * fVar2;
  if (fVar3 <= 0.0) {
    uStack_30 = 1;
    uStack_2c = FUN_002a5548(0x19);
    FUN_002a55d8(&uStack_30);
  }
  return fVar3;
}


// ==== FUN_002a76c0 @ 002a76c0 ====

float FUN_002a76c0(float *param_1)

{
  return SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]);
}


// ==== FUN_002a76e0 @ 002a76e0 ====

float FUN_002a76e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fVar3 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
  if (0.0 < fVar3) {
    fVar2 = 1.0 / fVar3;
    fVar1 = *param_2;
  }
  else {
    fVar1 = *param_2;
    fVar2 = fVar3;
  }
  *param_1 = fVar1 * fVar2;
  param_1[1] = param_2[1] * fVar2;
  if (fVar3 <= 0.0) {
    uStack_30 = 1;
    uStack_2c = FUN_002a5548(0x19);
    FUN_002a55d8(&uStack_30);
  }
  return fVar3;
}


// ==== FUN_002a7798 @ 002a7798 ====

undefined8 FUN_002a7798(undefined8 param_1)

{
  (**(code **)(&DAT_00449444 + iGpffff8dd0))();
  return param_1;
}


// ==== FUN_002a77e8 @ 002a77e8 ====

float FUN_002a77e8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    fVar2 = *param_2;
  }
  else {
    fVar2 = *param_2;
  }
  *param_1 = fVar2 * fVar1;
  param_1[1] = param_2[1] * fVar1;
  param_1[2] = param_2[2] * fVar1;
  return fVar1;
}


// ==== FUN_002a78d8 @ 002a78d8 ====

undefined4
FUN_002a78d8(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  if (param_1 == (undefined1 *)0x0) {
    param_1 = &LAB_002a7b18;
  }
  *(undefined1 **)(&DAT_00449440 + iGpffff8dd0) = param_1;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &LAB_002a7930;
  }
  *(undefined1 **)(&DAT_00449444 + iGpffff8dd0) = param_2;
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &LAB_002a7d50;
  }
  *(undefined1 **)((int)&DAT_00449448 + iGpffff8dd0) = param_3;
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &LAB_002a7bb0;
  }
  *(undefined1 **)((int)&DAT_0044944c + iGpffff8dd0) = param_4;
  return 1;
}


// ==== FUN_002a7dd0 @ 002a7dd0 ====

void FUN_002a7dd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  
  pfVar5 = (float *)(param_1 + 0x124);
  iVar1 = *(int *)(param_1 + 4);
  fVar10 = -*(float *)(param_1 + 0x78);
  pfVar4 = (float *)(param_1 + 0x94);
  fVar17 = *(float *)(param_1 + 0x7c);
  fVar9 = *(float *)(iVar1 + 0x50) * fVar10 + *(float *)(iVar1 + 0x60) * fVar17;
  fVar14 = *(float *)(iVar1 + 0x54) * fVar10 + *(float *)(iVar1 + 100) * fVar17;
  fVar12 = *(float *)(iVar1 + 0x58) * fVar10 + *(float *)(iVar1 + 0x68) * fVar17;
  fVar17 = *(float *)(param_1 + 0x68);
  fVar20 = *(float *)(iVar1 + 0x50) * fVar17;
  fVar19 = *(float *)(iVar1 + 0x54) * fVar17;
  fVar17 = *(float *)(iVar1 + 0x58) * fVar17;
  fVar11 = *(float *)(param_1 + 0x6c);
  fVar16 = *(float *)(iVar1 + 0x60) * fVar11;
  fVar18 = *(float *)(iVar1 + 100) * fVar11;
  fVar11 = *(float *)(iVar1 + 0x68) * fVar11;
  fVar10 = *(float *)(iVar1 + 0x70) + fVar20 + fVar16;
  fVar13 = *(float *)(iVar1 + 0x74) + fVar19 + fVar18;
  fVar15 = *(float *)(iVar1 + 0x78) + fVar17 + fVar11;
  *(ulong *)(param_1 + 0x124) = CONCAT44(fVar13,fVar10);
  *(float *)(param_1 + 300) = fVar15;
  fVar10 = fVar10 - (fVar20 + fVar20);
  fVar13 = fVar13 - (fVar19 + fVar19);
  fVar15 = fVar15 - (fVar17 + fVar17);
  *(ulong *)(param_1 + 0x130) = CONCAT44(fVar13,fVar10);
  *(float *)(param_1 + 0x138) = fVar15;
  fVar10 = fVar10 - (fVar16 + fVar16);
  fVar13 = fVar13 - (fVar18 + fVar18);
  fVar15 = fVar15 - (fVar11 + fVar11);
  *(ulong *)(param_1 + 0x13c) = CONCAT44(fVar13,fVar10);
  *(float *)(param_1 + 0x144) = fVar15;
  *(ulong *)(param_1 + 0x148) = CONCAT44(fVar13 + fVar19 + fVar19,fVar10 + fVar20 + fVar20);
  *(float *)(param_1 + 0x150) = fVar15 + fVar17 + fVar17;
  iVar8 = 0x30;
  iVar7 = 0;
  iVar6 = 3;
  do {
    pfVar3 = (float *)((int)pfVar5 + iVar7);
    fVar15 = *pfVar3;
    fVar17 = pfVar3[1];
    fVar10 = pfVar3[2];
    fVar16 = fVar9 + *(float *)(iVar1 + 0x80);
    *pfVar3 = fVar16;
    fVar13 = fVar14 + *(float *)(iVar1 + 0x84);
    pfVar3[1] = fVar13;
    fVar11 = fVar12 + *(float *)(iVar1 + 0x88);
    pfVar3[2] = fVar11;
    *pfVar3 = fVar16 + (fVar15 - fVar9) * *(float *)(param_1 + 0x80);
    pfVar3[1] = fVar13 + (fVar17 - fVar14) * *(float *)(param_1 + 0x80);
    pfVar3[2] = fVar11 + (fVar10 - fVar12) * *(float *)(param_1 + 0x80);
    pfVar3 = (float *)((int)pfVar5 + iVar8);
    fVar13 = fVar9 + *(float *)(iVar1 + 0x80);
    *pfVar3 = fVar13;
    fVar11 = fVar14 + *(float *)(iVar1 + 0x84);
    pfVar3[1] = fVar11;
    fVar16 = fVar12 + *(float *)(iVar1 + 0x88);
    pfVar3[2] = fVar16;
    *pfVar3 = fVar13 + (fVar15 - fVar9) * *(float *)(param_1 + 0x84);
    pfVar3[1] = fVar11 + (fVar17 - fVar14) * *(float *)(param_1 + 0x84);
    pfVar3[2] = fVar16 + (fVar10 - fVar12) * *(float *)(param_1 + 0x84);
    iVar8 = iVar8 + 0xc;
    iVar6 = iVar6 + -1;
    iVar7 = iVar7 + 0xc;
  } while (-1 < iVar6);
  uVar2 = *(undefined4 *)(iVar1 + 0x78);
  *(undefined8 *)pfVar4 = *(undefined8 *)(iVar1 + 0x70);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  fVar10 = *(float *)(iVar1 + 0x70);
  fVar9 = *(float *)(iVar1 + 0x74);
  fVar17 = *(float *)(iVar1 + 0x78);
  *(char *)(param_1 + 0xa4) = (char)((int)*pfVar4 >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xa5) = (char)((int)*(undefined4 *)(param_1 + 0x98) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0xa0) =
       *(float *)(param_1 + 0x154) * fVar10 + *(float *)(param_1 + 0x158) * fVar9 +
       *(float *)(param_1 + 0x15c) * fVar17;
  *(char *)(param_1 + 0xa6) = (char)((int)*(undefined4 *)(param_1 + 0x9c) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0xa8) = -*pfVar4;
  *(float *)(param_1 + 0xac) = -*(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0xb0) = -*(float *)(param_1 + 0x9c);
  *(char *)(param_1 + 0xb8) = (char)((int)*(undefined4 *)(param_1 + 0xa8) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xb9) = (char)((int)*(undefined4 *)(param_1 + 0xac) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xba) = (char)((int)*(undefined4 *)(param_1 + 0xb0) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0xb4) =
       *pfVar5 * -*pfVar4 + *(float *)(param_1 + 0x128) * -*(float *)(param_1 + 0x98) +
       *(float *)(param_1 + 300) * -*(float *)(param_1 + 0x9c);
  fVar14 = *(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x160);
  fVar15 = *(float *)(param_1 + 0x134) - *(float *)(param_1 + 0x164);
  fVar12 = *(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x168);
  fVar9 = *(float *)(param_1 + 0x16c) - *(float *)(param_1 + 0x160);
  fVar13 = *(float *)(param_1 + 0x170) - *(float *)(param_1 + 0x164);
  fVar17 = *(float *)(param_1 + 0x174) - *(float *)(param_1 + 0x168);
  fVar11 = fVar14 * fVar13 - fVar15 * fVar9;
  fVar10 = fVar12 * fVar9 - fVar14 * fVar17;
  fVar9 = fVar15 * fVar17 - fVar12 * fVar13;
  *(float *)(param_1 + 0xc4) = fVar11;
  *(float *)(param_1 + 0xc0) = fVar10;
  *(float *)(param_1 + 0xbc) = fVar9;
  fVar9 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
  if (0.0 < fVar9) {
    fVar9 = 1.0 / fVar9;
    fVar10 = *(float *)(param_1 + 0xbc);
  }
  else {
    fVar10 = *(float *)(param_1 + 0xbc);
  }
  fVar17 = *(float *)(param_1 + 0xc0) * fVar9;
  fVar11 = *(float *)(param_1 + 0xc4) * fVar9;
  *(float *)(param_1 + 0xbc) = fVar10 * fVar9;
  *(float *)(param_1 + 0xc0) = fVar17;
  *(float *)(param_1 + 0xc4) = fVar11;
  *(char *)(param_1 + 0xcc) = (char)((int)*(undefined4 *)(param_1 + 0xbc) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xcd) = (char)((int)*(undefined4 *)(param_1 + 0xc0) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xce) = (char)((int)*(undefined4 *)(param_1 + 0xc4) >> 0x1f) + '\x01';
  *(float *)(param_1 + 200) =
       *(float *)(param_1 + 0x130) * fVar10 * fVar9 + *(float *)(param_1 + 0x134) * fVar17 +
       *(float *)(param_1 + 0x138) * fVar11;
  fVar17 = *(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x160);
  fVar11 = *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x164);
  fVar9 = *(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x168);
  fVar10 = fVar9 * fVar14 - fVar17 * fVar12;
  fVar17 = fVar17 * fVar15 - fVar11 * fVar14;
  fVar9 = fVar11 * fVar12 - fVar9 * fVar15;
  *(float *)(param_1 + 0xd4) = fVar10;
  *(float *)(param_1 + 0xd8) = fVar17;
  *(float *)(param_1 + 0xd0) = fVar9;
  fVar9 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar17 * fVar17);
  if (0.0 < fVar9) {
    fVar9 = 1.0 / fVar9;
    fVar10 = *(float *)(param_1 + 0xd0);
  }
  else {
    fVar10 = *(float *)(param_1 + 0xd0);
  }
  fVar17 = *(float *)(param_1 + 0xd4) * fVar9;
  fVar11 = *(float *)(param_1 + 0xd8) * fVar9;
  *(float *)(param_1 + 0xd0) = fVar10 * fVar9;
  *(float *)(param_1 + 0xd4) = fVar17;
  *(float *)(param_1 + 0xd8) = fVar11;
  *(char *)(param_1 + 0xe0) = (char)((int)*(undefined4 *)(param_1 + 0xd0) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xe1) = (char)((int)*(undefined4 *)(param_1 + 0xd4) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xe2) = (char)((int)*(undefined4 *)(param_1 + 0xd8) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0xdc) =
       *(float *)(param_1 + 0x130) * fVar10 * fVar9 + *(float *)(param_1 + 0x134) * fVar17 +
       *(float *)(param_1 + 0x138) * fVar11;
  fVar14 = *(float *)(param_1 + 0x148) - *(float *)(param_1 + 0x178);
  fVar15 = *(float *)(param_1 + 0x14c) - *(float *)(param_1 + 0x17c);
  fVar12 = *(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x180);
  fVar9 = *(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x178);
  fVar13 = *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x17c);
  fVar17 = *(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x180);
  fVar11 = fVar14 * fVar13 - fVar15 * fVar9;
  fVar10 = fVar12 * fVar9 - fVar14 * fVar17;
  fVar9 = fVar15 * fVar17 - fVar12 * fVar13;
  *(float *)(param_1 + 0xec) = fVar11;
  *(float *)(param_1 + 0xe8) = fVar10;
  *(float *)(param_1 + 0xe4) = fVar9;
  fVar9 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
  if (0.0 < fVar9) {
    fVar9 = 1.0 / fVar9;
    fVar10 = *(float *)(param_1 + 0xe4);
  }
  else {
    fVar10 = *(float *)(param_1 + 0xe4);
  }
  fVar17 = *(float *)(param_1 + 0xe8) * fVar9;
  fVar11 = *(float *)(param_1 + 0xec) * fVar9;
  *(float *)(param_1 + 0xe4) = fVar10 * fVar9;
  *(float *)(param_1 + 0xe8) = fVar17;
  *(float *)(param_1 + 0xec) = fVar11;
  *(char *)(param_1 + 0xf4) = (char)((int)*(undefined4 *)(param_1 + 0xe4) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xf5) = (char)((int)*(undefined4 *)(param_1 + 0xe8) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xf6) = (char)((int)*(undefined4 *)(param_1 + 0xec) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0xf0) =
       *(float *)(param_1 + 0x148) * fVar10 * fVar9 + *(float *)(param_1 + 0x14c) * fVar17 +
       *(float *)(param_1 + 0x150) * fVar11;
  fVar17 = *(float *)(param_1 + 0x16c) - *(float *)(param_1 + 0x178);
  fVar11 = *(float *)(param_1 + 0x170) - *(float *)(param_1 + 0x17c);
  fVar9 = *(float *)(param_1 + 0x174) - *(float *)(param_1 + 0x180);
  fVar10 = fVar9 * fVar14 - fVar17 * fVar12;
  fVar17 = fVar17 * fVar15 - fVar11 * fVar14;
  fVar9 = fVar11 * fVar12 - fVar9 * fVar15;
  *(float *)(param_1 + 0xfc) = fVar10;
  *(float *)(param_1 + 0x100) = fVar17;
  *(float *)(param_1 + 0xf8) = fVar9;
  fVar9 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar17 * fVar17);
  if (0.0 < fVar9) {
    fVar9 = 1.0 / fVar9;
    fVar10 = *(float *)(param_1 + 0xf8);
  }
  else {
    fVar10 = *(float *)(param_1 + 0xf8);
  }
  fVar17 = *(float *)(param_1 + 0xfc) * fVar9;
  fVar11 = *(float *)(param_1 + 0x100) * fVar9;
  *(float *)(param_1 + 0xf8) = fVar10 * fVar9;
  *(float *)(param_1 + 0xfc) = fVar17;
  *(float *)(param_1 + 0x100) = fVar11;
  *(char *)(param_1 + 0x10a) = (char)((int)*(undefined4 *)(param_1 + 0x100) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0x108) = (char)((int)*(undefined4 *)(param_1 + 0xf8) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0x109) = (char)((int)*(undefined4 *)(param_1 + 0xfc) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0x104) =
       *(float *)(param_1 + 0x148) * fVar10 * fVar9 + *(float *)(param_1 + 0x14c) * fVar17 +
       *(float *)(param_1 + 0x150) * fVar11;
  return;
}


// ==== FUN_002a8688 @ 002a8688 ====

undefined8 FUN_002a8688(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 4);
  fVar8 = *(float *)(iVar2 + 0x70) * -0.5;
  fVar9 = 0.5 - fVar8 * *(float *)(iVar2 + 0x78);
  fVar5 = *(float *)(iVar1 + 0x50) * fVar8 + *(float *)(iVar1 + 0x70) * fVar9;
  fVar3 = *(float *)(iVar1 + 0x54) * fVar8 + *(float *)(iVar1 + 0x74) * fVar9;
  fVar8 = *(float *)(iVar1 + 0x58) * fVar8 + *(float *)(iVar1 + 0x78) * fVar9;
  *(float *)(iVar2 + 0x20) = fVar5;
  *(float *)(iVar2 + 0x30) = fVar3;
  *(float *)(iVar2 + 0x40) = fVar8;
  fVar10 = *(float *)(iVar2 + 0x74) * -0.5;
  *(float *)(iVar2 + 0x50) =
       0.5 - (fVar9 + *(float *)(iVar1 + 0x80) * fVar5 + *(float *)(iVar1 + 0x84) * fVar3 +
                      *(float *)(iVar1 + 0x88) * fVar8);
  fVar11 = fVar10 * *(float *)(iVar2 + 0x7c) + 0.5;
  fVar6 = *(float *)(iVar1 + 0x60) * fVar10 + *(float *)(iVar1 + 0x70) * fVar11;
  fVar9 = *(float *)(iVar1 + 100) * fVar10 + *(float *)(iVar1 + 0x74) * fVar11;
  fVar8 = *(float *)(iVar1 + 0x68) * fVar10 + *(float *)(iVar1 + 0x78) * fVar11;
  *(float *)(iVar2 + 0x24) = fVar6;
  *(float *)(iVar2 + 0x34) = fVar9;
  *(float *)(iVar2 + 0x44) = fVar8;
  fVar10 = *(float *)(iVar1 + 0x80);
  fVar3 = *(float *)(iVar1 + 0x84);
  fVar5 = *(float *)(iVar1 + 0x70);
  fVar7 = *(float *)(iVar1 + 0x74);
  fVar4 = *(float *)(iVar1 + 0x88);
  *(float *)(iVar2 + 0x54) =
       0.5 - (fVar11 + *(float *)(iVar1 + 0x80) * fVar6 + *(float *)(iVar1 + 0x84) * fVar9 +
                       *(float *)(iVar1 + 0x88) * fVar8);
  *(float *)(iVar2 + 0x28) = fVar5;
  *(float *)(iVar2 + 0x38) = fVar7;
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar1 + 0x78);
  *(float *)(iVar2 + 0x58) = -(fVar10 * fVar5 + fVar3 * fVar7 + fVar4 * *(float *)(iVar1 + 0x78));
  FUN_002a5850(iVar2 + 0x20,0);
  return param_1;
}


// ==== FUN_002a8860 @ 002a8860 ====

void FUN_002a8860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *(float *)(param_1 + 0x80);
  fVar5 = *(float *)(param_1 + 0x68);
  fVar4 = *(float *)(param_1 + 0x84);
  fVar6 = *(float *)(param_1 + 0x6c);
  fVar9 = (1.0 - fVar3) * -*(float *)(param_1 + 0x78);
  *(float *)(param_1 + 0x150) = fVar3;
  *(float *)(param_1 + 0x144) = fVar3;
  iVar1 = *(int *)(param_1 + 4);
  fVar8 = -fVar5 + fVar9;
  *(float *)(param_1 + 0x138) = fVar3;
  fVar9 = fVar5 + fVar9;
  *(float *)(param_1 + 0x180) = fVar4;
  fVar10 = (1.0 - fVar4) * -*(float *)(param_1 + 0x78);
  *(float *)(param_1 + 300) = fVar3;
  *(float *)(param_1 + 0x174) = fVar4;
  *(float *)(param_1 + 0x168) = fVar4;
  fVar7 = -fVar5 + fVar10;
  *(float *)(param_1 + 0x15c) = fVar4;
  fVar5 = fVar5 + fVar10;
  *(float *)(param_1 + 0x124) = fVar9;
  fVar10 = (1.0 - fVar3) * *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 0x13c) = fVar8;
  *(float *)(param_1 + 0x148) = fVar9;
  *(float *)(param_1 + 0x130) = fVar8;
  fVar8 = -fVar6 + fVar10;
  *(float *)(param_1 + 0x178) = fVar5;
  fVar10 = fVar6 + fVar10;
  *(float *)(param_1 + 0x154) = fVar5;
  fVar3 = (1.0 - fVar4) * *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 0x16c) = fVar7;
  *(float *)(param_1 + 0x160) = fVar7;
  *(float *)(param_1 + 0x14c) = fVar8;
  fVar4 = fVar6 + fVar3;
  *(float *)(param_1 + 0x134) = fVar10;
  fVar3 = -fVar6 + fVar3;
  *(float *)(param_1 + 0x140) = fVar8;
  *(float *)(param_1 + 0x128) = fVar10;
  *(float *)(param_1 + 0x164) = fVar4;
  *(float *)(param_1 + 0x158) = fVar4;
  *(float *)(param_1 + 0x17c) = fVar3;
  *(float *)(param_1 + 0x170) = fVar3;
  FUN_002a7798(param_1 + 0x124,param_1 + 0x124,8,iVar1 + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0x78);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(iVar1 + 0x70);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(float *)(param_1 + 0xa0) =
       *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x94) +
       *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x98) +
       *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x9c);
  *(char *)(param_1 + 0xa5) = (char)((int)*(undefined4 *)(param_1 + 0x98) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xa6) = (char)((int)*(undefined4 *)(param_1 + 0x9c) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xa4) = (char)((int)*(undefined4 *)(param_1 + 0x94) >> 0x1f) + '\x01';
  fVar4 = -*(float *)(param_1 + 0x98);
  fVar3 = -*(float *)(param_1 + 0x9c);
  *(float *)(param_1 + 0xa8) = -*(float *)(param_1 + 0x94);
  *(float *)(param_1 + 0xac) = fVar4;
  *(float *)(param_1 + 0xb0) = fVar3;
  *(char *)(param_1 + 0xb8) = (char)((int)*(undefined4 *)(param_1 + 0xa8) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xb9) = (char)((int)*(undefined4 *)(param_1 + 0xac) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xba) = (char)((int)*(undefined4 *)(param_1 + 0xb0) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0xb4) =
       *(float *)(param_1 + 0x124) * -*(float *)(param_1 + 0x94) +
       *(float *)(param_1 + 0x128) * fVar4 + *(float *)(param_1 + 300) * fVar3;
  fVar7 = *(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x160);
  fVar9 = *(float *)(param_1 + 0x134) - *(float *)(param_1 + 0x164);
  fVar8 = *(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x168);
  fVar3 = *(float *)(param_1 + 0x16c) - *(float *)(param_1 + 0x160);
  fVar6 = *(float *)(param_1 + 0x170) - *(float *)(param_1 + 0x164);
  fVar10 = *(float *)(param_1 + 0x174) - *(float *)(param_1 + 0x168);
  fVar5 = fVar7 * fVar6 - fVar9 * fVar3;
  fVar4 = fVar8 * fVar3 - fVar7 * fVar10;
  fVar3 = fVar9 * fVar10 - fVar8 * fVar6;
  *(float *)(param_1 + 0xc4) = fVar5;
  *(float *)(param_1 + 0xc0) = fVar4;
  *(float *)(param_1 + 0xbc) = fVar3;
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
  }
  fVar10 = *(float *)(param_1 + 0xbc) * fVar3;
  fVar4 = *(float *)(param_1 + 0xc0) * fVar3;
  fVar3 = *(float *)(param_1 + 0xc4) * fVar3;
  *(float *)(param_1 + 0xbc) = fVar10;
  *(float *)(param_1 + 0xc0) = fVar4;
  *(float *)(param_1 + 0xc4) = fVar3;
  *(char *)(param_1 + 0xcc) = (char)((int)*(undefined4 *)(param_1 + 0xbc) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xcd) = (char)((int)*(undefined4 *)(param_1 + 0xc0) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xce) = (char)((int)*(undefined4 *)(param_1 + 0xc4) >> 0x1f) + '\x01';
  *(float *)(param_1 + 200) =
       *(float *)(param_1 + 0x130) * fVar10 + *(float *)(param_1 + 0x134) * fVar4 +
       *(float *)(param_1 + 0x138) * fVar3;
  fVar10 = *(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x160);
  fVar5 = *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x164);
  fVar3 = *(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x168);
  fVar4 = fVar3 * fVar7 - fVar10 * fVar8;
  fVar10 = fVar10 * fVar9 - fVar5 * fVar7;
  fVar3 = fVar5 * fVar8 - fVar3 * fVar9;
  *(float *)(param_1 + 0xd4) = fVar4;
  *(float *)(param_1 + 0xd8) = fVar10;
  *(float *)(param_1 + 0xd0) = fVar3;
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar10 * fVar10);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
  }
  fVar10 = *(float *)(param_1 + 0xd0) * fVar3;
  fVar4 = *(float *)(param_1 + 0xd4) * fVar3;
  fVar3 = *(float *)(param_1 + 0xd8) * fVar3;
  *(float *)(param_1 + 0xd0) = fVar10;
  *(float *)(param_1 + 0xd4) = fVar4;
  *(float *)(param_1 + 0xd8) = fVar3;
  *(char *)(param_1 + 0xe0) = (char)((int)*(undefined4 *)(param_1 + 0xd0) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xe1) = (char)((int)*(undefined4 *)(param_1 + 0xd4) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xe2) = (char)((int)*(undefined4 *)(param_1 + 0xd8) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0xdc) =
       *(float *)(param_1 + 0x130) * fVar10 + *(float *)(param_1 + 0x134) * fVar4 +
       *(float *)(param_1 + 0x138) * fVar3;
  *(float *)(param_1 + 0xe4) = -*(float *)(param_1 + 0xbc);
  *(float *)(param_1 + 0xe8) = -*(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 0xec) = -*(float *)(param_1 + 0xc4);
  *(char *)(param_1 + 0xf4) = (char)((int)*(undefined4 *)(param_1 + 0xe4) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xf5) = (char)((int)*(undefined4 *)(param_1 + 0xe8) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0xf6) = (char)((int)*(undefined4 *)(param_1 + 0xec) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0xf0) =
       *(float *)(param_1 + 0x148) * -*(float *)(param_1 + 0xbc) +
       *(float *)(param_1 + 0x14c) * -*(float *)(param_1 + 0xc0) +
       *(float *)(param_1 + 0x150) * -*(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0xf8) = -fVar10;
  *(float *)(param_1 + 0xfc) = -fVar4;
  *(float *)(param_1 + 0x100) = -fVar3;
  *(char *)(param_1 + 0x10a) = (char)((int)*(undefined4 *)(param_1 + 0x100) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0x108) = (char)((int)*(undefined4 *)(param_1 + 0xf8) >> 0x1f) + '\x01';
  *(char *)(param_1 + 0x109) = (char)((int)*(undefined4 *)(param_1 + 0xfc) >> 0x1f) + '\x01';
  *(float *)(param_1 + 0x104) =
       *(float *)(param_1 + 0x148) * -fVar10 + *(float *)(param_1 + 0x14c) * -fVar4 +
       *(float *)(param_1 + 0x150) * -fVar3;
  return;
}


// ==== FUN_002a8da0 @ 002a8da0 ====

undefined8 FUN_002a8da0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 4);
  fVar8 = *(float *)(iVar2 + 0x70) * -0.5;
  fVar9 = -(fVar8 * *(float *)(iVar2 + 0x78));
  fVar6 = *(float *)(iVar1 + 0x50) * fVar8 + *(float *)(iVar1 + 0x70) * fVar9;
  fVar3 = *(float *)(iVar1 + 0x54) * fVar8 + *(float *)(iVar1 + 0x74) * fVar9;
  fVar8 = *(float *)(iVar1 + 0x58) * fVar8 + *(float *)(iVar1 + 0x78) * fVar9;
  *(float *)(iVar2 + 0x20) = fVar6;
  *(float *)(iVar2 + 0x30) = fVar3;
  *(float *)(iVar2 + 0x40) = fVar8;
  fVar10 = *(float *)(iVar2 + 0x74) * -0.5;
  *(float *)(iVar2 + 0x50) =
       0.5 - (fVar9 + *(float *)(iVar1 + 0x80) * fVar6 + *(float *)(iVar1 + 0x84) * fVar3 +
                      *(float *)(iVar1 + 0x88) * fVar8);
  fVar11 = fVar10 * *(float *)(iVar2 + 0x7c);
  fVar6 = *(float *)(iVar1 + 0x60) * fVar10 + *(float *)(iVar1 + 0x70) * fVar11;
  fVar3 = *(float *)(iVar1 + 100) * fVar10 + *(float *)(iVar1 + 0x74) * fVar11;
  fVar10 = *(float *)(iVar1 + 0x68) * fVar10 + *(float *)(iVar1 + 0x78) * fVar11;
  *(float *)(iVar2 + 0x24) = fVar6;
  *(float *)(iVar2 + 0x34) = fVar3;
  *(float *)(iVar2 + 0x44) = fVar10;
  fVar7 = *(float *)(iVar1 + 0x80);
  fVar8 = *(float *)(iVar1 + 0x84);
  fVar4 = *(float *)(iVar1 + 0x70);
  fVar9 = *(float *)(iVar1 + 0x74);
  fVar5 = *(float *)(iVar1 + 0x88);
  *(float *)(iVar2 + 0x54) =
       0.5 - (fVar11 + *(float *)(iVar1 + 0x80) * fVar6 + *(float *)(iVar1 + 0x84) * fVar3 +
                       *(float *)(iVar1 + 0x88) * fVar10);
  *(float *)(iVar2 + 0x28) = fVar4;
  *(float *)(iVar2 + 0x38) = fVar9;
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar1 + 0x78);
  *(float *)(iVar2 + 0x58) = -(fVar7 * fVar4 + fVar8 * fVar9 + fVar5 * *(float *)(iVar1 + 0x78));
  FUN_002a5850(iVar2 + 0x20,0);
  return param_1;
}


// ==== FUN_002a8f78 @ 002a8f78 ====

long FUN_002a8f78(void)

{
  long lVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = (*DAT_00449550)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8dd8),0x30005);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)lVar1;
    puVar2[1] = 0;
    *puVar2 = 4;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(code **)(puVar2 + 0x10) = FUN_002a9518;
    *(undefined4 *)(puVar2 + 0x78) = 0;
    *(undefined4 *)(puVar2 + 0x80) = uGpffff801c;
    *(undefined4 *)(puVar2 + 0x84) = 0x41200000;
    *(undefined4 *)(puVar2 + 0x7c) = 0;
    *(code **)(puVar2 + 0x18) = FUN_002a95e0;
    *(code **)(puVar2 + 0x1c) = FUN_002a9588;
    *(undefined4 *)(puVar2 + 0x70) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x88) = 0x40a00000;
    *(undefined4 *)(puVar2 + 0x14) = 1;
    *(undefined4 *)(puVar2 + 0x6c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x68) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x74) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x60) = 0;
    *(undefined4 *)(puVar2 + 100) = 0;
    fVar5 = (DAT_00449454 - DAT_00449450) * fGpffff8020;
    fVar3 = DAT_00449450 + fVar5;
    fVar5 = DAT_00449454 - fVar5;
    fVar4 = (fVar5 - fVar3) / fGpffff8024;
    *(float *)(puVar2 + 0x8c) = fVar4;
    *(float *)(puVar2 + 0x90) = ((fVar5 + fVar3) - fVar4 * fGpffff8028) * 0.5;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    FUN_002cfdf8(0x3c31f8,lVar1);
  }
  return lVar1;
}


// ==== FUN_002a90c8 @ 002a90c8 ====

void FUN_002a90c8(int param_1)

{
  (**(code **)(param_1 + 0x18))();
  return;
}


// ==== FUN_002a90e8 @ 002a90e8 ====

void FUN_002a90e8(int param_1)

{
  (**(code **)(param_1 + 0x1c))();
  return;
}


// ==== FUN_002a9108 @ 002a9108 ====

undefined8 FUN_002a9108(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (*DAT_004494d4)();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_002a9140 @ 002a9140 ====

undefined8 FUN_002a9140(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_002ac6e8(*(undefined4 *)((int)param_1 + 0x60));
  if (lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_002a9178 @ 002a9178 ====

undefined4 FUN_002a9178(undefined8 param_1)

{
  FUN_002cfe90(0x3c31f8,param_1);
  FUN_002af7d8(param_1);
  (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8dd8),param_1);
  return 1;
}


// ==== FUN_002a91d8 @ 002a91d8 ====

undefined8 FUN_002a91d8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined8 *)(iVar1 + 0x68) = *param_2;
  *(float *)(iVar1 + 0x70) = 1.0 / *(float *)(iVar1 + 0x68);
  *(float *)(iVar1 + 0x74) = 1.0 / *(float *)(iVar1 + 0x6c);
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_002aa288();
  }
  return param_1;
}


// ==== FUN_002a9240 @ 002a9240 ====

undefined8 FUN_002a9240(float param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (int)param_2;
  *(float *)(iVar1 + 0x80) = param_1;
  if ((*(int *)(iVar1 + 0x14) == 1) || (*(int *)(iVar1 + 0x14) != 2)) {
    fVar5 = 1.0 / *(float *)(iVar1 + 0x84);
    param_1 = 1.0 / *(float *)(iVar1 + 0x80);
  }
  else {
    fVar5 = *(float *)(iVar1 + 0x84);
  }
  fVar3 = (DAT_00449454 - DAT_00449450) * fGpffff8034;
  fVar4 = DAT_00449450 + fVar3;
  fVar3 = DAT_00449454 - fVar3;
  fVar2 = (fVar3 - fVar4) / (fVar5 - param_1);
  *(float *)(iVar1 + 0x8c) = fVar2;
  *(float *)(iVar1 + 0x90) = ((fVar3 + fVar4) - fVar2 * (fVar5 + param_1)) * 0.5;
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_002aa288();
  }
  return param_2;
}


// ==== FUN_002a9310 @ 002a9310 ====

undefined8 FUN_002a9310(float param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (int)param_2;
  *(float *)(iVar1 + 0x84) = param_1;
  if ((*(int *)(iVar1 + 0x14) == 1) || (*(int *)(iVar1 + 0x14) != 2)) {
    param_1 = 1.0 / *(float *)(iVar1 + 0x84);
    fVar4 = 1.0 / *(float *)(iVar1 + 0x80);
  }
  else {
    fVar4 = *(float *)(iVar1 + 0x80);
  }
  fVar3 = (DAT_00449454 - DAT_00449450) * fGpffff8038;
  fVar5 = DAT_00449450 + fVar3;
  fVar3 = DAT_00449454 - fVar3;
  fVar2 = (fVar3 - fVar5) / (param_1 - fVar4);
  *(float *)(iVar1 + 0x8c) = fVar2;
  *(float *)(iVar1 + 0x90) = ((fVar3 + fVar5) - fVar2 * (param_1 + fVar4)) * 0.5;
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_002aa288();
  }
  return param_2;
}


// ==== FUN_002a93e0 @ 002a93e0 ====

void FUN_002a93e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_002cfac0(0x3c31f8,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== FUN_002a9498 @ 002a9498 ====

undefined8 FUN_002a9498(undefined8 param_1,int param_2)

{
  long lVar1;
  
  iGpffff8dd8 = param_2;
  lVar1 = FUN_002a6010(DAT_003c31f8,uGpffff871c,0x10,uGpffff8720,0x449410,0x40005);
  *(int *)((int)&DAT_00449438 + iGpffff8dd8) = (int)lVar1;
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    iGpffff8ddc = iGpffff8ddc + 1;
  }
  return param_1;
}


// ==== FUN_002a9518 @ 002a9518 ====

undefined8 FUN_002a9518(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x14) == 1) {
    FUN_002a8688();
    FUN_002a7dd0(param_1);
  }
  else {
    FUN_002a8da0(param_1);
    FUN_002a8860(param_1);
  }
  FUN_002d0910(iVar1 + 0x10c,iVar1 + 0x124,8);
  return param_1;
}


// ==== FUN_002a9588 @ 002a9588 ====

undefined8 FUN_002a9588(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (*DAT_004494a8)(0,param_1,0);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    DAT_00449438 = 0;
  }
  return param_1;
}


// ==== FUN_002a95e0 @ 002a95e0 ====

undefined8 FUN_002a95e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  DAT_00449438 = (undefined4)param_1;
  FUN_002ad4a8();
  lVar1 = (*DAT_00449484)(0,param_1,0);
  uVar2 = 0;
  if (lVar1 != 0) {
    FUN_002ce9b0(param_1);
    uVar2 = param_1;
  }
  return uVar2;
}


// ==== FUN_002a9640 @ 002a9640 ====

bool FUN_002a9640(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar1 = FUN_002a9df0(8,0x40f,0x2a5588,0x2a55b8);
  uVar2 = FUN_002a9df0(0x18,0x401,0x2a7868,0x2a78c0);
  uVar3 = FUN_002a9df0(0,0x40d,0x2cf5e0,0x2cf5f8);
  uVar4 = FUN_002a9df0(0x18,0x402,0x2a5bc8,0x2a5c80);
  uVar5 = FUN_002a9df0(4,0x403,0x2aa488,0x2aa420);
  uVar6 = FUN_002a9df0(4,0x404,0x2a7520,0x2a7598);
  uVar7 = FUN_002a9df0(4,0x405,0x2a9498,0x2a9430);
  uVar8 = FUN_002a9df0(0x220,0x406,0x2aa570,0x2aa710);
  uVar9 = FUN_002a9df0(100,0x407,0x2ac388,0x2ac8a0);
  uVar10 = FUN_002a9df0(0x34,0x408,0x2aeee0,0x2aed50);
  uVar11 = FUN_002a9df0(0x60,0x409,0x2ce950,0x2ce980);
  uVar12 = FUN_002a9df0(4,0x412,0x2d0078,0x2d00f0);
  uVar13 = FUN_002ce9a8();
  uVar14 = FUN_002a9df0(0x7c,0x40a,0x2ce708,0x2ce7c8);
  uVar15 = FUN_002a9df0(0x28,0x40b,0x2cf610,0x2cf910);
  return -1 < (long)(uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10
                     | uVar11 | uVar12 | uVar13 | uVar14 | uVar15);
}


// ==== FUN_002a9838 @ 002a9838 ====

/* WARNING: Removing unreachable block (ram,0x002a9894) */

undefined4 FUN_002a9838(void)

{
  long lVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_30 [4];
  
  lVar1 = (*DAT_0044944c)(10,auStack_30,0,0);
  if (lVar1 == 0) {
    uStack_40 = 1;
    uStack_3c = FUN_002a5548(0x18,10);
    FUN_002a55d8(&uStack_40);
    auStack_30[0] = 0xffffffff;
  }
  return auStack_30[0];
}


// ==== FUN_002a98a8 @ 002a98a8 ====

bool FUN_002a98a8(undefined8 param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = (*DAT_0044944c)(7,0,0,param_1);
  if (lVar1 == 0) {
    uStack_30 = 1;
    uStack_2c = FUN_002a5548(0x18,7);
    FUN_002a55d8(&uStack_30);
  }
  return lVar1 != 0;
}


// ==== FUN_002a9910 @ 002a9910 ====

long FUN_002a9910(void)

{
  long lVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  (*DAT_0044944c)(0x12,0,0,0);
  FUN_002cfe90(0x3c3210,0x449438);
  lVar1 = (*DAT_0044944c)(3,0,0,0);
  if (lVar1 == 0) {
    uStack_60 = 1;
    uStack_5c = FUN_002a5548(0x18,3);
    FUN_002a55d8(&uStack_60);
  }
  else {
    DAT_0044955c = 2;
  }
  return lVar1;
}


// ==== FUN_002a99d8 @ 002a99d8 ====

/* WARNING: Removing unreachable block (ram,0x002a9a3c) */

undefined4 FUN_002a99d8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar2 = (*DAT_0044944c)(2,0,0,0);
  if (lVar2 == 0) {
    uStack_60 = 1;
    uStack_5c = FUN_002a5548(0x18,2);
    FUN_002a55d8(&uStack_60);
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_002cfdf8(0x3c3210,0x449438);
    if (lVar2 == 0) {
      lVar2 = (*DAT_0044944c)(3,0,0,0);
      uVar1 = 0;
      if (lVar2 == 0) {
        uStack_40 = 1;
        uStack_3c = FUN_002a5548(0x18,3);
        FUN_002a55d8(&uStack_40);
        uVar1 = 0;
      }
    }
    else {
      FUN_002abe90(DAT_00449448);
      (*DAT_0044944c)(0x11,0,0,0);
      DAT_0044955c = 3;
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_002a9ae8 @ 002a9ae8 ====

long FUN_002a9ae8(void)

{
  long lVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar1 = (*DAT_0044944c)(1,0,0,0);
  if (lVar1 == 0) {
    uStack_40 = 1;
    uStack_3c = FUN_002a5548(0x18,1);
    FUN_002a55d8(&uStack_40);
  }
  else {
    DAT_0044955c = 1;
    iGpffff8724 = iGpffff8724 + -1;
  }
  return lVar1;
}


// ==== FUN_002a9b70 @ 002a9b70 ====

bool FUN_002a9b70(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  if (DAT_0044955c == 1) {
    if (param_1 == 0) {
      uStack_80 = 1;
      uStack_7c = FUN_002a5548(0xffffffff80000016);
      FUN_002a55d8(&uStack_80);
      bVar1 = false;
    }
    else {
      lVar2 = FUN_002bfe58();
      bVar1 = false;
      if (lVar2 != 0) {
        FUN_002a9f08(lVar2,4,0x449448,0x449540,0);
        lVar3 = FUN_002a9f08(lVar2,0,0,param_1,0);
        bVar1 = lVar3 != 0;
        if (bVar1) {
          FUN_002a9f08(lVar2,0xb,0x449480,0,0x1d);
          iGpffff8724 = iGpffff8724 + 1;
          DAT_0044955c = 2;
        }
      }
    }
  }
  else {
    uStack_70 = 1;
    uStack_6c = FUN_002a5548(0xffffffff80000001);
    FUN_002a55d8(&uStack_70);
    bVar1 = false;
  }
  return bVar1;
}


// ==== FUN_002a9cb8 @ 002a9cb8 ====

long FUN_002a9cb8(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    DAT_00449554 = (code *)&LAB_002a66c8;
    DAT_00449550 = FUN_002a6340;
    FUN_002a6c00(1);
  }
  else {
    DAT_00449554 = FUN_002aa040;
    DAT_00449550 = FUN_002aa018;
    FUN_002a6c00(0);
  }
  DAT_00449560 = param_3;
  if (DAT_0044955c == 0) {
    lVar1 = FUN_002d0178();
    if (lVar1 != 0) {
      lVar1 = FUN_002a6b08(param_1);
      if (lVar1 != 0) {
        lVar1 = FUN_002cfd98();
        if (lVar1 != 0) {
          lVar1 = FUN_002a9640();
          if ((lVar1 != 0) && (lVar1 = FUN_002c0038(), lVar1 != 0)) {
            DAT_0044955c = 1;
            return lVar1;
          }
          FUN_002cf990();
        }
        FUN_002a6ab8();
      }
      FUN_002d0678();
    }
  }
  return 0;
}


// ==== FUN_002a9df0 @ 002a9df0 ====

void FUN_002a9df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_002cfac0(0x3c3210,param_1,param_2,param_3,param_4,0);
  return;
}


// ==== FUN_002a9e38 @ 002a9e38 ====

bool FUN_002a9e38(void)

{
  bool bVar1;
  
  bVar1 = iGpffff8724 == 0;
  if (bVar1) {
    FUN_002cf990();
    FUN_002a6ab8();
    DAT_0044955c = 0;
  }
  return bVar1;
}


// ==== FUN_002a9e88 @ 002a9e88 ====

undefined8 FUN_002a9e88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar1 = (*DAT_0044944c)(6,param_1,0,param_2);
  if (lVar1 == 0) {
    uStack_40 = 1;
    uStack_3c = FUN_002a5548(0x18,6);
    FUN_002a55d8(&uStack_40);
  }
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = param_1;
  }
  return uVar2;
}


// ==== FUN_002a9f08 @ 002a9f08 ====

ulong FUN_002a9f08(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                  )

{
  ulong uVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uVar1 = (**(code **)(param_1 + 4))(param_2,param_3,param_4,param_5);
  if (uVar1 != 0) {
    return uVar1;
  }
  uVar1 = 0;
  switch((int)param_2) {
  case 0xd:
    uVar1 = 1;
    *(undefined4 *)param_3 = 1;
    break;
  case 0xe:
    uVar1 = (ulong)(param_5 == 0);
    if (uVar1 != 0) {
      (*DAT_00449504)(param_3,0x402ec8);
      break;
    }
    goto LAB_002a9fc8;
  case 0xf:
    *(undefined4 *)param_3 = 0;
  case 0x11:
  case 0x12:
    uVar1 = 1;
    break;
  case 0x10:
    uVar1 = (ulong)(param_5 == 0);
  }
  if (uVar1 == 0) {
LAB_002a9fc8:
    uStack_60 = 1;
    uStack_5c = FUN_002a5548(0x18,param_2);
    FUN_002a55d8(&uStack_60);
  }
  return uVar1;
}


// ==== FUN_002aa010 @ 002aa010 ====

undefined4 FUN_002aa010(void)

{
  return uGpffff8724;
}


// ==== FUN_002aa018 @ 002aa018 ====

void FUN_002aa018(undefined4 *param_1)

{
  (*DAT_00449540)(*param_1);
  return;
}


// ==== FUN_002aa040 @ 002aa040 ====

undefined8 FUN_002aa040(undefined8 param_1,undefined8 param_2)

{
  (*DAT_00449544)(param_2);
  return param_1;
}


// ==== FUN_002aa080 @ 002aa080 ====

void FUN_002aa080(undefined8 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined1 **)(puVar1 + 0x94) = puVar1 + 0x90;
  *(undefined1 **)(puVar1 + 0x90) = puVar1 + 0x90;
  *(undefined4 *)(puVar1 + 0x1c) = 3;
  *(undefined4 *)(puVar1 + 0x24) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x10) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x30) = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 0x48) = 0;
  *(undefined4 *)(puVar1 + 0x40) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0x20003;
  *(undefined4 *)(puVar1 + 0x5c) = 3;
  *(undefined4 *)(puVar1 + 100) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x50) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x58) = 0;
  *(undefined4 *)(puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0x70) = 0;
  *(undefined4 *)(puVar1 + 0x68) = 0;
  *(undefined4 *)(puVar1 + 0x84) = 0;
  *(undefined4 *)(puVar1 + 0x80) = 0;
  *(undefined4 *)(puVar1 + 0x5c) = 0x20003;
  *(undefined4 *)(puVar1 + 0x78) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x60) = 0;
  *(undefined4 *)(puVar1 + 0x74) = 0;
  *(undefined4 *)(puVar1 + 0x88) = 0;
  *(undefined4 *)(puVar1 + 0x98) = 0;
  *(undefined4 *)(puVar1 + 0x9c) = 0;
  *(undefined1 **)(puVar1 + 0xa0) = puVar1;
  FUN_002cfdf8(0x3c3328,param_1);
  return;
}


// ==== FUN_002aa188 @ 002aa188 ====

int FUN_002aa188(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x98);
  if (iVar3 == param_1) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    if (*(int *)(iVar3 + 0x9c) != param_1) {
      for (iVar3 = *(int *)(iVar3 + 0x9c); *(int *)(iVar3 + 0x9c) != param_1;
          iVar3 = *(int *)(iVar3 + 0x9c)) {
      }
    }
    *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  }
  iVar3 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(int *)(param_1 + 0xa0) = param_1;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x9c)) {
    FUN_002aa510(iVar3,param_1);
  }
  iVar3 = *(int *)(param_1 + 0xa0);
  bVar1 = *(byte *)(iVar3 + 3);
  if ((bVar1 & 3) == 0) {
    *(int **)(iVar3 + 0xc) = &DAT_004494f4;
    *(int *)(DAT_004494f4 + 4) = iVar3 + 8;
    iVar2 = iVar3 + 8;
    *(int *)(iVar3 + 8) = DAT_004494f4;
    DAT_004494f4 = iVar2;
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  *(byte *)(iVar3 + 3) = bVar1 | 3;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0xc;
  return param_1;
}


// ==== FUN_002aa288 @ 002aa288 ====

undefined8 FUN_002aa288(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar3 = *(int *)(iVar4 + 0xa0);
  bVar1 = *(byte *)(iVar3 + 3);
  if ((bVar1 & 3) == 0) {
    *(int **)(iVar3 + 0xc) = &DAT_004494f4;
    *(int *)(DAT_004494f4 + 4) = iVar3 + 8;
    iVar2 = iVar3 + 8;
    *(int *)(iVar3 + 8) = DAT_004494f4;
    DAT_004494f4 = iVar2;
    iVar3 = *(int *)(iVar4 + 0xa0);
  }
  else {
    iVar3 = *(int *)(iVar4 + 0xa0);
  }
  *(byte *)(iVar3 + 3) = bVar1 | 3;
  *(byte *)(iVar4 + 3) = *(byte *)(iVar4 + 3) | 0xc;
  return param_1;
}


// ==== FUN_002aa2e8 @ 002aa2e8 ====

long FUN_002aa2e8(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*DAT_00449550)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de0),0x3000e);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_002aa080(lVar1);
    lVar2 = lVar1;
  }
  return lVar2;
}


// ==== FUN_002aa340 @ 002aa340 ====

undefined4 FUN_002aa340(undefined8 param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_002cfe90(0x3c3328,param_1);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 4) == 0) {
    bVar1 = *(byte *)(iVar4 + 3);
  }
  else {
    FUN_002aa188(param_1);
    bVar1 = *(byte *)(iVar4 + 3);
  }
  if ((bVar1 & 3) == 0) {
    iVar4 = *(int *)(iVar4 + 0x98);
  }
  else {
    piVar2 = *(int **)(iVar4 + 0xc);
    iVar3 = *(int *)(iVar4 + 8);
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    iVar4 = *(int *)(iVar4 + 0x98);
  }
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = 0;
    while (iVar4 = *(int *)(iVar4 + 0x9c), iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = 0;
    }
  }
  (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de0),param_1);
  return 1;
}


// ==== FUN_002aa488 @ 002aa488 ====

undefined8 FUN_002aa488(undefined8 param_1,int param_2)

{
  long lVar1;
  
  iGpffff8de0 = param_2;
  lVar1 = FUN_002a6010(DAT_003c3328,uGpffff8728,0x10,uGpffff872c,0x44d438,0x4000e);
  *(int *)((int)&DAT_00449438 + iGpffff8de0) = (int)lVar1;
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    DAT_004494f4 = &DAT_004494f4;
    iGpffff8de4 = iGpffff8de4 + 1;
    DAT_004494f8 = &DAT_004494f4;
  }
  return param_1;
}


// ==== FUN_002aa510 @ 002aa510 ====

void FUN_002aa510(int param_1,undefined8 param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0xa0) = (int)param_2;
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
    FUN_002aa510(iVar1,param_2);
  }
  return;
}


// ==== FUN_002aa710 @ 002aa710 ====

undefined8 FUN_002aa710(undefined8 param_1)

{
  code *pcVar1;
  
  if (*(int *)(&DAT_00449648 + iGpffff8de8) != 0) {
    (*DAT_00449544)();
    *(undefined4 *)(&DAT_0044964c + iGpffff8de8) = 0;
    *(undefined4 *)(&DAT_00449648 + iGpffff8de8) = 0;
  }
  if (*(int *)(&DAT_0044943c + iGpffff8de8) != 0) {
    (*DAT_00449544)();
    *(undefined4 *)(&DAT_00449440 + iGpffff8de8) = 0;
    *(undefined4 *)(&DAT_0044943c + iGpffff8de8) = 0;
  }
  while (pcVar1 = DAT_00449554, *(int *)(&DAT_00449654 + iGpffff8de8) != 0) {
    *(undefined4 *)(&DAT_00449654 + iGpffff8de8) =
         *(undefined4 *)(*(int *)(&DAT_00449654 + iGpffff8de8) + 0x30);
    (*pcVar1)(*(undefined4 *)(&DAT_00449650 + iGpffff8de8));
  }
  if (*(int *)(&DAT_00449650 + iGpffff8de8) != 0) {
    FUN_002a65f0();
    *(undefined4 *)(&DAT_00449650 + iGpffff8de8) = 0;
  }
  if (*(int *)((int)&DAT_00449438 + iGpffff8de8) != 0) {
    FUN_002a65f0();
    *(undefined4 *)((int)&DAT_00449438 + iGpffff8de8) = 0;
  }
  iGpffff8dec = iGpffff8dec + -1;
  return param_1;
}


// ==== FUN_002aa840 @ 002aa840 ====

undefined8 FUN_002aa840(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  iVar9 = (int)param_1;
  uVar3 = *(uint *)(iVar9 + 0xc);
  if (uVar3 != 8) {
    if (8 < (int)uVar3) {
      if (uVar3 != 0x20) {
        return param_1;
      }
      iVar2 = 0;
      pbVar5 = *(byte **)(iVar9 + 0x14);
      if (*(int *)(iVar9 + 8) < 1) {
        return param_1;
      }
      do {
        iVar2 = iVar2 + 1;
        iVar7 = 0;
        pbVar4 = pbVar5;
        if (0 < *(int *)(iVar9 + 4)) {
          do {
            iVar7 = iVar7 + 1;
            bVar1 = *pbVar4;
            if (*pbVar4 < pbVar4[1]) {
              bVar1 = pbVar4[1];
            }
            if (bVar1 < pbVar4[2]) {
              bVar1 = pbVar4[2];
            }
            pbVar4[3] = bVar1;
            pbVar4 = pbVar4 + 4;
          } while (iVar7 < *(int *)(iVar9 + 4));
        }
        pbVar5 = pbVar5 + *(int *)(iVar9 + 0x10);
      } while (iVar2 < *(int *)(iVar9 + 8));
      return param_1;
    }
    if (uVar3 != 4) {
      return param_1;
    }
  }
  iVar2 = 1 << (uVar3 & 0x1f);
  pbVar5 = *(byte **)(iVar9 + 0x18);
  if (iVar2 < 1) {
    return param_1;
  }
  uVar3 = -iVar2 & 3;
  pbVar4 = pbVar5;
  pbVar6 = pbVar5;
  pbVar8 = pbVar5;
  if (uVar3 != 0) {
    if (uVar3 < 3) {
      if (uVar3 < 2) {
        pbVar4 = pbVar5 + 4;
        iVar2 = iVar2 + -1;
        bVar1 = *pbVar5;
        if (*pbVar5 < pbVar5[1]) {
          bVar1 = pbVar5[1];
        }
        if (bVar1 < pbVar5[2]) {
          bVar1 = pbVar5[2];
        }
        pbVar5[3] = bVar1;
        bVar1 = *pbVar4;
      }
      else {
        bVar1 = *pbVar5;
      }
      iVar2 = iVar2 + -1;
      if (bVar1 < pbVar4[1]) {
        bVar1 = pbVar4[1];
      }
      if (bVar1 < pbVar4[2]) {
        bVar1 = pbVar4[2];
      }
      pbVar4[3] = bVar1;
      pbVar5 = pbVar4 + 4;
    }
    iVar2 = iVar2 + -1;
    bVar1 = *pbVar5;
    if (*pbVar5 < pbVar5[1]) {
      bVar1 = pbVar5[1];
    }
    if (bVar1 < pbVar5[2]) {
      bVar1 = pbVar5[2];
    }
    pbVar5[3] = bVar1;
    pbVar5 = pbVar5 + 4;
    pbVar4 = pbVar5;
    pbVar6 = pbVar5;
    pbVar8 = pbVar5;
    if (iVar2 == 0) {
      return param_1;
    }
  }
  do {
    iVar2 = iVar2 + -4;
    bVar1 = *pbVar4;
    if (*pbVar4 < pbVar6[1]) {
      bVar1 = pbVar6[1];
    }
    if (bVar1 < pbVar8[2]) {
      bVar1 = pbVar8[2];
    }
    pbVar5[3] = bVar1;
    bVar1 = pbVar4[4];
    if (pbVar4[4] < pbVar6[5]) {
      bVar1 = pbVar6[5];
    }
    if (bVar1 < pbVar8[6]) {
      bVar1 = pbVar8[6];
    }
    pbVar5[7] = bVar1;
    bVar1 = pbVar4[8];
    if (pbVar4[8] < pbVar6[9]) {
      bVar1 = pbVar6[9];
    }
    if (bVar1 < pbVar8[10]) {
      bVar1 = pbVar8[10];
    }
    pbVar5[0xb] = bVar1;
    bVar1 = pbVar4[0xc];
    if (pbVar4[0xc] < pbVar6[0xd]) {
      bVar1 = pbVar6[0xd];
    }
    if (bVar1 < pbVar8[0xe]) {
      bVar1 = pbVar8[0xe];
    }
    pbVar5[0xf] = bVar1;
    pbVar5 = pbVar5 + 0x10;
    pbVar4 = pbVar4 + 0x10;
    pbVar6 = pbVar6 + 0x10;
    pbVar8 = pbVar8 + 0x10;
  } while (iVar2 != 0);
  return param_1;
}


// ==== FUN_002aaa68 @ 002aaa68 ====

undefined8 FUN_002aaa68(undefined8 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  puVar15 = &uStack_d0;
  puVar16 = (uint *)param_1;
  if ((puVar16[1] != *(uint *)(param_2 + 4)) || (puVar16[2] != *(uint *)(param_2 + 8))) {
    uStack_d0 = 1;
    uStack_cc = FUN_002a5548(0xffffffff8000000a);
    goto LAB_002aaf08;
  }
  uVar13 = puVar16[3];
  if (uVar13 != 8) {
    if ((int)uVar13 < 9) {
      if (uVar13 == 4) goto LAB_002aab10;
    }
    else if (uVar13 == 0x20) goto LAB_002aadec;
    uStack_a0 = 1;
    uStack_9c = FUN_002a5548(0xffffffff80000009);
    puVar15 = &uStack_a0;
LAB_002aaf08:
    FUN_002a55d8(puVar15);
    return 0;
  }
LAB_002aab10:
  uVar13 = puVar16[1];
  uVar8 = puVar16[2];
  uVar2 = puVar16[3];
  lVar4 = (*DAT_00449550)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),0x30018);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    puVar15 = (undefined4 *)lVar4;
    puVar15[1] = uVar13;
    puVar15[2] = uVar8;
    puVar15[3] = uVar2;
    puVar15[5] = 0;
    puVar15[6] = 0;
    *puVar15 = 0;
    FUN_002cfdf8(0x3c3340,lVar4);
  }
  if (lVar4 == 0) {
    return 0;
  }
  puVar17 = (uint *)lVar4;
  lVar5 = (long)(int)puVar17[3];
  bVar3 = false;
  if ((lVar5 == 4) || (lVar5 == 8)) {
    bVar3 = true;
  }
  if (bVar3) {
    iVar12 = (int)(4L << lVar5);
    uVar13 = puVar17[3];
  }
  else {
    iVar12 = 0;
    uVar13 = puVar17[3];
  }
  uVar13 = ((int)(uVar13 + 7) >> 3) * puVar17[1] + 3 & 0xfffffffc;
  iVar11 = uVar13 * puVar17[2];
  puVar17[4] = uVar13;
  iVar12 = iVar11 + iVar12;
  lVar5 = (*DAT_00449540)(iVar12,0x30018);
  puVar17[5] = (uint)lVar5;
  if (lVar5 == 0) {
    uStack_c0 = 1;
    uStack_bc = FUN_002a5548(0xffffffff80000013,iVar12);
    FUN_002a55d8(&uStack_c0);
    lVar5 = 0;
  }
  else {
    uVar13 = (uint)lVar5 + iVar11;
    if (!bVar3) {
      uVar13 = 0;
    }
    puVar17[6] = uVar13;
    *puVar17 = *puVar17 | 1;
    lVar5 = lVar4;
  }
  if (lVar5 == 0) {
    if ((*puVar17 & 1) != 0) {
      FUN_002abd18(lVar4);
    }
    FUN_002cfe90(0x3c3340,lVar4);
    (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),lVar4);
    return 0;
  }
  FUN_002abd68(lVar4,param_1);
  if ((*puVar16 & 1) != 0) {
    (*DAT_00449544)(puVar16[5]);
    puVar16[5] = 0;
    puVar16[6] = 0;
    *puVar16 = *puVar16 & 0xfffffffe;
  }
  puVar16[3] = 0x20;
  iVar12 = puVar16[1] * 4 * puVar16[2];
  puVar16[4] = puVar16[1] * 4;
  lVar5 = (*DAT_00449540)(iVar12,0x30018);
  puVar16[5] = (uint)lVar5;
  if (lVar5 == 0) {
    uStack_b0 = 1;
    uStack_ac = FUN_002a5548(0xffffffff80000013,iVar12);
    FUN_002a55d8(&uStack_b0);
  }
  else {
    puVar16[6] = 0;
    *puVar16 = *puVar16 | 1;
  }
  FUN_002abd68(param_1,lVar4);
  (*DAT_00449544)(puVar17[5]);
  puVar17[5] = 0;
  puVar17[6] = 0;
  *puVar17 = *puVar17 & 0xfffffffe;
  FUN_002cfe90(0x3c3340,lVar4);
  (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),lVar4);
LAB_002aadec:
  iVar11 = 0;
  pbVar14 = *(byte **)(param_2 + 0x14);
  iVar12 = *(int *)(param_2 + 0x18);
  uVar13 = puVar16[5];
  if ((int)puVar16[2] < 1) {
    return param_1;
  }
  do {
    iVar9 = *(int *)(param_2 + 0xc);
    if (iVar9 == 8) {
LAB_002aae48:
      iVar9 = 0;
      if ((int)puVar16[1] < 1) {
LAB_002aaec8:
        uVar8 = puVar16[4];
      }
      else {
        puVar10 = (undefined1 *)(uVar13 + 3);
        pbVar6 = pbVar14;
        do {
          bVar1 = *pbVar6;
          iVar9 = iVar9 + 1;
          pbVar6 = pbVar6 + 1;
          *puVar10 = *(undefined1 *)((uint)bVar1 * 4 + iVar12 + 3);
          puVar10 = puVar10 + 4;
        } while (iVar9 < (int)puVar16[1]);
        uVar8 = puVar16[4];
      }
    }
    else if (iVar9 < 9) {
      if (iVar9 == 4) goto LAB_002aae48;
      uVar8 = puVar16[4];
    }
    else {
      if (iVar9 == 0x20) {
        iVar9 = 0;
        if (0 < (int)puVar16[1]) {
          pbVar7 = pbVar14 + 3;
          pbVar6 = (byte *)(uVar13 + 3);
          do {
            bVar1 = *pbVar7;
            iVar9 = iVar9 + 1;
            pbVar7 = pbVar7 + 4;
            *pbVar6 = bVar1;
            pbVar6 = pbVar6 + 4;
          } while (iVar9 < (int)puVar16[1]);
        }
        goto LAB_002aaec8;
      }
      uVar8 = puVar16[4];
    }
    iVar11 = iVar11 + 1;
    uVar13 = uVar13 + uVar8;
    pbVar14 = pbVar14 + *(int *)(param_2 + 0x10);
    if ((int)puVar16[2] <= iVar11) {
      return param_1;
    }
  } while( true );
}


// ==== FUN_002aaf48 @ 002aaf48 ====

undefined8 FUN_002aaf48(undefined8 param_1,int param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *pcStack_b0;
  undefined4 uStack_ac;
  
  pcVar5 = *(char **)(&DAT_0044943c + iGpffff8de8);
  pcStack_b0 = param_3;
  uStack_ac = param_4;
  lVar3 = FUN_002d08c8();
  if (((lVar3 == 0) && (pcVar5 != (char *)0x0)) && (*pcVar5 != '\0')) {
    do {
      (*DAT_00449518)(pcVar5,0x3b);
      lVar3 = (*DAT_00449518)(pcVar5,0x3b);
      iVar1 = (int)lVar3 - (int)pcVar5;
      if (lVar3 == 0) {
        iVar1 = (*DAT_0044952c)(pcVar5);
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = (char *)((int)lVar3 + 1);
      }
      iVar2 = (*DAT_0044952c)(param_1);
      iVar2 = iVar1 + iVar2 + param_2;
      if (*(int *)(&DAT_0044964c + iGpffff8de8) < iVar2) {
        if (*(int *)(&DAT_00449648 + iGpffff8de8) == 0) {
          lVar3 = (*DAT_00449540)(iVar2,0x1040018);
        }
        else {
          lVar3 = (*DAT_00449548)(*(int *)(&DAT_00449648 + iGpffff8de8),iVar2,0x1040018);
        }
        if (lVar3 != 0) {
          *(int *)(&DAT_0044964c + iGpffff8de8) = iVar2;
          *(int *)(&DAT_00449648 + iGpffff8de8) = (int)lVar3;
          goto LAB_002ab1c0;
        }
        uStack_c0 = 1;
        uStack_bc = FUN_002a5548(0xffffffff80000013,iVar2);
        FUN_002a55d8(&uStack_c0);
        iVar2 = 0;
      }
      else {
LAB_002ab1c0:
        iVar2 = *(int *)(&DAT_00449648 + iGpffff8de8);
      }
      if (iVar2 == 0) goto LAB_002ab088;
      memcpy(iVar2,pcVar5,iVar1);
      (*DAT_00449504)(iVar2 + iVar1,param_1);
      lVar3 = (*pcStack_b0)(iVar2,uStack_ac);
      if (lVar3 == 0) {
        return param_1;
      }
      if (pcVar4 == (char *)0x0) {
        return param_1;
      }
      pcVar5 = pcVar4;
      if (*pcVar4 == '\0') {
        return param_1;
      }
    } while( true );
  }
  iVar1 = (*DAT_0044952c)(param_1);
  iVar1 = iVar1 + param_2;
  if (*(int *)(&DAT_0044964c + iGpffff8de8) < iVar1) {
    if (*(int *)(&DAT_00449648 + iGpffff8de8) == 0) {
      lVar3 = (*DAT_00449540)(iVar1,0x1040018);
    }
    else {
      lVar3 = (*DAT_00449548)(*(int *)(&DAT_00449648 + iGpffff8de8),iVar1,0x1040018);
    }
    if (lVar3 == 0) {
      uStack_d0 = 1;
      uStack_cc = FUN_002a5548(0xffffffff80000013,iVar1);
      FUN_002a55d8(&uStack_d0);
      iVar1 = 0;
      goto LAB_002ab080;
    }
    *(int *)(&DAT_0044964c + iGpffff8de8) = iVar1;
    *(int *)(&DAT_00449648 + iGpffff8de8) = (int)lVar3;
  }
  iVar1 = *(int *)(&DAT_00449648 + iGpffff8de8);
LAB_002ab080:
  if (iVar1 == 0) {
LAB_002ab088:
    param_1 = 0;
  }
  else {
    (*DAT_00449504)(iVar1,param_1);
    (*pcStack_b0)(iVar1,uStack_ac);
  }
  return param_1;
}


// ==== FUN_002ab250 @ 002ab250 ====

undefined4 FUN_002ab250(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iStack_60;
  undefined4 uStack_5c;
  
  lVar2 = (*DAT_00449514)(param_1,0x3a);
  lVar3 = param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
  }
  lVar2 = (*DAT_00449514)(lVar3,0x2f);
  if (lVar2 != 0) {
    lVar3 = lVar2;
  }
  lVar2 = (*DAT_00449514)(lVar3,0x5c);
  if (lVar2 != 0) {
    lVar3 = lVar2;
  }
  lVar3 = (*DAT_00449514)(lVar3,0x2e);
  if (lVar3 != 0) {
    for (iVar1 = *(int *)(&DAT_00449654 + iGpffff8de8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30))
    {
      lVar2 = (*DAT_00449520)(iVar1,lVar3);
      if ((lVar2 == 0) || (lVar2 = (*DAT_00449520)(iVar1 + 0x14,lVar3), lVar2 == 0)) {
        iStack_60 = *(int *)(iVar1 + 0x28);
        if (iStack_60 == 0) {
          return 0;
        }
        uStack_5c = 0;
        FUN_002aaf48(param_1,5,0x2ac0d0,&iStack_60);
        return uStack_5c;
      }
    }
  }
  return 0;
}


// ==== FUN_002ab378 @ 002ab378 ====

long FUN_002ab378(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  lVar2 = FUN_002ab250();
  lVar3 = 0;
  if (((lVar2 != 0) && (lVar3 = lVar2, param_2 != 0)) && (*(char *)param_2 != '\0')) {
    lVar3 = FUN_002ab250(param_2);
    puVar5 = (uint *)lVar2;
    if (lVar3 == 0) {
      if ((*puVar5 & 1) != 0) {
        FUN_002abd18(lVar2);
      }
      FUN_002cfe90(0x3c3340,lVar2);
      (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),lVar2);
      lVar3 = 0;
    }
    else {
      lVar4 = FUN_002aa840(lVar3);
      if (lVar4 == 0) {
        uVar1 = *puVar5;
      }
      else {
        lVar4 = FUN_002aaa68(lVar2,lVar3);
        if (lVar4 != 0) {
          if ((*(uint *)lVar3 & 1) != 0) {
            FUN_002abd18(lVar3);
          }
          FUN_002cfe90(0x3c3340,lVar3);
          (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),lVar3);
          return lVar2;
        }
        uVar1 = *puVar5;
      }
      if ((uVar1 & 1) != 0) {
        FUN_002abd18(lVar2);
      }
      FUN_002cfe90(0x3c3340,lVar2);
      (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),lVar2);
      if ((*(uint *)lVar3 & 1) != 0) {
        FUN_002abd18(lVar3);
      }
      FUN_002cfe90(0x3c3340,lVar3);
      (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),lVar3);
      lVar3 = 0;
    }
  }
  return lVar3;
}


// ==== FUN_002ab538 @ 002ab538 ====

undefined4 FUN_002ab538(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  iVar2 = *(int *)(param_2 + 0x18);
  iVar3 = *(int *)(param_1 + 4);
  uVar4 = *(int *)(param_2 + 0xc) << 8 | *(uint *)(param_1 + 0xc);
  iVar12 = *(int *)(param_1 + 8);
  pbVar11 = *(byte **)(param_2 + 0x14);
  puVar10 = *(undefined4 **)(param_1 + 0x14);
  if (uVar4 == 0x808) {
    return 1;
  }
  if (uVar4 < 0x809) {
    if (uVar4 == 0x408) {
      if (iVar12 < 1) {
        return 1;
      }
      uVar4 = -iVar12 & 3;
      if (uVar4 == 0) goto LAB_002ab698;
      if (uVar4 < 3) {
        if (uVar4 < 2) {
          iVar12 = iVar12 + -1;
          memcpy(puVar10,pbVar11,iVar3);
          pbVar11 = pbVar11 + *(int *)(param_2 + 0x10);
          puVar10 = (undefined4 *)((int)puVar10 + *(int *)(param_1 + 0x10));
        }
        iVar12 = iVar12 + -1;
        memcpy(puVar10,pbVar11,iVar3);
        pbVar11 = pbVar11 + *(int *)(param_2 + 0x10);
        puVar10 = (undefined4 *)((int)puVar10 + *(int *)(param_1 + 0x10));
      }
      iVar12 = iVar12 + -1;
      while( true ) {
        memcpy(puVar10,pbVar11,iVar3);
        pbVar11 = pbVar11 + *(int *)(param_2 + 0x10);
        puVar10 = (undefined4 *)((int)puVar10 + *(int *)(param_1 + 0x10));
        if (iVar12 == 0) break;
LAB_002ab698:
        iVar12 = iVar12 + -4;
        memcpy(puVar10,pbVar11,iVar3);
        pbVar11 = pbVar11 + *(int *)(param_2 + 0x10);
        iVar5 = (int)puVar10 + *(int *)(param_1 + 0x10);
        memcpy(iVar5,pbVar11,iVar3);
        iVar2 = *(int *)(param_2 + 0x10);
        iVar5 = iVar5 + *(int *)(param_1 + 0x10);
        memcpy(iVar5,pbVar11 + iVar2,iVar3);
        pbVar11 = pbVar11 + iVar2 + *(int *)(param_2 + 0x10);
        puVar10 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0x10));
      }
      return 1;
    }
    if (uVar4 < 0x409) {
      if (uVar4 == 0x404) {
        return 1;
      }
    }
    else if (uVar4 == 0x420) {
LAB_002ab72c:
      iVar5 = 0;
      if (0 < iVar12) {
        do {
          iVar5 = iVar5 + 1;
          if (0 < iVar3) {
            uVar4 = -iVar3 & 3;
            iVar9 = iVar3;
            pbVar7 = pbVar11;
            puVar8 = puVar10;
            if (uVar4 != 0) {
              pbVar6 = pbVar11;
              if (uVar4 < 3) {
                if (uVar4 < 2) {
                  puVar8 = puVar10 + 1;
                  pbVar6 = pbVar11 + 1;
                  iVar9 = iVar3 + -1;
                  *puVar10 = *(undefined4 *)((uint)*pbVar11 * 4 + iVar2);
                  bVar1 = *pbVar6;
                }
                else {
                  bVar1 = *pbVar11;
                }
                iVar9 = iVar9 + -1;
                pbVar6 = pbVar6 + 1;
                *puVar8 = *(undefined4 *)((uint)bVar1 * 4 + iVar2);
                puVar8 = puVar8 + 1;
              }
              iVar9 = iVar9 + -1;
              pbVar7 = pbVar6 + 1;
              *puVar8 = *(undefined4 *)((uint)*pbVar6 * 4 + iVar2);
              puVar8 = puVar8 + 1;
              if (iVar9 == 0) goto LAB_002ab870;
            }
            do {
              iVar9 = iVar9 + -4;
              *puVar8 = *(undefined4 *)((uint)*pbVar7 * 4 + iVar2);
              puVar8[1] = *(undefined4 *)((uint)pbVar7[1] * 4 + iVar2);
              puVar8[2] = *(undefined4 *)((uint)pbVar7[2] * 4 + iVar2);
              puVar8[3] = *(undefined4 *)((uint)pbVar7[3] * 4 + iVar2);
              pbVar7 = pbVar7 + 4;
              puVar8 = puVar8 + 4;
            } while (iVar9 != 0);
          }
LAB_002ab870:
          pbVar11 = pbVar11 + *(int *)(param_2 + 0x10);
          puVar10 = (undefined4 *)((int)puVar10 + *(int *)(param_1 + 0x10));
        } while (iVar5 < iVar12);
      }
      return 1;
    }
  }
  else if (uVar4 != 0x2004) {
    if (uVar4 < 0x2005) {
      if (uVar4 == 0x820) goto LAB_002ab72c;
    }
    else if ((uVar4 != 0x2008) && (uVar4 == 0x2020)) {
      return 1;
    }
  }
  uStack_90 = 1;
  uStack_8c = FUN_002a5548(0xffffffff80000009);
  FUN_002a55d8(&uStack_90);
  return 0;
}


// ==== FUN_002ab8e0 @ 002ab8e0 ====

undefined8 FUN_002ab8e0(undefined8 param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar4 = &uStack_40;
  puVar10 = (uint *)param_1;
  uVar3 = puVar10[3];
  if (uVar3 == 8) {
LAB_002ab928:
    pbVar5 = (byte *)puVar10[6];
    iVar7 = 1 << (puVar10[3] & 0x1f);
    if (pbVar5 == (byte *)0x0) {
      uStack_40 = 1;
      uStack_3c = FUN_002a5548(0xffffffff80000016);
      goto LAB_002abab8;
    }
    pbVar8 = pbVar5;
    if (iVar7 != 0) {
      do {
        iVar7 = iVar7 + -1;
        *pbVar5 = (&DAT_00449444)[(uint)*pbVar8 + iGpffff8de8];
        pbVar5[1] = (&DAT_00449444)[(uint)pbVar8[1] + iGpffff8de8];
        pbVar5[2] = (&DAT_00449444)[(uint)pbVar8[2] + iGpffff8de8];
        pbVar5[3] = pbVar8[3];
        pbVar5 = pbVar5 + 4;
        pbVar8 = pbVar8 + 4;
      } while (iVar7 != 0);
      uVar3 = *puVar10;
      goto LAB_002abacc;
    }
LAB_002abac8:
    uVar3 = *puVar10;
LAB_002abacc:
    *puVar10 = uVar3 | 2;
    return param_1;
  }
  if ((int)uVar3 < 9) {
    if (uVar3 == 4) goto LAB_002ab928;
  }
  else if (uVar3 == 0x20) {
    pbVar5 = (byte *)puVar10[5];
    uVar3 = puVar10[1];
    uVar2 = puVar10[2];
    if (pbVar5 == (byte *)0x0) {
      uStack_30 = 1;
      uStack_2c = FUN_002a5548(0xffffffff80000016);
      puVar4 = &uStack_30;
      goto LAB_002abab8;
    }
    iVar7 = 0;
    if (0 < (int)uVar2) {
      do {
        iVar7 = iVar7 + 1;
        pbVar8 = pbVar5;
        pbVar6 = pbVar5;
        for (uVar9 = uVar3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar6 = (&DAT_00449444)[(uint)*pbVar8 + iGpffff8de8];
          pbVar6[1] = (&DAT_00449444)[(uint)pbVar8[1] + iGpffff8de8];
          pbVar6[2] = (&DAT_00449444)[(uint)pbVar8[2] + iGpffff8de8];
          pbVar1 = pbVar8 + 3;
          pbVar8 = pbVar8 + 4;
          pbVar6[3] = *pbVar1;
          pbVar6 = pbVar6 + 4;
        }
        pbVar5 = pbVar5 + puVar10[4];
      } while (iVar7 < (int)uVar2);
      uVar3 = *puVar10;
      goto LAB_002abacc;
    }
    goto LAB_002abac8;
  }
  uStack_20 = 1;
  uStack_1c = FUN_002a5548(0xffffffff80000008);
  puVar4 = &uStack_20;
LAB_002abab8:
  FUN_002a55d8(puVar4);
  return 0;
}


// ==== FUN_002abaf8 @ 002abaf8 ====

long FUN_002abaf8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = (*DAT_00449550)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),0x30018);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)lVar1;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = 0;
    FUN_002cfdf8(0x3c3340,lVar1);
  }
  return lVar1;
}


// ==== FUN_002abb98 @ 002abb98 ====

undefined4 FUN_002abb98(undefined8 param_1)

{
  if ((*(uint *)param_1 & 1) != 0) {
    FUN_002abd18();
  }
  FUN_002cfe90(0x3c3340,param_1);
  (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449438 + iGpffff8de8),param_1);
  return 1;
}


// ==== FUN_002abc08 @ 002abc08 ====

undefined8 FUN_002abc08(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  puVar6 = (uint *)param_1;
  lVar4 = (long)(int)puVar6[3];
  bVar2 = false;
  if ((lVar4 == 4) || (lVar4 == 8)) {
    bVar2 = true;
  }
  if (bVar2) {
    iVar5 = (int)(4L << lVar4);
    uVar3 = puVar6[3];
  }
  else {
    iVar5 = 0;
    uVar3 = puVar6[3];
  }
  uVar3 = ((int)(uVar3 + 7) >> 3) * puVar6[1] + 3 & 0xfffffffc;
  iVar1 = uVar3 * puVar6[2];
  puVar6[4] = uVar3;
  iVar5 = iVar1 + iVar5;
  lVar4 = (*DAT_00449540)(iVar5,0x30018);
  puVar6[5] = (uint)lVar4;
  if (lVar4 == 0) {
    uStack_60 = 1;
    uStack_5c = FUN_002a5548(0xffffffff80000013,iVar5);
    FUN_002a55d8(&uStack_60);
    param_1 = 0;
  }
  else {
    uVar3 = (uint)lVar4 + iVar1;
    if (!bVar2) {
      uVar3 = 0;
    }
    puVar6[6] = uVar3;
    *puVar6 = *puVar6 | 1;
  }
  return param_1;
}


// ==== FUN_002abd18 @ 002abd18 ====

undefined8 FUN_002abd18(undefined8 param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)param_1;
  (*DAT_00449544)(puVar1[5]);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = *puVar1 & 0xfffffffe;
  return param_1;
}


// ==== FUN_002abd68 @ 002abd68 ====

undefined8 FUN_002abd68(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  puVar4 = (uint *)param_1;
  uVar2 = puVar4[3];
  puVar8 = (uint *)param_2;
  if (uVar2 == puVar8[3]) {
    if (puVar4[6] == 0) {
      uVar2 = puVar4[3];
    }
    else {
      if (puVar8[6] != 0) {
        if (8 < (int)uVar2) {
          uVar2 = puVar4[3];
          goto LAB_002abdd0;
        }
        memcpy(puVar4[6],puVar8[6],4 << (uVar2 & 0x1f));
      }
      uVar2 = puVar4[3];
    }
LAB_002abdd0:
    iVar7 = 0;
    uVar1 = puVar4[1];
    uVar6 = puVar8[5];
    uVar5 = puVar4[5];
    if (0 < (int)puVar4[2]) {
      do {
        iVar7 = iVar7 + 1;
        memcpy(uVar5,uVar6,((int)(uVar2 + 7) >> 3) * uVar1);
        uVar5 = uVar5 + puVar4[4];
        uVar6 = uVar6 + puVar8[4];
      } while (iVar7 < (int)puVar4[2]);
      uVar2 = *puVar4;
      goto LAB_002abe40;
    }
  }
  else {
    lVar3 = FUN_002ab538(param_1,param_2);
    if (lVar3 == 0) {
      param_1 = 0;
    }
  }
  uVar2 = *(uint *)param_1;
LAB_002abe40:
  *(uint *)param_1 = uVar2 & 0xfffffffd | *puVar8 & 2;
  return param_1;
}


// ==== FUN_002abe90 @ 002abe90 ====

undefined4 FUN_002abe90(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 1.0 / param_1;
  iVar4 = 1;
  *(undefined1 *)((int)&DAT_00449544 + iGpffff8de8) = 0;
  *(float *)(&DAT_00449644 + iGpffff8de8) = param_1;
  (&DAT_00449444)[iGpffff8de8] = 0;
  fVar7 = 255.0;
  fVar8 = fGpffff803c;
  do {
    iVar2 = iVar4 + 1;
    iVar3 = iVar4 + 2;
    fVar6 = (float)iVar4 * fVar8;
    fVar5 = (float)FUN_0029e688(fVar6,fVar9);
    (&DAT_00449444)[iGpffff8de8 + iVar4] = (char)(int)(fVar5 * fVar7 + 0.5);
    fVar5 = (float)FUN_0029e688(fVar6,param_1);
    iVar1 = iGpffff8de8 + iVar4;
    fVar6 = (float)iVar2 * fVar8;
    iVar4 = iVar4 + 3;
    *(char *)((int)&DAT_00449544 + iVar1) = (char)(int)(fVar5 * fVar7 + 0.5);
    fVar5 = (float)FUN_0029e688(fVar6,fVar9);
    (&DAT_00449444)[iGpffff8de8 + iVar2] = (char)(int)(fVar5 * fVar7 + 0.5);
    fVar5 = (float)FUN_0029e688(fVar6,param_1);
    fVar6 = (float)iVar3 * fVar8;
    *(char *)((int)&DAT_00449544 + iGpffff8de8 + iVar2) = (char)(int)(fVar5 * fVar7 + 0.5);
    fVar5 = (float)FUN_0029e688(fVar6,fVar9);
    (&DAT_00449444)[iGpffff8de8 + iVar3] = (char)(int)(fVar5 * fVar7 + 0.5);
    fVar5 = (float)FUN_0029e688(fVar6,param_1);
    *(char *)((int)&DAT_00449544 + iGpffff8de8 + iVar3) = (char)(int)(fVar5 * fVar7 + 0.5);
  } while (iVar4 < 0x100);
  return 1;
}


// ==== FUN_002ac090 @ 002ac090 ====

undefined4 FUN_002ac090(undefined8 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = 0;
  FUN_002aaf48(param_1,0x14,0x2ac128,auStack_20);
  return auStack_20[0];
}


// ==== FUN_002ac128 @ 002ac128 ====

undefined8 FUN_002ac128(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (*DAT_0044952c)();
  iVar2 = (int)param_1 + iVar2;
  iVar1 = *(int *)(&DAT_00449654 + DAT_0040e5d8);
  while( true ) {
    if (iVar1 == 0) {
      return param_1;
    }
    (*DAT_00449504)(iVar2,iVar1);
    lVar3 = FUN_0032a8f0(param_1);
    if (lVar3 != 0) break;
    (*DAT_00449504)(iVar2,iVar1 + 0x14);
    lVar3 = FUN_0032a8f0(param_1);
    if (lVar3 != 0) {
      *param_2 = iVar1 + 0x14;
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 0x30);
  }
  *param_2 = iVar1;
  return 0;
}


// ==== FUN_002ac210 @ 002ac210 ====

undefined8 FUN_002ac210(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (*DAT_00449498)(param_1,param_2,0);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = param_1, (*(byte *)((int)param_2 + 0x22) & 1) != 0)) {
    *(uint *)param_1 = *(uint *)param_1 | 2;
  }
  return uVar2;
}


// ==== FUN_002ac278 @ 002ac278 ====

undefined8 FUN_002ac278(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (*DAT_0044949c)(param_1,param_2,0);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = param_1, (*(uint *)param_2 & 2) != 0)) {
    *(byte *)((int)param_1 + 0x22) = *(byte *)((int)param_1 + 0x22) | 1;
  }
  return uVar2;
}


// ==== FUN_002ac2e0 @ 002ac2e0 ====

undefined8
FUN_002ac2e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,uint *param_6)

{
  long lVar1;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_80;
  undefined1 uStack_7d;
  
  lVar1 = (*DAT_004494a4)(auStack_a0,param_1,param_2);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    *param_3 = uStack_94;
    *param_6 = (uint)CONCAT11(uStack_7d,uStack_80);
    *param_4 = uStack_90;
    *param_5 = uStack_8c;
  }
  return param_1;
}


// ==== FUN_002ac388 @ 002ac388 ====

undefined8 FUN_002ac388(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
  DAT_0040e5e0 = param_2;
  memset((int)&DAT_00449464 + param_2,0,0x34);
  iVar4 = DAT_0040e5e0;
  uVar3 = DAT_0040df34;
  uVar2 = DAT_0040df30;
  uVar1 = DAT_003c3358;
  iVar7 = (int)&DAT_00449464 + DAT_0040e5e0;
  piVar6 = (int *)((int)&DAT_00449438 + DAT_0040e5e0);
  *(undefined1 *)((int)&DAT_00449484 + DAT_0040e5e0 + 1) = 0x80;
  *piVar6 = iVar7;
  *(undefined4 *)(&DAT_00449470 + iVar4) = 0;
  *(undefined4 *)(&DAT_00449474 + iVar4) = 0;
  *(undefined4 *)(&DAT_00449478 + iVar4) = 0;
  *(undefined4 *)((int)&DAT_00449468 + iVar4) = 0;
  *(undefined4 *)((int)&DAT_0044946c + iVar4) = 0;
  *(undefined1 *)((int)&DAT_00449484 + iVar4) = 0;
  *(undefined4 *)((int)&DAT_00449460 + iVar4) = 0;
  lVar5 = FUN_002a6010(uVar1,uVar2,4,uVar3,0x44d4b0,0x40407);
  *(int *)((int)&DAT_00449498 + DAT_0040e5e0) = (int)lVar5;
  if (lVar5 == 0) {
    param_1 = 0;
  }
  else {
    DAT_0040e5e4 = DAT_0040e5e4 + 1;
  }
  return param_1;
}


// ==== FUN_002ac468 @ 002ac468 ====

long FUN_002ac468(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar2 = (*DAT_00449550)(*(undefined4 *)((int)&DAT_00449498 + DAT_0040e5e0),0x30407);
  pcVar1 = DAT_00449490;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    iVar4 = (int)lVar2;
    *(undefined4 *)(iVar4 + 0xc) = param_1;
    *(undefined4 *)(iVar4 + 0x10) = param_2;
    *(undefined4 *)(iVar4 + 0x14) = param_3;
    *(undefined1 *)(iVar4 + 0x22) = 0;
    *(undefined1 *)(iVar4 + 0x21) = 0;
    *(undefined2 *)(iVar4 + 0x1c) = 0;
    *(undefined2 *)(iVar4 + 0x1e) = 0;
    *(int *)iVar4 = iVar4;
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    lVar3 = (*pcVar1)(0,lVar2,param_4);
    if (lVar3 == 0) {
      (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449498 + DAT_0040e5e0),lVar2);
      lVar2 = 0;
    }
    else {
      FUN_002cfdf8(0x3c3358,lVar2);
    }
  }
  return lVar2;
}


// ==== FUN_002ac568 @ 002ac568 ====

undefined4 FUN_002ac568(undefined8 param_1)

{
  FUN_002cfe90(0x3c3358,param_1);
  (*DAT_00449494)(0,param_1,0);
  (*DAT_00449554)(*(undefined4 *)((int)&DAT_00449498 + DAT_0040e5e0),param_1);
  return 1;
}


// ==== FUN_002ac5d8 @ 002ac5d8 ====

undefined4 FUN_002ac5d8(undefined8 param_1)

{
  long lVar1;
  undefined4 auStack_20 [4];
  
  if ((*(byte *)((int)param_1 + 0x23) & 0x80) == 0) {
    auStack_20[0] = 1;
  }
  else {
    lVar1 = (*DAT_004494f0)(auStack_20,param_1,0);
    if (lVar1 == 0) {
      auStack_20[0] = 0xffffffff;
    }
  }
  return auStack_20[0];
}


// ==== FUN_002ac628 @ 002ac628 ====

undefined8 FUN_002ac628(undefined8 param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)param_1;
  if ((*(byte *)((int)puVar3 + 0x21) & 0x80) != 0) {
    puVar3[3] = *(undefined4 *)(param_3 + 4);
    puVar3[4] = *(undefined4 *)(param_3 + 6);
    puVar4 = (undefined4 *)param_2;
    sVar1 = *(short *)((int)puVar4 + 0x1e);
    *(short *)(puVar3 + 7) = *(short *)(puVar4 + 7) + *param_3;
    *(short *)((int)puVar3 + 0x1e) = sVar1 + param_3[2];
    lVar2 = (*DAT_004494b0)(param_1,param_2,0);
    if (lVar2 != 0) {
      *puVar3 = *puVar4;
      return param_1;
    }
  }
  return 0;
}


// ==== FUN_002ac6e8 @ 002ac6e8 ====

undefined8 FUN_002ac6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = DAT_004494d0;
  FUN_002cf888();
  lVar2 = (*pcVar1)(param_1,param_2,param_3);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_002ac750 @ 002ac750 ====

undefined4 FUN_002ac750(undefined8 param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined4 auStack_20 [4];
  
  lVar1 = (*DAT_004494bc)(auStack_20,param_1,param_3 + (param_2 & 0xff) * 0x100);
  if (lVar1 == 0) {
    auStack_20[0] = 0;
  }
  return auStack_20[0];
}


// ==== FUN_002ac790 @ 002ac790 ====

undefined8 FUN_002ac790(undefined8 param_1)

{
  (*DAT_004494c0)(0,param_1,0);
  return param_1;
}


// ==== FUN_002ac7d0 @ 002ac7d0 ====

undefined4 FUN_002ac7d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 auStack_20 [4];
  
  lVar1 = (*DAT_004494dc)(auStack_20,param_1,param_2);
  if (lVar1 == 0) {
    auStack_20[0] = 0;
  }
  return auStack_20[0];
}


// ==== FUN_002ac808 @ 002ac808 ====

undefined8 FUN_002ac808(undefined8 param_1)

{
  (*DAT_004494e0)(0,param_1,0);
  *(byte *)((int)param_1 + 0x22) = *(byte *)((int)param_1 + 0x22) & 0xe7;
  return param_1;
}


// ==== FUN_002ac850 @ 002ac850 ====

void FUN_002ac850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_002cfac0(0x3c3358,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== FUN_002ac908 @ 002ac908 ====

void FUN_002ac908(int param_1,int param_2,int param_3,int param_4,float *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar6 = param_2 >> 0x10;
  iVar7 = param_3 >> 0x10;
  fVar12 = (float)(param_3 - param_2) * 1.5258789e-05;
  pbVar5 = (byte *)(*(int *)(param_1 + 0x14) + (param_4 >> 0x10) * *(int *)(param_1 + 0x10) +
                   iVar6 * 4);
  if (iVar6 == iVar7) {
    bVar1 = pbVar5[3];
    bVar2 = pbVar5[1];
    bVar3 = pbVar5[2];
    *param_5 = (float)*pbVar5 * fGpffff8040 * fVar12;
    param_5[3] = (float)bVar1 * fGpffff8040 * fVar12;
    param_5[1] = (float)bVar2 * fGpffff8040 * fVar12;
    param_5[2] = (float)bVar3 * fGpffff8040 * fVar12;
  }
  else {
    iVar6 = (iVar6 + 1) * 0x10000;
    bVar1 = pbVar5[1];
    bVar2 = pbVar5[2];
    fVar11 = (float)(iVar6 - param_2) * 1.5258789e-05;
    fVar10 = (float)*pbVar5 * fGpffff8044 * fVar11;
    fVar8 = (float)pbVar5[3] * fGpffff8044 * fVar11;
    *param_5 = fVar10;
    fVar9 = (float)bVar1 * fGpffff8044 * fVar11;
    fVar11 = (float)bVar2 * fGpffff8044 * fVar11;
    param_5[3] = fVar8;
    param_5[1] = fVar9;
    param_5[2] = fVar11;
    pbVar5 = pbVar5 + 4;
    pbVar4 = pbVar5;
    if (iVar6 >> 0x10 != iVar7) {
      do {
        fVar10 = fVar10 + (float)*pbVar4 * fGpffff8044;
        fVar9 = fVar9 + (float)pbVar4[1] * fGpffff8044;
        fVar11 = fVar11 + (float)pbVar4[2] * fGpffff8044;
        fVar8 = fVar8 + (float)pbVar4[3] * fGpffff8044;
        iVar6 = iVar6 + 0x10000;
        pbVar5 = pbVar5 + 4;
        pbVar4 = pbVar4 + 4;
      } while (iVar6 >> 0x10 != iVar7);
      param_5[3] = fVar8;
      param_5[2] = fVar11;
      param_5[1] = fVar9;
      *param_5 = fVar10;
    }
    bVar1 = pbVar5[3];
    bVar2 = pbVar5[1];
    bVar3 = pbVar5[2];
    fVar11 = (float)(param_3 - iVar6) * 1.5258789e-05;
    *param_5 = *param_5 + (float)*pbVar5 * fGpffff8048 * fVar11;
    param_5[1] = param_5[1] + (float)bVar2 * fGpffff8048 * fVar11;
    param_5[2] = param_5[2] + (float)bVar3 * fGpffff8048 * fVar11;
    param_5[3] = param_5[3] + (float)bVar1 * fGpffff8048 * fVar11;
  }
  fVar12 = 1.0 / fVar12;
  *param_5 = *param_5 * fVar12;
  param_5[1] = param_5[1] * fVar12;
  param_5[2] = param_5[2] * fVar12;
  param_5[3] = param_5[3] * fVar12;
  return;
}


// ==== FUN_002acbe8 @ 002acbe8 ====

void FUN_002acbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  iVar3 = (int)param_4;
  fVar7 = (float)(param_5 - iVar3) * 1.5258789e-05;
  pfVar1 = (float *)param_6;
  if (iVar3 >> 0x10 == param_5 >> 0x10) {
    FUN_002ac908();
    fVar5 = pfVar1[1] * fVar7;
    fVar4 = pfVar1[2] * fVar7;
    *pfVar1 = *pfVar1 * fVar7;
    fVar6 = pfVar1[3] * fVar7;
  }
  else {
    iVar2 = ((iVar3 >> 0x10) + 1) * 0x10000;
    FUN_002ac908(param_1,param_2,param_3,param_4,param_6);
    fVar4 = (float)(iVar2 - iVar3) * 1.5258789e-05;
    *pfVar1 = *pfVar1 * fVar4;
    pfVar1[1] = pfVar1[1] * fVar4;
    pfVar1[2] = pfVar1[2] * fVar4;
    pfVar1[3] = pfVar1[3] * fVar4;
    for (; iVar2 >> 0x10 != param_5 >> 0x10; iVar2 = iVar2 + 0x10000) {
      FUN_002ac908(param_1,param_2,param_3,iVar2,&fStack_b0);
      *pfVar1 = fStack_b0 + *pfVar1;
      pfVar1[1] = fStack_ac + pfVar1[1];
      pfVar1[2] = fStack_a8 + pfVar1[2];
      pfVar1[3] = fStack_a4 + pfVar1[3];
    }
    FUN_002ac908(param_1,param_2,param_3,iVar2,&fStack_b0);
    fVar6 = (float)(param_5 - iVar2) * 1.5258789e-05;
    fVar5 = pfVar1[1] + fStack_ac * fVar6;
    fVar4 = pfVar1[2] + fStack_a8 * fVar6;
    *pfVar1 = *pfVar1 + fStack_b0 * fVar6;
    fVar6 = pfVar1[3] + fStack_a4 * fVar6;
  }
  pfVar1[1] = fVar5;
  pfVar1[2] = fVar4;
  pfVar1[3] = fVar6;
  fVar7 = 1.0 / fVar7;
  *pfVar1 = *pfVar1 * fVar7;
  pfVar1[1] = pfVar1[1] * fVar7;
  pfVar1[2] = pfVar1[2] * fVar7;
  pfVar1[3] = pfVar1[3] * fVar7;
  return;
}


// ==== FUN_002ace68 @ 002ace68 ====

uint * FUN_002ace68(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint *puStack_e0;
  uint *puStack_dc;
  int iStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  int iStack_c0;
  undefined4 uStack_bc;
  
  uStack_d4 = param_1[1];
  uStack_d0 = param_1[2];
  uVar9 = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_1 | *param_2 & 2;
  iVar11 = (int)(((float)(int)uVar1 / (float)(int)uStack_d4) * 65536.0);
  iStack_d8 = (int)(((float)(int)uVar9 / (float)(int)uStack_d0) * 65536.0);
  iStack_cc = 0;
  lVar4 = 0;
  puStack_e0 = param_1;
  puStack_dc = param_2;
  if (0 < (int)uStack_d0) {
    do {
      uVar9 = uStack_d4;
      iVar3 = iStack_cc + 1;
      puVar2 = (undefined1 *)(puStack_e0[5] + puStack_e0[4] * iStack_cc);
      iStack_c0 = (int)lVar4;
      iVar10 = iStack_c0 + iStack_d8;
      iStack_cc = iVar3;
      if (0 < (int)uStack_d4) {
        fVar12 = 255.0;
        iVar5 = iVar11 + -1;
        puVar6 = puVar2;
        puVar7 = puVar2;
        puVar8 = puVar2;
        iVar3 = 0;
        if ((uStack_d4 & 1) != 0) {
          uStack_bc = (undefined4)((ulong)lVar4 >> 0x20);
          FUN_002acbe8(puStack_dc,0,iVar5,lVar4,iVar10 + -1,&fStack_f0);
          *puVar2 = (char)(int)(fStack_f0 * fVar12 + 0.5);
          puVar2[1] = (char)(int)(fStack_ec * fVar12 + 0.5);
          puVar2[2] = (char)(int)(fStack_e8 * fVar12 + 0.5);
          puVar2[3] = (char)(int)(fStack_e4 * fVar12 + 0.5);
          iVar5 = iVar5 + iVar11;
          puVar2 = puVar2 + 4;
          uVar9 = uVar9 - 1;
          lVar4 = CONCAT44(uStack_bc,iStack_c0);
          puVar6 = puVar2;
          puVar7 = puVar2;
          puVar8 = puVar2;
          iVar3 = iVar11;
          if (uVar9 == 0) goto LAB_002ad160;
        }
        do {
          iStack_c0 = (int)lVar4;
          uStack_bc = (undefined4)((ulong)lVar4 >> 0x20);
          FUN_002acbe8(puStack_dc,iVar3,iVar5,lVar4,iVar10 + -1,&fStack_f0);
          *puVar6 = (char)(int)(fStack_f0 * fVar12 + 0.5);
          puVar7[1] = (char)(int)(fStack_ec * fVar12 + 0.5);
          puVar8[2] = (char)(int)(fStack_e8 * fVar12 + 0.5);
          puVar2[3] = (char)(int)(fStack_e4 * fVar12 + 0.5);
          FUN_002acbe8(puStack_dc,iVar3 + iVar11,iVar5 + iVar11,CONCAT44(uStack_bc,iStack_c0),
                       iVar10 + -1,&fStack_f0);
          puVar6[4] = (char)(int)(fStack_f0 * fVar12 + 0.5);
          puVar7[5] = (char)(int)(fStack_ec * fVar12 + 0.5);
          puVar8[6] = (char)(int)(fStack_e8 * fVar12 + 0.5);
          puVar2[7] = (char)(int)(fStack_e4 * fVar12 + 0.5);
          iVar5 = iVar5 + iVar11 + iVar11;
          puVar2 = puVar2 + 8;
          uVar9 = uVar9 - 2;
          lVar4 = CONCAT44(uStack_bc,iStack_c0);
          puVar6 = puVar6 + 8;
          puVar7 = puVar7 + 8;
          puVar8 = puVar8 + 8;
          iVar3 = iVar3 + iVar11 + iVar11;
        } while (uVar9 != 0);
      }
LAB_002ad160:
      lVar4 = (long)iVar10;
    } while (iStack_cc < (int)uStack_d0);
  }
  return puStack_e0;
}


// ==== FUN_002ad1b0 @ 002ad1b0 ====

long FUN_002ad1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar1 = FUN_002abaf8(param_2,param_3,0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_002abc08(lVar1);
    if (lVar2 != 0) {
      iVar4 = (int)param_1;
      if (*(int *)(iVar4 + 0xc) == 0x20) {
        lVar2 = FUN_002ace68(lVar1,param_1,0x20);
        if (lVar2 != 0) {
          return lVar1;
        }
      }
      else {
        lVar2 = FUN_002abaf8(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
        if (lVar2 != 0) {
          lVar3 = FUN_002abc08(lVar2);
          if (lVar3 == 0) {
            FUN_002abb98(lVar2);
          }
          else {
            FUN_002abd68(lVar2,param_1);
            lVar3 = FUN_002ace68(lVar1,lVar2);
            if (lVar3 != 0) {
              FUN_002abd18(lVar2);
              FUN_002abb98(lVar2);
              return lVar1;
            }
            FUN_002abd18(lVar2);
            FUN_002abb98(lVar2);
          }
        }
      }
      FUN_002abd18(lVar1);
    }
    FUN_002abb98(lVar1);
  }
  return 0;
}


// ==== FUN_002ad2c8 @ 002ad2c8 ====

void FUN_002ad2c8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 3);
  if ((bVar1 & 1) == 0) {
    piVar4 = *(int **)(param_1 + 0x90);
    if (piVar4 == (int *)(param_1 + 0x90)) {
      iVar5 = *(int *)(param_1 + 0x98);
    }
    else {
      do {
        (*(code *)piVar4[2])();
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)(param_1 + 0x90));
      iVar5 = *(int *)(param_1 + 0x98);
    }
    if (iVar5 != 0) {
      piVar4 = *(int **)(iVar5 + 0x90);
      while( true ) {
        if (piVar4 == (int *)(iVar5 + 0x90)) {
          bVar2 = *(byte *)(iVar5 + 3);
        }
        else {
          do {
            (*(code *)piVar4[2])();
            piVar4 = (int *)*piVar4;
          } while (piVar4 != (int *)(iVar5 + 0x90));
          bVar2 = *(byte *)(iVar5 + 3);
        }
        *(byte *)(iVar5 + 3) = bVar2 & 0xf7;
        FUN_002ad5d8(*(undefined4 *)(iVar5 + 0x98));
        iVar5 = *(int *)(iVar5 + 0x9c);
        if (iVar5 == 0) break;
        piVar4 = *(int **)(iVar5 + 0x90);
      }
    }
  }
  else {
    if ((bVar1 & 4) == 0) {
      piVar4 = *(int **)(param_1 + 0x90);
    }
    else {
      *(int *)(param_1 + 0x50) = (int)*(undefined8 *)(param_1 + 0x10);
      *(int *)(param_1 + 0x54) = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x70) = (int)*(undefined8 *)(param_1 + 0x30);
      *(int *)(param_1 + 0x74) = (int)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x4c);
      piVar4 = *(int **)(param_1 + 0x90);
    }
    if (piVar4 == (int *)(param_1 + 0x90)) {
      iVar5 = *(int *)(param_1 + 0x98);
    }
    else {
      do {
        (*(code *)piVar4[2])();
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)(param_1 + 0x90));
      iVar5 = *(int *)(param_1 + 0x98);
    }
    if (iVar5 != 0) {
      bVar2 = *(byte *)(iVar5 + 3);
      while( true ) {
        if ((bVar1 & 4) != 0 || (bVar2 & 4) != 0) {
          FUN_002a5ac8(iVar5 + 0x50,iVar5 + 0x10,*(int *)(iVar5 + 4) + 0x50);
        }
        piVar4 = *(int **)(iVar5 + 0x90);
        if (piVar4 == (int *)(iVar5 + 0x90)) {
          bVar3 = *(byte *)(iVar5 + 3);
        }
        else {
          do {
            (*(code *)piVar4[2])();
            piVar4 = (int *)*piVar4;
          } while (piVar4 != (int *)(iVar5 + 0x90));
          bVar3 = *(byte *)(iVar5 + 3);
        }
        *(byte *)(iVar5 + 3) = bVar3 & 0xf3;
        FUN_002ad510(*(undefined4 *)(iVar5 + 0x98),bVar1 & 4 | bVar2);
        iVar5 = *(int *)(iVar5 + 0x9c);
        if (iVar5 == 0) break;
        bVar2 = *(byte *)(iVar5 + 3);
      }
    }
  }
  *(byte *)(param_1 + 3) = bVar1 & 0xf0;
  return;
}


// ==== FUN_002ad4a8 @ 002ad4a8 ====

undefined4 FUN_002ad4a8(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_004494f4; (undefined4 **)puVar1 != &DAT_004494f4; puVar1 = (undefined4 *)*puVar1
      ) {
    FUN_002ad2c8(puVar1 + -2);
  }
  DAT_004494f4 = &DAT_004494f4;
  DAT_004494f8 = &DAT_004494f4;
  return 1;
}


// ==== FUN_002ad510 @ 002ad510 ====

void FUN_002ad510(int param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 3);
    while( true ) {
      if (((param_2 | bVar1) & 4) != 0) {
        FUN_002a5ac8(param_1 + 0x50,param_1 + 0x10,*(int *)(param_1 + 4) + 0x50);
      }
      piVar3 = *(int **)(param_1 + 0x90);
      if (piVar3 == (int *)(param_1 + 0x90)) {
        bVar2 = *(byte *)(param_1 + 3);
      }
      else {
        do {
          (*(code *)piVar3[2])();
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)(param_1 + 0x90));
        bVar2 = *(byte *)(param_1 + 3);
      }
      *(byte *)(param_1 + 3) = bVar2 & 0xf3;
      FUN_002ad510(*(undefined4 *)(param_1 + 0x98),param_2 | bVar1);
      param_1 = *(int *)(param_1 + 0x9c);
      if (param_1 == 0) break;
      bVar1 = *(byte *)(param_1 + 3);
    }
  }
  return;
}


// ==== FUN_002ad5d8 @ 002ad5d8 ====

void FUN_002ad5d8(int param_1)

{
  byte bVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = *(int **)(param_1 + 0x90);
    while( true ) {
      if (piVar2 == (int *)(param_1 + 0x90)) {
        bVar1 = *(byte *)(param_1 + 3);
      }
      else {
        do {
          (*(code *)piVar2[2])();
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)(param_1 + 0x90));
        bVar1 = *(byte *)(param_1 + 3);
      }
      *(byte *)(param_1 + 3) = bVar1 & 0xf7;
      FUN_002ad5d8(*(undefined4 *)(param_1 + 0x98));
      param_1 = *(int *)(param_1 + 0x9c);
      if (param_1 == 0) break;
      piVar2 = *(int **)(param_1 + 0x90);
    }
  }
  return;
}


// ==== FUN_002ad668 @ 002ad668 ====

undefined4 FUN_002ad668(undefined8 param_1,int param_2,int *param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 auStack_40a0 [16400];
  
  if (*(int *)(*param_3 + 0x18) != 0) {
    iVar4 = 1 << ((uint)param_5 & 0x1f);
    for (uVar8 = 1; (int)uVar8 < (int)param_4; uVar8 = uVar8 + 1) {
      piVar5 = *(int **)(*param_3 + 0x18);
      piVar6 = *(int **)(param_3[uVar8] + 0x18);
      if ((piVar5 == (int *)0x0) || (piVar6 == (int *)0x0)) {
        uVar8 = 0x40;
        break;
      }
      if (0 < iVar4) {
        if (*piVar5 == *piVar6) {
          for (iVar3 = 1; iVar3 < iVar4; iVar3 = iVar3 + 1) {
            if (piVar5[iVar3] != piVar6[iVar3]) {
              uVar8 = 0x40;
              break;
            }
          }
        }
        else {
          uVar8 = 0x40;
        }
      }
    }
    if (uVar8 == param_4) {
      memcpy(param_1,*(undefined4 *)(*param_3 + 0x18),(int)(4L << (long)*(int *)(*param_3 + 0xc)));
      return 1;
    }
  }
  lVar1 = FUN_002b1e68(auStack_40a0);
  if (lVar1 == 0) {
    return 0;
  }
  if (0 < (int)param_4) {
    uVar2 = -param_4 & 3;
    piVar5 = param_3;
    uVar8 = param_4;
    if (uVar2 != 0) {
      piVar6 = param_3;
      if (uVar2 < 3) {
        if (uVar2 < 2) {
          piVar5 = param_3 + 1;
          uVar8 = param_4 - 1;
          FUN_002afdb0(0x3f800000,auStack_40a0,*param_3);
        }
        piVar6 = piVar5 + 1;
        uVar8 = uVar8 - 1;
        FUN_002afdb0(0x3f800000,auStack_40a0,*piVar5);
      }
      piVar5 = piVar6 + 1;
      uVar8 = uVar8 - 1;
      FUN_002afdb0(0x3f800000,auStack_40a0,*piVar6);
      if (uVar8 == 0) goto LAB_002ad864;
    }
    iVar4 = *piVar5;
    while( true ) {
      uVar8 = uVar8 - 4;
      FUN_002afdb0(0x3f800000,auStack_40a0,iVar4);
      FUN_002afdb0(0x3f800000,auStack_40a0,piVar5[1]);
      FUN_002afdb0(0x3f800000,auStack_40a0,piVar5[2]);
      piVar6 = piVar5 + 3;
      piVar5 = piVar5 + 4;
      FUN_002afdb0(0x3f800000,auStack_40a0,*piVar6);
      if (uVar8 == 0) break;
      iVar4 = *piVar5;
    }
  }
LAB_002ad864:
  FUN_002b0da0(param_1,1 << ((uint)param_5 & 0x1f),auStack_40a0);
  if (0 < (int)param_4) {
    uVar9 = (undefined4)param_1;
    if (((int)param_4 < 1) || (iVar4 = 0, (param_4 & 1) != 0)) {
      iVar4 = *param_3;
      lVar1 = FUN_002abaf8(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),param_5);
      if (lVar1 == 0) {
        return 0;
      }
      FUN_002abc08(lVar1);
      iVar3 = (int)lVar1;
      FUN_002b17c8(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x10),
                   *(undefined4 *)(iVar3 + 0xc),0,auStack_40a0,iVar4);
      *(undefined4 *)(iVar3 + 0x18) = uVar9;
      *param_3 = iVar3;
      if (iVar4 != param_2) {
        FUN_002abb98(iVar4);
      }
      iVar4 = 1;
      param_3 = param_3 + 1;
      if ((int)param_4 < 2) goto LAB_002ad9c0;
    }
    do {
      iVar3 = *param_3;
      lVar1 = FUN_002abaf8(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),param_5);
      if (lVar1 == 0) {
        return 0;
      }
      FUN_002abc08(lVar1);
      iVar7 = (int)lVar1;
      FUN_002b17c8(*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x10),
                   *(undefined4 *)(iVar7 + 0xc),0,auStack_40a0,iVar3);
      *(undefined4 *)(iVar7 + 0x18) = uVar9;
      *param_3 = iVar7;
      if (iVar3 != param_2) {
        FUN_002abb98(iVar3);
      }
      iVar3 = param_3[1];
      lVar1 = FUN_002abaf8(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),param_5);
      if (lVar1 == 0) {
        return 0;
      }
      FUN_002abc08(lVar1);
      iVar7 = (int)lVar1;
      FUN_002b17c8(*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x10),
                   *(undefined4 *)(iVar7 + 0xc),0,auStack_40a0,iVar3);
      *(undefined4 *)(iVar7 + 0x18) = uVar9;
      param_3[1] = iVar7;
      if (iVar3 != param_2) {
        FUN_002abb98(iVar3);
      }
      iVar4 = iVar4 + 2;
      param_3 = param_3 + 2;
    } while (iVar4 < (int)param_4);
  }
LAB_002ad9c0:
  FUN_002b1f90(auStack_40a0);
  return 1;
}


// ==== FUN_002ad9f8 @ 002ad9f8 ====

long FUN_002ad9f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_8ae0 [255];
  undefined1 uStack_89e1;
  undefined1 auStack_89e0 [255];
  undefined1 uStack_88e1;
  undefined4 uStack_88e0;
  undefined4 uStack_88dc;
  undefined4 uStack_88d0;
  undefined4 uStack_88cc;
  undefined4 uStack_88c0;
  undefined4 uStack_88bc;
  undefined1 auStack_88b0 [1024];
  undefined1 auStack_84b0 [16400];
  undefined1 auStack_44a0 [1024];
  undefined1 auStack_40a0 [16400];
  
  (*DAT_00449508)(auStack_8ae0,param_1,0x100);
  uVar3 = (*DAT_0044952c)(param_1);
  if (0xff < uVar3) {
    uStack_88e0 = 1;
    uStack_88dc = FUN_002a5548(0xffffffff8000001e,param_1,0x100,0xff,
                               *(undefined1 *)((int)param_1 + 0xff));
    FUN_002a55d8(&uStack_88e0);
    uStack_89e1 = 0;
  }
  lVar4 = FUN_002ac090(param_1);
  if (lVar4 != 0) {
    (*DAT_0044950c)(auStack_8ae0);
  }
  auStack_89e0[0] = 0;
  if ((param_2 != 0) && (*(char *)param_2 != '\0')) {
    (*DAT_00449508)(auStack_89e0,param_2,0x100);
    uVar3 = (*DAT_0044952c)(param_2);
    if (0xff < uVar3) {
      uStack_88d0 = 1;
      uStack_88cc = FUN_002a5548(0xffffffff8000001e,param_2,0x100,0xff,((char *)param_2)[0xff]);
      FUN_002a55d8(&uStack_88d0);
      uStack_88e1 = 0;
    }
    lVar4 = FUN_002ac090(param_2);
    if (lVar4 != 0) {
      (*DAT_0044950c)(auStack_89e0);
    }
  }
  lVar4 = FUN_002ab378(auStack_8ae0,auStack_89e0);
  if (lVar4 == 0) {
    return 0;
  }
  piVar8 = (int *)param_4;
  piVar9 = (int *)param_5;
  iVar7 = (int)lVar4;
  if ((*piVar8 == 0) || (*piVar9 == 0)) {
    lVar5 = FUN_002ac2e0(lVar4,param_3,param_4,param_5,param_6,param_7);
    if (lVar5 == 0) {
      FUN_002abb98(lVar4);
      uStack_88c0 = 1;
      uStack_88bc = FUN_002a5548(0xffffffff80000009);
      FUN_002a55d8(&uStack_88c0);
      return 0;
    }
    iVar1 = *(int *)(iVar7 + 4);
  }
  else {
    iVar1 = *(int *)(iVar7 + 4);
  }
  if ((iVar1 == *piVar8) && (*(int *)(iVar7 + 8) == *piVar9)) {
    return lVar4;
  }
  iVar2 = *(int *)(iVar7 + 0xc);
  if (iVar2 == 0x20) {
    iVar7 = *piVar8;
  }
  else {
    lVar5 = FUN_002abaf8(iVar1,*(undefined4 *)(iVar7 + 8),0x20);
    if (lVar5 == 0) goto LAB_002adc8c;
    lVar6 = FUN_002abc08(lVar5);
    if (lVar6 == 0) {
      FUN_002abb98(lVar5);
      goto LAB_002adc8c;
    }
    FUN_002abd68(lVar5,lVar4);
    FUN_002abb98(lVar4);
    iVar7 = *piVar8;
    lVar4 = lVar5;
  }
  lVar5 = FUN_002abaf8(iVar7,*piVar9,0x20);
  if (lVar5 != 0) {
    lVar6 = FUN_002abc08(lVar5);
    if (lVar6 != 0) {
      FUN_002ace68(lVar5,lVar4);
      FUN_002abb98(lVar4);
      iVar7 = (int)lVar5;
      if (iVar2 != 4) {
        if (iVar2 != 8) {
          return lVar5;
        }
        lVar4 = FUN_002b1e68(auStack_40a0);
        if (lVar4 == 0) {
          return lVar5;
        }
        FUN_002afdb0(0x3f800000,auStack_40a0,lVar5);
        FUN_002b0da0(auStack_44a0,0x100,auStack_40a0);
        lVar4 = FUN_002abaf8(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),8);
        if (lVar4 == 0) {
          return lVar5;
        }
        FUN_002abc08(lVar4);
        iVar7 = (int)lVar4;
        FUN_002b17c8(*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x10),
                     *(undefined4 *)(iVar7 + 0xc),0,auStack_40a0,lVar5);
        memcpy(*(undefined4 *)(iVar7 + 0x18),auStack_44a0,0x400);
        FUN_002abb98(lVar5);
        FUN_002b1f90(auStack_40a0);
        return lVar4;
      }
      lVar4 = FUN_002b1e68(auStack_84b0);
      if (lVar4 == 0) {
        return lVar5;
      }
      FUN_002afdb0(0x3f800000,auStack_84b0,lVar5);
      FUN_002b0da0(auStack_88b0,0x10,auStack_84b0);
      lVar4 = FUN_002abaf8(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),4);
      if (lVar4 == 0) {
        return lVar5;
      }
      FUN_002abc08(lVar4);
      iVar7 = (int)lVar4;
      FUN_002b17c8(*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x10),
                   *(undefined4 *)(iVar7 + 0xc),0,auStack_84b0,lVar5);
      memcpy(*(undefined4 *)(iVar7 + 0x18),auStack_88b0,0x40);
      FUN_002abb98(lVar5);
      FUN_002b1f90(auStack_84b0);
      return lVar4;
    }
    FUN_002abb98(lVar5);
  }
LAB_002adc8c:
  FUN_002abb98(lVar4);
  return 0;
}


// ==== FUN_002ade38 @ 002ade38 ====

long FUN_002ade38(undefined8 param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_6a0 [1024];
  undefined1 auStack_2a0 [255];
  undefined1 uStack_1a1;
  undefined1 auStack_1a0 [255];
  undefined1 uStack_a1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int aiStack_70 [4];
  
  (*DAT_00449508)(auStack_2a0,param_1,0x100);
  uVar2 = (*DAT_0044952c)(param_1);
  if (0xff < uVar2) {
    uStack_a0 = 1;
    uStack_9c = FUN_002a5548(0xffffffff8000001e,param_1,0x100,0xff,
                             *(undefined1 *)((int)param_1 + 0xff));
    FUN_002a55d8(&uStack_a0);
    uStack_1a1 = 0;
  }
  auStack_1a0[0] = 0;
  if ((param_2 != 0) && (*(char *)param_2 != '\0')) {
    (*DAT_00449508)(auStack_1a0,param_2,0x100);
    uVar2 = (*DAT_0044952c)(param_2);
    if (0xff < uVar2) {
      uStack_90 = 1;
      uStack_8c = FUN_002a5548(0xffffffff8000001e,param_2,0x100,0xff,((char *)param_2)[0xff]);
      FUN_002a55d8(&uStack_90);
      uStack_a1 = 0;
    }
  }
  FUN_002af118(auStack_2a0,auStack_1a0,0,4);
  uStack_80 = 0;
  uStack_7c = 0;
  lVar3 = FUN_002ad9f8(auStack_2a0,auStack_1a0,4,&uStack_80,&uStack_7c,&uStack_78,&uStack_74);
  aiStack_70[0] = (int)lVar3;
  if (lVar3 != 0) {
    lVar3 = FUN_002ac468(uStack_80,uStack_7c,uStack_78,uStack_74);
    if (lVar3 != 0) {
      bVar1 = *(byte *)((int)lVar3 + 0x23);
      if ((bVar1 & 0x60) != 0) {
        if ((bVar1 & 0x40) == 0) {
          FUN_002ad668(auStack_6a0,0,aiStack_70,1,8);
        }
        else {
          FUN_002ad668(auStack_6a0,0,aiStack_70,1,4);
        }
        *(undefined1 **)(aiStack_70[0] + 0x18) = auStack_6a0;
      }
      FUN_002ab8e0(aiStack_70[0]);
      lVar4 = FUN_002ac278(lVar3,aiStack_70[0]);
      if (lVar4 != 0) {
        FUN_002abb98(aiStack_70[0]);
        lVar4 = FUN_002af300(lVar3);
        if (lVar4 == 0) {
          FUN_002ac568(lVar3);
          return 0;
        }
        FUN_002af1a0(lVar4,param_1);
        if (param_2 == 0) {
          FUN_002af240(lVar4,0x40df40);
          return lVar4;
        }
        FUN_002af240(lVar4,param_2);
        return lVar4;
      }
      FUN_002ac568(lVar3);
    }
    FUN_002abb98(aiStack_70[0]);
  }
  return 0;
}


// ==== FUN_002ae0b0 @ 002ae0b0 ====

long FUN_002ae0b0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 auStack_748 [18];
  undefined1 auStack_700 [1024];
  undefined1 auStack_300 [255];
  undefined1 uStack_201;
  undefined1 auStack_200 [255];
  undefined1 uStack_101;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  
  puVar9 = auStack_748 + 2;
  puVar10 = auStack_748 + 2;
  puVar7 = auStack_748 + 2;
  puVar8 = auStack_748 + 2;
  (*DAT_00449508)(auStack_300,param_1,0x100);
  uVar3 = (*DAT_0044952c)(param_1);
  if (0xff < uVar3) {
    uStack_100 = 1;
    uStack_fc = FUN_002a5548(0xffffffff8000001e,param_1,0x100,0xff,
                             *(undefined1 *)((int)param_1 + 0xff));
    FUN_002a55d8(&uStack_100);
    uStack_201 = 0;
  }
  auStack_200[0] = 0;
  pcVar11 = (char *)param_2;
  if ((param_2 != 0) && (*pcVar11 != '\0')) {
    (*DAT_00449508)(auStack_200,param_2,0x100);
    uVar3 = (*DAT_0044952c)(param_2);
    if (0xff < uVar3) {
      uStack_f0 = 1;
      uStack_ec = FUN_002a5548(0xffffffff8000001e,param_2,0x100,0xff,pcVar11[0xff]);
      FUN_002a55d8(&uStack_f0);
      uStack_101 = 0;
    }
  }
  uStack_b0 = 4;
  if ((*(int *)((int)&DAT_00449454 + iGpffff8df8) != 0) &&
     (uStack_b0 = 0x8004, *(int *)((int)&DAT_00449458 + iGpffff8df8) != 0)) {
    uStack_b0 = 0x9004;
  }
  FUN_002af118(auStack_300,auStack_200,0,uStack_b0);
  uStack_c0 = 0;
  uStack_bc = 0;
  lVar4 = FUN_002ad9f8(auStack_300,auStack_200,uStack_b0,&uStack_c0,&uStack_bc,&uStack_b8,&uStack_b4
                      );
  auStack_748[2] = (undefined4)lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = FUN_002ac468(uStack_c0,uStack_bc,uStack_b8,uStack_b4);
  if (lVar4 == 0) {
LAB_002ae6f0:
    FUN_002abb98(auStack_748[2]);
    lVar5 = 0;
  }
  else {
    if ((uStack_b4 & 0x8000) == 0) {
      FUN_002ab8e0(auStack_748[2]);
      lVar5 = FUN_002ac278(lVar4,auStack_748[2]);
      if (lVar5 == 0) {
LAB_002ae6e8:
        FUN_002ac568(lVar4);
        goto LAB_002ae6f0;
      }
      FUN_002abb98(auStack_748[2]);
    }
    else if ((uStack_b4 & 0x1000) == 0) {
      uVar13 = 1;
      iVar2 = FUN_002ac5d8(lVar4,auStack_748[2]);
      iVar14 = (int)lVar4;
      if (1 < iVar2) {
        iVar15 = 4;
        puStack_ac = auStack_748 + 3;
LAB_002ae2b8:
        (*DAT_00449508)(auStack_300,param_1,0x100);
        uVar3 = (*DAT_0044952c)(param_1);
        if (0xff < uVar3) {
          uStack_e0 = 1;
          uStack_dc = FUN_002a5548(0xffffffff8000001e,param_1,0x100,0xff,
                                   *(undefined1 *)((int)param_1 + 0xff));
          FUN_002a55d8(&uStack_e0);
          uStack_201 = 0;
        }
        auStack_200[0] = 0;
        if ((param_2 != 0) && (*pcVar11 != '\0')) {
          (*DAT_00449508)(auStack_200,param_2,0x100);
          uVar3 = (*DAT_0044952c)(param_2);
          if (0xff < uVar3) {
            uStack_d0 = 1;
            uStack_cc = FUN_002a5548(0xffffffff8000001e,param_2,0x100,0xff,pcVar11[0xff]);
            FUN_002a55d8(&uStack_d0);
            uStack_101 = 0;
          }
        }
        FUN_002af118(auStack_300,auStack_200,uVar13 & 0xff,uStack_b0);
        FUN_002ac750(lVar4,uVar13 & 0xff,5);
        uStack_c0 = *(undefined4 *)(iVar14 + 0xc);
        uStack_bc = *(undefined4 *)(iVar14 + 0x10);
        uStack_b4 = (uint)CONCAT11(*(undefined1 *)(iVar14 + 0x23),*(undefined1 *)(iVar14 + 0x20));
        uStack_b8 = *(undefined4 *)(iVar14 + 0x14);
        FUN_002ac790(lVar4);
        lVar5 = FUN_002ad9f8(auStack_300,auStack_200,uStack_b0,&uStack_c0,&uStack_bc,&uStack_b8,
                             &uStack_b4);
        *puStack_ac = (int)lVar5;
        if (lVar5 != 0) goto LAB_002ae4b8;
        uVar12 = uVar13 - 1;
        if ((int)uVar12 < 0) goto LAB_002ae71c;
        puVar7 = (undefined4 *)((int)auStack_748 + iVar15 + 4);
        uVar6 = ~uVar12 & 3;
        if (uVar6 != 0) {
          if (uVar6 < 3) {
            if (uVar6 < 2) {
              uVar1 = *puVar7;
              puVar7 = (undefined4 *)((int)auStack_748 + iVar15);
              uVar12 = uVar13 - 2;
              FUN_002abb98(uVar1);
              uVar1 = *puVar7;
            }
            else {
              uVar1 = *puVar7;
            }
            uVar12 = uVar12 - 1;
            puVar7 = puVar7 + -1;
            FUN_002abb98(uVar1);
          }
          uVar1 = *puVar7;
          uVar12 = uVar12 - 1;
          puVar7 = puVar7 + -1;
          FUN_002abb98(uVar1);
          if ((int)uVar12 < 0) goto LAB_002ae71c;
        }
        uVar1 = *puVar7;
        while( true ) {
          uVar12 = uVar12 - 4;
          FUN_002abb98(uVar1);
          FUN_002abb98(puVar7[-1]);
          FUN_002abb98(puVar7[-2]);
          puVar8 = puVar7 + -3;
          puVar7 = puVar7 + -4;
          FUN_002abb98(*puVar8);
          if ((int)uVar12 < 0) break;
          uVar1 = *puVar7;
        }
        goto LAB_002ae71c;
      }
LAB_002ae4d4:
      if ((*(byte *)(iVar14 + 0x23) & 0x60) == 0) {
        if (0 < iVar2) {
          uVar13 = -iVar2 & 3;
          iVar14 = iVar2;
          if (uVar13 != 0) {
            if (uVar13 < 3) {
              if (uVar13 < 2) {
                iVar14 = iVar2 + -1;
                FUN_002ab8e0(auStack_748[2]);
                puVar7 = (undefined4 *)((uint)(auStack_748 + 2) | 4);
              }
              iVar14 = iVar14 + -1;
              puVar8 = puVar7 + 1;
              FUN_002ab8e0(*puVar7);
            }
            iVar14 = iVar14 + -1;
            puVar9 = puVar8 + 1;
            FUN_002ab8e0(*puVar8);
            if (iVar14 == 0) goto LAB_002ae5c4;
          }
          uVar1 = *puVar9;
          while( true ) {
            iVar14 = iVar14 + -4;
            FUN_002ab8e0(uVar1);
            FUN_002ab8e0(puVar9[1]);
            FUN_002ab8e0(puVar9[2]);
            puVar7 = puVar9 + 3;
            puVar9 = puVar9 + 4;
            FUN_002ab8e0(*puVar7);
            if (iVar14 == 0) break;
            uVar1 = *puVar9;
          }
        }
      }
      else {
        if ((*(byte *)(iVar14 + 0x23) & 0x40) == 0) {
          FUN_002ad668(auStack_700,0,auStack_748 + 2,iVar2,8);
        }
        else {
          FUN_002ad668(auStack_700,0,auStack_748 + 2,iVar2,4);
        }
        FUN_002ab8e0(auStack_748[2]);
      }
LAB_002ae5c4:
      uVar13 = 0;
      if (0 < iVar2) {
        do {
          lVar5 = FUN_002ac750(lVar4,uVar13 & 0xff,5);
          if (lVar5 != 0) {
            lVar5 = FUN_002ac278(lVar4,*puVar10);
            if (lVar5 != 0) {
              FUN_002ac790(lVar4);
              uVar1 = *puVar10;
              goto LAB_002ae6ac;
            }
            if (iVar2 <= (int)uVar13) goto LAB_002ae71c;
            iVar2 = iVar2 - uVar13;
            puVar7 = auStack_748 + uVar13 + 2;
            uVar12 = -iVar2 & 3;
            if (uVar12 != 0) {
              if (uVar12 < 3) {
                if (uVar12 < 2) {
                  uVar1 = *puVar7;
                  puVar7 = auStack_748 + uVar13 + 3;
                  iVar2 = iVar2 + -1;
                  FUN_002abb98(uVar1);
                  uVar1 = *puVar7;
                }
                else {
                  uVar1 = *puVar7;
                }
                iVar2 = iVar2 + -1;
                puVar7 = puVar7 + 1;
                FUN_002abb98(uVar1);
              }
              uVar1 = *puVar7;
              iVar2 = iVar2 + -1;
              puVar7 = puVar7 + 1;
              FUN_002abb98(uVar1);
              if (iVar2 == 0) goto LAB_002ae71c;
            }
            uVar1 = *puVar7;
            while( true ) {
              iVar2 = iVar2 + -4;
              FUN_002abb98(uVar1);
              FUN_002abb98(puVar7[1]);
              FUN_002abb98(puVar7[2]);
              puVar8 = puVar7 + 3;
              puVar7 = puVar7 + 4;
              FUN_002abb98(*puVar8);
              if (iVar2 == 0) break;
              uVar1 = *puVar7;
            }
            goto LAB_002ae71c;
          }
          uVar1 = *puVar10;
LAB_002ae6ac:
          uVar13 = uVar13 + 1;
          puVar10 = puVar10 + 1;
          FUN_002abb98(uVar1);
        } while ((int)uVar13 < iVar2);
      }
    }
    else {
      lVar5 = FUN_002ac278(lVar4);
      if (lVar5 == 0) goto LAB_002ae6e8;
      FUN_002abb98(auStack_748[2]);
    }
    lVar5 = FUN_002af300(lVar4);
    if (lVar5 == 0) {
LAB_002ae71c:
      FUN_002ac568(lVar4);
      lVar5 = 0;
    }
    else {
      FUN_002af1a0(lVar5,param_1);
      if (param_2 == 0) {
        FUN_002af240(lVar5,0x40df40);
      }
      else {
        FUN_002af240(lVar5,param_2);
      }
    }
  }
  return lVar5;
LAB_002ae4b8:
  uVar13 = uVar13 + 1;
  iVar15 = iVar15 + 4;
  puStack_ac = puStack_ac + 1;
  if (iVar2 <= (int)uVar13) goto LAB_002ae4d4;
  goto LAB_002ae2b8;
}


// ==== FUN_002ae790 @ 002ae790 ====

undefined8 FUN_002ae790(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
  int aiStack_4c8 [18];
  undefined1 auStack_480 [1024];
  
  piVar10 = aiStack_4c8 + 2;
  piVar11 = aiStack_4c8 + 2;
  piVar12 = aiStack_4c8 + 2;
  piVar13 = aiStack_4c8 + 2;
  piVar15 = aiStack_4c8 + 2;
  piVar14 = aiStack_4c8 + 2;
  iVar17 = (int)param_1;
  if (param_2 == 0) {
    lVar4 = FUN_002abaf8(*(undefined4 *)(iVar17 + 0xc),*(undefined4 *)(iVar17 + 0x10),0x20);
    aiStack_4c8[2] = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = FUN_002abc08(lVar4);
    if (lVar4 == 0) {
      return 0;
    }
    FUN_002ac210(aiStack_4c8[2],param_1);
  }
  else {
    aiStack_4c8[2] = param_2;
    if (*(int *)(param_2 + 0xc) != 0x20) {
      lVar4 = FUN_002abaf8(*(undefined4 *)(iVar17 + 0xc),*(undefined4 *)(iVar17 + 0x10),0x20);
      aiStack_4c8[2] = (int)lVar4;
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = FUN_002abc08(lVar4);
      if (lVar4 == 0) {
        return 0;
      }
      FUN_002abd68(aiStack_4c8[2],param_2);
    }
  }
  if (aiStack_4c8[2] == 0) {
    return 0;
  }
  uVar18 = 1;
  bVar19 = *(byte *)(iVar17 + 0x23) & 0x10;
  *(byte *)(iVar17 + 0x23) = *(byte *)(iVar17 + 0x23) & ~bVar19;
  uVar2 = FUN_002ac5d8(param_1);
  if ((int)uVar2 < 2) {
    bVar5 = *(byte *)(iVar17 + 0x23);
  }
  else {
    piVar9 = aiStack_4c8 + 3;
    iVar16 = 4;
    do {
      *piVar9 = 0;
      lVar4 = FUN_002ac750(param_1,uVar18 & 0xff,2);
      if (lVar4 == 0) {
        iVar3 = *piVar9;
      }
      else {
        iVar3 = FUN_002ad1b0(piVar9[-1],*(undefined4 *)(iVar17 + 0xc),*(undefined4 *)(iVar17 + 0x10)
                            );
        *piVar9 = iVar3;
        FUN_002ac790(param_1);
        iVar3 = *piVar9;
      }
      if (iVar3 == 0) {
        uVar2 = uVar18 - 1;
        if (-1 < (int)uVar2) {
          piVar10 = (int *)((int)aiStack_4c8 + iVar16 + 4);
          uVar6 = ~uVar2 & 3;
          if (uVar6 == 0) goto LAB_002ae948;
          if (uVar6 < 3) {
            if (uVar6 < 2) {
              iVar3 = *piVar10;
              piVar10 = (int *)((int)aiStack_4c8 + iVar16);
              if (iVar3 != param_2) {
                FUN_002abb98();
              }
              uVar2 = uVar18 - 2;
              iVar16 = *piVar10;
            }
            else {
              iVar16 = *piVar10;
            }
            piVar10 = piVar10 + -1;
            if (iVar16 != param_2) {
              FUN_002abb98();
            }
            uVar2 = uVar2 - 1;
          }
          uVar2 = uVar2 - 1;
          if (*piVar10 != param_2) {
            FUN_002abb98();
          }
          piVar10 = piVar10 + -1;
          while (-1 < (int)uVar2) {
LAB_002ae948:
            if (*piVar10 == param_2) {
              iVar16 = piVar10[-1];
            }
            else {
              FUN_002abb98();
              iVar16 = piVar10[-1];
            }
            if (iVar16 == param_2) {
              iVar16 = piVar10[-2];
            }
            else {
              FUN_002abb98();
              iVar16 = piVar10[-2];
            }
            if (iVar16 == param_2) {
              iVar16 = piVar10[-3];
            }
            else {
              FUN_002abb98();
              iVar16 = piVar10[-3];
            }
            uVar2 = uVar2 - 4;
            if (iVar16 != param_2) {
              FUN_002abb98();
            }
            piVar10 = piVar10 + -4;
          }
        }
        bVar5 = *(byte *)(iVar17 + 0x23);
        param_1 = 0;
        goto LAB_002aed20;
      }
      uVar18 = uVar18 + 1;
      piVar9 = piVar9 + 1;
      iVar16 = iVar16 + 4;
    } while ((int)uVar18 < (int)uVar2);
    bVar5 = *(byte *)(iVar17 + 0x23);
  }
  if ((bVar5 & 0x60) == 0) {
    if (0 < (int)uVar2) {
      uVar6 = -uVar2 & 3;
      uVar18 = uVar2;
      if (uVar6 != 0) {
        if (uVar6 < 3) {
          if (uVar6 < 2) {
            uVar18 = uVar2 - 1;
            FUN_002ab8e0(aiStack_4c8[2]);
            piVar11 = (int *)((uint)(aiStack_4c8 + 2) | 4);
          }
          uVar18 = uVar18 - 1;
          piVar12 = piVar11 + 1;
          FUN_002ab8e0(*piVar11);
        }
        uVar18 = uVar18 - 1;
        piVar10 = piVar12 + 1;
        FUN_002ab8e0(*piVar12);
        if (uVar18 == 0) goto LAB_002aeafc;
      }
      uVar8 = *piVar10;
      while( true ) {
        uVar18 = uVar18 - 4;
        FUN_002ab8e0(uVar8);
        FUN_002ab8e0(piVar10[1]);
        FUN_002ab8e0(piVar10[2]);
        puVar1 = piVar10 + 3;
        piVar10 = piVar10 + 4;
        FUN_002ab8e0(*puVar1);
        if (uVar18 == 0) break;
        uVar8 = *piVar10;
      }
    }
  }
  else {
    if ((bVar5 & 0x40) == 0) {
      lVar4 = FUN_002ad668(auStack_480,param_2,aiStack_4c8 + 2,uVar2,8);
      if ((lVar4 == 0) && (0 < (int)uVar2)) {
        if (aiStack_4c8[2] == param_2) {
          bVar5 = *(byte *)(iVar17 + 0x23);
        }
        else {
          FUN_002abb98();
          bVar5 = *(byte *)(iVar17 + 0x23);
        }
        param_1 = 0;
        goto LAB_002aed20;
      }
    }
    else {
      lVar4 = FUN_002ad668(auStack_480,param_2,aiStack_4c8 + 2,uVar2,4);
      if ((lVar4 == 0) && (0 < (int)uVar2)) {
        if (aiStack_4c8[2] == param_2) {
          bVar5 = *(byte *)(iVar17 + 0x23);
        }
        else {
          FUN_002abb98();
          bVar5 = *(byte *)(iVar17 + 0x23);
        }
        param_1 = 0;
        goto LAB_002aed20;
      }
    }
    FUN_002ab8e0(aiStack_4c8[2]);
  }
LAB_002aeafc:
  uVar18 = 0;
  uVar6 = 0;
  if (0 < (int)uVar2) {
    uVar7 = uVar2 & 3;
    if (0 < (int)uVar2) {
      if (uVar7 == 0) goto LAB_002aec04;
      uVar8 = 0;
      piVar14 = aiStack_4c8 + 2;
      uVar18 = uVar6;
      if (1 < uVar7) {
        if (2 < uVar7) {
          lVar4 = FUN_002ac750(param_1,0,5);
          if (lVar4 != 0) {
            FUN_002ac278(param_1,aiStack_4c8[2]);
            FUN_002ac790(param_1);
          }
          if (aiStack_4c8[2] != param_2) {
            FUN_002abb98();
          }
          piVar13 = (int *)((uint)(aiStack_4c8 + 2) | 4);
          uVar8 = 1;
          uVar6 = 1;
        }
        lVar4 = FUN_002ac750(param_1,uVar8,5);
        if (lVar4 == 0) {
          iVar16 = *piVar13;
        }
        else {
          FUN_002ac278(param_1,*piVar13);
          FUN_002ac790(param_1);
          iVar16 = *piVar13;
        }
        piVar14 = piVar13 + 1;
        if (iVar16 != param_2) {
          FUN_002abb98();
        }
        uVar18 = uVar6 + 1;
      }
    }
    lVar4 = FUN_002ac750(param_1,uVar18,5);
    if (lVar4 == 0) {
      iVar16 = *piVar14;
    }
    else {
      FUN_002ac278(param_1,*piVar14);
      FUN_002ac790(param_1);
      iVar16 = *piVar14;
    }
    uVar18 = uVar18 + 1;
    if (iVar16 != param_2) {
      FUN_002abb98();
    }
    piVar15 = piVar14 + 1;
    while ((int)uVar18 < (int)uVar2) {
LAB_002aec04:
      lVar4 = FUN_002ac750(param_1,uVar18 & 0xff,5);
      if (lVar4 == 0) {
        iVar16 = *piVar15;
      }
      else {
        FUN_002ac278(param_1,*piVar15);
        FUN_002ac790(param_1);
        iVar16 = *piVar15;
      }
      if (iVar16 != param_2) {
        FUN_002abb98();
      }
      lVar4 = FUN_002ac750(param_1,uVar18 + 1 & 0xff,5);
      if (lVar4 == 0) {
        iVar16 = piVar15[1];
      }
      else {
        FUN_002ac278(param_1,piVar15[1]);
        FUN_002ac790(param_1);
        iVar16 = piVar15[1];
      }
      if (iVar16 != param_2) {
        FUN_002abb98();
      }
      lVar4 = FUN_002ac750(param_1,uVar18 + 2 & 0xff,5);
      if (lVar4 == 0) {
        iVar16 = piVar15[2];
      }
      else {
        FUN_002ac278(param_1,piVar15[2]);
        FUN_002ac790(param_1);
        iVar16 = piVar15[2];
      }
      if (iVar16 != param_2) {
        FUN_002abb98();
      }
      lVar4 = FUN_002ac750(param_1,uVar18 + 3 & 0xff,5);
      if (lVar4 == 0) {
        iVar16 = piVar15[3];
      }
      else {
        FUN_002ac278(param_1,piVar15[3]);
        FUN_002ac790(param_1);
        iVar16 = piVar15[3];
      }
      uVar18 = uVar18 + 4;
      if (iVar16 != param_2) {
        FUN_002abb98();
      }
      piVar15 = piVar15 + 4;
    }
  }
  bVar5 = *(byte *)(iVar17 + 0x23);
LAB_002aed20:
  *(byte *)(iVar17 + 0x23) = bVar5 | bVar19;
  return param_1;
}


// ==== FUN_002aed50 @ 002aed50 ====

undefined8 FUN_002aed50(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  
  if (*(int *)(&DAT_0044945c + iGpffff8df8) != 0) {
    (*DAT_00449544)();
    *(undefined2 *)((int)&DAT_00449460 + iGpffff8df8) = 0;
    *(undefined4 *)(&DAT_0044945c + iGpffff8df8) = 0;
  }
  if (*(int *)(&DAT_00449440 + iGpffff8df8) != 0) {
    if (*(int *)(&DAT_00449444 + iGpffff8df8) != 0) {
      piVar2 = *(int **)((int)&DAT_00449438 + iGpffff8df8);
      do {
        piVar3 = piVar2;
        if (piVar3 == (int *)((int)&DAT_00449438 + iGpffff8df8)) goto LAB_002aee60;
        piVar5 = piVar3 + -4;
        piVar2 = (int *)*piVar3;
      } while (piVar5 != piGpffff8748);
      if (*(int **)((int)&DAT_00449448 + iGpffff8df8) == piVar5) {
        *(undefined4 *)((int)&DAT_00449448 + iGpffff8df8) = 0;
      }
      FUN_002af530(piVar5,0x2af388,0);
      FUN_002cfe90(0x3c3388,piVar5);
      pcVar4 = DAT_00449554;
      iVar1 = *piVar3;
      piVar2 = (int *)piVar3[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      (*pcVar4)(*(undefined4 *)(&DAT_00449444 + iGpffff8df8),piVar5);
      piGpffff8748 = (int *)0x0;
    }
LAB_002aee60:
    if (*(int *)(&DAT_00449440 + iGpffff8df8) != 0) {
      FUN_002a65f0();
      *(undefined4 *)(&DAT_00449440 + iGpffff8df8) = 0;
    }
  }
  if (*(int *)(&DAT_00449444 + iGpffff8df8) != 0) {
    FUN_002a65f0();
    *(undefined4 *)(&DAT_00449444 + iGpffff8df8) = 0;
  }
  iGpffff8dfc = iGpffff8dfc + -1;
  return param_1;
}


// ==== FUN_002aeee0 @ 002aeee0 ====

undefined8 FUN_002aeee0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iGpffff8df8 = param_2;
  lVar2 = FUN_002a6010(DAT_003c3370,uGpffff8760,4,uGpffff8764,0x44d4d8,0x40006);
  *(int *)(&DAT_00449440 + iGpffff8df8) = (int)lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_002a6010(DAT_003c3388,uGpffff8768,4,uGpffff876c,0x44d500,0x40408);
    iVar3 = (int)&DAT_00449438 + iGpffff8df8;
    *(int *)(&DAT_00449444 + iGpffff8df8) = (int)lVar2;
    pcVar1 = DAT_00449550;
    if (lVar2 == 0) {
      FUN_002a65f0(*(undefined4 *)(&DAT_00449440 + iGpffff8df8));
    }
    else {
      iGpffff8dfc = iGpffff8dfc + 1;
      *(int *)(&DAT_0044943c + iGpffff8df8) = iVar3;
      *(int *)iVar3 = iVar3;
      lVar2 = (*pcVar1)(lVar2,0x30016);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        puVar4 = (undefined1 *)lVar2;
        puVar4[1] = 0;
        *puVar4 = 6;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined4 *)(puVar4 + 4) = 0;
        *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)((int)&DAT_00449438 + iGpffff8df8);
        *(int *)(puVar4 + 0x14) = (int)&DAT_00449438 + iGpffff8df8;
        *(undefined1 **)(*(int *)((int)&DAT_00449438 + iGpffff8df8) + 4) = puVar4 + 0x10;
        *(undefined1 **)(puVar4 + 0xc) = puVar4 + 8;
        *(undefined1 **)(puVar4 + 8) = puVar4 + 8;
        *(undefined1 **)((int)&DAT_00449438 + iGpffff8df8) = puVar4 + 0x10;
        FUN_002cfdf8(0x3c3388,lVar2);
      }
      uGpffff8748 = (undefined4)lVar2;
      *(undefined4 *)((int)&DAT_00449448 + iGpffff8df8) = uGpffff8748;
      if (lVar2 != 0) {
        *(code **)((int)&DAT_00449450 + iGpffff8df8) = FUN_002af6f0;
        *(code **)((int)&DAT_0044944c + iGpffff8df8) = FUN_002af6a8;
        *(code **)((int)&DAT_00449464 + iGpffff8df8) = FUN_002ae790;
        *(undefined1 **)((int)&DAT_00449468 + iGpffff8df8) = &LAB_002af608;
        *(undefined2 *)((int)&DAT_00449460 + iGpffff8df8) = 0;
        *(undefined4 *)((int)&DAT_00449454 + iGpffff8df8) = 0;
        *(undefined4 *)((int)&DAT_00449458 + iGpffff8df8) = 0;
        *(undefined4 *)(&DAT_0044945c + iGpffff8df8) = 0;
        return param_1;
      }
      FUN_002a65f0(*(undefined4 *)(&DAT_00449444 + iGpffff8df8));
      *(undefined4 *)(&DAT_00449444 + iGpffff8df8) = 0;
      FUN_002a65f0(*(undefined4 *)(&DAT_00449440 + iGpffff8df8));
    }
    *(undefined4 *)(&DAT_00449440 + iGpffff8df8) = 0;
  }
  return 0;
}


// ==== FUN_002af118 @ 002af118 ====

undefined8 FUN_002af118(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)((int)&DAT_00449468 + iGpffff8df8) == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)((int)&DAT_00449468 + iGpffff8df8))(param_1,param_2,param_3);
  }
  return uVar1;
}


// ==== FUN_002af158 @ 002af158 ====

bool FUN_002af158(void)

{
  long lVar1;
  
  lVar1 = (**(code **)((int)&DAT_00449464 + iGpffff8df8))();
  return lVar1 != 0;
}


// ==== FUN_002af1a0 @ 002af1a0 ====

undefined8 FUN_002af1a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  (*DAT_00449508)((int)param_1 + 0x10,param_2,0x20);
  uVar1 = (*DAT_0044952c)(param_2);
  if (0x1f < uVar1) {
    uStack_50 = 1;
    uStack_4c = FUN_002a5548(0xffffffff8000001e,param_2,0x20,0x1f,
                             *(undefined1 *)((int)param_2 + 0x1f));
    FUN_002a55d8(&uStack_50);
    *(undefined1 *)((int)param_1 + 0x2f) = 0;
  }
  return param_1;
}


// ==== FUN_002af240 @ 002af240 ====

undefined8 FUN_002af240(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  (*DAT_00449508)((int)param_1 + 0x30,param_2,0x20);
  uVar1 = (*DAT_0044952c)(param_2);
  if (0x1f < uVar1) {
    uStack_50 = 1;
    uStack_4c = FUN_002a5548(0xffffffff8000001e,param_2,0x20,0x1f,
                             *(undefined1 *)((int)param_2 + 0x1f));
    FUN_002a55d8(&uStack_50);
    *(undefined1 *)((int)param_1 + 0x4f) = 0;
  }
  return param_1;
}


// ==== FUN_002af300 @ 002af300 ====

long FUN_002af300(undefined4 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = (*DAT_00449550)(*(undefined4 *)(&DAT_00449440 + iGpffff8df8),0x30006);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)lVar1;
    *puVar2 = param_1;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    puVar2[0x15] = 1;
    puVar2[0x14] = 0x1101;
    FUN_002cfdf8(0x3c3370,lVar1);
  }
  return lVar1;
}


// ==== FUN_002af388 @ 002af388 ====

undefined4 FUN_002af388(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  iVar3 = piVar4[0x15];
  iVar2 = iVar3 + -1;
  piVar4[0x15] = iVar2;
  if (iVar2 < 1) {
    piVar4[0x15] = iVar3;
    FUN_002cfe90(0x3c3370,param_1);
    if (piVar4[1] == 0) {
      iVar3 = *piVar4;
    }
    else {
      piVar1 = (int *)piVar4[3];
      iVar3 = piVar4[2];
      *piVar1 = iVar3;
      *(int **)(iVar3 + 4) = piVar1;
      iVar3 = *piVar4;
    }
    if (iVar3 == 0) {
      iVar3 = piVar4[0x15];
    }
    else {
      FUN_002ac568();
      *piVar4 = 0;
      iVar3 = piVar4[0x15];
    }
    piVar4[0x15] = iVar3 + -1;
    (*DAT_00449554)(*(undefined4 *)(&DAT_00449440 + iGpffff8df8),param_1);
  }
  return 1;
}


// ==== FUN_002af438 @ 002af438 ====

undefined4 * FUN_002af438(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  do {
    while( true ) {
      if (puVar3 == (undefined4 *)(param_1 + 8)) {
        return (undefined4 *)0x0;
      }
      pcVar10 = (char *)(puVar3 + 2);
      if (pcVar10 != (char *)0x0) break;
      puVar3 = (undefined4 *)*puVar3;
    }
    pcVar7 = param_2;
    if (*(char *)(puVar3 + 2) != '\0') {
      cVar2 = *param_2;
      cVar1 = *param_2;
      pcVar8 = pcVar10;
      pcVar9 = param_2;
      while (cVar1 != '\0') {
        cVar1 = *pcVar8;
        lVar6 = (long)cVar1;
        iVar5 = (int)cVar2;
        if ((int)cVar1 - 0x61U < 0x1a) {
          lVar6 = (long)((cVar1 + -0x20) * 0x1000000 >> 0x18);
        }
        if (iVar5 - 0x61U < 0x1a) {
          iVar5 = (iVar5 + -0x20) * 0x1000000 >> 0x18;
        }
        pcVar8 = pcVar8 + 1;
        if (lVar6 != iVar5) {
          bVar4 = false;
          goto LAB_002af4f8;
        }
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
        pcVar7 = pcVar7 + 1;
        if (*pcVar8 == '\0') break;
        cVar2 = *pcVar9;
        cVar1 = *pcVar9;
      }
    }
    bVar4 = true;
    if (*pcVar10 != *pcVar7) {
      bVar4 = false;
    }
LAB_002af4f8:
    if (bVar4) {
      return puVar3 + -2;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}


// ==== FUN_002af530 @ 002af530 ====

undefined8 FUN_002af530(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)param_1 + 8);
  do {
    puVar3 = puVar1 + -2;
    if (puVar1 == (undefined4 *)((int)param_1 + 8)) {
      return param_1;
    }
    puVar1 = (undefined4 *)*puVar1;
    lVar2 = (*param_2)(puVar3,param_3);
  } while (lVar2 != 0);
  return param_1;
}


// ==== FUN_002af5a8 @ 002af5a8 ====

void FUN_002af5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_002cfac0(0x3c3370,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== FUN_002af6a8 @ 002af6a8 ====

void FUN_002af6a8(void)

{
  if (*(int *)((int)&DAT_00449454 + iGpffff8df8) == 0) {
    FUN_002ade38();
  }
  else {
    FUN_002ae0b0();
  }
  return;
}


// ==== FUN_002af6f0 @ 002af6f0 ====

long FUN_002af6f0(undefined8 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((int)&DAT_00449438 + iGpffff8df8);
  if (*(int *)((int)&DAT_00449448 + iGpffff8df8) == 0) {
    for (puVar1 = (undefined4 *)*puVar3; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
      lVar2 = FUN_002af438(puVar1 + -4,param_1);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_002af438(*(int *)((int)&DAT_00449448 + iGpffff8df8),param_1);
  }
  return lVar2;
}


// ==== FUN_002af778 @ 002af778 ====

void FUN_002af778(int param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = *(int **)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 8);
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
  }
  iVar3 = (int)param_2;
  *(int *)(param_1 + 4) = iVar3;
  if (param_2 != 0) {
    iVar2 = *(int *)(iVar3 + 0x90);
    *(int *)(iVar2 + 4) = param_1 + 8;
    *(int *)(param_1 + 0xc) = iVar3 + 0x90;
    *(int *)(iVar3 + 0x90) = param_1 + 8;
    *(int *)(param_1 + 8) = iVar2;
    FUN_002aa288(param_2);
  }
  return;
}


// ==== FUN_002af7d8 @ 002af7d8 ====

void FUN_002af7d8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    piVar2 = *(int **)(param_1 + 0xc);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  return;
}


// ==== FUN_002af800 @ 002af800 ====

void FUN_002af800(float param_1,float *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (1 << (8U - iGpffff8770 & 0x1f)) - 1;
  uVar2 = uVar1 & 0xff;
  fVar4 = (float)(uVar2 & param_3[1]) * fGpffff804c;
  fVar6 = (float)(uVar2 & param_3[3]) * fGpffff804c;
  fVar3 = (float)(uVar2 & *param_3) * fGpffff804c * fGpffff8050;
  fVar5 = (float)((byte)uVar1 & param_3[2]) * fGpffff804c * fGpffff8054;
  *param_2 = *param_2 + param_1;
  param_2[5] = param_2[5] +
               param_1 * (fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  param_2[1] = param_2[1] + fVar3 * param_1;
  param_2[2] = param_2[2] + fVar4 * param_1;
  param_2[3] = param_2[3] + fVar5 * param_1;
  param_2[4] = param_2[4] + fVar6 * param_1;
  return;
}


// ==== FUN_002af938 @ 002af938 ====

void FUN_002af938(float *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  
  fVar4 = param_1[5] -
          (param_1[1] * param_1[1] + param_1[2] * param_1[2] + param_1[3] * param_1[3] +
          param_1[4] * param_1[4]) / *param_1;
  param_1[5] = fVar4;
  if (fVar4 < 0.0) {
    param_1[5] = 0.0;
  }
  bVar1 = param_2[3];
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  fVar4 = *param_1;
  param_1[1] = param_1[1] + (float)*param_2 * fGpffff8058 * fGpffff805c * fVar4;
  param_1[2] = param_1[2] + (float)bVar2 * fGpffff8058 * fVar4;
  param_1[3] = param_1[3] + (float)bVar3 * fGpffff8058 * fGpffff8060 * fVar4;
  param_1[4] = param_1[4] + (float)bVar1 * fGpffff8058 * fVar4;
  return;
}


// ==== FUN_002afa48 @ 002afa48 ====

void FUN_002afa48(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[5];
  fVar3 = param_3[5];
  fVar4 = *param_2;
  param_1[5] = fVar1 + fVar3;
  if (0.0 < fVar4) {
    fVar2 = param_3[1];
    if (*param_3 <= 0.0) goto LAB_002afb38;
    fVar8 = 1.0 / *param_3;
    fVar4 = 1.0 / fVar4;
    fVar2 = param_2[1] * fVar4 - fVar2 * fVar8;
    fVar5 = param_2[2] * fVar4 - param_3[2] * fVar8;
    fVar7 = param_2[3] * fVar4 - param_3[3] * fVar8;
    fVar6 = param_2[4] * fVar4 - param_3[4] * fVar8;
    param_1[5] = fVar1 + fVar3 +
                 (fVar2 * fVar2 + fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) / (fVar4 + fVar8);
  }
  fVar2 = param_3[1];
LAB_002afb38:
  param_1[1] = param_2[1] + fVar2;
  param_1[2] = param_2[2] + param_3[2];
  param_1[3] = param_2[3] + param_3[3];
  param_1[4] = param_2[4] + param_3[4];
  *param_1 = *param_2 + *param_3;
  return;
}


// ==== FUN_002afb90 @ 002afb90 ====

void FUN_002afb90(float *param_1,float *param_2,float *param_3)

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
  
  fVar11 = *param_2 - *param_3;
  *param_1 = fVar11;
  fVar1 = param_2[1];
  fVar6 = param_3[1];
  param_1[1] = fVar1 - fVar6;
  fVar2 = param_2[2];
  fVar7 = param_3[2];
  param_1[2] = fVar2 - fVar7;
  fVar3 = param_2[3];
  fVar8 = param_3[3];
  param_1[3] = fVar3 - fVar8;
  fVar4 = param_2[4];
  fVar9 = param_3[4];
  param_1[4] = fVar4 - fVar9;
  fVar5 = param_2[5];
  fVar10 = param_3[5];
  param_1[5] = fVar5 - fVar10;
  if ((0.0 < fVar11) && (0.0 < *param_3)) {
    fVar11 = 1.0 / fVar11;
    fVar12 = 1.0 / *param_3;
    fVar6 = param_3[1] * fVar12 - (fVar1 - fVar6) * fVar11;
    fVar1 = param_3[2] * fVar12 - (fVar2 - fVar7) * fVar11;
    fVar3 = param_3[3] * fVar12 - (fVar3 - fVar8) * fVar11;
    fVar2 = param_3[4] * fVar12 - (fVar4 - fVar9) * fVar11;
    param_1[5] = (fVar5 - fVar10) -
                 (fVar6 * fVar6 + fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) / (fVar12 + fVar11)
    ;
  }
  return;
}


// ==== FUN_002afcb8 @ 002afcb8 ====

void FUN_002afcb8(undefined1 *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uStack_10;
  undefined1 uStack_c;
  undefined1 uStack_8;
  undefined1 uStack_4;
  
  fVar9 = param_2[4];
  fVar5 = 1.0 / *param_2;
  fVar7 = param_2[2];
  fVar1 = param_2[1];
  fVar8 = param_2[3];
  *param_1 = 0xff;
  iVar2 = (int)(fVar1 * fVar5 * fGpffff8064 * fGpffff806c);
  iVar3 = (int)(fVar7 * fVar5 * fGpffff806c);
  iVar4 = (int)(fVar8 * fVar5 * fGpffff8068 * fGpffff806c);
  iVar6 = (int)(fVar9 * fVar5 * fGpffff806c);
  uStack_10 = (undefined1)iVar2;
  if (iVar2 < 0xff) {
    *param_1 = uStack_10;
  }
  param_1[1] = 0xff;
  if (iVar3 < 0xff) {
    uStack_c = (undefined1)iVar3;
    param_1[1] = uStack_c;
  }
  param_1[2] = 0xff;
  if (iVar4 < 0xff) {
    uStack_8 = (undefined1)iVar4;
    param_1[2] = uStack_8;
  }
  param_1[3] = 0xff;
  if (iVar6 < 0xff) {
    uStack_4 = (undefined1)iVar6;
    param_1[3] = uStack_4;
  }
  return;
}


// ==== FUN_002afdb0 @ 002afdb0 ====

void FUN_002afdb0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar2 = *(int *)(param_3 + 0x10);
  iVar3 = *(int *)(param_3 + 0x18);
  iVar13 = *(int *)(param_3 + 0xc);
  pbVar7 = *(byte **)(param_3 + 0x14);
  iVar14 = *(int *)(param_3 + 8);
  if (iVar13 != 8) {
    if (8 < iVar13) {
      if (iVar13 != 0x20) {
        return;
      }
      while (iVar3 = iVar14 + -1, iVar14 != 0) {
        iVar13 = *(int *)(param_3 + 4);
        pbVar10 = pbVar7 + iVar2;
        pbVar5 = pbVar7;
        while (iVar14 = iVar3, pbVar7 = pbVar10, iVar13 != 0) {
          iVar13 = iVar13 + -1;
          uVar8 = 8 - iGpffff8770;
          iVar14 = *(int *)(param_2 + 0x4000);
          uVar6 = *(long *)(&DAT_0044d528 + ((int)(uint)*pbVar5 >> (uVar8 & 0x1f)) * 8) << 3 |
                  *(long *)(&DAT_0044d528 + ((int)(uint)pbVar5[1] >> (uVar8 & 0x1f)) * 8) << 2 |
                  *(long *)(&DAT_0044d528 + ((int)(uint)pbVar5[2] >> (uVar8 & 0x1f)) * 8) << 1 |
                  *(ulong *)(&DAT_0044d528 + ((int)(uint)pbVar5[3] >> (uVar8 & 0x1f)) * 8);
          iVar11 = iGpffff8770;
          while (uVar8 = (uint)uVar6 & 0xf, iVar11 != 0) {
            uVar6 = uVar6 >> 4;
            piVar9 = (int *)(iVar14 + 0x1c + uVar8 * 4);
            if (*piVar9 == 0) {
              puVar4 = (undefined4 *)(*DAT_00449550)(*(undefined4 *)(param_2 + 0x4004),0x30411);
              *piVar9 = (int)puVar4;
              puVar4[0x16] = 0;
              puVar4[7] = 0;
              puVar4[0x15] = 0;
              puVar4[0x14] = 0;
              puVar4[0x13] = 0;
              puVar4[0x12] = 0;
              puVar4[0x11] = 0;
              puVar4[0x10] = 0;
              puVar4[0xf] = 0;
              puVar4[0xe] = 0;
              puVar4[0xd] = 0;
              puVar4[0xc] = 0;
              puVar4[0xb] = 0;
              puVar4[10] = 0;
              puVar4[9] = 0;
              puVar4[8] = 0;
              if (iVar11 == 1) {
                puVar4[5] = 0;
                *(undefined1 *)(puVar4 + 6) = 0;
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                puVar4[4] = 0;
              }
            }
            iVar14 = *(int *)(iVar14 + 0x1c + uVar8 * 4);
            iVar11 = iVar11 + -1;
          }
          FUN_002af800(param_1,iVar14,pbVar5);
          pbVar5 = pbVar5 + 4;
        }
      }
      return;
    }
    if (iVar13 != 4) {
      return;
    }
  }
  while (pbVar5 = pbVar7, iVar14 != 0) {
    iVar14 = iVar14 + -1;
    iVar13 = *(int *)(param_3 + 4);
    pbVar7 = pbVar5 + iVar2;
    while (iVar13 != 0) {
      iVar13 = iVar13 + -1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      iVar11 = *(int *)(param_2 + 0x4000);
      pbVar10 = (byte *)(iVar3 + (uint)bVar1 * 4);
      uVar8 = 8 - iGpffff8770;
      uVar6 = *(long *)(&DAT_0044d528 + ((int)(uint)*pbVar10 >> (uVar8 & 0x1f)) * 8) << 3 |
              *(long *)(&DAT_0044d528 + ((int)(uint)pbVar10[1] >> (uVar8 & 0x1f)) * 8) << 2 |
              *(long *)(&DAT_0044d528 + ((int)(uint)pbVar10[2] >> (uVar8 & 0x1f)) * 8) << 1 |
              *(ulong *)(&DAT_0044d528 + ((int)(uint)pbVar10[3] >> (uVar8 & 0x1f)) * 8);
      iVar12 = iGpffff8770;
      while (uVar8 = (uint)uVar6 & 0xf, iVar12 != 0) {
        uVar6 = uVar6 >> 4;
        piVar9 = (int *)(iVar11 + 0x1c + uVar8 * 4);
        if (*piVar9 == 0) {
          puVar4 = (undefined4 *)(*DAT_00449550)(*(undefined4 *)(param_2 + 0x4004),0x30411);
          *piVar9 = (int)puVar4;
          puVar4[0x16] = 0;
          puVar4[7] = 0;
          puVar4[0x15] = 0;
          puVar4[0x14] = 0;
          puVar4[0x13] = 0;
          puVar4[0x12] = 0;
          puVar4[0x11] = 0;
          puVar4[0x10] = 0;
          puVar4[0xf] = 0;
          puVar4[0xe] = 0;
          puVar4[0xd] = 0;
          puVar4[0xc] = 0;
          puVar4[0xb] = 0;
          puVar4[10] = 0;
          puVar4[9] = 0;
          puVar4[8] = 0;
          if (iVar12 == 1) {
            puVar4[5] = 0;
            *(undefined1 *)(puVar4 + 6) = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
          }
        }
        iVar11 = *(int *)(iVar11 + 0x1c + uVar8 * 4);
        iVar12 = iVar12 + -1;
      }
      FUN_002af800(param_1,iVar11,pbVar10);
    }
  }
  return;
}


// ==== FUN_002b0290 @ 002b0290 ====

void FUN_002b0290(long param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  if (param_1 != 0) {
    piVar5 = (int *)param_4;
    iVar1 = 1 << ((uint)param_3 & 0x1f);
    if ((((0 < (*param_2 + iVar1) - *piVar5) && (0 < (param_2[1] + iVar1) - piVar5[1])) &&
        (0 < (param_2[2] + iVar1) - piVar5[2])) && (0 < (param_2[3] + iVar1) - piVar5[3])) {
      if (((*param_2 - piVar5[4] < 0) && (param_2[1] - piVar5[5] < 0)) &&
         ((param_2[2] - piVar5[6] < 0 && (param_2[3] - piVar5[7] < 0)))) {
        puVar4 = (undefined4 *)((int)param_1 + 0x1c);
        if (param_3 == 0) {
          *(char *)((int)param_1 + 0x18) = (char)param_5;
        }
        else {
          uVar3 = (uint)param_3 - 1;
          iVar1 = 0;
          do {
            iStack_88 = param_2[2] + ((iVar1 >> 1 & 1U) << (uVar3 & 0x1f));
            iStack_90 = *param_2 + ((iVar1 >> 3 & 1U) << (uVar3 & 0x1f));
            iStack_8c = param_2[1] + ((iVar1 >> 2 & 1U) << (uVar3 & 0x1f));
            iStack_84 = param_2[3] + (0 << (uVar3 & 0x1f));
            FUN_002b0290(*puVar4,&iStack_90,uVar3,param_4,param_5);
            uVar2 = iVar1 + 1;
            iStack_8c = param_2[1] + (((int)uVar2 >> 2 & 1U) << (uVar3 & 0x1f));
            iStack_88 = param_2[2] + (((int)uVar2 >> 1 & 1U) << (uVar3 & 0x1f));
            iStack_90 = *param_2 + (((int)uVar2 >> 3 & 1U) << (uVar3 & 0x1f));
            iStack_84 = param_2[3] + ((uVar2 & 1) << (uVar3 & 0x1f));
            iVar1 = iVar1 + 2;
            FUN_002b0290(puVar4[1],&iStack_90,uVar3,param_4,param_5);
            puVar4 = puVar4 + 2;
          } while (iVar1 < 0x10);
        }
      }
    }
  }
  return;
}


// ==== FUN_002b04d0 @ 002b04d0 ====

void FUN_002b04d0(long param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  if (param_1 != 0) {
    iVar7 = *param_2;
    iVar1 = param_2[1];
    iVar4 = 1 << ((uint)param_3 & 0x1f);
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    piVar9 = (int *)param_4;
    if ((((0 < (iVar7 + iVar4) - *piVar9) && (0 < (iVar1 + iVar4) - piVar9[1])) &&
        (0 < (iVar2 + iVar4) - piVar9[2])) && (0 < (iVar3 + iVar4) - piVar9[3])) {
      if (((iVar7 - piVar9[4] < 0) && (iVar1 - piVar9[5] < 0)) &&
         ((iVar2 - piVar9[6] < 0 && (iVar3 - piVar9[7] < 0)))) {
        if (((-1 < iVar7 - *piVar9) && (-1 < iVar1 - piVar9[1])) &&
           ((-1 < iVar2 - piVar9[2] && (-1 < iVar3 - piVar9[3])))) {
          if ((((-1 < piVar9[4] - (iVar7 + iVar4)) && (-1 < piVar9[5] - (iVar1 + iVar4))) &&
              (-1 < piVar9[6] - (iVar2 + iVar4))) && (-1 < piVar9[7] - (iVar3 + iVar4))) {
            FUN_002afa48(param_5,param_5,param_1);
            return;
          }
        }
        puVar8 = (undefined4 *)((int)param_1 + 0x1c);
        if (0 < param_3) {
          uVar6 = (uint)param_3 - 1;
          iVar7 = 0;
          do {
            iStack_a8 = param_2[2] + ((iVar7 >> 1 & 1U) << (uVar6 & 0x1f));
            iStack_b0 = *param_2 + ((iVar7 >> 3 & 1U) << (uVar6 & 0x1f));
            iStack_ac = param_2[1] + ((iVar7 >> 2 & 1U) << (uVar6 & 0x1f));
            iStack_a4 = param_2[3] + (0 << (uVar6 & 0x1f));
            FUN_002b04d0(*puVar8,&iStack_b0,uVar6,param_4,param_5);
            uVar5 = iVar7 + 1;
            iStack_ac = param_2[1] + (((int)uVar5 >> 2 & 1U) << (uVar6 & 0x1f));
            iStack_a8 = param_2[2] + (((int)uVar5 >> 1 & 1U) << (uVar6 & 0x1f));
            iStack_b0 = *param_2 + (((int)uVar5 >> 3 & 1U) << (uVar6 & 0x1f));
            iStack_a4 = param_2[3] + ((uVar5 & 1) << (uVar6 & 0x1f));
            iVar7 = iVar7 + 2;
            FUN_002b04d0(puVar8[1],&iStack_b0,uVar6,param_4,param_5);
            puVar8 = puVar8 + 2;
          } while (iVar7 < 0x10);
        }
      }
    }
  }
  return;
}


// ==== FUN_002b0780 @ 002b0780 ====

bool FUN_002b0780(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float afStack_270 [4];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  float afStack_230 [6];
  undefined1 uStack_218;
  float afStack_210 [5];
  float fStack_1fc;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  float afStack_1c0 [6];
  undefined1 uStack_1a8;
  float afStack_1a0 [5];
  float fStack_18c;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float afStack_150 [6];
  undefined1 uStack_138;
  float afStack_130 [5];
  float fStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float afStack_e0 [6];
  undefined1 uStack_c8;
  float afStack_c0 [5];
  float fStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  iVar12 = (int)param_2;
  fVar14 = *(float *)(iVar12 + 0x14);
  iVar9 = *param_3;
  uStack_250 = *(undefined8 *)param_3;
  uStack_248 = *(undefined8 *)(param_3 + 2);
  uStack_240 = *(undefined8 *)(param_3 + 4);
  uStack_238 = *(undefined8 *)(param_3 + 6);
  iVar3 = param_3[4] - iVar9;
  if (1 < iVar3) {
    fVar13 = 0.0;
    iVar10 = param_3[4];
    do {
      iVar8 = iVar9 + (iVar3 >> 1);
      uStack_240 = CONCAT44(uStack_240._4_4_,iVar8);
      uStack_1f0 = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_218 = 0;
      afStack_230[0] = 0.0;
      afStack_230[1] = 0.0;
      afStack_230[2] = 0.0;
      afStack_230[3] = 0.0;
      afStack_230[4] = 0.0;
      afStack_230[5] = 0.0;
      FUN_002b04d0(param_1,&uStack_1f0,DAT_0040df60,&uStack_250,afStack_230);
      FUN_002afb90(afStack_210,param_2,afStack_230);
      iVar3 = iVar8;
      iVar11 = iVar10;
      if ((afStack_230[0] != fVar13) && (iVar3 = iVar9, iVar11 = iVar8, afStack_210[0] != fVar13)) {
        if (afStack_230[5] + fStack_1fc < fVar14) {
          uStack_260 = (undefined4)uStack_240;
          fVar14 = afStack_230[5] + fStack_1fc;
        }
        iVar3 = iVar8;
        iVar11 = iVar10;
        if (fStack_1fc <= afStack_230[5]) {
          iVar3 = iVar9;
          iVar11 = iVar8;
        }
      }
      iVar9 = iVar3;
      iVar3 = iVar11 - iVar9;
      iVar10 = iVar11;
    } while (1 < iVar3);
  }
  iVar9 = param_3[1];
  afStack_270[0] = fVar14;
  iVar3 = param_3[5] - iVar9;
  fVar14 = *(float *)(iVar12 + 0x14);
  uStack_1e0 = *(undefined8 *)param_3;
  uStack_1d8 = *(undefined8 *)(param_3 + 2);
  uStack_1d0 = *(undefined8 *)(param_3 + 4);
  uStack_1c8 = *(undefined8 *)(param_3 + 6);
  if (iVar3 < 2) {
    iVar9 = param_3[2];
  }
  else {
    fVar13 = 0.0;
    iVar10 = param_3[5];
    do {
      iVar8 = iVar9 + (iVar3 >> 1);
      uStack_1d0 = CONCAT44(iVar8,(undefined4)uStack_1d0);
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_1a8 = 0;
      afStack_1c0[0] = 0.0;
      afStack_1c0[1] = 0.0;
      afStack_1c0[2] = 0.0;
      afStack_1c0[3] = 0.0;
      afStack_1c0[4] = 0.0;
      afStack_1c0[5] = 0.0;
      FUN_002b04d0(param_1,&uStack_180,DAT_0040df60,&uStack_1e0,afStack_1c0);
      FUN_002afb90(afStack_1a0,param_2,afStack_1c0);
      iVar3 = iVar8;
      iVar11 = iVar10;
      if ((afStack_1c0[0] != fVar13) && (iVar3 = iVar9, iVar11 = iVar8, afStack_1a0[0] != fVar13)) {
        if (afStack_1c0[5] + fStack_18c < fVar14) {
          uStack_25c = uStack_1d0._4_4_;
          fVar14 = afStack_1c0[5] + fStack_18c;
        }
        iVar3 = iVar8;
        iVar11 = iVar10;
        if (fStack_18c <= afStack_1c0[5]) {
          iVar3 = iVar9;
          iVar11 = iVar8;
        }
      }
      iVar9 = iVar3;
      iVar3 = iVar11 - iVar9;
      iVar10 = iVar11;
    } while (1 < iVar3);
    iVar9 = param_3[2];
  }
  afStack_270[1] = fVar14;
  iVar3 = param_3[6] - iVar9;
  fVar14 = *(float *)(iVar12 + 0x14);
  uStack_170 = *(undefined8 *)param_3;
  uStack_168 = *(undefined8 *)(param_3 + 2);
  uStack_160 = *(undefined8 *)(param_3 + 4);
  uStack_158 = *(undefined8 *)(param_3 + 6);
  if (iVar3 < 2) {
    iVar9 = param_3[3];
  }
  else {
    fVar13 = 0.0;
    iVar10 = param_3[6];
    do {
      iVar8 = iVar9 + (iVar3 >> 1);
      uStack_158 = CONCAT44(uStack_158._4_4_,iVar8);
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_138 = 0;
      afStack_150[0] = 0.0;
      afStack_150[1] = 0.0;
      afStack_150[2] = 0.0;
      afStack_150[3] = 0.0;
      afStack_150[4] = 0.0;
      afStack_150[5] = 0.0;
      FUN_002b04d0(param_1,&uStack_110,DAT_0040df60,&uStack_170,afStack_150);
      FUN_002afb90(afStack_130,param_2,afStack_150);
      iVar3 = iVar8;
      iVar11 = iVar10;
      if ((afStack_150[0] != fVar13) && (iVar3 = iVar9, iVar11 = iVar8, afStack_130[0] != fVar13)) {
        if (afStack_150[5] + fStack_11c < fVar14) {
          uStack_258 = (undefined4)uStack_158;
          fVar14 = afStack_150[5] + fStack_11c;
        }
        iVar3 = iVar8;
        iVar11 = iVar10;
        if (fStack_11c <= afStack_150[5]) {
          iVar3 = iVar9;
          iVar11 = iVar8;
        }
      }
      iVar9 = iVar3;
      iVar3 = iVar11 - iVar9;
      iVar10 = iVar11;
    } while (1 < iVar3);
    iVar9 = param_3[3];
  }
  afStack_270[2] = fVar14;
  iVar3 = param_3[7] - iVar9;
  fVar14 = *(float *)(iVar12 + 0x14);
  uStack_100 = *(undefined8 *)param_3;
  uStack_f8 = *(undefined8 *)(param_3 + 2);
  uStack_f0 = *(undefined8 *)(param_3 + 4);
  uStack_e8 = *(undefined8 *)(param_3 + 6);
  if (iVar3 < 2) {
    afStack_270[3] = fVar14;
  }
  else {
    fVar13 = 0.0;
    iVar10 = param_3[7];
    do {
      iVar8 = iVar9 + (iVar3 >> 1);
      uStack_e8 = CONCAT44(iVar8,(undefined4)uStack_e8);
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_c8 = 0;
      afStack_e0[0] = 0.0;
      afStack_e0[1] = 0.0;
      afStack_e0[2] = 0.0;
      afStack_e0[3] = 0.0;
      afStack_e0[4] = 0.0;
      afStack_e0[5] = 0.0;
      FUN_002b04d0(param_1,&uStack_a0,DAT_0040df60,&uStack_100,afStack_e0);
      FUN_002afb90(afStack_c0,param_2,afStack_e0);
      iVar3 = iVar8;
      iVar11 = iVar10;
      if ((afStack_e0[0] != fVar13) && (iVar3 = iVar9, iVar11 = iVar8, afStack_c0[0] != fVar13)) {
        if (afStack_e0[5] + fStack_ac < fVar14) {
          uStack_254 = uStack_e8._4_4_;
          fVar14 = afStack_e0[5] + fStack_ac;
        }
        iVar3 = iVar8;
        iVar11 = iVar10;
        if (fStack_ac <= afStack_e0[5]) {
          iVar3 = iVar9;
          iVar11 = iVar8;
        }
      }
      iVar9 = iVar3;
      iVar3 = iVar11 - iVar9;
      iVar10 = iVar11;
    } while (1 < iVar3);
    afStack_270[3] = fVar14;
  }
  uVar4 = (uint)(afStack_270[1] < afStack_270[0]);
  if (afStack_270[2] < afStack_270[uVar4]) {
    uVar4 = 2;
  }
  if (fVar14 < afStack_270[uVar4]) {
    uVar4 = 3;
  }
  bVar2 = afStack_270[uVar4] < *(float *)(iVar12 + 0x14);
  if (bVar2) {
    bVar1 = *(byte *)(&uStack_260 + uVar4);
    uVar5 = *(undefined8 *)(param_3 + 2);
    uVar6 = *(undefined8 *)(param_3 + 4);
    uVar7 = *(undefined8 *)(param_3 + 6);
    *param_4 = *(undefined8 *)param_3;
    param_4[1] = uVar5;
    param_4[2] = uVar6;
    param_4[3] = uVar7;
    *(uint *)((int)param_4 + uVar4 * 4) = (uint)bVar1;
    param_3[uVar4 + 4] = (uint)bVar1;
  }
  return bVar2;
}


// ==== FUN_002b0da0 @ 002b0da0 ====

uint FUN_002b0da0(undefined1 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  float *pfVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  char cStack_120;
  char cStack_11f;
  char cStack_11e;
  char cStack_11d;
  char cStack_110;
  char cStack_10f;
  char cStack_10e;
  char cStack_10d;
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
  uint uStack_c0;
  undefined4 *puStack_bc;
  uint uStack_b8;
  undefined4 *puStack_b4;
  undefined1 *puStack_b0;
  
  uStack_c0 = param_2;
  puStack_bc = param_3;
  memset(&cStack_120,0,4);
  uVar25 = uGpffff8770;
  puVar19 = (undefined4 *)puStack_bc[0x1000];
  if (puVar19 != (undefined4 *)0x0) {
    iVar23 = 0;
    if ((int)uGpffff8770 < 1) {
      FUN_002af938(puVar19,&cStack_120);
    }
    else {
      *(undefined1 *)(puVar19 + 6) = 0;
      *puVar19 = 0;
      iVar22 = uGpffff8770 - 1;
      puVar19[1] = 0;
      puVar24 = puVar19 + 7;
      puVar19[2] = 0;
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
      do {
        uVar13 = uVar25 - (uGpffff8770 - 7);
        cStack_110 = cStack_120 + (char)((iVar23 >> 3 & 1U) << (uVar13 & 0x1f));
        cStack_10f = cStack_11f + (char)((iVar23 >> 2 & 1U) << (uVar13 & 0x1f));
        cStack_10e = cStack_11e + (char)((iVar23 >> 1 & 1U) << (uVar13 & 0x1f));
        cStack_10d = cStack_11d + (char)(0 << (uVar13 & 0x1f));
        lVar11 = FUN_002b20b0(*puVar24,&cStack_110,iVar22);
        if (lVar11 != 0) {
          FUN_002afa48(puVar19,puVar19,lVar11);
        }
        uVar18 = iVar23 + 1;
        uVar13 = uVar25 - (uGpffff8770 - 7);
        cStack_110 = cStack_120 + (char)(((int)uVar18 >> 3 & 1U) << (uVar13 & 0x1f));
        cStack_10f = cStack_11f + (char)(((int)uVar18 >> 2 & 1U) << (uVar13 & 0x1f));
        cStack_10e = cStack_11e + (char)(((int)uVar18 >> 1 & 1U) << (uVar13 & 0x1f));
        cStack_10d = cStack_11d + (char)((uVar18 & 1) << (uVar13 & 0x1f));
        lVar11 = FUN_002b20b0(puVar24[1],&cStack_110,iVar22);
        if (lVar11 != 0) {
          FUN_002afa48(puVar19,puVar19,lVar11);
        }
        iVar23 = iVar23 + 2;
        puVar24 = puVar24 + 2;
      } while (iVar23 < 0x10);
    }
  }
  if (0 < (int)uStack_c0) {
    uVar13 = -uStack_c0 & 3;
    uVar25 = uStack_c0;
    puVar14 = param_1;
    puVar21 = param_1;
    puVar15 = param_1;
    puVar17 = param_1;
    if (uVar13 != 0) {
      if (uVar13 < 3) {
        if (uVar13 < 2) {
          *param_1 = 0;
          puVar14 = param_1 + 4;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          uVar25 = uStack_c0 - 1;
          *puVar14 = 0;
        }
        else {
          *param_1 = 0;
        }
        uVar25 = uVar25 - 1;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14 = puVar14 + 4;
      }
      *puVar14 = 0;
      uVar25 = uVar25 - 1;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14 = puVar14 + 4;
      puVar21 = puVar14;
      puVar15 = puVar14;
      puVar17 = puVar14;
      if (uVar25 == 0) goto LAB_002b1050;
    }
    do {
      *puVar14 = 0;
      uVar25 = uVar25 - 4;
      puVar15[1] = 0;
      puVar17[2] = 0;
      puVar21[3] = 0;
      puVar14[4] = 0;
      puVar15[5] = 0;
      puVar17[6] = 0;
      puVar21[7] = 0;
      puVar14[8] = 0;
      puVar15[9] = 0;
      puVar17[10] = 0;
      puVar21[0xb] = 0;
      puVar14[0xc] = 0;
      puVar15[0xd] = 0;
      puVar17[0xe] = 0;
      puVar21[0xf] = 0;
      puVar14 = puVar14 + 0x10;
      puVar21 = puVar21 + 0x10;
      puVar15 = puVar15 + 0x10;
      puVar17 = puVar17 + 0x10;
    } while (uVar25 != 0);
  }
LAB_002b1050:
  uVar25 = 0;
  uStack_b8 = uStack_c0;
  if (puStack_bc[0x1000] != 0) {
    iVar23 = uGpffff8770 - 1;
    if ((int)uGpffff8770 < 1) {
      uVar25 = 1;
    }
    else {
      puVar19 = (undefined4 *)(puStack_bc[0x1000] + 0x1c);
      iVar22 = 0xf;
      do {
        iVar22 = iVar22 + -8;
        iVar3 = FUN_002b2288(*puVar19,iVar23);
        iVar4 = FUN_002b2288(puVar19[1],iVar23);
        iVar5 = FUN_002b2288(puVar19[2],iVar23);
        iVar6 = FUN_002b2288(puVar19[3],iVar23);
        iVar7 = FUN_002b2288(puVar19[4],iVar23);
        iVar8 = FUN_002b2288(puVar19[5],iVar23);
        iVar9 = FUN_002b2288(puVar19[6],iVar23);
        puVar24 = puVar19 + 7;
        puVar19 = puVar19 + 8;
        iVar10 = FUN_002b2288(*puVar24,iVar23);
        uVar25 = uVar25 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
      } while (-1 < iVar22);
    }
  }
  if ((int)uVar25 <= (int)uStack_c0) {
    uVar12 = 0;
    iVar23 = puStack_bc[0x1000];
    if (iVar23 == 0) {
      return uVar25;
    }
    iVar22 = uGpffff8770 - 1;
    uStack_b8 = uVar25;
    if ((int)uGpffff8770 < 1) {
      FUN_002afcb8(param_1,iVar23);
      *(undefined1 *)(iVar23 + 0x18) = 0;
      return uStack_b8;
    }
    puVar19 = (undefined4 *)(iVar23 + 0x1c);
    iVar23 = 0xf;
    do {
      uVar12 = FUN_002b2388(*puVar19,param_1,uVar12,iVar22);
      iVar23 = iVar23 + -8;
      uVar12 = FUN_002b2388(puVar19[1],param_1,uVar12,iVar22);
      uVar12 = FUN_002b2388(puVar19[2],param_1,uVar12,iVar22);
      uVar12 = FUN_002b2388(puVar19[3],param_1,uVar12,iVar22);
      uVar12 = FUN_002b2388(puVar19[4],param_1,uVar12,iVar22);
      uVar12 = FUN_002b2388(puVar19[5],param_1,uVar12,iVar22);
      uVar12 = FUN_002b2388(puVar19[6],param_1,uVar12,iVar22);
      uVar12 = FUN_002b2388(puVar19[7],param_1,uVar12,iVar22);
      puVar19 = puVar19 + 8;
    } while (-1 < iVar23);
    return uStack_b8;
  }
  *puStack_bc = 0;
  puStack_bc[1] = 0;
  iVar23 = 1 << (uGpffff8770 & 0x1f);
  puStack_bc[2] = 0;
  puStack_bc[3] = 0;
  uVar25 = 1;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  puStack_bc[0x900] = 0;
  puStack_bc[7] = iVar23;
  puStack_bc[4] = iVar23;
  puStack_bc[5] = iVar23;
  puStack_bc[6] = iVar23;
  *(undefined1 *)(puStack_bc + 0x906) = 0;
  puStack_bc[0x901] = 0;
  puStack_bc[0x902] = 0;
  puStack_bc[0x903] = 0;
  puStack_bc[0x904] = 0;
  puStack_bc[0x905] = 0;
  FUN_002b04d0(puStack_bc[0x1000],&uStack_100,uGpffff8770,puStack_bc,puStack_bc + 0x900);
  puVar19 = puStack_bc;
  puStack_bc[0x800] = puStack_bc[0x905];
  if (1 < (int)uStack_c0) {
    puStack_b4 = puStack_bc + 0x800;
    puVar27 = puStack_bc + 0x801;
    puVar24 = puStack_bc;
    do {
      puVar26 = puVar24 + 8;
      iVar23 = -1;
      fVar28 = 0.0;
      iVar22 = 0;
      if (0 < (int)uVar25) {
        iVar3 = 0;
        uVar13 = uVar25 & 3;
        pfVar16 = (float *)(puStack_bc + 0x800);
        if ((int)uVar25 < 1) {
LAB_002b1354:
          fVar29 = fVar28;
          fVar28 = *pfVar16;
          iVar4 = iVar23;
LAB_002b1358:
          iVar22 = iVar22 + 1;
          iVar23 = iVar3;
          if (fVar28 <= fVar29) {
            fVar28 = fVar29;
            iVar23 = iVar4;
          }
          iVar3 = iVar3 + 1;
          pfVar16 = pfVar16 + 1;
          if ((int)uVar25 <= iVar22) goto LAB_002b140c;
        }
        else if (uVar13 != 0) {
          if (1 < uVar13) {
            if (uVar13 < 3) {
              fVar29 = fVar28;
              fVar28 = *pfVar16;
            }
            else {
              if (0.0 < (float)puStack_bc[0x800]) {
                iVar23 = 0;
                fVar28 = (float)puStack_bc[0x800];
              }
              iVar3 = 1;
              pfVar16 = (float *)(puStack_bc + 0x801);
              iVar22 = 1;
              fVar29 = fVar28;
              fVar28 = *pfVar16;
            }
            iVar4 = iVar3;
            if (fVar28 <= fVar29) {
              fVar28 = fVar29;
              iVar4 = iVar23;
            }
            iVar23 = iVar4;
            iVar3 = iVar3 + 1;
            pfVar16 = pfVar16 + 1;
            iVar22 = iVar22 + 1;
            goto LAB_002b1354;
          }
          fVar29 = fVar28;
          fVar28 = *pfVar16;
          iVar4 = iVar23;
          goto LAB_002b1358;
        }
        do {
          fVar29 = *pfVar16;
          if (fVar28 < fVar29) {
            fVar30 = pfVar16[1];
            iVar23 = iVar3;
          }
          else {
            fVar30 = pfVar16[1];
            fVar29 = fVar28;
          }
          iVar4 = iVar3 + 1;
          if (fVar30 <= fVar29) {
            fVar30 = fVar29;
            iVar4 = iVar23;
          }
          fVar29 = pfVar16[2];
          iVar5 = iVar3 + 2;
          if (fVar29 <= fVar30) {
            fVar29 = fVar30;
            iVar5 = iVar4;
          }
          fVar28 = pfVar16[3];
          iVar23 = iVar3 + 3;
          if (fVar28 <= fVar29) {
            fVar28 = fVar29;
            iVar23 = iVar5;
          }
          iVar22 = iVar22 + 4;
          iVar3 = iVar3 + 4;
          pfVar16 = pfVar16 + 4;
        } while (iVar22 < (int)uVar25);
      }
LAB_002b140c:
      if (iVar23 == -1) break;
      uVar13 = iVar23 * 0x1c >> 0x1f;
      puVar20 = puStack_bc + iVar23 * 8;
      lVar11 = FUN_002b0780(puStack_bc[0x1000],puStack_bc + iVar23 * 7 + 0x900,puVar20,puVar26);
      if (lVar11 == 0) {
        puVar27 = puVar27 + -1;
        uVar25 = uVar25 - 1;
        puStack_b4[iVar23] = 0;
      }
      else {
        uVar1 = puStack_bc[0x1000];
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        *(undefined1 *)(puStack_bc + iVar23 * 7 + 0x906) = 0;
        puStack_bc[iVar23 * 7 + 0x900] = 0;
        puStack_bc[iVar23 * 7 + 0x901] = 0;
        puStack_bc[iVar23 * 7 + 0x902] = 0;
        puStack_bc[iVar23 * 7 + 0x903] = 0;
        puStack_bc[iVar23 * 7 + 0x904] = 0;
        puStack_bc[iVar23 * 7 + 0x905] = 0;
        FUN_002b04d0(uVar1,&uStack_f0,uGpffff8770,puVar20,puStack_bc + iVar23 * 7 + 0x900);
        iVar22 = ((uint)puStack_bc | uVar13) + uVar25 * 0x1c;
        uVar1 = puStack_bc[0x1000];
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        *(undefined1 *)(iVar22 + 0x2418) = 0;
        *(undefined4 *)(iVar22 + 0x2400) = 0;
        *(undefined4 *)(iVar22 + 0x2404) = 0;
        *(undefined4 *)(iVar22 + 0x2408) = 0;
        *(undefined4 *)(iVar22 + 0x240c) = 0;
        *(undefined4 *)(iVar22 + 0x2410) = 0;
        *(undefined4 *)(iVar22 + 0x2414) = 0;
        FUN_002b04d0(uVar1,&uStack_e0,uGpffff8770,puVar26,(undefined4 *)(iVar22 + 0x2400));
        puStack_b4[iVar23] = puVar19[iVar23 * 7 + 0x905];
        *puVar27 = puVar19[uVar25 * 7 + 0x905];
        puVar24 = puVar26;
      }
      uVar25 = uVar25 + 1;
      puVar27 = puVar27 + 1;
    } while ((int)uVar25 < (int)uStack_c0);
  }
  puVar19 = puStack_bc;
  iVar23 = 0;
  if ((int)uStack_c0 < 1) {
    return uStack_b8;
  }
  uVar25 = uStack_c0 & 3;
  puVar24 = puStack_bc + 0x900;
  if (0 < (int)uStack_c0) {
    puVar27 = puStack_bc;
    iVar22 = iVar23;
    if (uVar25 == 0) goto LAB_002b167c;
    if (1 < uVar25) {
      bVar2 = 2 < uVar25;
      puVar27 = puVar24;
      if (bVar2) {
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        FUN_002b0290(puStack_bc[0x1000],&uStack_d0,uGpffff8770,puStack_bc,0);
        puVar27 = puVar19 + 0x907;
        FUN_002afcb8(param_1,puVar24);
        param_1 = param_1 + 4;
        puVar19 = puVar19 + 8;
      }
      uStack_d0 = 0;
      uStack_cc = 0;
      iVar23 = bVar2 + 1;
      uStack_c8 = 0;
      uStack_c4 = 0;
      FUN_002b0290(puStack_bc[0x1000],&uStack_d0,uGpffff8770,puVar19,bVar2);
      FUN_002afcb8(param_1,puVar27);
      puVar24 = puVar27 + 7;
      param_1 = param_1 + 4;
      puVar19 = puVar19 + 8;
    }
  }
  uStack_d0 = 0;
  iVar22 = iVar23 + 1;
  uStack_cc = 0;
  puVar27 = puVar19 + 8;
  uStack_c8 = 0;
  uStack_c4 = 0;
  FUN_002b0290(puStack_bc[0x1000],&uStack_d0,uGpffff8770,puVar19,iVar23);
  FUN_002afcb8(param_1,puVar24);
  puVar24 = puVar24 + 7;
  param_1 = param_1 + 4;
  if ((int)uStack_c0 <= iVar22) {
    return uStack_b8;
  }
LAB_002b167c:
  do {
    uStack_d0 = 0;
    puVar19 = puVar24 + 7;
    uStack_cc = 0;
    puVar14 = param_1 + 4;
    uStack_c8 = 0;
    puVar26 = puVar24 + 0xe;
    uStack_c4 = 0;
    puVar21 = param_1 + 8;
    FUN_002b0290(puStack_bc[0x1000],&uStack_d0,uGpffff8770,puVar27,iVar22);
    puVar20 = puVar24 + 0x15;
    FUN_002afcb8(param_1,puVar24);
    puVar24 = puVar24 + 0x1c;
    puStack_b0 = param_1 + 0xc;
    uStack_d0 = 0;
    param_1 = param_1 + 0x10;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    FUN_002b0290(puStack_bc[0x1000],&uStack_d0,uGpffff8770,puVar27 + 8,iVar22 + 1);
    FUN_002afcb8(puVar14,puVar19);
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    FUN_002b0290(puStack_bc[0x1000],&uStack_d0,uGpffff8770,puVar27 + 0x10,iVar22 + 2);
    FUN_002afcb8(puVar21,puVar26);
    puVar19 = puVar27 + 0x18;
    iVar23 = iVar22 + 3;
    uStack_d0 = 0;
    iVar22 = iVar22 + 4;
    uStack_cc = 0;
    puVar27 = puVar27 + 0x20;
    uStack_c8 = 0;
    uStack_c4 = 0;
    FUN_002b0290(puStack_bc[0x1000],&uStack_d0,uGpffff8770,puVar19,iVar23);
    FUN_002afcb8(puStack_b0,puVar20);
  } while (iVar22 < (int)uStack_c0);
  return uStack_b8;
}


// ==== FUN_002b17c8 @ 002b17c8 ====

void FUN_002b17c8(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  
  iVar1 = *(int *)(param_6 + 0x10);
  pbVar13 = *(byte **)(param_6 + 0x14);
  if (param_3 == 4) {
    iVar5 = *(int *)(param_6 + 0xc);
    if (param_4 == 1) {
      if (iVar5 != 8) {
        if (8 < iVar5) {
          if (iVar5 != 0x20) {
            return;
          }
          iVar5 = *(int *)(param_6 + 8);
          while (pbVar10 = param_1, pbVar9 = pbVar13, iVar5 = iVar5 + -1, iVar5 != -1) {
            uVar12 = 0;
            uVar8 = *(uint *)(param_6 + 4);
            pbVar13 = pbVar9 + iVar1;
            param_1 = pbVar10 + param_2;
            if (uVar8 != 0) {
              pbVar9 = pbVar9 + 3;
              while( true ) {
                uVar7 = 8 - iGpffff8770;
                uVar6 = *(long *)(&DAT_0044d528 + ((int)(uint)pbVar9[-3] >> (uVar7 & 0x1f)) * 8) <<
                        3 | *(long *)(&DAT_0044d528 + ((int)(uint)pbVar9[-2] >> (uVar7 & 0x1f)) * 8)
                            << 2 |
                        *(long *)(&DAT_0044d528 + ((int)(uint)pbVar9[-1] >> (uVar7 & 0x1f)) * 8) <<
                        1 | *(ulong *)(&DAT_0044d528 + ((int)(uint)*pbVar9 >> (uVar7 & 0x1f)) * 8);
                if (iGpffff8770 == 0) {
                  bVar3 = *(byte *)(*(int *)(param_5 + 0x4000) + 0x18);
                }
                else {
                  bVar3 = FUN_002b24d0(*(undefined4 *)
                                        (*(int *)(param_5 + 0x4000) + ((uint)uVar6 & 0xf) * 4 + 0x1c
                                        ),uVar6 >> 4,iGpffff8770 + -1);
                }
                if ((uVar12 & 1) == 0) {
                  *pbVar10 = *pbVar10 & 0xf0 | bVar3 & 0xf;
                }
                else {
                  *pbVar10 = *pbVar10 & 0xf | bVar3 << 4;
                  pbVar10 = pbVar10 + 1;
                }
                uVar12 = uVar12 + 1;
                if (uVar8 <= uVar12) break;
                pbVar9 = pbVar9 + 4;
              }
            }
          }
          return;
        }
        if (iVar5 != 4) {
          return;
        }
      }
      iVar5 = *(int *)(param_6 + 8);
      iVar11 = *(int *)(param_6 + 0x18);
      while (pbVar10 = param_1, pbVar9 = pbVar13, iVar5 = iVar5 + -1, iVar5 != -1) {
        uVar12 = 0;
        uVar8 = *(uint *)(param_6 + 4);
        pbVar13 = pbVar9 + iVar1;
        param_1 = pbVar10 + param_2;
        if (uVar8 != 0) {
          bVar3 = *pbVar9;
          while( true ) {
            pbVar9 = pbVar9 + 1;
            pbVar4 = (byte *)(iVar11 + (uint)bVar3 * 4);
            uVar7 = 8 - iGpffff8770;
            uVar6 = *(long *)(&DAT_0044d528 + ((int)(uint)*pbVar4 >> (uVar7 & 0x1f)) * 8) << 3 |
                    *(long *)(&DAT_0044d528 + ((int)(uint)pbVar4[1] >> (uVar7 & 0x1f)) * 8) << 2 |
                    *(long *)(&DAT_0044d528 + ((int)(uint)pbVar4[2] >> (uVar7 & 0x1f)) * 8) << 1 |
                    *(ulong *)(&DAT_0044d528 + ((int)(uint)pbVar4[3] >> (uVar7 & 0x1f)) * 8);
            if (iGpffff8770 == 0) {
              bVar3 = *(byte *)(*(int *)(param_5 + 0x4000) + 0x18);
            }
            else {
              bVar3 = FUN_002b24d0(*(undefined4 *)
                                    (*(int *)(param_5 + 0x4000) + ((uint)uVar6 & 0xf) * 4 + 0x1c),
                                   uVar6 >> 4,iGpffff8770 + -1);
            }
            if ((uVar12 & 1) == 0) {
              *pbVar10 = *pbVar10 & 0xf0 | bVar3 & 0xf;
            }
            else {
              *pbVar10 = *pbVar10 & 0xf | bVar3 << 4;
              pbVar10 = pbVar10 + 1;
            }
            uVar12 = uVar12 + 1;
            if (uVar8 <= uVar12) break;
            bVar3 = *pbVar9;
          }
        }
      }
      return;
    }
  }
  else {
    iVar5 = *(int *)(param_6 + 0xc);
  }
  if (iVar5 != 8) {
    if (8 < iVar5) {
      if (iVar5 != 0x20) {
        return;
      }
      iVar5 = *(int *)(param_6 + 8);
      while (pbVar10 = param_1, pbVar9 = pbVar13, iVar5 = iVar5 + -1, iVar5 != -1) {
        iVar11 = *(int *)(param_6 + 4) + -1;
        pbVar13 = pbVar9 + iVar1;
        param_1 = pbVar10 + param_2;
        if (iVar11 != -1) {
          pbVar9 = pbVar9 + -1;
          do {
            uVar8 = 8 - iGpffff8770;
            uVar6 = *(long *)(&DAT_0044d528 + ((int)(uint)pbVar9[1] >> (uVar8 & 0x1f)) * 8) << 3 |
                    *(long *)(&DAT_0044d528 + ((int)(uint)pbVar9[2] >> (uVar8 & 0x1f)) * 8) << 2 |
                    *(long *)(&DAT_0044d528 + ((int)(uint)pbVar9[3] >> (uVar8 & 0x1f)) * 8) << 1 |
                    *(ulong *)(&DAT_0044d528 + ((int)(uint)pbVar9[4] >> (uVar8 & 0x1f)) * 8);
            if (iGpffff8770 == 0) {
              bVar3 = *(byte *)(*(int *)(param_5 + 0x4000) + 0x18);
            }
            else {
              bVar3 = FUN_002b24d0(*(undefined4 *)
                                    (*(int *)(param_5 + 0x4000) + ((uint)uVar6 & 0xf) * 4 + 0x1c),
                                   uVar6 >> 4,iGpffff8770 + -1);
            }
            *pbVar10 = bVar3;
            iVar11 = iVar11 + -1;
            pbVar10 = pbVar10 + 1;
            pbVar9 = pbVar9 + 4;
          } while (iVar11 != -1);
        }
      }
      return;
    }
    if (iVar5 != 4) {
      return;
    }
  }
  iVar5 = *(int *)(param_6 + 8);
  iVar11 = *(int *)(param_6 + 0x18);
  while (pbVar10 = param_1, pbVar9 = pbVar13, iVar5 = iVar5 + -1, iVar5 != -1) {
    iVar2 = *(int *)(param_6 + 4);
    pbVar13 = pbVar9 + iVar1;
    param_1 = pbVar10 + param_2;
    while (iVar2 = iVar2 + -1, iVar2 != -1) {
      bVar3 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar4 = (byte *)(iVar11 + (uint)bVar3 * 4);
      uVar8 = 8 - iGpffff8770;
      uVar6 = *(long *)(&DAT_0044d528 + ((int)(uint)*pbVar4 >> (uVar8 & 0x1f)) * 8) << 3 |
              *(long *)(&DAT_0044d528 + ((int)(uint)pbVar4[1] >> (uVar8 & 0x1f)) * 8) << 2 |
              *(long *)(&DAT_0044d528 + ((int)(uint)pbVar4[2] >> (uVar8 & 0x1f)) * 8) << 1 |
              *(ulong *)(&DAT_0044d528 + ((int)(uint)pbVar4[3] >> (uVar8 & 0x1f)) * 8);
      if (iGpffff8770 == 0) {
        bVar3 = *(byte *)(*(int *)(param_5 + 0x4000) + 0x18);
      }
      else {
        bVar3 = FUN_002b24d0(*(undefined4 *)
                              (*(int *)(param_5 + 0x4000) + ((uint)uVar6 & 0xf) * 4 + 0x1c),
                             uVar6 >> 4,iGpffff8770 + -1);
      }
      *pbVar10 = bVar3;
      pbVar10 = pbVar10 + 1;
    }
  }
  return;
}


// ==== FUN_002b1e68 @ 002b1e68 ====

undefined4 FUN_002b1e68(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 1 << (uGpffff8770 & 0x1f);
  uVar5 = 0;
  if (uVar8 != 0) {
    do {
      uVar6 = 0;
      uVar4 = 0;
      uVar7 = uVar5 + 1;
      if (uGpffff8770 != 0) {
        uVar1 = 1;
        do {
          uVar4 = uVar4 + 1;
          if ((uVar5 & uVar1) != 0) {
            uVar6 = (long)(1 << ((uGpffff8770 - uVar4) * 4 & 0x1f)) | uVar6;
          }
          uVar1 = 1 << (uVar4 & 0x1f);
        } while (uVar4 < uGpffff8770);
      }
      *(ulong *)(&DAT_0044d528 + uVar5 * 8) = uVar6;
      uVar5 = uVar7;
    } while (uVar7 < uVar8);
  }
  uVar3 = FUN_002a5ce8(0x5c,0x400,4,0x30411);
  *(int *)(param_1 + 0x4004) = (int)uVar3;
  iVar2 = (*DAT_00449550)(uVar3,0x30411);
  *(int *)(param_1 + 0x4000) = iVar2;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  return 1;
}


// ==== FUN_002b1f90 @ 002b1f90 ====

void FUN_002b1f90(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_1;
  iVar2 = *(int *)(iVar6 + 0x4000);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(iVar6 + 0x4004);
  }
  else {
    if (0 < iGpffff8770) {
      iVar5 = iGpffff8770 + -1;
      iVar7 = 0xf;
      puVar4 = (undefined4 *)(iVar2 + 0x1c);
      uVar3 = *puVar4;
      while( true ) {
        iVar7 = iVar7 + -8;
        FUN_002b2518(param_1,uVar3,iVar5);
        FUN_002b2518(param_1,puVar4[1],iVar5);
        FUN_002b2518(param_1,puVar4[2],iVar5);
        FUN_002b2518(param_1,puVar4[3],iVar5);
        FUN_002b2518(param_1,puVar4[4],iVar5);
        FUN_002b2518(param_1,puVar4[5],iVar5);
        FUN_002b2518(param_1,puVar4[6],iVar5);
        puVar1 = puVar4 + 7;
        puVar4 = puVar4 + 8;
        FUN_002b2518(param_1,*puVar1,iVar5);
        if (iVar7 < 0) break;
        uVar3 = *puVar4;
      }
    }
    (*DAT_00449554)(*(undefined4 *)(iVar6 + 0x4004),iVar2);
    uVar3 = *(undefined4 *)(iVar6 + 0x4004);
  }
  *(undefined4 *)(iVar6 + 0x4000) = 0;
  FUN_002a65f0(uVar3);
  return;
}


// ==== FUN_002b20b0 @ 002b20b0 ====

long FUN_002b20b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1;
    if (param_3 < 1) {
      FUN_002af938(param_1,param_2);
    }
    else {
      puVar8 = (undefined4 *)param_1;
      *(undefined1 *)(puVar8 + 6) = 0;
      iVar6 = 0;
      *puVar8 = 0;
      iVar9 = (int)param_3;
      puVar8[1] = 0;
      puVar7 = puVar8 + 7;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      do {
        pcVar5 = (char *)param_2;
        uVar3 = iVar9 - (iGpffff8770 + -7);
        cStack_90 = *pcVar5 + (char)((iVar6 >> 3 & 1U) << (uVar3 & 0x1f));
        cStack_8f = pcVar5[1] + (char)((iVar6 >> 2 & 1U) << (uVar3 & 0x1f));
        cStack_8e = pcVar5[2] + (char)((iVar6 >> 1 & 1U) << (uVar3 & 0x1f));
        cStack_8d = pcVar5[3] + (char)(0 << (uVar3 & 0x1f));
        lVar1 = FUN_002b20b0(*puVar7,&cStack_90,iVar9 + -1);
        if (lVar1 != 0) {
          FUN_002afa48(param_1,param_1,lVar1);
        }
        uVar4 = iVar6 + 1;
        uVar3 = iVar9 - (iGpffff8770 + -7);
        cStack_90 = *pcVar5 + (char)(((int)uVar4 >> 3 & 1U) << (uVar3 & 0x1f));
        cStack_8f = pcVar5[1] + (char)(((int)uVar4 >> 2 & 1U) << (uVar3 & 0x1f));
        cStack_8e = pcVar5[2] + (char)(((int)uVar4 >> 1 & 1U) << (uVar3 & 0x1f));
        cStack_8d = pcVar5[3] + (char)((uVar4 & 1) << (uVar3 & 0x1f));
        lVar1 = FUN_002b20b0(puVar7[1],&cStack_90,iVar9 + -1);
        if (lVar1 != 0) {
          FUN_002afa48(param_1,param_1,lVar1);
        }
        iVar6 = iVar6 + 2;
        puVar7 = puVar7 + 2;
      } while (iVar6 < 0x10);
    }
  }
  return lVar2;
}


// ==== FUN_002b2288 @ 002b2288 ====

int FUN_002b2288(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  
  iVar12 = 0;
  if (param_1 != 0) {
    puVar14 = (undefined4 *)((int)param_1 + 0x1c);
    if (param_2 < 1) {
      iVar12 = 1;
    }
    else {
      iVar13 = (int)param_2 + -1;
      uVar2 = *puVar14;
      puVar11 = puVar14;
      while( true ) {
        puVar14 = puVar14 + 8;
        iVar3 = FUN_002b2288(uVar2,iVar13);
        iVar4 = FUN_002b2288(puVar11[1],iVar13);
        iVar5 = FUN_002b2288(puVar11[2],iVar13);
        iVar6 = FUN_002b2288(puVar11[3],iVar13);
        iVar7 = FUN_002b2288(puVar11[4],iVar13);
        iVar8 = FUN_002b2288(puVar11[5],iVar13);
        iVar9 = FUN_002b2288(puVar11[6],iVar13);
        puVar1 = puVar11 + 7;
        puVar11 = puVar11 + 8;
        iVar10 = FUN_002b2288(*puVar1,iVar13);
        iVar12 = iVar12 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
        if ((int)param_1 + 0x5c <= (int)puVar14) break;
        uVar2 = *puVar11;
      }
    }
  }
  return iVar12;
}


// ==== FUN_002b2388 @ 002b2388 ====

int FUN_002b2388(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != 0) {
    iVar2 = (int)param_1;
    puVar5 = (undefined4 *)(iVar2 + 0x1c);
    if (param_4 < 1) {
      FUN_002afcb8((int)param_2 + param_3 * 4,param_1);
      *(char *)(iVar2 + 0x18) = (char)param_3;
      param_3 = param_3 + 1;
    }
    else {
      iVar4 = (int)param_4 + -1;
      puVar3 = puVar5;
      do {
        uVar1 = FUN_002b2388(*puVar3,param_2,param_3,iVar4);
        puVar5 = puVar5 + 8;
        uVar1 = FUN_002b2388(puVar3[1],param_2,uVar1,iVar4);
        uVar1 = FUN_002b2388(puVar3[2],param_2,uVar1,iVar4);
        uVar1 = FUN_002b2388(puVar3[3],param_2,uVar1,iVar4);
        uVar1 = FUN_002b2388(puVar3[4],param_2,uVar1,iVar4);
        uVar1 = FUN_002b2388(puVar3[5],param_2,uVar1,iVar4);
        uVar1 = FUN_002b2388(puVar3[6],param_2,uVar1,iVar4);
        param_3 = FUN_002b2388(puVar3[7],param_2,uVar1,iVar4);
        puVar3 = puVar3 + 8;
      } while ((int)puVar5 < iVar2 + 0x5c);
    }
  }
  return param_3;
}


// ==== FUN_002b24d0 @ 002b24d0 ====

ulong FUN_002b24d0(int param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (param_3 == 0) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_002b24d0(*(undefined4 *)(param_1 + ((uint)param_2 & 0xf) * 4 + 0x1c),param_2 >> 4,
                         (int)param_3 + -1);
  }
  return uVar1;
}


// ==== FUN_002b2518 @ 002b2518 ====

void FUN_002b2518(undefined8 param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2 != 0) {
    if (0 < param_3) {
      puVar5 = (undefined4 *)((int)param_2 + 0x1c);
      iVar4 = (int)param_3 + -1;
      uVar2 = *puVar5;
      puVar3 = puVar5;
      while( true ) {
        puVar5 = puVar5 + 8;
        FUN_002b2518(param_1,uVar2,iVar4);
        FUN_002b2518(param_1,puVar3[1],iVar4);
        FUN_002b2518(param_1,puVar3[2],iVar4);
        FUN_002b2518(param_1,puVar3[3],iVar4);
        FUN_002b2518(param_1,puVar3[4],iVar4);
        FUN_002b2518(param_1,puVar3[5],iVar4);
        FUN_002b2518(param_1,puVar3[6],iVar4);
        puVar1 = puVar3 + 7;
        puVar3 = puVar3 + 8;
        FUN_002b2518(param_1,*puVar1,iVar4);
        if ((int)param_2 + 0x5c <= (int)puVar5) break;
        uVar2 = *puVar3;
      }
    }
    (*DAT_00449554)(*(undefined4 *)((int)param_1 + 0x4004),param_2);
  }
  return;
}


// ==== FUN_002b2638 @ 002b2638 ====

undefined8 FUN_002b2638(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 in_v0_udw;
  undefined4 in_v1_udw;
  undefined4 in_register_0000003c;
  uint uVar8;
  undefined1 auVar9 [16];
  uint *puVar10;
  uint uVar11;
  undefined4 in_vc13;
  
  if (param_1 != -1) {
    register0x000001c0 = (BADSPACEBASE *)puGpffff8e8c;
  }
  if (((int)param_1 - 1U < 2) && (*(char *)((int)register0x000001c0 + -0x7190) != '\0')) {
    *(char *)((int)register0x000001c0 + -0x7190) = *(char *)((int)register0x000001c0 + -0x7190) + -1
    ;
  }
  if (((*(char *)((int)register0x000001c0 + -0x7190) == '\0') &&
      (puVar10 = *(uint **)((int)register0x000001c0 + -0x7188),
      puVar10 != *(uint **)((int)register0x000001c0 + -0x7184))) &&
     (*(char *)((int)register0x000001c0 + -0x71f1) == '\0')) {
    auVar9._8_8_ = in_v0_udw;
    auVar9._0_8_ = 0x6008000;
    auVar4._4_4_ = in_register_0000003c;
    auVar4._0_4_ = in_v1_udw;
    auVar4._8_8_ = 0;
    auVar9 = _pcpyld(auVar4 << 0x40,auVar9);
    uVar5 = *puVar10;
    do {
      uVar8 = uVar5 & 0xff;
      if (uVar8 == 0x41) {
        uVar5 = puVar10[1];
        *(undefined1 *)((int)register0x000001c0 + -0x71f1) = 1;
        *(uint *)((int)register0x000001c0 + -0x718c) = uVar5;
        cVar1 = *(char *)((int)register0x000001c0 + -0x71f2);
        *(undefined1 *)((int)register0x000001c0 + -0x71f0) = 1;
LAB_002b2adc:
        *(char *)((int)register0x000001c0 + -0x71f2) = cVar1 + -1;
        iVar7 = *(int *)((int)register0x000001c0 + -0x7188);
LAB_002b2b30:
        uVar5 = iVar7 + 8;
      }
      else {
        if (0x41 < uVar8) {
          if (uVar8 != 0x43) {
            if (uVar8 < 0x43) {
              if ((uVar5 & 0xffff000) == 0) {
                *(int *)puVar10[1] = *(int *)puVar10[1] + -1;
              }
              else {
                *(int *)puVar10[1] = *(int *)puVar10[1] - ((uVar5 & 0xffff000) >> 0xc);
              }
            }
            else {
              if (uVar8 != 0x4f) {
                if (uVar8 == 0x7f) {
                  uVar5 = puVar10[1];
                }
                else {
                  uVar5 = *(int *)((int)register0x000001c0 + -0x7188) + 8;
                }
                goto LAB_002b2b34;
              }
              lVar2 = (*(code *)puVar10[1])((int)param_1 != -1);
              *(bool *)((int)register0x000001c0 + -0x7190) = lVar2 == 0;
            }
          }
          iVar7 = *(int *)((int)register0x000001c0 + -0x7188);
          goto LAB_002b2b30;
        }
        if (uVar8 == 2) {
          do {
            iVar7 = REG_DMAC_1_VIF1_CHCR;
            uVar11 = REG_DMAC_2_GIF_CHCR;
            uVar8 = REG_VIF1_STAT;
            uVar5 = iVar7 >> 8 & 1;
            uVar6 = uVar5 | 2;
            if ((uVar11 & 0x100) == 0) {
              uVar6 = uVar5;
            }
            uVar5 = uVar6 | 4;
            if ((uVar8 & 0x1f000003) == 0) {
              uVar5 = uVar6;
            }
            uVar3 = _cfc2(in_vc13);
            uVar8 = REG_GIF_STAT;
            uVar11 = uVar5 | 8;
            if ((uVar3 & 0x100) == 0) {
              uVar11 = uVar5;
            }
          } while (((uVar8 & 0xc00) != 0) || (uVar11 != 0));
          REG_GIF_MODE = 0;
          puVar10 = *(uint **)((int)register0x000001c0 + -0x7188);
          if ((*puVar10 & 0x300) == 0) {
            REG_DMAC_2_GIF_MADR = puVar10[1];
            REG_DMAC_2_GIF_QWC = (*puVar10 & 0xffff000) >> 0xc;
            uVar5 = 0x100;
          }
          else {
            REG_DMAC_2_GIF_TADR = puVar10[1];
            REG_DMAC_2_GIF_QWC = 0;
            uVar5 = (*puVar10 & 0x1300) >> 6 | 0x100;
          }
          REG_DMAC_2_GIF_CHCR = uVar5;
          SYNC(0);
LAB_002b2a64:
          *(char *)((int)register0x000001c0 + -0x7190) =
               *(char *)((int)register0x000001c0 + -0x7190) + '\x01';
          iVar7 = *(int *)((int)register0x000001c0 + -0x7188);
          goto LAB_002b2b30;
        }
        if (uVar8 < 3) {
          if (uVar8 == 1) {
            if ((uVar5 & 0x300) == 0) {
              REG_DMAC_1_VIF1_MADR = puVar10[1];
              REG_DMAC_1_VIF1_QWC = (*puVar10 & 0xffff000) >> 0xc;
              REG_DMAC_1_VIF1_CHCR = 0x101;
            }
            else {
              REG_DMAC_1_VIF1_TADR = puVar10[1];
              REG_DMAC_1_VIF1_QWC = 0;
              REG_DMAC_1_VIF1_CHCR = (*puVar10 & 0x1300) >> 6 | 0x101;
            }
            SYNC(0);
            goto LAB_002b2a64;
          }
          uVar5 = *(int *)((int)register0x000001c0 + -0x7188) + 8;
        }
        else {
          if (uVar8 == 0x21) {
            do {
              iVar7 = REG_DMAC_1_VIF1_CHCR;
              uVar11 = REG_DMAC_2_GIF_CHCR;
              uVar8 = REG_VIF1_STAT;
              uVar5 = iVar7 >> 8 & 1;
              uVar6 = uVar5 | 2;
              if ((uVar11 & 0x100) == 0) {
                uVar6 = uVar5;
              }
              uVar5 = uVar6 | 4;
              if ((uVar8 & 0x1f000003) == 0) {
                uVar5 = uVar6;
              }
              uVar3 = _cfc2(in_vc13);
              uVar8 = REG_GIF_STAT;
              uVar11 = uVar5 | 8;
              if ((uVar3 & 0x100) == 0) {
                uVar11 = uVar5;
              }
            } while (((uVar8 & 0xc00) != 0) || (uVar11 != 0));
            REG_VIF1_FIFO = auVar9._0_4_;
            DAT_10005004 = auVar9._4_4_;
            DAT_10005008 = auVar9._8_4_;
            DAT_1000500c = auVar9._12_4_;
            SYNC(0);
            uVar5 = REG_GIF_STAT;
            while ((uVar5 & 2) == 0) {
              uVar5 = REG_GIF_STAT;
            }
            REG_GIF_MODE = 4;
            REG_DMAC_2_GIF_TADR = *(undefined4 *)(*(int *)((int)register0x000001c0 + -0x7188) + 0xc)
            ;
            REG_DMAC_2_GIF_QWC = 0;
            REG_DMAC_2_GIF_CHCR = 0x104;
            REG_DMAC_1_VIF1_TADR = *(undefined4 *)(*(int *)((int)register0x000001c0 + -0x7188) + 4);
            REG_DMAC_1_VIF1_QWC = 0;
            SYNC(0);
            uVar5 = REG_GIF_STAT;
            while ((uVar5 & 0x1f000000) == 0) {
              uVar5 = REG_GIF_STAT;
            }
            REG_DMAC_1_VIF1_CHCR = 0x145;
            *(int *)((int)register0x000001c0 + -0x7188) =
                 *(int *)((int)register0x000001c0 + -0x7188) + 8;
            *(char *)((int)register0x000001c0 + -0x7190) =
                 *(char *)((int)register0x000001c0 + -0x7190) + '\x02';
            iVar7 = *(int *)((int)register0x000001c0 + -0x7188);
            goto LAB_002b2b30;
          }
          if (uVar8 == 0x40) {
            uVar5 = puVar10[1];
            *(undefined1 *)((int)register0x000001c0 + -0x71f1) = 1;
            *(uint *)((int)register0x000001c0 + -0x718c) = uVar5;
            cVar1 = *(char *)((int)register0x000001c0 + -0x71f2);
            *(undefined1 *)((int)register0x000001c0 + -0x71f0) = 0;
            goto LAB_002b2adc;
          }
          uVar5 = *(int *)((int)register0x000001c0 + -0x7188) + 8;
        }
      }
LAB_002b2b34:
      *(uint *)((int)register0x000001c0 + -0x7188) = uVar5;
      if (((*(char *)((int)register0x000001c0 + -0x7190) != '\0') ||
          (puVar10 = *(uint **)((int)register0x000001c0 + -0x7188),
          puVar10 == *(uint **)((int)register0x000001c0 + -0x7184))) ||
         (*(char *)((int)register0x000001c0 + -0x71f1) != '\0')) break;
      uVar5 = *puVar10;
    } while( true );
  }
  if (param_1 != -1) {
    SYNC(0);
    EI();
  }
  return 0xffffffffffffffff;
}


// ==== FUN_002b2ba8 @ 002b2ba8 ====

undefined8 FUN_002b2ba8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  iVar3 = iGpffff8e8c;
  if (*(byte *)(iGpffff8e8c + -0x717f) < *(byte *)(iGpffff8e8c + -0x787c)) {
    if (*(byte *)(iGpffff8e8c + -0x787c) != 0xff) {
      *(byte *)(iGpffff8e8c + -0x717f) = *(byte *)(iGpffff8e8c + -0x717f) + 1;
    }
    SYNC(0);
    EI();
    return 0;
  }
  if ((param_1 != 2) || (*(char *)(iGpffff8e8c + -0x71f1) == '\0')) goto LAB_002b2df4;
  *(undefined1 *)(iGpffff8e8c + -0x71f1) = 0;
  *(undefined1 *)(iGpffff8e8c + -0x717f) = 1;
  iVar2 = *(int *)(iGpffff8e8c + -0x718c);
  uVar8 = REG_GS_CSR;
  uVar8 = uVar8 >> 0xc & 2;
  if (uVar8 == 0) {
    FUN_003720b0((*(byte *)(iGpffff8e8c + -0x71f0) & 1) * 0x28 + iVar2);
    cVar4 = *(char *)(iVar3 + -0x71f0);
  }
  else {
    FUN_003720b0(iVar2 + (*(byte *)(iGpffff8e8c + -0x71f0) & 1) * 0x28 + 0x350);
    cVar4 = *(char *)(iVar3 + -0x71f0);
  }
  if (cVar4 == '\0') {
    if (uVar8 == 0) {
      uVar7 = *(undefined8 *)(iVar2 + 0x330);
      uVar6 = *(undefined8 *)(iVar2 + 0x338);
      goto LAB_002b2cf8;
    }
    REG_GS_DISPFB1 = *(undefined8 *)(iVar2 + 0x3a0);
    REG_GS_DISPLAY1 = *(undefined8 *)(iVar2 + 0x3a8);
    cVar4 = *(char *)(iVar3 + -0x71f4);
  }
  else if (uVar8 == 0) {
    REG_GS_DISPFB1 = *(undefined8 *)(iVar2 + 0x340);
    REG_GS_DISPLAY1 = *(undefined8 *)(iVar2 + 0x348);
    cVar4 = *(char *)(iVar3 + -0x71f4);
  }
  else {
    uVar7 = *(undefined8 *)(iVar2 + 0x3b0);
    uVar6 = *(undefined8 *)(iVar2 + 0x3b8);
LAB_002b2cf8:
    REG_GS_DISPFB1 = uVar7;
    REG_GS_DISPLAY1 = uVar6;
    cVar4 = *(char *)(iVar3 + -0x71f4);
  }
  bVar1 = *(byte *)(iVar3 + -0x71f0);
  if (cVar4 != '\0') {
    if (uVar8 == 0) {
      *(undefined1 *)(iVar3 + -0x71f3) = 1;
      cVar4 = *(char *)(iVar3 + -0x71f0);
    }
    else {
      *(undefined1 *)(iVar3 + -0x71f3) = 0;
      cVar4 = *(char *)(iVar3 + -0x71f0);
    }
    uVar5 = (uint)uVar8 ^ 2;
    if (cVar4 == '\0') {
      uVar5 = uVar5 << 2;
      *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xfffffff7 | uVar5;
      *(uint *)(iVar2 + 0x104) = *(uint *)(iVar2 + 0x104) & 0xfffffff7 | uVar5;
    }
    else {
      uVar5 = uVar5 << 2;
      *(uint *)(iVar2 + 500) = *(uint *)(iVar2 + 500) & 0xfffffff7 | uVar5;
      *(uint *)(iVar2 + 0x274) = *(uint *)(iVar2 + 0x274) & 0xfffffff7 | uVar5;
    }
    bVar1 = *(byte *)(iVar3 + -0x71f0);
  }
  iVar2 = *(int *)(iVar2 + ((uint)uVar8 | bVar1 & 1) * 4 + 0x3c0);
  if (iVar2 == 0) {
    FUN_002b2638(0xffffffffffffffff);
  }
  else {
    REG_DMAC_2_GIF_TADR = iVar2;
    REG_DMAC_2_GIF_QWC = 0;
    REG_DMAC_2_GIF_CHCR = 0x104;
    SYNC(0);
    *(char *)(iVar3 + -0x7190) = *(char *)(iVar3 + -0x7190) + '\x01';
  }
LAB_002b2df4:
  SYNC(0);
  EI();
  return 0;
}


// ==== FUN_002b2e20 @ 002b2e20 ====

/* WARNING: Removing unreachable block (ram,0x002b3104) */
/* WARNING: Removing unreachable block (ram,0x002b3118) */

void FUN_002b2e20(void)

{
  char cVar1;
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
  undefined8 in_v0_udw;
  ulong in_v1_udw;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  ulong in_a0_udw;
  int iVar22;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  undefined8 in_a3_udw;
  ulong in_t0_udw;
  int iVar23;
  
  if (uGpffff8e6c == 0) {
    uVar20 = (uint)uGpffff8e8a;
    if (uGpffff8e88 == uVar20) {
      return;
    }
    uVar19 = (uint)uGpffff8e88;
    if (uVar19 == uVar20) {
      return;
    }
    uGpffff8e88 = 0;
    uGpffff8e8a = 0;
    do {
      iVar22 = *(int *)(uVar19 * 4 + iGpffff8e84);
      iVar23 = *(int *)(iVar22 + 4);
      *(undefined4 *)(iVar22 + 4) = 0;
      if (0 < iVar23) {
        do {
          iVar22 = 0xffff;
          if (iVar23 < 0x10000) {
            iVar22 = iVar23;
          }
          iVar23 = iVar23 + -0xffff;
          FUN_002b34f0(*(undefined4 *)(uVar19 * 4 + iGpffff8e84),iVar22 << 0xc | 0x42);
        } while (0 < iVar23);
      }
      uVar19 = uVar19 + 1 & 0xffff;
      if (uVar19 == uGpffff8786) {
        uVar19 = 0;
      }
    } while (uVar19 != uVar20);
    return;
  }
  if ((int)uGpffff8e6c >> 0x1f < 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = in_v1_udw;
    auVar14 = auVar14 << 0x40;
    uVar20 = ((int)puGpffff8e00 + ((iGpffff8e20 - uGpffff8e68) - iGpffff8e1c) >> 4) - 1;
    if (uVar20 == 0) {
      iGpffff8e20 = iGpffff8e20 + -0x10;
    }
    else {
      auVar13._0_8_ = ((long)(int)uVar20 | 0x50000000U) << 0x20;
      auVar13._8_8_ = in_v1_udw;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar20 | 0x10000000;
      auVar2._8_8_ = in_v0_udw;
      auVar14 = _pcpyld(auVar13,auVar2);
      puVar21 = (undefined4 *)(uGpffff8e68 | 0x20000000);
      *puVar21 = auVar14._0_4_;
      puVar21[1] = auVar14._4_4_;
      puVar21[2] = auVar14._8_4_;
      puVar21[3] = auVar14._12_4_;
    }
    uGpffff8e68 = 0;
    in_v1_udw = auVar14._8_8_;
    uGpffff8e6c = uGpffff8e6c & 0x7fffffff;
  }
  if (puGpffff8e04 == (undefined4 *)0x0) {
    auVar18._8_8_ = in_v1_udw;
    auVar18._0_8_ = 0x70000000;
    auVar6._8_8_ = in_a0_udw;
    auVar6._0_8_ = 0x6000000;
    auVar14 = _pcpyld(auVar6,auVar18);
    *puGpffff8e00 = auVar14._0_4_;
    puGpffff8e00[1] = auVar14._4_4_;
    puGpffff8e00[2] = auVar14._8_4_;
    puGpffff8e00[3] = auVar14._12_4_;
  }
  else {
    if (uGpffff8e6c != 0x102) {
      auVar3._8_8_ = in_v0_udw;
      auVar3._0_8_ = 0x70000000;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = in_t0_udw;
      auVar14 = _pcpyld(auVar10 << 0x40,auVar3);
      auVar15._8_8_ = in_v1_udw;
      auVar15._0_8_ = 0x5000000211000000;
      *puGpffff8e04 = auVar14._0_4_;
      puGpffff8e04[1] = auVar14._4_4_;
      puGpffff8e04[2] = auVar14._8_4_;
      puGpffff8e04[3] = auVar14._12_4_;
      auVar4._8_8_ = in_v0_udw;
      auVar4._0_8_ = 0x70000003;
      auVar14 = _pcpyld(auVar15,auVar4);
      auVar16._8_8_ = in_v1_udw;
      auVar16._0_8_ = 0x1000000000008001;
      *puGpffff8e00 = auVar14._0_4_;
      puGpffff8e00[1] = auVar14._4_4_;
      puGpffff8e00[2] = auVar14._8_4_;
      puGpffff8e00[3] = auVar14._12_4_;
      auVar5._8_8_ = in_a0_udw;
      auVar5._0_8_ = 0xe;
      auVar14 = _pcpyld(auVar5,auVar16);
      puGpffff8e00[4] = auVar14._0_4_;
      puGpffff8e00[5] = auVar14._4_4_;
      puGpffff8e00[6] = auVar14._8_4_;
      puGpffff8e00[7] = auVar14._12_4_;
      auVar7._8_8_ = in_a1_udw;
      auVar7._0_8_ = 0x7f;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = in_t0_udw;
      auVar14 = _pcpyld(auVar7,auVar11 << 0x40);
      puGpffff8e00[8] = auVar14._0_4_;
      puGpffff8e00[9] = auVar14._4_4_;
      puGpffff8e00[10] = auVar14._8_4_;
      puGpffff8e00[0xb] = auVar14._12_4_;
      auVar8._8_8_ = in_a2_udw;
      auVar8._0_8_ = 0x13000000;
      auVar9._8_8_ = in_a3_udw;
      auVar9._0_8_ = 0x6000000;
      auVar14 = _pcpyld(auVar9,auVar8);
      puGpffff8e00[0xc] = auVar14._0_4_;
      puGpffff8e00[0xd] = auVar14._4_4_;
      puGpffff8e00[0xe] = auVar14._8_4_;
      puGpffff8e00[0xf] = auVar14._12_4_;
      puGpffff8e00 = puGpffff8e00 + 0x10;
      goto LAB_002b3040;
    }
    auVar17._8_8_ = in_v1_udw;
    auVar17._0_8_ = 0x70000000;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = in_a0_udw;
    auVar14 = _pcpyld(auVar12 << 0x40,auVar17);
    *puGpffff8e00 = auVar14._0_4_;
    puGpffff8e00[1] = auVar14._4_4_;
    puGpffff8e00[2] = auVar14._8_4_;
    puGpffff8e00[3] = auVar14._12_4_;
  }
  puGpffff8e00 = puGpffff8e00 + 4;
LAB_002b3040:
  uVar20 = 0;
  if (puGpffff8e00 != (undefined4 *)0x0) {
    uVar20 = (int)puGpffff8e00 - iGpffff8e1c;
  }
  if (uVar20 != 0) {
    uVar19 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar19 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar1 = getCopCondition(0,0);
      } while (cVar1 == '\0');
    }
    REG_DMAC_STAT = 0x100;
    REG_DMAC_8_SPR_FROM_SADR = iGpffff8e1c;
    REG_DMAC_8_SPR_FROM_MADR = iGpffff8e20;
    REG_DMAC_8_SPR_FROM_QWC = uVar20 >> 4;
    REG_DMAC_8_SPR_FROM_CHCR = 0x100;
    SYNC(0);
    SYNC(0x10);
    iGpffff8e20 = iGpffff8e20 + uVar20;
    uVar20 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar20 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar1 = getCopCondition(0,0);
      } while (cVar1 == '\0');
    }
  }
  uGpffff8e08 = 0;
  if (uGpffff8e2c != 0) {
    if (iGpffff8e28 == 0) {
      *piGpffff8e30 = uGpffff8e2c;
      piGpffff8e30[1] = iGpffff8e24;
    }
    else {
      *piGpffff8e30 = 0x1121;
      piGpffff8e30[1] = iGpffff8e24;
      piGpffff8e30[2] = 0x122;
      piGpffff8e30[3] = iGpffff8e28;
    }
  }
  piGpffff8e30 = (int *)iGpffff8e5c;
  iGpffff8e24 = uGpffff8e60;
  uGpffff8e2c = uGpffff8e6c;
  iGpffff8e28 = iGpffff8e64;
  iVar22 = iGpffff8e5c + 8;
  if (iGpffff8e64 != 0) {
    iVar22 = iGpffff8e5c + 0x10;
  }
  iGpffff8e5c = iVar22;
  uVar20 = (uint)uGpffff8e8a;
  puGpffff8e04 = (undefined4 *)0x0;
  puGpffff8e00 = (undefined4 *)0x0;
  uGpffff8e60 = 0;
  iGpffff8e64 = 0;
  uGpffff8e6c = 0;
  if ((uGpffff8e88 != uVar20) && (uVar19 = (uint)uGpffff8e88, uVar19 != uVar20)) {
    uGpffff8e88 = 0;
    uGpffff8e8a = 0;
    do {
      iVar22 = *(int *)(uVar19 * 4 + iGpffff8e84);
      iVar23 = *(int *)(iVar22 + 4);
      *(undefined4 *)(iVar22 + 4) = 0;
      if (0 < iVar23) {
        do {
          iVar22 = 0xffff;
          if (iVar23 < 0x10000) {
            iVar22 = iVar23;
          }
          iVar23 = iVar23 + -0xffff;
          FUN_002b34f0(*(undefined4 *)(uVar19 * 4 + iGpffff8e84),iVar22 << 0xc | 0x42);
        } while (0 < iVar23);
      }
      uVar19 = uVar19 + 1 & 0xffff;
      if (uVar19 == uGpffff8786) {
        uVar19 = 0;
      }
    } while (uVar19 != uVar20);
  }
  return;
}


// ==== FUN_002b32d8 @ 002b32d8 ====

void FUN_002b32d8(void)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  FUN_002b2e20();
  if (iGpffff8e2c != 0) {
    uVar2 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar2 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar1 = getCopCondition(0,0);
      } while (cVar1 == '\0');
    }
    if (iGpffff8e28 == 0) {
      *piGpffff8e30 = iGpffff8e2c;
      piGpffff8e30[1] = iGpffff8e24;
    }
    else {
      *piGpffff8e30 = 0x1121;
      piGpffff8e30[1] = iGpffff8e24;
      piGpffff8e30[2] = 0x122;
      piGpffff8e30[3] = iGpffff8e28;
    }
    iGpffff8e24 = 0;
    iGpffff8e28 = 0;
    iGpffff8e2c = 0;
    piGpffff8e30 = (int *)0x0;
  }
  iVar4 = iGpffff8e50 - iGpffff8e54;
  do {
    lVar3 = 0;
    if ((iGpffff8e78 != iGpffff8e7c) || (cGpffff8e70 != '\0')) {
      lVar3 = 1;
    }
    if (pcGpffff8780 != (code *)0x0) {
      (*pcGpffff8780)(lVar3,iVar4);
    }
  } while (lVar3 != 0);
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  iGpffff8e7c = iGpffff8e5c;
  iGpffff8e78 = *(undefined4 *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4);
  EI();
  bGpffff8e44 = bGpffff8e44 ^ 1;
  iGpffff8e54 = *(int *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4) + 0x80;
  iGpffff8e48 = *(int *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4) + iGpffff8e40;
  iGpffff8e58 = *(int *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4) + 0x78;
  iGpffff8e5c = *(int *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4);
  iGpffff8e50 = iGpffff8e48;
  uGpffff8e00 = 0;
  uGpffff8e04 = 0;
  FUN_003681d0(*(int *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4),
               *(int *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4) + iGpffff8e40 + -1);
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  FUN_002b2638(0xffffffffffffffff);
  EI();
  return;
}


// ==== FUN_002b34f0 @ 002b34f0 ====

void FUN_002b34f0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (iGpffff8e00 != 0 || iGpffff8e04 != 0) {
    FUN_002b2e20();
  }
  if (iGpffff8e2c != 0) {
    uVar2 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar2 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar1 = getCopCondition(0,0);
      } while (cVar1 == '\0');
    }
    if (iGpffff8e28 == 0) {
      *piGpffff8e30 = iGpffff8e2c;
      piGpffff8e30[1] = iGpffff8e24;
    }
    else {
      *piGpffff8e30 = 0x1121;
      piGpffff8e30[1] = iGpffff8e24;
      piGpffff8e30[2] = 0x122;
      piGpffff8e30[3] = iGpffff8e28;
    }
    iGpffff8e24 = 0;
    iGpffff8e28 = 0;
    iGpffff8e2c = 0;
    piGpffff8e30 = (int *)0x0;
  }
  if (puGpffff8e5c < puGpffff8e58) {
    *puGpffff8e5c = param_2;
    puGpffff8e5c[1] = param_1;
    puVar3 = puGpffff8e5c;
  }
  else {
    puVar3 = (undefined4 *)((int)puGpffff8e54 + 0x3fU & 0xffffffc0);
    if (puGpffff8e50 < puVar3 + 0x20) {
      *puGpffff8e5c = param_2;
      puGpffff8e5c[1] = param_1;
      puGpffff8e5c = puGpffff8e5c + 2;
      FUN_002b32d8();
      return;
    }
    puGpffff8e58 = puVar3 + 0x1e;
    *puGpffff8e5c = 0x7f;
    puGpffff8e5c[1] = puVar3;
    puVar3[1] = param_1;
    *puVar3 = param_2;
    puGpffff8e54 = puVar3 + 0x20;
  }
  puGpffff8e5c = puVar3 + 2;
  return;
}


// ==== FUN_002b3668 @ 002b3668 ====

void FUN_002b3668(undefined8 param_1,ulong param_2)

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
  undefined8 in_v0_udw;
  undefined4 *puVar10;
  ulong in_v1_udw;
  undefined4 uVar11;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar12 [16];
  undefined4 uVar15;
  uint uVar16;
  
  FUN_002b3d88(0,0x18);
  auVar12._8_8_ = in_v0_udw;
  auVar12._0_8_ = 0x10000017;
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = 0x5000000211000000;
  auVar12 = _pcpyld(auVar4,auVar12);
  *puGpffff8e00 = auVar12._0_4_;
  puGpffff8e00[1] = auVar12._4_4_;
  puGpffff8e00[2] = auVar12._8_4_;
  puGpffff8e00[3] = auVar12._12_4_;
  auVar1._8_8_ = in_v0_udw;
  auVar1._0_8_ = 0x1000000000008001;
  auVar5._8_8_ = in_v1_udw;
  auVar5._0_8_ = 0xe;
  auVar12 = _pcpyld(auVar5,auVar1);
  puGpffff8e00[4] = auVar12._0_4_;
  puGpffff8e00[5] = auVar12._4_4_;
  puGpffff8e00[6] = auVar12._8_4_;
  puGpffff8e00[7] = auVar12._12_4_;
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0x7f;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = in_v1_udw;
  auVar12 = _pcpyld(auVar2,auVar6 << 0x40);
  puGpffff8e00[8] = auVar12._0_4_;
  puGpffff8e00[9] = auVar12._4_4_;
  puGpffff8e00[10] = auVar12._8_4_;
  puGpffff8e00[0xb] = auVar12._12_4_;
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = 0x13000000;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = in_v1_udw;
  auVar12 = _pcpyld(auVar3,auVar7 << 0x40);
  puGpffff8e00[0xc] = auVar12._0_4_;
  puGpffff8e00[0xd] = auVar12._4_4_;
  puGpffff8e00[0xe] = auVar12._8_4_;
  puGpffff8e00[0xf] = auVar12._12_4_;
  puVar10 = puGpffff8e00 + 0x10;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = in_v1_udw;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = in_v1_udw;
  auVar12 = _pcpyld(auVar8 << 0x40,auVar9 << 0x40);
  uVar16 = 0;
  puGpffff8e00 = puVar10;
  do {
    uVar11 = auVar12._0_4_;
    *puVar10 = uVar11;
    uVar13 = auVar12._4_4_;
    puVar10[1] = uVar13;
    uVar14 = auVar12._8_4_;
    puVar10[2] = uVar14;
    uVar15 = auVar12._12_4_;
    puVar10[3] = uVar15;
    puVar10[4] = uVar11;
    puVar10[5] = uVar13;
    puVar10[6] = uVar14;
    puVar10[7] = uVar15;
    puVar10[8] = uVar11;
    puVar10[9] = uVar13;
    puVar10[10] = uVar14;
    puVar10[0xb] = uVar15;
    puVar10[0xc] = uVar11;
    puVar10[0xd] = uVar13;
    puVar10[0xe] = uVar14;
    puVar10[0xf] = uVar15;
    puVar10[0x10] = uVar11;
    puVar10[0x11] = uVar13;
    puVar10[0x12] = uVar14;
    puVar10[0x13] = uVar15;
    puVar10[0x14] = uVar11;
    puVar10[0x15] = uVar13;
    puVar10[0x16] = uVar14;
    puVar10[0x17] = uVar15;
    puVar10[0x18] = uVar11;
    puVar10[0x19] = uVar13;
    puVar10[0x1a] = uVar14;
    puVar10[0x1b] = uVar15;
    puVar10[0x1c] = uVar11;
    puVar10[0x1d] = uVar13;
    puVar10[0x1e] = uVar14;
    puVar10[0x1f] = uVar15;
    puVar10[0x20] = uVar11;
    puVar10[0x21] = uVar13;
    puVar10[0x22] = uVar14;
    puVar10[0x23] = uVar15;
    puVar10[0x24] = uVar11;
    puVar10[0x25] = uVar13;
    puVar10[0x26] = uVar14;
    puVar10[0x27] = uVar15;
    puVar10 = puVar10 + 0x28;
    uVar16 = uVar16 + 10;
    puGpffff8e00 = puGpffff8e00 + 0x28;
  } while (uVar16 < 0x14);
  if (cGpffff8e80 != '\0') {
    FUN_002b32d8();
  }
  cGpffff8e80 = 1;
  if ((param_2 & 1) == 0) {
    FUN_002b34f0();
  }
  else {
    FUN_002b34f0();
  }
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  cGpffff8e0e = cGpffff8e0e + '\x01';
  if ((cGpffff8e70 == '\0') && (cGpffff8e0f == '\0')) {
    FUN_002b2638(0xffffffffffffffff);
  }
  EI();
  return;
}


// ==== FUN_002b3800 @ 002b3800 ====

undefined4 FUN_002b3800(int param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined8 in_v0_udw;
  int iVar11;
  undefined1 in_v1_qw [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 *puVar15;
  ulong in_a0_udw;
  int iVar16;
  undefined8 in_a1_udw;
  uint uVar17;
  undefined4 *puVar18;
  ulong in_a2_udw;
  undefined8 in_a3_udw;
  long lVar19;
  undefined1 auVar20 [16];
  int iVar21;
  
  while( true ) {
    iVar21 = param_1 + 1;
    if (iGpffff8e6c != 0) {
      if (iGpffff8e6c == 0x102) {
        iVar16 = iVar21 * 0x10;
        iVar11 = (int)puGpffff8e00 - (int)puGpffff8e1c;
        in_v1_qw._0_8_ = (ulong)iVar11;
        if ((undefined4 *)(uGpffff8e20 + iVar11 + iVar16) < puGpffff8e50) {
          if (0x2000 < (uint)(iVar11 + iVar16)) {
            lVar19 = 0;
            if (puGpffff8e00 != (undefined4 *)0x0) {
              lVar19 = in_v1_qw._0_8_;
            }
            if (lVar19 != 0) {
              uVar17 = REG_DMAC_8_SPR_FROM_CHCR;
              if ((uVar17 & 0x100) != 0) {
                REG_DMAC_PCR = 0x100;
                SYNC(0);
                SYNC(0x10);
                do {
                  cVar1 = getCopCondition(0,0);
                } while (cVar1 == '\0');
              }
              REG_DMAC_STAT = 0x100;
              REG_DMAC_8_SPR_FROM_SADR = puGpffff8e1c;
              REG_DMAC_8_SPR_FROM_MADR = uGpffff8e20;
              REG_DMAC_8_SPR_FROM_QWC = (uint)lVar19 >> 4;
              REG_DMAC_8_SPR_FROM_CHCR = 0x100;
              SYNC(0);
              SYNC(0x10);
              if ((uGpffff8e08 != 0) && ((uGpffff8e08 & 0xffffc000) == 0x70000000)) {
                uGpffff8e08 = uGpffff8e20 + (uGpffff8e08 - (int)puGpffff8e1c) | 0x20000000;
              }
              uGpffff8e20 = uGpffff8e20 + (uint)lVar19;
              puGpffff8e00 = puGpffff8e1c;
              uVar17 = REG_DMAC_8_SPR_FROM_CHCR;
              if ((uVar17 & 0x100) != 0) {
                REG_DMAC_PCR = 0x100;
                SYNC(0);
                SYNC(0x10);
                do {
                  cVar1 = getCopCondition(0,0);
                } while (cVar1 == '\0');
              }
            }
          }
          puGpffff8e54 = (undefined4 *)
                         ((int)puGpffff8e00 + ((uGpffff8e20 + iVar16) - (int)puGpffff8e1c));
          return 1;
        }
      }
      if (puGpffff8e04 != (undefined4 *)0x0) {
        in_v1_qw._0_8_ =
             CONCAT71(0,puGpffff8e50 <
                        (undefined4 *)
                        (((int)puGpffff8e00 + (uGpffff8e20 - (int)puGpffff8e1c) + 0xff & 0xffffff80)
                        + iVar21 * 0x10));
        if (in_v1_qw._0_8_ == 0) {
          if (iGpffff8e6c < 0) {
            uVar17 = ((int)puGpffff8e00 + ((uGpffff8e20 - uGpffff8e68) - (int)puGpffff8e1c) >> 4) -
                     1;
            if (uVar17 == 0) {
              uGpffff8e20 = uGpffff8e20 + -0x10;
            }
            else {
              auVar12._0_8_ = ((long)(int)uVar17 | 0x50000000U) << 0x20;
              auVar12._8_8_ = in_v1_qw._8_8_;
              auVar20._4_4_ = 0;
              auVar20._0_4_ = uVar17 | 0x10000000;
              auVar20._8_8_ = in_v0_udw;
              in_v1_qw = _pcpyld(auVar12,auVar20);
              puVar15 = (undefined4 *)(uGpffff8e68 | 0x20000000);
              *puVar15 = in_v1_qw._0_4_;
              puVar15[1] = in_v1_qw._4_4_;
              puVar15[2] = in_v1_qw._8_4_;
              puVar15[3] = in_v1_qw._12_4_;
            }
            uGpffff8e68 = 0;
          }
          auVar13._8_8_ = in_v1_qw._8_8_;
          auVar13._0_8_ = 0x70000003;
          auVar3._8_8_ = in_a0_udw;
          auVar3._0_8_ = 0x5000000211000000;
          auVar20 = _pcpyld(auVar3,auVar13);
          *puGpffff8e00 = auVar20._0_4_;
          puGpffff8e00[1] = auVar20._4_4_;
          puGpffff8e00[2] = auVar20._8_4_;
          puGpffff8e00[3] = auVar20._12_4_;
          auVar5._8_8_ = in_a1_udw;
          auVar5._0_8_ = 0x1000000000008001;
          auVar6._8_8_ = in_a2_udw;
          auVar6._0_8_ = 0xe;
          auVar20 = _pcpyld(auVar6,auVar5);
          puGpffff8e00[4] = auVar20._0_4_;
          puGpffff8e00[5] = auVar20._4_4_;
          puGpffff8e00[6] = auVar20._8_4_;
          puGpffff8e00[7] = auVar20._12_4_;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = in_a0_udw;
          auVar7._8_8_ = in_a3_udw;
          auVar7._0_8_ = 0x7f;
          auVar20 = _pcpyld(auVar7,auVar8 << 0x40);
          puGpffff8e00[8] = auVar20._0_4_;
          puGpffff8e00[9] = auVar20._4_4_;
          puGpffff8e00[10] = auVar20._8_4_;
          puGpffff8e00[0xb] = auVar20._12_4_;
          auVar14._8_8_ = auVar13._8_8_;
          auVar14._0_8_ = 0x13000000;
          auVar4._8_8_ = in_a0_udw;
          auVar4._0_8_ = 0x6000000;
          auVar20 = _pcpyld(auVar4,auVar14);
          puGpffff8e00[0xc] = auVar20._0_4_;
          puGpffff8e00[0xd] = auVar20._4_4_;
          puGpffff8e00[0xe] = auVar20._8_4_;
          puGpffff8e00[0xf] = auVar20._12_4_;
          uVar17 = 0;
          if (puGpffff8e00 + 0x10 != (undefined4 *)0x0) {
            uVar17 = (int)(puGpffff8e00 + 0x10) - (int)puGpffff8e1c;
          }
          if (uVar17 != 0) {
            uVar10 = REG_DMAC_8_SPR_FROM_CHCR;
            if ((uVar10 & 0x100) != 0) {
              REG_DMAC_PCR = 0x100;
              SYNC(0);
              SYNC(0x10);
              do {
                cVar1 = getCopCondition(0,0);
              } while (cVar1 == '\0');
            }
            REG_DMAC_STAT = 0x100;
            REG_DMAC_8_SPR_FROM_SADR = puGpffff8e1c;
            REG_DMAC_8_SPR_FROM_MADR = uGpffff8e20;
            REG_DMAC_8_SPR_FROM_QWC = uVar17 >> 4;
            REG_DMAC_8_SPR_FROM_CHCR = 0x100;
            SYNC(0);
            SYNC(0x10);
            if ((uGpffff8e08 != 0) && ((uGpffff8e08 & 0xffffc000) == 0x70000000)) {
              uGpffff8e08 = uGpffff8e20 + (uGpffff8e08 - (int)puGpffff8e1c) | 0x20000000;
            }
            uGpffff8e20 = uGpffff8e20 + uVar17;
            uVar17 = REG_DMAC_8_SPR_FROM_CHCR;
            if ((uVar17 & 0x100) != 0) {
              REG_DMAC_PCR = 0x100;
              SYNC(0);
              SYNC(0x10);
              do {
                cVar1 = getCopCondition(0,0);
              } while (cVar1 == '\0');
            }
          }
          uGpffff8e20 = (uGpffff8e20 + 0xcf & 0xffffff80) - 0x10;
          auVar2._8_8_ = in_v0_udw;
          auVar2._0_8_ = (ulong)uGpffff8e20 << 0x20 | 0x20000000;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = in_a2_udw;
          auVar20 = _pcpyld(auVar9 << 0x40,auVar2);
          *puGpffff8e04 = auVar20._0_4_;
          puGpffff8e04[1] = auVar20._4_4_;
          puGpffff8e04[2] = auVar20._8_4_;
          puGpffff8e04[3] = auVar20._12_4_;
          iGpffff8e6c = 0x102;
          puGpffff8e54 = (undefined4 *)(uGpffff8e20 + iVar21 * 0x10);
          puGpffff8e00 = puGpffff8e1c;
          return 1;
        }
      }
      FUN_002b2e20();
    }
    iVar11 = (int)puGpffff8e54 >> 0x1f;
    puVar15 = puGpffff8e54;
    if (puGpffff8e5c == puGpffff8e58) {
      puVar18 = (undefined4 *)((int)puGpffff8e54 + 0x3fU & 0xffffffc0);
      puVar15 = puVar18 + 0x20;
      iVar11 = (int)puVar15 >> 0x1f;
      in_v1_qw._0_8_ = (ulong)(int)(puVar18 + 0x1e);
      if (puVar15 < puGpffff8e50) {
        *puGpffff8e5c = 0x7f;
        puGpffff8e5c[1] = puVar18;
        puGpffff8e54 = puVar15;
        puGpffff8e58 = puVar18 + 0x1e;
        puGpffff8e5c = puVar18;
      }
      else {
        puVar15 = (undefined4 *)0x0;
        iVar11 = 0;
      }
    }
    if (CONCAT44(iVar11,puVar15) != 0) {
      uVar17 = (int)puVar15 + 0x8fU & 0xffffff80;
      in_v1_qw._0_8_ = (ulong)(int)(uVar17 + param_1 * 0x10);
      if (in_v1_qw._0_8_ <= (ulong)(long)(int)puGpffff8e50) {
        uGpffff8e20 = uVar17 - 0x10;
        puGpffff8e00 = puGpffff8e1c;
        puGpffff8e54 = (undefined4 *)(uGpffff8e20 + iVar21 * 0x10);
        iGpffff8e60 = uGpffff8e20;
        iGpffff8e6c = 0x102;
        return 1;
      }
    }
    in_v1_qw._0_8_ = CONCAT71(0,uGpffff8e40 < iVar21 * 0x10 + 0x130U);
    if (in_v1_qw._0_8_ != 0) break;
    FUN_002b32d8();
  }
  return 0;
}


// ==== FUN_002b3d88 @ 002b3d88 ====

undefined4 FUN_002b3d88(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 in_v0_udw;
  uint uVar3;
  undefined8 in_v1_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  while( true ) {
    iVar2 = param_2 + 4;
    if ((param_1 & 0x80000000 & ~uGpffff8e6c) != 0) {
      iVar2 = param_2 + 5;
    }
    if (uGpffff8e6c != 0) {
      if ((uGpffff8e6c & 0x7fffffff) == 0x1101) {
        iVar6 = iVar2 * 0x10;
        uVar3 = iGpffff8e00 - iGpffff8e1c;
        if ((undefined4 *)(uGpffff8e20 + uVar3 + iVar6) < puGpffff8e50) {
          if (0x2000 < uVar3 + iVar6) {
            uVar9 = 0;
            if (iGpffff8e00 != 0) {
              uVar9 = uVar3;
            }
            if (uVar9 != 0) {
              uVar3 = REG_DMAC_8_SPR_FROM_CHCR;
              if ((uVar3 & 0x100) != 0) {
                REG_DMAC_PCR = 0x100;
                SYNC(0);
                SYNC(0x10);
                do {
                  cVar1 = getCopCondition(0,0);
                } while (cVar1 == '\0');
              }
              REG_DMAC_STAT = 0x100;
              REG_DMAC_8_SPR_FROM_SADR = iGpffff8e1c;
              REG_DMAC_8_SPR_FROM_MADR = uGpffff8e20;
              REG_DMAC_8_SPR_FROM_QWC = uVar9 >> 4;
              REG_DMAC_8_SPR_FROM_CHCR = 0x100;
              SYNC(0);
              SYNC(0x10);
              if ((uGpffff8e08 != 0) && ((uGpffff8e08 & 0xffffc000) == 0x70000000)) {
                uGpffff8e08 = uGpffff8e20 + (uGpffff8e08 - iGpffff8e1c) | 0x20000000;
              }
              uGpffff8e20 = uGpffff8e20 + uVar9;
              iGpffff8e00 = iGpffff8e1c;
              uVar3 = REG_DMAC_8_SPR_FROM_CHCR;
              if ((uVar3 & 0x100) != 0) {
                REG_DMAC_PCR = 0x100;
                SYNC(0);
                SYNC(0x10);
                do {
                  cVar1 = getCopCondition(0,0);
                } while (cVar1 == '\0');
              }
            }
          }
          iVar2 = uGpffff8e20 + iVar6 + iGpffff8e00;
          if ((uGpffff8e6c & 0x80000000) != param_1) {
            if ((uGpffff8e6c & ~param_1 & 0x80000000) != 0) {
              uVar3 = ((uGpffff8e20 - uGpffff8e68) + (iGpffff8e00 - iGpffff8e1c) >> 4) - 1;
              if ((long)(int)uVar3 == 0) {
                uGpffff8e20 = uGpffff8e20 - 0x10;
              }
              else {
                auVar4._0_8_ = ((long)(int)uVar3 | 0x50000000U) << 0x20;
                auVar4._8_8_ = in_v1_udw;
                auVar5._4_4_ = 0;
                auVar5._0_4_ = uVar3 | 0x10000000;
                auVar5._8_8_ = in_v0_udw;
                auVar5 = _pcpyld(auVar4,auVar5);
                puVar8 = (undefined4 *)(uGpffff8e68 | 0x20000000);
                *puVar8 = auVar5._0_4_;
                puVar8[1] = auVar5._4_4_;
                puVar8[2] = auVar5._8_4_;
                puVar8[3] = auVar5._12_4_;
              }
              uGpffff8e68 = 0;
              uGpffff8e6c = uGpffff8e6c & 0x7fffffff;
            }
            if ((~uGpffff8e6c & param_1 & 0x80000000) != 0) {
              uVar3 = 0;
              if (iGpffff8e00 != 0) {
                uVar3 = iGpffff8e00 - iGpffff8e1c;
              }
              if (uVar3 != 0) {
                uVar9 = REG_DMAC_8_SPR_FROM_CHCR;
                if ((uVar9 & 0x100) != 0) {
                  REG_DMAC_PCR = 0x100;
                  SYNC(0);
                  SYNC(0x10);
                  do {
                    cVar1 = getCopCondition(0,0);
                  } while (cVar1 == '\0');
                }
                REG_DMAC_STAT = 0x100;
                REG_DMAC_8_SPR_FROM_SADR = iGpffff8e1c;
                REG_DMAC_8_SPR_FROM_MADR = uGpffff8e20;
                REG_DMAC_8_SPR_FROM_QWC = uVar3 >> 4;
                REG_DMAC_8_SPR_FROM_CHCR = 0x100;
                SYNC(0);
                SYNC(0x10);
                if ((uGpffff8e08 != 0) && ((uGpffff8e08 & 0xffffc000) == 0x70000000)) {
                  uGpffff8e08 = uGpffff8e20 + (uGpffff8e08 - iGpffff8e1c) | 0x20000000;
                }
                uGpffff8e20 = uGpffff8e20 + uVar3;
                iGpffff8e00 = iGpffff8e1c;
                uVar3 = REG_DMAC_8_SPR_FROM_CHCR;
                if ((uVar3 & 0x100) != 0) {
                  REG_DMAC_PCR = 0x100;
                  SYNC(0);
                  SYNC(0x10);
                  do {
                    cVar1 = getCopCondition(0,0);
                  } while (cVar1 == '\0');
                }
              }
              uGpffff8e68 = uGpffff8e20;
              uGpffff8e6c = uGpffff8e6c | 0x80000000;
              uGpffff8e20 = uGpffff8e20 + 0x10;
            }
          }
          puGpffff8e54 = (undefined4 *)(iVar2 - iGpffff8e1c);
          return 1;
        }
      }
      if ((param_1 & 0x80000000 & ~uGpffff8e6c) != 0) {
        iVar2 = iVar2 + -1;
      }
      FUN_002b2e20();
    }
    puVar8 = puGpffff8e54;
    if (puGpffff8e58 + -2 <= puGpffff8e5c) {
      puVar7 = (undefined4 *)((int)puGpffff8e54 + 0x3fU & 0xffffffc0);
      puVar8 = puVar7 + 0x20;
      if (puVar8 < puGpffff8e50) {
        *puGpffff8e5c = 0x7f;
        puGpffff8e5c[1] = puVar7;
        puGpffff8e54 = puVar8;
        puGpffff8e58 = puVar7 + 0x1e;
        puGpffff8e5c = puVar7;
      }
      else {
        puVar8 = (undefined4 *)0x0;
      }
    }
    if (param_1 != 0) {
      iVar2 = iVar2 + 1;
    }
    if (puVar8 != (undefined4 *)0x0) {
      uVar3 = (int)puVar8 + 0x7fU & 0xffffff80;
      puVar8 = (undefined4 *)(uVar3 + iVar2 * 0x10);
      if (puVar8 <= puGpffff8e50) {
        if (param_1 == 0) {
          iGpffff8e00 = iGpffff8e1c;
          uGpffff8e20 = uVar3;
          puGpffff8e54 = puVar8;
          uGpffff8e60 = uVar3;
          uGpffff8e6c = 0x1101;
          return 1;
        }
        iGpffff8e00 = iGpffff8e1c;
        uGpffff8e20 = uVar3 + 0x10;
        puGpffff8e54 = puVar8;
        uGpffff8e60 = uVar3;
        uGpffff8e68 = uVar3;
        uGpffff8e6c = 0x80001101;
        return 1;
      }
    }
    param_2 = iVar2;
    if (param_1 != 0) {
      param_2 = iVar2 + -1;
    }
    if (uGpffff8e40 < param_2 * 0x10 + 0xc0U) break;
    FUN_002b32d8();
  }
  return 0;
}


// ==== FUN_002b42d0 @ 002b42d0 ====

uint FUN_002b42d0(uint param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  while( true ) {
    uVar3 = DAT_0040e65c;
    uVar5 = DAT_0040e640;
    if (param_2 != 0) {
      uVar4 = 0;
      if (DAT_0040e5f0 != 0) {
        uVar4 = DAT_0040e5f0 - DAT_0040e60c;
      }
      if (uVar4 != 0) {
        uVar2 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar2 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar1 = getCopCondition(0,0);
          } while (cVar1 == '\0');
        }
        REG_DMAC_STAT = 0x100;
        REG_DMAC_8_SPR_FROM_SADR = DAT_0040e60c;
        REG_DMAC_8_SPR_FROM_MADR = DAT_0040e610;
        REG_DMAC_8_SPR_FROM_QWC = uVar4 >> 4;
        REG_DMAC_8_SPR_FROM_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        if ((DAT_0040e5f8 != 0) && ((DAT_0040e5f8 & 0xffffc000) == 0x70000000)) {
          DAT_0040e5f8 = DAT_0040e610 + (DAT_0040e5f8 - DAT_0040e60c) | 0x20000000;
        }
        DAT_0040e610 = DAT_0040e610 + uVar4;
        DAT_0040e5f0 = DAT_0040e60c;
        uVar4 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar4 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar1 = getCopCondition(0,0);
          } while (cVar1 == '\0');
        }
      }
      uVar4 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar4 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar1 = getCopCondition(0,0);
        } while (cVar1 == '\0');
      }
    }
    uVar4 = 0x7f;
    if (param_1 < 0x80) {
      uVar4 = 0x3f;
    }
    param_1 = param_1 + uVar4 & ~uVar4;
    uVar4 = (DAT_0040e640 & ~uVar4) - param_1;
    if (DAT_0040e644 < uVar4) break;
    uVar5 = (DAT_0040e644 - DAT_0040e610) + 0x9f & 0xffffff80;
    if (DAT_0040e630 < param_1 + uVar5 + 0x80) {
      return 0;
    }
    FUN_002b2e20();
    if (*(int *)(&DAT_0040e628 + (uint)DAT_0040e634 * 4) != DAT_0040e64c) {
      FUN_002b32d8();
    }
    if (uVar3 == 0x102) {
      FUN_002b3800(uVar5 >> 4);
    }
    else {
      FUN_002b3d88(uVar3 & 0x80000000,uVar5 >> 4);
    }
  }
  DAT_0040e640 = uVar4;
  DAT_0040e638 = uVar5;
  return uVar4;
}


// ==== FUN_002b4578 @ 002b4578 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002b4578(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_v0_udw;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  undefined1 auVar16 [16];
  undefined8 in_a2_udw;
  ulong in_a3_udw;
  undefined8 in_t0_udw;
  ulong uVar17;
  
  lVar2 = FUN_002b3d88(0,2);
  if (lVar2 == 0) {
LAB_002b45e0:
    uVar15 = 0;
  }
  else {
    if ((DAT_0040e5f4 == (undefined4 *)0x0) ||
       (DAT_0040e63c - (int)DAT_0040e5f4 < (uint)((param_2 + 4) * 0x10))) {
      uVar17 = FUN_002b42d0((param_2 + 3) * 0x10,0);
      if (uVar17 == 0) goto LAB_002b45e0;
      DAT_0040e63c = DAT_0040e638 | 0x30000000;
    }
    else {
      uVar17 = (long)(int)(DAT_0040e5f4 + 4) & 0xffffffffcfffffff;
    }
    puVar9 = DAT_0040e5f4;
    uVar8 = (uint)uVar17;
    if (DAT_0040e5f4 != (undefined4 *)0x0) {
      auVar16._8_8_ = in_v0_udw;
      auVar16._0_8_ = (ulong)(DAT_0040df6c + 0x3f0) << 0x20 | 0x50000003;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = in_a3_udw;
      auVar16 = _pcpyld(auVar6 << 0x40,auVar16);
      DAT_0040e5f4[-0xc] = auVar16._0_4_;
      puVar9[-0xb] = auVar16._4_4_;
      puVar9[-10] = auVar16._8_4_;
      puVar9[-9] = auVar16._12_4_;
      auVar4._8_8_ = in_a2_udw;
      auVar4._0_8_ = 0x1000000000000040;
      auVar5._8_8_ = in_t0_udw;
      auVar5._0_8_ = 0xe;
      auVar16 = _pcpyld(auVar5,auVar4);
      *DAT_0040e5f4 = auVar16._0_4_;
      DAT_0040e5f4[1] = auVar16._4_4_;
      DAT_0040e5f4[2] = auVar16._8_4_;
      DAT_0040e5f4[3] = auVar16._12_4_;
      auVar3._8_4_ = in_a0_udw;
      auVar3._0_8_ = uVar17 << 0x20 | 0x20000000;
      auVar3._12_4_ = in_register_0000004c;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = in_a3_udw;
      auVar16 = _pcpyld(auVar7 << 0x40,auVar3);
      DAT_0040e5f4[4] = auVar16._0_4_;
      DAT_0040e5f4[5] = auVar16._4_4_;
      DAT_0040e5f4[6] = auVar16._8_4_;
      DAT_0040e5f4[7] = auVar16._12_4_;
      uVar8 = DAT_0040e654;
    }
    DAT_0040e654 = uVar8;
    uVar14 = DAT_0044e12c;
    uVar13 = DAT_0044e128;
    uVar12 = _DAT_0044e120;
    uVar11 = DAT_0044e10c;
    uVar10 = DAT_0044e108;
    uVar15 = DAT_0044e104;
    DAT_0040e5f4 = (undefined4 *)((uint)uVar17 | 0x30000000);
    if ((param_1 == 0) || (DAT_0040e5f8 == (undefined4 *)0x0)) {
      *DAT_0040e5f0 = (int)_DAT_0044e120;
      DAT_0040e5f0[1] = (int)((ulong)uVar12 >> 0x20);
      DAT_0040e5f0[2] = uVar13;
      DAT_0040e5f0[3] = uVar14;
      puVar9 = DAT_0040e5f0;
    }
    else {
      if ((((uint)DAT_0040e5f8 & 0xffffc000) != 0x70000000) &&
         (uVar8 = REG_DMAC_8_SPR_FROM_CHCR, (uVar8 & 0x100) != 0)) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar1 = getCopCondition(0,0);
        } while (cVar1 == '\0');
      }
      *DAT_0040e5f8 = DAT_0044e100;
      DAT_0040e5f8[1] = uVar15;
      DAT_0040e5f8[2] = uVar10;
      DAT_0040e5f8[3] = uVar11;
      uVar11 = DAT_0044e11c;
      uVar10 = DAT_0044e118;
      uVar15 = DAT_0044e114;
      *DAT_0040e5f0 = DAT_0044e110;
      DAT_0040e5f0[1] = uVar15;
      DAT_0040e5f0[2] = uVar10;
      DAT_0040e5f0[3] = uVar11;
      puVar9 = DAT_0040e5f0;
    }
    uVar11 = DAT_0044e13c;
    uVar10 = DAT_0044e138;
    uVar12 = _DAT_0044e130;
    DAT_0040e5f0 = puVar9 + 4;
    uVar15 = 1;
    *DAT_0040e5f0 = (int)_DAT_0044e130;
    puVar9[5] = (int)((ulong)uVar12 >> 0x20);
    puVar9[6] = uVar10;
    puVar9[7] = uVar11;
    DAT_0040e5f8 = DAT_0040e5f0;
    DAT_0040e5f0 = DAT_0040e5f0 + 4;
  }
  return uVar15;
}


// ==== FUN_002b4780 @ 002b4780 ====

undefined4 FUN_002b4780(void)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  
  DAT_0040e67c = &_mips_gp0_value;
  lVar2 = AddIntcHandler(2,0x2b2ba8,0);
  DAT_0040df80 = (undefined4)lVar2;
  if (lVar2 != -1) {
    lVar2 = AddDmacHandler(1,0x2b2638,0);
    DAT_0040df84 = (undefined4)lVar2;
    if (lVar2 == -1) {
      RemoveIntcHandler(2,DAT_0040df80);
      DAT_0040df80 = 0xffffffff;
    }
    else {
      lVar2 = AddDmacHandler(2,0x2b2638,0);
      uVar3 = (undefined4)lVar2;
      DAT_0040df88 = uVar3;
      if (lVar2 != -1) {
        DAT_0040e671 = 1;
        DAT_0040df8c = FUN_003682d0(2);
        DAT_0040df8d = FUN_003683a0(1);
        DAT_0040df8e = FUN_003683a0(2);
        uVar1 = REG_VIF0_ERR;
        REG_VIF0_ERR = uVar1 | 2;
        REG_VIF1_ERR = uVar1 | 2;
        uVar1 = REG_DMAC_CTRL;
        REG_DMAC_CTRL = uVar1 & 0xfffff8fd;
        return 1;
      }
      RemoveDmacHandler(1,DAT_0040df84);
      DAT_0040df84 = uVar3;
      RemoveIntcHandler(2,DAT_0040df80);
      DAT_0040df80 = 0xffffffff;
    }
  }
  return 0;
}


// ==== FUN_002b48b0 @ 002b48b0 ====

void FUN_002b48b0(void)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  FUN_002b2e20();
  uVar2 = uGpffff8e88;
  if (iGpffff8e2c != 0) {
    uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar6 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar1 = getCopCondition(0,0);
      } while (cVar1 == '\0');
    }
    if (iGpffff8e28 == 0) {
      *piGpffff8e30 = iGpffff8e2c;
      piGpffff8e30[1] = iGpffff8e24;
    }
    else {
      *piGpffff8e30 = 0x1121;
      piGpffff8e30[1] = iGpffff8e24;
      piGpffff8e30[2] = 0x122;
      piGpffff8e30[3] = iGpffff8e28;
    }
    iGpffff8e24 = 0;
    iGpffff8e28 = 0;
    iGpffff8e2c = 0;
    piGpffff8e30 = (int *)0x0;
  }
  uVar6 = (uint)uGpffff8e8a;
  if (uGpffff8e88 != uVar6) {
    uGpffff8e88 = 0;
    uGpffff8e8a = 0;
    uVar3 = (uint)uVar2;
    do {
      iVar4 = *(int *)(uVar3 * 4 + iGpffff8e84);
      iVar5 = *(int *)(iVar4 + 4);
      *(undefined4 *)(iVar4 + 4) = 0;
      for (; 0 < iVar5; iVar5 = iVar5 + -0xffff) {
        iVar4 = 0xffff;
        if (iVar5 < 0x10000) {
          iVar4 = iVar5;
        }
        FUN_002b34f0(*(undefined4 *)(uVar3 * 4 + iGpffff8e84),iVar4 << 0xc | 0x42);
      }
      uVar3 = uVar3 + 1 & 0xffff;
      if (uVar3 == uGpffff8786) {
        uVar3 = 0;
      }
    } while (uVar3 != uVar6);
  }
  if (*(int *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4) != iGpffff8e5c) {
    FUN_002b32d8();
  }
  do {
    do {
    } while (cGpffff8e70 != '\0');
  } while (cGpffff8e0f != '\0');
  FUN_002b4ff0();
  return;
}


// ==== FUN_002b4a90 @ 002b4a90 ====

undefined4 FUN_002b4a90(void)

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
  undefined4 uVar20;
  int iVar21;
  long lVar22;
  ulong in_v0_udw;
  undefined4 *puVar23;
  ulong in_v1_udw;
  int iVar24;
  undefined8 in_a0_udw;
  ulong in_a1_udw;
  undefined8 in_a2_udw;
  undefined8 in_a3_udw;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar25 [16];
  undefined4 uVar28;
  int iVar29;
  uint uVar30;
  
  iVar24 = 0x100000;
  if (iGpffff878c != 0) {
    iVar24 = iGpffff878c;
  }
  if (iGpffff8788 == 0) {
    lVar22 = (*DAT_00449540)(iVar24 + 0x80,0x40411);
    iGpffff8788 = (int)lVar22;
    if (lVar22 == 0) {
      return 0;
    }
    iGpffff878c = 0;
  }
  uVar30 = iGpffff8788 + 0x7fU & 0xffffff80;
  lVar22 = FUN_002b4780();
  if (lVar22 == 0) {
    uVar20 = 0;
    if (iGpffff878c == 0) {
      (*DAT_00449544)(iGpffff8788);
      uVar20 = 0;
    }
  }
  else {
    iGpffff8e38 = uVar30 + 0x800;
    uGpffff8e44 = 0;
    uGpffff8e40 = iVar24 + -0x800 + (uint)uGpffff8786 * -4 >> 1 & 0xffffff80;
    uGpffff8e88 = 0;
    iGpffff8e3c = iGpffff8e38 + uGpffff8e40;
    iGpffff8e84 = iGpffff8e3c + uGpffff8e40;
    uGpffff8e8a = 0;
    uGpffff8e00 = 0;
    iGpffff8e54 = uVar30 + 0x880;
    iGpffff8e58 = uVar30 + 0x878;
    uGpffff8e04 = 0;
    uGpffff8e60 = 0;
    uGpffff8e68 = 0;
    uGpffff8e6c = 0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = in_v0_udw;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = in_v0_udw;
    auVar25 = _pcpyld(auVar25 << 0x40,auVar15 << 0x40);
    iVar24 = 0;
    iVar29 = 0x7f;
    do {
      iVar29 = iVar29 + -8;
      puVar23 = (undefined4 *)(iVar24 + uVar30);
      uVar20 = auVar25._0_4_;
      *puVar23 = uVar20;
      uVar26 = auVar25._4_4_;
      puVar23[1] = uVar26;
      uVar27 = auVar25._8_4_;
      puVar23[2] = uVar27;
      uVar28 = auVar25._12_4_;
      puVar23[3] = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x10) = uVar20;
      *(undefined4 *)(iVar21 + 0x14) = uVar26;
      *(undefined4 *)(iVar21 + 0x18) = uVar27;
      *(undefined4 *)(iVar21 + 0x1c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x20) = uVar20;
      *(undefined4 *)(iVar21 + 0x24) = uVar26;
      *(undefined4 *)(iVar21 + 0x28) = uVar27;
      *(undefined4 *)(iVar21 + 0x2c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x30) = uVar20;
      *(undefined4 *)(iVar21 + 0x34) = uVar26;
      *(undefined4 *)(iVar21 + 0x38) = uVar27;
      *(undefined4 *)(iVar21 + 0x3c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x40) = uVar20;
      *(undefined4 *)(iVar21 + 0x44) = uVar26;
      *(undefined4 *)(iVar21 + 0x48) = uVar27;
      *(undefined4 *)(iVar21 + 0x4c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x50) = uVar20;
      *(undefined4 *)(iVar21 + 0x54) = uVar26;
      *(undefined4 *)(iVar21 + 0x58) = uVar27;
      *(undefined4 *)(iVar21 + 0x5c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x60) = uVar20;
      *(undefined4 *)(iVar21 + 100) = uVar26;
      *(undefined4 *)(iVar21 + 0x68) = uVar27;
      *(undefined4 *)(iVar21 + 0x6c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x70) = uVar20;
      *(undefined4 *)(iVar21 + 0x74) = uVar26;
      *(undefined4 *)(iVar21 + 0x78) = uVar27;
      *(undefined4 *)(iVar21 + 0x7c) = uVar28;
      iVar24 = iVar24 + 0x80;
    } while (-1 < iVar29);
    auVar1._8_8_ = in_v0_udw;
    auVar1._0_8_ = 0x11000000;
    auVar3._8_8_ = in_v1_udw;
    auVar3._0_8_ = 0x600000000000000;
    auVar25 = _pcpyld(auVar3,auVar1);
    *(int *)(uVar30 + 0x70) = auVar25._0_4_;
    *(int *)(uVar30 + 0x74) = auVar25._4_4_;
    *(int *)(uVar30 + 0x78) = auVar25._8_4_;
    *(int *)(uVar30 + 0x7c) = auVar25._12_4_;
    auVar6._8_8_ = in_a0_udw;
    auVar6._0_8_ = 0x6008000;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = in_a1_udw;
    auVar25 = _pcpyld(auVar16 << 0x40,auVar6);
    iVar24 = 0x400;
    iVar29 = 0x3f;
    *(int *)(uVar30 + 0x200) = auVar25._0_4_;
    *(int *)(uVar30 + 0x204) = auVar25._4_4_;
    *(int *)(uVar30 + 0x208) = auVar25._8_4_;
    *(int *)(uVar30 + 0x20c) = auVar25._12_4_;
    auVar4._8_8_ = in_v1_udw;
    auVar4._0_8_ = 0x1300000011000000;
    auVar5._8_8_ = in_v1_udw;
    auVar5._0_8_ = 0x1300000011000000;
    auVar25 = _pcpyld(auVar4,auVar5);
    *(int *)(uVar30 + 0x210) = auVar25._0_4_;
    *(int *)(uVar30 + 0x214) = auVar25._4_4_;
    *(int *)(uVar30 + 0x218) = auVar25._8_4_;
    *(int *)(uVar30 + 0x21c) = auVar25._12_4_;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = in_a1_udw;
    auVar9._8_8_ = in_a2_udw;
    auVar9._0_8_ = 0x60000040;
    auVar25 = _pcpyld(auVar17 << 0x40,auVar9);
    *(int *)(uVar30 + 0x3f0) = auVar25._0_4_;
    *(int *)(uVar30 + 0x3f4) = auVar25._4_4_;
    *(int *)(uVar30 + 0x3f8) = auVar25._8_4_;
    *(int *)(uVar30 + 0x3fc) = auVar25._12_4_;
    auVar7._8_8_ = in_a0_udw;
    auVar7._0_8_ = 0x7f;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = in_a1_udw;
    auVar25 = _pcpyld(auVar7,auVar18 << 0x40);
    do {
      iVar29 = iVar29 + -8;
      puVar23 = (undefined4 *)(iVar24 + uVar30);
      uVar20 = auVar25._0_4_;
      *puVar23 = uVar20;
      uVar26 = auVar25._4_4_;
      puVar23[1] = uVar26;
      uVar27 = auVar25._8_4_;
      puVar23[2] = uVar27;
      uVar28 = auVar25._12_4_;
      puVar23[3] = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x10) = uVar20;
      *(undefined4 *)(iVar21 + 0x14) = uVar26;
      *(undefined4 *)(iVar21 + 0x18) = uVar27;
      *(undefined4 *)(iVar21 + 0x1c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x20) = uVar20;
      *(undefined4 *)(iVar21 + 0x24) = uVar26;
      *(undefined4 *)(iVar21 + 0x28) = uVar27;
      *(undefined4 *)(iVar21 + 0x2c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x30) = uVar20;
      *(undefined4 *)(iVar21 + 0x34) = uVar26;
      *(undefined4 *)(iVar21 + 0x38) = uVar27;
      *(undefined4 *)(iVar21 + 0x3c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x40) = uVar20;
      *(undefined4 *)(iVar21 + 0x44) = uVar26;
      *(undefined4 *)(iVar21 + 0x48) = uVar27;
      *(undefined4 *)(iVar21 + 0x4c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x50) = uVar20;
      *(undefined4 *)(iVar21 + 0x54) = uVar26;
      *(undefined4 *)(iVar21 + 0x58) = uVar27;
      *(undefined4 *)(iVar21 + 0x5c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x60) = uVar20;
      *(undefined4 *)(iVar21 + 100) = uVar26;
      *(undefined4 *)(iVar21 + 0x68) = uVar27;
      *(undefined4 *)(iVar21 + 0x6c) = uVar28;
      iVar21 = iVar24 + uVar30;
      *(undefined4 *)(iVar21 + 0x70) = uVar20;
      *(undefined4 *)(iVar21 + 0x74) = uVar26;
      *(undefined4 *)(iVar21 + 0x78) = uVar27;
      *(undefined4 *)(iVar21 + 0x7c) = uVar28;
      iVar24 = iVar24 + 0x80;
    } while (-1 < iVar29);
    auVar8._4_4_ = uVar30;
    auVar8._0_4_ = 0x30000021;
    auVar8._8_8_ = in_a0_udw;
    auVar10._8_8_ = in_a2_udw;
    auVar10._0_8_ = 0x1300000011000000;
    auVar25 = _pcpyld(auVar10,auVar8);
    DAT_0044e100 = auVar25._0_4_;
    DAT_0044e104 = auVar25._4_4_;
    DAT_0044e108 = auVar25._8_4_;
    DAT_0044e10c = auVar25._12_4_;
    auVar2._4_4_ = uVar30;
    auVar2._0_4_ = 0x30000022;
    auVar2._8_8_ = in_v0_udw;
    auVar11._8_8_ = in_a2_udw;
    auVar11._0_8_ = 0x1300000011000000;
    auVar25 = _pcpyld(auVar11,auVar2);
    DAT_0044e120 = auVar25._0_4_;
    DAT_0044e124 = auVar25._4_4_;
    DAT_0044e128 = auVar25._8_4_;
    DAT_0044e12c = auVar25._12_4_;
    auVar12._8_8_ = in_a2_udw;
    auVar12._0_8_ = 0x1300000011000000;
    auVar13._8_8_ = in_a3_udw;
    auVar13._0_8_ = 0x10000000;
    auVar25 = _pcpyld(auVar12,auVar13);
    DAT_0044e110 = auVar25._0_4_;
    DAT_0044e114 = auVar25._4_4_;
    DAT_0044e118 = auVar25._8_4_;
    DAT_0044e11c = auVar25._12_4_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = in_v1_udw;
    auVar14._8_8_ = in_a3_udw;
    auVar14._0_8_ = 0x10000000;
    auVar25 = _pcpyld(auVar19 << 0x40,auVar14);
    DAT_0044e130 = auVar25._0_4_;
    DAT_0044e134 = auVar25._4_4_;
    DAT_0044e138 = auVar25._8_4_;
    DAT_0044e13c = auVar25._12_4_;
    uGpffff877c = uVar30;
    iGpffff8e48 = iGpffff8e3c;
    iGpffff8e50 = iGpffff8e3c;
    iGpffff8e5c = iGpffff8e38;
    FUN_003680a0(uVar30,uGpffff8e40 * 2 + uVar30 + 0x7ff);
    uGpffff8e70 = 0;
    uGpffff8e1c = 0x70000000;
    uGpffff8e20 = 0;
    uVar20 = 1;
    uGpffff8e24 = 0;
    uGpffff8e28 = 0;
    uGpffff8e2c = 0;
    uGpffff8e0f = 0;
    uGpffff8e08 = 0;
    uGpffff8e80 = 0;
  }
  return uVar20;
}


// ==== FUN_002b4dc8 @ 002b4dc8 ====

void FUN_002b4dc8(undefined4 param_1)

{
  uGpffff8780 = param_1;
  return;
}


// ==== FUN_002b4dd0 @ 002b4dd0 ====

void FUN_002b4dd0(undefined1 param_1)

{
  uGpffff8784 = param_1;
  return;
}


// ==== FUN_002b4de0 @ 002b4de0 ====

void FUN_002b4de0(undefined4 param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = (uint)uGpffff8e8a;
  uGpffff8e8a = uGpffff8e8a + 1;
  *(undefined4 *)(uVar3 * 4 + iGpffff8e84) = param_1;
  if (uGpffff8e8a == uGpffff8786) {
    uGpffff8e8a = 0;
  }
  uVar1 = uGpffff8e8a;
  if (uGpffff8e88 == uGpffff8e8a) {
    uGpffff8e8a = uGpffff8e88 + (uGpffff8786 >> 1);
    if (uGpffff8786 <= uGpffff8e8a) {
      uGpffff8e8a = uGpffff8e8a - uGpffff8786;
    }
    uVar2 = uGpffff8e8a;
    FUN_002b2e20();
    uGpffff8e88 = uVar2;
  }
  uGpffff8e8a = uVar1;
  return;
}


// ==== FUN_002b4e80 @ 002b4e80 ====

void FUN_002b4e80(void)

{
  uint uVar1;
  
  if (cGpffff8e80 == '\0') {
    return;
  }
  cGpffff8e80 = 0;
  if ((cGpffff8e70 == '\0') && (cGpffff8e0f == '\0')) {
    if (iGpffff8e78 == iGpffff8e7c) {
      if (*(int *)(&gp0xffff8e38 + (uint)bGpffff8e44 * 4) == iGpffff8e5c) {
        cGpffff8e80 = 0;
        return;
      }
      FUN_002b32d8();
      return;
    }
  }
  else {
    uVar1 = (uint)bGpffff8e44;
    if (iGpffff8e78 == iGpffff8e7c) goto LAB_002b4f2c;
  }
  uVar1 = (uint)bGpffff8e44;
  if ((cGpffff8e70 == '\0') && (uVar1 = (uint)bGpffff8e44, cGpffff8e0f == '\0')) {
    FUN_002b2638(0xffffffffffffffff);
    uVar1 = (uint)bGpffff8e44;
  }
LAB_002b4f2c:
  if (*(int *)(&gp0xffff8e38 + uVar1 * 4) != iGpffff8e5c) {
    FUN_002b32d8();
  }
  return;
}


// ==== FUN_002b4f68 @ 002b4f68 ====

void FUN_002b4f68(void)

{
  FUN_002b48b0();
  uGpffff877c = 0;
  if (iGpffff878c == 0) {
    (*DAT_00449544)(uGpffff8788);
  }
  uGpffff8788 = 0;
  iGpffff878c = 0;
  uGpffff8780 = 0;
  uGpffff8784 = 0;
  return;
}


// ==== FUN_002b4fb0 @ 002b4fb0 ====

undefined4 FUN_002b4fb0(undefined4 param_1,short param_2,ulong param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    param_2 = sGpffff8786;
  }
  if ((iGpffff877c == 0) &&
     ((uVar1 = uGpffff8788, param_3 == 0 || (uVar1 = (int)param_3, (param_3 & 0x7f) == 0)))) {
    uGpffff8788 = uVar1;
    uGpffff878c = param_1;
    sGpffff8786 = param_2;
    return 1;
  }
  return 0;
}


// ==== FUN_002b4ff0 @ 002b4ff0 ====

void FUN_002b4ff0(void)

{
  if (cGpffff879e != '\0') {
    FUN_00368338(2);
    cGpffff879e = '\0';
  }
  if (cGpffff879d != '\0') {
    FUN_00368338(1);
    cGpffff879d = '\0';
  }
  if (cGpffff879c != '\0') {
    FUN_00368268(2,uGpffff8798);
    cGpffff879c = '\0';
  }
  RemoveDmacHandler(2,uGpffff8798);
  uGpffff8798 = 0xffffffff;
  RemoveDmacHandler(1,uGpffff8794);
  uGpffff8794 = 0xffffffff;
  RemoveIntcHandler(2,uGpffff8790);
  uGpffff8790 = 0xffffffff;
  return;
}


// ==== FUN_002b5088 @ 002b5088 ====

undefined4 FUN_002b5088(undefined4 param_1,ulong param_2)

{
  int iVar1;
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
  undefined4 *puVar28;
  long lVar29;
  ulong uVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined8 in_v1_udw;
  ulong uVar33;
  undefined8 in_a0_udw;
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
  undefined8 in_a1_udw;
  
  uVar32 = (uint)param_2;
  switch(param_1) {
  case 1:
    uVar31 = 1;
    uGpffff8ea0 = uVar32;
    if (param_2 != 0) {
      FUN_002cdea0(param_2);
      lVar29 = FUN_002cd230(uGpffff8ea0,0);
      if (lVar29 != 0) {
        uGpffff8820 = uGpffff8820 | 0x10;
        if ((*(byte *)(uGpffff8ea0 + 0x23) & 0xf) == 6) {
          iGpffff8ea4 = 0;
        }
        else {
          iGpffff8ea4 = 1;
        }
        goto LAB_002b514c;
      }
      uVar31 = 0;
      uGpffff8ea0 = 0;
    }
    iGpffff8ea4 = 0;
    uGpffff8820 = uGpffff8820 & 0xffffffffffffffef;
LAB_002b514c:
    if ((uGpffff8ea8 == 0) && (iGpffff8ea4 == 0)) {
      uGpffff8820 = uGpffff8820 & 0xffffffffffffffbf;
    }
    else {
      uGpffff8820 = uGpffff8820 | 0x40;
    }
    if (iGpffff8ea4 == 0) {
      if ((uGpffff87e8 & 1) == 0) {
        return uVar31;
      }
      uGpffff87e8 = uGpffff87e8 & 0xfffffffffffffffe;
      FUN_002b3d88(0xffffffff80000000,2);
      auVar36._8_8_ = in_a0_udw;
      auVar36._0_8_ = 0xe;
      auVar18._8_8_ = in_a1_udw;
      auVar18._0_8_ = 0x1000000000008001;
      auVar60 = _pcpyld(auVar36,auVar18);
      *puGpffff8e00 = auVar60._0_4_;
      puGpffff8e00[1] = auVar60._4_4_;
      puGpffff8e00[2] = auVar60._8_4_;
      puGpffff8e00[3] = auVar60._12_4_;
      puVar28 = puGpffff8e00 + 4;
      auVar37._8_8_ = auVar60._8_8_;
      auVar37._0_8_ = 0x47;
      auVar19._8_8_ = in_a1_udw;
      auVar19._0_8_ = uGpffff87e8;
      auVar60 = _pcpyld(auVar37,auVar19);
      *puVar28 = auVar60._0_4_;
      puGpffff8e00[5] = auVar60._4_4_;
      puGpffff8e00[6] = auVar60._8_4_;
      puGpffff8e00[7] = auVar60._12_4_;
    }
    else {
      if ((uGpffff87e8 & 1) != 0) {
        return uVar31;
      }
      uGpffff87e8 = uGpffff87e8 | 1;
      FUN_002b3d88(0xffffffff80000000,2);
      auVar34._8_8_ = in_a0_udw;
      auVar34._0_8_ = 0xe;
      auVar16._8_8_ = in_a1_udw;
      auVar16._0_8_ = 0x1000000000008001;
      auVar60 = _pcpyld(auVar34,auVar16);
      *puGpffff8e00 = auVar60._0_4_;
      puGpffff8e00[1] = auVar60._4_4_;
      puGpffff8e00[2] = auVar60._8_4_;
      puGpffff8e00[3] = auVar60._12_4_;
      puVar28 = puGpffff8e00 + 4;
      auVar35._8_8_ = auVar60._8_8_;
      auVar35._0_8_ = 0x47;
      auVar17._8_8_ = in_a1_udw;
      auVar17._0_8_ = uGpffff87e8;
      auVar60 = _pcpyld(auVar35,auVar17);
      *puVar28 = auVar60._0_4_;
      puGpffff8e00[5] = auVar60._4_4_;
      puGpffff8e00[6] = auVar60._8_4_;
      puGpffff8e00[7] = auVar60._12_4_;
    }
    puGpffff8e00 = puVar28 + 4;
    return uVar31;
  case 2:
    if (param_2 == 2) {
      return 0;
    }
    if (param_2 < 3) {
      if (param_2 != 1) {
        return 0;
      }
      uGpffff8800 = 0;
    }
    else {
      if (param_2 != 3) {
        return 0;
      }
      uGpffff8800 = 5;
    }
    FUN_002b3d88(0xffffffff80000000,2);
    auVar38._8_8_ = in_a0_udw;
    auVar38._0_8_ = 0xe;
    auVar14._8_8_ = in_a1_udw;
    auVar14._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar38,auVar14);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar39._8_8_ = auVar60._8_8_;
    auVar39._0_8_ = 8;
    auVar15._8_8_ = in_a1_udw;
    auVar15._0_8_ = uGpffff8800;
    auVar60 = _pcpyld(auVar39,auVar15);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 3:
    if (param_2 == 2) {
      return 0;
    }
    if (param_2 < 3) {
      if (param_2 != 1) {
        return 0;
      }
      uGpffff8800 = uGpffff8800 & 0xfffffffffffffffc;
    }
    else {
      if (param_2 != 3) {
        return 0;
      }
      uGpffff8800 = uGpffff8800 | 1;
    }
    FUN_002b3d88(0xffffffff80000000,2);
    auVar40._8_8_ = in_a0_udw;
    auVar40._0_8_ = 0xe;
    auVar12._8_8_ = in_a1_udw;
    auVar12._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar40,auVar12);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar41._8_8_ = auVar60._8_8_;
    auVar41._0_8_ = 8;
    auVar13._8_8_ = in_a1_udw;
    auVar13._0_8_ = uGpffff8800;
    auVar60 = _pcpyld(auVar41,auVar13);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 4:
    if (param_2 == 2) {
      return 0;
    }
    if (param_2 < 3) {
      if (param_2 != 1) {
        return 0;
      }
      uGpffff8800 = uGpffff8800 & 0xfffffffffffffff3;
    }
    else {
      if (param_2 != 3) {
        return 0;
      }
      uGpffff8800 = uGpffff8800 | 4;
    }
    FUN_002b3d88(0xffffffff80000000,2);
    auVar42._8_8_ = in_a0_udw;
    auVar42._0_8_ = 0xe;
    auVar10._8_8_ = in_a1_udw;
    auVar10._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar42,auVar10);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar43._8_8_ = auVar60._8_8_;
    auVar43._0_8_ = 8;
    auVar11._8_8_ = in_a1_udw;
    auVar11._0_8_ = uGpffff8800;
    auVar60 = _pcpyld(auVar43,auVar11);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 5:
    if (param_2 == 0) {
      return 0;
    }
    uVar31 = 0xfffffeff;
    goto LAB_002b5888;
  case 6:
    if (param_2 == 0) {
      uVar33 = 0x30000;
    }
    else {
      uVar33 = 0x50000;
    }
    uGpffff87e8 = uGpffff87e8 & 0xfffffffffff8ffff | uVar33;
    FUN_002b3d88(0xffffffff80000000,2);
    auVar44._8_8_ = in_a0_udw;
    auVar44._0_8_ = 0xe;
    auVar8._8_8_ = in_a1_udw;
    auVar8._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar44,auVar8);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar45._8_8_ = auVar60._8_8_;
    auVar45._0_8_ = 0x47;
    auVar9._8_8_ = in_a1_udw;
    auVar9._0_8_ = uGpffff87e8;
    auVar60 = _pcpyld(auVar45,auVar9);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 7:
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 0;
      }
      uVar32 = 8;
LAB_002b5878:
      uGpffff8820 = uGpffff8820 | uVar32;
      return 1;
    }
    uVar31 = 0xfffffff7;
    goto LAB_002b5888;
  case 8:
    if (param_2 == 0) {
      uGpffff87d8 = uGpffff87d8 | 0x100000000;
    }
    else {
      uGpffff87d8 = uGpffff87d8 & 0xfffffffeffffffff;
      if ((uGpffff87e8 & 0x10000) == 0) {
        uGpffff87e8 = uGpffff87e8 & 0xfffffffffff8ffff | 0x30000;
      }
    }
    FUN_002b3d88(0xffffffff80000000,3);
    auVar46._8_8_ = in_a0_udw;
    auVar46._0_8_ = 0xe;
    auVar5._8_8_ = in_a1_udw;
    auVar5._0_8_ = 0x1000000000008002;
    auVar60 = _pcpyld(auVar46,auVar5);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    auVar47._8_8_ = auVar60._8_8_;
    auVar47._0_8_ = 0x4e;
    auVar6._8_8_ = in_a1_udw;
    auVar6._0_8_ = uGpffff87d8;
    auVar60 = _pcpyld(auVar47,auVar6);
    puGpffff8e00[4] = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    auVar48._8_8_ = auVar60._8_8_;
    auVar48._0_8_ = 0x47;
    auVar7._8_8_ = in_a1_udw;
    auVar7._0_8_ = uGpffff87e8;
    auVar60 = _pcpyld(auVar48,auVar7);
    puGpffff8e00[8] = auVar60._0_4_;
    puGpffff8e00[9] = auVar60._4_4_;
    puGpffff8e00[10] = auVar60._8_4_;
    puGpffff8e00[0xb] = auVar60._12_4_;
    puGpffff8e00 = puGpffff8e00 + 0xc;
    return 1;
  case 9:
    switch(uVar32) {
    case 1:
      uGpffff8808 = uGpffff8808 & 0xfffffffffffffe1f;
      goto LAB_002b561c;
    case 2:
      uVar33 = 0x60;
      break;
    case 3:
      uVar33 = 0x80;
      break;
    case 4:
      uVar33 = 0x120;
      break;
    case 5:
      uVar33 = 0xc0;
      break;
    case 6:
      uVar33 = 0x160;
      break;
    default:
      goto LAB_002b5b14;
    }
    uGpffff8808 = uGpffff8808 & 0xfffffffffffffe1f | uVar33;
LAB_002b561c:
    FUN_002b3d88(0xffffffff80000000,2);
    auVar49._8_8_ = in_a0_udw;
    auVar49._0_8_ = 0xe;
    auVar26._8_8_ = in_a1_udw;
    auVar26._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar49,auVar26);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar50._8_8_ = auVar60._8_8_;
    auVar50._0_8_ = 0x14;
    auVar27._8_8_ = in_a1_udw;
    auVar27._0_8_ = uGpffff8808;
    auVar60 = _pcpyld(auVar50,auVar27);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 10:
    switch(uVar32) {
    case 1:
      iGpffff8828 = 0;
      break;
    case 2:
      iGpffff8828 = 1;
      break;
    default:
      goto LAB_002b5b14;
    case 5:
      iGpffff8828 = 2;
      break;
    case 6:
      iGpffff8828 = 3;
      break;
    case 7:
      iGpffff8828 = 4;
      break;
    case 8:
      iGpffff8828 = 5;
    }
    iVar1 = *(int *)(&DAT_003c3c10 + iGpffff8828 * 4 + iGpffff882c * 0x18);
    uGpffff8810 = (ulong)iVar1;
    if (iVar1 >> 0x1f < 0) {
      return 0;
    }
    if ((iGpffff8828 == 1) && (iGpffff882c == 1)) {
      uGpffff8810 = (long)iVar1 | 0x8000000000;
    }
    FUN_002b3d88(0xffffffff80000000,2);
    auVar51._8_8_ = in_a0_udw;
    auVar51._0_8_ = 0xe;
    auVar24._8_8_ = in_a1_udw;
    auVar24._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar51,auVar24);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar52._8_8_ = auVar60._8_8_;
    auVar52._0_8_ = 0x42;
    auVar25._8_8_ = in_a1_udw;
    auVar25._0_8_ = uGpffff8810;
    auVar60 = _pcpyld(auVar52,auVar25);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 0xb:
    switch(uVar32) {
    case 1:
      iGpffff882c = 0;
      break;
    case 2:
      iGpffff882c = 1;
      break;
    default:
      goto LAB_002b5b14;
    case 5:
      iGpffff882c = 2;
      break;
    case 6:
      iGpffff882c = 3;
      break;
    case 7:
      iGpffff882c = 4;
      break;
    case 8:
      iGpffff882c = 5;
    }
    iVar1 = *(int *)(&DAT_003c3c10 + iGpffff8828 * 4 + iGpffff882c * 0x18);
    uGpffff8810 = (ulong)iVar1;
    if (iVar1 >> 0x1f < 0) {
      return 0;
    }
    if ((iGpffff8828 == 1) && (iGpffff882c == 1)) {
      uGpffff8810 = (long)iVar1 | 0x8000000000;
    }
    FUN_002b3d88(0xffffffff80000000,2);
    auVar53._8_8_ = in_a0_udw;
    auVar53._0_8_ = 0xe;
    auVar22._8_8_ = in_a1_udw;
    auVar22._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar53,auVar22);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar54._8_8_ = auVar60._8_8_;
    auVar54._0_8_ = 0x42;
    auVar23._8_8_ = in_a1_udw;
    auVar23._0_8_ = uGpffff8810;
    auVar60 = _pcpyld(auVar54,auVar23);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 0xc:
    uGpffff8ea8 = (uint)(param_2 != 0);
    if ((param_2 != 0) || (iGpffff8ea4 != 0)) {
      uVar32 = 0x40;
      goto LAB_002b5878;
    }
    uVar31 = 0xffffffbf;
    uGpffff8ea8 = 0;
LAB_002b5888:
    uGpffff8820 = uGpffff8820 & CONCAT44(0xffffffff,uVar31);
    return 1;
  default:
LAB_002b5b14:
    return 0;
  case 0xe:
    if (param_2 != 0) {
      uGpffff8820 = uGpffff8820 | 0x20;
      bGpffff8870 = bGpffff8870 | 1;
      return 1;
    }
    uGpffff8820 = uGpffff8820 & 0xffffffffffffffdf;
    bGpffff8870 = bGpffff8870 & 0xfe;
    return 1;
  case 0xf:
    FUN_002b3d88(0xffffffff80000000,2);
    uVar32 = uVar32 >> 0x10 & 0xff | uVar32 & 0xff00 | (uVar32 & 0xff) << 0x10;
    auVar55._8_8_ = in_a0_udw;
    auVar55._0_8_ = 0xe;
    uGpffff87f8 = (ulong)uVar32;
    auVar4._8_8_ = in_a1_udw;
    auVar4._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar55,auVar4);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar56._8_8_ = auVar60._8_8_;
    auVar56._0_8_ = 0x3d;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = uVar32;
    auVar2._8_8_ = in_v1_udw;
    auVar60 = _pcpyld(auVar56,auVar2);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 0x10:
    if (param_2 == 1) {
      puGpffff8eb4 = &DAT_0044e7d0;
      return 1;
    }
    return 0;
  case 0x14:
    if (param_2 == 1) {
      bGpffff8870 = bGpffff8870 & 0xdf;
      uGpffff8eac = uVar32;
      return 1;
    }
    bGpffff8870 = bGpffff8870 | 0x20;
    uGpffff8eac = uVar32;
    return 1;
  case 0x1d:
    switch(uVar32) {
    case 1:
      uVar33 = 1;
      break;
    case 2:
      uVar33 = 5;
      break;
    case 3:
      uVar33 = 9;
      break;
    case 4:
      uVar33 = 7;
      break;
    case 5:
      uVar33 = 0xd;
      break;
    case 6:
      uVar33 = 0xf;
      break;
    case 7:
      uVar33 = 0xb;
      break;
    case 8:
      uVar33 = 2;
      break;
    default:
      goto LAB_002b5b14;
    }
    uVar30 = uGpffff87e8 & 0xfffffffffffffff0;
    if ((uVar33 & 1) != 0) {
      uVar30 = uGpffff87e8 & 0xffffffffffffcff0;
    }
    uGpffff87e8 = uVar30 | uVar33;
    FUN_002b3d88(0xffffffff80000000,2);
    auVar57._8_8_ = in_a0_udw;
    auVar57._0_8_ = 0xe;
    auVar20._8_8_ = in_a1_udw;
    auVar20._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar57,auVar20);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar58._8_8_ = auVar60._8_8_;
    auVar58._0_8_ = 0x47;
    auVar21._8_8_ = in_a1_udw;
    auVar21._0_8_ = uGpffff87e8;
    auVar60 = _pcpyld(auVar58,auVar21);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
    break;
  case 0x1e:
    uGpffff87e8 = (long)((int)((float)(int)uVar32 * fGpffff8070) << 4) |
                  uGpffff87e8 & 0xfffffffffffff00f;
    FUN_002b3d88(0xffffffff80000000,2);
    auVar59._8_8_ = in_a0_udw;
    auVar59._0_8_ = 0xe;
    auVar60._8_8_ = in_a1_udw;
    auVar60._0_8_ = 0x1000000000008001;
    auVar60 = _pcpyld(auVar59,auVar60);
    *puGpffff8e00 = auVar60._0_4_;
    puGpffff8e00[1] = auVar60._4_4_;
    puGpffff8e00[2] = auVar60._8_4_;
    puGpffff8e00[3] = auVar60._12_4_;
    puVar28 = puGpffff8e00 + 4;
    auVar61._8_8_ = auVar60._8_8_;
    auVar61._0_8_ = 0x47;
    auVar3._8_8_ = in_a1_udw;
    auVar3._0_8_ = uGpffff87e8;
    auVar60 = _pcpyld(auVar61,auVar3);
    *puVar28 = auVar60._0_4_;
    puGpffff8e00[5] = auVar60._4_4_;
    puGpffff8e00[6] = auVar60._8_4_;
    puGpffff8e00[7] = auVar60._12_4_;
  }
  puGpffff8e00 = puVar28 + 4;
  return 1;
}


// ==== FUN_002b5b28 @ 002b5b28 ====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_002b5b28(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  
  switch(param_1) {
  case 1:
    uVar1 = uGpffff8ea0;
    if (uGpffff8ea0 == 0xffffffff) {
      uVar1 = 0;
    }
    *param_2 = uVar1;
    break;
  case 2:
    uVar2 = uGpffff8800 & 3;
    if (uVar2 != (uGpffff8800 & 0xc)) {
      *param_2 = 0;
      return 1;
    }
    goto joined_r0x002b5ba0;
  case 3:
    uVar2 = uGpffff8800 & 3;
    goto joined_r0x002b5ba0;
  case 4:
    uVar2 = uGpffff8800 & 0xc;
joined_r0x002b5ba0:
    if (uVar2 != 0) {
LAB_002b5ec4:
      *param_2 = 3;
      return 1;
    }
    goto LAB_002b5e94;
  case 5:
    if ((uGpffff8820 & 0x100) != 0) {
      *param_2 = 0;
      return 1;
    }
    goto LAB_002b5e94;
  case 6:
    *param_2 = (uint)((uGpffff87e8 & 0x60000) == 0x40000);
    break;
  case 7:
    uVar1 = 1;
    if ((uGpffff8820 & 8) != 0) {
      uVar1 = 2;
    }
    *param_2 = uVar1;
    break;
  case 8:
    uVar1 = uGpffff87dc ^ 1;
    goto LAB_002b5dc8;
  case 9:
    uVar2 = uGpffff8808 & 0x1e0;
    if (uVar2 == 0x80) {
switchD_002b5e88_caseD_8:
      goto LAB_002b5ec4;
    }
    if (0x80 < uVar2) {
      if (uVar2 == 0x120) goto switchD_002b5e88_caseD_6;
      if (0x120 < uVar2) {
        if (uVar2 != 0x160) {
          return 0;
        }
        goto switchD_002b5da8_caseD_3;
      }
      if (uVar2 != 0xc0) {
        return 0;
      }
      goto switchD_002b5e88_caseD_c;
    }
    if (uVar2 != 0) {
      if (uVar2 != 0x60) {
        return 0;
      }
      goto switchD_002b5e88_caseD_4;
    }
    goto switchD_002b5e88_caseD_0;
  case 10:
    if ((long)uGpffff8810 < 0) {
      return 0;
    }
    uVar2 = (ulong)*(int *)(&DAT_003c3c10 + iGpffff8828 * 4 + iGpffff882c * 0x18);
    if ((iGpffff8828 == 1) && (iGpffff882c == 1)) {
      uVar2 = uVar2 | 0x8000000000;
    }
    if (uGpffff8810 != uVar2) {
      return 0;
    }
    switch(iGpffff8828) {
    case 0:
      goto switchD_002b5e88_caseD_0;
    case 1:
switchD_002b5e88_caseD_4:
      *param_2 = 2;
      return 1;
    case 2:
switchD_002b5e88_caseD_c:
      *param_2 = 5;
      return 1;
    case 3:
switchD_002b5da8_caseD_3:
      *param_2 = 6;
      return 1;
    case 4:
switchD_002b5e88_caseD_a:
      *param_2 = 7;
      return 1;
    case 5:
      goto switchD_002b5e88_caseD_2;
    default:
      goto LAB_002b5f28;
    }
  case 0xb:
    if ((long)uGpffff8810 < 0) {
      return 0;
    }
    uVar2 = (ulong)*(int *)(&DAT_003c3c10 + iGpffff8828 * 4 + iGpffff882c * 0x18);
    if ((iGpffff8828 == 1) && (iGpffff882c == 1)) {
      uVar2 = uVar2 | 0x8000000000;
    }
    if (uGpffff8810 != uVar2) {
      return 0;
    }
    switch(iGpffff882c) {
    case 0:
      goto switchD_002b5e88_caseD_0;
    case 1:
      goto switchD_002b5e88_caseD_4;
    case 2:
      goto switchD_002b5e88_caseD_c;
    case 3:
      goto switchD_002b5da8_caseD_3;
    case 4:
      goto switchD_002b5e88_caseD_a;
    case 5:
      goto switchD_002b5e88_caseD_2;
    default:
      goto LAB_002b5f28;
    }
  case 0xc:
    *param_2 = uGpffff8ea8;
    break;
  default:
LAB_002b5f28:
    return 0;
  case 0xe:
    uVar1 = (uint)((uGpffff8820 << 0x1b) >> 0x20);
LAB_002b5dc8:
    *param_2 = uVar1 & 1;
    break;
  case 0xf:
    *param_2 = (uint)((uGpffff87f8 & 0xff) << 0x10) | (uint)uGpffff87f8 & 0xff00 |
               (uint)(uGpffff87f8 >> 0x10) & 0xff | 0xff000000;
    break;
  case 0x10:
    if (puGpffff8eb4 != &DAT_0044e7d0) {
      if (puGpffff8eb4 == &DAT_0044e8b0) goto switchD_002b5e88_caseD_4;
      if (puGpffff8eb4 != &DAT_0044e990) {
        *param_2 = 0;
        return 1;
      }
      goto LAB_002b5ec4;
    }
switchD_002b5e88_caseD_0:
LAB_002b5e94:
    *param_2 = 1;
    break;
  case 0x14:
    *param_2 = uGpffff8eac;
    break;
  case 0x1d:
    if ((uGpffff87e8 & 1) != 0) {
      switch((uint)uGpffff87e8 & 0x300e) {
      case 0:
        goto switchD_002b5e88_caseD_0;
      case 2:
        break;
      case 4:
        goto switchD_002b5e88_caseD_4;
      case 6:
switchD_002b5e88_caseD_6:
        *param_2 = 4;
        return 1;
      case 8:
        goto switchD_002b5e88_caseD_8;
      case 10:
        goto switchD_002b5e88_caseD_a;
      case 0xc:
        goto switchD_002b5e88_caseD_c;
      default:
        *param_2 = 0;
        return 1;
      }
    }
switchD_002b5e88_caseD_2:
    *param_2 = 8;
    break;
  case 0x1e:
    fVar3 = (float)FUN_0036f230((uGpffff87e8 & 0xff0) >> 4);
    *param_2 = (int)(fVar3 * fGpffff8074);
    return 1;
  }
  return 1;
}


// ==== FUN_002b5f38 @ 002b5f38 ====

undefined4 FUN_002b5f38(undefined4 param_1,long param_2)

{
  long lVar1;
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
  undefined1 uVar12;
  undefined8 in_v0_udw;
  uint uVar13;
  undefined8 in_v1_udw;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_a0_udw;
  int *piVar16;
  undefined8 in_a1_udw;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  piVar16 = (int *)param_2;
  switch(param_1) {
  case 1:
    if (iGpffff8ec0 == 0) {
      return 0;
    }
    lVar1 = FUN_002b3d88(0x80000000,2);
    if (lVar1 == 0) {
      return 0;
    }
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = 0xe;
    auVar9._8_8_ = in_a0_udw;
    auVar9._0_8_ = 0x1000000000008001;
    auVar17 = _pcpyld(auVar3,auVar9);
    *puGpffff8e00 = auVar17._0_4_;
    puGpffff8e00[1] = auVar17._4_4_;
    puGpffff8e00[2] = auVar17._8_4_;
    puGpffff8e00[3] = auVar17._12_4_;
    puGpffff8e00 = puGpffff8e00 + 4;
    if (param_2 == 0) {
      uVar14 = 0;
      uVar15 = 0;
      uGpffff8ec4 = 0;
    }
    else if (param_2 == 0x55555555) {
      uVar15 = 0x12123030;
      uVar14 = 0x12123030;
      uGpffff8ec4 = 0x55555555;
    }
    else {
      uVar15 = 0x60712435;
      uVar14 = 0x71603524;
      uGpffff8ec4 = 1;
    }
    auVar5._8_8_ = in_v1_udw;
    auVar5._0_8_ = 0x44;
    auVar10._4_4_ = uVar15;
    auVar10._0_4_ = uVar14;
    auVar10._8_8_ = in_a0_udw;
    auVar17 = _pcpyld(auVar5,auVar10);
    break;
  case 2:
    lVar1 = FUN_002b3d88(0x80000000,2);
    if (lVar1 == 0) {
      return 0;
    }
    auVar2._8_8_ = in_v0_udw;
    auVar2._0_8_ = 0xe;
    auVar7._8_8_ = in_a0_udw;
    auVar7._0_8_ = 0x1000000000008001;
    auVar17 = _pcpyld(auVar2,auVar7);
    *puGpffff8e00 = auVar17._0_4_;
    puGpffff8e00[1] = auVar17._4_4_;
    puGpffff8e00[2] = auVar17._8_4_;
    puGpffff8e00[3] = auVar17._12_4_;
    puGpffff8e00 = puGpffff8e00 + 4;
    uVar12 = (undefined1)((ulong)param_2 >> 0x18);
    auVar8._5_3_ = 0;
    auVar8._0_5_ = CONCAT14(uVar12,piVar16) & 0xff000000ff;
    auVar8._8_8_ = in_a0_udw;
    auVar11._8_8_ = in_a1_udw;
    auVar11._0_8_ = 0x42;
    auVar17 = _pcpyld(auVar11,auVar8);
    uGpffff8810 = (ulong)(CONCAT14(uVar12,piVar16) & 0xff000000ff);
    break;
  case 3:
    lVar1 = FUN_002b3d88(0x80000000,2);
    if (lVar1 == 0) {
      return 0;
    }
    auVar17._8_8_ = in_v0_udw;
    auVar17._0_8_ = 0xe;
    auVar6._8_8_ = in_a0_udw;
    auVar6._0_8_ = 0x1000000000008001;
    auVar17 = _pcpyld(auVar17,auVar6);
    *puGpffff8e00 = auVar17._0_4_;
    puGpffff8e00[1] = auVar17._4_4_;
    puGpffff8e00[2] = auVar17._8_4_;
    puGpffff8e00[3] = auVar17._12_4_;
    puGpffff8e00 = puGpffff8e00 + 4;
    auVar18._8_8_ = auVar17._8_8_;
    auVar18._0_8_ = 0x47;
    uVar13 = (uint)(uGpffff87e8 & 0xffffffffffff0000) | (uint)piVar16 & 0xffff;
    uVar14 = (undefined4)((uGpffff87e8 & 0xffffffffffff0000) >> 0x20);
    auVar4._4_4_ = uVar14;
    auVar4._0_4_ = uVar13;
    auVar4._8_8_ = in_v1_udw;
    auVar17 = _pcpyld(auVar18,auVar4);
    uGpffff87e8 = CONCAT44(uVar14,uVar13);
    break;
  case 4:
    uGpffff8ef0 = 0;
    iGpffff8ef4 = *piVar16;
    return 1;
  case 5:
    if (*piVar16 - 1U < 7) {
      iGpffff8830 = *piVar16;
      return 1;
    }
    return 0;
  default:
    return 0;
  }
  *puGpffff8e00 = auVar17._0_4_;
  puGpffff8e00[1] = auVar17._4_4_;
  puGpffff8e00[2] = auVar17._8_4_;
  puGpffff8e00[3] = auVar17._12_4_;
  puGpffff8e00 = puGpffff8e00 + 4;
  return 1;
}


// ==== FUN_002b6130 @ 002b6130 ====

undefined4 FUN_002b6130(undefined8 param_1,undefined8 param_2)

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
  ulong uVar12;
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
  undefined4 uVar23;
  uint uVar24;
  undefined8 in_v0_udw;
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined8 in_a3_udw;
  undefined8 in_t2_udw;
  float *pfVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iVar28 = (int)param_2;
  pfVar27 = (float *)(iVar28 + iGpffff8e9c);
  if ((*piGpffff87b0 < *(int *)(*(int *)(iVar28 + 0x60) + 0xc)) ||
     (piGpffff87b0[1] < *(int *)(*(int *)(iVar28 + 0x60) + 0x10))) {
    uStack_60 = 1;
    uStack_5c = FUN_002a5548(0xffffffff80000010);
    FUN_002a55d8(&uStack_60);
    uVar23 = 0;
  }
  else {
    FUN_002b4e80();
    if (iGpffff87d0 == 0) {
      iGpffff87d0 = 1;
      piVar1 = *(int **)(iVar28 + 0x60);
    }
    else {
      piVar1 = *(int **)(iVar28 + 0x60);
    }
    if ((*(byte *)(piVar1 + 8) & 7) == 5) {
      if (*(char *)(*piVar1 + iGpffff8e98 + 0x17) == '\0') {
        return 0;
      }
      uVar24 = *(uint *)(*piVar1 + iGpffff8e98 + 8);
      uGpffff87e0 = (ulong)(uVar24 >> 5 & 0x1ff | (uVar24 & 0xfc000) << 2 |
                           (uVar24 & 0x3f00000) << 4);
    }
    else {
      uGpffff87e0 = DAT_0044df00;
      if ((uGpffff8834 & 1) != 0) {
        uGpffff87e0 = DAT_0044dd90;
      }
    }
    if (iGpffff8854 != 0) {
      FUN_002cdb28();
      iGpffff8854 = 0;
    }
    FUN_002b3d88(0xffffffff80000000,10);
    auVar25._8_8_ = in_a3_udw;
    auVar25._0_8_ = 0x1000000000008009;
    auVar13._8_8_ = in_t2_udw;
    auVar13._0_8_ = 0xe;
    auVar25 = _pcpyld(auVar13,auVar25);
    *puGpffff8e00 = auVar25._0_4_;
    puGpffff8e00[1] = auVar25._4_4_;
    puGpffff8e00[2] = auVar25._8_4_;
    puGpffff8e00[3] = auVar25._12_4_;
    if ((*(byte *)(*(int **)(iVar28 + 0x60) + 8) & 7) == 5) {
      iVar2 = **(int **)(iVar28 + 0x60);
      uGpffff87f0 = (0x800 - ((long)*(int *)(iVar2 + 0xc) >> 1)) * 0x10 |
                    0x800 - (ulong)(uint)(*(int *)(iVar2 + 0x10) >> 1) << 0x24;
    }
    else {
      uGpffff87f0 = lGpffff8838 << 4 | lGpffff8840 << 0x24;
      if (cGpffff8e0c != '\0') {
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        EI();
        uGpffff87f0 = uGpffff87f0 |
                      (ulong)((uint)bGpffff8e0d ^ bGpffff8e0e & 1 ^ (uint)bGpffff8e0f) << 0x23;
      }
    }
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = uGpffff87f0;
    auVar14._8_8_ = in_t2_udw;
    auVar14._0_8_ = 0x18;
    auVar25 = _pcpyld(auVar14,auVar3);
    puGpffff8e00[4] = auVar25._0_4_;
    puGpffff8e00[5] = auVar25._4_4_;
    puGpffff8e00[6] = auVar25._8_4_;
    puGpffff8e00[7] = auVar25._12_4_;
    auVar4._8_8_ = in_v0_udw;
    auVar4._0_8_ = uGpffff87f0;
    auVar15._8_8_ = in_t2_udw;
    auVar15._0_8_ = 0x19;
    auVar25 = _pcpyld(auVar15,auVar4);
    puGpffff8e00[8] = auVar25._0_4_;
    puGpffff8e00[9] = auVar25._4_4_;
    puGpffff8e00[10] = auVar25._8_4_;
    puGpffff8e00[0xb] = auVar25._12_4_;
    iVar2 = *(int *)(iVar28 + 0x60);
    uVar24 = (*(int *)(iVar2 + 0xc) + (int)(short)*(ushort *)(iVar2 + 0x1c) + -1) * 0x10000;
    uVar12 = CONCAT44((int)uVar24 >> 0x1f,uVar24 | *(ushort *)(iVar2 + 0x1c) & 0x7ff) |
             ((ulong)*(ushort *)(iVar2 + 0x1e) & 0x7ff) << 0x20 |
             (long)(*(int *)(iVar2 + 0x10) + (int)(short)*(ushort *)(iVar2 + 0x1e)) + -1 << 0x30;
    auVar8._8_8_ = in_a3_udw;
    auVar8._0_8_ = uVar12;
    auVar16._8_8_ = in_t2_udw;
    auVar16._0_8_ = 0x40;
    auVar25 = _pcpyld(auVar16,auVar8);
    puGpffff8e00[0xc] = auVar25._0_4_;
    puGpffff8e00[0xd] = auVar25._4_4_;
    puGpffff8e00[0xe] = auVar25._8_4_;
    puGpffff8e00[0xf] = auVar25._12_4_;
    auVar9._8_8_ = in_a3_udw;
    auVar9._0_8_ = uVar12;
    auVar17._8_8_ = in_t2_udw;
    auVar17._0_8_ = 0x41;
    auVar25 = _pcpyld(auVar17,auVar9);
    puGpffff8e00[0x10] = auVar25._0_4_;
    puGpffff8e00[0x11] = auVar25._4_4_;
    puGpffff8e00[0x12] = auVar25._8_4_;
    puGpffff8e00[0x13] = auVar25._12_4_;
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uGpffff87e8;
    auVar18._8_8_ = in_t2_udw;
    auVar18._0_8_ = 0x47;
    auVar25 = _pcpyld(auVar18,auVar5);
    puGpffff8e00[0x14] = auVar25._0_4_;
    puGpffff8e00[0x15] = auVar25._4_4_;
    puGpffff8e00[0x16] = auVar25._8_4_;
    puGpffff8e00[0x17] = auVar25._12_4_;
    auVar6._8_8_ = in_v0_udw;
    auVar6._0_8_ = uGpffff87e8;
    auVar19._8_8_ = in_t2_udw;
    auVar19._0_8_ = 0x48;
    auVar25 = _pcpyld(auVar19,auVar6);
    puGpffff8e00[0x18] = auVar25._0_4_;
    puGpffff8e00[0x19] = auVar25._4_4_;
    puGpffff8e00[0x1a] = auVar25._8_4_;
    puGpffff8e00[0x1b] = auVar25._12_4_;
    auVar7._1_7_ = 0;
    auVar7[0] = *(uint *)(*(int *)(iVar28 + 0x60) + 0x14) < 0x18;
    auVar7._8_8_ = in_v0_udw;
    auVar20._8_8_ = in_t2_udw;
    auVar20._0_8_ = 0x45;
    auVar25 = _pcpyld(auVar20,auVar7);
    puGpffff8e00[0x1c] = auVar25._0_4_;
    puGpffff8e00[0x1d] = auVar25._4_4_;
    puGpffff8e00[0x1e] = auVar25._8_4_;
    puGpffff8e00[0x1f] = auVar25._12_4_;
    auVar10._8_8_ = in_a3_udw;
    auVar10._0_8_ = uGpffff87e0;
    auVar21._8_8_ = in_t2_udw;
    auVar21._0_8_ = 0x4c;
    auVar25 = _pcpyld(auVar21,auVar10);
    puGpffff8e00[0x20] = auVar25._0_4_;
    puGpffff8e00[0x21] = auVar25._4_4_;
    puGpffff8e00[0x22] = auVar25._8_4_;
    puGpffff8e00[0x23] = auVar25._12_4_;
    auVar11._8_8_ = in_a3_udw;
    auVar11._0_8_ = uGpffff87e0;
    auVar22._8_8_ = in_t2_udw;
    auVar22._0_8_ = 0x4d;
    auVar25 = _pcpyld(auVar22,auVar11);
    puGpffff8e00[0x24] = auVar25._0_4_;
    puGpffff8e00[0x25] = auVar25._4_4_;
    puGpffff8e00[0x26] = auVar25._8_4_;
    puGpffff8e00[0x27] = auVar25._12_4_;
    puGpffff8e00 = puGpffff8e00 + 0x28;
    FUN_002cae88(param_2);
    fVar30 = (float)(*(int *)(*(int *)(iVar28 + 0x60) + 0xc) >> 1);
    fVar29 = (float)(*(int *)(*(int *)(iVar28 + 0x60) + 0x10) >> 1);
    fVar30 = ((fGpffff8078 - fVar30) / fVar30 - 1.0) * 0.5;
    fVar38 = ((fGpffff8078 - fVar29) / fVar29 - 1.0) * 0.5;
    fVar35 = (*(float *)(iVar28 + 0x130) - *(float *)(iVar28 + 0x13c)) * fVar38;
    fVar34 = (*(float *)(iVar28 + 0x134) - *(float *)(iVar28 + 0x140)) * fVar38;
    fVar37 = (*(float *)(iVar28 + 0x138) - *(float *)(iVar28 + 0x144)) * fVar38;
    fVar29 = (*(float *)(iVar28 + 0x148) - *(float *)(iVar28 + 0x13c)) * fVar30;
    fVar33 = (*(float *)(iVar28 + 0x14c) - *(float *)(iVar28 + 0x140)) * fVar30;
    fVar31 = (*(float *)(iVar28 + 0x150) - *(float *)(iVar28 + 0x144)) * fVar30;
    fVar32 = fVar35 + fVar29;
    fVar36 = fVar34 + fVar33;
    fVar39 = fVar37 + fVar31;
    fVar35 = fVar35 - fVar29;
    fVar34 = fVar34 - fVar33;
    fVar37 = fVar37 - fVar31;
    fVar31 = *(float *)(iVar28 + 0x128);
    fVar29 = *(float *)(iVar28 + 300);
    *pfVar27 = *(float *)(iVar28 + 0x124) + fVar32;
    pfVar27[1] = fVar31 + fVar36;
    pfVar27[2] = fVar29 + fVar39;
    fVar31 = *(float *)(iVar28 + 0x134);
    fVar29 = *(float *)(iVar28 + 0x138);
    pfVar27[3] = *(float *)(iVar28 + 0x130) + fVar35;
    pfVar27[4] = fVar31 + fVar34;
    pfVar27[5] = fVar29 + fVar37;
    pfVar27[6] = *(float *)(iVar28 + 0x13c) - fVar32;
    pfVar27[7] = *(float *)(iVar28 + 0x140) - fVar36;
    pfVar27[8] = *(float *)(iVar28 + 0x144) - fVar39;
    pfVar27[9] = *(float *)(iVar28 + 0x148) - fVar35;
    pfVar27[10] = *(float *)(iVar28 + 0x14c) - fVar34;
    pfVar27[0xb] = *(float *)(iVar28 + 0x150) - fVar37;
    fVar33 = (*(float *)(iVar28 + 0x160) - *(float *)(iVar28 + 0x16c)) * fVar38;
    fVar35 = (*(float *)(iVar28 + 0x168) - *(float *)(iVar28 + 0x174)) * fVar38;
    fVar38 = (*(float *)(iVar28 + 0x164) - *(float *)(iVar28 + 0x170)) * fVar38;
    fVar29 = (*(float *)(iVar28 + 0x178) - *(float *)(iVar28 + 0x16c)) * fVar30;
    fVar32 = (*(float *)(iVar28 + 0x180) - *(float *)(iVar28 + 0x174)) * fVar30;
    fVar30 = (*(float *)(iVar28 + 0x17c) - *(float *)(iVar28 + 0x170)) * fVar30;
    fVar31 = fVar33 + fVar29;
    fVar34 = fVar38 + fVar30;
    fVar36 = fVar35 + fVar32;
    fVar33 = fVar33 - fVar29;
    fVar38 = fVar38 - fVar30;
    fVar35 = fVar35 - fVar32;
    pfVar27[0xc] = *(float *)(iVar28 + 0x154) + fVar31;
    pfVar27[0xd] = *(float *)(iVar28 + 0x158) + fVar34;
    pfVar27[0xe] = *(float *)(iVar28 + 0x15c) + fVar36;
    pfVar27[0xf] = *(float *)(iVar28 + 0x160) + fVar33;
    pfVar27[0x10] = *(float *)(iVar28 + 0x164) + fVar38;
    pfVar27[0x11] = *(float *)(iVar28 + 0x168) + fVar35;
    pfVar27[0x12] = *(float *)(iVar28 + 0x16c) - fVar31;
    pfVar27[0x13] = *(float *)(iVar28 + 0x170) - fVar34;
    pfVar27[0x14] = *(float *)(iVar28 + 0x174) - fVar36;
    pfVar27[0x15] = *(float *)(iVar28 + 0x178) - fVar33;
    pfVar27[0x16] = *(float *)(iVar28 + 0x17c) - fVar38;
    pfVar27[0x17] = *(float *)(iVar28 + 0x180) - fVar35;
    uVar26 = *(undefined8 *)(iVar28 + 0x9c);
    fVar29 = *(float *)(iVar28 + 0xa4);
    *(undefined8 *)(pfVar27 + 0x18) = *(undefined8 *)(iVar28 + 0x94);
    *(undefined8 *)(pfVar27 + 0x1a) = uVar26;
    pfVar27[0x1c] = fVar29;
    uVar26 = *(undefined8 *)(iVar28 + 0xb0);
    fVar29 = *(float *)(iVar28 + 0xb8);
    *(undefined8 *)(pfVar27 + 0x1d) = *(undefined8 *)(iVar28 + 0xa8);
    *(undefined8 *)(pfVar27 + 0x1f) = uVar26;
    pfVar27[0x21] = fVar29;
    fVar34 = pfVar27[3] - pfVar27[0xf];
    fVar32 = pfVar27[4] - pfVar27[0x10];
    fVar33 = pfVar27[5] - pfVar27[0x11];
    fVar30 = pfVar27[0x12] - pfVar27[0xf];
    fVar31 = pfVar27[0x13] - pfVar27[0x10];
    fVar29 = pfVar27[0x14] - pfVar27[0x11];
    pfVar27[0x24] = fVar34 * fVar31 - fVar32 * fVar30;
    pfVar27[0x23] = fVar33 * fVar30 - fVar34 * fVar29;
    pfVar27[0x22] = fVar32 * fVar29 - fVar33 * fVar31;
    FUN_002a77e8(pfVar27 + 0x22,pfVar27 + 0x22);
    *(char *)(pfVar27 + 0x26) = (char)((int)pfVar27[0x22] >> 0x1f) + '\x01';
    *(char *)((int)pfVar27 + 0x99) = (char)((int)pfVar27[0x23] >> 0x1f) + '\x01';
    pfVar27[0x25] =
         pfVar27[3] * pfVar27[0x22] + pfVar27[4] * pfVar27[0x23] + pfVar27[5] * pfVar27[0x24];
    *(char *)((int)pfVar27 + 0x9a) = (char)((int)pfVar27[0x24] >> 0x1f) + '\x01';
    pfVar27[0x28] = (pfVar27[0xe] - pfVar27[0x11]) * fVar34 - (pfVar27[0xc] - pfVar27[0xf]) * fVar33
    ;
    pfVar27[0x29] = (pfVar27[0xc] - pfVar27[0xf]) * fVar32 - (pfVar27[0xd] - pfVar27[0x10]) * fVar34
    ;
    pfVar27[0x27] =
         (pfVar27[0xd] - pfVar27[0x10]) * fVar33 - (pfVar27[0xe] - pfVar27[0x11]) * fVar32;
    FUN_002a77e8(pfVar27 + 0x27,pfVar27 + 0x27);
    *(char *)(pfVar27 + 0x2b) = (char)((int)pfVar27[0x27] >> 0x1f) + '\x01';
    *(char *)((int)pfVar27 + 0xad) = (char)((int)pfVar27[0x28] >> 0x1f) + '\x01';
    pfVar27[0x2a] =
         pfVar27[3] * pfVar27[0x27] + pfVar27[4] * pfVar27[0x28] + pfVar27[5] * pfVar27[0x29];
    *(char *)((int)pfVar27 + 0xae) = (char)((int)pfVar27[0x29] >> 0x1f) + '\x01';
    fVar34 = pfVar27[9] - pfVar27[0x15];
    fVar32 = pfVar27[10] - pfVar27[0x16];
    fVar33 = pfVar27[0xb] - pfVar27[0x17];
    fVar30 = pfVar27[0xc] - pfVar27[0x15];
    fVar31 = pfVar27[0xd] - pfVar27[0x16];
    fVar29 = pfVar27[0xe] - pfVar27[0x17];
    pfVar27[0x2e] = fVar34 * fVar31 - fVar32 * fVar30;
    pfVar27[0x2d] = fVar33 * fVar30 - fVar34 * fVar29;
    pfVar27[0x2c] = fVar32 * fVar29 - fVar33 * fVar31;
    FUN_002a77e8(pfVar27 + 0x2c,pfVar27 + 0x2c);
    *(char *)(pfVar27 + 0x30) = (char)((int)pfVar27[0x2c] >> 0x1f) + '\x01';
    *(char *)((int)pfVar27 + 0xc1) = (char)((int)pfVar27[0x2d] >> 0x1f) + '\x01';
    pfVar27[0x2f] =
         pfVar27[9] * pfVar27[0x2c] + pfVar27[10] * pfVar27[0x2d] + pfVar27[0xb] * pfVar27[0x2e];
    *(char *)((int)pfVar27 + 0xc2) = (char)((int)pfVar27[0x2e] >> 0x1f) + '\x01';
    pfVar27[0x32] =
         (pfVar27[0x14] - pfVar27[0x17]) * fVar34 - (pfVar27[0x12] - pfVar27[0x15]) * fVar33;
    pfVar27[0x33] =
         (pfVar27[0x12] - pfVar27[0x15]) * fVar32 - (pfVar27[0x13] - pfVar27[0x16]) * fVar34;
    pfVar27[0x31] =
         (pfVar27[0x13] - pfVar27[0x16]) * fVar33 - (pfVar27[0x14] - pfVar27[0x17]) * fVar32;
    FUN_002a77e8(pfVar27 + 0x31,pfVar27 + 0x31);
    uVar23 = 1;
    *(char *)(pfVar27 + 0x35) = (char)((int)pfVar27[0x31] >> 0x1f) + '\x01';
    *(char *)((int)pfVar27 + 0xd6) = (char)((int)pfVar27[0x33] >> 0x1f) + '\x01';
    pfVar27[0x34] =
         pfVar27[9] * pfVar27[0x31] + pfVar27[10] * pfVar27[0x32] + pfVar27[0xb] * pfVar27[0x33];
    *(char *)((int)pfVar27 + 0xd5) = (char)((int)pfVar27[0x32] >> 0x1f) + '\x01';
    DAT_0044e640 = *(undefined4 *)(iVar28 + 0x20);
    DAT_0044e644 = *(undefined4 *)(iVar28 + 0x24);
    DAT_0044e648 = *(undefined4 *)(iVar28 + 0x28);
    DAT_0044e64c = *(undefined4 *)(iVar28 + 0x2c);
    iGpffff8eb0 = iGpffff8eb0 + 1;
    DAT_0044e658 = *(undefined4 *)(iVar28 + 0x38);
    DAT_0044e65c = *(undefined4 *)(iVar28 + 0x3c);
    DAT_0044e650 = (undefined4)*(undefined8 *)(iVar28 + 0x30);
    DAT_0044e654 = (undefined4)((ulong)*(undefined8 *)(iVar28 + 0x30) >> 0x20);
    DAT_0044e660 = *(undefined4 *)(iVar28 + 0x40);
    DAT_0044e664 = *(undefined4 *)(iVar28 + 0x44);
    DAT_0044e668 = *(undefined4 *)(iVar28 + 0x48);
    DAT_0044e66c = *(undefined4 *)(iVar28 + 0x4c);
    DAT_0044e678 = *(undefined4 *)(iVar28 + 0x58);
    DAT_0044e67c = *(undefined4 *)(iVar28 + 0x5c);
    DAT_0044e670 = (undefined4)*(undefined8 *)(iVar28 + 0x50);
    DAT_0044e674 = (undefined4)((ulong)*(undefined8 *)(iVar28 + 0x50) >> 0x20);
  }
  return uVar23;
}


// ==== FUN_002b6b40 @ 002b6b40 ====

undefined4 FUN_002b6b40(int param_1,byte *param_2,ulong param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
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
  int iVar37;
  uint uVar38;
  undefined8 in_v0_udw;
  int iVar39;
  undefined1 auVar40 [16];
  ulong in_a1_udw;
  int iVar41;
  ulong in_t2_udw;
  ulong uVar42;
  
  FUN_002b4e80();
  if ((*(byte *)(*(int **)(param_1 + 0x60) + 8) & 7) == 5) {
    iVar37 = **(int **)(param_1 + 0x60) + iGpffff8e98;
    if (*(char *)(iVar37 + 0x17) == '\0') {
      return 0;
    }
    uVar38 = *(uint *)(iVar37 + 8);
    uGpffff87e0 = (ulong)(uVar38 >> 5 & 0x1ff | (uVar38 & 0xfc000) << 2 | (uVar38 & 0x3f00000) << 4)
    ;
  }
  else {
    uGpffff87e0 = DAT_0044df00;
    if ((uGpffff8834 & 1) != 0) {
      uGpffff87e0 = DAT_0044dd90;
    }
  }
  iVar37 = *(int *)(param_1 + 0x60);
  iVar37 = (int)((*(int *)(iVar37 + 0xc) + (int)*(short *)(iVar37 + 0x1c) + 0x1fU & 0xffffffe0) -
                (int)(short)(*(ushort *)(iVar37 + 0x1c) & 0xffe0)) >> 5;
  FUN_002b3d88(0xffffffff80000000,iVar37 * 3 + 0xc);
  auVar40._8_8_ = in_a1_udw;
  auVar40._0_8_ = (long)iVar37 * 3 + 0xbU | 0x1000000000008000;
  auVar19._8_8_ = in_t2_udw;
  auVar19._0_8_ = 0xe;
  auVar40 = _pcpyld(auVar19,auVar40);
  *puGpffff8e00 = auVar40._0_4_;
  puGpffff8e00[1] = auVar40._4_4_;
  puGpffff8e00[2] = auVar40._8_4_;
  puGpffff8e00[3] = auVar40._12_4_;
  if ((param_3 & 1) == 0) {
    auVar18._8_8_ = in_a1_udw;
    auVar18._0_8_ = uGpffff87e0 | 0xffffffff00000000;
    auVar34._8_8_ = in_t2_udw;
    auVar34._0_8_ = 0x4c;
    auVar40 = _pcpyld(auVar34,auVar18);
    puGpffff8e00[4] = auVar40._0_4_;
    puGpffff8e00[5] = auVar40._4_4_;
    puGpffff8e00[6] = auVar40._8_4_;
    puGpffff8e00[7] = auVar40._12_4_;
  }
  else {
    auVar5._8_8_ = in_a1_udw;
    auVar5._0_8_ = uGpffff87e0 & 0xffffffff;
    auVar20._8_8_ = in_t2_udw;
    auVar20._0_8_ = 0x4c;
    auVar40 = _pcpyld(auVar20,auVar5);
    puGpffff8e00[4] = auVar40._0_4_;
    puGpffff8e00[5] = auVar40._4_4_;
    puGpffff8e00[6] = auVar40._8_4_;
    puGpffff8e00[7] = auVar40._12_4_;
  }
  if ((param_3 & 2) == 0) {
    auVar17._8_8_ = in_a1_udw;
    auVar17._0_8_ = uGpffff87d8 | 0x100000000;
    auVar33._8_8_ = in_t2_udw;
    auVar33._0_8_ = 0x4e;
    auVar40 = _pcpyld(auVar33,auVar17);
  }
  else {
    auVar6._8_8_ = in_a1_udw;
    auVar6._0_8_ = uGpffff87d8 & 0xfffffffeffffffff;
    auVar21._8_8_ = in_t2_udw;
    auVar21._0_8_ = 0x4e;
    auVar40 = _pcpyld(auVar21,auVar6);
  }
  puGpffff8e00[8] = auVar40._0_4_;
  puGpffff8e00[9] = auVar40._4_4_;
  puGpffff8e00[10] = auVar40._8_4_;
  puGpffff8e00[0xb] = auVar40._12_4_;
  auVar4._1_7_ = 0;
  auVar4[0] = *(uint *)(*(int *)(param_1 + 0x60) + 0x14) < 0x18;
  auVar4._8_8_ = in_v0_udw;
  auVar22._8_8_ = in_t2_udw;
  auVar22._0_8_ = 0x45;
  auVar40 = _pcpyld(auVar22,auVar4);
  puGpffff8e00[0xc] = auVar40._0_4_;
  puGpffff8e00[0xd] = auVar40._4_4_;
  puGpffff8e00[0xe] = auVar40._8_4_;
  puGpffff8e00[0xf] = auVar40._12_4_;
  auVar7._8_8_ = in_a1_udw;
  auVar7._0_8_ = uGpffff87e8 & 0xfffffffffffabffe | 0x30000;
  auVar23._8_8_ = in_t2_udw;
  auVar23._0_8_ = 0x47;
  auVar40 = _pcpyld(auVar23,auVar7);
  puGpffff8e00[0x10] = auVar40._0_4_;
  puGpffff8e00[0x11] = auVar40._4_4_;
  puGpffff8e00[0x12] = auVar40._8_4_;
  puGpffff8e00[0x13] = auVar40._12_4_;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = in_a1_udw;
  auVar24._8_8_ = in_t2_udw;
  auVar24._0_8_ = 0x18;
  auVar40 = _pcpyld(auVar24,auVar35 << 0x40);
  puGpffff8e00[0x14] = auVar40._0_4_;
  puGpffff8e00[0x15] = auVar40._4_4_;
  puGpffff8e00[0x16] = auVar40._8_4_;
  puGpffff8e00[0x17] = auVar40._12_4_;
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = 0x7fff00007fff0000;
  auVar25._8_8_ = in_t2_udw;
  auVar25._0_8_ = 0x40;
  auVar40 = _pcpyld(auVar25,auVar8);
  puGpffff8e00[0x18] = auVar40._0_4_;
  puGpffff8e00[0x19] = auVar40._4_4_;
  puGpffff8e00[0x1a] = auVar40._8_4_;
  puGpffff8e00[0x1b] = auVar40._12_4_;
  auVar9._8_8_ = in_a1_udw;
  auVar9._0_8_ = 6;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = in_t2_udw;
  auVar40 = _pcpyld(auVar36 << 0x40,auVar9);
  puGpffff8e00[0x1c] = auVar40._0_4_;
  puGpffff8e00[0x1d] = auVar40._4_4_;
  puGpffff8e00[0x1e] = auVar40._8_4_;
  puGpffff8e00[0x1f] = auVar40._12_4_;
  puGpffff8e00 = puGpffff8e00 + 0x20;
  iVar37 = *(int *)(param_1 + 0x60);
  uVar42 = (ulong)*(short *)(iVar37 + 0x1c);
  if ((long)uVar42 < (long)(*(int *)(iVar37 + 0xc) + (int)*(short *)(iVar37 + 0x1c))) {
    sVar1 = *(short *)(iVar37 + 0x1e);
    while( true ) {
      iVar37 = (int)uVar42;
      auVar10._8_8_ = in_a1_udw;
      auVar10._0_8_ = (long)((int)sVar1 << 0x14 | iVar37 << 4);
      auVar26._8_8_ = in_t2_udw;
      auVar26._0_8_ = 5;
      auVar40 = _pcpyld(auVar26,auVar10);
      *puGpffff8e00 = auVar40._0_4_;
      puGpffff8e00[1] = auVar40._4_4_;
      puGpffff8e00[2] = auVar40._8_4_;
      puGpffff8e00[3] = auVar40._12_4_;
      if ((param_3 & 1) == 0) {
        uVar38 = 0;
      }
      else {
        uVar38 = (int)((float)param_2[3] * fGpffff807c) << 0x18 | (uint)param_2[2] << 0x10 |
                 (uint)param_2[1] << 8 | (uint)*param_2;
      }
      auVar11._4_4_ = 0;
      auVar11._0_4_ = uVar38;
      auVar11._8_8_ = in_a1_udw;
      auVar27._8_8_ = in_t2_udw;
      auVar27._0_8_ = 1;
      auVar40 = _pcpyld(auVar27,auVar11);
      puGpffff8e00[4] = auVar40._0_4_;
      puGpffff8e00[5] = auVar40._4_4_;
      puGpffff8e00[6] = auVar40._8_4_;
      puGpffff8e00[7] = auVar40._12_4_;
      iVar2 = *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(iVar2 + 0xc);
      iVar41 = iVar3 + *(short *)(iVar2 + 0x1c);
      iVar39 = iVar37 + 0x20;
      if (iVar41 < iVar37 + 0x20) {
        iVar39 = iVar41;
      }
      auVar12._8_8_ = in_a1_udw;
      auVar12._0_8_ =
           (long)((*(int *)(iVar2 + 0x10) + (int)*(short *)(iVar2 + 0x1e)) * 0x100000 | iVar39 << 4)
      ;
      auVar28._8_8_ = in_t2_udw;
      auVar28._0_8_ = 5;
      auVar40 = _pcpyld(auVar28,auVar12);
      puGpffff8e00[8] = auVar40._0_4_;
      puGpffff8e00[9] = auVar40._4_4_;
      puGpffff8e00[10] = auVar40._8_4_;
      puGpffff8e00[0xb] = auVar40._12_4_;
      puGpffff8e00 = puGpffff8e00 + 0xc;
      uVar42 = (long)(iVar37 + 0x20) & 0xffffffffffffffe0;
      if ((long)(iVar3 + *(short *)(iVar2 + 0x1c)) <= (long)uVar42) break;
      sVar1 = *(short *)(iVar2 + 0x1e);
    }
  }
  auVar13._8_8_ = in_a1_udw;
  auVar13._0_8_ = uGpffff87e0;
  auVar29._8_8_ = in_t2_udw;
  auVar29._0_8_ = 0x4c;
  auVar40 = _pcpyld(auVar29,auVar13);
  *puGpffff8e00 = auVar40._0_4_;
  puGpffff8e00[1] = auVar40._4_4_;
  puGpffff8e00[2] = auVar40._8_4_;
  puGpffff8e00[3] = auVar40._12_4_;
  auVar14._8_8_ = in_a1_udw;
  auVar14._0_8_ = uGpffff87d8;
  auVar30._8_8_ = in_t2_udw;
  auVar30._0_8_ = 0x4e;
  auVar40 = _pcpyld(auVar30,auVar14);
  puGpffff8e00[4] = auVar40._0_4_;
  puGpffff8e00[5] = auVar40._4_4_;
  puGpffff8e00[6] = auVar40._8_4_;
  puGpffff8e00[7] = auVar40._12_4_;
  uVar42 = uGpffff87f0 & 0xfffffff7ffffffff;
  if (cGpffff8e0c != '\0') {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    EI();
    uVar42 = uVar42 | (ulong)((uint)bGpffff8e0d ^ bGpffff8e0e & 1 ^ (uint)bGpffff8e0f) << 0x23;
  }
  auVar15._8_8_ = in_a1_udw;
  auVar15._0_8_ = uVar42;
  auVar31._8_8_ = in_t2_udw;
  auVar31._0_8_ = 0x18;
  auVar40 = _pcpyld(auVar31,auVar15);
  puGpffff8e00[8] = auVar40._0_4_;
  puGpffff8e00[9] = auVar40._4_4_;
  puGpffff8e00[10] = auVar40._8_4_;
  puGpffff8e00[0xb] = auVar40._12_4_;
  auVar16._8_8_ = in_a1_udw;
  auVar16._0_8_ = uVar42;
  auVar32._8_8_ = in_t2_udw;
  auVar32._0_8_ = 0x19;
  auVar40 = _pcpyld(auVar32,auVar16);
  puGpffff8e00[0xc] = auVar40._0_4_;
  puGpffff8e00[0xd] = auVar40._4_4_;
  puGpffff8e00[0xe] = auVar40._8_4_;
  puGpffff8e00[0xf] = auVar40._12_4_;
  puGpffff8e00 = puGpffff8e00 + 0x10;
  return 1;
}


// ==== FUN_002b6fd0 @ 002b6fd0 ====

undefined4 FUN_002b6fd0(undefined8 param_1,int param_2,ulong param_3)

{
  byte bVar2;
  int iVar1;
  undefined4 *puVar3;
  ulong uVar4;
  undefined1 uVar6;
  ulong uVar5;
  ulong uVar7;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  
  puVar3 = &uStack_140;
  uVar7 = param_3 & 0x9000;
  *(byte *)(param_2 + 0x20) = (byte)param_3 & 7;
  uVar5 = param_3 & 0xf00;
  *(byte *)(param_2 + 0x21) = (byte)param_3 & 0xf8;
  uVar4 = param_3 & 0x6000;
  switch(*(undefined1 *)(param_2 + 0x20)) {
  case 0:
    if ((uVar4 == 0) && (uVar7 == 0)) goto switchD_002b7014_caseD_5;
    uStack_140 = 1;
    uStack_13c = FUN_002a5548(0xffffffff8000000d);
    break;
  case 1:
    if ((uVar7 == 0) && (uVar4 == 0)) {
      if ((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x14) == iGpffff884c)) {
        *(int *)(param_2 + 0x14) = iGpffff884c;
        if (uVar5 == 0) {
LAB_002b7524:
          uVar6 = 9;
          if (iGpffff884c == 0x10) {
            uVar6 = 7;
          }
          *(undefined1 *)(param_2 + 0x23) = uVar6;
          return 1;
        }
        if (iGpffff884c == 0x10) {
          if (uVar5 == 0x700) goto LAB_002b7524;
        }
        else if (uVar5 == 0x900) goto LAB_002b7524;
        uStack_20 = 1;
        uStack_1c = FUN_002a5548(0xffffffff8000000d);
        puVar3 = &uStack_20;
      }
      else {
        uStack_30 = 1;
        uStack_2c = FUN_002a5548(0xffffffff8000000c);
        puVar3 = &uStack_30;
      }
    }
    else {
      uStack_40 = 1;
      uStack_3c = FUN_002a5548(0xffffffff8000000d);
      puVar3 = &uStack_40;
    }
    break;
  case 2:
    if ((uVar7 == 0) && (uVar4 == 0)) {
      iVar1 = *(int *)(param_2 + 0x14);
      if (iVar1 == 0) {
LAB_002b73ac:
        *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iGpffff87b0 + 8);
      }
      else {
        if (iVar1 == DAT_0044e758) {
          iVar1 = *(int *)(param_2 + 0x14);
        }
        else {
          if (iVar1 != DAT_0044e770) {
            uStack_80 = 1;
            uStack_7c = FUN_002a5548(0xffffffff8000000c);
            puVar3 = &uStack_80;
            break;
          }
          iVar1 = *(int *)(param_2 + 0x14);
        }
        if (iVar1 == 0) goto LAB_002b73ac;
      }
      if ((uVar5 == 0) || (uVar5 == (long)iGpffff8ebc)) {
LAB_002b7400:
        iVar1 = *(int *)(param_2 + 0x14);
      }
      else {
        if (uVar5 != (long)DAT_0044e760._4_4_) {
          if (uVar5 != (long)DAT_0044e778._4_4_) {
            uStack_70 = 1;
            uStack_6c = FUN_002a5548(0xffffffff8000000d);
            puVar3 = &uStack_70;
            break;
          }
          goto LAB_002b7400;
        }
        iVar1 = *(int *)(param_2 + 0x14);
      }
      if (uVar5 == 0) {
        uVar5 = (long)iGpffff8ebc;
      }
      if (iVar1 == 0x20) {
        if (uVar5 == 0x500) {
LAB_002b7460:
          *(char *)(param_2 + 0x23) = (char)(uVar5 >> 8);
          return 1;
        }
        uStack_60 = 1;
        uStack_5c = FUN_002a5548(0xffffffff8000000d);
        puVar3 = &uStack_60;
      }
      else {
        if (uVar5 == 0x100) goto LAB_002b7460;
        uStack_50 = 1;
        uStack_4c = FUN_002a5548(0xffffffff8000000d);
        puVar3 = &uStack_50;
      }
    }
    else {
      uStack_90 = 1;
      uStack_8c = FUN_002a5548(0xffffffff8000000d);
      puVar3 = &uStack_90;
    }
    break;
  default:
    goto switchD_002b7014_caseD_3;
  case 4:
switchD_002b7014_caseD_4:
    bVar2 = (byte)(param_3 >> 8) & 0x9f;
    if (uVar5 == 0) {
      switch(*(undefined4 *)(param_2 + 0x14)) {
      case 4:
        uVar5 = 0x100;
        uVar4 = 0x4000;
        break;
      default:
        uVar5 = 0x100;
        break;
      case 8:
        uVar5 = 0x100;
        uVar4 = 0x2000;
        break;
      case 0x18:
        uVar5 = 0x600;
        break;
      case 0x20:
        uVar5 = 0x500;
      }
      bVar2 = (byte)(uVar5 >> 8) | (byte)(uVar7 >> 8);
    }
    *(byte *)(param_2 + 0x23) = bVar2 | (byte)(uVar4 >> 8);
    if (uVar4 == 0x2000) {
      if ((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x14) == 8)) {
        *(undefined4 *)(param_2 + 0x14) = 8;
        if (uVar5 == 0x100) {
          return 1;
        }
        if (uVar5 == 0x500) {
          return 1;
        }
        uStack_b0 = 1;
        uStack_ac = FUN_002a5548(0xffffffff8000000d);
        puVar3 = &uStack_b0;
      }
      else {
        uStack_c0 = 1;
        uStack_bc = FUN_002a5548(0xffffffff8000000c);
        puVar3 = &uStack_c0;
      }
    }
    else if (uVar4 < 0x2001) {
      if (uVar4 != 0) goto LAB_002b7310;
      if (uVar5 == 0x500) {
        if ((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x14) == 0x20)) {
          *(undefined4 *)(param_2 + 0x14) = 0x20;
          return 1;
        }
        uStack_100 = 1;
        uStack_fc = FUN_002a5548(0xffffffff8000000c);
        puVar3 = &uStack_100;
      }
      else if (uVar5 < 0x501) {
        if (uVar5 == 0x100) {
          if ((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x14) == 0x10)) {
            *(undefined4 *)(param_2 + 0x14) = 0x10;
            return 1;
          }
          uStack_120 = 1;
          uStack_11c = FUN_002a5548(0xffffffff8000000c);
          puVar3 = &uStack_120;
        }
        else {
LAB_002b7210:
          uStack_f0 = 1;
          uStack_ec = FUN_002a5548(0xffffffff8000000d);
          puVar3 = &uStack_f0;
        }
      }
      else {
        if (uVar5 != 0x600) goto LAB_002b7210;
        if ((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x14) == 0x18)) {
          *(undefined4 *)(param_2 + 0x14) = 0x18;
          return 1;
        }
        uStack_110 = 1;
        uStack_10c = FUN_002a5548(0xffffffff8000000c);
        puVar3 = &uStack_110;
      }
    }
    else if (uVar4 == 0x4000) {
      if ((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x14) == 4)) {
        *(undefined4 *)(param_2 + 0x14) = 4;
        if (uVar5 == 0x100) {
          return 1;
        }
        if (uVar5 == 0x500) {
          return 1;
        }
        uStack_d0 = 1;
        uStack_cc = FUN_002a5548(0xffffffff8000000d);
        puVar3 = &uStack_d0;
      }
      else {
        uStack_e0 = 1;
        uStack_dc = FUN_002a5548(0xffffffff8000000c);
        puVar3 = &uStack_e0;
      }
    }
    else {
LAB_002b7310:
      uStack_a0 = 1;
      uStack_9c = FUN_002a5548(0xffffffff8000000d);
      puVar3 = &uStack_a0;
    }
    break;
  case 5:
switchD_002b7014_caseD_5:
    if (uVar4 == 0) goto switchD_002b7014_caseD_4;
    uStack_130 = 1;
    uStack_12c = FUN_002a5548(0xffffffff8000000d);
    puVar3 = &uStack_130;
  }
  FUN_002a55d8(puVar3);
switchD_002b7014_caseD_3:
  return 0;
}


// ==== FUN_002b7550 @ 002b7550 ====

void FUN_002b7550(ulong param_1,ulong param_2,undefined8 param_3,ulong *param_4,ulong *param_5,
                 int param_6,undefined4 *param_7,uint *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  int *piVar21;
  ulong *puVar22;
  ulong *puVar23;
  int *piVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  int aiStack_240 [8];
  uint uStack_220;
  int aiStack_21c [7];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  uint uStack_180;
  ulong *puStack_17c;
  ulong *puStack_178;
  int iStack_174;
  undefined4 *puStack_170;
  uint *puStack_16c;
  uint uStack_168;
  int iStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  long lStack_148;
  uint uStack_140;
  uint uStack_130;
  uint *puStack_120;
  int iStack_11c;
  int iStack_118;
  uint uStack_110;
  uint uStack_100;
  ulong uStack_f8;
  int iStack_f0;
  int *piStack_ec;
  uint uStack_e0;
  undefined4 uStack_dc;
  int iStack_d0;
  undefined4 uStack_cc;
  uint uStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  undefined4 uStack_ac;
  
  uStack_180 = (uint)param_3;
  puStack_17c = param_4;
  puStack_178 = param_5;
  iStack_174 = param_6;
  puStack_170 = param_7;
  puStack_16c = param_8;
  switch(param_3) {
  case 0:
  case 1:
  case 0x1b:
  case 0x24:
  case 0x2c:
    uVar26 = 8;
    uVar17 = 8;
    uVar15 = 0x40;
    uStack_168 = 0x20;
    break;
  case 2:
  case 10:
  case 0x32:
    uVar15 = 0x40;
    uVar26 = 0x10;
    uVar17 = 8;
    uStack_168 = 0x40;
    break;
  default:
    uVar15 = 0x40;
    uVar26 = 0x10;
    uStack_168 = 0x40;
    uVar17 = 8;
    break;
  case 0x13:
    uVar26 = 0x10;
    uVar17 = 0x10;
    uVar15 = 0x80;
    uStack_168 = 0x40;
    break;
  case 0x14:
    uVar15 = 0x80;
    uVar26 = 0x20;
    uVar17 = 0x10;
    uStack_168 = 0x80;
    break;
  case 0x30:
  case 0x31:
    uVar26 = 8;
    uVar17 = 8;
    uVar15 = 0x40;
    uStack_168 = 0x20;
  }
  uStack_100 = (uint)((uint)param_3 < 0x3b);
  uVar14 = param_2;
  if (param_1 < param_2) {
    uVar14 = param_1;
  }
  uVar3 = (uint)uVar15;
  uStack_110 = uVar3 >> 6;
  iStack_164 = 1;
  puStack_120 = &uStack_220;
  uStack_f8 = uVar26 << 0x20;
  if ((8 < (long)uVar14) && (1 < iGpffff8830)) {
    uVar25 = iGpffff8830 - 1U & 3;
    if (1 < iGpffff8830) {
      if (uVar25 == 0) {
        iVar6 = 1;
        goto LAB_002b7728;
      }
      if (uVar25 < 2) {
        iStack_164 = 1;
      }
      else {
        iVar6 = 1;
        if (2 < uVar25) {
          uVar14 = (ulong)((int)uVar14 >> 1);
          iStack_164 = 2;
          if ((long)uVar14 < 9) goto LAB_002b7788;
          iVar6 = 2;
        }
        uVar14 = (ulong)((int)uVar14 >> 1);
        iStack_164 = iVar6 + 1;
        if ((long)uVar14 < 9) goto LAB_002b7788;
      }
    }
    uVar14 = (ulong)((int)uVar14 >> 1);
    iVar6 = iStack_164 + 1;
    iStack_164 = iVar6;
    if (8 < (long)uVar14) {
      while (iStack_164 = iVar6, iVar6 < iGpffff8830) {
LAB_002b7728:
        iVar1 = (int)uVar14;
        iStack_164 = iVar6 + 1;
        if (((iVar1 >> 1 < 9) || (iStack_164 = iVar6 + 2, iVar1 >> 2 < 9)) ||
           (iStack_164 = iVar6 + 3, iVar1 >> 3 < 9)) break;
        uVar14 = (ulong)(iVar1 >> 4);
        iVar6 = iVar6 + 4;
        iStack_164 = iVar6;
        if ((long)uVar14 < 9) break;
      }
    }
  }
LAB_002b7788:
  uVar14 = 1;
  *param_4 = 0;
  if (uVar15 == 0) {
    trap(7);
  }
  uStack_160 = 0;
  iStack_118 = iStack_164 << 3;
  uStack_15c = 0;
  uStack_158 = 0;
  iStack_11c = iStack_164 + -1;
  *param_5 = (ulong)(((int)((int)param_1 + uVar3 + -1) / (int)uVar3) * uStack_110);
  aiStack_240[0] = (int)((int)param_2 + uStack_168 + -1) / (int)uStack_168;
  uStack_220 = 0;
  iVar6 = (int)uVar26;
  if (1 < iStack_164) {
    piVar24 = aiStack_21c;
    lVar28 = (long)(int)auStack_1a0;
    puStack_154 = auStack_200;
    puStack_150 = auStack_1e0;
    piVar21 = (int *)((uint)aiStack_240 | 4);
    puStack_14c = auStack_1c0;
    lStack_148 = (long)(int)uStack_110;
    iStack_f0 = 8;
    iVar1 = 0;
    piStack_ec = piVar24;
    do {
      puVar23 = param_4 + 1;
      puVar22 = param_5 + 1;
      uVar25 = (uint)param_2;
      uVar3 = (uint)uVar17;
      uVar19 = (uint)param_1;
      iVar11 = (int)uVar15;
      iVar27 = (int)lVar28;
      iVar2 = iVar1;
      if (param_1 < uVar15) {
        if (param_2 < (ulong)(long)(int)uStack_168) {
          *piVar24 = piVar24[-1];
          if (param_1 <= uVar26) {
            param_1 = uVar26;
          }
          uVar7 = *param_5;
          *puVar22 = uVar7;
          uVar8 = uStack_160 + (int)param_1;
          *piVar21 = piVar21[-1];
          if ((ulong)uVar8 < uVar7 << 6) {
            iVar2 = iVar1 * 4;
            *(uint *)(puStack_154 + iVar2) = uStack_160;
            if (param_2 <= uVar17) {
              param_2 = uVar17;
            }
            *(int *)(puStack_14c + iVar2) = (int)param_1;
            *(int *)(puStack_150 + iVar2) = (int)param_2;
            uStack_160 = uVar8;
            if (uVar17 == 0) {
              trap(7);
            }
            goto LAB_002b7cb0;
          }
          if (param_2 <= uVar17) {
            param_2 = uVar17;
          }
          if ((uStack_15c + (int)param_2 < piVar21[-1] * uStack_168) && (uStack_158 == 0)) {
            if (uVar17 == 0) {
              trap(7);
            }
            param_1 = (ulong)(int)(uVar19 >> 1);
            param_2 = (ulong)(int)(uVar25 >> 1);
            uStack_158 = (uint)uVar14;
            if (uVar17 != 0) {
              uStack_15c = uStack_15c + uVar25;
            }
            *puVar23 = *param_4 +
                       (ulong)(uint)(((int)(uVar25 + uVar3 + -1) / (int)uVar3) * (iVar11 / iVar6));
          }
          else {
            iVar2 = iVar1 + -1;
            iVar10 = iVar2 * 4;
            param_1 = (ulong)(int)(uVar19 >> 1);
            puVar13 = (uint *)(iVar27 + iVar10);
            piVar12 = (int *)(puStack_14c + iVar10);
            uVar7 = param_1;
            if (param_1 <= uVar26) {
              uVar7 = uVar26;
            }
            iVar27 = *piVar12;
            uVar8 = *puVar13;
            *puVar23 = (ulong)*puVar13;
            if (uVar7 < (ulong)(long)iVar27) {
              if (uVar26 == 0) {
                trap(7);
              }
              param_2 = (ulong)(int)(uVar25 >> 1);
              *puVar13 = uVar8 + (int)((uVar19 >> 1) + iVar6 + -1) / iVar6;
              *piVar12 = *piVar12 - (int)uVar7;
              iVar2 = iVar1;
            }
            else {
              param_2 = (ulong)(int)(uVar25 >> 1);
              piVar12 = (int *)(puStack_150 + iVar10);
              uVar7 = param_2;
              if (param_2 <= uVar17) {
                uVar7 = uVar17;
              }
              if (uVar7 < (ulong)(long)*piVar12) {
                if (uVar17 == 0) {
                  trap(7);
                }
                *puVar13 = ((int)((uVar25 >> 1) + uVar3 + -1) / (int)uVar3) * (iVar11 / iVar6) +
                           uVar8;
                *piVar12 = *piVar12 - (int)uVar7;
                iVar2 = iVar1;
              }
            }
          }
        }
        else {
          *piVar24 = piVar24[-1];
          if (param_1 <= uVar26) {
            param_1 = uVar26;
          }
          *puVar22 = *param_5;
          uVar8 = uStack_160 + (int)param_1;
          *piVar21 = piVar21[-1];
          if ((ulong)(long)(int)uVar8 < uVar15) {
            iVar2 = iVar1 * 4;
            *(uint *)(puStack_154 + iVar2) = uStack_160;
            if (param_2 <= uVar17) {
              param_2 = uVar17;
            }
            *(int *)(puStack_150 + iVar2) = (int)param_2;
            *(int *)(puStack_14c + iVar2) = (int)param_1;
            uStack_160 = uVar8;
            if (uVar17 == 0) {
              trap(7);
            }
LAB_002b7cb0:
            param_2 = (ulong)(int)(uVar25 >> 1);
            param_1 = (ulong)(int)(uVar19 >> 1);
            *(int *)(iVar27 + iVar1 * 4) =
                 (int)*param_4 + ((int)(uVar25 + uVar3 + -1) / (int)uVar3) * (iVar11 / iVar6);
            *puVar23 = *param_4 + (ulong)(uint)((int)(uVar19 + iVar6 + -1) / iVar6);
            iVar2 = iVar1 + 1;
          }
          else {
            iVar2 = iVar1 + -1;
            if (iVar1 == 0) {
              if (uVar17 == 0) {
                trap(7);
              }
              lVar9 = *(long *)((int)puStack_17c + iStack_f0 + -8);
              uVar8 = uVar25;
              if (param_2 <= uVar17) {
                uVar8 = uVar3;
              }
              uStack_15c = uStack_15c + uVar8;
              uVar3 = ((int)(uVar25 + uVar3 + -1) / (int)uVar3) * (iVar11 / iVar6);
              goto LAB_002b7bf8;
            }
            param_1 = (ulong)(int)(uVar19 >> 1);
            iVar10 = iVar2 * 4;
            puVar13 = (uint *)(iVar27 + iVar10);
            piVar12 = (int *)(puStack_14c + iVar10);
            uVar7 = param_1;
            if (param_1 <= uVar26) {
              uVar7 = uVar26;
            }
            iVar27 = *piVar12;
            uVar8 = *puVar13;
            *(ulong *)(iStack_f0 + (int)puStack_17c) = (ulong)*puVar13;
            if (uVar7 < (ulong)(long)iVar27) {
              if (uVar26 == 0) {
                trap(7);
              }
              param_2 = (ulong)(int)(uVar25 >> 1);
              *puVar13 = uVar8 + (int)((uVar19 >> 1) + iVar6 + -1) / iVar6;
              *piVar12 = *piVar12 - (int)uVar7;
              iVar2 = iVar1;
            }
            else {
              param_2 = (ulong)(int)(uVar25 >> 1);
              piVar12 = (int *)(puStack_150 + iVar10);
              uVar7 = param_2;
              if (param_2 <= uVar17) {
                uVar7 = uVar17;
              }
              if (uVar7 < (ulong)(long)*piVar12) {
                if (uVar17 == 0) {
                  trap(7);
                }
                *puVar13 = ((int)((uVar25 >> 1) + uVar3 + -1) / (int)uVar3) * (iVar11 / iVar6) +
                           uVar8;
                *piVar12 = *piVar12 - (int)uVar7;
                iVar2 = iVar1;
              }
            }
            uStack_158 = 1;
          }
        }
      }
      else if (param_2 < (ulong)(long)(int)uStack_168) {
        *piVar24 = piVar24[-1];
        if (param_2 <= uVar17) {
          param_2 = uVar17;
        }
        uVar7 = *param_5;
        uVar8 = uStack_15c + (int)param_2;
        *puVar22 = uVar7;
        *piVar21 = piVar21[-1];
        if (uVar8 < uStack_168) {
          if (uVar17 == 0) {
            trap(7);
          }
          uStack_dc = (undefined4)(uVar14 >> 0x20);
          uStack_cc = (undefined4)(uVar15 >> 0x20);
          uStack_bc = (undefined4)(uVar17 >> 0x20);
          uStack_ac = (undefined4)((ulong)lVar28 >> 0x20);
          uStack_15c = uVar8;
          uStack_e0 = (uint)uVar14;
          iStack_d0 = iVar11;
          uStack_c0 = uVar3;
          iStack_b0 = iVar27;
          uVar4 = FUN_002904f0(uVar7,lStack_148);
          lVar28 = FUN_00290488(((int)(uVar25 + uVar3 + -1) / (int)uVar3) * (iVar11 / iVar6),uVar4);
          param_1 = (ulong)(int)(uVar19 >> 1);
          param_2 = (ulong)(int)(uVar25 >> 1);
          *puVar23 = *param_4 + lVar28;
          uVar14 = (ulong)uStack_e0;
          uVar15 = CONCAT44(uStack_cc,iStack_d0);
          uVar17 = CONCAT44(uStack_bc,uStack_c0);
          lVar28 = CONCAT44(uStack_ac,iStack_b0);
        }
        else {
          if (uVar26 == 0) {
            trap(7);
          }
          uVar3 = (int)(uVar19 + iVar6 + -1) / iVar6;
          if (param_1 <= uVar26) {
            param_1 = uVar26;
          }
          lVar9 = *(long *)((int)puStack_17c + iStack_f0 + -8);
          uStack_160 = uStack_160 + (int)param_1;
LAB_002b7bf8:
          param_2 = (ulong)(int)(uVar25 >> 1);
          param_1 = (ulong)(int)(uVar19 >> 1);
          *(ulong *)(iStack_f0 + (int)puStack_17c) = lVar9 + (ulong)uVar3;
          iVar2 = iVar1;
        }
      }
      else {
        param_1 = (ulong)(int)(uVar19 >> 1);
        param_2 = (ulong)(int)(uVar25 >> 1);
        if (uVar26 == 0) {
          trap(7);
        }
        uStack_160 = 0;
        uStack_15c = 0;
        *puVar23 = *param_4 + (ulong)(uint)(((int)uVar19 / iVar6) * ((int)uVar25 / (int)uVar3));
        *puVar22 = (ulong)(((int)((uVar19 >> 1) + iVar11 + -1) / iVar11) * uStack_110);
        *piVar21 = (int)((uVar25 >> 1) + uStack_168 + -1) / (int)uStack_168;
        *piStack_ec = (int)*puVar23;
      }
      uVar14 = (ulong)((int)uVar14 + 1);
      iStack_f0 = iStack_f0 + 8;
      piVar21 = piVar21 + 1;
      piVar24 = piVar24 + 1;
      piStack_ec = piStack_ec + 1;
      iVar1 = iVar2;
      param_5 = puVar22;
      param_4 = puVar23;
    } while ((long)uVar14 < (long)iStack_164);
  }
  iVar1 = iStack_11c;
  uVar14 = *(long *)((int)puStack_178 + iStack_118 + -8) << 6;
  iVar2 = (int)uVar15;
  uVar16 = (undefined4)(uVar15 >> 0x20);
  uVar3 = (uint)uVar17;
  uVar18 = (undefined4)(uVar17 >> 0x20);
  if ((uVar14 == (param_1 & 0xffffffff)) &&
     ((long)(int)(aiStack_240[iStack_11c] * uStack_168) == param_2)) {
    if (uStack_180 - 0x13 < 2) {
      puVar13 = puStack_120 + iStack_11c;
      iStack_d0 = iVar2;
      uStack_cc = uVar16;
      uStack_c0 = uVar3;
      uStack_bc = uVar18;
      uVar4 = FUN_002904f0(uVar14,uStack_f8 >> 0x20);
      uVar4 = FUN_00290488(uVar4,param_2 & 0xffffffff);
      iVar1 = FUN_002904f0(uVar4,CONCAT44(uStack_bc,uStack_c0));
      uVar15 = CONCAT44(uStack_cc,iStack_d0);
      uVar25 = *puVar13 + iVar1;
      uVar17 = CONCAT44(uStack_bc,uStack_c0);
    }
    else {
      uVar25 = 0;
    }
  }
  else if (uStack_180 == 0x13) {
    uVar25 = puStack_120[iStack_11c];
    lVar28 = *(long *)((int)puStack_178 + iStack_118 + -8) << 6;
    iStack_d0 = iVar2;
    uStack_cc = uVar16;
    uStack_c0 = uVar3;
    uStack_bc = uVar18;
    uVar4 = FUN_002904f0(lVar28,uVar15);
    iVar1 = FUN_00290488(uVar4,aiStack_240[iVar1]);
    uVar4 = FUN_002904f0(lVar28,uVar15);
    if (uVar26 == 0) {
      trap(7);
    }
    iVar2 = FUN_00290488(uVar4,iStack_d0 / iVar6);
    uVar15 = CONCAT44(uStack_cc,iStack_d0);
    uVar25 = ((uVar25 + iVar1 * 0x20) - iVar2) - 2;
    uVar17 = CONCAT44(uStack_bc,uStack_c0);
  }
  else {
    uVar25 = 0;
    if (uStack_180 == 0x14) {
      uVar25 = puStack_120[iStack_11c];
      iStack_d0 = iVar2;
      uStack_cc = uVar16;
      uStack_c0 = uVar3;
      uStack_bc = uVar18;
      uVar4 = FUN_002904f0(*(long *)((int)puStack_178 + iStack_118 + -8) << 6,uVar15);
      iVar1 = FUN_00290488(uVar4,aiStack_240[iVar1]);
      uVar15 = CONCAT44(uStack_cc,iStack_d0);
      uVar25 = (uVar25 + iVar1 * 0x20) - 1;
      uVar17 = CONCAT44(uStack_bc,uStack_c0);
    }
  }
  uVar26 = 0;
  uStack_130 = uStack_220;
  uStack_140 = (uint)*puStack_178;
  if (0 < iStack_164) {
    iVar1 = 0;
    do {
      uVar7 = *(ulong *)(iVar1 + (int)puStack_178);
      uVar14 = uVar17;
      if (uStack_140 == uVar7) {
        uVar20 = uStack_f8 >> 0x20;
        uStack_e0 = (uint)uVar26;
        uStack_dc = (undefined4)(uVar26 >> 0x20);
        lVar28 = *(long *)(iVar1 + (int)puStack_17c) - (ulong)uStack_130;
        iStack_d0 = (int)uVar15;
        uStack_cc = (undefined4)(uVar15 >> 0x20);
        uStack_c0 = (uint)uVar17;
        uStack_bc = (undefined4)(uVar17 >> 0x20);
        uVar4 = FUN_00290488(lVar28,uVar20);
        iVar2 = uStack_140 << 6;
        uVar4 = FUN_002904f0(uVar4,iVar2);
        uVar5 = FUN_00290488(uVar4,uVar17);
        uVar26 = CONCAT44(uStack_dc,uStack_e0);
        uVar15 = CONCAT44(uStack_cc,iStack_d0);
        uVar14 = CONCAT44(uStack_bc,uStack_c0);
        if (0x7ff < uVar5) goto LAB_002b8124;
        uVar4 = FUN_00290488(lVar28,uVar20);
        uVar3 = FUN_00290ac0(uVar4,iVar2);
        uVar4 = FUN_00290488(lVar28,uVar20);
        uVar4 = FUN_002904f0(uVar4,iVar2);
        iVar2 = FUN_00290488(uVar4,uVar17);
        uVar26 = CONCAT44(uStack_dc,uStack_e0);
        *(uint *)(uStack_e0 * 4 + iStack_174) = iVar2 << 0x10 | uVar3;
        uVar17 = CONCAT44(uStack_bc,uStack_c0);
        uVar15 = CONCAT44(uStack_cc,iStack_d0);
      }
      else {
LAB_002b8124:
        uVar17 = uVar14;
        uStack_140 = (uint)uVar7;
        uStack_130 = puStack_120[(int)uVar26];
        *(undefined4 *)((int)uVar26 * 4 + iStack_174) = 0;
      }
      if (uVar15 == 0) {
        trap(7);
      }
      iVar2 = (int)uVar15;
      if (1 < (uint)((int)(uStack_140 << 6) / iVar2)) {
        iVar11 = (int)(uStack_140 << 6) / iVar6;
        if (uVar15 == 0) {
          trap(7);
        }
        puVar23 = (ulong *)(iVar1 + (int)puStack_17c);
        uVar14 = *puVar23;
        iVar27 = iVar2 / iVar6;
        iVar10 = (int)(uStack_140 << 0xb) / iVar2;
        uStack_e0 = (uint)uVar26;
        uStack_dc = (undefined4)(uVar26 >> 0x20);
        uStack_cc = (undefined4)(uVar15 >> 0x20);
        uStack_c0 = (uint)uVar17;
        uStack_bc = (undefined4)(uVar17 >> 0x20);
        iStack_d0 = iVar2;
        uVar15 = FUN_00290488(uVar14 & (uint)(iVar11 - iVar27),iVar10 / iVar11);
        if (CONCAT44(uStack_cc,iStack_d0) == 0) {
          trap(7);
        }
        uVar17 = FUN_002904f0(uVar14 & (uint)(iVar10 - iVar11),iVar11 / iVar27);
        *puVar23 = uVar14 & ~(long)(iVar10 - iVar27) & 0xffffffffU | uVar15 | uVar17;
        uVar17 = CONCAT44(uStack_bc,uStack_c0);
        uVar15 = CONCAT44(uStack_cc,iStack_d0);
        uVar26 = (ulong)uStack_e0;
      }
      if (uStack_100 != 0) {
                    /* WARNING: Could not recover jumptable at 0x002b82e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_LAB_004032d0)[uStack_180])();
        return;
      }
      iVar2 = (int)uVar26 + 1;
      uVar26 = (ulong)iVar2;
      *(long *)(iVar1 + (int)puStack_17c) = (long)(int)*(undefined8 *)(iVar1 + (int)puStack_17c);
      iVar1 = iVar2 * 8;
    } while ((long)uVar26 < (long)iStack_164);
  }
  iVar1 = iStack_11c;
  if (uVar15 == 0) {
    trap(7);
  }
  iVar11 = uStack_140 << 6;
  iVar2 = (int)uVar15;
  if (1 < (uint)(iVar11 / iVar2)) {
    iVar27 = iVar11 / iVar6;
    if (uVar15 == 0) {
      trap(7);
    }
    iVar10 = iVar2 / iVar6;
    iVar2 = (int)(uStack_140 << 0xb) / iVar2;
    iVar11 = iVar11 / iVar6;
    uVar25 = uVar25 & ~(iVar2 - iVar10) | (uVar25 & iVar27 - iVar10) * (iVar2 / iVar27) |
             (int)(uVar25 & iVar2 - iVar27) / (iVar27 / iVar10);
  }
  if (uStack_100 != 0) {
                    /* WARNING: Could not recover jumptable at 0x002b85fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_004033c0)[uStack_180])();
    return;
  }
  *puStack_16c = uVar25;
  uVar3 = puStack_120[iStack_11c];
  uStack_c0 = (uint)uVar17;
  uStack_bc = (undefined4)(uVar17 >> 0x20);
  uVar4 = FUN_002904f0(*(long *)((int)puStack_178 + iStack_118 + -8) << 6,uStack_f8 >> 0x20,
                       iStack_118,iVar11);
  if (CONCAT44(uStack_bc,uStack_c0) == 0) {
    trap(7);
  }
  lVar28 = FUN_00290488(uVar4,(int)(aiStack_240[iVar1] * uStack_168) / (int)uStack_c0);
  *puStack_170 = (int)((ulong)((int)uVar3 + lVar28 << 0x26) >> 0x20);
  return;
}


// ==== FUN_002b8858 @ 002b8858 ====

undefined4 FUN_002b8858(undefined8 param_1,int param_2)

{
  bool bVar1;
  long lVar2;
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
  int iVar34;
  uint uVar35;
  int iVar36;
  undefined4 uVar37;
  int iVar38;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  byte bVar39;
  uint uVar40;
  undefined *puVar41;
  undefined1 uVar42;
  byte bVar43;
  char cVar44;
  undefined1 uVar45;
  ushort uVar46;
  short sVar47;
  undefined2 uVar48;
  ulong in_a0_udw;
  uint uVar49;
  uint *puVar50;
  int iVar51;
  int iVar52;
  ulong uVar53;
  ulong uVar54;
  undefined1 auVar55 [16];
  uint uVar56;
  uint uVar57;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined4 in_t0_udw;
  undefined4 in_register_0000008c;
  long lVar58;
  undefined4 *puVar59;
  long lVar60;
  undefined4 *puVar61;
  long lVar62;
  int iVar63;
  int iVar64;
  long lVar65;
  undefined4 *puVar66;
  ulong uVar67;
  int iVar68;
  ulong *puVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar72;
  ulong uVar73;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  ulong auStack_290 [16];
  uint auStack_210 [62];
  long lStack_118;
  uint uStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  undefined4 uStack_ac;
  
  iVar68 = param_2 + iGpffff8e98;
  lVar65 = FUN_002b6fd0();
  if (lVar65 == 0) {
switchD_002b8938_caseD_3:
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x60) == 0) {
    *(byte *)(param_2 + 0x21) = *(byte *)(param_2 + 0x21) & 0xbf;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(iVar68 + 0x38) = 0;
  *(undefined4 *)(iVar68 + 0x3c) = 0;
  *(undefined4 *)(iVar68 + 0x40) = 0;
  *(undefined4 *)(iVar68 + 0x44) = 0;
  *(undefined4 *)(iVar68 + 0x48) = 0;
  *(undefined4 *)(iVar68 + 0x4c) = 0;
  *(undefined4 *)(iVar68 + 0x50) = 0;
  *(undefined4 *)(iVar68 + 0x54) = 0;
  *(undefined4 *)(iVar68 + 0x58) = 0;
  *(undefined1 *)(iVar68 + 0x17) = 0;
  *(undefined1 *)(iVar68 + 0x34) = 0;
  *(undefined1 *)(iVar68 + 0x36) = 0;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_2 + 4);
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x10);
  if ((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x21) = 0x80;
LAB_002ba34c:
    *(undefined4 *)(param_2 + 0x30) = 0;
    goto LAB_002ba358;
  }
  switch(*(undefined1 *)(param_2 + 0x20)) {
  case 0:
    iVar52 = *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc);
    iVar63 = (*(int *)(param_2 + 0x14) + -1) * 4;
    iVar34 = *(int *)(&DAT_004034b0 + iVar63);
    sVar47 = (short)(iVar52 >> 0x13);
    iVar63 = *(int *)(&DAT_00403530 + iVar63);
    uVar48 = (undefined2)(iVar52 >> 3);
    iVar52 = *(int *)(param_2 + 0x10) * CONCAT22(sVar47,uVar48);
    *(uint *)(param_2 + 0x18) = CONCAT22(sVar47,uVar48);
    *(int *)(iVar68 + 0x28) = iVar52;
    if (iVar34 == 0) {
      trap(7);
    }
    *(int *)(iVar68 + 0x30) =
         ((*(int *)(param_2 + 0xc) + -1 + iVar34) / iVar34) *
         ((*(int *)(param_2 + 0x10) + -1 + iVar63) / iVar63) * 0x800;
    if ((*(byte *)(param_2 + 0x21) & 0x80) == 0) {
      lVar65 = (*DAT_00449540)((char)iVar52,0x30411);
      *(int *)(param_2 + 4) = (int)lVar65;
      if (lVar65 == 0) {
        auStack_210[0x20] = 1;
        auStack_210[0x21] = FUN_002a5548(0x13,*(undefined4 *)(iVar68 + 0x28));
        uVar42 = 0x70;
        goto LAB_002ba2f8;
      }
    }
    else {
      *(undefined4 *)(param_2 + 4) = 0;
    }
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x18);
    goto LAB_002ba358;
  case 1:
    if ((*piGpffff87b0 + 0x3f >> 6) * piGpffff87b0[1] <
        (*(int *)(param_2 + 0xc) + 0x3f >> 6) * *(int *)(param_2 + 0x10)) {
      auStack_210[0x24] = 1;
      auStack_210[0x25] = FUN_002a5548(0x10);
      uVar42 = 0x80;
      goto LAB_002ba2f8;
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x21) = 0x80;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    goto LAB_002ba34c;
  case 2:
    if ((*piGpffff87b0 < *(int *)(param_2 + 0xc)) || (piGpffff87b0[1] < *(int *)(param_2 + 0x10))) {
      if (cGpffff87bc == '\0') {
        auStack_210[0x28] = 1;
        auStack_210[0x29] = FUN_002a5548(0x10);
        uVar42 = 0x90;
        goto LAB_002ba2f8;
      }
      iVar68 = *piGpffff87b0;
    }
    else {
      iVar68 = *piGpffff87b0;
    }
    iVar34 = piGpffff87b0[2];
    *(undefined1 *)(param_2 + 0x21) = 0x80;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    iVar68 = (iVar34 + 7 >> 3) * (iVar68 + 0x3f >> 6) * 0x40;
    *(int *)(param_2 + 0x30) = iVar68;
    *(int *)(param_2 + 0x18) = iVar68;
    goto LAB_002ba358;
  default:
    goto switchD_002b8938_caseD_3;
  case 4:
    goto switchD_002b8938_caseD_4;
  case 5:
    break;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x60) != 0) {
    uStack_2b0 = 1;
    uStack_2ac = FUN_002a5548(0xd);
    uVar42 = SUB41(&uStack_2b0,0);
    goto LAB_002ba2f8;
  }
  if ((*piGpffff87b0 + 0x3f >> 6) * piGpffff87b0[1] <
      (*(int *)(param_2 + 0xc) + 0x3f >> 6) * *(int *)(param_2 + 0x10)) {
    uStack_2a0 = 1;
    uStack_29c = FUN_002a5548(0xd);
    uVar42 = 0x60;
    goto LAB_002ba2f8;
  }
switchD_002b8938_caseD_4:
  iVar34 = (*(int *)(param_2 + 0x14) + -1) * 4;
  uVar57 = *(uint *)(&DAT_004034b0 + iVar34);
  uVar73 = (ulong)(int)uVar57;
  uVar35 = 0xffffffff;
  iVar34 = *(int *)(&DAT_00403530 + iVar34);
  lVar65 = (long)iVar34;
  iVar63 = *(int *)(param_2 + 0x10);
  uVar53 = (ulong)(int)*(uint *)(param_2 + 0xc);
  for (uVar54 = uVar53; uVar54 != 0; uVar54 = (ulong)(int)((uint)uVar54 >> 1)) {
    uVar35 = uVar35 + 1;
  }
  uVar42 = (undefined1)iVar63;
  uVar45 = (undefined1)((uint)iVar63 >> 8);
  uVar46 = (ushort)((uint)iVar63 >> 0x10);
  uVar40 = 0xffffffff;
  iVar52 = iVar63;
  while (iVar52 != 0) {
    uVar56 = CONCAT22(uVar46,CONCAT11(uVar45,uVar42)) >> 1;
    uVar42 = (undefined1)uVar56;
    uVar45 = (undefined1)(uVar56 >> 8);
    uVar46 = uVar46 >> 1;
    uVar40 = uVar40 + 1;
    iVar52 = CONCAT22(uVar46,(short)uVar56);
  }
  uVar40 = uVar40 + (1 << (uVar40 & 0x1f) < iVar63);
  uVar56 = uVar57;
  if (uVar73 < uVar53) {
    uVar56 = *(uint *)(param_2 + 0xc);
  }
  uVar56 = (uVar56 >> 6) << 0xe |
           (uVar35 + ((long)(1 << (uVar35 & 0x1f)) < (long)uVar53) & 0xf) << 0x1a |
           uVar40 * 0x40000000;
  *(undefined1 *)(iVar68 + 0x34) = 1;
  *(undefined2 *)(iVar68 + 0x14) = uGpffff8848;
  uVar35 = (int)(uVar40 & 0xf) >> 2;
  *(uint *)(iVar68 + 8) = uVar56;
  bVar43 = *(byte *)(param_2 + 0x23);
  bVar39 = bVar43 & 0x60;
  *(uint *)(iVar68 + 0xc) = uVar35;
  if (bVar39 != 0x20) {
    if (bVar39 < 0x21) {
      if ((bVar43 & 0x60) == 0) {
        bVar43 = bVar43 & 0xf;
        auStack_210[0x34] = 0;
        auStack_210[0x38] = 0;
        iVar63 = 0;
        auStack_210[0x30] = 0;
        iVar52 = 0;
        if (bVar43 == 5) {
          *(uint *)(iVar68 + 0xc) = uVar35 | 4;
        }
        else if (bVar43 < 6) {
          if (bVar43 != 1) {
LAB_002b8b88:
            auStack_210[8] = 1;
            auStack_210[9] = FUN_002a5548(0xd);
            uVar42 = 0x10;
            goto LAB_002ba2f8;
          }
          *(uint *)(iVar68 + 0xc) = uVar35 | 4;
          *(uint *)(iVar68 + 8) = uVar56 | 0xa00000;
        }
        else {
          if (bVar43 != 6) goto LAB_002b8b88;
          *(uint *)(iVar68 + 8) = uVar56 | 0x100000;
        }
        goto LAB_002b8cbc;
      }
    }
    else if (bVar39 == 0x40) {
      *(uint *)(iVar68 + 8) = uVar56 | 0x1400000;
      auStack_210[0x38] = 8;
      auStack_210[0x34] = 2;
      *(uint *)(iVar68 + 0xc) = uVar35 | 0x20000004;
      if ((bVar43 & 0xf) == 1) goto LAB_002b8c50;
      if ((bVar43 & 0xf) != 5) {
        auStack_210[0xc] = 1;
        auStack_210[0xd] = FUN_002a5548(0xd);
        uVar42 = 0x20;
        goto LAB_002ba2f8;
      }
      goto LAB_002b8c70;
    }
    auStack_210[0x14] = 1;
    auStack_210[0x15] = FUN_002a5548(0xd);
    uVar42 = 0x40;
    goto LAB_002ba2f8;
  }
  *(uint *)(iVar68 + 8) = uVar56 | 0x1300000;
  auStack_210[0x38] = 0x10;
  auStack_210[0x34] = 0x10;
  *(uint *)(iVar68 + 0xc) = uVar35 | 0x20000004;
  if ((bVar43 & 0xf) == 1) {
LAB_002b8c50:
    auStack_210[0x30] = 2;
    iVar52 = 0x40;
    *(uint *)(iVar68 + 0xc) = uVar35 | 0x20500004;
    iVar63 = 0x40;
    goto LAB_002b8cbc;
  }
  if ((bVar43 & 0xf) != 5) {
    auStack_210[0x10] = 1;
    auStack_210[0x11] = FUN_002a5548(0xd);
    uVar42 = 0x30;
    goto LAB_002ba2f8;
  }
LAB_002b8c70:
  iVar52 = 0x40;
  auStack_210[0x30] = 4;
  iVar63 = 0x20;
LAB_002b8cbc:
  uVar35 = *(uint *)(param_2 + 0xc);
  iVar51 = (int)(*(int *)(param_2 + 0x14) * uVar35) >> 3;
  *(int *)(param_2 + 0x18) = iVar51;
  if ((*(byte *)(param_2 + 0x23) & 0x80) == 0) {
    iVar72 = *(int *)(param_2 + 0x10);
    *(undefined **)(iVar68 + 0x24) = &DAT_00400004;
    *(undefined **)(iVar68 + 0x1c) = &DAT_00400004;
    *(undefined4 *)(iVar68 + 0x20) = 0x4000;
    *(undefined4 *)(iVar68 + 0x18) = 0x4000;
    *(uint *)(iVar68 + 0x28) = iVar72 * iVar51 + 0xfU & 0xfffffff0;
    *(undefined1 *)(iVar68 + 0x16) = 0;
    iVar51 = auStack_210[0x38] * auStack_210[0x34] * auStack_210[0x30];
    auStack_290[0] = 0;
    if (uVar73 == 0) {
      trap(7);
    }
    auStack_210[0] = 0;
    iVar72 = (int)(*(int *)(param_2 + 0xc) + uVar57 + -1) / (int)uVar57;
    auStack_290[8] = (ulong)(iVar72 * (uVar57 >> 6));
    iVar38 = *(int *)(param_2 + 0x10);
    *(int *)(iVar68 + 0x2c) = iVar51;
    iVar38 = (iVar38 + -1 + iVar34) / iVar34;
    uVar35 = iVar72 * iVar38;
    *(uint *)(iVar68 + 0x30) = uVar35 * 0x800;
    if (iVar51 == 0) goto LAB_002b9258;
    if ((*(int *)(param_2 + 0xc) < (int)(iVar72 * uVar57)) ||
       (*(int *)(param_2 + 0x10) < iVar38 * iVar34)) {
      *(uint *)(iVar68 + 0x10) = (uVar35 & 0x1fffff) * 0x20 + -4;
    }
    else {
      *(uint *)(iVar68 + 0x10) = (uVar35 & 0x1fffff) << 5;
      if (iVar52 == 0) {
        trap(7);
      }
      *(uint *)(iVar68 + 0x30) =
           uVar35 * 0x800 +
           ((int)(auStack_210[0x38] + -1 + iVar52) / iVar52) *
           ((int)(auStack_210[0x34] + -1 + iVar63) / iVar63) * 0x800;
    }
  }
  else {
    uVar54 = (ulong)(int)uVar35;
    auStack_290[0xe] = 1;
    uVar53 = 0;
    lVar58 = 0;
    uVar40 = *(uint *)(param_2 + 0x10);
    iVar34 = (int)uVar40 >> 0x1f;
    auStack_210[0x3c] = 0;
    auStack_210[0x2c] = 0;
    auStack_290[2] = 0;
    auStack_290[1] = 0;
    auStack_290[0] = 0;
    auStack_290[5] = 0;
    auStack_290[4] = 0;
    auStack_290[3] = 0;
    auStack_290[6] = 0;
    auStack_290[10] = 1;
    auStack_290[9] = 1;
    auStack_290[8] = 1;
    auStack_290[0xd] = 1;
    auStack_290[0xc] = 1;
    auStack_290[0xb] = 1;
    uVar56 = uVar57;
    if (uVar73 < uVar54) {
      uVar56 = uVar35;
    }
    uVar56 = uVar56 >> 6;
    uVar37 = 0;
    puVar69 = auStack_290 + 8;
    lVar60 = (long)(int)(auStack_210 + 0x2c);
    lVar62 = (long)(int)(auStack_210 + 0x2d);
    if ((uVar35 == 0) || (uVar40 == 0)) {
LAB_002b8fdc:
      uVar57 = *(uint *)(iVar68 + 8);
    }
    else {
      if (iGpffff8830 != 0) {
        if (*(int *)(param_2 + 0xc) < 8) {
          iVar63 = *(int *)(param_2 + 0x14);
        }
        else {
          if (7 < *(int *)(param_2 + 0x10)) {
            bVar1 = uVar35 < 8;
            goto LAB_002b8fcc;
          }
          iVar63 = *(int *)(param_2 + 0x14);
        }
        do {
          iVar52 = (int)uVar53;
          auStack_210[0x3c] =
               auStack_210[0x3c] + ((iVar63 * (uint)uVar54 * uVar40 >> 3) + 0xf & 0xfffffff0);
          uVar35 = uVar57;
          if (uVar73 < uVar54) {
            uVar35 = (uint)uVar54;
          }
          puVar69[iVar52] = (ulong)(uVar35 >> 6);
          uVar67 = puVar69[iVar52];
          iStack_f0 = (int)lVar58;
          uStack_ec = (undefined4)((ulong)lVar58 >> 0x20);
          uStack_e0 = (undefined4)lVar60;
          uStack_dc = (undefined4)((ulong)lVar60 >> 0x20);
          uStack_d0 = (undefined4)lVar62;
          uStack_cc = (undefined4)((ulong)lVar62 >> 0x20);
          iStack_c0 = (int)lVar65;
          uStack_bc = (undefined4)((ulong)lVar65 >> 0x20);
          uStack_ac = (undefined4)(uVar53 >> 0x20);
          uStack_110 = uVar40;
          iStack_10c = iVar34;
          uStack_108 = in_a3_udw;
          uStack_104 = in_register_0000007c;
          uStack_100 = uVar56;
          uStack_fc = uVar37;
          uStack_f8 = in_t0_udw;
          uStack_f4 = in_register_0000008c;
          iStack_b0 = iVar52;
          lVar2 = FUN_00290488((char)*(undefined4 *)(param_2 + 0x14),uVar67 << 6);
          uVar35 = uStack_110;
          lVar60 = CONCAT44(uStack_dc,uStack_e0);
          lVar62 = CONCAT44(uStack_cc,uStack_d0);
          lVar65 = CONCAT44(uStack_bc,iStack_c0);
          if (uVar67 != CONCAT44(uStack_fc,uStack_100)) {
            if (uVar73 == 0) {
              trap(7);
            }
            auStack_210[0x2c] =
                 iStack_f0 +
                 ((int)((*(int *)(param_2 + 0xc) >> (iStack_b0 - 1U & 0x1f)) + -1 + uVar57) /
                 (int)uVar57) *
                 (((*(int *)(param_2 + 0x10) >> (iStack_b0 - 1U & 0x1f)) + -1 + iStack_c0) /
                 iStack_c0) * 0x800 & 0xfffff800;
          }
          uVar40 = auStack_210[0x2c] + 0x3f;
          uVar56 = (uint)uVar67;
          uVar37 = (undefined4)(uVar67 >> 0x20);
          auStack_210[0x2c] = uVar40 & 0xffffffc0;
          uVar49 = (uVar40 & 0x7c0) >> 8;
          switch(*(uint *)(iVar68 + 8) >> 0x14 & 0x3f) {
          case 0:
          case 1:
            bVar43 = (byte)(uVar49 << 2);
            puVar41 = &DAT_004035b0;
            break;
          case 2:
            bVar43 = (byte)(uVar49 << 2);
            puVar41 = &DAT_004035d0;
            break;
          default:
            goto switchD_002b8ee4_caseD_3;
          case 10:
            bVar43 = (byte)(uVar49 << 2);
            puVar41 = &DAT_004035f0;
            break;
          case 0x13:
            bVar43 = (byte)(uVar49 << 2);
            puVar41 = &DAT_00403610;
            break;
          case 0x14:
            bVar43 = (byte)(uVar49 << 2);
            puVar41 = &DAT_00403630;
          }
          auStack_290[iVar52] = (ulong)((uVar40 >> 0xb) * 0x20 + *(int *)(puVar41 + bVar43));
switchD_002b8ee4_caseD_3:
          lVar58 = (long)(int)auStack_210[0x2c];
          uVar53 = (ulong)(iStack_b0 + 1);
          uVar54 = (ulong)(int)((uint)uVar54 >> 1);
          uVar40 = uVar35 >> 1;
          iVar34 = 0;
          auStack_210[0x2c] =
               auStack_210[0x2c] + (uVar35 * (int)((ulong)(lVar2 << 0x1d) >> 0x20) >> 2) + 0x3f &
               0xffffffc0;
          in_a3_udw = uStack_108;
          in_register_0000007c = uStack_104;
          in_t0_udw = uStack_f8;
          in_register_0000008c = uStack_f4;
          if ((uVar54 == 0) || (uVar40 == 0)) goto LAB_002b8fdc;
          if ((ulong)(long)iGpffff8830 <= uVar53) {
            uVar57 = *(uint *)(iVar68 + 8);
            goto LAB_002b8fe0;
          }
          if (*(int *)(param_2 + 0xc) < 8) {
            iVar63 = *(int *)(param_2 + 0x14);
          }
          else if (*(int *)(param_2 + 0x10) < 8) {
            iVar63 = *(int *)(param_2 + 0x14);
          }
          else {
            bVar1 = uVar54 < 8;
LAB_002b8fcc:
            if ((bVar1) || (CONCAT44(iVar34,uVar40) < 8)) goto LAB_002b8fdc;
            iVar63 = *(int *)(param_2 + 0x14);
          }
        } while( true );
      }
      uVar57 = *(uint *)(iVar68 + 8);
    }
LAB_002b8fe0:
    iStack_b0 = (int)uVar53;
    uStack_ac = (undefined4)(uVar53 >> 0x20);
    FUN_002b7550((char)*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                 uVar57 >> 0x14 & 0x3f,auStack_290,puVar69,auStack_210);
    lVar65 = auStack_290[9] << 0xe;
    uVar48 = CONCAT11((byte)((auStack_290[1] & 0x3fff) >> 8) | (byte)((ulong)lVar65 >> 8),
                      (char)(auStack_290[1] & 0x3fff));
    uVar53 = CONCAT44((int)((ulong)lVar65 >> 0x20),CONCAT22((short)((ulong)lVar65 >> 0x10),uVar48))
             | (auStack_290[2] & 0x3fff) << 0x14;
    uVar54 = CONCAT44((int)((auStack_290[0xc] << 0xe) >> 0x20),
                      (uint)auStack_290[4] & 0x3fff | (uint)(auStack_290[0xc] << 0xe)) |
             (auStack_290[5] & 0x3fff) << 0x14;
    iVar34 = auStack_210[0x38] * auStack_210[0x34] * auStack_210[0x30];
    *(uint *)(iVar68 + 0x28) = auStack_210[0x3c];
    *(char *)(iVar68 + 0x16) = ((char)iStack_b0 + -1) * '\x04';
    *(uint *)(iVar68 + 0x18) = CONCAT22((short)(uVar53 >> 0x10),uVar48);
    *(uint *)(iVar68 + 0x1c) =
         (uint)(uVar53 >> 0x20) | (uint)((auStack_290[10] << 0x22) >> 0x20) |
         (uint)(((auStack_290[3] & 0x3fff) << 0x28) >> 0x20) |
         (uint)((auStack_290[0xb] << 0x36) >> 0x20);
    *(int *)(iVar68 + 0x20) = (int)uVar54;
    *(uint *)(iVar68 + 0x24) =
         (uint)(uVar54 >> 0x20) | (uint)((auStack_290[0xd] << 0x22) >> 0x20) |
         (uint)(((auStack_290[6] & 0x3fff) << 0x28) >> 0x20) |
         (uint)((auStack_290[0xe] << 0x36) >> 0x20);
    *(int *)(iVar68 + 0x2c) = iVar34;
    *(uint *)(iVar68 + 0x30) = auStack_210[0x2c];
    if (iVar34 == 0) {
LAB_002b9258:
      *(undefined4 *)(iVar68 + 0x10) = 0;
    }
    else {
      *(uint *)(iVar68 + 0x10) = auStack_210[0x2d];
      if (auStack_210[0x2d] * 0x40 == auStack_210[0x2c]) {
        *(uint *)(iVar68 + 0x30) = auStack_210[0x2d] * 0x40 + 0x800;
      }
    }
  }
  *(uint *)(iVar68 + 0x28) = *(int *)(iVar68 + 0x28) + 0xfU & 0xfffffff0;
  if (iGpffff87c0 == 0) {
    if ((*(byte *)(param_2 + 0x21) & 0x80) != 0) {
      bVar43 = *(byte *)(param_2 + 0x21);
      goto LAB_002ba04c;
    }
    iVar34 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0xc) * *(int *)(param_2 + 0x14);
    if (0x7ffe < CONCAT44(iVar34 >> 0x1f,iVar34 >> 7)) goto LAB_002ba048;
    bVar43 = *(byte *)(iVar68 + 0x36);
    lStack_118 = 0;
    *(byte *)(iVar68 + 0x36) = bVar43 | 1;
    if (((*(uint *)(iVar68 + 8) >> 0x14 & 0x3f) == 0x13) &&
       (*(byte *)(iVar68 + 0x36) = bVar43 | 3, (*(uint *)(iVar68 + 0xc) >> 0x13 & 0xf) == 0)) {
      uVar57 = (uint)(*(byte *)(iVar68 + 0x16) >> 2);
      if (auStack_290[uVar57 + 8] == 2) {
        uVar53 = auStack_290[uVar57];
        uVar54 = uVar53 & 0xffffffffffffffe1;
        uVar35 = *(uint *)(iVar68 + 0x10);
        uVar57 = (uVar35 & 0xffffffe1 | (uVar35 & 2) << 2 | (uVar35 & 4) >> 1 | (uVar35 & 8) << 1 |
                 (uVar35 & 0x10) >> 2) -
                 ((CONCAT22((short)(uVar54 >> 0x10),
                            CONCAT11((char)(uVar54 >> 8),
                                     (byte)uVar54 | (byte)((uVar53 & 2) << 2) |
                                     (byte)((uVar53 & 4) >> 1) | (byte)((uVar53 & 8) << 1) |
                                     (byte)((uVar53 & 0x10) >> 2))) -
                  ((auStack_210[uVar57] & 0x7ff) >> 4)) - (auStack_210[uVar57] >> 0x11 & 0x3f8));
        uVar46 = (ushort)(uVar57 >> 0x13);
        uVar48 = (undefined2)(uVar57 >> 3);
        if ((uint)(CONCAT22(uVar46,uVar48) << 3) < 0x800) {
          lStack_118 = (ulong)(CONCAT22(uVar46,uVar48) << 0x13 | uVar57 * 8 & 0x3f) << 0x20;
        }
        goto LAB_002b93dc;
      }
      uVar57 = *(uint *)(iVar68 + 8);
    }
    else {
LAB_002b93dc:
      uVar57 = *(uint *)(iVar68 + 8);
    }
    if ((uVar57 >> 0x14 & 0x3f) == 0x14) {
      *(byte *)(iVar68 + 0x36) = *(byte *)(iVar68 + 0x36) | 4;
      if ((*(uint *)(iVar68 + 0xc) >> 0x13 & 0xf) == 2) {
        uVar57 = (uint)(*(byte *)(iVar68 + 0x16) >> 2);
        if (auStack_290[uVar57 + 8] == 2) {
          uVar53 = auStack_290[uVar57];
          uVar35 = *(uint *)(iVar68 + 0x10);
          uVar54 = (long)(int)uVar35 & 0xffffffe0;
          uVar57 = CONCAT22((short)(uVar54 >> 0x10),
                            CONCAT11((char)(uVar54 >> 8),
                                     (byte)uVar54 | (byte)((uVar35 & 1) << 2) |
                                     (byte)((uVar35 & 2) >> 1) | (byte)((uVar35 & 4) << 1) |
                                     (byte)((uVar35 & 8) >> 2) | (byte)uVar35 & 0x10)) -
                   ((((uint)uVar53 & 0xffffffe0 | (uint)((uVar53 & 1) << 2) |
                      (uint)((uVar53 & 2) >> 1) | (uint)((uVar53 & 4) << 1) |
                      (uint)((uVar53 & 8) >> 2) | (uint)uVar53 & 0x10) -
                    ((auStack_210[uVar57] & 0x7ff) >> 5)) - (auStack_210[uVar57] >> 0x12 & 0x1fc));
          uVar35 = uVar57 >> 2;
          if (uVar35 << 3 < 0x800) {
            lStack_118 = (ulong)(uVar35 << 0x13 | (uVar57 & 3) << 4) << 0x20;
          }
          else {
            lStack_118 = 0;
          }
        }
        else {
          lStack_118 = 0;
        }
      }
      bVar43 = *(byte *)(iVar68 + 0x16);
    }
    else {
      bVar43 = *(byte *)(iVar68 + 0x16);
    }
    uVar57 = *(uint *)(iVar68 + 8) >> 0x14 & 0x3f;
    auStack_210[0x2e] = 0;
    auStack_210[0x2f] = 1;
    *(uint *)(iVar68 + 0x28) = ((bVar43 >> 2) + 1) * 0x50;
    switch(uVar57) {
    case 0:
    case 0x30:
      auStack_210[0x2e] = 2;
      break;
    case 1:
    case 0x13:
    case 0x14:
    case 0x1b:
    case 0x24:
    case 0x2c:
    case 0x31:
      auStack_210[0x2e] = 8;
      break;
    case 2:
    case 10:
    case 0x32:
    case 0x3a:
      auStack_210[0x2e] = 4;
    }
    if (((*(byte *)(iVar68 + 0x36) & 2) != 0) && (uVar57 == 0x13)) {
      auStack_210[0x2e] = 0x10;
      auStack_210[0x2f] = 4;
    }
    if ((*(byte *)(iVar68 + 0x36) & 4) == 0) {
LAB_002b95d4:
      bVar43 = *(byte *)(iVar68 + 0x16);
    }
    else {
      if (uVar57 == 0x14) {
        auStack_210[0x2e] = 0x20;
        auStack_210[0x2f] = 4;
        goto LAB_002b95d4;
      }
      bVar43 = *(byte *)(iVar68 + 0x16);
    }
    iVar34 = *(int *)(param_2 + 0xc);
    lVar65 = (long)iVar34;
    iVar63 = *(int *)(param_2 + 0x10);
    lVar58 = (long)(int)auStack_210[0x2e];
    uVar57 = (bVar43 >> 2) + 1;
    uVar35 = -uVar57 & 3;
    if ((-uVar57 & 3) != 0) {
      if (uVar35 < 3) {
        if (uVar35 < 2) {
          iVar52 = auStack_210[0x2e];
          if (lVar58 <= lVar65) {
            iVar52 = iVar34;
          }
          iVar51 = auStack_210[0x2e];
          if ((int)auStack_210[0x2f] <= iVar63) {
            iVar51 = iVar63;
          }
          lVar65 = (long)(iVar34 >> 1);
          iVar63 = iVar63 >> 1;
          *(uint *)(iVar68 + 0x28) =
               *(int *)(iVar68 + 0x28) +
               ((iVar52 * iVar51 * *(int *)(param_2 + 0x14) >> 3) + 0xfU & 0xfffffff0);
          uVar57 = (uint)(bVar43 >> 2);
        }
        iVar34 = auStack_210[0x2e];
        if (lVar58 <= lVar65) {
          iVar34 = (int)lVar65;
        }
        iVar52 = auStack_210[0x2e];
        if ((int)auStack_210[0x2f] <= iVar63) {
          iVar52 = iVar63;
        }
        lVar65 = (long)((int)lVar65 >> 1);
        iVar63 = iVar63 >> 1;
        uVar57 = uVar57 - 1;
        *(uint *)(iVar68 + 0x28) =
             *(int *)(iVar68 + 0x28) +
             ((iVar34 * iVar52 * *(int *)(param_2 + 0x14) >> 3) + 0xfU & 0xfffffff0);
      }
      iVar34 = auStack_210[0x2e];
      if (lVar58 <= lVar65) {
        iVar34 = (int)lVar65;
      }
      iVar52 = auStack_210[0x2e];
      if ((int)auStack_210[0x2f] <= iVar63) {
        iVar52 = iVar63;
      }
      iVar51 = (int)lVar65 >> 1;
      iVar63 = iVar63 >> 1;
      uVar57 = uVar57 - 1;
      *(uint *)(iVar68 + 0x28) =
           *(int *)(iVar68 + 0x28) +
           ((iVar34 * iVar52 * *(int *)(param_2 + 0x14) >> 3) + 0xfU & 0xfffffff0);
      goto joined_r0x002b96fc;
    }
    do {
      iVar34 = auStack_210[0x2e];
      if ((int)auStack_210[0x2f] <= iVar63) {
        iVar34 = iVar63;
      }
      iVar51 = (int)lVar65;
      iVar52 = auStack_210[0x2e];
      if (lVar58 <= lVar65) {
        iVar52 = iVar51;
      }
      iVar72 = auStack_210[0x2e];
      if ((int)auStack_210[0x2f] <= iVar63 >> 1) {
        iVar72 = iVar63 >> 1;
      }
      iVar38 = auStack_210[0x2e];
      if (lVar58 <= iVar51 >> 1) {
        iVar38 = iVar51 >> 1;
      }
      iVar64 = iVar51 >> 2;
      uVar45 = (undefined1)auStack_210[0x2e];
      uVar42 = 0;
      sVar47 = 0;
      iVar52 = *(int *)(iVar68 + 0x28) +
               ((iVar52 * iVar34 * *(int *)(param_2 + 0x14) >> 3) + 0xfU & 0xfffffff0);
      iVar34 = auStack_210[0x2e];
      if ((int)auStack_210[0x2f] <= iVar63 >> 2) {
        iVar34 = iVar63 >> 2;
      }
      *(int *)(iVar68 + 0x28) = iVar52;
      if (lVar58 <= iVar64) {
        uVar45 = (undefined1)iVar64;
        uVar42 = (undefined1)((uint)iVar64 >> 8);
        sVar47 = (short)((ulong)lVar65 >> 0x10) >> 2;
      }
      iVar64 = auStack_210[0x2e];
      if (lVar58 <= iVar51 >> 3) {
        iVar64 = iVar51 >> 3;
      }
      iVar36 = auStack_210[0x2e];
      if ((int)auStack_210[0x2f] <= iVar63 >> 3) {
        iVar36 = iVar63 >> 3;
      }
      iVar51 = iVar51 >> 4;
      iVar63 = iVar63 >> 4;
      uVar57 = uVar57 - 4;
      iVar52 = iVar52 + ((iVar38 * iVar72 * *(int *)(param_2 + 0x14) >> 3) + 0xfU & 0xfffffff0);
      *(int *)(iVar68 + 0x28) = iVar52;
      iVar34 = CONCAT22(sVar47,CONCAT11(uVar42,uVar45)) * iVar34 * *(int *)(param_2 + 0x14);
      iVar52 = iVar52 + (CONCAT22((short)(iVar34 >> 0x13),(short)(iVar34 >> 3)) + 0xfU & 0xfffffff0)
      ;
      *(int *)(iVar68 + 0x28) = iVar52;
      *(uint *)(iVar68 + 0x28) =
           iVar52 + ((iVar64 * iVar36 * *(int *)(param_2 + 0x14) >> 3) + 0xfU & 0xfffffff0);
joined_r0x002b96fc:
      lVar65 = (long)iVar51;
    } while (uVar57 != 0);
    if (*(int *)(iVar68 + 0x2c) != 0) {
      if (auStack_210[0x34] == 2) {
        auStack_210[0x34] = 3;
      }
      *(uint *)(iVar68 + 0x2c) = auStack_210[0x38] * auStack_210[0x34] * auStack_210[0x30] + 0x50;
    }
    iVar34 = 0x10;
    uVar40 = 0;
    uVar56 = (uint)(*(byte *)(iVar68 + 0x16) >> 2);
    uVar35 = uVar56 + 1;
    uVar57 = -uVar35 & 3;
    puVar50 = auStack_210;
    if ((-uVar35 & 3) != 0) {
      if (uVar57 < 3) {
        if (uVar57 < 2) {
          if (auStack_210[0] == 0) {
            iVar34 = 0x50;
          }
          uVar40 = (uint)(auStack_210[0] == 0);
          puVar50 = auStack_210 + 1;
          uVar35 = uVar56;
        }
        uVar57 = *puVar50;
        puVar50 = puVar50 + 1;
        if (uVar57 == 0) {
          iVar34 = iVar34 + 0x40;
          uVar40 = uVar40 + 1;
        }
        uVar35 = uVar35 - 1;
      }
      uVar35 = uVar35 - 1;
      if (*puVar50 == 0) {
        iVar34 = iVar34 + 0x40;
        uVar40 = uVar40 + 1;
      }
      puVar50 = puVar50 + 1;
      goto joined_r0x002b98cc;
    }
    do {
      if (*puVar50 == 0) {
        iVar34 = iVar34 + 0x40;
        uVar40 = uVar40 + 1;
      }
      if (puVar50[1] == 0) {
        iVar34 = iVar34 + 0x40;
        uVar40 = uVar40 + 1;
      }
      if (puVar50[2] == 0) {
        iVar34 = iVar34 + 0x40;
        uVar40 = uVar40 + 1;
      }
      uVar35 = uVar35 - 4;
      if (puVar50[3] == 0) {
        iVar34 = iVar34 + 0x40;
        uVar40 = uVar40 + 1;
      }
      puVar50 = puVar50 + 4;
joined_r0x002b98cc:
    } while (uVar35 != 0);
    if (*(int *)(iVar68 + 0x2c) == 0) {
LAB_002b997c:
      cVar44 = (char)iVar34 +
               ((char)*(undefined4 *)(iVar68 + 0x28) + (char)*(undefined4 *)(iVar68 + 0x2c) + 0x3fU
               & 0xc0) + 0x70;
    }
    else {
      iVar34 = iVar34 + 0x40;
      uVar40 = uVar40 + 1;
      if (lStack_118 != 0) goto LAB_002b997c;
      cVar44 = (char)iVar34 + ((char)*(undefined4 *)(iVar68 + 0x28) + 0x7fU & 0x80) + 0x70 +
               ((char)*(int *)(iVar68 + 0x2c) + 0x3fU & 0xc0);
    }
    uVar37 = (*DAT_00449540)(cVar44,0x30411);
    *(undefined4 *)(param_2 + 4) = uVar37;
    if (*(uint **)(param_2 + 4) == (uint *)0x0) {
      auStack_210[0x18] = 1;
      auStack_210[0x19] =
           FUN_002a5548(0x13,iVar34 + (*(int *)(iVar68 + 0x28) + 0x7fU & 0xffffff80) + 0x70 +
                             (*(int *)(iVar68 + 0x2c) + 0x3fU & 0xffffffc0));
      uVar42 = 0x50;
      goto LAB_002ba2f8;
    }
    **(uint **)(param_2 + 4) = uVar40;
    *(uint *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4) + uVar40 * 0x40 + 0x8f & 0xffffff80
    ;
    *(uint *)(*(int *)(param_2 + 4) + 8) = uVar40;
    if (*(int *)(iVar68 + 0x2c) == 0) {
LAB_002b9a88:
      iVar63 = *(int *)(param_2 + 4);
    }
    else {
      iVar63 = *(int *)(param_2 + 4);
      if (lStack_118 == 0) {
        *(uint *)(param_2 + 8) =
             (iVar63 + iVar34 + 0x70U & 0xffffff80) + (*(int *)(iVar68 + 0x28) + 0x7fU & 0xffffff80)
             + 0x50;
        goto LAB_002b9a88;
      }
    }
    iVar52 = *(int *)(param_2 + 0xc);
    auVar70._8_4_ = in_a3_udw;
    auVar70._0_8_ = 0xe;
    auVar70._12_4_ = in_register_0000007c;
    auVar55._8_4_ = in_t0_udw;
    auVar55._0_8_ = 0x1000000000000003;
    auVar55._12_4_ = in_register_0000008c;
    auVar70 = _pcpyld(auVar70,auVar55);
    puVar66 = (undefined4 *)(iVar63 + 0x10);
    puVar59 = *(undefined4 **)(iVar63 + 4);
    auVar71._8_4_ = in_a3_udw;
    auVar71._0_8_ = 0xe;
    auVar71._12_4_ = in_register_0000007c;
    auVar14._8_4_ = in_t0_udw;
    auVar14._0_8_ = 0x1000000000000001;
    auVar14._12_4_ = in_register_0000008c;
    auVar71 = _pcpyld(auVar71,auVar14);
    iVar51 = 0;
    iVar63 = *(int *)(param_2 + 0x10);
    iVar72 = 0;
    puVar50 = auStack_210;
    puVar69 = auStack_290;
    puVar61 = puVar66;
    do {
      *puVar59 = auVar70._0_4_;
      puVar59[1] = auVar70._4_4_;
      puVar59[2] = auVar70._8_4_;
      puVar59[3] = auVar70._12_4_;
      lVar65 = (long)(int)auStack_210[0x2e];
      if ((long)(int)auStack_210[0x2e] <= (long)iVar52) {
        lVar65 = (long)iVar52;
      }
      uVar42 = (undefined1)auStack_210[0x2f];
      uVar45 = (undefined1)(auStack_210[0x2f] >> 8);
      uVar48 = (undefined2)(auStack_210[0x2f] >> 0x10);
      if ((int)auStack_210[0x2f] <= iVar63) {
        uVar42 = (undefined1)iVar63;
        uVar45 = (undefined1)((uint)iVar63 >> 8);
        uVar48 = (undefined2)((uint)iVar63 >> 0x10);
      }
      if (((*(byte *)(iVar68 + 0x36) & 2) == 0) || ((*(uint *)(iVar68 + 8) >> 0x14 & 0x3f) != 0x13))
      {
        if ((*(byte *)(iVar68 + 0x36) & 4) == 0) {
          uVar57 = *puVar50;
        }
        else {
          if ((*(uint *)(iVar68 + 8) >> 0x14 & 0x3f) == 0x14) {
            uVar57 = *puVar50;
            goto LAB_002b9b58;
          }
          uVar57 = *puVar50;
        }
      }
      else {
        uVar57 = *puVar50;
LAB_002b9b58:
        uVar57 = (uVar57 & 0xfffefffe) >> 1;
      }
      auVar5._8_4_ = in_a3_udw;
      auVar5._0_8_ = 0x51;
      auVar5._12_4_ = in_register_0000007c;
      auVar33._4_4_ = in_t0_udw;
      auVar33._0_4_ = uVar57;
      auVar33._8_4_ = in_register_0000008c;
      auVar33._12_4_ = 0;
      auVar55 = _pcpyld(auVar5,auVar33 << 0x20);
      puVar59[4] = auVar55._0_4_;
      puVar59[5] = auVar55._4_4_;
      puVar59[6] = auVar55._8_4_;
      puVar59[7] = auVar55._12_4_;
      iVar38 = (int)lVar65;
      if ((((*(byte *)(iVar68 + 0x36) & 2) == 0) || ((*(uint *)(iVar68 + 8) >> 0x14 & 0x3f) != 0x13)
          ) && (((*(byte *)(iVar68 + 0x36) & 4) == 0 ||
                ((*(uint *)(iVar68 + 8) >> 0x14 & 0x3f) != 0x14)))) {
        uVar57 = (uint)((ulong)lVar65 >> 0x20) | CONCAT22(uVar48,CONCAT11(uVar45,uVar42));
        iVar64 = iVar38;
      }
      else {
        uVar57 = iVar38 >> 0x1f | CONCAT22(uVar48,CONCAT11(uVar45,uVar42)) >> 1;
        iVar64 = iVar38 >> 1;
      }
      auVar6._8_4_ = in_a3_udw;
      auVar6._0_8_ = 0x52;
      auVar6._12_4_ = in_register_0000007c;
      auVar15._4_4_ = uVar57;
      auVar15._0_4_ = iVar64;
      auVar15._8_4_ = in_t0_udw;
      auVar15._12_4_ = in_register_0000008c;
      auVar55 = _pcpyld(auVar6,auVar15);
      puVar59[8] = auVar55._0_4_;
      puVar59[9] = auVar55._4_4_;
      puVar59[10] = auVar55._8_4_;
      puVar59[0xb] = auVar55._12_4_;
      auVar7._8_4_ = in_a3_udw;
      auVar7._0_8_ = 0x53;
      auVar7._12_4_ = in_register_0000007c;
      auVar26._4_4_ = in_register_0000008c;
      auVar26._0_4_ = in_t0_udw;
      auVar26._8_8_ = 0;
      auVar55 = _pcpyld(auVar7,auVar26 << 0x40);
      puVar59[0xc] = auVar55._0_4_;
      puVar59[0xd] = auVar55._4_4_;
      puVar59[0xe] = auVar55._8_4_;
      puVar59[0xf] = auVar55._12_4_;
      iVar64 = *(int *)((int)auStack_210 + iVar72);
      iVar38 = (iVar38 * CONCAT22(uVar48,CONCAT11(uVar45,uVar42)) * *(int *)(param_2 + 0x14) >> 3) +
               0xf;
      uVar57 = iVar38 >> 4;
      auVar27._4_4_ = in_register_0000002c;
      auVar27._0_4_ = in_v0_udw;
      auVar27._8_8_ = 0;
      auVar16._8_4_ = in_t0_udw;
      auVar16._0_8_ = CONCAT44(iVar38 >> 0x1f,uVar57) | 0x800000000000000;
      auVar16._12_4_ = in_register_0000008c;
      auVar55 = _pcpyld(auVar27 << 0x40,auVar16);
      uVar57 = uVar57 & 0x7fff;
      puVar59[0x10] = auVar55._0_4_;
      puVar59[0x11] = auVar55._4_4_;
      puVar59[0x12] = auVar55._8_4_;
      puVar59[0x13] = auVar55._12_4_;
      if (iVar64 == 0) {
        auVar8._8_4_ = in_a3_udw;
        auVar8._0_8_ = 0x5000000200000000;
        auVar8._12_4_ = in_register_0000007c;
        auVar17._8_4_ = in_t0_udw;
        auVar17._0_8_ = 0x10000002;
        auVar17._12_4_ = in_register_0000008c;
        auVar55 = _pcpyld(auVar8,auVar17);
        *puVar61 = auVar55._0_4_;
        puVar61[1] = auVar55._4_4_;
        puVar61[2] = auVar55._8_4_;
        puVar61[3] = auVar55._12_4_;
        puVar61[4] = auVar71._0_4_;
        puVar61[5] = auVar71._4_4_;
        puVar61[6] = auVar71._8_4_;
        puVar61[7] = auVar71._12_4_;
        if ((*(byte *)(iVar68 + 0x36) & 2) == 0) {
          bVar43 = *(byte *)(iVar68 + 0x36);
LAB_002b9cd0:
          if ((bVar43 & 4) == 0) {
            uVar54 = puVar69[8];
          }
          else {
            if ((*(uint *)(iVar68 + 8) >> 0x14 & 0x3f) == 0x14) {
              uVar35 = (uint)((puVar69[8] & 0x3e) << 0xf) | 0x2000000;
              uVar40 = (uint)*puVar69 | (uint)(((puVar69[8] & 0x3e) << 0x2f) >> 0x20) | 0x2000000;
              goto LAB_002b9d5c;
            }
            uVar54 = puVar69[8];
          }
          uVar53 = (long)(int)(*(uint *)(iVar68 + 8) >> 0x14) & 0x3f;
          uVar35 = (uint)(uVar54 << 0x10) | (int)uVar53 << 0x18;
          uVar40 = (uint)(uVar54 >> 0x10) | (uint)*puVar69 | (uint)((uVar54 << 0x30) >> 0x20) |
                   (uint)((uVar53 << 0x38) >> 0x20);
        }
        else {
          if ((*(uint *)(iVar68 + 8) >> 0x14 & 0x3f) != 0x13) {
            bVar43 = *(byte *)(iVar68 + 0x36);
            goto LAB_002b9cd0;
          }
          uVar40 = (uint)*puVar69 | (uint)(((puVar69[8] & 0x3e) << 0x2f) >> 0x20);
          uVar35 = (uint)((puVar69[8] & 0x3e) << 0xf);
        }
LAB_002b9d5c:
        auVar3._8_8_ = in_a0_udw;
        auVar3._0_8_ = 0x50;
        auVar18._4_4_ = uVar40;
        auVar18._0_4_ = uVar35;
        auVar18._8_4_ = in_t0_udw;
        auVar18._12_4_ = in_register_0000008c;
        auVar55 = _pcpyld(auVar3,auVar18);
        puVar61[8] = auVar55._0_4_;
        puVar61[9] = auVar55._4_4_;
        puVar61[10] = auVar55._8_4_;
        puVar61[0xb] = auVar55._12_4_;
        auVar30._8_4_ = in_register_0000007c;
        auVar30._0_8_ = CONCAT44(in_a3_udw,uVar57 + 5) | 0x50000000;
        auVar30._12_4_ = 0;
        auVar19._8_4_ = in_t0_udw;
        auVar19._0_8_ = (long)(int)(uVar57 + 5) | 0x30000000U | (long)(int)puVar59 << 0x20;
        auVar19._12_4_ = in_register_0000008c;
        auVar55 = _pcpyld(auVar30 << 0x20,auVar19);
        puVar61[0xc] = auVar55._0_4_;
        puVar61[0xd] = auVar55._4_4_;
        puVar61[0xe] = auVar55._8_4_;
        puVar61[0xf] = auVar55._12_4_;
        puVar66 = puVar66 + 0x10;
        puVar61 = puVar61 + 0x10;
      }
      else {
        puVar61[-4] = (uint)*(ushort *)(puVar61 + -4) + uVar57 + 5 | 0x30000000;
        puVar61[-1] = (uint)*(ushort *)(puVar61 + -1) + uVar57 + 5 | 0x50000000;
      }
      iVar51 = iVar51 + 1;
      puVar59 = puVar59 + uVar57 * 4 + 0x14;
      iVar52 = iVar52 >> 1;
      iVar63 = iVar63 >> 1;
      puVar69 = puVar69 + 1;
      iVar72 = iVar72 + 4;
      puVar50 = puVar50 + 1;
    } while (iVar51 <= (int)(uint)(*(byte *)(iVar68 + 0x16) >> 2));
    if (*(int *)(iVar68 + 0x2c) != 0) {
      if (lStack_118 != 0) {
        *(undefined4 **)(param_2 + 8) = puVar59 + 0x14;
      }
      iVar63 = *(int *)(param_2 + 8);
      auVar4._8_8_ = in_a0_udw;
      auVar4._0_8_ = lStack_118;
      auVar9._8_4_ = in_a3_udw;
      auVar9._0_8_ = 0x51;
      auVar9._12_4_ = in_register_0000007c;
      auVar55 = _pcpyld(auVar9,auVar4);
      *(int *)(iVar63 + -0x40) = auVar55._0_4_;
      *(int *)(iVar63 + -0x3c) = auVar55._4_4_;
      *(int *)(iVar63 + -0x38) = auVar55._8_4_;
      *(int *)(iVar63 + -0x34) = auVar55._12_4_;
      iVar52 = auStack_210[0x38] * auStack_210[0x34] * auStack_210[0x30];
      *(int *)(iVar63 + -0x50) = auVar70._0_4_;
      *(int *)(iVar63 + -0x4c) = auVar70._4_4_;
      *(int *)(iVar63 + -0x48) = auVar70._8_4_;
      *(int *)(iVar63 + -0x44) = auVar70._12_4_;
      auVar10._8_4_ = in_a3_udw;
      auVar10._0_8_ = 0x52;
      auVar10._12_4_ = in_register_0000007c;
      auVar20._8_4_ = in_t0_udw;
      auVar20._0_8_ = (long)(int)auStack_210[0x38] | (long)(int)auStack_210[0x34] << 0x20;
      auVar20._12_4_ = in_register_0000008c;
      auVar70 = _pcpyld(auVar10,auVar20);
      *(int *)(iVar63 + -0x30) = auVar70._0_4_;
      *(int *)(iVar63 + -0x2c) = auVar70._4_4_;
      *(int *)(iVar63 + -0x28) = auVar70._8_4_;
      *(int *)(iVar63 + -0x24) = auVar70._12_4_;
      uVar57 = iVar52 >> 4;
      auVar11._8_4_ = in_a3_udw;
      auVar11._0_8_ = 0x53;
      auVar11._12_4_ = in_register_0000007c;
      auVar28._4_4_ = in_register_0000008c;
      auVar28._0_4_ = in_t0_udw;
      auVar28._8_8_ = 0;
      auVar70 = _pcpyld(auVar11,auVar28 << 0x40);
      *(int *)(iVar63 + -0x20) = auVar70._0_4_;
      *(int *)(iVar63 + -0x1c) = auVar70._4_4_;
      *(int *)(iVar63 + -0x18) = auVar70._8_4_;
      *(int *)(iVar63 + -0x14) = auVar70._12_4_;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = in_a0_udw;
      auVar21._8_4_ = in_t0_udw;
      auVar21._0_8_ = CONCAT44(iVar52 >> 0x1f,uVar57) | 0x800000000000000;
      auVar21._12_4_ = in_register_0000008c;
      auVar70 = _pcpyld(auVar29 << 0x40,auVar21);
      uVar57 = uVar57 & 0x7fff;
      *(int *)(iVar63 + -0x10) = auVar70._0_4_;
      *(int *)(iVar63 + -0xc) = auVar70._4_4_;
      *(int *)(iVar63 + -8) = auVar70._8_4_;
      *(int *)(iVar63 + -4) = auVar70._12_4_;
      auVar12._8_4_ = in_a3_udw;
      auVar12._0_8_ = 0x5000000200000000;
      auVar12._12_4_ = in_register_0000007c;
      auVar22._8_4_ = in_t0_udw;
      auVar22._0_8_ = 0x10000002;
      auVar22._12_4_ = in_register_0000008c;
      auVar70 = _pcpyld(auVar12,auVar22);
      *puVar66 = auVar70._0_4_;
      puVar66[1] = auVar70._4_4_;
      puVar66[2] = auVar70._8_4_;
      puVar66[3] = auVar70._12_4_;
      puVar66[4] = auVar71._0_4_;
      puVar66[5] = auVar71._4_4_;
      puVar66[6] = auVar71._8_4_;
      puVar66[7] = auVar71._12_4_;
      if (lStack_118 == 0) {
        uVar54 = (ulong)(*(uint *)(iVar68 + 0xc) >> 0x13) & 0xf;
        auVar13._8_4_ = in_a3_udw;
        auVar13._0_8_ = 0x50;
        auVar13._12_4_ = in_register_0000007c;
        auVar25._8_4_ = in_t0_udw;
        auVar25._0_8_ =
             CONCAT44(*(undefined4 *)(iVar68 + 0x10),(int)(uVar54 << 0x18)) | 0x10000 |
             uVar54 << 0x38 | 0x1000000000000;
        auVar25._12_4_ = in_register_0000008c;
        auVar70 = _pcpyld(auVar13,auVar25);
LAB_002b9f88:
        puVar66[8] = auVar70._0_4_;
        puVar66[9] = auVar70._4_4_;
        puVar66[10] = auVar70._8_4_;
        puVar66[0xb] = auVar70._12_4_;
        uVar54 = (ulong)(int)(uVar57 + 5);
      }
      else {
        if ((*(byte *)(param_2 + 0x21) & 0x40) != 0) {
          auVar70 = *(undefined1 (*) [16])(puVar66 + -8);
          goto LAB_002b9f88;
        }
        iVar52 = uVar57 + 5;
        uVar54 = (ulong)iVar52;
        puVar66[8] = puVar66[-8];
        puVar66[9] = puVar66[-7];
        puVar66[10] = puVar66[-6];
        puVar66[0xb] = puVar66[-5];
        **(int **)(param_2 + 4) = **(int **)(param_2 + 4) + -1;
        puVar66[-4] = (uint)(*(ushort *)(puVar66 + -4) + uVar54) | 0x30000000;
        puVar66[-1] = (uint)*(ushort *)(puVar66 + -1) + iVar52 | 0x50000000;
      }
      if ((*(byte *)(param_2 + 0x21) & 0x40) == 0) {
        auVar32._8_4_ = in_register_0000007c;
        auVar32._0_8_ = CONCAT44(in_a3_udw,(int)uVar54) | 0x50000000;
        auVar32._12_4_ = 0;
        auVar24._8_4_ = in_t0_udw;
        auVar24._0_8_ = uVar54 | 0x30000000 | (ulong)(iVar63 - 0x50U) << 0x20;
        auVar24._12_4_ = in_register_0000008c;
        auVar70 = _pcpyld(auVar32 << 0x20,auVar24);
        puVar66[0xc] = auVar70._0_4_;
        puVar66[0xd] = auVar70._4_4_;
        puVar66[0xe] = auVar70._8_4_;
        puVar66[0xf] = auVar70._12_4_;
      }
      else {
        auVar31._8_4_ = in_register_0000007c;
        auVar31._0_8_ = CONCAT44(in_a3_udw,(int)uVar54) | 0x50000000;
        auVar31._12_4_ = 0;
        auVar23._8_4_ = in_t0_udw;
        auVar23._0_8_ = uVar54 | 0x10000000 | (ulong)(iVar63 - 0x50U) << 0x20;
        auVar23._12_4_ = in_register_0000008c;
        auVar70 = _pcpyld(auVar31 << 0x20,auVar23);
        puVar66[0xc] = auVar70._0_4_;
        puVar66[0xd] = auVar70._4_4_;
        puVar66[0xe] = auVar70._8_4_;
        puVar66[0xf] = auVar70._12_4_;
      }
    }
    uVar42 = (undefined1)*(int *)(param_2 + 4);
    if (*(int *)(param_2 + 8) == 0) {
      FUN_003680a0(uVar42,(*(int *)(param_2 + 4) + iVar34 + 0x70U & 0xffffff80) +
                          (*(int *)(iVar68 + 0x28) + 0x7fU & 0xffffff80));
      uVar37 = *(undefined4 *)(param_2 + 4);
      uVar42 = (undefined1)uVar37;
      uVar45 = (undefined1)((uint)uVar37 >> 8);
      uVar48 = (undefined2)((uint)uVar37 >> 0x10);
    }
    else {
      FUN_003680a0(uVar42,*(int *)(iVar68 + 0x2c) + *(int *)(param_2 + 8) + 0x2f);
      uVar37 = *(undefined4 *)(param_2 + 4);
      uVar42 = (undefined1)uVar37;
      uVar45 = (undefined1)((uint)uVar37 >> 8);
      uVar48 = (undefined2)((uint)uVar37 >> 0x10);
    }
  }
  else {
LAB_002ba048:
    bVar43 = *(byte *)(param_2 + 0x21);
LAB_002ba04c:
    *(byte *)(param_2 + 0x21) = bVar43 & 0xbf;
    if ((bVar43 & 0x80) == 0) {
      lVar65 = (*DAT_00449540)((char)*(undefined4 *)(iVar68 + 0x28) +
                               (char)*(undefined4 *)(iVar68 + 0x2c),0x30411);
      *(int *)(param_2 + 4) = (int)lVar65;
      if (lVar65 == 0) {
        auStack_210[0x1c] = 1;
        auStack_210[0x1d] = FUN_002a5548(0x13,*(int *)(iVar68 + 0x28) + *(int *)(iVar68 + 0x2c));
        uVar42 = 0x60;
LAB_002ba2f8:
        FUN_002a55d8(uVar42);
        return 0;
      }
      if (*(int *)(iVar68 + 0x2c) == 0) {
        iVar34 = *(int *)(param_2 + 0x14);
      }
      else {
        *(int *)(param_2 + 8) = (int)lVar65 + *(int *)(iVar68 + 0x28);
        iVar34 = *(int *)(param_2 + 0x14);
      }
      if (iVar34 == 8) {
        *(byte *)(iVar68 + 0x36) = *(byte *)(iVar68 + 0x36) | 2;
      }
      FUN_002cb660((char)param_2);
      uVar37 = *(undefined4 *)(param_2 + 4);
      uVar42 = (undefined1)uVar37;
      uVar45 = (undefined1)((uint)uVar37 >> 8);
      uVar48 = (undefined2)((uint)uVar37 >> 0x10);
    }
    else {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      uVar37 = *(undefined4 *)(param_2 + 4);
      uVar42 = (undefined1)uVar37;
      uVar45 = (undefined1)((uint)uVar37 >> 8);
      uVar48 = (undefined2)((uint)uVar37 >> 0x10);
    }
  }
  *(uint *)(param_2 + 0x24) = CONCAT22(uVar48,CONCAT11(uVar45,uVar42));
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x18);
  if (((*(byte *)(iVar68 + 0x36) & 1) != 0) && ((*(byte *)(param_2 + 0x21) & 0x80) == 0)) {
    *(int *)(param_2 + 4) = *(int *)(CONCAT22(uVar48,CONCAT11(uVar45,uVar42)) + 4) + 0x50;
  }
LAB_002ba358:
  ((undefined4 *)(param_2 + iGpffff8e98))[1] = 0;
  *(undefined4 *)(param_2 + iGpffff8e98) = 0;
  return 1;
}


// ==== FUN_002ba398 @ 002ba398 ====

void FUN_002ba398(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iStack_40;
  
  piVar16 = (int *)(param_1 + iGpffff8e98);
  bVar1 = *(byte *)((int)piVar16 + 0x36);
  if ((bVar1 & 1) == 0) {
    return;
  }
  uVar7 = (long)(int)((uint)piVar16[2] >> 0x14) & 0x3f;
  if (1 < (int)uVar7 - 0x13U) {
    return;
  }
  uVar10 = *(ulong *)(*(int *)(param_1 + 0x24) + 0x30) >> 0x18 & 0x3f;
  if (((bVar1 & 2) != 0) && (uVar10 == 0)) {
    return;
  }
  if (((bVar1 & 4) != 0) && (uVar10 == 2)) {
    return;
  }
  if ((bVar1 & 6) == 0) {
    if (uVar7 == uVar10) {
      return;
    }
    iVar4 = *piVar16;
  }
  else {
    iVar4 = *piVar16;
  }
  if (iVar4 < 1) {
    uVar15 = piVar16[2];
  }
  else {
    FUN_002b32d8();
    FUN_002b32d8();
    uVar15 = piVar16[2];
  }
  iStack_40 = 0;
  uVar15 = uVar15 >> 0x14 & 0x3f;
  iVar4 = 1;
  switch(uVar15) {
  case 0:
  case 0x30:
    iStack_40 = 2;
    break;
  case 1:
  case 0x13:
  case 0x14:
  case 0x1b:
  case 0x24:
  case 0x2c:
  case 0x31:
    iStack_40 = 8;
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    iStack_40 = 4;
  }
  if (((*(byte *)((int)piVar16 + 0x36) & 2) != 0) && (uVar15 == 0x13)) {
    iStack_40 = 0x10;
    iVar4 = 4;
  }
  if (((*(byte *)((int)piVar16 + 0x36) & 4) != 0) && (uVar15 == 0x14)) {
    iStack_40 = 0x20;
    iVar4 = 4;
  }
  uVar2 = (uint)(*(byte *)((int)piVar16 + 0x16) >> 2);
  iVar14 = *(int *)(param_1 + 0xc);
  iVar12 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  iVar13 = *(int *)(param_1 + 0x10);
  uVar15 = uVar2 + 1;
  if ((uVar15 & 1) != 0) {
    iVar6 = iStack_40;
    if (iStack_40 <= iVar14) {
      iVar6 = iVar14;
    }
    iVar3 = iVar4;
    if (iVar4 <= iVar13) {
      iVar3 = iVar13;
    }
    puVar11 = (ulong *)(iVar12 + 0x10);
    if ((*(byte *)((int)piVar16 + 0x36) & 6) == 0) {
      uVar7 = *puVar11 << 1;
    }
    else {
      uVar7 = *puVar11 >> 1;
    }
    *puVar11 = uVar7;
    puVar11 = (ulong *)(iVar12 + 0x20);
    if ((*(byte *)((int)piVar16 + 0x36) & 6) == 0) {
      uVar7 = *puVar11 << 1;
    }
    else {
      uVar7 = *puVar11 >> 1;
    }
    *puVar11 = uVar7;
    iVar14 = iVar14 >> 1;
    iVar13 = iVar13 >> 1;
    iVar12 = iVar12 + 0x50 + ((iVar6 * iVar3 * *(int *)(param_1 + 0x14) >> 3) + 0xf >> 4) * 0x10;
    uVar15 = uVar2;
    goto joined_r0x002ba5ac;
  }
  do {
    iVar6 = iStack_40;
    if (iStack_40 <= iVar14) {
      iVar6 = iVar14;
    }
    iVar3 = iVar4;
    if (iVar4 <= iVar13) {
      iVar3 = iVar13;
    }
    puVar11 = (ulong *)(iVar12 + 0x10);
    if ((*(byte *)((int)piVar16 + 0x36) & 6) == 0) {
      uVar7 = *puVar11 << 1;
    }
    else {
      uVar7 = *puVar11 >> 1;
    }
    *puVar11 = uVar7;
    puVar11 = (ulong *)(iVar12 + 0x20);
    if ((*(byte *)((int)piVar16 + 0x36) & 6) == 0) {
      uVar7 = *puVar11 << 1;
    }
    else {
      uVar7 = *puVar11 >> 1;
    }
    *puVar11 = uVar7;
    iVar8 = iVar4;
    if (iVar4 <= iVar13 >> 1) {
      iVar8 = iVar13 >> 1;
    }
    iVar9 = iStack_40;
    if (iStack_40 <= iVar14 >> 1) {
      iVar9 = iVar14 >> 1;
    }
    iVar12 = iVar12 + ((iVar6 * iVar3 * *(int *)(param_1 + 0x14) >> 3) + 0xf >> 4) * 0x10;
    puVar11 = (ulong *)(iVar12 + 0x60);
    if ((*(byte *)((int)piVar16 + 0x36) & 6) == 0) {
      uVar7 = *puVar11 << 1;
    }
    else {
      uVar7 = *puVar11 >> 1;
    }
    *puVar11 = uVar7;
    puVar11 = (ulong *)(iVar12 + 0x70);
    if ((*(byte *)((int)piVar16 + 0x36) & 6) == 0) {
      uVar7 = *puVar11 << 1;
    }
    else {
      uVar7 = *puVar11 >> 1;
    }
    *puVar11 = uVar7;
    iVar14 = iVar14 >> 2;
    iVar13 = iVar13 >> 2;
    uVar15 = uVar15 - 2;
    iVar12 = iVar12 + 0xa0 + ((iVar9 * iVar8 * *(int *)(param_1 + 0x14) >> 3) + 0xf >> 4) * 0x10;
joined_r0x002ba5ac:
  } while (uVar15 != 0);
  iVar12 = *(int *)(*(int *)(param_1 + 0x24) + 8) + -1;
  iVar14 = *(int *)(param_1 + 0x24) + 0x10;
  iVar4 = iVar14;
  if (0 < iVar12) {
    do {
      uVar7 = *(ulong *)(iVar4 + 0x20);
      uVar15 = piVar16[2];
      if (((*(byte *)((int)piVar16 + 0x36) & 2) == 0) || ((uVar15 >> 0x14 & 0x3f) != 0x13)) {
        if (((*(byte *)((int)piVar16 + 0x36) & 4) == 0) || ((uVar15 >> 0x14 & 0x3f) != 0x14)) {
          uVar10 = (long)(int)(uVar15 >> 0x14) & 0x3f;
          uVar7 = (uVar7 & 0x3f0000) << 1 | (long)((int)uVar10 << 0x18) | uVar7 & 0x3fff00000000 |
                  (uVar7 & 0x3f000000000000) << 1 | uVar10 << 0x38;
        }
        else {
          uVar7 = (uVar7 & 0x3f0000) >> 1 | uVar7 & 0x3fff00000000 | 0x2000000 |
                  (uVar7 & 0x3f000000000000) >> 1 | 0x200000000000000;
        }
      }
      else {
        uVar7 = (uVar7 & 0x3f0000) >> 1 | uVar7 & 0x3fff00000000 | (uVar7 & 0x3f000000000000) >> 1;
      }
      *(ulong *)(iVar4 + 0x20) = uVar7;
      iVar14 = iVar14 + 0x40;
      iVar12 = iVar12 + -1;
      iVar4 = iVar4 + 0x40;
    } while (iVar12 != 0);
  }
  if (*(long *)(*(int *)(param_1 + 8) + -0x40) != 0) {
    iVar12 = 0x10;
    iVar4 = 0x10;
    if (*(int *)(param_1 + 0x14) != 8) {
      iVar12 = 8;
      iVar4 = 2;
    }
    bVar1 = *(byte *)((int)piVar16 + 0x36);
    uVar15 = (uint)piVar16[3] >> 0x13 & 0xf;
    iVar13 = 4;
    if (uVar15 != 0) {
      iVar13 = 2;
    }
    uVar2 = (uint)(iVar12 * iVar4 * iVar13) >> 4;
    if ((bVar1 & 6) == 0) {
      iVar4 = uVar2 + 5;
      **(undefined4 **)(param_1 + 0x24) = (*(undefined4 **)(param_1 + 0x24))[2];
      uVar15 = (uint)*(ushort *)(iVar14 + -4) - iVar4;
      *(uint *)(iVar14 + -0x10) = (uint)*(ushort *)(iVar14 + -0x10) - iVar4 | 0x30000000;
    }
    else {
      if (((bVar1 & 2) == 0) || (uVar15 != 0)) {
        if ((bVar1 & 4) == 0) {
          iVar4 = piVar16[0xb];
          goto LAB_002ba91c;
        }
        if (uVar15 != 2) {
          iVar4 = piVar16[0xb];
          goto LAB_002ba91c;
        }
        piVar5 = *(int **)(param_1 + 0x24);
      }
      else {
        piVar5 = *(int **)(param_1 + 0x24);
      }
      iVar4 = uVar2 + 5;
      *piVar5 = piVar5[2] + -1;
      uVar15 = (uint)*(ushort *)(iVar14 + -4) + iVar4;
      *(uint *)(iVar14 + -0x10) = (uint)*(ushort *)(iVar14 + -0x10) + iVar4 | 0x30000000;
    }
    *(uint *)(iVar14 + -4) = uVar15 | 0x50000000;
  }
  iVar4 = piVar16[0xb];
LAB_002ba91c:
  FUN_003680a0(*(undefined4 *)(param_1 + 0x24),iVar4 + *(int *)(param_1 + 8) + 0x2f);
  return;
}


// ==== FUN_002bacf0 @ 002bacf0 ====

undefined4 FUN_002bacf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)param_2;
  if (*(char *)(iVar1 + iGpffff8e98 + 0x17) != '\0') {
    FUN_002cd840(param_2,0);
  }
  FUN_002cd640(param_2);
  if ((*(byte *)(iVar1 + 0x21) & 0x80) == 0) {
    piVar2 = (int *)(iVar1 + iGpffff8e98);
    if (*piVar2 < 1) {
      *piVar2 = 0;
    }
    else {
      do {
        FUN_002b32d8();
        FUN_002b32d8();
      } while (0 < *piVar2);
      *piVar2 = 0;
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      (*DAT_00449544)();
    }
    if (*piVar2 == 0) {
      if (piVar2[0xe] != 0) {
        (*DAT_00449544)();
        piVar2[0xe] = 0;
      }
      if (piVar2[0xf] != 0) {
        (*DAT_00449544)();
        piVar2[0xf] = 0;
      }
      if (piVar2[0x10] == 0) {
        iVar1 = piVar2[0x11];
      }
      else {
        (*DAT_00449544)();
        piVar2[0x10] = 0;
        iVar1 = piVar2[0x11];
      }
      if (iVar1 == 0) {
        iVar1 = piVar2[0x12];
      }
      else {
        (*DAT_00449544)();
        piVar2[0x11] = 0;
        iVar1 = piVar2[0x12];
      }
      if (iVar1 == 0) {
        iVar1 = piVar2[0x13];
      }
      else {
        (*DAT_00449544)();
        piVar2[0x12] = 0;
        iVar1 = piVar2[0x13];
      }
      if (iVar1 == 0) {
        iVar1 = piVar2[0x14];
      }
      else {
        (*DAT_00449544)();
        piVar2[0x13] = 0;
        iVar1 = piVar2[0x14];
      }
      if (iVar1 == 0) {
        iVar1 = piVar2[0x15];
      }
      else {
        (*DAT_00449544)();
        piVar2[0x14] = 0;
        iVar1 = piVar2[0x15];
      }
      if (iVar1 != 0) {
        (*DAT_00449544)();
        piVar2[0x15] = 0;
      }
    }
    else {
      if (piVar2[0xe] != 0) {
        piVar2[0xe] = 0;
      }
      if (piVar2[0xf] != 0) {
        piVar2[0xf] = 0;
      }
      if (piVar2[0x10] != 0) {
        piVar2[0x10] = 0;
      }
      if (piVar2[0x11] != 0) {
        piVar2[0x11] = 0;
      }
      if (piVar2[0x12] != 0) {
        piVar2[0x12] = 0;
      }
      if (piVar2[0x13] != 0) {
        piVar2[0x13] = 0;
      }
      if (piVar2[0x14] != 0) {
        piVar2[0x14] = 0;
      }
      if (piVar2[0x15] != 0) {
        piVar2[0x15] = 0;
      }
    }
  }
  return 1;
}


// ==== FUN_002baf08 @ 002baf08 ====

void FUN_002baf08(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar19;
  undefined8 auStack_1080 [512];
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = (int)unaff_s0;
  uStack_c = (int)((ulong)unaff_s0 >> 0x20);
  uStack_20 = (int)unaff_s1;
  uStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  uStack_30 = (int)unaff_s2;
  uStack_2c = (int)((ulong)unaff_s2 >> 0x20);
  uStack_40 = (int)unaff_s3;
  uStack_3c = (int)((ulong)unaff_s3 >> 0x20);
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar3 = *(int *)(param_1 + 0xc);
    uVar17 = 0;
    while( true ) {
      if (0 < iVar3) {
        iVar5 = *(int *)(param_1 + 0x18);
        iVar14 = *(int *)(param_1 + 4);
        iVar8 = 0;
        iVar13 = 0;
        do {
          puVar10 = (undefined8 *)(iVar8 + iVar14 + uVar17 * iVar5);
          iVar19 = iVar13 + 0x10;
          puVar9 = (undefined8 *)(iVar8 + (uVar17 + 2) * iVar5 + iVar14);
          uStack_80 = (int)*puVar10;
          uStack_7c = (int)((ulong)*puVar10 >> 0x20);
          uStack_78 = *(undefined4 *)(puVar10 + 1);
          uStack_74 = *(undefined4 *)((int)puVar10 + 0xc);
          uStack_70 = *(undefined4 *)(puVar10 + 2);
          uStack_6c = *(undefined4 *)((int)puVar10 + 0x14);
          uStack_68 = *(undefined4 *)(puVar10 + 3);
          uStack_64 = *(undefined4 *)((int)puVar10 + 0x1c);
          uStack_60 = (int)*puVar9;
          uStack_5c = (int)((ulong)*puVar9 >> 0x20);
          uStack_58 = *(undefined4 *)(puVar9 + 1);
          uStack_54 = *(undefined4 *)((int)puVar9 + 0xc);
          uStack_50 = *(undefined4 *)(puVar9 + 2);
          uStack_4c = *(undefined4 *)((int)puVar9 + 0x14);
          uStack_48 = *(undefined4 *)(puVar9 + 3);
          uStack_44 = *(undefined4 *)((int)puVar9 + 0x1c);
          uVar16 = 0;
          do {
            iVar8 = 0;
            uVar18 = uVar16 + 0x10;
            uVar15 = ~uVar16;
            uVar12 = uVar16;
            do {
              if ((uVar17 & 4) == 0) {
                uVar2 = ((uVar12 & 2) << 2 | (int)(uVar12 & 4) >> 2 | (int)(uVar12 & 8) >> 2 |
                         (int)(uVar12 & 0x10) >> 2 | (int)(uVar12 & 0x20) >> 1) ^
                        ((uVar12 & 1) << 5 | (uVar12 & 1) << 2);
              }
              else {
                uVar2 = ((uVar12 & 2) << 2 | (int)(uVar12 & 4) >> 2 | (int)(uVar12 & 8) >> 2 |
                         (int)(uVar12 & 0x10) >> 2 | (int)(uVar12 & 0x20) >> 1) ^
                        ((uVar12 & 1) << 5 | (uVar15 & 1) << 2);
              }
              iVar11 = uVar16 + iVar8;
              iVar8 = iVar8 + 1;
              uVar12 = uVar12 + 1;
              *(undefined1 *)
               ((int)auStack_1080 + iVar13 + (uVar2 & 0xf) + ((int)uVar2 >> 4) * 0x400) =
                   *(undefined1 *)((int)&uStack_80 + iVar11);
              uVar15 = uVar15 - 1;
            } while (iVar8 < 0x10);
            uVar16 = uVar18;
          } while ((int)uVar18 < 0x40);
          iVar8 = iVar19 * 2;
          iVar13 = iVar19;
        } while (iVar19 < iVar3);
      }
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = 0;
      while( true ) {
        iVar14 = 0;
        if (0 < iVar3) {
          iVar3 = *(int *)(param_1 + 4);
          puVar9 = auStack_1080 + iVar5 * 0x80;
          do {
            uVar1 = *puVar9;
            uVar6 = *(undefined4 *)(puVar9 + 1);
            uVar7 = *(undefined4 *)((int)puVar9 + 0xc);
            puVar4 = (undefined4 *)((uVar17 + iVar5) * *(int *)(param_1 + 0x18) + iVar3 + iVar14);
            *puVar4 = (int)uVar1;
            puVar4[1] = (int)((ulong)uVar1 >> 0x20);
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            iVar14 = iVar14 + 0x10;
            puVar9 = puVar9 + 2;
          } while (iVar14 < *(int *)(param_1 + 0xc));
        }
        if (3 < iVar5 + 1) break;
        iVar3 = *(int *)(param_1 + 0xc);
        iVar5 = iVar5 + 1;
      }
      if (*(int *)(param_1 + 0x10) <= (int)(uVar17 + 4)) break;
      iVar3 = *(int *)(param_1 + 0xc);
      uVar17 = uVar17 + 4;
    }
  }
  return;
}


// ==== FUN_002bb148 @ 002bb148 ====

void FUN_002bb148(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined8 unaff_s0;
  undefined8 *puVar25;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar26;
  byte abStack_890 [8];
  undefined8 uStack_888;
  byte abStack_880 [496];
  undefined8 auStack_690 [64];
  undefined8 auStack_490 [64];
  undefined8 auStack_290 [64];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
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
  
  uStack_10 = (int)unaff_s0;
  uStack_c = (int)((ulong)unaff_s0 >> 0x20);
  uStack_20 = (int)unaff_s1;
  uStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  uStack_30 = (int)unaff_s2;
  uStack_2c = (int)((ulong)unaff_s2 >> 0x20);
  uStack_40 = (int)unaff_s3;
  uStack_3c = (int)((ulong)unaff_s3 >> 0x20);
  uStack_50 = (int)unaff_s4;
  uStack_4c = (int)((ulong)unaff_s4 >> 0x20);
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0xc);
  uVar23 = 0;
  do {
    if (0 < iVar10) {
      iVar18 = *(int *)(param_1 + 0x18);
      iVar20 = *(int *)(param_1 + 4);
      puVar25 = (undefined8 *)(iVar20 + uVar23 * iVar18);
      iVar17 = 0;
      puVar13 = puVar25;
      do {
        iVar2 = iVar17 >> 1;
        pbVar12 = abStack_890 + iVar2;
        puVar14 = (undefined8 *)((uVar23 + 2) * iVar18 + iVar20 + iVar17);
        uStack_90 = (int)*puVar13;
        uStack_8c = (int)((ulong)*puVar13 >> 0x20);
        uStack_88 = *(undefined4 *)(puVar13 + 1);
        uStack_84 = *(undefined4 *)((int)puVar13 + 0xc);
        iVar24 = iVar17 + 0x20;
        uStack_80 = (int)puVar13[2];
        uStack_7c = (int)((ulong)puVar13[2] >> 0x20);
        uStack_78 = *(undefined4 *)(puVar13 + 3);
        uStack_74 = *(undefined4 *)((int)puVar13 + 0x1c);
        uStack_70 = (int)*puVar14;
        uStack_6c = (int)((ulong)*puVar14 >> 0x20);
        uStack_68 = *(undefined4 *)(puVar14 + 1);
        uStack_64 = *(undefined4 *)((int)puVar14 + 0xc);
        uVar3 = *(undefined4 *)(puVar14 + 2);
        uVar5 = *(undefined4 *)((int)puVar14 + 0x14);
        uVar6 = *(undefined4 *)(puVar14 + 3);
        uVar7 = *(undefined4 *)((int)puVar14 + 0x1c);
        *(undefined8 *)((int)auStack_290 + iVar2 + 8) = 0;
        uStack_60 = uVar3;
        uStack_5c = uVar5;
        uStack_58 = uVar6;
        uStack_54 = uVar7;
        pbVar12[0] = 0;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        pbVar12[4] = 0;
        pbVar12[5] = 0;
        pbVar12[6] = 0;
        pbVar12[7] = 0;
        *(undefined8 *)((int)&uStack_888 + iVar2) = 0;
        *(undefined8 *)((int)auStack_690 + iVar2) = 0;
        *(undefined8 *)((int)auStack_690 + iVar2 + 8) = 0;
        *(undefined8 *)((int)auStack_490 + iVar2) = 0;
        *(undefined8 *)((int)auStack_490 + iVar2 + 8) = 0;
        *(undefined8 *)((int)auStack_290 + iVar2) = 0;
        uVar22 = 0;
        do {
          uVar19 = 0;
          uVar26 = uVar22 + 0x20;
          uVar21 = ~uVar22;
          uVar15 = uVar22;
          do {
            if ((uVar23 & 4) == 0) {
              uVar9 = ((uVar15 & 2) << 2 | (int)(uVar15 & 0x20) >> 1 | (int)(uVar15 & 4) >> 2 |
                       (int)(uVar15 & 8) >> 2 | (int)(uVar15 & 0x10) >> 2 |
                      (int)(uVar15 & 0x40) >> 1) ^ ((uVar15 & 1) << 6 | (uVar15 & 1) << 2);
            }
            else {
              uVar9 = ((uVar15 & 2) << 2 | (int)(uVar15 & 0x20) >> 1 | (int)(uVar15 & 4) >> 2 |
                       (int)(uVar15 & 8) >> 2 | (int)(uVar15 & 0x10) >> 2 |
                      (int)(uVar15 & 0x40) >> 1) ^ ((uVar15 & 1) << 6 | (uVar21 & 1) << 2);
            }
            iVar2 = (int)(uVar22 + uVar19) >> 1;
            if ((uVar9 & 1) == 0) {
              pbVar12 = abStack_890 +
                        ((int)(iVar17 + (uVar9 & 0x1f) + ((int)uVar9 >> 5) * 0x400) >> 1);
              bVar16 = *pbVar12;
              if ((uVar19 & 1) == 0) {
                bVar8 = *(byte *)((int)&uStack_90 + iVar2) & 0xf;
              }
              else {
                bVar8 = *(byte *)((int)&uStack_90 + iVar2) >> 4;
              }
LAB_002bb384:
              *pbVar12 = bVar16 | bVar8;
            }
            else {
              pbVar12 = abStack_890 +
                        ((int)(iVar17 + (uVar9 & 0x1f) + ((int)uVar9 >> 5) * 0x400) >> 1);
              bVar16 = *pbVar12;
              if ((uVar19 & 1) != 0) {
                bVar8 = *(byte *)((int)&uStack_90 + iVar2) & 0xf0;
                goto LAB_002bb384;
              }
              *pbVar12 = bVar16 | *(char *)((int)&uStack_90 + iVar2) << 4;
            }
            uVar19 = uVar19 + 1;
            uVar15 = uVar15 + 1;
            uVar21 = uVar21 - 1;
          } while ((int)uVar19 < 0x20);
          uVar22 = uVar26;
        } while ((int)uVar26 < 0x80);
        puVar13 = (undefined8 *)((int)puVar25 + iVar24);
        iVar17 = iVar24;
      } while (iVar24 < iVar10);
    }
    uVar22 = *(int *)(param_1 + 0xc) >> 1;
    iVar10 = 0;
    do {
      iVar18 = 0;
      iVar20 = iVar10 + 1;
      if (0 < (int)uVar22) {
        pbVar12 = abStack_890 + iVar10 * 0x200;
        iVar2 = uVar23 + iVar10;
        uVar15 = uVar22 & 0x3f;
        iVar17 = *(int *)(param_1 + 4);
        if ((int)uVar22 < 1) {
LAB_002bb45c:
          iVar10 = *(int *)(param_1 + 0x18);
LAB_002bb460:
          uVar1 = *(undefined8 *)pbVar12;
          uVar3 = *(undefined4 *)(pbVar12 + 8);
          uVar5 = *(undefined4 *)(pbVar12 + 0xc);
          puVar4 = (undefined4 *)(iVar2 * iVar10 + iVar17 + iVar18);
          iVar18 = iVar18 + 0x10;
          *puVar4 = (int)uVar1;
          puVar4[1] = (int)((ulong)uVar1 >> 0x20);
          puVar4[2] = uVar3;
          puVar4[3] = uVar5;
          pbVar12 = pbVar12 + 0x10;
          if ((int)uVar22 <= iVar18) goto LAB_002bb4f8;
        }
        else if (uVar15 != 0) {
          if (0x10 < uVar15) {
            if (uVar15 < 0x21) {
              iVar10 = *(int *)(param_1 + 0x18);
              pbVar11 = pbVar12;
            }
            else {
              if (0x30 < uVar15) goto LAB_002bb488;
              pbVar11 = abStack_880 + iVar10 * 0x200;
              uVar1 = *(undefined8 *)pbVar12;
              uVar3 = *(undefined4 *)(&uStack_888 + iVar10 * 0x40);
              uVar5 = *(undefined4 *)(abStack_880 + iVar10 * 0x200 + -4);
              iVar18 = 0x10;
              puVar4 = (undefined4 *)(iVar2 * *(int *)(param_1 + 0x18) + iVar17);
              *puVar4 = (int)uVar1;
              puVar4[1] = (int)((ulong)uVar1 >> 0x20);
              puVar4[2] = uVar3;
              puVar4[3] = uVar5;
              iVar10 = *(int *)(param_1 + 0x18);
            }
            uVar1 = *(undefined8 *)pbVar11;
            uVar3 = *(undefined4 *)(pbVar11 + 8);
            uVar5 = *(undefined4 *)(pbVar11 + 0xc);
            pbVar12 = pbVar11 + 0x10;
            puVar4 = (undefined4 *)(iVar2 * iVar10 + iVar17 + iVar18);
            *puVar4 = (int)uVar1;
            puVar4[1] = (int)((ulong)uVar1 >> 0x20);
            puVar4[2] = uVar3;
            puVar4[3] = uVar5;
            iVar18 = iVar18 + 0x10;
            goto LAB_002bb45c;
          }
          iVar10 = *(int *)(param_1 + 0x18);
          goto LAB_002bb460;
        }
LAB_002bb488:
        do {
          uVar1 = *(undefined8 *)pbVar12;
          uVar3 = *(undefined4 *)(pbVar12 + 8);
          uVar5 = *(undefined4 *)(pbVar12 + 0xc);
          puVar4 = (undefined4 *)(iVar2 * *(int *)(param_1 + 0x18) + iVar17 + iVar18);
          *puVar4 = (int)uVar1;
          puVar4[1] = (int)((ulong)uVar1 >> 0x20);
          puVar4[2] = uVar3;
          puVar4[3] = uVar5;
          uVar1 = *(undefined8 *)(pbVar12 + 0x10);
          uVar3 = *(undefined4 *)(pbVar12 + 0x18);
          uVar5 = *(undefined4 *)(pbVar12 + 0x1c);
          iVar10 = iVar18 + iVar2 * *(int *)(param_1 + 0x18) + iVar17;
          *(int *)(iVar10 + 0x10) = (int)uVar1;
          *(int *)(iVar10 + 0x14) = (int)((ulong)uVar1 >> 0x20);
          *(undefined4 *)(iVar10 + 0x18) = uVar3;
          *(undefined4 *)(iVar10 + 0x1c) = uVar5;
          uVar1 = *(undefined8 *)(pbVar12 + 0x20);
          uVar3 = *(undefined4 *)(pbVar12 + 0x28);
          uVar5 = *(undefined4 *)(pbVar12 + 0x2c);
          iVar10 = iVar18 + iVar2 * *(int *)(param_1 + 0x18) + iVar17;
          *(int *)(iVar10 + 0x20) = (int)uVar1;
          *(int *)(iVar10 + 0x24) = (int)((ulong)uVar1 >> 0x20);
          *(undefined4 *)(iVar10 + 0x28) = uVar3;
          *(undefined4 *)(iVar10 + 0x2c) = uVar5;
          uVar1 = *(undefined8 *)(pbVar12 + 0x30);
          uVar3 = *(undefined4 *)(pbVar12 + 0x38);
          uVar5 = *(undefined4 *)(pbVar12 + 0x3c);
          iVar10 = iVar18 + iVar2 * *(int *)(param_1 + 0x18) + iVar17;
          iVar18 = iVar18 + 0x40;
          *(int *)(iVar10 + 0x30) = (int)uVar1;
          *(int *)(iVar10 + 0x34) = (int)((ulong)uVar1 >> 0x20);
          *(undefined4 *)(iVar10 + 0x38) = uVar3;
          *(undefined4 *)(iVar10 + 0x3c) = uVar5;
          pbVar12 = pbVar12 + 0x40;
        } while (iVar18 < (int)uVar22);
      }
LAB_002bb4f8:
      iVar10 = iVar20;
    } while (iVar20 < 4);
    if (*(int *)(param_1 + 0x10) <= (int)(uVar23 + 4)) {
      return;
    }
    iVar10 = *(int *)(param_1 + 0xc);
    uVar23 = uVar23 + 4;
  } while( true );
}


// ==== FUN_002bb538 @ 002bb538 ====

void FUN_002bb538(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 auStack_1070 [1024];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar16 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
LAB_002bb560:
  uVar18 = uVar16 + 4;
  uVar14 = *(uint *)(param_1 + 0xc);
  iVar3 = 0;
  do {
    iVar12 = 0;
    if (0 < (int)uVar14) {
      puVar2 = auStack_1070 + iVar3 * 0x100;
      uVar11 = uVar14 & 0x3f;
      puVar8 = (undefined8 *)(*(int *)(param_1 + 4) + (uVar16 + iVar3) * *(int *)(param_1 + 0x18));
      if ((int)uVar14 < 1) {
LAB_002bb5f0:
        uVar4 = *puVar8;
        uVar5 = *(undefined4 *)(puVar8 + 1);
        uVar6 = *(undefined4 *)((int)puVar8 + 0xc);
LAB_002bb5f4:
        iVar12 = iVar12 + 0x10;
        puVar8 = puVar8 + 2;
        *puVar2 = (int)uVar4;
        puVar2[1] = (int)((ulong)uVar4 >> 0x20);
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        puVar2 = puVar2 + 4;
        if ((int)uVar14 <= iVar12) goto LAB_002bb64c;
      }
      else if (uVar11 != 0) {
        if (0x10 < uVar11) {
          if (uVar11 < 0x21) {
            uVar4 = *puVar8;
            uVar5 = *(undefined4 *)(puVar8 + 1);
            uVar6 = *(undefined4 *)((int)puVar8 + 0xc);
            puVar10 = puVar2;
            puVar7 = puVar8;
          }
          else {
            if (0x30 < uVar11) goto LAB_002bb618;
            uVar4 = *puVar8;
            uVar5 = *(undefined4 *)(puVar8 + 1);
            uVar6 = *(undefined4 *)((int)puVar8 + 0xc);
            puVar10 = auStack_1070 + iVar3 * 0x100 + 4;
            puVar7 = puVar8 + 2;
            iVar12 = 0x10;
            *puVar2 = (int)uVar4;
            auStack_1070[iVar3 * 0x100 + 1] = (int)((ulong)uVar4 >> 0x20);
            auStack_1070[iVar3 * 0x100 + 2] = uVar5;
            auStack_1070[iVar3 * 0x100 + 3] = uVar6;
            uVar4 = *puVar7;
            uVar5 = *(undefined4 *)(puVar8 + 3);
            uVar6 = *(undefined4 *)((int)puVar8 + 0x1c);
          }
          iVar12 = iVar12 + 0x10;
          puVar8 = puVar7 + 2;
          *puVar10 = (int)uVar4;
          puVar10[1] = (int)((ulong)uVar4 >> 0x20);
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          puVar2 = puVar10 + 4;
          goto LAB_002bb5f0;
        }
        uVar4 = *puVar8;
        uVar5 = *(undefined4 *)(puVar8 + 1);
        uVar6 = *(undefined4 *)((int)puVar8 + 0xc);
        goto LAB_002bb5f4;
      }
LAB_002bb618:
      do {
        uVar4 = *puVar8;
        uVar5 = *(undefined4 *)(puVar8 + 1);
        uVar6 = *(undefined4 *)((int)puVar8 + 0xc);
        iVar12 = iVar12 + 0x40;
        *puVar2 = (int)uVar4;
        puVar2[1] = (int)((ulong)uVar4 >> 0x20);
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        uVar4 = puVar8[2];
        uVar5 = *(undefined4 *)(puVar8 + 3);
        uVar6 = *(undefined4 *)((int)puVar8 + 0x1c);
        puVar2[4] = (int)uVar4;
        puVar2[5] = (int)((ulong)uVar4 >> 0x20);
        puVar2[6] = uVar5;
        puVar2[7] = uVar6;
        uVar4 = puVar8[4];
        uVar5 = *(undefined4 *)(puVar8 + 5);
        uVar6 = *(undefined4 *)((int)puVar8 + 0x2c);
        puVar2[8] = (int)uVar4;
        puVar2[9] = (int)((ulong)uVar4 >> 0x20);
        puVar2[10] = uVar5;
        puVar2[0xb] = uVar6;
        uVar4 = puVar8[6];
        uVar5 = *(undefined4 *)(puVar8 + 7);
        uVar6 = *(undefined4 *)((int)puVar8 + 0x3c);
        puVar8 = puVar8 + 8;
        puVar2[0xc] = (int)uVar4;
        puVar2[0xd] = (int)((ulong)uVar4 >> 0x20);
        puVar2[0xe] = uVar5;
        puVar2[0xf] = uVar6;
        puVar2 = puVar2 + 0x10;
      } while (iVar12 < (int)uVar14);
    }
LAB_002bb64c:
    if (3 < iVar3 + 1) break;
    uVar14 = *(uint *)(param_1 + 0xc);
    iVar3 = iVar3 + 1;
  } while( true );
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      iVar19 = iVar3 + 0x10;
      iVar12 = iVar3 * 2;
      uVar14 = 0;
      do {
        iVar15 = 0;
        uVar17 = uVar14 + 0x10;
        uVar13 = ~uVar14;
        uVar11 = uVar14;
        do {
          if ((uVar16 & 4) == 0) {
            uVar1 = ((uVar11 & 2) << 2 | (int)(uVar11 & 4) >> 2 | (int)(uVar11 & 8) >> 2 |
                     (int)(uVar11 & 0x10) >> 2 | (int)(uVar11 & 0x20) >> 1) ^
                    ((uVar11 & 1) << 5 | (uVar11 & 1) << 2);
          }
          else {
            uVar1 = ((uVar11 & 2) << 2 | (int)(uVar11 & 4) >> 2 | (int)(uVar11 & 8) >> 2 |
                     (int)(uVar11 & 0x10) >> 2 | (int)(uVar11 & 0x20) >> 1) ^
                    ((uVar11 & 1) << 5 | (uVar13 & 1) << 2);
          }
          iVar9 = uVar14 + iVar15;
          iVar15 = iVar15 + 1;
          uVar11 = uVar11 + 1;
          uVar13 = uVar13 - 1;
          *(undefined1 *)((int)&uStack_70 + iVar9) =
               *(undefined1 *)
                ((int)auStack_1070 + iVar3 + (uVar1 & 0xf) + ((int)uVar1 >> 4) * 0x400);
        } while (iVar15 < 0x10);
        uVar14 = uVar17;
      } while ((int)uVar17 < 0x40);
      puVar2 = (undefined4 *)(iVar12 + *(int *)(param_1 + 4) + uVar16 * *(int *)(param_1 + 0x18));
      *puVar2 = uStack_70;
      puVar2[1] = uStack_6c;
      puVar2[2] = uStack_68;
      puVar2[3] = uStack_64;
      iVar3 = iVar12 + *(int *)(param_1 + 4) + uVar16 * *(int *)(param_1 + 0x18);
      *(undefined4 *)(iVar3 + 0x10) = uStack_60;
      *(undefined4 *)(iVar3 + 0x14) = uStack_5c;
      *(undefined4 *)(iVar3 + 0x18) = uStack_58;
      *(undefined4 *)(iVar3 + 0x1c) = uStack_54;
      iVar3 = *(int *)(param_1 + 4);
      puVar2 = (undefined4 *)(iVar12 + iVar3 + (uVar16 + 2) * *(int *)(param_1 + 0x18));
      *puVar2 = uStack_50;
      puVar2[1] = uStack_4c;
      puVar2[2] = uStack_48;
      puVar2[3] = uStack_44;
      iVar12 = iVar12 + (uVar16 + 2) * *(int *)(param_1 + 0x18) + iVar3;
      *(undefined4 *)(iVar12 + 0x10) = uStack_40;
      *(undefined4 *)(iVar12 + 0x14) = uStack_3c;
      *(undefined4 *)(iVar12 + 0x18) = uStack_38;
      *(undefined4 *)(iVar12 + 0x1c) = uStack_34;
      iVar3 = iVar19;
    } while (iVar19 < *(int *)(param_1 + 0xc));
  }
  uVar16 = uVar18;
  if (*(int *)(param_1 + 0x10) <= (int)uVar18) {
    return;
  }
  goto LAB_002bb560;
}


// ==== FUN_002bb830 @ 002bb830 ====

void FUN_002bb830(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined8 unaff_s0;
  uint uVar21;
  undefined8 unaff_s1;
  byte abStack_860 [4];
  byte abStack_85c [4];
  undefined4 auStack_858 [510];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = (int)unaff_s0;
  uStack_c = (int)((ulong)unaff_s0 >> 0x20);
  uStack_20 = (int)unaff_s1;
  uStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  uVar18 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      uVar21 = uVar18 + 4;
      iVar2 = *(int *)(param_1 + 0xc);
      iVar20 = 0;
      do {
        iVar14 = 0;
        uVar10 = iVar2 >> 1;
        iVar16 = iVar20 + 1;
        if (0 < (int)uVar10) {
          pbVar12 = abStack_860 + iVar20 * 0x200;
          uVar13 = uVar10 & 0x3f;
          puVar9 = (undefined8 *)
                   (*(int *)(param_1 + 4) + (uVar18 + iVar20) * *(int *)(param_1 + 0x18));
          if ((int)uVar10 < 1) {
LAB_002bb8f0:
            uVar3 = *puVar9;
            uVar4 = *(undefined4 *)(puVar9 + 1);
            uVar5 = *(undefined4 *)((int)puVar9 + 0xc);
LAB_002bb8f4:
            iVar14 = iVar14 + 0x10;
            puVar9 = puVar9 + 2;
            *(int *)pbVar12 = (int)uVar3;
            *(int *)(pbVar12 + 4) = (int)((ulong)uVar3 >> 0x20);
            *(undefined4 *)(pbVar12 + 8) = uVar4;
            *(undefined4 *)(pbVar12 + 0xc) = uVar5;
            pbVar12 = pbVar12 + 0x10;
            if ((int)uVar10 <= iVar14) goto LAB_002bb94c;
          }
          else if (uVar13 != 0) {
            if (0x10 < uVar13) {
              if (uVar13 < 0x21) {
                uVar3 = *puVar9;
                uVar4 = *(undefined4 *)(puVar9 + 1);
                uVar5 = *(undefined4 *)((int)puVar9 + 0xc);
                pbVar11 = pbVar12;
                puVar7 = puVar9;
              }
              else {
                if (0x30 < uVar13) goto LAB_002bb918;
                uVar3 = *puVar9;
                uVar4 = *(undefined4 *)(puVar9 + 1);
                uVar5 = *(undefined4 *)((int)puVar9 + 0xc);
                pbVar11 = abStack_85c + (iVar20 * 0x80 + 3) * 4;
                puVar7 = puVar9 + 2;
                iVar14 = 0x10;
                *(int *)pbVar12 = (int)uVar3;
                *(int *)(abStack_85c + iVar20 * 0x200) = (int)((ulong)uVar3 >> 0x20);
                *(undefined4 *)(abStack_85c + (iVar20 * 0x80 + 1) * 4) = uVar4;
                *(undefined4 *)(abStack_85c + (iVar20 * 0x80 + 2) * 4) = uVar5;
                uVar3 = *puVar7;
                uVar4 = *(undefined4 *)(puVar9 + 3);
                uVar5 = *(undefined4 *)((int)puVar9 + 0x1c);
              }
              iVar14 = iVar14 + 0x10;
              puVar9 = puVar7 + 2;
              *(int *)pbVar11 = (int)uVar3;
              *(int *)(pbVar11 + 4) = (int)((ulong)uVar3 >> 0x20);
              *(undefined4 *)(pbVar11 + 8) = uVar4;
              *(undefined4 *)(pbVar11 + 0xc) = uVar5;
              pbVar12 = pbVar11 + 0x10;
              goto LAB_002bb8f0;
            }
            uVar3 = *puVar9;
            uVar4 = *(undefined4 *)(puVar9 + 1);
            uVar5 = *(undefined4 *)((int)puVar9 + 0xc);
            goto LAB_002bb8f4;
          }
LAB_002bb918:
          do {
            uVar3 = *puVar9;
            uVar4 = *(undefined4 *)(puVar9 + 1);
            uVar5 = *(undefined4 *)((int)puVar9 + 0xc);
            iVar14 = iVar14 + 0x40;
            *(int *)pbVar12 = (int)uVar3;
            *(int *)(pbVar12 + 4) = (int)((ulong)uVar3 >> 0x20);
            *(undefined4 *)(pbVar12 + 8) = uVar4;
            *(undefined4 *)(pbVar12 + 0xc) = uVar5;
            uVar3 = puVar9[2];
            uVar4 = *(undefined4 *)(puVar9 + 3);
            uVar5 = *(undefined4 *)((int)puVar9 + 0x1c);
            *(int *)(pbVar12 + 0x10) = (int)uVar3;
            *(int *)(pbVar12 + 0x14) = (int)((ulong)uVar3 >> 0x20);
            *(undefined4 *)(pbVar12 + 0x18) = uVar4;
            *(undefined4 *)(pbVar12 + 0x1c) = uVar5;
            uVar3 = puVar9[4];
            uVar4 = *(undefined4 *)(puVar9 + 5);
            uVar5 = *(undefined4 *)((int)puVar9 + 0x2c);
            *(int *)(pbVar12 + 0x20) = (int)uVar3;
            *(int *)(pbVar12 + 0x24) = (int)((ulong)uVar3 >> 0x20);
            *(undefined4 *)(pbVar12 + 0x28) = uVar4;
            *(undefined4 *)(pbVar12 + 0x2c) = uVar5;
            uVar3 = puVar9[6];
            uVar4 = *(undefined4 *)(puVar9 + 7);
            uVar5 = *(undefined4 *)((int)puVar9 + 0x3c);
            puVar9 = puVar9 + 8;
            *(int *)(pbVar12 + 0x30) = (int)uVar3;
            *(int *)(pbVar12 + 0x34) = (int)((ulong)uVar3 >> 0x20);
            *(undefined4 *)(pbVar12 + 0x38) = uVar4;
            *(undefined4 *)(pbVar12 + 0x3c) = uVar5;
            pbVar12 = pbVar12 + 0x40;
          } while (iVar14 < (int)uVar10);
        }
LAB_002bb94c:
        iVar2 = *(int *)(param_1 + 0xc);
        iVar20 = iVar16;
      } while (iVar16 < 4);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          iVar20 = iVar2 + 0x20;
          uVar10 = 0;
          do {
            uVar15 = 0;
            uVar19 = uVar10 + 0x20;
            uVar17 = ~uVar10;
            uVar13 = uVar10;
            do {
              if ((uVar18 & 4) == 0) {
                uVar8 = ((uVar13 & 2) << 2 | (int)(uVar13 & 0x20) >> 1 | (int)(uVar13 & 4) >> 2 |
                         (int)(uVar13 & 8) >> 2 | (int)(uVar13 & 0x10) >> 2 |
                        (int)(uVar13 & 0x40) >> 1) ^ ((uVar13 & 1) << 6 | (uVar13 & 1) << 2);
              }
              else {
                uVar8 = ((uVar13 & 2) << 2 | (int)(uVar13 & 0x20) >> 1 | (int)(uVar13 & 4) >> 2 |
                         (int)(uVar13 & 8) >> 2 | (int)(uVar13 & 0x10) >> 2 |
                        (int)(uVar13 & 0x40) >> 1) ^ ((uVar13 & 1) << 6 | (uVar17 & 1) << 2);
              }
              iVar14 = (int)(uVar10 + uVar15) >> 1;
              iVar16 = (int)uVar8 >> 5;
              if ((uVar15 & 1) == 0) {
                if ((uVar8 & 1) == 0) {
                  bVar6 = abStack_860[(int)(iVar2 + (uVar8 & 0x1f) + iVar16 * 0x400) >> 1] & 0xf;
                }
                else {
                  bVar6 = abStack_860[(int)(iVar2 + (uVar8 & 0x1f) + iVar16 * 0x400) >> 1] >> 4;
                }
LAB_002bbb1c:
                *(byte *)((int)&uStack_60 + iVar14) = bVar6;
              }
              else {
                pbVar12 = (byte *)((int)&uStack_60 + iVar14);
                bVar6 = *pbVar12;
                if ((uVar8 & 1) != 0) {
                  bVar6 = bVar6 | abStack_860[(int)(iVar2 + (uVar8 & 0x1f) + iVar16 * 0x400) >> 1] &
                                  0xf0;
                  goto LAB_002bbb1c;
                }
                *pbVar12 = bVar6 | abStack_860[(int)(iVar2 + (uVar8 & 0x1f) + iVar16 * 0x400) >> 1]
                                   << 4;
              }
              uVar15 = uVar15 + 1;
              uVar13 = uVar13 + 1;
              uVar17 = uVar17 - 1;
            } while ((int)uVar15 < 0x20);
            uVar10 = uVar19;
          } while ((int)uVar19 < 0x80);
          puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + uVar18 * *(int *)(param_1 + 0x18) + iVar2)
          ;
          *puVar1 = uStack_60;
          puVar1[1] = uStack_5c;
          puVar1[2] = uStack_58;
          puVar1[3] = uStack_54;
          iVar14 = *(int *)(param_1 + 4) + uVar18 * *(int *)(param_1 + 0x18) + iVar2;
          *(undefined4 *)(iVar14 + 0x10) = uStack_50;
          *(undefined4 *)(iVar14 + 0x14) = uStack_4c;
          *(undefined4 *)(iVar14 + 0x18) = uStack_48;
          *(undefined4 *)(iVar14 + 0x1c) = uStack_44;
          iVar14 = *(int *)(param_1 + 4);
          puVar1 = (undefined4 *)(iVar14 + (uVar18 + 2) * *(int *)(param_1 + 0x18) + iVar2);
          *puVar1 = uStack_40;
          puVar1[1] = uStack_3c;
          puVar1[2] = uStack_38;
          puVar1[3] = uStack_34;
          iVar2 = (uVar18 + 2) * *(int *)(param_1 + 0x18) + iVar14 + iVar2;
          *(undefined4 *)(iVar2 + 0x10) = uStack_30;
          *(undefined4 *)(iVar2 + 0x14) = uStack_2c;
          *(undefined4 *)(iVar2 + 0x18) = uStack_28;
          *(undefined4 *)(iVar2 + 0x1c) = uStack_24;
          iVar2 = iVar20;
        } while (iVar20 < *(int *)(param_1 + 0xc));
      }
      uVar18 = uVar21;
    } while ((int)uVar21 < *(int *)(param_1 + 0x10));
  }
  return;
}


// ==== FUN_002bbbe8 @ 002bbbe8 ====

undefined4 FUN_002bbbe8(int *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  int iStack_ac;
  int *piStack_a8;
  
  iVar14 = iGpffff8e98;
  puVar6 = &uStack_120;
  uVar15 = (param_3 & 0xff00) >> 8;
  piVar13 = (int *)param_2;
  bVar1 = *(byte *)(piVar13 + 8) & 7;
  piStack_a8 = param_1;
  if (bVar1 == 2) {
    if ((param_3 & 0xf9) != 0) {
      uStack_120 = 1;
      uStack_11c = FUN_002a5548(0xffffffff8000000e);
      goto LAB_002bc178;
    }
    if (uVar15 != 0) {
      uStack_110 = 1;
      uStack_10c = FUN_002a5548(0xffffffff8000000f);
      puVar6 = &uStack_110;
      goto LAB_002bc178;
    }
    if (piVar13[1] == 0) {
      return 0;
    }
    if ((piVar13[1] & 0xfU) != 0) {
      return 0;
    }
    FUN_002b32d8();
    FUN_002b32d8();
    FUN_00371c00(0,0);
    iVar12 = piVar13[4];
    uVar15 = (uint)*(short *)((int)piVar13 + 0x1e);
    iVar10 = piVar13[1];
    iVar9 = piVar13[3] * piVar13[5] >> 3;
    iVar14 = 0xffff0 / iVar9;
    if (iVar9 == 0) {
      trap(7);
    }
    uVar5 = iVar14 * iVar9;
    if (iVar14 < iVar12) {
      if ((uVar5 & 0xf) != 0) {
        do {
          uVar5 = uVar5 - iVar9;
          iVar14 = iVar14 + -1;
        } while ((uVar5 & 0xf) != 0);
      }
      if (iVar14 == 0) {
        return 0;
      }
      iVar9 = piVar13[5];
    }
    else {
      iVar9 = piVar13[5];
      iVar14 = iVar12;
    }
    FUN_003680a0(piVar13[1],(piVar13[3] * iVar9 >> 3) * piVar13[4] + piVar13[1]);
    if (iVar12 != 0) {
      do {
        FUN_00372358(0x44eb80,((uint)uGpffff87e0 & 0x1ff) << 5,
                     (long)(uGpffff87e0 & 0x3f0000) >> 0x10,(long)(uGpffff87e0 & 0x3f000000) >> 0x18
                     ,*(ushort *)(piVar13 + 7) & 0x7ff,uVar15 & 0x7ff,(short)piVar13[3],
                     (short)iVar14);
        FUN_003680a0(0x44eb80,0x44ebf0);
        do {
          puVar2 = (uint *)FUN_0029c210(1);
        } while ((*puVar2 & 0x100) != 0);
        do {
          puVar2 = (uint *)FUN_0029c210(2);
        } while ((*puVar2 & 0x100) != 0);
        FUN_00371c00(0,0);
        lVar4 = FUN_00372498(0x44eb80,iVar10);
        if (lVar4 == -1) {
          lVar4 = FUN_00372498(0x44eb80,iVar10);
          if (lVar4 == -1) {
            return 0;
          }
          iVar9 = piVar13[5];
        }
        else {
          iVar9 = piVar13[5];
        }
        iVar12 = iVar12 - iVar14;
        uVar15 = uVar15 + iVar14;
        iVar9 = (piVar13[3] * iVar9 >> 3) * iVar14;
        if (iVar12 < iVar14) {
          iVar14 = iVar12;
        }
        iVar10 = iVar9 + iVar10;
      } while (iVar12 != 0);
      iVar14 = piVar13[3];
      goto LAB_002bc100;
    }
LAB_002bc0fc:
    iVar14 = piVar13[3];
LAB_002bc100:
    piVar13[6] = iVar14 * piVar13[5] >> 3;
    *piStack_a8 = piVar13[1];
    *(byte *)((int)piVar13 + 0x22) = *(byte *)((int)piVar13 + 0x22) | 2;
    return 1;
  }
  if (bVar1 < 3) {
    if (bVar1 == 1) {
      uStack_d0 = 1;
      uStack_cc = FUN_002a5548(0xffffffff8000000e);
      puVar6 = &uStack_d0;
      goto LAB_002bc178;
    }
  }
  else if (bVar1 == 5) {
    if ((*(byte *)((int)piVar13 + 0x21) & 0x80) != 0) {
      return 0;
    }
    if ((param_3 & 0xf9) != 0) {
      uStack_100 = 1;
      uStack_fc = FUN_002a5548(0xffffffff8000000e);
      puVar6 = &uStack_100;
      goto LAB_002bc178;
    }
    if (*(int *)((int)piVar13 + iGpffff8e98 + 0x58) == 0) {
      uStack_f0 = 1;
      uStack_ec = FUN_002a5548(0xffffffff8000000e);
      puVar6 = &uStack_f0;
      goto LAB_002bc178;
    }
    if (uVar15 != 0) {
      uStack_e0 = 1;
      uStack_dc = FUN_002a5548(0xffffffff8000000f);
      puVar6 = &uStack_e0;
      goto LAB_002bc178;
    }
    if (piVar13[1] == 0) {
      return 0;
    }
    if ((piVar13[1] & 0xfU) != 0) {
      return 0;
    }
    FUN_002b32d8();
    FUN_002b32d8();
    FUN_00371c00(0,0);
    iVar10 = piVar13[4];
    uVar15 = (uint)*(short *)((int)piVar13 + 0x1e);
    iVar9 = piVar13[1];
    iVar11 = piVar13[3] * piVar13[5] >> 3;
    iVar12 = 0xffff0 / iVar11;
    if (iVar11 == 0) {
      trap(7);
    }
    uVar5 = iVar12 * iVar11;
    if (iVar12 < iVar10) {
      if ((uVar5 & 0xf) != 0) {
        do {
          uVar5 = uVar5 - iVar11;
          iVar12 = iVar12 + -1;
        } while ((uVar5 & 0xf) != 0);
      }
      if (iVar12 == 0) {
        return 0;
      }
      iVar11 = piVar13[5];
    }
    else {
      iVar11 = piVar13[5];
      iVar12 = iVar10;
    }
    FUN_003680a0(piVar13[1],(piVar13[3] * iVar11 >> 3) * piVar13[4] + piVar13[1]);
    while (iVar10 != 0) {
      uVar5 = *(uint *)((int)piVar13 + iVar14 + 8);
      FUN_00372358(0x44eb80,*(ushort *)((int)piVar13 + iVar14 + 8) & 0x3fff,uVar5 >> 0xe & 0x3f,
                   uVar5 >> 0x14 & 0x3f,*(ushort *)(piVar13 + 7) & 0x7ff,uVar15 & 0x7ff,
                   (short)piVar13[3],(short)iVar12);
      FUN_003680a0(0x44eb80,0x44ebf0);
      do {
        puVar2 = (uint *)FUN_0029c210(1);
      } while ((*puVar2 & 0x100) != 0);
      do {
        puVar2 = (uint *)FUN_0029c210(2);
      } while ((*puVar2 & 0x100) != 0);
      FUN_00371c00(0,0);
      lVar4 = FUN_00372498(0x44eb80,iVar9);
      if (lVar4 == -1) {
        lVar4 = FUN_00372498(0x44eb80,iVar9);
        if (lVar4 == -1) {
          return 0;
        }
        iVar11 = piVar13[5];
      }
      else {
        iVar11 = piVar13[5];
      }
      iVar10 = iVar10 - iVar12;
      uVar15 = uVar15 + iVar12;
      iVar11 = (piVar13[3] * iVar11 >> 3) * iVar12;
      if (iVar10 < iVar12) {
        iVar12 = iVar10;
      }
      iVar9 = iVar11 + iVar9;
    }
    goto LAB_002bc0fc;
  }
  if (*(byte *)((int)piVar13 + iGpffff8e98 + 0x16) >> 2 < uVar15) {
    uStack_c0 = 1;
    uStack_bc = FUN_002a5548(0xffffffff8000000f);
    puVar6 = &uStack_c0;
LAB_002bc178:
    FUN_002a55d8(puVar6);
    return 0;
  }
  if ((param_3 & 1) == 0) {
    bVar1 = *(byte *)((int)piVar13 + iGpffff8e98 + 0x36);
  }
  else {
    FUN_002cd640(param_2);
    bVar1 = *(byte *)((int)piVar13 + iVar14 + 0x36);
  }
  if ((bVar1 & 1) == 0) {
    uVar5 = 0;
    iVar12 = *(int *)(*piVar13 + 0x10);
    iVar10 = *(int *)(*piVar13 + 0xc);
    if (uVar15 != 0) {
      iVar9 = piVar13[1];
      iVar11 = piVar13[3];
      iVar8 = piVar13[4];
      do {
        iVar7 = piVar13[5] * iVar10;
        uVar5 = uVar5 + 1 & 0xff;
        iVar11 = iVar11 >> 1;
        iVar8 = iVar8 >> 1;
        iVar10 = iVar10 >> 1;
        iVar7 = iVar7 >> 3;
        iVar3 = iVar7 * iVar12;
        iVar12 = iVar12 >> 1;
        iVar9 = (iVar9 + 0xfU & 0xfffffff0) + iVar3;
      } while (uVar5 < uVar15);
      piVar13[4] = iVar8;
      piVar13[3] = iVar11;
      piVar13[1] = iVar9;
      piVar13[6] = iVar7;
    }
    piVar13[1] = piVar13[1] + 0xfU & 0xfffffff0;
    piVar13[6] = piVar13[5] * iVar10 >> 3;
  }
  else {
    bVar1 = *(byte *)((int)piVar13 + iVar14 + 0x36);
    iStack_b0 = 0;
    uVar5 = *(uint *)((int)piVar13 + iVar14 + 8) >> 0x14 & 0x3f;
    iStack_ac = 1;
    switch(uVar5) {
    case 0:
    case 0x30:
      iStack_b0 = 2;
      break;
    case 1:
    case 0x13:
    case 0x14:
    case 0x1b:
    case 0x24:
    case 0x2c:
    case 0x31:
      iStack_b0 = 8;
      break;
    case 2:
    case 10:
    case 0x32:
    case 0x3a:
      iStack_b0 = 4;
    }
    if (((bVar1 & 2) != 0) && (uVar5 == 0x13)) {
      iStack_b0 = 0x10;
      iStack_ac = 4;
    }
    if (((bVar1 & 4) != 0) && (uVar5 == 0x14)) {
      iStack_b0 = 0x20;
      iStack_ac = 4;
    }
    uVar5 = 0;
    iVar12 = piVar13[3];
    iVar10 = *(int *)(*piVar13 + 0x10);
    iVar9 = *(int *)(*piVar13 + 0xc);
    iVar11 = piVar13[4];
    if (uVar15 != 0) {
      iVar8 = piVar13[1];
      do {
        iVar7 = iStack_b0;
        if (iStack_b0 <= iVar9) {
          iVar7 = iVar9;
        }
        iVar3 = iStack_b0;
        if (iStack_ac <= iVar10) {
          iVar3 = iVar10;
        }
        uVar5 = uVar5 + 1 & 0xff;
        iVar12 = iVar12 >> 1;
        iVar9 = iVar9 >> 1;
        iVar11 = iVar11 >> 1;
        iVar10 = iVar10 >> 1;
        iVar8 = iVar8 + ((iVar7 * iVar3 * piVar13[5] >> 3) + 0xfU & 0xfffffff0) + 0x50;
      } while (uVar5 < uVar15);
      piVar13[1] = iVar8;
    }
    piVar13[3] = iVar12;
    iVar12 = iStack_b0;
    if (iStack_b0 <= iVar9) {
      iVar12 = iVar9;
    }
    piVar13[4] = iVar11;
    piVar13[6] = piVar13[5] * iVar12 >> 3;
  }
  uVar15 = param_3 & 8;
  if ((param_3 & 2) == 0) {
    iVar12 = piVar13[1];
    goto LAB_002bc440;
  }
  if ((*(byte *)((int)piVar13 + iVar14 + 0x36) & 2) == 0) {
    bVar1 = *(byte *)((int)piVar13 + iVar14 + 0x36);
  }
  else if ((*(uint *)((int)piVar13 + iVar14 + 8) >> 0x14 & 0x3f) == 0x13) {
    if (piVar13[6] < 0x10) {
      bVar1 = *(byte *)((int)piVar13 + iVar14 + 0x36);
    }
    else {
      if (uVar15 == 0) {
        FUN_002baf08(param_2);
        iVar12 = piVar13[1];
        goto LAB_002bc440;
      }
      bVar1 = *(byte *)((int)piVar13 + iVar14 + 0x36);
    }
  }
  else {
    bVar1 = *(byte *)((int)piVar13 + iVar14 + 0x36);
  }
  if ((bVar1 & 4) != 0) {
    if ((*(uint *)((int)piVar13 + iVar14 + 8) >> 0x14 & 0x3f) != 0x14) {
      iVar12 = piVar13[1];
      goto LAB_002bc440;
    }
    if (piVar13[6] < 0x10) {
      iVar12 = piVar13[1];
      goto LAB_002bc440;
    }
    if (uVar15 != 0) {
      iVar12 = piVar13[1];
      goto LAB_002bc440;
    }
    FUN_002bb148(param_2);
  }
  iVar12 = piVar13[1];
LAB_002bc440:
  *(char *)((int)piVar13 + iVar14 + 0x35) = (char)((param_3 & 0xff00) >> 8);
  *piStack_a8 = iVar12;
  if ((param_3 & 2) != 0) {
    *(byte *)((int)piVar13 + 0x22) = *(byte *)((int)piVar13 + 0x22) | 2;
  }
  if ((param_3 & 1) != 0) {
    *(byte *)((int)piVar13 + 0x22) = *(byte *)((int)piVar13 + 0x22) | 4;
  }
  if (uVar15 != 0) {
    *(byte *)((int)piVar13 + 0x22) = *(byte *)((int)piVar13 + 0x22) | 0x20;
    return 1;
  }
  return 1;
}


// ==== FUN_002bc4b8 @ 002bc4b8 ====

undefined4 FUN_002bc4b8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_2;
  if ((*(byte *)(iVar5 + 0x22) & 6) == 0) {
    return 0;
  }
  bVar1 = *(byte *)(iVar5 + 0x20) & 7;
  if ((*(byte *)(iVar5 + 0x20) & 7) == 0) {
LAB_002bc550:
    iVar6 = iVar5 + DAT_0040e688;
    if (*(int *)(iVar5 + 4) != 0) {
      if ((*(byte *)(iVar6 + 0x36) & 2) == 0) {
        bVar1 = *(byte *)(iVar6 + 0x36);
LAB_002bc5b4:
        if ((bVar1 & 4) == 0) {
LAB_002bc5fc:
          iVar2 = *(int *)(iVar5 + 0x10);
        }
        else if ((*(uint *)(iVar6 + 8) >> 0x14 & 0x3f) == 0x14) {
          if (*(int *)(iVar5 + 0x18) < 0x10) {
            iVar2 = *(int *)(iVar5 + 0x10);
          }
          else {
            if ((*(byte *)(iVar5 + 0x22) & 0x20) == 0) {
              FUN_002bb830(param_2);
              goto LAB_002bc5fc;
            }
            iVar2 = *(int *)(iVar5 + 0x10);
          }
        }
        else {
          iVar2 = *(int *)(iVar5 + 0x10);
        }
      }
      else {
        if ((*(uint *)(iVar6 + 8) >> 0x14 & 0x3f) != 0x13) {
          bVar1 = *(byte *)(iVar6 + 0x36);
          goto LAB_002bc5b4;
        }
        if (*(int *)(iVar5 + 0x18) < 0x10) {
          bVar1 = *(byte *)(iVar6 + 0x36);
          goto LAB_002bc5b4;
        }
        if ((*(byte *)(iVar5 + 0x22) & 0x20) != 0) {
          bVar1 = *(byte *)(iVar6 + 0x36);
          goto LAB_002bc5b4;
        }
        FUN_002bb538(param_2);
        iVar2 = *(int *)(iVar5 + 0x10);
      }
      iVar2 = *(int *)(iVar5 + 0xc) * iVar2 * *(int *)(iVar5 + 0x14);
      iVar4 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      FUN_003680a0(*(int *)(iVar5 + 4),*(int *)(iVar5 + 4) + (iVar4 >> 3) + 0x7f);
    }
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 0x28);
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x30);
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 0x24);
    if ((*(byte *)(iVar6 + 0x36) & 1) == 0) {
      uVar3 = *(uint *)(iVar5 + 0x20);
      goto LAB_002bc678;
    }
    *(int *)(iVar5 + 4) = *(int *)(*(int *)(iVar5 + 0x24) + 4) + 0x50;
  }
  else {
    if (bVar1 < 3) {
      iVar6 = *(int *)(iVar5 + 4);
    }
    else {
      if (bVar1 != 5) goto LAB_002bc550;
      iVar6 = *(int *)(iVar5 + 4);
    }
    if (iVar6 != 0) {
      iVar2 = *(int *)(iVar5 + 0xc) * *(int *)(iVar5 + 0x10) * *(int *)(iVar5 + 0x14);
      iVar4 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      FUN_003680a0(iVar6,iVar6 + (iVar4 >> 3) + 0x7f);
      uVar3 = *(uint *)(iVar5 + 0x20);
      goto LAB_002bc678;
    }
  }
  uVar3 = *(uint *)(iVar5 + 0x20);
LAB_002bc678:
  if ((uVar3 & 0x90040000) == 0x90040000) {
    *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 0x22) & 0xd9;
    FUN_002af158(param_2,0);
  }
  else {
    *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 0x22) & 0xd9;
  }
  return 1;
}


// ==== FUN_002bc6c8 @ 002bc6c8 ====

undefined8 FUN_002bc6c8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined2 uStack_b4;
  ushort uStack_b2;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  
  iVar10 = (int)param_2;
  if ((*(byte *)(iVar10 + 0x22) & 0x1e) != 0) {
    return 0;
  }
  iVar11 = iVar10 + DAT_0040e688;
  uStack_b4 = CONCAT11(*(undefined1 *)(iVar10 + 0x23),*(undefined1 *)(iVar10 + 0x20));
  uStack_c0 = *(undefined4 *)(iVar10 + 0xc);
  iVar12 = *(int *)(iVar11 + 0x28) + *(int *)(iVar11 + 0x2c);
  uStack_bc = *(undefined4 *)(iVar10 + 0x10);
  iStack_b8 = *(int *)(iVar10 + 0x14);
  uStack_b2 = 0;
  if (*(char *)(iVar11 + 0x36) == '\x02') {
    if (iStack_b8 == 8) {
      uStack_b2 = 1;
      goto LAB_002bc764;
    }
    bVar1 = *(byte *)(iVar11 + 0x36);
  }
  else {
LAB_002bc764:
    bVar1 = *(byte *)(iVar11 + 0x36);
  }
  if ((bVar1 & 1) != 0) {
    uStack_b2 = 2;
  }
  uStack_b0 = *(undefined4 *)(iVar11 + 8);
  uStack_ac = *(undefined4 *)(iVar11 + 0xc);
  uStack_a8 = *(undefined4 *)(iVar11 + 0x10);
  uStack_a0 = *(undefined4 *)(iVar11 + 0x18);
  uStack_9c = *(undefined4 *)(iVar11 + 0x1c);
  uStack_98 = *(undefined4 *)(iVar11 + 0x20);
  uStack_94 = *(undefined4 *)(iVar11 + 0x24);
  uStack_90 = *(undefined4 *)(iVar11 + 0x28);
  uStack_8c = *(undefined4 *)(iVar11 + 0x2c);
  uStack_88 = *(undefined4 *)(iVar11 + 0x30);
  uStack_a4 = (uint)*(byte *)(iVar11 + 0x16);
  uStack_84 = (uint)*(ushort *)(iVar11 + 0x14);
  lVar3 = FUN_002a5350(param_1,1,0x40,0x37002,0x37);
  if (((lVar3 == 0) || (lVar3 = FUN_002a53a8(param_1,&uStack_c0,0x40), lVar3 == 0)) ||
     (lVar3 = FUN_002a5350(param_1,1,iVar12,0x37002,0x37), lVar3 == 0)) {
    return 0;
  }
  if (uStack_b2 < 2) {
    iVar10 = *(int *)(iVar10 + 4);
    goto LAB_002bc974;
  }
  if (uStack_b2 != 2) {
    return 0;
  }
  lVar3 = FUN_002a71e0(param_1,*(undefined4 *)(*(int *)(iVar10 + 0x24) + 4),
                       *(undefined4 *)(iVar11 + 0x28));
  if (lVar3 == 0) {
    return 0;
  }
  if ((*(byte *)(iVar10 + 0x21) & 0x40) == 0) {
    iVar12 = *(int *)(iVar11 + 0x2c);
  }
  else {
    puVar4 = *(undefined8 **)(iVar10 + 8);
    puVar9 = (undefined8 *)(*(int **)(iVar10 + 0x24))[**(int **)(iVar10 + 0x24) * 0x10 + 1];
    if (puVar9 == puVar4) {
      iVar12 = *(int *)(iVar11 + 0x2c);
    }
    else {
      iVar12 = *(int *)(iVar11 + 0x2c) + -0x50;
      if (iVar12 != 0) {
        uVar7 = -iVar12 & 0x3f;
        if (uVar7 != 0) {
          if (uVar7 < 0x30) {
            puVar8 = puVar9;
            if (uVar7 < 0x20) {
              if (uVar7 < 0x10) goto LAB_002bc930;
              uVar2 = *puVar4;
              uVar5 = *(undefined4 *)(puVar4 + 1);
              uVar6 = *(undefined4 *)((int)puVar4 + 0xc);
              puVar4 = puVar4 + 2;
              puVar8 = puVar9 + 2;
              iVar12 = *(int *)(iVar11 + 0x2c) + -0x60;
              *(int *)puVar9 = (int)uVar2;
              *(int *)((int)puVar9 + 4) = (int)((ulong)uVar2 >> 0x20);
              *(undefined4 *)(puVar9 + 1) = uVar5;
              *(undefined4 *)((int)puVar9 + 0xc) = uVar6;
            }
            uVar2 = *puVar4;
            uVar5 = *(undefined4 *)(puVar4 + 1);
            uVar6 = *(undefined4 *)((int)puVar4 + 0xc);
            iVar12 = iVar12 + -0x10;
            puVar4 = puVar4 + 2;
            *(int *)puVar8 = (int)uVar2;
            *(int *)((int)puVar8 + 4) = (int)((ulong)uVar2 >> 0x20);
            *(undefined4 *)(puVar8 + 1) = uVar5;
            *(undefined4 *)((int)puVar8 + 0xc) = uVar6;
            puVar9 = puVar8 + 2;
          }
          uVar2 = *puVar4;
          uVar5 = *(undefined4 *)(puVar4 + 1);
          uVar6 = *(undefined4 *)((int)puVar4 + 0xc);
          iVar12 = iVar12 + -0x10;
          puVar4 = puVar4 + 2;
          *(int *)puVar9 = (int)uVar2;
          *(int *)((int)puVar9 + 4) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(puVar9 + 1) = uVar5;
          *(undefined4 *)((int)puVar9 + 0xc) = uVar6;
          puVar9 = puVar9 + 2;
          if (iVar12 == 0) goto LAB_002bc960;
        }
LAB_002bc930:
        do {
          uVar2 = *puVar4;
          uVar5 = *(undefined4 *)(puVar4 + 1);
          uVar6 = *(undefined4 *)((int)puVar4 + 0xc);
          iVar12 = iVar12 + -0x40;
          *(int *)puVar9 = (int)uVar2;
          *(int *)((int)puVar9 + 4) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(puVar9 + 1) = uVar5;
          *(undefined4 *)((int)puVar9 + 0xc) = uVar6;
          uVar2 = puVar4[2];
          uVar5 = *(undefined4 *)(puVar4 + 3);
          uVar6 = *(undefined4 *)((int)puVar4 + 0x1c);
          *(int *)(puVar9 + 2) = (int)uVar2;
          *(int *)((int)puVar9 + 0x14) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(puVar9 + 3) = uVar5;
          *(undefined4 *)((int)puVar9 + 0x1c) = uVar6;
          uVar2 = puVar4[4];
          uVar5 = *(undefined4 *)(puVar4 + 5);
          uVar6 = *(undefined4 *)((int)puVar4 + 0x2c);
          *(int *)(puVar9 + 4) = (int)uVar2;
          *(int *)((int)puVar9 + 0x24) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(puVar9 + 5) = uVar5;
          *(undefined4 *)((int)puVar9 + 0x2c) = uVar6;
          uVar2 = puVar4[6];
          uVar5 = *(undefined4 *)(puVar4 + 7);
          uVar6 = *(undefined4 *)((int)puVar4 + 0x3c);
          puVar4 = puVar4 + 8;
          *(int *)(puVar9 + 6) = (int)uVar2;
          *(int *)((int)puVar9 + 0x34) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(puVar9 + 7) = uVar5;
          *(undefined4 *)((int)puVar9 + 0x3c) = uVar6;
          puVar9 = puVar9 + 8;
        } while (iVar12 != 0);
      }
LAB_002bc960:
      iVar12 = *(int *)(iVar11 + 0x2c);
    }
  }
  if (iVar12 == 0) {
    return param_2;
  }
  iVar10 = *(int *)(iVar10 + 8) + -0x50;
LAB_002bc974:
  lVar3 = FUN_002a71e0(param_1,iVar10,iVar12);
  if (lVar3 != 0) {
    return param_2;
  }
  return 0;
}


// ==== FUN_002bc9b0 @ 002bc9b0 ====

long FUN_002bc9b0(undefined8 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  ushort uStack_c2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  int aiStack_6c [3];
  
  lVar4 = FUN_002a5140(param_1,1,&iStack_70,aiStack_6c);
  if (lVar4 != 0) {
    if (aiStack_6c[0] - 0x35000U < 0x2003) {
      memset(&uStack_d0,0,0x40);
      lVar4 = FUN_002a53d0(param_1,&uStack_d0,iStack_70);
      uVar1 = iGpffff8830;
      if (lVar4 == 0) {
        return 0;
      }
      if (uStack_c2 < 2) {
        uGpffff87c0 = 1;
      }
      iGpffff8830 = (uStack_b4 >> 2) + 1;
      lVar4 = FUN_002ac468(uStack_d0,uStack_cc,uStack_c8,uStack_c4);
      uGpffff87c0 = 0;
      if (lVar4 == 0) {
        uGpffff87c0 = 0;
        iGpffff8830 = uVar1;
        return 0;
      }
      iVar8 = (int)lVar4;
      iVar7 = iVar8 + iGpffff8e98;
      *(undefined4 *)(iVar7 + 8) = uStack_c0;
      *(undefined4 *)(iVar7 + 0xc) = uStack_bc;
      *(undefined4 *)(iVar7 + 0x10) = uStack_b8;
      *(undefined1 *)(iVar7 + 0x16) = (undefined1)uStack_b4;
      *(undefined4 *)(iVar7 + 0x18) = uStack_b0;
      *(undefined4 *)(iVar7 + 0x1c) = uStack_ac;
      *(undefined4 *)(iVar7 + 0x20) = uStack_a8;
      *(undefined4 *)(iVar7 + 0x24) = uStack_a4;
      *(int *)(iVar7 + 0x28) = iStack_a0;
      *(undefined4 *)(iVar7 + 0x2c) = uStack_9c;
      *(undefined4 *)(iVar7 + 0x30) = uStack_98;
      *(undefined2 *)(iVar7 + 0x14) = uStack_94;
      iGpffff8830 = uVar1;
      if (uStack_c2 < 2) {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 4) + iStack_a0;
        if (uStack_c2 == 1) {
          bVar2 = *(byte *)(iVar7 + 0x36) | 2;
          if ((*(byte *)(iVar7 + 0x36) & 1) != 0) {
            FUN_002ac568(lVar4);
            return 0;
          }
        }
        else {
          bVar2 = *(byte *)(iVar7 + 0x36) & 0xfd;
          if ((*(byte *)(iVar7 + 0x36) & 1) != 0) {
            FUN_002ac568(lVar4);
            return 0;
          }
        }
        *(byte *)(iVar7 + 0x36) = bVar2;
      }
      lVar5 = FUN_002a5140(param_1,1,&iStack_70,aiStack_6c);
      if (lVar5 == 0) {
        FUN_002ac568(lVar4);
        return 0;
      }
      if (aiStack_6c[0] - 0x35000U < 0x2003) {
        if (uStack_c2 < 2) {
          iVar7 = FUN_002a7050(param_1,*(undefined4 *)(iVar8 + 4),iStack_70);
          if (iVar7 != iStack_70) {
            FUN_002ac568(lVar4);
            return 0;
          }
          FUN_003680a0(*(int *)(iVar8 + 4),*(int *)(iVar8 + 4) + iVar7 + 0x7f);
          return lVar4;
        }
        if (uStack_c2 == 2) {
          iVar3 = FUN_002a7050(param_1,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 4),
                               *(undefined4 *)(iVar7 + 0x28));
          if (iVar3 != *(int *)(iVar7 + 0x28)) {
            FUN_002ac568(lVar4);
            return 0;
          }
          if (*(int *)(iVar7 + 0x2c) == 0) {
            iVar7 = *(int *)(iVar7 + 0x2c);
          }
          else {
            iVar3 = FUN_002a7050(param_1,*(int *)(iVar8 + 8) + -0x50);
            if (iVar3 != *(int *)(iVar7 + 0x2c)) {
              FUN_002ac568(lVar4);
              return 0;
            }
            iVar7 = *(int *)(iVar7 + 0x2c);
          }
          FUN_003680a0(*(undefined4 *)(*(int *)(iVar8 + 0x24) + 4),
                       iVar7 + *(int *)(iVar8 + 8) + 0x2f);
          return lVar4;
        }
        FUN_002ac568(lVar4);
        return 0;
      }
      uStack_90 = 1;
      uStack_8c = FUN_002a5548(0xffffffff80000004);
      puVar6 = &uStack_90;
    }
    else {
      uStack_80 = 1;
      uStack_7c = FUN_002a5548(0xffffffff80000004,0);
      puVar6 = &uStack_80;
    }
    FUN_002a55d8(puVar6);
  }
  return 0;
}


// ==== FUN_002bccf8 @ 002bccf8 ====

bool FUN_002bccf8(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uStack_50;
  uint uStack_4c;
  
  iVar1 = *param_2;
  lVar3 = FUN_002a5350(param_1,1,8,0x37002,0x37);
  if (lVar3 != 0) {
    uStack_4c = (uint)*(ushort *)(param_2 + 0x14);
    uStack_50 = DAT_0040e048;
    lVar3 = FUN_002a71e0(param_1,&uStack_50,8);
    if (lVar3 != 0) {
      lVar3 = FUN_002d06b8(param_2 + 4,param_1);
      if ((lVar3 != 0) && (lVar3 = FUN_002d06b8(param_2 + 0xc,param_1), lVar3 != 0)) {
        iVar2 = iVar1 + iGpffff8e98;
        iVar2 = *(int *)(iVar2 + 0x28) + *(int *)(iVar2 + 0x2c) + 0x58;
        lVar3 = FUN_002a5350(param_1,1,iVar2,0x37002,0x37);
        if (lVar3 != 0) {
          lVar3 = FUN_002bc6c8(param_1,iVar1,iVar2);
          return lVar3 != 0;
        }
      }
    }
  }
  return false;
}


// ==== FUN_002bcde8 @ 002bcde8 ====

bool FUN_002bcde8(undefined8 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [128];
  undefined1 auStack_140 [128];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a0;
  int aiStack_9c [3];
  
  *param_2 = 0;
  lVar3 = FUN_002a5140(param_1,1,&iStack_a0,aiStack_9c);
  if (lVar3 != 0) {
    bVar1 = aiStack_9c[0] - 0x35000U < 0x2003;
    if (!bVar1) {
      uStack_b0 = 1;
      uStack_ac = FUN_002a5548(0xffffffff80000004);
      FUN_002a55d8(&uStack_b0);
      return bVar1;
    }
    uStack_1d0 = 0;
    iVar2 = FUN_002a7050(param_1,&uStack_1d0);
    if (iVar2 == iStack_a0) {
      if ((int)uStack_1d0 != 0x325350) {
        return false;
      }
      lVar3 = FUN_002d0280(auStack_1c0,param_1);
      if (((lVar3 != 0) && (lVar3 = FUN_002d0280(auStack_140,param_1), lVar3 != 0)) &&
         (lVar3 = FUN_002a5140(param_1,1,&iStack_a0,aiStack_9c), lVar3 != 0)) {
        if (0x2002 < aiStack_9c[0] - 0x35000U) {
          uStack_c0 = 1;
          uStack_bc = FUN_002a5548(0xffffffff80000004,iStack_a0);
          FUN_002a55d8(&uStack_c0);
          return false;
        }
        lVar3 = FUN_002bc9b0(param_1);
        if (lVar3 == 0) {
          return false;
        }
        lVar4 = FUN_002af300(lVar3);
        *param_2 = (int)lVar4;
        if (lVar4 == 0) {
          FUN_002ac568(lVar3);
          return false;
        }
        FUN_002af1a0(lVar4,auStack_1c0);
        FUN_002af240(*param_2,auStack_140);
        uVar6 = (int)uStack_1d0._4_4_ >> 8 & 0xf;
        uVar5 = (int)uStack_1d0._4_4_ >> 0xc & 0xf;
        if (uVar5 == 0) {
          uVar5 = uVar6;
        }
        *(uint *)(*param_2 + 0x50) =
             *(uint *)(*param_2 + 0x50) & 0xffff0000 | uStack_1d0._4_4_ & 0xff | uVar6 << 8 |
             uVar5 << 0xc;
        return bVar1;
      }
    }
  }
  return false;
}


// ==== FUN_002bd010 @ 002bd010 ====

void FUN_002bd010(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_v0_udw;
  undefined8 in_a3_udw;
  undefined8 in_t0_udw;
  undefined8 in_t1_udw;
  undefined1 in_s0_qw [16];
  undefined1 auVar3 [16];
  undefined1 in_s1_qw [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_s2_qw [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_s3_qw [16];
  undefined1 auVar8 [16];
  undefined1 in_s4_qw [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_s5_qw [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_s6_qw [16];
  undefined1 auVar13 [16];
  
  auVar8._8_8_ = in_s3_qw._8_8_;
  auVar8._0_8_ = 0xe;
  auVar7._8_8_ = in_t1_udw;
  auVar7._0_8_ = 0x1000000000008006;
  auVar8 = _pcpyld(auVar8,auVar7);
  auVar13._8_8_ = in_s6_qw._8_8_;
  auVar13._0_8_ = 0x3b;
  lGpffff8810 = (long)DAT_003c3c60;
  auVar10._8_8_ = in_t1_udw;
  auVar10._0_8_ = 0x8000000000;
  auVar13 = _pcpyld(auVar13,auVar10);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_s0_qw._8_8_;
  auVar6._8_8_ = in_s2_qw._8_8_;
  auVar6._0_8_ = 0x49;
  auVar7 = _pcpyld(auVar6,auVar2 << 0x40);
  uGpffff882c = 3;
  auVar4._8_8_ = in_s1_qw._8_8_;
  auVar4._0_8_ = 0x42;
  uGpffff8808 = 0x60;
  auVar9._8_8_ = in_s4_qw._8_8_;
  auVar9._0_8_ = 0x44;
  auVar11._8_8_ = in_s5_qw._8_8_;
  auVar11._0_8_ = 0x46;
  auVar5._8_8_ = in_t0_udw;
  auVar5._0_8_ = lGpffff8810;
  auVar5 = _pcpyld(auVar4,auVar5);
  auVar12._8_8_ = in_t1_udw;
  auVar12._0_8_ = 0x6071243571603524;
  auVar10 = _pcpyld(auVar9,auVar12);
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = 1;
  auVar12 = _pcpyld(auVar11,auVar3);
  auVar1._8_8_ = in_a3_udw;
  auVar1._0_8_ = 8;
  auVar3 = _pcpyld(auVar1,auVar2 << 0x40);
  uGpffff8eac = 2;
  uGpffff8ec4 = 1;
  uGpffff8828 = 2;
  uGpffff8820 = 8;
  uGpffff8ea8 = 0;
  uGpffff8ea4 = 0;
  uGpffff8ea0 = 0;
  uGpffff8800 = 0;
  FUN_002b3d88(0xffffffff80000000,7);
  *puGpffff8e00 = auVar8._0_4_;
  puGpffff8e00[1] = auVar8._4_4_;
  puGpffff8e00[2] = auVar8._8_4_;
  puGpffff8e00[3] = auVar8._12_4_;
  puGpffff8e00[4] = auVar5._0_4_;
  puGpffff8e00[5] = auVar5._4_4_;
  puGpffff8e00[6] = auVar5._8_4_;
  puGpffff8e00[7] = auVar5._12_4_;
  puGpffff8e00[8] = auVar3._0_4_;
  puGpffff8e00[9] = auVar3._4_4_;
  puGpffff8e00[10] = auVar3._8_4_;
  puGpffff8e00[0xb] = auVar3._12_4_;
  puGpffff8e00[0xc] = auVar7._0_4_;
  puGpffff8e00[0xd] = auVar7._4_4_;
  puGpffff8e00[0xe] = auVar7._8_4_;
  puGpffff8e00[0xf] = auVar7._12_4_;
  puGpffff8e00[0x10] = auVar13._0_4_;
  puGpffff8e00[0x11] = auVar13._4_4_;
  puGpffff8e00[0x12] = auVar13._8_4_;
  puGpffff8e00[0x13] = auVar13._12_4_;
  puGpffff8e00[0x14] = auVar10._0_4_;
  puGpffff8e00[0x15] = auVar10._4_4_;
  puGpffff8e00[0x16] = auVar10._8_4_;
  puGpffff8e00[0x17] = auVar10._12_4_;
  puGpffff8e00[0x18] = auVar12._0_4_;
  puGpffff8e00[0x19] = auVar12._4_4_;
  puGpffff8e00[0x1a] = auVar12._8_4_;
  puGpffff8e00[0x1b] = auVar12._12_4_;
  puGpffff8e00 = puGpffff8e00 + 0x1c;
  FUN_002b5088(6,1);
  FUN_002b5088(8,1);
  return;
}


// ==== FUN_002bd188 @ 002bd188 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_002bd188(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((iGpffff8ec0 == 0) && (param_1 < 0x5a)) {
    bVar2 = -2 < param_1;
  }
  if (bVar2 != false) {
    if (param_1 != -1) {
      iVar1 = param_1 * 0x18;
      _DAT_0044e750 = *(undefined8 *)(&DAT_003c33a0 + iVar1);
      _DAT_0044e758 = *(undefined8 *)(&DAT_003c33a8 + iVar1);
      DAT_0044e760 = *(undefined8 *)(&DAT_003c33b0 + iVar1);
      _DAT_0044e768 = *(undefined8 *)(&DAT_003c33a0 + iVar1);
      _DAT_0044e770 = *(ulong *)(&DAT_003c33a8 + iVar1);
      DAT_0044e778 = *(undefined8 *)(&DAT_003c33b0 + iVar1);
      if ((_DAT_0044e770 & 0x10000000000) == 0) {
        DAT_0044e783 = 1;
        DAT_0044e781 = 2;
        DAT_0044e780 = 2;
      }
      else {
        DAT_0044e781 = 1;
        DAT_0044e780 = 1;
        if (iGpffff8850 == 0) {
          iGpffff8850 = DAT_0044e768;
        }
        _DAT_0044e768 = CONCAT44((int)((long)_DAT_0044e768 >> 0x21),iGpffff8850);
        DAT_0044e783 = 0;
      }
      DAT_0044e782 = 0;
    }
    uGpffff8ebc = 0x100;
    iGpffff8eb8 = param_1;
    if (DAT_0044e758 == 0x20) {
      uGpffff8ebc = 0x500;
    }
  }
  return bVar2;
}


// ==== FUN_002bd2c0 @ 002bd2c0 ====

undefined4 FUN_002bd2c0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  ulong in_a2_udw;
  undefined1 auVar7 [16];
  undefined8 in_t0_udw;
  undefined8 in_t1_udw;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar6 = fGpffff8084;
  Status = Status | 0x40000000;
  auVar7._8_8_ = in_t0_udw;
  auVar7._0_8_ = 0x500000001000102;
  auVar3._8_8_ = in_t1_udw;
  auVar3._0_8_ = 0xf000000d;
  auVar7 = _pcpyld(auVar7,auVar3);
  DAT_0044e7d0 = auVar7._0_4_;
  DAT_0044e7d4 = auVar7._4_4_;
  DAT_0044e7d8 = auVar7._8_4_;
  DAT_0044e7dc = auVar7._12_4_;
  auVar1._8_8_ = in_t0_udw;
  auVar1._0_8_ = 0x71304001;
  auVar4._8_8_ = in_t1_udw;
  auVar4._0_8_ = 0x3f3f3f3f20000000;
  auVar7 = _pcpyld(auVar1,auVar4);
  DAT_0044e7e0 = auVar7._0_4_;
  DAT_0044e7e4 = auVar7._4_4_;
  DAT_0044e7e8 = auVar7._8_4_;
  DAT_0044e7ec = auVar7._12_4_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = in_a2_udw;
  auVar2._8_8_ = in_t0_udw;
  auVar2._0_8_ = 0x7130420200000000;
  auVar7 = _pcpyld(auVar2,auVar5 << 0x40);
  fVar13 = 255.0;
  DAT_0044e840 = auVar7._0_4_;
  DAT_0044e844 = auVar7._4_4_;
  DAT_0044e848 = auVar7._8_4_;
  DAT_0044e84c = auVar7._12_4_;
  iVar11 = 0;
  uVar10 = 0x5f;
  fVar15 = fGpffff8088;
  fVar16 = fGpffff8080;
  DAT_0044e8b0 = DAT_0044e7d0;
  DAT_0044e8b4 = DAT_0044e7d4;
  DAT_0044e8b8 = DAT_0044e7d8;
  DAT_0044e8bc = DAT_0044e7dc;
  DAT_0044e8c0 = DAT_0044e7e0;
  DAT_0044e8c4 = DAT_0044e7e4;
  DAT_0044e8c8 = DAT_0044e7e8;
  DAT_0044e8cc = DAT_0044e7ec;
  DAT_0044e920 = DAT_0044e840;
  DAT_0044e924 = DAT_0044e844;
  DAT_0044e928 = DAT_0044e848;
  DAT_0044e92c = DAT_0044e84c;
  DAT_0044e990 = DAT_0044e7d0;
  DAT_0044e994 = DAT_0044e7d4;
  DAT_0044e998 = DAT_0044e7d8;
  DAT_0044e99c = DAT_0044e7dc;
  DAT_0044e9a0 = DAT_0044e7e0;
  DAT_0044e9a4 = DAT_0044e7e4;
  DAT_0044e9a8 = DAT_0044e7e8;
  DAT_0044e9ac = DAT_0044e7ec;
  DAT_0044ea00 = DAT_0044e840;
  DAT_0044ea04 = DAT_0044e844;
  DAT_0044ea08 = DAT_0044e848;
  DAT_0044ea0c = DAT_0044e84c;
  DAT_0044ea70 = DAT_0044e7d0;
  DAT_0044ea74 = DAT_0044e7d4;
  DAT_0044ea78 = DAT_0044e7d8;
  DAT_0044ea7c = DAT_0044e7dc;
  DAT_0044ea80 = DAT_0044e7e0;
  DAT_0044ea84 = DAT_0044e7e4;
  DAT_0044ea88 = DAT_0044e7e8;
  DAT_0044ea8c = DAT_0044e7ec;
  DAT_0044eae0 = DAT_0044e840;
  DAT_0044eae4 = DAT_0044e844;
  DAT_0044eae8 = DAT_0044e848;
  DAT_0044eaec = DAT_0044e84c;
  do {
    if ((uVar10 & 1) == 0) {
      fVar14 = (float)iVar11;
      iVar8 = ((int)uVar10 >> 1) * 2;
      *(short *)((int)&DAT_0044e7ec + iVar8) = (short)((int)(fVar13 - fVar14 * fVar16) << 4);
      fVar12 = (float)FUN_0029e688(0x43800000,fVar14 * fVar6);
      *(short *)((int)&DAT_0044e8cc + iVar8) = (short)((int)(fVar13 / fVar12) << 4);
      fVar12 = (float)FUN_0029e688(0x43800000,fVar14 * fVar14 * fVar15);
      fVar12 = fVar13 / fVar12;
      puVar9 = (undefined2 *)((int)&DAT_0044e9ac + iVar8);
    }
    else {
      fVar14 = (float)iVar11;
      iVar8 = ((int)uVar10 >> 1) * 2;
      *(short *)(iVar8 + 0x44e850) = (short)((int)(fVar13 - fVar14 * fVar16) << 4);
      fVar12 = (float)FUN_0029e688(0x43800000,fVar14 * fVar6);
      *(short *)(iVar8 + 0x44e930) = (short)((int)(fVar13 / fVar12) << 4);
      fVar12 = (float)FUN_0029e688(0x43800000,fVar14 * fVar14 * fVar15);
      fVar12 = fVar13 / fVar12;
      puVar9 = (undefined2 *)(iVar8 + 0x44ea10);
    }
    *puVar9 = (short)((int)fVar12 << 4);
    iVar11 = iVar11 + 1;
    uVar10 = uVar10 - 1;
  } while (iVar11 < 0x60);
  FUN_003680a0(0x44e7d0,0x44e92f);
  FUN_003680a0(0x44e8b0,0x44ea0f);
  FUN_003680a0(0x44e990,0x44eaef);
  FUN_003680a0(0x44ea70,0x44ebcf);
  puGpffff8eb4 = &DAT_0044e7d0;
  uGpffff8eb8 = 0x59;
  uGpffff8ec0 = 0;
  uGpffff8ebc = 0x100;
  if (DAT_003c3c00 == 0x20) {
    uGpffff8ebc = 0x500;
  }
  return 1;
}


// ==== FUN_002bd5b0 @ 002bd5b0 ====

bool FUN_002bd5b0(void)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  FUN_002cb1f0();
  lVar1 = FUN_002c6570();
  if (lVar1 != 0) {
    lVar1 = FUN_002bf670();
    bVar2 = lVar1 != 0;
  }
  if (bVar2 == false) {
    FUN_002cb240();
  }
  else {
    FUN_002a5b98(0x2c05f8);
    FUN_002a78d8(0x2c0670,0x2c06d0,0x2c0760,0x2c07b8);
  }
  DAT_0044e670 = 0;
  DAT_0044e640 = 0x3f800000;
  DAT_0044e64c = DAT_0044e64c | 0x20003;
  DAT_0044e668 = 0x3f800000;
  DAT_0044e654 = 0x3f800000;
  DAT_0044e650 = 0;
  DAT_0044e648 = 0;
  DAT_0044e644 = 0;
  DAT_0044e664 = 0;
  DAT_0044e660 = 0;
  DAT_0044e658 = 0;
  DAT_0044e678 = 0;
  DAT_0044e674 = 0;
  uGpffff8eb0 = 0xdeaddead;
  return bVar2;
}


// ==== FUN_002bd6a0 @ 002bd6a0 ====

void FUN_002bd6a0(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
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
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  undefined8 in_a0_udw;
  uint uVar30;
  undefined1 in_t0_qw [16];
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulong in_t1_udw;
  undefined4 *puVar50;
  float fVar51;
  float fVar52;
  uint uStack_130;
  
  fVar51 = 8.0;
  uStack_130 = 0;
  iVar23 = FUN_00291e90(((float)(int)DAT_0044e750 * 8.0) / (float)DAT_0044e768 + 0.5);
  iVar24 = FUN_00291e90(((float)DAT_0044e754 * fVar51) / (float)DAT_0044e76c + 0.5);
  iVar25 = FUN_00291e90(((float)DAT_0044e754 * 16.0) / (float)DAT_0044e76c + 0.5);
  do {
    if (uStack_130 == 0) {
      puVar50 = (undefined4 *)&DAT_0044e140;
    }
    else if (uStack_130 == 1) {
      puVar50 = (undefined4 *)&DAT_0044e280;
    }
    else if (uStack_130 == 2) {
      puVar50 = (undefined4 *)&DAT_0044e3c0;
    }
    else {
      puVar50 = (undefined4 *)&DAT_0044e500;
    }
    uVar26 = 0;
    if ((DAT_0044e774 & 2) == 0) {
      uVar26 = (int)uStack_130 >> 1 & 1;
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = in_t0_qw._8_8_;
    auVar31._8_8_ = in_t1_udw;
    auVar31._0_8_ = 0x70000013;
    auVar31 = _pcpyld(auVar19 << 0x40,auVar31);
    *puVar50 = auVar31._0_4_;
    puVar50[1] = auVar31._4_4_;
    puVar50[2] = auVar31._8_4_;
    puVar50[3] = auVar31._12_4_;
    auVar32._8_8_ = auVar31._8_8_;
    auVar32._0_8_ = 0xe;
    auVar3._8_8_ = in_t1_udw;
    auVar3._0_8_ = 0x1000000000008012;
    auVar31 = _pcpyld(auVar32,auVar3);
    puVar50[4] = auVar31._0_4_;
    puVar50[5] = auVar31._4_4_;
    puVar50[6] = auVar31._8_4_;
    puVar50[7] = auVar31._12_4_;
    if (uVar26 == 0) {
      lVar27 = *(long *)(param_1 + 0x10);
      uVar30 = *(uint *)(param_1 + 0x10);
    }
    else {
      lVar27 = *(long *)(param_1 + 0x360);
      uVar30 = *(uint *)(param_1 + 0x360);
    }
    auVar33._8_8_ = auVar31._8_8_;
    auVar33._0_8_ = 0x4c;
    auVar4._8_8_ = in_t1_udw;
    auVar4._0_8_ = (long)(int)(((uint)((ulong)(lVar27 << 0x11) >> 0x20) & 0x1f) << 0x18 |
                              (DAT_0044e768 >> 6) << 0x10) | (ulong)uVar30 & 0x1ff;
    auVar31 = _pcpyld(auVar33,auVar4);
    puVar50[8] = auVar31._0_4_;
    puVar50[9] = auVar31._4_4_;
    puVar50[10] = auVar31._8_4_;
    puVar50[0xb] = auVar31._12_4_;
    auVar34._8_8_ = auVar31._8_8_;
    auVar34._0_8_ = 0x18;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = in_t1_udw;
    auVar31 = _pcpyld(auVar34,auVar21 << 0x40);
    puVar50[0xc] = auVar31._0_4_;
    puVar50[0xd] = auVar31._4_4_;
    puVar50[0xe] = auVar31._8_4_;
    puVar50[0xf] = auVar31._12_4_;
    auVar35._8_8_ = auVar31._8_8_;
    auVar35._0_8_ = 0x40;
    auVar5._8_8_ = in_t1_udw;
    auVar5._0_8_ = 0x7fff00007fff0000;
    auVar31 = _pcpyld(auVar35,auVar5);
    puVar50[0x10] = auVar31._0_4_;
    puVar50[0x11] = auVar31._4_4_;
    puVar50[0x12] = auVar31._8_4_;
    puVar50[0x13] = auVar31._12_4_;
    auVar36._8_8_ = auVar31._8_8_;
    auVar36._0_8_ = 0x47;
    auVar6._8_8_ = in_t1_udw;
    auVar6._0_8_ = 0x30000;
    auVar31 = _pcpyld(auVar36,auVar6);
    puVar50[0x14] = auVar31._0_4_;
    puVar50[0x15] = auVar31._4_4_;
    puVar50[0x16] = auVar31._8_4_;
    puVar50[0x17] = auVar31._12_4_;
    auVar37._8_8_ = auVar31._8_8_;
    auVar37._0_8_ = 0x4e;
    auVar7._8_8_ = in_t1_udw;
    auVar7._0_8_ = (long)(int)((uint)((ulong)*(undefined8 *)(param_1 + 0x1e0) >> 0x18) & 0xf) <<
                   0x18 | (long)(int)((uint)*(undefined8 *)(param_1 + 0x1e0) & 0x1ff) | 0x100000000U
    ;
    auVar31 = _pcpyld(auVar37,auVar7);
    puVar50[0x18] = auVar31._0_4_;
    puVar50[0x19] = auVar31._4_4_;
    puVar50[0x1a] = auVar31._8_4_;
    puVar50[0x1b] = auVar31._12_4_;
    auVar38._8_8_ = auVar31._8_8_;
    auVar38._0_8_ = 0x45;
    lVar27 = (long)DAT_0044e754;
    lVar28 = (long)(int)DAT_0044e750;
    auVar1._1_7_ = 0;
    auVar1[0] = DAT_0044e770 < 0x18;
    auVar1._8_8_ = in_a0_udw;
    auVar31 = _pcpyld(auVar38,auVar1);
    puVar50[0x1c] = auVar31._0_4_;
    puVar50[0x1d] = auVar31._4_4_;
    puVar50[0x1e] = auVar31._8_4_;
    puVar50[0x1f] = auVar31._12_4_;
    auVar39._8_8_ = auVar31._8_8_;
    auVar39._0_8_ = 8;
    auVar8._8_8_ = in_t1_udw;
    auVar8._0_8_ = lVar27 + -1 << 0x22 | (lVar28 + -1) * 0x4000 | 10;
    auVar31 = _pcpyld(auVar39,auVar8);
    puVar50[0x20] = auVar31._0_4_;
    puVar50[0x21] = auVar31._4_4_;
    puVar50[0x22] = auVar31._8_4_;
    puVar50[0x23] = auVar31._12_4_;
    if ((uStack_130 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      uVar30 = (uint)uVar2;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x1d0);
      uVar30 = (uint)uVar2;
    }
    auVar40._8_8_ = auVar31._8_8_;
    auVar40._0_8_ = 6;
    auVar9._8_8_ = in_t1_udw;
    auVar9._0_8_ = (long)(int)((uint)((ulong)uVar2 >> 0x18) & 0x3f) << 0x14 |
                   (ulong)((DAT_0044e750 >> 6) << 0xe) | 0xaa8000000 |
                   (long)(int)((uVar30 & 0x1ff) << 5);
    auVar31 = _pcpyld(auVar40,auVar9);
    puVar50[0x24] = auVar31._0_4_;
    puVar50[0x25] = auVar31._4_4_;
    puVar50[0x26] = auVar31._8_4_;
    puVar50[0x27] = auVar31._12_4_;
    auVar41._8_8_ = auVar31._8_8_;
    auVar41._0_8_ = 0x14;
    auVar10._8_8_ = in_t1_udw;
    auVar10._0_8_ = 0x61;
    auVar31 = _pcpyld(auVar41,auVar10);
    puVar50[0x28] = auVar31._0_4_;
    puVar50[0x29] = auVar31._4_4_;
    puVar50[0x2a] = auVar31._8_4_;
    puVar50[0x2b] = auVar31._12_4_;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar31._8_8_;
    auVar11._8_8_ = in_t1_udw;
    auVar11._0_8_ = 0x16;
    auVar31 = _pcpyld(auVar20 << 0x40,auVar11);
    puVar50[0x2c] = auVar31._0_4_;
    puVar50[0x2d] = auVar31._4_4_;
    puVar50[0x2e] = auVar31._8_4_;
    puVar50[0x2f] = auVar31._12_4_;
    auVar42._8_8_ = auVar31._8_8_;
    auVar42._0_8_ = 1;
    auVar12._8_8_ = in_t1_udw;
    auVar12._0_8_ = 0x3f80000000000000;
    auVar31 = _pcpyld(auVar42,auVar12);
    puVar50[0x30] = auVar31._0_4_;
    puVar50[0x31] = auVar31._4_4_;
    puVar50[0x32] = auVar31._8_4_;
    puVar50[0x33] = auVar31._12_4_;
    fVar51 = (float)FUN_0036f230(iVar23);
    iVar29 = iVar24;
    if (uVar26 != 0) {
      iVar29 = iVar25;
    }
    fVar52 = (float)FUN_0036f230(iVar29);
    auVar43._8_8_ = auVar31._8_8_;
    auVar43._0_8_ = 2;
    auVar13._4_4_ = fVar52 * 6.1035156e-05;
    auVar13._0_4_ = fVar51 * 6.1035156e-05;
    auVar13._8_8_ = in_t1_udw;
    auVar31 = _pcpyld(auVar43,auVar13);
    puVar50[0x34] = auVar31._0_4_;
    puVar50[0x35] = auVar31._4_4_;
    puVar50[0x36] = auVar31._8_4_;
    puVar50[0x37] = auVar31._12_4_;
    auVar44._8_8_ = auVar31._8_8_;
    auVar44._0_8_ = 5;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = in_t1_udw;
    auVar31 = _pcpyld(auVar44,auVar22 << 0x40);
    puVar50[0x38] = auVar31._0_4_;
    puVar50[0x39] = auVar31._4_4_;
    puVar50[0x3a] = auVar31._8_4_;
    puVar50[0x3b] = auVar31._12_4_;
    if (uVar26 == 0) {
      uVar26 = DAT_0044e754 * 0x10 + iVar24;
      if (-1 < (int)uVar26) goto LAB_002bdc74;
LAB_002bdc88:
      fVar51 = (float)uVar26;
    }
    else {
      uVar26 = DAT_0044e754 * 0x10 + iVar25;
      if ((int)uVar26 < 0) goto LAB_002bdc88;
LAB_002bdc74:
      fVar51 = (float)(int)uVar26;
    }
    auVar45._8_8_ = auVar31._8_8_;
    auVar45._0_8_ = 2;
    auVar14._4_4_ = fVar51 * 6.1035156e-05;
    auVar14._0_4_ = (float)(DAT_0044e750 * 0x10 + iVar23) * 6.1035156e-05;
    uVar26 = DAT_0044e768 << 4;
    auVar14._8_8_ = in_t1_udw;
    auVar31 = _pcpyld(auVar45,auVar14);
    uVar30 = DAT_0044e76c << 0x14;
    puVar50[0x3c] = auVar31._0_4_;
    puVar50[0x3d] = auVar31._4_4_;
    puVar50[0x3e] = auVar31._8_4_;
    puVar50[0x3f] = auVar31._12_4_;
    auVar46._8_8_ = auVar31._8_8_;
    auVar46._0_8_ = 5;
    auVar15._8_8_ = in_t1_udw;
    auVar15._0_8_ = (long)(int)(uVar30 | uVar26);
    auVar31 = _pcpyld(auVar46,auVar15);
    puVar50[0x40] = auVar31._0_4_;
    puVar50[0x41] = auVar31._4_4_;
    puVar50[0x42] = auVar31._8_4_;
    puVar50[0x43] = auVar31._12_4_;
    auVar47._8_8_ = auVar31._8_8_;
    auVar47._0_8_ = 0x18;
    auVar16._8_8_ = in_t1_udw;
    auVar16._0_8_ = uGpffff87f0;
    auVar31 = _pcpyld(auVar47,auVar16);
    puVar50[0x44] = auVar31._0_4_;
    puVar50[0x45] = auVar31._4_4_;
    puVar50[0x46] = auVar31._8_4_;
    puVar50[0x47] = auVar31._12_4_;
    auVar48._8_8_ = auVar31._8_8_;
    auVar48._0_8_ = 0x4c;
    uStack_130 = uStack_130 + 1;
    auVar17._8_8_ = in_t1_udw;
    auVar17._0_8_ = *(undefined8 *)(param_1 + 0x60);
    auVar31 = _pcpyld(auVar48,auVar17);
    puVar50[0x48] = auVar31._0_4_;
    puVar50[0x49] = auVar31._4_4_;
    puVar50[0x4a] = auVar31._8_4_;
    puVar50[0x4b] = auVar31._12_4_;
    auVar49._8_8_ = auVar31._8_8_;
    auVar49._0_8_ = 0x4e;
    auVar18._8_8_ = in_t1_udw;
    auVar18._0_8_ = *(undefined8 *)(param_1 + 0x70);
    in_t0_qw = _pcpyld(auVar49,auVar18);
    puVar50[0x4c] = in_t0_qw._0_4_;
    puVar50[0x4d] = in_t0_qw._4_4_;
    puVar50[0x4e] = in_t0_qw._8_4_;
    puVar50[0x4f] = in_t0_qw._12_4_;
    FUN_003680a0(puVar50,(undefined *)((int)puVar50 + 0x1bf));
    if (3 < uStack_130) {
      *(undefined **)(param_1 + 0x3cc) = &DAT_0044e500;
      *(undefined **)(param_1 + 0x3c0) = &DAT_0044e140;
      *(undefined **)(param_1 + 0x3c4) = &DAT_0044e280;
      *(undefined **)(param_1 + 0x3c8) = &DAT_0044e3c0;
      return;
    }
  } while( true );
}


// ==== FUN_002bddc8 @ 002bddc8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002bddc8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_0044e782 != '\0') goto LAB_002bde58;
  if (((DAT_0044e76c == 0xe0) || (DAT_0044e76c == 0x1c0)) || (DAT_0044e76c == 0x100)) {
LAB_002bde1c:
    if (DAT_0044e76c != 0x1e0) {
      if ((DAT_0044e76c == 0x100) || (DAT_0044e782 = '\x02', DAT_0044e76c == 0x200)) {
        DAT_0044e782 = '\x03';
      }
      goto LAB_002bde58;
    }
  }
  else if (DAT_0044e76c != 0x1e0) {
    if (DAT_0044e76c != 0x200) {
      return 0;
    }
    goto LAB_002bde1c;
  }
  DAT_0044e782 = 'P';
LAB_002bde58:
  if ((((DAT_0044e782 == '\x02') || (DAT_0044e782 == 'P')) || (DAT_0044e782 == '\x03')) &&
     ((((((DAT_0044e783 == '\0' || (_DAT_0044e780 == 0x202)) && (DAT_0044e780 - 1 < 2)) &&
        (DAT_0044e781 - 1 < 2)) && ((DAT_0044e758 == 0x10 || (DAT_0044e758 == 0x20)))) &&
      ((DAT_0044e770 == 0x10 || (DAT_0044e770 == 0x20)))))) {
    if (DAT_0044e758 == 0x10) {
      uVar4 = DAT_0044e754 + 0x3fU & 0xffffffc0;
    }
    else {
      uVar4 = DAT_0044e754 + 0x1fU & 0xffffffe0;
    }
    iVar2 = (DAT_0044e750 + 0x3fU & 0xffffffc0) * uVar4;
    if (DAT_0044e758 == 0x10) {
      uVar4 = iVar2 * 2;
    }
    else {
      uVar4 = iVar2 * 4;
    }
    if (DAT_0044e770 == 0x10) {
      uVar3 = DAT_0044e76c + 0x3fU & 0xffffffc0;
    }
    else {
      uVar3 = DAT_0044e76c + 0x1fU & 0xffffffe0;
    }
    iVar2 = (DAT_0044e768 + 0x3fU & 0xffffffc0) * uVar3;
    if (DAT_0044e770 == 0x10) {
      uVar3 = iVar2 * 2;
    }
    else {
      uVar3 = iVar2 * 4;
    }
    if (iGpffff884c == 0x10) {
      uVar1 = DAT_0044e754 + 0x3fU & 0xffffffc0;
    }
    else {
      uVar1 = DAT_0044e754 + 0x1fU & 0xffffffe0;
    }
    iVar2 = (DAT_0044e750 + 0x3fU & 0xffffffc0) * uVar1;
    if (iGpffff884c == 0x10) {
      iVar2 = iVar2 * 2;
    }
    else {
      iVar2 = iVar2 * 4;
    }
    if ((DAT_0044e783 == '\0') || (uVar3 <= uVar4)) {
      if (DAT_0044e760._4_4_ == 0) {
        DAT_0044e760._4_4_ = 0x500;
        if (DAT_0044e758 == 0x10) {
          DAT_0044e760._4_4_ = 0x100;
        }
      }
      else {
        if ((DAT_0044e758 == 0x10) && (DAT_0044e760._4_4_ != 0x100)) {
          return 0;
        }
        if ((DAT_0044e758 == 0x20) && (DAT_0044e760._4_4_ != 0x500)) {
          return 0;
        }
      }
      if (DAT_0044e778._4_4_ == 0) {
        DAT_0044e778._4_4_ = 0x500;
        if (DAT_0044e770 == 0x10) {
          DAT_0044e778._4_4_ = 0x100;
        }
      }
      else {
        if ((DAT_0044e770 == 0x10) && (DAT_0044e778._4_4_ != 0x100)) {
          return 0;
        }
        if ((DAT_0044e770 == 0x20) && (DAT_0044e778._4_4_ != 0x500)) {
          return 0;
        }
      }
      if (DAT_0044e783 == '\0') {
        if ((undefined *)(uVar3 * DAT_0044e781 + uVar4 * DAT_0044e780 + iVar2) < &UNK_00400001) {
          return 1;
        }
      }
      else if ((undefined *)(uVar4 * DAT_0044e780 + iVar2) < &UNK_00400001) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_002be120 @ 002be120 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_002be120(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong in_v1_udw;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  DAT_0044e680 = 0xc000000000008001;
  DAT_0044e688 = DAT_0044e688 & 0xffff000000000000 | 0xeeeeeeeeeeee;
  DAT_0044e698 = 0x42;
  DAT_0044e6a0 = 0x100000;
  DAT_0044e6a8 = 0x4c;
  DAT_0044e6b8 = 0x1a;
  DAT_0044e6c0 = 0x3ff000003ff0000;
  DAT_0044e6c8 = 0x40;
  DAT_0044e6d0 = 0x30000;
  DAT_0044e6d8 = 0x47;
  DAT_0044e6e8 = 0x18;
  DAT_0044e6f0 = 0x10a000100;
  DAT_0044e6f8 = 0x4e;
  DAT_0044e700 = 6;
  DAT_0044e738 = 1;
  DAT_0044e740 = 0x3fff3fff;
  DAT_0044e748 = 5;
  DAT_0044e690 = 0;
  DAT_0044e6b0 = 1;
  DAT_0044e6e0 = 0;
  DAT_0044e708 = 0;
  DAT_0044e710 = 0;
  DAT_0044e718 = 1;
  DAT_0044e720 = 0;
  DAT_0044e728 = 5;
  DAT_0044e730 = 0;
  FUN_003680a0(0x44e680,0x44e7cf);
  FUN_002d11d0();
  FUN_0029b2c8(0);
  if (iGpffff8eb8 != -1) {
    iVar9 = iGpffff8eb8 * 0x18;
    _DAT_0044e750 = *(undefined8 *)(&DAT_003c33a0 + iVar9);
    _DAT_0044e758 = *(ulong *)(&DAT_003c33a8 + iVar9);
    DAT_0044e760 = *(undefined8 *)(&DAT_003c33b0 + iVar9);
    _DAT_0044e768 = *(undefined8 *)(&DAT_003c33a0 + iVar9);
    _DAT_0044e770 = *(ulong *)(&DAT_003c33a8 + iVar9);
    DAT_0044e778 = *(undefined8 *)(&DAT_003c33b0 + iVar9);
    if ((_DAT_0044e770 & 0x10000000000) == 0) {
      DAT_0044e783 = '\x01';
      DAT_0044e781 = '\x02';
      DAT_0044e780 = '\x02';
    }
    else {
      DAT_0044e781 = '\x01';
      DAT_0044e780 = '\x01';
      if (iGpffff8850 == 0) {
        iGpffff8850 = DAT_0044e768;
      }
      _DAT_0044e768 = CONCAT44((int)((long)_DAT_0044e768 >> 0x21),iGpffff8850);
      DAT_0044e783 = '\0';
    }
    DAT_0044e782 = '\0';
  }
  lVar2 = FUN_002bddc8();
  if (lVar2 == 0) {
    return 0;
  }
  puGpffff87b0 = &DAT_0044e750;
  if (DAT_0044e782 == 'P') {
    uVar6 = 0;
    cVar7 = 'P';
  }
  else {
    if ((_DAT_0044e770 & 0x400000000) == 0) {
      if ((_DAT_0044e770 & 0x200000000) != 0) {
        FUN_0029b360(0,1,DAT_0044e782,0);
        goto LAB_002be5b4;
      }
      if ((_DAT_0044e770 & 0x10000000000) == 0) {
        FUN_0029b360(0,0,DAT_0044e782,1);
        goto LAB_002be5b4;
      }
    }
    uVar6 = 1;
    cVar7 = DAT_0044e782;
  }
  FUN_0029b360(0,uVar6,cVar7,1);
LAB_002be5b4:
  uVar6 = FUN_0029c210(2);
  FUN_0029c560(uVar6,0x44e680,0xd);
  do {
    lVar2 = FUN_00371c00(1,0);
  } while (lVar2 != 0);
  REG_DMAC_STAT = 4;
  uVar10 = 10;
  uVar6 = 0;
  if (DAT_0044e770 == 0x10) {
    uVar6 = uVar10;
  }
  FUN_00371d38(0x44dd30,uVar6,(undefined2)DAT_0044e768,(undefined2)DAT_0044e76c,0,0);
  uVar11 = 0x3a;
  uVar6 = 0;
  if (DAT_0044e770 == 0x10) {
    uVar6 = uVar10;
  }
  uVar12 = 0x31;
  FUN_00371d38(0x44dd58,uVar6,(undefined2)DAT_0044e768,(undefined2)DAT_0044e76c,0,0);
  uVar6 = 0;
  if (DAT_0044e758 == 0x10) {
    uVar6 = uVar10;
  }
  uVar8 = 0x31;
  if (iGpffff884c == 0x10) {
    uVar8 = uVar11;
  }
  FUN_00372170(0x44dd90,uVar6,(undefined2)DAT_0044e750,(undefined2)DAT_0044e754,2,uVar8);
  uVar6 = 0;
  if (DAT_0044e758 == 0x10) {
    uVar6 = uVar10;
  }
  uVar8 = uVar11;
  if (iGpffff884c != 0x10) {
    uVar8 = uVar12;
  }
  FUN_00372b28(0x44de10,uVar6,(undefined2)DAT_0044e750,(undefined2)DAT_0044e754,2,uVar8);
  uVar6 = 0;
  if (DAT_0044e758 == 0x10) {
    uVar6 = uVar10;
  }
  uVar8 = uVar11;
  if (iGpffff884c != 0x10) {
    uVar8 = uVar12;
  }
  FUN_00372170(0x44df00,uVar6,(undefined2)DAT_0044e750,(undefined2)DAT_0044e754,2,uVar8);
  uVar6 = 0;
  if (DAT_0044e758 == 0x10) {
    uVar6 = uVar10;
  }
  if (iGpffff884c != 0x10) {
    uVar11 = uVar12;
  }
  FUN_00372b28(0x44df80,uVar6,(undefined2)DAT_0044e750,(undefined2)DAT_0044e754,2,uVar11);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = in_v1_udw;
  auVar5 = _pcpyld(auVar5 << 0x40,auVar5 << 0x40);
  DAT_0044dd80 = auVar5._0_8_;
  DAT_0044dd88 = auVar5._8_8_;
  DAT_0044def0 = DAT_0044dd80 & 0xfffffffffff8000 | 0x1000000000008010;
  _DAT_0044def8 = DAT_0044dd88 & 0xfffffffffffffff0 | 0xe;
  DAT_0044dd80 = DAT_0044dd80 & 0xfffffffffff8000 | 0x1000000000008010;
  DAT_0044dd88 = DAT_0044dd88 & 0xfffffffffffffff0 | 0xe;
  if (DAT_0044e783 == '\0') {
    if (DAT_0044e770 == 0x10) {
      uVar1 = DAT_0044e76c + 0x3fU & 0xffffffc0;
    }
    else {
      uVar1 = DAT_0044e76c + 0x1fU & 0xffffffe0;
    }
    uVar1 = (DAT_0044e768 + 0x3fU & 0xffffffc0) * uVar1;
    if (DAT_0044e770 == 0x10) {
      uVar1 = uVar1 >> 1;
    }
    uVar3 = (ulong)(int)(uVar1 >> 0xb);
    if (DAT_0044e781 == '\x02') {
      uVar4 = uVar3 & 0x1ff;
      uVar3 = (ulong)(int)((uVar1 >> 0xb) << 1);
      DAT_0044dd68 = DAT_0044dd68 & 0xfffffffffffffe00 | uVar4;
    }
    DAT_0044df00 = DAT_0044df00 & 0xfffffffffffffe00 | uVar3 & 0x1ff;
    DAT_0044df80 = DAT_0044df80 & 0xfffffffffffffe00 | uVar3 & 0x1ff;
    if (DAT_0044e758 == 0x10) {
      uVar1 = DAT_0044e754 + 0x3fU & 0xffffffc0;
    }
    else {
      uVar1 = DAT_0044e754 + 0x1fU & 0xffffffe0;
    }
    uVar1 = (DAT_0044e750 + 0x3fU & 0xffffffc0) * uVar1;
    if (DAT_0044e758 == 0x10) {
      uVar1 = uVar1 >> 1;
    }
    if (DAT_0044e780 == '\x02') {
      uVar3 = (long)(int)((int)uVar3 + (uVar1 >> 0xb));
    }
    DAT_0044de10 = DAT_0044de10 & 0xfffffffffffffe00 | uVar3 & 0x1ff;
    DAT_0044dd90 = DAT_0044dd90 & 0xfffffffffffffe00 | uVar3 & 0x1ff;
    iVar9 = (int)uVar3 + (uVar1 >> 0xb);
  }
  else {
    if (DAT_0044e758 == 0x10) {
      uVar1 = DAT_0044e754 + 0x3fU & 0xffffffc0;
    }
    else {
      uVar1 = DAT_0044e754 + 0x1fU & 0xffffffe0;
    }
    uVar1 = (DAT_0044e750 + 0x3fU & 0xffffffc0) * uVar1;
    if (DAT_0044e758 == 0x10) {
      uVar1 = uVar1 >> 1;
    }
    uVar3 = (long)(int)(uVar1 >> 0xb) & 0x1ff;
    DAT_0044de10 = DAT_0044de10 & 0xfffffffffffffe00 | uVar3;
    DAT_0044dd68 = DAT_0044dd68 & 0xfffffffffffffe00 | uVar3;
    DAT_0044dd90 = DAT_0044dd90 & 0xfffffffffffffe00 | uVar3;
    iVar9 = (uVar1 >> 0xb) << 1;
  }
  uVar3 = (long)iVar9 & 0x1ff;
  DAT_0044dda0 = DAT_0044dda0 & 0xfffffffffffffe00 | uVar3;
  DAT_0044df90 = DAT_0044df90 & 0xfffffffffffffe00 | uVar3;
  DAT_0044de20 = DAT_0044de20 & 0xfffffffffffffe00 | uVar3;
  DAT_0044df10 = DAT_0044df10 & 0xfffffffffffffe00 | uVar3;
  if (iGpffff884c == 0x10) {
    uVar1 = DAT_0044e754 + 0x3fU & 0xffffffc0;
  }
  else {
    uVar1 = DAT_0044e754 + 0x1fU & 0xffffffe0;
  }
  uVar1 = (DAT_0044e750 + 0x3fU & 0xffffffc0) * uVar1;
  if (iGpffff884c == 0x10) {
    uVar1 = uVar1 >> 1;
  }
  iGpffff8ecc = (iVar9 + (uVar1 >> 0xb)) * 0x800;
  if ((_DAT_0044e770 & 0x200000000) != 0) {
    if ((_DAT_0044e770 & 0x20000000000) != 0) {
      DAT_0044e068 = DAT_0044dd48;
      DAT_0044e060 = DAT_0044dd40;
      DAT_0044e078 = DAT_0044dd70;
      DAT_0044e070 = DAT_0044dd68;
      DAT_0044dd58._0_2_ = CONCAT11(0x80,(undefined1)DAT_0044dd58);
      DAT_0044dd30._0_2_ = CONCAT11(0x80,(undefined1)DAT_0044dd30);
      DAT_0044dd58 = DAT_0044dd58 | 3;
      DAT_0044dd48 = DAT_0044dd48 & 0xff800fffffffffff |
                     ((long)(int)(((uint)(DAT_0044dd48 >> 0x2c) & 0x7ff) - 1) & 0x7ffU) << 0x2c;
      DAT_0044dd40 = DAT_0044dd40 & 0xffc007ffffffffff | 0x80000000000;
      DAT_0044dd30 = DAT_0044dd30 | 3;
      DAT_0044dd68 = DAT_0044dd68 & 0xffc007ffffffffff | 0x80000000000;
      DAT_0044dd70 = DAT_0044dd70 & 0xff800fffffffffff |
                     ((long)(int)(((uint)(DAT_0044dd70 >> 0x2c) & 0x7ff) - 1) & 0x7ffU) << 0x2c;
    }
    FUN_003680a0(0x44dd30,0x44e17f);
  }
  FUN_002ccc48(iGpffff8ecc,0x100000 - iGpffff8ecc);
  uGpffff87b4 = 1;
  uGpffff8854 = 0;
  uGpffff87d4 = 0;
  uVar6 = FUN_0029c210(1);
  FUN_0029c4f8(uVar6,0x3f2160);
  do {
    lVar2 = FUN_00371c00(1,0);
  } while (lVar2 != 0);
  REG_DMAC_STAT = 2;
  DAT_0044de00 = DAT_0044de00 | 0x140b;
  DAT_0044df70 = DAT_0044df70 | 0x140b;
  DAT_0044df20 = DAT_0044ddb0;
  DAT_0044e080 = DAT_0044dd30;
  DAT_0044e088 = DAT_0044dd38;
  DAT_0044e090 = DAT_0044dd40;
  DAT_0044e098 = DAT_0044dd48;
  DAT_0044e0a0 = DAT_0044dd50;
  DAT_0044e0a8 = DAT_0044dd58;
  DAT_0044e0b0 = DAT_0044dd60;
  DAT_0044e0b8 = DAT_0044dd68;
  DAT_0044e0c0 = DAT_0044dd70;
  DAT_0044e0c8 = DAT_0044dd78;
  DAT_0044e0d0 = DAT_0044e060;
  DAT_0044e0d8 = DAT_0044e068;
  DAT_0044e0e0 = DAT_0044e070;
  DAT_0044e0e8 = DAT_0044e078;
  FUN_003680a0(0x44dd30,0x44e17f);
  uGpffff8834 = 1;
  FUN_00372d08(0x44dd30,0);
  do {
    lVar2 = FUN_00371c00(1,0);
  } while (lVar2 != 0);
  REG_DMAC_STAT = 4;
  DAT_0044e0fc = 0;
  DAT_0044e0f8 = 0;
  DAT_0044e0f4 = 0;
  DAT_0044e0f0 = 0;
  lVar2 = FUN_002b4a90();
  if (lVar2 == 0) {
    FUN_002ccd48();
  }
  else {
    uGpffff87f0 = DAT_0044ddb0 & 0xfffffff7ffffffff;
    uGpffff8840 = (long)DAT_0044ddb0 >> 0x24 & 0xfff;
    uGpffff8838 = (long)uGpffff87f0 >> 4 & 0xfff;
    uGpffff87e0 = DAT_0044dd90;
    uGpffff87d8 = DAT_0044dda0;
    uGpffff87e8 = DAT_0044de00;
    uGpffff8ef0 = 1;
    FUN_002bd010();
    uGpffff8e0c = (_DAT_0044e758 & 0x400000000) != 0;
    if ((_DAT_0044e770 & 0x10000000000) != 0) {
      FUN_002bd6a0(0x44dd30);
    }
    uGpffff8ec0 = 1;
  }
  return lVar2;
}


// ==== FUN_002bee30 @ 002bee30 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_002bee30(undefined8 param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  
  uVar8 = DAT_0044e760;
  uVar6 = _DAT_0044e758;
  switch(param_1) {
  case 0:
    uVar4 = FUN_002bd2c0();
    break;
  case 2:
    uVar4 = FUN_002be120();
    break;
  case 3:
    FUN_002b4f68();
    DAT_0044e0f0 = 0;
    DAT_0044e0fc = 0;
    DAT_0044e0f8 = 0;
    DAT_0044e0f4 = 0;
    FUN_002ccd48();
    uGpffff8ec0 = 0;
    uGpffff87b8 = 1;
    uGpffff87b4 = 0;
    uVar4 = 1;
    break;
  case 4:
    puVar3 = (undefined8 *)FUN_002bfe58();
    uVar6 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    *(undefined8 *)param_2 = *puVar3;
    *(undefined8 *)(param_2 + 2) = uVar6;
    *(undefined8 *)(param_2 + 4) = uVar8;
    *(undefined8 *)(param_2 + 6) = uVar9;
    uVar6 = puVar3[5];
    uVar8 = puVar3[6];
    *(undefined8 *)(param_2 + 8) = puVar3[4];
    *(undefined8 *)(param_2 + 10) = uVar6;
    *(undefined8 *)(param_2 + 0xc) = uVar8;
    uGpffff8e94 = param_3;
    uVar4 = 1;
    break;
  case 5:
    iVar5 = 0x5a;
    goto LAB_002bf038;
  case 6:
    uVar4 = (uint)(param_4 + 1U < 0x5b);
    if (uVar4 != 0) {
      if (param_4 < 0) {
        *(undefined8 *)param_2 = _DAT_0044e750;
        *(undefined8 *)(param_2 + 2) = uVar6;
        *(undefined8 *)(param_2 + 4) = uVar8;
      }
      else {
        param_4 = param_4 * 0x18;
        uVar6 = *(undefined8 *)(&DAT_003c33a8 + param_4);
        uVar8 = *(undefined8 *)(&DAT_003c33b0 + param_4);
        *(undefined8 *)param_2 = *(undefined8 *)(&DAT_003c33a0 + param_4);
        *(undefined8 *)(param_2 + 2) = uVar6;
        *(undefined8 *)(param_2 + 4) = uVar8;
      }
    }
    break;
  case 7:
    uVar4 = FUN_002bd188(param_4);
    break;
  case 10:
    iVar5 = iGpffff8eb8;
    goto LAB_002bf038;
  case 0xb:
    piVar10 = &DAT_003c3ca0;
    if (0 < param_4) {
      uVar4 = -param_4 & 3;
      piVar7 = param_2;
      iVar5 = param_4;
      if (uVar4 != 0) {
        if (uVar4 < 3) {
          if (uVar4 < 2) {
            *param_2 = (int)&LAB_002c05f0;
            piVar7 = param_2 + 1;
            iVar5 = param_4 + -1;
            *piVar7 = (int)&LAB_002c05f0;
          }
          else {
            *param_2 = (int)&LAB_002c05f0;
          }
          iVar5 = iVar5 + -1;
          piVar7 = piVar7 + 1;
        }
        *piVar7 = (int)&LAB_002c05f0;
        iVar5 = iVar5 + -1;
        piVar7 = piVar7 + 1;
        if (iVar5 == 0) goto LAB_002bf0ec;
      }
      do {
        *piVar7 = (int)&LAB_002c05f0;
        iVar5 = iVar5 + -4;
        piVar7[1] = (int)&LAB_002c05f0;
        piVar7[2] = (int)&LAB_002c05f0;
        piVar7[3] = (int)&LAB_002c05f0;
        piVar7 = piVar7 + 4;
      } while (iVar5 != 0);
    }
LAB_002bf0ec:
    iVar5 = 0x1b;
    do {
      iVar2 = *piVar10;
      if ((iVar2 < param_4) && (-1 < iVar2)) {
        param_2[iVar2] = piVar10[1];
      }
      piVar10 = piVar10 + 2;
      bVar1 = iVar5 != 0;
      iVar5 = iVar5 + -1;
    } while (bVar1);
    uVar4 = 1;
    break;
  case 0xc:
    uVar4 = uGpffff8ec0;
    if (uGpffff8ec0 != 0) {
      *param_2 = (0x100000 - iGpffff8ecc) * 4;
    }
    break;
  default:
    uVar4 = 0;
    break;
  case 0x11:
    uVar4 = FUN_002bd5b0();
    break;
  case 0x12:
    FUN_002c65e0();
    FUN_002bfe68();
    FUN_002cb240();
  case 1:
  case 8:
  case 9:
    uVar4 = 1;
    break;
  case 0x13:
    iVar5 = 0x400;
LAB_002bf038:
    *param_2 = iVar5;
    uVar4 = 1;
    break;
  case 0x16:
    *(undefined2 *)param_2 = 6;
    uVar4 = 1;
  }
  return uVar4;
}


// ==== FUN_002bf168 @ 002bf168 ====

void FUN_002bf168(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((uGpffff8834 & 1) == 0) {
    piVar2 = &DAT_0044e7b8;
    piVar4 = &DAT_0044e798;
  }
  else {
    piVar2 = &DAT_0044e7a8;
    piVar4 = &DAT_0044e788;
  }
  if (iGpffff8818 != 0) {
    iVar3 = iGpffff8818 + iGpffff8e98;
    if (*(undefined4 **)(iVar3 + 0x58) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar3 + 0x58) = 0;
      *(undefined4 *)(iVar3 + 0x58) = 0;
    }
    *piVar2 = iGpffff8818;
    *(int **)(iVar3 + 0x58) = piVar2;
    uVar1 = piVar2[1];
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffffc000 | uVar1 >> 6 & 0x3fff;
    *(uint *)(iVar3 + 0xc) =
         *(uint *)(iVar3 + 0xc) & 0xfff8001f | ((uVar1 >> 6) + *(int *)(iVar3 + 0x10) & 0x3fff) << 5
    ;
  }
  if (iGpffff881c != 0) {
    iVar3 = iGpffff881c + iGpffff8e98;
    if (*(undefined4 **)(iVar3 + 0x58) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar3 + 0x58) = 0;
      *(undefined4 *)(iVar3 + 0x58) = 0;
    }
    *piVar4 = iGpffff881c;
    *(int **)(iVar3 + 0x58) = piVar4;
    uVar1 = piVar4[1];
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffffc000 | uVar1 >> 6 & 0x3fff;
    *(uint *)(iVar3 + 0xc) =
         *(uint *)(iVar3 + 0xc) & 0xfff8001f | ((uVar1 >> 6) + *(int *)(iVar3 + 0x10) & 0x3fff) << 5
    ;
  }
  return;
}


// ==== FUN_002bf298 @ 002bf298 ====

undefined8 FUN_002bf298(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = FUN_002ac468(DAT_0044e750,DAT_0044e754,DAT_0044e758,DAT_0044e760._4_4_ | 2);
  uVar4 = 0xffffffff;
  iVar7 = (int)uVar1;
  uVar2 = *(uint *)(iVar7 + 0xc);
  *(undefined1 *)(iVar7 + 0x20) = 0x85;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar4 = uVar4 + 1;
  }
  uVar2 = *(uint *)(iVar7 + 0xc) & (1 << (uVar4 & 0x1f)) - 1U;
  if (uVar2 != 0) {
    *(uint *)(iVar7 + 0xc) = (*(uint *)(iVar7 + 0xc) - uVar2) * 2;
  }
  uVar3 = 0xffffffff;
  uVar2 = *(uint *)(iVar7 + 0x10);
  for (uVar4 = uVar2; uVar4 != 0; uVar4 = uVar4 >> 1) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = uVar2 & (1 << (uVar3 & 0x1f)) - 1U;
  if (uVar4 != 0) {
    *(uint *)(iVar7 + 0x10) = (uVar2 - uVar4) * 2;
  }
  iVar6 = iVar7 + iGpffff8e98;
  *(uint *)(iVar6 + 8) =
       ((uint)((ulong)uGpffff87e0 >> 0x10) & 0x3f) << 0xe |
       ((uint)((ulong)uGpffff87e0 >> 0x18) & 0x3f) << 0x14;
  uVar4 = 0xffffffff;
  for (uVar2 = *(uint *)(iVar7 + 0xc); uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar4 = uVar4 + 1;
  }
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | (uVar4 & 0xf) << 0x1a;
  iVar5 = -1;
  for (uVar2 = *(uint *)(iVar7 + 0x10); uVar2 != 0; uVar2 = uVar2 >> 1) {
    iVar5 = iVar5 + 1;
  }
  *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | iVar5 << 0x1e;
  uVar4 = 0xffffffff;
  for (uVar2 = *(uint *)(iVar7 + 0x10); uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar4 = uVar4 + 1;
  }
  *(undefined1 *)(iVar6 + 0x17) = 1;
  *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) | (int)(uVar4 & 0xf) >> 2;
  *(undefined1 *)(iVar6 + 0x16) = 0;
  return uVar1;
}


// ==== FUN_002bf478 @ 002bf478 ====

undefined8 FUN_002bf478(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uGpffff87bc = 1;
  uVar1 = FUN_002ac468(DAT_0044e768,DAT_0044e76c,DAT_0044e770,DAT_0044e778._4_4_ | 2);
  iVar7 = (int)uVar1;
  uVar2 = *(uint *)(iVar7 + 0xc);
  *(undefined1 *)(iVar7 + 0x20) = 0x85;
  uVar4 = 0xffffffff;
  uGpffff87bc = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar4 = uVar4 + 1;
  }
  uVar2 = *(uint *)(iVar7 + 0xc) & (1 << (uVar4 & 0x1f)) - 1U;
  if (uVar2 != 0) {
    *(uint *)(iVar7 + 0xc) = (*(uint *)(iVar7 + 0xc) - uVar2) * 2;
  }
  uVar3 = 0xffffffff;
  uVar2 = *(uint *)(iVar7 + 0x10);
  for (uVar4 = uVar2; uVar4 != 0; uVar4 = uVar4 >> 1) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = uVar2 & (1 << (uVar3 & 0x1f)) - 1U;
  if (uVar4 != 0) {
    *(uint *)(iVar7 + 0x10) = (uVar2 - uVar4) * 2;
  }
  uVar4 = 0xffffffff;
  uVar2 = *(uint *)(iVar7 + 0xc);
  iVar6 = iVar7 + iGpffff8e98;
  *(undefined4 *)(iVar6 + 8) = 0;
  uVar3 = ((uint)(DAT_0044dd40 >> 9) & 0x3f) << 0xe;
  *(uint *)(iVar6 + 8) = uVar3;
  *(uint *)(iVar6 + 8) = uVar3 | ((uint)(DAT_0044dd40 >> 0xf) & 0x1f) << 0x14;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar4 = uVar4 + 1;
  }
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | (uVar4 & 0xf) << 0x1a;
  iVar5 = -1;
  for (uVar2 = *(uint *)(iVar7 + 0x10); uVar2 != 0; uVar2 = uVar2 >> 1) {
    iVar5 = iVar5 + 1;
  }
  *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | iVar5 << 0x1e;
  uVar4 = 0xffffffff;
  for (uVar2 = *(uint *)(iVar7 + 0x10); uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar4 = uVar4 + 1;
  }
  *(undefined1 *)(iVar6 + 0x17) = 1;
  *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) | (int)(uVar4 & 0xf) >> 2;
  *(undefined1 *)(iVar6 + 0x16) = 0;
  return uVar1;
}


// ==== FUN_002bf670 @ 002bf670 ====

bool FUN_002bf670(void)

{
  bool bVar1;
  
  bVar1 = iGpffff8ec0 != 0;
  if (bVar1) {
    DAT_0044e78c = ((uint)DAT_0044dd90 & 0x1ff) << 0xb;
    DAT_0044e7ac = ((uint)DAT_0044dd40 & 0x1ff) << 0xb;
    DAT_0044e79c = ((uint)DAT_0044df00 & 0x1ff) << 0xb;
    DAT_0044e7bc = ((uint)DAT_0044dd68 & 0x1ff) << 0xb;
    DAT_0044e788 = 0;
    DAT_0044e798 = 0;
    DAT_0044e7a8 = 0;
    DAT_0044e7b8 = 0;
    uGpffff881c = FUN_002bf298();
    uGpffff8818 = FUN_002bf478();
    FUN_002bf168();
  }
  return bVar1;
}


// ==== FUN_002bf748 @ 002bf748 ====

void FUN_002bf748(int param_1)

{
  undefined4 uVar1;
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
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  ulong in_v0_udw;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 in_a3_udw;
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulong in_t0_udw;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  int iVar54;
  ulong uVar55;
  int iVar56;
  
  iVar54 = param_1 + iGpffff8e98;
  uVar23 = (uint)(*(byte *)(iVar54 + 0x16) >> 2);
  if (uVar23 != 0) {
    uVar53 = *(uint *)(param_1 + 0xc);
    uVar55 = (ulong)*(uint *)(iVar54 + 8) & 0x3fff;
    iVar56 = 0;
    uVar55 = CONCAT44((int)((uVar55 << 0x14) >> 0x20),(uint)uVar55 | (uint)(uVar55 << 0x14)) |
             uVar55 << 0x28;
    do {
      if (uVar53 < 0x41) break;
      uVar20 = uVar53 >> 6;
      uVar23 = uVar23 - 1;
      uVar53 = uVar53 >> 1;
      iVar56 = iVar56 + (uVar20 - 1) * 4;
    } while (uVar23 != 0);
    FUN_002b3d88(0xffffffff80000000,(uint)(*(byte *)(iVar54 + 0x16) >> 2) * 9 + iVar56 + 9);
    auVar30._8_8_ = in_a3_udw;
    auVar30._0_8_ = 0xe;
    auVar31._8_8_ = in_t0_udw;
    auVar31._0_8_ =
         (long)(int)((uint)(*(byte *)(iVar54 + 0x16) >> 2) * 9 + iVar56 + 8) | 0x108b400000008000;
    auVar31 = _pcpyld(auVar30,auVar31);
    *puGpffff8e00 = auVar31._0_4_;
    puGpffff8e00[1] = auVar31._4_4_;
    puGpffff8e00[2] = auVar31._8_4_;
    puGpffff8e00[3] = auVar31._12_4_;
    auVar32._8_8_ = auVar31._8_8_;
    auVar32._0_8_ = 0x14;
    auVar2._8_8_ = in_t0_udw;
    auVar2._0_8_ = 0x60;
    auVar31 = _pcpyld(auVar32,auVar2);
    puGpffff8e00[4] = auVar31._0_4_;
    puGpffff8e00[5] = auVar31._4_4_;
    puGpffff8e00[6] = auVar31._8_4_;
    puGpffff8e00[7] = auVar31._12_4_;
    auVar33._8_8_ = auVar31._8_8_;
    auVar33._0_8_ = 0x47;
    auVar3._8_8_ = in_t0_udw;
    auVar3._0_8_ = 0x30000;
    auVar31 = _pcpyld(auVar33,auVar3);
    puGpffff8e00[8] = auVar31._0_4_;
    puGpffff8e00[9] = auVar31._4_4_;
    puGpffff8e00[10] = auVar31._8_4_;
    puGpffff8e00[0xb] = auVar31._12_4_;
    auVar34._8_8_ = auVar31._8_8_;
    auVar34._0_8_ = 0x4e;
    auVar4._8_8_ = in_t0_udw;
    auVar4._0_8_ = uGpffff87d8 | 0x100000000;
    auVar31 = _pcpyld(auVar34,auVar4);
    puGpffff8e00[0xc] = auVar31._0_4_;
    puGpffff8e00[0xd] = auVar31._4_4_;
    puGpffff8e00[0xe] = auVar31._8_4_;
    puGpffff8e00[0xf] = auVar31._12_4_;
    auVar35._8_8_ = auVar31._8_8_;
    auVar35._0_8_ = 8;
    auVar5._8_8_ = in_t0_udw;
    auVar5._0_8_ = 5;
    auVar31 = _pcpyld(auVar35,auVar5);
    puGpffff8e00[0x10] = auVar31._0_4_;
    puGpffff8e00[0x11] = auVar31._4_4_;
    puGpffff8e00[0x12] = auVar31._8_4_;
    puGpffff8e00[0x13] = auVar31._12_4_;
    auVar36._8_8_ = auVar31._8_8_;
    auVar36._0_8_ = 0x18;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = in_t0_udw;
    auVar37 = _pcpyld(auVar36,auVar18 << 0x40);
    puGpffff8e00[0x14] = auVar37._0_4_;
    puGpffff8e00[0x15] = auVar37._4_4_;
    puGpffff8e00[0x16] = auVar37._8_4_;
    puGpffff8e00[0x17] = auVar37._12_4_;
    puGpffff8e00 = puGpffff8e00 + 0x18;
    uVar23 = 0;
    if (*(byte *)(iVar54 + 0x16) >> 2 != 0) {
      uVar21 = *(undefined4 *)(iVar54 + 0xc);
      uVar53 = *(uint *)(param_1 + 0x10);
      uVar20 = *(uint *)(param_1 + 0xc);
      do {
        uVar1 = *(undefined4 *)(iVar54 + 8);
        uVar24 = CONCAT44(uVar21,uVar1) & 0xffffffe7ffffffff | 0x800000000;
        switch(uVar23) {
        default:
          goto switchD_002bf908_caseD_0;
        case 1:
          uVar26 = *(uint *)(iVar54 + 0x18);
          uVar24 = CONCAT44(uVar21,uVar1) & 0xffffffe7fff00000;
          uVar28 = (uint)(uVar24 >> 0x20);
          uVar50 = (uint)uVar24;
          lVar25 = -0x44000000;
          break;
        case 2:
          lVar25 = *(long *)(iVar54 + 0x18);
          lVar27 = -0x8800;
          goto LAB_002bfa04;
        case 3:
          uVar24 = CONCAT44(uVar21,uVar1) & 0xffffffe7fff00000 | 0x800000000;
          auVar17._4_8_ = auVar37._8_8_;
          auVar17._0_4_ = *(undefined4 *)(iVar54 + 0x1c);
          lVar25 = -0xcc000000;
          uVar29 = (auVar17._0_8_ << 0x20) + uVar55;
          uVar50 = (uint)(uVar29 >> 0x28) & 0xfffff;
          uVar28 = 0;
          goto LAB_002bf9c8;
        case 4:
          uVar26 = *(uint *)(iVar54 + 0x20);
          uVar24 = CONCAT44(uVar21,uVar1) & 0xffffffe7fff00000;
          uVar28 = (uint)(uVar24 >> 0x20);
          uVar50 = (uint)uVar24;
          lVar25 = -0x110000000;
          break;
        case 5:
          lVar25 = *(long *)(iVar54 + 0x20);
          lVar27 = -0x15400;
LAB_002bfa04:
          uVar24 = CONCAT44(uVar21,uVar1) & 0xffffffe7fff00000;
          auVar37._0_8_ = lVar25 + uVar55;
          uVar24 = (CONCAT44((int)(uVar24 >> 0x20),
                             (uint)uVar24 | (uint)(auVar37._0_8_ >> 0x14) & 0xfffff) | 0x800000000)
                   + lVar27 * 0x10000;
          goto switchD_002bf908_caseD_0;
        }
        uVar28 = uVar28 | 8;
        uVar29 = uVar26 + uVar55;
        uVar24 = uVar29 & 0xfffff;
LAB_002bf9c8:
        auVar37._0_8_ = uVar29;
        uVar24 = (CONCAT44(uVar28,uVar50) | uVar24) + lVar25;
switchD_002bf908_caseD_0:
        auVar38._8_8_ = auVar37._8_8_;
        auVar38._0_8_ = 6;
        auVar6._8_8_ = in_t0_udw;
        auVar6._0_8_ = uVar24;
        auVar31 = _pcpyld(auVar38,auVar6);
        *puGpffff8e00 = auVar31._0_4_;
        puGpffff8e00[1] = auVar31._4_4_;
        puGpffff8e00[2] = auVar31._8_4_;
        puGpffff8e00[3] = auVar31._12_4_;
        if (uVar23 < 6) {
          puGpffff8e00 = puGpffff8e00 + 4;
                    /* WARNING: Could not recover jumptable at 0x002bfa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&PTR_LAB_00403a20)[uVar23])();
          return;
        }
        auVar39._8_8_ = auVar31._8_8_;
        auVar39._0_8_ = 0x4c;
        auVar7._8_8_ = in_t0_udw;
        auVar7._0_8_ = (uVar24 & 0x3f00000) << 4;
        auVar31 = _pcpyld(auVar39,auVar7);
        puGpffff8e00[4] = auVar31._0_4_;
        puGpffff8e00[5] = auVar31._4_4_;
        puGpffff8e00[6] = auVar31._8_4_;
        puGpffff8e00[7] = auVar31._12_4_;
        uVar26 = uVar20 >> 1;
        uVar28 = uVar53 >> 1;
        auVar40._8_8_ = auVar31._8_8_;
        auVar40._0_8_ = 0x40;
        auVar8._8_8_ = in_t0_udw;
        auVar8._0_8_ = (ulong)CONCAT24((short)(uVar26 - 1 >> 0x10),
                                       (int)(((ulong)(uVar26 - 1) << 0x20) >> 0x10)) |
                       (long)(int)(uVar28 - 1) << 0x30;
        auVar31 = _pcpyld(auVar40,auVar8);
        puGpffff8e00[8] = auVar31._0_4_;
        puGpffff8e00[9] = auVar31._4_4_;
        puGpffff8e00[10] = auVar31._8_4_;
        puGpffff8e00[0xb] = auVar31._12_4_;
        puGpffff8e00 = puGpffff8e00 + 0xc;
        uVar50 = 0;
        uVar23 = uVar23 + 1;
        if (uVar20 != 0) {
          uVar51 = 0x40;
          if (uVar20 < 0x41) {
            uVar51 = uVar20;
          }
          uVar51 = uVar51 * 0x10 + 0x10;
          uVar52 = 0x10;
          do {
            auVar41._8_8_ = auVar31._8_8_;
            auVar41._0_8_ = 3;
            auVar9._4_4_ = 0;
            auVar9._0_4_ = uVar52 | 0x100000;
            auVar9._8_8_ = in_t0_udw;
            auVar31 = _pcpyld(auVar41,auVar9);
            *puGpffff8e00 = auVar31._0_4_;
            puGpffff8e00[1] = auVar31._4_4_;
            puGpffff8e00[2] = auVar31._8_4_;
            puGpffff8e00[3] = auVar31._12_4_;
            uVar22 = uVar50 >> 1;
            auVar42._8_8_ = auVar31._8_8_;
            auVar42._0_8_ = 5;
            auVar10._4_4_ = 0;
            auVar10._0_4_ = uVar22 * 0x10;
            auVar10._8_8_ = in_t0_udw;
            auVar31 = _pcpyld(auVar42,auVar10);
            puGpffff8e00[4] = auVar31._0_4_;
            puGpffff8e00[5] = auVar31._4_4_;
            puGpffff8e00[6] = auVar31._8_4_;
            puGpffff8e00[7] = auVar31._12_4_;
            auVar43._8_8_ = auVar31._8_8_;
            auVar43._0_8_ = 3;
            auVar11._4_4_ = 0;
            auVar11._0_4_ = uVar51 | (uVar53 + 1) * 0x100000;
            auVar11._8_8_ = in_t0_udw;
            auVar31 = _pcpyld(auVar43,auVar11);
            puGpffff8e00[8] = auVar31._0_4_;
            puGpffff8e00[9] = auVar31._4_4_;
            puGpffff8e00[10] = auVar31._8_4_;
            puGpffff8e00[0xb] = auVar31._12_4_;
            iVar56 = uVar22 + uVar26;
            if (0x3f < uVar26) {
              iVar56 = uVar22 + 0x20;
            }
            auVar12._4_4_ = 0;
            auVar12._0_4_ = iVar56 << 4 | uVar28 << 0x14;
            auVar44._8_8_ = auVar31._8_8_;
            auVar44._0_8_ = 5;
            auVar12._8_8_ = in_t0_udw;
            auVar31 = _pcpyld(auVar44,auVar12);
            puGpffff8e00[0xc] = auVar31._0_4_;
            puGpffff8e00[0xd] = auVar31._4_4_;
            puGpffff8e00[0xe] = auVar31._8_4_;
            puGpffff8e00[0xf] = auVar31._12_4_;
            puGpffff8e00 = puGpffff8e00 + 0x10;
            uVar51 = uVar51 + 0x400;
            uVar50 = uVar50 + 0x40;
            uVar52 = uVar52 + 0x400;
          } while (uVar50 < uVar20);
        }
        auVar45._8_8_ = auVar31._8_8_;
        auVar45._0_8_ = 0x3f;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = in_v0_udw;
        auVar31 = _pcpyld(auVar45,auVar19 << 0x40);
        *puGpffff8e00 = auVar31._0_4_;
        puGpffff8e00[1] = auVar31._4_4_;
        puGpffff8e00[2] = auVar31._8_4_;
        puGpffff8e00[3] = auVar31._12_4_;
        auVar46._8_8_ = auVar31._8_8_;
        auVar46._0_8_ = 0x4c;
        auVar13._8_8_ = in_t0_udw;
        auVar13._0_8_ = 0x10000;
        auVar37 = _pcpyld(auVar46,auVar13);
        puGpffff8e00[4] = auVar37._0_4_;
        puGpffff8e00[5] = auVar37._4_4_;
        puGpffff8e00[6] = auVar37._8_4_;
        puGpffff8e00[7] = auVar37._12_4_;
        puGpffff8e00 = puGpffff8e00 + 8;
        if ((int)(uint)(*(byte *)(iVar54 + 0x16) >> 2) <= (int)uVar23) break;
        uVar21 = *(undefined4 *)(iVar54 + 0xc);
        uVar53 = uVar28;
        uVar20 = uVar26;
      } while( true );
    }
    auVar47._8_8_ = auVar37._8_8_;
    auVar47._0_8_ = 0x47;
    uGpffff8854 = 1;
    auVar14._8_8_ = in_t0_udw;
    auVar14._0_8_ = uGpffff87e8;
    auVar31 = _pcpyld(auVar47,auVar14);
    *puGpffff8e00 = auVar31._0_4_;
    puGpffff8e00[1] = auVar31._4_4_;
    puGpffff8e00[2] = auVar31._8_4_;
    puGpffff8e00[3] = auVar31._12_4_;
    auVar48._8_8_ = auVar31._8_8_;
    auVar48._0_8_ = 0x4e;
    auVar15._8_8_ = in_t0_udw;
    auVar15._0_8_ = uGpffff87d8;
    auVar31 = _pcpyld(auVar48,auVar15);
    puGpffff8e00[4] = auVar31._0_4_;
    puGpffff8e00[5] = auVar31._4_4_;
    puGpffff8e00[6] = auVar31._8_4_;
    puGpffff8e00[7] = auVar31._12_4_;
    auVar49._8_8_ = auVar31._8_8_;
    auVar49._0_8_ = 8;
    auVar16._8_8_ = in_t0_udw;
    auVar16._0_8_ = uGpffff8800;
    auVar31 = _pcpyld(auVar49,auVar16);
    puGpffff8e00[8] = auVar31._0_4_;
    puGpffff8e00[9] = auVar31._4_4_;
    puGpffff8e00[10] = auVar31._8_4_;
    puGpffff8e00[0xb] = auVar31._12_4_;
    puGpffff8e00 = puGpffff8e00 + 0xc;
  }
  return;
}


// ==== FUN_002bfe58 @ 002bfe58 ====

undefined * FUN_002bfe58(void)

{
  return &DAT_003c3d80;
}


// ==== FUN_002bfe68 @ 002bfe68 ====

int FUN_002bfe68(void)

{
  int iVar1;
  
  iVar1 = iGpffff8ec0;
  if (iGpffff8ec0 != 0) {
    if (iGpffff881c != 0) {
      FUN_002ac568();
      iGpffff881c = 0;
    }
    if (iGpffff8818 != 0) {
      FUN_002ac568();
      iGpffff8818 = 0;
    }
  }
  return iVar1;
}


// ==== FUN_002bfec0 @ 002bfec0 ====

undefined4 * FUN_002bfec0(void)

{
  return &DAT_0044e750;
}


