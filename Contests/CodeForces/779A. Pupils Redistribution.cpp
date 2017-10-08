/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <cmath>

using namespace std;

int a[6], b[6];

int main(void)
{
    int n, m, p, c = 0;
    cin >> n;
    m = n;
    while (n--)
    {
        cin >> p;
        a[p]++;
    }
    while (m--)
    {
        cin >> p;
        b[p]++;
    }
    if ((a[1] + b[1]) % 2 || (a[2] + b[2]) % 2 || (a[3] + b[3]) % 2 || (a[4] + b[4]) % 2 || (a[5] + b[5]) % 2 || ((a[1] - b[1]) / 2.0 + (a[2] - b[2]) / 2.0 + (a[3] - b[3]) / 2.0 + (a[4] - b[4]) / 2.0 + (a[5] - b[5]) / 2.0) != 0.0)
        cout << -1 << endl;
    else
    {
        for (int i = 1; i < 6; ++i)
            if ((a[i] - b[i]) / 2 > 0)
                c += (a[i] - b[i]) / 2;
        cout << c << endl;
    }
    return 0;
}
