/*
    周思远 23307130063
*/

#include <stdio.h>


int main(){

    int a[100][100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==n-1){
                printf("%d",a[j][i]);
            }
            else printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    




    return 0;    
}