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
public class Main {
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
        int[] x;

        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int n = in.nextInt(), ans = Integer.MIN_VALUE;
            int[][] m = new int[n][n];
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    m[i][j] = in.nextInt();
            for (int i = 0; i < n; i++) {
                x = new int[n];
                for (int j = i; j < n; j++) {
                    for (int k = 0; k < n; k++)
                        x[k] += m[j][k];
                    ans = Math.max(ans, getMax(n));
                }
            }
            out.println(ans);
        }

        int getMax(int n) {
            int t = 0, g = x[0];
            for (int i = 0; i < n; i++) {
                t += x[i];
                if (g < t) g = t;
                if (t < 0) t = 0;
            }
            return g;
        }

    }
}

