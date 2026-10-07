// ==== iSignalSema @ 00367890 ====

void iSignalSema(void)

{
  syscall(0xffffffffffffffbd);
  return;
}


// ==== WaitSema @ 003678a0 ====

void WaitSema(void)

{
  syscall(0x44);
  return;
}


// ==== PollSema @ 003678b0 ====

void PollSema(void)

{
  syscall(0x45);
  return;
}


// ==== SetOsdConfigParam @ 00367900 ====

void SetOsdConfigParam(void)

{
  syscall(0x4a);
  return;
}


// ==== GetOsdConfigParam @ 00367910 ====

void GetOsdConfigParam(void)

{
  syscall(0x4b);
  return;
}


// ==== FlushCache @ 00367ae0 ====

void FlushCache(void)

{
  syscall(100);
  return;
}


// ==== sceSifStopDma @ 00367b30 ====

void sceSifStopDma(void)

{
  syscall(0x6b);
  return;
}


// ==== GetOsdConfigParam2 @ 00367b70 ====

void GetOsdConfigParam2(void)

{
  syscall(0x6f);
  return;
}


// ==== GsGetIMR @ 00367b80 ====

void GsGetIMR(void)

{
  syscall(0x70);
  return;
}


// ==== GsPutIMR @ 00367ba0 ====

void GsPutIMR(void)

{
  syscall(0x71);
  return;
}


// ==== SetVSyncFlag @ 00367bd0 ====

void SetVSyncFlag(void)

{
  syscall(0x73);
  return;
}


// ==== sceSifDmaStat @ 00367c00 ====

void sceSifDmaStat(void)

{
  syscall(0x76);
  return;
}


// ==== sceSifSetDma @ 00367c20 ====

void sceSifSetDma(void)

{
  syscall(0x77);
  return;
}


// ==== isceSifSetDma @ 00367c30 ====

void isceSifSetDma(void)

{
  syscall(0xffffffffffffff89);
  return;
}


// ==== sceSifSetDChain @ 00367c40 ====

void sceSifSetDChain(void)

{
  syscall(0x78);
  return;
}


// ==== isceSifSetDChain @ 00367c50 ====

void isceSifSetDChain(void)

{
  syscall(0xffffffffffffff88);
  return;
}


// ==== sceSifSetReg @ 00367c60 ====

void sceSifSetReg(void)

{
  syscall(0x79);
  return;
}


// ==== sceSifGetReg @ 00367c70 ====

void sceSifGetReg(void)

{
  syscall(0x7a);
  return;
}


// ==== Deci2Call @ 00367c90 ====

void Deci2Call(void)

{
  syscall(0x7c);
  return;
}


// ==== GetMemorySize @ 00367cc0 ====

void GetMemorySize(void)

{
  syscall(0x7f);
  return;
}


// ==== _InitTLB @ 00367cd0 ====

void _InitTLB(void)

{
  syscall(0x82);
  return;
}


// ==== FUN_00367ce0 @ 00367ce0 ====

void FUN_00367ce0(void)

{
  DAT_003d7158 = 0;
  return;
}


// ==== FUN_00367cf0 @ 00367cf0 ====

void FUN_00367cf0(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0036d518();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    FUN_0036d568();
  }
  do {
    uVar1 = REG_INTC_STAT;
  } while ((uVar1 & 4) == 0);
  lVar2 = FUN_0036d518();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 == 0) {
    return;
  }
  FUN_0036d568();
  return;
}


// ==== FUN_00367d80 @ 00367d80 ====

undefined8 FUN_00367d80(void)

{
  uint uVar1;
  long lVar2;
  int aiStack_20 [2];
  undefined8 uStack_18;
  
  aiStack_20[0] = 0;
  SetVSyncFlag(aiStack_20,(uint)aiStack_20 | 8);
  lVar2 = FUN_0036d518();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    FUN_0036d568();
  }
  do {
    uVar1 = REG_INTC_STAT;
    if ((uVar1 & 4) != 0) break;
  } while (aiStack_20[0] == 0);
  lVar2 = FUN_0036d518();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    FUN_0036d568();
  }
  return uStack_18;
}


// ==== FUN_00367e28 @ 00367e28 ====

undefined8 FUN_00367e28(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 - 1U < 2) {
    if (DAT_003d7158 == 0) {
      lVar1 = FUN_00368d60(param_2);
      if (lVar1 == 0) goto LAB_00367e88;
      DAT_003d7158 = 1;
    }
    uVar2 = FUN_00368b18(param_2,param_3);
  }
  else {
LAB_00367e88:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}


// ==== FUN_00367ea8 @ 00367ea8 ====

undefined8 FUN_00367ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    if (DAT_003d7158 == 0) {
      lVar1 = FUN_00368d60(param_2);
      if (lVar1 == 0) goto LAB_00367f00;
      DAT_003d7158 = 1;
    }
    uVar2 = FUN_00368c90(param_2,param_3);
  }
  else {
LAB_00367f00:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}


// ==== FUN_00367f20 @ 00367f20 ====

undefined4 FUN_00367f20(void)

{
  return 0xffffffff;
}


// ==== FUN_00367f28 @ 00367f28 ====

undefined4 FUN_00367f28(void)

{
  return 0xffffffff;
}


// ==== FUN_00367f30 @ 00367f30 ====

uint FUN_00367f30(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  uVar3 = DAT_003d715c + param_1;
  uVar1 = EndOfHeap();
  if (uVar1 < uVar3) {
    puVar2 = (undefined4 *)FUN_0035c4a0();
    *puVar2 = 0xc;
    if (uVar4 != 0) {
      EI();
    }
    uVar1 = 0xffffffff;
    uVar3 = DAT_003d715c;
  }
  else {
    uVar1 = DAT_003d715c;
    if (uVar4 != 0) {
      EI();
    }
  }
  DAT_003d715c = uVar3;
  return uVar1;
}


// ==== FUN_00367fe0 @ 00367fe0 ====

undefined8 FUN_00367fe0(undefined8 param_1,int param_2)

{
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


// ==== FUN_00367ff8 @ 00367ff8 ====

void FUN_00367ff8(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x14,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x14,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}


// ==== FUN_003680a0 @ 003680a0 ====

void FUN_003680a0(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  if (uVar1 != 0) {
    FUN_0036d518();
  }
  FUN_00367ff8(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  if (uVar1 != 0) {
    FUN_0036d568();
    return;
  }
  return;
}


// ==== FUN_00368128 @ 00368128 ====

void FUN_00368128(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x16,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x16,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}


// ==== FUN_003681d0 @ 003681d0 ====

void FUN_003681d0(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  if (uVar1 != 0) {
    FUN_0036d518();
  }
  FUN_00368128(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  if (uVar1 != 0) {
    FUN_0036d568();
    return;
  }
  return;
}


// ==== FUN_00368258 @ 00368258 ====

uint FUN_00368258(void)

{
  return (Status ^ 1) & 1;
}


// ==== FUN_00368268 @ 00368268 ====

undefined8 FUN_00368268(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    FUN_0036d518();
  }
  uVar1 = _DisableIntc(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    FUN_0036d568();
  }
  return uVar1;
}


// ==== FUN_003682d0 @ 003682d0 ====

undefined8 FUN_003682d0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    FUN_0036d518();
  }
  uVar1 = _EnableIntc(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    FUN_0036d568();
  }
  return uVar1;
}


// ==== FUN_00368338 @ 00368338 ====

undefined8 FUN_00368338(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    FUN_0036d518();
  }
  uVar1 = _DisableDmac(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    FUN_0036d568();
  }
  return uVar1;
}


// ==== FUN_003683a0 @ 003683a0 ====

undefined8 FUN_003683a0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    FUN_0036d518();
  }
  uVar1 = _EnableDmac(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    FUN_0036d568();
  }
  return uVar1;
}


// ==== FUN_00368408 @ 00368408 ====

void FUN_00368408(uint *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  
  do {
    while( true ) {
      while( true ) {
        WaitSema(DAT_004831b0);
        iVar2 = (*param_1 & 0x1ff) * 2;
        *param_1 = (*param_1 & 0x1ff) + 1;
        puVar3 = (undefined1 *)((int)param_1 + iVar2 + 9);
        bVar1 = *(byte *)((int)param_1 + iVar2 + 8);
        if (bVar1 != 1) break;
        RotateThreadReadyQueue(*puVar3);
      }
      if (1 < bVar1) break;
      if (bVar1 == 0) {
        WakeupThread(*puVar3);
      }
      else {
LAB_003684d0:
        FUN_0036a0b8(0x40b720);
      }
    }
    if (bVar1 != 2) goto LAB_003684d0;
    SuspendThread(*(undefined1 *)((int)param_1 + iVar2 + 9));
  } while( true );
}


// ==== FUN_003684e0 @ 003684e0 ====

/* Strings referenciadas:
     "SceKerneltopThread" */

int FUN_003684e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [4];
  code *pcStack_8c;
  undefined *puStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  char *pcStack_70;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  char *pcStack_4c;
  
  if (DAT_003d7160 < 1) {
    uStack_5c = 0xff;
    uStack_58 = 0;
    pcStack_4c = "SceKerneltopThread";
    lVar1 = CreateSema(auStack_60);
    DAT_004831b0 = (undefined4)lVar1;
    if (-1 < lVar1) {
      pcStack_8c = FUN_00368408;
      puStack_88 = &DAT_00482db0;
      uStack_84 = 0x400;
      puStack_80 = &_mips_gp0_value;
      pcStack_70 = "SceKerneltopThread";
      uStack_7c = 0;
      lVar1 = CreateThread(auStack_90);
      DAT_003d7160 = (int)lVar1;
      if (-1 < lVar1) {
        DAT_004831b8 = 0;
        DAT_004831bc = 0;
        FUN_00368738(lVar1,0x4831b8);
        uVar2 = GetThreadId();
        ChangeThreadPriority(uVar2,1);
        return DAT_003d7160;
      }
      DeleteSema(DAT_004831b0);
    }
  }
  return -1;
}


// ==== FUN_003685d0 @ 003685d0 ====

void FUN_003685d0(ulong param_1)

{
  undefined4 uVar1;
  ulong in_v0;
  int iVar2;
  
  uVar1 = DAT_004831b0;
  syscall(0xffffffffffffffd1);
  if (in_v0 == param_1) {
    if ((in_v0 < 0x100) && (DAT_003d7160 != 0)) {
      iVar2 = (DAT_004831bc & 0x1ff) * 2;
      DAT_004831bc = (DAT_004831bc & 0x1ff) + 1;
      (&DAT_004831c0)[iVar2] = 0;
      *(char *)(iVar2 + 0x4831c1) = (char)in_v0;
      iSignalSema(uVar1);
    }
  }
  else {
    _iWakeupThread();
  }
  return;
}


// ==== FUN_00368670 @ 00368670 ====

/* Strings referenciadas:
     "SceKernelDelayThread" */

long FUN_00368670(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char *pcStack_3c;
  
  if ((Status & 0x10000) == 0) {
    lVar2 = -0x7fff7ff8;
  }
  else {
    uStack_4c = 1;
    pcStack_3c = "SceKernelDelayThread";
    uStack_48 = 0;
    lVar1 = CreateSema(auStack_50);
    if (lVar1 < 0) {
      lVar2 = -0x7fff7ffd;
    }
    else {
      uVar3 = FUN_0036e660(0,param_1);
      lVar2 = FUN_0036e790(uVar3,0x3688b0,lVar1);
      if (lVar2 < 0) {
        DeleteSema(lVar1);
      }
      else {
        WaitSema(lVar1);
        DeleteSema(lVar1);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


// ==== FUN_00368738 @ 00368738 ====

long FUN_00368738(undefined8 param_1,undefined8 param_2)

{
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  long lVar1;
  int aiStack_70 [2];
  int iStack_68;
  int iStack_64;
  
  lVar1 = FUN_00368258();
  if (lVar1 != 0) {
    return -1;
  }
  lVar1 = FUN_0036d518();
  if (lVar1 != 0) {
    lVar1 = ReferThreadStatus(param_1,aiStack_70);
    if (lVar1 < 0) {
      FUN_0036d568();
      return lVar1;
    }
    if (aiStack_70[0] == 0x10) {
      iStack_68 = iStack_68 + iStack_64;
      *(undefined4 *)(iStack_68 + -0x2a0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x29c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x298) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x294) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x290) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x28c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x288) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x284) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x280) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x27c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x278) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x274) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x270) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x26c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x268) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x264) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x260) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x25c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -600) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x254) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x250) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x24c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x248) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x244) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x240) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x23c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x238) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x234) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x230) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x22c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x228) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x224) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x220) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x21c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x218) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x214) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x210) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x20c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x208) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x204) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x200) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1fc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1f8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -500) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1f0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1ec) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1e8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1e4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1e0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1dc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1d8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1d4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1d0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1cc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1c8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1c4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1c0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1bc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1b8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1b4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1b0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1ac) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1a8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1a4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1a0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x19c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x198) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x194) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -400) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x18c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x188) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x184) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x180) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x17c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x178) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x174) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x170) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x16c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x168) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x164) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x160) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x15c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x158) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x154) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x150) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x14c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x148) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x144) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x140) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x13c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x138) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x134) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x130) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -300) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x128) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x124) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x120) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x11c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x118) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x114) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x110) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x10c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x108) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x104) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x100) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0xfc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0xf8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0xf4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0xf0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0xec) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0xe8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0xe4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0xa0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x9c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x98) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x94) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x90) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x8c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x88) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x84) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x80) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x7c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x78) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x74) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x70) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x6c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x68) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -100) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x60) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x5c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x58) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x54) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x50) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x4c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x48) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x44) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x40) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x3c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x38) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x34) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x30) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x2c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x28) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x24) = in_register_0000000c;
      *(long *)(iStack_68 + -0x260) = (long)(int)param_2;
      *(long *)(iStack_68 + -0xe0) = (long)*(int *)(iStack_68 + -0xe0);
      *(undefined8 *)(iStack_68 + -0xd8) = 0;
      *(long *)(iStack_68 + -0xd0) = (long)*(int *)(iStack_68 + -0xd0);
      *(undefined8 *)(iStack_68 + -200) = 0;
      *(long *)(iStack_68 + -0xc0) = (long)*(int *)(iStack_68 + -0xc0);
      *(undefined8 *)(iStack_68 + -0xb8) = 0;
      *(long *)(iStack_68 + -0xb0) = (long)*(int *)(iStack_68 + -0xb0);
      *(undefined8 *)(iStack_68 + -0xa8) = 0;
      FUN_0036d568();
      lVar1 = _StartThread(param_1,param_2);
      return lVar1;
    }
    FUN_0036d568();
  }
  return -1;
}


// ==== FUN_003688b0 @ 003688b0 ====

undefined8 FUN_003688b0(void)

{
  undefined8 in_a3;
  
  iSignalSema(in_a3);
  SYNC(0);
  EI();
  return 0;
}


// ==== FUN_003688d8 @ 003688d8 ====

undefined4 * FUN_003688d8(undefined4 param_1)

{
  DAT_004835c0 = param_1;
  DAT_004835c8 = &DAT_004835d0;
  DAT_004835c4 = 0;
  DAT_004835cc = &DAT_004835d0;
  return &DAT_004835c0;
}


// ==== FUN_00368900 @ 00368900 ====

void FUN_00368900(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[1] = param_1[1] + 1;
  param_1[3] = iVar1 + 1;
  if (iVar1 + 1 == (int)param_1 + *param_1 + 0x10) {
    param_1[3] = (int)(param_1 + 4);
  }
  return;
}


// ==== FUN_00368940 @ 00368940 ====

void FUN_00368940(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  param_1[1] = param_1[1] + -1;
  param_1[2] = iVar1 + 1;
  if (iVar1 + 1 == (int)param_1 + *param_1 + 0x10) {
    param_1[2] = (int)(param_1 + 4);
  }
  return;
}


// ==== FUN_00368980 @ 00368980 ====

/* Strings referenciadas:
     "TTY: packet size larger than expect "
     "TTY: receive error"
     "TTY: send err %d "
     "TTY: err ti->wlen=%08x " */

void FUN_00368980(int param_1,ulong param_2,undefined4 *param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 3) {
    lVar3 = FUN_0036eb78(*param_3,param_3[4],param_3[1] & 0xffff);
    if (-1 < lVar3) {
      param_3[4] = param_3[4] + (int)lVar3;
      param_3[1] = param_3[1] - (int)lVar3;
      return;
    }
    FUN_0036a0b8(0x40b7b8);
  }
  else {
    if (param_1 < 4) {
      if (param_1 < 1) {
        return;
      }
      if (param_2 == 0) {
        puVar1 = (ushort *)param_3[5];
        iVar6 = 0xc;
        if (0xc < *puVar1) {
          iVar5 = param_3[6];
          puVar4 = puVar1;
          while( true ) {
            puVar2 = (undefined1 *)((int)puVar4 + iVar6);
            iVar6 = iVar6 + 1;
            **(undefined1 **)(iVar5 + 0xc) = *puVar2;
            FUN_00368900(param_3[6]);
            if ((int)(uint)*puVar1 <= iVar6) break;
            puVar4 = (ushort *)param_3[5];
            iVar5 = param_3[6];
          }
        }
        param_3[2] = 0;
        return;
      }
      if (0x140 < (uint)(param_3[2] + (int)param_2)) {
        FUN_0036a0b8(0x40b778);
      }
      lVar3 = FUN_0036eb40(*param_3,param_3[5] + param_3[2],param_2 & 0xffff);
      if (lVar3 < 0) {
        FUN_0036a0b8(0x40b7a0);
      }
      param_3[2] = param_3[2] + (int)lVar3;
      return;
    }
    if (param_1 != 4) {
      return;
    }
    if (param_3[1] != 0) {
      FUN_0036a0b8(0x40b7d0,param_3[1]);
    }
  }
  param_3[3] = 0;
  return;
}


// ==== FUN_00368b18 @ 00368b18 ====

int FUN_00368b18(char *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = -1;
  if (DAT_004836dc == 0) {
    lVar1 = FUN_0036d518();
    DAT_004836dc = 1;
    DAT_004836e0 = &DAT_20483700;
    pcVar4 = &DAT_2048370c;
    iVar6 = 0;
    do {
      param_2 = param_2 + -1;
      if (param_2 == -1) break;
      cVar3 = *param_1;
      if (*param_1 == '\n') {
        *pcVar4 = '\r';
        iVar5 = iVar5 + 1;
        pcVar4 = pcVar4 + 1;
        if (0xff < iVar5) break;
        cVar3 = *param_1;
      }
      *pcVar4 = cVar3;
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
      pcVar4 = pcVar4 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x100);
    DAT_004836d4 = iVar5 + 0xc;
    DAT_20483700 = (undefined2)DAT_004836d4;
    lVar2 = FUN_0036eae0(DAT_004836d0,DAT_20483707);
    if (lVar2 < 0) {
      DAT_004836dc = 0;
      iVar6 = -1;
      if (lVar1 != 0) {
        FUN_0036d568();
        iVar6 = -1;
      }
    }
    else {
      while (DAT_004836dc != 0) {
        FUN_0036eb10(DAT_004836d0);
      }
      if (lVar1 != 0) {
        FUN_0036d568();
      }
    }
  }
  return iVar6;
}


// ==== FUN_00368c90 @ 00368c90 ====

