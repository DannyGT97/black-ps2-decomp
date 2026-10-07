// ==== FUN_00314548 @ 00314548 ====

void FUN_00314548(void)

{
  FUN_00312d08(DAT_0040e160);
  DAT_0040e160 = 0;
  DAT_0040e164 = 0;
  return;
}


// ==== FUN_00314570 @ 00314570 ====

void FUN_00314570(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0040e778;
  if ((undefined4 **)DAT_0040e778 != &DAT_0040e778) {
    do {
      FUN_00318188(puVar1 + -4,param_1);
      puVar1 = (undefined4 *)*puVar1;
    } while ((undefined4 **)puVar1 != &DAT_0040e778);
  }
  return;
}


// ==== FUN_003145d0 @ 003145d0 ====

void FUN_003145d0(undefined8 param_1)

{
  byte bVar1;
  
  FUN_00316668();
  bVar1 = *(byte *)((int)param_1 + 0x1b);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 4) == 0) {
      FUN_00312c70(param_1);
    }
  }
  else {
    FUN_00317c20(0x456358,param_1);
  }
  return;
}


// ==== FUN_00314630 @ 00314630 ====

uint FUN_00314630(int *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = FUN_00316400(param_1[1],0x4092e0);
  if (lVar2 == 0) {
    uVar1 = (uint)(*(byte *)(param_1 + 3) >> 3);
  }
  else {
    lVar2 = FUN_00316400(param_1[1],0x4092d0);
    if (lVar2 == 0) {
      uVar1 = 0x10;
    }
    else {
      lVar2 = FUN_00316400(param_1[1],0x4092f0);
      if (lVar2 == 0) {
        uVar1 = 4;
      }
      else {
        lVar2 = FUN_00316400(param_1[1],0x409300);
        if (lVar2 == 0) {
          uVar1 = 8;
        }
        else {
          lVar2 = FUN_00316400(param_1[1],0x409310);
          if ((lVar2 == 0) || (lVar2 = FUN_00316400(param_1[1],0x409370), lVar2 == 0)) {
            uVar1 = 4;
            if (*(char *)((int)param_1 + 0xd) == '\x01') {
              uVar1 = 0x24;
            }
          }
          else {
            lVar2 = FUN_00316400(param_1[1],0x409330);
            uVar1 = 0;
            if (lVar2 == 0) {
              iVar4 = 0x1f400;
              if ((int *)param_1[4] != (int *)0x0) {
                iVar4 = *(int *)param_1[4];
              }
              iVar3 = *param_1;
              if (iVar3 == 0) {
                iVar3 = 48000;
              }
              if (iVar3 == 0) {
                trap(7);
              }
              uVar1 = (iVar4 * 0x90) / iVar3;
            }
          }
        }
      }
    }
  }
  return uVar1;
}


// ==== FUN_00314760 @ 00314760 ====

long FUN_00314760(int param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = FUN_00317a78(0x456380,0x30805);
    if (param_2 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_2 + 0x58) = 2;
  }
  else {
    *(undefined4 *)((int)param_2 + 0x58) = 0;
  }
  FUN_00316758(param_2);
  iVar2 = (int)param_2;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0x40;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  FUN_003153c0(param_2,0,0);
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  if (param_1 == 0) {
    param_1 = DAT_0040e7d0;
  }
  *(int *)(iVar2 + 0x40) = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(int *)(iVar2 + 0x54) = param_1 + 0x20;
  *(undefined4 *)(iVar2 + 0x50) = uVar1;
  *(int *)(*(int *)(param_1 + 0x20) + 4) = iVar2 + 0x50;
  *(int *)(param_1 + 0x20) = iVar2 + 0x50;
  return param_2;
}


// ==== FUN_00314848 @ 00314848 ====

undefined8 FUN_00314848(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puStack_60;
  uint uStack_5c;
  undefined8 *apuStack_58 [2];
  
  puVar7 = (undefined8 *)param_1;
  puVar3 = (undefined8 *)param_2;
  if (param_3 == 0) {
    if (param_4 == 0) {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar1 = *(undefined4 *)(puVar3 + 3);
      *puVar7 = *puVar3;
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      *(undefined4 *)(puVar7 + 3) = uVar1;
    }
    else {
      apuStack_58[0] = puVar7;
      FUN_00318600(apuStack_58,param_2,4);
      FUN_00318600(apuStack_58,(int)puVar3 + 4,4);
      FUN_00318600(apuStack_58,puVar3 + 1,4);
      FUN_00318600(apuStack_58,(int)puVar3 + 0xc,1);
      FUN_00318600(apuStack_58,(int)puVar3 + 0xd,1);
      memset(apuStack_58[0],0,2);
      apuStack_58[0] = (undefined8 *)((int)apuStack_58[0] + 2);
      FUN_00318600(apuStack_58,puVar3 + 2,4);
      FUN_00318600(apuStack_58,(int)puVar3 + 0x14,4);
      FUN_00318600(apuStack_58,puVar3 + 3,1);
      FUN_00318600(apuStack_58,(int)puVar3 + 0x19,1);
      memset(apuStack_58[0],0,2);
      apuStack_58[0] = (undefined8 *)((int)apuStack_58[0] + 2);
    }
    iVar6 = (int)puVar3 + 0x1c;
    if (*(int *)((int)puVar7 + 4) != 0) {
      FUN_00316770(iVar6,iVar6,param_4);
      lVar2 = FUN_00315208(iVar6);
      *(int *)((int)puVar7 + 4) = (int)lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      iVar6 = (int)puVar3 + 0x2c;
    }
    if (*(int *)(puVar7 + 2) != 0) {
      *(int *)(puVar7 + 2) = iVar6;
    }
  }
  else {
    if (param_4 == 0) {
      uVar4 = puVar7[1];
      uVar5 = puVar7[2];
      uVar1 = *(undefined4 *)(puVar7 + 3);
      *puVar3 = *puVar7;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puStack_60 = (undefined8 *)((int)puVar3 + 0x1c);
      *(undefined4 *)(puVar3 + 3) = uVar1;
    }
    else {
      uStack_5c = (uint)(*(int *)((int)puVar7 + 4) != 0);
      puStack_60 = puVar3;
      FUN_00318600(&puStack_60,param_1,4);
      FUN_00318600(&puStack_60,(uint)&puStack_60 | 4,4);
      FUN_00318600(&puStack_60,puVar7 + 1,4);
      FUN_00318600(&puStack_60,(int)puVar7 + 0xc,1);
      FUN_00318600(&puStack_60,(int)puVar7 + 0xd,1);
      memset(puStack_60,0,2);
      puStack_60 = (undefined8 *)((int)puStack_60 + 2);
      FUN_00318600(&puStack_60,puVar7 + 2,4);
      FUN_00318600(&puStack_60,(int)puVar7 + 0x14,4);
      FUN_00318600(&puStack_60,puVar7 + 3,1);
      FUN_00318600(&puStack_60,(int)puVar7 + 0x19,1);
      memset(puStack_60,0,2);
      puStack_60 = (undefined8 *)((int)puStack_60 + 2);
    }
    if (*(int *)((int)puVar7 + 4) != 0) {
      FUN_00316770(*(int *)((int)puVar7 + 4),puStack_60,param_4);
      puStack_60 = puStack_60 + 2;
    }
    if (*(int *)(puVar7 + 2) != 0) {
      memcpy(puStack_60,*(int *)(puVar7 + 2),*(undefined4 *)((int)puVar7 + 0x14));
      *(byte *)(puVar7 + 3) = *(byte *)(puVar7 + 3) | 2;
    }
  }
  return param_1;
}


// ==== FUN_00314b98 @ 00314b98 ====

int FUN_00314b98(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined5 uStack_58;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar5 = (undefined8 *)param_1;
  lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x4092e0);
  iVar2 = 1;
  if (lVar4 != 0) {
    lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x4092d0);
    if (lVar4 == 0) {
      iVar2 = 0x1c;
    }
    else {
      lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x4092f0);
      if (lVar4 == 0) {
        iVar2 = 1;
      }
      else {
        lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x409360);
        if (lVar4 == 0) {
          iVar2 = 0x600;
        }
        else {
          lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x409300);
          if (lVar4 == 0) {
            iVar2 = 0xe;
          }
          else {
            lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x409310);
            if (lVar4 == 0) {
              cVar1 = *(char *)((int)puVar5 + 0xd);
            }
            else {
              lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x409370);
              if (lVar4 != 0) {
                lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x409330);
                if (lVar4 == 0) {
                  return 0x480;
                }
                lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x409340);
                if (lVar4 != 0) {
                  lVar4 = FUN_00316400(*(undefined4 *)((int)puVar5 + 4),0x409350);
                  if (lVar4 != 0) {
                    return 0x180;
                  }
                  return 0;
                }
                return 0x480;
              }
              cVar1 = *(char *)((int)puVar5 + 0xd);
            }
            if (cVar1 == '\x01') {
              iVar2 = 0x40;
            }
            else {
              uStack_60 = *puVar5;
              uStack_50 = puVar5[2];
              uStack_48 = *(undefined4 *)(puVar5 + 3);
              uStack_52 = (undefined2)((ulong)puVar5[1] >> 0x30);
              _uStack_58 = CONCAT15(1,(int5)puVar5[1]);
              iVar2 = FUN_00314b98(&uStack_60);
              iVar3 = FUN_00314630(&uStack_60);
              lVar4 = FUN_00314630(param_1);
              if (lVar4 == 0) {
                trap(7);
              }
              iVar2 = iVar2 / (iVar3 / (int)lVar4);
            }
          }
        }
      }
    }
  }
  return iVar2;
}


// ==== FUN_00314d60 @ 00314d60 ====

undefined4 FUN_00314d60(int *param_1,int *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00316400(param_1[1],param_2[1]);
  uVar1 = 0;
  if ((((lVar2 == 0) && (uVar1 = 0, *param_1 == *param_2)) &&
      (uVar1 = 0, (short)param_1[3] == (short)param_2[3])) &&
     (uVar1 = 1, (*(byte *)(param_1 + 6) & 0xfd) != (*(byte *)(param_2 + 6) & 0xfd))) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00314de0 @ 00314de0 ====

void FUN_00314de0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 *apuStack_40 [4];
  
  apuStack_40[0] = (undefined1 *)&uStack_60;
  FUN_00318600(apuStack_40,param_1,4);
  puVar1 = (undefined8 *)param_1;
  FUN_00318600(apuStack_40,(int)puVar1 + 4,4);
  FUN_00318600(apuStack_40,puVar1 + 1,4);
  *apuStack_40[0] = *(undefined1 *)((int)puVar1 + 0xc);
  apuStack_40[0][1] = *(undefined1 *)((int)puVar1 + 0xd);
  apuStack_40[0][2] = *(undefined1 *)((int)puVar1 + 0xe);
  apuStack_40[0][3] = *(undefined1 *)((int)puVar1 + 0xf);
  apuStack_40[0] = apuStack_40[0] + 4;
  FUN_00318600(apuStack_40,puVar1 + 2,4);
  FUN_00318600(apuStack_40,(int)puVar1 + 0x14,4);
  *apuStack_40[0] = *(undefined1 *)(puVar1 + 3);
  *puVar1 = uStack_60;
  puVar1[1] = uStack_58;
  puVar1[2] = uStack_50;
  *(undefined4 *)(puVar1 + 3) = uStack_48;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  return;
}


// ==== FUN_00314f08 @ 00314f08 ====

int FUN_00314f08(undefined8 param_1,ulong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = FUN_00314b98();
  uVar4 = FUN_00314630(param_1);
  iVar6 = (int)param_1;
  lVar5 = FUN_00316400(*(undefined4 *)(iVar6 + 4),0x409310);
  if (lVar5 == 0) {
    cVar1 = *(char *)(iVar6 + 0xd);
LAB_00314f70:
    if (cVar1 == '\x02') {
      if ((long)param_2 < 0) {
        fVar8 = (float)(param_2 & 0xffffffff);
      }
      else {
        fVar8 = (float)(int)param_2;
      }
      if ((long)uVar4 < 0) {
        fVar7 = (float)(uVar4 & 0xffffffff);
      }
      else {
        fVar7 = (float)(int)uVar4;
      }
      iVar3 = (int)(fGpffff80a4 * (fVar8 / fVar7));
      bVar2 = *(byte *)(iVar6 + 0x18);
      goto LAB_00315004;
    }
  }
  else {
    lVar5 = FUN_00316400(*(undefined4 *)(iVar6 + 4),0x409370);
    if (lVar5 == 0) {
      cVar1 = *(char *)(iVar6 + 0xd);
      goto LAB_00314f70;
    }
  }
  if (uVar4 == 0) {
    trap(7);
  }
  iVar3 = iVar3 * ((int)param_2 / (int)uVar4);
  bVar2 = *(byte *)(iVar6 + 0x18);
LAB_00315004:
  if (((bVar2 & 4) == 0) &&
     (iVar3 = iVar3 / (int)(uint)*(byte *)(iVar6 + 0xd), *(byte *)(iVar6 + 0xd) == 0)) {
    trap(7);
  }
  return iVar3;
}


// ==== FUN_00315048 @ 00315048 ====

void FUN_00315048(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  undefined1 uVar1;
  
  if (param_3 != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((int)param_2 + 0xd) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x19) = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 1);
  param_2[1] = *param_1;
  uVar1 = *(undefined1 *)((int)param_1 + 5);
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined1 *)((int)param_2 + 0xd) = uVar1;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)(param_2 + 6) = 1;
  }
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 4;
  }
  return;
}


// ==== FUN_003150d0 @ 003150d0 ====

byte FUN_003150d0(undefined4 *param_1,uint *param_2)

{
  long lVar1;
  byte bVar2;
  
  bVar2 = 0;
  if ((short)param_2[3] == *(short *)(param_1 + 1)) {
    bVar2 = 0;
    if (((uint)param_1[2] <= *param_2) && (bVar2 = 0, *param_2 <= (uint)param_1[3])) {
      lVar1 = FUN_00316400(param_2[1],*param_1);
      bVar2 = 0;
      if (lVar1 == 0) {
        bVar2 = (byte)param_2[6] & 1 ^ *(byte *)(param_1 + 4) & 1 ^ 1;
      }
    }
  }
  return bVar2;
}


// ==== FUN_00315168 @ 00315168 ====

undefined * FUN_00315168(int param_1)

{
  return (&PTR_DAT_003ced40)[param_1];
}


// ==== FUN_00315180 @ 00315180 ====

void FUN_00315180(int param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      FUN_00312c70();
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// ==== FUN_003151d8 @ 003151d8 ====

int FUN_003151d8(int param_1)

{
  int iVar1;
  
  iVar1 = 0x1c;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0x2c;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x14);
  }
  return iVar1;
}


// ==== FUN_00315208 @ 00315208 ====

undefined * FUN_00315208(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  uint uVar3;
  
  ppuVar2 = &PTR_DAT_003ced40;
  uVar3 = 0;
  do {
    lVar1 = FUN_00316400(*ppuVar2,param_1);
    uVar3 = uVar3 + 1;
    if (lVar1 == 0) {
      return *ppuVar2;
    }
    ppuVar2 = ppuVar2 + 1;
  } while (uVar3 < 9);
  return (undefined *)0x0;
}


// ==== FUN_00315278 @ 00315278 ====

undefined8 FUN_00315278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00316618();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = FUN_003165c8(param_1,param_3);
    if (lVar1 == 0) {
      param_1 = 0;
    }
  }
  return param_1;
}


// ==== FUN_003152c8 @ 003152c8 ====

undefined4 FUN_003152c8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = FUN_00314370(param_1,1);
  uVar3 = 0;
  if (lVar4 == 0) {
    iVar5 = (int)param_1;
    if (*(code **)(iVar5 + 0x30) == (code *)0x0) {
      iVar1 = *(int *)(iVar5 + 0x4c);
    }
    else {
      (**(code **)(iVar5 + 0x30))(param_1);
      iVar1 = *(int *)(iVar5 + 0x4c);
    }
    if (iVar1 == 0) {
      uVar2 = *(uint *)(iVar5 + 0x58);
    }
    else {
      FUN_00317fc0();
      uVar2 = *(uint *)(iVar5 + 0x58);
    }
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined4 *)(iVar5 + 0x50);
    }
    else {
      FUN_00312c70(*(undefined4 *)(iVar5 + 0x38));
      uVar3 = *(undefined4 *)(iVar5 + 0x50);
    }
    **(undefined4 **)(iVar5 + 0x54) = uVar3;
    *(undefined4 *)(*(int *)(iVar5 + 0x50) + 4) = *(undefined4 *)(iVar5 + 0x54);
    FUN_00316668(param_1);
    if ((*(uint *)(iVar5 + 0x58) & 2) != 0) {
      FUN_00317c20(0x456380,param_1);
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_00315380 @ 00315380 ====

undefined4 FUN_00315380(undefined4 param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  uStack_20 = param_1;
  FUN_0031e0e0(0,0,0x315718,&uStack_20,1);
  return uStack_1c;
}


// ==== FUN_003153c0 @ 003153c0 ====

void FUN_003153c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x58) & 1) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar1 = *(uint *)(param_1 + 0x58);
    }
    else {
      FUN_00312c70();
      uVar1 = *(uint *)(param_1 + 0x58);
    }
    *(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


// ==== FUN_00315440 @ 00315440 ====

undefined4 FUN_00315440(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  uVar7 = 0;
  if (uVar1 == 0) {
LAB_00315514:
    uVar7 = 1;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x38);
    uVar6 = 0;
    if (uVar1 != 0) {
      do {
        puVar2 = (undefined4 *)*piVar5;
        bVar3 = false;
        if (((((short)param_2[3] == *(short *)(puVar2 + 1)) && ((uint)puVar2[2] <= *param_2)) &&
            (*param_2 <= (uint)puVar2[3])) &&
           ((lVar4 = FUN_00316400(param_2[1],*puVar2), lVar4 == 0 &&
            (bVar3 = true, ((byte)param_2[6] & 1) != (*(byte *)(puVar2 + 4) & 1))))) {
          bVar3 = false;
        }
        uVar6 = uVar6 + 1;
        if (bVar3) goto LAB_00315514;
        piVar5 = piVar5 + 1;
      } while (uVar6 < uVar1);
      uVar7 = 0;
    }
  }
  return uVar7;
}


// ==== FUN_00315548 @ 00315548 ====

bool FUN_00315548(void)

{
  long lVar1;
  
  uGpffff8994 = 1;
  lVar1 = FUN_00317e40(0x6c,8,0x40,0,0x456380,0x40805);
  if (lVar1 == 0) {
    uGpffff8994 = 0;
  }
  return lVar1 != 0;
}


// ==== FUN_00315598 @ 00315598 ====

void FUN_00315598(void)

{
  FUN_0031e0e0(0,0,0x3156c8,0,1);
  FUN_00317fc0(0x456380);
  uGpffff8994 = 0;
  return;
}


// ==== FUN_003155e0 @ 003155e0 ====

undefined4 FUN_003155e0(undefined4 *param_1,uint param_2)

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


// ==== FUN_00315650 @ 00315650 ====

undefined4 FUN_00315650(undefined4 *param_1,uint param_2)

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


// ==== FUN_00315718 @ 00315718 ====

undefined4 FUN_00315718(undefined8 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 0x20);
  if (piVar4 == (int *)(param_2 + 0x20)) {
LAB_00315770:
    uVar2 = 0;
  }
  else {
    iVar1 = piVar4[-0x14];
    while( true ) {
      lVar3 = FUN_00316400(iVar1,*param_3);
      if (lVar3 == 0) break;
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)(param_2 + 0x20)) goto LAB_00315770;
      iVar1 = piVar4[-0x14];
    }
    param_3[1] = piVar4 + -0x14;
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_00315790 @ 00315790 ====

