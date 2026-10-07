// ==== FUN_00180a48 @ 00180a48 ====

void FUN_00180a48(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  param_1[0x1d] = param_3;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *param_1 = (int)param_2;
  param_1[1] = (int)((ulong)param_2 >> 0x20);
  param_1[2] = in_a1_udw;
  param_1[3] = in_register_0000005c;
  FUN_0017b358(param_1 + 0x44);
  FUN_00181ad0(param_1[0x50] + 0xec0,5);
  FUN_00173690(param_1 + 0x52);
  *(undefined1 *)((int)param_1 + 0x14f) = 0;
  *(undefined1 *)((int)param_1 + 0x14d) = 0;
  return;
}


// ==== FUN_00180aa0 @ 00180aa0 ====

void FUN_00180aa0(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = _qmtc2(param_3);
  _vadd(in_vf0,auVar1);
  auVar1 = _qmtc2(param_1);
  auVar1 = _vmr32(auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  FUN_00180a48(param_2,auVar1._0_8_);
  *(undefined1 *)((int)param_2 + 0x14f) = 0;
  return;
}


// ==== FUN_00180ae0 @ 00180ae0 ====

void FUN_00180ae0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *param_1 = (int)param_2;
  param_1[1] = (int)((ulong)param_2 >> 0x20);
  param_1[2] = in_a1_udw;
  param_1[3] = in_register_0000005c;
  param_1[0x1d] = 2;
  FUN_0017b358(param_1 + 0x44);
  FUN_00173690(param_1 + 0x52);
  *(undefined1 *)((int)param_1 + 0x14d) = 1;
  *(undefined1 *)((int)param_1 + 0x14f) = 0;
  return;
}


// ==== FUN_00180b38 @ 00180b38 ====

void FUN_00180b38(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}


// ==== FUN_00180b40 @ 00180b40 ====

void FUN_00180b40(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x140);
  FUN_00180aa0(*puVar1,puVar1 + 0x2cc,*(undefined4 *)(puVar1[0x1f] + 0xa0),2);
  return;
}


// ==== FUN_00180b70 @ 00180b70 ====

bool FUN_00180b70(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4 = _qmtc2(param_2);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _lqc2(**(undefined1 (**) [16])(param_1 + 0x100));
  fVar1 = *(float *)(*(undefined1 (**) [16])(param_1 + 0x100))[1];
  auVar2 = _vsub(auVar4,auVar2);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_4_ < fVar1 * fVar1;
}


// ==== FUN_00180bc0 @ 00180bc0 ====

undefined8 FUN_00180bc0(int param_1)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uStack_2c;
  uint uStack_28;
  
  lVar3 = FUN_00182270(0x3e800000,*(int *)(param_1 + 0x140) + 0x810,
                       **(undefined8 **)(param_1 + 0x100));
  if (lVar3 == 0) {
    if (*(char *)(param_1 + 0x14c) == '\0') {
      return 0;
    }
    lVar3 = FUN_001829e8(*(int *)(param_1 + 0x140) + 0x810);
    if (lVar3 == 0) {
      return 0;
    }
    pauVar2 = (undefined1 (*) [16])FUN_00182960(*(int *)(param_1 + 0x140) + 0x810);
    auVar5 = _lqc2(*pauVar2);
    auVar4 = _lqc2(**(undefined1 (**) [16])(param_1 + 0x100));
    auVar5 = _vsub(auVar5,auVar4);
    auVar4 = _qmfc2(auVar5._0_4_);
    bVar1 = false;
    if ((auVar4._0_4_ & 0x7f800000) < 0x37800001) {
      auVar4 = _sqc2(auVar5);
      uStack_2c = auVar4._4_4_;
      bVar1 = false;
      if ((uStack_2c & 0x7f800000) < 0x37800001) {
        auVar4 = _sqc2(auVar5);
        uStack_28 = auVar4._8_4_;
        bVar1 = (uStack_28 & 0x7f800000) < 0x37800001;
      }
    }
    if (!bVar1) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x14f) = 1;
  return 1;
}


// ==== FUN_00180cc8 @ 00180cc8 ====

void FUN_00180cc8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14c) = param_2;
  return;
}


// ==== FUN_00180cd8 @ 00180cd8 ====

undefined8 FUN_00180cd8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined1 auStack_60 [8];
  uint uStack_58;
  undefined1 auStack_50 [16];
  
  lVar4 = FUN_001829a8(*(int *)(param_1 + 0x140) + 0x810);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = FUN_0018ddd8(*(int *)(param_1 + 0x140) + 0xc94);
    uVar5 = 1;
    if (lVar4 == 0) {
      uVar5 = 1;
      if (*(char *)(*(int *)(param_1 + 0x140) + 0xd24) != '\0') {
        lVar4 = FUN_001829a0(*(int *)(param_1 + 0x140) + 0x810);
        iVar6 = *(int *)(param_1 + 0x140);
        if (lVar4 != 4) {
          lVar4 = FUN_001829a0(iVar6 + 0x810);
          if (lVar4 != 5) {
            return 1;
          }
          iVar6 = *(int *)(param_1 + 0x140);
        }
        iVar2 = DAT_0040f4d0;
        auVar8 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
        auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar6 + 0x7c) + 0xa0));
        auVar7 = _vsubbc(auVar7,auVar8);
        _auStack_60 = _sqc2(auVar7);
        uVar5 = 1;
        if (ABS((float)auStack_60._4_4_) <= 3.0) {
          auVar9 = _vaddbc(in_vf0,in_vf0);
          auVar8 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
          auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar6 + 0x7c) + 0xa0));
          auVar7 = _vsub(auVar7,auVar8);
          auVar7 = _vmul(auVar7,auVar7);
          _vaddabc(auVar7,auVar7);
          auVar7 = _vmaddbc(auVar9,auVar7);
          auVar7 = _qmfc2(auVar7._0_4_);
          uVar5 = 1;
          if (auVar7._0_4_ <= 25.0) {
            uVar3 = FUN_00182968(iVar6 + 0x810);
            auVar9 = _qmtc2(uVar3);
            auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1 + 0x140) + 0x7c) + 0xa0)
                          );
            auVar10 = _vsub(auVar8,auVar9);
            uStack_70 = 0x40a00000;
            auVar7 = _qmfc2(auVar10._0_4_);
            auStack_80 = _sqc2(auVar9);
            auStack_90 = _sqc2(auVar8);
            bVar1 = true;
            if ((auVar7._0_4_ & 0x7f800000) < 0x37800001) {
              _auStack_60 = _sqc2(auVar10);
              bVar1 = true;
              if ((auStack_60._4_4_ & 0x7f800000) < 0x37800001) {
                _auStack_60 = _sqc2(auVar10);
                bVar1 = 0x37800000 < (uStack_58 & 0x7f800000);
              }
            }
            if (bVar1) {
              auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
              _lqc2(auStack_50);
              _vadd(in_vf0,auVar7);
              auVar7 = _qmtc2(0);
              auVar8 = _vsubbc(in_vf0,in_vf0);
              auVar7 = _vaddbc(auVar8,auVar7);
              auVar7 = _qmfc2(auVar7._0_4_);
              lVar4 = FUN_0027f070(auVar7._0_8_,auStack_90);
              if (lVar4 != 0) {
                return 0;
              }
            }
            uVar5 = 1;
          }
        }
      }
    }
  }
  return uVar5;
}


// ==== FUN_00180ed8 @ 00180ed8 ====

int FUN_00180ed8(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x100) + 0x14) == 1) {
    return 0;
  }
  if (*(char *)(*(int *)(param_1 + 0x100) + 0x71) != '\0') {
    return 0;
  }
  return param_1 + 0x20;
}


// ==== FUN_00180f10 @ 00180f10 ====

void FUN_00180f10(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// ==== FUN_00180f18 @ 00180f18 ====

undefined4 FUN_00180f18(undefined1 *param_1)

{
  *param_1 = 0;
  return 1;
}


// ==== FUN_00180f28 @ 00180f28 ====

undefined4 FUN_00180f28(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  
  pcVar6 = (char *)param_1;
  if (*pcVar6 == '\0') {
    uVar4 = FUN_00188f80(*(int *)(pcVar6 + 4) + 0x150);
    lVar5 = FUN_00178f18(uVar4);
    if (lVar5 != 0) {
      iVar3 = FUN_0013d400(*(undefined4 *)(pcVar6 + 4));
      iVar2 = *(int *)(iVar3 + 0x34);
      sVar1 = *(short *)(iVar2 + 0x18);
      uVar4 = FUN_00188f58(*(int *)(pcVar6 + 4) + 0x150);
      lVar5 = (**(code **)(iVar2 + 0x1c))(iVar3 + sVar1,param_1,uVar4);
      if (lVar5 == 0) {
        return 0;
      }
    }
    *pcVar6 = '\x01';
  }
  return 1;
}


// ==== FUN_00180fe0 @ 00180fe0 ====

void FUN_00180fe0(undefined8 param_1)

{
  int iVar1;
  
  *(undefined1 *)param_1 = 0;
  iVar1 = FUN_0013d400(*(undefined4 *)((undefined1 *)param_1 + 4));
  (**(code **)(*(int *)(iVar1 + 0x34) + 0x2c))
            (iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x28),param_1);
  return;
}


// ==== FUN_00181028 @ 00181028 ====

undefined1 FUN_00181028(undefined1 *param_1)

{
  return *param_1;
}


// ==== FUN_00181030 @ 00181030 ====

void FUN_00181030(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar3 = (int *)(param_1 + 0x718);
  iVar5 = 0x49;
  puVar4 = (undefined4 *)(param_1 + 0x83c);
  *(undefined4 *)(param_1 + 0x714) = param_2;
  do {
    *puVar4 = 0;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar5);
  *(int *)(param_1 + 0x774) = param_1 + 0xa10;
  *(int *)(param_1 + 0x728) = param_1 + 0x864;
  *(int *)(param_1 + 0x778) = param_1 + 0xa1c;
  *(int *)(param_1 + 0x7b0) = param_1 + 0xb30;
  *(int *)(param_1 + 0x77c) = param_1 + 0xa30;
  *(int *)(param_1 + 0x7b8) = param_1 + 0xb70;
  *(int *)(param_1 + 0x780) = param_1 + 0xa50;
  *(int *)(param_1 + 0x71c) = param_1 + 0x848;
  *(int *)(param_1 + 0x784) = param_1 + 0xa60;
  *(int *)(param_1 + 0x7c0) = param_1 + 0xbb0;
  *(int *)(param_1 + 0x788) = param_1 + 0xab0;
  *(int *)(param_1 + 0x78c) = param_1 + 0xac0;
  *(int *)(param_1 + 0x790) = param_1 + 0xae8;
  *(int *)(param_1 + 0x794) = param_1 + 0xaf4;
  *(int *)(param_1 + 0x798) = param_1 + 0xafc;
  *(int *)(param_1 + 0x7b4) = param_1 + 0xb40;
  *(int *)(param_1 + 0x7bc) = param_1 + 0xb90;
  *(int *)(param_1 + 0x718) = param_1 + 0x840;
  *(int *)(param_1 + 0x7c4) = param_1 + 0xbc0;
  *(int *)(param_1 + 0x720) = param_1 + 0x850;
  *(int *)(param_1 + 0x724) = param_1 + 0x85c;
  *(int *)(param_1 + 0x72c) = param_1 + 0x874;
  *(int *)(param_1 + 0x730) = param_1 + 0x880;
  *(int *)(param_1 + 0x734) = param_1 + 0x888;
  *(int *)(param_1 + 0x738) = param_1 + 0x894;
  *(int *)(param_1 + 0x73c) = param_1 + 0x8a0;
  *(int *)(param_1 + 0x740) = param_1 + 0x8c0;
  *(int *)(param_1 + 0x744) = param_1 + 0x8c8;
  *(int *)(param_1 + 0x748) = param_1 + 0x8d0;
  *(int *)(param_1 + 0x74c) = param_1 + 0x8e0;
  *(int *)(param_1 + 0x7a0) = param_1 + 0xb10;
  *(int *)(param_1 + 0x7c8) = param_1 + 0xbd0;
  *(int *)(param_1 + 0x7cc) = param_1 + 0xc00;
  *(int *)(param_1 + 0x750) = param_1 + 0x910;
  *(int *)(param_1 + 2000) = param_1 + 0xc10;
  *(int *)(param_1 + 0x7d4) = param_1 + 0xc40;
  *(int *)(param_1 + 0x7d8) = param_1 + 0xc80;
  *(int *)(param_1 + 0x754) = param_1 + 0x930;
  *(int *)(param_1 + 0x758) = param_1 + 0x940;
  *(int *)(param_1 + 0x75c) = param_1 + 0x980;
  *(int *)(param_1 + 0x760) = param_1 + 0x988;
  *(int *)(param_1 + 0x764) = param_1 + 0x990;
  *(int *)(param_1 + 0x768) = param_1 + 0x9c0;
  *(int *)(param_1 + 0x76c) = param_1 + 0x9e0;
  *(int *)(param_1 + 0x7e0) = param_1 + 0xca0;
  *(int *)(param_1 + 0x770) = param_1 + 0x9e8;
  *(int *)(param_1 + 0x79c) = param_1 + 0xb04;
  *(int *)(param_1 + 0x7dc) = param_1 + 0xc8c;
  *(int *)(param_1 + 0x7a4) = param_1 + 0xb18;
  *(int *)(param_1 + 0x7a8) = param_1 + 0xb20;
  *(int *)(param_1 + 0x7ac) = param_1 + 0xb28;
  *(int *)(param_1 + 0x7e8) = param_1 + 0xd0c;
  *(int *)(param_1 + 0x7e4) = param_1 + 0xcf0;
  *(int *)(param_1 + 0x7ec) = param_1 + 0xd1c;
  *(int *)(param_1 + 0x7f0) = param_1 + 0xd24;
  *(int *)(param_1 + 0x7f4) = param_1 + 0xd30;
  *(int *)(param_1 + 0x7f8) = param_1 + 0xd70;
  *(int *)(param_1 + 0x7fc) = param_1 + 0xd7c;
  *(int *)(param_1 + 0x800) = param_1 + 0xd90;
  *(int *)(param_1 + 0x804) = param_1 + 0xdc0;
  iVar5 = 0x49;
  *(int *)(param_1 + 0x808) = param_1 + 0xdcc;
  *(int *)(param_1 + 0x80c) = param_1 + 0xdd4;
  *(int *)(param_1 + 0x810) = param_1 + 0xddc;
  *(int *)(param_1 + 0x814) = param_1 + 0xde4;
  *(int *)(param_1 + 0x818) = param_1 + 0xdf0;
  *(int *)(param_1 + 0x81c) = param_1 + 0xe20;
  *(int *)(param_1 + 0x820) = param_1 + 0xe28;
  *(int *)(param_1 + 0x824) = param_1 + 0xe30;
  *(int *)(param_1 + 0x828) = param_1 + 0xe40;
  *(int *)(param_1 + 0x82c) = param_1 + 0xe70;
  *(int *)(param_1 + 0x830) = param_1 + 0xe84;
  *(int *)(param_1 + 0x834) = param_1 + 0xe90;
  *(int *)(param_1 + 0x838) = param_1 + 0xe9c;
  *(int *)(param_1 + 0x83c) = param_1 + 0xeb0;
  do {
    iVar1 = *piVar3;
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + 1;
    iVar2 = *(int *)(iVar1 + 4);
    (**(code **)(iVar2 + 0xc))(iVar1 + *(short *)(iVar2 + 8),*(undefined4 *)(param_1 + 0x714));
  } while (-1 < iVar5);
  return;
}


// ==== FUN_00181348 @ 00181348 ====

undefined4 FUN_00181348(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = param_1 + 0x1c6;
  iVar3 = 0x49;
  iVar4 = *piVar1;
  while( true ) {
    iVar3 = iVar3 + -1;
    piVar1 = piVar1 + 1;
    (**(code **)(*(int *)(iVar4 + 4) + 0x14))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x10));
    if (iVar3 < 0) break;
    iVar4 = *piVar1;
  }
  iVar4 = 7;
  *param_1 = 0x4a;
  puVar2 = param_1;
  puVar5 = param_1 + 8;
  while( true ) {
    puVar2 = puVar2 + 1;
    FUN_00193880(puVar5);
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) break;
    *puVar2 = 0x4a;
    puVar5 = puVar5 + 0x25;
  }
  param_1[0x130] = 0;
  puVar2 = param_1 + 0x131;
  iVar4 = 0x14;
  do {
    iVar4 = iVar4 + -1;
    FUN_0018c168(puVar2);
    puVar2 = puVar2 + 7;
  } while (-1 < iVar4);
  param_1[0x1c4] = 0;
  return 1;
}


// ==== FUN_00181418 @ 00181418 ====

void FUN_00181418(undefined8 param_1)

{
  char cVar1;
  
  FUN_00181c20();
  cVar1 = FUN_00176f00(*(int *)((int)param_1 + 0x714) + 0x1fcc);
  if (cVar1 != '\0') {
    FUN_00181ad0(param_1,7);
  }
  FUN_00181d20(param_1);
  FUN_00181da0(param_1);
  return;
}


// ==== FUN_00181470 @ 00181470 ====

void FUN_00181470(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x4c0);
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(iVar2 * 4 + (int)param_1);
    do {
      puVar3 = puVar3 + -1;
      iVar2 = iVar2 + -1;
      iVar1 = FUN_00181a90(param_1,*puVar3);
      (**(code **)(*(int *)(iVar1 + 4) + 0x4c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x48));
    } while (0 < iVar2);
  }
  return;
}


// ==== FUN_001814e8 @ 001814e8 ====

void FUN_001814e8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x4c0);
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(iVar2 * 4 + (int)param_1);
    do {
      puVar3 = puVar3 + -1;
      iVar2 = iVar2 + -1;
      iVar1 = FUN_00181a90(param_1,*puVar3);
      (**(code **)(*(int *)(iVar1 + 4) + 0x54))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x50));
    } while (0 < iVar2);
  }
  return;
}


// ==== FUN_00181560 @ 00181560 ====

void FUN_00181560(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x4c0);
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(iVar2 * 4 + (int)param_1);
    do {
      puVar3 = puVar3 + -1;
      iVar2 = iVar2 + -1;
      iVar1 = FUN_00181a90(param_1,*puVar3);
      (**(code **)(*(int *)(iVar1 + 4) + 0x5c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x58));
    } while (0 < iVar2);
  }
  return;
}


// ==== FUN_001815d8 @ 001815d8 ====

void FUN_001815d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x4c0);
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(iVar2 * 4 + (int)param_1);
    do {
      puVar3 = puVar3 + -1;
      iVar2 = iVar2 + -1;
      iVar1 = FUN_00181a90(param_1,*puVar3);
      (**(code **)(*(int *)(iVar1 + 4) + 100))
                (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x60),param_2);
    } while (0 < iVar2);
  }
  return;
}


// ==== FUN_00181660 @ 00181660 ====

void FUN_00181660(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_001819f0();
  if (param_2 != iVar1) {
    iVar1 = param_1[0x130];
    iVar4 = 0;
    piVar3 = param_1;
    if (0 < iVar1) {
      do {
        if (*piVar3 == param_2) {
          return;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < iVar1);
    }
    param_1[iVar1] = param_2;
    FUN_00193880(param_1 + param_1[0x130] * 0x25 + 8);
    iVar1 = param_1[0x130];
    if (iVar1 == 0) {
      FUN_001938c0(param_1 + 0xb);
      iVar1 = param_1[0x130];
    }
    else {
      piVar5 = param_1 + iVar1 * 0x25 + 0xb;
      piVar3 = param_1 + iVar1 * 0x25 + -0x1a;
      if ((((uint)piVar3 | (uint)piVar5) & 7) == 0) {
        do {
          uVar2 = *(undefined8 *)(piVar3 + 2);
          uVar6 = *(undefined8 *)(piVar3 + 4);
          uVar7 = *(undefined8 *)(piVar3 + 6);
          *(undefined8 *)piVar5 = *(undefined8 *)piVar3;
          *(undefined8 *)(piVar5 + 2) = uVar2;
          *(undefined8 *)(piVar5 + 4) = uVar6;
          *(undefined8 *)(piVar5 + 6) = uVar7;
          piVar3 = piVar3 + 8;
          piVar5 = piVar5 + 8;
        } while (piVar3 != param_1 + iVar1 * 0x25 + 6);
      }
      else {
        do {
          uVar2 = *(undefined8 *)(piVar3 + 2);
          uVar6 = *(undefined8 *)(piVar3 + 4);
          uVar7 = *(undefined8 *)(piVar3 + 6);
          *(undefined8 *)piVar5 = *(undefined8 *)piVar3;
          *(undefined8 *)(piVar5 + 2) = uVar2;
          *(undefined8 *)(piVar5 + 4) = uVar6;
          *(undefined8 *)(piVar5 + 6) = uVar7;
          piVar3 = piVar3 + 8;
          piVar5 = piVar5 + 8;
        } while (piVar3 != param_1 + iVar1 * 0x25 + 6);
      }
      *(undefined8 *)piVar5 = *(undefined8 *)piVar3;
      iVar1 = param_1[0x130];
    }
    param_1[0x130] = iVar1 + 1;
    uVar2 = FUN_001819f0(param_1);
    iVar1 = FUN_00181a90(param_1,uVar2);
    (**(code **)(*(int *)(iVar1 + 4) + 0x24))
              (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x20),param_3);
    FUN_00181df8(param_1);
  }
  return;
}


// ==== FUN_00181810 @ 00181810 ====

void FUN_00181810(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00181a18();
  if (iVar1 == *(int *)((int)param_1 + 0x4c0) + -1) {
    FUN_00181660(param_1,param_3,param_4);
  }
  else if (*(int *)((int)param_1 + (iVar1 + 1) * 4) != param_3) {
    FUN_00181908(param_1);
    FUN_00181660(param_1,param_3,param_4);
  }
  return;
}


// ==== FUN_001818a8 @ 001818a8 ====

void FUN_001818a8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = FUN_001819f0();
  iVar1 = FUN_00181a90(param_1,uVar2);
  (**(code **)(*(int *)(iVar1 + 4) + 0x2c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x28));
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x4c0) + -1;
  *(int *)(iVar3 + 0x4c0) = iVar1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = 0x4a;
  return;
}


// ==== FUN_00181908 @ 00181908 ====

void FUN_00181908(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x4c0);
  while (param_2 + 1 < iVar1) {
    FUN_001818a8(param_1);
    iVar1 = *(int *)((int)param_1 + 0x4c0);
  }
  return;
}


// ==== FUN_00181960 @ 00181960 ====

void FUN_00181960(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00181a18();
  FUN_00181908(param_1,uVar1);
  return;
}


// ==== FUN_00181990 @ 00181990 ====

void FUN_00181990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x4c0);
  while (0 < iVar1) {
    FUN_001818a8(param_1);
    iVar1 = *(int *)((int)param_1 + 0x4c0);
  }
  FUN_00181660(param_1,param_2,0);
  return;
}


// ==== FUN_001819f0 @ 001819f0 ====

undefined4 FUN_001819f0(int param_1)

{
  if (*(int *)(param_1 + 0x4c0) != 0) {
    return *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x4c0) + -1) * 4);
  }
  return 0x4a;
}


// ==== FUN_00181a18 @ 00181a18 ====

int FUN_00181a18(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x4c0);
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(iVar2 * 4 + (int)param_1);
    do {
      puVar3 = puVar3 + -1;
      iVar2 = iVar2 + -1;
      lVar1 = FUN_00181a90(param_1,*puVar3);
      if (param_2 == lVar1) {
        return iVar2;
      }
    } while (0 < iVar2);
  }
  return -1;
}


