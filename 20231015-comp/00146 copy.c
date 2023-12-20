/*
    周思远 23307130063
*/
#include <stdio.h>
#include <string.h>

int tobig(char a){
    if(a>='a'&&a<='z'){
        a=a-'a'+'A';
    }
    return a;
}

int tosmall(char a){
    if(a>='A'&&a<='Z'){
        a=a-'A'+'a';
    }
    return a;
}


int main(){
    char a[1024];
    int i;
    fgets(a,1024,stdin);
    a[0]=tobig(a[0]);
    for(i=1;i<strlen(a)-1;i++){
        if(a[i-1]==' '){
            a[i]=tobig(a[i]);
        }
        else{
            if(a[i]!=' '){
                a[i]=tosmall(a[i]);
            }
        }
    }
    for(int j=0;j<=strlen(a)-2;j++){
        printf("%c",a[j]);
    }


    return 0;
}