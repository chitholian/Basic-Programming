#include <stdio.h>
int i, lx, n, x, m, f;
int main() {
    scanf("%d %d", &n,&x);
    for(i = 0; i<n; i++) {
        scanf("%d", &m);
        if(m < x) lx++;
        f = f || m == x;
    }
    int ans = x - lx;
    if(f) ans++;
    printf("%d\n", ans);
    return 0;
}
