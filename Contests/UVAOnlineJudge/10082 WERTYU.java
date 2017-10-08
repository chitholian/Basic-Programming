import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.List;
import java.util.Arrays;
import java.util.Scanner;

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
        WERTYU solver = new WERTYU();
        solver.solve(1, in, out);
        out.close();
    }

    static class WERTYU {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            String s;
            Character[] ch = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
                    'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
                    'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
                    'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'
            };
            while (in.hasNextLine()) {
                s = in.nextLine();
                for (int i = 0; i < s.length(); ++i) {
                    if (s.charAt(i) == ' ')
                        out.print(" ");
                    else
                        out.print(ch[Arrays.asList(ch).indexOf(s.charAt(i)) - 1]);
                }
                out.println();
            }
        }

    }
}

