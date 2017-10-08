/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/
/* Sample Input
9 14
1 2 4
1 7 8
2 3 8
2 7 11
3 4 7
3 5 2
3 9 4
4 6 9
4 9 14
5 7 7
5 8 6
6 9 10
7 8 1
8 9 2
*/
#include <stdio.h>

#define mx 501
#define inf 99999
int i, n, u, p[mx], w[mx][mx], q[mx], k[mx];
int extract_min() {
    int m = 0, val = inf;
    for(i = 1; i<=n; i++) {
        if(q[i] == 0 && val > k[i]) {
            m = i;
            val = k[i];
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

void mst_prim(int s) {
    for(i=1; i<=n; i++) {
        k[i] = inf;
        p[i] = 0;
    }
    k[s] = 0;
    while(!empty()) {
        u = extract_min();
        for(i = 1; i<=n; i++)
            if(w[u][i] && q[i] == 0 && w[u][i] < k[i]) {
                p[i] = u;
                k[i] = w[u][i];
            }
    }
}

int main() {
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("Enter number of edges : ");
    int e, u, v, a;
    scanf("%d", &e);
    printf("Enter edges with weights : ");
    for(i = 1; i<=e; i++) {
        scanf("%d %d %d", &u, &v, &a);
        w[u][v] = a;
        w[v][u] = a; // remove for directed graph
    }
    printf("Prim's MST :\n");
    mst_prim(1);
    for(i = 1; i<=n; i++) printf("%d <- %d ~ %d\n", i, p[i], k[i]);
    return 0;
}
