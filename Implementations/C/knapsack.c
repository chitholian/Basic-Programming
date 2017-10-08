#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define mx 101

int i,j,k,n,m;
double profit, am[mx];
struct obj {
    double p, w;
    int i;
};
struct obj o[mx], x;
void swap(struct obj *a, struct obj *b) {
    x = *a;
    *a = *b;
    *b = x;
}
int pivot(int s, int e) {
    swap(&o[s + rand()%(e-s+1)], &o[e]);
    int p = s-1;
    x = o[e];
    for(i=s; i<e; i++)
        if(o[i].p/o[i].w > x.p/x.w)
            swap(&o[++p], &o[i]);
        
    swap(&o[p+1], &o[e]);
    return p+1;
}

void quick_sort(int l, int r) {
    if(l < r) {
        int p = pivot(l, r);
        quick_sort(l, p - 1);
        quick_sort(p + 1, r);
    }
}

double min(double a, double b) {
    return a < b ?a:b;
}
void knapsack() {
    quick_sort(1, n);
    profit = 0;
    for(i=1; i<=n; i++) {
        k = o[i].i;
        am[k] = min(o[i].w, m);
        m -= am[k];
        profit += o[i].p * am[k] / o[i].w;
    }
}
int main() {
    time_t t;
    srand(time(&t));
    printf("Enter number of objects : ");
    scanf("%d", &n);

    printf("Enter weights : ");
    for(i=1; i<=n; i++) {
        scanf("%lf", &o[i].w);
        o[i].i = i;
    }
    printf("Enter prices : ");
    for(i=1; i<=n; i++) scanf("%lf", &o[i].p);
    printf("Enter knapsack size : ");
    scanf("%d", &m);

    knapsack();

    printf("Profit : %.2lf\n", profit);
    for(i =1; i<=n; i++) printf("%d : %.2lf\n", i, am[i]);

    // main(); // re-run
    return 0;
}
