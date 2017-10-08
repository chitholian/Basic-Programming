/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c = 0, d, e = 0;
    cin >> a >> b;
    d = 240 - b;
    for(int i = 1;i <= a; ++i){
        e += 5 * i;
        if(e > d) break;
        ++c;
    }
    cout << c << endl;
	return 0;
}
