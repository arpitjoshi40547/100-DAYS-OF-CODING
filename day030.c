#include <stdio.h>

int main()
{
    int number ;
    printf("Enter a number\n");
    scanf("%d",&number);
    int a =number,reverse=0;
    int b ;
    while(a!=0)
    {
        b=a%10;
        reverse=reverse*10+b;
        a=a/10;
    }
    printf("The reversed number is:%d",reverse);
    return 0;
}