long FUN_00315790(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  
  if (param_6 == 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      puVar7 = &DAT_004563a8;
    }
    else if (*(int *)(param_1 + 0x4c) == 0) {
      lVar5 = FUN_00317e40(0x5c,8,1,1,0,0x30806);
      *(int *)(param_1 + 0x4c) = (int)lVar5;
      if (lVar5 == 0) {
        return 0;
      }
      puVar7 = *(undefined **)(param_1 + 0x4c);
    }
    else {
      puVar7 = *(undefined **)(param_1 + 0x4c);
    }
    param_6 = FUN_00317a78(puVar7,0x30806);
    if (param_6 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_6 + 0x54) = 1;
  }
  else {
    *(undefined4 *)((int)param_6 + 0x54) = 4;
  }
  FUN_00316758(param_6);
  iVar9 = (int)param_6;
  *(undefined4 *)(iVar9 + 0x4c) = 0;
  *(int *)(iVar9 + 0xc) = param_1;
  *(undefined4 *)(iVar9 + 0x48) = 0;
  *(int *)(iVar9 + 0x58) = (int)param_2;
  *(undefined4 *)(iVar9 + 0x10) = 0;
  *(undefined4 *)(iVar9 + 0x14) = 0;
  *(undefined4 *)(iVar9 + 0x18) = 0;
  *(undefined1 *)(iVar9 + 0x1c) = 0;
  *(undefined1 *)(iVar9 + 0x1d) = 0;
  *(undefined1 *)(iVar9 + 0x28) = 0;
  *(undefined1 *)(iVar9 + 0x29) = 0;
  *(undefined4 *)(iVar9 + 0x20) = 0;
  *(undefined4 *)(iVar9 + 0x24) = 0;
  puVar10 = (undefined8 *)param_3;
  uVar6 = puVar10[1];
  uVar8 = puVar10[2];
  uVar4 = *(undefined4 *)(puVar10 + 3);
  *(undefined8 *)(iVar9 + 0x10) = *puVar10;
  *(undefined8 *)(iVar9 + 0x18) = uVar6;
  *(undefined8 *)(iVar9 + 0x20) = uVar8;
  *(undefined4 *)(iVar9 + 0x28) = uVar4;
  if ((*(int *)(puVar10 + 2) != 0) && (*(int *)((int)puVar10 + 0x14) != 0)) {
    lVar5 = FUN_00312c48(*(int *)((int)puVar10 + 0x14),0x30806);
    *(int *)(iVar9 + 0x20) = (int)lVar5;
    if (lVar5 == 0) {
      return 0;
    }
    memcpy(lVar5,*(undefined4 *)(puVar10 + 2),*(undefined4 *)((int)puVar10 + 0x14));
  }
  FUN_003159c8(param_6,param_3,param_4);
  if (*(char *)(iVar9 + 0x39) == '\x01') {
    uVar2 = *(uint *)(iVar9 + 0x54) | 2;
    if (param_5 == 0) {
      uVar2 = *(uint *)(iVar9 + 0x54);
    }
    *(uint *)(iVar9 + 0x54) = uVar2;
    iVar3 = *(int *)(iVar9 + 0xc);
  }
  else {
    iVar3 = *(int *)(iVar9 + 0xc);
  }
  if (*(int *)(iVar3 + 0x44) == 0) {
    *(undefined4 *)(iVar9 + 0x50) = 0;
  }
  else {
    uVar4 = FUN_00312c48(*(undefined4 *)(param_1 + 0x44),0x30806);
    *(undefined4 *)(iVar9 + 0x50) = uVar4;
    *(uint *)(iVar9 + 0x54) = *(uint *)(iVar9 + 0x54) | 8;
  }
  pcVar1 = *(code **)(*(int *)(iVar9 + 0xc) + 0xc);
  if ((pcVar1 != (code *)0x0) && (lVar5 = (*pcVar1)(param_6,param_2), lVar5 == 0)) {
    FUN_00316240(param_6);
    return 0;
  }
  uVar6 = FUN_00314538();
  FUN_003144c8(uVar6,param_6);
  return param_6;
}


// ==== FUN_003159c8 @ 003159c8 ====

void FUN_003159c8(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar5 = *(int *)(param_1 + 0xc);
  if (param_3 == (undefined8 *)0x0) {
    iVar3 = *(int *)(iVar5 + 0x38);
  }
  else if (*(int *)((int)param_3 + 4) == 0) {
    iVar3 = *(int *)(iVar5 + 0x38);
  }
  else {
    if (*(int *)(iVar5 + 0x34) != 0) {
      lVar2 = FUN_00315440(iVar5,param_3);
      if (lVar2 == 0) {
        return;
      }
      goto LAB_00315a74;
    }
    iVar3 = *(int *)(iVar5 + 0x38);
  }
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x3c) * 4 + iVar3);
  }
  if (iVar5 == 0) {
    if (param_3 == (undefined8 *)0x0) {
      param_3 = param_2;
    }
  }
  else {
    FUN_00315048(iVar5,auStack_60,1);
    auStack_60[0] = *(undefined4 *)param_2;
    uStack_50 = *(undefined4 *)(param_2 + 2);
    uStack_4c = *(undefined4 *)((int)param_2 + 0x14);
    param_3 = (undefined8 *)auStack_60;
  }
LAB_00315a74:
  lVar2 = FUN_00314d60(param_2,param_3);
  if (lVar2 != 0) {
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((int)param_3 + 0x14) = *(undefined4 *)((int)param_2 + 0x14);
  }
  uVar1 = FUN_00321f10(param_2,0,param_3);
  *(undefined4 *)(param_3 + 1) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_3 != (undefined8 *)0x0) {
    uVar4 = param_3[1];
    uVar6 = param_3[2];
    uVar1 = *(undefined4 *)(param_3 + 3);
    *(undefined8 *)(param_1 + 0x2c) = *param_3;
    *(undefined8 *)(param_1 + 0x34) = uVar4;
    *(undefined8 *)(param_1 + 0x3c) = uVar6;
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    if ((*(int *)(param_3 + 2) != 0) && (*(int *)((int)param_3 + 0x14) != 0)) {
      lVar2 = FUN_00312c48(*(int *)((int)param_3 + 0x14),0x30806);
      *(int *)(param_1 + 0x3c) = (int)lVar2;
      if (lVar2 != 0) {
        memcpy(lVar2,*(undefined4 *)(param_3 + 2),*(undefined4 *)((int)param_3 + 0x14));
      }
    }
  }
  return;
}


// ==== FUN_00315b60 @ 00315b60 ====

void FUN_00315b60(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_a0 [8];
  undefined8 auStack_60 [4];
  undefined8 *apuStack_40 [4];
  
  puVar2 = auStack_a0;
  puVar3 = auStack_a0;
  apuStack_40[0] = auStack_a0;
  FUN_003164d0();
  uVar1 = *(undefined4 *)(param_1 + 1);
  *apuStack_40[0] = *param_1;
  *(undefined4 *)(apuStack_40[0] + 1) = uVar1;
  *(undefined4 *)((int)apuStack_40[0] + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
  apuStack_40[0] = apuStack_40[0] + 2;
  FUN_00314de0(param_1 + 2);
  uVar4 = param_1[3];
  uVar6 = param_1[4];
  uVar1 = *(undefined4 *)(param_1 + 5);
  *apuStack_40[0] = param_1[2];
  apuStack_40[0][1] = uVar4;
  apuStack_40[0][2] = uVar6;
  *(undefined4 *)(apuStack_40[0] + 3) = uVar1;
  apuStack_40[0] = (undefined8 *)((int)apuStack_40[0] + 0x1c);
  FUN_00314de0((int)param_1 + 0x2c);
  uVar4 = *(undefined8 *)((int)param_1 + 0x34);
  uVar6 = *(undefined8 *)((int)param_1 + 0x3c);
  uVar1 = *(undefined4 *)((int)param_1 + 0x44);
  *apuStack_40[0] = *(undefined8 *)((int)param_1 + 0x2c);
  apuStack_40[0][1] = uVar4;
  apuStack_40[0][2] = uVar6;
  *(undefined4 *)(apuStack_40[0] + 3) = uVar1;
  apuStack_40[0] = (undefined8 *)((int)apuStack_40[0] + 0x1c);
  FUN_00318600(apuStack_40,param_1 + 9,4);
  FUN_00318600(apuStack_40,(int)param_1 + 0x4c,4);
  FUN_00318600(apuStack_40,param_1 + 10,4);
  FUN_00318600(apuStack_40,(int)param_1 + 0x54,4);
  *(undefined4 *)apuStack_40[0] = *(undefined4 *)(param_1 + 0xb);
  apuStack_40[0] = (undefined8 *)((int)apuStack_40[0] + 4);
  if (((uint)param_1 & 7) == 0) {
    do {
      uVar5 = puVar3[1];
      uVar4 = puVar3[2];
      uVar6 = puVar3[3];
      *param_1 = *puVar3;
      param_1[1] = uVar5;
      param_1[2] = uVar4;
      param_1[3] = uVar6;
      puVar3 = puVar3 + 4;
      param_1 = param_1 + 4;
      puVar2 = puVar3;
    } while (puVar3 != auStack_60);
  }
  else {
    do {
      uVar4 = puVar2[1];
      uVar6 = puVar2[2];
      uVar5 = puVar2[3];
      *param_1 = *puVar2;
      param_1[1] = uVar4;
      param_1[2] = uVar6;
      param_1[3] = uVar5;
      puVar2 = puVar2 + 4;
      param_1 = param_1 + 4;
    } while (puVar2 != auStack_60);
  }
  uVar4 = puVar2[1];
  uVar6 = puVar2[2];
  uVar1 = *(undefined4 *)(puVar2 + 3);
  *param_1 = *puVar2;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar1;
  return;
}


// ==== FUN_00315de8 @ 00315de8 ====

undefined8
FUN_00315de8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iStack_60;
  undefined4 uStack_5c;
  
  if (param_1 == 0) {
    param_1 = FUN_00315380(0x40a2d8);
  }
  iVar5 = (int)param_1;
  if (param_2 == 0) {
    iStack_60 = 0;
    uStack_5c = *(undefined4 *)(iVar5 + 0x40);
    FUN_00311278(0x3112e0,&iStack_60);
    iVar1 = *(int *)(iVar5 + 0x44);
    param_2 = iStack_60;
  }
  else {
    iVar1 = *(int *)(iVar5 + 0x44);
  }
  iVar4 = (int)param_6;
  if (iVar1 == 0) {
    *(int *)(iVar4 + 0x58) = param_2;
  }
  else if (*(int *)(iVar4 + 0x50) == 0) {
    uVar2 = FUN_00312c48(iVar1,0x30806);
    *(undefined4 *)(iVar4 + 0x50) = uVar2;
    *(uint *)(iVar4 + 0x54) = *(uint *)(iVar4 + 0x54) | 8;
    *(int *)(iVar4 + 0x58) = param_2;
  }
  else {
    *(int *)(iVar4 + 0x58) = param_2;
  }
  *(int *)(iVar4 + 0xc) = iVar5;
  lVar3 = FUN_00315440(param_1,iVar4 + 0x2c);
  if (lVar3 == 0) {
    FUN_003159c8(param_6,iVar4 + 0x10,0);
  }
  if ((param_5 != 0) && (*(char *)(iVar4 + 0x39) == '\x01')) {
    *(uint *)(iVar4 + 0x54) = *(uint *)(iVar4 + 0x54) | 2;
  }
  return param_6;
}


// ==== FUN_00315ee8 @ 00315ee8 ====

void FUN_00315ee8(int param_1,long param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffffef;
    return;
  }
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x10;
  return;
}


// ==== FUN_00315f28 @ 00315f28 ====

void FUN_00315f28(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  pcVar1 = *(code **)(*(int *)(iVar3 + 0xc) + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_00315180(iVar3 + 0x10);
  FUN_00315180(iVar3 + 0x2c);
  FUN_00314570(param_1);
  FUN_00316668(param_1);
  if ((*(uint *)(iVar3 + 0x54) & 8) == 0) {
    uVar2 = *(uint *)(iVar3 + 0x54);
  }
  else {
    FUN_00312c70(*(undefined4 *)(iVar3 + 0x50));
    uVar2 = *(uint *)(iVar3 + 0x54);
  }
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 4) == 0) {
      FUN_00312c70(param_1);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 0x4c);
    if (iVar3 == 0) {
      FUN_00317c20(0x4563a8,param_1);
    }
    else {
      FUN_00317c20(iVar3,param_1);
    }
  }
  return;
}


// ==== FUN_00315ff0 @ 00315ff0 ====

undefined8 FUN_00315ff0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  
  iVar4 = (int)param_1;
  iVar6 = iVar4 + 0x2c;
  pcVar1 = *(code **)(*(int *)(iVar4 + 0xc) + 0x14);
  lVar5 = 0;
  if (pcVar1 != (code *)0x0) {
    lVar2 = FUN_00314d60(iVar4 + 0x10,iVar6);
    if (lVar2 != 0) {
LAB_00316104:
      uGpffff89a0 = (undefined4)param_2;
      iGpffff899c = iVar4;
      uVar3 = (*pcVar1)(param_1,param_2,param_3,param_4);
      *(uint *)((int)uVar3 + 0x54) = *(uint *)((int)uVar3 + 0x54) | 0x10;
      if (lVar5 == 0) {
        return uVar3;
      }
      do {
        lVar2 = FUN_00316190(uVar3);
      } while (lVar2 != 0);
      FUN_00312d08(lVar5);
      return uVar3;
    }
    uStack_b0 = *(undefined8 *)(iVar4 + 0x10);
    uStack_a8 = *(undefined8 *)(iVar4 + 0x18);
    uStack_a0 = *(undefined8 *)(iVar4 + 0x20);
    uStack_98 = *(undefined4 *)(iVar4 + 0x28);
    param_2 = FUN_00321ee0(&uStack_b0,param_3,param_2,iVar6);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)param_4);
    param_4 = FUN_00321f10(&uStack_b0,param_3,iVar6);
    lVar5 = FUN_00312cc8(param_4,0x30806);
    if (lVar5 != 0) {
      lVar2 = FUN_0031ec28(&uStack_b0,param_3,0,iVar6,lVar5);
      param_3 = lVar5;
      if (lVar2 != 0) goto LAB_00316104;
      FUN_00312d08(lVar5);
    }
  }
  return 0;
}


// ==== FUN_00316190 @ 00316190 ====

undefined8 FUN_00316190(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0x1c);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}


// ==== FUN_003161c8 @ 003161c8 ====

bool FUN_003161c8(void)

{
  long lVar1;
  
  lVar1 = FUN_00317e40(0x5c,0x10,0x40,0,0x4563a8,0x40806);
  if (lVar1 != 0) {
    uGpffff8998 = 1;
  }
  return lVar1 != 0;
}


// ==== FUN_00316218 @ 00316218 ====

void FUN_00316218(void)

{
  FUN_00317fc0(0x4563a8);
  uGpffff8998 = 0;
  return;
}


// ==== FUN_00316240 @ 00316240 ====

void FUN_00316240(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if ((*(uint *)(iVar2 + 0x54) & 8) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x54);
  }
  else {
    FUN_00312c70(*(undefined4 *)(iVar2 + 0x50));
    uVar1 = *(uint *)(iVar2 + 0x54);
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 4) == 0) {
      FUN_00312c70(param_1);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 0x4c);
    if (iVar2 == 0) {
      FUN_00317c20(0x4563a8,param_1);
    }
    else {
      FUN_00317c20(iVar2,param_1);
    }
  }
  return;
}


// ==== FUN_00316400 @ 00316400 ====

undefined8 FUN_00316400(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0035c4b0(param_1,param_2,0x10);
  }
  return uVar1;
}


// ==== FUN_00316438 @ 00316438 ====

void FUN_00316438(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *apuStack_40 [4];
  
  apuStack_40[0] = &uStack_50;
  FUN_00318600(apuStack_40,param_1,4);
  puVar1 = (undefined8 *)param_1;
  FUN_00318600(apuStack_40,(int)puVar1 + 4,2);
  FUN_00318600(apuStack_40,(int)puVar1 + 6,2);
  *apuStack_40[0] = puVar1[1];
  *puVar1 = uStack_50;
  puVar1[1] = uStack_48;
  return;
}


// ==== FUN_003164d0 @ 003164d0 ====

void FUN_003164d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 *apuStack_40 [4];
  
  apuStack_40[0] = (undefined1 *)&uStack_50;
  FUN_00318600(apuStack_40,param_1,4);
  puVar1 = (undefined8 *)param_1;
  FUN_00318600(apuStack_40,(int)puVar1 + 4,4);
  FUN_00318600(apuStack_40,puVar1 + 1,4);
  *puVar1 = uStack_50;
  *(undefined4 *)(puVar1 + 1) = uStack_48;
  return;
}


// ==== FUN_00316548 @ 00316548 ====

bool FUN_00316548(void)

{
  long lVar1;
  
  lVar1 = FUN_00317e40(0x10,8,0x40,0,0x4563d0,0x40802);
  if (lVar1 != 0) {
    uGpffff89a8 = 1;
  }
  return lVar1 != 0;
}


// ==== FUN_00316598 @ 00316598 ====

void FUN_00316598(void)

{
  FUN_00317fc0(0x4563d0);
  uGpffff89a8 = 0;
  return;
}


// ==== FUN_003165c8 @ 003165c8 ====

undefined8 FUN_003165c8(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00316698();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffd;
  return param_1;
}


// ==== FUN_00316618 @ 00316618 ====

undefined8 FUN_00316618(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_003166f8();
  puVar1 = (undefined4 *)param_1;
  *puVar1 = param_2;
  puVar1[2] = puVar1[2] & 0xfffffffe;
  return param_1;
}


// ==== FUN_00316668 @ 00316668 ====

undefined8 FUN_00316668(undefined8 param_1)

{
  FUN_003166f8();
  FUN_00316698(param_1);
  return param_1;
}


// ==== FUN_00316698 @ 00316698 ====

undefined8 FUN_00316698(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 4) != 0) && ((*(uint *)(iVar1 + 8) & 2) != 0)) {
    FUN_00312c70();
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffd;
  }
  return param_1;
}


// ==== FUN_003166f8 @ 003166f8 ====

undefined8 FUN_003166f8(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1;
  if ((*piVar1 != 0) && ((piVar1[2] & 1U) != 0)) {
    FUN_00317c20(0x4563d0);
    piVar1[2] = piVar1[2] & 0xfffffffe;
  }
  return param_1;
}


// ==== FUN_00316758 @ 00316758 ====

undefined8 FUN_00316758(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return param_1;
}


// ==== FUN_00316770 @ 00316770 ====

undefined8 FUN_00316770(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *apuStack_50 [4];
  
  apuStack_50[0] = &uStack_60;
  uVar1 = ((undefined8 *)param_1)[1];
  puVar2 = (undefined8 *)param_2;
  *puVar2 = *(undefined8 *)param_1;
  puVar2[1] = uVar1;
  if (param_3 != 0) {
    FUN_00318600(apuStack_50,param_2,4);
    FUN_00318600(apuStack_50,(int)puVar2 + 4,2);
    FUN_00318600(apuStack_50,(int)puVar2 + 6,2);
    *apuStack_50[0] = puVar2[1];
    *puVar2 = uStack_60;
    puVar2[1] = uStack_58;
  }
  return param_1;
}


// ==== FUN_00316840 @ 00316840 ====

