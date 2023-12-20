/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>


int main(){
    int a,a1,a2,a3;
    scanf("%d",&a);
    a1=a/100;
    a2=(a-a/100*100)/10;
    a3=a-a/10*10;
    printf("%d%d%d",a3,a2,a1);
    return 0;
}
