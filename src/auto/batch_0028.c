// ==== FUN_00274f70 @ 00274f70 ====

int FUN_00274f70(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
}


// ==== FUN_00274f80 @ 00274f80 ====

uint FUN_00274f80(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0x14) & -*(int *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0xc) < uVar1 + param_2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return 0;
  }
  *(uint *)(param_1 + 0x10) = uVar1 + param_2;
  *(uint *)(param_1 + 0x18) = uVar1;
  return uVar1;
}


// ==== FUN_00274fc8 @ 00274fc8 ====

void FUN_00274fc8(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== FUN_00274fd8 @ 00274fd8 ====

bool FUN_00274fd8(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(uint *)(param_1 + 8) <= param_2) {
    bVar1 = param_2 < *(uint *)(param_1 + 0xc);
  }
  return bVar1;
}


// ==== FUN_00275000 @ 00275000 ====

void FUN_00275000(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = (int)param_2;
  param_1[1] = (int)param_3;
  FUN_00352f30(param_1 + 2,param_2,param_3,0,0,0,0);
  FUN_00353118(param_1 + 2,2,0);
  return;
}


// ==== FUN_00275068 @ 00275068 ====

void FUN_00275068(int param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00354190(param_1 + 8,param_2,param_3,0,0);
  return;
}


// ==== FUN_00275090 @ 00275090 ====

void FUN_00275090(int param_1)

{
  FUN_00353f50(param_1 + 8);
  return;
}


// ==== FUN_002750b8 @ 002750b8 ====

int * FUN_002750b8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8) + -1;
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar2 = iVar4;
    do {
      iVar3 = iVar5 + iVar2 / 2;
      piVar1 = *(int **)(iVar3 * 4 + *(int *)(param_1 + 0xc));
      iVar2 = *piVar1;
      if (param_2 < iVar2) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar5 = iVar3 + 1;
        if (param_2 <= iVar2) {
          return piVar1 + 1;
        }
      }
      iVar2 = iVar4 - iVar5;
    } while (iVar5 <= iVar4);
  }
  return (int *)0x0;
}


// ==== FUN_00275128 @ 00275128 ====
// GLOBAL UNK_00400690 undefined

void FUN_00275128(ushort *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*param_1 == 0) {
LAB_00275250:
    *param_2 = 0;
  }
  else {
    if (1 < param_3) {
      uVar2 = *param_1;
      do {
        uVar3 = (uint)uVar2;
        param_1 = param_1 + 1;
        if (uVar3 < 0x80) {
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
          if (0x7ff < uVar3) {
            if (uVar3 < 0x10000) {
              uVar4 = 3;
            }
            else {
              uVar4 = 4;
              if (0x1fffff < uVar3) {
                uVar4 = 0;
              }
            }
          }
        }
        if (param_3 <= (int)uVar4) {
          return;
        }
        param_2 = param_2 + uVar4;
        if (uVar4 == 2) {
LAB_0027520c:
          param_2 = param_2 + -1;
          bVar1 = (byte)uVar3;
          uVar3 = uVar3 >> 6;
          *param_2 = bVar1 & 0xbf | 0x80;
LAB_00275224:
          param_2 = param_2 + -1;
          *param_2 = (&UNK_00400690)[uVar4] | (byte)uVar3;
          uVar2 = *param_1;
        }
        else {
          if (2 < uVar4) {
            if (uVar4 != 3) {
              if (uVar4 != 4) {
                uVar2 = *param_1;
                goto LAB_00275238;
              }
              param_2 = param_2 + -1;
              uVar3 = (uint)(uVar2 >> 6);
              *param_2 = (byte)uVar2 & 0xbf | 0x80;
            }
            param_2 = param_2 + -1;
            bVar1 = (byte)uVar3;
            uVar3 = uVar3 >> 6;
            *param_2 = bVar1 & 0xbf | 0x80;
            goto LAB_0027520c;
          }
          if (uVar4 == 1) goto LAB_00275224;
          uVar2 = *param_1;
        }
LAB_00275238:
        param_3 = param_3 - uVar4;
        param_2 = param_2 + uVar4;
        if ((uVar2 == 0) || (param_3 < 2)) goto LAB_00275250;
        uVar2 = *param_1;
      } while( true );
    }
    *param_2 = 0;
  }
  return;
}


// ==== FUN_00275260 @ 00275260 ====
// GLOBAL DAT_00400578 undefined
// GLOBAL DAT_00400678 undefined

void FUN_00275260(byte *param_1,short *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  if ((*param_1 != 0) && (1 < param_3)) {
    bVar1 = *param_1;
    do {
      uVar2 = (uint)(byte)(&DAT_00400578)[bVar1];
      sVar4 = 0;
      sVar3 = 0;
      if (uVar2 == 1) {
LAB_002752e4:
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        sVar4 = (sVar4 + (ushort)bVar1) * 0x40;
LAB_002752f4:
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        sVar3 = sVar4 + (ushort)bVar1;
      }
      else {
        if (1 < (byte)(&DAT_00400578)[bVar1]) {
          if (uVar2 == 2) {
            bVar1 = *param_1;
          }
          else {
            sVar3 = sVar4;
            if (uVar2 != 3) goto LAB_00275308;
            param_1 = param_1 + 1;
            bVar1 = *param_1;
          }
          param_1 = param_1 + 1;
          sVar4 = (ushort)bVar1 << 6;
          goto LAB_002752e4;
        }
        if (uVar2 == 0) goto LAB_002752f4;
      }
LAB_00275308:
      param_3 = param_3 + -1;
      *param_2 = sVar3 - (short)*(undefined4 *)(&DAT_00400678 + uVar2 * 4);
      param_2 = param_2 + 1;
      if ((*param_1 == 0) || (param_3 < 2)) break;
      bVar1 = *param_1;
    } while( true );
  }
  *param_2 = 0;
  return;
}


// ==== FUN_00275340 @ 00275340 ====

int FUN_00275340(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    sVar1 = *param_1;
  }
  return iVar2;
}


// ==== FUN_00275370 @ 00275370 ====

short * FUN_00275370(short *param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  while( true ) {
    *param_1 = sVar1;
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    if (sVar1 == 0) break;
    param_1 = param_1 + 1;
    sVar1 = *param_2;
  }
  return param_1;
}


// ==== FUN_00275398 @ 00275398 ====

short * FUN_00275398(short *param_1,int param_2,short *param_3)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1 + param_2 + -1;
  *param_1 = *param_3;
  while( true ) {
    if (psVar2 <= param_1) {
      *psVar2 = 0;
      return psVar2;
    }
    sVar1 = *param_3;
    param_3 = param_3 + 1;
    if (sVar1 == 0) break;
    param_1 = param_1 + 1;
    *param_1 = *param_3;
  }
  return param_1;
}


// ==== FUN_002753f0 @ 002753f0 ====

short * FUN_002753f0(short *param_1,short *param_2)

{
  short sVar1;
  
  if (*param_1 == 0) {
    sVar1 = *param_2;
  }
  else {
    do {
      param_1 = param_1 + 1;
    } while (*param_1 != 0);
    sVar1 = *param_2;
  }
  while( true ) {
    *param_1 = sVar1;
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    if (sVar1 == 0) break;
    param_1 = param_1 + 1;
    sVar1 = *param_2;
  }
  return param_1;
}


// ==== FUN_00275448 @ 00275448 ====
// GLOBAL null short
// GLOBAL null short

short * FUN_00275448(short *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short asStack_20 [16];
  int iVar8;
  
  if (param_2 < 0) {
    param_2 = -param_2;
    sVar2 = sGpffff8690;
  }
  else {
    sVar2 = sGpffff868e;
    if (param_4 != 1) goto LAB_00275478;
  }
  *param_1 = sVar2;
  param_1 = param_1 + 1;
LAB_00275478:
  iVar4 = param_2 / 10;
  asStack_20[0] = (short)param_2 + (short)iVar4 * -10 + 0x30;
  iVar7 = 0;
  iVar6 = 0;
  if (iVar4 == 0) {
    iVar7 = 1;
    iVar6 = 1;
  }
  else {
    do {
      iVar5 = iVar6;
      iVar8 = iVar7;
      iVar7 = iVar8 + 1;
      iVar6 = iVar5 + 1;
      if (0xb < iVar7) goto joined_r0x00275504;
      iVar1 = iVar4 / 10;
      asStack_20[iVar6] = (short)iVar4 + (short)iVar1 * -10 + 0x30;
      iVar4 = iVar1;
    } while (iVar1 != 0);
    iVar7 = iVar8 + 2;
    iVar6 = iVar5 + 2;
  }
joined_r0x00275504:
  for (; iVar7 < param_3; param_3 = param_3 + -1) {
    *param_1 = 0x30;
    param_1 = param_1 + 1;
  }
  if (0 < iVar6) {
    psVar3 = asStack_20 + iVar6;
    do {
      psVar3 = psVar3 + -1;
      iVar6 = iVar6 + -1;
      *param_1 = *psVar3;
      param_1 = param_1 + 1;
    } while (0 < iVar6);
  }
  *param_1 = 0;
  return param_1;
}


// ==== FUN_00275560 @ 00275560 ====
// GLOBAL null short
// GLOBAL null short
// GLOBAL null short

short * FUN_00275560(short *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short asStack_20 [16];
  
  if (param_2 < 0) {
    param_2 = -param_2;
    sVar2 = sGpffff8690;
  }
  else {
    sVar2 = sGpffff868e;
    if (param_4 != 1) goto LAB_00275590;
  }
  *param_1 = sVar2;
  param_1 = param_1 + 1;
LAB_00275590:
  iVar6 = param_2 / 10;
  iVar9 = 0;
  iVar5 = 0;
  asStack_20[0] = (short)param_2 + (short)iVar6 * -10 + 0x30;
  iVar8 = 0;
  if (iVar6 == 0) {
    iVar8 = 1;
    iVar5 = 1;
  }
  else {
    do {
      iVar7 = iVar8;
      iVar4 = iVar5;
      if ((sGpffff868a != 0) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
        iVar9 = 0;
        asStack_20[iVar5 + 1] = sGpffff868a;
        iVar4 = iVar5 + 1;
      }
      iVar8 = iVar7 + 1;
      iVar5 = iVar4 + 1;
      if (0xb < iVar8) goto joined_r0x0027564c;
      iVar1 = iVar6 / 10;
      asStack_20[iVar5] = (short)iVar6 + (short)iVar1 * -10 + 0x30;
      iVar6 = iVar1;
    } while (iVar1 != 0);
    iVar8 = iVar7 + 2;
    iVar5 = iVar4 + 2;
  }
joined_r0x0027564c:
  for (; iVar8 < param_3; param_3 = param_3 + -1) {
    *param_1 = 0x30;
    param_1 = param_1 + 1;
  }
  if (0 < iVar5) {
    psVar3 = asStack_20 + iVar5;
    do {
      psVar3 = psVar3 + -1;
      iVar5 = iVar5 + -1;
      *param_1 = *psVar3;
      param_1 = param_1 + 1;
    } while (0 < iVar5);
  }
  *param_1 = 0;
  return param_1;
}


// ==== FUN_002756a8 @ 002756a8 ====
// GLOBAL null undefined2
// GLOBAL null undefined2

void FUN_002756a8(undefined2 param_1,undefined2 param_2)

{
  uGpffff868a = param_1;
  uGpffff868c = param_2;
  return;
}


// ==== FUN_002756c0 @ 002756c0 ====

int FUN_002756c0(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)*param_2;
  puVar4 = (ushort *)*param_1;
  puVar2 = (ushort *)*param_2;
  while( true ) {
    while( true ) {
      if (uVar1 == 0) {
        *puVar4 = 0;
        *param_1 = puVar4;
        *param_2 = puVar2;
        return 0;
      }
      if (uVar1 == 0x25) break;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
      uVar1 = puVar2[1];
      puVar2 = puVar2 + 1;
    }
    puVar3 = puVar2 + 1;
    uVar5 = (uint)*puVar3;
    if (uVar5 == 0x25) {
      *puVar4 = *puVar3;
      puVar3 = puVar2 + 2;
      puVar4 = puVar4 + 1;
    }
    if (uVar5 - 0x31 < 9) break;
    uVar1 = *puVar3;
    puVar2 = puVar3;
  }
  *param_1 = puVar4;
  *param_2 = puVar3 + 1;
  return uVar5 - 0x30;
}


// ==== FUN_00275748 @ 00275748 ====

undefined2 *
FUN_00275748(undefined2 *param_1,undefined4 param_2,long param_3,long param_4,long param_5,
            long param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [2];
  
  puStack_80 = param_1;
  uStack_7c = param_2;
  auStack_78[0] = param_7;
  do {
    uVar2 = FUN_002756c0(&puStack_80,&uStack_7c,auStack_78);
    switch(uVar2) {
    case 0:
      return puStack_80;
    case 1:
      if (param_3 == 0) goto switchD_002757c0_default;
      FUN_00275370(puStack_80,param_3);
      break;
    case 2:
      if (param_4 == 0) goto switchD_002757c0_default;
      FUN_00275370(puStack_80,param_4);
      break;
    case 3:
      if (param_5 == 0) goto switchD_002757c0_default;
      FUN_00275370(puStack_80,param_5);
      break;
    case 4:
      if (param_6 == 0) goto switchD_002757c0_default;
      FUN_00275370(puStack_80,param_6);
      break;
    default:
switchD_002757c0_default:
      *puStack_80 = 0;
      return puStack_80;
    }
    iVar1 = FUN_00275340(puStack_80);
    puStack_80 = puStack_80 + iVar1;
  } while( true );
}


// ==== FUN_00275878 @ 00275878 ====

void FUN_00275878(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 0x20);
  do {
    uVar3 = uVar3 + 1;
    *piVar2 = *piVar2 + param_1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 0x80);
  iVar1 = *(int *)(param_1 + 4) + param_1;
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = iVar1;
    FUN_0028eed8(iVar1);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
  return;
}


// ==== FUN_002758e0 @ 002758e0 ====

float FUN_002758e0(int param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = *param_2;
  iVar4 = *(int *)(param_1 + (uVar2 & 0x7f) * 4 + 0x20);
  if (*(ushort *)(iVar4 + 0x1c) != uVar2) {
    iVar3 = iVar4;
    do {
      iVar4 = iVar3;
      if (iVar3 == *(int *)(param_1 + 0x1c)) break;
      iVar4 = iVar3 + 0x28;
      puVar1 = (ushort *)(iVar3 + 0x44);
      iVar3 = iVar4;
    } while (*puVar1 != uVar2);
  }
  param_2 = param_2 + 1;
  fVar6 = -*(float *)(iVar4 + 0x10);
  if (*param_2 != 0) {
    do {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      iVar3 = *(int *)(param_1 + 0x20 + (uVar2 & 0x7f) * 4);
      fVar6 = fVar6 + *(float *)(iVar4 + 0x18);
      iVar4 = iVar3;
      if (*(ushort *)(iVar3 + 0x1c) == uVar2) {
LAB_00275998:
        uVar2 = *param_2;
      }
      else {
        do {
          iVar4 = iVar3;
          if (iVar3 == *(int *)(param_1 + 0x1c)) goto LAB_00275998;
          iVar4 = iVar3 + 0x28;
          puVar1 = (ushort *)(iVar3 + 0x44);
          iVar3 = iVar4;
        } while (*puVar1 != uVar2);
        uVar2 = *param_2;
      }
    } while (uVar2 != 0);
  }
  if (*(int *)(iVar4 + 0x20) == 0) {
    fVar5 = *(float *)(iVar4 + 0x10) + *(float *)(iVar4 + 8);
  }
  else {
    fVar5 = *(float *)(iVar4 + 0x10) + *(float *)(iVar4 + 8) * *(float *)(param_1 + 0x10);
  }
  return (fVar6 + fVar5) * *(float *)(param_1 + 8);
}


// ==== FUN_002759e0 @ 002759e0 ====

float FUN_002759e0(int param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (*param_2 == 0) {
    return 0.0;
  }
  uVar2 = *param_2;
  param_2 = param_2 + 1;
  iVar4 = *(int *)(param_1 + 0x20 + (uVar2 & 0x7f) * 4);
  if (*(ushort *)(iVar4 + 0x1c) != uVar2) {
    iVar3 = iVar4;
    do {
      iVar4 = iVar3;
      if (iVar3 == *(int *)(param_1 + 0x1c)) break;
      iVar4 = iVar3 + 0x28;
      puVar1 = (ushort *)(iVar3 + 0x44);
      iVar3 = iVar4;
    } while (*puVar1 != uVar2);
  }
  uVar2 = *param_2;
  fVar5 = *(float *)(iVar4 + 0x18);
  do {
    if (uVar2 == 0) {
      return fVar5 * *(float *)(param_1 + 8);
    }
    uVar2 = *param_2;
    iVar4 = *(int *)(param_1 + 0x20 + (uVar2 & 0x7f) * 4);
    if (*(ushort *)(iVar4 + 0x1c) == uVar2) {
LAB_00275ab0:
      fVar6 = *(float *)(iVar4 + 0x18);
    }
    else {
      iVar3 = iVar4;
      do {
        iVar4 = iVar3;
        if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_00275ab0;
        iVar3 = iVar4 + 0x28;
      } while (*(ushort *)(iVar4 + 0x44) != uVar2);
      fVar6 = *(float *)(iVar4 + 0x40);
    }
    param_2 = param_2 + 1;
    uVar2 = *param_2;
    fVar5 = fVar5 + fVar6;
  } while( true );
}


// ==== FUN_00275ad0 @ 00275ad0 ====

float FUN_00275ad0(float param_1,int param_2,ushort *param_3,undefined4 *param_4,undefined4 *param_5
                  ,long param_6)

{
  ushort *puVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  bVar2 = false;
  uVar3 = *param_3;
  param_1 = param_1 / *(float *)(param_2 + 8);
  while (((uVar3 == 0x20 || (uVar3 == 10)) || (uVar3 == 0xd))) {
    param_3 = param_3 + 1;
    uVar3 = *param_3;
    if (uVar3 == 0) {
      *param_4 = param_3;
LAB_00275b30:
      *param_5 = param_3;
      return 0.0;
    }
  }
  *param_4 = param_3;
  if (*param_3 == 0) goto LAB_00275b30;
  uVar3 = *param_3;
  iVar5 = *(int *)(param_2 + 0x20 + (uVar3 & 0x7f) * 4);
  param_3 = param_3 + 1;
  if (*(ushort *)(iVar5 + 0x1c) != uVar3) {
    do {
      if (iVar5 == *(int *)(param_2 + 0x1c)) break;
      iVar4 = iVar5 + 0x28;
      puVar1 = (ushort *)(iVar5 + 0x44);
      iVar5 = iVar4;
    } while (*puVar1 != uVar3);
  }
  fVar11 = -*(float *)(iVar5 + 0x10);
  if (*(int *)(iVar5 + 0x20) == 0) {
    fVar10 = *(float *)(iVar5 + 8);
  }
  else {
    fVar10 = *(float *)(iVar5 + 8) * *(float *)(param_2 + 0x10);
  }
  uVar3 = *param_3;
  fVar8 = 0.0;
  puVar1 = (ushort *)0x0;
  while (uVar3 != 0) {
    if (uVar3 == 10) {
      fVar9 = *(float *)(iVar5 + 0x10);
LAB_00275be4:
      fVar10 = fVar11 + fVar9 + fVar10;
      if (fVar10 < param_1) {
        *param_5 = param_3;
      }
      else {
        if (bVar2) {
          *param_5 = puVar1;
          goto LAB_00275c44;
        }
        *param_5 = param_3;
      }
      return fVar10 * *(float *)(param_2 + 8);
    }
    if (uVar3 == 0xd) {
      fVar9 = *(float *)(iVar5 + 0x10);
      goto LAB_00275be4;
    }
    fVar9 = fVar8;
    puVar7 = puVar1;
    if (uVar3 == 0x20) {
      fVar9 = fVar11 + *(float *)(iVar5 + 0x10) + fVar10;
      bVar2 = true;
      puVar7 = param_3;
      if (param_1 <= fVar9) {
        if (puVar1 == (ushort *)0x0) goto LAB_00275d24;
        *param_5 = puVar1;
        goto LAB_00275c44;
      }
    }
    if (param_6 == 0) {
      uVar6 = (uint)*param_3;
    }
    else if (bVar2) {
      uVar6 = (uint)*param_3;
    }
    else {
      fVar10 = fVar11 + *(float *)(iVar5 + 0x10) + fVar10;
      if (fVar10 < param_1) {
        fVar9 = fVar10;
      }
      uVar6 = (uint)*param_3;
    }
    iVar4 = *(int *)(param_2 + 0x20 + (uVar6 & 0x7f) * 4);
    fVar11 = fVar11 + *(float *)(iVar5 + 0x18);
    iVar5 = iVar4;
    if (*(ushort *)(iVar4 + 0x1c) != uVar6) {
      do {
        iVar5 = iVar4;
        if (iVar4 == *(int *)(param_2 + 0x1c)) break;
        iVar5 = iVar4 + 0x28;
        puVar1 = (ushort *)(iVar4 + 0x44);
        iVar4 = iVar5;
      } while (*puVar1 != uVar6);
    }
    if (*(int *)(iVar5 + 0x20) == 0) {
      fVar10 = *(float *)(iVar5 + 8);
    }
    else {
      fVar10 = *(float *)(iVar5 + 8) * *(float *)(param_2 + 0x10);
    }
    if (((param_6 != 0) && (!bVar2)) && (param_1 <= fVar11)) {
      fVar9 = *(float *)(iVar5 + 0x18);
      fVar8 = *(float *)(iVar5 + 0x10);
      *param_5 = param_3 + -1;
      return ((fVar11 - fVar9) + fVar8 + fVar10) * *(float *)(param_2 + 8);
    }
    param_3 = param_3 + 1;
    fVar8 = fVar9;
    puVar1 = puVar7;
    uVar3 = *param_3;
  }
  if (puVar1 == (ushort *)0x0) {
LAB_00275d24:
    if (param_6 == 0) {
      *param_5 = param_3;
      goto LAB_00275da4;
    }
    fVar9 = *(float *)(iVar5 + 0x10);
  }
  else {
    fVar9 = *(float *)(iVar5 + 0x10);
  }
  if (fVar11 + fVar9 + fVar10 < param_1) {
    *param_5 = param_3;
LAB_00275da4:
    return (fVar11 + *(float *)(iVar5 + 0x10) + fVar10) * *(float *)(param_2 + 8);
  }
  if (puVar1 == (ushort *)0x0) {
    if (param_6 == 0) {
      fVar11 = *(float *)(param_2 + 8);
      goto LAB_00275c48;
    }
    if ((*param_3 == 0) || ((ushort *)*param_4 == param_3 + -1)) {
      *param_5 = param_3;
    }
    else {
      *param_5 = param_3 + -1;
    }
  }
  else {
    *param_5 = puVar1;
  }
LAB_00275c44:
  fVar11 = *(float *)(param_2 + 8);
LAB_00275c48:
  return fVar8 * fVar11;
}


// ==== FUN_00275dc0 @ 00275dc0 ====

void FUN_00275dc0(float param_1,float param_2,float param_3,int param_4,ushort *param_5,
                 undefined8 param_6)

{
  bool bVar1;
  ushort *puVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  long lVar4;
  undefined8 in_a0_udw;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined8 in_a2_udw;
  float *pfVar7;
  ushort *puVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  float fStack_80;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  
  auVar9._8_8_ = in_a2_udw;
  auVar9._0_8_ = param_6;
  auVar9 = _por(in_zero_qw,auVar9);
  iVar3 = 0;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  iVar3 = 0;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  uStack_c0 = 0;
  uStack_bc = 0;
  uVar6 = (uint)*param_5;
  if (*param_5 != 0) {
    iVar3 = *(int *)(param_4 + 0x20 + (uVar6 & 0x7f) * 4);
    auVar5._0_8_ = (long)iVar3;
    auVar5._8_8_ = in_a0_udw;
    if ((*(ushort *)(iVar3 + 0x1c) != uVar6) && (auVar5._0_8_ != *(int *)(param_4 + 0x1c))) {
      auVar5._0_8_ = (long)(iVar3 + 0x28);
      while ((*(ushort *)(auVar5._0_4_ + 0x1c) != uVar6 &&
             (auVar5._0_8_ != (long)*(int *)(param_4 + 0x1c)))) {
        auVar5._0_8_ = (long)(auVar5._0_4_ + 0x28);
      }
    }
    lVar4 = auVar5._0_8_;
    uStack_a0._0_4_ = (float)*(undefined8 *)(param_4 + 8);
    uStack_a0._4_4_ = (float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
    fVar10 = (float)uStack_a0 * param_3;
    param_3 = uStack_a0._4_4_ * param_3;
    fStack_f0 = param_1 - *(float *)(auVar5._0_4_ + 0x10) * fVar10;
    puVar2 = param_5 + 1;
    while( true ) {
      puVar8 = puVar2;
      pfVar7 = (float *)lVar4;
      if (0.0 <= *pfVar7) {
        fStack_80 = fStack_f0 + pfVar7[4] * fVar10;
        fStack_7c = param_2 + pfVar7[5] * param_3;
        uStack_e0 = CONCAT44(fStack_7c,fStack_80);
        uStack_d0 = *(undefined8 *)pfVar7;
        if (pfVar7[8] == 0.0) {
          uStack_90 = CONCAT44(fStack_7c + param_3 * pfVar7[3],fStack_80 + fVar10 * pfVar7[2]);
          uStack_d8 = uStack_90;
        }
        else {
          fVar11 = pfVar7[3] * *(float *)(param_4 + 0x10);
          fVar12 = pfVar7[2] * *(float *)(param_4 + 0x10);
          uStack_90 = CONCAT44(fVar11,fVar12);
          fStack_70 = fStack_80 + fVar10 * fVar12;
          fStack_6c = fStack_7c + param_3 * fVar11;
          uStack_d8 = CONCAT44(fStack_6c,fStack_70);
        }
        uStack_a0 = CONCAT44(pfVar7[1] + pfVar7[3],*pfVar7 + pfVar7[2]);
        uStack_c8 = uStack_a0;
        uStack_b0 = uStack_a0;
        FUN_002667e8(*(undefined4 *)(param_4 + 4));
        auVar5 = _por(in_zero_qw,auVar9);
        FUN_00266d28(auVar5._0_8_,&uStack_c0,1,&uStack_e0,&uStack_d0);
      }
      if (*puVar8 == 0) break;
      fStack_f0 = fStack_f0 + pfVar7[6] * fVar10;
      uVar6 = (uint)*puVar8;
      iVar3 = *(int *)(param_4 + 0x20 + (uVar6 & 0x7f) * 4);
      auVar5._0_8_ = (long)iVar3;
      if (*(ushort *)(iVar3 + 0x1c) == uVar6) {
LAB_002760e8:
        lVar4 = auVar5._0_8_;
        puVar2 = puVar8 + 1;
      }
      else {
        if (auVar5._0_8_ == *(int *)(param_4 + 0x1c)) goto LAB_002760e8;
        auVar5._0_8_ = (long)(iVar3 + 0x28);
        while( true ) {
          lVar4 = auVar5._0_8_;
          puVar2 = puVar8 + 1;
          if (*(ushort *)(auVar5._0_4_ + 0x1c) == uVar6) break;
          if (lVar4 == *(int *)(param_4 + 0x1c)) goto LAB_002760e8;
          auVar5._0_8_ = (long)(auVar5._0_4_ + 0x28);
        }
      }
    }
  }
  return;
}


// ==== FUN_00276110 @ 00276110 ====

void FUN_00276110(float param_1,undefined4 param_2,float param_3,float param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a2_qw [16];
  undefined1 auVar1 [16];
  float fVar2;
  
  auVar1 = _por(in_zero_qw,in_a2_qw);
  fVar2 = (float)FUN_002758e0();
  auVar1 = _por(in_zero_qw,auVar1);
  FUN_00275dc0(param_1 - param_3 * fVar2 * param_4,param_2,param_3,param_5,param_6,auVar1._0_8_);
  return;
}


// ==== FUN_002761a0 @ 002761a0 ====

void FUN_002761a0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[3] = 0x3f800000;
  return;
}


// ==== FUN_002761e8 @ 002761e8 ====

int FUN_002761e8(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined8 uVar2;
  undefined1 in_a3_qw [16];
  undefined1 auVar3 [16];
  
  auVar3 = _por(in_zero_qw,in_a3_qw);
  iVar1 = FUN_002740e8(param_1 + 0x40);
  *(int *)(iVar1 + 0x50) = param_1;
  *(undefined8 *)(iVar1 + 8) = *param_2;
  uVar2 = *param_3;
  *(int *)(iVar1 + 0x18) = auVar3._0_4_;
  *(int *)(iVar1 + 0x1c) = auVar3._4_4_;
  *(int *)(iVar1 + 0x20) = auVar3._8_4_;
  *(int *)(iVar1 + 0x24) = auVar3._12_4_;
  *(undefined8 *)(iVar1 + 0x10) = uVar2;
  return iVar1 + 8;
}


// ==== FUN_00276258 @ 00276258 ====

void FUN_00276258(int param_1)

{
  FUN_002763b0();
  FUN_00274138(*(int *)(param_1 + 0x48) + 0x40,param_1 + -8);
  return;
}


// ==== FUN_00276290 @ 00276290 ====
// GLOBAL DAT_0043f8a0 float
// GLOBAL DAT_0043f8a4 float
// GLOBAL null char

void FUN_00276290(float *param_1,float *param_2)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uStack_50;
  
  *(ulong *)(param_1 + 8) =
       CONCAT44(param_1[1] * param_2[3] + param_2[1],*param_1 * param_2[2] + *param_2);
  uStack_50 = CONCAT44(param_1[3] * param_2[3],param_1[2] * param_2[2]);
  *(undefined8 *)(param_1 + 10) = uStack_50;
  if (cGpffff8692 != '\0') {
    param_1[10] = param_1[10] * DAT_0043f8a0;
    param_1[0xb] = param_1[0xb] * DAT_0043f8a4;
  }
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 4));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar2 = _vmul(auVar2,auVar3);
  puVar1 = (undefined4 *)param_1[0x11];
  auVar2 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar2;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    FUN_00276290(puVar1 + 2,param_1 + 8);
  }
  return;
}


// ==== FUN_002763b0 @ 002763b0 ====

void FUN_002763b0(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x44); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_002763b0(puVar1 + 2);
  }
  FUN_00274190(param_1 + 0x40);
  return;
}


// ==== FUN_00276410 @ 00276410 ====

void FUN_00276410(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_002763b0(*(undefined4 *)(iVar1 + 0x14));
  FUN_002761a0(*(undefined4 *)(iVar1 + 0x14));
  FUN_002761a0(*(int *)(iVar1 + 0x14) + 0x20);
  FUN_00274040(param_1);
  return;
}


// ==== FUN_00276458 @ 00276458 ====

