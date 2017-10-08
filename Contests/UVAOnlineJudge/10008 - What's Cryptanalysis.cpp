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
vector<pair<int, char>> m;
void solve (int eof = 0) {
    int init = 64;
    while (++init < 91) {
        m.pb (mp (0, init));
    }
    int n;
    sc1 (n);
    char c;
    while (sc1 (c)) {
        if (c >= 'a' && c <= 'z')
            c -= 32;
        if (c >= 'A' && c <= 'Z') {
            (m.at (c - 'A')).fi++;
        }
    }
    sort (all (m), [ = ] (pair<int, char>& a, pair<int, char>& b) {
        if (a.fi == b.fi)
            return a.se < b.se;
        return a.fi > b.fi;
    });
    for (int i = 0 ; i < 26; i++) {
        if (m.at (i).fi > 0)
            cout << m.at (i).se << " " << m.at (i).fi << endl;
    }
}

/* Solution Ends */

int main() {
    ios::sync_with_stdio (false);
    //freopen ("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    int cases = 1, eof = 0;
    while (cases--) {
        solve (eof);
    }
    return 0;
}
