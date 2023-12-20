#include <bits/stdc++.h>
using namespace std;
typedef long long _ll;
typedef double ld;
const ld PI = acosl(-1);
const ld eps = 1e-8;

struct Point
{
    _ll x, y, _theta;
    Point(_ll x = 0, _ll y = 0) : x(x), y(y) { _theta = atan2l(y, x); }
    ld theta() const { return _theta; }
} a[80];

inline ld check(ld theta)
{
    ld res = fabs(theta);
    if(res > PI) res -= PI;
    return res;
}

int T,n;
int x0,Y0,x1,Y1,x2,y2,x,y;
ld theta1,theta2,k1,k2;
void solve()
{
    cin >> n >> x0 >> Y0;
    if(n <= 13) 
    {
        cout << "! impossible" << endl;
        return;
    }
    x1 = x0, Y1 = Y0;
    cout << "? " << x1 << ' ' << Y1 << endl;
    cin >> theta1;
    if(theta1 > 2*PI || theta1 < -2*PI) 
    {
        cout << "! " << x1 << ' ' << Y1 << endl;
        return;
    }
    ld mn = PI; int pos;
    for(int i = 0; i < 80; ++i)
    {
        if(fabs(check(theta1-a[i].theta())-PI/2) < mn)
        {
            pos = i;
            mn = fabs(check(theta1-a[i].theta())-PI/2);
        }
    }
    x2 = x0+a[pos].x, y2 = Y0+a[pos].y;

    cout << "? " << x2 << ' ' << y2 << endl;
    cin >> theta2;
    if(theta2 > 2*PI || theta2 < -2*PI) 
    {
        cout << "! " << x2 << ' ' << y2 << endl;
        return;
    }
    if(fabs(fabs(theta2)-PI/2.0) < eps) swap(x1,x2), swap(Y1,y2), swap(theta1,theta2);
    if(fabs(fabs(theta1)-PI/2.0) < eps)
    {
        x = x1;
        k2 = tanl(theta2);
        y = roundl(y2 + (x-x2)*k2);
    }
    else
    {
        k1 = tanl(theta1), k2 = tanl(theta2);
        x = roundl((y2-Y1+k1*x1-k2*x2)/(k1-k2));
        y = roundl(Y1 + (x-x1)*k1);
    }
    cout << "! " << x << ' ' << y << endl;
}
int main()
{
    int x = 20, y = 0;
    for(int i = 0; i < 80; ++i)
    {
        if(0 <= i && i < 40) --x;
        else ++x;
        if(20 <= i && i < 60) --y;
        else ++y;
        a[i] = Point(x,y);
    }
    cin >> T;
    while(T--) solve();
    return 0;
}