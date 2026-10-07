/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00110650 */
int fn_00110650(int param_1)

{
  if (*(char *)(param_1 + 0x7e1) != '\0') {
    return param_1 + 0x750;
  }
  return param_1 + 0x700;
}

extern int DAT_0040f0e4;
extern int DAT_0040f4c0;
/* ADDR 00110430 */
void fn_00110430(int param_1)

{
  if (*(char *)(param_1 + 0x7e1) != '\0') {
    fn_00101068(DAT_0040f0e4,*(undefined4 *)(DAT_0040f4c0 + 0xd540),param_1 + 0x700);
  }
  return;
}


/* ADDR 001176d0 */
void fn_001176d0(int param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xa0) != '\0') {
    fn_001188e0(param_1 + 4);
  }
  if (*(char *)(param_1 + 0xa1) != '\0') {
    fn_001175c0(param_1 + 0x20,param_2);
  }
  if (*(char *)(param_1 + 0xa2) != '\0') {
    fn_00118320(param_1 + 0x60,param_2);
  }
  return;
}


/* ADDR 00117668 */
undefined4 fn_00117668(int param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xa0) != '\0') {
    fn_00118858(param_1 + 4);
  }
  if (*(char *)(param_1 + 0xa1) != '\0') {
    fn_00116f68(param_1 + 0x20,param_2);
  }
  if (*(char *)(param_1 + 0xa2) != '\0') {
    fn_00118290(param_1 + 0x60,param_2);
  }
  return 1;
}
