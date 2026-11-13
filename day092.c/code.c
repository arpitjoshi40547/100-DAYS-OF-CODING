//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/


#include <stdio.h>

// Define an enum for Student Departments
enum Department {
    CSE = 1,
    ECE,
    ME,
    CE,
    EE
};

// Helper function to convert enum value to a readable string for display
const char* getDepartmentName(enum Department dept) {
    switch(dept) {
        case CSE: return "CSE";
        case ECE: return "ECE";
        case ME:  return "Mechanical";
        case CE:  return "Civil";
        case EE:  return "Electrical";
        default:  return "Unknown";
    }
}

// Define the structure for a Student
struct Student {
    char name[50];
    int roll;
    float marks;
    enum Department dept; // Enum used as a member inside the structure
};

int main() {
    struct Student students[5];
    int i, deptChoice;

    // Input details for 5 students
    printf("Enter details for 5 students (Name, Roll Number, Marks, Department):\n");
    printf("Department Codes:\n 1. CSE\n 2. ECE\n 3. Mechanical\n 4. Civil\n 5. Electrical\n");
    
    for(i = 0; i < 5; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);
        
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
        
        printf("Enter Department (1-5): ");
        scanf("%d", &deptChoice);
        students[i].dept = (enum Department)deptChoice;
    }

    // Output details in a clean, tabular format
    printf("\n\n============================================================\n");
    printf("%-15s %-10s %-10s %-15s\n", "Name", "Roll No", "Marks", "Department");
    printf("============================================================\n");
    
    for(i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10.2f %-15s\n", 
               students[i].name, 
               students[i].roll, 
               students[i].marks, 
               getDepartmentName(students[i].dept));
    }
    printf("============================================================\n");

    return 0;
}