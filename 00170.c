/*
    周思远 23307130063
*/
#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[20];
    float Chinese;
    float Math;

};
int main(){
    int n;
    scanf("%d",&n);
    struct Student *s;
    s=(struct Student*)malloc(sizeof(struct Student)*n);
    for(int i=0;i<n;i++){
        scanf("%s",&((s+i)->name));
        scanf("%f %f",&((s+i)->Chinese),&((s+i)->Math));
    }
    for(int i=0;i<n;i++){
        printf("%s",(s+i)->name);
        printf(" %.2f",(((s+i)->Chinese)+((s+i)->Math))/2);
        printf("\n");
    }
    return 0;
}