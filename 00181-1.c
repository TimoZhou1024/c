/*
    周思远 23307130063
*/
#include <stdio.h>
#include <stdlib.h>

struct intNode{
    int num;
    struct intNode*next;
};

struct intNode* createchain(void){
    int x;
    struct intNode *h=(intNode*)malloc(sizeof(struct intNode)),*t,*p;
    h->next=NULL;
    t=h;
    while(scanf("%d"),&x){
        p=(struct intNode*)malloc(sizeof(struct intNode));
        p->num=x;
        p->next=NULL;
        t->next=p;
        t=p;
    }
    return h;

}
void UnionChain(intNode *s1,intNode *s2){
    for(w1=s1,p1=s1,p2=s2->next;p1&&p2!=NULL;p2=p2->next){
        if(p1!=NULL&&p2->num>p1->num){
            
            p1=p1->next;
            w1=p1;
        }
        else if(p1!=NULL&&p2->num==p1->num){
            
            p1=p1->next;
            p2=p2->next;
            w1=p1;

        }
        else{
            p=(struct intNode*)malloc(sizeof(struct intNode));
            p->num=p2->num;
            p->next=p1;
            w1->next=p;
            w1=p;
            p2=p2->next;
            
        }

    }

}

