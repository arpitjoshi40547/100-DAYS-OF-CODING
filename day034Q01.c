//Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of a array\n");
    scanf("%d", &n);
    int arr[n + 1];
    printf("The elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    int pos;
    printf("Enter the number that You need to add to your array\n");
    scanf("%d",&num);
    printf("Enter the postion in which u need to insert the array\n");
    scanf("%d",&pos);
    for(int i=0;i<n+1;i++)
    {
        if(i==n+1)
        break;
        if(i==pos-1)
        {
            num=arr[i]+num;
            arr[i]=num-arr[i];
            num=num-arr[i];
            pos++;

        }
    }
    printf(" The new array is:\n");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d\n",arr[i]);
    }
}

