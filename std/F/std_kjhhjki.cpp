#include <bits/stdc++.h>
#define MAXN 200005
#define For(I,A,B) for(int I = (A), endi = (B); I <= endi; ++I)
#define foR(I,A,B) for(int I = (A), endi = (B); I >= endi; --I)
#define ForE(I,A) for(int I = head[A]; I; I = e[I].nxt)
using namespace std;
typedef long long _ll;

struct edge { int to,nxt; } e[MAXN<<1];
int cnt=1,head[MAXN];
inline void add_edge(int u, int v)
{   
    e[++cnt] = edge{v, head[u]};
    head[u] = cnt;
}

class queue
{
    private:
        int h,t;
        int q[MAXN];
    public:
        queue() { h = 1; t = 0; }
        void push(int x) { q[++t] = x; }
        int front() { return q[h]; }
        int tail()  { return q[t]; }
        void pop() { ++h; }
        void pop_back() { --t; };
        bool empty() { return h > t; }
        void clear() { h = 1; t = 0; }
}q;

int n,k,mx,a[MAXN];
int l[MAXN],r[MAXN],in[MAXN],dep[MAXN];
bool check(int R)
{
    fill(dep+1, dep+n+1, 0x7ffffff); fill(in+1, in+n+1, 0);
    fill(head+1, head+n+1,0); q.clear(); cnt = 1;
    For(i,1,n)
    {
        if (a[i] == -1) { q.clear(); continue; }
        while (!q.empty() && q.front() < i-R) q.pop();
        while (!q.empty() && a[q.tail()] < a[i]) q.pop_back();
        q.push(i);
        l[i] = a[q.front()]==a[i]? i: q.front();
    }
    q.clear();
    foR(i,n,1)
    {
        if (a[i] == -1) { q.clear(); continue; }
        while (!q.empty() && q.front() > i+R) q.pop();
        while (!q.empty() && a[q.tail()] < a[i]) q.pop_back();
        q.push(i);
        r[i] = a[q.front()]==a[i]? i: q.front();
    }
    // For(i,1,n) cout << l[i] << " \n"[i==n];
    // For(i,1,n) cout << r[i] << " \n"[i==n];
    q.clear();
    For(i,1,n)
    {
        int p;
        if(l[i] == r[i])
        {
            if(l[i] && a[i] < mx) return 0;
            dep[i] = 0;
            continue;
        }
        if(a[l[i]] == a[r[i]]) p = l[i];
        else p = a[l[i]] > a[r[i]] ? l[i] : r[i];
        add_edge(p, i); ++in[i];
    }
    For(i,1,n) if (~a[i] && !in[i]) q.push(i);
    while (!q.empty())
    {
        int u = q.front(); q.pop();
        ForE(i,u)
        {
            int v = e[i].to;
            dep[v] = min(dep[v], dep[u]+1);
            if (!--in[v]) q.push(v);
        }
    }
    For(i,1,n) if (dep[i] > k) return 0;
    // For(i,1,n) cout << dep[i] << " \n"[i==n];
    return 1;
}

int main()
{
    cin >> n >> k;
    For(i,1,n) cin >> a[i], mx = max(mx,a[i]);
    int l = 0, r = n+1, mid;
    while (l < r)
    {
        mid = (l+r)>>1;
        if (check(mid)) r = mid;
        else l = mid+1;
    }
    cout << (r > n? -1: r);
    return 0;
}
