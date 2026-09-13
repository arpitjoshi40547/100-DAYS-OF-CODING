#include <stdio.h>


int main()
{
    int number,factorail=1;
    printf("Enter the number to calculate the factorial \n");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        factorail=factorail*i;
    }
    printf("The factorail is:%d",factorail);
}