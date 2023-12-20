/*
    周思远 23307130063
*/

#include <stdio.h>
#include <math.h>

int isbal(int n){
    int flag=1;
    int a[10]={0};
    int temp;
    int i=0;
    while(pow(10,i)<=n){
        i++;
    }
    for(;i>0;i--){
        temp=n%10;
        n=n/10;
        a[temp]++;
    }
    if(a[0]!=0){
        return 0;
    }
    for(i=1;i<10;i++){
        if(a[i]!=0&&a[i]!=i){
            flag=0;
        }
    }
    if(flag==1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int m,n;
    scanf("%d",&m);
    for(n=m+1;;n++){
        if(isbal(n)==1){
            printf("%d",n);
            return 0;
        }
    }
    


    
}