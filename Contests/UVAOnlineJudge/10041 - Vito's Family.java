import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
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
        Rela solver = new Rela();
        solver.solve(1, in, out);
        out.close();
    }

    static class Rela {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int n = in.nextInt();
            while (n-- > 0) {
                int m = in.nextInt();
                int[] re = new int[m];
                for (int i = 0; i < m; i++) {
                    re[i] = in.nextInt();
                }
                Arrays.sort(re);
                int d = 0, mid = re[m / 2];
                for (int i = 0; i < m; i++) {
                    d += Math.abs(mid - re[i]);
                }
                out.println(d);
            }
        }

    }
}