void FUN_00276458(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x14);
  *(int *)(puVar1 + 4) = (int)*puVar1;
  *(int *)((int)puVar1 + 0x24) = (int)((ulong)*puVar1 >> 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((int)puVar1 + 0x2c) = *(undefined4 *)((int)puVar1 + 0xc);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((int)puVar1 + 0x34) = *(undefined4 *)((int)puVar1 + 0x14);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(puVar1 + 3);
  *(undefined4 *)((int)puVar1 + 0x3c) = *(undefined4 *)((int)puVar1 + 0x1c);
  piVar3 = *(int **)(*(int *)(param_1 + 0x14) + 0x44);
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x14);
    while( true ) {
      FUN_00276290(piVar3 + 2,iVar2 + 0x20);
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)0x0) break;
      iVar2 = *(int *)(param_1 + 0x14);
    }
  }
  return;
}


// ==== FUN_002764d0 @ 002764d0 ====

int FUN_002764d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_3 + 0x50;
  uVar1 = FUN_00274018(param_2,0x50,0x10);
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0x14) = (int)param_3;
  FUN_002761a0(param_3);
  FUN_002761a0(*(int *)(iVar2 + 0x14) + 0x20);
  FUN_002740d8(*(int *)(iVar2 + 0x14) + 0x40,param_1);
  *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x48) = 0;
  *(int *)(*(int *)(iVar2 + 0x14) + 0x4c) = iVar2;
  FUN_00273f30(param_1,param_2,0x50,0x10,*(undefined4 *)(iVar2 + 0x14),iVar3,uVar1);
  return (int)uVar1 + iVar3;
}


// ==== FUN_00276590 @ 00276590 ====

void FUN_00276590(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  
  *param_1 = *param_2;
  uVar1 = *param_3;
  *(undefined4 *)((int)param_1 + 0x3c) = param_5;
  param_1[1] = uVar1;
  *(int *)(param_1 + 2) = (int)param_4;
  *(int *)((int)param_1 + 0x14) = (int)((ulong)param_4 >> 0x20);
  *(undefined4 *)(param_1 + 3) = in_a3_udw;
  *(undefined4 *)((int)param_1 + 0x1c) = in_register_0000007c;
  return;
}


// ==== FUN_002765b0 @ 002765b0 ====

void FUN_002765b0(undefined8 *param_1,float *param_2,float *param_3)

{
  *param_1 = CONCAT44(param_2[1] - *(float *)((int)param_1 + 0xc) * param_3[1],
                      *param_2 - *(float *)(param_1 + 1) * *param_3);
  return;
}


// ==== FUN_00276610 @ 00276610 ====

void FUN_00276610(undefined8 param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5
                 )

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  undefined8 in_t0_udw;
  undefined8 auStack_40 [2];
  undefined8 uStack_30;
  float fStack_20;
  float fStack_1c;
  
  auVar1._8_8_ = in_t0_udw;
  auVar1._0_8_ = param_5;
  _por(in_zero_qw,auVar1);
  uStack_30 = CONCAT44(param_4[1] * param_3[1],*param_4 * *param_3);
  fStack_20 = *param_2 - *param_4 * *param_3;
  fStack_1c = param_2[1] - param_4[1] * param_3[1];
  auStack_40[0] = CONCAT44(fStack_1c,fStack_20);
  FUN_00276590(param_1,auStack_40);
  return;
}


// ==== FUN_00276698 @ 00276698 ====

void FUN_00276698(float *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 auStack_30 [2];
  float fStack_20;
  float fStack_1c;
  
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  fStack_20 = *param_1 + param_1[2];
  fStack_1c = param_1[1] + param_1[3];
  uStack_40 = *(undefined8 *)param_1;
  uStack_38 = CONCAT44(fStack_1c,fStack_20);
  auStack_30[0] = 0;
  FUN_00266f50(*(undefined8 *)(param_1 + 4),auStack_30,1,&uStack_40);
  return;
}


// ==== FUN_00276728 @ 00276728 ====

void FUN_00276728(undefined8 param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5
                 ,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,undefined4 param_9)

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined8 in_t0_udw;
  undefined8 auStack_40 [2];
  undefined8 uStack_30;
  float fStack_20;
  float fStack_1c;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x30) = param_6;
  *(undefined4 *)(iVar2 + 0x34) = param_9;
  auVar1._8_8_ = in_t0_udw;
  auVar1._0_8_ = param_5;
  _por(in_zero_qw,auVar1);
  *(undefined8 *)(iVar2 + 0x20) = *param_7;
  *(undefined8 *)(iVar2 + 0x28) = *param_8;
  uStack_30 = CONCAT44(param_4[1] * param_3[1],*param_4 * *param_3);
  fStack_20 = *param_2 - *param_4 * *param_3;
  fStack_1c = param_2[1] - param_4[1] * param_3[1];
  auStack_40[0] = CONCAT44(fStack_1c,fStack_20);
  FUN_00276590(param_1,auStack_40);
  return;
}


// ==== FUN_002768b0 @ 002768b0 ====
// GLOBAL DAT_00276980 undefined

void FUN_002768b0(undefined8 param_1,float *param_2,undefined8 param_3,float *param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined4 param_9)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 in_t0_udw;
  undefined8 auStack_40 [2];
  undefined8 uStack_30;
  float fStack_20;
  float fStack_1c;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x30) = param_6;
  *(undefined4 *)(iVar1 + 0x34) = param_9;
  auVar2._8_8_ = in_t0_udw;
  auVar2._0_8_ = param_5;
  auVar2 = _por(in_zero_qw,auVar2);
  *(undefined8 *)(iVar1 + 0x20) = *param_7;
  *(undefined8 *)(iVar1 + 0x28) = *param_8;
  fStack_20 = *(float *)param_3 * *param_4;
  fStack_1c = ((float *)param_3)[1] * param_4[1];
  uStack_30 = CONCAT44(fStack_1c,fStack_20);
  fStack_20 = *param_2 - fStack_20;
  fStack_1c = param_2[1] - fStack_1c;
  auStack_40[0] = CONCAT44(fStack_1c,fStack_20);
  FUN_00276590(param_1,auStack_40,param_3,auVar2._0_8_,&DAT_00276980,0x40,0x18);
  return;
}


// ==== FUN_00276960 @ 00276960 ====

void FUN_00276960(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  return;
}


// ==== FUN_00276da8 @ 00276da8 ====
// GLOBAL LAB_00276e68 undefined

void FUN_00276da8(undefined8 param_1,float *param_2,undefined8 param_3,float *param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined4 param_9)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 in_t0_udw;
  undefined8 auStack_40 [2];
  undefined8 uStack_30;
  float fStack_20;
  float fStack_1c;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x30) = param_6;
  *(undefined4 *)(iVar1 + 0x34) = param_9;
  auVar2._8_8_ = in_t0_udw;
  auVar2._0_8_ = param_5;
  auVar2 = _por(in_zero_qw,auVar2);
  *(undefined8 *)(iVar1 + 0x20) = *param_7;
  *(undefined8 *)(iVar1 + 0x28) = *param_8;
  fStack_20 = *(float *)param_3 * *param_4;
  fStack_1c = ((float *)param_3)[1] * param_4[1];
  uStack_30 = CONCAT44(fStack_1c,fStack_20);
  fStack_20 = *param_2 - fStack_20;
  fStack_1c = param_2[1] - fStack_1c;
  auStack_40[0] = CONCAT44(fStack_1c,fStack_20);
  FUN_00276590(param_1,auStack_40,param_3,auVar2._0_8_,&LAB_00276e68,0x40,0x18);
  return;
}


// ==== FUN_00277400 @ 00277400 ====

void FUN_00277400(float param_1,undefined8 param_2,float *param_3,float *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a3_qw [16];
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fStack_d0;
  float fStack_cc;
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  float fStack_a0;
  float fStack_9c;
  
  auVar2 = _por(in_zero_qw,in_a3_qw);
  fVar3 = (float)FUN_002758e0(param_5,param_6);
  fStack_d0 = fVar3 * param_1;
  iVar1 = (int)param_2;
  *(int *)(iVar1 + 0x20) = (int)param_5;
  *(int *)(iVar1 + 0x24) = (int)param_6;
  auVar2 = _por(in_zero_qw,auVar2);
  *(float *)(iVar1 + 0x28) = 1.0 / fVar3;
  uStack_b0 = CONCAT44(param_1 * param_4[1],fStack_d0 * *param_4);
  fStack_a0 = *param_3 - fStack_d0 * *param_4;
  fStack_9c = param_3[1] - param_1 * param_4[1];
  auStack_c0[0] = CONCAT44(fStack_9c,fStack_a0);
  fStack_cc = param_1;
  FUN_00276590(param_2,auStack_c0,&fStack_d0,auVar2._0_8_,param_7,0x40,0xc);
  return;
}


// ==== FUN_00277510 @ 00277510 ====

void FUN_00277510(void)

{
  FUN_00277400();
  return;
}


// ==== FUN_00277530 @ 00277530 ====

void FUN_00277530(int param_1)

{
  float *in_t2_lo;
  
  FUN_00277400();
  *(ulong *)(param_1 + 0x30) =
       CONCAT44(in_t2_lo[1] / *(float *)(param_1 + 0xc),*in_t2_lo / *(float *)(param_1 + 8));
  return;
}


// ==== FUN_002775a0 @ 002775a0 ====
// GLOBAL DAT_0048ffc0 undefined8
// GLOBAL DAT_00490fa0 undefined8

int FUN_002775a0(float *param_1,int *param_2)

{
  float *pfVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_80;
  undefined8 uStack_60;
  undefined8 uStack_40;
  undefined8 uStack_30;
  
  uVar2 = *(ushort *)param_2[1];
  pfVar7 = *(float **)(*param_2 + (uVar2 & 0x7f) * 4 + 0x20);
  if (*(ushort *)(pfVar7 + 7) == uVar2) {
LAB_002775f8:
    iVar5 = *param_2;
  }
  else {
    do {
      if (pfVar7 == *(float **)(*param_2 + 0x1c)) goto LAB_002775f8;
      pfVar6 = pfVar7 + 10;
      pfVar1 = pfVar7 + 0x11;
      pfVar7 = pfVar6;
    } while (*(ushort *)pfVar1 != uVar2);
    iVar5 = *param_2;
  }
  puVar4 = &DAT_0048ffc0;
  puVar9 = &DAT_00490fa0;
  iVar10 = 0;
  uStack_40._0_4_ = (float)*(undefined8 *)(iVar5 + 8);
  uStack_40._4_4_ = (float)((ulong)*(undefined8 *)(iVar5 + 8) >> 0x20);
  fVar11 = uStack_40._4_4_ * param_1[3];
  fVar15 = param_1[1];
  fVar12 = (float)uStack_40 * param_1[2] * (float)param_2[2];
  fStack_80 = *param_1 - pfVar7[4] * fVar12;
  puVar3 = (ushort *)param_2[1] + 1;
  do {
    while( true ) {
      puVar8 = puVar3;
      if (0.0 <= *pfVar7) {
        fVar14 = fStack_80 + pfVar7[4] * fVar12;
        fVar13 = fVar15 + pfVar7[5] * fVar11;
        if (pfVar7[8] != 0.0) {
          fVar13 = fVar13 + fVar11 * pfVar7[3] * (1.0 - *(float *)(*param_2 + 0x10));
        }
        uStack_60 = CONCAT44(fVar13,fVar14);
        *puVar4 = uStack_60;
        *puVar9 = *(undefined8 *)pfVar7;
        if (pfVar7[8] == 0.0) {
          uStack_30 = CONCAT44(fVar13 + fVar11 * pfVar7[3],fVar14 + fVar12 * pfVar7[2]);
        }
        else {
          uStack_30 = CONCAT44(fVar13 + fVar11 * pfVar7[3] * *(float *)(*param_2 + 0x10),
                               fVar14 + fVar12 * pfVar7[2] * *(float *)(*param_2 + 0x10));
        }
        puVar4[1] = uStack_30;
        puVar4 = puVar4 + 2;
        iVar10 = iVar10 + 1;
        uStack_40 = CONCAT44(pfVar7[1] + pfVar7[3],*pfVar7 + pfVar7[2]);
        puVar9[1] = uStack_40;
        puVar9 = puVar9 + 2;
      }
      if (*puVar8 == 0) {
        return iVar10;
      }
      fStack_80 = fStack_80 + pfVar7[6] * fVar12;
      uVar2 = *puVar8;
      pfVar7 = *(float **)(*param_2 + (uVar2 & 0x7f) * 4 + 0x20);
      if (*(ushort *)(pfVar7 + 7) != uVar2) break;
LAB_002778b0:
      puVar3 = puVar8 + 1;
    }
    pfVar1 = pfVar7;
    do {
      pfVar7 = pfVar1;
      if (pfVar1 == *(float **)(*param_2 + 0x1c)) goto LAB_002778b0;
      pfVar7 = pfVar1 + 10;
      pfVar6 = pfVar1 + 0x11;
      puVar3 = puVar8 + 1;
      pfVar1 = pfVar7;
    } while (*(ushort *)pfVar6 != uVar2);
  } while( true );
}


// ==== FUN_002778c8 @ 002778c8 ====

void FUN_002778c8(int param_1,int *param_2)

{
  long lVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar1 = FUN_002775a0();
  if (0 < lVar1) {
    FUN_002667e8(*(undefined4 *)(*param_2 + 4));
    uStack_50 = 0;
    uStack_4c = 0;
    FUN_00266d28(*(undefined8 *)(param_1 + 0x10),&uStack_50,lVar1,0x48ffc0,0x490fa0);
  }
  return;
}


// ==== FUN_00277940 @ 00277940 ====

void FUN_00277940(int param_1,int *param_2)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar1 = FUN_002775a0();
  if (0 < lVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    fStack_70 = (float)param_2[4] * *(float *)(param_1 + 8);
    fStack_6c = (float)param_2[5] * *(float *)(param_1 + 0xc);
    uStack_78 = 0;
    uStack_80 = CONCAT44(fStack_6c,fStack_70);
    uVar4 = 0;
    uStack_74 = uVar2;
    FUN_002667e8(*(undefined4 *)(*param_2 + 4));
    auVar3._4_4_ = uVar2;
    auVar3._0_4_ = uVar4;
    auVar3._8_8_ = 0;
    auVar3 = _por(in_zero_qw,auVar3 << 0x40);
    FUN_00266d28(auVar3._0_8_,&uStack_80,lVar1,0x48ffc0,0x490fa0);
    fStack_6c = 0.0;
    fStack_70 = 0.0;
    FUN_00266d28();
  }
  return;
}


// ==== FUN_00277a30 @ 00277a30 ====

void FUN_00277a30(int param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  float fStack_90;
  float fStack_8c;
  
  lVar2 = FUN_002775a0();
  iVar5 = 1;
  if (0 < lVar2) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar6 = _vmulbc(auVar6,auVar6);
    auVar6 = _sqc2(auVar6);
    uStack_a4 = auVar6._12_4_;
    uVar4 = uStack_a4;
    _auStack_b0 = ZEXT812(0);
    uStack_a0 = CONCAT44((float)param_2[5] * *(float *)(param_1 + 0xc),
                         (float)param_2[4] * *(float *)(param_1 + 8));
    auVar6 = _auStack_b0;
    uStack_a8 = 0;
    uVar3 = uStack_a8;
    _uStack_a8 = auVar6._8_8_;
    auStack_b0 = (undefined1  [8])uStack_a0;
    FUN_002667e8(*(undefined4 *)(*param_2 + 4));
    do {
      auVar6._4_4_ = uVar4;
      auVar6._0_4_ = uVar3;
      auVar6._8_8_ = 0;
      auVar6 = _por(in_zero_qw,auVar6 << 0x40);
      iVar5 = iVar5 + -1;
      FUN_00266d28(auVar6._0_8_,auStack_b0,lVar2,0x48ffc0,0x490fa0);
      auVar1._4_4_ = uVar4;
      auVar1._0_4_ = uVar3;
      auVar1._8_8_ = 0;
      auVar6 = _por(in_zero_qw,auVar1 << 0x40);
      fStack_90 = -(float)auStack_b0._0_4_;
      fStack_8c = -(float)auStack_b0._4_4_;
      uStack_a0 = CONCAT44(fStack_8c,fStack_90);
      FUN_00266d28(auVar6._0_8_,&uStack_a0,lVar2,0x48ffc0,0x490fa0);
      auStack_b0._0_4_ = -(float)auStack_b0._0_4_;
    } while (-1 < iVar5);
    uStack_a0 = 0;
    FUN_00266d28();
  }
  return;
}


// ==== FUN_00277b88 @ 00277b88 ====

void FUN_00277b88(float param_1,undefined8 param_2,float *param_3,float *param_4,int param_5,
                 undefined8 param_6)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a3_qw [16];
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fStack_d0;
  float fStack_cc;
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  float fStack_a0;
  float fStack_9c;
  
  auVar2 = _por(in_zero_qw,in_a3_qw);
  iVar1 = (int)param_2;
  fVar3 = (float)FUN_002758e0(*(undefined4 *)(param_5 + 8),param_6);
  fStack_d0 = fVar3 * param_1;
  *(int *)(iVar1 + 0x24) = param_5;
  *(int *)(iVar1 + 0x20) = (int)param_6;
  auVar2 = _por(in_zero_qw,auVar2);
  *(float *)(iVar1 + 0x28) = 1.0 / fVar3;
  uStack_b0 = CONCAT44(param_1 * param_4[1],fStack_d0 * *param_4);
  fStack_a0 = *param_3 - fStack_d0 * *param_4;
  fStack_9c = param_3[1] - param_1 * param_4[1];
  auStack_c0[0] = CONCAT44(fStack_9c,fStack_a0);
  fStack_cc = param_1;
  FUN_00276590(param_2,auStack_c0,&fStack_d0,auVar2._0_8_,0x277fa0,0x40,0xc);
  return;
}


// ==== FUN_00277c98 @ 00277c98 ====

void FUN_00277c98(void)

{
  FUN_00277b88();
  return;
}


// ==== FUN_00277cb8 @ 00277cb8 ====
// GLOBAL DAT_0048ffd8 undefined4
// GLOBAL DAT_00490fa0 undefined8

int FUN_00277cb8(float *param_1,undefined4 *param_2)

{
  float *pfVar1;
  ushort uVar2;
  float *pfVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_60;
  undefined8 uStack_30;
  
  puVar10 = (ushort *)*param_2;
  uVar2 = *puVar10;
  pfVar7 = *(float **)(*(int *)(param_2[1] + 8) + (uVar2 & 0x7f) * 4 + 0x20);
  if (*(ushort *)(pfVar7 + 7) != uVar2) {
    pfVar8 = *(float **)(*(int *)(param_2[1] + 8) + 0x1c);
    pfVar3 = pfVar7;
    if (pfVar7 == pfVar8) {
      iVar5 = param_2[1];
      goto LAB_00277d14;
    }
    do {
      pfVar7 = pfVar3 + 10;
      if (*(ushort *)(pfVar3 + 0x11) == uVar2) {
        iVar5 = param_2[1];
        goto LAB_00277d14;
      }
      pfVar3 = pfVar7;
    } while (pfVar7 != pfVar8);
  }
  iVar5 = param_2[1];
LAB_00277d14:
  puVar9 = &DAT_00490fa0;
  iVar6 = 0;
  uVar4 = *(undefined8 *)(*(int *)(iVar5 + 8) + 8);
  pfVar8 = (float *)&DAT_0048ffd8;
  uStack_30._0_4_ = (float)uVar4;
  uStack_30._4_4_ = (float)((ulong)uVar4 >> 0x20);
  fVar11 = uStack_30._4_4_ * param_1[3];
  fVar13 = param_1[1];
  fVar12 = (float)uStack_30 * param_1[2] * (float)param_2[2];
  fStack_60 = *param_1 - pfVar7[4] * fVar12;
  do {
    do {
      iVar5 = iVar6;
      if (0.0 <= *pfVar7) {
        if (0x1fc < iVar6 + 5) {
          return iVar6;
        }
        *(ulong *)pfVar8 = CONCAT44(fVar13 + pfVar7[5] * fVar11,fStack_60 + pfVar7[4] * fVar12);
        puVar9[3] = *(undefined8 *)pfVar7;
        *(ulong *)(pfVar8 + -2) =
             CONCAT44(pfVar8[1] + fVar11 * pfVar7[3],*pfVar8 + fVar12 * pfVar7[2]);
        uStack_30 = CONCAT44(pfVar7[1] + pfVar7[3],*pfVar7 + pfVar7[2]);
        puVar9[2] = uStack_30;
        pfVar8[-4] = *pfVar8;
        pfVar8[-3] = pfVar8[-1];
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + 3);
        *(undefined4 *)((int)puVar9 + 0xc) = *(undefined4 *)((int)puVar9 + 0x14);
        pfVar8[2] = pfVar8[-2];
        pfVar8[3] = pfVar8[1];
        *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)((int)puVar9 + 0x24) = *(undefined4 *)((int)puVar9 + 0x1c);
        *(undefined8 *)(pfVar8 + -6) = *(undefined8 *)(pfVar8 + -4);
        pfVar8 = pfVar8 + 10;
        *puVar9 = puVar9[1];
        puVar9 = puVar9 + 5;
        iVar5 = iVar6 + 5;
      }
      puVar10 = puVar10 + 1;
      if (*puVar10 == 0) {
        return iVar5;
      }
      iVar6 = iVar5 + 1;
      if (0x1fc < iVar6) {
        return iVar5;
      }
      *(undefined8 *)(pfVar8 + -6) = *(undefined8 *)(pfVar8 + -8);
      pfVar8 = pfVar8 + 2;
      *puVar9 = puVar9[-1];
      fStack_60 = fStack_60 + pfVar7[6] * fVar12;
      uVar2 = *puVar10;
      pfVar7 = *(float **)(*(int *)(param_2[1] + 8) + (uVar2 & 0x7f) * 4 + 0x20);
      puVar9 = puVar9 + 1;
    } while (*(ushort *)(pfVar7 + 7) == uVar2);
    pfVar3 = pfVar7;
    do {
      pfVar7 = pfVar3;
      if (pfVar3 == *(float **)(*(int *)(param_2[1] + 8) + 0x1c)) break;
      pfVar7 = pfVar3 + 10;
      pfVar1 = pfVar3 + 0x11;
      pfVar3 = pfVar7;
    } while (*(ushort *)pfVar1 != uVar2);
  } while( true );
}


// ==== FUN_00277fa0 @ 00277fa0 ====
// GLOBAL DAT_0048ffc0 undefined8

void FUN_00277fa0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 in_vuI;
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float fStack_7c;
  
  iVar2 = FUN_00277cb8();
  pfVar6 = (float *)&DAT_0048ffc0;
  if (0 < iVar2) {
    pfVar3 = *(float **)(param_2 + 4);
    if (pfVar3[3] != 0.0) {
      auVar12 = _vmaxbc(in_vf0,in_vf0);
      fVar8 = pfVar3[1];
      fVar7 = *pfVar3;
      uStack_e0 = CONCAT44(-fVar8,-fVar7);
      pfVar3 = pfVar6;
      iVar5 = iVar2;
      if (0 < iVar2) {
        do {
          iVar5 = iVar5 + -1;
          fStack_90 = *pfVar3 * 1.0;
          fStack_8c = *pfVar3 * 0.0;
          fStack_7c = pfVar3[1] * 1.0;
          fStack_80 = pfVar3[1] * 0.0;
          uStack_a0 = CONCAT44(fStack_7c,fStack_80);
          uStack_c0 = CONCAT44(-fVar8 + fStack_8c + fStack_7c,-fVar7 + fStack_90 + fStack_80);
          uStack_b0 = uStack_c0;
          uStack_d0 = uStack_c0;
          *(undefined8 *)pfVar3 = uStack_c0;
          pfVar3 = pfVar3 + 2;
        } while (iVar5 != 0);
      }
      auVar11 = _qmtc2(*(float *)(*(int *)(param_2 + 4) + 0xc) * 0.017453292);
      auVar11 = _vaddbc(in_vf0,auVar11);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar11 = _vsubi(auVar11,in_vuI);
      auVar11 = _vabs(auVar11);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar11,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar12,in_vuI);
      _vmaddai(auVar12,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar11,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar12 = _vmsubi(auVar12,in_vuI);
      auVar12 = _vabs(auVar12);
      _ctc2(0x3e800000);
      _vnop();
      auVar12 = _vsubi(auVar12,in_vuI);
      auVar13 = _vmul(auVar12,auVar12);
      _ctc2(0xc2992661);
      _vnop();
      auVar11 = _vmuli(auVar12,in_vuI);
      auVar18 = _vmul(auVar13,auVar13);
      _ctc2(0x42a33457);
      _vnop();
      auVar16 = _vmuli(auVar12,in_vuI);
      _ctc2(0xc2255de0);
      _vnop();
      auVar17 = _vmuli(auVar12,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar15 = _vmuli(auVar12,in_vuI);
      auVar14 = _vmul(auVar18,auVar18);
      auVar11 = _vmul(auVar11,auVar13);
      _vmula(auVar17,auVar13);
      _vmadda(auVar11,auVar18);
      _ctc2(0x40c90fda);
      _vmadda(auVar16,auVar18);
      _vmaddai(auVar12,in_vuI);
      auVar11 = _vmadd(auVar15,auVar14);
      auVar12 = _qmfc2(auVar11._0_4_);
      _auStack_f0 = _sqc2(auVar11);
      uVar1 = auStack_f0._4_4_;
      pfVar3 = pfVar6;
      iVar5 = iVar2;
      if (0 < iVar2) {
        do {
          iVar5 = iVar5 + -1;
          fVar9 = (float)uVar1 * *pfVar3;
          fVar7 = -auVar12._0_4_ * *pfVar3;
          uStack_b0 = CONCAT44(fVar7,fVar9);
          fVar10 = auVar12._0_4_ * pfVar3[1];
          fVar8 = (float)uVar1 * pfVar3[1];
          uStack_a0 = CONCAT44(fVar8,fVar10);
          uStack_c0 = uStack_a0;
          uStack_e0 = CONCAT44(fVar7 + 0.0 + fVar8,fVar9 + 0.0 + fVar10);
          uStack_d0 = uStack_e0;
          auStack_f0 = (undefined1  [8])uStack_e0;
          *(undefined8 *)pfVar3 = uStack_e0;
          pfVar3 = pfVar3 + 2;
        } while (iVar5 != 0);
      }
      uVar4 = **(undefined8 **)(param_2 + 4);
      iVar5 = iVar2;
      if (0 < iVar2) {
        do {
          iVar5 = iVar5 + -1;
          fVar9 = *pfVar6 * 1.0;
          fVar7 = *pfVar6 * 0.0;
          uStack_e0._0_4_ = (float)uVar4;
          uStack_b0 = CONCAT44(fVar7,fVar9);
          uStack_e0._4_4_ = (float)((ulong)uVar4 >> 0x20);
          fVar10 = pfVar6[1] * 0.0;
          fVar8 = pfVar6[1] * 1.0;
          uStack_a0 = CONCAT44(fVar8,fVar10);
          uStack_c0 = uStack_a0;
          uStack_e0 = CONCAT44(uStack_e0._4_4_ + fVar7 + fVar8,(float)uStack_e0 + fVar9 + fVar10);
          uStack_d0 = uStack_e0;
          auStack_f0 = (undefined1  [8])uStack_e0;
          *(undefined8 *)pfVar6 = uStack_e0;
          pfVar6 = pfVar6 + 2;
        } while (iVar5 != 0);
      }
    }
    FUN_002667e8(*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 8) + 4));
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uStack_e8;
    _auStack_f0 = auVar12 << 0x40;
    FUN_002679e8(*(undefined8 *)(param_1 + 0x10),auStack_f0,iVar2,0x48ffc0,0x490fa0);
  }
  return;
}


// ==== FUN_00278480 @ 00278480 ====

void FUN_00278480(int param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
                 undefined4 param_6)

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  undefined8 in_t0_udw;
  undefined8 auStack_40 [2];
  undefined8 uStack_30;
  float fStack_20;
  float fStack_1c;
  
  *(undefined4 *)(param_1 + 0x28) = param_6;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  auVar1._8_8_ = in_t0_udw;
  auVar1._0_8_ = param_5;
  _por(in_zero_qw,auVar1);
  uStack_30 = CONCAT44(param_4[1] * param_3[1],*param_4 * *param_3);
  fStack_20 = *param_2 - *param_4 * *param_3;
  fStack_1c = param_2[1] - param_4[1] * param_3[1];
  auStack_40[0] = CONCAT44(fStack_1c,fStack_20);
  FUN_00276590(param_1,auStack_40);
  return;
}


// ==== FUN_002789c0 @ 002789c0 ====

void FUN_002789c0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_00274018(param_3,0x40,0x10);
  param_6 = param_6 + param_2 * -0x10;
  iVar5 = param_5 + param_2 * 0x10;
  iVar6 = (int)param_1;
  *(int *)(iVar6 + 0x2c) = param_5;
  *(int *)(iVar6 + 0x30) = param_2;
  uVar4 = iVar1 + 0xfU & 0xfffffff0;
  iVar1 = 0;
  FUN_00273f30(iVar6 + 0x18,param_3,0x40,0x10,0,iVar5,param_6);
  FUN_002764d0(param_1,param_4,iVar5 + uVar4,param_6 - uVar4);
  if (0 < param_2) {
    iVar5 = *(int *)(iVar6 + 0x2c);
    while( true ) {
      iVar2 = iVar1 * 0x10;
      iVar1 = iVar1 + 1;
      puVar3 = (undefined4 *)(iVar2 + iVar5);
      *puVar3 = 0;
      puVar3[3] = 0;
      FUN_002740d8(puVar3 + 1,iVar6 + 0x18);
      if (param_2 <= iVar1) break;
      iVar5 = *(int *)(iVar6 + 0x2c);
    }
  }
  return;
}


// ==== FUN_00278ad0 @ 00278ad0 ====

void FUN_00278ad0(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar4 = 0;
  if (0 < *(int *)(iVar5 + 0x30)) {
    iVar3 = *(int *)(iVar5 + 0x2c);
    while( true ) {
      iVar1 = iVar4 * 0x10;
      iVar4 = iVar4 + 1;
      puVar2 = (undefined4 *)(iVar1 + iVar3);
      *puVar2 = 0;
      puVar2[3] = 0;
      FUN_00274190(puVar2 + 1);
      if (*(int *)(iVar5 + 0x30) <= iVar4) break;
      iVar3 = *(int *)(iVar5 + 0x2c);
    }
  }
  FUN_00276410(param_1);
  FUN_00274040(iVar5 + 0x18);
  return;
}


// ==== FUN_00278b48 @ 00278b48 ====