// ==== FUN_00181a90 @ 00181a90 ====

undefined4 FUN_00181a90(int param_1,long param_2)

{
  if (param_2 != 0x4a) {
    return *(undefined4 *)(param_1 + (int)param_2 * 4 + 0x718);
  }
  return 0;
}


// ==== FUN_00181ab0 @ 00181ab0 ====

void FUN_00181ab0(void)

{
  FUN_00181990();
  return;
}


// ==== FUN_00181ad0 @ 00181ad0 ====

void FUN_00181ad0(undefined8 param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  if (param_2 != 0) {
    FUN_0018be88(auStack_30);
    FUN_00181b08(param_1,auStack_30);
  }
  return;
}


// ==== FUN_00181b08 @ 00181b08 ====

void FUN_00181b08(int param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x710)) {
    piVar2 = (int *)(param_1 + 0x4c4);
    do {
      if (*(int *)param_2 == *piVar2) {
        return;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 7;
    } while (iVar3 < *(int *)(param_1 + 0x710));
  }
  lVar1 = FUN_0018c0c0(param_2,param_1 + *(int *)(param_1 + 0x710) * 0x1c + 0x4c4);
  if (lVar1 != 0) {
    *(int *)(param_1 + 0x710) = *(int *)(param_1 + 0x710) + 1;
  }
  return;
}


// ==== FUN_00181b88 @ 00181b88 ====

void FUN_00181b88(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)param_1;
  FUN_0018d210(*(int *)(iVar1 + 0x714) + 0xd10);
  iVar3 = *(int *)(iVar1 + 0x4c0);
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(iVar3 * 4 + iVar1);
    do {
      puVar4 = puVar4 + -1;
      iVar3 = iVar3 + -1;
      iVar1 = FUN_00181a90(param_1,*puVar4);
      lVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x3c))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x38),param_2);
      if (lVar2 != 0) {
        return;
      }
    } while (0 < iVar3);
  }
  return;
}


// ==== FUN_00181c20 @ 00181c20 ====

void FUN_00181c20(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar4 = *(int *)(iVar6 + 0x4c0);
  if (0 < iVar4) {
    puVar5 = (undefined4 *)(iVar4 * 4 + iVar6);
    iVar6 = iVar4 * 0x94 + 0x24 + iVar6;
    do {
      puVar5 = puVar5 + -1;
      iVar3 = iVar6 + -0x94;
      iVar4 = iVar4 + -1;
      iVar1 = FUN_00181a90(param_1,*puVar5);
      lVar2 = FUN_001735e0(iVar3);
      if ((lVar2 != 0) && (lVar2 = FUN_00173610(iVar3), lVar2 != 0)) {
        if (*(float *)(iVar6 + -0x98) == -1.0) {
          FUN_00173690(iVar3);
          iVar6 = *(int *)(iVar1 + 4);
        }
        else {
          FUN_00173640(iVar3);
          iVar6 = *(int *)(iVar1 + 4);
        }
        (**(code **)(iVar6 + 0x44))(iVar1 + *(short *)(iVar6 + 0x40));
      }
      iVar6 = iVar3;
    } while (0 < iVar4);
  }
  FUN_00181df8(param_1);
  return;
}


// ==== FUN_00181d20 @ 00181d20 ====

void FUN_00181d20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1;
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x710)) {
    iVar1 = iVar2 + 0x4c4;
    do {
      FUN_00181b88(param_1,iVar1);
      iVar3 = iVar3 + 1;
      FUN_0018c168(iVar1);
      iVar1 = iVar1 + 0x1c;
      FUN_00181df8(param_1);
    } while (iVar3 < *(int *)(iVar2 + 0x710));
  }
  *(undefined4 *)(iVar2 + 0x710) = 0;
  return;
}


// ==== FUN_00181da0 @ 00181da0 ====

void FUN_00181da0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_001819f0();
  lVar3 = FUN_00181a90(param_1,uVar2);
  if (lVar3 != 0) {
    iVar1 = *(int *)((int)lVar3 + 4);
    (**(code **)(iVar1 + 0x1c))((int)lVar3 + (int)*(short *)(iVar1 + 0x18));
    FUN_00181df8(param_1);
  }
  return;
}


// ==== FUN_00181df8 @ 00181df8 ====

void FUN_00181df8(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar4 = FUN_001819f0();
  lVar5 = FUN_00181a90(param_1,uVar4);
  if (lVar5 != 0) {
    iVar7 = (int)param_1;
    iVar3 = *(int *)(iVar7 + 0x4c0);
    cVar1 = *(char *)((iVar3 + -1) * 0x94 + iVar7 + 0x28);
    while (cVar1 != '\0') {
      uVar2 = *(undefined1 *)((iVar3 + -1) * 0x94 + iVar7 + 0x29);
      FUN_001818a8(param_1);
      uVar6 = FUN_001819f0(param_1);
      iVar3 = FUN_00181a90(param_1,uVar6);
      (**(code **)(*(int *)(iVar3 + 4) + 0x34))
                (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x30),uVar4,uVar2);
      uVar4 = FUN_001819f0(param_1);
      FUN_00181a90(param_1,uVar4);
      iVar3 = *(int *)(iVar7 + 0x4c0);
      cVar1 = *(char *)((iVar3 + -1) * 0x94 + iVar7 + 0x28);
    }
  }
  return;
}


// ==== FUN_00181ee8 @ 00181ee8 ====

void FUN_00181ee8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001819f0();
  uVar1 = FUN_00181a90(param_1,uVar1);
  FUN_00193b98(uVar1);
  return;
}


// ==== FUN_00181f20 @ 00181f20 ====

void FUN_00181f20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_00181f28 @ 00181f28 ====

undefined4 FUN_00181f28(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0x2a;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}


// ==== FUN_00181f48 @ 00181f48 ====

undefined8
FUN_00181f48(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar1 = FUN_00181fe8(param_3,param_5);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)param_3;
    puVar2[3] = puVar2[3] + 1;
    uVar3 = FUN_001768d0(param_1,param_2,DAT_0040f4d4 + 0xd5c,*puVar2,param_4,param_5);
  }
  return uVar3;
}


// ==== FUN_00181fe8 @ 00181fe8 ====

undefined4 FUN_00181fe8(void)

{
  return 1;
}


// ==== FUN_00181ff0 @ 00181ff0 ====

void FUN_00181ff0(int param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x310) = (int)param_2;
  FUN_00191c20(param_1 + 0x60);
  FUN_00191568(param_1 + 0x1f0,param_2);
  FUN_00191568(param_1 + 0x280,param_2);
  *(int *)(param_1 + 0x50) = param_1 + 0x280;
  *(int *)(param_1 + 0x4c) = param_1 + 0x1f0;
  *(int *)(param_1 + 0x48) = param_1 + 0x60;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


// ==== FUN_00182078 @ 00182078 ====

undefined4 FUN_00182078(undefined4 *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1 + 0x11;
  iVar4 = 3;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x80) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x80) + 8));
    }
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + 1;
  } while (-1 < iVar4);
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  param_1[0xf] = 0;
  FUN_00173690(param_1 + 0xb);
  auVar2 = _pextlw(0xffffffffc5d05000,0xffffffffc5d05000);
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  auVar2 = _pextlw(0xffffffffc5d05000,auVar2._0_8_);
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar2._12_4_;
  *param_1 = auVar2._0_4_;
  param_1[1] = auVar2._4_4_;
  param_1[2] = auVar2._8_4_;
  param_1[3] = auVar2._12_4_;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return 1;
}


// ==== FUN_00182138 @ 00182138 ====

void FUN_00182138(int param_1)

{
  *(undefined1 *)(param_1 + 0x36) = 0;
  FUN_00182158();
  return;
}


// ==== FUN_00182158 @ 00182158 ====

void FUN_00182158(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  if (*(int *)(iVar4 + 0x40) == 0) {
    *(undefined1 *)(iVar4 + 0x38) = 0;
    *(undefined1 *)(iVar4 + 0x37) = 0;
    FUN_0017e5b8(*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x24),
                 *(int *)(iVar4 + 0x310) + 0x650,1);
  }
  else {
    puVar1 = *(undefined4 **)(iVar4 + *(int *)(iVar4 + 0x40) * 4 + 0x44);
    (**(code **)(puVar1[0x20] + 0x14))((int)puVar1 + (int)*(short *)(puVar1[0x20] + 0x10));
    *(undefined4 *)(iVar4 + 0x30) = puVar1[0xc];
    lVar3 = FUN_001829a8(param_1);
    if (lVar3 == 0) {
      FUN_00173640(0x3f800000,iVar4 + 0x2c);
      FUN_00182550(param_1,*(undefined4 *)(iVar4 + 0x30));
      uVar2 = *(undefined1 *)(iVar4 + 0x37);
    }
    else if (*(char *)(iVar4 + 0x34) == '\0') {
      uVar2 = *(undefined1 *)(iVar4 + 0x37);
    }
    else {
      *(undefined4 *)(iVar4 + 0x24) = puVar1[1];
      *(undefined4 *)(iVar4 + 0x20) = *puVar1;
      FUN_0017e5b8(*(int *)(iVar4 + 0x310) + 0x650,*(undefined1 *)(puVar1 + 2));
      if (0.0 < *(float *)(iVar4 + 0x24)) {
        FUN_00182a60(param_1);
        uVar2 = *(undefined1 *)(iVar4 + 0x37);
      }
      else {
        uVar2 = *(undefined1 *)(iVar4 + 0x37);
      }
    }
    *(undefined1 *)(iVar4 + 0x37) = 0;
    *(undefined1 *)(iVar4 + 0x38) = uVar2;
  }
  return;
}


// ==== FUN_00182270 @ 00182270 ====

bool FUN_00182270(float param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _qmtc2(param_3);
  auVar2 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_2 + 0x310) + 0x7c) + 0xa0));
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _qmfc2(auVar2._0_4_);
  bVar1 = false;
  if ((auVar2._4_4_ <= 2.0) && (-2.0 <= auVar2._4_4_)) {
    auVar2 = _qmtc2(0);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar2 = _vaddbc(in_vf0,auVar2);
    auVar2 = _vmul(auVar2,auVar2);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar3,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    bVar1 = auVar2._0_4_ <= param_1 * param_1;
  }
  return bVar1;
}


// ==== FUN_00182318 @ 00182318 ====

void FUN_00182318(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  return;
}


// ==== FUN_00182320 @ 00182320 ====

void FUN_00182320(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = _por(in_zero_qw,in_a1_qw);
  *(undefined1 *)(*(int *)((int)param_1 + 0x310) + 0x6d4) = 0;
  uVar2 = FUN_0018da40(*(int *)((int)param_1 + 0x310) + 0xc94);
  auVar1 = _por(in_zero_qw,auVar1);
  FUN_00182608(uVar2,param_1,auVar1._0_8_,param_2);
  return;
}


// ==== FUN_00182380 @ 00182380 ====

void FUN_00182380(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x310) + 0x6d4) = 0;
  FUN_00182608(0x3fc66666);
  return;
}


// ==== FUN_001823b0 @ 001823b0 ====

void FUN_001823b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = _por(in_zero_qw,in_a1_qw);
  *(undefined1 *)(*(int *)((int)param_1 + 0x310) + 0x6d4) = 0;
  uVar2 = FUN_0018da88(*(int *)((int)param_1 + 0x310) + 0xc94);
  auVar1 = _por(in_zero_qw,auVar1);
  FUN_00182608(uVar2,param_1,auVar1._0_8_,param_2);
  return;
}


// ==== FUN_00182410 @ 00182410 ====

void FUN_00182410(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar7 = _qmtc2(param_2);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x310);
  auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x7c) + 0xa0));
  auVar5 = _vsub(auVar5,auVar7);
  auVar5 = _vmul(auVar5,auVar5);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (param_4 == 0) {
    fVar3 = (float)FUN_0018e150(iVar1 + 0xc94);
    iVar1 = *(int *)(iVar2 + 0x310);
    if (auVar5._0_4_ <= fVar3) {
      fVar3 = (float)FUN_0018da88(iVar1 + 0xc94);
      iVar1 = *(int *)(iVar2 + 0x310);
      if (fVar3 < *(float *)(iVar2 + 0x28)) {
        fVar3 = (float)FUN_0018e180(iVar1 + 0xc94);
        iVar1 = *(int *)(iVar2 + 0x310);
        if (fVar3 < auVar5._0_4_) goto LAB_001824b0;
      }
      uVar4 = FUN_0018da88(iVar1 + 0xc94);
      *(undefined1 *)(*(int *)(iVar2 + 0x310) + 0x6d4) = 0;
      goto LAB_001824d8;
    }
  }
LAB_001824b0:
  uVar4 = FUN_0018d9f8(iVar1 + 0xc94);
  *(undefined1 *)(*(int *)(iVar2 + 0x310) + 0x6d4) = 1;
LAB_001824d8:
  FUN_00182608(uVar4,param_1,param_2,param_3);
  return;
}


// ==== FUN_00182510 @ 00182510 ====

undefined4 FUN_00182510(int param_1)

{
  FUN_0017e5a8(*(int *)(param_1 + 0x310) + 0x650);
  *(undefined1 *)(param_1 + 0x37) = 1;
  return 1;
}


// ==== FUN_00182550 @ 00182550 ====

void FUN_00182550(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x40) * 4 + 0x44);
    iVar2 = *(int *)(iVar1 + 0x80);
    (**(code **)(iVar2 + 0x44))(iVar1 + *(short *)(iVar2 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}


// ==== FUN_001825b0 @ 001825b0 ====

void FUN_001825b0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_001829a8();
  if (lVar1 == 0) {
    FUN_00182550(param_1,*(undefined4 *)((int)param_1 + 0x30));
  }
  else {
    FUN_00182550(param_1,0);
  }
  FUN_00182318(param_1,0);
  return;
}


// ==== FUN_00182608 @ 00182608 ====

void FUN_00182608(undefined8 param_1,long param_2)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = _por(in_zero_qw,in_a1_qw);
  FUN_00182a10();
  FUN_00182318(param_1,1);
  uVar1 = 2;
  if (param_2 == 0) {
    uVar1 = 1;
  }
  auVar2 = _por(in_zero_qw,auVar2);
  FUN_00182668(param_1,auVar2._0_8_,uVar1);
  return;
}


// ==== FUN_00182668 @ 00182668 ====

undefined8 FUN_00182668(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  bool bVar5;
  undefined1 (*pauVar6) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  pauVar6 = (undefined1 (*) [16])param_1;
  iVar3 = *(int *)pauVar6[3];
  bVar5 = false;
  if ((((iVar3 == 0) || (iVar3 == 2)) || (iVar3 == 3)) || (iVar3 == 6)) {
    bVar5 = true;
    iVar3 = *(int *)pauVar6[0x31];
  }
  else {
    iVar3 = *(int *)pauVar6[0x31];
  }
  auVar7._8_4_ = in_a1_udw;
  auVar7._0_8_ = param_2;
  auVar7._12_4_ = in_register_0000005c;
  auVar8 = _lqc2(auVar7);
  auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar3 + 0x7c) + 0xa0));
  auVar7 = _vsub(auVar7,auVar8);
  auVar7 = _vmove(auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  auVar8 = _qmtc2(0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar8 = _vmul(auVar8,auVar8);
  auVar10 = _vmove(auVar9);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar9,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  if ((pauVar6[3][5] == '\0') && ((*(byte *)(iVar3 + 0xd60) >> 4 & 1) == 0)) {
    FUN_00173640(0x3f800000,pauVar6[2] + 0xc);
    uVar4 = 3;
LAB_0018289c:
    FUN_00182550(param_1,uVar4);
LAB_001828a4:
    uVar2 = 0;
  }
  else {
    if (ABS(auVar7._4_4_) < 2.0) {
      if (0.1 < auVar8._0_4_) {
        auVar7 = _lqc2(*pauVar6);
        goto LAB_001827a8;
      }
      FUN_00173690(pauVar6[2] + 0xc);
      *(int *)*pauVar6 = (int)param_2;
      *(undefined4 *)(*pauVar6 + 4) = uVar4;
      *(undefined4 *)(*pauVar6 + 8) = in_a1_udw;
      *(undefined4 *)(*pauVar6 + 0xc) = in_register_0000005c;
      FUN_00182550(param_1,8);
      *(undefined4 *)(pauVar6[3] + 0xc) = 0;
    }
    else {
      auVar7 = _lqc2(*pauVar6);
LAB_001827a8:
      auVar8._8_4_ = in_a1_udw;
      auVar8._0_8_ = param_2;
      auVar8._12_4_ = in_register_0000005c;
      auVar8 = _lqc2(auVar8);
      auVar7 = _vsub(auVar8,auVar7);
      auVar7 = _vmul(auVar7,auVar7);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar10,auVar7);
      auVar7 = _qmfc2(auVar7._0_4_);
      if (auVar7._0_4_ < 0.010000001) {
        if (!bVar5) {
          return 1;
        }
        lVar1 = FUN_00173610(pauVar6[2] + 0xc,param_2);
        if (lVar1 != 0) goto LAB_001827fc;
        goto LAB_001828a4;
      }
LAB_001827fc:
      lVar1 = FUN_00182ef0(param_1,param_2,0);
      if (lVar1 != 0) {
        FUN_00173640(0x3f800000,pauVar6[2] + 0xc);
        uVar4 = 2;
        goto LAB_0018289c;
      }
      iVar3 = *(int *)pauVar6[0x31];
      *(int *)*pauVar6 = (int)param_2;
      *(undefined4 *)(*pauVar6 + 4) = uVar4;
      *(undefined4 *)(*pauVar6 + 8) = in_a1_udw;
      *(undefined4 *)(*pauVar6 + 0xc) = in_register_0000005c;
      FUN_0017fb68(iVar3 + 0x650);
      FUN_00182550(param_1,0);
      *(int *)pauVar6[4] = param_3;
      iVar3 = *(int *)(*(int *)(pauVar6[4] + param_3 * 4 + 4) + 0x80);
      (**(code **)(iVar3 + 0x1c))
                (*(int *)(pauVar6[4] + param_3 * 4 + 4) + (int)*(short *)(iVar3 + 0x18),param_2);
      *(undefined4 *)pauVar6[3] =
           *(undefined4 *)(*(int *)(pauVar6[4] + *(int *)pauVar6[4] * 4 + 4) + 0x30);
      FUN_00173690(pauVar6[2] + 0xc);
      *(undefined4 *)(pauVar6[3] + 0xc) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_001828c0 @ 001828c0 ====

bool FUN_001828c0(int param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 in_a1_qw [16];
  
  auVar3 = _por(in_zero_qw,in_a1_qw);
  if (*(char *)(param_1 + 0x35) == '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x310) + 0xd60) >> 4 & 1) == 0) {
      FUN_00173640(0x3f800000,param_1 + 0x2c);
      FUN_00182550();
      return false;
    }
    iVar2 = *(int *)(param_1 + 0x40);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
  }
  if (iVar2 == 1) {
    *(int *)(param_1 + 0x10) = auVar3._0_4_;
    *(int *)(param_1 + 0x14) = auVar3._4_4_;
    *(int *)(param_1 + 0x18) = auVar3._8_4_;
    *(int *)(param_1 + 0x1c) = auVar3._12_4_;
    auVar3 = _por(in_zero_qw,auVar3);
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x80);
    (**(code **)(iVar1 + 0x24))
              (*(int *)(param_1 + 0x48) + (int)*(short *)(iVar1 + 0x20),auVar3._0_8_);
  }
  return iVar2 == 1;
}


// ==== FUN_00182960 @ 00182960 ====

undefined8 FUN_00182960(undefined8 param_1)

{
  return param_1;
}


// ==== FUN_00182968 @ 00182968 ====

void FUN_00182968(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x40) * 4 + 0x44);
  iVar2 = *(int *)(iVar1 + 0x80);
  (**(code **)(iVar2 + 0x34))(iVar1 + *(short *)(iVar2 + 0x30));
  return;
}


// ==== FUN_001829a0 @ 001829a0 ====

undefined4 FUN_001829a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ==== FUN_001829a8 @ 001829a8 ====

undefined4 FUN_001829a8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar2 = 0;
  if ((((uVar1 < 2) || (uVar1 == 7)) || (uVar1 == 4)) || ((uVar1 == 5 || (uVar1 == 8)))) {
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_001829e8 @ 001829e8 ====

undefined4 FUN_001829e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x30) == 0) || (*(int *)(param_1 + 0x30) == 8)) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00182a10 @ 00182a10 ====

void FUN_00182a10(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x28) = param_1;
  FUN_00170670(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x310) + 0x7c) + 0x34c));
  return;
}


// ==== FUN_00182a40 @ 00182a40 ====

void FUN_00182a40(int param_1)

{
  FUN_00192470(param_1 + 0x60);
  return;
}


// ==== FUN_00182a60 @ 00182a60 ====

void FUN_00182a60(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = (int)param_1;
  fVar5 = *(float *)(*(int *)(iVar4 + 0x310) + 0x10);
  iVar1 = *(int *)(*(int *)(iVar4 + 0x310) + 0x7c);
  if (((uint)fVar5 & 0x7f800000) < 0x37800001) {
    *(undefined1 *)(iVar4 + 0x3a) = 0;
  }
  else {
    if (*(int *)(iVar4 + 0x30) - 4U < 2) {
      iVar3 = *(int *)(iVar4 + 0x310);
    }
    else {
      if (fVar5 < 0.1) {
        *(undefined1 *)(iVar4 + 0x3a) = 0;
        goto LAB_00182b84;
      }
      iVar3 = *(int *)(iVar4 + 0x310);
    }
    lVar2 = FUN_0018b168(iVar3 + 0xcc0);
    if (lVar2 == 0) {
      if (*(int *)(iVar1 + 0x330) == 0) {
        iVar3 = *(int *)(iVar4 + 0x310);
      }
      else {
        lVar2 = FUN_001a74e0();
        if (lVar2 != 0) {
          *(undefined1 *)(iVar4 + 0x3a) = 0;
          goto LAB_00182b84;
        }
        iVar3 = *(int *)(iVar4 + 0x310);
      }
      if (*(float *)(iVar1 + 0x2e0) / *(float *)(iVar3 + 0x10) < 0.1) {
        fVar5 = *(float *)(iVar4 + 0x3c) + *(float *)(DAT_0040f4d0 + 0x1c);
        *(float *)(iVar4 + 0x3c) = fVar5;
        if (fVar5 <= 0.2) {
          return;
        }
        *(undefined1 *)(iVar4 + 0x3a) = 1;
        FUN_00173690(iVar4 + 0x2c);
        FUN_00182550(param_1,2);
        return;
      }
      *(undefined1 *)(iVar4 + 0x3a) = 0;
    }
    else {
      *(undefined1 *)(iVar4 + 0x3a) = 0;
    }
  }
LAB_00182b84:
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  return;
}


// ==== FUN_00182ba0 @ 00182ba0 ====

void FUN_00182ba0(int param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = in_a1_udw;
  auVar1._0_8_ = param_2;
  auVar1._12_4_ = in_register_0000005c;
  auVar1 = _por(in_zero_qw,auVar1);
  FUN_00182bc8(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x310) + 0x7c) + 0xa0),
               auVar1._0_8_);
  return;
}


