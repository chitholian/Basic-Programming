/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
using namespace std;

int main()
{
    long long a1,b1,a2,b2,a3,b3,x1,y1,x2,y2,x3,y3;
    cin >> a1>>b1>>a2>>b2>>a3>>b3;
    cout << 3 << endl;
    cout <<(a1+a2-a3) << " " << (b1+b2-b3)<<endl;
    cout <<(a3+a2-a1) << " " << (b3+b2-b1)<<endl;
    cout <<(a1+a3-a2) << " " << (b1+b3-b2)<<endl;
    return 0;
}
