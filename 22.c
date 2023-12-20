#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],b[100],c[100],d[100],i;
    for(i=0;i<=99;i++){
        a[i]=0;
        b[i]=0;
        c[i]=0;
        d[i]=0;
    }
    for(i=0;i<=9;i++){
        scanf("%d %d",a[i],b[i]);
    }

    return 0;
}