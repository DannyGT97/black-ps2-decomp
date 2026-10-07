// Exporta todas las funciones decompiladas en lotes y un indice CSV.
// Uso: analyzeHeadless <proyecto> Black -process SLUS_213.76 -noanalysis -scriptPath <scripts> -postScript ExportDecomp.java <dir_salida>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;

public class ExportDecomp extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] a = getScriptArgs();
        File out = new File(a.length > 0 ? a[0] : "decomp_out");
        out.mkdirs();
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        List<Function> funcs = new ArrayList<>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (!f.isExternal() && !f.isThunk()) funcs.add(f);
        }
        PrintWriter idx = new PrintWriter(new File(out, "functions.csv"));
        idx.println("address,name,size_bytes,batch");
        final int BATCH = 200;
        PrintWriter w = null;
        int fail = 0;
        for (int i = 0; i < funcs.size(); i++) {
            if (monitor.isCancelled()) break;
            if (i % BATCH == 0) {
                if (w != null) w.close();
                w = new PrintWriter(new File(out, String.format("batch_%04d.c", i / BATCH)));
            }
            Function f = funcs.get(i);
            idx.printf("%s,%s,%d,%d%n", f.getEntryPoint(), f.getName(), f.getBody().getNumAddresses(), i / BATCH);
            DecompileResults r = di.decompileFunction(f, 30, monitor);
            w.printf("// ==== %s @ %s ====%n", f.getName(), f.getEntryPoint());
            if (r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
            else { w.println("// DECOMPILE FAILED: " + r.getErrorMessage()); fail++; }
        }
        if (w != null) w.close();
        idx.close();
        println("Exported " + funcs.size() + " functions, failed " + fail);
    }
}
