//Count positive, negative, and zero elements in an array.


#include <stdio.h>
int main()
{
    int n;
    int arr[n];
    printf("Enter how many elements u want in ur array\n");
    scanf("%d", &n);
    printf("Enter n no of elements in the array\n");
    int n=0;
    int p=0;int z=0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 1; j <= n; j++)
    {
        if (arr[j] > 0)
            p++;
        else(arr[j]<0)
            n++;
        else
            z++
    }
    printf("No of positive numbers in the array are:%d\n",p);
    printf("No of negative numbers in the array are:%d\n",n);
    printf("No of zeros in the array are:%d\n",z);
    return 0;
}