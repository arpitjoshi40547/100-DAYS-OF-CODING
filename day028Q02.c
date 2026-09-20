// Read and print elements of a one-dimensional array.

#include <stdio.h>
int main()
{
    int n;
    int arr[n];
    printf("Enter how many number need to be in the array\n");
    scanf("%d", &n);
    printf("Enter the numbers of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Array elements:");
    for (int j = 0; j < n; j++)
        printf("%d,", arr[j]);
    return 0;
}