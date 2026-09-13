#include <stdio.h>

int main()
{
    int number,sum=0;
    printf("Enter till where sum need to be calculated\n");
    scanf("%d",&number);
    for(int i =1 ;i<=number;i=i+2)
    {
        sum=sum+i;
    }
    printf("The sum of number is = %d",sum);
    return 0;
}