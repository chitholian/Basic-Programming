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
                String ss = in.next();
                String[] s = ss.split(":");
                if (s[0].equals("0") && s[1].equals("00")) break;
                double h = Double.parseDouble(s[0]) * 30 + Double.parseDouble(s[1]) * 0.5;
                double m = Double.parseDouble(s[1]) * 6;
                double angle = Math.abs(h - m);
                if (angle > 180.0) angle = 360.0 - angle;
                out.printf("%.3f\n", angle);
            }
        }

    }
}

