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
            int n = Integer.parseInt(in.nextLine());
            while (n-- > 0) {
                String s = in.nextLine(), t;
                //out.println("---" + s + "---");
                while (true) {
                    t = s;
                    s = s.replace("()", "").replace("[]", "");
                    if (s.isEmpty()) {
                        out.println("Yes");
                        break;
                    } else if (t.equals(s)) {
                        out.println("No");
                        break;
                    }
                }
            }
        }

    }
}

