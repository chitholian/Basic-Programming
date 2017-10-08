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
        Task solver = new Task();
        solver.solve(1, in, out);
        out.close();
    }

    static class Task {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int n = in.nextInt();
            for (int i = 1; i <= n; i++) {
                int[] ar = new int[3];
                ar[0] = in.nextInt();
                ar[1] = in.nextInt();
                ar[2] = in.nextInt();
                Arrays.sort(ar);
                out.println("Case " + i + ": " + ar[1]);
            }
        }

    }
}

