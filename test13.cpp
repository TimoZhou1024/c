#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct ListNode{
    
    int count;
    struct ListNode *next;
}node;


node* create(void){
    node *head;
    head=(node*)malloc(sizeof(node));
    head->count=10;
    return head;

}

int main(){
    node *l1;
    l1=create();
    printf("%d",l1->count);
    








    
    return 0;
}