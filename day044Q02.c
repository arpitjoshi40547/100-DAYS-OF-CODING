//Replace spaces with hyphens in a string.

#include <stdio.h>
#include <ctype.h>
void replace(char arr[])
{
    int i=0;
    int spaces=0;
    while(arr[i]!='\0')
    {
        if(isspace(arr[i]))
        arr[i]='-';
        i++;
    }
    printf("The New String is\n%s",arr);
}
int main()
{
    char Phrase[100];
    printf("Enter a Phrase\n");
    fgets(Phrase,sizeof(Phrase),stdin);
    replace(Phrase);
    return 0;
}