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
				printf("����%dֻ��ĸ��%dֻ��С��%dֻ\n",x,y,3*z);
				answer=1;
			}
			
		}
	}
	if (answer==0)
	{
		printf("�޷��պ���%d��Ǯ��%dֻ����",s,n);
	}
	
	return 0;
}
