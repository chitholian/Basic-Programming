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
bool prm[1060];
void generatePrimes(ll n)
{
    for(ll i = 4; i <= n; i += 2)
    {
        prm[i] = true;
    }
    for(ll i = 3; i <= n; i += 2)
    {
        if(!prm[i])
        {
            for(ll j = i + i; j <= n; j += i)
            {
                prm[j] = true;
            }
        }
    }
}

void solve()
{
    string s;
    generatePrimes(1055);
    while(sc1(s))
    {
        ll val = 0;
        lpi(i, sz(s) - 1, 0)
        {
            if(s[i] >= 'a' && s[i] <= 'z') val += (ll) (s[i] - 'a') + 1;
            else val += (ll) (s[i] - 'A') + 27;
        }
        if(!prm[val]) PR "It is a prime word.\n";
        else PR "It is not a prime word.\n";
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
