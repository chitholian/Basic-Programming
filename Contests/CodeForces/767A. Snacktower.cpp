/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <iostream>
#include <cstdio>

using namespace std;
long long n, m, paisi[1000001], t, p;
int main(void)
{
    scanf("%lld", &n);
    t = n;
    m = n;
    while(m--){
        scanf("%lld", &p);
        paisi[p] = 1;
        while(paisi[t]){
            printf("%lld ", t);
            --t;
        }
        printf("\n");
    }

    //main();
    return 0;
}
