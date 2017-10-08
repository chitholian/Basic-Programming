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
#define sz(x)          (long long)((x).size())
#define all(x)         (x).begin(), (x).end()
#define sc1(x)         cin >> x
#define sc2(x, y)      cin >> x >> y
#define sc3(x, y, z)   cin >> x >> y >> z
#define gl(x)          getline(cin, x)
#define rp(x)          while(x--)
#define tr(i, x)       for(auto i : x)
#define lp(i, x, y)    for(__typeof(y) i = x; i <= y; i++)
#define lpi(i, x, y)   for(__typeof(x) i = x; i >= y; i--)
#define it(itr, x)     for(__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr++)
#define iti(itr, x)    for(__typeof(x.rbegin()) itr = x.rbegin(); itr != x.rend(); itr++)
#define SP             << " "
#define eol            << "\n"
#define PR             cout <<
typedef pair<long long, long long> ii;
typedef pair<ii, long long> iii;
typedef vector<long long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

/* Solution Begins */

int par[100005];
void printTrace(int& n)
{
    if(par[n] != -1)
        printTrace(par[n]);
    PR n SP;
}
void solve()
{
    int n, m;
    sc2(n, m);
    vector<pair<long long, int> > ad[n + 1];
    long long dis[n + 10];
    fill(dis, dis + n + 2, 2e18);
    dis[1] = 0;
    fill(par, par + n + 2, 0);
    par[1] = -1;
    rp(m)
    {
        int a, b, c;
        sc3(a, b, c);
        ad[a].pb(pair<long long, int>(c, b));
        ad[b].pb(pair<long long, int>(c, a));
    }
    priority_queue<pair<long long, int> > q;
    q.push(mp(0, 1));
    while(!q.empty())
    {
        pair<long long, int> p = q.top();
        q.pop();
        it(i, ad[p.se])
        {
            if(dis[(*i).se] > dis[p.se] + (*i).fi)
            {
                dis[(*i).se] = dis[p.se] + (*i).fi;
                q.push(mp(-dis[(*i).se], (*i).se));
                par[(*i).se] = p.se;
            }
        }
    }
    if(par[n] == 0) PR - 1;
    else
    {
        printTrace(par[n]);
        PR n eol;
    }
}

/* Solution Ends */

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    //freopen("/mnt/ext42/Codes/Contests/CPP/out.txt", "w", stdout);
    int cases = 1;
    while (cases--)
    {
        solve();
    }
    cout << flush;
    return 0;
}
