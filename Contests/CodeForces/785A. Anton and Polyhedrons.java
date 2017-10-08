/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

import java.io.*;
import java.util.HashMap;
import java.util.Scanner;

public class Polyhedrons {
    public static void main(String[] args) throws Exception {
        long t1 = System.currentTimeMillis();
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        //inputStream = new FileInputStream("input.txt");
        //outputStream = new FileOutputStream("output.txt");

        Scanner in = new Scanner(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Solver solver = new Solver();
        solver.solve(in, out);
        out.close();
        System.err.println("\nRunning Time : " + (System.currentTimeMillis() - t1) + " ms");
    }

    static class Solver {
        public void solve(Scanner in, PrintWriter out) throws Exception {
            int n = in.nextInt();
            long t = 0;
            HashMap<String, Integer> m = new HashMap<>();
            m.put("Tetrahedron", 4);
            m.put("Cube", 6);
            m.put("Octahedron", 8);
            m.put("Dodecahedron", 12);
            m.put("Icosahedron", 20);
            while (n-- > 0) {
                t += m.get(in.next());
            }
            out.println(t);
        }
    }
}
