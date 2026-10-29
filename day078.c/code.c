//To count no of vowels and consonents in file and ignore  and ignore special character and digits
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *file = fopen("input.txt","r");
    if(file == NULL)
    {
        perror("Error opening the file");
        return 1;
    }
    int c ;
    char ch;
    int vowels=0;
    int consonents=0;
    while((ch=fgetc(file)) != EOF)
    {
        if(isalpha(ch))
        {
            char lower_case=tolower(ch);
            if (lower_case == 'a' || lower_case == 'e' || lower_case == 'i' || lower_case == 'o' || lower_case == 'u')
            {
                vowels++;
            }
            else
            {
                consonents++;
            }
        }
    }
    printf("Vowels::%d\n",vowels);
    printf("Consonents::%d\n",consonents);
    fclose(file);
    return 0;
}