/*
    周思远 23307130063
*/
#include <stdio.h>
int cal(int n){
    if(n==1) return 1;
    else return 2*cal(n-1)+1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",cal(n));
    return 0;
}