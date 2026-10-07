// Lee classes.csv y renombra funciones FUN_* que registran exactamente una clase.
// Tambien nombra el constructor de CMetaClass (0x370168) y su vtable (0x40bf00).
// Uso: -postScript ApplyClassNames.java <ruta classes.csv>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class ApplyClassNames extends GhidraScript {

    // Q2 4Kaim 7CObject -> Kaim_CObject ; "7CObject" -> CObject ; "CObject" -> CObject. null si no es simple.
    static String simplify(String s) {
        if (s.length() > 1 && s.charAt(0) == 'Q' && Character.isDigit(s.charAt(1))) {
            int n = s.charAt(1) - '0', p = 2;
            StringBuilder sb = new StringBuilder();
            for (int k = 0; k < n; k++) {
                int q = p;
                while (q < s.length() && Character.isDigit(s.charAt(q))) q++;
                if (q == p) return null;
                int len = Integer.parseInt(s.substring(p, q));
                if (q + len > s.length()) return null;
                if (sb.length() > 0) sb.append('_');
                sb.append(s, q, q + len);
                p = q + len;
            }
            return p == s.length() ? sb.toString() : null;
        }
        int q = 0;
        while (q < s.length() && Character.isDigit(s.charAt(q))) q++;
        if (q > 0) {
            if (Integer.parseInt(s.substring(0, q)) != s.length() - q) return null;
            return s.substring(q);
        }
        return s;
    }

    static boolean ident(String s) {
        if (s == null || s.isEmpty()) return false;
        for (char c : s.toCharArray()) if (!(Character.isLetterOrDigit(c) || c == '_')) return false;
        return true;
    }

    @Override
    protected void run() throws Exception {
        Map<String, LinkedHashSet<String>> byFunc = new LinkedHashMap<>();
        List<String> lines = Files.readAllLines(Paths.get(getScriptArgs()[0]));
        for (int i = 1; i < lines.size(); i++) {
            String[] c = lines.get(i).split(",", -1);
            if (c.length < 3) continue;
            String cls = simplify(c[0]);
            if (!ident(cls)) continue;
            byFunc.computeIfAbsent(c[2], k -> new LinkedHashSet<>()).add(cls);
        }
        int renamed = 0;
        for (Map.Entry<String, LinkedHashSet<String>> e : byFunc.entrySet()) {
            if (e.getValue().size() != 1) continue;
            Function f = getFunctionAt(toAddr(Long.parseLong(e.getKey(), 16)));
            if (f == null || !f.getName().startsWith("FUN_")) continue;
            f.setName(e.getValue().iterator().next() + "_" + f.getEntryPoint(), SourceType.USER_DEFINED);
            renamed++;
        }
        Function ctor = getFunctionAt(toAddr(0x370168L));
        if (ctor != null && ctor.getName().startsWith("FUN_")) { ctor.setName("Kaim_CMetaClass_ctor", SourceType.USER_DEFINED); renamed++; }
        createLabel(toAddr(0x40bf00L), "vtbl_Kaim_CMetaClass", true);
        println("ApplyClassNames renamed " + renamed);
    }
}
