#include<bits/stdc++.h>
using namespace std;
struct node{
    int x;
    char y;
};
bool operator<(node x,node y){
    return x.x>y.x;
}
node a[5];
int checknum(char c){
    if (isdigit(c)) {
        return c-'0';
    }
    if (c=='T') return 10;
    if (c=='J') return 11;
    if (c=='Q') return 12;
    if (c=='K') return 13;
    if (c=='A') return 14;
}
void Main(){
    for (int i=0;i<5;i++){
        char c1,c2;cin>>c1>>c2;
        a[i]={checknum(c1),c2};
    }
    bool suit=1;
    for (int i=0;i<4;i++) if (a[i].y!=a[i+1].y) suit=0; // 鍒ゆ柇鑺辫壊
    int mp[20]={0};
    for (int i=0;i<5;i++) mp[a[i].x]++;
    int dui1=0,dui2=0;
    for (int i=2;i<=14;i++){
        if (dui1==0&&mp[i]>1) dui1=mp[i];
        else if (mp[i]>1) dui2=mp[i]; 
    }
    int shunz=1;
    sort(a,a+5);
    for (int i=0;i<4;i++) if (a[i].x!=a[i+1].x+1) shunz=0;
    if (mp[2]&mp[3]&mp[4]&mp[5]&mp[14]) shunz=1;
    if (mp[10]&mp[11]&mp[12]&mp[13]&mp[14])shunz=2; // 鍒ゆ柇椤哄瓙
    if (suit&&shunz==2) cout<<"Royal flush\n";
    else if (suit&&shunz==1) cout<<"Straight flush\n";
    else if (dui1==4) cout<<"Four of a kind\n";
    else if (dui1+dui2==5) cout<<"Full house\n";
    else if (suit) cout<<"Flush\n";
    else if (shunz) cout<<"Straight\n";
    else if (dui1==3) cout<<"Three of a kind\n";
    else if (dui1==2&&dui2==2) cout<<"Two pairs\n";
    else if (dui1==2) cout<<"Pair\n";
    else cout<<"Highcard\n";
}
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while (T--){
        Main();
    }
}