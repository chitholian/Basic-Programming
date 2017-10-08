/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    long long a, b;
    vector<long long>v;
    cin >> a;
    while(a--)
    {
        cin>>b;
        v.push_back(b);
    }
    b=0;
    sort(v.begin(), v.end());
    for (auto i = v.begin(); i!=v.end(); ++i)
    {
        if(*v.begin() < (*i) && (*i) < *v.rbegin())
        {
            b++;
        }
    }
    cout << b << endl;
    //main();
    return 0;
}
