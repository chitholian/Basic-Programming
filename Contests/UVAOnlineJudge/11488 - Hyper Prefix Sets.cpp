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
#define eol            << "\n";
#define SP             << " " <<
#define PR             cout <<
typedef pair<long, long> ii;
typedef pair<ii, long> iii;
typedef vector<long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

/* Solution Begins */
struct N
{
    N* n[2];
    long E;
    N()
    {
        n[0] = NULL;
        n[1] = NULL;
        E = 0;
    }
};
void del(N* f)
{
    tr(i, f->n)
    {
        if(i)
            del(i);
    }
    delete(f);
}
N *f, *r;
void solve(int eof = 0)
{
    long t;
    sc1(t);
    rp(t)
    {
        long res = 0;
        f = new N();
        r = f;
        int c;
        sc1(c);
        cin.ignore();
        rp(c)
        {
            r = f;
            string s;
            gl(s);
            int l = s.length();
            for(int i = 0; i < l; i++)
            {
                int j = s[i] - '0';
                if(r->n[j] == NULL)
                {
                    r->n[j] = new N();
                }
                r = r->n[j];
                r->E++;
                res = max(res, r->E * (i + 1));
            }
        }
        PR res eol;
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