int FUN_00368c90(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = iVar3;
  if (0 < param_2) {
    do {
      iVar3 = iVar2 + 1;
      do {
      } while (*(int *)(DAT_004836e8 + 4) == 0);
      *(char *)(param_1 + iVar2) = **(char **)(DAT_004836e8 + 8);
      FUN_00368940(DAT_004836e8);
      cVar1 = *(char *)(param_1 + iVar2);
    } while (((cVar1 != '\n') && (cVar1 != '\r')) && (iVar2 = iVar3, iVar3 < param_2));
  }
  return iVar3;
}


// ==== FUN_00368d60 @ 00368d60 ====

bool FUN_00368d60(void)

{
  bool bVar1;
  
  FlushCache(0);
  DAT_004836d0 = FUN_0036ea90(0x210,0x4836d0,0x368980);
  bVar1 = -1 < DAT_004836d0;
  if (bVar1) {
    DAT_004836dc = 0;
    DAT_004836d4 = 0;
    DAT_004836d8 = 0;
    DAT_004836e4 = &DAT_20483840;
    DAT_004836e0 = &DAT_20483700;
    DAT_20483704 = 0x210;
    DAT_20483706 = 0x45;
    DAT_20483707 = 0x48;
    DAT_20483708 = 0;
    DAT_20483702 = 0;
    DAT_004836e8 = FUN_003688d8(0x100);
  }
  return bVar1;
}


// ==== FUN_00368e20 @ 00368e20 ====

undefined8 FUN_00368e20(undefined8 param_1)

{
  uint uVar1;
  
  do {
    uVar1 = REG_SIO_ISR;
  } while ((uVar1 & 0x8000) != 0);
  REG_SIO_TXFIFO = (char)param_1;
  return param_1;
}


// ==== FUN_00368e58 @ 00368e58 ====

void FUN_00368e58(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_003d7164;
  if (0x7d < DAT_003d7164) {
    DAT_003d7164 = 0;
    DAT_004839ff = 0;
    FUN_0036ebc0(0x483980);
    iVar1 = DAT_003d7164;
  }
  if (param_1 != 10) {
    DAT_003d7164 = iVar1 + 1;
    (&DAT_00483980)[iVar1] = (char)param_1;
    return;
  }
  DAT_003d7164 = 0;
  (&DAT_00483980)[iVar1] = 10;
  *(undefined1 *)(iVar1 + 0x483981) = 0;
  FUN_0036ebc0();
  return;
}


// ==== FUN_00368f08 @ 00368f08 ====

void FUN_00368f08(long param_1)

{
  if (param_1 == 10) {
    FUN_00368e20(0xd);
    FUN_00368e20(10);
    return;
  }
  FUN_00368e20();
  return;
}


// ==== FUN_00368f40 @ 00368f40 ====

int FUN_00368f40(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = ((param_1 & 0x7fffffffffffffff) >> 0x34) - 0x433;
  if (lVar3 < -0x35) {
    return 0;
  }
  if (0xc < lVar3) {
    return 9999;
  }
  uVar2 = param_1 & 0xfffffffffffff | 0x10000000000000;
  if (lVar3 < 0) {
    uVar2 = uVar2 >> (long)(-2 - (int)lVar3);
    if ((uVar2 & 3) == 3) {
      iVar1 = (int)(uVar2 >> 2) + 1;
    }
    else {
      iVar1 = (int)(uVar2 >> 2);
    }
  }
  else {
    iVar1 = (int)(uVar2 << (long)(int)lVar3);
  }
  return iVar1;
}


// ==== FUN_00368fd0 @ 00368fd0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00368fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int *piVar7;
  
  iVar2 = 0;
  piVar7 = (int *)param_3;
  if (*piVar7 == 0) {
    iVar2 = 0;
  }
  else {
    lVar3 = FUN_002919f8(param_4,0);
    if (lVar3 < 0) {
      param_4 = FUN_00291468(0,param_4);
      (*(code *)param_1)(param_2,param_3,0x2d);
      *piVar7 = *piVar7 + -1;
    }
    lVar4 = FUN_002919f8(param_4,DAT_0040b808);
    if (lVar4 < 0) {
      while (lVar4 = FUN_002919f8(param_4,DAT_0040b810), lVar4 < 0) {
        iVar2 = iVar2 + -1;
        param_4 = FUN_002914d0(param_4,0x4024000000000000);
      }
    }
    else {
      lVar4 = FUN_002919f8(param_4,0x3ff0000000000000);
      if (-1 < lVar4) {
        while (lVar4 = FUN_002919f8(param_4,0x3ff0000000000000), -1 < lVar4) {
          iVar2 = iVar2 + 1;
          param_4 = FUN_00291778(param_4,0x4024000000000000);
        }
      }
    }
    uVar5 = FUN_002914d0(param_4,_DAT_0040b818);
    uVar5 = FUN_0036f140(uVar5);
    uVar5 = FUN_00368f40(uVar5);
    iVar1 = FUN_00369f68(param_1,param_2,param_3,0x40b7f0,uVar5);
    if (iVar2 < 0) {
      puVar6 = &DAT_0040b800;
    }
    else {
      puVar6 = &DAT_0040b7f8;
    }
    iVar2 = FUN_00369f68(param_1,param_2,param_3,puVar6,iVar2);
    iVar2 = (uint)(lVar3 < 0) + iVar1 + iVar2;
  }
  return iVar2;
}


// ==== FUN_003691a8 @ 003691a8 ====

int FUN_003691a8(code *param_1,undefined4 param_2,undefined4 param_3,byte *param_4,ulong *param_5)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  ulong *puVar25;
  float fVar26;
  byte bStack_101;
  undefined1 auStack_100 [32];
  undefined4 uStack_e0;
  code *pcStack_dc;
  undefined4 uStack_d8;
  byte *pbStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  uStack_e0 = param_3;
  pcStack_dc = param_1;
  uStack_d8 = param_2;
  bVar15 = *param_4;
  pbStack_d4 = &bStack_101;
  iStack_c8 = 0;
  if (bVar15 == 0) {
    puStack_c4 = &uStack_e0;
LAB_00369e78:
    (*pcStack_dc)(uStack_d8,puStack_c4,0);
    return iStack_c8;
  }
  puStack_c4 = &uStack_e0;
LAB_00369208:
  uVar23 = 0;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar1 = false;
  bVar3 = false;
  iStack_d0 = 0;
  iStack_cc = 0;
  lVar17 = 0;
  pbVar24 = param_4;
  if (bVar15 == 0x25) {
LAB_00369228:
    param_4 = pbVar24 + 1;
    bVar15 = *param_4;
    pbVar21 = pbStack_d4;
    pbVar22 = pbStack_d4;
    switch((int)((bVar15 - 0x20) * 0x1000000) >> 0x18) {
    case 0:
      bVar7 = true;
      pbVar24 = param_4;
      goto LAB_00369228;
    default:
      goto switchD_0036925c_caseD_1;
    case 3:
      bVar5 = true;
      pbVar24 = param_4;
      goto LAB_00369228;
    case 0xb:
      bVar6 = true;
      pbVar24 = param_4;
      goto LAB_00369228;
    case 0xd:
      bVar3 = true;
      pbVar24 = param_4;
      goto LAB_00369228;
    case 0xe:
      pbVar24 = pbVar24 + 2;
      uVar23 = uVar23 | 0x20;
      bVar15 = *pbVar24;
      if (*pbVar24 != 0x2a) {
        lVar14 = 0;
        param_4 = pbVar24;
        while (bVar15 - 0x30 < 10) {
          param_4 = param_4 + 1;
          lVar14 = (long)((int)lVar14 * 10 + -0x30 + (int)(char)bVar15);
          bVar15 = *param_4;
        }
        lVar17 = -1;
        if (-2 < lVar14) {
          lVar17 = lVar14;
        }
        goto LAB_003692b4;
      }
      puVar25 = param_5 + 1;
      uVar20 = *param_5;
      lVar17 = -1;
      param_5 = puVar25;
      if (-2 < (long)(int)(uint)uVar20) {
        lVar17 = (long)(int)(uint)uVar20;
      }
      goto LAB_00369228;
    case 0x10:
      uVar23 = uVar23 | 4;
      pbVar24 = param_4;
      goto LAB_00369228;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      iStack_d0 = 0;
      do {
        param_4 = param_4 + 1;
        iVar19 = (int)(char)bVar15;
        bVar15 = *param_4;
        iStack_d0 = iStack_d0 * 10 + -0x30 + iVar19;
      } while (bVar15 - 0x30 < 10);
LAB_003692b4:
      pbVar24 = param_4 + 1;
      bVar16 = 0;
      if (bVar15 == 0) goto LAB_00369e54;
      pbVar24 = param_4 + -1;
      goto LAB_00369228;
    case 0x38:
      pcVar13 = "0123456789ABCDEF";
      if (bVar5) {
        auStack_100[0] = 0x30;
        iStack_cc = 2;
        auStack_100[1] = 0x58;
      }
      goto LAB_00369474;
    case 0x43:
      puVar25 = param_5 + 1;
      lVar17 = 1;
      bVar1 = true;
      *pbStack_d4 = (byte)*param_5;
      pbVar21 = pbStack_d4 + -1;
      goto LAB_003699a4;
    case 0x44:
    case 0x49:
      if (bVar1) {
        uVar20 = *param_5;
      }
      else if (bVar4) {
        uVar20 = (ulong)(short)(ushort)*param_5;
      }
      else {
        uVar20 = (ulong)(int)(uint)*param_5;
      }
      puVar25 = param_5 + 1;
      if ((long)uVar20 < 0) {
        uVar8 = 0x2d;
        iStack_cc = 1;
LAB_0036957c:
        iStack_cc = 1;
        auStack_100[0] = uVar8;
      }
      else {
        uVar8 = 0x2b;
        if (bVar6) {
          iStack_cc = 1;
          goto LAB_0036957c;
        }
        uVar8 = 0x20;
        if (bVar7) {
          iStack_cc = 1;
          goto LAB_0036957c;
        }
      }
      if (uVar20 == 0) {
        if (((uVar23 & 0x20) == 0) || (lVar17 != 0)) {
          *pbStack_d4 = 0x30;
          pbVar21 = pbStack_d4 + -1;
        }
      }
      else {
        if ((long)uVar20 < 0) {
          uVar20 = -uVar20;
        }
        while (uVar20 != 0) {
          uStack_b0 = (undefined4)lVar17;
          uStack_ac = (undefined4)((ulong)lVar17 >> 0x20);
          cVar9 = FUN_0036f310(uVar20,10);
          *pbVar21 = cVar9 + 0x30;
          uVar20 = FUN_0028fbd8(uVar20,10);
          lVar17 = CONCAT44(uStack_ac,uStack_b0);
          pbVar21 = pbVar21 + -1;
        }
      }
      bVar1 = false;
      pbVar22 = pbVar21 + 1;
      goto LAB_003699a4;
    case 0x45:
    case 0x46:
      puVar25 = param_5 + 1;
      fVar26 = (float)FUN_00291c68(*param_5);
      if (fVar26 != 0.0) {
        pbVar24 = pbVar24 + 2;
        uVar12 = FUN_00291f58();
        iVar19 = FUN_00368fd0(pcStack_dc,uStack_d8,puStack_c4,uVar12);
        iStack_c8 = iStack_c8 + iVar19;
        goto LAB_00369744;
      }
      bVar15 = 0x30;
      pbVar24 = pbVar24 + 2;
      goto LAB_00369e34;
    case 0x48:
      bVar4 = true;
      pbVar24 = param_4;
      goto LAB_00369228;
    case 0x4c:
      goto switchD_0036925c_caseD_4c;
    case 0x4f:
      if (bVar1) {
        uVar20 = *param_5;
      }
      else if (bVar4) {
        uVar20 = (ulong)(ushort)*param_5;
      }
      else {
        uVar20 = (ulong)(uint)*param_5;
      }
      puVar25 = param_5 + 1;
      if (uVar20 == 0) {
        if (((uVar23 & 0x20) == 0) || (lVar17 != 0)) {
          *pbStack_d4 = 0x30;
          pbVar21 = pbStack_d4 + -1;
        }
      }
      else {
        do {
          pbVar22 = pbVar21;
          bVar15 = (byte)uVar20;
          uVar20 = uVar20 >> 3;
          *pbVar22 = (bVar15 & 7) + 0x30;
          pbVar21 = pbVar22 + -1;
        } while (uVar20 != 0);
        if (bVar5) {
          *pbVar21 = 0x30;
          pbVar21 = pbVar22 + -2;
        }
      }
      bVar1 = false;
      pbVar22 = pbVar21 + 1;
      goto LAB_003699a4;
    case 0x50:
      puVar25 = param_5 + 1;
      uVar20 = (ulong)(uint)*param_5;
      pbVar21 = pbStack_d4;
      if (uVar20 == 0) {
        if (((uVar23 & 0x20) == 0) || (lVar17 != 0)) {
          *pbStack_d4 = 0x30;
          pbVar21 = pbStack_d4 + -1;
        }
      }
      else {
        do {
          uVar2 = (uint)uVar20;
          uVar20 = uVar20 >> 4;
          *pbVar21 = ".A0123456789abcdef"[(uVar2 & 0xf) + 2];
          pbVar21 = pbVar21 + -1;
        } while (uVar20 != 0);
      }
      bVar1 = false;
      auStack_100[0] = 0x30;
      pbVar22 = pbVar21 + 1;
      auStack_100[1] = 0x78;
      lVar14 = (long)((int)pbStack_d4 - (int)pbVar21);
      iStack_cc = 2;
      break;
    case 0x53:
      puVar25 = param_5 + 1;
      pbVar22 = *(byte **)param_5;
      if (pbVar22 == (byte *)0x0) {
        pbVar24 = pbVar24 + 2;
        (*pcStack_dc)(uStack_d8,puStack_c4,0x28);
        (*pcStack_dc)(uStack_d8,puStack_c4,0x6e);
        (*pcStack_dc)(uStack_d8,puStack_c4,0x75);
        (*pcStack_dc)(uStack_d8,puStack_c4,0x6c);
        (*pcStack_dc)(uStack_d8,puStack_c4,0x6c);
        (*pcStack_dc)(uStack_d8,puStack_c4,0x29);
        bVar16 = *param_4;
        param_5 = puVar25;
        goto LAB_00369e54;
      }
      if ((uVar23 & 0x20) != 0) {
        lVar14 = 0;
        if ((0 < lVar17) && (*pbVar22 != 0)) {
          bVar1 = false;
          pbVar21 = pbVar22;
          goto LAB_00369808;
        }
        lVar14 = 0;
        goto LAB_00369888;
      }
      lVar14 = 0;
      if (*pbVar22 == 0) goto LAB_00369888;
      bVar1 = false;
      pbVar21 = pbVar22;
      do {
        pbVar21 = pbVar21 + 1;
        lVar14 = (long)((int)lVar14 + 1);
      } while (*pbVar21 != 0);
      break;
    case 0x55:
      if (bVar1) {
        uVar20 = *param_5;
      }
      else if (bVar4) {
        uVar20 = (ulong)(ushort)*param_5;
      }
      else {
        uVar20 = (ulong)(uint)*param_5;
      }
      if (uVar20 == 0) {
        if (((uVar23 & 0x20) == 0) || (lVar17 != 0)) {
          *pbStack_d4 = 0x30;
          pbVar21 = pbStack_d4 + -1;
        }
        goto LAB_003696d4;
      }
      do {
        uStack_b0 = (undefined4)lVar17;
        uStack_ac = (undefined4)((ulong)lVar17 >> 0x20);
        cVar9 = FUN_00290ac0(uVar20,10);
        *pbVar21 = cVar9 + 0x30;
        uVar20 = FUN_002904f0(uVar20,10);
        pbVar21 = pbVar21 + -1;
        lVar17 = CONCAT44(uStack_ac,uStack_b0);
      } while (uVar20 != 0);
LAB_003696dc:
      puVar25 = param_5 + 1;
      bVar1 = false;
      pbVar22 = pbVar21 + 1;
      lVar14 = (long)((int)pbStack_d4 - (int)pbVar21);
      break;
    case 0x58:
      pcVar13 = "0123456789abcdef";
      if (bVar5) {
        auStack_100[0] = 0x30;
        auStack_100[1] = 0x78;
        iStack_cc = 2;
      }
LAB_00369474:
      if (bVar1) {
        uVar20 = *param_5;
      }
      else if (bVar4) {
        uVar20 = (ulong)(ushort)*param_5;
      }
      else {
        uVar20 = (ulong)(uint)*param_5;
      }
      if (uVar20 == 0) {
        iStack_cc = 0;
        if (((uVar23 & 0x20) == 0) || (lVar17 != 0)) {
          *pbStack_d4 = 0x30;
          pbVar21 = pbStack_d4 + -1;
        }
LAB_003696d4:
        iStack_cc = 0;
      }
      else {
        do {
          uVar2 = (uint)uVar20;
          uVar20 = uVar20 >> 4;
          *pbVar21 = pcVar13[uVar2 & 0xf];
          pbVar21 = pbVar21 + -1;
        } while (uVar20 != 0);
      }
      goto LAB_003696dc;
    }
    goto LAB_003699a8;
  }
  if (bVar15 == 0) goto LAB_00369e50;
  pbVar24 = param_4 + 1;
  puVar25 = param_5;
LAB_00369e34:
  iVar19 = (*pcStack_dc)(uStack_d8,puStack_c4,bVar15);
  iStack_c8 = iStack_c8 + iVar19;
  goto LAB_00369744;
  while (*pbVar21 != 0) {
LAB_00369808:
    pbVar21 = pbVar21 + 1;
    lVar14 = (long)((int)lVar14 + 1);
    if (lVar17 <= lVar14) goto LAB_00369888;
  }
