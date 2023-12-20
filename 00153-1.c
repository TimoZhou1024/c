/*
    周思远 23307130063
*/
#include<stdio.h>
#include<string.h>



int max3(int a,int b,int c){
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    return max;
}

int same(char *a,char *b,int i,int j){
    if(a[i]==b[j]) return 1;
    else return 0;
}

int main()
{
    char a[150],b[150];
    int f[200][200]={0},i,j;

    gets(a);
    gets(b);
    int lena,lenb;
    lena=strlen(a);
    lenb=strlen(b);
    
    
    f[0][0]=same(a,b,0,0);
    for(int k=1;k<=lena;k++) f[k][0]=f[0][0];
    for(int k=1;k<=lenb;k++) f[0][k]=f[0][0];

    for(i=1;i<lena;i++){
        for(j=1;j<lenb;j++){
            f[i][j]=max3(f[i-1][j-1]+same(a,b,i,j),f[i-1][j],f[i][j-1]);
        }
    }
    
    printf("%d",f[lena-1][lenb-1]);
     
    return 0;
}