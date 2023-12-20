#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char X,Y,str[1024];    
    gets(str);
    /*scanf("%s",str);*/
    printf("hello");
    scanf("%c%c",&X,&Y);
    for(i=0;str[i]!='\0';i++)
        if (str[i]==X)
        {
            str[i]=Y;/* code */
        }
        
    puts(str);
    
    return 0;

}


