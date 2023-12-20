/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>
int main(){
    double answer=1.0,x,a=1.0,b;
    scanf("%lf",&x);
    b=x;
    for(int i=1;i<=100;i++){
        answer+=b/a;
        b=b*x;
        a=a*(i+1);
    }
    printf("%.3lf",answer);
    return 0;
}