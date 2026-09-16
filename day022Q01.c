//Program to check for a strong number 

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to check wheather it is strong number or not\n");
    scanf("%d",&number);
    int temp=number;
    int dig,sum=0;
    while(temp!=0)
    {
        int fac=1;
        dig=temp%10;
        for(int i =1;i<=dig;i++)
        {
        fac=fac*i;
        }
        sum=sum+fac;
        temp=temp/10;
    }
    if(sum==number)
    printf("The number is strong number");
    else
    printf("The number is not a stong number");
    return 0;
}