/*     Atikur Rahman Chitholian
 *           CSE 2015-16
 *     University of Chittagong
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String string, pattern;

        if (args.length == 3) { // input from arguments.
            string = args[1];
            pattern = args[2];
        } else { // input from stdin.
            System.out.print("Enter a string: ");
            string = in.nextLine();
            System.out.print("Enter a pattern: ");
            pattern = in.nextLine();
        }

        System.out.print("Comparisons: " + comparisonsNeeded(string, pattern));
    }

    /**
     * Calculating number of comparisons needed for pattern matching.
     * Using Pattern Matching Algorithm 1.
     * *** Note: if the length of given pattern is greater than the
     * length of given string, it will return 0, because, in that case
     * making any comparison is useless, i.e. matching is not possible.
     *
     * @param T: given string.
     * @param P: given pattern.
     * @return : number of comparisons required.
     */
    public static int comparisonsNeeded(String T, String P) {
        int comparisons = 0;
        int K = 1, MAX = T.length() - P.length() + 1;
        while (K <= MAX) {
            for (int L = 0; L <= P.length() - 1; ++L) {
                comparisons++;
                if (P.charAt(L) != T.charAt(K + L - 1)) {
                    break;
                } else if (P.length() == L + 1) return comparisons;
            }
            K++;
        }
        return comparisons;
    }
}