void FUN_00278b48(int param_1,int param_2,long param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a0 [16];
  
  uVar6 = 0x40;
  uVar7 = 0;
  iVar5 = (int)param_3 + -1;
  FUN_00276458();
  FUN_00266088();
  puVar4 = (uint *)(*(int *)(param_1 + 0x2c) + param_2 * 0x10);
  if (param_3 != 0) {
    do {
      bVar2 = false;
      if ((((byte)*puVar4 ^ 1) & 1) != 0) {
        bVar2 = puVar4[2] != 0;
      }
      if (bVar2) {
        uVar6 = *puVar4 ^ uVar6;
        uVar3 = *puVar4 & 0x26;
        if ((uVar6 & 0x66) != 0) {
          if (uVar3 == 4) {
            FUN_00268250(2);
          }
          else if (uVar3 < 5) {
            if (uVar3 == 2) {
              FUN_00268250(1);
            }
            else {
LAB_00278c58:
              FUN_00268250(0);
            }
          }
          else {
            if (uVar3 != 0x20) goto LAB_00278c58;
            FUN_00268250(3);
          }
        }
        if ((uVar6 & 0x48) != 0) {
          if ((*puVar4 & 8) == 0) {
            FUN_002683a0(0);
          }
          else {
            FUN_002683a0(1);
          }
        }
        if ((uVar6 & 0x50) == 0) {
          uVar3 = puVar4[3];
        }
        else if ((*puVar4 & 0x10) == 0) {
          FUN_002684e0(0);
          uVar3 = puVar4[3];
        }
        else {
          FUN_002684e0(1);
          uVar3 = puVar4[3];
        }
        uVar6 = *puVar4;
        if (uVar3 == uVar7) {
LAB_00278d6c:
          uVar7 = puVar4[3];
        }
        else {
          if (uVar3 == 0) {
            FUN_002687b8(auStack_120);
            goto LAB_00278d6c;
          }
          fVar8 = *(float *)(uVar3 + 0x20) + *(float *)(uVar3 + 0x28);
          fVar10 = *(float *)(uVar3 + 0x24) + *(float *)(uVar3 + 0x2c);
          fVar9 = *(float *)(puVar4[3] + 0x24);
          fVar11 = *(float *)(puVar4[3] + 0x20);
          uStack_110 = CONCAT44((int)fVar9 * (uint)(fVar9 < fVar10) |
                                (int)fVar10 * (uint)(fVar9 >= fVar10),
                                (int)fVar11 * (uint)(fVar11 < fVar8) |
                                (int)fVar8 * (uint)(fVar11 >= fVar8));
          auStack_120[0] = uStack_110;
          fVar11 = *(float *)(puVar4[3] + 0x24);
          fVar9 = *(float *)(puVar4[3] + 0x20);
          uStack_fc = (int)fVar11 * (uint)(fVar10 < fVar11) | (int)fVar10 * (uint)(fVar10 >= fVar11)
          ;
          uStack_100 = (int)fVar9 * (uint)(fVar8 < fVar9) | (int)fVar8 * (uint)(fVar8 >= fVar9);
          uStack_110 = CONCAT44(uStack_fc,uStack_100);
          FUN_002685d0(auStack_120,&uStack_110);
          uVar7 = puVar4[3];
        }
        fStack_d0 = 1.0;
        fStack_cc = 1.0;
        uStack_c8 = 0x3f800000;
        uStack_c4 = 0x3f800000;
        puVar1 = (uint *)puVar4[2];
        auVar14._8_4_ = 0x3f800000;
        auVar14._0_8_ = 0x3f8000003f800000;
        auVar14._12_4_ = 0x3f800000;
        auVar14 = _lqc2(auVar14);
        while (puVar1 != (uint *)0x0) {
          uVar3 = puVar1[0x10];
          fStack_b0 = *(float *)(uVar3 + 0x20) + *(float *)(uVar3 + 0x28) * (float)puVar1[2];
          fStack_ac = *(float *)(uVar3 + 0x24) + *(float *)(uVar3 + 0x2c) * (float)puVar1[3];
          uStack_f0 = CONCAT44(fStack_ac,fStack_b0);
          fStack_cc = (float)puVar1[5] * *(float *)(uVar3 + 0x2c);
          fStack_d0 = (float)puVar1[4] * *(float *)(uVar3 + 0x28);
          uStack_c0 = CONCAT44(fStack_cc,fStack_d0);
          uStack_e8 = uStack_c0;
          auVar12 = _lqc2(*(undefined1 (*) [16])(puVar1 + 6));
          auVar13 = _lqc2(*(undefined1 (*) [16])(uVar3 + 0x30));
          auVar12 = _vmul(auVar12,auVar13);
          auVar12 = _vmini(auVar12,auVar14);
          auStack_e0 = _sqc2(auVar12);
          auStack_a0 = _sqc2(auVar14);
          (*(code *)puVar1[0x11])(&uStack_f0,puVar1 + 10);
          puVar1 = (uint *)*puVar1;
          auVar14 = _lqc2(auStack_a0);
        }
      }
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 4;
    } while (iVar5 != -1);
  }
  FUN_002662a8();
  return;
}


// ==== FUN_00278ea0 @ 00278ea0 ====

void FUN_00278ea0(int param_1)

{
  FUN_00278b48(param_1,0,*(undefined4 *)(param_1 + 0x30));
  return;
}


// ==== FUN_00278ec0 @ 00278ec0 ====

void FUN_00278ec0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_002740e8(*(int *)(param_1 + 0x2c) + param_2 * 0x10 + 4);
  *(undefined4 *)(iVar1 + 0x40) = param_3;
  return;
}


// ==== FUN_00278f00 @ 00278f00 ====

void FUN_00278f00(int param_1,int param_2,int param_3)

{
  FUN_00274138(*(int *)(param_1 + 0x2c) + param_2 * 0x10 + 4,param_3 + -8);
  return;
}


// ==== FUN_00278f30 @ 00278f30 ====

void FUN_00278f30(int *param_1)

{
  *param_1 = *param_1 + (int)param_1;
  return;
}


// ==== FUN_00278f40 @ 00278f40 ====

void FUN_00278f40(void)

{
  FUN_00278f30();
  return;
}


// ==== FUN_00278f60 @ 00278f60 ====

undefined4 FUN_00278f60(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x26);
  if (cVar1 == '\x01') {
    return 0x3f000000;
  }
  if (('\x01' < cVar1) && (cVar1 == '\x02')) {
    return 0x3f800000;
  }
  return 0;
}


// ==== FUN_00278fb0 @ 00278fb0 ====

void FUN_00278fb0(float *param_1)

{
  float fVar1;
  float fVar2;
  
  if (((uint)param_1[9] & 6) == 0) {
    fVar1 = (float)FUN_00278f60();
    fVar2 = (float)FUN_002759e0(param_1[5],param_1[4]);
    *param_1 = *param_1 + (param_1[2] - fVar2 * param_1[8]) * fVar1;
    if (*(char *)((int)param_1 + 0x26) != '\x03') {
      param_1[2] = fVar2 * param_1[8];
    }
  }
  return;
}


// ==== FUN_00279030 @ 00279030 ====

int FUN_00279030(int param_1,int param_2,undefined4 *param_3)

{
  short *psVar1;
  ushort uVar2;
  undefined4 uVar3;
  bool bVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  short *psStack_c0;
  short *apsStack_bc [3];
  
  uVar2 = *(ushort *)(param_1 + 0x24);
  if ((uVar2 & 6) == 0) {
    iVar7 = 1;
  }
  else {
    psStack_c0 = *(short **)(param_1 + 0x10);
    fVar8 = *(float *)(param_1 + 8);
    fVar9 = *(float *)(param_1 + 0x20);
    *param_3 = psStack_c0;
    iVar7 = 0;
    if (*psStack_c0 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      do {
        bVar4 = false;
        FUN_00275ad0(fVar8 / fVar9,uVar3,psStack_c0,&psStack_c0,apsStack_bc,1);
        psStack_c0 = apsStack_bc[0];
        if (((uVar2 >> 1 & 1) != 0) && ((*apsStack_bc[0] == 0xd || (*apsStack_bc[0] == 10)))) {
          do {
            if (*psStack_c0 != 10) goto LAB_00279124;
            while( true ) {
              iVar7 = iVar7 + 1;
              bVar4 = true;
              if (param_2 == iVar7) {
                *param_3 = psStack_c0;
              }
LAB_00279124:
              psVar6 = psStack_c0 + 1;
              psVar1 = psStack_c0 + 1;
              psStack_c0 = psVar6;
              if (*psVar1 == 0xd) break;
              if (*psVar1 != 10) goto LAB_00279140;
            }
          } while( true );
        }
LAB_00279140:
        if ((uVar2 >> 2 & 1) == 0) {
LAB_00279168:
          sVar5 = *psStack_c0;
        }
        else if (bVar4) {
          sVar5 = *psStack_c0;
        }
        else {
          iVar7 = iVar7 + 1;
          if (param_2 == iVar7) {
            *param_3 = psStack_c0;
            goto LAB_00279168;
          }
          sVar5 = *psStack_c0;
        }
        if (sVar5 == 0) {
          return iVar7;
        }
        uVar3 = *(undefined4 *)(param_1 + 0x14);
      } while( true );
    }
  }
  return iVar7;
}


// ==== FUN_002791b0 @ 002791b0 ====

void FUN_002791b0(void)

{
  return;
}


// ==== FUN_002791b8 @ 002791b8 ====

void FUN_002791b8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
    FUN_00278f40();
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
      FUN_00278f30();
    }
  }
  else if (iVar1 == 2) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
    FUN_002791b0();
  }
  return;
}


// ==== FUN_00279250 @ 00279250 ====

void FUN_00279250(int *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = 0;
  *param_1 = *param_1 + (int)param_1;
  if (0 < (short)param_1[1]) {
    iVar2 = 0;
    do {
      lVar1 = (long)((int)lVar1 + 1);
      FUN_002791b8(*param_1 + iVar2);
      iVar2 = iVar2 + 0xc;
    } while (lVar1 < (short)param_1[1]);
  }
  return;
}


// ==== FUN_002792c0 @ 002792c0 ====
// GLOBAL DAT_004006c0 undefined4
// GLOBAL DAT_004006c8 undefined4

void FUN_002792c0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[3] = 0x3f800000;
  *param_1 = 0x3f800000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = DAT_004006c0;
  param_1[7] = DAT_004006c8;
  return;
}


// ==== FUN_00279318 @ 00279318 ====

void FUN_00279318(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 1;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  } while (-1 < iVar2);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[8] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[9] = 0x3f800000;
  return;
}


// ==== FUN_00279380 @ 00279380 ====

void FUN_00279380(int param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  
  uVar1 = *param_2;
  *(int *)(param_1 + 0x30) = (int)param_3;
  *(int *)(param_1 + 0x34) = (int)((ulong)param_3 >> 0x20);
  *(undefined4 *)(param_1 + 0x38) = in_a2_udw;
  *(undefined4 *)(param_1 + 0x3c) = in_register_0000006c;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}


// ==== FUN_00279390 @ 00279390 ====

void FUN_00279390(undefined8 param_1,int *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  iVar7 = (int)param_1;
  lVar6 = 0;
  fStack_100 = *(float *)(iVar7 + 0x20);
  fStack_130 = *param_3 * fStack_100;
  fStack_12c = param_3[1] * *(float *)(iVar7 + 0x24);
  fStack_f0 = param_3[2] * fStack_100;
  fStack_100 = param_3[4] * fStack_100;
  auVar11 = _qmtc2(0x3c000000);
  iVar2 = param_2[1];
  fStack_ec = param_3[3] * *(float *)(iVar7 + 0x24);
  uStack_128 = CONCAT44(fStack_ec,fStack_f0);
  fStack_fc = param_3[5] * *(float *)(iVar7 + 0x24);
  uStack_120 = CONCAT44(fStack_fc,fStack_100);
  auStack_e0._4_4_ = (float)*(byte *)((int)param_3 + 0x19);
  auStack_e0._0_4_ = (float)*(byte *)(param_3 + 6);
  fStack_d8 = (float)*(byte *)((int)param_3 + 0x1a);
  fStack_d4 = (float)*(byte *)((int)param_3 + 0x1b);
  auVar9 = _lqc2(_auStack_e0);
  auVar9 = _vmulbc(auVar9,auVar11);
  auVar9 = _sqc2(auVar9);
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x30));
  auVar9 = _lqc2(auVar9);
  auVar9 = _vmul(auVar9,auVar10);
  _auStack_e0 = _sqc2(auVar9);
  auVar9 = _qmtc2((float)*(byte *)(param_3 + 7));
  auVar9 = _vmulbc(auVar9,auVar11);
  auVar9 = _vmul(auVar9,auVar10);
  auStack_d0 = _sqc2(auVar9);
  if (0 < (long)(short)iVar2) {
    auStack_c0 = _sqc2(auVar11);
    iVar7 = 0;
    do {
      pbVar4 = (byte *)(*param_2 + iVar7);
      fStack_110 = (float)*pbVar4;
      fStack_10c = (float)pbVar4[1];
      fStack_108 = (float)pbVar4[2];
      fStack_104 = (float)pbVar4[3];
      auVar10 = _lqc2(auStack_c0);
      auVar9._4_4_ = fStack_10c;
      auVar9._0_4_ = fStack_110;
      auVar9._8_4_ = fStack_108;
      auVar9._12_4_ = fStack_104;
      auVar9 = _lqc2(auVar9);
      auVar9 = _vmulbc(auVar9,auVar10);
      auVar10 = _lqc2(_auStack_e0);
      auVar9 = _vmul(auVar9,auVar10);
      auVar10 = _lqc2(auStack_d0);
      iVar1 = *(int *)(pbVar4 + 4);
      auVar9 = _vadd(auVar9,auVar10);
      iVar5 = (int)lVar6;
      if (iVar1 == 1) {
        auVar9 = _qmfc2(auVar9._0_4_);
        FUN_00279b70(param_1,*(undefined4 *)(pbVar4 + 8),&fStack_130,auVar9._0_8_);
        lVar6 = (long)(iVar5 + 1);
      }
      else if (iVar1 < 2) {
        if (iVar1 == 0) {
          auVar9 = _qmfc2(auVar9._0_4_);
          FUN_00279990(param_1,*(undefined4 *)(pbVar4 + 8),&fStack_130,auVar9._0_8_);
          lVar6 = (long)(iVar5 + 1);
        }
        else {
          lVar6 = (long)(iVar5 + 1);
        }
      }
      else if (iVar1 == 2) {
        iVar1 = *(int *)(pbVar4 + 8);
        if (*(char *)(iVar1 + 0x26) == '\x03') {
          if (**(short **)(iVar1 + 0x10) == 0) {
            uVar3 = *(undefined4 *)(pbVar4 + 8);
          }
          else {
            auStack_b0 = _sqc2(auVar9);
            fVar8 = (float)FUN_002758e0(*(undefined4 *)(iVar1 + 0x14));
            fVar8 = fVar8 * *(float *)(iVar1 + 0x20);
            auVar9 = _lqc2(auStack_b0);
            if (*(float *)(iVar1 + 8) < fVar8) {
              fVar8 = *(float *)(iVar1 + 8) / fVar8;
              fStack_110 = fStack_130 * fVar8;
              fStack_10c = fStack_12c * fVar8;
              fStack_130 = fStack_110;
              fStack_12c = fStack_10c;
            }
            uVar3 = *(undefined4 *)(pbVar4 + 8);
          }
        }
        else {
          uVar3 = *(undefined4 *)(pbVar4 + 8);
        }
        auVar9 = _qmfc2(auVar9._0_4_);
        FUN_00279e20(param_1,uVar3,&fStack_130,auVar9._0_8_);
        lVar6 = (long)(iVar5 + 1);
      }
      else {
        lVar6 = (long)(iVar5 + 1);
      }
      iVar7 = iVar7 + 0xc;
    } while (lVar6 < (short)iVar2);
  }
  return;
}


// ==== FUN_00279700 @ 00279700 ====

void FUN_00279700(int param_1,ulong param_2)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(param_1 + 0x40) + 1.0;
  if (param_2 != 0) {
    fVar1 = fVar1 + 0.2;
  }
  FUN_002688e0(fVar1,0x3dcccccd,0x42c80000);
  FUN_00268a50(0 < *(int *)(param_1 + 0x44));
  FUN_00268a78(param_2);
  FUN_00268aa0(param_2 ^ 1);
  return;
}


// ==== FUN_00279790 @ 00279790 ====

void FUN_00279790(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return;
}


// ==== FUN_002797a0 @ 002797a0 ====

void FUN_002797a0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_002688e0(0x3f800000,0x3dcccccd,0x42c80000);
  FUN_00268a50(0);
  FUN_00268a78(1);
  FUN_00268aa0(0);
  uStack_70 = 0;
  uStack_68 = 0x43f0000044200000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0x3e4ccccd;
  uStack_44 = 0x3f800000;
  uStack_5c = 0;
  uStack_60 = 0;
  FUN_00266f50(0,&uStack_60,1,&uStack_70);
  FUN_00268a78(0);
  return;
}


// ==== FUN_002798b0 @ 002798b0 ====

void FUN_002798b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x44) < 0) {
    FUN_002797a0();
  }
  *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
  FUN_00279700(param_1,1);
  FUN_00279390(param_1,param_2,param_3);
  *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
  return;
}


// ==== FUN_00279930 @ 00279930 ====

void FUN_00279930(int param_1)

{
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  return;
}


// ==== FUN_00279940 @ 00279940 ====

void FUN_00279940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00279700(param_1,0);
  FUN_00279390(param_1,param_2,param_3);
  return;
}


// ==== FUN_00279990 @ 00279990 ====
// GLOBAL DAT_0043f8e8 undefined8

void FUN_00279990(int *param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 in_zero_qw [16];
  int iVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined8 in_v1_udw;
  undefined1 in_a0_qw [16];
  undefined8 *puVar8;
  undefined8 in_a3_udw;
  int iVar9;
  long lVar10;
  undefined1 auVar11 [16];
  int iVar12;
  undefined4 in_s2_udw;
  undefined4 in_register_0000012c;
  undefined1 auVar13 [16];
  float *pfVar14;
  float fVar15;
  undefined8 uStack_f0;
  
  auVar13._8_8_ = in_a3_udw;
  auVar13._0_8_ = param_3;
  auVar13 = _por(in_zero_qw,auVar13);
  pfVar14 = (float *)*param_1;
  iVar12 = (int)(short)param_1[1];
  iVar9 = (int)((short)param_1[1] >> 0xf);
  do {
    auVar4._8_8_ = in_v1_udw;
    auVar4._0_8_ = 300;
    auVar2._4_4_ = iVar9;
    auVar2._0_4_ = iVar12;
    auVar2._8_4_ = in_s2_udw;
    auVar2._12_4_ = in_register_0000012c;
    auVar4 = _pminw(auVar2,auVar4);
    auVar11 = _pextlw(0,auVar4._0_8_);
    lVar10 = auVar11._0_8_;
    if (0 < lVar10) {
      puVar8 = &DAT_0043f8e8;
      in_a0_qw._0_8_ = lVar10;
      pfVar5 = pfVar14;
      do {
        fVar15 = *pfVar5;
        in_a0_qw._0_8_ = (long)(in_a0_qw._0_4_ + -1);
        pfVar1 = pfVar5 + 1;
        pfVar5 = pfVar5 + 2;
        uStack_f0 = CONCAT44(param_2[1] * fVar15 + param_2[3] * *pfVar1,
                             *param_2 * fVar15 + param_2[2] * *pfVar1);
        *puVar8 = uStack_f0;
        puVar8 = puVar8 + 1;
      } while (in_a0_qw._0_8_ != 0);
    }
    iVar6 = (int)*(char *)((int)param_1 + 6);
    iVar7 = (int)(*(char *)((int)param_1 + 6) >> 7);
    if (CONCAT44(iVar7,iVar6) == 1) {
      in_a0_qw = _por(in_zero_qw,auVar13);
      FUN_00267eb0(in_a0_qw._0_8_,param_2 + 4,lVar10,&DAT_0043f8e8);
      auVar11._0_8_ = (long)(int)(auVar11._0_4_ - (uint)(auVar11._0_8_ < CONCAT44(iVar9,iVar12)));
LAB_00279b2c:
      iVar9 = auVar11._0_4_;
LAB_00279b30:
      iVar3 = iVar9 << 3;
      iVar12 = iVar12 - iVar9;
      iVar9 = iVar12 >> 0x1f;
    }
    else {
      iVar9 = auVar11._0_4_;
      if (CONCAT44(iVar7,iVar6) < 2) {
        iVar3 = iVar9 << 3;
        if (CONCAT44(iVar7,iVar6) == 0) {
          in_a0_qw = _por(in_zero_qw,auVar13);
          if (iVar9 / 3 == 0) goto LAB_00279b2c;
          FUN_00267670(in_a0_qw._0_8_,param_2 + 4,iVar9 / 3,&DAT_0043f8e8);
          iVar9 = auVar11._0_4_;
          goto LAB_00279b30;
        }
        iVar12 = iVar12 - iVar9;
        iVar9 = iVar12 >> 0x1f;
      }
      else {
        iVar3 = iVar9 << 3;
        if (CONCAT44(iVar7,iVar6) == 2) {
          in_a0_qw = _por(in_zero_qw,auVar13);
          FUN_00266a18(in_a0_qw._0_8_,param_2 + 4,iVar9 / 2,&DAT_0043f8e8);
          goto LAB_00279b2c;
        }
        iVar12 = iVar12 - iVar9;
        iVar9 = iVar12 >> 0x1f;
      }
    }
    pfVar14 = (float *)((int)pfVar14 + iVar3);
    if (CONCAT44(iVar9,iVar12) < 1) {
      return;
    }
  } while( true );
}


// ==== FUN_00279b70 @ 00279b70 ====
// GLOBAL PTR_DAT_003c09e4 undefined_*
// GLOBAL DAT_0043f8e8 undefined8

void FUN_00279b70(undefined8 param_1,int *param_2,float *param_3,undefined8 param_4)

{
  float *pfVar1;
  char cVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_zero_qw [16];
  int iVar6;
  undefined1 auVar7 [16];
  float *pfVar8;
  undefined8 in_v1_udw;
  ulong in_a0_udw;
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  long lVar11;
  undefined8 in_a3_udw;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined4 in_s3_udw;
  undefined4 in_register_0000013c;
  float *pfVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  float fStack_b0;
  float fStack_ac;
  
  auVar17._8_8_ = in_a3_udw;
  auVar17._0_8_ = param_4;
  auVar17 = _por(in_zero_qw,auVar17);
  pfVar16 = (float *)*param_2;
  FUN_002667e8(param_2[8]);
  if (CONCAT44((char)param_2[10] >> 7,(int)(char)param_2[10]) == 1) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_a0_udw;
    auVar9 = auVar7 << 0x40;
    FUN_002684e0(0);
    sVar3 = (short)param_2[1];
  }
  else {
    auVar9._8_8_ = in_a0_udw;
    auVar9._0_8_ = 1;
    FUN_002684e0(1);
    sVar3 = (short)param_2[1];
  }
  iVar15 = (int)(sVar3 >> 0xf);
  iVar14 = (int)sVar3;
  do {
    auVar4._8_8_ = in_v1_udw;
    auVar4._0_8_ = 0x96;
    auVar5._4_4_ = iVar15;
    auVar5._0_4_ = iVar14;
    auVar5._8_4_ = in_s3_udw;
    auVar5._12_4_ = in_register_0000013c;
    auVar7 = _pminw(auVar5,auVar4);
    auVar7 = _pextlw(0,auVar7._0_8_);
    lVar13 = auVar7._0_8_;
    if (0 < lVar13) {
      puVar10 = &DAT_0043f8e8;
      auVar9._0_8_ = lVar13;
      pfVar8 = pfVar16;
      do {
        auVar9._0_8_ = (long)(auVar9._0_4_ + -1);
        fVar19 = *param_3 * *pfVar8;
        fVar18 = param_3[1] * *pfVar8;
        uStack_d0 = CONCAT44(fVar18,fVar19);
        pfVar1 = pfVar8 + 1;
        pfVar8 = pfVar8 + 2;
        fStack_b0 = param_3[2] * *pfVar1;
        fStack_ac = param_3[3] * *pfVar1;
        uStack_c0 = CONCAT44(fStack_ac,fStack_b0);
        uStack_f0 = CONCAT44(fVar18 + fStack_ac,fVar19 + fStack_b0);
        *puVar10 = uStack_f0;
        uStack_e0 = uStack_f0;
        puVar10 = puVar10 + 1;
      } while (auVar9._0_8_ != 0);
    }
    if (0 < lVar13) {
      auVar9._0_8_ = (long)(int)&uStack_f0;
      pfVar8 = pfVar16;
      lVar11 = lVar13;
      puVar10 = (undefined8 *)PTR_DAT_003c09e4;
      do {
        lVar11 = (long)((int)lVar11 + -1);
        fVar19 = (float)param_2[2] * *pfVar8;
        fVar18 = (float)param_2[3] * *pfVar8;
        uStack_f0._0_4_ = (float)*(undefined8 *)(param_2 + 6);
        uStack_c0 = CONCAT44(fVar18,fVar19);
        uStack_f0._4_4_ = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
        pfVar1 = pfVar8 + 1;
        pfVar8 = pfVar8 + 2;
        fStack_b0 = (float)param_2[4] * *pfVar1;
        fStack_ac = (float)param_2[5] * *pfVar1;
        uStack_d0 = CONCAT44(fStack_ac,fStack_b0);
        uStack_f0 = CONCAT44(uStack_f0._4_4_ + fVar18 + fStack_ac,
                             (float)uStack_f0 + fVar19 + fStack_b0);
        uStack_e0 = uStack_f0;
        *puVar10 = uStack_f0;
        puVar10 = puVar10 + 1;
      } while (lVar11 != 0);
    }
    cVar2 = *(char *)((int)param_2 + 6);
    iVar12 = auVar7._0_4_;
    if (CONCAT44(cVar2 >> 7,(int)cVar2) == 0) {
      auVar9 = _por(in_zero_qw,auVar17);
      FUN_00267258(auVar9._0_8_,param_3 + 4,iVar12 / 3,&DAT_0043f8e8,PTR_DAT_003c09e4);
      iVar12 = auVar7._0_4_;
      iVar6 = iVar12 << 3;
    }
    else {
      iVar6 = iVar12 << 3;
      if (CONCAT44(cVar2 >> 7,(int)cVar2) == 1) {
        auVar9 = _por(in_zero_qw,auVar17);
        FUN_002679e8(auVar9._0_8_,param_3 + 4,lVar13,&DAT_0043f8e8,PTR_DAT_003c09e4);
        iVar12 = auVar7._0_4_ - (uint)(auVar7._0_8_ < CONCAT44(iVar15,iVar14));
        iVar6 = iVar12 * 8;
      }
    }
    iVar14 = iVar14 - iVar12;
    iVar15 = iVar14 >> 0x1f;
    pfVar16 = (float *)((int)pfVar16 + iVar6);
  } while (0 < iVar14);
  return;
}


// ==== FUN_00279e20 @ 00279e20 ====
// GLOBAL DAT_0043f8c8 undefined4
// GLOBAL DAT_0043f8e8 undefined8
// GLOBAL DAT_0043f900 undefined4

void FUN_00279e20(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4)

