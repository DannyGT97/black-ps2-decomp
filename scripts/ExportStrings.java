// Exporta cada cadena definida con las funciones que la referencian (strings_xrefs.csv).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.util.*;

public class ExportStrings extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] a = getScriptArgs();
        File out = new File(a.length > 0 ? a[0] : "decomp_out"); out.mkdirs();
        PrintWriter w = new PrintWriter(new File(out, "strings_xrefs.csv"), "UTF-8");
        w.println("string_addr\tstring\tfunctions");
        int n = 0;
        for (Data d : currentProgram.getListing().getDefinedData(true)) {
            if (!d.hasStringValue()) continue;
            String s = String.valueOf(d.getValue());
            if (s.length() < 4) continue;
            LinkedHashSet<String> fs = new LinkedHashSet<>();
            for (Reference r : getReferencesTo(d.getAddress())) {
                Function f = getFunctionContaining(r.getFromAddress());
                if (f != null) fs.add(f.getEntryPoint().toString());
            }
            w.println(d.getAddress() + "\t" + s.replace("\t"," ").replace("\n","\n").replace("\r","") + "\t" + String.join(" ", fs));
            n++;
        }
        w.close();
        println("Strings exported: " + n);
    }
}
