#include <stdio.h>
#include <string.h>
char a[501],b[501],c[501],d[501],f[501];
int main ()
{
    int carry,i,t,lena,lenb;
    
    scanf("%s",&a);
    scanf("%s",&b);
    lena=strlen(a);
    lenb=strlen(b);
    for(i=0;i<lena;i++){
        d[i]=a[lena-i-1];
    }
    for(i=0;i<lenb;i++){
        f[i]=b[lenb-i-1];
    }
    for(i=0,carry=0;i<lena&&i<lenb;i++){
        t=d[i]-'0'+f[i]-'0'+carry;
        c[i]=t%10+'0';
        carry=t/10;
    }

    if(lenb>=lena){
        for( ;i<lenb;i++){
            t=f[i]-'0'+carry;
            c[i]=t%10+'0';
            carry=t/10;
        }
    }
    else{
        for( ;i<lena;i++){
            t=d[i]-'0'+carry;
            c[i]=t%10+'0';
            carry=t/10;
        }
    }

    if(carry!=0){
        c[i]=carry+'0';
    }

    if(c[i]!=0){
        for( ;i>=0;i--){
            printf("%c",c[i]);
        }
    }

    if(c[i]==0){
        i=i-1;
        for( ;i>=0;i--){
            printf("%c",c[i]);
        }
    }
    return 0;
}