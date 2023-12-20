#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(n-i*(i+1)/2>0) {i++;}
    i-=1;
    int x,y;
    n-=i*(i+1)/2;
    x=i-n+2;
    y=n;
    if((i+1)%2==1){
        printf("%d/%d",x,y);
    }
    else{
        printf("%d/%d",y,x);
    }



    return 0;
}
