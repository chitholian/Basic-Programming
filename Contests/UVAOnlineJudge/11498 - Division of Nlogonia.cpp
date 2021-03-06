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
#define debug(x)       { cerr << #x << " = " << x << endl; }
#define lp(i, x, y)    for (auto  i = x; i <= y; i++)
#define lpi(i, x, y)   for (auto i = x; i >= y; i--)
#define it(itr, x)     for (auto itr = x.begin(); itr != x.end(); itr++)
#define iti(itr, x)    for (auto itr = x.rbegin(); itr != x.rend(); itr++)
typedef long long ll;
typedef pair<long, long> ii;
typedef pair<ii, long> iii;
typedef vector<long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;


/* Solution Begins */
void solve(int eof = 0) {
    int x;
    while (sc1(x)) {
        if (x == 0)
            break;
        long m, n, a, b;
        sc2(m, n);
        while (x--) {
            sc2(a, b);
            if (a == m || b == n) {
                cout << "divisa" << endl;
            } else if (a > m && b > n) {
                cout << "NE" << endl;
            } else if (a > m && b < n) {
                cout << "SE" << endl;
            } else if (a < m && b > n) {
                cout << "NO" << endl;
            } else {
                cout << "SO" << endl;
            }
        }
    }
}

/* Solution Ends */

int main() {
    ios::sync_with_stdio(false);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    int cases = 1, eof = 0;
    while (cases--) {
        solve(eof);
    }
    return 0;
}
