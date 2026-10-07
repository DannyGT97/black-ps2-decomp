// Exploracion: para una cadena de nombre de clase, muestra quien la referencia y los datos alrededor.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;

public class ProbeClass extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String target = getScriptArgs()[0];
        Memory mem = currentProgram.getMemory();
        for (Data d : currentProgram.getListing().getDefinedData(true)) {
            if (!d.hasStringValue() || !target.equals(String.valueOf(d.getValue()))) continue;
            println("STRING " + target + " @ " + d.getAddress());
            for (Reference r : getReferencesTo(d.getAddress())) {
                Address a = r.getFromAddress();
                println(" ref from " + a + " type=" + r.getReferenceType() + " fn=" + getFunctionContaining(a));
                StringBuilder sb = new StringBuilder("   words: ");
                for (int i = -2; i < 4; i++) sb.append(String.format("%08x ", mem.getInt(a.add(i * 4L))));
                println(sb.toString());
                // quien referencia ese nodo
                Address node = a.subtract(4);
                for (Reference r2 : getReferencesTo(node)) {
                    Address b = r2.getFromAddress();
                    println("   node " + node + " referenced from " + b + " fn=" + getFunctionContaining(b));
                    StringBuilder s2 = new StringBuilder("     around: ");
                    for (int i = -3; i < 8; i++) s2.append(String.format("%08x ", mem.getInt(b.add(i * 4L))));
                    println(s2.toString());
                }
            }
        }
    }
}
