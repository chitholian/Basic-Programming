/**************************\
* Atikur Rahman Chitholian *
*     CSE 2015 - 2016      *
* University of Chittagong *
\**************************/

// save_to:811A. Vladik and Courtesy.cpp
#include <bits/stdc++.h>
using namespace std;
#define PE             cerr <<
#define PR             cout <<
#define SP             << " "
#define EOL            << "\n"
#define MP             make_pair
#define PB             push_back
#define S1(x)          cin >> x
#define S2(x, y)       cin >> x >> y
#define S3(x, y, z)    cin >> x >> y >> z
#define S4(w, x, y, z) cin >> w >> x >> y >> z
#define RP(t)          while(t--)
#define TR(i, x)       for (auto i : x)
#define LP(i, s, e)    for (__typeof(e) i = s; i <= e; i++)
#define LPI(i, s, e)   for (__typeof(s) i = s; i >= e; i--)
#define IT(i, x)       for (__typeof(x.begin()) i = x.begin(); i != x.end(); i++)
#define ITI(i, x)      for (__typeof(x.rbegin()) i = x.rbegin(); i != x.rend(); i++)
#define FX(n)          cout.precision(n); cout << fixed
#define ALL(x)         x.begin(), x.end()
#define FL(x, v)       fill(x, sizeof(x) / sizeof(*x), v)
typedef long long ll;
typedef unsigned long long ull;

// Solution Begins

void solve() {
	ll a, b;
	S2(a, b);
	ll cnt = 0;
	while (++cnt) {
		a -= cnt;
		if (a < 0) {PR "Vladik\n"; break;}
		b -= ++cnt;
		if (b < 0) {PR "Valera\n"; break;}
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
