/*
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main()
{
    int n = 1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("*\n");
        }
        printf("\n");
        if(i<3)
            n = n + 2;
        else
            n = n - 2;
    }
    return 0;
}