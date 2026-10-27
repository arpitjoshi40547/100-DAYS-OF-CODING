//To amend a file without changing its content
#include <stdio.h>
#include <stdio.h>
int main() 
{
    FILE *file = fopen("output.txt", "a");
    if (file == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    char buffer[256];
    printf("Enter text to append: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) 
    {
        fputs(buffer, file);
    }
    fclose(file);
    printf("Input appended to file successfully.\n");
    return 0;
}
