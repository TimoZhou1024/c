#include <stdio.h>
#include <math.h>
#include <iostream>
#define N 3.5
using namespace std;
    int main(){
        
        int a[10]={0};
        for(int k=0;k<=9;k++){
            cin>>a[k];
        }
        int tem;
        for(int i=0;i<=8;i++){
            for(int j=8;j>=i;j--){
                if(a[j]>a[j+1]){
                    tem=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tem;
                }

            }
        }   
        for(int k=0;k<=9;k++){
            cout<<a[k];
        }

    }