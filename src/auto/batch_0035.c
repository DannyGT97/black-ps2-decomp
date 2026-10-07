// ==== FUN_002dff98 @ 002dff98 ====

void FUN_002dff98(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003e7558;
  piVar1 = (int *)puVar2[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  *puVar2 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e0018 @ 002e0018 ====

/* Strings referenciadas:
     "Class" */

undefined4 FUN_002e0018(int *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  iVar7 = (int)param_2;
  if (*(int *)(iVar7 + 0x20) != 0) {
    do {
      uVar4 = FUN_002e33e0(param_2,uVar6);
      uVar4 = FUN_002e3920(uVar4);
      lVar5 = stricmp(uVar4,0x405fe8);
      if (lVar5 == 0) {
        uVar3 = *(uint *)(iVar7 + 0x20);
      }
      else {
        iVar2 = *param_1;
        sVar1 = *(short *)(iVar2 + 0x18);
        uVar4 = FUN_002e33e0(param_2,uVar6);
        lVar5 = (**(code **)(iVar2 + 0x1c))((int)param_1 + (int)sVar1,uVar4);
        if (lVar5 == 0) {
          return 0;
        }
        uVar3 = *(uint *)(iVar7 + 0x20);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return 1;
}


// ==== FUN_002e00f0 @ 002e00f0 ====

undefined8 FUN_002e00f0(undefined8 param_1)

{
  FUN_0038bbb0();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003e75a0;
  return param_1;
}


// ==== FUN_002e0140 @ 002e0140 ====

long FUN_002e0140(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 auStack_70 [4];
  
  lVar2 = FUN_002e4188();
  if (lVar2 != 0) {
    iVar6 = 0;
    uVar5 = 0;
    do {
      pbVar1 = &DAT_003c7a28 + uVar5;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + (uint)*pbVar1;
    } while (uVar5 < 0x5b);
    if (iVar6 != 0x4106) {
      return 0;
    }
    for (uVar5 = 0; uVar5 < DAT_0045122c; uVar5 = uVar5 + 1) {
      if (*(int *)(uVar5 * 4 + DAT_0045129c) == 0) {
        if (DAT_003c87d4 <= uVar5) {
          DAT_003c87d4 = DAT_003c87d4 + 1;
        }
        break;
      }
    }
    auStack_70[0] = 0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x30,auStack_70);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_70[0],0x30,uVar3);
    }
    lVar2 = FUN_002ec020(auStack_70[0],param_2);
    piVar7 = (int *)lVar2;
    DAT_003c9ed4 = piVar7;
    lVar4 = FUN_002eb450(lVar2,param_1);
    iVar6 = DAT_0045129c;
    if (lVar4 != 0) {
      piVar7[0xb] = uVar5;
      *(int **)(uVar5 * 4 + iVar6) = piVar7;
      return lVar2;
    }
    if (lVar2 != 0) {
      (**(code **)(*piVar7 + 0xc))((int)piVar7 + (int)*(short *)(*piVar7 + 8),3);
    }
  }
  return 0;
}


// ==== FUN_002e02f0 @ 002e02f0 ====

/* Strings referenciadas:
     "Teams" */

undefined4 * FUN_002e02f0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *apuStack_60 [4];
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)param_1 + 8);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    apuStack_60[0] = (undefined4 *)0x0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,apuStack_60);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(apuStack_60[0],0x24,uVar3);
    }
    puVar2 = apuStack_60[0];
    FUN_002e3408(apuStack_60[0]);
    *puVar2 = &DAT_003e8448;
    lVar4 = FUN_002e31e0(iVar1,0x406080);
    if ((lVar4 != 0) && (lVar4 = FUN_002e3100(lVar4,0x406088,param_2), lVar4 != 0)) {
      FUN_002e2910(puVar2,lVar4);
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}


// ==== FUN_002e0410 @ 002e0410 ====

/* Strings referenciadas:
     "Entities"
     "Entity"
     "Brain"
     "Brains"
     "Agents"
     "Services"
     "Agent"
     "Service" */

undefined4 * FUN_002e0410(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 *apuStack_b0 [4];
  
  if (param_1 != 0) {
    iVar13 = *(int *)((int)param_1 + 8);
    if (iVar13 == 0) {
      return (undefined4 *)0x0;
    }
    apuStack_b0[0] = (undefined4 *)0x0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,apuStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(apuStack_b0[0],0x24,uVar3);
    }
    puVar1 = apuStack_b0[0];
    FUN_002e3408(apuStack_b0[0]);
    *puVar1 = &DAT_003e8460;
    lVar4 = FUN_002e31e0(iVar13,0x406090);
    if (lVar4 != 0) {
      lVar4 = FUN_002e3100(lVar4,0x4060a0,param_2);
      if (lVar4 == 0) {
        return (undefined4 *)0x0;
      }
      uVar11 = 0;
      if (*(int *)((int)lVar4 + 0x20) != 0) {
        do {
          uVar3 = FUN_002e33e0(lVar4,uVar11);
          uVar5 = FUN_002e3920(uVar3);
          lVar6 = stricmp(uVar5,0x4060a8);
          if (lVar6 != 0) {
            FUN_002e2ef0(puVar1,uVar3);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)((int)lVar4 + 0x20));
      }
      lVar4 = FUN_002e3330(lVar4,0x4060a8);
      if (lVar4 == 0) {
        return puVar1;
      }
      lVar6 = FUN_002e31e0(iVar13,0x4060b0);
      if (lVar6 != 0) {
        lVar4 = FUN_002e3100(lVar6,0x4060a8,lVar4);
        if (lVar4 == 0) {
          return (undefined4 *)0x0;
        }
        uVar3 = FUN_002e2d40(puVar1);
        uVar11 = 0;
        FUN_002e3630(uVar3,0x4060a8);
        lVar6 = FUN_002e31e0(iVar13,0x4060b8);
        lVar7 = FUN_002e31e0(iVar13,0x4060c0);
        iVar13 = (int)lVar4;
        if (*(int *)(iVar13 + 0x20) == 0) {
          return puVar1;
        }
        do {
          uVar5 = FUN_002e33e0(lVar4,uVar11);
          lVar8 = FUN_002e3920(uVar5);
          if (lVar8 == 0) {
            FUN_002e2ef0(uVar3);
            uVar2 = *(uint *)(iVar13 + 0x20);
          }
          else {
            uVar9 = FUN_002e3920(uVar5,uVar5);
            uVar12 = 0x4060d0;
            lVar8 = stricmp(uVar9,0x4060d0);
            if (lVar8 == 0) {
              lVar10 = FUN_002e3918(uVar5);
              lVar8 = lVar6;
              if (lVar10 == 0) {
                return (undefined4 *)0x0;
              }
            }
            else {
              uVar9 = FUN_002e3920(uVar5);
              uVar12 = 0x4060d8;
              lVar8 = stricmp(uVar9,0x4060d8);
              if (lVar8 != 0) {
                FUN_002e2ef0(uVar3,uVar5);
                uVar2 = *(uint *)(iVar13 + 0x20);
                goto LAB_002e06e4;
              }
              lVar10 = FUN_002e3918(uVar5);
              lVar8 = lVar7;
              if (lVar10 == 0) {
                return (undefined4 *)0x0;
              }
            }
            if (lVar8 == 0) {
              return (undefined4 *)0x0;
            }
            lVar8 = FUN_002e3100(lVar8,uVar12,lVar10);
            if (lVar8 == 0) {
              return (undefined4 *)0x0;
            }
            uVar5 = FUN_002e2ef0(uVar3,lVar8);
            FUN_002e3630(uVar5,uVar12);
            FUN_002e36e8(uVar5,*(undefined4 *)((int)lVar8 + 0xc));
            uVar2 = *(uint *)(iVar13 + 0x20);
          }
LAB_002e06e4:
          uVar11 = uVar11 + 1;
          if (uVar2 <= uVar11) {
            return puVar1;
          }
        } while( true );
      }
    }
  }
  return (undefined4 *)0x0;
}


// ==== FUN_002e0750 @ 002e0750 ====

/* Strings referenciadas:
     "Brain"
     "Class"
     "ActionClass" */

long FUN_002e0750(long param_1,long param_2,int param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_4a0 [1072];
  
  lVar4 = FUN_002e4188();
  if (lVar4 != 0) {
    if (DAT_003c9ed4 == 0) {
      return 0;
    }
    if (param_2 == 0) {
      return 0;
    }
    if (*(int *)(DAT_003c87d8 + 0x14) == *(int *)(DAT_003c87d8 + 0x18)) {
      return 0;
    }
    if (param_1 == 0) {
      sprintf(auStack_4a0,0x4060e0,DAT_003c7a84);
      DAT_003c7a84 = DAT_003c7a84 + 1;
    }
    else {
      uVar5 = strlen(param_1);
      if (0x3ff < uVar5) {
        return 0;
      }
      strcpy(auStack_4a0,param_1);
    }
    uVar6 = FUN_002e3330(param_2,0x4060e8);
    lVar4 = FUN_0038c098(uVar6);
    if ((lVar4 != 0) && (pcVar1 = *(code **)((int)lVar4 + 4), pcVar1 != (code *)0x0)) {
      lVar4 = (*pcVar1)(auStack_4a0,param_4);
      piVar11 = (int *)lVar4;
      if (DAT_003c87d4 == 1) {
        piVar11[10] = 0;
        piVar11[9] = (int)param_2;
        lVar7 = (**(code **)(*piVar11 + 0x14))
                          ((int)piVar11 + (int)*(short *)(*piVar11 + 0x10),param_2);
        if (lVar7 != 0) {
          lVar7 = FUN_002e31e0(param_2,0x4060a8);
          if (lVar7 != 0) {
            uVar6 = FUN_002e3330(lVar7,0x4060e8);
            lVar8 = FUN_0038c138(uVar6);
            if (lVar8 != 0) {
              uVar6 = FUN_002e3330(param_2,0x4060f0);
              lVar9 = FUN_0038c1d8(uVar6);
              if (lVar9 == 0) {
                if (lVar4 == 0) {
                  return 0;
                }
                (**(code **)(*piVar11 + 0xc))((int)piVar11 + (int)*(short *)(*piVar11 + 8),3);
                return 0;
              }
              pcVar1 = *(code **)((int)lVar8 + 4);
              if (pcVar1 == (code *)0x0) {
                if (lVar4 == 0) {
                  return 0;
                }
                (**(code **)(*piVar11 + 0xc))((int)piVar11 + (int)*(short *)(*piVar11 + 8),3);
                return 0;
              }
              lVar8 = (*pcVar1)(lVar4,lVar9);
              piVar10 = (int *)lVar8;
              piVar11[6] = (int)piVar10;
              if (lVar8 == 0) {
                if (lVar4 == 0) {
                  return 0;
                }
                (**(code **)(*piVar11 + 0xc))((int)piVar11 + (int)*(short *)(*piVar11 + 8),3);
                return 0;
              }
              lVar7 = (**(code **)(*piVar10 + 0x1c))
                                ((int)piVar10 + (int)*(short *)(*piVar10 + 0x18),lVar7);
              if (lVar7 == 0) {
                piVar10 = (int *)piVar11[6];
                if (piVar10 != (int *)0x0) {
                  (**(code **)(*piVar10 + 0xc))((int)piVar10 + (int)*(short *)(*piVar10 + 8),3);
                }
                piVar11[6] = 0;
                if (lVar4 == 0) {
                  return 0;
                }
                (**(code **)(*piVar11 + 0xc))((int)piVar11 + (int)*(short *)(*piVar11 + 8),3);
                return 0;
              }
            }
          }
          iVar2 = DAT_003c87d8;
          iVar3 = *(int *)(DAT_003c87d8 + 0x10);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            *(int *)(DAT_003c87d8 + 0x14) = *(int *)(DAT_003c87d8 + 0x14) + 1;
            *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0xc);
            *(undefined1 *)(iVar3 + 0x10) = 1;
            *(int **)(iVar3 + 4) = piVar11;
            if (*(int *)(iVar2 + 0xc) == 0) {
              *(int *)(iVar2 + 0xc) = iVar3;
              *(int *)(iVar2 + 8) = iVar3;
              *(undefined4 *)(iVar3 + 0xc) = 0;
              *(undefined4 *)(*(int *)(iVar2 + 8) + 8) = 0;
              *(undefined4 *)(*(int *)(iVar2 + 0xc) + 8) = 0;
              *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc) = 0;
            }
            else {
              *(int *)(iVar3 + 8) = *(int *)(iVar2 + 0xc);
              *(undefined4 *)(iVar3 + 0xc) = 0;
              *(int *)(*(int *)(iVar2 + 0xc) + 0xc) = iVar3;
              *(int *)(iVar2 + 0xc) = iVar3;
            }
          }
          piVar11[3] = iVar3;
          piVar11[5] = 0;
          piVar11[7] = param_3;
          piVar11[9] = 0;
          return lVar4;
        }
        if (lVar4 != 0) {
          (**(code **)(*piVar11 + 0xc))((int)piVar11 + (int)*(short *)(*piVar11 + 8),3);
          return 0;
        }
      }
      else if (lVar4 != 0) {
        (**(code **)(*piVar11 + 0xc))((int)piVar11 + (int)*(short *)(*piVar11 + 8),3);
        return 0;
      }
    }
  }
  return 0;
}


// ==== FUN_002e0b40 @ 002e0b40 ====

/* Strings referenciadas:
     "Class" */

undefined4 * FUN_002e0b40(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *apuStack_50 [4];
  
  apuStack_50[0] = (undefined4 *)0x0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,apuStack_50);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_50[0],0x24,uVar2);
  }
  puVar1 = apuStack_50[0];
  FUN_002e3408(apuStack_50[0]);
  *puVar1 = &DAT_003e8460;
  uVar2 = FUN_002e2d40(puVar1);
  FUN_002e3630(uVar2,0x4060e8);
  FUN_002e36e8(uVar2,param_1);
  return puVar1;
}


// ==== FUN_002e0c30 @ 002e0c30 ====

/* Strings referenciadas:
     "Class" */

undefined4 * FUN_002e0c30(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *apuStack_50 [4];
  
  apuStack_50[0] = (undefined4 *)0x0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,apuStack_50);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_50[0],0x24,uVar2);
  }
  puVar1 = apuStack_50[0];
  FUN_002e3408(apuStack_50[0]);
  *puVar1 = &DAT_003e8448;
  uVar2 = FUN_002e2d40(puVar1);
  FUN_002e3630(uVar2,0x4060e8);
  FUN_002e36e8(uVar2,param_1);
  return puVar1;
}


// ==== FUN_002e0d20 @ 002e0d20 ====

/* Strings referenciadas:
     "Class" */

long FUN_002e0d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int iStack_5c;
  
  lVar2 = FUN_002e4188();
  if (lVar2 != 0) {
    if (DAT_003c9ed4 == 0) {
      return 0;
    }
    if (*(int *)(DAT_003c9ed4 + 0x1c) == 0) {
      return 0;
    }
    if (*(uint *)(*(int *)(DAT_003c9ed4 + 0x1c) + 0x14) < *(uint *)(DAT_003c9ed4 + 0x18)) {
      lVar2 = FUN_002e3330(param_1,0x4060e8);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = FUN_0038c278(lVar2);
      if ((lVar2 != 0) && (lVar2 = (**(code **)((int)lVar2 + 4))(param_2,param_3), lVar2 != 0)) {
        piVar4 = (int *)lVar2;
        lVar3 = (**(code **)(*piVar4 + 0x34))((int)piVar4 + (int)*(short *)(*piVar4 + 0x30),param_1)
        ;
        if (lVar3 == 0) {
          (**(code **)(*piVar4 + 0xc))((int)piVar4 + (int)*(short *)(*piVar4 + 8),3);
          return 0;
        }
        iVar1 = *(int *)(DAT_003c9ed4 + 0x1c);
        iStack_5c = *(int *)(iVar1 + 0x10);
        if (iStack_5c == 0) {
          iStack_5c = 0;
        }
        else {
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
          *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iStack_5c + 0xc);
          *(undefined1 *)(iStack_5c + 0x10) = 1;
          *(int **)(iStack_5c + 4) = piVar4;
          if (*(int *)(iVar1 + 0xc) == 0) {
            *(int *)(iVar1 + 0xc) = iStack_5c;
            *(int *)(iVar1 + 8) = iStack_5c;
            *(undefined4 *)(iStack_5c + 0xc) = 0;
            *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
            *(undefined4 *)(*(int *)(iVar1 + 0xc) + 8) = 0;
            *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc) = 0;
          }
          else {
            *(int *)(iStack_5c + 8) = *(int *)(iVar1 + 0xc);
            *(undefined4 *)(iStack_5c + 0xc) = 0;
            *(int *)(*(int *)(iVar1 + 0xc) + 0xc) = iStack_5c;
            *(int *)(iVar1 + 0xc) = iStack_5c;
          }
        }
        piVar4[4] = iStack_5c;
        return lVar2;
      }
    }
  }
  return 0;
}


// ==== FUN_002e0f00 @ 002e0f00 ====

void FUN_002e0f00(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  for (iVar1 = *(int *)(piVar5[2] + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    FUN_002e4b98(*(undefined4 *)(iVar1 + 4),param_1);
  }
  iVar1 = piVar5[4];
  iVar2 = *(int *)(DAT_003c9ed4 + 0x1c);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  if (iVar1 == *(int *)(iVar2 + 8)) {
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  if (iVar1 == iVar3) {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 8);
    iVar3 = *(int *)(iVar1 + 8);
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  else {
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  if (iVar3 == 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  else {
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(int *)(iVar2 + 0x10) = iVar1;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
  if (param_1 != 0) {
    (**(code **)(*piVar5 + 0xc))((int)piVar5 + (int)*(short *)(*piVar5 + 8),3);
  }
  return;
}


// ==== FUN_002e1038 @ 002e1038 ====

void FUN_002e1038(void)

{
  FUN_002ea388();
  return;
}


// ==== FUN_002e1058 @ 002e1058 ====

void FUN_002e1058(void)

{
  FUN_002ebe90();
  return;
}


// ==== FUN_002e1078 @ 002e1078 ====

void FUN_002e1078(void)

{
  FUN_002ea610();
  return;
}


// ==== FUN_002e1098 @ 002e1098 ====

void FUN_002e1098(void)

{
  FUN_002ebf58();
  return;
}


// ==== FUN_002e10b8 @ 002e10b8 ====

int FUN_002e10b8(void)

{
  int iVar1;
  
  iVar1 = DAT_003c7a24 << 1;
  if (-1 < DAT_003c7a24) {
    DAT_003c7a24 = iVar1;
    return iVar1;
  }
  return 0;
}


// ==== FUN_002e10d8 @ 002e10d8 ====

void FUN_002e10d8(void)

{
  FUN_002e3928();
  return;
}


// ==== FUN_002e10f8 @ 002e10f8 ====

void FUN_002e10f8(void)

{
  FUN_002e3d28();
  return;
}


// ==== FUN_002e1118 @ 002e1118 ====

void FUN_002e1118(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_003c87d4 != 0) {
    do {
      if (*(int *)(uVar1 * 4 + DAT_0045129c) != 0) {
        FUN_002ea898(param_1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_003c87d4);
  }
  return;
}


// ==== FUN_002e11a0 @ 002e11a0 ====

bool FUN_002e11a0(long param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)param_1;
    iVar1 = piVar2[0xb];
    (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
    *(undefined4 *)(iVar1 * 4 + DAT_0045129c) = 0;
    DAT_003c9ed4 = 0;
  }
  return param_1 != 0;
}


// ==== FUN_002e1208 @ 002e1208 ====

void FUN_002e1208(long param_1)

{
  if (param_1 != 0) {
    FUN_002ea898();
  }
  return;
}


// ==== FUN_002e1228 @ 002e1228 ====

void FUN_002e1228(long param_1)

{
  if (param_1 != 0) {
    FUN_002eaac8();
  }
  return;
}


// ==== FUN_002e1248 @ 002e1248 ====

undefined8 FUN_002e1248(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_2 + 0x14) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_002eabb0();
  }
  return uVar1;
}


// ==== FUN_002e1280 @ 002e1280 ====

undefined8 FUN_002e1280(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_002ead58();
  }
  return uVar1;
}


// ==== FUN_002e12b0 @ 002e12b0 ====

undefined4 FUN_002e12b0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  if (piVar5[10] != 0) {
    FUN_002ead58(piVar5[10],param_1);
  }
  iVar2 = DAT_003c87d8;
  iVar1 = piVar5[3];
  *(undefined1 *)(iVar1 + 0x10) = 0;
  if (iVar1 == *(int *)(iVar2 + 8)) {
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  if (iVar1 == iVar3) {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 8);
    iVar3 = *(int *)(iVar1 + 8);
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  else {
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  if (iVar3 == 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  else {
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(int *)(iVar2 + 0x10) = iVar1;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
  if (param_1 != 0) {
    (**(code **)(*piVar5 + 0xc))((int)piVar5 + (int)*(short *)(*piVar5 + 8),3);
  }
  return 1;
}


// ==== FUN_002e1380 @ 002e1380 ====

void FUN_002e1380(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)param_1;
    (**(code **)(iVar1 + 0xc))((int)(int *)param_1 + (int)*(short *)(iVar1 + 8),3);
  }
  return;
}


// ==== FUN_002e13b8 @ 002e13b8 ====

undefined8 FUN_002e13b8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_002e2d40();
  if (param_2 != 0) {
    FUN_002e3578(uVar1,param_2);
  }
  if (param_3 != 0) {
    FUN_002e3630(uVar1,param_3);
  }
  if (param_4 != 0) {
    FUN_002e36e8(uVar1,param_4);
  }
  return uVar1;
}


// ==== FUN_002e1438 @ 002e1438 ====

void FUN_002e1438(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)param_1;
    (**(code **)(iVar1 + 0xc))((int)(int *)param_1 + (int)*(short *)(iVar1 + 8),3);
  }
  return;
}


// ==== FUN_002e1470 @ 002e1470 ====

undefined8 FUN_002e1470(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x1c))((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  }
  return uVar1;
}


// ==== FUN_002e14b0 @ 002e14b0 ====

void FUN_002e14b0(int *param_1)

{
  (**(code **)(*param_1 + 0x24))((int)param_1 + (int)*(short *)(*param_1 + 0x20));
  return;
}


// ==== FUN_002e14d8 @ 002e14d8 ====

void FUN_002e14d8(int *param_1,undefined1 param_2)

{
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28),param_2);
  return;
}


// ==== FUN_002e1548 @ 002e1548 ====

undefined8 FUN_002e1548(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar4 = (undefined4 *)param_1;
  puVar4[2] = 0;
  puVar4[4] = 0;
  *puVar4 = &DAT_003e8950;
  puVar4[5] = param_2;
  iVar1 = FUN_0038ba30();
  if (*(int *)(iVar1 + 0x400) == 0) {
    puVar4[1] = 0;
  }
  else {
    iVar1 = FUN_0038ba30();
    uStack_50 = 0;
    iVar1 = *(int *)(iVar1 + 0x400) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1,&uStack_50);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_50,iVar1,uVar3);
    }
    puVar4[1] = uStack_50;
  }
  iVar1 = FUN_0038c3e0();
  if (*(int *)(iVar1 + 0x400) == 0) {
    puVar4[3] = 0;
  }
  else {
    iVar1 = FUN_0038c3e0();
    uStack_4c = 0;
    iVar1 = *(int *)(iVar1 + 0x400) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1,
                       (uint)&uStack_50 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_4c,iVar1,uVar3);
    }
    puVar4[3] = uStack_4c;
  }
  if (*(code **)(param_3 + 4) == (code *)0x0) {
    puVar4[6] = 0;
  }
  else {
    uVar2 = (**(code **)(param_3 + 4))();
    puVar4[6] = uVar2;
  }
  return param_1;
}


