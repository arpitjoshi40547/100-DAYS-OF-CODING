#include <stdio.h>
#include <ctype.h>

int main() 
{
    // 1. Open input.txt in read mode
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) 
    {
        printf("Error: Could not open input.txt for reading.\n");
        return 1;
    }

    // 2. Open output.txt in write mode
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) 
    {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(infile); // Clean up opened input file before exiting
        return 1;
    }

    char str[256];

    // 3. Read line by line from the input file until EOF
    while (fgets(str, sizeof(str), infile) != NULL) 
    {
        int capitalize_next = 1;

        // Apply capitalization logic to the string
        for (int i = 0; str[i] != '\0'; i++) 
        {
            if (isspace(str[i])) 
            {
                capitalize_next = 1;
            } else if (capitalize_next) 
            {
                str[i] = toupper(str[i]);
                capitalize_next = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }

        // 4. Write the modified string into the output file
        fputs(str, outfile);
    }

    // 5. Close both file streams
    fclose(infile);
    fclose(outfile);

    printf("Processing complete! Check 'output.txt' for results.\n");

    return 0;
}