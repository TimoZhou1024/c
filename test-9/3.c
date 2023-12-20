#include <stdio.h>
#include <string.h>
int main(){
    char a[1024],maxChar;
    int i,len,t[1024]={0},maxCount=0;
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++){
        t[a[i]]++;
    }
    for(i=0;i<1024;i++){
        if(t[i]>maxCount){
            maxCount=t[i];
            maxChar=i;
        }
    }
    printf("%c,%d",maxChar,maxCount);
    return 0;
}