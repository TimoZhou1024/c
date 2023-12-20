#include <bits/stdc++.h>

using namespace std;

int diffnum(char a[5]){
    char b[5];
    int pointtob=1,flag;
    b[0]=a[0];
    for(int i=1;i<5;i++){
        flag=1;
        for(int j=0;j<=pointtob-1;j++){
            if(a[i]==b[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            b[pointtob]=a[i];
            pointtob++;
        }
    }
    return pointtob;
}

int main(){
    char a[]={'1','2','3','3','3'};
    cout<<diffnum(a);

    return 0;
}