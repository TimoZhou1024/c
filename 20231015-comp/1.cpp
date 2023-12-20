#include <bits/stdc++.h>

using namespace std;

int main(){
    int len,quan1=0,output;
    char rule[1];
    scanf("%s",rule);

    int n=pow(10,6);
    char a[n];
    scanf("%s",a);
    
    len=strlen(a);
    int b[len];
    for(int i=0;i<=len-1;i++){
        b[i]=a[i]-'0';
    }
    for(int j=0;j<=len-1;j++){
        if(b[j]==1){
            quan1++;
        }
    }
    if(rule[0]=='E'){
        if(quan1%2==0) cout<<0;
        if(quan1%2==1) cout<<1;
    }
    if(rule[0]=='O'){
        if(quan1%2==0) cout<<1;
        if(quan1%2==1) cout<<0;
    }
    //fgets(a,n,stdin);

    
    
    

    return 0;
}