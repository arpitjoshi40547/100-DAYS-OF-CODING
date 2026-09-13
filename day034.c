//Program to check wheater the number is prime or not 


#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number to check wheater the number is prime of not\n");
    scanf("%d",&number);
    int a=number;
    if(a==0||a==1)
    {
    printf("Invalid input the number neither prime nor consonent");
    return 0;
    }
    int flag=0;
    for(int i =1;i<=a;i++)
    {
        if(a%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
    printf("The number is prime");
    else
    printf("The number is not prime");
    return 0;
}