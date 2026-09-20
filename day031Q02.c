// Reverse an array without taking extra space.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements u want in ur array\n");
    scanf("%d", &n);
    int arr[n];
    int temp;
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    for (int j = 0; j <= n / 2; j++)
    {
        temp = arr[j];
        arr[j] = arr[n - j - 1];
        arr[n - j - 1] = temp;
    }
    printf("Reversed Array:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}