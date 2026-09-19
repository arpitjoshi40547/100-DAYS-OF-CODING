/*
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
int main()
{
    int n=1 ;
    int flag=1;
    for(int i =1;i<=9;i++)
    {
       
        for(int j=1;j<=n;j++)
        {
        printf("*");
        }
        printf("\n");
        flag++;
        if(flag<=5)
        n=n+2;
        else
        n=n-2;
    }
    return 0;
}