// ==== FUN_002e16b8 @ 002e16b8 ====

void FUN_002e16b8(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e8950;
  piVar1 = (int *)puVar4[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  iVar2 = puVar4[1];
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < (int)puVar4[2]) {
      do {
        piVar1 = *(int **)(iVar3 * 4 + puVar4[1]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        }
        iVar3 = iVar3 + 1;
        iVar2 = puVar4[1];
      } while (iVar3 < (int)puVar4[2]);
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2);
  }
  iVar2 = puVar4[3];
  iVar3 = 0;
  if (iVar2 != 0) {
    if (0 < (int)puVar4[4]) {
      do {
        piVar1 = *(int **)(iVar3 * 4 + puVar4[3]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        }
        iVar3 = iVar3 + 1;
        iVar2 = puVar4[3];
      } while (iVar3 < (int)puVar4[4]);
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2);
  }
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e1818 @ 002e1818 ====

/* Strings referenciadas:
     "Service"
     "Class"
     "Agent" */

undefined4 FUN_002e1818(undefined8 param_1,long param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  
  piVar11 = (int *)param_1;
  if (piVar11[6] == 0) {
    uVar4 = 0;
  }
  else {
    uVar12 = 0;
    if (param_2 != 0) {
      iVar13 = (int)param_2;
      uVar9 = 0;
      if (*(int *)(iVar13 + 0x20) != 0) {
        do {
          uVar5 = FUN_002e33e0(param_2,uVar12);
          lVar6 = FUN_002e3920(uVar5);
          if (lVar6 == 0) {
            uVar9 = *(uint *)(iVar13 + 0x20);
          }
          else {
            uVar7 = FUN_002e3920(uVar5);
            lVar6 = stricmp(uVar7,0x4061c0);
            if (lVar6 == 0) {
              lVar6 = FUN_002e3330(uVar5,0x4061c8);
              if (lVar6 == 0) {
                uVar9 = *(uint *)(iVar13 + 0x20);
              }
              else {
                lVar6 = FUN_0038c438(lVar6);
                if (lVar6 == 0) {
                  uVar9 = *(uint *)(iVar13 + 0x20);
                }
                else {
                  pcVar2 = *(code **)((int)lVar6 + 4);
                  if (pcVar2 == (code *)0x0) {
                    uVar9 = *(uint *)(iVar13 + 0x20);
                  }
                  else {
                    lVar6 = (*pcVar2)(param_1);
                    piVar10 = (int *)lVar6;
                    lVar8 = (**(code **)(*piVar10 + 0x14))
                                      ((int)piVar10 + (int)*(short *)(*piVar10 + 0x10),uVar5);
                    if (lVar8 == 0) {
LAB_002e19ac:
                      if (lVar6 != 0) {
                        iVar3 = *(int *)lVar6;
                        (**(code **)(iVar3 + 0xc))((int)(int *)lVar6 + (int)*(short *)(iVar3 + 8),3)
                        ;
                        uVar9 = *(uint *)(iVar13 + 0x20);
                        goto LAB_002e19f0;
                      }
                    }
                    else {
                      *(int **)(piVar11[4] * 4 + piVar11[3]) = piVar10;
                      piVar11[4] = piVar11[4] + 1;
                    }
LAB_002e19ec:
                    uVar9 = *(uint *)(iVar13 + 0x20);
                  }
                }
              }
            }
            else {
              uVar7 = FUN_002e3920(uVar5);
              lVar6 = stricmp(uVar7,0x4061d0);
              if (lVar6 == 0) {
                lVar6 = FUN_002e3330(uVar5,0x4061c8);
                if (lVar6 == 0) {
                  uVar9 = *(uint *)(iVar13 + 0x20);
                }
                else {
                  lVar6 = FUN_0038c4d8(lVar6);
                  if (lVar6 == 0) {
                    uVar9 = *(uint *)(iVar13 + 0x20);
                  }
                  else {
                    pcVar2 = *(code **)((int)lVar6 + 4);
                    if (pcVar2 != (code *)0x0) {
                      lVar6 = (*pcVar2)(param_1);
                      piVar10 = (int *)lVar6;
                      lVar8 = (**(code **)(*piVar10 + 0x14))
                                        ((int)piVar10 + (int)*(short *)(*piVar10 + 0x10),uVar5);
                      if (lVar8 == 0) goto LAB_002e19ac;
                      *(int **)(piVar11[2] * 4 + piVar11[1]) = piVar10;
                      piVar11[2] = piVar11[2] + 1;
                      goto LAB_002e19ec;
                    }
                    uVar9 = *(uint *)(iVar13 + 0x20);
                  }
                }
              }
              else {
                uVar9 = *(uint *)(iVar13 + 0x20);
              }
            }
          }
LAB_002e19f0:
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar9);
      }
      uVar12 = 0;
      if (uVar9 != 0) {
        do {
          uVar5 = FUN_002e33e0(param_2,uVar12);
          uVar5 = FUN_002e3920(uVar5);
          lVar6 = stricmp(uVar5,0x4061c8);
          if (lVar6 == 0) {
            uVar9 = *(uint *)(iVar13 + 0x20);
          }
          else {
            uVar5 = FUN_002e33e0(param_2,uVar12);
            uVar5 = FUN_002e3920(uVar5);
            lVar6 = stricmp(uVar5,0x4061c0);
            if (lVar6 == 0) {
              uVar9 = *(uint *)(iVar13 + 0x20);
            }
            else {
              uVar5 = FUN_002e33e0(param_2,uVar12);
              uVar5 = FUN_002e3920(uVar5);
              lVar6 = stricmp(uVar5,0x4061d0);
              if (lVar6 != 0) {
                iVar3 = *piVar11;
                sVar1 = *(short *)(iVar3 + 0x20);
                uVar5 = FUN_002e33e0(param_2,uVar12);
                lVar6 = (**(code **)(iVar3 + 0x24))((int)piVar11 + (int)sVar1,uVar5);
                if (lVar6 == 0) {
                  return 0;
                }
              }
              uVar9 = *(uint *)(iVar13 + 0x20);
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar9);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


// ==== FUN_002e1b08 @ 002e1b08 ====

void FUN_002e1b08(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar3 = *(int *)(param_1 + 0xc);
    while( true ) {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      piVar1 = *(int **)(iVar2 + iVar3);
      iVar3 = *piVar1;
      (**(code **)(iVar3 + 0x24))((int)piVar1 + (int)*(short *)(iVar3 + 0x20));
      if (*(int *)(param_1 + 0x10) <= iVar4) break;
      iVar3 = *(int *)(param_1 + 0xc);
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar3 = *(int *)(param_1 + 4);
    while( true ) {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      piVar1 = *(int **)(iVar2 + iVar3);
      iVar3 = *piVar1;
      (**(code **)(iVar3 + 0x24))((int)piVar1 + (int)*(short *)(iVar3 + 0x20));
      if (*(int *)(param_1 + 8) <= iVar4) break;
      iVar3 = *(int *)(param_1 + 4);
    }
  }
  return;
}


// ==== FUN_002e1bc0 @ 002e1bc0 ====

undefined4 FUN_002e1bc0(int param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 8) < 1) {
LAB_002e1c38:
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    while( true ) {
      piVar1 = *(int **)(iVar5 * 4 + iVar2);
      iVar2 = *piVar1;
      lVar4 = (**(code **)(iVar2 + 0x2c))((int)piVar1 + (int)*(short *)(iVar2 + 0x28));
      if (lVar4 == param_2) break;
      iVar5 = iVar5 + 1;
      if (*(int *)(param_1 + 8) <= iVar5) goto LAB_002e1c38;
      iVar2 = *(int *)(param_1 + 4);
    }
    uVar3 = *(undefined4 *)(iVar5 * 4 + *(int *)(param_1 + 4));
  }
  return uVar3;
}


// ==== FUN_002e1c58 @ 002e1c58 ====

undefined4 FUN_002e1c58(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  do {
    piVar1 = *(int **)(iVar4 * 4 + iVar3);
    iVar3 = *piVar1;
    iVar3 = (**(code **)(iVar3 + 0x2c))((int)piVar1 + (int)*(short *)(iVar3 + 0x28));
    do {
      if (param_2 == iVar3) {
        bVar2 = true;
        goto LAB_002e1cc4;
      }
      iVar3 = *(int *)(iVar3 + 0x108);
    } while (iVar3 != 0);
    bVar2 = false;
LAB_002e1cc4:
    if (bVar2) {
      return *(undefined4 *)(iVar4 * 4 + *(int *)(param_1 + 0xc));
    }
    iVar4 = iVar4 + 1;
    if (*(int *)(param_1 + 0x10) <= iVar4) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0xc);
  } while( true );
}


// ==== FUN_002e1d10 @ 002e1d10 ====

undefined4 FUN_002e1d10(int param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
LAB_002e1d88:
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
    while( true ) {
      piVar1 = *(int **)(iVar5 * 4 + iVar2);
      iVar2 = *piVar1;
      lVar4 = (**(code **)(iVar2 + 0x2c))((int)piVar1 + (int)*(short *)(iVar2 + 0x28));
      if (param_2 == lVar4) break;
      iVar5 = iVar5 + 1;
      if (*(int *)(param_1 + 0x10) <= iVar5) goto LAB_002e1d88;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    uVar3 = *(undefined4 *)(iVar5 * 4 + *(int *)(param_1 + 0xc));
  }
  return uVar3;
}


// ==== FUN_002e1da8 @ 002e1da8 ====

undefined8 FUN_002e1da8(undefined8 param_1)

{
  FUN_0038c618();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003e8990;
  return param_1;
}


// ==== FUN_002e1e18 @ 002e1e18 ====

/* WARNING: Removing unreachable block (ram,0x002e1e68) */

undefined8 FUN_002e1e18(float param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  
  fVar3 = (float)FUN_00389140(param_3);
  fVar3 = SQRT(fVar3);
  pfVar1 = (float *)param_3;
  fVar4 = pfVar1[2] / fVar3;
  fVar2 = *pfVar1 / fVar3;
  uVar5 = FUN_0029e1d8(pfVar1[1] / fVar3);
  if (fVar4 == 0.0) {
    if (0.0 < fVar2) {
      param_1 = param_1 + 1.5707964;
      goto LAB_002e1f4c;
    }
    puVar8 = (undefined *)0x0;
    if (fVar2 < 0.0) {
      puVar8 = &DAT_bfc90fdb;
    }
  }
  else {
    puVar8 = (undefined *)FUN_0029d6a8(fVar2 / fVar4);
    if (fVar4 < 0.0) {
      puVar8 = (undefined *)((float)puVar8 + 3.1415927);
    }
  }
  param_1 = (float)puVar8 + param_1;
LAB_002e1f4c:
  fVar2 = (float)FUN_002ea218(param_1);
  fVar3 = (float)FUN_002ea218(uVar5);
  fVar4 = (float)FUN_002ea238(param_1);
  fVar6 = (float)FUN_002ea218(uVar5);
  fVar7 = (float)FUN_002ea238(uVar5);
  pfVar1 = (float *)param_2;
  *pfVar1 = fVar4 * fVar6;
  pfVar1[1] = fVar7;
  pfVar1[2] = fVar2 * fVar3;
  return param_2;
}


// ==== FUN_002e1fd0 @ 002e1fd0 ====

float FUN_002e1fd0(float param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
                  )

{
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined *puStack_50;
  float fStack_4c;
  
  fStack_58 = param_1 * param_3[2];
  fStack_60 = param_1 * *param_3;
  fStack_5c = param_1 * param_3[1];
  puStack_50 = &DAT_003e8d20;
  fStack_70 = *param_2 + fStack_60;
  fStack_6c = param_2[1] + fStack_5c;
  fStack_68 = param_2[2] + fStack_58;
  (*DAT_0045124c)(param_2,&fStack_70,param_4,&puStack_50,param_5);
  return param_1 * fStack_4c;
}


// ==== FUN_002e2098 @ 002e2098 ====

undefined1
FUN_002e2098(float param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5,
            int param_6)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  if (param_6 < 2) {
    uVar1 = (*DAT_00451250)();
  }
  else {
    fStack_d0 = *param_3 - *param_2;
    fStack_cc = param_3[1] - param_2[1];
    fStack_c8 = param_3[2] - param_2[2];
    if (((fStack_d0 != 0.0) || (fStack_c8 != 0.0)) || (uVar1 = 1, fStack_cc != 0.0)) {
      iVar3 = 0;
      fStack_a0 = fStack_d0;
      fStack_9c = fStack_cc;
      fStack_98 = fStack_c8;
      FUN_002e1e18(0x3fc90fdb,&fStack_80,&fStack_d0);
      fStack_a8 = (float)(param_6 + -1);
      fStack_c0 = (param_1 * fStack_80) / 2.0;
      fStack_bc = (param_1 * fStack_7c) / 2.0;
      fStack_b8 = (param_1 * fStack_78) / 2.0;
      fStack_90 = fStack_c0 + fStack_c0;
      fStack_8c = fStack_bc + fStack_bc;
      fStack_88 = fStack_b8 + fStack_b8;
      fStack_b0 = fStack_90 / fStack_a8;
      fStack_ac = fStack_8c / fStack_a8;
      fStack_a8 = fStack_88 / fStack_a8;
      fStack_e0 = *param_2 + fStack_c0;
      fStack_dc = param_2[1] + fStack_bc;
      fStack_d8 = param_2[2] + fStack_b8;
      if (0 < param_6) {
        do {
          fStack_a0 = fStack_e0 + fStack_d0;
          fStack_9c = fStack_dc + fStack_cc;
          fStack_98 = fStack_d8 + fStack_c8;
          cVar2 = (*DAT_00451250)(&fStack_e0,&fStack_a0,param_4,param_5);
          if (cVar2 == '\0') {
            return 0;
          }
          iVar3 = iVar3 + 1;
          fStack_e0 = fStack_e0 - fStack_b0;
          fStack_dc = fStack_dc - fStack_ac;
          fStack_d8 = fStack_d8 - fStack_a8;
        } while (iVar3 < param_6);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_002e22f0 @ 002e22f0 ====

/* WARNING: Removing unreachable block (ram,0x002e2388) */
/* WARNING: Removing unreachable block (ram,0x002e24e4) */

bool FUN_002e22f0(float param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  pfVar4 = (float *)param_2;
  fStack_100 = *param_3 - *pfVar4;
  fStack_fc = param_3[1] - pfVar4[1];
  fStack_f8 = param_3[2] - pfVar4[2];
  fStack_e0 = fStack_100;
  fStack_dc = fStack_fc;
  fStack_d8 = fStack_f8;
  fVar5 = (float)FUN_00389140(&fStack_100);
  fVar5 = SQRT(fVar5);
  fStack_100 = fStack_100 / fVar5;
  fStack_fc = fStack_fc / fVar5;
  fStack_f8 = fStack_f8 / fVar5;
  FUN_002e1e18(0x3fc90fdb,&fStack_c0,&fStack_100);
  fStack_d0 = param_1 * fStack_c0;
  fStack_cc = param_1 * fStack_bc;
  fStack_c8 = param_1 * fStack_b8;
  fStack_f0 = fStack_d0 / 2.0;
  fStack_ec = fStack_cc / 2.0;
  fStack_e8 = fStack_c8 / 2.0;
  fStack_e0 = fStack_f0;
  fStack_dc = fStack_ec;
  fStack_d8 = fStack_e8;
  fVar6 = (float)FUN_002e1fd0(fVar5,param_2,&fStack_100,param_4,param_5);
  uVar2 = FUN_00291f58(fVar6 / fVar5);
  lVar3 = FUN_002919f8(uVar2,0x3fefae147ae147ae);
  bVar1 = false;
  if (lVar3 < 1) {
    fStack_e0 = *pfVar4 + fStack_f0;
    fStack_d8 = pfVar4[2] + fStack_e8;
    fStack_dc = pfVar4[1] + fStack_ec;
    fStack_d0 = *param_3 - fStack_e0;
    fStack_cc = param_3[1] - fStack_dc;
    fStack_c8 = param_3[2] - fStack_d8;
    fVar5 = (float)FUN_00389140(&fStack_d0);
    fVar5 = SQRT(fVar5);
    fStack_b0 = fStack_d0 / fVar5;
    fStack_ac = fStack_cc / fVar5;
    fStack_a8 = fStack_c8 / fVar5;
    fVar6 = (float)FUN_002e1fd0(fVar5,&fStack_e0,&fStack_b0,param_4,param_5);
    uVar2 = FUN_00291f58(fVar6 / fVar5);
    lVar3 = FUN_002919f8(uVar2,0x3fefae147ae147ae);
    if (lVar3 < 1) {
      fStack_e0 = *pfVar4 - fStack_f0;
      fStack_dc = pfVar4[1] - fStack_ec;
      fStack_d8 = pfVar4[2] - fStack_e8;
      fStack_cc = param_3[1] - fStack_dc;
      fStack_c8 = param_3[2] - fStack_d8;
      fStack_d0 = *param_3 - fStack_e0;
      fStack_ac = fStack_cc / fVar5;
      fStack_a8 = fStack_c8 / fVar5;
      fStack_b0 = fStack_d0 / fVar5;
      fStack_a0 = fStack_b0;
      fStack_9c = fStack_ac;
      fStack_98 = fStack_a8;
      fVar6 = (float)FUN_002e1fd0(fVar5,&fStack_e0,&fStack_b0,param_4,param_5);
      uVar2 = FUN_00291f58(fVar6 / fVar5);
      lVar3 = FUN_002919f8(uVar2,0x3fefae147ae147ae);
      bVar1 = lVar3 < 1;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ==== FUN_002e2638 @ 002e2638 ====

void FUN_002e2638(float param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  iVar3 = 0;
  fVar6 = (float)(param_7 + 1);
  fStack_98 = param_2[2];
  fStack_a0 = *param_2;
  fStack_9c = param_2[1];
  fVar7 = param_3[2] - fStack_98;
  fVar4 = *param_3 - fStack_a0;
  fVar5 = param_3[1] - fStack_9c;
  if (0 < param_7) {
    do {
      fStack_9c = fStack_9c + fVar5 / fVar6;
      fStack_a0 = fStack_a0 + fVar4 / fVar6;
      fStack_98 = fStack_98 + fVar7 / fVar6;
      fStack_8c = fStack_9c - param_1;
      fStack_90 = fStack_a0;
      fStack_88 = fStack_98;
      (*DAT_0045124c)(&fStack_a0,&fStack_90,param_4,param_5,param_6);
      uVar1 = FUN_00291f58(*(undefined4 *)((int)param_5 + 4));
      lVar2 = FUN_002919f8(uVar1,0x3fefae147ae147ae);
      iVar3 = iVar3 + 1;
      if (-1 < lVar2) {
        return;
      }
    } while (iVar3 < param_7);
  }
  return;
}


// ==== FUN_002e27a8 @ 002e27a8 ====

void FUN_002e27a8(void)

{
  FUN_002e1fd0(0x461c4000);
  return;
}


// ==== FUN_002e27d0 @ 002e27d0 ====

undefined1 FUN_002e27d0(void)

{
  undefined1 uVar1;
  
  uVar1 = (*DAT_00451250)();
  return uVar1;
}


// ==== FUN_002e27f8 @ 002e27f8 ====

undefined1 FUN_002e27f8(float param_1)

{
  undefined1 uVar1;
  
  uVar1 = (*DAT_00451254)(param_1 * 0.5);
  return uVar1;
}


// ==== FUN_002e2828 @ 002e2828 ====

undefined8 FUN_002e2828(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 auStack_50 [4];
  
  puVar3 = (undefined4 *)param_1;
  puVar3[1] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[2] = 0;
  puVar3[6] = 0;
  *puVar3 = &DAT_003e8dd0;
  iVar1 = strlen(param_2);
  auStack_50[0] = 0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 + 1,auStack_50)
  ;
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_50[0],iVar1 + 1,uVar2);
  }
  puVar3[3] = auStack_50[0];
  strcpy(auStack_50[0],param_2);
  puVar3[4] = 0;
  puVar3[5] = 0;
  return param_1;
}


// ==== FUN_002e2910 @ 002e2910 ====

long FUN_002e2910(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (param_1 != param_2) {
    FUN_002e37a0();
    iVar6 = (int)param_1;
    if (*(int *)(iVar6 + 0xc) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    if (*(int *)(iVar6 + 0x14) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    if (*(int *)(iVar6 + 0x10) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    if (*(int *)(iVar6 + 0x1c) != 0) {
      (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(iVar6 + 0x18));
    }
    iVar8 = (int)param_2;
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar8 + 8);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar8 + 4);
    if (*(int *)(iVar8 + 0xc) == 0) {
      *(undefined4 *)(iVar6 + 0xc) = 0;
      iVar2 = *(int *)(iVar8 + 0x10);
    }
    else {
      iVar2 = strlen();
      uStack_60 = 0;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 + 1,
                         &uStack_60);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_60,iVar2 + 1,uVar3);
      }
      *(undefined4 *)(iVar6 + 0xc) = uStack_60;
      strcpy(uStack_60,*(undefined4 *)(iVar8 + 0xc));
      iVar2 = *(int *)(iVar8 + 0x10);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(iVar6 + 0x10) = 0;
      uVar7 = *(uint *)(iVar8 + 0x20);
    }
    else {
      iVar2 = strlen();
      uStack_5c = 0;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 + 1,
                         (uint)&uStack_60 | 4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_5c,iVar2 + 1,uVar3);
      }
      *(undefined4 *)(iVar6 + 0x10) = uStack_5c;
      strcpy(uStack_5c,*(undefined4 *)(iVar8 + 0x10));
      uVar7 = *(uint *)(iVar8 + 0x20);
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar1 = *(uint *)(iVar8 + 0x20);
      while( true ) {
        if (uVar5 < uVar1) {
          uVar4 = *(undefined4 *)(uVar5 * 4 + *(int *)(iVar8 + 0x18));
        }
        else {
          uVar4 = 0;
        }
        uVar5 = uVar5 + 1;
        FUN_002e2ef0(param_1,uVar4);
        if (uVar7 <= uVar5) break;
        uVar1 = *(uint *)(iVar8 + 0x20);
      }
    }
    if (*(int *)(iVar8 + 0x14) == 0) {
      *(undefined4 *)(iVar6 + 0x14) = 0;
    }
    else {
      iVar2 = strlen();
      uStack_58 = 0;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 + 1,
                         (uint)&uStack_60 | 8);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_58,iVar2 + 1,uVar3);
      }
      *(undefined4 *)(iVar6 + 0x14) = uStack_58;
      strcpy(uStack_58,*(undefined4 *)(iVar8 + 0x14));
    }
  }
  return param_1;
}


// ==== FUN_002e2b78 @ 002e2b78 ====

undefined8 FUN_002e2b78(int param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puStack_80;
  undefined4 auStack_7c [3];
  
  bVar1 = false;
  iVar7 = *(int *)(param_1 + 0x20);
  iVar3 = 8;
  if (iVar7 != 0) {
    if (iVar7 != *(int *)(param_1 + 0x1c)) goto LAB_002e2bcc;
    iVar3 = iVar7 << 1;
  }
  bVar1 = true;
  *(int *)(param_1 + 0x1c) = iVar3;
LAB_002e2bcc:
  if (bVar1) {
    puStack_80 = (undefined4 *)0x0;
    iVar7 = *(int *)(param_1 + 0x1c) << 2;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&puStack_80);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_80,iVar7,uVar4);
    }
    puVar2 = puStack_80;
    uVar5 = 0;
    iVar7 = 0;
    puVar6 = puStack_80;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        iVar7 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *puVar6 = *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x18));
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x20));
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if (iVar7 != 0) {
      (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined4 **)(param_1 + 0x18) = puVar2;
  }
  auStack_7c[0] = 0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,auStack_7c);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_7c[0],0x24,uVar4);
  }
  uVar4 = FUN_002e2828(auStack_7c[0],param_2);
  *(int *)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x18)) = (int)uVar4;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return uVar4;
}


