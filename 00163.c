/*
    周思远 23307130063
*/
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <string.h>

int main(){
    char s1[1024],s2[1024];
    gets(s1);
    gets(s2);
    int i,j;
    int len1=strlen(s1),len2=strlen(s2);

    for(i=len1,j=0;i<len1+len2+1;i++,j++){
        *(s1+i)=*(s2+j);
    }
    printf("%s",s1);


    return 0;
}