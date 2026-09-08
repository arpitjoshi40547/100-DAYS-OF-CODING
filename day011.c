#include <stdio.h>

int main()
{
    int number;
    printf(" Enter a number ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("The mumber is even");
    }
    else if(number%2==1)
    {
        printf("The number is odd");
    }
    else if(number==0)
    {
        printf("Neither odd nor even");
    }
    return 0;
}