#include <stdio.h>

int main()
{
    int Choice, a, b;

    printf("Enter choice\n");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("5: Remainder\n");

    scanf("%d", &Choice);

    switch (Choice)
    {
        case 1:
            printf("Enter 2 numbers that need to be added: ");
            scanf("%d %d", &a, &b);
            printf("Sum of the two numbers is %d", a + b);
            break;

        case 2:
            printf("Enter 2 numbers that need to be subtracted: ");
            scanf("%d %d", &a, &b);
            printf("Difference of the two numbers is %d", a - b);
            break;

        case 3:
            printf("Enter 2 numbers that need to be multiplied: ");
            scanf("%d %d", &a, &b);
            printf("Product of the two numbers is %d", a * b);
            break;

        case 4:
            printf("Enter 2 numbers that need to be divided: ");
            scanf("%d %d", &a, &b);

            if (b != 0)
            {
                printf("Division of the two numbers is %d", a / b);
            }
            else
            {
                printf("Division by zero is not possible");
            }
            break;

        case 5:
            printf("Enter 2 numbers whose remainder needs to be taken: ");
            scanf("%d %d", &a, &b);

            if (b != 0)
            {
                printf("Remainder when %d is divided by %d is %d", a, b, a % b);
            }
            else
            {
                printf("Remainder by zero is not possible");
            }
            break;

        default:
            printf("Wrong choice");
            break;
    }

    return 0;
}