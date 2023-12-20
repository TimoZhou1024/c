#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(a,b) (a)>=(b)?(a):(b)

int main(){
    int n,x,y,z,a[20][20]={0},f[20][20][20][20]={0};
    printf("input:\n");
    scanf("%d",&n);
    while(1){
        scanf("%d%d%d",&x,&y,&z);
        if (x==0&&y==0&&z==0){
            break;
        }
        a[x][y]=z;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                for(int l=1;l<=n;l++)
                {
                    int opt1=max(f[i-1][j][k-1][l],f[i][j-1][k][l-1]);
                    int opt2=max(f[i-1][j][k][l-1],f[i][j-1][k-1][l]);
                    f[i][j][k][l]=max(opt1,opt2)+a[i][j];
                    if(i!=k && j!=l) f[i][j][k][l]+=a[k][l];
                }
            }
        }
    }
    printf("%d",f[n][n][n][n]);
    system("pause");
    return 0;
}