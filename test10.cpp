#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct ListNode{
    char *a;
    int count;
    struct ListNode *next;
};

int main(){
    int flag=0;
    struct ListNode *aa,*bb;
    aa=(ListNode*)malloc(sizeof(ListNode));
    bb=(ListNode*)malloc(sizeof(ListNode));
    aa->a=(char*)malloc(sizeof(char));
    bb->a=(char*)malloc(sizeof(char));
    aa->a[0]='m';
    bb->a[0]='m';
    if(strcmp(aa->a,bb->a)==0){
        flag=1;
    }
    printf("%d",flag);
    return 0;
}