/*
    周思远 23307130063
*/
#include <stdio.h>

int main(){
    int a[15][15];
    int n,times,x=0,y=0,givenumber=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=-1;
        }
    }

    times=n/2;
    for(int i=1;i<=times;i++){
        while(a[x][y]==-1){
            a[x][y]=givenumber;
            y++;
            givenumber++;
        }
        y--;
        x++;
        while(a[x][y]==-1){
            a[x][y]=givenumber;
            x++;
            givenumber++;
        }
        x--;
        y--;
        while(a[x][y]==-1){
            a[x][y]=givenumber;
            y--;
            givenumber++;
        }
        y++;
        x--;
        while(a[x][y]==-1){
            a[x][y]=givenumber;
            x--;
            givenumber++;
        }
        x++;
        y++;
    }
    if(n%2==1){
        a[(n-1)/2][(n-1)/2]=n*n;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]<10) printf("   %d",a[i][j]);
            if(a[i][j]>=10&&a[i][j]<100) printf("  %d",a[i][j]);
            if(a[i][j]>=100&&a[i][j]<1000) printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}