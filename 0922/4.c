#include<stdio.h>
int main(){
    char ch;
    ch=getchar();
    ch=(ch>='A'&&ch<='Z')?(ch-'A'+'a'):ch;
    putchar(ch);
    return 0;
}
