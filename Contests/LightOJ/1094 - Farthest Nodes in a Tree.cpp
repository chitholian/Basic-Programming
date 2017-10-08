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
    ll t, c = 0;
    sc1(t);
    rp(t)
    {
        ll n, m;
        sc1(n);
        m = n;
        vii ad[n];
        n--;
        rp(n)
        {
            ll a, b, c;
            sc3(a, b, c);
            ad[a].pb(ii(b, c));
            ad[b].pb(ii(a, c));
        }
        // BFS ONE
        ll dis[m];
        ll MD = 0, nd = 0;
        bool vis[m];
        fl(dis, 0);
        fl(vis, 0);
        queue<ll> q;
        q.push(0);
        dis[0] = 0;
        while(!q.empty())
        {
            ll cur = q.front();
            vis[cur] = true;
            q.pop();
            it(i, ad[cur])
            {
                ii pp = *i;
                if(!vis[pp.fi])
                {
                    dis[pp.fi] = dis[cur] + pp.se;
                    if(dis[pp.fi] > MD)
                    {
                        MD = dis[pp.fi];
                        nd = pp.fi;
                    }
                    q.push(pp.fi);
                }
            }
        }
        //BFS TWO
        MD = 0;
        q = queue<ll>();
        fl(vis, 0);
        fl(dis, 0);
        dis[nd] = 0;
        q.push(nd);
        dis[0] = 0;
        while(!q.empty())
        {
            ll cur = q.front();
            vis[cur] = true;
            q.pop();
            it(i, ad[cur])
            {
                ii pp = *i;
                if(!vis[pp.fi])
                {
                    dis[pp.fi] = dis[cur] + pp.se;
                    if(dis[pp.fi] > MD)
                    {
                        MD = dis[pp.fi];
                        nd = pp.fi;
                    }
                    q.push(pp.fi);
                }
            }
        }

        PR "Case " << ++c << ": " << MD eol;
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
