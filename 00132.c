/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int cmp(double a,double b){
	if(fabs(a-b)<0.00001){
		return 1;
	}
	else return 0;
}
int main(){
    double x1,y1,x2,y2,x3,y3,l1,l2,l3;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    l1=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
    l2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    l3=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    if(sqrt(l1)+sqrt(l2)<=sqrt(l3)||sqrt(l3)+sqrt(l2)<=sqrt(l1)||sqrt(l1)+sqrt(l3)<=sqrt(l2)){
    	printf("非三角形");
	}
	else if (cmp(l1,l2)==1&&cmp(l2,l3)==1){
        printf("等边三角形");
    }
    else if((cmp(l1,l2)==1||cmp(l2,l3)==1||cmp(l3,l1)==1)&&(cmp(l1+l2,l3)==1||cmp(l1+l3,l2)==1||cmp(l3+l2,l1)==1)){
    	printf("等腰直角三角形"); 
	} 
	else if(cmp(l1,l2)==1||cmp(l2,l3)==1||cmp(l3,l1)==1){
		printf("等腰三角形"); 
	}
	else if(cmp(l1+l2,l3)==1||cmp(l1+l3,l2)==1||cmp(l3+l2,l1)==1){
		printf("直角三角形");
	} 
	else printf("普通三角形"); 
    return 0;
}
