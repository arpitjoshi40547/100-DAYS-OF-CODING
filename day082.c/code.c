//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Define the enum for traffic lights
enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    UNKNOWN
};
int main() 
{
    char input[20];
    
    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    if (scanf("%s", input) == 1) {
        enum TrafficLight light;
        
        // Convert the input string to uppercase to make it case-insensitive
        for (int i = 0; input[i]; i++) {
            input[i] = toupper(input[i]);
        }
        
        // Map string input to the enum
        if (strcmp(input, "RED") == 0) {
            light = RED;
        } else if (strcmp(input, "YELLOW") == 0) {
            light = YELLOW;
        } else if (strcmp(input, "GREEN") == 0) {
            light = GREEN;
        } else {
            light = UNKNOWN;
        }
        
        // Switch on the enum value
        switch (light) {
            case RED:
                printf("Stop\n");
                break;
            case YELLOW:
                printf("Wait\n");
                break;
            case GREEN:
                printf("Go\n");
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }
    
    return 0;
}