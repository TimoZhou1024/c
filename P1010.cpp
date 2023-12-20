#include <iostream> 
#include <math.h>
using namespace std;

void breakit(int a){ //break an integar into 2^(),which can be reused
    for (int i=14;i>=0;i=i-1){
        if(pow(2,i)<=a){
            if(i==1){
               cout<<"2";
            }
            else if(i==0){
                cout<<"2(0)";
            }
            else{
                cout<<"2(";
                breakit(i);
                cout<<")";
                
            }
            a-=pow(2,i);
            if(a!=0){
                cout<<"+";
            }
        }
    }

}

int main(){
    int a;
    cin>>a; 
    breakit(a);
    return 0;
}