LAB_003699a8:
  pbVar24 = pbVar24 + 2;
  iVar19 = (int)lVar14;
  lVar18 = (long)((int)lVar17 - iVar19);
  if (lVar17 <= lVar14) {
    lVar18 = 0;
  }
  pbVar21 = pbVar22 + iVar19;
  iStack_d0 = ((iStack_d0 - iVar19) - iStack_cc) - (int)lVar18;
  if (bVar1) {
    lVar17 = 0x20;
    if ((uVar23 & 4) != 0) {
LAB_00369a10:
      lVar17 = 0x20;
      if (0 < iStack_d0) {
        lVar17 = 0x30;
      }
    }
  }
  else {
    lVar17 = 0x20;
    if (uVar23 == 4) goto LAB_00369a10;
  }
  param_5 = puVar25;
  if (bVar3) {
    iVar19 = 0;
    if (iStack_cc != 0) {
      do {
        puVar10 = auStack_100 + iVar19;
        iVar19 = iVar19 + 1;
        uStack_b0 = (undefined4)lVar18;
        uStack_ac = (undefined4)((ulong)lVar18 >> 0x20);
        iVar11 = (*pcStack_dc)(uStack_d8,puStack_c4,*puVar10);
        lVar18 = CONCAT44(uStack_ac,uStack_b0);
        iStack_c8 = iStack_c8 + iVar11;
      } while (iVar19 < iStack_cc);
    }
    iVar19 = iStack_d0;
    if (0 < lVar18) {
      do {
        lVar18 = (long)((int)lVar18 + -1);
        iVar19 = (*pcStack_dc)(uStack_d8,puStack_c4,0x30);
        iStack_c8 = iStack_c8 + iVar19;
        iVar19 = iStack_d0;
      } while (lVar18 != 0);
    }
    for (; iStack_d0 = iVar19, pbVar22 < pbVar21; pbVar22 = pbVar22 + 1) {
      iVar19 = (*pcStack_dc)(uStack_d8,puStack_c4,*pbVar22);
      iStack_c8 = iStack_c8 + iVar19;
      iVar19 = iStack_d0;
    }
    if (iVar19 < 1) {
LAB_00369744:
      bVar16 = *param_4;
      param_5 = puVar25;
    }
    else {
      do {
        iVar19 = iVar19 + -1;
        iVar11 = (*pcStack_dc)(uStack_d8,puStack_c4,0x20);
        iStack_c8 = iStack_c8 + iVar11;
      } while (iVar19 != 0);
      bVar16 = *param_4;
    }
  }
  else if ((uVar23 & 4) == 0) {
    iVar19 = 0;
    if (0 < iStack_d0) {
      do {
        iVar19 = iVar19 + 1;
        uStack_c0 = (undefined4)lVar17;
        uStack_bc = (undefined4)((ulong)lVar17 >> 0x20);
        uStack_b0 = (undefined4)lVar18;
        uStack_ac = (undefined4)((ulong)lVar18 >> 0x20);
        iVar11 = (*pcStack_dc)(uStack_d8,puStack_c4,lVar17);
        lVar17 = CONCAT44(uStack_bc,uStack_c0);
        iStack_c8 = iStack_c8 + iVar11;
        lVar18 = CONCAT44(uStack_ac,uStack_b0);
      } while (iVar19 < iStack_d0);
    }
    iVar19 = 0;
    if (iStack_cc != 0) {
      do {
        puVar10 = auStack_100 + iVar19;
        iVar19 = iVar19 + 1;
        uStack_b0 = (undefined4)lVar18;
        uStack_ac = (undefined4)((ulong)lVar18 >> 0x20);
        iVar11 = (*pcStack_dc)(uStack_d8,puStack_c4,*puVar10);
        lVar18 = CONCAT44(uStack_ac,uStack_b0);
        iStack_c8 = iStack_c8 + iVar11;
      } while (iVar19 < iStack_cc);
    }
    if (0 < lVar18) {
      do {
        lVar18 = (long)((int)lVar18 + -1);
        iVar19 = (*pcStack_dc)(uStack_d8,puStack_c4,0x30);
        iStack_c8 = iStack_c8 + iVar19;
      } while (lVar18 != 0);
    }
    if (pbVar22 < pbVar21) {
      do {
        bVar15 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        iVar19 = (*pcStack_dc)(uStack_d8,puStack_c4,bVar15);
        iStack_c8 = iStack_c8 + iVar19;
      } while (pbVar22 < pbVar21);
      bVar16 = *param_4;
    }
    else {
      bVar16 = *param_4;
    }
  }
  else {
    if (lVar17 == 0x30) {
      iVar19 = 0;
      if (iStack_cc == 0) {
        uVar12 = 0x30;
      }
      else {
        uVar12 = 0x30;
        do {
          puVar10 = auStack_100 + iVar19;
          iVar19 = iVar19 + 1;
          uStack_c0 = (undefined4)uVar12;
          uStack_bc = (undefined4)((ulong)uVar12 >> 0x20);
          uStack_b0 = (undefined4)lVar18;
          uStack_ac = (undefined4)((ulong)lVar18 >> 0x20);
          iVar11 = (*pcStack_dc)(uStack_d8,puStack_c4,*puVar10);
          uVar12 = CONCAT44(uStack_bc,uStack_c0);
          iStack_c8 = iStack_c8 + iVar11;
          lVar18 = CONCAT44(uStack_ac,uStack_b0);
        } while (iVar19 < iStack_cc);
      }
      iVar19 = iStack_d0;
      if (0 < iStack_d0) {
        do {
          iVar19 = iVar19 + -1;
          uStack_c0 = (undefined4)uVar12;
          uStack_bc = (undefined4)((ulong)uVar12 >> 0x20);
          uStack_b0 = (undefined4)lVar18;
          uStack_ac = (undefined4)((ulong)lVar18 >> 0x20);
          iVar11 = (*pcStack_dc)(uStack_d8,puStack_c4,uVar12);
          uVar12 = CONCAT44(uStack_bc,uStack_c0);
          lVar18 = CONCAT44(uStack_ac,uStack_b0);
          iStack_c8 = iStack_c8 + iVar11;
        } while (iVar19 != 0);
      }
    }
    else {
      iVar19 = 0;
      if (0 < iStack_d0) {
        do {
          iVar19 = iVar19 + 1;
          uStack_c0 = (undefined4)lVar17;
          uStack_bc = (undefined4)((ulong)lVar17 >> 0x20);
          uStack_b0 = (undefined4)lVar18;
          uStack_ac = (undefined4)((ulong)lVar18 >> 0x20);
          iVar11 = (*pcStack_dc)(uStack_d8,puStack_c4,lVar17);
          lVar17 = CONCAT44(uStack_bc,uStack_c0);
          iStack_c8 = iStack_c8 + iVar11;
          lVar18 = CONCAT44(uStack_ac,uStack_b0);
        } while (iVar19 < iStack_d0);
      }
      iVar19 = 0;
      if (iStack_cc != 0) {
        do {
          puVar10 = auStack_100 + iVar19;
          iVar19 = iVar19 + 1;
          uStack_b0 = (undefined4)lVar18;
          uStack_ac = (undefined4)((ulong)lVar18 >> 0x20);
          iVar11 = (*pcStack_dc)(uStack_d8,puStack_c4,*puVar10);
          lVar18 = CONCAT44(uStack_ac,uStack_b0);
          iStack_c8 = iStack_c8 + iVar11;
        } while (iVar19 < iStack_cc);
      }
    }
    if (0 < lVar18) {
      do {
        lVar18 = (long)((int)lVar18 + -1);
        iVar19 = (*pcStack_dc)(uStack_d8,puStack_c4,0x30);
        iStack_c8 = iStack_c8 + iVar19;
      } while (lVar18 != 0);
    }
    if (pbVar22 < pbVar21) {
      do {
        bVar15 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        iVar19 = (*pcStack_dc)(uStack_d8,puStack_c4,bVar15);
        iStack_c8 = iStack_c8 + iVar19;
      } while (pbVar22 < pbVar21);
      bVar16 = *param_4;
    }
    else {
      bVar16 = *param_4;
    }
  }
LAB_00369e54:
  if (bVar16 != 0) {
    param_4 = pbVar24;
  }
  bVar15 = *param_4;
  if (bVar15 == 0) goto LAB_00369e78;
  goto LAB_00369208;
LAB_00369888:
  bVar1 = false;
  goto LAB_003699a8;
switchD_0036925c_caseD_4c:
  bVar1 = true;
  pbVar24 = param_4;
  goto LAB_00369228;
switchD_0036925c_caseD_1:
  if (bVar15 == 0) {
LAB_00369e50:
    bVar16 = 0;
    pbVar24 = param_4 + 1;
    goto LAB_00369e54;
  }
  lVar17 = 1;
  *pbStack_d4 = bVar15;
  bVar1 = true;
  pbVar21 = pbStack_d4 + -1;
  puVar25 = param_5;
LAB_003699a4:
  lVar14 = (long)((int)pbStack_d4 - (int)pbVar21);
  goto LAB_003699a8;
}


// ==== FUN_00369f18 @ 00369f18 ====

undefined4 FUN_00369f18(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00368e58();
  }
  return 1;
}


// ==== FUN_00369f40 @ 00369f40 ====

undefined4 FUN_00369f40(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00368f08();
  }
  return 1;
}


// ==== FUN_00369f68 @ 00369f68 ====

void FUN_00369f68(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  iVar1 = FUN_003691a8(param_1,param_2,*param_3,param_4,&uStack_20);
  *param_3 = *param_3 - iVar1;
  return;
}


// ==== FUN_00369fb8 @ 00369fb8 ====

void FUN_00369fb8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  FUN_003691a8(0x369ec0,auStack_20,param_2,param_3,param_4);
  return;
}


// ==== FUN_00369ff0 @ 00369ff0 ====

void FUN_00369ff0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 auStack_90 [4];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  auStack_90[0] = param_1;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_003691a8(0x369ec0,auStack_90,param_2,param_3,&uStack_28);
  return;
}


// ==== FUN_0036a038 @ 0036a038 ====

void FUN_0036a038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined4 auStack_c0 [4];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  auStack_c0[0] = 0;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  lVar1 = FUN_0036d518();
  FUN_003691a8(0x369f18,auStack_c0,0xffffffffffffffff,param_1,&uStack_38);
  if (lVar1 != 0) {
    FUN_0036d568();
  }
  return;
}


// ==== FUN_0036a0b8 @ 0036a0b8 ====

void FUN_0036a0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined4 auStack_c0 [4];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  auStack_c0[0] = 0;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  lVar1 = FUN_0036d518();
  FUN_003691a8(0x369f40,auStack_c0,0xffffffffffffffff,param_1,&uStack_38);
  if (lVar1 != 0) {
    FUN_0036d568();
  }
  return;
}


// ==== FUN_0036a168 @ 0036a168 ====

undefined4 FUN_0036a168(int param_1)

{
  return *(undefined4 *)(&DAT_00483c80 + param_1 * 4);
}


// ==== FUN_0036a190 @ 0036a190 ====

void FUN_0036a190(void)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  FUN_0036d518();
  if (DAT_003d7168 != 0) {
    FUN_0036d568();
    return;
  }
  DAT_003d7168 = 1;
  puVar2 = &DAT_00483b00;
  DAT_00483ad8 = &DAT_20483a00;
  DAT_00483af4 = &DAT_00483c80;
  DAT_00483adc = &DAT_20483a80;
  DAT_00483ae8 = 0x20;
  DAT_00483ae0 = 0;
  DAT_00483ae4 = &DAT_00483b00;
  DAT_00483aec = 0;
  DAT_00483af0 = 0;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 3;
  } while ((int)puVar2 < 0x483c80);
  iVar6 = 0x1f;
  puVar2 = &DAT_00483cfc;
  do {
    *puVar2 = 0;
    iVar6 = iVar6 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar6);
  DAT_00483b00 = &LAB_0036a158;
  DAT_00483b0c = &LAB_0036a138;
  DAT_00483b10 = &DAT_00483ad8;
  DAT_00483b04 = &DAT_00483ad8;
  FUN_0036d568();
  FlushCache(0);
  uVar1 = REG_DMAC_STAT;
  if ((uVar1 & 0x20) != 0) {
    REG_DMAC_STAT = 0x20;
  }
  uVar1 = REG_DMAC_5_SIF0_CHCR;
  if ((uVar1 & 0x100) == 0) {
    sceSifSetDChain();
  }
  DAT_00483ad4 = AddDmacHandler(5,0x36a6e0,0);
  FUN_003683a0(5);
  lVar3 = sceSifGetReg(0xffffffff80000000);
  DAT_00483ae0 = (undefined4)lVar3;
  if (lVar3 != 0) {
    DAT_00483ad0 = &DAT_00483a00;
    FUN_0036a660(0xffffffff80000000,0x483ac0,0x14,0,0,0);
    return;
  }
  DAT_00483ae0 = 0;
  do {
    uVar4 = sceSifGetReg(4);
  } while ((uVar4 & 0x20000) == 0);
  uVar5 = sceSifGetReg(2);
  DAT_00483ae0 = (undefined4)uVar5;
  sceSifSetReg(0xffffffff80000000,uVar5);
  sceSifSetReg(0xffffffff80000001,0x483ad8);
  DAT_00483ad0 = &DAT_00483a00;
  DAT_00483acc = 0;
  FUN_0036a660(0xffffffff80000002,0x483ac0,0x14,0,0,0);
  return;
}


// ==== FUN_0036a410 @ 0036a410 ====

void FUN_0036a410(void)

{
  FUN_00368338(5);
  RemoveDmacHandler(5,DAT_00483ad4);
  DAT_003d7168 = 0;
  return;
}


// ==== FUN_0036a448 @ 0036a448 ====

undefined4 FUN_0036a448(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00483aec;
  DAT_00483af0 = param_2;
  DAT_00483aec = param_1;
  return uVar1;
}


// ==== FUN_0036a460 @ 0036a460 ====

void FUN_0036a460(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if ((int)param_1 < 0) {
    iVar3 = (param_1 & 0x7fffffff) * 0xc;
    puVar1 = (undefined4 *)(iVar3 + DAT_00483ae4);
    puVar1[1] = param_3;
    *puVar1 = param_2;
    iVar2 = DAT_00483ae4;
  }
  else {
    iVar3 = param_1 * 0xc;
    puVar1 = (undefined4 *)(iVar3 + DAT_00483aec);
    puVar1[1] = param_3;
    *puVar1 = param_2;
    iVar2 = DAT_00483aec;
  }
  *(BADSPACEBASE **)(iVar3 + iVar2 + 8) = register0x000001c0;
  return;
}


// ==== FUN_0036a4d8 @ 0036a4d8 ====

void FUN_0036a4d8(uint param_1)

{
  if ((int)param_1 < 0) {
    *(undefined4 *)((param_1 & 0x7fffffff) * 0xc + DAT_00483ae4) = 0;
    return;
  }
  *(undefined4 *)(param_1 * 0xc + DAT_00483aec) = 0;
  return;
}


// ==== FUN_0036a528 @ 0036a528 ====

undefined8
FUN_0036a528(uint param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5,
            uint param_6,long param_7)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint auStack_80 [8];
  
  if (0x60 < (int)param_4 - 0x10U) {
    return 0;
  }
  iVar4 = 0;
  puVar3 = (uint *)param_3;
  if (param_7 < 1) {
    puVar3[1] = 0;
    *puVar3 = (uint)(byte)*puVar3;
  }
  else {
    auStack_80[2] = (uint)param_7;
    puVar3[1] = param_6;
    iVar4 = 1;
    *puVar3 = (uint)(byte)*puVar3 | auStack_80[2] << 8;
    auStack_80[3] = 0;
    auStack_80[0] = param_5;
    auStack_80[1] = param_6;
    if ((param_2 & 4) != 0) {
      FUN_0036a828();
      iVar2 = 0x10;
      goto LAB_0036a5c8;
    }
  }
  iVar2 = iVar4 << 4;
LAB_0036a5c8:
  *(uint **)((int)auStack_80 + iVar2) = puVar3;
  *(undefined4 *)((int)auStack_80 + iVar2 + 4) = DAT_00483ae0;
  *(int *)((int)auStack_80 + iVar2 + 8) = (int)param_4;
  puVar3[2] = param_1;
  *(byte *)puVar3 = (byte)param_4;
  *(undefined4 *)((int)auStack_80 + iVar2 + 0xc) = 0x44;
  FUN_0036a828(param_3,param_4);
  if ((param_2 & 1) == 0) {
    uVar1 = sceSifSetDma(auStack_80,iVar4 + 1);
  }
  else {
    uVar1 = isceSifSetDma(auStack_80);
  }
  return uVar1;
}


// ==== FUN_0036a660 @ 0036a660 ====

void FUN_0036a660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_0036a528(param_1,0,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ==== FUN_0036a6a0 @ 0036a6a0 ====

void FUN_0036a6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_0036a528(param_1,1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ==== FUN_0036a6e0 @ 0036a6e0 ====

undefined8 FUN_0036a6e0(void)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 auStack_a0 [2];
  uint uStack_98;
  
  pbVar8 = DAT_00483ad8;
  puVar9 = auStack_a0;
  bVar1 = *DAT_00483ad8;
  if (bVar1 == 0) {
    return 0;
  }
  *DAT_00483ad8 = 0;
  for (iVar7 = (int)(bVar1 + 0xf) >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar3 = *(undefined8 *)pbVar8;
    uVar5 = *(undefined4 *)(pbVar8 + 8);
    uVar6 = *(undefined4 *)(pbVar8 + 0xc);
    pbVar8 = pbVar8 + 0x10;
    *puVar9 = (int)uVar3;
    puVar9[1] = (int)((ulong)uVar3 >> 0x20);
    puVar9[2] = uVar5;
    puVar9[3] = uVar6;
    puVar9 = puVar9 + 4;
  }
  isceSifSetDChain();
  if ((int)uStack_98 < 0) {
    if (DAT_00483ae8 <= (int)(uStack_98 & 0x7fffffff)) goto LAB_0036a808;
    iVar7 = (uStack_98 & 0x7fffffff) * 0xc;
    pcVar2 = *(code **)(iVar7 + DAT_00483ae4);
    iVar4 = DAT_00483ae4;
  }
  else {
    if (DAT_00483af0 <= (int)uStack_98) goto LAB_0036a808;
    iVar7 = uStack_98 * 0xc;
    pcVar2 = *(code **)(iVar7 + DAT_00483aec);
    iVar4 = DAT_00483aec;
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(auStack_a0,*(undefined4 *)(iVar7 + iVar4 + 4));
  }
LAB_0036a808:
  SYNC(0);
  EI();
  return 0;
}


// ==== FUN_0036a828 @ 0036a828 ====

/* WARNING: Instruction at (ram,0x0036a87c) overlaps instruction at (ram,0x0036a878)
    */

void FUN_0036a828(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1 & 0xffffffc0;
    uVar3 = (((param_1 + (int)param_2) - 1 & 0xffffffc0) - uVar1 >> 6) + 1;
    uVar2 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    if (uVar2 != 0) {
      do {
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        uVar2 = uVar2 - 1;
        uVar1 = uVar1 + 0x40;
      } while (0 < (int)uVar2);
    }
    if (uVar3 != 0) {
      do {
        uVar3 = uVar3 - 1;
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x40);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x80);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0xc0);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x100);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x140);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x180);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x1c0);
        SYNC(0);
        uVar1 = uVar1 + 0x200;
      } while (0 < (int)uVar3);
    }
  }
  return;
}


// ==== FUN_0036a8d8 @ 0036a8d8 ====

void FUN_0036a8d8(void)

{
  long lVar1;
  
  FUN_0036d518();
  if (DAT_003d716c != 0) {
    FUN_0036d568();
    return;
  }
  DAT_003d716c = 1;
  FUN_0036d568();
  FUN_0036a190();
  FUN_0036d518();
  DAT_00485520 = 0x20;
  DAT_00485500 = 1;
  DAT_00485514 = &DAT_20484500;
  DAT_00485504 = &DAT_20483d00;
  DAT_0048551c = &DAT_20484d00;
  DAT_00485508 = 0x20;
  DAT_0048550c = 0;
  DAT_00485510 = 0;
  DAT_00485518 = 0x20;
  DAT_00485524 = 0;
  FUN_0036a460(0xffffffff80000008,0x36abd8,0x485500);
  FUN_0036a460(0xffffffff80000009,0x36ae50,0x485500);
  FUN_0036a460(0xffffffff8000000a,0x36b070,0x485500);
  FUN_0036a460(0xffffffff8000000c,0x36ace8,0x485500);
  FUN_0036d568();
  lVar1 = sceSifGetReg(0xffffffff80000002);
  if (lVar1 == 0) {
    DAT_00483d4c = 1;
    FUN_0036a660(0xffffffff80000002,0x483d40,0x10,0,0,0);
    do {
      lVar1 = FUN_0036a168(0);
    } while (lVar1 == 0);
    sceSifSetReg(0xffffffff80000002,1);
    return;
  }
  return;
}


// ==== FUN_0036aa78 @ 0036aa78 ====

void FUN_0036aa78(void)

