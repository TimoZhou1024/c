#include <bits/stdc++.h>

using namespace std;
int is_match(char a[5],char b1,char b2,char b3,char b4,char b5){//a stands for the original sequence; b to examine
    int flag=0,fflag=1;

    for(int j=0;j<5;j++){
        if(b1==a[j]) flag=1;
    }
    if(flag==0) fflag=0;
    flag=0;
    for(int j=0;j<5;j++){
        if(b2==a[j]) flag=1;
    }
    if(flag==0) fflag=0;
    flag=0;
    for(int j=0;j<5;j++){
        if(b3==a[j]) flag=1;
    }
    if(flag==0) fflag=0;
    flag=0;
    for(int j=0;j<5;j++){
        if(b4==a[j]) flag=1;
    }
    if(flag==0) fflag=0;
    flag=0;
    for(int j=0;j<5;j++){
        if(b5==a[j]) flag=1;
    }
    if(flag==0) fflag=0;
    
    if(fflag==0) return 0;
    else return 1;//match success!

}

int countr(char a[5]){
    int n=1,temp=1;
    for(int i=0;i<4;i++){
        temp=1;
        for (int j=i+1;j<5;j++){
            if(a[i]==a[j]){
                temp++;
            }
        }
        if(n<temp) n=temp;
    }

    return n;
}

int diffnum(char a[5]){
    char b[5];
    int pointtob=1,flag;
    b[0]=a[0];
    for(int i=1;i<5;i++){
        flag=1;
        for(int j=0;j<=pointtob-1;j++){
            if(a[i]==b[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            b[pointtob]=a[i];
            pointtob++;
        }
    }
    return pointtob;
}

int main(){
    int t;
    cin>>t;
    char a[t][5][2];
    

    for(int i=0;i<=t-1;i++){
        for(int j=0;j<=4;j++){
            scanf("%s",a[i][j]);
        }
    }

    for(int i=0;i<=t-1;i++){
        char tempr[5];
        for(int j=0;j<5;j++){
            tempr[j]=a[i][j][0];
            
        }
        if(a[i][0][1]==a[i][1][1]&&a[i][0][1]==a[i][2][1]&&a[i][0][1]==a[i][3][1]&&a[i][0][1]==a[i][4][1]&&is_match(tempr,'A','K','Q','J','T')) cout<<"Royal flush"<<endl;
        else{
            if(a[i][0][1]==a[i][1][1]&&a[i][0][1]==a[i][2][1]&&a[i][0][1]==a[i][3][1]&&a[i][0][1]==a[i][4][1]&&(is_match(tempr,'A','K','Q','J','T')||is_match(tempr,'9','K','Q','J','T')||is_match(tempr,'9','8','Q','J','T')||is_match(tempr,'9','8','7','J','T')||is_match(tempr,'9','8','7','6','T')||is_match(tempr,'9','8','7','6','5')||is_match(tempr,'4','8','7','6','5')||is_match(tempr,'4','3','7','6','5')||is_match(tempr,'4','3','2','6','5')||is_match(tempr,'4','3','2','A','5'))) cout<<"Straight flush"<<endl;
            
        else{
                if((countr(tempr))==4) cout<<"Four of a kind"<<endl;
                else{
                    if (countr(tempr)==3&&diffnum(tempr)==2) cout<<"Full horse"<<endl;
                    else{
                        if(a[i][0][1]==a[i][1][1]&&a[i][0][1]==a[i][2][1]&&a[i][0][1]==a[i][3][1]&&a[i][0][1]==a[i][4][1]) cout<<"Flush"<<endl;
                        else{
                            if(is_match(tempr,'A','K','Q','J','T')||is_match(tempr,'9','K','Q','J','T')||is_match(tempr,'9','8','Q','J','T')||is_match(tempr,'9','8','7','J','T')||is_match(tempr,'9','8','7','6','T')||is_match(tempr,'9','8','7','6','5')||is_match(tempr,'4','8','7','6','5')||is_match(tempr,'4','3','7','6','5')||is_match(tempr,'4','3','2','6','5')||is_match(tempr,'4','3','2','A','5')) cout<<"Straight"<<endl;
                            else{
                                if(countr(tempr)==3) cout<<"Three of a kind"<<endl;
                                else{
                                    if(countr(tempr)==2&&diffnum(tempr)==3) cout<<"Two Pairs"<<endl;
                                    else{
                                        if(diffnum(tempr)==4) cout<<"Pair"<<endl;
                                        else cout<<"Highcard"<<endl;
                                    }
                                }
                            }
                        }
                    }         
                    }
            }
        


        }}
    return 0;        
    }
    
    
