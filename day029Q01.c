//Find the sum of array elements.

#include <stdio.h>
int main()
{
    int arr[10];
    int sum=0;
    printf("Enter 10 number for the array\n");
    for(int i=1;i<=11;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<=11;j++)
    {
        sum=sum+arr[j];
    }
    printf("The sum of all the elements of the array:%d",sum);
    return 0;

}