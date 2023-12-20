#include <bits/stdc++.h>
using namespace std;
typedef long long _ll;

int main()
{
    _ll x,y,a,b,n,s,t;
    cin >> n >> s >> t >> x >> y >> a >> b;
    _ll ans = 0;
    x *= n; y *= n;
    if(x > s)   ans += (x-s)*a;
    else        t += (s-x);
    if(y > t)   ans += (y-t)*b;
    cout << ans;
    return 0;
}