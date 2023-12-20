#include <bits/stdc++.h>
#define MAXN 100005
#define SQRT 322
using namespace std;
typedef long long _ll;

_ll ans,sum[SQRT][MAXN];

int n,q,blk,a[MAXN],l,r,d; 
int main()
{
    // ios::sync_with_stdio(0); 
    // cin.tie(0); cout.tie(0);
    cin >> n >> q; blk = sqrt(n);
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        for(int j = 1; j <= blk; ++j)
            sum[j][i] = a[i];
    }
    for(int i = 1; i <= blk; ++i)
        for(int j = 1; j <= n; ++j)
            sum[i][j] += sum[i][max(j-i,0)];
    while(q--)
    {
        cin >> l >> r >> d; ans = 0;
        if(d > blk)
        {
            for(int i = l; i <= r; i += d)
                ans += a[i];
            cout << ans << "\n";
            continue;
        }
        ans = sum[d][r] - sum[d][l] + a[l];
        cout << ans << "\n";
    }
    return 0;
}