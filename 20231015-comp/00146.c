/*
    周思远 23307130063
*/
#include <stdio.h>
#include <string.h>

int main(){
    char a[1024];
    int i;
    gets(a);
    if(a[0]>='a'&&a[0]<='z'){
        a[0]=a[0]-'a'+'A';
    }

    for(i=1;i<strlen(a);i++){
        if(a[i-1]==' '&& a[i]>='a'&& a[i]<='z'){
            a[i]=a[i]-'a'+'A';
        }
        if(a[i-1]!=' '&& a[i]>='A'&& a[i]<='Z'){
            a[i]=a[i]-'A'+'a';
        }
    }
    printf("%s",a);


    return 0;
}