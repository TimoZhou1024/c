/*
    周思远 23307130063
*/
#include <stdio.h>

int a[100][100];

int main(){
    int sumij,i,j,thenumber,n;
    thenumber=1;
    scanf("%d",&n);
    
    for(sumij=2;sumij<=n+1;sumij++){
        for(i=1,j=sumij-i;i<sumij;i++
        
        ,j--){
        if(sumij%2==0){
            a[i][j]=thenumber;
        }
        else{
            a[j][i]=thenumber;
        }
        thenumber++;
        }
    }

    for(sumij=n+2;sumij<=2*n;sumij++){
        for(i=n,j=sumij-i;j<=n;i--,j++){
        if(sumij%2==0){
            a[j][i]=thenumber;
        }
        else{
            a[i][j]=thenumber;
        }
        thenumber++;
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(a[i][j]<10) printf("   %d",a[i][j]);
            if(a[i][j]>=10&&a[i][j]<100) printf("  %d",a[i][j]);
            if(a[i][j]>=100&&a[i][j]<1000) printf(" %d",a[i][j]);
        }
        printf("\n");
    }



    return 0;
}