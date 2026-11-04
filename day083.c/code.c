//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define the Month enum
typedef enum 
{
    JAN, FEB, MAR, APR,
    MAY, JUN, JUL, AUG,
    SEP, OCT, NOV, DEC,
    INVALID_MONTH
} Month;

// Function to get the month enum from a 3-letter string
Month getMonthFromString(const char *str) 
{
    char upper[4];
    for (int i = 0; i < 3 && str[i] != '\0'; i++) 
    {
        upper[i] = toupper(str[i]);
    }
    upper[3] = '\0';

    if (strcmp(upper, "JAN") == 0) return JAN;
    if (strcmp(upper, "FEB") == 0) return FEB;
    if (strcmp(upper, "MAR") == 0) return MAR;
    if (strcmp(upper, "APR") == 0) return APR;
    if (strcmp(upper, "MAY") == 0) return MAY;
    if (strcmp(upper, "JUN") == 0) return JUN;
    if (strcmp(upper, "JUL") == 0) return JUL;
    if (strcmp(upper, "AUG") == 0) return AUG;
    if (strcmp(upper, "SEP") == 0) return SEP;
    if (strcmp(upper, "OCT") == 0) return OCT;
    if (strcmp(upper, "NOV") == 0) return NOV;
    if (strcmp(upper, "DEC") == 0) return DEC;

    return INVALID_MONTH;
}

int main() 
{
    char input[10];
    
    printf("Enter month abbreviation (e.g., FEB): ");
    if (scanf("%s", input) != 1) 
    {
        return 1;
    }

    Month m = getMonthFromString(input);

    printf("Output:\n");
    switch (m) 
    {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("Invalid month entered.\n");
            break;
    }
    return 0;
}
