    #include <stdio.h>
    #include <string.h>
    #include <math.h>

    int longestValidParentheses(char *s){
        int i=0;
        int max=0;
        int tempmax=1;
        
        int n=strlen(s)-1;

        for(int j=0;j<=n-1;j++){
            if(s[j]=='('){
                for(int k=j;k<=n-1;k++){
                    
                    if(s[k]==s[k+1]||s[k+1]=='\"') break;
                    tempmax+=1;
                }
                if(tempmax>max){
                    max=tempmax;
                }
            }
            tempmax=1;
        }

        
        return max;

    }
    int main(){
        char s[30000];

        fgets(a,30000,stdin);
        
        printf("%d",longestValidParentheses(a));
        return 0;
    }