int FUN_00316840(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    bVar1 = *param_1;
    if (bVar1 - 0x41 < 0x3a) {
      bVar1 = bVar1 & 0xdf;
    }
    uVar2 = (uint)*param_2;
    iVar3 = uVar2 << 0x18;
    if (0x1e < uVar2 - 0x42) {
      if (iVar3 >> 0x18 < 0x7b) {
        iVar3 = (uVar2 & 0xffffffdf) << 0x18;
      }
      else {
        iVar3 = uVar2 << 0x18;
      }
    }
    param_1 = param_1 + 1;
    if ((int)(char)bVar1 != iVar3 >> 0x18) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    if (param_3 == 0) {
      return 0;
    }
  }
  return (int)(char)bVar1 - (iVar3 >> 0x18);
}


// ==== FUN_003168c8 @ 003168c8 ====

void FUN_003168c8(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  
  if (iGpffff89c0 != 0) {
    iVar10 = 0;
    puVar5 = puGpffff8f98;
    while ((undefined4 **)puVar5 != &puGpffff8f98) {
      iVar3 = puVar5[0xe];
      puVar4 = (undefined4 *)*puVar5;
      if (iVar10 < iGpffff89d0 - iGpffff89c8) {
        if ((*(byte *)((int)puVar5 + 0x62) & 0x10) == 0) {
          if (iVar3 != 0) {
            if ((*(byte *)((int)puVar5 + 0x62) & 8) == 0) {
              uVar6 = FUN_003107e0(iVar3,9,2,0);
            }
            else {
              uVar6 = puVar5[0x12];
            }
            puVar5[0x11] = uVar6;
            FUN_003105e8(iVar3,8,1,0);
            FUN_00310698(iVar3,0xb,1,0);
            FUN_00310698(puVar5[0xe],0xe,1,0);
            puVar5[0xe] = 0;
            puVar5[0x13] = iGpffff89d4;
          }
          bVar2 = *(byte *)((int)puVar5 + 0x62);
        }
        else {
          FUN_003175c8(puVar5);
          bVar2 = *(byte *)((int)puVar5 + 0x62);
        }
        if ((bVar2 & 1) != 0) {
          if ((bVar2 & 8) != 0) {
            uVar7 = (uint)*(byte *)((int)puVar5 + 0x61);
            goto LAB_00316c04;
          }
          uVar7 = FUN_00314f08(puVar5[0xf] + 0x10,*(undefined4 *)(puVar5[0xf] + 0x18));
          if (iGpffff89d4 - puVar5[0x13] < 0) {
            fVar11 = (float)puVar5[0x14];
          }
          else {
            fVar11 = (float)puVar5[0x14];
          }
          uVar9 = puVar5[0x11] +
                  (int)(((float)(uint)(iGpffff89d4 - puVar5[0x13]) * fVar11) / 1000.0);
          puVar5[0x11] = uVar9;
          if (uVar7 <= uVar9) {
            if ((*(byte *)((int)puVar5 + 0x62) & 4) == 0) {
              FUN_003175c8(puVar5);
              puVar5[0xe] = 0;
            }
            else {
              do {
                iVar3 = puVar5[0x11];
                puVar5[0x11] = iVar3 - uVar7;
              } while (uVar7 <= iVar3 - uVar7);
            }
          }
          puVar5[0x13] = iGpffff89d4;
        }
LAB_00316c00:
        uVar7 = (uint)*(byte *)((int)puVar5 + 0x61);
      }
      else {
        if (iVar3 == 0) {
          lVar8 = FUN_00310870(iGpffff89c0,4,2,0);
          puVar5[0xe] = (int)lVar8;
          if (lVar8 != 0) {
            FUN_00310698(lVar8,0xb,1,puVar5[0xf]);
            FUN_003106f0(puVar5[0x14],lVar8,6,1);
            FUN_003106f0((float)*(byte *)((int)puVar5 + 0x5d) / 255.0,lVar8,7,1);
            FUN_003105e8(lVar8,10,1,*(byte *)((int)puVar5 + 0x62) >> 2 & 1);
            if ((*(byte *)((int)puVar5 + 0x62) & 8) == 0) {
              FUN_00310640(lVar8,9,1,puVar5[0x11]);
              cVar1 = *(char *)((int)puVar5 + 99);
            }
            else {
              cVar1 = *(char *)((int)puVar5 + 99);
            }
            FUN_003106f0((float)(int)cVar1,lVar8,0xc,1);
            FUN_00310590(lVar8,0,1,puVar5 + 2);
            FUN_00310590(lVar8,1,1,puVar5 + 5);
            FUN_003106f0(puVar5[0x15],lVar8,4,1);
            FUN_003106f0(puVar5[0x16],lVar8,5,1);
            FUN_003106f0((float)*(byte *)((int)puVar5 + 0x5e) / 255.0,lVar8,0xd,1);
            FUN_003105e8(lVar8,8,1,1);
            FUN_00310698(lVar8,0xe,1,puVar5[0x10]);
          }
          goto LAB_00316c00;
        }
        uVar7 = (uint)*(byte *)((int)puVar5 + 0x61);
      }
LAB_00316c04:
      iVar10 = iVar10 + uVar7;
      puVar5 = puVar4;
    }
  }
  return;
}


// ==== FUN_00316c38 @ 00316c38 ====

undefined4 FUN_00316c38(undefined8 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uStack_d0;
  int iStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  int *piStack_b0;
  int iStack_ac;
  int aiStack_a0 [4];
  
  uVar2 = FUN_00311db8(0x409610);
  uVar3 = FUN_00311db8(0x409400);
  lVar4 = FUN_00312c48(param_3 * 0x1c +
                       (uint)*(ushort *)((int)uVar2 + 0x14) * 8 +
                       (uint)*(ushort *)((int)uVar2 + 0x16) * 8 +
                       (uint)*(ushort *)((int)uVar3 + 0x14) * 8 +
                       (uint)*(ushort *)((int)uVar3 + 0x16) * 8 + 0x5c,0x3080e);
  uVar1 = 0;
  if (lVar4 != 0) {
    uStack_b8 = 0;
    uStack_c0 = 2;
    uStack_bc = 0;
    iStack_ac = (int)lVar4;
    aiStack_a0[0] = iStack_ac + 0x18;
    piStack_b0 = aiStack_a0;
    puStack_b4 = &LAB_003176d0;
    lVar5 = FUN_00310338(param_1,uVar2,&uStack_c0);
    uGpffff89c0 = (undefined4)lVar5;
    if (lVar5 == 0) {
      FUN_00312c70(lVar4);
      uVar1 = 0;
    }
    else {
      iGpffff8fa0 = aiStack_a0[0];
      uVar7 = 0;
      iVar8 = aiStack_a0[0] + param_3 * 4;
      if (param_3 != 0) {
        do {
          aiStack_a0[0] = iVar8 + 0x18;
          iVar6 = uVar7 * 4;
          iStack_ac = iVar8;
          uVar1 = FUN_00310338(*(undefined4 *)(iVar6 + param_2),uVar3,&uStack_c0);
          *(undefined4 *)(iVar6 + iGpffff8fa0) = uVar1;
          if (*(int *)(iVar6 + iGpffff8fa0) == 0) {
            while (uVar7 = uVar7 - 1, uVar7 != 0xffffffff) {
              FUN_00310478(*(undefined4 *)(uVar7 * 4 + iGpffff8fa0),0);
            }
            FUN_00310478(uGpffff89c0,0);
            uGpffff89c0 = 0;
            uGpffff89c8 = 0;
            return 0;
          }
          uVar7 = uVar7 + 1;
          iVar8 = aiStack_a0[0];
        } while (uVar7 < param_3);
      }
      iStack_cc = iGpffff8fa0;
      uGpffff89bc = 1;
      uGpffff89c8 = param_3;
      uStack_d0 = param_3;
      FUN_00310698(uGpffff89c0,5,1,&uStack_d0);
      uGpffff89c4 = FUN_00310870(uGpffff89c0,1,2,0);
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_00316e90 @ 00316e90 ====

void FUN_00316e90(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  if ((*(byte *)((int)piVar4 + 0x62) & 1) != 0) {
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    iVar1 = piVar4[0xe];
    if (iVar1 != 0) {
      lVar3 = FUN_00310768(iVar1,8,2,0);
      if (lVar3 != 0) {
        FUN_003105e8(iVar1,8,1,0);
      }
      FUN_00310698(iVar1,0xb,1,0);
      FUN_00310698(iVar1,0xe,1,0);
      piVar4[0xe] = 0;
    }
    piVar4[1] = (int)&piGpffff8f90;
    *piVar4 = (int)piGpffff8f90;
    piGpffff8f90[1] = (int)piVar4;
    iGpffff89cc = iGpffff89cc + -1;
    iGpffff89d0 = iGpffff89d0 - (uint)*(byte *)((int)piVar4 + 0x61);
    *(undefined1 *)(piVar4 + 0x18) = 0;
    *(undefined1 *)((int)piVar4 + 0x61) = 0;
    piVar4[0x11] = piVar4[0x12];
    *(byte *)((int)piVar4 + 0x62) = *(byte *)((int)piVar4 + 0x62) & 0xfc;
    piGpffff8f90 = piVar4;
  }
  FUN_00317030(param_1);
  *(undefined1 *)((int)piVar4 + 0x61) = 1;
  *(byte *)((int)piVar4 + 0x62) = *(byte *)((int)piVar4 + 0x62) | 2;
  piVar4[0x12] = 0;
  *(undefined1 *)((int)piVar4 + 0x61) = *(undefined1 *)(piVar4[0xf] + 0x1d);
  if ((*(uint *)(piVar4[0xf] + 0x54) & 2) != 0) {
    lVar3 = FUN_00310768(puGpffff89c0,3,2,0);
    if (lVar3 != 4) {
      uVar2 = (uint)*(byte *)((int)piVar4 + 0x61);
      goto LAB_00317004;
    }
    if ((undefined *)**(undefined4 **)*puGpffff89c0 != &DAT_0040a0f0) {
      uVar2 = (uint)*(byte *)((int)piVar4 + 0x61);
      goto LAB_00317004;
    }
    *(undefined1 *)((int)piVar4 + 0x61) = 2;
  }
  uVar2 = (uint)*(byte *)((int)piVar4 + 0x61);
LAB_00317004:
  iGpffff89d0 = iGpffff89d0 + uVar2;
  iGpffff89cc = iGpffff89cc + 1;
  return;
}


// ==== FUN_00317030 @ 00317030 ====

void FUN_00317030(int *param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_60;
  int iStack_58;
  undefined8 uStack_54;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  float afStack_40 [8];
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)((int)param_1 + 0x5d) == '\0') {
    bVar2 = *(byte *)((int)param_1 + 0x62);
  }
  else {
    if ((*(int *)(param_1[0xf] + 0x54) >> 1 & 1U) == 0) {
      afStack_40[0] = 1.0;
    }
    else {
      iStack_48 = param_1[0x15];
      iStack_44 = param_1[0x16];
      uStack_60 = *(undefined8 *)(param_1 + 2);
      iStack_58 = param_1[4];
      uStack_54 = *(undefined8 *)(param_1 + 5);
      iStack_4c = param_1[7];
      FUN_003178f0(uGpffff89c4,param_1 + -1000,&uStack_60,afStack_40,0,1);
      *(undefined8 *)(param_1 + 8) = uStack_60;
      param_1[10] = iStack_58;
      *(undefined8 *)(param_1 + 0xb) = uStack_54;
      param_1[0xd] = iStack_4c;
      afStack_40[0] = afStack_40[0] * ((float)*(byte *)((int)param_1 + 0x5d) / 255.0);
    }
    if (0.0 < afStack_40[0]) {
      fVar4 = (float)*(byte *)((int)param_1 + 0x5f) / 255.0;
      *(char *)(param_1 + 0x18) =
           (char)(int)(afStack_40[0] * 255.0 * (1.0 - fVar4) +
                      ((float)*(byte *)(param_1 + 0x17) / 255.0) * 255.0 * fVar4);
      bVar2 = *(byte *)((int)param_1 + 0x62);
    }
    else {
      bVar2 = *(byte *)((int)param_1 + 0x62);
    }
  }
  if ((bVar2 & 1) == 0) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    if ((int **)piGpffff8f98 != &piGpffff8f98) {
      piVar3 = piGpffff8f98;
      do {
        if (*(byte *)(param_1 + 0x18) < *(byte *)(piVar3 + 0x18)) {
          if ((int **)piVar3 != &piGpffff8f98) {
            iVar1 = piVar3[1];
            *param_1 = (int)piVar3;
            param_1[1] = iVar1;
            goto LAB_003172d8;
          }
          break;
        }
        piVar3 = (int *)*piVar3;
      } while ((int **)piVar3 != &piGpffff8f98);
    }
    *param_1 = (int)&piGpffff8f98;
    param_1[1] = (int)piGpffff8f9c;
    *piGpffff8f9c = (int)param_1;
    piGpffff8f9c = param_1;
  }
  else {
    piVar3 = param_1;
    while( true ) {
      while( true ) {
        if ((int **)*piVar3 == &piGpffff8f98) {
          fVar4 = 2.0;
        }
        else {
          fVar4 = (float)(byte)((undefined1 *)*piVar3)[0x60] / 255.0;
        }
        if ((int **)piVar3[1] == &piGpffff8f98) {
          fVar5 = -1.0;
        }
        else {
          fVar5 = (float)(byte)((undefined1 *)piVar3[1])[0x60] / 255.0;
        }
        if ((float)*(byte *)(param_1 + 0x18) / 255.0 <= fVar4) break;
        piVar3 = (int *)*piVar3;
      }
      if (fVar5 <= (float)*(byte *)(param_1 + 0x18) / 255.0) break;
      piVar3 = (int *)piVar3[1];
    }
    if (piVar3 == param_1) {
      bVar2 = *(byte *)((int)param_1 + 0x62);
      goto LAB_003172e8;
    }
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    param_1[1] = piVar3[1];
    *param_1 = (int)piVar3;
LAB_003172d8:
    *(int **)piVar3[1] = param_1;
    piVar3[1] = (int)param_1;
  }
  bVar2 = *(byte *)((int)param_1 + 0x62);
LAB_003172e8:
  *(byte *)((int)param_1 + 0x62) = bVar2 | 1;
  return;
}


// ==== FUN_00317300 @ 00317300 ====

undefined4 FUN_00317300(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x28) = DAT_0040e780;
  *(int **)(param_1 + 0x2c) = &DAT_0040e780;
  *(int *)(DAT_0040e780 + 4) = param_1 + 0x28;
  DAT_0040e780 = param_1 + 0x28;
  *(byte *)(param_1 + 0x8a) = *(byte *)(param_1 + 0x8a) & 0xfe;
  return 1;
}


// ==== FUN_00317340 @ 00317340 ====

void FUN_00317340(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  if (param_2 == 1) {
    if ((*(byte *)((int)piVar3 + 0x62) & 1) != 0) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      iVar1 = piVar3[0xe];
      if (iVar1 != 0) {
        lVar2 = FUN_00310768(iVar1,8,2,0);
        if (lVar2 != 0) {
          FUN_003105e8(iVar1,8,1,0);
        }
        FUN_00310698(iVar1,0xb,1,0);
        FUN_00310698(iVar1,0xe,1,0);
        piVar3[0xe] = 0;
      }
      piVar3[1] = (int)&piGpffff8f90;
      *piVar3 = (int)piGpffff8f90;
      piGpffff8f90[1] = (int)piVar3;
      iGpffff89cc = iGpffff89cc + -1;
      iGpffff89d0 = iGpffff89d0 - (uint)*(byte *)((int)piVar3 + 0x61);
      *(undefined1 *)((int)piVar3 + 0x61) = 0;
      *(undefined1 *)(piVar3 + 0x18) = 0;
      piVar3[0x11] = piVar3[0x12];
      *(byte *)((int)piVar3 + 0x62) = *(byte *)((int)piVar3 + 0x62) & 0xfc;
      piGpffff8f90 = piVar3;
    }
  }
  else if (param_2 == 0) {
    FUN_00316e90(param_1);
  }
  else if ((param_2 == 2) && ((*(byte *)((int)piVar3 + 0x62) & 1) != 0)) {
    FUN_00317030(param_1);
  }
  return;
}


// ==== FUN_00317490 @ 00317490 ====

undefined4 FUN_00317490(void)

{
  puGpffff8f98 = (undefined1 *)&puGpffff8f98;
  puGpffff8f90 = (undefined1 *)&puGpffff8f90;
  uGpffff89b8 = 1;
  puGpffff8f94 = puGpffff8f90;
  puGpffff8f9c = puGpffff8f98;
  FUN_00319ce8();
  return 1;
}


// ==== FUN_003174d0 @ 003174d0 ====

void FUN_003174d0(void)

{
  FUN_00319ca8();
  uGpffff89b8 = 0;
  return;
}


// ==== FUN_003174f0 @ 003174f0 ====

void FUN_003174f0(void)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = FUN_0031d510();
  uVar2 = FUN_0031d520();
  if (uVar1 < uGpffff89d8) {
    uVar3 = (uVar1 - 1) - uGpffff89d8;
  }
  else {
    uVar3 = uVar1 - uGpffff89d8;
  }
  if ((long)uVar2 < 0) {
    fVar4 = (float)(uVar2 & 0xffffffff);
  }
  else {
    fVar4 = (float)(int)uVar2;
  }
  uGpffff89d8 = uVar1;
  iGpffff89d4 = iGpffff89d4 + (int)(((float)uVar3 / fVar4) * 1000.0);
  return;
}


// ==== FUN_003175c8 @ 003175c8 ====

void FUN_003175c8(int *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)((int)param_1 + 0x62) & 1) != 0) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    iVar1 = param_1[0xe];
    if (iVar1 != 0) {
      lVar2 = FUN_00310768(iVar1,8,2,0);
      if (lVar2 != 0) {
        FUN_003105e8(iVar1,8,1,0);
      }
      FUN_00310698(iVar1,0xb,1,0);
      FUN_00310698(iVar1,0xe,1,0);
      param_1[0xe] = 0;
    }
    param_1[1] = (int)&piGpffff8f90;
    *param_1 = (int)piGpffff8f90;
    piGpffff8f90[1] = (int)param_1;
    iGpffff89cc = iGpffff89cc + -1;
    iGpffff89d0 = iGpffff89d0 - (uint)*(byte *)((int)param_1 + 0x61);
    *(undefined1 *)((int)param_1 + 0x61) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    param_1[0x11] = param_1[0x12];
    *(byte *)((int)param_1 + 0x62) = *(byte *)((int)param_1 + 0x62) & 0xfc;
    piGpffff8f90 = param_1;
  }
  return;
}


// ==== FUN_003176e0 @ 003176e0 ====

void FUN_003176e0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  FUN_002a75f0(&fStack_70,param_2 + 0x78);
  FUN_002a75f0(&fStack_60,param_2 + 0x60);
  FUN_002a75f0(&fStack_50,param_2 + 0x6c);
  fVar1 = *param_1 - *(float *)(param_2 + 0x48);
  fVar2 = param_1[1] - *(float *)(param_2 + 0x4c);
  fVar3 = param_1[2] - *(float *)(param_2 + 0x50);
  *param_1 = fStack_70 * fVar1 + fStack_6c * fVar2 + fStack_68 * fVar3;
  param_1[2] = fStack_50 * fVar1 + fStack_4c * fVar2 + fStack_48 * fVar3;
  param_1[1] = fStack_60 * fVar1 + fStack_5c * fVar2 + fStack_58 * fVar3;
  fVar1 = param_1[3] - *(float *)(param_2 + 0x54);
  fVar2 = param_1[4] - *(float *)(param_2 + 0x58);
  fVar3 = param_1[5] - *(float *)(param_2 + 0x5c);
  param_1[5] = fStack_50 * fVar1 + fStack_4c * fVar2 + fStack_48 * fVar3;
  param_1[3] = fStack_70 * fVar1 + fStack_6c * fVar2 + fStack_68 * fVar3;
  param_1[4] = fStack_60 * fVar1 + fStack_5c * fVar2 + fStack_58 * fVar3;
  return;
}


