#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,n,number;
    scanf("%d %d",&s,&n);
    srand(s);
    number=rand()%100+1;
    if(n<number) {
        printf("�µ�̫С");
    }
    else if(n==number) {
        printf("�¶���");
    }
    else {
        printf("�µ�̫��");
    }
    return 0;
}