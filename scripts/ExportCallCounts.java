// Escribe callcounts.csv: direccion, nombre, tamano, llamadas entrantes (distintos llamadores), llamadas salientes.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class ExportCallCounts extends GhidraScript {
    @Override
    protected void run() throws Exception {
        File out = new File(getScriptArgs()[0]); out.mkdirs();
        PrintWriter w = new PrintWriter(new File(out, "callcounts.csv"), "UTF-8");
        w.println("address,name,size_bytes,callers,callees");
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (f.isExternal()) continue;
            Set<Function> callers = new HashSet<>();
            int sites = 0;
            for (Reference r : getReferencesTo(f.getEntryPoint())) {
                if (!r.getReferenceType().isCall()) continue;
                sites++;
                Function c = getFunctionContaining(r.getFromAddress());
                if (c != null) callers.add(c);
            }
            w.printf("%s,%s,%d,%d,%d%n", f.getEntryPoint(), f.getName(), f.getBody().getNumAddresses(), sites, f.getCalledFunctions(monitor).size());
        }
        w.close();
        println("callcounts done");
    }
}
