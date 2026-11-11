#include <stdio.h>
#include <string.h>

// Define the enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define the struct containing the Gender enum
struct Person {
    enum Gender gender;
};

int main() {
    char input[50];
    if (scanf("%49s", input) == 1) {
        struct Person p;
        if (strcmp(input, "Gender=MALE") == 0) {
            p.gender = MALE;
            printf("Male\n");
        } else if (strcmp(input, "Gender=FEMALE") == 0) {
            p.gender = FEMALE;
            printf("Female\n");
        } else {
            p.gender = OTHER;
            printf("Other\n");
        }
    }
    return 0;
}