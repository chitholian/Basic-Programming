/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    long long m, t=0;
    vector<long long> p;
    cin >> n >> m;
    p.push_back(m);
    while(--n)
    {
        long long q;
        cin >> q;
        p.push_back(q);
        if(q>m) m = q;
    }
    for(auto i = p.begin(); i!=p.end(); ++i)
    {
        t+= m - (*i);
    }
    cout << t <<endl;
    return 0;
}
