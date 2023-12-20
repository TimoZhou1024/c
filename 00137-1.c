#include <stdio.h>
#include <math.h>
int main(){
    int k,x;
    float t;
    double s;
    scanf("%d",&x);
    s=0;
    t=1;
    k=1;
    while(fabs(t)>=0.001)
    {s+=t;
    t=t*x/k;
    k++;
    }
    printf("%.3f",s);
}