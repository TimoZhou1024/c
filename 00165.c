/*
    周思远 23307130063
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int** make(int n){
    int **tab;
    tab=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        tab[i]=(int*)malloc(5*sizeof(int));
        for(int j=0;j<5;j++){
            scanf("%d",&tab[i][j]);
        }
    }
    return tab;
}

void find(int s,int n,int** tab){
    int flag=0;
    for(int i=0;i<n;i++){
        if(tab[i][0]==s){
            printf("%d %d %d %d %d",tab[i][0],tab[i][1],tab[i][2],tab[i][3],tab[i][4]);
            flag=1;
            break;
        }
        
    }
    if(flag==0){
        printf("Student Not Found!");
    }
}
int main(){
    int n,s;
    scanf("%d %d",&n,&s);
    int** tab;
    tab=make(n);
    find(s,n,tab);

    return 0;
}