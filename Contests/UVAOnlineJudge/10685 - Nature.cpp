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
#define SP             << " "
#define eol            << "\n"
#define PR             cout <<
typedef long long ll;
typedef pair<long, long> ii;
typedef pair<ii, long> iii;
typedef vector<long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

/* Solution Begins */

map<string, int> mb;
map<string, string> ma;
string Find(string& x)
{
    if(ma[x] != x)
    {
        ma[x] = Find(ma[x]);
    }
    return ma[x];
}
void Unify(string& a, string& b)
{
    ma[Find(a)] = Find(b);
}
void solve(int eof = 0)
{
    int a, b;
    while(sc2(a, b) && a > 0)
    {
        string sa[a];
        lp(i, 0, a - 1)
        {
            sc1(sa[i]);
            ma[sa[i]] = sa[i];
        }
        rp(b)
        {
            string m, n;
            sc2(m, n);
            if(Find(m) != Find(n))
            {
                Unify(m, n);
            }
        }
        int c = 0;
        tr(i, ma)
        {
            mb[Find(i.se)]++;
            c = max(c, mb[Find(i.se)]);
        }
        PR c eol;
        mb.clear();
        ma.clear();
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