{
  ushort *puVar1;
  bool bVar2;
  ushort uVar3;
  float fVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined1 in_zero_qw [16];
  ushort *puVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined8 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_1e0;
  float afStack_1c0 [8];
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_150;
  float fStack_140;
  float fStack_13c;
  ushort *puStack_130;
  ushort *apuStack_12c [3];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 auStack_100 [16];
  int iStack_f0;
  int iStack_ec;
  int iStack_e0;
  undefined4 uStack_dc;
  
  uStack_11c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_120 = (undefined4)param_4;
  pfVar17 = (float *)param_2;
  uVar3 = *(ushort *)(pfVar17 + 9);
  if ((uVar3 & 0x10) != 0) {
    auVar29._8_4_ = in_a3_udw;
    auVar29._0_8_ = param_4;
    auVar29._12_4_ = in_register_0000007c;
    _por(in_zero_qw,auVar29);
    (*(code *)pfVar17[7])(param_2);
    return;
  }
  fVar4 = pfVar17[5];
  fVar26 = pfVar17[8];
  uStack_10c = uVar3 >> 2 & 1;
  uStack_108 = uVar3 >> 1 & 1;
  uStack_104 = uVar3 >> 3 & 1;
  uStack_1e0._0_4_ = (float)*(undefined8 *)((int)fVar4 + 8);
  uStack_110 = uVar3 & 1;
  uStack_1e0._4_4_ = (float)((ulong)*(undefined8 *)((int)fVar4 + 8) >> 0x20);
  fVar18 = (float)uStack_1e0 * fVar26;
  fVar20 = uStack_1e0._4_4_ * fVar26;
  uStack_118 = in_a3_udw;
  uStack_114 = in_register_0000007c;
  fVar21 = (float)FUN_00278f60(param_2);
  uStack_1e0 = *(long *)pfVar17;
  puStack_130 = (ushort *)pfVar17[4];
  fVar27 = pfVar17[2] / fVar26;
  iVar9 = 2;
  do {
    bVar2 = iVar9 != -1;
    iVar9 = iVar9 + -1;
  } while (bVar2);
  fVar28 = *(float *)((int)fVar4 + 0x10);
  FUN_002667e8(*(undefined4 *)((int)fVar4 + 4));
  if (uStack_104 != 0) {
    fStack_198 = (float)*(byte *)((int)pfVar17 + 0x1a);
    fStack_194 = (float)*(byte *)((int)pfVar17 + 0x1b);
    uStack_1a0 = CONCAT44((float)*(byte *)((int)pfVar17 + 0x19),(float)*(byte *)(pfVar17 + 6));
    auVar29 = _qmtc2(0x3c000000);
    pfVar10 = (float *)&DAT_0043f8c8;
    fVar25 = *param_3;
    iVar9 = 3;
    auVar30 = _qmtc2((float)*(byte *)(pfVar17 + 6));
    auVar31 = _vmulbc(auVar30,auVar29);
    pfVar11 = afStack_1c0;
    auVar30._4_4_ = uStack_11c;
    auVar30._0_4_ = uStack_120;
    auVar30._8_4_ = uStack_118;
    auVar30._12_4_ = uStack_114;
    auVar29 = _lqc2(auVar30);
    fVar23 = param_3[1];
    auVar29 = _vmul(auVar31,auVar29);
    fVar24 = param_3[2];
    auStack_100 = _sqc2(auVar29);
    do {
      fVar22 = *pfVar10;
      iVar9 = iVar9 + -1;
      pfVar6 = pfVar10 + 1;
      fVar19 = fVar23 * fVar22;
      pfVar10 = pfVar10 + 2;
      fVar22 = fVar25 * fVar22;
      fStack_140 = fVar24 * *pfVar6;
      uStack_160 = CONCAT44(fVar19,fVar22);
      fStack_13c = param_3[3] * *pfVar6;
      uStack_150 = CONCAT44(fStack_13c,fStack_140);
      uStack_180 = CONCAT44(fVar19 + fStack_13c,fVar22 + fStack_140);
      uStack_170 = uStack_180;
      uStack_190 = uStack_180;
      *(undefined8 *)pfVar11 = uStack_180;
      pfVar11 = pfVar11 + 2;
    } while (-1 < iVar9);
  }
  iStack_f0 = 1;
LAB_0027a08c:
  uVar3 = *puStack_130;
  do {
    if (uVar3 == 0) {
      return;
    }
    if (uStack_108 == 0) {
      if (uStack_10c != 0) {
        uVar3 = *puStack_130;
        goto LAB_0027a128;
      }
      iVar9 = FUN_00275340(puStack_130);
      apuStack_12c[0] = puStack_130 + iVar9;
    }
    else {
      if ((*puStack_130 == 0xd) || (*puStack_130 == 10)) {
        do {
          if (*puStack_130 != 10) goto LAB_0027a100;
          while( true ) {
            iStack_f0 = 1;
            uStack_1e0 = (ulong)(uint)(uStack_1e0._4_4_ + fVar26) << 0x20;
LAB_0027a100:
            puVar7 = puStack_130 + 1;
            puVar1 = puStack_130 + 1;
            puStack_130 = puVar7;
            if (*puVar1 == 0xd) break;
            if (*puVar1 != 10) goto LAB_0027a124;
          }
        } while( true );
      }
LAB_0027a124:
      uVar3 = *puStack_130;
LAB_0027a128:
      if (uVar3 == 0) {
        return;
      }
      if (uStack_10c == 0) {
LAB_0027a14c:
        fVar23 = pfVar17[1];
      }
      else {
        if (iStack_f0 == 0) {
          uStack_1e0._4_4_ = uStack_1e0._4_4_ + fVar26;
          goto LAB_0027a14c;
        }
        fVar23 = pfVar17[1];
      }
      iStack_f0 = 0;
      if (fVar23 + pfVar17[3] < uStack_1e0._4_4_) {
        return;
      }
      fVar23 = (float)FUN_00275ad0(fVar27,fVar4,puStack_130,&puStack_130,apuStack_12c,1);
      fVar23 = *pfVar17 + (fVar27 - fVar23) * fVar26 * fVar21;
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,fVar23);
      uVar3 = *puStack_130;
      if (uVar3 != 0) {
        iVar9 = *(int *)((int)fVar4 + (uVar3 & 0x7f) * 4 + 0x20);
        if (*(ushort *)(iVar9 + 0x1c) == uVar3) {
LAB_0027a1f8:
          fVar24 = *(float *)(iVar9 + 0x10);
        }
        else {
          iVar15 = iVar9;
          do {
            iVar9 = iVar15;
            if (iVar9 == *(int *)((int)fVar4 + 0x1c)) goto LAB_0027a1f8;
            iVar15 = iVar9 + 0x28;
          } while (*(ushort *)(iVar9 + 0x44) != uVar3);
          fVar24 = *(float *)(iVar9 + 0x38);
        }
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,fVar23 - fVar26 * fVar24);
      }
    }
    if (puStack_130 == apuStack_12c[0]) goto LAB_0027a08c;
    fVar23 = 0.16;
    iStack_ec = (int)fVar4 + 0x20;
    iVar9 = 0x3c0000;
    uVar14 = 0;
    do {
      puVar12 = *(undefined8 **)(iVar9 + 0x9e4);
      puVar13 = &DAT_0043f8e8;
      pfVar11 = (float *)&DAT_0043f900;
      iVar15 = 0;
      do {
        uVar3 = *puStack_130;
        pfVar10 = *(float **)(iStack_ec + (uVar3 & 0x7f) * 4);
        if (*(ushort *)(pfVar10 + 7) == uVar3) {
          fVar24 = *pfVar10;
        }
        else {
          pfVar6 = pfVar10;
          if (pfVar10 == *(float **)((int)fVar4 + 0x1c)) {
            fVar24 = *pfVar10;
          }
          else {
            do {
              pfVar10 = pfVar6 + 10;
              if (*(ushort *)(pfVar6 + 0x11) == uVar3) {
                fVar24 = *pfVar10;
                goto LAB_0027a2c4;
              }
              pfVar6 = pfVar10;
            } while (pfVar10 != *(float **)((int)fVar4 + 0x1c));
            fVar24 = *pfVar10;
          }
        }
LAB_0027a2c4:
        if (0.0 <= fVar24) {
          puVar12[3] = *(undefined8 *)pfVar10;
          uStack_190 = CONCAT44(pfVar10[1] + pfVar10[3],*pfVar10 + pfVar10[2]);
          puVar12[2] = uStack_190;
          if (pfVar10[8] == 0.0) {
            uStack_180 = CONCAT44(uStack_1e0._4_4_ + pfVar10[5] * fVar20,
                                  (float)uStack_1e0 + pfVar10[4] * fVar18);
            *(undefined8 *)pfVar11 = uStack_180;
            uStack_180 = CONCAT44(fVar20 * pfVar10[3],fVar18 * pfVar10[2]);
            uStack_190 = uStack_180;
            uStack_180 = CONCAT44(pfVar11[1] + fVar20 * pfVar10[3],*pfVar11 + fVar18 * pfVar10[2]);
            uStack_1a0 = uStack_180;
          }
          else {
            fVar19 = uStack_1e0._4_4_ + fVar20 * pfVar10[3] * (1.0 - fVar28) + pfVar10[5] * fVar20;
            pfVar11[1] = fVar19;
            uStack_170 = CONCAT44(fVar20 * fVar28,fVar18 * fVar28);
            fVar22 = (float)uStack_1e0 + pfVar10[4] * fVar18;
            uStack_180 = uStack_170;
            *pfVar11 = fVar22;
            fVar25 = fVar18 * fVar28 * pfVar10[2];
            fVar24 = fVar20 * fVar28 * pfVar10[3];
            uStack_170 = CONCAT44(fVar24,fVar25);
            uStack_190 = uStack_170;
            uStack_170 = CONCAT44(fVar19 + fVar24,fVar22 + fVar25);
            uStack_1a0 = uStack_170;
          }
          *(undefined8 *)(pfVar11 + -2) = uStack_1a0;
          pfVar11[-4] = *pfVar11;
          pfVar11[-3] = pfVar11[-1];
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar12 + 3);
          *(undefined4 *)((int)puVar12 + 0xc) = *(undefined4 *)((int)puVar12 + 0x14);
          pfVar11[3] = *(float *)((int)puVar13 + 0x1c);
          pfVar11[2] = pfVar11[-2];
          *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar12 + 2);
          *(undefined4 *)((int)puVar12 + 0x24) = *(undefined4 *)((int)puVar12 + 0x1c);
          if (uStack_110 != 0) {
            fVar24 = uStack_1e0._4_4_ + fVar26;
            pfVar11[-4] = pfVar11[-4] + (fVar24 - pfVar11[-3]) * fVar23;
            pfVar11[-2] = pfVar11[-2] + (fVar24 - pfVar11[-1]) * fVar23;
            fVar25 = *(float *)((int)puVar13 + 0x1c);
            pfVar11[2] = pfVar11[2] + (fVar24 - pfVar11[3]) * fVar23;
            *pfVar11 = *pfVar11 + (fVar24 - fVar25) * fVar23;
          }
          puVar13 = puVar13 + 5;
          iVar15 = iVar15 + 5;
          *(undefined8 *)(pfVar11 + -6) = *(undefined8 *)(pfVar11 + -4);
          pfVar11 = pfVar11 + 10;
          *puVar12 = puVar12[1];
          puVar12 = puVar12 + 5;
        }
        puStack_130 = puStack_130 + 1;
        iVar16 = iVar15;
        if (puStack_130 == apuStack_12c[0]) break;
        iVar16 = iVar15 + 1;
        iVar8 = iVar15 + 7;
        puVar13 = puVar13 + 1;
        *(undefined8 *)(pfVar11 + -6) = *(undefined8 *)(pfVar11 + -8);
        pfVar11 = pfVar11 + 2;
        *puVar12 = puVar12[-1];
        puVar12 = puVar12 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0 + pfVar10[6] * fVar18);
        iVar15 = iVar16;
      } while (iVar8 < 0x97);
      if (3 < iVar16) {
        pfVar11 = (float *)&DAT_0043f8e8;
        iVar15 = iVar16;
        if (0 < iVar16) {
          do {
            iVar15 = iVar15 + -1;
            fVar25 = *param_3 * *pfVar11;
            fVar24 = param_3[1] * *pfVar11;
            fVar22 = param_3[2] * pfVar11[1];
            uStack_170 = CONCAT44(fVar24,fVar25);
            fVar19 = param_3[3] * pfVar11[1];
            uStack_150 = CONCAT44(fVar19,fVar22);
            uStack_160 = uStack_150;
            uStack_190 = CONCAT44(fVar24 + fVar19,fVar25 + fVar22);
            *(undefined8 *)pfVar11 = uStack_190;
            uStack_180 = uStack_190;
            pfVar11 = pfVar11 + 2;
            uStack_1a0 = uStack_190;
          } while (iVar15 != 0);
        }
        uVar5 = *(undefined4 *)(iVar9 + 0x9e4);
        iStack_e0 = iVar9;
        uStack_dc = uVar14;
        if (uStack_104 != 0) {
          pfVar11 = afStack_1c0;
          iVar9 = 3;
          do {
            fVar24 = *pfVar11;
            pfVar10 = pfVar11 + 1;
            pfVar11 = pfVar11 + 2;
            iVar9 = iVar9 + -1;
            uStack_190 = CONCAT44(param_3[5] + *pfVar10,param_3[4] + fVar24);
            uStack_1a0 = uStack_190;
            FUN_002679e8(auStack_100._0_8_,&uStack_1a0,iVar16,&DAT_0043f8e8,
                         *(undefined4 *)(iStack_e0 + 0x9e4));
          } while (-1 < iVar9);
          uVar5 = *(undefined4 *)(iStack_e0 + 0x9e4);
        }
        FUN_002679e8(CONCAT44(uStack_11c,uStack_120),param_3 + 4,iVar16,&DAT_0043f8e8,uVar5);
        iVar9 = iStack_e0;
        uVar14 = uStack_dc;
      }
    } while (puStack_130 != apuStack_12c[0]);
    uVar3 = *puStack_130;
  } while( true );
}


// ==== FUN_0027a738 @ 0027a738 ====

void FUN_0027a738(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00272aa8();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar2 = *(int *)(param_1 + 0xc);
    while( true ) {
      iVar1 = iVar3 * 0x10;
      iVar3 = iVar3 + 1;
      FUN_00279250(*(undefined4 *)(iVar1 + iVar2 + 8));
      if (*(int *)(param_1 + 8) <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}


// ==== FUN_0027a798 @ 0027a798 ====

void FUN_0027a798(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}


// ==== FUN_0027a7a8 @ 0027a7a8 ====

void FUN_0027a7a8(int param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}


// ==== FUN_0027a7b0 @ 0027a7b0 ====

void FUN_0027a7b0(undefined4 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_2;
  if (0 < *(int *)(iVar5 + 0x38)) {
    iVar2 = *(int *)(iVar5 + 0x34);
    while( true ) {
      iVar3 = iVar4 * 8;
      iVar4 = iVar4 + 1;
      piVar1 = *(int **)(iVar3 + iVar2);
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0x2c))(param_1,(int)piVar1 + (int)*(short *)(iVar2 + 0x28),param_2);
      if (*(int *)(iVar5 + 0x38) <= iVar4) break;
      iVar2 = *(int *)(iVar5 + 0x34);
    }
  }
  return;
}


// ==== FUN_0027a838 @ 0027a838 ====

undefined8 FUN_0027a838(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_4c;
  float fStack_48;
  
  iVar11 = 0;
  bVar3 = true;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      bVar4 = false;
      if (bVar3) {
        piVar5 = (int *)(iVar11 * 8 + *(int *)(param_1 + 0x34));
        piVar1 = (int *)*piVar5;
        iVar2 = *piVar1;
        lVar6 = (**(code **)(iVar2 + 0x1c))((int)piVar1 + (int)*(short *)(iVar2 + 0x18),piVar5[1]);
        bVar4 = false;
        if (lVar6 != 0) {
          bVar4 = true;
        }
      }
      bVar3 = bVar4;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x38));
  }
  uVar7 = 0;
  if (bVar3) {
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar15 = _vsub(in_vf0,in_vf0);
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar19 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _vaddbc(auVar17,auVar19);
    auVar15 = _sqc2(auVar15);
    auVar14 = _vaddbc(auVar13,auVar16);
    auVar13 = _sqc2(auVar17);
    auVar8 = _qmfc2(auVar14._0_4_);
    auVar14 = _sqc2(auVar19);
    auVar18 = _sqc2(auVar16);
    pauVar10 = (undefined1 (*) [16])(param_1 + 0x10);
    uStack_60 = auVar15._0_4_;
    uStack_5c = auVar15._4_4_;
    uStack_58 = auVar15._8_4_;
    uStack_54 = auVar15._12_4_;
    if (0.0 < auVar8._0_4_) {
      _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
      auVar15 = _vsubbc(auVar19,auVar16);
      auVar15 = _vaddbc(in_vf0,auVar15);
      auVar13 = _vsubbc(auVar16,auVar17);
      _vmove(auVar15);
      auVar18 = _vaddbc(in_vf0,auVar13);
      fVar12 = SQRT(auVar8._0_4_ + 1.0);
      auVar13 = _vsubbc(auVar17,auVar19);
      _vmove(auVar18);
      auVar15 = _sqc2(auVar15);
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar15;
      auVar14 = _vaddbc(in_vf0,auVar13);
      auVar15 = _sqc2(auVar18);
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar15;
      auVar13 = _qmtc2(0.5 / fVar12);
      auVar15 = _vmove(auVar14);
      auVar13 = _vmulbc(auVar15,auVar13);
      auVar15 = _sqc2(auVar14);
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar15;
      auVar15 = _sqc2(auVar13);
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar15;
      auVar15 = _qmtc2(fVar12 * 0.5);
      auVar15 = _vmulbc(in_vf0,auVar15);
      auVar15 = _sqc2(auVar15);
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar15;
    }
    else {
      auVar15 = _sqc2(auVar19);
      auVar8 = _qmfc2(auVar17._0_4_);
      fStack_4c = auVar15._4_4_;
      if (fStack_4c <= auVar8._0_4_) {
        auVar15 = _sqc2(auVar16);
        fStack_48 = auVar15._8_4_;
        uVar9 = (uint)(auVar8._0_4_ < fStack_48) << 1;
      }
      else {
        auVar15 = _sqc2(auVar16);
        fStack_48 = auVar15._8_4_;
        auVar15 = _sqc2(auVar19);
        fStack_4c = auVar15._4_4_;
        uVar9 = 1;
        if (fStack_4c < fStack_48) {
          uVar9 = 2;
        }
      }
      if (uVar9 == 1) {
        auVar8 = _lqc2(auVar13);
        auVar17 = _qmtc2(0x3f800000);
        auVar16 = _lqc2(auVar18);
        auVar15 = _lqc2(auVar14);
        auVar8 = _vaddbc(auVar16,auVar8);
        auVar15 = _vsubbc(auVar15,auVar8);
        _lqc2(*pauVar10);
        auVar15 = _vaddbc(auVar15,auVar17);
        auVar15 = _sqc2(auVar15);
        fStack_4c = auVar15._4_4_;
        auVar18 = _lqc2(auVar18);
        auVar17 = _lqc2(auVar13);
        auVar15 = _qmtc2(SQRT(fStack_4c) * 0.5);
        auVar8 = _qmtc2(0.5 / SQRT(fStack_4c));
        auVar16 = _vaddbc(in_vf0,auVar15);
        auVar15 = _vsubbc(auVar18,auVar17);
        auVar14 = _lqc2(auVar14);
        auVar15 = _vmulbc(auVar15,auVar8);
        _vmove(auVar16);
        auVar13 = _vaddbc(auVar14,auVar18);
        auVar18 = _vmulbc(in_vf0,auVar15);
        auVar15 = _sqc2(auVar16);
        *pauVar10 = auVar15;
        auVar15 = _vmulbc(auVar13,auVar8);
        _vmove(auVar18);
        auVar13 = _vaddbc(in_vf0,auVar15);
        auVar15 = _sqc2(auVar18);
        *pauVar10 = auVar15;
        auVar14 = _vaddbc(auVar14,auVar17);
        auVar15 = _sqc2(auVar13);
        *pauVar10 = auVar15;
        auVar15 = _vmulbc(auVar14,auVar8);
        auVar15 = _vaddbc(in_vf0,auVar15);
        auVar15 = _sqc2(auVar15);
        *pauVar10 = auVar15;
      }
      else if (uVar9 < 2) {
        if (uVar9 == 0) {
          auVar18 = _lqc2(auVar18);
          auVar8 = _qmtc2(0x3f800000);
          auVar14 = _lqc2(auVar14);
          auVar13 = _lqc2(auVar13);
          auVar15 = _vaddbc(auVar14,auVar18);
          auVar15 = _vsubbc(auVar13,auVar15);
          auVar15 = _vaddbc(auVar15,auVar8);
          auVar16 = _vsubbc(auVar14,auVar18);
          auVar15 = _qmfc2(auVar15._0_4_);
          auVar14 = _vaddbc(auVar13,auVar14);
          _lqc2(*pauVar10);
          auVar18 = _vaddbc(auVar13,auVar18);
          auVar13 = _qmtc2(SQRT(auVar15._0_4_) * 0.5);
          auVar8 = _qmtc2(0.5 / SQRT(auVar15._0_4_));
          auVar17 = _vaddbc(in_vf0,auVar13);
          auVar15 = _vmulbc(auVar16,auVar8);
          _vmove(auVar17);
          auVar13 = _vmulbc(auVar14,auVar8);
          auVar16 = _vmulbc(in_vf0,auVar15);
          auVar15 = _sqc2(auVar17);
          *pauVar10 = auVar15;
          _vmove(auVar16);
          auVar14 = _vmulbc(auVar18,auVar8);
          auVar13 = _vaddbc(in_vf0,auVar13);
          auVar15 = _sqc2(auVar16);
          *pauVar10 = auVar15;
          auVar15 = _sqc2(auVar13);
          *pauVar10 = auVar15;
          auVar15 = _vaddbc(in_vf0,auVar14);
          auVar15 = _sqc2(auVar15);
          *pauVar10 = auVar15;
        }
      }
      else if (uVar9 == 2) {
        auVar8 = _lqc2(auVar14);
        auVar17 = _qmtc2(0x3f800000);
        auVar16 = _lqc2(auVar13);
        auVar15 = _lqc2(auVar18);
        auVar8 = _vaddbc(auVar16,auVar8);
        auVar15 = _vsubbc(auVar15,auVar8);
        _lqc2(*pauVar10);
        auVar15 = _vaddbc(auVar15,auVar17);
        auVar15 = _sqc2(auVar15);
        fStack_48 = auVar15._8_4_;
        auVar13 = _lqc2(auVar13);
        auVar17 = _lqc2(auVar14);
        auVar15 = _qmtc2(SQRT(fStack_48) * 0.5);
        auVar8 = _qmtc2(0.5 / SQRT(fStack_48));
        auVar16 = _vaddbc(in_vf0,auVar15);
        auVar15 = _vsubbc(auVar13,auVar17);
        auVar14 = _lqc2(auVar18);
        auVar15 = _vmulbc(auVar15,auVar8);
        _vmove(auVar16);
        auVar13 = _vaddbc(auVar14,auVar13);
        auVar18 = _vmulbc(in_vf0,auVar15);
        auVar15 = _sqc2(auVar16);
        *pauVar10 = auVar15;
        auVar15 = _vmulbc(auVar13,auVar8);
        _vmove(auVar18);
        auVar13 = _vaddbc(in_vf0,auVar15);
        auVar15 = _sqc2(auVar18);
        *pauVar10 = auVar15;
        auVar14 = _vaddbc(auVar14,auVar17);
        auVar15 = _sqc2(auVar13);
        *pauVar10 = auVar15;
        auVar15 = _vmulbc(auVar14,auVar8);
        auVar15 = _vaddbc(in_vf0,auVar15);
        auVar15 = _sqc2(auVar15);
        *pauVar10 = auVar15;
      }
    }
    uVar7 = 1;
    *(undefined4 *)(param_1 + 0x20) = uStack_60;
    *(undefined4 *)(param_1 + 0x24) = uStack_5c;
    *(undefined4 *)(param_1 + 0x28) = uStack_58;
    *(undefined4 *)(param_1 + 0x2c) = uStack_54;
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  return uVar7;
}


// ==== FUN_0027ac40 @ 0027ac40 ====

void FUN_0027ac40(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar4 = *(int *)(param_1 + 0x34);
    while( true ) {
      iVar2 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      piVar3 = (int *)(iVar2 + iVar4);
      piVar1 = (int *)*piVar3;
      iVar4 = *piVar1;
      (**(code **)(iVar4 + 0x24))((int)piVar1 + (int)*(short *)(iVar4 + 0x20),piVar3[1]);
      if (*(int *)(param_1 + 0x38) <= iVar5) break;
      iVar4 = *(int *)(param_1 + 0x34);
    }
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}


// ==== FUN_0027acc8 @ 0027acc8 ====

void FUN_0027acc8(void)

{
  return;
}


// ==== FUN_0027acd0 @ 0027acd0 ====

void FUN_0027acd0(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [12];
  float fVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  float fVar7;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  auVar11 = _qmtc2(0x3fb504f3);
  pauVar5 = (undefined1 (*) [16])param_1;
  _lqc2(auStack_d0);
  auVar9 = _lqc2(*(undefined1 (*) [16])(*(int *)(pauVar5[6] + 8) + 0x10));
  auVar10 = _vmulbc(auVar9,auVar11);
  auVar9 = _vmulbc(auVar10,auVar10);
  auVar12 = _vmulbc(auVar10,auVar10);
  auVar9 = _sqc2(auVar9);
  auVar13 = _vmulbc(auVar10,auVar10);
  auVar14 = _vmulbc(auVar10,auVar10);
  auVar17 = _vmulbc(auVar10,auVar10);
  auVar11 = _vmulbc(auVar10,auVar10);
  auVar19 = _vmulbc(auVar10,auVar10);
  fStack_8c = auVar9._4_4_;
  fVar4 = fStack_8c;
  auVar11 = _qmfc2(auVar11._0_4_);
  auVar9 = _sqc2(auVar12);
  fVar6 = 1.0 - fStack_8c;
  auVar12 = _vmulbc(auVar10,auVar10);
  fVar7 = 1.0 - auVar11._0_4_;
  auVar11 = _vmulbc(auVar10,auVar10);
  fStack_8c = auVar9._4_4_;
  auVar11 = _qmfc2(auVar11._0_4_);
  auVar9 = _sqc2(auVar13);
  auVar10 = _qmfc2(auVar12._0_4_);
  _lqc2(auStack_c0);
  _lqc2(auStack_b0);
  fStack_88 = auVar9._8_4_;
  auVar9 = _sqc2(auVar14);
  auVar12 = _qmtc2(fVar6 - fStack_88);
  fStack_84 = auVar9._12_4_;
  auVar9 = _sqc2(auVar17);
  auVar13 = _vaddbc(in_vf0,auVar12);
  fVar8 = fStack_8c - fStack_84;
  _vmove(auVar13);
  fStack_8c = fStack_8c + fStack_84;
  fStack_84 = auVar9._12_4_;
  auVar9 = _sqc2(auVar19);
  auVar12 = _qmtc2(auVar11._0_4_ + fStack_84);
  fVar6 = auVar11._0_4_ - fStack_84;
  fStack_84 = auVar9._12_4_;
  auVar12 = _vaddbc(in_vf0,auVar12);
  _vmove(auVar12);
  _sqc2(auVar13);
  auVar9 = _qmtc2(auVar10._0_4_ - fStack_84);
  auVar13 = _vaddbc(in_vf0,auVar9);
  auVar11 = _qmtc2(auVar10._0_4_ + fStack_84);
  auVar9 = _qmtc2(fVar7 - fStack_88);
  auVar10 = _qmtc2(fVar8);
  _vmove(auVar13);
  auVar22 = _vaddbc(in_vf0,auVar11);
  auVar19 = _vaddbc(in_vf0,auVar9);
  auVar10 = _vaddbc(in_vf0,auVar10);
  auVar9 = _qmtc2(fVar6);
  _vmove(auVar22);
  auVar15 = _vaddbc(in_vf0,auVar9);
  _sqc2(auVar13);
  _sqc2(auVar12);
  auVar9 = _qmtc2(fStack_8c);
  auVar11 = _qmtc2(fVar7 - fVar4);
  _vmove(auVar19);
  _vmove(auVar10);
  auVar17 = _vaddbc(in_vf0,auVar9);
  auVar14 = _vaddbc(in_vf0,auVar11);
  _sqc2(auVar22);
  _sqc2(auVar19);
  _sqc2(auVar10);
  _sqc2(auVar15);
  _sqc2(auVar17);
  _sqc2(auVar14);
  _sqc2(auVar15);
  _sqc2(auVar17);
  _sqc2(auVar14);
  auVar9 = _sqc2(auVar15);
  auVar11 = _sqc2(auVar17);
  auVar10 = _sqc2(auVar14);
  pauVar1 = (undefined1 (*) [16])(*(int *)(pauVar5[6] + 8) + 0x20);
  auVar3 = *(undefined1 (*) [12])*pauVar1;
  auVar22 = *pauVar1;
  auVar19 = *pauVar1;
  _sqc2(auVar15);
  auVar12 = _sqc2(auVar17);
  auVar13 = _sqc2(auVar14);
  _sqc2(auVar17);
  _sqc2(auVar14);
  auVar14 = _sqc2(auVar15);
  iVar2 = *(int *)(*(int *)(pauVar5[5] + 8) + 4);
  auVar17 = _sqc2(auVar15);
  uStack_190 = auVar17._0_4_;
  *(undefined4 *)(iVar2 + 0x10) = uStack_190;
  uStack_18c = auVar17._4_4_;
  *(undefined4 *)(iVar2 + 0x14) = uStack_18c;
  uStack_188 = auVar17._8_4_;
  *(undefined4 *)(iVar2 + 0x18) = uStack_188;
  uStack_190 = auVar12._0_4_;
  *(undefined4 *)(iVar2 + 0x20) = uStack_190;
  uStack_18c = auVar12._4_4_;
  *(undefined4 *)(iVar2 + 0x24) = uStack_18c;
  uStack_188 = auVar12._8_4_;
  *(undefined4 *)(iVar2 + 0x28) = uStack_188;
  uStack_190 = auVar13._0_4_;
  *(undefined4 *)(iVar2 + 0x30) = uStack_190;
  uStack_18c = auVar13._4_4_;
  *(undefined4 *)(iVar2 + 0x34) = uStack_18c;
  uStack_188 = auVar13._8_4_;
  *(undefined4 *)(iVar2 + 0x38) = uStack_188;
  *(int *)(iVar2 + 0x40) = auVar3._0_4_;
  *(int *)(iVar2 + 0x44) = auVar3._4_4_;
  *(int *)(iVar2 + 0x48) = auVar3._8_4_;
  *(undefined4 *)(iVar2 + 0x1c) = 3;
  FUN_002a5b60(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x1c) = 3;
  FUN_002aa288(iVar2);
  FUN_0027b2f0(**(undefined4 **)(pauVar5[6] + 8),param_1);
  auVar17 = _qmtc2(*(undefined4 *)pauVar5[5]);
  _lqc2(auStack_70);
  _vaddbc(in_vf0,auVar17);
  auVar17 = _pextlw(0,0xffffffffbf000000);
  auVar15 = _qmtc2(*(undefined4 *)(pauVar5[5] + 4));
  _lqc2(auStack_80);
  auVar18 = _vaddbc(in_vf0,auVar15);
  auVar17 = _pextlw(0x3f000000,auVar17._0_8_);
  _lqc2(auStack_60);
  auVar21 = _qmtc2(auVar17._0_4_);
  auVar15 = _qmtc2(*(undefined4 *)(pauVar5[4] + 4));
  auVar17 = _qmtc2(*(undefined4 *)pauVar5[4]);
  auVar23 = _lqc2(auVar13);
  _vaddbc(in_vf0,auVar17);
  auVar16 = _lqc2(auVar12);
  auVar12 = _vmulbc(auVar18,auVar21);
  auVar13 = _vaddbc(in_vf0,auVar15);
  auVar17 = _vaddbc(in_vf0,auVar12);
  auVar15 = _vmulbc(auVar18,auVar21);
  auVar12 = _vmulbc(auVar17,auVar13);
  _vmove(auVar17);
  auVar12 = _vsubbc(auVar21,auVar12);
  auVar14 = _lqc2(auVar14);
  auVar18 = _vaddbc(in_vf0,auVar12);
  auVar17 = _vmulbc(auVar14,auVar17);
  _vmove(auVar18);
  auVar14 = _vmulbc(auVar23,auVar18);
  auVar12 = _vaddbc(in_vf0,auVar15);
  auVar17 = _vadd(auVar17,auVar14);
  auVar13 = _vmulbc(auVar12,auVar13);
  _vmove(auVar12);
  auVar13 = _vaddbc(auVar21,auVar13);
  auVar15 = _vmulbc(auVar16,auVar12);
  auVar20 = _vaddbc(in_vf0,auVar13);
  auVar14 = _lqc2(auVar22);
  auVar12 = _vmulbc(auVar23,auVar20);
  auVar16 = _vaddbc(in_vf0,in_vf0);
  auVar22 = _vadd(auVar15,auVar12);
  auVar13 = _vmul(auVar14,auVar17);
  auVar12 = _vmul(auVar14,auVar22);
  _vaddabc(auVar13,auVar13);
  auVar13 = _vmaddbc(auVar16,auVar13);
  auVar14 = _vmul(auVar14,auVar23);
  _vaddabc(auVar12,auVar12);
  auVar12 = _vmaddbc(auVar16,auVar12);
  auVar15 = _vaddbc(auVar18,auVar13);
  _vaddabc(auVar14,auVar14);
  auVar13 = _vmaddbc(auVar16,auVar14);
  _lqc2(auVar19);
  auVar14 = _vsubbc(auVar21,auVar15);
  auVar14 = _vaddbc(in_vf0,auVar14);
  auVar12 = _vaddbc(auVar20,auVar12);
  _lqc2(auVar9);
  auVar12 = _vsubbc(auVar21,auVar12);
  _lqc2(auVar11);
  auVar19 = _vaddbc(in_vf0,auVar17);
  _lqc2(auVar10);
  auVar9 = _vaddbc(in_vf0,auVar17);
  _vmove(auVar14);
  auVar11 = _vaddbc(in_vf0,auVar17);
  auVar15 = _vaddbc(in_vf0,auVar12);
  _vmove(auVar19);
  _vmove(auVar9);
  auVar10 = _vsub(in_vf0,auVar13);
  _vmove(auVar11);
  auVar13 = _vaddbc(in_vf0,auVar22);
  _vmove(auVar15);
  auVar17 = _vaddbc(in_vf0,auVar22);
  _sqc2(auVar9);
  auVar12 = _vaddbc(in_vf0,auVar10);
  _sqc2(auVar11);
  auVar22 = _vaddbc(in_vf0,auVar22);
  _sqc2(auVar19);
  _sqc2(auVar14);
  _vmove(auVar13);
  _vmove(auVar17);
  auVar9 = _vaddbc(in_vf0,auVar23);
  _vmove(auVar22);
  auVar11 = _vaddbc(in_vf0,auVar23);
  auVar10 = _vaddbc(in_vf0,auVar23);
  _sqc2(auVar13);
  _sqc2(auVar17);
  _sqc2(auVar22);
  _sqc2(auVar15);
  _sqc2(auVar21);
  _sqc2(auVar9);
  _sqc2(auVar11);
  _sqc2(auVar10);
  _sqc2(auVar12);
  _sqc2(auVar9);
  _sqc2(auVar11);
  _sqc2(auVar10);
  _sqc2(auVar12);
  auVar9 = _sqc2(auVar9);
  *pauVar5 = auVar9;
  auVar9 = _sqc2(auVar12);
  pauVar5[3] = auVar9;
  auVar9 = _sqc2(auVar11);
  pauVar5[1] = auVar9;
  auVar9 = _sqc2(auVar10);
  pauVar5[2] = auVar9;
  return;
}


