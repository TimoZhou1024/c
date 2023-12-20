#include <stdio.h>
#include <math.h>

void breakit(int a){ //break an integar into 2^(),which can be reused
    for (int i=14;i>=0;i=i-1){
        if(pow(2,i)<=a){
            if(i==1){
                printf("2");
            }
            else if(i==0){
                printf("2(0)");
            }
            else{
                printf("2(");
                breakit(i);
                printf(")");
                
            }
            a-=pow(2,i);
            if(a!=0){
                printf("+");
            }
        }
    }

}

int main(){
    int a;
    scanf("%d",&a);
    breakit(a);
    return 0;
}

