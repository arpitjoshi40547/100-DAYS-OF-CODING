#include <stdio.h>

int main()
{
    int side1,side2,side3;
    printf("Enter three side of triangle\n");
    scanf("%d %d %d",&side1,&side2,&side3);
    if((side1+side2)>side3&&(side1+side3)>side2&&(side2+side3)>side1)
    {
        if(side1==side2==side3)
        {
            printf("Equilateral traingle");
        }
        else if(side1==side2||side2==side3||side1==side3)
        {
            printf("Isosceles Triangle");
        }
        else 
        {
            printf("Scalene Trinagle");
        }
    }
    else
    {
        printf("The traingle is not possible");
    }
    return 0;
}