// ==== FUN_002e2d40 @ 002e2d40 ====

undefined4 * FUN_002e2d40(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puStack_80;
  undefined4 *apuStack_7c [3];
  
  bVar1 = false;
  iVar7 = *(int *)(param_1 + 0x20);
  iVar3 = 8;
  if (iVar7 != 0) {
    if (iVar7 != *(int *)(param_1 + 0x1c)) goto LAB_002e2d90;
    iVar3 = iVar7 << 1;
  }
  bVar1 = true;
  *(int *)(param_1 + 0x1c) = iVar3;
LAB_002e2d90:
  if (bVar1) {
    puStack_80 = (undefined4 *)0x0;
    iVar7 = *(int *)(param_1 + 0x1c) << 2;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&puStack_80);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_80,iVar7,uVar4);
    }
    puVar2 = puStack_80;
    uVar5 = 0;
    iVar7 = 0;
    puVar6 = puStack_80;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        iVar7 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *puVar6 = *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x18));
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x20));
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if (iVar7 != 0) {
      (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined4 **)(param_1 + 0x18) = puVar2;
  }
  apuStack_7c[0] = (undefined4 *)0x0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,apuStack_7c);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_7c[0],0x24,uVar4);
  }
  *apuStack_7c[0] = &DAT_003e8dd0;
  apuStack_7c[0][1] = 0;
  apuStack_7c[0][7] = 0;
  apuStack_7c[0][8] = 0;
  apuStack_7c[0][2] = 0;
  apuStack_7c[0][6] = 0;
  apuStack_7c[0][3] = 0;
  apuStack_7c[0][4] = 0;
  apuStack_7c[0][5] = 0;
  *(undefined4 **)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x18)) = apuStack_7c[0];
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return apuStack_7c[0];
}


// ==== FUN_002e2ef0 @ 002e2ef0 ====

undefined4 * FUN_002e2ef0(int param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puStack_90;
  undefined4 *apuStack_8c [3];
  
  bVar1 = false;
  iVar7 = *(int *)(param_1 + 0x20);
  iVar3 = 8;
  if (iVar7 != 0) {
    if (iVar7 != *(int *)(param_1 + 0x1c)) goto LAB_002e2f48;
    iVar3 = iVar7 << 1;
  }
  bVar1 = true;
  *(int *)(param_1 + 0x1c) = iVar3;
LAB_002e2f48:
  if (bVar1) {
    puStack_90 = (undefined4 *)0x0;
    iVar7 = *(int *)(param_1 + 0x1c) << 2;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&puStack_90);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_90,iVar7,uVar4);
    }
    puVar2 = puStack_90;
    uVar5 = 0;
    iVar7 = 0;
    puVar6 = puStack_90;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        iVar7 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *puVar6 = *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x18));
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x20));
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if (iVar7 != 0) {
      (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined4 **)(param_1 + 0x18) = puVar2;
  }
  apuStack_8c[0] = (undefined4 *)0x0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,apuStack_8c);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_8c[0],0x24,uVar4);
  }
  puVar2 = apuStack_8c[0];
  apuStack_8c[0][1] = 0;
  apuStack_8c[0][7] = 0;
  apuStack_8c[0][8] = 0;
  apuStack_8c[0][2] = 0;
  apuStack_8c[0][6] = 0;
  apuStack_8c[0][3] = 0;
  apuStack_8c[0][4] = 0;
  apuStack_8c[0][5] = 0;
  *apuStack_8c[0] = &DAT_003e8dd0;
  FUN_002e2910(apuStack_8c[0],param_2);
  *(undefined4 **)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x18)) = puVar2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return puVar2;
}


// ==== FUN_002e3100 @ 002e3100 ====

undefined4 FUN_002e3100(int param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      return 0;
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      while( true ) {
        iVar5 = uVar4 * 4;
        iVar1 = *(int *)(*(int *)(iVar5 + iVar1) + 0x10);
        if (iVar1 == 0) {
          uVar2 = *(uint *)(param_1 + 0x20);
        }
        else {
          lVar3 = stricmp(iVar1,param_2);
          if (lVar3 == 0) {
            iVar1 = *(int *)(*(int *)(iVar5 + *(int *)(param_1 + 0x18)) + 0xc);
            if (iVar1 == 0) {
              uVar2 = *(uint *)(param_1 + 0x20);
            }
            else {
              lVar3 = stricmp(iVar1,param_3);
              if (lVar3 == 0) {
                return *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x18));
              }
              uVar2 = *(uint *)(param_1 + 0x20);
            }
          }
          else {
            uVar2 = *(uint *)(param_1 + 0x20);
          }
        }
        uVar4 = uVar4 + 1;
        if (uVar2 <= uVar4) break;
        iVar1 = *(int *)(param_1 + 0x18);
      }
    }
  }
  return 0;
}


// ==== FUN_002e31e0 @ 002e31e0 ====

undefined4 FUN_002e31e0(int param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  if ((param_2 != 0) && (uVar4 = 0, *(int *)(param_1 + 0x20) != 0)) {
    iVar1 = *(int *)(param_1 + 0x18);
    while( true ) {
      iVar1 = *(int *)(*(int *)(uVar4 * 4 + iVar1) + 0x10);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      else {
        lVar3 = stricmp(iVar1,param_2);
        if (lVar3 == 0) {
          return *(undefined4 *)(uVar4 * 4 + *(int *)(param_1 + 0x18));
        }
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      uVar4 = uVar4 + 1;
      if (uVar2 <= uVar4) break;
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  return 0;
}


// ==== FUN_002e3288 @ 002e3288 ====

undefined4 FUN_002e3288(int param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  if ((param_2 != 0) && (uVar4 = 0, *(int *)(param_1 + 0x20) != 0)) {
    iVar1 = *(int *)(param_1 + 0x18);
    while( true ) {
      iVar1 = *(int *)(*(int *)(uVar4 * 4 + iVar1) + 0xc);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      else {
        lVar3 = stricmp(iVar1,param_2);
        if (lVar3 == 0) {
          return *(undefined4 *)(uVar4 * 4 + *(int *)(param_1 + 0x18));
        }
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      uVar4 = uVar4 + 1;
      if (uVar2 <= uVar4) break;
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  return 0;
}


// ==== FUN_002e3330 @ 002e3330 ====

undefined4 FUN_002e3330(int param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  if ((param_2 != 0) && (uVar4 = 0, *(int *)(param_1 + 0x20) != 0)) {
    iVar1 = *(int *)(param_1 + 0x18);
    while( true ) {
      iVar1 = *(int *)(*(int *)(uVar4 * 4 + iVar1) + 0x10);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      else {
        lVar3 = stricmp(iVar1,param_2);
        if (lVar3 == 0) {
          return *(undefined4 *)(*(int *)(uVar4 * 4 + *(int *)(param_1 + 0x18)) + 0x14);
        }
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      uVar4 = uVar4 + 1;
      if (uVar2 <= uVar4) break;
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  return 0;
}


// ==== FUN_002e33e0 @ 002e33e0 ====

undefined4 FUN_002e33e0(int param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x20)) {
    return *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x18));
  }
  return 0;
}


// ==== FUN_002e3408 @ 002e3408 ====

undefined8 FUN_002e3408(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  *puVar1 = &DAT_003e8dd0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[2] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return param_1;
}


// ==== FUN_002e3440 @ 002e3440 ====

undefined8 FUN_002e3440(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[2] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = &DAT_003e8dd0;
  FUN_002e2910();
  return param_1;
}


// ==== FUN_002e34b8 @ 002e34b8 ====

void FUN_002e34b8(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003e8dd0;
  FUN_002e37a0();
  if (puVar1[3] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[5] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[4] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[7] != 0) {
    (*(code *)PTR_FUN_003c87e0)(puVar1[6]);
  }
  *puVar1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e3578 @ 002e3578 ====

undefined8 FUN_002e3578(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 auStack_50 [4];
  
  if (*(int *)((int)param_1 + 0xc) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  iVar1 = strlen(param_2);
  auStack_50[0] = 0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 + 1,auStack_50)
  ;
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_50[0],iVar1 + 1,uVar2);
  }
  *(undefined4 *)((int)param_1 + 0xc) = auStack_50[0];
  strcpy(auStack_50[0],param_2);
  return param_1;
}


// ==== FUN_002e3630 @ 002e3630 ====

undefined8 FUN_002e3630(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 auStack_50 [4];
  
  if (*(int *)((int)param_1 + 0x10) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  iVar1 = strlen(param_2);
  auStack_50[0] = 0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 + 1,auStack_50)
  ;
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_50[0],iVar1 + 1,uVar2);
  }
  *(undefined4 *)((int)param_1 + 0x10) = auStack_50[0];
  strcpy(auStack_50[0],param_2);
  return param_1;
}


// ==== FUN_002e36e8 @ 002e36e8 ====

undefined8 FUN_002e36e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 auStack_50 [4];
  
  if (*(int *)((int)param_1 + 0x14) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  iVar1 = strlen(param_2);
  auStack_50[0] = 0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 + 1,auStack_50)
  ;
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_50[0],iVar1 + 1,uVar2);
  }
  *(undefined4 *)((int)param_1 + 0x14) = auStack_50[0];
  strcpy(auStack_50[0],param_2);
  return param_1;
}


// ==== FUN_002e37a0 @ 002e37a0 ====

void FUN_002e37a0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      while( true ) {
        piVar1 = *(int **)(uVar3 * 4 + iVar2);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        }
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 0x20) <= uVar3) break;
        iVar2 = *(int *)(param_1 + 0x18);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ==== FUN_002e3828 @ 002e3828 ====

void FUN_002e3828(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    piVar3 = *(int **)(param_1 + 0x18);
    if ((int *)*piVar3 == param_2) {
      uVar1 = *(uint *)(param_1 + 0x20);
LAB_002e387c:
      if (uVar1 <= uVar6) {
        uVar1 = *(uint *)(param_1 + 0x20);
        goto LAB_002e38a8;
      }
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 0xc))((int)param_2 + (int)*(short *)(*param_2 + 8),3);
      }
    }
    else {
      for (uVar6 = 1; piVar3 = piVar3 + 1, uVar6 < *(uint *)(param_1 + 0x20); uVar6 = uVar6 + 1) {
        if ((int *)*piVar3 == param_2) {
          uVar1 = *(uint *)(param_1 + 0x20);
          goto LAB_002e387c;
        }
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
LAB_002e38a8:
  uVar6 = uVar6 + 1;
  if (uVar6 < uVar1) {
    iVar2 = *(int *)(param_1 + 0x18);
    while( true ) {
      iVar4 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      puVar5 = (undefined4 *)(iVar4 + iVar2);
      puVar5[-1] = *puVar5;
      if (*(uint *)(param_1 + 0x20) <= uVar6) break;
      iVar2 = *(int *)(param_1 + 0x18);
    }
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x18) + -4) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}


// ==== FUN_002e3918 @ 002e3918 ====

undefined4 FUN_002e3918(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ==== FUN_002e3920 @ 002e3920 ====

undefined4 FUN_002e3920(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ==== FUN_002e3928 @ 002e3928 ====

undefined4 FUN_002e3928(int *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iStack_a0;
  undefined4 *puStack_9c;
  int *piStack_98;
  
  DAT_00451228 = *param_1;
  DAT_0045122c = param_1[1];
  DAT_00451230 = param_1[2];
  DAT_00451234 = param_1[3];
  DAT_00451238 = param_1[4];
  DAT_0045123c = param_1[5];
  DAT_00451240 = param_1[6];
  DAT_00451244 = param_1[7];
  DAT_00451248 = param_1[8];
  DAT_0045124c = param_1[9];
  DAT_00451250 = param_1[10];
  DAT_00451254 = param_1[0xb];
  DAT_00451258 = param_1[0xc];
  DAT_0045125c = param_1[0xd];
  DAT_00451260 = param_1[0xe];
  DAT_00451264 = param_1[0xf];
  DAT_00451268 = param_1[0x10];
  DAT_0045126c = param_1[0x11];
  DAT_00451270 = param_1[0x12];
  DAT_00451274 = param_1[0x13];
  DAT_00451278 = param_1[0x14];
  DAT_0045127c = param_1[0x15];
  DAT_00451280 = param_1[0x16];
  DAT_00451284 = param_1[0x17];
  DAT_00451288 = param_1[0x18];
  DAT_0045128c = param_1[0x19];
  DAT_00451290 = param_1[0x1a];
  DAT_00451294 = param_1[0x1b];
  DAT_00451298 = param_1[0x1c];
  if (DAT_003c87e4 == (int *)0x0) {
    DAT_003c87e4 = DAT_003c87e8;
  }
  DAT_003c87d4 = 0;
  if (DAT_0045122c == 0) {
    DAT_0045129c = 0;
  }
  else {
    iStack_a0 = 0;
    iVar7 = DAT_0045122c << 2;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&iStack_a0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(iStack_a0,iVar7,uVar2);
    }
    DAT_0045129c = iStack_a0;
    uVar6 = 0;
    if (DAT_0045122c != 0) {
      do {
        iVar7 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(iVar7 + DAT_0045129c) = 0;
      } while (uVar6 < DAT_0045122c);
    }
  }
  if (DAT_00451228 == 0) {
    DAT_003c87d8 = (undefined4 *)0x0;
    puVar1 = DAT_003c87d8;
  }
  else {
    puStack_9c = (undefined4 *)0x0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,
                       (uint)&iStack_a0 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_9c,0x1c,uVar2);
    }
    puVar1 = puStack_9c;
    iVar7 = DAT_00451228;
    puStack_9c[2] = 0;
    *puStack_9c = &DAT_003e8ee8;
    puStack_9c[5] = 0;
    puStack_9c[6] = iVar7;
    puStack_9c[4] = 0;
    puStack_9c[1] = 0;
    puStack_9c[3] = 0;
    if (iVar7 != 0) {
      piStack_98 = (int *)0x0;
      iVar8 = iVar7 * 0x14 + 0x10;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                         (uint)&iStack_a0 | 8);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_98,iVar8,uVar2);
      }
      iVar8 = iVar7 + -1;
      piVar5 = piStack_98 + 4;
      *piStack_98 = iVar7;
      piVar3 = piVar5;
      if (iVar7 != 0) {
        do {
          *piVar3 = (int)&DAT_003e8ed0;
          iVar8 = iVar8 + -1;
          piVar3[2] = 0;
          piVar3[3] = 0;
          *(undefined1 *)(piVar3 + 4) = 0;
          piVar3 = piVar3 + 5;
        } while (iVar8 != -1);
      }
      puVar1[1] = piVar5;
      uVar6 = 1;
      puVar1[4] = piVar5;
      piStack_98[6] = 0;
      iVar7 = 0;
      if (1 < (uint)puVar1[6]) {
        iVar8 = 0x14;
        do {
          uVar6 = uVar6 + 1;
          iVar4 = puVar1[1] + iVar7;
          iVar7 = iVar7 + 0x14;
          *(int *)(iVar8 + puVar1[1] + 8) = iVar4;
          *(int *)(*(int *)(iVar8 + puVar1[1] + 8) + 0xc) = iVar8 + puVar1[1];
          iVar8 = iVar8 + 0x14;
        } while (uVar6 < (uint)puVar1[6]);
      }
      *(undefined4 *)(puVar1[6] * 0x14 + puVar1[1] + -8) = 0;
    }
  }
  DAT_003c87d8 = puVar1;
  DAT_003c87dc = 1;
  return 1;
}


// ==== FUN_002e3d28 @ 002e3d28 ====

void FUN_002e3d28(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (DAT_0045129c != 0) {
    uVar5 = 0;
    if (DAT_0045122c != 0) {
      do {
        if (*(int *)(uVar5 * 4 + DAT_0045129c) != 0) {
          FUN_002e11a0();
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < DAT_0045122c);
    }
    (*(code *)PTR_FUN_003c87e0)(DAT_0045129c);
    DAT_0045129c = 0;
  }
  if (DAT_003c87d8 != (int *)0x0) {
    iVar1 = DAT_003c87d8[2];
    while (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
      }
      piVar2 = DAT_003c87d8;
      *(undefined1 *)(iVar1 + 0x10) = 0;
      if (iVar1 == piVar2[2]) {
        piVar2[2] = *(int *)(iVar1 + 0xc);
        iVar4 = piVar2[3];
      }
      else {
        iVar4 = piVar2[3];
      }
      if (iVar1 == iVar4) {
        piVar2[3] = *(int *)(iVar1 + 8);
        iVar4 = *(int *)(iVar1 + 8);
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar1 + 0xc);
      }
      else {
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        iVar4 = *(int *)(iVar1 + 0xc);
      }
      if (iVar4 == 0) {
        iVar4 = piVar2[4];
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
        iVar4 = piVar2[4];
      }
      piVar3 = DAT_003c87d8;
      *(int *)(iVar1 + 0xc) = iVar4;
      piVar2[4] = iVar1;
      piVar2[5] = piVar2[5] + -1;
      iVar1 = piVar3[2];
    }
    if (DAT_003c87d8 != (int *)0x0) {
      (**(code **)(*DAT_003c87d8 + 0xc))((int)DAT_003c87d8 + (int)*(short *)(*DAT_003c87d8 + 8),3);
    }
    DAT_003c87d8 = (int *)0x0;
  }
  DAT_003c87d4 = 0;
  DAT_003c87dc = 0;
  return;
}


// ==== FUN_002e3f28 @ 002e3f28 ====

void FUN_002e3f28(long param_1,long param_2)

{
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_00451228 = 100;
    DAT_00451298 = 0;
    DAT_00451248 = 1;
    DAT_0045122c = 1;
    DAT_00451230 = 0;
    DAT_00451234 = 0;
    DAT_00451238 = 0;
    DAT_0045123c = 0;
    DAT_00451240 = 0;
    DAT_00451244 = 0;
    DAT_0045124c = 0;
    DAT_00451250 = 0;
    DAT_00451254 = 0;
    DAT_00451258 = 0;
    DAT_0045125c = 0;
    DAT_00451260 = 0;
    DAT_00451264 = 0;
    DAT_00451268 = 0;
    DAT_0045126c = 0;
    DAT_00451270 = 0;
    DAT_00451274 = 0;
    DAT_00451278 = 0;
    DAT_0045127c = 0;
    DAT_00451280 = 0;
    DAT_00451284 = 0;
    DAT_00451288 = 0;
    DAT_0045128c = 0;
    DAT_00451290 = 0;
    DAT_00451294 = 0;
  }
  return;
}


// ==== FUN_002e3fc8 @ 002e3fc8 ====

undefined8 FUN_002e3fc8(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = param_2;
  puVar1[8] = 1;
  puVar1[1] = 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  return param_1;
}


// ==== FUN_002e4048 @ 002e4048 ====

undefined8 FUN_002e4048(undefined8 param_1)

{
  FUN_002e4070();
  return param_1;
}


// ==== FUN_002e4070 @ 002e4070 ====

undefined8 FUN_002e4070(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[8] = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[10] = param_2[10];
  puVar1[0xb] = param_2[0xb];
  puVar1[0xc] = param_2[0xc];
  puVar1[0xd] = param_2[0xd];
  puVar1[0xe] = param_2[0xe];
  puVar1[0xf] = param_2[0xf];
  puVar1[0x10] = param_2[0x10];
  puVar1[0x11] = param_2[0x11];
  puVar1[0x12] = param_2[0x12];
  puVar1[0x13] = param_2[0x13];
  puVar1[0x14] = param_2[0x14];
  puVar1[0x15] = param_2[0x15];
  puVar1[0x16] = param_2[0x16];
  puVar1[0x17] = param_2[0x17];
  puVar1[0x18] = param_2[0x18];
  puVar1[0x19] = param_2[0x19];
  puVar1[0x1a] = param_2[0x1a];
  puVar1[0x1b] = param_2[0x1b];
  puVar1[0x1c] = param_2[0x1c];
  return param_1;
}


// ==== FUN_002e4160 @ 002e4160 ====

void FUN_002e4160(undefined8 param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_002e4188 @ 002e4188 ====

undefined1 FUN_002e4188(void)

{
  return DAT_003c87dc;
}


// ==== FUN_002e4198 @ 002e4198 ====

void FUN_002e4198(void)

{
  FUN_002e3f28(1,0xffff);
  return;
}


// ==== FUN_002e41b8 @ 002e41b8 ====

void FUN_002e41b8(void)

{
  FUN_002e3f28(0,0xffff);
  return;
}


// ==== FUN_002e41d8 @ 002e41d8 ====

undefined8 FUN_002e41d8(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 *puStack_b4;
  undefined4 *apuStack_b0 [4];
  
  puVar10 = (undefined4 *)param_1;
  *puVar10 = &DAT_003e90c0;
  puVar10[2] = &DAT_003e0028;
  puVar10[3] = 0;
  puVar10[4] = &DAT_003e0028;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[8] = param_3;
  puVar10[9] = 0;
  puVar10[10] = 0;
  if (param_2 == 0) {
    puStack_bc = (undefined4 *)0x0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),5,
                       (uint)&uStack_c0 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_bc,5,uVar4);
    }
    puVar10[1] = puStack_bc;
    uVar1 = DAT_00406394;
    *puStack_bc = DAT_00406390;
    *(undefined1 *)(puStack_bc + 1) = uVar1;
  }
  else {
    iVar3 = strlen(param_2);
    uStack_c0 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3 + 1,
                       &uStack_c0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_c0,iVar3 + 1,uVar4);
    }
    puVar10[1] = uStack_c0;
    strcpy(uStack_c0,param_2);
  }
  iVar3 = FUN_0038cc20();
  iVar3 = *(int *)(iVar3 + 0x400);
  puVar10[0x16] = iVar3;
  if (iVar3 == 0) {
    puVar10[0x17] = 0;
  }
  else {
    uStack_b8 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3 << 2,
                       (uint)&uStack_c0 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_b8,iVar3 << 2,uVar4);
    }
    iVar3 = 0;
    puVar10[0x17] = uStack_b8;
    if (0 < (int)puVar10[0x16]) {
      iVar8 = puVar10[0x17];
      while( true ) {
        iVar5 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar5 + iVar8) = 0;
        if ((int)puVar10[0x16] <= iVar3) break;
        iVar8 = puVar10[0x17];
      }
    }
  }
  puStack_b4 = (undefined4 *)0x0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_b4);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(puStack_b4,0x1c,uVar4);
  }
  puVar2 = puStack_b4;
  *puStack_b4 = &DAT_003e90a8;
  puStack_b4[2] = 0;
  puStack_b4[5] = 0;
  puStack_b4[6] = 4;
  puStack_b4[4] = 0;
  puStack_b4[1] = 0;
  puStack_b4[3] = 0;
  apuStack_b0[0] = (undefined4 *)0x0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x60,apuStack_b0);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_b0[0],0x60,uVar4);
  }
  iVar3 = 3;
  puVar7 = apuStack_b0[0] + 4;
  *apuStack_b0[0] = 4;
  puVar6 = puVar7;
  do {
    *puVar6 = &DAT_003e9090;
    iVar3 = iVar3 + -1;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6 = puVar6 + 5;
  } while (iVar3 != -1);
  puVar2[1] = puVar7;
  uVar9 = 1;
  puVar2[4] = puVar7;
  apuStack_b0[0][6] = 0;
  iVar3 = 0;
  if (1 < (uint)puVar2[6]) {
    iVar8 = 0x14;
    do {
      uVar9 = uVar9 + 1;
      iVar5 = puVar2[1] + iVar3;
      iVar3 = iVar3 + 0x14;
      *(int *)(iVar8 + puVar2[1] + 8) = iVar5;
      *(int *)(*(int *)(iVar8 + puVar2[1] + 8) + 0xc) = iVar8 + puVar2[1];
      iVar8 = iVar8 + 0x14;
    } while (uVar9 < (uint)puVar2[6]);
  }
  *(undefined4 *)(puVar2[6] * 0x14 + puVar2[1] + -8) = 0;
  puVar10[0xb] = puVar2;
  return param_1;
}


