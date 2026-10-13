//To print the next greatest elemnt in the given array
#include <stdio.h>
void nextgreatest(int arr[],int len)
{
    int new[len];
    for(int i=1;i<len;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[i]<arr[j])
            {
            new[i]=arr[j];
            break;
            }
            else
            new[i]=-1;
        }
    }
    new[0]=-1;
    for(int i=0;i<len;i++)
    {
        printf("%d,",new[i]);
    }
    return;
}
int main()
{
    int n;
    printf("Enter the no of elements of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    nextgreatest(arr,n);
    return 0;
}