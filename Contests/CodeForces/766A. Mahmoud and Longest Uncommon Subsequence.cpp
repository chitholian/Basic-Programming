/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string a,b;
    cin>>a>>b;
    if(a==b) cout << -1 << endl;
    else cout << max(a.length(), b.length()) << endl;
    //main();
    return 0;
}