// ==== FUN_00182bc8 @ 00182bc8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00182bc8(int param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar4 = _qmtc2((int)param_3);
  auVar7 = _qmtc2(param_2);
  auVar6 = _vsub(auVar4,auVar7);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vmul(auVar6,auVar6);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  auVar5 = _vmove(auVar5);
  bVar2 = true;
  if (2.3283064e-10 <= auVar4._0_4_) {
    auVar4 = _vmul(auVar6,auVar6);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar5,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    bVar2 = false;
    if (auVar4._0_4_ <= 400.0) {
      auVar6 = _lqc2(_DAT_00414e00);
      auVar4 = _vadd(auVar7,auVar6);
      auVar5 = _qmfc2(auVar4._0_4_);
      auVar4._8_4_ = in_a2_udw;
      auVar4._0_8_ = param_3;
      auVar4._12_4_ = in_register_0000006c;
      auVar4 = _lqc2(auVar4);
      auVar4 = _vadd(auVar4,auVar6);
      auVar4 = _qmfc2(auVar4._0_4_);
      lVar3 = FUN_00175fa0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x310) + 0x7c) + 0x318),
                           DAT_0040f4d4 + 4000,auVar5._0_8_,auVar4._0_8_,0x23);
      if (lVar3 == 0) {
        auVar5 = _qmtc2(0x3f19999a);
        auVar6 = _qmtc2(0x3f000000);
        auVar4 = _lqc2(_DAT_004432c0);
        auVar4 = _vmulbc(auVar4,auVar5);
        auVar5._8_4_ = in_a2_udw;
        auVar5._0_8_ = param_3;
        auVar5._12_4_ = in_register_0000006c;
        auVar5 = _lqc2(auVar5);
        auVar4 = _vmulbc(auVar4,auVar6);
        auVar5 = _vadd(auVar5,auVar4);
        auVar4 = _qmfc2(auVar5._0_4_);
        auVar6 = _lqc2(_DAT_00414e10);
        auVar5 = _vadd(auVar5,auVar6);
        auVar5 = _qmfc2(auVar5._0_4_);
        cVar1 = FUN_00175f50(DAT_0040f4d4 + 4000,auVar4._0_8_,auVar5._0_8_,0x21,
                             *(undefined4 *)(*(int *)(param_1 + 0x310) + 0x7c),0);
        bVar2 = cVar1 == '\x01';
      }
      else {
        bVar2 = false;
      }
    }
  }
  return bVar2;
}


// ==== FUN_00182d28 @ 00182d28 ====

undefined8 FUN_00182d28(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar1 = FUN_00192d48(param_1 + 0x60);
  }
  return uVar1;
}


// ==== FUN_00182d68 @ 00182d68 ====

void FUN_00182d68(int param_1)

{
  if (*(int *)(param_1 + 0x40) == 1) {
    FUN_00192eb0(param_1 + 0x60);
  }
  else if (*(int *)(param_1 + 0x40) == 2) {
    FUN_00193608(param_1 + 0x1f0);
  }
  return;
}


// ==== FUN_00182db8 @ 00182db8 ====

undefined4 FUN_00182db8(undefined1 (*param_1) [16],undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uStack_3c;
  uint uStack_38;
  
  if (*(int *)param_1[4] != 0) {
    auVar4 = _lqc2(*param_1);
    auVar5._8_4_ = in_a1_udw;
    auVar5._0_8_ = param_2;
    auVar5._12_4_ = in_register_0000005c;
    auVar5 = _lqc2(auVar5);
    auVar4 = _vsub(auVar5,auVar4);
    auVar5 = _qmfc2(auVar4._0_4_);
    bVar2 = false;
    if ((auVar5._0_4_ & 0x7f800000) < 0x37800001) {
      auVar5 = _sqc2(auVar4);
      uStack_3c = auVar5._4_4_;
      bVar2 = false;
      if ((uStack_3c & 0x7f800000) < 0x37800001) {
        auVar5 = _sqc2(auVar4);
        uStack_38 = auVar5._8_4_;
        bVar2 = (uStack_38 & 0x7f800000) < 0x37800001;
      }
    }
    if (bVar2) {
      return 1;
    }
    iVar1 = *(int *)(*(int *)(param_1[4] + *(int *)param_1[4] * 4 + 4) + 0x80);
    lVar3 = (**(code **)(iVar1 + 0x2c))
                      (*(int *)(param_1[4] + *(int *)param_1[4] * 4 + 4) +
                       (int)*(short *)(iVar1 + 0x28),param_2);
    if (lVar3 != 0) {
      *(int *)*param_1 = (int)param_2;
      *(int *)(*param_1 + 4) = (int)((ulong)param_2 >> 0x20);
      *(undefined4 *)(*param_1 + 8) = in_a1_udw;
      *(undefined4 *)(*param_1 + 0xc) = in_register_0000005c;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_00182ea8 @ 00182ea8 ====

void FUN_00182ea8(undefined8 param_1)

{
  FUN_00173640(0x3f800000,(int)param_1 + 0x2c);
  FUN_00182550(param_1,2);
  return;
}


// ==== FUN_00182ef0 @ 00182ef0 ====

undefined8 FUN_00182ef0(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar4 = FUN_00135570(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x7c));
  lVar5 = FUN_00138320(uVar4);
  if (lVar5 == 0x28) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x310);
  if (*(char *)(iVar1 + 0x6d8) == '\0') {
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar9._8_4_ = in_a1_udw;
    auVar9._0_8_ = param_2;
    auVar9._12_4_ = in_register_0000005c;
    auVar11 = _lqc2(auVar9);
    auVar9 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x7c) + 0xa0));
    auVar9 = _vsub(auVar9,auVar11);
    auVar11 = _qmfc2(auVar10._0_4_);
    auVar9 = _vmul(auVar9,auVar9);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar10,auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    fVar3 = auVar9._0_4_;
    if (((uint)fVar3 & 0x7f800000) < 0x37800001) {
      return 0;
    }
    if ((param_3 == 0) && (36.0 < fVar3)) {
      return 0;
    }
    auVar10._8_4_ = in_a1_udw;
    auVar10._0_8_ = param_2;
    auVar10._12_4_ = in_register_0000005c;
    auVar10 = _lqc2(auVar10);
    auVar9 = _qmtc2(auVar11._0_4_);
    piVar6 = (int *)(DAT_0040f4d4 + 0x22864);
    iVar7 = 0;
    do {
      iVar2 = *piVar6;
      if ((iVar2 != 0) && (iVar2 != *(int *)(iVar1 + 0x7c))) {
        fVar8 = 2.0;
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
        if (*(int *)(iVar2 + 0xc4) == 2) {
          fVar8 = 3.0;
        }
        auVar11 = _vsub(auVar11,auVar10);
        auVar11 = _vmul(auVar11,auVar11);
        _vaddabc(auVar11,auVar11);
        auVar11 = _vmaddbc(auVar9,auVar11);
        auVar11 = _qmfc2(auVar11._0_4_);
        if ((auVar11._0_4_ < fVar8 * fVar8) && (auVar11._0_4_ < fVar3)) {
          return 1;
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < 4);
  }
  return 0;
}


// ==== FUN_00183080 @ 00183080 ====

void FUN_00183080(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 6) = 0xff;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 5) = 0xff;
  return;
}


// ==== FUN_001830a0 @ 001830a0 ====

undefined4 FUN_001830a0(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  return 1;
}


// ==== FUN_001830c0 @ 001830c0 ====

void FUN_001830c0(undefined4 *param_1,long param_2)

{
  if (param_2 != 0) {
    *param_1 = (int)param_2;
  }
  return;
}


// ==== FUN_001830d0 @ 001830d0 ====

void FUN_001830d0(undefined4 *param_1)

{
  FUN_00183710(*param_1,*(undefined1 *)((int)param_1 + 5));
  return;
}


// ==== FUN_001830f0 @ 001830f0 ====

void FUN_001830f0(undefined4 *param_1)

{
  FUN_00183710(*param_1,*(undefined1 *)((int)param_1 + 6));
  return;
}


// ==== FUN_00183110 @ 00183110 ====

undefined8 FUN_00183110(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00183748(*param_1,*(undefined1 *)((int)param_1 + 5),*(undefined1 *)(param_1 + 1));
  uVar2 = 0;
  if (cVar1 != *(char *)((int)param_1 + 5)) {
    uVar2 = FUN_00183710(*param_1);
  }
  return uVar2;
}


// ==== FUN_00183160 @ 00183160 ====

undefined4 FUN_00183160(undefined4 *param_1)

{
  char cVar1;
  
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)param_1 + 5);
  cVar1 = FUN_00183748(*param_1,*(undefined1 *)((int)param_1 + 5),*(undefined1 *)(param_1 + 1));
  if (*(char *)((int)param_1 + 5) < cVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    if (*(char *)((int)param_1 + 5) <= cVar1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(char *)((int)param_1 + 5) = cVar1;
  return 1;
}


// ==== FUN_001831d8 @ 001831d8 ====

void FUN_001831d8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_001831e0 @ 001831e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001831e0(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  param_1[8] = (int)_DAT_004432a0;
  param_1[9] = (int)((ulong)uVar1 >> 0x20);
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  FUN_0013d400(*param_1);
  param_1[3] = 0;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[0xc] = 0;
  return 1;
}


// ==== FUN_00183238 @ 00183238 ====

void FUN_00183238(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar4 = DAT_004432ac;
  uVar3 = DAT_004432a8;
  uVar2 = DAT_004432a4;
  uVar1 = DAT_004432a0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// ==== FUN_00183260 @ 00183260 ====

void FUN_00183260(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar3 = FUN_00183500();
  iVar4 = (int)param_1;
  if (lVar3 == 0) {
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  else if (*(char *)(*(int *)(iVar4 + 0x30) + 0x40) == '\0') {
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  else {
    iVar1 = FUN_00183500(param_1);
    auVar10 = *(undefined1 (*) [16])(iVar1 + 0x1b0);
    uVar2 = FUN_00173e18(*(undefined4 *)(iVar4 + 0x30));
    auVar9 = _qmtc2(uVar2);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar9,auVar9);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar7,auVar6);
    auVar7 = _vmove(auVar7);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (auVar6._0_4_ < 2.3283064e-10) {
      fVar5 = *(float *)(iVar4 + 0xc);
      goto LAB_00183360;
    }
    auVar6 = _vmul(auVar9,auVar9);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar7,auVar6);
    auVar7 = _lqc2(auVar10);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    uVar2 = _vwaitq();
    auVar10 = _vmulq(auVar9,uVar2);
    auVar10 = _vmul(auVar7,auVar10);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar8,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    *(float *)(iVar4 + 0xc) =
         *(float *)(iVar4 + 0xc) +
         ((float)((int)auVar10._0_4_ * (uint)(0.0 <= auVar10._0_4_)) - *(float *)(iVar4 + 0xc)) *
         0.98;
  }
  fVar5 = *(float *)(iVar4 + 0xc);
LAB_00183360:
  *(uint *)(iVar4 + 0xc) = (int)fVar5 * (uint)(0.0 <= fVar5);
  return;
}


// ==== FUN_00183380 @ 00183380 ====

undefined8 FUN_00183380(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 extraout_v0_udw;
  int iVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _sqc2(auVar7);
  iVar6 = (int)param_1;
  uVar4 = FUN_00173e18(*(undefined4 *)(iVar6 + 0x30));
  uVar3 = DAT_004432cc;
  uVar2 = DAT_004432c8;
  uVar1 = DAT_004432c4;
  uVar13 = DAT_004432c0;
  auVar11 = _qmtc2(uVar4);
  auVar9 = _lqc2(auVar7);
  auVar8 = _vmul(auVar11,auVar11);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar9,auVar8);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar8);
  uVar4 = _vwaitq();
  auVar8 = _vmulq(auVar11,uVar4);
  auVar8 = _sqc2(auVar8);
  uVar5 = FUN_00183558(param_1,*(undefined4 *)(iVar6 + 0x10));
  auVar9._4_4_ = uVar1;
  auVar9._0_4_ = uVar13;
  auVar9._8_4_ = uVar2;
  auVar9._12_4_ = uVar3;
  auVar11 = _lqc2(auVar9);
  auVar12 = _lqc2(auVar8);
  _vopmula(auVar11,auVar12);
  auVar9 = _vopmsub(auVar12,auVar11);
  _qmfc2(auVar11._0_4_);
  auVar8 = _vmul(auVar9,auVar9);
  auVar7 = _lqc2(auVar7);
  _vaddabc(auVar8,auVar8);
  auVar7 = _vmaddbc(auVar7,auVar8);
  _sqc2(auVar9);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  uVar13 = _vwaitq();
  auVar10 = _vmulq(auVar9,uVar13);
  _vopmula(auVar12,auVar10);
  auVar11 = _vopmsub(auVar10,auVar12);
  auVar7 = _sqc2(auVar12);
  auVar8 = _sqc2(auVar10);
  auVar9 = _sqc2(auVar11);
  _sqc2(auVar12);
  _sqc2(auVar10);
  _sqc2(auVar11);
  _sqc2(auVar10);
  _sqc2(auVar11);
  _sqc2(auVar12);
  uVar13 = FUN_00183520(param_1);
  auVar11 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x20));
  auVar10 = _qmtc2(uVar13);
  auVar11 = _vadd(auVar11,auVar10);
  auVar10 = _lqc2(auVar8);
  auVar9 = _lqc2(auVar9);
  auVar8 = _lqc2(auVar7);
  auVar7._8_4_ = (int)extraout_v0_udw;
  auVar7._0_8_ = uVar5;
  auVar7._12_4_ = (int)((ulong)extraout_v0_udw >> 0x20);
  auVar7 = _lqc2(auVar7);
  _vmulabc(auVar10,auVar11);
  _vmaddabc(auVar9,auVar11);
  _vmaddabc(auVar8,auVar11);
  auVar7 = _vmaddbc(auVar7,in_vf0);
  auVar7 = _qmfc2(auVar7._0_4_);
  return auVar7._0_8_;
}


// ==== FUN_001834b0 @ 001834b0 ====

void FUN_001834b0(int *param_1)

{
  FUN_00181ad0(*param_1 + 0xec0,0xd);
  return;
}


// ==== FUN_001834d8 @ 001834d8 ====

void FUN_001834d8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}


// ==== FUN_001834e0 @ 001834e0 ====

undefined4 FUN_001834e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ==== FUN_001834e8 @ 001834e8 ====

int FUN_001834e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  return iVar1;
}


// ==== FUN_00183500 @ 00183500 ====

undefined4 FUN_00183500(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10);
}


// ==== FUN_00183520 @ 00183520 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00183520(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0xc)) {
    return _DAT_00415870;
  }
  return _DAT_004432a0;
}


// ==== FUN_00183558 @ 00183558 ====

undefined8 FUN_00183558(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc4) == 2) {
    return *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x30);
  }
  return *(undefined8 *)(param_2 + 0xa0);
}


// ==== FUN_00183578 @ 00183578 ====

void FUN_00183578(undefined8 param_1,undefined8 param_2)

{
  FUN_00160e70();
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_001835b8 @ 001835b8 ====

undefined4 FUN_001835b8(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00160ea0();
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(int *)(param_1 + 0x40) = param_3;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  uVar3 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  *(int *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return 1;
}


// ==== FUN_00183618 @ 00183618 ====

void FUN_00183618(int *param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  bVar1 = *(byte *)(param_3 + 0x24);
  param_1[2] = (uint)bVar1;
  iVar2 = FUN_00107d20((uint)bVar1 << 2);
  iVar4 = 0;
  *param_1 = iVar2;
  if (0 < param_1[2]) {
    iVar2 = *param_1;
    while( true ) {
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar3 + iVar2) = 0;
      if (param_1[2] <= iVar4) break;
      iVar2 = *param_1;
    }
  }
  return;
}


// ==== FUN_00183688 @ 00183688 ====

undefined4 FUN_00183688(int param_1,undefined8 param_2,int param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 8) = (uint)*(byte *)(param_3 + 0x24);
  *(uint *)(param_1 + 4) = (uint)*(byte *)(param_3 + 0x25);
  return 1;
}


// ==== FUN_001836a8 @ 001836a8 ====

undefined4 FUN_001836a8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x38);
  iVar2 = 0;
  uVar3 = 0;
  if (0 < param_1[2]) {
    iVar1 = param_1[6];
    while( true ) {
      if (*(long *)(iVar2 * 8 + *(int *)(iVar1 + 0x20)) == lVar4) {
        uVar3 = 1;
        *(int *)(iVar2 * 4 + *param_1) = param_2;
        iVar1 = param_1[2];
      }
      else {
        iVar1 = param_1[2];
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = param_1[6];
    }
  }
  return uVar3;
}


// ==== FUN_00183710 @ 00183710 ====

undefined4 FUN_00183710(int *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if ((-1 < iVar1) && (iVar1 < param_1[2])) {
    return *(undefined4 *)(iVar1 * 4 + *param_1);
  }
  return 0;
}


// ==== FUN_00183748 @ 00183748 ====

int FUN_00183748(undefined8 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = (int)param_2;
  piVar5 = (int *)param_1;
  iVar2 = piVar5[1];
  if (iVar2 == 1) {
    iVar1 = FUN_00183888(param_1,iVar4);
  }
  else {
    iVar1 = iVar4;
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        iVar2 = *piVar5;
        goto LAB_001837dc;
      }
      iVar1 = FUN_00183858(param_1,iVar4);
    }
    else {
      if (iVar2 != 2) {
        iVar2 = *piVar5;
        goto LAB_001837dc;
      }
      iVar1 = FUN_001838c0(param_1,iVar4);
    }
  }
  iVar2 = *piVar5;
LAB_001837dc:
  iVar3 = iVar1;
  if (*(int *)(iVar1 * 4 + iVar2) == 0) {
    do {
      iVar3 = FUN_00183748(param_1,iVar1,iVar4 < iVar1);
      if (*(int *)(iVar3 * 4 + *piVar5) != 0) break;
    } while (iVar1 != iVar3);
    if (iVar3 == iVar1) {
      iVar3 = iVar4;
    }
  }
  return iVar3;
}


// ==== FUN_00183858 @ 00183858 ====

int FUN_00183858(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 < *(int *)(param_1 + 8) + -1) {
    iVar1 = (iVar1 + 1) * 0x1000000 >> 0x18;
  }
  return iVar1;
}


// ==== FUN_00183888 @ 00183888 ====

int FUN_00183888(int param_1,char param_2)

{
  int iVar1;
  
  if ((int)param_2 < *(int *)(param_1 + 8) + -1) {
    iVar1 = (param_2 + 1) * 0x1000000 >> 0x18;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_001838c0 @ 001838c0 ====

int FUN_001838c0(int param_1,char param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (param_3 == 0) {
    if (iVar1 < 1) {
      iVar1 = iVar1 + 1;
    }
    else {
      iVar1 = iVar1 + -1;
    }
  }
  else {
    if (*(int *)(param_1 + 8) + -1 <= iVar1) {
      if (iVar1 < 1) {
        return iVar1;
      }
      iVar1 = (iVar1 + -1) * 0x1000000;
      goto LAB_00183900;
    }
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 << 0x18;
LAB_00183900:
  return iVar1 >> 0x18;
}


// ==== FUN_00183910 @ 00183910 ====

void FUN_00183910(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_00183918 @ 00183918 ====

undefined4 FUN_00183918(int *param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar7 = DAT_003f55fc;
  iVar1 = 2;
  piVar2 = param_1 + 0xd;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = iVar7;
  iVar7 = FUN_0018dc48(*param_1 + 0xc94);
  param_1[4] = iVar7;
  iVar7 = FUN_0018dbc0(*param_1 + 0xc94);
  param_1[5] = iVar7;
  param_1[7] = -0x40800000;
  param_1[8] = 0x42b40000;
  param_1[9] = 0x42700000;
  param_1[10] = 0x42340000;
  param_1[6] = -0x40800000;
  param_1[0xc] = 0;
  do {
    iVar1 = iVar1 + -1;
    FUN_00173690(piVar2);
    piVar2 = piVar2 + 1;
  } while (-1 < iVar1);
  fVar9 = 0.0;
  pfVar5 = (float *)&DAT_003f6530;
  pfVar4 = (float *)(param_1 + 0x11);
  pfVar3 = (float *)(param_1 + 0x15);
  iVar7 = 0;
  do {
    iVar1 = iVar7 + 1;
    fVar8 = (float)FUN_0018dea0(*param_1 + 0xc94,iVar7);
    fVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    fVar6 = fVar9 + fVar8 * fVar6;
    fVar9 = fVar9 + fVar8;
    *pfVar3 = fVar6;
    *pfVar4 = fVar9;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
    iVar7 = iVar1;
  } while (iVar1 < 4);
  param_1[0x19] = 0;
  param_1[0x44] = -1;
  param_1[0x10] = 0;
  iVar7 = 4;
  piVar2 = param_1 + 0x41;
  do {
    *piVar2 = -1;
    iVar7 = iVar7 + -1;
    piVar2 = piVar2 + -8;
  } while (-1 < iVar7);
  param_1[0xb] = 0;
  FUN_00173690(param_1 + 0x45);
  return 1;
}


// ==== FUN_00183aa0 @ 00183aa0 ====

void FUN_00183aa0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  
  FUN_00183ea8();
  FUN_001854b8(param_1);
  piVar7 = (int *)param_1;
  lVar3 = FUN_00183500(*piVar7 + 0x1eb0);
  if (((lVar3 != 0) && (lVar3 = FUN_00137450(lVar3), lVar3 != 0)) &&
     (lVar3 = FUN_00184268(param_1,2), lVar3 != 0)) {
    FUN_00181ad0(*piVar7 + 0xec0,0xf);
  }
  uVar4 = FUN_0013d400(*piVar7);
  lVar3 = FUN_00172610(uVar4);
  if (lVar3 != 0) {
    if (*(int *)((int)lVar3 + 0xc4) != 2) {
      iVar6 = piVar7[1];
      goto LAB_00183b8c;
    }
    lVar5 = FUN_0018d608(*piVar7 + 0xd10);
    if (lVar5 != 0) {
      iVar6 = piVar7[1];
      goto LAB_00183b8c;
    }
    iVar6 = *(int *)((int)lVar3 + 0x2a4);
    iVar2 = *(int *)(*(int *)(*piVar7 + 0x7c) + 0x2a4);
    if (iVar6 != 0) {
      if (iVar2 == 0) {
        iVar6 = piVar7[1];
        goto LAB_00183b8c;
      }
      cVar1 = *(char *)(iVar6 + 0x108);
      if (cVar1 == *(char *)(iVar2 + 0x108)) {
        iVar6 = piVar7[1];
        goto LAB_00183b8c;
      }
      iVar6 = *piVar7 + 0xec0;
      if (cVar1 != '\0') {
        FUN_00181ad0(iVar6,0x10);
        iVar6 = piVar7[1];
        goto LAB_00183b8c;
      }
      FUN_00181ad0(iVar6,0x11);
    }
  }
  iVar6 = piVar7[1];
LAB_00183b8c:
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x38c) != 0)) {
    piVar7[1] = 0;
    piVar7[2] = DAT_003f5600;
  }
  return;
}


// ==== FUN_00183bc0 @ 00183bc0 ====

void FUN_00183bc0(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
  lVar3 = FUN_00178f18(uVar2);
  if (lVar3 != 0) {
    iVar1 = FUN_00179258(DAT_0040f4d4 + 0xfa8,param_2);
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == *(int *)(param_1 + 4)) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = DAT_003f5604;
      iVar4 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 == iVar4) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar5 = 4;
    iVar4 = param_1;
    do {
      iVar5 = iVar5 + -1;
      if (*(int *)(iVar4 + 0x88) == iVar1) {
        *(undefined4 *)(iVar4 + 0x84) = 0xffffffff;
        *(undefined4 *)(iVar4 + 0x88) = 0;
      }
      iVar4 = iVar4 + 0x20;
    } while (-1 < iVar5);
  }
  FUN_00173f98(param_1 + 0x2c,param_2);
  return;
}


