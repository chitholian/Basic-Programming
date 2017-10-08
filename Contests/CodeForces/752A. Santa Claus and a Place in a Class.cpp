/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
using namespace std;
int main()
{
    long n,m,k,r,d,e = 0,i=0,j=0;
    cin >> n>>m>>k;
    for(i = 1; i<=n; ++i)
    {
        for(j = 1; j<=m; ++j)
        {
            e += 2;
            if(e>=k)
            {
                r=i;
                d=j;
                i+=n;
                j+=m;
            }
        }
    }
    cout << r << " " << d << " ";
    if(k%2)
        cout << "L"<<endl;
    else cout << "R" << endl;
    //main();
    return 0;
}
