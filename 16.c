#include <stdio.h>
int main(){
    int a,b,c,max,min;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if (max<b)
    {
        max=b;
    }

    if(max<c)
    {
        max=c;
    }
    
    min=a;
    if (min>b)
    {
        min=b;
    }

    if(min>c)
    {
        min=c;
    }
    printf("%d %d",max,min);
    return 0;
}