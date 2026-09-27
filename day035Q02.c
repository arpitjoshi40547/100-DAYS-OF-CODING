//Rotate an array to the right by k positions.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of a array\n");
    scanf("%d", &n);
    int arr[n];
    printf("The elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter why how much u need to shift the array\n");
    scanf("%d",&k);

    // Handle k larger than n
    k = k % n;

    // Step 1: Reverse entire array
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    // Step 2: Reverse first k elements
    for (int i = 0, j = k - 1; i < j; i++, j--)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    // Step 3: Reverse remaining elements
    for (int i = k, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    printf("The rottated array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}