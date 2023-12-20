/*
	周思远 23307130063
*/
#include <stdio.h>
#include <math.h>

int main(){
    int tempmax,max=1,a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        tempmax=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                tempmax++;
            }
        }
        if(max<tempmax){
            max=tempmax;
        }
    }

    printf("%d",max);
    return 0;
}
