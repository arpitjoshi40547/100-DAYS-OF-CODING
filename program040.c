//Program to find 1s compliment of a binary number

#include <stdio.h>

int main()
{
    int bin;
    printf("Enter a binary number\n");
    scanf("%d",&bin);
    int a=bin;
    int dig;
    int count=0;
    while(a!=0)
    {
        dig=a%10;
        if(dig!=0&&dig!=1)
        {
            printf("The number is not binary");
            return 0;
        }
        count++;
        a=a/10;
    }
    int c =bin;
    int bin2=0;
    int place=1;
    while(c!=0)
    {
        dig=c%10;
        if(dig==0)
        {
        bin2=bin2+1*place;
        place=place*10;
        }
        else if(dig==1)
        {
        bin2=bin2+0*place;
        place=place*10;
        }
        c=c/10;
        }
        int temp=bin2;
        int  count2=0;
        while(temp!=0)
        {
            count2++;
            temp/=10;
        }
        int extra_zero=count-count2;
        printf("The 1s compliment for %d is:",bin);
        for(int i = 0; i < extra_zero; i++) 
        {
            printf("0");
        }
            printf("%d\n", bin2);
        return 0;
    }
