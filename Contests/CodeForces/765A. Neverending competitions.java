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
class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        Scanner in = new Scanner(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        C766B solver = new C766B();
        solver.solve(1, in, out);
        out.close();
    }

    static class C766B {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int n;
            n = in.nextInt();
            int[] lines = new int[n];
            for (int i = 0; i < n; i++) {
                lines[i] = in.nextInt();
            }
            Arrays.sort(lines);
            for (int i = 0; i < n - 2; i++) {
                if (lines[i] + lines[i + 1] > lines[i + 2]) {
                    out.println("YES");
                    return;
                }
            }
            out.println("NO");
        }

    }
}

