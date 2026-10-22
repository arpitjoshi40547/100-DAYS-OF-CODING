//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
void mergedarray(int m , int arr1[], int n , int arr2[] , int merge[] )
{
    int i=0;
    int j=0;
    int k=0;
    while( i<m && j<n )
    {
        if(arr1[i]<=arr2[j])
        {
            merge[k++]=arr1[i++];
        }
        else
        {
            merge[k++]=arr2[j++];
        }
    }
    while(i<m)
    {
        merge[k++]=arr1[i++];
    }
    while(j<n)
    {
        merge[k++]=arr2[j++];
    }
}
int main()
{
    int n;
    printf("Enter the size of the first array:");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements of the array 1\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int m;
    printf("Enter the size of the second array:");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the elements of the array 2\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int z=n+m;
    int merge[z];
    mergedarray(n,arr1,m,arr2,merge);
    printf("The merge array is:\n");
    for(int i=0;i<z;i++)
    {
        printf("%d",merge[i]);
        if(i<z-1)
        printf(",");
    }
    return 0;
}