// ==== FUN_00317838 @ 00317838 ====

undefined4 FUN_00317838(void)

{
  puGpffff8fa8 = (undefined1 *)&puGpffff8fa8;
  uGpffff89dc = 1;
  puGpffff8fac = puGpffff8fa8;
  FUN_0031aa20();
  return 1;
}


// ==== FUN_00317868 @ 00317868 ====

void FUN_00317868(void)

{
  FUN_0031a9e0();
  uGpffff89dc = 0;
  return;
}


// ==== FUN_00317888 @ 00317888 ====

void FUN_00317888(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(int *)(param_1 + 0x40) = iGpffff8fa8;
  *(int **)(param_1 + 0x44) = &iGpffff8fa8;
  *(int *)(iGpffff8fa8 + 4) = param_1 + 0x40;
  iGpffff8fa8 = param_1 + 0x40;
  return;
}


// ==== FUN_003178b8 @ 003178b8 ====

void FUN_003178b8(undefined4 param_1)

{
  uGpffff89e0 = param_1;
  return;
}


// ==== FUN_003178c0 @ 003178c0 ====

void FUN_003178c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = puGpffff8fa8;
  while( true ) {
    if ((undefined4 **)puVar1 == &puGpffff8fa8) {
      return;
    }
    if (puVar1 == (undefined4 *)(param_1 + 0x40)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  iGpffff89e4 = param_1;
  return;
}


// ==== FUN_003178f0 @ 003178f0 ====

void FUN_003178f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (uGpffff89e0 == 2) {
    FUN_003176e0(param_3,uGpffff89e4,param_1);
  }
  else if ((2 < uGpffff89e0) && (uGpffff89e0 == 3)) {
    fVar7 = DAT_0040e1dc;
    puVar1 = puGpffff8fa8;
    puVar3 = (undefined4 *)0x0;
    while (puVar2 = puVar3, fVar6 = fVar7, (undefined4 **)puVar1 != &puGpffff8fa8) {
      puVar3 = puVar1 + -0x10;
      pfVar4 = (float *)param_3;
      fVar7 = ((float)puVar1[2] - *pfVar4) * ((float)puVar1[2] - *pfVar4) +
              ((float)puVar1[3] - pfVar4[1]) * ((float)puVar1[3] - pfVar4[1]) +
              ((float)puVar1[4] - pfVar4[2]) * ((float)puVar1[4] - pfVar4[2]);
      if (pcGpffff89e8 != (code *)0x0) {
        fVar5 = (float)(*pcGpffff89e8)(param_2,puVar3);
        fVar7 = fVar7 + fVar5;
      }
      puVar1 = (undefined4 *)*puVar1;
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
        puVar3 = puVar2;
      }
    }
    FUN_003176e0(param_3,puVar2,param_1);
  }
  FUN_0031b030(param_1,param_3,param_4,param_5,param_6);
  return;
}


// ==== FUN_00317a78 @ 00317a78 ====

uint FUN_00317a78(int *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  
  uVar4 = 0;
  piVar9 = (int *)param_1[4];
  uVar1 = param_1[2];
  if (piVar9 != param_1 + 4) {
    do {
      pbVar7 = (byte *)(piVar9 + 2);
      iVar6 = param_1[1];
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          if (*pbVar7 == 0xff) {
            iVar6 = iVar6 + -8;
          }
          else {
            uVar5 = 0;
            if (iVar6 != 0) {
              uVar2 = 0x80;
              while (((uint)*pbVar7 & uVar2 & 0xff) != 0) {
                uVar5 = uVar5 + 1;
                iVar6 = iVar6 + -1;
                if ((7 < uVar5) || (uVar2 = 0x80 >> (uVar5 & 0x1f), iVar6 == 0)) goto LAB_00317b48;
              }
              *pbVar7 = (byte)uVar2 | *pbVar7;
              uVar4 = ((int)piVar9 + param_1[3] + uVar1 + 7 & -param_1[3]) +
                      (uVar8 * 8 + uVar5) * *param_1;
            }
          }
LAB_00317b48:
          if (uVar4 != 0) {
            piVar9 = (int *)*piVar9;
            goto LAB_00317b64;
          }
          uVar8 = uVar8 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 < uVar1);
      }
      piVar9 = (int *)*piVar9;
LAB_00317b64:
    } while ((piVar9 != param_1 + 4) && (uVar4 == 0));
  }
  if (uVar4 == 0) {
    lVar3 = FUN_00312c48(uVar1 + param_1[1] * *param_1 + 8 + param_1[3],param_2);
    piVar9 = (int *)lVar3;
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      memset(piVar9 + 2,0,uVar1);
      iVar6 = param_1[4];
      piVar9[1] = (int)(param_1 + 4);
      *piVar9 = iVar6;
      *(int **)(param_1[4] + 4) = piVar9;
      param_1[4] = (int)piVar9;
      *(undefined1 *)(piVar9 + 2) = 0x80;
      uVar4 = (int)piVar9 + param_1[3] + uVar1 + 7 & -param_1[3];
    }
  }
  return uVar4;
}


// ==== FUN_00317c20 @ 00317c20 ====

void FUN_00317c20(int *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  
  piVar1 = (int *)param_1[4];
  uVar2 = param_1[2];
  while( true ) {
    while( true ) {
      if (piVar1 == param_1 + 4) {
        return;
      }
      uVar6 = (int)piVar1 + uVar2 + 8;
      if (uVar6 <= param_2) break;
      piVar1 = (int *)*piVar1;
    }
    iVar5 = *param_1;
    if (param_2 <= param_1[1] * iVar5 + uVar6) break;
    piVar1 = (int *)*piVar1;
  }
  uVar6 = (int)(param_2 - uVar6) / iVar5;
  if (iVar5 == 0) {
    trap(7);
  }
  piVar9 = param_1 + 4;
  uVar7 = uVar6 >> 3;
  pbVar8 = (byte *)((int)piVar1 + uVar7 + 8);
  *pbVar8 = *pbVar8 & ~(byte)(0x80 >> (uVar6 + uVar7 * -8 & 0x1f));
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  piVar3 = (int *)param_1[4];
  if (piVar3 == piVar9) {
    *piVar1 = (int)piVar3;
  }
  else {
    uVar6 = 0;
    if ((param_1[6] & 2U) != 0) {
      iVar5 = 0;
      if (uVar2 != 0) {
        do {
          iVar4 = uVar6 + 8;
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + (uint)*(byte *)((int)piVar1 + iVar4);
        } while (uVar6 < uVar2);
      }
      if (iVar5 == 0) {
        FUN_00312c70(piVar1);
        return;
      }
      iVar5 = param_1[4];
      piVar1[1] = (int)piVar9;
      *piVar1 = iVar5;
      goto LAB_00317d44;
    }
    *piVar1 = (int)piVar3;
  }
  piVar1[1] = (int)piVar9;
LAB_00317d44:
  *(int **)(param_1[4] + 4) = piVar1;
  param_1[4] = (int)piVar1;
  return;
}


// ==== FUN_00317df0 @ 00317df0 ====

void FUN_00317df0(void)

{
  while ((undefined1 **)puGpffff8fb0 != &puGpffff8fb0) {
    FUN_00317fc0(puGpffff8fb0 + -0x1c);
  }
  FUN_00317fc0(uGpffff89f4);
  uGpffff89f4 = 0;
  uGpffff89f0 = 0;
  return;
}


// ==== FUN_00317e40 @ 00317e40 ====

long FUN_00317e40(int param_1,uint param_2,long param_3,int param_4,long param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = 1;
  if (param_3 != 0) {
    lVar4 = param_3;
  }
  if (param_5 == 0) {
    if (iGpffff89f4 == 0) {
      param_5 = FUN_00312c48(0x24,param_6);
    }
    else {
      param_5 = FUN_00317a78(iGpffff89f4,0x30800);
    }
    if (param_5 == 0) {
      return 0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  puVar6 = (uint *)param_5;
  puVar6[6] = uVar2;
  uVar8 = (uint)lVar4;
  uVar2 = param_1 + -1 + uVar8 & -uVar8;
  uVar7 = param_2 + 7 >> 3;
  puVar3 = puVar6 + 4;
  *puVar6 = uVar2;
  puVar6[1] = param_2;
  puVar6[3] = uVar8;
  puVar6[2] = uVar7;
  puVar6[4] = (uint)puVar3;
  puVar6[5] = (uint)puVar3;
  if (param_4 != 0) {
    do {
      lVar4 = FUN_00312c48(uVar7 + param_2 * uVar2 + 8 + uVar8,param_6);
      puVar5 = (uint *)lVar4;
      if (lVar4 == 0) {
        FUN_00318080(param_5);
        return 0;
      }
      puVar5[1] = 0;
      *puVar5 = 0;
      param_4 = param_4 + -1;
      uVar1 = puVar6[4];
      puVar5[1] = (uint)puVar3;
      *puVar5 = uVar1;
      *(uint **)(puVar6[4] + 4) = puVar5;
      puVar6[4] = (uint)puVar5;
      memset(puVar5 + 2,0,uVar7);
    } while (param_4 != 0);
  }
  puVar6[8] = (uint)&puGpffff8fb0;
  puVar6[7] = (uint)puGpffff8fb0;
  *(uint **)((int)puGpffff8fb0 + 4) = puVar6 + 7;
  puGpffff8fb0 = puVar6 + 7;
  return param_5;
}


// ==== FUN_00317fc0 @ 00317fc0 ====

void FUN_00317fc0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  **(undefined4 **)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = *(undefined4 *)(param_1 + 0x20);
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)(param_1 + 0x10)) {
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  else {
    iVar1 = *piVar3;
    while( true ) {
      *(int *)piVar3[1] = iVar1;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_00312c70(piVar3);
      piVar3 = *(int **)(param_1 + 0x10);
      if (piVar3 == (int *)(param_1 + 0x10)) break;
      iVar1 = *piVar3;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar2 & 1) == 0) {
    if ((iGpffff89f4 == param_1) || (iGpffff89f4 == 0)) {
      FUN_00312c70(param_1);
    }
    else {
      FUN_00317c20(iGpffff89f4,param_1);
    }
  }
  return;
}


// ==== FUN_00318080 @ 00318080 ====

void FUN_00318080(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)(param_1 + 0x10)) {
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  else {
    iVar1 = *piVar3;
    while( true ) {
      *(int *)piVar3[1] = iVar1;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_00312c70(piVar3);
      piVar3 = *(int **)(param_1 + 0x10);
      if (piVar3 == (int *)(param_1 + 0x10)) break;
      iVar1 = *piVar3;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar2 & 1) == 0) {
    if ((DAT_0040e1e4 == param_1) || (DAT_0040e1e4 == 0)) {
      FUN_00312c70(param_1);
    }
    else {
      FUN_00317c20(DAT_0040e1e4,param_1);
    }
  }
  return;
}


// ==== FUN_00318120 @ 00318120 ====

long FUN_00318120(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = FUN_00312c48(0xc,0x30804);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    piVar3 = (int *)lVar2;
    piVar3[2] = param_2;
    iVar1 = *param_1;
    piVar3[1] = (int)param_1;
    *piVar3 = iVar1;
    *(int **)(*param_1 + 4) = piVar3;
    *param_1 = (int)piVar3;
  }
  return lVar2;
}


// ==== FUN_00318188 @ 00318188 ====

int FUN_00318188(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  while( true ) {
    if (param_2 == iVar2) {
      FUN_003181e8(param_1);
      return param_1;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 8);
  }
  return 0;
}


// ==== FUN_003181e8 @ 003181e8 ====

void FUN_003181e8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 == param_2) {
    iVar2 = param_2[1];
  }
  else if (piVar1 == param_1) {
    iVar2 = param_2[1];
  }
  else {
    for (piVar1 = (int *)piVar1[1]; piVar1 != param_2; piVar1 = (int *)piVar1[1]) {
      if (piVar1 == param_1) {
        iVar2 = param_2[1];
        goto LAB_00318224;
      }
    }
    iVar2 = param_2[1];
  }
LAB_00318224:
  *(int *)(*param_2 + 4) = iVar2;
  *(int *)param_2[1] = *param_2;
  FUN_00312c70(param_2);
  return;
}


// ==== FUN_00318250 @ 00318250 ====

int FUN_00318250(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  while( true ) {
    if (iVar1 == param_1) {
      return -1;
    }
    if (*(int *)(iVar1 + 8) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ==== FUN_00318288 @ 00318288 ====

undefined4 FUN_00318288(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    while( true ) {
      iVar2 = iVar2 + 1;
      if (iVar1 == param_1) break;
      if (iVar2 == param_2) goto LAB_003182a8;
      iVar1 = *(int *)(iVar1 + 4);
    }
    iVar1 = 0;
  }
LAB_003182a8:
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 8);
}


// ==== FUN_003182c8 @ 003182c8 ====

void FUN_003182c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 *apuStack_40 [4];
  
  apuStack_40[0] = (undefined1 *)&uStack_50;
  FUN_00318600(apuStack_40,param_1,4);
  puVar1 = (undefined8 *)param_1;
  FUN_00318600(apuStack_40,(int)puVar1 + 4,4);
  FUN_00318600(apuStack_40,puVar1 + 1,4);
  *puVar1 = uStack_50;
  *(undefined4 *)(puVar1 + 1) = uStack_48;
  return;
}


// ==== FUN_00318340 @ 00318340 ====

void FUN_00318340(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[1];
  if (piVar4 == param_1) {
    return;
  }
  piVar1 = (int *)param_1[1];
  do {
    iVar2 = *piVar4;
    iVar3 = piVar4[1];
    if (piVar1 == piVar4) {
LAB_00318388:
      *(int *)(iVar2 + 4) = iVar3;
    }
    else if (piVar1 == param_1) {
      *(int *)(iVar2 + 4) = iVar3;
    }
    else {
      for (piVar1 = (int *)piVar1[1]; piVar1 != piVar4; piVar1 = (int *)piVar1[1]) {
        if (piVar1 == param_1) goto LAB_00318388;
      }
      *(int *)(iVar2 + 4) = iVar3;
    }
    *(int *)piVar4[1] = *piVar4;
    FUN_00312c70(piVar4);
    piVar4 = (int *)param_1[1];
    if (piVar4 == param_1) {
      return;
    }
    piVar1 = (int *)param_1[1];
  } while( true );
}


// ==== FUN_003183c0 @ 003183c0 ====

int FUN_003183c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != param_1; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ==== FUN_00318450 @ 00318450 ====

void FUN_00318450(void)

{
  FUN_00317fc0(0x456420);
  DAT_0040e1e8 = 0;
  return;
}


// ==== FUN_00318478 @ 00318478 ====

void FUN_00318478(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  uVar1 = 0;
  for (; (param_1 & 0xfffffffe) != 0; param_1 = param_1 >> 1) {
    uVar1 = uVar1 << 1;
    if ((param_2 & 0x80000000) != 0) {
      uVar1 = uVar1 | 1;
      param_2 = param_2 & 0x7fffffff;
    }
    if ((param_1 & 1) != 0) {
      uVar2 = uVar2 + param_2;
      uVar3 = uVar3 + uVar1;
      if ((uVar2 & 0x80000000) != 0) {
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 & 0x7fffffff;
      }
    }
    param_2 = param_2 << 1;
  }
  uVar1 = uVar1 << 1;
  if ((int)param_2 < 0) {
    uVar1 = uVar1 | 1;
    param_2 = param_2 & 0x7fffffff;
  }
  if ((param_1 & 1) != 0) {
    uVar2 = uVar2 + param_2;
    uVar3 = uVar3 + uVar1;
    if ((uVar2 & 0x80000000) != 0) {
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 & 0x7fffffff;
    }
  }
  *param_3 = uVar3 >> 1;
  *param_4 = uVar2 | uVar3 << 0x1f;
  return;
}


// ==== FUN_00318550 @ 00318550 ====

void FUN_00318550(float *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2];
  *param_1 = fVar2;
  if (fVar2 != 0.0) {
    fVar2 = (float)((uint)*param_1 & 0x7fffff);
    uVar1 = ((uint)*param_1 >> 0x17) - 0x7f;
    *param_1 = fVar2;
    if ((uVar1 & 1) != 0) {
      *param_1 = (float)((uint)fVar2 | 0x800000);
    }
    *param_1 = (float)((int)*(short *)(&DAT_003ced80 + (uint)*(ushort *)((int)param_1 + 2) * 2) <<
                       0x10 | (((int)(uVar1 * 0x10000) >> 0x11) + 0x7f) * 0x800000);
  }
  return;
}


// ==== FUN_00318600 @ 00318600 ====

void FUN_00318600(int *param_1,uint *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort *puVar3;
  uint *puVar4;
  
  if (param_3 == 2) {
    puVar3 = (ushort *)*param_1;
    *puVar3 = (ushort)*param_2 << 8 | (ushort)*param_2 >> 8;
    *param_1 = (int)(puVar3 + 1);
    return;
  }
  if (param_3 < 3) {
    if (param_3 == 1) {
      puVar1 = (undefined1 *)*param_1;
      *puVar1 = (char)*param_2;
      *param_1 = (int)(puVar1 + 1);
      return;
    }
    return;
  }
  if (param_3 == 4) {
    uVar2 = *param_2;
    puVar4 = (uint *)*param_1;
    *puVar4 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
    *param_1 = (int)(puVar4 + 1);
    return;
  }
  return;
}


// ==== FUN_003186b0 @ 003186b0 ====

uint FUN_003186b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1 & 1) == 0) {
    uVar2 = 1;
    do {
      uVar3 = uVar2 & 0xff;
      uVar1 = uVar2 & 0x1f;
      if (0x1f < uVar3) {
        return uVar3;
      }
      uVar2 = uVar3 + 1;
    } while ((param_1 & 1 << uVar1) == 0);
  }
  return uVar3;
}


// ==== FUN_003186f0 @ 003186f0 ====

long FUN_003186f0(int param_1,int param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_5 == 0) {
    param_5 = FUN_00317a78(0x456448,0x30800);
    if (param_5 == 0) {
      return 0;
    }
    *(undefined4 *)param_5 = 0;
  }
  else {
    *(undefined4 *)param_5 = 1;
  }
  iVar4 = (int)param_5;
  *(int *)(iVar4 + 0x10) = iVar4 + 0xc;
  *(int *)(iVar4 + 8) = param_3;
  iVar3 = iVar4 + 0x14;
  *(int *)(iVar4 + 0xc) = iVar4 + 0xc;
  iVar5 = (int)param_4;
  *(int *)(iVar4 + 4) = (param_1 + 0xc) * param_2 + param_3 + 0x1c;
  iVar1 = DAT_0040e7a8;
  *(int **)(iVar4 + 0x18) = &DAT_0040e7a8;
  *(int *)(iVar4 + 0x14) = iVar1;
  *(int *)(DAT_0040e7a8 + 4) = iVar3;
  DAT_0040e7a8 = iVar3;
  if (param_4 != 0) {
    do {
      iVar5 = iVar5 + -1;
      lVar2 = FUN_00318c90(param_5);
      if (lVar2 == 0) {
        FUN_003187f8(param_5);
        return 0;
      }
    } while (iVar5 != 0);
  }
  return param_5;
}


// ==== FUN_003187f8 @ 003187f8 ====

