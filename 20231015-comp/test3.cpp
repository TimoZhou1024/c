#include <bits/stdc++.h>
using namespace std;
long long a[2][3];

int main(){
    //int a[3][4]={{1,3,5,7},{9,11,13,15},{17,19,21,23}}
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        a[0][i]=i+1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=1) a[i][j]=a[i-1][j-1];
            else a[i][j]=a[i-1][n-1];           
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];           
        }
        cout<<"\n";
    }

    return 0;
}