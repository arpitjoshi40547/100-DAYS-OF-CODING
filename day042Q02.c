//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
void touppercase(char arr[])
{
    char ch;
    for(int i=0;arr[i]!='\0';i++)
    {
        ch=arr[i];
        if(ch>=97&&ch<=122)
        {
            ch=ch-32;
            arr[i]=ch;
        }
    }
    printf("The Phrase in Upper Case is: %s", arr);
}
int main()
{
    char Phrase[100];
    printf("Enter a Phrase to get converted into Upper case:");
    fgets(Phrase,sizeof(Phrase),stdin);
    touppercase(Phrase);
    return 0;
}