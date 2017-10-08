/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<long long, char>>mouse;
int main(void)
{
    long long a, b, c, m;
    long long t=0, cn = 0;
    cin >>a>>b>>c>>m;
    while(m--)
    {
        long long p;
        string s;
        cin >> p >>s;
        if(s=="USB")
        {
            mouse.push_back(make_pair(p, 'u'));
        }
        else
        {
            mouse.push_back(make_pair(p, 'p'));
        }
    }
    sort(mouse.begin(), mouse.end());
    for(auto i = mouse.begin(); i!=mouse.end(); ++i)
    {
        if(a==0&&b==0&&c==0)
            break;
        if(i->second == 'u')
        {
            if(a>0)
            {
                --a;
                t+=i->first;
                ++cn;
            }
            else if(c>0)
            {
                --c;
                t+=i->first;
                ++cn;
            }
        }
        else
        {
            if(b>0)
            {
                --b;
                t+=i->first;
                ++cn;
            }
            else if(c>0)
            {
                --c;
                t+=i->first;
                ++cn;
            }
        }
    }
    cout << cn << " " << t << endl;
    return 0;
}
