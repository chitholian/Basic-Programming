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
#include <stdlib.h>
#define mx 501
typedef struct {
    int u, v, w;
} edge;

int i, n, e, r[mx];
edge ed[mx];
int find_set(int u) {
    return r[u] == u ? u : (r[u] = find_set(r[u]));
}
int unify(int a, int b) {
    r[find_set(a)] = find_set(b);
}
int compare(const void* e1, const void* e2) {
    return ((edge*)e1)->w - ((edge*)e2)->w;
}
void mst_kruskal() {
    for(i = 1; i<=n; i++)
        r[i] = i;
    qsort(ed+1, e, sizeof(*ed), compare);
    for(i = 1; i<=e; i++)
        if(find_set(ed[i].u) != find_set(ed[i].v)) {
            unify(ed[i].u, ed[i].v);
            printf("%d <=> %d ~ %d\n", ed[i].u, ed[i].v, ed[i].w);
        }
}

int main() {
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("Enter number of edges : ");
    scanf("%d", &e);
    printf("Enter edges with weights : ");
    for(i = 1; i<=e; i++)
        scanf("%d %d %d", &ed[i].u, &ed[i].v, &ed[i].w);
    printf("Kruskal's MST :\n");
    mst_kruskal();
    return 0;
}
