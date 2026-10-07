// Renombra funciones por las cadenas que referencian (conservador) y anade comentario con las cadenas.
// - Si referencia exactamente un nombre de clase (typeinfo "<len><nombre>", mangled "Q2..." o "CXxx"): <Clase>_<addr>
// - Si no, y referencia cadenas "FE_*"/"FE*": fe_<cadena>_<addr>
// Solo renombra funciones que siguen llamandose FUN_*.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.util.*;
import java.util.regex.*;

public class ApplyStringNames extends GhidraScript {
    static final Pattern MANGLED = Pattern.compile("^Q2[0-9]+([A-Za-z_][A-Za-z0-9_]*?)([0-9]+)(C?[A-Za-z_][A-Za-z0-9_]*)$");
    static final Pattern TYPEINFO = Pattern.compile("^([0-9]+)([A-Za-z_][A-Za-z0-9_]+)$");
    static final Pattern CLASS = Pattern.compile("^C[A-Z][A-Za-z0-9]{3,}$");
    static final Pattern FE = Pattern.compile("^FE_?[A-Za-z0-9_]{3,}$");

    static String className(String s) {
        Matcher m = MANGLED.matcher(s);
        if (m.matches()) return m.group(1) + "_" + m.group(3);
        m = TYPEINFO.matcher(s);
        if (m.matches() && Integer.parseInt(m.group(1)) == m.group(2).length()) return m.group(2);
        if (CLASS.matcher(s).matches()) return s;
        return null;
    }

    static String clean(String s) { return s.replaceAll("[^A-Za-z0-9_]", "_"); }

    @Override
    protected void run() throws Exception {
        Map<Function, LinkedHashSet<String>> strs = new LinkedHashMap<>();
        for (Data d : currentProgram.getListing().getDefinedData(true)) {
            if (!d.hasStringValue()) continue;
            String s = String.valueOf(d.getValue());
            if (s.length() < 4) continue;
            for (Reference r : getReferencesTo(d.getAddress())) {
                Function f = getFunctionContaining(r.getFromAddress());
                if (f != null) strs.computeIfAbsent(f, k -> new LinkedHashSet<>()).add(s);
            }
        }
        int renamed = 0, commented = 0;
        for (Map.Entry<Function, LinkedHashSet<String>> e : strs.entrySet()) {
            Function f = e.getKey();
            Set<String> ss = e.getValue();
            StringBuilder c = new StringBuilder("Strings referenciadas:");
            int k = 0;
            for (String s : ss) {
                if (k++ >= 12) { c.append((char) 10).append("  ..."); break; }
                c.append((char) 10).append("  \"").append(s.replace((char) 10, ' ')).append("\"");
            }
            f.setComment(c.toString());
            commented++;
            if (!f.getName().startsWith("FUN_")) continue;
            Set<String> classes = new LinkedHashSet<>();
            String fe = null;
            for (String s : ss) {
                String cn = className(s);
                if (cn != null) classes.add(cn);
                if (fe == null && FE.matcher(s).matches()) fe = s;
            }
            String name = null;
            if (classes.size() == 1) name = clean(classes.iterator().next()) + "_" + f.getEntryPoint();
            else if (classes.isEmpty() && fe != null) name = "fe_" + clean(fe) + "_" + f.getEntryPoint();
            if (name != null) { f.setName(name, SourceType.USER_DEFINED); renamed++; }
        }
        println("Commented " + commented + ", renamed " + renamed);
    }
}
