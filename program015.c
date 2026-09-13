#include <stdio.h>

int main()
{
    char word;
    printf("Enter a character \n ");
    scanf("%c",&word);
    if(word>=65&&word<=96 )
    {
        printf("The character is upper case");
    }
    else if(word>=97&&word<=122)
    {
        printf("The character is lower case");
    }
    else if(word>=48&&word<=57 )
    {
        printf("The character is a number ");
    }
    else
    {
        printf("The character is a special character");
    }
    return 0;
}