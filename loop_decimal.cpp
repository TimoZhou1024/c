#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5,flag=0,i; // ends when n
    double mid;
    int a[1000],b[1000],c[1000];
    for (i=1;i<=n;i++){
        mid=1/i;
        a[0]=10;
    }
        for(int j=0;j<=999;j++){
            b[j]=a[j]/i;
            c[j]=a[j]%i;
            a[j+1]=c[j]*10;
            if(c[j]==0) {
                flag=1;
                break;
            }



    }

    return 0;
    }
