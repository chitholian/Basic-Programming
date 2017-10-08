#include <stdio.h>

int main()
{
    //freopen("/mnt/ext42/Codes/Contests/CPP/in.txt","r", stdin);
    double d, ans;
    long long cas = 0;
    char c;
    while(scanf("%lf %c", &d, &c) == 2)
    {
        if(c == 'F')
        {
            ans = 5.0d * (d - 32.0) / 9.0;
            printf("Case %lld: %.2lf degree Centigrade\n", ++cas, ans);
        }
        else
        {
            ans = 9.0 * d / 5 + 32.0;
            printf("Case %lld: %.2lf degree Fahrenheit\n", ++cas, ans);
        }
    }
    return 0;
}