// ==== FUN_00183c80 @ 00183c80 ====

undefined4 FUN_00183c80(int *param_1,int param_2,int param_3)

{
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 7:
  case 0xb:
    if (*(int *)(*(int *)(*param_1 + 0x7c) + 0x3a4) == *(int *)(param_3 + 0x3a4)) {
      return 0;
    }
    break;
  default:
    return *(undefined4 *)(&DAT_003f6540 + param_2 * 4);
  case 5:
    if ((*(int *)(*(int *)(*param_1 + 0x7c) + 0x3a4) != *(int *)(param_3 + 0x3a4)) &&
       (1 < param_1[0x19])) {
      return 0;
    }
  }
  return *(undefined4 *)(&DAT_003f6540 + param_2 * 4);
}


// ==== FUN_00183d28 @ 00183d28 ====

void FUN_00183d28(int *param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_50 [16];
  
  if (param_3 != 0) {
    iVar2 = (int)param_3;
    if (((*(int *)(iVar2 + 0x3a4) != *(int *)(*(int *)(*param_1 + 0x7c) + 0x3a4)) &&
        (((*(int *)(iVar2 + 0xc4) == 2 || (lVar1 = FUN_0018ddd8(*param_1 + 0xc94), lVar1 != 0)) &&
         (0 < param_2)))) &&
       (((param_2 < 4 &&
         (lVar1 = FUN_00189bf8(*param_1 + 0x150,*(undefined4 *)(iVar2 + 0x380)), lVar1 != 0)) &&
        (lVar1 = FUN_00189250(*param_1 + 0x150,*(undefined4 *)(iVar2 + 0x380)), lVar1 != 0)))) {
      FUN_00189ad0(*param_1 + 0x150,param_3);
      FUN_0018c088(auStack_50,param_3);
      FUN_00181b08(*param_1 + 0xec0,auStack_50);
    }
  }
  return;
}


// ==== FUN_00183e00 @ 00183e00 ====

void FUN_00183e00(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [16];
  
  switch(param_2) {
  case 7:
  case 8:
    lVar1 = FUN_00184268(param_1,1);
    if (lVar1 != 0) {
      FUN_0018beb0(auStack_40,param_3);
      FUN_00181b08(*(int *)param_1 + 0xec0,auStack_40);
    }
  case 2:
  case 3:
  case 5:
  case 6:
  case 9:
  case 0xb:
    lVar1 = FUN_00184268(param_1,0);
    if (lVar1 != 0) {
      FUN_00181ad0(*(int *)param_1 + 0xec0,6);
    }
  default:
    return;
  }
}


// ==== FUN_00183ea8 @ 00183ea8 ====

void FUN_00183ea8(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x30) -
          *(float *)(param_1 + 0x30) * 0.01 * *(float *)(DAT_0040f4d0 + 0x1c) * 30.0;
  fVar1 = (float)((int)fVar1 * (uint)(0.0 < fVar1));
  *(uint *)(param_1 + 0x30) = (int)fVar1 * (uint)(fVar1 < 1.0) | (uint)(fVar1 >= 1.0) * 0x3f800000;
  return;
}


// ==== FUN_00183ef8 @ 00183ef8 ====

void FUN_00183ef8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
  undefined1 in_a2_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  auVar3 = _por(in_zero_qw,in_a2_qw);
  if (0.0 < param_1) {
    uVar1 = FUN_00183fd8();
    auVar2 = _por(in_zero_qw,auVar3);
    FUN_001858a8(param_1,param_2,param_3,auVar2._0_8_,param_4);
    auVar3 = _por(in_zero_qw,auVar3);
    FUN_001840c8(param_1,param_2,param_3,auVar3._0_8_,param_4,uVar1);
    fVar4 = *(float *)((int)param_2 + 0x30);
    param_1 = param_1 * (*(float *)(&DAT_003f6358 + (int)param_3 * 0x28) - fVar4);
    *(float *)((int)param_2 + 0x30) =
         fVar4 + (float)((int)param_1 * (uint)(fVar5 < param_1) |
                        (int)fVar5 * (uint)(fVar5 >= param_1));
  }
  return;
}


// ==== FUN_00183fd8 @ 00183fd8 ====

undefined4 FUN_00183fd8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 in_zero_qw [16];
  long lVar3;
  undefined1 in_a2_qw [16];
  int *piVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
  iVar2 = (int)param_3 * 0x28;
  auVar5 = _por(in_zero_qw,in_a2_qw);
  piVar4 = (int *)param_2;
  fVar6 = (param_1 * (*(float *)(&DAT_003f6354 + iVar2) - *(float *)(&DAT_003f6350 + iVar2)) +
          *(float *)(&DAT_003f6350 + iVar2)) - (float)piVar4[0xc];
  if (0.0 < fVar6) {
    iVar2 = *(int *)(*(int *)(*piVar4 + 0x7c) + 0x26c);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(iVar2 + (uint)*(byte *)(iVar2 + 0x19) * 4 + 0xc) != 0;
    }
    if (bVar1) {
      return 0;
    }
    lVar3 = FUN_00183c80(param_2,param_3,param_4);
    if (lVar3 != 0) {
      auVar5 = _por(in_zero_qw,auVar5);
      iVar2 = *(int *)(*piVar4 + 0x84);
      (**(code **)(iVar2 + 0x34))(fVar6,*piVar4 + (int)*(short *)(iVar2 + 0x30),lVar3,auVar5._0_8_);
      return 1;
    }
  }
  return 0;
}


// ==== FUN_001840c8 @ 001840c8 ====

void FUN_001840c8(float param_1,int *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 long param_6)

{
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_a0_udw;
  undefined8 in_a2_udw;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_3 = param_3 * 0x28;
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = param_4;
  auVar3 = _por(in_zero_qw,auVar3);
  auVar2._0_8_ = (long)*(int *)(&DAT_003f6368 + param_3);
  auVar2._8_8_ = in_a0_udw;
  if (param_6 != 0) {
    auVar1._8_8_ = in_v0_udw;
    auVar1._0_8_ = 2;
    auVar2 = _pmaxw(auVar2,auVar1);
    auVar2 = _pextlw(0,auVar2._0_8_);
  }
  fVar5 = (*(float *)(&DAT_003f635c + param_3) +
          (*(float *)(&UNK_003f6360 + param_3) - *(float *)(&DAT_003f635c + param_3)) * param_1) -
          (float)param_2[0xc];
  if (0.0 < fVar5) {
    _por(in_zero_qw,auVar3);
    if (param_2[0x19] < auVar2._0_8_) {
      FUN_00185538();
    }
    else if ((long)param_2[0x19] < (long)*(int *)(&DAT_003f636c + param_3)) {
      fVar6 = *(float *)(&UNK_003f6364 + param_3);
      fVar4 = (float)FUN_0018dea0(*param_2 + 0xc94);
      _por(in_zero_qw,auVar3);
      FUN_001855f8(fVar6 * fVar5 * fVar4 * (float)(&DAT_003f6530)[param_2[0x19]]);
    }
  }
  if (0.0 < fVar5) {
    FUN_00183d28();
    FUN_00183e00();
  }
  return;
}


// ==== FUN_00184238 @ 00184238 ====

byte FUN_00184238(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = FUN_00173610(param_1 + param_2 * 4 + 0x34);
  return bVar1 ^ 1;
}


// ==== FUN_00184268 @ 00184268 ====

undefined8 FUN_00184268(int param_1,int param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + param_2 * 4 + 0x34;
  uVar1 = FUN_00173610(param_1);
  FUN_00173640(*(undefined4 *)(&UNK_003f6570 + param_2 * 4),param_1);
  return uVar1;
}


// ==== FUN_001842c8 @ 001842c8 ====

void FUN_001842c8(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = param_3;
  auVar2 = _por(in_zero_qw,auVar2);
  iVar1 = 2;
  if (*(char *)(*(int *)(param_4 + 0x2a4) + 0x108) != '\0') {
    iVar1 = 1;
  }
  fVar3 = (float)FUN_001847b8(param_2,iVar1,1,4);
  if (((iVar1 == 2) && (0 < ((int *)param_2)[0x19])) &&
     (fVar4 = (float)FUN_001847b8(param_1,param_2,2,1,0), 0.0 < fVar4)) {
    iVar1 = 3;
  }
  if (*(int *)(param_4 + 0x3a4) == *(int *)(*(int *)(*(int *)param_2 + 0x7c) + 0x3a4)) {
    fVar3 = fVar3 * 0.5;
  }
  auVar2 = _por(in_zero_qw,auVar2);
  FUN_00183ef8(fVar3,param_2,iVar1,auVar2._0_8_);
  return;
}


// ==== FUN_001843c0 @ 001843c0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001843c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 auVar2 [16];
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _qmtc2(0x3f000000);
  auVar6._8_4_ = in_a2_udw;
  auVar6._0_8_ = param_3;
  auVar6._12_4_ = in_register_0000006c;
  auVar2 = _por(in_zero_qw,auVar6);
  piVar3 = (int *)param_1;
  auVar6 = _lqc2(_DAT_004432c0);
  auVar7 = _qmtc2(*(undefined4 *)(*(int *)(*piVar3 + 0x7c) + 0x2e8));
  auVar6 = _vmulbc(auVar6,auVar7);
  auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar3 + 0x7c) + 0xa0));
  auVar6 = _vmulbc(auVar6,auVar9);
  auVar7 = _qmtc2(param_2);
  auVar6 = _vadd(auVar8,auVar6);
  auVar7 = _vsub(auVar7,auVar6);
  auVar6 = _sqc2(auVar6);
  auVar7 = _vmul(auVar7,auVar7);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar10,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  fVar4 = (float)FUN_001847b8(auVar7._0_4_,param_1,7,1,4);
  auVar6 = _lqc2(auVar6);
  auVar7 = _por(in_zero_qw,auVar2);
  auVar6 = _qmfc2(auVar6._0_4_);
  uVar5 = FUN_0016e928(DAT_0040f4d4,auVar6._0_8_,param_2,auVar7._0_8_);
  uVar5 = FUN_001847b8(uVar5,param_1,0xb,1,4);
  iVar1 = *piVar3;
  if (*(int *)(param_4 + 0x3a4) == *(int *)(*(int *)(iVar1 + 0x7c) + 0x3a4)) {
    (**(code **)(*(int *)(iVar1 + 0x84) + 0x2c))
              (fVar4 / 3.0,iVar1 + *(short *)(*(int *)(iVar1 + 0x84) + 0x28),7,param_2);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x84) + 0x2c))
              (fVar4,iVar1 + *(short *)(*(int *)(iVar1 + 0x84) + 0x28),7,param_2);
    iVar1 = *(int *)(*piVar3 + 0x84);
    (**(code **)(iVar1 + 0x2c))(uVar5,*piVar3 + (int)*(short *)(iVar1 + 0x28),0xb,param_2);
  }
  return;
}


// ==== FUN_00184550 @ 00184550 ====

void FUN_00184550(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  
  iVar1 = FUN_00135550(param_3);
  if (*(int *)(iVar1 + 0x80) == 2) {
    iVar1 = FUN_00135550(param_3);
    if (*(int *)(iVar1 + 0x4e8) == 1) {
      uVar2 = 4;
    }
    else {
      uVar2 = 4;
      if (*(int *)(iVar1 + 0x4e8) == 2) {
        uVar2 = 5;
      }
    }
    piVar3 = (int *)param_2;
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _lqc2(*(undefined1 (*) [16])((int)param_3 + 0xa0));
    uVar4 = 0;
    auVar7 = _sqc2(auVar9);
    auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar3 + 0x7c) + 0xa0));
    auVar10 = _vsub(auVar10,auVar8);
    auVar8 = _vmul(auVar10,auVar10);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar9,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    if (2.3283064e-10 <= auVar8._0_4_) {
      auVar8 = _vmul(auVar10,auVar10);
      auVar9 = _lqc2(auVar7);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar9,auVar8);
      auVar10 = _vmove(auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar8);
      auVar8 = _qmfc2(auVar8._0_4_);
      auVar8 = _qmtc2(SQRT(auVar8._0_4_));
      uVar13 = _vwaitq();
      auVar9 = _vmulq(auVar10,uVar13);
      auVar10 = _qmfc2(auVar8._0_4_);
      auVar8 = _sqc2(auVar9);
      fVar5 = (float)FUN_00185350(param_2,0);
      auVar8 = _lqc2(auVar8);
      if (auVar10._0_4_ < fVar5) {
        auVar12 = _vaddbc(in_vf0,in_vf0);
        auVar10 = _vmul(auVar8,auVar8);
        auVar9 = _lqc2(auVar7);
        auVar11 = _vsubbc(in_vf0,in_vf0);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar9,auVar10);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar10);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        uVar13 = _vwaitq();
        auVar8 = _vmulq(auVar8,uVar13);
        _vmulq(auVar10,uVar13);
        auVar9 = _lqc2(auVar7);
        auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar3 + 0x7c) + 0xf0));
        auVar7 = _vmul(auVar10,auVar10);
        _vaddabc(auVar7,auVar7);
        auVar7 = _vmaddbc(auVar9,auVar7);
        auVar10 = _vmove(auVar10);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar7);
        auVar9 = _vaddbc(in_vf0,in_vf0);
        uVar13 = _vwaitq();
        auVar7 = _vmulq(auVar10,uVar13);
        _vmulq(auVar9,uVar13);
        auVar7 = _vmul(auVar8,auVar7);
        _vaddabc(auVar7,auVar7);
        auVar7 = _vmaddbc(auVar12,auVar7);
        auVar7 = _vmax(auVar7,auVar11);
        auVar7 = _vminibc(auVar7,in_vf0);
        auVar7 = _qmfc2(auVar7._0_4_);
        fVar5 = (float)FUN_0029e0d8(auVar7._0_4_);
        fVar6 = (float)FUN_00185438(param_2,0);
        if (fVar5 * 57.29578 <= fVar6) {
          uVar4 = 1;
          uVar2 = 5;
        }
      }
    }
    uVar13 = FUN_001847b8(param_1,param_2,uVar2,uVar4 ^ 1,4);
    iVar1 = *(int *)(*piVar3 + 0x84);
    (**(code **)(iVar1 + 0x2c))
              (uVar13,*piVar3 + (int)*(short *)(iVar1 + 0x28),uVar2,
               *(undefined8 *)((int)param_3 + 0xa0),param_3);
  }
  return;
}


// ==== FUN_001847b8 @ 001847b8 ====

float FUN_001847b8(float param_1,int *param_2,int param_3,long param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_5 == 4) {
    param_5 = param_2[0x19];
  }
  fVar3 = *(float *)(&DAT_003f6374 + param_3 * 0x28) * *(float *)(&DAT_003f6374 + param_3 * 0x28);
  fVar2 = *(float *)(&UNK_003f6370 + param_3 * 0x28) * *(float *)(&UNK_003f6370 + param_3 * 0x28);
  if (param_4 != 0) {
    if (param_5 < 1) {
      fVar1 = (float)FUN_0018e0f0(*param_2 + 0xc94);
    }
    else {
      fVar1 = (float)FUN_0018e0d0(*param_2 + 0xc94);
    }
    fVar3 = fVar3 * fVar1;
    fVar2 = fVar2 * fVar1;
  }
  if (param_1 < fVar2) {
    fVar2 = 1.0;
  }
  else if (param_1 <= fVar3) {
    fVar2 = (param_1 - fVar2) / (fVar3 - fVar2);
    fVar2 = (float)((int)fVar2 * (uint)(0.0 < fVar2));
    fVar2 = 1.0 - (float)((int)fVar2 * (uint)(fVar2 < 1.0) | (uint)(fVar2 >= 1.0) * 0x3f800000);
  }
  else {
    fVar2 = 0.0;
  }
  return fVar2;
}


// ==== FUN_001848a8 @ 001848a8 ====

void FUN_001848a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x10) = param_2;
  *(undefined4 *)(param_3 + 0x14) = param_1;
  return;
}


// ==== FUN_001848b8 @ 001848b8 ====

undefined4 FUN_001848b8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== FUN_001848c0 @ 001848c0 ====

int FUN_001848c0(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar7 = DAT_003f5668;
  uVar6 = *(undefined4 *)(*(int *)(*param_1 + 0x7c) + 0x100);
  if (param_1[3] == 0) {
    lVar2 = FUN_0018ddd8(*param_1 + 0xc94);
    if (lVar2 == 0) {
      auVar10 = _qmtc2(uVar6);
      auVar9 = _vaddbc(in_vf0,in_vf0);
      iVar5 = 0x2b00;
      iVar3 = 0;
      iVar4 = 0xf;
      do {
        iVar1 = iVar3 + DAT_0040f4d4;
        if (((*(char *)(iVar1 + 0x2b78) != '\0') &&
            (*(int *)(*param_1 + 0x80) == *(int *)(iVar1 + 0x2b80))) &&
           (DAT_0040f4d4 + iVar5 != *param_1)) {
          auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x2b7c) + 0x100));
          auVar8 = _vsub(auVar10,auVar8);
          auVar8 = _vmul(auVar8,auVar8);
          _vaddabc(auVar8,auVar8);
          auVar8 = _vmaddbc(auVar9,auVar8);
          auVar8 = _qmfc2(auVar8._0_4_);
          if (auVar8._0_4_ < fVar7) {
            param_1[3] = *(int *)(iVar3 + DAT_0040f4d4 + 0x2b7c);
            fVar7 = auVar8._0_4_;
          }
        }
        iVar5 = iVar5 + 0x1fd0;
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + 0x1fd0;
      } while (-1 < iVar4);
    }
    else {
      param_1[3] = DAT_0040f4d0 + 0x30;
    }
  }
  return param_1[3];
}


// ==== FUN_001849d8 @ 001849d8 ====

void FUN_001849d8(float param_1,float param_2,undefined8 param_3,float *param_4,undefined8 param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  *param_4 = param_1;
  lVar1 = FUN_00173fb8((int *)param_3 + 0xb,*(undefined4 *)((int)param_5 + 0x380));
  if (lVar1 == 0) {
    *(undefined1 *)((int)param_4 + 5) = 0;
  }
  else {
    fVar3 = (*(float *)(*(int *)(*(int *)param_3 + 0x7c) + 0x318) + *(float *)((int)param_5 + 0x318)
            ) * 0.5 + 0.33;
    if (param_1 <= fVar3) {
      *(undefined1 *)((int)param_4 + 5) = 1;
      *(undefined1 *)(param_4 + 1) = 1;
      return;
    }
    fVar2 = (float)FUN_00185350(param_3,param_5);
    if (param_1 <= fVar2) {
      *(undefined1 *)((int)param_4 + 5) = 1;
      fVar2 = (float)FUN_00185438(param_3,param_5);
      if (param_1 - fVar3 < 5.0) {
        fVar3 = (param_1 - fVar3) / 5.0;
        fVar2 = fVar2 + (160.0 - fVar2) * (1.0 - (float)((int)fVar3 * (uint)(0.0 <= fVar3)));
      }
      if (param_2 <= fVar2) {
        *(undefined1 *)(param_4 + 1) = 1;
        return;
      }
      *(undefined1 *)(param_4 + 1) = 0;
      return;
    }
    *(undefined1 *)((int)param_4 + 5) = 0;
  }
  *(undefined1 *)(param_4 + 1) = 0;
  return;
}


// ==== FUN_00184b40 @ 00184b40 ====

void FUN_00184b40(undefined8 param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  
  piVar2 = (int *)param_1;
  piVar1 = (int *)param_3;
  if (param_2 == piVar2[1]) {
    *(undefined1 *)((int)piVar1 + 5) = 1;
    *(undefined1 *)(piVar1 + 1) = 1;
    *piVar1 = piVar2[2];
  }
  else {
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
    auVar10 = _vmove(auVar5);
    auVar4 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar2 + 0x7c) + 0xa0));
    auVar6 = _vsub(auVar6,auVar4);
    auVar4 = _vmul(auVar6,auVar6);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar5,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    if (auVar4._0_4_ < 2.3283064e-10) {
      *piVar1 = 0;
      *(undefined1 *)((int)piVar1 + 5) = 1;
      *(undefined1 *)(piVar1 + 1) = 1;
    }
    else {
      auVar4 = _vmul(auVar6,auVar6);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar10,auVar4);
      auVar6 = _vmove(auVar6);
      auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar2 + 0x7c) + 0xf0));
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar4);
      auVar4 = _qmfc2(auVar4._0_4_);
      auVar9 = _qmtc2(SQRT(auVar4._0_4_));
      uVar11 = _vwaitq();
      auVar7 = _vmulq(auVar6,uVar11);
      auVar4 = _vmul(auVar7,auVar7);
      auVar6 = _vmul(auVar8,auVar8);
      _vaddabc(auVar6,auVar6);
      auVar5 = _vmaddbc(auVar10,auVar6);
      _vaddabc(auVar4,auVar4);
      auVar6 = _vmaddbc(auVar10,auVar4);
      auVar4 = _vmove(auVar7);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmove(auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar6);
      auVar6 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar4 = _vmulq(auVar4,uVar11);
      _vmulq(auVar6,uVar11);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar5);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar6 = _vmulq(auVar10,uVar11);
      _vmulq(auVar5,uVar11);
      auVar5 = _vsubbc(in_vf0,in_vf0);
      auVar6 = _vmul(auVar4,auVar6);
      auVar4 = _qmfc2(auVar9._0_4_);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar7,auVar6);
      auVar6 = _vmax(auVar6,auVar5);
      auVar6 = _vminibc(auVar6,in_vf0);
      auVar6 = _qmfc2(auVar6._0_4_);
      fVar3 = (float)FUN_0029e0d8(auVar6._0_4_);
      FUN_001849d8(auVar4._0_4_,fVar3 * 57.29578,param_1,param_3,param_2);
    }
  }
  return;
}


// ==== FUN_00184d10 @ 00184d10 ====

byte FUN_00184d10(int *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4 = _qmtc2(param_2);
  auVar5 = _qmtc2(0x3d4ccccd);
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0x100));
  auVar2 = _vsub(auVar4,auVar3);
  auVar5 = _vmulbc(auVar2,auVar5);
  auVar2 = _qmfc2(auVar3._0_4_);
  auVar5 = _vsub(auVar4,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  bVar1 = FUN_00175f50(DAT_0040f4d4 + 4000,auVar2._0_8_,auVar5._0_8_,7,*(int *)(*param_1 + 0x7c),0);
  return bVar1 ^ 1;
}


// ==== FUN_00184d78 @ 00184d78 ====

void FUN_00184d78(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_003f566c;
  piVar2 = (int *)param_1;
  piVar2[1] = 0;
  piVar2[2] = iVar1;
  piVar2[3] = 0;
  iVar1 = *piVar2;
  if (*(int *)(*(int *)(iVar1 + 0x7c) + 0x3a4) == 1) {
    FUN_00184de0(param_1);
    iVar1 = *piVar2;
  }
  *(undefined1 *)(iVar1 + 0x284) = 1;
  return;
}


