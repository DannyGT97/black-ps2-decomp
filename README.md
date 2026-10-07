# black-ps2-decomp

<!-- PROGRESS:START -->
**Decompilacion verificada: 17.51% (funciones) / 2.22% (bytes)** | Identificadas: 3.67% | actualizado 2026-10-08
<!-- PROGRESS:END -->

Proyecto de decompilacion de **Black** (Criterion, 2006), version PS2 NTSC-U (`SLUS_213.76`).
Objetivo a largo plazo: reconstruir el codigo fuente al 100% para modding y para un port nativo (Windows y otras plataformas).

Este repositorio **no incluye** el ISO, el ejecutable ni ningun asset del juego. Cada persona debe aportar su propia copia (ver `.gitignore`).

## Estado

| Metrica | Valor |
|---|---|
| Funciones detectadas por Ghidra | 9.838 (rangos `0x100000`-`0x3fffff`) |
| Con nombre (syscalls PS2 + heuristicas) | 335 (~3,4%) |
| Descompilables a pseudo-C | 100% (0 fallos) |
| Compilan / son byte-exactas | 0% (aun no se ha empezado la fase de matching) |

## Hallazgos sobre el binario

- ELF stripped (sin simbolos), compilado con GCC 2.x para el R5900 (EE).
- IA: libreria **Kaim** (namespace `Kaim::`, p. ej. `CAgent`, `CTeam`, `CPathFinder`, `CActionShoot`). Cada clase se registra en un inicializador estatico que llama a `Kaim_CMetaClass_ctor` (`0x370168`) con el nombre mangled de la clase; el constructor guarda nombre en `this[0]`, vtable (`0x40bf00`) en `this[1]` y un parametro en `this[2]`.
- Clases del juego (`CShooterAgent`, `CActionSteering`, `CBkRwAICustomHeuristic`...) con otro patron de registro (varios `jal` distintos).
- Frontend/menus: scripts con intérprete tipo ActionScript (`getUTCSeconds`, `sendAndLoad`...), probablemente `FUN_00254120` (21 KB, la funcion mas grande). Variables `FE_*`.
- Video: decodificador MPEG-2 (`slice_start_code`), `.M2V` en el disco.
- Motor de render: RenderWare (modulos `RWA.IRX` y similares en `IOP/`).
- Mirrors de memoria `0x2xxxxxxx` y `0x3xxxxxxx` del mismo contenido: ignorar al analizar cadenas.

Mapa de modulos: `docs/modules.md` y `docs/address_map.md`.

## Flujo de trabajo

Requisitos locales (no versionados, en `tools/`): Ghidra 12.1.4, JDK 21 y el plugin `ghidra-emotionengine-reloaded` v2.1.38.
Procesador: `r5900:LE:32:default`.

Scripts en `scripts/` (se ejecutan con `analyzeHeadless ... -process SLUS_213.76 -postScript <script> <args>`):

| Script | Funcion |
|---|---|
| `ExportDecomp.java` | Exporta todo el pseudo-C en lotes de 200 funciones + `functions.csv` |
| `ExportStrings.java` | Cadenas con las funciones que las referencian (`strings_xrefs.csv`) |
| `ApplyStringNames.java` | Comenta y renombra funciones segun las cadenas que usan |
| `ExportClasses.java` | Llamadas de registro de clases (`classes.csv`) |
| `ApplyClassNames.java` | Renombra segun `classes.csv` |
| `ApplyManualNames.java` | Aplica `names/manual_names.csv` (nombres curados a mano; aqui se anotan los hallazgos) |
| `ExportCallCounts.java` | Llamadas entrantes por funcion (`callcounts.csv`); sirve para priorizar que nombrar |
| `update_progress.ps1` | Recalcula `PROGRESS.md` y la cabecera del README (ejecutar antes de cada commit) |
| `ExportAsm.java` | Ensamblador MIPS por funcion en `src/asm/` (base para el matching) |
| `show.sh` | `scripts/show.sh <dir_hex>` muestra el pseudo-C de una funcion |
| `ProbeClass.java` | Exploracion de una cadena concreta (salida muy larga si hay muchas copias) |

Las salidas generadas estan en `src/auto/` y se regeneran en cualquier momento.

## Matching (reconstruccion verificada)

Compilador: **EE-GCC 2.95.2 (SN v2.73a)** con `-O2 -G0` (comprobado: reproduce bytes exactos del original). Se descarga en `tools/ee-gcc` (no versionado); trae `as.exe` y `ld.exe`, no hace falta binutils aparte.
Fuente: https://bordplate.no/ee-gcc2.95.2-SN-v2.73a.tar.gz (extraer en `tools/ee-gcc`). En Windows hay que pasar `-B<ruta>/lib/gcc-lib/ee/2.95.2/` y `-B<ruta>/ee/bin/` al compilador (lo hace `scripts/build.ps1`).

- `src/c/**/*.c`: codigo reconstruido. Cada funcion lleva antes `/* ADDR xxxxxxxx */`.
- `scripts/build.ps1 [-Mark]`: compila y compara con el original (enmascara relocaciones). `-Mark` anade las que coinciden a `matched.txt`.
- `scripts/AutoMatch.ps1`: intenta reconstruir en bloque funciones a partir del pseudo-C de Ghidra (tipos en `include/auto_types.h`); solo conserva las que coinciden byte a byte (`src/c/auto/`).
- Tipos: `int` y punteros de 32 bits, `long` de 64 bits.

## Hoja de ruta

1. **Identificar bibliotecas** para no decompilar a mano lo que ya existe: SDK de Sony (`sce*`), RenderWare, Kaim, decodificador MPEG, libc/libstdc++ de GCC 2.x. Idealmente con firmas (Function ID de Ghidra, o comparando con objetos compilados con el mismo toolchain).
2. **Tipos y estructuras**: reconstruir clases desde las vtables y los constructores; crear tipos en Ghidra y propagarlos.
3. **Mapa de modulos**: dividir `0x100000`-`0x3fffff` en unidades de traduccion (el orden de enlazado suele conservar la separacion por archivo).
4. **Matching**: elegir el compilador (ee-gcc 2.95.x) y reescribir funcion a funcion en C/C++ hasta obtener binario identico (`objdiff`/`asm-differ`).
5. **Formatos de datos**: `GLOBDATA.BIN`, `LEVELS/*`, `SOUND/*.AWD`, `.AKU`, `.ICO`.
6. **Port**: capa de abstraccion para GS/SPU/IOP, reemplazando las llamadas a SDK de Sony.
