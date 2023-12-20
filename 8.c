#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k;
    char str[1024],substr[1024];
    gets(str);
    gets(substr);
    for(i=0;str[i]!='\0';i++){
        for(j=0;substr[i+j]!='\0';j++)
            if(str[i+j]!=substr[j]) break;
        if(substr[j]=='\0') break;
    }
    if(str[i]=='\0') printf("substr doesn't exist");
    if(str[i]!='\0') printf("substr do exist with location %d",i);
    return 0;

}