// ==== FUN_002e45f8 @ 002e45f8 ====

void FUN_002e45f8(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e90c0;
  while (*(int *)(puVar4[0xb] + 8) != 0) {
    piVar1 = *(int **)(*(int *)(puVar4[0xb] + 8) + 4);
    iVar3 = *piVar1;
    (**(code **)(iVar3 + 0x24))((int)piVar1 + (int)*(short *)(iVar3 + 0x20),param_1);
  }
  piVar1 = (int *)puVar4[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  piVar1 = (int *)puVar4[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  (*(code *)PTR_FUN_003c87e0)(puVar4[1]);
  if (puVar4[0x16] != 0) {
    iVar3 = 0;
    if (0 < (int)puVar4[0x16]) {
      iVar2 = puVar4[0x17];
      while( true ) {
        piVar1 = *(int **)(iVar3 * 4 + iVar2);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        }
        iVar3 = iVar3 + 1;
        if ((int)puVar4[0x16] <= iVar3) break;
        iVar2 = puVar4[0x17];
      }
    }
    (*(code *)PTR_FUN_003c87e0)(puVar4[0x17]);
  }
  *puVar4 = &DAT_003e0040;
  puVar4[4] = &DAT_003e0040;
  puVar4[2] = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e4860 @ 002e4860 ====

void FUN_002e4860(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  
  piVar3 = *(int **)(param_1 + 0x2c);
  iVar7 = piVar3[5];
  uStack_a8 = param_2;
  if (iVar7 == piVar3[6]) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),3);
    }
    puStack_b0 = (undefined4 *)0x0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_b0,0x1c,uVar2);
    }
    puVar1 = puStack_b0;
    iVar8 = iVar7 * 2;
    puStack_b0[2] = 0;
    *puStack_b0 = &DAT_003e90a8;
    puStack_b0[5] = 0;
    puStack_b0[6] = iVar8;
    puStack_b0[4] = 0;
    puStack_b0[1] = 0;
    puStack_b0[3] = 0;
    if (iVar8 != 0) {
      piStack_ac = (int *)0x0;
      iVar7 = iVar7 * 0x28 + 0x10;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&piStack_ac
                        );
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_ac,iVar7,uVar2);
      }
      iVar7 = iVar8 + -1;
      piVar5 = piStack_ac + 4;
      *piStack_ac = iVar8;
      piVar3 = piVar5;
      if (iVar8 != 0) {
        do {
          *piVar3 = (int)&DAT_003e9090;
          iVar7 = iVar7 + -1;
          piVar3[2] = 0;
          piVar3[3] = 0;
          *(undefined1 *)(piVar3 + 4) = 0;
          piVar3 = piVar3 + 5;
        } while (iVar7 != -1);
      }
      puVar1[1] = piVar5;
      uVar6 = 1;
      puVar1[4] = piVar5;
      piStack_ac[6] = 0;
      iVar7 = 0;
      if (1 < (uint)puVar1[6]) {
        iVar8 = 0x14;
        do {
          uVar6 = uVar6 + 1;
          iVar4 = puVar1[1] + iVar7;
          iVar7 = iVar7 + 0x14;
          *(int *)(iVar8 + puVar1[1] + 8) = iVar4;
          *(int *)(*(int *)(iVar8 + puVar1[1] + 8) + 0xc) = iVar8 + puVar1[1];
          iVar8 = iVar8 + 0x14;
        } while (uVar6 < (uint)puVar1[6]);
      }
      *(undefined4 *)(puVar1[6] * 0x14 + puVar1[1] + -8) = 0;
    }
    *(undefined4 **)(param_1 + 0x2c) = puVar1;
  }
  iVar7 = *(int *)(param_1 + 0x2c);
  iVar8 = *(int *)(iVar7 + 0x10);
  if (iVar8 != 0) {
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar8 + 0xc);
    *(undefined1 *)(iVar8 + 0x10) = 1;
    *(undefined4 *)(iVar8 + 4) = uStack_a8;
    if (*(int *)(iVar7 + 0xc) == 0) {
      *(int *)(iVar7 + 0xc) = iVar8;
      *(int *)(iVar7 + 8) = iVar8;
      *(undefined4 *)(iVar8 + 0xc) = 0;
      *(undefined4 *)(*(int *)(iVar7 + 8) + 8) = 0;
      *(undefined4 *)(*(int *)(iVar7 + 0xc) + 8) = 0;
      *(undefined4 *)(*(int *)(iVar7 + 0xc) + 0xc) = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar7 + 0xc);
      *(undefined4 *)(iVar8 + 0xc) = 0;
      *(int *)(*(int *)(iVar7 + 0xc) + 0xc) = iVar8;
      *(int *)(iVar7 + 0xc) = iVar8;
    }
  }
  return;
}


// ==== FUN_002e4b98 @ 002e4b98 ====

void FUN_002e4b98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (param_2 == *(int *)(iVar1 + 4)) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  if (iVar1 == *(int *)(iVar2 + 8)) {
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  if (iVar1 == iVar3) {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 8);
    iVar3 = *(int *)(iVar1 + 8);
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  else {
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  if (iVar3 == 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  else {
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(int *)(iVar2 + 0x10) = iVar1;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
  return;
}


// ==== FUN_002e4c60 @ 002e4c60 ====

/* WARNING: Removing unreachable block (ram,0x002e4c74) */

int FUN_002e4c60(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return -1;
  }
  return (*(int *)(param_1 + 0x14) - *(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 4)) / 0x14;
}


// ==== FUN_002e4ca8 @ 002e4ca8 ====

void FUN_002e4ca8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  }
  return;
}


// ==== FUN_002e4ce0 @ 002e4ce0 ====

undefined4 FUN_002e4ce0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x58))) {
    return *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 0x5c));
  }
  return 0;
}


// ==== FUN_002e4d18 @ 002e4d18 ====

undefined8 FUN_002e4d18(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (iVar1 < *(int *)(param_1 + 0x58)) {
      if ((code *)param_2[1] != (code *)0x0) {
        uVar2 = (*(code *)param_2[1])();
        *(int *)(iVar1 * 4 + *(int *)(param_1 + 0x5c)) = (int)uVar2;
      }
    }
  }
  return uVar2;
}


// ==== FUN_002e4d88 @ 002e4d88 ====

undefined8 FUN_002e4d88(undefined8 param_1)

{
  FUN_0038cf20();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003e9110;
  return param_1;
}


// ==== FUN_002e4dc8 @ 002e4dc8 ====

undefined8 FUN_002e4dc8(undefined8 param_1)

{
  FUN_0038d0b0();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003e90f8;
  return param_1;
}


// ==== FUN_002e4e28 @ 002e4e28 ====

undefined4
FUN_002e4e28(undefined4 param_1,float param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_3 - *param_4;
  fVar3 = param_3[1] - param_4[1];
  fVar4 = param_3[2] - param_4[2];
  fVar7 = fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4;
  if (0.0 <= param_2) {
    if (fVar7 <= param_2 * param_2) {
      fVar5 = *param_5;
      goto LAB_002e4eac;
    }
LAB_002e4ea0:
    uVar2 = 0;
  }
  else {
    fVar5 = *param_5;
LAB_002e4eac:
    fVar4 = fVar6 * fVar5 + fVar3 * param_5[1] + fVar4 * param_5[2];
    fVar3 = (float)FUN_002ea1c8();
    if (fVar4 < 0.0) {
      if (0.0 <= fVar3) goto LAB_002e4ea0;
      bVar1 = fVar4 * fVar4 <= fVar3 * fVar3 * fVar7;
    }
    else {
      if (fVar3 < 0.0) {
        return 1;
      }
      bVar1 = fVar3 * fVar3 * fVar7 <= fVar4 * fVar4;
    }
    uVar2 = 1;
    if (!bVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ==== FUN_002e4f58 @ 002e4f58 ====

undefined8 FUN_002e4f58(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 auStack_40 [4];
  
  FUN_002e75b8();
  puVar6 = (undefined4 *)param_1;
  *puVar6 = &DAT_003e9608;
  iVar1 = **(int **)(param_2 + 0x18);
  iVar1 = (**(code **)(iVar1 + 0x1c))
                    ((int)*(int **)(param_2 + 0x18) + (int)*(short *)(iVar1 + 0x18));
  uVar2 = (**(code **)(iVar1 + 4))();
  puVar6[5] = 0;
  puVar6[2] = uVar2;
  iVar1 = FUN_0038d338();
  iVar1 = *(int *)(iVar1 + 0x400);
  puVar6[4] = iVar1;
  if (iVar1 == 0) {
    puVar6[3] = 0;
  }
  else {
    auStack_40[0] = 0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 << 2,
                       auStack_40);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_40[0],iVar1 << 2,uVar3);
    }
    uVar5 = 0;
    puVar6[3] = auStack_40[0];
    if (puVar6[4] != 0) {
      iVar1 = puVar6[3];
      while( true ) {
        iVar4 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar4 + iVar1) = 0;
        if ((uint)puVar6[4] <= uVar5) break;
        iVar1 = puVar6[3];
      }
    }
  }
  return param_1;
}


// ==== FUN_002e5088 @ 002e5088 ====

void FUN_002e5088(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e9608;
  piVar1 = (int *)puVar4[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  iVar2 = puVar4[3];
  if (iVar2 != 0) {
    uVar3 = 0;
    if (puVar4[4] != 0) {
      do {
        piVar1 = *(int **)(uVar3 * 4 + puVar4[3]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        }
        uVar3 = uVar3 + 1;
        iVar2 = puVar4[3];
      } while (uVar3 < (uint)puVar4[4]);
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2);
  }
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e5178 @ 002e5178 ====

/* Strings referenciadas:
     "IPathFinder" */

void FUN_002e5178(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004513c0 = &DAT_003e00e0;
    }
    else {
      FUN_002e75d0(0x4512b0,0x406550,0,0,0,0);
    }
  }
  return;
}


// ==== FUN_002e51d8 @ 002e51d8 ====

undefined8 FUN_002e51d8(undefined8 param_1)

{
  FUN_0038d4c0();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003e9678;
  return param_1;
}


// ==== FUN_002e5218 @ 002e5218 ====

undefined4 FUN_002e5218(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(param_1 + 0xc) + *param_2 * 4);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_2[1])();
    *piVar2 = iVar1;
    iVar1 = *piVar2;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return 1;
}


// ==== FUN_002e5288 @ 002e5288 ====

void FUN_002e5288(void)

{
  FUN_002e5178(1,0xffff);
  return;
}


// ==== FUN_002e52a8 @ 002e52a8 ====

void FUN_002e52a8(void)

{
  FUN_002e5178(0,0xffff);
  return;
}


// ==== FUN_002e52c8 @ 002e52c8 ====

undefined4 FUN_002e52c8(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    strcpy(param_2,param_1);
    while (lVar2 = FUN_0035c8d4(param_2,0x5c), lVar2 != 0) {
      *(undefined1 *)lVar2 = 0x2f;
    }
    while (lVar2 = FUN_0035c8d4(param_2,0x3a), lVar2 != 0) {
      *(undefined1 *)lVar2 = 0x2f;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_002e5358 @ 002e5358 ====

undefined8 FUN_002e5358(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puStack_80;
  int *piStack_7c;
  
  puVar9 = (undefined4 *)param_1;
  puVar9[1] = 0;
  *puVar9 = &DAT_003e9c60;
  if (param_2 == 0) {
    puVar9[2] = 0;
  }
  else {
    puStack_80 = (undefined4 *)0x0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_80);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_80,0x1c,uVar2);
    }
    puVar1 = puStack_80;
    piVar3 = DAT_003c87e8;
    *puStack_80 = &DAT_003e9a80;
    puStack_80[2] = 0;
    iVar4 = (int)param_2;
    puStack_80[5] = 0;
    puStack_80[6] = iVar4;
    puStack_80[4] = 0;
    puStack_80[1] = 0;
    iVar8 = iVar4 * 0x14 + 0x10;
    puStack_80[3] = 0;
    piStack_7c = (int *)0x0;
    iVar5 = *piVar3;
    uVar2 = (**(code **)(iVar5 + 0x34))
                      ((int)piVar3 + (int)*(short *)(iVar5 + 0x30),iVar8,(uint)&puStack_80 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_7c,iVar8,uVar2);
    }
    iVar5 = iVar4 + -1;
    piVar6 = piStack_7c + 4;
    *piStack_7c = iVar4;
    piVar3 = piVar6;
    if (param_2 != 0) {
      do {
        *piVar3 = (int)&DAT_003e9a68;
        iVar5 = iVar5 + -1;
        piVar3[2] = 0;
        piVar3[3] = 0;
        *(undefined1 *)(piVar3 + 4) = 0;
        piVar3 = piVar3 + 5;
      } while (iVar5 != -1);
    }
    puVar1[1] = piVar6;
    uVar7 = 1;
    puVar1[4] = piVar6;
    piStack_7c[6] = 0;
    iVar5 = 0;
    if (1 < (uint)puVar1[6]) {
      iVar8 = 0x14;
      do {
        uVar7 = uVar7 + 1;
        iVar4 = puVar1[1] + iVar5;
        iVar5 = iVar5 + 0x14;
        *(int *)(iVar8 + puVar1[1] + 8) = iVar4;
        *(int *)(*(int *)(iVar8 + puVar1[1] + 8) + 0xc) = iVar8 + puVar1[1];
        iVar8 = iVar8 + 0x14;
      } while (uVar7 < (uint)puVar1[6]);
    }
    *(undefined4 *)(puVar1[6] * 0x14 + puVar1[1] + -8) = 0;
    puVar9[2] = puVar1;
  }
  return param_1;
}


// ==== FUN_002e55a0 @ 002e55a0 ====

long FUN_002e55a0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 8) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar2 = **(int **)(iVar1 + 4);
      lVar3 = (**(code **)(iVar2 + 0x14))
                        ((int)*(int **)(iVar1 + 4) + (int)*(short *)(iVar2 + 0x10),param_2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  return 0;
}


// ==== FUN_002e5848 @ 002e5848 ====

undefined8 FUN_002e5848(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  FUN_002e5358();
  puVar1 = (undefined4 *)param_1;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  *puVar1 = &DAT_003e9bb0;
  puVar1[3] = 0;
  return param_1;
}


// ==== FUN_002e58a0 @ 002e58a0 ====

void FUN_002e58a0(int param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puStack_80;
  int *piStack_7c;
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),3);
  }
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    puStack_80 = (undefined4 *)0x0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_80);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_80,0x1c,uVar2);
    }
    puVar1 = puStack_80;
    piVar3 = DAT_003c87e8;
    *puStack_80 = &DAT_003e9a80;
    puStack_80[2] = 0;
    iVar4 = (int)param_2;
    puStack_80[5] = 0;
    puStack_80[6] = iVar4;
    puStack_80[4] = 0;
    puStack_80[1] = 0;
    iVar8 = iVar4 * 0x14 + 0x10;
    puStack_80[3] = 0;
    piStack_7c = (int *)0x0;
    iVar5 = *piVar3;
    uVar2 = (**(code **)(iVar5 + 0x34))
                      ((int)piVar3 + (int)*(short *)(iVar5 + 0x30),iVar8,(uint)&puStack_80 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_7c,iVar8,uVar2);
    }
    iVar5 = iVar4 + -1;
    piVar6 = piStack_7c + 4;
    *piStack_7c = iVar4;
    piVar3 = piVar6;
    if (param_2 != 0) {
      do {
        *piVar3 = (int)&DAT_003e9a68;
        iVar5 = iVar5 + -1;
        piVar3[2] = 0;
        piVar3[3] = 0;
        *(undefined1 *)(piVar3 + 4) = 0;
        piVar3 = piVar3 + 5;
      } while (iVar5 != -1);
    }
    puVar1[1] = piVar6;
    uVar7 = 1;
    puVar1[4] = piVar6;
    piStack_7c[6] = 0;
    iVar5 = 0;
    if (1 < (uint)puVar1[6]) {
      iVar8 = 0x14;
      do {
        uVar7 = uVar7 + 1;
        iVar4 = puVar1[1] + iVar5;
        iVar5 = iVar5 + 0x14;
        *(int *)(iVar8 + puVar1[1] + 8) = iVar4;
        *(int *)(*(int *)(iVar8 + puVar1[1] + 8) + 0xc) = iVar8 + puVar1[1];
        iVar8 = iVar8 + 0x14;
      } while (uVar7 < (uint)puVar1[6]);
    }
    *(undefined4 *)(puVar1[6] * 0x14 + puVar1[1] + -8) = 0;
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}


// ==== FUN_002e5ae8 @ 002e5ae8 ====

undefined8 FUN_002e5ae8(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  FUN_002e5358(param_1,param_4);
  puVar3 = (undefined4 *)param_1;
  puVar3[3] = param_3;
  *puVar3 = &DAT_003e9b58;
  lVar2 = 8;
  if ((((DAT_00451244 != (code *)0x0) && (lVar2 = (*DAT_00451244)(), lVar2 != 2)) && (lVar2 != 4))
     && (((lVar2 != 8 && (lVar2 != 0x10)) && (lVar2 != 0x20)))) {
    lVar2 = 8;
  }
  iVar1 = param_2 % (int)lVar2;
  if (lVar2 == 0) {
    trap(7);
  }
  if (iVar1 != 0) {
    if (lVar2 == 0) {
      trap(7);
    }
    param_2 = (param_2 + (int)lVar2) - iVar1;
  }
  puVar3[5] = param_2;
  iVar1 = *(int *)puVar3[3];
  lVar2 = (**(code **)(iVar1 + 0x3c))
                    ((int)puVar3[3] + (int)*(short *)(iVar1 + 0x38),param_2,param_1);
  puVar3[4] = (int)lVar2;
  if (lVar2 == 0) {
    puVar3[5] = 0;
  }
  puVar3[6] = 0;
  puVar3[7] = 0;
  return param_1;
}


// ==== FUN_002e5c38 @ 002e5c38 ====

undefined8
FUN_002e5c38(undefined8 param_1,undefined4 param_2,int param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  FUN_002e5358(param_1,param_5);
  puVar3 = (undefined4 *)param_1;
  piVar4 = (int *)param_4;
  puVar3[3] = piVar4;
  puVar3[4] = param_2;
  *puVar3 = &DAT_003e9b58;
  lVar2 = 8;
  if ((((DAT_00451244 != (code *)0x0) && (lVar2 = (*DAT_00451244)(), lVar2 != 2)) && (lVar2 != 4))
     && (((lVar2 != 8 && (lVar2 != 0x10)) && (lVar2 != 0x20)))) {
    lVar2 = 8;
  }
  iVar1 = param_3 % (int)lVar2;
  if (lVar2 == 0) {
    trap(7);
  }
  if (iVar1 != 0) {
    if (lVar2 == 0) {
      trap(7);
    }
    param_3 = (param_3 + (int)lVar2) - iVar1;
  }
  puVar3[5] = param_3;
  puVar3[6] = 0;
  puVar3[7] = 0;
  if (param_4 != 0) {
    (**(code **)(*piVar4 + 0x24))((int)piVar4 + (int)*(short *)(*piVar4 + 0x20),param_1);
  }
  return param_1;
}


// ==== FUN_002e5d90 @ 002e5d90 ====

void FUN_002e5d90(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003e9b58;
  piVar1 = (int *)puVar2[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x4c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x48),puVar2[4]);
  }
  piVar1 = (int *)puVar2[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28),param_1);
  }
  piVar1 = (int *)puVar2[2];
  *puVar2 = &DAT_003e9c60;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  *puVar2 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e5e58 @ 002e5e58 ====

