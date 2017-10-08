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
#define debug(x)       { cerr << #x << " = " << x << endl; }
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
void solve(int eof = 0)
{
    int T, K, M, l;
    map <char, double> mymap;
    map <char, double>::iterator it;
    char c;
    string line;
    double v, total;

    scanf("%d", &T);
    while(T--)
    {
        total = 0;
        scanf("%d", &K);
        for(int i = 0; i < K; i++)
        {
            cin >> c >> v;
            mymap[c] = v;
        }
        scanf("%d", &M);
        cin.ignore();
        for(int i = 0; i < M; i++)
        {
            line = "";
            getline(cin, line);
            l = line.size();
            for(int j = 0; j < l; j++)
            {
                it = mymap.find(line[j]);
                if(it != mymap.end())
                    total += it->second;
            }
        }
        total /= 100;
        printf("%0.2lf$\n", total);
        mymap.clear();
    }
}

/* Solution Ends */

int main()
{
    //ios::sync_with_stdio(false);
    freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    int cases = 1, eof = 0;
    while(cases--)
    {
        solve(eof);
    }
    return 0;
}
