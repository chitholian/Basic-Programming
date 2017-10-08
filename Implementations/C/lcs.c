#include <stdio.h>
#include <string.h>
#define MX 501
int b[MX][MX], c[MX][MX], i, j, m, n;

void lcs_len(char* x, char* y) {
    m = strlen(x)-1, n = strlen(y)-1;
    for(i = 0; i<=m; i++) c[i][0] = 0;
    for(i = 1; i<=n; i++) c[0][i] = 0;

    for(i = 1; i<=m; i++)
        for(j = 1; j<=n; j++) {
            if(x[i] == y[j]) {
                c[i][j] = c[i-1][j-1]+1;
                b[i][j] = 1;
            } else if(c[i-1][j] >= c[i][j-1]) {
                c[i][j] = c[i-1][j];
                b[i][j] = 2;
            } else {
                c[i][j] = c[i][j-1];
                b[i][j] = 3;
            }
        }
}

void printOut(int m, int n, char* x) {
    if(m==0||n==0)return;
    if(b[m][n]==1) {
        printOut(m-1,n-1,x);
        printf("%c", x[m]);
    } else if(b[m][n] ==2) printOut(m-1,n,x);
    else printOut(m,n-1,x);
}

int main() {
    printf("Enter two strings : ");
    char x[MX], y[MX];
    x[0] = y[0] = '0';
    scanf("%s %s", x+1,y+1);
    lcs_len(x, y);
    printf("%d\n", c[m][n]);
    printOut(m, n, x);
    return 0;
}
