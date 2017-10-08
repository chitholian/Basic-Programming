/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
using namespace std;

int main()
{
    long long a,b,c;
    cin >> a>>b>>c;
    for(long long i=0;i<=c; ++i)
        for(long long j=0;j<=c; ++j) {
            if((i*a+j*b) == c || (j*a+i*b) == c) {
                cout << "Yes"<<endl;
                return 0;
            }
        }
         cout << "No" <<endl;
    return 0;
}
