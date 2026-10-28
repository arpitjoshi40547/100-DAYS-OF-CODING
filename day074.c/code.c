//to copy content the content of a file into another
#include <stdio.h>
int main()
{
    char input_file[100];
    char output_file[100];
    printf("Enter the name of input file:");
    scanf("%s",input_file);
    printf("Enter the name of ouput file:");
    scanf("%s",output_file);
    FILE *in = fopen(input_file,"r");
    if(in == NULL)
    {
        printf("An error occured while opening the file\n");
        return 1;
    }
    FILE *out = fopen(output_file,"w");
    if (out == NULL)
    {
        printf("An error occurred while creating the output file.\n");
        fclose(in);
        return 1;
    }
    char str[1000];
    while(fgets(str,sizeof(str),in)!=EOF)
    {
        fputs(str,out);
    }
    fclose(in);
    fclose(out);
    printf("Data has been copied to the new file");
    return 0;
}