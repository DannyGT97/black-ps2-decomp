/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00123bd0 */
undefined1 fn_00123bd0(void)

{
  int iVar1;
  
  iVar1 = fn_00123c90();
  return *(undefined1 *)(iVar1 + 0x1a);
}

extern int DAT_0040f4d0;
extern int DAT_0040f4f4;
/* ADDR 0012e938 */
void fn_0012e938(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  fn_00168618(DAT_0040f4f4,*(undefined4 *)(iVar1 + 0x20),*(undefined1 *)(iVar1 + 0x24),
               DAT_0040f4d0 + 0x30);
  return;
}

extern int DAT_0040f0e0;
extern int DAT_0040f4bc;
/* ADDR 00121b40 */
void fn_00121b40(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(DAT_0040f0e0 + 0x21060);
  uVar3 = fn_001249f8(iVar1,0x19);
  cVar2 = fn_0026bbc0(*(undefined4 *)(iVar1 + 0xc),uVar3);
  if (((cVar2 != '\0') && (lVar4 = fn_00103870(DAT_0040f0e0), lVar4 == 0)) &&
     (*(char *)(DAT_0040f4bc + 0x1678) == '\0')) {
    fn_00103800(DAT_0040f0e0,1);
  }
  return;
}
