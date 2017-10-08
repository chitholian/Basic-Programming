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
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int t = in.nextInt(), ll;
            ll = 0;
            while (++ll <= t) {
                if (ll > 1)
                    out.println();
                int a = in.nextInt(), b = in.nextInt();
                for (int i = 0; i < b; i++) {
                    if (i > 0) out.println();
                    for (int j = 1; j <= a; j++) {
                        for (int k = 1; k <= j; k++)
                            out.print(j);
                        out.println();
                    }
                    for (int j = a - 1; j > 0; j--) {
                        for (int k = 1; k <= j; k++)
                            out.print(j);
                        out.println();
                    }
                }
            }
        }

    }
}

