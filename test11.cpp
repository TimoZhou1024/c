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
int main(){
    struct ListNode *w,*p;
    w=(struct ListNode*)malloc(sizeof(struct ListNode));
    w->a=(char*)malloc(100*sizeof(char));
    w->a=(char*)"1212";
    p=w;
    w->a=(char*)"1213";
    puts(p->a);

    return 0;
}