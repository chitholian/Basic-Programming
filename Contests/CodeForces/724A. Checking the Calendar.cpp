/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;

int main(void)
{
    string p, n;
    cin >> p >> n;
    if(p=="saturday")
    {
        if(n == "saturday" || n == "monday"||n == "tuesday") cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else     if(p=="sunday")
    {
        if(n == "sunday" || n == "wednesday"||n == "tuesday") cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else     if(p=="monday")
    {
        if(n == "wednesday" || n == "monday"||n == "thursday") cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else     if(p=="tuesday")
    {
        if(n == "tuesday" || n == "thursday"||n == "friday") cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else     if(p=="wednesday")
    {
        if(n == "saturday" || n == "friday"||n == "wednesday") cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else     if(p=="thursday")
    {
        if(n == "saturday" || n == "sunday"||n == "thursday") cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else     if(p=="friday")
    {
        if(n == "sunday" || n == "monday"||n == "friday") cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}
