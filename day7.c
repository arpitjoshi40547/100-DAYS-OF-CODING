#include <stdio.h>


int main()
{
    int a,b;
    printf("Enter the values of a and b\n ");
    scanf("%d %d" ,&a ,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" The values after swaping are %d and %d" ,a ,b);
    return 0;
    
}