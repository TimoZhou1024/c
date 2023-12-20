/*
    周思远 23307130063
*/
#include <stdio.h>

int main(){
    int i,lena,lenb,count=0;
    int act[1000]={0};
    int a[1000]={0};
    scanf("%d",&a[0]);
    for(i=1;a[i-1]!=-1||i%2!=1;i++){
        scanf("%d",&a[i]);
    }
    lena=i-1;
    int b[1000]={0};
    scanf("%d",&b[0]);
    for(i=1;b[i-1]!=-1||i%2!=1;i++){
        scanf("%d",&b[i]);
    }
    lenb=i-1;

    for(i=0;i<=lena-2;i+=2){
        act[a[i]]+=a[i+1];
    }
    for(i=0;i<=lenb-2;i+=2){
        act[b[i]]+=b[i+1];
    }
    for(i=999;i>0;i--){
        if(count==0){
            if(act[i]==0) continue;
            else if(act[i]==-1){
                printf("-x^%d",i);
                count++;
            } 
            else if(act[i]==1){
                printf("x^%d",i);
                count++;
            }  
            else if(act[i]>0){
                printf("%dx^%d",act[i],i);
                count++;
            } 
            else{
                printf("%dx^%d",act[i],i);
                count++;
            }             
        }
        else{
            if(act[i]==0) continue;
            else if(act[i]==-1) printf("-x^%d",i);
            else if(act[i]==1)  printf("+x^%d",i);
            else if(act[i]>0) printf("+%dx^%d",act[i],i);
            else printf("%dx^%d",act[i],i);
        }
        
    }
    if(count!=0){
        if(act[0]>0) printf("+%d",act[0]);
        if(act[0]<0) printf("%d",act[0]);
    }
    else{
        //if(act[0]>0) printf("%d",act[0]);
        //if(act[0]=0) printf("0");
        //if(act[0]<0) printf("%d",act[0]);
        printf("%d",act[0]);
    }
    


    return 0;
}