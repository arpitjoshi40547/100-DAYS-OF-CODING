/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/
#include <stdio.h>
int main()
{
    int p=5;
    for(int i=5;i>=1;i--)
    {
        p=5;
        for(int k=1;k<=5;k++)
        {
            if(k<i)
            printf(" ");
            else
            {
            printf("%d",p);
            p--;
            }
            
        }
        printf("\n");
    }
    return 0;
}