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
            while (true) {
                String n = in.next();
                if (n.equals("0")) break;
                int t = 0;
                int l = n.length();
                for (int i = 0; i < l; i++) {
                    t += Integer.parseInt(n.charAt(i) + "") * (Math.pow(2, l - i) - 1);
                }
                out.println(t);
            }
        }

    }
}

