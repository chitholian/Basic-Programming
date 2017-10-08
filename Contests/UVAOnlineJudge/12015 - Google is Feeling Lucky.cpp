/**************************\
* Atikur Rahman Chitholian *
*     CSE 2015 - 2016      *
* University of Chittagong *
\**************************/

// save_to:12015 - Google is Feeling Lucky.cpp
#include <bits/stdc++.h>
using namespace std;
#define PE             cerr <<
#define PR             cout <<
#define SP             << " "
#define EOL            << "\n"
#define MP             make_pair
#define PB             push_back
#define GL(x)          getline(cin, x)
#define S1(x)          cin >> x
#define S2(x, y)       cin >> x >> y
#define S3(x, y, z)    cin >> x >> y >> z
#define S4(w, x, y, z) cin >> w >> x >> y >> z
#define RP(t)          while(t--)
#define TR(i, x)       for (auto i : x)
#define LP(i, s, e)    for (__typeof(e) i = s; i <= e; i++)
#define LPI(i, s, e)   for (__typeof(s) i = s; i >= e; i--)
#define IT(i, x)       for (__typeof(x.begin()) i = x.begin(); i != x.end(); i++)
#define ITI(i, x)      for (__typeof(x.rbegin()) i = x.begin(); i != x.rend(); i++)
#define FX(n)          cout.precision(n); cout << fixed
#define ALL(x)         x.begin(), x.end()
#define FL(x, v)       fill(x, sizeof(x) / sizeof(*x), v)
typedef long long ll;
typedef unsigned long long ull;

// Solution Begins
void solve() {
	ll tests, cases = 0;
	S1(tests);
	RP(tests) {
		vector<pair<string, ll> > pages;
		ll high = -1, cnt = 10, num;
		string wb;
		RP(cnt) {
			S2(wb, num);
			high = max(high, num);
			pages.PB(MP(wb, num));
		}
		PR "Case #" << ++cases << ":\n";
		IT(i, pages) {
			if ((*i).second == high) PR (*i).first << "\n";
		}
	}
}
// Solution Ends

int main(int argc, char** args) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("input.in", "r", stdin);
	//freopen("output.out", "w", stdout);
	ull cases = 1;
	RP(cases) {
		solve();
	}
	cout << flush;
	return 0;
}
