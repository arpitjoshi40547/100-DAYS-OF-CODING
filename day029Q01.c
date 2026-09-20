// Find the sum of array elements.

#include <stdio.h>
int main()
{
    int arr[10];
    int sum = 0;
    printf("Enter 10 number for the array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        sum = sum + arr[j];
    }
    printf("The sum of all the elements of the array:%d", sum);
    return 0;
}