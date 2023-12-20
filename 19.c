#include<stdio.h>
#include<string.h>
int main()
{
    char a[150],b[150];
    fgets(a,150,stdin);
    fgets(b,150,stdin);
    int minlen,lcslen,i,j,k,r,fail;
    if(strlen(a)<strlen(b)){
        minlen=strlen(a);
    }
    else{
        minlen=strlen(b);
    }
    for(i=1;i<=minlen;i++){
        for(j=0;i+j<=strlen(a);j++){
            for(k=0;k+i<=strlen(b);k++){
                fail=0;
                for(r=0;r<=i-1;r++){
                    if(a[j+r]!=b[k+r]){
                        fail=1;
                    }
                }
                if(fail==0){
                    lcslen=i;
                }

            }
        }
    }
    printf("%d",lcslen);
    return 0;
}