// ==== FUN_0027b148 @ 0027b148 ====

void FUN_0027b148(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_002a8f78();
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar2 = FUN_002aa2e8();
  *(int *)(param_1 + 0x5c) = (int)uVar2;
  FUN_002af778(*(undefined4 *)(param_1 + 0x58),uVar2);
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar1 = FUN_002ac468(param_2,param_3,param_4,2);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = FUN_002ac468(param_2,param_3,0,1);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x84) = 0x3e800000;
  FUN_002a9240(0x3e800000,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x88) = 0x44fa0000;
  FUN_002a9310(0x44fa0000,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(int *)(param_1 + 0x80) = (int)param_4;
  *(undefined4 *)(param_1 + 0x74) = 0x3faaaaab;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(int *)(param_1 + 0x78) = (int)param_2;
  *(int *)(param_1 + 0x7c) = (int)param_3;
  return;
}


// ==== FUN_0027b260 @ 0027b260 ====

void FUN_0027b260(int param_1)

{
  FUN_002ac568(*(undefined4 *)(param_1 + 0x60));
  FUN_002ac568(*(undefined4 *)(param_1 + 100));
  FUN_002aa340(*(undefined4 *)(param_1 + 0x5c));
  FUN_002af778(*(undefined4 *)(param_1 + 0x58),0);
  FUN_002a9178(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}


// ==== FUN_0027b2c8 @ 0027b2c8 ====

undefined4 FUN_0027b2c8(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0xbf800000;
  return 1;
}


// ==== FUN_0027b2e0 @ 0027b2e0 ====

void FUN_0027b2e0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x68) = param_2;
  *(int *)(param_2 + 0x30) = param_1;
  return;
}


// ==== FUN_0027b2f0 @ 0027b2f0 ====

void FUN_0027b2f0(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0029dd08(param_1 * 0.5 * 0.017453292);
  fVar2 = fVar2 * *(float *)(param_2 + 0x70);
  fVar1 = fVar2 / *(float *)(param_2 + 0x74);
  *(float *)(param_2 + 0x48) = fVar2;
  *(float *)(param_2 + 0x4c) = fVar1;
  *(float *)(param_2 + 0x54) = 1.0 / fVar1;
  *(float *)(param_2 + 0x50) = 1.0 / *(float *)(param_2 + 0x48);
  FUN_002a91d8(*(undefined4 *)(param_2 + 0x58),param_2 + 0x48);
  *(float *)(param_2 + 0x6c) = param_1;
  return;
}


// ==== FUN_0027b388 @ 0027b388 ====

void FUN_0027b388(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x74) = param_1;
  return;
}


// ==== FUN_0027b390 @ 0027b390 ====

void FUN_0027b390(int param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_002ac628(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x60));
  iVar2 = (int)param_3;
  if (*(int *)(param_2 + 100) == 0) {
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  else {
    FUN_002ac628(*(undefined4 *)(param_1 + 100),*(int *)(param_2 + 100),param_3);
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  return;
}


// ==== FUN_0027b408 @ 0027b408 ====

void FUN_0027b408(undefined1 (*param_1) [16],int param_2)

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar1 = _pextlw((long)*(int *)(param_2 + 0x9c),(long)*(int *)(param_2 + 0x94));
  auVar1 = _pextlw((long)*(int *)(param_2 + 0x98),auVar1._0_8_);
  auVar1 = _qmtc2(auVar1._0_4_);
  _vadd(in_vf0,auVar1);
  auVar2 = _qmtc2(*(undefined4 *)(param_2 + 0xa0));
  auVar1 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _vaddbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  _lqc2(param_1[2]);
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xb0),(long)*(int *)(param_2 + 0xa8));
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xac),auVar1._0_8_);
  auVar1 = _qmtc2(auVar1._0_4_);
  _vadd(in_vf0,auVar1);
  auVar2 = _qmtc2(*(undefined4 *)(param_2 + 0xb4));
  auVar1 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _vaddbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  param_1[1] = auVar1;
  _lqc2(param_1[3]);
  _lqc2(param_1[4]);
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xc4),(long)*(int *)(param_2 + 0xbc));
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xc0),auVar1._0_8_);
  auVar1 = _qmtc2(auVar1._0_4_);
  _vadd(in_vf0,auVar1);
  auVar2 = _qmtc2(*(undefined4 *)(param_2 + 200));
  auVar1 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _vaddbc(auVar1,auVar2);
  _lqc2(param_1[5]);
  auVar5 = _vaddbc(in_vf0,auVar1);
  auVar4 = _vaddbc(in_vf0,auVar1);
  auVar3 = _vaddbc(in_vf0,auVar1);
  auVar2 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar5);
  param_1[2] = auVar1;
  auVar1 = _sqc2(auVar4);
  param_1[3] = auVar1;
  auVar1 = _sqc2(auVar3);
  param_1[4] = auVar1;
  auVar1 = _sqc2(auVar2);
  param_1[5] = auVar1;
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xd8),(long)*(int *)(param_2 + 0xd0));
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xd4),auVar1._0_8_);
  auVar1 = _qmtc2(auVar1._0_4_);
  _vadd(in_vf0,auVar1);
  auVar2 = _qmtc2(*(undefined4 *)(param_2 + 0xdc));
  auVar1 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _vaddbc(auVar1,auVar2);
  auVar5 = _vaddbc(in_vf0,auVar1);
  auVar4 = _vaddbc(in_vf0,auVar1);
  auVar3 = _vaddbc(in_vf0,auVar1);
  auVar2 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar5);
  param_1[2] = auVar1;
  auVar1 = _sqc2(auVar4);
  param_1[3] = auVar1;
  auVar1 = _sqc2(auVar3);
  param_1[4] = auVar1;
  auVar1 = _sqc2(auVar2);
  param_1[5] = auVar1;
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xec),(long)*(int *)(param_2 + 0xe4));
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xe8),auVar1._0_8_);
  auVar1 = _qmtc2(auVar1._0_4_);
  _vadd(in_vf0,auVar1);
  auVar2 = _qmtc2(*(undefined4 *)(param_2 + 0xf0));
  auVar1 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _vaddbc(auVar1,auVar2);
  auVar5 = _vaddbc(in_vf0,auVar1);
  auVar4 = _vaddbc(in_vf0,auVar1);
  auVar3 = _vaddbc(in_vf0,auVar1);
  auVar2 = _vaddbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar5);
  param_1[2] = auVar1;
  auVar1 = _sqc2(auVar4);
  param_1[3] = auVar1;
  auVar1 = _sqc2(auVar3);
  param_1[4] = auVar1;
  auVar1 = _sqc2(auVar2);
  param_1[5] = auVar1;
  auVar1 = _pextlw((long)*(int *)(param_2 + 0x100),(long)*(int *)(param_2 + 0xf8));
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xfc),auVar1._0_8_);
  auVar1 = _qmtc2(auVar1._0_4_);
  _vadd(in_vf0,auVar1);
  auVar2 = _qmtc2(*(undefined4 *)(param_2 + 0x104));
  auVar1 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _vaddbc(auVar1,auVar2);
  auVar2 = _vmove(auVar1);
  auVar5 = _vmulbc(in_vf0,auVar1);
  auVar4 = _vmulbc(in_vf0,auVar1);
  auVar3 = _vmulbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar2);
  param_1[5] = auVar1;
  auVar1 = _sqc2(auVar5);
  param_1[2] = auVar1;
  auVar1 = _sqc2(auVar4);
  param_1[3] = auVar1;
  auVar1 = _sqc2(auVar3);
  param_1[4] = auVar1;
  return;
}


// ==== FUN_0027b648 @ 0027b648 ====

void FUN_0027b648(undefined4 *param_1,undefined8 param_2,int param_3)

{
  param_1[2] = (int)param_2;
  param_1[3] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  memset(param_2,0,param_3 << 5);
  return;
}


// ==== FUN_0027b688 @ 0027b688 ====

int FUN_0027b688(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 * 0x20 + param_1[2] + 0x1e) == '\0') {
    *param_1 = iVar1;
  }
  else {
    do {
      iVar1 = iVar1 + 1;
      if (param_1[3] <= iVar1) {
        iVar1 = 0;
      }
    } while (*(char *)(iVar1 * 0x20 + param_1[2] + 0x1e) != '\0');
    *param_1 = iVar1;
  }
  return iVar1;
}


// ==== FUN_0027b6d8 @ 0027b6d8 ====

int FUN_0027b6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0027ba68(param_3,param_4,param_5);
  iVar2 = FUN_0027b688(param_1);
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 8) + iVar2 * 0x20;
  *(int *)(iVar2 + 0xc) = (int)param_3;
  *(int *)(iVar2 + 0x10) = (int)param_4;
  *(int *)(iVar2 + 0x14) = (int)param_5;
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  *(undefined1 *)(iVar2 + 0x1d) = param_6;
  *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  return iVar2;
}


// ==== FUN_0027b780 @ 0027b780 ====

void FUN_0027b780(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined1 param_9)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = FUN_0027b6d8();
  puVar4 = (undefined4 *)uVar2;
  *puVar4 = param_2;
  *(undefined1 *)((int)puVar4 + 0x1e) = 1;
  *(undefined1 *)(puVar4 + 7) = param_9;
  puVar4[2] = (int)param_7;
  puVar4[1] = (int)param_8;
  iVar5 = (int)param_1;
  if ((param_8 == 0) && (param_7 == 0)) {
    iVar1 = *(int *)(iVar5 + 0x10);
  }
  else {
    *(byte *)((int)puVar4 + 0x1d) = *(byte *)((int)puVar4 + 0x1d) | 1;
    iVar1 = *(int *)(iVar5 + 0x10);
  }
  (**(code **)(iVar1 + 0x1c))(iVar5 + *(short *)(iVar1 + 0x18),uVar2);
  lVar3 = (**(code **)(*(int *)(iVar5 + 0x10) + 0x24))
                    (iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0x20),param_5);
  if (lVar3 == 1) {
    (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))
              (iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 8),uVar2);
  }
  else {
    FUN_0027bb98(param_1,uVar2);
  }
  return;
}


// ==== FUN_0027b880 @ 0027b880 ====

void FUN_0027b880(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_0027b6d8();
  puVar4 = (undefined4 *)uVar1;
  *puVar4 = param_2;
  *(undefined1 *)((int)puVar4 + 0x1e) = 3;
  *(undefined1 *)(puVar4 + 7) = param_6;
  iVar3 = (int)param_1;
  (**(code **)(*(int *)(iVar3 + 0x10) + 0x1c))
            (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0x18),uVar1);
  lVar2 = (**(code **)(*(int *)(iVar3 + 0x10) + 0x24))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0x20),param_5);
  if (lVar2 == 1) {
    (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))
              (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 8),uVar1);
  }
  else {
    FUN_0027bb98(param_1,uVar1);
  }
  return;
}


// ==== FUN_0027b950 @ 0027b950 ====

void FUN_0027b950(float param_1,float param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined1 param_9)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = FUN_0027b6d8();
  puVar4 = (undefined4 *)uVar2;
  *puVar4 = param_4;
  *(undefined1 *)((int)puVar4 + 0x1e) = 2;
  *(undefined1 *)(puVar4 + 7) = param_9;
  puVar4[2] = param_1;
  puVar4[1] = param_2;
  iVar5 = (int)param_3;
  if ((param_2 == 0.0) && (param_1 == 0.0)) {
    iVar1 = *(int *)(iVar5 + 0x10);
  }
  else {
    *(byte *)((int)puVar4 + 0x1d) = *(byte *)((int)puVar4 + 0x1d) | 1;
    iVar1 = *(int *)(iVar5 + 0x10);
  }
  (**(code **)(iVar1 + 0x1c))(iVar5 + *(short *)(iVar1 + 0x18),uVar2);
  lVar3 = (**(code **)(*(int *)(iVar5 + 0x10) + 0x24))
                    (iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0x20),param_7);
  if (lVar3 == 1) {
    (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))
              (iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 8),uVar2);
  }
  else {
    FUN_0027bb98(param_3,uVar2);
  }
  return;
}


// ==== FUN_0027ba68 @ 0027ba68 ====

void FUN_0027ba68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char acStack_231 [513];
  
  strcpy(acStack_231 + 1,param_1);
  FUN_0035c7a4(acStack_231 + 1,param_2);
  iVar1 = strlen(acStack_231 + 1);
  if (acStack_231[iVar1] != '/') {
    FUN_0035c7a4(acStack_231 + 1,0x40de88);
  }
  FUN_0035c7a4(acStack_231 + 1,param_3);
  FUN_0027c278(acStack_231 + 1);
  return;
}


// ==== FUN_0027bae8 @ 0027bae8 ====

int * FUN_0027bae8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0;
  if ((0 < *(int *)(param_1 + 4)) && (0 < *(int *)(param_1 + 0xc))) {
    cVar1 = *(char *)((int)*(int **)(param_1 + 8) + 0x1e);
    piVar3 = *(int **)(param_1 + 8);
    while( true ) {
      if ((cVar1 != '\0') && (iVar4 = iVar4 + 1, *piVar3 == param_2)) {
        return piVar3;
      }
      iVar2 = iVar2 + 1;
      if ((*(int *)(param_1 + 4) <= iVar4) || (*(int *)(param_1 + 0xc) <= iVar2)) break;
      cVar1 = *(char *)((int)piVar3 + 0x3e);
      piVar3 = piVar3 + 8;
    }
  }
  return (int *)0x0;
}


// ==== FUN_0027bb50 @ 0027bb50 ====

void FUN_0027bb50(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0027bae8();
  if (lVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x14))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x10));
  }
  return;
}


// ==== FUN_0027bb98 @ 0027bb98 ====

void FUN_0027bb98(int param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}


// ==== FUN_0027bbb8 @ 0027bbb8 ====

void FUN_0027bbb8(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  FUN_0027b648(param_1,iVar3 + 0xc20,4000);
  *(undefined1 *)(iVar3 + 0xc1c) = 0;
  *(undefined4 *)(iVar3 + 0x20110) = 0;
  puVar1 = (undefined4 *)(iVar3 + 0x20034);
  iVar2 = 9;
  do {
    puVar1[-5] = 0;
    iVar2 = iVar2 + -1;
    puVar1[-4] = 0;
    puVar1[-3] = 0;
    puVar1[-1] = 0;
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 6;
  } while (-1 < iVar2);
  FUN_0027c0b8(iVar3 + 0x14);
  return;
}


// ==== FUN_0027bc38 @ 0027bc38 ====

void FUN_0027bc38(void)

{
  return;
}


// ==== FUN_0027bc40 @ 0027bc40 ====

void FUN_0027bc40(void)

{
  return;
}


// ==== FUN_0027bc48 @ 0027bc48 ====

void FUN_0027bc48(void)

{
  return;
}


// ==== FUN_0027bc50 @ 0027bc50 ====

void FUN_0027bc50(void)

{
  return;
}


// ==== FUN_0027bc58 @ 0027bc58 ====

void FUN_0027bc58(void)

{
  return;
}


// ==== FUN_0027bc60 @ 0027bc60 ====

void FUN_0027bc60(undefined8 param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0xc1c) == '\x01') {
    switch(*(undefined1 *)(param_2 + 0x1e)) {
    case 1:
      FUN_0027bc38(param_1);
      break;
    case 2:
      FUN_0027bc48(param_1);
      break;
    case 3:
      FUN_0027bc40(param_1);
      break;
    case 5:
      FUN_0027bc50(param_1);
      break;
    case 6:
      FUN_0027bc58(param_1);
    case 4:
    }
  }
  return;
}


// ==== FUN_0027bd00 @ 0027bd00 ====

void FUN_0027bd00(void)

{
  FUN_0027bb98();
  return;
}


// ==== FUN_0027bd20 @ 0027bd20 ====

int FUN_0027bd20(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  piVar5 = (int *)(param_1 + 0x20020);
  do {
    if (*piVar5 != 0) {
      iVar4 = piVar5[2];
      iVar6 = -1;
      if (1 < iVar4 + 1) {
        iVar3 = iVar4 + -1;
        while( true ) {
          iVar3 = iVar3 / 2;
          iVar2 = piVar5[3] + iVar3 * 8;
          iVar1 = *(int *)(iVar2 + 4);
          if (iVar1 == param_2) {
            *param_3 = piVar5;
            return iVar2;
          }
          iVar2 = iVar3;
          if (iVar1 <= param_2) {
            iVar2 = iVar4;
            iVar6 = iVar3;
          }
          iVar4 = iVar2;
          if (iVar4 - iVar6 < 2) break;
          iVar3 = iVar4 + iVar6;
        }
      }
    }
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 6;
  } while (iVar7 < 10);
  *param_3 = 0;
  return 0;
}


// ==== FUN_0027bdc0 @ 0027bdc0 ====

void FUN_0027bdc0(undefined8 param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *apiStack_30 [4];
  
  lVar4 = FUN_0027bd20(param_1,param_2[6],apiStack_30);
  if (lVar4 != 0) {
    piVar8 = (int *)lVar4;
    if (*(byte *)(param_2 + 7) < 2) {
      bVar1 = *(byte *)((int)param_2 + 0x1e);
      if (bVar1 == 3) {
        *(bool *)*param_2 = *piVar8 != 0;
      }
      else if (bVar1 < 4) {
        if (bVar1 != 0) {
          *(int *)*param_2 = *piVar8;
        }
      }
      else if (bVar1 == 5) {
        puVar2 = (undefined4 *)*param_2;
        puVar7 = (undefined8 *)(*apiStack_30[0] + *piVar8);
        uVar3 = *puVar7;
        uVar5 = *(undefined4 *)(puVar7 + 1);
        uVar6 = *(undefined4 *)((int)puVar7 + 0xc);
        *puVar2 = (int)uVar3;
        puVar2[1] = (int)((ulong)uVar3 >> 0x20);
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
      }
    }
    else {
      memcpy(*param_2,*apiStack_30[0] + *piVar8,(uint)*(byte *)(param_2 + 7) << 2);
    }
  }
  return;
}


// ==== FUN_0027be98 @ 0027be98 ====

void FUN_0027be98(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = (int)param_1;
  piVar4 = (int *)(iVar6 + param_2 * 0x18 + 0x20020);
  *(undefined4 *)(iVar6 + 0x20110) = 0;
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 4);
    iVar8 = 0;
    iVar7 = 0;
    piVar4[2] = iVar5;
    *(int *)(iVar6 + 0x20110) = *(int *)(iVar6 + 0x20110) + iVar5;
    piVar4[3] = iVar1 + 0x14;
    piVar4[4] = *(int *)(iVar1 + 0xc);
    piVar4[5] = iVar1 + *(int *)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar6 + 4);
    if (0 < *(int *)(iVar6 + 0xc)) {
      iVar5 = iVar6 + 0xc20;
      do {
        if (*(char *)(iVar5 + 0x1e) == '\0') {
          iVar2 = *(int *)(iVar6 + 0xc);
        }
        else {
          (**(code **)(*(int *)(iVar6 + 0x10) + 0x1c))
                    (iVar6 + *(short *)(*(int *)(iVar6 + 0x10) + 0x18),iVar5);
          lVar3 = (**(code **)(*(int *)(iVar6 + 0x10) + 0x24))
                            (iVar6 + *(short *)(*(int *)(iVar6 + 0x10) + 0x20),
                             *(undefined4 *)(iVar5 + 0x14));
          if (lVar3 == 0) {
            FUN_0027bb98(param_1,iVar5);
          }
          iVar8 = iVar8 + 1;
          if (iVar1 <= iVar8) {
            return;
          }
          iVar2 = *(int *)(iVar6 + 0xc);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x20;
      } while (iVar7 < iVar2);
    }
  }
  return;
}


// ==== FUN_0027bfc8 @ 0027bfc8 ====

bool FUN_0027bfc8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = FUN_0027c278(param_2);
  iVar8 = 0;
  param_1 = param_1 + 0x20020;
  do {
    iVar6 = *(int *)(param_1 + 0x10);
    iVar7 = -1;
    if (1 < iVar6 + 1) {
      iVar4 = iVar6 + -1;
      do {
        iVar4 = iVar4 / 2;
        piVar5 = (int *)(*(int *)(param_1 + 0x14) + iVar4 * 8);
        iVar1 = piVar5[1];
        if (iVar1 == iVar3) {
          return *piVar5 != 0;
        }
        iVar2 = iVar4;
        if (iVar1 <= iVar3) {
          iVar2 = iVar6;
          iVar7 = iVar4;
        }
        iVar6 = iVar2;
        iVar4 = iVar6 + iVar7;
      } while (1 < iVar6 - iVar7);
    }
    iVar8 = iVar8 + 1;
    param_1 = param_1 + 0x18;
  } while (iVar8 < 10);
  return true;
}


// ==== FUN_0027c088 @ 0027c088 ====

void FUN_0027c088(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20000 + param_2 * 0x18;
  *(undefined4 *)(iVar1 + 0x20) = param_3;
  *(undefined4 *)(iVar1 + 0x24) = param_4;
  return;
}


// ==== FUN_0027c0b8 @ 0027c0b8 ====

void FUN_0027c0b8(int param_1)

{
  *(undefined4 *)(param_1 + 0xc04) = 0;
  *(undefined4 *)(param_1 + 0xc00) = 0;
  return;
}


// ==== FUN_0027c0d8 @ 0027c0d8 ====
// GLOBAL DAT_003c09e8 int
// GLOBAL DAT_0040eb9c undefined4

void FUN_0027c0d8(int param_1,undefined4 param_2)

{
  DAT_003c09e8 = param_1;
  FUN_0027bbb8(param_1 + 4);
  DAT_0040eb9c = param_2;
  return;
}


// ==== FUN_0027c110 @ 0027c110 ====

undefined4 FUN_0027c110(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2011c) = param_2;
  return 1;
}


// ==== FUN_0027c128 @ 0027c128 ====

undefined4
FUN_0027c128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  FUN_0027c088((int)param_1 + 4,param_3,param_4,param_5);
  FUN_0027c1b0(param_1,param_2,param_3,*(undefined4 *)((int)param_1 + 0x2011c));
  return 1;
}


// ==== FUN_0027c1a0 @ 0027c1a0 ====

void FUN_0027c1a0(void)

{
  return;
}


// ==== FUN_0027c1b0 @ 0027c1b0 ====

bool FUN_0027c1b0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_0027cab8(param_4,param_2,1);
  if (lVar1 != 0) {
    iVar2 = (int)lVar1;
    (**(code **)(*(int *)(iVar2 + 0x28) + 0x1c))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x28) + 0x18),
               *(undefined4 *)(param_1 + 0x20024 + (int)param_3 * 0x18),
               (int)*(undefined8 *)(iVar2 + 8) + 0x7ffU & 0xfffff800);
    FUN_0027be98(param_1 + 4,param_3);
    (**(code **)(*(int *)(iVar2 + 0x28) + 0x14))(iVar2 + *(short *)(*(int *)(iVar2 + 0x28) + 0x10));
  }
  return lVar1 != 0;
}


// ==== FUN_0027c278 @ 0027c278 ====

void FUN_0027c278(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = strlen();
  FUN_0027c2a8(param_1,uVar1);
  return;
}


// ==== FUN_0027c2a8 @ 0027c2a8 ====
// GLOBAL DAT_003c09f0 undefined

uint FUN_0027c2a8(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0xffffffff;
  uVar3 = 0xffffffff;
  if (0 < param_2) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar2 = (int)uVar3 >> 8 ^ *(uint *)(&DAT_003c09f0 + ((int)cVar1 ^ uVar3 & 0xff) * 4);
      uVar3 = uVar2;
    } while (param_2 != 0);
  }
  return uVar2;
}


// ==== FUN_0027c2f8 @ 0027c2f8 ====
// GLOBAL DAT_003c0df0 undefined4_*

void FUN_0027c2f8(undefined4 *param_1)

{
  DAT_003c0df0 = param_1;
  param_1[4] = 0x3f000000;
  param_1[1] = 0x41a00000;
  *param_1 = 0;
  return;
}


// ==== FUN_0027c320 @ 0027c320 ====

void FUN_0027c320(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_0027c328 @ 0027c328 ====

void FUN_0027c328(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// ==== FUN_0027c348 @ 0027c348 ====

void FUN_0027c348(void)

{
  return;
}


// ==== FUN_0027c370 @ 0027c370 ====

void FUN_0027c370(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined8 param_5)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a2_qw [16];
  undefined1 auVar1 [16];
  undefined1 auStack_250 [512];
  
  auVar1 = _por(in_zero_qw,in_a2_qw);
  FUN_00275260(param_5,auStack_250,0x100);
  if (*param_4 != 0) {
    auVar1 = _por(in_zero_qw,auVar1);
    FUN_00275dc0(param_1,param_2,param_3,*param_4,auStack_250,auVar1._0_8_);
  }
  return;
}


// ==== FUN_0027c410 @ 0027c410 ====
// GLOBAL DAT_003c0df4 uint
// GLOBAL DAT_0040eba0 undefined4
// GLOBAL DAT_0049a798 undefined

undefined4 FUN_0027c410(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  if (DAT_003c0df4 != 0) {
    puVar3 = &DAT_0040eba0;
    puVar1 = &DAT_0049a798;
    do {
      uVar2 = uVar2 + 1;
      if (puVar1 == *(undefined **)(param_1 + 0xc)) {
        return *puVar3;
      }
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 5;
    } while (uVar2 < DAT_003c0df4);
  }
  return 0;
}


// ==== FUN_0027c460 @ 0027c460 ====

int FUN_0027c460(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0027c410();
  return *(int *)(iVar1 + 0x10c) + param_2 * 0x70;
}


// ==== FUN_0027c498 @ 0027c498 ====
// GLOBAL DAT_003c0df8 int
// GLOBAL DAT_003c0df4 uint
// GLOBAL DAT_0040eba0 undefined4
// GLOBAL DAT_0049a7b4 undefined_*
// GLOBAL DAT_0049a7c0 undefined1_*
// GLOBAL DAT_0049a7e8 undefined_*
// GLOBAL DAT_0049a7d4 undefined_*
// GLOBAL DAT_0049a7f4 undefined_*
// GLOBAL DAT_0049a7f0 undefined1_*
// GLOBAL DAT_0049a7ec undefined1_*
// GLOBAL DAT_0049a7d0 undefined_*
// GLOBAL DAT_0049a7d8 undefined_*
// GLOBAL DAT_0049a7e0 undefined_*
// GLOBAL DAT_0049a7e4 undefined_*
// GLOBAL DAT_0049a7dc undefined_*
// GLOBAL DAT_0049a7c4 undefined1_*
// GLOBAL DAT_0049a7bc undefined_*
// GLOBAL DAT_0049a7c8 undefined4
// GLOBAL DAT_0049a7cc undefined4
// GLOBAL DAT_0049a7b8 undefined4
// GLOBAL DAT_0049a7ac undefined4
// GLOBAL DAT_004004b0 undefined2
// GLOBAL DAT_004004b2 undefined1
// GLOBAL DAT_0049a7f8 undefined2
// GLOBAL DAT_0049a7fa undefined1
// GLOBAL DAT_0049a7b0 undefined4
// GLOBAL DAT_0049a7a8 undefined4
// GLOBAL LAB_0027c400 undefined
// GLOBAL LAB_0027c408 undefined
// GLOBAL FUN_0027c460 undefined
// GLOBAL FUN_0027cbe8 undefined
// GLOBAL LAB_0027cd48 undefined
// GLOBAL FUN_0027cc78 undefined
// GLOBAL LAB_0027cf20 undefined
// GLOBAL FUN_0027cca8 undefined
// GLOBAL DAT_0049a798 undefined
// GLOBAL FUN_0027ccf8 undefined
// GLOBAL DAT_0049a800 undefined8
// GLOBAL FUN_0027cd60 undefined
// GLOBAL FUN_0027ce50 undefined
// GLOBAL FUN_0027cea8 undefined
// GLOBAL FUN_0027cf28 undefined

undefined4 FUN_0027c498(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  if (DAT_003c0df8 == 0) {
    puVar1 = (undefined8 *)FUN_0032ab20();
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = &DAT_0049a800;
      puVar2 = puVar1 + 8;
      if (((uint)puVar1 & 7) == 0) {
        do {
          uVar6 = puVar1[1];
          uVar9 = puVar1[2];
          uVar11 = puVar1[3];
          *puVar4 = *puVar1;
          puVar4[1] = uVar6;
          puVar4[2] = uVar9;
          puVar4[3] = uVar11;
          puVar1 = puVar1 + 4;
          puVar4 = puVar4 + 4;
        } while (puVar1 != puVar2);
      }
      else {
        do {
          uVar6 = puVar1[1];
          uVar9 = puVar1[2];
          uVar11 = puVar1[3];
          *puVar4 = *puVar1;
          puVar4[1] = uVar6;
          puVar4[2] = uVar9;
          puVar4[3] = uVar11;
          puVar1 = puVar1 + 4;
          puVar4 = puVar4 + 4;
        } while (puVar1 != puVar2);
      }
      uVar6 = puVar1[1];
      uVar9 = puVar1[2];
      *puVar4 = *puVar1;
      puVar4[1] = uVar6;
      puVar4[2] = uVar9;
    }
    puVar7 = &DAT_0049a798;
    piVar8 = &DAT_0040eba0;
    uVar10 = 0;
    iVar5 = DAT_0040eba0;
    if (DAT_003c0df4 != 0) {
      while (uVar10 = uVar10 + 1, DAT_0049a7b4 = puVar7, iVar5 != param_1) {
        DAT_0049a7b4 = (undefined *)0x0;
        puVar7 = puVar7 + 5;
        piVar8 = piVar8 + 1;
        if (DAT_003c0df4 <= uVar10) break;
        iVar5 = *piVar8;
      }
    }
    DAT_0049a7c0 = &LAB_0027c400;
    DAT_0049a7e8 = FUN_0027cf28;
    DAT_0049a7d4 = FUN_0027cc78;
    DAT_0049a7f4 = FUN_0027ce50;
    DAT_0049a7f0 = &LAB_0027cf20;
    DAT_0049a7ec = &LAB_0027cd48;
    DAT_0049a7d0 = FUN_0027cbe8;
    DAT_0049a7d8 = FUN_0027cca8;
    DAT_0049a7e0 = FUN_0027cd60;
    DAT_0049a7e4 = FUN_0027cea8;
    DAT_0049a7dc = FUN_0027ccf8;
    DAT_0049a7c4 = &LAB_0027c408;
    DAT_0049a7bc = FUN_0027c460;
    DAT_0049a7c8 = 0;
    DAT_0049a7cc = 0;
    DAT_0049a7b8 = 0;
    DAT_0049a7ac = *(undefined4 *)(param_1 + 0x108);
    DAT_0049a7f8 = DAT_004004b0;
    DAT_0049a7fa = DAT_004004b2;
    DAT_0049a7b0 = 2;
    DAT_0049a7a8 = 0;
    uVar10 = 0;
    if (*(int *)(param_1 + 0x108) != 0) {
      iVar5 = 0;
      do {
        uVar10 = uVar10 + 1;
        *(undefined4 **)(iVar5 + *(int *)(param_1 + 0x10c) + 0x50) = &DAT_0049a7a8;
        iVar5 = iVar5 + 0x70;
      } while (uVar10 < *(uint *)(param_1 + 0x108));
    }
    FUN_0032a958(1);
    FUN_0032a9c8(0x49a7a8);
    FUN_0032ab18(0x49a7a8);
    uVar3 = 1;
    DAT_003c0df8 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_0027c778 @ 0027c778 ====
// GLOBAL DAT_003c0dfc undefined4
// GLOBAL DAT_003c0df4 uint
// GLOBAL DAT_0040eba0 undefined4
// GLOBAL DAT_0049a798 undefined

undefined4 FUN_0027c778(undefined8 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uStack_80;
  undefined1 auStack_7f [15];
  
  uVar1 = DAT_003c0dfc;
  uVar4 = 0;
  pcVar2 = (char *)param_1;
  do {
    if (*pcVar2 == ':') {
      FUN_0035d1a0(&uStack_80,param_1,uVar4 + 1);
      auStack_7f[uVar4] = 0;
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        if (DAT_003c0df4 <= uVar5) {
          return uVar1;
        }
        lVar3 = FUN_00360938(&uStack_80,&DAT_0049a798 + uVar5 * 5,4);
        uVar4 = uVar5 + 1;
      } while (lVar3 != 0);
      return (&DAT_0040eba0)[uVar5];
    }
    uVar4 = uVar4 + 1;
    pcVar2 = (char *)param_1 + uVar4;
  } while (uVar4 < 4);
  return DAT_003c0dfc;
}


// ==== FUN_0027c860 @ 0027c860 ====

char * FUN_0027c860(char *param_1)

{
  uint uVar1;
  
  if (*param_1 == ':') {
    param_1 = param_1 + 1;
  }
  else {
    for (uVar1 = 1; uVar1 < 4; uVar1 = uVar1 + 1) {
      if (param_1[uVar1] == ':') {
        return param_1 + uVar1 + 1;
      }
    }
  }
  return param_1;
}


// ==== FUN_0027c8b0 @ 0027c8b0 ====

undefined8
FUN_0027c8b0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  
  iVar2 = strlen(param_3);
  iVar3 = strlen(param_4);
  uVar5 = 0;
  if (iVar2 + iVar3 <= param_2 + -1) {
    strcpy(param_1,param_3);
    iVar7 = 0;
    uVar5 = param_1;
    if (-1 < iVar3) {
      pcVar6 = (char *)(iVar2 + (int)param_1);
      do {
        pcVar4 = (char *)((int)param_4 + iVar7);
        cVar1 = *pcVar4;
        if ((cVar1 == '/') || (cVar1 == '\\')) {
          *pcVar6 = param_5;
        }
        else {
          *pcVar6 = *pcVar4;
        }
        iVar7 = iVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (iVar7 <= iVar3);
    }
  }
  return uVar5;
}


// ==== FUN_0027c990 @ 0027c990 ====
// GLOBAL DAT_003c0dfc undefined4

void FUN_0027c990(undefined4 param_1)

{
  DAT_003c0dfc = param_1;
  return;
}


// ==== FUN_0027c9a0 @ 0027c9a0 ====
// GLOBAL DAT_003c0df4 uint
// GLOBAL DAT_0040eba0 undefined4
// GLOBAL DAT_0049a798 undefined

undefined4 FUN_0027c9a0(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x108) = param_2;
  *(undefined4 *)(iVar2 + 0x104) = 0;
  *(undefined4 *)(iVar2 + 0x100) = 1;
  if (param_3 != 0) {
    if (1 < DAT_003c0df4) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      return 0;
    }
    iVar5 = DAT_003c0df4 * 5;
    (&DAT_0040eba0)[DAT_003c0df4] = iVar2;
    FUN_0035d1a0(&DAT_0049a798 + iVar5,param_3,4);
    DAT_003c0df4 = DAT_003c0df4 + 1;
  }
  if (*(int *)(iVar2 + 0x108) != 0) {
    iVar5 = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3 + 1;
      iVar1 = (**(code **)(*(int *)(iVar2 + 0x110) + 0x1c))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 0x110) + 0x18),uVar3);
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar5 + *(int *)(iVar2 + 0x10c) + 0x60) = 0;
      *(undefined4 *)(iVar5 + *(int *)(iVar2 + 0x10c) + 0x38) = 1;
      iVar5 = iVar5 + 0x70;
      uVar3 = uVar4;
    } while (uVar4 < *(uint *)(iVar2 + 0x108));
  }
  FUN_0027cbc0(param_1,0x40de70);
  return 1;
}