{
  FUN_0036a410();
  DAT_003d716c = 0;
  return;
}


// ==== FUN_0036aaa0 @ 0036aaa0 ====

int FUN_0036aaa0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0036d518();
  iVar1 = 0;
  iVar3 = param_1[1];
  if (0 < param_1[2]) {
    do {
      if ((*(uint *)(iVar3 + 0x10) & 1) == 0) {
        *(uint *)(iVar3 + 0x10) = iVar1 << 0x10 | 5;
        iVar1 = *param_1;
        iVar2 = iVar1 + 1;
        *param_1 = iVar2;
        if (iVar2 == 1) {
          iVar2 = 1;
          *param_1 = iVar1 + 2;
        }
        *(int *)(iVar3 + 0x14) = iVar3;
        *(int *)(iVar3 + 0x18) = iVar2;
        FUN_0036d568();
        return iVar3;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar1 < param_1[2]);
  }
  FUN_0036d568();
  return 0;
}


// ==== FUN_0036ab48 @ 0036ab48 ====

void FUN_0036ab48(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}


// ==== FUN_0036ab68 @ 0036ab68 ====

int FUN_0036ab68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) % *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) {
    trap(7);
  }
  *(int *)(param_1 + 0x24) = iVar1 + 1;
  return *(int *)(param_1 + 0x14) + iVar1 * 0x40;
}


// ==== FUN_0036ab98 @ 0036ab98 ====

int FUN_0036ab98(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x20) <= param_2)) {
    iVar1 = FUN_0036ab68();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 0x40;
  }
  return iVar1;
}


// ==== FUN_0036abd8 @ 0036abd8 ====

void FUN_0036abd8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0x8000000a) {
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar3[7] == 0) {
      iVar2 = puVar3[2];
      goto LAB_0036ac70;
    }
    (*(code *)puVar3[7])(puVar3[8]);
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    if (uVar1 < 0x8000000b) {
      if (uVar1 != 0x80000009) {
        iVar2 = puVar3[2];
        goto LAB_0036ac70;
      }
      puVar3[9] = *(undefined4 *)(param_1 + 0x24);
      puVar3[5] = *(undefined4 *)(param_1 + 0x28);
    }
  }
  iVar2 = puVar3[2];
LAB_0036ac70:
  if (-1 < iVar2) {
    iSignalSema();
  }
  FUN_0036ab48(*puVar3);
  *puVar3 = 0;
  return;
}


// ==== FUN_0036aca8 @ 0036aca8 ====

undefined4 FUN_0036aca8(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 in_a3;
  
  iVar3 = (int)in_a3;
  lVar1 = FUN_0036a6a0(0xffffffff80000008,in_a3,0x40,*(undefined4 *)(iVar3 + 0x24),
                       *(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x2c));
  uVar2 = 0x800;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0036ace8 @ 0036ace8 ====

void FUN_0036ace8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x10) & 4) == 0) {
    uVar2 = FUN_0036ab68(param_2);
  }
  else {
    uVar2 = FUN_0036ab98(param_2,*(uint *)(param_1 + 0x10) >> 0x10);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar4 = (int)uVar2;
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar4 + 0x1c) = uVar1;
  *(undefined4 *)(iVar4 + 0x20) = 0x8000000c;
  *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  lVar3 = FUN_0036a6a0(0xffffffff80000008,uVar2,0x40,*(undefined4 *)(param_1 + 0x20),
                       *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  if (lVar3 == 0) {
    FUN_0036e8c0(0x800,0x36aca8,uVar2);
    return;
  }
  return;
}


// ==== FUN_0036adc0 @ 0036adc0 ====

int * FUN_0036adc0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    piVar2 = *(int **)(iVar3 + 8);
    while( true ) {
      if (piVar2 == (int *)0x0) {
        iVar3 = *(int *)(iVar3 + 0x14);
      }
      else {
        iVar1 = *piVar2;
        while( true ) {
          if (iVar1 == param_1) {
            return piVar2;
          }
          piVar2 = (int *)piVar2[0xe];
          if (piVar2 == (int *)0x0) break;
          iVar1 = *piVar2;
        }
        iVar3 = *(int *)(iVar3 + 0x14);
      }
      if (iVar3 == 0) break;
      piVar2 = *(int **)(iVar3 + 8);
    }
  }
  return (int *)0x0;
}


// ==== FUN_0036ae10 @ 0036ae10 ====

undefined4 FUN_0036ae10(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 in_a3;
  
  lVar1 = FUN_0036a6a0(0xffffffff80000008,in_a3,0x40,0,0,0);
  uVar2 = 0x800;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0036ae50 @ 0036ae50 ====

void FUN_0036ae50(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = FUN_0036ab68(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = (int)uVar2;
  *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
  *(undefined4 *)(iVar4 + 0x20) = 0x80000009;
  lVar3 = FUN_0036adc0(*(undefined4 *)(param_1 + 0x20),param_2);
  if (lVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(undefined4 *)(iVar4 + 0x28) = 0;
  }
  else {
    *(int *)(iVar4 + 0x24) = (int)lVar3;
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)((int)lVar3 + 8);
  }
  lVar3 = FUN_0036a6a0(0xffffffff80000008,uVar2,0x40,0,0,0);
  if (lVar3 == 0) {
    FUN_0036e8c0(0x800,0x36ae10,uVar2);
    return;
  }
  return;
}


// ==== FUN_0036af20 @ 0036af20 ====

/* Strings referenciadas:
     "SceSifrpcBind" */

undefined4 FUN_0036af20(int *param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *pcStack_5c;
  
  param_1[4] = 0;
  param_1[9] = 0;
  lVar3 = FUN_0036aaa0(0x485500);
  uVar2 = 0xffffffff;
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    iVar1 = *(int *)(iVar5 + 0x18);
    *param_1 = iVar5;
    param_1[1] = iVar1;
    *(undefined4 *)(iVar5 + 0x20) = param_2;
    *(int *)(iVar5 + 0x14) = iVar5;
    *(int **)(iVar5 + 0x1c) = param_1;
    if ((param_3 & 1) == 0) {
      uStack_6c = 1;
      pcStack_5c = "SceSifrpcBind";
      uStack_68 = 0;
      lVar4 = CreateSema(auStack_70);
      param_1[2] = (int)lVar4;
      if (lVar4 < 0) {
        FUN_0036ab48(lVar3);
        uVar2 = 0xfffffffd;
      }
      else {
        lVar4 = FUN_0036a660(0xffffffff80000009,lVar3,0x40,0,0,0);
        if (lVar4 == 0) {
          FUN_0036ab48(lVar3);
          DeleteSema(param_1[2]);
          uVar2 = 0xfffffffe;
        }
        else {
          WaitSema(param_1[2]);
          DeleteSema(param_1[2]);
          uVar2 = 0;
        }
      }
    }
    else {
      param_1[2] = -1;
      lVar4 = FUN_0036a660(0xffffffff80000009,lVar3,0x40,0,0,0);
      uVar2 = 0;
      if (lVar4 == 0) {
        FUN_0036ab48(lVar3);
        uVar2 = 0xfffffffe;
      }
    }
  }
  return uVar2;
}


// ==== FUN_0036b100 @ 0036b100 ====

/* Strings referenciadas:
     "SceSifrpcCall" */

undefined4
FUN_0036b100(int *param_1,undefined4 param_2,ulong param_3,long param_4,long param_5,long param_6,
            long param_7,long param_8,int param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  char *pcStack_ac;
  
  lVar2 = FUN_0036aaa0(0x485500);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  iVar4 = (int)lVar2;
  iVar1 = *(int *)(iVar4 + 0x18);
  param_1[8] = param_9;
  param_1[1] = iVar1;
  *param_1 = iVar4;
  param_1[7] = (int)param_8;
  param_1[6] = (int)register0x000001c0;
  *(undefined4 *)(iVar4 + 0x20) = param_2;
  *(int *)(iVar4 + 0x24) = (int)param_5;
  *(int *)(iVar4 + 0x28) = (int)param_6;
  *(int *)(iVar4 + 0x2c) = (int)param_7;
  *(int *)(iVar4 + 0x14) = iVar4;
  iVar1 = param_1[9];
  *(int **)(iVar4 + 0x1c) = param_1;
  *(int *)(iVar4 + 0x34) = iVar1;
  if ((param_3 & 2) == 0) {
    if (param_4 == param_6) {
      if (param_7 <= param_5) {
        param_7 = param_5;
      }
      FUN_0036a828(param_4,param_7);
    }
    else {
      if (0 < param_5) {
        FUN_0036a828(param_4,param_5);
      }
      if (0 < param_7) {
        FUN_0036a828(param_6,param_7);
      }
    }
  }
  if ((param_3 & 1) == 0) {
    uStack_b8 = 0;
    pcStack_ac = "SceSifrpcCall";
    uStack_bc = 1;
    lVar3 = CreateSema(auStack_c0);
    param_1[2] = (int)lVar3;
    if (lVar3 < 0) {
      FUN_0036ab48(lVar2);
      return 0xfffffffd;
    }
    *(undefined4 *)(iVar4 + 0x30) = 1;
    lVar3 = FUN_0036a660(0xffffffff8000000a,lVar2,0x40,param_4,param_1[5],param_5);
    if (lVar3 != 0) {
      WaitSema(param_1[2]);
      DeleteSema(param_1[2]);
      return 0;
    }
    DeleteSema(param_1[2]);
  }
  else {
    if (param_8 == 0) {
      *(undefined4 *)(iVar4 + 0x30) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x30) = 1;
    }
    param_1[2] = -1;
    lVar3 = FUN_0036a660(0xffffffff8000000a,lVar2,0x40,param_4,param_1[5],param_5);
    if (lVar3 != 0) {
      return 0;
    }
  }
  FUN_0036ab48(lVar2);
  return 0xfffffffe;
}


// ==== FUN_0036b300 @ 0036b300 ====

undefined4 FUN_0036b300(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 != 0) && (param_1[1] == *(int *)(iVar1 + 0x18))) &&
     ((*(uint *)(iVar1 + 0x10) & 1) != 0)) {
    return 1;
  }
  return 0;
}


// ==== FUN_0036b358 @ 0036b358 ====

/* Strings referenciadas:
     "SceStdioIobSema"
     "SceStdioQueSema" */

void FUN_0036b358(void)

{
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_2c;
  
  if (DAT_003d7200 == -1) {
    uStack_3c = 1;
    pcStack_2c = "SceStdioIobSema";
    uStack_38 = 1;
    DAT_003d7200 = CreateSema(auStack_40);
    pcStack_2c = "SceStdioQueSema";
    DAT_003d7204 = CreateSema(auStack_40);
  }
  return;
}


// ==== FUN_0036b3d0 @ 0036b3d0 ====

uint FUN_0036b3d0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0036b358();
  WaitSema(DAT_003d7200);
  uVar1 = DAT_003d7200;
  uVar3 = 0x486a80;
  iVar2 = DAT_00486a84;
  while( true ) {
    if (iVar2 == 0) {
      *(undefined4 *)(uVar3 + 4) = 0x10000000;
      SignalSema(uVar1);
      return uVar3;
    }
    if (0x486c7f < uVar3 + 0x10) break;
    iVar2 = *(int *)(uVar3 + 0x14);
    uVar3 = uVar3 + 0x10;
  }
  SignalSema(DAT_003d7200);
  return 0;
}


// ==== FUN_0036b458 @ 0036b458 ====

int FUN_0036b458(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  while( true ) {
    iVar1 = FUN_0036b100(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    iVar1 = -(iVar1 >> 0x1f);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_10 != 0) break;
    FUN_00368670(iVar2 * 1000);
    if (iVar2 < 0x7f) {
      iVar2 = iVar2 << 1;
    }
    iVar3 = iVar3 + 1;
    if (100 < iVar3) {
      return iVar1;
    }
  }
  return iVar1;
}


// ==== FUN_0036b548 @ 0036b548 ====

int FUN_0036b548(ulong param_1)

{
  int iVar1;
  
  FUN_0036b358();
  WaitSema(DAT_003d7200);
  if (param_1 < 0x20) {
    iVar1 = (int)param_1 * 0x10 + 0x486a80;
    SignalSema(DAT_003d7200);
  }
  else {
    SignalSema(DAT_003d7200);
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_0036b5b8 @ 0036b5b8 ====

void FUN_0036b5b8(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  int *piVar13;
  
  DAT_003d71f0 = 0;
  if (DAT_003d71f8 != 0) {
    DAT_003d71f0 = *(int *)(param_1 + 0xc);
  }
  piVar13 = (int *)((uint)(&DAT_00486200 + DAT_003d71f0 * 0x440) | 0x20000000);
  iVar1 = *piVar13;
  iVar11 = piVar13[1];
  piVar4 = (int *)piVar13[2];
  if (-1 < iVar1) {
    memcpy(piVar4,piVar13 + 4,piVar13[3]);
  }
  switch(iVar11) {
  case 2:
    if (0 < piVar13[5]) {
      uVar10 = piVar13[7];
      iVar11 = 0;
      if (0 < piVar13[5]) {
        piVar4 = piVar13 + 9;
        do {
          puVar8 = (undefined1 *)((uVar10 | 0x20000000) + iVar11);
          iVar3 = *piVar4;
          puVar5 = (undefined1 *)(uVar10 + iVar11);
          iVar11 = iVar11 + 1;
          *puVar8 = (char)iVar3;
          *puVar5 = (char)iVar3;
          piVar4 = (int *)((int)(piVar13 + 9) + iVar11);
        } while (iVar11 < piVar13[5]);
      }
    }
    if (0 < piVar13[6]) {
      uVar10 = piVar13[8];
      iVar11 = 0;
      if (0 < piVar13[6]) {
        piVar4 = piVar13 + 0x19;
        do {
          puVar8 = (undefined1 *)((uVar10 | 0x20000000) + iVar11);
          iVar3 = *piVar4;
          puVar5 = (undefined1 *)(uVar10 + iVar11);
          iVar11 = iVar11 + 1;
          *puVar8 = (char)iVar3;
          *puVar5 = (char)iVar3;
          piVar4 = (int *)((int)(piVar13 + 0x19) + iVar11);
        } while (iVar11 < piVar13[6]);
        goto LAB_0036b8ec;
      }
    }
    break;
  case 0xb:
    if (*piVar4 < 1) goto LAB_0036b8ec;
    piVar4 = (int *)piVar13[5];
    piVar6 = piVar13 + 6;
    if (((uint)piVar4 & 7) == 0) {
      do {
        uVar7 = *(undefined8 *)(piVar6 + 2);
        uVar9 = *(undefined8 *)(piVar6 + 4);
        uVar12 = *(undefined8 *)(piVar6 + 6);
        *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
        *(undefined8 *)(piVar4 + 2) = uVar7;
        *(undefined8 *)(piVar4 + 4) = uVar9;
        *(undefined8 *)(piVar4 + 6) = uVar12;
        piVar6 = piVar6 + 8;
        piVar4 = piVar4 + 8;
      } while (piVar6 != piVar13 + 0x56);
    }
    else {
      do {
        uVar7 = *(undefined8 *)(piVar6 + 2);
        uVar9 = *(undefined8 *)(piVar6 + 4);
        uVar12 = *(undefined8 *)(piVar6 + 6);
        *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
        *(undefined8 *)(piVar4 + 2) = uVar7;
        *(undefined8 *)(piVar4 + 4) = uVar9;
        *(undefined8 *)(piVar4 + 6) = uVar12;
        piVar6 = piVar6 + 8;
        piVar4 = piVar4 + 8;
      } while (piVar6 != piVar13 + 0x56);
    }
    *piVar4 = *piVar6;
    break;
  case 0xc:
    puVar2 = (undefined8 *)piVar13[5];
    uVar7 = *(undefined8 *)(piVar13 + 8);
    uVar9 = *(undefined8 *)(piVar13 + 10);
    uVar12 = *(undefined8 *)(piVar13 + 0xc);
    *puVar2 = *(undefined8 *)(piVar13 + 6);
    puVar2[1] = uVar7;
    puVar2[2] = uVar9;
    puVar2[3] = uVar12;
    uVar7 = *(undefined8 *)(piVar13 + 0x10);
    uVar9 = *(undefined8 *)(piVar13 + 0x12);
    uVar12 = *(undefined8 *)(piVar13 + 0x14);
    puVar2[4] = *(undefined8 *)(piVar13 + 0xe);
    puVar2[5] = uVar7;
    puVar2[6] = uVar9;
    puVar2[7] = uVar12;
    goto LAB_0036b8ec;
  case 0x17:
  case 0x19:
  case 0x1a:
    uVar10 = piVar13[6];
    if (0x400 < uVar10) {
      uVar10 = 0x400;
    }
    memcpy(piVar13[5],piVar13 + 7,uVar10);
  }
LAB_0036b8ec:
  if (iVar1 < 0) {
    if (DAT_003d7170 == -iVar1) {
      DAT_003d7170 = -1;
    }
    else {
      iVar11 = 1;
      do {
        if (0x1f < iVar11) {
          return;
        }
        piVar4 = &DAT_003d7170 + iVar11;
        iVar11 = iVar11 + 1;
      } while (*piVar4 != -iVar1);
      *piVar4 = -1;
    }
  }
  else {
    iSignalSema();
  }
  return;
}


// ==== FUN_0036b970 @ 0036b970 ====

/* Strings referenciadas:
     "SceStdioFioSema" */

void FUN_0036b970(void)

{
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_2c;
  
  if (DAT_003d71fc == -1) {
    uStack_3c = 1;
    pcStack_2c = "SceStdioFioSema";
    uStack_38 = 1;
    DAT_003d71fc = CreateSema(auStack_40);
  }
  return;
}


// ==== FUN_0036b9c8 @ 0036b9c8 ====

undefined8 FUN_0036b9c8(void)

{
  FUN_0036b970();
  WaitSema(DAT_003d71fc);
  return 0;
}


// ==== FUN_0036b9f8 @ 0036b9f8 ====

void FUN_0036b9f8(void)

{
  SignalSema(DAT_003d71fc);
  return;
}


// ==== FUN_0036ba50 @ 0036ba50 ====

/* WARNING: Removing unreachable block (ram,0x0036bb7c) */

undefined4 FUN_0036ba50(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_0036a8d8(0);
  DAT_00486d00 = 0;
  DAT_00486d04 = 0;
  lVar3 = FUN_0036d518();
  FUN_0036a460(0xffffffff80000011,0x36b5b8,0x486cc0);
  FUN_0036a460(0xffffffff80000013,0x36ba08,0x486d00);
  if (lVar3 != 0) {
    FUN_0036d568();
  }
  while( true ) {
    lVar3 = FUN_0036af20(0x486c80,0xffffffff80000001,0);
    if (lVar3 < 0) {
      return 0xffffffea;
    }
    iVar1 = 0x100000;
    if (DAT_00486ca4 != 0) break;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  FUN_0036b358();
  WaitSema(DAT_003d7200);
  puVar4 = (undefined *)0x486a80;
  do {
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar4 = puVar4 + 0x10;
  } while (puVar4 < &DAT_00486c80);
  SignalSema(DAT_003d7200);
  DAT_00485540 = &DAT_00486200;
  DAT_00485544 = &DAT_00486640;
  lVar3 = FUN_0036b458(0x486c80,0xff,0,0x485540,8,0x4861c0,8,0);
  if (lVar3 < 0) {
    uVar2 = 0xfffeffff;
  }
  else {
    DAT_00486ca8 = DAT_204861c0;
    DAT_003d71f4 = 1;
    uVar2 = 0;
    DAT_003d71f8 = (uint)(DAT_204861c4 == 2);
  }
  return uVar2;
}


// ==== FUN_0036bc58 @ 0036bc58 ====

bool FUN_0036bc58(void)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  lVar1 = FUN_0035c4b0(0x486ca8,0x3d7154,4);
  if (lVar1 != 0) {
    lVar1 = FUN_0035c4b0(0x486ca8,PTR_DAT_003d7208,4);
    if (lVar1 != 0) {
      lVar1 = FUN_0035c4b0(0x3d7154,PTR_DAT_003d7208,4);
      bVar2 = lVar1 != 0;
    }
  }
  return bVar2;
}


// ==== FUN_0036bce8 @ 0036bce8 ====

undefined8 FUN_0036bce8(void)

{
  DAT_003d71f4 = 0;
  memset(0x486ca8,0,4);
  return 0;
}


// ==== FUN_0036bd20 @ 0036bd20 ====

/* Strings referenciadas:
     "SceStdioOpenSema" */

int FUN_0036bd20(char *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_140 [4];
  undefined4 uStack_13c;
  undefined4 uStack_138;
  char *pcStack_12c;
  int aiStack_120 [4];
  
  FUN_0036b9c8(0);
  if (DAT_003d71f4 == 0) {
    FUN_0036ba50();
  }
  lVar4 = FUN_0036bc58();
  if (lVar4 == 0) {
    lVar4 = FUN_0036b3d0();
    if (lVar4 == 0) {
      FUN_0036b9f8();
      iVar6 = -0x13;
    }
    else {
      DAT_00485594._0_1_ = *param_1;
      iVar6 = 0;
      if ((char)DAT_00485594 != '\0') {
        for (iVar6 = 1;
            (iVar6 < 0x400 &&
            (cVar1 = param_1[iVar6], *(char *)((int)&DAT_00485594 + iVar6) = cVar1, cVar1 != '\0'));
            iVar6 = iVar6 + 1) {
        }
      }
      if (iVar6 == 0x400) {
        DAT_00485993 = 0;
      }
      piVar7 = (int *)lVar4;
      iVar6 = (int)(piVar7 + -0x121aa0) >> 4;
      DAT_0048558c = param_2 & 0x7fffffff;
      uStack_13c = 1;
      pcStack_12c = "SceStdioOpenSema";
      uStack_138 = 0;
      DAT_00485590 = param_3;
      DAT_00485994 = iVar6;
      uVar5 = CreateSema(auStack_140);
      DAT_00485580 = (undefined4)uVar5;
      DAT_00485588 = 4;
      DAT_00485584 = aiStack_120;
      lVar4 = FUN_0036b458(0x486c80,0,0,0x485580,0x418,0x4861c0,4,0);
      iVar3 = DAT_204861c0;
      if (lVar4 < 0) {
        DeleteSema(uVar5);
        FUN_0036b9f8();
        iVar6 = -0xb;
      }
      else {
        FUN_0036b9f8();
        if (iVar3 == 0) {
          DeleteSema(uVar5);
          iVar6 = -0xb;
        }
        else {
          WaitSema(uVar5);
          DeleteSema(uVar5);
          if (aiStack_120[0] < 0) {
            WaitSema(DAT_003d7200);
            piVar7[1] = 0;
            SignalSema(DAT_003d7200);
            iVar6 = aiStack_120[0];
          }
          else {
            WaitSema(DAT_003d7200);
            uVar2 = DAT_003d7200;
            piVar7[1] = piVar7[1] | param_2;
            *piVar7 = aiStack_120[0];
            SignalSema(uVar2);
          }
        }
      }
    }
  }
  else {
    FUN_0036b9f8();
    iVar6 = -0x10004;
  }
  return iVar6;
}


// ==== FUN_0036bfb0 @ 0036bfb0 ====

/* Strings referenciadas:
     "SceStdioCloseSema" */

int FUN_0036bfb0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  char *pcStack_7c;
  int aiStack_70 [4];
  
  lVar2 = FUN_0036b548();
  FUN_0036b9c8(1);
  if (((DAT_003d71f4 == 0) || (lVar2 == 0)) || (puVar4 = (undefined4 *)lVar2, puVar4[1] == 0)) {
    FUN_0036b9f8();
    aiStack_70[0] = -9;
  }
  else {
    DAT_0048558c = *puVar4;
    DAT_00485590 = (int)(puVar4 + -0x121aa0) >> 4;
    uStack_8c = 1;
    pcStack_7c = "SceStdioCloseSema";
    uStack_88 = 0;
    uVar3 = CreateSema(auStack_90);
    DAT_00485584 = aiStack_70;
    DAT_00485580 = (undefined4)uVar3;
    DAT_00485588 = 4;
    lVar2 = FUN_0036b458(0x486c80,1,0,0x485580,0x14,0x4861c0,4,0);
    if (lVar2 < 0) {
      DeleteSema(uVar3);
      FUN_0036b9f8();
      aiStack_70[0] = -0xb;
    }
    else {
      puVar4[1] = 0;
      iVar1 = DAT_204861c0;
      FUN_0036b9f8();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        aiStack_70[0] = -0xb;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
        if (-1 < aiStack_70[0]) {
          aiStack_70[0] = 0;
        }
      }
    }
  }
  return aiStack_70[0];
}


