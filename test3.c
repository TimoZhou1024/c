#include <stdio.h>
#include <math.h>
#define MAX 100000
int main(){
    int a[MAX],n,b,c,i,j,flag;
    scanf("%d",&n);
    i=0;
    
    for(b=3;b<=n;b++){
        flag=0;
        for(c=2;c<b;c++){
            if(b%c==0) flag=1;
            
        }
        if(flag==0){
            a[i]=b;
            i++;
        }
    }
    
    printf("2 ");
    for(j=0;j<i;j++){
        if(j==0) printf("%d",a[j]);
        else printf(" %d",a[j]);
    }
    return 0;
}