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
        StaireCase solver = new StaireCase();
        solver.solve(1, in, out);
        out.close();
    }

    static class StaireCase {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int a = in.nextInt(), b = in.nextInt();
            int[] k = new int[b];
            for (int i = 0; i < b; i++) {
                k[i] = in.nextInt();
                if (k[i] == 1 || k[i] == a) {
                    out.println("NO");
                    return;
                }
            }
            Arrays.sort(k);
            for (int i = 1; i < b - 1; i++) {
                if (k[i] - k[i - 1] == 1 && k[i] == k[i + 1] - 1) {
                    out.println("NO");
                    return;
                }
            }
            out.println("YES");
        }

    }
}

