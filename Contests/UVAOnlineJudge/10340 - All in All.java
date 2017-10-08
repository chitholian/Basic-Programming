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
            String a, b;
            while (in.hasNext()) {
                a = in.next();
                b = in.next();
                int l = b.length(), pos = 0, ll = a.length();
                for (int i = 0; i < l && pos < ll; i++) {
                    if (b.charAt(i) == a.charAt(pos))
                        pos++;
                }
                if (pos == ll)
                    out.println("Yes");
                else
                    out.println("No");
            }
        }

    }
}

