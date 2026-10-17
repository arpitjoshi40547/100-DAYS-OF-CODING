//to find maximum sum in a subarray in the given array using Maximum Subarray Sum - Kadane's Algorithm
#include <stdio.h>
int findmaxsum(int arr[],int n)
{
    int sum=arr[0];
    int maxsum=arr[0];
    for(int i =1;i<n;i++)
    {
        if(sum+arr[i]<arr[i])
        {
            sum=arr[i];
        }
        else
        {
            sum=arr[i]+sum;
        }
        if(sum>maxsum)
        {
            maxsum=sum;
        }
    }
    return maxsum;
}
int main()
{
    int n;
    printf("[-----Enter the size of  the array-----]\n");
    scanf("%d",&n);
    int arr[n];
    printf("[-----Enter the elements of the array--]\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result = findmaxsum(arr, n);
    printf("The maximum contiguous subarray sum is: %d\n", result);
    return 0;
}