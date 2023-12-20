#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int l[q],r[q],d[q];
    long sum[q]={0};
    
    for(int i=0;i<q;i++){
        scanf("%d%d%d",&l[i],&r[i],&d[i]);
    }
    
    for(int i=0;i<q;i++){
        for(int j=l[i]-1;j<=r[i]-1;j+=d[i]){
            sum[i]+=a[j];
        }
        cout<<sum[i]<<endl;
    }
    return 0;
}