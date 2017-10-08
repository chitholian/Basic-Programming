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
        SumDig solver = new SumDig();
        solver.solve(1, in, out);
        out.close();
    }

    static class SumDig {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            while (true) {
                String s = in.next();
                if (s.equals("0")) break;
                while (s.length() > 1) {
                    s = getS(s);
                }
                out.println(s);
            }
        }

        String getS(String s) {
            long l = 0;
            for (int i = 0; i < s.length(); i++)
                l += Long.parseLong(s.charAt(i) + "");
            return l + "";
        }

    }
}

