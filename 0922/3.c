#include<stdio.h>

int main(){
    int a=1,b=2,c=3,d=4,m=1,n=1;
    printf("%d",(m=a>b)&& (n=c>d));
    return 0;
}
