// Para cada cadena de nombre de clase (Q2...Kaim..., CXxx) referenciada desde codigo, busca la llamada (jal)
// de registro cercana y las constantes cargadas en a2. Escribe classes.csv.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class ExportClasses extends GhidraScript {
    static final Pattern NAME = Pattern.compile("^(Q[0-9]+[A-Za-z_][A-Za-z0-9_]*|C[A-Z][A-Za-z0-9]{3,}|[0-9]+[A-Za-z_][A-Za-z0-9_]+)$");

    @Override
    protected void run() throws Exception {
        String[] a = getScriptArgs();
        File out = new File(a.length > 0 ? a[0] : "decomp_out"); out.mkdirs();
        Memory mem = currentProgram.getMemory();
        PrintWriter w = new PrintWriter(new File(out, "classes.csv"), "UTF-8");
        w.println("class,string_addr,function,ref_addr,jal_target,a2_value");
        int n = 0;
        for (Data d : currentProgram.getListing().getDefinedData(true)) {
            if (!d.hasStringValue()) continue;
            long sa = d.getAddress().getOffset();
            if (sa >= 0x20000000L) continue; // espejos de memoria
            String s = String.valueOf(d.getValue());
            if (!NAME.matcher(s).matches()) continue;
            for (Reference r : getReferencesTo(d.getAddress())) {
                Address ra = r.getFromAddress();
                Function f = getFunctionContaining(ra);
                if (f == null) continue;
                long jal = -1, a2 = -1, hi = -1, lo = Long.MIN_VALUE;
                for (int i = -6; i <= 10; i++) {
                    int word;
                    try { word = mem.getInt(ra.add(i * 4L)); } catch (Exception ex) { continue; }
                    int op = word >>> 26, rs = (word >>> 21) & 31, rt = (word >>> 16) & 31;
                    if (op == 0x03 && i >= 0 && jal < 0) jal = (word & 0x3ffffff) * 4L;
                    if (op == 0x0f && rt == 6) hi = (word & 0xffff) << 16;
                    if (op == 0x09 && rt == 6 && rs == 6) lo = (short) (word & 0xffff);
                }
                if (hi >= 0 && lo != Long.MIN_VALUE) a2 = hi + lo;
                w.printf("%s,%s,%s,%s,%s,%s%n", s, d.getAddress(), f.getEntryPoint(), ra,
                    jal < 0 ? "" : String.format("%08x", jal), a2 < 0 ? "" : String.format("%08x", a2));
                n++;
            }
        }
        w.close();
        println("Class refs exported: " + n);
    }
}
