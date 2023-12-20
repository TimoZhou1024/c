/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    float e=1,j=1;
    for(int i=1;i<=10000;i++){
        j=j/i;
        e+=j;
    }
    printf("%.3f",e);
    return 0;
}
