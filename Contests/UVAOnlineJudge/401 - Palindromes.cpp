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
#define scs(x)         cin >> s
#define sc1(x)         scanf("%ld", &x)
#define sc2(x, y)      scanf("%ld %ld", &x, &y)
#define sc3(x, y, z)   scanf("%ld %ld %ld", &x, &y, &z)
#define debug(x)       { cerr << #x << " = " << x << endl; }
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
void solve(int eof = 0) {
    string s;
    map<char, char> m;
    m['A'] = 'A';
    m['E'] = '3';
    m['3'] = 'E';
    m['H'] = 'H';
    m['I'] = 'I';
    m['J'] = 'L';
    m['L'] = 'J';
    m['M'] = 'M';
    m['O'] = 'O';
    m['S'] = '2';
    m['T'] = 'T';
    m['U'] = 'U';
    m['V'] = 'V';
    m['W'] = 'W';
    m['X'] = 'X';
    m['Y'] = 'Y';
    m['Z'] = '5';
    m['1'] = '1';
    m['2'] = 'S';
    m['8'] = '8';

    while (scs(s)) {
        int l = (int) s.length() - 1;
        bool p, mm;
        p = mm = true;
        for (int i = 0; i < l; ++i, l--) {
            if (s[i] != s[l]) {
                p = false;
                break;
            }
        }
        l = (int) s.length() - 1;
        for (int i = 0; i <= l; ++i, l--) {
            if (!(m.count(s[i]) && m[s[i]] == s[l] && m[s[l]] == s[i])) {
                mm = false;
                break;
            }
        }
        //cout << mm << " " << p << endl;
        if (mm && p)
            cout << s << " -- is a mirrored palindrome.\n" << endl;
        else if (mm)
            cout << s << " -- is a mirrored string.\n" << endl;
        else if (p)
            cout << s << " -- is a regular palindrome.\n" << endl;
        else
            cout << s << " -- is not a palindrome.\n" << endl;
    }
}

/* Solution Ends */

int main() {
    ios::sync_with_stdio(false);
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt", "r", stdin);
    int cases = 1, eof = 0;
    while (cases--) {
        solve(eof);
    }
    return 0;
}