int FUN_002e5e58(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  uint uStack_50;
  
  lVar5 = 1;
  if (param_2 != 0) {
    lVar5 = param_2;
  }
  if (DAT_00451244 == (code *)0x0) {
    lVar2 = 8;
  }
  else {
    lVar2 = (*DAT_00451244)();
    if ((((lVar2 != 2) && (lVar2 != 4)) && (lVar2 != 8)) && ((lVar2 != 0x10 && (lVar2 != 0x20)))) {
      lVar2 = 8;
    }
  }
  switch((int)lVar2) {
  case 2:
    uStack_50 = 1;
    puVar3 = &UNK_004068f0;
    break;
  default:
    uStack_50 = 0;
    puVar3 = (undefined *)0x0;
    break;
  case 4:
    uStack_50 = 3;
    puVar3 = &UNK_004068f8;
    break;
  case 8:
    uStack_50 = 7;
    puVar3 = &UNK_00406908;
    break;
  case 0x10:
    uStack_50 = 0xf;
    puVar3 = &UNK_00406928;
    break;
  case 0x20:
    uStack_50 = 0x1f;
    puVar3 = &DAT_00406968;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar4 = iVar1 + (int)lVar5;
  if (*(uint *)(param_1 + 0x14) < uVar4) {
    iVar1 = 0;
  }
  else {
    *(uint *)(param_1 + 0x18) = uVar4;
    iVar1 = *(int *)(param_1 + 0x10) + iVar1;
    *(uint *)(param_1 + 0x18) = uVar4 + *(int *)(puVar3 + (uVar4 & uStack_50) * 4);
  }
  return iVar1;
}


// ==== FUN_002e5fb8 @ 002e5fb8 ====

undefined8 FUN_002e5fb8(undefined8 param_1,int param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puStack_a0;
  uint *puStack_9c;
  undefined4 auStack_98 [2];
  
  FUN_002e5358(param_1,param_3);
  puVar10 = (undefined4 *)param_1;
  *puVar10 = &DAT_003e9b08;
  lVar6 = 8;
  if ((((DAT_00451244 != (code *)0x0) && (lVar6 = (*DAT_00451244)(), lVar6 != 2)) && (lVar6 != 4))
     && (((lVar6 != 8 && (lVar6 != 0x10)) && (lVar6 != 0x20)))) {
    lVar6 = 8;
  }
  iVar9 = param_2 % (int)lVar6;
  if (lVar6 == 0) {
    trap(7);
  }
  iVar1 = param_2;
  if (iVar9 != 0) {
    if (lVar6 == 0) {
      trap(7);
    }
    iVar1 = (param_2 + (int)lVar6) - iVar9;
  }
  puVar10[3] = iVar1;
  if (DAT_00451244 == (code *)0x0) {
    lVar6 = 8;
  }
  else {
    lVar6 = (*DAT_00451244)();
    if (((lVar6 != 2) && (lVar6 != 4)) && ((lVar6 != 8 && ((lVar6 != 0x10 && (lVar6 != 0x20)))))) {
      lVar6 = 8;
    }
  }
  iVar9 = param_2 % (int)lVar6;
  if (lVar6 == 0) {
    trap(7);
  }
  if (iVar9 != 0) {
    if (lVar6 == 0) {
      trap(7);
    }
    param_2 = (param_2 + (int)lVar6) - iVar9;
  }
  if (DAT_00451244 == (code *)0x0) {
    lVar6 = 8;
  }
  else {
    lVar6 = (*DAT_00451244)();
    if ((((lVar6 != 2) && (lVar6 != 4)) && (lVar6 != 8)) && ((lVar6 != 0x10 && (lVar6 != 0x20)))) {
      lVar6 = 8;
    }
  }
  iVar9 = 0x30 % (int)lVar6;
  if (lVar6 == 0) {
    trap(7);
  }
  iVar1 = 0x30;
  if (iVar9 != 0) {
    if (lVar6 == 0) {
      trap(7);
    }
    iVar1 = ((int)lVar6 + 0x30) - iVar9;
  }
  FUN_002e5ae8(puVar10 + 4,(param_2 + iVar1) * param_3,param_4,param_3);
  puVar10[0xc] = &DAT_003e9b40;
  puVar10[0xe] = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = param_3;
  puVar10[0x10] = 0;
  puVar10[0xd] = 0;
  puVar10[0xf] = 0;
  if (param_3 != 0) {
    puStack_a0 = (uint *)0x0;
    iVar9 = param_3 * 0x14 + 0x10;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar9,&puStack_a0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_a0,iVar9,uVar3);
    }
    iVar9 = param_3 - 1;
    puVar7 = puStack_a0 + 4;
    *puStack_a0 = param_3;
    puVar4 = puVar7;
    if (param_3 != 0) {
      do {
        *puVar4 = (uint)&DAT_003e9a38;
        iVar9 = iVar9 + -1;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined1 *)(puVar4 + 4) = 0;
        puVar4 = puVar4 + 5;
      } while (iVar9 != -1);
    }
    puVar10[0xd] = puVar7;
    uVar8 = 1;
    puVar10[0x10] = puVar7;
    puStack_a0[6] = 0;
    iVar9 = 0;
    if (1 < (uint)puVar10[0x12]) {
      iVar1 = 0x14;
      do {
        uVar8 = uVar8 + 1;
        iVar5 = puVar10[0xd] + iVar9;
        iVar9 = iVar9 + 0x14;
        *(int *)(iVar1 + puVar10[0xd] + 8) = iVar5;
        *(int *)(*(int *)(iVar1 + puVar10[0xd] + 8) + 0xc) = iVar1 + puVar10[0xd];
        iVar1 = iVar1 + 0x14;
      } while (uVar8 < (uint)puVar10[0x12]);
    }
    *(undefined4 *)(puVar10[0x12] * 0x14 + puVar10[0xd] + -8) = 0;
  }
  puVar10[0x13] = &DAT_003e9b40;
  puVar10[0x15] = 0;
  puVar10[0x18] = 0;
  puVar10[0x19] = param_3;
  puVar10[0x17] = 0;
  puVar10[0x14] = 0;
  puVar10[0x16] = 0;
  if (param_3 != 0) {
    puStack_9c = (uint *)0x0;
    iVar9 = param_3 * 0x14 + 0x10;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar9,&puStack_9c);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_9c,iVar9,uVar3);
    }
    iVar9 = param_3 - 1;
    puVar7 = puStack_9c + 4;
    *puStack_9c = param_3;
    puVar4 = puVar7;
    if (param_3 != 0) {
      do {
        *puVar4 = (uint)&DAT_003e9a38;
        iVar9 = iVar9 + -1;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined1 *)(puVar4 + 4) = 0;
        puVar4 = puVar4 + 5;
      } while (iVar9 != -1);
    }
    puVar10[0x14] = puVar7;
    uVar8 = 1;
    puVar10[0x17] = puVar7;
    puStack_9c[6] = 0;
    iVar9 = 0;
    if (1 < (uint)puVar10[0x19]) {
      iVar1 = 0x14;
      do {
        uVar8 = uVar8 + 1;
        iVar5 = puVar10[0x14] + iVar9;
        iVar9 = iVar9 + 0x14;
        *(int *)(iVar1 + puVar10[0x14] + 8) = iVar5;
        *(int *)(*(int *)(iVar1 + puVar10[0x14] + 8) + 0xc) = iVar1 + puVar10[0x14];
        iVar1 = iVar1 + 0x14;
      } while (uVar8 < (uint)puVar10[0x19]);
    }
    *(undefined4 *)(puVar10[0x19] * 0x14 + puVar10[0x14] + -8) = 0;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    do {
      auStack_98[0] = 0;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x30,auStack_98);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_98[0],0x30,uVar3);
      }
      uVar2 = FUN_002e70f0(auStack_98[0],param_1);
      iVar9 = puVar10[0x10];
      if (iVar9 != 0) {
        puVar10[0x11] = puVar10[0x11] + 1;
        puVar10[0x10] = *(undefined4 *)(iVar9 + 0xc);
        *(undefined4 *)(iVar9 + 4) = uVar2;
        *(undefined1 *)(iVar9 + 0x10) = 1;
        if (puVar10[0xf] == 0) {
          puVar10[0xf] = iVar9;
          puVar10[0xe] = iVar9;
          *(undefined4 *)(iVar9 + 0xc) = 0;
          *(undefined4 *)(puVar10[0xe] + 8) = 0;
          *(undefined4 *)(puVar10[0xf] + 8) = 0;
          *(undefined4 *)(puVar10[0xf] + 0xc) = 0;
        }
        else {
          *(undefined4 *)(iVar9 + 8) = puVar10[0xf];
          *(undefined4 *)(iVar9 + 0xc) = 0;
          *(int *)(puVar10[0xf] + 0xc) = iVar9;
          puVar10[0xf] = iVar9;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  return param_1;
}


// ==== FUN_002e6740 @ 002e6740 ====

void FUN_002e6740(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e9b08;
  for (iVar1 = puVar4[0xe]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
    }
  }
  for (iVar1 = puVar4[0x15]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
    }
  }
  puVar4[0x13] = &DAT_003e9b40;
  if ((puVar4[0x19] != 0) && (piVar2 = (int *)puVar4[0x14], piVar2 != (int *)0x0)) {
    piVar3 = piVar2 + piVar2[-4] * 5;
    if (piVar2 != piVar3) {
      do {
        piVar3 = piVar3 + -5;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[0x14] != piVar3);
    }
    (*(code *)PTR_FUN_003c87e0)(puVar4[0x14] + -0x10);
  }
  puVar4[0x13] = &DAT_003e0040;
  puVar4[0xc] = &DAT_003e9b40;
  if ((puVar4[0x12] != 0) && (piVar2 = (int *)puVar4[0xd], piVar2 != (int *)0x0)) {
    piVar3 = piVar2 + piVar2[-4] * 5;
    if (piVar2 != piVar3) {
      do {
        piVar3 = piVar3 + -5;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[0xd] != piVar3);
    }
    (*(code *)PTR_FUN_003c87e0)(puVar4[0xd] + -0x10);
  }
  puVar4[0xc] = &DAT_003e0040;
  FUN_002e5d90(puVar4 + 4,2);
  piVar2 = (int *)puVar4[2];
  *puVar4 = &DAT_003e9c60;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
  }
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e69e8 @ 002e69e8 ====

void FUN_002e69e8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = param_2[1];
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 0xc);
    uVar3 = *(undefined4 *)(iVar2 + 4);
    *(undefined1 *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 4) = uVar3;
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(int *)(param_1 + 0x3c) = iVar1;
      *(int *)(param_1 + 0x38) = iVar1;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x38) + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x3c) + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0xc) = 0;
    }
    else {
      *(int *)(iVar1 + 8) = *(int *)(param_1 + 0x3c);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(*(int *)(param_1 + 0x3c) + 0xc) = iVar1;
      *(int *)(param_1 + 0x3c) = iVar1;
    }
  }
  iVar1 = param_2[1];
  *(undefined1 *)(iVar1 + 0x10) = 0;
  if (iVar1 == *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58);
  }
  if (iVar1 == iVar2) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 8);
    iVar2 = *(int *)(iVar1 + 8);
  }
  else {
    iVar2 = *(int *)(iVar1 + 8);
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
  }
  else {
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  *(int *)(param_1 + 0x5c) = iVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  *param_2 = &DAT_003e0040;
  return;
}


// ==== FUN_002e6cf0 @ 002e6cf0 ====

void FUN_002e6cf0(long param_1,long param_2)

{
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_004513c8 = 0;
  }
  return;
}


// ==== FUN_002e6d10 @ 002e6d10 ====

void FUN_002e6d10(undefined8 param_1,ulong param_2)

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


// ==== FUN_002e6d90 @ 002e6d90 ====

undefined8 FUN_002e6d90(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_002e5358(param_1,param_3);
  ((undefined4 *)param_1)[3] = param_2;
  *(undefined4 *)param_1 = &DAT_003e9c08;
  return param_1;
}


// ==== FUN_002e6dd8 @ 002e6dd8 ====

undefined8 FUN_002e6dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  lVar1 = (**(code **)(*piVar2 + 0x44))((int)piVar2 + (int)*(short *)(*piVar2 + 0x40));
  *(undefined4 *)param_3 = (int)lVar1;
  if (lVar1 == 0) {
    piVar2 = (int *)piVar2[3];
    if (piVar2 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = (**(code **)(*piVar2 + 0x34))
                          ((int)piVar2 + (int)*(short *)(*piVar2 + 0x30),param_2,param_3);
    }
  }
  return param_1;
}


// ==== FUN_002e6e60 @ 002e6e60 ====

long FUN_002e6e60(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  *(undefined4 *)(iVar3 + 4) = 0;
  if (param_1 == (int *)0x0) {
LAB_002e6ef0:
    lVar1 = 0;
  }
  else {
    iVar2 = *param_1;
    while (lVar1 = (**(code **)(iVar2 + 0x44))((int)param_1 + (int)*(short *)(iVar2 + 0x40),param_2)
          , lVar1 == 0) {
      param_1 = (int *)param_1[3];
      if (param_1 == (int *)0x0) goto LAB_002e6ef0;
      iVar2 = *param_1;
    }
    if (*(int **)(iVar3 + 4) == (int *)0x0) {
      *(int **)(iVar3 + 4) = param_1;
    }
    else {
      if (*(int **)(iVar3 + 4) != param_1) {
        return 0;
      }
      *(int **)(iVar3 + 4) = param_1;
    }
    (**(code **)(*param_1 + 0x24))((int)param_1 + (int)*(short *)(*param_1 + 0x20),param_3);
  }
  return lVar1;
}


// ==== FUN_002e6f10 @ 002e6f10 ====

void FUN_002e6f10(undefined8 param_1,ulong param_2)

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


// ==== FUN_002e6f90 @ 002e6f90 ====

void FUN_002e6f90(int param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}


// ==== FUN_002e6fb0 @ 002e6fb0 ====

long FUN_002e6fb0(long param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  lVar1 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
  if (lVar1 == 0) {
    (*(code *)piVar2[5])(param_2);
    lVar1 = param_1;
  }
  return lVar1;
}


// ==== FUN_002e7008 @ 002e7008 ====

void FUN_002e7008(int param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x14))(param_2);
  return;
}


// ==== FUN_002e7028 @ 002e7028 ====

long FUN_002e7028(long param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  lVar1 = 0;
  if ((uint)piVar2[4] <= param_2) {
    if (param_2 < (uint)(piVar2[4] + piVar2[5])) {
      lVar1 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
      if (lVar1 == 0) {
        lVar1 = param_1;
      }
    }
    else {
      lVar1 = 0;
    }
  }
  return lVar1;
}


// ==== FUN_002e7090 @ 002e7090 ====

int FUN_002e7090(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x20) <= param_2) {
    if (param_2 < *(uint *)(param_1 + 0x20) + *(int *)(param_1 + 0x24)) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                        (param_1 + 0x10 + (int)*(short *)(*(int *)(param_1 + 0x10) + 0x18));
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x10;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}


// ==== FUN_002e70f0 @ 002e70f0 ====

undefined8 FUN_002e70f0(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_002e5ae8(param_1,*(undefined4 *)(param_2 + 0xc),param_2 + 0x10,0);
  puVar1 = (undefined4 *)param_1;
  puVar1[8] = param_2;
  *puVar1 = &DAT_003e9a98;
  puVar1[10] = &DAT_003e9af0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  return param_1;
}


// ==== FUN_002e7158 @ 002e7158 ====

undefined8 FUN_002e7158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_002e5e58();
  *(undefined4 *)param_3 = (int)lVar2;
  iVar3 = (int)param_1;
  if (lVar2 == 0) {
    piVar1 = *(int **)(iVar3 + 0xc);
    if (piVar1 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = (**(code **)(*piVar1 + 0x34))
                          ((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),param_2,param_3);
    }
  }
  else {
    *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
  }
  return param_1;
}


// ==== FUN_002e71e0 @ 002e71e0 ====

long FUN_002e71e0(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_002e5e58();
  if (lVar1 != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return lVar1;
}


// ==== FUN_002e7220 @ 002e7220 ====

long FUN_002e7220(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  undefined *puStack_40;
  undefined4 uStack_3c;
  
  piVar3 = (int *)param_1;
  lVar5 = 0;
  if ((((uint)piVar3[4] <= param_2) && (param_2 < (uint)(piVar3[4] + piVar3[5]))) &&
     (lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18)),
     lVar5 = param_1, lVar2 != 0)) {
    lVar5 = lVar2;
  }
  if (lVar5 == param_1) {
    iVar4 = (int)lVar5;
    iVar1 = *(int *)(iVar4 + 0x24) + -1;
    *(int *)(iVar4 + 0x24) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar4 + 0x18) = 0;
      puStack_40 = &DAT_003e9af0;
      uStack_3c = *(undefined4 *)(iVar4 + 0x2c);
      FUN_002e69e8(*(undefined4 *)(iVar4 + 0x20),&puStack_40);
    }
  }
  return lVar5;
}


// ==== FUN_002e72d0 @ 002e72d0 ====

void FUN_002e72d0(void)

{
  FUN_002e6cf0(1,0xffff);
  return;
}


// ==== CNearestPoint_002e72f0 @ 002e72f0 ====

/* Strings referenciadas:
     "CNearestPoint" */

void CNearestPoint_002e72f0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004514e8 = &DAT_003ea790;
    }
    else {
      FUN_0038e108(0x4513d8,0x406a00,0,0,0,0);
      DAT_004514e8 = &DAT_003ea778;
    }
  }
  return;
}


// ==== FUN_002e7360 @ 002e7360 ====

undefined8 FUN_002e7360(undefined8 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = 0;
  *puVar1 = &DAT_003ea7c0;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  return param_1;
}


// ==== FUN_002e73b0 @ 002e73b0 ====

void FUN_002e73b0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_2 + 0x14))((int)param_2 + (int)*(short *)(*param_2 + 0x10));
  *(int **)(param_1 + *piVar1 * 4 + 4) = param_2;
  return;
}


// ==== FUN_002e7400 @ 002e7400 ====

undefined8 FUN_002e7400(undefined8 param_1)

{
  FUN_0038e438();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003ea7a8;
  return param_1;
}


// ==== FUN_002e7440 @ 002e7440 ====

undefined8 FUN_002e7440(undefined8 param_1)

{
  FUN_0038e108();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003ea778;
  return param_1;
}


// ==== FUN_002e74a0 @ 002e74a0 ====

void FUN_002e74a0(void)

{
  CNearestPoint_002e72f0(1,0xffff);
  return;
}


// ==== FUN_002e74c0 @ 002e74c0 ====

void FUN_002e74c0(void)

{
  CNearestPoint_002e72f0(0,0xffff);
  return;
}


// ==== FUN_002e74e0 @ 002e74e0 ====

/* Strings referenciadas:
     "Class" */

undefined4 FUN_002e74e0(int *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  iVar7 = (int)param_2;
  if (*(int *)(iVar7 + 0x20) != 0) {
    do {
      uVar4 = FUN_002e33e0(param_2,uVar6);
      uVar4 = FUN_002e3920(uVar4);
      lVar5 = stricmp(uVar4,0x406b38);
      if (lVar5 == 0) {
        uVar3 = *(uint *)(iVar7 + 0x20);
      }
      else {
        iVar2 = *param_1;
        sVar1 = *(short *)(iVar2 + 0x18);
        uVar4 = FUN_002e33e0(param_2,uVar6);
        lVar5 = (**(code **)(iVar2 + 0x1c))((int)param_1 + (int)sVar1,uVar4);
        if (lVar5 == 0) {
          return 0;
        }
        uVar3 = *(uint *)(iVar7 + 0x20);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return 1;
}


// ==== FUN_002e75b8 @ 002e75b8 ====

void FUN_002e75b8(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_003eb3d0;
  return;
}


// ==== FUN_002e75d0 @ 002e75d0 ====

undefined8 FUN_002e75d0(undefined8 param_1)

{
  FUN_0038e910();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003eb3b8;
  return param_1;
}


// ==== FUN_002e7610 @ 002e7610 ====

undefined8 FUN_002e7610(undefined8 param_1)

{
  FUN_0038eaa0();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003eb3a0;
  return param_1;
}


// ==== FUN_002e7670 @ 002e7670 ====

undefined8 FUN_002e7670(undefined8 param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uVar4 = DAT_003c9598;
  puVar5 = (undefined4 *)param_1;
  puVar5[3] = 0x3f800000;
  *puVar5 = &DAT_003eb7b0;
  puVar5[2] = 0;
  if (uVar4 == 0) {
    puVar5[4] = 0;
    puVar5[1] = 0;
  }
  else {
    uStack_70 = 0;
    iVar6 = uVar4 << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_70);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_70,iVar6,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar5[4] = uStack_70;
    iVar6 = *piVar2;
    uStack_6c = 0;
    iVar7 = DAT_003c9598 << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,(uint)&uStack_70 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_6c,iVar7,uVar3);
    }
    puVar5[1] = uStack_6c;
  }
  if (DAT_003c959c == 0) {
    puVar5[5] = 0;
  }
  else {
    uStack_68 = 0;
    iVar6 = DAT_003c959c << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,
                       (uint)&uStack_70 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_68,iVar6,uVar3);
    }
    puVar5[5] = uStack_68;
  }
  uVar4 = 0;
  if (DAT_003c9598 != 0) {
    iVar6 = puVar5[4];
    while( true ) {
      iVar7 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar7 + iVar6) = 0;
      *(undefined4 *)(iVar7 + puVar5[1]) = 0;
      if (DAT_003c9598 <= uVar4) break;
      iVar6 = puVar5[4];
    }
  }
  uVar4 = 0;
  if (DAT_003c959c != 0) {
    iVar6 = puVar5[5];
    while( true ) {
      iVar7 = uVar4 * 4;
      uVar1 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
      *(float *)(iVar7 + iVar6) = -(float)uVar1 / 100.0;
      if (DAT_003c959c <= uVar4) break;
      iVar6 = puVar5[5];
    }
  }
  return param_1;
}


// ==== FUN_002e78d0 @ 002e78d0 ====

undefined8 FUN_002e78d0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uVar5 = DAT_003c9598;
  bVar1 = DAT_003c9598 == 0;
  puVar6 = (undefined4 *)param_1;
  *puVar6 = &DAT_003eb798;
  if (bVar1) {
    puVar6[1] = 0;
  }
  else {
    uStack_60 = 0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),uVar5 << 2,
                       &uStack_60);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_60,uVar5 << 2,uVar3);
    }
    puVar6[1] = uStack_60;
  }
  if (DAT_003c959c == 0) {
    puVar6[2] = 0;
  }
  else {
    uStack_5c = 0;
    iVar7 = DAT_003c959c << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,
                       (uint)&uStack_60 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_5c,iVar7,uVar3);
    }
    puVar6[2] = uStack_5c;
  }
  uVar5 = 0;
  if (DAT_003c9598 != 0) {
    iVar7 = puVar6[1];
    while( true ) {
      iVar4 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar4 + iVar7) = 0;
      if (DAT_003c9598 <= uVar5) break;
      iVar7 = puVar6[1];
    }
  }
  uVar5 = 0;
  if (DAT_003c959c != 0) {
    iVar7 = puVar6[2];
    while( true ) {
      iVar4 = uVar5 * 4;
      uVar2 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
      *(float *)(iVar4 + iVar7) = -(float)uVar2 / 100.0;
      if (DAT_003c959c <= uVar5) break;
      iVar7 = puVar6[2];
    }
  }
  return param_1;
}


// ==== FUN_002e7ac0 @ 002e7ac0 ====

undefined8 FUN_002e7ac0(undefined8 param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int *apiStack_ac [3];
  
  uVar4 = DAT_003c9598;
  puVar9 = (undefined4 *)param_1;
  puVar9[7] = 0x3c23d70a;
  *puVar9 = &DAT_003eb780;
  if (uVar4 == 0) {
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[5] = 0;
    puVar9[0xf] = 0;
  }
  else {
    uStack_e0 = 0;
    iVar6 = uVar4 << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_e0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_e0,iVar6,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar9[8] = uStack_e0;
    iVar6 = *piVar2;
    uStack_dc = 0;
    iVar7 = DAT_003c9598 << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,(uint)&uStack_e0 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_dc,iVar7,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar9[9] = uStack_dc;
    iVar6 = *piVar2;
    uStack_d8 = 0;
    iVar7 = DAT_003c9598 << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,(uint)&uStack_e0 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_d8,iVar7,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar9[10] = uStack_d8;
    iVar6 = *piVar2;
    uStack_d4 = 0;
    iVar7 = DAT_003c9598 << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,(uint)&uStack_e0 | 0xc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_d4,iVar7,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar9[0x10] = uStack_d4;
    iVar6 = *piVar2;
    uStack_d0 = 0;
    iVar7 = DAT_003c9598 << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,&uStack_d0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_d0,iVar7,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar9[0x11] = uStack_d0;
    iVar6 = *piVar2;
    uStack_cc = 0;
    iVar7 = DAT_003c9598 << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,&uStack_cc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_cc,iVar7,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar9[5] = uStack_cc;
    iVar6 = *piVar2;
    uStack_c8 = 0;
    iVar7 = DAT_003c9598 << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,&uStack_c8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_c8,iVar7,uVar3);
    }
    puVar9[0xf] = uStack_c8;
  }
  if (DAT_003c959c == 0) {
    puVar9[4] = 0;
    puVar9[0xb] = 0;
  }
  else {
    uStack_c4 = 0;
    iVar6 = DAT_003c959c << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_c4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_c4,iVar6,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar9[4] = uStack_c4;
    iVar6 = *piVar2;
    uStack_c0 = 0;
    iVar7 = DAT_003c959c << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,&uStack_c0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_c0,iVar7,uVar3);
    }
    puVar9[0xb] = uStack_c0;
  }
  if (DAT_003c95a0 == 0) {
    puVar9[6] = 0;
    puVar9[0xc] = 0;
  }
  else {
    uStack_bc = 0;
    iVar6 = DAT_003c95a0 << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_bc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_bc,iVar6,uVar3);
    }
    piVar2 = DAT_003c87e8;
    puVar9[6] = uStack_bc;
    iVar6 = *piVar2;
    uStack_b8 = 0;
    iVar7 = DAT_003c95a0 << 2;
    uVar3 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar2 + (int)*(short *)(iVar6 + 0x30),iVar7,&uStack_b8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_b8,iVar7,uVar3);
    }
    uVar4 = 0;
    bVar1 = DAT_003c95a0 != 0;
    puVar9[0xc] = uStack_b8;
    if (bVar1) {
      iVar6 = puVar9[6];
      while( true ) {
        iVar7 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar7 + iVar6) = 0;
        *(undefined4 *)(iVar7 + puVar9[0xc]) = 0;
        if (DAT_003c95a0 <= uVar4) break;
        iVar6 = puVar9[6];
      }
    }
  }
  iVar6 = *(int *)(DAT_003c9ed4 + 0x10);
  if (iVar6 == 0) {
    puVar9[0xd] = 0;
    puVar9[0x12] = 0;
  }
  else {
    piStack_b4 = (int *)0x0;
    iVar7 = iVar6 * 0x18 + 0x10;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&piStack_b4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_b4,iVar7,uVar3);
    }
    piVar8 = piStack_b4 + 4;
    *piStack_b4 = iVar6;
    iVar7 = iVar6 + -1;
    piVar2 = piVar8;
    if (iVar6 == 0) {
      puVar9[0xd] = piVar8;
    }
    else {
      do {
        FUN_002e7670(piVar2);
        iVar7 = iVar7 + -1;
        piVar2 = piVar2 + 6;
      } while (iVar7 != -1);
      puVar9[0xd] = piVar8;
    }
    iVar6 = *(int *)(DAT_003c9ed4 + 0x10) << 2;
    uStack_b0 = 0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_b0,iVar6,uVar3);
    }
    puVar9[0x12] = uStack_b0;
  }
  iVar6 = *(int *)(DAT_003c9ed4 + 0x18);
  if (iVar6 == 0) {
    puVar9[0xe] = 0;
  }
  else {
    apiStack_ac[0] = (int *)0x0;
    iVar7 = iVar6 * 0xc + 0x10;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,apiStack_ac);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(apiStack_ac[0],iVar7,uVar3);
    }
    piVar8 = apiStack_ac[0] + 4;
    *apiStack_ac[0] = iVar6;
    iVar7 = iVar6 + -1;
    piVar2 = piVar8;
    if (iVar6 == 0) {
      puVar9[0xe] = piVar8;
    }
    else {
      do {
        FUN_002e78d0(piVar2);
        iVar7 = iVar7 + -1;
        piVar2 = piVar2 + 3;
      } while (iVar7 != -1);
      puVar9[0xe] = piVar8;
    }
  }
  uVar4 = DAT_003c9598;
  uVar5 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  if (uVar4 != 0) {
    iVar6 = puVar9[5];
    while( true ) {
      iVar7 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar7 + iVar6) = 0;
      *(undefined4 *)(iVar7 + puVar9[8]) = 0x42700000;
      *(undefined4 *)(iVar7 + puVar9[9]) = 10;
      *(undefined4 *)(iVar7 + puVar9[10]) = 0;
      if (DAT_003c9598 <= uVar5) break;
      iVar6 = puVar9[5];
    }
  }
  uVar4 = 0;
  if (DAT_003c959c != 0) {
    iVar6 = puVar9[4];
    while( true ) {
      iVar7 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar7 + iVar6) = 0;
      *(undefined4 *)(iVar7 + puVar9[0xb]) = 0x3dcccccd;
      if (DAT_003c959c <= uVar4) break;
      iVar6 = puVar9[4];
    }
  }
  uVar4 = 0;
  if (*(int *)(DAT_003c9ed4 + 0x10) != 0) {
    iVar6 = puVar9[0x12];
    while( true ) {
      *(uint *)(uVar4 * 4 + iVar6) = uVar4;
      uVar4 = uVar4 + 1;
      if (*(uint *)(DAT_003c9ed4 + 0x10) <= uVar4) break;
      iVar6 = puVar9[0x12];
    }
  }
  DAT_003c95a4 = FUN_002e9648;
  return param_1;
}


