#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,s,t,x,y,a,b,bigsum,smallsum,answer;
    cin>>n>>s>>t>>x>>y>>a>>b;
    if(s-n*x>=0){
        if(s-n*x+t>=n*y) cout<<0;
        else cout<<b*(n*y+n*x-s-t);
    }
    else{
        if(t>=n*y) cout<<a*(n*x-s);
        else cout<<a*(n*x-s)+b*(n*y-t);
    }
    

    
    
    

    return 0;
}