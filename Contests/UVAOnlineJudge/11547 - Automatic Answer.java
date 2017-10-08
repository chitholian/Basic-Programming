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
        Lottery solver = new Lottery();
        solver.solve(1, in, out);
        out.close();
    }

    static class Lottery {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int t = in.nextInt();
            while (t-- > 0) {
                int n = in.nextInt();
                String b = ((n * 567L / 9 + 7492) * 235 / 47 - 498) + "";
                out.println(b.substring(b.length() - 2, b.length() - 1));
            }
        }

    }
}

