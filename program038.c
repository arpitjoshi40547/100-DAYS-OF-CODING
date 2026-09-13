//Program to find out sum of digits of a number


#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n ");
    scanf("%d",&num);
    int a =num;
    int digit,sum=0;
    while(a!=0)
    {
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    printf("The sum of the digits of %d is:%d",num,sum);
    return 0;
}