/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    regex e("o(go){1,100}");
    cout << regex_replace(s, e, "***") << endl;
    //main();
    return 0;
}
