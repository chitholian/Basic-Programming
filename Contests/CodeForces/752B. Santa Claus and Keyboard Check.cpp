/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <string>
#include <set>
using namespace std;
set<pair<char, char>>m;
bool inserted[256];
char pairs[256];
int main()
{
    string a,b;
    cin>>a>>b;
    for(long i=0;i<a.length();++i){
        if(inserted[a[i]] || inserted[b[i]]){
            if(pairs[a[i]] != b[i] || pairs[b[i]] != a[i]){
                cout << -1 << endl;
                return 0;
            }
        }
        else {
            pairs[a[i]]=b[i];
            pairs[b[i]]=a[i];
            inserted[a[i]]=true;
            inserted[b[i]]=true;
            if(a[i] != b[i]) m.insert(make_pair(min(a[i], b[i]), max(a[i], b[i])));
        }
    }
    if(m.size() == 0) cout << "0\n";
    else {
        cout << m.size() << endl;
        for(auto i = m.begin();i!=m.end();++i){
            cout << i->first << " " << i->second << endl;
        }
    }
    //main();
    return 0;
}
