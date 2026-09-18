/*Write a program to print the following pattern:
5
45
345
2345
12345  */
#include <stdio.h>
int main()
{
    int p=5;
    for (int i=1;i<=5;i++)
    {
        p=5;
        for(int j=1;j<=i;j++)
        {
            printf("%d",p);
            p--;
        }
        printf("\n");
    }
    return 0;
}