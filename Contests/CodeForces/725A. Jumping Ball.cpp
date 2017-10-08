/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;

int main()
{
    long n,m=0;
    string s;
    cin>>n>>s;
    for(long i=0; i<s.size(); ++i)
    {
        if(s[i]=='>')
            break;
        m++;
    }
    for(long i=s.size()-1; i>=0; --i)
    {
        if(s[i]=='<')
            break;
        m++;
    }
    cout << m << endl;
    //main();
    return 0;
}
