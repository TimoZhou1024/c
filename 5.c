# include<stdio.h>
int main(){
	int n,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=2;i*i<=n;i=i+1){
		if (n%i==0)
			break;
	}
	if (i*i>=n)
		printf("zhishu");
	else
		printf("heshu");
	return 0; 
} 
