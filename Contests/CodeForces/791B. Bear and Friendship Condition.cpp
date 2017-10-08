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

void solve(int eof = 0)
{
    long n, m;
    sc2(n, m);
    vi el[n + 1] = {};
    bool mrk[n + 1] = {};
    rp(m)
    {
        long a, b;
        sc2(a, b);
        el[a].pb(b);
        el[b].pb(a);
    }
    lp(i, 1, n)
    {
        if(!mrk[i])
        {
            // DFS
            stack<long> st;
            st.push(i);
            long num = el[i].size(), cnt = 1;
            mrk[i] = true;
            while(!st.empty())
            {
                long k = st.top();
                st.pop();
                tr(j, el[k])
                {
                    if(!mrk[j])
                    {
                        long h = el[j].size();
                        if(num > h)
                            num = h;
                        st.push(j);
                        mrk[j] = true;
                        cnt++;
                    }
                }
            }
            if(cnt - 1 != num)
            {
                PR "NO" eol;
                return;
            }
        }
    }
    PR "YES" eol;
}
/* Solution Ends */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    //freopen("/mnt/ext42/Codes/Contests/CPP/out.txt", "w", stdout);
    int cases = 1, eof = 0;
    while(cases--)
    {
        solve(eof);
    }
    cout << flush;
    return 0;
}
