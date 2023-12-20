/*
    周思远 23307130063
*/
#include <stdio.h>

int is_prime(int n){
    int flag=1,i;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(is_prime(i)==1) printf("%d ",i);
    }
    return 0;
}