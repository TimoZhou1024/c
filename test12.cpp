#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct ListNode{
    char *a;
    int count;
    struct ListNode *next;
};

void f(int *ap,int *bp){
    int temp;
    temp=*ap;
    *ap=*bp;
    *bp=temp;
}  



char* strcpy(char *to,char *from){
    char *s=to;
    while(*to++=*from++);
    return s;
}



int main(){


    








    int a=9,b=6,c=2,d=8,e=1,f=7,temp;
    int *ap[]={&a,&b,&c,&d,&e,&f};
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            if(*ap[j]<*ap[j-1]){
                
                temp=*ap[j];
                *ap[j]=*ap[j-1];
                *ap[j-1]=temp;
            }
        }
    }
    for(int k=0;k<6;k++){
        printf("%d\n",*ap[k]);
    }
    return 0;
}