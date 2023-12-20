#include <stdio.h>
#include <string.h>

#define max(a,b) (a)>=(b)?(a):(b)

int main(){
    int n,x,y,z;
    int a[10][10]={0};
    int maxsum[10][10][10][10]={0};
    
    scanf("%d",&n);
    while(1){
        scanf("%d%d%d",&x,&y,&z);
        if (x==0&&y==0&&z==0){
            break;
        }
        a[x][y]=z;
    }

    for(int p=1;p<=n;p++){
        for(int q=1;q<=n;q++){
            for(int i=1;i<=n;i++){
                for (int j=1;j<=n;j++){
                    maxsum[p][q][i][j]=a[p][q]+max(max(maxsum[p-1][q][i-1][j],maxsum[p][q-1][i][j-1]),max(maxsum[p-1][q][i][j-1],maxsum[p][q-1][i-1][j]));

                    if(p!=i&&q!=j) {
                        maxsum[p][q][i][j]+=a[i][j];
                    }
                    

                }
            }
        }
    }
    printf("%d",maxsum[n][n][n][n]);
    return 0;
}