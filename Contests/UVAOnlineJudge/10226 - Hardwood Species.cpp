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
#define rp(x)	       while(x--)
#define gl(x)	       getline(cin, x)
#define tr(i, x)       for(auto i : x)
#define lp(i, x, y)    for (auto i = x; i <= y; i++)
#define lpi(i, x, y)   for (auto i = x; i >= y; i--)
#define it(itr, x)     for (auto itr = x.begin(); itr != x.end(); itr++)
#define iti(itr, x)    for (auto itr = x.rbegin(); itr != x.rend(); itr++)
#define endl           "\n"
typedef long long ll;
typedef pair<long, long> ii;
typedef pair<ii, long> iii;
typedef vector<long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

/* Solution Begins */
void solve(int eof = 0)
{
    int t;
    sc1(t);
    cin.ignore(2);
    cout <<  setprecision(4) << fixed;
    rp(t)
    {
        map<string, long> m = {};
        string s;
        long c = 0;
        while(true)
        {
            gl(s);
            if(s == "") break;
            m[s]++;
            c++;
        }
        tr(i, m)
        {
            cout << i.fi << " " << i.se * 1.0 / c * 100.0 << endl;
        }
        if(t > 0) cout << endl;
    }
}

/* Solution Ends */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    int cases = 1, eof = 0;
    while(cases--)
    {
        solve(eof);
    }
    return 0;
}
