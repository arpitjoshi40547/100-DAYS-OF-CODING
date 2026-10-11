//Finding the number x in an array or a number greater than x and printing the index of the smallest such number is no such number is found print -1
//In case of mutltiples occurance print the first occurance
// Checking for the ceil in the array using binary search as it takes only O(logn)
#include <stdio.h>
int search(int arr[],int len,int target)
{
    int left=0;
    int right=len-1;
    int ceil=-1;
    while(right>=left)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]>=target)
        {
            ceil=mid;
            right=mid-1;
        }
        else
        {
        left=mid+1;
        }
    }
    return ceil;
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
    int target;
    printf("Enter the number u need to search in the array:");
    scanf("%d",&target);
    int output=search(arr,n,target);
    printf("%d",output);
    return 0;
}
