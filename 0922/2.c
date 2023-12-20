#include<stdio.h>

int main(){
    int i,j;
    i=3;
    j=++i;
    printf("i=%d,j=%d\n",i,j);
    i=3;
    j=i++;
    printf("i=%d,j=%d\n",i,j);
    return 0;
}