#include<stdio.h>

int main(){
	int a[100]={0},b[100]={0},c[100]={0},i,m,n,j;
	int count=0;
	for(i=0;i<=99;i++){
		scanf("%d",&m);
		if(m==-1){
			break;
		}
		else scanf("%d",&a[m+1]);	
	}
	for(i=0;i<=99;i++){
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		scanf("%d",&b[n+1]);
	}
	for(i=1;i<=99;i++){
		c[i]=a[i]+b[i];
	}
	for(j=99;j>=0;j--){
		if(count!=0){
			if(c[j]!=0){
				if(j-1==0){
					printf("%d",c[j]);
				}
				else if(c[j]==1){
					printf("+x^%d",j-1);
				}
				else if(c[j]==-1){
					printf("-x^%d",j-1);
				}
				else if(c[j]>0){
					printf("+%dx^%d",c[j],j-1);
				}
				else printf("%dx^%d",c[j],j-1);
			}
		}
		
		
		
		if(count==0){
			if(c[j]!=0){
				if(j-1==0){
					printf("%d",c[j]);
					count++;
				}
				else if(c[j]==1){
					printf("x^%d",j-1);
					count++;
				}
				else if(c[j]==-1){
					printf("-x^%d",j-1);
					count++;
				}
				
				else {
					printf("%dx^%d",c[j],j-1);
					count++;
				}
				

			}
			if(c[j]==0&&j-1==0){
				printf("0");
			}

		}
		

	}
	return 0;
}