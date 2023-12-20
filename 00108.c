/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    float x1,y1,x2,y2,s;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    s=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%.2f",s);
    return 0;
}