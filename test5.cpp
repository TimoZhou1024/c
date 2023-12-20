#include<stdio.h>
int main(){
	int input,left,right,mid,ans;
    scanf("%d",&input);
    left=0;
    right=input;
    while(left<=right){
        mid=(left+right)/2;
        if(mid*mid<=input){
            ans=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    printf("%d",ans);
	return 0;
} 
