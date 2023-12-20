#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int ratio;
  int index;
  struct node *next;
}*pnode;

pnode Create_list(void);//负责在读入的同时创建链表
void Add_list(pnode list1,pnode list2);//负责把链表相加
int main()
{ 
  pnode l1=Create_list();
  pnode l2=Create_list();
  Add_list(l1,l2);
  pnode p;
  for(p=l1->next;p!=NULL;p=p->next) printf("%d %d ",p->ratio,p->index);
  return 0;
}
pnode Create_list(void)
{
  int index,ratio;
  pnode head,q;
  head=(pnode)malloc(sizeof(struct node));
  head->next=NULL;
  q=head;                                       
  scanf("%d",&index);
  while(index!=-1){
    scanf("%d",&ratio);
    q->next=(pnode)malloc(sizeof(struct node));
    (q->next)->next=NULL;
    (q->next)->index=index;
    (q->next)->ratio=ratio;  
    q=q->next;
    scanf("%d",&index);
  }
  return head;
}//head并不存储数据，便于后续表元的统一插入
  
void Add_list(pnode l1,pnode l2)
{
  pnode p,q,pre,temp;
  p=l1->next;q=l2->next;
  pre=l1;
  while(p!=NULL&&q!=NULL){
    if(q->index > p->index){
      temp=q->next;
      q->next=p;
      pre->next=q;
      pre=q;//更新pre,p,q
      q=temp;
    }else if(q->index < p->index){
      pre=p;
      p=p->next;
    }else{
      if(q->ratio + p->ratio==0){ 
      pre->next=p->next;
      }else{
      p->ratio=p->ratio + q->ratio;
      pre=p;
      }
      p=pre->next;
      temp=q;
      q=q->next;
    }
  }
  if(q!=NULL) pre->next=q;
  return;
}