/*
    周思远 23307130063
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[150],b[150];
    int i,j,k,p;
    k=0;
    p=0;
    fgets(a,150,stdin);
    fgets(b,150,stdin);
    for(i=0;i<=strlen(a)-1&&a[i]!='\n';i++){
        for(j=p;j<=strlen(b)-1&&b[i]!='\n';j++){
            if(b[j]==a[i]){
                k=k+1;
                p=j+1;
                break;
            }
        }
    }
    printf("%d",k);
    return 0;
}