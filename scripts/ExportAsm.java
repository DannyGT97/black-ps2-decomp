// Exporta el ensamblador MIPS R5900 de cada funcion en lotes (mismo reparto que ExportDecomp: 200 funciones/lote).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.util.*;

public class ExportAsm extends GhidraScript {
    @Override
    protected void run() throws Exception {
        File out = new File(getScriptArgs()[0]); out.mkdirs();
        List<Function> funcs = new ArrayList<>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (!f.isExternal() && !f.isThunk()) funcs.add(f);
        }
        PrintWriter w = null;
        Listing lst = currentProgram.getListing();
        for (int i = 0; i < funcs.size(); i++) {
            if (i % 200 == 0) {
                if (w != null) w.close();
                w = new PrintWriter(new File(out, String.format("asm_%04d.s", i / 200)), "UTF-8");
            }
            Function f = funcs.get(i);
            w.printf("# ==== %s @ %s ====%n", f.getName(), f.getEntryPoint());
            for (Instruction ins : lst.getInstructions(f.getBody(), true)) {
                StringBuilder raw = new StringBuilder();
                try { for (byte b : ins.getBytes()) raw.append(String.format("%02x", b)); } catch (Exception e) { }
                w.printf("  %s  %-8s  %s%n", ins.getAddress(), raw, ins.toString());
            }
            w.println();
        }
        if (w != null) w.close();
        println("Asm exported for " + funcs.size() + " functions");
    }
}
