//to find the largest element in a substring of an array with size k
#include <stdio.h>
void find_largest(int arr[],int size,int k)
{
    if(k>size)
    {
        printf("Substring cannot be created as size of k is larger than n");
        return;
    }
    int new[size-k+1];
    for(int i=0;i<=size-k;i++)
    {
        int z=i+k;
        int max=arr[i];
        for(int j=i+1;j<z;j++)
        {
            if(max<arr[j])
            {
                max=arr[j];
            }
        }
        new[i]=max;
    }
    printf("The elements output array are:\n");
    for(int i=0;i<size-k+1;i++)
    {

        printf("%d",new[i]);
        if(i<size-k)
        printf(",");
    }
    return;
}
int main()
{
    int n;
    int k;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the size of the substring:");
    scanf("%d",&k);
    int arr[n];
    printf("Enter the elements  of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    find_largest(arr,n,k);
    return 0;
}
