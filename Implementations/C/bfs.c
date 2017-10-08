/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/
#include <stdio.h>

#define mx 501
#define inf 999999
int c[mx], d[mx], p[mx], a[mx][mx];
int i, u, n;
int q[mx], front, rear;

void enque(int s) {
    q[rear = (rear + 1)%mx] = s;
}
int deque() {
    return q[front = (front + 1)%mx];
}
int empty() {
    return front == rear;
}

/** Procedure BFS */
void bfs(int s) {
    for(i = 1; i<=n; i++) {
        d[i] = inf;
        c[i] = 1;
        p[i] = 0;
    }
    d[s] = 0;
    c[s] = 2;
    enque(s);
    while(!empty()) {
        u = deque();
        for(i = 1; i<=n; i++) {
            if(a[u][i] && c[i] == 1) {
                c[i] = 2;
                d[i] = d[u] + 1;
                p[i] = u;
                enque(i);
            }
        }
        c[u] = 3;
        printf("%d <- %d ~ %d\n", u, p[u], d[u]);
    }
}

int main() {
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("Enter number of edges : ");
    int e, u, v;
    scanf("%d", &e);
    printf("Enter edges :\n");
    for(i = 1;i<=e;i++){
        scanf("%d %d", &u, &v);
        a[u][v] = 1;
        a[v][u] = 1; // remove or comment for directed graph.
    }
    printf("Enter source vertex : ");
    scanf("%d", &e);
    printf("BFS distance :\n");
    bfs(e);
    return 0;
}