// ==== FUN_0036c128 @ 0036c128 ====

/* Strings referenciadas:
     "SceStdioLseekSema" */

undefined4 FUN_0036c128(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  char *pcStack_9c;
  undefined4 auStack_90 [4];
  
  lVar1 = FUN_0036b548();
  FUN_0036b9c8(4);
  if ((DAT_003d71f4 != 0) && (lVar1 != 0)) {
    puVar5 = (undefined4 *)lVar1;
    if (puVar5[1] != 0) {
      DAT_0048558c = *puVar5;
      DAT_00485598 = (int)(puVar5 + -0x121aa0) >> 4;
      uStack_ac = 1;
      pcStack_9c = "SceStdioLseekSema";
      uVar6 = puVar5[1] & 0x8000;
      uStack_a8 = 0;
      DAT_00485590 = param_2;
      DAT_00485594 = param_3;
      uVar2 = CreateSema(auStack_b0);
      DAT_00485584 = auStack_90;
      DAT_00485588 = 4;
      DAT_00485580 = (int)uVar2;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        WaitSema(DAT_003d7204);
        if (DAT_003d7170 == -1) {
          DAT_003d7170 = DAT_00485580;
          DAT_00485580 = -DAT_00485580;
        }
        else {
          iVar4 = 1;
          do {
            if (0x1f < iVar4) goto LAB_0036c280;
            piVar3 = &DAT_003d7170 + iVar4;
            iVar4 = iVar4 + 1;
          } while (*piVar3 != -1);
          *piVar3 = DAT_00485580;
          DAT_00485580 = -DAT_00485580;
        }
LAB_0036c280:
        SignalSema(DAT_003d7204);
      }
      lVar1 = FUN_0036b458(0x486c80,4,0,0x485580,0x1c,0x4861c0,4,0);
      iVar4 = DAT_204861c0;
      if (lVar1 < 0) {
        DeleteSema(uVar2);
        FUN_0036b9f8();
        return 0xfffffff5;
      }
      FUN_0036b9f8();
      if (iVar4 == 0) {
        DeleteSema(uVar2);
        return 0xfffffff5;
      }
      if (uVar6 != 0) {
        DeleteSema(uVar2);
        return 0;
      }
      WaitSema(uVar2);
      DeleteSema(uVar2);
      return auStack_90[0];
    }
  }
  FUN_0036b9f8();
  return 0xfffffff7;
}


// ==== FUN_0036c368 @ 0036c368 ====

/* Strings referenciadas:
     "SceStdioReadSema" */

undefined4 FUN_0036c368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  char *pcStack_bc;
  undefined4 auStack_b0 [4];
  
  lVar2 = FUN_0036b548();
  FUN_0036b9c8(2);
  if ((DAT_003d71f4 != 0) && (lVar2 != 0)) {
    puVar6 = (undefined4 *)lVar2;
    uVar1 = puVar6[1];
    if (uVar1 != 0) {
      DAT_0048558c = *puVar6;
      DAT_0048559c = (int)(puVar6 + -0x121aa0) >> 4;
      uStack_cc = 1;
      pcStack_bc = "SceStdioReadSema";
      uVar7 = uVar1 & 0x8000;
      DAT_00485590 = (undefined4)param_2;
      DAT_00485594 = (undefined4)param_3;
      uStack_c8 = 0;
      uVar3 = CreateSema(auStack_d0);
      DAT_00485584 = auStack_b0;
      DAT_00485588 = 4;
      DAT_00485580 = (int)uVar3;
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        WaitSema(DAT_003d7204);
        if (DAT_003d7170 == -1) {
          DAT_003d7170 = DAT_00485580;
          DAT_00485580 = -DAT_00485580;
        }
        else {
          iVar5 = 1;
          do {
            if (0x1f < iVar5) goto LAB_0036c4c4;
            piVar4 = &DAT_003d7170 + iVar5;
            iVar5 = iVar5 + 1;
          } while (*piVar4 != -1);
          *piVar4 = DAT_00485580;
          DAT_00485580 = -DAT_00485580;
        }
LAB_0036c4c4:
        SignalSema(DAT_003d7204);
      }
      if ((uVar1 & 0x20000000) == 0) {
        FUN_0036a828(param_2,param_3);
      }
      FUN_0036a828(0x485580,0x20);
      lVar2 = FUN_0036b458(0x486c80,2,0,0x485580,0x20,0x4861c0,4,0);
      iVar5 = DAT_204861c0;
      if (lVar2 < 0) {
        DeleteSema(uVar3);
        FUN_0036b9f8();
        return 0xfffffff5;
      }
      FUN_0036b9f8();
      if (iVar5 == 0) {
        DeleteSema(uVar3);
        return 0xfffffff5;
      }
      if (uVar7 != 0) {
        DeleteSema(uVar3);
        return 0;
      }
      WaitSema(uVar3);
      DeleteSema(uVar3);
      return auStack_b0[0];
    }
  }
  FUN_0036b9f8();
  return 0xfffffff7;
}


// ==== FUN_0036c5d8 @ 0036c5d8 ====

/* Strings referenciadas:
     "SceStdioWriteSema" */

undefined4 FUN_0036c5d8(undefined8 param_1,ulong param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  char *pcStack_bc;
  undefined4 auStack_b0 [4];
  
  lVar3 = FUN_0036b548();
  FUN_0036b9c8(3);
  if ((DAT_003d71f4 != 0) && (lVar3 != 0)) {
    puVar8 = (undefined4 *)lVar3;
    uVar1 = puVar8[1];
    if (uVar1 != 0) {
      DAT_0048558c = *puVar8;
      DAT_004855ac = (int)(puVar8 + -0x121aa0) >> 4;
      uStack_cc = 1;
      pcStack_bc = "SceStdioWriteSema";
      uVar9 = uVar1 & 0x8000;
      uVar11 = (uint)param_2;
      uStack_c8 = 0;
      DAT_00485590 = uVar11;
      DAT_00485594 = param_3;
      uVar4 = CreateSema(auStack_d0);
      DAT_00485584 = auStack_b0;
      DAT_00485588 = 4;
      DAT_00485580 = (int)uVar4;
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        WaitSema(DAT_003d7204);
        if (DAT_003d7170 == -1) {
          DAT_003d7170 = DAT_00485580;
          DAT_00485580 = -DAT_00485580;
        }
        else {
          iVar10 = 1;
          do {
            if (0x1f < iVar10) goto LAB_0036c734;
            piVar6 = &DAT_003d7170 + iVar10;
            iVar10 = iVar10 + 1;
          } while (*piVar6 != -1);
          *piVar6 = DAT_00485580;
          DAT_00485580 = -DAT_00485580;
        }
LAB_0036c734:
        SignalSema(DAT_003d7204);
      }
      if ((param_2 & 0xf) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (uVar11 & 0xfffffff0) - (uVar11 - 0x10);
      }
      if (param_3 < iVar10) {
        iVar10 = param_3;
      }
      if ((uVar1 & 0x20000000) == 0) {
        FUN_0036a828(param_2,param_3);
      }
      iVar7 = 0;
      DAT_00485598 = iVar10;
      if (0 < iVar10) {
        do {
          puVar2 = (undefined1 *)((uVar11 | 0x20000000) + iVar7);
          puVar5 = (undefined1 *)((int)&DAT_0048559c + iVar7);
          iVar7 = iVar7 + 1;
          *puVar5 = *puVar2;
        } while (iVar7 < iVar10);
      }
      lVar3 = FUN_0036b458(0x486c80,3,0,0x485580,0x30,0x4861c0,4,0);
      iVar10 = DAT_204861c0;
      if (lVar3 < 0) {
        DeleteSema(uVar4);
        FUN_0036b9f8();
        return 0xfffffff5;
      }
      FUN_0036b9f8();
      if (iVar10 == 0) {
        DeleteSema(uVar4);
        return 0xfffffff5;
      }
      if (uVar9 != 0) {
        DeleteSema(uVar4);
        return 0;
      }
      WaitSema(uVar4);
      DeleteSema(uVar4);
      return auStack_b0[0];
    }
  }
  FUN_0036b9f8();
  return 0xfffffff7;
}


// ==== FUN_0036c898 @ 0036c898 ====

/* Strings referenciadas:
     "SceStdioIoctlSema" */

undefined4 FUN_0036c898(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  char *pcStack_9c;
  undefined4 auStack_90 [4];
  
  lVar2 = FUN_0036b548();
  FUN_0036b9c8(5);
  DAT_00485548 = param_3;
  if (DAT_003d71f4 == 0) {
    FUN_0036ba50();
  }
  if ((lVar2 == 0) || (puVar9 = (undefined4 *)lVar2, puVar9[1] == 0)) {
    FUN_0036b9f8();
    return 0xfffffff7;
  }
  DAT_00485994 = 0;
  DAT_00485998 = 0;
  if (param_2 == 2) {
    *(undefined4 *)param_3 = *(undefined4 *)(DAT_003d71f0 * 0x440 + 0x486210U | 0x20000000);
  }
  else if (param_2 < 3) {
    if (param_2 != 1) {
      DAT_0048558c = *puVar9;
LAB_0036ca38:
      DAT_00485590 = (undefined4)param_2;
      if (param_3 == (undefined8 *)0x0) {
        DAT_0048599c = 0;
      }
      else {
        puVar6 = (undefined8 *)&DAT_00485594;
        DAT_0048599c = 0x400;
        if ((((uint)param_3 | 0x485594) & 7) == 0) {
          puVar1 = param_3 + 0x80;
          do {
            uVar3 = param_3[1];
            uVar7 = param_3[2];
            uVar8 = param_3[3];
            *puVar6 = *param_3;
            puVar6[1] = uVar3;
            puVar6[2] = uVar7;
            puVar6[3] = uVar8;
            param_3 = param_3 + 4;
            puVar6 = puVar6 + 4;
          } while (param_3 != puVar1);
        }
        else {
          puVar1 = param_3 + 0x80;
          do {
            uVar3 = param_3[1];
            uVar7 = param_3[2];
            uVar8 = param_3[3];
            *puVar6 = *param_3;
            puVar6[1] = uVar3;
            puVar6[2] = uVar7;
            puVar6[3] = uVar8;
            param_3 = param_3 + 4;
            puVar6 = puVar6 + 4;
          } while (param_3 != puVar1);
        }
      }
      uStack_ac = 1;
      pcStack_9c = "SceStdioIoctlSema";
      uStack_a8 = 0;
      uVar3 = CreateSema(auStack_b0);
      DAT_00485588 = 4;
      DAT_00485580 = (undefined4)uVar3;
      DAT_00485584 = auStack_90;
      FUN_0036a828(0x485580,0x420);
      lVar2 = FUN_0036b458(0x486c80,5,0,0x485580,0x420,0x4861c0,4,0);
      iVar5 = DAT_204861c0;
      if (lVar2 < 0) {
        DeleteSema(uVar3);
        FUN_0036b9f8();
        return 0xfffffff5;
      }
      FUN_0036b9f8();
      if (iVar5 == 0) {
        DeleteSema(uVar3);
        return 0xfffffff5;
      }
      WaitSema(uVar3);
      DeleteSema(uVar3);
      return auStack_90[0];
    }
    WaitSema(DAT_003d7204);
    iVar5 = 0;
    if (DAT_003d7170 == -1) {
      piVar4 = &DAT_003d7170;
      iVar5 = 1;
      while ((piVar4 = piVar4 + 1, iVar5 < 0x20 && (*piVar4 == -1))) {
        iVar5 = iVar5 + 1;
      }
    }
    if (iVar5 == 0x20) {
      *(undefined4 *)DAT_00485548 = 0;
    }
    else {
      *(undefined4 *)DAT_00485548 = 1;
    }
    SignalSema(DAT_003d7204);
  }
  else {
    if (param_2 != 3) {
      DAT_0048558c = *puVar9;
      goto LAB_0036ca38;
    }
    *param_3 = *(undefined8 *)(DAT_003d71f0 * 0x440 + 0x486210U | 0x20000000);
  }
  FUN_0036b9f8();
  return 0;
}


// ==== FUN_0036cc80 @ 0036cc80 ====

undefined4 FUN_0036cc80(void)

