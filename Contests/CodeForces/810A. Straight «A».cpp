/**************************\
* Atikur Rahman Chitholian *
*     CSE 2015 - 2016      *
* University of Chittagong *
\**************************/

// save_to:810A. Straight «A».cpp

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
	ld a, m;
	i2(a, m);
	ll sm = 0;
	lp(i, 1, a) {
		ll p;
		i1(p);
		sm += p;
	}
	if (m - sm * 1.0 / a <= 0.5) {
		PR 0 eol;
		return;
	}
	ll t = 2 * m * m * a - m * a - 2 * m * sm;
	PR (ll) ceil(t * 1.0 / m) eol;
}
// Solution Ends

int main(int argc, char** args) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("/mnt/ntfs2/Contests/Practice/input.in", "r", stdin);
	//freopen("/mnt/ntfs2/Contests/Practice/output.out", "w", stdout);
	ull cases = 1;
	rp(cases) {
		solve();
	}
	cout << flush;
	return 0;
}
