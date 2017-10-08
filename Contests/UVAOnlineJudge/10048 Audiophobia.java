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
        AudioPhobia solver = new AudioPhobia();
        solver.solve(1, in, out);
        out.close();
    }

    static class AudioPhobia {
        final int INF = 999999999;

        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int t = 0;
            while (++t > 0) {
                int c = in.nextInt(), s = in.nextInt(), q = in.nextInt(), c1, c2, d;
                if (c == 0 && s == 0 && q == 0)
                    break;
                if (t > 1)
                    out.println();
                int[][] nodes = new int[c + 1][c + 1];
                for (int k = 1; k <= c; k++)
                    for (int i = 1; i <= c; i++)
                        nodes[i][k] = INF;
                for (int i = 1; i <= s; ++i) {
                    c1 = in.nextInt();
                    c2 = in.nextInt();
                    d = in.nextInt();
                    nodes[c1][c2] = min(nodes[c1][c2], d);
                    nodes[c2][c1] = nodes[c1][c2];
                }

                // Warshal Algorithm
                for (int k = 1; k <= c; k++)
                    for (int i = 1; i <= c; i++)
                        for (int j = 1; j <= c; j++)
                            nodes[i][j] = min(nodes[i][j], max(nodes[i][k], nodes[k][j]));
                int i = 0;
                out.println("Case #" + t);
                while (++i <= q) {
                    c1 = in.nextInt();
                    c2 = in.nextInt();
                    if (nodes[c1][c2] == INF) out.println("no path");
                    else
                        out.println(nodes[c1][c2]);
                }
            }
        }

        int min(int a, int b) {
            return a < b ? a : b;
        }

        int max(int a, int b) {
            return a > b ? a : b;
        }

    }
}

