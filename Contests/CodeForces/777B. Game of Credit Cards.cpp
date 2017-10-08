/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    long n, min, max = 0, j = 0;
    string a, b;
    cin >> n;
    cin >> a >> b;
    min = n;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(long i = 0; i < n; ++i)
    {
        if(*(a.begin()+j) <= *(b.begin() + i))
        {
            min--;
            j++;
        }
    }
    j = 0;
    for(long i = 0; i < n; ++i)
    {
        if(*(a.begin()+j) < *(b.begin() + i))
        {
            max++;
            j++;
        }
    }

    cout << min << endl << max << endl;
    //main();
    return 0;
}
