//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
enum Outcome
{
    SUCCESS,
    FAILURE,
    TIMEOUT,
    UNKNOWN
};
int main()
{
    char Input[20];
    printf("Enter Your message\n");
    if(scanf("%s",&Input))
    {
        enum Outcome Outcome;
        for (int i = 0; Input[i]; i++) 
        {
            Input[i] = toupper(Input[i]);
        }
        if (strcmp(Input, "SUCCESS") == 0) 
        {
            Outcome = SUCCESS;
        } else if (strcmp(Input, "FAILURE") == 0) 
        {
            Outcome = FAILURE;
        } else if (strcmp(Input, "TIMEOUT") == 0) 
        {
            Outcome = TIMEOUT;
        } else 
        {
            Outcome = UNKNOWN;
        }
        switch (Outcome)
        {
        case SUCCESS:
            printf("Operation SUCCESS\n");
            break;
        case FAILURE:
            printf("Operation Failure\n");
            break;
        case TIMEOUT:
            printf("Operation Due to timefailure\n");
        default:
            printf("UNKNOWN");
            break;
        }
    }
}