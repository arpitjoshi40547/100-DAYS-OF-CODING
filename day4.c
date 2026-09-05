#include <stdio.h>

int main()
{
    float area,perimeter, radius;
    printf("Enter the value of radius\n ");
    scanf("%f",&radius);
    area=radius*radius*3.14159265;
    perimeter=2*radius*3.14159265;
    printf("The area of the circle =%f\n",area);
    printf("The perimeter of the circle =%f\n",perimeter);
}

