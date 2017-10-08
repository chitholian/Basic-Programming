/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>

using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a<1||b<2||c<4)
        cout<<0<<endl;
    else {
        while(c>3){
            if(c/2<=b && c/4 <= a && c%2==0 && c%4==0){
                cout << c+c/2+c/4<<endl;
                return 0;
            }
            c--;
        }
        cout << 0 << endl;
    }
	return 0;
}
