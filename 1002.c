/*
	周思远 23307130063
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int det(int a,int b,int m,int n){
    int c;
    c=(m+1)*b+a+1;
    if (a<0||b<0){
        c=-1;
    }
    return c;
}

int main(){
    int x,y,m,n;//x,y是马，m,n是格子
    printf("enter the field and the horse location:\n");
    scanf("%d%d%d%d",&m,&n,&x,&y);
    int matrix[m+1][n+1];
    int i,j,t=0;
 
    int banned[9];
    banned[0]=det(x,y,m,n);
    banned[1]=det(x-1,y-2,m,n);
    banned[2]=det(x+1,y-2,m,n);
    banned[3]=det(x-1,y+2,m,n);
    banned[4]=det(x+1,y+2,m,n);
    banned[5]=det(x-2,y-1,m,n);
    banned[6]=det(x+2,y-1,m,n);
    banned[7]=det(x-2,y+1,m,n);
    banned[8]=det(x+2,y+1,m,n);

    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            t=0;
            for(int k=0;k<=8;k++){
                if(det(i,j,m,n)==banned[k]){
                    t=1;
                }
            }
            if (t==1){
                matrix[i][j]=0;
            }
        }
    }

    for(i=0;i<=m;i++){
        matrix[i][0]=1;
        t=0;
        for(int j=0;j<=8;j++){
            if(det(i+1,0,m,n)==banned[j]){
                t=1;
            }
        }
        if(t==1){
            break;
        }
    }

    for (int k = i+1; k<=m; k++){
        matrix[k][0]=0;
    }
    
    for(i=0;i<=n;i++){
        matrix[0][i]=1;
        t=0;
        for(int j=0;j<=8;j++){
            if(det(0,i+1,m,n)==banned[j]){
                t=1;
            }
        }
        if(t==1){
            break;
        }
    }

    for (int k = i+1; k<=n; k++){
        matrix[0][k]=0;
    }
    
    for (i=1;i<=m;i++){
        for (j=1;j<=n;j++){
            t=0;
            for(int k=0;k<=8;k++){
                if(det(i,j,m,n)==banned[k]){
                    t=1;
                }
            }
            if(t==1){
                continue;
            }
            matrix[i][j]=matrix[i-1][j]+matrix[i][j-1];
        }
    }
    
    printf("%lld",matrix[m][n]);
       
    
    return 0;
}