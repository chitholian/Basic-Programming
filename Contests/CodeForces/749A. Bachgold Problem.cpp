/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    cout << a/2 <<endl;
    for(long long i = 0;i<a/2-1;++i){
        cout << 2 << " ";
    }
    if(a%2)
        cout << 3 << endl;
    else cout << 2 << endl;
    return 0;
}
