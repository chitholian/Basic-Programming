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
short mat[100][100];
void solve()
{
    ll n;
    while(sc1(n))
    {
        int oc = -1, r = -1, cc = 0, rc = 0;
        if(n == 0) return;
        lp(i, 0, n - 1)
        {
            int sm = 0;
            lp(j, 0, n - 1)
            {
                sc1(mat[i][j]);
                sm += mat[i][j];
            }
            if(sm % 2)
            {
                rc++;
                r = i;
            }
        }
        if(rc > 1)
        {
            PR "Corrupt\n";
            continue;
        }
        lp(i, 0, n - 1)
        {
            int sm = 0;
            lp(j, 0, n - 1)
            {
                sm += mat[j][i];
            }
            if(sm % 2)
            {
                cc++;
                oc = i;
            }
        }

        if(cc > 1 || cc != rc)
        {
            PR "Corrupt\n";
            continue;
        }
        if(cc == 0 && rc == 0)
        {
            PR "OK\n";
            continue;
        }
        PR "Change bit (" << r + 1 << "," << oc + 1 << ")\n";
    }
}
/* Solution Ends */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
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
