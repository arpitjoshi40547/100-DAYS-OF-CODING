//To find product of all number of an array execpt that position
#include <stdio.h>
void pro(int arr[],int n)
{
    int new[n];
    int left=1;
    for(int i=0;i<n;i++)
    {
        new[i]=left;
        left=left*arr[i];
    }
    int right=1;
    for(int i=n-1;i>=0;i--)
    {   
        new[i]*=right;
        right*=arr[i];
    }
    printf("The new array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",new[i]);
        if(i<n-1)
        printf(",");
    }
    return;
}
int main()
{
    int n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    pro(arr,n);
    return 0;
}