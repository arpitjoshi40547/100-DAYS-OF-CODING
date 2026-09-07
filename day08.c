#include <stdio.h>
 int main()
 {
    int sum=0;
    int n ;
    printf("Enter the value of n to print the sum of nautral numbers till  n  ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of n natural number are %d",sum);
    return 0;

 }