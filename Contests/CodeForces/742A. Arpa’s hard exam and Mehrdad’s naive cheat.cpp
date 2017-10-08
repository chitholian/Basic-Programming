/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;

int main()
{
    long long m;
    cin >> m;
    if(m==0)
        cout << 1<<endl;
    else if(m%4==0)
        cout << 6<<endl;
    else if(m%4==1)
        cout << 8<<endl;
    else if(m%4==2)
        cout << 4<<endl;
    else if(m%4==3)
        cout << 2<<endl;
    //main();
        return 0;
}