void FUN_003187f8(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  piVar3 = *(int **)(iVar4 + 0xc);
  if (piVar3 == (int *)(iVar4 + 0xc)) {
    puVar1 = *(undefined4 **)(iVar4 + 0x18);
  }
  else {
    iVar2 = *piVar3;
    while( true ) {
      *(int *)piVar3[1] = iVar2;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_00318bc0(piVar3);
      piVar3 = *(int **)(iVar4 + 0xc);
      if (piVar3 == (int *)(iVar4 + 0xc)) break;
      iVar2 = *piVar3;
    }
    puVar1 = *(undefined4 **)(iVar4 + 0x18);
  }
  *puVar1 = *(undefined4 *)(iVar4 + 0x14);
  *(undefined4 *)(*(int *)(iVar4 + 0x14) + 4) = *(undefined4 *)(iVar4 + 0x18);
  FUN_00318ce8(param_1);
  return;
}


// ==== FUN_00318880 @ 00318880 ====

long FUN_00318880(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  lVar5 = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  do {
    if (piVar1 == (int *)(param_1 + 0xc)) break;
    lVar5 = FUN_00318a40(piVar1,param_2,*(undefined4 *)(param_1 + 8));
    piVar1 = (int *)*piVar1;
  } while (lVar5 == 0);
  if (lVar5 == 0) {
    lVar3 = FUN_00318b60(*(undefined4 *)(param_1 + 4));
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      puVar4 = (undefined4 *)lVar3;
      puVar4[1] = param_1 + 0xc;
      *puVar4 = uVar2;
      *(undefined4 **)(*(int *)(param_1 + 0xc) + 4) = puVar4;
      *(undefined4 **)(param_1 + 0xc) = puVar4;
    }
    if (lVar3 != 0) {
      lVar5 = FUN_00318a40(lVar3,param_2,*(undefined4 *)(param_1 + 8));
    }
  }
  return lVar5;
}


// ==== FUN_00318950 @ 00318950 ====

void FUN_00318950(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  while( true ) {
    while( true ) {
      if (piVar1 == (int *)(param_1 + 0xc)) {
        return;
      }
      if (piVar1 < param_2) break;
      piVar1 = (int *)*piVar1;
    }
    if (param_2 < (int *)((int)piVar1 + *(int *)(param_1 + 4))) break;
    piVar1 = (int *)*piVar1;
  }
  FUN_00318b08(piVar1);
  lVar3 = FUN_00318a28(piVar1);
  if (lVar3 == 0) {
    return;
  }
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 == (int *)(param_1 + 0xc)) {
    piVar1[1] = (int)piVar2;
    *piVar1 = (int)piVar2;
    *(int **)(*(int *)(param_1 + 0xc) + 4) = piVar1;
    *(int **)(param_1 + 0xc) = piVar1;
    return;
  }
  FUN_00318bc0(piVar1);
  return;
}


// ==== FUN_00318a28 @ 00318a28 ====

bool FUN_00318a28(int param_1)

{
  return **(int **)(param_1 + 8) == *(int *)(param_1 + 0xc);
}


// ==== FUN_00318a40 @ 00318a40 ====

int * FUN_00318a40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar2;
  
  piVar6 = (int *)0x0;
  piVar4 = *(int **)(param_1 + 8);
  piVar2 = (int *)**(int **)(param_1 + 8);
  do {
    iVar1 = piVar4[2];
    if ((uint)((int)piVar2 + ((-0xc - (int)piVar4) - iVar1)) < param_2 + 0xcU) {
      piVar3 = *(int **)(param_1 + 0xc);
    }
    else {
      piVar5 = (int *)(((int)piVar4 + param_3 + iVar1 + 0x17 & -param_3) - 0xc);
      if (((int *)((int)piVar5 + param_2 + 0xcU) <= piVar2) &&
         ((int *)((int)piVar4 + iVar1 + 0xc) <= piVar5)) {
LAB_00318ac4:
        if (piVar5 != (int *)0x0) {
          iVar1 = *piVar4;
          piVar5[1] = (int)piVar4;
          *piVar5 = iVar1;
          if (iVar1 != *(int *)(param_1 + 0xc)) {
            *(int **)(iVar1 + 4) = piVar5;
          }
          if ((undefined4 *)piVar5[1] != *(undefined4 **)(param_1 + 0xc)) {
            *(undefined4 *)piVar5[1] = piVar5;
          }
          piVar5[2] = param_2;
          piVar6 = piVar5 + 3;
        }
        return piVar6;
      }
      piVar3 = *(int **)(param_1 + 0xc);
    }
    piVar5 = (int *)0x0;
    piVar4 = piVar2;
    if (piVar2 == piVar3) goto LAB_00318ac4;
    piVar2 = (int *)*piVar2;
  } while( true );
}


// ==== FUN_00318b08 @ 00318b08 ====

void FUN_00318b08(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  while (piVar2 + 3 != param_2) {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)*(int *)(param_1 + 0xc)) {
      return;
    }
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((int *)piVar2[1] == piVar1) {
    piVar3 = (int *)*piVar2;
  }
  else {
    *(int *)piVar2[1] = *piVar2;
    piVar1 = *(int **)(param_1 + 0xc);
    piVar3 = (int *)*piVar2;
  }
  if (piVar3 == piVar1) {
    return;
  }
  piVar3[1] = piVar2[1];
  return;
}


// ==== FUN_00318b60 @ 00318b60 ====

long FUN_00318b60(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_00312c48(param_1,0x30800);
  iVar2 = (int)lVar1;
  if (lVar1 != 0) {
    *(int *)(iVar2 + 0xc) = iVar2 + (int)param_1;
    *(int *)(iVar2 + 8) = iVar2 + 0x10;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = 0;
    **(undefined4 **)(iVar2 + 8) = *(undefined4 *)(iVar2 + 0xc);
  }
  return lVar1;
}


// ==== FUN_00318bc0 @ 00318bc0 ====

void FUN_00318bc0(void)

{
  FUN_00312c70();
  return;
}


// ==== FUN_00318c40 @ 00318c40 ====

void FUN_00318c40(void)

{
  while ((undefined1 **)puGpffff8fb8 != &puGpffff8fb8) {
    FUN_003187f8(puGpffff8fb8 + -0x14);
  }
  FUN_00317fc0(0x456448);
  uGpffff89fc = 0;
  return;
}


// ==== FUN_00318c90 @ 00318c90 ====

long FUN_00318c90(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_00318b60(*(undefined4 *)(param_1 + 4));
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar3 = (undefined4 *)lVar2;
    puVar3[1] = param_1 + 0xc;
    *puVar3 = uVar1;
    *(undefined4 **)(*(int *)(param_1 + 0xc) + 4) = puVar3;
    *(undefined4 **)(param_1 + 0xc) = puVar3;
  }
  return lVar2;
}


// ==== FUN_00318ce8 @ 00318ce8 ====

void FUN_00318ce8(uint *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_00317c20(0x456448);
  }
  return;
}


// ==== FUN_00318d28 @ 00318d28 ====

void FUN_00318d28(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  piVar4 = (int *)(iVar5 + 4);
  bVar1 = false;
  if ((iGpffff8a24 == 2) && (WaitSema(DAT_00458490), iGpffff8a24 == 2)) {
    WaitSema(DAT_004584c4);
  }
  lVar2 = FUN_0031d2a8(0x4584c0);
  if (lVar2 == 0) {
    bVar1 = DAT_004584d0 == piVar4;
    if (bVar1) {
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 3;
    }
    if (DAT_00458480 != piVar4) {
      iVar3 = *piVar4;
      goto LAB_00318dec;
    }
    DAT_00458484 = 0;
    DAT_00458480 = (int *)0x0;
  }
  else {
    if (iGpffff8a24 != 2) {
      iVar3 = *piVar4;
      goto LAB_00318dec;
    }
    SignalSema(DAT_004584c0);
  }
  iVar3 = *piVar4;
LAB_00318dec:
  if (iVar3 != 0) {
    **(int **)(iVar5 + 8) = iVar3;
    *(undefined4 *)(*piVar4 + 4) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(iVar5 + 0xc) = 1;
    *piVar4 = 0;
  }
  if ((iGpffff8a24 == 2) && (SignalSema(DAT_004584c4), iGpffff8a24 == 2)) {
    SignalSema(DAT_00458490);
  }
  if (bVar1) {
    FUN_00318e80(*(undefined4 *)(iVar5 + 0x20),0,2,1,param_1);
  }
  return;
}


// ==== FUN_00318e80 @ 00318e80 ====

void FUN_00318e80(undefined4 param_1,int param_2,long param_3,ulong param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar7 = (int *)(param_5 + 4);
  if (param_4 == 2) {
    *(int *)(param_5 + 0x28) = param_2;
    iVar4 = *(int *)(param_5 + 0xc);
  }
  else if (param_4 < 3) {
    if (param_4 == 1) goto LAB_00318f68;
    iVar4 = *(int *)(param_5 + 0xc);
  }
  else {
    if (param_4 == 5) goto LAB_00318f68;
    iVar4 = *(int *)(param_5 + 0xc);
  }
  if (iVar4 != 5) {
    (**(code **)(param_5 + 0x3c))(param_1,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0x40));
    return;
  }
  *(undefined4 *)(param_5 + 0xc) = 3;
LAB_00318f68:
  if (iGpffff8a24 == 2) {
    WaitSema(DAT_00458490,param_2);
  }
  iVar4 = *(int *)(param_5 + 0xc);
  do {
    if (iVar4 == 4) {
      piVar7[2] = 3;
      if (param_3 == 4) {
        iVar4 = piVar7[0xf];
      }
      else {
        if (param_2 == piVar7[0xb]) {
          if ((undefined *)piVar7[0xc] == &DAT_00456480) {
            DAT_00458488 = piVar7[10];
            DAT_00458480 = piVar7;
            DAT_00458484 = param_1;
            DAT_0045848c = param_2;
          }
          else {
            piVar7[6] = piVar7[6] + param_2;
            piVar7[3] = piVar7[3] + param_2;
            piVar7[5] = piVar7[5] - param_2;
          }
          goto LAB_00318ff8;
        }
        iVar4 = piVar7[0xf];
      }
LAB_00319138:
      piVar7[2] = 1;
      (*(code *)piVar7[0xe])(piVar7[7],piVar7[4],param_3,param_4,iVar4);
      piVar7 = (int *)0x0;
      if (iGpffff8a24 == 2) {
        WaitSema(DAT_004584c4);
      }
      if ((int **)DAT_004584c8 == &DAT_004584c8) {
        piVar3 = piVar7;
        if (iGpffff8a24 != 2) goto LAB_00319214;
        SignalSema(DAT_004584c0);
      }
      else {
        piVar7 = DAT_004584c8;
        if ((DAT_00458480 != (int *)0x0) && (piVar7 = DAT_00458480, *DAT_00458480 == 0)) {
          piVar7 = DAT_004584c8;
        }
        *(int *)piVar7[1] = *piVar7;
        *(int *)(*piVar7 + 4) = piVar7[1];
        *piVar7 = 0;
        piVar7[2] = 3;
        param_5 = piVar7[0xd];
      }
      piVar3 = piVar7;
      if (iGpffff8a24 == 2) {
        SignalSema(DAT_004584c4);
      }
    }
    else {
LAB_00318ff8:
      uVar8 = piVar7[3];
      uVar6 = (uVar8 >> 0xd) * 0x2000;
      if (DAT_00458480 == piVar7) {
        if (DAT_00458488 == uVar6) {
          iVar4 = uVar8 + (uVar8 >> 0xd) * -0x2000;
          uVar6 = DAT_0045848c - iVar4;
          param_3 = 2;
          uVar5 = piVar7[5];
          if (uVar6 < (uint)piVar7[5]) {
            uVar5 = uVar6;
          }
          uVar8 = uVar8 + uVar5;
          memcpy(piVar7[6],&DAT_00456480 + iVar4,uVar5);
          uVar6 = uVar8 & 0xffffe000;
          piVar7[6] = piVar7[6] + uVar5;
          piVar7[5] = piVar7[5] - uVar5;
          piVar7[3] = piVar7[3] + uVar5;
          goto LAB_0031907c;
        }
        uVar5 = piVar7[5];
      }
      else {
LAB_0031907c:
        uVar5 = piVar7[5];
      }
      if (uVar5 == 0) {
        iVar4 = piVar7[0xf];
        goto LAB_00319138;
      }
      if ((((piVar7[6] & 0x3fU) == 0) && (uVar8 == uVar6)) && (0x7ff < uVar5)) {
        piVar7[0xc] = piVar7[6];
        uVar5 = uVar5 & 0xfffff800;
        if (piVar7 == DAT_00458480) {
          DAT_00458484 = 0;
          DAT_00458480 = (int *)0x0;
        }
      }
      else {
        DAT_00458480 = (int *)0x0;
        DAT_00458484 = 0;
        DAT_00458488 = 0xffffffff;
        uVar5 = 0x2000;
        piVar7[0xc] = (int)&DAT_00456480;
      }
      if (*(uint *)(param_5 + 0x60) != uVar6) {
        piVar7[2] = 5;
        *(uint *)(param_5 + 0x60) = uVar6;
        FUN_00324cb0(*(undefined4 *)(param_5 + 0x5c),uVar6,0x318e80,param_5);
LAB_00319220:
        if (iGpffff8a24 == 2) {
          SignalSema(DAT_00458490);
        }
        return;
      }
      piVar7[0xb] = uVar5;
      piVar7[10] = uVar6;
      piVar7[2] = 4;
      *(uint *)(param_5 + 0x60) = *(int *)(param_5 + 0x60) + uVar5;
      piVar3 = piVar7 + 0xb;
      piVar1 = piVar7 + 7;
      piVar2 = piVar7 + 0xc;
      piVar7 = (int *)0x0;
      FUN_00324ba0(*piVar1,*piVar2,*piVar3,0,0x318e80,param_5);
      piVar3 = DAT_004584d0;
    }
LAB_00319214:
    DAT_004584d0 = piVar3;
    if (piVar7 == (int *)0x0) goto LAB_00319220;
    iVar4 = piVar7[2];
  } while( true );
}


// ==== FUN_00319268 @ 00319268 ====

undefined4 FUN_00319268(void)

{
  FUN_00319928();
  FUN_0031d268(0x458490,1,1);
  DAT_004584cc = &DAT_004584c8;
  DAT_004584d0 = 0;
  DAT_004584c8 = &DAT_004584c8;
  FUN_0031d268(0x4584c4,1,1);
  FUN_0031d268(0x4584c0,1,1);
  return 1;
}


// ==== FUN_003192d8 @ 003192d8 ====

void FUN_003192d8(void)

{
  if (iGpffff8a24 == 2) {
    WaitSema(DAT_00458490);
  }
  DeleteSema(DAT_00458490);
  if ((iGpffff8a24 == 2) && (WaitSema(DAT_004584c4), iGpffff8a24 == 2)) {
    WaitSema(DAT_004584c0);
  }
  DeleteSema(DAT_004584c4);
  DeleteSema(DAT_004584c0);
  return;
}


// ==== FUN_00319368 @ 00319368 ====

undefined8
FUN_00319368(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
            undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[1] = param_4;
  puVar3[2] = 0;
  *puVar3 = (int)param_3;
  if (param_3 == 2) {
    puVar2 = (undefined4 *)param_2;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[0x10] = puVar2;
    puVar2[0xe] = puVar2;
    puVar2[4] = 0;
    puVar2[9] = 0;
    *puVar2 = puVar3;
    puVar2[0xf] = &LAB_00319628;
    puVar2[0x12] = param_6;
    puVar2[0x13] = param_7;
    puVar2[0x11] = 1;
    puVar2[3] = 1;
    uVar1 = FUN_00324990(param_5);
    puVar2[0x18] = 0;
    puVar2[0x17] = (int)uVar1;
    FUN_00318e80(uVar1,0,2,2,param_2);
  }
  return param_1;
}


// ==== FUN_00319410 @ 00319410 ====

void FUN_00319410(undefined4 *param_1)

{
  int *piVar1;
  long lVar2;
  
  FUN_00319480();
  if (DAT_00458480 == param_1 + 1) {
    FUN_00319928();
    piVar1 = (int *)*param_1;
  }
  else {
    piVar1 = (int *)*param_1;
  }
  if ((*piVar1 == 2) && (lVar2 = FUN_00324948(param_1[0x17]), lVar2 != 0)) {
    FUN_003249e8(param_1[0x17]);
    param_1[0x17] = 0;
  }
  return;
}


// ==== FUN_00319480 @ 00319480 ====

void FUN_00319480(void)

{
  FUN_00318d28();
  return;
}


// ==== FUN_003194a0 @ 003194a0 ====

void FUN_003194a0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x44) = 3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_5;
  FUN_00319828();
  return;
}


// ==== FUN_003194d8 @ 003194d8 ====

void FUN_003194d8(undefined8 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(uint *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0x48) = param_3;
  *(undefined4 *)(iVar1 + 0x4c) = param_4;
  *(undefined4 *)(iVar1 + 0x44) = 3;
  *(uint *)(iVar1 + 0x60) = param_2 & 0xffffe000;
  if (((DAT_00458484 == *(int *)(iVar1 + 0x20)) && (DAT_00458488 <= param_2)) &&
     (param_2 < DAT_00458488 + DAT_0045848c)) {
    FUN_00318e80(DAT_00458484,param_2,0,4);
  }
  else {
    FUN_00324cb0(*(undefined4 *)(iVar1 + 0x5c),param_2 & 0xffffe000,0x318e80,param_1);
  }
  return;
}


// ==== FUN_00319578 @ 00319578 ====

void FUN_00319578(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_2;
  *puVar1 = param_1;
  puVar1[0x14] = param_3;
  puVar1[0x12] = param_5;
  puVar1[0x13] = param_6;
  puVar1[0x11] = 2;
  puVar1[0x15] = (int)param_4;
  puVar1[0x16] = 0;
  FUN_00319828(param_2,param_4,0xc,0x319628,param_2);
  return;
}


// ==== FUN_003195d0 @ 003195d0 ====

void FUN_003195d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x4c) = param_4;
  *(undefined4 *)(iVar1 + 0x48) = param_3;
  *(undefined4 *)(iVar1 + 0x44) = 3;
  FUN_00319828(param_1,param_2,0xc,0x319628,param_1);
  return;
}


// ==== FUN_00319610 @ 00319610 ====

undefined4 FUN_00319610(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ==== FUN_003196a8 @ 003196a8 ====

void FUN_003196a8(undefined4 param_1)

{
  int *in_t0_lo;
  
  *(undefined4 *)(*in_t0_lo + 0xc) = param_1;
  (*(code *)in_t0_lo[0x12])();
  return;
}


// ==== FUN_003196d8 @ 003196d8 ====

void FUN_003196d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_5;
  if (param_3 == 4) {
    piVar5[0x11] = 0;
    *(undefined4 *)piVar5[0x15] = 0;
    *(undefined4 *)(piVar5[0x15] + 4) = 0;
    *(undefined4 *)(piVar5[0x15] + 8) = 0;
    uVar1 = *(undefined4 *)(*piVar5 + 0xc);
  }
  else {
    if (piVar5[0x16] != 0) {
      piVar5[0x16] = 0;
      FUN_00319828(param_5,piVar5[0x15],0xc,0x319628,param_5);
      return;
    }
    if (*(int *)piVar5[0x15] == piVar5[0x14]) {
      piVar5[0x11] = 0;
      uVar4 = 0xc;
      iVar2 = piVar5[0x13];
      uVar1 = *(undefined4 *)(*piVar5 + 0xc);
      goto LAB_003197d4;
    }
    piVar5[0x16] = 1;
    lVar3 = FUN_0032a938(*(undefined4 *)(*piVar5 + 0xc));
    if (-1 < lVar3) {
      piVar5[0x18] = (int)lVar3 + *(int *)(piVar5[0x15] + 4);
      FUN_00324cb0(piVar5[0x17],(int)lVar3 + *(int *)(piVar5[0x15] + 4),0x318e80,param_5);
      return;
    }
    *(undefined4 *)piVar5[0x15] = 0;
    *(undefined4 *)(piVar5[0x15] + 4) = 0;
    *(undefined4 *)(piVar5[0x15] + 8) = 0;
    uVar1 = *(undefined4 *)(*piVar5 + 0xc);
  }
  param_3 = 4;
  uVar4 = 0;
  iVar2 = piVar5[0x13];
LAB_003197d4:
  (*(code *)piVar5[0x12])(uVar1,uVar4,param_3,param_4,iVar2);
  return;
}


