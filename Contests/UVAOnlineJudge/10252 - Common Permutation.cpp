// save_to:10252 - Common Permutation.cpp
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;
int main() {
    //freopen("input.in", "r", stdin);

    string s, t;
    while (getline(cin, s) && getline(cin, t)) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (unsigned int i = 0, j = 0; i < s.size() && j < t.size();) {
            if (s[i] == t[j]) {
                cout << s[i++];
                j++;
            }
            else {
                while (s[i] > t[j]) {
                    j++;
                    if (j == t.size()) break;
                }
                while (s[i] < t[j]) {
                    i++;
                    if (i == s.size()) break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}