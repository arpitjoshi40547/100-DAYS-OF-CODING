// Count even and odd numbers in an array.

#include <stdio.h>
int main()
{
    int n;
    int arr[n];
    printf("Enter how many elements u want in ur array\n");
    scanf("%d", &n);
    printf("Enter n no of elements in the array\n");
    int odd=0;
    int even=0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 1; j <= n; j++)
    {
        if (arr[j] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("No of even numbers in the array are:%d\n",even);
    printf("No of odd numbers in the array are:%d\n",odd);
    return 0;
}