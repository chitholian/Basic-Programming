/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

import javafx.util.Pair;

import java.io.*;
import java.util.Scanner;
import java.util.Vector;

public class Classes {
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
            Vector<Pair<Integer, Integer>> v1 = new Vector<>(2), v2 = new Vector<>(2);
            v1.add(new Pair<>(-1, 1000000001));
            v1.add(new Pair<>(-1, 1000000001));
            v2.add(new Pair<>(-1, 1000000001));
            v2.add(new Pair<>(-1, 1000000001));
            while (n-- > 0) {
                int a = in.nextInt(), b = in.nextInt();
                if (v1.get(0).getValue() > b) {
                    v1.setElementAt(new Pair<>(a, b), 0);
                }
                if (v1.get(1).getKey() < a) {
                    v1.setElementAt(new Pair<>(a, b), 1);
                }
            }
            int m = in.nextInt();
            while (m-- > 0) {
                int a = in.nextInt(), b = in.nextInt();
                if (v2.get(0).getValue() > b) {
                    v2.setElementAt(new Pair<>(a, b), 0);
                }
                if (v2.get(1).getKey() < a) {
                    v2.setElementAt(new Pair<>(a, b), 1);
                }
            }
            int a = v2.get(1).getKey() - v1.get(0).getValue(), b = v1.get(1).getKey() - v2.get(0).getValue();
            if (a < 0 && b < 0) out.println("0");
            else if (a <= b) out.println(b);
            else if (a > b) out.println(a);
        }
    }
}
