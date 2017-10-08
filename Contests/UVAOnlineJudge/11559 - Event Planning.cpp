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
    long n, b, h, w, p, e;
    while(sc1(n)) {
        sc3(b, h, w);
        long ww = w;
        long minimum = b + 1;
        while(h--) {
            sc1(p);
            w = ww;
            while(w--) {
                sc1(e);
                if(e >= n && n * p < minimum)
                    minimum = n * p;
            }
        }
        if(minimum == b + 1)
            cout << "stay home" << endl;
        else cout << minimum << endl;
    }
}

/* Solution Ends */

int main() {
    ios::sync_with_stdio(false);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    int cases = 1, eof = 0;
    if(cases--) {
        solve(eof);
    }
    return 0;
}
