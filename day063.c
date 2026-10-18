//to find the kth smallest element in a given array
#include <stdio.h>
void smallest(int arr[],int n,int k)
{ 
    if(k<=n)
    {
        for(int i=0;i<k;i++)
        {
            int min_idx=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min_idx])
                {
                    min_idx=j;
                }

            }
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
        printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);
    } 
    else 
    {
        printf("Invalid value of k!\n");
    }
    return;
}
int main()
{
    int n;
    int k;
    printf("Enter The size of the array:");
    scanf("%d",&n);
    printf("Enter the number of smallest element u need to find:");
    scanf("%d",&k);
    int arr[n];
    printf("Enter the element of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    smallest(arr,n,k);
    return 0;
}
    
