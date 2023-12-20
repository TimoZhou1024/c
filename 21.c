#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,n,number;
    scanf("%d %d",&s,&n);
    srand(s);
    number=rand()%100+1;
    if(n<number) {
        printf("猜得太小");
    }
    else if(n==number) {
        printf("猜对了");
    }
    else {
        printf("猜得太大");
    }
    return 0;
}