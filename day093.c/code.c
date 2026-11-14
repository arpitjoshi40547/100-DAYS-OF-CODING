//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

// Define an enum for student departments
enum Department 
{
    CSE,
    ECE,
    ME,
    CE,
    UNKNOWN
};

// Helper function to print department name
const char* getDeptName(enum Department dept) 
{
    switch (dept) {
        case CSE: return "CSE";
        case ECE: return "ECE";
        case ME:  return "ME";
        case CE:  return "CE";
        default:  return "Unknown";
    }
}

struct Student 
{
    char name[50];
    int roll;
    int marks;
    enum Department dept;
};

int main() 
{
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student s[n];
    int topperIndex = 0;

    printf("Enter details (Name, Roll, Marks, Dept Code [0:CSE, 1:ECE, 2:ME, 3:CE]):\n");
    for (int i = 0; i < n; i++) {
        int deptCode;
        scanf("%s %d %d %d", s[i].name, &s[i].roll, &s[i].marks, &deptCode);
        s[i].dept = (enum Department)deptCode;
        
        // Track the topper
        if (s[i].marks > s[topperIndex].marks) 
        {
            topperIndex = i;
        }
    }

    printf("\nTopper: %s (Marks: %d, Dept: %s)\n", 
           s[topperIndex].name, 
           s[topperIndex].marks, 
           getDeptName(s[topperIndex].dept));

    return 0;
}