// ==== FUN_00319828 @ 00319828 ====

void FUN_00319828(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  piVar3 = piVar4 + 1;
  piVar4[3] = 3;
  iVar1 = *(int *)(*piVar4 + 0xc);
  piVar4[6] = param_3;
  piVar4[8] = iVar1;
  piVar4[7] = param_2;
  piVar4[0xf] = param_4;
  piVar4[0x10] = param_5;
  piVar4[5] = param_3;
  if (iGpffff8a24 == 2) {
    WaitSema(DAT_004584c4);
  }
  lVar2 = FUN_0031d2a8(0x4584c0);
  if (lVar2 == 0) {
    piVar4[1] = (int)DAT_004584c8;
    piVar4[2] = (int)&DAT_004584c8;
    DAT_004584c8[1] = (int)piVar3;
    DAT_004584c8 = piVar3;
    piVar4[3] = 2;
    if (iGpffff8a24 == 2) {
      SignalSema(DAT_004584c4);
    }
  }
  else {
    DAT_004584d0 = piVar3;
    if (iGpffff8a24 == 2) {
      SignalSema(DAT_004584c4);
      iVar1 = piVar4[5];
    }
    else {
      iVar1 = piVar4[5];
    }
    FUN_00318e80(piVar4[8],iVar1,0,1,param_1);
  }
  return;
}


// ==== FUN_00319928 @ 00319928 ====

void FUN_00319928(void)

{
  DAT_00458488 = 0xffffffff;
  DAT_0045848c = 0;
  DAT_00458480 = 0;
  DAT_00458484 = 0;
  return;
}


// ==== FUN_00319950 @ 00319950 ====

undefined8 FUN_00319950(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x4584d8;
  lVar1 = FUN_00311bf8(0x4584d8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x4584d8,0x409400,0);
    FUN_00311e60(0x4584d8,0x3cf380,0xf,0x3cf4b0,0x10);
  }
  return uVar2;
}


// ==== FUN_003199c0 @ 003199c0 ====

void FUN_003199c0(void)

{
  FUN_00311ca0(0x4584d8);
  return;
}


// ==== FUN_003199e0 @ 003199e0 ====

undefined8 FUN_003199e0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x458500;
  lVar1 = FUN_00311bf8(0x458500);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x458500,0x4094d0,0);
    FUN_00311e60(0x458500,0x3cf5f0,9,0x3cf6a8,10);
  }
  return uVar2;
}


// ==== FUN_00319a50 @ 00319a50 ====

void FUN_00319a50(void)

{
  FUN_00311ca0(0x458500);
  return;
}


// ==== FUN_00319a70 @ 00319a70 ====

undefined8 FUN_00319a70(void)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x458528;
  lVar1 = FUN_00311bf8(0x458528);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00311bb8(0x458528,0x409610,0);
    FUN_00311e60(0x458528,0x3cf770,6,0x3cf7e8,5);
  }
  return uVar2;
}


// ==== FUN_00319ae0 @ 00319ae0 ====

void FUN_00319ae0(void)

{
  FUN_00311ca0(0x458528);
  return;
}


// ==== FUN_00319b00 @ 00319b00 ====

void FUN_00319b00(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0031de30(param_1,0x4096d0,0);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x40) = 100;
  uVar1 = FUN_003186b0(0x28);
  if ((1 << (uVar1 & 0x1f) & 0xffffU) != 0) {
    FUN_003186b0(0x28);
  }
  uVar1 = FUN_003186b0(0x28);
  if (((1 << (uVar1 & 0x1f) & 0xffffU) == 0) ||
     (uVar1 = FUN_003186b0(0x28), (1 << (uVar1 & 0x1f) & 0xff00U) == 0)) {
    uVar1 = FUN_003186b0(0x28);
    if ((1 << (uVar1 & 0x1f) & 0xffffU) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_003186b0(0x28);
      uVar1 = 1 << (uVar1 & 0x1f) & 0xffff;
    }
    iVar2 = (char)(&DAT_003c3228)[uVar1] + -1;
  }
  else {
    uVar1 = FUN_003186b0(0x28);
    if ((1 << (uVar1 & 0x1f) & 0xffffU) == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = FUN_003186b0(0x28);
      iVar2 = (int)(1 << (uVar1 & 0x1f) & 0xffffU) >> 8;
    }
    iVar2 = (char)(&DAT_003c3228)[iVar2] + 7;
  }
  *(uint *)(iVar3 + 0x40) = iVar2 << 0x1c | 100;
  *(undefined1 **)(iVar3 + 0x28) = &LAB_00319ed0;
  *(code **)(iVar3 + 0x34) = FUN_00319f80;
  *(code **)(iVar3 + 0x2c) = FUN_00319fd0;
  *(undefined1 **)(iVar3 + 0x3c) = &LAB_0031a058;
  *(undefined2 *)(iVar3 + 0x44) = 4;
  return;
}


// ==== FUN_00319c70 @ 00319c70 ====

void FUN_00319c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00310978(0x458550,param_1,param_3,param_2,param_4,param_5);
  return;
}


// ==== FUN_00319ca8 @ 00319ca8 ====

undefined8 FUN_00319ca8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if (iGpffff8a00 != 0) {
    lVar1 = FUN_00322a78();
    if (lVar1 == 0) {
      return 0;
    }
    iGpffff8a00 = 0;
  }
  uVar2 = FUN_0031d7a8(0x458550);
  return uVar2;
}


// ==== FUN_00319ce8 @ 00319ce8 ====

long FUN_00319ce8(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0031dc40(uGpffff8fe0,0xc,0x458550,0x4585b0,&gp0xffff8fc0,0x30811);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_00319b00(lVar1);
    lVar2 = FUN_0031d988(lVar1,0x3cf850,0x11,0x3cf9e8,0x12);
    if ((lVar2 == 0) || (lVar2 = FUN_00322a08(), lVar2 == 0)) {
      FUN_0031d7a8(lVar1);
      lVar2 = 0;
    }
    else {
      FUN_0031ddd8(lVar1,lVar2);
      uGpffff8a00 = 1;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


// ==== FUN_00319de0 @ 00319de0 ====

void FUN_00319de0(int param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_00317340(param_1 + 0x28,1);
  }
  else {
    FUN_00317340(param_1 + 0x28,0);
    *(undefined4 *)(param_1 + 0x74) = uGpffff89d4;
  }
  return;
}


// ==== FUN_00319e28 @ 00319e28 ====

void FUN_00319e28(int param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 100) != 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  else {
    *(int *)(param_1 + 100) = (int)param_2;
    if ((*(byte *)(param_1 + 0x8a) & 0x20) == 0) {
      uVar2 = *(uint *)((int)param_2 + 0x2c);
      if ((int)uVar2 < 0) {
        *(float *)(param_1 + 0x78) = (float)uVar2;
      }
      else {
        *(float *)(param_1 + 0x78) = (float)(int)uVar2;
      }
    }
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (iVar1 != 0) {
    FUN_00310698(iVar1,0xb,1,*(undefined4 *)(param_1 + 100));
  }
  return;
}


// ==== FUN_00319f80 @ 00319f80 ====

void FUN_00319f80(int param_1)

{
  FUN_00317340(param_1 + 0x28,1);
  if (*(int *)(param_1 + 0x28) != 0) {
    **(int **)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}


// ==== FUN_00319fd0 @ 00319fd0 ====

undefined8 FUN_00319fd0(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if ((*(byte *)(iVar4 + 0x8a) & 2) == 0) {
    bVar1 = *(byte *)(iVar4 + 0x8a);
  }
  else {
    uVar3 = 2;
    if (*(int *)(iVar4 + 0x60) != 0) {
      lVar2 = FUN_00310768(*(int *)(iVar4 + 0x60),8,2,0);
      if (lVar2 == 0) {
        uVar3 = 1;
      }
    }
    FUN_00317340(iVar4 + 0x28,uVar3);
    bVar1 = *(byte *)(iVar4 + 0x8a);
  }
  *(byte *)(iVar4 + 0x8a) = bVar1 & 0xdf;
  return param_1;
}


// ==== FUN_0031a108 @ 0031a108 ====

undefined8 FUN_0031a108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)((undefined8 *)param_3 + 1);
  iVar2 = (int)param_1;
  *(undefined8 *)(iVar2 + 0x30) = *(undefined8 *)param_3;
  *(undefined4 *)(iVar2 + 0x38) = uVar1;
  if (*(int *)(iVar2 + 0x60) != 0) {
    FUN_00310590(*(int *)(iVar2 + 0x60),0,1,param_3);
  }
  return param_1;
}


// ==== FUN_0031a188 @ 0031a188 ====

undefined8 FUN_0031a188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)((undefined8 *)param_3 + 1);
  iVar2 = (int)param_1;
  *(undefined8 *)(iVar2 + 0x3c) = *(undefined8 *)param_3;
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  if (*(int *)(iVar2 + 0x60) != 0) {
    FUN_00310590(*(int *)(iVar2 + 0x60),1,1,param_3);
  }
  return param_1;
}


// ==== FUN_0031a208 @ 0031a208 ====

undefined8 FUN_0031a208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)((undefined8 *)param_3 + 1);
  iVar2 = (int)param_1;
  *(undefined8 *)(iVar2 + 0x48) = *(undefined8 *)param_3;
  *(undefined4 *)(iVar2 + 0x50) = uVar1;
  if (*(int *)(iVar2 + 0x60) != 0) {
    FUN_00310590(*(int *)(iVar2 + 0x60),2,1,param_3);
  }
  return param_1;
}


// ==== FUN_0031a288 @ 0031a288 ====

undefined8 FUN_0031a288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)((undefined8 *)param_3 + 1);
  iVar2 = (int)param_1;
  *(undefined8 *)(iVar2 + 0x54) = *(undefined8 *)param_3;
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  if (*(int *)(iVar2 + 0x60) != 0) {
    FUN_00310590(*(int *)(iVar2 + 0x60),3,1,param_3);
  }
  return param_1;
}


// ==== FUN_0031a308 @ 0031a308 ====

undefined8 FUN_0031a308(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  *(undefined4 *)((int)param_1 + 0x7c) = *param_3;
  if (iVar1 != 0) {
    FUN_003106f0(*param_3,iVar1,4,1);
  }
  return param_1;
}


// ==== FUN_0031a360 @ 0031a360 ====

undefined8 FUN_0031a360(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  *(undefined4 *)((int)param_1 + 0x80) = *param_3;
  if (iVar1 != 0) {
    FUN_003106f0(*param_3,iVar1,5,1);
  }
  return param_1;
}


// ==== FUN_0031a3b8 @ 0031a3b8 ====

undefined8 FUN_0031a3b8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  *(undefined4 *)((int)param_1 + 0x78) = *param_3;
  if (iVar1 != 0) {
    FUN_003106f0(*param_3,iVar1,6,1);
  }
  return param_1;
}


// ==== FUN_0031a410 @ 0031a410 ====

undefined8 FUN_0031a410(undefined8 param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  *(char *)((int)param_1 + 0x85) = (char)(int)(*param_3 * 255.0);
  if (iVar1 != 0) {
    FUN_003106f0(*param_3,iVar1,7,1);
  }
  return param_1;
}


// ==== FUN_0031a498 @ 0031a498 ====

undefined8 FUN_0031a498(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*param_3 == 0) {
    FUN_00317340(iVar1 + 0x28,1);
  }
  else {
    FUN_00317340(iVar1 + 0x28,0);
    *(undefined4 *)(iVar1 + 0x74) = uGpffff89d4;
  }
  return param_1;
}


// ==== FUN_0031a500 @ 0031a500 ====

undefined8 FUN_0031a500(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  *(undefined4 *)((int)param_1 + 0x6c) = *param_3;
  if (iVar1 != 0) {
    FUN_00310640(iVar1,9,1,*param_3);
  }
  return param_1;
}


// ==== FUN_0031a548 @ 0031a548 ====

undefined8 FUN_0031a548(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x60) == 0) || ((*(byte *)(iVar2 + 0x8a) & 2) == 0)) {
    uVar1 = *(undefined4 *)(iVar2 + 0x6c);
  }
  else {
    uVar1 = FUN_003107e0(*(int *)(iVar2 + 0x60),9,2,0);
  }
  *(undefined4 *)(iVar2 + 0x6c) = uVar1;
  *param_3 = uVar1;
  return param_1;
}


// ==== FUN_0031a5b8 @ 0031a5b8 ====

undefined8 FUN_0031a5b8(undefined8 param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*param_3 == 0) {
    bVar1 = *(byte *)(iVar2 + 0x8a) & 0xfb;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x8a) | 4;
  }
  *(byte *)(iVar2 + 0x8a) = bVar1;
  if (*(int *)(iVar2 + 0x60) != 0) {
    FUN_003105e8(*(int *)(iVar2 + 0x60),10,1,*param_3);
  }
  return param_1;
}


// ==== FUN_0031a630 @ 0031a630 ====

undefined8 FUN_0031a630(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 100) != 0) {
    *(undefined4 *)(iVar3 + 100) = 0;
  }
  if (param_3 == 0) {
    iVar1 = *(int *)(iVar3 + 0x60);
  }
  else {
    *(int *)(iVar3 + 100) = (int)param_3;
    if ((*(byte *)(iVar3 + 0x8a) & 0x20) == 0) {
      uVar2 = *(uint *)((int)param_3 + 0x2c);
      if ((int)uVar2 < 0) {
        *(float *)(iVar3 + 0x78) = (float)uVar2;
      }
      else {
        *(float *)(iVar3 + 0x78) = (float)(int)uVar2;
      }
    }
    iVar1 = *(int *)(iVar3 + 0x60);
  }
  if (iVar1 != 0) {
    FUN_00310698(iVar1,0xb,1,*(undefined4 *)(iVar3 + 100));
  }
  return param_1;
}


// ==== FUN_0031a6d8 @ 0031a6d8 ====

undefined8 FUN_0031a6d8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  *(char *)((int)param_1 + 0x8b) = (char)(int)(*param_3 * 127.0);
  if (iVar1 != 0) {
    FUN_003106f0(*param_3,iVar1,0xc,1);
  }
  return param_1;
}


// ==== FUN_0031a770 @ 0031a770 ====

undefined8 FUN_0031a770(undefined8 param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  *(char *)((int)param_1 + 0x86) = (char)(int)(*param_3 * 255.0);
  if (iVar1 != 0) {
    FUN_003106f0(*param_3,iVar1,0xd,1);
  }
  return param_1;
}


// ==== FUN_0031a7f8 @ 0031a7f8 ====

undefined8 FUN_0031a7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  *(int *)((int)param_1 + 0x68) = (int)param_3;
  iVar1 = *(int *)((int)param_1 + 0x60);
  if (iVar1 != 0) {
    FUN_00310698(iVar1,0xe,1,param_3);
  }
  return param_1;
}


// ==== FUN_0031a850 @ 0031a850 ====

void FUN_0031a850(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0031de30(param_1,0x4096e0,0);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x40) = 0x80;
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
  *(uint *)(iVar3 + 0x40) = iVar2 << 0x1c | 0x80;
  *(code **)(iVar3 + 0x28) = FUN_0031aad8;
  *(undefined1 **)(iVar3 + 0x34) = &LAB_0031abe8;
  *(undefined2 *)(iVar3 + 0x44) = 0;
  return;
}


// ==== FUN_0031a9a0 @ 0031a9a0 ====

void FUN_0031a9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00310978(0x4585c8,param_1,param_2,0,param_3,param_4);
  return;
}


// ==== FUN_0031a9e0 @ 0031a9e0 ====

undefined8 FUN_0031a9e0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if (iGpffff8a04 != 0) {
    lVar1 = FUN_00322b98();
    if (lVar1 == 0) {
      return 0;
    }
    iGpffff8a04 = 0;
  }
  uVar2 = FUN_0031d7a8(0x4585c8);
  return uVar2;
}


// ==== FUN_0031aa20 @ 0031aa20 ====

long FUN_0031aa20(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0031dc40(uGpffff8fe0,0xc,0x4585c8,0x458628,&gp0xffff8fc8,0x3080c);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_0031a850(lVar1);
    lVar2 = FUN_0031d988(lVar1,0x3cfb98,5,0x3cfc10,6);
    if ((lVar2 == 0) || (lVar2 = FUN_00322b28(), lVar2 == 0)) {
      FUN_0031d7a8(lVar1);
      lVar2 = 0;
    }
    else {
      FUN_0031ddd8(lVar1,lVar2);
      uGpffff8a04 = 1;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


// ==== FUN_0031aad8 @ 0031aad8 ====

undefined8 FUN_0031aad8(undefined8 param_1)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  memset(&uStack_30,0,0xc);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(ulong *)(iVar1 + 0x48) = CONCAT44(uStack_2c,uStack_30);
  *(undefined4 *)(iVar1 + 0x50) = uStack_28;
  *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 1;
  *(ulong *)(iVar1 + 0x54) = CONCAT44(uStack_2c,uStack_30);
  *(undefined4 *)(iVar1 + 0x5c) = uStack_28;
  *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 2;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0x3f800000;
  *(undefined8 *)(iVar1 + 0x60) = 0x3f80000000000000;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(float *)(iVar1 + 0x78) =
       *(float *)(iVar1 + 100) * *(float *)(iVar1 + 0x74) -
       *(float *)(iVar1 + 0x68) * *(float *)(iVar1 + 0x70);
  *(float *)(iVar1 + 0x80) =
       *(float *)(iVar1 + 0x60) * *(float *)(iVar1 + 0x70) -
       *(float *)(iVar1 + 100) * *(float *)(iVar1 + 0x6c);
  *(float *)(iVar1 + 0x7c) =
       *(float *)(iVar1 + 0x68) * *(float *)(iVar1 + 0x6c) -
       *(float *)(iVar1 + 0x60) * *(float *)(iVar1 + 0x74);
  *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 8;
  return param_1;
}


// ==== FUN_0031aee0 @ 0031aee0 ====

void FUN_0031aee0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0031de30(param_1,0x4096f0,0);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x40) = 0x80;
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
  *(uint *)(iVar3 + 0x40) = iVar2 << 0x1c | 0x80;
  *(undefined1 **)(iVar3 + 0x28) = &LAB_0031b688;
  *(undefined2 *)(iVar3 + 0x44) = 0;
  *(undefined2 *)(iVar3 + 0x46) = 1;
  return;
}


// ==== FUN_0031b030 @ 0031b030 ====

