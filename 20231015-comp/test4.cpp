#include <bits/stdc++.h>
using namespace std;
long long a[2][3];

int main(){
    int a[3][4]={{1,3,5,7},{9,11,13,15},{17,19,21,23}}
    int i,*ip,(*p)[4];
    p=a+1;
    ip=p[0];

    for(i=1;i<=4;ip+=2,i++)
    printf("%d\t",*ip);
    printf("\n");

    p=a;
    for(i=0;i<2;p++,i++)
    printf("%d\t",*(*(p+i)+1));
    printf("\n");

    return 0;
}