// ==== FUN_00184de0 @ 00184de0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00184de0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
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
  undefined4 uVar16;
  undefined1 auStack_f0 [4];
  char cStack_ec;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  
  piVar4 = (int *)param_1;
  iVar5 = *(int *)(*piVar4 + 0x7c);
  if (*(char *)(iVar5 + 0x3aa) == '\0') {
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
    auVar8 = _lqc2(_DAT_00414de0);
    auVar8 = _vadd(auVar10,auVar8);
    auStack_e0 = _sqc2(auVar8);
  }
  else {
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
    auVar8 = _lqc2(_DAT_00414dd0);
    auVar8 = _vadd(auVar10,auVar8);
    auStack_e0 = _sqc2(auVar8);
  }
  if (*(char *)(*piVar4 + 0x39) != '\0') {
    auVar10 = _lqc2(auStack_e0);
    auVar8 = _lqc2(_DAT_00415880);
    auVar8 = _vadd(auVar10,auVar8);
    auStack_e0 = _sqc2(auVar8);
  }
  iVar5 = *(int *)(*piVar4 + 0x7c);
  uStack_c0 = *(undefined4 *)(iVar5 + 0xf0);
  uStack_bc = *(undefined4 *)(iVar5 + 0xf4);
  uStack_b8 = *(undefined4 *)(iVar5 + 0xf8);
  uStack_b4 = *(undefined4 *)(iVar5 + 0xfc);
  iVar5 = 0;
  do {
    iVar1 = *(int *)(DAT_0040f4d4 + 0x22864 + iVar5 * 4);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0x3aa) == '\0') {
        auVar8 = _lqc2(_DAT_00414de0);
      }
      else {
        auVar8 = _lqc2(_DAT_00414dd0);
      }
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
      auVar15 = _vadd(auVar10,auVar8);
      auVar10 = _lqc2(auStack_e0);
      auVar8 = _qmtc2(0);
      auVar11 = _vsub(auVar15,auVar10);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      _sqc2(auVar11);
      auVar11 = _vaddbc(in_vf0,auVar8);
      auVar8 = _vmul(auVar11,auVar11);
      auStack_d0 = _sqc2(auVar11);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar10,auVar8);
      auVar10 = _vmove(auVar10);
      auVar8 = _qmfc2(auVar8._0_4_);
      if (auVar8._0_4_ < 2.3283064e-10) {
        fVar7 = 0.0;
        fVar6 = 0.0;
      }
      else {
        auVar9 = _vmul(auVar11,auVar11);
        auVar8._4_4_ = uStack_bc;
        auVar8._0_4_ = uStack_c0;
        auVar8._8_4_ = uStack_b8;
        auVar8._12_4_ = uStack_b4;
        auVar12 = _lqc2(auVar8);
        _vaddabc(auVar9,auVar9);
        auVar8 = _vmaddbc(auVar10,auVar9);
        auVar9 = _vmul(auVar12,auVar12);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar8);
        auVar8 = _qmfc2(auVar8._0_4_);
        auVar13 = _qmtc2(SQRT(auVar8._0_4_));
        uVar16 = _vwaitq();
        auVar12 = _vmulq(auVar11,uVar16);
        _vaddabc(auVar9,auVar9);
        auVar8 = _vmaddbc(auVar10,auVar9);
        auStack_d0 = _sqc2(auVar12);
        auVar14 = _vaddbc(in_vf0,in_vf0);
        auVar11._4_4_ = uStack_bc;
        auVar11._0_4_ = uStack_c0;
        auVar11._8_4_ = uStack_b8;
        auVar11._12_4_ = uStack_b4;
        auVar9 = _lqc2(auVar11);
        auVar11 = _vmul(auVar12,auVar12);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar8);
        auVar8 = _vaddbc(in_vf0,in_vf0);
        uVar16 = _vwaitq();
        auVar12 = _vmulq(auVar9,uVar16);
        _vmulq(auVar8,uVar16);
        _vaddabc(auVar11,auVar11);
        auVar10 = _vmaddbc(auVar10,auVar11);
        auVar8 = _lqc2(auStack_d0);
        auVar9 = _vsubbc(in_vf0,in_vf0);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar10);
        auVar11 = _vaddbc(in_vf0,in_vf0);
        uVar16 = _vwaitq();
        auVar10 = _vmulq(auVar8,uVar16);
        _vmulq(auVar11,uVar16);
        auVar8 = _qmfc2(auVar13._0_4_);
        auVar10 = _vmul(auVar10,auVar12);
        fVar7 = auVar8._0_4_;
        _vaddabc(auVar10,auVar10);
        auVar8 = _vmaddbc(auVar14,auVar10);
        auStack_b0 = _sqc2(auVar15);
        auVar8 = _vmax(auVar8,auVar9);
        auVar8 = _vminibc(auVar8,in_vf0);
        auVar8 = _qmfc2(auVar8._0_4_);
        fVar6 = (float)FUN_0029e0d8(auVar8._0_4_);
        auVar15 = _lqc2(auStack_b0);
        fVar6 = fVar6 * 57.29578;
      }
      if (0.0 < fVar7) {
        auVar8 = _qmfc2(auVar15._0_4_);
        lVar3 = FUN_00185318(param_1,auStack_e0._0_8_,auVar8._0_8_);
        uVar16 = *(undefined4 *)(iVar1 + 0x380);
        if (lVar3 != 0) {
          FUN_00173f98(piVar4 + 0xb,uVar16);
          if (((*(int *)(iVar1 + 0xc4) == 1) && (lVar3 = FUN_00135550(iVar1), lVar3 != 0)) &&
             (iVar2 = FUN_00135550(iVar1), *(int *)(iVar2 + 0x80) == 1)) {
            iVar1 = FUN_00135550(iVar1);
            lVar3 = FUN_0018ddd8(iVar1 + 0xc94);
            if (lVar3 != 0) {
              FUN_00173f98(iVar1 + 0x71c,*(undefined4 *)(*(int *)(*piVar4 + 0x7c) + 0x380));
            }
          }
          goto LAB_00185184;
        }
      }
      else {
        uVar16 = *(undefined4 *)(iVar1 + 0x380);
      }
      FUN_00173f80(piVar4 + 0xb,uVar16);
      if (((*(int *)(iVar1 + 0xc4) == 1) && (lVar3 = FUN_00135550(iVar1), lVar3 != 0)) &&
         (iVar2 = FUN_00135550(iVar1), *(int *)(iVar2 + 0x80) == 1)) {
        iVar2 = FUN_00135550(iVar1);
        lVar3 = FUN_0018ddd8(iVar2 + 0xc94);
        if (lVar3 != 0) {
          FUN_001851c8(fVar7,iVar2 + 0x6f0,*(undefined4 *)(*piVar4 + 0x7c));
        }
      }
      FUN_001849d8(fVar7,fVar6,param_1,auStack_f0,iVar1);
      if ((cStack_ec != '\0') && (fVar7 < (float)piVar4[2])) {
        piVar4[2] = (int)fVar7;
        piVar4[1] = iVar1;
      }
    }
LAB_00185184:
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      return;
    }
  } while( true );
}


// ==== FUN_001851c8 @ 001851c8 ====

void FUN_001851c8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int *piVar1;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auStack_60 [5];
  char cStack_5b;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  piVar1 = (int *)param_2;
  uStack_50 = (undefined4)param_4;
  uStack_4c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_48 = in_a2_udw;
  uStack_44 = in_register_0000006c;
  FUN_00173f80(piVar1 + 0xb,*(undefined4 *)((int)param_3 + 0x380));
  if (param_1 <= (float)piVar1[2]) {
    if (param_1 == 0.0) {
      piVar1[2] = (int)param_1;
    }
    else {
      auVar6 = _vaddbc(in_vf0,in_vf0);
      auVar3._4_4_ = uStack_4c;
      auVar3._0_4_ = uStack_50;
      auVar3._8_4_ = uStack_48;
      auVar3._12_4_ = uStack_44;
      auVar3 = _lqc2(auVar3);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar4 = _vsub(in_vf0,auVar3);
      auVar3 = _vmul(auVar4,auVar4);
      auVar4 = _vmove(auVar4);
      auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar1 + 0x7c) + 0xf0));
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar6,auVar3);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar3);
      auVar3 = _vaddbc(in_vf0,in_vf0);
      uVar9 = _vwaitq();
      auVar4 = _vmulq(auVar4,uVar9);
      _vmulq(auVar3,uVar9);
      auVar7 = _vsubbc(in_vf0,in_vf0);
      auVar3 = _vmul(auVar5,auVar5);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar6,auVar3);
      auVar5 = _vmove(auVar5);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar3);
      auVar6 = _vaddbc(in_vf0,in_vf0);
      uVar9 = _vwaitq();
      auVar3 = _vmulq(auVar5,uVar9);
      _vmulq(auVar6,uVar9);
      auVar3 = _vmul(auVar4,auVar3);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar8,auVar3);
      auVar3 = _vmax(auVar3,auVar7);
      auVar3 = _vminibc(auVar3,in_vf0);
      auVar3 = _qmfc2(auVar3._0_4_);
      fVar2 = (float)FUN_0029e0d8(auVar3._0_4_);
      FUN_001849d8(param_1,fVar2 * 57.29578,param_2,auStack_60,param_3);
      if (cStack_5b == '\0') {
        return;
      }
      piVar1[2] = (int)param_1;
    }
    piVar1[1] = (int)param_3;
  }
  return;
}


// ==== FUN_00185318 @ 00185318 ====

void FUN_00185318(int *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00175f50(DAT_0040f4d4 + 4000,param_2,param_3,0x221,*(undefined4 *)(*param_1 + 0x7c),1);
  return;
}


// ==== FUN_00185350 @ 00185350 ====

float FUN_00185350(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = 0;
  if (param_2 != 0) {
    lVar3 = FUN_00189250(*param_1 + 0x150,*(undefined4 *)((int)param_2 + 0x380));
  }
  iVar1 = param_1[0x19];
  if (iVar1 == 1) {
    iVar2 = *param_1;
LAB_001853f0:
    fVar5 = (float)FUN_0018e110(iVar2 + 0xc94);
    fVar4 = (float)param_1[5];
  }
  else {
    if (1 < iVar1) {
      if (iVar1 < 4) {
        iVar2 = *param_1;
        if (lVar3 != 0) {
          fVar4 = (float)FUN_0018e110(iVar2 + 0xc94);
          fVar5 = (float)param_1[4];
          fVar4 = (float)param_1[5] * fVar4;
          fVar4 = (float)((int)fVar5 * (uint)(fVar4 < fVar5) | (int)fVar4 * (uint)(fVar4 >= fVar5));
          fVar5 = (float)param_1[6];
          goto LAB_00185404;
        }
      }
      else {
        iVar2 = *param_1;
      }
      goto LAB_001853f0;
    }
    iVar2 = *param_1;
    if (iVar1 != 0) goto LAB_001853f0;
    fVar5 = (float)FUN_0018e130(iVar2 + 0xc94);
    fVar4 = (float)param_1[5];
  }
  fVar4 = fVar4 * fVar5;
  fVar5 = (float)param_1[6];
LAB_00185404:
  if (0.0 <= fVar5) {
    fVar4 = (float)((int)fVar4 * (uint)(fVar4 < fVar5) | (int)fVar5 * (uint)(fVar4 >= fVar5));
  }
  return fVar4;
}


// ==== FUN_00185438 @ 00185438 ====

int FUN_00185438(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_00189250(*param_1 + 0x150,*(undefined4 *)((int)param_2 + 0x380));
  }
  iVar2 = param_1[0x19];
  if (iVar2 == 1) {
    iVar2 = param_1[9];
  }
  else if (iVar2 < 2) {
    if (iVar2 == 0) {
      iVar2 = param_1[10];
    }
    else {
      iVar2 = param_1[9];
    }
  }
  else if (iVar2 < 4) {
    if (lVar1 == 0) {
      iVar2 = param_1[9];
    }
    else {
      iVar2 = param_1[8];
    }
  }
  else {
    iVar2 = param_1[9];
  }
  return iVar2;
}


// ==== FUN_001854b8 @ 001854b8 ====

void FUN_001854b8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  if (1 < (int)puVar2[0x19]) {
    FUN_0013da60(*puVar2);
  }
  uVar1 = DAT_004432a0;
  puVar2[0x10] = (float)puVar2[0x10] - *(float *)(DAT_0040f4d0 + 0x1c);
  FUN_001855f8(-*(float *)(DAT_0040f4d0 + 0x1c),param_1,uVar1,0);
  return;
}


// ==== FUN_00185530 @ 00185530 ====

void FUN_00185530(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}


// ==== FUN_00185538 @ 00185538 ====

void FUN_00185538(undefined8 param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined8 in_a3_udw;
  int iVar3;
  undefined1 auVar4 [16];
  
  iVar3 = (int)param_1;
  auVar4._8_8_ = in_a3_udw;
  auVar4._0_8_ = param_4;
  auVar4 = _por(in_zero_qw,auVar4);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + param_2 * 4 + 0x54);
  FUN_00185798();
  iVar2 = FUN_00185708(param_1);
  iVar1 = *(int *)(iVar3 + 100);
  if (param_3 == 0) {
    FUN_00185cb0(param_1,iVar1,iVar2);
  }
  *(int *)(iVar3 + 100) = iVar2;
  if ((param_3 == 0) && (iVar2 != iVar1)) {
    auVar4 = _por(in_zero_qw,auVar4);
    FUN_00185870(param_1,iVar1 < iVar2,auVar4._0_8_,param_5);
  }
  return;
}


// ==== FUN_001855f8 @ 001855f8 ====

void FUN_001855f8(float param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined8 in_a1_udw;
  int iVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = param_3;
  auVar4 = _por(in_zero_qw,auVar4);
  iVar3 = (int)param_2;
  *(float *)(iVar3 + 0x40) = *(float *)(iVar3 + 0x40) + param_1;
  FUN_00185798();
  iVar2 = FUN_00185708(param_2);
  iVar1 = *(int *)(iVar3 + 100);
  FUN_00185cb0(param_2,iVar1,iVar2);
  *(int *)(iVar3 + 100) = iVar2;
  if (iVar1 < iVar2) {
    *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + iVar2 * 4 + 0x54);
  }
  if (iVar2 != iVar1) {
    auVar4 = _por(in_zero_qw,auVar4);
    FUN_00185870(param_2,iVar1 < iVar2,auVar4._0_8_);
  }
  return;
}


// ==== FUN_001856b0 @ 001856b0 ====

void FUN_001856b0(undefined8 param_1,long param_2)

{
  FUN_00185530(param_1,param_2 != 0);
  FUN_00185538(param_1,param_2 != 0,1,DAT_004432a0,0);
  return;
}


// ==== FUN_00185708 @ 00185708 ====

int FUN_00185708(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((float)param_1[0x13] < (float)param_1[0x10]) {
    iVar2 = 3;
  }
  else {
    for (iVar1 = 2;
        (iVar2 = 0, 0 < iVar1 &&
        (iVar2 = iVar1, (float)param_1[0x10] <= (float)param_1[iVar1 + 0x10])); iVar1 = iVar1 + -1)
    {
    }
  }
  if (param_1[0x19] < iVar2) {
    param_1[0x10] = param_1[iVar2 + 0x15];
  }
  *(bool *)(*param_1 + 0x3a) = param_1[0x19] != 0;
  return iVar2;
}


// ==== FUN_00185798 @ 00185798 ====

void FUN_00185798(int *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = FUN_00188f10(*param_1 + 0x150);
  uVar4 = (uint)(lVar3 != 0);
  lVar3 = FUN_00188f10(*param_1 + 0x150);
  if (lVar3 == 0) {
    uVar1 = param_1[0x1a];
  }
  else {
    lVar3 = FUN_0018ab08(*param_1 + 0x150);
    if (lVar3 != 0) {
      uVar4 = 2;
    }
    uVar1 = param_1[0x1a];
  }
  if (((int)uVar4 < (int)uVar1) && (uVar4 = uVar1, 1 < (int)uVar1)) {
    param_1[0x1a] = 1;
  }
  iVar2 = FUN_00181ee8(*param_1 + 0xec0);
  if ((int)uVar4 < *(int *)(iVar2 + 0x84)) {
    iVar2 = FUN_00181ee8(*param_1 + 0xec0);
    uVar4 = *(uint *)(iVar2 + 0x84);
  }
  fVar6 = (float)param_1[0x10];
  fVar7 = (float)param_1[0x14];
  fVar5 = (float)param_1[uVar4 + 0x15];
  fVar5 = (float)((int)fVar6 * (uint)(fVar5 < fVar6) | (int)fVar5 * (uint)(fVar5 >= fVar6));
  param_1[0x10] = (int)fVar5 * (uint)(fVar5 < fVar7) | (int)fVar7 * (uint)(fVar5 >= fVar7);
  return;
}


// ==== FUN_00185870 @ 00185870 ====

void FUN_00185870(int *param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_0018bfe8(auStack_40);
  FUN_00181b08(*param_1 + 0xec0,auStack_40);
  return;
}


// ==== FUN_001858a8 @ 001858a8 ====

void FUN_001858a8(int *param_1,long param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar9 = _qmtc2(param_3);
  if (((param_2 != 6) && (param_2 != 8)) && (param_4 != 0)) {
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
    auVar6 = _vsub(auVar6,auVar9);
    auVar6 = _vmul(auVar6,auVar6);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (100.0 <= auVar6._0_4_) {
      auVar8 = _vmove(auVar8);
      fVar5 = -1.0;
      auVar6 = _vmove(auVar9);
      iVar2 = -1;
      iVar4 = 0;
      piVar3 = param_1;
      do {
        if ((piVar3[0x21] != -1) && (piVar3[0x22] == param_4)) {
          auVar7 = _lqc2(*(undefined1 (*) [16])(piVar3 + 0x1c));
          auVar7 = _vsub(auVar7,auVar6);
          auVar7 = _vmul(auVar7,auVar7);
          _vaddabc(auVar7,auVar7);
          auVar7 = _vmaddbc(auVar8,auVar7);
          auVar7 = _qmfc2(auVar7._0_4_);
          fVar1 = auVar7._0_4_;
          if ((fVar1 < 25.0) && ((iVar2 == -1 || (fVar1 < fVar5)))) {
            fVar5 = fVar1;
            iVar2 = iVar4;
          }
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 8;
      } while (iVar4 < 5);
      if (iVar2 == -1) {
        auVar9 = _sqc2(auVar9);
        iVar2 = FUN_00185ba8(param_1);
        param_1[iVar2 * 8 + 0x22] = param_4;
        auVar9 = _lqc2(auVar9);
        auVar9 = _sqc2(auVar9);
        *(undefined1 (*) [16])(param_1 + iVar2 * 8 + 0x1c) = auVar9;
      }
      else {
        auVar6 = _qmtc2(0x3f333333);
        auVar8 = _qmtc2(0x3e99999a);
        auVar8 = _vmulbc(auVar9,auVar8);
        auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + iVar2 * 8 + 0x1c));
        auVar9 = _vmulbc(auVar9,auVar6);
        auVar9 = _sqc2(auVar9);
        *(undefined1 (*) [16])(param_1 + iVar2 * 8 + 0x1c) = auVar9;
        auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + iVar2 * 8 + 0x1c));
        auVar9 = _vadd(auVar9,auVar8);
        auVar9 = _sqc2(auVar9);
        *(undefined1 (*) [16])(param_1 + iVar2 * 8 + 0x1c) = auVar9;
      }
      param_1[iVar2 * 8 + 0x20] = *(int *)(DAT_0040f4d0 + 0x20);
    }
  }
  return;
}


// ==== FUN_00185a70 @ 00185a70 ====

undefined4 FUN_00185a70(float param_1,float param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar8 = _qmtc2(param_4);
  fVar5 = -1.0;
  iVar2 = -1;
  iVar4 = 0;
  auVar7 = _vaddbc(in_vf0,in_vf0);
  iVar3 = param_3;
  do {
    if (*(int *)(iVar3 + 0x84) != -1) {
      if (0.0 < param_2) {
        if (*(float *)(iVar3 + 0x80) <= param_2) goto LAB_00185b24;
        auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
      }
      else {
        auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
      }
      auVar6 = _vsub(auVar6,auVar8);
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar7,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      fVar1 = auVar6._0_4_;
      if (((param_1 <= 0.0) || (param_1 < fVar1)) && ((iVar2 == -1 || (fVar1 < fVar5)))) {
        fVar5 = fVar1;
        iVar2 = iVar4;
      }
    }
LAB_00185b24:
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x20;
    if (4 < iVar4) {
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      return *(undefined4 *)(param_3 + iVar2 * 0x20 + 0x84);
    }
  } while( true );
}


// ==== FUN_00185b50 @ 00185b50 ====

undefined4 FUN_00185b50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 0x84) == param_2) {
      return *(undefined4 *)(param_1 + 0x88);
    }
    param_1 = param_1 + 0x20;
  } while (iVar1 < 5);
  return 0;
}


// ==== FUN_00185b80 @ 00185b80 ====

void FUN_00185b80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
    if (*(int *)(param_1 + 0x84) == param_2) {
      *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    }
    param_1 = param_1 + 0x20;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_00185ba8 @ 00185ba8 ====

int FUN_00185ba8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = -1;
  iVar3 = 0;
  fVar6 = *(float *)(DAT_0040f4d0 + 0x20) + 1.0;
  iVar2 = param_1;
  do {
    if (4 < iVar3) {
      iVar2 = *(int *)(param_1 + 0x110);
      iVar3 = iVar4;
LAB_00185c1c:
      *(int *)(param_1 + 0x110) = iVar2 + 1;
      *(int *)(param_1 + iVar3 * 0x20 + 0x84) = iVar2 + 1;
      return iVar3;
    }
    if (*(int *)(iVar2 + 0x84) == -1) {
      iVar2 = *(int *)(param_1 + 0x110);
      goto LAB_00185c1c;
    }
    fVar5 = *(float *)(iVar2 + 0x80);
    iVar1 = iVar3;
    if (fVar6 < fVar5) {
      fVar5 = fVar6;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
    iVar2 = iVar2 + 0x20;
    iVar3 = iVar3 + 1;
    fVar6 = fVar5;
  } while( true );
}


// ==== FUN_00185c38 @ 00185c38 ====

void FUN_00185c38(int param_1)

{
  FUN_00173fb8(param_1 + 0x2c);
  return;
}


// ==== FUN_00185c58 @ 00185c58 ====

undefined4 FUN_00185c58(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_001735e0(param_1 + 0x114);
  if ((lVar1 != 0) && (lVar1 = FUN_00173610(param_1 + 0x114), lVar1 != 0)) {
    return 0;
  }
  return 1;
}


// ==== FUN_00185cb0 @ 00185cb0 ====

void FUN_00185cb0(int param_1,long param_2,long param_3)

{
  if (param_2 < 2) {
    if (1 < param_3) {
      FUN_00173640(0x3f800000,param_1 + 0x114);
    }
  }
  else if (param_3 < 2) {
    FUN_00173690(param_1 + 0x114);
  }
  return;
}


// ==== FUN_00185d08 @ 00185d08 ====

void FUN_00185d08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}


// ==== FUN_00185d10 @ 00185d10 ====

