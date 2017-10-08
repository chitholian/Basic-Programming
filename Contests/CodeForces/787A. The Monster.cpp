/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <bits/stdc++.h>

using namespace std;
#define mp             make_pair
#define pb             push_back
#define fi             first
#define se             second
#define sz(x)          (long)((x).size())
#define fill(x, y)     memset(x, y, sizeof(y))
#define all(x)         (x).begin(), (x).end()
#define sc1(x)         cin >> x
#define sc2(x, y)      cin >> x >> y
#define sc3(x, y, z)   cin >> x >> y >> z
#define gl(x)          getline(cin, x)
#define rp(x)          while(x--)
#define tr(i, x)       for(auto i : x)
#define lp(i, x, y)    for(__typeof(x) i = x; i <= y; i++)
#define lpi(i, x, y)   for(__typeof(x) i = x; i >= y; i--)
#define it(itr, x)     for(__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr++)
#define iti(itr, x)    for(__typeof(x.rbegin()) itr = x.rbegin(); itr != x.rend(); itr++)
#define SP             << " "
#define eol            << "\n"
#define PR             cout <<
typedef pair<long, long> ii;
typedef pair<ii, long> iii;
typedef vector<long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

/* Solution Begins */
void solve() {
    long a, b, c, d;
    sc3(a, b, c);
    sc1(d);

    if (b < d) {
        long f = b;
        b = d;
        d = f;

        f = c;
        c = a;
        a = f;
    }
    long n = 0, m, p;
    m = (b - d + n * a) % c;
    p = m;
    while (m) {
        n++;
        m = (b - d + n * a) % c;
        if (m == p)
            break;
    }
    if (m == 0) {
        PR b + n * a eol;
    } else
        PR -1 eol;
}

/* Solution Ends */

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    //freopen("/mnt/ext42/Codes/Contests/CPP/out.txt", "w", stdout);
    int cases = 1;
    while (cases--) {
        solve();
    }
    cout << flush;
    return 0;
}
