// Delete an element from an array.

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
    int num;
    printf("Enter the number that You need to remove to your array\n");
    scanf("%d", &num);
    int removed=0;
    for (int i = 0; i < n ; i++)
    {
        if (num == arr[i])
        {
            arr[i] = arr[i] ^ arr[i + 1];
            arr[i + 1] = arr[i] ^ arr[i + 1];
            arr[i] = arr[i] ^ arr[i + 1];
            removed=1;
        }
        if(removed)
        n--;
    }
    printf(" The new array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}