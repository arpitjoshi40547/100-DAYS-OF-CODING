//To change all the letter of a file to upper case
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *file = fopen("input.txt","r");
    if(file == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    FILE *output_file = fopen("output.txt","w");
    if(output_file == NULL)
    {
        perror("Error opening file");
        fclose(file);
        return 1;
    }
    int ch=0;
    while((ch=fgetc(file))!=EOF)
    {
        ch = toupper(ch);
        fputc(ch,output_file);
    }
    printf("The Output_file was created and Words where successfully changed into Upper_Case");
    fclose(file);
    fclose(output_file);
    return 0;
}