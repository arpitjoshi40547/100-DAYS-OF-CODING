//Program to swap first and last digit of a number



#include <stdio.h>
#include <math.h>


int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    int last_dig;
    int first_dig;
    last_dig=number%10;
    int temp=number;
    int temp2=number;
    int num2=0;
    while(temp!=0)
    {
        first_dig=temp%10;
        temp=temp/10;
    }
    int count=number;
    int flag=0;
    while(count!=0)
    {
        count=count/10;
        flag++;
    }
    int d = (int)pow(10, (flag-1));
    num2=temp2%d;
    num2=num2+(last_dig*(d));
    num2=num2/10;
    num2=num2*10+first_dig;
    printf("The last digit is :%d\n",last_dig);
    printf("The first digit is:%d\n",first_dig);
    printf("The originial number:%d and the new number is:%d\n",number,num2);
    return 0;
}

