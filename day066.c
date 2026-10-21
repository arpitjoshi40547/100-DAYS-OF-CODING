//to  find the target by the addition of two random index of the given array 
#include <stdio.h>
void target(int nums[],int n,int target)
{
    // Brute-force check every pair: O(n^2) time complexity
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return; // Exit as soon as the unique solution is found
            }
        }
    }

    // If no solution is found
    printf("-1 -1\n");
    return ;
}
int main()
{
    int k,n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target\n");
    scanf("%d",&k);
    target(arr,n,k);
    return 0;
}