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
    if(number==reverse)
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome");
    return 0;
}