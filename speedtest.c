#include <stdio.h>
#include <time.h>
int main(){
    int i=0;
    double t1,t2;
    t1=clock();
    while (i<=1000000)
    {
        printf("hahaha");
        i++;
    }
    t2=clock();
    printf("%lf,%lf",t2,t1);
    printf("is:%lf",t2-t1);
    return 0;
    
}