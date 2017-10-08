/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        long t1 = System.currentTimeMillis();
        InputStream inputStream;
        OutputStream outputStream;
        Scanner in;
        PrintWriter out;
        try {
            inputStream = System.in;
            //inputStream = new FileInputStream("/mnt/ext42/Codes/Contests/Java/input.txt");

            outputStream = System.out;
            //outputStream = new FileOutputStream("/mnt/ext42/Codes/Contests/Java/output.txt");

            in = new Scanner(inputStream);
            out = new PrintWriter(outputStream);
            Solver solver = new Solver();
            solver.solve(in, out);

            out.close();
            in.close();
        } catch (Exception error) {
            error.printStackTrace();
        }

        System.err.println("\nExecution Time : " + (System.currentTimeMillis() - t1) + " ms");
    }

    static class Solver {
        public void solve(Scanner in, PrintWriter out) {
            out.println("PERFECTION OUTPUT");
            while (true) {
                int n = in.nextInt();
                if (n == 0) break;
                int s = sum(n);
                out.format("%5d  %s\n", n, (s > n ? "ABUNDANT" : (s < n ? "DEFICIENT" : "PERFECT")));
            }
            out.println("END OF OUTPUT");
        }

        int sum(int n) {
            int t = 1, r = (int) Math.sqrt(n);
            for (int i = 2; i <= r; i++) {
                if (n % i == 0) {
                    t += i;
                    t += n / i;
                    if (t > n) return t;
                }
            }
            if (r * r == n) return t - r;
            else return t;
        }
    }
}
