#include<stdio.h>
int main(){
	int a[100],b[100],c[100],i,j,k,l,p=0,t,f1,f2,max=0;
	scanf("%d",&a[0]);
	for(i=1;a[i-1]!=-1||i%2!=1;i++) scanf("%d",&a[i]);
	scanf("%d",&b[0]);
	for(j=1;b[j-1]!=-1||j%2!=1;j++) scanf("%d",&b[j]);
    
	for(k=0;k<i-1;k=k+2) if(max<a[k]) max=a[k];
	for(l=0;l<j-1;l=l+2) if(max<b[l]) max=b[l];
	for(;max>=0;max--){
		f1=0;f2=0;
		for(k=0;k<i-1;k=k+2) if(a[k]=max) {
			c[p]=max;
			c[p+1]+=a[k+1];
			f1=1;
		}
		for(l=0;l<j-1;l=l+2) if(b[l]=max) {
			c[p]=max;
			c[p+1]+=b[l+1];
			f2=1;
		}
		if(f1||f2) p=p+2;
	}
	if(c[1]=1&&c[0]!=0) printf("x^%d",c[0]);
	else if(c[1]=-1&&c[0]!=0) printf("-x^%d",c[0]);
	else if(c[0]==0) printf("%d",c[1]);
	else printf("%dx^%d",c[1],c[0]);
	for(t=2;t<=p-2;t=t+2){
		if(c[t]!=0){	
			if(c[t+1]>0){
				if(c[t+1]==1) printf("+x^%d",c[t]);
				else printf("+%dx^%d",c[t+1],c[t]);
			}
			if(c[t+1]<0){
				if(c[t+1]==-1) printf("-x^%d",c[t]);
				else printf("%dx^%d",c[t+1],c[t]);
			}
		}
		else{
			if(c[t+1]>0) printf("+%d",c[t+1]);
			if(c[t+1]<0) printf("%d",c[t+1]);
		}
	}
return 0;
}