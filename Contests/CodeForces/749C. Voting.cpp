/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    long long n;
    string s;
    deque<long long>d, r;
    cin >> n >> s;
    for(long long i = 0; i < s.length(); ++i){
        if(s[i] == 'D')
            d.push_back(i);
        else r.push_back(i);
    }
    while (true){
        if(d.empty()) {cout << "R" << endl; break;}
        else if(r.empty()){cout << "D" << endl; break;}
        if(d.front() < r.front())
            r.pop_front(), d.push_back(d.front() + n), d.pop_front();
        else d.pop_front(), r.push_back(d.front() + n), r.pop_front();
    }
    return 0;
}
