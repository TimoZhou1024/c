/*
    周思远 23307130063
*/
#include <stdio.h>
int main(){
    char s1[1024],s2[1024];
    int n;
    gets(s2);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        *(s1+i)=*(s2+i);
    }
    printf("%s",s1);


    return 0;
}