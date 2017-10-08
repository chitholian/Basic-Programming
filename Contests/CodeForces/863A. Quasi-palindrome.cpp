#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);

    string n;
    cin >> n;
    int i = 0, j;
    j = n.size() - 1;
    while(j > 0 && n[j] == '0') j--;
    bool pal = true;
    while(i <= j) {
        if(n[i] != n[j]) {
            pal = false;
            break;
        }
        i++;
        j--;
    }
    if(pal) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
