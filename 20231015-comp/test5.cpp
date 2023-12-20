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
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    /*int *b[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<b[i];
    }
    int m=2;
    int *mp;
    mp=&m;
    cout<<m<<endl;
    cout<<&m<<endl;
    times(&m);
    cout<<m<<endl;
    cout<<&m<<endl;
    
    sum(a,3);
    sum(&a[2],3);
    */
    int *b;
    b=(int*)malloc(0*sizeof(int));
    b[1]=2;
    printf("%d",b[1]);

    /*human.name=(int*)malloc(20*sizeof(char));*/
    human aim[3]={{10,24,"Mike"},{10,24,"Alice"},{10,24,"Bob"}};
    human *aimpt=aim;
    printf("%s",aimpt->name);
    cout<<aimpt->name;

    

    return 0;
}