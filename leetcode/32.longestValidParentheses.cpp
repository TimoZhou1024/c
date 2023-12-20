#include<bits/stdc++.h>

int check_the_validity_of(char* s, int start, int end){   //check from s[start] to s[end], 1 for valid, 0 for invalid
    if(end>strlen(s)-1) return 0;
    int left=0, right=0;
    for(int i=start; i<=end; i++){
        if(s[i]=='(') left++;
        if(s[i]==')') right++;
        if(right>left) return 0;
    }

    if(right==left) return 1;
    else return 0;

}

int longestValidParentheses(char* s){
    int slen= strlen(s);
    int i_0;
    if(slen%2==0) i_0=slen;
        else i_0=slen-1;

    for(int i=i_0;i>=2;i=i-2){
        for(int j=0;j<=slen-i+1;j++){
            if(check_the_validity_of(s,j,j+i-1)==1) {
                return i;
            }
        }
    }
    return 0;
}

int main(){
    char str[]="()";
    printf("%d",longestValidParentheses(str));
    
    system("pause");
    return 0;
}