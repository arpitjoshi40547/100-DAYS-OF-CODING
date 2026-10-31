//To find the avg and sum of all numbers in the file
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *numbers = fopen("number.txt","r");
    if(numbers == NULL)
    {
        perror("Error opening the file");
        return 1;
    }
    int num;
    int sum = 0;
    int count = 0;
    while (fscanf(numbers, "%d", &num) == 1) 
    {
        sum += num;
        count++;
    }
    fclose(numbers);

    if (count > 0) 
    {
        double average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else 
    {
        printf("The file is empty or contains no valid integers.\n");
    }
    return 0;
}
