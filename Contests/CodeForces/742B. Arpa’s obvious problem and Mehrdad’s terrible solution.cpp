/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <map>

using namespace std;

map<long long, long long> v;
int main()
{
    long long n, x, y, c = 0;
    cin >> n >> x;
    while(n--)
    {
        cin >> y;
        long long t = y ^ x;
        c+=v[t];
        v[y]++;
    }
    cout << c << endl;
    //main();
    return 0;
}
