/*sample input
9 14
1 2 8
1 4 4
1 7 11
2 3 7
2 5 2
2 9 4
3 6 9
3 9 14
4 7 8
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
void unify(int a, int b) {
    r[find_set(a)] = find_set(b);
}
int compare(const void* e1, const void* e2) {
    return ((edge*)e1)->w - ((edge*)e2)->w;
}
void mst_kruskal() {
    for (i = 1; i <= n; i++)
        r[i] = i;
    qsort(ed + 1, e, sizeof(*ed), compare);
    for (i = 1; i <= e; i++)
        if (find_set(ed[i].u) != find_set(ed[i].v)) {
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
    for (i = 1; i <= e; i++)
        scanf("%d %d %d", &ed[i].u, &ed[i].v, &ed[i].w);
    printf("Kruskal's MST :\n");
    mst_kruskal();
    return 0;
}