void FUN_0031b030(int param_1,float *param_2,float *param_3,undefined4 param_4,ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  float afStack_90 [4];
  
  fStack_a8 = param_2[2] - *(float *)(param_1 + 0x48);
  uStack_b0 = CONCAT44(param_2[1] - *(float *)(param_1 + 0x44),*param_2 - *(float *)(param_1 + 0x40)
                      );
  FUN_00318550(afStack_90,&uStack_b0);
  if ((param_5 & 2) != 0) {
    if (afStack_90[0] == 0.0) {
      param_3[1] = 1.0;
    }
    else {
      FUN_002a75f0(&fStack_d0,&uStack_b0);
      fStack_c0 = param_2[3] - *(float *)(param_1 + 0x4c);
      fStack_bc = param_2[4] - *(float *)(param_1 + 0x50);
      fStack_b8 = param_2[5] - *(float *)(param_1 + 0x54);
      fVar3 = (fStack_c0 * fStack_d0 + fStack_bc * fStack_cc + fStack_b8 * fStack_c8) *
              *(float *)(param_1 + 0x80);
      if (150.0 < fVar3) {
        fVar3 = 150.0;
      }
      else if (fVar3 < -150.0) {
        fVar3 = -150.0;
      }
      fVar4 = *(float *)(param_1 + 0x84) * 340.0;
      param_3[1] = fVar4 / (fVar4 + fVar3);
    }
  }
  if ((param_5 & 1) != 0) {
    if (param_2[7] < afStack_90[0]) {
      *param_3 = 0.0;
    }
    else {
      fVar3 = param_2[6];
      if (afStack_90[0] < fVar3) {
        *param_3 = 1.0;
      }
      else {
        afStack_90[0] = afStack_90[0] - fVar3;
        fVar3 = param_2[7] - fVar3;
        uVar1 = FUN_00291f58(afStack_90[0] * *(float *)(param_1 + 0x7c));
        lVar2 = FUN_002919f8(uVar1,DAT_00409700);
        if ((lVar2 < 0) && (fVar3 < fGpffff80b4)) {
          fVar3 = fGpffff80b4;
        }
        *param_3 = (fVar3 - afStack_90[0]) / (afStack_90[0] * *(float *)(param_1 + 0x7c) + fVar3);
      }
    }
  }
  if ((param_5 & 4) != 0) {
    uStack_b0 = CONCAT44(*(float *)(param_1 + 0x68),(float)uStack_b0);
    if (pcGpffff8a0c == (code *)0x0) {
      if ((((float)uStack_b0 == 0.0) && (*(float *)(param_1 + 0x68) == 0.0)) && (fStack_a8 == 0.0))
      {
        uStack_b0 = *(undefined8 *)(param_1 + 100);
        fStack_a8 = *(float *)(param_1 + 0x6c);
        fVar3 = *(float *)(param_1 + 0x70);
      }
      else {
        FUN_002a75f0(&uStack_b0,&uStack_b0);
        fVar3 = *(float *)(param_1 + 0x70);
      }
      fVar3 = 0.5 - ((float)uStack_b0 * fVar3 + uStack_b0._4_4_ * *(float *)(param_1 + 0x74) +
                    fStack_a8 * *(float *)(param_1 + 0x78)) * 0.5;
      param_3[3] = fVar3;
      if (fVar3 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = 1.0;
        if (fVar3 <= 1.0) {
          fVar4 = fVar3;
        }
      }
      param_3[3] = fVar4;
      fVar3 = 0.5 - ((float)uStack_b0 * *(float *)(param_1 + 100) +
                     uStack_b0._4_4_ * *(float *)(param_1 + 0x68) +
                    fStack_a8 * *(float *)(param_1 + 0x6c)) * 0.5;
      param_3[4] = fVar3;
      if (fVar3 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = 1.0;
        if (fVar3 <= 1.0) {
          fVar4 = fVar3;
        }
      }
      param_3[4] = fVar4;
      fVar3 = (float)uStack_b0 * *(float *)(param_1 + 100) +
              uStack_b0._4_4_ * *(float *)(param_1 + 0x68) + fStack_a8 * *(float *)(param_1 + 0x6c);
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      if (fVar3 < -1.0) {
        fVar3 = -1.0;
      }
      fVar3 = (float)acosf(fVar3);
      param_3[2] = fVar3;
      if (0.0 < (uStack_b0._4_4_ * *(float *)(param_1 + 0x6c) -
                fStack_a8 * *(float *)(param_1 + 0x68)) * *(float *)(param_1 + 0x58) +
                (fStack_a8 * *(float *)(param_1 + 100) -
                (float)uStack_b0 * *(float *)(param_1 + 0x6c)) * *(float *)(param_1 + 0x5c) +
                ((float)uStack_b0 * *(float *)(param_1 + 0x68) -
                uStack_b0._4_4_ * *(float *)(param_1 + 100)) * *(float *)(param_1 + 0x60)) {
        param_3[2] = fGpffff80b8 - fVar3;
      }
    }
    else {
      (*pcGpffff8a0c)(&uStack_b0,param_1 + 0x40,param_3 + 3,param_3 + 4,param_3 + 2,uGpffff8a10);
    }
    switch(param_4) {
    default:
      goto switchD_0031b4c4_caseD_1;
    case 2:
      fVar3 = (param_3[3] - 0.5) * 0.0;
      break;
    case 3:
      fVar3 = (param_3[3] - 0.5) * 0.5;
    }
    param_3[3] = fVar3 + 0.5;
  }
switchD_0031b4c4_caseD_1:
  return;
}


// ==== FUN_0031b530 @ 0031b530 ====

void FUN_0031b530(undefined4 param_1,undefined4 param_2)

{
  uGpffff8a0c = param_1;
  uGpffff8a10 = param_2;
  return;
}


// ==== FUN_0031b540 @ 0031b540 ====

void FUN_0031b540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00310978(0x458640,0,param_1,0,param_2,param_3);
  return;
}


// ==== FUN_0031b578 @ 0031b578 ====

undefined8 FUN_0031b578(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if (iGpffff8a08 != 0) {
    lVar1 = FUN_00322b08();
    if (lVar1 == 0) {
      return 0;
    }
    iGpffff8a08 = 0;
  }
  uVar2 = FUN_0031d7a8(0x458640);
  return uVar2;
}


// ==== FUN_0031b5b8 @ 0031b5b8 ====

long FUN_0031b5b8(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0031dc40(uGpffff8fe0,0xc,0x458640,0x4586a0,&gp0xffff8fd0,0x3080c);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_0031aee0(lVar1);
    lVar2 = FUN_0031d988(lVar1,0x3cfca0,8,0x3cfd60,9);
    if ((lVar2 == 0) || (lVar2 = FUN_00322a98(), lVar2 == 0)) {
      FUN_0031d7a8(lVar1);
      lVar2 = 0;
    }
    else {
      FUN_0031ddd8(lVar1,lVar2);
      uGpffff8a08 = 1;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


// ==== FUN_0031bb08 @ 0031bb08 ====

void FUN_0031bb08(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  
  iVar7 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0xac)) {
    if (iVar7 == 0) goto LAB_0031bbfc;
    iVar7 = *(int *)(param_1 + 0xa8);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      do {
        if ((*(uint *)(param_1 + 0x9c) & 0x20) == 0) {
          lVar4 = FUN_00324f98();
          if (lVar4 != 0) {
            bVar2 = true;
            goto LAB_0031bba0;
          }
          uVar3 = *(uint *)(param_1 + 0xac);
        }
        else {
          lVar4 = FUN_00316190(iVar7);
          bVar2 = true;
          if (lVar4 != 0) goto LAB_0031bba0;
          uVar3 = *(uint *)(param_1 + 0xac);
        }
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + 0x130;
      } while (uVar5 < uVar3);
    }
    bVar2 = false;
LAB_0031bba0:
    if (bVar2) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 2;
    }
    else {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x48) + 0x10);
      (*(code *)*puVar1)(*(int *)(param_1 + 0x48),puVar1[1]);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffd;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    iVar7 = *(int *)(param_1 + 0x48);
  }
  if (iVar7 != 0) {
    return;
  }
LAB_0031bbfc:
  uVar5 = FUN_00313098();
  if (*(uint *)(param_1 + 0xd8) < uVar5) {
    uStack_70 = *(undefined4 *)(param_1 + 0x84);
    uStack_68 = 1;
    piVar8 = *(int **)(param_1 + 0xc0);
    piVar6 = (int *)*piVar8;
    uStack_6c = uVar5;
    if (piVar6 != piVar8) {
      do {
        lVar4 = FUN_0031cee0(piVar6 + -0x31,&uStack_70);
        if (lVar4 == 0) {
          piVar8 = *(int **)(param_1 + 0xc0);
          goto LAB_0031bc68;
        }
        piVar6 = (int *)*piVar6;
      } while (piVar6 != piVar8);
      piVar8 = *(int **)(param_1 + 0xc0);
    }
LAB_0031bc68:
    for (piVar6 = (int *)*piVar8; piVar6 != piVar8; piVar6 = (int *)*piVar6) {
      lVar4 = FUN_0031cf10(piVar6 + -0x31,&uStack_70);
      if (lVar4 == 0) {
        iVar7 = *(int *)(param_1 + 0xdc);
        goto LAB_0031bca0;
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0xdc);
LAB_0031bca0:
  bVar2 = true;
  if ((iVar7 == 0) && (bVar2 = true, *(uint *)(param_1 + 0xd4) <= *(uint *)(param_1 + 0x84))) {
    bVar2 = false;
  }
  if (bVar2) {
    lVar4 = FUN_00322f80(param_1 + 0x10);
    *(int *)(param_1 + 0x48) = (int)lVar4;
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffef;
  }
  else {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10;
  }
  return;
}


// ==== FUN_0031bd20 @ 0031bd20 ====

undefined4 FUN_0031bd20(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  
  iVar8 = (int)param_1;
  if ((*(ulong *)(iVar8 + 0x98) & 0x1200000000) != 0) {
    return 0;
  }
  puVar12 = *(uint **)(iVar8 + 0x48);
  bVar2 = false;
  if (puVar12 == (uint *)0x0) {
    bVar2 = true;
    puVar12 = (uint *)(iVar8 + 0x88);
    lVar4 = FUN_0031c968(param_1);
    if (lVar4 == 0) {
      iVar5 = *(int *)(iVar8 + 0x68);
    }
    else if ((*(uint *)(iVar8 + 0x9c) & 0x40) == 0) {
      iVar5 = *(int *)(iVar8 + 0x6c);
    }
    else {
      iVar5 = *(int *)(iVar8 + 0x68);
    }
    iVar3 = iVar5;
    if (iVar5 == 0) {
      iVar3 = *(int *)(iVar8 + 0x4c);
    }
    *(int *)(iVar8 + 0x94) = *(int *)(iVar8 + 0x50) + (iVar3 + -1) * 0x18;
    *(int *)(iVar8 + 0xa4) = iVar3 + -1;
    if ((*(uint *)(iVar8 + 0x9c) & 4) == 0) {
      *(undefined4 *)(iVar8 + 0x54) = 0;
LAB_0031be34:
      uVar10 = *(uint *)(iVar8 + 0x9c);
    }
    else {
      if (*(int *)(iVar8 + 0x54) == *(int *)(iVar8 + 0xac)) {
        *(undefined4 *)(iVar8 + 0x54) = 0;
        goto LAB_0031be34;
      }
      uVar10 = *(uint *)(iVar8 + 0x9c);
    }
    uVar10 = uVar10 | 4;
  }
  else {
    iVar5 = *(int *)(iVar8 + 0x6c);
    if ((*puVar12 & 8) != 0) {
      *(int *)(iVar8 + 0xa0) = iVar5;
      *(uint *)(iVar8 + 0x9c) = *(uint *)(iVar8 + 0x9c) | 1;
    }
    if ((*(uint *)(iVar8 + 0x9c) & 4) == 0) {
      iVar3 = *(int *)(iVar8 + 0xb0);
      goto LAB_0031be48;
    }
    uVar10 = *(uint *)(iVar8 + 0x9c) & 0xfffffffb;
  }
  *(uint *)(iVar8 + 0x9c) = uVar10;
  iVar3 = *(int *)(iVar8 + 0xb0);
LAB_0031be48:
  uVar10 = *(uint *)(iVar8 + 0xb8);
  iVar11 = uVar10 * 0x130;
  do {
    if (*(uint *)(iVar8 + 0xac) <= uVar10) {
      uVar1 = *(uint *)(iVar8 + 0xac);
LAB_0031bee4:
      uVar13 = 0;
      if (uVar10 == uVar1) {
        uVar10 = 0;
      }
      if (*(uint *)(iVar8 + 0x54) == uVar1) {
        iVar3 = iVar5 * 0x18;
        iVar5 = iVar5 + 1;
        puVar6 = (undefined8 *)(iVar3 + *(int *)(iVar8 + 0x50));
        uVar7 = ((undefined8 *)puVar12[3])[1];
        *puVar6 = *(undefined8 *)puVar12[3];
        puVar6[1] = uVar7;
        if (iVar5 == *(int *)(iVar8 + 0x4c)) {
          iVar5 = 0;
        }
        *(int *)(iVar8 + 0x68) = iVar5;
        if (bVar2) {
          lVar4 = FUN_0031c968(param_1);
          if (lVar4 == 0) {
            *(uint *)(iVar8 + 0xb8) = uVar10;
            return 0;
          }
          if ((*(uint *)(iVar8 + 0x9c) & 0x40) != 0) {
            *(uint *)(iVar8 + 0xb8) = uVar10;
            return 0;
          }
          uVar13 = 1;
          *(undefined4 *)(iVar3 + *(int *)(iVar8 + 0x50) + 0x14) = 1;
          *(uint *)(iVar8 + 0x9c) = *(uint *)(iVar8 + 0x9c) | 0x40;
        }
        else {
          uVar13 = 1;
          *(undefined4 *)(iVar3 + *(int *)(iVar8 + 0x50) + 0x14) = 1;
          *(int *)(iVar8 + 0x70) = *(int *)(iVar8 + 0x70) + *(int *)(iVar8 + 0x5c);
          *(undefined4 *)(iVar8 + 0x6c) = *(undefined4 *)(iVar8 + 0x68);
        }
      }
      *(uint *)(iVar8 + 0xb8) = uVar10;
      return uVar13;
    }
    iVar9 = *(int *)(iVar8 + 0xa8) + iVar11;
    if ((*(uint *)(iVar8 + 0x9c) & 0x20) == 0) {
      lVar4 = FUN_00324f98();
    }
    else {
      lVar4 = FUN_00316190(iVar9);
    }
    if (lVar4 != 0) {
LAB_0031bee0:
      uVar1 = *(uint *)(iVar8 + 0xac);
      goto LAB_0031bee4;
    }
    FUN_0031d528(iVar9,iVar5 * iVar3,puVar12[1] + uVar10 * *(int *)(iVar8 + 0xb0));
    if (*(uint *)(iVar8 + 0xac) <= *(uint *)(iVar8 + 0x54)) goto LAB_0031bee0;
    iVar11 = iVar11 + 0x130;
    *(uint *)(iVar8 + 0x54) = *(uint *)(iVar8 + 0x54) + 1;
    uVar10 = uVar10 + 1;
  } while( true );
}


// ==== FUN_0031bfe8 @ 0031bfe8 ====

void FUN_0031bfe8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  undefined1 auStack_90 [4];
  undefined4 auStack_8c [3];
  
  iVar1 = *(int *)(param_1 + 0x20);
  auStack_8c[0] = 1;
  iVar7 = **(int **)(*(int *)(iVar1 + 0xa8) + 0x90);
  if (((iVar7 == 3) || (iVar7 == 1)) || (uVar4 = 6, (*(uint *)(iVar1 + 0x9c) & 8) != 0)) {
    uVar5 = FUN_00313098();
    if (*(uint *)(iVar1 + 0xcc) < uVar5) {
      puVar2 = *(undefined4 **)(iVar1 + 0xc0);
      puVar3 = (undefined4 *)*puVar2;
      while ((puVar3 != puVar2 && (lVar6 = FUN_0031cce8(puVar3 + -0x31,auStack_90), lVar6 != 0))) {
        puVar3 = (undefined4 *)*puVar3;
      }
      puVar2 = *(undefined4 **)(iVar1 + 0xc0);
      uStack_9c = uVar5;
      for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
        lVar6 = FUN_0031cd10(puVar3 + -0x31,auStack_a0);
        if (lVar6 == 0) {
          iVar7 = *(int *)(iVar1 + 0xd0);
          goto LAB_0031c0e8;
        }
      }
    }
    iVar7 = *(int *)(iVar1 + 0xd0);
LAB_0031c0e8:
    if (iVar7 == 0) {
      uVar4 = 4;
    }
    else {
      iVar7 = *(int *)(iVar1 + 0xa8);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0xac) != 0) {
        do {
          lVar6 = FUN_0031cde8(iVar7,iVar1 + 100);
          uVar5 = uVar5 + 1;
          if (lVar6 == 0) break;
          iVar7 = iVar7 + 0x130;
        } while (uVar5 < *(uint *)(iVar1 + 0xac));
      }
      iVar7 = *(int *)(iVar1 + 0xa8);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0xac) != 0) {
        do {
          lVar6 = FUN_0031ce30(iVar7,auStack_8c);
          uVar5 = uVar5 + 1;
          if (lVar6 == 0) break;
          iVar7 = iVar7 + 0x130;
        } while (uVar5 < *(uint *)(iVar1 + 0xac));
      }
      *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) & 0xfffffff7;
      uVar4 = 6;
    }
  }
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  return;
}


// ==== FUN_0031c1c8 @ 0031c1c8 ====

uint FUN_0031c1c8(int param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  puVar10 = &uStack_e0;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_3 + 0x1c);
  puVar2 = *(undefined8 **)(iVar6 + 0x14);
  uStack_e0 = *puVar2;
  uStack_d8 = puVar2[1];
  uStack_d0 = puVar2[2];
  uStack_c8 = *(undefined4 *)(puVar2 + 3);
  uStack_b0 = param_4;
  uStack_ac = param_5;
  iVar4 = FUN_0031deb8(0,0x409f20,0);
  iVar4 = *(int *)(iVar4 + 0x54);
  puVar12 = *(undefined4 **)(iVar4 + 4);
  do {
    uVar11 = 0;
    if (*(int *)(iVar4 + 8) != 0) {
      do {
        lVar8 = FUN_003150d0(*puVar12,&uStack_e0);
        uVar11 = uVar11 + 1;
        if (lVar8 != 0) goto LAB_0031c2b4;
        puVar12 = puVar12 + 1;
      } while (uVar11 < *(uint *)(iVar4 + 8));
    }
    cVar3 = uStack_d8._5_1_ + -1;
    uStack_d8._0_6_ = CONCAT15(cVar3,(undefined5)uStack_d8);
  } while (cVar3 != '\0');
  puVar10 = (undefined8 *)0x0;
