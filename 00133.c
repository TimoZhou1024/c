/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    double x,y;
    char sign;
    scanf("%lf %c %lf",&x,&sign,&y);
    if(sign=='+'){
        printf("%.2lf",x+y);
    }
    else if(sign=='-'){
        printf("%.2lf",x-y);
    }
    else if(sign=='*'){
        printf("%.2lf",x*y);
    }
    else if(sign=='/'){
        if(fabs(y-0)<=0.00001) printf("Wrong input");
        else printf("%.2lf",x/y);
    }
    else printf("Wrong input");
    return 0;
}
