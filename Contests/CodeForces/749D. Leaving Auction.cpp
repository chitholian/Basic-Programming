/*-------------------------*\
| Atikur Rahman Chitholian  |
|    CSE : 2015 - 2016      |
| University of Chittagong  |
\*-------------------------*/

#include <bits/stdc++.h>

using namespace std;
set<pair<long long, long long>> max_bids_man;
set<long long> bids[200005];
long long max_bids[200007];
int main(void)
{
    memset(max_bids, 0, sizeof max_bids);
    long long n,a,b,q,k,l;
    cin >> n;
    for(long long i = 1; i<=n; ++i)
    {
        cin >> a>>b;
        if(b > max_bids[a])
            max_bids[a] = b;
        bids[a].insert(b);
    }
    for(long long i = 1; i<=n; ++i)
        if(max_bids[i])
            max_bids_man.insert(make_pair(max_bids[i], i));
    cin >> q;
    while(q--)
    {
        cin >> k;
        vector<long long> left;
        while(k--)
        {
            cin >> l;
            if(max_bids[l])
            {
                left.push_back(l);
                max_bids_man.erase(make_pair(max_bids[l], l));
            }
        }
        long long siz = max_bids_man.size();
        if(siz == 0) cout << "0 0" << endl;
        else
        {
            auto wp = max_bids_man.rbegin();
            long long w = wp->second;
            if(siz == 1)
                cout << w << " " << *bids[w].begin() << endl;
            else
            {
                ++wp;
                long long sw = *bids[w].upper_bound(wp->first);
                cout << w << " " << sw << endl;
            }
        }
        for(auto i : left)
            if(max_bids[i])
                max_bids_man.insert(make_pair(max_bids[i], i));
    }
    //main();
    return 0;
}
