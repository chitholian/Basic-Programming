/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <bits/stdc++.h>

using namespace std;
#define fl(x, v)            fill(x, x + sizeof x / sizeof *x, v)
#define mp                  make_pair
#define pb                  push_back
#define fi                  first
#define se                  second
#define sz(x)               (long long) (x.size())
#define all(x)              x.begin(), x.end()
#define sc1(x)              cin >> x
#define sc2(x, y)           cin >> x >> y
#define sc3(x, y, z)        cin >> x >> y >> z
#define sc4(w, x, y, z)     cin >> w >> x >> y >> z
#define gl(x)               getline(cin, x)
#define rp(x)	            while(x--)
#define tr(i, x)            for(auto i : x)
#define lp(i, x, y)         for(__typeof(y) i = x; i <= y; i++)
#define lpi(i, x, y)        for(__typeof(x) i = x; i >= y; i--)
#define it(itr, x)          for(__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr++)
#define iti(itr, x)         for(__typeof(x.rbegin()) itr = x.rbegin(); itr != x.rend(); itr++)
#define SP                  << " "
#define eol                 << "\n"
#define PR                  cout <<
typedef long long           ll;
typedef pair<ll, ll>        ii;
typedef pair<ii, ll>        iii;
typedef vector<ll>          vi;
typedef vector<ii>          vii;
typedef vector<iii>         viii;

/* Solution Begins */
void solve()
{
    ll n, m, k;
    sc3(n, m, k);
    m--;
    ll h[n];
    lp(i, 0, n - 1)
    {
        sc1(h[i]);
    }
    ll da = 0, db = 0;
    ll ca = 0;
    ll cb = 0;
    ll i = 1;
    while(true)
    {
        if(m - i >= 0)
        {
            da += 10;
            if(ca == 0 && h[m - i] != 0 && h[m - i] <= k)
            {
                ca = da;
            }
        }
        if(m + i < n)
        {
            db += 10;
            if(cb == 0 && h[m + i] != 0 && h[m + i] <= k)
            {
                cb = db;
            }
        }
        if(ca == 0 && cb > 0)
        {
            PR cb eol;
            return;
        }
        else if(cb == 0 && ca > 0)
        {
            PR ca eol;
            return;
        }
        else if(ca > 0 && cb > 0)
        {
            PR min(ca, cb) eol;
            return;
        }
        i++;
    }
}
/* Solution Ends */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    //freopen("/mnt/ext42/Codes/Contests/CPP/out.txt", "w", stdout);
    int cases = 1;
    while(cases--)
    {
        solve();
    }
    cout << flush;
    return 0;
}
