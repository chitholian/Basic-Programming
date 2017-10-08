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
            int n = in.nextInt(), cases = 0;
            while (n-- > 0) {
                String s[] = in.next().split("");
                Calendar c = Calendar.getInstance();
                c.set(Integer.parseInt(s[4] + s[5] + s[6] + s[7]), Integer.parseInt(s[0] + s[1]) - 1, Integer.parseInt(s[2] + s[3]));
                c.add(Calendar.DATE, 280);
                int m = c.get(Calendar.MONTH) + 1, d = c.get(Calendar.DATE);
                String name;
                if (m == 1 && d >= 21 || m == 2 && d <= 19)
                    name = "aquarius";
                else if (m == 2 && d >= 20 || m == 3 && d <= 20)
                    name = "pisces";
                else if (m == 3 && d >= 21 || m == 4 && d <= 20)
                    name = "aries";
                else if (m == 4 && d >= 21 || m == 5 && d <= 21)
                    name = "taurus";
                else if (m == 5 && d >= 22 || m == 6 && d <= 21)
                    name = "gemini";
                else if (m == 6 && d >= 22 || m == 7 && d <= 22)
                    name = "cancer";
                else if (m == 7 && d >= 23 || m == 8 && d <= 21)
                    name = "leo";
                else if (m == 8 && d >= 22 || m == 9 && d <= 23)
                    name = "virgo";
                else if (m == 9 && d >= 24 || m == 10 && d <= 23)
                    name = "libra";
                else if (m == 10 && d >= 24 || m == 11 && d <= 22)
                    name = "scorpio";
                else if (m == 11 && d >= 23 || m == 12 && d <= 22)
                    name = "sagittarius";
                else name = "capricorn";
                out.println(++cases + " " + (new SimpleDateFormat("MM/dd/yyyy")).format(c.getTime()) + " " + name);

            }
        }

    }
}

