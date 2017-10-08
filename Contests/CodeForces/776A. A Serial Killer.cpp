/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    long n;
    string a, b;
    vector<string>v;
    cin >> a >> b;
    v.push_back(a);
    v.push_back(b);
    cout << a << " " << b << endl;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        replace(v.begin(), v.end(), a, b);
        cout << *v.begin() << " " << *v.rbegin() << endl;
    }
    //main();
    return 0;
}
