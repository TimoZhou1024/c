#include<stdio.h>
#include<string.h>
    char tc[510],td[510];
	char a[510],b[510],c[510];
int main(){
	
	//tc td是临时存的字符数组 
	int cc,dd,i,temp,carry=0,max;
	fgets(tc,510,stdin);
	fgets(td,510,stdin);
	cc=strlen(tc);
	a[0]=cc-1;
	dd=strlen(td);
	b[0]=dd-1;
	for (i=1;cc>=2;cc--,i++){
		a[i]=tc[cc-2];
	}
	for (i=1;dd>=2;dd--,i++){
		b[i]=td[dd-2];
	}
	//将大整数逆序存进int a[] b[]中，[0]位置为长度
	//关于为什么cc-2我也不知道，试了一下发现要-2 
    
	max=a[0]>b[0]?a[0]:b[0]; 
    for (int k=0;k<=max;k++){
        if(a[k]==0){
            a[k]='0';
        }
        if(b[k]==0){
            b[k]='0';
        }
    }
	for (i=1;i<=max;i++){
		temp=a[i]-'0'+b[i]-'0'+carry;
		c[i]=temp%10+'0';
		carry=temp/10;
	}
	if (carry!=0)
		c[i]=carry+'0',c[0]=i;
	else
		c[0]=i-1;
	for (i=c[0];i>=1;i--) 
		printf("%c",c[i]);
	return 0;
}
