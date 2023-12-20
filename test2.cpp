#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
        void f1(int a,int b){
            int t;
            t=a;
            a=b;
            b=t;
        }
        void f2(int *a,int *b){
            int t;
            t=*a;
            *a=*b;
            *b=t;
        }
        /*void f3(int **a,int **b){
            int *t;
            *t=*a;
            *a=*b;
            *b=*t;
        }*/


    int main(){
        int a=1,b=2;
        int *apt=&a,*bpt=&b;
        f1(a,b);
        cout<<a<<b;
        a=1;
        b=2;
        f2(&a,&b);
        cout<<a<<b;
        a=1;
        b=2;
        /*f3(&apt,&bpt);
        cout<<a<<b;
        a=1;
        b=2;*/






        return 0;
    }