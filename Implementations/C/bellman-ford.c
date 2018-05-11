/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/
/* Input
5 10
1 2 10
1 4 5
2 3 1
2 4 2
3 5 4
4 2 3
4 3 9
4 5 2
5 1 7
5 3 6
1

*/
#include <stdio.h>
typedef struct {
    int u, v;
} edge;
#define mx 501
#define inf 999999
int e, i, n, j, k;
int d[mx], p[mx], w[mx][mx];
edge ed[mx];

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
        for(i = 1; i<=e; i++)
            relax(ed[i].u, ed[i].v);
}
int main() {
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("Enter number of edges : ");
    int ee, u, v, a;
    scanf("%d", &e);
    printf("Enter edge weights :\n");
    for(i = 1; i<=e; i++) {
        scanf("%d %d %d", &u, &v, &a);
        w[u][v] = a;
        ed[i].u = u;
        ed[i].v = v;
    }
    printf("Enter source vertex : ");
    scanf("%d", &ee);
    bellman_ford(ee);
    printf("Bellman-Ford Shortest Paths :\n");
    for(i = 1; i<=n; i++) printf("%d <- %d ~ %d\n", i, p[i], d[i]);
    return 0;
}
