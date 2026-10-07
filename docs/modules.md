# Modulos del ejecutable (hipotesis a partir de cadenas y nombres)

Ver `docs/address_map.md` para los datos en bruto. Los limites son aproximados.

| Rango | Contenido probable | Evidencia |
|---|---|---|
| `0x100000-0x1fffff` | Codigo del juego (Criterion): HUD, armas, niveles, sonido, personajes, capa IA `CBkRwAI*` sobre RenderWare | `Kills: %d`, `PlyrWpn%d`, `Levels\Level_%02u\%s`, `CBkRwAIEntityCharacter`, `Collide.awd` |
| `0x200000-0x21ffff` | Frontend / menus del juego (variables `FE_*`) | `FE_LEVELNAME%d`, `Mission Failed`, `PRESS FIRE (R1) TO START` |
| `0x220000-0x26ffff` | Reproductor Flash **Apt** (EA) + interprete de ActionScript (`AS_Interpreter_main` en `0x254120`) | `AptTrace:`, `FSCommand:`, `AptAnimationPoolData::listen`, `LoadVars`, `sortOn` |
| `0x270000-0x28ffff` | Capa de motor con aserciones propias (`GTASSERT`), gestion de entidades/tiempo | `GTASSERT: (Thread %s)`, `MaxEntity`, `OneMeter`, `TimeMgt` |
| `0x290000-0x29ffff` | Biblioteca de decodificacion (buffers de imagen, alineacion), probablemente MPEG/IPU | `Unknown buff type.`, `internal alignment error.` |
| `0x2a0000-0x2cffff` | libm (`sqrtf`, `atan2`...), SDK de Sony: libcdvd | `SceCdNcmdSema`, `sqrtf` |
| `0x2d0000-0x33ffff` | Capa de IA del juego sobre Kaim: acciones, restricciones, pathfinding | `CActionSteering`, `CConstraintStealthPath`, `CPathFinder` |
| `0x340000-0x34ffff` | Animacion | `null animViewInfo` |
| `0x350000-0x35bfff` | SDK de Sony: memory card (`mc2`) | `sceMc2_sema_main`, `Sony PS2 Memory Card Format` |
| `0x35c000-0x36ffff` | libc (newlib): string.h, printf, ctype, stdlib | `bug in vfprintf: bad base`, `(null)` |
| `0x370000-0x37ffff` | Runtime C++ de GCC (typeinfo, excepciones) y constructores de CMetaClass | `9exception`, `__class_type_info`, `bad_typeid` |
| `0x380000-0x39ffff` | Kaim: inicializadores estaticos que registran metaclases (`Kaim_CMetaClass_ctor`) | `Q24Kaim7CObject`, `Q24Kaim10CGraphData` |
| `0x3a0000-0x3fffff` | Por analizar (probablemente codigo de arranque, crt0, SDK, stubs de syscalls en `0x367xxx`) | syscalls `FlushCache`, `AddIntcHandler` etc. |

Nota: los datos (`.data/.rodata/.bss`) empiezan sobre `0x3f0000`; hay tambien espejos de memoria en `0x2xxxxxxx` y `0x3xxxxxxx`.
