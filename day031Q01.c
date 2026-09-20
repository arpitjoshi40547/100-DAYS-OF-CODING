// Search for an element in an array using linear search.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements u want in ur array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    int ele;
    int found = 0;
    printf("Enter the elements that u wnat to search in ur array:\n");
    scanf("%d", &ele);
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == ele)
        {
            printf("Element found:%d\nThe position of the element is:%d\n", arr[j], j + 1);
            found = 1;
        }
    }
    if (found == 0)
        printf("Element not found ");
    return 0;
}