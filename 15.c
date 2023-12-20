#include <stdio.h>
int main(){
    int year,month,day,run;
    run=0;
    scanf("%d %d",&year,&month);
    if (year%100!=0&&year%4==0)
    {
        run=1;
    }
    
    if (year%100==0&&year%400==0)
    {
        run=1;
    }
    
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        day=31;
    }
    else if (month==2)
    {
        if (run==1)
        {
            day=29;
        }
        else
        {
            day=28;
        }
        
    }
    else
    {
        day=30;
    }
    
    printf("%d",day);
    return 0;
}