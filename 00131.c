/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    int n,i,m;
    scanf("%d",&n);
    while(pow(10,i)<=n){
        i++;
    }
    i--;
    m=pow(10,i);
    while(m!=0){
        printf("%d*",n/m);
        n%=m;
        m/=10;
    }
    return 0;
}
