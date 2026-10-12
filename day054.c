//House number problem
#include <stdio.h>
//O(logn) complexity
void logn(int n)
{
    int i=1;
    int right=n;
    int left=1;
    int totalsum=(n*(n+1)/2);
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        int sum1=mid*(mid-1)/2;
        int sum2 = totalsum - (mid * (mid + 1) / 2);
        if(sum1==sum2)
        {
        printf("The pivot point is %d",mid);
        break;
        }
        else if(sum1<sum2)
        left=mid+1;
        else 
        right=mid-1;
    }
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    logn(n);
    return 0;
}