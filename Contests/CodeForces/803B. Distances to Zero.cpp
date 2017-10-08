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
    ll n,m;
    sc1(n);
    vi z;
    lp(i,1,n)
    {
        sc1(m);
        if(m==0) z.pb(i);
    }
    ll s = sz(z), c = z[0];
    lp(i,0,s-1)
    {
        if(i==0)
        {
            lpi(j,z[0]-1, 1) PR j SP;
            PR 0 SP;
        }
        else
        {
            ll p = z[i] - c - 1;
            lp(j, 1, p/2) PR j SP;
            if(p%2) PR p/2 + 1 SP;
            lpi(j,p/2, 1) PR j SP;
            PR 0 SP;
            c = z[i];
        }
        if(i == s-1)
            lp(j, 1, n - z[i]) PR j SP;
    }
    PR "\n";
}
/* Solution Ends */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //freopen("E:/Contests/CPP/in.txt", "r", stdin);
    //freopen("E:/Contests/CPP/out.txt", "w", stdout);
    int cases = 1;
    while(cases--)
    {
        solve();
    }
    cout << flush;
    return 0;
}
