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
            int n = in.nextInt();
            while (n-- > 0) {
                int d = in.nextInt(), t = 0;
                int[] s = new int[d];
                for (int i = 0; i < d; i++) {
                    s[i] = in.nextInt();
                    t += s[i];
                }
                double av = t * 1.0 / d;
                t = 0;
                for (int i = 0; i < d; i++)
                    if (s[i] > av)
                        t++;
                out.printf("%.3f%%\n", t * 100.0 / d);
            }
        }

    }
}

