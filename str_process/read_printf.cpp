#include <stdio.h>
int main(){
    FILE *fp;
    int x;
    char fname[128];
    char nfname[128];
    char storage[128];
    scanf("%s%*c",fname);
    fp=fopen(fname,"r");
    while(fscanf(fp,"%d",&x)==1){
        printf("%d\n",x);
    }
    
    /*
    fscanf(fp,"%s",storage);
    printf("%s",storage);
    */
    
    int i=fclose(++fp);
    printf("%d",i);
    return 0;
}