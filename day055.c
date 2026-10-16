//Boyer-Moore Majority Vote Algorithm
//Find the majority element in a array 
//Majority elemnt is which comes more than n/2 number of times mot necessarly with the higest frequecny
#include <stdio.h>
int check(int arr[],int len)
{
    int count=0;
    int mark=arr[0];
    for(int i=1;i<len-1;i++)
    {
        if(arr[i]==mark)
        count++;
        else if(count==0)
        {
        mark=arr[i];
        count=1;
        }
        else
        count--;
    }
    count=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]==mark)
        count++;
    }
    return (count > len/ 2) ? mark : -1;
}
int main()
{
    int n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x=check(arr,n);
    printf("The majority element is the array=%d",x);
    return 0;
}
