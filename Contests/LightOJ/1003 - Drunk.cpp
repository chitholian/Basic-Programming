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
    ll t, cas = 0;
    sc1(t);
    rp(t)
    {
        ll n;
        sc1(n);
        map<string, vector<string> > m;
        rp(n)
        {
            string a, b;
            sc2(a, b);
            m[a].pb(b);
        }
        map<string, bool> seen;
        bool no = false;
        it(i, m)
        {
            string now = (*i).fi;
            if(!seen[now])
            {
                stack<string> st;
                map<string, bool> paisi;
                st.push(now);
                while(!st.empty())
                {
                    string cur = st.top();
                    st.pop();
                    seen[cur] = paisi[cur] = true;
                    it(j, m[cur])
                    {
                        if(paisi[*j])
                        {
                            no = true;
                            break;
                        }
                        st.push(*j);
                    }
                    if(no) break;
                }
                if(no) break;
            }
            if(no) break;
        }
        if(no)
        {
            PR "Case " << ++cas << ": No\n";
        }
        else PR "Case " << ++cas << ": Yes\n";
    }
}
/* Solution Ends */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen(" / mnt / ext42 / Codes / Contests / CPP / in.txt", "r", stdin);
    //freopen(" / mnt / ext42 / Codes / Contests / CPP / out.txt", "w", stdout);
    int cases = 1;
    while(cases--)
    {
        solve();
    }
    cout << flush;
    return 0;
}
