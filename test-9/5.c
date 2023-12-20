#include <stdio.h>
#include <string.h>
int main(){
    int a[20],i,min1,min2,max;
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
    }
    int flag=1;
    for(i=1;i<20;i++){
        if(a[i]!=a[0]) flag=0;
    }
    if(flag==1) printf("最小数为%d,没有次小数",a[0]);
    else{
        min1=a[0];
        max=a[0];
        for(i=1;i<20;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        min2=max;
        for(i=1;i<20;i++){
            if(a[i]<min1){
                min2=min1;
                min1=a[i];
            }
            else if(a[i]>min1&&a[i]<min2){
                min2=a[i];
            }

        }
        printf("最小数为%d,次小数为%d",min1,min2); 
    }
    


    return 0;
}