undefined4 FUN_00185d10(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  
  auVar7 = _vadd(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  iVar4 = 0;
  *(undefined1 *)((int)param_1 + 0xa1) = 0;
  _sqc2(auVar7);
  puVar5 = param_1;
  do {
    puVar5 = puVar5 + 1;
    iVar2 = iVar4 + 0x54;
    *puVar5 = 0;
    iVar4 = iVar4 + 1;
    *(undefined1 *)((int)param_1 + iVar2) = 0;
  } while (iVar4 < 0x14);
  *param_1 = 0;
  uVar3 = ZEXT48(param_1);
  puVar6 = param_1 + 0x1c;
  puVar5 = param_1 + 0x1b;
  do {
    *puVar5 = 0;
    *puVar6 = 0;
    puVar5 = puVar5 + 3;
    iVar4 = (int)uVar3;
    *(undefined1 *)(iVar4 + 0x74) = 0;
    *(undefined1 *)(iVar4 + 0x75) = 0;
    *(undefined1 *)(iVar4 + 0x76) = 0;
    uVar3 = (ulong)(iVar4 + 0xc);
    puVar6 = puVar6 + 3;
  } while ((long)uVar3 < (long)(int)(param_1 + 6));
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return 1;
}


// ==== FUN_00185da8 @ 00185da8 ====

void FUN_00185da8(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  uVar2 = FUN_0018a678(*(int *)(iVar3 + 0xa4) + 0x150);
  cVar1 = FUN_00176f00(*(int *)(iVar3 + 0xa4) + 0x1fcc);
  if (cVar1 != '\0') {
    FUN_00186e68(param_1,uVar2);
  }
  FUN_00186988(param_1,uVar2);
  FUN_00185ff0(param_1,uVar2,*(byte *)(iVar3 + 0x76) ^ 1);
  FUN_00186218(param_1,uVar2,*(byte *)(iVar3 + 0x82) ^ 1);
  return;
}


// ==== FUN_00185e38 @ 00185e38 ====

void FUN_00185e38(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  iVar2 = 0;
  puVar4 = param_1;
  do {
    puVar4 = puVar4 + 1;
    iVar1 = iVar2 + 0x54;
    *puVar4 = 0;
    iVar2 = iVar2 + 1;
    *(undefined1 *)((int)param_1 + iVar1) = 0;
  } while (iVar2 < 0x14);
  *param_1 = 0;
  puVar5 = (undefined1 *)((int)param_1 + 0x75);
  puVar4 = param_1 + 0x1b;
  piVar3 = param_1 + 0x1c;
  do {
    if (*piVar3 == 0) {
      *puVar4 = 0;
    }
    else {
      iVar2 = FUN_00177a98();
      if (iVar2 == param_1[0x29]) {
        FUN_00177ad0(*piVar3);
        *puVar4 = 0;
      }
      else {
        *puVar4 = 0;
      }
    }
    *piVar3 = 0;
    puVar4 = puVar4 + 3;
    *puVar5 = 0;
    piVar3 = piVar3 + 3;
    puVar5 = puVar5 + 0xc;
  } while ((int)piVar3 < (int)(param_1 + 0x22));
  return;
}


// ==== FUN_00185f00 @ 00185f00 ====

bool FUN_00185f00(int param_1)

{
  return *(int *)(param_1 + 0x70) != 0;
}


// ==== FUN_00185f10 @ 00185f10 ====

int FUN_00185f10(int param_1)

{
  return param_1 + 0x90;
}


// ==== FUN_00185f18 @ 00185f18 ====

bool FUN_00185f18(int param_1)

{
  return *(int *)(param_1 + 0x7c) != 0;
}


// ==== FUN_00185f28 @ 00185f28 ====

bool FUN_00185f28(int param_1)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x7c) != 0) {
    puVar3 = (undefined4 *)FUN_0018a678(*(int *)(param_1 + 0xa4) + 0x150);
    lVar5 = FUN_00177b80(*(undefined4 *)(param_1 + 0x7c),*puVar3);
    bVar2 = false;
    if (lVar5 == 0) {
      fVar7 = (float)FUN_00185350(*(int *)(param_1 + 0xa4) + 0x6f0,0);
      pauVar1 = *(undefined1 (**) [16])(param_1 + 0x7c);
      uVar6 = FUN_0018a678(*(int *)(param_1 + 0xa4) + 0x150);
      pauVar4 = (undefined1 (*) [16])FUN_00178d30(uVar6);
      auVar9 = _lqc2(*pauVar4);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar8 = _lqc2(*pauVar1);
      auVar8 = _vsub(auVar8,auVar9);
      auVar8 = _vmul(auVar8,auVar8);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar10,auVar8);
      auVar8 = _qmfc2(auVar8._0_4_);
      bVar2 = auVar8._0_4_ <= fVar7 * fVar7;
    }
  }
  return bVar2;
}


// ==== FUN_00185fe8 @ 00185fe8 ====

undefined4 FUN_00185fe8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}


// ==== FUN_00185ff0 @ 00185ff0 ====

void FUN_00185ff0(undefined8 param_1,undefined4 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fStack_4c;
  
  iVar8 = (int)param_1;
  iVar7 = *(int *)(iVar8 + 0x70);
  if ((iVar7 != 0) &&
     (lVar4 = (**(code **)(*(int *)(iVar7 + 0x30) + 0xc))
                        (iVar7 + *(short *)(*(int *)(iVar7 + 0x30) + 8)), lVar4 == 0)) {
    FUN_00186308(param_1,0);
  }
  if (param_3 != 0) {
    if ((*(char *)(iVar8 + 0x74) == '\0') || (iVar7 = *(int *)(iVar8 + 0x6c), iVar7 == 0)) {
      if (*(int *)(iVar8 + 0x70) != 0) {
        FUN_00186308(param_1,0);
      }
    }
    else {
      if (iVar7 == *(int *)(iVar8 + 0x70)) {
        iVar7 = *(int *)(iVar8 + 0x70);
      }
      else {
        lVar4 = FUN_00177aa0(iVar7,*(undefined4 *)(iVar8 + 0xa4));
        if (lVar4 == 0) {
          iVar7 = *(int *)(iVar8 + 0x70);
        }
        else {
          if (*(int *)(iVar8 + 0x70) != 0) {
            FUN_00186308(param_1,0);
          }
          *(undefined4 *)(iVar8 + 0x70) = *(undefined4 *)(iVar8 + 0x6c);
          lVar4 = FUN_00177b68(*(undefined4 *)(iVar8 + 0x6c),*param_2);
          if (lVar4 == 0) {
            lVar4 = FUN_00184238(*(int *)(iVar8 + 0xa4) + 0x6f0,1);
            if (lVar4 != 0) {
              FUN_00181f48(0,0x3f800000,*(int *)(iVar8 + 0xa4) + 0xc80,*(undefined4 *)(iVar8 + 0x70)
                           ,0x15);
            }
            iVar7 = *(int *)(iVar8 + 0x70);
          }
          else {
            iVar7 = *(int *)(iVar8 + 0x70);
          }
        }
      }
      if (iVar7 != 0) {
        uVar3 = FUN_00177b00(iVar7,*param_2);
        *(undefined1 *)(iVar8 + 0xa0) = uVar3;
        uVar3 = FUN_00177ad8(*(undefined4 *)(iVar8 + 0x70),*param_2);
        *(undefined1 *)(iVar8 + 0xa1) = uVar3;
        puVar1 = *(undefined8 **)(iVar8 + 0x70);
        uVar2 = *puVar1;
        uVar5 = *(undefined4 *)(puVar1 + 1);
        uVar6 = *(undefined4 *)((int)puVar1 + 0xc);
        *(int *)(iVar8 + 0x90) = (int)uVar2;
        *(int *)(iVar8 + 0x94) = (int)((ulong)uVar2 >> 0x20);
        *(undefined4 *)(iVar8 + 0x98) = uVar5;
        *(undefined4 *)(iVar8 + 0x9c) = uVar6;
        uVar2 = *puVar1;
        uVar5 = *(undefined4 *)(puVar1 + 1);
        uVar6 = *(undefined4 *)((int)puVar1 + 0xc);
        *(int *)(iVar8 + 0x90) = (int)uVar2;
        *(int *)(iVar8 + 0x94) = (int)((ulong)uVar2 >> 0x20);
        *(undefined4 *)(iVar8 + 0x98) = uVar5;
        *(undefined4 *)(iVar8 + 0x9c) = uVar6;
      }
    }
  }
  lVar4 = FUN_00185f00(param_1);
  if (lVar4 == 0) {
    *(undefined1 *)(iVar8 + 0x75) = 0;
  }
  else {
    auVar11 = _qmtc2(0);
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x90));
    auVar9 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(iVar8 + 0xa4) + 0x7c) + 0xa0));
    auVar10 = _vsub(auVar10,auVar9);
    auVar9 = _sqc2(auVar10);
    _vmove(auVar10);
    auVar10 = _vaddbc(in_vf0,auVar11);
    fStack_4c = auVar9._4_4_;
    auVar9 = _vmove(auVar10);
    if (ABS(fStack_4c) < 2.0) {
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmul(auVar9,auVar9);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      auVar10 = _qmfc2(auVar10._0_4_);
      auVar11 = _vmove(auVar11);
      if (auVar10._0_4_ < 2.3283064e-10) {
        *(undefined1 *)(iVar8 + 0x75) = 0;
      }
      else {
        auVar9 = _vmul(auVar9,auVar9);
        _vaddabc(auVar9,auVar9);
        auVar9 = _vmaddbc(auVar11,auVar9);
        auVar9 = _qmfc2(auVar9._0_4_);
        *(bool *)(iVar8 + 0x75) = auVar9._0_4_ < 1.0;
      }
    }
    else {
      *(undefined1 *)(iVar8 + 0x75) = 0;
    }
  }
  return;
}


// ==== FUN_00186218 @ 00186218 ====

void FUN_00186218(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x7c);
  if ((iVar1 != 0) &&
     (lVar3 = (**(code **)(*(int *)(iVar1 + 0x30) + 0xc))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x30) + 8)), lVar3 == 0)) {
    FUN_00186308(param_1,1);
  }
  if (param_3 == 0) {
    puVar4 = *(undefined8 **)(iVar5 + 0x7c);
    goto LAB_001862c8;
  }
  if ((*(char *)(iVar5 + 0x80) == '\0') || (iVar1 = *(int *)(iVar5 + 0x78), iVar1 == 0)) {
    if (*(int *)(iVar5 + 0x7c) == 0) {
      *(undefined1 *)(iVar5 + 0x81) = 0;
      return;
    }
    FUN_00186308(param_1,1);
  }
  else {
    if (iVar1 == *(int *)(iVar5 + 0x7c)) {
      puVar4 = *(undefined8 **)(iVar5 + 0x7c);
      goto LAB_001862c8;
    }
    lVar3 = FUN_00177aa0(iVar1,*(undefined4 *)(iVar5 + 0xa4));
    if (lVar3 == 0) {
      puVar4 = *(undefined8 **)(iVar5 + 0x7c);
      goto LAB_001862c8;
    }
    if (*(int *)(iVar5 + 0x7c) != 0) {
      FUN_00186308(param_1,1);
    }
    *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(iVar5 + 0x78);
  }
  puVar4 = *(undefined8 **)(iVar5 + 0x7c);
LAB_001862c8:
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined1 *)(iVar5 + 0x81) = 0;
  }
  else {
    uVar2 = FUN_00182270(0x3e800000,*(int *)(iVar5 + 0xa4) + 0x810,*puVar4);
    *(undefined1 *)(iVar5 + 0x81) = uVar2;
  }
  return;
}


// ==== FUN_00186308 @ 00186308 ====

void FUN_00186308(int param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x70 + (int)param_2 * 0xc);
  iVar1 = *piVar2;
  *piVar2 = 0;
  if (*(int *)((uint)(param_2 != 1) * 0xc + param_1 + 0x70) != iVar1) {
    FUN_00177ad0(iVar1);
  }
  return;
}


// ==== FUN_00186358 @ 00186358 ====

void FUN_00186358(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0018a678(*(int *)((int)param_1 + 0xa4) + 0x150);
  FUN_00185ff0(param_1,uVar1,1);
  FUN_00185f00(param_1);
  return;
}


// ==== FUN_001863a0 @ 001863a0 ====

void FUN_001863a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0018a678(*(int *)((int)param_1 + 0xa4) + 0x150);
  FUN_00186218(param_1,uVar1,1);
  FUN_00185f18(param_1);
  return;
}


// ==== FUN_001863e8 @ 001863e8 ====

void FUN_001863e8(int param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  int *piVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  
  iVar2 = FUN_0015d2a8(DAT_0040f4e0,
                       **(undefined1 **)(*(int *)(*(int *)(param_1 + 0xa4) + 0x7c) + 0x2a4));
  *param_2 = iVar2;
  iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 0x7c);
  uVar1 = *(undefined8 *)(iVar2 + 0xa0);
  iVar5 = *(int *)(iVar2 + 0xa8);
  iVar2 = *(int *)(iVar2 + 0xac);
  param_2[2] = (int)param_3;
  param_2[0x18] = (int)uVar1;
  param_2[0x19] = (int)((ulong)uVar1 >> 0x20);
  param_2[0x1a] = iVar5;
  param_2[0x1b] = iVar2;
  iVar2 = FUN_00179000(param_3);
  param_2[3] = iVar2;
  pauVar3 = (undefined1 (*) [16])FUN_00178d30(param_3);
  auVar10 = _lqc2(*pauVar3);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x18));
  auVar9 = _vsub(auVar8,auVar10);
  auVar8 = _vmul(auVar9,auVar9);
  auVar12 = _vmove(auVar11);
  _vaddabc(auVar8,auVar8);
  auVar11 = _vmaddbc(auVar11,auVar8);
  auVar8 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_2 + 0x14) = auVar8;
  auVar11 = _qmfc2(auVar11._0_4_);
  auVar8 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar8;
  if (auVar11._0_4_ < 2.3283064e-10) {
    param_2[0x10] = 0;
  }
  else {
    auVar11 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
    auVar8 = _vmul(auVar11,auVar11);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar12,auVar8);
    auVar11 = _vmove(auVar11);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    auVar8 = _qmtc2(SQRT(auVar8._0_4_));
    uVar13 = _vwaitq();
    auVar9 = _vmulq(auVar11,uVar13);
    auVar11 = _qmfc2(auVar8._0_4_);
    auVar8 = _sqc2(auVar9);
    *(undefined1 (*) [16])(param_2 + 0x20) = auVar8;
    param_2[0x10] = auVar11._0_4_;
  }
  piVar4 = (int *)FUN_00181ee8(*(int *)(param_1 + 0xa4) + 0xec0);
  iVar2 = *piVar4;
  if (iVar2 == 1) {
    uVar7 = *(uint *)(*param_2 + 0x14);
    param_2[5] = uVar7;
code_r0x001865a8:
    param_2[4] = uVar7;
  }
  else {
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0xa4);
        goto LAB_001865b0;
      }
      fVar6 = (float)param_2[0x10];
      uVar7 = (uint)(10.0 < fVar6) * 0x41200000 | (int)fVar6 * (uint)(10.0 >= fVar6);
      param_2[5] = uVar7;
      goto code_r0x001865a8;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        iVar2 = *(int *)(param_1 + 0xa4);
        goto LAB_001865b0;
      }
      uVar7 = 0x43480000;
      goto code_r0x001865a8;
    }
    iVar2 = FUN_0018db20(*(int *)(param_1 + 0xa4) + 0xc94);
    param_2[4] = iVar2;
    iVar2 = FUN_0018db58(*(int *)(param_1 + 0xa4) + 0xc94);
    param_2[5] = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0xa4);
LAB_001865b0:
  iVar2 = FUN_00181ee8(iVar2 + 0xec0);
  param_2[6] = *(int *)(iVar2 + 4);
  return;
}


// ==== FUN_001865d8 @ 001865d8 ====

void FUN_001865d8(int param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 (*pauVar2) [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmove(auVar9);
  pauVar2 = (undefined1 (*) [16])param_3;
  *(undefined1 (**) [16])(param_2 + 4) = pauVar2;
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x50));
  auVar7 = _lqc2(*pauVar2);
  auVar8 = _vsub(auVar7,auVar8);
  auVar7 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_2 + 0xa0) = auVar7;
  auVar7 = _vmul(auVar8,auVar8);
  auVar10 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x60));
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  auVar8 = _qmfc2(auVar7._0_4_);
  auVar9 = _lqc2(*pauVar2);
  auVar7 = _qmtc2(param_4);
  auVar7 = _vsub(auVar9,auVar7);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_2 + 0x90) = auVar7;
  auVar7 = _lqc2(*pauVar2);
  auVar7 = _vsub(auVar7,auVar10);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_2 + 0x70) = auVar7;
  if (auVar8._0_4_ < 2.3283064e-10) {
    *(undefined4 *)(param_2 + 0x34) = 0;
  }
  else {
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
    auVar7 = _vmul(auVar8,auVar8);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar11,auVar7);
    auVar8 = _vmove(auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    auVar7 = _qmtc2(SQRT(auVar7._0_4_));
    uVar12 = _vwaitq();
    auVar9 = _vmulq(auVar8,uVar12);
    auVar8 = _qmfc2(auVar7._0_4_);
    auVar7 = _sqc2(auVar9);
    *(undefined1 (*) [16])(param_2 + 0xa0) = auVar7;
    *(int *)(param_2 + 0x34) = auVar8._0_4_;
  }
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x70));
  auVar7 = _vmul(auVar8,auVar8);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar11,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  if (auVar7._0_4_ < 2.3283064e-10) {
    *(undefined4 *)(param_2 + 0x38) = 0;
  }
  else {
    auVar7 = _vmul(auVar8,auVar8);
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x70));
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar11,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    auVar9 = _qmtc2(SQRT(auVar7._0_4_));
    uVar12 = _vwaitq();
    auVar7 = _vmulq(auVar8,uVar12);
    auVar8 = _qmfc2(auVar9._0_4_);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(param_2 + 0x70) = auVar7;
    *(int *)(param_2 + 0x38) = auVar8._0_4_;
  }
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x90));
  auVar7 = _vmul(auVar8,auVar8);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar11,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  if (auVar7._0_4_ < 2.3283064e-10) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  else {
    auVar7 = _vmul(auVar8,auVar8);
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x90));
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar11,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    auVar9 = _qmtc2(SQRT(auVar7._0_4_));
    uVar12 = _vwaitq();
    auVar7 = _vmulq(auVar8,uVar12);
    auVar8 = _qmfc2(auVar9._0_4_);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(param_2 + 0x90) = auVar7;
    *(int *)(param_2 + 0x3c) = auVar8._0_4_;
  }
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x80));
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
  auVar7 = _vmul(auVar8,auVar7);
  fVar5 = *(float *)(param_2 + 0x34);
  fVar3 = *(float *)(param_2 + 0x10);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  *(int *)(param_2 + 0x44) = auVar7._0_4_;
  if (fVar5 < fVar3) {
    fVar3 = fVar5 / (fVar3 + fVar3) - 1.0;
  }
  else {
    if (*(float *)(param_2 + 0x14) < fVar5) {
      *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x14) / fVar5;
      goto LAB_00186890;
    }
    fVar3 = 1.0;
  }
  *(float *)(param_2 + 0x24) = fVar3;
