/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;

int main()
{
    int m, n,g,i,j=0;
    string s;
    cin >> m >> n;
    cin >> s;
    g = s.find('G');
    i = s.find('T');
    if(g>i){
        int h = g;
        g = i;
        i = h;
    }
    while(++j){
        if(g+n*j == i){cout << "YES" << endl;break;}
        else if(g+n*j > i || s[g+n*j]=='#') {cout << "NO" << endl;break;}
    }

    //main();
        return 0;
}
