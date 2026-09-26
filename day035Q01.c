//Find the second largest element in an array.

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
    int larg1=arr[0];
    int larg2=-1;
    for(int i=0;i<n;i++)
    {
        if(larg1<arr[i])
        {
            larg2=larg1;
            larg1=arr[i];
        }
        else if(arr[i]>larg2&&arr[i]!=larg1)
        {
            larg2=arr[i];
        }
    }
    printf("%d %d", larg1, larg2);
    return 0;
}