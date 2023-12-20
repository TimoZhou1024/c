#include <stdio.h>
#include <string.h>
int main(){
    int a[1024]={0},n,i,j=-1,temp;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]%2==1){
            j++;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
        
    }


    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }


    return 0;
}