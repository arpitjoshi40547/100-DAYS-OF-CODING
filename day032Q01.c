// Merge two arrays.

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter how many elements u want in array 1\n");
    scanf("%d", &n1);
    printf("Enter how many array u want in array 2\n");
    scanf("%d", &n2);
    printf("Enter the element of the array1:\n");
    int arr2[n2];
    int arr1[n1];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the element of the array2:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int n3 = n1 + n2;
    int merj[n3];
    for (int i = 0; i < n1; i++)
    {
        merj[i] = arr1[i];
    }
    for (int i = n1; i < n3; i++)
    {
        merj[i] = arr2[i-n1];
    }
    printf("The merjed array is:\n");
    for (int i = 0; i < n3; i++)
    {
        printf("%d\n", merj[i]);
    }
    return 0;
}
