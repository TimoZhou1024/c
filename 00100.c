/*
	周思远 23307130063
*/
#include <stdio.h>
#include <string.h>
int main(){
    int i,j,k;
    k=0;
    char a[1000];
    fgets(a,1000,stdin);
    i=strlen(a);
    for(j=1;j<=i+18;j++){
        printf("*");
    }
    printf("\n      Hello ");
    while(1){
        printf("%c",a[k]);
        k++;
        if (a[k]=='\n')
        {
            printf("!      \n");
            break;
        }
    }
    for(j=1;j<=i+18;j++){
        printf("*");
    }
    return 0;
}