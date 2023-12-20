/*
    周思远 23307130063
*/
#include <stdio.h>

void forward(int n){
    if(n<10) printf("%d",n);
    else{
        forward(n/10);
        printf(" %d",n%10);
    }
}

void backward(int n){
    if(n<10) printf("%d",n);
    else{
        printf("%d ",n%10);
        backward(n/10);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    forward(n);
    printf("\n");
    backward(n);

    return 0;
}