// ==== FUN_003299e8 @ 003299e8 ====

void FUN_003299e8(int *param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = param_1[5];
  uVar1 = (param_2 - param_1[3]) / iVar2;
  if (iVar2 == 0) {
    trap(7);
  }
  uVar8 = uVar1 >> 3;
  uVar3 = uVar1 + param_3 / iVar2;
  uVar7 = uVar3 >> 3;
  if (uVar8 <= uVar7) {
    uVar5 = uVar8;
    do {
      uVar4 = 0;
      if (uVar5 == uVar8) {
        uVar4 = uVar1 & 7;
      }
      uVar6 = 8;
      if (uVar5 == uVar7) {
        uVar6 = uVar3 & 7;
      }
      if ((uVar4 == 0) && (uVar6 == 8)) {
        *(byte *)(*param_1 + uVar5) = ~((param_4 != 0) - 1U);
      }
      else {
        for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
          *(byte *)(*param_1 + uVar5) = *(byte *)(*param_1 + uVar5) & ~(byte)(1 << (uVar4 & 0x1f));
          *(byte *)(*param_1 + uVar5) =
               *(byte *)(*param_1 + uVar5) | (param_4 != 0) << (uVar4 & 0x1f);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= uVar7);
  }
  return;
}


// ==== FUN_00329c70 @ 00329c70 ====
// GLOBAL DAT_0045ca40 undefined4
// GLOBAL DAT_0045ca44 undefined4
// GLOBAL DAT_0045cac8 int
// GLOBAL DAT_0045ca48 undefined8
// GLOBAL DAT_0045ca50 undefined8
// GLOBAL DAT_2045cac8 int
// GLOBAL DAT_2045cacc int
// GLOBAL DAT_2045cad0 uint
// GLOBAL DAT_2045cad4 uint
// GLOBAL null undefined4

void FUN_00329c70(int param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  DAT_0045ca40 = *(undefined4 *)(param_1 + 0x544);
  DAT_0045ca44 = 3;
  DAT_0045cac8 = param_2[1];
  uVar1 = param_2[1];
  if (uVar1 == 2) {
    DAT_0045ca48 = *(undefined8 *)*param_2;
    DAT_0045ca50 = ((undefined8 *)*param_2)[1];
  }
  else if (uVar1 < 3) {
    if (uVar1 == 1) {
      strcpy(0x45ca48,*param_2);
    }
  }
  else if (uVar1 == 3) {
    DAT_0045ca48 = CONCAT44(DAT_0045ca48._4_4_,*param_2);
  }
  FUN_003680a0(0x45ca40,0x45caff);
  uVar2 = GetThreadId();
  FUN_003242b0(uGpffff8ab0,0x45ca40,0xc0,0x40,0,uVar2,0,0);
  SleepThread();
  if (DAT_2045cac8 == 0) {
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[3] = 0;
  }
  else {
    param_2[4] = DAT_2045cacc;
    uVar1 = DAT_2045cad0;
    param_2[2] = DAT_2045cad0;
    if (param_2[3] == 1) {
      param_2[2] = (int)((float)uVar1 / (float)DAT_2045cad4);
    }
  }
  return;
}


// ==== FUN_00329f40 @ 00329f40 ====

undefined8 FUN_00329f40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_0032a548((int)param_1 + 0x300,*param_3);
  return param_1;
}


// ==== FUN_00329f70 @ 00329f70 ====

undefined8 FUN_00329f70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (param_3 == 0) {
    FUN_0032a4f0(iVar4 + 0x300,0);
  }
  else {
    puVar3 = (undefined4 *)param_3;
    *(undefined4 *)(iVar4 + 0x84) = puVar3[1];
    *(undefined4 *)(iVar4 + 0x9c) = puVar3[7];
    *(undefined4 *)(iVar4 + 0xa0) = puVar3[8];
    *(undefined4 *)(iVar4 + 0xa8) = puVar3[10];
    *(undefined4 *)(iVar4 + 0xac) = puVar3[0xb];
    *(undefined4 *)(iVar4 + 0xa4) = puVar3[9];
    if (puVar3[1] == 1) {
      strcpy(iVar4 + 0xb0,*puVar3);
      puVar1 = (undefined8 *)puVar3[3];
    }
    else {
      puVar1 = (undefined8 *)puVar3[3];
    }
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined4 *)(iVar4 + 0x8c) = 0;
    }
    else {
      uVar2 = puVar1[1];
      *(undefined8 *)(iVar4 + 0x230) = *puVar1;
      *(undefined8 *)(iVar4 + 0x238) = uVar2;
      *(int *)(iVar4 + 0x8c) = *(int *)(iVar4 + 0x540) + 0x1b0;
    }
    if (puVar3[4] == 0) {
      *(undefined4 *)(iVar4 + 0x90) = 0;
    }
    else {
      strcpy(iVar4 + 0x1b0);
      *(int *)(iVar4 + 0x90) = *(int *)(iVar4 + 0x540) + 0x130;
    }
    FUN_0032a4f0(iVar4 + 0x300,param_3);
    *(undefined4 *)(iVar4 + 0x308) = *(undefined4 *)(iVar4 + 0x540);
  }
  return param_1;
}


// ==== FUN_0032a080 @ 0032a080 ====

undefined8 FUN_0032a080(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_0032a560((int)param_1 + 0x300,*param_3);
  return param_1;
}


// ==== FUN_0032a108 @ 0032a108 ====

undefined8 FUN_0032a108(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x440) != 9) {
    uVar3 = FUN_00291e90((float)param_3[1] * 16777216.0);
    FUN_0032a5a8(uVar3,iVar7 + 0x300,iVar7 + 0x400,*param_3);
    if (*(int *)(iVar7 + 0x54c) != 0) {
      uVar1 = *param_3;
      uVar6 = *(uint *)(iVar7 + 0x404);
      uVar2 = 0;
      if (uVar1 != 0xffffffff) {
        uVar6 = uVar1 + 1;
        uVar2 = uVar1;
      }
      while (uVar1 = uVar2, uVar1 < uVar6) {
        iVar4 = *(int *)(iVar7 + 0x54c);
        uVar5 = 0;
        uVar2 = uVar1 + 1;
        if (*(int *)(uVar1 * 0xc + iVar4) != 0) {
          do {
            iVar4 = *(int *)(uVar5 * 4 + *(int *)(uVar1 * 0xc + iVar4 + 4));
            if (iVar4 == 0) {
              iVar4 = *(int *)(iVar7 + 0x54c);
            }
            else {
              *(ushort *)(iVar4 + 0x5c) = *(ushort *)(iVar4 + 0x5c) | 2;
              *(uint *)(iVar4 + 0xa0) = param_3[1];
              iVar4 = *(int *)(iVar7 + 0x54c);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(uVar1 * 0xc + iVar4));
        }
      }
    }
  }
  return param_1;
}


// ==== FUN_0032a240 @ 0032a240 ====

undefined8 FUN_0032a240(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x440) != 9) {
    uVar1 = FUN_00291e90(*param_3 * 65536.0);
    FUN_0032a578(uVar1,iVar2 + 0x300,iVar2 + 0x400);
  }
  return param_1;
}


// ==== FUN_0032a2b8 @ 0032a2b8 ====
// GLOBAL DAT_0045ca40 undefined4
// GLOBAL DAT_0045ca44 undefined4
// GLOBAL DAT_2045ca48 undefined4
// GLOBAL null undefined4

undefined8 FUN_0032a2b8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  DAT_0045ca40 = *(undefined4 *)((int)param_1 + 0x544);
  DAT_0045ca44 = 2;
  FUN_003680a0(0x45ca40,0x45caff);
  uVar1 = GetThreadId();
  FUN_003242b0(uGpffff8ab0,0x45ca40,0xc0,0x40,0,uVar1,0,0);
  SleepThread();
  *param_3 = DAT_2045ca48;
  return param_1;
}


// ==== FUN_0032a360 @ 0032a360 ====

undefined8 FUN_0032a360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00329c70(param_1,param_3);
  return param_1;
}


// ==== FUN_0032a390 @ 0032a390 ====
// GLOBAL DAT_0045ca40 undefined4
// GLOBAL DAT_0045ca44 undefined4
// GLOBAL DAT_0045ca48 undefined
// GLOBAL DAT_2045ca4c undefined4
// GLOBAL null undefined4

undefined8 FUN_0032a390(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  DAT_0045ca40 = *(undefined4 *)((int)param_1 + 0x544);
  DAT_0045ca44 = 4;
  DAT_0045ca48._0_4_ = *(undefined4 *)(param_3 + 8);
  FUN_003680a0(0x45ca40,0x45caff);
  uVar1 = GetThreadId();
  FUN_003242b0(uGpffff8ab0,0x45ca40,0xc0,0x40,0,uVar1,0,0);
  SleepThread();
  *(undefined4 *)(param_3 + 0xc) = DAT_2045ca4c;
  return param_1;
}


// ==== FUN_0032a488 @ 0032a488 ====

void FUN_0032a488(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[1] = 1;
  param_1[4] = 0x3f800000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ==== FUN_0032a4b0 @ 0032a4b0 ====

void FUN_0032a4b0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x18);
    do {
      *puVar2 = 0x3f800000;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < *(uint *)(param_2 + 4));
  }
  return;
}


// ==== FUN_0032a4f0 @ 0032a4f0 ====

void FUN_0032a4f0(uint *param_1,uint param_2)

{
  param_1[2] = param_2;
  param_1[4] = 0x3f800000;
  *param_1 = *param_1 & 0xfffffff7 | 4;
  param_1[1] = 1;
  param_1[5] = 0;
  param_1[3] = 0;
  return;
}


// ==== FUN_0032a530 @ 0032a530 ====

void FUN_0032a530(uint *param_1,uint param_2)

{
  param_1[3] = param_2;
  *param_1 = *param_1 | 8;
  return;
}


// ==== FUN_0032a548 @ 0032a548 ====

void FUN_0032a548(uint *param_1,uint param_2)

{
  param_1[5] = param_2;
  *param_1 = *param_1 | 0x40;
  return;
}


// ==== FUN_0032a560 @ 0032a560 ====

void FUN_0032a560(uint *param_1,uint param_2)

{
  param_1[1] = param_2;
  *param_1 = *param_1 | 0x80;
  return;
}


// ==== FUN_0032a578 @ 0032a578 ====

undefined4 FUN_0032a578(uint param_1,uint *param_2,uint *param_3)

{
  if ((*param_3 & 1) == 0) {
    param_2[4] = param_1;
    *param_2 = *param_2 | 0x20;
    return 1;
  }
  return 0;
}


// ==== FUN_0032a5a8 @ 0032a5a8 ====

void FUN_0032a5a8(uint param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  
  if (param_4 == -1) {
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 4)) {
      puVar1 = param_2 + 6;
      do {
        *puVar1 = param_1;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 < *(int *)(param_3 + 4));
    }
  }
  else {
    param_2[param_4 + 6] = param_1;
  }
  *param_2 = *param_2 | 0x10;
  return;
}


// ==== FUN_0032a610 @ 0032a610 ====
// GLOBAL DAT_0045cba0 int
// GLOBAL DAT_0044952c undefined_*
// GLOBAL DAT_0045cb98 undefined4_*
// GLOBAL DAT_00449528 undefined_*
// GLOBAL DAT_0045cbac undefined_*
// GLOBAL null undefined4_*

undefined4 * FUN_0032a610(undefined8 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uStack_110;
  undefined1 auStack_10f [111];
  
  if (DAT_0045cba0 != 0) {
    uVar1 = (*DAT_0044952c)();
    if (uVar1 != 0) {
      pcVar4 = (char *)param_1;
      uVar5 = 0;
      do {
        uVar6 = uVar5 + 1;
        if (*pcVar4 == ':') {
          FUN_0035d1a0(&uStack_110,param_1,uVar6);
          auStack_10f[uVar5] = 0;
          for (puVar2 = DAT_0045cb98; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
            lVar3 = (*DAT_00449528)(&uStack_110,puVar2[3]);
            if (lVar3 == 0) goto LAB_0032a6dc;
          }
          puVar2 = (undefined4 *)0x0;
LAB_0032a6dc:
          if (puVar2 != (undefined4 *)0x0) {
            return puVar2;
          }
        }
        pcVar4 = (char *)param_1 + uVar6;
        uVar5 = uVar6;
      } while (uVar6 < uVar1);
    }
    if (puGpffff9034 != (undefined4 *)0x0) {
      return puGpffff9034;
    }
  }
  if (DAT_0045cbac != (code *)0x0) {
    (*DAT_0045cbac)(6);
  }
  return (undefined4 *)0x0;
}


// ==== FUN_0032a750 @ 0032a750 ====

int FUN_0032a750(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)((int)param_4 + 0x50) + 0x30))
                    (param_4,param_1,(int)param_2 * param_3);
  if (param_2 == 0) {
    trap(7);
  }
  return iVar1 / (int)param_2;
}


// ==== FUN_0032a7a0 @ 0032a7a0 ====

int FUN_0032a7a0(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)((int)param_4 + 0x50) + 0x34))
                    (param_4,param_1,(int)param_2 * param_3);
  if (param_2 == 0) {
    trap(7);
  }
  return iVar1 / (int)param_2;
}


// ==== FUN_0032a7f0 @ 0032a7f0 ====

undefined4 FUN_0032a7f0(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x50);
  if (*(int *)(iVar2 + 0x30) != 0) {
    *(undefined4 *)(iVar2 + 0x40) = 4;
    *(undefined4 *)(iVar2 + 0x38) = 3;
  }
  if (param_3 == 1) {
    (**(code **)(iVar1 + 0x38))(auStack_40,param_1,param_2,2);
  }
  else if (param_3 < 2) {
    if (param_3 != 0) {
      return 0xffffffff;
    }
    (**(code **)(iVar1 + 0x38))(auStack_20,param_1,param_2,1);
  }
  else {
    if (param_3 != 2) {
      return 0xffffffff;
    }
    (**(code **)(iVar1 + 0x38))(auStack_30,param_1,param_2,3);
  }
  return 0;
}


// ==== FUN_0032a8c8 @ 0032a8c8 ====

void FUN_0032a8c8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x50) + 0x44))();
  return;
}


// ==== FUN_0032a8f0 @ 0032a8f0 ====

undefined8 FUN_0032a8f0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0032a610();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = (**(code **)((int)lVar1 + 0x4c))(lVar1,param_1);
  }
  return uVar2;
}


// ==== FUN_0032a938 @ 0032a938 ====

undefined4 FUN_0032a938(int param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x10);
}


// ==== FUN_0032a958 @ 0032a958 ====
// GLOBAL DAT_0045cb98 undefined4
// GLOBAL DAT_0045cb9c undefined4
// GLOBAL DAT_0045cba0 undefined4
// GLOBAL DAT_0045cbac undefined4
// GLOBAL DAT_0045cb88 undefined4
// GLOBAL DAT_0045cb84 undefined4
// GLOBAL DAT_0045cba4 undefined4
// GLOBAL null undefined4
// GLOBAL null undefined4

undefined4 FUN_0032a958(undefined4 param_1)

{
  DAT_0045cb98 = 0;
  uGpffff9034 = 0;
  DAT_0045cba0 = 0;
  DAT_0045cbac = 0;
  DAT_0045cb88 = 1;
  DAT_0045cb84 = 1;
  DAT_0045cb9c = param_1;
  uGpffff9030 = CreateSema(0x45cb80);
  DAT_0045cba4 = 1;
  return 1;
}


// ==== FUN_0032a9c8 @ 0032a9c8 ====
// GLOBAL DAT_0045cb9c int
// GLOBAL DAT_0045cba0 int
// GLOBAL DAT_0045cbac undefined_*
// GLOBAL DAT_0045cb98 undefined4_*

undefined4 FUN_0032a9c8(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (DAT_0045cb9c < 1) {
    bVar1 = true;
  }
  else {
    bVar1 = true;
    if (DAT_0045cb9c < DAT_0045cba0 + 1) {
      if (DAT_0045cbac == (code *)0x0) {
        bVar1 = false;
      }
      else {
        (*DAT_0045cbac)(5);
        bVar1 = false;
      }
    }
  }
  uVar2 = 0;
  if (bVar1) {
    puVar4 = (undefined4 *)param_1;
    lVar3 = FUN_0032aa80(puVar4 + 0x14);
    uVar2 = 0;
    if (lVar3 == 0) {
      FUN_0032ab60(param_1,1);
      uVar2 = 1;
      *puVar4 = DAT_0045cb98;
      DAT_0045cb98 = puVar4;
      DAT_0045cba0 = DAT_0045cba0 + 1;
    }
  }
  return uVar2;
}


// ==== FUN_0032aa80 @ 0032aa80 ====
// GLOBAL DAT_0045cb98 undefined4_*
// GLOBAL DAT_00449520 undefined_*
// GLOBAL DAT_0045cbac undefined_*

undefined4 * FUN_0032aa80(undefined8 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = DAT_0045cb98;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      if (DAT_0045cbac != (code *)0x0) {
        (*DAT_0045cbac)(6);
      }
      return (undefined4 *)0x0;
    }
    lVar2 = (*DAT_00449520)(puVar1 + 0x14,param_1);
    if (lVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


// ==== FUN_0032ab18 @ 0032ab18 ====
// GLOBAL null undefined4

void FUN_0032ab18(undefined4 param_1)

{
  uGpffff9034 = param_1;
  return;
}


// ==== FUN_0032ab20 @ 0032ab20 ====
// GLOBAL null undefined4

undefined4 FUN_0032ab20(void)

{
  return uGpffff9034;
}


// ==== FUN_0032ab60 @ 0032ab60 ====

void FUN_0032ab60(int param_1,long param_2)

{
  if (param_2 == 1) {
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_1 + 0x50);
    }
  }
  else if ((param_2 == 2) && (*(code **)(param_1 + 0x24) != (code *)0x0)) {
    (**(code **)(param_1 + 0x24))(param_1 + 0x50);
  }
  return;
}


// ==== FUN_0032abd0 @ 0032abd0 ====

undefined8 FUN_0032abd0(undefined8 param_1,int param_2,int param_3)

{
  ((int *)param_1)[1] = 0x10;
  *(int *)param_1 = param_2 * 0x70 + 0x20 + param_3 * 0x20;
  return param_1;
}


// ==== FUN_0032ac60 @ 0032ac60 ====

undefined4 * FUN_0032ac60(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  param_1 = (undefined4 *)*param_1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xffff;
  }
  uVar1 = (int)param_1 + *param_2 + 0xf & 0xfffffff0;
  iVar2 = param_3 * 0x70 + uVar1;
  param_1[3] = uVar1;
  param_1[5] = iVar2;
  *param_2 = (param_4 * 0x20 + iVar2) - (int)param_1;
  param_1[4] = param_4;
  param_1[2] = param_3;
  param_1[6] = 0;
  return param_1;
}


// ==== FUN_0032ad30 @ 0032ad30 ====

undefined8 FUN_0032ad30(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_80;
  int iStack_7c;
  int aiStack_78 [2];
  
  uVar4 = 0;
  uStack_80 = 0x1c;
  uVar2 = FUN_0032ac60(param_1,&uStack_80,*param_2,param_2[2]);
  iVar5 = (int)uVar2;
  iVar6 = 0;
  if (*(int *)(iVar5 + 8) != 0) {
    iVar7 = 0;
    do {
      uVar4 = uVar4 + 1;
      iStack_7c = *(int *)(iVar5 + 0xc) + iVar6;
      FUN_00332a70(&iStack_7c,param_2[1] + iVar7);
      iVar7 = iVar7 + 0xa0;
      iVar6 = iVar6 + 0x70;
    } while (uVar4 < *(uint *)(iVar5 + 8));
  }
  uVar4 = 0;
  if (*(int *)(iVar5 + 0x10) != 0) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      iVar3 = uVar4 * 0x40;
      piVar1 = (int *)(param_2[5] + uVar4 * 8);
      aiStack_78[0] = *(int *)(iVar5 + 0x14) + iVar6;
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0x14;
      FUN_003328b0(aiStack_78,*piVar1 * 0x70 + *(int *)(iVar5 + 0xc),
                   piVar1[1] * 0x70 + *(int *)(iVar5 + 0xc),param_2[3] + iVar3,param_2[4] + iVar7);
      iVar7 = iVar7 + 0x50;
    } while (uVar4 < *(uint *)(iVar5 + 0x10));
  }
  *(undefined4 *)(iVar5 + 4) = param_2[6];
  return uVar2;
}


// ==== FUN_0032ae70 @ 0032ae70 ====

undefined4 FUN_0032ae70(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  bool bVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 in_vf0 [16];
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
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
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
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  uVar14 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar15 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0xc) + iVar15;
      pauVar4 = *(undefined1 (**) [16])(iVar10 + 0x50);
      if (pauVar4 == (undefined1 (*) [16])0x0) {
        uVar7 = *(undefined4 *)(iVar10 + 0x54);
        puVar9 = (undefined1 *)(iVar10 + 0x10);
      }
      else {
        auVar18 = _lqc2(*pauVar4);
        puVar9 = auStack_280;
        _sqc2(auVar18);
        _vmove(auVar18);
        auVar17 = _lqc2(pauVar4[1]);
        auVar21 = _vaddbc(in_vf0,auVar17);
        _vmove(auVar21);
        _sqc2(auVar17);
        _vmove(auVar17);
        auVar19 = _vaddbc(in_vf0,auVar18);
        auVar16 = _lqc2(pauVar4[2]);
        _vmove(auVar19);
        auVar22 = _vaddbc(in_vf0,auVar16);
        auVar24 = _vaddbc(in_vf0,auVar16);
        _sqc2(auVar16);
        _vmove(auVar16);
        auVar23 = _vaddbc(in_vf0,auVar18);
        auVar18 = _lqc2(pauVar4[3]);
        _vmove(auVar23);
        auVar20 = _vmulbc(auVar22,auVar18);
        auVar25 = _vaddbc(in_vf0,auVar17);
        auVar16 = _vmulbc(auVar24,auVar18);
        auVar17 = _vmulbc(auVar25,auVar18);
        auVar16 = _vadd(auVar20,auVar16);
        auVar16 = _vadd(auVar16,auVar17);
        _sqc2(auVar18);
        _sqc2(auVar21);
        auVar20 = _vsub(in_vf0,auVar16);
        _sqc2(auVar19);
        _sqc2(auVar23);
        _sqc2(auVar22);
        _sqc2(auVar24);
        _sqc2(auVar25);
        _sqc2(auVar20);
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x20));
        auVar16 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x30));
        auVar18 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x10));
        _vmulabc(auVar18,auVar22);
        _vmaddabc(auVar17,auVar22);
        auVar23 = _vmaddbc(auVar16,auVar22);
        auStack_240 = _sqc2(auVar23);
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x20));
        auVar16 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x30));
        auVar18 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x10));
        _vmulabc(auVar18,auVar24);
        _vmaddabc(auVar17,auVar24);
        auVar21 = _vmaddbc(auVar16,auVar24);
        auStack_230 = _sqc2(auVar21);
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x20));
        auVar16 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x30));
        auVar18 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x10));
        _vmulabc(auVar18,auVar25);
        _vmaddabc(auVar17,auVar25);
        auVar18 = _vmaddbc(auVar16,auVar25);
        auStack_220 = _sqc2(auVar18);
        auVar22 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x40));
        auVar19 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x20));
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x30));
        auVar16 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x10));
        _vmulabc(auVar16,auVar20);
        _vmaddabc(auVar19,auVar20);
        _vmaddabc(auVar17,auVar20);
        auVar16 = _vmaddbc(auVar22,in_vf0);
        auStack_280 = _sqc2(auVar23);
        auStack_210 = _sqc2(auVar16);
        auStack_270 = _sqc2(auVar21);
        auStack_260 = _sqc2(auVar18);
        auStack_250 = _sqc2(auVar16);
        uVar7 = *(undefined4 *)(iVar10 + 0x54);
      }
      uVar7 = FUN_0037c688(param_2,puVar9,uVar7,param_3);
      *(undefined4 *)(iVar10 + 0x58) = uVar7;
      if (*(int *)(iVar10 + 0x58) == 0) {
        iVar15 = uVar14 - 1;
        if (uVar14 == 0) {
          return 0;
        }
        iVar10 = iVar15 * 0x70;
        do {
          iVar11 = *(int *)(param_1 + 0xc) + iVar10;
          iVar13 = *(int *)(iVar11 + 0x58);
          if (iVar13 == 0) {
            auStack_200 = *(undefined1 (*) [16])(iVar11 + 0x10);
            auStack_1f0 = *(undefined1 (*) [16])(iVar11 + 0x20);
            auStack_1e0 = *(undefined1 (*) [16])(iVar11 + 0x30);
            auStack_1d0 = *(undefined1 (*) [16])(iVar11 + 0x40);
          }
          else {
            pauVar4 = *(undefined1 (**) [16])(iVar11 + 0x50);
            if (pauVar4 == (undefined1 (*) [16])0x0) {
              auStack_1d0 = *(undefined1 (*) [16])(iVar13 + 0x10);
              auStack_200 = *(undefined1 (*) [16])(iVar13 + 0x40);
              auStack_1f0 = *(undefined1 (*) [16])(iVar13 + 0x50);
              auStack_1e0 = *(undefined1 (*) [16])(iVar13 + 0x60);
            }
            else {
              auVar20 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x40));
              uVar6 = *(undefined8 *)*(undefined1 (*) [16])(iVar13 + 0x10);
              uStack_188 = *(undefined4 *)(iVar13 + 0x18);
              uStack_184 = *(undefined4 *)(iVar13 + 0x1c);
              pauVar1 = (undefined1 (*) [16])(iVar13 + 0x50);
              uStack_1a8 = *(undefined4 *)(iVar13 + 0x58);
              uStack_1a4 = *(undefined4 *)(iVar13 + 0x5c);
              pauVar2 = (undefined1 (*) [16])(iVar13 + 0x60);
              uStack_198 = *(undefined4 *)(iVar13 + 0x68);
              uStack_194 = *(undefined4 *)(iVar13 + 0x6c);
              auStack_1c0 = _sqc2(auVar20);
              uStack_1b0 = (undefined4)*(undefined8 *)*pauVar1;
              uStack_1ac = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              uStack_1a0 = (undefined4)*(undefined8 *)*pauVar2;
              uStack_19c = (undefined4)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
              uStack_190 = (undefined4)uVar6;
              uStack_18c = (undefined4)((ulong)uVar6 >> 0x20);
              auVar17 = _lqc2(*pauVar2);
              auVar16 = _lqc2(*pauVar4);
              auVar18 = _lqc2(*pauVar1);
              _vmulabc(auVar20,auVar16);
              _vmaddabc(auVar18,auVar16);
              auVar23 = _vmaddbc(auVar17,auVar16);
              auStack_180 = _sqc2(auVar23);
              auVar17 = _lqc2(*pauVar2);
              auVar16 = _lqc2(pauVar4[1]);
              auVar18 = _lqc2(*pauVar1);
              _vmulabc(auVar20,auVar16);
              _vmaddabc(auVar18,auVar16);
              auVar22 = _vmaddbc(auVar17,auVar16);
              auStack_170 = _sqc2(auVar22);
              auVar17 = _lqc2(*pauVar2);
              auVar16 = _lqc2(pauVar4[2]);
              auVar18 = _lqc2(*pauVar1);
              _vmulabc(auVar20,auVar16);
              _vmaddabc(auVar18,auVar16);
              auVar19 = _vmaddbc(auVar17,auVar16);
              auStack_160 = _sqc2(auVar19);
              auVar21 = _lqc2(pauVar4[3]);
              auVar18 = _lqc2(*pauVar1);
              auVar17 = _lqc2(*pauVar2);
              auVar16 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x10));
              _vmulabc(auVar20,auVar21);
              _vmaddabc(auVar18,auVar21);
              _vmaddabc(auVar17,auVar21);
              auVar16 = _vmaddbc(auVar16,in_vf0);
              auStack_200 = _sqc2(auVar23);
              auStack_1f0 = _sqc2(auVar22);
              auStack_1e0 = _sqc2(auVar19);
              auStack_1d0 = _sqc2(auVar16);
              auStack_150 = _sqc2(auVar16);
            }
          }
          iVar10 = iVar10 + -0x70;
          *(undefined4 *)(iVar11 + 0x10) = auStack_200._0_4_;
          *(undefined4 *)(iVar11 + 0x14) = auStack_200._4_4_;
          *(undefined4 *)(iVar11 + 0x18) = auStack_200._8_4_;
          *(undefined4 *)(iVar11 + 0x1c) = auStack_200._12_4_;
          *(undefined4 *)(iVar11 + 0x20) = auStack_1f0._0_4_;
          *(undefined4 *)(iVar11 + 0x24) = auStack_1f0._4_4_;
          *(undefined4 *)(iVar11 + 0x28) = auStack_1f0._8_4_;
          *(undefined4 *)(iVar11 + 0x2c) = auStack_1f0._12_4_;
          *(undefined4 *)(iVar11 + 0x30) = auStack_1e0._0_4_;
          *(undefined4 *)(iVar11 + 0x34) = auStack_1e0._4_4_;
          *(undefined4 *)(iVar11 + 0x38) = auStack_1e0._8_4_;
          *(undefined4 *)(iVar11 + 0x3c) = auStack_1e0._12_4_;
          *(undefined4 *)(iVar11 + 0x40) = auStack_1d0._0_4_;
          *(undefined4 *)(iVar11 + 0x44) = auStack_1d0._4_4_;
          *(undefined4 *)(iVar11 + 0x48) = auStack_1d0._8_4_;
          *(undefined4 *)(iVar11 + 0x4c) = auStack_1d0._12_4_;
          FUN_0037cec8(param_2,*(undefined4 *)(iVar11 + 0x58));
          *(undefined4 *)(iVar11 + 0x58) = 0;
          bVar3 = iVar15 != 0;
          iVar15 = iVar15 + -1;
        } while (bVar3);
        return 0;
      }
      uVar14 = uVar14 + 1;
      iVar15 = iVar15 + 0x70;
    } while (uVar14 < *(uint *)(param_1 + 8));
  }
  uVar14 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar15 = 0;
    do {
      piVar12 = (int *)(*(int *)(param_1 + 0x14) + iVar15);
      lVar8 = FUN_0037d038(param_2,*(undefined4 *)(*piVar12 + 0x58),
                           *(undefined4 *)(piVar12[1] + 0x58),piVar12[2],piVar12[3]);
      piVar12[4] = (int)lVar8;
      if (lVar8 == 0) {
        iVar15 = uVar14 - 1;
        if (uVar14 != 0) {
          iVar10 = iVar15 * 0x14;
          do {
            iVar13 = *(int *)(param_1 + 0x14) + iVar10;
            iVar10 = iVar10 + -0x14;
            FUN_0037d0c8(param_2,*(undefined4 *)(iVar13 + 0x10));
            *(undefined4 *)(iVar13 + 0x10) = 0;
            bVar3 = iVar15 != 0;
            iVar15 = iVar15 + -1;
          } while (bVar3);
        }
        uVar14 = 0;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            iVar10 = *(int *)(param_1 + 0xc) + uVar14 * 0x70;
            iVar15 = *(int *)(iVar10 + 0x58);
            if (iVar15 == 0) {
              auStack_140 = *(undefined1 (*) [16])(iVar10 + 0x10);
              auStack_130 = *(undefined1 (*) [16])(iVar10 + 0x20);
              auStack_120 = *(undefined1 (*) [16])(iVar10 + 0x30);
              auStack_110 = *(undefined1 (*) [16])(iVar10 + 0x40);
            }
            else {
              pauVar4 = *(undefined1 (**) [16])(iVar10 + 0x50);
              if (pauVar4 == (undefined1 (*) [16])0x0) {
                auStack_110 = *(undefined1 (*) [16])(iVar15 + 0x10);
                auStack_140 = *(undefined1 (*) [16])(iVar15 + 0x40);
                auStack_130 = *(undefined1 (*) [16])(iVar15 + 0x50);
                auStack_120 = *(undefined1 (*) [16])(iVar15 + 0x60);
              }
              else {
                auVar20 = _lqc2(*(undefined1 (*) [16])(iVar15 + 0x40));
                uVar6 = *(undefined8 *)*(undefined1 (*) [16])(iVar15 + 0x10);
                uStack_c8 = *(undefined4 *)(iVar15 + 0x18);
                uStack_c4 = *(undefined4 *)(iVar15 + 0x1c);
                pauVar1 = (undefined1 (*) [16])(iVar15 + 0x50);
                uStack_e8 = *(undefined4 *)(iVar15 + 0x58);
                uStack_e4 = *(undefined4 *)(iVar15 + 0x5c);
                pauVar2 = (undefined1 (*) [16])(iVar15 + 0x60);
                uStack_d8 = *(undefined4 *)(iVar15 + 0x68);
                uStack_d4 = *(undefined4 *)(iVar15 + 0x6c);
                auStack_100 = _sqc2(auVar20);
                uStack_f0 = (undefined4)*(undefined8 *)*pauVar1;
                uStack_ec = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
                uStack_e0 = (undefined4)*(undefined8 *)*pauVar2;
                uStack_dc = (undefined4)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
                uStack_d0 = (undefined4)uVar6;
                uStack_cc = (undefined4)((ulong)uVar6 >> 0x20);
                auVar17 = _lqc2(*pauVar2);
                auVar16 = _lqc2(*pauVar4);
                auVar18 = _lqc2(*pauVar1);
                _vmulabc(auVar20,auVar16);
                _vmaddabc(auVar18,auVar16);
                auVar23 = _vmaddbc(auVar17,auVar16);
                auStack_c0 = _sqc2(auVar23);
                auVar17 = _lqc2(*pauVar2);
                auVar16 = _lqc2(pauVar4[1]);
                auVar18 = _lqc2(*pauVar1);
                _vmulabc(auVar20,auVar16);
                _vmaddabc(auVar18,auVar16);
                auVar22 = _vmaddbc(auVar17,auVar16);
                auStack_b0 = _sqc2(auVar22);
                auVar17 = _lqc2(*pauVar2);
                auVar16 = _lqc2(pauVar4[2]);
                auVar18 = _lqc2(*pauVar1);
                _vmulabc(auVar20,auVar16);
                _vmaddabc(auVar18,auVar16);
                auVar19 = _vmaddbc(auVar17,auVar16);
                auStack_a0 = _sqc2(auVar19);
                auVar21 = _lqc2(pauVar4[3]);
                auVar18 = _lqc2(*pauVar1);
                auVar17 = _lqc2(*pauVar2);
                auVar16 = _lqc2(*(undefined1 (*) [16])(iVar15 + 0x10));
                _vmulabc(auVar20,auVar21);
                _vmaddabc(auVar18,auVar21);
                _vmaddabc(auVar17,auVar21);
                auVar16 = _vmaddbc(auVar16,in_vf0);
                auStack_140 = _sqc2(auVar23);
                auStack_130 = _sqc2(auVar22);
                auStack_120 = _sqc2(auVar19);
                auStack_110 = _sqc2(auVar16);
                auStack_90 = _sqc2(auVar16);
              }
            }
            uVar14 = uVar14 + 1;
            *(undefined4 *)(iVar10 + 0x10) = auStack_140._0_4_;
            *(undefined4 *)(iVar10 + 0x14) = auStack_140._4_4_;
            *(undefined4 *)(iVar10 + 0x18) = auStack_140._8_4_;
            *(undefined4 *)(iVar10 + 0x1c) = auStack_140._12_4_;
            *(undefined4 *)(iVar10 + 0x20) = auStack_130._0_4_;
            *(undefined4 *)(iVar10 + 0x24) = auStack_130._4_4_;
            *(undefined4 *)(iVar10 + 0x28) = auStack_130._8_4_;
            *(undefined4 *)(iVar10 + 0x2c) = auStack_130._12_4_;
            *(undefined4 *)(iVar10 + 0x30) = auStack_120._0_4_;
            *(undefined4 *)(iVar10 + 0x34) = auStack_120._4_4_;
            *(undefined4 *)(iVar10 + 0x38) = auStack_120._8_4_;
            *(undefined4 *)(iVar10 + 0x3c) = auStack_120._12_4_;
            *(undefined4 *)(iVar10 + 0x40) = auStack_110._0_4_;
            *(undefined4 *)(iVar10 + 0x44) = auStack_110._4_4_;
            *(undefined4 *)(iVar10 + 0x48) = auStack_110._8_4_;
            *(undefined4 *)(iVar10 + 0x4c) = auStack_110._12_4_;
            FUN_0037cec8(param_2,*(undefined4 *)(iVar10 + 0x58));
            uVar5 = *(uint *)(param_1 + 8);
            *(undefined4 *)(iVar10 + 0x58) = 0;
          } while (uVar14 < uVar5);
        }
        return 0;
      }
      uVar14 = uVar14 + 1;
      iVar15 = uVar14 * 0x14;
    } while (uVar14 < *(uint *)(param_1 + 0x10));
  }
  return 1;
}


// ==== FUN_0032b3b0 @ 0032b3b0 ====

void FUN_0032b3b0(int param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  
  uVar7 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar5 = *(int *)(param_1 + 0xc) + uVar7 * 0x70;
      iVar6 = *(int *)(iVar5 + 0x58);
      if (iVar6 == 0) {
        auStack_120 = *(undefined1 (*) [16])(iVar5 + 0x10);
        auStack_110 = *(undefined1 (*) [16])(iVar5 + 0x20);
        auStack_100 = *(undefined1 (*) [16])(iVar5 + 0x30);
        auStack_f0 = *(undefined1 (*) [16])(iVar5 + 0x40);
      }
      else {
        pauVar3 = *(undefined1 (**) [16])(iVar5 + 0x50);
        if (pauVar3 == (undefined1 (*) [16])0x0) {
          auStack_f0 = *(undefined1 (*) [16])(iVar6 + 0x10);
          auStack_120 = *(undefined1 (*) [16])(iVar6 + 0x40);
          auStack_110 = *(undefined1 (*) [16])(iVar6 + 0x50);
          auStack_100 = *(undefined1 (*) [16])(iVar6 + 0x60);
        }
        else {
          auVar11 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x40));
          pauVar1 = (undefined1 (*) [16])(iVar6 + 0x50);
          pauVar2 = (undefined1 (*) [16])(iVar6 + 0x60);
          _sqc2(auVar11);
          auVar9 = _lqc2(*pauVar2);
          auVar8 = _lqc2(*pauVar3);
          auVar14 = _lqc2(*pauVar1);
          _vmulabc(auVar11,auVar8);
          _vmaddabc(auVar14,auVar8);
          auVar15 = _vmaddbc(auVar9,auVar8);
          _sqc2(auVar15);
          auVar9 = _lqc2(*pauVar2);
          auVar8 = _lqc2(pauVar3[1]);
          auVar14 = _lqc2(*pauVar1);
          _vmulabc(auVar11,auVar8);
          _vmaddabc(auVar14,auVar8);
          auVar13 = _vmaddbc(auVar9,auVar8);
          _sqc2(auVar13);
          auVar9 = _lqc2(*pauVar2);
          auVar8 = _lqc2(pauVar3[2]);
          auVar14 = _lqc2(*pauVar1);
          _vmulabc(auVar11,auVar8);
          _vmaddabc(auVar14,auVar8);
          auVar10 = _vmaddbc(auVar9,auVar8);
          _sqc2(auVar10);
          auVar12 = _lqc2(pauVar3[3]);
          auVar14 = _lqc2(*pauVar1);
          auVar9 = _lqc2(*pauVar2);
          auVar8 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x10));
          _vmulabc(auVar11,auVar12);
          _vmaddabc(auVar14,auVar12);
          _vmaddabc(auVar9,auVar12);
          auVar8 = _vmaddbc(auVar8,in_vf0);
          auStack_120 = _sqc2(auVar15);
          auStack_110 = _sqc2(auVar13);
          auStack_100 = _sqc2(auVar10);
          auStack_f0 = _sqc2(auVar8);
          _sqc2(auVar8);
        }
      }
      uVar7 = uVar7 + 1;
      *(int *)(iVar5 + 0x10) = auStack_120._0_4_;
      *(int *)(iVar5 + 0x14) = auStack_120._4_4_;
      *(undefined4 *)(iVar5 + 0x18) = auStack_120._8_4_;
      *(undefined4 *)(iVar5 + 0x1c) = auStack_120._12_4_;
      *(undefined4 *)(iVar5 + 0x20) = auStack_110._0_4_;
      *(undefined4 *)(iVar5 + 0x24) = auStack_110._4_4_;
      *(undefined4 *)(iVar5 + 0x28) = auStack_110._8_4_;
      *(undefined4 *)(iVar5 + 0x2c) = auStack_110._12_4_;
      *(undefined4 *)(iVar5 + 0x30) = auStack_100._0_4_;
      *(undefined4 *)(iVar5 + 0x34) = auStack_100._4_4_;
      *(undefined4 *)(iVar5 + 0x38) = auStack_100._8_4_;
      *(undefined4 *)(iVar5 + 0x3c) = auStack_100._12_4_;
      *(undefined4 *)(iVar5 + 0x40) = auStack_f0._0_4_;
      *(undefined4 *)(iVar5 + 0x44) = auStack_f0._4_4_;
      *(undefined4 *)(iVar5 + 0x48) = auStack_f0._8_4_;
      *(undefined4 *)(iVar5 + 0x4c) = auStack_f0._12_4_;
      FUN_0037cec8(param_2,*(undefined4 *)(iVar5 + 0x58));
      uVar4 = *(uint *)(param_1 + 8);
      *(undefined4 *)(iVar5 + 0x58) = 0;
    } while (uVar7 < uVar4);
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar6 = 0;
    do {
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)(param_1 + 0x14) + iVar6;
      iVar6 = iVar6 + 0x14;
      FUN_0037d0c8(param_2,*(undefined4 *)(iVar5 + 0x10));
      uVar4 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    } while (uVar7 < uVar4);
  }
  return;
}


// ==== FUN_0032b598 @ 0032b598 ====
// GLOBAL DAT_0045cbb0 undefined4
// GLOBAL DAT_0045cbb4 undefined4
// GLOBAL DAT_0045cbb8 undefined4
// GLOBAL DAT_0045cbbc undefined4
// GLOBAL DAT_0045cbc0 undefined4
// GLOBAL DAT_0045cbc4 undefined4
// GLOBAL DAT_0045cbc8 undefined4
// GLOBAL DAT_0045cbcc undefined4
// GLOBAL DAT_0045cbd0 undefined4
// GLOBAL DAT_0045cbd4 undefined4
// GLOBAL DAT_0045cbd8 undefined4
// GLOBAL DAT_0045cbdc undefined4
// GLOBAL DAT_0045cbe0 undefined4
// GLOBAL DAT_0045cbe4 undefined4
// GLOBAL DAT_0045cbe8 undefined4
// GLOBAL DAT_0045cbec undefined4

void FUN_0032b598(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9040,2);
      FUN_00100230(&gp0xffff9038,2);
    }
    else {
      FUN_00100228(&gp0xffff9038);
      FUN_00100258(&gp0xffff9040);
      DAT_0045cbb0 = 0x3fc90fdb;
      DAT_0045cbb4 = 0xbe22f983;
      DAT_0045cbb8 = 0x4b400000;
      DAT_0045cbbc = uStack_44;
      DAT_0045cbc0 = 0xbe22f983;
      DAT_0045cbc4 = 0x3f000000;
      DAT_0045cbc8 = 0x3e800000;
      DAT_0045cbcc = uStack_34;
      DAT_0045cbd0 = 0xc2992661;
      DAT_0045cbd4 = 0xc2255de0;
      DAT_0045cbd8 = 0x42a33457;
      DAT_0045cbdc = uStack_24;
      DAT_0045cbe0 = 0x421ed7b7;
      DAT_0045cbe4 = 0x40c90fda;
      DAT_0045cbe8 = 0;
      DAT_0045cbec = uStack_14;
    }
  }
  return;
}


// ==== FUN_0032b6e0 @ 0032b6e0 ====

void FUN_0032b6e0(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  FUN_0032ad30(auStack_20);
  return;
}


// ==== FUN_0032b700 @ 0032b700 ====

void FUN_0032b700(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc) + iVar3;
      if ((*(uint *)(*(int *)(iVar1 + 0x58) + 0x8c) & 7) == 4) {
        iVar1 = *(int *)(iVar1 + 0x58);
      }
      else {
        FUN_0037cf60(*(undefined4 *)(*(int *)(iVar1 + 0x58) + 0x4c));
        iVar1 = *(int *)(iVar1 + 0x58);
      }
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar1 + 0xac) = 0;
      iVar3 = iVar3 + 0x70;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return;
}


// ==== FUN_0032b798 @ 0032b798 ====

void FUN_0032b798(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar4 + 0x58);
      if ((*(uint *)(iVar1 + 0x8c) & 7) == 2) {
        uVar2 = *(uint *)(param_1 + 8);
      }
      else {
        FUN_0037cfd0(*(undefined4 *)(iVar1 + 0x4c));
        uVar2 = *(uint *)(param_1 + 8);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x70;
    } while (uVar3 < uVar2);
  }
  return;
}


// ==== FUN_0032b820 @ 0032b820 ====

void FUN_0032b820(void)

{
  FUN_0032b598(1,0xffff);
  return;
}


// ==== FUN_0032b840 @ 0032b840 ====

void FUN_0032b840(void)

{
  FUN_0032b598(0,0xffff);
  return;
}


// ==== FUN_0032b860 @ 0032b860 ====

undefined8 FUN_0032b860(undefined8 param_1,int param_2,int param_3)

{
  ((int *)param_1)[1] = 0x10;
  *(int *)param_1 =
       (param_2 * 0xe0 + param_3 * 8 + 0x2fU & 0xfffffff0) + param_3 * 0x90 + param_2 * 4;
  return param_1;
}


// ==== FUN_0032b928 @ 0032b928 ====

void FUN_0032b928(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1[2];
  uVar3 = (int)param_1 + 0x2fU & 0xfffffff0;
  iVar4 = *param_1 * 0xa0 + uVar3;
  param_1[5] = iVar4;
  uVar2 = iVar4 + iVar1 * 8 + 0xfU & 0xfffffff0;
  param_1[3] = uVar2;
  param_1[1] = uVar3;
  iVar4 = iVar1 * 0x40 + uVar2;
  param_1[4] = iVar4;
  param_1[7] = iVar1 * 0x50 + iVar4;
  return;
}


// ==== FUN_0032b9e0 @ 0032b9e0 ====
// GLOBAL DAT_0045cbf0 undefined4
// GLOBAL DAT_0045cbf4 undefined4
// GLOBAL DAT_0045cbf8 undefined4
// GLOBAL DAT_0045cbfc undefined4
// GLOBAL DAT_0045cc00 undefined4
// GLOBAL DAT_0045cc04 undefined4
// GLOBAL DAT_0045cc08 undefined4
// GLOBAL DAT_0045cc0c undefined4
// GLOBAL DAT_0045cc10 undefined4
// GLOBAL DAT_0045cc14 undefined4
// GLOBAL DAT_0045cc18 undefined4
// GLOBAL DAT_0045cc1c undefined4
// GLOBAL DAT_0045cc20 undefined4
// GLOBAL DAT_0045cc24 undefined4
// GLOBAL DAT_0045cc28 undefined4
// GLOBAL DAT_0045cc2c undefined4

void FUN_0032b9e0(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9050,2);
      FUN_00100230(&gp0xffff9048,2);
    }
    else {
      FUN_00100228(&gp0xffff9048);
      FUN_00100258(&gp0xffff9050);
      DAT_0045cbf0 = 0x3fc90fdb;
      DAT_0045cbf4 = 0xbe22f983;
      DAT_0045cbf8 = 0x4b400000;
      DAT_0045cbfc = uStack_44;
      DAT_0045cc00 = 0xbe22f983;
      DAT_0045cc04 = 0x3f000000;
      DAT_0045cc08 = 0x3e800000;
      DAT_0045cc0c = uStack_34;
      DAT_0045cc10 = 0xc2992661;
      DAT_0045cc14 = 0xc2255de0;
      DAT_0045cc18 = 0x42a33457;
      DAT_0045cc1c = uStack_24;
      DAT_0045cc20 = 0x421ed7b7;
      DAT_0045cc24 = 0x40c90fda;
      DAT_0045cc28 = 0;
      DAT_0045cc2c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0032bb28 @ 0032bb28 ====

uint * FUN_0032bb28(undefined4 *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int aiStack_70 [4];
  
  puVar1 = (uint *)*param_1;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  *puVar1 = param_2;
  puVar1[2] = param_3;
  uVar4 = 0;
  FUN_0032b928(puVar1);
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      aiStack_70[0] = puVar1[1] + iVar5;
      iVar5 = iVar5 + 0xa0;
      FUN_00332cb0(aiStack_70,0);
      iVar2 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar2 + puVar1[7]) = 0;
    } while (uVar4 < param_2);
  }
  uVar4 = 0;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)puVar1[5];
    do {
      *puVar3 = 0xffffffff;
      uVar4 = uVar4 + 1;
      puVar3[1] = 0xffffffff;
      puVar3 = puVar3 + 2;
    } while (uVar4 < param_3);
  }
  return puVar1;
}


// ==== FUN_0032bc50 @ 0032bc50 ====

void FUN_0032bc50(void)

{
  FUN_0032b9e0(0,0xffff);
  return;
}


// ==== FUN_0032bc70 @ 0032bc70 ====

undefined8 FUN_0032bc70(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iStack_70;
  int iStack_6c;
  undefined1 auStack_60 [32];
  int iStack_40;
  int iStack_3c;
  
  FUN_00334028(&iStack_70,*(undefined4 *)(param_2 + 0x24),auStack_60);
  FUN_0037cdf0(&iStack_40,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
  iVar1 = *(int *)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x34);
  puVar4 = (undefined8 *)param_1;
  *puVar4 = CONCAT44(iStack_6c,iVar3 * 2);
  puVar4[1] = CONCAT44(iStack_3c,iStack_70);
  puVar4[2] = CONCAT44((((iVar1 * 0x20 + 0xff + iStack_6c & -iStack_6c) + iStack_70 + -1 + iStack_3c
                        & -iStack_3c) + iStack_40 + 0x7fU & 0xffffff80) + iVar2 * 4 + iVar1 * 0x14 +
                       iVar3 * 0x20 + (iVar2 + 0x1fU >> 5) * 0xc + (iVar1 + 0x1fU >> 5) * 0x1c,
                       iStack_40);
  return param_1;
}


// ==== FUN_0032bdc0 @ 0032bdc0 ====

undefined4 * FUN_0032bdc0(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_70;
  int aiStack_6c [3];
  
  FUN_0032bc70(&iStack_90);
  puVar1 = (undefined4 *)*param_1;
  puVar1[1] = 100;
  puVar1[3] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  iVar16 = (int)param_2;
  uVar3 = *(undefined4 *)(iVar16 + 0x28);
  *puVar1 = *(undefined4 *)(iVar16 + 0x20);
  puVar1[8] = uVar3;
  puVar1[0xf] = puVar1 + 0x40;
  uVar3 = *(undefined4 *)(iVar16 + 0x2c);
  puVar1[0x36] = 0;
  puVar1[9] = uVar3;
  puVar1[10] = *(undefined4 *)(iVar16 + 0x24);
  puVar1[0xb] = iStack_90;
  uVar7 = *(int *)(iVar16 + 0x28) * 0x20 + 0xff + iStack_8c & -iStack_8c;
  iVar2 = (int)puVar1 + uVar7;
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_003339a0(iVar2,*(undefined4 *)(iVar16 + 0x24),param_2);
  }
  puVar1[0x10] = uVar3;
  uVar8 = uVar7 + iStack_88 + -1 + iStack_84 & -iStack_84;
  iStack_70 = (int)puVar1 + uVar8;
  aiStack_6c[0] = iStack_70;
  iVar4 = FUN_0037c238(aiStack_6c,*(undefined4 *)(iVar16 + 0x30),*(undefined4 *)(iVar16 + 0x34));
  iVar2 = *(int *)(iVar16 + 0x24);
  iVar5 = *(int *)(iVar16 + 0x28);
  uVar7 = iVar2 + 0x1fU >> 5;
  puVar1[0x19] = iVar2;
  puVar1[0x1a] = uVar7;
  uVar9 = uVar8 + iStack_80 + 0x7f & 0xffffff80;
  iVar6 = *(int *)(iVar16 + 0x24);
  iVar10 = uVar9 + iVar2 * 4;
  iVar5 = iVar5 * 4;
  iVar11 = iVar10 + iVar5;
  puVar1[0x1d] = iVar6 + 0x1fU >> 5;
  puVar1[0x1c] = iVar6;
  iVar12 = iVar11 + iStack_90 * 0x10;
  iVar2 = *(int *)(iVar16 + 0x24);
  iVar13 = iVar12 + iVar5;
  iVar14 = iVar13 + iVar5;
  puVar1[0x1f] = iVar2;
  puVar1[0x20] = iVar2 + 0x1fU >> 5;
  iVar15 = iVar14 + iVar5;
  iVar2 = *(int *)(iVar16 + 0x28);
  iVar5 = iVar15 + iVar5;
  puVar1[0x22] = iVar2;
  uVar8 = iVar2 + 0x1fU >> 5;
  iVar17 = (int)puVar1 + iVar5;
  puVar1[0x23] = uVar8;
  puVar1[0x18] = iVar17;
  iVar2 = *(int *)(iVar16 + 0x28);
  iVar17 = iVar17 + uVar7 * 4;
  puVar1[0x1b] = iVar17;
  iVar6 = uVar8 * 4;
  fVar18 = *(float *)(iVar16 + 0x20);
  puVar1[0x1e] = iVar17 + uVar7 * 4;
  puVar1[0x26] = iVar2 + 0x1fU >> 5;
  iVar5 = (int)puVar1 + uVar7 * 0xc + iVar5;
  puVar1[0x25] = iVar2;
  puVar1[0x21] = iVar5;
  iVar2 = *(int *)(iVar16 + 0x28);
  iVar5 = iVar5 + iVar6;
  puVar1[0x24] = iVar5;
  *(float *)(iVar4 + 0x388) = fVar18 * 0.2;
  iVar5 = iVar5 + iVar6;
  puVar1[0x11] = (int)puVar1 + uVar9;
  puVar1[0x12] = (int)puVar1 + iVar10;
  puVar1[0x13] = (int)puVar1 + iVar11;
  puVar1[0x14] = (int)puVar1 + iVar12;
  puVar1[0x15] = (int)puVar1 + iVar13;
  puVar1[0x16] = (int)puVar1 + iVar14;
  puVar1[0x17] = (int)puVar1 + iVar15;
  puVar1[6] = iVar4;
  puVar1[7] = 0;
  puVar1[0x27] = iVar5;
  puVar1[0x29] = iVar2 + 0x1fU >> 5;
  iVar5 = iVar5 + iVar6;
  puVar1[0x28] = iVar2;
  puVar1[0x2a] = iVar5;
  iVar2 = *(int *)(iVar16 + 0x28);
  iVar5 = iVar5 + iVar6;
  puVar1[0x2d] = iVar5;
  puVar1[0x2b] = iVar2;
  iVar5 = iVar5 + iVar6;
  puVar1[0x2c] = iVar2 + 0x1fU >> 5;
  puVar1[0x30] = iVar5;
  iVar2 = *(int *)(iVar16 + 0x28);
  puVar1[0x33] = iVar5 + iVar6;
  puVar1[0x2e] = iVar2;
  puVar1[0x2f] = iVar2 + 0x1fU >> 5;
  iVar2 = *(int *)(iVar16 + 0x28);
  puVar1[0x31] = iVar2;
  puVar1[0x32] = iVar2 + 0x1fU >> 5;
  iVar2 = *(int *)(iVar16 + 0x28);
  puVar1[0x34] = iVar2;
  puVar1[0x35] = iVar2 + 0x1fU >> 5;
  FUN_0032d108(puVar1);
  return puVar1;
}


// ==== FUN_0032c0d8 @ 0032c0d8 ====

int FUN_0032c0d8(int param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 in_t2_qw [16];
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_28d0 [16];
  undefined1 auStack_28c0 [16];
  int aiStack_28b0 [4];
  undefined1 auStack_28a0 [16];
  undefined1 auStack_2890 [16];
  int iStack_f0;
  undefined1 auStack_ec [20];
  int iStack_d8;
  uint uStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined1 *puStack_a4;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x388);
  auVar23 = _lqc2(param_3[1]);
  auVar24 = _qmtc2(uVar1);
  auVar22 = _lqc2(*param_3);
  auVar25 = _qmtc2(uVar1);
  auVar23 = _vaddbc(auVar23,auVar24);
  auVar22 = _vsubbc(auVar22,auVar25);
  auStack_28d0 = _sqc2(auVar22);
  auStack_28c0 = _sqc2(auVar23);
  iStack_a8 = 0;
  uStack_ac = param_2;
  FUN_00334068(aiStack_28b0,*(undefined4 *)(param_1 + 0x40),auStack_28d0);
  puStack_a4 = auStack_ec;
LAB_0032c15c:
  uStack_b0 = uStack_d4;
  if (uStack_d4 == 0xffff) {
    iStack_d8 = iStack_d8 + -1;
    while (iStack_d8 < 0) {
      bVar6 = false;
      if (iStack_f0 == 0) goto LAB_0032c1d4;
      FUN_00333b48(aiStack_28b0);
    }
    uStack_b0 = (uint)*(ushort *)(puStack_a4 + iStack_d8 * 2);
  }
  bVar6 = true;
  uStack_d4 = (uint)*(ushort *)(uStack_b0 * 8 + *(int *)(aiStack_28b0[0] + 0x30) + 2);
LAB_0032c1d4:
  if (bVar6) goto code_r0x0032c1dc;
  bVar6 = false;
  goto LAB_0032c240;
code_r0x0032c1dc:
  pauVar10 = (undefined1 (*) [16])(uStack_b0 * 0x20 + *(int *)(aiStack_28b0[0] + 0x34));
  pauVar9 = pauVar10 + 1;
  auVar22 = *pauVar10;
  auVar24 = _pand(auStack_28a0,*pauVar9);
  auVar23 = _pcgtw(*pauVar9,auStack_28a0);
  auVar23 = _pxor(auVar23,auVar24);
  in_t2_qw = _pand(auVar22,auStack_2890);
  auVar22 = _pcgtw(auStack_2890,auVar22);
  auVar22 = _pxor(auVar22,in_t2_qw);
  auVar22 = _pand(auVar23,auVar22);
  auVar23 = _prot3w(auVar22);
  if (-1 < (long)(auVar23._0_8_ & auVar22._0_8_ & auVar22._0_8_ << 0x20)) goto LAB_0032c15c;
  bVar6 = true;
LAB_0032c240:
  if (!bVar6) {
    return iStack_a8;
  }
  if ((uStack_b0 < uStack_ac) &&
     ((*(uint *)((uStack_b0 >> 5) * 4 + *(int *)(param_1 + 0x78)) >> (uStack_b0 & 0x1f) & 1) != 0))
  goto LAB_0032c15c;
  iVar15 = *(int *)(param_1 + 0x44);
  iVar17 = *(int *)(param_1 + 0xd8);
  iVar14 = *(int *)(uStack_b0 * 4 + iVar15);
  iVar2 = *(int *)(uStack_ac * 4 + iVar15);
  iVar16 = 0;
  uVar3 = *(uint *)(iVar14 + 8);
  uVar18 = (ulong)*(int *)(iVar2 + 8);
  fVar21 = *(float *)(*(int *)(param_1 + 0x18) + 0x388);
  if (iVar17 != 0) {
    iVar2 = *(int *)(iVar2 + 0x18);
    in_t2_qw._0_8_ = (ulong)iVar2;
    iVar14 = *(int *)(iVar14 + 0x18);
    if (in_t2_qw._0_8_ < (ulong)(long)iVar14) {
      uVar7 = iVar2 * *(int *)(iVar17 + 4) + iVar14;
      uVar7 = *(uint *)(iVar17 + (uVar7 >> 5) * 4 + 0xc) & 1 << (uVar7 & 0x1f);
    }
    else {
      uVar7 = iVar14 * *(int *)(iVar17 + 4) + iVar2;
      uVar7 = *(uint *)(iVar17 + (uVar7 >> 5) * 4 + 0xc) & 1 << (uVar7 & 0x1f);
    }
    iVar17 = 0;
    if (uVar7 != 0) goto LAB_0032c55c;
  }
  if (uStack_ac == uStack_b0) {
    iVar16 = *(int *)(*(int *)(uStack_b0 * 4 + iVar15) + 4);
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = in_t2_qw._8_8_;
  in_t2_qw = auVar22 << 0x40;
  iVar17 = 0;
  if (uVar18 != 0) {
    iVar15 = *(int *)(param_1 + 0x44);
    while( true ) {
      iVar14 = in_t2_qw._0_4_;
      uVar7 = *(uint *)(*(int *)(*(int *)(uStack_ac * 4 + iVar15) + 0xc) + iVar14 * 0x70 + 0x60);
      if (((*(uint *)((uVar7 >> 5) * 4 + *(int *)(param_1 + 0x90)) >> (uVar7 & 0x1f) & 1) != 0) &&
         (uVar13 = 0, uVar3 != 0)) {
        iVar15 = 0;
        do {
          uVar4 = *(uint *)(*(int *)(*(int *)(uStack_b0 * 4 + *(int *)(param_1 + 0x44)) + 0xc) +
                            iVar15 + 0x60);
          if ((uVar7 != uVar4) &&
             (((iVar16 == 0 ||
               (uVar8 = iVar14 * *(int *)(iVar16 + 4) + uVar13,
               (*(uint *)(iVar16 + 0xc + (uVar8 >> 5) * 4) & 1 << (uVar8 & 0x1f)) == 0)) &&
              ((*(uint *)((uVar4 >> 5) * 4 + *(int *)(param_1 + 0x90)) >> (uVar4 & 0x1f) & 1) != 0))
             )) {
            pauVar9 = (undefined1 (*) [16])(uVar4 * 0x20 + *(int *)(param_1 + 0x3c));
            pauVar10 = (undefined1 (*) [16])(uVar7 * 0x20 + *(int *)(param_1 + 0x3c));
            auVar23 = _lqc2(*pauVar9);
            auVar25 = _lqc2(pauVar9[1]);
            auVar24 = _lqc2(pauVar10[1]);
            auVar22 = _lqc2(*pauVar10);
            auVar23 = _vsub(auVar23,auVar24);
            auVar22 = _vsub(auVar22,auVar25);
            auVar23 = _vmax(auVar22,auVar23);
            auVar22 = _qmfc2(auVar23._0_4_);
            auStack_d0 = _sqc2(auVar23);
            auStack_c0 = _sqc2(auVar23);
            fVar20 = (float)auStack_d0._4_4_;
            if ((float)auStack_d0._4_4_ < auVar22._0_4_) {
              fVar20 = auVar22._0_4_;
            }
            fVar19 = (float)auStack_c0._8_4_;
            if ((float)auStack_c0._8_4_ < fVar20) {
              fVar19 = fVar20;
            }
            if (((fVar19 < fVar21) && (puVar11 = *(uint **)(param_1 + 0x10), puVar11 != (uint *)0x0)
                ) && (puVar5 = (uint *)puVar11[1], puVar5 != (uint *)0x0)) {
              *(uint *)(param_1 + 0x10) = puVar5[1];
              puVar12 = (uint *)(uVar7 * 4 + *(int *)(param_1 + 0x50));
              *puVar11 = uVar7;
              uVar8 = *puVar12;
              puVar11[1] = uVar8;
              if (uVar8 != 0) {
                *(uint **)(uVar8 + 8) = puVar11;
              }
              puVar11[2] = 0;
              iVar2 = *(int *)(param_1 + 0x50);
              *puVar12 = (uint)puVar11;
              puVar11 = (uint *)(uVar4 * 4 + iVar2);
              *puVar5 = uVar4;
              uVar4 = *puVar11;
              puVar5[1] = uVar4;
              if (uVar4 != 0) {
                *(uint **)(uVar4 + 8) = puVar5;
              }
              puVar5[2] = 0;
              iVar17 = iVar17 + 1;
              *puVar11 = (uint)puVar5;
            }
          }
          uVar13 = uVar13 + 1;
          iVar15 = iVar15 + 0x70;
        } while (uVar13 < uVar3);
      }
      in_t2_qw._0_8_ = (long)(iVar14 + 1);
      if (uVar18 <= (ulong)(long)(iVar14 + 1)) break;
      iVar15 = *(int *)(param_1 + 0x44);
    }
  }
LAB_0032c55c:
  iStack_a8 = iStack_a8 + iVar17;
  goto LAB_0032c15c;
}


// ==== FUN_0032c5a0 @ 0032c5a0 ====
// GLOBAL PTR_DAT_0040e408 undefined_*

undefined8 FUN_0032c5a0(int param_1,int *param_2,uint param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [12];
  long lVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
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
  int iStack_c8;
  int iStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  float fStack_7c;
  float fStack_68;
  
  iVar3 = param_2[0x16];
  if (iVar3 == 0) {
    auStack_140._0_4_ = param_2[4];
    auStack_140._4_4_ = param_2[5];
    auStack_140._8_4_ = param_2[6];
    auStack_140._12_4_ = param_2[7];
    auStack_130._0_4_ = param_2[8];
    auStack_130._4_4_ = param_2[9];
    auStack_130._8_4_ = param_2[10];
    auStack_130._12_4_ = param_2[0xb];
    auStack_120._0_8_ = *(undefined8 *)(param_2 + 0xc);
    auStack_120._8_4_ = param_2[0xe];
    auStack_120._12_4_ = param_2[0xf];
    auStack_110._0_8_ = *(undefined8 *)(param_2 + 0x10);
    iVar10 = param_2[0x12];
    iVar11 = param_2[0x13];
  }
  else {
    pauVar4 = (undefined1 (*) [16])param_2[0x14];
    pauVar8 = (undefined1 (*) [16])(iVar3 + 0x10);
    auStack_110._0_8_ = *(undefined8 *)*pauVar8;
    iVar10 = *(int *)(iVar3 + 0x18);
    iVar11 = *(int *)(iVar3 + 0x1c);
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x40));
      pauVar1 = (undefined1 (*) [16])(iVar3 + 0x50);
      auVar5 = *(undefined1 (*) [12])*pauVar1;
      uStack_e4 = *(undefined4 *)(iVar3 + 0x5c);
      pauVar2 = (undefined1 (*) [16])(iVar3 + 0x60);
      uStack_e0 = *(undefined4 *)*pauVar2;
      uStack_dc = *(undefined4 *)(iVar3 + 100);
      uStack_d8 = *(undefined4 *)(iVar3 + 0x68);
      uStack_d4 = *(undefined4 *)(iVar3 + 0x6c);
      auStack_100 = _sqc2(auVar14);
      uStack_f0 = auVar5._0_4_;
      uStack_ec = auVar5._4_4_;
      uStack_e8 = auVar5._8_4_;
      auVar13 = _lqc2(*pauVar2);
      auVar12 = _lqc2(*pauVar4);
      auVar17 = _lqc2(*pauVar1);
      _vmulabc(auVar14,auVar12);
      _vmaddabc(auVar17,auVar12);
      auVar18 = _vmaddbc(auVar13,auVar12);
      auStack_c0 = _sqc2(auVar18);
      auVar13 = _lqc2(*pauVar2);
      auVar12 = _lqc2(pauVar4[1]);
      auVar17 = _lqc2(*pauVar1);
      _vmulabc(auVar14,auVar12);
      _vmaddabc(auVar17,auVar12);
      auVar16 = _vmaddbc(auVar13,auVar12);
      auStack_b0 = _sqc2(auVar16);
      auVar13 = _lqc2(*pauVar2);
      auVar12 = _lqc2(pauVar4[2]);
      auVar17 = _lqc2(*pauVar1);
      _vmulabc(auVar14,auVar12);
      _vmaddabc(auVar17,auVar12);
      auVar17 = _vmaddbc(auVar13,auVar12);
      auStack_a0 = _sqc2(auVar17);
      auVar19 = _lqc2(*pauVar8);
      auVar15 = _lqc2(pauVar4[3]);
      auVar13 = _lqc2(*pauVar1);
      auVar12 = _lqc2(*pauVar2);
      _vmulabc(auVar14,auVar15);
      _vmaddabc(auVar13,auVar15);
      _vmaddabc(auVar12,auVar15);
      auVar12 = _vmaddbc(auVar19,in_vf0);
      auStack_140 = _sqc2(auVar18);
      auStack_130 = _sqc2(auVar16);
      auStack_120 = _sqc2(auVar17);
      auStack_110 = _sqc2(auVar12);
      auStack_90 = _sqc2(auVar12);
      uStack_d0 = *(undefined4 *)*pauVar8;
      uStack_cc = *(undefined4 *)(iVar3 + 0x14);
      iStack_c8 = iVar10;
      iStack_c4 = iVar11;
      goto LAB_0032c6b4;
    }
    auStack_140._0_4_ = *(int *)(iVar3 + 0x40);
    auStack_140._4_4_ = *(int *)(iVar3 + 0x44);
    auStack_140._8_4_ = *(int *)(iVar3 + 0x48);
    auStack_140._12_4_ = *(int *)(iVar3 + 0x4c);
    auStack_130._0_4_ = *(int *)(iVar3 + 0x50);
    auStack_130._4_4_ = *(int *)(iVar3 + 0x54);
    auStack_130._8_4_ = *(int *)(iVar3 + 0x58);
    auStack_130._12_4_ = *(int *)(iVar3 + 0x5c);
    auStack_120._0_8_ = *(undefined8 *)(iVar3 + 0x60);
    auStack_120._8_4_ = *(int *)(iVar3 + 0x68);
    auStack_120._12_4_ = *(int *)(iVar3 + 0x6c);
  }
  auStack_110._8_4_ = iVar10;
  auStack_110._12_4_ = iVar11;
LAB_0032c6b4:
  iVar3 = *(int *)(*param_2 + 0x58);
  lVar6 = (**(code **)(iVar3 + 8))
                    (*param_2 + (int)*(short *)(iVar3 + 4),auStack_140,0,
                     param_3 * 0x20 + *(int *)(param_1 + 0x3c));
  if (lVar6 == 0) {
    puVar9 = (uint *)((param_3 >> 5) * 4 + *(int *)(param_1 + 0x90));
    uVar7 = 0;
    *puVar9 = *puVar9 & ~(1 << (param_3 & 0x1f));
  }
  else {
    iVar10 = (param_3 >> 5) * 4;
    puVar9 = (uint *)(iVar10 + *(int *)(param_1 + 0x90));
    iVar3 = *(int *)(param_1 + 0x9c);
    *puVar9 = *puVar9 | 1 << (param_3 & 0x1f);
    if ((*(uint *)(iVar10 + iVar3) >> (param_3 & 0x1f) & 1) == 0) {
      auVar14 = _lqc2(*(undefined1 (*) [16])(param_2[0x16] + 0x20));
      auVar13 = _qmfc2(auVar14._0_4_);
      auVar12 = _sqc2(auVar14);
      fStack_7c = auVar12._4_4_;
      auVar12 = _sqc2(auVar14);
      fStack_68 = auVar12._8_4_;
      pauVar8 = (undefined1 (*) [16])(param_3 * 0x20 + *(int *)(param_1 + 0x3c));
      auVar14 = _lqc2(*(undefined1 (*) [16])PTR_DAT_0040e408);
      auVar17 = _lqc2(*pauVar8);
      auVar12 = _lqc2(pauVar8[1]);
      auVar13 = _qmtc2(ABS(auVar13._0_4_) + ABS(fStack_7c) + ABS(fStack_68));
      auVar13 = _vaddbc(auVar14,auVar13);
      auVar12 = _vadd(auVar12,auVar13);
      auVar13 = _vsub(auVar17,auVar13);
      auVar12 = _sqc2(auVar12);
      pauVar8[1] = auVar12;
      auVar12 = _sqc2(auVar13);
      *pauVar8 = auVar12;
      uVar7 = 1;
    }
    else {
      uVar7 = 1;
    }
  }
  return uVar7;
}


// ==== FUN_0032c838 @ 0032c838 ====

int FUN_0032c838(int param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  uVar14 = 0;
  uVar8 = *(uint *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x44)) + 8);
  iVar13 = 0;
  if (uVar8 != 0) {
    iVar7 = *(int *)(param_1 + 0x44);
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x50);
      iVar3 = uVar14 * 0x70;
      uVar14 = uVar14 + 1;
      uVar2 = *(uint *)(*(int *)(*(int *)(param_2 * 4 + iVar7) + 0xc) + iVar3 + 0x60);
      while( true ) {
        piVar4 = (int *)(uVar2 * 4 + iVar1);
        if (*piVar4 == 0) break;
        piVar4 = (int *)*piVar4;
        if (piVar4[2] == 0) {
          *(int *)(*piVar4 * 4 + iVar1) = piVar4[1];
        }
        else {
          *(int *)(piVar4[2] + 4) = piVar4[1];
        }
        if (piVar4[1] == 0) {
          iVar7 = *(int *)(param_1 + 0x10);
        }
        else {
          *(int *)(piVar4[1] + 8) = piVar4[2];
          iVar7 = *(int *)(param_1 + 0x10);
        }
        piVar4[1] = iVar7;
        *(int **)(param_1 + 0x10) = piVar4;
        piVar4 = (int *)piVar4[3];
        if (piVar4[2] == 0) {
          *(int *)(*piVar4 * 4 + *(int *)(param_1 + 0x50)) = piVar4[1];
        }
        else {
          *(int *)(piVar4[2] + 4) = piVar4[1];
        }
        if (piVar4[1] == 0) {
          iVar7 = *(int *)(param_1 + 0x10);
        }
        else {
          *(int *)(piVar4[1] + 8) = piVar4[2];
          iVar7 = *(int *)(param_1 + 0x10);
        }
        iVar1 = *(int *)(param_1 + 0x50);
        piVar4[1] = iVar7;
        *(int **)(param_1 + 0x10) = piVar4;
      }
      if ((*(uint *)((uVar2 >> 5) * 4 + *(int *)(param_1 + 0x90)) >> (uVar2 & 0x1f) & 1) != 0) {
        puVar12 = (undefined4 *)param_3;
        if (iVar13 == 0) {
          iVar13 = 1;
          puVar10 = (undefined8 *)(uVar2 * 0x20 + *(int *)(param_1 + 0x3c));
          uVar9 = *puVar10;
          uVar5 = *(undefined4 *)(puVar10 + 1);
          uVar6 = *(undefined4 *)((int)puVar10 + 0xc);
          *puVar12 = (int)uVar9;
          puVar12[1] = (int)((ulong)uVar9 >> 0x20);
          puVar12[2] = uVar5;
          puVar12[3] = uVar6;
          uVar9 = puVar10[2];
          uVar5 = *(undefined4 *)(puVar10 + 3);
          uVar6 = *(undefined4 *)((int)puVar10 + 0x1c);
        }
        else {
          FUN_00394e20(auStack_90,param_3,*(int *)(param_1 + 0x3c) + uVar2 * 0x20);
          *puVar12 = auStack_90._0_4_;
          puVar12[1] = auStack_90._4_4_;
          puVar12[2] = uStack_88;
          puVar12[3] = uStack_84;
          uVar9 = uStack_80;
          uVar5 = uStack_78;
          uVar6 = uStack_74;
        }
        puVar12[4] = (int)uVar9;
        puVar12[5] = (int)((ulong)uVar9 >> 0x20);
        puVar12[6] = uVar5;
        puVar12[7] = uVar6;
      }
      if (uVar8 <= uVar14) break;
      iVar7 = *(int *)(param_1 + 0x44);
    }
  }
  if (iVar13 == 0) {
    puVar11 = (uint *)((param_2 >> 5) * 4 + *(int *)(param_1 + 0x6c));
    uVar8 = *puVar11 & ~(1 << (param_2 & 0x1f));
  }
  else {
    puVar11 = (uint *)((param_2 >> 5) * 4 + *(int *)(param_1 + 0x6c));
    uVar8 = *puVar11 | 1 << (param_2 & 0x1f);
  }
  *puVar11 = uVar8;
  return iVar13;
}


// ==== FUN_0032ca68 @ 0032ca68 ====

int FUN_0032ca68(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puStack_20;
  uint uStack_1c;
  
  uStack_1c = 0;
  uVar6 = 1;
  puStack_20 = (uint *)*param_1;
  puVar4 = puStack_20 + ((uint)param_1[1] >> 5);
  uVar2 = uStack_1c;
  if ((*puStack_20 & 1) != 0) {
    uStack_1c = 0;
    do {
      uVar6 = uVar6 << 1;
      uStack_1c = uStack_1c + 1;
      if (uStack_1c == 0x20) {
        uStack_1c = 0;
        uVar6 = 1;
        puVar5 = puStack_20;
        do {
          puVar3 = puVar5 + 1;
          puStack_20 = puVar4;
          uVar2 = param_1[1] & 0x1f;
          if (puVar4 < puVar3) goto LAB_0032cb30;
          puVar1 = puVar5 + 1;
          puVar5 = puVar3;
          puStack_20 = puVar3;
        } while (*puVar1 == 0xffffffff);
      }
      uVar2 = uStack_1c;
    } while ((*puStack_20 & uVar6) != 0);
  }
LAB_0032cb30:
  uStack_1c = uVar2;
  return ((int)puStack_20 - *param_1 >> 2) * 0x20 + uStack_1c;
}


// ==== FUN_0032cb58 @ 0032cb58 ====

void FUN_0032cb58(int param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  
  uVar18 = 0;
  puVar20 = (uint *)param_2;
  uVar19 = puVar20[2];
  uVar7 = FUN_0032ca68(param_1 + 0x60);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *puVar20 = uVar7;
  FUN_0032ae70(param_2,uVar1,param_3);
  iVar9 = (uVar7 >> 5) * 4;
  puVar10 = (uint *)(iVar9 + *(int *)(param_1 + 0x60));
  uVar8 = 1 << (uVar7 & 0x1f);
  iVar21 = *(int *)(param_1 + 0x6c);
  iVar2 = *(int *)(param_1 + 0x44);
  *puVar10 = *puVar10 | uVar8;
  puVar10 = (uint *)(iVar9 + iVar21);
  uVar3 = *puVar10;
  *(uint **)(uVar7 * 4 + iVar2) = puVar20;
  *puVar10 = uVar3 & ~uVar8;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (uVar19 != 0) {
    iVar21 = 0;
    do {
      uVar8 = FUN_0032ca68(param_1 + 0x84);
      iVar16 = (uVar8 >> 5) * 4;
      puVar10 = (uint *)(iVar16 + *(int *)(param_1 + 0x84));
      uVar17 = 1 << (uVar8 & 0x1f);
      iVar14 = uVar8 * 4;
      uVar3 = puVar20[3];
      iVar2 = *(int *)(param_1 + 0xa8);
      *puVar10 = *puVar10 | uVar17;
      puVar10 = (uint *)(iVar16 + iVar2);
      iVar2 = *(int *)(param_1 + 0x34);
      iVar9 = *(int *)(param_1 + 0x90);
      *(uint *)(iVar14 + *(int *)(param_1 + 0x48)) = uVar3 + iVar21;
      *(int *)(param_1 + 0x34) = iVar2 + 1;
      puVar12 = (uint *)(iVar16 + iVar9);
      *(uint *)(uVar3 + iVar21 + 0x60) = uVar8;
      iVar2 = *(int *)(param_1 + 0x50);
      iVar9 = *(int *)(puVar20[3] + iVar21 + 0x58);
      *puVar10 = *puVar10 | uVar17;
      iVar4 = *(int *)(param_1 + 0x54);
      uVar3 = *puVar12;
      iVar5 = *(int *)(param_1 + 0x58);
      *(undefined4 *)(iVar14 + iVar2) = 0;
      *puVar12 = uVar3 & ~uVar17;
      *(uint *)(iVar9 + 0x6c) = uVar8;
      *(undefined4 *)(iVar14 + iVar4) = 0;
      *(uint *)(iVar14 + iVar5) = uVar7;
      if (param_3 == 1) {
        puVar10 = (uint *)(iVar16 + *(int *)(param_1 + 0x9c));
        uVar17 = *puVar10 | uVar17;
      }
      else {
        puVar10 = (uint *)(iVar16 + *(int *)(param_1 + 0x9c));
        uVar17 = *puVar10 & ~uVar17;
      }
      *puVar10 = uVar17;
      uVar18 = uVar18 + 1;
      iVar21 = iVar21 + 0x70;
    } while (uVar18 < uVar19);
  }
  uVar19 = 0;
  if (puVar20[4] != 0) {
    iVar21 = *(int *)(param_1 + 0x54);
    piVar15 = (int *)puVar20[5];
    do {
      piVar11 = *(int **)(param_1 + 0x10);
      piVar6 = (int *)piVar11[1];
      iVar2 = *(int *)(*piVar15 + 0x60);
      iVar9 = piVar15[1];
      *(int *)(param_1 + 0x10) = piVar6[1];
      piVar13 = (int *)(iVar2 * 4 + iVar21);
      iVar9 = *(int *)(iVar9 + 0x60);
      iVar4 = *piVar13;
      *piVar11 = iVar2;
      piVar11[1] = iVar4;
      if (iVar4 != 0) {
        *(int **)(iVar4 + 8) = piVar11;
      }
      piVar11[2] = 0;
      iVar2 = *(int *)(param_1 + 0x54);
      *piVar13 = (int)piVar11;
      piVar11 = (int *)(iVar9 * 4 + iVar2);
      *piVar6 = iVar9;
      iVar2 = *piVar11;
      piVar6[1] = iVar2;
      if (iVar2 != 0) {
        *(int **)(iVar2 + 8) = piVar6;
      }
      iVar2 = *(int *)(param_1 + 0x38);
      uVar19 = uVar19 + 1;
      piVar6[2] = 0;
      *piVar11 = (int)piVar6;
      *(int *)(param_1 + 0x38) = iVar2 + 1;
      piVar15 = piVar15 + 5;
    } while (uVar19 < puVar20[4]);
  }
  return;
}


// ==== FUN_0032cde0 @ 0032cde0 ====

void FUN_0032cde0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  uVar1 = *(uint *)param_2;
  uVar2 = ((uint *)param_2)[2];
  FUN_0032e218(param_1,param_2,0);
  iVar13 = (int)param_1;
  iVar3 = *(int *)(uVar1 * 4 + *(int *)(iVar13 + 0x44));
  uVar11 = *(uint *)(iVar3 + 8);
  uVar12 = 0;
  if (uVar11 != 0) {
    iVar3 = *(int *)(iVar3 + 0xc);
    iVar4 = *(int *)(iVar13 + 0x50);
    iVar9 = 0;
    do {
      uVar12 = uVar12 + 1;
      iVar9 = *(int *)(iVar9 + iVar3 + 0x60);
      iVar8 = iVar4;
      while (piVar6 = (int *)(iVar9 * 4 + iVar8), *piVar6 != 0) {
        piVar6 = (int *)*piVar6;
        if (piVar6[2] == 0) {
          *(int *)(*piVar6 * 4 + iVar8) = piVar6[1];
        }
        else {
          *(int *)(piVar6[2] + 4) = piVar6[1];
        }
        if (piVar6[1] == 0) {
          iVar8 = *(int *)(iVar13 + 0x10);
        }
        else {
          *(int *)(piVar6[1] + 8) = piVar6[2];
          iVar8 = *(int *)(iVar13 + 0x10);
        }
        piVar6[1] = iVar8;
        *(int **)(iVar13 + 0x10) = piVar6;
        piVar6 = (int *)piVar6[3];
        if (piVar6[2] == 0) {
          *(int *)(*piVar6 * 4 + *(int *)(iVar13 + 0x50)) = piVar6[1];
        }
        else {
          *(int *)(piVar6[2] + 4) = piVar6[1];
        }
        if (piVar6[1] == 0) {
          iVar5 = *(int *)(iVar13 + 0x10);
        }
        else {
          *(int *)(piVar6[1] + 8) = piVar6[2];
          iVar5 = *(int *)(iVar13 + 0x10);
        }
        iVar8 = *(int *)(iVar13 + 0x50);
        piVar6[1] = iVar5;
        *(int **)(iVar13 + 0x10) = piVar6;
      }
      iVar8 = *(int *)(iVar13 + 0x54);
      iVar9 = iVar9 * 4;
      iVar5 = *(int *)(iVar9 + iVar8);
      while (iVar5 != 0) {
        piVar6 = *(int **)(iVar9 + iVar8);
        if (piVar6[2] == 0) {
          *(int *)(*piVar6 * 4 + iVar8) = piVar6[1];
        }
        else {
          *(int *)(piVar6[2] + 4) = piVar6[1];
        }
        if (piVar6[1] == 0) {
          iVar8 = *(int *)(iVar13 + 0x10);
        }
        else {
          *(int *)(piVar6[1] + 8) = piVar6[2];
          iVar8 = *(int *)(iVar13 + 0x10);
        }
        piVar6[1] = iVar8;
        *(int **)(iVar13 + 0x10) = piVar6;
        piVar6 = (int *)piVar6[3];
        if (piVar6[2] == 0) {
          *(int *)(*piVar6 * 4 + *(int *)(iVar13 + 0x54)) = piVar6[1];
        }
        else {
          *(int *)(piVar6[2] + 4) = piVar6[1];
        }
        if (piVar6[1] == 0) {
          iVar5 = *(int *)(iVar13 + 0x10);
        }
        else {
          *(int *)(piVar6[1] + 8) = piVar6[2];
          iVar5 = *(int *)(iVar13 + 0x10);
        }
        iVar8 = *(int *)(iVar13 + 0x54);
        piVar6[1] = iVar5;
        *(int **)(iVar13 + 0x10) = piVar6;
        iVar5 = *(int *)(iVar9 + iVar8);
        *(int *)(iVar13 + 0x38) = *(int *)(iVar13 + 0x38) + -1;
      }
      iVar9 = uVar12 * 0x70;
    } while (uVar12 < uVar11);
  }
  FUN_0032b3b0(*(undefined4 *)(uVar1 * 4 + *(int *)(iVar13 + 0x44)),*(undefined4 *)(iVar13 + 0x18));
  if ((*(uint *)((uVar1 >> 5) * 4 + *(int *)(iVar13 + 0x6c)) >> (uVar1 & 0x1f) & 1) != 0) {
    FUN_00333808(*(undefined4 *)(iVar13 + 0x40),uVar1);
  }
  uVar11 = 0;
  if (uVar2 != 0) {
    iVar3 = *(int *)(iVar13 + 0x84);
    puVar10 = (uint *)(*(int *)(*(int *)(uVar1 * 4 + *(int *)(iVar13 + 0x44)) + 0xc) + 0x60);
    do {
      uVar12 = *puVar10;
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 0x1c;
      puVar7 = (uint *)((uVar12 >> 5) * 4 + iVar3);
      *puVar7 = *puVar7 & ~(1 << (uVar12 & 0x1f));
    } while (uVar11 < uVar2);
  }
  puVar10 = (uint *)((uVar1 >> 5) * 4 + *(int *)(iVar13 + 0x60));
  *puVar10 = *puVar10 & ~(1 << (uVar1 & 0x1f));
  *(int *)(iVar13 + 0x30) = *(int *)(iVar13 + 0x30) + -1;
  *(uint *)(iVar13 + 0x34) = *(int *)(iVar13 + 0x34) - uVar2;
  return;
}


// ==== FUN_0032d108 @ 0032d108 ====

void FUN_0032d108(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x4c);
  if (uVar1 != 0) {
    iVar7 = 0x10;
    do {
      iVar4 = uVar6 * 0x10;
      uVar2 = uVar6 & 1;
      uVar6 = uVar6 + 1;
      *(int *)(iVar4 + *(int *)(param_1 + 0x4c) + 4) = *(int *)(param_1 + 0x4c) + iVar7;
      iVar7 = iVar7 + 0x10;
      *(uint *)(iVar4 + *(int *)(param_1 + 0x4c) + 0xc) =
           *(int *)(param_1 + 0x4c) + (uVar6 + uVar2 * -2) * 0x10;
    } while (uVar6 < uVar1);
  }
  iVar7 = *(int *)(param_1 + 0x68);
  puVar5 = *(undefined4 **)(param_1 + 0x60);
  *(undefined4 *)(*(int *)(param_1 + 0x2c) * 0x10 + *(int *)(param_1 + 0x4c) + -0xc) = 0;
  puVar3 = puVar5 + iVar7;
  if (puVar5 != puVar3) {
    *puVar5 = 0;
    while (puVar5 = puVar5 + 1, puVar5 != puVar3) {
      *puVar5 = 0;
    }
  }
  puVar5 = *(undefined4 **)(param_1 + 0x84);
  puVar3 = puVar5 + *(int *)(param_1 + 0x8c);
  if (puVar5 == puVar3) {
    iVar7 = *(int *)(param_1 + 0xb0);
  }
  else {
    *puVar5 = 0;
    while (puVar5 = puVar5 + 1, puVar5 != puVar3) {
      *puVar5 = 0;
    }
    iVar7 = *(int *)(param_1 + 0xb0);
  }
  puVar5 = *(undefined4 **)(param_1 + 0xa8);
  puVar3 = puVar5 + iVar7;
  if (puVar5 == puVar3) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    *puVar5 = 0;
    while (puVar5 = puVar5 + 1, puVar5 != puVar3) {
      *puVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


// ==== FUN_0032d248 @ 0032d248 ====

void FUN_0032d248(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  puVar5 = *(undefined4 **)(param_1 + 0xb4);
  puVar4 = puVar5 + *(int *)(param_1 + 0xbc);
  if (puVar5 == puVar4) {
    iVar6 = *(int *)(param_1 + 0xd4);
  }
  else {
    *puVar5 = 0;
    while (puVar5 = puVar5 + 1, puVar5 != puVar4) {
      *puVar5 = 0;
    }
    iVar6 = *(int *)(param_1 + 0xd4);
  }
  puVar5 = *(undefined4 **)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  puVar4 = puVar5 + iVar6;
  if (puVar5 == puVar4) {
    iVar6 = *(int *)(param_1 + 0x18);
  }
  else {
    *puVar5 = 0;
    while (puVar5 = puVar5 + 1, puVar5 != puVar4) {
      *puVar5 = 0;
    }
    iVar6 = *(int *)(param_1 + 0x18);
  }
  iVar11 = *(int *)(iVar6 + 0x29c);
  uVar1 = *(uint *)(iVar6 + 0x38c);
  if (iVar11 != iVar6 + 0x270) {
    iVar2 = *(int *)(param_1 + 0xa8);
    uVar3 = *(uint *)(iVar11 + 0x6c);
    while( true ) {
      iVar9 = (uVar3 >> 5) * 4;
      uVar10 = 1 << (uVar3 & 0x1f);
      puVar8 = (uint *)(iVar9 + iVar2);
      *puVar8 = *puVar8 | uVar10;
      if (*(uint *)(iVar11 + 0xac) < uVar1) {
        iVar7 = *(int *)(param_1 + 0xcc);
        *(undefined4 *)(uVar3 * 4 + *(int *)(param_1 + 0x5c)) = *(undefined4 *)(param_1 + 0xc);
        *(uint *)(param_1 + 0xc) = uVar3;
      }
      else {
        iVar7 = *(int *)(param_1 + 0xb4);
      }
      puVar8 = (uint *)(iVar9 + iVar7);
      *puVar8 = *puVar8 | uVar10;
      iVar11 = *(int *)(iVar11 + 0x2c);
      if (iVar11 == iVar6 + 0x270) break;
      uVar3 = *(uint *)(iVar11 + 0x6c);
    }
  }
  return;
}


// ==== FUN_0032d358 @ 0032d358 ====

void FUN_0032d358(undefined8 param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puStack_a0;
  uint uStack_9c;
  
  iVar10 = (int)param_1;
  puVar5 = *(undefined4 **)(iVar10 + 0x78);
  puVar3 = puVar5 + *(int *)(iVar10 + 0x80);
  if (puVar5 == puVar3) {
    puStack_a0 = *(uint **)(iVar10 + 0xa8);
  }
  else {
    *puVar5 = 0;
    while (puVar5 = puVar5 + 1, puVar5 != puVar3) {
      *puVar5 = 0;
    }
    puStack_a0 = *(uint **)(iVar10 + 0xa8);
  }
  uStack_9c = 0;
  do {
    uVar6 = *(uint *)(iVar10 + 0xac) & 0x1f;
    uVar7 = 1 << (uStack_9c & 0x1f);
    puVar4 = (uint *)((*(uint *)(iVar10 + 0xac) >> 5) * 4 + *(int *)(iVar10 + 0xa8));
    uVar9 = *puStack_a0 & uVar7;
    while (uVar9 == 0) {
      uVar7 = uVar7 << 1;
      uStack_9c = uStack_9c + 1;
      if (uStack_9c == 0x20) {
        uStack_9c = 0;
        uVar7 = 1;
        puVar8 = puStack_a0;
        do {
          puStack_a0 = puVar8 + 1;
          if (puVar4 < puStack_a0) {
            bVar2 = false;
            puStack_a0 = puVar4;
            uStack_9c = uVar6;
            goto LAB_0032d4a0;
          }
          puVar1 = puVar8 + 1;
          puVar8 = puStack_a0;
        } while (*puVar1 == 0);
      }
      uVar9 = *puStack_a0 & uVar7;
    }
    if ((puStack_a0 < puVar4) ||
       ((bVar2 = false, puStack_a0 == puVar4 && (bVar2 = false, uStack_9c < uVar6)))) {
      bVar2 = true;
    }
LAB_0032d4a0:
    if (!bVar2) {
      return;
    }
    uVar9 = ((int)puStack_a0 - *(int *)(iVar10 + 0xa8) >> 2) * 0x20 + uStack_9c;
    FUN_0032c5a0(param_1,*(undefined4 *)(uVar9 * 4 + *(int *)(iVar10 + 0x48)),uVar9);
    uVar7 = *(uint *)(uVar9 * 4 + *(int *)(iVar10 + 0x58));
    puVar8 = (uint *)((uVar9 >> 5) * 4 + *(int *)(iVar10 + 0xa8));
    puVar4 = (uint *)((uVar7 >> 5) * 4 + *(int *)(iVar10 + 0x78));
    *puVar4 = *puVar4 | 1 << (uVar7 & 0x1f);
    *puVar8 = *puVar8 & ~(1 << (uVar9 & 0x1f));
    uStack_9c = uStack_9c + 1;
    if (uStack_9c == 0x20) {
      uStack_9c = 0;
      puStack_a0 = puStack_a0 + 1;
    }
  } while( true );
}


// ==== FUN_0032d590 @ 0032d590 ====

void FUN_0032d590(undefined8 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puStack_c0;
  uint uStack_bc;
  undefined1 auStack_90 [32];
  
  iVar10 = (int)param_1;
  puStack_c0 = *(uint **)(iVar10 + 0x78);
  uStack_bc = 0;
  do {
    uVar6 = *(uint *)(iVar10 + 0x7c) & 0x1f;
    uVar8 = 1 << (uStack_bc & 0x1f);
    puVar4 = (uint *)((*(uint *)(iVar10 + 0x7c) >> 5) * 4 + *(int *)(iVar10 + 0x78));
    uVar9 = *puStack_c0 & uVar8;
    while (uVar9 == 0) {
      uVar8 = uVar8 << 1;
      uStack_bc = uStack_bc + 1;
      if (uStack_bc == 0x20) {
        uStack_bc = 0;
        uVar8 = 1;
        puVar7 = puStack_c0;
        do {
          puStack_c0 = puVar7 + 1;
          if (puVar4 < puStack_c0) {
            bVar3 = false;
            puStack_c0 = puVar4;
            uStack_bc = uVar6;
            goto LAB_0032d6a8;
          }
          puVar1 = puVar7 + 1;
          puVar7 = puStack_c0;
        } while (*puVar1 == 0);
      }
      uVar9 = *puStack_c0 & uVar8;
    }
    if ((puStack_c0 < puVar4) ||
       ((bVar3 = false, puStack_c0 == puVar4 && (bVar3 = false, uStack_bc < uVar6)))) {
      bVar3 = true;
    }
LAB_0032d6a8:
    if (!bVar3) {
      return;
    }
    uVar9 = ((int)puStack_c0 - *(int *)(iVar10 + 0x78) >> 2) * 0x20 + uStack_bc;
    if ((*(uint *)((uVar9 >> 5) * 4 + *(int *)(iVar10 + 0x6c)) >> (uVar9 & 0x1f) & 1) == 0) {
      lVar5 = FUN_0032c838(param_1,uVar9,auStack_90);
      if (lVar5 != 0) {
        FUN_003333a8(*(undefined4 *)(iVar10 + 0x40),uVar9,auStack_90);
      }
    }
    else {
      lVar5 = FUN_0032c838(param_1,uVar9,auStack_90);
      if (lVar5 == 0) {
        FUN_00333808(*(undefined4 *)(iVar10 + 0x40),uVar9);
      }
      else {
        uVar2 = *(undefined4 *)(iVar10 + 0x40);
        FUN_00333808(uVar2,uVar9);
        FUN_003333a8(uVar2,uVar9,auStack_90);
      }
    }
    uStack_bc = uStack_bc + 1;
    if (uStack_bc == 0x20) {
      uStack_bc = 0;
      puStack_c0 = puStack_c0 + 1;
    }
  } while( true );
}


// ==== FUN_0032d7c0 @ 0032d7c0 ====

void FUN_0032d7c0(undefined8 param_1)

{
  uint *puVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puStack_90;
  uint uStack_8c;
  
  iVar8 = (int)param_1;
  puStack_90 = *(uint **)(iVar8 + 0x78);
  uStack_8c = 0;
  do {
    uVar4 = *(uint *)(iVar8 + 0x7c) & 0x1f;
    uVar7 = 1 << (uStack_8c & 0x1f);
    puVar3 = (uint *)((*(uint *)(iVar8 + 0x7c) >> 5) * 4 + *(int *)(iVar8 + 0x78));
    uVar5 = *puStack_90 & uVar7;
    while (uVar5 == 0) {
      uVar7 = uVar7 << 1;
      uStack_8c = uStack_8c + 1;
      if (uStack_8c == 0x20) {
        uStack_8c = 0;
        uVar7 = 1;
        puVar6 = puStack_90;
        do {
          puStack_90 = puVar6 + 1;
          if (puVar3 < puStack_90) {
            bVar2 = false;
            puStack_90 = puVar3;
            uStack_8c = uVar4;
            goto LAB_0032d8d8;
          }
          puVar1 = puVar6 + 1;
          puVar6 = puStack_90;
        } while (*puVar1 == 0);
      }
      uVar5 = *puStack_90 & uVar7;
    }
    if ((puStack_90 < puVar3) ||
       ((bVar2 = false, puStack_90 == puVar3 && (bVar2 = false, uStack_8c < uVar4)))) {
      bVar2 = true;
    }
LAB_0032d8d8:
    if (!bVar2) {
      return;
    }
    uVar7 = ((int)puStack_90 - *(int *)(iVar8 + 0x78) >> 2) * 0x20 + uStack_8c;
    if ((*(uint *)((uVar7 >> 5) * 4 + *(int *)(iVar8 + 0x6c)) >> (uVar7 & 0x1f) & 1) != 0) {
      FUN_0032c0d8(param_1,uVar7,*(int *)(*(int *)(iVar8 + 0x40) + 0x34) + uVar7 * 0x20);
    }
    uStack_8c = uStack_8c + 1;
    if (uStack_8c == 0x20) {
      uStack_8c = 0;
      puStack_90 = puStack_90 + 1;
    }
  } while( true );
}


// ==== FUN_0032d990 @ 0032d990 ====

void FUN_0032d990(int param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  puVar10 = *(undefined4 **)(param_1 + 0xc0);
  puVar8 = puVar10 + *(int *)(param_1 + 200);
  if (puVar10 != puVar8) {
    *puVar10 = 0;
    while (puVar10 = puVar10 + 1, puVar10 != puVar8) {
      *puVar10 = 0;
    }
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar18 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18) = 0;
  uVar19 = 0;
  uVar17 = 0;
  if (uVar2 != 0xffffffff) {
    uVar16 = 0xffffffff;
    while( true ) {
      while (uVar2 == 0xffffffff) {
        uVar17 = uVar17 + 1;
        if (param_2 < uVar17) {
          return;
        }
        bVar1 = uVar16 == 0xffffffff;
        uVar2 = uVar16;
        uVar16 = 0xffffffff;
        if (bVar1) {
          return;
        }
      }
      uVar19 = uVar19 + 1;
      if ((param_4 < uVar19) && (uVar17 != 0)) break;
      iVar13 = (uVar2 >> 5) * 4;
      puVar11 = (uint *)(iVar13 + *(int *)(param_1 + 0xc0));
      uVar14 = 1 << (uVar2 & 0x1f);
      iVar9 = uVar2 * 4;
      iVar15 = *(int *)(param_1 + 0x5c);
      *puVar11 = *puVar11 | uVar14;
      puVar11 = (uint *)(iVar9 + iVar15);
      uVar3 = *puVar11;
      if (uVar17 != 0) {
        puVar12 = (uint *)(iVar13 + *(int *)(param_1 + 0xb4));
        uVar4 = *puVar12;
        if ((uVar4 >> (uVar2 & 0x1f) & 1) == 0) {
          *puVar11 = *(uint *)(param_1 + 8);
          *(uint *)(param_1 + 8) = uVar2;
        }
        else {
          *puVar12 = uVar4 & ~uVar14;
        }
      }
      iVar15 = *(int *)(iVar9 + *(int *)(param_1 + 0x50));
      if (iVar15 == 0) {
        iVar15 = *(int *)(param_1 + 0x54);
      }
      else {
        puVar11 = *(uint **)(iVar15 + 0xc);
        while( true ) {
          uVar2 = *puVar11;
          if ((*(uint *)((uVar2 >> 5) * 4 + *(int *)(param_1 + 0xc0)) >> (uVar2 & 0x1f) & 1) == 0) {
            uVar18 = uVar18 + 1;
            if (param_3 < uVar18) {
              return;
            }
            iVar13 = *(int *)(param_1 + 0x1c);
            uVar5 = *(undefined4 *)(uVar2 * 4 + *(int *)(param_1 + 0x48));
            iVar6 = *(int *)(iVar13 + 0x18);
            bVar1 = iVar6 != *(int *)(iVar13 + 0x14);
            uVar7 = *(undefined4 *)(iVar9 + *(int *)(param_1 + 0x48));
            if (bVar1) {
              *(int *)(iVar13 + 0x18) = iVar6 + 1;
              puVar10 = (undefined4 *)(iVar6 * 8 + *(int *)(iVar13 + 0x10));
              puVar10[1] = uVar7;
              *puVar10 = uVar5;
            }
            if (!bVar1) {
              return;
            }
            iVar13 = (uVar2 >> 5) * 4;
            uVar14 = uVar2 & 0x1f;
            if ((*(uint *)(iVar13 + *(int *)(param_1 + 0x9c)) >> uVar14 & 1) == 0) {
              puVar11 = (uint *)(iVar13 + *(int *)(param_1 + 0xcc));
              if ((*puVar11 >> uVar14 & 1) == 0) {
                *(uint *)(uVar2 * 4 + *(int *)(param_1 + 0x5c)) = uVar16;
                *puVar11 = *puVar11 | 1 << uVar14;
                iVar15 = *(int *)(iVar15 + 4);
                uVar16 = uVar2;
              }
              else {
                iVar15 = *(int *)(iVar15 + 4);
              }
            }
            else {
              iVar15 = *(int *)(iVar15 + 4);
            }
          }
          else {
            iVar15 = *(int *)(iVar15 + 4);
          }
          if (iVar15 == 0) break;
          puVar11 = *(uint **)(iVar15 + 0xc);
        }
        iVar15 = *(int *)(param_1 + 0x54);
      }
      iVar15 = *(int *)(iVar9 + iVar15);
      uVar2 = uVar3;
      if (iVar15 != 0) {
        iVar9 = *(int *)(param_1 + 0xc0);
        puVar11 = *(uint **)(iVar15 + 0xc);
        while( true ) {
          uVar3 = *puVar11;
          uVar14 = uVar3 & 0x1f;
          iVar13 = (uVar3 >> 5) * 4;
          if ((*(uint *)(iVar13 + iVar9) >> uVar14 & 1) == 0) {
            if ((*(uint *)(iVar13 + *(int *)(param_1 + 0x9c)) >> uVar14 & 1) == 0) {
              puVar11 = (uint *)(iVar13 + *(int *)(param_1 + 0xcc));
              if ((*puVar11 >> uVar14 & 1) == 0) {
                *(uint *)(uVar3 * 4 + *(int *)(param_1 + 0x5c)) = uVar16;
                *puVar11 = *puVar11 | 1 << uVar14;
                iVar15 = *(int *)(iVar15 + 4);
                uVar16 = uVar3;
              }
              else {
                iVar15 = *(int *)(iVar15 + 4);
              }
            }
            else {
              iVar15 = *(int *)(iVar15 + 4);
            }
          }
          else {
            iVar15 = *(int *)(iVar15 + 4);
          }
          if (iVar15 == 0) break;
          puVar11 = *(uint **)(iVar15 + 0xc);
        }
      }
    }
  }
  return;
}


// ==== FUN_0032dce8 @ 0032dce8 ====

void FUN_0032dce8(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puStack_a0;
  uint uStack_9c;
  
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == -1) {
    puStack_a0 = *(uint **)(param_1 + 0xb4);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48);
    while( true ) {
      FUN_0037cf60(*(undefined4 *)(*(int *)(*(int *)(iVar9 * 4 + iVar3) + 0x58) + 0x4c));
      iVar9 = *(int *)(iVar9 * 4 + *(int *)(param_1 + 0x5c));
      if (iVar9 == -1) break;
      iVar3 = *(int *)(param_1 + 0x48);
    }
    puStack_a0 = *(uint **)(param_1 + 0xb4);
  }
  uStack_9c = 0;
  do {
    uVar5 = *(uint *)(param_1 + 0xb8) & 0x1f;
    uVar8 = 1 << (uStack_9c & 0x1f);
    puVar4 = (uint *)((*(uint *)(param_1 + 0xb8) >> 5) * 4 + *(int *)(param_1 + 0xb4));
    uVar6 = *puStack_a0 & uVar8;
    while (uVar6 == 0) {
      uVar8 = uVar8 << 1;
      uStack_9c = uStack_9c + 1;
      if (uStack_9c == 0x20) {
        uStack_9c = 0;
        uVar8 = 1;
        puVar7 = puStack_a0;
        do {
          puStack_a0 = puVar7 + 1;
          if (puVar4 < puStack_a0) {
            bVar2 = false;
            puStack_a0 = puVar4;
            uStack_9c = uVar5;
            goto LAB_0032de58;
          }
          puVar1 = puVar7 + 1;
          puVar7 = puStack_a0;
        } while (*puVar1 == 0);
      }
      uVar6 = *puStack_a0 & uVar8;
    }
    if ((puStack_a0 < puVar4) ||
       ((bVar2 = false, puStack_a0 == puVar4 && (bVar2 = false, uStack_9c < uVar5)))) {
      bVar2 = true;
    }
LAB_0032de58:
    if (!bVar2) {
      return;
    }
    iVar9 = *(int *)(*(int *)((((int)puStack_a0 - *(int *)(param_1 + 0xb4) >> 2) * 0x20 + uStack_9c)
                              * 4 + *(int *)(param_1 + 0x48)) + 0x58);
    if ((*(uint *)(iVar9 + 0x8c) & 7) != 2) {
      FUN_0037cfd0(*(undefined4 *)(iVar9 + 0x4c));
    }
    uStack_9c = uStack_9c + 1;
    if (uStack_9c == 0x20) {
      uStack_9c = 0;
      puStack_a0 = puStack_a0 + 1;
    }
  } while( true );
}


// ==== FUN_0032df00 @ 0032df00 ====
// GLOBAL DAT_0045cc30 undefined4
// GLOBAL DAT_0045cc34 undefined4
// GLOBAL DAT_0045cc38 undefined4
// GLOBAL DAT_0045cc3c undefined4
// GLOBAL DAT_0045cc40 undefined4
// GLOBAL DAT_0045cc44 undefined4
// GLOBAL DAT_0045cc48 undefined4
// GLOBAL DAT_0045cc4c undefined4
// GLOBAL DAT_0045cc50 undefined4
// GLOBAL DAT_0045cc54 undefined4
// GLOBAL DAT_0045cc58 undefined4
// GLOBAL DAT_0045cc5c undefined4
// GLOBAL DAT_0045cc60 undefined4
// GLOBAL DAT_0045cc64 undefined4
// GLOBAL DAT_0045cc68 undefined4
// GLOBAL DAT_0045cc6c undefined4

void FUN_0032df00(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9060,2);
      FUN_00100230(&gp0xffff9058,2);
    }
    else {
      FUN_00100228(&gp0xffff9058);
      FUN_00100258(&gp0xffff9060);
      DAT_0045cc30 = 0x3fc90fdb;
      DAT_0045cc34 = 0xbe22f983;
      DAT_0045cc38 = 0x4b400000;
      DAT_0045cc3c = uStack_44;
      DAT_0045cc40 = 0xbe22f983;
      DAT_0045cc44 = 0x3f000000;
      DAT_0045cc48 = 0x3e800000;
      DAT_0045cc4c = uStack_34;
      DAT_0045cc50 = 0xc2992661;
      DAT_0045cc54 = 0xc2255de0;
      DAT_0045cc58 = 0x42a33457;
      DAT_0045cc5c = uStack_24;
      DAT_0045cc60 = 0x421ed7b7;
      DAT_0045cc64 = 0x40c90fda;
      DAT_0045cc68 = 0;
      DAT_0045cc6c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0032e048 @ 0032e048 ====

undefined8
FUN_0032e048(float param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pauVar1 = (undefined1 (*) [16])param_2;
  _lqc2(pauVar1[1]);
  fVar2 = param_1 * 1000.0;
  _lqc2(*pauVar1);
  *(undefined4 *)(pauVar1[2] + 4) = param_3;
  *(undefined4 *)(pauVar1[2] + 0xc) = param_5;
  auVar4 = _qmtc2(fVar2);
  auVar6 = _qmtc2(fVar2);
  auVar4 = _vaddbc(in_vf0,auVar4);
  _vmove(auVar4);
  *(undefined4 *)pauVar1[3] = param_4;
  fVar3 = -fVar2;
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar4 = _sqc2(auVar4);
  pauVar1[1] = auVar4;
  auVar4 = _sqc2(auVar6);
  pauVar1[1] = auVar4;
  auVar4 = _qmtc2(fVar3);
  auVar6 = _qmtc2(fVar3);
  auVar4 = _vaddbc(in_vf0,auVar4);
  auVar5 = _qmtc2(fVar3);
  _vmove(auVar4);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar4 = _sqc2(auVar4);
  *pauVar1 = auVar4;
  auVar4 = _sqc2(auVar6);
  *pauVar1 = auVar4;
  auVar6 = _qmtc2(fVar2);
  auVar4 = _vaddbc(in_vf0,auVar5);
  auVar6 = _vaddbc(in_vf0,auVar6);
  *(undefined4 *)(pauVar1[3] + 4) = param_7;
  *(undefined4 *)(pauVar1[3] + 8) = param_6;
  *(float *)pauVar1[2] = param_1;
  auVar4 = _sqc2(auVar4);
  *pauVar1 = auVar4;
  auVar4 = _sqc2(auVar6);
  pauVar1[1] = auVar4;
  *(undefined4 *)(pauVar1[2] + 8) = param_4;
  return param_2;
}


// ==== FUN_0032e0e0 @ 0032e0e0 ====

undefined8 FUN_0032e0e0(undefined8 param_1)

{
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  FUN_0032bc70(auStack_40);
  ((undefined4 *)param_1)[1] = 0x80;
  *(undefined4 *)param_1 = uStack_2c;
  return param_1;
}


// ==== FUN_0032e120 @ 0032e120 ====

void FUN_0032e120(int param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 auStack_40 [4];
  
  puVar2 = (undefined4 *)param_2;
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0032faf0();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (param_2 == 0) {
    FUN_0037ce60(*(undefined4 *)(param_1 + 0x18),0,0,0);
  }
  else {
    FUN_0037ce60(*(undefined4 *)(param_1 + 0x18),puVar2[4],puVar2[2],puVar2[1]);
    auStack_40[0] = puVar2[5];
    uVar1 = FUN_0032e710(auStack_40,*puVar2,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  return;
}


// ==== FUN_0032e1b0 @ 0032e1b0 ====

uint FUN_0032e1b0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    if ((uVar1 < *(uint *)(param_1 + 0x28)) &&
       (*(uint **)(uVar1 * 4 + *(int *)(param_1 + 0x44)) == param_2)) {
      uVar2 = *(uint *)((uVar1 >> 5) * 4 + *(int *)(param_1 + 0x60)) >> (uVar1 & 0x1f) & 1;
    }
  }
  return uVar2;
}


// ==== FUN_0032e218 @ 0032e218 ====

void FUN_0032e218(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      uVar2 = uVar2 + 1;
      FUN_0032e2a0(param_1,*(int *)(param_2 + 0xc) + iVar3,param_3);
      iVar3 = iVar3 + 0x70;
    } while (uVar2 < uVar1);
  }
  return;
}


// ==== FUN_0032e2a0 @ 0032e2a0 ====

void FUN_0032e2a0(int param_1,int param_2,long param_3)

{
  uint *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (uint *)((*(uint *)(param_2 + 0x60) >> 5) * 4 + *(int *)(param_1 + 0xa8));
    *puVar1 = *puVar1 | 1 << (*(uint *)(param_2 + 0x60) & 0x1f);
    return;
  }
  puVar1 = (uint *)((*(uint *)(param_2 + 0x60) >> 5) * 4 + *(int *)(param_1 + 0xa8));
  *puVar1 = *puVar1 & ~(1 << (*(uint *)(param_2 + 0x60) & 0x1f));
  return;
}


// ==== FUN_0032e320 @ 0032e320 ====

undefined4 FUN_0032e320(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// ==== FUN_0032e328 @ 0032e328 ====

void FUN_0032e328(undefined8 param_1)

{
  int iVar1;
  
  FUN_0032d248();
  FUN_0032d358(param_1);
  FUN_0032d590(param_1);
  FUN_0032d7c0(param_1);
  iVar1 = (int)param_1;
  FUN_0032d990(param_1,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x24),
               *(undefined4 *)(iVar1 + 0x20));
  FUN_0032dce8(param_1);
  FUN_0032faf8(*(undefined4 *)(iVar1 + 0x1c));
  FUN_0037c4e0(*(undefined4 *)(iVar1 + 0x18));
  return;
}


// ==== FUN_0032e390 @ 0032e390 ====

void FUN_0032e390(void)

{
  FUN_0032df00(1,0xffff);
  return;
}


// ==== FUN_0032e3b0 @ 0032e3b0 ====

void FUN_0032e3b0(void)

{
  FUN_0032df00(0,0xffff);
  return;
}


// ==== FUN_0032e3d0 @ 0032e3d0 ====

undefined8 FUN_0032e3d0(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  int iStack_50;
  int iStack_4c;
  int iStack_40;
  int iStack_3c;
  
  FUN_0037c190(&iStack_50,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
  FUN_0032fa70(&iStack_40,*(undefined4 *)(param_2 + 0x2c));
  puVar1 = (undefined8 *)param_1;
  *puVar1 = CONCAT44(iStack_50,iStack_4c);
  puVar1[1] = CONCAT44(iStack_40,iStack_3c);
  *(uint *)(puVar1 + 2) =
       ((iStack_4c + 0x17U & -iStack_4c) + iStack_50 + -1 + iStack_3c & -iStack_3c) + iStack_40;
  return param_1;
}


// ==== FUN_0032e490 @ 0032e490 ====
// GLOBAL DAT_0045cc70 undefined4
// GLOBAL DAT_0045cc74 undefined4
// GLOBAL DAT_0045cc78 undefined4
// GLOBAL DAT_0045cc7c undefined4
// GLOBAL DAT_0045cc80 undefined4
// GLOBAL DAT_0045cc84 undefined4
// GLOBAL DAT_0045cc88 undefined4
// GLOBAL DAT_0045cc8c undefined4
// GLOBAL DAT_0045cc90 undefined4
// GLOBAL DAT_0045cc94 undefined4
// GLOBAL DAT_0045cc98 undefined4
// GLOBAL DAT_0045cc9c undefined4
// GLOBAL DAT_0045cca0 undefined4
// GLOBAL DAT_0045cca4 undefined4
// GLOBAL DAT_0045cca8 undefined4
// GLOBAL DAT_0045ccac undefined4

void FUN_0032e490(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9070,2);
      FUN_00100230(&gp0xffff9068,2);
    }
    else {
      FUN_00100228(&gp0xffff9068);
      FUN_00100258(&gp0xffff9070);
      DAT_0045cc70 = 0x3fc90fdb;
      DAT_0045cc74 = 0xbe22f983;
      DAT_0045cc78 = 0x4b400000;
      DAT_0045cc7c = uStack_44;
      DAT_0045cc80 = 0xbe22f983;
      DAT_0045cc84 = 0x3f000000;
      DAT_0045cc88 = 0x3e800000;
      DAT_0045cc8c = uStack_34;
      DAT_0045cc90 = 0xc2992661;
      DAT_0045cc94 = 0xc2255de0;
      DAT_0045cc98 = 0x42a33457;
      DAT_0045cc9c = uStack_24;
      DAT_0045cca0 = 0x421ed7b7;
      DAT_0045cca4 = 0x40c90fda;
      DAT_0045cca8 = 0;
      DAT_0045ccac = uStack_14;
    }
  }
  return;
}


// ==== FUN_0032e5d8 @ 0032e5d8 ====

undefined8 FUN_0032e5d8(undefined8 param_1)

{
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  
  FUN_0032e3d0(auStack_40);
  ((undefined4 *)param_1)[1] = 0x80;
  *(undefined4 *)param_1 = uStack_30;
  return param_1;
}


// ==== FUN_0032e618 @ 0032e618 ====

undefined4 * FUN_0032e618(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_60;
  int iStack_50;
  int aiStack_4c [3];
  
  FUN_0032e3d0(&iStack_70);
  puVar1 = (undefined4 *)*param_1;
  uVar3 = iStack_70 + 0x17U & -iStack_70;
  iStack_50 = (int)puVar1 + uVar3;
  aiStack_4c[0] = iStack_50;
  uVar2 = FUN_0037c1f0(aiStack_4c,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
  *puVar1 = *(undefined4 *)(param_2 + 0x2c);
  puVar1[4] = uVar2;
  puVar1[1] = *(undefined4 *)(param_2 + 0x38);
  puVar1[5] = (int)puVar1 + (uVar3 + iStack_6c + -1 + iStack_68 & -iStack_68);
  puVar1[2] = *(undefined4 *)(param_2 + 0x34);
  puVar1[3] = uStack_60;
  return puVar1;
}


// ==== FUN_0032e6d0 @ 0032e6d0 ====

void FUN_0032e6d0(void)

{
  FUN_0032e490(1,0xffff);
  return;
}


// ==== FUN_0032e6f0 @ 0032e6f0 ====

void FUN_0032e6f0(void)

{
  FUN_0032e490(0,0xffff);
  return;
}


// ==== FUN_0032e710 @ 0032e710 ====

undefined4 * FUN_0032e710(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  int iStack_7c;
  int aiStack_70 [4];
  
  FUN_0033b610(auStack_a0,0x100,0x100);
  uStack_90 = 8;
  uStack_8c = 4;
  FUN_0033b610(&iStack_80,0x100,0x100);
  puVar1 = (undefined4 *)*param_1;
  puVar1[3] = param_3;
  puVar1[5] = param_2;
  aiStack_70[0] = (int)puVar1 + (iStack_7c + 0x1fU & -iStack_7c);
  puVar1[6] = 0;
  puVar1[2] = aiStack_70[0];
  puVar1[4] = aiStack_70[0] + iStack_80;
  puVar1[7] = 0;
  uVar2 = FUN_0033aee8(aiStack_70,0x100,0x100);
  *puVar1 = uVar2;
  return puVar1;
}


// ==== FUN_0032e810 @ 0032e810 ====

undefined8 FUN_0032e810(undefined8 param_1,int *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  float fVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined1 **ppuVar15;
  undefined1 *puVar16;
  bool bVar17;
  int *piVar18;
  float fVar19;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 *puStack_30;
  int aiStack_2c [3];
  
  puStack_30 = auStack_1e0;
  piVar18 = (int *)*param_2;
  iVar13 = piVar18[0x16];
  aiStack_2c[0] = *piVar18;
  iVar3 = *(int *)param_2[1];
  if (iVar13 == 0) {
    auStack_1e0 = *(undefined1 (*) [16])(piVar18 + 4);
    auStack_1d0 = *(undefined1 (*) [16])(piVar18 + 8);
    auStack_1c0 = *(undefined1 (*) [16])(piVar18 + 0xc);
    auStack_1b0 = *(undefined1 (*) [16])(piVar18 + 0x10);
  }
  else {
    pauVar4 = (undefined1 (*) [16])piVar18[0x14];
    if (pauVar4 == (undefined1 (*) [16])0x0) {
      auStack_1e0 = *(undefined1 (*) [16])(iVar13 + 0x40);
      auStack_1d0 = *(undefined1 (*) [16])(iVar13 + 0x50);
      auStack_1c0 = *(undefined1 (*) [16])(iVar13 + 0x60);
      auStack_1b0 = *(undefined1 (*) [16])(iVar13 + 0x10);
    }
    else {
      auVar22 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x40));
      pauVar1 = (undefined1 (*) [16])(iVar13 + 0x50);
      uStack_190 = *(undefined4 *)*pauVar1;
      uStack_18c = *(undefined4 *)(iVar13 + 0x54);
      uStack_188 = *(undefined4 *)(iVar13 + 0x58);
      uStack_184 = *(undefined4 *)(iVar13 + 0x5c);
      pauVar2 = (undefined1 (*) [16])(iVar13 + 0x60);
      uStack_180 = *(undefined4 *)*pauVar2;
      uStack_17c = *(undefined4 *)(iVar13 + 100);
      uStack_178 = *(undefined4 *)(iVar13 + 0x68);
      uStack_174 = *(undefined4 *)(iVar13 + 0x6c);
      uVar8 = *(undefined8 *)*(undefined1 (*) [16])(iVar13 + 0x10);
      uStack_168 = *(undefined4 *)(iVar13 + 0x18);
      uStack_164 = *(undefined4 *)(iVar13 + 0x1c);
      auStack_1a0 = _sqc2(auVar22);
      uStack_170 = (undefined4)uVar8;
      uStack_16c = (undefined4)((ulong)uVar8 >> 0x20);
      auVar21 = _lqc2(*pauVar2);
      auVar20 = _lqc2(*pauVar4);
      auVar25 = _lqc2(*pauVar1);
      _vmulabc(auVar22,auVar20);
      _vmaddabc(auVar25,auVar20);
      auVar26 = _vmaddbc(auVar21,auVar20);
      auStack_160 = _sqc2(auVar26);
      auVar21 = _lqc2(*pauVar2);
      auVar20 = _lqc2(pauVar4[1]);
      auVar25 = _lqc2(*pauVar1);
      _vmulabc(auVar22,auVar20);
      _vmaddabc(auVar25,auVar20);
      auVar24 = _vmaddbc(auVar21,auVar20);
      auStack_150 = _sqc2(auVar24);
      auVar21 = _lqc2(*pauVar2);
      auVar20 = _lqc2(pauVar4[2]);
      auVar25 = _lqc2(*pauVar1);
      _vmulabc(auVar22,auVar20);
      _vmaddabc(auVar25,auVar20);
      auVar25 = _vmaddbc(auVar21,auVar20);
      auStack_140 = _sqc2(auVar25);
      auVar27 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x10));
      auVar23 = _lqc2(pauVar4[3]);
      auVar21 = _lqc2(*pauVar1);
      auVar20 = _lqc2(*pauVar2);
      _vmulabc(auVar22,auVar23);
      _vmaddabc(auVar21,auVar23);
      _vmaddabc(auVar20,auVar23);
      auVar20 = _vmaddbc(auVar27,in_vf0);
      auStack_1e0 = _sqc2(auVar26);
      auStack_1d0 = _sqc2(auVar24);
      auStack_1c0 = _sqc2(auVar25);
      auStack_1b0 = _sqc2(auVar20);
      auStack_130 = _sqc2(auVar20);
    }
  }
  iVar5 = param_2[1];
  iVar6 = *(int *)(iVar5 + 0x58);
  if (iVar6 == 0) {
    auStack_120 = *(undefined1 (*) [16])(iVar5 + 0x10);
    auStack_110 = *(undefined1 (*) [16])(iVar5 + 0x20);
    auStack_100 = *(undefined1 (*) [16])(iVar5 + 0x30);
    auStack_f0 = *(undefined1 (*) [16])(iVar5 + 0x40);
  }
  else {
    pauVar4 = *(undefined1 (**) [16])(iVar5 + 0x50);
    if (pauVar4 == (undefined1 (*) [16])0x0) {
      auStack_f0 = *(undefined1 (*) [16])(iVar6 + 0x10);
      auStack_120 = *(undefined1 (*) [16])(iVar6 + 0x40);
      auStack_110 = *(undefined1 (*) [16])(iVar6 + 0x50);
      auStack_100 = *(undefined1 (*) [16])(iVar6 + 0x60);
    }
    else {
      auVar25 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x40));
      uStack_b0 = *(undefined4 *)*(undefined1 (*) [16])(iVar6 + 0x10);
      uStack_ac = *(undefined4 *)(iVar6 + 0x14);
      uStack_a8 = *(undefined4 *)(iVar6 + 0x18);
      uStack_a4 = *(undefined4 *)(iVar6 + 0x1c);
      pauVar1 = (undefined1 (*) [16])(iVar6 + 0x50);
      auVar9 = *(undefined1 (*) [12])*pauVar1;
      uStack_c4 = *(undefined4 *)(iVar6 + 0x5c);
      pauVar2 = (undefined1 (*) [16])(iVar6 + 0x60);
      auVar10 = *(undefined1 (*) [12])*pauVar2;
      uStack_b4 = *(undefined4 *)(iVar6 + 0x6c);
      auStack_e0 = _sqc2(auVar25);
      uStack_d0 = auVar9._0_4_;
      uStack_cc = auVar9._4_4_;
      uStack_c8 = auVar9._8_4_;
      uStack_c0 = auVar10._0_4_;
      uStack_bc = auVar10._4_4_;
      uStack_b8 = auVar10._8_4_;
      auVar21 = _lqc2(*pauVar2);
      auVar20 = _lqc2(*pauVar4);
      auVar22 = _lqc2(*pauVar1);
      _vmulabc(auVar25,auVar20);
      _vmaddabc(auVar22,auVar20);
      auVar26 = _vmaddbc(auVar21,auVar20);
      auStack_a0 = _sqc2(auVar26);
      auVar21 = _lqc2(*pauVar2);
      auVar20 = _lqc2(pauVar4[1]);
      auVar22 = _lqc2(*pauVar1);
      _vmulabc(auVar25,auVar20);
      _vmaddabc(auVar22,auVar20);
      auVar24 = _vmaddbc(auVar21,auVar20);
      auStack_90 = _sqc2(auVar24);
      auVar21 = _lqc2(*pauVar2);
      auVar20 = _lqc2(pauVar4[2]);
      auVar22 = _lqc2(*pauVar1);
      _vmulabc(auVar25,auVar20);
      _vmaddabc(auVar22,auVar20);
      auVar22 = _vmaddbc(auVar21,auVar20);
      auStack_80 = _sqc2(auVar22);
      auVar27 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x10));
      auVar23 = _lqc2(pauVar4[3]);
      auVar21 = _lqc2(*pauVar1);
      auVar20 = _lqc2(*pauVar2);
      _vmulabc(auVar25,auVar23);
      _vmaddabc(auVar21,auVar23);
      _vmaddabc(auVar20,auVar23);
      auVar20 = _vmaddbc(auVar27,in_vf0);
      auStack_120 = _sqc2(auVar26);
      auStack_110 = _sqc2(auVar24);
      auStack_100 = _sqc2(auVar22);
      auStack_f0 = _sqc2(auVar20);
      auStack_70 = _sqc2(auVar20);
    }
  }
  auVar21 = _lqc2(*(undefined1 (*) [16])(((int *)param_2[1])[0x16] + 0x20));
  auVar20 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x20));
  auVar20 = _vsub(auVar20,auVar21);
  piVar18 = (int *)param_1;
  iVar13 = piVar18[3];
  auVar20 = _vmul(auVar20,auVar20);
  auVar21 = _vaddbc(auVar20,auVar20);
  auVar20 = _vaddbc(auVar21,auVar20);
  auVar21 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x360));
  auVar25 = _vmul(auVar21,auVar21);
  _vsqrt(auVar20);
  auVar20 = _vaddbc(in_vf0,in_vf0);
  uVar28 = _vwaitq();
  auVar20 = _vmulq(auVar20,uVar28);
  auVar20 = _qmfc2(auVar20._0_4_);
  auVar21 = _vaddbc(auVar25,auVar25);
  fVar11 = auVar20._0_4_;
  auVar20 = _vaddbc(auVar21,auVar25);
  _vsqrt(auVar20);
  auVar20 = _vaddbc(in_vf0,in_vf0);
  uVar28 = _vwaitq();
  auVar20 = _vmulq(auVar20,uVar28);
  auVar20 = _qmfc2(auVar20._0_4_);
  fVar19 = auVar20._0_4_ / (*(float *)(iVar13 + 900) * 0.5 * *(float *)(iVar13 + 900));
  if (*(float *)(iVar13 + 0x388) <= fVar11) {
    fVar11 = *(float *)(iVar13 + 0x388);
  }
  if (fVar11 <= fVar19) {
    fVar11 = fVar19;
  }
  if ((**(int **)(aiStack_2c[0] + 0x58) == 5) || (**(int **)(iVar3 + 0x58) == 5)) {
    auVar20 = _lqc2(auStack_120);
    auVar21 = _qmtc2(0x3f800000);
    auVar20 = _vsubbc(auVar20,auVar21);
    auVar20 = _qmfc2(auVar20._0_4_);
    bVar17 = false;
    puVar16 = auStack_120;
    fStack_40 = ABS(auVar20._0_4_);
    if (fStack_40 < 1.1920929e-07) {
      auVar21 = _qmtc2(0x3f800000);
      auVar20 = _lqc2(auStack_110);
      auVar20 = _vsubbc(auVar20,auVar21);
      auStack_60 = _sqc2(auVar20);
      fStack_3c = ABS((float)auStack_60._4_4_);
      auVar20 = _lqc2(auStack_f0);
      if (fStack_3c < 1.1920929e-07) {
        auVar21 = _vmul(auVar20,auVar20);
        auVar20 = _vaddbc(auVar21,auVar21);
        auVar20 = _vaddbc(auVar20,auVar21);
        auVar20 = _qmfc2(auVar20._0_4_);
        if (auVar20._0_4_ < 1.1754944e-38) {
          bVar17 = true;
        }
      }
    }
    auVar20 = _lqc2(auStack_1e0);
    auVar21 = _qmtc2(0x3f800000);
    auVar20 = _vsubbc(auVar20,auVar21);
    auVar20 = _qmfc2(auVar20._0_4_);
    if (bVar17) {
      puVar16 = (undefined1 *)0x0;
    }
    bVar17 = false;
    fStack_38 = ABS(auVar20._0_4_);
    if (fStack_38 < 1.1920929e-07) {
      auVar21 = _qmtc2(0x3f800000);
      auVar20 = _lqc2(auStack_1d0);
      auVar20 = _vsubbc(auVar20,auVar21);
      auStack_50 = _sqc2(auVar20);
      fStack_34 = ABS((float)auStack_50._4_4_);
      auVar20 = _lqc2(auStack_1b0);
      if (fStack_34 < 1.1920929e-07) {
        auVar21 = _vmul(auVar20,auVar20);
        auVar20 = _vaddbc(auVar21,auVar21);
        auVar20 = _vaddbc(auVar20,auVar21);
        auVar20 = _qmfc2(auVar20._0_4_);
        if (auVar20._0_4_ < 1.1754944e-38) {
          bVar17 = true;
        }
      }
      piVar7 = (int *)*piVar18;
    }
    else {
      piVar7 = (int *)*piVar18;
    }
    ppuVar15 = &puStack_30;
    iVar13 = piVar18[7];
    if (bVar17) {
      ppuVar15 = (undefined1 **)0x0;
    }
    *piVar7 = (int)aiStack_2c;
    piVar7[1] = (int)ppuVar15;
    piVar7[2] = 1;
    piVar7[0xe] = iVar3;
    piVar7[0xf] = (int)puVar16;
    piVar7[5] = (int)fVar11;
    piVar7[4] = iVar13;
    piVar7[3] = 0;
    piVar7[7] = 0;
    iVar13 = FUN_0033b688(piVar7);
    piVar18[1] = iVar13;
  }
  else {
    iVar13 = piVar18[7];
    if (((iVar13 == 0) ||
        (uVar12 = *(int *)(aiStack_2c[0] + 0x50) * *(int *)(iVar13 + 4) + *(int *)(iVar3 + 0x50),
        (*(uint *)(iVar13 + (uVar12 >> 5) * 4 + 0xc) & 1 << (uVar12 & 0x1f)) == 0)) &&
       (lVar14 = FUN_0032f1a0(param_1,*(undefined4 *)(*piVar18 + 0x30),aiStack_2c[0],auStack_1e0,
                              iVar3,auStack_120), lVar14 != 0)) {
      piVar18[1] = 1;
    }
    else {
      piVar18[1] = 0;
    }
  }
  return 1;
}


// ==== FUN_0032ed80 @ 0032ed80 ====

/* WARNING: Removing unreachable block (ram,0x0032f074) */

undefined4 FUN_0032ed80(int *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 in_vf0 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_vf7 [16];
  undefined1 in_vf8 [16];
  float fStack_17c;
  float fStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  
  pfVar1 = *(float **)(*param_2 + 0x5c);
  pfVar2 = *(float **)(param_2[1] + 0x5c);
  fVar18 = *pfVar1;
  iVar3 = *(int *)(*param_2 + 0x58);
  iVar4 = *(int *)(param_2[1] + 0x58);
  if (fVar18 <= *pfVar2) {
    fVar18 = *pfVar2;
  }
  fVar19 = pfVar1[1];
  if (fVar19 <= pfVar2[1]) {
    fVar19 = pfVar2[1];
  }
  fVar20 = pfVar1[2];
  if (pfVar2[2] <= fVar20) {
    fVar20 = pfVar2[2];
  }
  uVar5 = param_1[1];
  uVar12 = 0;
  iVar6 = *(int *)(*param_1 + 0x30);
  if (uVar5 != 0) {
    iVar11 = 0;
    iVar10 = iVar6;
    do {
      uVar17 = 0;
      if (*(int *)(iVar10 + 0x410) != 0) {
        pauVar14 = (undefined1 (*) [16])(iVar11 + iVar6 + 0x2f0);
        pauVar16 = (undefined1 (*) [16])(iVar11 + iVar6 + 0x370);
        do {
          iVar7 = param_1[3];
          iVar8 = *(int *)(iVar7 + 0x30);
          if (iVar8 == *(int *)(iVar7 + 0x40)) {
            puVar13 = (undefined8 *)0x0;
          }
          else {
            *(int *)(iVar7 + 0x30) = iVar8 + 1;
            puVar13 = (undefined8 *)(*(int *)(iVar7 + 0xc) + *(int *)(iVar7 + 0x28) * iVar8);
          }
          _vmove(in_vf7);
          if (puVar13 == (undefined8 *)0x0) {
            return 0;
          }
          *(int *)((int)puVar13 + 0xc) = iVar4;
          *(int *)((int)puVar13 + 0x1c) = iVar3;
          uVar9 = *(undefined4 *)(pauVar14[8] + 8);
          *puVar13 = *(undefined8 *)pauVar14[8];
          *(undefined4 *)(puVar13 + 1) = uVar9;
          pauVar15 = (undefined1 (*) [16])(iVar10 + 0x2b0);
          uVar9 = *(undefined4 *)(*pauVar14 + 8);
          puVar13[2] = *(undefined8 *)*pauVar14;
          *(undefined4 *)(puVar13 + 3) = uVar9;
          auVar22 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
          auVar23 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x10));
          auVar24 = _lqc2(*pauVar14);
          auVar21 = _lqc2(pauVar14[8]);
          auVar25 = _vsub(auVar24,auVar22);
          auVar21 = _vsub(auVar21,auVar23);
          auVar22 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x30));
          auVar23 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x30));
          _vmove(in_vf8);
          _vopmula(auVar23,auVar21);
          auVar24 = _vopmsub(auVar21,auVar23);
          _vopmula(auVar22,auVar25);
          auVar22 = _vopmsub(auVar25,auVar22);
          auVar21 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x20));
          auVar23 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x20));
          auVar24 = _vadd(auVar24,auVar21);
          auVar21 = _vadd(auVar22,auVar23);
          in_vf7 = _vmove(auVar24);
          in_vf8 = _vmove(auVar21);
          auVar21 = _vsub(in_vf8,in_vf7);
          auVar21 = _sqc2(auVar21);
          uStack_160 = auVar21._0_8_;
          uStack_158 = auVar21._8_4_;
          puVar13[10] = uStack_160;
          *(undefined4 *)(puVar13 + 0xb) = uStack_158;
          if ((*(uint *)(iVar3 + 0x8c) & 4) == 0) {
            auVar21 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x10));
            auVar22 = _lqc2(*pauVar16);
          }
          else {
            auVar21 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
            auVar22 = _lqc2(*pauVar14);
          }
          auVar21 = _vsub(auVar22,auVar21);
          auVar22 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x2b0));
          _vopmula(auVar21,auVar22);
          auVar23 = _vopmsub(auVar22,auVar21);
          auVar21 = _vmul(auVar23,auVar23);
          auVar22 = _vaddbc(auVar21,auVar21);
          auVar21 = _vaddbc(auVar22,auVar21);
          auVar21 = _qmfc2(auVar21._0_4_);
          fStack_17c = auVar21._0_4_;
          if (fStack_17c < 1e-06) {
            auVar22 = _lqc2(*pauVar15);
            auVar21 = _vmulbc(auVar22,auVar22);
            auVar21 = _qmfc2(auVar21._0_4_);
            fStack_17c = auVar21._0_4_;
            if (0.5 < fStack_17c) {
              auVar21 = _qmfc2(auVar22._0_4_);
              _vaddbc(in_vf0,auVar22);
              auVar23 = _vmulbc(auVar22,auVar22);
              auVar24 = _qmtc2(fStack_17c);
              auVar22 = _qmtc2(0);
              auVar24 = _vaddbc(auVar23,auVar24);
              auVar21 = _qmtc2(-auVar21._0_4_);
              _vaddbc(in_vf0,auVar21);
              auVar23 = _vaddbc(in_vf0,auVar22);
              auVar21 = _sqc2(auVar24);
              fStack_17c = auVar21._4_4_;
            }
            else {
              auVar21 = _qmtc2(0);
              _vaddbc(in_vf0,auVar21);
              auVar21 = _sqc2(auVar22);
              fStack_168 = auVar21._8_4_;
              fStack_17c = 1.0 - fStack_17c;
              auVar22 = _lqc2(*pauVar15);
              auVar21 = _qmtc2(-fStack_168);
              _vaddbc(in_vf0,auVar21);
              auVar23 = _vaddbc(in_vf0,auVar22);
            }
          }
          auVar22 = _lqc2(*pauVar15);
          *(float *)((int)puVar13 + 0x3c) = fVar18;
          *(float *)((int)puVar13 + 0x4c) = fVar19;
          _lqc2(*(undefined1 (*) [16])(puVar13 + 4));
          auVar24 = _vmove(auVar22);
          auVar21 = _qmtc2(1.0 / SQRT(fStack_17c));
          auVar23 = _vmulbc(auVar23,auVar21);
          _lqc2(*(undefined1 (*) [16])(puVar13 + 6));
          _lqc2(*(undefined1 (*) [16])(puVar13 + 8));
          _vopmula(auVar22,auVar23);
          auVar21 = _vopmsub(auVar23,auVar22);
          auVar23 = _vmove(auVar23);
          auVar22 = _vmove(auVar21);
          auVar21 = _sqc2(auVar24);
          *(undefined1 (*) [16])(puVar13 + 4) = auVar21;
          auVar21 = _sqc2(auVar23);
          *(undefined1 (*) [16])(puVar13 + 6) = auVar21;
          auVar21 = _sqc2(auVar22);
          *(undefined1 (*) [16])(puVar13 + 8) = auVar21;
          *(float *)((int)puVar13 + 0x2c) = fVar20;
          *(undefined4 *)((int)puVar13 + 0x5c) = 0;
          uVar17 = uVar17 + 1;
          pauVar14 = pauVar14 + 1;
          pauVar16 = pauVar16 + 1;
        } while (uVar17 < *(uint *)(iVar10 + 0x410));
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 0x420;
      iVar11 = iVar11 + 0x420;
    } while (uVar12 < uVar5);
  }
  return 1;
}


// ==== FUN_0032f1a0 @ 0032f1a0 ====
// GLOBAL DAT_0040e300 float

undefined8
FUN_0032f1a0(float param_1,undefined8 param_2,int *param_3,int param_4,undefined8 param_5,
            int param_6,undefined8 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  undefined1 (*pauVar11) [16];
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_5d0 [144];
  code *pcStack_540;
  undefined1 auStack_530 [144];
  code *pcStack_4a0;
  int aiStack_490 [80];
  int aiStack_350 [80];
  int aiStack_210 [32];
  int aiStack_190 [32];
  undefined1 auStack_110 [16];
  int iStack_e0;
  int iStack_dc;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
  
  if (((*(uint *)(param_4 + 0x5c) & 1) == 0) ||
     (piStack_c0 = &iStack_d0, (*(uint *)(param_6 + 0x5c) & 1) == 0)) {
    return 0;
  }
  iVar7 = 1;
  do {
    bVar1 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar1);
  iVar7 = 1;
  do {
    bVar1 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar1);
  iVar7 = 1;
  do {
    bVar1 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar1);
  iVar7 = 1;
  do {
    bVar1 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar1);
  (**(code **)(*(int *)(param_4 + 0x58) + 0x20))
            (param_4 + *(short *)(*(int *)(param_4 + 0x58) + 0x1c),auStack_5d0);
  (**(code **)(*(int *)(param_6 + 0x58) + 0x20))
            (param_6 + *(short *)(*(int *)(param_6 + 0x58) + 0x1c),auStack_530,param_7);
  fVar18 = (float)FUN_00336520(piStack_c0,auStack_5d0,auStack_530);
  if (*(float *)(param_4 + 0x4c) + *(float *)(param_6 + 0x4c) + param_1 < fVar18) {
    return 0;
  }
  param_3[0xa8] = iStack_d0;
  param_3[0xa9] = iStack_cc;
  param_3[0xaa] = iStack_c8;
  param_3[0xab] = iStack_c4;
  piVar12 = param_3 + 0x58;
  iVar7 = 2;
  do {
    bVar1 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar1);
  for (iVar7 = 2; iVar7 != -1; iVar7 = iVar7 + -1) {
  }
  (*pcStack_540)(auStack_5d0,1);
  auVar20._4_4_ = iStack_cc;
  auVar20._0_4_ = iStack_d0;
  auVar20._8_4_ = iStack_c8;
  auVar20._12_4_ = iStack_c4;
  auVar20 = _lqc2(auVar20);
  auVar20 = _vsub(in_vf0,auVar20);
  auVar20 = _qmfc2(auVar20._0_4_);
  (*pcStack_4a0)(auStack_530,0,auVar20._0_8_,aiStack_350);
  piVar15 = param_3;
  piVar10 = aiStack_490;
  do {
    iVar7 = piVar10[1];
    iVar3 = piVar10[2];
    iVar4 = piVar10[3];
    iVar5 = piVar10[4];
    iVar13 = piVar10[5];
    iVar14 = piVar10[6];
    iVar6 = piVar10[7];
    piVar15[8] = *piVar10;
    piVar15[9] = iVar7;
    piVar15[10] = iVar3;
    piVar15[0xb] = iVar4;
    piVar15[0xc] = iVar5;
    piVar15[0xd] = iVar13;
    piVar15[0xe] = iVar14;
    piVar15[0xf] = iVar6;
    piVar10 = piVar10 + 8;
    piVar15 = piVar15 + 8;
    piVar8 = aiStack_350;
  } while (piVar10 != aiStack_350);
  do {
    uVar2 = *(undefined8 *)piVar8;
    iVar13 = piVar8[2];
    iVar14 = piVar8[3];
    iVar7 = piVar8[4];
    iVar3 = piVar8[5];
    iVar4 = piVar8[6];
    iVar5 = piVar8[7];
    *piVar12 = (int)uVar2;
    piVar12[1] = (int)((ulong)uVar2 >> 0x20);
    piVar12[2] = iVar13;
    piVar12[3] = iVar14;
    piVar12[4] = iVar7;
    piVar12[5] = iVar3;
    piVar12[6] = iVar4;
    piVar12[7] = iVar5;
    piVar8 = piVar8 + 8;
    piVar12 = piVar12 + 8;
  } while (piVar8 != aiStack_210);
  iVar7 = 6;
  do {
    bVar1 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar1);
  iVar7 = 6;
  do {
    bVar1 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar1);
  iStack_dc = 0;
  lVar9 = FUN_00337ff0(aiStack_210,aiStack_490,aiStack_350,piStack_c0);
  if (lVar9 == 0) {
    return 0;
  }
  uVar16 = 0;
  *param_3 = param_4;
  param_3[2] = param_6;
  param_3[0x104] = iStack_e0;
  if (iStack_e0 != 0) {
    piVar15 = aiStack_190;
    piVar12 = param_3;
    do {
      iVar7 = piVar15[-0x1f];
      iVar3 = piVar15[-0x1e];
      iVar4 = piVar15[-0x1d];
      uVar16 = uVar16 + 1;
      iVar5 = *piVar15;
      iVar13 = piVar15[1];
      iVar14 = piVar15[2];
      iVar6 = piVar15[3];
      piVar12[0xbc] = piVar15[-0x20];
      piVar12[0xbd] = iVar7;
      piVar12[0xbe] = iVar3;
      piVar12[0xbf] = iVar4;
      piVar15 = piVar15 + 4;
      piVar12[0xdc] = iVar5;
      piVar12[0xdd] = iVar13;
      piVar12[0xde] = iVar14;
      piVar12[0xdf] = iVar6;
      piVar12 = piVar12 + 4;
    } while (uVar16 < (uint)param_3[0x104]);
  }
  fVar18 = DAT_0040e300;
  uVar16 = param_3[0x104];
  if (uVar16 == 1) {
    auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xbc));
    auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xdc));
    auVar22 = _vsub(auVar20,auVar21);
    auVar21 = _vmul(auVar22,auVar22);
    auVar20 = _sqc2(auVar22);
    *(undefined1 (*) [16])(param_3 + 0xac) = auVar20;
    auVar20 = _vaddbc(auVar21,auVar21);
    auVar20 = _vaddbc(auVar20,auVar21);
    auVar20 = _qmfc2(auVar20._0_4_);
    if (fVar18 < auVar20._0_4_) {
      auVar21 = _vmul(auVar22,auVar22);
      auVar20 = _vaddbc(auVar21,auVar21);
      auVar20 = _vaddbc(auVar20,auVar21);
      _vrsqrt(in_vf0,auVar20);
      uVar19 = _vwaitq();
      auVar20 = _vmulq(auVar22,uVar19);
      auVar20 = _sqc2(auVar20);
      *(undefined1 (*) [16])(param_3 + 0xac) = auVar20;
    }
    else {
      param_3[0xac] = iStack_d0;
      param_3[0xad] = iStack_cc;
      param_3[0xae] = iStack_c8;
      param_3[0xaf] = iStack_c4;
    }
    auVar22 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
    auVar21._4_4_ = iStack_cc;
    auVar21._0_4_ = iStack_d0;
    auVar21._8_4_ = iStack_c8;
    auVar21._12_4_ = iStack_c4;
    auVar20 = _lqc2(auVar21);
    auVar21 = _vmul(auVar22,auVar20);
    auVar20 = _vaddbc(auVar21,auVar21);
    auVar20 = _vaddbc(auVar20,auVar21);
    auVar20 = _qmfc2(auVar20._0_4_);
    if (auVar20._0_4_ < 0.0) {
      auVar20 = _vsub(in_vf0,auVar22);
      auVar20 = _sqc2(auVar20);
      *(undefined1 (*) [16])(param_3 + 0xac) = auVar20;
      uVar19 = *(undefined4 *)(param_4 + 0x4c);
    }
    else {
      uVar19 = *(undefined4 *)(param_4 + 0x4c);
    }
    uVar17 = 0;
    auVar23 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
    auVar21 = _qmtc2(uVar19);
    auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xbc));
    auVar21 = _vmulbc(auVar23,auVar21);
    auVar22 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xdc));
    auVar20 = _vadd(auVar20,auVar21);
    uVar16 = param_3[0x104];
    auVar20 = _sqc2(auVar20);
    *(undefined1 (*) [16])(param_3 + 0xb0) = auVar20;
    auVar20 = _qmtc2(*(undefined4 *)(param_6 + 0x4c));
    auVar20 = _vmulbc(auVar23,auVar20);
    auVar20 = _vsub(auVar22,auVar20);
    auVar20 = _sqc2(auVar20);
    *(undefined1 (*) [16])(param_3 + 0xb4) = auVar20;
    if (uVar16 != 0) {
      piVar12 = param_3 + 0xfc;
      pauVar11 = (undefined1 (*) [16])(param_3 + 0xdc);
      do {
        uVar17 = uVar17 + 1;
        auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
        auVar21 = _qmtc2(*(undefined4 *)(param_4 + 0x4c));
        auVar22 = _lqc2(pauVar11[-8]);
        auVar20 = _vmulbc(auVar20,auVar21);
        uVar19 = *(undefined4 *)(param_6 + 0x4c);
        auVar23 = _vadd(auVar22,auVar20);
        auVar22 = _lqc2(*pauVar11);
        auVar20 = _sqc2(auVar23);
        pauVar11[-8] = auVar20;
        auVar21 = _qmtc2(uVar19);
        auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
        auVar20 = _vmulbc(auVar20,auVar21);
        auVar21 = _vsub(auVar22,auVar20);
        auVar20 = _sqc2(auVar21);
        *pauVar11 = auVar20;
        auVar21 = _vsub(auVar21,auVar23);
        pauVar11 = pauVar11 + 1;
        auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
        auVar21 = _vmul(auVar21,auVar20);
        auVar20 = _vaddbc(auVar21,auVar21);
        auVar20 = _vaddbc(auVar20,auVar21);
        auVar20 = _qmfc2(auVar20._0_4_);
        *piVar12 = auVar20._0_4_;
        piVar12 = piVar12 + 1;
      } while (uVar17 < uVar16);
    }
    auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb0));
    auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb4));
    auVar20 = _vsub(auVar21,auVar20);
    auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
    auVar21 = _vmul(auVar20,auVar21);
    auVar20 = _vaddbc(auVar21,auVar21);
    auVar20 = _vaddbc(auVar20,auVar21);
    auVar20 = _qmfc2(auVar20._0_4_);
    param_3[0xb8] = auVar20._0_4_;
    return 1;
  }
  _lqc2(*(undefined1 (*) [16])(param_3 + 0xb0));
  auVar20 = _qmtc2(0);
  _lqc2(*(undefined1 (*) [16])(param_3 + 0xb4));
  auVar21 = _vaddbc(in_vf0,auVar20);
  auVar20 = _vaddbc(in_vf0,auVar20);
  auVar23 = _qmtc2(0);
  _vmove(auVar21);
  _vmove(auVar20);
  auVar22 = _vaddbc(in_vf0,auVar23);
  auVar21 = _vaddbc(in_vf0,auVar23);
  auVar20 = _sqc2(auVar20);
  *(undefined1 (*) [16])(param_3 + 0xb0) = auVar20;
  auVar23 = _qmtc2(0);
  auVar20 = _sqc2(auVar21);
  *(undefined1 (*) [16])(param_3 + 0xb0) = auVar20;
  auVar20 = _sqc2(auVar22);
  *(undefined1 (*) [16])(param_3 + 0xb4) = auVar20;
  auVar20 = _vaddbc(in_vf0,auVar23);
  auVar21 = _vaddbc(in_vf0,auVar23);
  uVar17 = 0;
  auVar20 = _sqc2(auVar20);
  *(undefined1 (*) [16])(param_3 + 0xb0) = auVar20;
  auVar20 = _sqc2(auVar21);
  *(undefined1 (*) [16])(param_3 + 0xb4) = auVar20;
  piVar12 = param_3;
  if (uVar16 != 0) {
    do {
      auVar20 = _lqc2(*(undefined1 (*) [16])(piVar12 + 0xbc));
      uVar17 = uVar17 + 1;
      auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb0));
      auVar20 = _vadd(auVar21,auVar20);
      auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb4));
      auVar20 = _sqc2(auVar20);
      *(undefined1 (*) [16])(param_3 + 0xb0) = auVar20;
      auVar20 = _lqc2(*(undefined1 (*) [16])(piVar12 + 0xdc));
      auVar20 = _vadd(auVar21,auVar20);
      auVar20 = _sqc2(auVar20);
      *(undefined1 (*) [16])(param_3 + 0xb4) = auVar20;
      piVar12 = piVar12 + 4;
    } while (uVar17 < uVar16);
  }
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb0));
  auVar20 = _qmtc2(1.0 / (float)(uint)param_3[0x104]);
  auVar20 = _vmulbc(auVar21,auVar20);
  auVar20 = _sqc2(auVar20);
  *(undefined1 (*) [16])(param_3 + 0xb0) = auVar20;
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb4));
  auVar20 = _qmtc2(1.0 / (float)(uint)param_3[0x104]);
  auVar20 = _vmulbc(auVar21,auVar20);
  auVar20 = _sqc2(auVar20);
  *(undefined1 (*) [16])(param_3 + 0xb4) = auVar20;
  if (iStack_dc == 0) {
    param_3[0xac] = iStack_d0;
    param_3[0xad] = iStack_cc;
    param_3[0xae] = iStack_c8;
    param_3[0xaf] = iStack_c4;
  }
  else {
    auVar23 = _lqc2(auStack_110);
    auVar22._4_4_ = iStack_cc;
    auVar22._0_4_ = iStack_d0;
    auVar22._8_4_ = iStack_c8;
    auVar22._12_4_ = iStack_c4;
    auVar20 = _lqc2(auVar22);
    auVar22 = _vmul(auVar23,auVar20);
    auVar21 = _vaddbc(auVar22,auVar22);
    auVar20 = _sqc2(auVar23);
    *(undefined1 (*) [16])(param_3 + 0xac) = auVar20;
    auVar20 = _vaddbc(auVar21,auVar22);
    auVar20 = _qmfc2(auVar20._0_4_);
    if (0.0 <= auVar20._0_4_) {
      uVar19 = *(undefined4 *)(param_6 + 0x4c);
      goto LAB_0032f7f8;
    }
    auVar20 = _vsub(in_vf0,auVar23);
    auVar20 = _sqc2(auVar20);
    *(undefined1 (*) [16])(param_3 + 0xac) = auVar20;
  }
  uVar19 = *(undefined4 *)(param_6 + 0x4c);
LAB_0032f7f8:
  uVar17 = 0;
  auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
  auVar21 = _qmtc2(uVar19);
  auVar23 = _vmulbc(auVar20,auVar21);
  auVar22 = _qmtc2(*(undefined4 *)(param_4 + 0x4c));
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb0));
  auVar20 = _vmulbc(auVar20,auVar22);
  uVar16 = param_3[0x104];
  auVar22 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb4));
  auVar20 = _vadd(auVar21,auVar20);
  auVar21 = _vsub(auVar22,auVar23);
  auVar20 = _sqc2(auVar20);
  *(undefined1 (*) [16])(param_3 + 0xb0) = auVar20;
  auVar20 = _sqc2(auVar21);
  *(undefined1 (*) [16])(param_3 + 0xb4) = auVar20;
  if (uVar16 != 0) {
    piVar12 = param_3 + 0xfc;
    pauVar11 = (undefined1 (*) [16])(param_3 + 0xdc);
    do {
      uVar17 = uVar17 + 1;
      auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
      auVar21 = _qmtc2(*(undefined4 *)(param_4 + 0x4c));
      auVar22 = _lqc2(pauVar11[-8]);
      auVar20 = _vmulbc(auVar20,auVar21);
      uVar19 = *(undefined4 *)(param_6 + 0x4c);
      auVar23 = _vadd(auVar22,auVar20);
      auVar22 = _lqc2(*pauVar11);
      auVar20 = _sqc2(auVar23);
      pauVar11[-8] = auVar20;
      auVar21 = _qmtc2(uVar19);
      auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
      auVar20 = _vmulbc(auVar20,auVar21);
      auVar21 = _vsub(auVar22,auVar20);
      auVar20 = _sqc2(auVar21);
      *pauVar11 = auVar20;
      auVar21 = _vsub(auVar21,auVar23);
      pauVar11 = pauVar11 + 1;
      auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
      auVar21 = _vmul(auVar21,auVar20);
      auVar20 = _vaddbc(auVar21,auVar21);
      auVar20 = _vaddbc(auVar20,auVar21);
      auVar20 = _qmfc2(auVar20._0_4_);
      *piVar12 = auVar20._0_4_;
      piVar12 = piVar12 + 1;
    } while (uVar17 < uVar16);
  }
  auVar20 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb0));
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xb4));
  auVar20 = _vsub(auVar21,auVar20);
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xac));
  auVar21 = _vmul(auVar20,auVar21);
  auVar20 = _vaddbc(auVar21,auVar21);
  auVar20 = _vaddbc(auVar20,auVar21);
  auVar20 = _qmfc2(auVar20._0_4_);
  param_3[0xb8] = auVar20._0_4_;
  return 1;
}


// ==== FUN_0032f928 @ 0032f928 ====
// GLOBAL DAT_0045ccb0 undefined4
// GLOBAL DAT_0045ccb4 undefined4
// GLOBAL DAT_0045ccb8 undefined4
// GLOBAL DAT_0045ccbc undefined4
// GLOBAL DAT_0045ccc0 undefined4
// GLOBAL DAT_0045ccc4 undefined4
// GLOBAL DAT_0045ccc8 undefined4
// GLOBAL DAT_0045cccc undefined4
// GLOBAL DAT_0045ccd0 undefined4
// GLOBAL DAT_0045ccd4 undefined4
// GLOBAL DAT_0045ccd8 undefined4
// GLOBAL DAT_0045ccdc undefined4
// GLOBAL DAT_0045cce0 undefined4
// GLOBAL DAT_0045cce4 undefined4
// GLOBAL DAT_0045cce8 undefined4
// GLOBAL DAT_0045ccec undefined4

void FUN_0032f928(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9080,2);
      FUN_00100230(&gp0xffff9078,2);
    }
    else {
      FUN_00100228(&gp0xffff9078);
      FUN_00100258(&gp0xffff9080);
      DAT_0045ccb0 = 0x3fc90fdb;
      DAT_0045ccb4 = 0xbe22f983;
      DAT_0045ccb8 = 0x4b400000;
      DAT_0045ccbc = uStack_44;
      DAT_0045ccc0 = 0xbe22f983;
      DAT_0045ccc4 = 0x3f000000;
      DAT_0045ccc8 = 0x3e800000;
      DAT_0045cccc = uStack_34;
      DAT_0045ccd0 = 0xc2992661;
      DAT_0045ccd4 = 0xc2255de0;
      DAT_0045ccd8 = 0x42a33457;
      DAT_0045ccdc = uStack_24;
      DAT_0045cce0 = 0x421ed7b7;
      DAT_0045cce4 = 0x40c90fda;
      DAT_0045cce8 = 0;
      DAT_0045ccec = uStack_14;
    }
  }
  return;
}


// ==== FUN_0032fa70 @ 0032fa70 ====

undefined8 FUN_0032fa70(undefined8 param_1,int param_2)

{
  int iStack_40;
  int iStack_3c;
  
  FUN_0033b610(&iStack_40,0x100,0x100);
  ((int *)param_1)[1] = iStack_3c;
  *(int *)param_1 = (iStack_3c + 0x1fU & -iStack_3c) + iStack_40 + param_2 * 8;
  return param_1;
}


// ==== FUN_0032faf0 @ 0032faf0 ====

undefined4 FUN_0032faf0(void)

{
  return 1;
}


// ==== FUN_0032faf8 @ 0032faf8 ====

bool FUN_0032faf8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = *(int *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)(iVar4 + 0x34) = 0;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  iVar4 = *(int *)(iVar3 + 0x18);
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == -1) break;
    FUN_0032e810(param_1,iVar2);
    lVar1 = FUN_0032ed80(param_1,iVar2);
    iVar2 = iVar2 + 8;
  } while (lVar1 != 0);
  return *(int *)(iVar3 + 0x18) != 0;
}


// ==== FUN_0032fb80 @ 0032fb80 ====

void FUN_0032fb80(void)

{
  FUN_0032f928(1,0xffff);
  return;
}


// ==== FUN_0032fba0 @ 0032fba0 ====

void FUN_0032fba0(void)

{
  FUN_0032f928(0,0xffff);
  return;
}


// ==== FUN_0032fbc0 @ 0032fbc0 ====
// GLOBAL PTR_DAT_0040e418 undefined_*

bool FUN_0032fbc0(int param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  long lVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar9 = 0;
  uVar10 = 0;
  uVar2 = *(undefined8 *)PTR_DAT_0040e418;
  uVar6 = *(undefined4 *)(PTR_DAT_0040e418 + 8);
  uVar7 = *(undefined4 *)(PTR_DAT_0040e418 + 0xc);
  iVar8 = *(int *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar3 = (undefined4)uVar2;
  *(undefined4 *)param_2[3] = uVar3;
  uVar5 = (undefined4)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_2[3] + 4) = uVar5;
  *(undefined4 *)(param_2[3] + 8) = uVar6;
  *(undefined4 *)(param_2[3] + 0xc) = uVar7;
  *(undefined4 *)*param_2 = uVar3;
  *(undefined4 *)(*param_2 + 4) = uVar5;
  *(undefined4 *)(*param_2 + 8) = uVar6;
  *(undefined4 *)(*param_2 + 0xc) = uVar7;
  *(undefined4 *)param_2[1] = uVar3;
  *(undefined4 *)(param_2[1] + 4) = uVar5;
  *(undefined4 *)(param_2[1] + 8) = uVar6;
  *(undefined4 *)(param_2[1] + 0xc) = uVar7;
  *(undefined4 *)param_2[2] = uVar3;
  *(undefined4 *)(param_2[2] + 4) = uVar5;
  *(undefined4 *)(param_2[2] + 8) = uVar6;
  *(undefined4 *)(param_2[2] + 0xc) = uVar7;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_0032fca0(iVar8,auStack_a0);
      auVar11 = _lqc2(auStack_a0);
      if (lVar4 != 0) {
        iVar9 = iVar9 + 1;
        auVar15 = _lqc2(*param_2);
        auVar16 = _vadd(auVar15,auVar11);
        auVar15 = _lqc2(auStack_90);
        auVar12 = _lqc2(auStack_80);
        auVar11 = _lqc2(auStack_70);
        auVar13 = _lqc2(param_2[1]);
        auVar14 = _lqc2(param_2[2]);
        auVar15 = _vadd(auVar13,auVar15);
        auVar13 = _lqc2(param_2[3]);
        auVar12 = _vadd(auVar14,auVar12);
        auVar13 = _vadd(auVar13,auVar11);
        auVar11 = _sqc2(auVar16);
        *param_2 = auVar11;
        auVar11 = _sqc2(auVar15);
        param_2[1] = auVar11;
        auVar11 = _sqc2(auVar12);
        param_2[2] = auVar11;
        auVar11 = _sqc2(auVar13);
        param_2[3] = auVar11;
      }
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 0x60;
    } while (uVar10 < uVar1);
  }
  return iVar9 != 0;
}


// ==== FUN_0032fca0 @ 0032fca0 ====
// GLOBAL PTR_DAT_0040e438 undefined_*

undefined8 FUN_0032fca0(long param_1,undefined1 (*param_2) [16])

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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  long lVar34;
  undefined8 uVar35;
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 (*pauVar41) [16];
  float fVar42;
  float fVar43;
  undefined1 in_vf0 [16];
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
  undefined1 auStack_d90 [16];
  undefined1 auStack_d80 [16];
  float fStack_d6c;
  float fStack_d58;
  undefined1 auStack_ce0 [16];
  undefined4 uStack_cbc;
  undefined4 uStack_ca8;
  undefined4 uStack_c8c;
  undefined4 uStack_c78;
  undefined4 uStack_c5c;
  undefined4 uStack_c48;
  undefined4 uStack_c2c;
  undefined4 uStack_c18;
  undefined4 uStack_a8c;
  undefined4 uStack_a7c;
  undefined4 uStack_a6c;
  undefined4 uStack_a5c;
  undefined4 uStack_a48;
  undefined4 uStack_a38;
  undefined4 uStack_a28;
  undefined4 uStack_a18;
  undefined4 uStack_a04;
  undefined4 uStack_9f4;
  undefined4 uStack_9e4;
  undefined4 uStack_9d4;
  undefined1 auStack_8e0 [16];
  undefined4 uStack_8bc;
  undefined4 uStack_8a8;
  undefined4 uStack_88c;
  undefined4 uStack_878;
  undefined4 uStack_85c;
  undefined4 uStack_848;
  undefined4 uStack_82c;
  undefined4 uStack_818;
  undefined4 uStack_68c;
  undefined4 uStack_67c;
  undefined4 uStack_66c;
  undefined4 uStack_65c;
  undefined4 uStack_648;
  undefined4 uStack_638;
  undefined4 uStack_628;
  undefined4 uStack_618;
  undefined4 uStack_604;
  undefined4 uStack_5f4;
  undefined4 uStack_5e4;
  undefined4 uStack_5d4;
  float fStack_50c;
  float fStack_4f8;
  undefined4 uStack_4e4;
  float fStack_4dc;
  float fStack_4c8;
  float fStack_4bc;
  float fStack_4a8;
  undefined1 auStack_430 [16];
  undefined4 uStack_40c;
  undefined4 uStack_3f8;
  undefined4 uStack_3dc;
  undefined4 uStack_3c8;
  undefined4 uStack_3ac;
  undefined4 uStack_398;
  undefined4 uStack_37c;
  undefined4 uStack_368;
  undefined4 uStack_1dc;
  undefined4 uStack_1cc;
  undefined4 uStack_1bc;
  undefined4 uStack_1ac;
  undefined4 uStack_198;
  undefined4 uStack_188;
  undefined4 uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_154;
  undefined4 uStack_144;
  undefined4 uStack_134;
  undefined4 uStack_124;
  undefined1 auStack_60 [16];
  float fStack_50;
  
  pauVar41 = (undefined1 (*) [16])param_1;
  iVar1 = **(int **)(pauVar41[5] + 8);
  if (iVar1 == 0) {
LAB_00330cdc:
    uVar35 = 0;
  }
  else {
    lVar34 = FUN_00330cf8();
    auVar44 = _lqc2(auStack_60);
    if (lVar34 == 0) {
      if ((iVar1 != 5) ||
         ((iVar36 = **(int **)(*(int *)pauVar41[4] + 0x20), iVar36 != 0x80002 && (iVar36 != 0x80004)
          ))) {
        iVar36 = *(int *)(pauVar41[5] + 8);
        if (iVar1 == 3) {
          lVar34 = (**(code **)(iVar36 + 8))(*pauVar41 + *(short *)(iVar36 + 4),0,0,auStack_d90);
          auVar44 = _lqc2(auStack_d90);
          if (lVar34 == 0) {
            iVar36 = *(int *)(pauVar41[5] + 8);
            goto LAB_00330624;
          }
        }
        else {
LAB_00330624:
          lVar34 = (**(code **)(iVar36 + 8))(*pauVar41 + *(short *)(iVar36 + 4));
          auVar44 = _lqc2(auStack_d90);
          if (lVar34 == 0) goto LAB_00330cdc;
        }
        auVar37 = _lqc2(auStack_d80);
        auVar39 = _vsub(auVar37,auVar44);
        auVar45 = _vmove(auVar39);
        auVar37 = _qmfc2(auVar45._0_4_);
        auVar44 = _sqc2(auVar45);
        fStack_50c = auVar44._4_4_;
        auVar44 = _sqc2(auVar45);
        fStack_4f8 = auVar44._8_4_;
        if (fStack_50c < auVar37._0_4_) {
          fStack_50c = auVar37._0_4_;
        }
        if (fStack_4f8 < fStack_50c) {
          fStack_4f8 = fStack_50c;
        }
        auVar37 = _qmtc2(fStack_4f8 * 0.05);
        auVar50._8_4_ = 0x3f800000;
        auVar50._0_8_ = 0x3f8000003f800000;
        auVar50._12_4_ = uStack_4e4;
        auVar44 = _lqc2(auVar50);
        auVar44 = _vmulbc(auVar44,auVar37);
        auVar45 = _vmax(auVar39,auVar44);
        auVar44 = _qmfc2(auVar45._0_4_);
        fVar33 = auVar44._0_4_;
        auVar44 = _sqc2(auVar45);
        fStack_4dc = auVar44._4_4_;
        auVar44 = _sqc2(auVar45);
        fStack_4c8 = auVar44._8_4_;
        _lqc2(auStack_60);
        fVar43 = fVar33 + fStack_4dc;
        auVar44 = _qmtc2((fStack_4dc * fStack_4dc + fStack_4c8 * fStack_4c8 +
                         (fStack_4dc + fStack_4c8 + fStack_4dc + fStack_4c8) * 0.0) / 3.0 + 0.0);
        auVar39 = _vaddbc(in_vf0,auVar44);
        fVar42 = fVar33 * 8.0 * fStack_4dc * fStack_4c8 +
                 (fVar33 * fStack_4dc + fVar33 * fStack_4c8 + fStack_4dc * fStack_4c8) * 8.0 * 0.0 +
                 (fVar43 + fStack_4c8 + 0.0) * 0.0;
        _vmove(auVar39);
        auVar44 = _qmtc2((fStack_4c8 * fStack_4c8 + fVar33 * fVar33 +
                         (fStack_4c8 + fVar33 + fStack_4c8 + fVar33) * 0.0) / 3.0 + 0.0);
        auVar37 = _vaddbc(in_vf0,auVar44);
        _sqc2(auVar39);
        auVar44 = _qmtc2((fVar33 * fVar33 + fStack_4dc * fStack_4dc + (fVar43 + fVar43) * 0.0) / 3.0
                         + 0.0);
        _vmove(auVar37);
        auVar39 = _vaddbc(in_vf0,auVar44);
        _sqc2(auVar37);
        auVar44 = _sqc2(auVar39);
        if (0.0 < fVar42) {
          auVar37 = _qmfc2(auVar39._0_4_);
          fVar33 = auVar37._0_4_;
          auVar46 = *(undefined1 (*) [16])PTR_DAT_0040e438;
          auVar47 = *(undefined1 (*) [16])(PTR_DAT_0040e438 + 0x10);
          auVar37 = _qmtc2(0x3f000000);
          auVar37 = _vmulbc(auVar45,auVar37);
          auVar45 = _lqc2(auStack_d90);
          auVar37 = _vadd(auVar45,auVar37);
          auVar45 = *(undefined1 (*) [16])(PTR_DAT_0040e438 + 0x20);
          auVar37 = _sqc2(auVar37);
          auVar39 = _sqc2(auVar39);
          fStack_4bc = auVar39._4_4_;
          auVar44 = _lqc2(auVar44);
          auVar44 = _sqc2(auVar44);
          fStack_4a8 = auVar44._8_4_;
          fVar43 = fVar42 * 0.5;
          *(float *)*param_2 = fVar43 * ((fStack_4bc + fStack_4a8) - fVar33);
          *(undefined4 *)(*param_2 + 4) = 0;
          *(undefined4 *)(*param_2 + 8) = 0;
          *(undefined4 *)(*param_2 + 0xc) = 0;
          *(undefined4 *)param_2[1] = 0;
          *(float *)(param_2[1] + 4) = fVar43 * ((fStack_4a8 + fVar33) - fStack_4bc);
          *(undefined4 *)(param_2[1] + 8) = 0;
          *(undefined4 *)(param_2[1] + 0xc) = 0;
          *(undefined4 *)param_2[2] = 0;
          *(undefined4 *)(param_2[2] + 4) = 0;
          *(float *)(param_2[2] + 8) = fVar43 * ((fVar33 + fStack_4bc) - fStack_4a8);
          *(undefined4 *)(param_2[2] + 0xc) = 0;
          auVar46 = _lqc2(auVar46);
          auVar39 = _qmfc2(auVar46._0_4_);
          *(undefined4 *)param_2[3] = 0;
          *(undefined4 *)(param_2[3] + 4) = 0;
          *(undefined4 *)(param_2[3] + 8) = 0;
          *(float *)(param_2[3] + 0xc) = fVar42;
          auVar44 = _sqc2(auVar46);
          uStack_40c = auVar44._4_4_;
          auVar44 = _sqc2(auVar46);
          uStack_3f8 = auVar44._8_4_;
          auVar46 = _lqc2(auVar47);
          auVar44 = _qmfc2(auVar46._0_4_);
          uVar32 = auVar44._0_4_;
          auVar44 = _sqc2(auVar46);
          uStack_3dc = auVar44._4_4_;
          auVar44 = _sqc2(auVar46);
          uStack_3c8 = auVar44._8_4_;
          auVar45 = _lqc2(auVar45);
          auVar44 = _qmfc2(auVar45._0_4_);
          uVar31 = auVar44._0_4_;
          auVar44 = _sqc2(auVar45);
          uStack_3ac = auVar44._4_4_;
          auVar44 = _sqc2(auVar45);
          uStack_398 = auVar44._8_4_;
          auVar45 = _lqc2(auVar37);
          auVar37 = _qmfc2(auVar45._0_4_);
          auVar44 = _sqc2(auVar45);
          uStack_37c = auVar44._4_4_;
          auVar44 = _sqc2(auVar45);
          uStack_368 = auVar44._8_4_;
          auVar45 = _lqc2(*param_2);
          auVar30._4_4_ = uStack_37c;
          auVar30._0_4_ = auVar37._0_4_;
          auVar30._8_4_ = uStack_368;
          auVar30._12_4_ = 0x3f800000;
          auVar56 = _lqc2(auVar30);
          auVar46 = _lqc2(param_2[1]);
          auVar38 = _qmfc2(auVar56._0_4_);
          auVar53._4_4_ = uStack_40c;
          auVar53._0_4_ = auVar39._0_4_;
          auVar53._8_4_ = uStack_3f8;
          auVar53._12_4_ = 0;
          auVar52 = _lqc2(auVar53);
          auVar44 = _sqc2(auVar56);
          auVar47 = _qmfc2(auVar52._0_4_);
          auVar24._4_4_ = uStack_3ac;
          auVar24._0_4_ = uVar31;
          auVar24._8_4_ = uStack_398;
          auVar24._12_4_ = 0;
          auVar39 = _lqc2(auVar24);
          auVar37 = _lqc2(auVar44);
          auVar18._4_4_ = uStack_3dc;
          auVar18._0_4_ = uVar32;
          auVar18._8_4_ = uStack_3c8;
          auVar18._12_4_ = 0;
          auVar55 = _lqc2(auVar18);
          auVar48 = _lqc2(param_2[2]);
          _vmulabc(auVar52,auVar45);
          _vmaddabc(auVar55,auVar45);
          _vmaddabc(auVar39,auVar45);
          auVar54 = _vmaddbc(auVar37,auVar45);
          auVar55 = _lqc2(param_2[3]);
          _sqc2(auVar54);
          auVar25._4_4_ = uStack_3ac;
          auVar25._0_4_ = uVar31;
          auVar25._8_4_ = uStack_398;
          auVar25._12_4_ = 0;
          auVar39 = _lqc2(auVar25);
          auVar37 = _lqc2(auVar44);
          auVar19._4_4_ = uStack_3dc;
          auVar19._0_4_ = uVar32;
          auVar19._8_4_ = uStack_3c8;
          auVar19._12_4_ = 0;
          auVar45 = _lqc2(auVar19);
          _vmulabc(auVar52,auVar46);
          _vmaddabc(auVar45,auVar46);
          _vmaddabc(auVar39,auVar46);
          auVar51 = _vmaddbc(auVar37,auVar46);
          _sqc2(auVar51);
          auVar26._4_4_ = uStack_3ac;
          auVar26._0_4_ = uVar31;
          auVar26._8_4_ = uStack_398;
          auVar26._12_4_ = 0;
          auVar39 = _lqc2(auVar26);
          auVar37 = _lqc2(auVar44);
          auVar20._4_4_ = uStack_3dc;
          auVar20._0_4_ = uVar32;
          auVar20._8_4_ = uStack_3c8;
          auVar20._12_4_ = 0;
          auVar45 = _lqc2(auVar20);
          _vmulabc(auVar52,auVar48);
          _vmaddabc(auVar45,auVar48);
          _vmaddabc(auVar39,auVar48);
          auVar46 = _vmaddbc(auVar37,auVar48);
          _sqc2(auVar46);
          auVar27._4_4_ = uStack_3ac;
          auVar27._0_4_ = uVar31;
          auVar27._8_4_ = uStack_398;
          auVar27._12_4_ = 0;
          auVar39 = _lqc2(auVar27);
          auVar44 = _lqc2(auVar44);
          auVar21._4_4_ = uStack_3dc;
          auVar21._0_4_ = uVar32;
          auVar21._8_4_ = uStack_3c8;
          auVar21._12_4_ = 0;
          auVar37 = _lqc2(auVar21);
          _vmulabc(auVar52,auVar55);
          _vmaddabc(auVar37,auVar55);
          _vmaddabc(auVar39,auVar55);
          auVar39 = _vmaddbc(auVar44,auVar55);
          _sqc2(auVar54);
          _sqc2(auVar39);
          _sqc2(auVar51);
          _sqc2(auVar46);
          _sqc2(auVar39);
          _sqc2(auVar54);
          _sqc2(auVar51);
          _sqc2(auVar46);
          _sqc2(auVar39);
          auVar22._4_4_ = uStack_3dc;
          auVar22._0_4_ = uVar32;
          auVar22._8_4_ = uStack_3c8;
          auVar22._12_4_ = 0;
          auVar37 = _lqc2(auVar22);
          auVar28._4_4_ = uStack_3ac;
          auVar28._0_4_ = uVar31;
          auVar28._8_4_ = uStack_398;
          auVar28._12_4_ = 0;
          auVar45 = _lqc2(auVar28);
          auVar55 = _qmfc2(auVar37._0_4_);
          _sqc2(auVar54);
          auVar48 = _qmfc2(auVar45._0_4_);
          _sqc2(auVar51);
          _sqc2(auVar46);
          _sqc2(auVar39);
          auVar44 = _sqc2(auVar54);
          *param_2 = auVar44;
          auVar44 = _sqc2(auVar51);
          param_2[1] = auVar44;
          auVar44 = _sqc2(auVar46);
          param_2[2] = auVar44;
          auVar44 = _sqc2(auVar39);
          param_2[3] = auVar44;
          auVar44 = _sqc2(auVar52);
          auVar37 = _sqc2(auVar37);
          auVar39 = _sqc2(auVar45);
          auVar45 = _sqc2(auVar56);
          auVar46 = _sqc2(auVar52);
          uStack_1dc = auVar46._4_4_;
          auVar46 = _lqc2(auVar37);
          auVar46 = _sqc2(auVar46);
          uStack_1cc = auVar46._4_4_;
          auVar46 = _lqc2(auVar39);
          auVar46 = _sqc2(auVar46);
          uStack_1bc = auVar46._4_4_;
          auVar46 = _lqc2(auVar45);
          auVar46 = _sqc2(auVar46);
          uStack_1ac = auVar46._4_4_;
          auVar46 = _lqc2(auVar44);
          auVar46 = _sqc2(auVar46);
          uStack_198 = auVar46._8_4_;
          auVar46 = _lqc2(auVar37);
          auVar46 = _sqc2(auVar46);
          uStack_188 = auVar46._8_4_;
          auVar46 = _lqc2(auVar39);
          auVar46 = _sqc2(auVar46);
          uStack_178 = auVar46._8_4_;
          auVar46 = _lqc2(auVar45);
          auVar46 = _sqc2(auVar46);
          uStack_168 = auVar46._8_4_;
          auVar44 = _lqc2(auVar44);
          auVar44 = _sqc2(auVar44);
          uStack_154 = auVar44._12_4_;
          auVar44 = _lqc2(auVar37);
          auVar44 = _sqc2(auVar44);
          uStack_144 = auVar44._12_4_;
          auVar44 = _lqc2(auVar39);
          auVar44 = _sqc2(auVar44);
          uStack_134 = auVar44._12_4_;
          auVar44 = _lqc2(auVar45);
          auVar44 = _sqc2(auVar44);
          uStack_124 = auVar44._12_4_;
          auVar46 = _lqc2(*param_2);
          auVar52 = _lqc2(param_2[1]);
          auVar54 = _lqc2(param_2[2]);
          auVar51 = _lqc2(param_2[3]);
          auStack_430._4_4_ = uStack_144;
          auStack_430._0_4_ = uStack_154;
          auStack_430._8_4_ = uStack_134;
          auStack_430._12_4_ = uStack_124;
          auVar17._4_4_ = auVar55._0_4_;
          auVar17._0_4_ = auVar47._0_4_;
          auVar17._8_4_ = auVar48._0_4_;
          auVar17._12_4_ = auVar38._0_4_;
          auVar44 = _lqc2(auVar17);
          _vmulabc(auVar46,auVar44);
          _vmaddabc(auVar52,auVar44);
          _vmaddabc(auVar54,auVar44);
          auVar39 = _vmaddbc(auVar51,auVar44);
          _sqc2(auVar39);
          auVar23._4_4_ = uStack_1cc;
          auVar23._0_4_ = uStack_1dc;
          auVar23._8_4_ = uStack_1bc;
          auVar23._12_4_ = uStack_1ac;
          auVar37 = _lqc2(auVar23);
          auVar44 = _sqc2(auVar39);
          *param_2 = auVar44;
          _vmulabc(auVar46,auVar37);
          _vmaddabc(auVar52,auVar37);
          _vmaddabc(auVar54,auVar37);
          auVar45 = _vmaddbc(auVar51,auVar37);
          _sqc2(auVar45);
          auVar44 = _sqc2(auVar45);
          param_2[1] = auVar44;
          auVar29._4_4_ = uStack_188;
          auVar29._0_4_ = uStack_198;
          auVar29._8_4_ = uStack_178;
          auVar29._12_4_ = uStack_168;
          auVar44 = _lqc2(auVar29);
          _vmulabc(auVar46,auVar44);
          _vmaddabc(auVar52,auVar44);
          _vmaddabc(auVar54,auVar44);
          auVar37 = _vmaddbc(auVar51,auVar44);
          _sqc2(auVar37);
          auVar44 = _sqc2(auVar37);
          param_2[2] = auVar44;
          auVar44 = _lqc2(auStack_430);
          _vmulabc(auVar46,auVar44);
          _vmaddabc(auVar52,auVar44);
          _vmaddabc(auVar54,auVar44);
          auVar46 = _vmaddbc(auVar51,auVar44);
          _sqc2(auVar39);
          auVar44 = _sqc2(auVar46);
          param_2[3] = auVar44;
          _sqc2(auVar46);
          _sqc2(auVar45);
          _sqc2(auVar37);
          _sqc2(auVar46);
          return 1;
        }
        goto LAB_00330cdc;
      }
      lVar34 = FUN_0032fbc0();
      if (lVar34 == 0) {
        return 1;
      }
      if (param_1 != 0) {
        auVar37 = _lqc2(*pauVar41);
        auVar39 = _qmfc2(auVar37._0_4_);
        auVar44 = _sqc2(auVar37);
        uStack_8bc = auVar44._4_4_;
        auVar44 = _sqc2(auVar37);
        uStack_8a8 = auVar44._8_4_;
        auVar37 = _lqc2(pauVar41[1]);
        auVar44 = _qmfc2(auVar37._0_4_);
        uVar31 = auVar44._0_4_;
        auVar44 = _sqc2(auVar37);
        uStack_88c = auVar44._4_4_;
        auVar44 = _sqc2(auVar37);
        uStack_878 = auVar44._8_4_;
        auVar37 = _lqc2(pauVar41[2]);
        auVar44 = _qmfc2(auVar37._0_4_);
        uVar32 = auVar44._0_4_;
        auVar44 = _sqc2(auVar37);
        uStack_85c = auVar44._4_4_;
        auVar44 = _sqc2(auVar37);
        uStack_848 = auVar44._8_4_;
        auVar45 = _lqc2(pauVar41[3]);
        auVar37 = _qmfc2(auVar45._0_4_);
        auVar44 = _sqc2(auVar45);
        uStack_82c = auVar44._4_4_;
        auVar44 = _sqc2(auVar45);
        uStack_818 = auVar44._8_4_;
        auVar45 = _lqc2(*param_2);
        auVar16._4_4_ = uStack_82c;
        auVar16._0_4_ = auVar37._0_4_;
        auVar16._8_4_ = uStack_818;
        auVar16._12_4_ = 0x3f800000;
        auVar56 = _lqc2(auVar16);
        auVar46 = _lqc2(param_2[1]);
        auVar55 = _qmfc2(auVar56._0_4_);
        auVar2._4_4_ = uStack_8bc;
        auVar2._0_4_ = auVar39._0_4_;
        auVar2._8_4_ = uStack_8a8;
        auVar2._12_4_ = 0;
        auVar52 = _lqc2(auVar2);
        auVar44 = _sqc2(auVar56);
        auVar48 = _qmfc2(auVar52._0_4_);
        auVar10._4_4_ = uStack_85c;
        auVar10._0_4_ = uVar32;
        auVar10._8_4_ = uStack_848;
        auVar10._12_4_ = 0;
        auVar39 = _lqc2(auVar10);
        auVar37 = _lqc2(auVar44);
        auVar4._4_4_ = uStack_88c;
        auVar4._0_4_ = uVar31;
        auVar4._8_4_ = uStack_878;
        auVar4._12_4_ = 0;
        auVar47 = _lqc2(auVar4);
        auVar38 = _lqc2(param_2[2]);
        _vmulabc(auVar52,auVar45);
        _vmaddabc(auVar47,auVar45);
        _vmaddabc(auVar39,auVar45);
        auVar54 = _vmaddbc(auVar37,auVar45);
        auVar47 = _lqc2(param_2[3]);
        _sqc2(auVar54);
        auVar11._4_4_ = uStack_85c;
        auVar11._0_4_ = uVar32;
        auVar11._8_4_ = uStack_848;
        auVar11._12_4_ = 0;
        auVar39 = _lqc2(auVar11);
        auVar37 = _lqc2(auVar44);
        auVar5._4_4_ = uStack_88c;
        auVar5._0_4_ = uVar31;
        auVar5._8_4_ = uStack_878;
        auVar5._12_4_ = 0;
        auVar45 = _lqc2(auVar5);
        _vmulabc(auVar52,auVar46);
        _vmaddabc(auVar45,auVar46);
        _vmaddabc(auVar39,auVar46);
        auVar51 = _vmaddbc(auVar37,auVar46);
        _sqc2(auVar51);
        auVar12._4_4_ = uStack_85c;
        auVar12._0_4_ = uVar32;
        auVar12._8_4_ = uStack_848;
        auVar12._12_4_ = 0;
        auVar39 = _lqc2(auVar12);
        auVar37 = _lqc2(auVar44);
        auVar6._4_4_ = uStack_88c;
        auVar6._0_4_ = uVar31;
        auVar6._8_4_ = uStack_878;
        auVar6._12_4_ = 0;
        auVar45 = _lqc2(auVar6);
        _vmulabc(auVar52,auVar38);
        _vmaddabc(auVar45,auVar38);
        _vmaddabc(auVar39,auVar38);
        auVar46 = _vmaddbc(auVar37,auVar38);
        _sqc2(auVar46);
        auVar13._4_4_ = uStack_85c;
        auVar13._0_4_ = uVar32;
        auVar13._8_4_ = uStack_848;
        auVar13._12_4_ = 0;
        auVar39 = _lqc2(auVar13);
        auVar44 = _lqc2(auVar44);
        auVar7._4_4_ = uStack_88c;
        auVar7._0_4_ = uVar31;
        auVar7._8_4_ = uStack_878;
        auVar7._12_4_ = 0;
        auVar37 = _lqc2(auVar7);
        _vmulabc(auVar52,auVar47);
        _vmaddabc(auVar37,auVar47);
        _vmaddabc(auVar39,auVar47);
        auVar39 = _vmaddbc(auVar44,auVar47);
        _sqc2(auVar54);
        _sqc2(auVar39);
        _sqc2(auVar51);
        _sqc2(auVar46);
        _sqc2(auVar39);
        _sqc2(auVar54);
        _sqc2(auVar51);
        _sqc2(auVar46);
        _sqc2(auVar39);
        auVar8._4_4_ = uStack_88c;
        auVar8._0_4_ = uVar31;
        auVar8._8_4_ = uStack_878;
        auVar8._12_4_ = 0;
        auVar37 = _lqc2(auVar8);
        auVar14._4_4_ = uStack_85c;
        auVar14._0_4_ = uVar32;
        auVar14._8_4_ = uStack_848;
        auVar14._12_4_ = 0;
        auVar45 = _lqc2(auVar14);
        auVar47 = _qmfc2(auVar37._0_4_);
        _sqc2(auVar54);
        auVar38 = _qmfc2(auVar45._0_4_);
        _sqc2(auVar51);
        _sqc2(auVar46);
        _sqc2(auVar39);
        auVar44 = _sqc2(auVar54);
        *param_2 = auVar44;
        auVar44 = _sqc2(auVar51);
        param_2[1] = auVar44;
        auVar44 = _sqc2(auVar46);
        param_2[2] = auVar44;
        auVar44 = _sqc2(auVar39);
        param_2[3] = auVar44;
        auVar44 = _sqc2(auVar52);
        auVar37 = _sqc2(auVar37);
        auVar39 = _sqc2(auVar45);
        auVar45 = _sqc2(auVar56);
        auVar46 = _sqc2(auVar52);
        uStack_68c = auVar46._4_4_;
        auVar46 = _lqc2(auVar37);
        auVar46 = _sqc2(auVar46);
        uStack_67c = auVar46._4_4_;
        auVar46 = _lqc2(auVar39);
        auVar46 = _sqc2(auVar46);
        uStack_66c = auVar46._4_4_;
        auVar46 = _lqc2(auVar45);
        auVar46 = _sqc2(auVar46);
        uStack_65c = auVar46._4_4_;
        auVar46 = _lqc2(auVar44);
        auVar46 = _sqc2(auVar46);
        uStack_648 = auVar46._8_4_;
        auVar46 = _lqc2(auVar37);
        auVar46 = _sqc2(auVar46);
        uStack_638 = auVar46._8_4_;
        auVar46 = _lqc2(auVar39);
        auVar46 = _sqc2(auVar46);
        uStack_628 = auVar46._8_4_;
        auVar46 = _lqc2(auVar45);
        auVar46 = _sqc2(auVar46);
        uStack_618 = auVar46._8_4_;
        auVar44 = _lqc2(auVar44);
        auVar44 = _sqc2(auVar44);
        uStack_604 = auVar44._12_4_;
        auVar44 = _lqc2(auVar37);
        auVar44 = _sqc2(auVar44);
        uStack_5f4 = auVar44._12_4_;
        auVar44 = _lqc2(auVar39);
        auVar44 = _sqc2(auVar44);
        uStack_5e4 = auVar44._12_4_;
        auVar44 = _lqc2(auVar45);
        auVar44 = _sqc2(auVar44);
        uStack_5d4 = auVar44._12_4_;
        auVar46 = _lqc2(*param_2);
        auVar52 = _lqc2(param_2[1]);
        auVar54 = _lqc2(param_2[2]);
        auVar51 = _lqc2(param_2[3]);
        auStack_8e0._4_4_ = uStack_5f4;
        auStack_8e0._0_4_ = uStack_604;
        auStack_8e0._8_4_ = uStack_5e4;
        auStack_8e0._12_4_ = uStack_5d4;
        auVar3._4_4_ = auVar47._0_4_;
        auVar3._0_4_ = auVar48._0_4_;
        auVar3._8_4_ = auVar38._0_4_;
        auVar3._12_4_ = auVar55._0_4_;
        auVar44 = _lqc2(auVar3);
        _vmulabc(auVar46,auVar44);
        _vmaddabc(auVar52,auVar44);
        _vmaddabc(auVar54,auVar44);
        auVar39 = _vmaddbc(auVar51,auVar44);
        _sqc2(auVar39);
        auVar9._4_4_ = uStack_67c;
        auVar9._0_4_ = uStack_68c;
        auVar9._8_4_ = uStack_66c;
        auVar9._12_4_ = uStack_65c;
        auVar37 = _lqc2(auVar9);
        auVar44 = _sqc2(auVar39);
        *param_2 = auVar44;
        _vmulabc(auVar46,auVar37);
        _vmaddabc(auVar52,auVar37);
        _vmaddabc(auVar54,auVar37);
        auVar45 = _vmaddbc(auVar51,auVar37);
        _sqc2(auVar45);
        auVar44 = _sqc2(auVar45);
        param_2[1] = auVar44;
        auVar15._4_4_ = uStack_638;
        auVar15._0_4_ = uStack_648;
        auVar15._8_4_ = uStack_628;
        auVar15._12_4_ = uStack_618;
        auVar44 = _lqc2(auVar15);
        _vmulabc(auVar46,auVar44);
        _vmaddabc(auVar52,auVar44);
        _vmaddabc(auVar54,auVar44);
        auVar37 = _vmaddbc(auVar51,auVar44);
        _sqc2(auVar37);
        auVar44 = _sqc2(auVar37);
        param_2[2] = auVar44;
        auVar44 = _lqc2(auStack_8e0);
        _vmulabc(auVar46,auVar44);
        _vmaddabc(auVar52,auVar44);
        _vmaddabc(auVar54,auVar44);
        auVar46 = _vmaddbc(auVar51,auVar44);
        _sqc2(auVar39);
        auVar44 = _sqc2(auVar46);
        param_2[3] = auVar44;
        _sqc2(auVar46);
        _sqc2(auVar45);
        _sqc2(auVar37);
        _sqc2(auVar46);
      }
    }
    else {
      auVar37 = _qmfc2(auVar44._0_4_);
      fVar33 = auVar37._0_4_;
      auVar44 = _sqc2(auVar44);
      fStack_d6c = auVar44._4_4_;
      auVar44 = _lqc2(auStack_60);
      auVar44 = _sqc2(auVar44);
      fStack_d58 = auVar44._8_4_;
      fVar42 = fStack_50 * 0.5;
      *(float *)*param_2 = fVar42 * ((fStack_d6c + fStack_d58) - fVar33);
      *(undefined4 *)(*param_2 + 4) = 0;
      *(undefined4 *)(*param_2 + 8) = 0;
      *(undefined4 *)(*param_2 + 0xc) = 0;
      *(undefined4 *)param_2[1] = 0;
      *(float *)(param_2[1] + 4) = fVar42 * ((fStack_d58 + fVar33) - fStack_d6c);
      *(undefined4 *)(param_2[1] + 8) = 0;
      *(undefined4 *)(param_2[1] + 0xc) = 0;
      *(undefined4 *)param_2[2] = 0;
      *(undefined4 *)(param_2[2] + 4) = 0;
      *(float *)(param_2[2] + 8) = fVar42 * ((fVar33 + fStack_d6c) - fStack_d58);
      *(undefined4 *)(param_2[2] + 0xc) = 0;
      *(undefined4 *)param_2[3] = 0;
      *(undefined4 *)(param_2[3] + 4) = 0;
      *(undefined4 *)(param_2[3] + 8) = 0;
      *(float *)(param_2[3] + 0xc) = fStack_50;
      if (param_1 != 0) {
        auVar37 = _lqc2(*pauVar41);
        auVar39 = _qmfc2(auVar37._0_4_);
        auVar44 = _sqc2(auVar37);
        uStack_cbc = auVar44._4_4_;
        auVar44 = _sqc2(auVar37);
        uStack_ca8 = auVar44._8_4_;
        auVar37 = _lqc2(pauVar41[1]);
        auVar44 = _qmfc2(auVar37._0_4_);
        uVar31 = auVar44._0_4_;
        auVar44 = _sqc2(auVar37);
        uStack_c8c = auVar44._4_4_;
        auVar44 = _sqc2(auVar37);
        uStack_c78 = auVar44._8_4_;
        auVar37 = _lqc2(pauVar41[2]);
        auVar44 = _qmfc2(auVar37._0_4_);
        uVar32 = auVar44._0_4_;
        auVar44 = _sqc2(auVar37);
        uStack_c5c = auVar44._4_4_;
        auVar44 = _sqc2(auVar37);
        uStack_c48 = auVar44._8_4_;
        auVar45 = _lqc2(pauVar41[3]);
        auVar37 = _qmfc2(auVar45._0_4_);
        auVar44 = _sqc2(auVar45);
        uStack_c2c = auVar44._4_4_;
        auVar44 = _sqc2(auVar45);
        uStack_c18 = auVar44._8_4_;
        auVar46 = _lqc2(*param_2);
        auVar49._4_4_ = uStack_c2c;
        auVar49._0_4_ = auVar37._0_4_;
        auVar49._8_4_ = uStack_c18;
        auVar49._12_4_ = 0x3f800000;
        auVar53 = _lqc2(auVar49);
        auVar47 = _lqc2(param_2[1]);
        auVar38 = _qmfc2(auVar53._0_4_);
        auVar44._4_4_ = uStack_cbc;
        auVar44._0_4_ = auVar39._0_4_;
        auVar44._8_4_ = uStack_ca8;
        auVar44._12_4_ = 0;
        auVar50 = _lqc2(auVar44);
        auVar44 = _sqc2(auVar53);
        auVar40 = _qmfc2(auVar50._0_4_);
        auVar48._4_4_ = uStack_c5c;
        auVar48._0_4_ = uVar32;
        auVar48._8_4_ = uStack_c48;
        auVar48._12_4_ = 0;
        auVar45 = _lqc2(auVar48);
        auVar37 = _lqc2(auVar44);
        auVar39._4_4_ = uStack_c8c;
        auVar39._0_4_ = uVar31;
        auVar39._8_4_ = uStack_c78;
        auVar39._12_4_ = 0;
        auVar39 = _lqc2(auVar39);
        auVar55 = _lqc2(param_2[2]);
        _vmulabc(auVar50,auVar46);
        _vmaddabc(auVar39,auVar46);
        _vmaddabc(auVar45,auVar46);
        auVar49 = _vmaddbc(auVar37,auVar46);
        auVar56 = _lqc2(param_2[3]);
        _sqc2(auVar49);
        auVar51._4_4_ = uStack_c5c;
        auVar51._0_4_ = uVar32;
        auVar51._8_4_ = uStack_c48;
        auVar51._12_4_ = 0;
        auVar39 = _lqc2(auVar51);
        auVar37 = _lqc2(auVar44);
        auVar45._4_4_ = uStack_c8c;
        auVar45._0_4_ = uVar31;
        auVar45._8_4_ = uStack_c78;
        auVar45._12_4_ = 0;
        auVar45 = _lqc2(auVar45);
        _vmulabc(auVar50,auVar47);
        _vmaddabc(auVar45,auVar47);
        _vmaddabc(auVar39,auVar47);
        auVar48 = _vmaddbc(auVar37,auVar47);
        _sqc2(auVar48);
        auVar54._4_4_ = uStack_c5c;
        auVar54._0_4_ = uVar32;
        auVar54._8_4_ = uStack_c48;
        auVar54._12_4_ = 0;
        auVar39 = _lqc2(auVar54);
        auVar37 = _lqc2(auVar44);
        auVar46._4_4_ = uStack_c8c;
        auVar46._0_4_ = uVar31;
        auVar46._8_4_ = uStack_c78;
        auVar46._12_4_ = 0;
        auVar45 = _lqc2(auVar46);
        _vmulabc(auVar50,auVar55);
        _vmaddabc(auVar45,auVar55);
        _vmaddabc(auVar39,auVar55);
        auVar46 = _vmaddbc(auVar37,auVar55);
        _sqc2(auVar46);
        auVar52._4_4_ = uStack_c5c;
        auVar52._0_4_ = uVar32;
        auVar52._8_4_ = uStack_c48;
        auVar52._12_4_ = 0;
        auVar39 = _lqc2(auVar52);
        auVar44 = _lqc2(auVar44);
        auVar47._4_4_ = uStack_c8c;
        auVar47._0_4_ = uVar31;
        auVar47._8_4_ = uStack_c78;
        auVar47._12_4_ = 0;
        auVar37 = _lqc2(auVar47);
        _vmulabc(auVar50,auVar56);
        _vmaddabc(auVar37,auVar56);
        _vmaddabc(auVar39,auVar56);
        auVar39 = _vmaddbc(auVar44,auVar56);
        _sqc2(auVar49);
        _sqc2(auVar39);
        _sqc2(auVar48);
        _sqc2(auVar46);
        _sqc2(auVar39);
        _sqc2(auVar49);
        _sqc2(auVar48);
        _sqc2(auVar46);
        _sqc2(auVar39);
        auVar55._4_4_ = uStack_c8c;
        auVar55._0_4_ = uVar31;
        auVar55._8_4_ = uStack_c78;
        auVar55._12_4_ = 0;
        auVar37 = _lqc2(auVar55);
        auVar56._4_4_ = uStack_c5c;
        auVar56._0_4_ = uVar32;
        auVar56._8_4_ = uStack_c48;
        auVar56._12_4_ = 0;
        auVar45 = _lqc2(auVar56);
        auVar47 = _qmfc2(auVar37._0_4_);
        _sqc2(auVar49);
        auVar55 = _qmfc2(auVar45._0_4_);
        _sqc2(auVar48);
        _sqc2(auVar46);
        _sqc2(auVar39);
        auVar44 = _sqc2(auVar49);
        *param_2 = auVar44;
        auVar44 = _sqc2(auVar48);
        param_2[1] = auVar44;
        auVar44 = _sqc2(auVar46);
        param_2[2] = auVar44;
        auVar44 = _sqc2(auVar39);
        param_2[3] = auVar44;
        auVar44 = _sqc2(auVar50);
        auVar37 = _sqc2(auVar37);
        auVar39 = _sqc2(auVar45);
        auVar45 = _sqc2(auVar53);
        auVar46 = _sqc2(auVar50);
        uStack_a8c = auVar46._4_4_;
        auVar46 = _lqc2(auVar37);
        auVar46 = _sqc2(auVar46);
        uStack_a7c = auVar46._4_4_;
        auVar46 = _lqc2(auVar39);
        auVar46 = _sqc2(auVar46);
        uStack_a6c = auVar46._4_4_;
        auVar46 = _lqc2(auVar45);
        auVar46 = _sqc2(auVar46);
        uStack_a5c = auVar46._4_4_;
        auVar46 = _lqc2(auVar44);
        auVar46 = _sqc2(auVar46);
        uStack_a48 = auVar46._8_4_;
        auVar46 = _lqc2(auVar37);
        auVar46 = _sqc2(auVar46);
        uStack_a38 = auVar46._8_4_;
        auVar46 = _lqc2(auVar39);
        auVar46 = _sqc2(auVar46);
        uStack_a28 = auVar46._8_4_;
        auVar46 = _lqc2(auVar45);
        auVar46 = _sqc2(auVar46);
        uStack_a18 = auVar46._8_4_;
        auVar44 = _lqc2(auVar44);
        auVar44 = _sqc2(auVar44);
        uStack_a04 = auVar44._12_4_;
        auVar44 = _lqc2(auVar37);
        auVar44 = _sqc2(auVar44);
        uStack_9f4 = auVar44._12_4_;
        auVar44 = _lqc2(auVar39);
        auVar44 = _sqc2(auVar44);
        uStack_9e4 = auVar44._12_4_;
        auVar44 = _lqc2(auVar45);
        auVar44 = _sqc2(auVar44);
        uStack_9d4 = auVar44._12_4_;
        auVar46 = _lqc2(*param_2);
        auVar54 = _lqc2(param_2[1]);
        auVar51 = _lqc2(param_2[2]);
        auVar48 = _lqc2(param_2[3]);
        auStack_ce0._4_4_ = uStack_9f4;
        auStack_ce0._0_4_ = uStack_a04;
        auStack_ce0._8_4_ = uStack_9e4;
        auStack_ce0._12_4_ = uStack_9d4;
        auVar37._4_4_ = auVar47._0_4_;
        auVar37._0_4_ = auVar40._0_4_;
        auVar37._8_4_ = auVar55._0_4_;
        auVar37._12_4_ = auVar38._0_4_;
        auVar44 = _lqc2(auVar37);
        _vmulabc(auVar46,auVar44);
        _vmaddabc(auVar54,auVar44);
        _vmaddabc(auVar51,auVar44);
        auVar39 = _vmaddbc(auVar48,auVar44);
        _sqc2(auVar39);
        auVar38._4_4_ = uStack_a7c;
        auVar38._0_4_ = uStack_a8c;
        auVar38._8_4_ = uStack_a6c;
        auVar38._12_4_ = uStack_a5c;
        auVar37 = _lqc2(auVar38);
        auVar44 = _sqc2(auVar39);
        *param_2 = auVar44;
        _vmulabc(auVar46,auVar37);
        _vmaddabc(auVar54,auVar37);
        _vmaddabc(auVar51,auVar37);
        auVar45 = _vmaddbc(auVar48,auVar37);
        _sqc2(auVar45);
        auVar44 = _sqc2(auVar45);
        param_2[1] = auVar44;
        auVar40._4_4_ = uStack_a38;
        auVar40._0_4_ = uStack_a48;
        auVar40._8_4_ = uStack_a28;
        auVar40._12_4_ = uStack_a18;
        auVar44 = _lqc2(auVar40);
        _vmulabc(auVar46,auVar44);
        _vmaddabc(auVar54,auVar44);
        _vmaddabc(auVar51,auVar44);
        auVar37 = _vmaddbc(auVar48,auVar44);
        _sqc2(auVar37);
        auVar44 = _sqc2(auVar37);
        param_2[2] = auVar44;
        auVar44 = _lqc2(auStack_ce0);
        _vmulabc(auVar46,auVar44);
        _vmaddabc(auVar54,auVar44);
        _vmaddabc(auVar51,auVar44);
        auVar46 = _vmaddbc(auVar48,auVar44);
        _sqc2(auVar39);
        auVar44 = _sqc2(auVar46);
        param_2[3] = auVar44;
        _sqc2(auVar46);
        _sqc2(auVar45);
        _sqc2(auVar37);
        _sqc2(auVar46);
      }
    }
    uVar35 = 1;
  }
  return uVar35;
}


// ==== FUN_00330cf8 @ 00330cf8 ====

undefined8 FUN_00330cf8(int param_1,undefined1 (*param_2) [16],float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fStack_1c;
  float fStack_8;
  
  iVar1 = **(int **)(param_1 + 0x58);
  fVar5 = *(float *)(param_1 + 0x4c);
  if (iVar1 == 2) {
    fVar2 = *(float *)(param_1 + 0x40);
    fVar3 = fVar5 * 4.0;
    _lqc2(*param_2);
    fVar4 = (fVar5 * 1.6 * fVar5 * fVar5 + fVar5 * 0.75 * fVar5 * fVar2 + fVar3 * fVar2 * fVar2 +
            fVar2 * fVar2 * fVar2) / (fVar3 + fVar2 * 3.0);
    auVar6 = _qmtc2(fVar4);
    auVar8 = _qmtc2(fVar4);
    auVar6 = _vaddbc(in_vf0,auVar6);
    _vmove(auVar6);
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar6 = _sqc2(auVar6);
    *param_2 = auVar6;
    auVar6 = _sqc2(auVar8);
    *param_2 = auVar6;
    auVar6 = _qmtc2(fVar5 * fVar5 * 0.4);
    auVar6 = _vaddbc(in_vf0,auVar6);
    *param_3 = fVar5 * 3.1415927 * fVar5 * (fVar3 / 3.0 + fVar2 + fVar2);
    auVar6 = _sqc2(auVar6);
    *param_2 = auVar6;
  }
  else if (iVar1 < 3) {
    if (iVar1 != 1) {
      return 0;
    }
    fVar3 = fVar5 * fVar5 * 0.4;
    _lqc2(*param_2);
    auVar6 = _qmtc2(fVar3);
    auVar8 = _qmtc2(fVar3);
    auVar6 = _vaddbc(in_vf0,auVar6);
    _vmove(auVar6);
    auVar7 = _qmtc2(fVar3);
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar6 = _sqc2(auVar6);
    *param_2 = auVar6;
    auVar6 = _sqc2(auVar8);
    *param_2 = auVar6;
    auVar6 = _vaddbc(in_vf0,auVar7);
    auVar6 = _sqc2(auVar6);
    *param_2 = auVar6;
    *param_3 = (fVar5 * 3.1415927 * fVar5 * fVar5 * 4.0) / 3.0;
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    auVar6 = _qmtc2(*(undefined4 *)(param_1 + 0x40));
    _vaddbc(in_vf0,auVar6);
    auVar6 = _qmtc2(*(undefined4 *)(param_1 + 0x44));
    _vaddbc(in_vf0,auVar6);
    auVar6 = _qmtc2(*(undefined4 *)(param_1 + 0x48));
    auVar8 = _vaddbc(in_vf0,auVar6);
    auVar6 = _qmfc2(auVar8._0_4_);
    fVar3 = auVar6._0_4_;
    auVar6 = _sqc2(auVar8);
    fStack_1c = auVar6._4_4_;
    auVar6 = _sqc2(auVar8);
    fStack_8 = auVar6._8_4_;
    _lqc2(*param_2);
    fVar4 = fVar3 + fStack_1c;
    fVar2 = fVar5 * fVar5 * 0.5;
    auVar6 = _qmtc2((fStack_1c * fStack_1c + fStack_8 * fStack_8 +
                    (fStack_1c + fStack_8 + fStack_1c + fStack_8) * fVar5) / 3.0 + fVar2);
    auVar6 = _vaddbc(in_vf0,auVar6);
    auVar6 = _sqc2(auVar6);
    *param_2 = auVar6;
    auVar6 = _qmtc2((fStack_8 * fStack_8 + fVar3 * fVar3 +
                    (fStack_8 + fVar3 + fStack_8 + fVar3) * fVar5) / 3.0 + fVar2);
    auVar6 = _vaddbc(in_vf0,auVar6);
    auVar6 = _sqc2(auVar6);
    *param_2 = auVar6;
    auVar6 = _qmtc2((fVar3 * fVar3 + fStack_1c * fStack_1c + (fVar4 + fVar4) * fVar5) / 3.0 + fVar2)
    ;
    auVar6 = _vaddbc(in_vf0,auVar6);
    *param_3 = fVar3 * 8.0 * fStack_1c * fStack_8 +
               (fVar3 * fStack_1c + fVar3 * fStack_8 + fStack_1c * fStack_8) * 8.0 * fVar5 +
               fVar5 * 6.2831855 * fVar5 * (fVar4 + fStack_8 + (fVar5 + fVar5) / 3.0);
    auVar6 = _sqc2(auVar6);
    *param_2 = auVar6;
  }
  return 1;
}


// ==== FUN_00331008 @ 00331008 ====
// GLOBAL PTR_DAT_0040e438 undefined_*
// GLOBAL null undefined1[16]_*

undefined8 FUN_00331008(float param_1,float param_2,int *param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 in_vf0 [16];
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
  undefined1 auStack_7d0 [16];
  undefined1 auStack_7c0 [16];
  undefined1 auStack_7b0 [16];
  undefined1 auStack_7a0 [16];
  undefined1 auStack_790 [16];
  undefined1 auStack_780 [16];
  undefined1 auStack_770 [16];
  undefined1 auStack_760 [16];
  undefined1 auStack_750 [16];
  undefined1 auStack_740 [16];
  undefined1 auStack_730 [16];
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [16];
  undefined1 auStack_700 [16];
  undefined1 auStack_6f0 [16];
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined1 auStack_6b0 [16];
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined1 auStack_690 [16];
  undefined1 auStack_680 [16];
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined1 auStack_660 [16];
  undefined1 auStack_650 [16];
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined1 auStack_630 [16];
  undefined1 auStack_620 [16];
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  float fStack_604;
  undefined1 auStack_600 [16];
  undefined1 auStack_5f0 [16];
  undefined1 auStack_5e0 [16];
  undefined1 auStack_5d0 [16];
  undefined1 auStack_5c0 [16];
  undefined1 auStack_5b0 [16];
  undefined1 auStack_5a0 [16];
  undefined1 auStack_590 [16];
  undefined1 auStack_580 [16];
  undefined1 auStack_570 [16];
  undefined1 auStack_560 [16];
  undefined1 auStack_550 [16];
  undefined1 auStack_540 [16];
  undefined1 auStack_530 [16];
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [16];
  undefined1 auStack_500 [16];
  undefined1 auStack_4f0 [16];
  undefined1 auStack_4e0 [16];
  undefined1 auStack_4d0 [16];
  undefined1 auStack_4c0 [16];
  undefined1 auStack_4b0 [16];
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined1 auStack_460 [16];
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [16];
  undefined1 auStack_430 [16];
  undefined1 auStack_420 [16];
  undefined1 auStack_410 [16];
  undefined1 auStack_400 [16];
  undefined1 auStack_3f0 [16];
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [16];
  undefined1 auStack_3b0 [16];
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined4 uStack_23c;
  undefined4 uStack_22c;
  undefined4 uStack_21c;
  undefined4 uStack_208;
  undefined4 uStack_1f8;
  undefined4 uStack_1e8;
  float fStack_1ac;
  float fStack_198;
  float fStack_18c;
  float fStack_178;
  float fStack_16c;
  float fStack_158;
  float fStack_14c;
  float fStack_138;
  float fStack_12c;
  int iStack_11c;
  float fStack_108;
  float fStack_f8;
  undefined1 auStack_f0 [16];
  float afStack_e0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  _lqc2(auStack_f0);
  auVar8 = _qmtc2(0x3e2aaaab);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar9 = _qmtc2(0x3e2aaaab);
  _vmove(auVar8);
  _sqc2(auVar8);
  auVar8 = _vaddbc(in_vf0,auVar9);
  _sqc2(auVar8);
  auVar8 = _qmtc2(0x3e2aaaab);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auStack_f0 = _sqc2(auVar8);
  uVar6 = 0;
  fVar7 = 1.0;
  auStack_790 = *(undefined1 (*) [16])PTR_DAT_0040e438;
  pauVar1 = (undefined1 (*) [16])*param_3;
  afStack_e0[0] = 1.0;
  auStack_780 = *(undefined1 (*) [16])(PTR_DAT_0040e438 + 0x10);
  auStack_770 = *(undefined1 (*) [16])(PTR_DAT_0040e438 + 0x20);
  auStack_760 = *(undefined1 (*) [16])(PTR_DAT_0040e438 + 0x30);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    lVar5 = FUN_00330cf8(pauVar1,auStack_f0,afStack_e0);
    if (lVar5 == 0) {
      lVar5 = FUN_0032fca0(pauVar1,auStack_7d0);
      if (lVar5 != 0) {
        uVar6 = 1;
        auVar8 = _lqc2(auStack_7a0);
        auStack_6f0 = _sqc2(auVar8);
        afStack_e0[0] = (float)auStack_6f0._12_4_;
        auVar8 = _lqc2(auStack_7a0);
        auVar10 = _lqc2(*(undefined1 (*) [16])PTR_DAT_0040e438);
        _lqc2(auStack_a0);
        _vaddbc(in_vf0,auVar8);
        auStack_790 = _sqc2(auVar10);
        _vaddbc(in_vf0,auVar8);
        auVar9 = _vaddbc(in_vf0,auVar8);
        auStack_780 = *(undefined1 (*) [16])(PTR_DAT_0040e438 + 0x10);
        auVar13 = _qmtc2(fVar7 / (float)auStack_6f0._12_4_);
        auVar8 = _qmfc2(auVar10._0_4_);
        auVar24 = _vmulbc(auVar9,auVar13);
        auVar9 = _vsub(in_vf0,auVar24);
        uStack_6a0 = auVar8._0_4_;
        auStack_770 = *(undefined1 (*) [16])(PTR_DAT_0040e438 + 0x20);
        auStack_760 = _sqc2(auVar9);
        auStack_690 = _sqc2(auVar10);
        uStack_69c = auStack_690._4_4_;
        auStack_680 = _sqc2(auVar10);
        uStack_698 = auStack_680._8_4_;
        uStack_694 = 0;
        auVar9 = _lqc2(auStack_780);
        auVar8 = _qmfc2(auVar9._0_4_);
        uStack_670 = auVar8._0_4_;
        auStack_660 = _sqc2(auVar9);
        uStack_66c = auStack_660._4_4_;
        auStack_650 = _sqc2(auVar9);
        uStack_668 = auStack_650._8_4_;
        uStack_664 = 0;
        auVar9 = _lqc2(auStack_770);
        auVar8 = _qmfc2(auVar9._0_4_);
        uStack_640 = auVar8._0_4_;
        auStack_630 = _sqc2(auVar9);
        uStack_63c = auStack_630._4_4_;
        auStack_620 = _sqc2(auVar9);
        uStack_638 = auStack_620._8_4_;
        uStack_634 = 0;
        auVar9 = _lqc2(auStack_760);
        auVar8 = _qmfc2(auVar9._0_4_);
        uStack_610 = auVar8._0_4_;
        auStack_600 = _sqc2(auVar9);
        uStack_60c = auStack_600._4_4_;
        auStack_5f0 = _sqc2(auVar9);
        uStack_608 = auStack_5f0._8_4_;
        auVar16._4_4_ = auStack_600._4_4_;
        auVar16._0_4_ = uStack_610;
        auVar16._8_4_ = auStack_5f0._8_4_;
        auVar16._12_4_ = fVar7;
        auVar19 = _lqc2(auVar16);
        auVar8._4_4_ = auStack_690._4_4_;
        auVar8._0_4_ = uStack_6a0;
        auVar8._8_4_ = auStack_680._8_4_;
        auVar8._12_4_ = 0;
        auVar16 = _lqc2(auVar8);
        auVar9 = _qmfc2(auVar19._0_4_);
        auVar20 = _lqc2(auStack_7d0);
        auVar13 = _qmfc2(auVar16._0_4_);
        auVar8 = _sqc2(auVar19);
        auVar11 = _lqc2(auStack_7c0);
        auVar17 = _lqc2(auStack_7a0);
        auVar12._4_4_ = auStack_630._4_4_;
        auVar12._0_4_ = uStack_640;
        auVar12._8_4_ = auStack_620._8_4_;
        auVar12._12_4_ = 0;
        auVar18 = _lqc2(auVar12);
        auVar15 = _lqc2(auVar8);
        auVar10._4_4_ = auStack_660._4_4_;
        auVar10._0_4_ = uStack_670;
        auVar10._8_4_ = auStack_650._8_4_;
        auVar10._12_4_ = 0;
        auVar10 = _lqc2(auVar10);
        _vmulabc(auVar16,auVar20);
        _vmaddabc(auVar10,auVar20);
        _vmaddabc(auVar18,auVar20);
        auVar14 = _vmaddbc(auVar15,auVar20);
        uStack_6d4 = auVar9._0_4_;
        auStack_520 = _sqc2(auVar14);
        auVar18 = _lqc2(auStack_7b0);
        uStack_6e0 = auVar13._0_4_;
        auVar21._4_4_ = auStack_630._4_4_;
        auVar21._0_4_ = uStack_640;
        auVar21._8_4_ = auStack_620._8_4_;
        auVar21._12_4_ = 0;
        auVar10 = _lqc2(auVar21);
        auVar9 = _lqc2(auVar8);
        auVar13._4_4_ = auStack_660._4_4_;
        auVar13._0_4_ = uStack_670;
        auVar13._8_4_ = auStack_650._8_4_;
        auVar13._12_4_ = 0;
        auVar13 = _lqc2(auVar13);
        _vmulabc(auVar16,auVar11);
        _vmaddabc(auVar13,auVar11);
        _vmaddabc(auVar10,auVar11);
        auVar12 = _vmaddbc(auVar9,auVar11);
        auStack_510 = _sqc2(auVar12);
        auVar22._4_4_ = auStack_630._4_4_;
        auVar22._0_4_ = uStack_640;
        auVar22._8_4_ = auStack_620._8_4_;
        auVar22._12_4_ = 0;
        auVar10 = _lqc2(auVar22);
        auVar9 = _lqc2(auVar8);
        auVar15._4_4_ = auStack_660._4_4_;
        auVar15._0_4_ = uStack_670;
        auVar15._8_4_ = auStack_650._8_4_;
        auVar15._12_4_ = 0;
        auVar13 = _lqc2(auVar15);
        _vmulabc(auVar16,auVar18);
        _vmaddabc(auVar13,auVar18);
        _vmaddabc(auVar10,auVar18);
        auVar11 = _vmaddbc(auVar9,auVar18);
        auStack_500 = _sqc2(auVar11);
        auVar23._4_4_ = auStack_630._4_4_;
        auVar23._0_4_ = uStack_640;
        auVar23._8_4_ = auStack_620._8_4_;
        auVar23._12_4_ = 0;
        auVar10 = _lqc2(auVar23);
        auVar8 = _lqc2(auVar8);
        auVar18._4_4_ = auStack_660._4_4_;
        auVar18._0_4_ = uStack_670;
        auVar18._8_4_ = auStack_650._8_4_;
        auVar18._12_4_ = 0;
        auVar9 = _lqc2(auVar18);
        _vmulabc(auVar16,auVar17);
        _vmaddabc(auVar9,auVar17);
        _vmaddabc(auVar10,auVar17);
        auVar13 = _vmaddbc(auVar8,auVar17);
        auStack_560 = _sqc2(auVar14);
        auStack_4f0 = _sqc2(auVar13);
        auStack_550 = _sqc2(auVar12);
        auStack_540 = _sqc2(auVar11);
        auStack_530 = _sqc2(auVar13);
        auStack_5a0 = _sqc2(auVar14);
        auStack_590 = _sqc2(auVar12);
        auStack_580 = _sqc2(auVar11);
        auStack_570 = _sqc2(auVar13);
        auVar20._4_4_ = auStack_660._4_4_;
        auVar20._0_4_ = uStack_670;
        auVar20._8_4_ = auStack_650._8_4_;
        auVar20._12_4_ = 0;
        auVar15 = _lqc2(auVar20);
        auVar17._4_4_ = auStack_630._4_4_;
        auVar17._0_4_ = uStack_640;
        auVar17._8_4_ = auStack_620._8_4_;
        auVar17._12_4_ = 0;
        auVar18 = _lqc2(auVar17);
        auVar8 = _qmfc2(auVar15._0_4_);
        auVar9 = _qmfc2(auVar18._0_4_);
        uStack_6dc = auVar8._0_4_;
        uStack_6d8 = auVar9._0_4_;
        auStack_5e0 = _sqc2(auVar14);
        auStack_5d0 = _sqc2(auVar12);
        auStack_5c0 = _sqc2(auVar11);
        auStack_5b0 = _sqc2(auVar13);
        auVar8 = _sqc2(auVar14);
        auVar9 = _sqc2(auVar12);
        auVar10 = _sqc2(auVar11);
        auVar13 = _sqc2(auVar13);
        auStack_4e0 = _sqc2(auVar16);
        auStack_4d0 = _sqc2(auVar15);
        auStack_4c0 = _sqc2(auVar18);
        auStack_4b0 = _sqc2(auVar19);
        auStack_460 = _sqc2(auVar16);
        auVar15 = _lqc2(auStack_4d0);
        auStack_450 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4c0);
        auStack_440 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4b0);
        auStack_430 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4e0);
        auStack_420 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4d0);
        auStack_410 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4c0);
        auStack_400 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4b0);
        auStack_3f0 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4e0);
        auStack_3e0 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4d0);
        auStack_3d0 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4c0);
        auStack_3c0 = _sqc2(auVar15);
        auVar15 = _lqc2(auStack_4b0);
        auStack_3b0 = _sqc2(auVar15);
        uStack_390 = auStack_460._4_4_;
        uStack_38c = auStack_450._4_4_;
        uStack_388 = auStack_440._4_4_;
        uStack_384 = auStack_430._4_4_;
        uStack_380 = auStack_420._8_4_;
        uStack_490 = auStack_460._4_4_;
        uStack_48c = auStack_450._4_4_;
        uStack_488 = auStack_440._4_4_;
        uStack_484 = auStack_430._4_4_;
        uStack_37c = auStack_410._8_4_;
        uStack_378 = auStack_400._8_4_;
        uStack_374 = auStack_3f0._8_4_;
        uStack_370 = auStack_3e0._12_4_;
        uStack_480 = auStack_420._8_4_;
        uStack_47c = auStack_410._8_4_;
        uStack_478 = auStack_400._8_4_;
        uStack_474 = auStack_3f0._8_4_;
        uStack_36c = auStack_3d0._12_4_;
        uStack_368 = auStack_3c0._12_4_;
        uStack_364 = auStack_3b0._12_4_;
        uStack_470 = auStack_3e0._12_4_;
        uStack_46c = auStack_3d0._12_4_;
        uStack_468 = auStack_3c0._12_4_;
        uStack_464 = auStack_3b0._12_4_;
        uStack_6d0 = auStack_460._4_4_;
        uStack_6cc = auStack_450._4_4_;
        uStack_6c8 = auStack_440._4_4_;
        uStack_6c4 = auStack_430._4_4_;
        uStack_6c0 = auStack_420._8_4_;
        uStack_6bc = auStack_410._8_4_;
        uStack_6b8 = auStack_400._8_4_;
        uStack_6b4 = auStack_3f0._8_4_;
        auStack_6b0._4_4_ = auStack_3d0._12_4_;
        auStack_6b0._0_4_ = auStack_3e0._12_4_;
        auStack_6b0._8_4_ = auStack_3c0._12_4_;
        auStack_6b0._12_4_ = auStack_3b0._12_4_;
        auVar15 = _lqc2(auVar8);
        auVar12 = _lqc2(auVar9);
        auVar20 = _lqc2(auVar10);
        auVar13 = _lqc2(auVar13);
        auVar9._4_4_ = uStack_6dc;
        auVar9._0_4_ = uStack_6e0;
        auVar9._8_4_ = uStack_6d8;
        auVar9._12_4_ = uStack_6d4;
        auVar8 = _lqc2(auVar9);
        _vmulabc(auVar15,auVar8);
        _vmaddabc(auVar12,auVar8);
        _vmaddabc(auVar20,auVar8);
        auVar18 = _vmaddbc(auVar13,auVar8);
        auStack_320 = _sqc2(auVar18);
        auVar11._4_4_ = auStack_450._4_4_;
        auVar11._0_4_ = auStack_460._4_4_;
        auVar11._8_4_ = auStack_440._4_4_;
        auVar11._12_4_ = auStack_430._4_4_;
        auVar8 = _lqc2(auVar11);
        _vmulabc(auVar15,auVar8);
        _vmaddabc(auVar12,auVar8);
        _vmaddabc(auVar20,auVar8);
        auVar10 = _vmaddbc(auVar13,auVar8);
        auStack_310 = _sqc2(auVar10);
        auVar14._4_4_ = auStack_410._8_4_;
        auVar14._0_4_ = auStack_420._8_4_;
        auVar14._8_4_ = auStack_400._8_4_;
        auVar14._12_4_ = auStack_3f0._8_4_;
        auVar8 = _lqc2(auVar14);
        _vmulabc(auVar15,auVar8);
        _vmaddabc(auVar12,auVar8);
        _vmaddabc(auVar20,auVar8);
        auVar9 = _vmaddbc(auVar13,auVar8);
        auStack_300 = _sqc2(auVar9);
        auVar11 = _vaddbc(auVar10,auVar9);
        auVar8 = _lqc2(auStack_6b0);
        _vmulabc(auVar15,auVar8);
        _vmaddabc(auVar12,auVar8);
        _vmaddabc(auVar20,auVar8);
        auVar8 = _vmaddbc(auVar13,auVar8);
        auStack_7d0 = _sqc2(auVar18);
        auStack_7a0 = _sqc2(auVar8);
        auStack_2f0 = _sqc2(auVar8);
        auStack_360 = _sqc2(auVar18);
        auStack_350 = _sqc2(auVar10);
        auStack_340 = _sqc2(auVar9);
        auStack_330 = _sqc2(auVar8);
        auStack_7c0 = _sqc2(auVar10);
        auStack_7b0 = _sqc2(auVar9);
        auStack_2e0 = _sqc2(auVar11);
        auVar9 = _lqc2(auStack_7b0);
        auVar8 = _lqc2(auStack_7d0);
        auVar8 = _vaddbc(auVar9,auVar8);
        auStack_2d0 = _sqc2(auVar8);
        auVar8 = _lqc2(auStack_7d0);
        auVar9 = _lqc2(auStack_7c0);
        auVar10 = _vaddbc(auVar8,auVar9);
        auVar9 = _vaddbc(auVar8,auVar9);
        auVar8 = _qmtc2(0xbf000000);
        auVar9 = _qmfc2(auVar9._0_4_);
        auVar8 = _vmulbc(auVar10,auVar8);
        auStack_2c0 = _sqc2(auVar8);
        auVar8 = _lqc2(auStack_7c0);
        auVar13 = _qmtc2(0xbf000000);
        auVar10 = _lqc2(auStack_7b0);
        auVar8 = _vaddbc(auVar8,auVar10);
        auVar8 = _vmulbc(auVar8,auVar13);
        auStack_2b0 = _sqc2(auVar8);
        auVar8 = _lqc2(auStack_7d0);
        auVar13 = _qmtc2(0xbf000000);
        auVar10 = _lqc2(auStack_7b0);
        auVar15 = _qmtc2(auStack_2c0._4_4_);
        auVar8 = _vaddbc(auVar10,auVar8);
        auVar8 = _vmulbc(auVar8,auVar13);
        auVar8 = _qmfc2(auVar8._0_4_);
        _lqc2(auStack_750);
        _lqc2(auStack_740);
        auVar18 = _qmtc2(auStack_2e0._4_4_);
        auVar13 = _vaddbc(in_vf0,auVar15);
        _lqc2(auStack_730);
        auVar10 = _qmtc2(auVar8._0_4_);
        auVar20 = _qmtc2(auStack_2d0._8_4_);
        _vmove(auVar13);
        auVar15 = _vaddbc(in_vf0,auVar18);
        auVar18 = _vaddbc(in_vf0,auVar10);
        auVar11 = _vaddbc(in_vf0,auVar20);
        auVar12 = _qmtc2(auStack_2b0._8_4_);
        auVar10 = _qmtc2(auStack_2c0._4_4_);
        _vmove(auVar15);
        _vmove(auVar18);
        auVar20 = _vaddbc(in_vf0,auVar10);
        auVar10 = _vaddbc(in_vf0,auVar12);
        _sqc2(auVar15);
        _sqc2(auVar13);
        auVar15 = _qmtc2(auVar9._0_4_);
        _sqc2(auVar18);
        auVar9 = _qmtc2(auStack_2b0._8_4_);
        auVar8 = _qmtc2(auVar8._0_4_);
        _sqc2(auVar20);
        _sqc2(auVar11);
        auVar13 = _vaddbc(in_vf0,auVar8);
        _sqc2(auVar10);
        auVar9 = _vaddbc(in_vf0,auVar9);
        auVar8 = _vaddbc(in_vf0,auVar15);
        auStack_750 = _sqc2(auVar13);
        auStack_740 = _sqc2(auVar9);
        auStack_730 = _sqc2(auVar8);
        auStack_90 = _sqc2(auVar24);
        fStack_604 = fVar7;
        uStack_4a0 = uStack_6e0;
        uStack_49c = uStack_6dc;
        uStack_498 = uStack_6d8;
        uStack_494 = uStack_6d4;
        uStack_3a0 = uStack_6e0;
        uStack_39c = uStack_6dc;
        uStack_398 = uStack_6d8;
        uStack_394 = uStack_6d4;
        FUN_00331d70(0x2b8cbccc,auStack_750,auStack_720,10);
        auVar13 = _lqc2(auStack_720);
        auVar9 = _lqc2(auStack_710);
        auVar15 = _qmfc2(auVar13._0_4_);
        auVar10 = _lqc2(auStack_700);
        auVar18 = _qmfc2(auVar9._0_4_);
        auVar20 = _qmfc2(auVar10._0_4_);
        auVar8 = _sqc2(auVar13);
        auVar9 = _sqc2(auVar9);
        auVar10 = _sqc2(auVar10);
        auVar13 = _sqc2(auVar13);
        uStack_23c = auVar13._4_4_;
        auVar13 = _lqc2(auVar9);
        auVar13 = _sqc2(auVar13);
        uStack_22c = auVar13._4_4_;
        auVar13 = _lqc2(auVar10);
        auVar13 = _sqc2(auVar13);
        uStack_21c = auVar13._4_4_;
        auVar8 = _lqc2(auVar8);
        auVar8 = _sqc2(auVar8);
        uStack_208 = auVar8._8_4_;
        auVar8 = _lqc2(auVar9);
        auVar8 = _sqc2(auVar8);
        uStack_1f8 = auVar8._8_4_;
        auVar8 = _lqc2(auVar10);
        auVar8 = _sqc2(auVar8);
        auVar10 = _qmtc2(auVar15._0_4_);
        auVar15 = _qmtc2(uStack_23c);
        uStack_1e8 = auVar8._8_4_;
        _lqc2(auStack_f0);
        _lqc2(auStack_270);
        auVar9 = _qmtc2(uStack_208);
        _lqc2(auStack_260);
        auVar13 = _vaddbc(in_vf0,auVar10);
        _lqc2(auStack_250);
        auVar15 = _vaddbc(in_vf0,auVar15);
        auVar8 = _lqc2(auStack_750);
        auVar11 = _vaddbc(in_vf0,auVar9);
        auVar9 = _vaddbc(in_vf0,auVar8);
        auVar8 = _lqc2(auStack_740);
        auVar10 = _qmtc2(auVar18._0_4_);
        _vmove(auVar9);
        auVar18 = _qmtc2(uStack_22c);
        _vmove(auVar13);
        auVar17 = _vaddbc(in_vf0,auVar8);
        _vmove(auVar15);
        auVar23 = _vaddbc(in_vf0,auVar10);
        _sqc2(auVar9);
        auVar12 = _vaddbc(in_vf0,auVar18);
        auVar9 = _qmtc2(auVar20._0_4_);
        auVar10 = _qmtc2(uStack_1f8);
        auVar8 = _lqc2(auStack_730);
        _vmove(auVar11);
        _vmove(auVar17);
        auVar21 = _vaddbc(in_vf0,auVar10);
        _vmove(auVar23);
        auVar22 = _vaddbc(in_vf0,auVar8);
        auVar18 = _vaddbc(in_vf0,auVar9);
        auVar9 = _qmtc2(uStack_21c);
        auVar14 = _lqc2(auStack_90);
        auVar20 = _qmtc2(uStack_1e8);
        _sqc2(auVar13);
        auVar8 = _qmtc2(fVar7 / afStack_e0[0]);
        _sqc2(auVar15);
        auVar8 = _vmulbc(auVar22,auVar8);
        _sqc2(auVar11);
        _sqc2(auVar17);
        _vmove(auVar12);
        _vmove(auVar21);
        auVar10 = _vaddbc(in_vf0,auVar9);
        auVar9 = _vaddbc(in_vf0,auVar20);
        _sqc2(auVar23);
        _sqc2(auVar12);
        _sqc2(auVar21);
        _sqc2(auVar22);
        auStack_790 = _sqc2(auVar18);
        auStack_780 = _sqc2(auVar10);
        auStack_770 = _sqc2(auVar9);
        auStack_760 = _sqc2(auVar14);
        auStack_f0 = _sqc2(auVar8);
        _sqc2(auVar18);
        _sqc2(auVar10);
        _sqc2(auVar9);
        _sqc2(auVar18);
        _sqc2(auVar10);
        _sqc2(auVar9);
      }
    }
    else {
      auStack_790 = *pauVar1;
      uVar6 = 1;
      auStack_780 = pauVar1[1];
      auStack_770 = pauVar1[2];
      auStack_760 = pauVar1[3];
    }
  }
  auVar8 = _lqc2(auStack_f0);
  auVar9 = _vaddbc(auVar8,auVar8);
  auVar8 = _vaddbc(auVar9,auVar8);
  auVar9 = _lqc2(auStack_760);
  auVar8 = _qmfc2(auVar8._0_4_);
  auVar10 = _vmul(auVar9,auVar9);
  auVar9 = _vaddbc(auVar10,auVar10);
  auVar9 = _vaddbc(auVar9,auVar10);
  auVar10 = _lqc2(auStack_790);
  auVar9 = _qmfc2(auVar9._0_4_);
  _sqc2(auVar10);
  if (auVar8._0_4_ * 0.001 * 0.001 <= auVar9._0_4_) {
    auVar8 = _lqc2(auStack_790);
  }
  else {
    bVar4 = false;
    auVar8 = _lqc2(*pauGpffff8c40);
    bVar3 = false;
    auVar8 = _vsub(auVar10,auVar8);
    bVar2 = false;
    auVar9 = _qmfc2(auVar8._0_4_);
    auVar8 = _sqc2(auVar8);
    if ((auVar9._0_4_ <= 0.001) && (-0.001 <= auVar9._0_4_)) {
      bVar2 = true;
    }
    if (bVar2) {
      auVar9 = _lqc2(auVar8);
      auVar9 = _sqc2(auVar9);
      fStack_1ac = auVar9._4_4_;
      bVar2 = false;
      if ((fStack_1ac <= 0.001) && (bVar2 = false, -0.001 <= fStack_1ac)) {
        bVar2 = true;
      }
      if (bVar2) {
        auVar8 = _lqc2(auVar8);
        auVar8 = _sqc2(auVar8);
        fStack_198 = auVar8._8_4_;
        bVar3 = false;
        if ((fStack_198 <= 0.001) && (-0.001 <= fStack_198)) {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      auVar9 = _lqc2(pauGpffff8c40[1]);
      auVar8 = _lqc2(auStack_780);
      auVar8 = _vsub(auVar8,auVar9);
      bVar3 = false;
      auVar9 = _qmfc2(auVar8._0_4_);
      auVar8 = _sqc2(auVar8);
      bVar2 = false;
      if ((auVar9._0_4_ <= 0.001) && (-0.001 <= auVar9._0_4_)) {
        bVar2 = true;
      }
      if (bVar2) {
        auVar9 = _lqc2(auVar8);
        auVar9 = _sqc2(auVar9);
        fStack_18c = auVar9._4_4_;
        bVar2 = false;
        if ((fStack_18c <= 0.001) && (-0.001 <= fStack_18c)) {
          bVar2 = true;
        }
        if (bVar2) {
          auVar8 = _lqc2(auVar8);
          auVar8 = _sqc2(auVar8);
          fStack_178 = auVar8._8_4_;
          bVar3 = false;
          if ((fStack_178 <= 0.001) && (-0.001 <= fStack_178)) {
            bVar3 = true;
          }
        }
      }
      if (bVar3) {
        auVar9 = _lqc2(pauGpffff8c40[2]);
        auVar8 = _lqc2(auStack_770);
        auVar8 = _vsub(auVar8,auVar9);
        bVar4 = false;
        auVar9 = _qmfc2(auVar8._0_4_);
        auVar8 = _sqc2(auVar8);
        bVar2 = false;
        if ((auVar9._0_4_ <= 0.001) && (-0.001 <= auVar9._0_4_)) {
          bVar2 = true;
        }
        if (bVar2) {
          auVar9 = _lqc2(auVar8);
          auVar9 = _sqc2(auVar9);
          fStack_16c = auVar9._4_4_;
          bVar2 = false;
          if ((fStack_16c <= 0.001) && (-0.001 <= fStack_16c)) {
            bVar2 = true;
          }
          if (bVar2) {
            auVar8 = _lqc2(auVar8);
            auVar8 = _sqc2(auVar8);
            fStack_158 = auVar8._8_4_;
            bVar4 = false;
            if ((fStack_158 <= 0.001) && (-0.001 <= fStack_158)) {
              bVar4 = true;
            }
          }
        }
        else {
          bVar4 = false;
        }
      }
    }
    auVar8 = _lqc2(auStack_790);
    if (bVar4) {
      param_3[0x24] = 0;
      goto LAB_00331bf4;
    }
  }
  auVar9 = _lqc2(auStack_780);
  auVar10 = _lqc2(auStack_770);
  _vmove(auVar8);
  _vmove(auVar9);
  auVar13 = _vaddbc(in_vf0,auVar9);
  auVar15 = _vaddbc(in_vf0,auVar8);
  _vmove(auVar13);
  _vmove(auVar15);
  auVar20 = _vaddbc(in_vf0,auVar10);
  auVar18 = _vaddbc(in_vf0,auVar10);
  _sqc2(auVar13);
  auVar13 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar15);
  _vmove(auVar13);
  auVar8 = _lqc2(auStack_760);
  auVar15 = _vaddbc(in_vf0,auVar9);
  auVar9 = _vmulbc(auVar20,auVar8);
  auVar10 = _vmulbc(auVar18,auVar8);
  auVar8 = _vmulbc(auVar15,auVar8);
  auVar9 = _vadd(auVar9,auVar10);
  auVar8 = _vadd(auVar9,auVar8);
  _sqc2(auVar13);
  auVar8 = _vsub(in_vf0,auVar8);
  _sqc2(auVar20);
  _sqc2(auVar18);
  _sqc2(auVar15);
  _sqc2(auVar8);
  param_3[0x24] = (uint)(&stack0x00000000 != (undefined1 *)0x790);
  if (&stack0x00000000 != (undefined1 *)0x790) {
    auVar9 = _sqc2(auVar20);
    *(undefined1 (*) [16])(param_3 + 0x14) = auVar9;
    auVar9 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_3 + 0x18) = auVar9;
    auVar9 = _sqc2(auVar15);
    *(undefined1 (*) [16])(param_3 + 0x1c) = auVar9;
    auVar8 = _sqc2(auVar8);
    *(undefined1 (*) [16])(param_3 + 0x20) = auVar8;
  }
LAB_00331bf4:
  if (param_1 < 1.1754944e-38) {
    param_1 = param_2 * afStack_e0[0];
  }
  auVar9 = _lqc2(auStack_f0);
  auVar8 = _qmtc2(param_1);
  auVar9 = _vmulbc(auVar9,auVar8);
  auVar10 = _qmfc2(auVar9._0_4_);
  auVar8 = _sqc2(auVar9);
  auVar9 = _sqc2(auVar9);
  fStack_14c = auVar9._4_4_;
  auVar9 = _lqc2(auVar8);
  auVar9 = _sqc2(auVar9);
  fStack_138 = auVar9._8_4_;
  _lqc2(auVar8);
  auVar8 = _qmtc2(1.0 / auVar10._0_4_);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar9 = _qmtc2(1.0 / fStack_14c);
  _vmove(auVar8);
  _sqc2(auVar8);
  auVar9 = _vaddbc(in_vf0,auVar9);
  param_3[8] = (int)(1.0 / param_1);
  _vmove(auVar9);
  auVar8 = _qmtc2(1.0 / fStack_138);
  _sqc2(auVar9);
  auVar9 = _vaddbc(in_vf0,auVar8);
  auVar10 = _qmfc2(auVar9._0_4_);
  auVar8 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_3 + 4) = auVar8;
  auVar8 = _sqc2(auVar9);
  auVar9 = _sqc2(auVar9);
  fStack_12c = auVar9._4_4_;
  auVar9 = _lqc2(auVar8);
  if (auVar10._0_4_ < fStack_12c) {
    auVar9 = _qmfc2(auVar9._0_4_);
    param_3[9] = auVar9._0_4_;
  }
  else {
    auVar9 = _sqc2(auVar9);
    iStack_11c = auVar9._4_4_;
    param_3[9] = iStack_11c;
  }
  auVar9 = _lqc2(auVar8);
  auVar9 = _sqc2(auVar9);
  fStack_f8 = (float)param_3[9];
  fStack_108 = auVar9._8_4_;
  if (fStack_108 <= fStack_f8) {
    auVar8 = _lqc2(auVar8);
    auVar8 = _sqc2(auVar8);
    fStack_f8 = auVar8._8_4_;
  }
  param_3[9] = (int)(1.0 / fStack_f8);
  if (param_4 != 0) {
    *(float *)param_4 = afStack_e0[0];
  }
  return uVar6;
}


// ==== FUN_00331d70 @ 00331d70 ====

/* WARNING: Removing unreachable block (ram,0x00332024) */
/* WARNING: Removing unreachable block (ram,0x00332060) */
/* WARNING: Removing unreachable block (ram,0x003320a8) */

int FUN_00331d70(float param_1,float *param_2,float *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
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
  
  param_1 = param_1 * param_1;
  param_3[10] = 1.0;
  param_3[5] = 1.0;
  *param_3 = 1.0;
  param_3[9] = 0.0;
  param_3[8] = 0.0;
  param_3[4] = 0.0;
  param_3[6] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  do {
    bVar1 = false;
    fVar15 = *param_2 * *param_2;
    fVar19 = param_2[5] * param_2[5];
    fVar17 = param_2[4] * param_2[4] + param_2[8] * param_2[8] + param_2[9] * param_2[9];
    if (fVar15 < fVar19) {
      fVar19 = param_2[10] * param_2[10];
      if (fVar15 < fVar19) {
        fVar19 = param_1 * fVar15;
      }
      else {
        fVar19 = param_1 * fVar19;
      }
LAB_00332570:
      if (fVar19 < fVar17) {
        bVar1 = param_4 != 0;
      }
    }
    else {
      fVar15 = param_2[10] * param_2[10];
      if (fVar19 < fVar15) {
        fVar19 = param_1 * fVar19;
        goto LAB_00332570;
      }
      if (param_1 * fVar15 < fVar17) {
        bVar1 = param_4 != 0;
      }
    }
    if (!bVar1) {
      return param_4;
    }
    param_4 = param_4 + -1;
    iVar8 = 1;
    iVar2 = 2;
    do {
      iVar7 = 0;
      pfVar9 = param_3;
      pfVar10 = param_2;
      if (0 < iVar8) {
        do {
          fVar18 = param_3[iVar8];
          fVar16 = *pfVar9;
          fVar14 = param_3[iVar8 + 4];
          fVar20 = param_3[iVar8 + 8];
          fVar19 = pfVar9[4];
          fVar15 = pfVar9[8];
          fVar17 = pfVar9[4];
          fVar12 = pfVar9[8];
          param_3[iVar8] = fVar18 * 1.0 - fVar16 * 0.0;
          param_3[iVar8 + 4] = fVar14 * 1.0 - fVar19 * 0.0;
          param_3[iVar8 + 8] = fVar20 * 1.0 - fVar15 * 0.0;
          *pfVar9 = fVar18 * 0.0 + fVar16 * 1.0;
          pfVar9[4] = fVar14 * 0.0 + fVar17 * 1.0;
          pfVar9[8] = fVar20 * 0.0 + fVar12 * 1.0;
          fVar14 = param_2[iVar8];
          fVar18 = *pfVar10;
          fVar20 = param_2[iVar8 + 4];
          fVar19 = pfVar10[4];
          fVar16 = param_2[iVar8 + 8];
          fVar17 = pfVar10[8];
          fVar12 = pfVar10[8];
          fVar15 = pfVar10[4];
          param_2[iVar8] = fVar14 * 1.0 - fVar18 * 0.0;
          param_2[iVar8 + 4] = fVar20 * 1.0 - fVar19 * 0.0;
          param_2[iVar8 + 8] = fVar16 * 1.0 - fVar17 * 0.0;
          *pfVar10 = fVar14 * 0.0 + fVar18 * 1.0;
          pfVar10[4] = fVar20 * 0.0 + fVar15 * 1.0;
          pfVar10[8] = fVar16 * 0.0 + fVar12 * 1.0;
          pfVar6 = param_2;
          if (iVar8 != 0) {
            pfVar6 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar6 = param_2 + 4;
            }
          }
          pfVar3 = param_2;
          if (iVar7 != 0) {
            pfVar3 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar3 = param_2 + 4;
            }
          }
          pfVar5 = param_2;
          if (iVar8 != 0) {
            pfVar5 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar5 = param_2 + 4;
            }
          }
          pfVar4 = param_2;
          if (iVar7 != 0) {
            pfVar4 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar4 = param_2 + 4;
            }
          }
          fVar19 = pfVar5[1];
          fVar15 = pfVar4[1];
          pfVar5 = param_2;
          if (iVar8 != 0) {
            pfVar5 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar5 = param_2 + 4;
            }
          }
          pfVar4 = param_2;
          if (iVar7 != 0) {
            pfVar4 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar4 = param_2 + 4;
            }
          }
          fVar17 = pfVar5[2];
          fVar12 = pfVar4[2];
          pfVar5 = param_2;
          if (iVar8 != 0) {
            pfVar5 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar5 = param_2 + 4;
            }
          }
          pfVar4 = param_2;
          if (iVar7 != 0) {
            pfVar4 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar4 = param_2 + 4;
            }
          }
          fVar14 = *pfVar5;
          fVar16 = *pfVar4;
          pfVar5 = param_2;
          if (iVar8 != 0) {
            pfVar5 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar5 = param_2 + 4;
            }
          }
          pfVar4 = param_2;
          if (iVar7 != 0) {
            pfVar4 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar4 = param_2 + 4;
            }
          }
          fVar18 = pfVar5[1];
          fVar20 = pfVar4[1];
          pfVar5 = param_2;
          if (iVar8 != 0) {
            pfVar5 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar5 = param_2 + 4;
            }
          }
          pfVar4 = param_2;
          if (iVar7 != 0) {
            pfVar4 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar4 = param_2 + 4;
            }
          }
          fVar11 = pfVar5[2];
          fVar13 = pfVar4[2];
          pfVar5 = param_2;
          if (iVar8 != 0) {
            pfVar5 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar5 = param_2 + 4;
            }
          }
          *pfVar5 = *pfVar6 * 1.0 - *pfVar3 * 0.0;
          pfVar6 = param_2;
          if (iVar8 != 0) {
            pfVar6 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar6 = param_2 + 4;
            }
          }
          pfVar6[1] = fVar19 * 1.0 - fVar15 * 0.0;
          pfVar6 = param_2;
          if (iVar8 != 0) {
            pfVar6 = param_2 + 8;
            if (iVar8 == 1) {
              pfVar6 = param_2 + 4;
            }
          }
          pfVar6[2] = fVar17 * 1.0 - fVar12 * 0.0;
          pfVar6 = param_2;
          if (iVar7 != 0) {
            pfVar6 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar6 = param_2 + 4;
            }
          }
          *pfVar6 = fVar14 * 0.0 + fVar16 * 1.0;
          pfVar6 = param_2;
          if (iVar7 != 0) {
            pfVar6 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar6 = param_2 + 4;
            }
          }
          pfVar6[1] = fVar18 * 0.0 + fVar20 * 1.0;
          pfVar6 = param_2;
          if (iVar7 != 0) {
            pfVar6 = param_2 + 8;
            if (iVar7 == 1) {
              pfVar6 = param_2 + 4;
            }
          }
          iVar7 = iVar7 + 1;
          pfVar6[2] = fVar11 * 0.0 + fVar13 * 1.0;
          pfVar9 = pfVar9 + 1;
          pfVar10 = pfVar10 + 1;
        } while (iVar7 < iVar8);
      }
      bVar1 = iVar2 < 3;
      iVar8 = iVar2;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  } while( true );
}


// ==== FUN_003325e0 @ 003325e0 ====
// GLOBAL DAT_0045ccf0 undefined4
// GLOBAL DAT_0045ccf4 undefined4
// GLOBAL DAT_0045ccf8 undefined4
// GLOBAL DAT_0045ccfc undefined4
// GLOBAL DAT_0045cd00 undefined4
// GLOBAL DAT_0045cd04 undefined4
// GLOBAL DAT_0045cd08 undefined4
// GLOBAL DAT_0045cd0c undefined4
// GLOBAL DAT_0045cd10 undefined4
// GLOBAL DAT_0045cd14 undefined4
// GLOBAL DAT_0045cd18 undefined4
// GLOBAL DAT_0045cd1c undefined4
// GLOBAL DAT_0045cd20 undefined4
// GLOBAL DAT_0045cd24 undefined4
// GLOBAL DAT_0045cd28 undefined4
// GLOBAL DAT_0045cd2c undefined4

void FUN_003325e0(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9090,2);
      FUN_00100230(&gp0xffff9088,2);
    }
    else {
      FUN_00100228(&gp0xffff9088);
      FUN_00100258(&gp0xffff9090);
      DAT_0045ccf0 = 0x3fc90fdb;
      DAT_0045ccf4 = 0xbe22f983;
      DAT_0045ccf8 = 0x4b400000;
      DAT_0045ccfc = uStack_44;
      DAT_0045cd00 = 0xbe22f983;
      DAT_0045cd04 = 0x3f000000;
      DAT_0045cd08 = 0x3e800000;
      DAT_0045cd0c = uStack_34;
      DAT_0045cd10 = 0xc2992661;
      DAT_0045cd14 = 0xc2255de0;
      DAT_0045cd18 = 0x42a33457;
      DAT_0045cd1c = uStack_24;
      DAT_0045cd20 = 0x421ed7b7;
      DAT_0045cd24 = 0x40c90fda;
      DAT_0045cd28 = 0;
      DAT_0045cd2c = uStack_14;
    }
  }
  return;
}


// ==== FUN_00332728 @ 00332728 ====

void FUN_00332728(void)

{
  FUN_003325e0(1,0xffff);
  return;
}


// ==== FUN_00332748 @ 00332748 ====

void FUN_00332748(void)

{
  FUN_003325e0(0,0xffff);
  return;
}


// ==== FUN_00332768 @ 00332768 ====
// GLOBAL DAT_0045cd30 undefined4
// GLOBAL DAT_0045cd34 undefined4
// GLOBAL DAT_0045cd38 undefined4
// GLOBAL DAT_0045cd3c undefined4
// GLOBAL DAT_0045cd40 undefined4
// GLOBAL DAT_0045cd44 undefined4
// GLOBAL DAT_0045cd48 undefined4
// GLOBAL DAT_0045cd4c undefined4
// GLOBAL DAT_0045cd50 undefined4
// GLOBAL DAT_0045cd54 undefined4
// GLOBAL DAT_0045cd58 undefined4
// GLOBAL DAT_0045cd5c undefined4
// GLOBAL DAT_0045cd60 undefined4
// GLOBAL DAT_0045cd64 undefined4
// GLOBAL DAT_0045cd68 undefined4
// GLOBAL DAT_0045cd6c undefined4

void FUN_00332768(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff90a0,2);
      FUN_00100230(&gp0xffff9098,2);
    }
    else {
      FUN_00100228(&gp0xffff9098);
      FUN_00100258(&gp0xffff90a0);
      DAT_0045cd30 = 0x3fc90fdb;
      DAT_0045cd34 = 0xbe22f983;
      DAT_0045cd38 = 0x4b400000;
      DAT_0045cd3c = uStack_44;
      DAT_0045cd40 = 0xbe22f983;
      DAT_0045cd44 = 0x3f000000;
      DAT_0045cd48 = 0x3e800000;
      DAT_0045cd4c = uStack_34;
      DAT_0045cd50 = 0xc2992661;
      DAT_0045cd54 = 0xc2255de0;
      DAT_0045cd58 = 0x42a33457;
      DAT_0045cd5c = uStack_24;
      DAT_0045cd60 = 0x421ed7b7;
      DAT_0045cd64 = 0x40c90fda;
      DAT_0045cd68 = 0;
      DAT_0045cd6c = uStack_14;
    }
  }
  return;
}


// ==== FUN_003328b0 @ 003328b0 ====
// GLOBAL UNK_00000000 undefined4

undefined4 *
FUN_003328b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  param_1 = (undefined4 *)*param_1;
  uVar1 = param_2;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = param_2;
    uVar1 = uRam00000000;
  }
  uRam00000000 = uVar1;
  param_1[1] = param_3;
  param_1[3] = param_4;
  param_1[2] = param_5;
  return param_1;
}


// ==== FUN_003328e8 @ 003328e8 ====

void FUN_003328e8(void)

{
  FUN_00332768(1,0xffff);
  return;
}


// ==== FUN_00332908 @ 00332908 ====

void FUN_00332908(void)

{
  FUN_00332768(0,0xffff);
  return;
}


// ==== FUN_00332928 @ 00332928 ====
// GLOBAL DAT_0045cd70 undefined4
// GLOBAL DAT_0045cd74 undefined4
// GLOBAL DAT_0045cd78 undefined4
// GLOBAL DAT_0045cd7c undefined4
// GLOBAL DAT_0045cd80 undefined4
// GLOBAL DAT_0045cd84 undefined4
// GLOBAL DAT_0045cd88 undefined4
// GLOBAL DAT_0045cd8c undefined4
// GLOBAL DAT_0045cd90 undefined4
// GLOBAL DAT_0045cd94 undefined4
// GLOBAL DAT_0045cd98 undefined4
// GLOBAL DAT_0045cd9c undefined4
// GLOBAL DAT_0045cda0 undefined4
// GLOBAL DAT_0045cda4 undefined4
// GLOBAL DAT_0045cda8 undefined4
// GLOBAL DAT_0045cdac undefined4

void FUN_00332928(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff90b0,2);
      FUN_00100230(&gp0xffff90a8,2);
    }
    else {
      FUN_00100228(&gp0xffff90a8);
      FUN_00100258(&gp0xffff90b0);
      DAT_0045cd70 = 0x3fc90fdb;
      DAT_0045cd74 = 0xbe22f983;
      DAT_0045cd78 = 0x4b400000;
      DAT_0045cd7c = uStack_44;
      DAT_0045cd80 = 0xbe22f983;
      DAT_0045cd84 = 0x3f000000;
      DAT_0045cd88 = 0x3e800000;
      DAT_0045cd8c = uStack_34;
      DAT_0045cd90 = 0xc2992661;
      DAT_0045cd94 = 0xc2255de0;
      DAT_0045cd98 = 0x42a33457;
      DAT_0045cd9c = uStack_24;
      DAT_0045cda0 = 0x421ed7b7;
      DAT_0045cda4 = 0x40c90fda;
      DAT_0045cda8 = 0;
      DAT_0045cdac = uStack_14;
    }
  }
  return;
}


// ==== FUN_00332a70 @ 00332a70 ====
// GLOBAL PTR_DAT_0040e438 undefined_*

void FUN_00332a70(undefined4 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar3 = FUN_00332ae8(param_1,param_2 + 4,*param_2,param_2 + 0x10);
  puVar2 = PTR_DAT_0040e438;
  puVar7 = param_2 + 0x14;
  uVar1 = *(undefined8 *)PTR_DAT_0040e438;
  uVar4 = *(undefined4 *)(PTR_DAT_0040e438 + 8);
  uVar5 = *(undefined4 *)(PTR_DAT_0040e438 + 0xc);
  *(int *)(iVar3 + 0x10) = (int)uVar1;
  *(int *)(iVar3 + 0x14) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  *(undefined4 *)(iVar3 + 0x1c) = uVar5;
  uVar4 = *(undefined4 *)(puVar2 + 0x14);
  uVar5 = *(undefined4 *)(puVar2 + 0x18);
  uVar6 = *(undefined4 *)(puVar2 + 0x1c);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)(iVar3 + 0x24) = uVar4;
  *(undefined4 *)(iVar3 + 0x28) = uVar5;
  *(undefined4 *)(iVar3 + 0x2c) = uVar6;
  uVar4 = *(undefined4 *)(puVar2 + 0x24);
  uVar5 = *(undefined4 *)(puVar2 + 0x28);
  uVar6 = *(undefined4 *)(puVar2 + 0x2c);
  *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(puVar2 + 0x20);
  *(undefined4 *)(iVar3 + 0x34) = uVar4;
  *(undefined4 *)(iVar3 + 0x38) = uVar5;
  *(undefined4 *)(iVar3 + 0x3c) = uVar6;
  uVar4 = *(undefined4 *)(puVar2 + 0x34);
  uVar5 = *(undefined4 *)(puVar2 + 0x38);
  uVar6 = *(undefined4 *)(puVar2 + 0x3c);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(puVar2 + 0x30);
  *(undefined4 *)(iVar3 + 0x44) = uVar4;
  *(undefined4 *)(iVar3 + 0x48) = uVar5;
  *(undefined4 *)(iVar3 + 0x4c) = uVar6;
  if (param_2[0x24] == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  *(undefined4 **)(iVar3 + 0x50) = puVar7;
  return;
}


// ==== FUN_00332ae8 @ 00332ae8 ====
// GLOBAL UNK_00000000 undefined4

undefined4 *
FUN_00332ae8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  param_1 = (undefined4 *)*param_1;
  uVar1 = param_3;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = param_3;
    uVar1 = uRam00000000;
  }
  uRam00000000 = uVar1;
  param_1[0x15] = param_2;
  param_1[0x17] = param_4;
  param_1[0x14] = 0;
  return param_1;
}


// ==== FUN_00332b48 @ 00332b48 ====

void FUN_00332b48(void)

{
  FUN_00332928(0,0xffff);
  return;
}


// ==== FUN_00332b68 @ 00332b68 ====
// GLOBAL DAT_0045cdb0 undefined4
// GLOBAL DAT_0045cdb4 undefined4
// GLOBAL DAT_0045cdb8 undefined4
// GLOBAL DAT_0045cdbc undefined4
// GLOBAL DAT_0045cdc0 undefined4
// GLOBAL DAT_0045cdc4 undefined4
// GLOBAL DAT_0045cdc8 undefined4
// GLOBAL DAT_0045cdcc undefined4
// GLOBAL DAT_0045cdd0 undefined4
// GLOBAL DAT_0045cdd4 undefined4
// GLOBAL DAT_0045cdd8 undefined4
// GLOBAL DAT_0045cddc undefined4
// GLOBAL DAT_0045cde0 undefined4
// GLOBAL DAT_0045cde4 undefined4
// GLOBAL DAT_0045cde8 undefined4
// GLOBAL DAT_0045cdec undefined4

void FUN_00332b68(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff90c0,2);
      FUN_00100230(&gp0xffff90b8,2);
    }
    else {
      FUN_00100228(&gp0xffff90b8);
      FUN_00100258(&gp0xffff90c0);
      DAT_0045cdb0 = 0x3fc90fdb;
      DAT_0045cdb4 = 0xbe22f983;
      DAT_0045cdb8 = 0x4b400000;
      DAT_0045cdbc = uStack_44;
      DAT_0045cdc0 = 0xbe22f983;
      DAT_0045cdc4 = 0x3f000000;
      DAT_0045cdc8 = 0x3e800000;
      DAT_0045cdcc = uStack_34;
      DAT_0045cdd0 = 0xc2992661;
      DAT_0045cdd4 = 0xc2255de0;
      DAT_0045cdd8 = 0x42a33457;
      DAT_0045cddc = uStack_24;
      DAT_0045cde0 = 0x421ed7b7;
      DAT_0045cde4 = 0x40c90fda;
      DAT_0045cde8 = 0;
      DAT_0045cdec = uStack_14;
    }
  }
  return;
}


// ==== FUN_00332cb0 @ 00332cb0 ====
// GLOBAL DAT_0040e328 undefined4

undefined4 * FUN_00332cb0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  param_1 = (undefined4 *)*param_1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[8] = 0x3f800000;
    param_1[9] = 0x3f800000;
    param_1[4] = 0x3f800000;
    param_1[5] = 0x3f800000;
    param_1[6] = 0x3f800000;
    param_1[7] = uStack_4;
    uVar1 = DAT_0040e328;
    param_1[0xb] = 0x3f800000;
    param_1[10] = uVar1;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0x10] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x24] = 0;
  }
  *param_1 = param_2;
  return param_1;
}


// ==== FUN_00332d68 @ 00332d68 ====

void FUN_00332d68(void)

{
  FUN_00332b68(0,0xffff);
  return;
}


// ==== FUN_00332d88 @ 00332d88 ====

byte FUN_00332d88(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  bool bVar1;
  byte bVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_7c;
  float fStack_6c;
  float fStack_58;
  float fStack_48;
  float fStack_3c;
  float fStack_2c;
  float fStack_18;
  float fStack_8;
  
  auVar5 = _lqc2(param_2[1]);
  bVar1 = false;
  auVar7 = _qmtc2(0xbf4ccccd);
  auVar6 = _lqc2(*param_2);
  auVar3 = _vsub(auVar5,auVar6);
  auVar4 = _qmtc2(0x3f000000);
  auVar3 = _vmulbc(auVar3,auVar7);
  auVar3 = _vmulbc(auVar3,auVar4);
  auVar4 = _lqc2(param_3[1]);
  auVar7 = _vadd(auVar5,auVar3);
  auVar3 = _vsub(auVar6,auVar3);
  auVar3 = _sqc2(auVar3);
  auVar9 = _vsub(auVar7,auVar4);
  auVar6 = _vmove(auVar9);
  auVar5 = _qmfc2(auVar6._0_4_);
  _sqc2(auVar7);
  auVar4 = _lqc2(auVar3);
  auVar3 = _lqc2(*param_3);
  auVar8 = _vsub(auVar3,auVar4);
  auVar3 = _sqc2(auVar7);
  auVar7 = _vmove(auVar8);
  auVar4 = _sqc2(auVar4);
  if ((0.0 <= auVar5._0_4_) || (auVar5 = _qmfc2(auVar7._0_4_), 0.0 <= auVar5._0_4_)) {
    auVar5 = _sqc2(auVar6);
    fStack_7c = auVar5._4_4_;
    if (fStack_7c < 0.0) {
      auVar5 = _sqc2(auVar7);
      fStack_6c = auVar5._4_4_;
      if (fStack_6c < 0.0) {
        bVar1 = true;
        goto LAB_00332e94;
      }
    }
    auVar5 = _sqc2(auVar6);
    fStack_58 = auVar5._8_4_;
    if (fStack_58 < 0.0) {
      auVar5 = _sqc2(auVar7);
      fStack_48 = auVar5._8_4_;
      if (fStack_48 < 0.0) {
        bVar1 = true;
      }
    }
  }
  else {
    bVar1 = true;
  }
LAB_00332e94:
  if (bVar1) {
    bVar2 = 0xff;
  }
  else {
    auVar5 = _qmfc2(auVar8._0_4_);
    auVar8 = _qmfc2(auVar9._0_4_);
    bVar2 = auVar8._0_4_ < auVar5._0_4_;
    auVar5 = _sqc2(auVar7);
    fStack_3c = auVar5._4_4_;
    auVar5 = _sqc2(auVar6);
    fStack_2c = auVar5._4_4_;
    if (fStack_2c < fStack_3c) {
      bVar2 = bVar2 | 2;
    }
    auVar5 = _sqc2(auVar7);
    fStack_18 = auVar5._8_4_;
    auVar5 = _sqc2(auVar6);
    fStack_8 = auVar5._8_4_;
    if (fStack_8 < fStack_18) {
      bVar2 = bVar2 | 4;
    }
    if ((bVar2 & 1) == 0) {
      auVar5 = _lqc2(*param_2);
      _lqc2(*param_1);
      _lqc2(param_1[1]);
      auVar7 = _vaddbc(in_vf0,auVar5);
      auVar5 = _lqc2(auVar3);
      auVar6 = _vaddbc(in_vf0,auVar5);
      auVar5 = _sqc2(auVar7);
      *param_1 = auVar5;
      auVar5 = _sqc2(auVar6);
      param_1[1] = auVar5;
    }
    else {
      auVar5 = _lqc2(auVar4);
      _lqc2(*param_1);
      auVar5 = _vaddbc(in_vf0,auVar5);
      _lqc2(param_1[1]);
      auVar5 = _sqc2(auVar5);
      *param_1 = auVar5;
      auVar5 = _lqc2(param_2[1]);
      auVar5 = _vaddbc(in_vf0,auVar5);
      auVar5 = _sqc2(auVar5);
      param_1[1] = auVar5;
    }
    if ((bVar2 & 2) == 0) {
      auVar7 = _lqc2(*param_2);
      auVar5 = _lqc2(auVar3);
      _lqc2(*param_1);
      _lqc2(param_1[1]);
      auVar7 = _vaddbc(in_vf0,auVar7);
      auVar6 = _vaddbc(in_vf0,auVar5);
      auVar5 = _sqc2(auVar7);
      *param_1 = auVar5;
      auVar5 = _sqc2(auVar6);
      param_1[1] = auVar5;
    }
    else {
      auVar5 = _lqc2(auVar4);
      _lqc2(*param_1);
      auVar5 = _vaddbc(in_vf0,auVar5);
      _lqc2(param_1[1]);
      auVar5 = _sqc2(auVar5);
      *param_1 = auVar5;
      auVar5 = _lqc2(param_2[1]);
      auVar5 = _vaddbc(in_vf0,auVar5);
      auVar5 = _sqc2(auVar5);
      param_1[1] = auVar5;
    }
    if ((bVar2 & 4) == 0) {
      auVar4 = _lqc2(*param_2);
      auVar5 = _lqc2(auVar3);
      _lqc2(*param_1);
      _lqc2(param_1[1]);
      auVar3 = _vaddbc(in_vf0,auVar4);
      auVar4 = _vaddbc(in_vf0,auVar5);
      auVar3 = _sqc2(auVar3);
      *param_1 = auVar3;
      auVar3 = _sqc2(auVar4);
      param_1[1] = auVar3;
    }
    else {
      auVar3 = _lqc2(auVar4);
      _lqc2(*param_1);
      auVar3 = _vaddbc(in_vf0,auVar3);
      _lqc2(param_1[1]);
      auVar3 = _sqc2(auVar3);
      *param_1 = auVar3;
      auVar3 = _lqc2(param_2[1]);
      auVar3 = _vaddbc(in_vf0,auVar3);
      auVar3 = _sqc2(auVar3);
      param_1[1] = auVar3;
    }
  }
  return bVar2;
}


// ==== FUN_00333018 @ 00333018 ====

void FUN_00333018(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 (*pauVar20) [16];
  undefined2 uVar21;
  int iVar22;
  undefined2 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [16];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined1 *puStack_e8;
  undefined1 (*pauStack_e0) [16];
  undefined4 uStack_dc;
  undefined1 (*pauStack_d0) [16];
  undefined4 uStack_cc;
  undefined1 (*pauStack_c0) [16];
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  iVar3 = *(int *)(param_1 + 0x28);
  puVar14 = (ushort *)(*(int *)(param_1 + 0x2c) + iVar3 * 0x20);
  iVar17 = *(int *)(param_1 + 0x2c) + param_2 * 0x20;
  uStack_ec = (uint)*(ushort *)(iVar17 + param_3 * 2 + 8);
  *(uint *)(param_1 + 0x28) = (uint)*puVar14;
  *puVar14 = (ushort)param_2;
  uVar13 = 0;
  puVar14[2] = 0xffff;
  puVar12 = puVar14 + 4;
  puVar14[1] = (ushort)param_3 & 0xff;
  puVar14[3] = 0;
  do {
    *puVar12 = 0xffff;
    *(undefined1 *)((int)puVar14 + uVar13 + 0x18) = 0;
    uVar4 = uVar13 & 0x1f;
    uVar13 = uVar13 + 1;
    puVar12 = puVar12 + 1;
    puVar14[3] = puVar14[3] | (ushort)(1 << uVar4);
  } while (uVar13 < 8);
  uVar23 = (undefined2)iVar3;
  *(undefined2 *)(iVar17 + param_3 * 2 + 8) = uVar23;
  *(ushort *)(iVar17 + 6) = *(ushort *)(iVar17 + 6) & ~(ushort)(1 << (param_3 & 0x1f));
  if (uStack_ec != 0xffff) {
    puStack_e8 = auStack_190;
    lVar18 = (long)(int)auStack_160;
    lVar16 = (long)(int)auStack_150;
    lVar15 = (long)(int)auStack_140;
    uVar19 = 0xffff;
    iVar17 = *(int *)(param_1 + 0x30);
    uStack_f0 = param_4;
    while( true ) {
      iVar22 = uStack_ec * 8;
      puVar7 = (undefined2 *)(iVar17 + iVar22);
      uVar2 = puVar7[1];
      iVar17 = uStack_ec * 0x20;
      uVar21 = (undefined2)uStack_ec;
      uStack_ec = (uint)uVar2;
      if (*(char *)((int)puVar7 + 7) == '\0') {
        iVar17 = *(int *)(param_1 + 0x2c);
        puVar7[1] = (short)uVar19;
        *puVar7 = 0;
        iVar17 = iVar17 + iVar3 * 0x20;
        puVar7[2] = uVar23;
        *(undefined1 *)(puVar7 + 3) = 0xff;
        *(undefined1 *)((int)puVar7 + 7) = 0;
        puVar7[1] = *(undefined2 *)(iVar17 + 4);
        *(undefined2 *)(iVar17 + 4) = uVar21;
      }
      else {
        pauStack_e0 = (undefined1 (*) [16])lVar15;
        uStack_dc = (undefined4)((ulong)lVar15 >> 0x20);
        pauStack_d0 = (undefined1 (*) [16])lVar16;
        uStack_cc = (undefined4)((ulong)lVar16 >> 0x20);
        pauStack_c0 = (undefined1 (*) [16])lVar18;
        uStack_bc = (undefined4)((ulong)lVar18 >> 0x20);
        uStack_b0 = (undefined4)uVar19;
        uStack_ac = (undefined4)((ulong)uVar19 >> 0x20);
        iVar6 = FUN_00332d88(auStack_1d0,uStack_f0,*(int *)(param_1 + 0x34) + iVar17);
        auVar27 = _lqc2(auStack_1d0);
        auVar26 = _lqc2(auStack_1c0);
        auVar29 = _qmtc2(0x3f000000);
        auVar25 = _vsub(auVar26,auVar27);
        auVar28 = _qmtc2(0xbf4ccccd);
        auVar25 = _vmulbc(auVar25,auVar28);
        auVar25 = _vmulbc(auVar25,auVar29);
        pauVar20 = (undefined1 (*) [16])(iVar17 + *(int *)(param_1 + 0x34));
        auVar27 = _vsub(auVar27,auVar25);
        auStack_190 = _sqc2(auVar27);
        auVar25 = _vadd(auVar26,auVar25);
        auVar25 = _sqc2(auVar25);
        *(undefined1 (*) [16])(puStack_e8 + 0x10) = auVar25;
        auVar28 = _lqc2(auStack_190);
        lVar15 = CONCAT44(uStack_dc,pauStack_e0);
        auStack_1b0 = _sqc2(auVar28);
        uStack_1a0 = uStack_180;
        uStack_19c = uStack_17c;
        uStack_198 = uStack_178;
        uStack_194 = uStack_174;
        auVar29 = _vmove(auVar28);
        auVar25 = _qmfc2(auVar29._0_4_);
        lVar16 = CONCAT44(uStack_cc,pauStack_d0);
        auVar27 = _lqc2(*pauVar20);
        auVar26 = _qmfc2(auVar27._0_4_);
        lVar18 = CONCAT44(uStack_bc,pauStack_c0);
        bVar10 = auVar25._0_4_ < auVar26._0_4_;
        uVar19 = CONCAT44(uStack_ac,uStack_b0);
        auStack_170 = _sqc2(auVar27);
        auVar25 = _sqc2(auVar29);
        *pauStack_c0 = auVar25;
        if (*(float *)(*pauStack_c0 + 4) < (float)auStack_170._4_4_) {
          bVar10 = bVar10 | 2;
        }
        auVar25 = _sqc2(auVar27);
        *pauStack_d0 = auVar25;
        fVar24 = *(float *)(*pauStack_d0 + 8);
        auVar25 = _sqc2(auVar28);
        *pauStack_e0 = auVar25;
        if (*(float *)(*pauStack_e0 + 8) < fVar24) {
          bVar10 = bVar10 | 4;
        }
        auVar28 = _lqc2(pauVar20[1]);
        auVar26 = _qmfc2(auVar28._0_4_);
        auVar25._4_4_ = uStack_17c;
        auVar25._0_4_ = uStack_180;
        auVar25._8_4_ = uStack_178;
        auVar25._12_4_ = uStack_174;
        auVar27 = _lqc2(auVar25);
        auVar25 = _qmfc2(auVar27._0_4_);
        bVar11 = auVar26._0_4_ < auVar25._0_4_;
        auStack_130 = _sqc2(auVar27);
        auStack_120 = _sqc2(auVar28);
        if ((float)auStack_120._4_4_ < (float)auStack_130._4_4_) {
          bVar11 = bVar11 | 2;
        }
        auStack_110 = _sqc2(auVar27);
        auStack_100 = _sqc2(auVar28);
        if ((float)auStack_100._8_4_ < (float)auStack_110._8_4_) {
          bVar11 = bVar11 | 4;
        }
        iVar17 = *(int *)(param_1 + 0x2c) + iVar3 * 0x20;
        bVar5 = (bVar10 | bVar11) == 7;
        puVar7 = (undefined2 *)(*(int *)(param_1 + 0x30) + iVar22);
        puVar7[1] = (short)uStack_b0;
        *puVar7 = 0;
        puVar8 = (undefined2 *)(iVar17 + 8 + iVar6 * 2);
        puVar7[2] = uVar23;
        *(char *)(puVar7 + 3) = (char)iVar6;
        *(bool *)((int)puVar7 + 7) = bVar5;
        puVar7[1] = *puVar8;
        *puVar8 = uVar21;
        if (bVar5) {
          pcVar9 = (char *)(iVar17 + 0x18 + iVar6);
          cVar1 = *pcVar9;
          if (cVar1 != -1) {
            *pcVar9 = cVar1 + '\x01';
          }
        }
      }
      if (uStack_ec == 0xffff) break;
      iVar17 = *(int *)(param_1 + 0x30);
    }
  }
  return;
}


// ==== FUN_003333a8 @ 003333a8 ====

void FUN_003333a8(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  int iVar11;
  undefined2 *puVar12;
  char *pcVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  lVar18 = 0xff;
  bVar3 = false;
  uVar20 = 0;
  pauVar19 = (undefined1 (*) [16])param_1;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar8 = (undefined4 *)(param_2 * 0x20 + *(int *)(pauVar19[3] + 4));
  *puVar8 = *param_3;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  puVar8[4] = param_3[4];
  puVar8[5] = uVar4;
  puVar8[6] = uVar5;
  puVar8[7] = uVar6;
  auVar21 = _lqc2(pauVar19[1]);
  auVar23 = _lqc2(*pauVar19);
  auVar9 = _qmfc2(auVar21._0_4_);
  auStack_1f0 = _sqc2(auVar21);
  auStack_200 = _sqc2(auVar23);
  pauVar10 = (undefined1 (*) [16])(param_2 * 0x20 + *(int *)(pauVar19[3] + 4));
  auVar22 = _lqc2(pauVar10[1]);
  auVar21 = _qmfc2(auVar22._0_4_);
  iVar11 = *(int *)(pauVar19[2] + 0xc);
  if (auVar21._0_4_ <= auVar9._0_4_) {
    auVar21 = _lqc2(*pauVar10);
    auVar9 = _qmfc2(auVar23._0_4_);
    auVar21 = _qmfc2(auVar21._0_4_);
    if (auVar9._0_4_ <= auVar21._0_4_) {
      auStack_1e0 = _sqc2(auVar22);
      auVar21 = _lqc2(auStack_1f0);
      auStack_1d0 = _sqc2(auVar21);
      if ((float)auStack_1e0._4_4_ <= (float)auStack_1d0._4_4_) {
        auVar21 = _lqc2(*pauVar10);
        auStack_1c0 = _sqc2(auVar21);
        auVar21 = _lqc2(auStack_200);
        auStack_1b0 = _sqc2(auVar21);
        if ((float)auStack_1b0._4_4_ <= (float)auStack_1c0._4_4_) {
          auVar21 = _lqc2(pauVar10[1]);
          auStack_1a0 = _sqc2(auVar21);
          auVar21 = _lqc2(auStack_1f0);
          auStack_190 = _sqc2(auVar21);
          if ((float)auStack_1a0._8_4_ <= (float)auStack_190._8_4_) {
            auVar21 = _lqc2(*pauVar10);
            auStack_180 = _sqc2(auVar21);
            auVar21 = _lqc2(auStack_200);
            auStack_170 = _sqc2(auVar21);
            if ((float)auStack_170._8_4_ <= (float)auStack_180._8_4_) {
              bVar3 = true;
            }
          }
        }
      }
    }
  }
  if (bVar3) {
    while (lVar18 = FUN_00332d88(&uStack_160,auStack_200,*(int *)(pauVar19[3] + 4) + param_2 * 0x20)
          , lVar18 != 0xff) {
      auStack_200._4_4_ = uStack_15c;
      auStack_200._0_4_ = uStack_160;
      auStack_200._8_4_ = uStack_158;
      auStack_200._12_4_ = uStack_154;
      auStack_1f0._4_4_ = uStack_14c;
      auStack_1f0._0_4_ = uStack_150;
      auStack_1f0._8_4_ = uStack_148;
      auStack_1f0._12_4_ = uStack_144;
      if (((int)(uint)*(ushort *)(iVar11 + 6) >> ((uint)lVar18 & 0x1f) & 1U) != 0)
      goto LAB_00333580;
      uVar2 = *(ushort *)(iVar11 + (uint)lVar18 * 2 + 8);
      uVar20 = (uint)uVar2;
      iVar11 = *(int *)(pauVar19[2] + 0xc) + (uint)uVar2 * 0x20;
    }
  }
  else {
LAB_00333580:
    if (lVar18 != 0xff) {
      auVar22 = _qmtc2(0xbf4ccccd);
      auVar23 = _lqc2(auStack_200);
      auVar24 = _lqc2(auStack_1f0);
      auVar9 = _vsub(auVar24,auVar23);
      auVar21 = _qmtc2(0x3f000000);
      auVar9 = _vmulbc(auVar9,auVar22);
      auVar21 = _vmulbc(auVar9,auVar21);
      auVar9 = _vsub(auVar23,auVar21);
      auVar21 = _vadd(auVar24,auVar21);
      auStack_120 = _sqc2(auVar9);
      pauVar10 = (undefined1 (*) [16])(param_2 * 0x20 + *(int *)(pauVar19[3] + 4));
      auStack_110 = _sqc2(auVar21);
      auVar23 = _lqc2(auStack_120);
      auStack_140 = _sqc2(auVar23);
      uStack_130 = auStack_110._0_4_;
      uStack_12c = auStack_110._4_4_;
      uStack_128 = auStack_110._8_4_;
      uStack_124 = auStack_110._12_4_;
      auVar24 = _vmove(auVar23);
      auVar21 = _qmfc2(auVar24._0_4_);
      auVar22 = _lqc2(*pauVar10);
      auVar9 = _qmfc2(auVar22._0_4_);
      bVar14 = auVar21._0_4_ < auVar9._0_4_;
      auStack_100 = _sqc2(auVar22);
      auStack_f0 = _sqc2(auVar24);
      if ((float)auStack_f0._4_4_ < (float)auStack_100._4_4_) {
        bVar14 = bVar14 | 2;
      }
      auStack_e0 = _sqc2(auVar22);
      auStack_d0 = _sqc2(auVar23);
      if ((float)auStack_d0._8_4_ < (float)auStack_e0._8_4_) {
        bVar14 = bVar14 | 4;
      }
      auVar23 = _lqc2(pauVar10[1]);
      auVar21 = _qmfc2(auVar23._0_4_);
      auVar22 = _lqc2(auStack_110);
      auVar9 = _qmfc2(auVar22._0_4_);
      bVar15 = auVar21._0_4_ < auVar9._0_4_;
      auStack_c0 = _sqc2(auVar22);
      auStack_b0 = _sqc2(auVar23);
      if ((float)auStack_b0._4_4_ < (float)auStack_c0._4_4_) {
        bVar15 = bVar15 | 2;
      }
      auStack_a0 = _sqc2(auVar22);
      auStack_90 = _sqc2(auVar23);
      if ((float)auStack_90._8_4_ < (float)auStack_a0._8_4_) {
        bVar15 = bVar15 | 4;
      }
      iVar16 = *(int *)(pauVar19[2] + 0xc) + uVar20 * 0x20;
      puVar7 = (undefined2 *)(*(int *)pauVar19[3] + param_2 * 8);
      bVar3 = (bVar14 | bVar15) == 7;
      puVar7[1] = 0xffff;
      *puVar7 = 0;
      iVar17 = (int)lVar18;
      puVar7[2] = (short)uVar20;
      *(char *)(puVar7 + 3) = (char)lVar18;
      puVar12 = (undefined2 *)(iVar16 + 8 + iVar17 * 2);
      *(bool *)((int)puVar7 + 7) = bVar3;
      puVar7[1] = *puVar12;
      *puVar12 = (short)param_2;
      if (bVar3) {
        pcVar13 = (char *)(iVar16 + 0x18 + iVar17);
        cVar1 = *pcVar13;
        if (cVar1 != -1) {
          *pcVar13 = cVar1 + '\x01';
        }
      }
      if (*(byte *)(iVar11 + iVar17 + 0x18) < 4) {
        return;
      }
      if (*(int *)(pauVar19[2] + 8) == 0xffff) {
        return;
      }
      FUN_00333018(param_1,uVar20,lVar18,auStack_200);
      return;
    }
  }
  iVar11 = *(int *)(pauVar19[2] + 0xc);
  puVar7 = (undefined2 *)(*(int *)pauVar19[3] + param_2 * 8);
  puVar7[1] = 0xffff;
  iVar11 = iVar11 + uVar20 * 0x20;
  puVar7[2] = (short)uVar20;
  *(char *)(puVar7 + 3) = (char)lVar18;
  *puVar7 = 0;
  *(undefined1 *)((int)puVar7 + 7) = 0;
  puVar7[1] = *(undefined2 *)(iVar11 + 4);
  *(short *)(iVar11 + 4) = (short)param_2;
  return;
}


// ==== FUN_00333808 @ 00333808 ====

void FUN_00333808(int param_1,ulong param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  
  iVar8 = *(int *)(param_1 + 0x30) + (int)param_2 * 8;
  uVar2 = *(ushort *)(iVar8 + 4);
  uVar12 = (uint)*(byte *)(iVar8 + 6);
  puVar11 = (ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar2 * 0x20);
  if (uVar12 == 0xff) {
    puVar10 = puVar11 + 2;
  }
  else {
    puVar10 = puVar11 + uVar12 + 4;
    if (*(char *)(iVar8 + 7) != '\0') {
      pcVar7 = (char *)((int)puVar11 + uVar12 + 0x18);
      cVar1 = *pcVar7;
      if (cVar1 == -1) {
        uVar3 = puVar11[uVar12 + 4];
        uVar9 = 0;
        if (uVar3 != 0xffff) {
          do {
            iVar8 = (uint)uVar3 * 8 + *(int *)(param_1 + 0x30);
            uVar3 = *(ushort *)(iVar8 + 2);
            if (*(char *)(iVar8 + 7) != '\0') {
              uVar9 = uVar9 + 1;
            }
          } while ((uVar3 != 0xffff) && (uVar9 < 0xff));
        }
        *(char *)((int)puVar11 + uVar12 + 0x18) = (char)uVar9;
      }
      else {
        *pcVar7 = cVar1 + -1;
      }
    }
  }
  uVar6 = (ulong)*puVar10;
  if (uVar6 != param_2) {
    do {
      iVar8 = *(int *)(param_1 + 0x30) + (uint)*puVar10 * 8;
      puVar10 = (ushort *)(iVar8 + 2);
    } while (*(ushort *)(iVar8 + 2) != param_2);
    uVar6 = (ulong)*puVar10;
  }
  *puVar10 = *(ushort *)((int)uVar6 * 8 + *(int *)(param_1 + 0x30) + 2);
  if ((uVar2 != 0) && (uVar12 = 0, puVar11[2] == 0xffff)) {
    puVar10 = puVar11 + 4;
    do {
      if (((int)(uint)puVar11[3] >> (uVar12 & 0x1f) & 1U) == 0) {
        return;
      }
      uVar12 = uVar12 + 1;
      if (*puVar10 != 0xffff) {
        return;
      }
      puVar10 = puVar10 + 1;
    } while (uVar12 < 8);
    uVar3 = puVar11[1];
    iVar8 = (uint)*puVar11 * 0x20 + *(int *)(param_1 + 0x2c);
    *(undefined2 *)(iVar8 + (uint)uVar3 * 2 + 8) = 0xffff;
    *(undefined1 *)(iVar8 + (uint)uVar3 + 0x18) = 0;
    uVar4 = *(ushort *)(iVar8 + 6);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = (uint)uVar2;
    *(ushort *)(iVar8 + 6) = uVar4 | (ushort)(1 << (uVar3 & 0x1f));
    *puVar11 = (ushort)uVar5;
  }
  return;
}


// ==== FUN_003339a0 @ 003339a0 ====

undefined8 FUN_003339a0(undefined8 param_1,uint param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fStack_1c;
  float fStack_8;
  
  pauVar7 = (undefined1 (*) [16])param_1;
  *(uint *)pauVar7[2] = param_2;
  uVar5 = (uint)(pauVar7[5] + 0xf) & 0xffffffe0;
  *(uint *)(pauVar7[3] + 4) = uVar5;
  iVar6 = uVar5 + param_2 * 0x20;
  iVar1 = (param_2 >> 1) + 1;
  *(int *)(pauVar7[2] + 4) = iVar1;
  *(int *)(pauVar7[2] + 0xc) = iVar6;
  auVar9 = _lqc2(param_3[1]);
  *(int *)pauVar7[3] = iVar6 + iVar1 * 0x20;
  auVar11 = _lqc2(*param_3);
  auVar10 = _qmtc2(0x3f000000);
  auVar8 = _vsub(auVar9,auVar11);
  auVar9 = _vadd(auVar9,auVar11);
  auVar11 = _vmulbc(auVar8,auVar10);
  auVar10 = _vmulbc(auVar9,auVar10);
  _vmove(auVar11);
  auVar9 = _qmfc2(auVar11._0_4_);
  auVar8 = _sqc2(auVar11);
  fStack_1c = auVar8._4_4_;
  auVar8 = _sqc2(auVar11);
  fStack_8 = auVar8._8_4_;
  if (fStack_1c < auVar9._0_4_) {
    fStack_1c = auVar9._0_4_;
  }
  if (fStack_1c <= fStack_8) {
    fStack_1c = fStack_8;
  }
  auVar8 = _qmtc2(fStack_1c);
  auVar9 = _qmtc2(fStack_1c);
  auVar8 = _vaddbc(in_vf0,auVar8);
  puVar3 = *(undefined2 **)(pauVar7[2] + 0xc);
  _vmove(auVar8);
  uVar5 = 0;
  auVar8 = _qmtc2(fStack_1c);
  _vaddbc(in_vf0,auVar9);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar11 = _vadd(auVar10,auVar8);
  auVar9 = _vsub(auVar10,auVar8);
  auVar8 = _sqc2(auVar11);
  pauVar7[1] = auVar8;
  auVar8 = _sqc2(auVar9);
  *pauVar7 = auVar8;
  puVar3[2] = 0xffff;
  *puVar3 = 0;
  puVar4 = puVar3 + 4;
  puVar3[1] = 0;
  puVar3[3] = 0;
  do {
    *puVar4 = 0xffff;
    *(undefined1 *)((int)puVar3 + uVar5 + 0x18) = 0;
    uVar2 = uVar5 & 0x1f;
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
    puVar3[3] = puVar3[3] | (ushort)(1 << uVar2);
  } while (uVar5 < 8);
  uVar5 = 1;
  uVar2 = *(int *)(pauVar7[2] + 4) - 1;
  if (uVar2 < 2) {
    iVar1 = *(int *)(pauVar7[2] + 4);
  }
  else {
    puVar3 = *(undefined2 **)(pauVar7[2] + 0xc);
    do {
      puVar3 = puVar3 + 0x10;
      uVar5 = uVar5 + 1;
      *puVar3 = (short)uVar5;
    } while (uVar5 < uVar2);
    iVar1 = *(int *)(pauVar7[2] + 4);
  }
  iVar6 = *(int *)(pauVar7[2] + 0xc);
  *(undefined4 *)(pauVar7[2] + 8) = 1;
  *(undefined2 *)(iVar1 * 0x20 + iVar6 + -0x20) = 0xffff;
  return param_1;
}


// ==== FUN_00333b48 @ 00333b48 ====

void FUN_00333b48(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  short *psVar13;
  uint uVar14;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fStack_7c;
  float fStack_6c;
  float fStack_5c;
  float fStack_4c;
  float fStack_38;
  float fStack_28;
  float fStack_18;
  float fStack_8;
  
  iVar10 = param_1[0x9f0] + -1;
  param_1[0x9f0] = iVar10;
  pauVar11 = (undefined1 (*) [16])(param_1 + iVar10 * 0xc + 0xc);
  auVar9 = *pauVar11;
  auVar7 = *pauVar11;
  auVar5 = *pauVar11;
  auVar15 = *pauVar11;
  uVar3 = *(undefined8 *)(param_1 + iVar10 * 0xc + 0x14);
  pauVar11 = (undefined1 (*) [16])(param_1 + iVar10 * 0xc + 0x10);
  auVar8 = *pauVar11;
  auVar6 = *pauVar11;
  auVar4 = *pauVar11;
  auVar16 = *pauVar11;
  iVar10 = *(int *)(*param_1 + 0x2c);
  param_1[0x9f6] = -1;
  iVar10 = iVar10 + ((uint)uVar3 & 0xffff) * 0x20;
  if (*(short *)(iVar10 + 4) != -1) {
    *(short *)(param_1 + 0x9f1) = *(short *)(iVar10 + 4);
    param_1[0x9f6] = 0;
  }
  auVar20 = _lqc2(auVar15);
  auVar18 = _qmtc2(0xbf4ccccd);
  auVar19 = _lqc2(auVar16);
  auVar16 = _vsub(auVar19,auVar20);
  auVar15 = _qmtc2(0x3f000000);
  auVar16 = _vmulbc(auVar16,auVar18);
  auVar15 = _vmulbc(auVar16,auVar15);
  auVar16 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar18 = _vadd(auVar19,auVar15);
  auVar19 = _vsub(auVar20,auVar15);
  auVar15 = _sqc2(auVar18);
  auVar18 = _qmfc2(auVar16._0_4_);
  auVar16 = _sqc2(auVar19);
  auVar20 = _lqc2(auVar15);
  auVar19 = _qmfc2(auVar20._0_4_);
  auVar17 = _lqc2(auVar16);
  _sqc2(auVar20);
  _sqc2(auVar17);
  auVar15 = _sqc2(auVar17);
  auVar16 = _sqc2(auVar20);
  if (auVar18._0_4_ <= auVar19._0_4_) {
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 8));
    auVar18 = _qmfc2(auVar17._0_4_);
    auVar19 = _qmfc2(auVar19._0_4_);
    uVar12 = 0xff;
    if (auVar19._0_4_ < auVar18._0_4_) {
      uVar12 = 0x55;
    }
  }
  else {
    uVar12 = 0xaa;
  }
  auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar18 = _sqc2(auVar18);
  fStack_7c = auVar18._4_4_;
  auVar18 = _lqc2(auVar16);
  auVar18 = _sqc2(auVar18);
  fStack_6c = auVar18._4_4_;
  if (fStack_7c <= fStack_6c) {
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 8));
    auVar18 = _sqc2(auVar18);
    fStack_5c = auVar18._4_4_;
    auVar18 = _lqc2(auVar15);
    auVar18 = _sqc2(auVar18);
    fStack_4c = auVar18._4_4_;
    if (fStack_5c < fStack_4c) {
      uVar12 = uVar12 & 0x33;
    }
  }
  else {
    uVar12 = uVar12 & 0xcc;
  }
  auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar18 = _sqc2(auVar18);
  fStack_38 = auVar18._8_4_;
  auVar18 = _lqc2(auVar16);
  auVar18 = _sqc2(auVar18);
  fStack_28 = auVar18._8_4_;
  if (fStack_38 <= fStack_28) {
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 8));
    auVar18 = _sqc2(auVar18);
    fStack_18 = auVar18._8_4_;
    auVar18 = _lqc2(auVar15);
    auVar18 = _sqc2(auVar18);
    fStack_8 = auVar18._8_4_;
    if (fStack_18 < fStack_8) {
      uVar12 = uVar12 & 0xf;
    }
  }
  else {
    uVar12 = uVar12 & 0xf0;
  }
  uVar14 = 0;
  if (uVar12 != 0) {
    psVar13 = (short *)(iVar10 + 8);
    do {
      if ((uVar12 & 1) != 0) {
        if (((int)(uint)*(ushort *)(iVar10 + 6) >> (uVar14 & 0x1f) & 1U) == 0) {
          iVar2 = param_1[0x9f0];
          pauVar11 = (undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0xc);
          if ((uVar14 & 1) == 0) {
            auVar18 = _lqc2(auVar5);
            auVar19 = _lqc2(auVar16);
          }
          else {
            auVar18 = _lqc2(auVar15);
            auVar19 = _lqc2(auVar4);
          }
          _lqc2(*pauVar11);
          _lqc2(*(undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0x10));
          auVar18 = _vaddbc(in_vf0,auVar18);
          auVar19 = _vaddbc(in_vf0,auVar19);
          auVar18 = _sqc2(auVar18);
          *pauVar11 = auVar18;
          auVar18 = _sqc2(auVar19);
          *(undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0x10) = auVar18;
          if ((uVar14 & 2) == 0) {
            auVar18 = _lqc2(auVar7);
            auVar19 = _lqc2(auVar16);
          }
          else {
            auVar18 = _lqc2(auVar15);
            auVar19 = _lqc2(auVar6);
          }
          _lqc2(*pauVar11);
          _lqc2(*(undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0x10));
          auVar18 = _vaddbc(in_vf0,auVar18);
          auVar19 = _vaddbc(in_vf0,auVar19);
          auVar18 = _sqc2(auVar18);
          *pauVar11 = auVar18;
          auVar18 = _sqc2(auVar19);
          *(undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0x10) = auVar18;
          if ((uVar14 & 4) == 0) {
            auVar18 = _lqc2(auVar9);
            auVar19 = _lqc2(auVar16);
            _lqc2(*pauVar11);
            _lqc2(*(undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0x10));
            auVar18 = _vaddbc(in_vf0,auVar18);
            auVar19 = _vaddbc(in_vf0,auVar19);
            auVar18 = _sqc2(auVar18);
            *pauVar11 = auVar18;
            auVar18 = _sqc2(auVar19);
            *(undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0x10) = auVar18;
          }
          else {
            auVar19 = _lqc2(auVar8);
            auVar18 = _lqc2(auVar15);
            _lqc2(*pauVar11);
            _lqc2(*(undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0x10));
            auVar18 = _vaddbc(in_vf0,auVar18);
            auVar19 = _vaddbc(in_vf0,auVar19);
            auVar18 = _sqc2(auVar18);
            *pauVar11 = auVar18;
            auVar18 = _sqc2(auVar19);
            *(undefined1 (*) [16])(param_1 + iVar2 * 0xc + 0x10) = auVar18;
          }
          iVar2 = param_1[0x9f0];
          sVar1 = *psVar13;
          param_1[0x9f0] = iVar2 + 1;
          *(short *)(param_1 + iVar2 * 0xc + 0x14) = sVar1;
        }
        else {
          sVar1 = *psVar13;
          if (sVar1 != -1) {
            iVar2 = param_1[0x9f6];
            param_1[0x9f6] = iVar2 + 1;
            *(short *)((int)param_1 + (iVar2 + 1) * 2 + 0x27c4) = sVar1;
          }
        }
      }
      psVar13 = psVar13 + 1;
      uVar12 = uVar12 >> 1;
      uVar14 = uVar14 + 1;
    } while (uVar12 != 0);
  }
  return;
}


// ==== FUN_00333ee0 @ 00333ee0 ====
// GLOBAL DAT_0045cdf0 undefined4
// GLOBAL DAT_0045cdf4 undefined4
// GLOBAL DAT_0045cdf8 undefined4
// GLOBAL DAT_0045cdfc undefined4
// GLOBAL DAT_0045ce00 undefined4
// GLOBAL DAT_0045ce04 undefined4
// GLOBAL DAT_0045ce08 undefined4
// GLOBAL DAT_0045ce0c undefined4
// GLOBAL DAT_0045ce10 undefined4
// GLOBAL DAT_0045ce14 undefined4
// GLOBAL DAT_0045ce18 undefined4
// GLOBAL DAT_0045ce1c undefined4
// GLOBAL DAT_0045ce20 undefined4
// GLOBAL DAT_0045ce24 undefined4
// GLOBAL DAT_0045ce28 undefined4
// GLOBAL DAT_0045ce2c undefined4

void FUN_00333ee0(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff90d0,2);
      FUN_00100230(&gp0xffff90c8,2);
    }
    else {
      FUN_00100228(&gp0xffff90c8);
      FUN_00100258(&gp0xffff90d0);
      DAT_0045cdf0 = 0x3fc90fdb;
      DAT_0045cdf4 = 0xbe22f983;
      DAT_0045cdf8 = 0x4b400000;
      DAT_0045cdfc = uStack_44;
      DAT_0045ce00 = 0xbe22f983;
      DAT_0045ce04 = 0x3f000000;
      DAT_0045ce08 = 0x3e800000;
      DAT_0045ce0c = uStack_34;
      DAT_0045ce10 = 0xc2992661;
      DAT_0045ce14 = 0xc2255de0;
      DAT_0045ce18 = 0x42a33457;
      DAT_0045ce1c = uStack_24;
      DAT_0045ce20 = 0x421ed7b7;
      DAT_0045ce24 = 0x40c90fda;
      DAT_0045ce28 = 0;
      DAT_0045ce2c = uStack_14;
    }
  }
  return;
}


// ==== FUN_00334028 @ 00334028 ====

void FUN_00334028(int *param_1,uint param_2)

{
  param_1[1] = 0x20;
  *param_1 = param_2 * 0x28 + 0x40 + ((param_2 >> 1) + 1) * 0x20;
  return;
}


// ==== FUN_00334068 @ 00334068 ====

undefined8 FUN_00334068(undefined8 param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = (int *)param_1;
  *piVar8 = param_2;
  uVar3 = *param_3;
  iVar4 = *(int *)(param_3 + 1);
  iVar5 = *(int *)((int)param_3 + 0xc);
  piVar8[4] = (int)uVar3;
  piVar8[5] = (int)((ulong)uVar3 >> 0x20);
  piVar8[6] = iVar4;
  piVar8[7] = iVar5;
  iVar4 = *(int *)((int)param_3 + 0x14);
  iVar5 = *(int *)(param_3 + 3);
  iVar6 = *(int *)((int)param_3 + 0x1c);
  piVar8[8] = *(int *)(param_3 + 2);
  piVar8[9] = iVar4;
  piVar8[10] = iVar5;
  piVar8[0xb] = iVar6;
  iVar4 = 0xd1;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  piVar2 = (int *)*piVar8;
  iVar4 = piVar2[1];
  iVar5 = piVar2[2];
  iVar6 = piVar2[3];
  piVar8[0xc] = *piVar2;
  piVar8[0xd] = iVar4;
  piVar8[0xe] = iVar5;
  piVar8[0xf] = iVar6;
  iVar4 = piVar2[4];
  iVar5 = piVar2[5];
  iVar6 = piVar2[6];
  iVar7 = piVar2[7];
  piVar8[0x9f0] = 1;
  piVar8[0x10] = iVar4;
  piVar8[0x11] = iVar5;
  piVar8[0x12] = iVar6;
  piVar8[0x13] = iVar7;
  piVar8[0x9f6] = -1;
  piVar8[0x9f7] = 0xffff;
  *(undefined2 *)(piVar8 + 0x14) = 0;
  return param_1;
}


// ==== FUN_003340e0 @ 003340e0 ====

void FUN_003340e0(void)

{
  FUN_00333ee0(1,0xffff);
  return;
}


// ==== FUN_00334100 @ 00334100 ====

void FUN_00334100(void)

{
  FUN_00333ee0(0,0xffff);
  return;
}


// ==== FUN_00334120 @ 00334120 ====
// GLOBAL DAT_0045ce30 undefined4
// GLOBAL DAT_0045ce34 undefined4
// GLOBAL DAT_0045ce38 undefined4
// GLOBAL DAT_0045ce3c undefined4
// GLOBAL DAT_0045ce40 undefined4
// GLOBAL DAT_0045ce44 undefined4
// GLOBAL DAT_0045ce48 undefined4
// GLOBAL DAT_0045ce4c undefined4
// GLOBAL DAT_0045ce50 undefined4
// GLOBAL DAT_0045ce54 undefined4
// GLOBAL DAT_0045ce58 undefined4
// GLOBAL DAT_0045ce5c undefined4
// GLOBAL DAT_0045ce60 undefined4
// GLOBAL DAT_0045ce64 undefined4
// GLOBAL DAT_0045ce68 undefined4
// GLOBAL DAT_0045ce6c undefined4

void FUN_00334120(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(0x40e8d0,2);
      FUN_00100230(0x40e8c8,2);
    }
    else {
      FUN_00100228(0x40e8c8);
      FUN_00100258(0x40e8d0);
      DAT_0045ce30 = 0x3fc90fdb;
      DAT_0045ce34 = 0xbe22f983;
      DAT_0045ce38 = 0x4b400000;
      DAT_0045ce3c = uStack_44;
      DAT_0045ce40 = 0xbe22f983;
      DAT_0045ce44 = 0x3f000000;
      DAT_0045ce48 = 0x3e800000;
      DAT_0045ce4c = uStack_34;
      DAT_0045ce50 = 0xc2992661;
      DAT_0045ce54 = 0xc2255de0;
      DAT_0045ce58 = 0x42a33457;
      DAT_0045ce5c = uStack_24;
      DAT_0045ce60 = 0x421ed7b7;
      DAT_0045ce64 = 0x40c90fda;
      DAT_0045ce68 = 0;
      DAT_0045ce6c = uStack_14;
    }
  }
  return;
}


// ==== FUN_00334268 @ 00334268 ====
// GLOBAL PTR_DAT_0040e438 undefined_*
// GLOBAL DAT_0048f6f0 undefined4

undefined4 * FUN_00334268(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x17] = 1;
    puVar3 = PTR_DAT_0040e438;
    puVar1[0x16] = (&DAT_0048f6f0)[param_2];
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    uVar2 = *(undefined8 *)puVar3;
    uVar4 = *(undefined4 *)(puVar3 + 8);
    uVar5 = *(undefined4 *)(puVar3 + 0xc);
    *puVar1 = (int)uVar2;
    puVar1[1] = (int)((ulong)uVar2 >> 0x20);
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    uVar4 = *(undefined4 *)(puVar3 + 0x14);
    uVar5 = *(undefined4 *)(puVar3 + 0x18);
    uVar6 = *(undefined4 *)(puVar3 + 0x1c);
    puVar1[4] = *(undefined4 *)(puVar3 + 0x10);
    puVar1[5] = uVar4;
    puVar1[6] = uVar5;
    puVar1[7] = uVar6;
    uVar4 = *(undefined4 *)(puVar3 + 0x24);
    uVar5 = *(undefined4 *)(puVar3 + 0x28);
    uVar6 = *(undefined4 *)(puVar3 + 0x2c);
    puVar1[8] = *(undefined4 *)(puVar3 + 0x20);
    puVar1[9] = uVar4;
    puVar1[10] = uVar5;
    puVar1[0xb] = uVar6;
    uVar4 = *(undefined4 *)(puVar3 + 0x34);
    uVar5 = *(undefined4 *)(puVar3 + 0x38);
    uVar6 = *(undefined4 *)(puVar3 + 0x3c);
    puVar1[0xc] = *(undefined4 *)(puVar3 + 0x30);
    puVar1[0xd] = uVar4;
    puVar1[0xe] = uVar5;
    puVar1[0xf] = uVar6;
  }
  return puVar1;
}


// ==== FUN_003342d0 @ 003342d0 ====
// GLOBAL PTR_DAT_0040e438 undefined_*
// GLOBAL DAT_0048f6f0 undefined4

long FUN_003342d0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (param_1 != 0) {
    puVar6 = (undefined4 *)param_1;
    puVar6[0x17] = 1;
    puVar2 = PTR_DAT_0040e438;
    puVar6[0x16] = (&DAT_0048f6f0)[param_2];
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    uVar1 = *(undefined8 *)puVar2;
    uVar3 = *(undefined4 *)(puVar2 + 8);
    uVar4 = *(undefined4 *)(puVar2 + 0xc);
    *puVar6 = (int)uVar1;
    puVar6[1] = (int)((ulong)uVar1 >> 0x20);
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    uVar3 = *(undefined4 *)(puVar2 + 0x14);
    uVar4 = *(undefined4 *)(puVar2 + 0x18);
    uVar5 = *(undefined4 *)(puVar2 + 0x1c);
    puVar6[4] = *(undefined4 *)(puVar2 + 0x10);
    puVar6[5] = uVar3;
    puVar6[6] = uVar4;
    puVar6[7] = uVar5;
    uVar3 = *(undefined4 *)(puVar2 + 0x24);
    uVar4 = *(undefined4 *)(puVar2 + 0x28);
    uVar5 = *(undefined4 *)(puVar2 + 0x2c);
    puVar6[8] = *(undefined4 *)(puVar2 + 0x20);
    puVar6[9] = uVar3;
    puVar6[10] = uVar4;
    puVar6[0xb] = uVar5;
    uVar3 = *(undefined4 *)(puVar2 + 0x34);
    uVar4 = *(undefined4 *)(puVar2 + 0x38);
    uVar5 = *(undefined4 *)(puVar2 + 0x3c);
    puVar6[0xc] = *(undefined4 *)(puVar2 + 0x30);
    puVar6[0xd] = uVar3;
    puVar6[0xe] = uVar4;
    puVar6[0xf] = uVar5;
  }
  return param_1;
}


// ==== FUN_00334340 @ 00334340 ====
// GLOBAL DAT_0048f704 undefined_*
// GLOBAL DAT_0048f6f0 undefined4
// GLOBAL DAT_0048f6f4 undefined_*
// GLOBAL DAT_0048f6f8 undefined_*
// GLOBAL DAT_0048f6fc undefined_*
// GLOBAL DAT_0048f700 undefined_*
// GLOBAL DAT_003d1368 undefined
// GLOBAL DAT_003d13a0 undefined
// GLOBAL DAT_003d1430 undefined
// GLOBAL DAT_003d1468 undefined
// GLOBAL DAT_003d14a0 undefined

undefined4 FUN_00334340(void)

{
  DAT_0048f704 = &DAT_003d1368;
  DAT_0048f6f0 = 0;
  DAT_0048f6f4 = &DAT_003d1468;
  DAT_0048f6f8 = &DAT_003d1430;
  DAT_0048f6fc = &DAT_003d14a0;
  DAT_0048f700 = &DAT_003d13a0;
  return 1;
}


// ==== FUN_00334390 @ 00334390 ====

void FUN_00334390(void)

{
  FUN_00334120(1,0xffff);
  return;
}


// ==== FUN_003343b0 @ 003343b0 ====

void FUN_003343b0(void)

{
  FUN_00334120(0,0xffff);
  return;
}


// ==== FUN_003345a8 @ 003345a8 ====

undefined4 FUN_003345a8(int param_1,int param_2,long param_3)

{
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(uint *)(param_2 + 0xe0) < *(uint *)(param_1 + 0x28)) {
    uVar1 = *(ushort *)(param_2 + 0xe0);
    while( true ) {
      iVar14 = *(int *)(param_1 + 0x30) + (uint)uVar1 * 0x60;
      piVar7 = (int *)param_3;
      if ((*(uint *)(iVar14 + 0x5c) & 1) != 0) {
        (**(code **)(*(int *)(iVar14 + 0x58) + 8))
                  (iVar14 + *(short *)(*(int *)(iVar14 + 0x58) + 4),piVar7,0,&uStack_80);
        auVar11._4_4_ = uStack_7c;
        auVar11._0_4_ = uStack_80;
        auVar11._8_4_ = uStack_78;
        auVar11._12_4_ = uStack_74;
        auVar10._4_4_ = uStack_7c;
        auVar10._0_4_ = uStack_80;
        auVar10._8_4_ = uStack_78;
        auVar10._12_4_ = uStack_74;
        auVar13._4_4_ = uStack_6c;
        auVar13._0_4_ = uStack_70;
        auVar13._8_4_ = uStack_68;
        auVar13._12_4_ = uStack_64;
        auVar9._4_4_ = uStack_6c;
        auVar9._0_4_ = uStack_70;
        auVar9._8_4_ = uStack_68;
        auVar9._12_4_ = uStack_64;
        auVar12 = _pand(*(undefined1 (*) [16])(param_2 + 0x10),auVar9);
        auVar9 = _pcgtw(auVar13,*(undefined1 (*) [16])(param_2 + 0x10));
        auVar9 = _pxor(auVar9,auVar12);
        auVar13 = _pand(auVar10,*(undefined1 (*) [16])(param_2 + 0x20));
        auVar10 = _pcgtw(*(undefined1 (*) [16])(param_2 + 0x20),auVar11);
        auVar10 = _pxor(auVar10,auVar13);
        auVar10 = _pand(auVar9,auVar10);
        auVar11 = _prot3w(auVar10);
        if ((long)(auVar11._0_8_ & auVar10._0_8_ & auVar10._0_8_ << 0x20) < 0) {
          cVar8 = *(byte *)(param_2 + 0xf0) + *(char *)(param_1 + 0x24);
          uVar4 = *(uint *)(param_2 + 0xec) |
                  *(int *)(param_2 + 0xe0) + 1 << (*(byte *)(param_2 + 0xf0) & 0x1f);
          if (**(int **)(iVar14 + 0x58) == 5) {
            if (*(uint *)(param_2 + 0xc0) < *(uint *)(param_2 + 0xc4)) {
              piVar3 = (int *)(*(uint *)(param_2 + 0xc0) * 0x80 + *(int *)(param_2 + 0x30));
              *piVar3 = iVar14;
              if (param_3 == 0) {
                piVar3[1] = 0;
              }
              else {
                iVar14 = piVar7[1];
                iVar5 = piVar7[2];
                iVar6 = piVar7[3];
                piVar3[4] = *piVar7;
                piVar3[5] = iVar14;
                piVar3[6] = iVar5;
                piVar3[7] = iVar6;
                iVar14 = piVar7[5];
                iVar5 = piVar7[6];
                iVar6 = piVar7[7];
                piVar3[8] = piVar7[4];
                piVar3[9] = iVar14;
                piVar3[10] = iVar5;
                piVar3[0xb] = iVar6;
                iVar14 = piVar7[9];
                iVar5 = piVar7[10];
                iVar6 = piVar7[0xb];
                piVar3[0xc] = piVar7[8];
                piVar3[0xd] = iVar14;
                piVar3[0xe] = iVar5;
                piVar3[0xf] = iVar6;
                iVar14 = piVar7[0xd];
                iVar5 = piVar7[0xe];
                iVar6 = piVar7[0xf];
                piVar3[0x10] = piVar7[0xc];
                piVar3[0x11] = iVar14;
                piVar3[0x12] = iVar5;
                piVar3[0x13] = iVar6;
                iVar14 = *(int *)(param_2 + 0xc0) * 0x80 + *(int *)(param_2 + 0x30);
                *(int *)(iVar14 + 4) = iVar14 + 0x10;
              }
              iVar14 = *(int *)(param_2 + 0xc0) * 0x80 + *(int *)(param_2 + 0x30);
              *(undefined4 *)(iVar14 + 0x50) = uStack_80;
              *(undefined4 *)(iVar14 + 0x54) = uStack_7c;
              *(undefined4 *)(iVar14 + 0x58) = uStack_78;
              *(undefined4 *)(iVar14 + 0x5c) = uStack_74;
              *(undefined4 *)(iVar14 + 0x60) = uStack_70;
              *(undefined4 *)(iVar14 + 100) = uStack_6c;
              *(undefined4 *)(iVar14 + 0x68) = uStack_68;
              *(undefined4 *)(iVar14 + 0x6c) = uStack_64;
              iVar14 = *(int *)(param_2 + 0x30);
              *(uint *)(*(int *)(param_2 + 0xc0) * 0x80 + iVar14 + 0x70) = uVar4;
              *(char *)(*(int *)(param_2 + 0xc0) * 0x80 + iVar14 + 0x74) = cVar8;
              *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
            }
          }
          else {
            if (*(uint *)(param_2 + 0xcc) < *(uint *)(param_2 + 0xd0)) {
              piVar3 = (int *)(*(uint *)(param_2 + 0xcc) * 0x80 + *(int *)(param_2 + 200));
              *piVar3 = iVar14;
              if (param_3 == 0) {
                piVar3[1] = 0;
              }
              else {
                iVar14 = piVar7[1];
                iVar5 = piVar7[2];
                iVar6 = piVar7[3];
                piVar3[4] = *piVar7;
                piVar3[5] = iVar14;
                piVar3[6] = iVar5;
                piVar3[7] = iVar6;
                iVar14 = piVar7[5];
                iVar5 = piVar7[6];
                iVar6 = piVar7[7];
                piVar3[8] = piVar7[4];
                piVar3[9] = iVar14;
                piVar3[10] = iVar5;
                piVar3[0xb] = iVar6;
                iVar14 = piVar7[9];
                iVar5 = piVar7[10];
                iVar6 = piVar7[0xb];
                piVar3[0xc] = piVar7[8];
                piVar3[0xd] = iVar14;
                piVar3[0xe] = iVar5;
                piVar3[0xf] = iVar6;
                iVar14 = piVar7[0xd];
                iVar5 = piVar7[0xe];
                iVar6 = piVar7[0xf];
                piVar3[0x10] = piVar7[0xc];
                piVar3[0x11] = iVar14;
                piVar3[0x12] = iVar5;
                piVar3[0x13] = iVar6;
                iVar14 = *(int *)(param_2 + 0xcc) * 0x80 + *(int *)(param_2 + 200);
                *(int *)(iVar14 + 4) = iVar14 + 0x10;
              }
              bVar2 = true;
              iVar14 = *(int *)(param_2 + 0xcc) * 0x80 + *(int *)(param_2 + 200);
              *(undefined4 *)(iVar14 + 0x50) = uStack_80;
              *(undefined4 *)(iVar14 + 0x54) = uStack_7c;
              *(undefined4 *)(iVar14 + 0x58) = uStack_78;
              *(undefined4 *)(iVar14 + 0x5c) = uStack_74;
              *(undefined4 *)(iVar14 + 0x60) = uStack_70;
              *(undefined4 *)(iVar14 + 100) = uStack_6c;
              *(undefined4 *)(iVar14 + 0x68) = uStack_68;
              *(undefined4 *)(iVar14 + 0x6c) = uStack_64;
              iVar14 = *(int *)(param_2 + 200);
              *(uint *)(*(int *)(param_2 + 0xcc) * 0x80 + iVar14 + 0x70) = uVar4;
              *(char *)(*(int *)(param_2 + 0xcc) * 0x80 + iVar14 + 0x74) = cVar8;
              *(int *)(param_2 + 0xcc) = *(int *)(param_2 + 0xcc) + 1;
            }
            else {
              bVar2 = false;
            }
            if (!bVar2) {
              return 0;
            }
          }
        }
      }
      uVar4 = *(int *)(param_2 + 0xe0) + 1;
      *(uint *)(param_2 + 0xe0) = uVar4;
      if (*(uint *)(param_1 + 0x28) <= uVar4) break;
      uVar1 = *(ushort *)(param_2 + 0xe0);
    }
  }
  return 1;
}


// ==== FUN_00334870 @ 00334870 ====
// GLOBAL DAT_0045ce70 undefined4
// GLOBAL DAT_0045ce74 undefined4
// GLOBAL DAT_0045ce78 undefined4
// GLOBAL DAT_0045ce7c undefined4
// GLOBAL DAT_0045ce80 undefined4
// GLOBAL DAT_0045ce84 undefined4
// GLOBAL DAT_0045ce88 undefined4
// GLOBAL DAT_0045ce8c undefined4
// GLOBAL DAT_0045ce90 undefined4
// GLOBAL DAT_0045ce94 undefined4
// GLOBAL DAT_0045ce98 undefined4
// GLOBAL DAT_0045ce9c undefined4
// GLOBAL DAT_0045cea0 undefined4
// GLOBAL DAT_0045cea4 undefined4
// GLOBAL DAT_0045cea8 undefined4
// GLOBAL DAT_0045ceac undefined4

void FUN_00334870(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff90f0,2);
      FUN_00100230(&gp0xffff90e8,2);
    }
    else {
      FUN_00100228(&gp0xffff90e8);
      FUN_00100258(&gp0xffff90f0);
      DAT_0045ce70 = 0x3fc90fdb;
      DAT_0045ce74 = 0xbe22f983;
      DAT_0045ce78 = 0x4b400000;
      DAT_0045ce7c = uStack_44;
      DAT_0045ce80 = 0xbe22f983;
      DAT_0045ce84 = 0x3f000000;
      DAT_0045ce88 = 0x3e800000;
      DAT_0045ce8c = uStack_34;
      DAT_0045ce90 = 0xc2992661;
      DAT_0045ce94 = 0xc2255de0;
      DAT_0045ce98 = 0x42a33457;
      DAT_0045ce9c = uStack_24;
      DAT_0045cea0 = 0x421ed7b7;
      DAT_0045cea4 = 0x40c90fda;
      DAT_0045cea8 = 0;
      DAT_0045ceac = uStack_14;
    }
  }
  return;
}


// ==== FUN_003349c0 @ 003349c0 ====

undefined8 FUN_003349c0(undefined8 param_1,int param_2)

{
  ((int *)param_1)[1] = 0x10;
  *(int *)param_1 = param_2 * 0x60 + 0x40;
  return param_1;
}


// ==== FUN_003349e0 @ 003349e0 ====

int FUN_003349e0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = param_3;
    uVar2 = param_2 + 1;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(int *)(iVar1 + 0x28) = param_2;
    if (uVar2 != 0) {
      iVar3 = 0;
      do {
        uVar2 = uVar2 >> 1;
        iVar3 = iVar3 + 1;
      } while (uVar2 != 0);
      *(int *)(iVar1 + 0x24) = iVar3;
    }
    *(uint *)(iVar1 + 0x30) = iVar1 + param_4 + 0xfU & 0xfffffff0;
  }
  return iVar1;
}


// ==== FUN_00334b78 @ 00334b78 ====

void FUN_00334b78(void)

{
  FUN_00334870(0,0xffff);
  return;
}


// ==== FUN_00334b98 @ 00334b98 ====
// GLOBAL DAT_0040e350 float
// GLOBAL PTR_DAT_0040e438 undefined_*
// GLOBAL DAT_0048f6fc undefined4

/* WARNING: Type propagation algorithm not settling */

long FUN_00334b98(int param_1,int *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  undefined1 in_v1_qw [16];
  uint uVar11;
  undefined1 (*pauVar12) [16];
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 in_vf0 [16];
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
  undefined4 uVar35;
  uint uStack_16c;
  uint uStack_158;
  undefined4 uStack_144;
  float fStack_13c;
  float fStack_128;
  float fStack_11c;
  undefined1 auStack_110 [8];
  float fStack_108;
  int iStack_fc;
  float fStack_f8;
  float fStack_f4;
  float afStack_f0 [4];
  float afStack_e0 [2];
  int iStack_d8;
  int iStack_d4;
  float afStack_d0 [2];
  int iStack_c8;
  int iStack_c4;
  float afStack_c0 [2];
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint *puStack_a0;
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
  
  uStack_50 = (int)unaff_s4;
  uStack_4c = (int)((ulong)unaff_s4 >> 0x20);
  uStack_10 = (int)unaff_s0;
  uStack_c = (int)((ulong)unaff_s0 >> 0x20);
  uStack_20 = (int)unaff_s1;
  uStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  uStack_30 = (int)unaff_s2;
  uStack_2c = (int)((ulong)unaff_s2 >> 0x20);
  uStack_40 = (int)unaff_s3;
  uStack_3c = (int)((ulong)unaff_s3 >> 0x20);
  uStack_60 = (int)unaff_s5;
  uStack_5c = (int)((ulong)unaff_s5 >> 0x20);
  uStack_70 = (int)unaff_s6;
  uStack_6c = (int)((ulong)unaff_s6 >> 0x20);
  auVar28 = _lqc2(param_3[1]);
  auVar27 = _lqc2(*param_3);
  auVar26 = _lqc2(param_3[2]);
  _vmove(auVar28);
  _vmove(auVar27);
  auVar31 = _vaddbc(in_vf0,auVar27);
  auVar32 = _vaddbc(in_vf0,auVar28);
  _vmove(auVar26);
  auVar33 = _vaddbc(in_vf0,auVar27);
  _vmove(auVar32);
  _vmove(auVar31);
  auVar29 = _vaddbc(in_vf0,auVar26);
  auVar25 = _lqc2(param_3[3]);
  auVar30 = _vaddbc(in_vf0,auVar26);
  _vmove(auVar33);
  auVar24 = _vmulbc(auVar30,auVar25);
  _sqc2(auVar28);
  auVar28 = _vaddbc(in_vf0,auVar28);
  _sqc2(auVar27);
  auVar27 = _vmulbc(auVar29,auVar25);
  _sqc2(auVar26);
  auVar27 = _vadd(auVar27,auVar24);
  auVar24 = _vmulbc(auVar28,auVar25);
  auVar27 = _vadd(auVar27,auVar24);
  auVar24 = _lqc2(*(undefined1 (*) [16])(param_2 + 8));
  auVar26 = _vsub(in_vf0,auVar27);
  auVar27 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xc));
  _vmulabc(auVar29,auVar24);
  _vmaddabc(auVar30,auVar24);
  _vmaddabc(auVar28,auVar24);
  auVar34 = _vmaddbc(auVar26,in_vf0);
  _sqc2(auVar25);
  _vmulabc(auVar29,auVar27);
  _vmaddabc(auVar30,auVar27);
  _vmaddabc(auVar28,auVar27);
  auVar24 = _vmaddbc(auVar26,in_vf0);
  _sqc2(auVar32);
  auVar27 = _vsub(auVar24,auVar34);
  _sqc2(auVar31);
  _sqc2(auVar33);
  piVar15 = (int *)param_2[0x3e];
  _sqc2(auVar29);
  _sqc2(auVar30);
  _sqc2(auVar28);
  _sqc2(auVar26);
  if (piVar15 == (int *)0x0) {
    piVar15 = (int *)param_2[0x3d];
    if (piVar15 != (int *)0x0) {
      iVar13 = *(int *)(param_1 + 0x3c);
      auVar25 = _vabs(auVar24);
      auVar26 = _qmtc2(0x3f000000);
      *piVar15 = iVar13;
      auVar31 = _vmulbc(auVar27,auVar26);
      auVar28 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x10));
      auVar26 = _qmfc2(auVar31._0_4_);
      auVar29 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x20));
      auVar28 = _vsub(auVar28,auVar34);
      auVar29 = _vsub(auVar29,auVar34);
      auVar29 = _vabs(auVar29);
      auVar28 = _vabs(auVar28);
      auVar30 = _vabs(auVar34);
      auVar30 = _vmax(auVar30,auVar25);
      auVar25 = _vmax(auVar28,auVar29);
      uStack_b0 = auVar26._0_4_ & 0x80000000 | 0x3f800000;
      auVar26 = _qmtc2(0x358637bd);
      auVar28 = _qmtc2(0x358637bd);
      auVar25 = _vmulbc(auVar25,auVar26);
      auVar29 = _vmulbc(auVar30,auVar28);
      auVar28 = _vabs(auVar31);
      auVar26 = _sqc2(auVar31);
      uStack_16c = auVar26._4_4_;
      uStack_ac = uStack_16c & 0x80000000 | 0x3f800000;
      auVar26 = _sqc2(auVar31);
      uStack_158 = auVar26._8_4_;
      auVar26 = _vmax(auVar28,auVar25);
      auVar25 = _vsub(auVar26,auVar28);
      auVar28 = _qmtc2(uStack_ac);
      auVar29 = _vadd(auVar29,auVar25);
      auVar26 = _qmtc2(uStack_b0);
      _vaddbc(in_vf0,auVar26);
      _vaddbc(in_vf0,auVar28);
      uStack_a8 = uStack_158 & 0x80000000 | 0x3f800000;
      auVar26 = _qmtc2(uStack_a8);
      auVar26 = _vaddbc(in_vf0,auVar26);
      auVar25 = _vmul(auVar26,auVar25);
      auVar26 = _vadd(auVar24,auVar25);
      auVar25 = _vsub(auVar34,auVar25);
      auVar24 = _sqc2(auVar25);
      *(undefined1 (*) [16])(piVar15 + 4) = auVar24;
      auVar24 = _vsub(auVar26,auVar25);
      auVar24 = _sqc2(auVar24);
      *(undefined1 (*) [16])(piVar15 + 8) = auVar24;
      auVar24._8_4_ = 0x3f800000;
      auVar24._0_8_ = 0x3f8000003f800000;
      auVar24._12_4_ = uStack_144;
      auVar24 = _lqc2(auVar24);
      auVar26 = _lqc2(*(undefined1 (*) [16])(piVar15 + 8));
      _vdiv(in_vf0,0,auVar26,0);
      uVar35 = _vwaitq();
      auVar24 = _vmulq(auVar24,uVar35);
      _vdiv(in_vf0,0,auVar26,0);
      uVar35 = _vwaitq();
      auVar24 = _vmulq(auVar24,uVar35);
      _vdiv(in_vf0,0,auVar26,0);
      uVar35 = _vwaitq();
      auVar26 = _vmulq(auVar24,uVar35);
      auVar24 = _sqc2(auVar29);
      *(undefined1 (*) [16])(piVar15 + 0x10) = auVar24;
      auVar24 = _sqc2(auVar26);
      *(undefined1 (*) [16])(piVar15 + 0xc) = auVar24;
      piVar15[0x17] = 0x3f800000;
      piVar15[0x95] = 0;
      piVar15[0x96] = 0;
      piVar15[0x16] = 0;
      auVar26 = _lqc2(*(undefined1 (*) [16])(*piVar15 + 0x20));
      auVar24 = _lqc2(*(undefined1 (*) [16])(piVar15 + 0x10));
      auVar25 = _lqc2(*(undefined1 (*) [16])(*piVar15 + 0x10));
      auVar26 = _vadd(auVar26,auVar24);
      auVar25 = _vsub(auVar25,auVar24);
      auVar28 = _lqc2(*(undefined1 (*) [16])(piVar15 + 4));
      auVar24 = _lqc2(*(undefined1 (*) [16])(piVar15 + 0xc));
      auVar26 = _vsub(auVar26,auVar28);
      auVar26 = _vmul(auVar24,auVar26);
      auVar25 = _vsub(auVar25,auVar28);
      auVar24 = _vmul(auVar24,auVar25);
      auVar28 = _vmax(auVar24,auVar26);
      auVar25 = _vmini(auVar24,auVar26);
      auVar26 = _qmfc2(auVar25._0_4_);
      auVar24 = _sqc2(auVar25);
      fStack_13c = auVar24._4_4_;
      auVar24 = _sqc2(auVar25);
      fStack_128 = auVar24._8_4_;
      if (fStack_13c < auVar26._0_4_) {
        fStack_13c = auVar26._0_4_;
      }
      if (fStack_128 < fStack_13c) {
        fStack_128 = fStack_13c;
      }
      fVar20 = (float)piVar15[0x16];
      if (fVar20 <= fStack_128) {
        fVar20 = fStack_128;
      }
      auVar26 = _qmfc2(auVar28._0_4_);
      piVar15[0x16] = (int)fVar20;
      auVar24 = _sqc2(auVar28);
      fStack_11c = auVar24._4_4_;
      in_v1_qw._0_8_ = (long)(int)auStack_110;
      auVar24 = _sqc2(auVar28);
      fStack_108 = auVar24._8_4_;
      if (auVar26._0_4_ < fStack_11c) {
        fStack_11c = auVar26._0_4_;
      }
      if (fStack_11c < fStack_108) {
        fStack_108 = fStack_11c;
      }
      fVar20 = (float)piVar15[0x17];
      if (fStack_108 <= fVar20) {
        fVar20 = fStack_108;
      }
      piVar15[0x17] = (int)fVar20;
      if (fVar20 <= (float)piVar15[0x16]) {
        piVar15[0x94] = 0;
      }
      else {
        in_v1_qw._0_8_ = 1;
        if (*(int *)(iVar13 + 4) == 0) {
          iVar13 = *(int *)(iVar13 + 8);
          piVar15[0x94] = 0;
          piVar15[0x95] = iVar13;
          piVar15[0x96] = 0;
        }
        else {
          piVar15[0x94] = 1;
          piVar15[0x14] = -1;
          piVar15[0x15] = 0;
        }
      }
    }
    param_2[0x3e] = (int)piVar15;
  }
  uVar11 = 0;
  if (param_2[0x40] != 0) {
    fVar20 = (float)param_2[0x3f];
    iVar13 = 0;
    if (piVar15[0x94] != 0) {
      piVar16 = piVar15 + 0x14;
      auVar26._8_8_ = in_v1_qw._8_8_;
      auVar26._0_8_ = (long)(int)(piVar15 + 0x17);
      do {
        if ((float)piVar16[2] <= fVar20) {
          uVar17 = *(undefined8 *)(piVar16 + 2);
          pfVar9 = auVar26._0_4_;
          *(undefined8 *)(pfVar9 + -3) = *(undefined8 *)piVar16;
          *(undefined8 *)(pfVar9 + -1) = uVar17;
          fVar22 = *pfVar9;
          if (fVar20 <= fVar22) {
            fVar22 = fVar20;
          }
          *pfVar9 = fVar22;
          iVar13 = iVar13 + 1;
          auVar26._0_8_ = (long)(int)(pfVar9 + 4);
          uVar6 = piVar15[0x94];
        }
        else {
          uVar6 = piVar15[0x94];
        }
        uVar11 = uVar11 + 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 < uVar6);
    }
    piVar15[0x94] = iVar13;
  }
  fVar20 = DAT_0040e350;
  auVar24 = _vmove(auVar27);
  auVar27 = _vmove(auVar34);
  do {
    do {
      lVar18 = 0;
      if (((uint)param_2[5] < (uint)param_2[6]) &&
         (lVar18 = 1, (uint)param_2[0x3b] <= (uint)param_2[0x3a])) {
        lVar18 = 0;
      }
      if (lVar18 == 0) {
        return 0;
      }
      iVar13 = piVar15[0x95];
      puStack_a0 = &uStack_a4;
      while (iVar13 == 0) {
        while( true ) {
          iVar7 = piVar15[0x94];
          iVar13 = iVar7 + -1;
          if (iVar7 == 0) {
            bVar4 = false;
            goto LAB_00335280;
          }
          if (piVar15[iVar13 * 4 + 0x14] != -1) break;
          piVar15[0x94] = iVar13;
          iStack_fc = (int)((ulong)*(undefined8 *)(piVar15 + iVar13 * 4 + 0x14) >> 0x20);
          iVar7 = *(int *)*piVar15 + iStack_fc * 0x20;
          afStack_e0[0] = (float)*(undefined8 *)(piVar15 + 4);
          afStack_e0[1] = (float)(int)((ulong)*(undefined8 *)(piVar15 + 4) >> 0x20);
          iStack_d8 = piVar15[6];
          iStack_d4 = piVar15[7];
          afStack_d0[0] = (float)*(undefined8 *)(piVar15 + 0x10);
          afStack_d0[1] = (float)(int)((ulong)*(undefined8 *)(piVar15 + 0x10) >> 0x20);
          iStack_c8 = piVar15[0x12];
          iStack_c4 = piVar15[0x13];
          afStack_c0[0] = (float)*(undefined8 *)(piVar15 + 0xc);
          afStack_c0[1] = (float)(int)((ulong)*(undefined8 *)(piVar15 + 0xc) >> 0x20);
          iStack_b8 = piVar15[0xe];
          iStack_b4 = piVar15[0xf];
          fVar22 = afStack_c0[*(int *)(iVar7 + 4)];
          afStack_f0[0] =
               ((*(float *)(iVar7 + 0x18) + afStack_d0[*(int *)(iVar7 + 4)]) -
               afStack_e0[*(int *)(iVar7 + 4)]) * fVar22;
          afStack_f0[1] =
               ((*(float *)(iVar7 + 0x1c) - afStack_d0[*(int *)(iVar7 + 4)]) -
               afStack_e0[*(int *)(iVar7 + 4)]) * fVar22;
          uVar11 = (uint)(0.0 < fVar22);
          fStack_f4 = (float)((ulong)*(undefined8 *)(piVar15 + iVar13 * 4 + 0x16) >> 0x20);
          fStack_f8 = (float)*(undefined8 *)(piVar15 + iVar13 * 4 + 0x16);
          if (afStack_f0[uVar11] < fStack_f4) {
            *(undefined8 *)(piVar15 + piVar15[0x94] * 4 + 0x14) =
                 *(undefined8 *)(uVar11 * 8 + iVar7 + 8);
            fVar22 = afStack_f0[uVar11];
            if (fVar22 < fStack_f8) {
              fVar22 = fStack_f8;
            }
            iVar13 = piVar15[0x94];
            piVar15[iVar13 * 4 + 0x16] = (int)fVar22;
            piVar15[0x94] = iVar13 + 1;
            piVar15[iVar13 * 4 + 0x17] = (int)fStack_f4;
          }
          if (fStack_f8 < afStack_f0[uVar11 == 0]) {
            *(undefined8 *)(piVar15 + piVar15[0x94] * 4 + 0x14) =
                 *(undefined8 *)((uint)(uVar11 == 0) * 8 + iVar7 + 8);
            iVar13 = piVar15[0x94];
            piVar15[iVar13 * 4 + 0x16] = (int)fStack_f8;
            fVar22 = afStack_f0[uVar11 == 0];
            if (fStack_f4 < fVar22) {
              fVar22 = fStack_f4;
            }
            piVar15[iVar13 * 4 + 0x17] = (int)fVar22;
            piVar15[0x94] = iVar13 + 1;
          }
        }
        iVar7 = iVar7 + -1;
        piVar15[0x94] = iVar7;
        iVar13 = piVar15[iVar7 * 4 + 0x14];
        piVar15[0x95] = iVar13;
        piVar15[0x96] = piVar15[iVar7 * 4 + 0x15];
      }
      bVar4 = true;
      piVar15[0x96] = piVar15[0x96] + 1;
      piVar15[0x95] = piVar15[0x95] + -1;
LAB_00335280:
      if (!bVar4) {
        return lVar18;
      }
      iVar13 = *(int *)(param_1 + 0x38);
      piVar16 = (int *)(*(int *)(param_1 + 0x34) + uStack_a4 * 0x10);
      auVar31 = _lqc2(*(undefined1 (*) [16])(*piVar16 * 0x10 + iVar13));
      auVar33 = _lqc2(*(undefined1 (*) [16])(piVar16[2] * 0x10 + iVar13));
      auVar30 = _vsub(auVar33,auVar31);
      auVar32 = _lqc2(*(undefined1 (*) [16])(piVar16[1] * 0x10 + iVar13));
      _vopmula(auVar24,auVar30);
      auVar28 = _vopmsub(auVar30,auVar24);
      auVar29 = _vsub(auVar32,auVar31);
      auVar25 = _vmul(auVar29,auVar28);
      auVar26 = _vaddbc(auVar25,auVar25);
      auVar26 = _vaddbc(auVar26,auVar25);
      auVar26 = _qmfc2(auVar26._0_4_);
      fVar22 = auVar26._0_4_;
      puVar14 = (undefined4 *)(param_2[4] + param_2[5] * 0xd0);
      if (1e-08 < fVar22) {
        auVar34 = _vsub(auVar27,auVar31);
        auVar25 = _vmul(auVar34,auVar28);
        auVar26 = _vaddbc(auVar25,auVar25);
        auVar26 = _vaddbc(auVar26,auVar25);
        fVar19 = -fVar22 * 1e-05;
        auVar26 = _qmfc2(auVar26._0_4_);
        fVar21 = auVar26._0_4_;
        fVar23 = fVar22 - fVar19;
        if (fVar21 < fVar19) goto LAB_00335454;
        bVar4 = false;
        if (fVar21 <= fVar23) {
          _vopmula(auVar34,auVar29);
          auVar28 = _vopmsub(auVar29,auVar34);
          auVar25 = _vmul(auVar24,auVar28);
          auVar26 = _vaddbc(auVar25,auVar25);
          auVar26 = _vaddbc(auVar26,auVar25);
          auVar26 = _qmfc2(auVar26._0_4_);
          fVar8 = auVar26._0_4_;
          if (fVar19 <= fVar8) {
            if (fVar21 + fVar8 <= fVar23) {
              auVar25 = _vmul(auVar30,auVar28);
              auVar26 = _vaddbc(auVar25,auVar25);
              auVar26 = _vaddbc(auVar26,auVar25);
              auVar26 = _qmfc2(auVar26._0_4_);
              fVar10 = auVar26._0_4_;
              puVar14[0x10] = fVar10;
              if ((fVar10 < fVar19) || (fVar23 < fVar10)) goto LAB_00335454;
              _lqc2(*(undefined1 (*) [16])(puVar14 + 0xc));
              auVar29 = _qmtc2(0);
              fVar22 = 1.0 / fVar22;
              bVar4 = true;
              auVar26 = _qmtc2(fVar21 * fVar22);
              auVar25 = _vaddbc(in_vf0,auVar26);
              auVar26 = _qmtc2(fVar8 * fVar22);
              _vmove(auVar25);
              auVar28 = _vaddbc(in_vf0,auVar26);
              auVar26 = _sqc2(auVar25);
              *(undefined1 (*) [16])(puVar14 + 0xc) = auVar26;
              auVar25 = _qmtc2(fVar10 * fVar22);
              auVar26 = _sqc2(auVar28);
              *(undefined1 (*) [16])(puVar14 + 0xc) = auVar26;
              auVar26 = _vmulbc(auVar24,auVar25);
              auVar28 = _vaddbc(in_vf0,auVar29);
              auVar25 = _vadd(auVar27,auVar26);
              auVar26 = _sqc2(auVar28);
              *(undefined1 (*) [16])(puVar14 + 0xc) = auVar26;
              auVar26 = _sqc2(auVar25);
              *(undefined1 (*) [16])(puVar14 + 4) = auVar26;
              puVar14[0x10] = fVar10 * fVar22;
            }
            else {
              bVar4 = false;
            }
          }
          else {
            bVar4 = false;
          }
        }
      }
      else {
LAB_00335454:
        bVar4 = false;
      }
    } while (!bVar4);
    param_2[5] = param_2[5] + 1;
    pauVar12 = (undefined1 (*) [16])(param_2[0x3a] * 0x60 + param_2[0x39]);
    param_2[0x3a] = param_2[0x3a] + 1;
    puVar5 = PTR_DAT_0040e438;
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      *(undefined4 *)(pauVar12[4] + 0xc) = 0;
      uVar35 = DAT_0048f6fc;
      *(undefined4 *)pauVar12[5] = 0;
      *(undefined4 *)(pauVar12[5] + 8) = uVar35;
      *(undefined4 *)(pauVar12[5] + 4) = 0;
      *(undefined4 *)(pauVar12[5] + 0xc) = 1;
      uVar35 = *(undefined4 *)(puVar5 + 4);
      uVar2 = *(undefined4 *)(puVar5 + 8);
      uVar3 = *(undefined4 *)(puVar5 + 0xc);
      *(undefined4 *)*pauVar12 = *(undefined4 *)puVar5;
      *(undefined4 *)(*pauVar12 + 4) = uVar35;
      *(undefined4 *)(*pauVar12 + 8) = uVar2;
      *(undefined4 *)(*pauVar12 + 0xc) = uVar3;
      auVar1 = *(undefined1 (*) [12])(puVar5 + 0x10);
      uVar35 = *(undefined4 *)(puVar5 + 0x1c);
      *(int *)pauVar12[1] = auVar1._0_4_;
      *(int *)(pauVar12[1] + 4) = auVar1._4_4_;
      *(int *)(pauVar12[1] + 8) = auVar1._8_4_;
      *(undefined4 *)(pauVar12[1] + 0xc) = uVar35;
      auVar1 = *(undefined1 (*) [12])(puVar5 + 0x20);
      uVar35 = *(undefined4 *)(puVar5 + 0x2c);
      *(int *)pauVar12[2] = auVar1._0_4_;
      *(int *)(pauVar12[2] + 4) = auVar1._4_4_;
      *(int *)(pauVar12[2] + 8) = auVar1._8_4_;
      *(undefined4 *)(pauVar12[2] + 0xc) = uVar35;
      auVar1 = *(undefined1 (*) [12])(puVar5 + 0x30);
      uVar35 = *(undefined4 *)(puVar5 + 0x3c);
      auVar26 = _sqc2(auVar31);
      *pauVar12 = auVar26;
      auVar26 = _sqc2(auVar32);
      pauVar12[1] = auVar26;
      auVar26 = _sqc2(auVar33);
      pauVar12[2] = auVar26;
      *(undefined4 *)(pauVar12[4] + 0xc) = 0;
      *(int *)pauVar12[3] = auVar1._0_4_;
      *(int *)(pauVar12[3] + 4) = auVar1._4_4_;
      *(int *)(pauVar12[3] + 8) = auVar1._8_4_;
      *(undefined4 *)(pauVar12[3] + 0xc) = uVar35;
    }
    iVar13 = *(int *)(param_1 + 0x40);
    *(int *)pauVar12[5] = piVar16[3];
    *(int *)(pauVar12[5] + 4) = piVar16[3];
    *(uint *)pauVar12[4] = *(uint *)((uStack_a4 >> 3) * 4 + iVar13) >> ((uStack_a4 & 7) << 2) & 0xf;
    if (param_2[0x40] == 0) {
LAB_003355d0:
      iVar13 = param_2[3];
    }
    else {
      fVar22 = (float)puVar14[0x10];
      if (fVar22 < (float)param_2[0x3f]) {
        iVar13 = piVar15[0x94];
        uVar11 = 0;
        param_2[0x3f] = (int)fVar22;
        iVar7 = 0;
        if (iVar13 != 0) {
          piVar16 = piVar15 + 0x14;
          pfVar9 = (float *)(piVar15 + 0x17);
          do {
            if ((float)piVar16[2] <= fVar22) {
              uVar17 = *(undefined8 *)(piVar16 + 2);
              *(undefined8 *)(pfVar9 + -3) = *(undefined8 *)piVar16;
              *(undefined8 *)(pfVar9 + -1) = uVar17;
              fVar21 = *pfVar9;
              if (fVar22 <= fVar21) {
                fVar21 = fVar22;
              }
              *pfVar9 = fVar21;
              iVar7 = iVar7 + 1;
              pfVar9 = pfVar9 + 4;
              uVar6 = piVar15[0x94];
            }
            else {
              uVar6 = piVar15[0x94];
            }
            uVar11 = uVar11 + 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 < uVar6);
        }
        piVar15[0x94] = iVar7;
        goto LAB_003355d0;
      }
      iVar13 = param_2[3];
    }
    auVar25 = _vsub(auVar33,auVar31);
    auVar26 = _vsub(auVar32,auVar31);
    _vopmula(auVar26,auVar25);
    auVar32 = _vopmsub(auVar25,auVar26);
    auVar25 = _vmul(auVar32,auVar32);
    uVar35 = *(undefined4 *)(iVar13 * 4 + *param_2 + -4);
    auVar26 = _vaddbc(auVar25,auVar25);
    puVar14[0x14] = pauVar12;
    auVar26 = _vaddbc(auVar26,auVar25);
    *puVar14 = uVar35;
    auVar25 = _qmfc2(auVar26._0_4_);
    uVar35 = *(undefined4 *)(*param_3 + 4);
    uVar2 = *(undefined4 *)(*param_3 + 8);
    uVar3 = *(undefined4 *)(*param_3 + 0xc);
    auVar31 = _lqc2(*(undefined1 (*) [16])(puVar14 + 4));
    puVar14[0x18] = *(undefined4 *)*param_3;
    puVar14[0x19] = uVar35;
    puVar14[0x1a] = uVar2;
    puVar14[0x1b] = uVar3;
    uVar35 = *(undefined4 *)(param_3[1] + 4);
    uVar2 = *(undefined4 *)(param_3[1] + 8);
    uVar3 = *(undefined4 *)(param_3[1] + 0xc);
    puVar14[0x1c] = *(undefined4 *)param_3[1];
    puVar14[0x1d] = uVar35;
    puVar14[0x1e] = uVar2;
    puVar14[0x1f] = uVar3;
    auVar1 = *(undefined1 (*) [12])param_3[2];
    uVar35 = *(undefined4 *)(param_3[2] + 0xc);
    puVar14[0x20] = auVar1._0_4_;
    puVar14[0x21] = auVar1._4_4_;
    puVar14[0x22] = auVar1._8_4_;
    puVar14[0x23] = uVar35;
    auVar26 = param_3[3];
    puVar14[0x15] = puVar14 + 0x18;
    puVar14[0x24] = auVar26._0_4_;
    puVar14[0x25] = auVar26._4_4_;
    puVar14[0x26] = auVar26._8_4_;
    puVar14[0x27] = auVar26._12_4_;
    auVar30 = _lqc2(*param_3);
    auVar29 = _lqc2(param_3[1]);
    auVar28 = _lqc2(param_3[2]);
    auVar26 = _lqc2(param_3[3]);
    _vmulabc(auVar30,auVar31);
    _vmaddabc(auVar29,auVar31);
    _vmaddabc(auVar28,auVar31);
    auVar28 = _vmaddbc(auVar26,in_vf0);
    auVar26 = _sqc2(auVar32);
    *(undefined1 (*) [16])(puVar14 + 8) = auVar26;
    auVar26 = _sqc2(auVar28);
    *(undefined1 (*) [16])(puVar14 + 4) = auVar26;
    if (fVar20 < auVar25._0_4_) {
      auVar25 = _vmul(auVar32,auVar32);
      auVar26 = _vaddbc(auVar25,auVar25);
      auVar26 = _vaddbc(auVar26,auVar25);
      _vrsqrt(in_vf0,auVar26);
      uVar35 = _vwaitq();
      auVar26 = _vmulq(auVar32,uVar35);
      auVar26 = _sqc2(auVar26);
      *(undefined1 (*) [16])(puVar14 + 8) = auVar26;
    }
    auVar29 = _lqc2(*param_3);
    auVar28 = _lqc2(param_3[1]);
    auVar25 = _lqc2(param_3[2]);
    auVar26 = _lqc2(*(undefined1 (*) [16])(puVar14 + 8));
    _vmulabc(auVar29,auVar26);
    _vmaddabc(auVar28,auVar26);
    auVar26 = _vmaddbc(auVar25,auVar26);
    auVar26 = _sqc2(auVar26);
    *(undefined1 (*) [16])(puVar14 + 8) = auVar26;
    puVar14[0x30] = param_2[0x41] | uStack_a4 + 1 << (*(byte *)(param_2 + 0x42) & 0x1f);
    *(char *)(puVar14 + 0x31) = (char)param_2[0x42] + *(char *)(param_1 + 0x24);
  } while( true );
}


// ==== FUN_00335730 @ 00335730 ====
// GLOBAL DAT_0048f6fc undefined4
// GLOBAL PTR_DAT_0040e438 undefined_*

int FUN_00335730(int param_1,int param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 *puVar18;
  int *piVar19;
  int *piVar20;
  undefined1 (*pauVar21) [16];
  undefined8 unaff_s0;
  undefined1 in_vf0 [16];
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  float afStack_c0 [2];
  int iStack_b8;
  int iStack_b4;
  float afStack_b0 [2];
  int iStack_a8;
  int iStack_a4;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  uint uStack_20;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar12 = (undefined8 *)&uStack_160;
  uStack_10 = (int)unaff_s0;
  uStack_c = (int)((ulong)unaff_s0 >> 0x20);
  piVar19 = *(int **)(param_2 + 0xe8);
  pauVar21 = (undefined1 (*) [16])param_3;
  if (piVar19 == (int *)0x0) {
    if (param_3 == 0) {
      puVar12 = (undefined8 *)(param_2 + 0x10);
    }
    else {
      auVar29 = _lqc2(*pauVar21);
      auVar31 = _lqc2(pauVar21[1]);
      auVar30 = _lqc2(pauVar21[2]);
      _vmove(auVar29);
      _vmove(auVar31);
      auVar36 = _vaddbc(in_vf0,auVar31);
      auVar33 = _vaddbc(in_vf0,auVar29);
      _vmove(auVar30);
      auVar39 = _vaddbc(in_vf0,auVar29);
      _vmove(auVar36);
      _vmove(auVar33);
      auVar34 = _vaddbc(in_vf0,auVar30);
      auVar28 = _lqc2(pauVar21[3]);
      auVar35 = _vaddbc(in_vf0,auVar30);
      _vmove(auVar39);
      auVar22 = _vmulbc(auVar35,auVar28);
      auVar38 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
      auVar32 = _vaddbc(in_vf0,auVar31);
      auVar23 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
      auVar26 = _vmulbc(auVar34,auVar28);
      auVar24 = _vsub(auVar23,auVar38);
      auVar37 = _qmtc2(0x3f000000);
      auVar26 = _vadd(auVar26,auVar22);
      auVar22 = _vmulbc(auVar32,auVar28);
      auVar25 = _vmulbc(auVar24,auVar37);
      auVar27 = _vadd(auVar26,auVar22);
      auVar22 = _vabs(auVar34);
      auVar24 = _vabs(auVar35);
      auVar22 = _vmulbc(auVar22,auVar25);
      auVar24 = _vmulbc(auVar24,auVar25);
      auVar26 = _vabs(auVar32);
      auVar23 = _vadd(auVar23,auVar38);
      auVar22 = _vadd(auVar22,auVar24);
      auVar27 = _vsub(in_vf0,auVar27);
      auVar24 = _vmulbc(auVar26,auVar25);
      auVar23 = _vmulbc(auVar23,auVar37);
      auVar22 = _vadd(auVar22,auVar24);
      _vmulabc(auVar34,auVar23);
      _vmaddabc(auVar35,auVar23);
      _vmaddabc(auVar32,auVar23);
      auVar23 = _vmaddbc(auVar27,in_vf0);
      _sqc2(auVar29);
      auVar24 = _vadd(auVar23,auVar22);
      _sqc2(auVar31);
      auVar22 = _vsub(auVar23,auVar22);
      auStack_d0 = _sqc2(auVar24);
      auStack_e0 = _sqc2(auVar22);
      _sqc2(auVar30);
      _sqc2(auVar28);
      _sqc2(auVar36);
      _sqc2(auVar33);
      _sqc2(auVar39);
      uStack_160 = auStack_e0._0_4_;
      uStack_15c = auStack_e0._4_4_;
      uStack_158 = auStack_e0._8_4_;
      uStack_154 = auStack_e0._12_4_;
      uStack_150 = auStack_d0._0_4_;
      uStack_14c = auStack_d0._4_4_;
      uStack_148 = auStack_d0._8_4_;
      uStack_144 = auStack_d0._12_4_;
      auStack_140 = _sqc2(auVar34);
      auStack_130 = _sqc2(auVar35);
      auStack_120 = _sqc2(auVar32);
      auStack_110 = _sqc2(auVar27);
      uStack_100 = auStack_e0._0_4_;
      uStack_fc = auStack_e0._4_4_;
      uStack_f8 = auStack_e0._8_4_;
      uStack_f4 = auStack_e0._12_4_;
      uStack_f0 = auStack_d0._0_4_;
      uStack_ec = auStack_d0._4_4_;
      uStack_e8 = auStack_d0._8_4_;
      uStack_e4 = auStack_d0._12_4_;
    }
    piVar19 = *(int **)(param_2 + 0xe4);
    if (piVar19 != (int *)0x0) {
      iVar17 = *(int *)(param_1 + 0x3c);
      *piVar19 = iVar17;
      uVar5 = *puVar12;
      iVar8 = *(int *)(puVar12 + 1);
      iVar10 = *(int *)((int)puVar12 + 0xc);
      piVar19[4] = (int)uVar5;
      piVar19[5] = (int)((ulong)uVar5 >> 0x20);
      piVar19[6] = iVar8;
      piVar19[7] = iVar10;
      uVar5 = puVar12[2];
      iVar8 = *(int *)(puVar12 + 3);
      iVar10 = *(int *)((int)puVar12 + 0x1c);
      piVar19[0x2d] = 0;
      piVar19[8] = (int)uVar5;
      piVar19[9] = (int)((ulong)uVar5 >> 0x20);
      piVar19[10] = iVar8;
      piVar19[0xb] = iVar10;
      piVar19[0x2e] = 0;
      if (*(int *)(iVar17 + 4) == 0) {
        iVar17 = *(int *)(iVar17 + 8);
        piVar19[0x2c] = 0;
        piVar19[0x2d] = iVar17;
        piVar19[0x2e] = 0;
      }
      else {
        piVar19[0xc] = 0;
        piVar19[0x2c] = 1;
      }
    }
    *(int **)(param_2 + 0xe8) = piVar19;
  }
  *(undefined4 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xcc) = 0;
  do {
    iVar17 = 0;
    if ((*(uint *)(param_2 + 0xd8) < *(uint *)(param_2 + 0xdc)) &&
       (iVar17 = 1, *(uint *)(param_2 + 0xd0) <= *(uint *)(param_2 + 0xcc))) {
      iVar17 = 0;
    }
    if (iVar17 == 0) {
      return 0;
    }
    if (piVar19[0x2d] == 0) {
      iVar8 = piVar19[0x2c];
      while (iVar8 != 0) {
        piVar19[0x2c] = iVar8 + -1;
        iVar8 = piVar19[iVar8 + 0xb];
        iVar10 = *(int *)*piVar19;
        piVar19[0x2d] = 0;
        iVar10 = iVar10 + iVar8 * 0x20;
        afStack_c0[0] = (float)*(undefined8 *)(piVar19 + 8);
        afStack_c0[1] = (float)(int)((ulong)*(undefined8 *)(piVar19 + 8) >> 0x20);
        iStack_b8 = piVar19[10];
        iStack_b4 = piVar19[0xb];
        if (*(float *)(iVar10 + 0x1c) <= afStack_c0[*(int *)(iVar10 + 4)]) {
          if (*(int *)(iVar10 + 0x10) == -1) {
            iVar8 = piVar19[0x2c];
            piVar19[iVar8 + 0xc] = *(int *)(iVar10 + 0x14);
            piVar19[0x2c] = iVar8 + 1;
          }
          else {
            piVar19[0x2d] = piVar19[0x2d] + *(int *)(iVar10 + 0x10);
            piVar19[0x2e] = *(int *)(iVar10 + 0x14);
          }
          iVar8 = *(int *)(iVar10 + 4);
        }
        else {
          iVar8 = *(int *)(iVar10 + 4);
        }
        afStack_b0[0] = (float)*(undefined8 *)(piVar19 + 4);
        afStack_b0[1] = (float)(int)((ulong)*(undefined8 *)(piVar19 + 4) >> 0x20);
        iStack_a8 = piVar19[6];
        iStack_a4 = piVar19[7];
        if (afStack_b0[iVar8] <= *(float *)(iVar10 + 0x18)) {
          if (*(int *)(iVar10 + 8) == -1) {
            iVar8 = piVar19[0x2c];
            piVar19[iVar8 + 0xc] = *(int *)(iVar10 + 0xc);
            piVar19[0x2c] = iVar8 + 1;
          }
          else {
            piVar19[0x2d] = piVar19[0x2d] + *(int *)(iVar10 + 8);
            piVar19[0x2e] = *(int *)(iVar10 + 0xc);
          }
          iVar8 = piVar19[0x2d];
        }
        else {
          iVar8 = piVar19[0x2d];
        }
        if (iVar8 != 0) goto LAB_00335a10;
        iVar8 = piVar19[0x2c];
      }
      bVar1 = false;
    }
    else {
LAB_00335a10:
      bVar1 = true;
      uStack_20 = piVar19[0x2e];
      piVar19[0x2e] = piVar19[0x2e] + 1;
      piVar19[0x2d] = piVar19[0x2d] + -1;
    }
    if (!bVar1) {
      return iVar17;
    }
    pauVar14 = &auStack_a0;
    iVar17 = *(int *)(param_1 + 0x38);
    iVar8 = 1;
    do {
      bVar1 = iVar8 != -1;
      iVar8 = iVar8 + -1;
    } while (bVar1);
    iVar8 = 1;
    do {
      bVar1 = iVar8 != -1;
      iVar8 = iVar8 + -1;
    } while (bVar1);
    piVar20 = (int *)(*(int *)(param_1 + 0x34) + uStack_20 * 0x10);
    puVar12 = (undefined8 *)(*piVar20 * 0x10 + iVar17);
    auStack_a0._8_4_ = *(undefined4 *)(puVar12 + 1);
    auStack_a0._12_4_ = *(undefined4 *)((int)puVar12 + 0xc);
    auStack_a0._0_4_ = (undefined4)*puVar12;
    auStack_a0._4_4_ = (undefined4)((ulong)*puVar12 >> 0x20);
    puVar12 = (undefined8 *)(piVar20[1] * 0x10 + iVar17);
    uStack_88 = *(undefined4 *)(puVar12 + 1);
    uStack_84 = *(undefined4 *)((int)puVar12 + 0xc);
    uStack_90 = (undefined4)*puVar12;
    uStack_8c = (undefined4)((ulong)*puVar12 >> 0x20);
    pauVar13 = (undefined1 (*) [16])(piVar20[2] * 0x10 + iVar17);
    uStack_78 = *(undefined4 *)(*pauVar13 + 8);
    uStack_74 = *(undefined4 *)(*pauVar13 + 0xc);
    uStack_80 = (undefined4)*(undefined8 *)*pauVar13;
    uStack_7c = (undefined4)((ulong)*(undefined8 *)*pauVar13 >> 0x20);
    if (param_3 == 0) {
      auVar22 = _lqc2(*pauVar13);
    }
    else {
      auVar26 = _lqc2(*pauVar21);
      auVar24 = _lqc2(pauVar21[1]);
      auVar23 = _lqc2(pauVar21[2]);
      auVar22 = _lqc2(pauVar21[3]);
      iVar17 = 2;
      pauVar13 = (undefined1 (*) [16])auStack_70;
      do {
        auVar25 = _lqc2(*pauVar14);
        iVar17 = iVar17 + -1;
        _vmulabc(auVar26,auVar25);
        _vmaddabc(auVar24,auVar25);
        _vmaddabc(auVar23,auVar25);
        auVar25 = _vmaddbc(auVar22,in_vf0);
        pauVar14 = pauVar14 + 1;
        auVar25 = _sqc2(auVar25);
        *pauVar13 = auVar25;
        pauVar13 = pauVar13 + 1;
      } while (-1 < iVar17);
      auVar22 = _lqc2(auStack_50);
      pauVar14 = (undefined1 (*) [16])auStack_70;
    }
    auVar24 = _lqc2(pauVar14[1]);
    auVar23 = _lqc2(*pauVar14);
    auVar22 = _vmini(auVar24,auVar22);
    auVar22 = _vmini(auVar23,auVar22);
    auStack_40 = _sqc2(auVar22);
    auVar24 = _lqc2(pauVar14[2]);
    auVar23 = _lqc2(pauVar14[1]);
    auVar22 = _lqc2(*pauVar14);
    auVar23 = _vmax(auVar23,auVar24);
    auVar22 = _vmax(auVar22,auVar23);
    auStack_30 = _sqc2(auVar22);
    puVar18 = (undefined4 *)(*(int *)(param_2 + 0xd8) * 0x60 + *(int *)(param_2 + 0xd4));
    *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + 1;
    uVar9 = DAT_0048f6fc;
    puVar6 = PTR_DAT_0040e438;
    if (puVar18 != (undefined4 *)0x0) {
      puVar18[0x13] = 0;
      puVar18[0x16] = uVar9;
      puVar18[0x14] = 0;
      puVar18[0x15] = 0;
      puVar18[0x17] = 1;
      uVar5 = *(undefined8 *)puVar6;
      uVar9 = *(undefined4 *)(puVar6 + 8);
      uVar11 = *(undefined4 *)(puVar6 + 0xc);
      *puVar18 = (int)uVar5;
      puVar18[1] = (int)((ulong)uVar5 >> 0x20);
      puVar18[2] = uVar9;
      puVar18[3] = uVar11;
      uVar9 = *(undefined4 *)(puVar6 + 0x14);
      uVar11 = *(undefined4 *)(puVar6 + 0x18);
      uVar15 = *(undefined4 *)(puVar6 + 0x1c);
      puVar18[4] = *(undefined4 *)(puVar6 + 0x10);
      puVar18[5] = uVar9;
      puVar18[6] = uVar11;
      puVar18[7] = uVar15;
      uVar9 = *(undefined4 *)(puVar6 + 0x24);
      uVar11 = *(undefined4 *)(puVar6 + 0x28);
      uVar15 = *(undefined4 *)(puVar6 + 0x2c);
      puVar18[8] = *(undefined4 *)(puVar6 + 0x20);
      puVar18[9] = uVar9;
      puVar18[10] = uVar11;
      puVar18[0xb] = uVar15;
      uVar9 = *(undefined4 *)(puVar6 + 0x30);
      uVar11 = *(undefined4 *)(puVar6 + 0x34);
      uVar15 = *(undefined4 *)(puVar6 + 0x38);
      uVar16 = *(undefined4 *)(puVar6 + 0x3c);
      puVar18[0x13] = 0;
      puVar18[0xc] = uVar9;
      puVar18[0xd] = uVar11;
      puVar18[0xe] = uVar15;
      puVar18[0xf] = uVar16;
      *puVar18 = auStack_a0._0_4_;
      puVar18[1] = auStack_a0._4_4_;
      puVar18[2] = auStack_a0._8_4_;
      puVar18[3] = auStack_a0._12_4_;
      puVar18[4] = uStack_90;
      puVar18[5] = uStack_8c;
      puVar18[6] = uStack_88;
      puVar18[7] = uStack_84;
      puVar18[8] = uStack_80;
      puVar18[9] = uStack_7c;
      puVar18[10] = uStack_78;
      puVar18[0xb] = uStack_74;
    }
    iVar17 = *(int *)(param_1 + 0x40);
    puVar18[0x14] = piVar20[3];
    puVar18[0x15] = piVar20[3];
    puVar18[0x10] = *(uint *)((uStack_20 >> 3) * 4 + iVar17) >> ((uStack_20 & 7) << 2) & 0xf;
    bVar2 = *(byte *)(param_2 + 0xf0);
    cVar3 = *(char *)(param_1 + 0x24);
    uVar4 = *(uint *)(param_2 + 0xec);
    if (*(uint *)(param_2 + 0xcc) < *(uint *)(param_2 + 0xd0)) {
      puVar7 = (undefined4 *)(*(uint *)(param_2 + 0xcc) * 0x80 + *(int *)(param_2 + 200));
      *puVar7 = puVar18;
      if (param_3 == 0) {
        puVar7[1] = 0;
      }
      else {
        uVar5 = *(undefined8 *)*pauVar21;
        uVar9 = *(undefined4 *)(*pauVar21 + 8);
        uVar11 = *(undefined4 *)(*pauVar21 + 0xc);
        puVar7[4] = (int)uVar5;
        puVar7[5] = (int)((ulong)uVar5 >> 0x20);
        puVar7[6] = uVar9;
        puVar7[7] = uVar11;
        uVar5 = *(undefined8 *)pauVar21[1];
        uVar9 = *(undefined4 *)(pauVar21[1] + 8);
        uVar11 = *(undefined4 *)(pauVar21[1] + 0xc);
        puVar7[8] = (int)uVar5;
        puVar7[9] = (int)((ulong)uVar5 >> 0x20);
        puVar7[10] = uVar9;
        puVar7[0xb] = uVar11;
        uVar5 = *(undefined8 *)pauVar21[2];
        uVar9 = *(undefined4 *)(pauVar21[2] + 8);
        uVar11 = *(undefined4 *)(pauVar21[2] + 0xc);
        puVar7[0xc] = (int)uVar5;
        puVar7[0xd] = (int)((ulong)uVar5 >> 0x20);
        puVar7[0xe] = uVar9;
        puVar7[0xf] = uVar11;
        uVar5 = *(undefined8 *)pauVar21[3];
        uVar9 = *(undefined4 *)(pauVar21[3] + 8);
        uVar11 = *(undefined4 *)(pauVar21[3] + 0xc);
        puVar7[0x10] = (int)uVar5;
        puVar7[0x11] = (int)((ulong)uVar5 >> 0x20);
        puVar7[0x12] = uVar9;
        puVar7[0x13] = uVar11;
        iVar17 = *(int *)(param_2 + 0xcc) * 0x80 + *(int *)(param_2 + 200);
        *(int *)(iVar17 + 4) = iVar17 + 0x10;
      }
      iVar17 = *(int *)(param_2 + 0xcc) * 0x80 + *(int *)(param_2 + 200);
      *(undefined4 *)(iVar17 + 0x50) = auStack_40._0_4_;
      *(undefined4 *)(iVar17 + 0x54) = auStack_40._4_4_;
      *(undefined4 *)(iVar17 + 0x58) = auStack_40._8_4_;
      *(undefined4 *)(iVar17 + 0x5c) = auStack_40._12_4_;
      *(undefined4 *)(iVar17 + 0x60) = auStack_30._0_4_;
      *(undefined4 *)(iVar17 + 100) = auStack_30._4_4_;
      *(undefined4 *)(iVar17 + 0x68) = auStack_30._8_4_;
      *(undefined4 *)(iVar17 + 0x6c) = auStack_30._12_4_;
      iVar17 = *(int *)(param_2 + 200);
      *(uint *)(*(int *)(param_2 + 0xcc) * 0x80 + iVar17 + 0x70) =
           uVar4 | uStack_20 + 1 << (bVar2 & 0x1f);
      *(byte *)(*(int *)(param_2 + 0xcc) * 0x80 + iVar17 + 0x74) = bVar2 + cVar3;
      *(int *)(param_2 + 0xcc) = *(int *)(param_2 + 0xcc) + 1;
    }
  } while( true );
}


// ==== FUN_00335d30 @ 00335d30 ====

int FUN_00335d30(int param_1)

{
  return (*(int *)(param_1 + 0x30) * 0x10 + *(int *)(param_1 + 0x28) * 0x10 +
          (*(int *)(param_1 + 0x28) + 7U >> 3) * 4 + 0x5f & 0xfffffff0) +
         *(int *)(*(int *)(param_1 + 0x3c) + 4) * 0x20 + 0x30;
}


// ==== FUN_00335db8 @ 00335db8 ====
// GLOBAL DAT_0045ceb0 undefined4
// GLOBAL DAT_0045ceb4 undefined4
// GLOBAL DAT_0045ceb8 undefined4
// GLOBAL DAT_0045cebc undefined4
// GLOBAL DAT_0045cec0 undefined4
// GLOBAL DAT_0045cec4 undefined4
// GLOBAL DAT_0045cec8 undefined4
// GLOBAL DAT_0045cecc undefined4
// GLOBAL DAT_0045ced0 undefined4
// GLOBAL DAT_0045ced4 undefined4
// GLOBAL DAT_0045ced8 undefined4
// GLOBAL DAT_0045cedc undefined4
// GLOBAL DAT_0045cee0 undefined4
// GLOBAL DAT_0045cee4 undefined4
// GLOBAL DAT_0045cee8 undefined4
// GLOBAL DAT_0045ceec undefined4

void FUN_00335db8(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9100,2);
      FUN_00100230(&gp0xffff90f8,2);
    }
    else {
      FUN_00100228(&gp0xffff90f8);
      FUN_00100258(&gp0xffff9100);
      DAT_0045ceb0 = 0x3fc90fdb;
      DAT_0045ceb4 = 0xbe22f983;
      DAT_0045ceb8 = 0x4b400000;
      DAT_0045cebc = uStack_44;
      DAT_0045cec0 = 0xbe22f983;
      DAT_0045cec4 = 0x3f000000;
      DAT_0045cec8 = 0x3e800000;
      DAT_0045cecc = uStack_34;
      DAT_0045ced0 = 0xc2992661;
      DAT_0045ced4 = 0xc2255de0;
      DAT_0045ced8 = 0x42a33457;
      DAT_0045cedc = uStack_24;
      DAT_0045cee0 = 0x421ed7b7;
      DAT_0045cee4 = 0x40c90fda;
      DAT_0045cee8 = 0;
      DAT_0045ceec = uStack_14;
    }
  }
  return;
}


// ==== FUN_00335f20 @ 00335f20 ====
// GLOBAL DAT_003d12f8 undefined

bool FUN_00335f20(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = FUN_00341808();
  if (lVar1 != 0) {
    iVar2 = param_1 - *(int *)((int)param_2 + 8);
    iVar3 = *(int *)(param_1 + 0x3c) + iVar2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar2;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar2;
    *(int *)(param_1 + 0x3c) = iVar3;
    FUN_0033b858(iVar3,param_2);
    *(undefined **)(param_1 + 0x20) = &DAT_003d12f8;
  }
  return lVar1 != 0;
}


// ==== FUN_00335fb0 @ 00335fb0 ====

void FUN_00335fb0(void)

{
  FUN_00335db8(1,0xffff);
  return;
}


// ==== FUN_00335fd0 @ 00335fd0 ====

void FUN_00335fd0(void)

{
  FUN_00335db8(0,0xffff);
  return;
}


// ==== FUN_00335ff0 @ 00335ff0 ====

/* WARNING: Removing unreachable block (ram,0x00336178) */

undefined1 (*) [16]
FUN_00335ff0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  int iVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  iVar4 = *(int *)(param_2[8] + 8);
  pauVar5 = param_1;
  if (iVar4 == 2) {
LAB_00336070:
    uVar14 = *(undefined4 *)(param_2[2] + 4);
    uVar1 = *(undefined4 *)(param_2[2] + 8);
    uVar2 = *(undefined4 *)(param_2[2] + 0xc);
    *(undefined4 *)*pauVar5 = *(undefined4 *)param_2[2];
    *(undefined4 *)(*pauVar5 + 4) = uVar14;
    *(undefined4 *)(*pauVar5 + 8) = uVar1;
    *(undefined4 *)(*pauVar5 + 0xc) = uVar2;
    pauVar5 = pauVar5 + 1;
    auVar8 = param_2[1];
LAB_00336080:
    *(int *)*pauVar5 = auVar8._0_4_;
    *(int *)(*pauVar5 + 4) = auVar8._4_4_;
    *(int *)(*pauVar5 + 8) = auVar8._8_4_;
    *(int *)(*pauVar5 + 0xc) = auVar8._12_4_;
    iVar4 = *(int *)(param_3[8] + 8);
    pauVar5 = pauVar5 + 1;
  }
  else if (iVar4 < 3) {
    if (iVar4 == 1) {
      auVar8 = param_2[1];
      goto LAB_00336080;
    }
    iVar4 = *(int *)(param_3[8] + 8);
  }
  else {
    if (iVar4 == 3) {
      uVar14 = *(undefined4 *)(param_2[3] + 4);
      uVar1 = *(undefined4 *)(param_2[3] + 8);
      uVar2 = *(undefined4 *)(param_2[3] + 0xc);
      *(undefined4 *)*param_1 = *(undefined4 *)param_2[3];
      *(undefined4 *)(*param_1 + 4) = uVar14;
      *(undefined4 *)(*param_1 + 8) = uVar1;
      *(undefined4 *)(*param_1 + 0xc) = uVar2;
      pauVar5 = param_1 + 1;
      goto LAB_00336070;
    }
    iVar4 = *(int *)(param_3[8] + 8);
  }
  if (iVar4 == 2) {
LAB_003360c8:
    uVar14 = *(undefined4 *)(param_3[2] + 4);
    uVar1 = *(undefined4 *)(param_3[2] + 8);
    uVar2 = *(undefined4 *)(param_3[2] + 0xc);
    *(undefined4 *)*pauVar5 = *(undefined4 *)param_3[2];
    *(undefined4 *)(*pauVar5 + 4) = uVar14;
    *(undefined4 *)(*pauVar5 + 8) = uVar1;
    *(undefined4 *)(*pauVar5 + 0xc) = uVar2;
    pauVar5 = pauVar5 + 1;
    auVar8 = param_3[1];
  }
  else {
    if (2 < iVar4) {
      if (iVar4 != 3) {
        iVar4 = *(int *)(param_2[8] + 0xc);
        goto LAB_003360e4;
      }
      uVar14 = *(undefined4 *)(param_3[3] + 4);
      uVar1 = *(undefined4 *)(param_3[3] + 8);
      uVar2 = *(undefined4 *)(param_3[3] + 0xc);
      *(undefined4 *)*pauVar5 = *(undefined4 *)param_3[3];
      *(undefined4 *)(*pauVar5 + 4) = uVar14;
      *(undefined4 *)(*pauVar5 + 8) = uVar1;
      *(undefined4 *)(*pauVar5 + 0xc) = uVar2;
      pauVar5 = pauVar5 + 1;
      goto LAB_003360c8;
    }
    if (iVar4 != 1) {
      iVar4 = *(int *)(param_2[8] + 0xc);
      goto LAB_003360e4;
    }
    auVar8 = param_3[1];
  }
  *(int *)*pauVar5 = auVar8._0_4_;
  *(int *)(*pauVar5 + 4) = auVar8._4_4_;
  *(int *)(*pauVar5 + 8) = auVar8._8_4_;
  *(int *)(*pauVar5 + 0xc) = auVar8._12_4_;
  pauVar5 = pauVar5 + 1;
  iVar4 = *(int *)(param_2[8] + 0xc);
LAB_003360e4:
  if (0 < iVar4) {
    iVar4 = *(int *)(param_3[8] + 0xc);
    iVar3 = 0;
    while( true ) {
      iVar7 = 0;
      if (0 < iVar4) {
        pauVar6 = param_3 + 4;
        do {
          auVar8 = _lqc2(*pauVar6);
          auVar9 = _lqc2(param_2[iVar3 + 4]);
          _vopmula(auVar9,auVar8);
          auVar8 = _vopmsub(auVar8,auVar9);
          auVar9 = _vmul(auVar8,auVar8);
          auVar8 = _sqc2(auVar8);
          *pauVar5 = auVar8;
          auVar8 = _vaddbc(auVar9,auVar9);
          auVar8 = _vaddbc(auVar8,auVar9);
          auVar8 = _qmfc2(auVar8._0_4_);
          if (1.1920929e-07 < auVar8._0_4_) {
            auVar9 = _lqc2(*pauVar5);
            auVar8 = _qmtc2(1.0 / SQRT(auVar8._0_4_));
            auVar8 = _vmulbc(auVar9,auVar8);
            auVar8 = _sqc2(auVar8);
            *pauVar5 = auVar8;
            pauVar5 = pauVar5 + 1;
            iVar4 = *(int *)(param_3[8] + 0xc);
          }
          else {
            iVar4 = *(int *)(param_3[8] + 0xc);
          }
          iVar7 = iVar7 + 1;
          pauVar6 = pauVar6 + 1;
        } while (iVar7 < iVar4);
      }
      iVar4 = *(int *)(param_2[8] + 0xc);
      if (iVar4 <= iVar3 + 1) break;
      iVar4 = *(int *)(param_3[8] + 0xc);
      iVar3 = iVar3 + 1;
    }
  }
  if ((iVar4 == 1) && (*(int *)(param_3[8] + 0xc) == 1)) {
    auVar10 = _lqc2(param_2[4]);
    auVar13 = _lqc2(param_3[4]);
    _vopmula(auVar10,auVar13);
    auVar12 = _vopmsub(auVar13,auVar10);
    auVar8 = _vmul(auVar12,auVar12);
    auVar9 = _vaddbc(auVar8,auVar8);
    auVar8 = _vaddbc(auVar9,auVar8);
    _vsqrt(auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    uVar14 = _vwaitq();
    auVar8 = _vmulq(auVar8,uVar14);
    auVar8 = _qmfc2(auVar8._0_4_);
    if (1.1920929e-07 < auVar8._0_4_) {
      _vopmula(auVar10,auVar12);
      auVar11 = _vopmsub(auVar12,auVar10);
      auVar9 = _vmul(auVar11,auVar11);
      _vopmula(auVar13,auVar12);
      auVar12 = _vopmsub(auVar12,auVar13);
      auVar10 = _vaddbc(auVar9,auVar9);
      auVar8 = _sqc2(auVar11);
      *pauVar5 = auVar8;
      auVar8 = _vaddbc(auVar10,auVar9);
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar14 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar14);
      auVar8 = _qmfc2(auVar8._0_4_);
      if (1.1920929e-07 < auVar8._0_4_) {
        auVar9 = _vmul(auVar11,auVar11);
        auVar8 = _vaddbc(auVar9,auVar9);
        auVar8 = _vaddbc(auVar8,auVar9);
        _vrsqrt(in_vf0,auVar8);
        uVar14 = _vwaitq();
        auVar8 = _vmulq(auVar11,uVar14);
        auVar8 = _sqc2(auVar8);
        *pauVar5 = auVar8;
        pauVar5 = pauVar5 + 1;
      }
      auVar9 = _vmul(auVar12,auVar12);
      auVar8 = _sqc2(auVar12);
      *pauVar5 = auVar8;
      auVar8 = _vaddbc(auVar9,auVar9);
      auVar8 = _vaddbc(auVar8,auVar9);
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar14 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar14);
      auVar8 = _qmfc2(auVar8._0_4_);
      if (1.1920929e-07 < auVar8._0_4_) {
        auVar9 = _vmul(auVar12,auVar12);
        auVar8 = _vaddbc(auVar9,auVar9);
        auVar8 = _vaddbc(auVar8,auVar9);
        _vrsqrt(in_vf0,auVar8);
        uVar14 = _vwaitq();
        auVar8 = _vmulq(auVar12,uVar14);
        auVar8 = _sqc2(auVar8);
        *pauVar5 = auVar8;
        pauVar5 = pauVar5 + 1;
      }
    }
  }
  pauVar6 = pauVar5;
  if (pauVar5 == param_1) {
    if (*(int *)(param_2[8] + 0xc) == 1) {
      if (*(int *)(param_3[8] + 0xc) == 1) {
        auVar9 = _lqc2(*param_3);
        auVar8 = _lqc2(*param_2);
        auVar10 = _lqc2(param_2[4]);
        auVar8 = _vsub(auVar8,auVar9);
        _vopmula(auVar8,auVar10);
        auVar8 = _vopmsub(auVar10,auVar8);
        _vopmula(auVar8,auVar10);
        auVar10 = _vopmsub(auVar10,auVar8);
        auVar9 = _vmul(auVar10,auVar10);
        auVar8 = _sqc2(auVar10);
        *pauVar5 = auVar8;
        auVar8 = _vaddbc(auVar9,auVar9);
        auVar8 = _vaddbc(auVar8,auVar9);
        _vsqrt(auVar8);
        auVar8 = _vaddbc(in_vf0,in_vf0);
        uVar14 = _vwaitq();
        auVar8 = _vmulq(auVar8,uVar14);
        auVar8 = _qmfc2(auVar8._0_4_);
        if (1.1920929e-07 < auVar8._0_4_) {
          auVar9 = _vmul(auVar10,auVar10);
          auVar8 = _vaddbc(auVar9,auVar9);
          auVar8 = _vaddbc(auVar8,auVar9);
          _vrsqrt(in_vf0,auVar8);
          uVar14 = _vwaitq();
          auVar8 = _vmulq(auVar10,uVar14);
          auVar8 = _sqc2(auVar8);
          *pauVar5 = auVar8;
          pauVar5 = pauVar5 + 1;
          iVar4 = *(int *)(param_2[8] + 0xc);
        }
        else {
          iVar4 = *(int *)(param_2[8] + 0xc);
        }
      }
      else {
        iVar4 = *(int *)(param_2[8] + 0xc);
      }
    }
    else {
      iVar4 = *(int *)(param_2[8] + 0xc);
    }
    if (iVar4 + *(int *)(param_3[8] + 0xc) == 1) {
      if (iVar4 != 0) {
        uStack_b0 = *(undefined4 *)param_2[4];
        uStack_ac = *(undefined4 *)(param_2[4] + 4);
        uStack_a8 = *(undefined4 *)(param_2[4] + 8);
        uStack_a4 = *(undefined4 *)(param_2[4] + 0xc);
      }
      if (*(int *)(param_3[8] + 0xc) == 0) {
        auVar8 = _lqc2(*param_3);
      }
      else {
        uStack_b0 = *(undefined4 *)param_3[4];
        uStack_ac = *(undefined4 *)(param_3[4] + 4);
        uStack_a8 = *(undefined4 *)(param_3[4] + 8);
        uStack_a4 = *(undefined4 *)(param_3[4] + 0xc);
        auVar8 = _lqc2(*param_3);
      }
      auVar9 = _lqc2(*param_2);
      auVar9 = _vsub(auVar9,auVar8);
      auVar8._4_4_ = uStack_ac;
      auVar8._0_4_ = uStack_b0;
      auVar8._8_4_ = uStack_a8;
      auVar8._12_4_ = uStack_a4;
      auVar10 = _lqc2(auVar8);
      _vopmula(auVar9,auVar10);
      auVar8 = _vopmsub(auVar10,auVar9);
      _vopmula(auVar8,auVar10);
      auVar10 = _vopmsub(auVar10,auVar8);
      auVar9 = _vmul(auVar10,auVar10);
      auVar8 = _sqc2(auVar10);
      *pauVar5 = auVar8;
      auVar8 = _vaddbc(auVar9,auVar9);
      auVar8 = _vaddbc(auVar8,auVar9);
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar14 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar14);
      auVar8 = _qmfc2(auVar8._0_4_);
      if (1.1920929e-07 < auVar8._0_4_) {
        auVar9 = _vmul(auVar10,auVar10);
        auVar8 = _vaddbc(auVar9,auVar9);
        auVar8 = _vaddbc(auVar8,auVar9);
        _vrsqrt(in_vf0,auVar8);
        uVar14 = _vwaitq();
        auVar8 = _vmulq(auVar10,uVar14);
        auVar8 = _sqc2(auVar8);
        *pauVar5 = auVar8;
        pauVar5 = pauVar5 + 1;
      }
    }
    if (pauVar5 == param_1) {
      auVar9 = _lqc2(*param_3);
      auVar8 = _lqc2(*param_2);
      auVar10 = _vsub(auVar8,auVar9);
      auVar9 = _vmul(auVar10,auVar10);
      auVar8 = _sqc2(auVar10);
      *pauVar5 = auVar8;
      auVar8 = _vaddbc(auVar9,auVar9);
      auVar8 = _vaddbc(auVar8,auVar9);
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar14 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar14);
      auVar8 = _qmfc2(auVar8._0_4_);
      if (1.1920929e-07 < auVar8._0_4_) {
        auVar9 = _vmul(auVar10,auVar10);
        auVar8 = _vaddbc(auVar9,auVar9);
        auVar8 = _vaddbc(auVar8,auVar9);
        _vrsqrt(in_vf0,auVar8);
        uVar14 = _vwaitq();
        auVar8 = _vmulq(auVar10,uVar14);
        auVar8 = _sqc2(auVar8);
        *pauVar5 = auVar8;
        pauVar5 = pauVar5 + 1;
      }
    }
    pauVar6 = (undefined1 (*) [16])0x0;
    if (pauVar5 != param_1) {
      pauVar6 = pauVar5;
    }
  }
  return pauVar6;
}


// ==== FUN_00336520 @ 00336520 ====

float FUN_00336520(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_290 [240];
  float fStack_1a0;
  float afStack_19c [31];
  float fStack_120;
  float afStack_11c [31];
  
  pfVar9 = &fStack_120;
  pfVar10 = &fStack_1a0;
  iVar4 = 0xd;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  fVar15 = 0.0;
  iVar4 = FUN_00335ff0(auStack_290,param_2,param_3);
  pauVar12 = (undefined1 (*) [16])0x0;
  uVar11 = iVar4 - (int)auStack_290 >> 4;
  bVar1 = false;
  iVar4 = 0xd;
  do {
    bVar2 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar2);
  iVar4 = 0xd;
  do {
    bVar2 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar2);
  (**(code **)((int)param_2 + 0x98))(param_2,auStack_290,uVar11,pfVar10);
  (**(code **)((int)param_3 + 0x98))(param_3,auStack_290,uVar11,pfVar9);
  uVar8 = 0;
  if (uVar11 != 0) {
    pfVar7 = afStack_19c;
    do {
      fVar13 = *pfVar10 - pfVar7[0x20];
      fVar14 = *pfVar9 - *pfVar7;
      bVar2 = fVar14 < fVar13;
      if (!bVar2) {
        fVar13 = fVar14;
      }
      if ((pauVar12 == (undefined1 (*) [16])0x0) || (fVar15 < fVar13)) {
        pauVar12 = (undefined1 (*) [16])(auStack_290 + uVar8 * 0x10);
        fVar15 = fVar13;
        bVar1 = bVar2;
      }
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 2;
      pfVar9 = pfVar9 + 2;
      pfVar10 = pfVar10 + 2;
    } while (uVar8 < uVar11);
  }
  if (bVar1) {
    auVar16 = _lqc2(*pauVar12);
    auVar16 = _vsub(in_vf0,auVar16);
    auVar16 = _sqc2(auVar16);
    *param_1 = auVar16;
  }
  else {
    uVar3 = *(undefined8 *)*pauVar12;
    uVar5 = *(undefined4 *)(*pauVar12 + 8);
    uVar6 = *(undefined4 *)(*pauVar12 + 0xc);
    *(int *)*param_1 = (int)uVar3;
    *(int *)(*param_1 + 4) = (int)((ulong)uVar3 >> 0x20);
    *(undefined4 *)(*param_1 + 8) = uVar5;
    *(undefined4 *)(*param_1 + 0xc) = uVar6;
  }
  return fVar15;
}


// ==== FUN_003366f8 @ 003366f8 ====

undefined8
FUN_003366f8(int param_1,undefined1 (*param_2) [16],undefined4 *param_3,int *param_4,int param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  *(undefined4 *)(param_1 + 0x130) = 1;
  uVar1 = *(undefined8 *)(param_5 + 0x120);
  uVar4 = *(undefined4 *)(param_5 + 0x128);
  uVar5 = *(undefined4 *)(param_5 + 300);
  *(int *)*param_2 = (int)uVar1;
  *(int *)(*param_2 + 4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(*param_2 + 8) = uVar4;
  *(undefined4 *)(*param_2 + 0xc) = uVar5;
  uVar4 = *(undefined4 *)(param_5 + 0x124);
  uVar5 = *(undefined4 *)(param_5 + 0x128);
  uVar2 = *(undefined4 *)(param_5 + 300);
  *param_3 = *(undefined4 *)(param_5 + 0x120);
  param_3[1] = uVar4;
  param_3[2] = uVar5;
  param_3[3] = uVar2;
  auVar10 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
  auVar8 = _lqc2(*param_2);
  auVar8 = _vsub(auVar8,auVar10);
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
  auVar9 = _vmul(auVar8,auVar9);
  auVar8 = _vaddbc(auVar9,auVar9);
  auVar8 = _vaddbc(auVar8,auVar9);
  auVar8 = _qmfc2(auVar8._0_4_);
  fVar3 = auVar8._0_4_;
  if (fVar3 < 0.0) {
    auVar8 = _sqc2(auVar10);
    *param_2 = auVar8;
    iVar6 = 1;
  }
  else {
    fVar7 = (float)param_4[0x10];
    iVar6 = 3;
    if (fVar7 < fVar3) {
      auVar8 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
    }
    else {
      iVar6 = 2;
      auVar8 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
      fVar7 = fVar3;
    }
    auVar9 = _qmtc2(fVar7);
    auVar8 = _vmulbc(auVar8,auVar9);
    auVar8 = _vadd(auVar10,auVar8);
    auVar8 = _sqc2(auVar8);
    *param_2 = auVar8;
  }
  *param_4 = (*param_4 + 2) - iVar6;
  return 1;
}


// ==== FUN_003367b0 @ 003367b0 ====

undefined8
FUN_003367b0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
            undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5 = _lqc2(*param_1);
  auVar1 = _lqc2(*param_3);
  auVar3 = _lqc2(*param_4);
  auVar1 = _vsub(auVar1,auVar5);
  auVar2 = _vmul(auVar1,auVar3);
  auVar4 = _lqc2(*param_2);
  auVar1 = _vaddbc(auVar2,auVar2);
  auVar3 = _vmul(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar2);
  auVar2 = _vaddbc(auVar3,auVar3);
  auVar1 = _qmfc2(auVar1._0_4_);
  auVar2 = _vaddbc(auVar2,auVar3);
  auVar2 = _qmfc2(auVar2._0_4_);
  auVar1 = _qmtc2(auVar1._0_4_ / auVar2._0_4_);
  auVar1 = _vmulbc(auVar4,auVar1);
  auVar1 = _vadd(auVar5,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_8_;
}


// ==== FUN_00336810 @ 00336810 ====

undefined8
FUN_00336810(int param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],int *param_4,
            int *param_5,undefined8 param_6)

{
  undefined1 auVar1 [12];
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  undefined8 extraout_v0_udw_01;
  undefined8 extraout_v0_udw_02;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  float fStack_160;
  float fStack_15c;
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  int iStack_c0;
  undefined1 auStack_b0 [16];
  
  auVar17 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
  auVar16 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
  _vopmula(auVar17,auVar16);
  auVar14 = _vopmsub(auVar16,auVar17);
  auVar13 = _vmul(auVar14,auVar14);
  auVar12 = _vaddbc(auVar13,auVar13);
  auVar12 = _vaddbc(auVar12,auVar13);
  auVar12 = _qmfc2(auVar12._0_4_);
  if (1.1920929e-07 < auVar12._0_4_) {
    auVar13 = _vmul(auVar14,auVar14);
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
    auVar12 = _vaddbc(auVar13,auVar13);
    auVar15 = _lqc2(*(undefined1 (*) [16])(param_5 + 4));
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar13 = _vsub(auVar15,auVar18);
    _vrsqrt(in_vf0,auVar12);
    uVar19 = _vwaitq();
    auVar12 = _vmulq(auVar14,uVar19);
    _vopmula(auVar12,auVar16);
    auVar12 = _vopmsub(auVar16,auVar12);
    auVar16 = _vmul(auVar13,auVar12);
    auVar14 = _vmul(auVar17,auVar12);
    auVar12 = _vaddbc(auVar16,auVar16);
    auVar13 = _vaddbc(auVar14,auVar14);
    auVar12 = _vaddbc(auVar12,auVar16);
    auVar14 = _vaddbc(auVar13,auVar14);
    auVar13 = _qmfc2(auVar12._0_4_);
    auVar12 = _qmfc2(auVar14._0_4_);
    fVar10 = auVar13._0_4_ / auVar12._0_4_;
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    if ((float)param_4[0x10] < fVar10) {
      fVar10 = (float)param_4[0x10];
    }
    auVar12 = _qmtc2(fVar10);
    auVar12 = _vmulbc(auVar17,auVar12);
    auVar13 = _vadd(auVar18,auVar12);
    *(undefined4 *)(param_1 + 0x130) = 1;
    auVar12 = _sqc2(auVar13);
    *param_3 = auVar12;
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_5 + 4));
    auVar12 = _vsub(auVar13,auVar14);
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
    auVar13 = _vmul(auVar12,auVar13);
    auVar12 = _vaddbc(auVar13,auVar13);
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar12 = _qmfc2(auVar12._0_4_);
    fVar10 = auVar12._0_4_;
    if (fVar10 < 0.0) {
      auVar12 = _sqc2(auVar14);
      *param_3 = auVar12;
      iVar6 = 1;
    }
    else {
      if ((float)param_5[0x10] < fVar10) {
        auVar13 = _qmtc2(param_5[0x10]);
        auVar12 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
        auVar12 = _vmulbc(auVar12,auVar13);
        iVar6 = 3;
      }
      else {
        iVar6 = 2;
        auVar12 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
        auVar13 = _qmtc2(fVar10);
        auVar12 = _vmulbc(auVar12,auVar13);
      }
      auVar12 = _vadd(auVar14,auVar12);
      auVar12 = _sqc2(auVar12);
      *param_3 = auVar12;
    }
    *param_5 = (*param_5 + 2) - iVar6;
    auVar13 = _lqc2(*param_3);
    auVar12 = _sqc2(auVar13);
    *param_2 = auVar12;
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
    auVar12 = _vsub(auVar13,auVar14);
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
    auVar13 = _vmul(auVar12,auVar13);
    auVar12 = _vaddbc(auVar13,auVar13);
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar12 = _qmfc2(auVar12._0_4_);
    fVar10 = auVar12._0_4_;
    iVar6 = 1;
    if (fVar10 < 0.0) {
      auVar12 = _sqc2(auVar14);
      *param_2 = auVar12;
    }
    else {
      if ((float)param_4[0x10] < fVar10) {
        auVar13 = _qmtc2(param_4[0x10]);
        auVar12 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
        auVar12 = _vmulbc(auVar12,auVar13);
        iVar6 = 3;
      }
      else {
        iVar6 = 2;
        auVar12 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
        auVar13 = _qmtc2(fVar10);
        auVar12 = _vmulbc(auVar12,auVar13);
      }
      auVar12 = _vadd(auVar14,auVar12);
      auVar12 = _sqc2(auVar12);
      *param_2 = auVar12;
    }
    *param_4 = (*param_4 + 2) - iVar6;
    return 1;
  }
  auVar12 = _lqc2(*(undefined1 (*) [16])param_6);
  auVar15 = _vmul(auVar12,auVar17);
  auVar14 = _vmul(auVar12,auVar16);
  auVar12 = _vaddbc(auVar15,auVar15);
  auVar13 = _vaddbc(auVar14,auVar14);
  auVar12 = _vaddbc(auVar12,auVar15);
  auVar12 = _qmfc2(auVar12._0_4_);
  auVar13 = _vaddbc(auVar13,auVar14);
  auVar13 = _qmfc2(auVar13._0_4_);
  if (ABS(auVar13._0_4_) <= ABS(auVar12._0_4_)) {
    auStack_b0 = _sqc2(auVar16);
  }
  else {
    auStack_b0 = _sqc2(auVar17);
  }
  auVar13 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
  auVar12 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
  auVar14 = _qmtc2(param_4[0x10]);
  auVar13 = _vmulbc(auVar13,auVar14);
  auVar14 = _lqc2(auStack_b0);
  auVar16 = _vmul(auVar14,auVar12);
  auVar12 = _vadd(auVar12,auVar13);
  auVar14 = _vaddbc(auVar16,auVar16);
  auVar13 = _lqc2(auStack_b0);
  auVar14 = _vaddbc(auVar14,auVar16);
  auVar13 = _vmul(auVar13,auVar12);
  auVar12 = _qmfc2(auVar14._0_4_);
  auVar14 = _vaddbc(auVar13,auVar13);
  fVar10 = auVar12._0_4_;
  auVar12 = _vaddbc(auVar14,auVar13);
  auVar12 = _qmfc2(auVar12._0_4_);
  fVar8 = auVar12._0_4_;
  fStack_160 = fVar10;
  fStack_15c = fVar8;
  if (fVar8 <= fVar10) {
    fStack_160 = fVar8;
    fStack_15c = fVar10;
  }
  auVar13 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
  auVar12 = _lqc2(*(undefined1 (*) [16])(param_5 + 4));
  auVar14 = _qmtc2(param_5[0x10]);
  auVar13 = _vmulbc(auVar13,auVar14);
  auVar14 = _lqc2(auStack_b0);
  auVar16 = _vmul(auVar14,auVar12);
  auVar12 = _vadd(auVar12,auVar13);
  auVar14 = _vaddbc(auVar16,auVar16);
  auVar13 = _lqc2(auStack_b0);
  auVar14 = _vaddbc(auVar14,auVar16);
  auVar13 = _vmul(auVar13,auVar12);
  auVar12 = _qmfc2(auVar14._0_4_);
  auVar14 = _vaddbc(auVar13,auVar13);
  fVar2 = auVar12._0_4_;
  auVar12 = _vaddbc(auVar14,auVar13);
  auVar12 = _qmfc2(auVar12._0_4_);
  fVar9 = auVar12._0_4_;
  fStack_150 = fVar2;
  fStack_14c = fVar9;
  if (fVar9 <= fVar2) {
    fStack_150 = fVar9;
    fStack_14c = fVar2;
  }
  fVar11 = fStack_160;
  if (fStack_160 <= fStack_150) {
    fVar11 = fStack_150;
  }
  if (fStack_14c <= fStack_15c) {
    fStack_15c = fStack_14c;
  }
  if (fVar11 < fStack_15c) {
    auVar12 = _lqc2(auStack_b0);
    auVar13 = _qmtc2(fVar11);
    auVar16 = _lqc2(*(undefined1 (*) [16])param_6);
    auVar18 = _vmulbc(auVar12,auVar13);
    auVar12 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
    _vopmula(auVar16,auVar12);
    auVar14 = _vopmsub(auVar12,auVar16);
    _vopmula(auVar16,auVar13);
    auVar16 = _vopmsub(auVar13,auVar16);
    _vopmula(auVar14,auVar12);
    auVar12 = _vopmsub(auVar12,auVar14);
    _vopmula(auVar16,auVar13);
    auVar13 = _vopmsub(auVar13,auVar16);
    auVar17 = _vmul(auVar12,auVar12);
    auVar15 = _vmul(auVar13,auVar13);
    _sqc2(auVar14);
    _sqc2(auVar16);
    auVar14 = _vaddbc(auVar17,auVar17);
    auVar16 = _vaddbc(auVar15,auVar15);
    auVar14 = _vaddbc(auVar14,auVar17);
    auVar16 = _vaddbc(auVar16,auVar15);
    _sqc2(auVar12);
    _sqc2(auVar13);
    _vrsqrt(in_vf0,auVar14);
    uVar19 = _vwaitq();
    auVar12 = _vmulq(auVar12,uVar19);
    _vrsqrt(in_vf0,auVar16);
    uVar19 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar19);
    auStack_120 = _sqc2(auVar12);
    auStack_110 = _sqc2(auVar13);
    auStack_100 = _sqc2(auVar18);
    iStack_c0 = param_1;
    uVar3 = FUN_003367b0(auStack_100,param_6,param_4 + 4,auStack_120);
    auVar13 = _lqc2(auStack_b0);
    auVar12 = _qmtc2(fStack_15c);
    *(int *)*param_2 = (int)uVar3;
    *(int *)(*param_2 + 4) = (int)((ulong)uVar3 >> 0x20);
    *(int *)(*param_2 + 8) = (int)extraout_v0_udw;
    *(int *)(*param_2 + 0xc) = (int)((ulong)extraout_v0_udw >> 0x20);
    auVar12 = _vmulbc(auVar13,auVar12);
    auStack_f0 = _sqc2(auVar12);
    uVar3 = FUN_003367b0(auStack_f0,param_6,param_4 + 4,auStack_120);
    *(int *)param_2[1] = (int)uVar3;
    *(int *)(param_2[1] + 4) = (int)((ulong)uVar3 >> 0x20);
    *(int *)(param_2[1] + 8) = (int)extraout_v0_udw_00;
    *(int *)(param_2[1] + 0xc) = (int)((ulong)extraout_v0_udw_00 >> 0x20);
    auVar13 = _lqc2(auStack_b0);
    auVar12 = _qmtc2(fVar11);
    auVar12 = _vmulbc(auVar13,auVar12);
    auStack_e0 = _sqc2(auVar12);
    uVar3 = FUN_003367b0(auStack_e0,param_6,param_5 + 4,auStack_110);
    *(int *)*param_3 = (int)uVar3;
    *(int *)(*param_3 + 4) = (int)((ulong)uVar3 >> 0x20);
    *(int *)(*param_3 + 8) = (int)extraout_v0_udw_01;
    *(int *)(*param_3 + 0xc) = (int)((ulong)extraout_v0_udw_01 >> 0x20);
    auVar12 = _qmtc2(fStack_15c);
    auVar13 = _lqc2(auStack_b0);
    auVar12 = _vmulbc(auVar13,auVar12);
    auStack_d0 = _sqc2(auVar12);
    uVar3 = FUN_003367b0(auStack_d0,param_6,param_5 + 4,auStack_110);
    *(int *)param_3[1] = (int)uVar3;
    *(int *)(param_3[1] + 4) = (int)((ulong)uVar3 >> 0x20);
    *(int *)(param_3[1] + 8) = (int)extraout_v0_udw_02;
    *(int *)(param_3[1] + 0xc) = (int)((ulong)extraout_v0_udw_02 >> 0x20);
    auVar17 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
    auVar12 = _lqc2(*param_2);
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
    auVar12 = _vsub(auVar12,auVar17);
    auVar13 = _vmul(auVar12,auVar14);
    auVar16 = _lqc2(param_2[1]);
    auVar12 = _vaddbc(auVar13,auVar13);
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar12 = _qmfc2(auVar12._0_4_);
    auVar12 = _qmtc2(auVar12._0_4_);
    auVar12 = _vmulbc(auVar14,auVar12);
    auVar12 = _vadd(auVar17,auVar12);
    auVar12 = _sqc2(auVar12);
    *param_2 = auVar12;
    auVar17 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
    auVar12 = _vsub(auVar16,auVar17);
    auVar14 = _vmul(auVar12,auVar13);
    auVar12 = _vaddbc(auVar14,auVar14);
    auVar12 = _vaddbc(auVar12,auVar14);
    auVar12 = _qmfc2(auVar12._0_4_);
    auVar12 = _qmtc2(auVar12._0_4_);
    auVar12 = _vmulbc(auVar13,auVar12);
    auVar12 = _vadd(auVar17,auVar12);
    auVar12 = _sqc2(auVar12);
    param_2[1] = auVar12;
    auVar17 = _lqc2(*(undefined1 (*) [16])(param_5 + 4));
    auVar12 = _lqc2(*param_3);
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
    auVar12 = _vsub(auVar12,auVar17);
    auVar13 = _vmul(auVar12,auVar14);
    auVar16 = _lqc2(param_3[1]);
    auVar12 = _vaddbc(auVar13,auVar13);
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar12 = _qmfc2(auVar12._0_4_);
    auVar12 = _qmtc2(auVar12._0_4_);
    auVar12 = _vmulbc(auVar14,auVar12);
    auVar12 = _vadd(auVar17,auVar12);
    auVar12 = _sqc2(auVar12);
    *param_3 = auVar12;
    auVar17 = _lqc2(*(undefined1 (*) [16])(param_5 + 4));
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
    auVar12 = _vsub(auVar16,auVar17);
    auVar14 = _vmul(auVar12,auVar13);
    auVar12 = _vaddbc(auVar14,auVar14);
    auVar12 = _vaddbc(auVar12,auVar14);
    auVar12 = _qmfc2(auVar12._0_4_);
    auVar12 = _qmtc2(auVar12._0_4_);
    auVar12 = _vmulbc(auVar13,auVar12);
    auVar12 = _vadd(auVar17,auVar12);
    auVar12 = _sqc2(auVar12);
    param_3[1] = auVar12;
    *(undefined4 *)(iStack_c0 + 0x130) = 2;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x130) = 1;
  if (fStack_160 < fStack_150) {
    if (fVar8 < fVar10) {
      auVar1 = *(undefined1 (*) [12])(param_4 + 4);
      iVar6 = param_4[7];
      *(int *)*param_2 = auVar1._0_4_;
      *(int *)(*param_2 + 4) = auVar1._4_4_;
      *(int *)(*param_2 + 8) = auVar1._8_4_;
      *(int *)(*param_2 + 0xc) = iVar6;
      *param_4 = *param_4 + -1;
    }
    else {
      auVar13 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
      auVar14 = _qmtc2(param_4[0x10]);
      auVar12 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
      auVar13 = _vmulbc(auVar13,auVar14);
      auVar12 = _vadd(auVar12,auVar13);
      auVar12 = _sqc2(auVar12);
      *param_2 = auVar12;
      *param_4 = *param_4 + 1;
    }
    if (fVar2 < fVar9) {
      iVar6 = param_5[4];
      iVar4 = param_5[5];
      iVar5 = param_5[6];
      iVar7 = param_5[7];
      goto LAB_00336f24;
    }
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
    auVar14 = _qmtc2(param_5[0x10]);
    auVar12 = _lqc2(*(undefined1 (*) [16])(param_5 + 4));
  }
  else {
    if (fVar10 < fVar8) {
      iVar6 = param_4[5];
      iVar4 = param_4[6];
      iVar5 = param_4[7];
      *(int *)*param_2 = param_4[4];
      *(int *)(*param_2 + 4) = iVar6;
      *(int *)(*param_2 + 8) = iVar4;
      *(int *)(*param_2 + 0xc) = iVar5;
      *param_4 = *param_4 + -1;
    }
    else {
      auVar13 = _lqc2(*(undefined1 (*) [16])(param_4 + 8));
      auVar14 = _qmtc2(param_4[0x10]);
      auVar12 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
      auVar13 = _vmulbc(auVar13,auVar14);
      auVar12 = _vadd(auVar12,auVar13);
      auVar12 = _sqc2(auVar12);
      *param_2 = auVar12;
      *param_4 = *param_4 + 1;
    }
    if (fVar9 < fVar2) {
      iVar6 = param_5[4];
      iVar4 = param_5[5];
      iVar5 = param_5[6];
      iVar7 = param_5[7];
LAB_00336f24:
      *(int *)*param_3 = iVar6;
      *(int *)(*param_3 + 4) = iVar4;
      *(int *)(*param_3 + 8) = iVar5;
      *(int *)(*param_3 + 0xc) = iVar7;
      *param_5 = *param_5 + -1;
      return 1;
    }
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_5 + 8));
    auVar14 = _qmtc2(param_5[0x10]);
    auVar12 = _lqc2(*(undefined1 (*) [16])(param_5 + 4));
  }
  auVar13 = _vmulbc(auVar13,auVar14);
  auVar12 = _vadd(auVar12,auVar13);
  auVar12 = _sqc2(auVar12);
  *param_3 = auVar12;
  *param_5 = *param_5 + 1;
  return 1;
}


// ==== FUN_00336f98 @ 00336f98 ====

undefined8
FUN_00336f98(int param_1,undefined1 (*param_2) [16],undefined4 *param_3,int *param_4,int param_5,
            undefined1 (*param_6) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_4 + 4));
  *(undefined4 *)(param_1 + 0x130) = 1;
  iVar6 = -1;
  fVar7 = 0.0;
  iVar5 = 0;
  auVar12 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x120));
  auVar8 = _lqc2(*param_6);
  auVar9 = _vsub(auVar9,auVar12);
  auVar10 = _vmul(auVar8,auVar9);
  auVar9 = _vaddbc(auVar10,auVar10);
  auVar9 = _vaddbc(auVar9,auVar10);
  auVar9 = _vmulbc(auVar8,auVar9);
  auVar8 = _vadd(auVar12,auVar9);
  auVar9 = _vmove(auVar8);
  if (0 < param_4[0x4c]) {
    auVar10 = _vmove(auVar9);
    piVar4 = param_4;
    do {
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar4 + 4));
      auVar11 = _vsub(auVar10,auVar12);
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar4 + 0xc));
      auVar11 = _vmul(auVar12,auVar11);
      auVar12 = _vaddbc(auVar11,auVar11);
      auVar12 = _vaddbc(auVar12,auVar11);
      auVar12 = _qmfc2(auVar12._0_4_);
      if ((iVar6 < 0) || (fVar7 < auVar12._0_4_)) {
        fVar7 = auVar12._0_4_;
        iVar6 = iVar5;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 0x10;
    } while (iVar5 < param_4[0x4c]);
  }
  if (0.0 < fVar7) {
    auVar10 = _qmtc2(fVar7);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_4 + iVar6 * 0x10 + 0xc));
    auVar9 = _vmulbc(auVar9,auVar10);
    auVar9 = _vsub(auVar8,auVar9);
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_4 + iVar6 * 0x10 + 4));
    auVar12 = _lqc2(*(undefined1 (*) [16])(param_4 + iVar6 * 0x10 + 8));
    auVar9 = _vsub(auVar9,auVar10);
    auVar8 = _vmul(auVar9,auVar12);
    auVar9 = _vaddbc(auVar8,auVar8);
    auVar9 = _vaddbc(auVar9,auVar8);
    auVar9 = _qmfc2(auVar9._0_4_);
    fVar7 = auVar9._0_4_;
    iVar5 = 1;
    if (fVar7 < 0.0) {
      auVar9 = _vmove(auVar10);
    }
    else {
      iVar5 = 3;
      if ((float)param_4[iVar6 * 0x10 + 0x10] < fVar7) {
        auVar9 = _qmtc2(param_4[iVar6 * 0x10 + 0x10]);
      }
      else {
        iVar5 = 2;
        auVar9 = _qmtc2(fVar7);
      }
      auVar9 = _vmulbc(auVar12,auVar9);
      auVar9 = _vadd(auVar10,auVar9);
    }
    *param_4 = *param_4 + iVar6 * 2 + iVar5;
  }
  auVar9 = _sqc2(auVar9);
  *param_2 = auVar9;
  uVar1 = *(undefined4 *)(param_5 + 0x124);
  uVar2 = *(undefined4 *)(param_5 + 0x128);
  uVar3 = *(undefined4 *)(param_5 + 300);
  *param_3 = *(undefined4 *)(param_5 + 0x120);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  return 1;
}


// ==== FUN_00337110 @ 00337110 ====

int FUN_00337110(int param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_vf5 [16];
  undefined4 uVar11;
  
  iVar4 = -1;
  fVar6 = 0.0;
  iVar3 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    auVar10 = _lqc2(*param_2);
    iVar2 = param_1;
    do {
      auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x20));
      _vopmula(auVar10,auVar7);
      auVar9 = _vopmsub(auVar7,auVar10);
      auVar8 = _vmul(auVar9,auVar9);
      auVar7 = _vaddbc(auVar8,auVar8);
      auVar7 = _vaddbc(auVar7,auVar8);
      auVar7 = _qmfc2(auVar7._0_4_);
      if (1.1920929e-07 < auVar7._0_4_) {
        auVar8 = _vmul(auVar9,auVar9);
        auVar7 = _vaddbc(auVar8,auVar8);
        auVar7 = _vaddbc(auVar7,auVar8);
        _vrsqrt(in_vf0,auVar7);
        uVar11 = _vwaitq();
        auVar9 = _vmulq(auVar9,uVar11);
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
      }
      else {
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
      }
      auVar8 = _lqc2(*param_3);
      auVar7 = _vsub(auVar8,auVar7);
      auVar8 = _vmul(auVar9,auVar7);
      auVar7 = _vaddbc(auVar8,auVar8);
      auVar7 = _vaddbc(auVar7,auVar8);
      auVar7 = _qmfc2(auVar7._0_4_);
      fVar1 = auVar7._0_4_;
      if (iVar4 < 0) {
        in_vf5 = _vmove(auVar9);
        fVar6 = fVar1;
        iVar4 = iVar3;
      }
      else if (fVar1 < fVar6) {
        in_vf5 = _vmove(auVar9);
        fVar6 = fVar1;
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0x130));
  }
  if (fVar6 < 0.0) {
    auVar10 = _qmtc2(fVar6);
    auVar7 = _lqc2(*param_3);
    auVar10 = _vmulbc(in_vf5,auVar10);
    param_1 = iVar4 * 0x40 + param_1;
    auVar7 = _vsub(auVar7,auVar10);
    auVar10 = _sqc2(auVar7);
    *param_3 = auVar10;
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
    auVar10 = _vsub(auVar7,auVar8);
    auVar7 = _vmul(auVar10,auVar9);
    auVar10 = _vaddbc(auVar7,auVar7);
    auVar10 = _vaddbc(auVar10,auVar7);
    auVar10 = _qmfc2(auVar10._0_4_);
    fVar6 = auVar10._0_4_;
    iVar5 = 1;
    if (fVar6 < 0.0) {
      auVar10 = _sqc2(auVar8);
      *param_3 = auVar10;
    }
    else {
      iVar5 = 3;
      if (*(float *)(param_1 + 0x40) < fVar6) {
        auVar10 = _qmtc2(*(float *)(param_1 + 0x40));
        auVar10 = _vmulbc(auVar9,auVar10);
      }
      else {
        auVar10 = _qmtc2(fVar6);
        auVar10 = _vmulbc(auVar9,auVar10);
        iVar5 = 2;
      }
      auVar10 = _vadd(auVar8,auVar10);
      auVar10 = _sqc2(auVar10);
      *param_3 = auVar10;
    }
    iVar5 = iVar4 * 2 + iVar5;
  }
  return iVar5;
}


// ==== FUN_003372a8 @ 003372a8 ====

ulong FUN_003372a8(int param_1,int param_2,undefined1 (*param_3) [16],float *param_4,float *param_5,
                  undefined4 *param_6,undefined1 (*param_7) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  
  *param_4 = 0.0;
  iVar4 = *(int *)(param_1 + 0x130);
  iVar7 = 0;
  uVar6 = 0;
  *param_5 = *(float *)(param_2 + 0x40);
  iVar5 = param_1;
  if (0 < iVar4) {
    do {
      auVar9 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x20));
      auVar10 = _lqc2(*param_3);
      _vopmula(auVar10,auVar9);
      auVar13 = _vopmsub(auVar9,auVar10);
      auVar10 = _vmul(auVar13,auVar13);
      auVar9 = _vaddbc(auVar10,auVar10);
      auVar9 = _vaddbc(auVar9,auVar10);
      _vsqrt(auVar9);
      auVar9 = _vaddbc(in_vf0,in_vf0);
      uVar15 = _vwaitq();
      auVar9 = _vmulq(auVar9,uVar15);
      auVar9 = _qmfc2(auVar9._0_4_);
      if (0.001 <= auVar9._0_4_) {
        auVar10 = _vmul(auVar13,auVar13);
        auVar11 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
        auVar9 = _vaddbc(auVar10,auVar10);
        auVar12 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
        auVar9 = _vaddbc(auVar9,auVar10);
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x10));
        _vrsqrt(in_vf0,auVar9);
        uVar15 = _vwaitq();
        auVar14 = _vmulq(auVar13,uVar15);
        auVar9 = _vsub(auVar10,auVar12);
        auVar11 = _vmul(auVar11,auVar14);
        auVar13 = _vmul(auVar9,auVar14);
        auVar9 = _vaddbc(auVar11,auVar11);
        auVar10 = _vaddbc(auVar13,auVar13);
        auVar9 = _vaddbc(auVar9,auVar11);
        auVar10 = _vaddbc(auVar10,auVar13);
        auVar9 = _qmfc2(auVar9._0_4_);
        fVar3 = auVar9._0_4_;
        auVar9 = _qmfc2(auVar10._0_4_);
        if (ABS(fVar3) < 0.05) {
          if (0.0 < auVar9._0_4_) {
            auVar9 = _sqc2(auVar14);
            *param_7 = auVar9;
            uVar6 = 1;
            uVar15 = *(undefined4 *)(iVar5 + 0x14);
            uVar1 = *(undefined4 *)(iVar5 + 0x18);
            uVar2 = *(undefined4 *)(iVar5 + 0x1c);
            *param_6 = *(undefined4 *)(iVar5 + 0x10);
            param_6[1] = uVar15;
            param_6[2] = uVar1;
            param_6[3] = uVar2;
            iVar4 = *(int *)(param_1 + 0x130);
          }
          else {
            iVar4 = *(int *)(param_1 + 0x130);
          }
        }
        else {
          fVar8 = auVar9._0_4_ / fVar3;
          if (0.0 < fVar3) {
            if (*param_4 < fVar8) {
              *param_4 = fVar8;
            }
            if (*param_5 < *param_4) {
              *param_4 = *param_5;
              uVar6 = 1;
              break;
            }
            iVar4 = *(int *)(param_1 + 0x130);
          }
          else {
            if (fVar8 < *param_5) {
              *param_5 = fVar8;
            }
            if (*param_5 < *param_4) {
              *param_5 = *param_4;
              uVar6 = 1;
              break;
            }
            iVar4 = *(int *)(param_1 + 0x130);
          }
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x130);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x40;
    } while (iVar7 < iVar4);
  }
  return uVar6 ^ 1;
}


// ==== FUN_00337478 @ 00337478 ====
// GLOBAL DAT_0040e370 float

undefined8
FUN_00337478(int param_1,undefined8 param_2,undefined1 (*param_3) [16],undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  float fStack_c0;
  float afStack_bc [3];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  lVar5 = FUN_003372a8(param_4,param_5,param_6,&fStack_c0,afStack_bc,auStack_b0,auStack_a0);
  piVar8 = (int *)param_5;
  piVar9 = (int *)param_4;
  pauVar10 = (undefined1 (*) [16])param_6;
  pauVar11 = (undefined1 (*) [16])param_2;
  if (lVar5 == 0) {
    if (0.001 < afStack_bc[0] - fStack_c0) {
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar9 + 4));
      *(undefined4 *)(param_1 + 0x130) = 2;
      auVar14 = _lqc2(*(undefined1 (*) [16])(piVar8 + 4));
      auVar19 = _qmtc2(fStack_c0);
      auVar15 = _lqc2(*pauVar10);
      auVar12 = _vsub(auVar12,auVar14);
      auVar13 = _vmul(auVar15,auVar12);
      auVar16 = _lqc2(auStack_b0);
      auVar12 = _vaddbc(auVar13,auVar13);
      auVar17 = _lqc2(auStack_a0);
      auVar12 = _vaddbc(auVar12,auVar13);
      auVar13 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
      auVar12 = _vmulbc(auVar15,auVar12);
      auVar14 = _vadd(auVar14,auVar12);
      auVar18 = _qmtc2(afStack_bc[0] - fStack_c0);
      auVar12 = _vsub(auVar16,auVar14);
      auVar19 = _vmulbc(auVar13,auVar19);
      auVar15 = _vmul(auVar17,auVar12);
      auVar16 = _vmulbc(auVar13,auVar18);
      auVar12 = _vaddbc(auVar15,auVar15);
      _sqc2(auVar13);
      auVar12 = _vaddbc(auVar12,auVar15);
      auVar12 = _vmulbc(auVar17,auVar12);
      auVar12 = _vadd(auVar14,auVar12);
      auVar12 = _vadd(auVar12,auVar19);
      _sqc2(auVar12);
      auVar13 = _vadd(auVar12,auVar16);
      auVar12 = _sqc2(auVar12);
      *pauVar11 = auVar12;
      auVar12 = _sqc2(auVar13);
      pauVar11[1] = auVar12;
      uVar6 = FUN_00337110(param_4,param_6,param_2);
      uVar7 = FUN_00337110(param_4,param_6,pauVar11 + 1);
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      *piVar9 = *piVar9 + ((uint)uVar6 & 0xfffffffe);
      auVar13 = _lqc2(*pauVar11);
      auVar12 = _sqc2(auVar13);
      *param_3 = auVar12;
      uVar20 = *(undefined4 *)(pauVar11[1] + 4);
      uVar1 = *(undefined4 *)(pauVar11[1] + 8);
      uVar2 = *(undefined4 *)(pauVar11[1] + 0xc);
      *(undefined4 *)param_3[1] = *(undefined4 *)pauVar11[1];
      *(undefined4 *)(param_3[1] + 4) = uVar20;
      *(undefined4 *)(param_3[1] + 8) = uVar1;
      *(undefined4 *)(param_3[1] + 0xc) = uVar2;
      auVar14 = _lqc2(*(undefined1 (*) [16])(piVar8 + 4));
      auVar12 = _vsub(auVar13,auVar14);
      auVar13 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
      auVar13 = _vmul(auVar12,auVar13);
      auVar12 = _vaddbc(auVar13,auVar13);
      auVar12 = _vaddbc(auVar12,auVar13);
      auVar12 = _qmfc2(auVar12._0_4_);
      fVar4 = auVar12._0_4_;
      if (fVar4 < 0.0) {
        auVar12 = _sqc2(auVar14);
        *param_3 = auVar12;
      }
      else {
        auVar12 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
        if ((float)piVar8[0x10] < fVar4) {
          auVar13 = _qmtc2(piVar8[0x10]);
        }
        else {
          auVar13 = _qmtc2(fVar4);
        }
        auVar12 = _vmulbc(auVar12,auVar13);
        auVar12 = _vadd(auVar14,auVar12);
        auVar12 = _sqc2(auVar12);
        *param_3 = auVar12;
      }
      auVar14 = _lqc2(*(undefined1 (*) [16])(piVar8 + 4));
      auVar13 = _lqc2(param_3[1]);
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
      auVar13 = _vsub(auVar13,auVar14);
      auVar13 = _vmul(auVar13,auVar12);
      auVar12 = _vaddbc(auVar13,auVar13);
      auVar12 = _vaddbc(auVar12,auVar13);
      auVar12 = _qmfc2(auVar12._0_4_);
      fVar4 = auVar12._0_4_;
      if (fVar4 < 0.0) {
        auVar12 = _sqc2(auVar14);
        param_3[1] = auVar12;
      }
      else {
        auVar12 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
        if ((float)piVar8[0x10] < fVar4) {
          auVar13 = _qmtc2(piVar8[0x10]);
        }
        else {
          auVar13 = _qmtc2(fVar4);
        }
        auVar12 = _vmulbc(auVar12,auVar13);
        auVar12 = _vadd(auVar14,auVar12);
        auVar12 = _sqc2(auVar12);
        param_3[1] = auVar12;
      }
      auVar13 = _lqc2(*param_3);
      auVar12 = _lqc2(*pauVar11);
      auVar14 = _vsub(auVar12,auVar13);
      auVar13 = _vmul(auVar14,auVar14);
      auVar12 = _vaddbc(auVar13,auVar13);
      auVar12 = _vaddbc(auVar12,auVar13);
      _vsqrt(auVar12);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      uVar20 = _vwaitq();
      auVar12 = _vmulq(auVar12,uVar20);
      auVar12 = _qmfc2(auVar12._0_4_);
      if (DAT_0040e370 < auVar12._0_4_) {
        *(undefined4 *)(param_1 + 0x134) = 1;
        auVar13 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
        _vopmula(auVar14,auVar13);
        auVar12 = _vopmsub(auVar13,auVar14);
        _vopmula(auVar13,auVar12);
        auVar13 = _vopmsub(auVar12,auVar13);
        auVar14 = _vmul(auVar13,auVar13);
        auVar12 = _sqc2(auVar13);
        *(undefined1 (*) [16])(param_1 + 0x100) = auVar12;
        auVar12 = _vaddbc(auVar14,auVar14);
        auVar12 = _vaddbc(auVar12,auVar14);
        _vrsqrt(in_vf0,auVar12);
        uVar20 = _vwaitq();
        auVar12 = _vmulq(auVar13,uVar20);
        auVar12 = _sqc2(auVar12);
        *(undefined1 (*) [16])(param_1 + 0x100) = auVar12;
      }
    }
    else {
      auVar13 = _qmtc2(fStack_c0);
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
      auVar12 = _vmulbc(auVar12,auVar13);
      auVar13 = _lqc2(*(undefined1 (*) [16])(piVar8 + 4));
      auVar15 = _vadd(auVar13,auVar12);
      *(undefined4 *)(param_1 + 0x130) = 1;
      auVar12 = _sqc2(auVar15);
      *param_3 = auVar12;
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar9 + 4));
      auVar14 = _lqc2(*pauVar10);
      auVar12 = _vsub(auVar12,auVar15);
      auVar13 = _vmul(auVar14,auVar12);
      auVar12 = _vaddbc(auVar13,auVar13);
      auVar12 = _vaddbc(auVar12,auVar13);
      auVar12 = _vmulbc(auVar14,auVar12);
      auVar12 = _vadd(auVar15,auVar12);
      auVar12 = _sqc2(auVar12);
      *pauVar11 = auVar12;
      iVar3 = FUN_00337110(param_4,param_6,param_2);
      *piVar9 = *piVar9 + iVar3;
      auVar13 = _lqc2(*pauVar11);
      auVar12 = _sqc2(auVar13);
      *param_3 = auVar12;
      auVar14 = _lqc2(*(undefined1 (*) [16])(piVar8 + 4));
      auVar12 = _vsub(auVar13,auVar14);
      auVar13 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
      auVar13 = _vmul(auVar12,auVar13);
      auVar12 = _vaddbc(auVar13,auVar13);
      auVar12 = _vaddbc(auVar12,auVar13);
      auVar12 = _qmfc2(auVar12._0_4_);
      fVar4 = auVar12._0_4_;
      iVar3 = 1;
      if (fVar4 < 0.0) {
        auVar12 = _sqc2(auVar14);
        *param_3 = auVar12;
      }
      else {
        iVar3 = 3;
        if ((float)piVar8[0x10] < fVar4) {
          auVar12 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
          auVar13 = _qmtc2(piVar8[0x10]);
        }
        else {
          iVar3 = 2;
          auVar12 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
          auVar13 = _qmtc2(fVar4);
        }
        auVar12 = _vmulbc(auVar12,auVar13);
        auVar12 = _vadd(auVar14,auVar12);
        auVar12 = _sqc2(auVar12);
        *param_3 = auVar12;
      }
      *piVar8 = (*piVar8 + 2) - iVar3;
    }
  }
  else {
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
    auVar13 = _qmtc2(fStack_c0);
    auVar14 = _lqc2(*(undefined1 (*) [16])(piVar8 + 4));
    auVar12 = _vmulbc(auVar12,auVar13);
    *(undefined4 *)(param_1 + 0x130) = 2;
    auVar15 = _vadd(auVar14,auVar12);
    auVar12 = _sqc2(auVar15);
    *param_3 = auVar12;
    auVar13 = _lqc2(*(undefined1 (*) [16])(piVar8 + 8));
    auVar14 = _qmtc2(afStack_bc[0]);
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar8 + 4));
    auVar13 = _vmulbc(auVar13,auVar14);
    auVar12 = _vadd(auVar12,auVar13);
    auVar12 = _sqc2(auVar12);
    param_3[1] = auVar12;
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar9 + 4));
    auVar14 = _lqc2(*(undefined1 (*) [16])(piVar9 + 0x44));
    auVar12 = _vsub(auVar12,auVar15);
    auVar13 = _vmul(auVar12,auVar14);
    auVar16 = _lqc2(*pauVar10);
    auVar12 = _vaddbc(auVar13,auVar13);
    auVar14 = _vmul(auVar16,auVar14);
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar13 = _vaddbc(auVar14,auVar14);
    auVar12 = _qmfc2(auVar12._0_4_);
    auVar13 = _vaddbc(auVar13,auVar14);
    auVar13 = _qmfc2(auVar13._0_4_);
    auVar12 = _qmtc2(auVar12._0_4_ / auVar13._0_4_);
    auVar12 = _vmulbc(auVar16,auVar12);
    auVar12 = _vadd(auVar15,auVar12);
    auVar12 = _sqc2(auVar12);
    *pauVar11 = auVar12;
    auVar16 = _lqc2(param_3[1]);
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar9 + 4));
    auVar14 = _lqc2(*(undefined1 (*) [16])(piVar9 + 0x44));
    auVar12 = _vsub(auVar12,auVar16);
    auVar13 = _vmul(auVar12,auVar14);
    auVar15 = _lqc2(*pauVar10);
    auVar12 = _vaddbc(auVar13,auVar13);
    auVar14 = _vmul(auVar15,auVar14);
    auVar12 = _vaddbc(auVar12,auVar13);
    auVar13 = _vaddbc(auVar14,auVar14);
    auVar12 = _qmfc2(auVar12._0_4_);
    auVar13 = _vaddbc(auVar13,auVar14);
    auVar13 = _qmfc2(auVar13._0_4_);
    auVar12 = _qmtc2(auVar12._0_4_ / auVar13._0_4_);
    auVar12 = _vmulbc(auVar15,auVar12);
    auVar12 = _vadd(auVar16,auVar12);
    auVar12 = _sqc2(auVar12);
    pauVar11[1] = auVar12;
  }
  return 1;
}


// ==== FUN_00337988 @ 00337988 ====

undefined8
FUN_00337988(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar7 = _lqc2(param_3[1]);
  auVar4 = _lqc2(param_2[2]);
  auVar8 = _lqc2(*param_2);
  auVar6 = _vmul(auVar7,auVar4);
  auVar9 = _lqc2(*param_3);
  auVar3 = _vaddbc(auVar6,auVar6);
  auVar5 = _vsub(auVar8,auVar9);
  auVar3 = _vaddbc(auVar3,auVar6);
  auVar5 = _vmul(auVar5,auVar4);
  auVar4 = _qmfc2(auVar3._0_4_);
  auVar3 = _vaddbc(auVar5,auVar5);
  auVar3 = _vaddbc(auVar3,auVar5);
  auVar3 = _qmfc2(auVar3._0_4_);
  uVar1 = 0;
  if (((1.1920929e-07 <= ABS(auVar4._0_4_)) && (fVar2 = auVar3._0_4_ / auVar4._0_4_, 0.0 <= fVar2))
     && (fVar2 <= *(float *)param_3[3])) {
    auVar3 = _qmtc2(fVar2);
    auVar4 = _lqc2(param_2[1]);
    auVar3 = _vmulbc(auVar7,auVar3);
    auVar5 = _vadd(auVar9,auVar3);
    auVar3 = _vsub(auVar5,auVar8);
    auVar4 = _vmul(auVar3,auVar4);
    auVar3 = _vaddbc(auVar4,auVar4);
    auVar3 = _vaddbc(auVar3,auVar4);
    auVar3 = _qmfc2(auVar3._0_4_);
    uVar1 = 0;
    if ((0.0 <= auVar3._0_4_) && (auVar3._0_4_ <= *(float *)param_2[3])) {
      auVar3 = _sqc2(auVar5);
      *param_1 = auVar3;
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_00337a98 @ 00337a98 ====

undefined8
FUN_00337a98(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],int param_4,
            int param_5,undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [8];
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  ulong in_t1_udw;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  int iVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [8];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_13c) [16];
  undefined4 uStack_138;
  undefined1 *puStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  pauVar15 = (undefined1 (*) [16])auStack_1d0;
  pauVar10 = (undefined1 (*) [16])auStack_1d0;
  puStack_134 = auStack_150;
  lVar17 = 0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = in_t1_udw;
  auVar21 = auVar18 << 0x40;
  lVar12 = 0;
  iVar6 = 6;
  do {
    bVar1 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar1);
  *(undefined4 *)((int)param_1 + 0x130) = 0;
  iVar16 = 0;
  iVar6 = 0;
  iVar11 = 0;
  lVar13 = 1;
  lVar14 = 2;
  pauStack_140 = param_2;
  pauStack_13c = param_3;
  uStack_138 = param_6;
  do {
    iVar7 = iVar11 * 0x40 + param_4;
    iVar9 = iVar6 * 0x40 + param_5;
    auVar19 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x20));
    auVar18 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x30));
    auVar19 = _vmul(auVar19,auVar18);
    auVar18 = _vaddbc(auVar19,auVar19);
    auVar18 = _vaddbc(auVar18,auVar19);
    auVar19 = _qmfc2(auVar18._0_4_);
    auVar23 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x10));
    auVar22 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x10));
    auVar20 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x30));
    auVar18 = _vsub(auVar23,auVar22);
    auVar20 = _vmul(auVar20,auVar18);
    auVar18 = _vaddbc(auVar20,auVar20);
    auVar18 = _vaddbc(auVar18,auVar20);
    auVar18 = _qmfc2(auVar18._0_4_);
    bVar1 = auVar18._0_4_ < 0.0;
    auVar20 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x30));
    auVar18 = _vsub(auVar22,auVar23);
    auVar20 = _vmul(auVar20,auVar18);
    auVar18 = _vaddbc(auVar20,auVar20);
    auVar18 = _vaddbc(auVar18,auVar20);
    auVar18 = _qmfc2(auVar18._0_4_);
    uStack_130 = (uint)(auVar19._0_4_ < 0.0);
    uStack_12c = 0;
    uStack_120 = auVar21._0_4_;
    uStack_11c = auVar21._4_4_;
    uStack_118 = auVar21._8_4_;
    uStack_114 = auVar21._12_4_;
    uStack_110 = (undefined4)lVar12;
    uStack_10c = (undefined4)((ulong)lVar12 >> 0x20);
    uStack_100 = (undefined4)lVar13;
    uStack_fc = (undefined4)((ulong)lVar13 >> 0x20);
    uStack_f0 = (undefined4)lVar14;
    uStack_ec = (undefined4)((ulong)lVar14 >> 0x20);
    iStack_e0 = (int)param_1;
    uStack_dc = (undefined4)((ulong)param_1 >> 0x20);
    auStack_d0 = _sqc2(auVar22);
    auStack_c0 = _sqc2(auVar23);
    lVar8 = FUN_00337988(puStack_134,param_4 + iVar11 * 0x40 + 0x10,param_5 + iVar6 * 0x40 + 0x10);
    uVar3 = uStack_144;
    uVar2 = uStack_148;
    auVar5 = auStack_150;
    auVar21._4_4_ = uStack_11c;
    auVar21._0_4_ = uStack_120;
    auVar21._8_4_ = uStack_118;
    auVar21._12_4_ = uStack_114;
    lVar12 = CONCAT44(uStack_10c,uStack_110);
    lVar13 = CONCAT44(uStack_fc,uStack_100);
    lVar14 = CONCAT44(uStack_ec,uStack_f0);
    param_1 = CONCAT44(uStack_dc,iStack_e0);
    auVar19 = _lqc2(auStack_d0);
    auVar20 = _lqc2(auStack_c0);
    if (lVar8 != 0) {
      if (lVar17 == 0) {
        lVar12 = 0;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = auVar21._8_8_;
        auVar21 = auVar22 << 0x40;
      }
      if (iVar16 < 8) {
        iVar16 = iVar16 + 1;
        *(int *)*pauVar15 = auStack_150._0_4_;
        *(int *)(*pauVar15 + 4) = auVar5._4_4_;
        *(undefined4 *)(*pauVar15 + 8) = uVar2;
        *(undefined4 *)(*pauVar15 + 0xc) = uVar3;
        pauVar15 = pauVar15 + 1;
      }
      lVar17 = 2;
      if (bVar1) {
        lVar17 = lVar13;
      }
    }
    if (CONCAT44(uStack_12c,uStack_130) == 0) {
      if (!bVar1) {
        iVar7 = *(int *)(param_4 + 0x130);
        goto LAB_00337d10;
      }
      iVar7 = *(int *)(param_5 + 0x130);
      lVar12 = (long)((int)lVar12 + 1);
      if (iVar7 == 0) {
        trap(7);
      }
      iVar6 = (iVar6 + iVar7 + -1) % iVar7;
      if (lVar17 != lVar14) goto LAB_00337d4c;
      if (iVar16 < 8) {
        auVar18 = _sqc2(auVar19);
        *pauVar15 = auVar18;
        goto LAB_00337d44;
      }
      iVar7 = *(int *)(param_4 + 0x130);
    }
    else {
      if (0.0 <= auVar18._0_4_) {
        iVar7 = *(int *)(param_5 + 0x130);
        lVar12 = (long)((int)lVar12 + 1);
        if (iVar7 == 0) {
          trap(7);
        }
        iVar6 = (iVar6 + iVar7 + -1) % iVar7;
        if (lVar17 == lVar14) {
          if (7 < iVar16) {
            iVar7 = *(int *)(param_4 + 0x130);
            goto LAB_00337d50;
          }
          auVar18 = _sqc2(auVar19);
          *pauVar15 = auVar18;
LAB_00337d44:
          iVar16 = iVar16 + 1;
          pauVar15 = pauVar15 + 1;
        }
      }
      else {
        iVar7 = *(int *)(param_4 + 0x130);
LAB_00337d10:
        auVar21._0_8_ = (long)(auVar21._0_4_ + 1);
        if (iVar7 == 0) {
          trap(7);
        }
        iVar11 = (iVar11 + iVar7 + -1) % iVar7;
        if (lVar17 == lVar13) {
          if (iVar16 < 8) {
            auVar18 = _sqc2(auVar20);
            *pauVar15 = auVar18;
            goto LAB_00337d44;
          }
          iVar7 = *(int *)(param_4 + 0x130);
          goto LAB_00337d50;
        }
      }
LAB_00337d4c:
      iVar7 = *(int *)(param_4 + 0x130);
    }
LAB_00337d50:
    iVar9 = *(int *)(param_5 + 0x130);
  } while (auVar21._0_4_ + (int)lVar12 < iVar7 + iVar9);
  if (iVar16 == 0) {
    bVar1 = true;
    iVar6 = 0;
    if (iVar16 < iVar9) {
      auVar18 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x10));
      pauVar10 = (undefined1 (*) [16])(param_5 + 0x10);
      do {
        auVar21 = _lqc2(*pauVar10);
        auVar19 = _vsub(auVar18,auVar21);
        auVar21 = _lqc2(pauVar10[2]);
        auVar19 = _vmul(auVar21,auVar19);
        auVar21 = _vaddbc(auVar19,auVar19);
        auVar21 = _vaddbc(auVar21,auVar19);
        auVar21 = _qmfc2(auVar21._0_4_);
        iVar6 = iVar6 + 1;
        if (0.0 <= auVar21._0_4_) {
          bVar1 = false;
          break;
        }
        pauVar10 = pauVar10 + 4;
      } while (iVar6 < iVar9);
    }
    if (bVar1) {
      iVar11 = 0;
      iVar6 = param_4;
      if (0 < iVar7) {
        do {
          uVar2 = *(undefined4 *)(iVar6 + 0x14);
          uVar3 = *(undefined4 *)(iVar6 + 0x18);
          uVar4 = *(undefined4 *)(iVar6 + 0x1c);
          iVar11 = iVar11 + 1;
          *(undefined4 *)*pauStack_140 = *(undefined4 *)(iVar6 + 0x10);
          *(undefined4 *)(*pauStack_140 + 4) = uVar2;
          *(undefined4 *)(*pauStack_140 + 8) = uVar3;
          *(undefined4 *)(*pauStack_140 + 0xc) = uVar4;
          pauStack_140 = pauStack_140 + 1;
          auVar20 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x10));
          auVar18 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x10));
          auVar19 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x110));
          auVar18 = _vsub(auVar18,auVar20);
          auVar21 = _vmul(auVar19,auVar18);
          auVar18 = _vaddbc(auVar21,auVar21);
          auVar18 = _vaddbc(auVar18,auVar21);
          auVar18 = _vmulbc(auVar19,auVar18);
          auVar18 = _vadd(auVar20,auVar18);
          auVar18 = _sqc2(auVar18);
          *pauStack_13c = auVar18;
          pauStack_13c = pauStack_13c + 1;
          iVar6 = iVar6 + 0x40;
        } while (iVar11 < *(int *)(param_4 + 0x130));
      }
      *(undefined4 *)(iStack_e0 + 0x130) = *(undefined4 *)(param_4 + 0x130);
    }
    else {
      bVar1 = true;
      iVar6 = 0;
      if (0 < iVar7) {
        auVar18 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x10));
        pauVar10 = (undefined1 (*) [16])(param_4 + 0x10);
        do {
          auVar21 = _lqc2(*pauVar10);
          auVar19 = _vsub(auVar18,auVar21);
          auVar21 = _lqc2(pauVar10[2]);
          auVar19 = _vmul(auVar21,auVar19);
          auVar21 = _vaddbc(auVar19,auVar19);
          auVar21 = _vaddbc(auVar21,auVar19);
          auVar21 = _qmfc2(auVar21._0_4_);
          iVar6 = iVar6 + 1;
          if (0.0 <= auVar21._0_4_) {
            bVar1 = false;
            break;
          }
          pauVar10 = pauVar10 + 4;
        } while (iVar6 < iVar7);
      }
      if (!bVar1) {
        return 0;
      }
      iVar11 = 0;
      iVar6 = param_5;
      if (0 < iVar9) {
        do {
          auVar20 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x10));
          iVar11 = iVar11 + 1;
          auVar18 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x10));
          auVar19 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x110));
          auVar18 = _vsub(auVar18,auVar20);
          auVar21 = _vmul(auVar19,auVar18);
          auVar18 = _vaddbc(auVar21,auVar21);
          auVar18 = _vaddbc(auVar18,auVar21);
          auVar18 = _vmulbc(auVar19,auVar18);
          auVar18 = _vadd(auVar20,auVar18);
          auVar18 = _sqc2(auVar18);
          *pauStack_140 = auVar18;
          pauStack_140 = pauStack_140 + 1;
          uVar2 = *(undefined4 *)(iVar6 + 0x14);
          uVar3 = *(undefined4 *)(iVar6 + 0x18);
          uVar4 = *(undefined4 *)(iVar6 + 0x1c);
          *(undefined4 *)*pauStack_13c = *(undefined4 *)(iVar6 + 0x10);
          *(undefined4 *)(*pauStack_13c + 4) = uVar2;
          *(undefined4 *)(*pauStack_13c + 8) = uVar3;
          *(undefined4 *)(*pauStack_13c + 0xc) = uVar4;
          pauStack_13c = pauStack_13c + 1;
          iVar6 = iVar6 + 0x40;
        } while (iVar11 < *(int *)(param_5 + 0x130));
      }
      *(undefined4 *)(iStack_e0 + 0x130) = *(undefined4 *)(param_5 + 0x130);
    }
  }
  else {
    iVar6 = iVar16;
    if (0 < iVar16) {
      do {
        auVar20 = _lqc2(*pauVar10);
        iVar6 = iVar6 + -1;
        auVar18 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x10));
        pauVar10 = pauVar10 + 1;
        auVar19 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x110));
        auVar18 = _vsub(auVar18,auVar20);
        auVar21 = _vmul(auVar19,auVar18);
        auVar18 = _vaddbc(auVar21,auVar21);
        auVar18 = _vaddbc(auVar18,auVar21);
        auVar18 = _vmulbc(auVar19,auVar18);
        auVar18 = _vadd(auVar20,auVar18);
        auVar18 = _sqc2(auVar18);
        *pauStack_140 = auVar18;
        pauStack_140 = pauStack_140 + 1;
        auVar18 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x10));
        auVar19 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x110));
        auVar18 = _vsub(auVar18,auVar20);
        auVar21 = _vmul(auVar19,auVar18);
        auVar18 = _vaddbc(auVar21,auVar21);
        auVar18 = _vaddbc(auVar18,auVar21);
        auVar18 = _vmulbc(auVar19,auVar18);
        auVar18 = _vadd(auVar20,auVar18);
        auVar18 = _sqc2(auVar18);
        *pauStack_13c = auVar18;
        pauStack_13c = pauStack_13c + 1;
      } while (iVar6 != 0);
    }
    *(int *)(iStack_e0 + 0x130) = iVar16;
  }
  return 1;
}


// ==== FUN_00337ff0 @ 00337ff0 ====

undefined8
FUN_00337ff0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar7 = (int)param_2;
  iVar1 = *(int *)(iVar7 + 0x130);
  iVar9 = (int)param_3;
  iVar2 = *(int *)(iVar9 + 0x130);
  if (iVar1 + iVar2 == 0) {
    uVar4 = 1;
    param_1[0x4c] = 1;
    uVar3 = *(undefined8 *)(iVar7 + 0x120);
    uVar5 = *(undefined4 *)(iVar7 + 0x128);
    uVar6 = *(undefined4 *)(iVar7 + 300);
    *param_1 = (int)uVar3;
    param_1[1] = (int)((ulong)uVar3 >> 0x20);
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    uVar3 = *(undefined8 *)(iVar9 + 0x120);
    uVar5 = *(undefined4 *)(iVar9 + 0x128);
    uVar6 = *(undefined4 *)(iVar9 + 300);
    param_1[0x20] = (int)uVar3;
    param_1[0x21] = (int)((ulong)uVar3 >> 0x20);
    param_1[0x22] = uVar5;
    param_1[0x23] = uVar6;
  }
  else if (iVar1 * iVar2 == 0) {
    if (iVar1 == 0) {
      if (iVar2 == 1) {
        uVar4 = FUN_003366f8(param_1,param_1 + 0x20,param_1,param_3,param_2);
      }
      else {
        uVar4 = FUN_00336f98(param_1,param_1 + 0x20,param_1,param_3,param_2);
      }
    }
    else if (iVar1 == 1) {
      uVar4 = FUN_003366f8(param_1,param_1,param_1 + 0x20,param_2,param_3);
    }
    else {
      uVar4 = FUN_00336f98(param_1,param_1,param_1 + 0x20,param_2,param_3);
    }
  }
  else {
    if (iVar1 == 1) {
      if (iVar2 == 1) {
        uVar4 = FUN_00336810(param_1,param_1,param_1 + 0x20,param_2,param_3);
        return uVar4;
      }
      uVar4 = param_3;
      param_3 = param_2;
      puVar8 = param_1 + 0x20;
      puVar10 = param_1;
    }
    else {
      if (iVar2 != 1) {
        uVar4 = FUN_00337a98(param_1,param_1,param_1 + 0x20,param_2,param_3,param_4);
        return uVar4;
      }
      puVar10 = param_1 + 0x20;
      uVar4 = param_2;
      puVar8 = param_1;
    }
    uVar4 = FUN_00337478(param_1,puVar8,puVar10,uVar4,param_3);
  }
  return uVar4;
}


// ==== FUN_00338150 @ 00338150 ====

undefined4 FUN_00338150(int param_1,ulong param_2,ulong param_3,undefined1 (*param_4) [16])

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar9 = _lqc2(*param_4);
  auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2b0));
  auVar10 = _vmul(auVar10,auVar9);
  auVar9 = _vaddbc(auVar10,auVar10);
  auVar9 = _vaddbc(auVar9,auVar10);
  auVar9 = _qmfc2(auVar9._0_4_);
  fVar7 = auVar9._0_4_;
  if (((param_3 & 1) != 0) && (fVar7 < 0.1)) {
    return 0;
  }
  if ((param_2 & ~param_3) != 0) {
    if (fVar7 < 0.0) {
      auVar9 = _lqc2(*param_4);
      fVar7 = -fVar7;
      auVar9 = _vsub(in_vf0,auVar9);
      auVar9 = _sqc2(auVar9);
      *(undefined1 (*) [16])(param_1 + 0x2b0) = auVar9;
    }
    else {
      uVar1 = *(undefined8 *)*param_4;
      uVar2 = *(undefined4 *)(*param_4 + 8);
      uVar3 = *(undefined4 *)(*param_4 + 0xc);
      *(int *)(param_1 + 0x2b0) = (int)uVar1;
      *(int *)(param_1 + 0x2b4) = (int)((ulong)uVar1 >> 0x20);
      *(undefined4 *)(param_1 + 0x2b8) = uVar2;
      *(undefined4 *)(param_1 + 700) = uVar3;
    }
    fVar8 = *(float *)(param_1 + 0x2e0);
    uVar6 = 0;
    if (fVar8 < 0.0) {
      *(float *)(param_1 + 0x2e0) = fVar8 * fVar7;
      fVar8 = *(float *)(param_1 + 0x2e0);
    }
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2b0));
    auVar11 = _qmtc2(fVar8);
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2d0));
    auVar9 = _vmulbc(auVar9,auVar11);
    auVar9 = _vsub(auVar10,auVar9);
    auVar9 = _sqc2(auVar9);
    *(undefined1 (*) [16])(param_1 + 0x2c0) = auVar9;
    if (*(int *)(param_1 + 0x410) != 0) {
      pfVar4 = (float *)(param_1 + 0x3f0);
      iVar5 = param_1;
      do {
        fVar8 = *pfVar4;
        uVar6 = uVar6 + 1;
        if (fVar8 < 0.0) {
          *pfVar4 = fVar8 * fVar7;
          fVar8 = *pfVar4;
        }
        auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2b0));
        pfVar4 = pfVar4 + 1;
        auVar11 = _qmtc2(fVar8);
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x370));
        auVar9 = _vmulbc(auVar9,auVar11);
        auVar9 = _vsub(auVar10,auVar9);
        auVar9 = _sqc2(auVar9);
        *(undefined1 (*) [16])(iVar5 + 0x2f0) = auVar9;
        iVar5 = iVar5 + 0x10;
      } while (uVar6 < *(uint *)(param_1 + 0x410));
    }
  }
  return 1;
}


// ==== FUN_00338288 @ 00338288 ====
// GLOBAL PTR_LAB_003d1328 pointer
// GLOBAL DAT_0040a430 undefined
// GLOBAL DAT_0045cef0 undefined4
// GLOBAL DAT_0045cef4 undefined4

int FUN_00338288(float param_1,int param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  int iVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong in_a1_udw;
  undefined1 auVar13 [16];
  undefined8 *puVar14;
  undefined1 in_a2_qw [16];
  undefined8 uVar15;
  undefined1 in_t0_qw [16];
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 in_vf0 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [128];
  undefined1 auStack_160 [16];
  int iStack_130;
  int iStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e0 [16];
  int iStack_d0;
  int iStack_cc;
  undefined **ppuStack_c8;
  int iStack_c4;
  uint uStack_c0;
  int iStack_bc;
  
  lVar23 = (long)(int)auStack_260;
  iStack_d0 = (int)param_3;
  if (in_t0_qw._0_8_ <= param_3) {
    param_3 = in_t0_qw._0_8_;
  }
  iVar6 = 0;
  iStack_cc = (int)param_3;
  auVar28 = in_a2_qw;
  if (0 < param_3) {
    iVar18 = param_2 + 0x2a0;
    lVar21 = param_4;
    iVar16 = param_2;
    do {
      auVar28._0_8_ = lVar21;
      lVar21 = (long)((int)lVar21 + 0xa0);
      uVar25 = FUN_00336520(iVar18);
      iVar18 = iVar18 + 0x420;
      *(undefined4 *)(iVar16 + 0x2e0) = uVar25;
      param_3 = (long)((int)param_3 + -1);
      iVar16 = iVar16 + 0x420;
    } while (param_3 != 0);
  }
  iVar16 = 0;
  iVar18 = in_a2_qw._0_4_;
  if (0 < iStack_cc) {
    iVar22 = param_2 + 0x160;
    lVar21 = param_4;
    iVar17 = param_2;
    do {
      iVar19 = (int)lVar21;
      in_t0_qw._0_8_ = 3;
      if (*(float *)(iVar17 + 0x2e0) <=
          *(float *)(iVar18 + 0x7c) + *(float *)(iVar19 + 0x7c) + param_1) {
        iVar2 = *(int *)(iVar18 + 0x80);
        auVar28._0_8_ = (ulong)iVar2;
        if ((**(int **)(iVar2 + 0x58) == 3) && ((*(uint *)(iVar2 + 0x40) & 1) != 0)) {
          auVar29 = _lqc2(*(undefined1 (*) [16])(iVar17 + 0x2a0));
          auVar27 = _lqc2(*(undefined1 (*) [16])(iVar18 + 0x10));
          auVar29 = _vmul(auVar29,auVar27);
          auVar27 = _vaddbc(auVar29,auVar29);
          auVar27 = _vaddbc(auVar27,auVar29);
          auVar27 = _qmfc2(auVar27._0_4_);
          if (0.0 <= auVar27._0_4_) goto LAB_003383d0;
          *(undefined4 *)(iVar17 + 0x410) = 0;
          *(undefined4 *)(iVar17 + 0x10) = 0xffffffff;
        }
        else {
LAB_003383d0:
          if ((**(int **)(*(int *)(iVar19 + 0x80) + 0x58) == 3) &&
             ((*(uint *)(*(int *)(iVar19 + 0x80) + 0x40) & 1) != 0)) {
            auVar29 = _lqc2(*(undefined1 (*) [16])(iVar17 + 0x2a0));
            auVar27 = _lqc2(*(undefined1 (*) [16])(iVar19 + 0x10));
            auVar29 = _vmul(auVar29,auVar27);
            auVar27 = _vaddbc(auVar29,auVar29);
            auVar27 = _vaddbc(auVar27,auVar29);
            in_t0_qw = _qmfc2(auVar27._0_4_);
            if (0.0 < in_t0_qw._0_4_) goto LAB_00338464;
          }
          pcVar3 = *(code **)(iVar18 + 0x90);
          *(int *)(iVar17 + 0x10) = iVar16;
          (*pcVar3)();
          auVar28 = _lqc2(*(undefined1 (*) [16])(iVar17 + 0x2a0));
          auVar28 = _vsub(in_vf0,auVar28);
          auVar28 = _qmfc2(auVar28._0_4_);
          (**(code **)(iVar19 + 0x90))(lVar21,0,auVar28._0_8_,iVar22);
        }
      }
      else {
LAB_00338464:
        *(undefined4 *)(iVar17 + 0x410) = 0;
        *(undefined4 *)(iVar17 + 0x10) = 0xffffffff;
      }
      iVar16 = iVar16 + 1;
      iVar22 = iVar22 + 0x420;
      lVar21 = (long)(iVar19 + 0xa0);
      iVar17 = iVar17 + 0x420;
    } while (iVar16 < iStack_cc);
  }
  uVar7 = 0;
  puVar9 = &DAT_0045cef0;
  do {
    *puVar9 = 0;
    uVar7 = uVar7 + 1;
    puVar9[1] = 0;
    puVar9 = puVar9 + 2;
  } while (uVar7 < 7);
  iVar16 = 0;
  if (0 < iStack_cc) {
    iVar17 = param_2 + 0x160;
    auVar27._8_8_ = in_t0_qw._8_8_;
    auVar27._0_8_ = 0x45cf28;
    do {
      if (-1 < *(int *)(iVar17 + -0x150)) {
        uVar7 = 3;
        if ((int)*(uint *)(iVar17 + -0x10) < 2) {
          uVar7 = *(uint *)(iVar17 + -0x10) & 1;
        }
        uVar12 = 3;
        if ((int)*(uint *)(iVar17 + 0x130) < 2) {
          uVar12 = *(uint *)(iVar17 + 0x130) & 1;
        }
        puVar9 = auVar27._0_4_;
        *puVar9 = 0;
        iVar22 = uVar7 + uVar12;
        puVar9[1] = iVar16;
        puVar9[2] = (uint)(uVar7 < uVar12);
        if ((&DAT_0045cef0)[iVar22 * 2] == 0) {
          (&DAT_0045cef0)[iVar22 * 2] = puVar9;
          (&DAT_0045cef4)[iVar22 * 2] = puVar9;
        }
        else {
          *(undefined4 **)(&DAT_0045cef4)[iVar22 * 2] = puVar9;
          (&DAT_0045cef4)[iVar22 * 2] = puVar9;
        }
        auVar27._0_8_ = (long)(int)(puVar9 + 3);
      }
      auVar29._8_8_ = 0;
      auVar29._0_8_ = auVar28._8_8_;
      auVar28 = auVar29 << 0x40;
      iVar16 = iVar16 + 1;
      iVar17 = iVar17 + 0x420;
    } while (iVar16 < iStack_cc);
  }
  iVar16 = 6;
  do {
    bVar1 = iVar16 != -1;
    iVar16 = iVar16 + -1;
  } while (bVar1);
  iVar16 = 6;
  do {
    bVar1 = iVar16 != -1;
    iVar16 = iVar16 + -1;
  } while (bVar1);
  uVar7 = 0;
  iStack_bc = 0;
  do {
    uStack_c0 = uVar7 + 1;
    piVar20 = *(int **)((int)&DAT_0045cef0 + iStack_bc);
    if (piVar20 != (int *)0x0) {
      ppuStack_c8 = &PTR_LAB_003d1328 + uVar7;
      do {
        iStack_12c = 0;
        if (piVar20[2] == 0) {
          auVar28._0_8_ = (ulong)(int)auStack_1e0;
          iVar16 = piVar20[1] * 0x420 + param_2;
          lVar21 = (*(code *)*ppuStack_c8)
                             (lVar23,lVar23,auVar28._0_8_,iVar16 + 0x20,iVar16 + 0x160,
                              iVar16 + 0x2a0);
        }
        else {
          auVar28._0_8_ = lVar23;
          iVar16 = piVar20[1] * 0x420 + param_2;
          lVar21 = (*(code *)*ppuStack_c8)
                             (lVar23,auStack_1e0,lVar23,iVar16 + 0x160,iVar16 + 0x20,iVar16 + 0x2a0)
          ;
        }
        iVar16 = iVar6 + 1;
        if (lVar21 == 0) {
          *(undefined4 *)(piVar20[1] * 0x420 + param_2 + 0x410) = 0;
          iVar6 = iVar6 + 1;
        }
        else {
          auVar28._0_8_ = CONCAT71(0,iVar6 < iStack_d0);
          puVar9 = (undefined4 *)(piVar20[1] * 0x420 + param_2);
          puVar9[1] = *(undefined4 *)(iVar18 + 0x84);
          iVar6 = piVar20[1];
          *puVar9 = *(undefined4 *)(iVar18 + 0x80);
          iVar22 = (int)param_4;
          iVar17 = iVar6 * 0xa0 + iVar22;
          iVar6 = iVar6 * 0x420 + param_2;
          uVar25 = *(undefined4 *)(iVar17 + 0x84);
          *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar17 + 0x80);
          *(undefined4 *)(iVar6 + 0xc) = uVar25;
          iVar6 = iVar16;
          iStack_c4 = iVar16;
          if (auVar28._0_8_ != 0) {
            iVar6 = 0;
            *(int *)(piVar20[1] * 0x420 + param_2 + 0x410) = iStack_130;
            if (0 < iStack_130) {
              auVar28._0_8_ = lVar23;
              do {
                iVar17 = iVar6 * 0x10;
                puVar14 = auVar28._0_4_;
                uVar15 = *puVar14;
                uVar25 = *(undefined4 *)(puVar14 + 1);
                uVar11 = *(undefined4 *)((int)puVar14 + 0xc);
                iVar6 = iVar6 + 1;
                iVar16 = iVar17 + piVar20[1] * 0x420 + param_2;
                *(int *)(iVar16 + 0x2f0) = (int)uVar15;
                *(int *)(iVar16 + 0x2f4) = (int)((ulong)uVar15 >> 0x20);
                *(undefined4 *)(iVar16 + 0x2f8) = uVar25;
                *(undefined4 *)(iVar16 + 0x2fc) = uVar11;
                uVar15 = puVar14[0x10];
                uVar25 = *(undefined4 *)(puVar14 + 0x11);
                uVar11 = *(undefined4 *)((int)puVar14 + 0x8c);
                iVar17 = iVar17 + piVar20[1] * 0x420 + param_2;
                *(int *)(iVar17 + 0x370) = (int)uVar15;
                *(int *)(iVar17 + 0x374) = (int)((ulong)uVar15 >> 0x20);
                *(undefined4 *)(iVar17 + 0x378) = uVar25;
                *(undefined4 *)(iVar17 + 0x37c) = uVar11;
                auVar28._0_8_ = (ulong)(int)(puVar14 + 2);
              } while (iVar6 < iStack_130);
            }
            auVar31._8_8_ = in_a1_udw;
            auVar31._0_8_ = 0x420;
            iVar16 = piVar20[1] * 0x420 + param_2;
            uVar10 = (ulong)*(int *)(iVar16 + 0x410);
            uVar15 = auVar28._8_8_;
            if (uVar10 == 1) {
              auVar29 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2f0));
              auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x370));
              auVar30 = _vsub(auVar27,auVar29);
              auVar29 = _vmul(auVar30,auVar30);
              auVar27 = _sqc2(auVar30);
              *(undefined1 (*) [16])(iVar16 + 0x2b0) = auVar27;
              auVar27 = _vaddbc(auVar29,auVar29);
              auVar27 = _vaddbc(auVar27,auVar29);
              auVar27 = _qmfc2(auVar27._0_4_);
              if (1.1920929e-07 < auVar27._0_4_) {
                auVar27 = _vmul(auVar30,auVar30);
                auVar28 = _vaddbc(auVar27,auVar27);
                pcVar3 = *(code **)(iVar18 + 0x94);
                auVar28 = _vaddbc(auVar28,auVar27);
                auVar27 = _vmove(auVar30);
                _vrsqrt(in_vf0,auVar28);
                uVar25 = _vwaitq();
                auVar28 = _vmulq(auVar27,uVar25);
                auVar27 = _qmfc2(auVar28._0_4_);
                iVar6 = piVar20[1] * 0xa0 + iVar22;
                auVar28 = _sqc2(auVar28);
                *(undefined1 (*) [16])(iVar16 + 0x2b0) = auVar28;
                (*pcVar3)();
                auVar4._4_8_ = auVar27._8_8_;
                auVar4._0_4_ = *(undefined4 *)(iVar16 + 0x2b4);
                auVar31._0_8_ = auVar4._0_8_ << 0x20;
                auVar31._8_4_ = *(undefined4 *)(iVar16 + 0x2b8);
                auVar31._12_4_ = *(undefined4 *)(iVar16 + 700);
                auVar28._0_8_ = (ulong)(int)&fStack_110;
                auVar28._8_8_ = uVar15;
                (**(code **)(iVar6 + 0x94))(iVar6);
                fVar24 = fStack_120 - fStack_10c;
                fVar26 = fStack_110 - fStack_11c;
                bVar1 = fVar26 < fVar24;
                if (!bVar1) {
                  fVar24 = fVar26;
                }
                if (fVar24 < *(float *)(iVar16 + 0x2e0)) {
                  iVar6 = piVar20[1];
                  goto LAB_0033886c;
                }
                if (bVar1) {
                  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
                  auVar27 = _vsub(in_vf0,auVar27);
                  auVar27 = _sqc2(auVar27);
                  *(undefined1 (*) [16])(iVar16 + 0x2b0) = auVar27;
                  goto LAB_00338878;
                }
                uVar25 = *(undefined4 *)(iVar18 + 0x7c);
              }
              else {
                iVar6 = piVar20[1];
LAB_0033886c:
                iVar6 = iVar6 * 0x420 + param_2;
                auVar5 = *(undefined1 (*) [12])(iVar6 + 0x2a0);
                uVar25 = *(undefined4 *)(iVar6 + 0x2ac);
                *(int *)(iVar16 + 0x2b0) = auVar5._0_4_;
                *(int *)(iVar16 + 0x2b4) = auVar5._4_4_;
                *(int *)(iVar16 + 0x2b8) = auVar5._8_4_;
                *(undefined4 *)(iVar16 + 700) = uVar25;
LAB_00338878:
                uVar25 = *(undefined4 *)(iVar18 + 0x7c);
              }
              in_a1_udw = auVar31._8_8_;
              uVar12 = 0;
              auVar30 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
              auVar29 = _qmtc2(uVar25);
              auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2f0));
              auVar29 = _vmulbc(auVar30,auVar29);
              auVar31 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x370));
              auVar27 = _vadd(auVar27,auVar29);
              uVar7 = *(uint *)(iVar16 + 0x410);
              auVar27 = _sqc2(auVar27);
              *(undefined1 (*) [16])(iVar16 + 0x2c0) = auVar27;
              auVar27 = _qmtc2(*(undefined4 *)(piVar20[1] * 0xa0 + iVar22 + 0x7c));
              auVar27 = _vmulbc(auVar30,auVar27);
              auVar27 = _vsub(auVar31,auVar27);
              auVar27 = _sqc2(auVar27);
              *(undefined1 (*) [16])(iVar16 + 0x2d0) = auVar27;
              if (uVar7 == 0) goto LAB_00338c38;
              puVar9 = (undefined4 *)(iVar16 + 0x3f0);
              pauVar8 = (undefined1 (*) [16])(iVar16 + 0x370);
              iVar6 = piVar20[1] * 0xa0 + iVar22;
              auVar28._0_8_ = (ulong)iVar6;
              do {
                uVar12 = uVar12 + 1;
                auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
                auVar29 = _qmtc2(*(undefined4 *)(iVar18 + 0x7c));
                auVar31 = _lqc2(pauVar8[-8]);
                auVar27 = _vmulbc(auVar27,auVar29);
                uVar25 = *(undefined4 *)(iVar6 + 0x7c);
                auVar30 = _vadd(auVar31,auVar27);
                auVar31 = _lqc2(*pauVar8);
                auVar27 = _sqc2(auVar30);
                pauVar8[-8] = auVar27;
                auVar29 = _qmtc2(uVar25);
                auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
                auVar27 = _vmulbc(auVar27,auVar29);
                auVar29 = _vsub(auVar31,auVar27);
                auVar27 = _sqc2(auVar29);
                *pauVar8 = auVar27;
                auVar29 = _vsub(auVar29,auVar30);
                pauVar8 = pauVar8 + 1;
                auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
                auVar29 = _vmul(auVar29,auVar27);
                auVar27 = _vaddbc(auVar29,auVar29);
                auVar27 = _vaddbc(auVar27,auVar29);
                auVar27 = _qmfc2(auVar27._0_4_);
                *puVar9 = auVar27._0_4_;
                puVar9 = puVar9 + 1;
              } while (uVar12 < uVar7);
              auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2c0));
            }
            else {
              _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2c0));
              auVar27 = _qmtc2(0);
              _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2d0));
              auVar29 = _vaddbc(in_vf0,auVar27);
              auVar31 = _vaddbc(in_vf0,auVar27);
              auVar27 = _qmtc2(0);
              _vmove(auVar29);
              _vmove(auVar31);
              auVar30 = _vaddbc(in_vf0,auVar27);
              auVar29 = _vaddbc(in_vf0,auVar27);
              auVar27 = _sqc2(auVar31);
              *(undefined1 (*) [16])(iVar16 + 0x2c0) = auVar27;
              auVar31 = _qmtc2(0);
              auVar27 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar16 + 0x2c0) = auVar27;
              auVar27 = _sqc2(auVar30);
              *(undefined1 (*) [16])(iVar16 + 0x2d0) = auVar27;
              auVar27 = _vaddbc(in_vf0,auVar31);
              auVar29 = _vaddbc(in_vf0,auVar31);
              auVar30._8_8_ = 0;
              auVar30._0_8_ = in_a1_udw;
              auVar13 = auVar30 << 0x40;
              auVar27 = _sqc2(auVar27);
              *(undefined1 (*) [16])(iVar16 + 0x2c0) = auVar27;
              auVar27 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar16 + 0x2d0) = auVar27;
              iVar6 = iVar16;
              if (uVar10 != 0) {
                do {
                  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x2f0));
                  auVar13._0_8_ = (ulong)(auVar13._0_4_ + 1);
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2c0));
                  auVar27 = _vadd(auVar29,auVar27);
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2d0));
                  auVar27 = _sqc2(auVar27);
                  *(undefined1 (*) [16])(iVar16 + 0x2c0) = auVar27;
                  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x370));
                  auVar27 = _vadd(auVar29,auVar27);
                  auVar27 = _sqc2(auVar27);
                  *(undefined1 (*) [16])(iVar16 + 0x2d0) = auVar27;
                  iVar6 = iVar6 + 0x10;
                } while (auVar13._0_8_ < uVar10);
              }
              auVar29 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2c0));
              auVar27 = _qmtc2(1.0 / (float)*(uint *)(iVar16 + 0x410));
              auVar27 = _vmulbc(auVar29,auVar27);
              auVar27 = _sqc2(auVar27);
              *(undefined1 (*) [16])(iVar16 + 0x2c0) = auVar27;
              auVar29 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2d0));
              auVar27 = _qmtc2(1.0 / (float)*(uint *)(iVar16 + 0x410));
              auVar27 = _vmulbc(auVar29,auVar27);
              auVar27 = _sqc2(auVar27);
              *(undefined1 (*) [16])(iVar16 + 0x2d0) = auVar27;
              if (iStack_12c == 0) {
                iVar6 = piVar20[1];
LAB_00338b44:
                iVar6 = iVar6 * 0x420 + param_2;
                auVar5 = *(undefined1 (*) [12])(iVar6 + 0x2a0);
                uVar25 = *(undefined4 *)(iVar6 + 0x2ac);
                *(int *)(iVar16 + 0x2b0) = auVar5._0_4_;
                *(int *)(iVar16 + 0x2b4) = auVar5._4_4_;
                *(int *)(iVar16 + 0x2b8) = auVar5._8_4_;
                *(undefined4 *)(iVar16 + 700) = uVar25;
LAB_00338b54:
                iVar6 = piVar20[1];
              }
              else {
                *(int *)(iVar16 + 0x2b0) = auStack_160._0_4_;
                *(int *)(iVar16 + 0x2b4) = auStack_160._4_4_;
                *(int *)(iVar16 + 0x2b8) = auStack_160._8_4_;
                *(int *)(iVar16 + 700) = auStack_160._12_4_;
                iVar6 = piVar20[1] * 0xa0 + iVar22;
                auVar28 = auStack_160;
                (**(code **)(iVar18 + 0x94))();
                auVar5._4_8_ = auVar28._8_8_;
                auVar5._0_4_ = *(undefined4 *)(iVar16 + 0x2b4);
                auVar13._0_8_ = auVar5._0_8_ << 0x20;
                auVar13._8_4_ = *(undefined4 *)(iVar16 + 0x2b8);
                auVar13._12_4_ = *(undefined4 *)(iVar16 + 700);
                auVar28._0_8_ = (ulong)(int)&fStack_f0;
                auVar28._8_8_ = uVar15;
                (**(code **)(iVar6 + 0x94))(iVar6);
                fVar24 = fStack_100 - fStack_ec;
                fVar26 = fStack_f0 - fStack_fc;
                bVar1 = fVar26 < fVar24;
                if (!bVar1) {
                  fVar24 = fVar26;
                }
                if (fVar24 < *(float *)(iVar16 + 0x2e0)) {
                  iVar6 = piVar20[1];
                  goto LAB_00338b44;
                }
                if (bVar1) {
                  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
                  auVar27 = _vsub(in_vf0,auVar27);
                  auVar27 = _sqc2(auVar27);
                  *(undefined1 (*) [16])(iVar16 + 0x2b0) = auVar27;
                  goto LAB_00338b54;
                }
                iVar6 = piVar20[1];
              }
              in_a1_udw = auVar13._8_8_;
              uVar12 = 0;
              auVar31 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
              auVar27 = _qmtc2(*(undefined4 *)(iVar18 + 0x7c));
              auVar29 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2c0));
              auVar27 = _vmulbc(auVar31,auVar27);
              auVar30 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2d0));
              auVar27 = _vadd(auVar29,auVar27);
              uVar7 = *(uint *)(iVar16 + 0x410);
              auVar29 = _qmtc2(*(undefined4 *)(iVar6 * 0xa0 + iVar22 + 0x7c));
              auVar27 = _sqc2(auVar27);
              *(undefined1 (*) [16])(iVar16 + 0x2c0) = auVar27;
              auVar27 = _vmulbc(auVar31,auVar29);
              auVar27 = _vsub(auVar30,auVar27);
              auVar27 = _sqc2(auVar27);
              *(undefined1 (*) [16])(iVar16 + 0x2d0) = auVar27;
              if (uVar7 != 0) {
                puVar9 = (undefined4 *)(iVar16 + 0x3f0);
                iVar6 = iVar6 * 0xa0 + iVar22;
                auVar28._0_8_ = (ulong)iVar6;
                pauVar8 = (undefined1 (*) [16])(iVar16 + 0x370);
                do {
                  uVar12 = uVar12 + 1;
                  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
                  auVar29 = _qmtc2(*(undefined4 *)(iVar18 + 0x7c));
                  auVar31 = _lqc2(pauVar8[-8]);
                  auVar27 = _vmulbc(auVar27,auVar29);
                  uVar25 = *(undefined4 *)(iVar6 + 0x7c);
                  auVar30 = _vadd(auVar31,auVar27);
                  auVar31 = _lqc2(*pauVar8);
                  auVar27 = _sqc2(auVar30);
                  pauVar8[-8] = auVar27;
                  auVar29 = _qmtc2(uVar25);
                  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
                  auVar27 = _vmulbc(auVar27,auVar29);
                  auVar29 = _vsub(auVar31,auVar27);
                  auVar27 = _sqc2(auVar29);
                  *pauVar8 = auVar27;
                  auVar29 = _vsub(auVar29,auVar30);
                  pauVar8 = pauVar8 + 1;
                  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
                  auVar29 = _vmul(auVar29,auVar27);
                  auVar27 = _vaddbc(auVar29,auVar29);
                  auVar27 = _vaddbc(auVar27,auVar29);
                  auVar27 = _qmfc2(auVar27._0_4_);
                  *puVar9 = auVar27._0_4_;
                  puVar9 = puVar9 + 1;
                } while (uVar12 < uVar7);
              }
LAB_00338c38:
              auVar27 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2c0));
            }
            auVar29 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2d0));
            auVar27 = _vsub(auVar29,auVar27);
            auVar29 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0x2b0));
            auVar29 = _vmul(auVar27,auVar29);
            auVar27 = _vaddbc(auVar29,auVar29);
            auVar27 = _vaddbc(auVar27,auVar29);
            auVar27 = _qmfc2(auVar27._0_4_);
            *(int *)(iVar16 + 0x2e0) = auVar27._0_4_;
            if (**(int **)(*(int *)(iVar18 + 0x80) + 0x58) == 3) {
              auVar28._0_8_ = (ulong)*(int *)(*(int *)(iVar18 + 0x80) + 0x40);
              lVar21 = FUN_00338150(iVar16,*(undefined4 *)
                                            (&DAT_0040a430 + (*(uint *)(iVar16 + 0x20) & 0xf) * 4),
                                    auVar28._0_8_,iVar18 + 0x10);
              if (lVar21 == 0) {
                *(undefined4 *)(iVar16 + 0x410) = 0;
              }
              iVar6 = piVar20[1];
            }
            else {
              iVar6 = piVar20[1];
            }
            iVar22 = iVar6 * 0xa0 + iVar22;
            iVar17 = *(int *)(iVar22 + 0x80);
            iVar6 = iStack_c4;
            if (**(int **)(iVar17 + 0x58) == 3) {
              auVar27 = _lqc2(*(undefined1 (*) [16])(iVar22 + 0x10));
              auVar28._0_8_ = (ulong)*(int *)(iVar17 + 0x40);
              auVar27 = _vsub(in_vf0,auVar27);
              auStack_e0 = _sqc2(auVar27);
              lVar21 = FUN_00338150(iVar16,*(undefined4 *)
                                            (&DAT_0040a430 + (*(uint *)(iVar16 + 0x160) & 0xf) * 4),
                                    auVar28._0_8_,auStack_e0);
              iVar6 = iStack_c4;
              if (lVar21 == 0) {
                *(undefined4 *)(iVar16 + 0x410) = 0;
              }
            }
          }
        }
      } while ((piVar20 != *(int **)((int)&DAT_0045cef4 + iStack_bc)) &&
              (piVar20 = (int *)*piVar20, piVar20 != (int *)0x0));
    }
    uVar7 = uStack_c0;
    iStack_bc = uVar7 << 3;
    if (6 < uVar7) {
      return iStack_cc;
    }
  } while( true );
}


// ==== FUN_00338da8 @ 00338da8 ====
// GLOBAL PTR_LAB_003d1348 pointer
// GLOBAL DAT_0040a430 undefined
// GLOBAL DAT_0045db28 undefined4
// GLOBAL DAT_0045db2c undefined4

int FUN_00338da8(float param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  undefined4 *puVar12;
  ulong uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong in_a1_udw;
  undefined1 auVar16 [16];
  undefined8 *puVar17;
  undefined1 in_a2_qw [16];
  undefined8 uVar18;
  undefined1 in_t0_qw [16];
  int iVar19;
  int iVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 in_vf0 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [128];
  undefined1 auStack_160 [16];
  int iStack_130;
  int iStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e0 [16];
  int iStack_d0;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  int iStack_c0;
  
  lVar25 = (long)(int)auStack_260;
  iVar24 = param_3;
  if (param_4 <= param_3) {
    iVar24 = param_4;
  }
  lVar22 = in_a2_qw._0_8_;
  iVar8 = 0;
  auVar30 = in_a2_qw;
  auVar29 = in_t0_qw;
  iStack_d0 = param_3;
  iStack_cc = iVar24;
  if (0 < iVar24) {
    iVar20 = param_2 + 0x2a0;
    lVar23 = lVar22;
    iVar19 = param_2;
    do {
      auVar30._0_8_ = in_t0_qw._0_8_;
      uVar27 = FUN_00336520(iVar20,lVar23);
      iVar20 = iVar20 + 0x420;
      *(undefined4 *)(iVar19 + 0x2e0) = uVar27;
      iVar24 = iVar24 + -1;
      iVar19 = iVar19 + 0x420;
      lVar23 = (long)((int)lVar23 + 0xa0);
    } while (iVar24 != 0);
  }
  iVar19 = 0;
  iVar20 = in_t0_qw._0_4_;
  iVar24 = param_2;
  if (0 < iStack_cc) {
    do {
      iVar10 = (int)lVar22;
      auVar29._0_8_ = 3;
      if (*(float *)(iVar24 + 0x2e0) <=
          *(float *)(iVar10 + 0x7c) + *(float *)(iVar20 + 0x7c) + param_1) {
        iVar2 = *(int *)(iVar10 + 0x80);
        auVar30._0_8_ = (ulong)iVar2;
        if ((**(int **)(iVar2 + 0x58) == 3) && ((*(uint *)(iVar2 + 0x40) & 1) != 0)) {
          auVar32 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2a0));
          auVar31 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x10));
          auVar32 = _vmul(auVar32,auVar31);
          auVar31 = _vaddbc(auVar32,auVar32);
          auVar31 = _vaddbc(auVar31,auVar32);
          auVar31 = _qmfc2(auVar31._0_4_);
          if (0.0 <= auVar31._0_4_) goto LAB_00338f00;
          *(undefined4 *)(iVar24 + 0x410) = 0;
          *(undefined4 *)(iVar24 + 0x10) = 0xffffffff;
        }
        else {
LAB_00338f00:
          if ((**(int **)(*(int *)(iVar20 + 0x80) + 0x58) == 3) &&
             ((*(uint *)(*(int *)(iVar20 + 0x80) + 0x40) & 1) != 0)) {
            auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2a0));
            auVar29 = _lqc2(*(undefined1 (*) [16])(iVar20 + 0x10));
            auVar31 = _vmul(auVar31,auVar29);
            auVar29 = _vaddbc(auVar31,auVar31);
            auVar29 = _vaddbc(auVar29,auVar31);
            auVar29 = _qmfc2(auVar29._0_4_);
            if (0.0 < auVar29._0_4_) goto LAB_00338f90;
          }
          pcVar3 = *(code **)(iVar10 + 0x90);
          *(int *)(iVar24 + 0x10) = iVar19;
          (*pcVar3)(lVar22,1);
          auVar30 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2a0));
          auVar30 = _vsub(in_vf0,auVar30);
          auVar30 = _qmfc2(auVar30._0_4_);
          (**(code **)(iVar20 + 0x90))();
        }
      }
      else {
LAB_00338f90:
        *(undefined4 *)(iVar24 + 0x410) = 0;
        *(undefined4 *)(iVar24 + 0x10) = 0xffffffff;
      }
      iVar19 = iVar19 + 1;
      lVar22 = (long)(iVar10 + 0xa0);
      iVar24 = iVar24 + 0x420;
    } while (iVar19 < iStack_cc);
  }
  uVar9 = 0;
  puVar12 = &DAT_0045db28;
  do {
    *puVar12 = 0;
    uVar9 = uVar9 + 1;
    puVar12[1] = 0;
    puVar12 = puVar12 + 2;
  } while (uVar9 < 7);
  iVar24 = 0;
  if (0 < iStack_cc) {
    iVar19 = param_2 + 0x160;
    auVar31._8_8_ = auVar29._8_8_;
    auVar31._0_8_ = 0x45db60;
    do {
      if (-1 < *(int *)(iVar19 + -0x150)) {
        uVar9 = 3;
        if ((int)*(uint *)(iVar19 + -0x10) < 2) {
          uVar9 = *(uint *)(iVar19 + -0x10) & 1;
        }
        uVar7 = 3;
        if ((int)*(uint *)(iVar19 + 0x130) < 2) {
          uVar7 = *(uint *)(iVar19 + 0x130) & 1;
        }
        puVar12 = auVar31._0_4_;
        *puVar12 = 0;
        iVar10 = uVar9 + uVar7;
        puVar12[1] = iVar24;
        puVar12[2] = (uint)(uVar9 < uVar7);
        if ((&DAT_0045db28)[iVar10 * 2] == 0) {
          (&DAT_0045db28)[iVar10 * 2] = puVar12;
          (&DAT_0045db2c)[iVar10 * 2] = puVar12;
        }
        else {
          *(undefined4 **)(&DAT_0045db2c)[iVar10 * 2] = puVar12;
          (&DAT_0045db2c)[iVar10 * 2] = puVar12;
        }
        auVar31._0_8_ = (long)(int)(puVar12 + 3);
      }
      auVar32._8_8_ = 0;
      auVar32._0_8_ = auVar30._8_8_;
      auVar30 = auVar32 << 0x40;
      iVar24 = iVar24 + 1;
      iVar19 = iVar19 + 0x420;
    } while (iVar24 < iStack_cc);
  }
  iVar24 = 6;
  do {
    bVar1 = iVar24 != -1;
    iVar24 = iVar24 + -1;
  } while (bVar1);
  iVar24 = 6;
  do {
    bVar1 = iVar24 != -1;
    iVar24 = iVar24 + -1;
  } while (bVar1);
  uVar9 = 0;
  iStack_c4 = 0;
  do {
    uStack_c8 = uVar9 + 1;
    piVar21 = *(int **)((int)&DAT_0045db28 + iStack_c4);
    if (piVar21 != (int *)0x0) {
      do {
        iStack_12c = 0;
        if (piVar21[2] == 0) {
          auVar30._0_8_ = (ulong)(int)auStack_1e0;
          iVar24 = piVar21[1] * 0x420 + param_2;
          lVar22 = (*(code *)(&PTR_LAB_003d1348)[uVar9])
                             (lVar25,lVar25,auVar30._0_8_,iVar24 + 0x20,iVar24 + 0x160,
                              iVar24 + 0x2a0);
        }
        else {
          auVar30._0_8_ = lVar25;
          iVar24 = piVar21[1] * 0x420 + param_2;
          lVar22 = (*(code *)(&PTR_LAB_003d1348)[uVar9])
                             (lVar25,auStack_1e0,lVar25,iVar24 + 0x160,iVar24 + 0x20,iVar24 + 0x2a0)
          ;
        }
        if (lVar22 == 0) {
          *(undefined4 *)(piVar21[1] * 0x420 + param_2 + 0x410) = 0;
          iVar8 = iVar8 + 1;
        }
        else {
          iStack_c0 = iVar8 + 1;
          auVar30._0_8_ = CONCAT71(0,iVar8 < iStack_d0);
          iVar19 = in_a2_qw._0_4_;
          iVar24 = piVar21[1] * 0xa0 + iVar19;
          puVar12 = (undefined4 *)(piVar21[1] * 0x420 + param_2);
          uVar27 = *(undefined4 *)(iVar24 + 0x84);
          *puVar12 = *(undefined4 *)(iVar24 + 0x80);
          puVar12[1] = uVar27;
          iVar24 = piVar21[1] * 0x420 + param_2;
          uVar27 = *(undefined4 *)(iVar20 + 0x84);
          *(undefined4 *)(iVar24 + 8) = *(undefined4 *)(iVar20 + 0x80);
          *(undefined4 *)(iVar24 + 0xc) = uVar27;
          iVar8 = iStack_c0;
          if (auVar30._0_8_ != 0) {
            iVar24 = 0;
            *(int *)(piVar21[1] * 0x420 + param_2 + 0x410) = iStack_130;
            if (0 < iStack_130) {
              auVar30._0_8_ = lVar25;
              do {
                iVar10 = iVar24 * 0x10;
                puVar17 = auVar30._0_4_;
                uVar18 = *puVar17;
                uVar27 = *(undefined4 *)(puVar17 + 1);
                uVar14 = *(undefined4 *)((int)puVar17 + 0xc);
                iVar24 = iVar24 + 1;
                iVar8 = iVar10 + piVar21[1] * 0x420 + param_2;
                *(int *)(iVar8 + 0x2f0) = (int)uVar18;
                *(int *)(iVar8 + 0x2f4) = (int)((ulong)uVar18 >> 0x20);
                *(undefined4 *)(iVar8 + 0x2f8) = uVar27;
                *(undefined4 *)(iVar8 + 0x2fc) = uVar14;
                uVar18 = puVar17[0x10];
                uVar27 = *(undefined4 *)(puVar17 + 0x11);
                uVar14 = *(undefined4 *)((int)puVar17 + 0x8c);
                iVar10 = iVar10 + piVar21[1] * 0x420 + param_2;
                *(int *)(iVar10 + 0x370) = (int)uVar18;
                *(int *)(iVar10 + 0x374) = (int)((ulong)uVar18 >> 0x20);
                *(undefined4 *)(iVar10 + 0x378) = uVar27;
                *(undefined4 *)(iVar10 + 0x37c) = uVar14;
                auVar30._0_8_ = (ulong)(int)(puVar17 + 2);
              } while (iVar24 < iStack_130);
            }
            auVar33._8_8_ = in_a1_udw;
            auVar33._0_8_ = 0x420;
            iVar24 = piVar21[1] * 0x420 + param_2;
            uVar13 = (ulong)*(int *)(iVar24 + 0x410);
            uVar18 = auVar30._8_8_;
            if (uVar13 == 1) {
              auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2f0));
              auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x370));
              auVar32 = _vsub(auVar29,auVar31);
              auVar31 = _vmul(auVar32,auVar32);
              auVar29 = _sqc2(auVar32);
              *(undefined1 (*) [16])(iVar24 + 0x2b0) = auVar29;
              auVar29 = _vaddbc(auVar31,auVar31);
              auVar29 = _vaddbc(auVar29,auVar31);
              auVar29 = _qmfc2(auVar29._0_4_);
              if (1.1920929e-07 < auVar29._0_4_) {
                iVar8 = piVar21[1];
                auVar31 = _vmul(auVar32,auVar32);
                auVar29 = _vaddbc(auVar31,auVar31);
                auVar30 = _vmove(auVar32);
                auVar29 = _vaddbc(auVar29,auVar31);
                _vrsqrt(in_vf0,auVar29);
                uVar27 = _vwaitq();
                auVar29 = _vmulq(auVar30,uVar27);
                auVar30 = _sqc2(auVar29);
                *(undefined1 (*) [16])(iVar24 + 0x2b0) = auVar30;
                iVar8 = iVar8 * 0xa0 + iVar19;
                auVar30 = _qmfc2(auVar29._0_4_);
                (**(code **)(iVar8 + 0x94))(iVar8,auVar30._0_8_,&fStack_120);
                auVar4._4_8_ = auVar30._8_8_;
                auVar4._0_4_ = *(undefined4 *)(iVar24 + 0x2b4);
                auVar33._0_8_ = auVar4._0_8_ << 0x20;
                auVar33._8_4_ = *(undefined4 *)(iVar24 + 0x2b8);
                auVar33._12_4_ = *(undefined4 *)(iVar24 + 700);
                auVar30._0_8_ = (ulong)(int)&fStack_110;
                auVar30._8_8_ = uVar18;
                (**(code **)(iVar20 + 0x94))();
                fVar26 = fStack_120 - fStack_10c;
                fVar28 = fStack_110 - fStack_11c;
                bVar1 = fVar28 < fVar26;
                if (!bVar1) {
                  fVar26 = fVar28;
                }
                if (fVar26 < *(float *)(iVar24 + 0x2e0)) {
                  iVar8 = piVar21[1];
                  goto LAB_00339388;
                }
                if (bVar1) {
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
                  auVar29 = _vsub(in_vf0,auVar29);
                  auVar29 = _sqc2(auVar29);
                  *(undefined1 (*) [16])(iVar24 + 0x2b0) = auVar29;
                  goto LAB_00339394;
                }
                iVar8 = piVar21[1];
              }
              else {
                iVar8 = piVar21[1];
LAB_00339388:
                iVar8 = iVar8 * 0x420 + param_2;
                auVar5 = *(undefined1 (*) [12])(iVar8 + 0x2a0);
                uVar27 = *(undefined4 *)(iVar8 + 0x2ac);
                *(int *)(iVar24 + 0x2b0) = auVar5._0_4_;
                *(int *)(iVar24 + 0x2b4) = auVar5._4_4_;
                *(int *)(iVar24 + 0x2b8) = auVar5._8_4_;
                *(undefined4 *)(iVar24 + 700) = uVar27;
LAB_00339394:
                iVar8 = piVar21[1];
              }
              in_a1_udw = auVar33._8_8_;
              uVar15 = 0;
              auVar32 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
              auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2f0));
              auVar33 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x370));
              uVar7 = *(uint *)(iVar24 + 0x410);
              auVar29 = _qmtc2(*(undefined4 *)(iVar8 * 0xa0 + iVar19 + 0x7c));
              auVar29 = _vmulbc(auVar32,auVar29);
              auVar29 = _vadd(auVar31,auVar29);
              auVar29 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar24 + 0x2c0) = auVar29;
              auVar29 = _qmtc2(*(undefined4 *)(iVar20 + 0x7c));
              auVar29 = _vmulbc(auVar32,auVar29);
              auVar29 = _vsub(auVar33,auVar29);
              auVar29 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar24 + 0x2d0) = auVar29;
              if (uVar7 == 0) goto LAB_00339758;
              puVar12 = (undefined4 *)(iVar24 + 0x3f0);
              pauVar11 = (undefined1 (*) [16])(iVar24 + 0x370);
              iVar8 = piVar21[1] * 0xa0 + iVar19;
              auVar30._0_8_ = (ulong)iVar8;
              do {
                uVar15 = uVar15 + 1;
                auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
                auVar31 = _qmtc2(*(undefined4 *)(iVar8 + 0x7c));
                auVar32 = _lqc2(pauVar11[-8]);
                auVar29 = _vmulbc(auVar29,auVar31);
                uVar27 = *(undefined4 *)(iVar20 + 0x7c);
                auVar33 = _vadd(auVar32,auVar29);
                auVar32 = _lqc2(*pauVar11);
                auVar29 = _sqc2(auVar33);
                pauVar11[-8] = auVar29;
                auVar31 = _qmtc2(uVar27);
                auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
                auVar29 = _vmulbc(auVar29,auVar31);
                auVar31 = _vsub(auVar32,auVar29);
                auVar29 = _sqc2(auVar31);
                *pauVar11 = auVar29;
                auVar31 = _vsub(auVar31,auVar33);
                pauVar11 = pauVar11 + 1;
                auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
                auVar31 = _vmul(auVar31,auVar29);
                auVar29 = _vaddbc(auVar31,auVar31);
                auVar29 = _vaddbc(auVar29,auVar31);
                auVar29 = _qmfc2(auVar29._0_4_);
                *puVar12 = auVar29._0_4_;
                puVar12 = puVar12 + 1;
              } while (uVar15 < uVar7);
              auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2c0));
            }
            else {
              _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2c0));
              auVar29 = _qmtc2(0);
              _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2d0));
              auVar31 = _vaddbc(in_vf0,auVar29);
              auVar32 = _vaddbc(in_vf0,auVar29);
              auVar29 = _qmtc2(0);
              _vmove(auVar31);
              _vmove(auVar32);
              auVar33 = _vaddbc(in_vf0,auVar29);
              auVar31 = _vaddbc(in_vf0,auVar29);
              auVar29 = _sqc2(auVar32);
              *(undefined1 (*) [16])(iVar24 + 0x2c0) = auVar29;
              auVar32 = _qmtc2(0);
              auVar29 = _sqc2(auVar31);
              *(undefined1 (*) [16])(iVar24 + 0x2c0) = auVar29;
              auVar29 = _sqc2(auVar33);
              *(undefined1 (*) [16])(iVar24 + 0x2d0) = auVar29;
              auVar29 = _vaddbc(in_vf0,auVar32);
              auVar31 = _vaddbc(in_vf0,auVar32);
              auVar6._8_8_ = 0;
              auVar6._0_8_ = in_a1_udw;
              auVar16 = auVar6 << 0x40;
              auVar29 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar24 + 0x2c0) = auVar29;
              auVar29 = _sqc2(auVar31);
              *(undefined1 (*) [16])(iVar24 + 0x2d0) = auVar29;
              iVar8 = iVar24;
              if (uVar13 != 0) {
                do {
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x2f0));
                  auVar16._0_8_ = (ulong)(auVar16._0_4_ + 1);
                  auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2c0));
                  auVar29 = _vadd(auVar31,auVar29);
                  auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2d0));
                  auVar29 = _sqc2(auVar29);
                  *(undefined1 (*) [16])(iVar24 + 0x2c0) = auVar29;
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x370));
                  auVar29 = _vadd(auVar31,auVar29);
                  auVar29 = _sqc2(auVar29);
                  *(undefined1 (*) [16])(iVar24 + 0x2d0) = auVar29;
                  iVar8 = iVar8 + 0x10;
                } while (auVar16._0_8_ < uVar13);
              }
              auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2c0));
              auVar29 = _qmtc2(1.0 / (float)*(uint *)(iVar24 + 0x410));
              auVar29 = _vmulbc(auVar31,auVar29);
              auVar29 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar24 + 0x2c0) = auVar29;
              auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2d0));
              auVar29 = _qmtc2(1.0 / (float)*(uint *)(iVar24 + 0x410));
              auVar29 = _vmulbc(auVar31,auVar29);
              auVar29 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar24 + 0x2d0) = auVar29;
              if (iStack_12c == 0) {
                iVar8 = piVar21[1];
LAB_00339660:
                iVar8 = iVar8 * 0x420 + param_2;
                auVar5 = *(undefined1 (*) [12])(iVar8 + 0x2a0);
                uVar27 = *(undefined4 *)(iVar8 + 0x2ac);
                *(int *)(iVar24 + 0x2b0) = auVar5._0_4_;
                *(int *)(iVar24 + 0x2b4) = auVar5._4_4_;
                *(int *)(iVar24 + 0x2b8) = auVar5._8_4_;
                *(undefined4 *)(iVar24 + 700) = uVar27;
LAB_00339670:
                iVar8 = piVar21[1];
              }
              else {
                *(int *)(iVar24 + 0x2b0) = auStack_160._0_4_;
                *(int *)(iVar24 + 0x2b4) = auStack_160._4_4_;
                *(int *)(iVar24 + 0x2b8) = auStack_160._8_4_;
                *(int *)(iVar24 + 700) = auStack_160._12_4_;
                auVar30 = auStack_160;
                (**(code **)(piVar21[1] * 0xa0 + iVar19 + 0x94))();
                auVar5._4_8_ = auVar30._8_8_;
                auVar5._0_4_ = *(undefined4 *)(iVar24 + 0x2b4);
                auVar16._0_8_ = auVar5._0_8_ << 0x20;
                auVar16._8_4_ = *(undefined4 *)(iVar24 + 0x2b8);
                auVar16._12_4_ = *(undefined4 *)(iVar24 + 700);
                auVar30._0_8_ = (ulong)(int)&fStack_f0;
                auVar30._8_8_ = uVar18;
                (**(code **)(iVar20 + 0x94))();
                fVar26 = fStack_100 - fStack_ec;
                fVar28 = fStack_f0 - fStack_fc;
                bVar1 = fVar28 < fVar26;
                if (!bVar1) {
                  fVar26 = fVar28;
                }
                if (fVar26 < *(float *)(iVar24 + 0x2e0)) {
                  iVar8 = piVar21[1];
                  goto LAB_00339660;
                }
                if (bVar1) {
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
                  auVar29 = _vsub(in_vf0,auVar29);
                  auVar29 = _sqc2(auVar29);
                  *(undefined1 (*) [16])(iVar24 + 0x2b0) = auVar29;
                  goto LAB_00339670;
                }
                iVar8 = piVar21[1];
              }
              in_a1_udw = auVar16._8_8_;
              uVar15 = 0;
              auVar32 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
              auVar29 = _qmtc2(*(undefined4 *)(iVar20 + 0x7c));
              auVar33 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2c0));
              auVar29 = _vmulbc(auVar32,auVar29);
              auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2d0));
              auVar29 = _vsub(auVar31,auVar29);
              uVar7 = *(uint *)(iVar24 + 0x410);
              auVar31 = _qmtc2(*(undefined4 *)(iVar8 * 0xa0 + iVar19 + 0x7c));
              auVar29 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar24 + 0x2d0) = auVar29;
              auVar29 = _vmulbc(auVar32,auVar31);
              auVar29 = _vadd(auVar33,auVar29);
              auVar29 = _sqc2(auVar29);
              *(undefined1 (*) [16])(iVar24 + 0x2c0) = auVar29;
              if (uVar7 != 0) {
                puVar12 = (undefined4 *)(iVar24 + 0x3f0);
                iVar8 = iVar8 * 0xa0 + iVar19;
                auVar30._0_8_ = (ulong)iVar8;
                pauVar11 = (undefined1 (*) [16])(iVar24 + 0x370);
                do {
                  uVar15 = uVar15 + 1;
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
                  auVar31 = _qmtc2(*(undefined4 *)(iVar8 + 0x7c));
                  auVar32 = _lqc2(pauVar11[-8]);
                  auVar29 = _vmulbc(auVar29,auVar31);
                  uVar27 = *(undefined4 *)(iVar20 + 0x7c);
                  auVar33 = _vadd(auVar32,auVar29);
                  auVar32 = _lqc2(*pauVar11);
                  auVar29 = _sqc2(auVar33);
                  pauVar11[-8] = auVar29;
                  auVar31 = _qmtc2(uVar27);
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
                  auVar29 = _vmulbc(auVar29,auVar31);
                  auVar31 = _vsub(auVar32,auVar29);
                  auVar29 = _sqc2(auVar31);
                  *pauVar11 = auVar29;
                  auVar31 = _vsub(auVar31,auVar33);
                  pauVar11 = pauVar11 + 1;
                  auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
                  auVar31 = _vmul(auVar31,auVar29);
                  auVar29 = _vaddbc(auVar31,auVar31);
                  auVar29 = _vaddbc(auVar29,auVar31);
                  auVar29 = _qmfc2(auVar29._0_4_);
                  *puVar12 = auVar29._0_4_;
                  puVar12 = puVar12 + 1;
                } while (uVar15 < uVar7);
              }
LAB_00339758:
              auVar29 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2c0));
            }
            auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2d0));
            auVar29 = _vsub(auVar31,auVar29);
            auVar31 = _lqc2(*(undefined1 (*) [16])(iVar24 + 0x2b0));
            auVar31 = _vmul(auVar29,auVar31);
            auVar29 = _vaddbc(auVar31,auVar31);
            auVar29 = _vaddbc(auVar29,auVar31);
            auVar29 = _qmfc2(auVar29._0_4_);
            *(int *)(iVar24 + 0x2e0) = auVar29._0_4_;
            iVar19 = piVar21[1] * 0xa0 + iVar19;
            iVar8 = *(int *)(iVar19 + 0x80);
            if (**(int **)(iVar8 + 0x58) == 3) {
              auVar30._0_8_ = (ulong)*(int *)(iVar8 + 0x40);
              lVar22 = FUN_00338150(iVar24,*(undefined4 *)
                                            (&DAT_0040a430 + (*(uint *)(iVar24 + 0x20) & 0xf) * 4),
                                    auVar30._0_8_,iVar19 + 0x10);
              if (lVar22 == 0) {
                *(undefined4 *)(iVar24 + 0x410) = 0;
              }
              iVar19 = *(int *)(iVar20 + 0x80);
            }
            else {
              iVar19 = *(int *)(iVar20 + 0x80);
            }
            iVar8 = iStack_c0;
            if (**(int **)(iVar19 + 0x58) == 3) {
              auVar29 = _lqc2(*(undefined1 (*) [16])(iVar20 + 0x10));
              auVar30._0_8_ = (ulong)*(int *)(iVar19 + 0x40);
              auVar29 = _vsub(in_vf0,auVar29);
              auStack_e0 = _sqc2(auVar29);
              lVar22 = FUN_00338150(iVar24,*(undefined4 *)
                                            (&DAT_0040a430 + (*(uint *)(iVar24 + 0x160) & 0xf) * 4),
                                    auVar30._0_8_,auStack_e0);
              iVar8 = iStack_c0;
              if (lVar22 == 0) {
                *(undefined4 *)(iVar24 + 0x410) = 0;
              }
            }
          }
        }
      } while ((piVar21 != *(int **)((int)&DAT_0045db2c + iStack_c4)) &&
              (piVar21 = (int *)*piVar21, piVar21 != (int *)0x0));
    }
    uVar9 = uStack_c8;
    iStack_c4 = uVar9 << 3;
    if (6 < uVar9) {
      return iStack_cc;
    }
  } while( true );
}


// ==== FUN_003398d8 @ 003398d8 ====

int FUN_003398d8(undefined4 param_1,int param_2,int param_3,undefined8 param_4,int *param_5,
                long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong in_hi;
  
  iVar7 = 0;
  iVar5 = 0;
  if (0 < param_6) {
    do {
      iVar5 = iVar5 + 1;
      if (iVar7 < param_3) {
        uVar8 = 0;
        iVar4 = *(int *)*param_5;
        iVar9 = (int)param_4 + 0xa0;
        iVar1 = *(int *)(iVar4 + 0x58);
        (**(code **)(iVar1 + 0x20))(iVar4 + *(short *)(iVar1 + 0x1c),param_4,((int *)*param_5)[1]);
        *(undefined4 *)((int)param_4 + 0x84) = *(undefined4 *)(*param_5 + 0x70);
        if (param_5[1] == 0) {
          iVar4 = param_5[2];
        }
        else {
          piVar6 = param_5 + 3;
          iVar4 = iVar9;
          do {
            uVar8 = uVar8 + 1;
            iVar1 = *(int *)*piVar6;
            iVar2 = *(int *)(iVar1 + 0x58);
            (**(code **)(iVar2 + 0x20))(iVar1 + *(short *)(iVar2 + 0x1c),iVar4,((int *)*piVar6)[1]);
            iVar1 = *piVar6;
            piVar6 = piVar6 + 1;
            *(undefined4 *)(iVar4 + 0x84) = *(undefined4 *)(iVar1 + 0x70);
            iVar4 = iVar4 + 0xa0;
          } while (uVar8 < (uint)param_5[1]);
          iVar4 = param_5[2];
        }
        if (iVar4 == 0) {
          lVar3 = ((long)param_2 | in_hi) + (long)(iVar7 * 0x420);
          in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
          iVar4 = FUN_00338288(param_1,(int)lVar3,param_3 - iVar7,param_4,iVar9,param_5[1]);
          iVar7 = iVar7 + iVar4;
        }
        else {
          lVar3 = ((long)param_2 | in_hi) + (long)(iVar7 * 0x420);
          in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
          iVar4 = FUN_00338da8(param_1,(int)lVar3,param_3 - iVar7,iVar9,param_5[1],param_4);
          iVar7 = iVar7 + iVar4;
        }
      }
      param_5 = param_5 + param_5[1] + 3;
    } while (iVar5 < (int)param_6);
  }
  return iVar7;
}


// ==== FUN_00339a90 @ 00339a90 ====
// GLOBAL DAT_0045e760 undefined4
// GLOBAL DAT_0045e764 undefined4
// GLOBAL DAT_0045e768 undefined4
// GLOBAL DAT_0045e76c undefined4
// GLOBAL DAT_0045e770 undefined4
// GLOBAL DAT_0045e774 undefined4
// GLOBAL DAT_0045e778 undefined4
// GLOBAL DAT_0045e77c undefined4
// GLOBAL DAT_0045e780 undefined4
// GLOBAL DAT_0045e784 undefined4
// GLOBAL DAT_0045e788 undefined4
// GLOBAL DAT_0045e78c undefined4
// GLOBAL DAT_0045e790 undefined4
// GLOBAL DAT_0045e794 undefined4
// GLOBAL DAT_0045e798 undefined4
// GLOBAL DAT_0045e79c undefined4

void FUN_00339a90(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9110,2);
      FUN_00100230(&gp0xffff9108,2);
    }
    else {
      FUN_00100228(&gp0xffff9108);
      FUN_00100258(&gp0xffff9110);
      DAT_0045e760 = 0x3fc90fdb;
      DAT_0045e764 = 0xbe22f983;
      DAT_0045e768 = 0x4b400000;
      DAT_0045e76c = uStack_44;
      DAT_0045e770 = 0xbe22f983;
      DAT_0045e774 = 0x3f000000;
      DAT_0045e778 = 0x3e800000;
      DAT_0045e77c = uStack_34;
      DAT_0045e780 = 0xc2992661;
      DAT_0045e784 = 0xc2255de0;
      DAT_0045e788 = 0x42a33457;
      DAT_0045e78c = uStack_24;
      DAT_0045e790 = 0x421ed7b7;
      DAT_0045e794 = 0x40c90fda;
      DAT_0045e798 = 0;
      DAT_0045e79c = uStack_14;
    }
  }
  return;
}


// ==== FUN_00339c48 @ 00339c48 ====

void FUN_00339c48(void)

{
  FUN_00339a90(0,0xffff);
  return;
}


// ==== FUN_00339c68 @ 00339c68 ====
// GLOBAL DAT_0040e380 float

/* WARNING: Removing unreachable block (ram,0x0033a078) */

int FUN_00339c68(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined1 (*pauVar15) [16];
  int iVar16;
  undefined1 in_a1_qw [16];
  int iVar17;
  undefined1 in_vf0 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  
  piVar14 = (int *)param_1;
  bVar3 = false;
  piVar14[0x33] = 0;
  piVar14[0x36] = 0;
  *(undefined1 *)(piVar14 + 0x3c) = 0;
LAB_0033a208:
  iVar5 = piVar14[3];
  uVar9 = (ulong)iVar5;
  in_a1_qw._0_8_ = uVar9;
  if ((((ulong)(long)piVar14[2] <= uVar9) && (piVar14[0x10] == 0)) && (piVar14[0x30] == 0)) {
    return piVar14[0x33];
  }
  if (bVar3) {
    return piVar14[0x33];
  }
  if (piVar14[0x10] == 0) {
    if (piVar14[0x30] == 0) {
      if ((ulong)(long)piVar14[2] <= uVar9) {
LAB_00339f00:
        iVar5 = piVar14[0x10];
        goto LAB_00339f04;
      }
      iVar17 = *(int *)(iVar5 * 4 + *piVar14);
      if ((*(uint *)(iVar17 + 0x5c) & 1) != 0) {
        if (piVar14[1] == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = *(int **)(iVar5 * 4 + piVar14[1]);
        }
        (**(code **)(*(int *)(iVar17 + 0x58) + 8))
                  (iVar17 + *(short *)(*(int *)(iVar17 + 0x58) + 4),piVar6,0,&uStack_150);
        in_a1_qw = *(undefined1 (*) [16])(piVar14 + 8);
        auVar19._4_4_ = uStack_14c;
        auVar19._0_4_ = uStack_150;
        auVar19._8_4_ = uStack_148;
        auVar19._12_4_ = uStack_144;
        auVar18._4_4_ = uStack_14c;
        auVar18._0_4_ = uStack_150;
        auVar18._8_4_ = uStack_148;
        auVar18._12_4_ = uStack_144;
        auVar24 = _pand(*(undefined1 (*) [16])(piVar14 + 4),auStack_140);
        auVar20 = _pcgtw(auStack_140,*(undefined1 (*) [16])(piVar14 + 4));
        auVar20 = _pxor(auVar20,auVar24);
        auVar24 = _pand(auVar18,in_a1_qw);
        auVar18 = _pcgtw(in_a1_qw,auVar19);
        auVar18 = _pxor(auVar18,auVar24);
        auVar18 = _pand(auVar20,auVar18);
        auVar19 = _prot3w(auVar18);
        if ((long)(auVar19._0_8_ & auVar18._0_8_ & auVar18._0_8_ << 0x20) < 0) {
          if (**(int **)(iVar17 + 0x58) == 5) {
            if ((uint)piVar14[0x31] <= (uint)piVar14[0x30]) goto LAB_00339e44;
            piVar7 = (int *)(piVar14[0x30] * 0x80 + piVar14[0xc]);
            *piVar7 = iVar17;
            if (piVar6 == (int *)0x0) {
              piVar7[1] = 0;
            }
            else {
              iVar5 = piVar6[1];
              iVar17 = piVar6[2];
              iVar11 = piVar6[3];
              piVar7[4] = *piVar6;
              piVar7[5] = iVar5;
              piVar7[6] = iVar17;
              piVar7[7] = iVar11;
              iVar5 = piVar6[5];
              iVar17 = piVar6[6];
              iVar11 = piVar6[7];
              piVar7[8] = piVar6[4];
              piVar7[9] = iVar5;
              piVar7[10] = iVar17;
              piVar7[0xb] = iVar11;
              iVar5 = piVar6[9];
              iVar17 = piVar6[10];
              iVar11 = piVar6[0xb];
              piVar7[0xc] = piVar6[8];
              piVar7[0xd] = iVar5;
              piVar7[0xe] = iVar17;
              piVar7[0xf] = iVar11;
              iVar5 = piVar6[0xd];
              iVar17 = piVar6[0xe];
              iVar11 = piVar6[0xf];
              piVar7[0x10] = piVar6[0xc];
              piVar7[0x11] = iVar5;
              piVar7[0x12] = iVar17;
              piVar7[0x13] = iVar11;
              iVar5 = piVar14[0x30] * 0x80 + piVar14[0xc];
              *(int *)(iVar5 + 4) = iVar5 + 0x10;
            }
            in_a1_qw._0_8_ = 1;
            iVar5 = piVar14[0x30] * 0x80 + piVar14[0xc];
            *(undefined4 *)(iVar5 + 0x50) = uStack_150;
            *(undefined4 *)(iVar5 + 0x54) = uStack_14c;
            *(undefined4 *)(iVar5 + 0x58) = uStack_148;
            *(undefined4 *)(iVar5 + 0x5c) = uStack_144;
            *(int *)(iVar5 + 0x60) = auStack_140._0_4_;
            *(int *)(iVar5 + 100) = auStack_140._4_4_;
            *(int *)(iVar5 + 0x68) = auStack_140._8_4_;
            *(int *)(iVar5 + 0x6c) = auStack_140._12_4_;
            iVar5 = piVar14[0xc];
            *(undefined4 *)(piVar14[0x30] * 0x80 + iVar5 + 0x70) = 0;
            *(undefined1 *)(piVar14[0x30] * 0x80 + iVar5 + 0x74) = 0;
            piVar14[0x30] = piVar14[0x30] + 1;
          }
          else if ((uint)piVar14[0x33] < (uint)piVar14[0x34]) {
            piVar7 = (int *)(piVar14[0x33] * 0x80 + piVar14[0x32]);
            *piVar7 = iVar17;
            if (piVar6 == (int *)0x0) {
              piVar7[1] = 0;
            }
            else {
              iVar5 = piVar6[1];
              iVar17 = piVar6[2];
              iVar11 = piVar6[3];
              piVar7[4] = *piVar6;
              piVar7[5] = iVar5;
              piVar7[6] = iVar17;
              piVar7[7] = iVar11;
              iVar5 = piVar6[5];
              iVar17 = piVar6[6];
              iVar11 = piVar6[7];
              piVar7[8] = piVar6[4];
              piVar7[9] = iVar5;
              piVar7[10] = iVar17;
              piVar7[0xb] = iVar11;
              iVar5 = piVar6[9];
              iVar17 = piVar6[10];
              iVar11 = piVar6[0xb];
              piVar7[0xc] = piVar6[8];
              piVar7[0xd] = iVar5;
              piVar7[0xe] = iVar17;
              piVar7[0xf] = iVar11;
              iVar5 = piVar6[0xd];
              iVar17 = piVar6[0xe];
              iVar11 = piVar6[0xf];
              piVar7[0x10] = piVar6[0xc];
              piVar7[0x11] = iVar5;
              piVar7[0x12] = iVar17;
              piVar7[0x13] = iVar11;
              iVar5 = piVar14[0x33] * 0x80 + piVar14[0x32];
              *(int *)(iVar5 + 4) = iVar5 + 0x10;
            }
            in_a1_qw._0_8_ = 1;
            iVar5 = piVar14[0x33] * 0x80 + piVar14[0x32];
            *(undefined4 *)(iVar5 + 0x50) = uStack_150;
            *(undefined4 *)(iVar5 + 0x54) = uStack_14c;
            *(undefined4 *)(iVar5 + 0x58) = uStack_148;
            *(undefined4 *)(iVar5 + 0x5c) = uStack_144;
            *(int *)(iVar5 + 0x60) = auStack_140._0_4_;
            *(int *)(iVar5 + 100) = auStack_140._4_4_;
            *(int *)(iVar5 + 0x68) = auStack_140._8_4_;
            *(int *)(iVar5 + 0x6c) = auStack_140._12_4_;
            iVar5 = piVar14[0x32];
            *(undefined4 *)(piVar14[0x33] * 0x80 + iVar5 + 0x70) = 0;
            *(undefined1 *)(piVar14[0x33] * 0x80 + iVar5 + 0x74) = 0;
            piVar14[0x33] = piVar14[0x33] + 1;
          }
          else {
LAB_00339e44:
            auVar20._8_8_ = 0;
            auVar20._0_8_ = in_a1_qw._8_8_;
            in_a1_qw = auVar20 << 0x40;
          }
        }
        piVar14[3] = piVar14[3] + 1;
        goto LAB_00339f00;
      }
      piVar14[3] = iVar5 + 1;
      goto LAB_0033a208;
    }
    iVar5 = piVar14[0x10];
LAB_00339f04:
    if (iVar5 == 0) {
      iVar5 = piVar14[0x30] + -1;
      if (piVar14[0x30] != 0) {
        piVar14[0x30] = iVar5;
        pauVar10 = (undefined1 (*) [16])(iVar5 * 0x80 + piVar14[0xc]);
        piVar6 = piVar14 + 0x10;
        pauVar15 = pauVar10 + 8;
        do {
          in_a1_qw = *pauVar10;
          uVar1 = *(undefined8 *)pauVar10[1];
          iVar5 = *(int *)(pauVar10[1] + 8);
          iVar17 = *(int *)(pauVar10[1] + 0xc);
          *piVar6 = in_a1_qw._0_4_;
          piVar6[1] = in_a1_qw._4_4_;
          piVar6[2] = in_a1_qw._8_4_;
          piVar6[3] = in_a1_qw._12_4_;
          piVar6[4] = (int)uVar1;
          piVar6[5] = (int)((ulong)uVar1 >> 0x20);
          piVar6[6] = iVar5;
          piVar6[7] = iVar17;
          pauVar10 = pauVar10 + 2;
          piVar6 = piVar6 + 8;
        } while (pauVar10 != pauVar15);
        uVar4 = (undefined1)piVar14[0x2d];
        goto LAB_00339f50;
      }
      goto LAB_0033a208;
    }
    uVar4 = (undefined1)piVar14[0x2d];
  }
  else {
    uVar4 = (undefined1)piVar14[0x2d];
  }
LAB_00339f50:
  pauVar10 = (undefined1 (*) [16])piVar14[0x10];
  *(undefined1 *)(piVar14 + 0x3c) = uVar4;
  iVar5 = piVar14[0x2c];
  piVar6 = *(int **)(pauVar10[5] + 8);
  piVar14[0x3b] = iVar5;
  if (*piVar6 == 5) {
    pauVar15 = (undefined1 (*) [16])piVar14[0x11];
    if (pauVar15 == (undefined1 (*) [16])0x0) {
      auVar19 = _lqc2(*pauVar10);
      auVar18 = _qmtc2(0x3f800000);
      auVar18 = _vsubbc(auVar19,auVar18);
      auVar18 = _qmfc2(auVar18._0_4_);
      in_a1_qw._0_8_ = (long)(int)auStack_70;
      bVar2 = false;
      fStack_60 = ABS(auVar18._0_4_);
      if (fStack_60 < 1.1920929e-07) {
        auVar19 = _qmtc2(0x3f800000);
        auVar18 = _lqc2(pauVar10[1]);
        auVar18 = _vsubbc(auVar18,auVar19);
        auStack_70 = _sqc2(auVar18);
        fStack_5c = ABS((float)auStack_70._4_4_);
        if (fStack_5c < 1.1920929e-07) {
          auVar18 = _lqc2(pauVar10[3]);
          auVar19 = _vmul(auVar18,auVar18);
          auVar18 = _vaddbc(auVar19,auVar19);
          auVar18 = _vaddbc(auVar18,auVar19);
          in_a1_qw = _qmfc2(auVar18._0_4_);
          if (in_a1_qw._0_4_ < DAT_0040e380) {
            bVar2 = true;
          }
        }
        if (bVar2) {
          pauVar10 = (undefined1 (*) [16])0x0;
        }
      }
    }
    else {
      auVar20 = _lqc2(pauVar15[1]);
      auVar19 = _lqc2(pauVar15[2]);
      auVar18 = _lqc2(*pauVar10);
      auVar24 = _lqc2(*pauVar15);
      _vmulabc(auVar24,auVar18);
      _vmaddabc(auVar20,auVar18);
      auVar25 = _vmaddbc(auVar19,auVar18);
      auStack_b0 = _sqc2(auVar25);
      auVar20 = _lqc2(pauVar15[1]);
      auVar19 = _lqc2(pauVar15[2]);
      auVar18 = _lqc2(pauVar10[1]);
      auVar24 = _lqc2(*pauVar15);
      _vmulabc(auVar24,auVar18);
      _vmaddabc(auVar20,auVar18);
      auVar23 = _vmaddbc(auVar19,auVar18);
      auStack_a0 = _sqc2(auVar23);
      auVar20 = _lqc2(pauVar15[1]);
      auVar19 = _lqc2(pauVar15[2]);
      auVar18 = _lqc2(pauVar10[2]);
      auVar24 = _lqc2(*pauVar15);
      _vmulabc(auVar24,auVar18);
      _vmaddabc(auVar20,auVar18);
      auVar21 = _vmaddbc(auVar19,auVar18);
      auStack_90 = _sqc2(auVar21);
      auVar22 = _lqc2(pauVar15[3]);
      auVar24 = _lqc2(pauVar10[3]);
      auVar20 = _lqc2(*pauVar15);
      auVar19 = _lqc2(pauVar15[1]);
      auVar18 = _lqc2(pauVar15[2]);
      _vmulabc(auVar20,auVar24);
      _vmaddabc(auVar19,auVar24);
      _vmaddabc(auVar18,auVar24);
      auVar18 = _vmaddbc(auVar22,in_vf0);
      auStack_130 = _sqc2(auVar25);
      auStack_120 = _sqc2(auVar23);
      auStack_110 = _sqc2(auVar21);
      auStack_100 = _sqc2(auVar18);
      auStack_80 = _sqc2(auVar18);
      auStack_f0 = _sqc2(auVar25);
      auStack_e0 = _sqc2(auVar23);
      auStack_d0 = _sqc2(auVar21);
      auStack_c0 = _sqc2(auVar18);
      pauVar10 = &auStack_130;
    }
    in_a1_qw._0_8_ = param_1;
    iVar5 = *(int *)(*(int *)(piVar14[0x10] + 0x40) + 0x20);
    lVar8 = (**(code **)(iVar5 + 0x28))
                      (*(int *)(piVar14[0x10] + 0x40) + (int)*(short *)(iVar5 + 0x24),param_1,
                       pauVar10);
    if (lVar8 == 0) {
      bVar3 = true;
    }
    else {
      piVar14[0x3a] = 0;
      piVar14[0x38] = 0;
      piVar14[0x10] = 0;
    }
  }
  else {
    iVar17 = piVar14[0x2d];
    piVar6 = (int *)piVar14[0x11];
    if ((uint)piVar14[0x33] < (uint)piVar14[0x34]) {
      piVar7 = (int *)(piVar14[0x33] * 0x80 + piVar14[0x32]);
      *piVar7 = (int)pauVar10;
      if (piVar6 == (int *)0x0) {
        piVar7[1] = 0;
      }
      else {
        iVar11 = piVar6[1];
        iVar12 = piVar6[2];
        iVar13 = piVar6[3];
        piVar7[4] = *piVar6;
        piVar7[5] = iVar11;
        piVar7[6] = iVar12;
        piVar7[7] = iVar13;
        iVar11 = piVar6[5];
        iVar12 = piVar6[6];
        iVar13 = piVar6[7];
        piVar7[8] = piVar6[4];
        piVar7[9] = iVar11;
        piVar7[10] = iVar12;
        piVar7[0xb] = iVar13;
        iVar11 = piVar6[9];
        iVar12 = piVar6[10];
        iVar13 = piVar6[0xb];
        piVar7[0xc] = piVar6[8];
        piVar7[0xd] = iVar11;
        piVar7[0xe] = iVar12;
        piVar7[0xf] = iVar13;
        iVar11 = piVar6[0xd];
        iVar12 = piVar6[0xe];
        iVar13 = piVar6[0xf];
        piVar7[0x10] = piVar6[0xc];
        piVar7[0x11] = iVar11;
        piVar7[0x12] = iVar12;
        piVar7[0x13] = iVar13;
        iVar11 = piVar14[0x33] * 0x80 + piVar14[0x32];
        *(int *)(iVar11 + 4) = iVar11 + 0x10;
      }
      in_a1_qw._0_8_ = 1;
      iVar11 = piVar14[0x25];
      iVar12 = piVar14[0x26];
      iVar13 = piVar14[0x27];
      iVar16 = piVar14[0x33] * 0x80 + piVar14[0x32];
      *(int *)(iVar16 + 0x50) = piVar14[0x24];
      *(int *)(iVar16 + 0x54) = iVar11;
      *(int *)(iVar16 + 0x58) = iVar12;
      *(int *)(iVar16 + 0x5c) = iVar13;
      auVar18 = *(undefined1 (*) [16])(piVar14 + 0x28);
      *(int *)(iVar16 + 0x60) = auVar18._0_4_;
      *(int *)(iVar16 + 100) = auVar18._4_4_;
      *(int *)(iVar16 + 0x68) = auVar18._8_4_;
      *(int *)(iVar16 + 0x6c) = auVar18._12_4_;
      iVar11 = piVar14[0x32];
      *(int *)(piVar14[0x33] * 0x80 + iVar11 + 0x70) = iVar5;
      *(char *)(piVar14[0x33] * 0x80 + iVar11 + 0x74) = (char)iVar17;
      piVar14[0x33] = piVar14[0x33] + 1;
    }
    else {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = in_a1_qw._8_8_;
      in_a1_qw = auVar24 << 0x40;
    }
    if (in_a1_qw._0_8_ == 0) {
      bVar3 = true;
    }
    else {
      piVar14[0x10] = 0;
    }
  }
  goto LAB_0033a208;
}


// ==== FUN_0033a260 @ 0033a260 ====
// GLOBAL DAT_0045e7a0 undefined4
// GLOBAL DAT_0045e7a4 undefined4
// GLOBAL DAT_0045e7a8 undefined4
// GLOBAL DAT_0045e7ac undefined4
// GLOBAL DAT_0045e7b0 undefined4
// GLOBAL DAT_0045e7b4 undefined4
// GLOBAL DAT_0045e7b8 undefined4
// GLOBAL DAT_0045e7bc undefined4
// GLOBAL DAT_0045e7c0 undefined4
// GLOBAL DAT_0045e7c4 undefined4
// GLOBAL DAT_0045e7c8 undefined4
// GLOBAL DAT_0045e7cc undefined4
// GLOBAL DAT_0045e7d0 undefined4
// GLOBAL DAT_0045e7d4 undefined4
// GLOBAL DAT_0045e7d8 undefined4
// GLOBAL DAT_0045e7dc undefined4

void FUN_0033a260(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9120,2);
      FUN_00100230(&gp0xffff9118,2);
    }
    else {
      FUN_00100228(&gp0xffff9118);
      FUN_00100258(&gp0xffff9120);
      DAT_0045e7a0 = 0x3fc90fdb;
      DAT_0045e7a4 = 0xbe22f983;
      DAT_0045e7a8 = 0x4b400000;
      DAT_0045e7ac = uStack_44;
      DAT_0045e7b0 = 0xbe22f983;
      DAT_0045e7b4 = 0x3f000000;
      DAT_0045e7b8 = 0x3e800000;
      DAT_0045e7bc = uStack_34;
      DAT_0045e7c0 = 0xc2992661;
      DAT_0045e7c4 = 0xc2255de0;
      DAT_0045e7c8 = 0x42a33457;
      DAT_0045e7cc = uStack_24;
      DAT_0045e7d0 = 0x421ed7b7;
      DAT_0045e7d4 = 0x40c90fda;
      DAT_0045e7d8 = 0;
      DAT_0045e7dc = uStack_14;
    }
  }
  return;
}


// ==== FUN_0033a3b0 @ 0033a3b0 ====

undefined8 FUN_0033a3b0(undefined8 param_1,int param_2,int param_3)

{
  ((int *)param_1)[1] = 0x10;
  *(int *)param_1 = param_2 * 0x80 + param_3 * 0xe0 + 0x28e0;
  return param_1;
}


// ==== FUN_0033a3f0 @ 0033a3f0 ====

int FUN_0033a3f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = iVar1 + 0x100 + param_2 * 0x80;
    *(int *)(iVar1 + 0xc4) = param_2;
    *(int *)(iVar1 + 0xd0) = param_3;
    *(int *)(iVar1 + 0xdc) = param_3;
    iVar2 = param_3 * 0x60 + iVar3;
    *(int *)(iVar1 + 0x30) = iVar1 + 0x100;
    *(int *)(iVar1 + 0xd4) = iVar3;
    *(int *)(iVar1 + 200) = iVar2;
    *(int *)(iVar1 + 0xe4) = iVar2 + param_3 * 0x80;
  }
  return iVar1;
}


// ==== FUN_0033a468 @ 0033a468 ====

void FUN_0033a468(void)

{
  FUN_0033a260(0,0xffff);
  return;
}


// ==== FUN_0033a488 @ 0033a488 ====

uint FUN_0033a488(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  int iVar18;
  int *piVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined1 in_vf0 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  piVar19 = (int *)param_1;
  piVar19[5] = 0;
  piVar19[0x3a] = 0;
  piVar19[0x41] = 0;
  *(undefined1 *)(piVar19 + 0x42) = 0;
LAB_0033aa18:
  uVar9 = piVar19[3];
LAB_0033aa1c:
  do {
    if (uVar9 < (uint)piVar19[2]) {
      uVar9 = piVar19[5];
    }
    else if (piVar19[0x14] == 0) {
      if (piVar19[0x34] + piVar19[0x37] == 0) {
        return piVar19[5];
      }
      uVar9 = piVar19[5];
    }
    else {
      uVar9 = piVar19[5];
    }
    bVar6 = false;
    if ((uint)piVar19[6] <= uVar9) {
      return uVar9;
    }
    while( true ) {
      uVar9 = piVar19[3];
      if ((((uint)piVar19[2] <= uVar9) && (piVar19[0x14] == 0)) && (piVar19[0x34] == 0)) {
        iVar21 = piVar19[0x37];
        goto LAB_0033a8d0;
      }
      if (bVar6) break;
      if (piVar19[0x14] != 0) {
        uVar7 = (undefined1)piVar19[0x31];
        goto LAB_0033a6cc;
      }
      iVar21 = 0;
      if (piVar19[0x34] == 0) {
        if (uVar9 < (uint)piVar19[2]) {
          if (piVar19[1] == 0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            puVar12 = *(undefined8 **)(uVar9 * 4 + piVar19[1]);
          }
          iVar21 = *(int *)(piVar19[3] * 4 + *piVar19);
          if (**(int **)(iVar21 + 0x58) == 5) {
            if (piVar19[0x35] != 0) {
              piVar8 = (int *)piVar19[0x10];
              *piVar8 = iVar21;
              if (puVar12 == (undefined8 *)0x0) {
                piVar8[1] = 0;
              }
              else {
                uVar3 = *puVar12;
                iVar21 = *(int *)(puVar12 + 1);
                iVar18 = *(int *)((int)puVar12 + 0xc);
                piVar8[4] = (int)uVar3;
                piVar8[5] = (int)((ulong)uVar3 >> 0x20);
                piVar8[6] = iVar21;
                piVar8[7] = iVar18;
                uVar3 = puVar12[2];
                iVar21 = *(int *)(puVar12 + 3);
                iVar18 = *(int *)((int)puVar12 + 0x1c);
                piVar8[8] = (int)uVar3;
                piVar8[9] = (int)((ulong)uVar3 >> 0x20);
                piVar8[10] = iVar21;
                piVar8[0xb] = iVar18;
                uVar3 = puVar12[4];
                iVar21 = *(int *)(puVar12 + 5);
                iVar18 = *(int *)((int)puVar12 + 0x2c);
                piVar8[0xc] = (int)uVar3;
                piVar8[0xd] = (int)((ulong)uVar3 >> 0x20);
                piVar8[0xe] = iVar21;
                piVar8[0xf] = iVar18;
                uVar3 = puVar12[6];
                iVar21 = *(int *)(puVar12 + 7);
                iVar18 = *(int *)((int)puVar12 + 0x3c);
                piVar8[0x10] = (int)uVar3;
                piVar8[0x11] = (int)((ulong)uVar3 >> 0x20);
                piVar8[0x12] = iVar21;
                piVar8[0x13] = iVar18;
                iVar21 = piVar19[0x34] * 0x80 + piVar19[0x10];
                *(int *)(iVar21 + 4) = iVar21 + 0x10;
              }
              iVar21 = piVar19[0x10];
              *(undefined4 *)(piVar19[0x34] * 0x80 + iVar21 + 0x70) = 0;
              *(undefined1 *)(piVar19[0x34] * 0x80 + iVar21 + 0x74) = 0;
              piVar19[0x34] = piVar19[0x34] + 1;
            }
          }
          else if ((uint)piVar19[0x37] < (uint)piVar19[0x38]) {
            piVar8 = (int *)(piVar19[0x37] * 0x80 + piVar19[0x36]);
            *piVar8 = iVar21;
            if (puVar12 == (undefined8 *)0x0) {
              piVar8[1] = 0;
            }
            else {
              uVar3 = *puVar12;
              iVar21 = *(int *)(puVar12 + 1);
              iVar18 = *(int *)((int)puVar12 + 0xc);
              piVar8[4] = (int)uVar3;
              piVar8[5] = (int)((ulong)uVar3 >> 0x20);
              piVar8[6] = iVar21;
              piVar8[7] = iVar18;
              uVar3 = puVar12[2];
              iVar21 = *(int *)(puVar12 + 3);
              iVar18 = *(int *)((int)puVar12 + 0x1c);
              piVar8[8] = (int)uVar3;
              piVar8[9] = (int)((ulong)uVar3 >> 0x20);
              piVar8[10] = iVar21;
              piVar8[0xb] = iVar18;
              uVar3 = puVar12[4];
              iVar21 = *(int *)(puVar12 + 5);
              iVar18 = *(int *)((int)puVar12 + 0x2c);
              piVar8[0xc] = (int)uVar3;
              piVar8[0xd] = (int)((ulong)uVar3 >> 0x20);
              piVar8[0xe] = iVar21;
              piVar8[0xf] = iVar18;
              uVar3 = puVar12[6];
              iVar21 = *(int *)(puVar12 + 7);
              iVar18 = *(int *)((int)puVar12 + 0x3c);
              piVar8[0x10] = (int)uVar3;
              piVar8[0x11] = (int)((ulong)uVar3 >> 0x20);
              piVar8[0x12] = iVar21;
              piVar8[0x13] = iVar18;
              iVar21 = piVar19[0x37] * 0x80 + piVar19[0x36];
              *(int *)(iVar21 + 4) = iVar21 + 0x10;
            }
            iVar21 = piVar19[0x36];
            *(undefined4 *)(piVar19[0x37] * 0x80 + iVar21 + 0x70) = 0;
            *(undefined1 *)(piVar19[0x37] * 0x80 + iVar21 + 0x74) = 0;
            piVar19[0x37] = piVar19[0x37] + 1;
          }
          piVar19[3] = piVar19[3] + 1;
          iVar21 = piVar19[0x14];
        }
        else {
          iVar21 = piVar19[0x14];
        }
      }
      if (iVar21 != 0) {
        uVar7 = (undefined1)piVar19[0x31];
        goto LAB_0033a6cc;
      }
      iVar21 = piVar19[0x34] + -1;
      if (piVar19[0x34] != 0) {
        piVar19[0x34] = iVar21;
        puVar12 = (undefined8 *)(iVar21 * 0x80 + piVar19[0x10]);
        piVar8 = piVar19 + 0x14;
        puVar17 = puVar12 + 0x10;
        do {
          uVar3 = *puVar12;
          iVar21 = *(int *)(puVar12 + 1);
          iVar18 = *(int *)((int)puVar12 + 0xc);
          uVar4 = puVar12[2];
          iVar13 = *(int *)(puVar12 + 3);
          iVar15 = *(int *)((int)puVar12 + 0x1c);
          *piVar8 = (int)uVar3;
          piVar8[1] = (int)((ulong)uVar3 >> 0x20);
          piVar8[2] = iVar21;
          piVar8[3] = iVar18;
          piVar8[4] = (int)uVar4;
          piVar8[5] = (int)((ulong)uVar4 >> 0x20);
          piVar8[6] = iVar13;
          piVar8[7] = iVar15;
          puVar12 = puVar12 + 4;
          piVar8 = piVar8 + 8;
        } while (puVar12 != puVar17);
        uVar7 = (undefined1)piVar19[0x31];
LAB_0033a6cc:
        pauVar1 = (undefined1 (*) [16])piVar19[0x14];
        *(undefined1 *)(piVar19 + 0x42) = uVar7;
        iVar21 = piVar19[0x30];
        piVar8 = *(int **)(pauVar1[5] + 8);
        piVar19[0x41] = iVar21;
        if (*piVar8 == 5) {
          pauVar2 = (undefined1 (*) [16])piVar19[0x15];
          if (pauVar2 != (undefined1 (*) [16])0x0) {
            auVar24 = _lqc2(pauVar2[1]);
            auVar23 = _lqc2(pauVar2[2]);
            auVar22 = _lqc2(*pauVar1);
            auVar27 = _lqc2(*pauVar2);
            _vmulabc(auVar27,auVar22);
            _vmaddabc(auVar24,auVar22);
            auVar28 = _vmaddbc(auVar23,auVar22);
            auStack_d0 = _sqc2(auVar28);
            auVar24 = _lqc2(pauVar2[1]);
            auVar23 = _lqc2(pauVar2[2]);
            auVar22 = _lqc2(pauVar1[1]);
            auVar27 = _lqc2(*pauVar2);
            _vmulabc(auVar27,auVar22);
            _vmaddabc(auVar24,auVar22);
            auVar25 = _vmaddbc(auVar23,auVar22);
            auStack_c0 = _sqc2(auVar25);
            auVar24 = _lqc2(pauVar2[1]);
            auVar23 = _lqc2(pauVar2[2]);
            auVar22 = _lqc2(pauVar1[2]);
            auVar27 = _lqc2(*pauVar2);
            _vmulabc(auVar27,auVar22);
            _vmaddabc(auVar24,auVar22);
            auVar27 = _vmaddbc(auVar23,auVar22);
            auStack_b0 = _sqc2(auVar27);
            auVar29 = _lqc2(pauVar2[3]);
            auVar26 = _lqc2(pauVar1[3]);
            auVar23 = _lqc2(*pauVar2);
            auVar24 = _lqc2(pauVar2[1]);
            auVar22 = _lqc2(pauVar2[2]);
            _vmulabc(auVar23,auVar26);
            _vmaddabc(auVar24,auVar26);
            _vmaddabc(auVar22,auVar26);
            auVar22 = _vmaddbc(auVar29,in_vf0);
            auStack_150 = _sqc2(auVar28);
            auStack_140 = _sqc2(auVar25);
            auStack_130 = _sqc2(auVar27);
            auStack_120 = _sqc2(auVar22);
            auStack_a0 = _sqc2(auVar22);
            auStack_110 = _sqc2(auVar28);
            auStack_100 = _sqc2(auVar25);
            auStack_f0 = _sqc2(auVar27);
            auStack_e0 = _sqc2(auVar22);
            pauVar1 = &auStack_150;
          }
          iVar21 = *(int *)(*(int *)(piVar19[0x14] + 0x40) + 0x20);
          lVar10 = (**(code **)(iVar21 + 0x20))
                             (*(int *)(piVar19[0x14] + 0x40) + (int)*(short *)(iVar21 + 0x1c),
                              param_1,pauVar1);
          if (lVar10 == 0) {
            bVar6 = true;
          }
          else {
            piVar19[0x3e] = 0;
            piVar19[0x3c] = 0;
            piVar19[0x14] = 0;
          }
        }
        else {
          iVar18 = piVar19[0x31];
          puVar12 = (undefined8 *)piVar19[0x15];
          if ((uint)piVar19[0x37] < (uint)piVar19[0x38]) {
            piVar8 = (int *)(piVar19[0x37] * 0x80 + piVar19[0x36]);
            *piVar8 = (int)pauVar1;
            if (puVar12 == (undefined8 *)0x0) {
              piVar8[1] = 0;
            }
            else {
              uVar3 = *puVar12;
              iVar13 = *(int *)(puVar12 + 1);
              iVar15 = *(int *)((int)puVar12 + 0xc);
              piVar8[4] = (int)uVar3;
              piVar8[5] = (int)((ulong)uVar3 >> 0x20);
              piVar8[6] = iVar13;
              piVar8[7] = iVar15;
              iVar13 = *(int *)((int)puVar12 + 0x14);
              iVar15 = *(int *)(puVar12 + 3);
              iVar11 = *(int *)((int)puVar12 + 0x1c);
              piVar8[8] = *(int *)(puVar12 + 2);
              piVar8[9] = iVar13;
              piVar8[10] = iVar15;
              piVar8[0xb] = iVar11;
              iVar13 = *(int *)((int)puVar12 + 0x24);
              iVar15 = *(int *)(puVar12 + 5);
              iVar11 = *(int *)((int)puVar12 + 0x2c);
              piVar8[0xc] = *(int *)(puVar12 + 4);
              piVar8[0xd] = iVar13;
              piVar8[0xe] = iVar15;
              piVar8[0xf] = iVar11;
              iVar13 = *(int *)((int)puVar12 + 0x34);
              iVar15 = *(int *)(puVar12 + 7);
              iVar11 = *(int *)((int)puVar12 + 0x3c);
              piVar8[0x10] = *(int *)(puVar12 + 6);
              piVar8[0x11] = iVar13;
              piVar8[0x12] = iVar15;
              piVar8[0x13] = iVar11;
              iVar13 = piVar19[0x37] * 0x80 + piVar19[0x36];
              *(int *)(iVar13 + 4) = iVar13 + 0x10;
            }
            bVar5 = true;
            iVar13 = piVar19[0x36];
            *(int *)(piVar19[0x37] * 0x80 + iVar13 + 0x70) = iVar21;
            *(char *)(piVar19[0x37] * 0x80 + iVar13 + 0x74) = (char)iVar18;
            piVar19[0x37] = piVar19[0x37] + 1;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            piVar19[0x14] = 0;
          }
          else {
            bVar6 = true;
          }
        }
      }
    }
    iVar21 = piVar19[0x37];
LAB_0033a8d0:
    if (iVar21 == 0) {
      uVar9 = piVar19[3];
      goto LAB_0033aa1c;
    }
    uVar9 = piVar19[5];
    if (uVar9 < (uint)piVar19[6]) {
      while( true ) {
        iVar21 = iVar21 + -1;
        piVar19[0x37] = iVar21;
        piVar8 = (int *)(iVar21 * 0x80 + piVar19[0x36]);
        iVar18 = *piVar8;
        puVar12 = (undefined8 *)piVar8[1];
        puVar20 = (undefined4 *)(piVar19[4] + uVar9 * 0xd0);
        if ((*(uint *)(iVar18 + 0x5c) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*(int *)(iVar18 + 0x58) + 0x28))
                             (iVar18 + *(short *)(*(int *)(iVar18 + 0x58) + 0x24),piVar19 + 8,
                              piVar19 + 0xc,puVar12,puVar20);
        }
        if (lVar10 == 0) {
          iVar21 = piVar19[0x37];
        }
        else {
          if (piVar19[0x40] == 0) {
            iVar13 = piVar19[3];
          }
          else {
            if ((float)puVar20[0x10] < (float)piVar19[0x3f]) {
              piVar19[0x3f] = puVar20[0x10];
            }
            iVar13 = piVar19[3];
          }
          uVar14 = *(undefined4 *)(iVar13 * 4 + *piVar19 + -4);
          puVar20[0x14] = iVar18;
          *puVar20 = uVar14;
          if (puVar12 == (undefined8 *)0x0) {
            puVar20[0x15] = 0;
          }
          else {
            uVar3 = *puVar12;
            uVar14 = *(undefined4 *)(puVar12 + 1);
            uVar16 = *(undefined4 *)((int)puVar12 + 0xc);
            puVar20[0x18] = (int)uVar3;
            puVar20[0x19] = (int)((ulong)uVar3 >> 0x20);
            puVar20[0x1a] = uVar14;
            puVar20[0x1b] = uVar16;
            uVar3 = puVar12[2];
            uVar14 = *(undefined4 *)(puVar12 + 3);
            uVar16 = *(undefined4 *)((int)puVar12 + 0x1c);
            puVar20[0x1c] = (int)uVar3;
            puVar20[0x1d] = (int)((ulong)uVar3 >> 0x20);
            puVar20[0x1e] = uVar14;
            puVar20[0x1f] = uVar16;
            uVar3 = puVar12[4];
            uVar14 = *(undefined4 *)(puVar12 + 5);
            uVar16 = *(undefined4 *)((int)puVar12 + 0x2c);
            puVar20[0x20] = (int)uVar3;
            puVar20[0x21] = (int)((ulong)uVar3 >> 0x20);
            puVar20[0x22] = uVar14;
            puVar20[0x23] = uVar16;
            uVar3 = puVar12[6];
            uVar14 = *(undefined4 *)(puVar12 + 7);
            uVar16 = *(undefined4 *)((int)puVar12 + 0x3c);
            puVar20[0x15] = puVar20 + 0x18;
            puVar20[0x24] = (int)uVar3;
            puVar20[0x25] = (int)((ulong)uVar3 >> 0x20);
            puVar20[0x26] = uVar14;
            puVar20[0x27] = uVar16;
          }
          puVar20[0x30] = *(undefined4 *)(iVar21 * 0x80 + piVar19[0x36] + 0x70);
          piVar19[5] = piVar19[5] + 1;
          iVar21 = piVar19[0x37];
        }
        if (iVar21 == 0) break;
        uVar9 = piVar19[5];
        if ((uint)piVar19[6] <= uVar9) goto LAB_0033aa18;
      }
      uVar9 = piVar19[3];
    }
    else {
      uVar9 = piVar19[3];
    }
  } while( true );
}


// ==== FUN_0033aa98 @ 0033aa98 ====

undefined4 FUN_0033aa98(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  bool bVar21;
  undefined8 uStack_120;
  float afStack_118 [46];
  undefined8 auStack_60 [2];
  
  bVar1 = false;
  iVar20 = (int)param_1;
  *(undefined4 *)(iVar20 + 0x100) = 2;
  uVar3 = 5;
  if (*(uint *)(iVar20 + 0x1c) < 6) {
    uVar3 = *(uint *)(iVar20 + 0x1c);
  }
  *(uint *)(iVar20 + 0x18) = uVar3;
  while( true ) {
    bVar21 = false;
    if ((((*(int *)(iVar20 + 0xc) == *(int *)(iVar20 + 8)) && (*(int *)(iVar20 + 0x50) == 0)) &&
        (*(int *)(iVar20 + 0xd0) == 0)) && (bVar21 = true, *(int *)(iVar20 + 0xdc) != 0)) {
      bVar21 = false;
    }
    if (bVar21) break;
    uVar3 = FUN_0033a488(param_1);
    uVar12 = 0;
    if (uVar3 != 0) {
      do {
        if (bVar1) {
          puVar5 = (undefined8 *)(uVar12 * 0xd0 + *(int *)(iVar20 + 0x10));
          if (*(float *)(puVar5 + 8) < afStack_118[0xe]) {
            puVar4 = &uStack_120;
            puVar7 = puVar5;
            do {
              puVar6 = puVar7;
              puVar10 = (undefined4 *)puVar4;
              uVar13 = *(undefined4 *)((int)puVar6 + 4);
              uVar14 = *(undefined4 *)(puVar6 + 1);
              uVar15 = *(undefined4 *)((int)puVar6 + 0xc);
              uVar16 = *(undefined4 *)(puVar6 + 2);
              uVar17 = *(undefined4 *)((int)puVar6 + 0x14);
              uVar18 = *(undefined4 *)(puVar6 + 3);
              uVar19 = *(undefined4 *)((int)puVar6 + 0x1c);
              *puVar10 = *(undefined4 *)puVar6;
              puVar10[1] = uVar13;
              puVar10[2] = uVar14;
              puVar10[3] = uVar15;
              puVar10[4] = uVar16;
              puVar10[5] = uVar17;
              puVar10[6] = uVar18;
              puVar10[7] = uVar19;
              puVar7 = puVar6 + 4;
              puVar4 = (undefined8 *)(puVar10 + 8);
            } while (puVar7 != puVar5 + 0x18);
            uVar2 = *puVar7;
            uVar13 = *(undefined4 *)(puVar6 + 5);
            uVar14 = *(undefined4 *)((int)puVar6 + 0x2c);
            puVar10[8] = (int)uVar2;
            puVar10[9] = (int)((ulong)uVar2 >> 0x20);
            puVar10[10] = uVar13;
            puVar10[0xb] = uVar14;
            *(float *)(iVar20 + 0xfc) = afStack_118[0xe];
          }
        }
        else {
          bVar1 = true;
          puVar8 = (undefined4 *)(uVar12 * 0xd0 + *(int *)(iVar20 + 0x10));
          puVar5 = &uStack_120;
          puVar10 = puVar8;
          do {
            puVar9 = puVar10;
            puVar11 = (undefined4 *)puVar5;
            uVar17 = puVar9[1];
            uVar18 = puVar9[2];
            uVar19 = puVar9[3];
            uVar13 = puVar9[4];
            uVar14 = puVar9[5];
            uVar15 = puVar9[6];
            uVar16 = puVar9[7];
            *puVar11 = *puVar9;
            puVar11[1] = uVar17;
            puVar11[2] = uVar18;
            puVar11[3] = uVar19;
            puVar11[4] = uVar13;
            puVar11[5] = uVar14;
            puVar11[6] = uVar15;
            puVar11[7] = uVar16;
            puVar10 = puVar9 + 8;
            puVar5 = (undefined8 *)(puVar11 + 8);
          } while (puVar10 != puVar8 + 0x30);
          uVar13 = puVar9[9];
          uVar14 = puVar9[10];
          uVar15 = puVar9[0xb];
          puVar11[8] = *puVar10;
          puVar11[9] = uVar13;
          puVar11[10] = uVar14;
          puVar11[0xb] = uVar15;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar3);
    }
  }
  if (bVar1) {
    puVar5 = &uStack_120;
    puVar10 = *(undefined4 **)(iVar20 + 0x10);
    do {
      puVar8 = puVar10;
      puVar4 = puVar5;
      uVar13 = *(undefined4 *)((int)puVar4 + 4);
      uVar14 = *(undefined4 *)(puVar4 + 1);
      uVar15 = *(undefined4 *)((int)puVar4 + 0xc);
      uVar16 = *(undefined4 *)(puVar4 + 2);
      uVar17 = *(undefined4 *)((int)puVar4 + 0x14);
      uVar18 = *(undefined4 *)(puVar4 + 3);
      uVar19 = *(undefined4 *)((int)puVar4 + 0x1c);
      *puVar8 = *(undefined4 *)puVar4;
      puVar8[1] = uVar13;
      puVar8[2] = uVar14;
      puVar8[3] = uVar15;
      puVar8[4] = uVar16;
      puVar8[5] = uVar17;
      puVar8[6] = uVar18;
      puVar8[7] = uVar19;
      puVar5 = puVar4 + 4;
      puVar10 = puVar8 + 8;
    } while (puVar5 != auStack_60);
    uVar2 = *puVar5;
    uVar13 = *(undefined4 *)(puVar4 + 5);
    uVar14 = *(undefined4 *)((int)puVar4 + 0x2c);
    puVar8[8] = (int)uVar2;
    puVar8[9] = (int)((ulong)uVar2 >> 0x20);
    puVar8[10] = uVar13;
    puVar8[0xb] = uVar14;
    uVar13 = *(undefined4 *)(iVar20 + 0x10);
  }
  else {
    uVar13 = 0;
  }
  return uVar13;
}


// ==== FUN_0033ac48 @ 0033ac48 ====
// GLOBAL DAT_0045e7e0 undefined4
// GLOBAL DAT_0045e7e4 undefined4
// GLOBAL DAT_0045e7e8 undefined4
// GLOBAL DAT_0045e7ec undefined4
// GLOBAL DAT_0045e7f0 undefined4
// GLOBAL DAT_0045e7f4 undefined4
// GLOBAL DAT_0045e7f8 undefined4
// GLOBAL DAT_0045e7fc undefined4
// GLOBAL DAT_0045e800 undefined4
// GLOBAL DAT_0045e804 undefined4
// GLOBAL DAT_0045e808 undefined4
// GLOBAL DAT_0045e80c undefined4
// GLOBAL DAT_0045e810 undefined4
// GLOBAL DAT_0045e814 undefined4
// GLOBAL DAT_0045e818 undefined4
// GLOBAL DAT_0045e81c undefined4

void FUN_0033ac48(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9130,2);
      FUN_00100230(&gp0xffff9128,2);
    }
    else {
      FUN_00100228(&gp0xffff9128);
      FUN_00100258(&gp0xffff9130);
      DAT_0045e7e0 = 0x3fc90fdb;
      DAT_0045e7e4 = 0xbe22f983;
      DAT_0045e7e8 = 0x4b400000;
      DAT_0045e7ec = uStack_44;
      DAT_0045e7f0 = 0xbe22f983;
      DAT_0045e7f4 = 0x3f000000;
      DAT_0045e7f8 = 0x3e800000;
      DAT_0045e7fc = uStack_34;
      DAT_0045e800 = 0xc2992661;
      DAT_0045e804 = 0xc2255de0;
      DAT_0045e808 = 0x42a33457;
      DAT_0045e80c = uStack_24;
      DAT_0045e810 = 0x421ed7b7;
      DAT_0045e814 = 0x40c90fda;
      DAT_0045e818 = 0;
      DAT_0045e81c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0033ad90 @ 0033ad90 ====

undefined8 FUN_0033ad90(undefined8 param_1,int param_2,int param_3)

{
  ((int *)param_1)[1] = 0x10;
  *(int *)param_1 = param_2 * 0x80 + param_3 * 0x1b0 + 0x2990;
  return param_1;
}


// ==== FUN_0033add0 @ 0033add0 ====

int FUN_0033add0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = iVar1 + 0x110 + param_2 * 0x80;
    iVar2 = iVar3 + param_3 * 0x80;
    *(int *)(iVar1 + 0xd4) = param_2;
    *(int *)(iVar1 + 0xe0) = param_3;
    iVar4 = param_3 * 0x60 + iVar2;
    *(int *)(iVar1 + 0x1c) = param_3;
    *(int *)(iVar1 + 0xec) = param_3;
    *(int *)(iVar1 + 0x40) = iVar1 + 0x110;
    *(int *)(iVar1 + 0xd8) = iVar3;
    *(int *)(iVar1 + 0xe4) = iVar2;
    *(int *)(iVar1 + 0x10) = iVar4;
    *(int *)(iVar1 + 0xf4) = param_3 * 0xd0 + iVar4;
  }
  return iVar1;
}


// ==== FUN_0033ae40 @ 0033ae40 ====

void FUN_0033ae40(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  FUN_0033a488();
  return;
}


// ==== FUN_0033ae68 @ 0033ae68 ====

undefined4 FUN_0033ae68(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x100) = 1;
  lVar2 = FUN_0033a488();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}


// ==== FUN_0033aea8 @ 0033aea8 ====

void FUN_0033aea8(void)

{
  FUN_0033ac48(1,0xffff);
  return;
}


// ==== FUN_0033aec8 @ 0033aec8 ====

void FUN_0033aec8(void)

{
  FUN_0033ac48(0,0xffff);
  return;
}


// ==== FUN_0033aee8 @ 0033aee8 ====

int FUN_0033aee8(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_60 [4];
  undefined4 uStack_50;
  undefined4 auStack_4c [3];
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = (int)param_3;
    *(int *)(iVar1 + 0x40) = iVar1 + 0x50;
    FUN_0033a3b0(aiStack_60);
    *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x20);
    iVar3 = *(int *)(iVar1 + 0x40) + aiStack_60[0];
    aiStack_60[0] = iVar3 + aiStack_60[0];
    *(undefined4 *)(iVar1 + 0x10) = 0;
    iVar2 = aiStack_60[0] + *(int *)(iVar1 + 0x20) * 8;
    *(int *)(iVar1 + 0x44) = iVar3;
    *(int *)(iVar1 + 0x18) = aiStack_60[0];
    *(int *)(iVar1 + 0x30) = iVar2;
    *(int *)(iVar1 + 0x2c) = (int)param_3 * 0x420 + iVar2;
  }
  uStack_50 = *(undefined4 *)(iVar1 + 0x40);
  FUN_0033a3f0(&uStack_50,param_2,param_3);
  auStack_4c[0] = *(undefined4 *)(iVar1 + 0x44);
  FUN_0033a3f0(auStack_4c,param_2,param_3);
  return iVar1;
}


// ==== FUN_0033afb0 @ 0033afb0 ====

int FUN_0033afb0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int *piStack_bc;
  
  iStack_140 = param_1[5];
  uStack_c4 = uStack_134;
  iVar15 = *(int *)(param_1[0xe] + 0x58);
  iStack_13c = iStack_140;
  iStack_138 = iStack_140;
  iStack_d0 = iStack_140;
  iStack_cc = iStack_140;
  iStack_c8 = iStack_140;
  (**(code **)(iVar15 + 8))(param_1[0xe] + (int)*(short *)(iVar15 + 4),param_1[0xf],0,auStack_1a0);
  iStack_e0 = *(int *)(param_1[0x10] + 200);
  uVar18 = param_1[8] << 3;
  auVar23 = _lqc2(auStack_190);
  auVar22 = _lqc2(auStack_1a0);
  iStack_dc = *(int *)(param_1[0x11] + 200);
  auVar20 = _vsubbc(auVar23,auVar22);
  auVar21 = _vsubbc(auVar23,auVar22);
  auVar24 = _vsubbc(auVar23,auVar22);
  auVar20 = _vmulbc(auVar20,auVar21);
  auVar20 = _vmulbc(auVar20,auVar24);
  auVar21 = _qmfc2(auVar20._0_4_);
  auVar20._4_4_ = iStack_cc;
  auVar20._0_4_ = iStack_d0;
  auVar20._8_4_ = iStack_c8;
  auVar20._12_4_ = uStack_c4;
  auVar20 = _lqc2(auVar20);
  auVar22 = _vsub(auVar22,auVar20);
  auVar20 = _vadd(auVar23,auVar20);
  auStack_1a0 = _sqc2(auVar22);
  auStack_190 = _sqc2(auVar20);
  param_1[7] = 0;
  param_1[10] = 0;
  puVar19 = (undefined4 *)param_1[6];
  if (0xf < uVar18) {
    uVar8 = param_1[3];
    piStack_bc = &iStack_ec;
    if (uVar8 < (uint)param_1[2]) {
      iStack_ec = param_1[0xe];
      do {
        piVar10 = (int *)auStack_180;
        iStack_f0 = param_1[0xf];
        iStack_e8 = *(int *)(uVar8 * 4 + *param_1);
        if (param_1[1] == 0) {
          iStack_e4 = 0;
        }
        else {
          iStack_e4 = *(int *)(uVar8 * 4 + param_1[1]);
        }
        uStack_c0 = 0;
        (**(code **)(*(int *)(iStack_e8 + 0x58) + 8))
                  (iStack_e8 + *(short *)(*(int *)(iStack_e8 + 0x58) + 4),iStack_e4,0,auStack_180);
        auVar25 = _lqc2(auStack_170);
        auVar24 = _lqc2(auStack_180);
        auVar20 = _vsubbc(auVar25,auVar24);
        auVar23 = _vsubbc(auVar25,auVar24);
        auVar22 = _vsubbc(auVar25,auVar24);
        auVar20 = _vmulbc(auVar23,auVar20);
        auVar20 = _vmulbc(auVar20,auVar22);
        auVar22._4_4_ = iStack_cc;
        auVar22._0_4_ = iStack_d0;
        auVar22._8_4_ = iStack_c8;
        auVar22._12_4_ = uStack_c4;
        auVar22 = _lqc2(auVar22);
        auVar20 = _qmfc2(auVar20._0_4_);
        auVar23 = _vsub(auVar24,auVar22);
        auVar22 = _vadd(auVar25,auVar22);
        auStack_180 = _sqc2(auVar23);
        auStack_170 = _sqc2(auVar22);
        if (auVar21._0_4_ < auVar20._0_4_) {
          uStack_c0 = 1;
          iStack_ec = iStack_e8;
          iStack_f0 = iStack_e4;
          piVar10 = (int *)auStack_1a0;
          iStack_e8 = param_1[0xe];
          iStack_e4 = param_1[0xf];
        }
        piVar7 = &iStack_f0;
        piVar1 = (int *)param_1[0x10];
        bVar5 = uVar18 < 0x10;
        if (iStack_f0 == 0) {
          piVar7 = (int *)0x0;
        }
        piVar1[1] = (int)piVar7;
        piVar1[2] = 1;
        *piVar1 = (int)piStack_bc;
        piVar1[3] = 0;
        piVar1[0x30] = 0;
        piVar1[0x33] = 0;
        piVar1[0x10] = 0;
        piVar1[0x38] = 0;
        piVar1[0x3a] = 0;
        piVar1[0x36] = 0;
        iVar15 = piVar10[1];
        iVar3 = piVar10[2];
        iVar4 = piVar10[3];
        piVar1[4] = *piVar10;
        piVar1[5] = iVar15;
        piVar1[6] = iVar3;
        piVar1[7] = iVar4;
        auVar20 = *(undefined1 (*) [16])(piVar10 + 4);
        *(undefined1 *)(piVar1 + 0x3c) = 0;
        piVar1[8] = auVar20._0_4_;
        piVar1[9] = auVar20._4_4_;
        piVar1[10] = auVar20._8_4_;
        piVar1[0xb] = auVar20._12_4_;
        piVar1[0x3b] = 0;
        uVar8 = FUN_00339c68(param_1[0x10]);
        if (uVar8 == 0) {
LAB_0033b460:
          iVar15 = param_1[3];
        }
        else {
          uVar17 = 1;
          auVar23._8_8_ = auVar20._8_8_;
          auVar23._0_8_ = CONCAT71(0,1 < uVar8);
          auStack_160 = *(undefined1 (*) [16])(iStack_e0 + 0x50);
          auStack_150 = *(undefined1 (*) [16])(iStack_e0 + 0x60);
          if (auVar23._0_8_ != 0) {
            iVar15 = iStack_e0 + 0xd0;
            do {
              uVar17 = uVar17 + 1;
              FUN_00394e20(&uStack_130,auStack_160,iVar15);
              iVar15 = iVar15 + 0x80;
              auStack_160._4_4_ = uStack_12c;
              auStack_160._0_4_ = uStack_130;
              auStack_160._8_4_ = uStack_128;
              auStack_160._12_4_ = uStack_124;
              auStack_150 = auStack_120;
              auVar23 = auStack_120;
            } while (uVar17 < uVar8);
          }
          auVar22 = _lqc2(auStack_160);
          auVar20 = _lqc2(auStack_150);
          auVar25._4_4_ = iStack_cc;
          auVar25._0_4_ = iStack_d0;
          auVar25._8_4_ = iStack_c8;
          auVar25._12_4_ = uStack_c4;
          auVar24 = _lqc2(auVar25);
          puVar2 = (undefined4 *)param_1[0x11];
          uVar16 = auVar23._8_8_;
          auVar22 = _vsub(auVar22,auVar24);
          auVar20 = _vadd(auVar20,auVar24);
          auStack_160 = _sqc2(auVar22);
          auStack_150 = _sqc2(auVar20);
          auVar20 = _sqc2(auVar22);
          *(undefined1 (*) [16])(puVar2 + 4) = auVar20;
          *puVar2 = &iStack_e8;
          puVar2[1] = &iStack_e4;
          puVar2[2] = 1;
          puVar2[3] = 0;
          puVar2[0x30] = 0;
          puVar2[0x33] = 0;
          puVar2[0x10] = 0;
          puVar2[0x38] = 0;
          puVar2[0x3a] = 0;
          puVar2[0x36] = 0;
          *(undefined1 *)(puVar2 + 0x3c) = 0;
          puVar2[8] = auStack_150._0_4_;
          puVar2[9] = auStack_150._4_4_;
          puVar2[10] = auStack_150._8_4_;
          puVar2[0xb] = auStack_150._12_4_;
          puVar2[0x3b] = 0;
          uVar9 = FUN_00339c68(param_1[0x11]);
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar16;
          auVar12 = auVar24 << 0x40;
          if (uVar9 == 0) goto LAB_0033b460;
          if (!bVar5) {
            auVar6._4_4_ = iStack_cc;
            auVar6._0_4_ = iStack_d0;
            auVar6._8_4_ = iStack_c8;
            auVar6._12_4_ = uStack_c4;
            auVar20 = _lqc2(auVar6);
            do {
              uVar16 = (ulong)(auVar12._0_4_ + 1);
              uVar18 = uVar18 - 0xc;
              piVar10 = (int *)(auVar12._0_4_ * 0x80 + iStack_dc);
              uVar13 = auVar12._8_8_;
              uVar17 = 0;
              auVar22 = _lqc2(*(undefined1 (*) [16])(piVar10 + 0x14));
              _sqc2(auVar22);
              auVar22 = _vsub(auVar22,auVar20);
              auVar23 = _lqc2(*(undefined1 (*) [16])(piVar10 + 0x18));
              auStack_110 = _sqc2(auVar22);
              _sqc2(auVar23);
              puVar19[1] = 0;
              auVar22 = _vadd(auVar23,auVar20);
              auStack_100 = _sqc2(auVar22);
              *puVar19 = piVar10;
              puVar19[2] = uStack_c0;
              if (uVar8 == 0) {
LAB_0033b420:
                iVar15 = puVar19[1];
              }
              else {
                if (3 < uVar18) {
                  iVar15 = param_1[4];
                  pauVar14 = (undefined1 (*) [16])(iStack_e0 + 0x50);
                  do {
                    if ((iVar15 == 0) ||
                       (uVar11 = *(int *)(*piVar10 + 0x50) * *(int *)(iVar15 + 4) +
                                 *(int *)(*(int *)pauVar14[-5] + 0x50),
                       (*(uint *)(iVar15 + 0xc + (uVar11 >> 5) * 4) & 1 << (uVar11 & 0x1f)) == 0)) {
                      auVar22 = *pauVar14;
                      auVar24 = _pand(auVar22,auStack_100);
                      auVar23 = _pcgtw(auStack_100,auVar22);
                      auVar23 = _pxor(auVar23,auVar24);
                      auVar25 = _pand(auStack_110,pauVar14[1]);
                      auVar24 = _pcgtw(pauVar14[1],auStack_110);
                      auVar24 = _pxor(auVar24,auVar25);
                      auVar23 = _pand(auVar23,auVar24);
                      auVar24 = _prot3w(auVar23);
                      uVar13 = auVar22._8_8_;
                      if ((long)(auVar24._0_8_ & auVar23._0_8_ & auVar23._0_8_ << 0x20) < 0) {
                        uVar18 = uVar18 - 4;
                        iVar3 = puVar19[1];
                        puVar19[1] = iVar3 + 1;
                        iVar4 = param_1[7];
                        puVar19[iVar3 + 3] = iStack_e0 + uVar17 * 0x80;
                        param_1[7] = iVar4 + 1;
                      }
                    }
                    uVar17 = uVar17 + 1;
                    pauVar14 = pauVar14 + 8;
                  } while ((uVar17 < uVar8) && (3 < uVar18));
                  goto LAB_0033b420;
                }
                iVar15 = puVar19[1];
              }
              if (iVar15 == 0) {
                uVar18 = uVar18 + 0xc;
              }
              else {
                puVar19 = puVar19 + iVar15 + 3;
                param_1[10] = param_1[10] + 1;
              }
              auVar12._8_8_ = uVar13;
              auVar12._0_8_ = uVar16;
              bVar5 = uVar18 < 0x10;
            } while ((uVar16 < uVar9) && (!bVar5));
            goto LAB_0033b460;
          }
          iVar15 = param_1[3];
        }
        uVar8 = iVar15 + 1;
        param_1[3] = uVar8;
        if ((bVar5) || ((uint)param_1[2] <= uVar8)) break;
        iStack_ec = param_1[0xe];
      } while( true );
    }
  }
  return param_1[7];
}


// ==== FUN_0033b4c0 @ 0033b4c0 ====
// GLOBAL DAT_0045e820 undefined4
// GLOBAL DAT_0045e824 undefined4
// GLOBAL DAT_0045e828 undefined4
// GLOBAL DAT_0045e82c undefined4
// GLOBAL DAT_0045e830 undefined4
// GLOBAL DAT_0045e834 undefined4
// GLOBAL DAT_0045e838 undefined4
// GLOBAL DAT_0045e83c undefined4
// GLOBAL DAT_0045e840 undefined4
// GLOBAL DAT_0045e844 undefined4
// GLOBAL DAT_0045e848 undefined4
// GLOBAL DAT_0045e84c undefined4
// GLOBAL DAT_0045e850 undefined4
// GLOBAL DAT_0045e854 undefined4
// GLOBAL DAT_0045e858 undefined4
// GLOBAL DAT_0045e85c undefined4

void FUN_0033b4c0(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9140,2);
      FUN_00100230(&gp0xffff9138,2);
    }
    else {
      FUN_00100228(&gp0xffff9138);
      FUN_00100258(&gp0xffff9140);
      DAT_0045e820 = 0x3fc90fdb;
      DAT_0045e824 = 0xbe22f983;
      DAT_0045e828 = 0x4b400000;
      DAT_0045e82c = uStack_44;
      DAT_0045e830 = 0xbe22f983;
      DAT_0045e834 = 0x3f000000;
      DAT_0045e838 = 0x3e800000;
      DAT_0045e83c = uStack_34;
      DAT_0045e840 = 0xc2992661;
      DAT_0045e844 = 0xc2255de0;
      DAT_0045e848 = 0x42a33457;
      DAT_0045e84c = uStack_24;
      DAT_0045e850 = 0x421ed7b7;
      DAT_0045e854 = 0x40c90fda;
      DAT_0045e858 = 0;
      DAT_0045e85c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0033b610 @ 0033b610 ====

undefined8 FUN_0033b610(undefined8 param_1,undefined8 param_2,int param_3)

{
  int aiStack_40 [4];
  
  FUN_0033a3b0(aiStack_40);
  ((int *)param_1)[1] = 0x10;
  *(int *)param_1 = aiStack_40[0] * 2 + 0x50 + param_3 * 0x4c8;
  return param_1;
}


// ==== FUN_0033b688 @ 0033b688 ====

void FUN_0033b688(int param_1)

{
  FUN_0033afb0();
  FUN_003398d8(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28));
  return;
}


// ==== FUN_0033b6c8 @ 0033b6c8 ====

void FUN_0033b6c8(void)

{
  FUN_0033b4c0(1,0xffff);
  return;
}


// ==== FUN_0033b6e8 @ 0033b6e8 ====

void FUN_0033b6e8(void)

{
  FUN_0033b4c0(0,0xffff);
  return;
}


// ==== FUN_0033b708 @ 0033b708 ====
// GLOBAL DAT_0045e860 undefined4
// GLOBAL DAT_0045e864 undefined4
// GLOBAL DAT_0045e868 undefined4
// GLOBAL DAT_0045e86c undefined4
// GLOBAL DAT_0045e870 undefined4
// GLOBAL DAT_0045e874 undefined4
// GLOBAL DAT_0045e878 undefined4
// GLOBAL DAT_0045e87c undefined4
// GLOBAL DAT_0045e880 undefined4
// GLOBAL DAT_0045e884 undefined4
// GLOBAL DAT_0045e888 undefined4
// GLOBAL DAT_0045e88c undefined4
// GLOBAL DAT_0045e890 undefined4
// GLOBAL DAT_0045e894 undefined4
// GLOBAL DAT_0045e898 undefined4
// GLOBAL DAT_0045e89c undefined4

void FUN_0033b708(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9150,2);
      FUN_00100230(&gp0xffff9148,2);
    }
    else {
      FUN_00100228(&gp0xffff9148);
      FUN_00100258(&gp0xffff9150);
      DAT_0045e860 = 0x3fc90fdb;
      DAT_0045e864 = 0xbe22f983;
      DAT_0045e868 = 0x4b400000;
      DAT_0045e86c = uStack_44;
      DAT_0045e870 = 0xbe22f983;
      DAT_0045e874 = 0x3f000000;
      DAT_0045e878 = 0x3e800000;
      DAT_0045e87c = uStack_34;
      DAT_0045e880 = 0xc2992661;
      DAT_0045e884 = 0xc2255de0;
      DAT_0045e888 = 0x42a33457;
      DAT_0045e88c = uStack_24;
      DAT_0045e890 = 0x421ed7b7;
      DAT_0045e894 = 0x40c90fda;
      DAT_0045e898 = 0;
      DAT_0045e89c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0033b858 @ 0033b858 ====

undefined4 FUN_0033b858(int *param_1,int param_2)

{
  *param_1 = (int)param_1 + (*param_1 - *(int *)(param_2 + 8));
  FUN_00341b48(param_1 + 4);
  return 1;
}


// ==== FUN_0033b890 @ 0033b890 ====

void FUN_0033b890(void)

{
  FUN_0033b708(1,0xffff);
  return;
}


// ==== FUN_0033b8b0 @ 0033b8b0 ====

void FUN_0033b8b0(void)

{
  FUN_0033b708(0,0xffff);
  return;
}


// ==== FUN_0033b8d0 @ 0033b8d0 ====

undefined4 FUN_0033b8d0(long param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf0 [16];
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  pauVar2 = (undefined1 (*) [16])param_2;
  pauVar1 = (undefined1 (*) [16])param_1;
  auVar11 = _lqc2(**(undefined1 (**) [16])pauVar1[4]);
  _sqc2(auVar11);
  auVar3 = _lqc2((*(undefined1 (**) [16])pauVar1[4])[1]);
  _sqc2(auVar3);
  if (param_2 == 0) {
    if (param_1 == 0) {
      auStack_40 = _sqc2(auVar11);
      auStack_30 = _sqc2(auVar3);
    }
    else {
      auVar4 = _vsub(auVar3,auVar11);
      auVar9 = _lqc2(pauVar1[1]);
      auVar3 = _vadd(auVar3,auVar11);
      auVar8 = _vabs(auVar9);
      auVar7 = _qmtc2(0x3f000000);
      auVar10 = _lqc2(*pauVar1);
      auVar5 = _vmulbc(auVar4,auVar7);
      auVar11 = _vabs(auVar10);
      auVar6 = _lqc2(pauVar1[2]);
      auVar8 = _vmulbc(auVar8,auVar5);
      auVar11 = _vmulbc(auVar11,auVar5);
      auVar4 = _vabs(auVar6);
      auVar11 = _vadd(auVar11,auVar8);
      auVar4 = _vmulbc(auVar4,auVar5);
      auVar8 = _lqc2(pauVar1[3]);
      auVar3 = _vmulbc(auVar3,auVar7);
      auVar11 = _vadd(auVar11,auVar4);
      _vmulabc(auVar10,auVar3);
      _vmaddabc(auVar9,auVar3);
      _vmaddabc(auVar6,auVar3);
      auVar3 = _vmaddbc(auVar8,in_vf0);
      auVar8 = _vadd(auVar3,auVar11);
      auVar3 = _vsub(auVar3,auVar11);
      auStack_30 = _sqc2(auVar8);
      auStack_40 = _sqc2(auVar3);
    }
    *param_4 = auStack_40._0_4_;
    param_4[1] = auStack_40._4_4_;
    param_4[2] = auStack_40._8_4_;
    param_4[3] = auStack_40._12_4_;
    param_4[4] = auStack_30._0_4_;
    param_4[5] = auStack_30._4_4_;
    param_4[6] = auStack_30._8_4_;
    param_4[7] = auStack_30._12_4_;
  }
  else {
    auVar8 = _vsub(auVar3,auVar11);
    auVar10 = _lqc2(pauVar2[1]);
    auVar4 = _vadd(auVar3,auVar11);
    auVar7 = _lqc2(pauVar2[2]);
    auVar11 = _lqc2(pauVar1[1]);
    auVar6 = _lqc2(*pauVar2);
    auVar3 = _lqc2(*pauVar1);
    _vmulabc(auVar6,auVar11);
    _vmaddabc(auVar10,auVar11);
    auVar14 = _vmaddbc(auVar7,auVar11);
    _vmulabc(auVar6,auVar3);
    _vmaddabc(auVar10,auVar3);
    auVar13 = _vmaddbc(auVar7,auVar3);
    auVar3 = _lqc2(pauVar1[2]);
    auVar16 = _qmtc2(0x3f000000);
    _vmulabc(auVar6,auVar3);
    _vmaddabc(auVar10,auVar3);
    auVar12 = _vmaddbc(auVar7,auVar3);
    auVar9 = _vmulbc(auVar8,auVar16);
    auVar3 = _vabs(auVar13);
    auVar11 = _vabs(auVar14);
    auVar15 = _lqc2(pauVar2[3]);
    auVar3 = _vmulbc(auVar3,auVar9);
    auVar5 = _lqc2(pauVar1[3]);
    auVar8 = _vmulbc(auVar11,auVar9);
    auVar11 = _vabs(auVar12);
    _vmulabc(auVar6,auVar5);
    _vmaddabc(auVar10,auVar5);
    _vmaddabc(auVar7,auVar5);
    auVar5 = _vmaddbc(auVar15,in_vf0);
    auVar11 = _vmulbc(auVar11,auVar9);
    auVar3 = _vadd(auVar3,auVar8);
    auVar8 = _vmulbc(auVar4,auVar16);
    auVar11 = _vadd(auVar3,auVar11);
    _vmulabc(auVar13,auVar8);
    _vmaddabc(auVar14,auVar8);
    _vmaddabc(auVar12,auVar8);
    auVar8 = _vmaddbc(auVar5,in_vf0);
    _sqc2(auVar13);
    auVar3 = _vadd(auVar8,auVar11);
    auVar3 = _sqc2(auVar3);
    auVar11 = _vsub(auVar8,auVar11);
    auVar11 = _sqc2(auVar11);
    uStack_50 = auVar3._0_4_;
    uStack_4c = auVar3._4_4_;
    uStack_48 = auVar3._8_4_;
    uStack_44 = auVar3._12_4_;
    uStack_60 = auVar11._0_4_;
    uStack_5c = auVar11._4_4_;
    uStack_58 = auVar11._8_4_;
    uStack_54 = auVar11._12_4_;
    param_4[4] = uStack_50;
    param_4[5] = uStack_4c;
    param_4[6] = uStack_48;
    param_4[7] = uStack_44;
    *param_4 = uStack_60;
    param_4[1] = uStack_5c;
    param_4[2] = uStack_58;
    param_4[3] = uStack_54;
    _sqc2(auVar14);
    _sqc2(auVar12);
    _sqc2(auVar5);
    _sqc2(auVar13);
    _sqc2(auVar14);
    _sqc2(auVar12);
    _sqc2(auVar5);
  }
  return 1;
}


// ==== FUN_0033ba90 @ 0033ba90 ====
// GLOBAL DAT_0045e8a0 undefined4
// GLOBAL DAT_0045e8a4 undefined4
// GLOBAL DAT_0045e8a8 undefined4
// GLOBAL DAT_0045e8ac undefined4
// GLOBAL DAT_0045e8b0 undefined4
// GLOBAL DAT_0045e8b4 undefined4
// GLOBAL DAT_0045e8b8 undefined4
// GLOBAL DAT_0045e8bc undefined4
// GLOBAL DAT_0045e8c0 undefined4
// GLOBAL DAT_0045e8c4 undefined4
// GLOBAL DAT_0045e8c8 undefined4
// GLOBAL DAT_0045e8cc undefined4
// GLOBAL DAT_0045e8d0 undefined4
// GLOBAL DAT_0045e8d4 undefined4
// GLOBAL DAT_0045e8d8 undefined4
// GLOBAL DAT_0045e8dc undefined4

void FUN_0033ba90(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9160,2);
      FUN_00100230(&gp0xffff9158,2);
    }
    else {
      FUN_00100228(&gp0xffff9158);
      FUN_00100258(&gp0xffff9160);
      DAT_0045e8a0 = 0x3fc90fdb;
      DAT_0045e8a4 = 0xbe22f983;
      DAT_0045e8a8 = 0x4b400000;
      DAT_0045e8ac = uStack_44;
      DAT_0045e8b0 = 0xbe22f983;
      DAT_0045e8b4 = 0x3f000000;
      DAT_0045e8b8 = 0x3e800000;
      DAT_0045e8bc = uStack_34;
      DAT_0045e8c0 = 0xc2992661;
      DAT_0045e8c4 = 0xc2255de0;
      DAT_0045e8c8 = 0x42a33457;
      DAT_0045e8cc = uStack_24;
      DAT_0045e8d0 = 0x421ed7b7;
      DAT_0045e8d4 = 0x40c90fda;
      DAT_0045e8d8 = 0;
      DAT_0045e8dc = uStack_14;
    }
  }
  return;
}


// ==== FUN_0033bbe8 @ 0033bbe8 ====

void FUN_0033bbe8(void)

{
  FUN_0033ba90(1,0xffff);
  return;
}


// ==== FUN_0033bc08 @ 0033bc08 ====

void FUN_0033bc08(void)

{
  FUN_0033ba90(0,0xffff);
  return;
}


// ==== FUN_0033bc28 @ 0033bc28 ====
// GLOBAL DAT_003d13d8 undefined
// GLOBAL DAT_003d13dc undefined
// GLOBAL DAT_003d13f0 undefined4
// GLOBAL DAT_003d13f4 undefined4
// GLOBAL DAT_003d1410 undefined4
// GLOBAL DAT_003d1414 undefined4

/* WARNING: Removing unreachable block (ram,0x0033bef0) */
/* WARNING: Removing unreachable block (ram,0x0033c08c) */
/* WARNING: Removing unreachable block (ram,0x0033c000) */
/* WARNING: Removing unreachable block (ram,0x0033c428) */
/* WARNING: Removing unreachable block (ram,0x0033bf7c) */

void FUN_0033bc28(undefined1 (*param_1) [16],ulong param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_vf8 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined8 auStack_1c0 [2];
  float fStack_1b0;
  float fStack_1ac;
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined1 auStack_d0 [16];
  
  auVar21 = _qmtc2(param_3);
  auVar19 = _vmove(auVar21);
  iVar2 = 0;
  iVar11 = 0;
  iVar10 = 0;
  fVar14 = 0.0;
  pauVar9 = param_1;
  iVar5 = 0;
  do {
    pauVar9 = pauVar9 + 1;
    auVar15 = _lqc2(*pauVar9);
    auVar16 = _vmul(auVar19,auVar15);
    auVar15 = _vaddbc(auVar16,auVar16);
    auVar15 = _vaddbc(auVar15,auVar16);
    auVar15 = _qmfc2(auVar15._0_4_);
    fStack_e0 = ABS(auVar15._0_4_);
    iVar6 = iVar10;
    if (ABS(auVar15._0_4_) < 0.05) {
      iVar2 = iVar2 + 1;
      iVar6 = iVar5;
      iVar11 = iVar10;
    }
    iVar10 = iVar10 + 1;
    iVar5 = iVar6;
  } while (iVar10 < 3);
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      auVar19 = _lqc2(*param_1);
      auVar16 = _vmove(auVar21);
      pfVar4 = (float *)&DAT_003d13f0;
      auVar21 = _lqc2(param_1[*(int *)(&DAT_003d13dc + iVar11 * 8) + 1]);
      iVar2 = 0;
      auVar15 = _lqc2(param_1[*(int *)(&DAT_003d13d8 + iVar11 * 8) + 1]);
      iVar5 = -1;
      do {
        auVar17 = _qmtc2(*(float *)(param_1[7] + *(int *)(&DAT_003d13d8 + iVar11 * 8) * 4) * *pfVar4
                        );
        auVar18 = _vmulbc(auVar15,auVar17);
        auVar17 = _qmtc2(*(float *)(param_1[7] + *(int *)(&DAT_003d13dc + iVar11 * 8) * 4) *
                         pfVar4[1]);
        auVar17 = _vmulbc(auVar21,auVar17);
        auVar18 = _vadd(auVar19,auVar18);
        auVar22 = _vadd(auVar18,auVar17);
        auVar18 = _vmul(auVar22,auVar16);
        auVar17 = _vaddbc(auVar18,auVar18);
        auVar17 = _vaddbc(auVar17,auVar18);
        auVar17 = _qmfc2(auVar17._0_4_);
        fVar13 = auVar17._0_4_;
        if (iVar5 < 0) {
          in_vf8 = _vmove(auVar22);
          fVar14 = fVar13;
          iVar5 = iVar2;
        }
        else if (fVar14 < fVar13) {
          in_vf8 = _vmove(auVar22);
          fVar14 = fVar13;
          iVar5 = iVar2;
        }
        iVar2 = iVar2 + 1;
        pfVar4 = pfVar4 + 2;
      } while (iVar2 < 4);
      auVar21 = _lqc2(param_1[iVar11 + 1]);
      auVar19 = _lqc2(param_1[iVar11 + 1]);
      auVar15 = _qmtc2(*(undefined4 *)(param_1[7] + iVar11 * 4));
      auVar21 = _vmulbc(auVar21,auVar15);
      auVar19 = _vmulbc(auVar19,auVar15);
      auVar21 = _vsub(in_vf8,auVar21);
      auVar19 = _vadd(in_vf8,auVar19);
      auVar15 = _vsub(auVar19,auVar21);
      auVar19 = _sqc2(auVar21);
      auVar21 = _sqc2(auVar15);
      auVar16 = _vmul(auVar15,auVar15);
      auVar15 = _vaddbc(auVar16,auVar16);
      auVar15 = _vaddbc(auVar15,auVar16);
      auVar15 = _qmfc2(auVar15._0_4_);
      uStack_120 = auVar19._0_4_;
      uStack_11c = auVar19._4_4_;
      uStack_118 = auVar19._8_4_;
      uStack_114 = auVar19._12_4_;
      if (1.1920929e-07 < auVar15._0_4_) {
        fStack_f0 = SQRT(auVar15._0_4_);
        auVar21 = _lqc2(auVar21);
        auVar19 = _qmtc2(1.0 / fStack_f0);
        auVar19 = _vmulbc(auVar21,auVar19);
        auStack_110 = _sqc2(auVar19);
      }
      param_4[4] = uStack_120;
      param_4[5] = uStack_11c;
      param_4[6] = uStack_118;
      param_4[7] = uStack_114;
      param_4[8] = auStack_110._0_4_;
      param_4[9] = auStack_110._4_4_;
      param_4[10] = auStack_110._8_4_;
      param_4[0xb] = auStack_110._12_4_;
      param_4[0xc] = (int)uStack_100;
      param_4[0xd] = (int)((ulong)uStack_100 >> 0x20);
      param_4[0xe] = uStack_f8;
      param_4[0xf] = uStack_f4;
      param_4[0x10] = fStack_f0;
      param_4[0x11] = uStack_ec;
      param_4[0x12] = uStack_e8;
      param_4[0x13] = uStack_e4;
      param_4[0x4c] = 1;
    }
    else {
      auVar17 = _lqc2(param_1[3]);
      auVar16 = _lqc2(param_1[1]);
      auVar15 = _lqc2(*param_1);
      auVar19 = _lqc2(param_1[2]);
      uVar12 = 0xffffffff;
      auVar21 = _vmove(auVar21);
      uVar8 = 0;
      bVar1 = true;
      do {
        fVar13 = *(float *)param_1[7];
        if (bVar1) {
          fVar13 = -*(float *)param_1[7];
        }
        auVar18 = _qmtc2(fVar13);
        auVar18 = _vmulbc(auVar16,auVar18);
        auVar20 = _vadd(auVar15,auVar18);
        auVar18 = _qmtc2((float)(&DAT_003d13f0)[(uVar8 & 3) * 2] * *(float *)(param_1[7] + 4));
        auVar22 = _vmulbc(auVar19,auVar18);
        auVar18 = _qmtc2((float)(&DAT_003d13f4)[(uVar8 & 3) * 2] * *(float *)(param_1[7] + 8));
        auVar22 = _vadd(auVar20,auVar22);
        auVar18 = _vmulbc(auVar17,auVar18);
        auVar18 = _vadd(auVar22,auVar18);
        auVar20 = _vmove(auVar18);
        auVar22 = _vmul(auVar20,auVar21);
        auVar18 = _vaddbc(auVar22,auVar22);
        auVar18 = _vaddbc(auVar18,auVar22);
        auVar18 = _qmfc2(auVar18._0_4_);
        fVar13 = auVar18._0_4_;
        if ((int)uVar12 < 0) {
          in_vf8 = _vmove(auVar20);
          fVar14 = fVar13;
          uVar12 = uVar8;
        }
        else if (fVar14 < fVar13) {
          in_vf8 = _vmove(auVar20);
          fVar14 = fVar13;
          uVar12 = uVar8;
        }
        uVar8 = uVar8 + 1;
        bVar1 = (int)uVar8 < 4;
      } while ((int)uVar8 < 8);
      auVar19 = _sqc2(in_vf8);
      *(undefined1 (*) [16])(param_4 + 0x48) = auVar19;
      param_4[0x4c] = 0;
    }
    goto LAB_0033c568;
  }
  fVar14 = -1.0;
  auVar16 = _lqc2(param_1[iVar6 + 1]);
  auVar15 = _vmul(auVar16,auVar21);
  auVar19 = _vaddbc(auVar15,auVar15);
  auVar19 = _vaddbc(auVar19,auVar15);
  auVar19 = _qmfc2(auVar19._0_4_);
  if (0.0 < auVar19._0_4_) {
    fVar14 = 1.0;
  }
  auVar15 = _lqc2(*param_1);
  auVar19 = _qmtc2(fVar14 * *(float *)(param_1[7] + iVar6 * 4));
  auVar19 = _vmulbc(auVar16,auVar19);
  auVar19 = _vadd(auVar15,auVar19);
  auStack_d0 = _sqc2(auVar19);
  if (iVar6 == 1) {
    fVar14 = -fVar14;
  }
  iVar2 = iVar6 * 8;
  iVar11 = *(int *)(&DAT_003d13d8 + iVar2);
  iVar5 = *(int *)(&DAT_003d13dc + iVar2);
  auVar19 = _lqc2(param_1[iVar11 + 1]);
  auVar15 = _qmtc2(*(float *)(param_1[7] + iVar11 * 4));
  auVar19 = _vmulbc(auVar19,auVar15);
  auStack_280 = _sqc2(auVar19);
  auVar15 = _qmtc2(-*(float *)(param_1[7] + iVar11 * 4));
  auVar19 = _lqc2(param_1[iVar11 + 1]);
  auVar19 = _vmulbc(auVar19,auVar15);
  auStack_270 = _sqc2(auVar19);
  auVar19 = _lqc2(param_1[iVar5 + 1]);
  auVar15 = _qmtc2(*(float *)(param_1[7] + iVar5 * 4));
  auVar19 = _vmulbc(auVar19,auVar15);
  auStack_260 = _sqc2(auVar19);
  auVar15 = _qmtc2(-*(float *)(param_1[7] + iVar5 * 4));
  auVar19 = _lqc2(param_1[iVar5 + 1]);
  auVar19 = _vmulbc(auVar19,auVar15);
  auStack_250 = _sqc2(auVar19);
  auVar19 = _lqc2(param_1[iVar5 + 1]);
  auVar19 = _vsub(in_vf0,auVar19);
  auStack_240 = _sqc2(auVar19);
  auVar19 = _lqc2(param_1[iVar11 + 1]);
  auVar19 = _vsub(in_vf0,auVar19);
  auStack_230 = _sqc2(auVar19);
  uStack_220 = *(undefined4 *)param_1[iVar5 + 1];
  uStack_21c = *(undefined4 *)(param_1[iVar5 + 1] + 4);
  uStack_218 = *(undefined4 *)(param_1[iVar5 + 1] + 8);
  uStack_214 = *(undefined4 *)(param_1[iVar5 + 1] + 0xc);
  pauVar9 = param_1 + iVar11 + 1;
  uStack_210 = *(undefined4 *)*pauVar9;
  uStack_20c = *(undefined4 *)(param_1[iVar11 + 1] + 4);
  uStack_208 = *(undefined4 *)(param_1[iVar11 + 1] + 8);
  uStack_204 = *(undefined4 *)(param_1[iVar11 + 1] + 0xc);
  for (iVar11 = 2; iVar11 != -1; iVar11 = iVar11 + -1) {
  }
  auVar19 = _lqc2(param_1[iVar5 + 1]);
  if (param_2 == 0) {
    _vopmula(auVar21,auVar19);
    auVar19 = _vopmsub(auVar19,auVar21);
    auVar15 = _vmul(auVar19,auVar19);
    auStack_1e0 = _sqc2(auVar19);
    auVar19 = _vaddbc(auVar15,auVar15);
    auVar19 = _vaddbc(auVar19,auVar15);
    auVar19 = _qmfc2(auVar19._0_4_);
    auVar15 = _lqc2(*pauVar9);
    if (1.1920929e-07 < auVar19._0_4_) {
      auVar15 = _lqc2(auStack_1e0);
      auVar19 = _qmtc2(1.0 / SQRT(auVar19._0_4_));
      auVar19 = _vmulbc(auVar15,auVar19);
      auStack_1e0 = _sqc2(auVar19);
      auVar15 = _lqc2(*pauVar9);
    }
    _vopmula(auVar21,auVar15);
    auVar19 = _vopmsub(auVar15,auVar21);
    auVar21 = _vmul(auVar19,auVar19);
    auStack_1d0 = _sqc2(auVar19);
    auVar19 = _vaddbc(auVar21,auVar21);
    auVar19 = _vaddbc(auVar19,auVar21);
    auVar19 = _qmfc2(auVar19._0_4_);
    if (1.1920929e-07 < auVar19._0_4_) {
      auVar21 = _lqc2(auStack_1d0);
      auVar19 = _qmtc2(1.0 / SQRT(auVar19._0_4_));
      goto LAB_0033c0b0;
    }
  }
  else {
    _vopmula(auVar19,auVar21);
    auVar19 = _vopmsub(auVar21,auVar19);
    auVar15 = _vmul(auVar19,auVar19);
    auStack_1e0 = _sqc2(auVar19);
    auVar19 = _vaddbc(auVar15,auVar15);
    auVar19 = _vaddbc(auVar19,auVar15);
    auVar19 = _qmfc2(auVar19._0_4_);
    auVar15 = _lqc2(*pauVar9);
    if (1.1920929e-07 < auVar19._0_4_) {
      auVar15 = _lqc2(auStack_1e0);
      auVar19 = _qmtc2(1.0 / SQRT(auVar19._0_4_));
      auVar19 = _vmulbc(auVar15,auVar19);
      auStack_1e0 = _sqc2(auVar19);
      auVar15 = _lqc2(*pauVar9);
    }
    _vopmula(auVar15,auVar21);
    auVar19 = _vopmsub(auVar21,auVar15);
    auVar21 = _vmul(auVar19,auVar19);
    auStack_1d0 = _sqc2(auVar19);
    auVar19 = _vaddbc(auVar21,auVar21);
    auVar19 = _vaddbc(auVar19,auVar21);
    auVar19 = _qmfc2(auVar19._0_4_);
    if (1.1920929e-07 < auVar19._0_4_) {
      auVar21 = _lqc2(auStack_1d0);
      auVar19 = _qmtc2(1.0 / SQRT(auVar19._0_4_));
LAB_0033c0b0:
      auVar19 = _vmulbc(auVar21,auVar19);
      auStack_1d0 = _sqc2(auVar19);
    }
  }
  auVar21 = _lqc2(auStack_1e0);
  auVar19 = _lqc2(auStack_1d0);
  auVar21 = _vsub(in_vf0,auVar21);
  auVar19 = _vsub(in_vf0,auVar19);
  auStack_200 = _sqc2(auVar21);
  auStack_1f0 = _sqc2(auVar19);
  fStack_1b0 = *(float *)(param_1[7] + *(int *)(&DAT_003d13dc + iVar2) * 4) +
               *(float *)(param_1[7] + *(int *)(&DAT_003d13dc + iVar2) * 4);
  fStack_1ac = *(float *)(param_1[7] + *(int *)(&DAT_003d13d8 + iVar2) * 4) +
               *(float *)(param_1[7] + *(int *)(&DAT_003d13d8 + iVar2) * 4);
  auStack_1c0[0] = CONCAT44(fStack_1ac,fStack_1b0);
  if (fVar14 < 0.0 == param_2) {
    auVar19 = _lqc2(auStack_d0);
    piVar7 = &DAT_003d1410;
    uVar12 = 0;
    puVar3 = (undefined4 *)auStack_200;
    pauVar9 = (undefined1 (*) [16])(param_4 + 4);
    do {
      auVar21 = _lqc2(*(undefined1 (*) [16])(auStack_280 + *piVar7 * 0x10));
      auVar15 = _lqc2(*(undefined1 (*) [16])(auStack_260 + piVar7[1] * 0x10));
      auVar21 = _vadd(auVar19,auVar21);
      uStack_170 = *(undefined4 *)((int)auStack_1c0 + (uVar12 & 1) * 4);
      auVar21 = _vadd(auVar21,auVar15);
      auStack_1a0 = _sqc2(auVar21);
      uVar12 = uVar12 + 1;
      auVar21 = _sqc2(auVar21);
      *pauVar9 = auVar21;
      piVar7 = piVar7 + 2;
      uStack_18c = puVar3[-0xf];
      uStack_188 = puVar3[-0xe];
      uStack_184 = puVar3[-0xd];
      uStack_190 = puVar3[-0x10];
      *(undefined4 *)pauVar9[1] = puVar3[-0x10];
      *(undefined4 *)((int)pauVar9[1] + 4) = uStack_18c;
      *(undefined4 *)((int)pauVar9[1] + 8) = uStack_188;
      *(undefined4 *)((int)pauVar9[1] + 0xc) = uStack_184;
      uStack_180 = *puVar3;
      uStack_17c = puVar3[1];
      uStack_178 = puVar3[2];
      uStack_174 = puVar3[3];
      puVar3 = puVar3 + 4;
      *(undefined4 *)pauVar9[2] = uStack_180;
      *(undefined4 *)((int)pauVar9[2] + 4) = uStack_17c;
      *(undefined4 *)((int)pauVar9[2] + 8) = uStack_178;
      *(undefined4 *)((int)pauVar9[2] + 0xc) = uStack_174;
      *(undefined4 *)pauVar9[3] = uStack_170;
      *(undefined4 *)((int)pauVar9[3] + 4) = uStack_16c;
      *(undefined4 *)((int)pauVar9[3] + 8) = uStack_168;
      *(undefined4 *)((int)pauVar9[3] + 0xc) = uStack_164;
      pauVar9 = pauVar9 + 4;
    } while ((int)uVar12 < 4);
  }
  else {
    auVar19 = _lqc2(auStack_d0);
    pauVar9 = (undefined1 (*) [16])(param_4 + 0x34);
    uVar12 = 0;
    do {
      uVar8 = uVar12 + 1;
      uStack_130 = *(undefined4 *)((int)auStack_1c0 + (uVar12 & 1) * 4);
      auVar21 = _lqc2(*(undefined1 (*) [16])(auStack_280 + (&DAT_003d1410)[(uVar8 & 3) * 2] * 0x10))
      ;
      auVar15 = _lqc2(*(undefined1 (*) [16])(auStack_260 + (&DAT_003d1414)[(uVar8 & 3) * 2] * 0x10))
      ;
      auVar21 = _vadd(auVar19,auVar21);
      auVar21 = _vadd(auVar21,auVar15);
      iVar11 = (uVar12 + 2 & 3) * 0x10;
      auStack_160 = _sqc2(auVar21);
      auVar21 = _sqc2(auVar21);
      *pauVar9 = auVar21;
      uStack_14c = *(undefined4 *)(auStack_240 + iVar11 + 4);
      uStack_148 = *(undefined4 *)(auStack_240 + iVar11 + 8);
      uStack_144 = *(undefined4 *)(auStack_240 + iVar11 + 0xc);
      uStack_150 = *(undefined4 *)(auStack_240 + iVar11);
      *(undefined4 *)pauVar9[1] = *(undefined4 *)(auStack_240 + iVar11);
      *(undefined4 *)((int)pauVar9[1] + 4) = uStack_14c;
      *(undefined4 *)((int)pauVar9[1] + 8) = uStack_148;
      *(undefined4 *)((int)pauVar9[1] + 0xc) = uStack_144;
      uStack_140 = *(undefined4 *)(auStack_200 + iVar11);
      uStack_13c = *(undefined4 *)(auStack_200 + iVar11 + 4);
      uStack_138 = *(undefined4 *)(auStack_200 + iVar11 + 8);
      uStack_134 = *(undefined4 *)(auStack_200 + iVar11 + 0xc);
      *(undefined4 *)pauVar9[2] = uStack_140;
      *(undefined4 *)((int)pauVar9[2] + 4) = uStack_13c;
      *(undefined4 *)((int)pauVar9[2] + 8) = uStack_138;
      *(undefined4 *)((int)pauVar9[2] + 0xc) = uStack_134;
      *(undefined4 *)pauVar9[3] = uStack_130;
      *(undefined4 *)((int)pauVar9[3] + 4) = uStack_12c;
      *(undefined4 *)((int)pauVar9[3] + 8) = uStack_128;
      *(undefined4 *)((int)pauVar9[3] + 0xc) = uStack_124;
      pauVar9 = pauVar9 + -4;
      uVar12 = uVar8;
    } while ((int)uVar8 < 4);
  }
  auVar21 = _qmtc2(-fVar14);
  auVar19 = _lqc2(param_1[iVar6 + 1]);
  auVar19 = _vmulbc(auVar19,auVar21);
  param_4[0x4c] = 4;
  auVar19 = _sqc2(auVar19);
  *(undefined1 (*) [16])(param_4 + 0x44) = auVar19;
LAB_0033c568:
  *param_4 = 0;
  return;
}


// ==== FUN_0033c6a0 @ 0033c6a0 ====

void FUN_0033c6a0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      auVar4 = _lqc2(*param_2);
      uVar2 = uVar2 + 1;
      auVar5 = _lqc2(*param_1);
      auVar5 = _vmul(auVar4,auVar5);
      auVar4 = _vaddbc(auVar5,auVar5);
      auVar4 = _vaddbc(auVar4,auVar5);
      auVar4 = _qmfc2(auVar4._0_4_);
      fVar1 = auVar4._0_4_;
      param_4[1] = fVar1;
      *param_4 = fVar1;
      auVar7 = _lqc2(*param_2);
      auVar4 = _lqc2(param_1[1]);
      param_2 = param_2 + 1;
      auVar5 = _vmul(auVar4,auVar7);
      auVar4 = _vaddbc(auVar5,auVar5);
      auVar6 = _lqc2(param_1[2]);
      auVar4 = _vaddbc(auVar4,auVar5);
      auVar6 = _vmul(auVar6,auVar7);
      auVar5 = _qmfc2(auVar4._0_4_);
      auVar4 = _vaddbc(auVar6,auVar6);
      auVar4 = _vaddbc(auVar4,auVar6);
      auVar4 = _qmfc2(auVar4._0_4_);
      auVar6 = _lqc2(param_1[3]);
      auVar7 = _vmul(auVar6,auVar7);
      auVar6 = _vaddbc(auVar7,auVar7);
      auVar6 = _vaddbc(auVar6,auVar7);
      auVar6 = _qmfc2(auVar6._0_4_);
      fVar3 = ABS(auVar5._0_4_ * *(float *)param_1[7]) +
              ABS(auVar4._0_4_ * *(float *)(param_1[7] + 4)) +
              ABS(auVar6._0_4_ * *(float *)(param_1[7] + 8));
      param_4[1] = fVar1 + fVar3;
      *param_4 = fVar1 - fVar3;
      param_4 = param_4 + 2;
    } while (uVar2 < param_3);
  }
  return;
}


// ==== FUN_0033c7c8 @ 0033c7c8 ====
// GLOBAL LAB_0033c5a0 undefined
// GLOBAL LAB_0033da88 undefined
// GLOBAL FUN_0033bc28 undefined
// GLOBAL FUN_0033c6a0 undefined

undefined4 FUN_0033c7c8(undefined1 (*param_1) [16],undefined4 *param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  pauVar1 = (undefined1 (*) [16])param_3;
  if (param_3 == 0) {
    auStack_c0 = *param_1;
    auStack_b0 = param_1[1];
    auStack_a0 = param_1[2];
    auStack_90 = param_1[3];
  }
  else {
    auVar4 = _lqc2(*pauVar1);
    auVar5 = _lqc2(pauVar1[1]);
    auVar3 = _lqc2(pauVar1[2]);
    auVar6 = _lqc2(*param_1);
    auVar8 = _lqc2(param_1[1]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    auVar7 = _vmaddbc(auVar3,auVar6);
    auVar6 = _lqc2(param_1[2]);
    _vmulabc(auVar4,auVar8);
    _vmaddabc(auVar5,auVar8);
    auVar9 = _vmaddbc(auVar3,auVar8);
    auVar10 = _lqc2(pauVar1[3]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    auVar8 = _vmaddbc(auVar3,auVar6);
    auVar6 = _lqc2(param_1[3]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    _vmaddabc(auVar3,auVar6);
    auVar3 = _vmaddbc(auVar10,in_vf0);
    auStack_c0 = _sqc2(auVar7);
    auStack_b0 = _sqc2(auVar9);
    auStack_a0 = _sqc2(auVar8);
    auStack_90 = _sqc2(auVar3);
    _sqc2(auVar7);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar3);
    _sqc2(auVar7);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar3);
  }
  *param_2 = auStack_90._0_4_;
  param_2[1] = auStack_90._4_4_;
  param_2[2] = auStack_90._8_4_;
  param_2[3] = auStack_90._12_4_;
  param_2[4] = auStack_c0._0_4_;
  param_2[5] = auStack_c0._4_4_;
  param_2[6] = auStack_c0._8_4_;
  param_2[7] = auStack_c0._12_4_;
  param_2[8] = auStack_b0._0_4_;
  param_2[9] = auStack_b0._4_4_;
  param_2[10] = auStack_b0._8_4_;
  param_2[0xb] = auStack_b0._12_4_;
  param_2[0xc] = auStack_a0._0_4_;
  param_2[0xd] = auStack_a0._4_4_;
  param_2[0xe] = auStack_a0._8_4_;
  param_2[0xf] = auStack_a0._12_4_;
  param_2[0x10] = auStack_c0._0_4_;
  param_2[0x11] = auStack_c0._4_4_;
  param_2[0x12] = auStack_c0._8_4_;
  param_2[0x13] = auStack_c0._12_4_;
  param_2[0x14] = auStack_b0._0_4_;
  param_2[0x15] = auStack_b0._4_4_;
  param_2[0x16] = auStack_b0._8_4_;
  param_2[0x17] = auStack_b0._12_4_;
  param_2[0x18] = auStack_a0._0_4_;
  param_2[0x19] = auStack_a0._4_4_;
  param_2[0x1a] = auStack_a0._8_4_;
  param_2[0x1b] = auStack_a0._12_4_;
  param_2[0x23] = 3;
  param_2[0x22] = 3;
  param_2[0x1c] = *(undefined4 *)param_1[4];
  param_2[0x1d] = *(undefined4 *)(param_1[4] + 4);
  uVar2 = *(undefined4 *)(param_1[4] + 8);
  param_2[0x27] = &LAB_0033da88;
  param_2[0x1e] = uVar2;
  param_2[0x24] = FUN_0033bc28;
  uVar2 = *(undefined4 *)(param_1[4] + 0xc);
  param_2[0x25] = &LAB_0033c5a0;
  param_2[0x1f] = uVar2;
  param_2[0x26] = FUN_0033c6a0;
  param_2[0x20] = param_1;
  return 1;
}


// ==== FUN_0033c918 @ 0033c918 ====
// GLOBAL DAT_0040e3b0 float
// GLOBAL PTR_DAT_0040e408 undefined_*
// GLOBAL DAT_0040e3b4 float
// GLOBAL null undefined1[16]_*

undefined4
FUN_0033c918(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
            long param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_vf0 [16];
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
  undefined1 auStack_400 [16];
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined1 auStack_3c0 [16];
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [16];
  float afStack_380 [4];
  float afStack_370 [4];
  undefined8 uStack_360;
  float fStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  float fStack_348;
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  float afStack_2c0 [4];
  uint auStack_2b0 [4];
  undefined8 uStack_2a0;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  undefined4 uStack_284;
  float fStack_280;
  float fStack_27c;
  float afStack_270 [4];
  float fStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  float fStack_240;
  float fStack_23c;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined1 auStack_220 [16];
  float fStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float afStack_200 [4];
  float afStack_1f0 [4];
  float afStack_1e0 [4];
  float afStack_1d0 [4];
  undefined1 auStack_1c0 [16];
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a0 [4];
  float afStack_190 [4];
  undefined1 auStack_180 [16];
  float afStack_170 [4];
  float afStack_160 [4];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  float fStack_130;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  uint uStack_f0;
  int iStack_ec;
  undefined1 auStack_e0 [16];
  float *pfStack_d0;
  undefined1 *puStack_cc;
  undefined1 *puStack_c8;
  
  uVar14 = 0;
  uStack_350 = *(undefined4 *)param_1[4];
  uStack_34c = *(undefined4 *)(param_1[4] + 4);
  fStack_348 = *(float *)(param_1[4] + 8);
  uStack_f0 = 0;
  iStack_ec = 6;
  uVar30 = 0x3f800000;
  uStack_360 = *(undefined8 *)param_1[4];
  fStack_358 = *(float *)(param_1[4] + 8);
  uVar9 = 0;
  if (param_4 == 0) {
    auStack_3c0 = *param_1;
    auStack_3b0 = param_1[1];
    auStack_3a0 = param_1[2];
    auStack_390 = param_1[3];
  }
  else {
    pauVar15 = (undefined1 (*) [16])param_4;
    auVar20 = _lqc2(*pauVar15);
    auVar22 = _lqc2(pauVar15[1]);
    auVar21 = _lqc2(pauVar15[2]);
    auVar25 = _lqc2(*param_1);
    auVar23 = _lqc2(param_1[1]);
    _vmulabc(auVar20,auVar25);
    _vmaddabc(auVar22,auVar25);
    auVar26 = _vmaddbc(auVar21,auVar25);
    auVar25 = _lqc2(param_1[2]);
    _vmulabc(auVar20,auVar23);
    _vmaddabc(auVar22,auVar23);
    auVar24 = _vmaddbc(auVar21,auVar23);
    auVar27 = _lqc2(pauVar15[3]);
    _vmulabc(auVar20,auVar25);
    _vmaddabc(auVar22,auVar25);
    auVar23 = _vmaddbc(auVar21,auVar25);
    auVar25 = _lqc2(param_1[3]);
    _vmulabc(auVar20,auVar25);
    _vmaddabc(auVar22,auVar25);
    _vmaddabc(auVar21,auVar25);
    auVar25 = _vmaddbc(auVar27,in_vf0);
    auStack_3b0 = _sqc2(auVar24);
    auStack_3a0 = _sqc2(auVar23);
    auStack_390 = _sqc2(auVar25);
    auStack_400 = _sqc2(auVar26);
    auStack_300 = _sqc2(auVar26);
    auStack_2f0 = _sqc2(auVar24);
    auStack_2e0 = _sqc2(auVar23);
    auStack_2d0 = _sqc2(auVar25);
    auStack_340 = _sqc2(auVar26);
    auStack_330 = _sqc2(auVar24);
    auStack_320 = _sqc2(auVar23);
    auStack_310 = _sqc2(auVar25);
    auStack_3c0 = _sqc2(auVar26);
    uStack_3f0 = auStack_3b0._0_4_;
    uStack_3ec = auStack_3b0._4_4_;
    uStack_3e8 = auStack_3b0._8_4_;
    uStack_3e4 = auStack_3b0._12_4_;
    uStack_3e0 = auStack_3a0._0_4_;
    uStack_3dc = auStack_3a0._4_4_;
    uStack_3d8 = auStack_3a0._8_4_;
    uStack_3d4 = auStack_3a0._12_4_;
    uStack_3d0 = auStack_390._0_4_;
    uStack_3cc = auStack_390._4_4_;
    uStack_3c8 = auStack_390._8_4_;
    uStack_3c4 = auStack_390._12_4_;
  }
  auVar25 = _lqc2(auStack_3c0);
  auVar21 = _lqc2(auStack_3b0);
  auVar20 = _lqc2(auStack_3a0);
  _vmove(auVar25);
  _vmove(auVar21);
  auVar24 = _vaddbc(in_vf0,auVar21);
  auVar23 = _vaddbc(in_vf0,auVar25);
  _vmove(auVar20);
  auVar29 = _vaddbc(in_vf0,auVar25);
  _vmove(auVar24);
  _vmove(auVar23);
  auVar26 = _vaddbc(in_vf0,auVar20);
  auVar27 = _vaddbc(in_vf0,auVar20);
  auVar25 = _lqc2(auStack_390);
  _vmove(auVar29);
  auVar20 = _vmulbc(auVar27,auVar25);
  auVar28 = _vaddbc(in_vf0,auVar21);
  auVar21 = _vmulbc(auVar26,auVar25);
  auVar20 = _vadd(auVar21,auVar20);
  auVar25 = _vmulbc(auVar28,auVar25);
  auVar21 = _vadd(auVar20,auVar25);
  auVar20 = _lqc2(*param_2);
  auVar25 = _lqc2(*param_3);
  auVar21 = _vsub(in_vf0,auVar21);
  _vmulabc(auVar26,auVar25);
  _vmaddabc(auVar27,auVar25);
  _vmaddabc(auVar28,auVar25);
  auVar22 = _vmaddbc(auVar21,in_vf0);
  _vmulabc(auVar26,auVar20);
  _vmaddabc(auVar27,auVar20);
  _vmaddabc(auVar28,auVar20);
  auVar20 = _vmaddbc(auVar21,in_vf0);
  auVar25 = _vsub(auVar22,auVar20);
  _sqc2(auVar24);
  _sqc2(auVar23);
  uVar12 = 0;
  _sqc2(auVar29);
  auStack_e0 = _sqc2(auVar22);
  auStack_100 = _sqc2(auVar25);
  _sqc2(auVar26);
  _sqc2(auVar27);
  _sqc2(auVar28);
  _sqc2(auVar21);
  auStack_110 = _sqc2(auVar20);
  puVar6 = auStack_2b0;
  pfVar5 = afStack_2c0;
  fVar19 = DAT_0040e3b0;
  pfVar8 = afStack_380;
  pfVar7 = afStack_370;
  pfVar10 = (float *)&uStack_360;
  do {
    afStack_2c0[0] = (float)auStack_110._0_4_;
    afStack_2c0[1] = (float)auStack_110._4_4_;
    afStack_2c0[2] = (float)auStack_110._8_4_;
    afStack_2c0[3] = (float)auStack_110._12_4_;
    fVar18 = *pfVar5;
    auStack_2b0[0] = auStack_100._0_4_;
    auStack_2b0[1] = auStack_100._4_4_;
    auStack_2b0[2] = auStack_100._8_4_;
    auStack_2b0[3] = auStack_100._12_4_;
    fStack_130 = (float)(*puVar6 & 0x80000000 | 0x3f800000);
    *pfVar8 = fStack_130;
    fVar16 = *pfVar10;
    fVar17 = -fVar16 - fVar18;
    if (fVar19 < fVar17) {
      uVar30 = 0xbf800000;
      uStack_f0 = uVar12;
      fVar19 = fVar17;
    }
    if (fVar19 < fVar18 - fVar16) {
      uVar30 = 0x3f800000;
      uStack_f0 = uVar12;
      fVar19 = fVar18 - fVar16;
    }
    if (fVar18 < -fVar16) {
      *pfVar7 = -1.0;
    }
    else if (fVar16 < fVar18) {
      *pfVar7 = 1.0;
    }
    else {
      uVar9 = uVar9 + 1;
      uVar13 = uVar12;
      if (uVar9 != 1) {
        if (uVar9 != 2) {
          *pfVar7 = 0.0;
          goto LAB_0033cd78;
        }
        uVar13 = 3 - (uVar12 + uVar14);
      }
      *pfVar7 = 0.0;
      uVar14 = uVar13;
    }
LAB_0033cd78:
    uVar12 = uVar12 + 1;
    pfVar7 = pfVar7 + 1;
    pfVar10 = pfVar10 + 1;
    pfVar8 = pfVar8 + 1;
    puVar6 = puVar6 + 1;
    pfVar5 = pfVar5 + 1;
  } while (uVar12 < 3);
  param_5[0x10] = 0;
  puStack_cc = auStack_1c0;
  fVar19 = (float)param_5[0x10];
  puStack_c8 = auStack_140;
  *param_5 = param_1;
  pfStack_d0 = &fStack_210;
  do {
    if ((uVar9 & 2) == 0) {
      fStack_290 = afStack_370[0] * (float)uStack_360;
      fStack_28c = afStack_370[1] * uStack_360._4_4_;
      fStack_288 = afStack_370[2] * fStack_358;
      uStack_114 = uStack_284;
      fStack_120 = fStack_290;
      fStack_11c = fStack_28c;
      fStack_118 = fStack_288;
      if (uVar9 == 0) {
        uVar3 = FUN_0033ee08(*(undefined4 *)(param_1[4] + 0xc),&uStack_2a0,auStack_110,auStack_100,
                             &fStack_120);
        if ((long)uVar3 < 0) {
          return 0;
        }
        if (*(float *)(param_1[4] + 0xc) <= 0.0) {
          uVar3 = 0;
        }
        if ((0 < (long)uVar3) && (auVar25 = _lqc2(auStack_110), (float)uStack_2a0 == 0.0)) {
          auVar20._4_4_ = fStack_11c;
          auVar20._0_4_ = fStack_120;
          auVar20._8_4_ = fStack_118;
          auVar20._12_4_ = uStack_114;
          auVar20 = _lqc2(auVar20);
          auVar25 = _vsub(auVar25,auVar20);
          goto LAB_0033d6e0;
        }
        uVar14 = 0xffffffff;
        uVar9 = 0;
        pfVar11 = &fStack_260;
        pfVar5 = afStack_270;
        pfVar8 = afStack_380;
        pfVar7 = afStack_370;
        pfVar10 = (float *)&uStack_360;
        do {
          if (*pfVar8 * *pfVar7 < 0.0) {
            afStack_270[0] = (float)auStack_110._0_4_;
            afStack_270[1] = (float)auStack_110._4_4_;
            afStack_270[2] = (float)auStack_110._8_4_;
            afStack_270[3] = (float)auStack_110._12_4_;
            fStack_260 = (float)auStack_100._0_4_;
            uStack_25c = auStack_100._4_4_;
            uStack_258 = auStack_100._8_4_;
            uStack_254 = auStack_100._12_4_;
            fStack_280 = *pfVar5 * *pfVar7 - *pfVar10;
            uVar4 = 1;
            if (fStack_280 <= 0.0) {
              fStack_280 = 0.0;
              fStack_27c = 1.0;
            }
            else {
              fStack_27c = -*pfVar11 * *pfVar7;
              if ((fStack_27c < DAT_0040e3b4) || (fStack_27c < fStack_280 * DAT_0040e3b4)) {
                uVar4 = 0xffffffffffffffff;
              }
              else {
                uVar4 = (ulong)(fStack_280 < fStack_27c);
              }
            }
            if ((0 < (long)uVar4) &&
               (((long)uVar3 < 1 ||
                (fStack_280 * uStack_2a0._4_4_ <= (float)uStack_2a0 * fStack_27c)))) {
              uStack_2a0 = CONCAT44(fStack_27c,fStack_280);
              uVar3 = uVar4;
              uVar14 = uVar9;
            }
          }
          uVar9 = uVar9 + 1;
          pfVar10 = pfVar10 + 1;
          pfVar11 = pfVar11 + 1;
          pfVar5 = pfVar5 + 1;
          pfVar8 = pfVar8 + 1;
          pfVar7 = pfVar7 + 1;
        } while (uVar9 < 3);
        if ((long)uVar3 < 1) {
          return 0;
        }
        if ((int)uVar14 < 0) {
          auVar21 = _lqc2(auStack_100);
          auVar20 = _lqc2(auStack_110);
          auVar25._4_4_ = fStack_11c;
          auVar25._0_4_ = fStack_120;
          auVar25._8_4_ = fStack_118;
          auVar25._12_4_ = uStack_114;
          auVar22 = _lqc2(auVar25);
          uStack_2a0._0_4_ = (float)uStack_2a0 * (1.0 / uStack_2a0._4_4_);
          auVar25 = _qmtc2((float)uStack_2a0);
          auVar25 = _vmulbc(auVar21,auVar25);
          auVar25 = _vadd(auVar20,auVar25);
          auStack_110 = _sqc2(auVar25);
          auVar20 = _vsub(auVar25,auVar22);
          param_5[0x10] = (float)param_5[0x10] + (float)uStack_2a0;
          auVar25 = _qmtc2(1.0 / *(float *)(param_1[4] + 0xc));
          auVar25 = _vmulbc(auVar20,auVar25);
          goto LAB_0033d6f8;
        }
        afStack_370[uVar14] = 0.0;
        goto LAB_0033d5dc;
      }
      uStack_230 = 0;
      if (uVar14 == 0) {
        uStack_230 = 0x3f800000;
      }
      uStack_22c = 0;
      if (uVar14 == 1) {
        uStack_22c = 0x3f800000;
      }
      uStack_228 = 0;
      if (uVar14 == 2) {
        uStack_228 = 0x3f800000;
      }
      lVar2 = FUN_0033e060(0x3f800000,*(undefined4 *)(param_1[4] + 0xc),&uStack_2a0,
                           auStack_110._0_8_,auStack_100._0_8_,CONCAT44(fStack_28c,fStack_290),
                           CONCAT44(uStack_22c,uStack_230),0,0);
      if (lVar2 < 0) {
        return 0;
      }
      if (*(float *)(param_1[4] + 0xc) <= 0.0) {
        lVar2 = 0;
      }
      if ((0 < lVar2) &&
         (auVar21._4_4_ = fStack_11c, auVar21._0_4_ = fStack_120, auVar21._8_4_ = fStack_118,
         auVar21._12_4_ = uStack_114, auVar25 = _lqc2(auVar21), (float)uStack_2a0 == 0.0)) {
        auVar20 = _lqc2(auStack_110);
        auVar25 = _vsub(auVar20,auVar25);
        auStack_220 = _sqc2(auVar25);
        *(undefined4 *)(auStack_220 + uVar14 * 4) = 0;
        auVar25 = _lqc2(auStack_220);
LAB_0033d6e0:
        auVar21 = _vmul(auVar25,auVar25);
        auVar20 = _vaddbc(auVar21,auVar21);
        auVar20 = _vaddbc(auVar20,auVar21);
        _vrsqrt(in_vf0,auVar20);
        uVar30 = _vwaitq();
        auVar25 = _vmulq(auVar25,uVar30);
LAB_0033d6f8:
        auVar20 = _lqc2(auStack_400);
        if (param_4 == 0) {
          auVar22 = _lqc2(param_1[2]);
          auVar21 = _lqc2(param_1[3]);
          auVar24 = _lqc2(*param_1);
          auVar23 = _lqc2(param_1[1]);
          auVar20 = _lqc2(auStack_110);
          _vmulabc(auVar24,auVar20);
          _vmaddabc(auVar23,auVar20);
          _vmaddabc(auVar22,auVar20);
          auVar20 = _vmaddbc(auVar21,in_vf0);
          auVar20 = _sqc2(auVar20);
          *(undefined1 (*) [16])(param_5 + 4) = auVar20;
          auVar22 = _lqc2(param_1[2]);
          auVar20 = _lqc2(*param_1);
          auVar21 = _lqc2(param_1[1]);
          _vmulabc(auVar20,auVar25);
          _vmaddabc(auVar21,auVar25);
          auVar25 = _vmaddbc(auVar22,auVar25);
          auVar25 = _sqc2(auVar25);
          *(undefined1 (*) [16])(param_5 + 8) = auVar25;
        }
        else {
          auVar23._4_4_ = uStack_3ec;
          auVar23._0_4_ = uStack_3f0;
          auVar23._8_4_ = uStack_3e8;
          auVar23._12_4_ = uStack_3e4;
          auVar27 = _lqc2(auVar23);
          auVar24._4_4_ = uStack_3dc;
          auVar24._0_4_ = uStack_3e0;
          auVar24._8_4_ = uStack_3d8;
          auVar24._12_4_ = uStack_3d4;
          auVar22 = _lqc2(auVar24);
          auVar21 = _lqc2(auStack_110);
          _vmulabc(auVar20,auVar25);
          _vmaddabc(auVar27,auVar25);
          auVar23 = _vmaddbc(auVar22,auVar25);
          auVar26._4_4_ = uStack_3cc;
          auVar26._0_4_ = uStack_3d0;
          auVar26._8_4_ = uStack_3c8;
          auVar26._12_4_ = uStack_3c4;
          auVar25 = _lqc2(auVar26);
          _vmulabc(auVar20,auVar21);
          _vmaddabc(auVar27,auVar21);
          _vmaddabc(auVar22,auVar21);
          auVar20 = _vmaddbc(auVar25,in_vf0);
          auVar25 = _sqc2(auVar23);
          *(undefined1 (*) [16])(param_5 + 8) = auVar25;
          auVar25 = _sqc2(auVar20);
          *(undefined1 (*) [16])(param_5 + 4) = auVar25;
        }
        _lqc2(*(undefined1 (*) [16])(param_5 + 0xc));
        auVar25 = _qmtc2(afStack_370[0]);
        auVar25 = _vaddbc(in_vf0,auVar25);
        auVar25 = _sqc2(auVar25);
        *(undefined1 (*) [16])(param_5 + 0xc) = auVar25;
        auVar25 = _qmtc2(afStack_370[1]);
        auVar25 = _vaddbc(in_vf0,auVar25);
        auVar25 = _sqc2(auVar25);
        *(undefined1 (*) [16])(param_5 + 0xc) = auVar25;
        auVar25 = _qmtc2(afStack_370[2]);
        auVar25 = _vaddbc(in_vf0,auVar25);
        auVar25 = _sqc2(auVar25);
        *(undefined1 (*) [16])(param_5 + 0xc) = auVar25;
        return 1;
      }
      fStack_210 = (float)auStack_100._0_4_;
      uStack_20c = auStack_100._4_4_;
      uStack_208 = auStack_100._8_4_;
      uStack_204 = auStack_100._12_4_;
      fVar16 = -1.0;
      if (fVar19 < pfStack_d0[uVar14]) {
        fVar16 = 1.0;
      }
      afStack_200[0] = (float)auStack_110._0_4_;
      afStack_200[1] = (float)auStack_110._4_4_;
      afStack_200[2] = (float)auStack_110._8_4_;
      afStack_200[3] = (float)auStack_110._12_4_;
      afStack_1f0[0] = (float)auStack_100._0_4_;
      afStack_1f0[1] = (float)auStack_100._4_4_;
      afStack_1f0[2] = (float)auStack_100._8_4_;
      afStack_1f0[3] = (float)auStack_100._12_4_;
      fVar17 = *(float *)((int)&uStack_360 + uVar14 * 4) - fVar16 * afStack_200[uVar14];
      uStack_250 = CONCAT44(fVar16 * afStack_1f0[uVar14],fVar17);
      if (fVar16 * afStack_1f0[uVar14] < 1.1754944e-38) {
        uStack_250 = CONCAT44(0x3f800000,fVar17);
      }
      uVar9 = uVar14 & 0x1f;
      uVar3 = (ulong)((float)uStack_250 <= uStack_250._4_4_);
      uVar12 = uVar14;
      uVar1 = uStack_250;
      while( true ) {
        uVar9 = 1 << uVar9 & 3;
        uStack_250._0_4_ = (float)uVar1;
        uStack_250._4_4_ = (float)((ulong)uVar1 >> 0x20);
        if (uVar9 == uVar14) break;
        pfVar8 = afStack_370 + uVar9;
        if (afStack_380[uVar9] * *pfVar8 < 0.0) {
          afStack_1e0[0] = (float)auStack_110._0_4_;
          afStack_1e0[1] = (float)auStack_110._4_4_;
          afStack_1e0[2] = (float)auStack_110._8_4_;
          afStack_1e0[3] = (float)auStack_110._12_4_;
          afStack_1d0[0] = (float)auStack_100._0_4_;
          afStack_1d0[1] = (float)auStack_100._4_4_;
          afStack_1d0[2] = (float)auStack_100._8_4_;
          afStack_1d0[3] = (float)auStack_100._12_4_;
          fStack_23c = *pfVar8;
          fStack_240 = afStack_1e0[uVar9] * fStack_23c - *(float *)((int)&uStack_360 + uVar9 * 4);
          uVar4 = 1;
          if (fStack_240 <= 0.0) {
            fStack_240 = 0.0;
            fStack_23c = 1.0;
          }
          else {
            fStack_23c = -afStack_1d0[uVar9] * fStack_23c;
            if ((fStack_23c < DAT_0040e3b4) || (fStack_23c < fStack_240 * DAT_0040e3b4)) {
              uVar4 = 0xffffffffffffffff;
            }
            else {
              uVar4 = (ulong)(fStack_240 < fStack_23c);
            }
          }
          if ((0 < (long)uVar4) &&
             (((long)uVar3 < 1 || (fStack_240 * uStack_250._4_4_ <= (float)uStack_250 * fStack_23c))
             )) {
            uStack_250 = CONCAT44(fStack_23c,fStack_240);
            uVar3 = uVar4;
            uVar12 = uVar9;
            uVar1 = uStack_250;
          }
        }
      }
      if ((0 < lVar2) &&
         (((long)uVar3 < 1 ||
          ((float)uStack_2a0 * uStack_250._4_4_ <= (float)uStack_250 * uStack_2a0._4_4_)))) {
        auVar21 = _lqc2(auStack_100);
        auVar20 = _lqc2(auStack_110);
        auVar22._4_4_ = fStack_11c;
        auVar22._0_4_ = fStack_120;
        auVar22._8_4_ = fStack_118;
        auVar22._12_4_ = uStack_114;
        auVar22 = _lqc2(auVar22);
        uStack_2a0._0_4_ = (float)uStack_2a0 * (1.0 / uStack_2a0._4_4_);
        auVar25 = _qmtc2((float)uStack_2a0);
        auVar25 = _vmulbc(auVar21,auVar25);
        auVar25 = _vadd(auVar20,auVar25);
        auVar20 = _vsub(auVar25,auVar22);
        auStack_110 = _sqc2(auVar25);
        auVar25 = _sqc2(auVar20);
        param_5[0x10] = (float)param_5[0x10] + (float)uStack_2a0;
        *(float *)(puStack_cc + uVar14 * 4) = fVar19;
        auVar20 = _lqc2(auVar25);
        auVar25 = _qmtc2(1.0 / *(float *)(param_1[4] + 0xc));
        auVar25 = _vmulbc(auVar20,auVar25);
        goto LAB_0033d6f8;
      }
      if ((long)uVar3 < 1) {
        return 0;
      }
      uStack_250 = uVar1;
      if (uVar12 == uVar14) {
        uVar9 = 0;
        afStack_370[uVar14] = afStack_380[uVar14];
      }
      else {
        afStack_370[uVar12] = 0.0;
        uVar14 = 3 - (uVar12 + uVar14);
        uVar9 = 2;
      }
      uStack_2a0 = uStack_250;
      uVar1 = uStack_2a0;
      uStack_2a0._4_4_ = (float)((ulong)uStack_250 >> 0x20);
      fVar16 = uStack_2a0._4_4_;
      uStack_2a0 = uVar1;
    }
    else {
      if (uVar9 != 2) {
        auVar25 = _lqc2(*pauGpffff8c18);
        auVar25 = _sqc2(auVar25);
        *(undefined4 *)(puStack_c8 + uStack_f0 * 4) = uVar30;
        auVar25 = _lqc2(auVar25);
        goto LAB_0033d6f8;
      }
      afStack_1a0[0] = (float)auStack_110._0_4_;
      afStack_1a0[1] = (float)auStack_110._4_4_;
      afStack_1a0[2] = (float)auStack_110._8_4_;
      afStack_1a0[3] = (float)auStack_110._12_4_;
      afStack_190[0] = (float)auStack_100._0_4_;
      afStack_190[1] = (float)auStack_100._4_4_;
      afStack_190[2] = (float)auStack_100._8_4_;
      afStack_190[3] = (float)auStack_100._12_4_;
      fVar17 = afStack_370[uVar14];
      fVar16 = afStack_1a0[uVar14] * fVar17 -
               (*(float *)((int)&uStack_360 + uVar14 * 4) + *(float *)(param_1[4] + 0xc));
      uVar3 = 1;
      if (fVar16 <= fVar19) {
        uStack_2a0 = 0x3f80000000000000;
      }
      else {
        fVar17 = -afStack_190[uVar14] * fVar17;
        uStack_2a0 = CONCAT44(fVar17,fVar16);
        if ((fVar17 < DAT_0040e3b4) || (fVar17 < fVar16 * DAT_0040e3b4)) {
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = (ulong)(fVar16 < fVar17);
        }
      }
      if ((long)uVar3 < 0) {
        return 0;
      }
      if ((0 < (long)uVar3) && ((float)uStack_2a0 == fVar19)) {
        auVar25 = _lqc2(*pauGpffff8c18);
        auStack_180 = _sqc2(auVar25);
        *(float *)(auStack_180 + uVar14 * 4) = afStack_370[uVar14];
        auVar25 = _lqc2(auStack_180);
        goto LAB_0033d6f8;
      }
      uVar9 = uVar14 & 0x1f;
      uVar12 = uVar14;
      uVar1 = uStack_2a0;
      while( true ) {
        uVar9 = 1 << uVar9 & 3;
        uStack_2a0._0_4_ = (float)uVar1;
        uStack_2a0._4_4_ = (float)((ulong)uVar1 >> 0x20);
        if (uVar9 == uVar14) break;
        pfVar8 = afStack_380 + uVar9;
        if (*pfVar8 != 0.0) {
          afStack_170[0] = (float)auStack_110._0_4_;
          afStack_170[1] = (float)auStack_110._4_4_;
          afStack_170[2] = (float)auStack_110._8_4_;
          afStack_170[3] = (float)auStack_110._12_4_;
          afStack_160[0] = (float)auStack_100._0_4_;
          afStack_160[1] = (float)auStack_100._4_4_;
          afStack_160[2] = (float)auStack_100._8_4_;
          afStack_160[3] = (float)auStack_100._12_4_;
          fStack_1ac = -*pfVar8;
          fStack_1b0 = afStack_170[uVar9] * fStack_1ac - -*(float *)((int)&uStack_360 + uVar9 * 4);
          uVar4 = 1;
          if (fStack_1b0 <= 0.0) {
            fStack_1b0 = 0.0;
            fStack_1ac = 1.0;
          }
          else {
            fStack_1ac = -afStack_160[uVar9] * fStack_1ac;
            if ((fStack_1ac < DAT_0040e3b4) || (fStack_1ac < fStack_1b0 * DAT_0040e3b4)) {
              uVar4 = 0xffffffffffffffff;
            }
            else {
              uVar4 = (ulong)(fStack_1b0 < fStack_1ac);
            }
          }
          if ((0 < (long)uVar4) &&
             (((long)uVar3 < 1 || (fStack_1b0 * uStack_2a0._4_4_ <= (float)uStack_2a0 * fStack_1ac))
             )) {
            uStack_2a0 = CONCAT44(fStack_1ac,fStack_1b0);
            uVar3 = uVar4;
            uVar12 = uVar9;
            uVar1 = uStack_2a0;
          }
        }
      }
      if ((long)uVar3 < 1) {
        return 0;
      }
      if (uVar12 == uVar14) {
        auVar25 = _lqc2(*(undefined1 (*) [16])PTR_DAT_0040e408);
        auStack_150 = _sqc2(auVar25);
        *(float *)(auStack_150 + uVar14 * 4) = afStack_370[uVar14];
        auVar21 = _lqc2(auStack_100);
        auVar22 = _lqc2(auStack_110);
        auVar25 = _lqc2(auStack_150);
        uStack_2a0._0_4_ = (float)uStack_2a0 * (1.0 / uStack_2a0._4_4_);
        auVar20 = _qmtc2((float)uStack_2a0);
        auVar20 = _vmulbc(auVar21,auVar20);
        auVar20 = _vadd(auVar22,auVar20);
        auStack_110 = _sqc2(auVar20);
        param_5[0x10] = (float)param_5[0x10] + (float)uStack_2a0;
        goto LAB_0033d6f8;
      }
      uVar14 = 3 - (uVar12 + uVar14);
      uStack_2a0 = uVar1;
      afStack_370[uVar12] = afStack_380[uVar12];
LAB_0033d5dc:
      uVar9 = 1;
      fVar16 = uStack_2a0._4_4_;
    }
    auVar21 = _lqc2(auStack_100);
    iStack_ec = iStack_ec + -1;
    auVar20 = _lqc2(auStack_110);
    fVar16 = (float)uStack_2a0 * (1.0 / fVar16);
    auVar25 = _qmtc2(fVar16);
    auVar25 = _vmulbc(auVar21,auVar25);
    auVar20 = _vadd(auVar20,auVar25);
    auVar25 = _lqc2(auStack_e0);
    auVar25 = _vsub(auVar25,auVar20);
    auStack_110 = _sqc2(auVar20);
    auStack_100 = _sqc2(auVar25);
    param_5[0x10] = (float)param_5[0x10] + fVar16;
    if (iStack_ec == 0) {
      return 0;
    }
  } while( true );
}


// ==== FUN_0033d808 @ 0033d808 ====

undefined4
FUN_0033d808(undefined1 (*param_1) [16],long param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  pauVar1 = (undefined1 (*) [16])param_2;
  if (param_2 == 0) {
    auStack_c0 = *param_1;
    auStack_b0 = param_1[1];
    auStack_a0 = param_1[2];
    auStack_90 = param_1[3];
  }
  else {
    auVar3 = _lqc2(*pauVar1);
    auVar4 = _lqc2(pauVar1[1]);
    auVar2 = _lqc2(pauVar1[2]);
    auVar5 = _lqc2(*param_1);
    auVar7 = _lqc2(param_1[1]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    auVar6 = _vmaddbc(auVar2,auVar5);
    auVar5 = _lqc2(param_1[2]);
    _vmulabc(auVar3,auVar7);
    _vmaddabc(auVar4,auVar7);
    auVar8 = _vmaddbc(auVar2,auVar7);
    auVar9 = _lqc2(pauVar1[3]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    auVar7 = _vmaddbc(auVar2,auVar5);
    auVar5 = _lqc2(param_1[3]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    _vmaddabc(auVar2,auVar5);
    auVar2 = _vmaddbc(auVar9,in_vf0);
    auStack_c0 = _sqc2(auVar6);
    auStack_b0 = _sqc2(auVar8);
    auStack_a0 = _sqc2(auVar7);
    auStack_90 = _sqc2(auVar2);
    _sqc2(auVar6);
    _sqc2(auVar8);
    _sqc2(auVar7);
    _sqc2(auVar2);
    _sqc2(auVar6);
    _sqc2(auVar8);
    _sqc2(auVar7);
    _sqc2(auVar2);
  }
  auVar7 = _qmtc2(*(undefined4 *)param_1[4]);
  auVar4 = _qmtc2(*(undefined4 *)(param_1[4] + 4));
  auVar3 = _lqc2(auStack_b0);
  auVar2 = _lqc2(auStack_c0);
  auVar3 = _vabs(auVar3);
  auVar4 = _vmulbc(auVar3,auVar4);
  auVar3 = _vabs(auVar2);
  auVar2 = _lqc2(auStack_a0);
  auVar5 = _qmtc2(*(undefined4 *)(param_1[4] + 8));
  auVar3 = _vmulbc(auVar3,auVar7);
  auVar2 = _vabs(auVar2);
  auVar2 = _vmulbc(auVar2,auVar5);
  auVar3 = _vadd(auVar3,auVar4);
  auVar3 = _vadd(auVar3,auVar2);
  auVar4 = _qmtc2(*(undefined4 *)(param_1[4] + 0xc));
  auVar2 = _lqc2(auStack_90);
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar4 = _vadd(auVar2,auVar3);
  auVar3 = _vsub(auVar2,auVar3);
  auVar2 = _sqc2(auVar4);
  param_4[1] = auVar2;
  auVar2 = _sqc2(auVar3);
  *param_4 = auVar2;
  return 1;
}


// ==== FUN_0033d940 @ 0033d940 ====
// GLOBAL DAT_0045e8e0 undefined4
// GLOBAL DAT_0045e8e4 undefined4
// GLOBAL DAT_0045e8e8 undefined4
// GLOBAL DAT_0045e8ec undefined4
// GLOBAL DAT_0045e8f0 undefined4
// GLOBAL DAT_0045e8f4 undefined4
// GLOBAL DAT_0045e8f8 undefined4
// GLOBAL DAT_0045e8fc undefined4
// GLOBAL DAT_0045e900 undefined4
// GLOBAL DAT_0045e904 undefined4
// GLOBAL DAT_0045e908 undefined4
// GLOBAL DAT_0045e90c undefined4
// GLOBAL DAT_0045e910 undefined4
// GLOBAL DAT_0045e914 undefined4
// GLOBAL DAT_0045e918 undefined4
// GLOBAL DAT_0045e91c undefined4

void FUN_0033d940(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9170,2);
      FUN_00100230(&gp0xffff9168,2);
    }
    else {
      FUN_00100228(&gp0xffff9168);
      FUN_00100258(&gp0xffff9170);
      DAT_0045e8e0 = 0x3fc90fdb;
      DAT_0045e8e4 = 0xbe22f983;
      DAT_0045e8e8 = 0x4b400000;
      DAT_0045e8ec = uStack_44;
      DAT_0045e8f0 = 0xbe22f983;
      DAT_0045e8f4 = 0x3f000000;
      DAT_0045e8f8 = 0x3e800000;
      DAT_0045e8fc = uStack_34;
      DAT_0045e900 = 0xc2992661;
      DAT_0045e904 = 0xc2255de0;
      DAT_0045e908 = 0x42a33457;
      DAT_0045e90c = uStack_24;
      DAT_0045e910 = 0x421ed7b7;
      DAT_0045e914 = 0x40c90fda;
      DAT_0045e918 = 0;
      DAT_0045e91c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0033dab8 @ 0033dab8 ====

void FUN_0033dab8(void)

{
  FUN_0033d940(1,0xffff);
  return;
}


// ==== FUN_0033dad8 @ 0033dad8 ====

void FUN_0033dad8(void)

{
  FUN_0033d940(0,0xffff);
  return;
}


// ==== FUN_0033daf8 @ 0033daf8 ====

undefined4
FUN_0033daf8(undefined1 (*param_1) [16],long param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  pauVar1 = (undefined1 (*) [16])param_2;
  if (param_2 == 0) {
    auStack_a0 = param_1[2];
    auStack_90 = param_1[3];
  }
  else {
    auVar3 = _lqc2(*pauVar1);
    auVar4 = _lqc2(pauVar1[1]);
    auVar2 = _lqc2(pauVar1[2]);
    auVar5 = _lqc2(*param_1);
    auVar7 = _lqc2(param_1[1]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    auVar6 = _vmaddbc(auVar2,auVar5);
    auVar5 = _lqc2(param_1[2]);
    _vmulabc(auVar3,auVar7);
    _vmaddabc(auVar4,auVar7);
    auVar8 = _vmaddbc(auVar2,auVar7);
    auVar9 = _lqc2(pauVar1[3]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    auVar7 = _vmaddbc(auVar2,auVar5);
    auVar5 = _lqc2(param_1[3]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    _vmaddabc(auVar2,auVar5);
    auVar2 = _vmaddbc(auVar9,in_vf0);
    _sqc2(auVar6);
    _sqc2(auVar8);
    auStack_a0 = _sqc2(auVar7);
    auStack_90 = _sqc2(auVar2);
    _sqc2(auVar6);
    _sqc2(auVar8);
    _sqc2(auVar7);
    _sqc2(auVar2);
    _sqc2(auVar6);
    _sqc2(auVar8);
    _sqc2(auVar7);
    _sqc2(auVar2);
  }
  auVar2 = _lqc2(auStack_a0);
  auVar3 = _qmtc2(*(undefined4 *)param_1[4]);
  auVar2 = _vabs(auVar2);
  auVar4 = _qmtc2(*(undefined4 *)(param_1[4] + 0xc));
  auVar2 = _vmulbc(auVar2,auVar3);
  auVar3 = _lqc2(auStack_90);
  auVar2 = _vaddbc(auVar2,auVar4);
  auVar4 = _vadd(auVar3,auVar2);
  auVar3 = _vsub(auVar3,auVar2);
  auVar2 = _sqc2(auVar4);
  param_4[1] = auVar2;
  auVar2 = _sqc2(auVar3);
  *param_4 = auVar2;
  return 1;
}


// ==== FUN_0033dbf8 @ 0033dbf8 ====

/* WARNING: Removing unreachable block (ram,0x0033dcd4) */

void FUN_0033dbf8(undefined1 (*param_1) [16],undefined8 param_2,undefined4 param_3,
                 undefined4 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  auVar1 = _qmtc2(param_3);
  auVar4 = _lqc2(param_1[4]);
  auVar2 = _vmul(auVar1,auVar4);
  auVar1 = _vaddbc(auVar2,auVar2);
  auVar1 = _vaddbc(auVar1,auVar2);
  auVar1 = _qmfc2(auVar1._0_4_);
  if (ABS(auVar1._0_4_) < 0.05) {
    auVar2 = _lqc2(*param_1);
    auVar1 = _qmtc2(*(undefined4 *)param_1[7]);
    auVar1 = _vmulbc(auVar4,auVar1);
    auVar4 = _vsub(auVar2,auVar1);
    auVar1 = _vadd(auVar2,auVar1);
    auVar4 = _vsub(auVar4,auVar1);
    auVar1 = _sqc2(auVar1);
    auVar2 = _sqc2(auVar4);
    auVar3 = _vmul(auVar4,auVar4);
    auVar4 = _vaddbc(auVar3,auVar3);
    auVar4 = _vaddbc(auVar4,auVar3);
    auVar4 = _qmfc2(auVar4._0_4_);
    uStack_78 = auVar1._8_4_;
    uStack_74 = auVar1._12_4_;
    if (1.1920929e-07 < auVar4._0_4_) {
      fStack_50 = SQRT(auVar4._0_4_);
      auVar4 = _lqc2(auVar2);
      auVar2 = _qmtc2(1.0 / fStack_50);
      auVar2 = _vmulbc(auVar4,auVar2);
      auStack_70 = _sqc2(auVar2);
    }
    param_4[4] = auVar1._0_4_;
    param_4[5] = auVar1._4_4_;
    param_4[6] = uStack_78;
    param_4[7] = uStack_74;
    param_4[8] = auStack_70._0_4_;
    param_4[9] = auStack_70._4_4_;
    param_4[10] = auStack_70._8_4_;
    param_4[0xb] = auStack_70._12_4_;
    param_4[0xc] = uStack_60;
    param_4[0xd] = uStack_5c;
    param_4[0xe] = uStack_58;
    param_4[0xf] = uStack_54;
    param_4[0x10] = fStack_50;
    param_4[0x11] = uStack_4c;
    param_4[0x12] = uStack_48;
    param_4[0x13] = uStack_44;
    param_4[0x4c] = 1;
  }
  else {
    if (0.0 < auVar1._0_4_) {
      auVar2 = _lqc2(*param_1);
      auVar1 = _qmtc2(*(undefined4 *)param_1[7]);
      auVar1 = _vmulbc(auVar4,auVar1);
      auVar1 = _vadd(auVar2,auVar1);
      auVar1 = _sqc2(auVar1);
      *(undefined1 (*) [16])(param_4 + 0x48) = auVar1;
    }
    else {
      auVar2 = _lqc2(*param_1);
      auVar1 = _qmtc2(*(undefined4 *)param_1[7]);
      auVar1 = _vmulbc(auVar4,auVar1);
      auVar1 = _vsub(auVar2,auVar1);
      auVar1 = _sqc2(auVar1);
      *(undefined1 (*) [16])(param_4 + 0x48) = auVar1;
    }
    param_4[0x4c] = 0;
  }
  *param_4 = 0;
  return;
}


// ==== FUN_0033dd98 @ 0033dd98 ====

void FUN_0033dd98(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      auVar5 = _lqc2(*param_1);
      uVar2 = uVar2 + 1;
      auVar4 = _lqc2(*param_2);
      auVar5 = _vmul(auVar4,auVar5);
      auVar4 = _vaddbc(auVar5,auVar5);
      auVar4 = _vaddbc(auVar4,auVar5);
      auVar4 = _qmfc2(auVar4._0_4_);
      fVar1 = auVar4._0_4_;
      param_4[1] = fVar1;
      *param_4 = fVar1;
      auVar4 = _lqc2(*param_2);
      auVar5 = _lqc2(param_1[4]);
      param_2 = param_2 + 1;
      auVar5 = _vmul(auVar5,auVar4);
      auVar4 = _vaddbc(auVar5,auVar5);
      auVar4 = _vaddbc(auVar4,auVar5);
      auVar4 = _qmfc2(auVar4._0_4_);
      fVar3 = ABS(auVar4._0_4_) * *(float *)param_1[7];
      param_4[1] = fVar1 + fVar3;
      *param_4 = fVar1 - fVar3;
      param_4 = param_4 + 2;
    } while (uVar2 < param_3);
  }
  return;
}


// ==== FUN_0033de40 @ 0033de40 ====
// GLOBAL LAB_0033eb00 undefined
// GLOBAL FUN_0033dbf8 undefined
// GLOBAL LAB_0033eb08 undefined
// GLOBAL FUN_0033dd98 undefined

undefined4 FUN_0033de40(undefined1 (*param_1) [16],undefined4 *param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if (param_3 == 0) {
    auStack_a0 = param_1[2];
    auStack_90 = param_1[3];
  }
  else {
    pauVar1 = (undefined1 (*) [16])param_3;
    auVar4 = _lqc2(*pauVar1);
    auVar5 = _lqc2(pauVar1[1]);
    auVar3 = _lqc2(pauVar1[2]);
    auVar6 = _lqc2(*param_1);
    auVar8 = _lqc2(param_1[1]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    auVar7 = _vmaddbc(auVar3,auVar6);
    auVar6 = _lqc2(param_1[2]);
    _vmulabc(auVar4,auVar8);
    _vmaddabc(auVar5,auVar8);
    auVar9 = _vmaddbc(auVar3,auVar8);
    auVar10 = _lqc2(pauVar1[3]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    auVar8 = _vmaddbc(auVar3,auVar6);
    auVar6 = _lqc2(param_1[3]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    _vmaddabc(auVar3,auVar6);
    auVar3 = _vmaddbc(auVar10,in_vf0);
    _sqc2(auVar7);
    _sqc2(auVar9);
    auStack_a0 = _sqc2(auVar8);
    auStack_90 = _sqc2(auVar3);
    _sqc2(auVar7);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar3);
    _sqc2(auVar7);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar3);
  }
  *param_2 = auStack_90._0_4_;
  param_2[1] = auStack_90._4_4_;
  param_2[2] = auStack_90._8_4_;
  param_2[3] = auStack_90._12_4_;
  param_2[0x23] = 1;
  uVar2 = *(undefined4 *)(param_1[4] + 0xc);
  param_2[0x10] = auStack_a0._0_4_;
  param_2[0x11] = auStack_a0._4_4_;
  param_2[0x12] = auStack_a0._8_4_;
  param_2[0x13] = auStack_a0._12_4_;
  param_2[0x1f] = uVar2;
  param_2[0x22] = 0;
  uVar2 = *(undefined4 *)param_1[4];
  param_2[0x27] = &LAB_0033eb00;
  param_2[0x1c] = uVar2;
  param_2[0x20] = param_1;
  param_2[0x24] = FUN_0033dbf8;
  param_2[0x25] = &LAB_0033eb08;
  param_2[0x26] = FUN_0033dd98;
  return 1;
}


// ==== FUN_0033df68 @ 0033df68 ====

/* WARNING: Removing unreachable block (ram,0x0033dff0) */

undefined8 FUN_0033df68(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar4 = _qmtc2(*(undefined4 *)(param_1 + 0x40));
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar2 = _vmulbc(auVar2,auVar4);
  auVar4 = _vsub(auVar1,auVar2);
  auVar1 = _vadd(auVar1,auVar2);
  auVar4 = _vsub(auVar4,auVar1);
  auVar1 = _sqc2(auVar1);
  auVar2 = _sqc2(auVar4);
  auVar3 = _vmul(auVar4,auVar4);
  auVar4 = _vaddbc(auVar3,auVar3);
  auVar4 = _vaddbc(auVar4,auVar3);
  auVar4 = _qmfc2(auVar4._0_4_);
  uStack_70 = auVar1._0_4_;
  uStack_6c = auVar1._4_4_;
  uStack_68 = auVar1._8_4_;
  uStack_64 = auVar1._12_4_;
  if (1.1920929e-07 < auVar4._0_4_) {
    uStack_40 = SQRT(auVar4._0_4_);
    auVar2 = _lqc2(auVar2);
    auVar1 = _qmtc2(1.0 / uStack_40);
    auVar1 = _vmulbc(auVar2,auVar1);
    auStack_60 = _sqc2(auVar1);
  }
  *(undefined4 *)(param_4 + 0x130) = 1;
  *(undefined4 *)(param_4 + 0x10) = uStack_70;
  *(undefined4 *)(param_4 + 0x14) = uStack_6c;
  *(undefined4 *)(param_4 + 0x18) = uStack_68;
  *(undefined4 *)(param_4 + 0x1c) = uStack_64;
  *(undefined4 *)(param_4 + 0x20) = auStack_60._0_4_;
  *(undefined4 *)(param_4 + 0x24) = auStack_60._4_4_;
  *(undefined4 *)(param_4 + 0x28) = auStack_60._8_4_;
  *(undefined4 *)(param_4 + 0x2c) = auStack_60._12_4_;
  *(undefined4 *)(param_4 + 0x30) = uStack_50;
  *(undefined4 *)(param_4 + 0x34) = uStack_4c;
  *(undefined4 *)(param_4 + 0x38) = uStack_48;
  *(undefined4 *)(param_4 + 0x3c) = uStack_44;
  *(float *)(param_4 + 0x40) = uStack_40;
  *(undefined4 *)(param_4 + 0x44) = uStack_3c;
  *(undefined4 *)(param_4 + 0x48) = uStack_38;
  *(undefined4 *)(param_4 + 0x4c) = uStack_34;
  return 1;
}


// ==== FUN_0033e060 @ 0033e060 ====

/* WARNING: Removing unreachable block (ram,0x0033e1e4) */

undefined8
FUN_0033e060(float param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,long param_8,long param_9)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar6 = _qmtc2(param_6);
  auVar7 = _qmtc2(param_4);
  auVar6 = _vsub(auVar6,auVar7);
  auVar9 = _qmtc2(param_7);
  _vopmula(auVar6,auVar9);
  auVar8 = _vopmsub(auVar9,auVar6);
  param_2 = param_1 * param_2 * param_2;
  auVar7 = _vmul(auVar8,auVar8);
  auVar6 = _vaddbc(auVar7,auVar7);
  auVar6 = _vaddbc(auVar6,auVar7);
  auVar6 = _qmfc2(auVar6._0_4_);
  auVar7 = _qmtc2(param_5);
  if ((param_2 <= auVar6._0_4_) || (uVar3 = 1, param_9 != 0)) {
    _vopmula(auVar7,auVar9);
    auVar9 = _vopmsub(auVar9,auVar7);
    auVar8 = _vmul(auVar8,auVar9);
    auVar7 = _vaddbc(auVar8,auVar8);
    auVar7 = _vaddbc(auVar7,auVar8);
    auVar7 = _qmfc2(auVar7._0_4_);
    fVar1 = auVar7._0_4_;
    if ((param_8 != 0) || (uVar3 = 0xffffffffffffffff, 0.0 < fVar1)) {
      auVar8 = _vmul(auVar9,auVar9);
      auVar7 = _vaddbc(auVar8,auVar8);
      auVar7 = _vaddbc(auVar7,auVar8);
      auVar7 = _qmfc2(auVar7._0_4_);
      fVar2 = auVar7._0_4_;
      fVar5 = (fVar1 * fVar1 - fVar2 * auVar6._0_4_) + fVar2 * param_2;
      if (0.0 <= fVar5) {
        fVar4 = fVar1 - fVar2;
        if (param_8 == 0) {
          if ((0.0 <= fVar4) && (fVar5 <= fVar4 * fVar4)) {
            return 0;
          }
        }
        else {
          if (0.0 <= fVar4) {
            return 0;
          }
          if (fVar4 * fVar4 <= fVar5) {
            return 0;
          }
        }
        fVar4 = 1.0;
        if (param_8 != 0) {
          fVar4 = -1.0;
        }
        param_3[1] = fVar2;
        uVar3 = 1;
        *param_3 = fVar1 - fVar4 * SQRT(fVar5);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    *param_3 = 0.0;
    param_3[1] = 1.0;
  }
  return uVar3;
}


// ==== FUN_0033e9b8 @ 0033e9b8 ====
// GLOBAL DAT_0045e920 undefined4
// GLOBAL DAT_0045e924 undefined4
// GLOBAL DAT_0045e928 undefined4
// GLOBAL DAT_0045e92c undefined4
// GLOBAL DAT_0045e930 undefined4
// GLOBAL DAT_0045e934 undefined4
// GLOBAL DAT_0045e938 undefined4
// GLOBAL DAT_0045e93c undefined4
// GLOBAL DAT_0045e940 undefined4
// GLOBAL DAT_0045e944 undefined4
// GLOBAL DAT_0045e948 undefined4
// GLOBAL DAT_0045e94c undefined4
// GLOBAL DAT_0045e950 undefined4
// GLOBAL DAT_0045e954 undefined4
// GLOBAL DAT_0045e958 undefined4
// GLOBAL DAT_0045e95c undefined4

void FUN_0033e9b8(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9180,2);
      FUN_00100230(&gp0xffff9178,2);
    }
    else {
      FUN_00100228(&gp0xffff9178);
      FUN_00100258(&gp0xffff9180);
      DAT_0045e920 = 0x3fc90fdb;
      DAT_0045e924 = 0xbe22f983;
      DAT_0045e928 = 0x4b400000;
      DAT_0045e92c = uStack_44;
      DAT_0045e930 = 0xbe22f983;
      DAT_0045e934 = 0x3f000000;
      DAT_0045e938 = 0x3e800000;
      DAT_0045e93c = uStack_34;
      DAT_0045e940 = 0xc2992661;
      DAT_0045e944 = 0xc2255de0;
      DAT_0045e948 = 0x42a33457;
      DAT_0045e94c = uStack_24;
      DAT_0045e950 = 0x421ed7b7;
      DAT_0045e954 = 0x40c90fda;
      DAT_0045e958 = 0;
      DAT_0045e95c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0033eb90 @ 0033eb90 ====

void FUN_0033eb90(void)

{
  FUN_0033e9b8(1,0xffff);
  return;
}


