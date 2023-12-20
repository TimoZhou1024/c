#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    for(a=1;a<=4;a++){
        for(b=1;b<=4;b++){
            if(a==b) continue;
            for(c=1;c<=4;c++){
                if(c==a||c==b) continue;
                    d=10-a-b-c;
                    if((a==1)!=(b==2)&&(c==1)!=(d==3)&&(d==2)!=(a==3))  printf("%d%d%d%d",a,b,c,d);
                }
            
        }
    }
 
    return 0;
}