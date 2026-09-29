//Count vowels and consonants in a string.

#include <stdio.h>
int count(char str[])
{
    int i=0;
    int vowels=0;
    int consonants=0;
    while(str[i]!='\0')
    {
        if (str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] == 'u'||
            str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] == 'U')
            vowels++;
        else if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            consonants++;
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}
int main()
{
    char Phrase[100];
    printf("Enter a Phrase:");
    fgets(Phrase, sizeof(Phrase), stdin);
    count(Phrase);
    return 0;
}