{
  int iVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = FUN_0036af20(0x486d80,0xffffffff80000003,0);
    if (lVar2 < 0) {
      return 0xffffffff;
    }
    if (DAT_00486da4 != 0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  DAT_003d720c = 0;
  return 0;
}


// ==== FUN_0036cd08 @ 0036cd08 ====

undefined4 FUN_0036cd08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (-1 < DAT_003d720c) {
    DAT_00486e00 = param_2;
    DAT_00486e04 = param_1;
    DAT_00486e08 = param_3;
    lVar2 = FUN_0036b100(0x486d80,4,0,0x486e00,0xc,0x486dc0,4,0);
    uVar1 = DAT_00486dc0;
    if (lVar2 < 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_0036cd88 @ 0036cd88 ====

undefined4 FUN_0036cd88(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_003d720c < 0) {
    uVar1 = 0;
  }
  else {
    DAT_00486e00 = param_1;
    lVar2 = FUN_0036b100(0x486d80,2,0,0x486e00,4,0x486dc0,4,0);
    uVar1 = DAT_00486dc0;
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


// ==== FUN_0036ce18 @ 0036ce18 ====

undefined4 FUN_0036ce18(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if (DAT_003d7210 < 0) {
    while (lVar3 = FUN_0036af20(0x487140,0xffffffff80000006,0), -1 < lVar3) {
      if (DAT_00487164 != 0) {
        DAT_003d7210 = 0;
        lVar3 = FUN_0036b100(0x487140,0xff,0,0,0,0x486f40,4,0);
        if (lVar3 < 0) {
          return 0xfffeffff;
        }
        DAT_00487168 = DAT_00486f40;
        return 0;
      }
      iVar2 = 0x100000;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0036cf18 @ 0036cf18 ====

bool FUN_0036cf18(void)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  lVar1 = FUN_0035c4b0(0x487168,0x3d7154,4);
  if (lVar1 != 0) {
    lVar1 = FUN_0035c4b0(0x487168,PTR_DAT_003d7214,4);
    if (lVar1 != 0) {
      lVar1 = FUN_0035c4b0(0x3d7154,PTR_DAT_003d7214,4);
      bVar2 = lVar1 != 0;
    }
  }
  return bVar2;
}


// ==== FUN_0036cfa8 @ 0036cfa8 ====

undefined8 FUN_0036cfa8(void)

{
  DAT_003d7210 = 0xffffffff;
  memset(0x487168,0,4);
  return 0;
}


// ==== FUN_0036cff0 @ 0036cff0 ====

undefined4
FUN_0036cff0(undefined8 param_1,long param_2,undefined8 *param_3,undefined4 *param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = FUN_0036ce18();
  uVar1 = 0xffff0000;
  if (-1 < lVar3) {
    lVar3 = FUN_0036cf18();
    if (lVar3 == 0) {
      FUN_0035d1a0(0x486f48,param_1,0xfc);
      DAT_00487043 = 0;
      if (param_3 == (undefined8 *)0x0) {
        DAT_00487044 = 0;
        DAT_00486f40 = 0;
      }
      else if (param_2 < 0xfd) {
        memcpy(0x487044,param_3,param_2);
        DAT_00486f40 = (undefined4)param_2;
      }
      else {
        puVar4 = (undefined8 *)&DAT_00487044;
        if ((((uint)param_3 | 0x487044) & 7) == 0) {
          puVar2 = param_3 + 0x1c;
          do {
            uVar5 = param_3[1];
            uVar6 = param_3[2];
            uVar7 = param_3[3];
            *puVar4 = *param_3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            param_3 = param_3 + 4;
            puVar4 = puVar4 + 4;
          } while (param_3 != puVar2);
        }
        else {
          puVar2 = param_3 + 0x1c;
          do {
            uVar5 = param_3[1];
            uVar6 = param_3[2];
            uVar7 = param_3[3];
            *puVar4 = *param_3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            param_3 = param_3 + 4;
            puVar4 = puVar4 + 4;
          } while (param_3 != puVar2);
        }
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar1 = *(undefined4 *)(param_3 + 3);
        *puVar4 = *param_3;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        *(undefined4 *)(puVar4 + 3) = uVar1;
        DAT_00486f40 = 0xfc;
      }
      lVar3 = FUN_0036b100(0x487140,param_5,0,0x486f40,0x200,0x486f40,8,0);
      uVar1 = DAT_00486f40;
      if (lVar3 < 0) {
        uVar1 = 0xfffeffff;
      }
      else {
        *param_4 = DAT_00486f44;
      }
    }
    else {
      uVar1 = 0xfffefffc;
    }
  }
  return uVar1;
}


// ==== FUN_0036d218 @ 0036d218 ====

void FUN_0036d218(void)

{
  FUN_0036cff0();
  return;
}


// ==== FUN_0036d260 @ 0036d260 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0036d260(char *param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_0036e9e8(0,0);
  FUN_0036e9e8(1,0);
  sceSifStopDma();
  uStack_3c = sceSifGetReg(0xffffffff80000000);
  DAT_00487190 = 0;
  DAT_00487194 = param_2;
  if (*param_1 != '\0') {
    cVar2 = *param_1;
    iVar3 = DAT_00487190;
    while( true ) {
      DAT_00487190 = iVar3 + 1;
      (&DAT_00487198)[iVar3] = cVar2;
      if (param_1[DAT_00487190] == '\0') break;
      cVar2 = param_1[DAT_00487190];
      iVar3 = DAT_00487190;
    }
  }
  DAT_00487188 = 0x80000003;
  _DAT_00487180 = 0x68;
  uStack_38 = 0x68;
  uStack_34 = 0x44;
  puStack_40 = &DAT_00487180;
  FUN_0036a828(0x487180,0x68);
  sceSifSetReg(4,0x40000);
  lVar1 = sceSifSetDma(&puStack_40,1);
  if (lVar1 != 0) {
    sceSifSetReg(4,0x10000);
    sceSifSetReg(4,0x20000);
    sceSifSetReg(0xffffffff80000002,0);
    sceSifSetReg(0xffffffff80000000,0);
  }
  return lVar1 != 0;
}


// ==== FUN_0036d3b8 @ 0036d3b8 ====

bool FUN_0036d3b8(void)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = sceSifGetReg(4);
  bVar1 = (uVar2 & 0x40000) != 0;
  if (bVar1) {
    FUN_00367ce0();
    FUN_0036e9e8(1,1);
    FUN_0036e9e8(0,1);
  }
  return bVar1;
}


// ==== FUN_0036d408 @ 0036d408 ====

/* Strings referenciadas:
     "m0:UDNL "
     "too long parameter '%s' " */

undefined8 FUN_0036d408(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  byte *pbVar6;
  ulong uVar7;
  char *pcVar8;
  char acStack_80 [80];
  
  pcVar4 = acStack_80;
  pcVar8 = "rom0:UDNL ";
  if (*param_1 == 0) {
    uVar2 = 0xb;
  }
  else {
    pbVar6 = param_1;
    do {
      pbVar6 = pbVar6 + 1;
    } while (*pbVar6 != 0);
    uVar2 = (int)pbVar6 - (int)(param_1 + -0xb);
  }
  if (uVar2 < 0x51) {
    FUN_0036a8d8(0);
    FUN_0036aa78();
    if (DAT_0040bcb0 == '\0') {
      bVar1 = *param_1;
      pcVar4 = acStack_80;
    }
    else {
      bVar1 = *param_1;
      cVar5 = DAT_0040bcb0;
      do {
        *pcVar4 = cVar5;
        pcVar8 = pcVar8 + 1;
        pcVar4 = pcVar4 + 1;
        cVar5 = *pcVar8;
      } while (*pcVar8 != '\0');
    }
    uVar7 = (ulong)bVar1;
    if (uVar7 == 0) {
      *pcVar4 = '\0';
    }
    else {
      do {
        *pcVar4 = (char)uVar7;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
        uVar7 = (ulong)(char)*param_1;
      } while (uVar7 != 0);
      *pcVar4 = '\0';
    }
    uVar3 = FUN_0036d260(acStack_80,0);
  }
  else {
    FUN_0036a038(0x40bcc0,param_1);
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_0036d518 @ 0036d518 ====

bool FUN_0036d518(void)

{
  if ((Status & 0x10000) != 0) {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    return (Status & 0x10000) != 0;
  }
  return false;
}


// ==== FUN_0036d568 @ 0036d568 ====

bool FUN_0036d568(void)

{
  EI();
  return (Status & 0x10000) != 0;
}


// ==== FUN_0036d580 @ 0036d580 ====

/* Strings referenciadas:
     "SceKernelLibc"
     "SceKernelLibcEh" */

void FUN_0036d580(void)

{
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char *pcStack_3c;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  char *pcStack_1c;
  
  pcStack_3c = "SceKernelLibc";
  uStack_28 = 1;
  pcStack_1c = "SceKernelLibcEh";
  uStack_4c = 1;
  uStack_48 = 1;
  uStack_2c = 1;
  DAT_003d7230 = CreateSema(auStack_50);
  DAT_003d7234 = CreateSema(auStack_30);
  return;
}


// ==== FUN_0036d660 @ 0036d660 ====

void FUN_0036d660(void)

{
  syscall(0x83);
  return;
}


// ==== FUN_0036d678 @ 0036d678 ====

void FUN_0036d678(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  RFU116_SetSyscall(DAT_003d7220,PTR_LAB_003d7224);
  RFU116_SetSyscall(DAT_003d7228,PTR_LAB_003d722c);
  iVar2 = FUN_0036d660(0xffffffff80000000,0xffffffff80080000,0x36d620);
  iVar3 = FUN_0036d660(0xffffffff80000000,0xffffffff80080000,0x36d5e8);
  uVar5 = iVar2 - 0x20c;
  uVar4 = iVar3 - 0x168;
  if (uVar5 != uVar4) {
    bVar1 = uVar5 < uVar4;
    do {
      if (bVar1) {
        iVar2 = FUN_0036d660(iVar2 + 4,0xffffffff80080000,0x36d620);
        uVar5 = iVar2 - 0x20c;
      }
      else {
        iVar3 = FUN_0036d660(iVar3 + 4,0xffffffff80080000,0x36d5e8);
        uVar4 = iVar3 - 0x168;
      }
      bVar1 = uVar5 < uVar4;
    } while (uVar5 != uVar4);
  }
  DAT_003d7218 = uVar5;
  return;
}


// ==== RFU116_SetSyscall @ 0036d778 ====

void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}


// ==== FUN_0036d788 @ 0036d788 ====

void FUN_0036d788(void)

{
  FUN_0036d580();
  FUN_0036d678();
  FUN_0036da30();
  FUN_0036dba8(2);
  FUN_0036dd08();
  FUN_003684e0();
  FUN_0036d8b0();
  FUN_0036ec58();
  FUN_0036e9b0();
  return;
}


// ==== RFU116_SetSyscall @ 0036d7e0 ====

void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}


// ==== FUN_0036d7f0 @ 0036d7f0 ====

void FUN_0036d7f0(void)

{
  syscall(0x5a);
  return;
}


// ==== RFU091 @ 0036d838 ====

void RFU091(void)

{
  syscall(0x5b);
  return;
}


// ==== FUN_0036d848 @ 0036d848 ====

bool FUN_0036d848(void)

{
  uint uStack_30;
  uint auStack_2c [3];
  
  GetOsdConfigParam(&uStack_30);
  auStack_2c[0] = uStack_30 & 0xffff1fff | 0x2000;
  SetOsdConfigParam(auStack_2c);
  GetOsdConfigParam(auStack_2c);
  SetOsdConfigParam(&uStack_30);
  return (auStack_2c[0] >> 0xd & 7) == 0;
}


// ==== FUN_0036d8b0 @ 0036d8b0 ====

void FUN_0036d8b0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  lVar2 = FUN_0036d848();
  if (lVar2 != 0) {
    uVar5 = 2;
    puVar4 = &DAT_003d79f0;
    RFU116_SetSyscall(DAT_003d79e0,PTR_LAB_003d79e4);
    FUN_0036d7f0(0xffffffff80074000,0x3d7238,0x7a8);
    FlushCache(0);
    FlushCache(2);
    RFU116_SetSyscall(DAT_003d79e8,DAT_003d79ec);
    uVar1 = DAT_003d79f0;
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar3 = RFU091(uVar1);
      uVar1 = *puVar4;
      puVar4 = puVar4 + 2;
      RFU116_SetSyscall(uVar1,uVar3);
      if (2 < uVar5) break;
      uVar1 = *puVar4;
    }
  }
  return;
}


// ==== FUN_0036d998 @ 0036d998 ====

void FUN_0036d998(int param_1)

{
  thunk_FUN_0036ed30();
  _Exit(param_1);
  return;
}


// ==== RFU116_SetSyscall @ 0036d9c8 ====

void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}


// ==== FUN_0036d9d8 @ 0036d9d8 ====

void FUN_0036d9d8(void)

{
  syscall(0x5a);
  return;
}


// ==== RFU091 @ 0036da20 ====

void RFU091(void)

{
  syscall(0x5b);
  return;
}


// ==== FUN_0036da30 @ 0036da30 ====

void FUN_0036da30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = REG_RCNT3_MODE;
  if ((uVar4 & 0x100) == 0) {
    uVar4 = 2;
    puVar3 = &DAT_003d8178;
    RFU116_SetSyscall(DAT_003d8168,PTR_LAB_003d816c);
    FUN_0036d9d8(0xffffffff80076000,0x3d7a00,0x740);
    FUN_0036d9d8(0x82000,0x3d8140,0x28);
    FlushCache(0);
    FlushCache(2);
    RFU116_SetSyscall(DAT_003d8170,DAT_003d8174);
    uVar1 = DAT_003d8178;
    while( true ) {
      uVar4 = uVar4 + 1;
      uVar2 = RFU091(uVar1);
      uVar1 = *puVar3;
      puVar3 = puVar3 + 2;
      RFU116_SetSyscall(uVar1,uVar2);
      if (7 < uVar4) break;
      uVar1 = *puVar3;
    }
  }
  return;
}


// ==== FUN_0036db08 @ 0036db08 ====

void FUN_0036db08(undefined4 *param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  SYNC(0x10);
  Status = (Status | 6) ^ 2 | Status & 0x10000;
  SYNC(0x10);
  *param_1 = param_2;
  ErrorPC = unaff_retaddr;
  SYNC(0x10);
  return;
}


// ==== FUN_0036db78 @ 0036db78 ====

void FUN_0036db78(undefined8 param_1)

{
  FUN_0036db08(0xffffffffb0001000,param_1);
  return;
}


// ==== FUN_0036db88 @ 0036db88 ====

void FUN_0036db88(undefined8 param_1)

{
  FUN_0036db08(0xffffffffb0001010,param_1);
  return;
}


// ==== FUN_0036db98 @ 0036db98 ====

void FUN_0036db98(undefined8 param_1)

{
  FUN_0036db08(0xffffffffb0001020,param_1);
  return;
}


// ==== FUN_0036dba8 @ 0036dba8 ====

undefined4 FUN_0036dba8(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (DAT_003d81b0 < 0) {
    DAT_003d81a8 = 0;
    DAT_003d81b8 = 0;
    memset(0x487200,0,0x2000);
    DAT_003d81bc = &DAT_00487200;
    puVar4 = &DAT_00489200;
    iVar2 = 0x7f;
    puVar5 = &DAT_004891c0;
    do {
      *puVar5 = puVar4;
      iVar2 = iVar2 + -1;
      puVar5 = puVar5 + -0x10;
      puVar4 = puVar4 + -0x40;
    } while (-1 < iVar2);
    DAT_004891c0 = 0;
    FUN_0036e6e0();
    lVar3 = AddIntcHandler(0xb,0x36dff0,0,0);
    if (lVar3 < 0) {
      uVar1 = 0x80009021;
    }
    else {
      DAT_003d81b0 = (int)lVar3;
      lVar3 = FUN_0036d518();
      uVar6 = REG_RCNT2_MODE;
      param_1 = uVar6 & 0xfffffffc | param_1;
      uVar6 = param_1 | 0x300;
      if ((param_1 & 0x80) == 0) {
        uVar6 = param_1 | 0xf80;
        FUN_0036db78(0);
        FUN_0036db98(0xffff);
      }
      FUN_0036db88(uVar6);
      FUN_003682d0(0xb);
      uVar1 = 0;
      if (lVar3 != 0) {
        FUN_0036d568();
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x80008001;
  }
  return uVar1;
}


// ==== FUN_0036dd08 @ 0036dd08 ====

undefined4 FUN_0036dd08(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_0036d518();
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x80) == 0) {
    FUN_0036db88(uVar1 & 0xfffff3ff | 0x80);
    uVar4 = FUN_0036e298();
    FUN_0036dda0(uVar4);
    uVar2 = 0;
    if (lVar3 != 0) {
      FUN_0036d568();
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
    if (lVar3 != 0) {
      FUN_0036d568();
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_0036dda0 @ 0036dda0 ====

void FUN_0036dda0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  if (-1 < DAT_003d81c4) {
    return;
  }
  uVar2 = REG_RCNT2_MODE;
  if (DAT_003d81c0 == (int *)0x0) {
    FUN_0036db98(0);
    FUN_0036db88(uVar2 & 0xfffff7ff);
    return;
  }
  piVar4 = (int *)*DAT_003d81c0;
  uVar5 = (*(long *)(DAT_003d81c0 + 8) + *(long *)(DAT_003d81c0 + 4)) - *(long *)(DAT_003d81c0 + 6);
  if ((piVar4 == (int *)0x0) ||
     (uVar3 = (*(long *)(piVar4 + 8) + *(long *)(piVar4 + 4)) - *(long *)(piVar4 + 6),
     uVar5 + 0x7333 <= uVar3)) {
LAB_0036de88:
    param_1 = uVar5 - param_1;
  }
  else {
    do {
      uVar5 = uVar3;
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) goto LAB_0036de88;
      uVar3 = (*(long *)(piVar4 + 8) + *(long *)(piVar4 + 4)) - *(long *)(piVar4 + 6);
    } while (uVar3 < uVar5 + 0x7333);
    param_1 = uVar5 - param_1;
  }
  if (0x7332 < param_1) {
    FUN_0036db88(uVar2 & 0xfffff7ff);
    FUN_0036db98((int)(uVar5 >> (long)(int)((uVar2 & 3) << 2)));
    return;
  }
  iVar1 = REG_RCNT2_COUNT;
  FUN_0036db98(iVar1 + (int)(0x7333L >> (long)(int)((uVar2 & 3) << 2)));
  FUN_0036db88(uVar2 & 0xfffff7ff);
  return;
}


// ==== FUN_0036df30 @ 0036df30 ====

void FUN_0036df30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  puVar1 = DAT_003d81c0;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      param_1[1] = puVar2;
LAB_0036df90:
      *param_1 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = param_1;
      }
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_1;
        return;
      }
      DAT_003d81c0 = param_1;
      return;
    }
    if ((ulong)((*(long *)(param_1 + 8) + *(long *)(param_1 + 4)) - *(long *)(param_1 + 6)) <
        (ulong)((*(long *)(puVar1 + 8) + *(long *)(puVar1 + 4)) - *(long *)(puVar1 + 6))) {
      param_1[1] = puVar2;
      goto LAB_0036df90;
    }
    puVar2 = puVar1;
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


// ==== FUN_0036dfb8 @ 0036dfb8 ====

int FUN_0036dfb8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = iVar1;
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = iVar1;
    iVar2 = DAT_003d81c0;
  }
  DAT_003d81c0 = iVar2;
  if (iVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    *(int *)(iVar1 + 4) = param_1[1];
    param_1[1] = 0;
  }
  return iVar1;
}


// ==== FUN_0036dff0 @ 0036dff0 ====

undefined8 FUN_0036dff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  uVar1 = REG_RCNT2_MODE;
  if (((uVar1 & 0x400) != 0) && (DAT_003d81c0 != (undefined4 *)0x0)) {
    puVar7 = DAT_003d81c0;
    do {
      uVar1 = REG_RCNT2_COUNT;
      uVar2 = REG_RCNT2_MODE;
      lVar6 = *(long *)(puVar7 + 8);
      lVar4 = *(long *)(puVar7 + 4);
      lVar5 = *(long *)(puVar7 + 6);
      if ((uVar2 & 0x800) != 0) {
        DAT_003d81a8 = DAT_003d81a8 + 1;
        FUN_0036db88(uVar2 & 0xfffffbff);
        uVar1 = REG_RCNT2_COUNT;
      }
      uVar8 = (DAT_003d81a8 << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2);
      if (uVar8 < (ulong)((lVar6 + lVar4) - lVar5)) break;
      puVar3 = (undefined4 *)FUN_0036dfb8(puVar7);
      DAT_003d81c4 = (int)puVar7 << 4 | puVar7[2];
      uVar8 = (*(code *)puVar7[10])
                        ((int)puVar7 << 4 | puVar7[2],*(undefined8 *)(puVar7 + 8),
                         (uVar8 + *(long *)(puVar7 + 6)) - *(long *)(puVar7 + 4),puVar7[0xc],param_3
                        );
      if (uVar8 == 0) {
        puVar7[3] = puVar7[3] & 0xfffffffd;
      }
      else if (uVar8 == 0xffffffffffffffff) {
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = DAT_003d81bc;
        DAT_003d81b8 = DAT_003d81b8 + -1;
        DAT_003d81bc = puVar7;
      }
      else {
        if (uVar8 < 0x3999) {
          uVar8 = 0x3999;
        }
        *(ulong *)(puVar7 + 8) = *(long *)(puVar7 + 8) + uVar8;
        FUN_0036df30(puVar7);
      }
      puVar7 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  DAT_003d81c4 = 0xffffffff;
  uVar1 = REG_RCNT2_COUNT;
  uVar2 = REG_RCNT2_MODE;
  if ((uVar2 & 0x800) != 0) {
    DAT_003d81a8 = DAT_003d81a8 + 1;
    FUN_0036db88(uVar2 & 0xfffffbff);
    uVar1 = REG_RCNT2_COUNT;
  }
  FUN_0036dda0((DAT_003d81a8 << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2));
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x800) != 0) {
    DAT_003d81a8 = DAT_003d81a8 + 1;
    FUN_0036db88(uVar1 & 0xfffffbff);
  }
  SYNC(0);
  EI();
  return 0;
}


