#include <bits/stdc++.h>
using namespace std;

void deleteit(char *a,int pos){
    for(int i=pos;i<strlen(a);i++){
        a[i]=a[i+1];
    }
}

int main(){
    char a[1000];
    fgets(a,1000,stdin);
    for(int j=0;j<strlen(a); ){
        if(a[j]==' '){
            deleteit(a,j);
        }
        else break;
    }
    for(int j=strlen(a)-2; ;j--){
        if(a[j]==' '){
            deleteit(a,j);
        }
        else break;
    }

    for(int j=1;j<strlen(a); ){
        if(a[j]==' '&&a[j+1]==' ') deleteit(a,j+1);
        else j++;
    }

    for(int i=0;i<strlen(a);i++){
        cout<<a[i];
    }



    return 0;
}