LAB_00186890:
  fVar3 = *(float *)(param_2 + 0x38) / 20.0;
  fVar5 = 1.0;
  fVar3 = (float)((int)fVar3 * (uint)(0.0 < fVar3));
  fVar4 = *(float *)(param_2 + 0x24);
  fVar4 = (float)((int)fVar4 * (uint)(-1.0 < fVar4) | (uint)(-1.0 >= fVar4) * -0x40800000);
  *(uint *)(param_2 + 0x24) = (int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000;
  *(float *)(param_2 + 0x28) =
       1.0 - (float)((int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
  fVar3 = (float)FUN_00180a30(*(int *)(param_1 + 0xa4) + 0xb30);
  fVar4 = (float)((int)fVar3 * (uint)(4.0 < fVar3) | (uint)(4.0 >= fVar3) * 0x40800000);
  fVar3 = ABS(*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x44));
  fVar6 = (float)((int)fVar3 * (uint)(-1.0 < fVar3) | (uint)(-1.0 >= fVar3) * -0x40800000);
  *(float *)(param_2 + 0x30) = fVar3;
  fVar3 = (fVar4 * fVar4) / (*(float *)(param_2 + 0x3c) * *(float *)(param_2 + 0x3c)) - fVar5;
  fVar3 = (float)((int)fVar3 * (uint)(-1.0 < fVar3) | (uint)(-1.0 >= fVar3) * -0x40800000);
  *(float *)(param_2 + 0x30) =
       fVar5 - (float)((int)fVar6 * (uint)(fVar6 < fVar5) | (int)fVar5 * (uint)(fVar6 >= fVar5));
  *(uint *)(param_2 + 0x2c) =
       (int)fVar3 * (uint)(fVar3 < fVar5) | (int)fVar5 * (uint)(fVar3 >= fVar5);
  uVar1 = FUN_00177750(DAT_0040f4d4 + 0x78,param_3);
  *(undefined1 *)(param_2 + 0xb0) = uVar1;
  *(undefined1 *)(param_2 + 0xb1) = param_5;
  uVar12 = FUN_0018d8e0(*(int *)(param_1 + 0xa4) + 0xd10,*(undefined4 *)(param_2 + 4));
  *(undefined4 *)(param_2 + 0x48) = uVar12;
  return;
}


// ==== FUN_00186988 @ 00186988 ====

void FUN_00186988(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float afStack_1b0 [4];
  int aiStack_1a0 [4];
  undefined1 auStack_190 [28];
  int iStack_174;
  int iStack_170;
  int iStack_d0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  
  pfVar5 = afStack_1b0;
  iVar9 = 1;
  FUN_001863e8(param_1,auStack_190,param_2);
  piVar11 = (int *)param_1;
  iStack_d0 = FUN_00181ee8(piVar11[0x29] + 0xec0);
  uVar3 = FUN_00180a00(piVar11[0x29] + 0xb30);
  uVar1 = DAT_003f5670;
  uStack_c0 = (undefined4)uVar3;
  uStack_bc = (undefined4)((ulong)uVar3 >> 0x20);
  piVar4 = aiStack_1a0;
  piStack_a8 = piVar4;
  do {
    *pfVar5 = (float)uVar1;
    iVar9 = iVar9 + -1;
    *piVar4 = 0;
    pfVar5 = pfVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (-1 < iVar9);
  iVar9 = 0;
  if (0 < *piVar11) {
    iVar12 = piVar11[1];
    piStack_ac = piVar11 + 0x15;
    if (iVar12 != 0) {
      piStack_b0 = piVar11 + 1;
      do {
        puVar2 = (undefined1 *)((int)piStack_ac + iVar9);
        iVar9 = iVar9 + 1;
        piVar6 = piVar11 + 0x1d;
        iVar10 = 1;
        FUN_001865d8(param_1,auStack_190,iVar12,uStack_c0,*puVar2);
        iVar8 = iStack_d0 + 0x38;
        iVar7 = iStack_d0 + 8;
        pfVar5 = afStack_1b0;
        piVar4 = piStack_a8;
        do {
          if (((char)*piVar6 != '\0') &&
             (iStack_174 = iVar7, iStack_170 = iVar8,
             fVar13 = (float)FUN_00186b68(param_1,auStack_190), *pfVar5 < fVar13)) {
            *pfVar5 = fVar13;
            *piVar4 = iVar12;
          }
          piVar4 = piVar4 + 1;
          pfVar5 = pfVar5 + 1;
          iVar8 = iVar8 + 0x20;
          iVar7 = iVar7 + 0x18;
          iVar10 = iVar10 + -1;
          piVar6 = piVar6 + 3;
        } while (-1 < iVar10);
      } while ((iVar9 < *piVar11) && (iVar12 = piStack_b0[iVar9], iVar12 != 0));
    }
  }
  piVar11 = piVar11 + 0x1b;
  iVar9 = 1;
  do {
    if (((char)piVar11[2] != '\0') && (*piStack_a8 != 0)) {
      *piVar11 = *piStack_a8;
    }
    piVar11 = piVar11 + 3;
    iVar9 = iVar9 + -1;
    piStack_a8 = piStack_a8 + 1;
  } while (-1 < iVar9);
  return;
}


// ==== FUN_00186b68 @ 00186b68 ====

float FUN_00186b68(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar7 = FUN_00177a98(*(undefined4 *)(param_2 + 4));
  if (lVar7 == 0) {
    iVar6 = *(int *)(param_2 + 4);
  }
  else {
    iVar6 = FUN_00177a98(*(undefined4 *)(param_2 + 4));
    if (iVar6 != *(int *)(param_1 + 0xa4)) {
      return -50.0;
    }
    iVar6 = *(int *)(param_2 + 4);
  }
  uVar2 = *(uint *)(param_2 + 0xc);
  fVar10 = 0.0;
  bVar4 = false;
  if ((*(uint *)(iVar6 + 0x20) & uVar2) == 0) {
    pfVar3 = *(float **)(param_2 + 0x1c);
    pfVar8 = *(float **)(param_2 + 0x20);
    fVar10 = (float)((int)pfVar3[1] * (uint)(pfVar3[1] <= 0.0));
    fVar11 = pfVar3[3];
    fVar10 = (float)((int)fVar10 * (uint)(fVar10 < fVar11) | (int)fVar11 * (uint)(fVar10 >= fVar11))
    ;
    fVar11 = *pfVar3;
    fVar11 = (float)((int)fVar10 * (uint)(fVar10 < fVar11) | (int)fVar11 * (uint)(fVar10 >= fVar11))
    ;
    fVar10 = pfVar3[2];
    fVar10 = (float)((int)fVar11 * (uint)(fVar11 < fVar10) | (int)fVar10 * (uint)(fVar11 >= fVar10))
             + 0.0;
  }
  else {
    bVar5 = false;
    if ((*(uint *)(iVar6 + 0x14) & uVar2) == 0) {
      if ((*(uint *)(iVar6 + 0x18) & uVar2) == 0) {
        bVar4 = true;
        fVar11 = (*(float **)(param_2 + 0x1c))[3];
      }
      else {
        bVar5 = true;
        fVar11 = **(float **)(param_2 + 0x1c);
      }
    }
    else {
      bVar4 = true;
      if ((*(uint *)(iVar6 + 0x18) & uVar2) == 0) {
        fVar11 = *(float *)(*(int *)(param_2 + 0x1c) + 4);
      }
      else {
        bVar5 = true;
        fVar11 = *(float *)(*(int *)(param_2 + 0x1c) + 8);
      }
    }
    if (*(char *)(param_2 + 0xb0) == '\0') {
      iVar6 = *(int *)(param_1 + 0xa4);
LAB_00186c64:
      fVar9 = (float)FUN_00185350(iVar6 + 0x6f0,0);
      if (fVar9 < *(float *)(param_2 + 0x40)) goto LAB_00186c84;
      iVar6 = *(int *)(param_2 + 4);
    }
    else {
      if (fVar11 <= 0.0) {
        iVar6 = *(int *)(param_1 + 0xa4);
        goto LAB_00186c64;
      }
LAB_00186c84:
      bVar4 = false;
      bVar5 = false;
      fVar11 = fVar11 * 0.1;
      iVar6 = *(int *)(param_2 + 4);
    }
    if (*(int *)(iVar6 + 0x24) == 2) {
      fVar11 = fVar11 + *(float *)(*(int *)(param_2 + 0x1c) + 0x10);
    }
    fVar9 = (float)FUN_0018db20(*(int *)(param_1 + 0xa4) + 0xc94);
    if (*(float *)(param_2 + 0x40) < fVar9) {
      fVar9 = (float)FUN_0018db20(*(int *)(param_1 + 0xa4) + 0xc94);
      fVar9 = *(float *)(param_2 + 0x40) / fVar9;
      fVar11 = fVar11 * fVar9 * fVar9;
      pfVar8 = *(float **)(param_2 + 0x20);
    }
    else {
      pfVar8 = *(float **)(param_2 + 0x20);
    }
    fVar10 = fVar10 + fVar11 * pfVar8[7];
    if ((bVar4) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 0x70))) {
      fVar10 = fVar10 + pfVar8[3];
    }
    if (!bVar5) {
      fVar11 = *(float *)(param_2 + 0x48);
      goto LAB_00186d78;
    }
    if (*(int *)(param_2 + 4) != *(int *)(param_1 + 0x7c)) {
      fVar11 = *(float *)(param_2 + 0x48);
      goto LAB_00186d78;
    }
    fVar10 = fVar10 + pfVar8[4];
  }
  fVar11 = *(float *)(param_2 + 0x48);
LAB_00186d78:
  if (0.0 < fVar11) {
    fVar10 = fVar10 + *(float *)(*(int *)(param_2 + 0x1c) + 0x14) * fVar11;
    cVar1 = *(char *)(param_2 + 0xb1);
  }
  else {
    cVar1 = *(char *)(param_2 + 0xb1);
  }
  if (cVar1 != '\0') {
    fVar10 = fVar10 + -50.0;
  }
  if (*(float *)(param_2 + 0x3c) < 3.0) {
    fVar10 = fVar10 + pfVar8[6];
  }
  return fVar10 + *(float *)(param_2 + 0x30) * *pfVar8 + *(float *)(param_2 + 0x28) * pfVar8[1] +
         *(float *)(param_2 + 0x24) * pfVar8[2] + *(float *)(param_2 + 0x2c) * pfVar8[5];
}


// ==== FUN_00186e40 @ 00186e40 ====

void FUN_00186e40(int param_1)

{
  FUN_001776a0(DAT_0040f4d4 + 0x78,*(undefined4 *)(param_1 + 0x7c));
  return;
}


// ==== FUN_00186e68 @ 00186e68 ====

void FUN_00186e68(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  undefined8 in_v0_udw;
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  undefined1 uStack_80;
  undefined8 uStack_70;
  
  puVar5 = (undefined4 *)param_1;
  uVar2 = FUN_0018d5d0(puVar5[0x29] + 0xd10);
  auVar4._8_8_ = in_v0_udw;
  auVar4._0_8_ = uVar2;
  auVar6 = _por(in_zero_qw,auVar4);
  auVar4 = _por(in_zero_qw,auVar6);
  lVar1 = FUN_0017b6f8(DAT_0040f4d4 + 0x1290,auVar4._0_8_);
  uVar2 = FUN_00179000();
  *puVar5 = 0;
  iVar3 = FUN_00181ee8(puVar5[0x29] + 0xec0);
  auVar4 = _por(in_zero_qw,auVar6);
  *(undefined1 *)(puVar5 + 0x1a) = *(undefined1 *)(iVar3 + 0x78);
  FUN_00187918(param_1,uVar2,auVar4._0_8_);
  if (lVar1 != 0) {
    auVar4 = _por(in_zero_qw,auVar6);
    FUN_001871e8(param_1,auVar4._0_8_);
    auVar4 = _por(in_zero_qw,auVar6);
    FUN_00187498(param_1,lVar1,uVar2,auVar4._0_8_,uStack_70,uStack_80);
  }
  return;
}


// ==== FUN_00186f40 @ 00186f40 ====

bool FUN_00186f40(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3 = *(undefined1 (*) [16])param_2;
  lVar1 = FUN_0018ddd8(*(int *)(param_1 + 0xa4) + 0xc94);
  if (lVar1 == 0) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      auVar5 = _lqc2(auVar3);
      auVar4 = _vaddbc(in_vf0,in_vf0);
      auVar3 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
      auVar3 = _vsub(auVar5,auVar3);
      auVar3 = _vmul(auVar3,auVar3);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar4,auVar3);
      auVar3 = _qmfc2(auVar3._0_4_);
      if (auVar3._0_4_ < 25.0) {
        return true;
      }
      iVar2 = *(int *)(param_1 + 0xa4);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xa4);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa4);
  }
  lVar1 = FUN_0018d2f8(iVar2 + 0xd10,param_2);
  return lVar1 == 0;
}


// ==== FUN_00186ff0 @ 00186ff0 ====

void FUN_00186ff0(int *param_1)

{
  if (*param_1 < 0x14) {
    FUN_00187018();
  }
  return;
}


// ==== FUN_00187018 @ 00187018 ====

void FUN_00187018(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5
                 )

{
  int iVar1;
  long lVar2;
  
  if (((*(int *)((int)param_2 + 0x24) == 0) &&
      (iVar1 = FUN_001809f0(param_1[0x29] + 0xb30), *(int *)((int)param_2 + 0x40) == iVar1)) &&
     (lVar2 = FUN_00180ed8(param_1[0x29] + 0xb30), lVar2 != 0)) {
    param_2 = lVar2;
  }
  FUN_00177238(DAT_0040f4d4 + 0x78,param_2,param_3);
  *(undefined1 *)((int)param_1 + *param_1 + 0x54) = param_5;
  iVar1 = *param_1;
  param_1[iVar1 + 1] = (int)param_2;
  *param_1 = iVar1 + 1;
  return;
}


// ==== FUN_001870c8 @ 001870c8 ====

byte FUN_001870c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  
  bVar4 = 0;
  bVar2 = false;
  for (iVar1 = *(int *)((int)param_2 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    lVar3 = FUN_00187b18(param_3,iVar1,param_4);
    bVar4 = bVar4 | lVar3 != 0;
    lVar3 = FUN_00187198(param_1,param_2,iVar1);
    bVar2 = (bool)(bVar2 | lVar3 != 0);
  }
  if (!bVar2) {
    lVar3 = FUN_00187b18(param_3,param_2,param_4);
    bVar4 = bVar4 | lVar3 != 0;
  }
  return bVar4;
}


// ==== FUN_00187198 @ 00187198 ====

bool FUN_00187198(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = _lqc2(*param_2);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _lqc2(*param_3);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar3,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_4_ <= 0.09;
}


// ==== FUN_001871e8 @ 001871e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001871e8(int param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16],
                 undefined1 *param_5)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pauVar1 = (undefined1 (*) [16])FUN_00178d30(param_3);
  auVar7 = *pauVar1;
  auVar6 = *pauVar1;
  auVar4 = *pauVar1;
  iVar2 = FUN_00181ee8(*(int *)(param_1 + 0xa4) + 0xec0);
  fVar5 = *(float *)(iVar2 + 0x80);
  iVar2 = FUN_00181ee8(*(int *)(param_1 + 0xa4) + 0xec0);
  switch(*(undefined4 *)(iVar2 + 0x7c)) {
  default:
    *param_5 = 0;
    auVar4 = _pextlw(0,0);
    auVar4 = _pextlw(0,auVar4._0_8_);
    auVar4 = _qmtc2(auVar4._0_4_);
    break;
  case 1:
    auVar4 = _lqc2(auVar4);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar8._8_4_ = in_a1_udw;
    auVar8._0_8_ = param_2;
    auVar8._12_4_ = in_register_0000005c;
    auVar6 = _lqc2(auVar8);
    _vsub(auVar4,auVar6);
    auVar4 = _qmtc2(0);
    auVar6 = _vaddbc(in_vf0,auVar4);
    auVar4 = _vmul(auVar6,auVar6);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    auVar4 = _qmtc2(SQRT(auVar4._0_4_));
    uVar3 = _vwaitq();
    auVar6 = _vmulq(auVar6,uVar3);
    auVar4 = _qmfc2(auVar4._0_4_);
    if (auVar4._0_4_ < fVar5) {
      auVar4 = _lqc2(_DAT_004432c0);
      _vopmula(auVar6,auVar4);
      auVar6 = _vopmsub(auVar4,auVar6);
      auVar4 = _qmtc2(fVar5 * 0.5);
      *param_5 = 1;
      auVar4 = _vmulbc(auVar6,auVar4);
      auVar4 = _sqc2(auVar4);
      *param_4 = auVar4;
      return;
    }
    auVar4 = _qmtc2(fVar5);
    *param_5 = 0;
    auVar4 = _vmulbc(auVar6,auVar4);
    auVar4 = _sqc2(auVar4);
    *param_4 = auVar4;
    return;
  case 2:
    auVar4 = _lqc2(auVar7);
    auVar6._8_4_ = in_a1_udw;
    auVar6._0_8_ = param_2;
    auVar6._12_4_ = in_register_0000005c;
    auVar6 = _lqc2(auVar6);
    _vsub(auVar4,auVar6);
    auVar4 = _qmtc2(0);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _vaddbc(in_vf0,auVar4);
    auVar4 = _vmul(auVar7,auVar7);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar4);
    uVar3 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar3);
    auVar6 = _qmtc2(fVar5 * 0.5);
    auVar4 = _lqc2(_DAT_004432c0);
    _vopmula(auVar7,auVar4);
    auVar4 = _vopmsub(auVar4,auVar7);
    auVar4 = _vmulbc(auVar4,auVar6);
    *param_5 = 1;
    break;
  case 3:
    auVar7._8_4_ = in_a1_udw;
    auVar7._0_8_ = param_2;
    auVar7._12_4_ = in_register_0000005c;
    auVar4 = _lqc2(auVar7);
    auVar6 = _lqc2(auVar6);
    _vsub(auVar4,auVar6);
    *param_5 = 0;
    auVar4 = _qmtc2(0);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vaddbc(in_vf0,auVar4);
    auVar7 = _qmtc2(fVar5);
    auVar4 = _vmul(auVar8,auVar8);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar4);
    uVar3 = _vwaitq();
    auVar4 = _vmulq(auVar8,uVar3);
    auVar4 = _vmulbc(auVar4,auVar7);
    auVar4 = _sqc2(auVar4);
    *param_4 = auVar4;
    return;
  case 4:
    if (*(int *)(*(int *)(param_1 + 0xa4) + 0x1ee0) != 0) {
      uVar3 = FUN_00183380();
      auVar6 = _qmtc2(uVar3);
      auVar4._8_4_ = in_a1_udw;
      auVar4._0_8_ = param_2;
      auVar4._12_4_ = in_register_0000005c;
      auVar4 = _lqc2(auVar4);
      _vsub(auVar6,auVar4);
      *param_5 = 0;
      auVar4 = _qmtc2(0);
      auVar4 = _vaddbc(in_vf0,auVar4);
      auVar4 = _sqc2(auVar4);
      *param_4 = auVar4;
      return;
    }
    *param_5 = 0;
    auVar4 = _pextlw(0,0);
    auVar4 = _pextlw(0,auVar4._0_8_);
    auVar4 = _qmtc2(auVar4._0_4_);
  }
  auVar4 = _sqc2(auVar4);
  *param_4 = auVar4;
  return;
}


// ==== FUN_00187498 @ 00187498 ====

void FUN_00187498(int *param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  bool bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined4 in_t0_udw;
  undefined4 in_register_0000008c;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_5b0 [1204];
  undefined *puStack_fc;
  byte abStack_d0 [4];
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  puStack_fc = &DAT_003dff98;
  abStack_d0[0] = 0;
  uStack_c0 = (undefined4)param_4;
  uStack_bc = (undefined4)((ulong)param_4 >> 0x20);
  uStack_b0 = (undefined4)param_5;
  uStack_ac = (undefined4)((ulong)param_5 >> 0x20);
  iVar3 = 0;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  piStack_cc = param_1;
  uStack_c8 = param_3;
  uStack_b8 = in_a3_udw;
  uStack_b4 = in_register_0000007c;
  uStack_a8 = in_t0_udw;
  uStack_a4 = in_register_0000008c;
  uVar6 = FUN_00179650(DAT_0040f4d4,*param_2);
  *(undefined4 *)((int)uVar6 + 0x44) = *(undefined4 *)(DAT_0040f4d4 + 0x9f0);
  if (param_6 == 0) {
    auVar20._4_4_ = uStack_bc;
    auVar20._0_4_ = uStack_c0;
    auVar20._8_4_ = uStack_b8;
    auVar20._12_4_ = uStack_b4;
    auVar18 = _lqc2(auVar20);
    auVar2._4_4_ = uStack_ac;
    auVar2._0_4_ = uStack_b0;
    auVar2._8_4_ = uStack_a8;
    auVar2._12_4_ = uStack_a4;
    auVar19 = _lqc2(auVar2);
    auVar18 = _vadd(auVar18,auVar19);
    _qmfc2(auVar18._0_4_);
    FUN_00187d30(auStack_5b0);
  }
  else {
    auVar12._4_4_ = uStack_ac;
    auVar12._0_4_ = uStack_b0;
    auVar12._8_4_ = uStack_a8;
    auVar12._12_4_ = uStack_a4;
    auVar20 = _lqc2(auVar12);
    auVar18._4_4_ = uStack_bc;
    auVar18._0_4_ = uStack_c0;
    auVar18._8_4_ = uStack_b8;
    auVar18._12_4_ = uStack_b4;
    auVar18 = _lqc2(auVar18);
    auVar18 = _vadd(auVar18,auVar20);
    auVar12 = _qmfc2(auVar18._0_4_);
    auVar19._4_4_ = uStack_bc;
    auVar19._0_4_ = uStack_c0;
    auVar19._8_4_ = uStack_b8;
    auVar19._12_4_ = uStack_b4;
    auVar18 = _lqc2(auVar19);
    auVar18 = _vsub(auVar18,auVar20);
    auVar18 = _qmfc2(auVar18._0_4_);
    FUN_00187d30(auStack_5b0,auVar18._0_8_,auVar12._0_8_);
  }
  abStack_d0[0] = FUN_00186f40(piStack_cc,uVar6);
  FUN_001870c8(piStack_cc,uVar6,auStack_5b0,abStack_d0[0]);
  iVar3 = *piStack_cc;
  do {
    if (0x13 < iVar3) {
      return;
    }
    lVar7 = FUN_00187c00(auStack_5b0,abStack_d0);
    piVar17 = (int *)0x0;
    if (lVar7 == 0) {
      return;
    }
    FUN_00187018(piStack_cc,lVar7,uStack_c8,CONCAT44(uStack_bc,uStack_c0),abStack_d0[0]);
    iVar3 = (int)lVar7;
    if (*(int *)(iVar3 + 0x24) == 0) {
      piVar17 = *(int **)(iVar3 + 0x40);
    }
    else {
      lVar8 = FUN_00177cd8(lVar7);
      if (((lVar8 != 0) && (iVar3 = *(int *)(iVar3 + 0x40), *(int *)(iVar3 + 0x24) == 0)) &&
         (lVar7 = FUN_00187198(piStack_cc,iVar3,lVar7), lVar7 != 0)) {
        piVar17 = *(int **)(iVar3 + 0x40);
      }
    }
    uVar16 = 0;
    if (piVar17 != (int *)0x0) {
      while( true ) {
        iVar3 = piVar17[4];
        uVar10 = 0;
        if (*(int *)(iVar3 + 0x30) != 0) {
          lVar7 = FUN_00391710(iVar3);
          if (lVar7 == 0) {
            uVar10 = 0;
            iVar14 = 0;
            uVar15 = 0;
            while (uVar4 = FUN_00391620(iVar3), uVar15 < uVar4) {
              lVar7 = FUN_00383d40(*(int *)(iVar3 + 0x34) + iVar14 * 8);
              if (lVar7 != -1) {
                uVar15 = uVar15 + 1;
                if (*(int *)(iVar14 * 4 + *(int *)(iVar3 + 0x38)) == *piVar17) {
                  uVar10 = uVar10 + 1;
                }
              }
              iVar14 = iVar14 + 1;
            }
          }
          else {
            iVar14 = *(int *)(*piVar17 * 4 + *(int *)(iVar3 + 0x24));
            uVar10 = 0;
            if (iVar14 != -1) {
              do {
                iVar14 = *(int *)(iVar14 * 4 + *(int *)(iVar3 + 0x44));
                uVar10 = uVar10 + 1;
              } while (iVar14 != -1);
            }
          }
        }
        if (uVar10 <= uVar16) break;
        iVar3 = piVar17[4];
        if (*(int *)(iVar3 + 0x24) == 0) {
          uVar15 = 0;
          iVar14 = 0;
          uVar10 = 0;
          while (uVar4 = FUN_00391620(iVar3), uVar10 < uVar4) {
            lVar7 = FUN_00383d40(*(int *)(iVar3 + 0x34) + iVar14 * 8);
            if (((lVar7 != -1) &&
                (uVar10 = uVar10 + 1, *(int *)(iVar14 * 4 + *(int *)(iVar3 + 0x38)) == *piVar17)) &&
               (bVar1 = uVar15 == uVar16, uVar15 = uVar15 + 1, bVar1)) {
              piVar13 = (int *)(*(int *)(iVar3 + 0x34) + iVar14 * 8);
              goto LAB_001877ec;
            }
            iVar14 = iVar14 + 1;
          }
          piVar13 = (int *)0x0;
        }
        else {
          uVar10 = 0;
          for (iVar14 = *(int *)(*piVar17 * 4 + *(int *)(iVar3 + 0x24)); iVar14 != -1;
              iVar14 = *(int *)(iVar14 * 4 + *(int *)(iVar3 + 0x44))) {
            if (uVar10 == uVar16) {
              piVar13 = (int *)(*(int *)(iVar3 + 0x34) + iVar14 * 8);
              goto LAB_001877ec;
            }
            uVar10 = uVar10 + 1;
          }
          piVar13 = (int *)0x0;
        }
LAB_001877ec:
        uVar16 = uVar16 + 1;
        iVar3 = piVar13[1];
        if (piVar13 == (int *)(iVar3 + 0x5c)) {
          puVar5 = (undefined4 *)(iVar3 + 0x78);
        }
        else {
          puVar5 = (undefined4 *)
                   (*(int *)(iVar3 + 0x18) + *(int *)(*piVar13 * 4 + *(int *)(iVar3 + 0x3c)) * 0x14)
          ;
        }
        uVar6 = FUN_00179650(DAT_0040f4d4,*puVar5);
        if (*(int *)((int)uVar6 + 0x44) != *(int *)(DAT_0040f4d4 + 0x9f0)) {
          *(int *)((int)uVar6 + 0x44) = *(int *)(DAT_0040f4d4 + 0x9f0);
          uVar9 = FUN_00186f40(piStack_cc,uVar6);
          iVar3 = piVar13[1];
          if (piVar13 == (int *)(iVar3 + 0x5c)) {
            piVar11 = *(int **)(iVar3 + 0x94);
          }
          else if (*(int *)(iVar3 + 0x50) == 0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = *(int **)(*piVar13 * 4 + *(int *)(iVar3 + 0x50));
          }
          if ((piVar11 == (int *)0x0) ||
             (lVar7 = (**(code **)(*piVar11 + 0xac))
                                ((int)piVar11 + (int)*(short *)(*piVar11 + 0xa8),piVar13),
             lVar7 != 0)) {
            FUN_001870c8(piStack_cc,uVar6,auStack_5b0,uVar9);
          }
        }
      }
    }
    iVar3 = *piStack_cc;
  } while( true );
}


// ==== FUN_00187918 @ 00187918 ====

void FUN_00187918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined8 in_a2_udw;
  undefined1 auVar2 [16];
  
  iVar1 = *(int *)((int)param_1 + 0xa4);
  auVar2._8_8_ = in_a2_udw;
  auVar2._0_8_ = param_3;
  auVar2 = _por(in_zero_qw,auVar2);
  if (*(int *)(iVar1 + 0xd30) == 5) {
    FUN_0018d8a8(iVar1 + 0xd10,param_1,param_2,auVar2._0_8_);
  }
  return;
}


// ==== FUN_00187960 @ 00187960 ====

