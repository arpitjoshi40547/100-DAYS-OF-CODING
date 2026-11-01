// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *file = fopen("student.txt", "w");
    if (file == NULL)
    {
        perror("Error opening file!\n");
        return 1;
    }
    char name[50];
    int rollNo;
    int marks;
    int n;
    printf("Enter the number of Student Records you want to enter:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n--- Enter details for student %d ---\n", i + 1);

        printf("Name: ");
        scanf("%49s", name);

        printf("RollNo: ");
        scanf("%d", &rollNo);

        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(file, "%s %d %d\n", name, rollNo, marks);
    }

    fclose(file);

    file = fopen("student.txt", "r");
    if (file == NULL)
    {
        perror("Error opening the file");
        return 1;
    }

    printf("\n--- Displaying Student Records from File ---\n");

    while (fscanf(file, "%s %d %d", name, &rollNo, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, rollNo, marks);
    }

    fclose(file);

    return 0;
}
