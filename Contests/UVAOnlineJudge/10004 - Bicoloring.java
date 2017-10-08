import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.AbstractCollection;
import java.util.Scanner;
import java.util.LinkedList;

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
        int[][] path;
        int col[];

        public void solve(int testNumber, Scanner in, PrintWriter out) {
            while (true) {
                int n = in.nextInt();
                if (n == 0) break;
                path = new int[n][n];
                col = new int[n];
                for (int j = 0; j < n; j++)
                    col[j] = -1;
                int l = in.nextInt();
                while (l-- > 0) {
                    int a = in.nextInt(), b = in.nextInt();
                    path[a][b] = 1;
                    path[b][a] = 1;
                }
                if (bip(0, n))
                    out.println("BICOLORABLE.");
                else
                    out.println("NOT BICOLORABLE.");
            }
        }

        boolean bip(int s, int n) {
            LinkedList<Integer> li = new LinkedList<>();
            li.add(s);
            col[s] = 1;
            while (!li.isEmpty()) {
                int c = li.poll();
                for (int d = 0; d < n; d++) {
                    if (path[c][d] == 1 && col[d] == -1) {
                        col[d] = col[c] - 1;
                        li.add(d);
                    } else if (path[c][d] == 1 && col[d] == col[c])
                        return false;
                }
            }
            return true;
        }

    }
}

