// Remove all vowels from a string
#include <stdio.h>
void removevowels(char arr[])
{
    int i=0;
    char ch;
    int j=0;
    while(arr[i] != '\0')
    {
        ch=arr[i];
        if (!(ch == 'a'||ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch == 'I'||ch == 'o'||ch == 'O'||ch == 'u'||ch == 'U'))
        {
            arr[j]=arr[i];
            j++;
        }
        i++;
    }
    arr[j] = '\0';
    printf("The Given sentence without vowels is:%s",arr);
}
int main()
{
    char Phrase[500];
    printf("Enter a Phrase:");
    fgets(Phrase,sizeof(Phrase),stdin);
    removevowels(Phrase);
    return 0;
}