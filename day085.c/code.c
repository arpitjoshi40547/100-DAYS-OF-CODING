//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12
*/
#include <stdio.h>

enum Elements 
{
    A = 10,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I
};

int main() 
{
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    printf("A=%d\n", D);
    printf("B=%d\n", E);
    printf("C=%d\n", F);
    printf("A=%d\n", G);
    printf("B=%d\n", H);
    printf("C=%d\n", I);
    return 0;
}

