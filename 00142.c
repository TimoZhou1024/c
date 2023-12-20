/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    int n,a[100]={0},b[100]={0},pointtoa=1,flag,j=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b[0]=a[0];
    while(pointtoa<=n-1){
        flag=0;
        for(int k=0;k<=j-1;k++){
            if(a[pointtoa]==b[k]){
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            b[j]=a[pointtoa];
            pointtoa++;
            j++;
        }
        else pointtoa++;
        
    }
    for(int i=0;i<=j-1;i++){
            printf("%d ",b[i]);
        }
    return 0;
}
