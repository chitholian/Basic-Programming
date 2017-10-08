/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s;
    set<string>a;
    cin >> s;
    for(auto i = 0; i<s.length(); ++i) {
        s.insert(s.begin(), s.back());
                     s.pop_back();
                     a.insert(s);
    }
    cout << a.size() << endl;
    return 0;
}
