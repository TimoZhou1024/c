#include <bits/stdc++.h>

using namespace std;

const int maxN = 200000+5;

int a[maxN], l[maxN], r[maxN], p[maxN], que[maxN], ind[maxN], dep[maxN];
int n, k0;

vector<int> mxpos;

void findLeft(int R)
{
    int head = 1, tail = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == -1)
        {
            head = 1; tail = 0; continue;
        }
        if (head <= tail && que[head] < i - R) ++head;
        while (head <= tail && a[que[tail]] <= a[i]) --tail;
        que[++tail] = i;
        l[i] = que[head];
    }
    // copy(l+1, l+n+1,ostream_iterator<int>(cout, " ")); puts("");
}
void findRight(int R)
{
    int head = 1, tail = 0;
    for (int i = n; i >= 1; --i)
    {
        if (a[i] == -1)
        {
            head = 1; tail = 0; continue;
        }
        if (head <= tail && que[head] > i + R) ++head;
        while (head <= tail && a[que[tail]] <= a[i]) --tail;
        que[++tail] = i;
        r[i] = que[head];
    }
    // copy(r+1, r+n+1,ostream_iterator<int>(cout, " ")); puts("");
}
void build()
{
    for (int i = 1; i <= n; ++i)
    {
        p[i] = a[l[i]] >= a[r[i]] ? l[i] : r[i];
        ++ind[p[i]];
    }
    // copy(p+1, p+n+1,ostream_iterator<int>(cout, " ")); puts("");
    // freopen("trees.out", "w", stdout);
    // for (int u = 1; u <= n; ++u)
    //     printf("%d %d\n", p[u], u);
    // fclose(stdout);
}
void topsort()
{
    int head = 1, tail = 0;
    for (int u = 1; u <= n; ++u)
        if (!ind[u]) que[++tail] = u;
    while (head <= tail)
    {
        int u = que[head++];
        dep[p[u]] = max(dep[u] + 1, dep[p[u]]);
        if (--ind[p[u]] == 0) que[++tail] = p[u];
    }
}
bool check(int R)
{
    memset(ind, 0, sizeof(ind));
    memset(dep, 0, sizeof(dep));
    findLeft(R);
    findRight(R);
    build();
    int cntrt = 0;
    for (int u = 1; u <= n; ++u)
        if (p[u] == u) ++cntrt;
    // printf("cntrt= %d\n", cntrt);
    if (cntrt != mxpos.size()) return 0;
    topsort();
    int mxdep = 0;
    // for (auto x:mxpos) printf("%d %d\n", x, dep[x]);
    for (auto x:mxpos) mxdep = max(dep[x], mxdep);
    return mxdep <= k0;
}

int main()
{
    // freopen("2.in", "r", stdin);
    scanf("%d%d", &n, &k0);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
        if (!mxpos.empty() && a[i] > a[mxpos[0]]) mxpos.clear();
        if (mxpos.empty() || a[i] == a[mxpos[0]]) mxpos.push_back(i);
    }
    // printf("mxpos.size= %d\n", mxpos.size());
    // findLeft(5);
    // printf("res=%d\n", check(4));
    // copy(a+1, a+n+1, ostream_iterator<int>(cout," "));
    int Left = 0, Right = n;
    while (Left + 1 < Right)
    {
        int Mid = (Left + Right) >> 1;
        if (check(Mid)) Right = Mid;
        else Left = Mid;
    }
    printf("%d\n", Right < n ? Right : -1);
    return 0;
}