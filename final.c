#include <stdio.h>

int x = 10; // 外部变量

void func() {
    int y = 20; // 自动变量
    static int z = 30; // 静态变量
    register int w = 40; // 寄存器变量
    printf("y = %d, z = %d, w = %d\n", y, z, w);
    y++;
    z++;
    w++;
}

int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);

}
#include <stdio.h>

void print_partitions(int n, int max, char *prefix) {
    if (n == 0) {
        printf("%s\n", prefix);
        return;
    }

    for (int i = 1; i <= max; i++) {
        char new_prefix[50];
        sprintf(new_prefix, "%s%d ", prefix, i);
        print_partitions(n - i, i, new_prefix);
    }
}

void swap(int *a,int *b){
    int *temp;
    temp=a;
    a=b;
    b=temp;
}
struct st{
    int x;
    unsigned a:2;
    unsigned b:2;
};


int main() {
    int i=2,j=3,*p=&i,*q=&j;
    swap(p,q);
    int a=5;
    int x=3,y=2,z;

    if(x=(y==3)){
        printf("1");
    }
    else{
        printf("0");
    }
    
    
}