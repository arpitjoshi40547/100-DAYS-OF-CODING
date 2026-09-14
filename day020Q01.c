//Program to find sum of odd digits


#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int a =num;
    int digit,sum=0;
    while(a!=0)
    {
        digit=a%10;
        if(digit%2==1)
        {
            sum=sum+digit;
        }
        a=a/10;
    }
    printf("The sum of odd digits of %d is:%d",num,sum);
    return 0;

}