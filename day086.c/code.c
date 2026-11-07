// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char opStr[20];
    int num1, num2;

    if (scanf("%s %d %d", opStr, &num1, &num2) != 3) {
        return 0;
    }

    enum Operation op;

    if (strcmp(opStr, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(opStr, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(opStr, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        return 0;
    }

    switch (op) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
    }

    return 0;
}