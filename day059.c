//To find the maximum sum in all the subarrys of size k
#include <stdio.h>
void find(int arr[],int n,int k)
{
    if(k>n)
    {
        printf("Sub string cannot be takken as the size of the array is smaller than k");
        return;
    }
    int sum=0;
    int maxsum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    maxsum=sum;
    for(int i=k;i<n;i++)
    {
        sum=sum+arr[i]-arr[i-k];
        if(maxsum<sum)
        maxsum=sum;
    }
    printf("The maximum sum of a substring of size k is %d",maxsum);
    return;
}
int main()
{
    int n;
    int k;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the substring size:");
    scanf("%d",&k);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    find(arr,n,k);
    return 0;
}