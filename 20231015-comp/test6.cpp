#include <bits/stdc++.h>
using namespace std;

struct human{
        int age;
        int weight;
        char name[20];

    };

void times(int *mp){
    *mp=*mp * *mp;
}

void sum(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(a+1);
    }
    cout<<sum;
}

int main(){
    int i=2;
    do{
        printf("%d",i);
        i++;
    }while(i<2);
    

    return 0;
}