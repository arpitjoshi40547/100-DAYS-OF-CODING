//To input a sorted array and tell the position of a certain number in the array and the time complexity should be O(logn)
#include <stdio.h>
#include <stdbool.h>
//Using a function to sort the array in case the array is not sorted.
void sorting(int arr[],int len)
{
    //using inserstion sort
    //O(N) at best and at worst O(n^2)
    int i,j;
    int key;
    for(i=0;i<len-1;i++)
    {
        int key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
//WE ARE GOING TO SEARCH THE FIRST OCCURANCE AND LAST AND THEN PRINT THE LOCATION OF ALL THE OCCRANCE IF THERE ARE  MORE THAN ONE
//Using binary search as it takes O(logn) time complexity
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
    //Part of the program where i check the given array is sorted or not if not then sort the array
    int i=0;
    bool issorted=true;
    while(i<n-1)
    {
        if(arr[i]>arr[i+1])
        {
        issorted=false;
        break;
        }
        i++;
    }
    if(!issorted)
    sorting(arr,n);

    int target;
    printf("Enter the number u need to search in the array:");
    scanf("%d",&target);
    //find the targest and giving appropriate results
    findAllLocations(arr, n, target);
    return 0;
}




