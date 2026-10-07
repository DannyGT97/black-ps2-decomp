/* Funciones triviales (getters, setters, constantes). Nombres neutros fn_<direccion> hasta conocer su rol. */

/* ADDR 00135550 */ int fn_00135550(int p) { return *(int *)(p + 0x32c); }
/* ADDR 002e3920 */ int fn_002e3920(int p) { return *(int *)(p + 0x10); }
/* ADDR 002e3918 */ int fn_002e3918(int p) { return *(int *)(p + 0x14); }
/* ADDR 00188f10 */ int fn_00188f10(int p) { return *(int *)(p + 0x120) != -1; }
/* ADDR 00173690 */ void fn_00173690(float *p) { *p = -1.0f; }
/* ADDR 00244ce8 */ void fn_00244ce8(int *p) { *p = *p - 1; }
/* ADDR 00193980 */ void fn_00193980(void) { }
/* ADDR 002a5548 */ int fn_002a5548(int x, ...) { return x; }