// ==== FUN_0027cab8 @ 0027cab8 ====

long FUN_0027cab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_170 [256];
  
  for (uVar5 = 0; iVar4 = (int)param_1, lVar2 = 0, uVar5 < *(uint *)(iVar4 + 0x108);
      uVar5 = uVar5 + 1) {
    lVar2 = (**(code **)(*(int *)(iVar4 + 0x110) + 0x1c))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0x110) + 0x18),uVar5);
    iVar1 = *(int *)((int)lVar2 + 0x28);
    lVar3 = (**(code **)(iVar1 + 0x44))((int)lVar2 + (int)*(short *)(iVar1 + 0x40));
    if (lVar3 == 0) break;
  }
  if (lVar2 == 0) {
    *(undefined4 *)(iVar4 + 0x104) = 3;
  }
  else {
    FUN_00369ff0(auStack_170,0x100,0x400398,param_1,param_2);
    iVar1 = *(int *)((int)lVar2 + 0x28);
    lVar3 = (**(code **)(iVar1 + 0xc))
                      ((int)lVar2 + (int)*(short *)(iVar1 + 8),param_1,auStack_170,param_3);
    *(int *)(iVar4 + 0x104) = (int)lVar3;
    if (lVar3 != 0) {
      lVar2 = 0;
    }
  }
  if (lVar2 != 0) {
    *(undefined4 *)((int)lVar2 + 0x24) = 2;
  }
  return lVar2;
}


// ==== FUN_0027cbc0 @ 0027cbc0 ====

void FUN_0027cbc0(undefined8 param_1,undefined8 param_2)

{
  FUN_00369ff0(param_1,0x100,0x400388,param_2);
  return;
}


// ==== FUN_0027cbe8 @ 0027cbe8 ====

undefined4 FUN_0027cbe8(undefined8 param_1,int param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_4 & 1;
  if ((param_4 & 2) != 0) {
    uVar2 = param_4 & 1 | 2;
  }
  lVar1 = FUN_0027c778(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_0027cab8(lVar1,param_3,param_4 & 0x10 | param_4 & 8 | param_4 & 4 | uVar2);
    *(int *)(param_2 + 0x60) = (int)lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      return 1;
    }
  }
  return 3;
}


// ==== FUN_0027cc78 @ 0027cc78 ====

void FUN_0027cc78(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x28);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x10));
  return;
}


// ==== FUN_0027cca8 @ 0027cca8 ====

void FUN_0027cca8(int param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x28);
  uVar2 = (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x18));
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (uVar2 & 0xffffffff);
  return;
}


// ==== FUN_0027ccf8 @ 0027ccf8 ====

void FUN_0027ccf8(int param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x28);
  uVar2 = (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x20));
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (uVar2 & 0xffffffff);
  return;
}


// ==== FUN_0027cd60 @ 0027cd60 ====

undefined8 FUN_0027cd60(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_4 == 2) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x60) + 0x28);
    uStack_40 = (**(code **)(iVar1 + 0x2c))
                          (*(int *)(param_2 + 0x60) + (int)*(short *)(iVar1 + 0x28),param_3,1);
  }
  else if (param_4 < 3) {
    if (param_4 == 1) {
      iVar1 = *(int *)(*(int *)(param_2 + 0x60) + 0x28);
      uStack_40 = (**(code **)(iVar1 + 0x2c))
                            (*(int *)(param_2 + 0x60) + (int)*(short *)(iVar1 + 0x28),param_3,0);
    }
    else {
      uStack_40 = 0xffffffffffffffff;
    }
  }
  else if (param_4 == 3) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x60) + 0x28);
    uStack_40 = (**(code **)(iVar1 + 0x2c))
                          (*(int *)(param_2 + 0x60) + (int)*(short *)(iVar1 + 0x28),param_3,2);
  }
  else {
    uStack_40 = 0xffffffffffffffff;
  }
  *(undefined8 *)(param_2 + 0x10) = uStack_40;
  puVar2 = (undefined4 *)param_1;
  *puVar2 = (int)uStack_40;
  puVar2[1] = (int)((ulong)uStack_40 >> 0x20);
  puVar2[2] = uStack_38;
  puVar2[3] = uStack_34;
  return param_1;
}


// ==== FUN_0027ce50 @ 0027ce50 ====

undefined8 FUN_0027ce50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0027c778(param_2);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)((int)lVar2 + 0x110);
    uVar3 = (**(code **)(iVar1 + 0xc))((int)lVar2 + (int)*(short *)(iVar1 + 8),param_2);
  }
  return uVar3;
}


// ==== FUN_0027cea8 @ 0027cea8 ====

undefined4 FUN_0027cea8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x28);
  lVar3 = (**(code **)(iVar1 + 0x34))(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x30));
  if (lVar3 == 1) {
    uVar2 = 2;
  }
  else if (lVar3 < 2) {
    uVar2 = 4;
    if (lVar3 == 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 4;
    if (lVar3 == 2) {
      uVar2 = 3;
    }
  }
  return uVar2;
}


// ==== FUN_0027cf28 @ 0027cf28 ====

void FUN_0027cf28(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x28);
  (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x38));
  return;
}


// ==== FUN_0027cf78 @ 0027cf78 ====

void FUN_0027cf78(undefined4 *param_1,undefined4 param_2,long *param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  
  param_1[1] = param_2;
  param_1[3] = param_4;
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[4] = 0xbf800000;
  if (*param_3 != 0) {
    iVar1 = (int)param_3[1];
    while( true ) {
      plVar2 = (long *)((int)param_1 + iVar1);
      *plVar2 = *param_3;
      *(undefined4 *)(plVar2 + 1) = 0xbf800000;
      (**(code **)(*(int *)((int)plVar2 + 0xc) + 0xc))
                ((int)plVar2 + (int)*(short *)(*(int *)((int)plVar2 + 0xc) + 8),0,param_1[1],0,0);
      if (param_3[2] == 0) break;
      iVar1 = (int)param_3[3];
      param_3 = param_3 + 2;
    }
  }
  return;
}


// ==== FUN_0027d020 @ 0027d020 ====

void FUN_0027d020(int param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  if (*plVar3 != 0) {
    iVar2 = (int)plVar3[1];
    while( true ) {
      iVar1 = *(int *)(param_1 + iVar2 + 0xc);
      (**(code **)(iVar1 + 0xc))
                (param_1 + iVar2 + (int)*(short *)(iVar1 + 8),1,*(undefined4 *)(param_1 + 4),0,0);
      if (plVar3[2] == 0) break;
      iVar2 = (int)plVar3[3];
      plVar3 = plVar3 + 2;
    }
  }
  return;
}


// ==== FUN_0027d098 @ 0027d098 ====

void FUN_0027d098(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),4,param_1[1],0,0);
  }
  return;
}


// ==== FUN_0027d0d8 @ 0027d0d8 ====

void FUN_0027d0d8(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),5,param_1[1],param_2,param_3);
  }
  return;
}


// ==== FUN_0027d118 @ 0027d118 ====

int FUN_0027d118(int param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  lVar1 = *plVar2;
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 2;
    lVar1 = *plVar2;
  }
  return param_1 + (int)plVar2[1];
}


// ==== FUN_0027d158 @ 0027d158 ====

void FUN_0027d158(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),2,param_1[1],param_2,param_3);
  }
  return;
}


// ==== FUN_0027d198 @ 0027d198 ====

void FUN_0027d198(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),3,param_1[1],param_2,param_3);
  }
  return;
}


// ==== FUN_0027d1d8 @ 0027d1d8 ====

ulong FUN_0027d1d8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  undefined1 *puVar8;
  undefined1 auVar9 [16];
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  undefined1 auVar12 [16];
  int iVar13;
  undefined1 **ppuVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 in_vf0 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_vf4 [16];
  undefined1 auStack_400 [8];
  undefined2 uStack_3f8;
  undefined1 uStack_3f5;
  undefined1 *puStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  undefined1 *apuStack_3e4 [189];
  undefined1 auStack_f0 [8];
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  uVar15 = 0;
  bVar2 = false;
  *(undefined4 *)(param_3 + 0x50) = 0x3f800000;
  fStack_dc = 1.0;
  auVar19 = _lqc2(*param_2);
  auVar20 = _lqc2(param_2[1]);
  auVar12 = _qmfc2(auVar19._0_4_);
  auVar19 = _lqc2(param_1[1]);
  auVar9 = _qmfc2(auVar20._0_4_);
  auVar20 = _lqc2(*param_1);
  auVar19 = _qmfc2(auVar19._0_4_);
  auVar20 = _qmfc2(auVar20._0_4_);
  auStack_a0 = _sqc2(in_vf4);
  fStack_e0 = 0.0;
  lVar5 = FUN_0027e820(auVar12._0_4_,auVar9._0_4_,auVar19._0_4_,auVar20._0_4_);
  _lqc2(auStack_a0);
  if (lVar5 != 0) {
    auStack_f0._4_4_ = SUB124(*(undefined1 (*) [12])*param_1,4);
    uVar4 = auStack_f0._4_4_;
    _auStack_f0 = *param_1;
    lVar5 = FUN_0027e820(*(undefined4 *)(*param_2 + 4),SUB164(param_2[1],4),
                         (int)((ulong)*(undefined8 *)param_1[1] >> 0x20),uVar4);
    _lqc2(auStack_a0);
    if (lVar5 != 0) {
      fStack_e8 = SUB124(*(undefined1 (*) [12])*param_1,8);
      fVar16 = fStack_e8;
      _auStack_f0 = *param_1;
      lVar5 = FUN_0027e820(*(undefined4 *)(*param_2 + 8),SUB164(param_2[1],8),
                           *(undefined4 *)(param_1[1] + 8),fVar16);
      _lqc2(auStack_a0);
      bVar2 = lVar5 != 0;
    }
  }
  ppuVar14 = &puStack_3f0;
  if (bVar2) {
    uStack_3f8 = 0;
    if (*(short *)(param_1[2] + 10) == 0) {
      uStack_3f5 = param_1[2][8];
    }
    else {
      uStack_3f5 = 0xff;
    }
    auVar9 = _lqc2(*param_2);
    auVar19 = _lqc2(param_2[1]);
    auVar20 = _vsub(auVar19,auVar9);
    auStack_c0 = _sqc2(auVar9);
    auVar9 = _vmove(auVar20);
    auVar19 = _qmfc2(auVar9._0_4_);
    auStack_d0 = _sqc2(auVar20);
    if (((uint)auVar19._0_4_ & 0x7f800000) < 0x37800001) {
      auVar19 = _qmtc2(0x7f7fffff);
    }
    else {
      auVar19 = _qmtc2(1.0 / auVar19._0_4_);
    }
    _vaddbc(in_vf0,auVar19);
    auVar19 = _sqc2(auVar9);
    auStack_f0._4_4_ = auVar19._4_4_;
    if ((auStack_f0._4_4_ & 0x7f800000) < 0x37800001) {
      auVar19 = _qmtc2(0x7f7fffff);
    }
    else {
      auVar19 = _sqc2(auVar9);
      auStack_f0._4_4_ = auVar19._4_4_;
      auVar19 = _qmtc2(1.0 / (float)auStack_f0._4_4_);
    }
    _vaddbc(in_vf0,auVar19);
    _auStack_f0 = _sqc2(auVar9);
    if (((uint)fStack_e8 & 0x7f800000) < 0x37800001) {
      auVar19 = _qmtc2(0x7f7fffff);
    }
    else {
      _auStack_f0 = _sqc2(auVar9);
      auVar19 = _qmtc2(1.0 / fStack_e8);
    }
    auVar19 = _vaddbc(in_vf0,auVar19);
    ppuVar14 = apuStack_3e4;
    fStack_3ec = fStack_e0 - 1e-05;
    auStack_b0 = _sqc2(auVar19);
    fStack_3e8 = fStack_dc + 1e-05;
    puStack_3f0 = auStack_400;
  }
  do {
    do {
      bVar2 = ppuVar14 <= &puStack_3f0;
      ppuVar14 = ppuVar14 + -3;
      if (bVar2) {
        return uVar15;
      }
      bVar2 = false;
      if ((*ppuVar14)[0xb] == -1) {
        uVar1 = *(ushort *)(*ppuVar14 + 8);
        ppuVar10 = ppuVar14;
        do {
          pfVar7 = (float *)(*(int *)param_1[2] + (uint)uVar1 * 0x18);
          iVar13 = (uint)*(byte *)((int)pfVar7 + 10) * 4;
          fVar17 = *(float *)(auStack_d0 + iVar13);
          fVar16 = *(float *)(auStack_c0 + iVar13) + (float)ppuVar10[2] * fVar17;
          fVar18 = *(float *)(auStack_c0 + iVar13) + (float)ppuVar10[1] * fVar17;
          if (0.0 < fVar17) {
            if (fVar16 < pfVar7[3]) {
              if (fVar16 < pfVar7[1]) {
                bVar2 = true;
                break;
              }
              *ppuVar10 = (undefined1 *)pfVar7;
            }
            else {
              if (*pfVar7 < fVar18) {
                bVar3 = pfVar7[4] < fVar18;
                goto code_r0x0027d624;
              }
              ppuVar11 = ppuVar10 + 3;
              fVar17 = *(float *)(auStack_b0 + iVar13);
              ppuVar10[4] = ppuVar10[1];
              *ppuVar11 = (undefined1 *)pfVar7;
              ppuVar10[5] = ppuVar10[2];
              if (*pfVar7 < fVar16) {
                ppuVar10[5] = (undefined1 *)
                              ((float)ppuVar10[2] + fVar17 * (*pfVar7 - fVar16) + 1e-05);
              }
              *ppuVar14 = (undefined1 *)(pfVar7 + 3);
              ppuVar10 = ppuVar11;
              if (pfVar7[3] <= fVar18) {
                puVar8 = *ppuVar11;
                ppuVar14 = ppuVar14 + 3;
                goto LAB_0027d6e4;
              }
              ppuVar14[1] = (undefined1 *)
                            ((float)ppuVar14[1] + (fVar17 * (pfVar7[3] - fVar18) - 1e-05));
              ppuVar14 = ppuVar14 + 3;
            }
LAB_0027d6e0:
            puVar8 = *ppuVar10;
          }
          else {
            if (*pfVar7 < fVar16) {
              bVar3 = pfVar7[4] < fVar16;
code_r0x0027d624:
              if (!bVar3) {
                *ppuVar10 = (undefined1 *)(pfVar7 + 3);
                goto LAB_0027d6e0;
              }
              bVar2 = true;
              break;
            }
            if (fVar18 < pfVar7[3]) {
              if (pfVar7[1] <= fVar18) {
                *ppuVar10 = (undefined1 *)pfVar7;
                goto LAB_0027d6e0;
              }
              bVar2 = true;
              break;
            }
            ppuVar11 = ppuVar10 + 3;
            fVar17 = *(float *)(auStack_b0 + iVar13);
            *ppuVar11 = (undefined1 *)(pfVar7 + 3);
            ppuVar10[4] = ppuVar10[1];
            ppuVar10[5] = ppuVar10[2];
            if (fVar16 < pfVar7[3]) {
              ppuVar10[5] = (undefined1 *)
                            ((float)ppuVar10[2] + fVar17 * (pfVar7[3] - fVar16) + 1e-05);
            }
            *ppuVar14 = (undefined1 *)pfVar7;
            ppuVar10 = ppuVar11;
            if (*pfVar7 < fVar18) {
              ppuVar14[1] = (undefined1 *)
                            ((float)ppuVar14[1] + (fVar17 * (*pfVar7 - fVar18) - 1e-05));
              ppuVar14 = ppuVar14 + 3;
              goto LAB_0027d6e0;
            }
            puVar8 = *ppuVar11;
            ppuVar14 = ppuVar14 + 3;
          }
LAB_0027d6e4:
          if (puVar8[0xb] != -1) break;
          uVar1 = *(ushort *)(puVar8 + 8);
        } while( true );
      }
    } while (bVar2);
    if (*(int *)(param_1[2] + 0xc) == 0) {
      uVar6 = FUN_0026cd28();
    }
    else {
      uVar6 = FUN_0026dc88();
    }
    uVar15 = uVar15 | uVar6;
  } while( true );
}


// ==== FUN_0027d7a0 @ 0027d7a0 ====

void FUN_0027d7a0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  float *pfVar6;
  undefined1 *puVar7;
  undefined1 auVar8 [16];
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 auVar11 [16];
  int iVar12;
  undefined1 **ppuVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_vf0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_vf4 [16];
  undefined1 auStack_400 [8];
  undefined2 uStack_3f8;
  undefined1 uStack_3f5;
  undefined1 *puStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  undefined1 *apuStack_3e4 [189];
  undefined1 auStack_f0 [8];
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  bVar2 = false;
  auVar17 = _lqc2(*param_2);
  auVar18 = _lqc2(param_2[1]);
  auVar11 = _qmfc2(auVar17._0_4_);
  auVar17 = _lqc2(param_1[1]);
  auVar8 = _qmfc2(auVar18._0_4_);
  auVar18 = _lqc2(*param_1);
  auVar17 = _qmfc2(auVar17._0_4_);
  auVar18 = _qmfc2(auVar18._0_4_);
  auStack_a0 = _sqc2(in_vf4);
  fStack_dc = 1.0;
  fStack_e0 = 0.0;
  lVar5 = FUN_0027e820(auVar11._0_4_,auVar8._0_4_,auVar17._0_4_,auVar18._0_4_);
  _lqc2(auStack_a0);
  if (lVar5 != 0) {
    auStack_f0._4_4_ = SUB124(*(undefined1 (*) [12])*param_1,4);
    uVar4 = auStack_f0._4_4_;
    _auStack_f0 = *param_1;
    lVar5 = FUN_0027e820(*(undefined4 *)(*param_2 + 4),SUB164(param_2[1],4),
                         (int)((ulong)*(undefined8 *)param_1[1] >> 0x20),uVar4);
    _lqc2(auStack_a0);
    if (lVar5 != 0) {
      fStack_e8 = SUB124(*(undefined1 (*) [12])*param_1,8);
      fVar14 = fStack_e8;
      _auStack_f0 = *param_1;
      lVar5 = FUN_0027e820(*(undefined4 *)(*param_2 + 8),SUB164(param_2[1],8),
                           *(undefined4 *)(param_1[1] + 8),fVar14);
      _lqc2(auStack_a0);
      bVar2 = lVar5 != 0;
    }
  }
  ppuVar13 = &puStack_3f0;
  if (bVar2) {
    uStack_3f8 = 0;
    if (*(short *)(param_1[2] + 10) == 0) {
      uStack_3f5 = param_1[2][8];
    }
    else {
      uStack_3f5 = 0xff;
    }
    auVar8 = _lqc2(*param_2);
    auVar17 = _lqc2(param_2[1]);
    auVar18 = _vsub(auVar17,auVar8);
    auStack_c0 = _sqc2(auVar8);
    auVar8 = _vmove(auVar18);
    auVar17 = _qmfc2(auVar8._0_4_);
    auStack_d0 = _sqc2(auVar18);
    if (((uint)auVar17._0_4_ & 0x7f800000) < 0x37800001) {
      auVar17 = _qmtc2(0x7f7fffff);
    }
    else {
      auVar17 = _qmtc2(1.0 / auVar17._0_4_);
    }
    _vaddbc(in_vf0,auVar17);
    auVar17 = _sqc2(auVar8);
    auStack_f0._4_4_ = auVar17._4_4_;
    if ((auStack_f0._4_4_ & 0x7f800000) < 0x37800001) {
      auVar17 = _qmtc2(0x7f7fffff);
    }
    else {
      auVar17 = _sqc2(auVar8);
      auStack_f0._4_4_ = auVar17._4_4_;
      auVar17 = _qmtc2(1.0 / (float)auStack_f0._4_4_);
    }
    _vaddbc(in_vf0,auVar17);
    _auStack_f0 = _sqc2(auVar8);
    if (((uint)fStack_e8 & 0x7f800000) < 0x37800001) {
      auVar17 = _qmtc2(0x7f7fffff);
    }
    else {
      _auStack_f0 = _sqc2(auVar8);
      auVar17 = _qmtc2(1.0 / fStack_e8);
    }
    auVar17 = _vaddbc(in_vf0,auVar17);
    ppuVar13 = apuStack_3e4;
    fStack_3ec = fStack_e0 - 1e-05;
    auStack_b0 = _sqc2(auVar17);
    fStack_3e8 = fStack_dc + 1e-05;
    puStack_3f0 = auStack_400;
  }
  do {
    do {
      bVar2 = ppuVar13 <= &puStack_3f0;
      ppuVar13 = ppuVar13 + -3;
      if (bVar2) {
        return;
      }
      bVar2 = false;
      if ((*ppuVar13)[0xb] == -1) {
        uVar1 = *(ushort *)(*ppuVar13 + 8);
        ppuVar9 = ppuVar13;
        do {
          pfVar6 = (float *)(*(int *)param_1[2] + (uint)uVar1 * 0x18);
          iVar12 = (uint)*(byte *)((int)pfVar6 + 10) * 4;
          fVar15 = *(float *)(auStack_d0 + iVar12);
          fVar14 = *(float *)(auStack_c0 + iVar12) + (float)ppuVar9[2] * fVar15;
          fVar16 = *(float *)(auStack_c0 + iVar12) + (float)ppuVar9[1] * fVar15;
          if (0.0 < fVar15) {
            if (fVar14 < pfVar6[3]) {
              if (fVar14 < pfVar6[1]) {
                bVar2 = true;
                break;
              }
              *ppuVar9 = (undefined1 *)pfVar6;
            }
            else {
              if (*pfVar6 < fVar16) {
                bVar3 = pfVar6[4] < fVar16;
                goto code_r0x0027dbe4;
              }
              ppuVar10 = ppuVar9 + 3;
              fVar15 = *(float *)(auStack_b0 + iVar12);
              ppuVar9[4] = ppuVar9[1];
              *ppuVar10 = (undefined1 *)pfVar6;
              ppuVar9[5] = ppuVar9[2];
              if (*pfVar6 < fVar14) {
                ppuVar9[5] = (undefined1 *)((float)ppuVar9[2] + fVar15 * (*pfVar6 - fVar14) + 1e-05)
                ;
              }
              *ppuVar13 = (undefined1 *)(pfVar6 + 3);
              ppuVar9 = ppuVar10;
              if (pfVar6[3] <= fVar16) {
                puVar7 = *ppuVar10;
                ppuVar13 = ppuVar13 + 3;
                goto LAB_0027dca4;
              }
              ppuVar13[1] = (undefined1 *)
                            ((float)ppuVar13[1] + (fVar15 * (pfVar6[3] - fVar16) - 1e-05));
              ppuVar13 = ppuVar13 + 3;
            }
LAB_0027dca0:
            puVar7 = *ppuVar9;
          }
          else {
            if (*pfVar6 < fVar14) {
              bVar3 = pfVar6[4] < fVar14;
code_r0x0027dbe4:
              if (!bVar3) {
                *ppuVar9 = (undefined1 *)(pfVar6 + 3);
                goto LAB_0027dca0;
              }
              bVar2 = true;
              break;
            }
            if (fVar16 < pfVar6[3]) {
              if (pfVar6[1] <= fVar16) {
                *ppuVar9 = (undefined1 *)pfVar6;
                goto LAB_0027dca0;
              }
              bVar2 = true;
              break;
            }
            ppuVar10 = ppuVar9 + 3;
            fVar15 = *(float *)(auStack_b0 + iVar12);
            *ppuVar10 = (undefined1 *)(pfVar6 + 3);
            ppuVar9[4] = ppuVar9[1];
            ppuVar9[5] = ppuVar9[2];
            if (fVar14 < pfVar6[3]) {
              ppuVar9[5] = (undefined1 *)((float)ppuVar9[2] + fVar15 * (pfVar6[3] - fVar14) + 1e-05)
              ;
            }
            *ppuVar13 = (undefined1 *)pfVar6;
            ppuVar9 = ppuVar10;
            if (*pfVar6 < fVar16) {
              ppuVar13[1] = (undefined1 *)
                            ((float)ppuVar13[1] + (fVar15 * (*pfVar6 - fVar16) - 1e-05));
              ppuVar13 = ppuVar13 + 3;
              goto LAB_0027dca0;
            }
            puVar7 = *ppuVar10;
            ppuVar13 = ppuVar13 + 3;
          }
LAB_0027dca4:
          if (puVar7[0xb] != -1) break;
          uVar1 = *(ushort *)(puVar7 + 8);
        } while( true );
      }
    } while (bVar2);
    if (*(int *)(param_1[2] + 0xc) == 0) {
      FUN_0026d378();
    }
    else {
      FUN_0026e770();
    }
  } while( true );
}


// ==== FUN_0027dd60 @ 0027dd60 ====

