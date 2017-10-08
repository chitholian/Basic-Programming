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
        C762A solver = new C762A();
        solver.solve(1, in, out);
        out.close();
    }

    static class C762A {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            long n = in.nextLong(), k = in.nextLong(), answer = 0;
            long a = (long) Math.sqrt(n);

            for (int i = 1; i <= a; ++i) {
                if (n % i == 0) {
                    answer++;
                    if (answer == k) {
                        out.println(i);
                        return;
                    }
                }
            }
            if (a * a == n) answer += answer - 1;
            else answer += answer;
            if (answer < k) {
                out.println(-1);
                return;
            }
            answer -= k - 1;
            long s = 0;
            for (int i = 1; i <= a; ++i) {
                if (n % i == 0) {
                    s++;
                    if (answer == s) {
                        out.println(n / i);
                        return;
                    }
                }
            }
        }

    }
}

