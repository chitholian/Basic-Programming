// filename:11805 - Bafana Bafana.cpp
#include <iostream>
using namespace std;

void solve() {
	int c, n, k, p;
	cin >> c;
	int cs = 0;
	while (c--) {
		cin >> n >> k >> p;
		int ans = (k + p) % n;
		cout << "Case " << ++cs << ": " << (ans == 0 ? n : ans) << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("/mnt/ext41/Coding/CPP/Practice/in.txt", "r", stdin);
	int cases = 1;
	while (cases--) {
		solve();
	}
	cout << flush;
	return 0;
}