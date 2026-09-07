#include <stdio.h>

int main()
{
    int time;
    printf("Enter time in seconds\n");
    scanf("%d",&time);
    int time1=time;
    int hour,minute,seconds;
    hour=time/3600;
    time=time%3600;
    minute=time/60;
    seconds=time%60;
    printf("Hour:Minute:Second=%d:%d:%d",hour,minute,seconds);
    return 0;

}