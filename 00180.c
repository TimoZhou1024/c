#include <stdio.h>
#include <string.h>
#include <malloc.h>
struct ListNode{
    char a[100];
    int count;
    struct ListNode *next;
};

int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len,i,j=0;
    int flag;
    struct ListNode *head,*p,*find;
    head=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->next=NULL;
    p=head;
    len=strlen(str);

    for(i=0;i<=len-1;i++){
        if(str[i]!=' '){
            p->count=1;
            p->a[j]=str[i];
            j++;
            //fill in the Node
        }
        //else if(str[i]=='\n') break;
        else{
            flag=0;
            find=head;
            while(find!=NULL){
                if(strcmp(find->a,p->a)==0){
                    p->count++;
                    flag=1;
                    break;
                }
                find=find->next;
            }
            if(flag==0){
                struct ListNode *w;
                w=(struct ListNode*)malloc(sizeof(struct ListNode));
                p->next=w;
                p=w;
                j=0;

                //initialize and connect a new Node,j back to 0
            }
            else{
                struct ListNode *w;
                w=(struct ListNode*)malloc(sizeof(struct ListNode));
                p=w;
                j=0;
            }

        }
    }

    struct ListNode *s;
    s=head;
    while(s!=NULL){
        printf("%s\n",s->a);
        s=s->next;
    }




    return 0;
}