#include <stdio.h>

int main()
{
    float a,b,sum,product,differnce,quitoent;
    printf("Enter the two number\n");
    scanf("%f %f" ,&a,&b);
    sum=a+b;
    product=a*b;
    differnce=a-b;
    printf("The sum of two number is %f\n",sum);
    printf("The product of two number is %f\n",product);
    printf("The differnce of two number is %f\n",differnce);
      if (b == 0.0) 
      {
        printf("Error: Division by zero is not allowed.\n");
    } 
        else 
    {
        quitoent = a / b;
        printf("The quitoent of two number is %f\n",quitoent);
        }
    return 0;

}



