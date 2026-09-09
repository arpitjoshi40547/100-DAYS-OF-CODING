#include <stdio.h>
#include <math.h>

    int main()
    {
        float a, b, c,root1,root2;
        printf("The standard form of a quadratic equation is ax^2 + bx + c = 0\n");
        printf("Enter the values of a, b and c: ");
        scanf("%f %f %f", &a, &b, &c);
        printf("We will calculate the roots of the equation %fx^2 + %fx + %f = 0 using the discriminant\n", a, b, c);
        float Discriminant = (b * b) - (4 * a * c);
        printf("The value of the discriminant is: %f\n", Discriminant);
        if(Discriminant>0)
        {
             root1=(-b+sqrt(Discriminant))/(2*a);
             root2=(-b-sqrt(Discriminant))/(2*a);
            printf("The roots  of the given equation are: %f and %f\n", root1, root2);
        }
        else if (Discriminant==0)
        {
            root1= -b/(2*a);
            printf("The roots of the given equation are equal and they are: %f\n", root1);
        }
        else if(Discriminant<0)
        {
            root1=(-b/(2*a));
            root2=(sqrt(-Discriminant)/(2*a));
            printf("The imaginary roots of the given equation are:%f + %fi and %f - %fi\n", root1, root2, root1, root2);
        }
    }
    
