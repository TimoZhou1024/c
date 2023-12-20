#include <stdio.h>
#include <cstdlib>

struct ListNode{
    int val;
    ListNode *next;
};

int main(){
    int n;
    scanf("%d",&n);
    struct ListNode *head=(ListNode*)malloc(n*sizeof(ListNode));
    struct ListNode *p=(ListNode*)malloc(n*sizeof(ListNode));
    struct ListNode *w;
    head->next=p;
    head->next->val=10086;
    w=head;
    w=w->next;
    printf("%d",w->val);

    
    return 0;
}