undefined8 FUN_0027dd60(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  float *pfVar6;
  undefined1 *puVar7;
  undefined1 auVar8 [16];
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 auVar11 [16];
  int iVar12;
  undefined1 **ppuVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_vf0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_vf4 [16];
  undefined1 auStack_3e0 [8];
  undefined2 uStack_3d8;
  undefined1 uStack_3d5;
  undefined1 *puStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  undefined1 *apuStack_3c4 [189];
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  bVar2 = false;
  auVar17 = _lqc2(*param_2);
  auVar18 = _lqc2(param_2[1]);
  auVar11 = _qmfc2(auVar17._0_4_);
  auVar17 = _lqc2(param_1[1]);
  auVar8 = _qmfc2(auVar18._0_4_);
  auVar18 = _lqc2(*param_1);
  auVar17 = _qmfc2(auVar17._0_4_);
  auVar18 = _qmfc2(auVar18._0_4_);
  auStack_80 = _sqc2(in_vf4);
  fStack_bc = 1.0;
  fStack_c0 = 0.0;
  lVar5 = FUN_0027e820(auVar11._0_4_,auVar8._0_4_,auVar17._0_4_,auVar18._0_4_);
  _lqc2(auStack_80);
  if (lVar5 != 0) {
    auStack_d0._4_4_ = SUB124(*(undefined1 (*) [12])*param_1,4);
    uVar4 = auStack_d0._4_4_;
    _auStack_d0 = *param_1;
    lVar5 = FUN_0027e820(*(undefined4 *)(*param_2 + 4),SUB164(param_2[1],4),
                         (int)((ulong)*(undefined8 *)param_1[1] >> 0x20),uVar4);
    _lqc2(auStack_80);
    if (lVar5 != 0) {
      fStack_c8 = SUB124(*(undefined1 (*) [12])*param_1,8);
      fVar14 = fStack_c8;
      _auStack_d0 = *param_1;
      lVar5 = FUN_0027e820(*(undefined4 *)(*param_2 + 8),SUB164(param_2[1],8),
                           *(undefined4 *)(param_1[1] + 8),fVar14);
      _lqc2(auStack_80);
      bVar2 = lVar5 != 0;
    }
  }
  ppuVar13 = &puStack_3d0;
  if (bVar2) {
    uStack_3d8 = 0;
    if (*(short *)(param_1[2] + 10) == 0) {
      uStack_3d5 = param_1[2][8];
    }
    else {
      uStack_3d5 = 0xff;
    }
    auVar8 = _lqc2(*param_2);
    auVar17 = _lqc2(param_2[1]);
    auVar18 = _vsub(auVar17,auVar8);
    auStack_a0 = _sqc2(auVar8);
    auVar8 = _vmove(auVar18);
    auVar17 = _qmfc2(auVar8._0_4_);
    auStack_b0 = _sqc2(auVar18);
    if (((uint)auVar17._0_4_ & 0x7f800000) < 0x37800001) {
      auVar17 = _qmtc2(0x7f7fffff);
    }
    else {
      auVar17 = _qmtc2(1.0 / auVar17._0_4_);
    }
    _vaddbc(in_vf0,auVar17);
    auVar17 = _sqc2(auVar8);
    auStack_d0._4_4_ = auVar17._4_4_;
    if ((auStack_d0._4_4_ & 0x7f800000) < 0x37800001) {
      auVar17 = _qmtc2(0x7f7fffff);
    }
    else {
      auVar17 = _sqc2(auVar8);
      auStack_d0._4_4_ = auVar17._4_4_;
      auVar17 = _qmtc2(1.0 / (float)auStack_d0._4_4_);
    }
    _vaddbc(in_vf0,auVar17);
    _auStack_d0 = _sqc2(auVar8);
    if (((uint)fStack_c8 & 0x7f800000) < 0x37800001) {
      auVar17 = _qmtc2(0x7f7fffff);
    }
    else {
      _auStack_d0 = _sqc2(auVar8);
      auVar17 = _qmtc2(1.0 / fStack_c8);
    }
    auVar17 = _vaddbc(in_vf0,auVar17);
    ppuVar13 = apuStack_3c4;
    fStack_3cc = fStack_c0 - 1e-05;
    auStack_90 = _sqc2(auVar17);
    fStack_3c8 = fStack_bc + 1e-05;
    puStack_3d0 = auStack_3e0;
  }
  do {
    do {
      bVar2 = ppuVar13 <= &puStack_3d0;
      ppuVar13 = ppuVar13 + -3;
      if (bVar2) {
        return 0;
      }
      bVar2 = false;
      if ((*ppuVar13)[0xb] == -1) {
        uVar1 = *(ushort *)(*ppuVar13 + 8);
        ppuVar9 = ppuVar13;
        do {
          pfVar6 = (float *)(*(int *)param_1[2] + (uint)uVar1 * 0x18);
          iVar12 = (uint)*(byte *)((int)pfVar6 + 10) * 4;
          fVar15 = *(float *)(auStack_b0 + iVar12);
          fVar14 = *(float *)(auStack_a0 + iVar12) + (float)ppuVar9[2] * fVar15;
          fVar16 = *(float *)(auStack_a0 + iVar12) + (float)ppuVar9[1] * fVar15;
          if (0.0 < fVar15) {
            if (fVar14 < pfVar6[3]) {
              if (fVar14 < pfVar6[1]) {
                bVar2 = true;
                break;
              }
              *ppuVar9 = (undefined1 *)pfVar6;
            }
            else {
              if (*pfVar6 < fVar16) {
                bVar3 = pfVar6[4] < fVar16;
                goto code_r0x0027e19c;
              }
              ppuVar10 = ppuVar9 + 3;
              fVar15 = *(float *)(auStack_90 + iVar12);
              ppuVar9[4] = ppuVar9[1];
              *ppuVar10 = (undefined1 *)pfVar6;
              ppuVar9[5] = ppuVar9[2];
              if (*pfVar6 < fVar14) {
                ppuVar9[5] = (undefined1 *)((float)ppuVar9[2] + fVar15 * (*pfVar6 - fVar14) + 1e-05)
                ;
              }
              *ppuVar13 = (undefined1 *)(pfVar6 + 3);
              ppuVar9 = ppuVar10;
              if (pfVar6[3] <= fVar16) {
                puVar7 = *ppuVar10;
                ppuVar13 = ppuVar13 + 3;
                goto LAB_0027e25c;
              }
              ppuVar13[1] = (undefined1 *)
                            ((float)ppuVar13[1] + (fVar15 * (pfVar6[3] - fVar16) - 1e-05));
              ppuVar13 = ppuVar13 + 3;
            }
LAB_0027e258:
            puVar7 = *ppuVar9;
          }
          else {
            if (*pfVar6 < fVar14) {
              bVar3 = pfVar6[4] < fVar14;
code_r0x0027e19c:
              if (!bVar3) {
                *ppuVar9 = (undefined1 *)(pfVar6 + 3);
                goto LAB_0027e258;
              }
              bVar2 = true;
              break;
            }
            if (fVar16 < pfVar6[3]) {
              if (pfVar6[1] <= fVar16) {
                *ppuVar9 = (undefined1 *)pfVar6;
                goto LAB_0027e258;
              }
              bVar2 = true;
              break;
            }
            ppuVar10 = ppuVar9 + 3;
            fVar15 = *(float *)(auStack_90 + iVar12);
            *ppuVar10 = (undefined1 *)(pfVar6 + 3);
            ppuVar9[4] = ppuVar9[1];
            ppuVar9[5] = ppuVar9[2];
            if (fVar14 < pfVar6[3]) {
              ppuVar9[5] = (undefined1 *)((float)ppuVar9[2] + fVar15 * (pfVar6[3] - fVar14) + 1e-05)
              ;
            }
            *ppuVar13 = (undefined1 *)pfVar6;
            ppuVar9 = ppuVar10;
            if (*pfVar6 < fVar16) {
              ppuVar13[1] = (undefined1 *)
                            ((float)ppuVar13[1] + (fVar15 * (*pfVar6 - fVar16) - 1e-05));
              ppuVar13 = ppuVar13 + 3;
              goto LAB_0027e258;
            }
            puVar7 = *ppuVar10;
            ppuVar13 = ppuVar13 + 3;
          }
LAB_0027e25c:
          if (puVar7[0xb] != -1) break;
          uVar1 = *(ushort *)(puVar7 + 8);
        } while( true );
      }
    } while (bVar2);
    if (*(int *)(param_1[2] + 0xc) == 0) {
      lVar5 = FUN_0027f5e0();
    }
    else {
      lVar5 = FUN_0026e318();
    }
    if (lVar5 != 0) {
      return 1;
    }
  } while( true );
}


// ==== FUN_0027e308 @ 0027e308 ====

void FUN_0027e308(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,
                 undefined8 param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 in_zero_qw [16];
  char cVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  undefined8 in_a0_udw;
  int iVar10;
  float *pfVar11;
  undefined8 in_a1_udw;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  ushort uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  ushort uVar17;
  ushort uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [8];
  undefined2 uStack_2b8;
  undefined1 uStack_2b5;
  undefined1 *apuStack_2b0 [128];
  undefined1 auStack_b0 [8];
  float fStack_a8;
  
  auVar16._8_8_ = in_a1_udw;
  auVar16._0_8_ = param_2;
  auVar16 = _por(in_zero_qw,auVar16);
  uVar17 = 0;
  uVar18 = 0;
  cVar5 = FUN_0027e900();
  if (cVar5 == '\x01') {
    uVar15 = auVar16._0_4_;
    auVar20 = _qmtc2(uVar15);
    auVar21 = _qmtc2(uVar15);
    auVar20 = _vsubbc(auVar20,auVar20);
    auVar21 = _vaddbc(auVar21,auVar21);
    auStack_2f0 = _sqc2(auVar20);
    auStack_300 = _sqc2(auVar21);
    auVar23 = _qmtc2(uVar15);
    auVar21 = _qmtc2(uVar15);
    uStack_2b8 = 0;
    auVar20 = _qmtc2((1.0 / auVar16._12_4_) * 0.577);
    auVar21 = _vaddbc(auVar21,auVar20);
    auVar20 = _vsubbc(auVar23,auVar20);
    auStack_2d0 = _sqc2(auVar20);
    auStack_2e0 = _sqc2(auVar21);
    if (*(short *)(param_1[2] + 10) == 0) {
      uStack_2b5 = param_1[2][8];
    }
    else {
      uStack_2b5 = 0xff;
    }
    auVar23 = _lqc2(param_1[1]);
    auVar22 = _lqc2(auStack_2d0);
    auVar20 = _qmfc2(auVar23._0_4_);
    auVar21 = _qmfc2(auVar22._0_4_);
    apuStack_2b0[0] = auStack_2c0;
    uVar8 = (ulong)(auVar20._0_4_ < auVar21._0_4_);
    auVar20 = _sqc2(auVar23);
    auStack_b0._4_4_ = auVar20._4_4_;
    uVar15 = auStack_b0._4_4_;
    auVar20 = _sqc2(auVar22);
    auStack_b0._4_4_ = auVar20._4_4_;
    if ((float)uVar15 < (float)auStack_b0._4_4_) {
      uVar8 = uVar8 | 4;
    }
    auVar20 = _sqc2(auVar23);
    fStack_a8 = auVar20._8_4_;
    fVar19 = fStack_a8;
    auVar20 = _sqc2(auVar22);
    fStack_a8 = auVar20._8_4_;
    if (fVar19 < fStack_a8) {
      uVar8 = uVar8 | 0x10;
    }
    auVar23 = _lqc2(*param_1);
    auVar22 = _lqc2(auStack_2e0);
    auVar20 = _qmfc2(auVar23._0_4_);
    auVar21 = _qmfc2(auVar22._0_4_);
    if (auVar21._0_4_ < auVar20._0_4_) {
      uVar8 = uVar8 | 2;
    }
    auVar21._8_8_ = in_a0_udw;
    auVar21._0_8_ = uVar8;
    auVar20 = _sqc2(auVar23);
    auStack_b0._4_4_ = auVar20._4_4_;
    uVar15 = auStack_b0._4_4_;
    auVar20 = _sqc2(auVar22);
    auStack_b0._4_4_ = auVar20._4_4_;
    if ((float)auStack_b0._4_4_ < (float)uVar15) {
      uVar8 = uVar8 | 8;
    }
    apuStack_2b0[1] = (undefined1 *)uVar8;
    auVar20 = _sqc2(auVar23);
    fStack_a8 = auVar20._8_4_;
    fVar19 = fStack_a8;
    _auStack_b0 = _sqc2(auVar22);
    auVar20 = _auStack_b0;
    if (fStack_a8 < fVar19) {
      apuStack_2b0[1] = (undefined1 *)((uint)apuStack_2b0[1] | 0x20);
    }
    if (apuStack_2b0 < apuStack_2b0 + 2) {
      ppuVar12 = apuStack_2b0;
      _auStack_b0 = auVar20;
      do {
        bVar4 = false;
LAB_0027e694:
        while( true ) {
          ppuVar13 = ppuVar12;
          puVar2 = *ppuVar13;
          puVar3 = ppuVar13[1];
          if (puVar2[0xb] != -1) break;
          if (ppuVar13[1] == (undefined1 *)0x0) {
            iVar9 = *(int *)param_1[2];
            iVar10 = iVar9 + (uint)*(ushort *)(puVar2 + 8) * 0x18;
            iVar7 = iVar10;
            if (*(char *)(iVar10 + 0xb) == -1) {
              uVar17 = *(ushort *)(iVar10 + 8);
              while (iVar7 = (uint)uVar17 * 0x18 + iVar9, *(char *)(iVar7 + 0xb) == -1) {
                uVar17 = *(ushort *)(iVar7 + 8);
              }
            }
            auVar21._0_8_ = (long)(iVar10 + 0xc);
            uVar17 = *(ushort *)(iVar7 + 8);
            if (*(char *)(iVar10 + 0x17) == -1) {
              uVar18 = *(ushort *)(iVar10 + 0x14);
              while( true ) {
                iVar7 = (uint)uVar18 * 0x18 + iVar9;
                auVar21._0_8_ = (long)(iVar7 + 0xc);
                if (*(char *)(iVar7 + 0x17) != -1) break;
                uVar18 = *(ushort *)(iVar7 + 0x14);
              }
            }
            uVar18 = *(short *)(auVar21._0_4_ + 8) - (uVar17 - 1);
            goto LAB_0027e6ac;
          }
          pfVar11 = (float *)(*(int *)param_1[2] + (uint)*(ushort *)(puVar2 + 8) * 0x18);
          bVar1 = *(byte *)((int)pfVar11 + 10);
          iVar9 = (uint)bVar1 * 4;
          auVar21._0_8_ = (long)(int)(auStack_300 + iVar9);
          fVar19 = *(float *)(auStack_300 + iVar9);
          ppuVar12 = ppuVar13;
          if (fVar19 < pfVar11[3]) {
            if (pfVar11[1] <= fVar19) goto code_r0x0027e5f8;
            bVar4 = true;
            goto LAB_0027e6ac;
          }
          if (*pfVar11 < *(float *)(auStack_2f0 + iVar9)) {
            if (pfVar11[4] < *(float *)(auStack_2f0 + iVar9)) {
              bVar4 = true;
              goto LAB_0027e6ac;
            }
            *ppuVar13 = (undefined1 *)(pfVar11 + 3);
          }
          else {
            *ppuVar13 = (undefined1 *)(pfVar11 + 3);
            if (*(float *)(auStack_2d0 + iVar9) <= pfVar11[3]) {
              ppuVar13[1] = (undefined1 *)((uint)ppuVar13[1] & ~(1 << (bVar1 & 0x1f)));
            }
            ppuVar12 = ppuVar13 + 2;
            *ppuVar12 = (undefined1 *)pfVar11;
            ppuVar13[3] = puVar3;
            if (*pfVar11 <= *(float *)(auStack_2e0 + iVar9)) {
              ppuVar13[3] = (undefined1 *)((uint)puVar3 & ~(2 << (bVar1 & 0x1f)));
            }
          }
        }
        uVar17 = *(ushort *)(puVar2 + 8);
        uVar18 = 1;
LAB_0027e6ac:
        if ((!bVar4) && (uVar14 = 0, uVar6 = uVar17, uVar18 != 0)) {
          do {
            if (*(int *)(param_1[2] + 0xc) == 0) {
              auVar21 = _por(in_zero_qw,auVar16);
              FUN_0026d6f0(auVar21._0_8_,*(int *)(param_1[2] + 4) + (uint)uVar6 * 0x10,param_3,
                           param_4);
            }
            else {
              auVar21 = _por(in_zero_qw,auVar16);
              FUN_0026ed40(auVar21._0_8_,*(int *)(param_1[2] + 4) + (uint)uVar6 * 0x10,param_3,
                           param_4);
            }
            uVar14 = uVar14 + 1;
            uVar6 = uVar17 + uVar14;
          } while (uVar14 < uVar18);
        }
        ppuVar12 = ppuVar13 + -2;
      } while (apuStack_2b0 < ppuVar13);
    }
  }
  return;
code_r0x0027e5f8:
  *ppuVar13 = (undefined1 *)pfVar11;
  goto LAB_0027e694;
}


// ==== FUN_0027e760 @ 0027e760 ====

void FUN_0027e760(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = param_1 + *(int *)(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = param_1 + *(int *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = 0;
    if (*(short *)(param_1 + 0x28) != 0) {
      iVar1 = *(int *)(param_1 + 0x24);
      while( true ) {
        FUN_0027f6d8(iVar1 + uVar2 * 0x10);
        uVar2 = uVar2 + 1 & 0xffff;
        if (*(ushort *)(param_1 + 0x28) <= uVar2) break;
        iVar1 = *(int *)(param_1 + 0x24);
      }
    }
  }
  else {
    uVar2 = 0;
    if (*(short *)(param_1 + 0x28) != 0) {
      iVar1 = *(int *)(param_1 + 0x24);
      while( true ) {
        FUN_0027f708(iVar1 + uVar2 * 0x10);
        uVar2 = uVar2 + 1 & 0xffff;
        if (*(ushort *)(param_1 + 0x28) <= uVar2) break;
        iVar1 = *(int *)(param_1 + 0x24);
      }
    }
  }
  return;
}


// ==== FUN_0027e820 @ 0027e820 ====

int FUN_0027e820(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                float *param_6,float *param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0x37800000 < ((uint)(param_2 - param_1) & 0x7f800000)) {
    fVar3 = 1.0 / (param_2 - param_1);
    fVar2 = param_3;
    if (fVar3 <= 0.0) {
      fVar2 = param_4;
      param_4 = param_3;
    }
    fVar4 = (param_4 - param_1) * fVar3;
    fVar3 = (fVar2 - param_1) * fVar3;
    fVar2 = *param_6;
    iVar1 = 0;
    if ((fVar2 <= fVar4) && (fVar3 <= *param_7)) {
      iVar1 = 1;
    }
    if (iVar1 != 0) {
      *param_6 = (float)((int)fVar2 * (uint)(fVar3 < fVar2) | (int)fVar3 * (uint)(fVar3 >= fVar2));
      fVar2 = *param_7;
      *param_7 = (float)((int)fVar2 * (uint)(fVar2 < fVar4) | (int)fVar4 * (uint)(fVar2 >= fVar4));
    }
    return iVar1;
  }
  iVar1 = 0;
  if ((param_3 <= param_1) && (param_1 <= param_4)) {
    iVar1 = 1;
  }
  return iVar1;
}


// ==== FUN_0027e900 @ 0027e900 ====
// GLOBAL DAT_00440250 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0027e900(undefined1 (*param_1) [16],undefined4 param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fStack_4;
  
  auVar1 = _lqc2(param_1[1]);
  auVar4 = _qmtc2(0x3f000000);
  auVar2 = _lqc2(*param_1);
  auVar3 = _vsub(auVar2,auVar1);
  auVar2 = _qmtc2(param_2);
  auVar3 = _vmulbc(auVar3,auVar4);
  auVar1 = _vadd(auVar1,auVar3);
  auVar4 = _vmulbc(auVar2,auVar2);
  auVar2 = _vsub(auVar2,auVar1);
  auVar5 = _lqc2(_DAT_00440250);
  auVar2 = _vabs(auVar2);
  auVar1 = _vsub(auVar2,auVar3);
  auVar2 = _sqc2(auVar4);
  auVar1 = _vmax(auVar1,auVar5);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar3,auVar1);
  fStack_4 = auVar2._12_4_;
  auVar2 = _qmfc2(auVar1._0_4_);
  return auVar2._0_4_ < fStack_4;
}


// ==== FUN_0027e9b0 @ 0027e9b0 ====

