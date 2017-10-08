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
    map<char, char> m;
    m['A'] = '2';
    m['B'] = '2';
    m['C'] = '2';
    m['D'] = '3';
    m['E'] = '3';
    m['F'] = '3';
    m['G'] = '4';
    m['H'] = '4';
    m['I'] = '4';
    m['J'] = '5';
    m['K'] = '5';
    m['L'] = '5';
    m['M'] = '6';
    m['N'] = '6';
    m['O'] = '6';
    m['P'] = '7';
    m['Q'] = '7';
    m['R'] = '7';
    m['S'] = '7';
    m['T'] = '8';
    m['U'] = '8';
    m['V'] = '8';
    m['W'] = '9';
    m['X'] = '9';
    m['Y'] = '9';
    m['Z'] = '9';
    m['-'] = '-';
    m['0'] = '0';
    m['1'] = '1';

    string s;
    while(sc1(s))
    {
        lp(i,0,s.length()-1)
        {
            PR m[s[i]];
        }
        PR "\n";
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
