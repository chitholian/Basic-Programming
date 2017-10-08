/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long long n = 0;
    string s;
    cin >> s;
    char c = 'a';
    for(auto i = 0; i < s.size();++i){
        n += min(abs(c - s[i]), 26 - abs(c - s[i]));
        c = s[i];
    }
    cout << n << endl;
    //main();
    return 0;
}
