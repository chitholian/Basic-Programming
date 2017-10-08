/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

class Solver {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        TaskA solver = new TaskA();
        solver.solve(1, in, out);
        out.close();
    }

    static class TaskA {
        public void solve(int testNumber, InputReader in, PrintWriter out) {
            int n, k;
            n = in.nextInt();
            k = in.nextInt();
            Item items[] = new Item[n];
            for (int i = 0; i < n; ++i) {
                items[i] = new Item();
                items[i].a = in.nextInt();
            }
            for (int i = 0; i < n; ++i) {
                items[i].b = in.nextInt();
                items[i].c = items[i].a - items[i].b;
            }
            int p = 0;
            Arrays.sort(items, (a, b) -> {
                return Integer.compare(a.c, b.c);
            });
            for (int i = 0; i < n; ++i) {
                if (k > 0 || items[i].a < items[i].b) {
                    p += items[i].a;
                    k--;
                } else {
                    p += items[i].b;
                }
            }
            out.println(p);
        }

        static class Item {
            int a, b, c;
        }
    }

    static class InputReader {
        public BufferedReader reader;
        public StringTokenizer tokenizer;

        public InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream), 32768);
            tokenizer = null;
        }

        public String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }

    }
}