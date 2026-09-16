//Program to print the sum of series of 1 + 3/4 +5/6 + 7/8  till nthh term

#include <stdio.h>
 
int main()
{
    int n;
    printf("Print till where u need the sum of the series 1 + 3/4 +5/6 + 6/7 ............\n");
    scanf("%d",&n);
    float sum=0;
    for(int i =1;i<=n;i++)
    {
        if(i==1)
            sum+=1.0;
        else
            sum+=(float)(2*i-1)/(2*i);  
    }

    printf("The sum of the series is: %f", sum);
    return 0;
}  
