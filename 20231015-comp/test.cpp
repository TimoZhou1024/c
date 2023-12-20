#include <bits/stdc++.h>

using namespace std;
bool is_match(char a[5],char b[5]){
    int flag1=1,flag2=1;
    for (int i=0;i<5;i++){
        if(a[i]=='0'){
            flag1=0;
        }
        
    }
    for (int i=0;i<5;i++){
        if(b[i]=='0'){
            flag2=0;
        }
        
    }
    if (flag1==0&&flag2==0) return 0;
    else return 1;
}
int main(){
    int x,y;
    x=1;
    printf("%d\n",x);
    printf("%d\n",1||(x=x+10));
    printf("%d\n",x);


    return 0;
}