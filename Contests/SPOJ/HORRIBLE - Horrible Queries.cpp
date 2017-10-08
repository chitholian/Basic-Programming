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
struct info
{
    ll sum, prop;
    info()
    {
        sum = prop = 0;
    }
};
void init(info *tree, ll node, ll b, ll e)
{
    if(b == e) tree[node].sum = 0;
    else
    {
        ll left = node * 2;
        ll right = left + 1;
        ll m = (b + e) / 2;
        init(tree, left, b, m);
        init(tree, right, m + 1, e);
        tree[node].sum = tree[left].sum + tree[right].sum;
    }
}

void update(info *tree, ll node, ll b, ll e, ll i, ll j, ll val)
{
    if(b > j || e < i) return;
    if(b >= i && e <= j)
    {
        tree[node].prop += val;
        tree[node].sum += val * (e - b + 1);
    }
    else
    {
        ll left = node * 2, right;
        right = left + 1;
        ll m = (b + e) / 2;
        update(tree, left, b, m, i, j, val);
        update(tree, right, m + 1, e, i, j, val);
        tree[node].sum = tree[left].sum + tree[right].sum + tree[node].prop * (e - b + 1);
    }
}

ll query(info *tree, ll node, ll b, ll e, ll i, ll j, ll car = 0)
{
    if(b > j || e < i) return 0;
    if(b >= i && e <= j) return tree[node].sum + car * (e - b + 1);
    ll left = node * 2, right;
    right = left + 1;
    ll m = (b + e) / 2;
    ll p1 = query(tree, left, b, m, i, j, car + tree[node].prop);
    ll p2 = query(tree, right, m + 1, e, i, j, car + tree[node].prop);
    return p1 + p2;
}

void solve()
{
    ll t;
    sc1(t);
    rp(t)
    {
        info *tree = new info[100005 * 3];
        ll n, q;
        sc2(n, q);
        init(tree, 1, 1, n);
        rp(q)
        {
            ll a, b, c, d;
            sc3(a, b, c);
            if(a == 0)
            {
                sc1(d);
                update(tree, 1, 1, n, b, c, d);
            }
            else
            {
                PR query(tree, 1, 1, n, b, c) eol;
            }
        }
        delete[] tree;
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
