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
string trunc(string s)
{
    ll lng = s.length() - 1, w = 0;
    while(s[w] == '0' && w < lng) w++;
    return s.substr(w);
}
void solve()
{
    string s, ss, tt;
    sc1(s);
    ll sum = 0, ln = s.length() - 1;
    lp(i, 0, ln)
    {
        sum += s[i] - '0';
    }
    sum %= 3;
    if(sum == 0)
    {
        PR s eol;
        return;
    }
    bool ahead = true, found = false;
    lpi(i, ln, 0)
    {
        int num = (s[i] - '0') % 3;
        if(num == sum)
        {
            ss = s.substr(0, i) + s.substr(i + 1, ln + 1);
            break;
        }
        else if(ahead && num != 0)
        {
            if(found)
            {
                tt = tt.substr(0, i) + tt.substr(i + 1, ln);
                ahead = false;
            }
            else
            {
                tt = s.substr(0, i) + s.substr(i + 1, ln + 1);
                found = true;
            }
        }
    }
    ss = trunc(ss);
    tt = trunc(tt);
    if(ss.length() > tt.length())
    {
        PR ss eol;
    }
    else if(ahead)
    {
        if(ss.empty())
        {
            PR - 1 eol;
        }
        else PR ss eol;
    }
    else if(tt.empty()) PR - 1 eol;
    else PR tt eol;

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
