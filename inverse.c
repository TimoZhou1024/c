#include<stdio.h>
void main(){
    char c;
    if((c=getchar())!='\n')
        {
            main();
            printf("%c",c);
        }
    else printf("\n");
}