// ==== FUN_002e8310 @ 002e8310 ====

void FUN_002e8310(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1;
  *puVar5 = &DAT_003eb780;
  if (puVar5[8] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar5[9] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar5[10] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar5[0xb] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar5[0x10] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar5[0x11] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar5[0xc] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar5[0x12] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  piVar1 = (int *)puVar5[0xd];
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1 + piVar1[-4] * 6;
    if (piVar1 != piVar3) {
      do {
        piVar3 = piVar3 + -6;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar5[0xd] != piVar3);
    }
    (*(code *)PTR_FUN_003c87e0)(puVar5[0xd] + -0x10);
  }
  piVar1 = (int *)puVar5[0xe];
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1 + piVar1[-4] * 3;
    if (piVar1 != piVar3) {
      do {
        piVar3 = piVar3 + -3;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar5[0xe] != piVar3);
    }
    (*(code *)PTR_FUN_003c87e0)(puVar5[0xe] + -0x10);
  }
  if (puVar5[0xf] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  uVar4 = 0;
  if (DAT_003c9598 != 0) {
    iVar2 = puVar5[5];
    while( true ) {
      if (*(int *)(uVar4 * 4 + iVar2) != 0) {
        (*(code *)PTR_FUN_003c87e0)();
      }
      uVar4 = uVar4 + 1;
      if (DAT_003c9598 <= uVar4) break;
      iVar2 = puVar5[5];
    }
  }
  if (puVar5[5] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  uVar4 = 0;
  if (DAT_003c959c != 0) {
    iVar2 = puVar5[4];
    while( true ) {
      if (*(int *)(uVar4 * 4 + iVar2) != 0) {
        (*(code *)PTR_FUN_003c87e0)();
      }
      uVar4 = uVar4 + 1;
      if (DAT_003c959c <= uVar4) break;
      iVar2 = puVar5[4];
    }
  }
  if (puVar5[4] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  uVar4 = 0;
  if (DAT_003c95a0 != 0) {
    iVar2 = puVar5[6];
    while( true ) {
      if (*(int *)(uVar4 * 4 + iVar2) != 0) {
        (*(code *)PTR_FUN_003c87e0)();
      }
      uVar4 = uVar4 + 1;
      if (DAT_003c95a0 <= uVar4) break;
      iVar2 = puVar5[6];
    }
  }
  if (puVar5[6] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *puVar5 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e8650 @ 002e8650 ====

int FUN_002e8650(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 auStack_60 [4];
  
  iVar2 = FUN_002e91c0();
  iVar5 = *(uint *)(iVar2 + 4) + 1;
  if (*(uint *)(iVar2 + 4) < DAT_003c959c) {
    iVar1 = *(int *)(iVar2 + 0x10);
    *(int *)(iVar2 + 4) = iVar5;
    iVar3 = strlen(param_1);
    auStack_60[0] = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3 + 1,
                       auStack_60);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_60[0],iVar3 + 1,uVar4);
    }
    *(undefined4 *)(iVar5 * 4 + iVar1 + -4) = auStack_60[0];
    strcpy(*(undefined4 *)(*(int *)(iVar2 + 4) * 4 + *(int *)(iVar2 + 0x10) + -4),param_1);
    iVar2 = *(int *)(iVar2 + 4) + -1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


// ==== FUN_002e8740 @ 002e8740 ====

int FUN_002e8740(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 auStack_60 [4];
  
  iVar2 = FUN_002e91c0();
  iVar5 = *(uint *)(iVar2 + 8) + 1;
  if (*(uint *)(iVar2 + 8) < DAT_003c9598) {
    iVar1 = *(int *)(iVar2 + 0x14);
    *(int *)(iVar2 + 8) = iVar5;
    iVar3 = strlen(param_1);
    auStack_60[0] = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3 + 1,
                       auStack_60);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_60[0],iVar3 + 1,uVar4);
    }
    *(undefined4 *)(iVar5 * 4 + iVar1 + -4) = auStack_60[0];
    strcpy(*(undefined4 *)(*(int *)(iVar2 + 8) * 4 + *(int *)(iVar2 + 0x14) + -4),param_1);
    iVar2 = *(int *)(iVar2 + 8) + -1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


// ==== FUN_002e8830 @ 002e8830 ====

int FUN_002e8830(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 auStack_60 [4];
  
  iVar2 = FUN_002e91c0();
  iVar5 = *(uint *)(iVar2 + 0xc) + 1;
  if (*(uint *)(iVar2 + 0xc) < DAT_003c95a0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    *(int *)(iVar2 + 0xc) = iVar5;
    iVar3 = strlen(param_1);
    auStack_60[0] = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3 + 1,
                       auStack_60);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_60[0],iVar3 + 1,uVar4);
    }
    *(undefined4 *)(iVar5 * 4 + iVar1 + -4) = auStack_60[0];
    strcpy(*(undefined4 *)(*(int *)(iVar2 + 0xc) * 4 + *(int *)(iVar2 + 0x18) + -4),param_1);
    iVar2 = *(int *)(iVar2 + 0xc) + -1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


// ==== FUN_002e8920 @ 002e8920 ====

void FUN_002e8920(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  if (param_1 == 0.0) {
    param_1 = 0.001;
  }
  if (DAT_00451234 != (code *)0x0) {
    (*DAT_00451234)();
  }
  fVar7 = DAT_003c95b0 + param_1;
  uVar5 = 0;
  DAT_003c958c = DAT_003c95b0;
  DAT_003c95a8 = uVar8;
  DAT_003c95ac = param_1;
  DAT_003c95b0 = fVar7;
  if (*(int *)(param_2 + 8) != 0) {
    iVar2 = *(int *)(param_2 + 0x40);
    while( true ) {
      iVar3 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar3 + iVar2) = 0;
      *(undefined4 *)(iVar3 + *(int *)(param_2 + 0x44)) = 0;
      if (*(uint *)(param_2 + 8) <= uVar5) break;
      iVar2 = *(int *)(param_2 + 0x40);
    }
  }
  iVar2 = DAT_003c9ed4;
  if (*(int *)(DAT_003c9ed4 + 0x10) != 0) {
    iVar3 = 0;
    uVar5 = 0;
    do {
      uVar4 = 0;
      *(undefined4 *)(iVar3 + *(int *)(param_2 + 0x34) + 8) = 0;
      uVar6 = uVar5 + 1;
      if (*(int *)(param_2 + 8) != 0) {
        iVar3 = *(int *)(param_2 + 0x34);
        while( true ) {
          iVar1 = uVar4 * 4;
          uVar4 = uVar4 + 1;
          iVar3 = uVar5 * 0x18 + iVar3;
          *(float *)(iVar3 + 8) = *(float *)(iVar3 + 8) + *(float *)(iVar1 + *(int *)(iVar3 + 4));
          if (*(uint *)(param_2 + 8) <= uVar4) break;
          iVar3 = *(int *)(param_2 + 0x34);
        }
      }
      iVar3 = uVar6 * 0x18;
      uVar5 = uVar6;
    } while (uVar6 < *(uint *)(iVar2 + 0x10));
  }
  if (*(int *)(DAT_003c9ed4 + 0x10) != 0) {
    FUN_0035ec50(*(undefined4 *)(param_2 + 0x48),*(int *)(DAT_003c9ed4 + 0x10),4,DAT_003c95a4);
  }
  DAT_003c9594 = 0xffffffff;
  *(undefined1 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}


// ==== FUN_002e8ab8 @ 002e8ab8 ====

undefined4 FUN_002e8ab8(int param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  
  if (0.0 < *(float *)(param_1 + 0x1c)) {
    uVar3 = FUN_002e4c60(param_3);
    if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 8))) {
      if (*(uint *)(DAT_003c9ed4 + 0x10) <= uVar3) {
        return 0;
      }
      iVar8 = 0;
      if (uVar3 != 0xffffffff) {
        iVar8 = *(int *)(param_1 + 0x34) + uVar3 * 0x18;
      }
      if (*(char *)(param_1 + 0x50) == '\0') {
        fVar9 = 0.0;
        if (DAT_00451230 != (code *)0x0) {
          fVar9 = (float)(*DAT_00451230)();
        }
        bVar2 = *(float *)(param_1 + 0x1c) < fVar9;
        *(bool *)(param_1 + 0x50) = bVar2;
        if (!bVar2) {
          iVar6 = param_2 * 4;
          piVar7 = (int *)(iVar6 + *(int *)(param_1 + 0x44));
          iVar1 = *piVar7;
          if ((iVar1 < *(int *)(iVar6 + *(int *)(param_1 + 0x24))) &&
             (*(float *)(iVar6 + *(int *)(param_1 + 0x40)) <=
              *(float *)(iVar6 + *(int *)(param_1 + 0x20)))) {
            *piVar7 = iVar1 + 1;
            if (iVar8 != 0) {
              *(undefined4 *)(iVar6 + *(int *)(iVar8 + 4)) = 0;
              *(float *)(iVar6 + *(int *)(iVar8 + 0x10)) = fVar9;
            }
            goto LAB_002e8c2c;
          }
        }
      }
      if (iVar8 != 0) {
        pfVar5 = (float *)(param_2 * 4 + *(int *)(iVar8 + 4));
        *pfVar5 = *pfVar5 + *(float *)(param_2 * 4 + *(int *)(param_1 + 0x28));
      }
    }
    uVar4 = 0;
  }
  else {
LAB_002e8c2c:
    uVar4 = 1;
  }
  return uVar4;
}


// ==== FUN_002e8c50 @ 002e8c50 ====

undefined4 FUN_002e8c50(int param_1,uint param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  int iStack_9c;
  
  if (*(float *)(param_1 + 0x1c) <= 0.0) {
    return 1;
  }
  if ((int)param_2 < 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 8) <= param_2) {
    return 0;
  }
  iVar2 = (int)param_3;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iStack_9c = *(int *)(*(int *)(iVar2 + 8) + 8);
    if (iStack_9c == 0) {
      return 0;
    }
    do {
      lVar3 = FUN_002e4c60(*(undefined4 *)(iStack_9c + 4));
      if (lVar3 != -1) {
        pfVar4 = (float *)(param_2 * 4 + *(int *)(*(int *)(param_1 + 0x34) + (int)lVar3 * 0x18 + 4))
        ;
        *pfVar4 = *pfVar4 + *(float *)(param_2 * 4 + *(int *)(param_1 + 0x28));
      }
      iStack_9c = *(int *)(iStack_9c + 0xc);
    } while (iStack_9c != 0);
    return 0;
  }
  fVar8 = 0.0;
  if (DAT_00451230 != (code *)0x0) {
    fVar8 = (float)(*DAT_00451230)();
  }
  bVar1 = *(float *)(param_1 + 0x1c) < fVar8;
  *(bool *)(param_1 + 0x50) = bVar1;
  if (!bVar1) {
    iVar5 = param_2 * 4;
    piVar7 = (int *)(iVar5 + *(int *)(param_1 + 0x44));
    iVar6 = *piVar7;
    if (*(int *)(iVar5 + *(int *)(param_1 + 0x24)) <= iVar6) {
      iVar2 = *(int *)(iVar2 + 8);
      goto LAB_002e8dec;
    }
    if (*(float *)(iVar5 + *(int *)(param_1 + 0x40)) <= *(float *)(iVar5 + *(int *)(param_1 + 0x20))
       ) {
      *piVar7 = iVar6 + 1;
      for (iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
        lVar3 = FUN_002e4c60(*(undefined4 *)(iVar2 + 4));
        if (lVar3 != -1) {
          iVar6 = *(int *)(param_1 + 0x34) + (int)lVar3 * 0x18;
          *(undefined4 *)(iVar5 + *(int *)(iVar6 + 4)) = 0;
          *(float *)(iVar5 + *(int *)(iVar6 + 0x10)) = fVar8;
        }
      }
      iVar2 = FUN_002ecaa8(param_3);
      *(float *)(iVar5 + *(int *)(iVar2 * 0xc + *(int *)(param_1 + 0x38) + 4)) = fVar8;
      return 1;
    }
  }
  iVar2 = *(int *)(iVar2 + 8);
LAB_002e8dec:
  iStack_9c = *(int *)(iVar2 + 8);
  if (iStack_9c != 0) {
    do {
      lVar3 = FUN_002e4c60(*(undefined4 *)(iStack_9c + 4));
      if (lVar3 != -1) {
        pfVar4 = (float *)(param_2 * 4 + *(int *)(*(int *)(param_1 + 0x34) + (int)lVar3 * 0x18 + 4))
        ;
        *pfVar4 = *pfVar4 + *(float *)(param_2 * 4 + *(int *)(param_1 + 0x28));
      }
      iStack_9c = *(int *)(iStack_9c + 0xc);
    } while (iStack_9c != 0);
  }
  return 0;
}


// ==== FUN_002e8fa0 @ 002e8fa0 ====

undefined4 FUN_002e8fa0(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  
  if (*(float *)(param_1 + 0x1c) <= 0.0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if ((-1 < (int)param_2) && (uVar3 = 0, param_2 < *(uint *)(param_1 + 8))) {
      if (*(char *)(param_1 + 0x50) == '\0') {
        fVar6 = 0.0;
        if (DAT_00451230 != (code *)0x0) {
          fVar6 = (float)(*DAT_00451230)();
        }
        bVar2 = *(float *)(param_1 + 0x1c) < fVar6;
        *(bool *)(param_1 + 0x50) = bVar2;
        if (!bVar2) {
          iVar4 = param_2 * 4;
          piVar5 = (int *)(iVar4 + *(int *)(param_1 + 0x44));
          iVar1 = *piVar5;
          if (*(int *)(iVar4 + *(int *)(param_1 + 0x24)) <= iVar1) {
            return 0;
          }
          if (*(float *)(iVar4 + *(int *)(param_1 + 0x20)) <
              *(float *)(iVar4 + *(int *)(param_1 + 0x40))) {
            return 0;
          }
          *piVar5 = iVar1 + 1;
          *(float *)(iVar4 + *(int *)(param_1 + 0x3c)) = fVar6;
          return 1;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ==== FUN_002e90b8 @ 002e90b8 ====

uint FUN_002e90b8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_003c9ed4;
  iVar4 = (int)param_1;
  if ((int)*(uint *)(iVar4 + 0x4c) < 0) {
    iVar3 = *(int *)(iVar4 + 0x4c);
  }
  else {
    if (*(uint *)(DAT_003c9ed4 + 0x10) <= *(uint *)(iVar4 + 0x4c)) {
      return 0xffffffff;
    }
    iVar3 = *(int *)(iVar4 + 0x4c);
  }
  uVar2 = *(uint *)(iVar3 * 4 + *(int *)(iVar4 + 0x48));
  *(int *)(iVar4 + 0x4c) = iVar3 + 1;
  if (uVar2 < *(uint *)(*(int *)(iVar1 + 0x14) + 0x18)) {
    iVar1 = uVar2 * 0x14 + *(int *)(*(int *)(iVar1 + 0x14) + 4);
  }
  else {
    iVar1 = 0;
  }
  if (*(char *)(iVar1 + 0x10) == '\0') {
    uVar2 = FUN_002e90b8(param_1);
  }
  return uVar2;
}


// ==== FUN_002e91c0 @ 002e91c0 ====

int FUN_002e91c0(void)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  if (DAT_003c9588 == 0) {
    auStack_40[0] = 0;
    uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x54,auStack_40);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_40[0],0x54,uVar1);
    }
    DAT_003c9588 = FUN_002e7ac0(auStack_40[0]);
  }
  return DAT_003c9588;
}


// ==== FUN_002e9280 @ 002e9280 ====

void FUN_002e9280(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003eb7b0;
  if (puVar1[4] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[1] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[5] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *puVar1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e9328 @ 002e9328 ====

void FUN_002e9328(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003eb798;
  if (puVar1[1] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[2] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *puVar1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002e93b8 @ 002e93b8 ====

uint FUN_002e93b8(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) == 0) {
LAB_002e941c:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
    while (lVar1 = stricmp(param_2,*(undefined4 *)(uVar3 * 4 + iVar2)), lVar1 != 0) {
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 8) <= uVar3) goto LAB_002e941c;
      iVar2 = *(int *)(param_1 + 0x14);
    }
  }
  return uVar3;
}


// ==== FUN_002e9438 @ 002e9438 ====

uint FUN_002e9438(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 4) == 0) {
LAB_002e949c:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
    while (lVar1 = stricmp(param_2,*(undefined4 *)(uVar3 * 4 + iVar2)), lVar1 != 0) {
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 4) <= uVar3) goto LAB_002e949c;
      iVar2 = *(int *)(param_1 + 0x10);
    }
  }
  return uVar3;
}


// ==== FUN_002e94b8 @ 002e94b8 ====

uint FUN_002e94b8(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_002e951c:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    while (lVar1 = stricmp(param_2,*(undefined4 *)(uVar3 * 4 + iVar2)), lVar1 != 0) {
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 0xc) <= uVar3) goto LAB_002e951c;
      iVar2 = *(int *)(param_1 + 0x18);
    }
  }
  return uVar3;
}


// ==== FUN_002e9538 @ 002e9538 ====

void FUN_002e9538(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  return;
}


// ==== FUN_002e9540 @ 002e9540 ====

void FUN_002e9540(undefined4 param_1,int param_2,uint param_3)

{
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_2 + 8))) {
    *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0x28)) = param_1;
  }
  return;
}


// ==== FUN_002e9570 @ 002e9570 ====

void FUN_002e9570(undefined4 param_1,int param_2,uint param_3)

{
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_2 + 8))) {
    *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0x20)) = param_1;
  }
  return;
}


// ==== FUN_002e95a0 @ 002e95a0 ====

void FUN_002e95a0(int param_1,uint param_2,undefined4 param_3)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 8))) {
    *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x24)) = param_3;
  }
  return;
}


// ==== FUN_002e95d0 @ 002e95d0 ====

void FUN_002e95d0(undefined4 param_1,int param_2,uint param_3)

{
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_2 + 4))) {
    *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0x2c)) = param_1;
  }
  return;
}


// ==== FUN_002e9600 @ 002e9600 ====

void FUN_002e9600(undefined4 param_1,int param_2,uint param_3)

{
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_2 + 0xc))) {
    *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0x30)) = param_1;
  }
  return;
}


// ==== FUN_002e9630 @ 002e9630 ====

undefined4 FUN_002e9630(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x30));
}


// ==== FUN_002e9648 @ 002e9648 ====

undefined4 FUN_002e9648(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = FUN_002e91c0();
  iVar3 = *param_2 * 0x18 + *(int *)(iVar1 + 0x34);
  iVar1 = *(int *)(iVar1 + 0x34) + *param_1 * 0x18;
  if (*param_1 == DAT_003c9594) {
    uVar2 = 0xffffffff;
  }
  else if (*param_2 == DAT_003c9594) {
    uVar2 = 1;
  }
  else {
    fVar5 = *(float *)(iVar1 + 8) * *(float *)(iVar1 + 0xc);
    fVar4 = *(float *)(iVar3 + 8) * *(float *)(iVar3 + 0xc);
    uVar2 = 0xffffffff;
    if ((fVar5 <= fVar4) && (uVar2 = 1, fVar4 <= fVar5)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ==== FUN_002e96f8 @ 002e96f8 ====

undefined4 FUN_002e96f8(int param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  float *pfVar2;
  
  uVar1 = FUN_002e4c60(param_3);
  if ((((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 4))) &&
      (uVar1 < *(uint *)(DAT_003c9ed4 + 0x10))) &&
     (pfVar2 = (float *)(param_2 * 4 + *(int *)(*(int *)(param_1 + 0x34) + uVar1 * 0x18 + 0x14)),
     *pfVar2 + *(float *)(param_2 * 4 + *(int *)(param_1 + 0x2c)) < DAT_003c958c)) {
    *pfVar2 = DAT_003c958c;
    return 1;
  }
  return 0;
}


// ==== FUN_002e97b0 @ 002e97b0 ====

undefined4 FUN_002e97b0(int param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  float *pfVar2;
  
  uVar1 = FUN_002ecaa8(param_3);
  if ((((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 4))) &&
      (uVar1 < *(uint *)(DAT_003c9ed4 + 0x18))) &&
     (pfVar2 = (float *)(*(int *)(uVar1 * 0xc + *(int *)(param_1 + 0x38) + 8) + param_2 * 4),
     *pfVar2 + *(float *)(param_2 * 4 + *(int *)(param_1 + 0x2c)) < DAT_003c958c)) {
    *pfVar2 = DAT_003c958c;
    return 1;
  }
  return 0;
}


// ==== FUN_002e9868 @ 002e9868 ====

void FUN_002e9868(int param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_002e4c60(param_3);
  if (((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 4))) &&
     (uVar1 < *(uint *)(DAT_003c9ed4 + 0x10))) {
    *(undefined4 *)(param_2 * 4 + *(int *)(*(int *)(param_1 + 0x34) + uVar1 * 0x18 + 0x14)) =
         DAT_003c958c;
  }
  return;
}


