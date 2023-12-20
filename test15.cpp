#include <stdio.h>

int** out(){
    int a[10][10];
    for (int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            a[i][j]=i*10000+j;
        }
    }
    return a;
}

int main(){
    int **a;
    a=out();
    for (int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}