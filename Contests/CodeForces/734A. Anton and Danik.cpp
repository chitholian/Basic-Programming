/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    long long g,a,d;
    string s;
    cin >> g >> s;
    a=count(s.begin(), s.end(), 'A');
    d=count(s.begin(), s.end(), 'D');
    if(a>d) cout << "Anton" << endl;
    else if(a==d) cout << "Friendship" << endl;
    else cout << "Danik" << endl;
    return 0;
}
