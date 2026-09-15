//Program to check for perfect number 


#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to check if it is perfect number or not\n");
    scanf("%d",&number);
    int sum=0;
    for(int i=1;i<=number/2;i++)
    {
        if(number%i==0)
        sum=sum+i;
    }
    if(sum==number)
    printf("The number is perfect number");
    else 
    printf("The number is not a perfect number");
    return 0;
}
