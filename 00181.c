/*
    周思远 23307130063
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}*pnode;

pnode create(int n){
    pnode head,w;
    head=(pnode)malloc(sizeof(struct node));
    w=head;
    int temp;
    for(int i=0;i<n;i++){
        w->next=(pnode)malloc(sizeof(struct node));
        w=w->next;
        scanf("%d",&temp);
        w->num=temp;
    }

    return head;
}

pnode cpy(pnode p){
    pnode w1,w2,head;
    head=(pnode)malloc(sizeof(struct node));

    w1=p->next;
    w2=head;

    while(w1!=NULL){
        w2->next=(pnode)malloc(sizeof(struct node));
        w2=w2->next;
        w2->num=w1->num;
        w1=w1->next;
    }

    return head;
}

void sum(pnode p1,pnode p2){
    pnode temp1,temp2,head,w1,w2,w,test;
    temp1=cpy(p1);
    temp2=cpy(p2);
    w1=temp1->next;
    w2=temp2->next;
    head=temp1;
    w=head;
    while(w1!=NULL&&w2!=NULL){
        if(w1->num<w2->num){
            w->next=w1;
            w=w1;
            w1=w1->next;
        }
        else if(w1->num>w2->num){
            w->next=w2;
            w=w2;
            w2=w2->next;
        }
        else if(w1->num==w2->num){
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
    test=head->next;
    printf("%d",test->num);
    test=test->next;
    while(test!=NULL){
        printf(" %d",test->num);
        test=test->next;
    }
    printf("\n");
    return;
}

void minus(pnode p1,pnode p2){
    pnode temp1,temp2,head,w1,w2,w,test;
    temp1=cpy(p1);
    temp2=cpy(p2);
    w1=temp1->next;
    w2=temp2->next;
    head=temp1;
    w=head;
    while(w1!=NULL&&w2!=NULL){
        
        

        if(w1->num<w2->num){
            w->next=w1;
            w=w1;
            w1=w1->next;
        }
        else if(w1->num==w2->num){
            w->next=NULL;
            w1=w1->next;
            w2=w2->next;
        }
        else if(w1->num>w2->num){
            w->next=NULL;
            w2=w2->next;
        }
    }
    if(w2==NULL&&w1!=NULL){
        w->next=w1;
    }
    
    test=head->next;
    if(test==NULL){
        printf("Empty\n");
    }
    else{
        printf("%d",test->num);
        test=test->next;
        while(test!=NULL){
            printf(" %d",test->num);
            test=test->next;
        }
        printf("\n");
    }
    
    return;
}
void aand(pnode p1,pnode p2){
    pnode temp1,temp2,head,w1,w2,w,test;
    temp1=cpy(p1);
    temp2=cpy(p2);
    w1=temp1->next;
    w2=temp2->next;
    head=temp1;
    w=head;
    while(w1!=NULL&&w2!=NULL){
        if(w1->num<w2->num){
            w->next=NULL;
            w1=w1->next;
        }
        else if(w1->num>w2->num){
            w->next=NULL;
            w2=w2->next;
        }
        else if(w1->num==w2->num){
            w->next=w1;
            w=w1;
            w1=w1->next;
            w2=w2->next;
        }
    }
    
    test=head->next;
    if(test==NULL){
        printf("Empty\n");
    }
    else{
        printf("%d",test->num);
        test=test->next;
        while(test!=NULL){
            printf(" %d",test->num);
            test=test->next;
        }
        printf("\n");
    }
    
    return;
}

int main(){
    int n1,n2;
    scanf("%d%d",&n1,&n2);

    pnode p1,p2,test;
    p1=create(n1);
    p2=create(n2);

    sum(p1,p2);
    minus(p1,p2);
    aand(p1,p2);
    
    return 0;
}