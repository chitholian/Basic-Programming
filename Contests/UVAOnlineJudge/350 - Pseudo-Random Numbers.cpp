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
#define lp(i, x, y)    for (auto i = x; i <= y; i++)
#define lpi(i, x, y)   for (auto i = x; i >= y; i--)
#define it(itr, x)     for (auto itr = x.begin(); itr != x.end(); itr++)
#define iti(itr, x)    for (auto itr = x.rbegin(); itr != x.rend(); itr++)
typedef long long ll;
typedef pair<long, long> ii;
typedef pair<ii, long> iii;
typedef vector<long> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

/* Solution Begins */

class Node
{
public:
    int v;
    Node* n;
    Node(int value)
    {
        v = value;
    }
};
void solve(int eof = 0)
{
    int c = 0;
    while(true)
    {
        int z, i, m, l;
        sc3(z, i, m);
        sc1(l);
        if(z == 0 && i == 0 && l == 0) break;
        Node h(l), t(l);
        while(true)
        {
            t.v = (z * t.v + i) % m;
            h.v = (z * h.v + i) % m;
            h.v = (z * h.v + i) % m;
            if(h.v == t.v) break;
        }
        Node t1(l);
        while(t1.v != t.v)
        {
            t.v = (z * t.v + i) % m;
            t1 = (z * t1.v + i) % m;
        }
        int len = 1, cc = (z * t.v + i) % m;
        while(cc != t.v)
        {
            cc = (z * cc + i) % m;
            len++;
        }
        printf("Case %d: %d\n", ++c, len);
    }
}
/* Solution Ends */

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int cases = 1, eof = 0;
    while(cases--)
    {
        solve(eof);
    }
    cout << flush;
    return 0;
}
