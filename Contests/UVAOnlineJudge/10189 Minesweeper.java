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
        Task solver = new Task();
        solver.solve(1, in, out);
        out.close();
    }

    static class Task {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int t = 0;
            while (++t > 0) {
                int n = in.nextInt(), m = in.nextInt();
                if (n == 0 && m == 0) break;
                if (t > 1)
                    out.println();
                String[] s = new String[n];
                for (int i = 0; i < n; i++) {
                    s[i] = in.next();
                }
                out.println("Field #" + t + ":");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (s[i].charAt(j) == '*')
                            out.print('*');
                        else {
                            int count = 0;
                            if (i > 0 && j > 0 && s[i - 1].charAt(j - 1) == '*') count++;
                            if (i > 0 && s[i - 1].charAt(j) == '*') count++;
                            if (i > 0 && m - j > 1 && s[i - 1].charAt(j + 1) == '*') count++;
                            if (j > 0 && s[i].charAt(j - 1) == '*') count++;
                            if (m - j > 1 && s[i].charAt(j + 1) == '*') count++;
                            if (n - i > 1 && j > 0 && s[i + 1].charAt(j - 1) == '*') count++;
                            if (n - i > 1 && s[i + 1].charAt(j) == '*') count++;
                            if (n - i > 1 && m - j > 1 && s[i + 1].charAt(j + 1) == '*') count++;
                            out.print(count);
                        }
                    }
                    out.println();
                }
            }
        }

    }
}