// ==== FUN_002e98f0 @ 002e98f0 ====

void FUN_002e98f0(int param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_002ecaa8(param_3);
  if (((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 4))) &&
     (uVar1 < *(uint *)(DAT_003c9ed4 + 0x18))) {
    *(undefined4 *)(param_2 * 4 + *(int *)(uVar1 * 0xc + *(int *)(param_1 + 0x38) + 8)) =
         DAT_003c958c;
  }
  return;
}


// ==== FUN_002e9978 @ 002e9978 ====

void FUN_002e9978(int param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  
  if ((((0.0 < *(float *)(param_1 + 0x1c)) && (uVar2 = FUN_002e4c60(param_3), -1 < (int)param_2)) &&
      (param_2 < *(uint *)(param_1 + 8))) && (uVar2 < *(uint *)(DAT_003c9ed4 + 0x10))) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (DAT_00451230 == (code *)0x0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)(*DAT_00451230)();
    }
    pfVar3 = (float *)(param_2 * 4 + *(int *)(param_1 + 0x40));
    *pfVar3 = *pfVar3 + (fVar4 - *(float *)(param_2 * 4 + *(int *)(iVar1 + uVar2 * 0x18 + 0x10)));
  }
  return;
}


// ==== FUN_002e9a58 @ 002e9a58 ====

void FUN_002e9a58(int param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  
  if ((((0.0 < *(float *)(param_1 + 0x1c)) && (uVar1 = FUN_002ecaa8(param_3), -1 < (int)param_2)) &&
      (param_2 < *(uint *)(param_1 + 8))) && (uVar1 < *(uint *)(DAT_003c9ed4 + 0x18))) {
    fVar3 = 0.0;
    if (DAT_00451230 != (code *)0x0) {
      fVar3 = (float)(*DAT_00451230)();
    }
    pfVar2 = (float *)(param_2 * 4 + *(int *)(param_1 + 0x40));
    *pfVar2 = *pfVar2 + (fVar3 - *(float *)(param_2 * 4 +
                                           *(int *)(uVar1 * 0xc + *(int *)(param_1 + 0x38) + 4)));
  }
  return;
}


// ==== FUN_002e9b30 @ 002e9b30 ====

void FUN_002e9b30(int param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  
  if (((0.0 < *(float *)(param_1 + 0x1c)) && (-1 < (int)param_2)) &&
     (param_2 < *(uint *)(param_1 + 8))) {
    fVar2 = 0.0;
    if (DAT_00451230 != (code *)0x0) {
      fVar2 = (float)(*DAT_00451230)();
    }
    pfVar1 = (float *)(param_2 * 4 + *(int *)(param_1 + 0x40));
    *pfVar1 = *pfVar1 + (fVar2 - *(float *)(param_2 * 4 + *(int *)(param_1 + 0x3c)));
  }
  return;
}


// ==== FUN_002e9bc8 @ 002e9bc8 ====

float FUN_002e9bc8(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  
  if ((-1 < (int)param_2) && (param_2 <= *(int *)(param_1 + 8) - 1U)) {
    fVar1 = 0.0;
    if (*(float *)(param_1 + 0x1c) <= 0.0) {
      return DAT_00406d18;
    }
    if (DAT_00451230 == (code *)0x0) {
      fVar2 = *(float *)(param_1 + 0x1c);
    }
    else {
      fVar1 = (float)(*DAT_00451230)();
      fVar2 = *(float *)(param_1 + 0x1c);
    }
    fVar2 = fVar2 - fVar1;
    if ((0.0 <= fVar2) &&
       (fVar1 = *(float *)(param_2 * 4 + *(int *)(param_1 + 0x20)) -
                *(float *)(param_2 * 4 + *(int *)(param_1 + 0x40)), 0.0 <= fVar1)) {
      if (fVar1 <= fVar2) {
        return fVar1;
      }
      return fVar2;
    }
  }
  return 0.0;
}


// ==== FUN_002e9cb0 @ 002e9cb0 ====

void FUN_002e9cb0(void)

{
  DAT_003c9590 = DAT_003c958c;
  return;
}


// ==== FUN_002e9cc8 @ 002e9cc8 ====

void FUN_002e9cc8(void)

{
  if (DAT_003c9588 != (int *)0x0) {
    (**(code **)(*DAT_003c9588 + 0xc))((int)DAT_003c9588 + (int)*(short *)(*DAT_003c9588 + 8),3);
  }
  DAT_003c9588 = (int *)0x0;
  return;
}


// ==== FUN_002e9d10 @ 002e9d10 ====

void FUN_002e9d10(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_002e4c60(param_2);
  if (uVar1 < *(uint *)(DAT_003c9ed4 + 0x10)) {
    DAT_003c9594 = uVar1;
  }
  return;
}


// ==== FUN_002e9d50 @ 002e9d50 ====

void FUN_002e9d50(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(DAT_003c9ed4 + 0x10))) {
    iVar1 = FUN_002e91c0();
    *(undefined4 *)(param_2 * 0x18 + *(int *)(iVar1 + 0x34) + 0xc) = param_1;
  }
  return;
}


// ==== FUN_002e9db8 @ 002e9db8 ====

undefined4 FUN_002e9db8(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((int)param_1 < 0) || (*(uint *)(DAT_003c9ed4 + 0x10) <= param_1)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_002e91c0();
    uVar2 = *(undefined4 *)(param_1 * 0x18 + *(int *)(iVar1 + 0x34) + 0xc);
  }
  return uVar2;
}


// ==== FUN_002e9e20 @ 002e9e20 ====

void FUN_002e9e20(int param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (DAT_00451230 == (code *)0x0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)(*DAT_00451230)();
    }
    if (*(float *)(param_1 + 0x1c) < fVar1) {
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
  return;
}


// ==== FUN_002e9e88 @ 002e9e88 ====

undefined8 FUN_002e9e88(undefined8 param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.017453292;
  fVar2 = (float)FUN_0029dc18(param_2[1] * 0.017453292);
  fVar3 = (float)FUN_0029da28(*param_2 * fVar6);
  fVar4 = (float)FUN_0029da28(param_2[1] * fVar6);
  fVar5 = (float)FUN_0029da28(*param_2 * fVar6);
  fVar6 = (float)FUN_0029dc18(*param_2 * fVar6);
  pfVar1 = (float *)param_1;
  *pfVar1 = fVar2 * fVar3;
  pfVar1[1] = fVar6;
  pfVar1[2] = fVar4 * fVar5;
  return param_1;
}


// ==== FUN_002e9f40 @ 002e9f40 ====

/* WARNING: Removing unreachable block (ram,0x002e9f78) */

undefined8 FUN_002e9f40(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  
  fVar3 = (float)FUN_00389140(param_2);
  fVar3 = SQRT(fVar3);
  pfVar1 = (float *)param_2;
  fVar2 = pfVar1[1];
  fVar4 = pfVar1[2] / fVar3;
  fVar5 = *pfVar1 / fVar3;
  if (fVar4 == 0.0) {
    if (0.0 < fVar5) {
      puVar6 = (undefined *)0x3fc90fdb;
    }
    else {
      puVar6 = (undefined *)0x0;
      if (fVar5 < 0.0) {
        puVar6 = &DAT_bfc90fdb;
      }
    }
  }
  else {
    puVar6 = (undefined *)FUN_0029d6a8(fVar5 / fVar4);
    if (fVar4 < 0.0) {
      puVar6 = (undefined *)((float)puVar6 + 3.1415927);
    }
  }
  fVar2 = (float)FUN_0029e1d8(fVar2 / fVar3);
  pfVar1 = (float *)param_1;
  pfVar1[1] = (float)puVar6 / 0.017453292;
  pfVar1[2] = 0.0;
  *pfVar1 = fVar2 / 0.017453292;
  return param_1;
}


// ==== FUN_002ea090 @ 002ea090 ====

/* WARNING: Removing unreachable block (ram,0x002ea0cc) */

void FUN_002ea090(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  
  fVar2 = (float)FUN_00389140();
  fVar2 = SQRT(fVar2);
  fVar1 = param_1[1];
  fVar3 = param_1[2] / fVar2;
  fVar4 = *param_1 / fVar2;
  if (fVar3 == 0.0) {
    if (0.0 < fVar4) {
      puVar5 = (undefined *)0x3fc90fdb;
    }
    else {
      puVar5 = (undefined *)0x0;
      if (fVar4 < 0.0) {
        puVar5 = &DAT_bfc90fdb;
      }
    }
  }
  else {
    puVar5 = (undefined *)FUN_0029d6a8(fVar4 / fVar3);
    if (fVar3 < 0.0) {
      puVar5 = (undefined *)((float)puVar5 + 3.1415927);
    }
  }
  param_2[2] = 0.0;
  param_2[1] = (float)puVar5 / 0.017453292;
  fVar1 = (float)FUN_0029e1d8(fVar1 / fVar2);
  *param_2 = fVar1 / 0.017453292;
  return;
}


// ==== FUN_002ea1c8 @ 002ea1c8 ====

void FUN_002ea1c8(float param_1)

{
  FUN_0029da28(param_1 * 0.017453292);
  return;
}


// ==== FUN_002ea218 @ 002ea218 ====

void FUN_002ea218(void)

{
  FUN_0029da28();
  return;
}


// ==== FUN_002ea238 @ 002ea238 ====

void FUN_002ea238(void)

{
  FUN_0029dc18();
  return;
}


// ==== FUN_002ea258 @ 002ea258 ====

void FUN_002ea258(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.017453292;
  fVar1 = (float)FUN_0029dc18(param_1[1] * 0.017453292);
  fVar2 = (float)FUN_0029da28(*param_1 * fVar3);
  *param_2 = fVar1 * fVar2;
  fVar1 = (float)FUN_0029da28(param_1[1] * fVar3);
  fVar2 = (float)FUN_0029da28(*param_1 * fVar3);
  param_2[2] = fVar1 * fVar2;
  fVar3 = (float)FUN_0029dc18(*param_1 * fVar3);
  param_2[1] = fVar3;
  return;
}


// ==== FUN_002ea2f8 @ 002ea2f8 ====

void FUN_002ea2f8(long param_1,long param_2)

{
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_004514f8 = 0;
    DAT_00451500 = 0;
    DAT_00451508 = 0;
    DAT_00451510 = 0x3f800000;
    DAT_00451518 = 0x3f800000;
    DAT_00451520 = 0;
    DAT_00451528 = 0;
    DAT_0045152c = 0x3f800000;
    DAT_00451530 = 0;
    DAT_004514fc = 0;
    DAT_0045150c = 0;
    DAT_0045151c = 0;
  }
  return;
}


// ==== FUN_002ea368 @ 002ea368 ====

void FUN_002ea368(void)

{
  FUN_002ea2f8(1,0xffff);
  return;
}


// ==== FUN_002ea388 @ 002ea388 ====

void FUN_002ea388(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  undefined4 *puStack_a4;
  
  if (DAT_003c9edc == 0) {
    DAT_003c9edc = 0x10;
    puStack_b0 = (undefined4 *)0x0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x40,&puStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_b0,0x40,uVar3);
    }
    DAT_003c9ee0 = puStack_b0;
    iVar7 = DAT_003c9edc << 2;
    puStack_ac = (undefined4 *)0x0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,
                       (uint)&puStack_b0 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_ac,iVar7,uVar3);
    }
    DAT_003c9ee4 = puStack_ac;
  }
  else if (DAT_003c9edc == DAT_003c9ed8) {
    iVar7 = DAT_003c9edc << 3;
    puStack_a8 = (undefined4 *)0x0;
    DAT_003c9edc = DAT_003c9edc << 1;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,
                       (uint)&puStack_b0 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_a8,iVar7,uVar3);
    }
    puVar5 = puStack_a8;
    iVar7 = DAT_003c9edc << 2;
    puVar1 = puStack_a8;
    puStack_a4 = (undefined4 *)0x0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,
                       (uint)&puStack_b0 | 0xc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_a4,iVar7,uVar3);
    }
    iVar7 = 0;
    puVar2 = puStack_a4;
    puVar6 = puStack_a4;
    if (0 < DAT_003c9ed8) {
      do {
        iVar4 = iVar7 + 1;
        *puVar5 = DAT_003c9ee0[iVar7];
        puVar5 = puVar5 + 1;
        *puVar6 = DAT_003c9ee4[iVar7];
        puVar6 = puVar6 + 1;
        iVar7 = iVar4;
      } while (iVar4 < DAT_003c9ed8);
    }
    (*(code *)PTR_FUN_003c87e0)(DAT_003c9ee0);
    (*(code *)PTR_FUN_003c87e0)(DAT_003c9ee4);
    DAT_003c9ee0 = puVar1;
    DAT_003c9ee4 = puVar2;
  }
  DAT_003c9ee0[DAT_003c9ed8] = param_2;
  DAT_003c9ee4[DAT_003c9ed8] = param_3;
  DAT_003c9ed8 = DAT_003c9ed8 + 1;
  return;
}


// ==== FUN_002ea610 @ 002ea610 ====

void FUN_002ea610(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  undefined4 *puStack_a4;
  
  if (DAT_003c9eec == 0) {
    DAT_003c9eec = 0x10;
    puStack_b0 = (undefined4 *)0x0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x40,&puStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_b0,0x40,uVar3);
    }
    DAT_003c9ef0 = puStack_b0;
    iVar7 = DAT_003c9eec << 2;
    puStack_ac = (undefined4 *)0x0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,
                       (uint)&puStack_b0 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_ac,iVar7,uVar3);
    }
    DAT_003c9ef4 = puStack_ac;
  }
  else if (DAT_003c9eec == DAT_003c9ee8) {
    iVar7 = DAT_003c9eec << 3;
    puStack_a8 = (undefined4 *)0x0;
    DAT_003c9eec = DAT_003c9eec << 1;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,
                       (uint)&puStack_b0 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_a8,iVar7,uVar3);
    }
    puVar5 = puStack_a8;
    iVar7 = DAT_003c9eec << 2;
    puVar1 = puStack_a8;
    puStack_a4 = (undefined4 *)0x0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,
                       (uint)&puStack_b0 | 0xc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_a4,iVar7,uVar3);
    }
    iVar7 = 0;
    puVar2 = puStack_a4;
    puVar6 = puStack_a4;
    if (0 < DAT_003c9ee8) {
      do {
        iVar4 = iVar7 + 1;
        *puVar5 = DAT_003c9ef0[iVar7];
        puVar5 = puVar5 + 1;
        *puVar6 = DAT_003c9ef4[iVar7];
        puVar6 = puVar6 + 1;
        iVar7 = iVar4;
      } while (iVar4 < DAT_003c9ee8);
    }
    (*(code *)PTR_FUN_003c87e0)(DAT_003c9ef0);
    (*(code *)PTR_FUN_003c87e0)(DAT_003c9ef4);
    DAT_003c9ef0 = puVar1;
    DAT_003c9ef4 = puVar2;
  }
  DAT_003c9ef0[DAT_003c9ee8] = param_2;
  DAT_003c9ef4[DAT_003c9ee8] = param_3;
  DAT_003c9ee8 = DAT_003c9ee8 + 1;
  return;
}


// ==== FUN_002ea898 @ 002ea898 ====

void FUN_002ea898(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iStack_9c;
  
  uVar3 = FUN_002e91c0();
  FUN_002e8920(param_1,uVar3);
  for (iVar5 = *(int *)(*(int *)(param_2 + 0x14) + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
    iVar1 = **(int **)(iVar5 + 4);
    (**(code **)(iVar1 + 0x2c))((int)*(int **)(iVar5 + 4) + (int)*(short *)(iVar1 + 0x28));
  }
  uVar6 = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    iVar5 = *(int *)(param_2 + 0x20);
    while( true ) {
      piVar2 = *(int **)(uVar6 * 4 + iVar5);
      iVar5 = *piVar2;
      (**(code **)(iVar5 + 0x2c))((int)piVar2 + (int)*(short *)(iVar5 + 0x28));
      uVar6 = uVar6 + 1;
      if (*(uint *)(param_2 + 0x24) <= uVar6) break;
      iVar5 = *(int *)(param_2 + 0x20);
    }
  }
  uVar6 = FUN_002e90b8(uVar3);
  if (uVar6 != 0xffffffff) {
    iVar5 = *(int *)(param_2 + 0x14);
    while( true ) {
      if (uVar6 < *(uint *)(iVar5 + 0x18)) {
        iStack_9c = uVar6 * 0x14 + *(int *)(iVar5 + 4);
      }
      else {
        iStack_9c = 0;
      }
      if (*(char *)(iStack_9c + 0x10) != '\0') {
        iVar5 = *(int *)(iStack_9c + 4);
        piVar2 = *(int **)(iVar5 + 0x18);
        if ((piVar2 != (int *)0x0) &&
           (lVar4 = (**(code **)(*piVar2 + 0x34))((int)piVar2 + (int)*(short *)(*piVar2 + 0x30)),
           lVar4 == 1)) {
          piVar2 = *(int **)(*(int *)(iVar5 + 0x18) + 0x18);
          iVar1 = *piVar2;
          (**(code **)(iVar1 + 0x24))((int)piVar2 + (int)*(short *)(iVar1 + 0x20),iVar5);
        }
      }
      uVar6 = FUN_002e90b8(uVar3);
      if (uVar6 == 0xffffffff) break;
      iVar5 = *(int *)(param_2 + 0x14);
    }
  }
  FUN_002e9cb0(uVar3);
  return;
}


// ==== FUN_002eaac8 @ 002eaac8 ====

void FUN_002eaac8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  for (iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    iVar2 = **(int **)(iVar3 + 4);
    (**(code **)(iVar2 + 0x1c))((int)*(int **)(iVar3 + 4) + (int)*(short *)(iVar2 + 0x18));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    while( true ) {
      iVar2 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      piVar1 = *(int **)(iVar2 + iVar3);
      iVar3 = *piVar1;
      (**(code **)(iVar3 + 0x24))((int)piVar1 + (int)*(short *)(iVar3 + 0x20));
      if (*(uint *)(param_1 + 0x24) <= uVar4) break;
      iVar3 = *(int *)(param_1 + 0x20);
    }
  }
  return;
}


// ==== FUN_002eabb0 @ 002eabb0 ====

undefined4 FUN_002eabb0(int param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x14);
  if (*(uint *)(iVar4 + 0x14) < *(uint *)(param_1 + 0x10)) {
    iVar2 = *(int *)(iVar4 + 0x10);
    iVar5 = (int)param_2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *(int *)(iVar2 + 4) = iVar5;
      if (*(int *)(iVar4 + 0xc) == 0) {
        *(int *)(iVar4 + 0xc) = iVar2;
        *(int *)(iVar4 + 8) = iVar2;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(*(int *)(iVar4 + 8) + 8) = 0;
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 8) = 0;
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xc) = 0;
      }
      else {
        *(int *)(iVar2 + 8) = *(int *)(iVar4 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(int *)(*(int *)(iVar4 + 0xc) + 0xc) = iVar2;
        *(int *)(iVar4 + 0xc) = iVar2;
      }
    }
    *(int *)(iVar5 + 0x14) = iVar2;
    iVar4 = 0;
    bVar1 = 0 < DAT_003c9ed8;
    *(int *)(iVar5 + 0x28) = param_1;
    if (bVar1) {
      do {
        iVar2 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        (**(code **)(iVar2 + DAT_003c9ee0))(param_2,*(undefined4 *)(iVar2 + DAT_003c9ee4));
      } while (iVar4 < DAT_003c9ed8);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_002ead58 @ 002ead58 ====

undefined4 FUN_002ead58(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_2;
  if (*(int *)(iVar7 + 0x14) == 0) {
    uVar4 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < DAT_003c9ee8) {
      do {
        iVar2 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        (**(code **)(iVar2 + DAT_003c9ef0))(param_2,*(undefined4 *)(iVar2 + DAT_003c9ef4));
      } while (iVar6 < DAT_003c9ee8);
    }
    while (iVar6 = *(int *)(*(int *)(iVar7 + 0x2c) + 8), iVar6 != 0) {
      piVar1 = *(int **)(iVar6 + 4);
      iVar6 = *piVar1;
      (**(code **)(iVar6 + 0x24))((int)piVar1 + (int)*(short *)(iVar6 + 0x20),param_2);
    }
    iVar6 = *(int *)(iVar7 + 0x14);
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined1 *)(iVar6 + 0x10) = 0;
    if (iVar6 == *(int *)(iVar2 + 8)) {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar6 + 0xc);
      iVar3 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = *(int *)(iVar2 + 0xc);
    }
    if (iVar6 == iVar3) {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar6 + 8);
      iVar3 = *(int *)(iVar6 + 8);
    }
    else {
      iVar3 = *(int *)(iVar6 + 8);
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar6 + 0xc);
    }
    else {
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
      iVar3 = *(int *)(iVar6 + 0xc);
    }
    if (iVar3 == 0) {
      uVar5 = *(undefined4 *)(iVar2 + 0x10);
    }
    else {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 8);
      uVar5 = *(undefined4 *)(iVar2 + 0x10);
    }
    uVar4 = 1;
    *(undefined4 *)(iVar6 + 0xc) = uVar5;
    *(int *)(iVar2 + 0x10) = iVar6;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
    *(undefined4 *)(iVar7 + 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x28) = 0;
  }
  return uVar4;
}


// ==== FUN_002eaf30 @ 002eaf30 ====

void FUN_002eaf30(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1;
  *puVar5 = &DAT_003eba18;
  if (puVar5[7] != 0) {
    for (iVar2 = *(int *)(puVar5[7] + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      piVar1 = *(int **)(iVar2 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      }
    }
    piVar1 = (int *)puVar5[7];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
    }
  }
  if (puVar5[5] != 0) {
    iVar2 = *(int *)(puVar5[5] + 8);
    while (iVar2 != 0) {
      FUN_002e12b0(*(undefined4 *)(iVar2 + 4));
      iVar2 = *(int *)(puVar5[5] + 8);
    }
  }
  if (DAT_003c87d8 != 0) {
    iVar2 = *(int *)(DAT_003c87d8 + 8);
    while (iVar2 != 0) {
      FUN_002e12b0(*(undefined4 *)(iVar2 + 4));
      iVar2 = *(int *)(DAT_003c87d8 + 8);
    }
  }
  uVar3 = 0;
  iVar2 = 0;
  if (puVar5[9] != 0) {
    iVar2 = puVar5[8];
    while( true ) {
      iVar4 = uVar3 * 4;
      piVar1 = *(int **)(iVar4 + iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar4 + puVar5[8]) = 0;
      if ((uint)puVar5[9] <= uVar3) break;
      iVar2 = puVar5[8];
    }
    iVar2 = puVar5[9];
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_003c87e0)(puVar5[8]);
    puVar5[9] = 0;
  }
  piVar1 = (int *)puVar5[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  FUN_002e9cc8();
  if (DAT_003c9edc != 0) {
    DAT_003c9edc = 0;
    DAT_003c9ed8 = 0;
    (*(code *)PTR_FUN_003c87e0)(DAT_003c9ee0);
    DAT_003c9ee0 = 0;
    (*(code *)PTR_FUN_003c87e0)(DAT_003c9ee4);
    DAT_003c9ee4 = 0;
  }
  if (DAT_003c9eec != 0) {
    DAT_003c9eec = 0;
    DAT_003c9ee8 = 0;
    (*(code *)PTR_FUN_003c87e0)(DAT_003c9ef0);
    DAT_003c9ef0 = 0;
    (*(code *)PTR_FUN_003c87e0)(DAT_003c9ef4);
    DAT_003c9ef4 = 0;
  }
  *puVar5 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002eb280 @ 002eb280 ====

void FUN_002eb280(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *apuStack_50 [4];
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar6 == iVar2) {
    iVar2 = 8;
    if (iVar6 != 0) {
      iVar2 = iVar6 << 1;
    }
    *(int *)(param_1 + 0x28) = iVar2;
    apuStack_50[0] = (undefined4 *)0x0;
    iVar6 = *(int *)(param_1 + 0x28) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,apuStack_50);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(apuStack_50[0],iVar6,uVar3);
    }
    puVar1 = apuStack_50[0];
    uVar4 = 0;
    iVar6 = 0;
    puVar5 = apuStack_50[0];
    if (*(int *)(param_1 + 0x24) != 0) {
      do {
        iVar6 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *puVar5 = *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x20));
        puVar5 = puVar5 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x24));
      iVar6 = *(int *)(param_1 + 0x24);
    }
    if (iVar6 != 0) {
      (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 0x20));
    }
    *(undefined4 **)(param_1 + 0x20) = puVar1;
    iVar2 = *(int *)(param_1 + 0x24);
  }
  *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x20)) = param_2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}


