/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main(void)
{
    long n = 0, B,a,l,b,ss,u,r;
    string s;
    set<long> se;
    cin >> s;
    B = count(s.begin(), s.end(), 'B');
    a = count(s.begin(), s.end(), 'a');
    l = count(s.begin(), s.end(), 'l');
    b = count(s.begin(), s.end(), 'b');
    ss = count(s.begin(), s.end(), 's');
    u = count(s.begin(), s.end(), 'u');
    r = count(s.begin(), s.end(), 'r');
    se.insert(B);
    se.insert(a/2);
    se.insert(l);
    se.insert(ss);
    se.insert(b);
    se.insert(u/2);
    se.insert(r);
    if(se.size() > 0)
        cout << *(se.begin()) << endl;
    else
        cout << 0 << endl;
    return 0;
}
