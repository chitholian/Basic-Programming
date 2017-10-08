/**************************\
* Atikur Rahman Chitholian *
*     CSE 2015 - 2016      *
* University of Chittagong *
\**************************/

// save_to:810B. Summer sell-off.cpp

#include <bits/stdc++.h>
using namespace std;
#define PE             cerr <<
#define PR             cout <<
#define SP             << " "
#define eol            << "\n"
#define mp             make_pair
#define pb             push_back
#define i1(x)          cin >> x
#define i2(x, y)       cin >> x >> y
#define i3(x, y, z)    cin >> x >> y >> z
#define i4(w, x, y, z) cin >> w >> x >> y >> z
#define rp(t)          while(t--)
#define tr(i, x)       for (auto i : x)
#define lp(i, s, e)    for (__typeof(e) i = s; i <= e; i++)
#define lpi(i, s, e)   for (__typeof(s) i = s; i >= e; i--)
#define it(i, x)       for (__typeof(x.begin()) i = x.begin(); i != x.end(); i++)
#define iti(i, x)      for (__typeof(x.rbegin()) i = x.rbegin(); i != x.rend(); i++)
#define FX(n)          cout.precision(n); cout << fixed
#define all(x)         x.begin(), x.end()
#define fl(x, v)       fill(x, sizeof(x) / sizeof(*x), v)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

// Solution Begins

void solve() {
	ll n, d;
	i2(n, d);
	ll pd[n], cs[n], db[n];
	lp(i, 0, n - 1){
		i2(pd[i], cs[i]);
		db[i] = min(2 * pd[i], cs[i]) - min(pd[i], cs[i]);
	}
	ll ans = 0;
	sort(db, db + n, greater<ll>());
	lp(i, 0, n - 1){
		ans += min(pd[i], cs[i]);
		if(i < d) ans += db[i];
	}
	PR ans eol;
}
// Solution Ends

int main(int argc, char** args) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("/mnt/ext41/Coding/Contests/Practice/input.in", "r", stdin);
	//freopen("/mnt/ext41/Coding/Contests/Practice/output.out", "w", stdout);
	ull cases = 1;
	rp(cases) {
		solve();
	}
	cout << flush;
	return 0;
}