// ==== FUN_0036e298 @ 0036e298 ====

long FUN_0036e298(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = REG_RCNT2_COUNT;
  iVar2 = REG_RCNT2_MODE;
  lVar4 = 2;
  lVar5 = DAT_003d81a8;
  if (((long)iVar2 & 0x800U) != 0) {
    uVar1 = REG_RCNT2_COUNT;
    lVar5 = DAT_003d81a8 + 1;
  }
  uVar3 = (long)iVar2 & 3;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  return ((ulong)uVar1 | lVar5 << 0x10) << (lVar4 << uVar3);
}


// ==== FUN_0036e2f0 @ 0036e2f0 ====

uint FUN_0036e2f0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = DAT_003d81bc;
  if (DAT_003d81bc == (undefined4 *)0x0) {
    return 0x80008005;
  }
  uVar3 = (int)DAT_003d81bc << 4;
  DAT_003d81b8 = DAT_003d81b8 + 1;
  DAT_003d81bc[10] = 0;
  DAT_003d81bc[3] = 0;
  puVar1 = (undefined8 *)(DAT_003d81bc + 6);
  DAT_003d81bc = (undefined4 *)*DAT_003d81bc;
  *puVar1 = 0;
  DAT_003d81b4 = DAT_003d81b4 + 1;
  puVar2[2] = (DAT_003d81b4 & 0x1ff) << 1 | 1;
  return uVar3 | puVar2[2];
}


// ==== FUN_0036e360 @ 0036e360 ====

undefined8 FUN_0036e360(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0036d518();
  uVar2 = FUN_0036e2f0();
  if (lVar1 != 0) {
    FUN_0036d568();
  }
  return uVar2;
}


// ==== FUN_0036e3b8 @ 0036e3b8 ====

undefined4 FUN_0036e3b8(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (param_1 >> 10) * 0x40;
  if (((int)param_1 < 0) || ((param_1 & 0x3ff) != *(uint *)(iVar4 + 8))) {
    uVar2 = 0x80008002;
  }
  else if (DAT_003d81c4 == param_1) {
    uVar2 = 0x80000010;
  }
  else {
    uVar2 = 1;
    if ((*(uint *)(iVar4 + 0xc) & 1) == 0) {
      uVar3 = FUN_0036e298();
      uVar1 = *(uint *)(iVar4 + 0xc);
      *(undefined8 *)(iVar4 + 0x10) = uVar3;
      *(uint *)(iVar4 + 0xc) = uVar1 | 1;
      if ((uVar1 & 2) != 0) {
        FUN_0036df30(iVar4);
        FUN_0036dda0(uVar3);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ==== FUN_0036e468 @ 0036e468 ====

undefined8 FUN_0036e468(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0036d518();
  uVar2 = FUN_0036e3b8(param_1);
  if (lVar1 != 0) {
    FUN_0036d568();
  }
  return uVar2;
}


// ==== FUN_0036e4e8 @ 0036e4e8 ====

undefined4 FUN_0036e4e8(uint param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (param_1 >> 10) * 0x40;
  if (((int)param_1 < 0) || ((param_1 & 0x3ff) != *(uint *)(iVar4 + 8))) {
    uVar2 = 0x80008002;
  }
  else if (DAT_003d81c4 == param_1) {
    uVar2 = 0x80000010;
  }
  else {
    uVar1 = *(uint *)(iVar4 + 0xc);
    if ((uVar1 & 2) != 0) {
      FUN_0036dfb8(iVar4);
      uVar1 = *(uint *)(iVar4 + 0xc);
    }
    *(int *)(iVar4 + 0x28) = (int)param_3;
    if (param_3 == 0) {
      *(uint *)(iVar4 + 0xc) = uVar1 & 0xfffffffd;
    }
    else {
      *(undefined8 *)(iVar4 + 0x20) = param_2;
      *(uint *)(iVar4 + 0xc) = uVar1 | 2;
      *(BADSPACEBASE **)(iVar4 + 0x2c) = register0x000001c0;
      *(undefined4 *)(iVar4 + 0x30) = param_4;
      if ((*(uint *)(iVar4 + 0xc) & 1) != 0) {
        FUN_0036df30(iVar4);
      }
    }
    uVar3 = FUN_0036e298();
    FUN_0036dda0(uVar3);
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0036e5e0 @ 0036e5e0 ====

undefined8 FUN_0036e5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0036d518();
  uVar2 = FUN_0036e4e8(param_1,param_2,param_3,param_4);
  if (lVar1 != 0) {
    FUN_0036d568();
  }
  return uVar2;
}


// ==== FUN_0036e660 @ 0036e660 ====

long FUN_0036e660(int param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (param_2 & 0xffffffff) * 0x8ca0000;
  lVar2 = FUN_002904f0((long)(int)(uVar1 >> 0x20) << 0x20 | uVar1 & 0xffffffff,1000000);
  return (ulong)(uint)(param_1 * 0x8ca0000) + lVar2;
}


// ==== FUN_0036e6e0 @ 0036e6e0 ====

undefined8 FUN_0036e6e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  DAT_00489600 = &DAT_00489200;
  puVar2 = &DAT_00489600;
  puVar1 = &DAT_004895f0;
  do {
    *puVar1 = puVar2;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -4;
    puVar2 = puVar2 + -4;
  } while (-1 < iVar3);
  DAT_004895f0 = 0;
  return 0;
}


// ==== FUN_0036e730 @ 0036e730 ====

long FUN_0036e730(uint param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = (*(code *)param_4[2])((int)param_4 << 4 | param_1 & 0xfe | 1,param_2,param_3,param_4[3]);
  if (lVar2 == 0) {
    lVar2 = -1;
    puVar1 = param_4;
    *param_4 = DAT_00489600;
    DAT_00489600 = puVar1;
    param_4[1] = 0;
  }
  return lVar2;
}


// ==== FUN_0036e790 @ 0036e790 ====

uint FUN_0036e790(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar3 = 0x80000016;
  }
  else {
    lVar4 = FUN_0036d518();
    puVar1 = DAT_00489600;
    if (DAT_00489600 == (undefined4 *)0x0) {
      if (lVar4 != 0) {
        FUN_0036d568();
      }
      uVar3 = 0x80008005;
    }
    else {
      DAT_00489600 = (undefined4 *)*DAT_00489600;
      uVar3 = FUN_0036e360();
      if ((int)uVar3 < 0) {
        puVar2 = puVar1;
        *puVar1 = DAT_00489600;
        DAT_00489600 = puVar2;
        puVar1[1] = 0;
        if (lVar4 != 0) {
          FUN_0036d568();
        }
      }
      else {
        puVar1[2] = (int)param_2;
        puVar1[3] = param_3;
        puVar1[1] = uVar3;
        FUN_0036e5e0(uVar3,param_1,0x36e730,puVar1);
        FUN_0036e468(uVar3);
        if (lVar4 != 0) {
          FUN_0036d568();
        }
        uVar3 = (int)puVar1 << 4 | uVar3 & 0xfe | 1;
      }
    }
  }
  return uVar3;
}


// ==== FUN_0036e8c0 @ 0036e8c0 ====

uint FUN_0036e8c0(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = DAT_00489600;
  if (param_2 == 0) {
    uVar3 = 0x80000016;
  }
  else if (DAT_00489600 == (undefined4 *)0x0) {
    uVar3 = 0x80008005;
  }
  else {
    DAT_00489600 = (undefined4 *)*DAT_00489600;
    uVar3 = FUN_0036e2f0();
    if ((int)uVar3 < 0) {
      puVar2 = puVar1;
      *puVar1 = DAT_00489600;
      DAT_00489600 = puVar2;
      puVar1[1] = 0;
    }
    else {
      puVar1[2] = (int)param_2;
      puVar1[3] = param_3;
      puVar1[1] = uVar3;
      FUN_0036e4e8(uVar3,param_1,0x36e730,puVar1);
      FUN_0036e3b8(uVar3);
      uVar3 = (int)puVar1 << 4 | uVar3 & 0xfe | 1;
    }
  }
  return uVar3;
}


// ==== FUN_0036e9b0 @ 0036e9b0 ====

void FUN_0036e9b0(void)

{
  DAT_003d81c8 = 0;
  DAT_003d81cc = 0;
  memset(0x489608,0,0x200);
  return;
}


// ==== FUN_0036e9e8 @ 0036e9e8 ====

undefined1 * FUN_0036e9e8(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_003d81cc;
  piVar1 = DAT_003d81c8;
  if (param_1 != 0) {
    iVar2 = 0x20;
    piVar1 = &DAT_00489608;
  }
  if (0 < iVar2) {
    do {
      if (*piVar1 != 0) {
        register0x000001c0 = (BADSPACEBASE *)piVar1[2];
        (*(code *)*piVar1)(param_2,piVar1[1]);
      }
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + 4;
    } while (iVar2 != 0);
  }
  return (undefined1 *)register0x000001c0;
}


// ==== FUN_0036ea90 @ 0036ea90 ====

void FUN_0036ea90(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
  uStack_20 = param_1 & 0xffff;
  puStack_14 = &DAT_20489808;
  uStack_1c = param_2;
  uStack_18 = param_3;
  Deci2Call(1,&uStack_20);
  return;
}


// ==== FUN_0036eae0 @ 0036eae0 ====

void FUN_0036eae0(undefined4 param_1,char param_2)

{
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = (int)param_2;
  uStack_20 = param_1;
  Deci2Call(3,&uStack_20);
  return;
}


// ==== FUN_0036eb10 @ 0036eb10 ====

void FUN_0036eb10(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(4,auStack_20);
  return;
}


// ==== FUN_0036eb40 @ 0036eb40 ====

void FUN_0036eb40(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uStack_18 = param_3 & 0xffff;
  uStack_20 = param_1;
  uStack_1c = param_2;
  Deci2Call(0xfffffffffffffffb,&uStack_20);
  return;
}


// ==== FUN_0036eb78 @ 0036eb78 ====

void FUN_0036eb78(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uStack_18 = param_3 & 0xffff;
  uStack_20 = param_1;
  uStack_1c = param_2;
  Deci2Call(0xfffffffffffffffa,&uStack_20);
  return;
}


// ==== FUN_0036ebc0 @ 0036ebc0 ====

void FUN_0036ebc0(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(0x10,auStack_20);
  return;
}


// ==== FUN_0036ebf0 @ 0036ebf0 ====

void FUN_0036ebf0(void)

{
  syscall(0x5a);
  return;
}


// ==== RFU091 @ 0036ec38 ====

void RFU091(void)

{
  syscall(0x5b);
  return;
}


// ==== RFU116_SetSyscall @ 0036ec48 ====

void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}


// ==== FUN_0036ec58 @ 0036ec58 ====

void FUN_0036ec58(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 3;
  puVar3 = &DAT_003d8568;
  RFU116_SetSyscall(DAT_003d8550,PTR_LAB_003d8554);
  FUN_0036ebf0(0xffffffff80075000,0x3d81d0,0x330);
  FlushCache(0);
  FlushCache(2);
  RFU116_SetSyscall(DAT_003d8558,DAT_003d855c);
  RFU116_SetSyscall(DAT_003d8560,PTR_LAB_003d8564);
  uVar1 = DAT_003d8568;
  while( true ) {
    uVar4 = uVar4 + 1;
    uVar2 = RFU091(uVar1);
    uVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    RFU116_SetSyscall(uVar1,uVar2);
    if (7 < uVar4) break;
    uVar1 = *puVar3;
  }
  DAT_003d8548 = RFU091(3);
  return;
}


// ==== RFU086_WaitEvnetFlag @ 0036ed20 ====

void RFU086_WaitEvnetFlag(void)

{
  syscall(0x56);
  return;
}


// ==== FUN_0036ed30 @ 0036ed30 ====

void FUN_0036ed30(void)

{
  long lVar1;
  
  lVar1 = GetMemorySize();
  if (lVar1 == 0x2000000) {
    FUN_0036ed70();
  }
  else {
    _InitTLB();
  }
  return;
}


// ==== FUN_0036ed70 @ 0036ed70 ====

/* Strings referenciadas:
     "# TLB spad=0 kernel=1:%d default=%d:%d extended=%d:%d "
     "# TLB over flow (1)"
     "# TLB over flow (2)"
     "# TLB over flow (3)" */

long FUN_0036ed70(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar5 = DAT_003d8800 + DAT_003d8804;
  FUN_0036a0b8(0x40bd08,DAT_003d8800 + -1,DAT_003d8800,iVar5 + -1,iVar5,iVar5 + DAT_003d8808 + -1);
  Wired = 0;
  SYNC(0x10);
  lVar8 = (long)DAT_003d8800;
  lVar9 = 0;
  if (0x30 < lVar8) {
    FUN_0036a0b8(0x40bd40);
    FUN_0036d998(1);
  }
  if (lVar9 < lVar8) {
    uVar4 = *(undefined4 *)PTR_DAT_003d8810;
    puVar6 = (undefined4 *)PTR_DAT_003d8810;
    while( true ) {
      puVar1 = puVar6 + 1;
      puVar2 = puVar6 + 2;
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 4;
      RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
      lVar9 = (long)((int)lVar9 + 1);
      if (lVar8 <= lVar9) break;
      uVar4 = *puVar6;
    }
  }
  lVar8 = (long)((int)lVar9 + DAT_003d8804);
  if (0x30 < lVar8) {
    FUN_0036a0b8(0x40bd58);
    FUN_0036d998(1);
  }
  if (lVar9 < lVar8) {
    uVar4 = *(undefined4 *)PTR_DAT_003d8814;
    puVar6 = (undefined4 *)PTR_DAT_003d8814;
    while( true ) {
      puVar1 = puVar6 + 1;
      puVar2 = puVar6 + 2;
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 4;
      RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
      lVar9 = (long)((int)lVar9 + 1);
      if (lVar8 <= lVar9) break;
      uVar4 = *puVar6;
    }
  }
  Wired = (int)lVar9;
  SYNC(0x10);
  DAT_003d880c = Wired;
  if (0 < DAT_003d8808) {
    lVar8 = (long)(Wired + DAT_003d8808);
    if (0x30 < lVar8) {
      FUN_0036a0b8(0x40bd70);
      FUN_0036d998(1);
    }
    if (lVar9 < lVar8) {
      uVar4 = *(undefined4 *)PTR_DAT_003d8818;
      puVar6 = (undefined4 *)PTR_DAT_003d8818;
      while( true ) {
        puVar1 = puVar6 + 1;
        puVar2 = puVar6 + 2;
        puVar3 = puVar6 + 3;
        puVar6 = puVar6 + 4;
        RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
        lVar9 = (long)((int)lVar9 + 1);
        if (lVar8 <= lVar9) break;
        uVar4 = *puVar6;
      }
    }
  }
  iVar5 = (int)lVar9 * 0x2000;
  lVar8 = (long)iVar5;
  if (lVar9 < 0x30) {
    iVar5 = iVar5 + -0x20000000;
    do {
      lVar7 = (long)((int)lVar9 + 1);
      RFU086_WaitEvnetFlag(lVar9,0,iVar5,0,0);
      iVar5 = iVar5 + 0x2000;
      lVar9 = lVar7;
    } while (lVar7 < 0x30);
  }
  return lVar8;
}


// ==== FUN_0036f0e0 @ 0036f0e0 ====

long FUN_0036f0e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_002919f8(param_1,0);
  if (lVar1 < 0) {
    uVar2 = FUN_00291468(0,param_1);
    lVar1 = FUN_0036f140(uVar2);
    lVar1 = -lVar1;
  }
  else {
    lVar1 = FUN_0036f140(param_1);
  }
  return lVar1;
}


// ==== FUN_0036f140 @ 0036f140 ====

long FUN_0036f140(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = FUN_002919f8(param_1,0);
  lVar2 = 0;
  if (-1 < lVar1) {
    uVar3 = FUN_002914d0(param_1,0x3df0000000000000);
    uVar4 = FUN_00291b98(uVar3);
    lVar2 = uVar4 << 0x20;
    if (lVar2 < 0) {
      uVar3 = FUN_002903f0((uVar4 & 0xffffffff) << 0x1f);
      uVar3 = FUN_00291410(uVar3,uVar3);
    }
    else {
      uVar3 = FUN_002903f0(lVar2);
    }
    uVar3 = FUN_00291468(param_1,uVar3);
    lVar1 = FUN_002919f8(uVar3,0);
    if (lVar1 < 0) {
      uVar3 = FUN_00291468(0,uVar3);
      uVar4 = FUN_00291b98(uVar3);
      uVar4 = -(uVar4 & 0xffffffff);
    }
    else {
      uVar4 = FUN_00291b98(uVar3);
      uVar4 = uVar4 & 0xffffffff;
    }
    lVar2 = lVar2 + uVar4;
  }
  return lVar2;
}


// ==== FUN_0036f230 @ 0036f230 ====

void FUN_0036f230(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((0x3ffffffffffffe < param_1 + 0x1fffffffffffff) && ((param_1 & 0x7ff) != 0)) {
    param_1 = param_1 | 0x800;
  }
  uVar1 = FUN_00291a48((long)param_1 >> 0x20);
  uVar1 = FUN_002914d0(uVar1,0x40f0000000000000);
  uVar1 = FUN_002914d0(uVar1,0x40f0000000000000);
  uVar2 = FUN_00291a48((int)param_1);
  if ((int)param_1 < 0) {
    uVar2 = FUN_00291410(uVar2,0x41f0000000000000);
  }
  uVar1 = FUN_00291410(uVar1,uVar2);
  FUN_00291c68(uVar1);
  return;
}


// ==== FUN_0036f310 @ 0036f310 ====

ulong FUN_0036f310(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uStack_40;
  
  iVar16 = 0;
  if ((long)param_1 < 0) {
    iVar16 = -1;
    param_1 = CONCAT44(-(uint)(-(int)param_1 != 0) - (int)(param_1 >> 0x20),-(int)param_1);
  }
  if (param_2 >> 0x20 < 0) {
    param_2 = CONCAT44(-(uint)(-(int)param_2 != 0) - (int)((ulong)param_2 >> 0x20),-(int)param_2);
  }
  uVar13 = (uint)param_1;
  uVar14 = (ulong)(int)uVar13;
  uVar10 = param_2 >> 0x20;
  uVar11 = (uint)(param_1 >> 0x20);
  uVar12 = (ulong)(int)uVar11;
  uVar7 = (uint)param_2;
  uVar9 = (ulong)(int)uVar7;
  uVar15 = (uint)((ulong)param_2 >> 0x20);
  if (uVar10 == 0) {
    if (uVar12 < uVar9) {
      if (uVar9 < 0x10000) {
        iVar2 = 8;
        if (uVar9 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar9 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar15 = 0x20 - ((uint)(byte)(&DAT_0040bd88)[uVar7 >> iVar2] + iVar2);
      if (uVar15 != 0) {
        uVar9 = (ulong)(int)(uVar7 << (uVar15 & 0x1f));
        uVar11 = uVar11 << (uVar15 & 0x1f) | uVar13 >> (0x20 - uVar15 & 0x1f);
        uVar14 = (ulong)(int)(uVar13 << (uVar15 & 0x1f));
      }
      uVar13 = (uint)uVar9 >> 0x10;
      uVar7 = (uint)uVar9 & 0xffff;
      iVar1 = (int)uVar11 / (int)uVar13;
      iVar2 = (int)uVar11 % (int)uVar13;
    }
    else {
      if (uVar9 == 0) {
        trap(7);
        uVar9 = (ulong)(1 / (int)uVar15);
      }
      if (uVar9 < 0x10000) {
        iVar2 = 8;
        if (uVar9 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar9 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar7 = (uint)uVar9;
      uVar15 = 0x20 - ((uint)(byte)(&DAT_0040bd88)[uVar7 >> iVar2] + iVar2);
      if (uVar15 == 0) {
        iVar2 = uVar11 - uVar7;
        uVar13 = uVar7 >> 0x10;
        uVar7 = uVar7 & 0xffff;
      }
      else {
        uVar5 = uVar11 >> (0x20 - uVar15 & 0x1f);
        uVar11 = uVar11 << (uVar15 & 0x1f) | uVar13 >> (0x20 - uVar15 & 0x1f);
        uVar8 = uVar7 << (uVar15 & 0x1f);
        uVar9 = (ulong)(int)uVar8;
        uVar14 = (ulong)(int)(uVar13 << (uVar15 & 0x1f));
        uVar13 = uVar8 >> 0x10;
        uVar7 = uVar8 & 0xffff;
        if (uVar13 == 0) {
          trap(7);
        }
        iVar2 = ((int)uVar5 / (int)uVar13) * uVar7;
        uVar10 = ((long)((int)uVar5 % (int)uVar13) << 0x30) >> 0x20 | (long)(int)(uVar11 >> 0x10);
        iVar1 = (int)uVar10;
        if (uVar10 < (ulong)(long)iVar2) {
          iVar1 = iVar1 + uVar8;
          if ((ulong)(long)iVar1 < uVar9) {
            iVar1 = iVar1 - iVar2;
          }
          else {
            if ((ulong)(long)iVar1 < (ulong)(long)iVar2) {
              iVar1 = iVar1 + uVar8;
            }
            iVar1 = iVar1 - iVar2;
          }
        }
        else {
          iVar1 = iVar1 - iVar2;
        }
        if (uVar13 == 0) {
          trap(7);
        }
        iVar3 = (iVar1 / (int)uVar13) * uVar7;
        uVar10 = ((long)(iVar1 % (int)uVar13) << 0x30) >> 0x20 | (long)(int)uVar11 & 0xffffU;
        iVar2 = (int)uVar10;
        if (uVar10 < (ulong)(long)iVar3) {
          iVar1 = iVar2 + uVar8;
          iVar2 = iVar1 - iVar3;
          if (uVar9 <= (ulong)(long)iVar1) {
            if ((ulong)(long)iVar1 < (ulong)(long)iVar3) {
              iVar1 = iVar1 + uVar8;
            }
            iVar2 = iVar1 - iVar3;
          }
        }
        else {
          iVar2 = iVar2 - iVar3;
        }
      }
      iVar1 = iVar2 / (int)uVar13;
      iVar2 = iVar2 % (int)uVar13;
    }
    if (uVar13 == 0) {
      trap(7);
    }
    iVar1 = iVar1 * uVar7;
    uVar10 = ((long)iVar2 << 0x30) >> 0x20 | (long)(int)((uint)uVar14 >> 0x10);
    iVar2 = (int)uVar10;
    iVar3 = (int)uVar9;
    if (uVar10 < (ulong)(long)iVar1) {
      iVar2 = iVar2 + iVar3;
      if ((ulong)(long)iVar2 < uVar9) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        if ((ulong)(long)iVar2 < (ulong)(long)iVar1) {
          iVar2 = iVar2 + iVar3;
        }
        iVar2 = iVar2 - iVar1;
      }
    }
    else {
      iVar2 = iVar2 - iVar1;
    }
    if (uVar13 == 0) {
      trap(7);
    }
    iVar1 = (iVar2 / (int)uVar13) * uVar7;
    uVar14 = ((long)(iVar2 % (int)uVar13) << 0x30) >> 0x20 | uVar14 & 0xffff;
    if (uVar14 < (ulong)(long)iVar1) {
      iVar2 = (int)uVar14 + iVar3;
      uVar14 = (ulong)iVar2;
      if ((uVar9 <= uVar14) && (uVar14 < (ulong)(long)iVar1)) {
        uVar14 = (ulong)(iVar2 + iVar3);
      }
    }
    if (&stack0x00000000 != (undefined1 *)0x40) {
      uStack_40 = (ulong)((uint)((int)uVar14 - iVar1) >> (uVar15 & 0x1f));
    }
    goto LAB_0036f90c;
  }
  if (uVar12 < uVar10) {
    uStack_40 = param_1 & 0xffffffff | uVar12 << 0x20;
    goto LAB_0036f90c;
  }
  if (uVar10 < 0x10000) {
    iVar2 = 8;
    if (uVar10 < 0x100) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x18;
    if (uVar10 < 0x1000000) {
      iVar2 = 0x10;
    }
  }
  uVar5 = 0x20 - ((uint)(byte)(&DAT_0040bd88)[uVar15 >> iVar2] + iVar2);
  uVar8 = 0x20 - uVar5;
  if (uVar5 == 0) {
    if ((uVar10 < uVar12) || (uVar9 <= uVar14)) {
      uVar12 = (ulong)(int)((uVar11 - uVar15) - (uint)(uVar14 < (ulong)(long)(int)(uVar13 - uVar7)))
      ;
      uVar14 = (long)(int)(uVar13 - uVar7);
    }
    if (&stack0x00000000 != (undefined1 *)0x40) {
      uStack_40 = uVar14 & 0xffffffff | uVar12 << 0x20;
    }
    goto LAB_0036f90c;
  }
  uVar6 = uVar11 >> (uVar8 & 0x1f);
  uVar11 = uVar11 << (uVar5 & 0x1f) | uVar13 >> (uVar8 & 0x1f);
  uVar15 = uVar15 << (uVar5 & 0x1f) | uVar7 >> (uVar8 & 0x1f);
  uVar7 = uVar7 << (uVar5 & 0x1f);
  uVar13 = uVar13 << (uVar5 & 0x1f);
  uVar4 = uVar15 >> 0x10;
  iVar2 = (int)uVar6 / (int)uVar4;
  lVar17 = (long)iVar2;
  if (uVar4 == 0) {
    trap(7);
  }
  iVar1 = iVar2 * (uVar15 & 0xffff);
  uVar14 = ((long)((int)uVar6 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)(uVar11 >> 0x10);
  iVar3 = (int)uVar14;
  if (uVar14 < (ulong)(long)iVar1) {
    iVar3 = iVar3 + uVar15;
    lVar17 = (long)(iVar2 + -1);
    if ((ulong)(long)(int)uVar15 <= (ulong)(long)iVar3) {
      if ((ulong)(long)iVar1 <= (ulong)(long)iVar3) {
        iVar3 = iVar3 - iVar1;
        goto LAB_0036f81c;
      }
      lVar17 = (long)(iVar2 + -2);
      iVar3 = iVar3 + uVar15;
    }
    iVar3 = iVar3 - iVar1;
  }
  else {
    iVar3 = iVar3 - iVar1;
  }
LAB_0036f81c:
  if (uVar4 == 0) {
    trap(7);
  }
  iVar2 = iVar3 / (int)uVar4;
  uVar9 = (ulong)iVar2;
  iVar1 = iVar2 * (uVar15 & 0xffff);
  uVar14 = ((long)(iVar3 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)uVar11 & 0xffffU;
  if (uVar14 < (ulong)(long)iVar1) {
    iVar3 = (int)uVar14 + uVar15;
    uVar14 = (ulong)iVar3;
    uVar9 = (ulong)(iVar2 + -1);
    if (((ulong)(long)(int)uVar15 <= uVar14) && (uVar14 < (ulong)(long)iVar1)) {
      uVar9 = (ulong)(iVar2 + -2);
      uVar14 = (ulong)(int)(iVar3 + uVar15);
    }
  }
  uVar6 = (int)uVar14 - iVar1;
  lVar17 = (((lVar17 << 0x30) >> 0x20 | uVar9) & 0xffffffff) * (ulong)uVar7;
  uVar11 = (uint)lVar17;
  uVar4 = (uint)((ulong)lVar17 >> 0x20);
  uVar7 = uVar11 - uVar7;
  if ((uVar6 < uVar4) || ((uVar4 == uVar6 && (uVar13 < uVar11)))) {
    lVar17 = CONCAT44((uVar4 - uVar15) - (uint)(uVar11 < uVar7),uVar7);
  }
  uVar11 = uVar13 - (int)lVar17;
  if (&stack0x00000000 != (undefined1 *)0x40) {
    uVar7 = (uVar6 - (int)((ulong)lVar17 >> 0x20)) - (uint)(uVar13 < uVar11);
    uStack_40 = CONCAT44(uVar7 >> (uVar5 & 0x1f),uVar7 << (uVar8 & 0x1f) | uVar11 >> (uVar5 & 0x1f))
    ;
  }
LAB_0036f90c:
  if (iVar16 != 0) {
    uStack_40 = CONCAT44(-(uint)(-(int)uStack_40 != 0) - (int)(uStack_40 >> 0x20),-(int)uStack_40);
  }
  return uStack_40;
}


// ==== FUN_0036f978 @ 0036f978 ====

undefined * FUN_0036f978(void)

{
  undefined *puVar1;
  undefined *extraout_a0_lo;
  
  (*(code *)PTR_FUN_003c0e30)();
  FUN_0036f978();
  puVar1 = PTR_FUN_003c0e30;
  PTR_FUN_003c0e30 = extraout_a0_lo;
  return puVar1;
}


// ==== FUN_0036f990 @ 0036f990 ====

undefined * FUN_0036f990(void)

{
  undefined *puVar1;
  undefined *extraout_a0_lo;
  
  FUN_0036f978();
  puVar1 = PTR_FUN_003c0e30;
  PTR_FUN_003c0e30 = extraout_a0_lo;
  return puVar1;
}


// ==== FUN_0036f9c0 @ 0036f9c0 ====

int FUN_0036f9c0(void)

{
  int *piVar1;
  
  (*(code *)PTR_FUN_003d881c)();
  piVar1 = (int *)FUN_00292088();
  return *piVar1 + 8;
}


// ==== FUN_0036fa00 @ 0036fa00 ====

undefined4 FUN_0036fa00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00292088();
  return *puVar1;
}


// ==== FUN_0036fa20 @ 0036fa20 ====

int FUN_0036fa20(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00292088();
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  *(long *)(iVar1 + 0x20) = *(long *)(iVar1 + 0x20) + 1;
  return iVar1;
}


// ==== FUN_0036fa58 @ 0036fa58 ====

void FUN_0036fa58(void)

{
  long lVar1;
  
  lVar1 = FUN_0035e7d8();
  if (lVar1 == 0) {
    FUN_0036f978();
  }
  return;
}


// ==== FUN_0036fa80 @ 0036fa80 ====

void FUN_0036fa80(void)

{
  FUN_0035e828();
  return;
}


// ==== FUN_0036faa0 @ 0036faa0 ====

int FUN_0036faa0(int param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (iVar1 = 0, *(short *)((int)param_3 + 4) == 4)) {
    if (param_2 == -1) {
      iVar1 = *(int *)(param_1 + 8);
    }
    else {
      uVar2 = (*(code *)param_2)();
      iVar1 = FUN_003707c8(uVar2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x28));
      if (iVar1 != 0) {
        *(int *)(param_1 + 8) = iVar1;
      }
    }
  }
  return iVar1;
}


// ==== FUN_0036fb10 @ 0036fb10 ====

void FUN_0036fb10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_0036fa58(0x30);
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[10] = param_1;
  puVar1[2] = param_1;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[5] = 0;
  *puVar1 = FUN_0036faa0;
  *(undefined2 *)(puVar1 + 1) = 4;
  *(undefined2 *)((int)puVar1 + 6) = 1;
  puVar2 = (undefined4 *)FUN_00292088();
  puVar1[6] = *puVar2;
  *puVar2 = puVar1;
  return;
}


// ==== FUN_0036fba0 @ 0036fba0 ====

void FUN_0036fba0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  int *extraout_a0_lo;
  
  piVar3 = (int *)FUN_00292088();
  lVar5 = *(long *)(param_1 + 0x20) + -1;
  *(long *)(param_1 + 0x20) = lVar5;
  if (lVar5 != 0) {
    return;
  }
  iVar4 = *piVar3;
  if ((param_1 == iVar4) && (*(int *)(param_1 + 0x14) == 0)) {
    return;
  }
  if (iVar4 != 0) {
    if (iVar4 == param_1) {
LAB_0036fc0c:
      if (iVar4 != 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        goto LAB_0036fc1c;
      }
    }
    else {
      iVar1 = *(int *)(iVar4 + 0x18);
      while (piVar3 = (int *)(iVar4 + 0x18), iVar1 != 0) {
        iVar4 = *piVar3;
        if (iVar1 == param_1) goto LAB_0036fc0c;
        iVar1 = *(int *)(iVar4 + 0x18);
      }
    }
  }
  iVar4 = FUN_0036f978();
  piVar3 = extraout_a0_lo;
LAB_0036fc1c:
  pcVar2 = *(code **)(param_1 + 0x10);
  *piVar3 = iVar4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined4 *)(param_1 + 8),2);
  }
  lVar5 = FUN_00370c90(*(undefined4 *)(param_1 + 0xc));
  if (lVar5 == 0) {
    FUN_0036fa80(*(undefined4 *)(param_1 + 0x28));
  }
  FUN_0036fa80(param_1);
  return;
}