undefined8
FUN_0027e9b0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 in_vf0 [16];
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
  undefined4 uVar18;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  float fStack_5c;
  float fStack_58;
  
  iVar2 = 1;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  uVar3 = FUN_0027f338();
  uVar4 = FUN_0027f338();
  if ((uVar3 == 0) && (uVar4 == 0)) {
    return 2;
  }
  if ((uVar3 & uVar4) != 0) {
    return 0;
  }
  auVar8 = _lqc2(param_1[1]);
  auVar7 = _lqc2(*param_1);
  auVar10 = _vsub(auVar8,auVar7);
  auVar7 = _vmove(auVar7);
  if (uVar3 == 0) {
    auVar7 = _vmove(auVar8);
    uVar3 = uVar4;
  }
  if ((uVar3 & 3) == 0) {
LAB_0027ec14:
    if ((uVar3 & 0xc) != 0) {
      if ((uVar3 & 4) == 0) {
        auVar8 = _lqc2(param_2[1]);
      }
      else {
        auVar8 = _lqc2(*param_2);
      }
      _lqc2(*param_3);
      auVar8 = _vaddbc(in_vf0,auVar8);
      auVar8 = _sqc2(auVar8);
      *param_3 = auVar8;
      auVar8 = _sqc2(auVar10);
      auVar9 = _lqc2(*param_3);
      fStack_5c = auVar8._4_4_;
      fVar6 = fStack_5c;
      auVar8 = _vsubbc(auVar9,auVar7);
      auVar8 = _sqc2(auVar8);
      fStack_5c = auVar8._4_4_;
      fVar6 = fStack_5c / fVar6;
      auVar8 = _qmtc2(fVar6);
      auVar9 = _vmulbc(auVar10,auVar8);
      auVar9 = _vaddbc(auVar7,auVar9);
      auVar8 = _vmulbc(auVar10,auVar8);
      auVar9 = _vaddbc(in_vf0,auVar9);
      auVar8 = _vaddbc(auVar7,auVar8);
      _vmove(auVar9);
      auVar8 = _vaddbc(in_vf0,auVar8);
      auVar11 = _vmove(auVar8);
      auVar9 = _qmfc2(auVar11._0_4_);
      auVar8 = _sqc2(auVar11);
      *param_3 = auVar8;
      auVar12 = _lqc2(*param_2);
      auVar8 = _qmfc2(auVar12._0_4_);
      bVar1 = false;
      if (auVar9._0_4_ <= auVar8._0_4_) {
        auVar13 = _lqc2(param_2[1]);
        auVar8 = _qmfc2(auVar13._0_4_);
        auVar11 = _qmfc2(auVar11._0_4_);
        if (auVar8._0_4_ <= auVar9._0_4_) {
          auVar8 = _sqc2(auVar12);
          fStack_58 = auVar8._8_4_;
          bVar1 = false;
          if (auVar11._8_4_ <= fStack_58) {
            auVar8 = _sqc2(auVar13);
            fStack_58 = auVar8._8_4_;
            bVar1 = fStack_58 <= auVar11._8_4_;
          }
        }
        else {
          bVar1 = false;
        }
      }
      _lqc2(auStack_90);
      if (bVar1) {
        auVar7 = _lqc2(*param_2);
        auVar15 = _lqc2(param_2[1]);
        _lqc2(auStack_70);
        auVar8 = _vaddbc(in_vf0,auVar7);
        auVar9 = _vaddbc(in_vf0,auVar15);
        _lqc2(auStack_80);
        _vmove(auVar8);
        auVar10 = _vaddbc(in_vf0,auVar7);
        _vmove(auVar9);
        auVar12 = _vaddbc(in_vf0,auVar7);
        auVar14 = _vaddbc(in_vf0,auVar7);
        _vmove(auVar10);
        _vmove(auVar14);
        auVar13 = _vaddbc(in_vf0,auVar7);
        _vmove(auVar12);
        auVar16 = _vaddbc(in_vf0,auVar7);
        auVar11 = _vaddbc(in_vf0,auVar7);
        _sqc2(auVar8);
        _vmove(auVar13);
        auVar17 = _vsub(auVar16,auVar11);
        _sqc2(auVar10);
        auVar7 = _vaddbc(in_vf0,auVar15);
        _sqc2(auVar9);
        auVar9 = _vsub(auVar7,auVar11);
        _sqc2(auVar12);
        _sqc2(auVar13);
        _sqc2(auVar14);
        auVar10 = _vmove(auVar9);
        auVar8 = _vmove(auVar17);
        _sqc2(auVar11);
        _sqc2(auVar7);
        _sqc2(auVar16);
        if ((uVar3 & 4) == 0) {
          _vopmula(auVar17,auVar9);
          auVar7 = _vopmsub(auVar9,auVar17);
          auVar7 = _sqc2(auVar7);
          param_3[1] = auVar7;
        }
        else {
          _vopmula(auVar10,auVar8);
          auVar7 = _vopmsub(auVar8,auVar10);
          auVar7 = _sqc2(auVar7);
          param_3[1] = auVar7;
        }
        goto LAB_0027ef74;
      }
    }
    if ((uVar3 & 0x30) != 0) {
      if ((uVar3 & 0x20) == 0) {
        auVar8 = _lqc2(param_2[1]);
      }
      else {
        auVar8 = _lqc2(*param_2);
      }
      _lqc2(*param_3);
      auVar8 = _vaddbc(in_vf0,auVar8);
      auVar8 = _sqc2(auVar8);
      *param_3 = auVar8;
      auVar8 = _sqc2(auVar10);
      auVar9 = _lqc2(*param_3);
      fStack_58 = auVar8._8_4_;
      fVar6 = fStack_58;
      auVar8 = _vsubbc(auVar9,auVar7);
      auVar8 = _sqc2(auVar8);
      fStack_58 = auVar8._8_4_;
      fVar6 = fStack_58 / fVar6;
      auVar8 = _qmtc2(fVar6);
      auVar9 = _vmulbc(auVar10,auVar8);
      auVar9 = _vaddbc(auVar7,auVar9);
      auVar8 = _vmulbc(auVar10,auVar8);
      auVar10 = _vaddbc(in_vf0,auVar9);
      auVar7 = _vaddbc(auVar7,auVar8);
      _vmove(auVar10);
      auVar7 = _vaddbc(in_vf0,auVar7);
      auVar10 = _vmove(auVar7);
      auVar8 = _qmfc2(auVar10._0_4_);
      auVar7 = _sqc2(auVar10);
      *param_3 = auVar7;
      auVar9 = _lqc2(*param_2);
      auVar7 = _qmfc2(auVar9._0_4_);
      bVar1 = false;
      if (auVar8._0_4_ <= auVar7._0_4_) {
        auVar11 = _lqc2(param_2[1]);
        auVar7 = _qmfc2(auVar11._0_4_);
        auVar10 = _qmfc2(auVar10._0_4_);
        if (auVar7._0_4_ <= auVar8._0_4_) {
          auVar7 = _sqc2(auVar9);
          fStack_5c = auVar7._4_4_;
          bVar1 = false;
          if (auVar10._4_4_ <= fStack_5c) {
            auVar7 = _sqc2(auVar11);
            fStack_5c = auVar7._4_4_;
            bVar1 = fStack_5c <= auVar10._4_4_;
          }
        }
        else {
          bVar1 = false;
        }
      }
      if (bVar1) {
        auVar7 = _lqc2(*param_2);
        auVar11 = _lqc2(param_2[1]);
        _lqc2(auStack_90);
        _lqc2(auStack_80);
        auVar8 = _vaddbc(in_vf0,auVar7);
        _lqc2(auStack_70);
        auVar10 = _vaddbc(in_vf0,auVar7);
        auVar9 = _vaddbc(in_vf0,auVar11);
        _vmove(auVar8);
        _vmove(auVar10);
        auVar13 = _vaddbc(in_vf0,auVar7);
        _vmove(auVar9);
        auVar14 = _vaddbc(in_vf0,auVar11);
        auVar15 = _vaddbc(in_vf0,auVar7);
        _vmove(auVar13);
        _vmove(auVar15);
        auVar11 = _vaddbc(in_vf0,auVar7);
        _vmove(auVar14);
        auVar16 = _vaddbc(in_vf0,auVar7);
        auVar12 = _vaddbc(in_vf0,auVar7);
        _sqc2(auVar8);
        _sqc2(auVar10);
        auVar17 = _vsub(auVar16,auVar11);
        _sqc2(auVar9);
        auVar10 = _vsub(auVar12,auVar11);
        _sqc2(auVar13);
        _sqc2(auVar14);
        _sqc2(auVar15);
        auVar8 = _vmove(auVar10);
        auVar7 = _vmove(auVar17);
        _sqc2(auVar11);
        _sqc2(auVar12);
        _sqc2(auVar16);
        if ((uVar3 & 0x10) == 0) {
          _vopmula(auVar17,auVar10);
          auVar7 = _vopmsub(auVar10,auVar17);
          auVar7 = _sqc2(auVar7);
          param_3[1] = auVar7;
        }
        else {
          _vopmula(auVar8,auVar7);
          auVar7 = _vopmsub(auVar7,auVar8);
          auVar7 = _sqc2(auVar7);
          param_3[1] = auVar7;
        }
        goto LAB_0027ef74;
      }
    }
    uVar5 = 0;
  }
  else {
    if ((uVar3 & 1) == 0) {
      auVar8 = _lqc2(param_2[1]);
    }
    else {
      auVar8 = _lqc2(*param_2);
    }
    _lqc2(*param_3);
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar8 = _sqc2(auVar8);
    *param_3 = auVar8;
    auVar9 = _lqc2(*param_3);
    auVar8 = _qmfc2(auVar10._0_4_);
    auVar9 = _vsubbc(auVar9,auVar7);
    auVar9 = _qmfc2(auVar9._0_4_);
    fVar6 = auVar9._0_4_ / auVar8._0_4_;
    auVar8 = _qmtc2(fVar6);
    auVar9 = _vmulbc(auVar10,auVar8);
    auVar9 = _vaddbc(auVar7,auVar9);
    auVar8 = _vmulbc(auVar10,auVar8);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar8 = _vaddbc(auVar7,auVar8);
    _vmove(auVar9);
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar9 = _vmove(auVar8);
    auVar8 = _sqc2(auVar9);
    *param_3 = auVar8;
    auVar8 = _sqc2(auVar9);
    fStack_5c = auVar8._4_4_;
    bVar1 = false;
    if (fStack_5c <= *(float *)(*param_2 + 4)) {
      auVar8 = _sqc2(auVar9);
      fStack_5c = auVar8._4_4_;
      if (*(float *)(param_2[1] + 4) <= fStack_5c) {
        auVar8 = _sqc2(auVar9);
        fStack_58 = auVar8._8_4_;
        if (fStack_58 <= *(float *)(*param_2 + 8)) {
          auVar8 = _sqc2(auVar9);
          fStack_58 = auVar8._8_4_;
          bVar1 = *(float *)(param_2[1] + 8) <= fStack_58;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    if (!bVar1) goto LAB_0027ec14;
    auVar7 = _lqc2(*param_2);
    _lqc2(auStack_70);
    auVar11 = _vaddbc(in_vf0,auVar7);
    _lqc2(auStack_90);
    _lqc2(auStack_80);
    auVar8 = _vaddbc(in_vf0,auVar7);
    _vmove(auVar11);
    auVar9 = _vaddbc(in_vf0,auVar7);
    auVar15 = _vaddbc(in_vf0,auVar7);
    auVar10 = _lqc2(param_2[1]);
    _vmove(auVar8);
    _vmove(auVar9);
    auVar13 = _vaddbc(in_vf0,auVar7);
    _vmove(auVar15);
    auVar14 = _vaddbc(in_vf0,auVar10);
    auVar16 = _vaddbc(in_vf0,auVar10);
    _vmove(auVar13);
    _vmove(auVar14);
    auVar10 = _vaddbc(in_vf0,auVar7);
    _sqc2(auVar8);
    auVar12 = _vaddbc(in_vf0,auVar7);
    _sqc2(auVar9);
    auVar9 = _vsub(auVar16,auVar10);
    _sqc2(auVar11);
    auVar7 = _vsub(auVar12,auVar10);
    _sqc2(auVar13);
    _sqc2(auVar14);
    _sqc2(auVar15);
    auVar11 = _vmove(auVar7);
    auVar8 = _vmove(auVar9);
    _sqc2(auVar10);
    _sqc2(auVar12);
    _sqc2(auVar16);
    if ((uVar3 & 1) == 0) {
      _vopmula(auVar9,auVar7);
      auVar7 = _vopmsub(auVar7,auVar9);
      auVar7 = _sqc2(auVar7);
      param_3[1] = auVar7;
    }
    else {
      _vopmula(auVar11,auVar8);
      auVar7 = _vopmsub(auVar8,auVar11);
      auVar7 = _sqc2(auVar7);
      param_3[1] = auVar7;
    }
LAB_0027ef74:
    auVar10 = _lqc2(param_3[1]);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _vmul(auVar10,auVar10);
    *(float *)param_3[2] = fVar6;
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar8,auVar7);
    uVar5 = 1;
    auVar8 = _vmove(auVar10);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    uVar18 = _vwaitq();
    auVar7 = _vmulq(auVar8,uVar18);
    _vmulq(auVar10,uVar18);
    auVar7 = _sqc2(auVar7);
    param_3[1] = auVar7;
  }
  return uVar5;
}


// ==== FUN_0027efe8 @ 0027efe8 ====

undefined8 FUN_0027efe8(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fStack_4;
  
  auVar6 = _qmtc2(param_1);
  auVar5 = _qmtc2(param_2);
  auVar3 = _vaddbc(auVar6,auVar5);
  auVar2 = _vsub(auVar6,auVar5);
  auVar3 = _sqc2(auVar3);
  auVar2 = _vmul(auVar2,auVar2);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  fStack_4 = auVar3._12_4_;
  auVar3 = _qmfc2(auVar2._0_4_);
  uVar1 = 0;
  if (auVar3._0_4_ <= fStack_4 * fStack_4) {
    auVar2 = _vsubbc(auVar5,auVar6);
    auVar2 = _sqc2(auVar2);
    fStack_4 = auVar2._12_4_;
    uVar1 = 1;
    if ((0.0 <= fStack_4) && (uVar1 = 2, fStack_4 * fStack_4 <= auVar3._0_4_)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_0027f070 @ 0027f070 ====

undefined8 FUN_0027f070(undefined4 param_1,undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fStack_4;
  
  auVar7 = _lqc2(*param_2);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _lqc2(param_2[1]);
  auVar8 = _qmtc2(param_1);
  auVar9 = _vsub(auVar10,auVar7);
  auVar3 = _vmove(auVar9);
  auVar5 = _vsub(auVar8,auVar7);
  auVar4 = _vmul(auVar5,auVar3);
  auVar3 = _vmul(auVar3,auVar3);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar6,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar6,auVar3);
  auVar4 = _qmfc2(auVar4._0_4_);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar2 = auVar4._0_4_ / auVar3._0_4_;
  if (fVar2 <= 0.0) {
    auVar3 = _vmul(auVar5,auVar5);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar6,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    fVar2 = auVar3._0_4_;
  }
  else if (1.0 <= fVar2) {
    auVar3 = _vsub(auVar8,auVar10);
    auVar3 = _vmul(auVar3,auVar3);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar6,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    fVar2 = auVar3._0_4_;
  }
  else {
    auVar3 = _qmtc2(fVar2);
    auVar3 = _vmulbc(auVar9,auVar3);
    auVar3 = _vadd(auVar7,auVar3);
    auVar3 = _vsub(auVar8,auVar3);
    auVar3 = _vmul(auVar3,auVar3);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar6,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    fVar2 = auVar3._0_4_;
  }
  auVar3 = _qmtc2(*(float *)param_2[2]);
  auVar3 = _vaddbc(auVar8,auVar3);
  auVar3 = _vmulbc(auVar3,auVar3);
  auVar3 = _sqc2(auVar3);
  fStack_4 = auVar3._12_4_;
  uVar1 = 0;
  if (fVar2 <= fStack_4) {
    auVar3 = _qmtc2(SQRT(fVar2));
    auVar3 = _vaddbc(auVar8,auVar3);
    auVar3 = _sqc2(auVar3);
    fStack_4 = auVar3._12_4_;
    uVar1 = 1;
    if (fStack_4 < *(float *)param_2[2]) {
      uVar1 = 2;
    }
  }
  return uVar1;
}


// ==== FUN_0027f218 @ 0027f218 ====

undefined8
FUN_0027f218(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

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
  
  auVar8 = _qmtc2(param_3);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _qmtc2(param_4);
  auVar6 = _qmtc2(param_1);
  auVar1 = _vsub(auVar4,auVar8);
  auVar7 = _qmtc2(param_2);
  auVar2 = _vsub(auVar6,auVar8);
  _vopmula(auVar7,auVar1);
  auVar1 = _vopmsub(auVar1,auVar7);
  auVar3 = _qmtc2(param_5);
  auVar1 = _vmul(auVar1,auVar2);
  auVar2 = _qmtc2(param_6);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar5,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  if (0.0 <= auVar1._0_4_) {
    auVar1 = _vsub(auVar3,auVar4);
    auVar4 = _vsub(auVar6,auVar4);
    _vopmula(auVar7,auVar1);
    auVar1 = _vopmsub(auVar1,auVar7);
    auVar1 = _vmul(auVar1,auVar4);
    _vaddabc(auVar1,auVar1);
    auVar1 = _vmaddbc(auVar5,auVar1);
    auVar1 = _qmfc2(auVar1._0_4_);
    if (0.0 <= auVar1._0_4_) {
      auVar1 = _vsub(auVar2,auVar3);
      auVar3 = _vsub(auVar6,auVar3);
      _vopmula(auVar7,auVar1);
      auVar1 = _vopmsub(auVar1,auVar7);
      auVar1 = _vmul(auVar1,auVar3);
      _vaddabc(auVar1,auVar1);
      auVar1 = _vmaddbc(auVar5,auVar1);
      auVar1 = _qmfc2(auVar1._0_4_);
      if (0.0 <= auVar1._0_4_) {
        auVar1 = _vsub(auVar8,auVar2);
        auVar2 = _vsub(auVar6,auVar2);
        _vopmula(auVar7,auVar1);
        auVar1 = _vopmsub(auVar1,auVar7);
        auVar1 = _vmul(auVar1,auVar2);
        _vaddabc(auVar1,auVar1);
        auVar1 = _vmaddbc(auVar5,auVar1);
        auVar1 = _qmfc2(auVar1._0_4_);
        if (0.0 <= auVar1._0_4_) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}


// ==== FUN_0027f338 @ 0027f338 ====

uint FUN_0027f338(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fStack_c;
  float fStack_8;
  
  auVar6 = _qmtc2(param_2);
  auVar5 = _qmtc2(param_3);
  auVar4 = _qmfc2(auVar6._0_4_);
  auVar2 = _qmfc2(auVar5._0_4_);
  auVar7 = _qmtc2(param_1);
  uVar3 = 1;
  if (auVar2._0_4_ <= auVar4._0_4_) {
    auVar4 = _qmfc2(auVar7._0_4_);
    uVar3 = (uint)(auVar2._0_4_ < auVar4._0_4_) << 1;
  }
  auVar2 = _sqc2(auVar5);
  fStack_c = auVar2._4_4_;
  fVar1 = fStack_c;
  auVar2 = _sqc2(auVar6);
  fStack_c = auVar2._4_4_;
  if (fVar1 <= fStack_c) {
    auVar2 = _sqc2(auVar5);
    fStack_c = auVar2._4_4_;
    fVar1 = fStack_c;
    auVar2 = _sqc2(auVar7);
    fStack_c = auVar2._4_4_;
    if (fVar1 < fStack_c) {
      uVar3 = uVar3 | 8;
    }
  }
  else {
    uVar3 = uVar3 | 4;
  }
  auVar2 = _sqc2(auVar5);
  fStack_8 = auVar2._8_4_;
  fVar1 = fStack_8;
  auVar2 = _sqc2(auVar6);
  fStack_8 = auVar2._8_4_;
  if (fVar1 <= fStack_8) {
    auVar2 = _sqc2(auVar5);
    fStack_8 = auVar2._8_4_;
    fVar1 = fStack_8;
    auVar2 = _sqc2(auVar7);
    fStack_8 = auVar2._8_4_;
    if (fVar1 < fStack_8) {
      uVar3 = uVar3 | 0x10;
    }
  }
  else {
    uVar3 = uVar3 | 0x20;
  }
  return uVar3;
}


// ==== FUN_0027f470 @ 0027f470 ====

void FUN_0027f470(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                 undefined1 (*param_4) [16],uint *param_5)

{
  float fVar1;
  uint uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar5 = _qmtc2(param_2);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar5,auVar5);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar7,auVar3);
  auVar6 = _qmtc2(param_1);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar4 = _qmtc2(param_3);
  if (2.3283064e-10 <= auVar3._0_4_) {
    auVar4 = _vsub(auVar4,auVar6);
    auVar4 = _vmul(auVar5,auVar4);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    fVar1 = auVar4._0_4_ / auVar3._0_4_;
    fVar1 = (float)((int)fVar1 * (uint)(0.0 < fVar1));
    uVar2 = (int)fVar1 * (uint)(fVar1 < 1.0) | (uint)(fVar1 >= 1.0) * 0x3f800000;
    auVar3 = _qmtc2(uVar2);
    *param_5 = uVar2;
    auVar3 = _vmulbc(auVar5,auVar3);
    auVar3 = _vadd(auVar6,auVar3);
    auVar3 = _sqc2(auVar3);
    *param_4 = auVar3;
    return;
  }
  auVar3 = _sqc2(auVar6);
  *param_4 = auVar3;
  return;
}


// ==== FUN_0027f518 @ 0027f518 ====

undefined4 FUN_0027f518(undefined4 param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar2 = _lqc2(*param_2);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _lqc2(param_2[1]);
  auVar6 = _vsub(auVar3,auVar2);
  auVar3 = _qmtc2(param_1);
  auVar3 = _vsub(auVar3,auVar2);
  auVar5 = _vmove(auVar6);
  auVar2 = _vmul(auVar5,auVar3);
  auVar7 = _vmove(auVar4);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  fVar1 = auVar2._0_4_;
  if (0.0 < fVar1) {
    auVar2 = _vmul(auVar5,auVar5);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar7,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    if (auVar2._0_4_ <= fVar1) {
      auVar3 = _vsub(auVar3,auVar5);
    }
    else {
      auVar2 = _qmtc2(fVar1 / auVar2._0_4_);
      auVar2 = _vmulbc(auVar6,auVar2);
      auVar3 = _vsub(auVar3,auVar2);
    }
  }
  auVar2 = _vmul(auVar3,auVar3);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar7,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_4_;
}


// ==== FUN_0027f5e0 @ 0027f5e0 ====

undefined8 FUN_0027f5e0(void)

{
  return 0;
}


// ==== FUN_0027f640 @ 0027f640 ====

int FUN_0027f640(ushort *param_1)

{
  return (uint)param_1[5] + (uint)param_1[4] * 0x3c + (uint)param_1[3] * 0xe10 +
         (param_1[2] - 1) * 0x15180 + (param_1[1] - 1) * 0x28de80 +
         ((uint)*param_1 % 100) * 0x1ea6e00;
}


// ==== FUN_0027f6d8 @ 0027f6d8 ====

void FUN_0027f6d8(int *param_1)

{
  *param_1 = (int)param_1 + *param_1;
  param_1[1] = (int)param_1 + param_1[1];
  return;
}


// ==== FUN_0027f708 @ 0027f708 ====

void FUN_0027f708(int *param_1)

{
  *param_1 = (int)param_1 + *param_1;
  param_1[1] = (int)param_1 + param_1[1];
  return;
}


// ==== FUN_0027f730 @ 0027f730 ====
// GLOBAL DAT_003c0e04 undefined4
// GLOBAL DAT_0040ebac float
// GLOBAL DAT_0040eba8 int

undefined4 FUN_0027f730(int param_1)

{
  DAT_003c0e04 = 0;
  DAT_0040ebac = 1.0 / (float)param_1;
  DAT_0040eba8 = 1000 / param_1;
  return 1;
}


// ==== FUN_0027f778 @ 0027f778 ====
// GLOBAL DAT_003c0e04 int

void FUN_0027f778(void)

{
  DAT_003c0e04 = DAT_003c0e04 + 1;
  return;
}


// ==== FUN_0027f790 @ 0027f790 ====
// GLOBAL DAT_003c0e04 undefined4

void FUN_0027f790(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = DAT_003c0e04;
  param_1[9] = 1;
  param_1[5] = uVar1;
  param_1[8] = 0;
  param_1[6] = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  return;
}


// ==== FUN_0027f7d0 @ 0027f7d0 ====
// GLOBAL DAT_003c0e04 undefined4
// GLOBAL DAT_0040ebac undefined4

undefined4 FUN_0027f7d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_003c0e04;
  param_1[9] = 1;
  param_1[5] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  uVar1 = DAT_0040ebac;
  param_1[8] = 0;
  param_1[7] = uVar1;
  return 1;
}


// ==== FUN_0027f818 @ 0027f818 ====

void FUN_0027f818(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_0027f890();
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


// ==== FUN_0027f858 @ 0027f858 ====

void FUN_0027f858(int param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_0027f890();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}


// ==== FUN_0027f890 @ 0027f890 ====
// GLOBAL DAT_003c0e04 int
// GLOBAL DAT_0040ebac float

void FUN_0027f890(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != DAT_003c0e04) {
    if (param_1[6] != param_1[9]) {
      FUN_0027f9c8();
    }
    iVar4 = DAT_003c0e04 - param_1[5];
    iVar3 = iVar4 - param_1[1];
    *param_1 = DAT_003c0e04;
    if (0 < iVar3) {
      if ((char)param_1[10] == '\0') {
        param_1[2] = param_1[2] + iVar3;
      }
      else {
        iVar1 = param_1[6];
        if (iVar1 == 1) {
          param_1[3] = param_1[3] + iVar3;
        }
        else {
          iVar2 = param_1[4] + iVar3 % iVar1;
          param_1[4] = iVar2;
          if (iVar1 < iVar2) {
            param_1[4] = iVar2 % iVar1;
            param_1[3] = param_1[3] + iVar2 / iVar1;
          }
          param_1[3] = param_1[3] + iVar3 / param_1[6];
        }
      }
      param_1[1] = iVar4;
    }
  }
  param_1[8] = (int)((float)param_1[3] * DAT_0040ebac +
                    (float)param_1[4] * (DAT_0040ebac / (float)param_1[6]));
  return;
}


// ==== FUN_0027f9c0 @ 0027f9c0 ====

void FUN_0027f9c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// ==== FUN_0027f9c8 @ 0027f9c8 ====
// GLOBAL DAT_0040ebac float

void FUN_0027f9c8(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 1) {
    if (*(int *)(param_1 + 0x18) / 2 < *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x10) =
         (*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x24) + -1 + *(int *)(param_1 + 0x18)) /
         *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x24);
  *(float *)(param_1 + 0x1c) = DAT_0040ebac / (float)*(int *)(param_1 + 0x24);
  return;
}


// ==== FUN_0027fa68 @ 0027fa68 ====
// GLOBAL DAT_0043f8c8 undefined4
// GLOBAL DAT_0043f8cc undefined4
// GLOBAL DAT_0043f8d0 undefined4
// GLOBAL DAT_0043f8d4 undefined4
// GLOBAL DAT_0043f8d8 undefined4
// GLOBAL DAT_0043f8dc undefined4
// GLOBAL DAT_0043f6f0 undefined4
// GLOBAL DAT_0043f6f4 undefined4
// GLOBAL DAT_0043f6f8 undefined4
// GLOBAL DAT_0043f6fc undefined4
// GLOBAL DAT_0043f8a0 undefined4
// GLOBAL DAT_0043f8a4 undefined4
// GLOBAL DAT_0043f8c4 undefined4
// GLOBAL DAT_0043f8e0 undefined
// GLOBAL DAT_0043f8a8 undefined4
// GLOBAL DAT_0043f8ac undefined4
// GLOBAL DAT_0043f8b0 undefined4
// GLOBAL DAT_0043f8b4 undefined4
// GLOBAL DAT_0043f8b8 undefined4
// GLOBAL DAT_0043f8bc undefined4
// GLOBAL DAT_0043f8c0 undefined4
// GLOBAL DAT_00440250 undefined4
// GLOBAL DAT_00440254 undefined4
// GLOBAL DAT_00440258 undefined4
// GLOBAL DAT_0044025c undefined4

void FUN_0027fa68(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_0043f8c8 = 0xbfa00000;
    DAT_0043f8cc = 0xbfa00000;
    DAT_0043f8d0 = 0x3fa00000;
    DAT_0043f8d4 = 0x3fa00000;
    DAT_0043f8d8 = 0xbfa00000;
    DAT_0043f8dc = 0x3fa00000;
    DAT_0043f6f8 = 0x437f0000;
    DAT_0043f6fc = 0x43000000;
    DAT_0043f6f0 = 0x437f0000;
    DAT_0043f6f4 = 0x437f0000;
    DAT_0043f8a0 = 0x3f800000;
    DAT_0043f8a4 = 0x3faaaaab;
    DAT_0043f8c4 = 0;
    DAT_0043f8e0._4_4_ = 0xbfa00000;
    DAT_0043f8a8 = 0;
    DAT_0043f8ac = 0;
    DAT_0043f8b0 = 0;
    DAT_0043f8b4 = 0;
    DAT_0043f8b8 = 0;
    DAT_0043f8bc = 0;
    DAT_0043f8c0 = 0;
    DAT_0043f8e0._0_4_ = 0x3fa00000;
    for (iVar2 = 0x12a; iVar2 != -1; iVar2 = iVar2 + -1) {
    }
    auVar1 = _pextlw(0,0);
    auVar1 = _pextlw(0,auVar1._0_8_);
    DAT_00440250 = auVar1._0_4_;
    DAT_00440254 = auVar1._4_4_;
    DAT_00440258 = auVar1._8_4_;
    DAT_0044025c = auVar1._12_4_;
  }
  return;
}


// ==== FUN_0027fba0 @ 0027fba0 ====

void FUN_0027fba0(void)

{
  FUN_0027fa68(1,0xffff);
  return;
}


// ==== FUN_0027fbc0 @ 0027fbc0 ====

void FUN_0027fbc0(int param_1)

{
  *(undefined1 *)(param_1 + 0x102c) = 0;
  *(undefined4 *)(param_1 + 0x1028) = 0;
  *(undefined4 *)(param_1 + 0x1024) = 0;
  *(undefined1 *)(param_1 + 0x102e) = 0;
  *(undefined1 *)(param_1 + 0x102d) = 0;
  return;
}


// ==== FUN_0027fbd8 @ 0027fbd8 ====

void FUN_0027fbd8(int param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uStack_20;
  
  iVar9 = 0;
  uStack_20 = 0x3e2898;
  if (*(int *)(param_1 + 0x1028) != 0) {
    do {
      bVar1 = true;
      uVar8 = 0;
      if (iVar9 != *(int *)(param_1 + 0x1028) + -1) {
        puVar5 = (ulong *)(param_1 + 0x30);
        do {
          uVar4 = puVar5[-4];
          if (*puVar5 < uVar4) {
            bVar1 = false;
            uStack_20._4_4_ = (undefined4)(puVar5[-2] >> 0x20);
            uVar2 = puVar5[-2];
            uVar7 = puVar5[-3];
            puVar5[-2] = puVar5[2];
            *(int *)(puVar5 + -2) = (int)uVar2;
            uVar6 = puVar5[-1];
            uVar2 = puVar5[2];
            puVar5[2] = uStack_20;
            puVar5[-4] = *puVar5;
            puVar5[-3] = puVar5[1];
            puVar5[-1] = puVar5[3];
            *puVar5 = uVar4;
            puVar5[1] = uVar7;
            puVar5[3] = uVar6;
            *(int *)(puVar5 + 2) = (int)uVar2;
            iVar3 = *(int *)(param_1 + 0x1028);
          }
          else {
            iVar3 = *(int *)(param_1 + 0x1028);
          }
          uVar8 = uVar8 + 1;
          puVar5 = puVar5 + 4;
        } while (uVar8 < (iVar3 - iVar9) - 1U);
      }
      iVar9 = iVar9 + 1;
    } while (!bVar1);
  }
  return;
}


// ==== FUN_0027fcf8 @ 0027fcf8 ====
// GLOBAL DAT_0040eb30 int
// GLOBAL DAT_0040eb34 int

int FUN_0027fcf8(int param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar1 = *(uint *)(param_1 + 0x1028);
  iVar7 = 0;
  if ((uVar1 != 0) && (*param_2 != 0)) {
    iVar9 = uVar1 - 1;
    if (param_3 != 0) {
      iVar10 = 0;
      bVar2 = false;
      iVar8 = iVar9;
      if (-1 < iVar9) {
        do {
          iVar8 = iVar8 >> 1;
          iVar5 = iVar8 * 0x20;
          uVar3 = *(ulong *)(iVar5 + param_1 + 0x10);
          if (*param_2 < uVar3) {
            iVar9 = iVar8 + -1;
          }
          else if (uVar3 < *param_2) {
            iVar10 = iVar8 + 1;
          }
          else {
            bVar2 = true;
            if (param_3 == 0) {
              iVar8 = iVar8 - *(char *)(iVar5 + param_1 + 0x1d);
            }
            else if ('\x01' < *(char *)(iVar5 + param_1 + 0x1c)) {
              iVar8 = iVar8 - *(char *)(iVar5 + param_1 + 0x1d);
              DAT_0040eb30 = DAT_0040eb30 * 0x10000 + (DAT_0040eb30 >> 0x10) + DAT_0040eb34;
              DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
              iVar7 = iVar8 * 0x20 + param_1;
              iVar8 = iVar8 + (*(char *)(iVar7 + 0x1c) + DAT_0040eb30) %
                              (int)*(char *)(iVar7 + 0x1c);
            }
            iVar7 = param_1 + iVar8 * 0x20 + 0x10;
          }
        } while ((!bVar2) && (iVar8 = iVar9 + iVar10, iVar10 <= iVar9));
      }
      return iVar7;
    }
    uVar4 = 0;
    if (uVar1 != 0) {
      puVar6 = (ulong *)(param_1 + 0x10);
      do {
        if (*puVar6 == *param_2) {
          return param_1 + uVar4 * 0x20 + 0x10;
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 4;
      } while (uVar4 < uVar1);
    }
    return 0;
  }
  return 0;
}


// ==== FUN_0027fe70 @ 0027fe70 ====

void FUN_0027fe70(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  do {
    FUN_002827b8(uVar1);
    uVar1 = uVar1 + 0x1040;
  } while (uVar1 < param_1 + 0xb2c0);
  *(undefined4 *)(param_1 + 0xb2c0) = *param_2;
  *(undefined4 *)(param_1 + 0xb2c8) = 1;
  *(undefined4 *)(param_1 + 0xb2c4) = 0;
  FUN_00280328(param_1,0x40deb8);
  return;
}


// ==== FUN_0027ff00 @ 0027ff00 ====

undefined4
FUN_0027ff00(int *param_1,int param_2,undefined8 param_3,int param_4,long param_5,int *param_6,
            long param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  param_1[0x2cb1] = (int)param_7;
  piVar3 = param_1;
  if (param_7 != 0) {
    do {
      iVar1 = *param_6;
      iVar2 = param_6[1];
      if (param_5 == 0) {
        *piVar3 = param_2;
        piVar3[1] = iVar1;
        piVar3[2] = 0;
      }
      else {
        *piVar3 = param_2;
        piVar3[1] = iVar1;
        piVar3[2] = param_4;
      }
      piVar3[3] = iVar2;
      uVar4 = uVar4 + 1;
      param_2 = param_2 + iVar1;
      param_4 = param_4 + iVar2;
      param_6 = param_6 + 2;
      piVar3 = piVar3 + 0x410;
    } while (uVar4 < (uint)param_1[0x2cb1]);
  }
  return 1;
}


// ==== FUN_0027ff78 @ 0027ff78 ====

long FUN_0027ff78(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined1 param_9)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  
  FUN_00369ff0(auStack_e0,0x32,0x4006d0,(int)param_1 + 0xb2d0,param_2);
  FUN_00280e78(auStack_e0,auStack_120);
  lVar2 = FUN_00280160(param_1,auStack_120);
  if (lVar2 == 0) {
    lVar2 = FUN_002802a8(param_1,param_8);
    lVar3 = 0;
    if (lVar2 != 0) {
      uVar1 = FUN_00328c70();
      *(undefined4 *)((int)param_1 + 0xb2cc) = uVar1;
      iVar4 = *(int *)((int)lVar2 + 0x1030);
      (**(code **)(iVar4 + 0x14))
                ((int)lVar2 + (int)*(short *)(iVar4 + 0x10),auStack_120,param_4,param_5,param_6,
                 param_7,param_9);
      lVar3 = 0;
    }
  }
  else {
    iVar4 = (int)lVar2;
    if (*(char *)(iVar4 + 0x102e) == '\0') {
      lVar3 = (**(code **)(*(int *)(iVar4 + 0x1030) + 0x14))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 0x1030) + 0x10),auStack_120,param_4,
                         param_5,param_6,param_7,param_9);
      if (lVar3 != 0) {
        *(undefined1 *)(iVar4 + 0x102e) = 1;
      }
      lVar3 = 0;
      if (*(char *)(iVar4 + 0x102e) != '\0') {
        *(undefined1 *)(iVar4 + 0x102c) = param_3;
        lVar3 = lVar2;
      }
    }
    else {
      *(int *)(iVar4 + 0x1024) = *(int *)(iVar4 + 0x1024) + 1;
      lVar3 = lVar2;
    }
  }
  return lVar3;
}


// ==== FUN_00280100 @ 00280100 ====

undefined4 FUN_00280100(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x1024) == 0) {
    (**(code **)(*(int *)(param_2 + 0x1030) + 0x24))
              (param_2 + *(short *)(*(int *)(param_2 + 0x1030) + 0x20));
    *(undefined1 *)(param_2 + 0x102e) = 0;
    *(undefined1 *)(param_2 + 0x102d) = 0;
  }
  else {
    *(int *)(param_2 + 0x1024) = *(int *)(param_2 + 0x1024) + -1;
  }
  return 1;
}


// ==== FUN_00280160 @ 00280160 ====

int FUN_00280160(int param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0xb2c4) != 0) {
    iVar4 = param_1 + 0xff0;
    iVar3 = param_1;
    do {
      if (*(char *)(iVar3 + 0x102d) == '\0') {
        uVar1 = *(uint *)(param_1 + 0xb2c4);
      }
      else {
        lVar2 = stricmp(iVar4,param_2);
        if (lVar2 == 0) {
          return iVar3;
        }
        uVar1 = *(uint *)(param_1 + 0xb2c4);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x1040;
      iVar3 = iVar3 + 0x1040;
    } while (uVar5 < uVar1);
  }
  return 0;
}


// ==== FUN_00280200 @ 00280200 ====

long FUN_00280200(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = param_1;
  if (*(int *)(param_1 + 0xb2c4) != 0) {
    do {
      if (*(char *)(iVar3 + 0x102d) == '\0') {
        uVar1 = *(uint *)(param_1 + 0xb2c4);
      }
      else {
        if ((*(char *)(iVar3 + 0x102c) != '\0') &&
           (lVar2 = FUN_0027fcf8(iVar3,param_2,param_3), lVar2 != 0)) {
          return lVar2;
        }
        uVar1 = *(uint *)(param_1 + 0xb2c4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x1040;
    } while (uVar4 < uVar1);
  }
  return 0;
}


// ==== FUN_002802a8 @ 002802a8 ====

int FUN_002802a8(int param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = param_1;
  if (*(int *)(param_1 + 0xb2c4) != 0) {
    do {
      if (*(char *)(iVar2 + 0x102d) == '\0') {
        if (param_2 == 0) {
          *(undefined1 *)(iVar2 + 0x102d) = 1;
          return iVar2;
        }
        if (*(int *)(iVar2 + 4) == *(int *)param_2) {
          if (*(int *)(iVar2 + 0xc) == ((int *)param_2)[1]) {
            *(undefined1 *)(iVar2 + 0x102d) = 1;
            return iVar2;
          }
          uVar1 = *(uint *)(param_1 + 0xb2c4);
        }
        else {
          uVar1 = *(uint *)(param_1 + 0xb2c4);
        }
      }
      else {
        uVar1 = *(uint *)(param_1 + 0xb2c4);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x1040;
    } while (uVar3 < uVar1);
  }
  return 0;
}


// ==== FUN_00280320 @ 00280320 ====

void FUN_00280320(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x102d) = 0;
  return;
}


// ==== FUN_00280328 @ 00280328 ====

void FUN_00280328(int param_1,undefined8 param_2)

{
  FUN_00369ff0(param_1 + 0xb2d0,0x32,0x4006d8,param_2);
  return;
}


// ==== FUN_00280358 @ 00280358 ====

void FUN_00280358(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// ==== FUN_00280360 @ 00280360 ====

undefined4 FUN_00280360(undefined4 *param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = _qmtc2(0);
  auVar4 = _qmtc2(0x3f800000);
  *param_1 = 0;
  _lqc2(*(undefined1 (*) [16])(param_1 + 8));
  _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar2 = _vaddbc(in_vf0,auVar3);
  auVar1 = _vaddbc(in_vf0,auVar3);
  _vmove(auVar2);
  _vmove(auVar1);
  auVar1 = _vaddbc(in_vf0,auVar3);
  auVar2 = _vaddbc(in_vf0,auVar4);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 8) = auVar1;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 4) = auVar1;
  auVar2 = _vadd(in_vf0,in_vf0);
  auVar1 = _vaddbc(in_vf0,auVar4);
  auVar3 = _vaddbc(in_vf0,auVar3);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 8) = auVar1;
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 4) = auVar1;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x14) = auVar1;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar1;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  _sqc2(auVar2);
  (**(code **)(param_1[0x18] + 0x1c))(*param_1,(int)param_1 + (int)*(short *)(param_1[0x18] + 0x18))
  ;
  return 1;
}


