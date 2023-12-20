#include <stdio.h>
int main(){
    int a,i,j,k,p,q;
    scanf("%d",&a);
    for(j=1;j<=2*a-1;j++){
        printf("*");
    }
    printf("\n");
    for(i=1;i<=a-2;i++){
        for(k=1;k<=i;k++){
            printf(" ");
        }
            printf("*");
        for(p=1;p<=2*a-1-i-i-2;p++){
            printf(" ");
        }
        printf("*");
        for(k=1;k<=i;k++){
            printf(" ");
        }
        printf("\n");
    }
    for(q=1;q<=a-1;q++){
        printf(" ");
    }
    printf("*");
    printf("\n");
    return 0;
}