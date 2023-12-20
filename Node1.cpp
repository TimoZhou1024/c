#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    int value;
    ListNode* next;
};

//初始化
ListNode *genlist(int n){
    ListNode *head,*p,*tail;
    head=NULL;
    tail=NULL;
    int i;
    for(i=1;i<=n;i++){

        p=(ListNode*)malloc(sizeof(ListNode));
        printf("input the value:\n");
        scanf("%d",&p->value);
        if(head==NULL){
            tail=p;
            head=p;
        }
        else{
            tail->next=p;
            tail=tail->next;
        }

    }
    return head;
   

}

//给已知链表表头插入一项
ListNode *search_delete(ListNode *head,int num){
    ListNode *pp,*p,*d;
    p=head;
    pp=NULL;
    while(p!=NULL){
        if(p==head&&p->value==num){
            
            head=head->next;
            free(p);
            p=head;
            
            continue;

        }
        else if(p->value==num){
            
            pp->next=p->next;
            p->next=NULL;
            p=p->next;
            continue;
        }
        pp=p;
        p=p->next;
    }
    return head;
}


int main(){
    int n,num;
    ListNode *head,*w;
    printf("input the length of the node:\n");
    scanf("%d",&n);
    head=genlist(n);
    /*
    w=head;
    for(int i=1;i=n;i++){
        printf("%d\n",w->value);
        w=w->next;
    }
    */
    printf("enter the value you want to delete:\n");
    scanf("%d",&num);
    head=search_delete(head,num);
    w=head;
    while(w!=NULL){
        printf("%d\t",w->value);
        w=w->next;
    }


    

    return 0;

}