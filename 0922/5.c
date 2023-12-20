#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d,%d,%d",a&b,a&0177,a&077);
    return 0;
}
