#include <stdio.h>
#include <string.h>
int main(){
    int a[1024]={0},n,left=0,right,mid,i,ans;
    scanf("%d",&n);
    right=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(left<right){
        mid=(left+right)/2;
        if(a[mid]>a[mid+1]){
            right=mid;
            ans=mid;
        }
        if(a[mid]<a[mid+1]){
            left=mid+1;
        }
    }
    printf("%d",a[ans]);




    return 0;
}