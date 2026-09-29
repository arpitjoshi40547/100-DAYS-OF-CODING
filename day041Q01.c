//Count characters in a string without using built-in length functions.

#include <stdio.h>
int sizeofstring(char Str[])
{
    int i=0;
    while(Str[i]!='\0')
    i++;
    return i;
}

int main()
{
    char Stri[100];
    printf("Enter any Phrase\n");
    fgets(Stri, sizeof(Stri), stdin);
    printf("Your word has %d characters",sizeofstring(Stri));
    return 0;

}