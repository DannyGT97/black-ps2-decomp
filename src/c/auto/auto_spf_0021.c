/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */

extern undefined4 DAT_003be83c;
extern int DAT_003be840;
extern int DAT_0040f0e0;
/* ADDR 00212048 */
void fn_00212048(void)

{
  DAT_003be83c = *(undefined4 *)(DAT_0040f0e0 + 0x20150);
  DAT_003be840 = (int)(*(float *)(DAT_0040f0e0 + 0x20158) * 100.0f);
  return;
}

/* ---- */
void fn_00105258(int param_1);
void fn_0010b2a8(int param_1);
extern undefined4 DAT_003be84c;
extern int DAT_0040f0e0;
extern undefined4 DAT_0040f4f0;
/* ADDR 00215788 */
void fn_00215788(void)

{
  fn_00105258(DAT_0040f0e0 + 0x20220);
  fn_0010b2a8(DAT_0040f4f0);
  DAT_003be84c = 0;
  return;
}

/* ---- */
void fn_00105228(int param_1,undefined4 param_2);
void fn_001f2838(undefined8 param_1,char param_2,undefined8 param_3);
undefined4 fn_0020b988(undefined8 param_1,int param_2);
extern int DAT_0040f0e0;
extern undefined4 DAT_0040f51c;
extern undefined4 DAT_0040f544;
/* ADDR 002124d0 */
void fn_002124d0(void)

{
  fn_001f2838(DAT_0040f51c,0,1);
  fn_0020b988(DAT_0040f544,4);
  fn_00105228(DAT_0040f0e0 + 0x20220,1);
  return;
}

/* ---- */
void fn_00103818(int param_1);
void fn_001f2838(undefined8 param_1,char param_2,undefined8 param_3);
void fn_0020aff8(int param_1);
undefined4 fn_0020b988(undefined8 param_1,int param_2);
extern undefined4 DAT_0040f0e0;
extern undefined4 DAT_0040f51c;
extern int DAT_0040f544;
/* ADDR 00210160 */
void fn_00210160(void)

{
  fn_001f2838(DAT_0040f51c,0,*(undefined4 *)(DAT_0040f544 + 0x3928));
  fn_0020b988(DAT_0040f544,4);
  fn_0020aff8(DAT_0040f544);
  fn_00103818(DAT_0040f0e0);
  return;
}

/* ---- */
void fn_00211c90(void);
extern undefined4 DAT_003be82c;
extern int DAT_003be830;
extern int DAT_003be834;
extern int DAT_0040f0e0;
/* ADDR 00211d10 */
void fn_00211d10(void)

{
  DAT_003be82c = *(undefined4 *)(DAT_0040f0e0 + 0x20154);
  DAT_003be830 = (int)(*(float *)(DAT_0040f0e0 + 0x2015c) * 100.0f);
  DAT_003be834 = (int)(*(float *)(DAT_0040f0e0 + 0x20160) * 100.0f);
  fn_00211c90();
  return;
}

/* ---- */
void fn_00108bb8(int param_1);
extern undefined4 DAT_003be83c;
extern int DAT_003be840;
extern int DAT_0040f0e0;
/* ADDR 00212088 */
void fn_00212088(void)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x20150) = DAT_003be83c;
  *(float *)(DAT_0040f0e0 + 0x20158) = (float)DAT_003be840 / 100.0f;
  fn_00108bb8(DAT_0040f0e0 + 0x2014c);
  return;
}

/* ---- */
void fn_00211c90(void);
extern undefined4 DAT_003be82c;
extern int DAT_003be830;
extern int DAT_003be834;
extern int DAT_0040f0e0;
/* ADDR 00211d78 */
void fn_00211d78(void)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x20154) = DAT_003be82c;
  *(float *)(DAT_0040f0e0 + 0x2015c) = (float)DAT_003be830 / 100.0f;
  *(float *)(DAT_0040f0e0 + 0x20160) = (float)DAT_003be834 / 100.0f;
  fn_00211c90();
  return;
}
