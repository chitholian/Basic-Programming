#include <bits/stdc++.h>
using namespace std;
int i,j,k, n, w[105], sm, lft, ans = INT_MAX;
int main() {
    ios::sync_with_stdio(0);
    cin >> n;
    n *= 2;
    for(i = 0; i<n; i++) cin >> w[i];
    sort(w, w + n);
    for(i = 0; i<n; i++)
        for(j = i+1; j<n; j++) {
            lft = -1;
            sm = 0;
            for(k = 0; k<n; k++)
                if(k == i || k == j) continue; // Skip
                else if(lft == -1) lft = k;
                else {
                    sm += w[k] - w[lft];
                    lft=-1;
                }
            ans = min(ans, sm);
        }
    cout << ans;
    return 0;
}
