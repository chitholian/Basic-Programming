/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    long long x, y, z, m, s, t;
    vector<long long>data;
    cin >> x >> y >> z;
    data.push_back(x);
    data.push_back(y);
    data.push_back(z);
    sort(data.begin(), data.end());
    m = data[2] - 1;
    s = m - data[0];
    s = s < 0?0:s;
    t = m - data[1];
    t = t < 0?0:t;
    cout << s + t << endl;
    //main();
    return 0;
}
