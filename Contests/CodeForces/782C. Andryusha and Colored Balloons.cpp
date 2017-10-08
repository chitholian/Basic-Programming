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
int col[200001], par[200001], ans;
vi ad[200001];

void colorize(int n) {
    int c = 1;
    it(i, ad[n]) {
        if (col[*i]) continue;
        while (c == col[n] || c == col[par[n]]) c++;
        col[*i] = c++;
        par[*i] = n;
        colorize((int) *i);
    }
}

void solve() {
    int n, m;
    sc1(n);
    m = n;
    m--;
    rp(m) {
        int a, b;
        sc2(a, b);
        ad[a].pb(b);
        ad[b].pb(a);
    }
    ans = 0;
    lp(i, 1, n) {
        ans = max(ans, (int) ad[i].size() + 1);
    }
    col[1] = par[1] = 1;
    colorize(1);
    PR ans eol;
    lp(i, 1, n) PR col[i] SP;
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
