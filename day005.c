#include <stdio.h>

int main()
{
    float celcius,farhenheit;
    printf("Enter the temperature in celcius\n");
    scanf("%f" ,&celcius);
    farhenheit=(celcius*1.8)+32;
    printf("The temperature in farhenheit = %f",farhenheit);
    return 0;
}