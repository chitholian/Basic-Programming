/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;
string s;
map<char, int> mp;
int main()
{
    mp['G']=0;
    mp['B']=0;
    mp['R']=0;
    mp['Y']=0;
    cin >> s;
    char a[5];
    a[0]=s[0];
    a[1]=s[1];
    a[2]=s[2];
    a[3]=s[3];
    for(int i = 4; i<s.length(); i+=4)
    {
        if(a[0]!='!') break;
        a[0]=s[i];
    }
    for(int i = 5; i<s.length(); i+=4)
    {
        if(a[1]!='!') break;
        a[1]=s[i];
    }
    for(int i = 6; i<s.length(); i+=4)
    {
        if(a[2]!='!') break;
        a[2]=s[i];
    }
    for(int i = 7; i<s.length(); i+=4)
    {
        if(a[3]!='!') break;
        a[3]=s[i];
    }
    while(s.find('!') != string::npos)
    {
        mp[a[s.find('!')%4]]++;
        s[s.find('!')] = 'B';
    }
    printf("%d %d %d %d\n", mp['R'], mp['B'], mp['Y'], mp['G']);
    return 0;
}
