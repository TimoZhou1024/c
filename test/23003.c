/*
    周思远 23307130063
*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[128];
    int num[128]={0};
    scanf("%s",s);
    int i,tempsum=1;
    char temp;
    temp=s[0];
    for(i=1;i<strlen(s);i++){
        if(s[i]!=temp){
            
            printf("%c",temp);
            if(tempsum!=1){
                printf("%d",tempsum);
            }
            tempsum=1;
            temp=s[i];
        }
        else{
            tempsum++;
        }
    }
    printf("%c",temp);
    if(tempsum!=1){
        printf("%d",tempsum);
    }


    printf("\n");
    for(i=0;i<strlen(s);i++){
        num[s[i]]++;
    }
    
    
    for(i=65;i<=122;i++){
        if(num[i]==1){
            printf("%c",i);
        }
        else if(num[i]!=0){
            printf("%c%d",i,num[i]);
        }
    }
    
    
    return 0;
}