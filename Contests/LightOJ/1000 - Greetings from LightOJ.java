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
        Tester solver = new Tester();
        solver.solve(1, in, out);
        out.close();
    }

    static class Tester {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int n = in.nextInt();
            int t = 0;
            while (++t <= n) {
                int a = in.nextInt(), b = in.nextInt();
                out.println("Case " + t + ": " + (a + b));
            }
        }

    }
}

