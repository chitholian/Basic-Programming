/*sample input
NikitaAndString
*/
#include <bits/stdc++.h>
#define lf "\n";
const std::string names[] = {"Danil", "Olya", "Slava", "Ann" , "Nikita"};
int cnt;
std::string inp;
void solve() {
	std::cin >> inp;
	for (int i = 0; i < inp.size(); ++i) {
		std::string tmp = inp.substr(i, 5);
		if (tmp == names[0])
			cnt++;
		else if (tmp == names[2]) cnt++;
		tmp = inp.substr(i, 4);
		if (tmp == names[1])
			cnt++;
		tmp = inp.substr(i, 3);
		if (tmp == names[3])
			cnt++;
		tmp = inp.substr(i, 6);
		if (tmp == names[4])
			cnt++;
	}
	bool ok = false;
	if (cnt == 1) std::cout << "YES\n";
	else std::cout << "NO\n";
}

/******* Main Function ********/
int main(int argc, char const *argv[]) {
	std::ios_base::sync_with_stdio(0); //std::cin.tie(NULL);
	int cases = 1;
	while (cases--)
		solve();
	return 0;
}