undefined8 FUN_00187960(undefined8 param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  
  pauVar1 = (undefined1 (*) [16])(*(int *)(*(int *)((int)param_1 + 0xa4) + 0x7c) + 0xa0);
  auVar4 = *pauVar1;
  auVar6 = *pauVar1;
  if (param_2 == 0) {
    pauVar1 = (undefined1 (*) [16])FUN_00185f10(param_1);
    auVar3 = _lqc2(*pauVar1);
  }
  else {
    pauVar1 = (undefined1 (*) [16])FUN_00185fe8();
    auVar3 = _lqc2(*pauVar1);
  }
  auVar4 = _lqc2(auVar4);
  auVar7 = _vsub(auVar3,auVar4);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vmul(auVar7,auVar7);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  auVar3 = _qmfc2(auVar4._0_4_);
  auVar4 = _sqc2(auVar5);
  if (auVar3._0_4_ < 2.3283064e-10) {
    uVar2 = 2;
  }
  else {
    auVar3 = _vmul(auVar7,auVar7);
    auVar5 = _lqc2(auVar4);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar5,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar8 = _vwaitq();
    auVar3 = _vmulq(auVar7,uVar8);
    auVar3 = _sqc2(auVar3);
    pauVar1 = (undefined1 (*) [16])FUN_001893a0(*(int *)((int)param_1 + 0xa4) + 0x150);
    auVar5 = _lqc2(*pauVar1);
    auVar6 = _lqc2(auVar6);
    auVar7 = _vsub(auVar5,auVar6);
    auVar6 = _vmul(auVar7,auVar7);
    auVar5 = _lqc2(auVar4);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar5,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    uVar2 = 2;
    if (2.3283064e-10 <= auVar6._0_4_) {
      auVar5 = _vmul(auVar7,auVar7);
      auVar6 = _lqc2(auVar4);
      _vaddabc(auVar5,auVar5);
      auVar6 = _vmaddbc(auVar6,auVar5);
      auVar4 = _vaddbc(in_vf0,in_vf0);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar6);
      uVar8 = _vwaitq();
      auVar5 = _vmulq(auVar7,uVar8);
      auVar6 = _lqc2(auVar3);
      auVar6 = _vmul(auVar6,auVar5);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar4,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      uVar2 = 0;
      if ((auVar6._0_4_ <= 0.7) && (uVar2 = 1, -0.7 <= auVar6._0_4_)) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}


// ==== FUN_00187b10 @ 00187b10 ====

void FUN_00187b10(int param_1)

{
  *(undefined1 *)(param_1 + 0x4b0) = 0;
  return;
}


// ==== FUN_00187b18 @ 00187b18 ====

undefined4 FUN_00187b18(int *param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (*(byte *)(param_1 + 300) != 0) {
    do {
      iVar2 = iVar2 + 1;
      if (*piVar1 == param_2) {
        return 0;
      }
      piVar1 = piVar1 + 3;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 300));
  }
  param_1[(uint)*(byte *)(param_1 + 300) * 3] = param_2;
  *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 300) * 3 + 2) = 0;
  iVar2 = (**(code **)(param_1[0x12d] + 0xc))
                    ((int)param_1 + (int)*(short *)(param_1[0x12d] + 8),param_2);
  param_1[(uint)*(byte *)(param_1 + 300) * 3 + 1] = iVar2;
  *(undefined1 *)((int)param_1 + (uint)*(byte *)(param_1 + 300) * 0xc + 9) = param_3;
  *(char *)(param_1 + 300) = (char)param_1[300] + '\x01';
  return 1;
}


// ==== FUN_00187c00 @ 00187c00 ====

undefined4 FUN_00187c00(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  cVar1 = FUN_00187c68();
  if (cVar1 < 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined4 *)(cVar1 * 0xc + param_1);
    *(undefined1 *)(puVar3 + 2) = 1;
    *param_2 = *(undefined1 *)((int)puVar3 + 9);
    uVar2 = *puVar3;
  }
  return uVar2;
}


// ==== FUN_00187c68 @ 00187c68 ====

int FUN_00187c68(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = -1;
  fVar6 = -1.0;
  iVar4 = 0;
  fVar7 = fVar6;
  iVar2 = param_1;
  if (*(byte *)(param_1 + 0x4b0) != 0) {
    do {
      fVar6 = fVar7;
      iVar1 = iVar5;
      if (((*(char *)(iVar2 + 8) == '\0') && (*(char *)(iVar2 + 9) == '\0')) &&
         (fVar6 = *(float *)(iVar2 + 4), iVar1 = iVar4, *(float *)(iVar2 + 4) <= fVar7)) {
        fVar6 = fVar7;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
      iVar4 = iVar4 + 1;
      fVar7 = fVar6;
      iVar2 = iVar2 + 0xc;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x4b0));
  }
  if (iVar5 != -1) {
    return iVar5;
  }
  iVar4 = 0;
  iVar2 = -1;
  if (*(byte *)(param_1 + 0x4b0) != 0) {
    pfVar3 = (float *)(param_1 + 4);
    do {
      fVar7 = fVar6;
      iVar5 = iVar2;
      if ((*(char *)(pfVar3 + 1) == '\0') && (fVar7 = *pfVar3, iVar5 = iVar4, *pfVar3 <= fVar6)) {
        fVar7 = fVar6;
        iVar5 = iVar2;
      }
      iVar2 = iVar5;
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 3;
      fVar6 = fVar7;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x4b0));
  }
  return iVar2;
}


// ==== FUN_00187d30 @ 00187d30 ====

void FUN_00187d30(int param_1)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined1 in_a2_qw [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _por(in_zero_qw,in_a2_qw);
  auVar2 = _por(in_zero_qw,in_a1_qw);
  FUN_00187b10();
  *(int *)(param_1 + 0x4d0) = auVar1._0_4_;
  *(int *)(param_1 + 0x4d4) = auVar1._4_4_;
  *(int *)(param_1 + 0x4d8) = auVar1._8_4_;
  *(int *)(param_1 + 0x4dc) = auVar1._12_4_;
  *(int *)(param_1 + 0x4c0) = auVar2._0_4_;
  *(int *)(param_1 + 0x4c4) = auVar2._4_4_;
  *(int *)(param_1 + 0x4c8) = auVar2._8_4_;
  *(int *)(param_1 + 0x4cc) = auVar2._12_4_;
  return;
}


// ==== FUN_00187e08 @ 00187e08 ====

void FUN_00187e08(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x390);
  iVar4 = 5;
  *(int *)(param_1 + 0x3ac) = (int)param_2;
  puVar2 = (undefined4 *)(param_1 + 0x3a4);
  do {
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  *(int *)(param_1 + 0x390) = param_1 + 0x30;
  *(int *)(param_1 + 0x394) = param_1 + 0x100;
  iVar4 = 5;
  *(int *)(param_1 + 0x398) = param_1 + 0x170;
  *(int *)(param_1 + 0x39c) = param_1 + 0x200;
  *(int *)(param_1 + 0x3a0) = param_1 + 0x290;
  *(int *)(param_1 + 0x3a4) = param_1 + 0x310;
  uVar1 = *puVar3;
  while( true ) {
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
    FUN_001a24b0(uVar1,param_2);
    if (iVar4 < 0) break;
    uVar1 = *puVar3;
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  return;
}


// ==== FUN_00187ec8 @ 00187ec8 ====

undefined4 FUN_00187ec8(undefined1 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x390);
  iVar3 = 5;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x40a00000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x14] = 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[1] = 1;
  FUN_00173690(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3b0) = 0x40a00000;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar1 = *piVar2;
  while( true ) {
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
    (**(code **)(*(int *)(iVar1 + 0x60) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x60) + 8));
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  FUN_00173690(param_1 + 0x3b4);
  return 1;
}


// ==== FUN_00187f90 @ 00187f90 ====

void FUN_00187f90(undefined8 param_1)

{
  FUN_00188238();
  FUN_00188780(param_1);
  FUN_001884e0(param_1);
  FUN_001886e0(param_1);
  FUN_00188358(param_1);
  return;
}


// ==== FUN_00187fe0 @ 00187fe0 ====

void FUN_00187fe0(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [48];
  undefined8 uStack_40;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x694) + 0x35) = 1;
  param_1[1] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *param_1 = 1;
  FUN_00188150();
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x10);
  (**(code **)(iVar2 + 0xa4))
            (auStack_70,*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + (int)*(short *)(iVar2 + 0xa0));
  cVar1 = **(char **)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4);
  if (cVar1 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(cVar1 * 4 + DAT_00414d54);
  }
  FUN_0016e008(DAT_0040f4d4,uStack_40,*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c),uVar3);
  FUN_00181f48(0,0x3f800000,*(int *)(param_1 + 0x3ac) + 0xc80,0,10);
  uVar3 = FUN_001580e0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  return;
}


// ==== FUN_001880d8 @ 001880d8 ====

void FUN_001880d8(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)param_1;
  if (*pcVar2 != '\0') {
    *(undefined1 *)(*(int *)(pcVar2 + 0x3ac) + 0x6cd) = 0;
    *pcVar2 = '\0';
    pcVar2[0x24] = '\0';
    if (*(int *)(pcVar2 + 0x3a8) != 0) {
      FUN_001a2cf0();
      iVar1 = *(int *)(*(int *)(pcVar2 + 0x3a8) + 0x60);
      (**(code **)(iVar1 + 0x2c))(*(int *)(pcVar2 + 0x3a8) + (int)*(short *)(iVar1 + 0x28));
      pcVar2[0x3a8] = '\0';
      pcVar2[0x3a9] = '\0';
      pcVar2[0x3aa] = '\0';
      pcVar2[0x3ab] = '\0';
    }
    FUN_00188b00(param_1);
  }
  return;
}


// ==== FUN_00188148 @ 00188148 ====

void FUN_00188148(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  return;
}


// ==== FUN_00188150 @ 00188150 ====

void FUN_00188150(int param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  
  if (param_2 == 2) {
    iVar3 = 1;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4) + 0xe4) = 0;
  }
  else {
    lVar1 = FUN_0018ddd8(*(int *)(param_1 + 0x3ac) + 0xc94);
    if (lVar1 != 0) {
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4) + 0xe4) =
           0x3f000000;
    }
    uVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*(undefined4 *)(param_1 + 8));
    lVar1 = FUN_00178f18(uVar2);
    lVar4 = 1;
    if (lVar1 != 0) {
      lVar4 = FUN_0018df48(*(int *)(param_1 + 0x3ac) + 0xc94);
    }
    iVar3 = (int)lVar4;
    if (lVar4 == 0) {
      uVar5 = FUN_0018e020(*(int *)(param_1 + 0x3ac) + 0xc94);
      *(undefined4 *)(param_1 + 0xec) = uVar5;
      iVar3 = 0;
    }
  }
  iVar3 = *(int *)(param_1 + iVar3 * 4 + 0x390);
  *(int *)(param_1 + 0x3a8) = iVar3;
  (**(code **)(*(int *)(iVar3 + 0x60) + 0x24))(iVar3 + *(short *)(*(int *)(iVar3 + 0x60) + 0x20));
  return;
}


// ==== FUN_00188238 @ 00188238 ====

void FUN_00188238(int param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x28) - *(float *)(DAT_0040f4d0 + 0x1c);
  *(float *)(param_1 + 0x28) = fVar2;
  if (*(char *)(*(int *)(param_1 + 0x3ac) + 0x31) == '\0') {
    fVar2 = *(float *)(param_1 + 0x28);
  }
  else {
    fVar3 = *(float *)(*(int *)(param_1 + 0x3ac) + 0x40);
    if (0.0 < fVar3) {
      if (fVar3 < *(float *)(param_1 + 0x2c) * 0.0625) {
        *(float *)(param_1 + 0x28) = fVar2 + 0.2;
        fVar2 = *(float *)(param_1 + 0x28);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x28);
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x28);
    }
  }
  fVar2 = (float)((int)fVar2 * (uint)(0.0 < fVar2));
  fVar2 = (float)((int)fVar2 * (uint)(fVar2 < 1.0) | (uint)(fVar2 >= 1.0) * 0x3f800000);
  *(float *)(param_1 + 0x28) = fVar2;
  if (1.0 <= fVar2) {
    if (((*(char *)(param_1 + 0x24) == '\0') &&
        (lVar1 = FUN_00185f18(*(int *)(param_1 + 0x3ac) + 0x90), lVar1 != 0)) &&
       (*(char *)(*(int *)(param_1 + 0x3ac) + 0x111) != '\0')) {
      FUN_00186e40();
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return;
}


// ==== FUN_00188350 @ 00188350 ====

undefined1 FUN_00188350(int param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}


// ==== FUN_00188358 @ 00188358 ====

void FUN_00188358(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 1) != '\0') {
    return;
  }
  uVar4 = FUN_0013d400(*(undefined4 *)(param_1 + 0x3ac));
  iVar2 = FUN_0015d2a8(DAT_0040f4e0,
                       **(undefined1 **)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4));
  lVar5 = FUN_001580c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4));
  if (*(int *)(param_1 + 0xc) - 1U < 3) {
    if ((lVar5 == 0) && (*(float *)(param_1 + 4) <= 2.0)) {
      iVar2 = *(int *)(param_1 + 0x3ac);
      goto LAB_0018847c;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    if (lVar5 == 0) {
      iVar2 = *(int *)(param_1 + 0x3ac);
      goto LAB_0018847c;
    }
    if ((*(char *)(iVar2 + 0x10) == '\0') ||
       (lVar5 = FUN_00172640(uVar4,*(undefined4 *)(param_1 + 0x3ac)), lVar5 != 0)) {
      iVar2 = *(int *)(param_1 + 0x3a8);
      *(undefined1 *)(param_1 + 1) = 1;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x60) + 0x34))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x60) + 0x30));
        iVar2 = *(int *)(param_1 + 0x3ac);
        goto LAB_0018847c;
      }
    }
    else {
      FUN_00158ea8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4),2);
      uVar3 = FUN_001580e0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4));
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
  }
  iVar2 = *(int *)(param_1 + 0x3ac);
LAB_0018847c:
  lVar5 = FUN_0018d768(iVar2 + 0xd10,*(undefined4 *)(param_1 + 8));
  if (lVar5 == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    cVar1 = *(char *)(param_1 + 1);
  }
  else {
    cVar1 = *(char *)(param_1 + 1);
  }
  if (cVar1 != '\0') {
    FUN_00181ad0(*(int *)(param_1 + 0x3ac) + 0xec0,8);
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4) + 0xe4) =
         0x3f800000;
  }
  return;
}


// ==== FUN_001884e0 @ 001884e0 ====

void FUN_001884e0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x3a8) != 0) {
    bVar4 = false;
    if ((*(char *)(iVar7 + 2) == '\0') && (*(char *)(iVar7 + 3) == '\0')) {
      lVar6 = FUN_0018d768(*(int *)(iVar7 + 0x3ac) + 0xd10,*(undefined4 *)(iVar7 + 8));
      bVar4 = lVar6 != 0;
    }
    bVar5 = false;
    if (bVar4) {
      FUN_001a2500(*(undefined4 *)(iVar7 + 0x3a8));
      iVar1 = *(int *)(iVar7 + 0x3a8);
      if (*(char *)(iVar1 + 0x36) != '\0') {
        iVar2 = *(int *)(*(int *)(iVar7 + 0x3ac) + 0x7c);
        iVar3 = *(int *)(iVar2 + 0x10);
        (**(code **)(iVar3 + 0xa4))(auStack_a0,iVar2 + *(short *)(iVar3 + 0xa0));
        auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x40));
        auVar10 = _vaddbc(in_vf0,in_vf0);
        auVar8 = _lqc2(auStack_70);
        auVar9 = _vsub(auVar9,auVar8);
        auVar8 = _vmul(auVar9,auVar9);
        auStack_50 = _sqc2(auVar10);
        _vaddabc(auVar8,auVar8);
        auVar8 = _vmaddbc(auVar10,auVar8);
        auStack_60 = _sqc2(auVar9);
        auVar8 = _qmfc2(auVar8._0_4_);
        if (2.3283064e-10 <= auVar8._0_4_) {
          iVar1 = *(int *)(*(int *)(iVar7 + 0x3ac) + 0x7c);
          iVar2 = *(int *)(iVar1 + 0x10);
          (**(code **)(iVar2 + 0xa4))(auStack_a0,iVar1 + *(short *)(iVar2 + 0xa0));
          auVar9 = _lqc2(auStack_60);
          auVar10 = _vaddbc(in_vf0,in_vf0);
          auVar8 = _lqc2(auStack_80);
          auVar8 = _vmul(auVar9,auVar8);
          auVar11 = _lqc2(auStack_50);
          _vaddabc(auVar8,auVar8);
          auVar8 = _vmaddbc(auVar10,auVar8);
          auVar9 = _vmul(auVar9,auVar9);
          auVar8 = _qmfc2(auVar8._0_4_);
          _vaddabc(auVar9,auVar9);
          auVar9 = _vmaddbc(auVar11,auVar9);
          auVar9 = _qmfc2(auVar9._0_4_);
          *(float *)(iVar7 + 0x2c) = auVar9._0_4_;
          if (auVar8._0_4_ < 0.0) {
            *(float *)(iVar7 + 0x2c) = -auVar9._0_4_;
          }
          if (0.5 < *(float *)(iVar7 + 0x2c)) {
            *(float *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x3ac) + 0x7c) + 0x2a4) + 0xf4) +
                      0x1c) = *(float *)(iVar7 + 0x2c) * 0.0625;
          }
          else {
            *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x3ac) + 0x7c) + 0x2a4) + 0xf4) + 0x1c) =
                 0xbf800000;
          }
          bVar5 = true;
        }
      }
    }
    if (bVar5) {
      FUN_00188940(param_1,1);
    }
    else {
      *(undefined4 *)
       (*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x3ac) + 0x7c) + 0x2a4) + 0xf4) + 0x1c) = 0;
      FUN_00188940(param_1,0);
    }
  }
  return;
}


// ==== FUN_001886e0 @ 001886e0 ====

void FUN_001886e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4);
  iVar1 = FUN_001580e0(uVar2);
  if (iVar1 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 8) != -1) {
      iVar1 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
      if (*(int *)(iVar1 + 4) == 1) {
        iVar1 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*(undefined4 *)(param_1 + 8));
        FUN_00162580(*(undefined4 *)(iVar1 + 8));
      }
    }
    uVar2 = FUN_001580e0(uVar2);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  return;
}


// ==== FUN_00188780 @ 00188780 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00188780(int param_1)

{
  int iVar1;
  long lVar2;
  undefined1 in_zero_qw [16];
  char cVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3ac) + 0xc9c);
  cVar3 = '\0';
  if (1 < iVar1 - 3U) {
    if (iVar1 == 6) {
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)(*(int *)(param_1 + 0x3ac) + 0xcb4);
    }
  }
  if (cVar3 != '\0') {
    lVar2 = FUN_00188f10(*(int *)(param_1 + 0x3ac) + 0x150);
    if ((lVar2 != 0) && (lVar2 = FUN_00173610(param_1 + 0x3b4), lVar2 != 0)) {
      fVar4 = (float)FUN_001891a8(*(int *)(param_1 + 0x3ac) + 0x150);
      lVar2 = FUN_00188bf8(*(int *)(param_1 + 0x3ac) + 0x150);
      if ((lVar2 != 0) &&
         (((lVar2 = FUN_001891c0(*(int *)(param_1 + 0x3ac) + 0x150), lVar2 != 0 &&
           (iVar1 = *(int *)(param_1 + 0x3ac), fVar4 < *(float *)(iVar1 + 0xcac))) &&
          (*(float *)(iVar1 + 0xca8) < fVar4)))) {
        auVar7 = _qmtc2(0);
        auVar8 = _vaddbc(in_vf0,in_vf0);
        auVar6 = _lqc2(_DAT_004432c0);
        auVar9 = _qmtc2(0x40000000);
        auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x7c) + 0xf0));
        _sqc2(auVar5);
        auVar5 = _vaddbc(in_vf0,auVar7);
        auVar6 = _vadd(auVar5,auVar6);
        auVar5 = _vmul(auVar6,auVar6);
        _vaddabc(auVar5,auVar5);
        auVar7 = _vmaddbc(auVar8,auVar5);
        auVar5 = _por(in_zero_qw,*(undefined1 (*) [16])(*(int *)(iVar1 + 0x7c) + 0x100));
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar7);
        uVar10 = _vwaitq();
        auVar6 = _vmulq(auVar6,uVar10);
        auVar6 = _vmulbc(auVar6,auVar9);
        auVar7 = _qmtc2(auVar5._0_4_);
        auVar6 = _vadd(auVar7,auVar6);
        auVar6 = _qmfc2(auVar6._0_4_);
        cVar3 = FUN_0012a7c0(DAT_0040f4d0,auVar5._0_8_,auVar6._0_8_,3,0,0);
        if (cVar3 != '\x01') {
          FUN_00173640(*(undefined4 *)(*(int *)(param_1 + 0x3ac) + 0xcb0),param_1 + 0x3b4);
          FUN_00181660(*(int *)(param_1 + 0x3ac) + 0xec0,4,0);
        }
      }
    }
  }
  return;
}


// ==== FUN_00188940 @ 00188940 ====

void FUN_00188940(int param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x3ac) + 0x6cd) = 0;
  }
  else {
    puVar1 = *(undefined1 **)(*(int *)(*(int *)(param_1 + 0x3ac) + 0x7c) + 0x2a4);
    if (puVar1 == (undefined1 *)0x0) {
      *(undefined1 *)(*(int *)(param_1 + 0x3ac) + 0x6cd) = 0;
    }
    else {
      iVar2 = FUN_0015d2a8(DAT_0040f4e0,*puVar1);
      *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + *(float *)(DAT_0040f4d0 + 0x1c);
      if (*(char *)(iVar2 + 0x10) == '\0') {
        lVar3 = FUN_00158088(puVar1);
        if (lVar3 != 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x3ac) + 0x6cd) = 0;
          FUN_00173640(*(undefined4 *)(iVar2 + 0xc),param_1 + 0x10);
          return;
        }
        lVar3 = FUN_00173610(param_1 + 0x10);
        if (lVar3 == 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x3ac);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x3ac);
      }
      *(undefined1 *)(iVar2 + 0x6cd) = 1;
    }
  }
  return;
}


// ==== FUN_00188a18 @ 00188a18 ====

void FUN_00188a18(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) == param_2) {
    FUN_00188a40(param_1,0xffffffffffffffff);
  }
  return;
}


// ==== FUN_00188a40 @ 00188a40 ====

void FUN_00188a40(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  bVar2 = false;
  if (param_2 == *(int *)(iVar5 + 8)) {
    return;
  }
  if (*(int *)(iVar5 + 0x3a8) == 0) goto LAB_00188abc;
  if (*(int *)(iVar5 + 8) == -1) {
LAB_00188a9c:
    iVar1 = *(int *)(iVar5 + 0x3a8);
  }
  else {
    uVar3 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
    lVar4 = FUN_00178f18(uVar3);
    if (lVar4 != 0) {
      FUN_001a2cf0(*(undefined4 *)(iVar5 + 0x3a8));
      goto LAB_00188a9c;
    }
    iVar1 = *(int *)(iVar5 + 0x3a8);
  }
  (**(code **)(*(int *)(iVar1 + 0x60) + 0x2c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x60) + 0x28));
  *(undefined4 *)(iVar5 + 0x3a8) = 0;
  bVar2 = true;
LAB_00188abc:
  *(int *)(iVar5 + 8) = param_2;
  if (bVar2) {
    if (param_2 == -1) {
      *(undefined1 *)(iVar5 + 1) = 1;
    }
    else {
      FUN_00188150(param_1,*(undefined4 *)(iVar5 + 0xc));
    }
  }
  return;
}


// ==== FUN_00188b00 @ 00188b00 ====

void FUN_00188b00(void)

{
  return;
}


