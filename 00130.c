/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    for(n=100;n<=999;n++){
        if(n==pow(n/100,3)+pow((n-n/100*100)/10,3)+pow(n%10,3)) printf("%d\n",n);
    }

    return 0;
}
