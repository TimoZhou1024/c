/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    for(a=0;a<=100;a++){
        for(b=0;b<=100-a;b++){
            c=100-a-b;
            if(c/3.0+3*b+5*a==100){
                printf("%d %d %d\n",a,b,c);
            }
        }
    }
    return 0;
}
