/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> n;
    int a, b, c = 0, d = 0;
    cin >> a;
    while(++d){
        c += d;
        if(c > a) break;
        if(c + d + 1 <= a){
            n.push_back(d);
        }
        else {
            n.push_back(a - (c - d));
        }
    }
    cout << n.size() << endl;
    for(auto i = n.begin();i!=n.end();++i)
        cout << *i << " ";
	return 0;
}
