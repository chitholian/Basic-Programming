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
#define rp(x)	       while(x--)
#define lp(i, x, y)    for (auto i = x; i <= y; i++)
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
    int n, c = 0;
    sc1(n);
    rp(n) {
        int m, p;
        sc2(m, p);
        int a[p + 1], k = 0;
        rp(p) {
            int l;
            sc1(l);
            a[++k] = l;

        }
        lp(i, 1, k) {
            lp(j, i + 1, k) {
                if(i != j && a[i] + a[j] == m) {
                    cout << "Case #" << ++c << ": " << i << " " << j << endl;
                    i = j = k + 1;
                }
            }
        }
    }
}

/* Solution Ends */

int main() {
    ios::sync_with_stdio(false);
    freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    freopen("/mnt/ext42/Codes/Contests/CPP/out.txt", "w", stdout);
    int cases = 1, eof = 0;
    while(cases--) {
        solve(eof);
    }
    return 0;
}
