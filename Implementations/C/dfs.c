/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/
#include <stdio.h>

#define mx 501
#define inf 999999
int c[mx], d[mx], f[mx], p[mx], a[mx][mx];
int i, u, n, t;

/** Procedure DFS-Visit */
void dfs_visit(int u) {
    d[u] = ++t;
    c[u] = 2;
    int i;
    for(i = 1; i<=n; i++) {
        if(a[u][i] && c[i] == 1) {
            c[i] = 2;
            p[i] = u;
            dfs_visit(i);
        }
    }

    c[u] = 3;
    f[u] = ++t;
    printf("%d <- %d start %d, end %d\n", u, p[u], d[u], f[u]);
}

/** Procedure DFS */
void dfs(int s) {
    for(i = 1; i<=n; i++) {
        c[i] = 1;
        p[i] = 0;
    }
    t = 0;
    for(u = 1; u<=n; u++) {
        if(c[u] == 1) dfs_visit(u);
    }
}

int main() {
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("Enter number of edges : ");
    int e, u, v;
    scanf("%d", &e);
    printf("Enter edges :\n");
    for(i = 1; i<=e; i++) {
        scanf("%d %d", &u, &v);
        a[u][v] = 1;
        // a[v][u] = 1; // uncomment for undirected graph.
    }
    printf("Enter source vertex : ");
    scanf("%d", &e);
    printf("DFS time :\n");
    dfs(e);
    return 0;
}
