#include <stdio.h>
int main(){
	int x,y,z,n,s,answer;
	answer=0;
	scanf("%d %d",&n,&s);
	for(x=0;x<=n;x++){
		for(y=0;y<=n;y++){
			z=s-5*x-3*y;
			if (z>=0&&x+y+3*z==n)
			{
				printf("公鸡%d只；母鸡%d只；小鸡%d只\n",x,y,3*z);
				answer=1;
			}
			
		}
	}
	if (answer==0)
	{
		printf("无法刚好用%d文钱买%d只鸡！",s,n);
	}
	
	return 0;
}
