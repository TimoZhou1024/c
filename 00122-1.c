#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n==1)
        printf("*");
    else
    {for(i=0;i<2*n-2;i++) printf("* ");
    printf("*\n");
    for(i=2;i<n;i++)
        {
        for(j=0;j<2*(i-1);j++)
            printf(" ");printf("*");
        for(j=0;j<2*(2*n-1)-4*(i-1)-3;j++)
            printf(" ");printf("*\n");
        }   
    for(j=0;j<2*(n-1);j++)
        printf(" ");
        printf("*");}
return 0;
}