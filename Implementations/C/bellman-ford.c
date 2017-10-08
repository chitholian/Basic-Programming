/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/
#include <stdio.h>

#define mx 501
#define inf 999999
int i, n, j, k;
int d[mx], p[mx], w[mx][mx];

void initialize(int s) {
    for(i = 1; i<=n; i++) {
        d[i] = inf;
        p[i] = 0;
    }
    d[s] = 0;
}
void relax(int u, int v) {
    if(d[v] > d[u] + w[u][v]) {
        d[v] = d[u] + w[u][v];
        p[v] = u;
    }
}
void bellman_ford(int s) {
    initialize(s);
    for(k = 1; k<=n-1; k++)
        for(i = 1; i<=n; i++)
            for(j = 1; j<=n; j++)
                if(w[i][j]) relax(i, j);
}
int main() {
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("Enter number of edges : ");
    int e, u, v, a;
    scanf("%d", &e);
    printf("Enter edge weights :\n");
    for(i = 1; i<=e; i++) {
        scanf("%d %d %d", &u, &v, &a);
        w[u][v] = a;
        //w[v][u] = a; // uncomment for undirected graph.
    }
    printf("Enter source vertex : ");
    scanf("%d", &e);
    bellman_ford(e);
    printf("Bellman-Ford Shortest Paths :\n");
    for(i = 1; i<=n; i++) printf("%d <- %d ~ %d\n", i, p[i], d[i]);
    return 0;
}
