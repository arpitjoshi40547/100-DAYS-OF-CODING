#include <stdio.h>

int main()
{
    char file_name[200];
    printf("Enter the file name: ");
    scanf("%s", file_name);
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("An error occurred or the file does not exist\n");
        return 1;
    }
    int ch; 
    while ((ch = fgetc(file)) != EOF) 
    {
        putchar(ch);
    }

    fclose(file);
    return 0;
}