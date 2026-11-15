Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>

// Define an enum for Student Grade/Division
enum Grade {
    DISTINCTION,
    FIRST_CLASS,
    SECOND_CLASS,
    PASS,
    FAIL
};

// Define the Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
    enum Grade grade; // Using enum as a member inside the structure
};

// Helper function to convert enum grade to a printable string
const char* getGradeString(enum Grade g) {
    switch (g) {
        case DISTINCTION: return "Distinction";
        case FIRST_CLASS: return "First Class";
        case SECOND_CLASS: return "Second Class";
        case PASS: return "Pass";
        case FAIL: return "Fail";
        default: return "Unknown";
    }
}

// Function that accepts the structure as a parameter and prints its members
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d | Grade: %s\n", 
           s.name, s.roll, s.marks, getGradeString(s.grade));
}

int main() {
    // Test case initialization with an enum value
    struct Student s1 = {"Neha", 104, 92, DISTINCTION};
    
    // Calling the function
    printStudent(s1);
    
    return 0;
}