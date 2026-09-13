//Program to print all factors of a number
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int a =num;
    if(a==0)
    {
        printf("No of factors are:0");
    }
    printf("The factors of the number %d=",num);
    for(int i =1;i<=a;i++)
    {
        if(a%i==0)
        printf("%d,",i);
    }
    return 0;
}