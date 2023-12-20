#include <stdio.h>

int main(){
    int lena,lenb;
    int a[1000];
    int b[1000];

    scanf("%d",&a[0]);
    for(lena=0;lena%2!=1||a[lena-1]!=-1;lena++){
        scanf("%d",&a[lena]);
    }
    lena--;

    scanf("%d",&b[0]);
    for(lenb=0;lenb%2!=1||b[lenb-1]!=-1;lenb++){
        scanf("%d",&b[lenb]);
    }
    lenb--;






    /*
    int a1[2][1000];
    int a2[2][1000];
    int i=1;
    scanf("%d%d",&a1[0][0],&a2[1][0]);
    while(a1[2][i-1]!=-1){
        scanf("%d%d",&a[0][i],&a[1][i]);
        i++;
    }


    i=1;
    scanf("%d%d",&a2[0][0],&a2[1][0]);
    while(a2[2][i-1]!=-1){
        scanf("%d%d",&a2[0][i],&a2[1][i]);
        i++;
    }*/
    return 0;
}