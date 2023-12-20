/*
    周思远 23307130063
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int up;
    int down;
    struct node *next;
    
}node;

node *add(struct node *p1, struct node *p2){
    
}

node *create(void){
    int up,down;
    struct node *head,*p;
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    p=head;
    up=scanf("%d",&up);
    while(up!=-1){
        down=scanf("%d",&down);
        p->next=(struct node*)malloc(sizeof(struct node));
        p=p->next;
        p->up=up;
        p->down=down;
        p->next=NULL;
        up=scanf("%d",&up);
    }
    

    return head;
}
int main(){
    struct node *p1,*p2,*head;
    p1=create();
    p2=create();
    //head=add(p1,p2);
    printf("good!");
    return 0;
}