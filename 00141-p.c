/*
    周思远 23307130063
*/
#include <stdio.h>
#include <math.h>
#include <malloc.h>
void bsort(int *a,int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(*(a+j)<*(a+j-1)){
                temp=*(a+j);
                *(a+j)=*(a+j-1);
                *(a+j-1)=temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    bsort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }

    free(a);
    return 0;
}