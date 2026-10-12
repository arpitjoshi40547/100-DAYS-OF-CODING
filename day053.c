#include <stdio.h>
int pivot(int arr[],int len)
{
  int i=0;
  int total=0;
  while(i<len)
    {
      total+=arr[i];
      i++;
    }
  if(total==0)
    return 0;
  int left_sum=0;
  for(int i=0;i<len;i++)
    {
      if(left_sum==total-left_sum-arr[i])
        return i;
      left_sum+=arr[i];
    }
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
  int output =pivot(arr,n);
  printf("Pivot point =%d",output);
}