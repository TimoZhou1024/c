#include <stdio.h>
#include <string.h>
int main(){
    char c;
    int a[1000];
    int i=0;
    while(1){
        c=getchar();
        if(c!=' '&&c!='\n'){
            a[i]=c-'0';
            i++;
        }
        if(c=='\n') break;
        

    }

    for (int j=0;j<i;j++){
        printf("%d",a[j]);
    }

    return 0;
}