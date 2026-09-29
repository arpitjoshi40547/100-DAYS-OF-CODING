// Print each character of a string on a new line.




#include <stdio.h>
void printinnextline(char Phrase[])
{
    for (int i = 0; Phrase[i] != '\0'; i++)
    {
        if (Phrase[i] == '\n')
            continue;
        printf("%c\n", Phrase[i]);
    }
}

int main()
{
    char Phrase[100];
    printf("Enter a Phrase\n");
    fgets(Phrase, sizeof(Phrase), stdin);
    printinnextline(Phrase);
    return 0;
}