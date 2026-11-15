//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>
#include <string.h>

// Define the Student structure (without enum)
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that accepts the structure as a parameter (by value) and prints its members
void printStudent(struct Student s) {
    printf("\nOutput:\n");
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1;

    // Taking user input
    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    // Remove the trailing newline character added by fgets
    s1.name[strcspn(s1.name, "\n")] = 0;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    scanf("%d", &s1.marks);

    // Calling the function (passing the structure by value)
    printStudent(s1);

    return 0;
}