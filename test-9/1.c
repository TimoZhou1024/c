#include <stdio.h>
#include <string.h>
int main(){
    char str[1024],maxChar1,maxChar2='w';
    int len,i,j;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='0'&&str[i]<='9'){
            maxChar1=str[i];
            break;
        }
    }
    for(j=i;j<len;j++){
        if(str[j]>='0'&&str[j]<='9'){
            if(str[j]>maxChar1){
                maxChar2=maxChar1;
                maxChar1=str[j];
            }
            else if(str[j]<maxChar1&&maxChar2=='w'){
                maxChar2=str[j];
            }
            else if(str[j]<maxChar1&&str[j]>maxChar2){
                maxChar2=str[j];
            }
        }
    }
    if(maxChar2=='w') printf("-1");
    else printf("%c",maxChar2);


    return 0;
}