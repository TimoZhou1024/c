    #include <stdio.h>
    #include <string.h>
    #include <math.h>

    int main(){
        int i=0;
        int max=0;
        int tempmax=1;
        char a[30000];

        fgets(a,30000,stdin);
        int n=strlen(a)-1;

        for(int j=5;j<=n-2;j++){
            if(a[j]=='('){
                for(int k=j;k<=n-2;k++){
                    
                    if(a[k]==a[k+1]||a[k+1]=='\"') break;
                    tempmax+=1;
                }
                if(tempmax>max){
                    max=tempmax;
                }
            }
            tempmax=1;
        }

        printf("%d",max);
        return 0;
    }