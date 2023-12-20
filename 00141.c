/*
    周思远 23307130063
*/
#include <stdio.h>
#include <math.h>
int main(){
    int n,a[100]={0},temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<=n-2;j++){
        for(int k=n-1;k>=j+1;k--){
            if (a[k]<a[k-1]){
                temp=a[k];
                a[k]=a[k-1];
                a[k-1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}