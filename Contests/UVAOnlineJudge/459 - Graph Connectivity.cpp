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
#define rp(x)	       while(x--)
#define tr(i, x)       for(auto i : x)
#define lp(i, x, y)    for(auto i = x; i <= y; i++)
#define lpi(i, x, y)   for(auto i = x; i >= y; i--)
#define it(itr, x)     for(auto itr = x.begin(); itr != x.end(); itr++)
#define iti(itr, x)    for(auto itr = x.rbegin(); itr != x.rend(); itr++)
#define SP	           << " "
#define eol	           << "\n"
#define PR	           cout <<
typedef long long ll;
typedef pair<long, long> ii;
typedef pair<ii, long> iii;
typedef vector<long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

/* Solution Begins */
int par[26];
void make_set(int x)
{
    par[x] = x;
}
int Par(int x)
{
    if(par[x] != x)
    {
        par[x] = Par(par[x]);
    }
    return par[x];
}
void Unify(int& x, int& y)
{
    par[Par(x)] = Par(y);
}
void solve(int eof = 0)
{
    int t;
    sc1(t);
    rp(t)
    {
        char c;
        sc1(c);
        cin.ignore();
        int ml = c - 'A';
        int res = ml + 1;
        lp(i, 0, res - 1)
        {
            make_set(i);
        }
        string s;
        while(gl(s) && !s.empty())
        {
            int x = s[0] - 'A', y = s[1] - 'A';
            if(Par(x) != Par(y))
            {
                Unify(x, y);
                res--;
            }
        }
        PR res eol;
        if(t > 0)
            PR "" eol;
    }
}
/* Solution Ends */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    //freopen("/mnt/ext42/Codes/Contests/CPP/out.txt", "w", stdout);
    int cases = 1, eof = 0;
    while(cases--)
    {
        solve(eof);
    }
    cout << flush;
    return 0;
}
