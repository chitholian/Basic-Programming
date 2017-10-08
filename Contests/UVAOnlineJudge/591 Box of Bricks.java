import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Scanner;

/**
 * Built using CHelper plug-in
 * Actual solution is at the top
 *
 * @author Chitholian
 */
class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        Scanner in = new Scanner(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Task solver = new Task();
        solver.solve(1, in, out);
        out.close();
    }

    static class Task {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int t = 0;
            while (++t > 0) {
                int n = in.nextInt();
                if (n == 0) break;
                int s = 0;
                int[] hh = new int[n];
                for (int i = 0; i < n; i++) {
                    int h = in.nextInt();
                    s += h;
                    hh[i] = h;
                }
                int d = s / n, p = 0;
                for (int i = 0; i < n; i++) {
                    if (hh[i] - d > 0) p += hh[i] - d;
                }
                out.println("Set #" + t);
                out.println("The minimum number of moves is " + p + ".");
                out.println();
            }
        }

    }
}

