/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long n, m =1,i=0;
    string s,t;
    bool left;
    cin >> n>>s;
    if(s.size()%2) left = false;
    else left = true;
    while(n--)
    {
        if(left) t.insert(t.begin(), s[i++]);
        else t.insert(t.end(), s[i++]);
        left = left == true?false:true;
    }
    cout << t << endl;
    return 0;
}

