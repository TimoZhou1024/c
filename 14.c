#include <stdio.h>
int main(){
    int time,minute,hour;
    scanf("%d",&time);
    minute=time-time/100*100;
    hour=time/100;
    if (hour<8)
    {
        hour=hour+24-8;
    }
    else
    {
        hour=hour-8;
    }
    time=hour*100+minute;
    printf("%d",time);
    return 0;
}