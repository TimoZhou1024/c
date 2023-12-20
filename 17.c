#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double d,ave;
    d=(a+b+c)/3.0;
    int e=d*100;
    printf("%d\n%d\n%.2f",a+b+c,a*b*c,d);

    return 0;
}