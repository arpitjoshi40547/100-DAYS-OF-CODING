/*Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
   */
#include <stdio.h>
int main()
{
    int n=4;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(j>=n-i+1&&j<=n+i-1&& i <= n)
            printf("*");
            else if(j >= i-n+1 && j <= 3*n-i-1 && i > n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}