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
    long p, r;
    int n = 0;
    while(sc2(r, p)) {
        if(r == 0) break;
        string pn, rn;
        int met = -1;
        double pr = 10e10;
        getline(cin, rn);
        rp(r) {
            getline(cin, rn);
        }
        rp(p) {
            string pnn;
            getline(cin, pnn);
            double d;
            int m;
            sc2(d, m);
            if(m > met || (m == met && d < pr)) {
                met = m;
                pr = d;
                pn = pnn;
            }

            getline(cin, rn);
            rp(m) {
                getline(cin, rn);
            }
        }
        if(n > 0) cout << endl;
        cout << "RFP #" << ++n << endl << pn << endl;
    }
}

/* Solution Ends */

int main() {
    ios::sync_with_stdio(false);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    int cases = 1, eof = 0;
    while(cases--) {
        solve(eof);
    }
    return 0;
}
