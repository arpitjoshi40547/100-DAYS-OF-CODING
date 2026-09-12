#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int div = 1;
    int a = num;
    while(div <= a / 2)
    {
        div = div * 2;
    }
    int b, binary = 0;
    while(div != 0)
    {
        b = a / div;
        binary = binary * 10 + b;

        a = a % div;
        div = div / 2;
    }
    printf("The binary equivalent of the number is: %d", binary);
    return 0;
}