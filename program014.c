#include <stdio.h>
#include <ctype.h>

int main()
{
    char word;
    printf("Enter a alphabet\n");
    scanf("%c",&word);
    word= tolower(word);
    if(isalpha(word))
    {
        if(word=='a'||word=='e'||word=='i'||word=='o'||word=='u')
        {
            printf("The alphabet is vowel ");
        }
        else
        {
            printf("The alphabet is a consonent");
        }
    }
    else 
    printf("The character entered is not an alphabet");
    return 0;
}