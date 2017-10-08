/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;
bool not_prime(int a)
{
    int b = 2;
    if(a==1||a==2) return false;
    while(a%b)
    {
        if(b >= a/2+1) return false;
        ++b;
    }
    return true;
}
int main(void)
{
    int a, b, c = 0;
    cin >> a;
    while(++c)
    {
        if(not_prime(a*c+1))
        {
            cout << c << endl;
            break;
        }
    }
    return 0;
}
