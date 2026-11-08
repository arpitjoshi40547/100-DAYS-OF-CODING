//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define the enum for user roles
typedef enum {
    ADMIN,
    USER,
    GUEST,
    UNKNOWN
} Role;

// Function to convert a string to the corresponding Role enum (case-insensitive)
Role getRoleFromString(const char *roleStr) {
    char temp[20];
    int i = 0;
    
    // Copy and convert each character to uppercase
    while (roleStr[i] != '\0' && i < 19) {
        temp[i] = toupper((unsigned char)roleStr[i]);
        i++;
    }
    temp[i] = '\0';

    if (strcmp(temp, "ADMIN") == 0) return ADMIN;
    if (strcmp(temp, "USER") == 0) return USER;
    if (strcmp(temp, "GUEST") == 0) return GUEST;
    return UNKNOWN;
}

// Function to display messages based on the role
void displayMessage(Role role) {
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid Role!\n");
            break;
    }
}

int main() {
    char input[20];
    
    // Read input from user
    if (scanf("%19s", input) == 1) {
        Role role = getRoleFromString(input);
        displayMessage(role);
    }
    
    return 0;
}