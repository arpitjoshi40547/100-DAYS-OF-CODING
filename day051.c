//To input a sorted array and tell the position of a certain number in the array and the time complexity should be O(logn)
#include <stdio.h>
#include <stdbool.h>
//WE ARE GOING TO SEARCH THE FIRST OCCURANCE AND LAST AND THEN PRINT THE LOCATION OF ALL THE OCCRANCE IF THERE ARE  MORE THAN ONE
//Using binary search as it takes O(logn) time complexity.
int lower_bound(int arr[],int len,int target)
//checking first occurance
{
    int left=0;
    int right=len-1;
    int first=-1;
    while(right>=left)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
        first=mid;
        right=mid-1;
        }
        else if(arr[mid]>target)
        right=mid-1;
        else
        left=mid+1;
    }
    return first;
}
int upper_bound(int arr[],int len,int target)
{//checking last occurance
    int left=0;
    int right=len-1;
    int last=-1;
    while(right>=left)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
        last=mid;
        left=mid+1;
        }
        else if(arr[mid]>target)
        right=mid-1;
        else
        left=mid+1;
    }
    return last;
}
//This function will find all the occurance of the array
void findAllLocations(int arr[],int n,int target)
{
    
    int first = lower_bound(arr, n, target);
    if (first == -1) 
    {
        printf("Target %d not found: -1\n", target);
        return;
    }
    int last = upper_bound(arr, n, target);
    int totalCount = (last - first) + 1;
    printf("Target %d found %d time(s) at indices: ", target, totalCount);
    for (int i = first; i <= last; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");
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
    //find the targest and giving appropriate results
    findAllLocations(arr, n, target);
    return 0;
}




