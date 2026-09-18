/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
    */
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5;k++)
        {
            if(k<i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
}