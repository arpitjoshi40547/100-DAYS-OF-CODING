//House number problem
#include <stdio.h>
#include <math.h>
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
        printf("The pivot point is %d\n",mid);
        return;
        }
        else if(sum1<sum2)
        left=mid+1;
        else 
        right=mid-1;
    }
    printf("No pivot point found\n");
    return;
}
//With time complexity O(1)
void O_one(double n)
{
    double x=(n*(n+1)/2);
    double pivot=sqrt(x);
    if(pivot==(int)pivot)
    {
        printf("The pivot(with time complexity O(1)) point is:%d\n",(int)pivot);
    }
    else
    {
        printf("No pivot (with time complexity O(1)) point found\n");
    }
    return;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    logn(n);
    O_one(n);
    return 0;
}