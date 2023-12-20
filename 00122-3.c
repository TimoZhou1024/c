/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==1) printf("*");
    else{
            for(int i=1;i<=2*n-1;i++){
                printf("*");
                if(i!=2*n-1){
                    printf(" ");
                }
                
            }
            printf("\n");
            for(int j=2;j<=n;j++){
                printf("%*c*",2*j-2,' ');
                printf("%*c",4*n-5-2*(2*j-2),' ');
                if(4*n-5-2*(2*j-2)>0) printf("*\n");
            }
        }
        printf("1");
    return 0;
}
