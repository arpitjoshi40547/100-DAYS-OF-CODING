//to find the only repeated element in an array using only one iteration
#include <stdio.h>
void find_repeated_element(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int freq[max+1];
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]=0;
        if(freq[arr[i]>0])
        {
        printf("The repeated element is %d",arr[i]);
        return;
        }
        freq[arr[i]]++;
    }
    printf("-1");
    return;
}
int main()
{
    int n;
    printf("Enter the no elements you want in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
find_repeated_element(arr,n);
return 0;
}