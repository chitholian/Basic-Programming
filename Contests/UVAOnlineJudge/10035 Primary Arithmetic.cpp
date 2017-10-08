/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, t;
    while(true)
    {
        cin >> s >> t;
        if(s=="0" && t == "0") break;
        int con = 0,carries=0;
        if(s.length() < t.length())
        {
            string u=s;
            s=t;
            t=u;
        }
        for(auto i = 1; i<=s.length(); ++i)
        {
            int a=s[s.length()-i]-'0', b=0;
            if(i<=t.length())
            {
                b=t[t.length()-i]-'0';
            }
            int sum =  a+b+con;
            if(sum > 9)
            {
                carries++;
                con = 1;
            }
            else con = 0;
        }
        if(carries == 0)
            cout << "No carry operation."<<endl;
        else if(carries == 1) cout << carries <<" carry operation."<<endl;
        else cout << carries << " carry operations."<<endl;
    }
    return 0;
}
