//Make a array which contains all the numbers from 0 to n and find the missing number from the array 
#include <stdio.h>
void find_missing_number(int arr[],int n)
{
    int sum_total=((n)*(n+1))/2;
    int sum_of_array=0;
    for(int i=0;i<n;i++)
    {
        sum_of_array+=arr[i];
    }
    int missing_no=sum_total-sum_of_array;
    printf("The missing number is %d",missing_no);
    return;
}
int main() 
{
    int n;
    printf("Enter the value of n (maximum number in range 0 to n): ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    int arr[n];
    printf("Enter the %d numbers of the array (and include zero):\n", n);
    for (int i = 0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    find_missing_number(arr, n);
    return 0;
}