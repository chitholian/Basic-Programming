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
        boolean[] b;

        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int n = in.nextInt();
            int m = 0, g = 0;
            b = new boolean[n + 1];
            for (int i = 0; i < n * 2; i++) {
                //out.println(m);
                int d = in.nextInt();
                m++;
                if (b[d]) {
                    m -= 2;
                    b[d] = false;
                } else b[d] = true;
                if (g < m) g = m;
            }
            out.println(g);
        }

    }
}

