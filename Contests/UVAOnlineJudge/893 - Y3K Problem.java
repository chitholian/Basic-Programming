import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Calendar;
import java.util.Scanner;
import java.text.SimpleDateFormat;
import java.text.DateFormat;

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
                long d = in.nextLong();
                int dd = in.nextInt(), mm = in.nextInt(), yy = in.nextInt();
                if (d == 0L && dd == 0) break;
                SimpleDateFormat f = new SimpleDateFormat("d M yyyy");
                Calendar c = Calendar.getInstance();
                c.set(yy, mm - 1, dd);
                c.setTimeInMillis(c.getTimeInMillis() + d * 3600L * 24L * 1000);
                out.println(f.format(c.getTime()));
            }
        }

    }
}

