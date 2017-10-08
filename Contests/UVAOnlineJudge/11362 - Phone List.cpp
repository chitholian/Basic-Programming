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
typedef long long ll;
typedef pair<long, long> ii;
typedef pair<ii, long> iii;
typedef vector<long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

/* Solution Begins */
struct N
{
    N* n[10];
    bool E;
    N()
    {
        for(int i = 0; i < 10; i++)
        {
            n[i] = NULL;
        }
        E = false;
    }
};
void del(N* r)
{
    tr(i, r->n)
    {
        if(i != NULL)
        {
            del(i);
        }
    }
    delete(r);
}
void solve(int eof = 0)
{
    int t;
    sc1(t);
    rp(t)
    {
        N *f = new N(), *r;
        int n;
        bool INS = true;
        sc1(n);
        rp(n)
        {
            string s;
            sc1(s);
            if(INS)
            {
                r = f;
                int l = s.length();
                for(int i = 0; i < l; i++)
                {
                    int id = s[i] - '0';
                    if(r->n[id] == NULL)
                    {
                        r->n[id] = new N();
                    }
                    r = r->n[id];
                    if(r->E)
                    {
                        INS = false;
                        break;
                    }
                }
                r->E = true;
                tr(k, r->n)
                {
                    if(k != NULL)
                    {
                        INS = false;
                        break;
                    }
                }
                if(!INS)
                {
                    cout << "NO\n";
                }
            }
        }
        if(INS)
            cout << "YES\n";
        del(f);
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
