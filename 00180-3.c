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
    fgets对应'\n',算字符数，gets对应0，不算字符数（在strlen中）
*/
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=strlen(str),i,j=0,loop=0;
    struct ListNode *head,*temp,*find,*save;
    head=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->a=(char*)malloc(1024*sizeof(char));

    for(i=0;i<len;i++){
        if(str[i]!=' '&&str[i]!='\n'){
            *((temp->a)+j)=str[i];
            j++;
            temp->count=1;
        }
        else{
            loop++;
            if(loop==1){
                find=temp;
                head->next=temp;
            }
            else{
                while(find!=NULL){
                    if(strcmp(temp->a,find->a)==0){
                        find->count++;
                    }
                    else{

                        if(find->next!=NULL&&
                        strcmp(find->a,temp->a)<0&&
                        strcmp(find->next->a,temp->a)>0){
                            save=find->next;
                            find->next=temp;
                            temp->next=save;
                        }
                        else{
                            if(find->next==NULL){
                                if(strcmp(find->a,temp->a)<0){
                                    find->next=temp;
                                }
                                if(strcmp(find->a,temp->a)>0){
                                    head->next=temp;
                                    temp->next=find;
                                }
                            }
                        }
                    }
                    find=find->next;
                }
            }



            
            temp=(struct ListNode*)malloc(sizeof(struct ListNode));
            temp->a=(char*)malloc(1024*sizeof(char));
            j=0;
        }
    }

    printf("Well\n");
    struct ListNode *browse;
    browse=head->next;
    while(browse!=NULL){
        puts(browse->a);
        printf("%d",browse->count);
        browse=browse->next;
    }
    return 0;
}