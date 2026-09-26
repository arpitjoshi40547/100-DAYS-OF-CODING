// Enter a element into approiate postion  in a sorted array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of a array\n");
    scanf("%d", &n);
    int arr[n + 1];
    printf("The elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Sorting of the array
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    //Inserting a number
    int num;
    printf("Enter the number that need to be inserted\n");
    scanf("%d",&num);
    int i = n - 1;
    while (i >= 0 && arr[i] > num)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;
    printf("The new array is:\n");
    for(int i=0;i<n+1;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}