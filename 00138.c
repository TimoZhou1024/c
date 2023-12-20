/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>
int main(){
    int n,i=2;
    scanf("%d",&n);
    printf("%d=",n);
    while(n!=1){
        if(n%i==0){
            n=n/i;
            printf("%d",i);
            if(n!=1) printf("*");
            continue;
        }
        i++;
    }
    return 0;
}