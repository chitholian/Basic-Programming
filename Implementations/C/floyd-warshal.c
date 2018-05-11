#include <stdio.h>
#define mx 501
#define inf 9999
/* Input
5 9
1 2 3
1 3 8
1 5 -4
2 4 1
2 5 7
3 2 4
4 1 2
4 3 -5
5 4 6
*/
int w[mx][mx], n, e, i, j, k, u;
int min(int a, int b) {
    if(abs(inf - b) < 100 && abs(inf - a) < 100) return inf;
    return a < b ? a : b;
}
void floyd_warshal() {
    for(k=1; k<=n; k++) {
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++) w[i][j] = min(w[i][j], w[i][k] + w[k][j]);

        // Print Answer
        for(i=1; i<=n; i++) {
            for(j=1; j<=n; j++) if(w[i][j] == inf) printf("%-8s", "INF");
                else printf("%-8d", w[i][j]);
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    // Initialize
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++) if(i != j) w[i][j] = w[j][i] = inf;

    printf("Enter number of edges : ");
    scanf("%d", &e);
    printf("Enter edges with their weights :\n");
    for(i=1; i<=e; i++) {
        scanf("%d %d %d", &j, &k, &u);
        w[j][k] = u;
        //w[k][j] = u; // uncomment for undirected graph.
    }
    floyd_warshal();
    return 0;
}