// ==== FUN_0036fc68 @ 0036fc68 ====

void FUN_0036fc68(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00292088();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    iVar2 = FUN_0036f978();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0;
  return;
}


// ==== FUN_0036fc98 @ 0036fc98 ====

void FUN_0036fc98(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  
  puVar1 = (undefined4 *)FUN_00292088();
  puVar8 = (undefined *)*puVar1;
  puVar1 = param_2;
  iVar7 = param_1;
  if (0 < param_1) {
    do {
      lVar4 = FUN_003707c8(*puVar1,*(undefined4 *)(puVar8 + 0xc),*(undefined4 *)(puVar8 + 8));
      if (lVar4 == 0) {
        iVar7 = iVar7 + -1;
      }
      else {
        FUN_0036fc68();
        FUN_00292b40();
      }
      puVar1 = puVar1 + 1;
    } while (iVar7 != 0);
  }
  FUN_0036f9c0();
  FUN_00292b40();
  puVar2 = (undefined *)FUN_0036fa20();
  if ((puVar8 != puVar2) && (puVar1 = param_2, puVar8 = puVar2, iVar7 = param_1, 0 < param_1)) {
    do {
      lVar4 = FUN_003707c8(*puVar1,*(undefined4 *)(puVar2 + 0xc),*(undefined4 *)(puVar2 + 8));
      if (lVar4 == 0) {
        iVar7 = iVar7 + -1;
      }
      else {
        FUN_0036fc68();
        FUN_00292b40();
      }
      puVar1 = puVar1 + 1;
    } while (iVar7 != 0);
  }
  piVar3 = (int *)0x0;
  uVar5 = bad_exception_0036fff8();
  if (param_1 < 1) goto LAB_0036fe10;
  iVar7 = 0;
  do {
    lVar4 = FUN_003707c8(*(undefined4 *)(iVar7 + (int)param_2),uVar5,*(undefined4 *)(puVar8 + 8));
    if (lVar4 == 0) goto LAB_0036fe00;
    puVar8 = &DAT_00410000;
    uVar5 = 0x40be88;
    piVar3 = (int *)FUN_0036fa58(4);
    *piVar3 = (int)&DAT_0040be88;
    while( true ) {
      uVar6 = (**(code **)(*piVar3 + 4))();
      FUN_0036fb10(piVar3,uVar6,0x36ffb0);
      FUN_00292b40();
LAB_0036fe00:
      piVar3 = (int *)((int)piVar3 + 1);
      iVar7 = (int)piVar3 * 4;
      if ((int)piVar3 < param_1) break;
LAB_0036fe10:
      FUN_0036f978();
      FUN_00292b40();
      FUN_00292b40();
    }
  } while( true );
}


// ==== FUN_0036ff88 @ 0036ff88 ====

undefined4 FUN_0036ff88(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
  return *puVar1;
}


// ==== FUN_0036ffb0 @ 0036ffb0 ====

void FUN_0036ffb0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_0040bea0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== bad_exception_0036fff8 @ 0036fff8 ====

/* Strings referenciadas:
     "13bad_exception" */

undefined8 bad_exception_0036fff8(void)

{
  if (DAT_0049bed0 == 0) {
    exception_00370090();
    Kaim_CMetaClass_ctor(0x49bed0,0x40beb8,0x40ec40);
  }
  return 0x49bed0;
}


// ==== FUN_00370048 @ 00370048 ====

void FUN_00370048(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_0040bea0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== exception_00370090 @ 00370090 ====

/* Strings referenciadas:
     "9exception" */

undefined8 exception_00370090(void)

{
  if (DAT_0040ec40 == 0) {
    FUN_00370188(0x40ec40,0x40bec8);
  }
  return 0x40ec40;
}


// ==== FUN_003700d0 @ 003700d0 ====

void FUN_003700d0(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 4) = &DAT_0040bf60;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00370100 @ 00370100 ====

undefined4 FUN_00370100(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_2 != param_1) &&
     (lVar1 = strcmp(*(undefined4 *)param_1,*(undefined4 *)param_2), lVar1 != 0)) {
    return 0;
  }
  return 1;
}


// ==== Kaim_CMetaClass_ctor @ 00370168 ====

void Kaim_CMetaClass_ctor(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  if (param_1 != 0) {
    puVar1[2] = param_3;
    *puVar1 = param_2;
    puVar1[1] = &vtbl_Kaim_CMetaClass;
  }
  return;
}


// ==== FUN_00370188 @ 00370188 ====

void FUN_00370188(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = param_2;
    ((undefined4 *)param_1)[1] = &DAT_0040bf18;
  }
  return;
}


// ==== FUN_003701a8 @ 003701a8 ====

undefined8 FUN_003701a8(void)

{
  long lVar1;
  undefined8 in_a3;
  
  lVar1 = FUN_00370100();
  if (lVar1 == 0) {
    in_a3 = 0;
  }
  return in_a3;
}


// ==== FUN_003701d8 @ 003701d8 ====

undefined8
FUN_003701d8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00370100();
  if (lVar2 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
    param_4 = (**(code **)(iVar1 + 0x14))
                        (*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x10),param_2,param_3,
                         param_4,param_5,param_6);
  }
  return param_4;
}


