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
        TrainSwapping solver = new TrainSwapping();
        solver.solve(1, in, out);
        out.close();
    }

    static class TrainSwapping {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int n = in.nextInt(), l;
            while (n-- > 0) {
                l = in.nextInt();
                int[] a = new int[l], b = new int[l];
                for (int i = 0; i < l; ++i) {
                    a[i] = in.nextInt();
                    b[i] = a[i];
                }
                Arrays.sort(b);
                int p = 0;
                while (!Arrays.equals(a, b)) {
                    for (int i = 0; i < l - 1; ++i) {
                        if (a[i] > a[i + 1]) {
                            int k = a[i];
                            a[i] = a[i + 1];
                            a[i + 1] = k;
                            p++;
                        }
                    }
                }
                out.println("Optimal train swapping takes " + p + " swaps.");
            }
        }

    }
}

