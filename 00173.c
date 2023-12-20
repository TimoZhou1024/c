/*
    周思远 23307130063
*/
#include <stdio.h>
int main(){
    int n,i,j;
    int a[10000];
    int *ap[100];
    scanf("%d",&n);
    a[0]=1;
    ap[0]=&a[0];
    for(i=1;i<n;i++){
        ap[i]=ap[i-1]+i;
    }
    for(i=1;i<n;i++){
        ap[i][0]=1;
        ap[i][i]=1;
        for(j=1;j<i;j++){
            ap[i][j]=ap[i-1][j-1]+ap[i-1][j];
        }
    }
    for(i=0;i<n;i++){
        printf("%*c",2*n-2*i,' ');
        for(j=0;j<=i;j++){
            printf("%4d",ap[i][j]);

        }
        printf("\n");
    }
    return 0;
}