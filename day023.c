#include <stdio.h>
 

int main()
{
    int late_days,fine;
    printf("Enter how late the book was returned\n");
    scanf("%d",&late_days);
    if(late_days<=5)
    {
        fine=late_days*2;
        printf("Fine is equal to = %d\n",fine);
    }
    else if(late_days>5&&late_days<=10)
    {
        fine=(late_days-5)*4+10;
        printf("Fine is equal to = %d\n",fine);
    }
    else if(late_days>10&&late_days<=30)
    {
        fine=(late_days-10)*6+30;
        printf("Fine is equal to = %d\n",fine);
    }
    else
    {
        printf("Membership cancelled\n");
    }
    return 0;
}