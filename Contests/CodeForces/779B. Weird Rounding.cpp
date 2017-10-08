/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    string n;
    int k, c = 0, zero = 0;
    cin >> n >> k;
    if(n.length() <= k || count(n.begin(), n.end(), '0') < k)
    {
        c = n.length() - 1;
        goto OUTPUT;
    }
    for(auto i = n.rbegin(); i != n.rend(); ++i)
    {
        if(*i == '0')
            zero++;
        else c++;
        if(zero == k)
            break;
    }
    OUTPUT:
    cout << c << endl;
    return 0;
}
