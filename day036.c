//Program to HCF of two given number 

#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two number two calculate there hcf\n");
    scanf("%d %d",&num1,&num2);
    int a =num1;
    int b = num2;
    int lcm;
    if(num1==0||num2==0)
    {
    printf("The input is invalid");
    return 0;
    }
    for(int i=1,k=1;i<=a,k<=b;i++,k++)
    {
        if(a%i==0&&b%k==0)
        {
            lcm=i*k;
        }
        
    }
    int hcf=a*b/lcm;
    printf("The hcf of the number %d and %d is:%d" ,num1,num2,hcf);
    return 0;
}