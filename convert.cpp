#include <bits/stdc++.h>
using namespace std;

void convert(int input,int type){
    int a[1000],i=0;
    char tempop;
    while(input!=0){
        a[i]=input%type;
        input/=type;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        if(type==16&&a[j]>9){
            tempop=a[j]-10+'A';
            cout<<tempop;
        }
        else cout<<a[j];
    }
}

void convert2dec(int input,int type){
    int output=0,i=0;
    while(input!=0){

        output+=(input%10)*pow(type,i);
        input/=10;
        i++;
        
    }
    cout<<output;

}

int main(){
    int input,type;
    cin>>input>>type;
    convert2dec(input,type);
    return 0;
}