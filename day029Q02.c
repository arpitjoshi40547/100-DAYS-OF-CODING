// Find the maximum and minimum element in an array.

#include <stdio.h>
int main()
{
    int n;
    int arr[n];
    printf("How many elements u want in ur array\n");
    scanf("%d", &n);
    printf("Enter all the numbers of ur array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arrmax = arr[0];
    int arrmin = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arrmax < arr[j])
            arrmax = arr[j];
        else if (arrmin > arr[j])
            arrmin = arr[j];
    }
    printf("The largest element in the array is:%d\n", arrmax);
    printf("The smallest element in the array is:%d\n", arrmin);
    return 0;
}