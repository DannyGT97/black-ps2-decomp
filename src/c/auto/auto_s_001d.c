/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001dc000 */
void fn_001dc000(int param_1)

{
  if (*(char *)(param_1 + 0x19a0) != '\0') {
    *(undefined1 *)(param_1 + 0x19a0) = 0;
    *(undefined1 *)(param_1 + 0x19a1) = 0;
    if (*(char *)(param_1 + 0x1997) != '\0') {
      fn_001dc038(param_1,param_1 + 0x1980);
    }
  }
  return;
}


/* ADDR 001da9c0 */
void fn_001da9c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xb8) == 5) {
    uVar1 = fn_001da940();
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc4);
  }
  fn_0031d528(param_1 + 0x18,*(int *)(param_1 + 0xd0) * *(int *)(param_1 + 0xd8),uVar1,
               *(undefined4 *)(param_1 + 0xcc));
  if (*(char *)(param_1 + 0xfa) != '\0') {
    *(undefined1 *)(param_1 + 0xfb) = 1;
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd0);
  }
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  *(int *)(param_1 + 0xd0) = (*(int *)(param_1 + 0xd0) + 1) % 2;
  return;
}
