/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
using namespace std;

int main()
{
    long long a,b,c,d=0;
    cin >> a;
    while(a--){
        cin >> b>>c;
        cout << "Case " << ++d << ": " << b+c<<endl;
    }
    return 10;
}
