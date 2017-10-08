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
        Reverses solver = new Reverses();
        solver.solve(1, in, out);
        out.close();
    }

    static class Reverses {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            while (in.hasNext()) {
                String[] s = in.nextLine().split(" ");
                for (int i = 0; i < s.length; i++)
                    out.print(new StringBuilder(s[i]).reverse() + (i == s.length - 1 ? "\n" : " "));
            }
        }

    }
}

