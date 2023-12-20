/*
	周思远 23307130063
*/
#include <stdio.h>
#include <string.h>
int main(){
    int i,a[1000],d,n,sum;
    
    for (i=0;i<=999;i++)
    {
        a[i]=0;
    }
    
    scanf("%d%d%d",&a[0],&d,&n);
    sum=a[0];
    for (i=1;i<=n-1;i++)
    {
        a[i]=a[i-1]+d;
        sum+=a[i];
    }
    printf("%d",sum);

    return 0;
}