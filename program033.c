//Program to check wheather the number is amstrong or not 

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter a number to check if it is amstrong\n");
    scanf("%d",&number);
    int a=number;
    int i =0;
    while(a!=0)
    {
        a=a/10;
        i++;
    }
    int b=number;
    int digit;
    int sum=0;
    while(b!=0)
    {
        digit=b%10;
        sum=pow(digit,i)+sum;
        b=b/10;
    }
    if(sum==number)
    printf("The number %d amstrong",number);
    else
    printf("The number %d is not amstrong",number);
}