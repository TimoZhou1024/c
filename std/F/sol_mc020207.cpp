# include<bits/stdc++.h>
# define LL long long
# define INF 1000000009
using namespace std;
vector<int> a[200010];
int fa[200010];
int mx[200010];
int dep[200010];
bool vs[200000];
int at=0;
int n,k;
int dfs(const vector<int>&a,int p){
    if (vs[p]) return dep[p];
    if (a[p]==mx[1]) return 0;
    if (fa[p]==p) return dep[p]=INF;
    dep[p]=dfs(a,fa[p])+1;
    vs[p]=1;
    return dep[p];
}
bool check(const vector<int>& a,int r){
    int n=a.size()-1;
    for (int i=1;i<=n;i++) {vs[i]=0;dep[i]=0;}
    deque<int> li;
    for (int i=1;i<=r+1&&i<=n;i++){
        while (!li.empty()){
            if (a[li.back()]<a[i]) li.pop_back();
            else break;
        }
        li.push_back(i);
    }
    for (int i=1;i<=n;i++){
        while (li.front()<i-r) li.pop_front();
        if(a[li.front()]!=a[i]) fa[i]=li.front();
        else fa[i]=i;
        if (i+r+1<=n){
            while (!li.empty()){
                if(a[li.back()]<a[i+r+1]) li.pop_back();
                else break;
            }
            li.push_back(i+r+1);
        }
    }
    for(int i=1;i<=n;i++){
        if (vs[i]==0) dfs(a,i);
        if (dep[i]>k) return false;
    }
    return true;
}
bool check2(int r){
    // for (int i=1;i<=n;i++) vs[i]=0;
    for (int i=1;i<=at;i++){
        if(!check(a[i],r)) return false;
    }
    return true;
}   
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>k;
    at=1;
    a[at].push_back(0); 
    for (int i=1;i<=n;i++){
        int x;cin>>x;
        if (x==-1) {at++;a[at].push_back(0);}
        else{
            mx[at]=max(mx[at],x);
            a[at].push_back(x);
        }
    }
    for (int i=1;i<=at-1;i++){
        if (mx[i]!=mx[i+1]){
            cout<<"-1\n";
            return 0;
        }
    }
    int l=1,r=n,ans=-1;
    while (l<=r){
        int mid=l+r>>1;
        if (check2(mid)) ans=mid,r=mid-1;
        else l=mid+1;
    }
    cout<<ans;
}