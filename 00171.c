/*
    周思远 23307130063
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int up;
    int down;
    struct node *next;
}*pnode;

pnode create(void){
    pnode head,w;
    head=(pnode)malloc(sizeof(struct node));
    w=head;
    int up,down;
    scanf("%d",&up);
    while(up!=-1){
        w->next=(pnode)malloc(sizeof(struct node));
        w=w->next;
        scanf("%d",&down);
        w->up=up;
        w->down=down;
        scanf("%d",&up);
    }
    return head;
}

pnode merge(pnode p1,pnode p2){
    pnode head,w1,w2,w;
    head=p1;
    w=head;
    w1=p1->next;
    w2=p2->next;
    while(w1!=NULL&&w2!=NULL){
        if(w1->up>w2->up){
            w->next=w1;
            w=w1;
            w1=w1->next;
        }
        else if(w1->up<w2->up){
            w->next=w2;
            w=w2;
            w2=w2->next;
        }
        else if((w1->up)==(w2->up)){
            w1->down+=w2->down;
            w->next=w1;
            w=w1;
            w1=w1->next;
            w2=w2->next;
        }
    }
    if(w1==NULL){
        w->next=w2;
    }
    else if(w2==NULL){
        w->next=w1;
    }
    
    return head;
}

int main(){
    pnode p1,p2,test,final;
    p1=create();
    p2=create();
    

    final=merge(p1,p2);
    
    test=final->next;
    while(test!=NULL){
        if(test->down!=0){
            printf("%d %d ",test->down,test->up);
        }
        
        test=test->next;
    }

    getchar();
    return 0;
}