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

#define mx 501
#define inf 99999
int i, n, u;
int d[mx], p[mx], w[mx][mx], q[mx];

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
int extract_min() {
    int m = 0, val = inf;
    for(i = 1; i<=n; i++) {
        if(q[i] == 0 && val > d[i]) {
            m = i;
            val = d[i];
        }
    }
    q[m] = 1; // mark as extracted.
    return m;
}
int empty() {
    for(i=1; i<=n; i++)
        if(q[i] == 0) return 0;
    return 1;
}

void dijkstra(int s) {
    initialize(s);
    while(!empty()) {
        u = extract_min();
        for(i = 1; i<=n; i++)
            if(w[u][i]) relax(u, i);
    }
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
    dijkstra(e);
    printf("Dijkstra Shortest Paths :\n");
    for(i = 1; i<=n; i++) printf("%d <- %d ~ %d\n", i, p[i], d[i]);
    return 0;
}
