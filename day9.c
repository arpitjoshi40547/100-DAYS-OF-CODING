#include <stdio.h>
#include <math.h>

int main()
{
    double interest_simple , interest_compound,principal,interest_rate;
    double time;
    printf("Enter the values of principal interest_rate and time in years\n");
    scanf("%lf %lf %lf",&principal ,&interest_rate ,&time);
    interest_simple=(principal*interest_rate*time)/100.00;
    double m=(1+(interest_rate/100)) ;
    interest_compound=principal*(pow(m,time))-(principal);
    printf("The compound and simple interest are %lf and %lf", interest_compound,interest_simple);
    return 0;

}