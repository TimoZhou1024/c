/*
    周思远 23307130063
*/

#include <stdio.h>
#include <string.h>
void order(char*a,int n){
    int i,j;
    char temp;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }

}

void out(char *s,int n){
    int i;
    for(i=0;i<n;i=i+2){
        printf("%c",s[i]);
    }
    if(n%2==0){
        for(i=n-1;i>=0;i=i-2){
            printf("%c",s[i]);
        }
    }
    else{
        for(i=n-2;i>=0;i=i-2){
            printf("%c",s[i]);
        }

    }
}

int main(){
    char a[500],num[500],small[500],big[500],final[500];
    scanf("%s",a);
    int i,len=strlen(a),n=0,s=0,b=0;


    for(i=0;i<len;i++){
        if(a[i]>='0'&&a[i]<='9'){
            num[n]=a[i];
            n++;
            
        }
        
        else if(a[i]>='a'&&a[i]<='z'){
            small[s]=a[i];
            s++;
            
        }
        
        else if(a[i]>='A'&&a[i]<='Z'){
            big[b]=a[i];
            b++;
            
        }
    }
    num[n]=0;
    small[s]=0;
    big[b]=0;

    order(num,n);
    order(small,s);
    order(big,b);

    strcat(num,small);
    strcat(num,big);
    
    out(num,len);


    return 0;
}