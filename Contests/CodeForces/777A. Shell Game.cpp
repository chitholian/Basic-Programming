/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;

int main(void)
{
    long long n;
    int a;
    int moves[6][3] = {{0,1,2},{1,0,2},{1,2,0},{2,1,0},{2,0,1},{0,2,1}};
    cin >> n >> a;
    cout << moves[(n%6)][a] << endl;

    //main();
    return 0;
}
