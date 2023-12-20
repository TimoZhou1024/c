/*
    周思远 23307130063
*/
#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main(){
    char a[1024];
    int i;
    gets(a);
    for(i=0;i<strlen(a);i++) *(a+i)=(*(a+i)>='a'&&*(a+i)<='z')?*(a+i)-'a'+'A':*(a+i);
    puts(a);
    return 0;
}