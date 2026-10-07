/* Tipos de Ghidra para compilar su pseudo-C con EE-GCC 2.95.2 (long = 64 bits, int/punteros = 32). */
#ifndef AUTO_TYPES_H
#define AUTO_TYPES_H
typedef long undefined8;
typedef int undefined4;
typedef short undefined2;
typedef char undefined1;
typedef char undefined;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned long ulong;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned char bool;
typedef void code();
#endif
