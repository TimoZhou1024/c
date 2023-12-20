/*
	周思远 23307130063
*/
#include <stdio.h>
int main(){
    int a,i,max;
    int b[100],c[100];
    for (i=0;i<=99;i++)
    {
        b[100]=0;
        c[100]=0;
    }
    scanf("%d",&a);
    for(i=1;i<=a+1;i++){
        b[i]=2*b[i-1]+2;
        c[i]=b[i]-b[i-1];
    }
    printf("%d\n",b[a]);
    for (i=1;i<=a;i++)
    {
        printf("Day %d: %d\n",i,c[a+1-i]);
    }
    
    return 0;
}