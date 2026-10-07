/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00304ee8 */
void fn_00304ee8(undefined8 param_1,undefined8 param_2)

{
  fn_00304f08(param_1,param_2,0);
  return;
}


/* ADDR 0030b898 */
void fn_0030b898(void)

{
  fn_003071a8();
  return;
}


/* ADDR 003054b8 */
void fn_003054b8(void)

{
  CPathFinder_003039d8(1,0xffff);
  return;
}


/* ADDR 003054d8 */
void fn_003054d8(void)

{
  CPathFinder_003039d8(0,0xffff);
  return;
}


/* ADDR 00306760 */
void fn_00306760(void)

{
  CRepulsorDynamicAvoidance_003063a8(1,0xffff);
  return;
}


/* ADDR 00306780 */
void fn_00306780(void)

{
  CRepulsorDynamicAvoidance_003063a8(0,0xffff);
  return;
}


/* ADDR 0030ba18 */
void fn_0030ba18(void)

{
  CGapDynamicAvoidance_0030b750(1,0xffff);
  return;
}


/* ADDR 0030ba38 */
void fn_0030ba38(void)

{
  CGapDynamicAvoidance_0030b750(0,0xffff);
  return;
}


/* ADDR 0030e988 */
void fn_0030e988(void)

{
  CSoundManager_0030dfc0(1,0xffff);
  return;
}


/* ADDR 0030e9a8 */
void fn_0030e9a8(void)

{
  CSoundManager_0030dfc0(0,0xffff);
  return;
}

extern int DAT_004549c4;
/* ADDR 0030b7a8 */
void fn_0030b7a8(int param_1)

{
  if ((*(uint *)(param_1 + 0x1c) & DAT_004549c4) != 0) {
    fn_003071a8();
  }
  return;
}
