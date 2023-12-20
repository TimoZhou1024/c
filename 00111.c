/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>
void dec2bin(char a){
    int i,bin[32]={0};
    i=0;
    while(a!=0){
        bin[i]=a%2;
        a=a/2;
        i++;
    }
    for(int j=7;j>=0;j--){
        printf("%d",bin[j]);
    }
}

int main(){
    char a;
    a=getchar();
    dec2bin(a);
    
    return 0;
}
