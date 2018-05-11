/*sample input
bbabbbaabbbb
*/
#include <bits/stdc++.h>
#include <cmath>
std::string inp;
int a[5005], b[5005], aa, bb;
int len = -1;
void solve() {
	std::cin >> inp;
	for (int i = 1; i <= inp.size(); ++i) {
		if (inp[i - 1] == 'a') aa++;
		else bb++;
		a[i] = aa; b[i] = bb;
	}
	for (int i = 0; i <= inp.size(); ++i) {
		for (int j = i; j <= inp.size(); ++j)
			len = std::max(len, a[inp.size()] - a[j] + a[i] + b[j] - b[i]);
	}
	std::cout << len << "\n";
}

/******* Main Function ********/
int main(int argc, char const *argv[]) {
	std::ios_base::sync_with_stdio(0); //std::cin.tie(NULL);
	int cases = 1;
	while (cases--)
		solve();
	return 0;
}
