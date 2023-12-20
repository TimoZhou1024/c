#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

bool compare(const string a,const string b){
    return(a+b>b+a);
}
int main(){
    int n;
    string s[21];
    cin>>n;
    for (int i=0;i<=n-1;i++) cin>>s[i];
    sort(s,s+n,compare);
    for (int i=0;i<=n-1;i++) cout<<s[i];

    return 0;
}