//Program to print the sum of the seris 2/3 +4/7+ 6/11 +........ till n 
#include <stdio.h>
int main()
{
    int number;
    printf("Program to print the sum of the seris 2/3 +4/7+ 6/11 +........ till n \n");
    printf("Enter the value of n\n");
    scanf("%d",&number);
    float sum=0.0;
    for(float i =1.0 ;i<number;i++)
    {
        sum=sum+(float)(i*2.0)/(i*4.0-1.0);
    }
    printf("The sum of the series till n terms is:%f\n",sum);
    return 0;
}