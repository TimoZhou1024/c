#include<stdio.h>
int main(){
	int a[1024]={0},b[1024]={0},max,l=0,n,i,j=0,k;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		if(a[i+1]==a[i]){
			l+=1;
			b[j]=l;
			j++;
		}
		if(a[i+1]!=a[i]){
			l=0;
		}
	}
	max=b[0];
	for(k=0;k<=n-1;k++){
		if(b[k]>max){
			max=b[k];
		}
	}
	if(max==0){
		printf("0");
	} 
	else printf("%d",max+1);
}
