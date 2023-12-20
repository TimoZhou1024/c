#include <bits/stdc++.h>
using namespace std;
struct stuS{
    int number;
    char name[20];
    int score;
    stuS *next;

};

stuS *createstudent(int num, char *name, int s){
    stuS *p;
    p=(stuS*)malloc(sizeof(stuS));
    p->number=num;
    strcpy(p->name,name);
    p->score=s;
    p->next=NULL;
    return p;
}//建立创建表元函数，返回表元地址

void travel(stuS *head){
    stuS *p;//p为工作指针
    p=head;
    if(p==nulL){
        printf("there is no student here\n")

    }
    else{
        while(p!=NULL){
            printf("%d\t%s\t%d\n",p->number,p->name,p->score);
            p=p->next;
        }
    }
}//遍历

stuS *searchstudent(stuS *head,int num){
    stuS *p;//p为工作指针
    p=head;
    while(p!=NULL&&p->number!=num){
        p=p->next;
    }
    return p;
}

int main(){
    /*
    
    stuS *head,*p,*p1,*p2;
    head=NULL;
    p=(stuS*)malloc(sizeof(stuS));
    head->next=p;
    scanf("%d%s%d",&p->number,&p->name,&p->score);
    p->next=NULL;
*/
    stuS *head,*p,*p1,*p2;
    
    head=NULL;//空链表

    p=(stuS *)malloc(sizeof(stuS));
    scanf("%d%s%d",&p->number,p->name,&p->score);
    p->next=NULL;//创建表元

    //插入新表元
        //在head前插入新表元p,使p成为新head
        p->next=head;
        head=p;
        //在指定表元p后插入新表元p1
        p1->next=p->next;
        p->next=p1;
        //在末尾插入表元p1
        stuS *p;//工作指针
        while(p->next!=NULL){
            p=p->next;
        }
        p1->next=NULL;
    //删除表元
        //删除首表元p1,但不释放首表元,用p指向p1
        p=head;
        head=head->next;
        p->next=NULL;





    return 0;
}
    