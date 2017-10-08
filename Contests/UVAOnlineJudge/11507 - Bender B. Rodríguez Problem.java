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
            long l;
            while (true) {
                l = in.nextLong();
                if (l == 0L) break;
                String d, c = "+x";
                while (--l > 0) {
                    d = in.next();
                    if (d.equals("+y") && c.equals("-y") || d.equals("+z") && c.equals("-z") || d.equals("-z") && c.equals("+z") || d.equals("-y") && c.equals("+y")) {
                        c = "+x";
                    } else if (d.equals("+y") && c.equals("+y") || d.equals("+z") && c.equals("+z") || d.equals("-y") && c.equals("-y") || d.equals("-z") && c.equals("-z")) {
                        c = "-x";
                    } else if (d.equals("+z") && c.equals("+x") || d.equals("-z") && c.equals("-x")) {
                        c = "+z";
                    } else if (d.equals("+y") && c.equals("+x") || d.equals("-y") && c.equals("-x")) {
                        c = "+y";
                    } else if (d.equals("+y") && c.equals("-x") || d.equals("-y") && c.equals("+x")) {
                        c = "-y";
                    } else if (d.equals("+z") && c.equals("-x") || d.equals("-z") && c.equals("+x")) {
                        c = "-z";
                    }
                }
                out.println(c);
            }
        }

    }
}

