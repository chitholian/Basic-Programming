/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;

int main(void)
{
    int mo[] = {30,31,28,31,30,31,30,31,31,30,31,30,31}, m, n;
    cin >> m>>n;
    int o = 1;
    o += (mo[m] - 8 + n)/7;
    if((mo[m] - 8 + n)%7) ++o;
    cout << o << endl;
    //main();
    return 0;
}
