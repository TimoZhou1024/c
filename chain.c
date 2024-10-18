#include <stdio.h>
#include <stdlib.h>

struct intNode {
    int data;
    struct intNode *next;
};

struct intNode* headinsert(int n){
    struct intNode *head;
    struct intNode *p;
    head=NULL;
    for(int i=0;i<n;i++){
        
        p=(struct intNode*)malloc(sizeof(struct intNode));
        scanf("%d",&(p->data));
        p->next=head;
        head=p;
    }
    return head;
}

struct intNode* tailinsert(int n){
    struct intNode *head,*tail;
    struct intNode *p;
    head=NULL;
    for(int i=0;i<n;i++){
        p=(struct intNode*)malloc(sizeof(struct intNode));
        scanf("%d",&(p->data));
        p->next=NULL;//重要！！
        if(head==NULL){
            head=p;
            tail=p;
        }
        else{
            tail->next=p;
            tail=p;
        }
    }
    return head;
}
struct intNode* insert_before(struct intNode* head){
    int val;
    printf("input the number you want to search");
    scanf("%d",&val);
    struct intNode *p,*u,*w;
    u=(struct intNode*)malloc(sizeof(struct intNode));
    scanf("%d",&(u->data));
    p=head;
    while(p!=NULL){
        if(p->data==val){
            if(p==head){
                u->next=head;
                head=u;
                w=p;
                p=p->next;
            }
            else{
                w->next=u;
                u->next=p;
                w=p;
                p=p->next;

            }
        }
        else{
            w=p;
            p=p->next;
        }
    }
    return head;
}
void out(struct intNode *head){
    struct intNode *p;
    p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    return;
}



int main() {
    struct intNode *head;
    head=NULL;
    int n;
    scanf("%d",&n);
    
    head=tailinsert(n);
    
    head=insert_before(head);
    out(head);
    return 0;
}
