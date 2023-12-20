#include <stdio.h>
#include <string.h>
#include <malloc.h>
struct ListNode{
    char *a;
    int count;
    struct ListNode *next;
};
/*
    指定头节点

    定义新节点
    录入数据
    遇空格截断

    新节点接回原节点链，判断大小
    strcmp();
    = -> count++
    >_< -> 接上

*/
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=strlen(str),i,j=0,ismin,ccount=0;
    struct ListNode *head,*cur,*temp,*find,*findpre,*save;
    head=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->a=(char*)malloc(1024*sizeof(char));

    temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->a=(char*)malloc(1024*sizeof(char));
    head->next=NULL;
    cur=head;
    find=head;


    for(i=0;i<len;i++){
        if(str[i]!=' '){
            temp->a[j]=str[i];
            j++;
            temp->count=1;
        }
        if(str[i]==' '){
            ccount++;
            if(ccount==1){
                head->next=temp; 
                cur=head->next;
                find=head->next;
                findpre=head;
                free(temp);
                struct ListNode *temp;
                temp=(struct ListNode*)malloc(sizeof(struct ListNode));
                temp->a=(char*)malloc(1024*sizeof(char));

            }
            else{
                while(find!=NULL){
                    if(strcmp(temp->a,head->next->a)<0){
                        save=head->next;
                    }
                    
                    if(strcmp(temp->a,find->a)==0){
                        find->count++;
                        break;
                    }
                    if(strcmp(temp->a,find->a)>0&&find->next!=NULL&&
                    strcmp(temp->a,find->next->a)<0){
                        save=find->next;
                        find->next=temp;
                        temp->next=save;
                        break;

                    }
                    if(find->next==NULL){
                        find->next=temp;
                    }

                    findpre=find;
                    find=find->next;
                
                //插入，判序
                free(temp);
                struct ListNode *temp;
                temp=(struct ListNode*)malloc(sizeof(struct ListNode));
                temp->a=(char*)malloc(1024*sizeof(char));

                //清元，定新
                }
            }
            
        }
        
    }

    printf("Well\n");
    struct ListNode *browse;
    browse=head;
    while(browse!=NULL){
        puts(browse->a);
        printf("%d",browse->count);
        browse=browse->next;
    }
    return 0;
}