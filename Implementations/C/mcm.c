#include<stdio.h>
#include<limits.h>
#include<time.h>

int i,j,k,l;
void MCO(int len, int p[], int m[][len], int s[][len]) {
    int n = len - 1;
    for(i=1; i<=n; i++)
        m[i][i] = 0;
    for(l=2; l<=n; l++) {
        for(i=1; i<=n-l+1; i++) {
            j = i+l-1;
            m[i][j] = INT_MAX;
            for(k=i; k<j; k++) {
                int q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j]) {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
}

void printOut(int len, int i, int j, int s[][len]){
    if(i == j){
        printf(" %d ", l++);
        return;
    }
    printf("(");
    printOut(len, i, s[i][j], s);
    printOut(len, s[i][j] + 1, j, s);
    printf(")");
}

int main() {
    int len;
    clock_t t;
    printf("Enter chain length : ");
    scanf("%d", &len);
    int m[len][len], s[len][len], p[len];
    printf("Enter the matrix chain : ");
    for(i=0;i<len;i++) scanf("%d", &p[i]);

    // Call the function
    t = clock();
    MCO(len, p, m, s);
    t = clock() - t;
    // print the output
    l = 1;
    printOut(len, 1, len - 1, s);
    printf("\nMinimum scalar multiplications : %d\n", m[1][len - 1]);
    printf("\tCPU Clocks : %ld\n", t);

    //main(); // re-run

    return 0;
}
