import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Scanner;
import java.math.BigInteger;

/**
 * Built using CHelper plug-in
 * Actual solution is at the top
 *
 * @author Chitholian
 */
 class Main {
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
            while (in.hasNextInt()) {
                int n = in.nextInt();
                BigInteger b = in.nextBigInteger();
                out.println(floorOfNthRoot(b, n));
            }
        }

        public static BigInteger floorOfNthRoot(BigInteger x, int n) {
            int sign = x.signum();
            if (n <= 0 || (sign < 0))
                throw new IllegalArgumentException();
            if (sign == 0)
                return BigInteger.ZERO;
            if (n == 1)
                return x;
            BigInteger a;
            BigInteger bigN = BigInteger.valueOf(n);
            BigInteger bigNMinusOne = BigInteger.valueOf(n - 1);
            BigInteger b = BigInteger.ZERO.setBit(1 + x.bitLength() / n);
            do {
                a = b;
                b = a.multiply(bigNMinusOne).add(x.divide(a.pow(n - 1))).divide(bigN);
            } while (b.compareTo(a) == -1);
            return a;
        }

    }
}

