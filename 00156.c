/*
    周思远 23307130063
*/
#include <stdio.h>

int is_complete(int n){
    int sum=0,i;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    
    return sum==n;
}
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=6;i<=n;i++){
        if(is_complete(i)==1) printf("%d ",i);
    }
    return 0;
}