#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("The area of the rectangle is %f\n", area);
    printf("The perimeter of the rectangle is %f\n", perimeter);
    return 0;
}