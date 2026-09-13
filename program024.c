#include <stdio.h>

int main()
{
    int units,bill;
    printf("Enter the number of units consumed \n");
    scanf("%d",&units);
    if(units<=100)
    {
        bill=units*5;
        printf("Electricty bill is equal to = %d",bill);
    }
    else if(units>100&&units<=200)
    {
        bill=(units-100)*7+500;
        printf("Electricty bill is equal to = %d",bill);
    }
    else if(units>200&&units<=300)
    {
        bill=1200+(units-300)*10;
        printf("Electricity bill is equal to = %d",bill);
    }
    else if(units>300)
    {
        bill=2200+(units-400)*12;
        printf("Electricity bill is equal to = %d",bill);
    }
    return 0;
}