// ==== FUN_002eb398 @ 002eb398 ====

int FUN_002eb398(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 4);
    lVar3 = stricmp(*(undefined4 *)(iVar2 + 4),param_2);
    if (lVar3 == 0) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return iVar2;
}


// ==== FUN_002eb450 @ 002eb450 ====

/* Strings referenciadas:
     "MaxEntity"
     "MaxTeam"
     "OneMeter"
     "TimeMgt"
     "MaxAperiodicTask"
     "Aperiodic"
     "MaxPeriodicTask"
     "Periodic"
     "MaxEstimatedTask"
     "Estimations"
     "Priority"
     "MaxCall"
     ... */

undefined4 FUN_002eb450(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined4 *puStack_d0;
  int *piStack_cc;
  undefined4 *puStack_c8;
  int *piStack_c4;
  undefined4 *puStack_c0;
  
  iVar18 = (int)param_1;
  *(int *)(iVar18 + 8) = (int)param_2;
  lVar5 = FUN_002e3330(param_2,0x406d50);
  if (lVar5 == 0) {
    *(undefined4 *)(iVar18 + 0x10) = 0;
  }
  else {
    uVar3 = FUN_0035e750(lVar5);
    *(undefined4 *)(iVar18 + 0x10) = uVar3;
  }
  lVar5 = FUN_002e3330(*(undefined4 *)(iVar18 + 8),0x406d60);
  *(undefined4 *)(iVar18 + 0x1c) = 0;
  if (lVar5 == 0) {
    *(undefined4 *)(iVar18 + 0x18) = 0;
  }
  else {
    uVar3 = FUN_0035e750(lVar5);
    *(undefined4 *)(iVar18 + 0x18) = uVar3;
    puStack_d0 = (undefined4 *)0x0;
    uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_d0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_d0,0x1c,uVar6);
    }
    puVar2 = puStack_d0;
    iVar15 = *(int *)(iVar18 + 0x18);
    puStack_d0[2] = 0;
    *puStack_d0 = &DAT_003e90a8;
    puStack_d0[5] = 0;
    puStack_d0[6] = iVar15;
    puStack_d0[4] = 0;
    puStack_d0[1] = 0;
    puStack_d0[3] = 0;
    if (iVar15 != 0) {
      piStack_cc = (int *)0x0;
      iVar17 = iVar15 * 0x14 + 0x10;
      uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,
                         (uint)&puStack_d0 | 4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_cc,iVar17,uVar6);
      }
      iVar17 = iVar15 + -1;
      piVar13 = piStack_cc + 4;
      *piStack_cc = iVar15;
      piVar16 = piVar13;
      if (iVar15 != 0) {
        do {
          *piVar16 = (int)&DAT_003e9090;
          iVar17 = iVar17 + -1;
          piVar16[2] = 0;
          piVar16[3] = 0;
          *(undefined1 *)(piVar16 + 4) = 0;
          piVar16 = piVar16 + 5;
        } while (iVar17 != -1);
      }
      puVar2[1] = piVar13;
      uVar14 = 1;
      puVar2[4] = piVar13;
      piStack_cc[6] = 0;
      iVar15 = 0;
      if (1 < (uint)puVar2[6]) {
        iVar17 = 0x14;
        do {
          uVar14 = uVar14 + 1;
          iVar12 = puVar2[1] + iVar15;
          iVar15 = iVar15 + 0x14;
          *(int *)(iVar17 + puVar2[1] + 8) = iVar12;
          *(int *)(*(int *)(iVar17 + puVar2[1] + 8) + 0xc) = iVar17 + puVar2[1];
          iVar17 = iVar17 + 0x14;
        } while (uVar14 < (uint)puVar2[6]);
      }
      *(undefined4 *)(puVar2[6] * 0x14 + puVar2[1] + -8) = 0;
    }
    *(undefined4 **)(iVar18 + 0x1c) = puVar2;
  }
  lVar5 = FUN_002e3330(*(undefined4 *)(iVar18 + 8),0x406d68);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar6 = FUN_0035e730(lVar5);
    uVar3 = FUN_00291c68(uVar6);
    *(undefined4 *)(iVar18 + 0xc) = uVar3;
    if (DAT_00451228 < *(uint *)(iVar18 + 0x10)) {
      *(uint *)(iVar18 + 0x10) = DAT_00451228;
    }
    puStack_c8 = (undefined4 *)0x0;
    uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,
                       (uint)&puStack_d0 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_c8,0x1c,uVar6);
    }
    puVar2 = puStack_c8;
    puStack_c0 = puStack_c8;
    iVar15 = *(int *)(iVar18 + 0x10);
    puStack_c8[2] = 0;
    *puStack_c8 = &DAT_003e8ee8;
    puStack_c8[5] = 0;
    puStack_c8[6] = iVar15;
    puStack_c8[4] = 0;
    puStack_c8[1] = 0;
    puStack_c8[3] = 0;
    if (iVar15 != 0) {
      piStack_c4 = (int *)0x0;
      iVar17 = iVar15 * 0x14 + 0x10;
      uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,
                         (uint)&puStack_d0 | 0xc);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_c4,iVar17,uVar6);
      }
      iVar17 = iVar15 + -1;
      piVar13 = piStack_c4 + 4;
      *piStack_c4 = iVar15;
      piVar16 = piVar13;
      if (iVar15 != 0) {
        do {
          *piVar16 = (int)&DAT_003e8ed0;
          iVar17 = iVar17 + -1;
          piVar16[2] = 0;
          piVar16[3] = 0;
          *(undefined1 *)(piVar16 + 4) = 0;
          piVar16 = piVar16 + 5;
        } while (iVar17 != -1);
      }
      puVar2[1] = piVar13;
      uVar14 = 1;
      puVar2[4] = piVar13;
      piStack_c4[6] = 0;
      iVar15 = 0;
      if (1 < (uint)puVar2[6]) {
        iVar17 = 0x14;
        do {
          uVar14 = uVar14 + 1;
          iVar12 = puVar2[1] + iVar15;
          iVar15 = iVar15 + 0x14;
          *(int *)(iVar17 + puVar2[1] + 8) = iVar12;
          *(int *)(*(int *)(iVar17 + puVar2[1] + 8) + 0xc) = iVar17 + puVar2[1];
          iVar17 = iVar17 + 0x14;
        } while (uVar14 < (uint)puVar2[6]);
      }
      *(undefined4 *)(puVar2[6] * 0x14 + puVar2[1] + -8) = 0;
    }
    *(undefined4 **)(iVar18 + 0x14) = puStack_c0;
    lVar5 = FUN_002e31e0(*(undefined4 *)(iVar18 + 8),0x406d78);
    lVar7 = FUN_002e3330(*(undefined4 *)(iVar18 + 8),0x406d80);
    iVar15 = (int)lVar5;
    if (lVar7 == 0) {
      DAT_003c9598 = 0;
      if ((lVar5 != 0) && (uVar14 = 0, *(int *)(iVar15 + 0x20) != 0)) {
        do {
          uVar6 = FUN_002e33e0(lVar5,uVar14);
          uVar6 = FUN_002e3920(uVar6);
          lVar7 = stricmp(uVar6,0x406d98);
          if (lVar7 == 0) {
            DAT_003c9598 = DAT_003c9598 + 1;
            uVar4 = *(uint *)(iVar15 + 0x20);
          }
          else {
            uVar4 = *(uint *)(iVar15 + 0x20);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar4);
      }
    }
    else {
      DAT_003c9598 = FUN_0035e750(lVar7);
    }
    lVar7 = FUN_002e3330(*(undefined4 *)(iVar18 + 8),0x406da8);
    if (lVar7 == 0) {
      DAT_003c959c = 0;
      if ((lVar5 != 0) && (uVar14 = 0, *(int *)(iVar15 + 0x20) != 0)) {
        do {
          uVar6 = FUN_002e33e0(lVar5,uVar14);
          uVar6 = FUN_002e3920(uVar6);
          lVar7 = stricmp(uVar6,0x406db8);
          if (lVar7 == 0) {
            DAT_003c959c = DAT_003c959c + 1;
            uVar4 = *(uint *)(iVar15 + 0x20);
          }
          else {
            uVar4 = *(uint *)(iVar15 + 0x20);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar4);
      }
    }
    else {
      DAT_003c959c = FUN_0035e750(lVar7);
    }
    lVar7 = FUN_002e3330(*(undefined4 *)(iVar18 + 8),0x406dc8);
    if (lVar7 == 0) {
      DAT_003c95a0 = 0;
      if ((lVar5 != 0) && (lVar7 = FUN_002e31e0(lVar5,0x406de0), lVar7 != 0)) {
        DAT_003c95a0 = *(undefined4 *)((int)lVar7 + 0x20);
      }
    }
    else {
      DAT_003c95a0 = FUN_0035e750(lVar7);
    }
    uVar6 = FUN_002e91c0();
    lVar7 = FUN_002e3330(*(undefined4 *)(iVar18 + 8),0x406df0);
    if (lVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar8 = FUN_0035e730(lVar7);
      fVar19 = (float)FUN_00291c68(uVar8);
      FUN_002e9538(fVar19 / 1000.0,uVar6);
      if (lVar5 != 0) {
        uVar14 = 0;
        if (*(int *)(iVar15 + 0x20) != 0) {
          do {
            uVar8 = FUN_002e33e0(lVar5,uVar14);
            uVar9 = FUN_002e3920(uVar8);
            lVar7 = stricmp(uVar9,0x406d98);
            if (lVar7 == 0) {
              if (*(int *)((int)uVar8 + 0xc) == 0) {
                uVar4 = *(uint *)(iVar15 + 0x20);
              }
              else {
                lVar7 = FUN_002e8740();
                if (lVar7 == -1) goto LAB_002ebc24;
                lVar10 = FUN_002e3330(uVar8,0x406df8);
                if (lVar10 == 0) {
                  FUN_002e9540(0,uVar6,lVar7);
                }
                else {
                  uVar9 = FUN_0035e730(lVar10);
                  uVar3 = FUN_00291c68(uVar9);
                  FUN_002e9540(uVar3,uVar6,lVar7);
                }
                lVar10 = FUN_002e3330(uVar8,0x406df0);
                if (lVar10 == 0) {
                  FUN_002e9570(0,uVar6,lVar7);
                }
                else {
                  uVar9 = FUN_0035e730(lVar10);
                  fVar19 = (float)FUN_00291c68(uVar9);
                  FUN_002e9570(fVar19 / 1000.0,uVar6,lVar7);
                }
                lVar10 = FUN_002e3330(uVar8,0x406e08);
                if (lVar10 == 0) {
                  FUN_002e95a0(uVar6,lVar7,0);
                  uVar4 = *(uint *)(iVar15 + 0x20);
                }
                else {
                  uVar8 = FUN_0035e750(lVar10,lVar7);
                  FUN_002e95a0(uVar6,lVar7,uVar8);
                  uVar4 = *(uint *)(iVar15 + 0x20);
                }
              }
            }
            else {
              uVar9 = FUN_002e3920(uVar8);
              lVar7 = stricmp(uVar9,0x406db8);
              if (lVar7 == 0) {
                if (*(int *)((int)uVar8 + 0xc) == 0) {
                  uVar4 = *(uint *)(iVar15 + 0x20);
                }
                else {
                  lVar7 = FUN_002e8650();
                  if (lVar7 != -1) {
                    lVar10 = FUN_002e3330(uVar8,0x406e10);
                    if (lVar10 == 0) {
                      FUN_002e95d0(0x49742400,uVar6);
                      uVar4 = *(uint *)(iVar15 + 0x20);
                      goto LAB_002ebc28;
                    }
                    uVar8 = FUN_0035e730(lVar10,lVar7);
                    fVar19 = (float)FUN_00291c68(uVar8);
                    FUN_002e95d0(fVar19 / 1000.0,uVar6,lVar7);
                  }
LAB_002ebc24:
                  uVar4 = *(uint *)(iVar15 + 0x20);
                }
              }
              else {
                uVar4 = *(uint *)(iVar15 + 0x20);
              }
            }
LAB_002ebc28:
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar4);
        }
        lVar5 = FUN_002e31e0(lVar5,0x406de0);
        if (lVar5 != 0) {
          uVar14 = 0;
          if (*(int *)((int)lVar5 + 0x20) != 0) {
            do {
              uVar8 = FUN_002e33e0(lVar5,uVar14);
              uVar14 = uVar14 + 1;
              uVar9 = FUN_002e3920(uVar8);
              uVar9 = FUN_002e8830(uVar9);
              uVar8 = FUN_002e3918(uVar8);
              uVar8 = FUN_0035e730(uVar8);
              fVar19 = (float)FUN_00291c68(uVar8);
              FUN_002e9600(fVar19 / 1000.0,uVar6,uVar9);
            } while (uVar14 < *(uint *)((int)lVar5 + 0x20));
          }
        }
      }
      lVar5 = FUN_002e31e0(*(undefined4 *)(iVar18 + 8),0x406e18);
      if (lVar5 != 0) {
        lVar7 = FUN_002e31e0(*(undefined4 *)(iVar18 + 8),0x406e28);
        if (lVar7 == 0) {
          return 1;
        }
        iVar18 = (int)lVar5;
        uVar14 = 0;
        if (*(int *)(iVar18 + 0x20) != 0) {
          do {
            uVar6 = FUN_002e33e0(lVar5,uVar14);
            uVar8 = FUN_002e3920(uVar6);
            lVar10 = stricmp(uVar8,0x406e38);
            if (lVar10 == 0) {
              lVar10 = FUN_002e3918(uVar6);
              if (lVar10 == 0) {
                uVar4 = *(uint *)(iVar18 + 0x20);
              }
              else {
                uVar6 = FUN_002e3918(uVar6);
                lVar10 = FUN_002e3100(lVar7,0x406e38,uVar6);
                if (lVar10 == 0) {
                  uVar4 = *(uint *)(iVar18 + 0x20);
                }
                else {
                  lVar11 = FUN_002e3330(lVar10,0x406e40);
                  if (lVar11 == 0) {
                    uVar4 = *(uint *)(iVar18 + 0x20);
                  }
                  else {
                    lVar11 = FUN_0038ee80(lVar11);
                    if (lVar11 == 0) {
                      uVar4 = *(uint *)(iVar18 + 0x20);
                    }
                    else {
                      pcVar1 = *(code **)((int)lVar11 + 4);
                      if (pcVar1 == (code *)0x0) {
                        uVar4 = *(uint *)(iVar18 + 0x20);
                      }
                      else {
                        lVar11 = (*pcVar1)();
                        piVar16 = (int *)lVar11;
                        lVar10 = (**(code **)(*piVar16 + 0x14))
                                           ((int)piVar16 + (int)*(short *)(*piVar16 + 0x10),lVar10);
                        if (lVar10 == 0) {
                          if (lVar11 != 0) {
                            (**(code **)(*piVar16 + 0xc))
                                      ((int)piVar16 + (int)*(short *)(*piVar16 + 8),3);
                            uVar4 = *(uint *)(iVar18 + 0x20);
                            goto LAB_002ebe08;
                          }
                        }
                        else {
                          FUN_002eb280(param_1,lVar11);
                        }
                        uVar4 = *(uint *)(iVar18 + 0x20);
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar4 = *(uint *)(iVar18 + 0x20);
            }
LAB_002ebe08:
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar4);
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}


// ==== FUN_002ebe90 @ 002ebe90 ====

void FUN_002ebe90(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_003c9ed8) {
    while ((*(int *)(iVar3 * 4 + DAT_003c9ee0) != param_2 ||
           (*(int *)(iVar3 * 4 + DAT_003c9ee4) != param_3))) {
      iVar3 = iVar3 + 1;
      if (DAT_003c9ed8 <= iVar3) {
        return;
      }
    }
    DAT_003c9ed8 = DAT_003c9ed8 + -1;
    if (iVar3 < DAT_003c9ed8) {
      do {
        iVar2 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        puVar1 = (undefined4 *)(iVar2 + DAT_003c9ee0);
        *puVar1 = puVar1[1];
        puVar1 = (undefined4 *)(iVar2 + DAT_003c9ee4);
        *puVar1 = puVar1[1];
      } while (iVar3 < DAT_003c9ed8);
    }
  }
  return;
}


// ==== FUN_002ebf58 @ 002ebf58 ====

void FUN_002ebf58(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_003c9ee8) {
    while ((*(int *)(iVar3 * 4 + DAT_003c9ef0) != param_2 ||
           (*(int *)(iVar3 * 4 + DAT_003c9ef4) != param_3))) {
      iVar3 = iVar3 + 1;
      if (DAT_003c9ee8 <= iVar3) {
        return;
      }
    }
    DAT_003c9ee8 = DAT_003c9ee8 + -1;
    if (iVar3 < DAT_003c9ee8) {
      do {
        iVar2 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        puVar1 = (undefined4 *)(iVar2 + DAT_003c9ef0);
        *puVar1 = puVar1[1];
        puVar1 = (undefined4 *)(iVar2 + DAT_003c9ef4);
        *puVar1 = puVar1[1];
      } while (iVar3 < DAT_003c9ee8);
    }
  }
  return;
}


// ==== FUN_002ec020 @ 002ec020 ====

undefined8 FUN_002ec020(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = param_2;
  *puVar1 = &DAT_003eba18;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return param_1;
}


// ==== FUN_002ec058 @ 002ec058 ====

undefined4 FUN_002ec058(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  do {
    piVar1 = *(int **)(uVar4 * 4 + iVar3);
    iVar3 = *piVar1;
    iVar3 = (**(code **)(iVar3 + 0x34))((int)piVar1 + (int)*(short *)(iVar3 + 0x30));
    do {
      if (param_2 == iVar3) {
        bVar2 = true;
        goto LAB_002ec0c4;
      }
      iVar3 = *(int *)(iVar3 + 0x108);
    } while (iVar3 != 0);
    bVar2 = false;
LAB_002ec0c4:
    if (bVar2) {
      return *(undefined4 *)(uVar4 * 4 + *(int *)(param_1 + 0x20));
    }
    uVar4 = uVar4 + 1;
    if (*(uint *)(param_1 + 0x24) <= uVar4) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x20);
  } while( true );
}


// ==== FUN_002ec110 @ 002ec110 ====

undefined4 FUN_002ec110(int param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_002ec188:
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    while( true ) {
      piVar1 = *(int **)(uVar5 * 4 + iVar2);
      iVar2 = *piVar1;
      lVar4 = (**(code **)(iVar2 + 0x34))((int)piVar1 + (int)*(short *)(iVar2 + 0x30));
      if (param_2 == lVar4) break;
      uVar5 = uVar5 + 1;
      if (*(uint *)(param_1 + 0x24) <= uVar5) goto LAB_002ec188;
      iVar2 = *(int *)(param_1 + 0x20);
    }
    uVar3 = *(undefined4 *)(uVar5 * 4 + *(int *)(param_1 + 0x20));
  }
  return uVar3;
}


// ==== FUN_002ec1b8 @ 002ec1b8 ====

undefined8 FUN_002ec1b8(undefined8 param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_a0;
  undefined4 *puStack_9c;
  int *piStack_98;
  
  puVar9 = (undefined4 *)param_1;
  *puVar9 = &DAT_003ebae8;
  puVar9[3] = &DAT_003e8430;
  puVar9[4] = 0;
  *(undefined1 *)(puVar9 + 5) = 0;
  if (param_3 == 0) {
    puVar9[1] = 0;
  }
  else {
    iVar2 = strlen(param_3);
    uStack_a0 = 0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 + 1,
                       &uStack_a0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_a0,iVar2 + 1,uVar3);
    }
    puVar9[1] = uStack_a0;
    strcpy(uStack_a0,param_3);
  }
  puStack_9c = (undefined4 *)0x0;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,
                     (uint)&uStack_a0 | 4);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(puStack_9c,0x1c,uVar3);
  }
  puVar1 = puStack_9c;
  puStack_9c[2] = 0;
  *puStack_9c = &DAT_003e8ee8;
  puStack_9c[5] = 0;
  iVar2 = (int)param_2;
  puStack_9c[6] = iVar2;
  puStack_9c[4] = 0;
  puStack_9c[1] = 0;
  puStack_9c[3] = 0;
  if (param_2 != 0) {
    piStack_98 = (int *)0x0;
    iVar8 = iVar2 * 0x14 + 0x10;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                       (uint)&uStack_a0 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_98,iVar8,uVar3);
    }
    iVar8 = iVar2 + -1;
    piVar6 = piStack_98 + 4;
    *piStack_98 = iVar2;
    piVar4 = piVar6;
    if (param_2 != 0) {
      do {
        *piVar4 = (int)&DAT_003e8ed0;
        iVar8 = iVar8 + -1;
        piVar4[2] = 0;
        piVar4[3] = 0;
        *(undefined1 *)(piVar4 + 4) = 0;
        piVar4 = piVar4 + 5;
      } while (iVar8 != -1);
    }
    puVar1[1] = piVar6;
    uVar7 = 1;
    puVar1[4] = piVar6;
    piStack_98[6] = 0;
    iVar2 = 0;
    if (1 < (uint)puVar1[6]) {
      iVar8 = 0x14;
      do {
        uVar7 = uVar7 + 1;
        iVar5 = puVar1[1] + iVar2;
        iVar2 = iVar2 + 0x14;
        *(int *)(iVar8 + puVar1[1] + 8) = iVar5;
        *(int *)(*(int *)(iVar8 + puVar1[1] + 8) + 0xc) = iVar8 + puVar1[1];
        iVar8 = iVar8 + 0x14;
      } while (uVar7 < (uint)puVar1[6]);
    }
    *(undefined4 *)(puVar1[6] * 0x14 + puVar1[1] + -8) = 0;
  }
  puVar9[2] = puVar1;
  return param_1;
}


// ==== FUN_002ec4b0 @ 002ec4b0 ====

void FUN_002ec4b0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003ebae8;
  while (*(int *)(puVar2[2] + 8) != 0) {
    FUN_002ec6d8(param_1,*(undefined4 *)(*(int *)(puVar2[2] + 8) + 4));
  }
  if (puVar2[1] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  piVar1 = (int *)puVar2[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  *puVar2 = &DAT_003e0040;
  puVar2[3] = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


