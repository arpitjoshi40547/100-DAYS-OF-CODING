//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

// Define enum for student status
enum Status {
    FAIL,
    PASS
};

// Define structure containing student details and the enum
struct Student {
    char name[50];
    int roll;
    float marks;
    enum Status status;
};

// Function returning the top student's structure
struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    
    return top;
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter Name, Roll Number, and Marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
        
        // Assign enum value based on marks
        students[i].status = (students[i].marks >= 40) ? PASS : FAIL;
    }
    
    // Receive the returned structure
    struct Student winner = getTopStudent(students, n);
    
    printf("\nTop Student: %s | Roll: %d | Marks: %.0f | Status: %s\n", 
           winner.name, 
           winner.roll, 
           winner.marks, 
           (winner.status == PASS) ? "PASS" : "FAIL");
    
    return 0;
}