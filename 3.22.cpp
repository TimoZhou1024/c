#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main(){
    int n,i,sum;
    cin>>n;
    i=0;
    sum=0;
    while(i*(i+1)/2<n){
        i++;
    }

    for(int j=1;j<=i-1;j++){
        sum+=j*j;
    }
    sum+=i*(n-i*(i-1)/2);
    cout<<sum;
    return 0;
}