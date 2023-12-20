/*
    周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    int n,flag;
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        flag=0;
        for(int j=2;j<=i-1;j++){
            if (i%j==0){
                flag=1;
            }
        }
        if (flag==0){
            printf("%d ",i);   
        }
    }
    return 0;
}