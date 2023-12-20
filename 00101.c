/*
	周思远 23307130063
*/
#include <stdio.h>
#include <string.h>
int main(){
    int a,b,c,max;
    printf("Please input three integers:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    max=a;
    if (max<b)
    {
        max=b;
    }
    if (max<c)
    {
        max=c;
    }
    printf("max=%d",max);
    return 0;
}