LAB_0031c2b4:
  if (puVar10 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar14 = 1;
    if (*(short *)(iVar6 + 0x1c) == 1) {
      uStack_d8._0_6_ = CONCAT15(1,(undefined5)uStack_d8);
      uVar14 = (uint)*(byte *)(*(int *)(iVar6 + 0x14) + 0xd);
    }
    uVar15 = 0;
    uVar5 = FUN_00312c48(uVar14 * 0x130,0x30809);
    *(undefined4 *)(iVar1 + 0xa8) = uVar5;
    uVar9 = FUN_0031deb8(0,0x40a260,0);
    uStack_a8 = FUN_00311248(uVar9);
    uStack_bc = uStack_ac;
    uStack_c0 = uStack_b0;
    if (uVar14 == 0) {
      trap(7);
    }
    iVar4 = *(int *)(iVar1 + 0x44) / (int)uVar14;
    iVar13 = iVar4 * *(int *)(iVar1 + 0x4c);
    *(int *)(iVar1 + 0xb0) = iVar4;
    uStack_c8._0_2_ = CONCAT11(1,(undefined1)uStack_c8);
    uStack_d8 = CONCAT44(uStack_d8._4_4_,iVar13);
    *(uint *)(iVar1 + 0x58) = (uint)*(byte *)(*(int *)(iVar6 + 0x14) + 0xd);
    uVar5 = FUN_00314f08(&uStack_e0,iVar13);
    *(undefined4 *)(iVar1 + 0x60) = uVar5;
    iVar6 = FUN_00314f08(&uStack_e0,*(undefined4 *)(iVar1 + 0x44));
    *(int *)(iVar1 + 0x5c) = iVar6;
    if (uVar14 == 0) {
      trap(7);
    }
    *(int *)(iVar1 + 0xb4) = iVar6 / (int)uVar14;
    if (uVar14 == 0) {
LAB_0031c458:
      uVar11 = uVar14;
      if (uVar14 == 2) {
        FUN_00328180(0xbf800000,*(int *)(iVar1 + 0xa8) + 0x60);
        FUN_00328180(0x3f800000,*(int *)(iVar1 + 0xa8) + 400);
        *(undefined4 *)(iVar1 + 0xac) = 2;
      }
      else if (uVar14 == 1) {
        FUN_00328180(0,*(int *)(iVar1 + 0xa8) + 0x60);
        *(undefined4 *)(iVar1 + 0xac) = 1;
      }
      else {
        *(uint *)(iVar1 + 0xac) = uVar14;
      }
    }
    else {
      iVar4 = 0;
      iVar6 = *(int *)(iVar1 + 0xa8);
      while( true ) {
        iVar6 = iVar6 + iVar4;
        lVar8 = FUN_00328c08(param_2,&uStack_e0,&uStack_e0,*(undefined4 *)(param_3 + 0x34),iVar6);
        uVar11 = 0;
        if (lVar8 == 0) break;
        uVar11 = *(uint *)(iVar6 + 0x54);
        *(uint *)(iVar6 + 0x54) = uVar11 | 0x20;
        uVar7 = uVar11 & 0xffffffbf | 0x20;
        if (*(int *)(param_3 + 0x30) != 0) {
          uVar7 = uVar11 | 0x60;
        }
        *(uint *)(iVar6 + 0x54) = uVar7;
        iVar13 = iVar6 + 0x60;
        iStack_b8 = iVar13;
        lVar8 = FUN_00327f20(param_2,0,uStack_a8,0x31c4e8,&uStack_c0);
        if (lVar8 == 0) {
          return 0;
        }
        FUN_00328140(iVar13,iVar6);
        uVar15 = uVar15 + 1;
        iVar4 = iVar4 + 0x130;
        FUN_003281b0(0,iVar13);
        if (uVar14 <= uVar15) goto LAB_0031c458;
        iVar6 = *(int *)(iVar1 + 0xa8);
      }
    }
  }
  return uVar11;
}


// ==== FUN_0031c4e8 @ 0031c4e8 ====

int FUN_0031c4e8(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar2 = FUN_0031deb8(0,0x40a260,0);
  if (param_1 == lVar2) {
    iVar3 = param_2[2];
  }
  if (((code *)*param_2 != (code *)0x0) &&
     (iVar1 = (*(code *)*param_2)(param_1,param_2[1],param_3,param_4), iVar1 != 0)) {
    iVar3 = iVar1;
  }
  return iVar3;
}


// ==== FUN_0031c578 @ 0031c578 ====

void FUN_0031c578(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((code *)*param_2 == (code *)0x0) {
    iVar1 = FUN_0031deb8(0,0x40a260,0);
    if (*(int *)param_1 == iVar1) {
      memset(param_2[2],0xcd,0xd0);
    }
    else {
      FUN_0031e320(param_1,*param_2,param_2[1]);
    }
  }
  else {
    (*(code *)*param_2)(param_1,param_2[1]);
  }
  return;
}


// ==== FUN_0031c600 @ 0031c600 ====

void FUN_0031c600(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x78) = 3;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x50)) = 0;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x50) + 4) = 3;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x50) + 8) = 0;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x50) + 0xc) = 2;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x50) + 0x10) = 0;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x50) + 0x14) = 0;
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x4c));
  }
  return;
}


// ==== FUN_0031c6e0 @ 0031c6e0 ====

int FUN_0031c6e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xa8) + 0x90);
  iVar2 = *piVar1;
  if (iVar2 == 3) {
    iVar2 = *(int *)(param_1 + 100);
  }
  else if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 100);
  }
  else {
    iVar2 = piVar1[5];
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
    trap(7);
  }
  return iVar2 / *(int *)(param_1 + 0xb4);
}


// ==== FUN_0031c728 @ 0031c728 ====

int FUN_0031c728(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0xa8) + 0x90);
  iVar4 = *piVar2;
  uVar3 = *(uint *)(param_1 + 0x68);
  if (iVar4 == 3) {
    iVar4 = *(int *)(param_1 + 100);
  }
  else if (iVar4 == 1) {
    iVar4 = *(int *)(param_1 + 100);
  }
  else {
    iVar4 = piVar2[5];
  }
  uVar1 = iVar4 / *(int *)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0xb4) == 0) {
    trap(7);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    return *(int *)(param_1 + 0x4c);
  }
  if (uVar3 < uVar1) {
    return uVar1 - uVar3;
  }
  if (uVar1 < uVar3) {
    return uVar1 + (*(int *)(param_1 + 0x4c) - uVar3);
  }
  return 0;
}


// ==== FUN_0031c7c0 @ 0031c7c0 ====

void FUN_0031c7c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00312c48(*(int *)(param_1 + 0x4c) * 0x18,0x30809);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}


// ==== FUN_0031c800 @ 0031c800 ====

void FUN_0031c800(int param_1)

{
  FUN_00312c70(*(undefined4 *)(param_1 + 0x50));
  return;
}


// ==== FUN_0031c820 @ 0031c820 ====

uint FUN_0031c820(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0xa8) + 0x90);
  iVar4 = *piVar2;
  if (iVar4 == 3) {
    iVar4 = *(int *)(param_1 + 100);
  }
  else if (iVar4 == 1) {
    iVar4 = *(int *)(param_1 + 100);
  }
  else {
    iVar4 = piVar2[5];
  }
  uVar1 = iVar4 / *(int *)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0xb4) == 0) {
    trap(7);
  }
  uVar3 = *(uint *)(param_1 + 0x68);
  if (uVar1 <= uVar3) {
    if (uVar1 < uVar3) {
      if (uVar3 < *(uint *)(param_1 + 0x4c)) {
        iVar4 = uVar3 * 0x18;
        do {
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x50) + 0x14) = 0;
          iVar4 = iVar4 + 0x18;
        } while (uVar3 < *(uint *)(param_1 + 0x4c));
      }
      uVar3 = 0;
      if (uVar1 != 0) {
        iVar4 = 0;
        do {
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x50) + 0x14) = 0;
          iVar4 = iVar4 + 0x18;
        } while (uVar3 < uVar1);
      }
    }
    return uVar1;
  }
  iVar4 = uVar3 * 0x18;
  do {
    uVar3 = uVar3 + 1;
    *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x50) + 0x14) = 0;
    iVar4 = iVar4 + 0x18;
  } while (uVar3 < uVar1);
  return uVar1;
}


// ==== FUN_0031c918 @ 0031c918 ====

void FUN_0031c918(int param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  uVar1 = DAT_003cfe58;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x8c) = DAT_003cfe54;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x20;
  }
  return;
}


// ==== FUN_0031c960 @ 0031c960 ====

void FUN_0031c960(void)

{
  return;
}


// ==== FUN_0031c968 @ 0031c968 ====

uint FUN_0031c968(int param_1)

{
  return *(uint *)(param_1 + 0x9c) & 1;
}


// ==== FUN_0031c978 @ 0031c978 ====

bool FUN_0031c978(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  bVar2 = false;
  if (iVar1 == 0) {
    trap(7);
  }
  if (*(int *)(*(int *)(param_1 + 0xa0) * 0x18 + *(int *)(param_1 + 0x50) + 0x14) == 0) {
    bVar2 = *(int *)(((*(int *)(param_1 + 0xa0) + iVar1 + -1) % iVar1) * 0x18 +
                     *(int *)(param_1 + 0x50) + 0x14) == 0;
  }
  return bVar2;
}


// ==== FUN_0031c9d0 @ 0031c9d0 ====

bool FUN_0031c9d0(int param_1)

{
  if ((*(uint *)(param_1 + 0x9c) & 4) != 0) {
    return *(int *)(*(int *)(param_1 + 0xa4) * 0x18 + *(int *)(param_1 + 0x50) + 0x14) == 0;
  }
  return false;
}


// ==== FUN_0031ca08 @ 0031ca08 ====

void FUN_0031ca08(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined4 auStack_80 [4];
  
  auStack_80[0] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(iVar1 + 0xa8);
  iVar2 = **(int **)(iVar5 + 0x90);
  if ((iVar2 != 3) && (iVar2 != 1)) {
    *(int *)(iVar1 + 100) = (*(int **)(iVar5 + 0x90))[5];
    uVar4 = 0;
    if (*(int *)(iVar1 + 0xac) != 0) {
      do {
        lVar3 = FUN_0031ce30(iVar5,auStack_80);
        uVar4 = uVar4 + 1;
        if (lVar3 == 0) break;
        iVar5 = iVar5 + 0x130;
      } while (uVar4 < *(uint *)(iVar1 + 0xac));
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 4;
  return;
}


// ==== FUN_0031cac8 @ 0031cac8 ====

void FUN_0031cac8(int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined4 auStack_80 [4];
  
  uVar4 = 0;
  auStack_80[0] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 100) = 0;
  iVar3 = *(int *)(iVar1 + 0xa8);
  if (*(int *)(iVar1 + 0xac) != 0) {
    do {
      lVar2 = FUN_0031ce30(iVar3,auStack_80);
      uVar4 = uVar4 + 1;
      if (lVar2 == 0) break;
      iVar3 = iVar3 + 0x130;
    } while (uVar4 < *(uint *)(iVar1 + 0xac));
  }
  *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) | 8;
  *(undefined4 *)(param_1 + 0x68) = 8;
  return;
}


// ==== FUN_0031cb80 @ 0031cb80 ====

void FUN_0031cb80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar4 = 0;
  uStack_90 = param_2;
  uStack_8c = param_3;
  if (*(int *)(iVar1 + 0xac) != 0) {
    iVar5 = 0;
    iVar3 = *(int *)(iVar1 + 0xa8);
    while( true ) {
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + iVar5;
      iVar2 = iVar3 + 0x60;
      iVar5 = iVar5 + 0x130;
      **(undefined4 **)(iVar3 + 0x90) = 1;
      FUN_00328140(iVar2,0);
      iStack_88 = iVar2;
      FUN_003110b0(iVar2,0x31c578,&uStack_90);
      FUN_00328c50(iVar3);
      if (*(uint *)(iVar1 + 0xac) <= uVar4) break;
      iVar3 = *(int *)(iVar1 + 0xa8);
    }
  }
  FUN_00312c70(*(undefined4 *)(iVar1 + 0xa8));
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  return;
}


// ==== FUN_0031cc58 @ 0031cc58 ====

undefined4 FUN_0031cc58(int param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xac) != 0) {
    do {
      if ((*(uint *)(param_1 + 0x9c) & 0x20) == 0) {
        lVar1 = FUN_00324f98();
      }
      else {
        lVar1 = FUN_00316190(iVar2);
      }
      if (lVar1 != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x130;
    } while (uVar3 < *(uint *)(param_1 + 0xac));
  }
  return 0;
}


// ==== FUN_0031cce8 @ 0031cce8 ====

undefined8 FUN_0031cce8(undefined8 param_1,undefined4 *param_2)

{
  if (*(int *)((int)param_1 + 0x70) == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = 1;
  return param_1;
}


// ==== FUN_0031cd10 @ 0031cd10 ====

undefined8 FUN_0031cd10(undefined8 param_1,undefined4 *param_2)

{
  *(undefined4 *)((int)param_1 + 0xcc) = param_2[1];
  *(undefined4 *)((int)param_1 + 0xd0) = *param_2;
  return param_1;
}


// ==== FUN_0031cd28 @ 0031cd28 ====

void FUN_0031cd28(int param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xac) != 0) {
    do {
      lVar1 = (*param_2)(iVar3,param_3);
      uVar2 = uVar2 + 1;
      if (lVar1 == 0) {
        return;
      }
      iVar3 = iVar3 + 0x130;
    } while (uVar2 < *(uint *)(param_1 + 0xac));
  }
  return;
}


// ==== FUN_0031cde8 @ 0031cde8 ====

undefined8 FUN_0031cde8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  uVar1 = *param_2;
  *(ushort *)(iVar2 + 0xbc) = *(ushort *)(iVar2 + 0xbc) | 0x80;
  *(undefined4 *)(*(int *)(iVar2 + 0x90) + 0x18) = uVar1;
  FUN_00328108(iVar2 + 0x60,1);
  return param_1;
}


// ==== FUN_0031ce30 @ 0031ce30 ====

void FUN_0031ce30(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*param_2 != 0) {
    uVar1 = 2;
  }
  **(undefined4 **)(param_1 + 0x90) = uVar1;
  return;
}


// ==== FUN_0031ce58 @ 0031ce58 ====

void FUN_0031ce58(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_003cfe54 == 0) {
    DAT_003cfe58 = (undefined4)param_1;
    uVar1 = FUN_0036cd08(0,param_1,0);
    DAT_003cfe54 = (int)uVar1;
    FUN_003242b0(0,0,0,0x49,0,0,uVar1,DAT_003cfe58);
  }
  return;
}


// ==== FUN_0031cee0 @ 0031cee0 ====

undefined8 FUN_0031cee0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_2 != *(uint *)((int)param_1 + 0x84)) {
    param_2[2] = 0;
    uVar1 = *(uint *)((int)param_1 + 0x84);
    if (*param_2 < uVar1) {
      *param_2 = uVar1;
    }
  }
  return param_1;
}


// ==== FUN_0031cf10 @ 0031cf10 ====

undefined8 FUN_0031cf10(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0xdc) = param_2[2];
  *(undefined4 *)(iVar1 + 0xd8) = param_2[1];
  *(undefined4 *)(iVar1 + 0xd4) = *param_2;
  return param_1;
}


// ==== FUN_0031cfc8 @ 0031cfc8 ====

bool FUN_0031cfc8(void)

{
  long lVar1;
  
  lVar1 = FUN_003152c8(0x4586b8);
  return lVar1 != 0;
}


// ==== FUN_0031cff0 @ 0031cff0 ====

undefined8 FUN_0031cff0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  lVar1 = FUN_00312c48(*(undefined4 *)(iVar2 + 0x34),0x30807);
  *(int *)(iVar2 + 0x4c) = (int)lVar1;
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else if (*(int *)(iVar2 + 0x30) == 0) {
    *(undefined8 *)(iVar2 + 0x2c) = *(undefined8 *)(iVar2 + 0x10);
    *(undefined8 *)(iVar2 + 0x34) = *(undefined8 *)(iVar2 + 0x18);
    *(undefined8 *)(iVar2 + 0x3c) = *(undefined8 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x28);
  }
  return param_1;
}


// ==== FUN_0031d080 @ 0031d080 ====

void FUN_0031d080(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00312c70();
  }
  return;
}


// ==== FUN_0031d0a8 @ 0031d0a8 ====

undefined8 FUN_0031d0a8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  memcpy(*(int *)((int)param_1 + 0x4c) + param_2,param_3,param_4);
  return param_1;
}


// ==== FUN_0031d0e0 @ 0031d0e0 ====

undefined8 FUN_0031d0e0(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  memcpy(param_4,*(int *)((int)param_1 + 0x4c) + param_3,*(undefined4 *)(param_2 + 8));
  return param_1;
}


// ==== FUN_0031d130 @ 0031d130 ====

void FUN_0031d130(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    FUN_00312c70(param_1[4]);
  }
  TerminateThread(*param_1);
  DeleteThread(*param_1);
  return;
}


// ==== FUN_0031d178 @ 0031d178 ====

undefined8 FUN_0031d178(undefined8 param_1,undefined4 param_2)

{
  long in_v1;
  
  if (iGpffff8a24 == 2) {
    in_v1 = FUN_0036d518();
  }
  *(undefined4 *)param_1 = param_2;
  if ((iGpffff8a24 == 2) && (in_v1 == 1)) {
    FUN_0036d568();
  }
  return param_1;
}


// ==== FUN_0031d1f0 @ 0031d1f0 ====

int FUN_0031d1f0(int *param_1,int param_2)

{
  int iVar1;
  long in_v1;
  
  if (iGpffff8a24 == 2) {
    in_v1 = FUN_0036d518();
  }
  iVar1 = *param_1;
  if ((iGpffff8a24 == 2) && (in_v1 == 1)) {
    FUN_0036d568();
  }
  return iVar1 - param_2;
}


// ==== FUN_0031d268 @ 0031d268 ====

undefined8 FUN_0031d268(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_3c = param_3;
  uStack_38 = param_2;
  lVar1 = CreateSema(auStack_40);
  *(undefined4 *)param_1 = (int)lVar1;
  uVar2 = 0;
  if (lVar1 != -1) {
    uVar2 = param_1;
  }
  return uVar2;
}


// ==== FUN_0031d2a8 @ 0031d2a8 ====

uint FUN_0031d2a8(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (iGpffff8a24 == 2) {
    uVar1 = PollSema(*param_1);
    uVar1 = ~uVar1 >> 0x1f;
  }
  return uVar1;
}


// ==== FUN_0031d2e0 @ 0031d2e0 ====

undefined8 FUN_0031d2e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auStack_80 [4];
  code *pcStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  
  puVar2 = (undefined4 *)param_1;
  iStack_78 = puVar2[4];
  if (iStack_78 == 0) {
    iStack_78 = FUN_00312c48(param_4,0x30800);
    puVar2[3] = 0;
    puVar2[4] = iStack_78;
  }
  else {
    puVar2[3] = 1;
  }
  puStack_70 = &_mips_gp0_value;
  pcStack_7c = FUN_0031d400;
  uStack_74 = (undefined4)param_4;
  if (iStack_78 == 0) {
    param_1 = 0;
  }
  else {
    uStack_6c = param_3;
    lVar1 = CreateThread(auStack_80);
    puVar2[1] = param_2;
    *puVar2 = (int)lVar1;
    if ((lVar1 < 1) && (param_1 = 0, puVar2[3] != 0)) {
      FUN_00312c70(puVar2[4]);
      param_1 = 0;
    }
  }
  return param_1;
}


// ==== FUN_0031d3c0 @ 0031d3c0 ====

undefined8 FUN_0031d3c0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  ((undefined4 *)param_1)[2] = param_2;
  lVar1 = FUN_00368738(*(undefined4 *)param_1,param_1);
  if (lVar1 == -1) {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_0031d400 @ 0031d400 ====

void FUN_0031d400(int param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
  if (lVar1 == 0) {
    ExitDeleteThread();
  }
  else {
    if (iGpffff8a24 == 2) {
      SignalSema(*(undefined4 *)lVar1);
    }
    SleepThread();
  }
  return;
}


// ==== FUN_0031d460 @ 0031d460 ====

undefined4 FUN_0031d460(void)

{
  FUN_0031d4a0();
  return 1;
}


// ==== FUN_0031d480 @ 0031d480 ====

void FUN_0031d480(void)

{
  FUN_0031d4c8();
  return;
}


// ==== FUN_0031d4a0 @ 0031d4a0 ====

void FUN_0031d4a0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_0031d510();
  uGpffff8fd8 = uVar1 & 0xffffffff;
  return;
}


