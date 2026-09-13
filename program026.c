#include <stdio.h>


int main()
{
    int n ;
    printf("Enter till where numbers should be printed\n");
    scanf("%d",&n);
    printf("The numbers are:\n");
    for(int i =0;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}