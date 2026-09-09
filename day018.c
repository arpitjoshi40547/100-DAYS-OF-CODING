#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your marks out of 100\n");
    scanf("%d",&grade);
    if(grade>=90&&grade<=100)
    {
        printf("Your grade is A");
    }
    else if (grade>=80&&grade<=89)
    {
        printf("Your grade is B");
    }
    else if(grade>=70&&grade<=79)
    {
        printf("Your grade is C");
    }
    else if(grade>=60&&grade<=69)
    {
        printf("Your grade is D");
    }
    else if(grade<60&&grade>=0)
    {
        printf("Your grade is F");
    }
    else 
    {
        printf("Invalid marks");
    }
    return 0;
}