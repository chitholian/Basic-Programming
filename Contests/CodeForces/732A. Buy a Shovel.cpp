/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include<iostream>
using namespace std;
int main(void)
{
    long long x, y, z=0;
    cin >> x >> y;
    while(++z)
    {
        long long d = (z*x)%10;
        if(d == 0 || d == y)
        {
            cout << z << endl;
            break;
        }
    }
    //main();
    return 0;
}
