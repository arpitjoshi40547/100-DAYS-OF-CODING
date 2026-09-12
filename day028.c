#include <stdio.h>

int main()
{
    int number,product=1;
    printf("Enter the number where products need to be calculated\n");
    scanf("%d",&number);
    for(int i =2 ;i<=number;i=i+2)
    {
        product=product*i;
    }
    printf("The product of all the numbers is:%d",product);
}