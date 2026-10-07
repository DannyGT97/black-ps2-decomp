// Aplica names/manual_names.csv (address,name,comment) al programa. Idempotente.
// Uso: -postScript ApplyManualNames.java <ruta manual_names.csv>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.util.*;

public class ApplyManualNames extends GhidraScript {
    @Override
    protected void run() throws Exception {
        List<String> lines = Files.readAllLines(Paths.get(getScriptArgs()[0]));
        int ok = 0, missing = 0;
        for (int i = 1; i < lines.size(); i++) {
            String l = lines.get(i).trim();
            if (l.isEmpty() || l.startsWith("#")) continue;
            String[] c = l.split(",", 3);
            Function f = getFunctionAt(toAddr(Long.parseLong(c[0].trim(), 16)));
            if (f == null) { println("No function at " + c[0]); missing++; continue; }
            f.setName(c[1].trim(), SourceType.USER_DEFINED);
            if (c.length > 2 && !c[2].trim().isEmpty()) f.setComment(c[2].trim());
            ok++;
        }
        println("ApplyManualNames applied " + ok + ", missing " + missing);
    }
}
